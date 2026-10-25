// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142aa9460 FUN_142aa9460 body=137 status=ok
// SIG undefined FUN_142aa9460(void)

undefined4 FUN_142aa9460(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
  }
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f92b68(param_1 + 0x160,local_20,param_2,0);
      uVar1 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa94ea FUN_142aa94ea body=64 status=ok
// SIG undefined FUN_142aa94ea(void)

undefined8 FUN_142aa94ea(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar3 = lVar1;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      uVar2 = FUN_146f78652(param_1 + 0x28);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142aa952a FUN_142aa952a body=64 status=ok
// SIG undefined FUN_142aa952a(void)

undefined8 FUN_142aa952a(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar3 = lVar1;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      uVar2 = FUN_146f784a6(param_1 + 0x28);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142aa956a FUN_142aa956a body=67 status=ok
// SIG undefined FUN_142aa956a(void)

undefined8 FUN_142aa956a(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar3 = lVar1;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      uVar2 = FUN_146f78a74(param_1 + 0x28);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142aa95ae FUN_142aa95ae body=140 status=ok
// SIG undefined FUN_142aa95ae(void)

undefined4 FUN_142aa95ae(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f92b68(param_1 + 0x198,local_20,param_2,0);
      uVar1 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa963c FUN_142aa963c body=137 status=ok
// SIG undefined FUN_142aa963c(void)

undefined4 FUN_142aa963c(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
  }
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f92b68(param_1 + 0x128,local_20,param_2,0);
      uVar1 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa96c6 FUN_142aa96c6 body=65 status=ok
// SIG undefined FUN_142aa96c6(void)

void FUN_142aa96c6(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f795ea(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa9708 FUN_142aa9708 body=203 status=ok
// SIG undefined FUN_142aa9708(void)

void FUN_142aa9708(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f732ec(param_1 + 0x2b0,&local_30,param_2,0);
      *(int *)(param_3 + 1) = local_28;
      if (local_28 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_146f92878(param_3,local_28);
        if (local_28 != 0) {
          memcpy((void *)*param_3,local_30,(longlong)local_28 << 2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa97d4 FUN_142aa97d4 body=65 status=ok
// SIG undefined FUN_142aa97d4(void)

void FUN_142aa97d4(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f7943a(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa9816 FUN_142aa9816 body=65 status=ok
// SIG undefined FUN_142aa9816(void)

void FUN_142aa9816(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f791e2(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa9858 FUN_142aa9858 body=107 status=ok
// SIG undefined FUN_142aa9858(void)

void FUN_142aa9858(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
  }
  uVar3 = 0xffffffff;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar5 = lVar4;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x118) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      uVar3 = *(undefined4 *)(*plVar2 + (longlong)(int)(param_3 * (int)plVar2[2]) * 4);
    }
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 142aa98c4 FUN_142aa98c4 body=203 status=ok
// SIG undefined FUN_142aa98c4(void)

void FUN_142aa98c4(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f716d6(param_1 + 0x240,&local_30,param_2,0);
      *(int *)(param_3 + 1) = local_28;
      if (local_28 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_146f92816(param_3,local_28);
        if (local_28 != 0) {
          memcpy((void *)*param_3,local_30,(longlong)local_28 << 2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa9990 FUN_142aa9990 body=190 status=ok
// SIG undefined FUN_142aa9990(void)

void FUN_142aa9990(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_146f921fc(param_1 + 0x28,param_2,&local_28);
      if (&local_28 == param_3) {
        if (local_28 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_28;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_20;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_20._4_4_;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa9a50 FUN_142aa9a50 body=65 status=ok
// SIG undefined FUN_142aa9a50(void)

void FUN_142aa9a50(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f78f8a(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa9a92 FUN_142aa9a92 body=65 status=ok
// SIG undefined FUN_142aa9a92(void)

void FUN_142aa9a92(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f78d62(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa9ad4 FUN_142aa9ad4 body=255 status=ok
// SIG undefined FUN_142aa9ad4(void)

void FUN_142aa9ad4(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar5 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar5 = lVar3;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f78d12(param_3,3,1);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x30);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 0x18);
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2;
      }
      if ((longlong)*(int *)(param_1 + 0xe8) == 0) {
        lVar5 = (ulonglong)(param_2 >> 8) * 0xc18;
        lVar3 = *plVar4 + lVar5;
        lVar7 = (longlong)*(int *)(lVar3 + 0x410 + ((ulonglong)param_2 & 0xff) * 4);
        if (lVar7 == 0) {
          return;
        }
        puVar6 = (undefined4 *)
                 ((longlong)*(int *)(lVar3 + 0x10 + ((ulonglong)param_2 & 0xff) * 4) * 4 +
                 *(longlong *)(*plVar4 + lVar5));
        puVar8 = puVar6 + lVar7;
      }
      else {
        puVar6 = (undefined4 *)((longlong)(int)(param_2 * (int)plVar4[2]) * 4 + *plVar4);
        puVar8 = puVar6 + *(int *)(param_1 + 0xe8);
      }
      do {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_146f99d00(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *puVar6;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar8);
    }
  }
  return;
}



// FUNCTION 142aa9bd4 FUN_142aa9bd4 body=107 status=ok
// SIG undefined FUN_142aa9bd4(void)

void FUN_142aa9bd4(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  uVar3 = 0xffffffff;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar5 = lVar4;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      uVar3 = *(undefined4 *)(*plVar2 + (longlong)(int)(param_3 * (int)plVar2[2]) * 4);
    }
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 142aa9c40 FUN_142aa9c40 body=107 status=ok
// SIG undefined FUN_142aa9c40(void)

void FUN_142aa9c40(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  uVar3 = 0xffffffff;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar5 = lVar4;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x110) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x110) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      uVar3 = *(undefined4 *)(*plVar2 + (longlong)(int)(param_3 * (int)plVar2[2]) * 4);
    }
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 142aa9cac FUN_142aa9cac body=170 status=ok
// SIG undefined FUN_142aa9cac(void)

void FUN_142aa9cac(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar6 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar6 = lVar4;
    }
    if (param_4 < 3 &&
        (*(uint *)(lVar6 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar5 = plVar1;
      }
      if (*(int *)(param_1 + 0xd0) == 0) {
        plVar5 = (longlong *)((ulonglong)(param_3 >> 8) * 0xc18 + *plVar5);
        iVar3 = *(int *)((longlong)plVar5 + (ulonglong)(param_3 & 0xff) * 4 + 0x10);
      }
      else {
        iVar3 = param_3 * (int)plVar5[2];
      }
      uVar2 = *(undefined4 *)((longlong)iVar3 * 4 + *plVar5 + (ulonglong)param_4 * 4);
    }
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 142aa9d56 FUN_142aa9d56 body=237 status=ok
// SIG undefined FUN_142aa9d56(void)

void FUN_142aa9d56(longlong param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar8 + 0x18))) {
    lVar7 = *(longlong *)(lVar8 + 0x10);
    if (*(longlong *)(lVar8 + 0x10) == 0) {
      lVar7 = lVar8;
    }
    if ((*(uint *)(lVar7 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      lVar8 = (longlong)*(int *)(param_1 + 0xd0);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x30);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 200) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
      }
      if (lVar8 == 0) {
        lVar5 = (ulonglong)(param_2 >> 8) * 0xc18;
        lVar7 = *plVar4 + lVar5;
        lVar8 = (longlong)*(int *)(lVar7 + 0x410 + (ulonglong)(param_2 & 0xff) * 4);
        if (lVar8 == 0) {
          return;
        }
        puVar6 = (undefined4 *)
                 ((longlong)*(int *)(lVar7 + 0x10 + (ulonglong)(param_2 & 0xff) * 4) * 4 +
                 *(longlong *)(*plVar4 + lVar5));
      }
      else {
        puVar6 = (undefined4 *)((longlong)(int)(param_2 * (int)plVar4[2]) * 4 + *plVar4);
      }
      puVar1 = puVar6 + lVar8;
      do {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_146f924ea(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *puVar6;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
  }
  return;
}



// FUNCTION 142aa9e44 FUN_142aa9e44 body=255 status=ok
// SIG undefined FUN_142aa9e44(void)

void FUN_142aa9e44(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar5 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar5 = lVar3;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f78cc2(param_3,3,1);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x30);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2;
      }
      if ((longlong)*(int *)(param_1 + 0xf8) == 0) {
        lVar5 = (ulonglong)(param_2 >> 8) * 0xc18;
        lVar3 = *plVar4 + lVar5;
        lVar7 = (longlong)*(int *)(lVar3 + 0x410 + ((ulonglong)param_2 & 0xff) * 4);
        if (lVar7 == 0) {
          return;
        }
        puVar6 = (undefined4 *)
                 ((longlong)*(int *)(lVar3 + 0x10 + ((ulonglong)param_2 & 0xff) * 4) * 4 +
                 *(longlong *)(*plVar4 + lVar5));
        puVar8 = puVar6 + lVar7;
      }
      else {
        puVar6 = (undefined4 *)((longlong)(int)(param_2 * (int)plVar4[2]) * 4 + *plVar4);
        puVar8 = puVar6 + *(int *)(param_1 + 0xf8);
      }
      do {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_146f9d70c(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *puVar6;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar8);
    }
  }
  return;
}



// FUNCTION 142aa9f44 FUN_142aa9f44 body=62 status=ok
// SIG undefined FUN_142aa9f44(void)

void FUN_142aa9f44(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f786bc(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa9f82 FUN_142aa9f82 body=200 status=ok
// SIG undefined FUN_142aa9f82(void)

void FUN_142aa9f82(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f7176e(param_1 + 0x160,&local_30,param_2,0);
      *(int *)(param_3 + 1) = local_28;
      if (local_28 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_146f98740(param_3,local_28);
        if (local_28 != 0) {
          memcpy((void *)*param_3,local_30,(longlong)local_28 << 2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaa04c FUN_142aaa04c body=62 status=ok
// SIG undefined FUN_142aaa04c(void)

void FUN_142aaa04c(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f7854a(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aaa08a FUN_142aaa08a body=62 status=ok
// SIG undefined FUN_142aaa08a(void)

void FUN_142aaa08a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f783a8(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aaa0c8 FUN_142aaa0c8 body=65 status=ok
// SIG undefined FUN_142aaa0c8(void)

void FUN_142aaa0c8(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f789a2(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aaa10a FUN_142aaa10a body=203 status=ok
// SIG undefined FUN_142aaa10a(void)

void FUN_142aaa10a(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f716d6(param_1 + 0x198,&local_30,param_2,0);
      *(int *)(param_3 + 1) = local_28;
      if (local_28 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_146f92816(param_3,local_28);
        if (local_28 != 0) {
          memcpy((void *)*param_3,local_30,(longlong)local_28 << 2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaa1d6 FUN_142aaa1d6 body=95 status=ok
// SIG undefined FUN_142aaa1d6(void)

undefined4 * FUN_142aaa1d6(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      FUN_146f79774(param_1 + 0x28,param_2);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142aaa236 FUN_142aaa236 body=95 status=ok
// SIG undefined FUN_142aaa236(void)

undefined4 * FUN_142aaa236(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      FUN_146f78eca(param_1 + 0x28,param_2);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142aaa296 FUN_142aaa296 body=125 status=ok
// SIG undefined FUN_142aaa296(void)

undefined4 * FUN_142aaa296(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < (int)*(uint *)(lVar2 + 0x18))) {
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar1 = lVar2;
    }
    if (((((*(uint *)(lVar1 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
         (-1 < (int)param_4)) && (param_4 < *(uint *)(lVar2 + 0x18))) &&
       ((*(uint *)(lVar1 + (ulonglong)(param_4 >> 5) * 4) >> (param_4 & 0x1f) & 1) != 0)) {
      FUN_146f71806(param_1 + 0x28,param_2);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142aaa314 FUN_142aaa314 body=107 status=ok
// SIG undefined FUN_142aaa314(void)

void FUN_142aaa314(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
  }
  uVar3 = 0xffffffff;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar5 = lVar4;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      uVar3 = *(undefined4 *)(*plVar2 + (longlong)(int)(param_3 * (int)plVar2[2]) * 4);
    }
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 142aaa380 FUN_142aaa380 body=122 status=ok
// SIG undefined FUN_142aaa380(void)

undefined4 * FUN_142aaa380(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < (int)*(uint *)(lVar2 + 0x18))) {
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar1 = lVar2;
    }
    if (((((*(uint *)(lVar1 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
         (-1 < (int)param_4)) && (param_4 < *(uint *)(lVar2 + 0x18))) &&
       ((*(uint *)(lVar1 + (ulonglong)(param_4 >> 5) * 4) >> (param_4 & 0x1f) & 1) != 0)) {
      FUN_146f6df8a(param_1 + 0x28,param_2);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142aaa3fa FUN_142aaa3fa body=244 status=ok
// SIG undefined FUN_142aaa3fa(void)

double * FUN_142aaa3fa(longlong param_1,double *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar6 + 0x18))) {
    lVar5 = *(longlong *)(lVar6 + 0x10);
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      lVar5 = lVar6;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      cVar4 = FUN_146f787ac(lVar6 + 0x20,DAT_14c99c0d0);
      if (cVar4 != '\0') {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(param_1 + 0x78);
        }
        FUN_146f7882c(lVar6 + 0x20,&local_2c,param_3,DAT_14c99c0d0);
        *param_2 = (double)local_2c;
        param_2[1] = (double)local_28;
        param_2[2] = (double)local_24;
        if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 142aaa4f0 FUN_142aaa4f0 body=200 status=ok
// SIG undefined FUN_142aaa4f0(void)

void FUN_142aaa4f0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f7163e(param_1 + 0x128,&local_30,param_2,0);
      *(int *)(param_3 + 1) = local_28;
      if (local_28 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_146f92612(param_3,local_28);
        if (local_28 != 0) {
          memcpy((void *)*param_3,local_30,(longlong)local_28 << 2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaa5ba FUN_142aaa5ba body=67 status=ok
// SIG undefined FUN_142aaa5ba(void)

undefined8 FUN_142aaa5ba(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar3 = lVar1;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      uVar2 = FUN_146f72814(param_1 + 0x28);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142aaa5fe FUN_142aaa5fe body=126 status=ok
// SIG undefined FUN_142aaa5fe(void)

undefined8 FUN_142aaa5fe(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar3 = lVar1;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0xa0);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar1 + 0x18))) {
        lVar3 = *(longlong *)(lVar1 + 0x10);
        if (*(longlong *)(lVar1 + 0x10) == 0) {
          lVar3 = lVar1;
        }
        if ((*(uint *)(lVar3 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
          uVar2 = FUN_146f78ade(param_1 + 0x28);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142aaa67c FUN_142aaa67c body=173 status=ok
// SIG undefined FUN_142aaa67c(void)

bool FUN_142aaa67c(longlong param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar5 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar5 = lVar3;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x30);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar4 = plVar1;
      }
      FUN_146f92b68(param_1 + 0x240,local_20,
                    *(undefined4 *)(*plVar4 + (longlong)(int)(param_2 * (int)plVar4[2]) * 4),0);
      bVar2 = 1 < local_18;
      goto LAB_142aaa6c9;
    }
  }
  bVar2 = false;
LAB_142aaa6c9:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaa72a FUN_142aaa72a body=64 status=ok
// SIG undefined FUN_142aaa72a(void)

undefined8 FUN_142aaa72a(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar3 = lVar1;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      uVar2 = FUN_146f71592(param_1 + 0x28);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142aaa76a FUN_142aaa76a body=65 status=ok
// SIG undefined FUN_142aaa76a(void)

void FUN_142aaa76a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f73066(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aaa7ac FUN_142aaa7ac body=124 status=ok
// SIG undefined FUN_142aaa7ac(void)

void FUN_142aaa7ac(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0xa8);
      }
      if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar1 + 0x18))) {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        if (*(longlong *)(lVar1 + 0x10) == 0) {
          lVar2 = lVar1;
        }
        if ((*(uint *)(lVar2 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
          FUN_146f7983c(param_1 + 0x28);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142aaa828 FUN_142aaa828 body=258 status=ok
// SIG undefined FUN_142aaa828(void)

void FUN_142aaa828(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar4 = lVar3;
    }
    if ((*(uint *)(lVar4 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      lVar3 = *param_3;
      iVar1 = (int)param_3[1];
      if ((longlong)iVar1 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(param_1 + 0x80);
        }
        lVar5 = 0;
        do {
          uVar2 = *(uint *)(lVar3 + lVar5);
          if (((int)uVar2 < 0) || (*(int *)(lVar4 + 0x18) <= (int)uVar2)) goto LAB_142aaa90a;
          lVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(longlong *)(lVar4 + 0x10) == 0) {
            lVar6 = lVar4;
          }
          if ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_142aaa90a;
          lVar5 = lVar5 + 4;
        } while ((longlong)iVar1 * 4 - lVar5 != 0);
      }
      FUN_146f719ac(param_1 + 0x28,param_2);
      local_38 = lVar3;
      local_30 = iVar1;
      FUN_146f6e1e4(param_1 + 0x28,param_2);
    }
  }
LAB_142aaa90a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaa92c FUN_142aaa92c body=205 status=ok
// SIG undefined FUN_142aaa92c(void)

void FUN_142aaa92c(longlong param_1,uint param_2,double *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar2 = lVar3;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      cVar1 = FUN_146f787ac(lVar3 + 0x20,DAT_14c99c0d0);
      if (cVar1 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
        if (lVar3 == 0) {
          lVar3 = *(longlong *)(param_1 + 0x78);
        }
        local_24 = (float)param_3[2];
        local_28 = (float)param_3[1];
        local_2c = (float)*param_3;
        FUN_146f788ec(lVar3 + 0x20,param_2,DAT_14c99c0d0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaa9fa FUN_142aaa9fa body=175 status=ok
// SIG undefined FUN_142aaa9fa(void)

undefined8 * FUN_142aaa9fa(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa7660;
    puVar1[10] = 0;
    puVar1[0xc] = 0x100000000;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x7c);
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(int *)((longlong)puVar1 + 0xc) = param_2;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa75d0;
    puVar1[6] = 0;
    puVar1[7] = 0x100000000;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x4c);
  }
  *puVar2 = 0x3f800000;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 142aaaaa9 FUN_142aaaaa9 body=154 status=ok
// SIG undefined FUN_142aaaaa9(void)

undefined8 * FUN_142aaaaa9(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar1[1] = 1;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa7780;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x44);
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *(undefined4 *)(puVar1 + 1) = 1;
    *(int *)((longlong)puVar1 + 0xc) = param_2;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa76f0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x3c);
  }
  *puVar2 = 1;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 142aaab43 FUN_142aaab43 body=154 status=ok
// SIG undefined FUN_142aaab43(void)

undefined8 * FUN_142aaab43(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar1[1] = 2;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa78a0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x44);
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *(undefined4 *)(puVar1 + 1) = 2;
    *(int *)((longlong)puVar1 + 0xc) = param_2;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa7810;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x3c);
  }
  *puVar2 = 1;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 142aaabdd FUN_142aaabdd body=96 status=ok
// SIG undefined FUN_142aaabdd(void)

longlong * FUN_142aaabdd(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar1 + 1) = 3;
  ppuVar2 = &PTR_FUN_149fa7930;
  if (param_2 == 0) {
    ppuVar2 = &PTR_FUN_149fa79c0;
  }
  *(int *)((longlong)puVar1 + 0xc) = param_2;
  puVar1[2] = 0;
  *puVar1 = ppuVar2;
  puVar1[6] = 0;
  puVar1[7] = 0x100000000;
  *param_1 = (longlong)puVar1;
  return param_1;
}



// FUNCTION 142aaac3d FUN_142aaac3d body=96 status=ok
// SIG undefined FUN_142aaac3d(void)

longlong * FUN_142aaac3d(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar1 + 1) = 4;
  ppuVar2 = &PTR_FUN_149fa7a50;
  if (param_2 == 0) {
    ppuVar2 = &PTR_FUN_149fa7ae0;
  }
  *(int *)((longlong)puVar1 + 0xc) = param_2;
  puVar1[2] = 0;
  *puVar1 = ppuVar2;
  puVar1[6] = 0;
  puVar1[7] = 0x100000000;
  *param_1 = (longlong)puVar1;
  return param_1;
}



// FUNCTION 142aaac9d FUN_142aaac9d body=96 status=ok
// SIG undefined FUN_142aaac9d(void)

longlong * FUN_142aaac9d(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar1 + 1) = 5;
  ppuVar2 = &PTR_FUN_149fa7b70;
  if (param_2 == 0) {
    ppuVar2 = &PTR_FUN_149fa7c00;
  }
  *(int *)((longlong)puVar1 + 0xc) = param_2;
  puVar1[2] = 0;
  *puVar1 = ppuVar2;
  puVar1[6] = 0;
  puVar1[7] = 0x100000000;
  *param_1 = (longlong)puVar1;
  return param_1;
}



// FUNCTION 142aaacfd FUN_142aaacfd body=182 status=ok
// SIG undefined FUN_142aaacfd(void)

undefined8 * FUN_142aaacfd(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar1[1] = 6;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa7d20;
    puVar1[7] = 0;
    puVar1[8] = 0x100000000;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x4c);
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *(undefined4 *)(puVar1 + 1) = 6;
    *(int *)((longlong)puVar1 + 0xc) = param_2;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa7c90;
    puVar1[6] = 0;
    puVar1[7] = 0x100000000;
    *(undefined4 *)(puVar1 + 8) = 0;
    puVar2 = (undefined4 *)((longlong)puVar1 + 0x44);
  }
  *puVar2 = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 142aaadb3 FUN_142aaadb3 body=286 status=ok
// SIG undefined FUN_142aaadb3(void)

undefined8 * FUN_142aaadb3(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x120,0x10);
    puVar1[1] = 7;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa7e40;
    puVar1[0x14] = 0;
    puVar1[0x16] = 0x100000000;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0x3ff00000;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0x3ff0000000000000;
    puVar1[0x21] = 0x3ff0000000000000;
    puVar2 = puVar1 + 0x22;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    *(undefined4 *)(puVar1 + 1) = 7;
    *(int *)((longlong)puVar1 + 0xc) = param_2;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_149fa7db0;
    puVar1[6] = 0;
    puVar1[7] = 0x100000000;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3ff00000;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0x3ff0000000000000;
    puVar1[0x11] = 0x3ff0000000000000;
    puVar2 = puVar1 + 0x12;
  }
  *puVar2 = 0x3ff0000000000000;
  puVar2[1] = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 142aaaf42 FUN_142aaaf42 body=73 status=ok
// SIG undefined FUN_142aaaf42(void)

void FUN_142aaaf42(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9bfd4(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaaf8c FUN_142aaaf8c body=73 status=ok
// SIG undefined FUN_142aaaf8c(void)

void FUN_142aaaf8c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c0a0(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aaafd6 FUN_142aaafd6 body=73 status=ok
// SIG undefined FUN_142aaafd6(void)

void FUN_142aaafd6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c156(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab020 FUN_142aab020 body=136 status=ok
// SIG undefined FUN_142aab020(void)

void FUN_142aab020(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar6 = 0;
    do {
      if (iVar3 < *(int *)(param_3 + 0x10)) {
        lVar5 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar5 = param_3 + 0x18;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        iVar4 = iVar3 * iVar2;
        lVar7 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar3;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar5 + lVar6 * 0x18) + (longlong)iVar4 * 4);
          if (fVar1 != *(float *)(param_3 + 0x40)) {
            return;
          }
          if (NAN(fVar1) || NAN(*(float *)(param_3 + 0x40))) {
            return;
          }
          iVar4 = iVar4 + iVar2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab0a8 FUN_142aab0a8 body=129 status=ok
// SIG undefined FUN_142aab0a8(void)

void FUN_142aab0a8(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(int *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3 * 4) !=
              *(int *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab129 FUN_142aab129 body=129 status=ok
// SIG undefined FUN_142aab129(void)

void FUN_142aab129(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(char *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3) !=
              *(char *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab1aa FUN_142aab1aa body=130 status=ok
// SIG undefined FUN_142aab1aa(void)

void FUN_142aab1aa(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar3 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar3 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
        iVar4 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + lVar5 * 0x18) + (longlong)iVar4 * 8) !=
              *(longlong *)(param_3 + 0x40)) {
            return;
          }
          iVar4 = iVar4 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab22d FUN_142aab22d body=73 status=ok
// SIG undefined FUN_142aab22d(void)

void FUN_142aab22d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c2fc(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab277 FUN_142aab277 body=73 status=ok
// SIG undefined FUN_142aab277(void)

void FUN_142aab277(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c3c8(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab2c1 FUN_142aab2c1 body=73 status=ok
// SIG undefined FUN_142aab2c1(void)

void FUN_142aab2c1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c47e(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab30b FUN_142aab30b body=136 status=ok
// SIG undefined FUN_142aab30b(void)

void FUN_142aab30b(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar6 = 0;
    do {
      if (iVar3 < *(int *)(param_3 + 0x10)) {
        lVar5 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar5 = param_3 + 0x18;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        iVar4 = iVar3 * iVar2;
        lVar7 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar3;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar5 + lVar6 * 0x18) + (longlong)iVar4 * 4);
          if (fVar1 != *(float *)(param_3 + 0x40)) {
            return;
          }
          if (NAN(fVar1) || NAN(*(float *)(param_3 + 0x40))) {
            return;
          }
          iVar4 = iVar4 + iVar2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab393 FUN_142aab393 body=129 status=ok
// SIG undefined FUN_142aab393(void)

void FUN_142aab393(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(int *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3 * 4) !=
              *(int *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab414 FUN_142aab414 body=129 status=ok
// SIG undefined FUN_142aab414(void)

void FUN_142aab414(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(char *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3) !=
              *(char *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab495 FUN_142aab495 body=130 status=ok
// SIG undefined FUN_142aab495(void)

void FUN_142aab495(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar3 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar3 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
        iVar4 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + lVar5 * 0x18) + (longlong)iVar4 * 8) !=
              *(longlong *)(param_3 + 0x40)) {
            return;
          }
          iVar4 = iVar4 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab518 FUN_142aab518 body=73 status=ok
// SIG undefined FUN_142aab518(void)

void FUN_142aab518(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c624(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab562 FUN_142aab562 body=73 status=ok
// SIG undefined FUN_142aab562(void)

void FUN_142aab562(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c6f0(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab5ac FUN_142aab5ac body=73 status=ok
// SIG undefined FUN_142aab5ac(void)

void FUN_142aab5ac(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c7a6(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab5f6 FUN_142aab5f6 body=136 status=ok
// SIG undefined FUN_142aab5f6(void)

void FUN_142aab5f6(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar6 = 0;
    do {
      if (iVar3 < *(int *)(param_3 + 0x10)) {
        lVar5 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar5 = param_3 + 0x18;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        iVar4 = iVar3 * iVar2;
        lVar7 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar3;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar5 + lVar6 * 0x18) + (longlong)iVar4 * 4);
          if (fVar1 != *(float *)(param_3 + 0x40)) {
            return;
          }
          if (NAN(fVar1) || NAN(*(float *)(param_3 + 0x40))) {
            return;
          }
          iVar4 = iVar4 + iVar2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab67e FUN_142aab67e body=129 status=ok
// SIG undefined FUN_142aab67e(void)

void FUN_142aab67e(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(int *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3 * 4) !=
              *(int *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab6ff FUN_142aab6ff body=129 status=ok
// SIG undefined FUN_142aab6ff(void)

void FUN_142aab6ff(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(char *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3) !=
              *(char *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab780 FUN_142aab780 body=130 status=ok
// SIG undefined FUN_142aab780(void)

void FUN_142aab780(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar3 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar3 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
        iVar4 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + lVar5 * 0x18) + (longlong)iVar4 * 8) !=
              *(longlong *)(param_3 + 0x40)) {
            return;
          }
          iVar4 = iVar4 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab803 FUN_142aab803 body=73 status=ok
// SIG undefined FUN_142aab803(void)

void FUN_142aab803(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9c94c(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab84d FUN_142aab84d body=73 status=ok
// SIG undefined FUN_142aab84d(void)

void FUN_142aab84d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9ca18(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab897 FUN_142aab897 body=73 status=ok
// SIG undefined FUN_142aab897(void)

void FUN_142aab897(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9cace(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aab8e1 FUN_142aab8e1 body=136 status=ok
// SIG undefined FUN_142aab8e1(void)

void FUN_142aab8e1(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar6 = 0;
    do {
      if (iVar3 < *(int *)(param_3 + 0x10)) {
        lVar5 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar5 = param_3 + 0x18;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        iVar4 = iVar3 * iVar2;
        lVar7 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar3;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar5 + lVar6 * 0x18) + (longlong)iVar4 * 4);
          if (fVar1 != *(float *)(param_3 + 0x40)) {
            return;
          }
          if (NAN(fVar1) || NAN(*(float *)(param_3 + 0x40))) {
            return;
          }
          iVar4 = iVar4 + iVar2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab969 FUN_142aab969 body=129 status=ok
// SIG undefined FUN_142aab969(void)

void FUN_142aab969(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(int *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3 * 4) !=
              *(int *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aab9ea FUN_142aab9ea body=129 status=ok
// SIG undefined FUN_142aab9ea(void)

void FUN_142aab9ea(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(char *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3) !=
              *(char *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aaba6b FUN_142aaba6b body=130 status=ok
// SIG undefined FUN_142aaba6b(void)

void FUN_142aaba6b(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar3 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar3 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
        iVar4 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + lVar5 * 0x18) + (longlong)iVar4 * 8) !=
              *(longlong *)(param_3 + 0x40)) {
            return;
          }
          iVar4 = iVar4 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aabaee FUN_142aabaee body=73 status=ok
// SIG undefined FUN_142aabaee(void)

void FUN_142aabaee(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9cc74(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aabb38 FUN_142aabb38 body=73 status=ok
// SIG undefined FUN_142aabb38(void)

void FUN_142aabb38(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9cd40(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aabb82 FUN_142aabb82 body=73 status=ok
// SIG undefined FUN_142aabb82(void)

void FUN_142aabb82(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9cdf6(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aabbcc FUN_142aabbcc body=136 status=ok
// SIG undefined FUN_142aabbcc(void)

void FUN_142aabbcc(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar6 = 0;
    do {
      if (iVar3 < *(int *)(param_3 + 0x10)) {
        lVar5 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar5 = param_3 + 0x18;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        iVar4 = iVar3 * iVar2;
        lVar7 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar3;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar5 + lVar6 * 0x18) + (longlong)iVar4 * 4);
          if (fVar1 != *(float *)(param_3 + 0x40)) {
            return;
          }
          if (NAN(fVar1) || NAN(*(float *)(param_3 + 0x40))) {
            return;
          }
          iVar4 = iVar4 + iVar2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aabc54 FUN_142aabc54 body=129 status=ok
// SIG undefined FUN_142aabc54(void)

void FUN_142aabc54(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(int *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3 * 4) !=
              *(int *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aabcd5 FUN_142aabcd5 body=129 status=ok
// SIG undefined FUN_142aabcd5(void)

void FUN_142aabcd5(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(char *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3) !=
              *(char *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aabd56 FUN_142aabd56 body=130 status=ok
// SIG undefined FUN_142aabd56(void)

void FUN_142aabd56(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar3 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar3 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
        iVar4 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + lVar5 * 0x18) + (longlong)iVar4 * 8) !=
              *(longlong *)(param_3 + 0x40)) {
            return;
          }
          iVar4 = iVar4 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aabdd9 FUN_142aabdd9 body=73 status=ok
// SIG undefined FUN_142aabdd9(void)

void FUN_142aabdd9(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9d48c(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aabe23 FUN_142aabe23 body=73 status=ok
// SIG undefined FUN_142aabe23(void)

void FUN_142aabe23(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9d558(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aabe6d FUN_142aabe6d body=73 status=ok
// SIG undefined FUN_142aabe6d(void)

void FUN_142aabe6d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_3 + 0xc) == 1) {
    FUN_146f9d60e(&local_10,param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aabeb7 FUN_142aabeb7 body=136 status=ok
// SIG undefined FUN_142aabeb7(void)

void FUN_142aabeb7(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar6 = 0;
    do {
      if (iVar3 < *(int *)(param_3 + 0x10)) {
        lVar5 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar5 = param_3 + 0x18;
        }
        iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        iVar4 = iVar3 * iVar2;
        lVar7 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar3;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar5 + lVar6 * 0x18) + (longlong)iVar4 * 4);
          if (fVar1 != *(float *)(param_3 + 0x40)) {
            return;
          }
          if (NAN(fVar1) || NAN(*(float *)(param_3 + 0x40))) {
            return;
          }
          iVar4 = iVar4 + iVar2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aabf3f FUN_142aabf3f body=129 status=ok
// SIG undefined FUN_142aabf3f(void)

void FUN_142aabf3f(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(int *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3 * 4) !=
              *(int *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aabfc0 FUN_142aabfc0 body=129 status=ok
// SIG undefined FUN_142aabfc0(void)

void FUN_142aabfc0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar4 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar4 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
        iVar3 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(char *)(*(longlong *)(lVar4 + lVar5 * 0x18) + (longlong)iVar3) !=
              *(char *)(param_3 + 0x40)) {
            return;
          }
          iVar3 = iVar3 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aac041 FUN_142aac041 body=130 status=ok
// SIG undefined FUN_142aac041(void)

void FUN_142aac041(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2;
  if (((param_2 & 0x100000000) != 0 && *(int *)(param_3 + 0xc) == 1) &&
     (0 < (longlong)*(int *)(param_3 + 0x38))) {
    lVar5 = 0;
    do {
      if (iVar2 < *(int *)(param_3 + 0x10)) {
        lVar3 = *(longlong *)(param_3 + 0x30);
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar3 = param_3 + 0x18;
        }
        iVar1 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
        iVar4 = iVar2 * iVar1;
        lVar6 = (longlong)*(int *)(param_3 + 0x10) - (longlong)iVar2;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + lVar5 * 0x18) + (longlong)iVar4 * 8) !=
              *(longlong *)(param_3 + 0x40)) {
            return;
          }
          iVar4 = iVar4 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != *(int *)(param_3 + 0x38));
  }
  return;
}



// FUNCTION 142aac0c4 FUN_142aac0c4 body=1880 status=ok
// SIG undefined FUN_142aac0c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aac0c4(void)

{
  uint uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = "Position ";
  local_70 = 9;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c0d0 = (ulonglong)uVar1;
  local_78 = "VertexIndex";
  local_70 = 0xb;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c0d8 = (ulonglong)uVar1;
  local_78 = "VertexIndex";
  local_70 = 0xb;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c0e0 = (ulonglong)uVar1;
  local_78 = "VertexInstanceIndex";
  local_70 = 0x13;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c0e8 = (ulonglong)uVar1;
  local_78 = "PolygonIndex";
  local_70 = 0xc;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c0f0 = (ulonglong)uVar1;
  local_78 = "EdgeIndex";
  local_70 = 9;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c0f8 = (ulonglong)uVar1;
  local_78 = "VertexIndex";
  local_70 = 0xb;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c100 = (ulonglong)uVar1;
  local_78 = "UVIndex";
  local_70 = 7;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c108 = (ulonglong)uVar1;
  local_78 = "PolygonGroupIndex";
  local_70 = 0x11;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c110 = (ulonglong)uVar1;
  local_78 = "UVCoordinate";
  local_70 = 0xc;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c118 = (ulonglong)uVar1;
  local_78 = "PolygonGroupIndex";
  local_70 = 0x11;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c120 = (ulonglong)uVar1;
  FUN_14098d3d2(FUN_142aa7e0a,L"/Script/MeshDescription",L"EComputeNTBsOptions",&DAT_14c99c128);
  local_78 = "Vertices";
  local_70 = 8;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c140 = (ulonglong)uVar1;
  local_78 = "VertexInstances";
  local_70 = 0xf;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c148 = (ulonglong)uVar1;
  local_78 = "UVs";
  local_70 = 3;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c150 = (ulonglong)uVar1;
  local_78 = "Edges";
  local_70 = 5;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c158 = (ulonglong)uVar1;
  local_78 = "Triangles";
  local_70 = 9;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c160 = (ulonglong)uVar1;
  local_78 = "Polygons";
  local_70 = 8;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c168 = (ulonglong)uVar1;
  local_78 = "PolygonGroups";
  local_70 = 0xd;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c170 = (ulonglong)uVar1;
  local_78 = "CornerSharpness";
  local_70 = 0xf;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c178 = (ulonglong)uVar1;
  local_78 = "TextureCoordinate";
  local_70 = 0x11;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c180 = (ulonglong)uVar1;
  local_78 = "Normal";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c188 = (ulonglong)uVar1;
  local_78 = "Tangent";
  local_70 = 7;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c190 = (ulonglong)uVar1;
  local_78 = "BinormalSign";
  local_70 = 0xc;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c198 = (ulonglong)uVar1;
  local_78 = "Color";
  local_70 = 5;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1a0 = (ulonglong)uVar1;
  local_78 = "IsHard";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1a8 = (ulonglong)uVar1;
  local_78 = "IsUVSeam";
  local_70 = 8;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1b0 = (ulonglong)uVar1;
  local_78 = "CreaseSharpness";
  local_70 = 0xf;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1b8 = (ulonglong)uVar1;
  local_78 = "Normal";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1c0 = (ulonglong)uVar1;
  local_78 = "Tangent";
  local_70 = 7;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1c8 = (ulonglong)uVar1;
  local_78 = "Binormal";
  local_70 = 8;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1d0 = (ulonglong)uVar1;
  local_78 = "Center";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1d8 = (ulonglong)uVar1;
  local_78 = "ImportedMaterialSlotName";
  local_70 = 0x18;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1e0 = (ulonglong)uVar1;
  local_78 = "EnableCollision";
  local_70 = 0xf;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1e8 = (ulonglong)uVar1;
  local_78 = "CastShadow";
  local_70 = 10;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c1f0 = (ulonglong)uVar1;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/MeshDescription",&PTR_FUN_149fa6db0,1,0);
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/MeshDescription",&PTR_FUN_149fa7120,1,0);
  local_78 = (char *)0x8000000149fa7148;
  local_64 = 0xf;
  local_70 = FUN_14577453c();
  local_6c = 1;
  FUN_14628f238(&local_78);
  uStack_90 = 0;
  local_88 = 0;
  local_98 = 8;
  FUN_14282b410(L"/Script/MeshDescription",0,0,&PTR_FUN_149fa7450);
  _DAT_14c99c5c8 = 0xffffffff;
  _DAT_14c99c5cc = 0xffffffff;
  _DAT_14c99c5d0 = 0xffffffff;
  _DAT_14c99c5d4 = 0xffffffff;
  _DAT_14c99c5d8 = 0xffffffff;
  _DAT_14c99c5dc = 0xffffffff;
  _DAT_14c99c5e0 = 0xffffffff;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aac820 FUN_142aac820 body=109 status=ok
// SIG undefined FUN_142aac820(void)

void FUN_142aac820(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149fa8cda;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c99c5e4,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aac890 FUN_142aac890 body=109 status=ok
// SIG undefined FUN_142aac890(void)

void FUN_142aac890(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149fa8d02;
  local_14 = 7;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c99c5e8,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aac900 FUN_142aac900 body=240 status=ok
// SIG undefined FUN_142aac900(void)

double * FUN_142aac900(longlong param_1,double *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x80);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar6 + 0x18))) {
    lVar5 = *(longlong *)(lVar6 + 0x10);
    if (*(longlong *)(lVar6 + 0x10) == 0) {
      lVar5 = lVar6;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      cVar4 = FUN_146f787ac(lVar6 + 0x20,DAT_14c99c620);
      if (cVar4 != '\0') {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(param_1 + 0x80);
        }
        local_38 = param_4;
        FUN_146fa02be(lVar6 + 0x20,&local_30,param_3,DAT_14c99c620);
        *param_2 = (double)local_30;
        param_2[1] = (double)local_2c;
        if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
    }
  }
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 142aac9f2 FUN_142aac9f2 body=146 status=ok
// SIG undefined FUN_142aac9f2(void)

void FUN_142aac9f2(longlong param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar2 = lVar3;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      cVar1 = FUN_146f787ac(lVar3 + 0x20,DAT_14c99c688);
      if (cVar1 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
        if (lVar3 == 0) {
          lVar3 = *(longlong *)(param_1 + 0xa8);
        }
        FUN_146fa0444(lVar3 + 0x20,param_2,DAT_14c99c688,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142aaca84 FUN_142aaca84 body=216 status=ok
// SIG undefined FUN_142aaca84(void)

void FUN_142aaca84(longlong param_1,uint param_2,double *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  float *local_38;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar2 = lVar3;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      cVar1 = FUN_146f787ac(lVar3 + 0x20,DAT_14c99c620);
      if (cVar1 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
        if (lVar3 == 0) {
          lVar3 = *(longlong *)(param_1 + 0x80);
        }
        local_2c = (float)param_3[1];
        local_30 = (float)*param_3;
        local_38 = &local_30;
        FUN_146fa0382(lVar3 + 0x20,param_2,DAT_14c99c620,param_4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aacb5e FUN_142aacb5e body=1038 status=ok
// SIG undefined FUN_142aacb5e(void)

undefined4 *
FUN_142aacb5e(undefined8 *param_1,undefined4 *param_2,ulonglong param_3,ulonglong param_4,
             uint param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  int *local_68;
  undefined4 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)*param_1;
  lVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1[2] + (param_3 & 0xffffffff) * 4);
  lVar10 = *(longlong *)(lVar6 + 0x58);
  lVar11 = *(longlong *)(lVar10 + 0x80);
  if (lVar11 == 0) {
    lVar11 = lVar10;
  }
  iVar4 = FUN_146f70732(lVar11);
  FUN_146f70016(lVar6,iVar4,uVar2);
  lVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1[2] + (param_4 & 0xffffffff) * 4);
  lVar10 = *(longlong *)(lVar6 + 0x58);
  lVar11 = *(longlong *)(lVar10 + 0x80);
  if (lVar11 == 0) {
    lVar11 = lVar10;
  }
  local_58 = iVar4;
  iVar4 = FUN_146f70732(lVar11);
  FUN_146f70016(lVar6,iVar4,uVar2);
  lVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1[2] + (ulonglong)param_5 * 4);
  lVar10 = *(longlong *)(lVar6 + 0x58);
  lVar11 = *(longlong *)(lVar10 + 0x80);
  if (lVar11 == 0) {
    lVar11 = lVar10;
  }
  local_54 = iVar4;
  iVar4 = FUN_146f70732(lVar11);
  FUN_146f70016(lVar6,iVar4,uVar2);
  lVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1[2] + (ulonglong)param_6 * 4);
  lVar10 = *(longlong *)(lVar6 + 0x58);
  lVar11 = *(longlong *)(lVar10 + 0x80);
  if (lVar11 == 0) {
    lVar11 = lVar10;
  }
  local_50 = iVar4;
  iVar4 = FUN_146f70732(lVar11);
  FUN_146f70016(lVar6,iVar4,uVar2);
  local_4c = iVar4;
  lVar6 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x58);
  lVar10 = *(longlong *)(lVar6 + 0x80);
  if (lVar10 == 0) {
    lVar10 = lVar6;
  }
  FUN_146fa08c6(lVar10 + 0x20,&local_70,DAT_14c99c620);
  plVar8 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_70 + 0x30);
  }
  *(undefined8 *)(*plVar8 + (longlong)((int)plVar8[2] * local_58) * 8) = 0;
  plVar8 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_70 + 0x30);
  }
  *(undefined8 *)(*plVar8 + (longlong)((int)plVar8[2] * local_54) * 8) = 0x3f800000;
  plVar8 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_70 + 0x30);
  }
  *(undefined1 **)(*plVar8 + (longlong)((int)plVar8[2] * local_50) * 8) = &DAT_3f8000003f800000;
  plVar8 = (longlong *)(local_70 + 0x18);
  if (*(longlong **)(local_70 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_70 + 0x30);
  }
  *(undefined8 *)(*plVar8 + (longlong)((int)plVar8[2] * local_4c) * 8) = 0x3f80000000000000;
  lVar6 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x58);
  lVar10 = *(longlong *)(lVar6 + 0x80);
  if (lVar10 == 0) {
    lVar10 = lVar6;
  }
  FUN_146fa0812(lVar10 + 0x20,&local_78,DAT_14c99c640);
  plVar8 = (longlong *)(local_78 + 0x18);
  if (*(longlong **)(local_78 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_78 + 0x30);
  }
  puVar1 = (undefined8 *)(*plVar8 + (longlong)((int)plVar8[2] * local_58) * 0x10);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3f80000000000000;
  plVar8 = (longlong *)(local_78 + 0x18);
  if (*(longlong **)(local_78 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_78 + 0x30);
  }
  puVar1 = (undefined8 *)(*plVar8 + (longlong)((int)plVar8[2] * local_54) * 0x10);
  *puVar1 = 0x3f80000000000000;
  puVar1[1] = 0x3f80000000000000;
  plVar8 = (longlong *)(local_78 + 0x18);
  if (*(longlong **)(local_78 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_78 + 0x30);
  }
  puVar1 = (undefined8 *)(*plVar8 + (longlong)((int)plVar8[2] * local_50) * 0x10);
  *puVar1 = 0;
  puVar1[1] = &DAT_3f8000003f800000;
  plVar8 = (longlong *)(local_78 + 0x18);
  if (*(longlong **)(local_78 + 0x30) != (longlong *)0x0) {
    plVar8 = *(longlong **)(local_78 + 0x30);
  }
  puVar1 = (undefined8 *)(*plVar8 + (longlong)((int)plVar8[2] * local_4c) * 0x10);
  *puVar1 = &DAT_3f8000003f800000;
  puVar1[1] = &DAT_3f8000003f800000;
  local_88 = 0;
  uStack_80 = 0;
  FUN_146f9d792(&local_88,4);
  lVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1 + 3);
  lVar10 = *(longlong *)(lVar6 + 0x78);
  lVar11 = *(longlong *)(lVar10 + 0x80);
  if (lVar11 == 0) {
    lVar11 = lVar10;
  }
  uVar5 = FUN_146f70732(lVar11);
  *param_2 = uVar5;
  local_60 = 4;
  local_98 = &local_88;
  local_68 = &local_58;
  FUN_146f70e56(lVar6,uVar5,uVar2);
  lVar6 = local_88;
  lVar10 = (longlong)(int)uStack_80;
  if (lVar10 != 0) {
    lVar11 = 0;
    do {
      iVar4 = *(int *)(lVar6 + lVar11);
      lVar7 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x68);
      lVar9 = *(longlong *)(lVar7 + 0x80);
      if (lVar9 == 0) {
        lVar9 = lVar7;
      }
      FUN_146fa05f6(lVar9 + 0x20,&local_68,DAT_14c99c648);
      plVar8 = (longlong *)(local_68 + 6);
      if (*(longlong **)(local_68 + 0xc) != (longlong *)0x0) {
        plVar8 = *(longlong **)(local_68 + 0xc);
      }
      *(undefined1 *)(*plVar8 + (longlong)(iVar4 * (int)plVar8[2])) = 1;
      lVar11 = lVar11 + 4;
    } while (lVar10 * 4 != lVar11);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142aacf6e FUN_142aacf6e body=548 status=ok
// SIG undefined FUN_142aacf6e(void)

void FUN_142aacf6e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_248 [40];
  undefined4 local_220;
  undefined8 *local_218;
  undefined **local_208;
  longlong local_200;
  code *local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined ***local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined4 local_194;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined4 local_15c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_208 = &PTR_FUN_149fa9f00;
  local_200 = param_1;
  FUN_146f9f5c4(&local_208);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  iVar4 = *(int *)(lVar2 + 0x18);
  iVar3 = *(int *)(lVar2 + 0x78);
  cVar1 = FUN_146f6f630(param_1);
  if (cVar1 != '\0') {
    local_1b8 = 0;
    local_1b0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0xffffffff00000080;
    local_180 = 0;
    local_178 = 0;
    local_1a4 = 0;
    uStack_19c = 0;
    local_194 = 0;
    local_174 = 0xffffffff00000080;
    local_148 = 0;
    local_140 = 0;
    local_16c = 0;
    uStack_164 = 0;
    local_15c = 0;
    local_13c = 0xffffffff00000080;
    local_110 = 0;
    local_108 = 0;
    local_134 = 0;
    uStack_12c = 0;
    local_124 = 0;
    local_104 = 0xffffffff00000080;
    local_d8 = 0;
    local_d0 = 0;
    local_ec = 0;
    local_fc = 0;
    uStack_f4 = 0;
    local_cc = 0xffffffff00000080;
    local_a0 = 0;
    local_98 = 0;
    local_b4 = 0;
    local_c4 = 0;
    uStack_bc = 0;
    local_94 = 0xffffffff00000080;
    local_68 = 0;
    local_60 = 0;
    local_7c = 0;
    local_8c = 0;
    uStack_84 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    FUN_146f6f6d0(param_1,&local_1d8);
    FUN_146fa04ea(&local_1d8);
  }
  iVar4 = iVar4 - iVar3;
  iVar3 = iVar4 + 0x3ffe;
  if (-1 < iVar4 + 0x1fff) {
    iVar3 = iVar4 + 0x1fff;
  }
  local_1f0 = &local_1d8;
  local_1d8 = CONCAT44(param_2,0x2000);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,iVar4);
  local_218 = &local_1e8;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1f8 = FUN_142ab1a00;
  local_220 = 0;
  local_1c8 = &local_208;
  local_1c0 = param_3;
  FUN_1411ca36e(L"ComputeTriangleTangentsAndNormals.PF",iVar3 >> 0xd,1);
  if ((local_50 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aad194 FUN_142aad194 body=2450 status=ok
// SIG undefined FUN_142aad194(void)

void FUN_142aad194(ulonglong param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 unaff_RBX;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_2c8 [40];
  undefined4 local_2a0;
  code *local_298;
  byte local_289;
  uint local_288;
  uint local_284;
  ulonglong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 *local_250;
  uint local_248;
  undefined8 local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  int local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined8 uStack_194;
  undefined4 local_18c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined4 local_154;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined4 local_e4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(param_1 + 0x70);
  }
  if (*(int *)(lVar13 + 0x18) != *(int *)(lVar13 + 0x78)) {
    bVar19 = (param_2 & 3) != 0;
    FUN_146fa0b69(param_1,param_2 & 0xffffffffffffff01,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar19) & 0xffffffff);
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x80);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(param_1 + 0x70);
    }
    uVar14 = *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x78);
    local_268 = 0;
    uStack_260 = 0;
    local_280 = param_1;
    if (uVar14 == 0 || *(int *)(lVar13 + 0x18) < *(int *)(lVar13 + 0x78)) {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar14);
      }
    }
    else {
      uStack_260 = (ulonglong)uVar14;
      FUN_142ab2b20(&local_268);
      FUN_142ab2b05(local_268,uVar14);
    }
    uVar3 = local_280;
    local_288 = (uint)param_2;
    local_289 = bVar19 & (byte)((local_288 & 4) >> 2);
    local_284 = (local_288 & 8) >> 3;
    if ((param_2 & 8) != 0) {
      lVar13 = *(longlong *)(*(longlong *)(local_280 + 0x50) + 0x80);
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(local_280 + 0x50);
      }
      FUN_146fa1f1e(lVar13 + 0x20,&local_208,DAT_14c99c0d0);
      if ((local_208 == 0) || (*(int *)(local_208 + 0x10) == 0)) {
        lVar13 = 0;
      }
      else {
        plVar8 = (longlong *)(local_208 + 0x18);
        if (*(longlong **)(local_208 + 0x30) != (longlong *)0x0) {
          plVar8 = *(longlong **)(local_208 + 0x30);
        }
        lVar13 = *plVar8;
      }
      lVar16 = *(longlong *)(*(longlong *)(uVar3 + 0x70) + 0x80);
      if (lVar16 == 0) {
        lVar16 = *(longlong *)(uVar3 + 0x70);
      }
      FUN_146fa27b8(lVar16 + 0x20,&local_208,DAT_14c99c100);
      if ((local_208 == 0) || (*(int *)(local_208 + 0x10) == 0)) {
        lVar18 = 0;
      }
      else {
        plVar8 = (longlong *)(local_208 + 0x18);
        if (*(longlong **)(local_208 + 0x30) != (longlong *)0x0) {
          plVar8 = *(longlong **)(local_208 + 0x30);
        }
        lVar18 = *plVar8;
      }
      FUN_146fa2878(lVar16 + 0x20,&local_208,DAT_14c99c0e8);
      if ((local_208 == 0) || (*(int *)(local_208 + 0x10) == 0)) {
        lVar16 = 0;
      }
      else {
        plVar8 = (longlong *)(local_208 + 0x18);
        if (*(longlong **)(local_208 + 0x30) != (longlong *)0x0) {
          plVar8 = *(longlong **)(local_208 + 0x30);
        }
        lVar16 = *plVar8;
      }
      if (uStack_260._4_4_ < (int)uVar14) {
        FUN_142ab2c8e(&local_268,uVar14);
      }
      if (0 < (int)uVar14) {
        local_270 = (ulonglong)uVar14 * 0x1c;
        lVar17 = 8;
        lVar15 = 0;
        local_278 = lVar13;
        do {
          lVar4 = local_268;
          lVar9 = (longlong)*(int *)(lVar18 + -8 + lVar17);
          fVar20 = *(float *)(lVar13 + 8 + lVar9 * 0xc);
          uStack_200 = CONCAT44(uStack_200._4_4_,fVar20);
          lVar9 = *(longlong *)(lVar13 + lVar9 * 0xc);
          lVar10 = (longlong)*(int *)(lVar18 + -4 + lVar17);
          fVar24 = *(float *)(lVar13 + 8 + lVar10 * 0xc);
          local_238 = (undefined1 *)CONCAT44(local_238._4_4_,fVar24);
          puVar1 = *(undefined1 **)(lVar13 + lVar10 * 0xc);
          fVar22 = *(float *)(lVar13 + 8 + (longlong)*(int *)(lVar18 + lVar17) * 0xc);
          local_250 = (undefined8 *)CONCAT44(local_250._4_4_,fVar22);
          pcVar11 = *(code **)(lVar13 + (longlong)*(int *)(lVar18 + lVar17) * 0xc);
          fVar22 = fVar22 - fVar20;
          local_258._0_4_ = SUB84(pcVar11,0);
          local_258._4_4_ = (float)((ulonglong)pcVar11 >> 0x20);
          local_208._0_4_ = (float)lVar9;
          local_208._4_4_ = (float)((ulonglong)lVar9 >> 0x20);
          fVar24 = fVar24 - fVar20;
          local_240._0_4_ = SUB84(puVar1,0);
          local_240._4_4_ = (float)((ulonglong)puVar1 >> 0x20);
          fVar20 = ((float)local_240 - (float)local_208) * (local_258._4_4_ - local_208._4_4_) -
                   ((float)local_258 - (float)local_208) * (local_240._4_4_ - local_208._4_4_);
          fVar23 = fVar24 * ((float)local_258 - (float)local_208) -
                   fVar22 * ((float)local_240 - (float)local_208);
          fVar24 = (local_240._4_4_ - local_208._4_4_) * fVar22 -
                   fVar24 * (local_258._4_4_ - local_208._4_4_);
          *(float *)(local_268 + lVar15) =
               SQRT(fVar20 * fVar20 + fVar24 * fVar24 + fVar23 * fVar23) * 0.5;
          local_258 = pcVar11;
          local_240 = puVar1;
          local_208 = lVar9;
          uVar21 = FUN_142ab1055(&local_208,&local_240,&local_258);
          *(undefined4 *)(lVar4 + 4 + lVar15) = *(undefined4 *)(lVar16 + -8 + lVar17);
          *(undefined4 *)(lVar4 + 8 + lVar15) = uVar21;
          uVar21 = FUN_142ab1055(&local_240,&local_258,&local_208);
          lVar13 = local_278;
          *(undefined4 *)(lVar4 + 0xc + lVar15) = *(undefined4 *)(lVar16 + -4 + lVar17);
          *(undefined4 *)(lVar4 + 0x10 + lVar15) = uVar21;
          uVar21 = FUN_142ab1055(&local_258,&local_208,&local_240);
          *(undefined4 *)(lVar4 + 0x14 + lVar15) = *(undefined4 *)(lVar16 + lVar17);
          *(undefined4 *)(lVar4 + 0x18 + lVar15) = uVar21;
          lVar17 = lVar17 + 0xc;
          lVar15 = lVar15 + 0x1c;
        } while (local_270 != lVar15);
      }
    }
    uVar3 = local_280;
    FUN_146f6f2e8(local_280 + 0x100);
    FUN_146f6f2e8(uVar3 + 0x138);
    FUN_146f6f2e8(uVar3 + 0x1a8);
    bVar2 = local_289;
    lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x50) + 0x80);
    if (lVar13 == 0) {
      lVar13 = *(longlong *)(uVar3 + 0x50);
    }
    iVar6 = *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x78);
    iVar7 = iVar6 + 0x3fffe;
    if (-1 < iVar6 + 0x1ffff) {
      iVar7 = iVar6 + 0x1ffff;
    }
    local_208 = CONCAT44(0x20000,iVar6);
    uStack_200._0_2_ = CONCAT11((char)local_284,local_289);
    local_1f8 = uVar3;
    local_1f0 = &local_268;
    local_240 = (undefined1 *)0x0;
    local_238 = (undefined1 *)((ulonglong)local_238 & 0xffffffff00000000);
    local_258 = FUN_142ab2dde;
    local_2a0 = 0;
    local_298 = (code *)&local_240;
    local_250 = &local_208;
    FUN_1411ca36e(L"ComputeTangentsAndNormals.PF",iVar7 >> 0x11,1);
    if (bVar2 != 0) {
      cVar5 = FUN_146f6f630(uVar3);
      if (cVar5 != '\0') {
        local_1e8 = 0;
        local_1e0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        uStack_1dc = 0x80;
        local_1d8 = -1;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1d4 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        iStack_1c8 = 0;
        local_1c4 = 0;
        uStack_1a4 = 0x80;
        local_1a0 = 0xffffffff;
        local_178 = 0;
        local_170 = 0;
        uStack_19c = 0;
        iStack_198 = 0;
        uStack_194 = 0;
        local_18c = 0;
        local_16c = 0xffffffff00000080;
        local_140 = 0;
        local_138 = 0;
        local_164 = 0;
        uStack_15c = 0;
        local_154 = 0;
        local_134 = 0xffffffff00000080;
        local_108 = 0;
        local_100 = 0;
        local_11c = 0;
        local_12c = 0;
        uStack_124 = 0;
        local_fc = 0xffffffff00000080;
        local_d0 = 0;
        local_c8 = 0;
        local_e4 = 0;
        local_f4 = 0;
        uStack_ec = 0;
        local_c4 = 0xffffffff00000080;
        local_98 = 0;
        local_90 = 0;
        local_ac = 0;
        local_bc = 0;
        uStack_b4 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        FUN_146f6f6d0(uVar3,&local_208);
        FUN_146fa04ea(&local_208);
      }
      lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x70) + 0x80);
      if (lVar13 == 0) {
        lVar13 = *(longlong *)(uVar3 + 0x70);
      }
      iVar7 = *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x78);
      if (iVar7 != 0) {
        local_228 = &LAB_146fa0e36;
        local_240 = &LAB_146fa0deb;
        local_238 = &LAB_146fa0df2;
        local_230 = &LAB_146fa0df8;
        local_220 = &LAB_146fa0eb7;
        local_218 = &LAB_146fa0e74;
        local_210 = 0;
        uStack_200 = 0;
        iVar6 = 0;
        local_1f8 = local_1f8 & 0xffffffff00000000;
        local_1f0 = (longlong *)0x0;
        local_1e8 = local_1e8 & 0xffffffff00000000;
        local_1e0 = 0;
        uStack_1dc = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        uStack_1cc = 0;
        iStack_1c8 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        uStack_19c = 0;
        iStack_198 = 0;
        local_208 = CONCAT44(local_208._4_4_,iVar7);
        FUN_146fa27b8(lVar13 + 0x20,&local_258,DAT_14c99c100);
        uStack_200 = 0;
        iVar7 = 0;
        if (local_258 != (code *)0x0) {
          if (*(int *)(local_258 + 0x10) == 0) {
            uStack_200 = 0;
            iVar7 = 0;
          }
          else {
            pcVar11 = local_258 + 0x18;
            if (*(code **)(local_258 + 0x30) != (code *)0x0) {
              pcVar11 = *(code **)(local_258 + 0x30);
            }
            uStack_200 = *(undefined8 *)pcVar11;
            iVar7 = *(int *)(local_258 + 0x10) * (int)local_250;
          }
        }
        local_1f8 = CONCAT44(local_1f8._4_4_,iVar7);
        FUN_146fa2878(lVar13 + 0x20,&local_258,DAT_14c99c0e8);
        if (local_258 == (code *)0x0) {
          local_1f0 = (longlong *)0x0;
        }
        else if (*(int *)(local_258 + 0x10) == 0) {
          local_1f0 = (longlong *)0x0;
          iVar6 = 0;
        }
        else {
          pcVar11 = local_258 + 0x18;
          if (*(code **)(local_258 + 0x30) != (code *)0x0) {
            pcVar11 = *(code **)(local_258 + 0x30);
          }
          local_1f0 = *(longlong **)pcVar11;
          iVar6 = *(int *)(local_258 + 0x10) * (int)local_250;
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,iVar6);
        lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x50) + 0x80);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(uVar3 + 0x50);
        }
        FUN_146fa1f1e(lVar13 + 0x20,&local_258,DAT_14c99c0d0);
        if ((local_258 == (code *)0x0) || (local_1d8 = *(int *)(local_258 + 0x10), local_1d8 == 0))
        {
          uVar12 = 0;
          local_1d8 = 0;
        }
        else {
          pcVar11 = local_258 + 0x18;
          if (*(code **)(local_258 + 0x30) != (code *)0x0) {
            pcVar11 = *(code **)(local_258 + 0x30);
          }
          uVar12 = *(undefined8 *)pcVar11;
        }
        local_1e0 = (undefined4)uVar12;
        uStack_1dc = (undefined4)((ulonglong)uVar12 >> 0x20);
        lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x58) + 0x80);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(uVar3 + 0x58);
        }
        FUN_146fa08c6(lVar13 + 0x20,&local_258,DAT_14c99c620);
        if ((local_258 == (code *)0x0) || (local_1b8 = *(int *)(local_258 + 0x10), local_1b8 == 0))
        {
          local_1b8 = 0;
          local_1c0 = 0;
        }
        else {
          pcVar11 = local_258 + 0x18;
          if (*(code **)(local_258 + 0x30) != (code *)0x0) {
            pcVar11 = *(code **)(local_258 + 0x30);
          }
          local_1c0 = *(undefined8 *)pcVar11;
        }
        lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x58) + 0x80);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(uVar3 + 0x58);
        }
        FUN_146fa06aa(lVar13 + 0x20,&local_258,DAT_14c99c628);
        if ((local_258 == (code *)0x0) || (iStack_1c8 = *(int *)(local_258 + 0x10), iStack_1c8 == 0)
           ) {
          iStack_1c8 = 0;
          uVar12 = 0;
        }
        else {
          pcVar11 = local_258 + 0x18;
          if (*(code **)(local_258 + 0x30) != (code *)0x0) {
            pcVar11 = *(code **)(local_258 + 0x30);
          }
          uVar12 = *(undefined8 *)pcVar11;
        }
        uStack_1d0 = (undefined4)uVar12;
        uStack_1cc = (undefined4)((ulonglong)uVar12 >> 0x20);
        lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x58) + 0x80);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(uVar3 + 0x58);
        }
        FUN_146fa06aa(lVar13 + 0x20,&local_258,DAT_14c99c630);
        uVar14 = local_288;
        if ((local_258 == (code *)0x0) || (local_1a8 = *(int *)(local_258 + 0x10), local_1a8 == 0))
        {
          local_1a8 = 0;
          local_1b0 = 0;
        }
        else {
          pcVar11 = local_258 + 0x18;
          if (*(code **)(local_258 + 0x30) != (code *)0x0) {
            pcVar11 = *(code **)(local_258 + 0x30);
          }
          local_1b0 = *(undefined8 *)pcVar11;
        }
        lVar13 = *(longlong *)(*(longlong *)(uVar3 + 0x58) + 0x80);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(uVar3 + 0x58);
        }
        FUN_146fa075e(lVar13 + 0x20,&local_258,DAT_14c99c638);
        if ((local_258 == (code *)0x0) || (iStack_198 = *(int *)(local_258 + 0x10), iStack_198 == 0)
           ) {
          iStack_198 = 0;
          uVar12 = 0;
        }
        else {
          pcVar11 = local_258 + 0x18;
          if (*(code **)(local_258 + 0x30) != (code *)0x0) {
            pcVar11 = *(code **)(local_258 + 0x30);
          }
          uVar12 = *(undefined8 *)pcVar11;
        }
        local_1a0 = (undefined4)uVar12;
        uStack_19c = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_248 = uVar14 >> 5 & 1;
        local_258 = (code *)&local_240;
        local_250 = &local_208;
        FUN_144bbeff0();
      }
    }
    if (local_268 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142aadb28 FUN_142aadb28 body=13612 status=ok
// SIG undefined FUN_142aadb28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aadb28(uint *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint **ppuVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  uint *puVar30;
  undefined8 *puVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong *plVar35;
  longlong *plVar36;
  undefined4 *puVar37;
  longlong lVar38;
  double dVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auStack_438 [32];
  undefined8 local_418;
  longlong local_408;
  longlong local_400;
  double local_3f8;
  undefined8 uStack_3f0;
  uint *local_3e8;
  uint *local_3e0;
  undefined1 local_3d8 [16];
  ulonglong local_3c8;
  longlong *local_3c0;
  longlong *local_3b8;
  double dStack_3b0;
  int local_39c;
  ulonglong local_398;
  int local_38c;
  ulonglong local_388;
  longlong *local_380;
  longlong *local_378;
  uint local_370;
  uint local_36c;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  uint *local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  uint **local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  longlong local_288;
  longlong lStack_280;
  longlong local_278;
  undefined8 uStack_270;
  uint *local_268 [2];
  uint **local_258;
  undefined8 local_250;
  double dStack_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  undefined8 uStack_208;
  longlong local_1e8;
  undefined8 uStack_1e0;
  uint local_1d8 [4];
  uint *local_1c8;
  int local_1c0;
  undefined8 local_1bc;
  int local_1b4;
  undefined1 local_1b0 [8];
  undefined1 *local_1a8;
  int local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  uint local_188 [4];
  uint *local_178;
  int local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x50);
  }
  FUN_146fa1f1e(lVar20 + 0x20,&local_2f0,DAT_14c99c0d0);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x68) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x68);
  }
  FUN_146fa05f6(lVar20 + 0x20,&local_2f8,DAT_14c99c648);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x80);
  }
  FUN_146f73238(lVar20 + 0x20,&local_300,DAT_14c99c688);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa06aa(lVar20 + 0x20,&local_308,DAT_14c99c628);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa06aa(lVar20 + 0x20,&local_310,DAT_14c99c630);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa075e(lVar20 + 0x20,&local_318,DAT_14c99c638);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa0812(lVar20 + 0x20,&local_320,DAT_14c99c640);
  lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(param_2 + 0x58);
  }
  FUN_146fa08c6(lVar20 + 0x20);
  *(undefined1 *)(param_2 + 0x1a4) = 1;
  *(undefined1 *)(param_2 + 0x1dc) = 1;
  *(undefined1 *)(param_2 + 0x24c) = 1;
  *(undefined1 *)(param_2 + 700) = 1;
  *(undefined1 *)(param_2 + 0x284) = 1;
  *(undefined1 *)(param_2 + 0x214) = 1;
  local_3c8 = (ulonglong)*(uint *)(local_328 + 0x38);
  iVar8 = *(int *)(*(longlong *)(param_2 + 0x60) + 0x88);
  uVar26 = 0;
  local_3e0 = param_1;
  local_408 = param_2;
  local_3c0 = param_3;
  if ((longlong)(int)param_1[2] == 0) {
    uVar41 = 0;
    iVar32 = 0;
    iVar24 = 0;
    iVar25 = 0;
    iVar28 = 0;
    iVar27 = 0;
  }
  else {
    plVar15 = *(longlong **)param_1;
    local_3b8 = plVar15 + (int)param_1[2];
    local_3e8 = (uint *)((longlong)param_3 + 0x11);
    iVar24 = 0;
    iVar32 = 0;
    uVar41 = 0;
    uVar26 = 0;
    iVar25 = 0;
    iVar28 = 0;
    iVar27 = 0;
    do {
      lVar20 = *plVar15;
      lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x50) + 0x80);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(lVar20 + 0x50);
      }
      iVar24 = (iVar24 + *(int *)(lVar11 + 0x18)) - *(int *)(lVar11 + 0x78);
      lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x58) + 0x80);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(lVar20 + 0x58);
      }
      local_400 = CONCAT44(local_400._4_4_,
                           (iVar25 + *(int *)(lVar11 + 0x18)) - *(int *)(lVar11 + 0x78));
      lVar33 = *(longlong *)(*(longlong *)(lVar20 + 0x68) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar20 + 0x68);
      }
      local_3d8._0_4_ = (iVar27 + *(int *)(lVar33 + 0x18)) - *(int *)(lVar33 + 0x78);
      lVar33 = *(longlong *)(*(longlong *)(lVar20 + 0x70) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar20 + 0x70);
      }
      local_3f8 = (double)CONCAT44(local_3f8._4_4_,
                                   (iVar28 + *(int *)(lVar33 + 0x18)) - *(int *)(lVar33 + 0x78));
      FUN_146fa23d0(lVar11 + 0x20,local_268);
      iVar25 = (int)local_3c8;
      if (iVar25 < (int)local_268[0][0xe]) {
        lVar11 = 0;
        do {
          local_3c8 = local_3c8 & 0xffffffff;
          if (*(char *)((longlong)local_3e8 + lVar11 + iVar25) != '\0') {
            local_3c8 = (ulonglong)(uint)(iVar25 + 1 + (int)lVar11);
          }
          lVar11 = lVar11 + 1;
        } while ((longlong)(int)local_268[0][0xe] - (longlong)iVar25 != lVar11);
      }
      iVar25 = *(int *)(*(longlong *)(lVar20 + 0x60) + 0x88);
      if (iVar8 < iVar25) {
        lVar11 = (longlong)iVar8;
        iVar28 = iVar8 + 1;
        lVar33 = 0;
        do {
          if (*(char *)((longlong)local_3e8 + lVar33 + lVar11) != '\0') {
            iVar8 = iVar28 + (int)lVar33;
          }
          lVar33 = lVar33 + 1;
        } while (iVar25 - lVar11 != lVar33);
      }
      lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x80) + 0x80);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(lVar20 + 0x80);
      }
      iVar25 = *(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x78);
      if (iVar25 <= iVar32) {
        iVar25 = iVar32;
      }
      iVar32 = iVar25;
      lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x50) + 0x80);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(lVar20 + 0x50);
      }
      uVar18 = *(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x78);
      if ((int)uVar18 <= (int)uVar41) {
        uVar18 = uVar41;
      }
      uVar41 = uVar18;
      lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x58) + 0x80);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)(lVar20 + 0x58);
      }
      uVar18 = *(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x78);
      if ((int)uVar18 <= (int)uVar26) {
        uVar18 = uVar26;
      }
      uVar26 = uVar18;
      plVar15 = plVar15 + 1;
      iVar25 = (int)local_400;
      iVar28 = local_3f8._0_4_;
      iVar27 = local_3d8._0_4_;
    } while (plVar15 != local_3b8);
  }
  lVar20 = local_408;
  dVar39 = *(double *)((longlong)*(double *)(local_408 + 0x50) + 0x80);
  if (dVar39 == 0.0) {
    dVar39 = *(double *)(local_408 + 0x50);
  }
  iVar23 = *(int *)((longlong)dVar39 + 0x18);
  iVar24 = (iVar23 - *(int *)((longlong)dVar39 + 0x78)) + iVar24;
  local_38c = iVar32;
  if (*(int *)((longlong)dVar39 + 0x1c) < iVar24) {
    uVar18 = iVar24 + 0x1f;
    if (uVar18 < 0xa0) {
      iVar32 = 0x80;
    }
    else {
      uVar18 = uVar18 >> 5;
      if (*(int *)((longlong)dVar39 + 0x1c) + 0x1fU < 0xa0) {
        uVar17 = 4;
        if (4 < uVar18) {
          uVar17 = uVar18;
        }
      }
      else {
        uVar17 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
      }
      uVar21 = (ulonglong)(uVar17 * 4);
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar10 = (uint)(uVar21 + 0xf);
          if (uVar17 < 0x1ffd) {
            uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 >> 4]]
            ;
          }
          else {
            uVar40 = uVar21 + 0xf & 0xfffffffffffffff0;
            if (uVar40 < 0x7ff1) {
              bVar5 = (&DAT_14c841e00)[uVar10 >> 4];
              uVar43 = 0x32;
              if (0x32 < bVar5) {
                uVar43 = (ulonglong)bVar5;
              }
              uVar34 = 0x32 - (ulonglong)bVar5;
              do {
                uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_142ab0af1;
                lVar11 = uVar43 + 1 + uVar34;
                uVar34 = uVar34 - 1;
              } while (lVar11 != 0x33);
            }
            uVar21 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar21 = (ulonglong)DAT_14c841df8;
            }
            uVar21 = -uVar21 & (uVar40 + uVar21) - 1;
          }
        }
        else {
          local_3f8 = dVar39;
          uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
          iVar23 = *(int *)((longlong)local_3f8 + 0x18);
          dVar39 = local_3f8;
        }
      }
LAB_142ab0af1:
      iVar24 = (int)(uVar21 >> 2);
      iVar32 = -0x20;
      if ((int)uVar18 <= iVar24) {
        iVar32 = iVar24 << 5;
      }
    }
    *(int *)((longlong)dVar39 + 0x1c) = iVar32;
    FUN_1446efbd8(dVar39,iVar23);
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x58) + 0x80);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar20 + 0x58);
  }
  iVar32 = *(int *)(lVar11 + 0x18);
  iVar25 = (iVar32 - *(int *)(lVar11 + 0x78)) + iVar25;
  if (*(int *)(lVar11 + 0x1c) < iVar25) {
    uVar18 = iVar25 + 0x1f;
    if (uVar18 < 0xa0) {
      iVar25 = 0x80;
    }
    else {
      uVar18 = uVar18 >> 5;
      if (*(int *)(lVar11 + 0x1c) + 0x1fU < 0xa0) {
        uVar17 = 4;
        if (4 < uVar18) {
          uVar17 = uVar18;
        }
      }
      else {
        uVar17 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
      }
      uVar21 = (ulonglong)(uVar17 * 4);
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar10 = (uint)(uVar21 + 0xf);
          if (uVar17 < 0x1ffd) {
            uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 >> 4]]
            ;
          }
          else {
            uVar40 = uVar21 + 0xf & 0xfffffffffffffff0;
            lVar20 = local_408;
            if (uVar40 < 0x7ff1) {
              bVar5 = (&DAT_14c841e00)[uVar10 >> 4];
              uVar43 = 0x32;
              if (0x32 < bVar5) {
                uVar43 = (ulonglong)bVar5;
              }
              uVar34 = 0x32 - (ulonglong)bVar5;
              do {
                uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_142ab0b98;
                lVar33 = uVar43 + 1 + uVar34;
                uVar34 = uVar34 - 1;
              } while (lVar33 != 0x33);
            }
            uVar21 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar21 = (ulonglong)DAT_14c841df8;
            }
            uVar21 = -uVar21 & (uVar40 + uVar21) - 1;
          }
        }
        else {
          uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
          iVar32 = *(int *)(lVar11 + 0x18);
        }
      }
LAB_142ab0b98:
      iVar24 = (int)(uVar21 >> 2);
      iVar25 = -0x20;
      if ((int)uVar18 <= iVar24) {
        iVar25 = iVar24 << 5;
      }
    }
    *(int *)(lVar11 + 0x1c) = iVar25;
    FUN_1446efbd8(lVar11,iVar32);
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x68) + 0x80);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar20 + 0x68);
  }
  iVar32 = *(int *)(lVar11 + 0x18);
  iVar27 = (iVar32 - *(int *)(lVar11 + 0x78)) + iVar27;
  if (*(int *)(lVar11 + 0x1c) < iVar27) {
    uVar18 = iVar27 + 0x1f;
    if (uVar18 < 0xa0) {
      iVar25 = 0x80;
    }
    else {
      uVar18 = uVar18 >> 5;
      if (*(int *)(lVar11 + 0x1c) + 0x1fU < 0xa0) {
        uVar17 = 4;
        if (4 < uVar18) {
          uVar17 = uVar18;
        }
      }
      else {
        uVar17 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
      }
      uVar21 = (ulonglong)(uVar17 * 4);
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar10 = (uint)(uVar21 + 0xf);
          if (uVar17 < 0x1ffd) {
            uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 >> 4]]
            ;
          }
          else {
            uVar40 = uVar21 + 0xf & 0xfffffffffffffff0;
            lVar20 = local_408;
            if (uVar40 < 0x7ff1) {
              bVar5 = (&DAT_14c841e00)[uVar10 >> 4];
              uVar43 = 0x32;
              if (0x32 < bVar5) {
                uVar43 = (ulonglong)bVar5;
              }
              uVar34 = 0x32 - (ulonglong)bVar5;
              do {
                uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_142ab0c3c;
                lVar33 = uVar43 + 1 + uVar34;
                uVar34 = uVar34 - 1;
              } while (lVar33 != 0x33);
            }
            uVar21 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar21 = (ulonglong)DAT_14c841df8;
            }
            uVar21 = -uVar21 & (uVar40 + uVar21) - 1;
          }
        }
        else {
          uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
          iVar32 = *(int *)(lVar11 + 0x18);
        }
      }
LAB_142ab0c3c:
      iVar27 = (int)(uVar21 >> 2);
      iVar25 = -0x20;
      if ((int)uVar18 <= iVar27) {
        iVar25 = iVar27 << 5;
      }
    }
    *(int *)(lVar11 + 0x1c) = iVar25;
    FUN_1446efbd8(lVar11,iVar32);
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x70) + 0x80);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar20 + 0x70);
  }
  iVar32 = *(int *)(lVar11 + 0x18);
  iVar28 = (iVar32 - *(int *)(lVar11 + 0x78)) + iVar28;
  if (*(int *)(lVar11 + 0x1c) < iVar28) {
    uVar18 = iVar28 + 0x1f;
    if (uVar18 < 0xa0) {
      iVar25 = 0x80;
    }
    else {
      uVar18 = uVar18 >> 5;
      if (*(int *)(lVar11 + 0x1c) + 0x1fU < 0xa0) {
        uVar17 = 4;
        if (4 < uVar18) {
          uVar17 = uVar18;
        }
      }
      else {
        uVar17 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
      }
      uVar21 = (ulonglong)(uVar17 * 4);
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar10 = (uint)(uVar21 + 0xf);
          if (uVar17 < 0x1ffd) {
            uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 >> 4]]
            ;
          }
          else {
            uVar40 = uVar21 + 0xf & 0xfffffffffffffff0;
            lVar20 = local_408;
            if (uVar40 < 0x7ff1) {
              bVar5 = (&DAT_14c841e00)[uVar10 >> 4];
              uVar43 = 0x32;
              if (0x32 < bVar5) {
                uVar43 = (ulonglong)bVar5;
              }
              uVar34 = 0x32 - (ulonglong)bVar5;
              do {
                uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_142ab0cdd;
                lVar33 = uVar43 + 1 + uVar34;
                uVar34 = uVar34 - 1;
              } while (lVar33 != 0x33);
            }
            uVar21 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar21 = (ulonglong)DAT_14c841df8;
            }
            uVar21 = -uVar21 & (uVar40 + uVar21) - 1;
          }
        }
        else {
          uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
          iVar32 = *(int *)(lVar11 + 0x18);
        }
      }
LAB_142ab0cdd:
      iVar28 = (int)(uVar21 >> 2);
      iVar25 = -0x20;
      if ((int)uVar18 <= iVar28) {
        iVar25 = iVar28 << 5;
      }
    }
    *(int *)(lVar11 + 0x1c) = iVar25;
    FUN_1446efbd8(lVar11,iVar32);
  }
  if (*(int *)(local_328 + 0x38) < (int)local_3c8) {
    FUN_1458c3508(local_328,local_3c8);
  }
  puVar30 = local_3e0;
  if (*(int *)(*(longlong *)(lVar20 + 0x60) + 0x88) < iVar8) {
    FUN_146f72d34(lVar20,iVar8);
  }
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  if (uVar41 != 0) {
    FUN_146fa3732(&local_198,uVar41);
    iVar8 = 1;
    if (3 < uVar41) {
      uVar41 = (uVar41 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar41 != 0) {
        for (; uVar41 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if ((local_150 == 0) || (local_150 < iVar8)) {
      local_150 = iVar8;
      FUN_146fa38c8();
    }
  }
  uVar21 = local_3c8;
  local_1c8 = (uint *)0x0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = (undefined1 *)0x0;
  local_1a0 = 0;
  if (uVar26 != 0) {
    FUN_146fa3a70(&local_1e8,uVar26);
    iVar8 = 1;
    if (3 < uVar26) {
      uVar26 = (uVar26 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar26 != 0) {
        for (; uVar26 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if ((local_1a0 == 0) || (local_1a0 < iVar8)) {
      local_1a0 = iVar8;
      FUN_146fa3c06();
    }
  }
  lVar11 = (longlong)(int)puVar30[2];
  if (lVar11 != 0) {
    plVar15 = *(longlong **)puVar30;
    local_380 = plVar15 + lVar11;
    local_398 = uVar21 & 0xffffffff;
    do {
      lVar11 = *plVar15;
      local_378 = plVar15;
      FUN_146fa3dae(&local_148,local_38c);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x50);
      }
      FUN_146fa21b4(lVar33 + 0x20,&local_330,DAT_14c99c0d0);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x68) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x68);
      }
      FUN_146fa0542(lVar33 + 0x20,&local_338,DAT_14c99c648);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x80) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x80);
      }
      FUN_146fa2484(lVar33 + 0x20,&local_340,DAT_14c99c688);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x58) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x58);
      }
      FUN_146fa2268(lVar33 + 0x20,&local_348,DAT_14c99c628);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x58) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x58);
      }
      FUN_146fa2268(lVar33 + 0x20,&local_350,DAT_14c99c630);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x58) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x58);
      }
      FUN_146fa231c(lVar33 + 0x20,&local_358,DAT_14c99c638);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x58) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x58);
      }
      FUN_146fa1e6a(lVar33 + 0x20,&local_360,DAT_14c99c640);
      lVar33 = *(longlong *)(*(longlong *)(lVar11 + 0x58) + 0x80);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar11 + 0x58);
      }
      FUN_146fa23d0(lVar33 + 0x20,&local_368,DAT_14c99c620);
      auVar55 = local_3d8;
      uVar26 = *(uint *)(*(longlong *)(lVar11 + 0x60) + 0x88);
      uVar41 = *(uint *)(*(longlong *)(lVar20 + 0x60) + 0x88);
      if ((int)uVar41 < (int)uVar26) {
        uVar26 = uVar41;
      }
      local_400 = lVar11;
      if (0 < (int)uVar26) {
        local_3d8._4_4_ = 0;
        local_3d8._0_4_ = uVar26;
        local_3d8._8_8_ = auVar55._8_8_;
        dVar39 = 0.0;
        do {
          lVar33 = local_400;
          lVar11 = *(longlong *)(*(longlong *)(local_400 + 0x60) + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(local_400 + 0x60);
          }
          lVar38 = (longlong)dVar39 * 0x80;
          local_3f8 = dVar39;
          FUN_146fa097a(lVar11 + lVar38 + 0x20,local_268,DAT_14c99c118);
          lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(lVar20 + 0x60);
          }
          FUN_146fa0a2e(lVar11 + lVar38 + 0x20,&local_2e8,DAT_14c99c118);
          lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(lVar20 + 0x60);
          }
          iVar8 = *(int *)(lVar11 + 0x18 + lVar38);
          iVar32 = *(int *)(lVar11 + 0x1c + lVar38);
          iVar25 = (iVar8 - *(int *)(lVar11 + 0x78 + lVar38)) + local_268[0][4];
          if (iVar32 < iVar25) {
            lVar11 = lVar11 + lVar38;
            uVar26 = iVar25 + 0x1f;
            if (uVar26 < 0xa0) {
              iVar32 = 0x80;
            }
            else {
              uVar26 = uVar26 >> 5;
              if (iVar32 + 0x1fU < 0xa0) {
                uVar41 = 4;
                if (4 < uVar26) {
                  uVar41 = uVar26;
                }
              }
              else {
                uVar41 = uVar26 + (uVar26 * 3 >> 3) + 0x10;
              }
              uVar21 = (ulonglong)(uVar41 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar18 = (uint)(uVar21 + 0xf);
                  if (uVar41 < 0x1ffd) {
                    uVar21 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar18 >> 4]];
                  }
                  else {
                    uVar40 = uVar21 + 0xf & 0xfffffffffffffff0;
                    if (uVar40 < 0x7ff1) {
                      bVar5 = (&DAT_14c841e00)[uVar18 >> 4];
                      uVar43 = 0x32;
                      if (0x32 < bVar5) {
                        uVar43 = (ulonglong)bVar5;
                      }
                      uVar34 = 0x32 - (ulonglong)bVar5;
                      do {
                        uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                        lVar33 = local_400;
                        if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_142aae7c1;
                        lVar20 = uVar43 + 1 + uVar34;
                        uVar34 = uVar34 - 1;
                      } while (lVar20 != 0x33);
                    }
                    uVar21 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar21 = 0x10;
                    }
                    uVar21 = -uVar21 & (uVar40 + uVar21) - 1;
                  }
                }
                else {
                  uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
                  iVar8 = *(int *)(lVar11 + 0x18);
                }
              }
LAB_142aae7c1:
              iVar25 = (int)(uVar21 >> 2);
              iVar32 = iVar25 << 5;
              if (iVar25 < (int)uVar26) {
                iVar32 = -0x20;
              }
            }
            *(int *)(lVar11 + 0x1c) = iVar32;
            FUN_1446efbd8(lVar11,iVar8);
          }
          lVar20 = *(longlong *)(*(longlong *)(lVar33 + 0x60) + 0x80);
          if (lVar20 == 0) {
            lVar20 = *(longlong *)(lVar33 + 0x60);
          }
          uVar26 = *(uint *)(lVar20 + 0x18 + lVar38);
          puVar30 = (uint *)(lVar20 + lVar38);
          if (uVar26 == 0) {
            uVar43 = 1;
            iVar8 = 0;
            uVar21 = 0;
            uVar41 = 0;
          }
          else {
            puVar13 = *(uint **)(puVar30 + 4);
            if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
              puVar13 = puVar30;
            }
            uVar41 = *puVar13;
            if (uVar41 == 0) {
              iVar8 = uVar26 + 0x1e;
              if (-1 < (int)(uVar26 - 1)) {
                iVar8 = uVar26 - 1;
              }
              uVar21 = 0;
              uVar40 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar40 = uVar21;
              }
              iVar8 = 0;
              do {
                if (uVar40 == uVar21) goto LAB_142aae5ba;
                iVar8 = iVar8 + 0x20;
                uVar41 = puVar13[uVar21 + 1];
                uVar21 = uVar21 + 1;
              } while (uVar41 == 0);
            }
            else {
              iVar8 = 0;
              uVar21 = 0;
            }
            uVar43 = (ulonglong)(-uVar41 & uVar41);
            uVar40 = uVar43 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if ((int)uVar26 <= (int)uVar41) {
              uVar41 = uVar26;
            }
          }
          if (uVar41 != uVar26) {
            uVar17 = 0xffffffff;
            uVar18 = uVar26;
            do {
              if ((int)uVar18 <= (int)uVar41) {
                uVar41 = 0xffffffff;
              }
              lVar20 = *(longlong *)(*(longlong *)(local_408 + 0x60) + 0x80);
              if (lVar20 == 0) {
                lVar20 = *(longlong *)(local_408 + 0x60);
              }
              iVar32 = FUN_146f70732(lVar20 + lVar38);
              puVar13 = local_268[0] + 6;
              if (*(uint **)(local_268[0] + 0xc) != (uint *)0x0) {
                puVar13 = *(uint **)(local_268[0] + 0xc);
              }
              ppuVar16 = local_2e8 + 3;
              if ((uint **)local_2e8[6] != (uint **)0x0) {
                ppuVar16 = (uint **)local_2e8[6];
              }
              *(undefined8 *)(*ppuVar16 + (longlong)(int)(iVar32 * *(uint *)(ppuVar16 + 2)) * 2) =
                   *(undefined8 *)(*(longlong *)puVar13 + (longlong)(int)(uVar41 * puVar13[4]) * 8);
              uVar17 = ~(uint)uVar43 & uVar17;
              puVar13 = *(uint **)(puVar30 + 4);
              if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
                puVar13 = puVar30;
              }
              uVar18 = puVar30[6];
              iVar32 = (int)uVar21;
              lVar20 = (longlong)iVar32;
              uVar41 = puVar13[lVar20] & uVar17;
              if (uVar41 == 0) {
                iVar25 = uVar18 + 0x1e;
                if (-1 < (int)(uVar18 - 1)) {
                  iVar25 = uVar18 - 1;
                }
                iVar25 = iVar25 >> 5;
                iVar8 = iVar8 + 0x20;
                iVar28 = iVar25;
                if (iVar25 < iVar32) {
                  iVar28 = iVar32;
                }
                if (iVar32 < iVar25) {
                  lVar11 = 0;
                  do {
                    uVar41 = puVar13[lVar20 + lVar11 + 1];
                    if (uVar41 != 0) {
                      uVar21 = (ulonglong)(iVar32 + (int)lVar11 + 1);
                      uVar17 = 0xffffffff;
                      goto LAB_142aae6d8;
                    }
                    iVar8 = iVar8 + 0x20;
                    lVar11 = lVar11 + 1;
                  } while (iVar28 - lVar20 != lVar11);
                  uVar17 = 0xffffffff;
                  lVar20 = (longlong)iVar28;
                }
                uVar21 = lVar20 + 1U & 0xffffffff;
                uVar41 = uVar18;
              }
              else {
LAB_142aae6d8:
                uVar43 = (ulonglong)(-uVar41 & uVar41);
                uVar40 = uVar43 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar40 != 0) {
                  for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                if ((int)uVar18 <= (int)uVar41) {
                  uVar41 = uVar18;
                }
              }
            } while (uVar41 != uVar26);
          }
LAB_142aae5ba:
          dVar39 = (double)((longlong)local_3f8 + 1);
          lVar20 = local_408;
        } while (dVar39 != (double)local_3d8._0_8_);
      }
      plVar15 = local_3c0;
      lVar11 = local_400;
      if (((longlong *)*local_3c0 == (longlong *)0x0 || (int)local_3c0[1] == 0) ||
         (cVar7 = (**(code **)(*(longlong *)*local_3c0 + 0x30))(), cVar7 == '\0')) {
        puVar30 = *(uint **)(*(uint **)(lVar11 + 0x80) + 0x20);
        if (puVar30 == (uint *)0x0) {
          puVar30 = *(uint **)(lVar11 + 0x80);
        }
        uVar26 = puVar30[6];
        if (uVar26 == 0) {
          uVar43 = 1;
          iVar8 = 0;
          uVar21 = 0;
          uVar41 = 0;
        }
        else {
          puVar13 = *(uint **)(puVar30 + 4);
          if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
            puVar13 = puVar30;
          }
          uVar41 = *puVar13;
          if (uVar41 == 0) {
            iVar8 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar8 = uVar26 - 1;
            }
            uVar21 = 0;
            uVar40 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar40 = uVar21;
            }
            iVar8 = 0;
            do {
              if (uVar40 == uVar21) goto LAB_142aaed68;
              iVar8 = iVar8 + 0x20;
              uVar41 = puVar13[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar41 == 0);
          }
          else {
            iVar8 = 0;
            uVar21 = 0;
          }
          uVar43 = (ulonglong)(-uVar41 & uVar41);
          uVar40 = uVar43 * 2 + 1;
          lVar33 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar33 == 0; lVar33 = lVar33 + -1) {
            }
          }
          uVar41 = (iVar8 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
          if ((int)uVar26 <= (int)uVar41) {
            uVar41 = uVar26;
          }
        }
        if (uVar41 != uVar26) {
          uVar18 = 0xffffffff;
          local_3e8 = puVar30;
          local_3b8 = (longlong *)(ulonglong)uVar26;
          do {
            local_36c = uVar41;
            if ((int)uVar26 <= (int)uVar41) {
              local_36c = 0xffffffff;
            }
            local_370 = 0xffffffff;
            puVar30 = *(uint **)(*(uint **)(lVar20 + 0x80) + 0x20);
            if (puVar30 == (uint *)0x0) {
              puVar30 = *(uint **)(lVar20 + 0x80);
            }
            uVar26 = puVar30[6];
            local_3f8 = (double)CONCAT44(local_3f8._4_4_,iVar8);
            local_3d8._0_4_ = uVar18;
            if (uVar26 == 0) {
              uVar42 = 1;
              iVar8 = 0;
              uVar40 = 0;
              uVar41 = 0;
            }
            else {
              puVar13 = *(uint **)(puVar30 + 4);
              if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
                puVar13 = puVar30;
              }
              uVar41 = *puVar13;
              if (uVar41 == 0) {
                iVar8 = uVar26 + 0x1e;
                if (-1 < (int)(uVar26 - 1)) {
                  iVar8 = uVar26 - 1;
                }
                uVar40 = 0;
                uVar34 = (ulonglong)(uint)(iVar8 >> 5);
                if (iVar8 >> 5 < 1) {
                  uVar34 = uVar40;
                }
                iVar8 = 0;
                do {
                  if (uVar34 == uVar40) goto LAB_142aaeb86;
                  iVar8 = iVar8 + 0x20;
                  uVar41 = puVar13[uVar40 + 1];
                  uVar40 = uVar40 + 1;
                } while (uVar41 == 0);
              }
              else {
                iVar8 = 0;
                uVar40 = 0;
              }
              uVar42 = (ulonglong)(-uVar41 & uVar41);
              uVar34 = uVar42 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)uVar26 <= (int)uVar41) {
                uVar41 = uVar26;
              }
            }
            if (uVar41 != uVar26) {
              plVar15 = (longlong *)(local_340 + 0x18);
              if (*(longlong **)(local_340 + 0x30) != (longlong *)0x0) {
                plVar15 = *(longlong **)(local_340 + 0x30);
              }
              plVar35 = (longlong *)(local_300 + 0x18);
              if (*(longlong **)(local_300 + 0x30) != (longlong *)0x0) {
                plVar35 = *(longlong **)(local_300 + 0x30);
              }
              iVar32 = uVar26 + 0x1e;
              if (-1 < (int)(uVar26 - 1)) {
                iVar32 = uVar26 - 1;
              }
              iVar32 = iVar32 >> 5;
              uVar18 = 0xffffffff;
              do {
                if ((int)uVar26 <= (int)uVar41) {
                  uVar41 = 0xffffffff;
                }
                if (*(longlong *)(*plVar15 + (longlong)(int)(local_36c * (int)plVar15[2]) * 8) ==
                    *(longlong *)(*plVar35 + (longlong)(int)(uVar41 * (int)plVar35[2]) * 8)) {
                  local_370 = uVar41;
                  if (uVar41 != 0xffffffff) goto LAB_142aaebe3;
                  break;
                }
                uVar18 = uVar18 & ~(uint)uVar42;
                puVar13 = *(uint **)(puVar30 + 4);
                if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
                  puVar13 = puVar30;
                }
                iVar25 = (int)uVar40;
                lVar20 = (longlong)iVar25;
                uVar41 = puVar13[lVar20] & uVar18;
                if (uVar41 == 0) {
                  iVar28 = iVar32;
                  if (iVar32 < iVar25) {
                    iVar28 = iVar25;
                  }
                  if (iVar32 <= iVar25) break;
                  lVar11 = 0;
                  while( true ) {
                    iVar8 = iVar8 + 0x20;
                    uVar41 = puVar13[lVar20 + lVar11 + 1];
                    if (uVar41 != 0) break;
                    lVar11 = lVar11 + 1;
                    if (iVar28 - lVar20 == lVar11) goto LAB_142aaeb86;
                  }
                  uVar40 = (ulonglong)(iVar25 + (int)lVar11 + 1);
                  uVar18 = 0xffffffff;
                }
                uVar42 = (ulonglong)(-uVar41 & uVar41);
                uVar34 = uVar42 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar34 != 0) {
                  for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              } while ((int)uVar41 < (int)uVar26);
            }
LAB_142aaeb86:
            local_370 = FUN_146f70732();
            plVar15 = (longlong *)(local_340 + 0x18);
            if (*(longlong **)(local_340 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_340 + 0x30);
            }
            plVar35 = (longlong *)(local_300 + 0x18);
            if (*(longlong **)(local_300 + 0x30) != (longlong *)0x0) {
              plVar35 = *(longlong **)(local_300 + 0x30);
            }
            *(undefined8 *)(*plVar35 + (longlong)(int)(local_370 * (int)plVar35[2]) * 8) =
                 *(undefined8 *)(*plVar15 + (longlong)(int)((int)plVar15[2] * local_36c) * 8);
LAB_142aaebe3:
            local_268[0] = &local_36c;
            local_268[1] = &local_370;
            FUN_146fa4106(&local_148,&local_2e8,local_268,0);
            uVar18 = local_3d8._0_4_ & ~(uint)uVar43;
            puVar30 = *(uint **)(local_3e8 + 4);
            if (*(uint **)(local_3e8 + 4) == (uint *)0x0) {
              puVar30 = local_3e8;
            }
            uVar26 = local_3e8[6];
            iVar32 = (int)uVar21;
            lVar20 = (longlong)iVar32;
            uVar41 = puVar30[lVar20] & uVar18;
            iVar8 = local_3f8._0_4_;
            if (uVar41 == 0) {
              iVar25 = uVar26 + 0x1e;
              if (-1 < (int)(uVar26 - 1)) {
                iVar25 = uVar26 - 1;
              }
              iVar25 = iVar25 >> 5;
              iVar8 = local_3f8._0_4_ + 0x20;
              iVar28 = iVar25;
              if (iVar25 < iVar32) {
                iVar28 = iVar32;
              }
              if (iVar32 < iVar25) {
                lVar11 = 0;
                do {
                  uVar41 = puVar30[lVar20 + lVar11 + 1];
                  if (uVar41 != 0) {
                    uVar21 = (ulonglong)(iVar32 + (int)lVar11 + 1);
                    uVar18 = 0xffffffff;
                    goto LAB_142aaecc8;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar28 - lVar20 != lVar11);
                uVar18 = 0xffffffff;
                iVar32 = iVar28;
              }
              uVar21 = (ulonglong)(iVar32 + 1);
              uVar41 = uVar26;
            }
            else {
LAB_142aaecc8:
              uVar43 = (ulonglong)(-uVar41 & uVar41);
              uVar40 = uVar43 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)uVar26 <= (int)uVar41) {
                uVar41 = uVar26;
              }
            }
            lVar11 = local_400;
            lVar20 = local_408;
          } while (uVar41 != (uint)local_3b8);
        }
      }
      else {
        if ((int)plVar15[1] == 0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = (longlong *)*plVar15;
        }
        (**(code **)(*plVar15 + 0x58))(plVar15,lVar11);
      }
LAB_142aaed68:
      puVar30 = *(uint **)(*(uint **)(lVar20 + 0x80) + 0x20);
      if (puVar30 == (uint *)0x0) {
        puVar30 = *(uint **)(lVar20 + 0x80);
      }
      uVar26 = puVar30[6];
      local_39c = -1;
      if (uVar26 - puVar30[0x1e] == 1) {
        puVar13 = *(uint **)(puVar30 + 4);
        if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
          puVar13 = puVar30;
        }
        if (0x1f < uVar26 + 0x1f) {
          lVar33 = 0;
LAB_142aaedae:
          uVar41 = *puVar13;
          if (uVar41 == 0) goto code_r0x000142aaedb6;
          iVar8 = 0;
          if (uVar41 != 0) {
            for (; (uVar41 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
            }
          }
          iVar8 = iVar8 - (int)lVar33;
          if (iVar8 < (int)uVar26) {
            local_39c = iVar8;
          }
        }
      }
LAB_142aaedda:
      puVar30 = *(uint **)(*(uint **)(lVar11 + 0x50) + 0x20);
      if (puVar30 == (uint *)0x0) {
        puVar30 = *(uint **)(lVar11 + 0x50);
      }
      uVar26 = puVar30[6];
      if (uVar26 == 0) {
        uVar43 = 1;
        iVar8 = 0;
        uVar21 = 0;
        uVar41 = 0;
      }
      else {
        puVar13 = *(uint **)(puVar30 + 4);
        if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
          puVar13 = puVar30;
        }
        uVar41 = *puVar13;
        if (uVar41 == 0) {
          iVar8 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar8 = uVar26 - 1;
          }
          uVar21 = 0;
          uVar40 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar40 = uVar21;
          }
          iVar8 = 0;
          do {
            if (uVar40 == uVar21) goto LAB_142aaee6c;
            iVar8 = iVar8 + 0x20;
            uVar41 = puVar13[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar41 == 0);
        }
        else {
          iVar8 = 0;
          uVar21 = 0;
        }
        uVar43 = (ulonglong)(-uVar41 & uVar41);
        uVar40 = uVar43 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar41 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar41) {
          uVar41 = uVar26;
        }
      }
      if (uVar41 != uVar26) {
        uVar17 = 0xffffffff;
        uVar18 = uVar26;
        do {
          local_36c = uVar41;
          if ((int)uVar18 <= (int)uVar41) {
            local_36c = 0xffffffff;
          }
          lVar11 = *(longlong *)(*(longlong *)(lVar20 + 0x50) + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(lVar20 + 0x50);
          }
          local_370 = FUN_146f70732(lVar11);
          plVar15 = (longlong *)(local_330 + 0x18);
          if (*(longlong **)(local_330 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_330 + 0x30);
          }
          dVar39 = (double)local_3c0[6];
          dVar22 = (double)local_3c0[5];
          lVar11 = *plVar15;
          lVar33 = (longlong)(int)((int)plVar15[2] * local_36c);
          fVar3 = *(float *)(lVar11 + 8 + lVar33 * 0xc);
          fVar4 = *(float *)(lVar11 + 4 + lVar33 * 0xc);
          plVar15 = (longlong *)(local_2f0 + 0x18);
          if (*(longlong **)(local_2f0 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_2f0 + 0x30);
          }
          lVar38 = *plVar15;
          lVar12 = (longlong)(int)(local_370 * (int)plVar15[2]);
          *(float *)(lVar38 + lVar12 * 0xc) =
               *(float *)(lVar11 + lVar33 * 0xc) - (float)(double)local_3c0[4];
          *(float *)(lVar38 + 4 + lVar12 * 0xc) = fVar4 - (float)dVar22;
          *(float *)(lVar38 + 8 + lVar12 * 0xc) = fVar3 - (float)dVar39;
          local_268[0] = &local_36c;
          local_268[1] = &local_370;
          FUN_146fa4438(&local_198,&local_2e8,local_268);
          uVar17 = ~(uint)uVar43 & uVar17;
          puVar13 = *(uint **)(puVar30 + 4);
          if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
            puVar13 = puVar30;
          }
          uVar18 = puVar30[6];
          iVar32 = (int)uVar21;
          lVar11 = (longlong)iVar32;
          uVar41 = puVar13[lVar11] & uVar17;
          if (uVar41 == 0) {
            iVar25 = uVar18 + 0x1e;
            if (-1 < (int)(uVar18 - 1)) {
              iVar25 = uVar18 - 1;
            }
            iVar25 = iVar25 >> 5;
            iVar8 = iVar8 + 0x20;
            iVar28 = iVar25;
            if (iVar25 < iVar32) {
              iVar28 = iVar32;
            }
            if (iVar32 < iVar25) {
              lVar33 = 0;
              do {
                uVar41 = puVar13[lVar11 + lVar33 + 1];
                if (uVar41 != 0) {
                  uVar21 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_142aaf032;
                }
                iVar8 = iVar8 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar28 - lVar11 != lVar33);
              uVar17 = 0xffffffff;
              iVar32 = iVar28;
            }
            uVar21 = (ulonglong)(iVar32 + 1);
            lVar20 = local_408;
            uVar41 = uVar18;
          }
          else {
LAB_142aaf032:
            uVar43 = (ulonglong)(-uVar41 & uVar41);
            uVar40 = uVar43 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar41 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if ((int)uVar18 <= (int)uVar41) {
              uVar41 = uVar18;
            }
          }
        } while (uVar41 != uVar26);
      }
LAB_142aaee6c:
      if ((char)local_3c0[0x14] != '\0') {
        if (local_170 == 0) {
          uVar43 = 1;
          uVar21 = 0;
          iVar8 = 0;
          iVar32 = 0;
        }
        else {
          puVar30 = local_178;
          if (local_178 == (uint *)0x0) {
            puVar30 = local_188;
          }
          uVar26 = *puVar30;
          if (uVar26 == 0) {
            iVar8 = local_170 + 0x1e;
            if (-1 < local_170 + -1) {
              iVar8 = local_170 + -1;
            }
            uVar21 = 0;
            uVar40 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar40 = uVar21;
            }
            iVar8 = 0;
            do {
              if (uVar40 == uVar21) goto LAB_142aaf10c;
              iVar8 = iVar8 + 0x20;
              uVar26 = puVar30[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar26 == 0);
          }
          else {
            uVar21 = 0;
            iVar8 = 0;
          }
          uVar43 = (ulonglong)(-uVar26 & uVar26);
          uVar40 = uVar43 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar32 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (local_170 <= iVar32) {
            iVar32 = local_170;
          }
        }
        if (iVar32 != local_170) {
          uVar26 = 0xffffffff;
          do {
            plVar15 = (longlong *)(local_2f0 + 0x18);
            if (*(longlong **)(local_2f0 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_2f0 + 0x30);
            }
            lVar20 = *plVar15;
            lVar11 = (longlong)((int)plVar15[2] * *(int *)(local_198 + 4 + (longlong)iVar32 * 0x10))
            ;
            dVar45 = (double)*(float *)(lVar20 + lVar11 * 0xc) * (double)local_3c0[0x10];
            dVar52 = (double)*(float *)(lVar20 + 4 + lVar11 * 0xc) * (double)local_3c0[0x11];
            dVar53 = (double)*(float *)(lVar20 + 8 + lVar11 * 0xc) * (double)local_3c0[0x12];
            dVar49 = (double)local_3c0[8];
            dVar47 = (double)local_3c0[9];
            dVar48 = (double)local_3c0[10];
            dVar39 = (double)local_3c0[0xb];
            dVar22 = (double)local_3c0[0xb];
            dVar46 = dVar52 * dVar49 - dVar45 * dVar47;
            dVar51 = dVar53 * dVar47 - dVar52 * dVar48;
            dVar50 = dVar45 * dVar48 - dVar49 * dVar53;
            dVar51 = dVar51 + dVar51;
            dVar50 = dVar50 + dVar50;
            dVar46 = dVar46 + dVar46;
            dVar54 = (double)local_3c0[0xd];
            dVar44 = (double)local_3c0[0xe];
            *(float *)(lVar20 + lVar11 * 0xc) =
                 (float)((dVar46 * dVar47 - dVar50 * dVar48) + dVar39 * dVar51 + dVar45 +
                        (double)local_3c0[0xc]);
            *(float *)(lVar20 + 4 + lVar11 * 0xc) =
                 (float)((dVar48 * dVar51 - dVar49 * dVar46) + dVar22 * dVar50 + dVar52 + dVar54);
            *(float *)(lVar20 + 8 + lVar11 * 0xc) =
                 (float)(dVar46 * dVar39 + dVar53 + (dVar50 * dVar49 - dVar51 * dVar47) + dVar44);
            uVar26 = ~(uint)uVar43 & uVar26;
            puVar30 = local_178;
            if (local_178 == (uint *)0x0) {
              puVar30 = local_188;
            }
            iVar32 = (int)uVar21;
            lVar20 = (longlong)iVar32;
            uVar41 = puVar30[lVar20] & uVar26;
            if (uVar41 == 0) {
              iVar25 = local_170 + 0x1e;
              if (-1 < local_170 + -1) {
                iVar25 = local_170 + -1;
              }
              iVar25 = iVar25 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar28 = iVar25;
              if (iVar25 < iVar32) {
                iVar28 = iVar32;
              }
              if (iVar32 < iVar25) {
                lVar11 = 0;
                do {
                  uVar41 = puVar30[lVar20 + lVar11 + 1];
                  if (uVar41 != 0) {
                    uVar21 = (ulonglong)(iVar32 + (int)lVar11 + 1);
                    uVar26 = 0xffffffff;
                    goto LAB_142aafe9f;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar28 - lVar20 != lVar11);
                uVar26 = 0xffffffff;
                lVar20 = (longlong)iVar28;
              }
              uVar21 = lVar20 + 1U & 0xffffffff;
              iVar32 = local_170;
            }
            else {
LAB_142aafe9f:
              uVar43 = (ulonglong)(-uVar41 & uVar41);
              uVar40 = uVar43 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar32 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (local_170 <= iVar32) {
                iVar32 = local_170;
              }
            }
          } while (iVar32 != local_170);
        }
      }
LAB_142aaf10c:
      puVar30 = *(uint **)(*(uint **)(local_400 + 0x68) + 0x20);
      if (puVar30 == (uint *)0x0) {
        puVar30 = *(uint **)(local_400 + 0x68);
      }
      uVar26 = puVar30[6];
      if (uVar26 == 0) {
        uVar43 = 1;
        uVar21 = 0;
        uVar40 = 0;
        iVar8 = 0;
      }
      else {
        puVar13 = *(uint **)(puVar30 + 4);
        if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
          puVar13 = puVar30;
        }
        uVar41 = *puVar13;
        if (uVar41 == 0) {
          iVar8 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar8 = uVar26 - 1;
          }
          uVar21 = 0;
          uVar40 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar40 = uVar21;
          }
          iVar8 = 0;
          do {
            if (uVar40 == uVar21) goto LAB_142aaf1be;
            iVar8 = iVar8 + 0x20;
            uVar41 = puVar13[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar41 == 0);
        }
        else {
          uVar21 = 0;
          iVar8 = 0;
        }
        uVar43 = (ulonglong)(-uVar41 & uVar41);
        uVar40 = uVar43 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        uVar40 = (ulonglong)uVar41;
        if ((int)uVar26 <= (int)uVar41) {
          uVar40 = (ulonglong)uVar26;
        }
      }
      if ((uint)uVar40 != uVar26) {
        local_3e8 = local_338;
        local_3e0 = local_338 + 6;
        uVar41 = 0xffffffff;
        local_3d8._0_8_ = puVar30;
        local_3b8 = (longlong *)(ulonglong)uVar26;
        do {
          lVar20 = local_408;
          if ((int)uVar26 <= (int)uVar40) {
            uVar40 = 0xffffffff;
          }
          plVar15 = *(longlong **)(*(longlong *)(local_400 + 0x90) + 0x30);
          plVar35 = (longlong *)(*(longlong *)(local_400 + 0x90) + 0x18);
          if (plVar15 != (longlong *)0x0) {
            plVar35 = plVar15;
          }
          iVar32 = (int)uVar40;
          if (*(int *)(local_400 + 0x98) == 0) {
            plVar35 = (longlong *)((longlong)(iVar32 >> 8) * 0xc18 + *plVar35);
            iVar25 = *(int *)((longlong)plVar35 + (uVar40 & 0xff) * 4 + 0x10);
          }
          else {
            iVar25 = (int)plVar35[2] * iVar32;
          }
          local_3f8 = (double)CONCAT44(local_3f8._4_4_,iVar8);
          uVar29 = _DAT_00000004;
          if ((int)uStack_190 != local_164) {
            uVar26 = *(uint *)(*plVar35 + 4 + (longlong)iVar25 * 4);
            puVar19 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar19 = local_160;
            }
            iVar8 = *(int *)(puVar19 + (ulonglong)(local_150 - 1U & uVar26) * 4);
            puVar37 = (undefined4 *)&DAT_00000004;
            if (iVar8 != -1) {
              do {
                lVar11 = local_198 + (longlong)iVar8 * 0x10;
                if (*(uint *)(local_198 + (longlong)iVar8 * 0x10) == uVar26) goto LAB_142aaf63a;
                iVar8 = *(int *)(lVar11 + 8);
              } while (iVar8 != -1);
              lVar11 = 0;
LAB_142aaf63a:
              puVar37 = (undefined4 *)(lVar11 + 4);
            }
            uVar26 = *(uint *)(*plVar35 + (longlong)iVar25 * 4);
            uVar29 = *puVar37;
            iVar8 = *(int *)(puVar19 + (ulonglong)(local_150 - 1U & uVar26) * 4);
            while (iVar8 != -1) {
              lVar11 = local_198 + (longlong)iVar8 * 0x10;
              if (*(uint *)(local_198 + (longlong)iVar8 * 0x10) == uVar26) goto LAB_142aaf670;
              iVar8 = *(int *)(lVar11 + 8);
            }
          }
          lVar11 = 0;
LAB_142aaf670:
          uVar9 = *(undefined4 *)(lVar11 + 4);
          lVar11 = *(longlong *)(*(longlong *)(local_408 + 0x68) + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(local_408 + 0x68);
          }
          iVar8 = FUN_146f70732(lVar11);
          FUN_146f70188(lVar20,iVar8,uVar9,uVar29);
          puVar30 = *(uint **)(local_3e8 + 0xc);
          if (*(uint **)(local_3e8 + 0xc) == (uint *)0x0) {
            puVar30 = local_3e0;
          }
          plVar15 = (longlong *)(local_2f8 + 0x18);
          if (*(longlong **)(local_2f8 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_2f8 + 0x30);
          }
          *(undefined1 *)(*plVar15 + (longlong)(iVar8 * (int)plVar15[2])) =
               *(undefined1 *)(*(longlong *)puVar30 + (longlong)(int)(iVar32 * puVar30[4]));
          uVar41 = uVar41 & ~(uint)uVar43;
          lVar20 = *(longlong *)(local_3d8._0_8_ + 0x10);
          if (*(longlong *)(local_3d8._0_8_ + 0x10) == 0) {
            lVar20 = local_3d8._0_8_;
          }
          uVar26 = *(uint *)(local_3d8._0_8_ + 0x18);
          iVar32 = (int)uVar21;
          lVar11 = (longlong)iVar32;
          uVar18 = *(uint *)(lVar20 + lVar11 * 4) & uVar41;
          iVar8 = local_3f8._0_4_;
          if (uVar18 == 0) {
            iVar25 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar25 = uVar26 - 1;
            }
            iVar25 = iVar25 >> 5;
            iVar8 = local_3f8._0_4_ + 0x20;
            iVar28 = iVar25;
            if (iVar25 < iVar32) {
              iVar28 = iVar32;
            }
            if (iVar32 < iVar25) {
              lVar33 = 0;
              do {
                uVar18 = *(uint *)(lVar20 + lVar11 * 4 + 4 + lVar33 * 4);
                if (uVar18 != 0) {
                  uVar21 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar41 = 0xffffffff;
                  goto LAB_142aaf77c;
                }
                iVar8 = iVar8 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar28 - lVar11 != lVar33);
              uVar41 = 0xffffffff;
              lVar11 = (longlong)iVar28;
            }
            uVar40 = (ulonglong)uVar26;
            uVar21 = lVar11 + 1U & 0xffffffff;
          }
          else {
LAB_142aaf77c:
            uVar43 = (ulonglong)(-uVar18 & uVar18);
            uVar40 = uVar43 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar18 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            uVar40 = (ulonglong)uVar18;
            if ((int)uVar26 <= (int)uVar18) {
              uVar40 = (ulonglong)uVar26;
            }
          }
        } while ((int)uVar40 != (int)local_3b8);
      }
LAB_142aaf1be:
      puVar30 = *(uint **)(*(uint **)(local_400 + 0x58) + 0x20);
      if (puVar30 == (uint *)0x0) {
        puVar30 = *(uint **)(local_400 + 0x58);
      }
      uVar26 = puVar30[6];
      if (uVar26 == 0) {
        uVar43 = 1;
        uVar21 = 0;
        iVar8 = 0;
        uVar41 = 0;
      }
      else {
        puVar13 = *(uint **)(puVar30 + 4);
        if (*(uint **)(puVar30 + 4) == (uint *)0x0) {
          puVar13 = puVar30;
        }
        uVar41 = *puVar13;
        if (uVar41 == 0) {
          iVar8 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar8 = uVar26 - 1;
          }
          uVar21 = 0;
          uVar40 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar40 = uVar21;
          }
          iVar8 = 0;
          do {
            if (uVar40 == uVar21) goto LAB_142aaf27c;
            iVar8 = iVar8 + 0x20;
            uVar41 = puVar13[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar41 == 0);
        }
        else {
          uVar21 = 0;
          iVar8 = 0;
        }
        uVar43 = (ulonglong)(-uVar41 & uVar41);
        uVar40 = uVar43 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar41) {
          uVar41 = uVar26;
        }
      }
      if (uVar41 != uVar26) {
        uVar18 = 0xffffffff;
        local_3d8._0_8_ = puVar30;
        uVar40 = local_398;
        local_3f8 = (double)(ulonglong)uVar26;
        do {
          lVar20 = local_408;
          if ((int)uVar26 <= (int)uVar41) {
            uVar41 = 0xffffffff;
          }
          plVar15 = *(longlong **)(*(longlong *)(local_400 + 0x88) + 0x30);
          plVar35 = (longlong *)(*(longlong *)(local_400 + 0x88) + 0x18);
          if (plVar15 != (longlong *)0x0) {
            plVar35 = plVar15;
          }
          if ((int)uStack_190 != local_164) {
            uVar26 = *(uint *)(*plVar35 + (longlong)(int)(uVar41 * (int)plVar35[2]) * 4);
            puVar19 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar19 = local_160;
            }
            iVar32 = *(int *)(puVar19 + (ulonglong)(local_150 - 1U & uVar26) * 4);
            while (iVar32 != -1) {
              lVar11 = local_198 + (longlong)iVar32 * 0x10;
              if (*(uint *)(local_198 + (longlong)iVar32 * 0x10) == uVar26) goto LAB_142aaf896;
              iVar32 = *(int *)(lVar11 + 8);
            }
          }
          lVar11 = 0;
LAB_142aaf896:
          uVar29 = *(undefined4 *)(lVar11 + 4);
          lVar11 = *(longlong *)(*(longlong *)(local_408 + 0x58) + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(local_408 + 0x58);
          }
          local_36c = uVar41;
          local_370 = FUN_146f70732(lVar11);
          FUN_146f70016(lVar20,local_370,uVar29);
          plVar15 = (longlong *)(local_348 + 0x18);
          if (*(longlong **)(local_348 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_348 + 0x30);
          }
          lVar20 = *plVar15;
          lVar11 = (longlong)(int)((int)plVar15[2] * local_36c);
          plVar15 = (longlong *)(local_308 + 0x18);
          if (*(longlong **)(local_308 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_308 + 0x30);
          }
          lVar33 = *plVar15;
          lVar38 = (longlong)(int)((int)plVar15[2] * local_370);
          *(undefined4 *)(lVar33 + 8 + lVar38 * 0xc) = *(undefined4 *)(lVar20 + 8 + lVar11 * 0xc);
          *(undefined8 *)(lVar33 + lVar38 * 0xc) = *(undefined8 *)(lVar20 + lVar11 * 0xc);
          plVar15 = (longlong *)(local_350 + 0x18);
          if (*(longlong **)(local_350 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_350 + 0x30);
          }
          lVar20 = *plVar15;
          lVar11 = (longlong)(int)((int)plVar15[2] * local_36c);
          plVar15 = (longlong *)(local_310 + 0x18);
          if (*(longlong **)(local_310 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_310 + 0x30);
          }
          lVar33 = *plVar15;
          lVar38 = (longlong)(int)((int)plVar15[2] * local_370);
          *(undefined4 *)(lVar33 + 8 + lVar38 * 0xc) = *(undefined4 *)(lVar20 + 8 + lVar11 * 0xc);
          *(undefined8 *)(lVar33 + lVar38 * 0xc) = *(undefined8 *)(lVar20 + lVar11 * 0xc);
          plVar15 = (longlong *)(local_358 + 0x18);
          if (*(longlong **)(local_358 + 0x30) != (longlong *)0x0) {
            plVar15 = *(longlong **)(local_358 + 0x30);
          }
          plVar35 = (longlong *)(local_318 + 0x18);
          if (*(longlong **)(local_318 + 0x30) != (longlong *)0x0) {
            plVar35 = *(longlong **)(local_318 + 0x30);
          }
          *(undefined4 *)(*plVar35 + (longlong)(int)(local_370 * (int)plVar35[2]) * 4) =
               *(undefined4 *)(*plVar15 + (longlong)(int)(local_36c * (int)plVar15[2]) * 4);
          if ((char)local_3c0[2] == '\x01') {
            plVar15 = (longlong *)(local_360 + 0x18);
            if (*(longlong **)(local_360 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_360 + 0x30);
            }
            plVar35 = (longlong *)(local_320 + 0x18);
            if (*(longlong **)(local_320 + 0x30) != (longlong *)0x0) {
              plVar35 = *(longlong **)(local_320 + 0x30);
            }
            puVar31 = (undefined8 *)(*plVar15 + (longlong)(int)((int)plVar15[2] * local_36c) * 0x10)
            ;
            uVar14 = puVar31[1];
            puVar1 = (undefined8 *)(*plVar35 + (longlong)(int)((int)plVar35[2] * local_370) * 0x10);
            *puVar1 = *puVar31;
            puVar1[1] = uVar14;
          }
          if (0 < (int)local_3c8) {
            lVar20 = 0x10;
            uVar34 = 0;
            do {
              if ((longlong)*(int *)(local_368 + 0x38) <= (longlong)uVar34) break;
              lVar11 = local_368 + 0x18;
              if (*(longlong *)(local_368 + 0x30) != 0) {
                lVar11 = *(longlong *)(local_368 + 0x30);
              }
              lVar33 = local_328 + 0x18;
              if (*(longlong *)(local_328 + 0x30) != 0) {
                lVar33 = *(longlong *)(local_328 + 0x30);
              }
              *(undefined8 *)
               (*(longlong *)(lVar33 + -0x10 + lVar20) +
               (longlong)(int)(*(int *)(lVar33 + lVar20) * local_370) * 8) =
                   *(undefined8 *)
                    (*(longlong *)(lVar11 + -0x10 + lVar20) +
                    (longlong)(int)(*(int *)(lVar11 + lVar20) * local_36c) * 8);
              uVar34 = uVar34 + 1;
              lVar20 = lVar20 + 0x18;
            } while (uVar40 != uVar34);
          }
          local_268[0] = &local_36c;
          local_268[1] = &local_370;
          FUN_146fa472a(&local_1e8,&local_2e8,local_268);
          uVar18 = uVar18 & ~(uint)uVar43;
          lVar20 = *(longlong *)(local_3d8._0_8_ + 0x10);
          if (*(longlong *)(local_3d8._0_8_ + 0x10) == 0) {
            lVar20 = local_3d8._0_8_;
          }
          uVar26 = *(uint *)(local_3d8._0_8_ + 0x18);
          iVar32 = (int)uVar21;
          lVar11 = (longlong)iVar32;
          uVar41 = *(uint *)(lVar20 + lVar11 * 4) & uVar18;
          if (uVar41 == 0) {
            iVar25 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar25 = uVar26 - 1;
            }
            iVar25 = iVar25 >> 5;
            iVar8 = iVar8 + 0x20;
            iVar28 = iVar25;
            if (iVar25 < iVar32) {
              iVar28 = iVar32;
            }
            if (iVar32 < iVar25) {
              lVar33 = 0;
              do {
                uVar41 = *(uint *)(lVar20 + lVar11 * 4 + 4 + lVar33 * 4);
                if (uVar41 != 0) {
                  uVar21 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_142aafbaa;
                }
                iVar8 = iVar8 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar28 - lVar11 != lVar33);
              uVar18 = 0xffffffff;
              iVar32 = iVar28;
            }
            uVar21 = (ulonglong)(iVar32 + 1);
            uVar40 = local_398;
            uVar41 = uVar26;
          }
          else {
LAB_142aafbaa:
            uVar43 = (ulonglong)(-uVar41 & uVar41);
            uVar34 = uVar43 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar41 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if ((int)uVar26 <= (int)uVar41) {
              uVar41 = uVar26;
            }
          }
        } while (uVar41 != SUB84(local_3f8,0));
      }
LAB_142aaf27c:
      plVar15 = local_3c0;
      lVar20 = local_408;
      uVar14 = 0;
      local_3e8 = (uint *)0x0;
      if ((char)local_3c0[0x14] != '\0') {
        dVar44 = (double)local_3c0[8];
        dVar54 = (double)local_3c0[9];
        dVar49 = (double)local_3c0[10];
        auVar55 = *(undefined1 (*) [16])(local_3c0 + 0x10);
        local_2d8 = auVar55._0_8_;
        local_2c8 = auVar55._8_8_;
        dVar22 = (double)local_3c0[0x12];
        dVar47 = dVar54 + dVar54;
        dVar48 = dVar49 + dVar49;
        dVar39 = dVar44 * (dVar44 + dVar44);
        local_2e8 = (uint **)((1.0 - (dVar49 * dVar48 + dVar54 * dVar47)) * local_2d8);
        dStack_2c0 = (1.0 - (dVar49 * dVar48 + dVar39)) * local_2c8;
        local_298 = (1.0 - (dVar39 + dVar54 * dVar47)) * dVar22;
        dVar39 = (double)local_3c0[0xb];
        dVar49 = dVar48 * dVar39;
        dVar53 = (dVar44 + dVar44) * (double)local_3c0[0xb];
        dVar39 = dVar47 * dVar39;
        dStack_2e0 = (dVar47 * dVar44 + dVar49) * local_2d8;
        local_2b8 = (dVar48 * dVar54 + dVar53) * local_2c8;
        local_2a8 = (dVar39 + (double)local_3c0[8] * dVar48) * dVar22;
        local_2c8 = (dVar47 * dVar44 - dVar49) * local_2c8;
        dStack_2a0 = (dVar48 * dVar54 - dVar53) * dVar22;
        local_2d8 = ((double)local_3c0[8] * dVar48 - dVar39) * local_2d8;
        uStack_2d0 = 0;
        uStack_2b0 = 0;
        uStack_290 = 0;
        local_288 = local_3c0[0xc];
        lStack_280 = local_3c0[0xd];
        local_278 = local_3c0[0xe];
        uStack_270 = 0x3ff0000000000000;
        if ((((((9.99999993922529e-09 < ABS((double)local_2e8)) ||
               (9.99999993922529e-09 < ABS(dStack_2e0))) || (9.99999993922529e-09 < ABS(local_2d8)))
             || ((9.99999993922529e-09 < ABS(local_2c8) || (9.99999993922529e-09 < ABS(dStack_2c0)))
                )) || ((9.99999993922529e-09 < ABS(local_2b8) ||
                       ((9.99999993922529e-09 < ABS(local_2a8) ||
                        (9.99999993922529e-09 < ABS(dStack_2a0))))))) ||
           (9.99999993922529e-09 < ABS(local_298))) {
          uVar14 = FUN_14007522e();
          auVar55 = *(undefined1 (*) [16])(plVar15 + 0x10);
          dVar22 = (double)plVar15[0x12];
        }
        else {
          puVar31 = &DAT_14c846400;
          ppuVar16 = local_268;
          for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
            *ppuVar16 = (uint *)*puVar31;
            puVar31 = puVar31 + 1;
            ppuVar16 = ppuVar16 + 1;
          }
        }
        local_3b8 = local_250;
        dStack_3b0 = local_230;
        local_3f8 = local_210;
        uStack_3f0 = uStack_208;
        dVar22 = auVar55._8_8_ * auVar55._0_8_ * dVar22;
        local_3d8._8_4_ = auVar55._8_4_;
        local_3d8._0_8_ = dVar22;
        local_3d8._12_4_ = auVar55._12_4_;
        local_3e8 = (uint *)CONCAT71((int7)((ulonglong)uVar14 >> 8),dVar22 < 0.0);
        if (local_1c0 == 0) {
          uVar43 = 1;
          uVar21 = 0;
          iVar8 = 0;
          iVar32 = 0;
        }
        else {
          puVar30 = local_1c8;
          if (local_1c8 == (uint *)0x0) {
            puVar30 = local_1d8;
          }
          uVar26 = *puVar30;
          if (uVar26 == 0) {
            iVar8 = local_1c0 + 0x1e;
            if (-1 < local_1c0 + -1) {
              iVar8 = local_1c0 + -1;
            }
            uVar21 = 0;
            uVar40 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar40 = uVar21;
            }
            iVar8 = 0;
            do {
              if (uVar40 == uVar21) goto LAB_142ab046f;
              iVar8 = iVar8 + 0x20;
              uVar26 = puVar30[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar26 == 0);
          }
          else {
            uVar21 = 0;
            iVar8 = 0;
          }
          uVar43 = (ulonglong)(-uVar26 & uVar26);
          uVar40 = uVar43 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar32 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (local_1c0 <= iVar32) {
            iVar32 = local_1c0;
          }
        }
        if (iVar32 != local_1c0) {
          dVar44 = local_228 * local_228 +
                   (double)local_268[0] * (double)local_268[0] + dStack_248 * dStack_248;
          dVar54 = local_220 * local_220 +
                   (double)local_268[1] * (double)local_268[1] + local_240 * local_240;
          dVar39 = local_218 * local_218 +
                   (double)local_258 * (double)local_258 + local_238 * local_238;
          uVar40 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
          dVar44 = (double)(~uVar40 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar44)) & uVar40)
          ;
          uVar40 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
          dVar54 = (double)(~uVar40 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar54)) & uVar40)
          ;
          uVar40 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
          dVar39 = (double)(~uVar40 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar39)) & uVar40)
          ;
          local_3f8 = local_210 * 0.0;
          uVar26 = 0xffffffff;
          do {
            plVar15 = (longlong *)(local_308 + 0x18);
            if (*(longlong **)(local_308 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_308 + 0x30);
            }
            iVar32 = *(int *)(local_1e8 + 4 + (longlong)iVar32 * 0x10);
            lVar11 = *plVar15;
            lVar33 = (longlong)((int)plVar15[2] * iVar32);
            dVar45 = (double)*(float *)(lVar11 + 8 + lVar33 * 0xc);
            dVar53 = (double)*(float *)(lVar11 + 4 + lVar33 * 0xc);
            dVar48 = (double)*(float *)(lVar11 + lVar33 * 0xc);
            dVar49 = dVar45 * (double)local_258 * dVar39 +
                     dVar53 * (double)local_268[1] * dVar54 + dVar48 * (double)local_268[0] * dVar44
                     + (double)local_250 * 0.0;
            dVar47 = dVar45 * local_238 * dVar39 +
                     dVar53 * local_240 * dVar54 + dVar48 * dStack_248 * dVar44 + local_230 * 0.0;
            dVar48 = dVar48 * dVar44 * local_228 + dVar53 * dVar54 * local_220 +
                     dVar45 * dVar39 * local_218 + local_3f8;
            dVar51 = dVar48 * dVar48 + dVar49 * dVar49 + dVar47 * dVar47;
            dVar46 = 0.0;
            dVar45 = 0.0;
            dVar52 = 0.0;
            dVar53 = 0.0;
            if (9.99999993922529e-09 < dVar51) {
              dVar45 = 1.0 / SQRT(dVar51);
              dVar53 = dVar48 * dVar45;
              dVar52 = dVar47 * dVar45;
              dVar45 = dVar45 * dVar49;
            }
            pfVar2 = (float *)(lVar11 + lVar33 * 0xc);
            *pfVar2 = (float)dVar45;
            pfVar2[1] = (float)dVar52;
            pfVar2[2] = (float)dVar53;
            plVar15 = (longlong *)(local_310 + 0x18);
            if (*(longlong **)(local_310 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_310 + 0x30);
            }
            lVar11 = *plVar15;
            lVar33 = (longlong)((int)plVar15[2] * iVar32);
            dVar49 = (double)*(float *)(lVar11 + 8 + lVar33 * 0xc);
            dVar53 = (double)*(float *)(lVar11 + 4 + lVar33 * 0xc);
            dVar45 = (double)*(float *)(lVar11 + lVar33 * 0xc);
            dVar47 = dVar49 * (double)local_258 * dVar39 +
                     dVar53 * (double)local_268[1] * dVar54 + dVar45 * (double)local_268[0] * dVar44
                     + (double)local_250 * 0.0;
            dVar48 = dVar49 * local_238 * dVar39 +
                     dVar53 * local_240 * dVar54 + dVar45 * dStack_248 * dVar44 + local_230 * 0.0;
            dVar52 = dVar45 * dVar44 * local_228 + dVar53 * dVar54 * local_220 +
                     dVar49 * dVar39 * local_218 + local_3f8;
            dVar49 = dVar52 * dVar52 + dVar47 * dVar47 + dVar48 * dVar48;
            dVar53 = 0.0;
            dVar45 = 0.0;
            if (9.99999993922529e-09 < dVar49) {
              dVar46 = 1.0 / SQRT(dVar49);
              dVar45 = dVar52 * dVar46;
              dVar53 = dVar48 * dVar46;
              dVar46 = dVar46 * dVar47;
            }
            pfVar2 = (float *)(lVar11 + lVar33 * 0xc);
            *pfVar2 = (float)dVar46;
            pfVar2[1] = (float)dVar53;
            pfVar2[2] = (float)dVar45;
            plVar15 = (longlong *)(local_318 + 0x18);
            if (*(longlong **)(local_318 + 0x30) != (longlong *)0x0) {
              plVar15 = *(longlong **)(local_318 + 0x30);
            }
            lVar11 = (longlong)(iVar32 * (int)plVar15[2]);
            uVar41 = *(uint *)(*plVar15 + lVar11 * 4);
            if (dVar22 < 0.0) {
              uVar41 = uVar41 ^ 0x80000000;
            }
            *(uint *)(*plVar15 + lVar11 * 4) = uVar41;
            uVar26 = uVar26 & ~(uint)uVar43;
            puVar30 = local_1c8;
            if (local_1c8 == (uint *)0x0) {
              puVar30 = local_1d8;
            }
            iVar32 = (int)uVar21;
            lVar11 = (longlong)iVar32;
            uVar41 = puVar30[lVar11] & uVar26;
            if (uVar41 == 0) {
              iVar25 = local_1c0 + 0x1e;
              if (-1 < local_1c0 + -1) {
                iVar25 = local_1c0 + -1;
              }
              iVar25 = iVar25 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar28 = iVar25;
              if (iVar25 < iVar32) {
                iVar28 = iVar32;
              }
              if (iVar32 < iVar25) {
                lVar33 = 0;
                do {
                  uVar41 = puVar30[lVar11 + lVar33 + 1];
                  if (uVar41 != 0) {
                    uVar21 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                    uVar26 = 0xffffffff;
                    goto LAB_142ab03ef;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar33 = lVar33 + 1;
                } while (iVar28 - lVar11 != lVar33);
                uVar26 = 0xffffffff;
                lVar11 = (longlong)iVar28;
              }
              uVar21 = lVar11 + 1U & 0xffffffff;
              lVar20 = local_408;
              iVar32 = local_1c0;
            }
            else {
LAB_142ab03ef:
              uVar43 = (ulonglong)(-uVar41 & uVar41);
              uVar40 = uVar43 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar32 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if (local_1c0 <= iVar32) {
                iVar32 = local_1c0;
              }
            }
          } while (iVar32 != local_1c0);
        }
      }
LAB_142ab046f:
      dVar39 = 0.0;
      local_3e0 = *(uint **)(*(uint **)(local_400 + 0x70) + 0x20);
      if (local_3e0 == (uint *)0x0) {
        local_3e0 = *(uint **)(local_400 + 0x70);
      }
      uVar26 = local_3e0[6];
      uVar40 = 1;
      uVar21 = 0;
      iVar8 = 0;
      if (uVar26 != 0) {
        puVar30 = *(uint **)(local_3e0 + 4);
        if (*(uint **)(local_3e0 + 4) == (uint *)0x0) {
          puVar30 = local_3e0;
        }
        uVar41 = *puVar30;
        if (uVar41 == 0) {
          iVar8 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar8 = uVar26 - 1;
          }
          dVar39 = 0.0;
          dVar22 = (double)(ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            dVar22 = dVar39;
          }
          iVar8 = 0;
          do {
            if (dVar22 == dVar39) goto LAB_142ab0515;
            iVar8 = iVar8 + 0x20;
            uVar41 = puVar30[(longlong)dVar39 + 1];
            dVar39 = (double)((longlong)dVar39 + 1);
          } while (uVar41 == 0);
        }
        else {
          dVar39 = 0.0;
        }
        uVar40 = (ulonglong)(-uVar41 & uVar41);
        uVar21 = uVar40 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar41 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        uVar21 = (ulonglong)uVar41;
        if ((int)uVar26 <= (int)uVar41) {
          uVar21 = (ulonglong)uVar26;
        }
      }
      if ((uint)uVar21 != uVar26) {
        uVar41 = 0xffffffff;
        local_388 = (ulonglong)uVar26;
        do {
          if ((int)uVar26 <= (int)uVar21) {
            uVar21 = 0xffffffff;
          }
          uVar26 = *(uint *)(local_400 + 0xa8);
          plVar15 = *(longlong **)(*(longlong *)(local_400 + 0xa0) + 0x30);
          plVar35 = (longlong *)(*(longlong *)(local_400 + 0xa0) + 0x18);
          if (plVar15 != (longlong *)0x0) {
            plVar35 = plVar15;
          }
          local_3d8._0_4_ = iVar8;
          iVar8 = (int)uVar21;
          if (uVar26 == 0) {
            plVar35 = (longlong *)((longlong)(iVar8 >> 8) * 0xc18 + *plVar35);
            uVar26 = *(uint *)((longlong)plVar35 + (uVar21 & 0xff) * 4 + 0x410);
            iVar32 = *(int *)((longlong)plVar35 + (uVar21 & 0xff) * 4 + 0x10);
          }
          else {
            iVar32 = (int)plVar35[2] * iVar8;
          }
          iVar25 = local_39c;
          if (local_39c == -1) {
            plVar15 = *(longlong **)(*(longlong *)(local_400 + 0xe8) + 0x30);
            plVar36 = (longlong *)(*(longlong *)(local_400 + 0xe8) + 0x18);
            if (plVar15 != (longlong *)0x0) {
              plVar36 = plVar15;
            }
            if ((int)uStack_140 != local_114) {
              uVar18 = *(uint *)(*plVar36 + (longlong)(iVar8 * (int)plVar36[2]) * 4);
              puVar19 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar19 = local_110;
              }
              iVar8 = *(int *)(puVar19 + (ulonglong)(local_100 - 1U & uVar18) * 4);
              while (iVar8 != -1) {
                lVar20 = local_148 + (longlong)iVar8 * 0x10;
                if (*(uint *)(local_148 + (longlong)iVar8 * 0x10) == uVar18) goto LAB_142ab0642;
                iVar8 = *(int *)(lVar20 + 8);
              }
            }
            lVar20 = 0;
LAB_142ab0642:
            iVar25 = *(int *)(lVar20 + 4);
          }
          puVar30 = (uint *)((longlong)iVar32 * 4 + *plVar35);
          local_258 = (uint **)0x0;
          local_250 = (longlong *)0x300000000;
          local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,uVar41);
          local_3f8 = dVar39;
          if ((char)local_3e8 == '\0') {
            if (uVar26 != 0) {
              puVar13 = puVar30 + (int)uVar26;
              do {
                plVar15 = local_250;
                if ((int)uStack_1e0 != local_1b4) {
                  puVar19 = local_1a8;
                  if (local_1a8 == (undefined1 *)0x0) {
                    puVar19 = local_1b0;
                  }
                  iVar8 = *(int *)(puVar19 + (ulonglong)(local_1a0 - 1U & *puVar30) * 4);
                  while (iVar8 != -1) {
                    lVar20 = local_1e8 + (longlong)iVar8 * 0x10;
                    if (*(uint *)(local_1e8 + (longlong)iVar8 * 0x10) == *puVar30)
                    goto LAB_142ab0900;
                    iVar8 = *(int *)(lVar20 + 8);
                  }
                }
                lVar20 = 0;
LAB_142ab0900:
                lVar11 = (longlong)(int)local_250;
                uVar26 = (int)local_250 + 1;
                local_250 = (longlong *)CONCAT44(local_250._4_4_,uVar26);
                if (local_250._4_4_ < uVar26) {
                  FUN_146fa4aa0(local_268,(ulonglong)plVar15 & 0xffffffff);
                }
                ppuVar16 = local_258;
                if (local_258 == (uint **)0x0) {
                  ppuVar16 = local_268;
                }
                *(undefined4 *)((longlong)ppuVar16 + lVar11 * 4) = *(undefined4 *)(lVar20 + 4);
                puVar30 = puVar30 + 1;
              } while (puVar30 != puVar13);
            }
          }
          else if (0 < (int)uVar26) {
            uVar21 = (ulonglong)uVar26;
            do {
              plVar15 = local_250;
              if ((int)uStack_1e0 != local_1b4) {
                puVar19 = local_1a8;
                if (local_1a8 == (undefined1 *)0x0) {
                  puVar19 = local_1b0;
                }
                iVar8 = *(int *)(puVar19 + (ulonglong)(local_1a0 - 1U & puVar30[uVar21 - 1]) * 4);
                while (iVar8 != -1) {
                  lVar20 = local_1e8 + (longlong)iVar8 * 0x10;
                  if (*(uint *)(local_1e8 + (longlong)iVar8 * 0x10) == puVar30[uVar21 - 1])
                  goto LAB_142ab06f7;
                  iVar8 = *(int *)(lVar20 + 8);
                }
              }
              lVar20 = 0;
LAB_142ab06f7:
              lVar11 = (longlong)(int)local_250;
              uVar26 = (int)local_250 + 1;
              local_250 = (longlong *)CONCAT44(local_250._4_4_,uVar26);
              if (local_250._4_4_ < uVar26) {
                FUN_146fa4aa0(local_268,(ulonglong)plVar15 & 0xffffffff);
              }
              ppuVar16 = local_258;
              if (local_258 == (uint **)0x0) {
                ppuVar16 = local_268;
              }
              *(undefined4 *)((longlong)ppuVar16 + lVar11 * 4) = *(undefined4 *)(lVar20 + 4);
              bVar6 = 1 < (longlong)uVar21;
              uVar21 = uVar21 - 1;
            } while (bVar6);
          }
          lVar20 = local_408;
          ppuVar16 = local_258;
          if (local_258 == (uint **)0x0) {
            ppuVar16 = local_268;
          }
          uVar29 = (int)local_250;
          lVar11 = *(longlong *)(*(longlong *)(local_408 + 0x70) + 0x80);
          if (lVar11 == 0) {
            lVar11 = *(longlong *)(local_408 + 0x70);
          }
          uVar9 = FUN_146f70732(lVar11);
          dStack_2e0 = (double)CONCAT44(dStack_2e0._4_4_,uVar29);
          local_418 = 0;
          local_2e8 = ppuVar16;
          FUN_146f7039a(lVar20,uVar9,iVar25,&local_2e8);
          if (local_258 != (uint **)0x0) {
            FUN_1400020a8();
          }
          uVar41 = (uint)local_3b8 & ~(uint)uVar40;
          puVar30 = *(uint **)(local_3e0 + 4);
          if (*(uint **)(local_3e0 + 4) == (uint *)0x0) {
            puVar30 = local_3e0;
          }
          uVar26 = local_3e0[6];
          iVar32 = SUB84(local_3f8,0);
          lVar11 = (longlong)iVar32;
          uVar18 = puVar30[lVar11] & uVar41;
          dVar39 = local_3f8;
          iVar8 = local_3d8._0_4_;
          if (uVar18 == 0) {
            iVar25 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar25 = uVar26 - 1;
            }
            iVar25 = iVar25 >> 5;
            iVar8 = local_3d8._0_4_ + 0x20;
            iVar28 = iVar25;
            if (iVar25 < iVar32) {
              iVar28 = iVar32;
            }
            if (iVar32 < iVar25) {
              lVar33 = 0;
              do {
                uVar18 = puVar30[lVar11 + lVar33 + 1];
                if (uVar18 != 0) {
                  dVar39 = (double)(ulonglong)(iVar32 + (int)lVar33 + 1);
                  uVar41 = 0xffffffff;
                  goto LAB_142ab0865;
                }
                iVar8 = iVar8 + 0x20;
                lVar33 = lVar33 + 1;
              } while (iVar28 - lVar11 != lVar33);
              uVar41 = 0xffffffff;
              iVar32 = iVar28;
            }
            uVar21 = (ulonglong)uVar26;
            dVar39 = (double)(ulonglong)(iVar32 + 1);
            lVar20 = local_408;
          }
          else {
LAB_142ab0865:
            uVar40 = (ulonglong)(-uVar18 & uVar18);
            uVar21 = uVar40 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar18 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            uVar21 = (ulonglong)uVar18;
            if ((int)uVar26 <= (int)uVar18) {
              uVar21 = (ulonglong)uVar26;
            }
          }
        } while ((int)uVar21 != (int)local_388);
      }
LAB_142ab0515:
      plVar15 = local_378 + 1;
    } while (plVar15 != local_380);
  }
  *(undefined2 *)(lVar20 + 0x1a4) = 0x100;
  *(undefined2 *)(lVar20 + 0x1dc) = 0x100;
  *(undefined2 *)(lVar20 + 0x24c) = 0x100;
  *(undefined2 *)(lVar20 + 700) = 0x100;
  *(undefined2 *)(lVar20 + 0x284) = 0x100;
  *(undefined2 *)(lVar20 + 0x214) = 0x100;
  local_1a0 = 0;
  if (local_1a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fa25f0(&local_1e8);
  local_150 = 0;
  if (local_158 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fa267e(&local_198);
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fa270c(&local_148);
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142aaedb6:
  lVar33 = lVar33 + -0x20;
  puVar13 = puVar13 + 1;
  if ((ulonglong)(uVar26 + 0x1f & 0xffffffe0) + lVar33 == 0) goto LAB_142aaedda;
  goto LAB_142aaedae;
}



// FUNCTION 142ab1055 FUN_142ab1055 body=363 status=ok
// SIG undefined FUN_142ab1055(void)

void FUN_142ab1055(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = param_2[2] - param_1[2];
  fVar3 = param_2[1] - param_1[1];
  fVar4 = *param_2 - *param_1;
  fVar7 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  if (1e-08 < fVar7) {
    fVar1 = param_3[2] - param_1[2];
    fVar5 = param_3[1] - param_1[1];
    fVar6 = *param_3 - *param_1;
    fVar8 = fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5;
    if (1e-08 < fVar8) {
      fVar9 = 1.0 / SQRT(fVar7);
      fVar7 = 1.0 / SQRT(fVar8);
      fVar3 = fVar1 * fVar7 * fVar2 * fVar9 +
              fVar5 * fVar7 * fVar3 * fVar9 + fVar6 * fVar7 * fVar4 * fVar9;
      fVar2 = fVar3;
      if (1.0 <= fVar3) {
        fVar2 = 1.0;
      }
                    /* WARNING: Could not recover jumptable at 0x000142ab119c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      acosf((float)(-(uint)(fVar3 < -1.0) & 0xbf800000 | ~-(uint)(fVar3 < -1.0) & (uint)fVar2));
      return;
    }
  }
  return;
}



// FUNCTION 142ab11c0 FUN_142ab11c0 body=2096 status=ok
// SIG undefined FUN_142ab11c0(void)

ulonglong FUN_142ab11c0(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte bVar22;
  ulonglong uVar23;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint *local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  uint *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(param_1 + 0x50);
  }
  FUN_146fa1f1e(lVar17 + 0x20,&local_78,DAT_14c99c0d0);
  puVar18 = *(uint **)(*(uint **)(param_1 + 0x50) + 0x20);
  if (puVar18 == (uint *)0x0) {
    puVar18 = *(uint **)(param_1 + 0x50);
  }
  uVar3 = puVar18[6];
  local_d0 = param_1;
  if (uVar3 == 0) {
    uVar20 = 1;
    iVar16 = 0;
    uVar21 = 0;
    uVar14 = 0;
  }
  else {
    puVar7 = *(uint **)(puVar18 + 4);
    if (*(uint **)(puVar18 + 4) == (uint *)0x0) {
      puVar7 = puVar18;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar16 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar16 = uVar3 - 1;
      }
      uVar21 = 0;
      uVar23 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar23 = uVar21;
      }
      iVar16 = 0;
      do {
        if (uVar23 == uVar21) goto LAB_142ab12c4;
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar7[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar14 == 0);
    }
    else {
      iVar16 = 0;
      uVar21 = 0;
    }
    uVar20 = (ulonglong)(-uVar14 & uVar14);
    uVar23 = uVar20 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar14 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar14) {
      uVar14 = uVar3;
    }
  }
  if (uVar14 == uVar3) {
LAB_142ab12c4:
    local_d8 = 0;
  }
  else {
    local_d8 = 0;
    uVar19 = 0xffffffff;
    uVar15 = uVar3;
    local_e0 = uVar21;
    local_c8 = puVar18;
    do {
      if ((int)uVar15 <= (int)uVar14) {
        uVar14 = 0xffffffff;
      }
      plVar9 = (longlong *)(local_78 + 0x18);
      if (*(longlong **)(local_78 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(local_78 + 0x30);
      }
      lVar17 = *plVar9;
      lVar8 = (longlong)(int)((int)plVar9[2] * uVar14);
      iVar6 = _finite((double)*(float *)(lVar17 + lVar8 * 0xc));
      if (iVar6 == 0) {
LAB_142ab14bd:
        plVar9 = (longlong *)(local_78 + 0x18);
        if (*(longlong **)(local_78 + 0x30) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_78 + 0x30);
        }
        lVar17 = *plVar9;
        lVar8 = (longlong)(int)(uVar14 * (int)plVar9[2]);
        *(undefined4 *)(lVar17 + 8 + lVar8 * 0xc) = DAT_14c846338;
        *(undefined8 *)(lVar17 + lVar8 * 0xc) = DAT_14c846330;
        local_d8 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
      }
      else {
        lVar17 = lVar17 + lVar8 * 0xc;
        iVar6 = _finite((double)*(float *)(lVar17 + 4));
        if ((iVar6 == 0) || (iVar6 = _finite((double)*(float *)(lVar17 + 8)), iVar6 == 0))
        goto LAB_142ab14bd;
      }
      uVar19 = uVar19 & ~(uint)uVar20;
      puVar18 = *(uint **)(local_c8 + 4);
      if (*(uint **)(local_c8 + 4) == (uint *)0x0) {
        puVar18 = local_c8;
      }
      uVar15 = local_c8[6];
      iVar6 = (int)local_e0;
      lVar17 = (longlong)iVar6;
      uVar14 = puVar18[lVar17] & uVar19;
      if (uVar14 == 0) {
        iVar12 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar12 = uVar15 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar11 = iVar12;
        if (iVar12 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar6 < iVar12) {
          lVar8 = 0;
          do {
            uVar14 = puVar18[lVar17 + lVar8 + 1];
            if (uVar14 != 0) {
              local_e0 = (ulonglong)(iVar6 + (int)lVar8 + 1);
              uVar19 = 0xffffffff;
              goto LAB_142ab157c;
            }
            iVar16 = iVar16 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar11 - lVar17 != lVar8);
          uVar19 = 0xffffffff;
          lVar17 = (longlong)iVar11;
        }
        local_e0 = lVar17 + 1;
        uVar14 = uVar15;
      }
      else {
LAB_142ab157c:
        uVar20 = (ulonglong)(-uVar14 & uVar14);
        uVar21 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar14 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar14) {
          uVar14 = uVar15;
        }
      }
    } while (uVar14 != uVar3);
  }
  lVar8 = local_d0;
  lVar17 = *(longlong *)(*(longlong *)(local_d0 + 0x58) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(local_d0 + 0x58);
  }
  FUN_146fa06aa(lVar17 + 0x20,&local_80,DAT_14c99c628);
  lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(lVar8 + 0x58);
  }
  FUN_146fa06aa(lVar17 + 0x20,&local_88,DAT_14c99c630);
  lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(lVar8 + 0x58);
  }
  FUN_146fa075e(lVar17 + 0x20,&local_90,DAT_14c99c638);
  lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(lVar8 + 0x58);
  }
  FUN_146fa08c6(lVar17 + 0x20,&local_98,DAT_14c99c620);
  lVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + 0x80);
  if (lVar17 == 0) {
    lVar17 = *(longlong *)(lVar8 + 0x58);
  }
  FUN_146fa0812(lVar17 + 0x20,&local_a0,DAT_14c99c640);
  uVar3 = *(uint *)(local_98 + 0x38);
  puVar18 = *(uint **)(*(uint **)(lVar8 + 0x58) + 0x20);
  if (puVar18 == (uint *)0x0) {
    puVar18 = *(uint **)(lVar8 + 0x58);
  }
  uVar14 = puVar18[6];
  if (uVar14 == 0) {
    uVar23 = 0;
    uVar21 = 1;
    iVar16 = 0;
    uVar15 = 0;
  }
  else {
    puVar7 = *(uint **)(puVar18 + 4);
    if (*(uint **)(puVar18 + 4) == (uint *)0x0) {
      puVar7 = puVar18;
    }
    uVar15 = *puVar7;
    if (uVar15 == 0) {
      iVar16 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar16 = uVar14 - 1;
      }
      uVar23 = 0;
      uVar21 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar21 = uVar23;
      }
      iVar16 = 0;
      do {
        if (uVar21 == uVar23) goto LAB_142ab15d4;
        iVar16 = iVar16 + 0x20;
        uVar15 = puVar7[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar23 = 0;
      iVar16 = 0;
    }
    uVar21 = (ulonglong)(-uVar15 & uVar15);
    uVar20 = uVar21 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar15 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar15) {
      uVar15 = uVar14;
    }
  }
  if (uVar15 == uVar14) {
LAB_142ab15d4:
    bVar22 = 1;
    bVar10 = 0;
  }
  else {
    local_e0 = 0;
    bVar10 = 0;
    local_c0 = 0;
    uVar19 = 0xffffffff;
    local_b8 = (ulonglong)uVar14;
    local_b0 = puVar18;
    local_a8 = (ulonglong)uVar3;
    do {
      local_d0 = CONCAT44(local_d0._4_4_,uVar19);
      local_c8 = (uint *)CONCAT44(local_c8._4_4_,iVar16);
      if ((int)uVar14 <= (int)uVar15) {
        uVar15 = 0xffffffff;
      }
      plVar9 = (longlong *)(local_80 + 0x18);
      if (*(longlong **)(local_80 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(local_80 + 0x30);
      }
      lVar17 = *plVar9;
      lVar8 = (longlong)(int)((int)plVar9[2] * uVar15);
      iVar16 = _finite((double)*(float *)(lVar17 + lVar8 * 0xc));
      if (iVar16 == 0) {
LAB_142ab1692:
        uVar4 = DAT_14c846330;
        plVar9 = (longlong *)(local_80 + 0x18);
        if (*(longlong **)(local_80 + 0x30) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_80 + 0x30);
        }
        lVar17 = *plVar9;
        lVar8 = (longlong)(int)((int)plVar9[2] * uVar15);
        *(undefined4 *)(lVar17 + 8 + lVar8 * 0xc) = DAT_14c846338;
        *(undefined8 *)(lVar17 + lVar8 * 0xc) = uVar4;
        local_e0 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
      }
      else {
        lVar17 = lVar17 + lVar8 * 0xc;
        iVar16 = _finite((double)*(float *)(lVar17 + 4));
        if ((iVar16 == 0) || (iVar16 = _finite((double)*(float *)(lVar17 + 8)), iVar16 == 0))
        goto LAB_142ab1692;
      }
      plVar9 = (longlong *)(local_88 + 0x18);
      if (*(longlong **)(local_88 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(local_88 + 0x30);
      }
      lVar17 = *plVar9;
      lVar8 = (longlong)(int)((int)plVar9[2] * uVar15);
      iVar16 = _finite((double)*(float *)(lVar17 + lVar8 * 0xc));
      if (iVar16 == 0) {
LAB_142ab172f:
        uVar4 = DAT_14c846330;
        plVar9 = (longlong *)(local_88 + 0x18);
        if (*(longlong **)(local_88 + 0x30) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_88 + 0x30);
        }
        lVar17 = *plVar9;
        lVar8 = (longlong)(int)((int)plVar9[2] * uVar15);
        *(undefined4 *)(lVar17 + 8 + lVar8 * 0xc) = DAT_14c846338;
        *(undefined8 *)(lVar17 + lVar8 * 0xc) = uVar4;
        local_e0 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
      }
      else {
        lVar17 = lVar17 + lVar8 * 0xc;
        iVar16 = _finite((double)*(float *)(lVar17 + 4));
        if ((iVar16 == 0) || (iVar16 = _finite((double)*(float *)(lVar17 + 8)), iVar16 == 0))
        goto LAB_142ab172f;
      }
      plVar9 = (longlong *)(local_90 + 0x18);
      if (*(longlong **)(local_90 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(local_90 + 0x30);
      }
      iVar16 = _isnan((double)*(float *)(*plVar9 + (longlong)(int)((int)plVar9[2] * uVar15) * 4));
      if (iVar16 != 0) {
        plVar9 = (longlong *)(local_90 + 0x18);
        if (*(longlong **)(local_90 + 0x30) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_90 + 0x30);
        }
        lVar17 = *plVar9;
        *(undefined4 *)(lVar17 + (longlong)(int)((int)plVar9[2] * uVar15) * 4) = 0;
        local_e0 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
      }
      if (0 < (int)local_a8) {
        lVar17 = 0;
        do {
          lVar8 = local_98 + 0x18;
          if (*(longlong *)(local_98 + 0x30) != 0) {
            lVar8 = *(longlong *)(local_98 + 0x30);
          }
          lVar13 = (longlong)(int)(*(int *)(lVar8 + 0x10 + lVar17) * uVar15);
          fVar2 = *(float *)(*(longlong *)(lVar8 + lVar17) + 4 + lVar13 * 8);
          iVar16 = _finite((double)*(float *)(*(longlong *)(lVar8 + lVar17) + lVar13 * 8));
          if ((iVar16 == 0) || (iVar16 = _finite((double)fVar2), iVar16 == 0)) {
            lVar8 = local_98 + 0x18;
            if (*(longlong *)(local_98 + 0x30) != 0) {
              lVar8 = *(longlong *)(local_98 + 0x30);
            }
            *(undefined8 *)
             (*(longlong *)(lVar8 + lVar17) +
             (longlong)(int)(*(int *)(lVar8 + 0x10 + lVar17) * uVar15) * 8) = DAT_14c84635c;
            bVar10 = 1;
          }
          lVar17 = lVar17 + 0x18;
        } while ((ulonglong)uVar3 * 0x18 != lVar17);
      }
      plVar9 = (longlong *)(local_a0 + 0x18);
      if (*(longlong **)(local_a0 + 0x30) != (longlong *)0x0) {
        plVar9 = *(longlong **)(local_a0 + 0x30);
      }
      cVar5 = FUN_1467fcbac((longlong)(int)((int)plVar9[2] * uVar15) * 0x10 + *plVar9);
      if (cVar5 != '\0') {
        plVar9 = (longlong *)(local_a0 + 0x18);
        if (*(longlong **)(local_a0 + 0x30) != (longlong *)0x0) {
          plVar9 = *(longlong **)(local_a0 + 0x30);
        }
        lVar17 = *plVar9;
        puVar1 = (undefined8 *)(lVar17 + (longlong)(int)(uVar15 * (int)plVar9[2]) * 0x10);
        *puVar1 = &DAT_3f8000003f800000;
        puVar1[1] = &DAT_3f8000003f800000;
        local_c0 = CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
      }
      uVar19 = (uint)local_d0 & ~(uint)uVar21;
      puVar18 = *(uint **)(local_b0 + 4);
      if (*(uint **)(local_b0 + 4) == (uint *)0x0) {
        puVar18 = local_b0;
      }
      uVar14 = local_b0[6];
      iVar6 = (int)uVar23;
      lVar17 = (longlong)iVar6;
      uVar15 = puVar18[lVar17] & uVar19;
      iVar16 = (int)local_c8;
      if (uVar15 == 0) {
        iVar12 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar12 = uVar14 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar16 = (int)local_c8 + 0x20;
        iVar11 = iVar12;
        if (iVar12 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar6 < iVar12) {
          lVar8 = 0;
          do {
            uVar15 = puVar18[lVar17 + lVar8 + 1];
            if (uVar15 != 0) {
              uVar23 = (ulonglong)(iVar6 + (int)lVar8 + 1);
              uVar19 = 0xffffffff;
              goto LAB_142ab1942;
            }
            iVar16 = iVar16 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar11 - lVar17 != lVar8);
          uVar19 = 0xffffffff;
          iVar6 = iVar11;
        }
        uVar23 = (ulonglong)(iVar6 + 1);
        uVar15 = uVar14;
      }
      else {
LAB_142ab1942:
        uVar21 = (ulonglong)(-uVar15 & uVar15);
        uVar20 = uVar21 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar15 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar15) {
          uVar15 = uVar14;
        }
      }
    } while (uVar15 != (uint)local_b8);
    bVar22 = (bVar10 | (byte)local_c0) ^ 1;
    bVar10 = (byte)local_e0;
  }
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)local_d8 >> 8),~((byte)local_d8 | bVar10) & bVar22) &
         0xffffffffffffff01;
}



// FUNCTION 142ab1a00 FUN_142ab1a00 body=4356 status=ok
// SIG undefined FUN_142ab1a00(void)

void FUN_142ab1a00(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_238 [44];
  undefined4 local_20c;
  undefined1 local_208 [16];
  longlong local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  longlong local_1d8;
  float local_1d0;
  float local_1cc;
  undefined1 local_1c8 [16];
  longlong local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined8 local_130;
  float local_128;
  float local_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  iVar2 = *param_2;
  lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 0x50);
  lVar10 = *(longlong *)(lVar11 + 0x80);
  if (lVar10 == 0) {
    lVar10 = lVar11;
  }
  local_1f0 = param_1;
  FUN_146fa1f1e(lVar10 + 0x20,&local_138,DAT_14c99c0d0);
  lVar11 = CONCAT44(fStack_134,local_138);
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x10) == 0)) {
    lVar11 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar11 + 0x18);
    if (*(longlong **)(lVar11 + 0x30) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar11 + 0x30);
    }
    lVar11 = *plVar5;
  }
  lVar10 = *(longlong *)(*(longlong *)(local_1f0 + 0x10) + 8);
  lVar8 = *(longlong *)(lVar10 + 0x70);
  lVar9 = *(longlong *)(lVar8 + 0x80);
  if (lVar9 == 0) {
    lVar9 = lVar8;
  }
  lVar9 = lVar9 + 0x20;
  FUN_146fa27b8(lVar9,&local_138,DAT_14c99c100);
  lVar8 = CONCAT44(fStack_134,local_138);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
    auVar35._8_8_ = 0;
    auVar35._0_8_ = local_208._8_8_;
    local_208 = auVar35 << 0x40;
  }
  else {
    puVar3 = (undefined8 *)(lVar8 + 0x18);
    if (*(undefined8 **)(lVar8 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar8 + 0x30);
    }
    local_208._0_8_ = *puVar3;
  }
  FUN_146fa2878(lVar9,&local_138,DAT_14c99c0e8);
  lVar8 = CONCAT44(fStack_134,local_138);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x10) == 0)) {
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar8 + 0x18);
    if (*(longlong **)(lVar8 + 0x30) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar8 + 0x30);
    }
    lVar8 = *plVar5;
  }
  FUN_146fa2eba(lVar9,&local_138,DAT_14c99c650);
  lVar12 = CONCAT44(fStack_134,local_138);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) == 0)) {
    lVar12 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar12 + 0x18);
    if (*(longlong **)(lVar12 + 0x30) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar12 + 0x30);
    }
    lVar12 = *plVar5;
  }
  FUN_146fa2eba(lVar9,&local_138,DAT_14c99c658);
  lVar7 = CONCAT44(fStack_134,local_138);
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) == 0)) {
    lVar7 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar7 + 0x18);
    if (*(longlong **)(lVar7 + 0x30) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar7 + 0x30);
    }
    lVar7 = *plVar5;
  }
  FUN_146fa2eba(lVar9,&local_138,DAT_14c99c660);
  lVar9 = CONCAT44(fStack_134,local_138);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) == 0)) {
    lVar9 = 0;
  }
  else {
    plVar5 = (longlong *)(lVar9 + 0x18);
    if (*(longlong **)(lVar9 + 0x30) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar9 + 0x30);
    }
    lVar9 = *plVar5;
  }
  lVar10 = *(longlong *)(lVar10 + 0x58);
  lVar4 = *(longlong *)(lVar10 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar10;
  }
  FUN_146fa08c6(lVar4 + 0x20,&local_138,DAT_14c99c620);
  if (*(int *)(CONCAT44(fStack_134,local_138) + 0x38) < 1) {
    local_1d8 = 0;
    local_20c = (undefined4)CONCAT71((int7)((ulonglong)CONCAT44(fStack_134,local_138) >> 8),1);
  }
  else {
    lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(local_1f0 + 0x10) + 8) + 0x58);
    lVar4 = *(longlong *)(lVar10 + 0x80);
    if (lVar4 == 0) {
      lVar4 = lVar10;
    }
    lVar4 = lVar4 + 0x20;
    FUN_146fa08c6(lVar4,&local_138,DAT_14c99c620);
    lVar10 = CONCAT44(fStack_134,local_138);
    local_20c = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0x10) == 0)) {
      local_1d8 = 0;
    }
    else {
      plVar5 = (longlong *)(lVar10 + 0x18);
      if (*(longlong **)(lVar10 + 0x30) != (longlong *)0x0) {
        plVar5 = *(longlong **)(lVar10 + 0x30);
      }
      local_1d8 = *plVar5;
      local_20c = 0;
    }
  }
  lVar10 = (longlong)iVar2 << 0xd;
  iVar1 = *(int *)(local_1f0 + 8);
  if ((int)lVar10 < iVar1) {
    iVar6 = (int)lVar10 + 0x2000;
    if (iVar6 < iVar1) {
      iVar1 = iVar6;
    }
    local_1b8 = lVar8 + (longlong)(iVar2 * 0x6000) * 4;
    local_1b0 = local_208._0_8_ + (longlong)(iVar2 * 0x6000) * 4;
    lVar8 = (longlong)iVar2 * 0x18000;
    lVar9 = lVar9 + lVar8;
    lVar7 = lVar7 + lVar8;
    lVar12 = lVar12 + lVar8;
    lVar8 = 8;
    do {
      if (((ABS(*(float *)(lVar12 + -8 + lVar8)) <= 0.0001) &&
          (ABS(*(float *)(lVar12 + -4 + lVar8)) <= 0.0001)) &&
         (ABS(*(float *)(lVar12 + lVar8)) <= 0.0001)) {
        lVar4 = (longlong)*(int *)(local_1b0 + -8 + lVar8);
        fVar14 = *(float *)(lVar11 + lVar4 * 0xc);
        fVar13 = *(float *)(lVar11 + 4 + lVar4 * 0xc);
        fVar16 = *(float *)(lVar11 + 8 + lVar4 * 0xc);
        lVar4 = (longlong)*(int *)(local_1b0 + -4 + lVar8);
        fVar29 = *(float *)(lVar11 + lVar4 * 0xc);
        fVar30 = *(float *)(lVar11 + 4 + lVar4 * 0xc);
        fVar17 = *(float *)(lVar11 + 8 + lVar4 * 0xc);
        lVar4 = (longlong)*(int *)(local_1b0 + lVar8);
        fVar33 = *(float *)(lVar11 + lVar4 * 0xc);
        fVar28 = *(float *)(lVar11 + 4 + lVar4 * 0xc);
        fVar15 = *(float *)(lVar11 + 8 + lVar4 * 0xc);
        iVar2 = _finite((double)fVar14);
        local_208 = ZEXT816(0);
        if ((((iVar2 == 0) || (iVar2 = _finite((double)fVar13), iVar2 == 0)) ||
            ((iVar2 = _finite((double)fVar16), iVar2 == 0 ||
             ((iVar2 = _finite((double)fVar29), iVar2 == 0 ||
              (iVar2 = _finite((double)fVar30), iVar2 == 0)))))) ||
           ((iVar2 = _finite((double)fVar17), iVar2 == 0 ||
            (((iVar2 = _finite((double)fVar33), iVar2 == 0 ||
              (iVar2 = _finite((double)fVar28), iVar2 == 0)) ||
             (iVar2 = _finite((double)fVar15), iVar2 == 0)))))) {
LAB_142ab20ff:
          fVar14 = 1.0;
          fVar23 = 0.0;
          fVar18 = 0.0;
          fVar20 = 1.0;
          fVar15 = 1.0;
          fVar27 = 0.0;
          fVar19 = 0.0;
          fVar22 = 0.0;
        }
        else if ((char)local_20c == '\0') {
          local_1a8 = ZEXT416((uint)fVar15);
          lVar4 = (longlong)*(int *)(local_1b8 + -8 + lVar8);
          local_1cc = *(float *)(local_1d8 + lVar4 * 8);
          fVar15 = *(float *)(local_1d8 + 4 + lVar4 * 8);
          lVar4 = (longlong)*(int *)(local_1b8 + -4 + lVar8);
          local_1dc = *(float *)(local_1d8 + lVar4 * 8);
          local_1e0 = *(float *)(local_1d8 + 4 + lVar4 * 8);
          local_1e4 = *(float *)(local_1d8 + (longlong)*(int *)(local_1b8 + lVar8) * 8);
          local_1e8 = *(float *)(local_1d8 + 4 + (longlong)*(int *)(local_1b8 + lVar8) * 8);
          iVar2 = _finite((double)local_1cc);
          if (((iVar2 == 0) || (local_1d0 = fVar15, iVar2 = _finite((double)fVar15), iVar2 == 0)) ||
             ((iVar2 = _finite((double)local_1dc), iVar2 == 0 ||
              ((iVar2 = _finite((double)local_1e0), iVar2 == 0 ||
               (iVar2 = _finite((double)local_1e4), iVar2 == 0)))))) goto LAB_142ab20ff;
          local_1c8 = ZEXT416((uint)fVar14);
          iVar2 = _finite((double)local_1e8);
          fVar18 = 0.0;
          fVar20 = 1.0;
          fVar15 = 1.0;
          fVar27 = 0.0;
          fVar19 = 0.0;
          fVar22 = 0.0;
          fVar14 = 1.0;
          fVar23 = 0.0;
          if (iVar2 == 0) goto LAB_142ab2117;
          fVar14 = *(float *)(local_1f0 + 4);
          fVar17 = fVar17 - fVar16;
          fVar30 = fVar30 - fVar13;
          fVar29 = fVar29 - (float)local_1c8._0_4_;
          fVar22 = (float)local_1a8._0_4_ - fVar16;
          fVar28 = fVar28 - fVar13;
          fVar33 = fVar33 - (float)local_1c8._0_4_;
          local_208 = ZEXT416((uint)fVar33);
          local_180 = fVar33 * fVar30 - fVar29 * fVar28;
          fVar15 = fVar22 * fVar29 - fVar17 * fVar33;
          fVar33 = fVar28 * fVar17 - fVar30 * fVar22;
          fVar19 = local_180 * local_180 + fVar33 * fVar33 + fVar15 * fVar15;
          if ((fVar19 != 1.0) || (NAN(fVar19))) {
            fVar27 = fVar14 * fVar14;
            if (fVar27 <= 1.1754944e-38) {
              fVar27 = 1.1754944e-38;
            }
            if (fVar27 <= fVar19) {
              fVar19 = 1.0 / SQRT(fVar19);
              local_180 = local_180 * fVar19;
              fVar33 = fVar33 * fVar19;
              local_188 = CONCAT44(fVar15 * fVar19,fVar33);
            }
            else {
              local_188 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
              local_180 = DAT_14c846338;
              fVar33 = (float)DAT_14c846330;
            }
          }
          else {
            local_188 = CONCAT44(fVar15,fVar33);
          }
          if (((ABS(fVar33) <= fVar14) && (ABS(local_188._4_4_) <= fVar14)) &&
             (ABS(local_180) <= fVar14)) goto LAB_142ab2351;
          fStack_134 = local_1e0 - local_1d0;
          local_138 = local_1dc - local_1cc;
          local_124 = local_1e8 - local_1d0;
          local_128 = local_1e4 - local_1cc;
          auVar35 = insertps(ZEXT416((uint)fVar29),ZEXT416((uint)fVar30),0x1c);
          auVar36 = insertps(auVar35,ZEXT416((uint)fVar17),0x28);
          auVar35 = insertps(local_208,ZEXT416((uint)fVar28),0x1c);
          auVar26._4_4_ = local_1a8._4_4_;
          auVar26._0_4_ = fVar22;
          auVar26._8_4_ = local_1a8._8_4_;
          auVar26._12_4_ = local_1a8._12_4_;
          auVar32 = insertps(auVar35,auVar26,0x28);
          auVar35 = insertps(local_1c8,ZEXT416((uint)fVar13),0x1c);
          auVar25._4_4_ = DAT_14c846330._4_4_;
          auVar25._0_4_ = (float)DAT_14c846330;
          auVar25._8_8_ = 0;
          auVar26 = insertps(auVar25,DAT_14c846338,0x20);
          auVar26 = insertps(auVar26,0x3f800000,0x30);
          auVar35 = insertps(auVar35,ZEXT416((uint)fVar16),0x28);
          local_130 = 0;
          local_120 = 0;
          local_118 = local_1cc;
          local_114 = local_1d0;
          local_110 = 0x3f800000;
          local_10c = 0;
          uStack_104 = 0;
          local_fc = 0x3f800000;
          FUN_144906c86(&local_178,&local_138);
          fVar34 = auVar36._0_4_;
          fVar37 = auVar36._4_4_;
          fVar38 = auVar36._8_4_;
          fVar21 = auVar32._0_4_;
          fVar24 = auVar32._4_4_;
          fVar31 = auVar32._8_4_;
          fVar13 = auVar35._0_4_;
          fVar20 = auVar35._4_4_;
          fVar23 = auVar35._8_4_;
          fVar14 = auVar26._0_4_;
          fVar16 = auVar26._4_4_;
          fVar29 = auVar26._8_4_;
          fVar28 = fStack_16c * fVar14 +
                   fStack_170 * fVar13 + local_178._4_4_ * fVar21 + (float)local_178 * fVar34;
          fVar15 = fStack_16c * fVar16 +
                   fStack_170 * fVar20 + local_178._4_4_ * fVar24 + (float)local_178 * fVar37;
          fVar19 = fStack_16c * fVar29 +
                   fStack_170 * fVar23 + local_178._4_4_ * fVar31 + (float)local_178 * fVar38;
          fVar30 = fStack_15c * fVar14 +
                   fStack_160 * fVar13 + fStack_164 * fVar21 + local_168 * fVar34;
          fVar17 = fStack_15c * fVar16 +
                   fStack_160 * fVar20 + fStack_164 * fVar24 + local_168 * fVar37;
          fVar33 = fStack_15c * fVar29 +
                   fStack_160 * fVar23 + fStack_164 * fVar31 + local_168 * fVar38;
          fVar22 = (fStack_14c * fVar14 +
                   fStack_150 * fVar13 + fStack_154 * fVar21 + local_158 * fVar34) * 0.0;
          fVar27 = (fStack_14c * fVar16 +
                   fStack_150 * fVar20 + fStack_154 * fVar24 + local_158 * fVar37) * 0.0;
          fVar18 = (fStack_14c * fVar29 +
                   fStack_150 * fVar23 + fStack_154 * fVar31 + local_158 * fVar38) * 0.0;
          fVar13 = (fStack_13c * fVar14 +
                   fStack_140 * fVar13 + fStack_144 * fVar21 + local_148 * fVar34) * 0.0;
          fVar16 = (fStack_13c * fVar16 +
                   fStack_140 * fVar20 + fStack_144 * fVar24 + local_148 * fVar37) * 0.0;
          fVar29 = (fStack_13c * fVar29 +
                   fStack_140 * fVar23 + fStack_144 * fVar31 + local_148 * fVar38) * 0.0;
          fVar20 = fVar30 * 0.0 + fVar28 + fVar22 + fVar13;
          fVar23 = fVar17 * 0.0 + fVar15 + fVar27 + fVar16;
          fVar21 = fVar33 * 0.0 + fVar19 + fVar18 + fVar29;
          fVar31 = fVar21 * fVar21 + fVar20 * fVar20 + fVar23 * fVar23;
          local_190 = 0.0;
          fVar14 = 0.0;
          fVar24 = 0.0;
          fStack_170 = 0.0;
          if (1e-08 < fVar31) {
            fVar14 = 1.0 / SQRT(fVar31);
            fStack_170 = fVar21 * fVar14;
            fVar24 = fVar23 * fVar14;
            fVar14 = fVar14 * fVar20;
          }
          local_178 = CONCAT44(fVar24,fVar14);
          fVar13 = fVar13 + fVar30 + fVar28 * 0.0 + fVar22;
          fVar16 = fVar16 + fVar17 + fVar15 * 0.0 + fVar27;
          fVar29 = fVar29 + fVar33 + fVar19 * 0.0 + fVar18;
          fVar17 = fVar29 * fVar29 + fVar13 * fVar13 + fVar16 * fVar16;
          fVar30 = 0.0;
          fVar14 = 0.0;
          if (1e-08 < fVar17) {
            fVar14 = 1.0 / SQRT(fVar17);
            local_190 = fVar29 * fVar14;
            fVar30 = fVar16 * fVar14;
            fVar14 = fVar14 * fVar13;
          }
          local_198 = CONCAT44(fVar30,fVar14);
          FUN_1467fbc34(&local_178,&local_198,&local_188);
          if ((((ABS((float)local_178) <= 0.0001) && (ABS(local_178._4_4_) <= 0.0001)) &&
              (ABS(fStack_170) <= 0.0001)) ||
             (iVar2 = _finite((double)(float)local_178), iVar2 == 0)) {
LAB_142ab2795:
            fStack_170 = DAT_14c846338;
            local_198 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
            local_190 = DAT_14c846338;
            local_178 = local_198;
          }
          else {
            iVar2 = _finite((double)local_178._4_4_);
            if (((iVar2 == 0) || (iVar2 = _finite((double)fStack_170), iVar2 == 0)) ||
               (((ABS((float)local_198) <= 0.0001 &&
                 ((ABS(local_198._4_4_) <= 0.0001 && (ABS(local_190) <= 0.0001)))) ||
                (iVar2 = _finite((double)(float)local_198), iVar2 == 0)))) goto LAB_142ab2795;
            iVar2 = _finite((double)local_198._4_4_);
            if ((iVar2 == 0) || (iVar2 = _finite((double)local_190), iVar2 == 0))
            goto LAB_142ab2795;
          }
          if ((((ABS((float)local_188) <= 0.0001) && (ABS(local_188._4_4_) <= 0.0001)) &&
              (ABS(local_180) <= 0.0001)) || (iVar2 = _finite((double)(float)local_188), iVar2 == 0)
             ) {
LAB_142ab282a:
            local_180 = DAT_14c846338;
            local_188 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
          }
          else {
            iVar2 = _finite((double)local_188._4_4_);
            if ((iVar2 == 0) || (iVar2 = _finite((double)local_180), iVar2 == 0))
            goto LAB_142ab282a;
          }
          fVar14 = local_190 * local_190 +
                   (float)local_198 * (float)local_198 + local_198._4_4_ * local_198._4_4_;
          if (((fVar14 != 1.0) ||
              (fVar15 = local_190, fVar19 = (float)local_198, fVar22 = local_198._4_4_, NAN(fVar14))
              ) && (fVar15 = DAT_14c846338, fVar19 = (float)DAT_14c846330,
                   fVar22 = DAT_14c846330._4_4_, 1e-08 <= fVar14)) {
            fVar19 = 1.0 / SQRT(fVar14);
            fVar15 = local_190 * fVar19;
            fVar22 = local_198._4_4_ * fVar19;
            fVar19 = (float)local_198 * fVar19;
          }
          fVar14 = fStack_170 * fStack_170 +
                   (float)local_178 * (float)local_178 + local_178._4_4_ * local_178._4_4_;
          if (((fVar14 != 1.0) ||
              (fVar27 = fStack_170, fVar18 = (float)local_178, fVar20 = local_178._4_4_, NAN(fVar14)
              )) && (fVar27 = DAT_14c846338, fVar18 = (float)DAT_14c846330,
                    fVar20 = DAT_14c846330._4_4_, 1e-08 <= fVar14)) {
            fVar18 = 1.0 / SQRT(fVar14);
            fVar27 = fStack_170 * fVar18;
            fVar20 = local_178._4_4_ * fVar18;
            fVar18 = (float)local_178 * fVar18;
          }
          local_208 = ZEXT416((uint)local_188._4_4_);
          fVar13 = local_180 * local_180 +
                   (float)local_188 * (float)local_188 + local_188._4_4_ * local_188._4_4_;
          if ((fVar13 != 1.0) || (fVar14 = (float)local_188, fVar23 = local_180, NAN(fVar13))) {
            if (1e-08 <= fVar13) {
              fVar14 = 1.0 / SQRT(fVar13);
              fVar23 = local_180 * fVar14;
              local_208 = ZEXT416((uint)(local_188._4_4_ * fVar14));
              fVar14 = (float)local_188 * fVar14;
            }
            else {
              local_208 = ZEXT416((uint)DAT_14c846330._4_4_);
              fVar14 = (float)DAT_14c846330;
              fVar23 = DAT_14c846338;
            }
          }
        }
        else {
          fVar19 = *(float *)(local_1f0 + 4);
          fVar22 = (fVar33 - fVar14) * (fVar30 - fVar13) - (fVar29 - fVar14) * (fVar28 - fVar13);
          fVar29 = (fVar15 - fVar16) * (fVar29 - fVar14) - (fVar17 - fVar16) * (fVar33 - fVar14);
          fVar13 = (fVar28 - fVar13) * (fVar17 - fVar16) - (fVar15 - fVar16) * (fVar30 - fVar13);
          fVar16 = fVar22 * fVar22 + fVar13 * fVar13 + fVar29 * fVar29;
          if ((fVar16 != 1.0) || (fVar14 = fVar13, fVar30 = fVar29, fVar23 = fVar22, NAN(fVar16))) {
            fVar17 = fVar19 * fVar19;
            if (fVar17 <= 1.1754944e-38) {
              fVar17 = 1.1754944e-38;
            }
            fVar14 = (float)DAT_14c846330;
            fVar30 = DAT_14c846330._4_4_;
            fVar23 = DAT_14c846338;
            if (fVar17 <= fVar16) {
              fVar16 = 1.0 / SQRT(fVar16);
              fVar14 = fVar13 * fVar16;
              fVar30 = fVar29 * fVar16;
              fVar23 = fVar22 * fVar16;
            }
          }
          fVar13 = fVar23 * fVar23 + fVar14 * fVar14 + fVar30 * fVar30;
          if (fVar13 <= fVar19) {
LAB_142ab2351:
            local_208 = ZEXT416((uint)DAT_14c846330._4_4_);
            fVar14 = (float)DAT_14c846330;
            fVar15 = DAT_14c846338;
            fVar19 = (float)DAT_14c846330;
            fVar22 = DAT_14c846330._4_4_;
            fVar27 = DAT_14c846338;
            fVar18 = (float)DAT_14c846330;
            fVar20 = DAT_14c846330._4_4_;
            fVar23 = DAT_14c846338;
          }
          else {
            fVar13 = 1.0 / SQRT(fVar13);
            fVar14 = fVar14 * fVar13;
            fVar30 = fVar30 * fVar13;
            fVar23 = fVar23 * fVar13;
            local_208 = ZEXT416((uint)fVar30);
            if (0.0 <= fVar23) {
              fVar13 = 1.0 / (fVar23 + 1.0);
              fVar19 = -fVar14 * fVar30 * fVar13;
              fVar15 = -fVar30;
              fVar22 = 1.0 - fVar30 * fVar30 * fVar13;
              fVar27 = -fVar14;
              fVar18 = 1.0 - fVar14 * fVar14 * fVar13;
              fVar20 = fVar19;
            }
            else {
              fVar13 = 1.0 / (1.0 - fVar23);
              fVar19 = fVar14 * fVar30 * fVar13;
              fVar15 = -fVar30;
              fVar22 = fVar30 * fVar30 * fVar13 + -1.0;
              fVar27 = fVar14;
              fVar18 = 1.0 - fVar14 * fVar14 * fVar13;
              fVar20 = -fVar19;
            }
          }
        }
LAB_142ab2117:
        *(float *)(lVar12 + -8 + lVar8) = fVar14;
        *(undefined4 *)(lVar12 + -4 + lVar8) = local_208._0_4_;
        *(float *)(lVar12 + lVar8) = fVar23;
        *(float *)(lVar7 + -8 + lVar8) = fVar18;
        *(float *)(lVar7 + -4 + lVar8) = fVar20;
        *(float *)(lVar7 + lVar8) = fVar27;
        *(float *)(lVar9 + -8 + lVar8) = fVar19;
        *(float *)(lVar9 + -4 + lVar8) = fVar22;
        *(float *)(lVar9 + lVar8) = fVar15;
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0xc;
    } while (lVar10 < iVar1);
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ab2b05 FUN_142ab2b05 body=26 status=ok
// SIG undefined FUN_142ab2b05(void)

void FUN_142ab2b05(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x14);
  do {
    puVar1[-4] = 0xffffffff;
    puVar1[-2] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 7;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 142ab2b20 FUN_142ab2b20 body=365 status=ok
// SIG undefined FUN_142ab2b20(void)

void FUN_142ab2b20(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0x492) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_142ab2bb3;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_142ab2bb3:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 / 0x1c)) {
    uVar6 = uVar5 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,0x1c,4);
  return;
}



// FUNCTION 142ab2c8e FUN_142ab2c8e body=335 status=ok
// SIG undefined FUN_142ab2c8e(void)

void FUN_142ab2c8e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x1c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_142ab2cff;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_142ab2cff:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x1c)) {
      uVar5 = uVar3 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x1c,4);
  }
  return;
}



// FUNCTION 142ab2dde FUN_142ab2dde body=9352 status=ok
// SIG undefined FUN_142ab2dde(void)

void FUN_142ab2dde(int *param_1,int *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  float *pfVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  int *piVar30;
  float *pfVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_3b8 [32];
  uint *local_398;
  undefined4 *local_390;
  undefined4 local_384;
  longlong local_380;
  undefined1 local_378 [16];
  longlong local_368;
  uint *local_360;
  longlong local_358;
  uint *local_350;
  longlong local_348;
  longlong local_340;
  uint *local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  int local_314;
  int *local_310;
  int local_308;
  undefined4 local_2fc;
  int *local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  uint *local_2d8;
  undefined8 uStack_2d0;
  float local_2c8;
  float fStack_2c4;
  float local_2c0 [3];
  float local_2b4;
  float local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  float fStack_2a4;
  float local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  float local_290;
  undefined4 local_28c;
  undefined4 *local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  int local_254;
  undefined1 local_250 [8];
  undefined1 *local_248;
  int local_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  int local_204;
  undefined1 local_200 [8];
  undefined1 *local_1f8;
  int local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  uint local_1d8 [4];
  uint *local_1c8;
  uint local_1c0;
  undefined8 local_1bc;
  int local_1b4;
  undefined1 local_1b0 [8];
  undefined1 *local_1a8;
  int local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  uint local_188 [4];
  uint *local_178;
  int local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  uint local_138 [4];
  uint *local_128;
  int local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  iVar20 = *param_2;
  lVar7 = *(longlong *)(param_1 + 4);
  lVar15 = *(longlong *)(*(longlong *)(lVar7 + 0x70) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(lVar7 + 0x70);
  }
  lVar15 = lVar15 + 0x20;
  FUN_146fa2eba(lVar15,&local_148,DAT_14c99c650);
  if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
    local_320 = 0;
  }
  else {
    plVar4 = (longlong *)(local_148 + 0x18);
    if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(local_148 + 0x30);
    }
    local_320 = *plVar4;
  }
  FUN_146fa2eba(lVar15,&local_148,DAT_14c99c658);
  if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
    local_328 = 0;
  }
  else {
    plVar4 = (longlong *)(local_148 + 0x18);
    if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(local_148 + 0x30);
    }
    local_328 = *plVar4;
  }
  FUN_146fa2eba(lVar15,&local_148,DAT_14c99c660);
  if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
    local_330 = 0;
  }
  else {
    plVar4 = (longlong *)(local_148 + 0x18);
    if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(local_148 + 0x30);
    }
    local_330 = *plVar4;
  }
  lVar15 = *(longlong *)(*(longlong *)(lVar7 + 0x68) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(lVar7 + 0x68);
  }
  FUN_146fa05f6(lVar15 + 0x20,&local_148,DAT_14c99c648);
  if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
    local_340 = 0;
  }
  else {
    plVar4 = (longlong *)(local_148 + 0x18);
    if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(local_148 + 0x30);
    }
    local_340 = *plVar4;
  }
  lVar15 = *(longlong *)(*(longlong *)(lVar7 + 0x58) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(lVar7 + 0x58);
  }
  FUN_146fa06aa(lVar15 + 0x20,&local_148,DAT_14c99c628);
  if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
    lVar15 = 0;
  }
  else {
    plVar4 = (longlong *)(local_148 + 0x18);
    if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(local_148 + 0x30);
    }
    lVar15 = *plVar4;
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x58) + 0x80);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar7 + 0x58);
  }
  FUN_146fa06aa(lVar11 + 0x20,&local_148,DAT_14c99c630);
  if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
    local_358 = 0;
  }
  else {
    plVar4 = (longlong *)(local_148 + 0x18);
    if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(local_148 + 0x30);
    }
    local_358 = *plVar4;
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x58) + 0x80);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar7 + 0x58);
  }
  FUN_146fa075e(lVar11 + 0x20,&local_148,DAT_14c99c638);
  if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
    local_368 = 0;
  }
  else {
    plVar4 = (longlong *)(local_148 + 0x18);
    if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(local_148 + 0x30);
    }
    local_368 = *plVar4;
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x58) + 0x80);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar7 + 0x58);
  }
  FUN_146fa08c6(lVar11 + 0x20,&local_148,DAT_14c99c620);
  if (*(int *)(local_148 + 0x38) < 1) {
    local_384 = (undefined4)CONCAT71((int7)((ulonglong)local_148 >> 8),1);
    local_348 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x58) + 0x80);
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(lVar7 + 0x58);
    }
    lVar11 = lVar11 + 0x20;
    FUN_146fa08c6(lVar11,&local_148,DAT_14c99c620);
    local_384 = (undefined4)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    if ((local_148 == 0) || (*(int *)(local_148 + 0x10) == 0)) {
      local_348 = 0;
    }
    else {
      plVar4 = (longlong *)(local_148 + 0x18);
      if (*(longlong **)(local_148 + 0x30) != (longlong *)0x0) {
        plVar4 = *(longlong **)(local_148 + 0x30);
      }
      local_348 = *plVar4;
      local_384 = 0;
    }
  }
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  local_1c8 = (uint *)0x0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_2d8 = (uint *)0x0;
  uStack_2d0 = 0;
  local_218 = 0;
  local_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_20c = 0xffffffff00000080;
  local_204 = 0;
  local_1f8 = (undefined1 *)0x0;
  local_1f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = (int *)0x0;
  uStack_2f0 = 0;
  FUN_146fa4bb6(&local_1e8);
  if (local_1a0 < 0x20) {
    local_1a0 = 0x20;
    FUN_146fa4d2a();
  }
  iVar20 = iVar20 * 0x20000;
  iVar19 = *param_1;
  local_314 = iVar20 + 0x20000;
  if (iVar19 <= iVar20 + 0x20000) {
    local_314 = iVar19;
  }
  lVar7 = local_358;
  if (iVar20 < iVar19) {
    do {
      local_380 = lVar15;
      if ((int)uStack_1e0 != local_1b4) {
        FUN_146fa4ece(&local_1e8);
        FUN_146fa5012(&local_1e8);
      }
      FUN_146f7176e(*(longlong *)(param_1 + 4) + 0x138,&local_288,iVar20,0);
      if ((longlong)(int)uStack_280 != 0) {
        local_390 = local_288 + (int)uStack_280;
        local_398 = (uint *)CONCAT44(local_398._4_4_,
                                     (int)CONCAT71((int7)((ulonglong)local_390 >> 8),1));
        puVar16 = local_288;
        do {
          FUN_146f716d6(*(longlong *)(param_1 + 4) + 0x1a8,&local_2c8,*puVar16);
          if ((longlong)(int)local_2c0[0] != 0) {
            puVar24 = (uint *)CONCAT44(fStack_2c4,local_2c8);
            puVar17 = puVar24 + (int)local_2c0[0];
            do {
              puVar5 = (uint *)FUN_146fa5130(&local_1e8,*puVar24,puVar24);
              FUN_146fa5514(puVar5 + 4,puVar16);
              if (*puVar5 == 0xffffffff) {
                uVar2 = *puVar24;
                *puVar5 = uVar2;
                lVar15 = *(longlong *)(param_1 + 4);
                plVar4 = *(longlong **)(*(longlong *)(lVar15 + 0xa0) + 0x30);
                plVar13 = (longlong *)(*(longlong *)(lVar15 + 0xa0) + 0x18);
                if (plVar4 != (longlong *)0x0) {
                  plVar13 = plVar4;
                }
                if ((longlong)*(int *)(lVar15 + 0xa8) == 0) {
                  lVar21 = (longlong)((int)uVar2 >> 8) * 0xc18;
                  lVar11 = *plVar13 + lVar21;
                  lVar23 = (longlong)*(int *)(lVar11 + 0x410 + (ulonglong)(uVar2 & 0xff) * 4);
                  if (lVar23 == 0) goto LAB_142ab3831;
                  puVar6 = (uint *)((longlong)
                                    *(int *)(lVar11 + 0x10 + (ulonglong)(uVar2 & 0xff) * 4) * 4 +
                                   *(longlong *)(*plVar13 + lVar21));
                  puVar14 = puVar6 + lVar23;
                }
                else {
                  puVar6 = (uint *)((longlong)(int)(uVar2 * (int)plVar13[2]) * 4 + *plVar13);
                  puVar14 = puVar6 + *(int *)(lVar15 + 0xa8);
                }
                plVar4 = *(longlong **)(*(longlong *)(lVar15 + 0x88) + 0x30);
                plVar13 = (longlong *)(*(longlong *)(lVar15 + 0x88) + 0x18);
                if (plVar4 != (longlong *)0x0) {
                  plVar13 = plVar4;
                }
                do {
                  if (*(int *)(*plVar13 + (longlong)(int)(*puVar6 * (int)plVar13[2]) * 4) == iVar20)
                  {
                    puVar5[1] = *puVar6;
                    if ((char)local_384 == '\0') {
                      *(undefined8 *)(puVar5 + 2) =
                           *(undefined8 *)(local_348 + (longlong)(int)*puVar6 * 8);
                    }
                    lVar15 = (longlong)(int)*puVar6;
                    pfVar9 = (float *)(local_380 + lVar15 * 0xc);
                    fVar35 = *pfVar9;
                    if (((0.0001 < ABS(fVar35)) || (0.0001 < ABS(pfVar9[1]))) ||
                       (0.0001 < ABS(pfVar9[2]))) {
                      pfVar31 = (float *)(lVar7 + lVar15 * 0xc);
                      fVar33 = *pfVar31;
                      if ((0.0001 < ABS(fVar33)) || (0.0001 < ABS(pfVar31[1]))) {
                        bVar32 = false;
                      }
                      else {
                        bVar32 = ABS(pfVar31[2]) <= 0.0001;
                      }
                      if (((ulonglong)local_398 & 1) != 0 && !bVar32) {
                        fVar36 = pfVar31[1];
                        fVar38 = pfVar31[2];
                        fVar40 = fVar38 * fVar38 + fVar33 * fVar33 + fVar36 * fVar36;
                        if (((fVar40 != 1.0) ||
                            (fVar41 = fVar33, fVar42 = fVar38, fVar43 = fVar36, NAN(fVar40))) &&
                           (fVar41 = (float)DAT_14c846330, fVar42 = DAT_14c846338,
                           fVar43 = DAT_14c846330._4_4_, 1e-08 <= fVar40)) {
                          fVar40 = 1.0 / SQRT(fVar40);
                          fVar41 = fVar33 * fVar40;
                          fVar42 = fVar38 * fVar40;
                          fVar43 = fVar36 * fVar40;
                        }
                        fVar33 = pfVar9[1];
                        fVar36 = pfVar9[2];
                        fVar38 = fVar36 * fVar36 + fVar35 * fVar35 + fVar33 * fVar33;
                        if (((fVar38 != 1.0) ||
                            (fVar40 = fVar36, fVar45 = fVar33, fVar34 = fVar35, NAN(fVar38))) &&
                           (fVar40 = DAT_14c846338, fVar45 = DAT_14c846330._4_4_,
                           fVar34 = (float)DAT_14c846330, 1e-08 <= fVar38)) {
                          fVar38 = 1.0 / SQRT(fVar38);
                          fVar40 = fVar36 * fVar38;
                          fVar45 = fVar33 * fVar38;
                          fVar34 = fVar35 * fVar38;
                        }
                        fVar38 = fVar34 * fVar43 - fVar41 * fVar45;
                        fVar33 = fVar40 * fVar41 - fVar42 * fVar34;
                        fVar36 = fVar45 * fVar42 - fVar43 * fVar40;
                        fVar35 = fVar38 * fVar38 + fVar36 * fVar36 + fVar33 * fVar33;
                        if (((fVar35 != 1.0) ||
                            (fVar37 = fVar33, fVar39 = fVar36, fVar44 = fVar38, NAN(fVar35))) &&
                           (fVar37 = DAT_14c846330._4_4_, fVar39 = (float)DAT_14c846330,
                           fVar44 = DAT_14c846338, 1e-08 <= fVar35)) {
                          fVar35 = 1.0 / SQRT(fVar35);
                          fVar37 = fVar33 * fVar35;
                          fVar39 = fVar36 * fVar35;
                          fVar44 = fVar38 * fVar35;
                        }
                        fVar35 = *(float *)(local_368 + lVar15 * 4);
                        fVar44 = fVar44 * fVar35;
                        fVar37 = fVar37 * fVar35;
                        fVar39 = fVar39 * fVar35;
                        fVar35 = fVar44 * fVar44 + fVar39 * fVar39 + fVar37 * fVar37;
                        local_378 = ZEXT416((uint)fVar40);
                        if (((fVar35 != 1.0) ||
                            (fVar33 = fVar37, fVar36 = fVar39, fVar38 = fVar44, NAN(fVar35))) &&
                           (fVar33 = DAT_14c846330._4_4_, fVar36 = (float)DAT_14c846330,
                           fVar38 = DAT_14c846338, 1e-08 <= fVar35)) {
                          fVar35 = 1.0 / SQRT(fVar35);
                          fVar33 = fVar37 * fVar35;
                          fVar36 = fVar39 * fVar35;
                          fVar38 = fVar44 * fVar35;
                        }
                        iVar19 = _finite((double)fVar41);
                        if ((((((iVar19 != 0) && (iVar19 = _finite((double)fVar43), iVar19 != 0)) &&
                              (iVar19 = _finite((double)fVar42), iVar19 != 0)) &&
                             (((1e-08 < ABS(fVar41) || (1e-08 < ABS(fVar43))) ||
                              (1e-08 < ABS(fVar42))))) &&
                            ((iVar19 = _finite((double)fVar36), iVar19 != 0 &&
                             (iVar19 = _finite((double)fVar33), iVar19 != 0)))) &&
                           ((iVar19 = _finite((double)fVar38), iVar19 != 0 &&
                            ((((1e-08 < ABS(fVar36) || (1e-08 < ABS(fVar33))) ||
                              (1e-08 < ABS(fVar38))) &&
                             ((iVar19 = _finite((double)fVar34), iVar19 != 0 &&
                              (iVar19 = _finite((double)fVar45), iVar19 != 0)))))))) {
                          iVar19 = _finite((double)(float)local_378._0_4_);
                          if (iVar19 != 0) {
                            local_398 = (uint *)CONCAT44(local_398._4_4_,
                                                         (int)CONCAT71((uint7)(uint3)((uint)iVar19
                                                                                     >> 8),1));
                            if (((1e-08 < ABS(fVar34)) || (1e-08 < ABS(fVar45))) ||
                               (1e-08 < ABS((float)local_378._0_4_))) break;
                          }
                        }
                      }
                    }
                    local_398 = (uint *)((ulonglong)local_398 & 0xffffffff00000000);
                    break;
                  }
                  puVar6 = puVar6 + 1;
                } while (puVar6 != puVar14);
              }
LAB_142ab3831:
              puVar24 = puVar24 + 1;
            } while (puVar24 != puVar17);
          }
          uVar29 = uStack_2d0;
          lVar15 = local_380;
          puVar16 = puVar16 + 1;
        } while (puVar16 != local_390);
        if (((ulonglong)local_398 & 1) == 0) {
          FUN_146fa5692(local_2d8);
          uVar12 = uStack_2d0 >> 0x20;
          uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
          if (((longlong)uVar29 < 0) && ((int)uVar12 != 0)) {
            FUN_146fa56c2(&local_2d8);
          }
          FUN_146fa4b72(&local_238);
          uVar29 = 0;
          local_268 = 0;
          local_260 = 0;
          local_288 = (undefined4 *)0x0;
          uStack_280 = 0;
          local_25c = 0xffffffff00000080;
          local_254 = 0;
          local_248 = (undefined1 *)0x0;
          local_240 = 0;
          puVar24 = (uint *)&DAT_00000001;
          iVar19 = 0;
          uVar2 = 0;
          if (local_1c0 != 0) {
            puVar24 = local_1c8;
            if (local_1c8 == (uint *)0x0) {
              puVar24 = local_1d8;
            }
            uVar2 = *puVar24;
            if (uVar2 == 0) {
              iVar19 = local_1c0 + 0x1e;
              if (-1 < (int)(local_1c0 - 1)) {
                iVar19 = local_1c0 - 1;
              }
              uVar29 = 0;
              uVar12 = (ulonglong)(uint)(iVar19 >> 5);
              if (iVar19 >> 5 < 1) {
                uVar12 = uVar29;
              }
              iVar19 = 0;
              do {
                if (uVar12 == uVar29) goto LAB_142ab39a0;
                iVar19 = iVar19 + 0x20;
                uVar2 = puVar24[uVar29 + 1];
                uVar29 = uVar29 + 1;
              } while (uVar2 == 0);
            }
            else {
              uVar29 = 0;
            }
            puVar24 = (uint *)(ulonglong)(-uVar2 & uVar2);
            uVar12 = (longlong)puVar24 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar2 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)local_1c0 <= (int)uVar2) {
              uVar2 = local_1c0;
            }
          }
          if (uVar2 != local_1c0) {
            uVar26 = 0xffffffff;
            local_360 = (uint *)(ulonglong)local_1c0;
            do {
              local_338 = (uint *)CONCAT44(local_338._4_4_,uVar26);
              local_390 = (undefined4 *)CONCAT44(local_390._4_4_,iVar19);
              local_378._0_8_ = uVar29;
              local_2c8 = *(float *)(local_1e8 + (longlong)(int)uVar2 * 0x38);
              local_350 = puVar24;
              FUN_146fa5836(local_2c0);
              uVar29 = uStack_2d0;
              if ((int)uStack_230 != local_204) {
                puVar8 = local_1f8;
                if (local_1f8 == (undefined1 *)0x0) {
                  puVar8 = local_200;
                }
                for (iVar19 = *(int *)(puVar8 + (ulonglong)(local_1f0 - 1U & (uint)local_2c8) * 4);
                    iVar19 != -1; iVar19 = *(int *)(local_238 + (longlong)iVar19 * 0xc + 4)) {
                  if (*(float *)(local_238 + (longlong)iVar19 * 0xc) == local_2c8)
                  goto LAB_142ab4fcc;
                }
              }
              lVar7 = (longlong)(int)uStack_2d0;
              uVar2 = (int)uStack_2d0 + 1;
              uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar2);
              if (uStack_2d0._4_4_ < uVar2) {
                FUN_146fa5906(&local_2d8,uVar29 & 0xffffffff);
              }
              puVar24 = local_2d8 + lVar7 * 0xc + 8;
              puVar24[0] = 0;
              puVar24[1] = 0;
              puVar24[2] = 0;
              puVar24[3] = 0;
              puVar24 = local_2d8 + lVar7 * 0xc + 4;
              puVar24[0] = 0;
              puVar24[1] = 0;
              puVar24[2] = 0;
              puVar24[3] = 0;
              local_398 = local_2d8;
              puVar24 = local_2d8 + lVar7 * 0xc;
              puVar24[0] = 0;
              puVar24[1] = 0;
              puVar24[2] = 0;
              puVar24[3] = 0;
              uVar29 = 0;
              uVar2 = uStack_2e0._4_4_;
              if ((longlong)uStack_2e0 < 0) {
                uStack_2e0 = (ulonglong)uStack_2e0._4_4_ << 0x20;
                FUN_146f98482(&local_2e8,0);
                uVar29 = uStack_2e0 & 0xffffffff;
                uVar2 = uStack_2e0._4_4_;
              }
              lVar11 = local_340;
              uVar26 = (int)uVar29 + 1;
              uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar26);
              if (uVar2 < uVar26) {
                FUN_146f984e2(&local_2e8,uVar29);
              }
              *(float *)(local_2e8 + (longlong)(int)uVar29 * 4) = local_2c8;
              if (0 < (int)(uint)uStack_2e0) {
                local_398 = local_398 + lVar7 * 0xc;
                do {
                  local_2fc = *(undefined4 *)(local_2e8 + -4 + (ulonglong)(uint)uStack_2e0 * 4);
                  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(uint)uStack_2e0 - 1);
                  piVar10 = (int *)FUN_146fa5130(&local_1e8,local_2fc,&local_2fc);
                  FUN_146fa599a(local_398,piVar10);
                  FUN_146fa5b0a(&local_238,&local_310,piVar10);
                  puVar24 = (uint *)(piVar10 + 4);
                  if (*(uint **)(piVar10 + 6) != (uint *)0x0) {
                    puVar24 = *(uint **)(piVar10 + 6);
                  }
                  if ((longlong)piVar10[8] != 0) {
                    puVar17 = puVar24 + piVar10[8];
                    do {
                      uVar2 = *puVar24;
                      if (*(char *)(lVar11 + (int)uVar2) == '\0') {
                        if ((int)uStack_280 != local_254) {
                          puVar8 = local_248;
                          if (local_248 == (undefined1 *)0x0) {
                            puVar8 = local_250;
                          }
                          for (iVar19 = *(int *)(puVar8 + (ulonglong)(local_240 - 1U & uVar2) * 4);
                              iVar19 != -1; iVar19 = local_288[(longlong)iVar19 * 3 + 1]) {
                            if (local_288[(longlong)iVar19 * 3] == uVar2) goto LAB_142ab4e40;
                          }
                        }
                        FUN_146f9da66(&local_288,&local_310,puVar24,0);
                        FUN_146f716d6(*(longlong *)(param_1 + 4) + 0x1a8,&local_310,*puVar24);
                        if ((longlong)local_308 != 0) {
                          piVar18 = local_310 + local_308;
                          piVar30 = local_310;
                          do {
                            if (*piVar30 != *piVar10) {
                              puVar5 = (uint *)FUN_146fa5130(&local_1e8,*piVar30,piVar30);
                              uVar29 = uStack_2e0;
                              if ((int)uStack_230 != local_204) {
                                puVar8 = local_1f8;
                                if (local_1f8 == (undefined1 *)0x0) {
                                  puVar8 = local_200;
                                }
                                for (iVar19 = *(int *)(puVar8 + (ulonglong)
                                                                (local_1f0 - 1U & *puVar5) * 4);
                                    iVar19 != -1;
                                    iVar19 = *(int *)(local_238 + (longlong)iVar19 * 0xc + 4)) {
                                  if (*(uint *)(local_238 + (longlong)iVar19 * 0xc) == *puVar5)
                                  goto LAB_142ab4efe;
                                }
                              }
                              lVar7 = (longlong)(int)(uint)uStack_2e0;
                              uVar2 = (uint)uStack_2e0 + 1;
                              uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar2);
                              if (uStack_2e0._4_4_ < uVar2) {
                                FUN_146f984e2(&local_2e8,uVar29 & 0xffffffff);
                              }
                              *(int *)(local_2e8 + lVar7 * 4) = *piVar30;
                              lVar11 = local_340;
                            }
LAB_142ab4efe:
                            piVar30 = piVar30 + 1;
                          } while (piVar30 != piVar18);
                        }
                      }
LAB_142ab4e40:
                      puVar24 = puVar24 + 1;
                    } while (puVar24 != puVar17);
                  }
                  lVar15 = local_380;
                } while (0 < (int)(uint)uStack_2e0);
              }
LAB_142ab4fcc:
              if (CONCAT44(fStack_2a4,local_2a8) != 0) {
                FUN_1400020a8();
              }
              uVar26 = (uint)local_338 & ~(uint)local_350;
              puVar24 = local_1c8;
              if (local_1c8 == (uint *)0x0) {
                puVar24 = local_1d8;
              }
              iVar28 = local_378._0_4_;
              lVar7 = (longlong)iVar28;
              uVar2 = puVar24[lVar7] & uVar26;
              uVar29 = local_378._0_8_;
              iVar19 = (int)local_390._0_4_;
              if (uVar2 == 0) {
                iVar27 = local_1c0 + 0x1e;
                if (-1 < (int)(local_1c0 - 1)) {
                  iVar27 = local_1c0 - 1;
                }
                iVar27 = iVar27 >> 5;
                iVar19 = (int)local_390._0_4_ + 0x20;
                iVar25 = iVar27;
                if (iVar27 < iVar28) {
                  iVar25 = iVar28;
                }
                if (iVar28 < iVar27) {
                  lVar11 = 0;
                  do {
                    uVar2 = puVar24[lVar7 + lVar11 + 1];
                    if (uVar2 != 0) {
                      uVar29 = (ulonglong)(iVar28 + (int)lVar11 + 1);
                      uVar26 = 0xffffffff;
                      goto LAB_142ab5079;
                    }
                    iVar19 = iVar19 + 0x20;
                    lVar11 = lVar11 + 1;
                  } while (iVar25 - lVar7 != lVar11);
                  uVar26 = 0xffffffff;
                  iVar28 = iVar25;
                }
                uVar29 = (ulonglong)(iVar28 + 1);
                puVar24 = local_350;
                lVar15 = local_380;
                uVar2 = local_1c0;
              }
              else {
LAB_142ab5079:
                puVar24 = (uint *)(ulonglong)(-uVar2 & uVar2);
                uVar12 = (longlong)puVar24 * 2 + 1;
                lVar7 = 0x3f;
                if (uVar12 != 0) {
                  for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                uVar2 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                if ((int)local_1c0 <= (int)uVar2) {
                  uVar2 = local_1c0;
                }
              }
            } while (uVar2 != (uint)local_360);
          }
LAB_142ab39a0:
          if ((longlong)(int)uStack_2d0 != 0) {
            local_360 = local_2d8 + (longlong)(int)uStack_2d0 * 0xc;
            puVar24 = local_2d8;
            do {
              FUN_146fa5f90(&local_148);
              FUN_146fa5f90();
              bVar32 = (longlong)uStack_2f0 < 0;
              uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
              if (bVar32) {
                FUN_146f99ade();
              }
              local_378._0_4_ = (float)DAT_14c846330;
              local_390 = (undefined4 *)CONCAT44(local_390._4_4_,DAT_14c846330._4_4_);
              puVar17 = *(uint **)(puVar24 + 8);
              if (*(uint **)(puVar24 + 8) == (uint *)0x0) {
                puVar17 = puVar24;
              }
              fVar35 = DAT_14c846338;
              local_338 = puVar24;
              if ((longlong)(int)puVar24[10] != 0) {
                local_350 = puVar17 + (int)puVar24[10];
                do {
                  lVar7 = FUN_146fa5130(&local_1e8,*puVar17,puVar17);
                  uVar2 = *puVar17;
                  local_398 = (uint *)CONCAT44(local_398._4_4_,fVar35);
                  if (*(char *)((longlong)param_1 + 9) == '\0') {
                    fVar35 = 1.0;
                  }
                  else {
                    lVar21 = (longlong)(int)uVar2 * 0x1c;
                    lVar11 = **(longlong **)(param_1 + 6) + lVar21;
                    lVar23 = 1;
                    do {
                      if (*(int *)(lVar11 + -4 + lVar23 * 8) == *(int *)(lVar7 + 4)) {
                        fVar35 = *(float *)(lVar11 + lVar23 * 8);
                        goto LAB_142ab3afe;
                      }
                      lVar23 = lVar23 + 1;
                    } while (lVar23 != 4);
                    fVar35 = 0.0;
LAB_142ab3afe:
                    fVar35 = *(float *)(**(longlong **)(param_1 + 6) + lVar21) * fVar35;
                  }
                  lVar7 = (longlong)(int)uVar2 * 0xc;
                  fVar33 = *(float *)(local_320 + 8 + lVar7) * fVar35;
                  fVar45 = *(float *)(local_320 + 4 + lVar7) * fVar35;
                  fVar36 = *(float *)(local_320 + lVar7) * fVar35;
                  fVar41 = *(float *)(local_328 + 8 + lVar7) * fVar35;
                  fVar42 = *(float *)(local_328 + 4 + lVar7) * fVar35;
                  fVar43 = *(float *)(local_328 + lVar7) * fVar35;
                  fVar40 = *(float *)(local_330 + 8 + lVar7) * fVar35;
                  fVar38 = *(float *)(local_330 + 4 + lVar7) * fVar35;
                  fVar35 = fVar35 * *(float *)(local_330 + lVar7);
                  if ((int)uStack_1e0 != local_1b4) {
                    puVar8 = local_1a8;
                    if (local_1a8 == (undefined1 *)0x0) {
                      puVar8 = local_1b0;
                    }
                    iVar19 = *(int *)(puVar8 + (ulonglong)(local_1a0 - 1U & uVar2) * 4);
                    while (iVar19 != -1) {
                      lVar7 = local_1e8 + (longlong)iVar19 * 0x38;
                      if (*(uint *)(local_1e8 + (longlong)iVar19 * 0x38) == uVar2)
                      goto LAB_142ab3be6;
                      iVar19 = *(int *)(lVar7 + 0x30);
                    }
                  }
                  lVar7 = 0;
LAB_142ab3be6:
                  lVar11 = (longlong)(int)uStack_2f0;
                  uVar2 = (int)uStack_2f0 + 1;
                  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar2);
                  if (uStack_2f0._4_4_ < uVar2) {
                    FUN_146f924ea(&local_2f8);
                  }
                  local_2f8[lVar11] = *(int *)(lVar7 + 0xc);
                  if ((((1e-08 < ABS(fVar36)) || (1e-08 < ABS(fVar45))) || (1e-08 < ABS(fVar33))) &&
                     (((iVar19 = _finite((double)fVar36), iVar19 != 0 &&
                       (iVar19 = _finite((double)fVar45), iVar19 != 0)) &&
                      (iVar19 = _finite((double)fVar33), iVar19 != 0)))) {
                    local_378._0_4_ = (float)local_378._0_4_ + fVar36;
                    local_390 = (undefined4 *)CONCAT44(local_390._4_4_,local_390._0_4_ + fVar45);
                    local_398 = (uint *)CONCAT44(local_398._4_4_,local_398._0_4_ + fVar33);
                  }
                  if ((char)param_1[2] == '\0') {
                    if ((int)uStack_1e0 == local_1b4) {
                      lVar7 = 0;
                    }
                    else {
                      puVar8 = local_1a8;
                      if (local_1a8 == (undefined1 *)0x0) {
                        puVar8 = local_1b0;
                      }
                      iVar19 = *(int *)(puVar8 + (ulonglong)(local_1a0 - 1U & *puVar17) * 4);
                      while (iVar19 != -1) {
                        lVar7 = local_1e8 + (longlong)iVar19 * 0x38;
                        if (*(uint *)(local_1e8 + (longlong)iVar19 * 0x38) == *puVar17)
                        goto LAB_142ab3d3d;
                        iVar19 = *(int *)(lVar7 + 0x30);
                      }
                      lVar7 = 0;
                    }
LAB_142ab3d3d:
                    fVar33 = *(float *)(lVar7 + 0x10);
                    fVar36 = *(float *)(lVar7 + 0x14);
                    local_2c8 = (float)(~-(uint)(ABS(fVar33) <= 1e-08) & (uint)fVar33);
                    fStack_2c4 = (float)(~-(uint)(ABS(fVar36) <= 1e-08) & (uint)fVar36);
                    bVar32 = false;
                    uVar2 = (*(code *)PTR_FUN_14c75b148)(&local_2c8,8,0);
                    if ((int)uStack_140 != local_114) {
                      puVar8 = local_108;
                      if (local_108 == (undefined1 *)0x0) {
                        puVar8 = local_110;
                      }
                      iVar19 = *(int *)(puVar8 + (ulonglong)(local_100 - 1U & uVar2) * 4);
                      if (iVar19 == -1) {
                        bVar32 = false;
                      }
                      else {
                        do {
                          uVar1 = *(undefined8 *)(local_148 + (longlong)iVar19 * 0x1c);
                          bVar32 = (float)((ulonglong)uVar1 >> 0x20) == fVar36 &&
                                   (float)uVar1 == fVar33;
                          if (bVar32) break;
                          iVar19 = *(int *)((longlong)iVar19 * 0x1c + local_148 + 0x14);
                        } while (iVar19 != -1);
                      }
                    }
                    pfVar31 = (float *)(lVar7 + 0x10);
                    local_2c8 = (float)(~-(uint)(ABS(*pfVar31) <= 1e-08) & (uint)*pfVar31);
                    fStack_2c4 = (float)(~-(uint)(ABS(*(float *)(lVar7 + 0x14)) <= 1e-08) &
                                        (uint)*(float *)(lVar7 + 0x14));
                    uVar3 = (*(code *)PTR_FUN_14c75b148)(&local_2c8,8,0);
                    pfVar9 = (float *)FUN_146fa611e(&local_148,uVar3,pfVar31);
                    local_2c8 = (float)(~-(uint)(ABS(*pfVar31) <= 1e-08) & (uint)*pfVar31);
                    fStack_2c4 = (float)(~-(uint)(ABS(*(float *)(lVar7 + 0x14)) <= 1e-08) &
                                        (uint)*(float *)(lVar7 + 0x14));
                    uVar3 = (*(code *)PTR_FUN_14c75b148)(&local_2c8,8,0);
                    pfVar31 = (float *)FUN_146fa611e(&local_198,uVar3,pfVar31);
                    if (!bVar32) {
                      pfVar9[0] = 0.0;
                      pfVar9[1] = 0.0;
                      pfVar9[2] = 0.0;
                      pfVar31[0] = 0.0;
                      pfVar31[1] = 0.0;
                      pfVar31[2] = 0.0;
                    }
                    if ((((1e-08 < ABS(fVar43)) || (1e-08 < ABS(fVar42))) || (1e-08 < ABS(fVar41)))
                       && (((iVar19 = _finite((double)fVar43), iVar19 != 0 &&
                            (iVar19 = _finite((double)fVar42), iVar19 != 0)) &&
                           (iVar19 = _finite((double)fVar41), iVar19 != 0)))) {
                      *pfVar9 = fVar43 + *pfVar9;
                      pfVar9[1] = fVar42 + pfVar9[1];
                      pfVar9[2] = fVar41 + pfVar9[2];
                    }
                    lVar15 = local_380;
                    if ((((1e-08 < ABS(fVar35)) || (1e-08 < ABS(fVar38))) || (1e-08 < ABS(fVar40)))
                       && (((iVar19 = _finite((double)fVar35), iVar19 != 0 &&
                            (iVar19 = _finite((double)fVar38), iVar19 != 0)) &&
                           (iVar19 = _finite((double)fVar40), iVar19 != 0)))) {
                      *pfVar31 = fVar35 + *pfVar31;
                      pfVar31[1] = fVar38 + pfVar31[1];
                      pfVar31[2] = fVar40 + pfVar31[2];
                    }
                  }
                  puVar17 = puVar17 + 1;
                  fVar35 = local_398._0_4_;
                } while (puVar17 != local_350);
              }
              fVar38 = fVar35 * fVar35 +
                       (float)local_378._0_4_ * (float)local_378._0_4_ +
                       local_390._0_4_ * local_390._0_4_;
              fVar36 = (float)local_378._0_4_;
              fVar33 = local_390._0_4_;
              if (1e-08 < fVar38) {
                fVar38 = 1.0 / SQRT(fVar38);
                fVar36 = (float)local_378._0_4_ * fVar38;
                fVar33 = local_390._0_4_ * fVar38;
                fVar35 = fVar35 * fVar38;
              }
              local_398 = (uint *)CONCAT44(local_398._4_4_,fVar35);
              if ((char)param_1[2] == '\0') {
                if (local_120 == 0) {
                  uVar22 = 1;
                  uVar29 = 0;
                  iVar19 = 0;
                  iVar28 = 0;
                }
                else {
                  puVar24 = local_128;
                  if (local_128 == (uint *)0x0) {
                    puVar24 = local_138;
                  }
                  uVar2 = *puVar24;
                  if (uVar2 == 0) {
                    iVar19 = local_120 + 0x1e;
                    if (-1 < local_120 + -1) {
                      iVar19 = local_120 + -1;
                    }
                    uVar29 = 0;
                    uVar12 = (ulonglong)(uint)(iVar19 >> 5);
                    if (iVar19 >> 5 < 1) {
                      uVar12 = uVar29;
                    }
                    iVar19 = 0;
                    do {
                      if (uVar12 == uVar29) goto LAB_142ab411c;
                      iVar19 = iVar19 + 0x20;
                      uVar2 = puVar24[uVar29 + 1];
                      uVar29 = uVar29 + 1;
                    } while (uVar2 == 0);
                  }
                  else {
                    uVar29 = 0;
                    iVar19 = 0;
                  }
                  uVar22 = (ulonglong)(-uVar2 & uVar2);
                  uVar12 = uVar22 * 2 + 1;
                  lVar7 = 0x3f;
                  if (uVar12 != 0) {
                    for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  iVar28 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                  if (local_120 <= iVar28) {
                    iVar28 = local_120;
                  }
                }
                if (iVar28 != local_120) {
                  uVar2 = 0xffffffff;
                  do {
                    lVar7 = (longlong)iVar28 * 0x1c;
                    fVar38 = *(float *)(local_148 + 8 + lVar7);
                    fVar40 = *(float *)(local_148 + 0xc + lVar7);
                    fVar41 = *(float *)(local_148 + 0x10 + lVar7);
                    fVar42 = fVar41 * fVar41 + fVar38 * fVar38 + fVar40 * fVar40;
                    if (1e-08 < fVar42) {
                      lVar7 = local_148 + lVar7;
                      fVar42 = 1.0 / SQRT(fVar42);
                      *(float *)(lVar7 + 8) = fVar38 * fVar42;
                      *(float *)(lVar7 + 0xc) = fVar40 * fVar42;
                      *(float *)(lVar7 + 0x10) = fVar41 * fVar42;
                    }
                    uVar2 = uVar2 & ~(uint)uVar22;
                    puVar24 = local_128;
                    if (local_128 == (uint *)0x0) {
                      puVar24 = local_138;
                    }
                    iVar28 = (int)uVar29;
                    lVar7 = (longlong)iVar28;
                    uVar26 = puVar24[lVar7] & uVar2;
                    if (uVar26 == 0) {
                      iVar27 = local_120 + 0x1e;
                      if (-1 < local_120 + -1) {
                        iVar27 = local_120 + -1;
                      }
                      iVar27 = iVar27 >> 5;
                      iVar19 = iVar19 + 0x20;
                      iVar25 = iVar27;
                      if (iVar27 < iVar28) {
                        iVar25 = iVar28;
                      }
                      if (iVar28 < iVar27) {
                        lVar11 = 0;
                        do {
                          uVar26 = puVar24[lVar7 + lVar11 + 1];
                          if (uVar26 != 0) {
                            uVar29 = (ulonglong)(iVar28 + (int)lVar11 + 1);
                            uVar2 = 0xffffffff;
                            goto LAB_142ab4a19;
                          }
                          iVar19 = iVar19 + 0x20;
                          lVar11 = lVar11 + 1;
                        } while (iVar25 - lVar7 != lVar11);
                        uVar2 = 0xffffffff;
                        lVar7 = (longlong)iVar25;
                      }
                      uVar29 = lVar7 + 1U & 0xffffffff;
                      lVar15 = local_380;
                      iVar28 = local_120;
                    }
                    else {
LAB_142ab4a19:
                      uVar22 = (ulonglong)(-uVar26 & uVar26);
                      uVar12 = uVar22 * 2 + 1;
                      lVar7 = 0x3f;
                      if (uVar12 != 0) {
                        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                        }
                      }
                      iVar28 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                      if (local_120 <= iVar28) {
                        iVar28 = local_120;
                      }
                    }
                  } while (iVar28 != local_120);
                }
LAB_142ab411c:
                if (local_170 == 0) {
                  uVar22 = 1;
                  uVar29 = 0;
                  iVar19 = 0;
                  iVar28 = 0;
                }
                else {
                  puVar24 = local_178;
                  if (local_178 == (uint *)0x0) {
                    puVar24 = local_188;
                  }
                  uVar2 = *puVar24;
                  if (uVar2 == 0) {
                    iVar19 = local_170 + 0x1e;
                    if (-1 < local_170 + -1) {
                      iVar19 = local_170 + -1;
                    }
                    uVar29 = 0;
                    uVar12 = (ulonglong)(uint)(iVar19 >> 5);
                    if (iVar19 >> 5 < 1) {
                      uVar12 = uVar29;
                    }
                    iVar19 = 0;
                    do {
                      if (uVar12 == uVar29) goto LAB_142ab41bd;
                      iVar19 = iVar19 + 0x20;
                      uVar2 = puVar24[uVar29 + 1];
                      uVar29 = uVar29 + 1;
                    } while (uVar2 == 0);
                  }
                  else {
                    uVar29 = 0;
                    iVar19 = 0;
                  }
                  uVar22 = (ulonglong)(-uVar2 & uVar2);
                  uVar12 = uVar22 * 2 + 1;
                  lVar7 = 0x3f;
                  if (uVar12 != 0) {
                    for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  iVar28 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                  if (local_170 <= iVar28) {
                    iVar28 = local_170;
                  }
                }
                if (iVar28 != local_170) {
                  uVar2 = 0xffffffff;
                  do {
                    lVar7 = (longlong)iVar28 * 0x1c;
                    fVar38 = *(float *)(local_198 + 8 + lVar7);
                    fVar40 = *(float *)(local_198 + 0xc + lVar7);
                    fVar41 = *(float *)(local_198 + 0x10 + lVar7);
                    fVar42 = fVar41 * fVar41 + fVar38 * fVar38 + fVar40 * fVar40;
                    if (1e-08 < fVar42) {
                      lVar7 = local_198 + lVar7;
                      fVar42 = 1.0 / SQRT(fVar42);
                      *(float *)(lVar7 + 8) = fVar38 * fVar42;
                      *(float *)(lVar7 + 0xc) = fVar40 * fVar42;
                      *(float *)(lVar7 + 0x10) = fVar41 * fVar42;
                    }
                    uVar2 = uVar2 & ~(uint)uVar22;
                    puVar24 = local_178;
                    if (local_178 == (uint *)0x0) {
                      puVar24 = local_188;
                    }
                    iVar28 = (int)uVar29;
                    lVar7 = (longlong)iVar28;
                    uVar26 = puVar24[lVar7] & uVar2;
                    if (uVar26 == 0) {
                      iVar27 = local_170 + 0x1e;
                      if (-1 < local_170 + -1) {
                        iVar27 = local_170 + -1;
                      }
                      iVar27 = iVar27 >> 5;
                      iVar19 = iVar19 + 0x20;
                      iVar25 = iVar27;
                      if (iVar27 < iVar28) {
                        iVar25 = iVar28;
                      }
                      if (iVar28 < iVar27) {
                        lVar11 = 0;
                        do {
                          uVar26 = puVar24[lVar7 + lVar11 + 1];
                          if (uVar26 != 0) {
                            uVar29 = (ulonglong)(iVar28 + (int)lVar11 + 1);
                            uVar2 = 0xffffffff;
                            goto LAB_142ab4b95;
                          }
                          iVar19 = iVar19 + 0x20;
                          lVar11 = lVar11 + 1;
                        } while (iVar25 - lVar7 != lVar11);
                        uVar2 = 0xffffffff;
                        lVar7 = (longlong)iVar25;
                      }
                      uVar29 = lVar7 + 1U & 0xffffffff;
                      lVar15 = local_380;
                      iVar28 = local_170;
                    }
                    else {
LAB_142ab4b95:
                      uVar22 = (ulonglong)(-uVar26 & uVar26);
                      uVar12 = uVar22 * 2 + 1;
                      lVar7 = 0x3f;
                      if (uVar12 != 0) {
                        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                        }
                      }
                      iVar28 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                      if (local_170 <= iVar28) {
                        iVar28 = local_170;
                      }
                    }
                  } while (iVar28 != local_170);
                }
              }
LAB_142ab41bd:
              if ((longlong)(int)uStack_2f0 != 0) {
                piVar10 = local_2f8 + (int)uStack_2f0;
                local_378._0_4_ = fVar36;
                local_390 = (undefined4 *)CONCAT44(local_390._4_4_,fVar33);
                lVar7 = local_348;
                piVar18 = local_2f8;
                uVar3 = local_384;
                do {
                  lVar11 = (longlong)*piVar18;
                  pfVar9 = (float *)(lVar7 + lVar11 * 8);
                  if ((char)uVar3 != '\0') {
                    pfVar9 = (float *)&DAT_14c84635c;
                  }
                  if (((ABS(*(float *)(lVar15 + lVar11 * 0xc)) <= 1e-08) &&
                      (pfVar31 = (float *)(lVar11 * 0xc + lVar15), ABS(pfVar31[1]) <= 1e-08)) &&
                     (ABS(pfVar31[2]) <= 1e-08)) {
                    *pfVar31 = fVar36;
                    pfVar31[1] = fVar33;
                    pfVar31[2] = fVar35;
                  }
                  if ((char)param_1[2] == '\0') {
                    fVar35 = *pfVar9;
                    fVar33 = pfVar9[1];
                    local_2c8 = (float)(~-(uint)(ABS(fVar35) <= 1e-08) & (uint)fVar35);
                    fStack_2c4 = (float)(~-(uint)(ABS(fVar33) <= 1e-08) & (uint)fVar33);
                    uVar2 = (*(code *)PTR_FUN_14c75b148)(&local_2c8,8,0);
                    if ((int)uStack_140 != local_114) {
                      puVar8 = local_108;
                      if (local_108 == (undefined1 *)0x0) {
                        puVar8 = local_110;
                      }
                      iVar19 = *(int *)(puVar8 + (ulonglong)(local_100 - 1U & uVar2) * 4);
                      while (iVar19 != -1) {
                        lVar11 = (longlong)iVar19 * 0x1c;
                        lVar7 = local_148 + lVar11;
                        if ((*(float *)(local_148 + lVar11) == fVar35) &&
                           (!NAN(*(float *)(local_148 + lVar11)) && !NAN(fVar35))) {
                          fVar36 = *(float *)(local_148 + 4 + lVar11);
                          if ((fVar36 == fVar33) && (!NAN(fVar36) && !NAN(fVar33)))
                          goto LAB_142ab4347;
                        }
                        iVar19 = *(int *)(lVar7 + 0x14);
                      }
                    }
                    lVar7 = 0;
LAB_142ab4347:
                    fVar35 = *(float *)(lVar7 + 8);
                    fVar33 = *(float *)(lVar7 + 0xc);
                    fVar36 = *(float *)(lVar7 + 0x10);
                    fVar38 = *pfVar9;
                    fVar40 = pfVar9[1];
                    local_2c8 = (float)(~-(uint)(ABS(fVar38) <= 1e-08) & (uint)fVar38);
                    fStack_2c4 = (float)(~-(uint)(ABS(fVar40) <= 1e-08) & (uint)fVar40);
                    uVar2 = (*(code *)PTR_FUN_14c75b148)(&local_2c8,8,0);
                    if ((int)uStack_190 == local_164) {
                      lVar7 = 0;
                    }
                    else {
                      puVar8 = local_158;
                      if (local_158 == (undefined1 *)0x0) {
                        puVar8 = local_160;
                      }
                      iVar19 = *(int *)(puVar8 + (ulonglong)(local_150 - 1U & uVar2) * 4);
                      while (iVar19 != -1) {
                        lVar11 = (longlong)iVar19 * 0x1c;
                        lVar7 = local_198 + lVar11;
                        if ((*(float *)(local_198 + lVar11) == fVar38) &&
                           (!NAN(*(float *)(local_198 + lVar11)) && !NAN(fVar38))) {
                          fVar41 = *(float *)(local_198 + 4 + lVar11);
                          if ((fVar41 == fVar40) && (!NAN(fVar41) && !NAN(fVar40)))
                          goto LAB_142ab4439;
                        }
                        iVar19 = *(int *)(lVar7 + 0x14);
                      }
                      lVar7 = 0;
                    }
LAB_142ab4439:
                    lVar11 = (longlong)*piVar18;
                    fVar38 = *(float *)(local_358 + lVar11 * 0xc);
                    fVar40 = *(float *)(local_358 + 4 + lVar11 * 0xc);
                    fVar41 = *(float *)(local_358 + 8 + lVar11 * 0xc);
                    local_2c0[0] = fVar41;
                    local_2c8 = fVar38;
                    fStack_2c4 = fVar40;
                    if ((1e-08 >= ABS(fVar38) && 1e-08 >= ABS(fVar40)) &&
                       (local_2c0[0] = fVar36, local_2c8 = fVar35, fStack_2c4 = fVar33,
                       1e-08 < ABS(fVar41))) {
                      local_2c0[0] = fVar41;
                      local_2c8 = fVar38;
                      fStack_2c4 = fVar40;
                    }
                    pfVar9 = (float *)(lVar11 * 0xc + lVar15);
                    fVar35 = *pfVar9;
                    if ((1e-08 < ABS(fVar35)) || (1e-08 < ABS(pfVar9[1]))) {
LAB_142ab4513:
                      fVar33 = 0.0;
                      fVar42 = 0.0;
                      fVar36 = 0.0;
                      if ((1e-08 < ABS(fVar38) || 1e-08 < ABS(fVar40)) || 1e-08 < ABS(fVar41)) {
                        fVar43 = fVar35 * fVar40 - fVar38 * pfVar9[1];
                        fVar45 = fVar38 * pfVar9[2] - fVar41 * fVar35;
                        fVar38 = pfVar9[1] * fVar41 - fVar40 * pfVar9[2];
                        fVar40 = fVar43 * fVar43 + fVar38 * fVar38 + fVar45 * fVar45;
                        if (((fVar40 != 1.0) ||
                            (fVar33 = fVar43, fVar36 = fVar38, fVar42 = fVar45, NAN(fVar40))) &&
                           (fVar33 = DAT_14c846338, fVar36 = (float)DAT_14c846330,
                           fVar42 = DAT_14c846330._4_4_, 1e-08 <= fVar40)) {
                          fVar40 = 1.0 / SQRT(fVar40);
                          fVar33 = fVar43 * fVar40;
                          fVar36 = fVar38 * fVar40;
                          fVar42 = fVar45 * fVar40;
                        }
                        fVar38 = *(float *)(local_368 + lVar11 * 4);
                        fVar33 = fVar33 * fVar38;
                        fVar42 = fVar42 * fVar38;
                        fVar36 = fVar36 * fVar38;
                      }
                    }
                    else {
                      fVar33 = 0.0;
                      fVar42 = 0.0;
                      fVar36 = 0.0;
                      if (1e-08 < ABS(pfVar9[2])) goto LAB_142ab4513;
                    }
                    local_2c0[2] = *(float *)(lVar7 + 8);
                    local_2b0 = *(float *)(lVar7 + 0x10);
                    local_2b4 = *(float *)(lVar7 + 0xc);
                    if ((1e-08 < ABS(fVar42) || 1e-08 < ABS(fVar36)) || 1e-08 < ABS(fVar33)) {
                      local_2c0[2] = fVar36;
                      local_2b0 = fVar33;
                      local_2b4 = fVar42;
                    }
                    fVar33 = local_2c0[0] * local_2b0 +
                             local_2c8 * local_2c0[2] + fStack_2c4 * local_2b4;
                    local_2c0[2] = local_2c0[2] - fVar33 * local_2c8;
                    local_2b4 = local_2b4 - fStack_2c4 * fVar33;
                    local_2b0 = local_2b0 - local_2c0[0] * fVar33;
                    fVar33 = local_2b0 * local_2b0 +
                             local_2c0[2] * local_2c0[2] + local_2b4 * local_2b4;
                    if (1e-08 < fVar33) {
                      fVar33 = 1.0 / SQRT(fVar33);
                      local_2c0[2] = local_2c0[2] * fVar33;
                      local_2b4 = local_2b4 * fVar33;
                      local_2b0 = local_2b0 * fVar33;
                    }
                    fVar33 = pfVar9[1];
                    fVar36 = pfVar9[2];
                    fVar38 = fVar36 * local_2c0[0] + fVar35 * local_2c8 + fStack_2c4 * fVar33;
                    local_2c8 = local_2c8 - fVar38 * fVar35;
                    fStack_2c4 = fStack_2c4 - fVar33 * fVar38;
                    local_2c0[0] = local_2c0[0] - fVar36 * fVar38;
                    fVar38 = local_2c0[0] * local_2c0[0] +
                             local_2c8 * local_2c8 + fStack_2c4 * fStack_2c4;
                    if (1e-08 < fVar38) {
                      fVar38 = 1.0 / SQRT(fVar38);
                      local_2c8 = local_2c8 * fVar38;
                      fStack_2c4 = fStack_2c4 * fVar38;
                      local_2c0[0] = local_2c0[0] * fVar38;
                    }
                    fVar38 = fVar36 * local_2b0 + fVar35 * local_2c0[2] + local_2b4 * fVar33;
                    local_2c0[2] = local_2c0[2] - fVar38 * fVar35;
                    local_2b4 = local_2b4 - fVar33 * fVar38;
                    local_2b0 = local_2b0 - fVar36 * fVar38;
                    fVar35 = local_2b0 * local_2b0 +
                             local_2c0[2] * local_2c0[2] + local_2b4 * local_2b4;
                    if (1e-08 < fVar35) {
                      fVar35 = 1.0 / SQRT(fVar35);
                      local_2c0[2] = local_2c0[2] * fVar35;
                      local_2b4 = local_2b4 * fVar35;
                      local_2b0 = local_2b0 * fVar35;
                    }
                    fVar36 = (float)local_378._0_4_;
                    fVar33 = local_390._0_4_;
                    fVar35 = local_398._0_4_;
                    pfVar31 = (float *)(local_358 + lVar11 * 0xc);
                    *pfVar31 = local_2c8;
                    pfVar31[1] = fStack_2c4;
                    pfVar31[2] = local_2c0[0];
                    local_2c0[1] = 0.0;
                    local_2ac = 0;
                    local_2a8 = *pfVar9;
                    fStack_2a4 = pfVar9[1];
                    local_2a0 = pfVar9[2];
                    local_29c = 0;
                    local_298 = CONCAT44(DAT_14c846330._4_4_,(float)DAT_14c846330);
                    local_290 = DAT_14c846338;
                    local_28c = 0x3f800000;
                    fVar38 = (float)FUN_1467f62d8(&local_2c8);
                    *(undefined4 *)(local_368 + (longlong)*piVar18 * 4) =
                         *(undefined4 *)(&DAT_149e1eeb0 + (ulonglong)(fVar38 < 0.0) * 4);
                    lVar7 = local_348;
                    uVar3 = local_384;
                  }
                  piVar18 = piVar18 + 1;
                } while (piVar18 != piVar10);
              }
              puVar24 = local_338 + 0xc;
            } while (puVar24 != local_360);
          }
          local_240 = 0;
          if (local_248 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_146f9d9ae(&local_288);
          lVar7 = local_358;
        }
      }
      iVar20 = iVar20 + 1;
      lVar15 = local_380;
    } while (iVar20 < local_314);
  }
  if (local_2f8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  local_1f0 = 0;
  if (local_1f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fa678e(&local_238);
  FUN_146fa5692(local_2d8,uStack_2d0 & 0xffffffff);
  if (local_2d8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  local_1a0 = 0;
  if (local_1a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fa681c(&local_1e8);
  local_150 = 0;
  if (local_158 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fa698a(&local_198);
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146fa698a(&local_148);
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ab5267 FUN_142ab5267 body=1046 status=ok
// SIG undefined FUN_142ab5267(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ab5267(void)

{
  uint uVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/StaticMeshDescription",0,0,&PTR_FUN_149fa91f0);
  local_78 = "TextureCoordinate";
  local_70 = 0x11;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c620 = (ulonglong)uVar1;
  local_78 = "Normal";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c628 = (ulonglong)uVar1;
  local_78 = "Tangent";
  local_70 = 7;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c630 = (ulonglong)uVar1;
  local_78 = "BinormalSign";
  local_70 = 0xc;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c638 = (ulonglong)uVar1;
  local_78 = "Color";
  local_70 = 5;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c640 = (ulonglong)uVar1;
  local_78 = "IsHard";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c648 = (ulonglong)uVar1;
  local_78 = "Normal";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c650 = (ulonglong)uVar1;
  local_78 = "Tangent";
  local_70 = 7;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c658 = (ulonglong)uVar1;
  local_78 = "Binormal";
  local_70 = 8;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c660 = (ulonglong)uVar1;
  local_78 = "Normal";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c668 = (ulonglong)uVar1;
  local_78 = "Tangent";
  local_70 = 7;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c670 = (ulonglong)uVar1;
  local_78 = "Binormal";
  local_70 = 8;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c678 = (ulonglong)uVar1;
  local_78 = "Center";
  local_70 = 6;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c680 = (ulonglong)uVar1;
  local_78 = "ImportedMaterialSlotName";
  local_70 = 0x18;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  DAT_14c99c688 = (ulonglong)uVar1;
  local_78 = "CornerSharpness";
  local_70 = 0xf;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c690 = (ulonglong)uVar1;
  local_78 = "CastShadow";
  local_70 = 10;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c698 = (ulonglong)uVar1;
  local_78 = "CreaseSharpness";
  local_70 = 0xf;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c6a0 = (ulonglong)uVar1;
  local_78 = "IsUVSeam";
  local_70 = 8;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c6a8 = (ulonglong)uVar1;
  local_78 = "EnableCollision";
  local_70 = 0xf;
  local_6c = 0;
  uVar1 = FUN_14001a6c0(&local_78,1);
  _DAT_14c99c6b0 = (ulonglong)uVar1;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_14282b410(L"/Script/StaticMeshDescription",&PTR_FUN_149fa9cb0,1,0);
  local_78 = (char *)0x8000000149fa9cd8;
  local_64 = 0x15;
  local_70 = FUN_14577453c();
  local_6c = 1;
  FUN_14628f94a(&local_78);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ab5691 FUN_142ab5691 body=192 status=ok
// SIG undefined FUN_142ab5691(void)

undefined8 * FUN_142ab5691(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c99c740);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 1;
  *param_1 = local_28;
  local_28 = 0;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,&DAT_149e1419a,1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 142ab5754 FUN_142ab5754 body=1451 status=ok
// SIG undefined FUN_142ab5754(void)

void FUN_142ab5754(longlong param_1,longlong param_2,int *param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_208 [32];
  uint local_1e8;
  int local_1e4;
  uint *local_1e0;
  undefined8 ******local_1d8;
  undefined8 ******local_1d0;
  ulonglong local_1c8;
  undefined8 ******local_1c0;
  undefined8 ******local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 ******local_188;
  undefined8 ******local_180;
  uint local_178;
  longlong local_170;
  longlong local_168;
  undefined8 ******local_160;
  int local_158;
  longlong local_150;
  longlong local_148;
  undefined8 ******local_140;
  int local_138;
  longlong local_130;
  longlong local_128;
  undefined8 ******local_120;
  int local_118;
  longlong local_110;
  longlong local_108;
  undefined8 ******local_100;
  int local_f8;
  undefined1 local_f0 [8];
  longlong local_e8;
  longlong local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 ******local_88;
  undefined8 ******ppppppuStack_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_b8 = param_1;
  FUN_146fa7298(local_b0,param_1);
  FUN_146fa70f0(local_f0,param_2);
  FUN_146fa740c(local_f0,1);
  lVar15 = *(longlong *)(*(longlong *)(local_a0 + 0x50) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(local_a0 + 0x50);
  }
  FUN_146fa7e78(lVar15 + 0x20,&local_88,DAT_14c99c740);
  local_1d0 = local_88;
  lVar15 = *(longlong *)(*(longlong *)(local_e8 + 0x50) + 0x80);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(local_e8 + 0x50);
  }
  FUN_146fa7922(lVar15 + 0x20,&local_88,DAT_14c99c740);
  local_1d8 = local_88;
  *(undefined1 *)(param_2 + 0x134) = 1;
  *(undefined1 *)(param_2 + 0x16c) = 1;
  if ((char)param_3[6] == '\x01') {
    local_88 = (undefined8 *******)0x0;
    ppppppuStack_80 = (undefined8 *******)0x0;
    lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x80);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(param_2 + 0x50);
    }
    FUN_146fa29da(lVar15 + 0x20,&local_88);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(param_1 + 0x50);
    }
    local_f8 = *param_3;
    local_110 = param_1;
    local_108 = param_2;
    local_100 = &local_88;
    FUN_146fa84f6(lVar15 + 0x20);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(param_1 + 0x50);
    }
    local_118 = *param_3;
    local_130 = param_1;
    local_128 = param_2;
    local_120 = &local_88;
    FUN_146fa8630(lVar15 + 0x20);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(param_1 + 0x50);
    }
    local_138 = *param_3;
    local_150 = param_1;
    local_148 = param_2;
    local_140 = &local_88;
    FUN_146fa876a(lVar15 + 0x20);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(param_1 + 0x50);
    }
    local_158 = *param_3;
    local_170 = param_1;
    local_168 = param_2;
    local_160 = &local_88;
    FUN_146fa88a4(lVar15 + 0x20);
    if ((undefined8 *******)local_88 != (undefined8 *******)0x0) {
      FUN_1400020a8();
    }
  }
  puVar12 = *(uint **)(*(uint **)(param_1 + 0x50) + 0x20);
  if (puVar12 == (uint *)0x0) {
    puVar12 = *(uint **)(param_1 + 0x50);
  }
  uVar3 = puVar12[6];
  uVar17 = (ulonglong)uVar3;
  local_1b0 = param_2;
  if (uVar3 == 0) {
    uVar10 = 1;
    iVar14 = 0;
    uVar16 = 0;
    uVar7 = 0;
  }
  else {
    puVar4 = *(uint **)(puVar12 + 4);
    if (*(uint **)(puVar12 + 4) == (uint *)0x0) {
      puVar4 = puVar12;
    }
    uVar7 = *puVar4;
    if (uVar7 == 0) {
      iVar14 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar14 = uVar3 - 1;
      }
      uVar16 = 0;
      uVar10 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar10 = uVar16;
      }
      iVar14 = 0;
      do {
        if (uVar10 == uVar16) goto LAB_142ab58f3;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar7 == 0);
    }
    else {
      iVar14 = 0;
      uVar16 = 0;
    }
    uVar10 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar10 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar7 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar7) {
      uVar7 = uVar3;
    }
  }
  if (uVar7 != uVar3) {
    local_1b8 = local_1d0 + 3;
    local_1c0 = local_1d8 + 3;
    uVar13 = 0xffffffff;
    local_1e0 = puVar12;
    local_1c8 = uVar17;
    do {
      local_178 = uVar7;
      if ((int)uVar3 <= (int)local_178) {
        local_178 = 0xffffffff;
      }
      iVar18 = *param_3 + local_178;
      local_180 = (undefined8 ******)local_1d0[6];
      if ((undefined8 *******)local_1d0[6] == (undefined8 *******)0x0) {
        local_180 = local_1b8;
      }
      local_188 = &local_180;
      local_198 = 0;
      uStack_190 = 0;
      lVar15 = (longlong)
               *(int *)((longlong)*local_180 +
                       (ulonglong)(local_178 & 0xff) * 4 +
                       (longlong)((int)local_178 >> 8) * 0xc18 + 0x410);
      local_1e8 = uVar13;
      local_1e4 = iVar14;
      if (lVar15 < 1) {
        uStack_190._0_4_ = 0;
      }
      else {
        lVar11 = 0;
        do {
          lVar5 = (longlong)((int)*(uint *)(local_188 + 1) >> 8);
          uVar2 = *(ushort *)
                   ((longlong)(**local_188)[lVar5 * 0x183] +
                   lVar11 * 4 +
                   (longlong)
                   *(int *)((longlong)**local_188 +
                           (ulonglong)(*(uint *)(local_188 + 1) & 0xff) * 4 + lVar5 * 0xc18 + 0x10)
                   * 4 + 2);
          if ((int)(uint)uVar2 < param_3[4]) {
            puVar6 = (undefined2 *)FUN_146fa89d6(&local_198);
            *puVar6 = *(undefined2 *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 2);
            lVar5 = (longlong)((int)*(uint *)(local_188 + 1) >> 8);
            puVar6[1] = *(undefined2 *)
                         ((longlong)(**local_188)[lVar5 * 0x183] +
                         lVar11 * 4 +
                         (longlong)
                         *(int *)((longlong)**local_188 +
                                 (ulonglong)(*(uint *)(local_188 + 1) & 0xff) * 4 +
                                 lVar5 * 0xc18 + 0x10) * 4);
          }
          lVar11 = lVar11 + 1;
        } while (lVar15 != lVar11);
        puVar12 = local_1e0;
        uVar17 = local_1c8;
      }
      local_1a8 = 0xc00000002;
      uStack_1a0 = 0x10000000001;
      ppppppuStack_80 = (undefined8 ******)local_1d8[6];
      if ((undefined8 *******)local_1d8[6] == (undefined8 *******)0x0) {
        ppppppuStack_80 = local_1c0;
      }
      local_88 = &ppppppuStack_80;
      local_98 = local_198;
      local_90 = (undefined4)uStack_190;
      local_78 = iVar18;
      FUN_146fa8de4(&local_88,&local_98,&local_1a8);
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      uVar13 = local_1e8 & ~(uint)uVar10;
      puVar4 = *(uint **)(puVar12 + 4);
      if (*(uint **)(puVar12 + 4) == (uint *)0x0) {
        puVar4 = puVar12;
      }
      uVar3 = puVar12[6];
      iVar18 = (int)uVar16;
      lVar15 = (longlong)iVar18;
      uVar7 = puVar4[lVar15] & uVar13;
      iVar14 = local_1e4;
      if (uVar7 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar14 = local_1e4 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar18) {
          iVar9 = iVar18;
        }
        if (iVar18 < iVar8) {
          lVar11 = 0;
          do {
            uVar7 = puVar4[lVar15 + lVar11 + 1];
            if (uVar7 != 0) {
              uVar16 = (ulonglong)(iVar18 + (int)lVar11 + 1);
              uVar13 = 0xffffffff;
              goto LAB_142ab5ba2;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar9 - lVar15 != lVar11);
          uVar13 = 0xffffffff;
          iVar18 = iVar9;
        }
        uVar16 = (ulonglong)(iVar18 + 1);
        puVar12 = local_1e0;
        uVar7 = uVar3;
      }
      else {
LAB_142ab5ba2:
        uVar10 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar10 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar7 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar7) {
          uVar7 = uVar3;
        }
      }
    } while (uVar7 != (uint)uVar17);
  }
LAB_142ab58f3:
  *(undefined2 *)(local_1b0 + 0x134) = 0x100;
  *(undefined2 *)(local_1b0 + 0x16c) = 0x100;
  if ((local_70 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ab5d1c FUN_142ab5d1c body=746 status=ok
// SIG undefined FUN_142ab5d1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ab5d1c(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_80 = 0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/SkeletalMeshDescription",0,0,&PTR_FUN_149faa130);
  local_68 = "SkinWeights";
  local_60 = 0xb;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c740 = (ulonglong)uVar1;
  local_68 = "ImportPointIndex";
  local_60 = 0x10;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c748 = (ulonglong)uVar1;
  local_68 = "Name";
  local_60 = 4;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c750 = (ulonglong)uVar1;
  local_68 = "ParentIndex";
  local_60 = 0xb;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c758 = (ulonglong)uVar1;
  local_68 = "Pose";
  local_60 = 4;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c760 = (ulonglong)uVar1;
  local_68 = "Color";
  local_60 = 5;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c768 = (ulonglong)uVar1;
  local_68 = "Name";
  local_60 = 4;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  _DAT_14c99c770 = (ulonglong)uVar1;
  local_68 = "VertexOffsetAndCount";
  local_60 = 0x14;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  _DAT_14c99c778 = (ulonglong)uVar1;
  local_68 = "Default";
  local_60 = 7;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c780 = (ulonglong)uVar1;
  local_68 = "BonesElementName";
  local_60 = 0x10;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c788 = (ulonglong)uVar1;
  local_68 = "SourceGeometryPartElementName";
  local_60 = 0x1d;
  local_5c = 0;
  uVar1 = FUN_14001a6c0(&local_68,1);
  DAT_14c99c790 = (ulonglong)uVar1;
  FUN_1400b22c2(&DAT_14c99c798,"Morph-");
  atexit((_func_5014 *)&LAB_142ab5680);
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_14282b410(L"/Script/SkeletalMeshDescription",&PTR_FUN_149faa570,1,0);
  local_68 = (char *)0x8000000149faa598;
  local_54 = 0x17;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_14628fbf6(&local_68);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ab6008 FUN_142ab6008 body=1193 status=ok
// SIG undefined FUN_142ab6008(void)

void FUN_142ab6008(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar13;
  longlong lVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_f0;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d0 = param_3;
  if (*(longlong **)(param_1 + 0x208) == (longlong *)0x0) goto LAB_142ab645e;
  lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80);
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(param_2 + 0x70);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xc0))();
  if (0 < iVar6) {
    local_e0 = lVar14 + 0x20;
    lVar14 = 0;
    iVar6 = 0;
LAB_142ab60cf:
    lVar4 = local_e0;
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x60) + lVar14 * 8);
    local_a8 = *(longlong *)(lVar1 + 8);
    local_d8 = lVar14;
    do {
      if (local_a8 != 0) {
        if ((int)uStack_90 == local_64) goto LAB_142ab621f;
        uVar8 = (uint)((ulonglong)local_a8 >> 0x10);
        uVar10 = (uint)local_a8 & 0xffff;
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        iVar7 = *(int *)(puVar9 + (ulonglong)
                                  (local_50 - 1U &
                                  (int)((ulonglong)local_a8 >> 0x20) +
                                  ((uint)local_a8 << 0x10 | uVar10) +
                                  (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4)) * 4);
        while( true ) {
          if (iVar7 == -1) goto LAB_142ab621f;
          if (*(longlong *)(local_98 + (longlong)iVar7 * 0x10) == local_a8) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + local_98 + 8);
        }
      }
      if (*(longlong *)(lVar1 + 8) == 0) {
        FUN_140056680(&local_b8,L"Groups");
      }
      else {
        FUN_1400021e4(&local_a8,&local_b8);
      }
      puVar15 = &DAT_149dfb77a;
      if (local_b0 != 0) {
        puVar15 = local_b8;
      }
      FUN_140002266(&local_c8,L"%s_%d",puVar15,iVar6);
      iVar7 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar7 = 0;
      }
      FUN_1446f82e2(&local_a0,iVar7,CONCAT44(uStack_c4,local_c8),1);
      local_a8 = local_a0;
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = iVar6 + 1;
    } while( true );
  }
  local_50 = 0;
  goto LAB_142ab63fb;
LAB_142ab621f:
  FUN_144a13f80(&local_98,&local_b8,&local_a8,0);
  cVar5 = FUN_146f787ac(lVar4,local_a8);
  if (cVar5 == '\0') {
    local_c8 = 0;
    local_f0 = 2;
    local_f8 = &local_c8;
    FUN_146f96702(lVar4,&local_b8,local_a8);
  }
  FUN_146faf974(lVar4,&local_b8,local_a8);
  if (local_b8 != (undefined2 *)0x0) {
    uVar8 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar12 = 0;
    if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar11 = 1;
      uVar16 = 1;
      if (1 < (int)uVar8) {
        uVar11 = (ulonglong)uVar8;
      }
      do {
        uVar10 = (uint)uVar16;
        uVar12 = uVar11;
        if ((uint)uVar11 == uVar10) break;
        uVar2 = uVar16 >> 9;
        uVar12 = uVar16;
        uVar16 = (ulonglong)(uVar10 + 1);
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar2] +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
    }
    if ((uint)uVar12 != uVar8) {
      do {
        uVar10 = (uint)uVar12;
        plVar13 = *(longlong **)(local_b8 + 0x18);
        if (*(longlong **)(local_b8 + 0x18) == (longlong *)0x0) {
          plVar13 = (longlong *)(local_b8 + 0xc);
        }
        *(undefined4 *)
         (*plVar13 +
         (longlong)((int)plVar13[2] * *(int *)(*local_d0 + (longlong)(int)uVar10 * 4)) * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (uVar12 >> 9) * 8) +
              (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar3 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar8) {
          uVar3 = uVar8;
        }
        do {
          iVar7 = (int)uVar12;
          uVar12 = (ulonglong)uVar3;
          if (uVar3 - 1 == iVar7) break;
          uVar10 = iVar7 + 1;
          uVar12 = (ulonglong)uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar12 != uVar8);
    }
  }
  lVar14 = local_d8 + 1;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xc0))();
  if (iVar7 <= lVar14) goto code_r0x000142ab63d1;
  goto LAB_142ab60cf;
code_r0x000142ab63d1:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_142ab63fb:
  uVar12 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar12 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_142ab645e:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ab64b2 FUN_142ab64b2 body=1177 status=ok
// SIG undefined FUN_142ab64b2(void)

void FUN_142ab64b2(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_f0;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d0 = param_3;
  if (*(longlong **)(param_1 + 0x208) == (longlong *)0x0) goto LAB_142ab68f8;
  lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x80);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(param_2 + 0x50);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xd0))();
  if (0 < iVar6) {
    local_e0 = lVar13 + 0x20;
    lVar13 = 0;
    iVar6 = 0;
LAB_142ab6576:
    lVar4 = local_e0;
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x50) + lVar13 * 8);
    local_a8 = *(longlong *)(lVar1 + 8);
    local_d8 = lVar13;
    do {
      if (local_a8 != 0) {
        if ((int)uStack_90 == local_64) goto LAB_142ab66cc;
        uVar8 = (uint)((ulonglong)local_a8 >> 0x10);
        uVar10 = (uint)local_a8 & 0xffff;
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        iVar7 = *(int *)(puVar9 + (ulonglong)
                                  (local_50 - 1U &
                                  (int)((ulonglong)local_a8 >> 0x20) +
                                  ((uint)local_a8 << 0x10 | uVar10) +
                                  (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4)) * 4);
        while( true ) {
          if (iVar7 == -1) goto LAB_142ab66cc;
          if (*(longlong *)(local_98 + (longlong)iVar7 * 0x10) == local_a8) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + local_98 + 8);
        }
      }
      if (*(longlong *)(lVar1 + 8) == 0) {
        FUN_140056680(&local_b8,L"Weights");
      }
      else {
        FUN_1400021e4(&local_a8,&local_b8);
      }
      puVar14 = &DAT_149dfb77a;
      if (local_b0 != 0) {
        puVar14 = local_b8;
      }
      FUN_140002266(&local_c8,L"%s_%d",puVar14,iVar6);
      iVar7 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar7 = 0;
      }
      FUN_1446f82e2(&local_a0,iVar7,CONCAT44(uStack_c4,local_c8),1);
      local_a8 = local_a0;
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = iVar6 + 1;
    } while( true );
  }
  local_50 = 0;
  goto LAB_142ab6895;
LAB_142ab66cc:
  FUN_144a13f80(&local_98,&local_b8,&local_a8,0);
  cVar5 = FUN_146f787ac(lVar4,local_a8);
  if (cVar5 == '\0') {
    local_c8 = 0;
    local_f0 = 2;
    local_f8 = &local_c8;
    FUN_146f95cb4(lVar4,&local_b8,local_a8);
  }
  FUN_146faa024(lVar4,&local_b8,local_a8);
  if (local_b8 != (undefined2 *)0x0) {
    uVar8 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar12 = 0;
    if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar11 = 1;
      uVar15 = 1;
      if (1 < (int)uVar8) {
        uVar11 = (ulonglong)uVar8;
      }
      do {
        uVar10 = (uint)uVar15;
        uVar12 = uVar11;
        if ((uint)uVar11 == uVar10) break;
        uVar2 = uVar15 >> 9;
        uVar12 = uVar15;
        uVar15 = (ulonglong)(uVar10 + 1);
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar2] +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
    }
    if ((uint)uVar12 != uVar8) {
      do {
        uVar10 = (uint)uVar12;
        plVar16 = *(longlong **)(local_b8 + 0x18);
        if (*(longlong **)(local_b8 + 0x18) == (longlong *)0x0) {
          plVar16 = (longlong *)(local_b8 + 0xc);
        }
        *(undefined4 *)
         (*plVar16 +
         (longlong)((int)plVar16[2] * *(int *)(*local_d0 + (longlong)(int)uVar10 * 4)) * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (uVar12 >> 9) * 8) +
              (ulonglong)(uVar10 & 0x1ff) * 4);
        uVar3 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar8) {
          uVar3 = uVar8;
        }
        do {
          iVar7 = (int)uVar12;
          uVar12 = (ulonglong)uVar3;
          if (uVar3 - 1 == iVar7) break;
          uVar10 = iVar7 + 1;
          uVar12 = (ulonglong)uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar12 != uVar8);
    }
  }
  lVar13 = local_d8 + 1;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xd0))();
  if (iVar7 <= lVar13) goto code_r0x000142ab686b;
  goto LAB_142ab6576;
code_r0x000142ab686b:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_142ab6895:
  uVar12 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar12 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_142ab68f8:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ab694c FUN_142ab694c body=17312 status=ok
// SIG undefined FUN_142ab694c(void)

void FUN_142ab694c(longlong param_1,longlong *param_2,double param_3,char param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  int iVar22;
  double dVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong *plVar29;
  ulonglong uVar30;
  double dVar31;
  undefined4 uVar32;
  undefined7 uVar34;
  ulonglong uVar33;
  bool bVar35;
  undefined1 auStack_2a8 [32];
  double local_288;
  longlong local_280;
  longlong *local_278;
  undefined8 local_270;
  ulonglong local_268;
  longlong *local_260;
  uint local_254;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  longlong local_220;
  ulonglong local_218;
  uint *local_210;
  longlong *local_208;
  longlong *local_200;
  ulonglong local_1f8;
  char local_1e9;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  longlong *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined1 local_160 [8];
  longlong local_158;
  ulonglong uStack_150;
  undefined1 local_148 [8];
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined1 local_120 [8];
  longlong local_118;
  longlong *local_110;
  longlong local_108 [3];
  longlong *local_f0;
  double local_e8;
  undefined8 uStack_e0;
  longlong **local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_260 = (longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_288 = param_3;
  local_f0 = param_2;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_146f98482(local_260,0);
  }
  plVar5 = (longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_280 = param_1;
  if (*(int *)(param_1 + 0x24) < 0) {
    FUN_146fb3220(plVar5);
  }
  if (param_2 == (longlong *)0x0) goto LAB_142ab69c8;
  lVar26 = *(longlong *)(param_2[10] + 0x80);
  if (lVar26 == 0) {
    lVar26 = param_2[10];
  }
  FUN_146f78cc2(plVar5,*(int *)(lVar26 + 0x18) - *(int *)(lVar26 + 0x78),1);
  local_250 = param_2[0x1f];
  puVar8 = *(uint **)((uint *)param_2[10] + 0x20);
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)param_2[10];
  }
  uVar10 = puVar8[6];
  local_248 = plVar5;
  if (uVar10 == 0) {
    uVar30 = 1;
    iVar22 = 0;
    uVar18 = 0;
    uVar24 = 0;
  }
  else {
    puVar4 = *(uint **)(puVar8 + 4);
    if (*(uint **)(puVar8 + 4) == (uint *)0x0) {
      puVar4 = puVar8;
    }
    uVar24 = *puVar4;
    if (uVar24 == 0) {
      iVar22 = uVar10 + 0x1e;
      if (-1 < (int)(uVar10 - 1)) {
        iVar22 = uVar10 - 1;
      }
      uVar18 = 0;
      uVar33 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar33 = uVar18;
      }
      iVar22 = 0;
      do {
        if (uVar33 == uVar18) goto LAB_142ab6ca9;
        iVar22 = iVar22 + 0x20;
        uVar24 = puVar4[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar24 == 0);
    }
    else {
      iVar22 = 0;
      uVar18 = 0;
    }
    uVar30 = (ulonglong)(-uVar24 & uVar24);
    uVar33 = uVar30 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar24 = (iVar22 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if ((int)uVar10 <= (int)uVar24) {
      uVar24 = uVar10;
    }
  }
  if (uVar24 != uVar10) {
    local_270 = CONCAT71(local_270._1_7_,param_4);
    local_278 = (longlong *)(local_250 + 0x18);
    uVar9 = 0xffffffff;
    uVar3 = uVar10;
    do {
      if ((int)uVar3 <= (int)uVar24) {
        uVar24 = 0xffffffff;
      }
      plVar5 = *(longlong **)(local_250 + 0x30);
      if (*(longlong **)(local_250 + 0x30) == (longlong *)0x0) {
        plVar5 = local_278;
      }
      lVar26 = *plVar5;
      lVar11 = (longlong)(int)((int)plVar5[2] * uVar24);
      local_d8 = (longlong **)(double)*(float *)(lVar26 + 8 + lVar11 * 0xc);
      uStack_e0 = (longlong *)(double)*(float *)(lVar26 + 4 + lVar11 * 0xc);
      local_e8 = (double)*(float *)(lVar26 + lVar11 * 0xc);
      local_c8 = DAT_14c846338;
      local_d0 = DAT_14c846330;
      local_bc = DAT_14c846338;
      local_c4 = DAT_14c846330;
      local_b8 = DAT_14c84635c;
      local_b0 = 0;
      local_ae = 0;
      iVar2 = FUN_146c02208(local_288,&local_e8);
      *(uint *)(*local_248 + (longlong)iVar2 * 4) = uVar24;
      uVar9 = ~(uint)uVar30 & uVar9;
      puVar4 = *(uint **)(puVar8 + 4);
      if (*(uint **)(puVar8 + 4) == (uint *)0x0) {
        puVar4 = puVar8;
      }
      uVar3 = puVar8[6];
      iVar2 = (int)uVar18;
      lVar26 = (longlong)iVar2;
      uVar24 = puVar4[lVar26] & uVar9;
      if (uVar24 == 0) {
        iVar14 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar14 = uVar3 - 1;
        }
        iVar14 = iVar14 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar2) {
          iVar15 = iVar2;
        }
        if (iVar2 < iVar14) {
          lVar11 = 0;
          do {
            uVar24 = puVar4[lVar26 + lVar11 + 1];
            if (uVar24 != 0) {
              uVar18 = (ulonglong)(iVar2 + (int)lVar11 + 1);
              uVar9 = 0xffffffff;
              goto LAB_142ab6c5a;
            }
            iVar22 = iVar22 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar15 - lVar26 != lVar11);
          uVar9 = 0xffffffff;
          iVar2 = iVar15;
        }
        uVar18 = (ulonglong)(iVar2 + 1);
        uVar24 = uVar3;
      }
      else {
LAB_142ab6c5a:
        uVar30 = (ulonglong)(-uVar24 & uVar24);
        uVar33 = uVar30 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar24 = (iVar22 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar24) {
          uVar24 = uVar3;
        }
      }
    } while (uVar24 != uVar10);
    param_2 = local_f0;
    param_4 = (char)local_270;
  }
LAB_142ab6ca9:
  local_110 = param_2;
  FUN_146fa7298(local_108,param_2);
  lVar26 = *(longlong *)(local_110[0xb] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_110[0xb];
  }
  FUN_146fa23d0(lVar26 + 0x20,&local_118,DAT_14c99c620);
  lVar26 = *(longlong *)(local_110[0xb] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_110[0xb];
  }
  FUN_146fa2268(lVar26 + 0x20,local_120,DAT_14c99c628);
  lVar26 = *(longlong *)(local_110[0xb] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_110[0xb];
  }
  FUN_146fa2268(lVar26 + 0x20,&local_128,DAT_14c99c630);
  lVar26 = *(longlong *)(local_110[0xb] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_110[0xb];
  }
  FUN_146fa231c(lVar26 + 0x20,&local_130,DAT_14c99c638);
  lVar26 = *(longlong *)(local_110[0xb] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_110[0xb];
  }
  FUN_146fa1e6a(lVar26 + 0x20,&local_138,DAT_14c99c640);
  lVar26 = *(longlong *)(local_f0[0xf] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_f0[0xf];
  }
  FUN_146fafc26(lVar26 + 0x20,&local_140,DAT_14c99c7c8);
  lVar26 = local_280;
  if (*(char *)(local_280 + 1) != '\0') {
    FUN_14582eef4(local_288,0);
  }
  uVar10 = 0;
  if ((param_4 != '\0') && (local_128 != 0)) {
    uVar10 = (uint)(local_130 != 0);
  }
  FUN_1402160b8(local_148);
  local_158 = 0;
  uStack_150 = 0;
  lVar11 = local_f0[0xe];
  lVar28 = *(longlong *)(lVar11 + 0x80);
  lVar25 = lVar28;
  if (lVar28 == 0) {
    lVar25 = lVar11;
  }
  uVar24 = *(int *)(lVar25 + 0x18) - *(int *)(lVar25 + 0x78);
  if (uVar24 == 0 || *(int *)(lVar25 + 0x18) < *(int *)(lVar25 + 0x78)) {
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar24);
    }
  }
  else {
    param_2 = &local_158;
    uStack_150 = (ulonglong)uVar24;
    FUN_142abb762(param_2);
    lVar26 = local_280;
    FUN_142abb747(local_158,uVar24);
    lVar11 = local_f0[0xe];
    lVar28 = *(longlong *)(lVar11 + 0x80);
  }
  if (lVar28 != 0) {
    lVar11 = lVar28;
  }
  uVar24 = *(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x78);
  iVar22 = *(int *)(lVar26 + 0x10);
  *(uint *)(lVar26 + 0x10) = iVar22 + uVar24;
  if ((uint)(*(int *)(lVar26 + 0x14) - iVar22) < uVar24) {
    FUN_146f984e2(local_260);
  }
  puVar8 = *(uint **)((uint *)local_f0[0xe] + 0x20);
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)local_f0[0xe];
  }
  uVar24 = puVar8[6];
  uVar18 = (ulonglong)uVar24;
  uVar34 = (undefined7)((ulonglong)param_2 >> 8);
  dVar23 = local_288;
  local_254 = uVar10;
  if (uVar24 == 0) {
    uVar20 = 1;
    iVar22 = 0;
    uVar33 = 0;
    uVar10 = 0;
  }
  else {
    puVar4 = *(uint **)(puVar8 + 4);
    if (*(uint **)(puVar8 + 4) == (uint *)0x0) {
      puVar4 = puVar8;
    }
    uVar10 = *puVar4;
    if (uVar10 == 0) {
      iVar22 = uVar24 + 0x1e;
      if (-1 < (int)(uVar24 - 1)) {
        iVar22 = uVar24 - 1;
      }
      uVar33 = 0;
      uVar30 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar30 = uVar33;
      }
      iVar22 = 0;
      do {
        if (uVar30 == uVar33) {
          uVar32 = (undefined4)CONCAT71(uVar34,1);
          goto LAB_142ab6f77;
        }
        iVar22 = iVar22 + 0x20;
        uVar10 = puVar4[uVar33 + 1];
        uVar33 = uVar33 + 1;
      } while (uVar10 == 0);
    }
    else {
      iVar22 = 0;
      uVar33 = 0;
    }
    uVar20 = (ulonglong)(-uVar10 & uVar10);
    uVar30 = uVar20 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar10 = (iVar22 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar24 <= (int)uVar10) {
      uVar10 = uVar24;
    }
  }
  uVar32 = (undefined4)CONCAT71(uVar34,1);
  if (uVar10 != uVar24) {
    local_200 = (longlong *)(local_250 + 0x18);
    local_220 = local_140;
    local_208 = (longlong *)(local_140 + 0x18);
    uVar13 = CONCAT71(uVar34,1);
    uVar3 = 0xffffffff;
    local_218 = uVar18;
    local_210 = puVar8;
    do {
      if ((int)uVar24 <= (int)uVar10) {
        uVar10 = 0xffffffff;
      }
      plVar5 = *(longlong **)(local_f0[0x16] + 0x30);
      plVar27 = (longlong *)(local_f0[0x16] + 0x18);
      if (plVar5 != (longlong *)0x0) {
        plVar27 = plVar5;
      }
      plVar5 = *(longlong **)(local_f0[0x1d] + 0x30);
      plVar29 = (longlong *)(local_f0[0x1d] + 0x18);
      if (plVar5 != (longlong *)0x0) {
        plVar29 = plVar5;
      }
      uVar24 = *(uint *)(*plVar27 + (longlong)(int)((int)plVar27[2] * uVar10) * 4);
      local_238 = (ulonglong)uVar24;
      uVar9 = *(uint *)(*plVar29 + (longlong)(int)((int)plVar29[2] * uVar10) * 4);
      local_1f8 = (ulonglong)uVar9;
      iVar2 = *(int *)(lVar26 + 0x2c);
      if (iVar2 == 1) {
        iVar14 = uVar24 + 1;
      }
      else if (iVar2 == 2) {
        iVar14 = uVar9 + 1;
      }
      else {
        iVar14 = 0;
        if ((iVar2 == 3) && (local_220 != 0)) {
          plVar5 = *(longlong **)(local_220 + 0x30);
          if (*(longlong **)(local_220 + 0x30) == (longlong *)0x0) {
            plVar5 = local_208;
          }
          iVar14 = *(int *)(*plVar5 + (longlong)(int)((int)plVar5[2] * uVar24) * 4);
        }
      }
      plVar5 = *(longlong **)(local_f0[0x14] + 0x30);
      plVar27 = (longlong *)(local_f0[0x14] + 0x18);
      if (plVar5 != (longlong *)0x0) {
        plVar27 = plVar5;
      }
      if ((int)local_f0[0x15] == 0) {
        plVar27 = (longlong *)((longlong)((int)uVar10 >> 8) * 0xc18 + *plVar27);
        iVar2 = *(int *)((longlong)plVar27 + (ulonglong)(uVar10 & 0xff) * 4 + 0x10);
      }
      else {
        iVar2 = (int)plVar27[2] * uVar10;
      }
      local_240 = (longlong *)CONCAT44(local_240._4_4_,uVar3);
      plVar5 = *(longlong **)(local_f0[0x19] + 0x30);
      plVar29 = (longlong *)(local_f0[0x19] + 0x18);
      if (plVar5 != (longlong *)0x0) {
        plVar29 = plVar5;
      }
      local_278 = (longlong *)CONCAT44(local_278._4_4_,iVar22);
      if ((int)local_f0[0x1a] == 0) {
        plVar29 = (longlong *)((longlong)((int)uVar10 >> 8) * 0xc18 + *plVar29);
        iVar22 = *(int *)((longlong)plVar29 + (ulonglong)(uVar10 & 0xff) * 4 + 0x10);
      }
      else {
        iVar22 = (int)plVar29[2] * uVar10;
      }
      lVar11 = *plVar27;
      lVar28 = (longlong)iVar2;
      local_224 = *(undefined4 *)(lVar11 + lVar28 * 4);
      local_228 = *(undefined4 *)(lVar11 + 4 + lVar28 * 4);
      local_22c = *(undefined4 *)(lVar11 + 8 + lVar28 * 4);
      lVar11 = *plVar29;
      lVar28 = (longlong)iVar22;
      local_1b8 = (ulonglong *)
                  CONCAT44(*(undefined4 *)(lVar11 + 4 + lVar28 * 4),
                           *(undefined4 *)(lVar11 + lVar28 * 4));
      uStack_1b0 = CONCAT44((int)(uStack_1b0 >> 0x20),*(undefined4 *)(lVar11 + 8 + lVar28 * 4));
      local_270 = uVar33;
      uVar24 = FUN_146c01152(dVar23,&local_1b8,iVar14);
      if ((~uVar24 & 0xfffffffd) != 0) {
        if (uVar24 == 0xfffffffe) {
          uVar24 = FUN_146c061e0(dVar23,(ulonglong)local_1b8 & 0xffffffff,local_1b8._4_4_);
          uVar3 = FUN_146c061e0(dVar23,local_1b8._4_4_,uStack_1b0 & 0xffffffff);
          uVar9 = FUN_146c061e0(dVar23,uStack_1b0 & 0xffffffff,(ulonglong)local_1b8 & 0xffffffff);
          lVar26 = local_280;
          uVar18 = local_88 >> 0x18;
          local_88 = uVar18 << 0x18;
          uVar33 = local_88 >> 0x10;
          local_88 = uVar18 << 0x18;
          if ((uVar24 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        (*(longlong *)((longlong)local_288 + 0x1c0) + (ulonglong)(uVar24 >> 9) * 8)
                       + 0xc + (ulonglong)((uVar24 & 0x1ff) << 4)) != -1)) {
            local_88 = CONCAT62((int6)uVar33,0x101);
          }
          if ((uVar3 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        (*(longlong *)((longlong)local_288 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
                       0xc + (ulonglong)((uVar3 & 0x1ff) << 4)) != -1)) {
            local_88._0_3_ = CONCAT21(0x101,(undefined1)local_88);
          }
          if ((uVar9 != 0xffffffff) &&
             (*(int *)(*(longlong *)
                        (*(longlong *)((longlong)local_288 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                       0xc + (ulonglong)((uVar9 & 0x1ff) << 4)) != -1)) {
            local_88._0_3_ = CONCAT12(1,(undefined2)local_88);
            local_88 = CONCAT71(local_88._1_7_,1);
          }
          lVar11 = lVar11 + lVar28 * 4;
          lVar28 = 0;
          dVar23 = local_288;
          do {
            if (*(char *)((longlong)&local_88 + lVar28) == '\x01') {
              plVar5 = *(longlong **)(local_250 + 0x30);
              if (*(longlong **)(local_250 + 0x30) == (longlong *)0x0) {
                plVar5 = local_200;
              }
              lVar25 = *plVar5;
              lVar12 = (longlong)((int)plVar5[2] * *(int *)(lVar11 + lVar28 * 4));
              local_d8 = (longlong **)(double)*(float *)(lVar25 + 8 + lVar12 * 0xc);
              uStack_e0 = (longlong *)(double)*(float *)(lVar25 + 4 + lVar12 * 0xc);
              local_e8 = (double)*(float *)(lVar25 + lVar12 * 0xc);
              local_c8 = DAT_14c846338;
              local_d0 = DAT_14c846330;
              local_bc = DAT_14c846338;
              local_c4 = DAT_14c846330;
              local_b8 = DAT_14c84635c;
              local_b0 = 0;
              local_ae = 0;
              iVar22 = FUN_146c02208(dVar23,&local_e8);
              plVar5 = local_248;
              *(int *)((longlong)&local_1b8 + lVar28 * 4) = iVar22;
              FUN_146f78cc2(local_248,iVar22 + 1,1);
              *(undefined4 *)(*plVar5 + (longlong)iVar22 * 4) = *(undefined4 *)(lVar11 + lVar28 * 4)
              ;
              dVar23 = local_288;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 != 3);
          uVar24 = FUN_146c01152(dVar23,&local_1b8,iVar14);
          uVar13 = 0;
        }
        lVar11 = (longlong)(int)uVar24;
        *(int *)(local_158 + lVar11 * 0x14) = (int)local_238;
        *(int *)(local_158 + 4 + lVar11 * 0x14) = (int)local_1f8;
        *(undefined4 *)(local_158 + 8 + lVar11 * 0x14) = local_224;
        *(undefined4 *)(local_158 + 0xc + lVar11 * 0x14) = local_228;
        *(undefined4 *)(local_158 + 0x10 + lVar11 * 0x14) = local_22c;
        *(uint *)(*local_260 + lVar11 * 4) = uVar10;
      }
      uVar32 = (undefined4)uVar13;
      uVar3 = (uint)local_240 & ~(uint)uVar20;
      puVar8 = *(uint **)(local_210 + 4);
      if (*(uint **)(local_210 + 4) == (uint *)0x0) {
        puVar8 = local_210;
      }
      uVar24 = local_210[6];
      iVar2 = (int)local_270;
      lVar11 = (longlong)iVar2;
      uVar10 = puVar8[lVar11] & uVar3;
      uVar33 = local_270;
      iVar22 = (int)local_278;
      if (uVar10 == 0) {
        iVar14 = uVar24 + 0x1e;
        if (-1 < (int)(uVar24 - 1)) {
          iVar14 = uVar24 - 1;
        }
        iVar14 = iVar14 >> 5;
        iVar22 = (int)local_278 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar2) {
          iVar15 = iVar2;
        }
        if (iVar2 < iVar14) {
          lVar28 = 0;
          do {
            uVar10 = puVar8[lVar11 + lVar28 + 1];
            if (uVar10 != 0) {
              uVar33 = (ulonglong)(iVar2 + (int)lVar28 + 1);
              uVar3 = 0xffffffff;
              goto LAB_142ab7511;
            }
            iVar22 = iVar22 + 0x20;
            lVar28 = lVar28 + 1;
          } while (iVar15 - lVar11 != lVar28);
          uVar3 = 0xffffffff;
          iVar2 = iVar15;
        }
        uVar33 = (ulonglong)(iVar2 + 1);
        dVar23 = local_288;
        lVar26 = local_280;
        uVar10 = uVar24;
      }
      else {
LAB_142ab7511:
        uVar20 = (ulonglong)(-uVar10 & uVar10);
        uVar18 = uVar20 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar10 = (iVar22 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar24 <= (int)uVar10) {
          uVar10 = uVar24;
        }
      }
      uVar18 = local_218;
    } while (uVar10 != (uint)local_218);
  }
LAB_142ab6f77:
  FUN_146faf906(local_260,
                *(int *)((longlong)dVar23 + 0x140) * 0x200 + *(int *)((longlong)dVar23 + 0x144));
  FUN_1402160b8(local_160);
  lVar11 = local_f0[0xc];
  uVar10 = *(uint *)(lVar11 + 0x88);
  if (local_118 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(uint *)(local_118 + 0x38);
  }
  if (uVar24 == uVar10) {
    if ((int)uVar10 < 1) {
      local_270 = CONCAT44(local_270._4_4_,(int)CONCAT71((uint7)(uint3)(uVar10 >> 8),1));
    }
    else {
      lVar28 = *(longlong *)(lVar11 + 0x80);
      if (*(longlong *)(lVar11 + 0x80) == 0) {
        lVar28 = lVar11;
      }
      uVar13 = CONCAT71((int7)(uVar18 >> 8),1);
      lVar11 = 0;
      do {
        uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),
                          (byte)uVar13 & *(int *)(lVar28 + 0x18 + lVar11) != 0);
        lVar11 = lVar11 + 0x80;
      } while ((ulonglong)uVar10 << 7 != lVar11);
      local_270 = CONCAT44(local_270._4_4_,(int)uVar13);
    }
  }
  else {
    local_270 = (ulonglong)local_270._4_4_ << 0x20;
  }
  uVar18 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b8 = (ulonglong *)0x0;
  uStack_1b0 = 0;
  local_278 = (longlong *)CONCAT44(local_278._4_4_,uVar24);
  local_238 = CONCAT44(local_238._4_4_,uVar32);
  if (*(char *)(lVar26 + 3) == '\0') {
    FUN_14582ed12(dVar23);
    uVar10 = (local_254 & 0xff) * 2 + 1;
    iVar22 = (**(code **)(**(longlong **)((longlong)dVar23 + 0x208) + 0xb0))();
    if (iVar22 < (int)uVar10) {
      (**(code **)(**(longlong **)((longlong)local_288 + 0x208) + 0xb8))
                (*(longlong **)((longlong)local_288 + 0x208),uVar10);
    }
    uVar33 = 0;
    dVar23 = local_288;
    do {
      dVar31 = local_288;
      if ((longlong)uVar33 < (longlong)*(int *)(*(longlong *)((longlong)dVar23 + 0x208) + 0x38)) {
        uVar13 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)((longlong)dVar23 + 0x208) + 0x30) + uVar33 * 8);
      }
      else {
        uVar13 = 0;
      }
      FUN_146c1a144(uVar13);
      uVar33 = uVar33 + 1;
      dVar23 = dVar31;
    } while (uVar10 != uVar33);
    plVar5 = *(longlong **)((longlong)dVar31 + 0x208);
    iVar22 = (int)plVar5[7];
    if (iVar22 < 1) {
      local_170 = 0;
    }
    else {
      local_170 = *(longlong *)plVar5[6];
    }
    if ((char)local_254 != '\0') {
      if (iVar22 < 2) {
        local_178 = 0;
      }
      else {
        local_178 = *(longlong *)(plVar5[6] + 8);
        if (iVar22 != 2) {
          local_180 = *(longlong *)(plVar5[6] + 0x10);
          goto LAB_142aba679;
        }
      }
      local_180 = 0;
    }
LAB_142aba679:
    (**(code **)(*plVar5 + 0xa8))(plVar5,uVar24);
    if (1 < (int)uVar24) {
      uVar33 = 1;
      do {
        dVar31 = local_288;
        if ((longlong)uVar33 < (longlong)*(int *)(*(longlong *)((longlong)dVar23 + 0x208) + 0x28)) {
          uVar13 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)((longlong)dVar23 + 0x208) + 0x20) + uVar33 * 8);
        }
        else {
          uVar13 = 0;
        }
        FUN_146c1a030(uVar13,*(int *)((longlong)local_288 + 0x140) * 0x200 +
                             *(int *)((longlong)local_288 + 0x144));
        uVar33 = uVar33 + 1;
        dVar23 = dVar31;
      } while (uVar24 != uVar33);
    }
    if (local_138 != 0) {
      FUN_146c17f82(*(undefined8 *)((longlong)dVar31 + 0x208));
      local_168 = *(longlong *)(*(longlong *)((longlong)dVar31 + 0x208) + 0x40);
    }
    FUN_14582ed9a();
    local_188 = *(longlong *)(*(longlong *)((longlong)dVar31 + 0x208) + 0x48);
    lVar26 = *(longlong *)(local_f0[10] + 0x80);
    if (lVar26 == 0) {
      lVar26 = local_f0[10];
    }
    iVar22 = *(int *)(lVar26 + 0x48);
    if (iVar22 == 0) {
      uVar33 = 1;
      iVar14 = 0;
      uVar30 = 0;
      iVar2 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar26 + 0x40);
      if (*(uint **)(lVar26 + 0x40) == (uint *)0x0) {
        puVar8 = (uint *)(lVar26 + 0x30);
      }
      uVar10 = *puVar8;
      if (uVar10 == 0) {
        iVar2 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar2 = iVar22 + -1;
        }
        uVar30 = 0;
        uVar33 = (ulonglong)(uint)(iVar2 >> 5);
        if (iVar2 >> 5 < 1) {
          uVar33 = uVar30;
        }
        iVar14 = 0;
        do {
          if (uVar33 == uVar30) goto LAB_142aba7bc;
          iVar14 = iVar14 + 0x20;
          uVar10 = puVar8[uVar30 + 1];
          uVar30 = uVar30 + 1;
        } while (uVar10 == 0);
      }
      else {
        iVar14 = 0;
        uVar30 = 0;
      }
      uVar33 = (ulonglong)(-uVar10 & uVar10);
      uVar20 = uVar33 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar2 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar2) {
        iVar2 = iVar22;
      }
    }
    if (iVar2 != iVar22) {
      uVar10 = 0xffffffff;
      do {
        local_e8 = local_288;
        uStack_e0 = &local_1b8;
        local_d8 = &local_110;
        (*(code *)(&PTR_FUN_149fab060)
                  [*(uint *)(*(longlong *)
                              (*(longlong *)(lVar26 + 0x20) + 8 + (longlong)iVar2 * 0x18) + 8)])
                  (*(undefined8 *)(*(longlong *)(lVar26 + 0x20) + (longlong)iVar2 * 0x18),&local_e8)
        ;
        uVar10 = ~(uint)uVar33 & uVar10;
        puVar8 = *(uint **)(lVar26 + 0x40);
        if (*(uint **)(lVar26 + 0x40) == (uint *)0x0) {
          puVar8 = (uint *)(lVar26 + 0x30);
        }
        iVar15 = *(int *)(lVar26 + 0x48);
        iVar2 = (int)uVar30;
        lVar11 = (longlong)iVar2;
        uVar24 = puVar8[lVar11] & uVar10;
        if (uVar24 == 0) {
          iVar16 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar16 = iVar15 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar17 = iVar16;
          if (iVar16 < iVar2) {
            iVar17 = iVar2;
          }
          if (iVar2 < iVar16) {
            lVar28 = 0;
            do {
              uVar24 = puVar8[lVar11 + lVar28 + 1];
              if (uVar24 != 0) {
                uVar30 = (ulonglong)(iVar2 + (int)lVar28 + 1);
                uVar10 = 0xffffffff;
                goto LAB_142aba9d3;
              }
              iVar14 = iVar14 + 0x20;
              lVar28 = lVar28 + 1;
            } while (iVar17 - lVar11 != lVar28);
            uVar10 = 0xffffffff;
            lVar11 = (longlong)iVar17;
          }
          uVar30 = lVar11 + 1U & 0xffffffff;
          iVar2 = iVar15;
        }
        else {
LAB_142aba9d3:
          uVar33 = (ulonglong)(-uVar24 & uVar24);
          uVar20 = uVar33 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar2 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar2) {
            iVar2 = iVar15;
          }
        }
      } while (iVar2 != iVar22);
    }
LAB_142aba7bc:
    dVar23 = local_288;
    if (local_108[0] != 0) {
      lVar26 = *(longlong *)(local_108[0] + 0x80);
      if (*(longlong *)(local_108[0] + 0x80) == 0) {
        lVar26 = local_108[0];
      }
      FUN_146c26078(*(undefined8 *)((longlong)local_288 + 0x208),
                    *(int *)(lVar26 + 0x18) - *(int *)(lVar26 + 0x78));
      lVar26 = *(longlong *)(local_108[0] + 0x80);
      if (*(longlong *)(local_108[0] + 0x80) == 0) {
        lVar26 = local_108[0];
      }
      cVar1 = FUN_146f787ac(lVar26 + 0x20,DAT_14c99c750);
      if (cVar1 != '\0') {
        local_190 = *(longlong *)(*(longlong *)((longlong)dVar23 + 0x208) + 0xc0);
      }
      lVar26 = *(longlong *)(local_108[0] + 0x80);
      if (*(longlong *)(local_108[0] + 0x80) == 0) {
        lVar26 = local_108[0];
      }
      cVar1 = FUN_146f787ac(lVar26 + 0x20,DAT_14c99c758);
      if (cVar1 != '\0') {
        local_198 = *(undefined8 *)(*(longlong *)((longlong)dVar23 + 0x208) + 200);
      }
      lVar26 = *(longlong *)(local_108[0] + 0x80);
      if (*(longlong *)(local_108[0] + 0x80) == 0) {
        lVar26 = local_108[0];
      }
      cVar1 = FUN_146f787ac(lVar26 + 0x20,DAT_14c99c760);
      if (cVar1 != '\0') {
        local_1a0 = *(undefined8 *)(*(longlong *)((longlong)dVar23 + 0x208) + 0xd0);
      }
      lVar26 = *(longlong *)(local_108[0] + 0x80);
      if (*(longlong *)(local_108[0] + 0x80) == 0) {
        lVar26 = local_108[0];
      }
      cVar1 = FUN_146f787ac(lVar26 + 0x20,DAT_14c99c768);
      if (cVar1 != '\0') {
        local_1a8 = *(undefined8 *)(*(longlong *)((longlong)dVar23 + 0x208) + 0xd8);
      }
    }
  }
  lVar26 = *(longlong *)(local_f0[0xe] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_f0[0xe];
  }
  local_88 = 0;
  uStack_80 = 0;
  local_1c8 = (longlong *)0x0;
  uStack_1c0 = 0;
  iVar22 = *(int *)(lVar26 + 0x48);
  if (iVar22 == 0) {
    uVar33 = 1;
    iVar14 = 0;
    iVar2 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar26 + 0x40);
    if (*(uint **)(lVar26 + 0x40) == (uint *)0x0) {
      puVar8 = (uint *)(lVar26 + 0x30);
    }
    uVar10 = *puVar8;
    if (uVar10 == 0) {
      iVar2 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar2 = iVar22 + -1;
      }
      uVar18 = 0;
      uVar33 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar33 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar33 == uVar18) goto LAB_142ab77f6;
        iVar14 = iVar14 + 0x20;
        uVar10 = puVar8[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar33 = (ulonglong)(-uVar10 & uVar10);
    uVar30 = uVar33 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar2 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar2) {
      iVar2 = iVar22;
    }
  }
  if (iVar2 != iVar22) {
    uVar10 = 0xffffffff;
    do {
      uStack_e0 = &local_88;
      local_d8 = &local_1c8;
      local_e8 = (double)(lVar26 + 0x20);
      (*(code *)(&PTR_FUN_149fab0a0)
                [*(uint *)(*(longlong *)(*(longlong *)(lVar26 + 0x20) + 8 + (longlong)iVar2 * 0x18)
                          + 8)])
                (*(undefined8 *)(*(longlong *)(lVar26 + 0x20) + (longlong)iVar2 * 0x18),&local_e8);
      uVar10 = ~(uint)uVar33 & uVar10;
      puVar8 = *(uint **)(lVar26 + 0x40);
      if (*(uint **)(lVar26 + 0x40) == (uint *)0x0) {
        puVar8 = (uint *)(lVar26 + 0x30);
      }
      iVar15 = *(int *)(lVar26 + 0x48);
      iVar2 = (int)uVar18;
      lVar11 = (longlong)iVar2;
      uVar24 = puVar8[lVar11] & uVar10;
      if (uVar24 == 0) {
        iVar16 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar16 = iVar15 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar17 = iVar16;
        if (iVar16 < iVar2) {
          iVar17 = iVar2;
        }
        if (iVar2 < iVar16) {
          lVar28 = 0;
          do {
            uVar24 = puVar8[lVar11 + lVar28 + 1];
            if (uVar24 != 0) {
              uVar18 = (ulonglong)(iVar2 + (int)lVar28 + 1);
              uVar10 = 0xffffffff;
              goto LAB_142ab77a7;
            }
            iVar14 = iVar14 + 0x20;
            lVar28 = lVar28 + 1;
          } while (iVar17 - lVar11 != lVar28);
          uVar10 = 0xffffffff;
          lVar11 = (longlong)iVar17;
        }
        uVar18 = lVar11 + 1U & 0xffffffff;
        iVar2 = iVar15;
      }
      else {
LAB_142ab77a7:
        uVar33 = (ulonglong)(-uVar24 & uVar24);
        uVar30 = uVar33 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar2 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar2) {
          iVar2 = iVar15;
        }
      }
    } while (iVar2 != iVar22);
  }
LAB_142ab77f6:
  lVar26 = *(longlong *)(local_f0[10] + 0x80);
  if (lVar26 == 0) {
    lVar26 = local_f0[10];
  }
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = (longlong *)0x0;
  uStack_1e0 = 0;
  iVar22 = *(int *)(lVar26 + 0x48);
  if (iVar22 == 0) {
    uVar18 = 1;
    uVar33 = 0;
    iVar14 = 0;
    iVar2 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar26 + 0x40);
    if (*(uint **)(lVar26 + 0x40) == (uint *)0x0) {
      puVar8 = (uint *)(lVar26 + 0x30);
    }
    uVar10 = *puVar8;
    if (uVar10 == 0) {
      iVar2 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar2 = iVar22 + -1;
      }
      uVar33 = 0;
      uVar18 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar18 = uVar33;
      }
      iVar14 = 0;
      do {
        if (uVar18 == uVar33) goto LAB_142ab78aa;
        iVar14 = iVar14 + 0x20;
        uVar10 = puVar8[uVar33 + 1];
        uVar33 = uVar33 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar33 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar10 & uVar10);
    uVar30 = uVar18 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar2 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar2) {
      iVar2 = iVar22;
    }
  }
  if (iVar2 != iVar22) {
    uVar10 = 0xffffffff;
    do {
      uStack_e0 = &local_1d8;
      local_d8 = &local_1e8;
      local_e8 = (double)(lVar26 + 0x20);
      (*(code *)(&PTR_FUN_149fab0e0)
                [*(uint *)(*(longlong *)(*(longlong *)(lVar26 + 0x20) + 8 + (longlong)iVar2 * 0x18)
                          + 8)])
                (*(undefined8 *)(*(longlong *)(lVar26 + 0x20) + (longlong)iVar2 * 0x18),&local_e8);
      uVar10 = ~(uint)uVar18 & uVar10;
      puVar8 = *(uint **)(lVar26 + 0x40);
      if (*(uint **)(lVar26 + 0x40) == (uint *)0x0) {
        puVar8 = (uint *)(lVar26 + 0x30);
      }
      iVar15 = *(int *)(lVar26 + 0x48);
      iVar2 = (int)uVar33;
      lVar11 = (longlong)iVar2;
      uVar24 = puVar8[lVar11] & uVar10;
      if (uVar24 == 0) {
        iVar16 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar16 = iVar15 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar17 = iVar16;
        if (iVar16 < iVar2) {
          iVar17 = iVar2;
        }
        if (iVar2 < iVar16) {
          lVar28 = 0;
          do {
            uVar24 = puVar8[lVar11 + lVar28 + 1];
            if (uVar24 != 0) {
              uVar33 = (ulonglong)(iVar2 + (int)lVar28 + 1);
              uVar10 = 0xffffffff;
              goto LAB_142ab7eb9;
            }
            iVar14 = iVar14 + 0x20;
            lVar28 = lVar28 + 1;
          } while (iVar17 - lVar11 != lVar28);
          uVar10 = 0xffffffff;
          lVar11 = (longlong)iVar17;
        }
        uVar33 = lVar11 + 1U & 0xffffffff;
        iVar2 = iVar15;
      }
      else {
LAB_142ab7eb9:
        uVar18 = (ulonglong)(-uVar24 & uVar24);
        uVar30 = uVar18 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar2 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar2) {
          iVar2 = iVar15;
        }
      }
    } while (iVar2 != iVar22);
  }
LAB_142ab78aa:
  dVar23 = local_288;
  plVar5 = local_248;
  lVar26 = local_280;
  if (*(char *)(local_280 + 3) == '\0') {
    local_1e9 = '\0';
    local_e8 = 0.0;
    uStack_e0 = (longlong *)0x0;
    if (0 < (int)uStack_80) {
      (**(code **)(**(longlong **)((longlong)local_288 + 0x208) + 200))();
    }
    (**(code **)(**(longlong **)((longlong)dVar23 + 0x208) + 0xd8))
              (*(longlong **)((longlong)dVar23 + 0x208),uStack_1d0 & 0xffffffff);
    if (0 < (int)local_278) {
      local_240 = (longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
      iVar22 = 0;
      do {
        plVar5 = TlsGetValue(DAT_14c896140);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar5 = 0;
          plVar5[1] = 0;
          *(undefined4 *)(plVar5 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar5);
        }
        plVar27 = (longlong *)plVar5[1];
        if (plVar27 == (longlong *)0x0) {
          plVar27 = (longlong *)*plVar5;
          if (plVar27 == (longlong *)0x0) {
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
            while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
              local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
              if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
              uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
              local_a0 = local_a0 & 0xfffffffffc000000 |
                         (ulonglong)
                         *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18
                                  );
              LOCK();
              bVar35 = local_98 == DAT_14c896180;
              uVar18 = local_a0;
              if (!bVar35) {
                uVar18 = DAT_14c896180;
              }
              DAT_14c896180 = uVar18;
              UNLOCK();
              if (bVar35) {
                *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) =
                     0;
                plVar27 = *(longlong **)
                           (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                           (ulonglong)(uVar10 & 0x3fff) * 0x18);
                FUN_1447d080c(uVar10 & 0x3ffffff);
                plVar5[1] = (longlong)plVar27;
                dVar23 = local_288;
                if (plVar27 == (longlong *)0x0) goto LAB_142ab7b27;
                goto LAB_142ab7b62;
              }
              uVar10 = (uint)DAT_14c896180;
              uVar18 = DAT_14c896180;
            }
            plVar5[1] = 0;
LAB_142ab7b27:
            dVar23 = local_288;
            puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar5[1] = (longlong)puVar7;
            iVar2 = 0xff;
            do {
              puVar6 = puVar7 + 0x20;
              *puVar7 = puVar6;
              iVar2 = iVar2 + -1;
              puVar7 = puVar6;
            } while (iVar2 != 0);
            *puVar6 = 0;
            plVar27 = (longlong *)plVar5[1];
          }
          else {
            plVar5[1] = (longlong)plVar27;
            *plVar5 = 0;
          }
LAB_142ab7b62:
          *(undefined4 *)(plVar5 + 2) = 0x100;
          iVar2 = 0x100;
        }
        else {
          iVar2 = (int)plVar5[2];
        }
        plVar5[1] = *plVar27;
        *(int *)(plVar5 + 2) = iVar2 + -1;
        *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar27[1] = (longlong)&DAT_100000002;
        plVar27[2] = 0;
        *(undefined4 *)(plVar27 + 3) = 0;
        *(undefined4 *)(plVar27 + 4) = 0xffffffff;
        plVar27[6] = 0;
        plVar27[7] = 0x100000000;
        *(undefined1 *)(plVar27 + 8) = 1;
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar27[0xf] = 0;
        plVar27[0x10] = -0x17ffffffffffffe0;
        plVar27[0x12] = 0;
        plVar27[0x13] = 0x100000000;
        *(undefined2 *)(plVar27 + 0x14) = 0;
        LOCK();
        bVar35 = (char)plVar27[8] == '\x01';
        if (bVar35) {
          *(char *)(plVar27 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar35) {
          FUN_14008cdb0(plVar27 + 8);
        }
        *plVar27 = (longlong)&PTR_FUN_149fab130;
        iVar2 = (int)local_278;
        if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
        }
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar27[9] = (longlong)plVar27;
        plVar27[10] = (longlong)plVar27;
        if (*local_240 == 0) {
          lVar26 = 0;
        }
        else {
          lVar26 = *(longlong *)(*local_240 + 0x30);
        }
        plVar27[0xf] = lVar26;
        plVar27[0x10] = -0x37ffffad81559a00;
        *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
        *(int *)(plVar27 + 0x15) = iVar22;
        *(char *)((longlong)plVar27 + 0xac) = (char)local_270;
        *(undefined2 *)((longlong)plVar27 + 0xad) = (undefined2)local_98;
        *(undefined1 *)((longlong)plVar27 + 0xaf) = local_98._2_1_;
        plVar27[0x16] = (longlong)dVar23;
        plVar27[0x17] = (longlong)&local_158;
        plVar27[0x18] = (longlong)&local_118;
        plVar27[0x19] = (longlong)&local_f0;
        plVar27[0x1a] = local_280;
        *plVar27 = (longlong)&PTR_FUN_149fab120;
        local_a0 = CONCAT71(local_a0._1_7_,1);
        FUN_1447439e4(plVar27);
        lVar26 = (longlong)(int)uStack_e0;
        uVar10 = (int)uStack_e0 + 1;
        uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
        if (uStack_e0._4_4_ < uVar10) {
          FUN_146c54922(&local_e8);
        }
        *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
        iVar22 = iVar22 + 1;
        dVar23 = local_288;
      } while (iVar22 != iVar2);
    }
    if (local_170 != 0) {
      plVar5 = TlsGetValue(DAT_14c896140);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar5);
      }
      plVar27 = (longlong *)plVar5[1];
      if (plVar27 == (longlong *)0x0) {
        plVar27 = (longlong *)*plVar5;
        if (plVar27 == (longlong *)0x0) {
          uVar10 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
          while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
            local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
            if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
            uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
            local_a0 = local_a0 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18);
            LOCK();
            bVar35 = local_98 == DAT_14c896180;
            uVar18 = local_a0;
            if (!bVar35) {
              uVar18 = DAT_14c896180;
            }
            DAT_14c896180 = uVar18;
            UNLOCK();
            if (bVar35) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) = 0
              ;
              plVar27 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                         (ulonglong)(uVar10 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar10 & 0x3ffffff);
              plVar5[1] = (longlong)plVar27;
              dVar23 = local_288;
              if (plVar27 == (longlong *)0x0) goto LAB_142ab8156;
              goto LAB_142ab8191;
            }
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
          }
          plVar5[1] = 0;
LAB_142ab8156:
          dVar23 = local_288;
          puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar5[1] = (longlong)puVar7;
          iVar22 = 0xff;
          do {
            puVar6 = puVar7 + 0x20;
            *puVar7 = puVar6;
            iVar22 = iVar22 + -1;
            puVar7 = puVar6;
          } while (iVar22 != 0);
          *puVar6 = 0;
          plVar27 = (longlong *)plVar5[1];
        }
        else {
          plVar5[1] = (longlong)plVar27;
          *plVar5 = 0;
        }
LAB_142ab8191:
        *(undefined4 *)(plVar5 + 2) = 0x100;
        iVar22 = 0x100;
      }
      else {
        iVar22 = (int)plVar5[2];
      }
      plVar5[1] = *plVar27;
      *(int *)(plVar5 + 2) = iVar22 + -1;
      *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar27[1] = (longlong)&DAT_100000002;
      plVar27[2] = 0;
      *(undefined4 *)(plVar27 + 3) = 0;
      *(undefined4 *)(plVar27 + 4) = 0xffffffff;
      plVar27[6] = 0;
      plVar27[7] = 0x100000000;
      *(undefined1 *)(plVar27 + 8) = 1;
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar27[0xf] = 0;
      plVar27[0x10] = -0x17ffffffffffffe0;
      plVar27[0x12] = 0;
      plVar27[0x13] = 0x100000000;
      *(undefined2 *)(plVar27 + 0x14) = 0;
      LOCK();
      bVar35 = (char)plVar27[8] == '\x01';
      if (bVar35) {
        *(char *)(plVar27 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(plVar27 + 8);
      }
      *plVar27 = (longlong)&PTR_FUN_149fab150;
      if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
      }
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar27[9] = (longlong)plVar27;
      plVar27[10] = (longlong)plVar27;
      lVar26 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar26 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(longlong *)(lVar26 + 0x30);
      }
      plVar27[0xf] = lVar26;
      plVar27[0x10] = -0x37ffffad81557680;
      *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
      plVar27[0x15] = (longlong)&local_170;
      plVar27[0x16] = (longlong)dVar23;
      plVar27[0x17] = (longlong)&local_158;
      plVar27[0x18] = (longlong)local_120;
      *plVar27 = (longlong)&PTR_FUN_149fab140;
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_1447439e4(plVar27);
      plVar5 = uStack_e0;
      lVar26 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_146c54922(&local_e8,(ulonglong)plVar5 & 0xffffffff);
      }
      *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
      dVar23 = local_288;
    }
    if (local_178 != 0) {
      plVar5 = TlsGetValue(DAT_14c896140);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar5);
      }
      plVar27 = (longlong *)plVar5[1];
      if (plVar27 == (longlong *)0x0) {
        plVar27 = (longlong *)*plVar5;
        if (plVar27 == (longlong *)0x0) {
          uVar10 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
          while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
            local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
            if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
            uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
            local_a0 = local_a0 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18);
            LOCK();
            bVar35 = local_98 == DAT_14c896180;
            uVar18 = local_a0;
            if (!bVar35) {
              uVar18 = DAT_14c896180;
            }
            DAT_14c896180 = uVar18;
            UNLOCK();
            if (bVar35) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) = 0
              ;
              plVar27 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                         (ulonglong)(uVar10 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar10 & 0x3ffffff);
              plVar5[1] = (longlong)plVar27;
              dVar23 = local_288;
              if (plVar27 == (longlong *)0x0) goto LAB_142ab8536;
              goto LAB_142ab8571;
            }
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
          }
          plVar5[1] = 0;
LAB_142ab8536:
          dVar23 = local_288;
          puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar5[1] = (longlong)puVar7;
          iVar22 = 0xff;
          do {
            puVar6 = puVar7 + 0x20;
            *puVar7 = puVar6;
            iVar22 = iVar22 + -1;
            puVar7 = puVar6;
          } while (iVar22 != 0);
          *puVar6 = 0;
          plVar27 = (longlong *)plVar5[1];
        }
        else {
          plVar5[1] = (longlong)plVar27;
          *plVar5 = 0;
        }
LAB_142ab8571:
        *(undefined4 *)(plVar5 + 2) = 0x100;
        iVar22 = 0x100;
      }
      else {
        iVar22 = (int)plVar5[2];
      }
      plVar5[1] = *plVar27;
      *(int *)(plVar5 + 2) = iVar22 + -1;
      *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar27[1] = (longlong)&DAT_100000002;
      plVar27[2] = 0;
      *(undefined4 *)(plVar27 + 3) = 0;
      *(undefined4 *)(plVar27 + 4) = 0xffffffff;
      plVar27[6] = 0;
      plVar27[7] = 0x100000000;
      *(undefined1 *)(plVar27 + 8) = 1;
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar27[0xf] = 0;
      plVar27[0x10] = -0x17ffffffffffffe0;
      plVar27[0x12] = 0;
      plVar27[0x13] = 0x100000000;
      *(undefined2 *)(plVar27 + 0x14) = 0;
      LOCK();
      bVar35 = (char)plVar27[8] == '\x01';
      if (bVar35) {
        *(char *)(plVar27 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(plVar27 + 8);
      }
      *plVar27 = (longlong)&PTR_FUN_149fab170;
      if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
      }
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar27[9] = (longlong)plVar27;
      plVar27[10] = (longlong)plVar27;
      lVar26 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar26 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(longlong *)(lVar26 + 0x30);
      }
      plVar27[0xf] = lVar26;
      plVar27[0x10] = -0x37ffffad81555300;
      *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
      plVar27[0x15] = (longlong)&local_178;
      plVar27[0x16] = (longlong)dVar23;
      plVar27[0x17] = (longlong)&local_158;
      plVar27[0x18] = (longlong)&local_128;
      *plVar27 = (longlong)&PTR_FUN_149fab160;
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_1447439e4(plVar27);
      plVar5 = uStack_e0;
      lVar26 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_146c54922(&local_e8,(ulonglong)plVar5 & 0xffffffff);
      }
      *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
      dVar23 = local_288;
    }
    if (local_180 != 0) {
      plVar5 = TlsGetValue(DAT_14c896140);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar5);
      }
      plVar27 = (longlong *)plVar5[1];
      if (plVar27 == (longlong *)0x0) {
        plVar27 = (longlong *)*plVar5;
        if (plVar27 == (longlong *)0x0) {
          uVar10 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
          while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
            local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
            if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
            uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
            local_a0 = local_a0 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18);
            LOCK();
            bVar35 = local_98 == DAT_14c896180;
            uVar18 = local_a0;
            if (!bVar35) {
              uVar18 = DAT_14c896180;
            }
            DAT_14c896180 = uVar18;
            UNLOCK();
            if (bVar35) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) = 0
              ;
              plVar27 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                         (ulonglong)(uVar10 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar10 & 0x3ffffff);
              plVar5[1] = (longlong)plVar27;
              dVar23 = local_288;
              if (plVar27 == (longlong *)0x0) goto LAB_142ab8916;
              goto LAB_142ab8951;
            }
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
          }
          plVar5[1] = 0;
LAB_142ab8916:
          dVar23 = local_288;
          puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar5[1] = (longlong)puVar7;
          iVar22 = 0xff;
          do {
            puVar6 = puVar7 + 0x20;
            *puVar7 = puVar6;
            iVar22 = iVar22 + -1;
            puVar7 = puVar6;
          } while (iVar22 != 0);
          *puVar6 = 0;
          plVar27 = (longlong *)plVar5[1];
        }
        else {
          plVar5[1] = (longlong)plVar27;
          *plVar5 = 0;
        }
LAB_142ab8951:
        *(undefined4 *)(plVar5 + 2) = 0x100;
        iVar22 = 0x100;
      }
      else {
        iVar22 = (int)plVar5[2];
      }
      plVar5[1] = *plVar27;
      *(int *)(plVar5 + 2) = iVar22 + -1;
      *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar27[1] = (longlong)&DAT_100000002;
      plVar27[2] = 0;
      *(undefined4 *)(plVar27 + 3) = 0;
      *(undefined4 *)(plVar27 + 4) = 0xffffffff;
      plVar27[6] = 0;
      plVar27[7] = 0x100000000;
      *(undefined1 *)(plVar27 + 8) = 1;
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar27[0xf] = 0;
      plVar27[0x10] = -0x17ffffffffffffe0;
      plVar27[0x12] = 0;
      plVar27[0x13] = 0x100000000;
      *(undefined2 *)(plVar27 + 0x14) = 0;
      LOCK();
      bVar35 = (char)plVar27[8] == '\x01';
      if (bVar35) {
        *(char *)(plVar27 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(plVar27 + 8);
      }
      *plVar27 = (longlong)&PTR_FUN_149fab190;
      if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
      }
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar27[9] = (longlong)plVar27;
      plVar27[10] = (longlong)plVar27;
      lVar26 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar26 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(longlong *)(lVar26 + 0x30);
      }
      plVar27[0xf] = lVar26;
      plVar27[0x10] = -0x37ffffad81552f80;
      *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
      plVar27[0x15] = (longlong)&local_180;
      plVar27[0x16] = (longlong)dVar23;
      plVar27[0x17] = (longlong)&local_158;
      plVar27[0x18] = (longlong)local_120;
      plVar27[0x19] = (longlong)&local_128;
      plVar27[0x1a] = (longlong)&local_130;
      *plVar27 = (longlong)&PTR_FUN_149fab180;
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_1447439e4(plVar27);
      plVar5 = uStack_e0;
      lVar26 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_146c54922(&local_e8,(ulonglong)plVar5 & 0xffffffff);
      }
      *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
      dVar23 = local_288;
    }
    if (local_168 != 0) {
      plVar5 = TlsGetValue(DAT_14c896140);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar5);
      }
      plVar27 = (longlong *)plVar5[1];
      if (plVar27 == (longlong *)0x0) {
        plVar27 = (longlong *)*plVar5;
        if (plVar27 == (longlong *)0x0) {
          uVar10 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
          while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
            local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
            if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
            uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
            local_a0 = local_a0 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18);
            LOCK();
            bVar35 = local_98 == DAT_14c896180;
            uVar18 = local_a0;
            if (!bVar35) {
              uVar18 = DAT_14c896180;
            }
            DAT_14c896180 = uVar18;
            UNLOCK();
            if (bVar35) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) = 0
              ;
              plVar27 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                         (ulonglong)(uVar10 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar10 & 0x3ffffff);
              plVar5[1] = (longlong)plVar27;
              dVar23 = local_288;
              if (plVar27 == (longlong *)0x0) goto LAB_142ab8d16;
              goto LAB_142ab8d51;
            }
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
          }
          plVar5[1] = 0;
LAB_142ab8d16:
          dVar23 = local_288;
          puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar5[1] = (longlong)puVar7;
          iVar22 = 0xff;
          do {
            puVar6 = puVar7 + 0x20;
            *puVar7 = puVar6;
            iVar22 = iVar22 + -1;
            puVar7 = puVar6;
          } while (iVar22 != 0);
          *puVar6 = 0;
          plVar27 = (longlong *)plVar5[1];
        }
        else {
          plVar5[1] = (longlong)plVar27;
          *plVar5 = 0;
        }
LAB_142ab8d51:
        *(undefined4 *)(plVar5 + 2) = 0x100;
        iVar22 = 0x100;
      }
      else {
        iVar22 = (int)plVar5[2];
      }
      plVar5[1] = *plVar27;
      *(int *)(plVar5 + 2) = iVar22 + -1;
      *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar27[1] = (longlong)&DAT_100000002;
      plVar27[2] = 0;
      *(undefined4 *)(plVar27 + 3) = 0;
      *(undefined4 *)(plVar27 + 4) = 0xffffffff;
      plVar27[6] = 0;
      plVar27[7] = 0x100000000;
      *(undefined1 *)(plVar27 + 8) = 1;
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar27[0xf] = 0;
      plVar27[0x10] = -0x17ffffffffffffe0;
      plVar27[0x12] = 0;
      plVar27[0x13] = 0x100000000;
      *(undefined2 *)(plVar27 + 0x14) = 0;
      LOCK();
      bVar35 = (char)plVar27[8] == '\x01';
      if (bVar35) {
        *(char *)(plVar27 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(plVar27 + 8);
      }
      lVar26 = local_280;
      *plVar27 = (longlong)&PTR_FUN_149fab1b0;
      if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
      }
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar27[9] = (longlong)plVar27;
      plVar27[10] = (longlong)plVar27;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x30);
      }
      plVar27[0xf] = lVar11;
      plVar27[0x10] = -0x37ffffad81550c00;
      *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
      plVar27[0x15] = (longlong)&local_138;
      plVar27[0x16] = (longlong)&local_168;
      plVar27[0x17] = (longlong)dVar23;
      plVar27[0x18] = (longlong)&local_158;
      plVar27[0x19] = lVar26;
      plVar27[0x1a] = (longlong)&local_1e9;
      *plVar27 = (longlong)&PTR_FUN_149fab1a0;
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_1447439e4(plVar27);
      plVar5 = uStack_e0;
      lVar26 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_146c54922(&local_e8,(ulonglong)plVar5 & 0xffffffff);
      }
      *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
      dVar23 = local_288;
    }
    if (local_188 != 0) {
      plVar5 = TlsGetValue(DAT_14c896140);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar5);
      }
      plVar27 = (longlong *)plVar5[1];
      if (plVar27 == (longlong *)0x0) {
        plVar27 = (longlong *)*plVar5;
        if (plVar27 == (longlong *)0x0) {
          uVar10 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
          while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
            local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
            if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
            uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
            local_a0 = local_a0 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18);
            LOCK();
            bVar35 = local_98 == DAT_14c896180;
            uVar18 = local_a0;
            if (!bVar35) {
              uVar18 = DAT_14c896180;
            }
            DAT_14c896180 = uVar18;
            UNLOCK();
            if (bVar35) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) = 0
              ;
              plVar27 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                         (ulonglong)(uVar10 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar10 & 0x3ffffff);
              plVar5[1] = (longlong)plVar27;
              dVar23 = local_288;
              if (plVar27 == (longlong *)0x0) goto LAB_142ab9113;
              goto LAB_142ab914e;
            }
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
          }
          plVar5[1] = 0;
LAB_142ab9113:
          dVar23 = local_288;
          puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar5[1] = (longlong)puVar7;
          iVar22 = 0xff;
          do {
            puVar6 = puVar7 + 0x20;
            *puVar7 = puVar6;
            iVar22 = iVar22 + -1;
            puVar7 = puVar6;
          } while (iVar22 != 0);
          *puVar6 = 0;
          plVar27 = (longlong *)plVar5[1];
        }
        else {
          plVar5[1] = (longlong)plVar27;
          *plVar5 = 0;
        }
LAB_142ab914e:
        *(undefined4 *)(plVar5 + 2) = 0x100;
        iVar22 = 0x100;
      }
      else {
        iVar22 = (int)plVar5[2];
      }
      plVar5[1] = *plVar27;
      *(int *)(plVar5 + 2) = iVar22 + -1;
      *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar27[1] = (longlong)&DAT_100000002;
      plVar27[2] = 0;
      *(undefined4 *)(plVar27 + 3) = 0;
      *(undefined4 *)(plVar27 + 4) = 0xffffffff;
      plVar27[6] = 0;
      plVar27[7] = 0x100000000;
      *(undefined1 *)(plVar27 + 8) = 1;
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar27[0xf] = 0;
      plVar27[0x10] = -0x17ffffffffffffe0;
      plVar27[0x12] = 0;
      plVar27[0x13] = 0x100000000;
      *(undefined2 *)(plVar27 + 0x14) = 0;
      LOCK();
      bVar35 = (char)plVar27[8] == '\x01';
      if (bVar35) {
        *(char *)(plVar27 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(plVar27 + 8);
      }
      lVar26 = local_280;
      *plVar27 = (longlong)&PTR_FUN_149fab1d0;
      if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
      }
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar27[9] = (longlong)plVar27;
      plVar27[10] = (longlong)plVar27;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x30);
      }
      plVar27[0xf] = lVar11;
      plVar27[0x10] = -0x37ffffad8154e880;
      *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
      plVar27[0x15] = (longlong)dVar23;
      plVar27[0x16] = (longlong)&local_158;
      plVar27[0x17] = lVar26;
      plVar27[0x18] = (longlong)&local_188;
      *plVar27 = (longlong)&PTR_FUN_149fab1c0;
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_1447439e4(plVar27);
      plVar5 = uStack_e0;
      lVar26 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_146c54922(&local_e8,(ulonglong)plVar5 & 0xffffffff);
      }
      *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
      dVar23 = local_288;
    }
    if ((longlong)(int)uStack_1b0 != 0) {
      puVar21 = local_1b8 + (longlong)(int)uStack_1b0 * 2;
      local_278 = (longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
      puVar19 = local_1b8;
      do {
        local_98 = *puVar19;
        uStack_90 = puVar19[1];
        plVar5 = TlsGetValue(DAT_14c896140);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar5 = 0;
          plVar5[1] = 0;
          *(undefined4 *)(plVar5 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar5);
        }
        plVar27 = (longlong *)plVar5[1];
        if (plVar27 == (longlong *)0x0) {
          plVar27 = (longlong *)*plVar5;
          if (plVar27 == (longlong *)0x0) {
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
            while (DAT_14c896180 = uVar18, local_a0 = uVar18, (uVar18 & 0x3ffffff) != 0) {
              local_268 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
              if (local_268 >> 0x1a < uVar18 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
              uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
              local_268 = local_268 & 0xfffffffffc000000 |
                          (ulonglong)
                          *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 +
                                   uVar30 * 0x18);
              LOCK();
              bVar35 = local_a0 == DAT_14c896180;
              uVar18 = local_268;
              if (!bVar35) {
                uVar18 = DAT_14c896180;
              }
              DAT_14c896180 = uVar18;
              UNLOCK();
              if (bVar35) {
                *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) =
                     0;
                plVar27 = *(longlong **)
                           (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                           (ulonglong)(uVar10 & 0x3fff) * 0x18);
                FUN_1447d080c(uVar10 & 0x3ffffff);
                plVar5[1] = (longlong)plVar27;
                dVar23 = local_288;
                if (plVar27 == (longlong *)0x0) goto LAB_142ab9557;
                goto LAB_142ab9592;
              }
              uVar10 = (uint)DAT_14c896180;
              uVar18 = DAT_14c896180;
            }
            plVar5[1] = 0;
LAB_142ab9557:
            dVar23 = local_288;
            puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar5[1] = (longlong)puVar7;
            iVar22 = 0xff;
            do {
              puVar6 = puVar7 + 0x20;
              *puVar7 = puVar6;
              iVar22 = iVar22 + -1;
              puVar7 = puVar6;
            } while (iVar22 != 0);
            *puVar6 = 0;
            plVar27 = (longlong *)plVar5[1];
          }
          else {
            plVar5[1] = (longlong)plVar27;
            *plVar5 = 0;
          }
LAB_142ab9592:
          *(undefined4 *)(plVar5 + 2) = 0x100;
          iVar22 = 0x100;
        }
        else {
          iVar22 = (int)plVar5[2];
        }
        plVar5[1] = *plVar27;
        *(int *)(plVar5 + 2) = iVar22 + -1;
        *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar27[1] = (longlong)&DAT_100000002;
        plVar27[2] = 0;
        *(undefined4 *)(plVar27 + 3) = 0;
        *(undefined4 *)(plVar27 + 4) = 0xffffffff;
        plVar27[6] = 0;
        plVar27[7] = 0x100000000;
        *(undefined1 *)(plVar27 + 8) = 1;
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar27[0xf] = 0;
        plVar27[0x10] = -0x17ffffffffffffe0;
        plVar27[0x12] = 0;
        plVar27[0x13] = 0x100000000;
        *(undefined2 *)(plVar27 + 0x14) = 0;
        LOCK();
        bVar35 = (char)plVar27[8] == '\x01';
        if (bVar35) {
          *(char *)(plVar27 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar35) {
          FUN_14008cdb0(plVar27 + 8);
        }
        *plVar27 = (longlong)&PTR_FUN_149fab1f0;
        if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
        }
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar27[9] = (longlong)plVar27;
        plVar27[10] = (longlong)plVar27;
        if (*local_278 == 0) {
          lVar26 = 0;
        }
        else {
          lVar26 = *(longlong *)(*local_278 + 0x30);
        }
        plVar27[0xf] = lVar26;
        plVar27[0x10] = -0x37ffffad8154c500;
        *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
        *(undefined4 *)(plVar27 + 0x15) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar27 + 0xac) = local_98._4_4_;
        *(undefined4 *)(plVar27 + 0x16) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)plVar27 + 0xb4) = uStack_90._4_4_;
        plVar27[0x17] = (longlong)dVar23;
        plVar27[0x18] = local_280;
        *plVar27 = (longlong)&PTR_FUN_149fab1e0;
        local_a0 = CONCAT71(local_a0._1_7_,1);
        FUN_1447439e4(plVar27);
        lVar26 = (longlong)(int)uStack_e0;
        uVar10 = (int)uStack_e0 + 1;
        uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
        if (uStack_e0._4_4_ < uVar10) {
          FUN_146c54922(&local_e8);
        }
        *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
        puVar19 = puVar19 + 2;
        dVar23 = local_288;
      } while (puVar19 != puVar21);
    }
    if (local_190 != 0) {
      plVar5 = TlsGetValue(DAT_14c896140);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar5);
      }
      plVar27 = (longlong *)plVar5[1];
      if (plVar27 == (longlong *)0x0) {
        plVar27 = (longlong *)*plVar5;
        if (plVar27 == (longlong *)0x0) {
          uVar10 = (uint)DAT_14c896180;
          uVar18 = DAT_14c896180;
          while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
            local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
            if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
            uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
            local_a0 = local_a0 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18);
            LOCK();
            bVar35 = local_98 == DAT_14c896180;
            uVar18 = local_a0;
            if (!bVar35) {
              uVar18 = DAT_14c896180;
            }
            DAT_14c896180 = uVar18;
            UNLOCK();
            if (bVar35) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) = 0
              ;
              plVar27 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                         (ulonglong)(uVar10 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar10 & 0x3ffffff);
              plVar5[1] = (longlong)plVar27;
              if (plVar27 == (longlong *)0x0) goto LAB_142ab993d;
              goto LAB_142ab9978;
            }
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
          }
          plVar5[1] = 0;
LAB_142ab993d:
          puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar5[1] = (longlong)puVar7;
          iVar22 = 0xff;
          do {
            puVar6 = puVar7 + 0x20;
            *puVar7 = puVar6;
            iVar22 = iVar22 + -1;
            puVar7 = puVar6;
          } while (iVar22 != 0);
          *puVar6 = 0;
          plVar27 = (longlong *)plVar5[1];
        }
        else {
          plVar5[1] = (longlong)plVar27;
          *plVar5 = 0;
        }
LAB_142ab9978:
        *(undefined4 *)(plVar5 + 2) = 0x100;
        iVar22 = 0x100;
      }
      else {
        iVar22 = (int)plVar5[2];
      }
      plVar5[1] = *plVar27;
      *(int *)(plVar5 + 2) = iVar22 + -1;
      *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar27[1] = (longlong)&DAT_100000002;
      plVar27[2] = 0;
      *(undefined4 *)(plVar27 + 3) = 0;
      *(undefined4 *)(plVar27 + 4) = 0xffffffff;
      plVar27[6] = 0;
      plVar27[7] = 0x100000000;
      *(undefined1 *)(plVar27 + 8) = 1;
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar27[0xf] = 0;
      plVar27[0x10] = -0x17ffffffffffffe0;
      plVar27[0x12] = 0;
      plVar27[0x13] = 0x100000000;
      *(undefined2 *)(plVar27 + 0x14) = 0;
      LOCK();
      bVar35 = (char)plVar27[8] == '\x01';
      if (bVar35) {
        *(char *)(plVar27 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar35) {
        FUN_14008cdb0(plVar27 + 8);
      }
      *plVar27 = (longlong)&PTR_FUN_149fab210;
      if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
      }
      plVar27[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar27[9] = (longlong)plVar27;
      plVar27[10] = (longlong)plVar27;
      lVar26 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar26 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(longlong *)(lVar26 + 0x30);
      }
      plVar27[0xf] = lVar26;
      plVar27[0x10] = -0x37ffffad8154a180;
      *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
      plVar27[0x15] = (longlong)&local_110;
      plVar27[0x16] = (longlong)&local_190;
      plVar27[0x17] = (longlong)&local_198;
      plVar27[0x18] = (longlong)&local_1a0;
      plVar27[0x19] = (longlong)&local_1a8;
      *plVar27 = (longlong)&PTR_FUN_149fab200;
      local_98 = CONCAT71(local_98._1_7_,1);
      FUN_1447439e4(plVar27);
      plVar5 = uStack_e0;
      lVar26 = (longlong)(int)uStack_e0;
      uVar10 = (int)uStack_e0 + 1;
      uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
      if (uStack_e0._4_4_ < uVar10) {
        FUN_146c54922(&local_e8,(ulonglong)plVar5 & 0xffffffff);
      }
      *(longlong **)((longlong)local_e8 + lVar26 * 8) = plVar27;
      dVar23 = local_288;
    }
    if (0 < (int)uStack_80) {
      lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar22 = 0;
      do {
        plVar5 = TlsGetValue(DAT_14c896140);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar5 = 0;
          plVar5[1] = 0;
          *(undefined4 *)(plVar5 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar5);
        }
        plVar27 = (longlong *)plVar5[1];
        if (plVar27 == (longlong *)0x0) {
          plVar27 = (longlong *)*plVar5;
          if (plVar27 == (longlong *)0x0) {
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
            while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
              local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
              if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
              uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
              local_a0 = local_a0 & 0xfffffffffc000000 |
                         (ulonglong)
                         *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18
                                  );
              LOCK();
              bVar35 = local_98 == DAT_14c896180;
              uVar18 = local_a0;
              if (!bVar35) {
                uVar18 = DAT_14c896180;
              }
              DAT_14c896180 = uVar18;
              UNLOCK();
              if (bVar35) {
                *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) =
                     0;
                plVar27 = *(longlong **)
                           (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                           (ulonglong)(uVar10 & 0x3fff) * 0x18);
                FUN_1447d080c(uVar10 & 0x3ffffff);
                plVar5[1] = (longlong)plVar27;
                dVar23 = local_288;
                if (plVar27 == (longlong *)0x0) goto LAB_142ab9d96;
                goto LAB_142ab9dd1;
              }
              uVar10 = (uint)DAT_14c896180;
              uVar18 = DAT_14c896180;
            }
            plVar5[1] = 0;
LAB_142ab9d96:
            dVar23 = local_288;
            puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar5[1] = (longlong)puVar7;
            iVar2 = 0xff;
            do {
              puVar6 = puVar7 + 0x20;
              *puVar7 = puVar6;
              iVar2 = iVar2 + -1;
              puVar7 = puVar6;
            } while (iVar2 != 0);
            *puVar6 = 0;
            plVar27 = (longlong *)plVar5[1];
          }
          else {
            plVar5[1] = (longlong)plVar27;
            *plVar5 = 0;
          }
LAB_142ab9dd1:
          *(undefined4 *)(plVar5 + 2) = 0x100;
          iVar2 = 0x100;
        }
        else {
          iVar2 = (int)plVar5[2];
        }
        plVar5[1] = *plVar27;
        *(int *)(plVar5 + 2) = iVar2 + -1;
        *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar27[1] = (longlong)&DAT_100000002;
        plVar27[2] = 0;
        *(undefined4 *)(plVar27 + 3) = 0;
        *(undefined4 *)(plVar27 + 4) = 0xffffffff;
        plVar27[6] = 0;
        plVar27[7] = 0x100000000;
        *(undefined1 *)(plVar27 + 8) = 1;
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar27[0xf] = 0;
        plVar27[0x10] = -0x17ffffffffffffe0;
        plVar27[0x12] = 0;
        plVar27[0x13] = 0x100000000;
        *(undefined2 *)(plVar27 + 0x14) = 0;
        LOCK();
        bVar35 = (char)plVar27[8] == '\x01';
        if (bVar35) {
          *(char *)(plVar27 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar35) {
          FUN_14008cdb0(plVar27 + 8);
        }
        *plVar27 = (longlong)&PTR_FUN_149fab230;
        if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
        }
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar27[9] = (longlong)plVar27;
        plVar27[10] = (longlong)plVar27;
        lVar11 = *(longlong *)(lVar26 + 0x2b8);
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(lVar11 + 0x30);
        }
        plVar27[0xf] = lVar11;
        plVar27[0x10] = -0x37ffffad81547e00;
        *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
        *(int *)(plVar27 + 0x15) = iVar22;
        plVar27[0x16] = (longlong)&local_88;
        plVar27[0x17] = (longlong)dVar23;
        plVar27[0x18] = (longlong)&local_1c8;
        plVar27[0x19] = local_280;
        *plVar27 = (longlong)&PTR_FUN_149fab220;
        local_98 = CONCAT71(local_98._1_7_,1);
        FUN_1447439e4(plVar27);
        lVar11 = (longlong)(int)uStack_e0;
        uVar10 = (int)uStack_e0 + 1;
        uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
        if (uStack_e0._4_4_ < uVar10) {
          FUN_146c54922(&local_e8);
        }
        *(longlong **)((longlong)local_e8 + lVar11 * 8) = plVar27;
        iVar22 = iVar22 + 1;
        dVar23 = local_288;
      } while (iVar22 < (int)uStack_80);
    }
    if (0 < (int)uStack_1d0) {
      lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar22 = 0;
      do {
        plVar5 = TlsGetValue(DAT_14c896140);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar5 = 0;
          plVar5[1] = 0;
          *(undefined4 *)(plVar5 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar5);
        }
        plVar27 = (longlong *)plVar5[1];
        if (plVar27 == (longlong *)0x0) {
          plVar27 = (longlong *)*plVar5;
          if (plVar27 == (longlong *)0x0) {
            uVar10 = (uint)DAT_14c896180;
            uVar18 = DAT_14c896180;
            while (DAT_14c896180 = uVar18, local_98 = uVar18, (uVar18 & 0x3ffffff) != 0) {
              local_a0 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
              if (local_a0 >> 0x1a < uVar18 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar33 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
              uVar30 = (ulonglong)((uint)uVar18 & 0x3fff);
              local_a0 = local_a0 & 0xfffffffffc000000 |
                         (ulonglong)
                         *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 0x10 + uVar30 * 0x18
                                  );
              LOCK();
              bVar35 = local_98 == DAT_14c896180;
              uVar18 = local_a0;
              if (!bVar35) {
                uVar18 = DAT_14c896180;
              }
              DAT_14c896180 = uVar18;
              UNLOCK();
              if (bVar35) {
                *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + uVar30 * 0x18 + 0x10) =
                     0;
                plVar27 = *(longlong **)
                           (*(longlong *)(&DAT_14c833b00 + uVar33 * 8) + 8 +
                           (ulonglong)(uVar10 & 0x3fff) * 0x18);
                FUN_1447d080c(uVar10 & 0x3ffffff);
                plVar5[1] = (longlong)plVar27;
                dVar23 = local_288;
                if (plVar27 == (longlong *)0x0) goto LAB_142aba1f7;
                goto LAB_142aba232;
              }
              uVar10 = (uint)DAT_14c896180;
              uVar18 = DAT_14c896180;
            }
            plVar5[1] = 0;
LAB_142aba1f7:
            dVar23 = local_288;
            puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar5[1] = (longlong)puVar7;
            iVar2 = 0xff;
            do {
              puVar6 = puVar7 + 0x20;
              *puVar7 = puVar6;
              iVar2 = iVar2 + -1;
              puVar7 = puVar6;
            } while (iVar2 != 0);
            *puVar6 = 0;
            plVar27 = (longlong *)plVar5[1];
          }
          else {
            plVar5[1] = (longlong)plVar27;
            *plVar5 = 0;
          }
LAB_142aba232:
          *(undefined4 *)(plVar5 + 2) = 0x100;
          iVar2 = 0x100;
        }
        else {
          iVar2 = (int)plVar5[2];
        }
        plVar5[1] = *plVar27;
        *(int *)(plVar5 + 2) = iVar2 + -1;
        *plVar27 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar27[1] = (longlong)&DAT_100000002;
        plVar27[2] = 0;
        *(undefined4 *)(plVar27 + 3) = 0;
        *(undefined4 *)(plVar27 + 4) = 0xffffffff;
        plVar27[6] = 0;
        plVar27[7] = 0x100000000;
        *(undefined1 *)(plVar27 + 8) = 1;
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar27[0xf] = 0;
        plVar27[0x10] = -0x17ffffffffffffe0;
        plVar27[0x12] = 0;
        plVar27[0x13] = 0x100000000;
        *(undefined2 *)(plVar27 + 0x14) = 0;
        LOCK();
        bVar35 = (char)plVar27[8] == '\x01';
        if (bVar35) {
          *(char *)(plVar27 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar35) {
          FUN_14008cdb0(plVar27 + 8);
        }
        *plVar27 = (longlong)&PTR_FUN_149fab250;
        if (*(code **)(plVar27[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar27[0xe] + 0x18))(plVar27 + 0xe,plVar27 + 9);
        }
        plVar27[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar27[9] = (longlong)plVar27;
        plVar27[10] = (longlong)plVar27;
        lVar11 = *(longlong *)(lVar26 + 0x2b8);
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(lVar11 + 0x30);
        }
        plVar27[0xf] = lVar11;
        plVar27[0x10] = -0x37ffffad81545a80;
        *(undefined4 *)((longlong)plVar27 + 0x1c) = 0;
        plVar27[0x15] = local_280;
        plVar27[0x16] = (longlong)&local_1d8;
        plVar27[0x17] = (longlong)&local_1e8;
        plVar27[0x18] = (longlong)dVar23;
        *(int *)(plVar27 + 0x19) = iVar22;
        *plVar27 = (longlong)&PTR_FUN_149fab240;
        local_98 = CONCAT71(local_98._1_7_,1);
        FUN_1447439e4(plVar27);
        lVar11 = (longlong)(int)uStack_e0;
        uVar10 = (int)uStack_e0 + 1;
        uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar10);
        if (uStack_e0._4_4_ < uVar10) {
          FUN_146c54922(&local_e8);
        }
        *(longlong **)((longlong)local_e8 + lVar11 * 8) = plVar27;
        iVar22 = iVar22 + 1;
        dVar23 = local_288;
      } while (iVar22 < (int)uStack_1d0);
    }
    FUN_142972845(&local_e8,0x7fffffffffffffff);
    plVar5 = local_248;
    lVar26 = local_280;
    if (((local_238 & 1) == 0) && (*(char *)(local_280 + 0x28) == '\x01')) {
      local_98 = 0;
      uStack_90 = 0;
      uVar10 = *(uint *)(local_280 + 0x20);
      if ((int)uVar10 < 1) {
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4();
        }
      }
      else {
        uStack_90 = (ulonglong)uVar10;
        FUN_1446f48e2(&local_98,0);
        iVar22 = *(int *)(lVar26 + 0x20);
        if (0 < (longlong)iVar22) {
          lVar11 = 0;
          do {
            *(undefined4 *)(local_98 + lVar11 * 4) = *(undefined4 *)(*plVar5 + lVar11 * 4);
            lVar11 = lVar11 + 1;
          } while (iVar22 != lVar11);
        }
      }
      FUN_146c3d64c(&local_98,local_288);
      dVar23 = local_288;
      if (local_98 != 0) {
        FUN_1400020a8();
        dVar23 = local_288;
      }
    }
    if (local_1e9 == '\0') {
      FUN_146c18122(*(undefined8 *)((longlong)dVar23 + 0x208));
    }
    FUN_14473400f(local_e8,(ulonglong)uStack_e0 & 0xffffffff);
    if (local_e8 != 0.0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(lVar26 + 2) == '\0') {
    *(undefined4 *)(lVar26 + 0x10) = 0;
    if (*(int *)(lVar26 + 0x14) != 0) {
      FUN_146f98482(local_260,0);
    }
    *(undefined4 *)(lVar26 + 0x20) = 0;
    if (*(int *)(lVar26 + 0x24) != 0) {
      FUN_146fb3220(plVar5);
    }
  }
  FUN_1402160b8(&local_e8);
  if (local_1e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
LAB_142ab69c8:
  if ((local_70 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abacee FUN_142abacee body=1163 status=ok
// SIG undefined FUN_142abacee(void)

void FUN_142abacee(longlong *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  float local_cc [6];
  float local_b4 [3];
  float local_a8;
  uint local_a4 [6];
  uint local_8c [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = *param_3;
  iVar1 = *param_2;
  uVar5 = iVar1 * 3 + 2;
  lVar12 = *(longlong *)(*param_1 + 0x78);
  uVar7 = (ulonglong)(uVar5 >> 9);
  uVar6 = (ulonglong)((uVar5 & 0x1ff) << 2);
  uVar5 = iVar1 * 3 + 1;
  uVar11 = (ulonglong)(uVar5 >> 9);
  uVar10 = (ulonglong)((uVar5 & 0x1ff) << 2);
  uVar13 = (ulonglong)((uint)(iVar1 * 3) >> 9);
  uVar4 = (ulonglong)((iVar1 * 3 & 0x1ffU) << 2);
  local_8c[0] = *(undefined4 *)(*(longlong *)(lVar12 + uVar13 * 8) + uVar4);
  local_8c[1] = *(undefined4 *)(*(longlong *)(lVar12 + uVar11 * 8) + uVar10);
  local_8c[2] = *(undefined4 *)(*(longlong *)(lVar12 + uVar7 * 8) + uVar6);
  lVar12 = *(longlong *)(param_1[1] + 0x78);
  local_a4[3] = *(undefined4 *)(*(longlong *)(lVar12 + uVar13 * 8) + uVar4);
  local_a4[4] = *(undefined4 *)(*(longlong *)(lVar12 + uVar11 * 8) + uVar10);
  local_a4[5] = *(undefined4 *)(*(longlong *)(lVar12 + uVar7 * 8) + uVar6);
  lVar12 = *(longlong *)(param_1[2] + 0x78);
  local_a4[0] = *(uint *)(*(longlong *)(lVar12 + uVar13 * 8) + uVar4);
  local_a4[1] = *(undefined4 *)(*(longlong *)(lVar12 + uVar11 * 8) + uVar10);
  local_a4[2] = *(undefined4 *)(*(longlong *)(lVar12 + uVar7 * 8) + uVar6);
  lVar12 = 0;
  do {
    local_a8 = *(float *)(lVar2 + lVar12 * 4);
    uVar5 = local_a4[lVar12 + 6];
    if ((((int)uVar5 < 0) ||
        (lVar3 = *param_1, *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc) <= (int)uVar5)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar5 >> 9) * 8) +
                                    (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) {
      local_b4[2] = (float)DAT_14c8462d0;
      local_b4[1] = (float)DAT_14c8462c8;
      local_b4[0] = (float)DAT_14c8462c0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x48);
      lVar8 = 0;
      do {
        uVar9 = uVar5 * 3 + (int)lVar8;
        local_cc[lVar8 + 6] =
             *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                       (ulonglong)(uVar9 & 0x1ff) * 4);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
    }
    uVar5 = local_a4[lVar12 + 3];
    if ((((int)uVar5 < 0) ||
        (lVar3 = param_1[1], *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc) <= (int)uVar5)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar5 >> 9) * 8) +
                                    (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) {
      local_cc[5] = (float)DAT_14c8462e8;
      local_cc[4] = (float)DAT_14c8462e0;
      local_cc[3] = (float)DAT_14c8462d8;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x48);
      lVar8 = 0;
      do {
        uVar9 = uVar5 * 3 + (int)lVar8;
        local_cc[lVar8 + 3] =
             *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                       (ulonglong)(uVar9 & 0x1ff) * 4);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
    }
    uVar5 = local_a4[lVar12];
    if ((((int)uVar5 < 0) ||
        (lVar3 = param_1[2], *(int *)(lVar3 + 8) * 0x200 + *(int *)(lVar3 + 0xc) <= (int)uVar5)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar5 >> 9) * 8) +
                                    (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) {
      fVar14 = (float)DAT_14c846290;
      fVar15 = (float)DAT_14c846298;
      fVar16 = (float)DAT_14c8462a0;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x48);
      lVar8 = 0;
      do {
        uVar9 = uVar5 * 3 + (int)lVar8;
        local_cc[lVar8] =
             *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar9 >> 9) * 8) +
                       (ulonglong)(uVar9 & 0x1ff) * 4);
        lVar8 = lVar8 + 1;
        fVar14 = local_cc[0];
        fVar15 = local_cc[1];
        fVar16 = local_cc[2];
      } while (lVar8 != 3);
    }
    local_f8 = (double)local_b4[1];
    local_100 = (double)local_b4[0];
    local_108 = *(undefined4 *)
                 (&DAT_149e1eeb0 +
                 (ulonglong)
                 ((fVar14 * local_b4[1] - local_b4[0] * fVar15) * local_cc[5] +
                  (fVar15 * local_b4[2] - local_b4[1] * fVar16) * local_cc[3] +
                  (fVar16 * local_b4[0] - local_b4[2] * fVar14) * local_cc[4] < 0.0) * 4);
    local_d8 = (double)local_cc[5];
    local_e0 = (double)local_cc[4];
    local_e8 = (double)local_cc[3];
    local_f0 = (double)local_b4[2];
    FUN_146fafae0(param_1[3],local_cc + 9,&local_100,&local_e8);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 3);
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abb17a FUN_142abb17a body=70 status=ok
// SIG undefined FUN_142abb17a(void)

undefined8 * FUN_142abb17a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_149faaf30;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142abb1c0 FUN_142abb1c0 body=5 status=ok
// SIG undefined FUN_142abb1c0(void)

longlong FUN_142abb1c0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142abb1c6 FUN_142abb1c6 body=29 status=ok
// SIG undefined FUN_142abb1c6(void)

void FUN_142abb1c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142abb1e4 FUN_142abb1e4 body=29 status=ok
// SIG undefined FUN_142abb1e4(void)

undefined8 FUN_142abb1e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abb202 FUN_142abb202 body=426 status=ok
// SIG undefined FUN_142abb202(void)

void FUN_142abb202(longlong *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_58 [40];
  float local_30 [3];
  uint local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_3;
  iVar1 = *param_2;
  lVar4 = *param_1;
  uVar8 = iVar1 * 3 + 2;
  lVar6 = *(longlong *)(lVar4 + 0x78);
  uVar5 = iVar1 * 3 + 1;
  local_24[0] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)((uint)(iVar1 * 3) >> 9) * 8) +
                         (ulonglong)(iVar1 * 3 & 0x1ff) * 4);
  local_24[1] = *(undefined4 *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8) +
                 (ulonglong)(uVar5 & 0x1ff) * 4);
  local_24[2] = *(undefined4 *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
  lVar6 = 0;
  do {
    uVar5 = local_24[lVar6];
    dVar10 = DAT_14c8462c0;
    dVar11 = DAT_14c8462c8;
    dVar12 = DAT_14c8462d0;
    if (((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc))) &&
       ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar5 >> 9) * 8)
                           + (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar3 = *(longlong *)(lVar4 + 0x48);
      lVar9 = 0;
      do {
        uVar8 = uVar5 * 3 + (int)lVar9;
        local_30[lVar9] =
             *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 4);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      dVar10 = (double)local_30[0];
      dVar11 = (double)local_30[1];
      dVar12 = (double)local_30[2];
    }
    lVar3 = *(longlong *)(param_1[1] + 0x18);
    if (lVar3 != 0) {
      plVar7 = (longlong *)(lVar3 + 0x18);
      if (*(longlong **)(lVar3 + 0x30) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar3 + 0x30);
      }
      lVar4 = *plVar7;
      lVar3 = (longlong)(*(int *)(lVar2 + lVar6 * 4) * (int)plVar7[2]);
      *(float *)(lVar4 + lVar3 * 0xc) = (float)dVar10;
      *(float *)(lVar4 + 4 + lVar3 * 0xc) = (float)dVar11;
      *(float *)(lVar4 + 8 + lVar3 * 0xc) = (float)dVar12;
      lVar4 = *param_1;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abb3d8 FUN_142abb3d8 body=29 status=ok
// SIG undefined FUN_142abb3d8(void)

undefined8 FUN_142abb3d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abb3f8 FUN_142abb3f8 body=765 status=ok
// SIG undefined FUN_142abb3f8(void)

void FUN_142abb3f8(longlong *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_118 [44];
  uint local_ec [3];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *param_3;
  iVar1 = *param_2;
  lVar3 = *param_1;
  uVar9 = iVar1 * 3 + 2;
  lVar10 = *(longlong *)(param_1[1] + 0x78);
  uVar5 = iVar1 * 3 + 1;
  local_ec[0] = *(uint *)(*(longlong *)(lVar10 + (ulonglong)((uint)(iVar1 * 3) >> 9) * 8) +
                         (ulonglong)(iVar1 * 3 & 0x1ff) * 4);
  local_ec[1] = *(undefined4 *)
                 (*(longlong *)(lVar10 + (ulonglong)(uVar5 >> 9) * 8) +
                 (ulonglong)(uVar5 & 0x1ff) * 4);
  local_ec[2] = *(undefined4 *)
                 (*(longlong *)(lVar10 + (ulonglong)(uVar9 >> 9) * 8) +
                 (ulonglong)(uVar9 & 0x1ff) * 4);
  lVar10 = 0;
  do {
    iVar1 = *(int *)(lVar2 + lVar10 * 4);
    uVar5 = local_ec[lVar10];
    fVar11 = 1.0;
    fVar12 = 1.0;
    fVar13 = 1.0;
    uVar14 = 0x3f800000;
    if (-1 < (int)uVar5) {
      lVar4 = param_1[1];
      fVar11 = 1.0;
      fVar12 = 1.0;
      fVar13 = 1.0;
      uVar14 = 0x3f800000;
      if ((int)uVar5 < *(int *)(lVar4 + 8) * 0x200 + *(int *)(lVar4 + 0xc)) {
        fVar11 = 1.0;
        fVar12 = 1.0;
        fVar13 = 1.0;
        uVar14 = 0x3f800000;
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar5 >> 9) * 8) +
                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + (ulonglong)(uVar5 >> 4 & 0x3fffff8));
          uVar6 = (ulonglong)((uVar5 & 0x7f) << 4);
          fVar11 = *(float *)(lVar4 + uVar6);
          fVar12 = *(float *)(lVar4 + 4 + uVar6);
          fVar13 = *(float *)(lVar4 + 8 + uVar6);
          uVar14 = *(undefined4 *)(lVar4 + 0xc + uVar6);
          if (*(char *)(lVar3 + 7) == '\x01') {
            if (fVar11 <= 0.04045) {
              fVar11 = fVar11 / 12.92;
            }
            else {
              fVar11 = powf((fVar11 + 0.055) / 1.055,2.4);
            }
            if (fVar12 <= 0.04045) {
              fVar12 = fVar12 / 12.92;
            }
            else {
              fVar12 = powf((fVar12 + 0.055) / 1.055,2.4);
            }
            if (fVar13 <= 0.04045) {
              fVar13 = fVar13 / 12.92;
            }
            else {
              fVar13 = powf((fVar13 + 0.055) / 1.055,2.4);
            }
          }
        }
      }
    }
    lVar4 = *(longlong *)(param_1[2] + 0x30);
    if (lVar4 != 0) {
      plVar7 = (longlong *)(lVar4 + 0x18);
      if (*(longlong **)(lVar4 + 0x30) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar4 + 0x30);
      }
      lVar4 = *plVar7;
      lVar8 = (longlong)(iVar1 * (int)plVar7[2]) * 0x10;
      *(float *)(lVar4 + lVar8) = fVar11;
      *(float *)(lVar4 + 4 + lVar8) = fVar12;
      *(float *)(lVar4 + 8 + lVar8) = fVar13;
      *(undefined4 *)(lVar4 + 0xc + lVar8) = uVar14;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  if ((local_e0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abb728 FUN_142abb728 body=29 status=ok
// SIG undefined FUN_142abb728(void)

undefined8 FUN_142abb728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abb747 FUN_142abb747 body=27 status=ok
// SIG undefined FUN_142abb747(void)

void FUN_142abb747(undefined4 *param_1,int param_2)

{
  do {
    *param_1 = 0xffffffff;
    param_1[4] = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
    param_1 = param_1 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 142abb762 FUN_142abb762 body=363 status=ok
// SIG undefined FUN_142abb762(void)

void FUN_142abb762(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0x666) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_142abb7f6;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_142abb7f6:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 / 0x14)) {
    uVar6 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,0x14,4);
  return;
}



// FUNCTION 142abb8cd FUN_142abb8cd body=298 status=ok
// SIG undefined FUN_142abb8cd(void)

void FUN_142abb8cd(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abb9f8 FUN_142abb9f8 body=298 status=ok
// SIG undefined FUN_142abb9f8(void)

void FUN_142abb9f8(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abbb23 FUN_142abbb23 body=298 status=ok
// SIG undefined FUN_142abbb23(void)

void FUN_142abbb23(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abbc4e FUN_142abbc4e body=298 status=ok
// SIG undefined FUN_142abbc4e(void)

void FUN_142abbc4e(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abbd79 FUN_142abbd79 body=298 status=ok
// SIG undefined FUN_142abbd79(void)

void FUN_142abbd79(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abbea4 FUN_142abbea4 body=298 status=ok
// SIG undefined FUN_142abbea4(void)

void FUN_142abbea4(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abbfcf FUN_142abbfcf body=298 status=ok
// SIG undefined FUN_142abbfcf(void)

void FUN_142abbfcf(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc0fa FUN_142abc0fa body=298 status=ok
// SIG undefined FUN_142abc0fa(void)

void FUN_142abc0fa(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_146fa79d6();
  if (cVar5 != '\0') {
    FUN_146fa7fae(&local_80,param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    lVar3 = *param_2;
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f36420;
    puVar6[2] = lVar3;
    FUN_146be9ba2(puVar6 + 3);
    local_48 = 0;
    local_78 = 0;
    uStack_70 = (undefined8 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xc00000000;
    FUN_146bea236(puVar6);
    plVar4 = (longlong *)param_2[1];
    FUN_146fa7f2c(param_2[2] + 8,&local_78,param_1);
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    uStack_70 = puVar6;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_146fb14d2(plVar4,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    FUN_146c18154(*(undefined8 *)(*param_2 + 0x208),local_80,puVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc225 FUN_142abc225 body=204 status=ok
// SIG undefined FUN_142abc225(void)

void FUN_142abc225(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc2f2 FUN_142abc2f2 body=204 status=ok
// SIG undefined FUN_142abc2f2(void)

void FUN_142abc2f2(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc3bf FUN_142abc3bf body=204 status=ok
// SIG undefined FUN_142abc3bf(void)

void FUN_142abc3bf(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc48c FUN_142abc48c body=204 status=ok
// SIG undefined FUN_142abc48c(void)

void FUN_142abc48c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc559 FUN_142abc559 body=204 status=ok
// SIG undefined FUN_142abc559(void)

void FUN_142abc559(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc626 FUN_142abc626 body=204 status=ok
// SIG undefined FUN_142abc626(void)

void FUN_142abc626(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc6f3 FUN_142abc6f3 body=204 status=ok
// SIG undefined FUN_142abc6f3(void)

void FUN_142abc6f3(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc7c0 FUN_142abc7c0 body=204 status=ok
// SIG undefined FUN_142abc7c0(void)

void FUN_142abc7c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146fa9fc8();
  if (cVar4 == '\0') {
    uVar2 = *param_2;
    cVar4 = FUN_146fb1558(uVar2,param_1);
    if (cVar4 != '\0') {
      plVar3 = (longlong *)param_2[1];
      FUN_146fb1602(uVar2,&local_30,param_1);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_146fb16b6(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_30;
      plVar3 = (longlong *)param_2[2];
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(plVar3,iVar1);
      }
      *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc88d FUN_142abc88d body=213 status=ok
// SIG undefined FUN_142abc88d(void)

void FUN_142abc88d(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abc963 FUN_142abc963 body=213 status=ok
// SIG undefined FUN_142abc963(void)

void FUN_142abc963(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abca39 FUN_142abca39 body=213 status=ok
// SIG undefined FUN_142abca39(void)

void FUN_142abca39(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abcb0f FUN_142abcb0f body=213 status=ok
// SIG undefined FUN_142abcb0f(void)

void FUN_142abcb0f(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abcbe5 FUN_142abcbe5 body=213 status=ok
// SIG undefined FUN_142abcbe5(void)

void FUN_142abcbe5(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abccbb FUN_142abccbb body=213 status=ok
// SIG undefined FUN_142abccbb(void)

void FUN_142abccbb(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abcd91 FUN_142abcd91 body=213 status=ok
// SIG undefined FUN_142abcd91(void)

void FUN_142abcd91(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abce67 FUN_142abce67 body=213 status=ok
// SIG undefined FUN_142abce67(void)

void FUN_142abce67(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_146fa9fc8();
  if (((cVar3 == '\0') && (cVar3 = FUN_146fa79d6(param_1), cVar3 == '\0')) &&
     (cVar3 = FUN_146fb173c(*param_2,param_1), cVar3 != '\0')) {
    plVar2 = (longlong *)param_2[1];
    FUN_146fb17e6(*param_2,&local_30,param_1);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_146fb189a(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = local_30;
    plVar2 = (longlong *)param_2[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142abcf3e FUN_142abcf3e body=547 status=ok
// SIG undefined FUN_142abcf3e(void)

longlong * FUN_142abcf3e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abd162 FUN_142abd162 body=2768 status=ok
// SIG undefined FUN_142abd162(void)

void FUN_142abd162(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined8 local_150;
  undefined4 local_148;
  uint local_144 [3];
  int *local_138;
  undefined4 local_130;
  uint *local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong *plStack_a0;
  int **local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = (longlong)*(int *)(param_1 + 0xa8);
  if (-1 < lVar4) {
    lVar18 = *(longlong *)(param_1 + 0xb0);
    if (*(int *)(param_1 + 0xa8) < *(int *)(*(longlong *)(lVar18 + 0x208) + 0x28)) {
      lVar16 = *(longlong *)(param_1 + 0xd0);
      local_100 = *(longlong *)(*(longlong *)(*(longlong *)(lVar18 + 0x208) + 0x20) + lVar4 * 8);
      if (local_100 != 0) {
        if (*(char *)(param_1 + 0xac) == '\0') {
          uVar14 = 0;
          local_88 = 0;
          local_80 = 0;
          local_a8 = (undefined8 *)0x0;
          plStack_a0 = (longlong *)0x0;
          local_7c = 0xffffffff00000080;
          local_74 = 0;
          local_68 = 0;
          local_60 = 0;
          uVar19 = *(int *)(lVar18 + 0x140) * 0x200 + *(int *)(lVar18 + 0x144);
          if ((uVar19 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar18 + 0x148) - 1U))
             ) {
            uVar14 = 1;
            uVar23 = 1;
            if (1 < (int)uVar19) {
              uVar14 = (ulonglong)uVar19;
            }
            do {
              uVar2 = uVar23;
              if ((uint)uVar14 == uVar2) goto LAB_142abd310;
              uVar23 = uVar2 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar18 + 0x148))[uVar2 >> 9] +
                                                 (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
            uVar14 = (ulonglong)uVar2;
          }
LAB_142abd310:
          local_58 = local_100;
          if ((uint)uVar14 != uVar19) {
            do {
              uVar23 = (uint)uVar14;
              lVar4 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) + (uVar14 >> 9) * 8);
              uStack_f0 = CONCAT44(uStack_f0._4_4_,
                                   *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar23 & 0x1ff) * 0xc));
              local_f8 = *(undefined8 *)(lVar4 + (ulonglong)(uVar23 & 0x1ff) * 0xc);
              lVar4 = **(longlong **)(param_1 + 0xb8);
              local_118 = -1;
              uStack_110 = CONCAT44(uStack_110._4_4_,0xffffffff);
              lVar16 = 0;
              do {
                lVar8 = *(longlong *)(**(longlong **)(param_1 + 0xc0) + 0x30);
                lVar5 = **(longlong **)(param_1 + 0xc0) + 0x18;
                if (lVar8 != 0) {
                  lVar5 = lVar8;
                }
                local_128 = *(uint **)(*(longlong *)
                                        (lVar5 + (longlong)*(int *)(param_1 + 0xa8) * 0x18) +
                                      (longlong)
                                      (*(int *)(lVar5 + 0x10 +
                                               (longlong)*(int *)(param_1 + 0xa8) * 0x18) *
                                      *(int *)(lVar4 + (longlong)(int)uVar23 * 0x14 + 8 + lVar16 * 4
                                              )) * 8);
                uVar3 = FUN_146fb1920(&local_a8,&local_128,
                                      *(undefined4 *)((longlong)&local_f8 + lVar16 * 4));
                *(undefined4 *)((longlong)&local_118 + lVar16 * 4) = uVar3;
                lVar16 = lVar16 + 1;
              } while (lVar16 != 3);
              FUN_146c01486(local_100,uVar14,&local_118,1);
              uVar2 = uVar23 + 1;
              if ((int)(uVar23 + 1) < (int)uVar19) {
                uVar2 = uVar19;
              }
              do {
                if (uVar2 - 1 == (int)uVar14) {
                  uVar14 = (ulonglong)uVar2;
                  break;
                }
                uVar23 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar23;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar18 + 0x148) +
                                                     (ulonglong)(uVar23 >> 9) * 8) +
                                                   (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
            } while ((uint)uVar14 != uVar19);
            local_60 = 0;
            if (local_68 != 0) {
              FUN_1400020a8();
            }
          }
          FUN_146fb1f1a(&local_a8);
        }
        else {
          lVar8 = *(longlong *)(**(longlong **)(param_1 + 200) + 0x60);
          lVar18 = *(longlong *)(lVar8 + 0x80);
          if (lVar18 == 0) {
            lVar18 = lVar8;
          }
          puVar1 = (uint *)(lVar18 + lVar4 * 0x80);
          lVar18 = lVar18 + lVar4 * 0x80;
          FUN_146fa097a(lVar18 + 0x20,&local_108,DAT_14c99c118);
          local_118 = 0;
          uStack_110 = 0;
          iVar13 = *(int *)(lVar18 + 0x18);
          if (iVar13 == 0) {
            uVar21 = 1;
            iVar11 = 0;
            uVar14 = 0;
            iVar12 = 0;
          }
          else {
            puVar6 = *(uint **)(puVar1 + 4);
            if (*(uint **)(puVar1 + 4) == (uint *)0x0) {
              puVar6 = puVar1;
            }
            uVar19 = *puVar6;
            if (uVar19 == 0) {
              iVar11 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar11 = iVar13 + -1;
              }
              uVar14 = 0;
              uVar17 = (ulonglong)(uint)(iVar11 >> 5);
              if (iVar11 >> 5 < 1) {
                uVar17 = uVar14;
              }
              iVar11 = 0;
              do {
                if (uVar17 == uVar14) goto LAB_142abd5d3;
                iVar11 = iVar11 + 0x20;
                uVar19 = puVar6[uVar14 + 1];
                uVar14 = uVar14 + 1;
              } while (uVar19 == 0);
            }
            else {
              iVar11 = 0;
              uVar14 = 0;
            }
            uVar21 = (ulonglong)(-uVar19 & uVar19);
            uVar17 = uVar21 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar12 = (iVar11 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar12) {
              iVar12 = iVar13;
            }
          }
          if (iVar12 != iVar13) {
            puVar6 = *(uint **)(puVar1 + 4);
            if (*(uint **)(puVar1 + 4) == (uint *)0x0) {
              puVar6 = puVar1;
            }
            iVar22 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar22 = iVar13 + -1;
            }
            iVar22 = iVar22 >> 5;
            iVar15 = -1;
            uVar19 = 0xffffffff;
            do {
              if (iVar13 <= iVar12) {
                iVar12 = -1;
              }
              if (iVar12 <= iVar15) {
                iVar12 = iVar15;
              }
              iVar15 = iVar12;
              uVar19 = ~(uint)uVar21 & uVar19;
              iVar12 = (int)uVar14;
              lVar4 = (longlong)iVar12;
              uVar23 = puVar6[lVar4] & uVar19;
              if (uVar23 == 0) {
                iVar20 = iVar22;
                if (iVar22 < iVar12) {
                  iVar20 = iVar12;
                }
                if (iVar22 <= iVar12) break;
                lVar18 = 0;
                while( true ) {
                  iVar11 = iVar11 + 0x20;
                  uVar23 = puVar6[lVar4 + lVar18 + 1];
                  if (uVar23 != 0) break;
                  lVar18 = lVar18 + 1;
                  if (iVar20 - lVar4 == lVar18) goto LAB_142abd5bc;
                }
                uVar14 = (ulonglong)(iVar12 + (int)lVar18 + 1);
                uVar19 = 0xffffffff;
              }
              uVar21 = (ulonglong)(-uVar23 & uVar23);
              uVar17 = uVar21 * 2 + 1;
              lVar4 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              iVar12 = (iVar11 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
            } while (iVar12 < iVar13);
LAB_142abd5bc:
            uStack_110 = (ulonglong)(iVar15 + 1U);
            if (iVar15 + 1U != 0) {
              FUN_1446f48e2(&local_118,0);
            }
          }
LAB_142abd5d3:
          uVar19 = puVar1[6];
          local_158 = lVar16;
          if (uVar19 == 0) {
            uVar14 = 0;
            uVar21 = 1;
            iVar13 = 0;
            uVar23 = 0;
          }
          else {
            puVar6 = *(uint **)(puVar1 + 4);
            if (*(uint **)(puVar1 + 4) == (uint *)0x0) {
              puVar6 = puVar1;
            }
            uVar23 = *puVar6;
            if (uVar23 == 0) {
              iVar13 = uVar19 + 0x1e;
              if (-1 < (int)(uVar19 - 1)) {
                iVar13 = uVar19 - 1;
              }
              uVar14 = 0;
              uVar17 = (ulonglong)(uint)(iVar13 >> 5);
              if (iVar13 >> 5 < 1) {
                uVar17 = uVar14;
              }
              iVar13 = 0;
              do {
                if (uVar17 == uVar14) goto LAB_142abd663;
                iVar13 = iVar13 + 0x20;
                uVar23 = puVar6[uVar14 + 1];
                uVar14 = uVar14 + 1;
              } while (uVar23 == 0);
            }
            else {
              uVar14 = 0;
              iVar13 = 0;
            }
            uVar21 = (ulonglong)(-uVar23 & uVar23);
            uVar17 = uVar21 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            uVar23 = (iVar13 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
            if ((int)uVar19 <= (int)uVar23) {
              uVar23 = uVar19;
            }
          }
          if (uVar23 != uVar19) {
            uVar10 = 0xffffffff;
            uVar2 = uVar19;
            do {
              if ((int)uVar2 <= (int)uVar23) {
                uVar23 = 0xffffffff;
              }
              plVar9 = (longlong *)(local_108 + 0x18);
              if (*(longlong **)(local_108 + 0x30) != (longlong *)0x0) {
                plVar9 = *(longlong **)(local_108 + 0x30);
              }
              local_a8 = *(undefined8 **)(*plVar9 + (longlong)(int)((int)plVar9[2] * uVar23) * 8);
              uVar3 = FUN_146c2d0a4(local_100,&local_a8);
              *(undefined4 *)(local_118 + (longlong)(int)uVar23 * 4) = uVar3;
              uVar10 = ~(uint)uVar21 & uVar10;
              puVar6 = *(uint **)(puVar1 + 4);
              if (*(uint **)(puVar1 + 4) == (uint *)0x0) {
                puVar6 = puVar1;
              }
              uVar2 = puVar1[6];
              iVar11 = (int)uVar14;
              lVar4 = (longlong)iVar11;
              uVar23 = puVar6[lVar4] & uVar10;
              if (uVar23 == 0) {
                iVar12 = uVar2 + 0x1e;
                if (-1 < (int)(uVar2 - 1)) {
                  iVar12 = uVar2 - 1;
                }
                iVar12 = iVar12 >> 5;
                iVar13 = iVar13 + 0x20;
                iVar22 = iVar12;
                if (iVar12 < iVar11) {
                  iVar22 = iVar11;
                }
                if (iVar11 < iVar12) {
                  lVar18 = 0;
                  do {
                    uVar23 = puVar6[lVar4 + lVar18 + 1];
                    if (uVar23 != 0) {
                      uVar14 = (ulonglong)(iVar11 + (int)lVar18 + 1);
                      uVar10 = 0xffffffff;
                      goto LAB_142abdbdd;
                    }
                    iVar13 = iVar13 + 0x20;
                    lVar18 = lVar18 + 1;
                  } while (iVar22 - lVar4 != lVar18);
                  uVar10 = 0xffffffff;
                  iVar11 = iVar22;
                }
                uVar14 = (ulonglong)(iVar11 + 1);
                uVar23 = uVar2;
              }
              else {
LAB_142abdbdd:
                uVar21 = (ulonglong)(-uVar23 & uVar23);
                uVar17 = uVar21 * 2 + 1;
                lVar4 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                  }
                }
                uVar23 = (iVar13 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
                if ((int)uVar2 <= (int)uVar23) {
                  uVar23 = uVar2;
                }
              }
            } while (uVar23 != uVar19);
          }
LAB_142abd663:
          lVar18 = local_158;
          local_128 = (uint *)0x0;
          uStack_120 = 0;
          uVar14 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_cc = 0xffffffff00000080;
          local_c4 = 0;
          local_b8 = 0;
          local_b0 = 0;
          lVar4 = *(longlong *)(param_1 + 0xb0);
          uVar19 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
          if ((uVar19 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U)))
          {
            uVar14 = 1;
            uVar23 = 1;
            if (1 < (int)uVar19) {
              uVar14 = (ulonglong)uVar19;
            }
            do {
              uVar2 = uVar23;
              if ((uint)uVar14 == uVar2) goto LAB_142abd724;
              uVar23 = uVar2 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar2 >> 9] +
                                                 (ulonglong)(uVar2 & 0x1ff) * 2) - 1U));
            uVar14 = (ulonglong)uVar2;
          }
LAB_142abd724:
          if ((uint)uVar14 != uVar19) {
            do {
              uVar23 = (uint)uVar14;
              FUN_146f708ec(**(longlong **)(param_1 + 200) + 0xd8,&local_138,
                            *(undefined4 *)(*(longlong *)(lVar18 + 8) + (longlong)(int)uVar23 * 4),
                            *(undefined4 *)(param_1 + 0xa8));
              uVar17 = uStack_120;
              if ((((longlong)*local_138 == -1) || ((longlong)local_138[1] == -1)) ||
                 ((longlong)local_138[2] == -1)) {
                lVar16 = (longlong)(int)uStack_120;
                uVar2 = (int)uStack_120 + 1;
                uStack_120 = CONCAT44(uStack_120._4_4_,uVar2);
                if (uStack_120._4_4_ < uVar2) {
                  FUN_1446f48e2(&local_128,uVar17 & 0xffffffff);
                }
                local_128[lVar16] = uVar23;
              }
              else {
                local_144[1] = *(undefined4 *)(local_118 + (longlong)local_138[1] * 4);
                local_144[0] = *(undefined4 *)(local_118 + (longlong)*local_138 * 4);
                local_144[2] = *(uint *)(local_118 + (longlong)local_138[2] * 4);
                local_a8 = &local_f8;
                plStack_a0 = &local_108;
                local_98 = &local_138;
                local_90 = &local_100;
                lVar16 = *(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) + (uVar14 >> 9) * 8)
                ;
                local_148 = *(undefined4 *)(lVar16 + 8 + (ulonglong)(uVar23 & 0x1ff) * 0xc);
                local_150 = *(undefined8 *)(lVar16 + (ulonglong)(uVar23 & 0x1ff) * 0xc);
                uVar17 = 0;
                do {
                  iVar13 = *(int *)(*(longlong *)
                                     (*(longlong *)(local_100 + 0x60) +
                                     (ulonglong)(local_144[uVar17] >> 9) * 8) +
                                   (ulonglong)(local_144[uVar17] & 0x1ff) * 4);
                  if ((iVar13 != -1) &&
                     (iVar11 = *(int *)((longlong)&local_150 + uVar17 * 4), iVar13 != iVar11)) {
                    FUN_142abdca2(&local_a8,iVar11,local_144,uVar17 & 0xffffffff);
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 != 3);
                if (local_144[0] == local_144[2] && local_144[0] == local_144[1]) {
                  FUN_142abdca2(&local_a8,local_150._4_4_,local_144,1);
                  lVar16 = 2;
                  puVar7 = &local_148;
LAB_142abd933:
                  FUN_142abdca2(&local_a8,*puVar7,local_144,lVar16);
                }
                else {
                  lVar16 = 1;
                  if ((local_144[0] == local_144[1]) ||
                     (lVar16 = 2, local_144[0] == local_144[2] || local_144[1] == local_144[2])) {
                    puVar7 = (undefined4 *)((longlong)&local_150 + lVar16 * 4);
                    goto LAB_142abd933;
                  }
                }
                FUN_146c01486(local_100,uVar14,local_144,1);
              }
              uVar2 = uVar23 + 1;
              if ((int)(uVar23 + 1) < (int)uVar19) {
                uVar2 = uVar19;
              }
              do {
                if (uVar2 - 1 == (int)uVar14) {
                  uVar14 = (ulonglong)uVar2;
                  break;
                }
                uVar23 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar23;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar4 + 0x148) +
                                                     (ulonglong)(uVar23 >> 9) * 8) +
                                                   (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
            } while ((uint)uVar14 != uVar19);
            if ((longlong)(int)uStack_120 != 0) {
              local_88 = 0;
              local_80 = 0;
              local_a8 = (undefined8 *)0x0;
              plStack_a0 = (longlong *)0x0;
              local_7c = 0xffffffff00000080;
              local_74 = 0;
              local_68 = 0;
              local_60 = 0;
              local_58 = local_100;
              puVar1 = local_128 + (int)uStack_120;
              puVar6 = local_128;
              do {
                uVar19 = *puVar6;
                lVar4 = *(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) +
                         (ulonglong)(uVar19 >> 9) * 8);
                local_130 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
                local_138 = *(int **)(lVar4 + (ulonglong)(uVar19 & 0x1ff) * 0xc);
                lVar4 = **(longlong **)(param_1 + 0xb8);
                local_144[0] = 0xffffffff;
                local_144[1] = 0xffffffff;
                local_144[2] = 0xffffffff;
                lVar18 = 0;
                do {
                  lVar16 = *(longlong *)(**(longlong **)(param_1 + 0xc0) + 0x30);
                  lVar8 = **(longlong **)(param_1 + 0xc0) + 0x18;
                  if (lVar16 != 0) {
                    lVar8 = lVar16;
                  }
                  local_150 = *(undefined8 *)
                               (*(longlong *)(lVar8 + (longlong)*(int *)(param_1 + 0xa8) * 0x18) +
                               (longlong)
                               (*(int *)(lVar8 + 0x10 + (longlong)*(int *)(param_1 + 0xa8) * 0x18) *
                               *(int *)(lVar4 + (longlong)(int)uVar19 * 0x14 + 8 + lVar18 * 4)) * 8)
                  ;
                  uVar23 = FUN_146fb1920(&local_a8,&local_150,
                                         *(undefined4 *)((longlong)&local_138 + lVar18 * 4));
                  local_144[lVar18] = uVar23;
                  lVar18 = lVar18 + 1;
                } while (lVar18 != 3);
                FUN_146c01486(local_100,uVar19,local_144,1);
                puVar6 = puVar6 + 1;
              } while (puVar6 != puVar1);
              local_60 = 0;
              if (local_68 != 0) {
                FUN_1400020a8();
              }
              FUN_146fb1f1a(&local_a8);
            }
          }
          local_b0 = 0;
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          FUN_146be7e8c(&local_f8);
          if (local_128 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if (local_118 != 0) {
            FUN_1400020a8();
          }
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



// FUNCTION 142abdc34 FUN_142abdc34 body=110 status=ok
// SIG undefined FUN_142abdc34(void)

undefined8 * FUN_142abdc34(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abdca2 FUN_142abdca2 body=320 status=ok
// SIG undefined FUN_142abdca2(void)

void FUN_142abdca2(longlong *param_1,int param_2,longlong param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  int local_50;
  int local_4c;
  int *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_4 = param_4 & 0xffffffff;
  local_4c = *(int *)(param_3 + param_4 * 4);
  plVar2 = (longlong *)*param_1;
  local_50 = param_2;
  uVar3 = FUN_1448eb174(&local_50,8,0);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar4 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar2[9] - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*plVar2 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == local_50) && (*(int *)(*plVar2 + 4 + (longlong)iVar5 * 0x14) == local_4c)) {
          if ((piVar1 != (int *)0x0) && (piVar1 + 2 != (int *)0x0)) {
            *(int *)(param_3 + param_4 * 4) = piVar1[2];
            goto LAB_142abddc0;
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  plVar2 = *(longlong **)(*(longlong *)param_1[1] + 0x30);
  plVar4 = (longlong *)(*(longlong *)param_1[1] + 0x18);
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  local_48 = *(int **)(*plVar4 +
                      (longlong)((int)plVar4[2] * *(int *)(*(longlong *)param_1[2] + param_4 * 4)) *
                      8);
  local_54 = FUN_146c2d0a4(*(undefined8 *)param_1[3],&local_48);
  local_40 = &local_54;
  *(undefined4 *)(param_3 + param_4 * 4) = local_54;
  local_48 = &local_50;
  FUN_146fb1fa8(*param_1,local_34,&local_48,0);
LAB_142abddc0:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abdde4 FUN_142abdde4 body=547 status=ok
// SIG undefined FUN_142abdde4(void)

longlong * FUN_142abdde4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abe008 FUN_142abe008 body=608 status=ok
// SIG undefined FUN_142abe008(void)

void FUN_142abe008(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar10 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = **(undefined8 **)(param_1 + 0xa8);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  uVar8 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar10 = 1;
    uVar9 = 1;
    if (1 < (int)uVar8) {
      uVar10 = (ulonglong)uVar8;
    }
    do {
      uVar6 = uVar9;
      if ((uint)uVar10 == uVar6) goto LAB_142abe0e6;
      uVar9 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar6 >> 9] +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    uVar10 = (ulonglong)uVar6;
  }
LAB_142abe0e6:
  if ((uint)uVar10 != uVar8) {
    do {
      uVar9 = (uint)uVar10;
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) + (uVar10 >> 9) * 8);
      local_b0 = *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      local_b8 = *(undefined8 *)(lVar2 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      lVar2 = **(longlong **)(param_1 + 0xb8);
      local_c4 = 0xffffffffffffffff;
      local_bc = 0xffffffff;
      lVar11 = 0;
      do {
        plVar3 = *(longlong **)(**(longlong **)(param_1 + 0xc0) + 0x30);
        plVar5 = (longlong *)(**(longlong **)(param_1 + 0xc0) + 0x18);
        if (plVar3 != (longlong *)0x0) {
          plVar5 = plVar3;
        }
        lVar7 = (longlong)
                ((int)plVar5[2] * *(int *)(lVar2 + (longlong)(int)uVar9 * 0x14 + 8 + lVar11 * 4));
        local_c8 = *(undefined4 *)(*plVar5 + 8 + lVar7 * 0xc);
        local_d0 = *(undefined8 *)(*plVar5 + lVar7 * 0xc);
        uVar4 = FUN_146fb20f2(&local_a8,&local_d0,*(undefined4 *)((longlong)&local_b8 + lVar11 * 4))
        ;
        *(undefined4 *)((longlong)&local_c4 + lVar11 * 4) = uVar4;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      FUN_146c01580(**(undefined8 **)(param_1 + 0xa8),uVar10,&local_c4,1);
      uVar6 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar8) {
        uVar6 = uVar8;
      }
      do {
        if (uVar6 - 1 == (int)uVar10) {
          uVar10 = (ulonglong)uVar6;
          break;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar10 != uVar8);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146fb273e(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abe26a FUN_142abe26a body=110 status=ok
// SIG undefined FUN_142abe26a(void)

undefined8 * FUN_142abe26a(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abe2d8 FUN_142abe2d8 body=547 status=ok
// SIG undefined FUN_142abe2d8(void)

longlong * FUN_142abe2d8(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abe4fc FUN_142abe4fc body=608 status=ok
// SIG undefined FUN_142abe4fc(void)

void FUN_142abe4fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar10 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = **(undefined8 **)(param_1 + 0xa8);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  uVar8 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if ((uVar8 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar10 = 1;
    uVar9 = 1;
    if (1 < (int)uVar8) {
      uVar10 = (ulonglong)uVar8;
    }
    do {
      uVar6 = uVar9;
      if ((uint)uVar10 == uVar6) goto LAB_142abe5da;
      uVar9 = uVar6 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar6 >> 9] +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    uVar10 = (ulonglong)uVar6;
  }
LAB_142abe5da:
  if ((uint)uVar10 != uVar8) {
    do {
      uVar9 = (uint)uVar10;
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) + (uVar10 >> 9) * 8);
      local_b0 = *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      local_b8 = *(undefined8 *)(lVar2 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
      lVar2 = **(longlong **)(param_1 + 0xb8);
      local_c4 = 0xffffffffffffffff;
      local_bc = 0xffffffff;
      lVar11 = 0;
      do {
        plVar3 = *(longlong **)(**(longlong **)(param_1 + 0xc0) + 0x30);
        plVar5 = (longlong *)(**(longlong **)(param_1 + 0xc0) + 0x18);
        if (plVar3 != (longlong *)0x0) {
          plVar5 = plVar3;
        }
        lVar7 = (longlong)
                ((int)plVar5[2] * *(int *)(lVar2 + (longlong)(int)uVar9 * 0x14 + 8 + lVar11 * 4));
        local_c8 = *(undefined4 *)(*plVar5 + 8 + lVar7 * 0xc);
        local_d0 = *(undefined8 *)(*plVar5 + lVar7 * 0xc);
        uVar4 = FUN_146fb20f2(&local_a8,&local_d0,*(undefined4 *)((longlong)&local_b8 + lVar11 * 4))
        ;
        *(undefined4 *)((longlong)&local_c4 + lVar11 * 4) = uVar4;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      FUN_146c01580(**(undefined8 **)(param_1 + 0xa8),uVar10,&local_c4,1);
      uVar6 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar8) {
        uVar6 = uVar8;
      }
      do {
        if (uVar6 - 1 == (int)uVar10) {
          uVar10 = (ulonglong)uVar6;
          break;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar10 != uVar8);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146fb273e(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abe75e FUN_142abe75e body=110 status=ok
// SIG undefined FUN_142abe75e(void)

undefined8 * FUN_142abe75e(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abe7cc FUN_142abe7cc body=547 status=ok
// SIG undefined FUN_142abe7cc(void)

longlong * FUN_142abe7cc(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abe9f0 FUN_142abe9f0 body=953 status=ok
// SIG undefined FUN_142abe9f0(void)

void FUN_142abe9f0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auStack_138 [40];
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar16 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = **(undefined8 **)(param_1 + 0xa8);
  lVar7 = *(longlong *)(param_1 + 0xb0);
  uVar14 = *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144);
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x148) - 1U))) {
    uVar16 = 1;
    uVar15 = 1;
    if (1 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
    }
    do {
      uVar12 = uVar15;
      if ((uint)uVar16 == uVar12) goto LAB_142abeaf0;
      uVar15 = uVar12 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x148))[uVar12 >> 9] +
                                         (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
    uVar16 = (ulonglong)uVar12;
  }
LAB_142abeaf0:
  if ((uint)uVar16 != uVar14) {
    do {
      uVar15 = (uint)uVar16;
      lVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) + (uVar16 >> 9) * 8);
      local_f0 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      local_f8 = *(undefined8 *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
      lVar8 = **(longlong **)(param_1 + 0xb8);
      local_104 = 0xffffffffffffffff;
      local_fc = 0xffffffff;
      lVar19 = 0;
      do {
        iVar6 = *(int *)(lVar8 + (longlong)(int)uVar15 * 0x14 + 8 + lVar19 * 4);
        plVar9 = *(longlong **)(**(longlong **)(param_1 + 0xc0) + 0x30);
        plVar13 = (longlong *)(**(longlong **)(param_1 + 0xc0) + 0x18);
        if (plVar9 != (longlong *)0x0) {
          plVar13 = plVar9;
        }
        lVar10 = *plVar13;
        lVar17 = (longlong)((int)plVar13[2] * iVar6);
        fVar20 = *(float *)(lVar10 + lVar17 * 0xc);
        fVar1 = *(float *)(lVar10 + 4 + lVar17 * 0xc);
        fVar2 = *(float *)(lVar10 + 8 + lVar17 * 0xc);
        plVar9 = *(longlong **)(**(longlong **)(param_1 + 200) + 0x30);
        plVar13 = (longlong *)(**(longlong **)(param_1 + 200) + 0x18);
        if (plVar9 != (longlong *)0x0) {
          plVar13 = plVar9;
        }
        plVar9 = *(longlong **)(**(longlong **)(param_1 + 0xd0) + 0x30);
        plVar18 = (longlong *)(**(longlong **)(param_1 + 0xd0) + 0x18);
        if (plVar9 != (longlong *)0x0) {
          plVar18 = plVar9;
        }
        lVar10 = *plVar13;
        lVar17 = (longlong)((int)plVar13[2] * iVar6);
        fVar3 = *(float *)(lVar10 + lVar17 * 0xc);
        fVar4 = *(float *)(lVar10 + 4 + lVar17 * 0xc);
        fVar5 = *(float *)(lVar10 + 8 + lVar17 * 0xc);
        local_110 = *(float *)(*plVar18 + (longlong)(iVar6 * (int)plVar18[2]) * 4);
        local_108 = (fVar20 * fVar4 - fVar3 * fVar1) * local_110;
        local_10c = (fVar2 * fVar3 - fVar5 * fVar20) * local_110;
        local_110 = (fVar1 * fVar5 - fVar4 * fVar2) * local_110;
        fVar20 = local_108 * local_108 + local_110 * local_110 + local_10c * local_10c;
        if (1e-08 < fVar20) {
          fVar20 = 1.0 / SQRT(fVar20);
          local_110 = local_110 * fVar20;
          local_10c = local_10c * fVar20;
          local_108 = local_108 * fVar20;
        }
        uVar11 = FUN_146fb20f2(&local_e8,&local_110,
                               *(undefined4 *)((longlong)&local_f8 + lVar19 * 4));
        *(undefined4 *)((longlong)&local_104 + lVar19 * 4) = uVar11;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
      FUN_146c01580(**(undefined8 **)(param_1 + 0xa8),uVar16,&local_104,1);
      uVar12 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar14) {
        uVar12 = uVar14;
      }
      do {
        if (uVar12 - 1 == (int)uVar16) {
          uVar16 = (ulonglong)uVar12;
          break;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar7 + 0x148) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar16 != uVar14);
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146fb273e(&local_e8);
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abedaa FUN_142abedaa body=110 status=ok
// SIG undefined FUN_142abedaa(void)

undefined8 * FUN_142abedaa(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abee18 FUN_142abee18 body=547 status=ok
// SIG undefined FUN_142abee18(void)

longlong * FUN_142abee18(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abf03c FUN_142abf03c body=1134 status=ok
// SIG undefined FUN_142abf03c(void)

void FUN_142abf03c(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1a8 [44];
  uint local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar6 = *(longlong *)(param_1 + 200);
  lVar7 = **(longlong **)(param_1 + 0xa8);
  fVar1 = *(float *)(lVar7 + 0x40);
  fVar2 = *(float *)(lVar7 + 0x44);
  fVar3 = *(float *)(lVar7 + 0x48);
  fVar4 = *(float *)(lVar7 + 0x4c);
  local_f8 = **(undefined8 **)(param_1 + 0xb0);
  uVar16 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  lVar7 = *(longlong *)(param_1 + 0xb8);
  uVar17 = *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144);
  if ((uVar17 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x148) - 1U))) {
    uVar16 = 1;
    uVar11 = 1;
    if (1 < (int)uVar17) {
      uVar16 = (ulonglong)uVar17;
    }
    do {
      uVar14 = uVar11;
      if ((uint)uVar16 == uVar14) goto LAB_142abf1a4;
      uVar11 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x148))[uVar14 >> 9] +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    uVar16 = (ulonglong)uVar14;
  }
LAB_142abf1a4:
  if ((uint)uVar16 != uVar17) {
    local_17c = uVar17;
    do {
      uVar17 = (uint)uVar16;
      lVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x130) + (uVar16 >> 9) * 8);
      local_150 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      local_158 = *(undefined8 *)(lVar8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
      lVar8 = **(longlong **)(param_1 + 0xc0);
      local_164 = 0xffffffffffffffff;
      local_15c = 0xffffffff;
      lVar18 = 0;
      do {
        plVar9 = *(longlong **)(**(longlong **)(param_1 + 0xa8) + 0x30);
        plVar13 = (longlong *)(**(longlong **)(param_1 + 0xa8) + 0x18);
        if (plVar9 != (longlong *)0x0) {
          plVar13 = plVar9;
        }
        lVar10 = *plVar13;
        lVar15 = (longlong)
                 ((int)plVar13[2] * *(int *)(lVar8 + (longlong)(int)uVar17 * 0x14 + 8 + lVar18 * 4))
                 * 0x10;
        fVar19 = *(float *)(lVar10 + lVar15);
        fVar20 = *(float *)(lVar10 + 4 + lVar15);
        fVar21 = *(float *)(lVar10 + 8 + lVar15);
        fVar5 = *(float *)(lVar10 + 0xc + lVar15);
        if (*(char *)(lVar6 + 4) == '\x01') {
          if (fVar19 <= 0.0031308) {
            fVar19 = fVar19 * 12.92;
          }
          else {
            fVar19 = powf(fVar19,0.41666666);
            fVar19 = fVar19 * 1.055 + -0.055;
          }
          if (fVar20 <= 0.0031308) {
            fVar20 = fVar20 * 12.92;
          }
          else {
            fVar20 = powf(fVar20,0.41666666);
            fVar20 = fVar20 * 1.055 + -0.055;
          }
          if (fVar21 <= 0.0031308) {
            fVar21 = fVar21 * 12.92;
          }
          else {
            fVar21 = powf(fVar21,0.41666666);
            fVar21 = fVar21 * 1.055 + -0.055;
          }
        }
        local_178 = fVar19;
        local_174 = fVar20;
        local_170 = fVar21;
        local_16c = fVar5;
        uVar12 = FUN_146fb27cc(&local_148,&local_178,
                               *(undefined4 *)((longlong)&local_158 + lVar18 * 4));
        *(undefined4 *)((longlong)&local_164 + lVar18 * 4) = uVar12;
        **(byte **)(param_1 + 0xd0) =
             **(byte **)(param_1 + 0xd0) |
             (fVar5 != fVar4 || fVar21 != fVar3) | (-(fVar19 != fVar1) | -(fVar20 != fVar2)) & 1U;
        lVar18 = lVar18 + 1;
      } while (lVar18 != 3);
      FUN_146c2a048(**(undefined8 **)(param_1 + 0xb0),uVar16,&local_164,1);
      uVar11 = uVar17 + 1;
      if ((int)(uVar17 + 1) < (int)local_17c) {
        uVar11 = local_17c;
      }
      do {
        if (uVar11 - 1 == (int)uVar16) {
          uVar16 = (ulonglong)uVar11;
          break;
        }
        uVar17 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar17;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar7 + 0x148) +
                                             (ulonglong)(uVar17 >> 9) * 8) +
                                           (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar16 != local_17c);
    local_100 = 0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146fb2e72(&local_148);
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abf4ac FUN_142abf4ac body=110 status=ok
// SIG undefined FUN_142abf4ac(void)

undefined8 * FUN_142abf4ac(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abf51a FUN_142abf51a body=547 status=ok
// SIG undefined FUN_142abf51a(void)

longlong * FUN_142abf51a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abf73e FUN_142abf73e body=293 status=ok
// SIG undefined FUN_142abf73e(void)

void FUN_142abf73e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  uVar3 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar6 = 0;
  if ((uVar3 != 0) &&
     (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar7 = 1;
    if (1 < (int)uVar3) {
      uVar5 = uVar3;
    }
    do {
      uVar6 = uVar5;
      if (uVar5 == uVar7) break;
      uVar9 = uVar7 >> 9;
      uVar4 = uVar7 & 0x1ff;
      uVar6 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar9] +
                                         (ulonglong)uVar4 * 2) - 1U));
  }
  if (uVar6 != uVar3) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    do {
      iVar8 = *(int *)(**(longlong **)(param_1 + 0xb0) + 4 + (longlong)(int)uVar6 * 0x14);
      if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar2 + 0x38))) {
        iVar8 = *(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 4);
      }
      *(int *)(*(longlong *)
                (*(longlong *)(**(longlong **)(param_1 + 0xc0) + 0x20) + (ulonglong)(uVar6 >> 9) * 8
                ) + (ulonglong)(uVar6 & 0x1ff) * 4) = iVar8;
      uVar5 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar3) {
        uVar5 = uVar3;
      }
      do {
        uVar7 = uVar5;
        if (uVar5 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar7 = uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
      uVar6 = uVar7;
    } while (uVar6 != uVar3);
  }
  return;
}



// FUNCTION 142abf864 FUN_142abf864 body=110 status=ok
// SIG undefined FUN_142abf864(void)

undefined8 * FUN_142abf864(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abf8d2 FUN_142abf8d2 body=547 status=ok
// SIG undefined FUN_142abf8d2(void)

longlong * FUN_142abf8d2(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abfaf6 FUN_142abfaf6 body=329 status=ok
// SIG undefined FUN_142abfaf6(void)

void FUN_142abfaf6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0xb8);
  uVar6 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar9 = 0;
  if ((uVar6 != 0) && (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar8 = 1;
    uVar4 = 1;
    if (1 < (int)uVar6) {
      uVar8 = uVar6;
    }
    do {
      uVar9 = uVar8;
      if (uVar8 == uVar4) break;
      uVar5 = uVar4 >> 9;
      uVar7 = uVar4 & 0x1ff;
      uVar9 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  if (uVar9 != uVar6) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x30);
      local_58 = *(longlong *)(param_1 + 0xa8) + 0x18;
      if (lVar3 != 0) {
        local_58 = lVar3;
      }
      local_50 = *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + (longlong)(int)uVar9 * 4);
      local_60 = &local_58;
      FUN_146fb2f62(*(undefined8 *)(param_1 + 0xb0),uVar9,&local_60);
      uVar8 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar6) {
        uVar8 = uVar6;
      }
      do {
        uVar4 = uVar8;
        if (uVar8 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar4 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar4;
    } while (uVar9 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142abfc40 FUN_142abfc40 body=110 status=ok
// SIG undefined FUN_142abfc40(void)

undefined8 * FUN_142abfc40(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142abfcae FUN_142abfcae body=547 status=ok
// SIG undefined FUN_142abfcae(void)

longlong * FUN_142abfcae(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142abfed2 FUN_142abfed2 body=610 status=ok
// SIG undefined FUN_142abfed2(void)

void FUN_142abfed2(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
  if (lVar11 != 0) {
    lVar12 = *(longlong *)(lVar11 + 0x80);
    if (*(longlong *)(lVar11 + 0x80) == 0) {
      lVar12 = lVar11;
    }
    uVar6 = *(int *)(lVar12 + 0x18) - *(int *)(lVar12 + 0x78);
    if (uVar6 != 0 && *(int *)(lVar12 + 0x78) <= *(int *)(lVar12 + 0x18)) {
      lVar11 = 0;
      lVar12 = 0;
      uVar10 = 0;
      do {
        lVar3 = **(longlong **)(param_1 + 0xb0);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
        lVar8 = *(longlong *)(lVar4 + 0x80);
        if (lVar8 == 0) {
          lVar8 = lVar4;
        }
        FUN_146fa81bc(lVar8 + 0x20,&local_48,DAT_14c99c750);
        plVar7 = (longlong *)(local_48 + 0x18);
        if (*(longlong **)(local_48 + 0x30) != (longlong *)0x0) {
          plVar7 = *(longlong **)(local_48 + 0x30);
        }
        iVar9 = (int)uVar10;
        *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + uVar10 * 8) =
             *(undefined8 *)(*plVar7 + (longlong)((int)plVar7[2] * iVar9) * 8);
        lVar3 = **(longlong **)(param_1 + 0xb8);
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
          lVar8 = *(longlong *)(lVar4 + 0x80);
          if (lVar8 == 0) {
            lVar8 = lVar4;
          }
          FUN_146fa8270(lVar8 + 0x20,&local_48,DAT_14c99c758);
          plVar7 = (longlong *)(local_48 + 0x18);
          if (*(longlong **)(local_48 + 0x30) != (longlong *)0x0) {
            plVar7 = *(longlong **)(local_48 + 0x30);
          }
          *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + uVar10 * 4) =
               *(undefined4 *)(*plVar7 + (longlong)((int)plVar7[2] * iVar9) * 4);
        }
        lVar3 = **(longlong **)(param_1 + 0xc0);
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
          lVar8 = *(longlong *)(lVar4 + 0x80);
          if (lVar8 == 0) {
            lVar8 = lVar4;
          }
          FUN_146fa8324(lVar8 + 0x20,&local_48,DAT_14c99c760);
          plVar7 = (longlong *)(local_48 + 0x18);
          if (*(longlong **)(local_48 + 0x30) != (longlong *)0x0) {
            plVar7 = *(longlong **)(local_48 + 0x30);
          }
          memmove((void *)(*(longlong *)(lVar3 + 0x18) + lVar11),
                  (void *)((longlong)((int)plVar7[2] * iVar9) * 0x60 + *plVar7),0x60);
        }
        lVar3 = **(longlong **)(param_1 + 200);
        if (lVar3 != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8);
          lVar8 = *(longlong *)(lVar4 + 0x80);
          if (lVar8 == 0) {
            lVar8 = lVar4;
          }
          FUN_146fa83d8(lVar8 + 0x20,&local_48,DAT_14c99c768);
          plVar7 = (longlong *)(local_48 + 0x18);
          if (*(longlong **)(local_48 + 0x30) != (longlong *)0x0) {
            plVar7 = *(longlong **)(local_48 + 0x30);
          }
          puVar1 = (undefined8 *)(*plVar7 + (longlong)((int)plVar7[2] * iVar9) * 0x10);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0x18) + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
        lVar11 = lVar11 + 0x60;
      } while (uVar6 != uVar10);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ac0136 FUN_142ac0136 body=110 status=ok
// SIG undefined FUN_142ac0136(void)

undefined8 * FUN_142ac0136(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ac01a4 FUN_142ac01a4 body=547 status=ok
// SIG undefined FUN_142ac01a4(void)

longlong * FUN_142ac01a4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142ac03c8 FUN_142ac03c8 body=352 status=ok
// SIG undefined FUN_142ac03c8(void)

void FUN_142ac03c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar9 = (longlong)*(int *)(param_1 + 0xa8);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x208) + 0x60) + lVar9 * 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 200);
    lVar3 = *(longlong *)(**(longlong **)(param_1 + 0xb0) + lVar9 * 8);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(**(longlong **)(param_1 + 0xc0) + lVar9 * 8);
    lVar9 = *(longlong *)(param_1 + 0xb8);
    uVar8 = *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144);
    uVar11 = 0;
    if ((uVar8 != 0) &&
       (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar6 = 1;
      if (1 < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar11 = uVar10;
        if (uVar10 == uVar6) break;
        uVar7 = uVar6 >> 9;
        uVar4 = uVar6 & 0x1ff;
        uVar11 = uVar6;
        uVar6 = uVar6 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x148))[uVar7] +
                                           (ulonglong)uVar4 * 2) - 1U));
    }
    if (uVar11 != uVar8) {
      do {
        plVar5 = *(longlong **)(lVar3 + 0x30);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)(lVar3 + 0x18);
        }
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(uVar11 >> 9) * 8) +
         (ulonglong)(uVar11 & 0x1ff) * 4) =
             *(undefined4 *)
              (*plVar5 +
              (longlong)
              ((int)plVar5[2] * *(int *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar11 * 4)) * 4)
        ;
        uVar10 = uVar11 + 1;
        if ((int)(uVar11 + 1) < (int)uVar8) {
          uVar10 = uVar8;
        }
        do {
          uVar6 = uVar10;
          if (uVar10 - 1 == uVar11) break;
          uVar11 = uVar11 + 1;
          uVar6 = uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar9 + 0x148) +
                                               (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        uVar11 = uVar6;
      } while (uVar11 != uVar8);
    }
  }
  return;
}



// FUNCTION 142ac0528 FUN_142ac0528 body=110 status=ok
// SIG undefined FUN_142ac0528(void)

undefined8 * FUN_142ac0528(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ac0596 FUN_142ac0596 body=547 status=ok
// SIG undefined FUN_142ac0596(void)

longlong * FUN_142ac0596(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142ac07ba FUN_142ac07ba body=339 status=ok
// SIG undefined FUN_142ac07ba(void)

void FUN_142ac07ba(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar9 = (longlong)*(int *)(param_1 + 200);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x208) + 0x50) + lVar9 * 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar3 = *(longlong *)(**(longlong **)(param_1 + 0xb0) + lVar9 * 8);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(**(longlong **)(param_1 + 0xb8) + lVar9 * 8);
    lVar9 = *(longlong *)(param_1 + 0xc0);
    uVar8 = *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24);
    uVar11 = 0;
    if ((uVar8 != 0) &&
       (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x28) - 1U))) {
      uVar10 = 1;
      uVar6 = 1;
      if (1 < (int)uVar8) {
        uVar10 = uVar8;
      }
      do {
        uVar11 = uVar10;
        if (uVar10 == uVar6) break;
        uVar7 = uVar6 >> 9;
        uVar4 = uVar6 & 0x1ff;
        uVar11 = uVar6;
        uVar6 = uVar6 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x28))[uVar7] +
                                           (ulonglong)uVar4 * 2) - 1U));
    }
    if (uVar11 != uVar8) {
      do {
        plVar5 = *(longlong **)(lVar3 + 0x30);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)(lVar3 + 0x18);
        }
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(uVar11 >> 9) * 8) +
         (ulonglong)(uVar11 & 0x1ff) * 4) =
             *(undefined4 *)
              (*plVar5 +
              (longlong)
              ((int)plVar5[2] * *(int *)(*(longlong *)(lVar2 + 0x18) + (longlong)(int)uVar11 * 4)) *
              4);
        uVar10 = uVar11 + 1;
        if ((int)(uVar11 + 1) < (int)uVar8) {
          uVar10 = uVar8;
        }
        do {
          uVar6 = uVar10;
          if (uVar10 - 1 == uVar11) break;
          uVar11 = uVar11 + 1;
          uVar6 = uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar9 + 0x28) +
                                               (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        uVar11 = uVar6;
      } while (uVar11 != uVar8);
    }
  }
  return;
}



// FUNCTION 142ac090e FUN_142ac090e body=110 status=ok
// SIG undefined FUN_142ac090e(void)

undefined8 * FUN_142ac090e(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ac097c FUN_142ac097c body=147 status=ok
// SIG undefined FUN_142ac097c(void)

void FUN_142ac097c(void)

{
  uint uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (char *)0x8000000149faa96c;
  local_24 = 0xe;
  local_18 = FUN_14577453c();
  local_14 = 1;
  FUN_14628fd7a(&local_20);
  local_20 = "PolyTriGroups";
  local_18 = 0xd;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  DAT_14c99c7c8 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac0a10 FUN_142ac0a10 body=55 status=ok
// SIG undefined FUN_142ac0a10(void)

void FUN_142ac0a10(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cb68 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cb68 = FUN_14171c317(FUN_146291392,uVar1,L"EDataflowMathConstantsEnum");
  }
  return;
}



// FUNCTION 142ac0a48 FUN_142ac0a48 body=277 status=ok
// SIG undefined FUN_142ac0a48(void)

undefined8 FUN_142ac0a48(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar4 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar9 = (uint)lVar1 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar5 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      lVar2 = *param_1;
      uVar6 = 0;
      iVar7 = iVar10;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar7 * 0x60) == lVar1) goto LAB_142ac0af2;
        iVar7 = *(int *)((longlong)iVar7 * 0x60 + lVar2 + 0x50);
      } while (iVar7 != -1);
      goto LAB_142ac0b0b;
    }
  }
  uVar6 = 0;
  goto LAB_142ac0b0b;
  while (iVar10 = *(int *)(lVar8 + 0x50), iVar10 != -1) {
LAB_142ac0af2:
    lVar8 = lVar2 + (longlong)iVar10 * 0x60;
    if (*(longlong *)(lVar2 + (longlong)iVar10 * 0x60) == lVar1) goto LAB_142ac0b2c;
  }
  lVar8 = 0;
LAB_142ac0b2c:
  local_28 = param_3[3];
  pcVar3 = *(code **)(lVar8 + 0x10);
  plVar5 = (longlong *)(lVar8 + 0x30);
  if (*(longlong **)(lVar8 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar8 + 0x20);
  }
  uVar6 = (**(code **)(*plVar5 + 8))();
  uVar6 = (*pcVar3)(uVar6,param_2,&local_28);
LAB_142ac0b0b:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 142ac0b5e FUN_142ac0b5e body=125 status=ok
// SIG undefined FUN_142ac0b5e(void)

void FUN_142ac0b5e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0xffffffff;
  local_28 = 0;
  local_38 = param_1 + 0x198;
  uVar1 = FUN_146fb4872();
  FUN_146fcab70(uVar1,local_48,param_2,param_1 + 0x198);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac0bdc FUN_142ac0bdc body=169 status=ok
// SIG undefined FUN_142ac0bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ac0bdc(void)

{
  _DAT_14c99d078 = 0;
  if (DAT_14c99d070 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c99d038 = 0;
  if (DAT_14c99d03c != 0) {
    FUN_14472eb64(&DAT_14c99d030,0);
  }
  _DAT_14c99d060 = 0xffffffff;
  DAT_14c99d058 = 0;
  if (0x80 < DAT_14c99d05c) {
    DAT_14c99d05c = 0x80;
    FUN_1446efbd8(&DAT_14c99d040,0);
  }
  if (DAT_14c99d050 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99d030 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142ac0c86 FUN_142ac0c86 body=3868 status=ok
// SIG undefined FUN_142ac0c86(void)

void FUN_142ac0c86(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  undefined1 auStack_248 [35];
  byte local_225;
  uint local_224;
  longlong *local_220;
  int local_214;
  longlong local_210;
  int local_204;
  longlong local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  int local_1d4;
  longlong local_1d0;
  longlong *local_1c8;
  longlong *plStack_1c0;
  longlong local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  int local_17c;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_14c;
  undefined8 local_148;
  longlong **pplStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_146fb4cae(param_2);
  local_204 = FUN_1448332aa(param_1,&DAT_149e3cc78);
  local_214 = FUN_1448332aa(param_1,&DAT_149e3cbb8);
  iVar11 = FUN_1448332aa(param_1,&DAT_149e3cbb8);
  local_168 = (undefined8 *)0x0;
  uStack_160 = (longlong **)0x0;
  local_170 = 0;
  local_178 = 0;
  local_17c = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_1a8 = &local_198;
  local_198 = 0;
  uStack_190 = 0;
  local_1a0 = 0x94 < iVar11;
  puVar5 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar5 + 1;
  if ((int *)puVar5[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_17c,4);
    }
    else {
      FUN_14572512c(param_1,&local_17c);
    }
  }
  else {
    local_17c = *(int *)*puVar5;
    *puVar5 = (ulonglong)piVar1;
  }
  local_210 = param_2;
  if (0 < local_17c) {
    lVar18 = param_2 + 0x88;
    iVar11 = local_17c;
    local_200 = lVar18;
    local_1f8 = param_3;
    do {
      local_1b0 = 0;
      plVar13 = (longlong *)FUN_1402ac1b3(param_1,&local_168);
      plVar13 = (longlong *)(**(code **)(*plVar13 + 0x160))(plVar13,&local_170);
      (**(code **)(*plVar13 + 0x160))(plVar13,&local_1b0);
      uVar14 = FUN_1414c23f2();
      local_148 = local_168;
      pplStack_140 = uStack_160;
      local_138 = local_170;
      lStack_130 = local_1b0;
      local_128 = param_3;
      FUN_146fd4430(uVar14,&local_1c8,param_2,&local_148);
      local_1d0 = 0;
      FUN_1408383eb(param_1,&local_1d0);
      if (local_1c8 == (longlong *)0x0) {
        lVar15 = (**(code **)(*param_1 + 0x28))(param_1);
        (**(code **)(*param_1 + 0x1a0))(param_1,lVar15 + local_1d0);
        FUN_144a13f80(lVar18,&local_148,&local_1b0,0);
      }
      else {
        FUN_1447addd0(&local_168,0x10);
        pplStack_140 = &local_1c8;
        local_148 = &local_168;
        FUN_146fcd45a(&local_b8,&local_1e8,&local_148);
        uVar12 = FUN_1448332aa(param_1,&DAT_149e3cbb8);
        local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar12);
        if (local_204 < 0x73) {
          puVar5 = (ulonglong *)param_1[1];
          piVar1 = (int *)*puVar5 + 1;
          if ((int *)puVar5[1] < piVar1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,&local_1d4,4);
            }
            else {
              FUN_14572512c(param_1,&local_1d4);
            }
          }
          else {
            local_1d4 = *(int *)*puVar5;
            *puVar5 = (ulonglong)piVar1;
          }
          local_1e8 = (longlong *)0x0;
          uStack_1e0 = 0;
          local_148 = (undefined8 *)0x0;
          pplStack_140 = (longlong **)0x0;
          FUN_146fb7972(local_1c8 + 0xf,&local_148);
          FUN_146fb5508(&local_1e8,&local_148);
          if (local_148 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          local_148 = (undefined8 *)0x0;
          pplStack_140 = (longlong **)0x0;
          FUN_146fb7440(local_1c8 + 0x1a,&local_148);
          FUN_146fb5566(&local_1e8,&local_148);
          if (local_148 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (0 < local_1d4) {
            iVar22 = 0;
            iVar17 = 1;
            iVar20 = 0;
            do {
              plVar13 = (longlong *)FUN_1402ac1b3(param_1,&local_168);
              plVar13 = (longlong *)(**(code **)(*plVar13 + 0x160))(plVar13,&local_170);
              (**(code **)(*plVar13 + 0x160))(plVar13,&local_178);
              uVar16 = iVar20 + iVar22;
              if (((int)uVar16 < (int)uStack_1e0 && -1 < (int)uVar16) &&
                 (local_1f0 = (longlong *)local_1e8[uVar16], local_1f0 != (longlong *)0x0)) {
                iVar2 = iVar17 + iVar22;
                iVar10 = iVar22;
                do {
                  iVar22 = iVar10;
                  if (local_1f0[2] == local_178) {
                    FUN_142ac1ba4(&local_1a8,local_1f0,local_170);
                    *(undefined4 *)(local_1f0 + 5) = (undefined4)local_168;
                    *(undefined4 *)((longlong)local_1f0 + 0x2c) = local_168._4_4_;
                    *(undefined4 *)(local_1f0 + 6) = (undefined4)uStack_160;
                    *(undefined4 *)((longlong)local_1f0 + 0x34) = uStack_160._4_4_;
                    FUN_1447addd0(&local_168,0x10);
                    pplStack_140 = &local_1f0;
                    local_148 = &local_168;
                    FUN_146fcd9e6(local_108,&local_14c,&local_148);
                    goto LAB_142ac1669;
                  }
                  if ((iVar2 < 0) || ((int)uStack_1e0 <= iVar17 + iVar22)) break;
                  local_1f0 = (longlong *)local_1e8[(uint)(iVar17 + iVar22)];
                  iVar10 = iVar22 + 1;
                } while (local_1f0 != (longlong *)0x0);
                iVar22 = iVar22 + 1;
              }
LAB_142ac1669:
              iVar20 = iVar20 + 1;
              iVar17 = iVar17 + 1;
            } while (iVar20 < local_1d4);
          }
          (**(code **)(*local_1c8 + 0xb8))(local_1c8,param_1);
          lVar18 = local_200;
          param_3 = local_1f8;
          param_2 = local_210;
          if (local_1e8 != (longlong *)0x0) {
            FUN_1400020a8();
            lVar18 = local_200;
            param_3 = local_1f8;
            param_2 = local_210;
          }
        }
        else {
          (**(code **)(*local_1c8 + 0xb8))(local_1c8,param_1);
          puVar5 = (ulonglong *)param_1[1];
          piVar1 = (int *)*puVar5 + 1;
          if ((int *)puVar5[1] < piVar1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,&local_14c,4);
            }
            else {
              FUN_14572512c(param_1,&local_14c);
            }
          }
          else {
            local_14c = *(int *)*puVar5;
            *puVar5 = (ulonglong)piVar1;
          }
          iVar17 = 0;
          if (local_14c < 1) {
            local_225 = 1;
            local_224 = 0;
          }
          else {
            local_225 = 1;
            local_224 = 0;
            do {
              plVar13 = (longlong *)FUN_1402ac1b3(param_1,&local_168);
              plVar13 = (longlong *)(**(code **)(*plVar13 + 0x160))(plVar13,&local_170);
              (**(code **)(*plVar13 + 0x160))(plVar13,&local_178);
              if (0x8d < local_214) {
                puVar5 = (ulonglong *)param_1[1];
                piVar1 = (int *)*puVar5;
                if ((int *)puVar5[1] < piVar1 + 1) {
                  local_148 = (undefined8 *)
                              (CONCAT44(local_148._4_4_,local_224) & 0xffffffff000000ff);
                  (**(code **)(*param_1 + 0x170))(param_1,&local_148,4);
                  if (1 < (uint)local_148) {
                    FUN_14572541c(param_1);
                  }
                  local_224 = CONCAT31((int3)((uint)local_148 >> 8),(uint)local_148 != 0);
                }
                else {
                  local_224 = (uint)CONCAT71((int7)((ulonglong)piVar1 >> 8),*piVar1 != 0);
                  *puVar5 = (ulonglong)(piVar1 + 1);
                }
              }
              if (0x99 < (int)local_220) {
                puVar5 = (ulonglong *)param_1[1];
                piVar1 = (int *)*puVar5 + 1;
                if ((int *)puVar5[1] < piVar1) {
                  local_148 = (undefined8 *)CONCAT44(local_148._4_4_,(uint)local_225);
                  (**(code **)(*param_1 + 0x170))(param_1,&local_148,4);
                  if (1 < (uint)local_148) {
                    FUN_14572541c(param_1);
                  }
                  local_225 = (uint)local_148 != 0;
                }
                else {
                  local_225 = *(int *)*puVar5 != 0;
                  *puVar5 = (ulonglong)piVar1;
                }
              }
              plVar13 = (longlong *)FUN_146fb55c4(local_1c8,local_178);
              if ((plVar13 != (longlong *)0x0) ||
                 (plVar13 = (longlong *)(**(code **)(*local_1c8 + 0xb0))(local_1c8,&local_178),
                 plVar13 != (longlong *)0x0)) {
                if ((local_224 & 1) != 0) {
                  plVar13[1] = local_170;
                  *(byte *)((longlong)plVar13 + 0x45) =
                       (*(byte *)((longlong)plVar13 + 0x45) & 0xfc |
                       (local_170 != DAT_14c99cdc8) * '\x02') + 1;
                }
                FUN_142ac1ba4(&local_1a8,plVar13);
                *(byte *)((longlong)plVar13 + 0x45) =
                     *(byte *)((longlong)plVar13 + 0x45) & 0xf7 | (local_225 & 1) << 3;
                *(undefined4 *)(plVar13 + 5) = (undefined4)local_168;
                *(undefined4 *)((longlong)plVar13 + 0x2c) = local_168._4_4_;
                *(undefined4 *)(plVar13 + 6) = (undefined4)uStack_160;
                *(undefined4 *)((longlong)plVar13 + 0x34) = uStack_160._4_4_;
                FUN_1447addd0(&local_168,0x10);
                local_148 = &local_168;
                pplStack_140 = &local_1e8;
                local_1e8 = plVar13;
                FUN_146fcde90(local_108,&local_1f0,&local_148);
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 < local_14c);
          }
          puVar5 = (ulonglong *)param_1[1];
          piVar1 = (int *)*puVar5 + 1;
          if ((int *)puVar5[1] < piVar1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,&local_14c,4);
            }
            else {
              FUN_14572512c(param_1,&local_14c);
            }
          }
          else {
            local_14c = *(int *)*puVar5;
            *puVar5 = (ulonglong)piVar1;
          }
          lVar18 = local_200;
          if (0 < local_14c) {
            iVar17 = 0;
            do {
              plVar13 = (longlong *)FUN_1402ac1b3(param_1,&local_168);
              plVar13 = (longlong *)(**(code **)(*plVar13 + 0x160))(plVar13,&local_170);
              (**(code **)(*plVar13 + 0x160))(plVar13,&local_178);
              if (0x8d < local_214) {
                puVar5 = (ulonglong *)param_1[1];
                piVar1 = (int *)*puVar5;
                if ((int *)puVar5[1] < piVar1 + 1) {
                  local_148 = (undefined8 *)
                              (CONCAT44(local_148._4_4_,local_224) & 0xffffffff000000ff);
                  (**(code **)(*param_1 + 0x170))(param_1,&local_148,4);
                  if (1 < (uint)local_148) {
                    FUN_14572541c(param_1);
                  }
                  local_224 = CONCAT31((int3)((uint)local_148 >> 8),(uint)local_148 != 0);
                }
                else {
                  local_224 = (uint)CONCAT71((int7)((ulonglong)piVar1 >> 8),*piVar1 != 0);
                  *puVar5 = (ulonglong)(piVar1 + 1);
                }
              }
              if (0x99 < (int)local_220) {
                puVar5 = (ulonglong *)param_1[1];
                piVar1 = (int *)*puVar5 + 1;
                if ((int *)puVar5[1] < piVar1) {
                  local_148 = (undefined8 *)CONCAT44(local_148._4_4_,(uint)local_225);
                  (**(code **)(*param_1 + 0x170))(param_1,&local_148,4);
                  if (1 < (uint)local_148) {
                    FUN_14572541c(param_1);
                  }
                  local_225 = (uint)local_148 != 0;
                }
                else {
                  local_225 = *(int *)*puVar5 != 0;
                  *puVar5 = (ulonglong)piVar1;
                }
              }
              plVar13 = (longlong *)FUN_146fb56dc(local_1c8,local_178);
              if ((plVar13 != (longlong *)0x0) ||
                 (plVar13 = (longlong *)(**(code **)(*local_1c8 + 0xa8))(local_1c8,&local_178),
                 plVar13 != (longlong *)0x0)) {
                if ((local_224 & 1) != 0) {
                  plVar13[1] = local_170;
                  *(byte *)((longlong)plVar13 + 0x45) =
                       (*(byte *)((longlong)plVar13 + 0x45) & 0xfc |
                       (local_170 != DAT_14c99cdc8) * '\x02') + 1;
                }
                FUN_142ac1ba4(&local_1a8,plVar13);
                *(byte *)((longlong)plVar13 + 0x45) =
                     *(byte *)((longlong)plVar13 + 0x45) & 0xf7 | (local_225 & 1) << 3;
                *(undefined4 *)(plVar13 + 5) = (undefined4)local_168;
                *(undefined4 *)((longlong)plVar13 + 0x2c) = local_168._4_4_;
                *(undefined4 *)(plVar13 + 6) = (undefined4)uStack_160;
                *(undefined4 *)((longlong)plVar13 + 0x34) = uStack_160._4_4_;
                FUN_1447addd0(&local_168,0x10);
                local_148 = &local_168;
                pplStack_140 = &local_1e8;
                local_1e8 = plVar13;
                FUN_146fcde90(local_108,&local_1f0,&local_148);
              }
              iVar17 = iVar17 + 1;
              lVar18 = local_200;
            } while (iVar17 < local_14c);
          }
        }
      }
      plVar13 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_1c0 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plStack_1c0)(plStack_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      bVar9 = 1 < iVar11;
      iVar11 = iVar11 + -1;
    } while (bVar9);
  }
  local_1c8 = (longlong *)0x0;
  plStack_1c0 = (longlong *)0x0;
  FUN_146fcd1ae(param_1,&local_1c8);
  if ((longlong)(int)plStack_1c0 != 0) {
    local_220 = (longlong *)(local_210 + 0x78);
    lVar15 = (longlong)(int)plStack_1c0 << 6;
    lVar18 = 0;
    plVar13 = local_1c8;
    do {
      uVar12 = FUN_1447addd0(plVar13,0x10);
      iVar11 = FUN_146fcd3e6(&local_b8,uVar12,plVar13);
      if (iVar11 != -1) {
        uVar12 = FUN_1447addd0(plVar13 + 4,0x10);
        iVar11 = FUN_146fcd3e6(&local_b8,uVar12,plVar13 + 4);
        if (iVar11 != -1) {
          plVar7 = plVar13 + 2;
          uVar12 = FUN_1447addd0(plVar7,0x10);
          iVar11 = FUN_146fcd972(local_108,uVar12,plVar7);
          if (iVar11 != -1) {
            plVar6 = plVar13 + 6;
            uVar12 = FUN_1447addd0(plVar6,0x10);
            iVar11 = FUN_146fcd972(local_108,uVar12,plVar6);
            if (iVar11 != -1) {
              uVar12 = FUN_1447addd0(plVar6,0x10);
              iVar11 = FUN_146fcd972(local_108,uVar12,plVar6);
              lVar19 = (longlong)iVar11 * 0x20 + local_108[0];
              if (iVar11 == -1) {
                lVar19 = lVar18;
              }
              if (*(longlong *)(lVar19 + 0x10) != 0) {
                uVar12 = FUN_1447addd0(plVar6,0x10);
                iVar11 = FUN_146fcd972(local_108,uVar12,plVar6);
                lVar19 = 0;
                if (iVar11 != -1) {
                  lVar19 = (longlong)iVar11 * 0x20 + local_108[0];
                }
                if (*(char *)(*(longlong *)(lVar19 + 0x10) + 0x44) == '\x02') {
                  uVar12 = FUN_1447addd0(plVar7,0x10);
                  iVar11 = FUN_146fcd972(local_108,uVar12,plVar7);
                  lVar19 = 0;
                  if (iVar11 != -1) {
                    lVar19 = (longlong)iVar11 * 0x20 + local_108[0];
                  }
                  if (*(longlong *)(lVar19 + 0x10) != 0) {
                    uVar12 = FUN_1447addd0(plVar7,0x10);
                    iVar11 = FUN_146fcd972(local_108,uVar12,plVar7);
                    lVar19 = 0;
                    if (iVar11 != -1) {
                      lVar19 = (longlong)iVar11 * 0x20 + local_108[0];
                    }
                    if (*(char *)(*(longlong *)(lVar19 + 0x10) + 0x44) == '\x01') {
                      uVar12 = FUN_1447addd0(plVar6,0x10);
                      iVar11 = FUN_146fcd972(local_108,uVar12,plVar6);
                      lVar19 = (longlong)iVar11 * 0x20 + local_108[0];
                      if (iVar11 == -1) {
                        lVar19 = lVar18;
                      }
                      plVar6 = *(longlong **)(lVar19 + 0x10);
                      uVar12 = FUN_1447addd0(plVar7,0x10);
                      iVar11 = FUN_146fcd972(local_108,uVar12,plVar7);
                      lVar19 = (longlong)iVar11 * 0x20 + local_108[0];
                      if (iVar11 == -1) {
                        lVar19 = lVar18;
                      }
                      plVar7 = *(longlong **)(lVar19 + 0x10);
                      if ((((plVar7[1] == plVar6[1]) && (plVar6 != (longlong *)0x0)) &&
                          (plVar7 != (longlong *)0x0)) &&
                         (plVar8 = (longlong *)plVar7[9], plVar8 != plVar6)) {
                        if (plVar8 != (longlong *)0x0) {
                          (**(code **)(*plVar8 + 0x30))(plVar8,plVar7);
                          local_118 = plVar8[5];
                          uStack_110 = plVar8[6];
                          local_128 = *(undefined8 *)(plVar8[3] + 8);
                          uStack_120 = *(undefined8 *)(plVar8[3] + 0x10);
                          local_148 = *(undefined8 **)(plVar7[3] + 8);
                          pplStack_140 = *(longlong ***)(plVar7[3] + 0x10);
                          local_138 = plVar7[5];
                          lStack_130 = plVar7[6];
                          FUN_146fb4d40(local_220,&local_148);
                        }
                        (**(code **)(*plVar6 + 0x28))(plVar6,plVar7);
                        (**(code **)(*plVar7 + 0x28))(plVar7,plVar6);
                        local_138 = plVar7[5];
                        lStack_130 = plVar7[6];
                        local_148 = *(undefined8 **)(plVar7[3] + 8);
                        pplStack_140 = *(longlong ***)(plVar7[3] + 0x10);
                        local_118 = plVar6[5];
                        uStack_110 = plVar6[6];
                        local_128 = *(undefined8 *)(plVar6[3] + 8);
                        uStack_120 = *(undefined8 *)(plVar6[3] + 0x10);
                        iVar11 = *(int *)(local_210 + 0x80);
                        *(uint *)(local_210 + 0x80) = iVar11 + 1U;
                        if (*(uint *)(local_210 + 0x84) < iVar11 + 1U) {
                          FUN_146fcd128(local_220,iVar11);
                        }
                        lVar19 = *local_220;
                        lVar21 = (longlong)iVar11 * 0x40;
                        *(longlong *)(lVar19 + lVar21) = (longlong)local_148;
                        ((longlong *)(lVar19 + lVar21))[1] = (longlong)pplStack_140;
                        plVar7 = (longlong *)(lVar19 + 0x10 + lVar21);
                        *plVar7 = local_138;
                        plVar7[1] = lStack_130;
                        puVar3 = (undefined8 *)(lVar19 + 0x20 + lVar21);
                        *puVar3 = local_128;
                        puVar3[1] = uStack_120;
                        puVar4 = (undefined4 *)(lVar19 + 0x30 + lVar21);
                        *puVar4 = (undefined4)local_118;
                        puVar4[1] = local_118._4_4_;
                        puVar4[2] = (undefined4)uStack_110;
                        puVar4[3] = uStack_110._4_4_;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      plVar13 = plVar13 + 8;
      lVar15 = lVar15 + -0x40;
    } while (lVar15 != 0);
  }
  lVar18 = local_198;
  lVar15 = (longlong)(int)uStack_190;
  if (lVar15 != 0) {
    lVar19 = 0;
    do {
      FUN_146fb36e0(*(undefined8 *)(lVar18 + lVar19));
      lVar19 = lVar19 + 8;
    } while (lVar15 * 8 != lVar19);
  }
  if (local_1c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_146fc91a2(local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146fc9230(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ac1ba4 FUN_142ac1ba4 body=373 status=ok
// SIG undefined FUN_142ac1ba4(void)

void FUN_142ac1ba4(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_3;
  if (((char)param_1[1] == '\0') && (*(longlong *)(param_2 + 8) != param_3)) {
    local_50 = *(longlong *)(param_2 + 8);
    FUN_1400021e4(&local_50,&local_48);
    FUN_1400021e4(&local_38,&local_60);
    uVar5 = 0;
    uVar6 = (ulonglong)(local_58 - 1);
    if (local_58 == 0) {
      uVar6 = uVar5;
    }
    if (0 < (int)uVar6) {
      puVar3 = local_60;
      if (local_58 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      puVar4 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar4 = local_48;
      }
      lVar7 = 0;
LAB_142ac1c4c:
      uVar1 = *(ushort *)((longlong)puVar4 + lVar7);
      uVar2 = *(ushort *)((longlong)puVar3 + lVar7);
      if (uVar1 == uVar2) {
        iVar8 = 0;
        if ((uVar1 == 0) || (uVar6 == 1)) goto LAB_142ac1c9e;
LAB_142ac1c69:
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + 2;
        goto LAB_142ac1c4c;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
          iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
          goto LAB_142ac1c9e;
        }
        if (uVar6 == 1) {
          iVar8 = 0;
          goto LAB_142ac1c9e;
        }
        goto LAB_142ac1c69;
      }
      iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_142ac1c9e:
      uVar5 = (ulonglong)(iVar8 == 0);
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar5 != '\0') {
      *(longlong *)(param_2 + 8) = param_3;
      *(byte *)(param_2 + 0x45) = *(byte *)(param_2 + 0x45) | 2;
      param_1 = (longlong *)*param_1;
      iVar8 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
        FUN_146fc911c(param_1,iVar8);
      }
      *(longlong *)(*param_1 + (longlong)iVar8 * 8) = param_2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac1d26 FUN_142ac1d26 body=137 status=ok
// SIG undefined FUN_142ac1d26(void)

undefined8 FUN_142ac1d26(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
  uVar2 = FUN_1447addd0(param_1 + 0x28,0x10);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2,uVar2,uVar3);
  if (cVar1 != '\0') {
    return 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))
            (*(longlong **)(param_1 + 0x18),param_2,param_1);
  uVar3 = DAT_14c99d1d8;
  uVar2 = FUN_1447addd0(param_1 + 0x28,0x10);
                    /* WARNING: Could not recover jumptable at 0x000142ac1dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar2,uVar3,*(code **)(*param_2 + 0x30));
  return uVar3;
}



// FUNCTION 142ac1daf FUN_142ac1daf body=614 status=ok
// SIG undefined FUN_142ac1daf(void)

ulonglong FUN_142ac1daf(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                       longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_7c8 [32];
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  code *local_790;
  longlong local_780;
  int local_778;
  undefined1 local_770 [1792];
  undefined1 *local_70;
  uint local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_7c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_798 = FUN_140342cba();
    local_790 = FUN_1468c7f1e;
    local_7a0 = 0;
    local_7a8 = 0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  local_7a0 = CONCAT44(local_7a0._4_4_,2);
  local_7a8 = CONCAT71(local_7a8._1_7_,1);
  FUN_140021b28(local_770,&DAT_14c951a38,param_1,param_2);
  uVar5 = 0;
  if (0 < (int)local_68) {
    do {
      puVar4 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar4 = local_770;
      }
      puVar3 = *(undefined1 **)(puVar4 + (ulonglong)local_68 * 0xe0 + -0x18);
      if (*(undefined1 **)(puVar4 + (ulonglong)local_68 * 0xe0 + -0x18) == (undefined1 *)0x0) {
        puVar3 = puVar4 + (ulonglong)local_68 * 0xe0 + -0xd8;
      }
      if (*(longlong *)
           (puVar3 + (longlong)*(int *)(puVar4 + (ulonglong)local_68 * 0xe0 + -8) * 0x18 + 8) ==
          param_3) {
        if (*param_4 != 0) {
          if (*(longlong *)
               (puVar3 + (longlong)*(int *)(puVar4 + (ulonglong)local_68 * 0xe0 + -8) * 0x18) == 0)
          {
            FUN_140056680(&local_780,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(*(longlong *)
                           (puVar3 + (longlong)*(int *)(puVar4 + (ulonglong)local_68 * 0xe0 + -8) *
                                     0x18) + 0x20,&local_780);
          }
          uVar6 = (ulonglong)(local_778 - 1);
          if (local_778 == 0) {
            uVar6 = uVar5;
          }
          cVar1 = FUN_1402ca054(*param_4,local_780,uVar6);
          if (local_780 != 0) {
            FUN_1400020a8();
          }
          if (cVar1 == '\0') goto LAB_142ac1eef;
        }
        puVar4 = local_770;
        if (local_70 != (undefined1 *)0x0) {
          puVar4 = local_70;
        }
        iVar2 = local_68 - 1;
        puVar3 = *(undefined1 **)(puVar4 + (longlong)iVar2 * 0xe0 + 200);
        if (*(undefined1 **)(puVar4 + (longlong)iVar2 * 0xe0 + 200) == (undefined1 *)0x0) {
          puVar3 = puVar4 + (longlong)iVar2 * 0xe0 + 8;
        }
        uVar5 = *(ulonglong *)
                 (puVar3 + (longlong)*(int *)(puVar4 + (longlong)iVar2 * 0xe0 + 0xd8) * 0x18);
        if (param_5 != 0) {
          FUN_1468fed9a(local_770,param_5);
        }
        break;
      }
LAB_142ac1eef:
      FUN_140caedf2(local_770);
    } while (0 < (int)local_68);
  }
  FUN_140021a7a(local_770);
  if ((local_48 ^ (ulonglong)auStack_7c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 142ac2016 FUN_142ac2016 body=917 status=ok
// SIG undefined FUN_142ac2016(void)

void FUN_142ac2016(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_7d8 [32];
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined *local_7a8;
  code *local_7a0;
  longlong local_798 [2];
  undefined1 local_788 [1792];
  undefined1 *local_88;
  uint local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xc0))();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    if (lVar2 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_7a8 = (undefined *)FUN_140342cba();
        local_7a0 = FUN_1468c7f1e;
        local_7b0 = 0;
        local_7b8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_7b0 = CONCAT44(local_7b0._4_4_,2);
      local_7b8 = CONCAT71(local_7b8._1_7_,1);
      FUN_140021b28(local_788,&DAT_14c951a38,lVar2,param_1);
      if (0 < (int)local_80) {
        do {
          puVar3 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar3 = local_788;
          }
          puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_80 * 0xe0 + -0x18);
          if (*(undefined1 **)(puVar3 + (ulonglong)local_80 * 0xe0 + -0x18) == (undefined1 *)0x0) {
            puVar4 = puVar3 + (ulonglong)local_80 * 0xe0 + -0xd8;
          }
          lVar2 = *(longlong *)
                   (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_80 * 0xe0 + -8) * 0x18);
          if (lVar2 != 0) {
            puVar5 = *(undefined **)(lVar2 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_7a8 = (undefined *)FUN_140342cba();
                local_7a0 = FUN_1468c7f1e;
                local_7b0 = 0;
                local_7b8 = 0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_7a0 = FUN_1403a682c;
              local_7a8 = &DAT_14c951a38;
              local_7b0 = 0;
              local_7b8 = 0x108001;
              FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
              atexit(FUN_142818c9e);
              _Init_thread_footer(&DAT_14c952a58);
            }
            if (DAT_14c952a10 == 0) {
              bVar6 = puVar5 != (undefined *)0x0;
              if (puVar5 != &DAT_14c952a08 && bVar6) {
                do {
                  puVar5 = *(undefined **)(puVar5 + 0x30);
                  bVar6 = puVar5 != (undefined *)0x0;
                  if (puVar5 == &DAT_14c952a08) break;
                } while (puVar5 != (undefined *)0x0);
              }
              if (bVar6) goto LAB_142ac2192;
            }
            else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c952a10) != 0) {
LAB_142ac2192:
              if ((*(longlong *)(lVar2 + 0x70) == 0) ||
                 (*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0xb8) == 0)) {
                local_798[0] = 0;
                local_798[1] = 0;
                FUN_1400348e2(lVar2 + 0x20,local_798);
                if (local_798[0] != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          FUN_140caedf2(local_788);
        } while (0 < (int)local_80);
      }
      FUN_140021a7a(local_788);
    }
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
  }
  if ((local_60 ^ (ulonglong)auStack_7d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ac2762 FUN_142ac2762 body=282 status=ok
// SIG undefined FUN_142ac2762(void)

undefined8 * FUN_142ac2762(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142ac273a);
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



// FUNCTION 142ac287c FUN_142ac287c body=39 status=ok
// SIG undefined FUN_142ac287c(void)

void FUN_142ac287c(void)

{
  if (DAT_14c99cf78 != 0) {
    FUN_145ccfa9a();
    DAT_14c99cf78 = 0;
  }
  return;
}



// FUNCTION 142ac28a3 FUN_142ac28a3 body=837 status=ok
// SIG undefined FUN_142ac28a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ac28a3(void)

{
  undefined8 uVar1;
  uchar auVar2 [8];
  undefined4 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  GUID local_a8;
  GUID local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ulong local_74;
  ushort uStack_70;
  ushort uStack_6e;
  uchar auStack_6c [4];
  uchar auStack_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = (undefined **)0x0;
  uStack_b8 = 0;
  local_c8 = 7;
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149fab760);
  local_c0 = (undefined **)0x0;
  uStack_b8 = 0;
  local_c8 = 4;
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149fabd90);
  uStack_b8 = 1;
  local_c0 = &PTR_FUN_149fad600;
  local_c8 = 0x24;
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149fad620);
  local_c0 = (undefined **)0x0;
  uStack_b8 = 0;
  local_c8 = 0xd;
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149faef10);
  local_c0 = (undefined **)0x0;
  uStack_b8 = 0;
  local_c8 = 1;
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149faf190);
  _DAT_14c99cdb8 = 0xffffffffffffffff;
  _DAT_14c99cdc0 = 0xffffffff;
  DAT_14c99d080 = 0;
  DAT_14c99d084 = 0;
  DAT_14c99d08c = 0;
  DAT_14c99d094 = 0;
  local_98.Data1 = 0x49faf202;
  local_98.Data2 = 1;
  local_98.Data3 = 0x8000;
  local_a8.Data1 = 0xc;
  uVar3 = FUN_14577453c(L"DataflowCore",&local_a8);
  local_98.Data4[4] = '\x01';
  local_98.Data4[0] = (char)uVar3;
  local_98.Data4[1] = (char)((uint)uVar3 >> 8);
  local_98.Data4[2] = (char)((uint)uVar3 >> 0x10);
  local_98.Data4[3] = (char)((uint)uVar3 >> 0x18);
  FUN_146291f14(&local_98);
  DAT_14c99d050 = 0;
  DAT_14c99d058 = 0;
  DAT_14c99d030 = 0;
  _DAT_14c99d038 = 0;
  _DAT_14c99d05c = 0xffffffff00000080;
  _DAT_14c99d064 = 0;
  DAT_14c99d070 = 0;
  _DAT_14c99d078 = 0;
  atexit(FUN_142ac0bdc);
  local_c0 = (undefined **)0x0;
  uStack_b8 = 0;
  local_c8 = 3;
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149faf7c0);
  local_98.Data1 = 0;
  local_98.Data2 = 0;
  local_98.Data3 = 0;
  local_98.Data4[0] = '\0';
  local_98.Data4[1] = '\0';
  local_98.Data4[2] = '\0';
  local_98.Data4[3] = '\0';
  local_98.Data4[4] = '\0';
  local_98.Data4[5] = '\0';
  local_98.Data4[6] = '\0';
  local_98.Data4[7] = '\0';
  CoCreateGuid(&local_98);
  auVar2 = local_98.Data4;
  uVar1 = local_98._0_8_;
  _DAT_14c99ce20 = &PTR_LAB_149faf1c0;
  _DAT_14c99ce28 = 0;
  uRam000000014c99ce30 = 0;
  _DAT_14c99ce38 = 0;
  uRam000000014c99ce40 = 0;
  _DAT_14c99ce48 = local_98.Data1;
  uRam000000014c99ce4c._0_2_ = local_98.Data2;
  uRam000000014c99ce4c._2_2_ = local_98.Data3;
  uRam000000014c99ce50._0_1_ = local_98.Data4[0];
  uRam000000014c99ce50._1_1_ = local_98.Data4[1];
  uRam000000014c99ce50._2_1_ = local_98.Data4[2];
  uRam000000014c99ce50._3_1_ = local_98.Data4[3];
  uRam000000014c99ce54._0_1_ = local_98.Data4[4];
  uRam000000014c99ce54._1_1_ = local_98.Data4[5];
  uRam000000014c99ce54._2_1_ = local_98.Data4[6];
  uRam000000014c99ce54._3_1_ = local_98.Data4[7];
  _DAT_14c99ce58 = 0;
  _DAT_14c99ce60 = 0xffffffff;
  DAT_14c99ce64 = 1;
  DAT_14c99ce65 = DAT_14c99ce65 & 0xf0;
  local_98._0_8_ = uVar1;
  local_98.Data4 = auVar2;
  FUN_1461d1208(&DAT_14c99ce20);
  _DAT_14c99ce20 = &PTR_FUN_149faf840;
  _DAT_14c99ce68 = 0;
  local_a8.Data1 = 0;
  local_a8.Data2 = 0;
  local_a8.Data3 = 0;
  local_a8.Data4[0] = '\0';
  local_a8.Data4[1] = '\0';
  local_a8.Data4[2] = '\0';
  local_a8.Data4[3] = '\0';
  local_a8.Data4[4] = '\0';
  local_a8.Data4[5] = '\0';
  local_a8.Data4[6] = '\0';
  local_a8.Data4[7] = '\0';
  CoCreateGuid(&local_a8);
  auVar2 = local_a8.Data4;
  uVar1 = local_a8._0_8_;
  local_74 = local_a8.Data1;
  uStack_70 = local_a8.Data2;
  uStack_6e = local_a8.Data3;
  auStack_6c[0] = local_a8.Data4[0];
  auStack_6c[1] = local_a8.Data4[1];
  auStack_6c[2] = local_a8.Data4[2];
  auStack_6c[3] = local_a8.Data4[3];
  auStack_68[0] = local_a8.Data4[4];
  auStack_68[1] = local_a8.Data4[5];
  auStack_68[2] = local_a8.Data4[6];
  auStack_68[3] = local_a8.Data4[7];
  local_98.Data1 = 0;
  local_98.Data2 = 0;
  local_98.Data3 = 0;
  local_98.Data4[0] = '\0';
  local_98.Data4[1] = '\0';
  local_98.Data4[2] = '\0';
  local_98.Data4[3] = '\0';
  local_98.Data4[4] = '\0';
  local_98.Data4[5] = '\0';
  local_98.Data4[6] = '\0';
  local_98.Data4[7] = '\0';
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffff;
  local_a8._0_8_ = uVar1;
  local_a8.Data4 = auVar2;
  FUN_1461d10aa(&DAT_14c99ce70,&local_98);
  atexit((_func_5014 *)&LAB_142ac1d1a);
  local_c0 = (undefined **)0x0;
  uStack_b8 = 0;
  local_c8 = 1;
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149fb2280);
  FUN_1446f470e(&DAT_14c99cf00,L"DataflowInput",1);
  FUN_1446f470e(&DAT_14c99cf08,L"DataflowOutput",1);
  FUN_1446f470e(&DAT_14c99cf10,L"DataflowPassthrough",1);
  FUN_1446f470e(&DAT_14c99cf18,L"DataflowIntrinsic",1);
  FUN_1446f470e(&DAT_14c99cdc8,L"FDataflowAnyType",1);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac2bec FUN_142ac2bec body=48 status=ok
// SIG undefined FUN_142ac2bec(void)

void FUN_142ac2bec(void)

{
  if (DAT_14c99d0c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99d0b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142ac2c1c FUN_142ac2c1c body=234 status=ok
// SIG undefined FUN_142ac2c1c(void)

void FUN_142ac2c1c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x80) == *(int *)(param_2 + 0xac)) {
      if (*(char *)(param_2 + 200) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
    else {
      local_38 = 0;
      uStack_30 = 0;
      FUN_146fb7972(param_2 + 0x78,&local_38);
      lVar1 = local_38;
      lVar2 = (longlong)(int)uStack_30;
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          (**(code **)(*param_1 + 0x48))(param_1,*(undefined8 *)(lVar1 + lVar3));
          lVar3 = lVar3 + 8;
        } while (lVar2 * 8 != lVar3);
      }
      if (local_38 != 0) {
        FUN_1400020a8(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ac2d42 FUN_142ac2d42 body=143 status=ok
// SIG undefined FUN_142ac2d42(void)

void FUN_142ac2d42(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar7 = *(uint *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar4 = param_1;
  }
  uVar6 = 0xffffffff >> (-(char)((int)uVar7 % 0x20) & 0x1fU);
  if ((int)uVar7 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if (0 < (int)uVar7) {
    uVar2 = (ulonglong)uVar7 + 0x1f >> 5;
    iVar1 = (int)uVar2;
    uVar3 = iVar1 - 1;
    uVar7 = 0xffffffff;
    if (uVar3 == 0) {
      uVar7 = uVar6;
    }
    uVar8 = 0;
    do {
      uVar5 = 0xffffffff;
      if (uVar3 == uVar8) {
        uVar5 = uVar6;
      }
      *(uint *)(lVar4 + uVar8 * 4) = uVar5 & ~(uVar7 & *(uint *)(lVar4 + uVar8 * 4));
      bVar9 = iVar1 - 2 == uVar8;
      uVar8 = uVar8 + 1;
      uVar7 = 0xffffffff;
      if (bVar9) {
        uVar7 = uVar6;
      }
    } while (uVar2 != uVar8);
  }
  return;
}



// FUNCTION 142ac2e50 FUN_142ac2e50 body=170 status=ok
// SIG undefined FUN_142ac2e50(void)

void FUN_142ac2e50(void)

{
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149fba750,1,0,0);
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149fbaa90,6,0,0);
  FUN_14282b410(L"/Script/DataflowCore",&PTR_FUN_149fbb2f0,1,&PTR_FUN_149fbb2c0,1,0,0);
  FUN_14282b410(L"/Script/DataflowCore",0,0,&PTR_FUN_149fbb3e0,1,0,0);
  return;
}



// FUNCTION 142ac2efc FUN_142ac2efc body=55 status=ok
// SIG undefined FUN_142ac2efc(void)

void FUN_142ac2efc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99d298 == 0) {
    uVar1 = FUN_14125eb1d();
    DAT_14c99d298 = FUN_14171c317(FUN_1462935fa,uVar1,L"EClothingTeleportMode");
  }
  return;
}



// FUNCTION 142ac2f33 FUN_142ac2f33 body=69 status=ok
// SIG undefined FUN_142ac2f33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ac2f33(void)

{
  _DAT_14c99d320 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ac2f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d328,1);
  return;
}



// FUNCTION 142ac3006 FUN_142ac3006 body=542 status=ok
// SIG undefined FUN_142ac3006(void)

void FUN_142ac3006(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",0,0,&PTR_FUN_149fbcd40);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",&PTR_FUN_149fbd250,1,0);
  FUN_14098d3d2(FUN_142ac2efc,L"/Script/ClothingSystemRuntimeInterface",L"EClothingTeleportMode",
                &DAT_14c99d290);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",0,0,&PTR_FUN_149fbd4b0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",0,0,&PTR_FUN_149fbd7b0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",&PTR_FUN_149fbde90,2,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",&PTR_FUN_149fbe260,1,0);
  FUN_1446f470e(&DAT_14c99d400,L"ClothingSimulationFactoryClassProvider",1);
  FUN_140056680(&local_48,L"ChaosClothingSimulationFactory");
  local_68 = CONCAT44(local_68._4_4_,1);
  FUN_140f510cc(&DAT_14c99d320,L"p.Cloth.DefaultClothingSimulationFactoryClass",&local_48,
                L"The class name of the default clothing simulation factory.\nKnown providers are:\nChaosClothingSimulationFactory\n"
               );
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_142ac2f33);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",&PTR_FUN_149fbf6d0,2,0);
  local_48 = -0x7ffffffeb60408e0;
  local_34 = 0x1e;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146293bf6(&local_48);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/ClothingSystemRuntimeInterface",&PTR_FUN_149fbfee0,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac3228 FUN_142ac3228 body=57 status=ok
// SIG undefined FUN_142ac3228(void)

void FUN_142ac3228(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99d438 == 0) {
    uVar1 = FUN_146293f45();
    DAT_14c99d438 = FUN_14171c317(FUN_146293fd4,uVar1,L"ECoreOnlineDummy");
  }
  return;
}



// FUNCTION 142ac3261 FUN_142ac3261 body=39 status=ok
// SIG undefined FUN_142ac3261(void)

void FUN_142ac3261(void)

{
  if (DAT_14c99d540 != 0) {
    FUN_146fdfcfe();
    DAT_14c99d540 = 0;
  }
  return;
}



// FUNCTION 142ac3288 FUN_142ac3288 body=43 status=ok
// SIG undefined FUN_142ac3288(void)

void FUN_142ac3288(void)

{
  FUN_14098d3d2(FUN_142ac3228,L"/Script/CoreOnline",L"ECoreOnlineDummy",&DAT_14c99d430);
  return;
}



// FUNCTION 142ac32b4 FUN_142ac32b4 body=102 status=ok
// SIG undefined FUN_142ac32b4(void)

void FUN_142ac32b4(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149fc1c80;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146294066(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac331c FUN_142ac331c body=57 status=ok
// SIG undefined FUN_142ac331c(void)

void FUN_142ac331c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99d588 == 0) {
    uVar1 = FUN_145a24a8f();
    DAT_14c99d588 = FUN_14171c317(FUN_146294268,uVar1,L"EAssetRegistrySortOrder");
  }
  return;
}



// FUNCTION 142ac3355 FUN_142ac3355 body=69 status=ok
// SIG undefined FUN_142ac3355(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ac3355(void)

{
  _DAT_14c99d658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ac3397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d660,1);
  return;
}



// FUNCTION 142ac339a FUN_142ac339a body=69 status=ok
// SIG undefined FUN_142ac339a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ac339a(void)

{
  _DAT_14c99d670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ac33dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d678,1);
  return;
}



// FUNCTION 142ac33df FUN_142ac33df body=48 status=ok
// SIG undefined FUN_142ac33df(void)

void FUN_142ac33df(void)

{
  if (DAT_14c99d690 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c99d680 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142ac3410 FUN_142ac3410 body=218 status=ok
// SIG undefined FUN_142ac3410(void)

undefined8 *
FUN_142ac3410(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149fc3ee8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14006620a(&local_38,*param_4,*(undefined4 *)(param_4 + 1));
  if (&local_38 == param_1 + 8) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 9) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x4c) = local_2c;
  }
  *(undefined4 *)((longlong)param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_2 + 0x88) + 0xe4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac34ec FUN_142ac34ec body=514 status=ok
// SIG undefined FUN_142ac34ec(void)

longlong FUN_142ac34ec(longlong param_1,undefined8 *param_2,undefined4 param_3,char *param_4,
                      undefined2 *param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = 1;
  if (*param_4 == '\0') {
    uVar2 = (undefined1)*(undefined4 *)(param_1 + 0x50);
  }
  uVar3 = *(undefined1 *)(param_1 + 0x51);
  if (param_4[1] != '\0') {
    uVar3 = 1;
  }
  local_4b = CONCAT11(uVar3,uVar2);
  local_49 = *(undefined1 *)(param_1 + 0x52);
  if (param_4[2] != '\0') {
    local_49 = 1;
  }
  if (*(int *)(param_2 + 1) == 0) {
    if ((char)param_3 == '\0') {
      *param_5 = 0;
      *(undefined1 *)(param_5 + 1) = 0;
      *(undefined4 *)(param_6 + 1) = 0;
      if (*(int *)((longlong)param_6 + 0xc) < 0) {
        FUN_1446f8c06(param_6,0);
      }
      if ((undefined2 *)*param_6 != (undefined2 *)0x0) {
        *(undefined2 *)*param_6 = 0;
      }
      param_1 = 0;
      goto LAB_142ac366d;
    }
  }
  else {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    iStack_68 = 0;
    local_88 = *(undefined4 *)param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_144907528(&local_88,&local_60,&local_70);
    if ((iStack_68 != 0) || ((char)param_3 != '\0')) {
      if ((((*(char *)(param_1 + 0x53) == '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
          ((*param_4 != '\0' || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) &&
         ((((*(byte *)(param_1 + 0x51) | param_4[1]) & 1) == 0 ||
          ((param_4[2] != '\0' || ((*(byte *)(param_1 + 0x52) & 1) != 0)))))) {
        local_98 = (undefined4)local_60;
        uStack_94 = local_60._4_4_;
        uStack_90 = uStack_58;
        uStack_8c = uStack_54;
        lVar1 = FUN_146fe45e6(param_1);
      }
      else {
        local_a8 = (undefined4)local_60;
        uStack_a4 = local_60._4_4_;
        uStack_a0 = uStack_58;
        uStack_9c = uStack_54;
        lVar1 = FUN_146fe471e(param_1);
        if (lVar1 == 0) goto LAB_142ac3646;
      }
      local_b8 = (undefined4)local_70;
      uStack_b4 = local_70._4_4_;
      iStack_b0 = iStack_68;
      uStack_ac = uStack_64;
      local_c0 = param_6;
      local_c8 = param_5;
      param_1 = FUN_142ac34ec(lVar1,&local_b8,param_3,&local_4b);
      goto LAB_142ac366d;
    }
  }
LAB_142ac3646:
  *(undefined1 *)(param_5 + 1) = local_49;
  *param_5 = local_4b;
  FUN_1402980a2(param_6,*param_2,*(undefined4 *)(param_2 + 1));
LAB_142ac366d:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac36f0 FUN_142ac36f0 body=2778 status=ok
// SIG undefined FUN_142ac36f0(void)

undefined8
FUN_142ac36f0(undefined8 *param_1,undefined4 *param_2,byte *param_3,char *param_4,char param_5,
             longlong *param_6)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  byte bVar17;
  char *pcVar18;
  char *pcVar19;
  byte bVar20;
  longlong lVar21;
  byte *pbVar22;
  char *pcVar23;
  undefined1 auStack_368 [32];
  char local_348;
  longlong *local_340;
  char *local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_300 [32];
  byte local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
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
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 *local_268;
  char local_260;
  undefined8 local_258 [16];
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_58 [7];
  char local_51 [3];
  byte local_4e;
  char local_4d;
  char local_4c;
  char local_4b;
  char local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  pcVar18 = param_4 + 6;
  pcVar23 = param_4 + 1;
  pcVar19 = param_4 + 5;
  pbVar22 = (byte *)(param_4 + 3);
  if (param_2[2] != 0) {
    local_49 = 0;
    if ((*pcVar23 == '\x01') && (*(char *)(param_1 + 10) == '\x01')) {
      if (local_51 != param_4) {
        local_51[0] = *param_4;
        local_4e = param_4[3];
        if (local_4e == 1) {
          local_51[2] = param_4[2];
        }
        local_4c = *pcVar19;
        if (local_4c == '\x01') {
          local_4d = param_4[4];
        }
        local_4a = param_4[7];
        if (local_4a == '\x01') {
          local_4b = *pcVar18;
        }
        local_49 = 1;
        local_51[1] = 0;
        if ((local_4c != '\0' || local_4e != 0) || local_4a != '\0') {
          pcVar23 = local_51 + 1;
          pcVar19 = &local_4c;
          pbVar22 = &local_4e;
          param_4 = local_51;
          pcVar18 = &local_4b;
          goto LAB_142ac39b5;
        }
      }
      local_51[1] = 0;
      puVar12 = (undefined8 *)*param_6;
      if (puVar12 != param_1) {
        *param_6 = (longlong)param_1;
        if (param_1 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
          UNLOCK();
        }
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar12)(puVar12,1);
          }
        }
      }
      *(byte *)((longlong)param_6 + 10) = param_3[2];
      *(undefined2 *)(param_6 + 1) = *(undefined2 *)param_3;
LAB_142ac39a6:
      uVar11 = 0;
    }
    else {
LAB_142ac39b5:
      local_330 = pcVar18;
      local_288 = 0;
      uStack_280 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_2a8 = *param_2;
      uStack_2a4 = param_2[1];
      uStack_2a0 = param_2[2];
      uStack_29c = param_2[3];
      FUN_144907528();
      if (((*(char *)((longlong)param_1 + 0x53) == '\x01') &&
          (((local_330[1] != '\x01' || (*local_330 == '\x01')) && (*pcVar23 == '\0')))) &&
         ((*pcVar19 == '\0' && (*pbVar22 == 0)))) {
        local_2b8 = (undefined4)local_288;
        uStack_2b4 = local_288._4_4_;
        uStack_2b0 = uStack_280;
        uStack_2ac = uStack_27c;
        lVar10 = FUN_146fe471e(param_1);
        if (lVar10 == 0) {
          puVar12 = (undefined8 *)*param_6;
          if (puVar12 != param_1) {
            *param_6 = (longlong)param_1;
            if (param_1 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
              UNLOCK();
            }
            if (puVar12 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar12 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar12)(puVar12,1);
              }
            }
          }
          *(byte *)((longlong)param_6 + 10) = param_3[2];
          *(undefined2 *)(param_6 + 1) = *(undefined2 *)param_3;
          goto LAB_142ac39a6;
        }
      }
      else {
        local_2c8 = (undefined4)local_288;
        uStack_2c4 = local_288._4_4_;
        uStack_2c0 = uStack_280;
        uStack_2bc = uStack_27c;
        lVar10 = FUN_146fe471e(param_1);
        if (lVar10 == 0) {
          if (param_5 == '\0') {
            local_278 = local_258;
            local_260 = '\0';
            local_268 = local_58;
            local_270 = local_278;
            FUN_146fe4274(param_1,&local_278);
            local_2d8 = *param_2;
            uStack_2d4 = param_2[1];
            uStack_2d0 = param_2[2];
            uStack_2cc = param_2[3];
            FUN_1404d3f7a(&local_278);
            plVar13 = (longlong *)FUN_14054d1d4();
            *(undefined2 *)local_270 = 0;
            (**(code **)(*plVar13 + 0x68))(plVar13,local_300,local_278);
            if (((local_2e0 & 4) == 0) || ((local_2e0 & 1) == 0)) {
              puVar12 = (undefined8 *)*param_6;
              if (puVar12 != param_1) {
                *param_6 = (longlong)param_1;
                if (param_1 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
                  UNLOCK();
                }
                if (puVar12 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar12 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar12)(puVar12,1);
                  }
                }
              }
              *(byte *)((longlong)param_6 + 10) = param_3[2];
              *(undefined2 *)(param_6 + 1) = *(undefined2 *)param_3;
              if (local_260 == '\x01') {
                FUN_1400020a8(local_278);
              }
              goto LAB_142ac39a6;
            }
            if (local_260 == '\x01') {
              FUN_1400020a8(local_278);
            }
          }
          local_318 = (undefined4)local_288;
          uStack_314 = local_288._4_4_;
          uStack_310 = uStack_280;
          uStack_30c = uStack_27c;
          lVar10 = FUN_146fe45e6(param_1);
          if ((((*(char *)((longlong)param_1 + 0x53) == '\x01') &&
               (*(longlong *)(lVar10 + 0x30) != 0)) &&
              (((*(byte *)(param_1 + 10) | *param_3 | *(byte *)(lVar10 + 0x50)) & 1) != 0)) &&
             (((((*(byte *)((longlong)param_1 + 0x51) | param_3[1] | *(byte *)(lVar10 + 0x51)) & 1)
                == 0 || (param_3[2] != 0)) ||
              (((*(byte *)((longlong)param_1 + 0x52) & 1) != 0 ||
               ((*(byte *)(lVar10 + 0x52) & 1) != 0)))))) {
            *(undefined1 *)(lVar10 + 0x53) = 1;
          }
          param_5 = '\x01';
          if ((param_1[6] != 0) && (*(char *)((longlong)param_1 + 0x56) != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x56) = 0;
            LOCK();
            piVar1 = (int *)(*(longlong *)(param_1[6] + 0x88) + 0xe4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
        }
      }
      puVar12 = local_278;
      uVar14 = 1;
      if (*param_3 == 0) {
        uVar14 = (undefined1)*(undefined4 *)(param_1 + 10);
      }
      uVar15 = *(undefined1 *)((longlong)param_1 + 0x51);
      if (param_3[1] != 0) {
        uVar15 = 1;
      }
      uVar16 = *(undefined1 *)((longlong)param_1 + 0x52);
      if (param_3[2] != 0) {
        uVar16 = 1;
      }
      local_278._3_5_ = SUB85(puVar12,3);
      local_278._0_3_ = CONCAT12(uVar16,CONCAT11(uVar15,uVar14));
      local_328 = (undefined4)local_298;
      uStack_324 = local_298._4_4_;
      uStack_320 = uStack_290;
      uStack_31c = uStack_28c;
      local_348 = param_5;
      local_340 = param_6;
      uVar11 = FUN_142ac36f0(lVar10,&local_328,&local_278,param_4);
      if ((((*param_6 != 0) && (*(char *)(*param_6 + 0x56) == '\0')) && (param_1[6] != 0)) &&
         (*(char *)((longlong)param_1 + 0x56) != '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x56) = 0;
        LOCK();
        piVar1 = (int *)(*(longlong *)(param_1[6] + 0x88) + 0xe4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
    }
    goto LAB_142ac3f84;
  }
  if ((*pcVar23 == '\x01') && (*(char *)(param_1 + 10) != *param_4)) {
    if ((param_1[6] != 0) && (*(char *)((longlong)param_1 + 0x56) != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x56) = 0;
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1[6] + 0x88) + 0xe4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x55) = 1;
    }
    cVar2 = *param_4;
    *(char *)(param_1 + 10) = cVar2;
    local_330 = pcVar18;
    if (cVar2 == '\x01') {
      local_1d8 = (undefined8 *)0x0;
      local_1d0 = 0xa00000001;
      local_278 = param_1;
      local_270 = (undefined8 *)((ulonglong)local_270._4_4_ << 0x20);
      local_1d0._0_4_ = 1;
      do {
        puVar12 = local_1d8;
        if (local_1d8 == (undefined8 *)0x0) {
          puVar12 = &local_278;
        }
        lVar21 = (longlong)((int)local_1d0 + -1);
        lVar10 = puVar12[lVar21 * 2];
        iVar4 = *(int *)(puVar12 + lVar21 * 2 + 1);
        if (iVar4 == *(int *)(lVar10 + 0x18)) {
          FUN_146ffef74(&local_278);
        }
        else {
          *(int *)(puVar12 + lVar21 * 2 + 1) = iVar4 + 1;
          uVar7 = local_1d0;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8);
          *(undefined1 *)(lVar10 + 0x50) = 0;
          if ((*(longlong *)(lVar10 + 0x30) != 0) && (*(char *)(lVar10 + 0x56) != '\0')) {
            *(undefined1 *)(lVar10 + 0x56) = 0;
            LOCK();
            piVar1 = (int *)(*(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x88) + 0xe4);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          lVar21 = (longlong)(int)local_1d0;
          uVar9 = (int)local_1d0 + 1;
          local_1d0 = CONCAT44(local_1d0._4_4_,uVar9);
          if (local_1d0._4_4_ < uVar9) {
            FUN_146ffefee(&local_278,uVar7 & 0xffffffff);
          }
          puVar12 = local_1d8;
          if (local_1d8 == (undefined8 *)0x0) {
            puVar12 = &local_278;
          }
          puVar12[lVar21 * 2] = lVar10;
          *(undefined4 *)(puVar12 + lVar21 * 2 + 1) = 0;
        }
      } while ((int)local_1d0 != 0);
    }
    else {
      local_1d8 = (undefined8 *)0x0;
      local_1d0 = 0xa00000001;
      local_278 = param_1;
      local_270 = (undefined8 *)((ulonglong)local_270._4_4_ << 0x20);
      local_1d0._0_4_ = 1;
      do {
        puVar12 = local_1d8;
        if (local_1d8 == (undefined8 *)0x0) {
          puVar12 = &local_278;
        }
        lVar21 = (longlong)((int)local_1d0 + -1);
        lVar10 = puVar12[lVar21 * 2];
        iVar4 = *(int *)(puVar12 + lVar21 * 2 + 1);
        if (iVar4 == *(int *)(lVar10 + 0x18)) {
          FUN_146ffef74(&local_278);
        }
        else {
          *(int *)(puVar12 + lVar21 * 2 + 1) = iVar4 + 1;
          uVar7 = local_1d0;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8);
          if (*(char *)(lVar10 + 0x54) == '\x01') {
            *(undefined1 *)(lVar10 + 0x55) = 1;
          }
          lVar21 = (longlong)(int)local_1d0;
          uVar9 = (int)local_1d0 + 1;
          local_1d0 = CONCAT44(local_1d0._4_4_,uVar9);
          if (local_1d0._4_4_ < uVar9) {
            FUN_146ffefee(&local_278,uVar7 & 0xffffffff);
          }
          puVar12 = local_1d8;
          if (local_1d8 == (undefined8 *)0x0) {
            puVar12 = &local_278;
          }
          puVar12[lVar21 * 2] = lVar10;
          *(undefined4 *)(puVar12 + lVar21 * 2 + 1) = 0;
        }
      } while ((int)local_1d0 != 0);
    }
    pcVar18 = local_330;
    if (local_1d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
      pcVar18 = local_330;
    }
  }
  bVar8 = *pbVar22;
  if (((bVar8 == 1) && (*(char *)((longlong)param_1 + 0x51) != param_4[2])) ||
     ((*pcVar19 == '\x01' && (*(char *)((longlong)param_1 + 0x52) != param_4[4])))) {
    if ((param_1[6] != 0) && (*(char *)((longlong)param_1 + 0x56) != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x56) = 0;
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1[6] + 0x88) + 0xe4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      bVar8 = *pbVar22;
    }
    if ((bVar8 & 1) != 0) {
      *(char *)((longlong)param_1 + 0x51) = param_4[2];
    }
    if (*pcVar19 == '\x01') {
      *(char *)((longlong)param_1 + 0x52) = param_4[4];
    }
    if (param_1 == (undefined8 *)0x0) {
LAB_142ac3c84:
      bVar6 = false;
    }
    else {
      bVar8 = 0;
      puVar12 = param_1;
      bVar20 = 0;
      do {
        bVar17 = 1;
        bVar5 = bVar8 & 1;
        bVar8 = 1;
        if (bVar5 == 0) {
          bVar8 = *(byte *)((longlong)puVar12 + 0x52);
        }
        if ((bVar20 & 1) == 0) {
          bVar17 = *(byte *)((longlong)puVar12 + 0x51);
        }
        puVar12 = (undefined8 *)puVar12[7];
        bVar20 = bVar17;
      } while (puVar12 != (undefined8 *)0x0);
      if (((~bVar17 | bVar8) & 1) != 0) goto LAB_142ac3c84;
      bVar6 = true;
      if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x55) = 1;
      }
    }
    local_1d8 = (undefined8 *)0x0;
    local_1d0 = 0xa00000001;
    local_278 = param_1;
    local_270 = (undefined8 *)((ulonglong)local_270 & 0xffffffff00000000);
    local_1d0._0_4_ = 1;
    local_330 = pcVar18;
    do {
      puVar12 = local_1d8;
      if (local_1d8 == (undefined8 *)0x0) {
        puVar12 = &local_278;
      }
      lVar21 = (longlong)((int)local_1d0 + -1);
      lVar10 = puVar12[lVar21 * 2];
      iVar4 = *(int *)(puVar12 + lVar21 * 2 + 1);
      if (iVar4 == *(int *)(lVar10 + 0x18)) {
        FUN_146ffef74(&local_278);
      }
      else {
        *(int *)(puVar12 + lVar21 * 2 + 1) = iVar4 + 1;
        uVar7 = local_1d0;
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8);
        if ((bVar6) && (*(char *)(lVar10 + 0x54) == '\x01')) {
          *(undefined1 *)(lVar10 + 0x55) = 1;
        }
        if ((*(longlong *)(lVar10 + 0x30) != 0) && (*(char *)(lVar10 + 0x56) != '\0')) {
          *(undefined1 *)(lVar10 + 0x56) = 0;
          LOCK();
          piVar1 = (int *)(*(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x88) + 0xe4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        lVar21 = (longlong)(int)local_1d0;
        uVar9 = (int)local_1d0 + 1;
        local_1d0 = CONCAT44(local_1d0._4_4_,uVar9);
        if (local_1d0._4_4_ < uVar9) {
          FUN_146ffefee(&local_278,uVar7 & 0xffffffff);
        }
        puVar12 = local_1d8;
        if (local_1d8 == (undefined8 *)0x0) {
          puVar12 = &local_278;
        }
        puVar12[lVar21 * 2] = lVar10;
        *(undefined4 *)(puVar12 + lVar21 * 2 + 1) = 0;
      }
    } while ((int)local_1d0 != 0);
    pcVar18 = local_330;
    if (local_1d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
      pcVar18 = local_330;
    }
  }
  if (param_4[7] == '\x01') {
    if ((param_1[6] != 0) && (*(char *)((longlong)param_1 + 0x56) != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x56) = 0;
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1[6] + 0x88) + 0xe4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    cVar2 = *pcVar18;
    if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x55) = 1;
    }
    *(char *)((longlong)param_1 + 0x53) = cVar2;
    iVar4 = *(int *)((longlong)param_1 + 0x2c);
    FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
    *(undefined4 *)(param_1 + 5) = 0;
    if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
      FUN_1408be2c4(param_1 + 4,0);
    }
    local_1d8 = (undefined8 *)0x0;
    local_1d0 = 0xa00000001;
    local_278 = param_1;
    local_270 = (undefined8 *)((ulonglong)local_270 & 0xffffffff00000000);
    local_1d0._0_4_ = 1;
    do {
      puVar12 = local_1d8;
      if (local_1d8 == (undefined8 *)0x0) {
        puVar12 = &local_278;
      }
      lVar21 = (longlong)((int)local_1d0 + -1);
      lVar10 = puVar12[lVar21 * 2];
      iVar4 = *(int *)(puVar12 + lVar21 * 2 + 1);
      if (iVar4 == *(int *)(lVar10 + 0x18)) {
        FUN_146ffef74(&local_278);
      }
      else {
        *(int *)(puVar12 + lVar21 * 2 + 1) = iVar4 + 1;
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar4 * 8);
        if (*(char *)(lVar10 + 0x54) == '\x01') {
          *(undefined1 *)(lVar10 + 0x55) = 1;
        }
        *(char *)(lVar10 + 0x53) = cVar2;
        iVar4 = *(int *)(lVar10 + 0x2c);
        FUN_1447a1747(*(undefined8 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x28));
        *(undefined4 *)(lVar10 + 0x28) = 0;
        if ((iVar4 < 0) && (*(int *)(lVar10 + 0x2c) != 0)) {
          FUN_1408be2c4(lVar10 + 0x20,0);
        }
        uVar7 = local_1d0;
        lVar21 = (longlong)(int)local_1d0;
        uVar9 = (int)local_1d0 + 1;
        local_1d0 = CONCAT44(local_1d0._4_4_,uVar9);
        if (local_1d0._4_4_ < uVar9) {
          FUN_146ffefee(&local_278,uVar7 & 0xffffffff);
        }
        puVar12 = local_1d8;
        if (local_1d8 == (undefined8 *)0x0) {
          puVar12 = &local_278;
        }
        puVar12[lVar21 * 2] = lVar10;
        *(undefined4 *)(puVar12 + lVar21 * 2 + 1) = 0;
      }
    } while ((int)local_1d0 != 0);
    if (local_1d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar12 = (undefined8 *)*param_6;
  if (puVar12 != param_1) {
    *param_6 = (longlong)param_1;
    if (param_1 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      UNLOCK();
    }
    if (puVar12 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar12 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar12)(puVar12,1);
      }
    }
  }
  *(byte *)((longlong)param_6 + 10) = param_3[2];
  uVar3 = *(undefined2 *)param_3;
  *(undefined2 *)(param_6 + 1) = uVar3;
  uVar11 = CONCAT71((uint7)(byte)((ushort)uVar3 >> 8),1);
LAB_142ac3f84:
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 142ac41cc FUN_142ac41cc body=156 status=ok
// SIG undefined FUN_142ac41cc(void)

void FUN_142ac41cc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x56) == '\0')) {
    *(undefined1 *)(param_1 + 0x56) = 1;
    LOCK();
    piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x88) + 0xe4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (((lVar2 != 0) &&
        (((*(char *)(lVar2 + 0x53) == '\x01' && (*(char *)(param_1 + 0x50) == '\0')) &&
         (*(char *)(param_1 + 0x51) == '\0')))) &&
       ((*(char *)(param_1 + 0x52) == '\0' && (*(int *)(param_1 + 0x18) == 0)))) {
      local_18 = *(undefined8 *)(param_1 + 0x40);
      local_10 = *(int *)(param_1 + 0x48) + -1;
      if (*(int *)(param_1 + 0x48) == 0) {
        local_10 = 0;
      }
      FUN_146fe4b3e(lVar2);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac426a FUN_142ac426a body=380 status=ok
// SIG undefined FUN_142ac426a(void)

void FUN_142ac426a(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != '\0') {
    local_38 = (longlong *)0x0;
    local_30 = 0xa00000001;
    local_d8 = param_1;
    local_d0 = 0;
    local_30._0_4_ = 1;
    do {
      plVar6 = local_38;
      if (local_38 == (longlong *)0x0) {
        plVar6 = &local_d8;
      }
      lVar7 = (longlong)((int)local_30 + -1);
      lVar3 = plVar6[lVar7 * 2];
      iVar2 = (int)plVar6[lVar7 * 2 + 1];
      if (iVar2 == *(int *)(lVar3 + 0x18)) {
        FUN_146ffef74(&local_d8);
      }
      else {
        *(int *)(plVar6 + lVar7 * 2 + 1) = iVar2 + 1;
        uVar4 = local_30;
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 8);
        if ((*(longlong *)(lVar3 + 0x30) != 0) && (*(char *)(lVar3 + 0x56) != '\0')) {
          *(undefined1 *)(lVar3 + 0x56) = 0;
          LOCK();
          piVar1 = (int *)(*(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x88) + 0xe4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        lVar7 = (longlong)(int)local_30;
        uVar5 = (int)local_30 + 1;
        local_30 = CONCAT44(local_30._4_4_,uVar5);
        if (local_30._4_4_ < uVar5) {
          FUN_146ffefee(&local_d8,uVar4 & 0xffffffff);
        }
        plVar6 = local_38;
        if (local_38 == (longlong *)0x0) {
          plVar6 = &local_d8;
        }
        plVar6[lVar7 * 2] = lVar3;
        *(undefined4 *)(plVar6 + lVar7 * 2 + 1) = 0;
      }
    } while ((int)local_30 != 0);
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  do {
    if ((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x56) != '\0')) {
      *(undefined1 *)(param_1 + 0x56) = 0;
      LOCK();
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x88) + 0xe4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    param_1 = *(longlong *)(param_1 + 0x38);
  } while (param_1 != 0);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac43e8 FUN_142ac43e8 body=195 status=ok
// SIG undefined FUN_142ac43e8(void)

void FUN_142ac43e8(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  int local_28;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    local_20 = 0;
    uStack_18 = 0;
    local_30 = *(undefined8 *)(param_1 + 0x60);
    local_28 = *(int *)(param_1 + 0x68) + -1;
    if (*(int *)(param_1 + 0x68) == 0) {
      local_28 = 0;
    }
    local_40 = *(undefined8 *)(param_2 + 0x60);
    local_38 = *(int *)(param_2 + 0x68) + -1;
    if (*(int *)(param_2 + 0x68) == 0) {
      local_38 = 0;
    }
    cVar1 = FUN_14022fd12(&local_40,&local_30);
    if (cVar1 != '\0') {
      local_58 = (undefined4)local_20;
      uStack_54 = local_20._4_4_;
      uStack_50 = uStack_18;
      uStack_4c = uStack_14;
      FUN_146fe5f4a(param_1);
      FUN_146fe4e72(param_1);
      local_68 = (undefined4)local_20;
      uStack_64 = local_20._4_4_;
      uStack_60 = uStack_18;
      uStack_5c = uStack_14;
      FUN_146fe6078(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac44ac FUN_142ac44ac body=199 status=ok
// SIG undefined FUN_142ac44ac(void)

void FUN_142ac44ac(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  int local_28;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    local_20 = 0;
    uStack_18 = 0;
    local_30 = *(undefined8 *)(param_1 + 0x60);
    local_28 = *(int *)(param_1 + 0x68) + -1;
    if (*(int *)(param_1 + 0x68) == 0) {
      local_28 = 0;
    }
    local_40 = *(undefined8 *)(param_2 + 0x60);
    local_38 = *(int *)(param_2 + 0x68) + -1;
    if (*(int *)(param_2 + 0x68) == 0) {
      local_38 = 0;
    }
    cVar1 = FUN_14022fd12(&local_40,&local_30);
    if (cVar1 != '\0') {
      local_58 = (undefined4)local_20;
      uStack_54 = local_20._4_4_;
      uStack_50 = uStack_18;
      uStack_4c = uStack_14;
      cVar1 = FUN_146fe6110(param_1);
      if (cVar1 != '\0') {
        FUN_146fe4e72(param_1);
        local_68 = (undefined4)local_20;
        uStack_64 = local_20._4_4_;
        uStack_60 = uStack_18;
        uStack_5c = uStack_14;
        FUN_146fe6078(param_1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac4574 FUN_142ac4574 body=267 status=ok
// SIG undefined FUN_142ac4574(void)

undefined8 FUN_142ac4574(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    do {
      if (*(int *)(param_1 + 0xdc) == 0) {
        bVar1 = false;
        do {
          if (((*(byte *)(param_1 + 0xd9) & 1) != 0) || (*(int *)(param_1 + 0xe0) != 0)) break;
          if ((!bVar1) && (cVar2 = FUN_146fe66ae(param_1 + 0x30,lpCriticalSection), cVar2 != '\0'))
          {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_142ac4680(param_1,1);
          }
          else {
            FUN_14000f986(0x3dcccccd);
          }
        } while (*(int *)(param_1 + 0xdc) == 0);
        if (bVar1) {
          EnterCriticalSection(lpCriticalSection);
          *(undefined1 *)(param_1 + 0x34) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          LeaveCriticalSection(lpCriticalSection);
        }
      }
      while ((*(int *)(param_1 + 0xdc) == 0 &&
             ((*(int *)(param_1 + 0xe0) != 0 || ((*(byte *)(param_1 + 0xd9) & 1) != 0))))) {
        FUN_14000f986(0x3dcccccd);
      }
    } while (*(int *)(param_1 + 0xdc) == 0);
  }
  return 0;
}



// FUNCTION 142ac4680 FUN_142ac4680 body=10226 status=ok
// SIG undefined FUN_142ac4680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ac4680(longlong param_1,byte param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  unkbyte9 Var20;
  undefined1 auVar21 [16];
  byte bVar22;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar23;
  char cVar24;
  undefined1 uVar25;
  char cVar26;
  int iVar27;
  undefined4 uVar28;
  DWORD DVar29;
  undefined8 uVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  LARGE_INTEGER *pLVar36;
  undefined4 *puVar37;
  uint *puVar38;
  LARGE_INTEGER *pLVar39;
  LARGE_INTEGER **ppLVar40;
  int iVar41;
  ulonglong *puVar42;
  ulonglong *puVar43;
  ulonglong uVar44;
  longlong lVar45;
  undefined2 *puVar46;
  DWORD DVar47;
  ulonglong uVar48;
  ulonglong *puVar49;
  longlong lVar50;
  byte bVar51;
  undefined8 *puVar52;
  ulonglong *puVar53;
  ulonglong uVar54;
  longlong lVar55;
  undefined8 *puVar56;
  ulonglong *puVar57;
  longlong *plVar58;
  ulonglong uVar59;
  ulonglong *puVar60;
  ulonglong *puVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  int iVar65;
  ulonglong *puVar66;
  ulonglong *puVar67;
  int iVar68;
  DWORD DVar69;
  longlong *plVar70;
  undefined8 *puVar71;
  longlong lVar72;
  bool bVar73;
  float fVar74;
  undefined1 auStack_718 [32];
  LARGE_INTEGER *local_6f8;
  longlong **local_6f0;
  longlong *local_6e8;
  longlong *local_6e0;
  byte local_6d1;
  longlong *local_6d0;
  byte local_6c2;
  byte local_6c1;
  longlong local_6c0;
  ulonglong local_6b8;
  ulonglong local_6b0;
  int local_6a4;
  longlong *local_6a0;
  longlong *local_698;
  longlong local_690;
  longlong local_688;
  undefined8 *local_680;
  longlong *local_678;
  ulonglong local_670;
  longlong local_668;
  LPCRITICAL_SECTION local_660;
  longlong *local_658;
  longlong local_650;
  longlong local_648;
  undefined8 *local_640;
  undefined8 *local_638;
  undefined8 *local_630;
  int *local_628;
  LPCRITICAL_SECTION local_620;
  void *local_618;
  DWORD local_610;
  longlong local_608;
  undefined4 local_600;
  longlong local_5f8;
  undefined4 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  _struct_19 local_5a8;
  int local_5a0;
  undefined4 local_59c;
  undefined8 local_598;
  int local_590;
  undefined8 local_588;
  int local_580;
  undefined8 local_578;
  int local_570;
  undefined1 local_568 [16];
  longlong **local_558;
  longlong local_548;
  undefined4 local_540;
  longlong local_538;
  undefined4 local_530;
  ulonglong local_528;
  int local_520;
  LARGE_INTEGER local_518;
  int local_510;
  longlong *local_508;
  int local_500;
  undefined2 *local_4f8;
  int local_4f0;
  longlong *local_4e8;
  ulonglong uStack_4e0;
  DWORD local_4d0 [2];
  LARGE_INTEGER local_4c8;
  longlong *local_4c0;
  undefined1 local_4b8 [8];
  int iStack_4b0;
  undefined4 uStack_4ac;
  undefined1 local_49a [2];
  longlong *local_498;
  LARGE_INTEGER ***pppLStack_490;
  LARGE_INTEGER *local_488;
  ulonglong local_480;
  LARGE_INTEGER **local_478;
  undefined1 local_470 [16];
  longlong *local_460;
  longlong local_458;
  undefined4 local_450;
  LARGE_INTEGER local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  byte bStack_350;
  byte bStack_34f;
  undefined2 uStack_34e;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  longlong local_338;
  undefined4 local_330;
  longlong *local_320;
  longlong local_300;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_718;
  local_690 = param_1 + 0x180;
  local_6d1 = param_2;
  local_6c0 = param_1;
  if (*(char *)(param_1 + 0x1b0) != '\0') goto LAB_142ac4d5a;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined1 *)(param_1 + 0x1b1) = DAT_14c99d6a5;
  FUN_146ffa660(*(undefined8 *)(param_1 + 0x180));
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_1470039b0(local_690);
  }
  if ((DAT_14c99d6a4 == '\0') && (*(char *)(param_1 + 0x1b1) == '\0')) goto LAB_142ac4d5a;
  _local_4b8 = (undefined1  [16])0x0;
  uVar30 = FUN_140d6afb0();
  FUN_140056680(&local_4e8,uVar30);
  plVar31 = (longlong *)FUN_1400dbadc();
  plVar32 = (longlong *)*plVar31;
  if (plVar32 == (longlong *)0x0) {
    plVar32 = (longlong *)FUN_140e92164();
    *plVar31 = (longlong)plVar32;
  }
  local_508 = local_4e8;
  bVar51 = 0;
  local_500 = (int)uStack_4e0 + -1;
  if ((int)uStack_4e0 == 0) {
    local_500 = 0;
  }
  (**(code **)(*plVar32 + 0x170))(plVar32,&local_4f8);
  puVar46 = local_4f8;
  if (local_4f0 == 0) {
    puVar46 = &DAT_149dfb77a;
  }
  local_6f8 = (LARGE_INTEGER *)local_4b8;
  iVar27 = (**(code **)(*plVar32 + 0x150))(plVar32,puVar46,&local_4c8);
  bVar22 = DAT_14c99d6a6;
  if (DAT_14c99d6a4 == '\x01') {
    bVar51 = DAT_14c99d6a6 ^ 1 | iVar27 == 0;
  }
  if ((iVar27 != 0) && (*(char *)(param_1 + 0x1b1) == '\x01')) {
    *(undefined1 *)(param_1 + 0x1b1) = 0;
  }
  local_6a0 = plVar32;
  if (bVar51 != 0) {
    local_4c0 = (longlong *)0x0;
    local_378.s.LowPart = (DWORD)DAT_14c99d690;
    local_378.s.HighPart = (LONG)((ulonglong)DAT_14c99d690 >> 0x20);
    uStack_370._0_4_ = DAT_14c99d698 + -1;
    if (DAT_14c99d698 == 0) {
      uStack_370._0_4_ = 0;
    }
    local_368 = 0x49fc40d2;
    uStack_364 = 1;
    uStack_360 = 0x20;
    FUN_140bee87a(&local_78,&local_378,2);
    plVar31 = (longlong *)FUN_14054d1d4();
    lVar50 = local_6c0;
    plVar32 = local_78;
    if ((int)uStack_70 == 0) {
      plVar32 = (longlong *)&DAT_149dfb77a;
    }
    plVar32 = (longlong *)(**(code **)(*plVar31 + 0x18))(plVar31,plVar32,0);
    if (plVar32 == (longlong *)0x0) {
LAB_142ac4c3f:
      FUN_146ffa660(*(undefined8 *)(lVar50 + 0x180));
      *(undefined4 *)(lVar50 + 0x188) = 0;
      if (*(int *)(lVar50 + 0x18c) == 0) {
        bVar51 = 0;
      }
      else {
        bVar51 = 0;
        FUN_1470039b0(local_690);
      }
    }
    else {
      lVar33 = (**(code **)(*plVar32 + 0x30))(plVar32);
      if (lVar33 == 0) {
        (**(code **)*plVar32)(plVar32,1);
        goto LAB_142ac4c3f;
      }
      bVar73 = false;
      pppLStack_490 = (LARGE_INTEGER ***)0x0;
      local_488 = (LARGE_INTEGER *)0xffffffffffffffff;
      local_480 = 0;
      local_478 = (LARGE_INTEGER **)0xffffffff00000000;
      local_470 = (undefined1  [16])0x0;
      local_460 = (longlong *)0x0;
      local_378.s.LowPart = 0xb7756362;
      local_378.s.HighPart = 0;
      uStack_370._0_4_ = 0;
      uStack_370._4_4_ = 0;
      local_368 = 0;
      uStack_364 = 0;
      uStack_360 = 0;
      uStack_35c = 0;
      local_358 = 0;
      uStack_354 = 0;
      bStack_350 = 0;
      bStack_34f = 0;
      uStack_34e = 0;
      uStack_34c = 0;
      uStack_348 = 0;
      uStack_344 = 0;
      uStack_340 = 0;
      local_568 = (undefined1  [16])0x0;
      local_498 = plVar32;
      cVar26 = FUN_140e03692();
      if ((cVar26 != '\0') && (CONCAT44(uStack_364,local_368) != 0)) {
        lVar33 = 0;
        FUN_140e03374(&local_498,&local_378,0);
        plVar31 = (longlong *)CONCAT44(local_378.s.HighPart,local_378.s.LowPart);
        local_4c0 = plVar31;
        if (plVar31 != (longlong *)0x0) {
          if (((ulonglong)plVar31[3] >> 0x3e & 1) == 0) {
            (**(code **)(*plVar31 + 8))(plVar31);
          }
          lVar33 = plVar31[2];
        }
        local_378.s.LowPart = 0xb7756362;
        local_378.s.HighPart = 0;
        uStack_370._0_4_ = 0;
        uStack_370._4_4_ = 0;
        local_368 = 0;
        uStack_364 = 0;
        uStack_360 = 0;
        uStack_35c = 0;
        local_358 = 0;
        uStack_354 = 0;
        bStack_350 = 0;
        bStack_34f = 0;
        uStack_34e = 0;
        uStack_34c = 0;
        uStack_348 = 0;
        uStack_344 = 0;
        uStack_340 = 0;
        local_568 = (undefined1  [16])0x0;
        cVar26 = FUN_140e03692(&local_498);
        if (cVar26 == '\0') {
          lVar34 = 0;
        }
        else {
          lVar34 = CONCAT44(uStack_364,local_368);
        }
        bVar73 = lVar33 == lVar34;
      }
      plVar31 = local_460;
      if (local_460 != (longlong *)0x0) {
        LOCK();
        plVar70 = local_460 + 3;
        lVar33 = *plVar70;
        *plVar70 = *plVar70 + -1;
        UNLOCK();
        if (((uint)lVar33 & 0x3fffffff) == 1) {
          (**(code **)(*local_460 + 0x10))(local_460);
          *(undefined1 (*) [16])(plVar31 + 1) = (undefined1  [16])0x0;
          LOCK();
          puVar60 = (ulonglong *)(plVar31 + 3);
          uVar48 = *puVar60;
          *puVar60 = *puVar60 - 0x40000000;
          UNLOCK();
          if ((uVar48 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar31)(plVar31,1);
          }
        }
      }
      uVar30 = local_470._8_8_;
      if ((longlong *)local_470._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar31 = (longlong *)(local_470._8_8_ + 0x18);
        lVar33 = *plVar31;
        *plVar31 = *plVar31 + -1;
        UNLOCK();
        if (((uint)lVar33 & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_470._8_8_ + 0x10))(local_470._8_8_);
          *(undefined1 (*) [16])(uVar30 + 8) = (undefined1  [16])0x0;
          LOCK();
          puVar60 = (ulonglong *)(uVar30 + 0x18);
          uVar48 = *puVar60;
          *puVar60 = *puVar60 - 0x40000000;
          UNLOCK();
          if ((uVar48 & 0xfffffffc0000000) == 0x40000000) {
            (*(code *)**(undefined8 **)uVar30)(uVar30,1);
          }
        }
      }
      uVar30 = local_470._0_8_;
      if ((longlong *)local_470._0_8_ != (longlong *)0x0) {
        LOCK();
        plVar31 = (longlong *)(local_470._0_8_ + 0x18);
        lVar33 = *plVar31;
        *plVar31 = *plVar31 + -1;
        UNLOCK();
        if (((uint)lVar33 & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_470._0_8_ + 0x10))(local_470._0_8_);
          *(undefined1 (*) [16])(uVar30 + 8) = (undefined1  [16])0x0;
          LOCK();
          puVar60 = (ulonglong *)(uVar30 + 0x18);
          uVar48 = *puVar60;
          *puVar60 = *puVar60 - 0x40000000;
          UNLOCK();
          if ((uVar48 & 0xfffffffc0000000) == 0x40000000) {
            (*(code *)**(undefined8 **)uVar30)(uVar30,1);
          }
        }
      }
      (**(code **)*plVar32)(plVar32);
      if (bVar73) {
        FUN_1467fe202(&local_4c0);
        memset(&local_378,0,0x90);
        FUN_144869430(&local_378);
        local_2e8 = 0;
        local_378.s.LowPart = 0x49e1ddc0;
        local_378.s.HighPart = 1;
        local_2e0 = local_498;
        uStack_2d8 = pppLStack_490;
        local_2d0 = 0x7fffffffffffffff;
        bStack_350 = bStack_350 | 1;
        bStack_34f = bStack_34f & 0xfe;
        FUN_146fecfa8(local_690);
        if ((bStack_34f & 2) != 0) {
          bVar73 = false;
        }
        local_378.s.LowPart = 0x49e35f70;
        local_378.s.HighPart = 1;
        if (local_320 != (longlong *)0x0) {
          if (*local_320 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_320);
        }
        if (local_300 != 0) {
          if (*(longlong *)(local_300 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_300);
          lVar50 = local_6c0;
        }
      }
      if (!bVar73) goto LAB_142ac4c3f;
      bVar51 = 1;
      if ((longlong)*(int *)(lVar50 + 0x188) != 0) {
        lVar33 = (longlong)*(int *)(lVar50 + 0x188) * 0xb8;
        lVar50 = *(longlong *)(lVar50 + 0x180) + 0x10;
        do {
          FUN_146fed05e(lVar50);
          lVar50 = lVar50 + 0xb8;
          lVar33 = lVar33 + -0xb8;
        } while (lVar33 != 0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar32 = local_4c0;
    if (local_4c0 != (longlong *)0x0) {
      LOCK();
      plVar31 = local_4c0 + 3;
      lVar50 = *plVar31;
      *plVar31 = *plVar31 + -1;
      UNLOCK();
      if (((uint)lVar50 & 0x3fffffff) == 1) {
        (**(code **)(*local_4c0 + 0x10))(local_4c0);
        *(undefined1 (*) [16])(plVar32 + 1) = (undefined1  [16])0x0;
        LOCK();
        puVar60 = (ulonglong *)(plVar32 + 3);
        uVar48 = *puVar60;
        *puVar60 = *puVar60 - 0x40000000;
        UNLOCK();
        if ((uVar48 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar32)(plVar32);
        }
      }
    }
    if (((bVar51 & bVar22) == 1) && ((longlong)*(int *)(local_6c0 + 0x188) != 0)) {
      plVar32 = *(longlong **)(local_6c0 + 0x180);
      local_698 = plVar32 + (longlong)*(int *)(local_6c0 + 0x188) * 0x17;
      do {
        plVar31 = plVar32 + 2;
        local_358 = 0;
        uStack_354 = 0;
        bStack_350 = 0;
        bStack_34f = 0;
        uStack_34e = 0;
        local_378.s.LowPart = 0;
        local_378.s.HighPart = 0;
        uStack_370._0_4_ = 0;
        uStack_370._4_4_ = 0;
        uStack_34c = 0x80;
        uStack_348 = 0xffffffff;
        uStack_344 = 0;
        local_338 = 0;
        local_330 = 0;
        local_478 = (LARGE_INTEGER **)0x0;
        local_498 = (longlong *)0x0;
        pppLStack_490 = (LARGE_INTEGER ***)0x0;
        local_470._0_12_ = ZEXT812(0xffffffff00000080) << 0x20;
        local_470._12_4_ = 0;
        local_458 = 0;
        local_450 = 0;
        iVar27 = (int)plVar32[7];
        uVar44 = 1;
        uVar48 = 0;
        iVar65 = 0;
        iVar41 = 0;
        if (iVar27 != 0) {
          puVar38 = (uint *)plVar32[6];
          if ((uint *)plVar32[6] == (uint *)0x0) {
            puVar38 = (uint *)(plVar32 + 4);
          }
          uVar62 = *puVar38;
          if (uVar62 == 0) {
            iVar41 = iVar27 + 0x1e;
            if (-1 < iVar27 + -1) {
              iVar41 = iVar27 + -1;
            }
            uVar48 = 0;
            uVar44 = (ulonglong)(uint)(iVar41 >> 5);
            if (iVar41 >> 5 < 1) {
              uVar44 = 0;
            }
            iVar65 = 0;
            do {
              if (uVar44 == uVar48) goto LAB_142ac6aa3;
              iVar65 = iVar65 + 0x20;
              uVar62 = puVar38[uVar48 + 1];
              uVar48 = uVar48 + 1;
            } while (uVar62 == 0);
          }
          else {
            uVar48 = 0;
          }
          uVar44 = (ulonglong)(-uVar62 & uVar62);
          uVar59 = uVar44 * 2 + 1;
          lVar50 = 0x3f;
          if (uVar59 != 0) {
            for (; uVar59 >> lVar50 == 0; lVar50 = lVar50 + -1) {
            }
          }
          iVar41 = (iVar65 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
          if (iVar27 <= iVar41) {
            iVar41 = iVar27;
          }
        }
        if (iVar41 < iVar27) {
          uVar62 = 0xffffffff;
          do {
            if ((*(char *)(*plVar31 + 0x44 + (longlong)iVar41 * 0x50) == '\x01') &&
               (lVar50 = *plVar31 + (longlong)iVar41 * 0x50,
               DAT_14c83e2e8 != *(int *)(lVar50 + 0x40) ||
               _DAT_14c83e2d8 != *(undefined1 (*) [16])(lVar50 + 0x30))) {
              local_568._8_8_ = lVar50;
              local_568._0_8_ = lVar50 + 0x30;
              FUN_147003c04(&local_378,&local_78,local_568);
              iVar27 = (int)plVar32[7];
            }
            uVar62 = uVar62 & ~(uint)uVar44;
            puVar38 = (uint *)plVar32[6];
            if ((uint *)plVar32[6] == (uint *)0x0) {
              puVar38 = (uint *)(plVar32 + 4);
            }
            iVar41 = (int)uVar48;
            lVar50 = (longlong)iVar41;
            uVar64 = puVar38[lVar50] & uVar62;
            if (uVar64 == 0) {
              iVar68 = iVar27 + 0x1e;
              if (-1 < iVar27 + -1) {
                iVar68 = iVar27 + -1;
              }
              iVar68 = iVar68 >> 5;
              iVar63 = iVar68;
              if (iVar68 < iVar41) {
                iVar63 = iVar41;
              }
              if (iVar68 <= iVar41) break;
              lVar33 = 0;
              while( true ) {
                iVar65 = iVar65 + 0x20;
                uVar64 = puVar38[lVar50 + lVar33 + 1];
                if (uVar64 != 0) break;
                lVar33 = lVar33 + 1;
                if (iVar63 - lVar50 == lVar33) goto LAB_142ac6aa3;
              }
              uVar48 = (ulonglong)(iVar41 + (int)lVar33 + 1);
              uVar62 = 0xffffffff;
            }
            uVar44 = (ulonglong)(-uVar64 & uVar64);
            uVar59 = uVar44 * 2 + 1;
            lVar50 = 0x3f;
            if (uVar59 != 0) {
              for (; uVar59 >> lVar50 == 0; lVar50 = lVar50 + -1) {
              }
            }
            iVar41 = (iVar65 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
          } while (iVar41 < iVar27);
        }
LAB_142ac6aa3:
        if ((char)plVar32[0x16] == '\0') {
LAB_142ac6b1e:
          plVar32[0xe] = plVar32[0x14];
          plVar32[0xf] = plVar32[0x15];
          FUN_1470041a6(plVar31);
        }
        else {
          puVar46 = &DAT_149dfb77a;
          if ((int)plVar32[0xd] != 0) {
            puVar46 = (undefined2 *)plVar32[0xc];
          }
          local_6e0 = plVar32 + 0x12;
          local_6e8 = plVar32 + 0xf;
          local_6f0 = &local_498;
          local_6f8 = &local_378;
          iVar27 = (**(code **)(*local_6a0 + 0x168))(local_6a0,puVar46,plVar32 + 0xe);
          if (iVar27 != 0) goto LAB_142ac6b1e;
          if (local_470._0_4_ == 0) {
            uVar59 = 1;
            uVar48 = 0;
            uVar44 = 0;
            iVar27 = 0;
          }
          else {
            ppLVar40 = local_478;
            if (local_478 == (LARGE_INTEGER **)0x0) {
              ppLVar40 = &local_488;
            }
            uVar62 = *(uint *)ppLVar40;
            if (uVar62 == 0) {
              iVar27 = local_470._0_4_ + 0x1e;
              if (-1 < (int)(local_470._0_4_ - 1)) {
                iVar27 = local_470._0_4_ - 1;
              }
              uVar48 = 0;
              uVar44 = (ulonglong)(uint)(iVar27 >> 5);
              if (iVar27 >> 5 < 1) {
                uVar44 = uVar48;
              }
              iVar27 = 0;
              do {
                if (uVar44 == uVar48) goto LAB_142ac6b33;
                iVar27 = iVar27 + 0x20;
                uVar62 = *(uint *)((longlong)ppLVar40 + (uVar48 + 1) * 4);
                uVar48 = uVar48 + 1;
              } while (uVar62 == 0);
            }
            else {
              uVar48 = 0;
              iVar27 = 0;
            }
            uVar59 = (ulonglong)(-uVar62 & uVar62);
            uVar44 = uVar59 * 2 + 1;
            lVar50 = 0x3f;
            if (uVar44 != 0) {
              for (; uVar44 >> lVar50 == 0; lVar50 = lVar50 + -1) {
              }
            }
            uVar62 = (iVar27 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
            uVar44 = (ulonglong)uVar62;
            if ((int)local_470._0_4_ <= (int)uVar62) {
              uVar44 = (ulonglong)(uint)local_470._0_4_;
            }
          }
          if ((uint)uVar44 != local_470._0_4_) {
            uVar62 = 0xffffffff;
            uVar54 = (ulonglong)(uint)local_470._0_4_;
            local_6b0 = (ulonglong)(uint)local_470._0_4_;
            do {
              local_6d0 = (longlong *)CONCAT44(local_6d0._4_4_,uVar62);
              iVar41 = (int)local_498[(longlong)(int)uVar44 * 3 + 1] + -1;
              if ((int)local_498[(longlong)(int)uVar44 * 3 + 1] == 0) {
                iVar41 = 0;
              }
              if (0 < iVar41) {
                iVar65 = 0;
                do {
                  iVar65 = iVar65 + 1;
                } while (iVar41 != iVar65);
              }
              local_6b8 = uVar54;
              iVar41 = FUN_147004332(plVar31);
              uVar54 = local_6b8;
              if (iVar41 != -1) {
                if ((*plVar31 + (longlong)iVar41 * 0x50 + 0x10U & 0xffffffffffffffef) != 0) {
                  *(undefined1 *)(*plVar31 + (longlong)iVar41 * 0x50 + 0x44) = 0;
                  uVar54 = (ulonglong)(uint)local_470._0_4_;
                }
              }
              uVar62 = (uint)local_6d0 & ~(uint)uVar59;
              ppLVar40 = local_478;
              if (local_478 == (LARGE_INTEGER **)0x0) {
                ppLVar40 = &local_488;
              }
              iVar41 = (int)uVar48;
              lVar50 = (longlong)iVar41;
              uVar64 = *(uint *)((longlong)ppLVar40 + lVar50 * 4) & uVar62;
              iVar65 = (int)uVar54;
              if (uVar64 == 0) {
                iVar68 = iVar65 + 0x1e;
                if (-1 < iVar65 + -1) {
                  iVar68 = iVar65 + -1;
                }
                iVar68 = iVar68 >> 5;
                iVar27 = iVar27 + 0x20;
                iVar63 = iVar68;
                if (iVar68 < iVar41) {
                  iVar63 = iVar41;
                }
                if (iVar41 < iVar68) {
                  lVar33 = 0;
                  do {
                    uVar64 = *(uint *)((longlong)ppLVar40 + (lVar50 + lVar33 + 1) * 4);
                    if (uVar64 != 0) {
                      uVar48 = (ulonglong)(iVar41 + (int)lVar33 + 1);
                      uVar62 = 0xffffffff;
                      goto LAB_142ac6da9;
                    }
                    iVar27 = iVar27 + 0x20;
                    lVar33 = lVar33 + 1;
                  } while (iVar63 - lVar50 != lVar33);
                  uVar62 = 0xffffffff;
                  iVar41 = iVar63;
                }
                uVar44 = uVar54 & 0xffffffff;
                uVar48 = (ulonglong)(iVar41 + 1);
              }
              else {
LAB_142ac6da9:
                uVar59 = (ulonglong)(-uVar64 & uVar64);
                uVar44 = uVar59 * 2 + 1;
                lVar50 = 0x3f;
                if (uVar44 != 0) {
                  for (; uVar44 >> lVar50 == 0; lVar50 = lVar50 + -1) {
                  }
                }
                uVar64 = (iVar27 - ((uint)lVar50 ^ 0x3f)) + 0x3e;
                uVar44 = (ulonglong)uVar64;
                if (iVar65 <= (int)uVar64) {
                  uVar44 = uVar54 & 0xffffffff;
                }
              }
            } while ((int)uVar44 != (int)local_6b0);
          }
        }
LAB_142ac6b33:
        local_450 = 0;
        if (local_458 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_498);
        local_330 = 0;
        if (local_338 != 0) {
          FUN_1400020a8();
        }
        FUN_146ffbd4c();
        plVar32 = plVar32 + 0x17;
      } while (plVar32 != local_698);
    }
  }
  if (local_4f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  param_1 = local_6c0;
  if (local_4e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_4b8 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
LAB_142ac4d5a:
  local_4e8 = (longlong *)0x0;
  uStack_4e0 = 0;
  local_498 = (longlong *)&local_478;
  local_480 = local_480 & 0xffffffffffffff00;
  local_488 = &local_378;
  local_4d0[0] = 0;
  pppLStack_490 = (LARGE_INTEGER ***)local_498;
  QueryPerformanceCounter(&local_378);
  local_4f8 = (undefined2 *)
              ((double)CONCAT44(local_378.s.HighPart,local_378.s.LowPart) * DAT_14c83f420 +
              16777216.0);
  local_660 = (LPCRITICAL_SECTION)(param_1 + 8);
  local_620 = (LPCRITICAL_SECTION)(param_1 + 0x38);
  local_6c1 = local_6d1 ^ 1;
  local_678 = (longlong *)(param_1 + 0x150);
  local_638 = (undefined8 *)(param_1 + 0x170);
  lVar50 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_680 = (undefined8 *)(lVar50 + 0x308);
  local_640 = (undefined8 *)(lVar50 + 0x310);
  local_628 = (int *)(lVar50 + 0x2c8);
  local_630 = (undefined8 *)(lVar50 + 0x2c0);
  local_670 = 0;
  local_6a4 = 0;
  do {
    EnterCriticalSection(local_660);
    if (0 < (longlong)(int)local_4d0[0]) {
      plVar32 = *(longlong **)(param_1 + 0x160);
      plVar31 = plVar32 + (longlong)(int)local_4d0[0] * 0x10;
      iVar27 = 0;
      local_658 = plVar31;
      do {
        if ((char)plVar32[0xf] == '\x01') {
          plVar70 = (longlong *)*plVar32;
          if (plVar70[6] != 0) {
            if (*(char *)((longlong)plVar70 + 0x55) == '\x01') {
              *(undefined1 *)((longlong)plVar70 + 0x55) = 0;
            }
            else {
              iVar41 = (int)plVar32[0xe];
              local_6b0 = plVar32[10];
              local_6d0 = (longlong *)
                          CONCAT44(local_6d0._4_4_,*(undefined4 *)((longlong)plVar32 + 0x74));
              local_6b8 = plVar32[0xc];
              if (*(char *)((longlong)plVar70 + 0x56) != '\0') {
                *(undefined1 *)((longlong)plVar70 + 0x56) = 0;
                LOCK();
                piVar1 = (int *)(*(longlong *)(plVar70[6] + 0x88) + 0xe4);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              if (*(char *)((longlong)plVar70 + 0x53) == '\0') {
                if (0 < iVar41) {
                  local_650 = CONCAT71(local_650._1_7_,*(undefined1 *)((longlong)plVar32 + 10));
                  bVar51 = *(byte *)((longlong)plVar70 + 0x52);
                  local_6a0 = (longlong *)
                              CONCAT71(local_6a0._1_7_,
                                       *(byte *)(plVar70 + 10) | *(byte *)(plVar32 + 1));
                  local_648 = CONCAT71(local_648._1_7_,
                                       *(byte *)((longlong)plVar70 + 0x51) |
                                       *(byte *)((longlong)plVar32 + 9));
                  iVar65 = 0;
                  do {
                    lVar50 = (longlong)iVar65 * 0x40;
                    puVar56 = (undefined8 *)(local_6b0 + lVar50);
                    local_78 = *(longlong **)(local_6b0 + 0x20 + lVar50);
                    iVar68 = *(int *)(local_6b0 + 0x28 + lVar50);
                    iVar63 = iVar68 + -1;
                    if (iVar68 == 0) {
                      iVar63 = 0;
                    }
                    uStack_70 = CONCAT44(uStack_70._4_4_,iVar63);
                    lVar50 = FUN_146fe45e6(plVar70);
                    if (((*(longlong *)(lVar50 + 0x30) == 0) ||
                        (((*(byte *)(lVar50 + 0x50) | (byte)local_6a0) & 1) == 0)) ||
                       ((((*(byte *)(lVar50 + 0x51) | (byte)local_648) & 1) != 0 &&
                        ((((char)local_650 == '\0' && ((bVar51 & 1) == 0)) &&
                         ((*(byte *)(lVar50 + 0x52) & 1) == 0)))))) {
LAB_142ac4fcd:
                      lVar50 = (longlong)(iVar41 + -1) * 0x40;
                      uVar30 = *puVar56;
                      uStack_370 = (longlong *)puVar56[1];
                      uVar7 = *(undefined8 *)*(undefined1 (*) [12])(puVar56 + 2);
                      auVar19 = *(undefined1 (*) [12])(puVar56 + 2);
                      uVar8 = puVar56[4];
                      uVar9 = puVar56[5];
                      Var20 = *(unkbyte9 *)(puVar56 + 4);
                      uVar10 = puVar56[6];
                      uStack_340 = puVar56[7];
                      uStack_348 = (undefined4)uVar10;
                      uStack_344 = (undefined4)((ulonglong)uVar10 >> 0x20);
                      local_358 = (undefined4)uVar8;
                      uStack_354 = (undefined4)((ulonglong)uVar8 >> 0x20);
                      bStack_350 = (byte)uVar9;
                      bStack_34f = (byte)((ulonglong)uVar9 >> 8);
                      uStack_34e = (undefined2)((ulonglong)uVar9 >> 0x10);
                      uStack_34c = (undefined4)((ulonglong)uVar9 >> 0x20);
                      local_368 = (undefined4)uVar7;
                      uStack_364 = (undefined4)((ulonglong)uVar7 >> 0x20);
                      uStack_360 = (undefined4)puVar56[3];
                      uStack_35c = (undefined4)((ulonglong)puVar56[3] >> 0x20);
                      local_378.s.LowPart = (DWORD)uVar30;
                      local_378.s.HighPart = (LONG)((ulonglong)uVar30 >> 0x20);
                      uVar7 = *(undefined8 *)(local_6b0 + lVar50);
                      uVar8 = ((undefined8 *)(local_6b0 + lVar50))[1];
                      puVar52 = (undefined8 *)(local_6b0 + 0x10 + lVar50);
                      uVar9 = *puVar52;
                      uVar11 = puVar52[1];
                      puVar52 = (undefined8 *)(local_6b0 + 0x20 + lVar50);
                      uVar12 = *puVar52;
                      uVar13 = puVar52[1];
                      puVar52 = (undefined8 *)(local_6b0 + 0x30 + lVar50);
                      uVar14 = puVar52[1];
                      puVar56[6] = *puVar52;
                      puVar56[7] = uVar14;
                      puVar56[4] = uVar12;
                      puVar56[5] = uVar13;
                      puVar56[2] = uVar9;
                      puVar56[3] = uVar11;
                      *puVar56 = uVar7;
                      puVar56[1] = uVar8;
                      auVar15._12_4_ = uStack_35c;
                      auVar15._0_12_ = auVar19;
                      auVar17[9] = bStack_34f;
                      auVar17._0_9_ = Var20;
                      auVar17._10_2_ = uStack_34e;
                      auVar17._12_4_ = uStack_34c;
                      puVar56 = (undefined8 *)(local_6b0 + 0x30 + lVar50);
                      *puVar56 = uVar10;
                      puVar56[1] = uStack_340;
                      *(undefined1 (*) [16])(local_6b0 + 0x20 + lVar50) = auVar17;
                      *(undefined1 (*) [16])(local_6b0 + 0x10 + lVar50) = auVar15;
                      *(undefined8 *)(local_6b0 + lVar50) = uVar30;
                      ((undefined8 *)(local_6b0 + lVar50))[1] = uStack_370;
                      iVar41 = iVar41 + -1;
                    }
                    else {
                      local_688 = CONCAT44(local_688._4_4_,iVar41);
                      uVar48 = 0;
                      iVar41 = *(int *)(puVar56 + 3) + -1;
                      if (*(int *)(puVar56 + 3) == 0) {
                        iVar41 = 0;
                      }
                      iStack_4b0 = iVar41;
                      local_4b8 = (undefined1  [8])puVar56[2];
                      if (0 < iVar41) {
                        lVar50 = 0;
                        uVar48 = 0;
                        do {
                          uVar2 = *(ushort *)(puVar56[2] + lVar50 * 2);
                          uVar62 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
                          uVar64 = (uint)(uVar48 >> 8) ^
                                   *(uint *)(&DAT_14c75d150 +
                                            (ulonglong)(((uint)uVar48 ^ uVar62) & 0xff) * 4);
                          uVar48 = (ulonglong)
                                   (uVar64 >> 8 ^
                                   *(uint *)(&DAT_14c75d150 +
                                            (ulonglong)(uVar64 & 0xff ^ uVar62 >> 8 & 0xff) * 4));
                          lVar50 = lVar50 + 1;
                        } while (iVar41 != (int)lVar50);
                      }
                      local_6c2 = bVar51;
                      iVar68 = FUN_146854af8(*(longlong *)(plVar70[6] + 0x88) + 0x80,uVar48,
                                             local_4b8);
                      iVar41 = (int)local_688;
                      bVar51 = local_6c2;
                      if (iVar68 != -1) goto LAB_142ac4fcd;
                      iVar65 = iVar65 + 1;
                    }
                  } while (iVar65 < iVar41);
                }
                local_668 = CONCAT44(local_668._4_4_,iVar27);
                local_688 = CONCAT44(local_688._4_4_,iVar41);
                if ((uint)local_6d0 == 0) {
                  local_6d0 = (longlong *)((ulonglong)local_6d0 & 0xffffffff00000000);
                }
                else if (0 < (int)(uint)local_6d0) {
                  iVar27 = (int)plVar70[5];
                  iVar65 = 0;
                  local_6a0 = (longlong *)CONCAT44(local_6a0._4_4_,iVar27);
                  iVar41 = (uint)local_6d0;
                  local_698 = plVar70;
                  plVar31 = uStack_370;
                  do {
                    uStack_370._4_4_ = (uint)((ulonglong)plVar31 >> 0x20);
                    if ((iVar27 != 0) && ((longlong)(int)plVar70[5] != 0)) {
                      puVar52 = (undefined8 *)((longlong)iVar65 * 0x40 + local_6b8);
                      puVar56 = (undefined8 *)plVar70[4];
                      puVar71 = puVar56 + (longlong)(int)plVar70[5] * 2;
                      uVar30 = puVar52[4];
                      iVar68 = *(int *)(puVar52 + 5) + -1;
                      if (*(int *)(puVar52 + 5) == 0) {
                        iVar68 = 0;
                      }
                      do {
                        local_378.s.LowPart = (DWORD)uVar30;
                        local_378.s.HighPart = (LONG)((ulonglong)uVar30 >> 0x20);
                        iVar27 = *(int *)(puVar56 + 1) + -1;
                        if (*(int *)(puVar56 + 1) == 0) {
                          iVar27 = 0;
                        }
                        local_568._8_4_ = iVar27;
                        local_568._0_8_ = *puVar56;
                        uStack_370._0_4_ = iVar68;
                        cVar26 = FUN_146819142(local_568,&local_378);
                        plVar31 = (longlong *)CONCAT44(uStack_370._4_4_,(int)uStack_370);
                        plVar70 = local_698;
                        iVar27 = (int)local_6a0;
                        if (cVar26 != '\0') {
                          lVar50 = (longlong)(iVar41 + -1) * 0x40;
                          uVar30 = *puVar52;
                          uStack_370 = (longlong *)puVar52[1];
                          uVar7 = *(undefined8 *)*(undefined1 (*) [12])(puVar52 + 2);
                          auVar19 = *(undefined1 (*) [12])(puVar52 + 2);
                          uVar8 = puVar52[4];
                          uVar9 = puVar52[5];
                          Var20 = *(unkbyte9 *)(puVar52 + 4);
                          uVar10 = puVar52[6];
                          uStack_340 = puVar52[7];
                          uStack_348 = (undefined4)uVar10;
                          uStack_344 = (undefined4)((ulonglong)uVar10 >> 0x20);
                          local_358 = (undefined4)uVar8;
                          uStack_354 = (undefined4)((ulonglong)uVar8 >> 0x20);
                          bStack_350 = (byte)uVar9;
                          bStack_34f = (byte)((ulonglong)uVar9 >> 8);
                          uStack_34e = (undefined2)((ulonglong)uVar9 >> 0x10);
                          uStack_34c = (undefined4)((ulonglong)uVar9 >> 0x20);
                          local_368 = (undefined4)uVar7;
                          uStack_364 = (undefined4)((ulonglong)uVar7 >> 0x20);
                          uStack_360 = (undefined4)puVar52[3];
                          uStack_35c = (undefined4)((ulonglong)puVar52[3] >> 0x20);
                          local_378.s.LowPart = (DWORD)uVar30;
                          local_378.s.HighPart = (LONG)((ulonglong)uVar30 >> 0x20);
                          uVar7 = *(undefined8 *)(local_6b8 + lVar50);
                          uVar8 = ((undefined8 *)(local_6b8 + lVar50))[1];
                          puVar56 = (undefined8 *)(local_6b8 + 0x10 + lVar50);
                          uVar9 = *puVar56;
                          uVar11 = puVar56[1];
                          puVar56 = (undefined8 *)(local_6b8 + 0x20 + lVar50);
                          uVar12 = *puVar56;
                          uVar13 = puVar56[1];
                          puVar56 = (undefined8 *)(local_6b8 + 0x30 + lVar50);
                          uVar14 = puVar56[1];
                          puVar52[6] = *puVar56;
                          puVar52[7] = uVar14;
                          puVar52[4] = uVar12;
                          puVar52[5] = uVar13;
                          puVar52[2] = uVar9;
                          puVar52[3] = uVar11;
                          *puVar52 = uVar7;
                          puVar52[1] = uVar8;
                          auVar16._12_4_ = uStack_35c;
                          auVar16._0_12_ = auVar19;
                          auVar18[9] = bStack_34f;
                          auVar18._0_9_ = Var20;
                          auVar18._10_2_ = uStack_34e;
                          auVar18._12_4_ = uStack_34c;
                          puVar56 = (undefined8 *)(local_6b8 + 0x30 + lVar50);
                          *puVar56 = uVar10;
                          puVar56[1] = uStack_340;
                          *(undefined1 (*) [16])(local_6b8 + 0x20 + lVar50) = auVar18;
                          *(undefined1 (*) [16])(local_6b8 + 0x10 + lVar50) = auVar16;
                          *(undefined8 *)(local_6b8 + lVar50) = uVar30;
                          ((undefined8 *)(local_6b8 + lVar50))[1] = uStack_370;
                          iVar41 = (uint)local_6d0 + -1;
                          local_6d0 = (longlong *)CONCAT44(local_6d0._4_4_,iVar41);
                          goto LAB_142ac5232;
                        }
                        puVar56 = puVar56 + 2;
                      } while (puVar56 != puVar71);
                    }
                    iVar65 = iVar65 + 1;
                    uStack_370 = plVar31;
LAB_142ac5232:
                    plVar31 = uStack_370;
                  } while (iVar65 < iVar41);
                }
                FUN_1447a1747(plVar70[4]);
                *(undefined4 *)(plVar70 + 5) = 0;
                if (*(int *)((longlong)plVar70 + 0x2c) != 0) {
                  FUN_1408be2c4(plVar70 + 4);
                }
                *(undefined1 *)(plVar70[6] + 0x98) = 1;
                *(undefined1 *)((longlong)plVar70 + 0x53) = 1;
                plVar31 = local_658;
                iVar41 = (int)local_688;
                iVar27 = (int)local_668;
              }
              if (iVar41 != 0 || (uint)local_6d0 != 0) {
                local_518.QuadPart = local_6b8;
                local_510 = (uint)local_6d0;
                local_528 = local_6b0;
                local_538 = plVar32[6];
                local_530 = (undefined4)((ulonglong)(plVar32[7] - local_538) >> 1);
                local_548 = plVar32[2];
                local_540 = (undefined4)((ulonglong)(plVar32[3] - local_548) >> 1);
                local_6f8 = &local_518;
                local_520 = iVar41;
                FUN_146fe6888(local_6c0,&local_548,&local_538);
              }
            }
          }
          iVar27 = iVar27 + 1;
          *(undefined1 *)(*plVar32 + 0x54) = 0;
          puVar56 = (undefined8 *)*plVar32;
          if (puVar56 != (undefined8 *)0x0) {
            *plVar32 = 0;
            LOCK();
            piVar1 = (int *)(puVar56 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar56)();
            }
          }
        }
        lpCriticalSection = local_620;
        iVar41 = local_6a4;
        plVar32 = plVar32 + 0x10;
      } while (plVar32 != plVar31);
      iVar27 = iVar27 - local_6a4;
      local_4d0[0] = 0;
      EnterCriticalSection(local_620);
      param_1 = local_6c0;
      *(int *)(local_6c0 + 0x134) = *(int *)(local_6c0 + 0x134) + iVar41;
      *(int *)(local_6c0 + 0x138) = *(int *)(local_6c0 + 0x138) + iVar27;
      LeaveCriticalSection(lpCriticalSection);
      local_6a4 = 0;
    }
    uVar48 = uStack_4e0;
    local_568._8_8_ = local_4d0;
    local_568._0_8_ = param_1;
    local_558 = &local_498;
    bVar51 = local_6c1 & (byte)local_670;
    if (*(int *)(param_1 + 0x158) != 0) {
      FUN_146fff65c(local_4e8,uStack_4e0 & 0xffffffff);
      uVar44 = uStack_4e0 >> 0x20;
      uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
      if (((longlong)uVar48 < 0) && ((int)uVar44 != 0)) {
        FUN_146fff692(&local_4e8);
      }
      if (0 < *(int *)(param_1 + 0x158)) {
        iVar27 = 0;
        plVar32 = local_678;
        do {
          plVar31 = (longlong *)(*plVar32 + (longlong)iVar27 * 0x18);
          lVar50 = *plVar31;
          if ((*(longlong *)(lVar50 + 0x30) != 0) && (*(char *)(lVar50 + 0x56) == '\0')) {
            FUN_146fe48ec(lVar50,&local_4e8,plVar31 + 1);
            lVar50 = *plVar31;
            plVar32 = local_678;
          }
          if ((*(char *)(lVar50 + 0x56) == '\x01') && ((char)plVar31[2] == '\x01')) {
            *(undefined1 *)(plVar31 + 2) = 0;
            piVar1 = (int *)((longlong)plVar31 + 0xc);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_146fff6c2(plVar32,iVar27);
              FUN_146fff73c(local_678);
              iVar27 = iVar27 + -1;
              plVar32 = local_678;
            }
          }
          iVar27 = iVar27 + 1;
        } while (iVar27 < *(int *)(param_1 + 0x158));
      }
      plVar32 = local_4e8;
      iVar27 = (int)uStack_4e0;
      uVar48 = uStack_4e0 & 0xffffffff;
      if (bVar51 == 0) {
        if (1 < (int)uStack_4e0) {
          memset(&local_368,0,0x2f0);
          local_378.s.LowPart = (DWORD)plVar32;
          local_378.s.HighPart = (LONG)((ulonglong)plVar32 >> 0x20);
          uStack_370 = plVar32 + uVar48 * 2 + -2;
          fVar74 = logf((float)iVar27);
          plVar32 = local_4e8;
          local_368 = (int)(longlong)(fVar74 + fVar74);
          pLVar39 = &local_378;
          do {
            puVar43 = (ulonglong *)pLVar39->QuadPart;
            puVar60 = (ulonglong *)pLVar39[1].QuadPart;
            DVar29 = pLVar39[2].s.LowPart;
            iVar27 = (int)((ulonglong)((longlong)puVar60 - (longlong)puVar43) >> 4);
            uVar48 = (ulonglong)(iVar27 + 1);
            puVar53 = puVar43;
            puVar67 = puVar60;
            if (DVar29 != 0) {
LAB_142ac60e5:
              if (8 < (int)(uint)uVar48) {
                uVar54 = (ulonglong)((uint)uVar48 >> 1);
                uVar48 = puVar43[uVar54 * 2];
                uVar44 = (puVar43 + uVar54 * 2)[1];
                uVar59 = puVar43[1];
                puVar43[uVar54 * 2] = *puVar43;
                (puVar43 + uVar54 * 2)[1] = uVar59;
                *puVar43 = uVar48;
                puVar43[1] = uVar44;
                puVar66 = puVar60 + 2;
                puVar42 = puVar43;
                do {
                  puVar23 = puVar42 + 2;
                  puVar61 = puVar42 + 2;
                  do {
                    puVar42 = puVar61;
                    puVar57 = puVar23;
                    if (puVar60 < puVar42) break;
                    puVar23 = puVar57 + 2;
                    puVar61 = puVar42 + 2;
                  } while (*puVar42 <= *puVar43);
                  puVar23 = puVar66 + -4;
                  do {
                    puVar61 = puVar66;
                    puVar49 = puVar23;
                    puVar66 = puVar61 + -2;
                    if (puVar66 <= puVar43) break;
                    puVar23 = puVar49 + -2;
                  } while (*puVar43 <= *puVar66);
                  if (puVar66 < puVar42) goto LAB_142ac6191;
                  uVar48 = *puVar42;
                  uVar44 = puVar42[1];
                  uVar59 = puVar61[-1];
                  *puVar42 = *puVar66;
                  puVar42[1] = uVar59;
                  *puVar66 = uVar48;
                  puVar61[-1] = uVar44;
                } while( true );
              }
              if (puVar43 < puVar60) {
                do {
                  puVar53 = puVar43;
                  if (puVar43 + 2 <= puVar60) {
                    uVar48 = *puVar43;
                    puVar67 = puVar43 + 2;
                    do {
                      if (uVar48 < *puVar67) {
                        puVar53 = puVar67;
                        uVar48 = *puVar67;
                      }
                      puVar67 = puVar67 + 2;
                    } while (puVar67 <= puVar60);
                  }
                  local_78 = (longlong *)*puVar53;
                  uStack_70 = puVar53[1];
                  plVar31 = local_78;
                  uVar44 = uStack_70;
                  uVar48 = puVar60[1];
                  *puVar53 = *puVar60;
                  puVar53[1] = uVar48;
                  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
                  *(undefined4 *)puVar60 = (undefined4)local_78;
                  *(undefined4 *)((longlong)puVar60 + 4) = local_78._4_4_;
                  *(int *)(puVar60 + 1) = (int)uStack_70;
                  *(undefined4 *)((longlong)puVar60 + 0xc) = uStack_70._4_4_;
                  puVar60 = puVar60 + -2;
                  local_78 = plVar31;
                  uStack_70 = uVar44;
                } while (puVar43 < puVar60);
              }
              goto LAB_142ac644b;
            }
LAB_142ac6239:
            iVar41 = (int)uVar48;
            if (iVar41 != 0) {
              iVar27 = (iVar27 - (iVar27 + -1 >> 0x1f)) + -1 >> 1;
              iVar65 = iVar27;
joined_r0x000142ac625c:
              do {
                iVar68 = iVar27 * 2 + 1;
                if (iVar68 < iVar41) {
                  iVar63 = iVar27 * 2 + 2;
                  if ((iVar63 < iVar41) &&
                     (puVar43[(longlong)iVar68 * 2] <= puVar43[(longlong)iVar63 * 2])) {
                    iVar68 = iVar63;
                  }
                  if (puVar43[(longlong)iVar27 * 2] < puVar43[(longlong)iVar68 * 2]) {
                    puVar60 = puVar43 + (longlong)iVar27 * 2;
                    puVar53 = puVar43 + (longlong)iVar68 * 2;
                    local_78 = (longlong *)*puVar60;
                    uStack_70 = puVar60[1];
                    plVar31 = local_78;
                    uVar59 = uStack_70;
                    uVar44 = puVar53[1];
                    *puVar60 = *puVar53;
                    puVar60[1] = uVar44;
                    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                    uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
                    *(undefined4 *)puVar53 = (undefined4)local_78;
                    *(undefined4 *)((longlong)puVar53 + 4) = local_78._4_4_;
                    *(int *)(puVar53 + 1) = (int)uStack_70;
                    *(undefined4 *)((longlong)puVar53 + 0xc) = uStack_70._4_4_;
                    iVar27 = iVar68;
                    local_78 = plVar31;
                    uStack_70 = uVar59;
                    goto joined_r0x000142ac625c;
                  }
                }
                bVar73 = iVar65 != 0;
                iVar27 = iVar65 + -1;
                iVar65 = iVar27;
              } while (bVar73);
              if (1 < iVar41) {
                uVar48 = uVar48 - 1;
                local_78 = (longlong *)*puVar43;
                uStack_70 = puVar43[1];
                plVar31 = local_78;
                uVar59 = uStack_70;
                uVar44 = (puVar43 + uVar48 * 2)[1];
                *puVar43 = puVar43[uVar48 * 2];
                puVar43[1] = uVar44;
                local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
                puVar60 = puVar43 + uVar48 * 2;
                *(undefined4 *)puVar60 = (undefined4)local_78;
                *(undefined4 *)((longlong)puVar60 + 4) = local_78._4_4_;
                *(int *)(puVar60 + 1) = (int)uStack_70;
                *(undefined4 *)((longlong)puVar60 + 0xc) = uStack_70._4_4_;
                local_78 = plVar31;
                uStack_70 = uVar59;
                if (iVar41 != 2) {
                  do {
                    iVar27 = 0;
                    iVar65 = 1;
                    iVar41 = 0;
                    do {
                      iVar27 = iVar27 + 2;
                      iVar68 = iVar65;
                      if (((longlong)iVar27 < (longlong)uVar48) &&
                         (puVar43[(longlong)iVar65 * 2] <= puVar43[(longlong)iVar27 * 2])) {
                        iVar68 = iVar27;
                      }
                      if (puVar43[(longlong)iVar68 * 2] <= puVar43[(longlong)iVar41 * 2]) break;
                      puVar60 = puVar43 + (longlong)iVar41 * 2;
                      puVar53 = puVar43 + (longlong)iVar68 * 2;
                      uVar44 = *puVar60;
                      uVar59 = puVar60[1];
                      uVar54 = puVar53[1];
                      *puVar60 = *puVar53;
                      puVar60[1] = uVar54;
                      *puVar53 = uVar44;
                      puVar53[1] = uVar59;
                      iVar27 = iVar68 * 2;
                      iVar65 = iVar68 * 2 + 1;
                      iVar41 = iVar68;
                    } while ((longlong)iVar65 < (longlong)uVar48);
                    uVar44 = uVar48 - 1;
                    local_78 = (longlong *)*puVar43;
                    uStack_70 = puVar43[1];
                    plVar31 = local_78;
                    uVar54 = uStack_70;
                    uVar59 = (puVar43 + uVar44 * 2)[1];
                    *puVar43 = puVar43[uVar44 * 2];
                    puVar43[1] = uVar59;
                    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                    uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
                    puVar60 = puVar43 + uVar44 * 2;
                    *(undefined4 *)puVar60 = (undefined4)local_78;
                    *(undefined4 *)((longlong)puVar60 + 4) = local_78._4_4_;
                    *(int *)(puVar60 + 1) = (int)uStack_70;
                    *(undefined4 *)((longlong)puVar60 + 0xc) = uStack_70._4_4_;
                    bVar73 = 2 < uVar48;
                    uVar48 = uVar44;
                    local_78 = plVar31;
                    uStack_70 = uVar54;
                  } while (bVar73);
                }
              }
            }
LAB_142ac644b:
            pLVar39 = pLVar39 + -3;
          } while (&local_378 <= pLVar39);
          uVar48 = (ulonglong)(int)uStack_4e0;
          if (1 < (longlong)uVar48) {
            lVar50 = uVar48 * 0x10 + -0x10;
            plVar31 = local_4e8;
            plVar70 = local_4e8;
            do {
              plVar58 = plVar31;
              if ((*plVar31 != plVar70[2]) && (plVar58 = plVar31 + 2, plVar70 != plVar31)) {
                puVar56 = (undefined8 *)*plVar58;
                *plVar58 = plVar70[2];
                plVar70[2] = 0;
                if (puVar56 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar56 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar56)(puVar56,1);
                  }
                }
                *(undefined1 *)((longlong)plVar31 + 0x1a) =
                     *(undefined1 *)((longlong)plVar70 + 0x1a);
                *(short *)(plVar31 + 3) = (short)plVar70[3];
              }
              plVar70 = plVar70 + 2;
              lVar50 = lVar50 + -0x10;
              plVar31 = plVar58;
            } while (lVar50 != 0);
            uVar48 = (ulonglong)((longlong)plVar58 + (0x10 - (longlong)plVar32)) >> 4 & 0xffffffff;
          }
        }
        FUN_146fe6abe(&local_4e8,uVar48 & 0xffffffff);
        if ((longlong)(int)uStack_4e0 != 0) {
          lVar50 = (longlong)(int)uStack_4e0 << 4;
          plVar32 = local_4e8;
          do {
            FUN_142ac7068(local_568,plVar32);
            plVar32 = plVar32 + 2;
            lVar50 = lVar50 + -0x10;
          } while (lVar50 != 0);
        }
      }
      uVar44 = uStack_4e0;
      FUN_146fff65c(local_4e8);
      uVar48 = uStack_4e0 >> 0x20;
      uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
      if (((longlong)uVar44 < 0) && ((int)uVar48 != 0)) {
        FUN_146fff692(&local_4e8);
      }
    }
    if ((local_670 & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    }
    DVar29 = local_4d0[0];
    uVar48 = uStack_4e0;
    if (bVar51 != 0) goto LAB_142ac6788;
    LOCK();
    *(undefined1 *)(param_1 + 0xda) = 0;
    UNLOCK();
    local_670 = (ulonglong)(0 < (int)local_4d0[0]);
    if ((local_4d0[0] == 0 & local_6d1) == 1) {
      FUN_146fff65c(local_4e8,uStack_4e0 & 0xffffffff);
      uVar44 = uStack_4e0 >> 0x20;
      uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
      if (((longlong)uVar48 < 0) && ((int)uVar44 != 0)) {
        FUN_146fff692(&local_4e8);
      }
      FUN_146fe6b38(param_1);
      if ((longlong)(int)uStack_4e0 != 0) {
        lVar50 = (longlong)(int)uStack_4e0 << 4;
        plVar32 = local_4e8;
        do {
          FUN_142ac7068(local_568,plVar32);
          plVar32 = plVar32 + 2;
          lVar50 = lVar50 + -0x10;
        } while (lVar50 != 0);
      }
      uVar44 = uStack_4e0;
      FUN_146fff65c(local_4e8);
      uVar48 = uStack_4e0 >> 0x20;
      uStack_4e0 = uStack_4e0 & 0xffffffff00000000;
      if (((longlong)uVar44 < 0) && ((int)uVar48 != 0)) {
        FUN_146fff692(&local_4e8);
      }
    }
    if (local_4d0[0] == 0) {
      if (local_6d1 != 0) {
        FUN_142ac73d6(param_1,1,&local_4f8);
      }
LAB_142ac6788:
      LeaveCriticalSection(local_660);
      puVar46 = local_4f8;
      if (0.0 <= (double)local_4f8) {
        QueryPerformanceCounter(&local_378);
        *(double *)(param_1 + 0x120) =
             (((double)CONCAT44(local_378.s.HighPart,local_378.s.LowPart) * DAT_14c83f420 +
              16777216.0) - (double)puVar46) + *(double *)(param_1 + 0x120);
      }
      if ((char)local_480 == '\x01') {
        FUN_1400020a8(local_498);
      }
      FUN_146fff65c(local_4e8,uStack_4e0 & 0xffffffff);
      if (local_4e8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    local_378.s.LowPart = 0;
    local_378.s.HighPart = -0x40100000;
    FUN_142ac73d6(param_1,0,&local_378);
    LeaveCriticalSection(local_660);
    if (0 < (int)local_4d0[0]) {
      lVar50 = 0;
      do {
        lVar33 = *(longlong *)(local_6c0 + 0x160);
        lVar55 = lVar50 * 0x80;
        lVar34 = *(longlong *)(lVar33 + 0x10 + lVar55);
        local_378.s.LowPart = (DWORD)lVar34;
        local_378.s.HighPart = (LONG)((ulonglong)lVar34 >> 0x20);
        iVar27 = (int)((ulonglong)(*(longlong *)(lVar33 + 0x18 + lVar55) - lVar34) >> 1);
        uStack_370._0_4_ = iVar27;
        lVar35 = FUN_146fed838(local_690);
        if (lVar35 != 0) {
          local_568._8_4_ = iVar27;
          local_568._0_8_ = lVar34;
          plVar32 = (longlong *)FUN_146feda00(lVar35);
          if ((plVar32 != (longlong *)0x0) && (*(char *)((longlong)plVar32 + 0x34) == '\x01')) {
            lVar34 = lVar33 + lVar55;
            local_668 = lVar33 + lVar55 + 0x10;
            *(undefined1 *)(lVar34 + 0x78) = 1;
            local_6d0 = plVar32;
            if ((longlong)(int)plVar32[1] != 0) {
              lVar33 = *plVar32;
              local_650 = lVar34 + 0x30;
              local_658 = (longlong *)(lVar34 + 0x50);
              lVar35 = (longlong)(int)plVar32[1] << 4;
              lVar55 = 0;
              local_648 = lVar35;
              do {
                local_578 = *(undefined8 *)(lVar33 + lVar55);
                iVar27 = *(int *)(lVar33 + 8 + lVar55);
                local_570 = iVar27 + -1;
                if (iVar27 == 0) {
                  local_570 = 0;
                }
                cVar26 = FUN_1449073fc(&local_578);
                if (cVar26 == '\0') {
                  lVar35 = *(longlong *)(lVar34 + 0x18);
                  local_6b8 = *(longlong *)(lVar34 + 0x38) - *(longlong *)(lVar34 + 0x30);
                  lVar3 = *(longlong *)(lVar34 + 0x10);
                  local_588 = *(undefined8 *)(lVar33 + lVar55);
                  iVar27 = *(int *)(lVar33 + 8 + lVar55);
                  local_580 = iVar27 + -1;
                  if (iVar27 == 0) {
                    local_580 = 0;
                  }
                  FUN_1404d3f7a(local_650,&local_588);
                  local_598 = *(undefined8 *)(lVar33 + lVar55);
                  iVar27 = *(int *)(lVar33 + 8 + lVar55);
                  local_590 = iVar27 + -1;
                  if (iVar27 == 0) {
                    local_590 = 0;
                  }
                  FUN_1404d3f7a(local_668,&local_598);
                  iVar27 = *(int *)(lVar34 + 0x58);
                  iVar41 = *(int *)(lVar34 + 0x70);
                  if (iVar27 <= iVar41) {
                    *(uint *)(lVar34 + 0x58) = iVar27 + 1U;
                    if (*(uint *)(lVar34 + 0x5c) < iVar27 + 1U) {
                      FUN_146fff8fc(local_658,iVar27);
                    }
                    lVar4 = *(longlong *)(lVar34 + 0x50);
                    lVar72 = (longlong)iVar27 * 0x40;
                    puVar56 = (undefined8 *)(lVar4 + 0x30 + lVar72);
                    *puVar56 = 0;
                    puVar56[1] = 0;
                    puVar56 = (undefined8 *)(lVar4 + 0x20 + lVar72);
                    *puVar56 = 0;
                    puVar56[1] = 0;
                    puVar56 = (undefined8 *)(lVar4 + 0x10 + lVar72);
                    *puVar56 = 0;
                    puVar56[1] = 0;
                    *(undefined8 *)(lVar4 + lVar72) = 0;
                    ((undefined8 *)(lVar4 + lVar72))[1] = 0;
                    iVar41 = *(int *)(lVar34 + 0x70);
                  }
                  local_6b8 = local_6b8 >> 1;
                  local_6b0 = (ulonglong)(lVar35 - lVar3) >> 1;
                  *(int *)(lVar34 + 0x70) = iVar41 + 1;
                  local_6a0 = *(longlong **)(lVar34 + 0x50);
                  lVar35 = (longlong)iVar41;
                  local_698 = *(longlong **)(lVar33 + lVar55);
                  iVar27 = *(int *)(lVar33 + 8 + lVar55);
                  iVar41 = iVar27 + -1;
                  if (iVar27 == 0) {
                    iVar41 = 0;
                  }
                  local_688 = *(longlong *)(lVar34 + 0x30);
                  uVar48 = *(longlong *)(lVar34 + 0x38) - local_688;
                  lVar3 = *(longlong *)(lVar34 + 0x10);
                  local_378.s.LowPart = (DWORD)lVar3;
                  local_378.s.HighPart = (LONG)((ulonglong)lVar3 >> 0x20);
                  uStack_370._0_4_ = (int)((ulonglong)(*(longlong *)(lVar34 + 0x18) - lVar3) >> 1);
                  FUN_146fe3d88(local_6a0 + lVar35 * 8,&local_378);
                  plVar32 = local_6a0;
                  local_568._8_4_ = (int)(uVar48 >> 1);
                  local_568._0_8_ = local_688;
                  FUN_146fe3d88(local_6a0 + lVar35 * 8 + 2,local_568);
                  local_78 = local_698;
                  uStack_70 = CONCAT44(uStack_70._4_4_,iVar41);
                  FUN_146fe3d88(plVar32 + lVar35 * 8 + 4,&local_78);
                  *(undefined2 *)(plVar32 + lVar35 * 8 + 7) = 1;
                  *(longlong *)(lVar34 + 0x38) =
                       *(longlong *)(lVar34 + 0x38) +
                       (longlong)
                       ((int)((ulonglong)
                              (*(longlong *)(lVar34 + 0x38) - *(longlong *)(lVar34 + 0x30)) >> 1) -
                       (int)local_6b8) * -2;
                  *(longlong *)(lVar34 + 0x18) =
                       *(longlong *)(lVar34 + 0x18) +
                       (longlong)
                       ((int)((ulonglong)
                              (*(longlong *)(lVar34 + 0x18) - *(longlong *)(lVar34 + 0x10)) >> 1) -
                       (int)local_6b0) * -2;
                  lVar35 = local_648;
                }
                lVar55 = lVar55 + 0x10;
              } while (lVar35 != lVar55);
            }
            local_6a4 = local_6a4 + 1;
            lVar33 = local_6d0[3];
            if ((longlong)(int)lVar33 != 0) {
              lVar35 = local_6d0[2];
              uVar48 = lVar34 + 0x30;
              plVar32 = (longlong *)(lVar34 + 0x60);
              pLVar39 = (LARGE_INTEGER *)(lVar35 + 0x10);
              do {
                local_5a8 = pLVar39[-2].s;
                local_378.s.LowPart = local_5a8.LowPart;
                local_378.s.HighPart = local_5a8.HighPart;
                local_5a0 = pLVar39[-1].s.LowPart - 1;
                if (pLVar39[-1].s.LowPart == 0) {
                  local_5a0 = 0;
                }
                local_59c = uStack_370._4_4_;
                uStack_370._0_4_ = local_5a0;
                uVar28 = FUN_146fe6bcc(&local_5a8);
                cVar26 = (char)uVar28;
                if (cVar26 != '\0') {
                  FUN_140feddc0(local_568,&local_378);
                  local_5b8 = local_568._0_8_;
                  uStack_5b0 = local_568._8_8_;
                  cVar24 = FUN_146fe6d28(uVar28);
                  if (cVar24 == '\0') {
                    lVar55 = *(longlong *)(lVar34 + 0x18);
                    lVar3 = *(longlong *)(lVar34 + 0x38);
                    lVar4 = *(longlong *)(lVar34 + 0x30);
                    lVar72 = *(longlong *)(lVar34 + 0x10);
                    iVar27 = *(int *)(lVar34 + 0x68);
                    uVar44 = (ulonglong)iVar27;
                    local_6d0 = plVar32;
                    local_6b8 = uVar48;
                    if (iVar27 <= *(int *)(lVar34 + 0x74)) {
                      *(uint *)(lVar34 + 0x68) = iVar27 + 1U;
                      if (*(uint *)(lVar34 + 0x6c) < iVar27 + 1U) {
                        local_6b0 = uVar44;
                        FUN_146fff8fc(plVar32,uVar44);
                        uVar44 = local_6b0;
                      }
                      lVar5 = *local_6d0;
                      lVar45 = uVar44 * 0x40;
                      puVar56 = (undefined8 *)(lVar5 + 0x30 + lVar45);
                      *puVar56 = 0;
                      puVar56[1] = 0;
                      puVar56 = (undefined8 *)(lVar5 + 0x20 + lVar45);
                      *puVar56 = 0;
                      puVar56[1] = 0;
                      puVar56 = (undefined8 *)(lVar5 + 0x10 + lVar45);
                      *puVar56 = 0;
                      puVar56[1] = 0;
                      *(undefined8 *)(lVar5 + lVar45) = 0;
                      ((undefined8 *)(lVar5 + lVar45))[1] = 0;
                    }
                    local_5c8 = local_568._0_8_;
                    uStack_5c0 = local_568._8_8_;
                    FUN_1404d3f7a(local_6b8,&local_5c8);
                    local_5d8 = CONCAT44(local_378.s.HighPart,local_378.s.LowPart);
                    uStack_5d0 = CONCAT44(uStack_370._4_4_,(int)uStack_370);
                    FUN_1404d3f7a(local_668,&local_5d8);
                    if (cVar26 == '\x02') {
                      local_78 = *(longlong **)(lVar34 + 0x10);
                      uStack_70 = CONCAT44(uStack_70._4_4_,
                                           (int)((ulonglong)
                                                 (*(longlong *)(lVar34 + 0x18) - (longlong)local_78)
                                                >> 1));
                      uVar25 = FUN_146fe3cd7(&local_78);
                    }
                    else {
                      uVar25 = 0;
                    }
                    iVar27 = *(int *)(lVar34 + 0x74);
                    *(int *)(lVar34 + 0x74) = iVar27 + 1;
                    local_5e8 = CONCAT44(local_378.s.HighPart,local_378.s.LowPart);
                    uStack_5e0 = CONCAT44(uStack_370._4_4_,(int)uStack_370);
                    local_5f8 = *(longlong *)(lVar34 + 0x30);
                    local_5f0 = (undefined4)
                                ((ulonglong)(*(longlong *)(lVar34 + 0x38) - local_5f8) >> 1);
                    local_608 = *(longlong *)(lVar34 + 0x10);
                    local_600 = (undefined4)
                                ((ulonglong)(*(longlong *)(lVar34 + 0x18) - local_608) >> 1);
                    local_6e8 = (longlong *)CONCAT71(local_6e8._1_7_,uVar25);
                    local_6f0 = (longlong **)CONCAT71(local_6f0._1_7_,cVar26);
                    local_6f8 = pLVar39;
                    FUN_146fe3f8a((longlong)iVar27 * 0x40 + *(longlong *)(lVar34 + 0x60),&local_608,
                                  &local_5f8);
                    *(longlong *)(lVar34 + 0x38) =
                         *(longlong *)(lVar34 + 0x38) +
                         (longlong)
                         ((int)((ulonglong)
                                (*(longlong *)(lVar34 + 0x38) - *(longlong *)(lVar34 + 0x30)) >> 1)
                         - (int)((ulonglong)(lVar3 - lVar4) >> 1)) * -2;
                    *(longlong *)(lVar34 + 0x18) =
                         *(longlong *)(lVar34 + 0x18) +
                         (longlong)
                         ((int)((ulonglong)
                                (*(longlong *)(lVar34 + 0x18) - *(longlong *)(lVar34 + 0x10)) >> 1)
                         - (int)((ulonglong)(lVar55 - lVar72) >> 1)) * -2;
                    uVar48 = local_6b8;
                    plVar32 = local_6d0;
                  }
                }
                pLVar36 = pLVar39 + 1;
                pLVar39 = pLVar39 + 3;
              } while (pLVar36 != (LARGE_INTEGER *)(lVar35 + (longlong)(int)lVar33 * 0x18));
            }
          }
        }
        lVar50 = lVar50 + 1;
      } while (lVar50 < (int)local_4d0[0]);
    }
    param_1 = local_6c0;
    if (local_6a4 < 1 || 0 < (int)DVar29) {
      DVar29 = (**(code **)(*DAT_14c82b500 + 0x20))();
      if ((int)DVar29 < 2) {
        DVar29 = 1;
      }
      DVar47 = DAT_14c75f4c0;
      if ((int)DVar29 < (int)DAT_14c75f4c0) {
        DVar47 = DVar29;
      }
      if ((int)DAT_14c75f4c0 < 1) {
        DVar47 = DVar29;
      }
      if ((int)local_4d0[0] <= (int)DVar47) {
        DVar47 = local_4d0[0];
      }
      if (*(int *)(param_1 + 0x178) < (int)DVar47) {
        FUN_146fe6e48(local_638);
      }
      _Dst = (void *)*local_638;
      if (DVar47 != 0) {
        memset(_Dst,0,(longlong)(int)DVar47);
      }
      DVar29 = local_4d0[0];
      iVar27 = DAT_14c75f4c4;
      local_568._0_8_ = param_1;
      local_618 = _Dst;
      local_610 = DVar47;
      if (local_4d0[0] != 0) {
        cVar26 = FUN_1447e0190();
        if ((int)DVar29 < 2 || cVar26 != '\x01') {
          iVar27 = 0;
        }
        else {
          iVar27 = (int)(iVar27 / 2 + DVar29) / iVar27;
          if (DAT_14c8335d8 < iVar27) {
            iVar27 = DAT_14c8335d8;
          }
        }
        iVar41 = *local_628;
        puVar6 = (undefined *)*local_630;
        if ((int)DAT_14c8c27ac < 1) {
          memset(&local_378,0,0x82);
          local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
          auVar21._12_4_ = 0;
          auVar21._0_12_ = stack0xfffffffffffffb4c;
          _local_4b8 = auVar21 << 0x20;
          local_508 = (longlong *)((ulonglong)local_508 & 0xffffffff00000000);
          FUN_140e55932(&local_378,&local_78,local_4b8,&local_508);
          DVar47 = (DWORD)local_508;
          local_6f0 = (longlong **)local_49a;
          local_6f8 = &local_4c8;
          FUN_1457b80ec(local_4b8._0_4_,(ulonglong)local_508 & 0xffffffff,local_49a + 1);
          DAT_14c8c27ac = DVar47;
          if ((0 < (int)local_4c8.s.LowPart) &&
             (DAT_14c8c27ac = DVar47, (int)local_4c8.s.LowPart <= (int)DVar47)) {
            DAT_14c8c27ac = local_4c8.s.LowPart;
          }
        }
        param_1 = local_6c0;
        DVar47 = iVar27 + (uint)(iVar41 == 0 || puVar6 != &DAT_14c82ba00);
        if ((int)DAT_14c8c27ac <= (int)DVar47) {
          DVar47 = DAT_14c8c27ac;
        }
        if ((int)DVar47 < 2) {
          DVar47 = 1;
        }
        DVar69 = local_610;
        if ((int)DVar47 < (int)local_610) {
          DVar69 = DVar47;
        }
        if (local_610 == 0) {
          DVar69 = DVar47;
        }
        if (1 < (int)DVar69) {
          iVar27 = DVar69 * 6;
          iVar41 = DVar29 + iVar27 + -1;
          uVar48 = 1;
          iVar65 = -6;
          DVar47 = DVar29;
          do {
            if (iVar27 <= (int)DVar29) {
              uVar48 = (longlong)iVar41 / (longlong)iVar27 & 0xffffffff;
              iVar68 = (int)((longlong)iVar41 / (longlong)iVar27);
              DVar47 = (int)(iVar68 + (DVar29 - 1)) / iVar68;
              if ((int)DVar69 <= (int)DVar47) break;
            }
            iVar68 = (int)uVar48;
            iVar41 = iVar41 - DVar69;
            iVar27 = iVar27 - DVar69;
            iVar65 = iVar65 + 1;
          } while (iVar65 != 0);
          iVar27 = DVar69 - 1;
          FUN_144a85b52(&local_78,1);
          puVar38 = (uint *)*local_680;
          if (puVar38 != (uint *)0x0) goto LAB_142ac5dd0;
          do {
            uVar62 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar62 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar62 | 1;
              __tlregdtor(&LAB_142ad84f8);
            }
            puVar37 = (undefined4 *)*local_640;
            *local_640 = 0;
            if (puVar37 == (undefined4 *)0x0) {
              puVar37 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar37 = 0xffffffff;
            *(undefined4 **)(puVar37 + 0x10) = puVar37 + 0x16;
            puVar37[0x12] = 0;
            *local_680 = puVar37;
            FUN_140217a48();
            puVar38 = (uint *)*local_680;
LAB_142ac5dd0:
            uVar48 = *(longlong *)(puVar38 + 0x10) + 0x3f;
            uVar62 = puVar38[0x12];
            while( true ) {
              puVar56 = (undefined8 *)(uVar48 & 0xffffffffffffffc0);
              if (puVar56 + 0x10 <= puVar38 + 0x4000) {
                *(undefined8 **)(puVar38 + 0x10) = puVar56 + 0x10;
                puVar38[0x12] = uVar62 + 1;
                *puVar56 = &PTR_FUN_149e002e8;
                *(undefined4 *)(puVar56 + 1) = 0;
                *puVar56 = &PTR_FUN_149fc9ad0;
                puVar56[3] = L"ParallelFor Task";
                *(undefined4 *)(puVar56 + 4) = 0;
                *(undefined4 *)(puVar56 + 5) = 0;
                *(DWORD *)((longlong)puVar56 + 0x2c) = DVar29;
                *(int *)(puVar56 + 6) = iVar68;
                *(DWORD *)((longlong)puVar56 + 0x34) = DVar47;
                puVar56[7] = &local_618;
                puVar56[8] = local_568;
                puVar56[9] = &local_78;
                *(undefined1 *)(puVar56 + 10) = 3;
                puVar56[0xb] = 0;
                puVar56[0xc] = 0;
                *(DWORD *)((longlong)puVar56 + 0x24) = DVar47;
                *(int *)(puVar56 + 0xc) = iVar27;
                FUN_142ada7a4(puVar56 + 0xb);
                FUN_142ada76e(puVar56[0xb],iVar27);
                local_4b8 = (undefined1  [8])puVar56;
                if (puVar56 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar56 + 1) = *(int *)(puVar56 + 1) + 1;
                  UNLOCK();
                }
                FUN_142ad9a74(local_4b8);
                local_378.s.LowPart = (DWORD)puVar56;
                local_378.s.HighPart = (LONG)((ulonglong)puVar56 >> 0x20);
                uStack_370._4_4_ = uStack_370._4_4_ & 0xffffff00;
                uStack_370._0_4_ = iVar27;
                cVar26 = FUN_142ad9af2(&local_378);
                if (cVar26 == '\0') {
                  (**(code **)(*local_78 + 0x20))(local_78,0xffffffff,0);
                }
                FUN_142ad9e9e(&local_378);
                FUN_144a75412(&local_78);
                goto LAB_142ac5f50;
              }
              *(uint **)(puVar38 + 0x10) = puVar38 + 0x4000;
              LOCK();
              uVar64 = *puVar38;
              *puVar38 = *puVar38 + uVar62 + 1;
              UNLOCK();
              if ((uVar64 ^ uVar62) != 0xffffffff) break;
              puVar38 = (uint *)*local_680;
              *puVar38 = 0xffffffff;
              *(uint **)(puVar38 + 0x10) = puVar38 + 0x16;
              puVar38[0x12] = 0;
              *local_680 = puVar38;
              uVar48 = (longlong)puVar38 + 0x97;
              uVar62 = 0;
            }
          } while( true );
        }
        if (0 < (int)DVar29) {
          DVar47 = 0;
          do {
            FUN_142ad9860(local_568,&local_618,0);
            DVar47 = DVar47 + 1;
          } while (DVar29 != DVar47);
        }
      }
LAB_142ac5f50:
      if (*(char *)(param_1 + 0x1b1) != '\0') {
        FUN_146fe6eb2(local_690);
      }
    }
  } while( true );
LAB_142ac6191:
  local_78 = (longlong *)*puVar43;
  uStack_70 = puVar43[1];
  plVar31 = local_78;
  uVar44 = uStack_70;
  uVar48 = puVar61[-1];
  *puVar43 = *puVar66;
  puVar43[1] = uVar48;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
  *(undefined4 *)puVar66 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar61 + -0xc) = local_78._4_4_;
  *(int *)(puVar61 + -1) = (int)uStack_70;
  *(undefined4 *)((longlong)puVar61 + -4) = uStack_70._4_4_;
  DVar29 = DVar29 - 1;
  puVar61 = puVar61 + -4;
  local_78 = plVar31;
  uStack_70 = uVar44;
  if ((longlong)puVar49 - (longlong)puVar53 < (longlong)puVar67 - (longlong)puVar57) {
    if (puVar42 < puVar60) {
      pLVar39->QuadPart = (LONGLONG)puVar42;
      pLVar39[1].QuadPart = (LONGLONG)puVar60;
      pLVar39[2].s.LowPart = DVar29;
      pLVar39 = pLVar39 + 3;
    }
    puVar57 = puVar43;
    if (puVar66 <= puVar43 + 2) goto LAB_142ac644b;
  }
  else {
    if (puVar43 + 2 < puVar66) {
      pLVar39->QuadPart = (LONGLONG)puVar43;
      pLVar39[1].QuadPart = (LONGLONG)puVar61;
      pLVar39[2].s.LowPart = DVar29;
      pLVar39 = pLVar39 + 3;
    }
    puVar43 = puVar42;
    puVar49 = puVar60;
    puVar61 = puVar60;
    if (puVar60 <= puVar42) goto LAB_142ac644b;
  }
  iVar27 = (int)((ulonglong)((longlong)puVar49 - (longlong)puVar57) >> 4);
  uVar48 = (ulonglong)(iVar27 + 1);
  puVar53 = puVar57;
  puVar60 = puVar61;
  puVar67 = puVar49;
  if (DVar29 == 0) goto LAB_142ac6239;
  goto LAB_142ac60e5;
}



// FUNCTION 142ac6e74 FUN_142ac6e74 body=498 status=ok
// SIG undefined FUN_142ac6e74(void)

void FUN_142ac6e74(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [40];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong *local_120;
  undefined2 *local_118;
  int local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_e8;
  int local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)((longlong)param_1 + 0x31) != '\0') {
    if ((longlong)(int)param_1[1] != 0) {
      lVar6 = (longlong)(int)param_1[1] * 0xb8;
      lVar7 = *param_1 + 0x80;
      do {
        FUN_146fed5ae(lVar7 + -0x70,lVar7);
        lVar7 = lVar7 + 0xb8;
        lVar6 = lVar6 + -0xb8;
      } while (lVar6 != 0);
    }
    local_e8 = DAT_14c99d690;
    local_e0 = DAT_14c99d698 + -1;
    if (DAT_14c99d698 == 0) {
      local_e0 = 0;
    }
    local_d8 = L"CachedAssetRegistryDiscovery.bin";
    local_d0 = 0x20;
    FUN_140bee87a(&local_118,&local_e8,2);
    FUN_146825b50(&local_e8,0,0,0);
    local_108 = DAT_14c99d6b8;
    uStack_104 = DAT_14c99d6bc;
    uStack_100 = DAT_14c99d6c0;
    uStack_fc = DAT_14c99d6c4;
    FUN_1402ac1b3(&local_e8);
    FUN_147004402(&local_e8,param_1);
    local_130 = local_50;
    uStack_12c = uStack_4c;
    uStack_128 = uStack_48;
    uStack_124 = uStack_44;
    FUN_1467fe794(&local_120);
    FUN_1467a88fe(&local_108,&local_120);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_120 + 3;
      lVar6 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (((uint)lVar6 & 0x3fffffff) == 1) {
        (**(code **)(*local_120 + 0x10))(local_120);
        local_120[1] = 0;
        local_120[2] = 0;
        LOCK();
        puVar1 = (ulonglong *)(local_120 + 3);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 0x40000000;
        UNLOCK();
        if ((uVar2 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*local_120)(local_120,1);
        }
      }
    }
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar5 = local_118;
    if (local_110 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar5,0);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1467a8f38(&local_108,puVar4);
      (**(code **)*puVar4)(puVar4,1);
    }
    FUN_1458cf622(&local_108);
    FUN_146825c36(&local_e8);
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ac7068 FUN_142ac7068 body=877 status=ok
// SIG undefined FUN_142ac7068(void)

void FUN_142ac7068(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  void *pvVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar15 = *param_1;
  piVar8 = (int *)param_1[1];
  plVar1 = (longlong *)(lVar15 + 0x160);
  iVar9 = *(int *)(lVar15 + 0x168);
  iVar10 = *piVar8;
  if (iVar9 <= iVar10) {
    *(uint *)(lVar15 + 0x168) = iVar9 + 1U;
    if (*(uint *)(lVar15 + 0x16c) < iVar9 + 1U) {
      FUN_146ffa8b4(plVar1,iVar9);
    }
    lVar15 = *plVar1;
    lVar14 = (longlong)iVar9 * 0x80;
    puVar11 = (undefined8 *)(lVar15 + 0x10 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11 = (undefined8 *)(lVar15 + 0x20 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11 = (undefined8 *)(lVar15 + 0x30 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11 = (undefined8 *)(lVar15 + 0x40 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11 = (undefined8 *)(lVar15 + 0x70 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11 = (undefined8 *)(lVar15 + 0x60 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    ((undefined8 *)(lVar15 + lVar14))[1] = 0;
    puVar11 = (undefined8 *)(lVar15 + 0x50 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    *(undefined2 **)(lVar15 + 0x10 + lVar14) = &DAT_14c8731a0;
    *(undefined2 **)(lVar15 + 0x18 + lVar14) = &DAT_14c8731a0;
    *(undefined2 **)(lVar15 + 0x20 + lVar14) = &DAT_14c8731a2;
    *(undefined2 **)(lVar15 + 0x30 + lVar14) = &DAT_14c8731a0;
    *(undefined2 **)(lVar15 + 0x38 + lVar14) = &DAT_14c8731a0;
    *(undefined2 **)(lVar15 + 0x40 + lVar14) = &DAT_14c8731a2;
    puVar11 = (undefined8 *)(lVar15 + 0x69 + lVar14);
    *puVar11 = 0;
    puVar11[1] = 0;
    piVar8 = (int *)param_1[1];
    iVar10 = *piVar8;
  }
  lVar14 = *param_2;
  *piVar8 = iVar10 + 1;
  lVar3 = *plVar1;
  lVar12 = (longlong)iVar10 * 0x80;
  lVar15 = lVar3 + lVar12;
  puVar11 = (undefined8 *)(lVar15 + 0x10);
  *(undefined8 *)(lVar15 + 0x18) = *puVar11;
  *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(lVar15 + 0x30);
  *(undefined8 *)(lVar15 + 0x70) = 0;
  *(undefined1 *)(lVar15 + 0x78) = 0;
  ((undefined8 *)param_1[2])[1] = *(undefined8 *)param_1[2];
  *(undefined1 *)(lVar14 + 0x54) = 1;
  lVar4 = *(longlong *)(lVar14 + 0x30);
  local_98 = param_1;
  local_90 = param_2;
  FUN_146fe4318(lVar14,param_1[2]);
  pvVar5 = *(void **)(lVar4 + 0x60);
  uVar2 = *(uint *)(lVar4 + 0x68);
  iVar9 = uVar2 - 1;
  if (uVar2 == 0) {
    iVar9 = 0;
  }
  lVar14 = (longlong)iVar9;
  if (*(ulonglong *)(lVar15 + 0x20) <= (ulonglong)(*(longlong *)(lVar15 + 0x18) + lVar14 * 2)) {
    FUN_140213274(puVar11,lVar14);
  }
  plVar1 = (longlong *)(lVar3 + lVar12);
  if (1 < uVar2) {
    pvVar6 = (void *)plVar1[3];
    memcpy(pvVar6,pvVar5,lVar14 * 2);
    plVar1[3] = (longlong)(lVar14 * 2 + (longlong)pvVar6);
  }
  plVar13 = local_98;
  lVar15 = lVar3 + lVar12 + 0x30;
  local_58 = *(longlong *)local_98[2];
  local_50 = (undefined4)((ulonglong)(((longlong *)local_98[2])[1] - local_58) >> 1);
  FUN_1404d3f7a(puVar11);
  pvVar5 = *(void **)(lVar4 + 0x70);
  uVar2 = *(uint *)(lVar4 + 0x78);
  iVar9 = uVar2 - 1;
  if (uVar2 == 0) {
    iVar9 = 0;
  }
  lVar14 = (longlong)iVar9;
  if ((ulonglong)plVar1[8] <= (ulonglong)(plVar1[7] + lVar14 * 2)) {
    FUN_140213274(lVar15,lVar14);
  }
  if (1 < uVar2) {
    pvVar6 = (void *)plVar1[7];
    memcpy(pvVar6,pvVar5,lVar14 * 2);
    plVar1[7] = (longlong)(lVar14 * 2 + (longlong)pvVar6);
    plVar13 = local_98;
  }
  local_68 = *(longlong *)plVar13[2];
  local_60 = (undefined4)((ulonglong)(((longlong *)plVar13[2])[1] - local_68) >> 1);
  FUN_1404d3f7a(lVar15);
  lVar15 = plVar1[2];
  lVar14 = plVar1[3];
  local_70 = (undefined4)((ulonglong)(lVar14 - lVar15) >> 1);
  local_78 = lVar15;
  cVar7 = FUN_146819044();
  if (cVar7 != '\0') {
    lVar14 = lVar14 + -2;
    uVar16 = lVar14 - lVar15;
    do {
      plVar1[3] = lVar14;
      local_70 = (undefined4)(uVar16 >> 1);
      local_78 = lVar15;
      cVar7 = FUN_146819044(&local_78);
      uVar16 = uVar16 - 2;
      lVar14 = lVar14 + -2;
    } while (cVar7 != '\0');
  }
  lVar15 = plVar1[6];
  lVar14 = plVar1[7];
  local_80 = (undefined4)((ulonglong)(lVar14 - lVar15) >> 1);
  local_88 = lVar15;
  cVar7 = FUN_146819044();
  if (cVar7 != '\0') {
    lVar14 = lVar14 + -2;
    uVar16 = lVar14 - lVar15;
    do {
      plVar1[7] = lVar14;
      local_80 = (undefined4)(uVar16 >> 1);
      local_88 = lVar15;
      cVar7 = FUN_146819044(&local_88);
      uVar16 = uVar16 - 2;
      lVar14 = lVar14 + -2;
    } while (cVar7 != '\0');
  }
  plVar13 = local_90;
  if (plVar1 != local_90) {
    puVar11 = (undefined8 *)*plVar1;
    *plVar1 = *local_90;
    *local_90 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar8 = (int *)(puVar11 + 1);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
  }
  *(undefined1 *)((longlong)plVar1 + 10) = *(undefined1 *)((longlong)plVar13 + 10);
  *(short *)(plVar1 + 1) = (short)plVar13[1];
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac73d6 FUN_142ac73d6 body=304 status=ok
// SIG undefined FUN_142ac73d6(void)

void FUN_142ac73d6(longlong param_1,byte param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0xd9) & 1) != param_2) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    LOCK();
    *(byte *)(param_1 + 0xd9) = param_2;
    UNLOCK();
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      if ((*(byte *)(param_1 + 0xd9) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      else {
        if (0.0 <= *param_3) {
          QueryPerformanceCounter(&local_38);
          *(double *)(param_1 + 0x120) =
               (((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - *param_3) +
               *(double *)(param_1 + 0x120);
          *param_3 = -1.0;
        }
        *(float *)(param_1 + 0x130) =
             (float)*(double *)(param_1 + 0x120) + *(float *)(param_1 + 0x130);
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
    }
    if ((*(byte *)(param_1 + 0xd9) & 1) != 0) {
      FUN_146fe7402(param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac7508 FUN_142ac7508 body=416 status=ok
// SIG undefined FUN_142ac7508(void)

void FUN_142ac7508(longlong param_1,byte *param_2,undefined8 param_3,longlong param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_1457de550(param_3,param_1 + 0xf0);
  iVar1 = *(int *)(param_1 + 0xfc);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xfc) != 0)) {
    FUN_1408be2c4(param_1 + 0xf0,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x100);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x108) * 0x20 + lVar4;
    do {
      FUN_146fe7532(param_4,lVar4,lVar4 + 0x10);
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar3);
    uVar2 = *(undefined4 *)(param_1 + 0x108);
    lVar4 = *(longlong *)(param_1 + 0x100);
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  FUN_146fff411(lVar4,uVar2);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    FUN_146fffb1a(param_1 + 0x100,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x110);
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x118) * 0x30;
    do {
      *(int *)(param_4 + 0x60) = *(int *)(param_4 + 0x60) + 1;
      FUN_146febf1e(param_4 + 0x30,lVar4);
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
    uVar2 = *(undefined4 *)(param_1 + 0x118);
    lVar4 = *(longlong *)(param_1 + 0x110);
  }
  iVar1 = *(int *)(param_1 + 0x11c);
  FUN_146fff473(lVar4,uVar2);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x11c) != 0)) {
    FUN_146fffb7a(param_1 + 0x110,0);
  }
  *param_5 = *(undefined4 *)(param_1 + 0xe4);
  *param_2 = *(byte *)(param_1 + 0xd9) & 1;
                    /* WARNING: Could not recover jumptable at 0x000142ac7691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 142ac76a8 FUN_142ac76a8 body=1388 status=ok
// SIG undefined FUN_142ac76a8(void)

void FUN_142ac76a8(void **param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)((longlong)param_1 + 0x1c) != '\0') goto LAB_142ac7827;
  plVar5 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *param_1;
  }
  (**(code **)(*plVar5 + 0x68))(plVar5,&local_98,puVar9);
  if ((local_78 & 4) == 0) {
    local_a8 = (undefined2 *)0x0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (void *)0x0;
    uStack_c0 = 0;
    FUN_1457bae9a(param_1,&local_a8);
    plVar5 = (longlong *)FUN_14054d1d4();
    puVar9 = local_a8;
    if ((int)uStack_a0 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&local_68,puVar9);
    local_78 = local_48;
    local_88 = (undefined4)local_58;
    uStack_84 = local_58._4_4_;
    iStack_80 = iStack_50;
    uStack_7c = uStack_4c;
    local_98 = (undefined4)local_68;
    uStack_94 = local_68._4_4_;
    uStack_90 = (int)uStack_60;
    uStack_8c = uStack_60._4_4_;
    if (((local_48 & 4) == 0) || ((local_48 & 1) == 0)) {
      *(undefined4 *)(param_1 + 3) = 3;
    }
    else {
      plVar5 = (longlong *)FUN_14054d1d4();
      puVar9 = local_a8;
      if ((int)uStack_a0 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar5 + 0x118))(plVar5,&local_d8,puVar9);
      iVar7 = (int)uStack_c0;
      bVar12 = 1 < (int)uStack_c0;
      local_68 = local_d8;
      iVar4 = (int)uStack_d0 + -1;
      if ((int)uStack_d0 == 0) {
        iVar4 = 0;
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
      local_58 = local_b8;
      iStack_50 = (int)uStack_b0 + -1;
      if ((int)uStack_b0 == 0) {
        iStack_50 = 0;
      }
      FUN_140bee87a(&local_f8,&local_68,2);
      iVar4 = (int)local_f0;
      iVar3 = local_f0._4_4_;
      if (iVar7 < 2) {
        local_e8 = local_f8;
        local_f8 = (void *)0x0;
        uStack_e0 = local_f0;
        local_f0 = 0;
      }
      else {
        iVar7 = (uint)bVar12 + (uint)((int)local_f0 == 0);
        local_e8 = local_f8;
        local_f8 = (void *)0x0;
        uStack_e0 = local_f0;
        local_f0 = 0;
        iVar8 = iVar7 + iVar4;
        if (iVar8 < iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar8);
        }
        if (iVar3 < iVar8) {
          FUN_1446f8c06(&local_e8);
        }
        FUN_1400020e8(&local_e8,&DAT_149e0635c,bVar12);
        iVar4 = (int)uStack_e0;
      }
      _Src = local_c8;
      if (iVar4 < 2) {
        local_68 = (void *)0x0;
        lVar10 = (longlong)(int)uStack_c0;
        uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_c0);
        if (lVar10 == 0) {
          uStack_60 = uStack_c0 & 0xffffffff;
        }
        else {
          FUN_1446dd670(&local_68,uStack_c0 & 0xffffffff,0);
          memcpy(local_68,_Src,lVar10 * 2);
        }
      }
      else {
        iVar7 = (int)uStack_c0 + -1;
        if ((int)uStack_c0 == 0) {
          iVar7 = 0;
        }
        local_68 = local_e8;
        iVar3 = uStack_e0._4_4_;
        local_e8 = (void *)0x0;
        uStack_e0 = 0;
        uStack_60 = CONCAT44(iVar3,iVar4);
        if (iVar7 + iVar4 < iVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar7);
        }
        if (iVar3 < iVar7 + iVar4) {
          FUN_1446f8c06(&local_68);
        }
        FUN_1400020e8(&local_68,local_c8,iVar7);
      }
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_d8 = local_68;
      uStack_d0 = uStack_60;
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_f8 != (void *)0x0) {
        FUN_1400020a8();
      }
      iVar7 = *(int *)(param_1 + 1);
      if (iVar7 == (int)uStack_d0) {
        if (1 < iVar7) {
          lVar10 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)*param_1 + lVar10);
            uVar6 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_d8 + lVar10);
            uVar11 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142ac7ae4;
              }
              iVar7 = uVar6 - uVar11;
              goto LAB_142ac7b1b;
            }
            if (uVar1 == 0) break;
LAB_142ac7ae4:
            lVar10 = lVar10 + 2;
          }
          iVar7 = 0;
LAB_142ac7b1b:
          bVar12 = iVar7 == 0;
          goto LAB_142ac7b1d;
        }
        if (&local_d8 != param_1) goto LAB_142ac7b29;
      }
      else {
        bVar12 = iVar7 + (int)uStack_d0 == 1;
LAB_142ac7b1d:
        if ((&local_d8 != param_1) && (bVar12)) {
LAB_142ac7b29:
          if (*param_1 != (void *)0x0) {
            FUN_1400020a8();
          }
          *param_1 = local_d8;
          local_d8 = (void *)0x0;
          *(int *)(param_1 + 1) = (int)uStack_d0;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_d0._4_4_;
          uStack_d0 = 0;
        }
      }
      *(undefined4 *)(param_1 + 3) = 2;
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
    puVar9 = local_a8;
    if (local_b8 != 0) {
      FUN_1400020a8();
      puVar9 = local_a8;
    }
  }
  else {
    plVar5 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_1 + 1) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *param_1;
    }
    (**(code **)(*plVar5 + 0x118))(plVar5,&local_68,puVar9);
    iVar7 = *(int *)(param_1 + 1);
    if (iVar7 == (int)uStack_60) {
      if (1 < iVar7) {
        lVar10 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)*param_1 + lVar10);
          uVar6 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)local_68 + lVar10);
          uVar11 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142ac7773;
            }
            iVar7 = uVar6 - uVar11;
            goto LAB_142ac77aa;
          }
          if (uVar1 == 0) break;
LAB_142ac7773:
          lVar10 = lVar10 + 2;
        }
        iVar7 = 0;
LAB_142ac77aa:
        bVar12 = iVar7 == 0;
        goto LAB_142ac77ac;
      }
      if ((void **)&local_68 != param_1) goto LAB_142ac77b8;
    }
    else {
      bVar12 = iVar7 + (int)uStack_60 == 1;
LAB_142ac77ac:
      if (((void **)&local_68 != param_1) && (bVar12)) {
LAB_142ac77b8:
        if (*param_1 != (void *)0x0) {
          FUN_1400020a8();
        }
        *param_1 = local_68;
        local_68 = (undefined2 *)0x0;
        *(int *)(param_1 + 1) = (int)uStack_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
        uStack_60 = 0;
      }
    }
    param_1[2] = (void *)CONCAT44(uStack_84,local_88);
    *(uint *)(param_1 + 3) = ~(uint)local_78 & 1;
    puVar9 = local_68;
  }
  if (puVar9 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
LAB_142ac7827:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ac7c16 FUN_142ac7c16 body=3011 status=ok
// SIG undefined FUN_142ac7c16(void)

void FUN_142ac7c16(longlong param_1,longlong *param_2,ulonglong param_3,char param_4,byte param_5)

{
  void *_Dst;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_478 [32];
  undefined1 **local_458;
  char local_450;
  undefined1 local_448;
  char local_431;
  undefined8 *local_430;
  longlong *local_428;
  int *local_420;
  LPCRITICAL_SECTION local_418;
  int local_40c;
  longlong local_408;
  undefined1 *local_400;
  void *local_3f8;
  undefined1 *local_3f0;
  undefined1 *local_3e8;
  int local_3e0;
  undefined1 *local_3d8;
  int local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 *local_3b8;
  undefined4 local_3b0;
  undefined1 local_3a8 [24];
  undefined1 *local_390;
  undefined1 *local_388;
  int local_380;
  undefined1 *local_378;
  int local_370;
  undefined1 *local_368;
  int local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined2 local_31b;
  byte local_319;
  undefined1 *local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c0;
  int local_2b8;
  undefined1 *local_280;
  undefined1 *local_278;
  ulonglong *local_270;
  char local_268;
  undefined1 local_260 [512];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_478;
  if ((longlong)(int)param_2[1] != 0) {
    lVar16 = *param_2;
    lVar18 = (longlong)(int)param_2[1] << 5;
    do {
      FUN_142ac76a8(lVar16);
      lVar16 = lVar16 + 0x20;
      lVar18 = lVar18 + -0x20;
    } while (lVar18 != 0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  local_2d8 = 0;
  uStack_2d0 = 0;
  EnterCriticalSection(lpCriticalSection);
  uVar12 = 0;
  local_418 = lpCriticalSection;
  if ((longlong)(int)param_2[1] != 0) {
    lVar16 = *param_2;
    lVar18 = (longlong)(int)param_2[1] * 0x20 + lVar16;
    local_428 = (longlong *)(param_1 + 0x150);
    bVar14 = (byte)(param_3 & 0xffffffff);
    do {
      FUN_142ac76a8(lVar16);
      uVar13 = *(uint *)(lVar16 + 0x18);
      if (uVar13 != 3) {
        FUN_146fe7828(lVar16,&local_2e8);
        local_2f8 = local_2e8;
        uStack_2f4 = uStack_2e4;
        uStack_2f0 = uStack_2e0;
        uStack_2ec = uStack_2dc;
        lVar15 = FUN_146fe78c2(param_1,&local_2f8);
        puVar2 = local_2c0;
        if (lVar15 != 0) {
          if (uVar13 == 0) {
            local_2c0._0_2_ = (ushort)(byte)local_2c0;
            uVar3 = local_2c0;
            local_2c0._4_4_ = SUB84(puVar2,4);
            local_2c0._0_4_ = (uint)(uint3)uVar3;
            uVar3 = local_2c0;
            local_2c0._6_2_ = SUB82(puVar2,6);
            local_2c0._0_6_ = (uint6)(uint5)uVar3;
            local_2c0 = (undefined1 *)((ulonglong)local_2c0 & 0xffffffffffffff);
            if (bVar14 != 0) {
              local_2c0._0_2_ = CONCAT11(1,bVar14);
            }
            if (param_4 == '\0') {
              if (param_5 != 0) goto LAB_142ac7d7b;
              if (bVar14 != 0) goto LAB_142ac7d85;
            }
            else {
              local_2c0 = (undefined1 *)CONCAT26(0x100,(uint6)local_2c0);
              if (param_5 != 0) {
LAB_142ac7d7b:
                local_2c0._0_6_ = CONCAT24(0x101,(uint)local_2c0);
              }
LAB_142ac7d85:
              local_280 = (undefined1 *)0xbff0000000000000;
              FUN_142ac73d6(param_1,0,&local_280);
              local_308 = local_2e8;
              uStack_304 = uStack_2e4;
              uStack_300 = uStack_2e0;
              uStack_2fc = uStack_2dc;
              local_458 = (undefined1 **)0x0;
              FUN_146fe5b40(lVar15,&local_308,&local_2c0,1);
            }
          }
          local_318 = (undefined1 *)0x0;
          uStack_310 = 0;
          local_31b = 0;
          local_319 = 0;
          local_338 = local_2e8;
          uStack_334 = uStack_2e4;
          uStack_330 = uStack_2e0;
          uStack_32c = uStack_2dc;
          local_458 = &local_318;
          puVar8 = (undefined8 *)
                   FUN_146fe57da(lVar15,&local_338,(uVar13 & 0xfffffffd) == 0,&local_31b);
          uVar12 = uStack_2d0;
          if (puVar8 != (undefined8 *)0x0) {
            piVar17 = (int *)(puVar8 + 1);
            LOCK();
            *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
            UNLOCK();
            if (((byte)local_31b | bVar14) == 1) {
              bVar10 = local_31b._1_1_ ^ 1 | local_319;
              if (((bVar10 | param_5) & 1) != 0) {
                if ((uVar13 & 0xfffffffd) == 0) {
                  if (((int)uStack_310 < 2) && (*(char *)((longlong)puVar8 + 0x56) == '\0')) {
                    lVar15 = (longlong)(int)uStack_2d0;
                    uVar6 = (int)uStack_2d0 + 1;
                    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar6);
                    if (uStack_2d0._4_4_ < uVar6) {
                      local_430 = puVar8;
                      local_420 = piVar17;
                      FUN_142adaf78(&local_2d8,uVar12 & 0xffffffff);
                      puVar8 = local_430;
                      piVar17 = local_420;
                    }
                    lVar15 = lVar15 * 0x10;
                    *(undefined8 *)(local_2d8 + 8 + lVar15) = 0;
                    *(undefined8 **)(local_2d8 + lVar15) = puVar8;
                    LOCK();
                    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
                    UNLOCK();
                    *(bool *)(local_2d8 + 8 + lVar15) = uVar13 == 0;
                    if ((longlong)*(int *)(param_1 + 0x158) != 0) {
                      plVar9 = *(longlong **)(param_1 + 0x150);
                      lVar15 = (longlong)*(int *)(param_1 + 0x158) * 0x18;
                      do {
                        if ((undefined8 *)*plVar9 == puVar8) {
                          if (plVar9 != (longlong *)0x0) {
                            iVar11 = *(int *)((longlong)plVar9 + 0xc);
                            goto LAB_142ac802d;
                          }
                          break;
                        }
                        plVar9 = plVar9 + 3;
                        lVar15 = lVar15 + -0x18;
                      } while (lVar15 != 0);
                    }
                    LOCK();
                    *piVar17 = *piVar17 + 1;
                    UNLOCK();
                    iVar11 = *(int *)(param_1 + 0x158);
                    *(uint *)(param_1 + 0x158) = iVar11 + 1U;
                    if (*(uint *)(param_1 + 0x15c) < iVar11 + 1U) {
                      local_430 = puVar8;
                      FUN_146fffbec(local_428,iVar11);
                      puVar8 = local_430;
                    }
                    plVar9 = (longlong *)(*local_428 + (longlong)iVar11 * 0x18);
                    *plVar9 = (longlong)puVar8;
                    *(undefined2 *)(plVar9 + 1) = 0;
                    iVar11 = 0;
                    *(undefined1 *)((longlong)plVar9 + 10) = 0;
                    *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
                    *(undefined1 *)(plVar9 + 2) = 0;
LAB_142ac802d:
                    *(int *)((longlong)plVar9 + 0xc) = iVar11 + 1;
                    *(undefined2 *)(plVar9 + 1) = local_31b;
                    *(byte *)((longlong)plVar9 + 10) = local_319;
                  }
                }
                else if (((bVar10 & (byte)local_31b & *(byte *)((longlong)puVar8 + 0x53)) != 1) ||
                        (param_4 != '\0')) {
                  local_280 = local_318;
                  iVar11 = (int)uStack_310 + -1;
                  if ((int)uStack_310 == 0) {
                    iVar11 = 0;
                  }
                  local_278 = (undefined1 *)CONCAT44(local_278._4_4_,iVar11);
                  local_430 = puVar8;
                  local_420 = piVar17;
                  FUN_140115b7a(&local_348,&local_280);
                  local_358 = local_348;
                  uStack_354 = uStack_344;
                  uStack_350 = uStack_340;
                  uStack_34c = uStack_33c;
                  cVar4 = FUN_146fe6bcc(&local_358);
                  puVar8 = local_430;
                  piVar17 = local_420;
                  if (cVar4 != '\0') {
                    local_3f0 = local_318;
                    local_2c0 = local_318;
                    iVar11 = (int)uStack_310 + -1;
                    if ((int)uStack_310 == 0) {
                      iVar11 = 0;
                    }
                    local_431 = cVar4;
                    local_2b8 = iVar11;
                    FUN_140fede38(&local_280,&local_2c0,1);
                    puVar2 = local_3f0;
                    local_40c = iVar11 - (int)local_278;
                    if (iVar11 <= iVar11 - (int)local_278) {
                      local_40c = iVar11;
                    }
                    if (local_40c < 1) {
                      local_40c = 0;
                    }
                    local_368 = local_3f0;
                    local_360 = local_40c;
                    cVar4 = FUN_146fe6d28(local_431,&local_368);
                    puVar8 = local_430;
                    piVar17 = local_420;
                    if (cVar4 == '\0') {
                      local_268 = '\0';
                      local_280 = local_260;
                      local_270 = local_60;
                      local_3f8 = *(void **)(lVar15 + 0x70);
                      uVar13 = *(uint *)(lVar15 + 0x78);
                      iVar11 = uVar13 - 1;
                      if (uVar13 == 0) {
                        iVar11 = 0;
                      }
                      local_408 = (longlong)iVar11;
                      local_278 = local_280;
                      if (0xff < iVar11) {
                        FUN_140213274(&local_280,local_408);
                      }
                      lVar15 = local_408;
                      if (1 < uVar13) {
                        local_400 = local_278;
                        memcpy(local_278,local_3f8,local_408 * 2);
                        local_278 = local_400 + lVar15 * 2;
                      }
                      FUN_146fe438a(local_430,&local_2c0);
                      local_378 = local_2c0;
                      local_370 = local_2b8 + -1;
                      if (local_2b8 == 0) {
                        local_370 = 0;
                      }
                      FUN_1404d3f7a(&local_280,&local_378);
                      if (local_2c0 != (undefined1 *)0x0) {
                        FUN_1400020a8();
                      }
                      local_388 = puVar2;
                      local_380 = local_40c;
                      FUN_1404d3f7a(&local_280,&local_388);
                      if (local_431 == '\x02') {
                        uVar5 = FUN_146fe3cd7(&local_2e8);
                      }
                      else {
                        uVar5 = 0;
                      }
                      FUN_142ac76a8(lVar16);
                      local_390 = *(undefined1 **)(lVar16 + 0x10);
                      local_3b8 = local_280;
                      local_3b0 = (undefined4)
                                  ((ulonglong)((longlong)local_278 - (longlong)local_280) >> 1);
                      local_3c8 = local_2e8;
                      uStack_3c4 = uStack_2e4;
                      uStack_3c0 = uStack_2e0;
                      uStack_3bc = uStack_2dc;
                      local_450 = local_431;
                      local_458 = &local_390;
                      local_448 = uVar5;
                      FUN_146fe3dec(&local_2c0,&local_3c8,&local_3b8,local_3a8);
                      FUN_146fe79cc(param_1,&local_2c0);
                      FUN_146fe7aa6(&local_2c0);
                      local_3d8 = local_318;
                      local_3d0 = (int)uStack_310 + -1;
                      if ((int)uStack_310 == 0) {
                        local_3d0 = 0;
                      }
                      cVar4 = FUN_1468190a4(&local_3d8);
                      if ((cVar4 != '\0') && (*(char *)((longlong)local_430 + 0x53) == '\0')) {
                        local_2c0 = (undefined1 *)0xbff0000000000000;
                        FUN_142ac73d6(param_1,0,&local_2c0);
                        local_3e8 = local_318;
                        local_3e0 = (int)uStack_310 + -1;
                        if ((int)uStack_310 == 0) {
                          local_3e0 = 0;
                        }
                        FUN_146fe47ae(local_430,&local_3e8);
                      }
                      puVar8 = local_430;
                      piVar17 = local_420;
                      if (local_268 == '\x01') {
                        FUN_1400020a8(local_280);
                        puVar8 = local_430;
                        piVar17 = local_420;
                      }
                    }
                  }
                }
              }
            }
            LOCK();
            *piVar17 = *piVar17 + -1;
            UNLOCK();
            if (*piVar17 == 0) {
              (**(code **)*puVar8)(puVar8,1);
            }
          }
          if (local_318 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar16 = lVar16 + 0x20;
    } while (lVar16 != lVar18);
    if ((int)uStack_2d0 == 0) {
      uVar12 = 0;
      lpCriticalSection = local_418;
    }
    else {
      LOCK();
      *(undefined1 *)(param_1 + 0xda) = 1;
      UNLOCK();
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x18))();
      lpCriticalSection = local_418;
      cVar4 = *(char *)(param_1 + 0x34);
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0x34) = 1;
        DVar7 = GetCurrentThreadId();
        *(DWORD *)(param_1 + 0x30) = DVar7;
      }
      uVar12 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),cVar4) ^ 1;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((int)uStack_2d0 == 0) {
LAB_142ac8792:
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if ((local_60[0] ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_430 = (undefined8 *)(param_1 + 0x150);
LAB_142ac8479:
  if ((uVar12 & 1) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x20))(*(longlong **)(param_1 + 0xe8),100,0);
  }
  else {
    FUN_142ac4680(param_1,0);
  }
  EnterCriticalSection(lpCriticalSection);
  if (0 < (int)uStack_2d0) {
    local_428 = (longlong *)CONCAT44(local_428._4_4_,(int)uVar12);
    lVar16 = 0;
LAB_142ac84be:
    lVar18 = local_2d8;
    lVar15 = lVar16 * 0x10;
    _Dst = (void *)(local_2d8 + lVar15);
    puVar8 = *(undefined8 **)(local_2d8 + lVar15);
    uVar13 = (uint)lVar16;
    if (puVar8[6] == 0) {
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar17 = (int *)(puVar8 + 1);
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      iVar11 = ~uVar13 + (int)uStack_2d0;
      if (iVar11 != 0) {
        if (0 < iVar11) {
          iVar11 = 1;
        }
        memmove(_Dst,(void *)(lVar18 + (longlong)((int)uStack_2d0 - iVar11) * 0x10),
                (longlong)iVar11 << 4);
      }
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0 + -1);
      FUN_142ad83fa(&local_2d8);
      lVar18 = *(longlong *)(param_1 + 0x150);
      iVar11 = -1;
      if ((longlong)*(int *)(param_1 + 0x158) != 0) {
        uVar12 = 0;
        do {
          if (*(undefined8 **)(lVar18 + uVar12) == puVar8) goto LAB_142ac86e8;
          uVar12 = uVar12 + 0x18;
        } while ((longlong)*(int *)(param_1 + 0x158) * 0x18 != uVar12);
      }
      goto LAB_142ac86f2;
    }
    if ((*(char *)((longlong)puVar8 + 0x56) != '\0') ||
       ((*(char *)((longlong)_Dst + 8) == '\0' && (*(char *)((longlong)puVar8 + 0x53) == '\x01'))))
    {
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar17 = (int *)(puVar8 + 1);
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      iVar11 = ~uVar13 + (int)uStack_2d0;
      if (iVar11 != 0) {
        if (0 < iVar11) {
          iVar11 = 1;
        }
        memmove(_Dst,(void *)(lVar18 + (longlong)((int)uStack_2d0 - iVar11) * 0x10),
                (longlong)iVar11 << 4);
      }
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0 + -1);
      FUN_142ad83fa(&local_2d8);
      lVar18 = *(longlong *)(param_1 + 0x150);
      iVar11 = -1;
      if ((longlong)*(int *)(param_1 + 0x158) != 0) {
        uVar12 = 0;
        do {
          if (*(undefined8 **)(lVar18 + uVar12) == puVar8) goto LAB_142ac86e8;
          uVar12 = uVar12 + 0x18;
        } while ((longlong)*(int *)(param_1 + 0x158) * 0x18 != uVar12);
      }
      goto LAB_142ac86f2;
    }
    if ((*(byte *)(param_1 + 0xd9) & 1) != 0) {
      puVar1 = *(undefined8 **)(local_2d8 + lVar15);
      if (puVar1 != (undefined8 *)0x0) {
        LOCK();
        piVar17 = (int *)(puVar1 + 1);
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (*piVar17 == 0) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
      iVar11 = ~uVar13 + (int)uStack_2d0;
      if (iVar11 != 0) {
        if (0 < iVar11) {
          iVar11 = 1;
        }
        memmove((void *)(lVar15 + lVar18),
                (void *)((longlong)((int)uStack_2d0 - iVar11) * 0x10 + lVar18),(longlong)iVar11 << 4
               );
      }
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)uStack_2d0 + -1);
      FUN_142ad83fa(&local_2d8);
      lVar18 = *(longlong *)(param_1 + 0x150);
      iVar11 = -1;
      if ((longlong)*(int *)(param_1 + 0x158) != 0) {
        uVar12 = 0;
        do {
          if (*(undefined8 **)(lVar18 + uVar12) == puVar8) goto LAB_142ac86e8;
          uVar12 = uVar12 + 0x18;
        } while ((longlong)*(int *)(param_1 + 0x158) * 0x18 != uVar12);
      }
      goto LAB_142ac86f2;
    }
    goto LAB_142ac86ff;
  }
  goto LAB_142ac8735;
LAB_142ac86e8:
  iVar11 = (int)(uVar12 >> 3) * -0x55555555;
LAB_142ac86f2:
  puVar8 = local_430;
  piVar17 = (int *)(lVar18 + 0xc + (longlong)iVar11 * 0x18);
  *piVar17 = *piVar17 + -1;
  if (*piVar17 == 0) {
    FUN_146fff6c2(local_430);
    FUN_146fff73c(puVar8);
  }
LAB_142ac86ff:
  lVar16 = lVar16 + 1;
  if ((int)uStack_2d0 <= lVar16) goto LAB_142ac872c;
  goto LAB_142ac84be;
LAB_142ac872c:
  uVar12 = (ulonglong)local_428 & 0xffffffff;
  lpCriticalSection = local_418;
LAB_142ac8735:
  if ((int)uStack_2d0 == 0) {
    if ((uVar12 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      uVar12 = 0;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x18))();
    if ((uVar12 & 1) == 0) {
      cVar4 = *(char *)(param_1 + 0x34);
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0x34) = 1;
        DVar7 = GetCurrentThreadId();
        *(DWORD *)(param_1 + 0x30) = DVar7;
      }
      uVar12 = CONCAT71((int7)(uVar12 >> 8),cVar4) ^ 1;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((int)uStack_2d0 == 0) goto LAB_142ac8792;
  goto LAB_142ac8479;
}



// FUNCTION 142ac87da FUN_142ac87da body=493 status=ok
// SIG undefined FUN_142ac87da(void)

void FUN_142ac87da(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined7 *local_88;
  undefined8 local_78;
  int local_70;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined8 local_58;
  int local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_45;
  undefined1 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_68 = 0xf0000000000000;
  uStack_61 = 0xbf;
  FUN_142ac73d6(param_1,0,&local_68);
  local_58 = *param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  lVar2 = FUN_146fe78c2(param_1);
  if (lVar2 != 0) {
    local_47 = 0;
    local_45 = 0;
    local_43 = 0;
    local_41 = 0;
    uStack_60 = 0;
    uStack_5e = 0;
    local_68 = 0;
    uStack_61 = 0;
    local_78 = *param_2;
    local_70 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_70 = 0;
    }
    local_88 = &local_68;
    FUN_146fe5b40(lVar2,&local_78,&local_48,0);
    puVar5 = (undefined8 *)CONCAT17(uStack_61,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      if ((puVar5[6] != 0) && (*(char *)((longlong)puVar5 + 0x56) == '\0')) {
        if ((longlong)*(int *)(param_1 + 0x158) != 0) {
          plVar3 = *(longlong **)(param_1 + 0x150);
          lVar2 = (longlong)*(int *)(param_1 + 0x158) * 0x18;
          do {
            if ((undefined8 *)*plVar3 == puVar5) {
              if (plVar3 != (longlong *)0x0) {
                if ((*(byte *)(plVar3 + 2) & 1) != 0) goto LAB_142ac8985;
                iVar4 = *(int *)((longlong)plVar3 + 0xc) + 1;
                goto LAB_142ac897e;
              }
              break;
            }
            plVar3 = plVar3 + 3;
            lVar2 = lVar2 + -0x18;
          } while (lVar2 != 0);
        }
        LOCK();
        *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        UNLOCK();
        iVar4 = *(int *)(param_1 + 0x158);
        *(uint *)(param_1 + 0x158) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x15c) < iVar4 + 1U) {
          FUN_146fffbec((longlong *)(param_1 + 0x150),iVar4);
        }
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar4 * 0x18);
        *plVar3 = (longlong)puVar5;
        *(undefined2 *)(plVar3 + 1) = 0;
        *(undefined1 *)((longlong)plVar3 + 10) = 0;
        *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
        *(undefined1 *)(plVar3 + 2) = 0;
        iVar4 = 1;
        puVar5 = (undefined8 *)CONCAT17(uStack_61,local_68);
LAB_142ac897e:
        *(undefined1 *)(plVar3 + 2) = 1;
        *(int *)((longlong)plVar3 + 0xc) = iVar4;
LAB_142ac8985:
        *(undefined1 *)((longlong)plVar3 + 10) = uStack_5e;
        *(undefined2 *)(plVar3 + 1) = uStack_60;
        if (puVar5 == (undefined8 *)0x0) goto LAB_142ac884f;
      }
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
LAB_142ac884f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ac89c8 FUN_142ac89c8 body=145 status=ok
// SIG undefined FUN_142ac89c8(void)

undefined4 FUN_142ac89c8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_2;
  uVar1 = 0;
  local_28 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_28 = 0;
  }
  lVar2 = FUN_146fe78c2();
  if (lVar2 != 0) {
    local_40 = *param_2;
    local_38 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_38 = 0;
    }
    local_48 = 0;
    uVar1 = FUN_146fe5b40(lVar2,&local_40,param_3,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac8a5a FUN_142ac8a5a body=3250 status=ok
// SIG undefined FUN_142ac8a5a(void)

undefined8 *
FUN_142ac8a5a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  void *_Src;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  int local_80;
  uint local_74;
  LARGE_INTEGER local_70;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_LAB_149fc3ff0;
  local_a0 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 6),4000);
  param_1[0xb] = param_4;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  FUN_1402160b8(param_1 + 0xe);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8f) = 0;
  memset(param_1 + 0x13,0,0x8c);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x100000000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22d) = 0;
  iVar8 = (**(code **)(*DAT_14c82b500 + 0x20))();
  iVar15 = 1;
  if (1 < iVar8) {
    iVar15 = iVar8;
  }
  iVar8 = DAT_14c75f4c8;
  if (iVar15 < DAT_14c75f4c8) {
    iVar8 = iVar15;
  }
  if (DAT_14c75f4c8 < 1) {
    iVar8 = iVar15;
  }
  *(int *)(param_1 + 0xd) = iVar8 * 3;
  if (DAT_14c99d6a8 == '\0') {
    DAT_14c99d6a8 = '\x01';
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_b8 = (undefined8 *)0x0;
    cVar3 = FUN_14063337c(&DAT_14c846b20,L"AssetRegistryCacheRootFolder=",&DAT_14c99d690,1);
    if (cVar3 == '\0') {
      FUN_145c838ee(&local_70);
      if (CONCAT44(DAT_14c99d690._4_4_,(DWORD)DAT_14c99d690) != 0) {
        FUN_1400020a8();
      }
      DAT_14c99d690._0_4_ = local_70.s.LowPart;
      DAT_14c99d690._4_4_ = local_70.s.HighPart;
      DAT_14c99d698 = iStack_68;
      uRam000000014c99d69c = uStack_64;
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c99d6a0 = FUN_14054d46e(&DAT_14c846b20,L"ForceDependsGathering");
    DAT_14c99d6a1 = DAT_14c99d6a0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    bVar4 = FUN_14054d46e(&DAT_14c846b20,L"NoAssetRegistryCache");
    cVar3 = '\x01';
    if (bVar4 == 0) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar3 = FUN_14054d46e(&DAT_14c846b20,L"NoAssetRegistryDiscoveryCache");
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    bVar5 = FUN_14054d46e(&DAT_14c846b20,L"NoAssetRegistryCacheRead");
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_14054d46e(&DAT_14c846b20,L"multiprocess");
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_14054d46e(&DAT_14c846b20,L"NoAssetRegistryCacheWrite");
    DAT_14c99d6a2 = (bVar4 | bVar5) ^ 1;
    DAT_14c99d6a3 = 0;
    plVar10 = (longlong *)FUN_1400dbadc();
    plVar13 = (longlong *)*plVar10;
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)FUN_140e92164();
      *plVar10 = (longlong)plVar13;
    }
    local_a8 = param_3;
    cVar6 = (**(code **)(*plVar13 + 0x148))(plVar13,0,0,0);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20,L"AssetRegistryCacheSkipInvalidate");
    local_74 = 0xffffffff;
    FUN_140056680(&local_70,L"Default");
    local_b8 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"AssetRegistry",L"AssetRegistryDiscoveryCache",&local_70);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_b8 = (undefined8 *)0x0;
    FUN_14063337c(&DAT_14c846b20,L"AssetRegistryDiscoveryCache=",&local_70,1);
    local_80 = iStack_68 + -1;
    if (iStack_68 == 0) {
      local_80 = 0;
    }
    FUN_146fe3873(&local_74);
    uVar14 = 0x11;
    if (local_74 != 0xffffffff) {
      uVar14 = local_74;
    }
    if (bVar5 != 0) {
      uVar14 = 0;
    }
    if (cVar3 != '\0') {
      uVar14 = 0;
    }
    uVar9 = uVar14 & 0xffffff0f;
    if (cVar7 == '\0') {
      uVar16 = 0;
      if ((uVar14 & 0xf) != 1) {
        uVar16 = uVar9;
      }
      if (cVar6 == '\0') {
        uVar9 = uVar16;
      }
    }
    else if ((uVar14 & 0xf) == 1) {
      uVar9 = 2;
    }
    DAT_14c99d6a4 = (uVar9 & 0xf) != 0;
    DAT_14c99d6a6 = (uVar9 & 0xf) != 2;
    DAT_14c99d6a5 = 0;
    if (((DAT_14c846b14 == '\x01') &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc)) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar4 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar4 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pwVar18 = L"CachedAssetRegistryNoDeps";
    if (DAT_14c99d6a1 != '\0') {
      pwVar18 = L"CachedAssetRegistry";
    }
    iVar15 = 0x19;
    if (DAT_14c99d6a1 != '\0') {
      iVar15 = 0x13;
    }
    lVar17 = (longlong)DAT_14c99d698;
    local_98 = (void *)0x0;
    _Src = (void *)CONCAT44(DAT_14c99d690._4_4_,(DWORD)DAT_14c99d690);
    iStack_90 = DAT_14c99d698;
    FUN_1446dd670(&local_98,(uint)(lVar17 == 0) + iVar15 + DAT_14c99d698 + 1,0);
    if (lVar17 != 0) {
      memcpy(local_98,_Src,lVar17 * 2);
    }
    FUN_1401aebe8(&local_98,pwVar18,iVar15);
    if (CONCAT44(DAT_14c99d680._4_4_,(undefined4)DAT_14c99d680) != 0) {
      FUN_1400020a8();
    }
    param_3 = local_a8;
    DAT_14c99d680._0_4_ = (undefined4)local_98;
    DAT_14c99d680._4_4_ = local_98._4_4_;
    DAT_14c99d688 = iStack_90;
    DAT_14c99d68c = uStack_8c;
    DAT_14c99d6a7 = 0;
    if (CONCAT44(local_70.s.HighPart,local_70.s.LowPart) != 0) {
      FUN_1400020a8();
    }
  }
  *(char *)((longlong)param_1 + 0x6d) = DAT_14c99d6a0;
  *(char *)((longlong)param_1 + 0x6e) = DAT_14c99d6a1;
  LOCK();
  *(byte *)((longlong)param_1 + 0x91) = DAT_14c99d6a2;
  UNLOCK();
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0x92) = DAT_14c99d6a3;
  UNLOCK();
  QueryPerformanceCounter(&local_70);
  param_1[0x28] =
       (double)CONCAT44(local_70.s.HighPart,local_70.s.LowPart) * DAT_14c83f420 + 16777216.0;
  if ((*(char *)((longlong)param_1 + 0x6c) == '\x01') && (DAT_14c846b14 == '\x01')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar4 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar4 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x22c) = 1;
  puVar11 = (undefined8 *)FUN_14001cc68(0x1b8,0x10);
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x6c);
  *puVar11 = &PTR_LAB_149fc3ef0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar11 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar11 + 1),4000);
  *(undefined4 *)(puVar11 + 6) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x34) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar11 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar11 + 7),4000);
  puVar11[0xc] = 0;
  iVar15 = *(int *)(local_a0 + 1);
  uVar2 = *local_a0;
  *(int *)(puVar11 + 0xd) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x6c) = 0;
  }
  else {
    FUN_140b856de(puVar11 + 0xc,iVar15,0);
    FUN_140b8566a(puVar11[0xc],uVar2,iVar15);
  }
  puVar11[0xe] = 0;
  iVar15 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(puVar11 + 0xf) = iVar15;
  if (iVar15 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x7c) = 0;
  }
  else {
    FUN_140b856de(puVar11 + 0xe,iVar15,0);
    FUN_140b8566a(puVar11[0xe],uVar2,iVar15);
  }
  puVar11[0x14] = 0;
  *(undefined4 *)(puVar11 + 0x15) = 0;
  puVar11[0x10] = 0;
  puVar11[0x11] = 0;
  *(undefined8 *)((longlong)puVar11 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar11 + 0xb4) = 0;
  puVar11[0x18] = 0;
  *(undefined4 *)(puVar11 + 0x19) = 0;
  puVar11[0x1a] = 0;
  *(undefined1 *)(puVar11 + 0x1b) = uVar1;
  *(undefined2 *)((longlong)puVar11 + 0xd9) = 0;
  *(undefined8 *)((longlong)puVar11 + 0xdc) = 0;
  *(undefined4 *)((longlong)puVar11 + 0xe4) = 0;
  FUN_144a85b52(puVar11 + 0x1d,1);
  puVar11[0x1e] = 0;
  puVar11[0x1f] = 0;
  puVar11[0x20] = 0;
  puVar11[0x21] = 0;
  puVar11[0x22] = 0;
  puVar11[0x23] = 0;
  puVar11[0x24] = 0;
  puVar11[0x25] = 0;
  *(undefined8 *)((longlong)puVar11 + 300) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x134) = 0;
  puVar11[0x28] = 0;
  puVar11[0x29] = 0;
  puVar11[0x2a] = 0;
  puVar11[0x2b] = 0;
  puVar11[0x2c] = 0;
  puVar11[0x2d] = 0;
  puVar11[0x2e] = 0;
  puVar11[0x2f] = 0;
  puVar11[0x30] = 0;
  puVar11[0x31] = 0;
  puVar11[0x32] = 0;
  puVar12 = (undefined8 *)FUN_14001cc68(0x50,8);
  *puVar12 = 0;
  puVar11[0x32] = puVar12;
  puVar11[0x33] = puVar12;
  puVar11[0x34] = 0;
  puVar12 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar12 = 0;
  puVar11[0x34] = puVar12;
  puVar11[0x35] = puVar12;
  *(undefined2 *)(puVar11 + 0x36) = 0;
  FUN_140056680(&local_70,L"/Game/Collections");
  FUN_140e830ae(puVar11 + 0x10,local_88,&local_70,0);
  if (CONCAT44(local_70.s.HighPart,local_70.s.LowPart) != 0) {
    FUN_1400020a8();
  }
  if ((*(char *)(puVar11 + 0x1b) == '\x01') && (DAT_14c846b14 == '\x01')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar4 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar4 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 0) {
      *(undefined1 *)(puVar11 + 0x1b) = 0;
    }
  }
  (**(code **)(*(longlong *)puVar11[0x1d] + 0x10))();
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"-ARDiscoverThreads=",&DAT_14c75f4c0);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"-ARDiscoverMinBatchSize=",&DAT_14c75f4c4);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"-ARGatherThreads=",&DAT_14c75f4c8);
  if (DAT_14c75f4c0 < 1) {
    DAT_14c75f4c0 = 0;
  }
  iVar15 = 1;
  if (1 < DAT_14c75f4c4) {
    iVar15 = DAT_14c75f4c4;
  }
  iVar8 = 0;
  if (0 < DAT_14c75f4c8) {
    iVar8 = DAT_14c75f4c8;
  }
  plVar13 = (longlong *)param_1[0x11];
  DAT_14c75f4c4 = iVar15;
  DAT_14c75f4c8 = iVar8;
  param_1[0x11] = puVar11;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13,1);
  }
  puVar11 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[0xc] = 0;
  *(undefined4 *)(puVar11 + 7) = 0xffffffff;
  *(undefined4 *)(puVar11 + 10) = 0xffffffff;
  uVar2 = param_1[0x13];
  param_1[0x13] = puVar11;
  FUN_146ffff7e(uVar2);
  FUN_146ffff7e(0);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ac970e FUN_142ac970e body=1639 status=ok
// SIG undefined FUN_142ac970e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142ac970e(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined1 auStack_458 [32];
  longlong local_438;
  PSRWLOCK local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined2 local_418;
  LARGE_INTEGER local_410;
  double local_408;
  double local_400;
  longlong local_3f8 [2];
  longlong *local_3e8;
  longlong local_3d8 [4];
  undefined1 local_3b8;
  undefined1 *local_3a8;
  undefined8 *local_3a0;
  longlong local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined2 local_378;
  undefined1 *local_368 [2];
  undefined ***local_358;
  undefined **local_348;
  longlong local_340;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined1 local_280;
  longlong local_278 [3];
  undefined1 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined7 uStack_210;
  undefined4 uStack_209;
  undefined8 *local_200;
  longlong lStack_1f8;
  undefined2 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined7 uStack_130;
  undefined4 uStack_129;
  undefined1 local_120 [16];
  char local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
  char cStack_b7;
  undefined1 uStack_b6;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  if (*(int *)(param_1 + 0x78) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
    pcVar9 = TryEnterCriticalSection_exref;
    do {
      FUN_142ac9d76(param_1,0,0);
      while ((EnterCriticalSection(lpCriticalSection), *(int *)(param_1 + 0x78) == 0 &&
             ((*(byte *)(param_1 + 0x90) & 1) == 0))) {
        bVar1 = *(byte *)(param_1 + 0x157);
        if (*(int *)(param_1 + 0x7c) == 0) {
          if ((bVar1 & 1) == 0) break;
          LeaveCriticalSection(lpCriticalSection);
LAB_142ac980a:
          uVar11 = 0x3dcccccd;
          if (((*(byte *)(param_1 + 0x15b) & 1) == 0) &&
             (uVar11 = 0x3dcccccd, *(int *)(param_1 + 0x80) == 0)) {
            if ((DAT_14c9485b8 == (longlong *)0x0) ||
               (lVar4 = (**(code **)(*DAT_14c9485b8 + 8))(0x3dcccccd), lVar4 == 0)) {
LAB_142ac983d:
              lVar4 = 0;
            }
            else {
              lVar5 = FUN_145b17780();
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_142ac983d;
            }
            iVar3 = (*pcVar9)((LPCRITICAL_SECTION)(lVar4 + 0xe78));
            uVar11 = 0x3dcccccd;
            if (iVar3 != 0) {
              bVar10 = false;
              local_110 = '\0';
              cStack_b8 = '\0';
              cStack_b7 = '\0';
              uStack_b6 = 0;
              local_c8 = 0;
              iStack_c0 = 0;
              uStack_bc = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_418 = 0;
              local_428 = 0;
              uStack_420 = 0;
              local_260 = 0;
              local_218 = 0;
              uStack_210 = 0;
              uStack_209 = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_238 = 0;
              uStack_230 = 0;
              local_248 = 0;
              uStack_240 = 0;
              local_258 = 0;
              uStack_250 = 0;
              local_1f0 = 0;
              local_200 = (undefined8 *)0x0;
              lStack_1f8 = 0;
              puVar6 = &local_1e8;
              local_1a8 = 0;
              uStack_1a0 = 0;
              uStack_1b4 = 0;
              uStack_1b0 = 0;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              uStack_1bc = 0x80;
              uStack_1b8 = 0xffffffff;
              local_158 = 0;
              uStack_150 = 0;
              uStack_164 = 0;
              uStack_160 = 0;
              local_178 = 0;
              uStack_170 = 0;
              local_188 = 0;
              uStack_180 = 0;
              local_198 = 0;
              uStack_190 = 0;
              uStack_16c = 0x80;
              uStack_168 = 0xffffffff;
              local_148 = 0xffffffffffffffff;
              local_140 = 1;
              local_138 = 0;
              uStack_130 = 0;
              uStack_129 = 0;
              local_308 = 0;
              local_300 = 0;
              local_328 = 0;
              uStack_320 = 0;
              local_2fc = 0xffffffff00000080;
              local_2f4 = 0;
              local_2e8 = 0;
              local_2e0 = 0;
              local_2b8 = 0;
              local_2b0 = 0;
              local_2d8 = 0;
              uStack_2d0 = 0;
              local_2ac = 0xffffffff00000080;
              local_2a4 = 0;
              local_298 = 0;
              local_290 = 0;
              local_288 = 0xffffffffffffffff;
              local_280 = 1;
              local_430 = (PSRWLOCK)(lVar4 + 0xe68);
              local_278[0] = lVar4;
              AcquireSRWLockExclusive(local_430);
              local_438 = FUN_140be8873();
              lVar5 = FUN_140be88df();
              if (*(char *)(lVar4 + 0x838) == '\x01') {
                puVar6 = (undefined8 *)(lVar4 + 0x840);
                if (*(char *)(lVar4 + 0x8e8) == '\0') {
                  bVar10 = *(longlong *)(lVar4 + 0x8e0) == lVar5;
                }
                else {
                  bVar10 = false;
                }
              }
              local_1f0 = CONCAT11(*(longlong *)(lVar4 + 0x8f0) == local_438,bVar10);
              local_358 = (undefined ***)0x0;
              local_348 = &PTR_LAB_149fca190;
              local_368[0] = &LAB_142adea44;
              local_3f8[0] = 0;
              local_3e8 = (longlong *)0x0;
              local_3b8 = 0;
              local_3a8 = local_120;
              local_3a0 = &local_428;
              local_388 = 0;
              uStack_380 = 0;
              local_398 = 0;
              uStack_390 = 0;
              local_378 = 0;
              dVar2 = (double)_DAT_14c75f4d0;
              local_340 = lVar4;
              local_200 = puVar6;
              lStack_1f8 = lVar4 + 0x30;
              QueryPerformanceCounter(&local_410);
              local_408 = (double)local_410.QuadPart * DAT_14c83f420 + 16777216.0;
              local_400 = dVar2;
              FUN_146ffcba0(local_3f8,local_368);
              local_378 = CONCAT11(1,(undefined1)local_378);
              FUN_142acf63a(lVar4 + 0x30);
              if ((((cStack_b7 != '\0') || (cStack_b8 != '\0')) || (local_110 != '\0')) ||
                 ((((int)uStack_100 != 0 || ((int)uStack_f0 != 0)) ||
                  (((int)uStack_d0 != 0 || (iStack_c0 != 0)))))) {
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x1450));
                FUN_1457de4d0(lVar4 + 0x13d0);
                FUN_1457de678(local_120);
                FUN_1457de734(lVar4);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x1450));
              }
              if (local_388 != 0) {
                local_388 = 0;
                uStack_380 = 0;
              }
              if (local_398 != 0) {
                local_398 = 0;
                uStack_390 = 0;
              }
              if (local_3f8[0] != 0) {
                plVar7 = local_3e8;
                if (local_3e8 == (longlong *)0x0) {
                  plVar7 = local_3d8;
                }
                (**(code **)(*plVar7 + 0x10))();
              }
              pcVar9 = TryEnterCriticalSection_exref;
              if (local_368[0] != (undefined1 *)0x0) {
                pppuVar8 = local_358;
                if (local_358 == (undefined ***)0x0) {
                  pppuVar8 = &local_348;
                }
                (*(code *)(*pppuVar8)[2])();
              }
              ReleaseSRWLockExclusive(local_430);
              local_290 = 0;
              FUN_140cb527e(&local_2d8);
              local_2e0 = 0;
              if (local_2e8 != 0) {
                FUN_1400020a8();
              }
              FUN_14010514e(&local_328);
              FUN_14579333c(local_278);
              FUN_140cb5138(local_120);
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0xe78));
              uVar11 = 0x3dcccccd;
            }
          }
        }
        else {
          LeaveCriticalSection(lpCriticalSection);
          uVar11 = 0x3ba3d70a;
          if ((bVar1 & 1) != 0) goto LAB_142ac980a;
        }
        FUN_14000f986(uVar11);
      }
      LeaveCriticalSection(lpCriticalSection);
    } while (*(int *)(param_1 + 0x78) == 0);
  }
  if ((local_b0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 142ac9d76 FUN_142ac9d76 body=7538 status=ok
// SIG undefined FUN_142ac9d76(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142ac9d76(LARGE_INTEGER param_1,char param_2,double param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  LARGE_INTEGER LVar4;
  longlong *plVar5;
  double dVar6;
  ushort uVar7;
  DWORD DVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  LPCRITICAL_SECTION p_Var13;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  LARGE_INTEGER *pLVar20;
  undefined8 *puVar21;
  LARGE_INTEGER *pLVar22;
  longlong lVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong uVar26;
  undefined2 *puVar27;
  int iVar28;
  int iVar29;
  void *pvVar30;
  LARGE_INTEGER LVar31;
  byte bVar32;
  longlong lVar33;
  undefined8 *puVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  undefined4 *puVar38;
  LARGE_INTEGER *pLVar39;
  char *pcVar40;
  undefined4 *puVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_e308 [32];
  ulonglong local_e2e8;
  int local_e2e0;
  LARGE_INTEGER *local_e2d8;
  byte local_e2cb;
  undefined1 local_e2ca;
  char local_e2c9;
  uint local_e2c8;
  char local_e2c2;
  byte local_e2c1;
  LPCRITICAL_SECTION local_e2c0;
  LARGE_INTEGER local_e2b8;
  int local_e2ac;
  LPCRITICAL_SECTION local_e2a8;
  longlong *local_e2a0;
  uint local_e294;
  int local_e290;
  int local_e28c;
  char *local_e288;
  longlong local_e280;
  longlong local_e278;
  longlong local_e270;
  longlong local_e268;
  longlong local_e260;
  longlong local_e258;
  longlong local_e250;
  longlong local_e248;
  longlong local_e240;
  longlong local_e238;
  ulonglong local_e230;
  longlong local_e228;
  undefined8 *local_e220;
  undefined4 *local_e218;
  undefined8 uStack_e210;
  byte local_e1f9;
  undefined8 local_e1f8;
  undefined4 local_e1f0;
  longlong local_e1e8;
  undefined4 local_e1e0;
  longlong local_e1d8;
  undefined4 local_e1d0;
  LARGE_INTEGER local_e1c8;
  LARGE_INTEGER *pLStack_e1c0;
  undefined8 local_e1b0;
  LARGE_INTEGER local_e1a8;
  undefined8 uStack_e1a0;
  LARGE_INTEGER local_e198;
  LONGLONG LStack_e190;
  LARGE_INTEGER local_e188;
  LARGE_INTEGER *local_e180;
  LARGE_INTEGER local_e178;
  LARGE_INTEGER LStack_e170;
  undefined8 *local_e168;
  char local_e160;
  undefined1 local_e158 [512];
  undefined8 local_df58 [200];
  undefined8 *local_d918;
  undefined8 local_d910;
  undefined1 local_d908 [800];
  undefined1 *local_d5e8;
  undefined8 local_d5e0;
  void *local_d5d8;
  ulonglong uStack_d5d0;
  undefined8 local_cf98;
  undefined8 local_cf90;
  LARGE_INTEGER local_cf80;
  int local_cf78;
  undefined8 local_74e0;
  undefined8 local_74d8;
  LARGE_INTEGER local_74d0;
  LARGE_INTEGER local_74c8;
  undefined8 *local_74c0;
  void **local_74b8;
  uint local_74b0 [128];
  undefined1 local_72b0 [22656];
  LARGE_INTEGER *local_1a30;
  undefined8 local_1a28;
  undefined1 local_1a20 [800];
  undefined8 local_1700;
  undefined8 local_16f8;
  undefined1 local_16f0 [800];
  undefined1 *local_13d0;
  undefined8 local_13c8;
  LARGE_INTEGER local_13c0;
  LARGE_INTEGER *local_13b8;
  LARGE_INTEGER *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142ac9d8c;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_e308;
  local_e2cb = 1;
  local_e2c2 = true;
  if (param_2 != '\0') {
    local_e2c2 = *(longlong *)(param_1.QuadPart + 0x60) == 0;
  }
  local_e1f9 = 0;
  local_e2a8 = (LPCRITICAL_SECTION)(param_1.QuadPart + 8);
  local_e218 = (undefined4 *)0x0;
  uStack_e210 = 0;
  EnterCriticalSection(local_e2a8);
  local_e2ca = *(undefined1 *)(param_1.QuadPart + 0x22c);
  *(char *)(param_1.QuadPart + 0x22c) = param_2;
  QueryPerformanceCounter(&local_74d0);
  dVar9 = (double)local_74d0.QuadPart * DAT_14c83f420 + 16777216.0;
  local_e2c0 = (LPCRITICAL_SECTION)(param_1.QuadPart + 0x30);
  local_e230 = param_1.QuadPart + 0x148;
  local_e238 = param_1.QuadPart + 0x128;
  pcVar40 = (char *)(param_1.QuadPart + 0x155);
  local_e280 = param_1.QuadPart + 0xc0;
  local_e228 = param_1.QuadPart + 0x1b8;
  local_e270 = param_1.QuadPart + 0x160;
  local_e240 = param_1.QuadPart + 0xa0;
  local_e248 = param_1.QuadPart + 0xb0;
  local_e250 = param_1.QuadPart + 0xd0;
  local_e258 = param_1.QuadPart + 0xe0;
  local_e260 = param_1.QuadPart + 0xf0;
  local_e268 = param_1.QuadPart + 0x100;
  dVar45 = 0.0;
  local_e278 = param_1.QuadPart + 0x110;
  local_e2c9 = param_2;
  local_e2b8 = param_1;
  local_e288 = pcVar40;
LAB_142ac9f7f:
  do {
    local_100 = (LARGE_INTEGER *)0x0;
    local_f8 = 0x6400000000;
    local_13d0 = (undefined1 *)0x0;
    local_13c8 = 0x6400000000;
    local_1700 = 0;
    local_16f8 = 0x6400000000;
    local_1a30 = (LARGE_INTEGER *)0x0;
    local_1a28 = 0x6400000000;
    local_74e0 = 0;
    local_74d8 = 0x6400000000;
    local_cf98 = 0;
    local_cf90 = 0x6400000000;
    local_d5e8 = (undefined1 *)0x0;
    local_d5e0 = 0x6400000000;
    local_d918 = (undefined8 *)0x0;
    local_d910 = 0x6400000000;
    EnterCriticalSection(local_e2c0);
    if (*(char *)(param_1.QuadPart + 0x158) == '\x01') {
      *(undefined1 *)(param_1.QuadPart + 0x158) = 0;
      QueryPerformanceCounter(&local_e178);
      *(double *)(param_1.QuadPart + 0x140) =
           (double)local_e178.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    if ((local_e2cb & 1) != 0) {
      local_e2e8 = local_e230;
      FUN_142ac7508(*(undefined8 *)(param_1.QuadPart + 0x88),pcVar40,local_e238,
                    *(undefined8 *)(param_1.QuadPart + 0x98));
    }
    if (((DAT_14c867cfc & 1) != 0) && (*(char *)(param_1.QuadPart + 0x22e) == '\0')) {
      *(undefined1 *)(param_1.QuadPart + 0x22e) = 1;
      FUN_146fe8f9c(*(undefined8 *)(param_1.QuadPart + 0x98));
    }
    lVar23 = *(longlong *)(param_1.QuadPart + 0x98);
    iVar25 = *(int *)(lVar23 + 0x60);
    iVar28 = *(int *)(param_1.QuadPart + 0x68) - (int)local_f8;
    if (iVar25 <= iVar28) {
      iVar28 = iVar25;
    }
    iVar17 = *(int *)(param_1.QuadPart + 0x220);
    if (iVar28 == 0) {
      if (iVar17 == -1) {
        uVar35 = 1;
        local_e2c8 = 2;
      }
      else {
        *(undefined4 *)(param_1.QuadPart + 0x220) = 0xffffffff;
        local_e2c8 = 3;
        uVar35 = 3;
      }
      if (*pcVar40 == '\x01') {
        bVar32 = *(byte *)(param_1.QuadPart + 0x159);
        if (*(char *)(param_1.QuadPart + 0x157) == '\0') {
          *(undefined1 *)(param_1.QuadPart + 0x157) = 1;
          bVar15 = bVar32;
          if (0.0 <= dVar9) {
            QueryPerformanceCounter(&local_e178);
            *(double *)(param_1.QuadPart + 0x138) =
                 (((double)local_e178.QuadPart * DAT_14c83f420 + 16777216.0) - dVar9) +
                 *(double *)(param_1.QuadPart + 0x138);
            dVar9 = -1.0;
            bVar15 = *(byte *)(param_1.QuadPart + 0x159);
          }
          if (((bVar15 & 1) == 0) && ((DAT_14c867cfc & 1) != 0)) {
            *(undefined1 *)(param_1.QuadPart + 0x159) = 1;
          }
          iVar25 = *(int *)(param_1.QuadPart + 0x118);
          *(uint *)(param_1.QuadPart + 0x118) = iVar25 + 1U;
          if (*(uint *)(param_1.QuadPart + 0x11c) < iVar25 + 1U) {
            FUN_144941252(local_e278,iVar25);
          }
          dVar6 = *(double *)(param_1.QuadPart + 0x138);
          *(double *)(*(longlong *)(param_1.QuadPart + 0x110) + (longlong)iVar25 * 8) = dVar6;
          *(float *)(param_1.QuadPart + 0x120) = (float)dVar6 + *(float *)(param_1.QuadPart + 0x120)
          ;
          *(undefined8 *)(param_1.QuadPart + 0x138) = 0;
        }
        uVar35 = local_e2c8;
        if ((bVar32 == 0) && (*(char *)(param_1.QuadPart + 0x159) == '\x01')) {
          LOCK();
          *(undefined1 *)(param_1.QuadPart + 0x90) = 1;
          UNLOCK();
        }
      }
LAB_142acb0f8:
      local_e2c8 = uVar35;
      LeaveCriticalSection(local_e2c0);
    }
    else {
      local_e2c8 = 0;
      iVar29 = iVar28;
      if (-1 < iVar17) {
        if (iVar17 == 0) {
          *(undefined4 *)(param_1.QuadPart + 0x220) = 0xffffffff;
          local_e2c8 = 3;
          uVar35 = local_e2c8;
          goto LAB_142acb0f8;
        }
        iVar29 = iVar17;
        if (iVar28 < iVar17) {
          iVar29 = iVar28;
        }
        iVar25 = iVar17 - iVar29;
        if (iVar17 <= iVar28) {
          iVar25 = -1;
        }
        *(int *)(param_1.QuadPart + 0x220) = iVar25;
        local_e2c8 = (uint)(iVar17 <= iVar28) * 3;
        iVar25 = *(int *)(lVar23 + 0x60);
      }
      iVar25 = iVar25 + *(int *)(param_1.QuadPart + 200);
      local_e28c = iVar17;
      if (iVar25 < 0) {
LAB_142acbadb:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar25);
      }
      if (*(int *)(param_1.QuadPart + 0xcc) < iVar25) {
        FUN_146ffe15a(local_e280);
        lVar23 = *(longlong *)(param_1.QuadPart + 0x98);
      }
      FUN_146fe906c(lVar23,&local_13c0,iVar29);
      if ((*(byte *)(param_1.QuadPart + 0x91) & 1) == 0) {
        bVar32 = 0;
      }
      else {
        bVar32 = *(byte *)(param_1.QuadPart + 0x154) ^ 1;
      }
      dVar6 = *(double *)(param_1.QuadPart + 0x140);
      LeaveCriticalSection(local_e2c0);
      local_e2c1 = *(byte *)(param_1.QuadPart + 0x92);
      if (bVar32 != 0) {
        QueryPerformanceCounter(&local_e178);
        local_e1c8.QuadPart = 0;
        pLStack_e1c0 = (LARGE_INTEGER *)0x0;
        FUN_146fe3b5a(&local_e1d8);
        local_e1e8 = local_e1d8;
        local_e1e0 = local_e1d0;
        local_e198.QuadPart = 0;
        LStack_e190 = 0;
        FUN_146feafbe(&local_e198);
        local_e1a8.QuadPart = (LONGLONG)&local_e1e8;
        local_e178.QuadPart = 0;
        LStack_e170 = (LARGE_INTEGER)(LStack_e170.QuadPart & 0xffffffff00000000);
        local_e188.QuadPart = (LONGLONG)FUN_142adb81a;
        local_e180 = &local_e1a8;
        local_e2e0 = 8;
        local_e2d8 = &local_e178;
        uStack_e1a0 = &local_e198;
        FUN_1401f8d10(L"ParallelFor Task",local_e1e0,1,&local_e188);
        local_e178.s = local_e198.s;
        LStack_e170.QuadPart = LStack_e190;
        local_e198.QuadPart = 0;
        LStack_e190 = 0;
        FUN_1470009ac(0,0);
        if (local_e198.QuadPart != 0) {
          FUN_1400020a8();
        }
        FUN_146fe91c4(&local_e1c8,&local_e178);
        FUN_1470009ac(local_e178.QuadPart,LStack_e170.QuadPart & 0xffffffff);
        if (local_e178.QuadPart != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_e1d8,local_e1d0);
        if (local_e1d8 != 0) {
          FUN_1400020a8();
        }
        local_e198 = local_e1c8;
        LStack_e190 = (LONGLONG)pLStack_e1c0;
        local_e1c8.QuadPart = 0;
        pLStack_e1c0 = (LARGE_INTEGER *)0x0;
        FUN_146fe9214(param_1.QuadPart,&local_e198);
        p_Var13 = local_e2c0;
        EnterCriticalSection(local_e2c0);
        *(undefined1 *)(param_1.QuadPart + 0x154) = 1;
        QueryPerformanceCounter(&local_e178);
        dVar6 = (double)local_e178.QuadPart * DAT_14c83f420 + 16777216.0;
        *(double *)(param_1.QuadPart + 0x140) = dVar6;
        LeaveCriticalSection(p_Var13);
        FUN_1470009ac(local_e1c8.QuadPart,(ulonglong)pLStack_e1c0 & 0xffffffff);
        if (local_e1c8.QuadPart != 0) {
          FUN_1400020a8();
        }
      }
      pLVar22 = local_100;
      if (local_100 == (LARGE_INTEGER *)0x0) {
        pLVar22 = &local_13c0;
      }
      local_e1a8.QuadPart = 0;
      uStack_e1a0 = (LARGE_INTEGER *)0x0;
      local_e2ac = 0;
      if ((longlong)(int)local_f8 != 0) {
        pLVar39 = pLVar22 + (longlong)(int)local_f8 * 6;
        local_e2ac = 0;
        do {
          uVar26 = local_d910;
          if ((byte)(*(char *)(pLVar22 + 5) - 3U) < 2) {
            local_e1c8 = *pLVar22;
            iVar25 = pLVar22[1].s.LowPart - 1;
            if (pLVar22[1].s.LowPart == 0) {
              iVar25 = 0;
            }
            pLStack_e1c0 = (LARGE_INTEGER *)CONCAT44(pLStack_e1c0._4_4_,iVar25);
            FUN_140fede38(&local_e188,&local_e1c8,1);
            local_e160 = '\0';
            local_e178.QuadPart = (LONGLONG)local_e158;
            local_e168 = local_df58;
            uVar35 = pLVar22[3].s.LowPart;
            iVar25 = uVar35 - 1;
            if (uVar35 == 0) {
              iVar25 = 0;
            }
            LVar31 = pLVar22[2];
            lVar23 = (longlong)iVar25;
            LStack_e170.QuadPart = local_e178.QuadPart;
            if (0xff < iVar25) {
              FUN_140213274(&local_e178,lVar23);
            }
            LVar4 = LStack_e170;
            if (1 < uVar35) {
              memcpy((void *)LStack_e170,(void *)LVar31,lVar23 * 2);
              LStack_e170.QuadPart = LVar4.QuadPart + lVar23 * 2;
            }
            LVar31 = local_e188;
            iVar25 = (int)local_e180;
            lVar23 = (longlong)(int)local_e180;
            if (local_e168 <= (undefined8 *)(LStack_e170.QuadPart + lVar23 * 2)) {
              FUN_140213274(&local_e178,lVar23);
            }
            LVar4 = LStack_e170;
            if (iVar25 != 0) {
              memcpy((void *)LStack_e170,(void *)LVar31,lVar23 * 2);
              LStack_e170.QuadPart = LVar4.QuadPart + lVar23 * 2;
            }
            uVar26 = local_d5e0;
            lVar23 = (longlong)(int)local_d5e0;
            uVar35 = (int)local_d5e0 + 1;
            local_d5e0 = CONCAT44(local_d5e0._4_4_,uVar35);
            if (local_d5e0._4_4_ < uVar35) {
              FUN_1470009e4(local_d908,uVar26 & 0xffffffff);
            }
            puVar19 = local_d5e8;
            if (local_d5e8 == (undefined1 *)0x0) {
              puVar19 = local_d908;
            }
            FUN_1446f82e2(&local_e1b0,(ulonglong)(LStack_e170.QuadPart - (longlong)local_e178) >> 1,
                          local_e178.QuadPart,1);
            *(undefined8 *)(puVar19 + lVar23 * 8) = local_e1b0;
            if (local_e160 == '\x01') {
              FUN_1400020a8(local_e178.QuadPart);
            }
          }
          else if (*(char *)(pLVar22 + 5) == '\x02') {
            if (*(char *)((longlong)pLVar22 + 0x29) == '\x01') {
              lVar23 = (longlong)(int)local_d910;
              uVar35 = (int)local_d910 + 1;
              local_d910 = CONCAT44(local_d910._4_4_,uVar35);
              if (local_d910._4_4_ < uVar35) {
                FUN_147000aea(local_df58,uVar26 & 0xffffffff);
              }
              puVar34 = local_d918;
              if (local_d918 == (undefined8 *)0x0) {
                puVar34 = local_df58;
              }
              puVar2 = puVar34 + lVar23 * 2;
              puVar34[lVar23 * 2] = 0;
              DVar8 = pLVar22[1].s.LowPart;
              LVar31 = *pLVar22;
              *(DWORD *)(puVar34 + lVar23 * 2 + 1) = DVar8;
              if ((longlong)(int)DVar8 == 0) {
                *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar2,DVar8,0);
                memcpy((void *)*puVar2,(void *)LVar31,(longlong)(int)DVar8 * 2);
              }
            }
            else {
              puVar27 = &DAT_149dfb77a;
              if (pLVar22[3].s.LowPart != 0) {
                puVar27 = (undefined2 *)pLVar22[2].QuadPart;
              }
              FUN_1446f470e(&local_e1c8,puVar27,1);
              if (*(int *)(local_e2b8.QuadPart + 0x188) != *(int *)(local_e2b8.QuadPart + 0x1b4)) {
                uVar16 = local_e1c8.s.LowPart;
                uVar35 = (uint)((ulonglong)local_e1c8 >> 0x10);
                lVar23 = *(longlong *)(local_e2b8.QuadPart + 0x1c0);
                if (*(longlong *)(local_e2b8.QuadPart + 0x1c0) == 0) {
                  lVar23 = local_e228;
                }
                iVar25 = *(int *)(lVar23 + (ulonglong)
                                           (*(int *)(local_e2b8.QuadPart + 0x1c8) - 1U &
                                           (uVar16 << 0x10 | uVar16 & 0xffff) +
                                           local_e1c8.s.HighPart +
                                           (uVar35 << 0x13 | uVar35 & 0xffff) +
                                           ((uVar16 & 0xffff) >> 4)) * 4);
                if (iVar25 != -1) {
LAB_142aca986:
                  plVar24 = (longlong *)
                            (*(longlong *)(local_e2b8.QuadPart + 0x180) + (longlong)iVar25 * 0x18);
                  if (*plVar24 != local_e1c8.QuadPart) goto code_r0x000142aca996;
                  if ((((plVar24 + 1 != (longlong *)0x0 && plVar24 != (longlong *)0x0) &&
                       (plVar24 = (longlong *)plVar24[1], plVar24 != (longlong *)0x0)) &&
                      (pLVar22[4].QuadPart == *plVar24)) &&
                     (((plVar5 = plVar24 + 5, *(uint *)(plVar24 + 5) == uVar16 &&
                       (*(int *)((longlong)plVar24 + 0x2c) == local_e1c8.s.HighPart)) ||
                      (*plVar5 == 0)))) {
                    local_e178 = *pLVar22;
                    iVar25 = pLVar22[1].s.LowPart - 1;
                    if (pLVar22[1].s.LowPart == 0) {
                      iVar25 = 0;
                    }
                    LStack_e170.s.LowPart = iVar25;
                    FUN_140fede38(&local_e1d8,&local_e178,0);
                    FUN_1446f82e2(&local_e188,local_e1d0,local_e1d8,1);
                    if (plVar24[2] == local_e188.QuadPart) {
                      *(undefined1 *)(plVar24 + 0x21) = *(undefined1 *)(local_e2b8.QuadPart + 0x6d);
                      *(undefined1 *)((longlong)plVar24 + 0x109) =
                           *(undefined1 *)(local_e2b8.QuadPart + 0x6e);
                      iVar28 = (int)plVar24[4];
                      iVar25 = (int)local_13c8 + iVar28;
                      if (-1 < iVar25) {
                        local_e2a0 = plVar5;
                        if ((int)local_13c8._4_4_ < iVar25) {
                          FUN_147000bf0(local_16f0);
                          iVar28 = (int)plVar24[4];
                        }
                        if (iVar28 != 0) {
                          lVar23 = plVar24[3];
                          lVar33 = (longlong)iVar28 * 0x70;
                          do {
                            uVar18 = FUN_14001cc68(0x70,0x10);
                            FUN_1400e7d28(uVar18,lVar23);
                            uVar26 = local_13c8;
                            lVar36 = (longlong)(int)local_13c8;
                            uVar35 = (int)local_13c8 + 1;
                            local_13c8 = CONCAT44(local_13c8._4_4_,uVar35);
                            if (local_13c8._4_4_ < uVar35) {
                              FUN_147000ce6(local_16f0,uVar26 & 0xffffffff);
                            }
                            puVar19 = local_13d0;
                            if (local_13d0 == (undefined1 *)0x0) {
                              puVar19 = local_16f0;
                            }
                            *(undefined8 *)(puVar19 + lVar36 * 8) = uVar18;
                            lVar23 = lVar23 + 0x70;
                            lVar33 = lVar33 + -0x70;
                          } while (lVar33 != 0);
                        }
                        uVar26 = local_1a28;
                        lVar23 = (longlong)(int)local_1a28;
                        uVar35 = (int)local_1a28 + 1;
                        local_1a28 = CONCAT44(local_1a28._4_4_,uVar35);
                        if (local_1a28._4_4_ < uVar35) {
                          FUN_147000d5e(&local_74d0,uVar26 & 0xffffffff);
                        }
                        local_e2ac = local_e2ac + 1;
                        pLVar20 = local_1a30;
                        if (local_1a30 == (LARGE_INTEGER *)0x0) {
                          pLVar20 = &local_74d0;
                        }
                        FUN_146ffd3b0(pLVar20 + lVar23 * 0x1d,local_e2a0);
                        FUN_142acbaea(local_e2b8.QuadPart,local_e1c8.QuadPart,plVar24);
                        goto LAB_142aca8af;
                      }
                      goto LAB_142acbadb;
                    }
                  }
                }
              }
LAB_142acabae:
              local_e178 = *pLVar22;
              iVar25 = pLVar22[1].s.LowPart - 1;
              if (pLVar22[1].s.LowPart == 0) {
                iVar25 = 0;
              }
              LStack_e170.s.LowPart = iVar25;
              FUN_140fede38(&local_e1f8,&local_e178,0);
              FUN_1446f82e2(&local_e188,local_e1f0,local_e1f8,1);
              LVar31 = local_e188;
              uVar26 = (ulonglong)uStack_e1a0;
              lVar23 = (longlong)(int)uStack_e1a0;
              uVar35 = (int)uStack_e1a0 + 1;
              uStack_e1a0 = (LARGE_INTEGER *)CONCAT44(uStack_e1a0._4_4_,uVar35);
              if (uStack_e1a0._4_4_ < uVar35) {
                FUN_142adb566(&local_e1a8,uVar26 & 0xffffffff);
              }
              pLVar20 = (LARGE_INTEGER *)(local_e1a8.QuadPart + lVar23 * 0x128);
              pLVar20->s = (_struct_19)local_e1c8;
              pLVar20[1] = LVar31;
              pLVar20[2].QuadPart = (LONGLONG)pLVar22;
              pLVar20[3].QuadPart = 0;
              pLVar20[4].QuadPart = 0;
              FUN_146ff79cc(pLVar20 + 5);
              pLVar20[0x22].QuadPart = 0;
              pLVar20[0x23].QuadPart = 0;
              *(undefined4 *)((longlong)pLVar20 + 0x11f) = 0;
            }
          }
LAB_142aca8af:
          pLVar22 = pLVar22 + 6;
        } while (pLVar22 != pLVar39);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c99d6b4) && (FUN_144b3d300(&DAT_14c99d6b4), DAT_14c99d6b4 == -1))
      {
        DAT_14c99d6b0 = (DAT_14c872bf0 ^ 1) * 8 + 2;
        _Init_thread_footer(&DAT_14c99d6b4);
      }
      param_1 = local_e2b8;
      local_e1c8.s = local_e2b8.s;
      pLStack_e1c0 = &local_e1a8;
      local_e178.QuadPart = 0;
      LStack_e170.QuadPart = LStack_e170.QuadPart & 0xffffffff00000000;
      local_e188.QuadPart = (LONGLONG)FUN_142adb6d0;
      local_e180 = &local_e1c8;
      local_e2d8 = &local_e178;
      local_e2e0 = DAT_14c99d6b0;
      FUN_1411ca36e(L"AssetDataGatherReadAssetFile",(ulonglong)uStack_e1a0 & 0xffffffff,3,
                    &local_e188);
      uVar26 = 0;
      iVar25 = 0;
      if ((longlong)(int)uStack_e1a0 != 0) {
        puVar34 = (undefined8 *)(local_e1a8.QuadPart + (longlong)(int)uStack_e1a0 * 0x128);
        iVar25 = 0;
        uVar26 = 0;
        LVar31 = local_e1a8;
        do {
          p_Var13 = local_e2c0;
          if (*(char *)(LVar31.QuadPart + 0x122) == '\0') {
            if (*(char *)(LVar31.QuadPart + 0x121) == '\x01') {
              FUN_146fe9486(&local_d5d8);
              if ((((local_e2c1 & 1) != 0) && ((int)local_cf90 == 0)) &&
                 (*(char *)(*(longlong *)(LVar31.QuadPart + 0x10) + 0x28) == '\x02')) {
                if ((longlong)*(int *)(LVar31.QuadPart + 0x20) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(int *)(*(longlong *)(*(longlong *)(LVar31.QuadPart + 0x18) + lVar23) +
                                0x3c) < 0) goto LAB_142acaea4;
                    lVar23 = lVar23 + 8;
                  } while ((longlong)*(int *)(LVar31.QuadPart + 0x20) * 8 != lVar23);
                }
                local_e294 = (uint)uVar26;
                local_e290 = iVar25;
                puVar21 = (undefined8 *)FUN_14001cc68(0x110,0x10);
                uVar18 = *(undefined8 *)(LVar31.QuadPart + 8);
                *puVar21 = *(undefined8 *)(*(longlong *)(LVar31.QuadPart + 0x10) + 0x20);
                puVar21[1] = *(undefined8 *)(param_1.QuadPart + 0x70);
                puVar21[2] = uVar18;
                puVar2 = puVar21 + 5;
                puVar21[3] = 0;
                puVar21[4] = 0;
                FUN_146ff79cc(puVar2);
                iVar25 = *(int *)(LVar31.QuadPart + 0x20);
                if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar25);
                }
                plVar24 = puVar21 + 3;
                local_e220 = puVar2;
                if (*(int *)((longlong)puVar21 + 0x24) < iVar25) {
                  FUN_147000e7a(plVar24);
                  iVar25 = *(int *)(LVar31.QuadPart + 0x20);
                }
                if (iVar25 != 0) {
                  local_e2a0 = *(longlong **)(LVar31.QuadPart + 0x18);
                  lVar23 = 0;
                  do {
                    uVar18 = *(undefined8 *)((longlong)local_e2a0 + lVar23);
                    iVar28 = *(int *)(puVar21 + 4);
                    *(uint *)(puVar21 + 4) = iVar28 + 1U;
                    if (*(uint *)((longlong)puVar21 + 0x24) < iVar28 + 1U) {
                      FUN_14171b750(plVar24,iVar28);
                    }
                    FUN_1400e7d28((longlong)iVar28 * 0x70 + *plVar24,uVar18);
                    lVar23 = lVar23 + 8;
                  } while ((longlong)iVar25 * 8 != lVar23);
                }
                FUN_146fe94fe(local_e220,(undefined8 *)(LVar31.QuadPart + 0x28));
                param_1 = local_e2b8;
                iVar25 = *(int *)(local_e2b8.QuadPart + 0x168);
                *(uint *)(local_e2b8.QuadPart + 0x168) = iVar25 + 1U;
                if (*(uint *)(local_e2b8.QuadPart + 0x16c) < iVar25 + 1U) {
                  FUN_147000ee8(local_e270,iVar25);
                }
                *(undefined8 **)(*(longlong *)(param_1.QuadPart + 0x160) + (longlong)iVar25 * 8) =
                     puVar21;
                FUN_142acbaea(param_1.QuadPart,*(undefined8 *)LVar31,puVar21);
                uVar26 = (ulonglong)local_e294;
                iVar25 = local_e290;
              }
LAB_142acaea4:
              FUN_146fe95a8(local_16f0,(undefined8 *)(LVar31.QuadPart + 0x18));
              uVar14 = local_1a28;
              lVar23 = (longlong)(int)local_1a28;
              uVar35 = (int)local_1a28 + 1;
              local_1a28 = CONCAT44(local_1a28._4_4_,uVar35);
              if (local_1a28._4_4_ < uVar35) {
                FUN_147000d5e(&local_74d0,uVar14 & 0xffffffff);
              }
              iVar25 = iVar25 + 1;
              pLVar22 = local_1a30;
              if (local_1a30 == (LARGE_INTEGER *)0x0) {
                pLVar22 = &local_74d0;
              }
              FUN_146ff8996(pLVar22 + lVar23 * 0x1d,(undefined8 *)(LVar31.QuadPart + 0x28));
            }
            else if (*(char *)(LVar31.QuadPart + 0x120) == '\x01') {
              EnterCriticalSection(local_e2c0);
              lVar23 = *(longlong *)(param_1.QuadPart + 0x98);
              uVar18 = *(undefined8 *)(LVar31.QuadPart + 0x10);
              FUN_147002812(lVar23 + 0x48);
              uVar35 = *(uint *)(lVar23 + 0x58);
              *(uint *)(lVar23 + 0x58) = uVar35 + 1;
              FUN_147002858((ulonglong)(uVar35 & *(uint *)(lVar23 + 0x50)) * 0x30 +
                            *(longlong *)(lVar23 + 0x48),uVar18);
              LeaveCriticalSection(p_Var13);
            }
          }
          else {
            uVar26 = CONCAT71((int7)(uVar26 >> 8),1);
          }
          LVar31.QuadPart = LVar31.QuadPart + 0x128;
        } while ((undefined8 *)LVar31.QuadPart != puVar34);
      }
      EnterCriticalSection(local_e2c0);
      FUN_146fe961e(local_e240,local_16f0);
      FUN_146fe961e(local_e248,local_1a20);
      FUN_146fe9694(local_e280,&local_74d0);
      FUN_146fe9694(local_e250,&local_cf80);
      FUN_146fe9708(local_e258,&local_d5d8);
      FUN_146fe977c(local_e260,local_d908);
      FUN_146fe9708(local_e268,local_df58);
      pcVar40 = local_e288;
      iVar25 = iVar25 + *(int *)(param_1.QuadPart + 0x150);
      *(int *)(param_1.QuadPart + 0x150) = iVar25;
      *(int *)(param_1.QuadPart + 0x14c) = *(int *)(param_1.QuadPart + 0x14c) + local_e2ac;
      if ((uVar26 & 1) != 0) {
        lVar23 = (longlong)(int)uStack_e1a0;
        if (0 < lVar23) {
          uVar26 = lVar23 + 1;
          lVar23 = lVar23 * 0x128 + -6;
          do {
            if (*(char *)(local_e1a8.QuadPart + lVar23) == '\x01') {
              lVar33 = *(longlong *)(param_1.QuadPart + 0x98);
              uVar18 = *(undefined8 *)(local_e1a8.QuadPart + lVar23 + -0x112);
              piVar1 = (int *)(lVar33 + 0x60);
              *piVar1 = *piVar1 + 1;
              FUN_146fec04e(lVar33 + 0x30,uVar18);
              if (-1 < local_e28c) {
                iVar25 = *(int *)(param_1.QuadPart + 0x220);
                if (iVar25 < 1) {
                  iVar25 = 0;
                }
                *(int *)(param_1.QuadPart + 0x220) = iVar25 + 1;
              }
            }
            uVar26 = uVar26 - 1;
            lVar23 = lVar23 + -0x128;
          } while (1 < uVar26);
          iVar25 = *(int *)(param_1.QuadPart + 0x150);
        }
      }
      param_2 = local_e2c9;
      iVar28 = *(int *)(param_1.QuadPart + 0x224);
      if ((((*(byte *)(param_1.QuadPart + 0x92) & 1) != 0) &&
          (*(char *)(param_1.QuadPart + 0x22d) == '\0')) &&
         ((QueryPerformanceCounter(&local_e178),
          30.0 <= ((double)local_e178.QuadPart * DAT_14c83f420 + 16777216.0) - dVar6 &&
          (99999 < iVar25 - iVar28)))) {
        LOCK();
        *(undefined1 *)(param_1.QuadPart + 0x90) = 1;
        UNLOCK();
        local_e2c8 = 3;
      }
      LeaveCriticalSection(local_e2c0);
      FUN_142adb508(local_e1a8.QuadPart,(ulonglong)uStack_e1a0 & 0xffffffff);
      if ((undefined8 *)local_e1a8.QuadPart != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_146fe97f0(local_df58);
    if (local_d5e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_146fe97f0(&local_d5d8);
    FUN_146fe982e(&local_cf80);
    FUN_146fe982e(&local_74d0);
    FUN_146fe986c(local_1a20);
    FUN_146fe986c(local_16f0);
    FUN_146fe98aa(&local_13c0);
    if (((0.0 < param_3) &&
        (QueryPerformanceCounter(&local_74d0),
        param_3 < (double)local_74d0.QuadPart * DAT_14c83f420 + 16777216.0)) ||
       (*(int *)(param_1.QuadPart + 0x78) != 0)) {
LAB_142acb325:
      if (0.0 <= dVar9) {
        QueryPerformanceCounter(&local_74d0);
        *(double *)(param_1.QuadPart + 0x138) =
             (((double)local_74d0.QuadPart * DAT_14c83f420 + 16777216.0) - dVar9) +
             *(double *)(param_1.QuadPart + 0x138);
      }
      if ((local_e2c2 != '\0') &&
         (FUN_146fe8ef2(param_1.QuadPart,&local_e1f9,&local_e218), local_e1f9 == 1)) {
        *(int *)(param_1.QuadPart + 0x228) = *(int *)(param_1.QuadPart + 0x228) + 1;
      }
      bVar32 = local_e1f9;
      *(undefined1 *)(param_1.QuadPart + 0x22c) = local_e2ca;
      LeaveCriticalSection(local_e2a8);
      p_Var13 = local_e2c0;
      if ((bVar32 & 1) != 0) {
        EnterCriticalSection(local_e2c0);
        LeaveCriticalSection(p_Var13);
        QueryPerformanceCounter(&local_74d0);
        dVar9 = (double)local_74d0.QuadPart * DAT_14c83f420 + 16777216.0;
        dVar45 = *(double *)(param_1.QuadPart + 0x140) + 0.5;
        if (dVar9 < dVar45) {
          FUN_14000f986((float)(dVar45 - dVar9));
        }
        iVar28 = FUN_140e55850();
        iVar25 = ((int)uStack_e210 + 249999) / 250000;
        if (iVar28 <= iVar25) {
          iVar25 = iVar28;
        }
        uVar26 = (ulonglong)(iVar25 + -1 + (uint)(iVar25 == 0)) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar35 = 1 << ((byte)lVar23 & 0x1f);
        local_df58[0] = 0;
        local_d5d8 = (void *)0x0;
        uStack_d5d0 = (ulonglong)uVar35;
        FUN_147000462(&local_d5d8);
        memset(local_d5d8,0,(longlong)(int)uVar35 << 4);
        if ((longlong)(int)uStack_d5d0 != 0) {
          lVar23 = (longlong)(int)uStack_d5d0 << 4;
          pvVar30 = local_d5d8;
          do {
            uVar26 = (longlong)(int)uStack_e210 / (longlong)(int)uVar35;
            if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar26 & 0xffffffff,
                            (longlong)(int)uStack_e210 % (longlong)(int)uVar35 & 0xffffffff);
            }
            if (*(int *)((longlong)pvVar30 + 0xc) < (int)uVar26) {
              FUN_1470004e0(pvVar30,uVar26 & 0xffffffff);
            }
            pvVar30 = (void *)((longlong)pvVar30 + 0x10);
            lVar23 = lVar23 + -0x10;
          } while (lVar23 != 0);
        }
        local_74d0.QuadPart = (LONGLONG)local_74b0;
        local_74b8 = (void **)((ulonglong)local_74b8 & 0xffffffffffffff00);
        local_74c0 = (undefined8 *)local_72b0;
        if ((longlong)(int)uStack_e210 != 0) {
          puVar41 = local_e218 + (longlong)(int)uStack_e210 * 4;
          puVar38 = local_e218;
          do {
            local_74c8.s = local_74d0.s;
            FUN_14005eb5c(puVar38,&local_74d0);
            iVar25 = (int)((ulonglong)(local_74c8.QuadPart - (longlong)local_74d0) >> 1);
            if (0 < iVar25) {
              lVar23 = 0;
              do {
                uVar7 = *(ushort *)(local_74d0.QuadPart + lVar23 * 2);
                *(ushort *)(local_74d0.QuadPart + lVar23 * 2) =
                     (ushort)(uVar7 - 0x41 < 0x1a) * 0x20 + uVar7;
                lVar23 = lVar23 + 1;
                iVar25 = (int)((ulonglong)(local_74c8.QuadPart - (longlong)local_74d0) >> 1);
              } while (lVar23 < iVar25);
            }
            uVar16 = FUN_1447addd0(local_74d0.QuadPart,iVar25 * 2);
            lVar23 = (longlong)(int)(uVar16 & uVar35 - 1) * 0x10;
            plVar24 = (longlong *)((longlong)local_d5d8 + lVar23);
            iVar25 = *(int *)((longlong)local_d5d8 + lVar23 + 8);
            *(uint *)((longlong)local_d5d8 + lVar23 + 8) = iVar25 + 1U;
            if (*(uint *)((longlong)local_d5d8 + lVar23 + 0xc) < iVar25 + 1U) {
              FUN_147000540(plVar24,iVar25);
            }
            param_1 = local_e2b8;
            uVar10 = puVar38[1];
            uVar11 = puVar38[2];
            uVar12 = puVar38[3];
            puVar3 = (undefined4 *)(*plVar24 + (longlong)iVar25 * 0x10);
            *puVar3 = *puVar38;
            puVar3[1] = uVar10;
            puVar3[2] = uVar11;
            puVar3[3] = uVar12;
            puVar38 = puVar38 + 4;
          } while (puVar38 != puVar41);
          if (((ulonglong)local_74b8 & 1) != 0) {
            FUN_1400020a8(local_74d0.QuadPart);
          }
        }
        local_e2d8 = &local_cf80;
        local_74c8.QuadPart = (LONGLONG)&local_e218;
        local_74c0 = local_df58;
        local_cf80.QuadPart = 0;
        local_cf78 = 0;
        local_13c0.QuadPart = (LONGLONG)FUN_142adb07e;
        local_13b8 = &local_74d0;
        local_e2e0 = 8;
        local_74d0 = param_1;
        local_74b8 = &local_d5d8;
        local_74b0[0] = uVar35 - 1;
        FUN_1401f8d10(L"ParallelFor Task",uVar35,1);
        plVar24 = (longlong *)FUN_14054d1d4();
        pvVar30 = DAT_14c99d680;
        lVar23 = (longlong)DAT_14c99d688;
        local_74d0.QuadPart = 0;
        local_74c8.s.LowPart = DAT_14c99d688;
        FUN_1446dd670(&local_74d0,DAT_14c99d688 + (uint)(lVar23 == 0) + 4,0);
        if (lVar23 != 0) {
          memcpy((void *)local_74d0,pvVar30,lVar23 * 2);
        }
        FUN_1400020e8(&local_74d0,L".bin",4);
        LVar31 = local_74d0;
        if (local_74c8._0_4_ == 0) {
          LVar31.QuadPart = (LONGLONG)&DAT_149dfb77a;
        }
        local_e2e8 = CONCAT71(local_e2e8._1_7_,1);
        (**(code **)(*plVar24 + 0x30))(plVar24,LVar31.QuadPart,0,1);
        if ((undefined2 *)local_74d0.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar24 = (longlong *)FUN_14054d1d4();
        pvVar30 = DAT_14c99d690;
        lVar23 = (longlong)DAT_14c99d698;
        local_74d0.QuadPart = 0;
        local_74c8.s.LowPart = DAT_14c99d698;
        FUN_1446dd670(&local_74d0,(uint)(lVar23 == 0) + DAT_14c99d698 + 0x13,0);
        if (lVar23 != 0) {
          memcpy((void *)local_74d0,pvVar30,lVar23 * 2);
        }
        FUN_1401aebe8(&local_74d0,L"AssetRegistryCache",0x12);
        LVar31 = local_74d0;
        if (local_74c8._0_4_ == 0) {
          LVar31.QuadPart = (LONGLONG)&DAT_149dfb77a;
        }
        (**(code **)(*plVar24 + 0x60))(plVar24,LVar31.QuadPart,0,1);
        if ((undefined8 *)local_74d0.QuadPart != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_146fe3b5a(&local_74d0);
        if ((longlong)(int)local_74c8._0_4_ != 0) {
          puVar34 = (undefined8 *)((longlong)(int)local_74c8._0_4_ * 0x10 + local_74d0.QuadPart);
          LVar31 = local_74d0;
          do {
                    /* WARNING: Load size is inaccurate */
            local_13c0.s = *LVar31.s;
            iVar25 = *(int *)(LVar31.QuadPart + 8) + -1;
            if (*(int *)(LVar31.QuadPart + 8) == 0) {
              iVar25 = 0;
            }
            local_13b8 = (LARGE_INTEGER *)CONCAT44(local_13b8._4_4_,iVar25);
            FUN_140feddc0(&local_cf80,&local_13c0);
            if ((longlong)local_cf78 != 0) {
              uVar26 = (longlong)local_cf78 * 2;
              do {
                LVar4.QuadPart = (longlong)(local_cf80.QuadPart + -2) + uVar26;
                if ((ulonglong)LVar4 < (ulonglong)local_cf80) goto LAB_142acba2a;
                uVar26 = uVar26 - 2;
              } while (*(short *)LVar4 != 0x5f);
              iVar25 = (int)(uVar26 >> 1);
              if (iVar25 != -1) {
                uVar16 = iVar25 + 1;
                uVar37 = (int)uVar16 >> 0x1f & uVar16;
                iVar25 = uVar16 - uVar37;
                iVar28 = uVar37 + 0x7fffffff;
                if (local_cf78 <= iVar25) {
                  iVar25 = local_cf78;
                }
                iVar17 = local_cf78 - iVar25;
                if (iVar28 < local_cf78 - iVar25) {
                  iVar17 = iVar28;
                }
                local_cf78 = iVar17;
                if (iVar17 < 1) {
                  local_cf78 = 0;
                }
                local_cf80.QuadPart = local_cf80.QuadPart + (longlong)iVar25 * 2;
                local_13c0.QuadPart = local_13c0.QuadPart & 0xffffffff00000000;
                FUN_14682b82a(&local_13c0,&local_cf80);
                if ((int)uVar35 <= (int)local_13c0.s.LowPart) {
                  plVar24 = (longlong *)FUN_14054d1d4();
                  puVar27 = &DAT_149dfb77a;
                  if (*(int *)(LVar31.QuadPart + 8) != 0) {
                    puVar27 = *(undefined2 **)LVar31;
                  }
                  local_e2e8 = local_e2e8 & 0xffffffffffffff00;
                  (**(code **)(*plVar24 + 0x30))(plVar24,puVar27,0,0);
                }
              }
            }
LAB_142acba2a:
            LVar31.QuadPart = LVar31.QuadPart + 0x10;
          } while ((undefined8 *)LVar31.QuadPart != puVar34);
        }
        p_Var13 = local_e2a8;
        if (*(longlong *)(param_1.QuadPart + 0x60) != 0) {
          LOCK();
          *(int *)(param_1.QuadPart + 0x7c) = *(int *)(param_1.QuadPart + 0x7c) + 1;
          UNLOCK();
        }
        EnterCriticalSection(local_e2a8);
        lpCriticalSection = local_e2c0;
        *(undefined1 *)(param_1.QuadPart + 0x22d) = 0;
        *(int *)(param_1.QuadPart + 0x228) = *(int *)(param_1.QuadPart + 0x228) + -1;
        EnterCriticalSection(local_e2c0);
        QueryPerformanceCounter(&local_cf80);
        *(double *)(param_1.QuadPart + 0x140) =
             (double)local_cf80.QuadPart * DAT_14c83f420 + 16777216.0;
        LeaveCriticalSection(lpCriticalSection);
        LeaveCriticalSection(p_Var13);
        if (*(longlong *)(param_1.QuadPart + 0x60) != 0) {
          LOCK();
          *(int *)(param_1.QuadPart + 0x7c) = *(int *)(param_1.QuadPart + 0x7c) + -1;
          UNLOCK();
        }
        FUN_1447a1747(local_74d0.QuadPart,(ulonglong)local_74c8 & 0xffffffff);
        if ((undefined8 *)local_74d0.QuadPart != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_147000436(local_d5d8,uStack_d5d0 & 0xffffffff);
        if (local_d5d8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_e218 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_f0 ^ (ulonglong)auStack_e308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if (param_2 == '\0') {
      if ((1 < local_e2c8) || (*(int *)(param_1.QuadPart + 0x7c) != 0)) goto LAB_142acb325;
    }
    else if (1 < local_e2c8) goto LAB_142acb325;
    QueryPerformanceCounter(&local_74d0);
    if (local_e2c8 != 0) {
      bVar32 = local_e2cb & 1;
      local_e2cb = 1;
      if (bVar32 != 0) {
        dVar45 = (double)local_74d0.QuadPart * DAT_14c83f420 + 16777216.0;
        fVar42 = 0.005;
        if (0.0 < param_3) {
          fVar43 = (float)(param_3 - dVar45);
          fVar42 = 0.005;
          if ((fVar43 <= 0.005) && (local_e2cb = 1, fVar42 = fVar43, fVar43 <= 0.0))
          goto LAB_142ac9f7f;
        }
        local_e2cb = 1;
        if (0.0 <= dVar9) {
          *(double *)(param_1.QuadPart + 0x138) =
               (dVar45 - dVar9) + *(double *)(param_1.QuadPart + 0x138);
        }
        FUN_14000f986(fVar42);
        QueryPerformanceCounter(&local_74d0);
        dVar9 = (double)local_74d0.QuadPart * DAT_14c83f420 + 16777216.0;
        local_e2cb = 1;
      }
      goto LAB_142ac9f7f;
    }
    dVar44 = (double)local_74d0.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar6 = dVar44;
    if ((local_e2cb & 1) == 0) {
      dVar6 = dVar45;
    }
    dVar45 = dVar6;
    local_e2cb = 0.005 < (float)(dVar44 - dVar45);
  } while( true );
code_r0x000142aca996:
  iVar25 = (int)plVar24[2];
  if (iVar25 == -1) goto LAB_142acabae;
  goto LAB_142aca986;
}



// FUNCTION 142acbaea FUN_142acbaea body=141 status=ok
// SIG undefined FUN_142acbaea(void)

void FUN_142acbaea(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  uVar3 = (uint)param_2 & 0xffff;
  local_20 = param_3;
  local_18 = param_2;
  plVar2 = (longlong *)
           FUN_147000ff4(param_1 + 0x1d0,
                         (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4),&local_18,&local_20);
  if (*plVar2 != local_20) {
    *plVar2 = local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142acbb78 FUN_142acbb78 body=76 status=ok
// SIG undefined FUN_142acbb78(void)

void FUN_142acbb78(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  FUN_146ffac06(param_1,*param_2,*(undefined4 *)(param_2 + 1));
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
    return;
  }
  return;
}



// FUNCTION 142acbbc4 FUN_142acbbc4 body=272 status=ok
// SIG undefined FUN_142acbbc4(void)

void FUN_142acbbc4(longlong param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    LOCK();
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  EnterCriticalSection(lpCriticalSection);
  local_68 = param_1 + 0x148;
  FUN_142ac7508(*(undefined8 *)(param_1 + 0x88),param_1 + 0x155,param_1 + 0x128,
                *(undefined8 *)(param_1 + 0x98));
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fea804(param_1,&local_58,0,&local_44);
  *(undefined4 *)(param_1 + 0x220) = local_44;
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  do {
    FUN_142ac9d76(param_1,1,0);
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(param_1 + 0x220);
    LeaveCriticalSection(lpCriticalSection);
  } while (-1 < iVar1);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    LOCK();
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142acbcd6 FUN_142acbcd6 body=441 status=ok
// SIG undefined FUN_142acbcd6(void)

void FUN_142acbcd6(longlong param_1,float param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
  EnterCriticalSection(lpCriticalSection);
  cVar1 = *(char *)(param_1 + 0x157);
  LeaveCriticalSection(lpCriticalSection);
  if (cVar1 == '\0') {
    if (0.0 <= param_2) {
      QueryPerformanceCounter(&local_78);
      dVar2 = (double)param_2 + (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    else {
      dVar2 = -1.0;
    }
    if (((*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xd0) != 0) ||
        (FUN_146fe75e2(*(longlong *)(param_1 + 0x88),dVar2), dVar2 <= 0.0)) ||
       (QueryPerformanceCounter(&local_78),
       (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0 <= dVar2)) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        LOCK();
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        UNLOCK();
      }
      do {
        FUN_142ac9d76(param_1,1,dVar2);
        if ((0.0 < dVar2) &&
           (QueryPerformanceCounter(&local_78),
           dVar2 < (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0)) break;
        EnterCriticalSection(lpCriticalSection);
        cVar1 = *(char *)(param_1 + 0x157);
        LeaveCriticalSection(lpCriticalSection);
      } while (cVar1 != '\x01');
      if (*(longlong *)(param_1 + 0x60) != 0) {
        LOCK();
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142acbe90 FUN_142acbe90 body=85 status=ok
// SIG undefined FUN_142acbe90(void)

longlong FUN_142acbe90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)*(int *)((longlong)param_1 + 0xc) << 4;
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    do {
      lVar1 = lVar1 + (longlong)*(int *)(*param_1 + 0xc + lVar2) * 2;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] << 4 != lVar2);
  }
  FUN_1447a1747();
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return lVar1;
}



// FUNCTION 142acbee6 FUN_142acbee6 body=1171 status=ok
// SIG undefined FUN_142acbee6(void)

undefined8 * FUN_142acbee6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined8 **local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  ulonglong uStack_d0;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    local_f8 = 0;
    uStack_f0 = 0;
    local_58 = 0;
    local_50 = 0x1000000000;
    FUN_146fecedc(&local_f8,&local_d8);
    uStack_e0 = &local_108;
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    local_e8 = FUN_142adcf16;
    local_120 = 0;
    local_118 = &local_d8;
    local_110 = param_1;
    local_108 = param_1;
    local_100 = &local_f8;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec),1);
    if (0 < (int)uStack_f0) {
      lVar1 = local_110 + 8;
      lVar14 = 0;
      do {
        lVar12 = local_f8;
        lVar11 = lVar14 * 0x90;
        puVar13 = (undefined8 *)(local_f8 + lVar11);
        puVar4 = *(undefined8 **)(local_f8 + 0x80 + lVar11);
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = puVar13;
        }
        plVar5 = (longlong *)FUN_142acc37a(lVar1,*puVar4);
        if (2 < *(int *)(lVar12 + 0x88 + lVar11)) {
          lVar12 = 1;
          do {
            puVar4 = (undefined8 *)puVar13[0x10];
            if ((undefined8 *)puVar13[0x10] == (undefined8 *)0x0) {
              puVar4 = puVar13;
            }
            plVar5 = (longlong *)FUN_142acc37a(*plVar5 + 8,puVar4[lVar12]);
            lVar12 = lVar12 + 1;
          } while (lVar12 < (longlong)*(int *)(puVar13 + 0x11) + -1);
        }
        FUN_147003588(*plVar5 + 0x60,&local_d8,lVar14 * 0x10 + *(longlong *)(param_1 + 0xb8));
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)uStack_f0);
    }
    FUN_1449ad616((longlong *)(param_1 + 0xb8));
    FUN_1470033a3(local_f8,uStack_f0 & 0xffffffff);
    param_1 = local_110;
    if (local_f8 != 0) {
      FUN_1400020a8();
      param_1 = local_110;
    }
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (*(int *)(param_3 + 8) < 2) goto LAB_142acc329;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  FUN_1403de9f2(param_3,&local_d8,&DAT_149e065c6,1);
  if (2 < (int)uStack_d0) {
    local_e8 = (code *)0x0;
    uStack_e0 = (longlong *)0x0;
    local_110 = param_1;
    FUN_1402191ca();
    if ((longlong)(int)uStack_d0 != 0) {
      puVar4 = local_d8 + (longlong)(int)uStack_d0 * 2;
      puVar13 = local_d8;
      do {
        iVar3 = *(int *)(puVar13 + 1) + -1;
        if (*(int *)(puVar13 + 1) == 0) {
          iVar3 = 0;
        }
        FUN_1446f82e2(&local_f8,iVar3,*puVar13,1);
        plVar5 = uStack_e0;
        lVar1 = local_f8;
        lVar14 = (longlong)(int)uStack_e0;
        uVar2 = (int)uStack_e0 + 1;
        uStack_e0 = (longlong *)CONCAT44(uStack_e0._4_4_,uVar2);
        if (uStack_e0._4_4_ < uVar2) {
          FUN_1446f84a2(&local_e8,(ulonglong)plVar5 & 0xffffffff);
        }
        *(longlong *)(local_e8 + lVar14 * 8) = lVar1;
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar4);
    }
    if (*(int *)(local_110 + 0x20) != *(int *)(local_110 + 0x44)) {
      lVar1 = *(longlong *)local_e8;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar9 = (uint)lVar1 & 0xffff;
      lVar14 = local_110 + 0x48;
      if (*(longlong *)(local_110 + 0x50) != 0) {
        lVar14 = *(longlong *)(local_110 + 0x50);
      }
      iVar3 = *(int *)(lVar14 + (ulonglong)
                                (*(int *)(local_110 + 0x58) - 1U &
                                (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar3 != -1) {
        plVar8 = (longlong *)(local_110 + 8);
        plVar5 = *(longlong **)(local_110 + 0x18);
        if (*(longlong **)(local_110 + 0x18) == (longlong *)0x0) {
          plVar5 = plVar8;
        }
        do {
          plVar7 = plVar5 + (longlong)iVar3 * 2;
          plVar6 = (longlong *)plVar5[(longlong)iVar3 * 2];
          if (*plVar6 == lVar1) {
            bVar15 = plVar7 != (longlong *)0x0;
            if (plVar7 == (longlong *)0x0 || (longlong)(int)uStack_e0 < 2) goto LAB_142acc2fd;
            uVar10 = 1;
            goto LAB_142acc24d;
          }
          iVar3 = (int)plVar7[1];
        } while (iVar3 != -1);
      }
    }
    goto LAB_142acc302;
  }
  goto LAB_142acc310;
  while( true ) {
    lVar1 = *(longlong *)(local_e8 + uVar10 * 8);
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar9 = (uint)lVar1 & 0xffff;
    plVar5 = plVar6 + 9;
    if ((longlong *)plVar6[10] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar6[10];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar6[0xb] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar3 == -1) goto LAB_142acc302;
    plVar8 = plVar6 + 1;
    plVar5 = (longlong *)plVar6[3];
    if ((longlong *)plVar6[3] == (longlong *)0x0) {
      plVar5 = plVar8;
    }
    while( true ) {
      plVar7 = plVar5 + (longlong)iVar3 * 2;
      plVar6 = (longlong *)plVar5[(longlong)iVar3 * 2];
      if (*plVar6 == lVar1) break;
      iVar3 = (int)plVar7[1];
      if (iVar3 == -1) goto LAB_142acc302;
    }
    uVar10 = uVar10 + 1;
    bVar15 = plVar7 != (longlong *)0x0;
    if (((ulonglong)(longlong)(int)uStack_e0 <= uVar10) || (plVar7 == (longlong *)0x0)) break;
LAB_142acc24d:
    if ((int)plVar6[4] == *(int *)((longlong)plVar6 + 0x44)) goto LAB_142acc302;
  }
LAB_142acc2fd:
  if (bVar15) {
    FUN_146fecb4c(plVar6,param_2);
    FUN_146fecc64(plVar8,*(undefined8 *)*plVar7);
  }
LAB_142acc302:
  if (local_e8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_142acc310:
  FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142acc329:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142acc37a FUN_142acc37a body=294 status=ok
// SIG undefined FUN_142acc37a(void)

longlong FUN_142acc37a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = param_1;
      }
      do {
        lVar5 = lVar2 + (longlong)iVar4 * 0x10;
        if (**(longlong **)(lVar2 + (longlong)iVar4 * 0x10) == param_2) {
          if (lVar5 != 0) goto LAB_142acc46b;
          break;
        }
        iVar4 = *(int *)(lVar5 + 8);
      } while (iVar4 != -1);
    }
  }
  lVar2 = FUN_14001cc68(0x108,0x10);
  FUN_146ffbc38(lVar2,param_2);
  local_38 = lVar2;
  FUN_146ffb59e(param_1,&local_2c,&local_38);
  lVar2 = local_38;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = param_1;
  }
  if (local_38 != 0) {
    FUN_145c17a80(local_38);
    FUN_1400020a8(lVar2);
  }
  lVar5 = lVar5 + (longlong)local_2c * 0x10;
LAB_142acc46b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 142acc4a2 FUN_142acc4a2 body=200 status=ok
// SIG undefined FUN_142acc4a2(void)

void FUN_142acc4a2(longlong param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined7 uStack_38;
  undefined4 uStack_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_2 + 0x2b) & 2) == 0) {
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    uStack_31 = 0;
    LOCK();
    *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
    UNLOCK();
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
    LOCK();
    *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
    UNLOCK();
    FUN_146ff729a(param_1 + 0x30,param_2,local_98);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
    FUN_140fdd62a(param_1,local_98,0);
    FUN_140cb5138(local_98);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142acc570 FUN_142acc570 body=69 status=ok
// SIG undefined FUN_142acc570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142acc570(void)

{
  _DAT_14c99d8c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142acc5b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d8c8,1);
  return;
}



// FUNCTION 142acc5b5 FUN_142acc5b5 body=69 status=ok
// SIG undefined FUN_142acc5b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142acc5b5(void)

{
  _DAT_14c99d8d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142acc5f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d8d8,1);
  return;
}



// FUNCTION 142acc5fa FUN_142acc5fa body=69 status=ok
// SIG undefined FUN_142acc5fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142acc5fa(void)

{
  _DAT_14c99d8e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142acc63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d8f0,1);
  return;
}



// FUNCTION 142acc63f FUN_142acc63f body=69 status=ok
// SIG undefined FUN_142acc63f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142acc63f(void)

{
  _DAT_14c99d8f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142acc681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d900,1);
  return;
}



// FUNCTION 142acc68a FUN_142acc68a body=846 status=ok
// SIG undefined FUN_142acc68a(void)

void FUN_142acc68a(longlong param_1,void **param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_1d8 [32];
  void **local_1b8;
  undefined8 local_1b0;
  void **local_1a8;
  longlong lStack_1a0;
  undefined2 local_198;
  void *local_188;
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_188 = (void *)0x0;
  uStack_180 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar3 = (ulonglong)(iVar1 - 1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  _Src = *param_2;
  if (0 < (int)uVar3) {
    iVar2 = wcscmp((wchar_t *)((longlong)_Src + uVar3 * 2 + -2),L"/");
    if (iVar2 == 0) {
      if ((&local_188 != param_2) && (uStack_180 = CONCAT44(uStack_180._4_4_,iVar1), iVar1 != 0)) {
        FUN_1446dd670(&local_188,iVar1,0);
        memcpy(local_188,_Src,(longlong)iVar1 * 2);
      }
      goto LAB_142acc79f;
    }
  }
  local_178 = (void *)0x0;
  uStack_170 = CONCAT44(uStack_170._4_4_,iVar1);
  FUN_1446dd670(&local_178,(uint)(iVar1 == 0) + iVar1 + 1,0);
  if (iVar1 != 0) {
    memcpy(local_178,_Src,(longlong)iVar1 * 2);
  }
  FUN_1400020e8(&local_178,&DAT_149e065c6,1);
  local_188 = local_178;
  uStack_180 = uStack_170;
LAB_142acc79f:
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  bVar6 = false;
  uStack_59 = 0;
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  local_1a8 = (void **)0x0;
  lStack_1a0 = 0;
  local_198 = 0;
  local_158 = 0;
  local_150 = 0;
  local_178 = (void *)0x0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffffffffffff;
  local_d0 = 1;
  lVar4 = FUN_140be8873();
  lVar5 = FUN_140be88df();
  lStack_1a0 = param_1 + 0x30;
  if (*(char *)(param_1 + 0x838) == '\x01') {
    local_1a8 = (void **)(param_1 + 0x840);
    if (*(char *)(param_1 + 0x8e8) == '\0') {
      bVar6 = *(longlong *)(param_1 + 0x8e0) == lVar5;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    local_1a8 = &local_178;
  }
  local_198 = CONCAT11(*(longlong *)(param_1 + 0x8f0) == lVar4,bVar6);
  local_1b8 = &local_188;
  local_1b0 = param_3;
  FUN_146ff935a(lStack_1a0,local_c0,&local_1a8,param_2);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(&local_128);
  local_130 = 0;
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(&local_178);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  FUN_140fdd62a(param_1,local_c0,0);
  FUN_140cb5138(local_c0);
  if (local_188 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142acc9da FUN_142acc9da body=385 status=ok
// SIG undefined FUN_142acc9da(void)

void FUN_142acc9da(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str1;
  int iVar4;
  uint uVar5;
  undefined1 auStack_e8 [40];
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_b8;
  pvVar1 = (void *)*param_2;
  if (lVar3 == 0) {
    local_b4 = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar1,lVar3 * 2);
    iVar4 = local_b8;
  }
  pvVar1 = local_c0;
  uVar5 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    _Str1 = (wchar_t *)((longlong)local_c0 + (ulonglong)uVar5 * 2 + -2);
    iVar2 = wcscmp(_Str1,L"/");
    if (iVar2 == 0) {
      if (iVar4 - uVar5 != 0) {
        memmove(_Str1,(void *)((longlong)pvVar1 + (ulonglong)uVar5 * 2),
                (longlong)(int)(iVar4 - uVar5) * 2);
        iVar4 = local_b8;
      }
      local_b8 = iVar4 + -1;
    }
  }
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_49 = 0;
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  FUN_146ff95e8(param_1 + 0x30,local_b0,&local_c0,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  FUN_140fdd62a(param_1,local_b0,0);
  FUN_140cb5138(local_b0);
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142accb5c FUN_142accb5c body=1603 status=ok
// SIG undefined FUN_142accb5c(void)

/* WARNING: Removing unreachable block (ram,0x000142accdf9) */
/* WARNING: Removing unreachable block (ram,0x000142acd0a3) */
/* WARNING: Removing unreachable block (ram,0x000142acd122) */

longlong *
FUN_142accb5c(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
             longlong *param_5,byte param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *local_130;
  undefined1 *local_128;
  undefined8 local_120;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  void *local_f8;
  void *local_f0;
  int local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined1 local_cc [12];
  void *local_c0;
  int local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulonglong uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  param_1[0xc] = (longlong)param_7;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(byte *)((longlong)param_1 + 0x6c) = param_6 & 1;
  *(byte *)((longlong)param_1 + 0x6d) = param_6 >> 1 & 1;
  *(byte *)((longlong)param_1 + 0x6e) = param_6 >> 3 & 1;
  *(undefined1 *)((longlong)param_1 + 0x6f) = 0;
  if (param_7 != (undefined8 *)0x0) {
    FUN_140861e20(*param_7,*(undefined4 *)(param_7 + 1));
    *(undefined4 *)(param_7 + 1) = 0;
    if (*(int *)((longlong)param_7 + 0xc) != 0) {
      FUN_1403539de(param_7,0);
    }
  }
  if ((*(char *)((longlong)param_1 + 0x6d) == '\x01') &&
     (*(char *)((longlong)param_1 + 0x6c) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  }
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  iVar7 = (int)param_5[1];
  if (-1 < iVar7) {
    plVar9 = param_1 + 6;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar7) {
      FUN_1408be2c4(plVar9);
      iVar7 = (int)param_5[1];
      if (iVar7 < 0) goto LAB_142acd198;
    }
    local_110 = param_1 + 4;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar7) {
      FUN_1408be2c4();
      iVar7 = (int)param_5[1];
    }
    if (iVar7 != 0) {
      lVar2 = *param_5;
      lVar12 = 0;
      do {
        iVar6 = *(int *)(lVar2 + 8 + lVar12);
        if (1 < iVar6) {
          local_b0 = *(undefined8 *)(lVar2 + lVar12);
          local_a8 = iVar6 + -1;
          local_120 = 0;
          local_128 = local_9c;
          local_130 = &local_98;
          local_138 = 0;
          cVar4 = FUN_1468708fe(&local_b0,&local_78,&local_88,0);
          if (cVar4 != '\0') {
            local_c0 = local_88;
            local_b8 = (int)uStack_80 + -1;
            if ((int)uStack_80 == 0) {
              local_b8 = 0;
            }
            cVar4 = FUN_1468728ae(&local_c0);
            if (cVar4 == '\0') {
              if ((int)uStack_90 < 2) {
                plVar5 = (longlong *)FUN_14054d1d4();
                puVar8 = &DAT_149dfb77a;
                if ((int)uStack_70 != 0) {
                  puVar8 = local_78;
                }
                cVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,puVar8);
                if (cVar4 == '\0') {
                  iVar6 = (int)uStack_70 + -1;
                  if ((int)uStack_70 == 0) {
                    iVar6 = 0;
                  }
                  local_60 = local_78;
                  local_58 = CONCAT44(local_58._4_4_,iVar6);
                  FUN_1427b94de(local_cc,&local_60,&local_49);
                  cVar4 = FUN_1407f0622(local_cc,0xff,0);
                  if (cVar4 == '\0') goto LAB_142acccf5;
                  FUN_1468751e0(local_cc,&local_60,0);
                  FUN_1402980a2(&local_98,local_60,local_58 & 0xffffffff);
                }
              }
              local_108 = plVar9;
              FUN_140474144(&local_60,&local_78,&local_98);
              iVar6 = (int)param_1[7];
              *(uint *)(param_1 + 7) = iVar6 + 1U;
              if (*(uint *)((longlong)param_1 + 0x3c) < iVar6 + 1U) {
                FUN_1447a1bd6(local_108,iVar6);
              }
              lVar3 = *local_108;
              lVar10 = (longlong)iVar6 * 0x10;
              *(undefined8 *)(lVar3 + lVar10) = 0;
              *(undefined2 **)(lVar3 + lVar10) = local_60;
              *(undefined4 *)(lVar3 + 8 + lVar10) = (undefined4)local_58;
              *(undefined4 *)(lVar3 + 0xc + lVar10) = local_58._4_4_;
              local_58 = 0;
              local_60 = (undefined2 *)0x0;
              iVar6 = (int)param_1[5];
              *(uint *)(param_1 + 5) = iVar6 + 1U;
              local_100 = param_4;
              if (*(uint *)((longlong)param_1 + 0x2c) < iVar6 + 1U) {
                FUN_1447a1bd6(local_110,iVar6);
              }
              lVar3 = *local_110;
              lVar10 = (longlong)iVar6 * 0x10;
              puVar1 = (undefined8 *)(lVar3 + lVar10);
              *(undefined8 *)(lVar3 + lVar10) = 0;
              lVar11 = (longlong)(int)uStack_80;
              *(int *)(lVar3 + 8 + lVar10) = (int)uStack_80;
              if (lVar11 == 0) {
                *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
                plVar9 = local_108;
                param_4 = local_100;
              }
              else {
                local_f8 = local_88;
                FUN_1446dd670(puVar1,uStack_80 & 0xffffffff,0);
                memcpy((void *)*puVar1,local_f8,lVar11 * 2);
                plVar9 = local_108;
                param_4 = local_100;
              }
            }
          }
        }
LAB_142acccf5:
        lVar12 = lVar12 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar12);
    }
    iVar7 = (int)param_4[1];
    if (-1 < iVar7) {
      plVar9 = param_1 + 2;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar7) {
        FUN_1408be2c4(plVar9);
        iVar7 = (int)param_4[1];
        if (iVar7 < 0) goto LAB_142acd198;
      }
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        FUN_1408be2c4(param_1);
        iVar7 = (int)param_4[1];
      }
      if (iVar7 != 0) {
        lVar2 = *param_4;
        lVar12 = 0;
        do {
          iVar6 = *(int *)(lVar2 + 8 + lVar12);
          if (1 < iVar6) {
            local_e0 = *(undefined8 *)(lVar2 + lVar12);
            local_d8 = iVar6 + -1;
            local_120 = 0;
            local_128 = local_9c;
            local_138 = 0;
            local_130 = &local_98;
            cVar4 = FUN_1468708fe(&local_e0,&local_78,&local_88,0);
            if (cVar4 != '\0') {
              local_f0 = local_88;
              local_e8 = (int)uStack_80 + -1;
              if ((int)uStack_80 == 0) {
                local_e8 = 0;
              }
              cVar4 = FUN_1468728ae(&local_f0);
              if (cVar4 == '\0') {
                local_110 = plVar9;
                FUN_140474144(&local_60,&local_78,&local_98);
                iVar6 = (int)param_1[3];
                *(uint *)(param_1 + 3) = iVar6 + 1U;
                if (*(uint *)((longlong)param_1 + 0x1c) < iVar6 + 1U) {
                  FUN_1447a1bd6(local_110,iVar6);
                }
                lVar3 = *local_110;
                lVar10 = (longlong)iVar6 * 0x10;
                *(undefined8 *)(lVar3 + lVar10) = 0;
                *(undefined2 **)(lVar3 + lVar10) = local_60;
                *(undefined4 *)(lVar3 + 8 + lVar10) = (undefined4)local_58;
                *(undefined4 *)(lVar3 + 0xc + lVar10) = local_58._4_4_;
                local_58 = 0;
                local_60 = (undefined2 *)0x0;
                FUN_140474144(&local_60,&local_88,&local_98);
                iVar6 = (int)param_1[1];
                *(uint *)(param_1 + 1) = iVar6 + 1U;
                if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
                  FUN_1447a1bd6(param_1,iVar6);
                }
                lVar3 = *param_1;
                lVar10 = (longlong)iVar6 * 0x10;
                *(undefined8 *)(lVar3 + lVar10) = 0;
                *(undefined2 **)(lVar3 + lVar10) = local_60;
                local_60 = (undefined2 *)0x0;
                *(undefined4 *)(lVar3 + 8 + lVar10) = (undefined4)local_58;
                *(undefined4 *)(lVar3 + 0xc + lVar10) = local_58._4_4_;
                local_58 = 0;
                plVar9 = local_110;
              }
            }
          }
          lVar12 = lVar12 + 0x10;
        } while ((longlong)iVar7 * 0x10 != lVar12);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
LAB_142acd198:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 142acd1a2 FUN_142acd1a2 body=6874 status=ok
// SIG undefined FUN_142acd1a2(void)

void FUN_142acd1a2(longlong *param_1,code **param_2)

{
  short sVar1;
  ushort *puVar2;
  code **ppcVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  code **ppcVar17;
  int iVar18;
  undefined2 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  undefined1 auStack_638 [32];
  undefined4 local_618;
  longlong *local_610;
  code ***local_608;
  uint local_600;
  int local_5fc;
  code **local_5f8;
  longlong *local_5f0;
  uint *local_5e8;
  ulonglong local_5e0;
  ulonglong local_5d8;
  code *local_5d0;
  code *local_5c8;
  longlong local_5c0;
  ulonglong local_5b8;
  longlong *local_5b0;
  code ***local_5a8;
  code **local_5a0;
  longlong **local_598;
  code ***local_590;
  longlong *local_588;
  code **local_580;
  longlong *local_578;
  undefined8 uStack_570;
  undefined8 local_560;
  code *local_558;
  undefined8 *local_550;
  undefined8 local_548;
  undefined4 local_540;
  code *local_538;
  code ****local_530;
  code *local_528;
  int local_520;
  ushort *local_518;
  int local_510;
  code *local_508;
  int local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined1 local_4e8 [16];
  longlong local_4d8;
  undefined4 local_4d0;
  uint local_4cc;
  undefined4 uStack_4c8;
  undefined4 local_4c4;
  longlong local_4b8;
  undefined4 local_4b0;
  code ***local_4a8;
  code ***pppcStack_4a0;
  longlong local_498;
  char local_490;
  code **local_488;
  undefined4 local_480;
  undefined1 local_47c [8];
  undefined4 local_474;
  undefined8 local_468;
  undefined4 local_460;
  ulonglong local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  code *local_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  ulonglong local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined4 local_3d4;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined4 local_2e4;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined1 local_270;
  code **local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined8 uStack_250;
  longlong *local_248;
  undefined8 uStack_240;
  longlong local_238 [6];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  longlong **pplStack_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined8 local_124;
  longlong local_118;
  ulonglong uStack_110;
  uint local_108 [4];
  uint *local_f8;
  int local_f0;
  uint local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  code **local_c8;
  undefined8 uStack_c0;
  uint local_b8 [4];
  uint *local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_638;
  cVar5 = FUN_146ff0838();
  if (cVar5 != '\0') {
    iVar18 = *(int *)(param_2 + 3) + *(int *)(param_2 + 7);
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    pcVar9 = (code *)param_1[0x12e];
    ppcVar17 = param_2 + 8;
    if (*(int *)((longlong)param_2 + 0x4c) < iVar18) {
      FUN_1408be2c4(ppcVar17);
    }
    FUN_1457de550(ppcVar17,param_2 + 2);
    FUN_1457de550(ppcVar17,param_2 + 6);
    if (*(int *)(param_2 + 9) != 0) {
      local_528 = param_2[8];
      local_610 = param_1;
      local_5d0 = pcVar9;
      local_520 = *(int *)(param_2 + 9);
      FUN_146feb7fe(pcVar9);
      local_a8 = (uint *)0x0;
      local_a0 = 0;
      local_c8 = (code **)0x0;
      uStack_c0 = 0;
      local_9c = 0xffffffff00000080;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_f8 = (uint *)0x0;
      local_f0 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_ec = 0x80;
      uStack_e8 = 0xffffffff;
      local_e4 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_5f8 = param_2;
      if (*(char *)((longlong)param_2 + 0x6c) == '\x01') {
        iVar18 = *(int *)(param_2 + 1);
        if ((longlong)iVar18 != 0) {
          lVar26 = 0;
          local_1f8 = (code *)0x0;
          uStack_1f0._0_4_ = 0;
          local_268 = (code **)0x0;
          uStack_260 = 0;
          local_258 = 0;
          uStack_250 = 0;
          local_248 = (longlong *)0x0;
          uStack_240 = 0;
          local_238[0] = 0;
          local_238[1] = 0;
          local_238[2] = 0;
          local_238[3] = 0;
          local_238[4] = 0;
          local_238[5] = 0;
          uStack_1f0._4_4_ = 0x80;
          uStack_1e8 = 0xffffffff;
          uStack_1e4 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_19c = 0xffffffff00000080;
          local_194 = 0;
          local_188 = 0;
          local_180 = 0;
          local_158 = 0;
          local_150 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_14c = 0xffffffff00000080;
          local_144 = 0;
          local_138 = 0;
          local_130 = 0;
          local_124 = 0;
          local_126 = 1;
          local_128 = 1;
          pcVar9 = *param_2;
          do {
            puVar19 = &DAT_149dfb77a;
            if (*(int *)(pcVar9 + lVar26 + 8) != 0) {
              puVar19 = *(undefined2 **)(pcVar9 + lVar26);
            }
            FUN_1446f470e(&local_4a8,puVar19,1);
            uVar27 = uStack_250;
            lVar30 = (longlong)(int)uStack_250;
            uVar7 = (int)uStack_250 + 1;
            uStack_250 = CONCAT44(uStack_250._4_4_,uVar7);
            if (uStack_250._4_4_ < uVar7) {
              FUN_1446f84a2(&local_258,uVar27 & 0xffffffff);
            }
            plVar11 = local_610;
            *(code ****)(local_258 + lVar30 * 8) = local_4a8;
            lVar26 = lVar26 + 0x10;
          } while ((longlong)iVar18 * 0x10 != lVar26);
          local_488 = (code **)0x0;
          local_480 = 0;
          local_4a8 = (code ***)0x0;
          pppcStack_4a0 = (code ***)0x0;
          local_47c = (undefined1  [8])0xffffffff00000080;
          local_474 = 0;
          local_468 = 0;
          local_460 = 0;
          local_438 = (code *)0x0;
          uStack_430._0_4_ = 0;
          local_458 = 0;
          uStack_450 = 0;
          uStack_430._4_4_ = 0x80;
          uStack_428 = 0xffffffff;
          uStack_424 = 0;
          local_418 = 0;
          local_410 = 0;
          local_3e8 = 0;
          local_3e0 = 0;
          local_408 = 0;
          uStack_400 = 0;
          local_3dc = 0xffffffff00000080;
          local_3d4 = 0;
          local_3c8 = 0;
          local_3c0 = 0;
          local_398 = 0;
          local_390 = 0;
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_38c = 0xffffffff00000080;
          local_384 = 0;
          local_378 = 0;
          local_370 = 0;
          local_348 = 0;
          local_340 = 0;
          local_368 = 0;
          uStack_360 = 0;
          local_33c = 0xffffffff00000080;
          local_334 = 0;
          local_328 = 0;
          local_320 = 0;
          local_2f8 = 0;
          local_2f0 = 0;
          local_318 = 0;
          uStack_310 = 0;
          local_2ec = 0xffffffff00000080;
          local_2e4 = 0;
          local_2d8 = 0;
          local_2d0 = 0;
          local_2a8 = 0;
          local_2a0 = 0;
          local_2c8 = 0;
          uStack_2c0 = 0;
          local_29c = 0xffffffff00000080;
          local_294 = 0;
          local_288 = 0;
          local_280 = 0;
          local_278 = 0;
          local_270 = 0;
          FUN_140be70e2(local_610,local_5f8[0xb],&local_268,&local_4a8);
          local_5a8 = &local_c8;
          local_530 = &local_5a8;
          local_538 = FUN_142adf054;
          local_4d8 = 0;
          local_4d0 = 0;
          local_4f8 = (code ***)0x0;
          uStack_4f0 = (code ***)0x0;
          local_4cc = 0x80;
          uStack_4c8 = 0xffffffff;
          local_4c4 = 0;
          local_4b8 = 0;
          local_4b0 = 0;
          local_618 = 4;
          FUN_140be894c(plVar11,&local_4a8,&local_4f8);
          local_4b0 = 0;
          if (local_4b8 != 0) {
            FUN_1400020a8();
          }
          uVar27 = (ulonglong)uStack_4f0 >> 0x20;
          uStack_4f0 = (code ***)((ulonglong)uStack_4f0 & 0xffffffff00000000);
          if ((int)uVar27 != 0) {
            FUN_14472eb64(&local_4f8,0);
          }
          uStack_4c8 = 0xffffffff;
          local_4c4 = 0;
          local_4d0 = 0;
          if (0x80 < local_4cc) {
            local_4cc = 0x80;
            FUN_1446efbd8(local_4e8,0);
          }
          if (local_4d8 != 0) {
            FUN_1400020a8();
          }
          if (local_4f8 != (code ***)0x0) {
            FUN_1400020a8();
          }
          iVar18 = (int)uStack_430;
          if ((int)uStack_430 == 0) {
            uVar24 = 1;
            iVar29 = 0;
            uVar27 = 0;
            iVar31 = 0;
          }
          else {
            pcVar9 = local_438;
            if (local_438 == (code *)0x0) {
              pcVar9 = (code *)&local_448;
            }
            uVar7 = *(uint *)pcVar9;
            if (uVar7 == 0) {
              iVar29 = (int)uStack_430 + 0x1e;
              if (-1 < (int)uStack_430 + -1) {
                iVar29 = (int)uStack_430 + -1;
              }
              uVar27 = 0;
              uVar20 = (ulonglong)(uint)(iVar29 >> 5);
              if (iVar29 >> 5 < 1) {
                uVar20 = uVar27;
              }
              iVar29 = 0;
              do {
                if (uVar20 == uVar27) goto LAB_142acd730;
                iVar29 = iVar29 + 0x20;
                uVar7 = *(uint *)(pcVar9 + (uVar27 + 1) * 4);
                uVar27 = uVar27 + 1;
              } while (uVar7 == 0);
            }
            else {
              iVar29 = 0;
              uVar27 = 0;
            }
            uVar24 = (ulonglong)(-uVar7 & uVar7);
            uVar20 = uVar24 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar31 = (iVar29 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if ((int)uStack_430 <= iVar31) {
              iVar31 = (int)uStack_430;
            }
          }
          if (iVar31 != (int)uStack_430) {
            plVar11 = local_610 + 0xaa;
            uVar7 = 0xffffffff;
            iVar13 = (int)uStack_430;
            do {
              if ((int)local_610[0xa4] != *(int *)((longlong)local_610 + 0x54c)) {
                lVar26 = *(longlong *)(local_458 + (longlong)iVar31 * 0x10);
                uVar12 = (uint)((ulonglong)lVar26 >> 0x10);
                uVar8 = (uint)lVar26 & 0xffff;
                plVar16 = (longlong *)local_610[0xab];
                if ((longlong *)local_610[0xab] == (longlong *)0x0) {
                  plVar16 = plVar11;
                }
                iVar31 = *(int *)((longlong)plVar16 +
                                 (ulonglong)
                                 ((int)local_610[0xac] - 1U &
                                 (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar8) +
                                 (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar8 >> 4)) * 4);
                if (iVar31 != -1) {
                  do {
                    lVar30 = local_610[0xa3] + (longlong)iVar31 * 0x20;
                    if (*(longlong *)(local_610[0xa3] + (longlong)iVar31 * 0x20) == lVar26) {
                      if ((lVar30 + 8U & 0xfffffffffffffff7) != 0) {
                        local_548 = *(undefined8 *)(lVar30 + 8);
                        local_540 = *(undefined4 *)(lVar30 + 0x10);
                        FUN_140ce09a0(&local_118,&local_548);
                        iVar13 = (int)uStack_430;
                      }
                      break;
                    }
                    iVar31 = *(int *)(lVar30 + 0x18);
                  } while (iVar31 != -1);
                }
              }
              uVar7 = uVar7 & ~(uint)uVar24;
              pcVar9 = local_438;
              if (local_438 == (code *)0x0) {
                pcVar9 = (code *)&local_448;
              }
              iVar31 = (int)uVar27;
              lVar26 = (longlong)iVar31;
              uVar12 = *(uint *)(pcVar9 + lVar26 * 4) & uVar7;
              if (uVar12 == 0) {
                iVar14 = iVar13 + 0x1e;
                if (-1 < iVar13 + -1) {
                  iVar14 = iVar13 + -1;
                }
                iVar14 = iVar14 >> 5;
                iVar29 = iVar29 + 0x20;
                iVar15 = iVar14;
                if (iVar14 < iVar31) {
                  iVar15 = iVar31;
                }
                if (iVar31 < iVar14) {
                  lVar30 = 0;
                  do {
                    uVar12 = *(uint *)(pcVar9 + lVar30 * 4 + (lVar26 + 1) * 4);
                    if (uVar12 != 0) {
                      uVar27 = (ulonglong)(iVar31 + (int)lVar30 + 1);
                      uVar7 = 0xffffffff;
                      goto LAB_142acebad;
                    }
                    iVar29 = iVar29 + 0x20;
                    lVar30 = lVar30 + 1;
                  } while (iVar15 - lVar26 != lVar30);
                  uVar7 = 0xffffffff;
                  lVar26 = (longlong)iVar15;
                }
                uVar27 = lVar26 + 1U & 0xffffffff;
                iVar31 = iVar13;
              }
              else {
LAB_142acebad:
                uVar24 = (ulonglong)(-uVar12 & uVar12);
                uVar20 = uVar24 * 2 + 1;
                lVar26 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                iVar31 = (iVar29 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                if (iVar13 <= iVar31) {
                  iVar31 = iVar13;
                }
              }
            } while (iVar31 != iVar18);
          }
LAB_142acd730:
          FUN_140195631(0,0);
          FUN_140be6d8c(&local_4a8);
          FUN_14019571a(&local_268);
        }
        if ((longlong)*(int *)(local_5f8 + 5) != 0) {
          pcVar9 = local_5f8[4];
          local_5c8 = pcVar9 + (longlong)*(int *)(local_5f8 + 5) * 0x10;
          plVar11 = local_610 + 0xa0;
          do {
            local_4f8 = &local_c8;
            local_558 = FUN_142adf0c4;
            puVar19 = &DAT_149dfb77a;
            if (*(int *)(pcVar9 + 8) != 0) {
              puVar19 = *(undefined2 **)pcVar9;
            }
            local_550 = &local_4f8;
            FUN_1446f470e(&local_560,puVar19,1);
            local_268 = &local_558;
            local_4a8 = (code ***)FUN_146ffe3f4;
            pppcStack_4a0 = &local_268;
            FUN_146ff8c62(local_610,local_560,&local_4a8);
            lVar26 = 0;
            do {
              local_268 = *(code ***)((longlong)&PTR_u__verse_149fc4080 + lVar26);
              FUN_147008320(&local_4a8,pcVar9,&local_268);
              *(undefined2 *)pppcStack_4a0 = 0;
              FUN_1446f470e(&local_4f8,local_4a8,0);
              if (local_490 == '\x01') {
                FUN_1400020a8(local_4a8);
              }
              if ((local_4f8 != (code ***)0x0) &&
                 ((int)local_610[0x9a] != *(int *)((longlong)local_610 + 0x4fc))) {
                uVar7 = (uint)((ulonglong)local_4f8 >> 0x10);
                uVar12 = (uint)local_4f8 & 0xffff;
                plVar16 = (longlong *)local_610[0xa1];
                if ((longlong *)local_610[0xa1] == (longlong *)0x0) {
                  plVar16 = plVar11;
                }
                iVar18 = *(int *)((longlong)plVar16 +
                                 (ulonglong)
                                 ((int)local_610[0xa2] - 1U &
                                 (int)((ulonglong)local_4f8 >> 0x20) +
                                 ((uint)local_4f8 << 0x10 | uVar12) +
                                 (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4)) * 4);
                if (iVar18 != -1) {
                  do {
                    if (*(code ****)(local_610[0x99] + (longlong)iVar18 * 0x10) == local_4f8) {
                      FUN_144a13f80(&local_118,&local_4a8,&local_4f8,0);
                      break;
                    }
                    iVar18 = *(int *)((longlong)iVar18 * 0x10 + local_610[0x99] + 8);
                  } while (iVar18 != -1);
                }
              }
              lVar26 = lVar26 + 8;
            } while (lVar26 != 0x10);
            pcVar9 = pcVar9 + 0x10;
          } while (pcVar9 != local_5c8);
        }
      }
      ppcVar3 = local_5f8;
      FUN_146fea58e(local_5d0,ppcVar17,*(undefined1 *)((longlong)local_5f8 + 0x6c),
                    *(undefined1 *)((longlong)local_5f8 + 0x6d));
      plVar11 = local_610;
      local_598 = &local_578;
      local_578 = (longlong *)0x0;
      uStack_570 = 0;
      local_5a8 = &local_580;
      local_580 = ppcVar3;
      uStack_1f0 = &local_5a8;
      local_5a0 = ppcVar3;
      local_590 = &local_c8;
      local_588 = local_610;
      local_5b0 = &local_118;
      pplStack_1e0 = &local_5b0;
      local_208 = *(undefined4 *)(ppcVar3 + 10);
      uStack_204 = *(undefined4 *)((longlong)ppcVar3 + 0x54);
      uStack_200 = *(undefined4 *)(ppcVar3 + 0xb);
      uStack_1fc = *(undefined4 *)((longlong)ppcVar3 + 0x5c);
      local_268 = (code **)0xbff0000000000000;
      uStack_260 = 0xbff0000000000000;
      uVar27 = 0;
      local_258 = 0;
      local_248 = (longlong *)0x0;
      local_238[4] = local_238[4] & 0xffffffffffffff00;
      local_1d8 = local_1d8 & 0xffffffffffff0000;
      local_1f8 = FUN_142adf134;
      uStack_1e8 = 0x42adf8a4;
      uStack_1e4 = 1;
      uVar6 = FUN_142acf63a(local_610);
      *(undefined1 *)((longlong)ppcVar3 + 0x6f) = uVar6;
      local_4d8 = 0;
      local_4d0 = 0;
      local_4f8 = (code ***)0x0;
      uStack_4f0 = (code ***)0x0;
      local_4cc = 0x80;
      uStack_4c8 = 0xffffffff;
      local_4c4 = 0;
      local_4b8 = 0;
      local_4b0 = 0;
      local_5e8 = (uint *)(plVar11 + 0x185);
      iVar18 = (int)plVar11[0x188];
      uVar20 = 1;
      iVar29 = 0;
      iVar31 = 0;
      if (iVar18 != 0) {
        puVar10 = (uint *)plVar11[0x187];
        if ((uint *)plVar11[0x187] == (uint *)0x0) {
          puVar10 = local_5e8;
        }
        uVar7 = *puVar10;
        if (uVar7 == 0) {
          iVar29 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar29 = iVar18 + -1;
          }
          uVar27 = 0;
          uVar20 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar20 = 0;
          }
          iVar29 = 0;
          do {
            if (uVar20 == uVar27) goto LAB_142acdef6;
            iVar29 = iVar29 + 0x20;
            uVar7 = puVar10[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar27 = 0;
        }
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar24 = uVar20 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar31 = (iVar29 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar31) {
          iVar31 = iVar18;
        }
      }
      if (iVar31 < iVar18) {
        local_5f0 = plVar11 + 0x183;
        uVar7 = 0xffffffff;
        do {
          local_600 = uVar7;
          local_5c0 = (longlong)iVar31 * 3;
          local_490 = '\0';
          local_4a8 = &local_488;
          local_498 = (longlong)&local_38c + 4;
          local_5fc = iVar29;
          local_5e0 = uVar20;
          local_5d8 = uVar27;
          pppcStack_4a0 = local_4a8;
          FUN_14005eb5c(*(undefined8 *)(*local_5f0 + 8 + (longlong)iVar31 * 0x18),&local_4a8);
          uVar27 = (longlong)pppcStack_4a0 - (longlong)local_4a8;
          *(undefined2 *)pppcStack_4a0 = 0;
          local_608 = local_4a8;
          if ((longlong)*(int *)(local_580 + 1) != 0) {
            pcVar9 = *local_580;
            local_5d0 = pcVar9 + (longlong)*(int *)(local_580 + 1) * 0x10;
            uVar12 = (uint)(uVar27 >> 1);
            uVar7 = (int)uVar12 >> 0x1f & uVar12;
            iVar18 = uVar12 - uVar7;
            local_5c8 = (code *)((longlong)local_4a8 + (longlong)(int)uVar7 * 2);
            local_5b8 = (ulonglong)-uVar12;
            do {
              puVar2 = *(ushort **)pcVar9;
              uVar7 = *(int *)(pcVar9 + 8) - 1;
              if (*(int *)(pcVar9 + 8) == 0) {
                uVar7 = 0;
              }
              lVar26 = 0;
LAB_142acdc26:
              iVar29 = (int)((ulonglong)uVar7 + lVar26);
              if (2 < iVar29) {
                uVar27 = (ulonglong)uVar7 + lVar26 & 0xffffffff;
                if (((puVar2[uVar27 - 1] != 0x2f) && (puVar2[uVar27 - 1] != 0x5c)) ||
                   (puVar2[uVar27 - 2] == 0x3a)) goto LAB_142acdc8a;
LAB_142acdc4a:
                lVar26 = lVar26 + -1;
                goto LAB_142acdc26;
              }
              if (iVar29 == 2) {
                if (((puVar2[1] != 0x5c) && (puVar2[1] != 0x2f)) ||
                   ((*puVar2 - 0x2f < 0x2e &&
                    ((0x200000000801U >> ((ulonglong)(*puVar2 - 0x2f) & 0x3f) & 1) != 0))))
                goto LAB_142acdc8a;
                goto LAB_142acdc4a;
              }
              if (iVar29 == 0) goto LAB_142acdd28;
LAB_142acdc8a:
              if (iVar29 <= (int)uVar12) {
                local_500 = iVar18;
                if (iVar29 < iVar18) {
                  local_500 = iVar29;
                }
                if (local_500 < 1) {
                  local_500 = 0;
                }
                local_508 = local_5c8;
                local_518 = puVar2;
                local_510 = iVar29;
                cVar5 = FUN_14005b3f4(&local_518,&local_508);
                uVar27 = local_5d8;
                if (cVar5 != '\0') {
                  if (iVar29 + (int)local_5b8 == 0) {
LAB_142acdd5a:
                    if (local_490 == '\x01') {
                      FUN_1400020a8(local_608);
                    }
                    uVar20 = uStack_570;
                    lVar4 = local_5c0;
                    plVar11 = local_610;
                    lVar26 = local_5c0 * 8;
                    lVar30 = *local_5f0;
                    lVar25 = (longlong)(int)uStack_570;
                    uVar7 = (int)uStack_570 + 1;
                    uStack_570 = CONCAT44(uStack_570._4_4_,uVar7);
                    if (uStack_570._4_4_ < uVar7) {
                      FUN_1446f84a2(&local_578,uVar20 & 0xffffffff);
                    }
                    plVar16 = local_5f0;
                    local_578[lVar25] = *(longlong *)(lVar26 + lVar30);
                    local_4a8 = (code ***)(*local_5f0 + lVar4 * 8);
                    pppcStack_4a0 = (code ***)(*local_5f0 + 8 + lVar4 * 8);
                    FUN_147007996(&local_4f8,&local_508,&local_4a8);
                    FUN_146ffdbd8(plVar16,iVar31);
                    goto LAB_142acde23;
                  }
                  if ((puVar2[(longlong)(int)uVar7 + lVar26 + -1] == 0x2f) ||
                     (puVar2[(longlong)(int)uVar7 + lVar26 + -1] == 0x5c)) {
                    if ((uVar7 + (int)lVar26 != 1) ||
                       ((*(short *)((longlong)local_608 + 2) != 0x2f &&
                        (*(short *)((longlong)local_608 + 2) != 0x5c)))) goto LAB_142acdd5a;
                  }
                  else {
                    sVar1 = *(short *)((longlong)local_608 + lVar26 * 2 + (longlong)(int)uVar7 * 2);
                    if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) goto LAB_142acdd5a;
                  }
                }
              }
LAB_142acdd28:
              pcVar9 = pcVar9 + 0x10;
            } while (pcVar9 != local_5d0);
          }
          uVar27 = local_5d8;
          plVar11 = local_610;
          if (local_490 == '\x01') {
            FUN_1400020a8(local_608);
            uVar27 = local_5d8;
            plVar11 = local_610;
          }
LAB_142acde23:
          uVar7 = local_600 & ~(uint)local_5e0;
          puVar10 = (uint *)plVar11[0x187];
          if ((uint *)plVar11[0x187] == (uint *)0x0) {
            puVar10 = local_5e8;
          }
          iVar18 = (int)plVar11[0x188];
          iVar31 = (int)uVar27;
          lVar26 = (longlong)iVar31;
          uVar12 = puVar10[lVar26] & uVar7;
          iVar29 = local_5fc;
          if (uVar12 == 0) {
            iVar13 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar13 = iVar18 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar14 = iVar13;
            if (iVar13 < iVar31) {
              iVar14 = iVar31;
            }
            if (iVar13 <= iVar31) break;
            lVar30 = 0;
            while( true ) {
              iVar29 = iVar29 + 0x20;
              uVar12 = puVar10[lVar26 + lVar30 + 1];
              if (uVar12 != 0) break;
              lVar30 = lVar30 + 1;
              if (iVar14 - lVar26 == lVar30) goto LAB_142acdef6;
            }
            uVar27 = (ulonglong)(iVar31 + (int)lVar30 + 1);
            uVar7 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar12 & uVar12);
          uVar24 = uVar20 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar31 = (iVar29 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        } while (iVar31 < iVar18);
      }
LAB_142acdef6:
      iVar18 = (int)plVar11[0x192];
      if (iVar18 == 0) {
        uVar24 = 1;
        uVar27 = 0;
        iVar29 = 0;
        iVar31 = 0;
      }
      else {
        puVar10 = (uint *)plVar11[0x191];
        if ((uint *)plVar11[0x191] == (uint *)0x0) {
          puVar10 = (uint *)(plVar11 + 399);
        }
        uVar7 = *puVar10;
        if (uVar7 == 0) {
          iVar29 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar29 = iVar18 + -1;
          }
          uVar27 = 0;
          uVar20 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar20 = uVar27;
          }
          iVar29 = 0;
          do {
            if (uVar20 == uVar27) goto LAB_142ace37b;
            iVar29 = iVar29 + 0x20;
            uVar7 = puVar10[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar27 = 0;
          iVar29 = 0;
        }
        uVar24 = (ulonglong)(-uVar7 & uVar7);
        uVar20 = uVar24 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar31 = (iVar29 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar31) {
          iVar31 = iVar18;
        }
      }
      if (iVar31 < iVar18) {
        local_5f0 = plVar11 + 0x18d;
        local_5e8 = (uint *)(plVar11 + 399);
        uVar7 = 0xffffffff;
        do {
          local_600 = uVar7;
          local_5c0 = (longlong)iVar31 * 3;
          local_490 = '\0';
          local_4a8 = &local_488;
          local_498 = (longlong)&local_38c + 4;
          local_5fc = iVar29;
          local_5e0 = uVar24;
          local_5d8 = uVar27;
          pppcStack_4a0 = local_4a8;
          FUN_14005eb5c(*(undefined8 *)(*local_5f0 + 8 + (longlong)iVar31 * 0x18),&local_4a8);
          uVar27 = (longlong)pppcStack_4a0 - (longlong)local_4a8;
          *(undefined2 *)pppcStack_4a0 = 0;
          local_608 = local_4a8;
          if ((longlong)*(int *)(local_580 + 1) != 0) {
            pcVar9 = *local_580;
            local_5d0 = pcVar9 + (longlong)*(int *)(local_580 + 1) * 0x10;
            uVar12 = (uint)(uVar27 >> 1);
            uVar7 = (int)uVar12 >> 0x1f & uVar12;
            iVar18 = uVar12 - uVar7;
            local_5c8 = (code *)((longlong)local_4a8 + (longlong)(int)uVar7 * 2);
            local_5b8 = (ulonglong)-uVar12;
            do {
              puVar2 = *(ushort **)pcVar9;
              uVar7 = *(int *)(pcVar9 + 8) - 1;
              if (*(int *)(pcVar9 + 8) == 0) {
                uVar7 = 0;
              }
              lVar26 = 0;
LAB_142ace0a0:
              iVar13 = (int)((ulonglong)uVar7 + lVar26);
              if (2 < iVar13) {
                uVar27 = (ulonglong)uVar7 + lVar26 & 0xffffffff;
                if (((puVar2[uVar27 - 1] != 0x2f) && (puVar2[uVar27 - 1] != 0x5c)) ||
                   (puVar2[uVar27 - 2] == 0x3a)) goto LAB_142ace104;
LAB_142ace0c4:
                lVar26 = lVar26 + -1;
                goto LAB_142ace0a0;
              }
              if (iVar13 == 2) {
                if (((puVar2[1] != 0x5c) && (puVar2[1] != 0x2f)) ||
                   ((*puVar2 - 0x2f < 0x2e &&
                    ((0x200000000801U >> ((ulonglong)(*puVar2 - 0x2f) & 0x3f) & 1) != 0))))
                goto LAB_142ace104;
                goto LAB_142ace0c4;
              }
              if (iVar13 == 0) goto LAB_142ace1a2;
LAB_142ace104:
              if (iVar13 <= (int)uVar12) {
                local_500 = iVar18;
                if (iVar13 < iVar18) {
                  local_500 = iVar13;
                }
                if (local_500 < 1) {
                  local_500 = 0;
                }
                local_508 = local_5c8;
                local_518 = puVar2;
                local_510 = iVar13;
                cVar5 = FUN_14005b3f4(&local_518,&local_508);
                uVar27 = local_5d8;
                iVar29 = local_5fc;
                if (cVar5 != '\0') {
                  if (iVar13 + (int)local_5b8 == 0) {
LAB_142ace1d4:
                    if (local_490 == '\x01') {
                      FUN_1400020a8(local_608);
                    }
                    uVar20 = uStack_570;
                    lVar4 = local_5c0;
                    plVar11 = local_610;
                    lVar26 = local_5c0 * 8;
                    lVar30 = *local_5f0;
                    lVar25 = (longlong)(int)uStack_570;
                    uVar12 = (int)uStack_570 + 1;
                    uStack_570 = CONCAT44(uStack_570._4_4_,uVar12);
                    uVar7 = (uint)local_5e0;
                    if (uStack_570._4_4_ < uVar12) {
                      FUN_1446f84a2(&local_578,uVar20 & 0xffffffff);
                    }
                    plVar16 = local_5f0;
                    local_578[lVar25] = *(longlong *)(lVar26 + lVar30);
                    local_4a8 = (code ***)(*local_5f0 + lVar4 * 8);
                    pppcStack_4a0 = (code ***)(*local_5f0 + 8 + lVar4 * 8);
                    FUN_147007996(&local_4f8,&local_508,&local_4a8);
                    FUN_146ffdbd8(plVar16,iVar31);
                    puVar10 = local_5e8;
                    goto LAB_142ace2b9;
                  }
                  if ((puVar2[(longlong)(int)uVar7 + lVar26 + -1] == 0x2f) ||
                     (puVar2[(longlong)(int)uVar7 + lVar26 + -1] == 0x5c)) {
                    if ((uVar7 + (int)lVar26 != 1) ||
                       ((*(short *)((longlong)local_608 + 2) != 0x2f &&
                        (*(short *)((longlong)local_608 + 2) != 0x5c)))) goto LAB_142ace1d4;
                  }
                  else {
                    sVar1 = *(short *)((longlong)local_608 + lVar26 * 2 + (longlong)(int)uVar7 * 2);
                    if ((sVar1 == 0x2f) || (sVar1 == 0x5c)) goto LAB_142ace1d4;
                  }
                }
              }
LAB_142ace1a2:
              pcVar9 = pcVar9 + 0x10;
            } while (pcVar9 != local_5d0);
          }
          puVar10 = local_5e8;
          if (local_490 == '\x01') {
            FUN_1400020a8(local_608);
          }
          uVar7 = (uint)local_5e0;
          uVar27 = local_5d8;
          plVar11 = local_610;
          iVar29 = local_5fc;
LAB_142ace2b9:
          uVar7 = local_600 & ~uVar7;
          puVar21 = (uint *)plVar11[0x191];
          if ((uint *)plVar11[0x191] == (uint *)0x0) {
            puVar21 = puVar10;
          }
          iVar18 = (int)plVar11[0x192];
          iVar31 = (int)uVar27;
          lVar26 = (longlong)iVar31;
          uVar12 = puVar21[lVar26] & uVar7;
          if (uVar12 == 0) {
            iVar13 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar13 = iVar18 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar14 = iVar13;
            if (iVar13 < iVar31) {
              iVar14 = iVar31;
            }
            if (iVar13 <= iVar31) break;
            lVar30 = 0;
            while( true ) {
              iVar29 = iVar29 + 0x20;
              uVar12 = puVar21[lVar26 + lVar30 + 1];
              if (uVar12 != 0) break;
              lVar30 = lVar30 + 1;
              if (iVar14 - lVar26 == lVar30) goto LAB_142ace37b;
            }
            uVar27 = (ulonglong)(iVar31 + (int)lVar30 + 1);
            uVar7 = 0xffffffff;
          }
          uVar24 = (ulonglong)(-uVar12 & uVar12);
          uVar20 = uVar24 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar31 = (iVar29 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        } while (iVar31 < iVar18);
      }
LAB_142ace37b:
      ppcVar17 = local_5f8;
      lVar26 = plVar11[0x1b8];
      *(undefined1 *)(plVar11 + 0x1b8) = 1;
      FUN_142ad4834(plVar11,local_5f8[10],&local_4f8,&local_268);
      *(char *)(plVar11 + 0x1b8) = (char)lVar26;
      local_448 = *(undefined4 *)(ppcVar17 + 10);
      uStack_444 = *(undefined4 *)((longlong)ppcVar17 + 0x54);
      uStack_440 = *(undefined4 *)(ppcVar17 + 0xb);
      uStack_43c = *(undefined4 *)((longlong)ppcVar17 + 0x5c);
      local_4a8 = (code ***)0xbff0000000000000;
      pppcStack_4a0 = (code ***)0xbff0000000000000;
      local_498 = 0;
      local_488 = (code **)0x0;
      local_458 = local_458 & 0xffffffffffffff00;
      uStack_428 = 0;
      uStack_424 = 0;
      uStack_420 = 0;
      local_418 = local_418 & 0xffffffffffff0000;
      local_438 = FUN_142adf134;
      uStack_430 = &local_5a8;
      uVar6 = FUN_142acf63a(plVar11,&local_4a8);
      *(undefined1 *)((longlong)ppcVar17 + 0x6f) = uVar6;
      if (CONCAT44(uStack_424,uStack_428) != 0) {
        uStack_428 = 0;
        uStack_424 = 0;
        uStack_420 = 0;
      }
      if (local_438 != (code *)0x0) {
        local_438 = (code *)0x0;
        uStack_430._0_4_ = 0;
        uStack_430._4_4_ = 0;
        uStack_430 = (code ****)0x0;
      }
      if (local_498 != 0) {
        ppcVar17 = local_488;
        if (local_488 == (code **)0x0) {
          ppcVar17 = (code **)(local_47c + 4);
        }
        (**(code **)(*ppcVar17 + 0x10))();
      }
      local_4b0 = 0;
      if (local_4b8 != 0) {
        FUN_1400020a8();
      }
      FUN_145c17668(&local_4f8);
      FUN_144a41f4e(local_578,uStack_570 & 0xffffffff);
      uVar27 = (ulonglong)(int)uStack_570;
      if (1 < (longlong)uVar27) {
        lVar26 = uVar27 * 8 + -8;
        plVar11 = local_578;
        plVar16 = local_578;
        do {
          plVar22 = plVar11;
          if ((*plVar11 != plVar16[1]) && (plVar22 = plVar11 + 1, plVar16 != plVar11)) {
            *plVar22 = plVar16[1];
          }
          plVar16 = plVar16 + 1;
          lVar26 = lVar26 + -8;
          plVar11 = plVar22;
        } while (lVar26 != 0);
        uVar27 = (ulonglong)((longlong)plVar22 + (8 - (longlong)local_578)) >> 3;
      }
      FUN_1406089a0(&local_578,uVar27,1);
      iVar18 = local_a0;
      if (local_a0 == 0) {
        uVar20 = 1;
        uVar27 = 0;
        iVar31 = 0;
        iVar29 = 0;
      }
      else {
        puVar10 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar10 = local_b8;
        }
        uVar7 = *puVar10;
        if (uVar7 == 0) {
          iVar29 = local_a0 + 0x1e;
          if (-1 < local_a0 + -1) {
            iVar29 = local_a0 + -1;
          }
          uVar27 = 0;
          uVar20 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar20 = uVar27;
          }
          iVar31 = 0;
          do {
            if (uVar20 == uVar27) goto LAB_142ace5a1;
            iVar31 = iVar31 + 0x20;
            uVar7 = puVar10[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar27 = 0;
          iVar31 = 0;
        }
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar24 = uVar20 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar29 = (iVar31 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_a0 <= iVar29) {
          iVar29 = local_a0;
        }
      }
      if (iVar29 != local_a0) {
        uVar7 = 0xffffffff;
        do {
          FUN_1400e7e08(&local_4f8,local_c8 + (longlong)iVar29 * 5);
          plVar11 = local_610;
          local_4a8 = local_4f8;
          pppcStack_4a0 = uStack_4f0;
          uVar12 = (uint)((ulonglong)uStack_4f0 >> 0x10);
          uVar28 = (uint)uStack_4f0 & 0xffff;
          uVar8 = (uint)((ulonglong)local_4f8 >> 0x10);
          uVar23 = (uint)local_4f8 & 0xffff;
          uVar8 = ((uint)local_4f8 << 0x10 | uVar23) + local_4f8._4_4_ +
                  (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar23 >> 4);
          iVar29 = FUN_1447fff98(local_610,
                                 (uVar8 >> 2) +
                                 ((uint)uStack_4f0 << 0x10 | uVar28) + uStack_4f0._4_4_ +
                                 (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar28 >> 4) + uVar8 * 0x40 +
                                 0x9e3779b9 ^ uVar8,&local_4a8);
          if (((iVar29 != -1) &&
              (plVar11 = (longlong *)((longlong)iVar29 * 0x10 + *plVar11),
              plVar11 != (longlong *)0x0)) && (*plVar11 != 0)) {
            FUN_146ff7e66(local_610,local_5f8[10]);
          }
          uVar7 = uVar7 & ~(uint)uVar20;
          puVar10 = local_a8;
          if (local_a8 == (uint *)0x0) {
            puVar10 = local_b8;
          }
          iVar29 = (int)uVar27;
          lVar26 = (longlong)iVar29;
          uVar12 = puVar10[lVar26] & uVar7;
          if (uVar12 == 0) {
            iVar13 = local_a0 + 0x1e;
            if (-1 < local_a0 + -1) {
              iVar13 = local_a0 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar29) {
              iVar14 = iVar29;
            }
            if (iVar29 < iVar13) {
              lVar30 = 0;
              do {
                uVar12 = puVar10[lVar26 + lVar30 + 1];
                if (uVar12 != 0) {
                  uVar27 = (ulonglong)(iVar29 + (int)lVar30 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_142ace7ab;
                }
                iVar31 = iVar31 + 0x20;
                lVar30 = lVar30 + 1;
              } while (iVar14 - lVar26 != lVar30);
              uVar7 = 0xffffffff;
              iVar29 = iVar14;
            }
            uVar27 = (ulonglong)(iVar29 + 1);
            iVar29 = local_a0;
          }
          else {
LAB_142ace7ab:
            uVar20 = (ulonglong)(-uVar12 & uVar12);
            uVar24 = uVar20 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar29 = (iVar31 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_a0 <= iVar29) {
              iVar29 = local_a0;
            }
          }
        } while (iVar29 != iVar18);
      }
LAB_142ace5a1:
      iVar18 = local_f0;
      if (local_f0 == 0) {
        uVar20 = 1;
        uVar27 = 0;
        iVar31 = 0;
        iVar29 = 0;
      }
      else {
        puVar10 = local_f8;
        if (local_f8 == (uint *)0x0) {
          puVar10 = local_108;
        }
        uVar7 = *puVar10;
        if (uVar7 == 0) {
          iVar29 = local_f0 + 0x1e;
          if (-1 < local_f0 + -1) {
            iVar29 = local_f0 + -1;
          }
          uVar27 = 0;
          uVar20 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar20 = uVar27;
          }
          iVar31 = 0;
          do {
            if (uVar20 == uVar27) goto LAB_142ace826;
            iVar31 = iVar31 + 0x20;
            uVar7 = puVar10[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar27 = 0;
          iVar31 = 0;
        }
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar24 = uVar20 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar29 = (iVar31 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (local_f0 <= iVar29) {
          iVar29 = local_f0;
        }
      }
      if (iVar29 != local_f0) {
        uVar7 = 0xffffffff;
        ppcVar17 = local_5f8;
        do {
          FUN_146ff687e(local_610,ppcVar17[10],*(undefined8 *)(local_118 + (longlong)iVar29 * 0x10))
          ;
          uVar7 = ~(uint)uVar20 & uVar7;
          puVar10 = local_f8;
          if (local_f8 == (uint *)0x0) {
            puVar10 = local_108;
          }
          iVar29 = (int)uVar27;
          lVar26 = (longlong)iVar29;
          uVar12 = puVar10[lVar26] & uVar7;
          if (uVar12 == 0) {
            iVar13 = local_f0 + 0x1e;
            if (-1 < local_f0 + -1) {
              iVar13 = local_f0 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar29) {
              iVar14 = iVar29;
            }
            if (iVar29 < iVar13) {
              lVar30 = 0;
              do {
                uVar12 = puVar10[lVar26 + lVar30 + 1];
                if (uVar12 != 0) {
                  uVar27 = (ulonglong)(iVar29 + (int)lVar30 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_142ace9f0;
                }
                iVar31 = iVar31 + 0x20;
                lVar30 = lVar30 + 1;
              } while (iVar14 - lVar26 != lVar30);
              uVar7 = 0xffffffff;
              lVar26 = (longlong)iVar14;
            }
            uVar27 = lVar26 + 1U & 0xffffffff;
            ppcVar17 = local_5f8;
            iVar29 = local_f0;
          }
          else {
LAB_142ace9f0:
            uVar20 = (ulonglong)(-uVar12 & uVar12);
            uVar24 = uVar20 * 2 + 1;
            lVar26 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar29 = (iVar31 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
            if (local_f0 <= iVar29) {
              iVar29 = local_f0;
            }
          }
        } while (iVar29 != iVar18);
      }
LAB_142ace826:
      if (CONCAT44(uStack_1e4,uStack_1e8) != 0) {
        uStack_1e8 = 0;
        uStack_1e4 = 0;
        pplStack_1e0 = (longlong **)0x0;
      }
      if (local_1f8 != (code *)0x0) {
        local_1f8 = (code *)0x0;
        uStack_1f0._0_4_ = 0;
        uStack_1f0._4_4_ = 0;
        uStack_1f0 = (code ****)0x0;
      }
      if (local_258 != 0) {
        plVar11 = local_248;
        if (local_248 == (longlong *)0x0) {
          plVar11 = local_238;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_578 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_d0 = 0;
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      uVar27 = uStack_110 >> 0x20;
      uStack_110 = uStack_110 & 0xffffffff00000000;
      if ((int)uVar27 != 0) {
        FUN_14472eb64(&local_118,0);
      }
      uStack_e8 = 0xffffffff;
      local_e4 = 0;
      local_f0 = 0;
      if (0x80 < local_ec) {
        local_ec = 0x80;
        FUN_1446efbd8(local_108,0);
      }
      if (local_f8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      local_80 = 0;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_144a1c8ac(&local_c8);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142acec7d FUN_142acec7d body=289 status=ok
// SIG undefined FUN_142acec7d(void)

undefined8 * FUN_142acec7d(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar5 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_144732142(param_1,uVar5);
    iVar3 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar3)) {
      *(int *)(param_1 + 9) = iVar3;
      FUN_144869b4a(param_1);
    }
    lVar2 = param_2[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_2;
      lVar6 = 0;
      do {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(lVar1 + 8 + lVar6) != 0) {
          puVar4 = *(undefined2 **)(lVar1 + lVar6);
        }
        FUN_1446f470e(local_48,puVar4,1);
        FUN_144869592(param_1,local_4c,local_48,0);
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)lVar2 * 0x10 != lVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aceda0 FUN_142aceda0 body=465 status=ok
// SIG undefined FUN_142aceda0(void)

void FUN_142aceda0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1450));
  FUN_146294c32(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1450));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  FUN_140457ffc(&DAT_14c9485c0,param_1);
  FUN_140457ffc(&DAT_14c9485d8,param_1);
  FUN_140457ffc(&DAT_14c872cf8,param_1);
  FUN_140457ffc(&DAT_14c8673d8,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c926f30) {
    FUN_144b3d300(&DAT_14c926f30);
    if (DAT_14c926f30 == -1) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
  }
  uVar1 = (**(code **)(DAT_14c926ca8 + 0x30))(&DAT_14c926ca8);
  FUN_140457ffc(uVar1,param_1);
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    DAT_14c9485b8 = 0;
  }
  FUN_14574d3de(param_1 + 0xf38);
  FUN_1448a8284(param_1 + 0xf78);
  FUN_14574d3de(param_1 + 0xf90);
  FUN_14574d3de(param_1 + 0xfd0);
  FUN_14574d3de(param_1 + 0x1010);
  FUN_14574d3de(param_1 + 0x1050);
  FUN_14574d3de(param_1 + 0x1090);
  lVar2 = 0x10d0;
  do {
    FUN_14574d3de(param_1 + lVar2);
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x11d0);
  FUN_14574d3de(param_1 + 0x11d0);
  FUN_14574d3de(param_1 + 0x1210);
  FUN_14574d3de(param_1 + 0x12d0);
  FUN_14574d3de(param_1 + 0x1310);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 142acef72 FUN_142acef72 body=1735 status=ok
// SIG undefined FUN_142acef72(void)

void FUN_142acef72(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  PSRWLOCK SRWLock;
  bool bVar9;
  undefined1 auStack_2d8 [47];
  char local_2a9;
  PSRWLOCK local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *plStack_290;
  undefined2 local_288;
  longlong local_278;
  int local_270;
  undefined8 local_268;
  int local_260;
  longlong local_258;
  int local_250;
  undefined8 *local_248;
  ulonglong uStack_240;
  undefined2 local_230;
  undefined1 local_22d;
  undefined1 local_22b;
  undefined1 local_229;
  longlong local_228 [4];
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined1 local_178 [16];
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  LARGE_INTEGER local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined1 local_b8;
  undefined1 *local_a8;
  longlong **local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  plVar7 = param_1 + -5;
  if (param_2 == '\0') {
    local_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    uStack_111 = 0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10e = 0;
    LOCK();
    *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + 1;
    UNLOCK();
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1c8));
    LOCK();
    *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + -1;
    UNLOCK();
    local_298 = (longlong *)0x0;
    plStack_290 = (longlong *)0x0;
    local_288 = 0;
    local_208 = 0;
    local_200 = 0;
    local_228[0] = 0;
    local_228[1] = 0;
    local_1fc = 0xffffffff00000080;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0xffffffff00000080;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0xffffffffffffffff;
    local_180 = 1;
    lVar2 = FUN_140be8873();
    lVar3 = FUN_140be88df();
    plStack_290 = param_1 + 1;
    if ((char)param_1[0x102] == '\x01') {
      local_298 = param_1 + 0x103;
      if ((char)param_1[0x118] == '\0') {
        bVar9 = param_1[0x117] == lVar3;
      }
      else {
        bVar9 = false;
      }
    }
    else {
      local_298 = local_228;
      bVar9 = false;
    }
    local_288 = CONCAT11(param_1[0x119] == lVar2,bVar9);
  }
  else {
    (**(code **)(*param_1 + 0x270))(param_1);
    local_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    bVar9 = false;
    uStack_111 = 0;
    uStack_110 = 0;
    uStack_10f = 0;
    uStack_10e = 0;
    LOCK();
    *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + 1;
    UNLOCK();
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1c8));
    LOCK();
    *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + -1;
    UNLOCK();
    local_298 = (longlong *)0x0;
    plStack_290 = (longlong *)0x0;
    local_288 = 0;
    local_208 = 0;
    local_200 = 0;
    local_228[0] = 0;
    local_228[1] = 0;
    local_1fc = 0xffffffff00000080;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0xffffffff00000080;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0xffffffffffffffff;
    local_180 = 1;
    lVar2 = FUN_140be8873();
    lVar3 = FUN_140be88df();
    plStack_290 = param_1 + 1;
    if ((char)param_1[0x102] == '\x01') {
      local_298 = param_1 + 0x103;
      if ((char)param_1[0x118] == '\0') {
        bVar9 = param_1[0x117] == lVar3;
      }
      else {
        bVar9 = false;
      }
    }
    else {
      local_298 = local_228;
    }
    local_288 = CONCAT11(param_1[0x119] == lVar2,bVar9);
    FUN_146ff06c6(param_1 + 0x1c6,plVar7);
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x1c8);
  uStack_10f = 1;
  cVar1 = FUN_146ff0838(param_1 + 1);
  if (cVar1 != '\0') {
    local_2a8 = SRWLock;
    local_2a0 = plVar7;
    if ((char)param_1[0x1b8] == '\0') {
      QueryPerformanceCounter(&local_108);
      param_1[0x1b7] = (longlong)((double)local_108.QuadPart * DAT_14c83f420 + 16777216.0);
      *(undefined1 *)(param_1 + 0x1b8) = 1;
      *(undefined1 *)((longlong)param_1 + 0xdc1) = 0;
      *(undefined4 *)((longlong)param_1 + 0xdcc) = DAT_14c75f4cc;
    }
    lVar2 = param_1[0x12f];
    cVar1 = *(char *)(lVar2 + 0x6c);
    local_248 = (undefined8 *)0x0;
    uStack_240 = 0;
    local_2a9 = param_2;
    FUN_1412fac7e(&local_248,0,0,0);
    if ((longlong)(int)uStack_240 != 0) {
      puVar6 = local_248 + (longlong)(int)uStack_240 * 2;
      puVar8 = local_248;
      do {
        FUN_140056680(&local_108,&DAT_149dfb77a);
        FUN_141509698(&local_258,puVar8,&local_108);
        if (local_108.QuadPart != 0) {
          FUN_1400020a8();
        }
        local_268 = *puVar8;
        local_260 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          local_260 = 0;
        }
        local_278 = local_258;
        local_270 = local_250 + -1;
        if (local_250 == 0) {
          local_270 = 0;
        }
        FUN_146feb6c6(lVar2,&local_278,&local_268);
        iVar4 = local_250 + -1;
        if (local_250 == 0) {
          iVar4 = 0;
        }
        local_22d = 0;
        local_22b = 0;
        local_229 = 0;
        local_230 = 0x101;
        local_108.QuadPart = local_258;
        local_100 = CONCAT44(local_100._4_4_,iVar4);
        FUN_146febc4a(lVar2,&local_108,&local_230);
        if (local_258 != 0) {
          FUN_1400020a8();
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar6);
    }
    *(undefined1 *)((longlong)param_1 + 0xdc6) = 1;
    if (cVar1 == '\x01' && param_2 == '\0') {
      FUN_146fe8e58(lVar2);
      plVar7 = local_2a0;
      SRWLock = local_2a8;
      param_2 = local_2a9;
    }
    else {
      FUN_142acbcd6(lVar2,0xbf800000);
      local_108.QuadPart = -0x4010000000000000;
      local_100 = 0xbff0000000000000;
      local_f8 = 0;
      local_e8 = (longlong *)0x0;
      local_b8 = 0;
      local_a8 = local_178;
      local_a0 = &local_298;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0x100;
      FUN_142acf63a(param_1 + 1,&local_108);
      plVar7 = local_2a0;
      SRWLock = local_2a8;
      param_2 = local_2a9;
      if (local_88 != 0) {
        local_88 = 0;
        uStack_80 = 0;
      }
      if (local_98 != 0) {
        local_98 = 0;
        uStack_90 = 0;
      }
      if (local_f8 != 0) {
        plVar5 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar5 = local_d8;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    FUN_1447a1747(local_248,uStack_240 & 0xffffffff);
    if (local_248 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_190 = 0;
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(&local_1d8);
  local_1e0 = 0;
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(local_228);
  ReleaseSRWLockExclusive(SRWLock);
  FUN_140fdd62a(plVar7,local_178,0);
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x270))(param_1);
  }
  FUN_140cb5138(local_178);
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142acf63a FUN_142acf63a body=4227 status=ok
// SIG undefined FUN_142acf63a(void)

ulonglong FUN_142acf63a(LARGE_INTEGER param_1,double *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint3 uVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  DWORD DVar16;
  DWORD DVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined2 *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined8 unaff_R13;
  ulonglong uVar25;
  undefined7 uVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  byte local_1b9;
  ulonglong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  int *local_198;
  int local_18c;
  int local_188;
  int local_184;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined2 local_148;
  longlong local_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  int local_130;
  int local_12c;
  undefined1 local_128;
  double *local_120;
  double local_118;
  undefined8 local_110;
  undefined2 *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8 [2];
  LARGE_INTEGER local_e8;
  int *local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER *pLStack_d0;
  LARGE_INTEGER local_c8;
  int *piStack_c0;
  double *local_b8;
  double **local_b0;
  double *local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  piVar8 = (int *)param_2[0xc];
  bVar28 = true;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar14 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar14 != 2)) {
    if (iVar14 == 1) {
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      bVar28 = DVar16 == DVar17;
    }
    else {
      bVar28 = false;
    }
  }
  uVar25 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),3);
  if (*(longlong *)(param_1.QuadPart + 0x970) == 0) goto LAB_142acf6c0;
  local_120 = &local_118;
  local_118 = -1.0;
  local_148 = 0;
  local_1a0 = param_1.QuadPart + 0x978;
  local_140 = 0;
  uStack_138 = 0;
  uStack_137 = 0;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_198 = piVar8;
  FUN_146fe9a5c();
  local_1b9 = true;
  if (*(int *)(param_1.QuadPart + 0x980) <= *(int *)(param_1.QuadPart + 0x9ac)) {
    local_1b9 = *(int *)(param_1.QuadPart + 0xa64) < *(int *)(param_1.QuadPart + 0xa38);
  }
  iVar14 = *(int *)(param_1.QuadPart + 0xa24);
  iVar19 = *(int *)(param_1.QuadPart + 0xa28);
  if (iVar19 != iVar14) {
    if (*local_120 <= 0.0) {
      QueryPerformanceCounter(&local_c8);
      *local_120 = (double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0;
      iVar14 = *(int *)(param_1.QuadPart + 0xa24);
      iVar19 = *(int *)(param_1.QuadPart + 0xa28);
    }
    iVar19 = iVar19 - iVar14;
    local_a8 = (double *)0x0;
    local_a0 = 0;
    local_c8.QuadPart = 0;
    piStack_c0 = (int *)0x0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    if ((0 < iVar19) && (*(char *)(param_1.QuadPart + 0xdbd) == '\x01')) {
      local_d8.QuadPart = 0;
      pLStack_d0 = (LARGE_INTEGER *)0x0;
      FUN_1412fac7e(&local_d8,CONCAT71((uint7)(uint3)((uint)iVar19 >> 8),1),0,1);
      FUN_140e82fa0(&local_c8,&local_d8);
      FUN_1447a1747(local_d8.QuadPart,(ulonglong)pLStack_d0 & 0xffffffff);
      if ((code *)local_d8.QuadPart != (code *)0x0) {
        FUN_1400020a8();
      }
      iVar19 = *(int *)(param_1.QuadPart + 0xa28) - *(int *)(param_1.QuadPart + 0xa24);
    }
    FUN_147022c48(param_1.QuadPart + 0x8d0,iVar19);
    do {
      if ((int)(*(int *)(param_1.QuadPart + 0xa28) - *(uint *)(param_1.QuadPart + 0xa24)) < 1)
      break;
      lVar9 = *(longlong *)(param_1.QuadPart + 0xa18);
      lVar18 = (ulonglong)
               (*(uint *)(param_1.QuadPart + 0xa24) & *(uint *)(param_1.QuadPart + 0xa20)) * 0x10;
      local_108 = *(undefined2 **)(lVar9 + lVar18);
      *(undefined8 *)(lVar9 + lVar18) = 0;
      local_100 = *(int *)(lVar9 + 8 + lVar18);
      local_fc = *(undefined4 *)(lVar9 + 0xc + lVar18);
      *(undefined8 *)(lVar9 + 8 + lVar18) = 0;
      FUN_145c176fe(param_1.QuadPart + 0xa18,*(int *)(param_1.QuadPart + 0xa24),
                    *(int *)(param_1.QuadPart + 0xa24) + 1);
      *(int *)(param_1.QuadPart + 0xa24) = *(int *)(param_1.QuadPart + 0xa24) + 1;
      if ((*(char *)(param_1.QuadPart + 0xdbd) != '\x01') ||
         (cVar13 = FUN_146ff80d5(&local_108,&local_c8,local_f8), cVar13 != '\0')) {
        puVar21 = &DAT_149dfb77a;
        if (local_100 != 0) {
          puVar21 = local_108;
        }
        FUN_1446f470e(&local_110,puVar21,1);
        local_e0 = local_198;
        pLStack_d0 = &local_e8;
        local_d8.QuadPart = (LONGLONG)FUN_142adf94e;
        local_e8 = param_1;
        FUN_140a8f30a(param_1.QuadPart + 0x8d0,local_110,&local_d8);
      }
      cVar13 = FUN_146ff6cb2(param_2);
      if (local_108 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    } while (cVar13 == '\0');
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_c8);
  }
  cVar13 = FUN_146ff6cb2(param_2);
  if (cVar13 == '\0') {
    piStack_c0 = local_198;
    local_b0 = &local_120;
    local_c8 = param_1;
    local_b8 = param_2;
    local_a8 = param_2;
    FUN_142ad38c0(&local_c8,local_1a0);
    cVar13 = FUN_146ff6cb2(param_2);
    if (cVar13 == '\0') {
      local_180 = param_1.QuadPart + 0xc18;
      local_178 = param_1.QuadPart + 0xc68;
      local_1a8 = param_1.QuadPart + 0xcb8;
      local_1b0 = param_1.QuadPart + 0xd08;
      local_1b8 = param_1.QuadPart + 0xa80;
      iVar19 = 0;
      iVar14 = -1;
      while( true ) {
        if (bVar28) {
          FUN_142ad38c0(&local_c8,param_1.QuadPart + 0x9c8);
          cVar13 = FUN_146ff6cb2(param_2);
          if (cVar13 != '\0') goto LAB_142acfa22;
        }
        if (*(int *)(param_1.QuadPart + 0xa38) != *(int *)(param_1.QuadPart + 0xa64)) {
          if (*local_120 <= 0.0) {
            QueryPerformanceCounter(&local_d8);
            *local_120 = (double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0;
          }
          FUN_142ad57be(param_1.QuadPart,param_1.QuadPart + 0xa30,local_1a8,param_2);
        }
        cVar13 = FUN_146ff6cb2(param_2);
        if (cVar13 != '\0') goto LAB_142acfa22;
        if (bVar28 != false) break;
        if (*(int *)(param_1.QuadPart + 0x980) != *(int *)(param_1.QuadPart + 0x9ac))
        goto LAB_142acff92;
LAB_142acfe5a:
        uVar25 = local_1a0;
        if ((*(char *)((longlong)param_2 + 0x91) != '\x01') ||
           (((*(int *)(param_1.QuadPart + 0xc20) == *(int *)(param_1.QuadPart + 0xc4c) &&
             (*(int *)(param_1.QuadPart + 0xcc0) == *(int *)(param_1.QuadPart + 0xcec))) &&
            ((bVar28 == false ||
             ((*(int *)(param_1.QuadPart + 0xc70) == *(int *)(param_1.QuadPart + 0xc9c) &&
              (*(int *)(param_1.QuadPart + 0xd10) == *(int *)(param_1.QuadPart + 0xd3c)))))))))
        goto LAB_142acff92;
        if (*(char *)(param_1.QuadPart + 0xdc1) == '\0') {
          if (((*(char *)(param_1.QuadPart + 0xdc0) != '\0') ||
              (*(char *)(param_1.QuadPart + 0xdba) != '\x01')) || ((DAT_14c867cfc & 1) == 0))
          goto LAB_142acff92;
          *(undefined1 *)(param_1.QuadPart + 0xdc0) = 1;
        }
        *(undefined1 *)(param_1.QuadPart + 0xdc1) = 0;
        if (iVar14 == -1) {
          iVar19 = ((*(int *)(param_1.QuadPart + 0xc20) + *(int *)(param_1.QuadPart + 0xc70)) -
                   (*(int *)(param_1.QuadPart + 0xc4c) + *(int *)(param_1.QuadPart + 0xc9c))) + 10;
        }
        if (iVar19 <= iVar14 + 1) goto LAB_142acff92;
        local_18c = iVar14 + 1;
        FUN_146ff6d58(local_1a0,local_180);
        FUN_146ff6d58(param_1.QuadPart + 0x9c8,local_178);
        FUN_146ff6ef2(param_1.QuadPart + 0xa30,local_1a8);
        FUN_146ff6ef2(local_1b8,local_1b0);
        iVar14 = local_18c;
        FUN_142ad38c0(&local_c8,uVar25);
        cVar13 = FUN_146ff6cb2(param_2);
        if (cVar13 != '\0') goto LAB_142acfa22;
      }
      if (*(int *)(param_1.QuadPart + 0xa88) != *(int *)(param_1.QuadPart + 0xab4)) {
        if (*local_120 <= 0.0) {
          QueryPerformanceCounter(&local_d8);
          *local_120 = (double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0;
        }
        FUN_142ad57be(param_1.QuadPart,local_1b8,local_1b0,param_2);
      }
      cVar13 = FUN_146ff6cb2(param_2);
      if (cVar13 != '\0') goto LAB_142acfa22;
      if ((*(int *)(param_1.QuadPart + 0x980) == *(int *)(param_1.QuadPart + 0x9ac)) &&
         (*(int *)(param_1.QuadPart + 0x9d0) == *(int *)(param_1.QuadPart + 0x9fc)))
      goto LAB_142acfe5a;
LAB_142acff92:
      FUN_1408d9e0e(param_1.QuadPart + 0xbc8,0);
      FUN_146fece5c(param_1.QuadPart + 0xb70);
      FUN_146fece9c(param_1.QuadPart + 0xb18);
      if (*(int *)(param_1.QuadPart + 0xae0) != *(int *)(param_1.QuadPart + 0xadc)) {
        if (*local_120 <= 0.0) {
          QueryPerformanceCounter(&local_d8);
          *local_120 = (double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c99de98) && (FUN_144b3d300(), DAT_14c99de98 == -1)) {
          DAT_14c99de94 = '\x01';
          if (DAT_14c872ce0 != 0) {
            local_1c8 = &DAT_14c872ce8;
            FUN_14052bb08(DAT_14c872ce0,L"AssetRegistry",L"LoadCookedPackagesWithoutAssetData",
                          &DAT_14c99de94);
          }
          _Init_thread_footer();
        }
        lVar9 = param_1.QuadPart + 0xad0;
        uVar20 = *(uint *)(param_1.QuadPart + 0xadc);
        local_1b8 = lVar9;
        if (DAT_14c99de94 == '\x01') {
          if (0 < (int)(*(int *)(param_1.QuadPart + 0xae0) - uVar20)) {
            plVar1 = (longlong *)(local_198 + 0x12);
            do {
              lVar9 = *(longlong *)(param_1.QuadPart + 0xad0);
              lVar18 = (ulonglong)(uVar20 & *(uint *)(param_1.QuadPart + 0xad8)) * 0x10;
              uVar10 = *(undefined8 *)(lVar9 + lVar18);
              *(undefined8 *)(lVar9 + lVar18) = 0;
              uVar6 = *(undefined4 *)(lVar9 + 8 + lVar18);
              uVar7 = *(undefined4 *)(lVar9 + 0xc + lVar18);
              *(undefined8 *)(lVar9 + 8 + lVar18) = 0;
              FUN_145c176fe(local_1b8,*(int *)(param_1.QuadPart + 0xadc),
                            *(int *)(param_1.QuadPart + 0xadc) + 1);
              *(int *)(param_1.QuadPart + 0xadc) = *(int *)(param_1.QuadPart + 0xadc) + 1;
              iVar14 = local_198[0x14];
              local_198[0x14] = iVar14 + 1U;
              if ((uint)local_198[0x15] < iVar14 + 1U) {
                FUN_1447a1bd6(plVar1,iVar14);
              }
              lVar9 = *plVar1;
              lVar18 = (longlong)iVar14 * 0x10;
              *(undefined8 *)(lVar9 + lVar18) = uVar10;
              *(undefined4 *)(lVar9 + 8 + lVar18) = uVar6;
              *(undefined4 *)(lVar9 + 0xc + lVar18) = uVar7;
              uVar20 = *(uint *)(param_1.QuadPart + 0xadc);
            } while (0 < (int)(*(int *)(param_1.QuadPart + 0xae0) - uVar20));
          }
          if (0.0 < *param_2) {
            *(undefined1 *)(param_2 + 10) = 1;
          }
        }
        else {
          FUN_145c176fe(lVar9);
          *(undefined8 *)(param_1.QuadPart + 0xadc) = 0;
          local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,8);
          FUN_1446f8d3c(lVar9,0,0,0x10);
          *(undefined8 *)(param_1.QuadPart + 0xad8) = 0xffffffff;
          *(undefined4 *)(param_1.QuadPart + 0xae0) = 0;
        }
        cVar13 = FUN_146ff6cb2(param_2);
        if (cVar13 != '\0') goto LAB_142acfa22;
      }
      if (*(int *)(param_1.QuadPart + 0xaf8) != *(int *)(param_1.QuadPart + 0xaf4)) {
        if (*local_120 <= 0.0) {
          QueryPerformanceCounter(&local_d8);
          *local_120 = (double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0;
        }
        if ((code *)param_2[0x10] != (code *)0x0) {
          (*(code *)param_2[0x10])(param_2[0x11],param_1.QuadPart + 0xae8);
        }
        do {
          uVar20 = *(uint *)(param_1.QuadPart + 0xaf4);
          if ((int)(*(int *)(param_1.QuadPart + 0xaf8) - uVar20) < 1) break;
          uVar10 = *(undefined8 *)
                    (*(longlong *)(param_1.QuadPart + 0xae8) +
                    (ulonglong)(*(uint *)(param_1.QuadPart + 0xaf0) & uVar20) * 8);
          *(uint *)(param_1.QuadPart + 0xaf4) = uVar20 + 1;
          FUN_146ff6672(param_1.QuadPart,local_198,uVar10);
          cVar13 = FUN_146ff6cb2(param_2);
        } while (cVar13 == '\0');
        cVar13 = FUN_146ff6cb2(param_2);
        if (cVar13 != '\0') goto LAB_142acfa22;
      }
      if (*(int *)(param_1.QuadPart + 0xb08) != 0) {
        FUN_1457de550(local_198 + 0x16,param_1.QuadPart + 0xb00);
        iVar14 = *(int *)(param_1.QuadPart + 0xb0c);
        FUN_1447a1747(*(undefined8 *)(param_1.QuadPart + 0xb00),
                      *(undefined4 *)(param_1.QuadPart + 0xb08));
        *(undefined4 *)(param_1.QuadPart + 0xb08) = 0;
        if ((iVar14 < 0) && (*(int *)(param_1.QuadPart + 0xb0c) != 0)) {
          FUN_1408be2c4(param_1.QuadPart + 0xb00,0);
        }
      }
      uVar20 = *(uint *)(param_1.QuadPart + 0xa28);
      local_168 = (ulonglong)uVar20;
      uVar2 = *(uint *)(param_1.QuadPart + 0xa24);
      local_150 = (ulonglong)uVar2;
      uVar3 = *(uint *)(param_1.QuadPart + 0x980);
      local_170 = (ulonglong)uVar3;
      uVar4 = *(uint *)(param_1.QuadPart + 0x9ac);
      local_160 = (ulonglong)uVar4;
      local_188 = *(int *)(param_1.QuadPart + 0xa38);
      local_184 = *(int *)(param_1.QuadPart + 0xa64);
      uVar5 = *(uint *)(param_1.QuadPart + 0xadc);
      local_158 = (ulonglong)uVar5;
      local_18c = *(int *)(param_1.QuadPart + 0xcc0);
      iVar14 = *(int *)(param_1.QuadPart + 0xcec);
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar14);
      uVar24 = local_12c + local_130 + uVar20 + uVar3 + *(int *)(param_1.QuadPart + 0x9d0) +
               local_188 + *(int *)(param_1.QuadPart + 0xa88) + *(uint *)(param_1.QuadPart + 0xae0)
               + *(int *)(param_1.QuadPart + 0xc20) + *(int *)(param_1.QuadPart + 0xc70) + local_18c
               + *(int *)(param_1.QuadPart + 0xd10);
      uVar25 = (ulonglong)uVar24;
      uVar22 = uVar4 + uVar2 + *(int *)(param_1.QuadPart + 0x9fc) + local_184 +
               *(int *)(param_1.QuadPart + 0xab4) + uVar5 + *(int *)(param_1.QuadPart + 0xc4c) +
               *(int *)(param_1.QuadPart + 0xc9c) + iVar14 + *(int *)(param_1.QuadPart + 0xd3c);
      iVar15 = uVar24 - uVar22;
      iVar19 = *(int *)(param_1.QuadPart + 0xdac);
      if (*(int *)(param_1.QuadPart + 0xdac) < iVar15) {
        iVar19 = iVar15;
      }
      *(int *)(param_1.QuadPart + 0xdac) = iVar19;
      uVar11 = (uint3)(uVar24 >> 8);
      if (*(char *)(param_2 + 10) == '\0') {
        if (((byte)local_148 == '\0') && (uVar24 == uVar22)) goto LAB_142ad01ae;
        uVar25 = CONCAT71((uint7)uVar11,4);
        if (local_148._1_1_ != '\0') {
          uVar25 = (ulonglong)(CONCAT31((int3)(uVar22 >> 8),local_148._1_1_) ^ 1);
          goto LAB_142ad014f;
        }
      }
      else {
        uVar25 = (ulonglong)CONCAT31(uVar11,*(byte *)(param_1.QuadPart + 0xdbb));
        if ((*(byte *)(param_1.QuadPart + 0xdbb) & 0xfe) == 4) {
          uVar25 = (ulonglong)CONCAT31(uVar11,local_148._1_1_) ^ 1;
        }
LAB_142ad014f:
        if ((char)uVar25 == '\x03') {
LAB_142ad01ae:
          uVar26 = (undefined7)(uVar25 >> 8);
          uVar25 = CONCAT71(uVar26,3);
          if (((((*(byte *)(param_1.QuadPart + 0xdb9) & 1) == 0) &&
               (uVar25 = CONCAT71(uVar26,4), *(char *)(param_1.QuadPart + 0xdba) == '\x01')) &&
              ((bVar28 & DAT_14c867cfc) == 1)) &&
             ((*(char *)(param_2 + 0x12) == '\x01' &&
              (uVar25 = CONCAT71(uVar26,5), local_198[0xc] == 0)))) {
            if (0.0 < local_118) {
              QueryPerformanceCounter(&local_d8);
              *(float *)(param_1.QuadPart + 0xda8) =
                   (float)(((double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0) - local_118) +
                   *(float *)(param_1.QuadPart + 0xda8);
              local_118 = -1.0;
            }
            FUN_146ff708e(param_1.QuadPart,local_198);
            uVar25 = CONCAT71(uVar26,3);
          }
        }
        else if (((uint)uVar25 & 0xff) == 1) {
          uVar25 = CONCAT71((int7)(uVar25 >> 8),
                            (local_18c == iVar14 &&
                            (uVar20 == uVar2 &&
                            ((*(uint *)(param_1.QuadPart + 0xae0) == uVar5 && local_188 == local_184
                             ) && (uVar3 == uVar4 &&
                                  *(int *)(param_1.QuadPart + 0xc20) ==
                                  *(int *)(param_1.QuadPart + 0xc4c))))) + '\x01');
        }
      }
      cVar13 = (char)uVar25;
      if (((local_1b9 | (byte)local_148) & 1) == 0) {
        if (cVar13 == '\x03') {
          if (*(char *)(param_1.QuadPart + 0xdbb) != '\x03') goto LAB_142ad0210;
          goto LAB_142ad0252;
        }
        goto LAB_142acfbf1;
      }
LAB_142ad0210:
      iVar14 = *(int *)(param_1.QuadPart + 0xdac);
      *local_198 = iVar14;
      local_198[1] = iVar14 - iVar15;
      local_198[2] = iVar15 / 2;
      *(undefined1 *)(local_198 + 3) = local_128;
      *(undefined1 *)(local_198 + 4) = 1;
      *(char *)(param_1.QuadPart + 0xdbb) = cVar13;
      if (cVar13 == '\x03') {
LAB_142ad0252:
        *(undefined4 *)(param_1.QuadPart + 0xdac) = 0;
        FUN_146ff7134(local_1a0);
        lVar9 = local_180;
        FUN_146ffecfa(local_180);
        FUN_146ffedbe(lVar9,*(int *)(param_1.QuadPart + 0xc20) - *(int *)(param_1.QuadPart + 0xc4c))
        ;
        lVar9 = local_178;
        FUN_146ffecfa(local_178);
        FUN_146ffedbe(lVar9,*(int *)(param_1.QuadPart + 0xc70) - *(int *)(param_1.QuadPart + 0xc9c))
        ;
        lVar9 = local_1a8;
        FUN_146ffee02(local_1a8);
        FUN_146ffdf0a(lVar9,*(int *)(param_1.QuadPart + 0xcc0) - *(int *)(param_1.QuadPart + 0xcec))
        ;
        uVar12 = local_1b0;
        FUN_146ffee02(local_1b0);
        FUN_146ffdf0a(uVar12,*(int *)(param_1.QuadPart + 0xd10) - *(int *)(param_1.QuadPart + 0xd3c)
                     );
        uVar25 = CONCAT71((int7)(uVar25 >> 8),3);
      }
      goto LAB_142acfbf8;
    }
  }
LAB_142acfa22:
  uVar20 = *(uint *)(param_1.QuadPart + 0xa24);
  local_1a0 = (ulonglong)uVar20;
  uVar2 = *(uint *)(param_1.QuadPart + 0x9ac);
  local_1b8 = (ulonglong)uVar2;
  iVar14 = *(int *)(param_1.QuadPart + 0xa64);
  uVar3 = *(uint *)(param_1.QuadPart + 0xadc);
  local_1b0 = (ulonglong)uVar3;
  local_1a8 = CONCAT44(local_1a8._4_4_,iVar14);
  iVar23 = local_12c + local_130 + *(uint *)(param_1.QuadPart + 0xa28) +
           *(uint *)(param_1.QuadPart + 0x980) + *(int *)(param_1.QuadPart + 0x9d0) +
           *(int *)(param_1.QuadPart + 0xa38) + *(int *)(param_1.QuadPart + 0xa88) +
           *(uint *)(param_1.QuadPart + 0xae0) + *(int *)(param_1.QuadPart + 0xc20) +
           *(int *)(param_1.QuadPart + 0xc70) + *(int *)(param_1.QuadPart + 0xcc0) +
           *(int *)(param_1.QuadPart + 0xd10);
  iVar27 = uVar2 + uVar20 + *(int *)(param_1.QuadPart + 0x9fc) + iVar14 +
           *(int *)(param_1.QuadPart + 0xab4) + uVar3 + *(int *)(param_1.QuadPart + 0xc4c) +
           *(int *)(param_1.QuadPart + 0xc9c) + *(int *)(param_1.QuadPart + 0xcec) +
           *(int *)(param_1.QuadPart + 0xd3c);
  iVar15 = iVar23 - iVar27;
  iVar19 = *(int *)(param_1.QuadPart + 0xdac);
  if (*(int *)(param_1.QuadPart + 0xdac) < iVar15) {
    iVar19 = iVar15;
  }
  *(int *)(param_1.QuadPart + 0xdac) = iVar19;
  uVar11 = (uint3)((uint)iVar23 >> 8);
  if (*(char *)(param_2 + 10) == '\0') {
    if (((byte)local_148 != 0) || (iVar23 != iVar27)) {
      uVar25 = CONCAT71((uint7)uVar11,4);
      if (local_148._1_1_ != '\0') {
        uVar25 = (ulonglong)CONCAT31((int3)((uint)iVar27 >> 8),local_148._1_1_) ^ 1;
        goto LAB_142acfb5d;
      }
      goto LAB_142acfbaa;
    }
    uVar25 = CONCAT71((uint7)uVar11,3);
    if (local_1b9 == 0) {
LAB_142acfbb9:
      uVar25 = CONCAT71((int7)(uVar25 >> 8),3);
      if (*(char *)(param_1.QuadPart + 0xdbb) == '\x03') goto LAB_142acfbf1;
    }
LAB_142acfbc5:
    *local_198 = iVar19;
    local_198[1] = iVar19 - iVar15;
    local_198[2] = iVar15 / 2;
    *(undefined1 *)(local_198 + 3) = local_128;
    *(undefined1 *)(local_198 + 4) = 1;
  }
  else {
    uVar25 = (ulonglong)CONCAT31(uVar11,*(byte *)(param_1.QuadPart + 0xdbb));
    if ((*(byte *)(param_1.QuadPart + 0xdbb) & 0xfe) == 4) {
      uVar25 = (ulonglong)CONCAT31(uVar11,local_148._1_1_) ^ 1;
    }
LAB_142acfb5d:
    if ((char)uVar25 == '\x01') {
      uVar26 = (undefined7)(uVar25 >> 8);
      uVar25 = CONCAT71(uVar26,1);
      if (*(int *)(param_1.QuadPart + 0xcc0) != *(int *)(param_1.QuadPart + 0xcec) ||
          (*(uint *)(param_1.QuadPart + 0xa28) != uVar20 ||
          ((*(uint *)(param_1.QuadPart + 0xae0) != uVar3 ||
           *(int *)(param_1.QuadPart + 0xa38) != iVar14) ||
          (*(uint *)(param_1.QuadPart + 0x980) != uVar2 ||
          *(int *)(param_1.QuadPart + 0xc20) != *(int *)(param_1.QuadPart + 0xc4c)))))
      goto LAB_142acfbaa;
      uVar25 = CONCAT71(uVar26,2);
      if ((((byte)local_148 | local_1b9) & 1) != 0) goto LAB_142acfbc5;
    }
    else {
LAB_142acfbaa:
      if ((((byte)local_148 | local_1b9) & 1) != 0) goto LAB_142acfbc5;
      if ((char)uVar25 == '\x03') goto LAB_142acfbb9;
    }
  }
LAB_142acfbf1:
  *(char *)(param_1.QuadPart + 0xdbb) = (char)uVar25;
LAB_142acfbf8:
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if (0.0 < local_118) {
    QueryPerformanceCounter(&local_c8);
    *(float *)(param_1.QuadPart + 0xda8) =
         (float)(((double)local_c8.QuadPart * DAT_14c83f420 + 16777216.0) - local_118) +
         *(float *)(param_1.QuadPart + 0xda8);
  }
LAB_142acf6c0:
  if ((local_70 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25 & 0xffffffff;
}


