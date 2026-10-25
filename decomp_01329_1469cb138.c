// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1469cb138 FUN_1469cb138 body=862 status=ok
// SIG undefined FUN_1469cb138(void)

void FUN_1469cb138(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60 [16];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = FUN_14001cc68(0x138,0x10);
  FUN_1469d24c4(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f054e0;
  plVar5[2] = lVar4;
  if ((lVar4 != 0) &&
     (((*(longlong *)(lVar4 + 8) == 0 || (*(longlong *)(lVar4 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar4 + 0x10) + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(lVar4 + 8) = lVar4;
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (plVar6 != (longlong *)0x0) {
LAB_1469cb213:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar4 + 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_1469cb454;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong *)(lVar4 + 8) = lVar4;
      if (*(longlong **)(lVar4 + 0x10) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar4 + 0x10);
        if (plVar6 != (longlong *)0x0) goto LAB_1469cb213;
        *(longlong **)(lVar4 + 0x10) = plVar5;
      }
LAB_1469cb454:
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
  }
  *(longlong *)(param_1 + 0x368) = lVar4;
  plVar6 = *(longlong **)(param_1 + 0x370);
  if (plVar5 == plVar6) {
    if (plVar5 == (longlong *)0x0) goto LAB_1469cb255;
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1469cb255;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    *(longlong **)(param_1 + 0x370) = plVar5;
    if (plVar6 == (longlong *)0x0) goto LAB_1469cb255;
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1469cb255;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1469cb255:
  lVar4 = FUN_1469d256c();
  uVar3 = *(undefined8 *)(param_1 + 0x368);
  local_50 = FUN_1469d2746;
  local_48 = 0;
  FUN_1469d25c4(local_40,param_1,&local_50);
  local_50 = FUN_1469d27f0;
  local_48 = 0;
  FUN_1469d0bb8(local_60,param_1,&local_50);
  local_70 = *(undefined8 *)(lVar4 + 0x90);
  local_68 = *(longlong *)(lVar4 + 0x98);
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_d8 = 0;
  FUN_1469baea0(uVar3,&local_70,local_60,local_40);
  uVar3 = *(undefined8 *)(param_1 + 0x368);
  local_50 = FUN_1469d288a;
  local_48 = 0;
  FUN_1469d25c4(local_80,param_1,&local_50);
  local_50 = FUN_1469d2aa6;
  local_48 = 0;
  FUN_1469d0bb8(local_90,param_1,&local_50);
  local_a0 = *(undefined8 *)(lVar4 + 0xa0);
  local_98 = *(longlong *)(lVar4 + 0xa8);
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  local_d8 = 0;
  FUN_1469baea0(uVar3,&local_a0,local_90,local_80);
  uVar3 = *(undefined8 *)(param_1 + 0x368);
  local_50 = FUN_1469d2b20;
  local_48 = 0;
  FUN_1469d25c4(local_b0,param_1,&local_50);
  local_50 = FUN_1469d2b46;
  local_48 = 0;
  FUN_1469d0bb8(local_c0,param_1,&local_50);
  local_d0 = *(undefined8 *)(lVar4 + 0xb0);
  local_c8 = *(longlong *)(lVar4 + 0xb8);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  local_d8 = 0;
  FUN_1469baea0(uVar3,&local_d0,local_c0,local_b0);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cb498 FUN_1469cb498 body=88 status=ok
// SIG undefined FUN_1469cb498(void)

undefined8 * FUN_1469cb498(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1469efec0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1469cb4f0 FUN_1469cb4f0 body=163 status=ok
// SIG undefined FUN_1469cb4f0(void)

longlong FUN_1469cb4f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469eff22(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cb5a0 FUN_1469cb5a0 body=62 status=ok
// SIG undefined FUN_1469cb5a0(void)

longlong FUN_1469cb5a0(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined2 *)(param_1 + 0x1d0) = 0x100;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return param_1;
}



// FUNCTION 1469cb5de FUN_1469cb5de body=115 status=ok
// SIG undefined FUN_1469cb5de(void)

longlong * FUN_1469cb5de(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469d2ce6(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1469cb652 FUN_1469cb652 body=163 status=ok
// SIG undefined FUN_1469cb652(void)

longlong FUN_1469cb652(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469eff22(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cb6f6 FUN_1469cb6f6 body=82 status=ok
// SIG undefined FUN_1469cb6f6(void)

undefined1 * FUN_1469cb6f6(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = FUN_1459b8360(param_1 + 0x2f8);
  if (cVar1 == '\0') {
    cVar1 = FUN_14692f5de(param_1 + 0x2f8);
    puVar2 = &DAT_14c96b23c;
    if (cVar1 != '\0') {
      puVar2 = &DAT_14c96b1e1;
    }
  }
  else {
    puVar2 = &DAT_14c96b23c;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1469cb748 FUN_1469cb748 body=183 status=ok
// SIG undefined FUN_1469cb748(void)

longlong FUN_1469cb748(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469f064e(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x280) = local_38;
  *(undefined4 *)(param_1 + 0x270) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x274) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x278) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x27c) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x288,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cb800 FUN_1469cb800 body=51 status=ok
// SIG undefined FUN_1469cb800(void)

undefined8 * FUN_1469cb800(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14692f614(param_1 + 0x2f8);
  *param_2 = 0x3ff0000000000000;
  param_2[1] = (double)fVar1;
  return param_2;
}



// FUNCTION 1469cb834 FUN_1469cb834 body=178 status=ok
// SIG undefined FUN_1469cb834(void)

longlong FUN_1469cb834(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_1469f0b72(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x230) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x228) = local_40;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cb8e8 FUN_1469cb8e8 body=389 status=ok
// SIG undefined FUN_1469cb8e8(void)

undefined8 FUN_1469cb8e8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e8c8) {
    FUN_144b3d300(&DAT_14c98e8c8);
    if (DAT_14c98e8c8 == -1) {
      plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
      if (plVar1 == (longlong *)0x0) {
        plVar1 = DAT_14c96b350;
      }
      FUN_1446ddc76(&local_28,"Brushes.Title",1);
      DAT_14c98e8c0 = (**(code **)(*plVar1 + 0x50))(plVar1,local_28,0,0);
      _Init_thread_footer(&DAT_14c98e8c8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e8d8) {
    FUN_144b3d300(&DAT_14c98e8d8);
    if (DAT_14c98e8d8 == -1) {
      plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
      if (plVar1 == (longlong *)0x0) {
        plVar1 = DAT_14c96b350;
      }
      FUN_1446ddc76(&local_30,"Brushes.Background",1);
      DAT_14c98e8d0 = (**(code **)(*plVar1 + 0x50))(plVar1,local_30,0,0);
      _Init_thread_footer(&DAT_14c98e8d8);
    }
  }
  puVar2 = &DAT_14c98e8d0;
  if (*(char *)(param_1 + 0x378) != '\0') {
    puVar2 = &DAT_14c98e8c0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cba6e FUN_1469cba6e body=732 status=ok
// SIG undefined FUN_1469cba6e(void)

undefined1 * FUN_1469cba6e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined8 *local_220;
  undefined4 *local_218;
  undefined1 local_210;
  undefined8 *local_208;
  undefined1 *local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_19a;
  undefined1 local_199;
  undefined1 local_198 [296];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  lVar5 = DAT_14c966fa0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966fa0;
    UNLOCK();
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
  if (lVar3 == lVar5) {
    if (*(longlong *)(param_4 + 0x18) == 0) {
      local_70 = 0;
      local_68 = 0x400000000;
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_198[0] = DAT_14c96b238;
    }
    else {
      FUN_1413f6ca8(local_198);
    }
    plVar4 = DAT_14c98e618;
    local_199 = 0;
    local_1b8 = DAT_14c84635c;
    local_1bc = 5;
    (**(code **)(*DAT_14c98e618 + 0x68))(DAT_14c98e618,&local_1d0);
    local_1c8 = local_1d0;
    FUN_1469cf488(param_1);
    local_1e8 = *(longlong **)(param_1 + 0x10);
    if (local_1e8 == (longlong *)0x0) {
      local_1e8 = (longlong *)0x0;
      local_1f0 = 0;
    }
    else {
      iVar7 = (int)local_1e8[1];
      local_1f0 = 0;
      do {
        if (iVar7 == 0) {
          local_1e8 = (longlong *)0x0;
          goto LAB_1469cbc22;
        }
        LOCK();
        iVar6 = (int)local_1e8[1];
        bVar8 = iVar7 == iVar6;
        if (bVar8) {
          *(int *)(local_1e8 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar8);
      local_1f0 = *(undefined8 *)(param_1 + 8);
    }
LAB_1469cbc22:
    local_1f8 = 1;
    local_200 = &local_19a;
    local_208 = &local_1b8;
    local_210 = 1;
    local_218 = &local_1bc;
    local_220 = &local_1c8;
    local_228 = local_1e0;
    FUN_1428f4aae(plVar4,local_1b0,&local_1f0,local_198);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1a8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar2 = (int *)((longlong)local_1a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1a8 + 0x10))(local_1a8);
        }
      }
    }
    plVar4 = local_1e8;
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1d8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
        }
      }
    }
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    FUN_1447fa21a(local_198);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cbd4c FUN_1469cbd4c body=178 status=ok
// SIG undefined FUN_1469cbd4c(void)

longlong FUN_1469cbd4c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_1469f0b72(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cbe00 FUN_1469cbe00 body=163 status=ok
// SIG undefined FUN_1469cbe00(void)

undefined8 FUN_1469cbe00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(lVar3 + 0x220) == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0)) {
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar6 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar6);
      plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar6);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) goto LAB_1469cbe29;
    }
    uVar5 = FUN_141319416();
  }
  else {
    plVar7 = *(longlong **)(lVar3 + 0x228);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
LAB_1469cbe29:
    uVar5 = FUN_146a5840c();
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
  return uVar5;
}



// FUNCTION 1469cbea4 FUN_1469cbea4 body=163 status=ok
// SIG undefined FUN_1469cbea4(void)

undefined8 FUN_1469cbea4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(lVar3 + 0x220) == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0)) {
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar6 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar6);
      plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar6);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) goto LAB_1469cbecd;
    }
    uVar5 = FUN_141319416();
  }
  else {
    plVar7 = *(longlong **)(lVar3 + 0x228);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
LAB_1469cbecd:
    uVar5 = FUN_146a583e4();
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
  return uVar5;
}



// FUNCTION 1469cbf48 FUN_1469cbf48 body=183 status=ok
// SIG undefined FUN_1469cbf48(void)

longlong FUN_1469cbf48(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469f159c(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a58be0(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1d0) = local_38;
  *(undefined4 *)(param_1 + 0x1c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1cc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cc000 FUN_1469cc000 body=167 status=ok
// SIG undefined FUN_1469cc000(void)

undefined8 * FUN_1469cc000(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x290);
  lVar4 = *(longlong *)(lVar3 + 0x220);
  if (lVar4 == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      lVar5 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar5);
      plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar5);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) goto LAB_1469cc02c;
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar6 = *(longlong **)(lVar3 + 0x228);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
LAB_1469cc02c:
    FUN_146a584bc(lVar4,param_2);
  }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 1469cc0a8 FUN_1469cc0a8 body=169 status=ok
// SIG undefined FUN_1469cc0a8(void)

longlong FUN_1469cc0a8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469d079c(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x100);
  local_30 = 0;
  local_28 = 0;
  FUN_14096c7c0(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x88) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x90,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cc152 FUN_1469cc152 body=429 status=ok
// SIG undefined FUN_1469cc152(void)

ulonglong FUN_1469cc152(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  undefined7 uVar10;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x250))(param_1,&local_50);
  plVar11 = *(longlong **)(local_50 + 0x2e8);
  bVar4 = true;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar6 = (int)plVar11[1];
    lVar12 = 0;
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        goto LAB_1469cc1b9;
      }
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar12 = *(longlong *)(local_50 + 0x2e0);
    bVar4 = false;
  }
LAB_1469cc1b9:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_48 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  uVar10 = (undefined7)((ulonglong)local_48 >> 8);
  uVar9 = CONCAT71(uVar10,1);
  if (*(char *)(lVar12 + 0x188) != '\x01') goto LAB_1469cc264;
  lVar3 = param_1[0x52];
  lVar7 = *(longlong *)(lVar3 + 0x220);
  if (lVar7 == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0))
    goto LAB_1469cc264;
    lVar8 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar8);
    plVar13 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    uVar9 = CONCAT71(uVar10,1);
    if (lVar7 != 0) goto LAB_1469cc2c9;
  }
  else {
    plVar13 = *(longlong **)(lVar3 + 0x228);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
LAB_1469cc2c9:
    FUN_146a584e0(lVar7,&local_50);
    FUN_1469d1cbc(lVar12,&local_40,&local_50);
    uVar9 = (ulonglong)(local_40 == 2);
    if ((char)local_3c == '\0') {
      uVar9 = (ulonglong)local_3c;
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_1469cc264:
  if (!bVar4) {
    LOCK();
    plVar13 = plVar11 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1469cc300 FUN_1469cc300 body=76 status=ok
// SIG undefined FUN_1469cc300(void)

undefined1 * FUN_1469cc300(undefined8 param_1,undefined1 *param_2)

{
  FUN_1469c8b9e();
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1469cc34c FUN_1469cc34c body=163 status=ok
// SIG undefined FUN_1469cc34c(void)

longlong FUN_1469cc34c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469eff22(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cc3f0 FUN_1469cc3f0 body=82 status=ok
// SIG undefined FUN_1469cc3f0(void)

undefined1 * FUN_1469cc3f0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = FUN_1459b8360(param_1 + 0x2f8);
  if (cVar1 == '\0') {
    cVar1 = FUN_14692f5de(param_1 + 0x2f8);
    puVar2 = &DAT_14c96b1e1;
    if (cVar1 != '\0') {
      puVar2 = &DAT_14c96b238;
    }
  }
  else {
    puVar2 = &DAT_14c96b238;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1469cc442 FUN_1469cc442 body=183 status=ok
// SIG undefined FUN_1469cc442(void)

longlong FUN_1469cc442(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469f064e(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x290) = local_38;
  *(undefined4 *)(param_1 + 0x280) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x284) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x288) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x28c) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x298,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cc4fa FUN_1469cc4fa body=102 status=ok
// SIG undefined FUN_1469cc4fa(void)

double * FUN_1469cc4fa(longlong param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)FUN_14692f614(param_1 + 0x2f8);
  dVar2 = (DAT_14c846328 * 8.0 - DAT_14c846328) * (double)fVar1 + DAT_14c846328;
  *param_2 = (DAT_14c846320 * 8.0 - DAT_14c846320) * (double)fVar1 + DAT_14c846320;
  param_2[1] = dVar2;
  return param_2;
}



// FUNCTION 1469cc560 FUN_1469cc560 body=200 status=ok
// SIG undefined FUN_1469cc560(void)

longlong FUN_1469cc560(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_1469f1ff0(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2e0) = local_38;
  *(undefined4 *)(param_1 + 0x2d0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2d4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2d8) = uStack_40;
  *(undefined4 *)(param_1 + 0x2dc) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2e4) = local_34;
  FUN_144a450dc(param_1 + 0x2e8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cc62a FUN_1469cc62a body=70 status=ok
// SIG undefined FUN_1469cc62a(void)

undefined8 * FUN_1469cc62a(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14692f614(param_1 + 0x2f8);
  *param_2 = &DAT_3f8000003f800000;
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *(float *)((longlong)param_2 + 0xc) = 1.0 - fVar1;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 1469cc670 FUN_1469cc670 body=73 status=ok
// SIG undefined FUN_1469cc670(void)

longlong FUN_1469cc670(longlong param_1,longlong *param_2)

{
  FUN_140008f88();
  *(char *)(param_1 + 0x10) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x18,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 1469cc6ba FUN_1469cc6ba body=567 status=ok
// SIG undefined FUN_1469cc6ba(void)

void FUN_1469cc6ba(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = *(longlong **)(param_1 + 0x2c8);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar6 + 0x240))(plVar6,&local_38);
  FUN_1469b8a1e(*(undefined8 *)(param_1 + 0x2a0),param_3);
  FUN_1469b8a1e(*(undefined8 *)(param_1 + 0x2a8),param_3 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(lVar2 + 0x220) == 0) {
    if ((*(int *)(lVar2 + 0x200) < 1) || ((longlong)*(int *)(lVar2 + 0x250) < 0))
    goto LAB_1469cc76e;
    lVar5 = (longlong)*(int *)(lVar2 + 0x250) * 0x10;
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x1f8) + lVar5);
    plVar6 = *(longlong **)(*(longlong *)(lVar2 + 0x1f8) + 8 + lVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      bVar7 = lVar4 == 0;
      goto LAB_1469cc74c;
    }
    if (lVar4 == 0) goto LAB_1469cc76e;
  }
  else {
    plVar6 = *(longlong **)(lVar2 + 0x228);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      bVar7 = false;
LAB_1469cc74c:
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (bVar7) goto LAB_1469cc76e;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x290);
  lVar4 = *(longlong *)(lVar2 + 0x220);
  if (lVar4 == 0) {
    if ((0 < *(int *)(lVar2 + 0x200)) && (-1 < (longlong)*(int *)(lVar2 + 0x250))) {
      lVar5 = (longlong)*(int *)(lVar2 + 0x250) * 0x10;
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x1f8) + lVar5);
      plVar6 = *(longlong **)(*(longlong *)(lVar2 + 0x1f8) + 8 + lVar5);
      goto LAB_1469cc7e8;
    }
    lVar4 = 0;
LAB_1469cc847:
    FUN_146a58938(lVar4,&local_48);
  }
  else {
    plVar6 = *(longlong **)(lVar2 + 0x228);
LAB_1469cc7e8:
    if (plVar6 == (longlong *)0x0) goto LAB_1469cc847;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    FUN_146a58938(lVar4,&local_48);
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_48 != 0) {
    plVar6 = *(longlong **)(local_48 + 0x630);
    plVar3 = *(longlong **)(local_48 + 0x638);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_3 + 0x20);
    local_50 = *(longlong *)(param_3 + 0x28);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_58);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1469cc76e:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cc8f2 FUN_1469cc8f2 body=816 status=ok
// SIG undefined FUN_1469cc8f2(void)

undefined8 * FUN_1469cc8f2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_8a8 [32];
  undefined1 *local_888;
  undefined1 local_879;
  undefined1 local_878 [8];
  longlong *local_870;
  undefined1 local_859;
  wchar_t *local_858;
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined8 local_840;
  undefined1 local_838 [4];
  undefined1 local_834 [4];
  longlong *local_830 [2];
  undefined1 local_820 [16];
  undefined1 local_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  longlong *local_7f0;
  undefined8 local_7e8;
  longlong *local_7e0;
  undefined1 local_7d8 [1136];
  undefined1 local_368 [424];
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined1 *local_1b0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  FUN_140a562d0(local_368);
  local_1b0 = &DAT_200000002;
  FUN_140a570d8(local_7d8);
  local_858 = L"DocumentArea";
  local_850 = 0xc;
  FUN_1446e940c(local_834,&local_858);
  local_858 = L"DockTabStack";
  local_850 = 0xc;
  FUN_1446e940c(local_838,&local_858);
  FUN_140208bae(local_830,local_838,local_834,L"Document Area");
  FUN_14023423e(local_820,local_830);
  local_810 = 1;
  local_808 = 0;
  uStack_800 = 0;
  lVar5 = FUN_140a54906(local_7d8,local_820);
  FUN_1446ddc76(&local_840,"EmbossedText",1);
  lVar6 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar6 == 0) {
    lVar6 = DAT_14c96b350;
  }
  uVar7 = FUN_140a57516(lVar6,local_840,0,0);
  *(undefined8 *)(lVar5 + 0x1d0) = uVar7;
  local_888 = &local_859;
  FUN_140a54526(&local_858,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x28);
  FUN_140a52852(&local_858,&local_7f8,lVar5);
  plVar3 = local_1b8;
  plVar4 = local_7f0;
  if (local_7f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7f0 + 1) = (int)local_7f0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_7f0 + 1) = (int)local_7f0[1] + 1;
    UNLOCK();
  }
  local_1c0 = local_7f8;
  local_1b8 = local_7f0;
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
  local_888 = &local_879;
  FUN_140a55c32(local_878,"SBorder",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x24);
  FUN_140a530e4(local_878,&local_7e8,local_368);
  *param_1 = local_7e8;
  param_1[1] = local_7e0;
  if (local_7e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7e0 + 1) = (int)local_7e0[1] + 1;
    UNLOCK();
    if (local_7e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_7e0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_7e0)(local_7e0);
        LOCK();
        piVar2 = (int *)((longlong)local_7e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_7e0 + 0x10))(local_7e0);
        }
      }
    }
  }
  if (local_870 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_870 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_870)(local_870);
      LOCK();
      piVar2 = (int *)((longlong)local_870 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_870 + 0x10))(local_870);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_7f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_7f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_7f0)(local_7f0);
      LOCK();
      piVar2 = (int *)((longlong)local_7f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7f0 + 0x10))(local_7f0);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_84c,local_850);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_830[0] != (longlong *)0x0) {
    (**(code **)(*local_830[0] + 0x10))();
  }
  FUN_140a59ae6(local_7d8);
  FUN_140a59028(local_368);
  if ((local_38 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ccc24 FUN_1469ccc24 body=138 status=ok
// SIG undefined FUN_1469ccc24(void)

void FUN_1469ccc24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001469ccca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469cccae FUN_1469cccae body=459 status=ok
// SIG undefined FUN_1469cccae(void)

void FUN_1469cccae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x2f1) == '\0') {
    local_48 = DAT_14c98dec8;
    local_40 = DAT_14c98ded0;
    if (DAT_14c98ded0 == 0) {
      local_30 = 0;
LAB_1469ccd89:
      local_28 = DAT_14c98dec8;
      local_20 = 0;
      local_38 = DAT_14c98dec8;
    }
    else {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
      local_30 = DAT_14c98ded0;
      local_38 = DAT_14c98dec8;
      if (DAT_14c98ded0 == 0) goto LAB_1469ccd89;
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
      local_28 = DAT_14c98dec8;
      local_20 = DAT_14c98ded0;
      if (DAT_14c98ded0 != 0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
        UNLOCK();
      }
    }
    FUN_1469cc6ba(param_1,&DAT_14c98dec8,&local_48);
    goto LAB_1469ccdb1;
  }
  local_48 = DAT_14c98dec8;
  local_40 = DAT_14c98ded0;
  if (DAT_14c98ded0 == 0) {
    local_30 = 0;
LAB_1469ccd02:
    local_28 = DAT_14c98dec8;
    local_20 = 0;
    local_38 = DAT_14c98dec8;
  }
  else {
    LOCK();
    *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
    UNLOCK();
    local_30 = DAT_14c98ded0;
    local_38 = DAT_14c98dec8;
    if (DAT_14c98ded0 == 0) goto LAB_1469ccd02;
    LOCK();
    *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
    UNLOCK();
    local_28 = DAT_14c98dec8;
    local_20 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
  }
  FUN_1469cc8f2(local_58);
  FUN_1469cc6ba(param_1,local_58,&local_48);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
LAB_1469ccdb1:
  FUN_1469ccc24(&local_48);
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469cce7a FUN_1469cce7a body=115 status=ok
// SIG undefined FUN_1469cce7a(void)

void FUN_1469cce7a(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146a584e0(*param_2,local_30);
  if (local_28 == -1) {
    if (param_3 != 2) {
      FUN_1469cceee(param_1,local_30);
    }
  }
  else {
    FUN_1469ccf60(param_1,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cceee FUN_1469cceee body=113 status=ok
// SIG undefined FUN_1469cceee(void)

void FUN_1469cceee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x280);
    lVar2 = 0;
    uVar3 = 0;
    do {
      if ((((*(byte *)(lVar1 + 0x10 + uVar3) & 5) != 0) &&
          (*(longlong *)(lVar1 + uVar3) == *param_2)) &&
         (((int)param_2[1] == -1 || ((int)param_2[1] == *(int *)(lVar1 + 8 + uVar3))))) {
        if ((int)(~uVar3 >> 5) == 0) {
          return;
        }
        *(undefined4 *)(lVar1 + 0x10 + (lVar2 >> 0x20) * 0x20) = 2;
        return;
      }
      uVar3 = uVar3 + 0x20;
      lVar2 = lVar2 + 0x100000000;
    } while ((longlong)*(int *)(param_1 + 0x288) * 0x20 != uVar3);
  }
  return;
}



// FUNCTION 1469ccf60 FUN_1469ccf60 body=214 status=ok
// SIG undefined FUN_1469ccf60(void)

void FUN_1469ccf60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x288);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x280);
    iVar4 = 1;
    lVar5 = 0;
    lVar3 = 0;
    do {
      if ((((*(byte *)(lVar1 + 0x10 + lVar5) & 7) != 0) &&
          (*(longlong *)(lVar1 + lVar5) == *param_2)) &&
         (((int)param_2[1] == -1 || ((int)param_2[1] == *(int *)(lVar1 + 8 + lVar5))))) {
        if (iVar4 == 0) {
          return;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar6 = 1;
          if (iVar4 < 1) {
            iVar6 = iVar4;
          }
          memmove((void *)((lVar3 >> 0x20) * 0x20 + lVar1),
                  (void *)((longlong)(iVar2 - iVar6) * 0x20 + lVar1),(longlong)iVar6 << 5);
          iVar2 = *(int *)(param_1 + 0x288);
        }
        *(int *)(param_1 + 0x288) = iVar2 + -1;
        FUN_1469f2506(param_1 + 0x280);
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar2 << 5 != lVar5);
  }
  return;
}



// FUNCTION 1469cd036 FUN_1469cd036 body=1011 status=ok
// SIG undefined FUN_1469cd036(void)

uint FUN_1469cd036(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = 0xffffffff;
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    iVar11 = (int)param_2[1];
    lVar10 = *(longlong *)(param_1 + 0x280);
    lVar3 = (longlong)*(int *)(param_1 + 0x288) * 0x20;
    lVar9 = 0;
    iVar8 = 0;
    do {
      if ((((*(byte *)(lVar10 + 0x10 + lVar9) & 6) != 0) &&
          (*(longlong *)(lVar10 + lVar9) == *param_2)) &&
         ((iVar11 == -1 || (iVar11 == *(int *)(lVar10 + 8 + lVar9))))) {
        if (iVar8 != 1) {
          uVar7 = -iVar8;
          goto LAB_1469cd0df;
        }
        break;
      }
      iVar8 = iVar8 + -1;
      lVar9 = lVar9 + 0x20;
    } while (lVar3 != lVar9);
    lVar9 = 0;
    iVar8 = 0;
    do {
      if ((((*(byte *)(lVar10 + 0x10 + lVar9) & 1) != 0) &&
          (*(longlong *)(lVar10 + lVar9) == *param_2)) && (iVar11 == *(int *)(lVar10 + 8 + lVar9)))
      {
        if (iVar8 != 1) {
          FUN_1469cf112(*(longlong *)(param_1 + 0x290) + 0x1e0,&local_58);
          uVar7 = -iVar8;
          if (iStack_50 < 1) goto LAB_1469cd300;
          lVar10 = 0;
          lVar3 = 0;
          goto LAB_1469cd2b8;
        }
        break;
      }
      iVar8 = iVar8 + -1;
      lVar9 = lVar9 + 0x20;
    } while (lVar3 != lVar9);
  }
  goto LAB_1469cd0df;
LAB_1469cd2b8:
  do {
    FUN_146a584e0(*(undefined8 *)(CONCAT44(uStack_54,local_58) + lVar10),&local_68);
    if (*param_2 == local_68) {
      if ((int)param_2[1] == -1) {
        uVar7 = 0xffffffff;
        break;
      }
      uVar7 = 0xffffffff;
      if ((local_60 == -1) || ((int)param_2[1] == local_60)) break;
    }
    lVar3 = lVar3 + 1;
    lVar10 = lVar10 + 0x10;
    uVar7 = -iVar8;
  } while (lVar3 < iStack_50);
LAB_1469cd300:
  FUN_1469ec9dc(CONCAT44(uStack_54,local_58),iStack_50);
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
LAB_1469cd0df:
  plVar1 = (longlong *)(param_1 + 0x280);
  if (param_3 == 0xffffffff) {
    if (uVar7 == 0xffffffff) {
      local_58 = (undefined4)*param_2;
      uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
      iStack_50 = (int)param_2[1];
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      iVar11 = *(int *)(param_1 + 0x288);
      *(uint *)(param_1 + 0x288) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x28c) < iVar11 + 1U) {
        FUN_1469e545e(plVar1,iVar11);
      }
      lVar10 = *(longlong *)(param_1 + 0x280);
      lVar3 = (longlong)iVar11 * 0x20;
      puVar2 = (undefined4 *)(lVar10 + lVar3);
      *puVar2 = local_58;
      puVar2[1] = uStack_54;
      puVar2[2] = iStack_50;
      puVar2[3] = uStack_4c;
      *(undefined4 *)(lVar10 + 0x10 + lVar3) = 1;
      *(undefined1 *)(lVar10 + 0x14 + lVar3) = 2;
      *(undefined4 *)(lVar10 + 0x18 + lVar3) = 0;
      *(undefined1 *)(lVar10 + 0x1c + lVar3) = 0;
      uVar7 = *(int *)(param_1 + 0x288) - 1;
    }
    else {
      *(uint *)(*plVar1 + 0x10 + (longlong)(int)uVar7 * 0x20) =
           (uint)(*(char *)(*plVar1 + 0x14 + (longlong)(int)uVar7 * 0x20) != '\x02') * 3 + 1;
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x288);
    iVar8 = iVar11;
    if (0 < (longlong)iVar11) {
      piVar4 = (int *)(*plVar1 + 0x10);
      uVar5 = 0;
      iVar8 = -1;
      uVar6 = 1;
      do {
        bVar12 = *piVar4 == 1;
        bVar13 = uVar5 != param_3;
        iVar8 = iVar8 + 1;
        if ((ulonglong)(longlong)iVar11 <= uVar6) break;
        uVar5 = uVar5 + bVar12;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 8;
      } while (bVar13 || !bVar12);
      if (bVar13 || !bVar12) {
        iVar8 = iVar11;
      }
    }
    if (uVar7 == 0xffffffff) {
      local_58 = (undefined4)*param_2;
      uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
      iStack_50 = (int)param_2[1];
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      *(uint *)(param_1 + 0x288) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x28c) < iVar11 + 1U) {
        FUN_1469e545e(plVar1,iVar11);
      }
      lVar3 = (longlong)iVar8 * 0x20;
      memmove((void *)(*plVar1 + lVar3 + 0x20),(void *)(*plVar1 + lVar3),
              (ulonglong)(uint)(iVar11 - iVar8) << 5);
      lVar10 = *plVar1;
      puVar2 = (undefined4 *)(lVar10 + lVar3);
      *puVar2 = local_58;
      puVar2[1] = uStack_54;
      puVar2[2] = iStack_50;
      puVar2[3] = uStack_4c;
      *(undefined4 *)(lVar10 + 0x10 + lVar3) = 1;
      *(undefined1 *)(lVar10 + 0x14 + lVar3) = 2;
      *(undefined4 *)(lVar10 + 0x18 + lVar3) = 0;
      *(undefined1 *)(lVar10 + 0x1c + lVar3) = 0;
      uVar7 = param_3;
    }
    else {
      lVar10 = *plVar1;
      lVar3 = (longlong)(int)uVar7 * 0x20;
      puVar2 = (undefined4 *)(lVar10 + lVar3);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      iStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      local_68 = *(longlong *)(lVar10 + 0x14 + lVar3);
      local_60 = *(int *)(lVar10 + 0x1c + lVar3);
      if (~uVar7 + iVar11 != 0) {
        memmove((void *)(lVar10 + lVar3),(void *)(lVar10 + lVar3 + 0x20),
                (longlong)(int)(~uVar7 + iVar11) << 5);
        iVar11 = *(int *)(param_1 + 0x288);
      }
      *(int *)(param_1 + 0x288) = iVar11 + -1;
      FUN_1469f2506(plVar1);
      iVar8 = iVar8 - (uint)((int)uVar7 <= iVar8);
      iVar11 = *(int *)(param_1 + 0x288);
      *(uint *)(param_1 + 0x288) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x28c) < iVar11 + 1U) {
        FUN_1469e545e(plVar1,iVar11);
      }
      lVar3 = (longlong)iVar8 * 0x20;
      memmove((void *)(*plVar1 + lVar3 + 0x20),(void *)(*plVar1 + lVar3),
              (ulonglong)(uint)(iVar11 - iVar8) << 5);
      lVar10 = *plVar1;
      puVar2 = (undefined4 *)(lVar10 + lVar3);
      *puVar2 = local_58;
      puVar2[1] = uStack_54;
      puVar2[2] = iStack_50;
      puVar2[3] = uStack_4c;
      *(undefined4 *)(lVar10 + 0x10 + lVar3) = 1;
      *(longlong *)(lVar10 + 0x14 + lVar3) = local_68;
      *(int *)(lVar10 + 0x1c + lVar3) = local_60;
      uVar7 = param_3;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1469cd42a FUN_1469cd42a body=70 status=ok
// SIG undefined FUN_1469cd42a(void)

void FUN_1469cd42a(longlong *param_1)

{
  FUN_1469ec9dc(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1469ec9dc(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469cd470 FUN_1469cd470 body=223 status=ok
// SIG undefined FUN_1469cd470(void)

void FUN_1469cd470(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1469cdab2(param_1[0x52]);
  cVar3 = FUN_14692f5de(param_1 + 0x5f);
  if ((cVar3 != '\0') && (1 < *(int *)(param_1[0x52] + 0x200))) {
    FUN_1469c8b9e(param_1,0);
  }
  if ((char)param_1[0x5d] == '\x01') {
    FUN_146977bb4(param_1[0x5b],0xffffffff);
    *(undefined1 *)(param_1 + 0x5d) = 0;
  }
  (**(code **)(*param_1 + 600))(param_1,&local_28);
  if (local_28 != 0) {
    *(undefined1 *)(local_28 + 0x2f0) = 0;
  }
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cd550 FUN_1469cd550 body=1349 status=ok
// SIG undefined FUN_1469cd550(void)

void FUN_1469cd550(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((0 < *(int *)(param_1 + 0x200)) && ((longlong)*(int *)(param_1 + 0x250) != -1)) {
    lVar3 = *(longlong *)(param_1 + 0x1f8);
    lVar13 = (longlong)*(int *)(param_1 + 0x250) * 0x10;
    puVar12 = (undefined8 *)(lVar3 + lVar13);
    FUN_14162fdc4();
    lVar7 = DAT_14c98e9c0;
    local_a8 = *(longlong **)(lVar3 + lVar13);
    plVar14 = *(longlong **)(lVar3 + 8 + lVar13);
    plStack_a0 = plVar14;
    if (plVar14 == (longlong *)0x0) {
      FUN_1469befb0(DAT_14c98e9c0,&local_a8);
    }
    else {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      FUN_1469befb0(lVar7);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar14 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    FUN_146a58938(*puVar12,&local_78);
    if (local_78 != 0) {
      FUN_14162fdc4();
      lVar7 = local_78;
      lVar3 = DAT_14c98e9c0;
      plVar14 = *(longlong **)(DAT_14c98e9c0 + 0x230);
      if (plVar14 == (longlong *)0x0) {
LAB_1469cd9a1:
        if (local_78 != 0) {
LAB_1469cd9ad:
          FUN_146a5ba88(*puVar12,&local_a8);
          FUN_1469d64d8(local_78,&local_a8);
          if (local_a8 != (longlong *)0x0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
      }
      else {
        iVar10 = (int)plVar14[1];
        do {
          if (iVar10 == 0) goto LAB_1469cd9a1;
          LOCK();
          iVar2 = (int)plVar14[1];
          bVar16 = iVar10 == iVar2;
          if (bVar16) {
            *(int *)(plVar14 + 1) = iVar10 + 1;
            iVar2 = iVar10;
          }
          iVar10 = iVar2;
          UNLOCK();
        } while (!bVar16);
        lVar3 = *(longlong *)(lVar3 + 0x228);
        LOCK();
        plVar5 = plVar14 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        if (lVar7 != lVar3) goto LAB_1469cd9ad;
      }
    }
    plVar14 = *(longlong **)(param_1 + 0x218);
    bVar16 = true;
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)0x0;
      uVar11 = 0;
    }
    else {
      iVar10 = (int)plVar14[1];
      uVar11 = 0;
      do {
        if (iVar10 == 0) {
          plVar14 = (longlong *)0x0;
          goto LAB_1469cd73b;
        }
        LOCK();
        iVar2 = (int)plVar14[1];
        bVar15 = iVar10 == iVar2;
        if (bVar15) {
          *(int *)(plVar14 + 1) = iVar10 + 1;
          iVar2 = iVar10;
        }
        iVar10 = iVar2;
        UNLOCK();
      } while (!bVar15);
      uVar11 = *(undefined8 *)(param_1 + 0x210);
      bVar16 = false;
    }
LAB_1469cd73b:
    local_a8 = DAT_14c98dec8;
    plStack_a0 = DAT_14c98ded0;
    if (DAT_14c98ded0 == (longlong *)0x0) {
      plStack_90 = (longlong *)0x0;
LAB_1469cd76e:
      local_88 = DAT_14c98dec8;
      plStack_80 = (longlong *)0x0;
      local_98 = DAT_14c98dec8;
    }
    else {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
      plStack_90 = DAT_14c98ded0;
      local_98 = DAT_14c98dec8;
      if (DAT_14c98ded0 == (longlong *)0x0) goto LAB_1469cd76e;
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
      local_88 = DAT_14c98dec8;
      plStack_80 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    FUN_146a58456(*puVar12,&local_58);
    plVar6 = plStack_a0;
    plVar5 = local_a8;
    local_a8 = local_58;
    plStack_a0 = uStack_50;
    local_58 = plVar5;
    uStack_50 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    FUN_146a58478(*puVar12,&local_b8);
    plVar8 = plStack_90;
    local_58 = local_98;
    plVar9 = local_58;
    uStack_50 = plStack_90;
    plVar5 = (longlong *)CONCAT44(uStack_b4,local_b8);
    plVar6 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
    local_58._0_4_ = SUB84(local_98,0);
    local_58._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_50._0_4_ = SUB84(plStack_90,0);
    uStack_50._4_4_ = (undefined4)((ulonglong)plStack_90 >> 0x20);
    local_b8 = (undefined4)local_58;
    uStack_b4 = local_58._4_4_;
    uStack_b0 = (undefined4)uStack_50;
    uStack_ac = uStack_50._4_4_;
    local_98 = plVar5;
    local_58 = plVar9;
    uStack_50 = plVar8;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_90 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        plStack_90 = plVar6;
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_90;
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          plVar6 = plStack_90;
        }
      }
    }
    plStack_90 = plVar6;
    FUN_146a5849a(*puVar12,&local_b8);
    plVar8 = plStack_80;
    local_58 = local_88;
    plVar9 = local_58;
    uStack_50 = plStack_80;
    plVar5 = (longlong *)CONCAT44(uStack_b4,local_b8);
    plVar6 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
    local_58._0_4_ = SUB84(local_88,0);
    local_58._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_50._0_4_ = SUB84(plStack_80,0);
    uStack_50._4_4_ = (undefined4)((ulonglong)plStack_80 >> 0x20);
    local_b8 = (undefined4)local_58;
    uStack_b4 = local_58._4_4_;
    uStack_b0 = (undefined4)uStack_50;
    uStack_ac = uStack_50._4_4_;
    local_88 = plVar5;
    local_58 = plVar9;
    uStack_50 = plVar8;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_80 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        puVar4 = (undefined8 *)*plStack_80;
        plStack_80 = plVar6;
        (*(code *)*puVar4)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_80;
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          plVar6 = plStack_80;
        }
      }
    }
    plStack_80 = plVar6;
    FUN_146a58434(*puVar12,&local_58);
    FUN_1469cc6ba(uVar11,&local_58,&local_a8);
    plVar5 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = uStack_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*uStack_50)(uStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    FUN_1469ccc24(&local_a8);
    if (!bVar16) {
      LOCK();
      plVar5 = plVar14 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_70 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    goto LAB_1469cd90d;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x218);
  bVar16 = true;
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    uVar11 = 0;
  }
  else {
    iVar10 = *(int *)(puVar12 + 1);
    uVar11 = 0;
    do {
      if (iVar10 == 0) {
        puVar12 = (undefined8 *)0x0;
        goto LAB_1469cd5a6;
      }
      LOCK();
      iVar2 = *(int *)(puVar12 + 1);
      bVar15 = iVar10 == iVar2;
      if (bVar15) {
        *(int *)(puVar12 + 1) = iVar10 + 1;
        iVar2 = iVar10;
      }
      iVar10 = iVar2;
      UNLOCK();
    } while (!bVar15);
    uVar11 = *(undefined8 *)(param_1 + 0x210);
    bVar16 = false;
  }
LAB_1469cd5a6:
  local_a8 = DAT_14c98dec8;
  plStack_a0 = DAT_14c98ded0;
  if (DAT_14c98ded0 == (longlong *)0x0) {
    plStack_90 = (longlong *)0x0;
LAB_1469cd5d5:
    local_88 = DAT_14c98dec8;
    plStack_80 = (longlong *)0x0;
    local_98 = DAT_14c98dec8;
  }
  else {
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
    plStack_90 = DAT_14c98ded0;
    local_98 = DAT_14c98dec8;
    if (DAT_14c98ded0 == (longlong *)0x0) goto LAB_1469cd5d5;
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
    local_88 = DAT_14c98dec8;
    plStack_80 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  FUN_1469cc6ba(uVar11,&DAT_14c98dec8,&local_a8);
  FUN_1469ccc24(&local_a8);
  if (!bVar16) {
    LOCK();
    piVar1 = (int *)(puVar12 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar12)(puVar12);
      LOCK();
      piVar1 = (int *)((longlong)puVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
      }
    }
  }
LAB_1469cd90d:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469cdab2 FUN_1469cdab2 body=658 status=ok
// SIG undefined FUN_1469cdab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469cdab2(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1469cdae7:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    FUN_146a584ee(uVar3);
  }
  else {
    iVar10 = (int)plVar4[1];
    do {
      if (iVar10 == 0) goto LAB_1469cdae7;
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar11 = iVar10 == iVar9;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar11);
    uVar5 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_58 = uVar5;
    plStack_50 = plVar4;
    FUN_146a584ee(uVar3);
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (param_3 == -1) {
    FUN_1428f8f3e(param_1 + 0x1e0,param_2);
    if (param_4 != '\0') goto LAB_1469cdbc6;
    iVar10 = *(int *)(param_1 + 0x200) + -1;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x200);
    if (param_3 < *(int *)(param_1 + 0x200)) {
      iVar9 = param_3;
    }
    iVar10 = 0;
    if (0 < iVar9) {
      iVar10 = iVar9;
    }
    FUN_1428f9064(param_1 + 0x1e0,param_2,iVar10);
    if (param_4 != '\0') goto LAB_1469cdbc6;
  }
  FUN_1469d3314(param_1,iVar10);
LAB_1469cdbc6:
  plVar4 = *(longlong **)(param_1 + 0x218);
  if (plVar4 != (longlong *)0x0) {
    iVar10 = (int)plVar4[1];
    do {
      if (iVar10 == 0) goto LAB_1469cdd08;
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar11 = iVar10 == iVar9;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar11);
    plVar6 = *(longlong **)(param_1 + 0x210);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 600))(plVar6,&local_68);
      plVar7 = local_60;
      lVar8 = local_68;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar8 != 0) {
        (**(code **)(*plVar6 + 600))(plVar6,&local_68);
        plVar6 = *(longlong **)(local_68 + 0x2e8);
        if (plVar6 == (longlong *)0x0) {
LAB_1469cdcb0:
          (**(code **)(*(longlong *)*_DAT_000000e8 + 0x30))((longlong *)*_DAT_000000e8,param_2);
        }
        else {
          iVar10 = (int)plVar6[1];
          do {
            if (iVar10 == 0) goto LAB_1469cdcb0;
            LOCK();
            iVar9 = (int)plVar6[1];
            bVar11 = iVar10 == iVar9;
            if (bVar11) {
              *(int *)(plVar6 + 1) = iVar10 + 1;
              iVar9 = iVar10;
            }
            iVar10 = iVar9;
            UNLOCK();
          } while (!bVar11);
          plVar7 = (longlong *)**(undefined8 **)(*(longlong *)(local_68 + 0x2e0) + 0xe8);
          (**(code **)(*plVar7 + 0x30))(plVar7,param_2);
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
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_60 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
      }
    }
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1469cdd08:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469cdd46 FUN_1469cdd46 body=145 status=ok
// SIG undefined FUN_1469cdd46(void)

void FUN_1469cdd46(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a584e0(*param_2,&local_20);
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x280);
    lVar1 = (longlong)*(int *)(param_1 + 0x288) << 5;
    do {
      if ((((*(byte *)(plVar2 + 2) & 7) != 0) && (*plVar2 == local_20)) &&
         ((local_18 == -1 || (local_18 == (int)plVar2[1])))) {
        if (plVar2 != (longlong *)0x0) {
          uVar3 = (undefined4)plVar2[3];
          goto LAB_1469cddaf;
        }
        break;
      }
      plVar2 = plVar2 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  uVar3 = 0;
LAB_1469cddaf:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}



// FUNCTION 1469cddd8 FUN_1469cddd8 body=155 status=ok
// SIG undefined FUN_1469cddd8(void)

void FUN_1469cddd8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146a584e0(*param_2,&local_30);
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x280);
    lVar1 = (longlong)*(int *)(param_1 + 0x288) << 5;
    do {
      if ((((*(byte *)(plVar2 + 2) & 7) != 0) && (*plVar2 == local_30)) &&
         ((local_28 == -1 || (local_28 == (int)plVar2[1])))) {
        if (plVar2 != (longlong *)0x0) {
          *(undefined4 *)(plVar2 + 3) = param_3;
        }
        break;
      }
      plVar2 = plVar2 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cde74 FUN_1469cde74 body=142 status=ok
// SIG undefined FUN_1469cde74(void)

undefined8 FUN_1469cde74(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a584e0(*param_2,&local_20);
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x280);
    lVar1 = (longlong)*(int *)(param_1 + 0x288) << 5;
    do {
      if ((((*(byte *)(plVar3 + 2) & 7) != 0) && (*plVar3 == local_20)) &&
         ((local_18 == -1 || (local_18 == (int)plVar3[1])))) {
        if (plVar3 != (longlong *)0x0) {
          uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)((longlong)plVar3 + 0x1c));
          goto LAB_1469cdedc;
        }
        break;
      }
      plVar3 = plVar3 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  uVar2 = 0;
LAB_1469cdedc:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cdf04 FUN_1469cdf04 body=145 status=ok
// SIG undefined FUN_1469cdf04(void)

void FUN_1469cdf04(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a584e0(*param_2,&local_28);
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x280);
    lVar1 = (longlong)*(int *)(param_1 + 0x288) << 5;
    do {
      if ((((*(byte *)(plVar2 + 2) & 7) != 0) && (*plVar2 == local_28)) &&
         ((local_20 == -1 || (local_20 == (int)plVar2[1])))) {
        if (plVar2 != (longlong *)0x0) {
          *(undefined1 *)((longlong)plVar2 + 0x1c) = param_3;
        }
        break;
      }
      plVar2 = plVar2 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cdfa4 FUN_1469cdfa4 body=99 status=ok
// SIG undefined FUN_1469cdfa4(void)

undefined8 FUN_1469cdfa4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x280);
    uVar2 = (longlong)*(int *)(param_1 + 0x288) * 0x20;
    uVar3 = 0;
    do {
      if ((((*(uint *)(lVar1 + 0x10 + uVar3) & *(uint *)(param_2 + 2)) != 0) &&
          (*(longlong *)(lVar1 + uVar3) == *param_2)) &&
         ((((int)param_2[1] == -1 & *(byte *)((longlong)param_2 + 0x14)) != 0 ||
          ((int)param_2[1] == *(int *)(lVar1 + 8 + uVar3))))) {
        return CONCAT71((int7)(uVar2 >> 8),(int)(~uVar3 >> 5) != 0);
      }
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != uVar3);
  }
  return 0;
}



// FUNCTION 1469ce008 FUN_1469ce008 body=112 status=ok
// SIG undefined FUN_1469ce008(void)

void FUN_1469ce008(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    plVar4 = *(longlong **)(param_1 + 0x1f8);
    lVar3 = 0;
    do {
      if ((*param_2 != 0) && (*param_2 == *plVar4)) {
        FUN_1469d3314();
        break;
      }
      lVar3 = lVar3 + 1;
      plVar4 = plVar4 + 2;
    } while (*(int *)(param_1 + 0x200) != lVar3);
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001469ce066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469ce078 FUN_1469ce078 body=92 status=ok
// SIG undefined FUN_1469ce078(void)

void FUN_1469ce078(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x220) == 0) {
    if ((*(int *)(param_1 + 0x200) < 1) || ((longlong)*(int *)(param_1 + 0x250) < 0)) {
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x1f8);
    lVar2 = (longlong)*(int *)(param_1 + 0x250) * 0x10;
    *param_2 = *(longlong *)(lVar1 + lVar2);
    lVar1 = *(longlong *)(lVar1 + 8 + lVar2);
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0x220);
    lVar1 = *(longlong *)(param_1 + 0x228);
  }
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    return;
  }
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
  return;
}



// FUNCTION 1469ce0d4 FUN_1469ce0d4 body=952 status=ok
// SIG undefined FUN_1469ce0d4(void)

undefined1 * FUN_1469ce0d4(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_108 [36];
  undefined4 local_e4;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar11 = *(longlong **)(param_4 + 0x78);
  if (plVar11 == (longlong *)0x0) {
LAB_1469ce122:
    plVar11 = (longlong *)0x0;
  }
  else {
    FUN_1469ee30c();
    uVar10 = (**(code **)(*plVar11 + 0x50))(plVar11);
    if ((char)uVar10 == '\0') goto LAB_1469ce122;
    lVar5 = *(longlong *)(param_4 + 0x78);
    plVar11 = *(longlong **)(param_4 + 0x80);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_1469ce20f:
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        local_e4 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
      }
      else {
        uVar10 = (ulonglong)*(uint *)(plVar6 + 1);
        do {
          uVar9 = (uint)uVar10;
          if (uVar9 == 0) goto LAB_1469ce20f;
          LOCK();
          uVar4 = *(uint *)(plVar6 + 1);
          if (uVar9 == uVar4) {
            *(uint *)(plVar6 + 1) = uVar9 + 1;
          }
          else {
            uVar10 = (ulonglong)uVar4;
          }
          UNLOCK();
        } while (uVar9 != uVar4);
        uVar7 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_e4 = 0;
        local_b8 = uVar7;
        plStack_b0 = plVar6;
      }
      plVar6 = plStack_b0;
      cVar8 = FUN_1469be7b6(lVar5,&local_b8,1);
      plVar3 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if ((char)local_e4 == '\0') {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (cVar8 != '\0') {
        local_e0 = *(undefined8 *)(param_1 + 0x2d8);
        plVar6 = *(longlong **)(param_1 + 0x2e0);
        if (plVar6 == (longlong *)0x0) {
          local_d8 = (longlong *)0x0;
          FUN_14697e4e4(param_1,&local_b8,param_3);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          local_d8 = plVar6;
          FUN_14697e4e4(param_1,&local_b8,param_3);
          LOCK();
          plVar3 = plVar6 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        local_d0 = CONCAT44(local_90 * 0.0 + local_98 * 0.0 + local_88,
                            local_94 * 0.0 + local_9c * 0.0 + local_8c);
        local_c8 = CONCAT44((float)local_b8 * local_98 + local_90 * 0.0,
                            (float)local_b8 * local_9c + local_94 * 0.0);
        local_c0 = CONCAT44(local_90 * local_b8._4_4_ + local_98 * 0.0,
                            local_b8._4_4_ * local_94 + local_9c * 0.0);
        cVar8 = FUN_1402b2a42();
        if (cVar8 == '\0') {
          if (*(char *)(param_1 + 0x2e8) == '\x01') {
            FUN_146977bb4(*(undefined8 *)(param_1 + 0x2d8));
            *(undefined1 *)(param_1 + 0x2e8) = 0;
          }
        }
        else {
          FUN_1469ce48e(param_1);
        }
        *param_2 = 1;
        goto LAB_1469ce128;
      }
    }
  }
  *param_2 = 0;
LAB_1469ce128:
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ce48e FUN_1469ce48e body=581 status=ok
// SIG undefined FUN_1469ce48e(void)

void FUN_1469ce48e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong *plStack_2d0;
  longlong *local_2c0;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong *local_288;
  longlong local_280;
  longlong *local_278;
  undefined1 local_d8 [64];
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((char)param_1[0x5d] == '\0') {
    (**(code **)(*param_1 + 600))(param_1,&local_280);
    *(undefined1 *)(local_280 + 0x2f0) = 1;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_278 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)local_278 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_278 + 0x10))(local_278);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x5d) = 1;
    FUN_140763f46(param_1[0x5b],local_d8,0xffffffff);
    local_98 = 0;
    local_94 = 1;
    local_90 = 0;
    local_8c = 1;
    thunk_FUN_140a5071c(&local_280);
    plVar3 = (longlong *)param_1[2];
    if (plVar3 == (longlong *)0x0) {
LAB_1469ce566:
      local_2d8 = 0;
      plStack_2d0 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1469ce566;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      local_2d8 = param_1[1];
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_2d0 = plVar3;
      if ((int)*plVar2 == 0) {
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
    local_2c0 = &local_2d8;
    FUN_1469f3068(local_2b8);
    FUN_1469d15da(local_2b8,&local_2a0,&local_280);
    local_290 = local_2a0;
    local_288 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    FUN_140a4fd40(local_d8,&local_290);
    plVar3 = local_288;
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_288 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_298 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)local_298 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_298 + 0x10))(local_298);
        }
      }
    }
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2b0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)local_2b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2b0 + 0x10))(local_2b0);
        }
      }
    }
    plVar3 = plStack_2d0;
    if (plStack_2d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2d0)(plStack_2d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_140a4ff8c(&local_280);
    FUN_1407640b6(local_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469ce6d4 FUN_1469ce6d4 body=144 status=ok
// SIG undefined FUN_1469ce6d4(void)

void FUN_1469ce6d4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  
  plVar3 = *(longlong **)(param_2 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_14c98e9e8);
    if (cVar5 != '\0') {
      lVar4 = *(longlong *)(param_2 + 0x78);
      plVar3 = *(longlong **)(param_2 + 0x80);
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
      if ((lVar4 != 0) && (*(char *)(param_1 + 0x2e8) == '\x01')) {
        FUN_146977bb4(*(undefined8 *)(param_1 + 0x2d8),0xffffffff);
        *(undefined1 *)(param_1 + 0x2e8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1469ce764 FUN_1469ce764 body=215 status=ok
// SIG undefined FUN_1469ce764(void)

undefined1 * FUN_1469ce764(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  
  plVar3 = *(longlong **)(param_4 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if (cVar5 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar3 = *(longlong **)(param_4 + 0x80);
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
      if ((lVar4 != 0) && (*(char *)(param_1 + 0x2e8) == '\x01')) {
        FUN_146977bb4(*(undefined8 *)(param_1 + 0x2d8));
        *(undefined1 *)(param_1 + 0x2e8) = 0;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1469ce83c FUN_1469ce83c body=289 status=ok
// SIG undefined FUN_1469ce83c(void)

void FUN_1469ce83c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *puStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x290);
  local_28 = *(longlong *)(lVar2 + 0x220);
  if (local_28 == 0) {
    if ((*(int *)(lVar2 + 0x200) < 1) || ((longlong)*(int *)(lVar2 + 0x250) < 0)) {
      local_28 = 0;
      puStack_20 = (undefined8 *)0x0;
      goto LAB_1469ce89f;
    }
    lVar5 = (longlong)*(int *)(lVar2 + 0x250) * 0x10;
    local_28 = *(longlong *)(*(longlong *)(lVar2 + 0x1f8) + lVar5);
    puStack_20 = *(undefined8 **)(*(longlong *)(lVar2 + 0x1f8) + 8 + lVar5);
    if (puStack_20 != (undefined8 *)0x0) goto LAB_1469ce881;
LAB_1469ce88a:
    if (local_28 == 0) goto LAB_1469ce89f;
  }
  else {
    puStack_20 = *(undefined8 **)(lVar2 + 0x228);
    if (puStack_20 != (undefined8 *)0x0) {
LAB_1469ce881:
      LOCK();
      *(int *)(puStack_20 + 1) = *(int *)(puStack_20 + 1) + 1;
      UNLOCK();
      goto LAB_1469ce88a;
    }
  }
  lVar2 = local_28;
  cVar4 = FUN_1403d1f4c(param_3,param_1);
  if (cVar4 != '\0') {
    FUN_14162fdc4();
    FUN_1469befb0(DAT_14c98e9c0,&local_28);
    FUN_146a565d8(lVar2,1);
  }
LAB_1469ce89f:
  puVar3 = puStack_20;
  if (puStack_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puStack_20)(puStack_20);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469ce96e FUN_1469ce96e body=675 status=ok
// SIG undefined FUN_1469ce96e(void)

undefined1 * FUN_1469ce96e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x290);
  local_28 = *(longlong *)(lVar2 + 0x220);
  if (local_28 == 0) {
    if ((0 < *(int *)(lVar2 + 0x200)) && (-1 < (longlong)*(int *)(lVar2 + 0x250))) {
      lVar8 = (longlong)*(int *)(lVar2 + 0x250) * 0x10;
      local_28 = *(longlong *)(*(longlong *)(lVar2 + 0x1f8) + lVar8);
      plStack_20 = *(longlong **)(*(longlong *)(lVar2 + 0x1f8) + 8 + lVar8);
      goto LAB_1469ce9a9;
    }
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    plStack_20 = *(longlong **)(lVar2 + 0x228);
LAB_1469ce9a9:
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_4 + 0x38);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar4 = (uint)((ulonglong)DAT_14c966e98 >> 0x10);
    uVar9 = (uint)DAT_14c966e98 & 0xffff;
    plVar7 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar3[8];
    }
    uVar10 = (int)plVar3[9] - 1;
    iVar11 = *(int *)((longlong)plVar7 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14c966e98 >> 0x20) +
                      ((uint)DAT_14c966e98 << 0x10 | uVar9) + (uVar4 << 0x13 | uVar4 & 0xffff) +
                      (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 != -1) {
      do {
        if (*(longlong *)(*plVar3 + (longlong)iVar11 * 0x20) == DAT_14c966e98) goto LAB_1469cebcf;
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + *plVar3 + 0x18);
      } while (iVar11 != -1);
    }
    uVar4 = (uint)((ulonglong)DAT_14c966fa0 >> 0x10);
    uVar9 = (uint)DAT_14c966fa0 & 0xffff;
    iVar11 = *(int *)((longlong)plVar7 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14c966fa0 >> 0x20) +
                      ((uint)DAT_14c966fa0 << 0x10 | uVar9) + (uVar4 << 0x13 | uVar4 & 0xffff) +
                      (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 != -1) {
      do {
        if (*(longlong *)(*plVar3 + (longlong)iVar11 * 0x20) == DAT_14c966fa0) goto LAB_1469cebcf;
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + *plVar3 + 0x18);
      } while (iVar11 != -1);
    }
    uVar4 = (uint)((ulonglong)DAT_14c966fb8 >> 0x10);
    uVar9 = (uint)DAT_14c966fb8 & 0xffff;
    iVar11 = *(int *)((longlong)plVar7 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14c966fb8 >> 0x20) +
                      ((uint)DAT_14c966fb8 << 0x10 | uVar9) + (uVar4 << 0x13 | uVar4 & 0xffff) +
                      (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 != -1) {
      do {
        if (*(longlong *)(*plVar3 + (longlong)iVar11 * 0x20) == DAT_14c966fb8) goto LAB_1469cebcf;
        iVar11 = *(int *)((longlong)iVar11 * 0x20 + *plVar3 + 0x18);
      } while (iVar11 != -1);
    }
  }
  goto LAB_1469ce9c7;
LAB_1469cebcf:
  if ((local_28 != 0) && (cVar6 = FUN_146a57ad6(), cVar6 == '\0')) {
    FUN_14162fdc4();
    FUN_1469befb0(DAT_14c98e9c0);
    uVar5 = 1;
    goto LAB_1469ce9c9;
  }
LAB_1469ce9c7:
  uVar5 = 0;
LAB_1469ce9c9:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  plVar3 = plStack_20;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_20 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469cec14 FUN_1469cec14 body=122 status=ok
// SIG undefined FUN_1469cec14(void)

undefined1 *
FUN_1469cec14(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_1469bb520(*(undefined8 *)(param_1 + 0x368));
  if (cVar1 == '\0') {
    FUN_14171f816(param_1,param_2,param_3,param_4);
  }
  else {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  return param_2;
}



// FUNCTION 1469cec8e FUN_1469cec8e body=429 status=ok
// SIG undefined FUN_1469cec8e(void)

undefined1 * FUN_1469cec8e(longlong param_1,undefined1 *param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = *(longlong **)(param_4 + 0x78);
  if (plVar6 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
    if (cVar5 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar6 = *(longlong **)(param_4 + 0x80);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (lVar4 == 0) {
        uVar7 = 0;
      }
      else {
        FUN_1469cee3c(param_1,&local_48,param_3);
        local_58 = *(undefined8 *)(lVar4 + 0x40);
        local_50 = *(longlong **)(lVar4 + 0x48);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_1469bd63c(local_48,&local_58,0xffffffff,0);
        plVar1 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
        uVar7 = 1;
        if (*(char *)(param_1 + 0x2e8) == '\x01') {
          FUN_146977bb4(*(undefined8 *)(param_1 + 0x2d8));
          *(undefined1 *)(param_1 + 0x2e8) = 0;
        }
      }
      goto LAB_1469cecba;
    }
  }
  uVar7 = 0;
  plVar6 = (longlong *)0x0;
LAB_1469cecba:
  *param_2 = uVar7;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469cee3c FUN_1469cee3c body=687 status=ok
// SIG undefined FUN_1469cee3c(void)

longlong * FUN_1469cee3c(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_248 [32];
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 *local_218;
  longlong local_210;
  longlong *local_208;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  plVar9 = *(longlong **)(param_1 + 0x270);
  bVar6 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    uVar10 = 0;
  }
  else {
    iVar8 = (int)plVar9[1];
    uVar10 = 0;
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1469cee82;
      }
      LOCK();
      iVar7 = (int)plVar9[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_1 + 0x268);
    bVar6 = false;
  }
LAB_1469cee82:
  FUN_1469bed42(&local_1f8);
  FUN_1469bed62(local_228);
  local_218 = local_228;
  FUN_1469ece9a(&local_210,".\\Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp",0x3b0);
  FUN_1469bee4e(&local_210,param_2,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_208 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)local_208 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_220 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar2 = (int *)((longlong)local_220 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  FUN_140a4ff8c(&local_1f8);
  plVar4 = (longlong *)*param_2;
  *(undefined4 *)(plVar4 + 0x4f) = *(undefined4 *)(param_1 + 0x278);
  (**(code **)(*plVar4 + 0x298))();
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1469cef59:
    local_1f8 = 0;
    plStack_1f0 = (longlong *)0x0;
    bVar11 = true;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1469cef59;
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar5 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar11 = false;
    local_1f8 = uVar5;
    plStack_1f0 = plVar4;
  }
  plVar4 = plStack_1f0;
  local_210 = *param_2;
  local_208 = (longlong *)param_2[1];
  if (local_208 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
  }
  FUN_1469c6038(uVar10,&local_210,param_3,&local_1f8);
  plVar3 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_1f0;
  if (plStack_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1f0)(plStack_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar11) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (!bVar6) {
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469cf0ec FUN_1469cf0ec body=37 status=ok
// SIG undefined FUN_1469cf0ec(void)

undefined8 FUN_1469cf0ec(longlong param_1,undefined8 param_2)

{
  FUN_1469cf112(*(longlong *)(param_1 + 0x290) + 0x1e0);
  return param_2;
}



// FUNCTION 1469cf112 FUN_1469cf112 body=75 status=ok
// SIG undefined FUN_1469cf112(void)

undefined8 * FUN_1469cf112(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1469f25a2(param_2,iVar1);
    FUN_1469f25fa(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1469cf15e FUN_1469cf15e body=152 status=ok
// SIG undefined FUN_1469cf15e(void)

void FUN_1469cf15e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(lVar3 + 0x220) == 0) {
    if (*(int *)(lVar3 + 0x200) < 1) {
      return;
    }
    if ((longlong)*(int *)(lVar3 + 0x250) < 0) {
      return;
    }
    lVar5 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar5);
    plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar4 == 0) goto LAB_1469cf18b;
  }
  else {
    plVar6 = *(longlong **)(lVar3 + 0x228);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  FUN_146a56f5e();
LAB_1469cf18b:
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
                    /* WARNING: Could not recover jumptable at 0x0001469cf1af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469cf1f6 FUN_1469cf1f6 body=337 status=ok
// SIG undefined FUN_1469cf1f6(void)

void FUN_1469cf1f6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  
  lVar6 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(lVar6 + 0x220) == 0) {
    if (*(int *)(lVar6 + 0x200) < 1) {
      return;
    }
    if ((longlong)*(int *)(lVar6 + 0x250) < 0) {
      return;
    }
    lVar7 = (longlong)*(int *)(lVar6 + 0x250) * 0x10;
    lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x1f8) + lVar7);
    plVar10 = *(longlong **)(*(longlong *)(lVar6 + 0x1f8) + 8 + lVar7);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (lVar4 == 0) goto LAB_1469cf2b7;
  }
  else {
    plVar10 = *(longlong **)(lVar6 + 0x228);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x290);
  iVar3 = *(int *)(lVar6 + 0x200);
  if (iVar3 < 1) {
    iVar8 = -1;
    iVar9 = 0;
  }
  else {
    iVar8 = *(int *)(lVar6 + 0x250);
    iVar9 = iVar8 + 1;
  }
  if ((iVar8 - iVar3 < -1) && (iVar9 < iVar3)) {
    do {
      lVar6 = *(longlong *)(lVar6 + 0x1f8);
      cVar5 = FUN_146a580d6(*(undefined8 *)(lVar6 + (longlong)iVar9 * 0x10));
      if ((((param_2 != 2) && (param_2 != 0 || cVar5 != '\x03')) &&
          ((param_2 != 1 || ((cVar5 != '\x03' && (cVar5 != '\0')))))) ||
         (cVar5 = FUN_146a56f5e(*(undefined8 *)(lVar6 + (longlong)iVar9 * 0x10)), cVar5 == '\0')) {
        iVar9 = iVar9 + 1;
      }
      lVar6 = *(longlong *)(param_1 + 0x290);
    } while (iVar9 < *(int *)(lVar6 + 0x200));
  }
LAB_1469cf2b7:
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
                    /* WARNING: Could not recover jumptable at 0x0001469cf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x10))(plVar10);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469cf348 FUN_1469cf348 body=319 status=ok
// SIG undefined FUN_1469cf348(void)

void FUN_1469cf348(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x290);
  lVar9 = *(longlong *)(lVar5 + 0x220);
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0x200) < 1) {
      return;
    }
    if ((longlong)*(int *)(lVar5 + 0x250) < 0) {
      return;
    }
    lVar6 = (longlong)*(int *)(lVar5 + 0x250) * 0x10;
    lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x1f8) + lVar6);
    plVar8 = *(longlong **)(*(longlong *)(lVar5 + 0x1f8) + 8 + lVar6);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar9 == 0) goto LAB_1469cf403;
  }
  else {
    plVar8 = *(longlong **)(lVar5 + 0x228);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x290);
  if (1 < *(int *)(lVar5 + 0x200)) {
    iVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar5 + 0x1f8);
      cVar4 = FUN_146a580d6(*(undefined8 *)(lVar5 + (longlong)iVar7 * 0x10));
      bVar3 = true;
      if ((param_2 == 2) || ((param_2 == 0 && (cVar4 == '\x03')))) {
LAB_1469cf3b6:
        if (((!bVar3) || (lVar9 == *(longlong *)(lVar5 + (longlong)iVar7 * 0x10))) ||
           (cVar4 = FUN_146a56f5e(), cVar4 == '\0')) goto LAB_1469cf3eb;
      }
      else {
        if (param_2 == 1) {
          bVar3 = cVar4 == '\0' || cVar4 == '\x03';
          goto LAB_1469cf3b6;
        }
LAB_1469cf3eb:
        iVar7 = iVar7 + 1;
      }
      lVar5 = *(longlong *)(param_1 + 0x290);
    } while ((1 < *(int *)(lVar5 + 0x200)) && (iVar7 < *(int *)(lVar5 + 0x200)));
  }
LAB_1469cf403:
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
                    /* WARNING: Could not recover jumptable at 0x0001469cf430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469cf488 FUN_1469cf488 body=4411 status=ok
// SIG undefined FUN_1469cf488(void)

undefined8 FUN_1469cf488(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_348 [32];
  code **local_328;
  longlong local_320;
  undefined1 local_318;
  undefined8 local_310;
  longlong **local_308;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [20];
  undefined1 local_2c4 [4];
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  undefined8 local_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  longlong local_258;
  longlong lStack_250;
  undefined1 local_248 [4];
  undefined1 local_244 [4];
  longlong *local_240 [2];
  wchar_t *local_230;
  undefined4 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [4];
  undefined4 local_204;
  longlong *local_200 [2];
  wchar_t *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  code *local_180;
  undefined4 local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined8 auStack_160 [2];
  undefined1 local_150 [24];
  longlong *local_138 [2];
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined **local_e0 [13];
  longlong *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2f8 = param_1;
  local_320 = FUN_140a2b044(&DAT_14c96b348);
  if (local_320 == 0) {
    local_320 = DAT_14c96b350;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_308 = (longlong **)CONCAT71(local_308._1_7_,1);
  local_318 = 1;
  local_310 = 0;
  local_328 = (code **)((ulonglong)local_328 & 0xffffffffffffff00);
  FUN_1469d0642(local_e0,1);
  local_180 = (code *)0x149f001ec;
  local_178 = 0x11;
  FUN_1446e940c(&local_1f0,&local_180);
  local_180 = (code *)0x149f00184;
  local_178 = 0xc;
  FUN_1446e940c(&local_230,&local_180);
  FUN_140208bae(local_138,&local_230,&local_1f0,L"Options");
  FUN_14023423e(&local_180,local_138);
  local_170[0] = 1;
  local_168 = 0;
  auStack_160[0] = 0;
  FUN_1446ddc76(&local_110,"DockingTabStackOptions",1);
  FUN_146a0d4b6(local_e0,local_110,&local_180);
  FUN_1449db362(&local_168);
  if (local_180 != (code *)0x0) {
    (**(code **)(*(longlong *)local_180 + 0x10))();
  }
  local_2f0 = param_2;
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  FUN_144a5dc74(local_138);
  lVar3 = local_2f8;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = FUN_1469d091e;
  local_178 = 0;
  FUN_1469d079c(local_190,local_2f8,&local_180);
  local_180 = (code *)&LAB_1469d0d3a;
  local_178 = 0;
  FUN_1469d0bb8(local_1a0,lVar3,&local_180);
  FUN_1469baa08(&local_180,local_1a0,local_190);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1f0 = L"CollapseTabWellTooltip";
  local_1e8 = 0x16;
  FUN_1446e940c(&local_204,&local_1f0);
  local_1f0 = L"DockTabStack";
  local_1e8 = 0xc;
  FUN_1446e940c(local_208,&local_1f0);
  FUN_140208bae(local_200,local_208,&local_204,L"Collapses the tabs headers to save room.");
  FUN_14023423e(&local_1f0,local_200);
  local_1e0 = 1;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_230 = L"CollapseTabWell";
  local_228 = 0xf;
  FUN_1446e940c(local_244,&local_230);
  local_230 = L"DockTabStack";
  local_228 = 0xc;
  FUN_1446e940c(local_248,&local_230);
  FUN_140208bae(local_240,local_248,local_244,L"Hide Tabs");
  FUN_14023423e(&local_230,local_240);
  local_220 = 1;
  local_218 = 0;
  uStack_210 = 0;
  local_308 = local_138;
  local_310 = 0;
  local_318 = 1;
  local_320 = 0;
  local_328 = &local_180;
  FUN_146a0d19c(local_e0,&local_230,&local_1f0,&local_1c8);
  FUN_1449db362(&local_218);
  if (local_230 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_230 + 0x10))();
  }
  if (local_240[0] != (longlong *)0x0) {
    (**(code **)(*local_240[0] + 0x10))();
  }
  FUN_1449db362(&local_1d8);
  if (local_1f0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1f0 + 0x10))();
  }
  if (local_200[0] != (longlong *)0x0) {
    (**(code **)(*local_200[0] + 0x10))();
  }
  FUN_1449db362(local_150);
  FUN_1449db362(auStack_160);
  FUN_1449db362(local_170);
  FUN_1449db362(&local_180);
  FUN_1449db362(&local_120);
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  lVar3 = *(longlong *)(local_2f8 + 0x290);
  local_258 = *(longlong *)(lVar3 + 0x220);
  if (local_258 == 0) {
    if ((0 < *(int *)(lVar3 + 0x200)) && (-1 < (longlong)*(int *)(lVar3 + 0x250))) {
      lVar6 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
      local_258 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar6);
      lStack_250 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar6);
      goto LAB_1469cf929;
    }
    local_258 = 0;
    lStack_250 = 0;
  }
  else {
    lStack_250 = *(longlong *)(lVar3 + 0x228);
LAB_1469cf929:
    if (lStack_250 != 0) {
      LOCK();
      *(int *)(lStack_250 + 8) = *(int *)(lStack_250 + 8) + 1;
      UNLOCK();
    }
  }
  cVar5 = FUN_1469d0d46(&local_258);
  if (cVar5 != '\0') {
    FUN_144a5dc74(local_138);
    lVar3 = local_2f8;
    local_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_180 = FUN_1469d0e34;
    local_178 = 0;
    FUN_1469d079c(local_268,local_2f8,&local_180);
    local_180 = FUN_1469d0f30;
    local_178 = 0;
    FUN_1469d0bb8(local_278,lVar3,&local_180);
    FUN_1469baa08(&local_180,local_278,local_268);
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1f0 = L"MoveToSidebarTooltip";
    local_1e8 = 0x14;
    FUN_1446e940c(&local_204,&local_1f0);
    local_1f0 = L"DockTabStack";
    local_1e8 = 0xc;
    FUN_1446e940c(local_208,&local_1f0);
    FUN_140208bae(local_200,local_208,&local_204,
                  L"Moves this tab to a sidebar drawer on the side of the window closest to the tab.\nThe tab can be opened from the drawer and will automatically close again when clicking off it."
                 );
    FUN_14023423e(&local_1f0,local_200);
    local_1e0 = 1;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_230 = L"MoveToSidebar";
    local_228 = 0xd;
    FUN_1446e940c(local_244,&local_230);
    local_230 = L"DockTabStack";
    local_228 = 0xc;
    FUN_1446e940c(local_248,&local_230);
    FUN_140208bae(local_240,local_248,local_244,L"Dock to Sidebar");
    FUN_14023423e(&local_230,local_240);
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_308 = local_138;
    local_310 = 0;
    local_318 = 1;
    local_320 = 0;
    local_328 = &local_180;
    FUN_146a0d19c(local_e0,&local_230,&local_1f0,&local_1c8);
    FUN_1449db362(&local_218);
    if (local_230 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_230 + 0x10))();
    }
    if (local_240[0] != (longlong *)0x0) {
      (**(code **)(*local_240[0] + 0x10))();
    }
    FUN_1449db362(&local_1d8);
    if (local_1f0 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_1f0 + 0x10))();
    }
    if (local_200[0] != (longlong *)0x0) {
      (**(code **)(*local_200[0] + 0x10))();
    }
    FUN_1449db362(local_150);
    FUN_1449db362(auStack_160);
    FUN_1449db362(local_170);
    FUN_1449db362(&local_180);
    FUN_1449db362(&local_120);
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
  }
  FUN_146a0d58a(local_e0);
  FUN_144a5dc74(&local_180);
  local_170[0] = 0;
  local_168 = 0;
  auStack_160[0] = 0;
  FUN_1446ddc76(&local_280,"DockingTabStackCloseTabs",1);
  FUN_146a0d4b6(local_e0,local_280,&local_180);
  FUN_1449db362(&local_168);
  if (local_180 != (code *)0x0) {
    (**(code **)(*(longlong *)local_180 + 0x10))();
  }
  FUN_144a5dc74(local_138);
  lVar3 = local_2f8;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = FUN_1469d100e;
  local_178 = 0;
  FUN_1469d079c(local_290,local_2f8,&local_180);
  local_180 = FUN_1469cf15e;
  local_178 = 0;
  FUN_1469d0bb8(local_2a0,lVar3,&local_180);
  FUN_1469baa08(&local_180,local_2a0,local_290);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1f0 = L"CloseTabTooltil";
  local_1e8 = 0xf;
  FUN_1446e940c(&local_204,&local_1f0);
  local_1f0 = L"DockTabStack";
  local_1e8 = 0xc;
  FUN_1446e940c(local_208,&local_1f0);
  FUN_140208bae(local_200,local_208,&local_204,L"Close this tab.");
  FUN_14023423e(&local_1f0,local_200);
  local_1e0 = 1;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_230 = L"CloseTab";
  local_228 = 8;
  FUN_1446e940c(local_244,&local_230);
  local_230 = L"DockTabStack";
  local_228 = 0xc;
  FUN_1446e940c(local_248,&local_230);
  FUN_140208bae(local_240,local_248,local_244,L"Close");
  FUN_14023423e(&local_230,local_240);
  local_220 = 1;
  local_218 = 0;
  uStack_210 = 0;
  local_308 = local_138;
  local_310 = 0;
  local_318 = 1;
  local_320 = 0;
  local_328 = &local_180;
  FUN_146a0d19c(local_e0,&local_230,&local_1f0,&local_1c8);
  FUN_1449db362(&local_218);
  if (local_230 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_230 + 0x10))();
  }
  if (local_240[0] != (longlong *)0x0) {
    (**(code **)(*local_240[0] + 0x10))();
  }
  FUN_1449db362(&local_1d8);
  if (local_1f0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1f0 + 0x10))();
  }
  if (local_200[0] != (longlong *)0x0) {
    (**(code **)(*local_200[0] + 0x10))();
  }
  FUN_1449db362(local_150);
  FUN_1449db362(auStack_160);
  FUN_1449db362(local_170);
  FUN_1449db362(&local_180);
  FUN_1449db362(&local_120);
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  local_204 = 1;
  FUN_144a5dc74(local_138);
  lVar3 = local_2f8;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = FUN_1469d10ac;
  local_178 = 0;
  FUN_1469d079c(local_2b0,local_2f8,&local_180);
  local_180 = FUN_1469cf1f6;
  local_178 = 0;
  FUN_1469d129c(local_2c0,lVar3,&local_180,&local_204);
  FUN_1469baa08(&local_180,local_2c0,local_2b0);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1f0 = L"CloseTabsToTheRightTooltip";
  local_1e8 = 0x1a;
  FUN_1446e940c(local_208,&local_1f0);
  local_1f0 = L"DockTabStack";
  local_1e8 = 0xc;
  FUN_1446e940c(local_244,&local_1f0);
  FUN_140208bae(local_200,local_244,local_208,L"Closes all tabs to the right of the active tab.");
  FUN_14023423e(&local_1f0,local_200);
  local_1e0 = 1;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_230 = L"CloseTabsToTheRight";
  local_228 = 0x13;
  FUN_1446e940c(local_248,&local_230);
  local_230 = L"DockTabStack";
  local_228 = 0xc;
  FUN_1446e940c(local_2c4,&local_230);
  FUN_140208bae(local_240,local_2c4,local_248,L"Close Tabs to the Right");
  FUN_14023423e(&local_230,local_240);
  local_220 = 1;
  local_218 = 0;
  uStack_210 = 0;
  local_308 = local_138;
  local_310 = 0;
  local_318 = 1;
  local_320 = 0;
  local_328 = &local_180;
  FUN_146a0d19c(local_e0,&local_230,&local_1f0,&local_1c8);
  FUN_1449db362(&local_218);
  if (local_230 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_230 + 0x10))();
  }
  if (local_240[0] != (longlong *)0x0) {
    (**(code **)(*local_240[0] + 0x10))();
  }
  FUN_1449db362(&local_1d8);
  if (local_1f0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1f0 + 0x10))();
  }
  if (local_200[0] != (longlong *)0x0) {
    (**(code **)(*local_200[0] + 0x10))();
  }
  FUN_1449db362(local_150);
  FUN_1449db362(auStack_160);
  FUN_1449db362(local_170);
  FUN_1449db362(&local_180);
  FUN_1449db362(&local_120);
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  FUN_144a5dc74(local_138);
  lVar3 = local_2f8;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = FUN_1469d13f2;
  local_178 = 0;
  FUN_1469d079c(local_2d8,local_2f8,&local_180);
  local_180 = FUN_1469cf348;
  local_178 = 0;
  FUN_1469d129c(local_2e8,lVar3,&local_180,&local_204);
  FUN_1469baa08(&local_180,local_2e8,local_2d8);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1f0 = L"CloseOtherTabsTooltil";
  local_1e8 = 0x15;
  FUN_1446e940c(local_208,&local_1f0);
  local_1f0 = L"DockTabStack";
  local_1e8 = 0xc;
  FUN_1446e940c(local_244,&local_1f0);
  FUN_140208bae(local_200,local_244,local_208,L"Closes all tabs except for the active tab.");
  FUN_14023423e(&local_1f0,local_200);
  local_1e0 = 1;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_230 = L"CloseOtherTabs";
  local_228 = 0xe;
  FUN_1446e940c(local_248,&local_230);
  local_230 = L"DockTabStack";
  local_228 = 0xc;
  FUN_1446e940c(local_2c4,&local_230);
  FUN_140208bae(local_240,local_2c4,local_248,L"Close Other Tabs");
  FUN_14023423e(&local_230,local_240);
  local_220 = 1;
  local_218 = 0;
  uStack_210 = 0;
  local_308 = local_138;
  local_310 = 0;
  local_318 = 1;
  local_320 = 0;
  local_328 = &local_180;
  FUN_146a0d19c(local_e0,&local_230,&local_1f0,&local_1c8);
  FUN_1449db362(&local_218);
  if (local_230 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_230 + 0x10))();
  }
  if (local_240[0] != (longlong *)0x0) {
    (**(code **)(*local_240[0] + 0x10))();
  }
  FUN_1449db362(&local_1d8);
  if (local_1f0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1f0 + 0x10))();
  }
  if (local_200[0] != (longlong *)0x0) {
    (**(code **)(*local_200[0] + 0x10))();
  }
  FUN_1449db362(local_150);
  FUN_1449db362(auStack_160);
  FUN_1449db362(local_170);
  FUN_1449db362(&local_180);
  FUN_1449db362(&local_120);
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  FUN_146a0d58a(local_e0);
  lVar3 = *(longlong *)(local_2f8 + 0x290);
  lVar6 = *(longlong *)(lVar3 + 0x220);
  if (lVar6 == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0))
    goto LAB_1469d054a;
    lVar7 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
    lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar7);
    plVar8 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar7);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar6 != 0) goto LAB_1469d051b;
  }
  else {
    plVar8 = *(longlong **)(lVar3 + 0x228);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
LAB_1469d051b:
    FUN_146a5ca62(lVar6,local_e0);
  }
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
LAB_1469d054a:
  uVar4 = local_2f0;
  FUN_146a0a3c8(local_e0,local_2f0,0);
  local_e0[0] = &PTR_FUN_149f05160;
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  FUN_1469e534a(local_e0);
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1469d05c4 FUN_1469d05c4 body=125 status=ok
// SIG undefined FUN_1469d05c4(void)

undefined8 FUN_1469d05c4(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x2f0) == '\0') && (*(int *)(*(longlong *)(param_1 + 0x290) + 0x200) < 1)
     ) {
    if (*(int *)(param_1 + 0x288) < 1) {
      uVar1 = 2;
    }
    else {
      local_20 = DAT_14c96b1e1;
      local_1f = 1;
      local_18 = 0;
      uStack_10 = 0;
      FUN_14020e622();
      uVar1 = 1;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d0642 FUN_1469d0642 body=344 status=ok
// SIG undefined FUN_1469d0642(void)

undefined8 *
FUN_1469d0642(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 param_6,char param_7,undefined8 param_8,
             undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = *param_4;
  local_40 = param_4[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_3;
  local_50 = param_3[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_68 = param_8;
  local_70 = 0;
  local_78 = param_6;
  local_80 = &local_48;
  local_88 = param_5;
  FUN_146a0ce82(param_1,5,param_2,&local_58);
  *param_1 = &PTR_FUN_149f05160;
  param_1[0xc] = 0;
  FUN_144a5dc74(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(char *)((longlong)param_1 + 0x79) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x7a) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
  if (param_7 != '\0') {
    FUN_146a0db76(param_1);
  }
  plVar3 = (longlong *)param_3[1];
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
  plVar3 = (longlong *)param_4[1];
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d079c FUN_1469d079c body=386 status=ok
// SIG undefined FUN_1469d079c(void)

undefined8 * FUN_1469d079c(undefined8 *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1469d08ad:
    *puVar5 = &DAT_149efe500;
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
    *puVar5 = &PTR_FUN_149f035a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469d08ad;
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
    *puVar5 = &DAT_149efe500;
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
    *puVar5 = &PTR_FUN_149f035a0;
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



// FUNCTION 1469d091e FUN_1469d091e body=664 status=ok
// SIG undefined FUN_1469d091e(void)

ulonglong FUN_1469d091e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[0x4e];
  if (plVar3 == (longlong *)0x0) {
LAB_1469d0986:
    uVar10 = 0;
    goto LAB_1469d0988;
  }
  iVar9 = (int)plVar3[1];
  do {
    if (iVar9 == 0) goto LAB_1469d0986;
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar12 = iVar9 == iVar7;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar9 + 1;
      iVar7 = iVar9;
    }
    iVar9 = iVar7;
    UNLOCK();
  } while (!bVar12);
  plVar4 = (longlong *)param_1[0x4d];
  if (plVar4 == (longlong *)0x0) {
LAB_1469d0965:
    uVar10 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x260))(plVar4,&local_48);
    iVar9 = local_40;
    FUN_1469ec9dc(local_48,local_40);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (iVar9 == 0) goto LAB_1469d0965;
    (**(code **)(*plVar4 + 0x260))(plVar4,&local_48);
    plVar2 = local_48;
    FUN_14162fdc4();
    lVar6 = DAT_14c98e9c0;
    plVar5 = *(longlong **)(DAT_14c98e9c0 + 0x1e0);
    if (plVar5 == (longlong *)0x0) {
LAB_1469d0a14:
      bVar12 = false;
      uVar11 = 0;
    }
    else {
      iVar9 = (int)plVar5[1];
      do {
        if (iVar9 == 0) goto LAB_1469d0a14;
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar12 = iVar9 == iVar7;
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar12);
      uVar11 = (undefined7)((ulonglong)plVar2 >> 8);
      bVar12 = *(longlong *)(lVar6 + 0x1d8) == *plVar2 && *(longlong *)(lVar6 + 0x1d8) != 0;
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    FUN_1469ec9dc(local_48,local_40);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar4 + 600))(plVar4,&local_48);
    if (((local_48[0x58] == 0) || (plVar4 = (longlong *)local_48[0x59], plVar4 == (longlong *)0x0))
       || ((int)plVar4[1] < 1)) {
LAB_1469d0aa7:
      bVar13 = false;
    }
    else {
      iVar9 = (int)plVar4[1];
      do {
        if (iVar9 == 0) goto LAB_1469d0aa7;
        LOCK();
        iVar7 = (int)plVar4[1];
        bVar13 = iVar9 == iVar7;
        if (bVar13) {
          *(int *)(plVar4 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar13);
      bVar13 = local_48[0x58] != 0;
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
    plVar4 = (longlong *)CONCAT44(uStack_3c,local_40);
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
    iVar9 = (**(code **)(*param_1 + 0x268))(param_1);
    if (iVar9 != 1) goto LAB_1469d0965;
    FUN_14162fdc4();
    lVar6 = **(longlong **)(param_1[0x52] + 0x1f8);
    plVar4 = (longlong *)(*(longlong **)(param_1[0x52] + 0x1f8))[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((lVar6 == 0) || (cVar8 = FUN_146a580d6(), cVar8 != '\0')) {
      uVar10 = CONCAT71(uVar11,bVar12 & bVar13) ^ 1;
    }
    else {
      uVar10 = 0;
    }
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
LAB_1469d0988:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1469d0bb8 FUN_1469d0bb8 body=386 status=ok
// SIG undefined FUN_1469d0bb8(void)

longlong * FUN_1469d0bb8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1469d0cc9:
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
    *puVar5 = &PTR_FUN_149f03530;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469d0cc9;
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
    *puVar5 = &PTR_FUN_149f03530;
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



// FUNCTION 1469d0d46 FUN_1469d0d46 body=237 status=ok
// SIG undefined FUN_1469d0d46(void)

uint FUN_1469d0d46(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint unaff_EBX;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x2c8), plVar4 != (longlong *)0x0)) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_1469d0dc2;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(lVar3 + 0x2c0);
    if (lVar3 != 0) {
      cVar6 = FUN_146a580d6(*param_1);
      if (cVar6 == '\0') {
        unaff_EBX = 0;
      }
      else {
        FUN_146a584e0(*param_1,local_38);
        unaff_EBX = FUN_1469d23c6(lVar3,local_38);
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
    if (lVar3 != 0) goto LAB_1469d0dc4;
  }
LAB_1469d0dc2:
  unaff_EBX = 0;
LAB_1469d0dc4:
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBX & 0xffffff01;
}



// FUNCTION 1469d0e34 FUN_1469d0e34 body=250 status=ok
// SIG undefined FUN_1469d0e34(void)

ulonglong FUN_1469d0e34(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong unaff_RBX;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x290);
  lVar5 = *(longlong *)(lVar3 + 0x220);
  if (lVar5 == 0) {
    if ((0 < *(int *)(lVar3 + 0x200)) && (-1 < (longlong)*(int *)(lVar3 + 0x250))) {
      lVar8 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar8);
      plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        if (lVar5 != 0) goto LAB_1469d0f10;
        bVar7 = 0;
        goto LAB_1469d0e9a;
      }
      if (lVar5 != 0) goto LAB_1469d0ef0;
    }
    bVar7 = 0;
  }
  else {
    plVar6 = *(longlong **)(lVar3 + 0x228);
    if (plVar6 == (longlong *)0x0) {
LAB_1469d0ef0:
      local_28 = (longlong *)0x0;
      local_30 = lVar5;
      uVar4 = FUN_1469d22e0();
      unaff_RBX = (ulonglong)uVar4;
      bVar7 = 1;
      goto LAB_1469d0ec0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
LAB_1469d0f10:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_30 = lVar5;
    local_28 = plVar6;
    uVar4 = FUN_1469d22e0();
    unaff_RBX = (ulonglong)uVar4;
    bVar7 = 1;
LAB_1469d0e9a:
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
LAB_1469d0ec0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar7) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d0f30 FUN_1469d0f30 body=220 status=ok
// SIG undefined FUN_1469d0f30(void)

void FUN_1469d0f30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x290);
  lVar4 = *(longlong *)(lVar3 + 0x220);
  if (lVar4 == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0))
    goto LAB_1469d0fb2;
    lVar6 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar6);
    plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar6);
    if (plVar5 == (longlong *)0x0) {
      if (lVar4 == 0) goto LAB_1469d0fb2;
      goto LAB_1469d0fdb;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 != 0) goto LAB_1469d0ff6;
  }
  else {
    plVar5 = *(longlong **)(lVar3 + 0x228);
    if (plVar5 == (longlong *)0x0) {
LAB_1469d0fdb:
      local_18 = (longlong *)0x0;
      local_20 = lVar4;
      FUN_1469d1d4c();
      goto LAB_1469d0fb2;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
LAB_1469d0ff6:
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_20 = lVar4;
    local_18 = plVar5;
    FUN_1469d1d4c();
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
    }
  }
LAB_1469d0fb2:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d100e FUN_1469d100e body=158 status=ok
// SIG undefined FUN_1469d100e(void)

undefined4 FUN_1469d100e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(lVar3 + 0x220) == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0)) {
      return 0;
    }
    lVar6 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar6);
    plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar6);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_1469d103e;
    }
  }
  else {
    plVar7 = *(longlong **)(lVar3 + 0x228);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  uVar5 = FUN_146a5ca8a();
LAB_1469d103e:
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
  return uVar5;
}



// FUNCTION 1469d10ac FUN_1469d10ac body=494 status=ok
// SIG undefined FUN_1469d10ac(void)

ulonglong FUN_1469d10ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(lVar10 + 0x220) == 0) {
    if ((*(int *)(lVar10 + 0x200) < 1) || ((longlong)*(int *)(lVar10 + 0x250) < 0)) {
      uVar11 = 0;
      goto LAB_1469d125b;
    }
    lVar7 = (longlong)*(int *)(lVar10 + 0x250) * 0x10;
    lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x1f8) + lVar7);
    plVar8 = *(longlong **)(*(longlong *)(lVar10 + 0x1f8) + 8 + lVar7);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) goto LAB_1469d10f4;
LAB_1469d122c:
    uVar11 = 0;
  }
  else {
    plVar8 = *(longlong **)(lVar10 + 0x228);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
LAB_1469d10f4:
    cVar6 = FUN_146a580d6();
    if ((cVar6 != '\x03') && (cVar6 != '\0')) goto LAB_1469d122c;
    lVar10 = *(longlong *)(param_1 + 0x290);
    if (*(int *)(lVar10 + 0x200) < 2) goto LAB_1469d122c;
    uVar11 = 0;
    iVar9 = 0;
    if (*(int *)(lVar10 + 0x250) != *(int *)(lVar10 + 0x200) + -1) {
      FUN_1469cf112(lVar10 + 0x1e0,&local_40);
      if (0 < *(int *)(*(longlong *)(param_1 + 0x290) + 0x200)) {
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x290) + 0x250) + 1;
      }
      if (iVar9 < local_38) {
        lVar10 = (longlong)iVar9;
        uVar11 = lVar10 << 4 | 8;
        do {
          uVar3 = *(undefined8 *)(local_40 + -8 + uVar11);
          plVar4 = *(longlong **)(local_40 + uVar11);
          if (plVar4 == (longlong *)0x0) {
            cVar6 = FUN_146a5ca8a(uVar3);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            cVar6 = FUN_146a5ca8a(uVar3);
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
          if (cVar6 != '\0') {
            FUN_1469ec9dc(local_40,local_38);
            if (local_40 != 0) {
              FUN_1400020a8();
            }
            uVar11 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
            goto LAB_1469d122e;
          }
          lVar10 = lVar10 + 1;
          uVar11 = uVar11 + 0x10;
        } while (lVar10 < local_38);
      }
      FUN_1469ec9dc(local_40);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1469d122c;
    }
  }
LAB_1469d122e:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1469d125b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d129c FUN_1469d129c body=342 status=ok
// SIG undefined FUN_1469d129c(void)

longlong * FUN_1469d129c(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

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
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1469d1319:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1469d1319;
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
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_149f03680;
  *(undefined4 *)(puVar5 + 1) = *param_4;
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
  *puVar5 = &PTR_FUN_149f03610;
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



// FUNCTION 1469d13f2 FUN_1469d13f2 body=480 status=ok
// SIG undefined FUN_1469d13f2(void)

ulonglong FUN_1469d13f2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = *(longlong *)(param_1 + 0x290);
  lVar7 = *(longlong *)(lVar9 + 0x220);
  if (lVar7 == 0) {
    if ((*(int *)(lVar9 + 0x200) < 1) || ((longlong)*(int *)(lVar9 + 0x250) < 0)) {
      uVar8 = 0;
      goto LAB_1469d14c9;
    }
    lVar10 = (longlong)*(int *)(lVar9 + 0x250) * 0x10;
    lVar7 = *(longlong *)(*(longlong *)(lVar9 + 0x1f8) + lVar10);
    plVar6 = *(longlong **)(*(longlong *)(lVar9 + 0x1f8) + 8 + lVar10);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar7 != 0) goto LAB_1469d1436;
  }
  else {
    plVar6 = *(longlong **)(lVar9 + 0x228);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
LAB_1469d1436:
    cVar5 = FUN_146a580d6(lVar7);
    if (((cVar5 == '\x03') || (cVar5 == '\0')) &&
       (1 < *(int *)(*(longlong *)(param_1 + 0x290) + 0x200))) {
      FUN_1469cf112(*(longlong *)(param_1 + 0x290) + 0x1e0,&local_40);
      if (0 < local_38) {
        lVar9 = 8;
        lVar10 = 0;
        do {
          lVar3 = *(longlong *)(local_40 + -8 + lVar9);
          plVar4 = *(longlong **)(local_40 + lVar9);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if ((lVar7 != lVar3) && (cVar5 = FUN_146a5ca8a(), cVar5 != '\0')) {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
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
            FUN_1469ec9dc(local_40,local_38);
            if (local_40 != 0) {
              FUN_1400020a8();
            }
            uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
            goto LAB_1469d145f;
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x10;
        } while (lVar10 < local_38);
      }
      FUN_1469ec9dc(local_40);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar8 = 0;
LAB_1469d145f:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1469d14c9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469d15d4 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  *param_1 = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  param_1[0x2e] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 1469d15da FUN_1469d15da body=113 status=ok
// SIG undefined FUN_1469d15da(void)

longlong * FUN_1469d15da(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469f332a(param_1[2],*param_1);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1469d164c FUN_1469d164c body=763 status=ok
// SIG undefined FUN_1469d164c(void)

longlong * FUN_1469d164c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x288) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  FUN_1469cf112(*(longlong *)(param_1 + 0x290) + 0x1e0,&local_50);
  if (0 < local_48) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      FUN_146a5cbf6(*(undefined8 *)(local_50 + lVar7));
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar9 < local_48);
  }
  FUN_1469ec9dc(local_50);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1469bed62(&local_70);
  FUN_1469d194e(local_70,&local_60,*(undefined4 *)(param_1 + 0x278));
  uVar5 = FUN_14692f5de(param_1 + 0x2f8);
  FUN_1469d19b4(local_60,&local_50,uVar5);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  lVar4 = local_50;
  lVar7 = *(longlong *)(param_1 + 0x290);
  lVar9 = *(longlong *)(lVar7 + 0x220);
  if (lVar9 == 0) {
    if ((*(int *)(lVar7 + 0x200) < 1) || ((longlong)*(int *)(lVar7 + 0x250) < 0)) {
      plVar8 = (longlong *)0x0;
      goto LAB_1469d17f2;
    }
    lVar6 = (longlong)*(int *)(lVar7 + 0x250) * 0x10;
    lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x1f8) + lVar6);
    plVar8 = *(longlong **)(*(longlong *)(lVar7 + 0x1f8) + 8 + lVar6);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar9 == 0) goto LAB_1469d17f2;
  }
  else {
    plVar8 = *(longlong **)(lVar7 + 0x228);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
  }
  FUN_146a584e0(lVar9,&local_60);
  FUN_1469d1a1a(lVar4,local_80,&local_60);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_78 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
LAB_1469d17f2:
  if (0 < *(int *)(param_1 + 0x288)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x280) + 8 + lVar7) == -1) &&
         (FUN_1469d1a84(local_50,local_90,*(longlong *)(param_1 + 0x280) + lVar7), plVar3 = local_88
         , local_88 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_88 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar9 < *(int *)(param_1 + 0x288));
  }
  *param_2 = local_50;
  lVar7 = CONCAT44(uStack_44,local_48);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_44,local_48);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1469d194e FUN_1469d194e body=102 status=ok
// SIG undefined FUN_1469d194e(void)

undefined8 * FUN_1469d194e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x18) = param_3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469d19a4:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469d19a4;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 1469d19b4 FUN_1469d19b4 body=101 status=ok
// SIG undefined FUN_1469d19b4(void)

undefined8 * FUN_1469d19b4(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x30) = param_3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469d1a09:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469d1a09;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 1469d1a1a FUN_1469d1a1a body=105 status=ok
// SIG undefined FUN_1469d1a1a(void)

undefined8 * FUN_1469d1a1a(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 0x34) = *param_3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1469d1a73:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1469d1a73;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
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



// FUNCTION 1469d1a84 FUN_1469d1a84 body=168 status=ok
// SIG undefined FUN_1469d1a84(void)

undefined8 * FUN_1469d1a84(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  iVar14 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar14 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar14 + 1U) {
    FUN_1469e545e(param_1 + 0x20,iVar14);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  uVar10 = param_3[5];
  uVar11 = param_3[6];
  uVar12 = param_3[7];
  puVar3 = (undefined4 *)(lVar4 + 0x10 + (longlong)iVar14 * 0x20);
  *puVar3 = param_3[4];
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  puVar3 = (undefined4 *)(lVar4 + (longlong)iVar14 * 0x20);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1469d1b08:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar14 = (int)plVar5[1];
    do {
      if (iVar14 == 0) goto LAB_1469d1b08;
      LOCK();
      iVar13 = (int)plVar5[1];
      bVar15 = iVar14 == iVar13;
      if (bVar15) {
        *(int *)(plVar5 + 1) = iVar14 + 1;
        iVar13 = iVar14;
      }
      iVar14 = iVar13;
      UNLOCK();
    } while (!bVar15);
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar5;
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
  return param_2;
}



// FUNCTION 1469d1b2c FUN_1469d1b2c body=243 status=ok
// SIG undefined FUN_1469d1b2c(void)

void FUN_1469d1b2c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1469d1c36(param_1,&local_40);
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  uVar4 = *(undefined8 *)(param_1 + 0x2b8);
  lVar5 = *(longlong *)(param_1 + 0x2c0);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  FUN_14149270a(lVar3);
  plVar6 = *(longlong **)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(longlong *)(lVar3 + 0x18) = lVar5;
  FUN_140a5503c(lVar3);
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar7 = (undefined8 *)param_2[1];
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar7 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar7)(puVar7);
      LOCK();
      piVar2 = (int *)((longlong)puVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d1c36 FUN_1469d1c36 body=134 status=ok
// SIG undefined FUN_1469d1c36(void)

void FUN_1469d1c36(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x268) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x270);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x270);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x270) = plVar3;
    plVar3 = (longlong *)param_2[1];
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469d1caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469d1cbc FUN_1469d1cbc body=142 status=ok
// SIG undefined FUN_1469d1cbc(void)

undefined4 * FUN_1469d1cbc(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1469e1822(param_1,&local_30,*param_3);
  if (local_30 != 0) {
    *param_2 = *(undefined4 *)(local_30 + 0x158);
    *(undefined1 *)(param_2 + 1) = 1;
  }
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
  if (local_30 == 0) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d1d4c FUN_1469d1d4c body=388 status=ok
// SIG undefined FUN_1469d1d4c(void)

void FUN_1469d1d4c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146a584e0(*param_2,&local_40);
  if ((longlong)(int)param_1[0x51] != 0) {
    lVar7 = param_1[0x50];
    uVar5 = 0;
    lVar6 = 0;
    do {
      if ((((*(byte *)(lVar7 + 0x10 + uVar5) & 1) != 0) &&
          (*(longlong *)(lVar7 + uVar5) == local_40)) &&
         ((local_38 == -1 || (local_38 == *(int *)(lVar7 + 8 + uVar5))))) {
        if ((int)(~uVar5 >> 5) != 0) {
          (**(code **)(*param_1 + 600))(param_1,&local_40);
          local_50 = *param_2;
          local_48 = param_2[1];
          if (local_48 != 0) {
            LOCK();
            *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
            UNLOCK();
          }
          cVar4 = FUN_1469c44bc(local_40,&local_50);
          plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
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
          if (cVar4 != '\x02') {
            lVar7 = (lVar6 >> 0x20) * 0x20;
            *(undefined4 *)(param_1[0x50] + 0x10 + lVar7) = 4;
            *(char *)(param_1[0x50] + 0x14 + lVar7) = cVar4;
            FUN_1469d1ed2(param_1[0x52],param_2,2);
          }
        }
        break;
      }
      lVar6 = lVar6 + 0x100000000;
      uVar5 = uVar5 + 0x20;
    } while ((longlong)(int)param_1[0x51] * 0x20 != uVar5);
  }
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
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d1ed2 FUN_1469d1ed2 body=701 status=ok
// SIG undefined FUN_1469d1ed2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469d1ed2(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x200) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x200) * 0x10;
    lVar14 = 0;
    iVar12 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar14) == *param_2) {
        if (iVar12 != 1) {
          iVar12 = -iVar12;
          plVar13 = *(longlong **)(param_1 + 0x218);
          if (plVar13 != (longlong *)0x0) {
            uVar11 = (ulonglong)*(uint *)(plVar13 + 1);
            goto LAB_1469d201a;
          }
          local_5c = (undefined4)CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          plVar13 = (longlong *)0x0;
          plVar15 = (longlong *)0x0;
          goto LAB_1469d1f7d;
        }
        break;
      }
      iVar12 = iVar12 + -1;
      lVar14 = lVar14 + 0x10;
    } while (lVar10 != lVar14);
  }
  goto LAB_1469d1f38;
  while( true ) {
    LOCK();
    uVar2 = *(uint *)(plVar13 + 1);
    if (uVar9 == uVar2) {
      *(uint *)(plVar13 + 1) = uVar9 + 1;
    }
    else {
      uVar11 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (uVar9 == uVar2) break;
LAB_1469d201a:
    uVar9 = (uint)uVar11;
    if (uVar9 == 0) {
      plVar15 = (longlong *)0x0;
      local_5c = (undefined4)CONCAT71((int7)(uVar11 >> 8),1);
      plVar13 = (longlong *)0x0;
      goto LAB_1469d1f7d;
    }
  }
  plVar15 = *(longlong **)(param_1 + 0x210);
  local_5c = 0;
LAB_1469d1f7d:
  iVar3 = *(int *)(param_1 + 0x250);
  FUN_1469d3314(param_1,iVar12);
  FUN_1428f9d4c(param_1 + 0x1e0,iVar12);
  iVar8 = 1;
  if (1 < iVar3) {
    iVar8 = iVar3;
  }
  iVar6 = iVar8 + -1;
  if (iVar3 < iVar12) {
    iVar6 = iVar3;
  }
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  if (iVar3 == -1) {
    iVar6 = iVar8 + -1;
  }
  FUN_1469d3314(param_1,iVar6);
  if ((param_3 == 2) && (*(int *)(param_1 + 0x250) == -1)) {
    FUN_14162fdc4();
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    FUN_1469befb0(DAT_14c98e9c0);
  }
  uVar7 = local_5c;
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 600))(plVar15,&local_58);
    FUN_1469cce7a(plVar15,param_2,param_3);
    if ((param_3 == 1) && (local_58 != 0)) {
      plVar4 = *(longlong **)(local_58 + 0x2e8);
      if (plVar4 == (longlong *)0x0) {
LAB_1469d210c:
        (**(code **)(*(longlong *)*_DAT_000000e8 + 0x38))((longlong *)*_DAT_000000e8,param_2);
      }
      else {
        iVar12 = (int)plVar4[1];
        do {
          if (iVar12 == 0) goto LAB_1469d210c;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar16 = iVar12 == iVar3;
          if (bVar16) {
            *(int *)(plVar4 + 1) = iVar12 + 1;
            iVar3 = iVar12;
          }
          iVar12 = iVar3;
          UNLOCK();
        } while (!bVar16);
        plVar5 = (longlong *)**(undefined8 **)(*(longlong *)(local_58 + 0x2e0) + 0xe8);
        (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
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
    }
    if (*(int *)(param_1 + 0x200) == 0) {
      FUN_1469cccae(plVar15);
    }
    else {
      FUN_1469cd550(param_1);
    }
    if (local_58 != 0) {
      FUN_1469c2ef8(local_58,param_3);
    }
    plVar15 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if ((char)uVar7 == '\0') {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
LAB_1469d1f38:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d2190 FUN_1469d2190 body=260 status=ok
// SIG undefined FUN_1469d2190(void)

void FUN_1469d2190(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a584e0(*param_2,&local_28);
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x280);
    uVar6 = 0;
    lVar5 = 0;
    do {
      if ((((*(byte *)(lVar3 + 0x10 + uVar6) & 4) != 0) &&
          (*(longlong *)(lVar3 + uVar6) == local_28)) &&
         ((local_20 == -1 || (local_20 == *(int *)(lVar3 + 8 + uVar6))))) {
        if ((int)(~uVar6 >> 5) != 0) {
          lVar5 = (lVar5 >> 0x20) * 0x20;
          *(undefined4 *)(lVar3 + 0x18 + lVar5) = 0;
          *(undefined4 *)(lVar3 + 0x10 + lVar5) = 2;
          *(undefined1 *)(lVar3 + 0x14 + lVar5) = 2;
          FUN_1469bd63c(param_1,param_2,0xffffffff,0);
        }
        break;
      }
      lVar5 = lVar5 + 0x100000000;
      uVar6 = uVar6 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x288) * 0x20 != uVar6);
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d2296 FUN_1469d2296 body=74 status=ok
// SIG undefined FUN_1469d2296(void)

undefined8 * FUN_1469d2296(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x1e0);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x1d8);
    }
  }
  return param_2;
}



// FUNCTION 1469d22e0 FUN_1469d22e0 body=228 status=ok
// SIG undefined FUN_1469d22e0(void)

ulonglong FUN_1469d22e0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  undefined1 local_30 [8];
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146a584e0(*param_2,local_30);
  if (local_28 == -1) {
    cVar4 = FUN_146a580d6(*param_2);
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0x250))(param_1,&local_40);
      iVar5 = (**(code **)(*local_40 + 0x268))();
      uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1 < iVar5);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      goto LAB_1469d2314;
    }
  }
  uVar6 = 0;
LAB_1469d2314:
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
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d23c6 FUN_1469d23c6 body=126 status=ok
// SIG undefined FUN_1469d23c6(void)

ulonglong FUN_1469d23c6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1469e1822(param_1,&local_28,*param_2);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x141));
  }
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d2446 FUN_1469d2446 body=126 status=ok
// SIG undefined FUN_1469d2446(void)

bool FUN_1469d2446(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x268))();
  bVar4 = true;
  if (0 < (int)uVar2) {
    cVar1 = FUN_146a5ca82(**(undefined8 **)(param_1[0x52] + 0x1f8));
    if (cVar1 != '\0') {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        if (uVar3 == uVar2) break;
        cVar1 = FUN_146a5ca82(*(undefined8 *)(*(longlong *)(param_1[0x52] + 0x1f8) + uVar3 * 0x10));
      } while (cVar1 != '\0');
      bVar4 = uVar3 < uVar2;
    }
  }
  return bVar4;
}



// FUNCTION 1469d24c4 FUN_1469d24c4 body=168 status=ok
// SIG undefined FUN_1469d24c4(void)

void FUN_1469d24c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f05140;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}



// FUNCTION 1469d256c FUN_1469d256c body=87 status=ok
// SIG undefined FUN_1469d256c(void)

undefined8 FUN_1469d256c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = DAT_14c98e600;
  if (DAT_14c98e600 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)DAT_14c98e600[1];
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
      uVar6 = DAT_14c98e5f8;
      UNLOCK();
    } while (!bVar7);
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



// FUNCTION 1469d25c4 FUN_1469d25c4 body=386 status=ok
// SIG undefined FUN_1469d25c4(void)

undefined8 * FUN_1469d25c4(undefined8 *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1469d26d5:
    *puVar5 = &DAT_149efe500;
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
    *puVar5 = &PTR_FUN_149f03950;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469d26d5;
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
    *puVar5 = &DAT_149efe500;
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
    *puVar5 = &PTR_FUN_149f03950;
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



// FUNCTION 1469d2746 FUN_1469d2746 body=170 status=ok
// SIG undefined FUN_1469d2746(void)

ulonglong FUN_1469d2746(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x290);
  lVar7 = *(longlong *)(lVar3 + 0x220);
  if (lVar7 == 0) {
    if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0)) {
      uVar8 = 0;
      goto LAB_1469d27e7;
    }
    lVar5 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar5);
    plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar7 != 0) goto LAB_1469d276f;
    uVar8 = 0;
  }
  else {
    plVar6 = *(longlong **)(lVar3 + 0x228);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
LAB_1469d276f:
    FUN_14162fdc4();
    cVar4 = FUN_146a580d6(lVar7);
    uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),cVar4 == '\0');
  }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1469d27e7:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469d27f0 FUN_1469d27f0 body=154 status=ok
// SIG undefined FUN_1469d27f0(void)

void FUN_1469d27f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  cVar4 = FUN_1469d2746();
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x290);
    lVar5 = *(longlong *)(lVar3 + 0x220);
    if (lVar5 == 0) {
      if ((*(int *)(lVar3 + 0x200) < 1) || ((longlong)*(int *)(lVar3 + 0x250) < 0)) {
        lVar5 = 0;
        goto LAB_1469d2880;
      }
      lVar6 = (longlong)*(int *)(lVar3 + 0x250) * 0x10;
      lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x1f8) + lVar6);
      plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0x1f8) + 8 + lVar6);
    }
    else {
      plVar7 = *(longlong **)(lVar3 + 0x228);
    }
    if (plVar7 == (longlong *)0x0) {
LAB_1469d2880:
      FUN_146a56f5e(lVar5);
      return;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_146a56f5e(lVar5);
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
                    /* WARNING: Could not recover jumptable at 0x0001469d2848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469d288a FUN_1469d288a body=539 status=ok
// SIG undefined FUN_1469d288a(void)

ulonglong FUN_1469d288a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 600))(param_1,&local_48);
  if (local_48 != 0) {
    FUN_14162fdc4();
    plVar3 = DAT_14c98e9c8;
    lVar5 = DAT_14c98e9c0;
    if (DAT_14c98e9c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98e9c8 + 1) = (int)DAT_14c98e9c8[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(lVar5 + 0x1e0);
    if (plVar4 != (longlong *)0x0) {
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) goto LAB_1469d29db;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar13 = iVar7 == iVar6;
        if (bVar13) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
      } while (!bVar13);
      lVar5 = *(longlong *)(lVar5 + 0x1d8);
      if (lVar5 == 0) {
LAB_1469d29be:
        LOCK();
        plVar9 = plVar4 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        goto LAB_1469d29db;
      }
      if (((*(longlong *)(local_48 + 0x2c0) == 0) ||
          (plVar9 = *(longlong **)(local_48 + 0x2c8), plVar9 == (longlong *)0x0)) ||
         ((int)plVar9[1] < 1)) {
        plVar9 = (longlong *)0x0;
        lVar12 = 0;
      }
      else {
        iVar7 = (int)plVar9[1];
        lVar12 = 0;
        do {
          if (iVar7 == 0) {
            plVar9 = (longlong *)0x0;
            goto LAB_1469d295b;
          }
          LOCK();
          iVar6 = (int)plVar9[1];
          bVar13 = iVar7 == iVar6;
          if (bVar13) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar13);
        lVar12 = *(longlong *)(local_48 + 0x2c0);
      }
LAB_1469d295b:
      FUN_146a58938(lVar5,&local_58);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
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
      if (local_58 != lVar12) goto LAB_1469d29be;
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
      uVar11 = (undefined7)((ulonglong)plVar4 >> 8);
      uVar10 = CONCAT71(uVar11,1);
      if (plVar3 == (longlong *)0x0) goto LAB_1469d2a0a;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) goto LAB_1469d2a0a;
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar7 = *piVar2;
      UNLOCK();
      uVar8 = (uint)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
      uVar10 = CONCAT71(uVar11,1);
joined_r0x0001469d2a94:
      if (iVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar10 = (ulonglong)uVar8;
      }
      goto LAB_1469d2a0a;
    }
LAB_1469d29db:
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        uVar8 = 0;
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar7 = *piVar2;
        UNLOCK();
        uVar10 = 0;
        goto joined_r0x0001469d2a94;
      }
    }
  }
  uVar10 = 0;
LAB_1469d2a0a:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d2aa6 FUN_1469d2aa6 body=121 status=ok
// SIG undefined FUN_1469d2aa6(void)

void FUN_1469d2aa6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  cVar6 = FUN_1469d288a();
  if (cVar6 != '\0') {
    FUN_14162fdc4();
    lVar4 = DAT_14c98e9c0;
    plVar3 = *(longlong **)(DAT_14c98e9c0 + 0x1e0);
    if (plVar3 == (longlong *)0x0) {
LAB_1469d2b13:
      FUN_146a56f5e(0);
      return;
    }
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469d2b13;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    FUN_146a56f5e(*(undefined8 *)(lVar4 + 0x1d8));
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
                    /* WARNING: Could not recover jumptable at 0x0001469d2b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469d2b20 FUN_1469d2b20 body=38 status=ok
// SIG undefined FUN_1469d2b20(void)

undefined1 FUN_1469d2b20(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1469d288a();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_1469d2746(param_1);
  return uVar2;
}



// FUNCTION 1469d2b46 FUN_1469d2b46 body=41 status=ok
// SIG undefined FUN_1469d2b46(void)

void FUN_1469d2b46(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1469d288a();
  if (cVar1 != '\0') {
    FUN_1469d2aa6();
    return;
  }
  FUN_1469d27f0(param_1);
  return;
}



// FUNCTION 1469d2b70 FUN_1469d2b70 body=200 status=ok
// SIG undefined FUN_1469d2b70(void)

void FUN_1469d2b70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 600))(param_1,&local_20);
  if (local_20 != 0) {
    plVar3 = *(longlong **)(local_20 + 0x2e8);
    if (plVar3 == (longlong *)0x0) {
LAB_1469d2bed:
      FUN_1469c8608(0);
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1469d2bed;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar5 == iVar4;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar6);
      FUN_1469c8608(*(undefined8 *)(local_20 + 0x2e0));
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_18 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d2c3a FUN_1469d2c3a body=171 status=ok
// SIG undefined FUN_1469d2c3a(void)

undefined8 * FUN_1469d2c3a(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f006d0;
  param_1[0x3c] = &PTR__purecall_149ef0700;
  param_1[0x3d] = param_1;
  FUN_1446ddc76(param_1 + 0x3e,"Children",1);
  param_1[0x3c] = &PTR_LAB_149f039c0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = 1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x4b] = 0x4046800000000000;
  param_1[0x4c] = 0x4039000000000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  return param_1;
}



// FUNCTION 1469d2ce6 FUN_1469d2ce6 body=1131 status=ok
// SIG undefined FUN_1469d2ce6(void)

void FUN_1469d2ce6(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined1 auStack_4e8 [32];
  code **local_4c8;
  undefined8 local_4c0;
  longlong *local_4b8;
  undefined2 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  longlong local_460 [2];
  longlong *local_450 [2];
  undefined1 local_440 [16];
  undefined1 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong local_418 [2];
  longlong *local_408 [2];
  undefined1 local_3f8 [16];
  undefined1 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  code *local_3c0;
  undefined4 local_3b8;
  undefined1 local_3b0 [880];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x220) = 0;
  plVar11 = *(longlong **)(param_1 + 0x228);
  if (plVar11 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x240) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  *(undefined4 *)(param_1 + 0x248) = uVar3;
  *(undefined4 *)(param_1 + 0x24c) = uVar4;
  *(undefined8 *)(param_1 + 0x230) = 0;
  FUN_1469d3152(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x1a8);
  plVar11 = *(longlong **)(param_2 + 0x1b0);
  plVar10 = *(longlong **)(param_1 + 0x218);
  if (plVar10 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(param_1 + 0x218);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x218) = plVar11;
  }
  if (*(longlong **)(param_2 + 0x1d8) != (longlong *)0x0 && *(int *)(param_2 + 0x1e0) != 0) {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x1d8) + 0x30))();
    if (cVar5 != '\0') {
      if (*(int *)(param_2 + 0x1e0) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_2 + 0x1d8);
      }
      uVar6 = (**(code **)(*plVar11 + 0x58))();
      *(undefined1 *)(param_2 + 0x1d0) = uVar6;
    }
  }
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x1d0);
  FUN_145ab3d24(local_3b0);
  FUN_140056680(local_418,&DAT_149e06124);
  FUN_140233b1a(local_408,local_418);
  FUN_14023423e(local_3f8,local_408);
  local_3e8 = 1;
  local_3e0 = 0;
  uStack_3d8 = 0;
  uVar7 = FUN_1469d324e(local_3b0,local_3f8);
  FUN_140056680(local_460,L"Add New Tab");
  FUN_140233b1a(local_450,local_460);
  FUN_14023423e(local_440,local_450);
  local_430 = 1;
  local_428 = 0;
  uStack_420 = 0;
  lVar8 = FUN_1469cc670(uVar7,local_440);
  FUN_1446ddc76(&local_468,"ButtonText",1);
  lVar9 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar9 == 0) {
    lVar9 = DAT_14c96b350;
  }
  uVar7 = FUN_140a57516(lVar9,local_468,0,0);
  *(undefined8 *)(lVar8 + 0x1c0) = uVar7;
  local_490 = 0x40c0000040c00000;
  uStack_488 = 0x40c0000040c00000;
  local_480 = 1;
  local_478 = 0;
  uStack_470 = 0;
  *(undefined1 *)(lVar8 + 0x1e0) = 1;
  *(undefined4 *)(lVar8 + 0x1d0) = 0x40c00000;
  *(undefined4 *)(lVar8 + 0x1d4) = 0x40c00000;
  *(undefined4 *)(lVar8 + 0x1d8) = 0x40c00000;
  *(undefined4 *)(lVar8 + 0x1dc) = 0x40c00000;
  FUN_144a450dc(lVar8 + 0x1e8,&local_478);
  FUN_1449db362(&local_478);
  puVar12 = &DAT_14c96b1e1;
  if (*(char *)(param_1 + 0x278) != '\0') {
    puVar12 = &DAT_14c96b238;
  }
  local_4a8 = CONCAT11(1,*puVar12);
  local_4a0 = 0;
  uStack_498 = 0;
  *(undefined2 *)(lVar8 + 0x70) = local_4a8;
  FUN_144a450dc(lVar8 + 0x78,&local_4a0);
  FUN_1449db362(&local_4a0);
  local_3c0 = FUN_1469d32a4;
  local_3b8 = 0;
  FUN_1469f3890(&local_4c0,param_1,&local_3c0);
  FUN_144a450dc(lVar8 + 0x220,&local_4c0);
  FUN_1449db362(&local_4c0);
  local_4c8 = &local_3c0;
  FUN_145ab3730(&local_4c0,"SButton",
                ".\\Runtime/Slate/Private/Framework/Docking/SDockingTabWell.cpp",0x2b);
  if (local_4b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4b8 + 1) = (int)local_4b8[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = local_4c0;
  *(longlong **)(param_1 + 0x270) = local_4b8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_145ab34ca(&local_4c0,local_3d0,lVar8);
  if (local_3c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_3c8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_3c8)(local_3c8);
      LOCK();
      piVar1 = (int *)((longlong)local_3c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3c8 + 0x10))(local_3c8);
      }
    }
  }
  if (local_4b8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_4b8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_4b8)(local_4b8);
      LOCK();
      piVar1 = (int *)((longlong)local_4b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4b8 + 0x10))(local_4b8);
      }
    }
  }
  if (local_450[0] != (longlong *)0x0) {
    (**(code **)(*local_450[0] + 0x10))();
  }
  if (local_460[0] != 0) {
    FUN_1400020a8();
  }
  if (local_408[0] != (longlong *)0x0) {
    (**(code **)(*local_408[0] + 0x10))();
  }
  if (local_418[0] != 0) {
    FUN_1400020a8();
  }
  FUN_145ab35f4(local_3b0);
  if ((local_40 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d3152 FUN_1469d3152 body=250 status=ok
// SIG undefined FUN_1469d3152(void)

undefined8 * FUN_1469d3152(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 4) != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 4) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[3];
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,&local_28);
      plVar4 = local_20;
      if (&local_28 != param_1) {
        *param_1 = local_28;
        local_28 = 0;
        plVar2 = (longlong *)param_1[1];
        if (local_20 != plVar2) {
          local_20 = (longlong *)0x0;
          param_1[1] = plVar4;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar2 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
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
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_20)(local_20);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d324e FUN_1469d324e body=86 status=ok
// SIG undefined FUN_1469d324e(void)

longlong FUN_1469d324e(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1f8);
  *(char *)(param_1 + 0x208) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x210,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 1469d32a4 FUN_1469d32a4 body=108 status=ok
// SIG undefined FUN_1469d32a4(void)

undefined1 * FUN_1469d32a4(undefined8 param_1,undefined1 *param_2)

{
  FUN_14162fdc4();
  if ((*(int *)(DAT_14c98e9c0 + 0x1c0) != 0) &&
     (*(longlong **)(DAT_14c98e9c0 + 0x1b8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(DAT_14c98e9c0 + 0x1b8) + 0x60))();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1469d3314 FUN_1469d3314 body=790 status=ok
// SIG undefined FUN_1469d3314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469d3314(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_1 + 0x250);
  if (iVar4 != param_2) {
    iVar5 = *(int *)(param_1 + 0x200) + -1;
    if (iVar5 <= iVar4) {
      iVar4 = iVar5;
    }
    if (param_2 < iVar5) {
      iVar5 = param_2;
    }
    *(int *)(param_1 + 0x250) = iVar5;
    FUN_1469bd33a(param_1,&local_30);
    if ((0 < *(int *)(param_1 + 0x200)) && (local_30 != 0)) {
      if (iVar4 == -1) {
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
      }
      else {
        local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar4 * 0x10);
        plStack_40 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + 8 + (longlong)iVar4 * 0x10);
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
        }
      }
      if ((longlong)*(int *)(param_1 + 0x250) == -1) {
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
      }
      else {
        lVar7 = (longlong)*(int *)(param_1 + 0x250) * 0x10;
        local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + lVar7);
        plStack_50 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + 8 + lVar7);
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
      }
      plVar2 = *(longlong **)(local_30 + 0x2e8);
      if (plVar2 == (longlong *)0x0) {
LAB_1469d3446:
        (**(code **)(*(longlong *)*_DAT_000000e8 + 0x20))
                  ((longlong *)*_DAT_000000e8,&local_58,&local_48);
      }
      else {
        iVar4 = (int)plVar2[1];
        do {
          if (iVar4 == 0) goto LAB_1469d3446;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar9 = iVar4 == iVar5;
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          UNLOCK();
        } while (!bVar9);
        plVar3 = (longlong *)**(undefined8 **)(*(longlong *)(local_30 + 0x2e0) + 0xe8);
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_58,&local_48);
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
      FUN_14162fdc4();
      (**(code **)(*(longlong *)**(undefined8 **)(DAT_14c98e9c0 + 0xe8) + 0x20))
                ((longlong *)**(undefined8 **)(DAT_14c98e9c0 + 0xe8),&local_58,&local_48);
      plVar2 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_40)(plStack_40);
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
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  FUN_1469cd550(param_1);
  if ((longlong)*(int *)(param_1 + 0x250) != -1) {
    lVar6 = (longlong)*(int *)(param_1 + 0x250) * 0x10;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar6);
    plVar2 = *(longlong **)(lVar7 + 0x2c8);
    if (plVar2 != (longlong *)0x0) {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x1f8) + lVar6);
      iVar4 = (int)plVar2[1];
      do {
        if (iVar4 == 0) goto LAB_1469d33ac;
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar4 == iVar5;
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
          iVar5 = iVar4;
        }
        iVar4 = iVar5;
        UNLOCK();
      } while (!bVar9);
      lVar7 = *(longlong *)(lVar7 + 0x2c0);
      if (lVar7 != 0) {
        FUN_14162fdc4();
        if (lVar7 == DAT_14c98e9c0) {
          FUN_14162fdc4();
          FUN_1469c6316(DAT_14c98e9c0,puVar8);
        }
        else {
          local_68 = *puVar8;
          local_60 = puVar8[1];
          if (local_60 != 0) {
            LOCK();
            *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
            UNLOCK();
          }
          FUN_1469d61bc(lVar7,&local_68);
        }
      }
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
LAB_1469d33ac:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d362c FUN_1469d362c body=4001 status=ok
// SIG undefined FUN_1469d362c(void)

void FUN_1469d362c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  double dVar10;
  char cVar11;
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
  undefined1 auStack_218 [32];
  float *local_1f8;
  float *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  double local_1c8;
  double local_1c0;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined8 local_1a0;
  float local_194;
  ulonglong local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  undefined4 uStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong local_150;
  longlong *local_148;
  undefined2 local_140;
  undefined1 uStack_13e;
  undefined5 uStack_13d;
  undefined8 uStack_138;
  float local_130;
  float fStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  char local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar6 = *(longlong *)(param_1 + 0x220);
  local_1d0 = *(longlong **)(param_1 + 0x228);
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(param_1 + 0x200);
  local_1e0 = param_3;
  FUN_1469d45ce(param_1,&local_1c8,param_2);
  if ((longlong)iVar5 < 1) {
    fVar19 = 0.0;
  }
  else {
    fVar20 = (float)(local_1c8 * 0.5 + (double)*(float *)(param_1 + 0x238));
    local_1d8 = param_2 + 0x1c;
    lVar12 = 0;
    fVar19 = 0.0;
    do {
      dVar10 = local_1c8;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar12);
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + 8 + lVar12);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      cVar11 = FUN_146a580d6(lVar7);
      if ((lVar6 == 0) || (lVar6 != lVar7)) {
        fVar21 = (float)(dVar10 - (double)*(float *)(*(longlong *)
                                                      (lVar7 + 0x448 +
                                                      (ulonglong)(cVar11 != '\0') * 8) + 0xb48));
        if ((lVar6 != 0) && ((fVar19 <= fVar20 && (fVar13 = fVar19 + fVar21, fVar20 < fVar13)))) {
          fVar19 = fVar13;
        }
        fStack_1b4 = (float)local_1c0;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        local_1b8 = (float)dVar10;
        local_1b0 = 1.0;
        uStack_1a8 = 0;
        local_f0 = *(char *)(lVar7 + 0x198);
        fStack_1ac = fVar19;
        if (DAT_14c96b1e0 == '\0') {
          if (local_f0 == '\0') goto LAB_1469d3810;
          local_f8 = *(ulonglong *)(lVar7 + 400);
          local_108 = *(undefined8 *)(lVar7 + 0x180);
          uStack_100 = *(undefined8 *)(lVar7 + 0x188);
LAB_1469d3b01:
          fVar13 = (float)*(double *)(lVar7 + 0x170);
          if (DAT_14c96b1e0 != '\0') {
            fVar13 = (0.5 - fVar13) + 0.5;
          }
          local_1a0 = CONCAT44((float)*(double *)(lVar7 + 0x178),fVar13);
          local_190 = *(ulonglong *)(param_2 + 0xc);
          local_194 = *(float *)(param_2 + 8);
          local_1e8 = local_1d8;
          local_1f0 = &local_194;
          local_1f8 = (float *)&local_1a0;
          FUN_146978c22(&local_140,&local_1b8,&local_1b0,&local_108);
          fStack_184 = (float)((uint5)uStack_13d >> 8);
          fStack_180 = (float)uStack_138;
          fStack_17c = (float)((ulonglong)uStack_138 >> 0x20);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            local_158 = local_110;
            uStack_170 = uStack_128;
            local_168 = CONCAT44(uStack_11c,local_120);
            uStack_160 = CONCAT44(uStack_114,uStack_118);
            local_178 = local_130;
            fStack_174 = fStack_12c;
            fStack_16c = fStack_124;
            local_188 = (float)CONCAT53(uStack_13d,CONCAT12(uStack_13e,local_140));
            goto LAB_1469d3934;
          }
          local_158 = local_110;
          uStack_170 = uStack_128;
          local_168 = CONCAT44(uStack_11c,local_120);
          uStack_160 = CONCAT44(uStack_114,uStack_118);
          local_178 = local_130;
          fStack_174 = fStack_12c;
          fStack_16c = fStack_124;
          local_188 = (float)CONCAT53(uStack_13d,CONCAT12(uStack_13e,local_140));
LAB_1469d3a11:
          local_148 = (longlong *)0x0;
          local_150 = lVar7;
        }
        else {
          if (local_f0 != '\0') {
            local_108 = *(undefined8 *)(lVar7 + 0x180);
            uStack_100 = *(undefined8 *)(lVar7 + 0x188);
            local_f8 = *(ulonglong *)(lVar7 + 400) ^ 0x80000000;
            goto LAB_1469d3b01;
          }
LAB_1469d3810:
          uVar4 = *(undefined1 *)(param_2 + 0x34);
          fStack_180 = *(float *)(param_2 + 8);
          fVar13 = *(float *)(param_2 + 0x1c);
          fVar14 = *(float *)(param_2 + 0x20);
          fVar15 = fVar14 * 0.0 + *(float *)(param_2 + 0x28);
          fVar17 = *(float *)(param_2 + 0x28) * 0.0;
          fVar18 = fVar13 * 0.0 + *(float *)(param_2 + 0x24);
          fStack_16c = *(float *)(param_2 + 0x24) * 0.0;
          fVar16 = fVar19 * fVar14 + fVar17 + *(float *)(param_2 + 0x30);
          fVar22 = fVar19 * fVar13 + fStack_16c + *(float *)(param_2 + 0x2c);
          fVar17 = fVar17 + fVar14;
          fStack_16c = fStack_16c + fVar13;
          local_178 = fStack_180 * 0.0 + *(float *)(param_2 + 0x10);
          fStack_17c = fVar19 * fStack_180 + *(float *)(param_2 + 0xc);
          local_188 = local_1b8;
          fStack_184 = fStack_1b4;
          fStack_174 = fVar19;
          if (plVar8 == (longlong *)0x0) {
            uStack_170 = 0;
            local_168 = CONCAT44(fVar18,fVar17);
            uStack_160 = CONCAT44(fVar22,fVar15);
            local_158 = CONCAT35(local_158._5_3_,CONCAT14(uVar4,fVar16)) & 0xffffff01ffffffff;
            goto LAB_1469d3a11;
          }
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          uStack_170 = 0;
          local_168 = CONCAT44(fVar18,fVar17);
          uStack_160 = CONCAT44(fVar22,fVar15);
          local_158 = CONCAT17(uStack_13e,CONCAT25(local_140,CONCAT14(uVar4,fVar16))) &
                      0xffffff01ffffffff;
LAB_1469d3934:
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          local_150 = lVar7;
          local_148 = plVar8;
          if ((int)*plVar9 == 0) {
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
        FUN_1402018be(local_1e0,&local_188);
        plVar9 = local_148;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_148 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
        fVar19 = fVar19 + fVar21;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      lVar12 = lVar12 + 0x10;
    } while ((longlong)iVar5 * 0x10 != lVar12);
  }
  plVar8 = local_1d0;
  if (lVar6 != 0) {
    fStack_184 = (float)local_1c0;
    local_188 = (float)local_1c8;
    fVar20 = *(float *)(param_1 + 0x238);
    local_190 = (ulonglong)(uint)fVar20;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
    }
    local_194 = 1.0;
    local_1a0 = CONCAT44(fStack_184,local_188);
    local_f0 = *(char *)(lVar6 + 0x198);
    if (DAT_14c96b1e0 == '\0') {
      if (local_f0 == '\0') goto LAB_1469d3cad;
      local_f8 = *(ulonglong *)(lVar6 + 400);
      local_108 = *(undefined8 *)(lVar6 + 0x180);
      uStack_100 = *(undefined8 *)(lVar6 + 0x188);
LAB_1469d433a:
      local_1b0 = (float)*(double *)(lVar6 + 0x170);
      fStack_1ac = (float)*(double *)(lVar6 + 0x178);
      if (DAT_14c96b1e0 != '\0') {
        local_1b0 = (0.5 - local_1b0) + 0.5;
      }
      local_1f8 = &local_1b0;
      local_1e8 = param_2 + 0x1c;
      local_188 = *(float *)(param_2 + 8);
      local_1f0 = &local_188;
      fStack_184 = (float)*(undefined8 *)(param_2 + 0xc);
      fStack_180 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
      FUN_146978c22(&local_140,&local_1a0,&local_194,&local_108);
      fStack_184 = (float)((uint5)uStack_13d >> 8);
      fStack_180 = (float)uStack_138;
      fStack_17c = (float)((ulonglong)uStack_138 >> 0x20);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        local_158 = local_110;
        uStack_170 = uStack_128;
        local_168 = CONCAT44(uStack_11c,local_120);
        uStack_160 = CONCAT44(uStack_114,uStack_118);
        local_178 = local_130;
        fStack_174 = fStack_12c;
        fStack_16c = fStack_124;
        local_188 = (float)CONCAT53(uStack_13d,CONCAT12(uStack_13e,local_140));
        goto LAB_1469d3dd7;
      }
      local_158 = local_110;
      local_168 = CONCAT44(uStack_11c,local_120);
      uStack_160 = CONCAT44(uStack_114,uStack_118);
      local_178 = local_130;
      fStack_174 = fStack_12c;
      uStack_170 = uStack_128;
      fStack_16c = fStack_124;
      local_188 = (float)CONCAT53(uStack_13d,CONCAT12(uStack_13e,local_140));
LAB_1469d3eb3:
      local_148 = (longlong *)0x0;
      local_150 = lVar6;
    }
    else {
      if (local_f0 != '\0') {
        local_108 = *(undefined8 *)(lVar6 + 0x180);
        uStack_100 = *(undefined8 *)(lVar6 + 0x188);
        local_f8 = *(ulonglong *)(lVar6 + 400) ^ 0x80000000;
        goto LAB_1469d433a;
      }
LAB_1469d3cad:
      uVar4 = *(undefined1 *)(param_2 + 0x34);
      fStack_180 = *(float *)(param_2 + 8);
      fVar21 = *(float *)(param_2 + 0x1c);
      fVar13 = *(float *)(param_2 + 0x20);
      fVar15 = fVar13 * 0.0 + *(float *)(param_2 + 0x28);
      fVar17 = *(float *)(param_2 + 0x28) * 0.0;
      fVar18 = fVar21 * 0.0 + *(float *)(param_2 + 0x24);
      fStack_16c = *(float *)(param_2 + 0x24) * 0.0;
      fVar16 = fVar20 * fVar13 + fVar17 + *(float *)(param_2 + 0x30);
      fVar14 = fVar20 * fVar21 + fStack_16c + *(float *)(param_2 + 0x2c);
      fVar17 = fVar17 + fVar13;
      local_178 = fStack_180 * 0.0 + *(float *)(param_2 + 0x10);
      fStack_16c = fStack_16c + fVar21;
      fStack_17c = fStack_180 * fVar20 + *(float *)(param_2 + 0xc);
      fStack_174 = fVar20;
      if (local_1d0 == (longlong *)0x0) {
        uStack_170 = 0;
        local_168 = CONCAT44(fVar18,fVar17);
        uStack_160 = CONCAT44(fVar14,fVar15);
        local_158 = CONCAT35(local_158._5_3_,CONCAT14(uVar4,fVar16)) & 0xffffff01ffffffff;
        goto LAB_1469d3eb3;
      }
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
      uStack_170 = 0;
      local_168 = CONCAT44(fVar18,fVar17);
      uStack_160 = CONCAT44(fVar14,fVar15);
      local_158 = CONCAT17(uStack_13e,CONCAT25(local_140,CONCAT14(uVar4,fVar16))) &
                  0xffffff01ffffffff;
LAB_1469d3dd7:
      local_148 = plVar8;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      local_150 = lVar6;
      if ((int)*plVar9 == 0) {
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
    FUN_1402018be(local_1e0,&local_188);
    plVar9 = local_148;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_148 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  }
  if (*(char *)(param_1 + 0x278) != '\x01') goto LAB_1469d425e;
  fStack_184 = (float)local_1c0;
  local_188 = (float)*(double *)(param_1 + 600);
  lVar6 = *(longlong *)(param_1 + 0x268);
  plVar9 = *(longlong **)(param_1 + 0x270);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_190 = (ulonglong)(uint)fVar19;
  local_194 = 1.0;
  local_1a0 = CONCAT44(fStack_184,local_188);
  local_f0 = *(char *)(lVar6 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_f0 == '\0') goto LAB_1469d3fd5;
    local_f8 = *(ulonglong *)(lVar6 + 400);
    local_108 = *(undefined8 *)(lVar6 + 0x180);
    uStack_100 = *(undefined8 *)(lVar6 + 0x188);
LAB_1469d445b:
    local_1b0 = (float)*(double *)(lVar6 + 0x170);
    fStack_1ac = (float)*(double *)(lVar6 + 0x178);
    if (DAT_14c96b1e0 != '\0') {
      local_1b0 = (0.5 - local_1b0) + 0.5;
    }
    local_1f8 = &local_1b0;
    local_1e8 = param_2 + 0x1c;
    local_188 = *(float *)(param_2 + 8);
    local_1f0 = &local_188;
    fStack_184 = (float)*(undefined8 *)(param_2 + 0xc);
    fStack_180 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
    FUN_146978c22(&local_140,&local_1a0,&local_194,&local_108);
    fStack_184 = (float)((uint5)uStack_13d >> 8);
    fStack_180 = (float)uStack_138;
    fStack_17c = (float)((ulonglong)uStack_138 >> 0x20);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      local_158 = local_110;
      uStack_170 = uStack_128;
      local_168 = CONCAT44(uStack_11c,local_120);
      uStack_160 = CONCAT44(uStack_114,uStack_118);
      local_178 = local_130;
      fStack_174 = fStack_12c;
      fStack_16c = fStack_124;
      local_188 = (float)CONCAT53(uStack_13d,CONCAT12(uStack_13e,local_140));
      goto LAB_1469d40f6;
    }
    local_158 = local_110;
    local_168 = CONCAT44(uStack_11c,local_120);
    uStack_160 = CONCAT44(uStack_114,uStack_118);
    local_178 = local_130;
    fStack_174 = fStack_12c;
    uStack_170 = uStack_128;
    fStack_16c = fStack_124;
    local_188 = (float)CONCAT53(uStack_13d,CONCAT12(uStack_13e,local_140));
LAB_1469d41cc:
    local_148 = (longlong *)0x0;
    local_150 = lVar6;
  }
  else {
    if (local_f0 != '\0') {
      local_108 = *(undefined8 *)(lVar6 + 0x180);
      uStack_100 = *(undefined8 *)(lVar6 + 0x188);
      local_f8 = *(ulonglong *)(lVar6 + 400) ^ 0x80000000;
      goto LAB_1469d445b;
    }
LAB_1469d3fd5:
    uVar4 = *(undefined1 *)(param_2 + 0x34);
    fStack_180 = *(float *)(param_2 + 8);
    fVar20 = *(float *)(param_2 + 0x1c);
    fVar21 = *(float *)(param_2 + 0x20);
    fVar13 = fVar21 * 0.0 + *(float *)(param_2 + 0x28);
    fVar15 = *(float *)(param_2 + 0x28) * 0.0;
    fVar16 = fVar20 * 0.0 + *(float *)(param_2 + 0x24);
    fStack_16c = *(float *)(param_2 + 0x24) * 0.0;
    fVar14 = fVar19 * fVar21 + fVar15 + *(float *)(param_2 + 0x30);
    fVar17 = fVar19 * fVar20 + fStack_16c + *(float *)(param_2 + 0x2c);
    fVar15 = fVar15 + fVar21;
    fStack_16c = fStack_16c + fVar20;
    local_178 = fStack_180 * 0.0 + *(float *)(param_2 + 0x10);
    fStack_17c = fVar19 * fStack_180 + *(float *)(param_2 + 0xc);
    fStack_174 = fVar19;
    if (plVar9 == (longlong *)0x0) {
      uStack_170 = 0;
      local_168 = CONCAT44(fVar16,fVar15);
      uStack_160 = CONCAT44(fVar17,fVar13);
      local_158 = CONCAT35(local_158._5_3_,CONCAT14(uVar4,fVar14)) & 0xffffff01ffffffff;
      goto LAB_1469d41cc;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    uStack_170 = 0;
    local_168 = CONCAT44(fVar16,fVar15);
    uStack_160 = CONCAT44(fVar17,fVar13);
    local_158 = CONCAT17(uStack_13e,CONCAT25(local_140,CONCAT14(uVar4,fVar14))) & 0xffffff01ffffffff
    ;
LAB_1469d40f6:
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_150 = lVar6;
    local_148 = plVar9;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1402018be(local_1e0,&local_188);
  plVar1 = local_148;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_148 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_1469d425e:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_e0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d45ce FUN_1469d45ce body=350 status=ok
// SIG undefined FUN_1469d45ce(void)

double * FUN_1469d45ce(longlong param_1,double *param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  longlong *plVar11;
  bool bVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  
  iVar5 = *(int *)(param_1 + 0x200);
  if (iVar5 < 1) {
    fVar14 = 0.0;
  }
  else {
    lVar8 = **(longlong **)(param_1 + 0x1f8);
    cVar7 = FUN_146a580d6(lVar8);
    fVar14 = *(float *)(*(longlong *)(lVar8 + 0x448 + (ulonglong)(cVar7 != '\0') * 8) + 0xb48);
  }
  lVar8 = *(longlong *)(param_1 + 0x220);
  bVar12 = lVar8 == 0;
  fVar3 = *param_3;
  fVar4 = param_3[1];
  if (iVar5 < 1) {
    plVar11 = *(longlong **)(param_1 + 0x228);
  }
  else {
    lVar8 = **(longlong **)(param_1 + 0x1f8);
    plVar11 = (longlong *)(*(longlong **)(param_1 + 0x1f8))[1];
  }
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  dVar6 = (double)((fVar3 - fVar14) / (float)(int)((iVar5 + 1) - (uint)bVar12) + fVar14);
  dVar13 = DAT_14c98e8e0;
  dVar15 = DAT_14c98e8e8;
  if (lVar8 != 0) {
    cVar7 = FUN_146a580d6();
    pdVar9 = &DAT_14c98e8e0;
    if (cVar7 == '\0') {
      pdVar9 = (double *)&DAT_14c98e8f0;
    }
    pdVar10 = &DAT_14c98e8e8;
    if (cVar7 == '\0') {
      pdVar10 = (double *)&DAT_14c98e8f8;
    }
    dVar13 = *pdVar9;
    dVar15 = *pdVar10;
  }
  if (dVar13 <= dVar6) {
    dVar6 = dVar13;
  }
  dVar13 = (double)fVar4;
  if (dVar15 <= (double)fVar4) {
    dVar13 = dVar15;
  }
  *param_2 = dVar6;
  param_2[1] = dVar13;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return param_2;
}



// FUNCTION 1469d472c FUN_1469d472c body=2443 status=ok
// SIG undefined FUN_1469d472c(void)

int FUN_1469d472c(longlong param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                 ulonglong param_5,int param_6,longlong param_7,char param_8)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  bool bVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_2d8 [32];
  ulonglong local_2b8;
  undefined8 *local_2b0;
  longlong local_2a8;
  undefined1 local_2a0;
  float *local_298;
  float *local_290;
  undefined8 *local_288;
  longlong *local_280;
  undefined8 *local_278;
  float *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  undefined8 local_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  byte local_214;
  undefined1 local_210;
  undefined1 local_208 [288];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_210 = DAT_14c96b238;
  local_e8 = (undefined1 *)0x0;
  local_e0 = 0x400000000;
  local_d8 = 0;
  local_290 = param_4;
  local_288 = param_2;
  FUN_144911a0c(param_1,param_3);
  fVar27 = fStack_22c;
  fVar4 = fStack_230;
  lVar19 = *(longlong *)(param_1 + 0x220);
  if (lVar19 == 0) {
    if ((0 < *(int *)(param_1 + 0x200)) && (-1 < (longlong)*(int *)(param_1 + 0x250))) {
      lVar12 = (longlong)*(int *)(param_1 + 0x250) * 0x10;
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar12);
      local_280 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + 8 + lVar12);
      goto LAB_1469d47fe;
    }
    lVar19 = 0;
  }
  else {
    local_280 = *(longlong **)(param_1 + 0x228);
LAB_1469d47fe:
    if (local_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_280 + 1) = (int)local_280[1] + 1;
      UNLOCK();
      goto LAB_1469d4839;
    }
  }
  local_280 = (longlong *)0x0;
LAB_1469d4839:
  uVar21 = (ulonglong)(int)local_e0;
  fStack_230 = (float)param_1;
  fVar8 = fStack_230;
  fStack_22c = (float)((ulonglong)param_1 >> 0x20);
  fVar9 = fStack_22c;
  fStack_230 = fVar4;
  fStack_22c = fVar27;
  if ((longlong)uVar21 < 1) {
    local_298 = (float *)0x0;
    pfVar18 = (float *)0x0;
  }
  else {
    local_278 = (undefined8 *)(param_7 + 0x20);
    local_298 = (float *)0x0;
    pfVar17 = (float *)0x0;
    lVar12 = uVar21 * 0x48;
    do {
      lVar15 = lVar12 + -0x48;
      puVar14 = local_e8;
      if (local_e8 == (undefined1 *)0x0) {
        puVar14 = local_208;
      }
      pfVar3 = (float *)(puVar14 + lVar15);
      lVar7 = *(longlong *)(puVar14 + lVar12 + -0x10);
      if (((lVar19 == 0) || (pfVar18 = pfVar3, pfVar10 = local_298, lVar19 != lVar7)) &&
         ((*(longlong *)(param_1 + 0x268) == 0 ||
          (pfVar18 = pfVar17, pfVar10 = pfVar3, *(longlong *)(param_1 + 0x268) != lVar7)))) {
        if (*(longlong *)(param_1 + 0x230) == 0) {
LAB_1469d493a:
          bVar20 = false;
        }
        else {
          bVar20 = false;
          if ((*(char *)(*(longlong *)(param_1 + 0x230) + 0x1c) != '\0') &&
             ((longlong)uVar21 < (longlong)(int)local_e0)) {
            if ((*(char *)(lVar7 + 0x3b) != '\0') ||
               (*(char *)(*(longlong *)(puVar14 + lVar12 + 0x38) + 0x3b) != '\0'))
            goto LAB_1469d493a;
            bVar20 = lVar19 != *(longlong *)(puVar14 + lVar12 + 0x38) || lVar19 == 0;
          }
        }
        fStack_240 = *(float *)(puVar14 + lVar12 + -0x40);
        fStack_234 = *(float *)(puVar14 + lVar12 + -0x44) * fStack_240;
        fVar27 = 0.0;
        fStack_23c = fStack_240 * 0.0;
        fStack_240 = fStack_240 * *(float *)(puVar14 + lVar15);
        local_248 = CONCAT44(*(float *)(puVar14 + lVar12 + -0x38) + fStack_23c,
                             fStack_23c + *(float *)(puVar14 + lVar12 + -0x3c));
        local_270 = pfVar17;
        fStack_238 = fStack_23c;
        FUN_144b01024(&local_248,&local_268);
        fVar4 = local_290[3];
        if (uStack_260._4_4_ <= local_290[3]) {
          fVar4 = uStack_260._4_4_;
        }
        fVar5 = local_290[1];
        if (local_290[1] <= local_268._4_4_) {
          fVar5 = local_268._4_4_;
        }
        if (fVar4 < fVar5) {
          local_254 = 0.0;
          local_250 = 0.0;
          local_24c = 0.0;
        }
        else {
          fVar26 = local_290[2];
          if ((float)uStack_260 <= local_290[2]) {
            fVar26 = (float)uStack_260;
          }
          fVar22 = *local_290;
          if (*local_290 <= (float)local_268) {
            fVar22 = (float)local_268;
          }
          local_254 = 0.0;
          local_250 = 0.0;
          local_24c = 0.0;
          if (fVar22 <= fVar26) {
            local_254 = fVar5;
            local_250 = fVar26;
            local_24c = fVar4;
            fVar27 = fVar22;
          }
        }
        if (param_8 == '\0') {
          local_2a0 = 0;
        }
        else {
          local_2a0 = *(undefined1 *)(param_1 + 0x3a);
        }
        local_248 = *local_288;
        local_228 = *(float *)(local_288 + 4);
        fStack_224 = *(float *)((longlong)local_288 + 0x24);
        fStack_220 = *(float *)(local_288 + 5);
        fStack_21c = *(float *)((longlong)local_288 + 0x2c);
        fStack_238 = SUB164(*(undefined1 (*) [16])(local_288 + 2),0);
        fStack_234 = SUB164(*(undefined1 (*) [16])(local_288 + 2),4);
        fStack_240 = (float)local_288[1];
        fStack_23c = (float)((ulonglong)local_288[1] >> 0x20);
        local_2a8 = param_7;
        local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,param_6);
        local_2b8 = param_5;
        local_258 = fVar27;
        fStack_230 = fVar8;
        fStack_22c = fVar9;
        iVar11 = FUN_14016eaf2(*(undefined8 *)(pfVar3 + 0xe),&local_248,pfVar3,&local_258);
        if (bVar20) {
          fStack_230 = *(float *)(puVar14 + lVar12 + -0x44) * 0.65;
          fVar25 = (*(float *)(puVar14 + lVar12 + -0x44) - fStack_230) * 0.5;
          fStack_240 = *(float *)(puVar14 + lVar12 + -0x40);
          fVar22 = *(float *)(puVar14 + lVar15) + 1.0;
          local_248 = CONCAT44(fVar25 * fStack_240 + *(float *)(puVar14 + lVar12 + -0x38),
                               fVar22 * fStack_240 + *(float *)(puVar14 + lVar12 + -0x3c));
          fVar4 = *(float *)(puVar14 + lVar12 + -0x28);
          fVar27 = *(float *)(puVar14 + lVar12 + -0x20);
          fVar5 = *(float *)(puVar14 + lVar12 + -0x2c);
          fVar26 = *(float *)(puVar14 + lVar12 + -0x24);
          fStack_220 = fVar4 * 0.0 + fVar27;
          fStack_224 = fVar5 * 0.0 + fVar26;
          local_228 = fVar27 * 0.0 + fVar4;
          fStack_22c = fVar26 * 0.0 + fVar5;
          fStack_23c = 0.0;
          fStack_238 = 0.0;
          fStack_234 = 1.0;
          local_214 = local_214 & 0xfc | puVar14[lVar12 + -0x14] * '\x02' & 2U;
          auVar24._0_8_ =
               (double)(fVar22 * fVar4 + fVar25 * fVar27 + *(float *)(puVar14 + lVar12 + -0x18)) +
               0.5;
          auVar24._8_8_ = 0;
          auVar24 = roundpd(auVar24,auVar24,1);
          auVar23._0_8_ =
               (double)(fVar22 * fVar5 + fVar25 * fVar26 + *(float *)(puVar14 + lVar12 + -0x1c)) +
               0.5;
          auVar23._8_8_ = 0;
          auVar23 = roundpd(auVar23,auVar23,1);
          local_218 = (float)auVar24._0_8_;
          fStack_21c = (float)auVar23._0_8_;
          lVar12 = *(longlong *)(param_1 + 0x230);
          cVar6 = *(char *)(lVar12 + 0x18);
          puVar13 = (undefined8 *)(lVar12 + 8);
          if (cVar6 != '\0') {
            if (cVar6 == '\x01') {
              puVar13 = (undefined8 *)FUN_1400c06fe((undefined8 *)(lVar12 + 8));
              lVar12 = *(longlong *)(param_1 + 0x230);
            }
            else {
              puVar13 = local_278;
              if (cVar6 != '\x03') {
                puVar13 = (undefined8 *)(param_7 + 0x10);
              }
            }
          }
          local_268 = *puVar13;
          uStack_260 = puVar13[1];
          local_2b0 = &local_268;
          local_2b8 = local_2b8 & 0xffffffffffffff00;
          FUN_140239bd2(param_5,param_6,&local_248,lVar12);
        }
        pfVar18 = local_270;
        pfVar10 = local_298;
        if (param_6 < iVar11) {
          param_6 = iVar11;
        }
      }
      local_298 = pfVar10;
      bVar20 = 1 < uVar21;
      pfVar17 = pfVar18;
      uVar21 = uVar21 - 1;
      lVar12 = lVar15;
    } while (bVar20);
  }
  plVar16 = local_280;
  pfVar17 = local_298;
  if (lVar19 != 0) {
    fStack_240 = pfVar18[2];
    fStack_234 = pfVar18[1] * fStack_240;
    fVar27 = 0.0;
    fStack_23c = fStack_240 * 0.0;
    fStack_240 = fStack_240 * *pfVar18;
    local_248 = CONCAT44(pfVar18[4] + fStack_23c,fStack_23c + pfVar18[3]);
    fStack_238 = fStack_23c;
    FUN_144b01024(&local_248,&local_268);
    plVar16 = local_280;
    pfVar17 = local_298;
    fVar4 = local_290[3];
    if (uStack_260._4_4_ <= local_290[3]) {
      fVar4 = uStack_260._4_4_;
    }
    fVar5 = local_290[1];
    if (local_290[1] <= local_268._4_4_) {
      fVar5 = local_268._4_4_;
    }
    if (fVar4 < fVar5) {
      local_254 = 0.0;
      local_250 = 0.0;
      local_24c = 0.0;
    }
    else {
      fVar26 = local_290[2];
      if ((float)uStack_260 <= local_290[2]) {
        fVar26 = (float)uStack_260;
      }
      fVar22 = *local_290;
      if (*local_290 <= (float)local_268) {
        fVar22 = (float)local_268;
      }
      local_254 = 0.0;
      local_250 = 0.0;
      local_24c = 0.0;
      if (fVar22 <= fVar26) {
        local_254 = fVar5;
        local_250 = fVar26;
        local_24c = fVar4;
        fVar27 = fVar22;
      }
    }
    if (param_8 == '\0') {
      local_2a0 = 0;
    }
    else {
      local_2a0 = *(undefined1 *)(param_1 + 0x3a);
    }
    local_248 = *local_288;
    local_228 = *(float *)(local_288 + 4);
    fStack_224 = *(float *)((longlong)local_288 + 0x24);
    fStack_220 = *(float *)(local_288 + 5);
    fStack_21c = *(float *)((longlong)local_288 + 0x2c);
    fStack_238 = (float)local_288[2];
    fStack_234 = (float)((ulonglong)local_288[2] >> 0x20);
    fStack_240 = (float)local_288[1];
    fStack_23c = (float)((ulonglong)local_288[1] >> 0x20);
    local_2a8 = param_7;
    local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,param_6);
    local_2b8 = param_5;
    local_258 = fVar27;
    fStack_230 = fVar8;
    fStack_22c = fVar9;
    iVar11 = FUN_14016eaf2(*(undefined8 *)(pfVar18 + 0xe),&local_248,pfVar18,&local_258);
    if (param_6 < iVar11) {
      param_6 = iVar11;
    }
  }
  if (*(char *)(param_1 + 0x278) == '\x01') {
    fStack_240 = pfVar17[2];
    fStack_234 = pfVar17[1] * fStack_240;
    fVar27 = 0.0;
    fStack_23c = fStack_240 * 0.0;
    fStack_240 = fStack_240 * *pfVar17;
    local_248 = CONCAT44(pfVar17[4] + fStack_23c,fStack_23c + pfVar17[3]);
    fStack_238 = fStack_23c;
    FUN_144b01024(&local_248,&local_268);
    fVar4 = local_290[3];
    if (uStack_260._4_4_ <= local_290[3]) {
      fVar4 = uStack_260._4_4_;
    }
    fVar5 = local_290[1];
    if (local_290[1] <= local_268._4_4_) {
      fVar5 = local_268._4_4_;
    }
    if (fVar4 < fVar5) {
      local_254 = 0.0;
      local_250 = 0.0;
      local_24c = 0.0;
    }
    else {
      fVar26 = local_290[2];
      if ((float)uStack_260 <= local_290[2]) {
        fVar26 = (float)uStack_260;
      }
      fVar22 = *local_290;
      if (*local_290 <= (float)local_268) {
        fVar22 = (float)local_268;
      }
      local_254 = 0.0;
      local_250 = 0.0;
      local_24c = 0.0;
      if (fVar22 <= fVar26) {
        local_254 = fVar5;
        local_250 = fVar26;
        local_24c = fVar4;
        fVar27 = fVar22;
      }
    }
    if (param_8 == '\0') {
      local_2a0 = 0;
    }
    else {
      local_2a0 = *(undefined1 *)(param_1 + 0x3a);
    }
    local_248 = *local_288;
    local_228 = *(float *)(local_288 + 4);
    fStack_224 = *(float *)((longlong)local_288 + 0x24);
    fStack_220 = *(float *)(local_288 + 5);
    fStack_21c = *(float *)((longlong)local_288 + 0x2c);
    fStack_238 = (float)local_288[2];
    fStack_234 = (float)((ulonglong)local_288[2] >> 0x20);
    fStack_240 = (float)local_288[1];
    fStack_23c = (float)((ulonglong)local_288[1] >> 0x20);
    local_2a8 = param_7;
    local_2b0 = (undefined8 *)CONCAT44(local_2b0._4_4_,param_6);
    local_2b8 = param_5;
    local_258 = fVar27;
    fStack_230 = fVar8;
    fStack_22c = fVar9;
    iVar11 = FUN_14016eaf2(*(undefined8 *)(pfVar17 + 0xe),&local_248,pfVar17,&local_258);
    if (param_6 < iVar11) {
      param_6 = iVar11;
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  FUN_144715780(local_208);
  if ((local_d0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 1469d50b8 FUN_1469d50b8 body=339 status=ok
// SIG undefined FUN_1469d50b8(void)

double * FUN_1469d50b8(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  *param_2 = 0.0;
  param_2[1] = 0.0;
  lVar4 = *(longlong *)(param_1 + 0x220);
  plVar5 = *(longlong **)(param_1 + 0x228);
  if (plVar5 == (longlong *)0x0) {
    dVar10 = 0.0;
    dVar11 = 0.0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    dVar11 = *param_2;
    dVar10 = param_2[1];
  }
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    lVar8 = 0;
    dVar9 = dVar10;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar8);
      dVar10 = dVar9;
      if (lVar4 != lVar6 || lVar4 == 0) {
        pfVar7 = (float *)&DAT_14c84635c;
        if ((*(byte *)(lVar6 + 0x31) & 0x20) != 0) {
          pfVar7 = (float *)(lVar6 + 0x168);
        }
        dVar11 = dVar11 + (double)*pfVar7;
        dVar10 = (double)pfVar7[1];
        if ((double)pfVar7[1] <= dVar9) {
          dVar10 = dVar9;
        }
      }
      lVar8 = lVar8 + 0x10;
      dVar9 = dVar10;
    } while ((longlong)*(int *)(param_1 + 0x200) * 0x10 != lVar8);
  }
  *param_2 = dVar11;
  param_2[1] = dVar10;
  if (lVar4 != 0) {
    pfVar7 = (float *)&DAT_14c84635c;
    if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
      pfVar7 = (float *)(lVar4 + 0x168);
    }
    fVar3 = pfVar7[1];
    dVar11 = dVar11 + (double)*pfVar7;
    *param_2 = dVar11;
    dVar9 = (double)fVar3;
    if ((double)fVar3 <= dVar10) {
      dVar9 = dVar10;
    }
    dVar10 = dVar9;
    param_2[1] = dVar10;
  }
  if (*(char *)(param_1 + 0x278) == '\x01') {
    *param_2 = dVar11 + *(double *)(param_1 + 600);
    dVar11 = *(double *)(param_1 + 0x260);
    if (*(double *)(param_1 + 0x260) <= dVar10) {
      dVar11 = dVar10;
    }
    param_2[1] = dVar11;
  }
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
  return param_2;
}



// FUNCTION 1469d5214 FUN_1469d5214 body=215 status=ok
// SIG undefined FUN_1469d5214(void)

void FUN_1469d5214(undefined8 param_1,longlong param_2,longlong param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  double local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1469d45ce(param_1,local_38,param_2);
  fVar2 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x24));
  fVar1 = -*(float *)(param_2 + 0x24) * fVar2;
  fVar2 = fVar2 * *(float *)(param_2 + 0x28);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)((double)(fVar2 * *(float *)(param_3 + 0x20) +
                                 fVar1 * *(float *)(param_3 + 0x24) +
                                (-*(float *)(param_2 + 0x2c) * fVar2 -
                                *(float *)(param_2 + 0x30) * fVar1)) - *param_4 * local_38[0]));
}



// FUNCTION 1469d52ec FUN_1469d52ec body=1790 status=ok
// SIG undefined FUN_1469d52ec(void)

undefined1 *
FUN_1469d52ec(longlong param_1,undefined1 *param_2,double *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined1 auStack_1a8 [32];
  double *local_188;
  char local_17d;
  undefined4 local_17c;
  undefined8 local_178;
  longlong *plStack_170;
  undefined8 local_168;
  longlong *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  double local_118;
  longlong *local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined1 local_f0 [136];
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar4 = *param_3;
  plVar13 = *(longlong **)((longlong)dVar4 + 0x2c8);
  if (plVar13 == (longlong *)0x0) {
LAB_1469d5490:
    plVar13 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    do {
      if (iVar8 == 0) goto LAB_1469d5490;
      LOCK();
      iVar7 = (int)plVar13[1];
      bVar16 = iVar8 == iVar7;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar16);
    lVar12 = *(longlong *)((longlong)dVar4 + 0x2c0);
    if (lVar12 != 0) {
      uVar11 = *(undefined8 *)(lVar12 + 0xe8);
      local_118 = *param_3;
      plVar15 = (longlong *)param_3[1];
      local_110 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        uVar10 = FUN_1469d59ec(uVar11,&local_118);
        local_17d = (char)uVar10;
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        uVar10 = FUN_1469d59ec(uVar11);
        local_17d = (char)uVar10;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            uVar10 = (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              uVar10 = (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      plVar15 = *(longlong **)(param_1 + 0x10);
      if (plVar15 == (longlong *)0x0) {
LAB_1469d53aa:
        local_128 = 0;
        plStack_120 = (longlong *)0x0;
        local_17c = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
      }
      else {
        uVar10 = (ulonglong)*(uint *)(plVar15 + 1);
        do {
          uVar9 = (uint)uVar10;
          if (uVar9 == 0) goto LAB_1469d53aa;
          LOCK();
          uVar3 = *(uint *)(plVar15 + 1);
          if (uVar9 == uVar3) {
            *(uint *)(plVar15 + 1) = uVar9 + 1;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        } while (uVar9 != uVar3);
        uVar11 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        LOCK();
        plVar14 = plVar15 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        local_17c = 0;
        local_128 = uVar11;
        plStack_120 = plVar15;
      }
      plVar15 = plStack_120;
      FUN_146947736(param_5,&local_118,&local_128);
      uVar18 = FUN_1469d5214(param_1,&local_118,param_5,param_4);
      plVar14 = plStack_120;
      *(undefined4 *)(param_1 + 0x238) = uVar18;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_120 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if ((char)local_17c == '\0') {
        LOCK();
        plVar14 = plVar15 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      dVar4 = *param_3;
      plVar15 = (longlong *)param_3[1];
      if (plVar15 == (longlong *)0x0) {
        *(double *)(param_1 + 0x220) = dVar4;
        plVar14 = *(longlong **)(param_1 + 0x228);
        if (plVar14 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x228) = 0;
LAB_1469d561e:
          LOCK();
          plVar15 = plVar14 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar8 = *piVar2;
            UNLOCK();
joined_r0x0001469d5651:
            if (iVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        *(double *)(param_1 + 0x220) = dVar4;
        plVar14 = *(longlong **)(param_1 + 0x228);
        if (plVar15 == plVar14) {
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar8 = *piVar2;
            UNLOCK();
            plVar14 = plVar15;
            goto joined_r0x0001469d5651;
          }
        }
        else {
          *(longlong **)(param_1 + 0x228) = plVar15;
          if (plVar14 != (longlong *)0x0) goto LAB_1469d561e;
        }
      }
      uVar18 = param_4[1];
      uVar5 = param_4[2];
      uVar6 = param_4[3];
      *(undefined4 *)(param_1 + 0x240) = *param_4;
      *(undefined4 *)(param_1 + 0x244) = uVar18;
      *(undefined4 *)(param_1 + 0x248) = uVar5;
      *(undefined4 *)(param_1 + 0x24c) = uVar6;
      FUN_1428f914c(param_1 + 0x1e0);
      if (local_17d == '\0') {
        local_118 = (double)CONCAT71(local_118._1_7_,1);
        local_f8 = 0;
        local_110 = (longlong *)0x0;
        uStack_108 = 0;
        memset(local_f0,0,0x88);
        local_68 = 0x20702;
        local_64 = 0;
        plVar15 = *(longlong **)(param_1 + 0x10);
        if (plVar15 == (longlong *)0x0) {
LAB_1469d5717:
          local_178 = 0;
          plStack_170 = (longlong *)0x0;
          bVar16 = true;
        }
        else {
          iVar8 = (int)plVar15[1];
          do {
            if (iVar8 == 0) goto LAB_1469d5717;
            LOCK();
            iVar7 = (int)plVar15[1];
            bVar16 = iVar8 == iVar7;
            if (bVar16) {
              *(int *)(plVar15 + 1) = iVar8 + 1;
              iVar7 = iVar8;
            }
            iVar8 = iVar7;
            UNLOCK();
          } while (!bVar16);
          uVar11 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          bVar16 = false;
          local_178 = uVar11;
          plStack_170 = plVar15;
        }
        plVar15 = plStack_170;
        uVar11 = FUN_140592a6e(&local_118,&local_178);
        FUN_1403d4c6e(param_2,uVar11);
        if (!bVar16) {
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        FUN_14493db24(&local_118);
      }
      else {
        *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
        plVar15 = *(longlong **)(param_1 + 0x218);
        if (plVar15 == (longlong *)0x0) {
LAB_1469d5790:
          FUN_146a584e0(*param_3,&local_118);
          FUN_1469ccf60(0,&local_118);
        }
        else {
          iVar8 = (int)plVar15[1];
          do {
            if (iVar8 == 0) goto LAB_1469d5790;
            LOCK();
            iVar7 = (int)plVar15[1];
            bVar16 = iVar8 == iVar7;
            if (bVar16) {
              *(int *)(plVar15 + 1) = iVar8 + 1;
              iVar7 = iVar8;
            }
            iVar8 = iVar7;
            UNLOCK();
          } while (!bVar16);
          uVar11 = *(undefined8 *)(param_1 + 0x210);
          FUN_146a584e0(*param_3,&local_118);
          FUN_1469ccf60(uVar11,&local_118);
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar15)();
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))();
            }
          }
        }
        plVar15 = *(longlong **)(param_1 + 0x218);
        bVar16 = true;
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
          lVar12 = 0;
        }
        else {
          iVar8 = (int)plVar15[1];
          lVar12 = 0;
          do {
            if (iVar8 == 0) {
              plVar15 = (longlong *)0x0;
              goto LAB_1469d57c5;
            }
            LOCK();
            iVar7 = (int)plVar15[1];
            bVar17 = iVar8 == iVar7;
            if (bVar17) {
              *(int *)(plVar15 + 1) = iVar8 + 1;
              iVar7 = iVar8;
            }
            iVar8 = iVar7;
            UNLOCK();
          } while (!bVar17);
          lVar12 = *(longlong *)(param_1 + 0x210);
          bVar16 = false;
        }
LAB_1469d57c5:
        local_110 = (longlong *)(double)*(float *)(lVar12 + 0xd4);
        local_118 = (double)*(float *)(lVar12 + 0xd0);
        FUN_1469bd33a(param_1,&local_148);
        local_138 = local_148;
        plStack_130 = plStack_140;
        local_148 = 0;
        plStack_140 = (longlong *)0x0;
        local_158 = *param_4;
        uStack_154 = param_4[1];
        uStack_150 = param_4[2];
        uStack_14c = param_4[3];
        local_188 = &local_118;
        FUN_1469bddb6(&local_128);
        plVar14 = plStack_140;
        if (plStack_140 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_140 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_140)(plStack_140);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        if (!bVar16) {
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        local_118 = (double)CONCAT71(local_118._1_7_,1);
        local_f8 = 0;
        local_110 = (longlong *)0x0;
        uStack_108 = 0;
        memset(local_f0,0,0x88);
        local_68 = 0x20702;
        local_64 = 0;
        local_168 = local_128;
        local_160 = plStack_120;
        plVar15 = (longlong *)0x0;
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
          UNLOCK();
          plVar15 = plStack_120;
        }
        uVar11 = FUN_1469af032(&local_118,&local_168);
        FUN_1403d4c6e(param_2,uVar11);
        FUN_14493db24(&local_118);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
      goto LAB_1469d54c4;
    }
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1469d54c4:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar13 = (longlong *)param_3[1];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d59ec FUN_1469d59ec body=130 status=ok
// SIG undefined FUN_1469d59ec(void)

bool FUN_1469d59ec(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(*param_1 + 0x150) == '\x01') {
    FUN_146a584e0(*param_2,&local_28);
    bVar2 = true;
    if (local_28 != *(longlong *)(*param_1 + 0x114)) goto LAB_1469d5a51;
    if (local_20 != -1) {
      iVar1 = *(int *)(*param_1 + 0x11c);
      bVar2 = local_20 != iVar1 && iVar1 != -1;
      goto LAB_1469d5a51;
    }
  }
  bVar2 = false;
LAB_1469d5a51:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d5a70 FUN_1469d5a70 body=1227 status=ok
// SIG undefined FUN_1469d5a70(void)

void FUN_1469d5a70(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_3 + 0x78);
  if (plVar3 == (longlong *)0x0) goto LAB_1469d5a96;
  FUN_1469ee30c();
  cVar10 = (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_14c98e9e8);
  if (cVar10 == '\0') goto LAB_1469d5a96;
  lVar4 = *(longlong *)(param_3 + 0x78);
  plVar3 = *(longlong **)(param_3 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar4 != 0) {
    plStack_70 = *(longlong **)(param_1 + 0x218);
    if (plStack_70 == (longlong *)0x0) {
LAB_1469d5b2b:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar15 = true;
    }
    else {
      iVar11 = (int)plStack_70[1];
      do {
        if (iVar11 == 0) goto LAB_1469d5b2b;
        LOCK();
        iVar9 = (int)plStack_70[1];
        bVar15 = iVar11 == iVar9;
        if (bVar15) {
          *(int *)(plStack_70 + 1) = iVar11 + 1;
          iVar9 = iVar11;
        }
        iVar11 = iVar9;
        UNLOCK();
      } while (!bVar15);
      local_78 = *(undefined8 *)(param_1 + 0x210);
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      bVar15 = false;
    }
    plVar12 = plStack_70;
    cVar10 = FUN_1469be7b6(lVar4,&local_78,0);
    plVar13 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if (!bVar15) {
      LOCK();
      plVar13 = plVar12 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    if (cVar10 != '\0') {
      plVar12 = *(longlong **)(param_1 + 0x10);
      if (plVar12 == (longlong *)0x0) {
LAB_1469d5bb0:
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
      }
      else {
        iVar11 = (int)plVar12[1];
        do {
          if (iVar11 == 0) goto LAB_1469d5bb0;
          LOCK();
          iVar9 = (int)plVar12[1];
          bVar15 = iVar11 == iVar9;
          if (bVar15) {
            *(int *)(plVar12 + 1) = iVar11 + 1;
            iVar9 = iVar11;
          }
          iVar11 = iVar9;
          UNLOCK();
        } while (!bVar15);
        local_78 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        plStack_70 = plVar12;
        if ((int)*plVar13 == 0) {
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
      FUN_1469bd166(lVar4,&local_78);
      plVar12 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar13 = plStack_70 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      uVar14 = *(undefined8 *)(lVar4 + 0x40);
      plVar12 = *(longlong **)(lVar4 + 0x48);
      if (plVar12 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x220) = uVar14;
        plVar13 = *(longlong **)(param_1 + 0x228);
        if (plVar13 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x228) = 0;
LAB_1469d5efe:
          LOCK();
          plVar12 = plVar13 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar11 = *piVar1;
            UNLOCK();
joined_r0x0001469d5e22:
            if (iVar11 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        *(undefined8 *)(param_1 + 0x220) = uVar14;
        plVar13 = *(longlong **)(param_1 + 0x228);
        if (plVar12 == plVar13) {
          LOCK();
          plVar13 = plVar12 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar11 = *piVar1;
            UNLOCK();
            plVar13 = plVar12;
            goto joined_r0x0001469d5e22;
          }
        }
        else {
          *(longlong **)(param_1 + 0x228) = plVar12;
          if (plVar13 != (longlong *)0x0) goto LAB_1469d5efe;
        }
      }
      local_78 = *(undefined8 *)(param_1 + 0x220);
      plVar12 = *(longlong **)(param_1 + 0x228);
      plStack_70 = plVar12;
      if (plVar12 == (longlong *)0x0) {
        FUN_1428f8f3e(param_1 + 0x1e0,&local_78);
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        FUN_1428f8f3e(param_1 + 0x1e0);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar12 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
      }
      uVar6 = *(undefined4 *)(lVar4 + 0x54);
      uVar7 = *(undefined4 *)(lVar4 + 0x58);
      uVar8 = *(undefined4 *)(lVar4 + 0x5c);
      *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(lVar4 + 0x50);
      *(undefined4 *)(param_1 + 0x244) = uVar6;
      *(undefined4 *)(param_1 + 0x248) = uVar7;
      *(undefined4 *)(param_1 + 0x24c) = uVar8;
      plVar12 = *(longlong **)(param_1 + 0x218);
      bVar15 = true;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
        uVar14 = 0;
      }
      else {
        iVar11 = (int)plVar12[1];
        uVar14 = 0;
        do {
          if (iVar11 == 0) {
            plVar12 = (longlong *)0x0;
            goto LAB_1469d5c6e;
          }
          LOCK();
          iVar9 = (int)plVar12[1];
          bVar16 = iVar11 == iVar9;
          if (bVar16) {
            *(int *)(plVar12 + 1) = iVar11 + 1;
            iVar9 = iVar11;
          }
          iVar11 = iVar9;
          UNLOCK();
        } while (!bVar16);
        uVar14 = *(undefined8 *)(param_1 + 0x210);
        bVar15 = false;
      }
LAB_1469d5c6e:
      local_78 = DAT_14c98dec8;
      plStack_70 = DAT_14c98ded0;
      if (DAT_14c98ded0 == (longlong *)0x0) {
        local_60 = (longlong *)0x0;
LAB_1469d5c9d:
        local_58 = DAT_14c98dec8;
        local_50 = (longlong *)0x0;
        local_68 = DAT_14c98dec8;
      }
      else {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
        local_60 = DAT_14c98ded0;
        local_68 = DAT_14c98dec8;
        if (DAT_14c98ded0 == (longlong *)0x0) goto LAB_1469d5c9d;
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
        local_58 = DAT_14c98dec8;
        local_50 = DAT_14c98ded0;
        if (DAT_14c98ded0 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
          UNLOCK();
        }
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x40);
      plVar13 = *(longlong **)(lVar4 + 0x48);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      FUN_146a58434(uVar5,local_88);
      FUN_1469cc6ba(uVar14,local_88,&local_78);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      FUN_1469ccc24(&local_78);
      if (!bVar15) {
        LOCK();
        plVar13 = plVar12 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
LAB_1469d5a96:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d5f3c FUN_1469d5f3c body=502 status=ok
// SIG undefined FUN_1469d5f3c(void)

undefined1 * FUN_1469d5f3c(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 auStack_88 [47];
  char local_59;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar10 = *(longlong **)(param_4 + 0x78);
  if (plVar10 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar8 = (**(code **)(*plVar10 + 0x50))(plVar10);
    if (cVar8 != '\0') {
      lVar5 = *(longlong *)(param_4 + 0x78);
      plVar10 = *(longlong **)(param_4 + 0x80);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        plStack_50 = *(longlong **)(param_1 + 0x218);
        if (plStack_50 == (longlong *)0x0) {
LAB_1469d6050:
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
          bVar11 = true;
        }
        else {
          iVar9 = (int)plStack_50[1];
          do {
            if (iVar9 == 0) goto LAB_1469d6050;
            LOCK();
            iVar6 = (int)plStack_50[1];
            bVar11 = iVar9 == iVar6;
            if (bVar11) {
              *(int *)(plStack_50 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar11);
          local_58 = *(undefined8 *)(param_1 + 0x210);
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
          bVar11 = false;
        }
        plVar1 = plStack_50;
        cVar8 = FUN_1469be7b6(lVar5,&local_58,0);
        plVar4 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            local_59 = cVar8;
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            cVar8 = local_59;
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              cVar8 = local_59;
            }
          }
        }
        if (!bVar11) {
          LOCK();
          plVar4 = plVar1 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (cVar8 != '\0') {
          uVar12 = FUN_1469d5214(param_1,param_3,param_4,param_1 + 0x240);
          *(undefined4 *)(param_1 + 0x238) = uVar12;
          uVar7 = 1;
          goto LAB_1469d5f6f;
        }
      }
      uVar7 = 0;
      goto LAB_1469d5f6f;
    }
  }
  uVar7 = 0;
  plVar10 = (longlong *)0x0;
LAB_1469d5f6f:
  *param_2 = uVar7;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469d613c FUN_1469d613c body=127 status=ok
// SIG undefined FUN_1469d613c(void)

longlong FUN_1469d613c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_140591fd6();
  if (cVar1 != '\0') {
    uVar2 = FUN_1469d5214(param_1,param_3,param_4,param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x238) = uVar2;
  }
  *(bool *)param_2 = cVar1 != '\0';
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset((void *)(param_2 + 0x28),0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  *(undefined1 *)(param_2 + 0xb4) = 0;
  return param_2;
}



// FUNCTION 1469d61bc FUN_1469d61bc body=794 status=ok
// SIG undefined FUN_1469d61bc(void)

void FUN_1469d61bc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*param_2 == 0) ||
     ((cVar5 = FUN_146a580ce(), cVar5 != '\0' && (cVar5 = FUN_146a580d6(*param_2), cVar5 != '\0'))))
  {
    plVar8 = *(longlong **)(param_1 + 0xc0);
    bVar3 = true;
    if (plVar8 == (longlong *)0x0) {
LAB_1469d645f:
      plVar8 = (longlong *)0x0;
LAB_1469d6462:
      FUN_1469ddfd6(param_1,&local_50,param_1 + 0x114);
      if (local_50 == 0) {
        lVar7 = 0;
        plVar9 = (longlong *)0x0;
      }
      else {
        FUN_146a58938(local_50,&local_60);
        plVar9 = local_58;
        lVar7 = local_60;
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      if (bVar3) goto LAB_1469d6282;
    }
    else {
      iVar6 = (int)plVar8[1];
      do {
        if (iVar6 == 0) goto LAB_1469d645f;
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        bVar3 = false;
        goto LAB_1469d6462;
      }
      FUN_146a58938(*(longlong *)(param_1 + 0xb8),&local_50);
      plVar9 = local_48;
      lVar7 = local_50;
    }
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
  }
  else {
    FUN_146a58938(*param_2,&local_50);
    plVar9 = local_48;
    lVar7 = local_50;
  }
LAB_1469d6282:
  if (*(char *)(param_1 + 0x152) == '\x01') {
    if (lVar7 == 0) goto LAB_1469d63f1;
    plVar2 = *(longlong **)(lVar7 + 0x630);
    plVar8 = *(longlong **)(lVar7 + 0x638);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_70 = *(undefined8 *)(param_1 + 0xd8);
    local_68 = *(longlong *)(param_1 + 0xe0);
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 8))(plVar2,&local_70);
    if (plVar8 == (longlong *)0x0) goto LAB_1469d63f1;
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1469d63f1;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1469d63f1;
    lVar7 = *plVar8;
  }
  else {
    *(undefined8 *)(param_1 + 200) = 0;
    plVar8 = *(longlong **)(param_1 + 0xd0);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
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
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    plVar8 = *(longlong **)(param_1 + 0xe0);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
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
    }
    if (lVar7 == 0) goto LAB_1469d63f1;
    plVar2 = *(longlong **)(lVar7 + 0x630);
    plVar8 = *(longlong **)(lVar7 + 0x638);
    if (plVar8 == (longlong *)0x0) {
      local_88 = 0;
      uStack_80 = 0;
      (**(code **)(*plVar2 + 8))();
      goto LAB_1469d63f1;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_88 = 0;
    uStack_80 = 0;
    (**(code **)(*plVar2 + 8))();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1469d63f1;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1469d63f1;
    lVar7 = *plVar8;
  }
  (**(code **)(lVar7 + 0x10))(plVar8);
LAB_1469d63f1:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d64d8 FUN_1469d64d8 body=219 status=ok
// SIG undefined FUN_1469d64d8(void)

void FUN_1469d64d8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)*param_2;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  local_48 = (undefined4)param_2[1];
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140008f88(param_1 + 0x308,&local_50);
  *(undefined1 *)(param_1 + 0x318) = local_40;
  FUN_144a450dc(param_1 + 800,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  plVar1 = *(longlong **)(param_1 + 0x510);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)FUN_1447a1f4a(param_2);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    (**(code **)(*plVar1 + 0xd8))(plVar1,puVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d65b4 FUN_1469d65b4 body=1663 status=ok
// SIG undefined FUN_1469d65b4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1469d65b4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined1 auStack_708 [32];
  undefined1 *local_6e8;
  longlong local_6d8;
  undefined1 local_6c9;
  undefined1 *local_6c8;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined8 local_6b0;
  longlong *local_6a8;
  undefined8 local_6a0;
  undefined1 local_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  uint local_668;
  undefined1 local_664;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined1 local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_618 [10];
  undefined8 local_5c8 [71];
  undefined1 local_390 [424];
  undefined8 local_1e8;
  longlong *local_1e0;
  int local_1d8;
  int local_1d4;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_158 [96];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined1 local_bc;
  undefined1 local_b8 [88];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_708;
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x1a8);
  plVar4 = *(longlong **)(param_2 + 0x1b0);
  plVar7 = *(longlong **)(param_1 + 0x2b8);
  if (plVar7 != plVar4) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x2b8);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x2b8) = plVar4;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = DAT_14c96b350;
  }
  local_6d8 = param_2;
  switch(uVar3) {
  case 0:
    FUN_1446ddc76(local_618 + 9,"Docking.Cross.DockLeft",1);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,local_618[9],0,0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar5;
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    pcVar8 = "Docking.Cross.DockLeft_Hovered";
    puVar9 = local_618 + 8;
    break;
  case 1:
    FUN_1446ddc76(local_618 + 7,"Docking.Cross.DockTop",1);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,local_618[7],0,0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar5;
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    pcVar8 = "Docking.Cross.DockTop_Hovered";
    puVar9 = local_618 + 6;
    break;
  case 2:
    FUN_1446ddc76(local_618 + 5,"Docking.Cross.DockRight",1);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,local_618[5],0,0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar5;
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    pcVar8 = "Docking.Cross.DockRight_Hovered";
    puVar9 = local_618 + 4;
    break;
  case 3:
    FUN_1446ddc76(local_618 + 3,"Docking.Cross.DockBottom",1);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,local_618[3],0,0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar5;
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    pcVar8 = "Docking.Cross.DockBottom_Hovered";
    puVar9 = local_618 + 2;
    break;
  default:
    FUN_1446ddc76(local_618 + 1,"Docking.Cross.DockCenter",1);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,local_618[1],0,0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar5;
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    pcVar8 = "Docking.Cross.DockCenter_Hovered";
    puVar9 = local_618;
  }
  FUN_1446ddc76(puVar9,pcVar8,1);
  uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,*puVar9,0,0);
  *(undefined8 *)(param_1 + 0x2a8) = uVar5;
  FUN_140a562d0(local_390);
  plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_650,"Docking.Cross.Tint",1);
  local_6e8 = (undefined1 *)0x0;
  puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x38))(plVar4,local_650,0,&DAT_14c75ed64);
  local_648 = *puVar6;
  uStack_644 = puVar6[1];
  uStack_640 = puVar6[2];
  uStack_63c = puVar6[3];
  local_638 = 1;
  local_630 = 0;
  uStack_628 = 0;
  local_e8 = 1;
  local_f8 = local_648;
  uStack_f4 = uStack_644;
  uStack_f0 = uStack_640;
  uStack_ec = uStack_63c;
  FUN_144a450dc(local_e0,&local_630);
  FUN_1449db362(&local_630);
  plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_680,"Docking.Cross.Tint",1);
  local_6e8 = (undefined1 *)0x0;
  puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x38))(plVar4,local_680,0,&DAT_14c75ed64);
  local_678 = *puVar6;
  uStack_674 = puVar6[1];
  uStack_670 = puVar6[2];
  uStack_66c = puVar6[3];
  local_668 = local_668 & 0xffffff00;
  local_664 = 1;
  local_660 = 0;
  uStack_658 = 0;
  local_c0 = local_668;
  local_bc = 1;
  local_d0 = local_678;
  uStack_cc = uStack_674;
  uStack_c8 = uStack_670;
  uStack_c4 = uStack_66c;
  FUN_144a450dc(local_b8,&local_660);
  FUN_1449db362(&local_660);
  uVar3 = *(undefined4 *)(local_6d8 + 0x1b8);
  plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = DAT_14c96b350;
  }
  switch(uVar3) {
  case 0:
    pcVar8 = "Docking.Cross.BorderLeft";
    break;
  case 1:
    pcVar8 = "Docking.Cross.BorderTop";
    break;
  case 2:
    pcVar8 = "Docking.Cross.BorderRight";
    break;
  case 3:
    pcVar8 = "Docking.Cross.BorderBottom";
    break;
  default:
    pcVar8 = "Docking.Cross.BorderCenter";
  }
  FUN_1446ddc76(local_5c8,pcVar8,1);
  local_6a0 = (**(code **)(*plVar4 + 0x50))(plVar4,local_5c8[0],0,0);
  local_698 = 1;
  local_690 = 0;
  uStack_688 = 0;
  local_160 = 1;
  local_168 = local_6a0;
  FUN_144a450dc(local_158,&local_690);
  FUN_1449db362(&local_690);
  local_1d8 = (uint)(*(int *)(param_1 + 0x2c0) == 4) * 2;
  local_1d4 = local_1d8;
  FUN_140a53334(local_5c8);
  local_6c8 = &LAB_1469d6ce8;
  local_6c0 = 0;
  FUN_1469d6c34(local_5c8,param_1);
  local_6e8 = &local_6c9;
  FUN_140a554b8(&local_6c8,"SImage",".\\Runtime/Slate/Private/Framework/Docking/SDockingTarget.cpp",
                0x46);
  FUN_140a52c70(&local_6c8,&local_6b0,local_5c8);
  plVar7 = local_1e0;
  plVar4 = local_6a8;
  if (local_6a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6a8 + 1) = (int)local_6a8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_6a8 + 1) = (int)local_6a8[1] + 1;
    UNLOCK();
  }
  local_1e8 = local_6b0;
  local_1e0 = local_6a8;
  if (plVar7 != (longlong *)0x0) {
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
  FUN_140a5a2ee(param_1,local_390);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (local_6a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_6a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_6a8)(local_6a8);
      LOCK();
      piVar1 = (int *)((longlong)local_6a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6a8 + 0x10))(local_6a8);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_6bc,local_6c0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_140a55a86(local_5c8);
  FUN_140a59028(local_390);
  if ((local_60 ^ (ulonglong)auStack_708) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d6c34 FUN_1469d6c34 body=178 status=ok
// SIG undefined FUN_1469d6c34(void)

longlong FUN_1469d6c34(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_1469f405a(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d6cf8 FUN_1469d6cf8 body=516 status=ok
// SIG undefined FUN_1469d6cf8(void)

void FUN_1469d6cf8(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = *(longlong **)(param_3 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_14c98e9e8);
    if (cVar6 != '\0') {
      lVar4 = *(longlong *)(param_3 + 0x78);
      plVar3 = *(longlong **)(param_3 + 0x80);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        *(undefined1 *)(param_1 + 0x2c4) = 1;
        plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = DAT_14c96b350;
        }
        FUN_1446f470e(&local_80,L"Docking.Cross.HoveredTint",1);
        local_a8 = 0;
        puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x38))(plVar8,local_80,0,&DAT_14c75ed64);
        local_78 = *puVar9;
        uStack_74 = puVar9[1];
        uStack_70 = puVar9[2];
        uStack_6c = puVar9[3];
        local_68 = 1;
        local_60 = 0;
        uStack_58 = 0;
        FUN_140a5c650(param_1 + 0x240,param_1,&local_78);
        FUN_1449db362(&local_60);
        local_88 = *(undefined4 *)(param_1 + 0x2c0);
        plStack_90 = *(longlong **)(param_1 + 0x2b8);
        if (plStack_90 == (longlong *)0x0) {
LAB_1469d6e62:
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          bVar10 = true;
        }
        else {
          iVar7 = (int)plStack_90[1];
          do {
            if (iVar7 == 0) goto LAB_1469d6e62;
            LOCK();
            iVar5 = (int)plStack_90[1];
            bVar10 = iVar7 == iVar5;
            if (bVar10) {
              *(int *)(plStack_90 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar10);
          local_98 = *(undefined8 *)(param_1 + 0x2b0);
          LOCK();
          *(int *)((longlong)plStack_90 + 0xc) = *(int *)((longlong)plStack_90 + 0xc) + 1;
          UNLOCK();
          bVar10 = false;
        }
        plVar8 = plStack_90;
        FUN_1469bd910(lVar4,&local_98,param_3);
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plStack_90 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_90 + 0x10))();
          }
        }
        if (!bVar10) {
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
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d6efe FUN_1469d6efe body=370 status=ok
// SIG undefined FUN_1469d6efe(void)

void FUN_1469d6efe(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)(param_2 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,&DAT_14c98e9e8);
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(param_2 + 0x78);
      plVar2 = *(longlong **)(param_2 + 0x80);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        *(undefined1 *)(param_1 + 0x2c4) = 0;
        plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = DAT_14c96b350;
        }
        FUN_1446f470e(&local_80,L"Docking.Cross.Tint",1);
        local_a8 = 0;
        puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x38))(plVar5,local_80,0,&DAT_14c75ed64);
        local_78 = *puVar6;
        uStack_74 = puVar6[1];
        uStack_70 = puVar6[2];
        uStack_6c = puVar6[3];
        local_68 = 1;
        local_60 = 0;
        uStack_58 = 0;
        FUN_140a5c650(param_1 + 0x240,param_1,&local_78);
        FUN_1449db362(&local_60);
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        FUN_1469bd910(lVar3,&local_98,param_2);
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar2 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d7072 FUN_1469d7072 body=318 status=ok
// SIG undefined FUN_1469d7072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1469d7072(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_4 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469ee30c();
    cVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if (cVar6 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar3 = *(longlong **)(param_4 + 0x80);
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
      if (lVar4 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x2b8);
        if (plVar3 != (longlong *)0x0) {
          iVar7 = (int)plVar3[1];
          while (iVar7 != 0) {
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar8 = iVar7 == iVar5;
            if (bVar8) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
            if (bVar8) {
              (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x270))
                        (*(longlong **)(param_1 + 0x2b0),param_2,*(undefined4 *)(param_1 + 0x2c0),
                         param_4);
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 != 0) {
                return param_2;
              }
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 != 0) {
                return param_2;
              }
              (**(code **)(*plVar3 + 0x10))(plVar3);
              return param_2;
            }
          }
        }
        (**(code **)(_DAT_00000000 + 0x270))(0,param_2,*(undefined4 *)(param_1 + 0x2c0),param_4);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1469d71b0 FUN_1469d71b0 body=249 status=ok
// SIG undefined FUN_1469d71b0(void)

void FUN_1469d71b0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_149f00a00;
  uVar4 = FUN_14171dbb4();
  FUN_14692fd60(uVar4,(longlong)param_1 + 0x304);
  uVar4 = FUN_14171dbb4();
  FUN_14692fd60(uVar4,param_1 + 0x60);
  FUN_1402bc42a(param_1 + 0x61);
  plVar3 = (longlong *)param_1[0x5f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x5d];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar3 = (longlong *)param_1[0x5b];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1449db362(param_1 + 0x58);
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x54);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1469d72aa FUN_1469d72aa body=1572 status=ok
// SIG undefined FUN_1469d72aa(void)

void FUN_1469d72aa(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_398 [32];
  undefined1 *local_378;
  undefined1 local_369;
  code *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  code **local_350;
  undefined1 *local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  code *local_2f0;
  undefined4 local_2e8;
  undefined1 local_24e;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  *(undefined1 *)(param_1 + 0x3c8) = param_5;
  uVar9 = *param_3;
  plVar8 = (longlong *)param_3[1];
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2e0) = uVar9;
    plVar13 = *(longlong **)(param_1 + 0x2e8);
    if (plVar13 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2e8) = 0;
LAB_1469d7891:
      LOCK();
      plVar8 = plVar13 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x0001469d75cc:
        if (iVar4 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2e0) = uVar9;
    plVar13 = *(longlong **)(param_1 + 0x2e8);
    if (plVar8 == plVar13) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar13 = plVar8;
        goto joined_r0x0001469d75cc;
      }
    }
    else {
      *(longlong **)(param_1 + 0x2e8) = plVar8;
      if (plVar13 != (longlong *)0x0) goto LAB_1469d7891;
    }
  }
  uVar9 = *param_4;
  lVar12 = param_4[1];
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar9;
  *(longlong *)(param_1 + 0x2f8) = lVar12;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  FUN_14692f10e(&local_2f0,0,0x3e19999a,2);
  FUN_146980d02(param_1 + 0x308,&local_2f0);
  FUN_1402bc42a(&local_2f0);
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  uVar5 = *(undefined4 *)(param_2 + 0x1fc);
  uVar6 = *(undefined4 *)(param_2 + 0x200);
  uVar7 = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x3a4) = uVar5;
  *(undefined4 *)(param_1 + 0x3a8) = uVar6;
  *(undefined4 *)(param_1 + 0x3ac) = uVar7;
  *(undefined4 *)(param_1 + 0x3b0) = 0x40a00000;
  plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_2f8,"Splitter",1);
  uVar9 = FUN_1469d78d0(plVar8,local_2f8,0,0);
  *(undefined8 *)(param_1 + 0x398) = uVar9;
  fVar2 = *(float *)(param_2 + 0x1b8);
  *(float *)(param_1 + 0x3b8) = fVar2;
  fVar3 = *(float *)(param_2 + 0x1bc);
  *(float *)(param_1 + 0x3bc) = fVar3;
  fVar14 = *(float *)(param_2 + 0x1c0);
  if (fVar3 <= *(float *)(param_2 + 0x1c0)) {
    fVar14 = fVar3;
  }
  if (fVar14 <= fVar2) {
    fVar14 = fVar2;
  }
  *(float *)(param_1 + 0x3c0) = fVar14;
  FUN_1469f4540(param_1 + 0x2a0,param_2 + 0x1c8);
  FUN_1469f45c4(param_1 + 0x2b0,param_2 + 0x1d8);
  FUN_1469f45c4(param_1 + 0x2c0,param_2 + 0x1e8);
  plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_300,"Docking.Sidebar.DrawerBackground",1);
  uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,local_300,0,0);
  *(undefined8 *)(param_1 + 0x378) = uVar9;
  plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_308,"Docking.Sidebar.DrawerShadow",1);
  uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,local_308,0,0);
  *(undefined8 *)(param_1 + 0x380) = uVar9;
  plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_310,"Docking.Sidebar.Border",1);
  uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,local_310,0,0);
  *(undefined8 *)(param_1 + 0x388) = uVar9;
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = DAT_14c96b350;
    }
    pcVar10 = "Docking.Sidebar.Border_SquareRight";
    puVar11 = &local_320;
  }
  else {
    if (*(char *)(param_1 + 0x3c8) != '\0') goto LAB_1469d761f;
    plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = DAT_14c96b350;
    }
    pcVar10 = "Docking.Sidebar.Border_SquareLeft";
    puVar11 = &local_318;
  }
  FUN_1446ddc76(puVar11,pcVar10,1);
  uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,*puVar11,0,0);
LAB_1469d761f:
  *(undefined8 *)(param_1 + 0x390) = uVar9;
  lVar12 = DAT_14c98e618 + 0x5f8;
  local_368 = FUN_1469d7940;
  local_360 = 0;
  FUN_1469f4730(&local_2f0,param_1);
  FUN_1469f4648(lVar12,&local_368,&local_2f0);
  FUN_1449db362(&local_2f0);
  FUN_14162fdc4();
  lVar12 = DAT_14c98e9c0 + 0x1e8;
  local_2f0 = FUN_1469d8196;
  local_2e8 = 0;
  FUN_1469d8014(&local_368,param_1,&local_2f0);
  local_2f0 = (code *)0x0;
  local_2e8 = 0;
  FUN_1469ff77e(&local_2f0,&local_368);
  FUN_1469ff696(lVar12,&local_330,&local_2f0);
  FUN_1449db362(&local_2f0);
  FUN_1449db362(&local_368);
  *(undefined2 *)(param_1 + 0x3c9) = 0;
  FUN_140a53a96(&local_2f0);
  local_24e = 1;
  local_348 = local_118;
  local_350 = &local_2f0;
  uVar9 = FUN_1469d82c2(&local_350,param_2 + 0x1a8);
  local_378 = &local_369;
  FUN_140a53d66(&local_368,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/Docking/STabDrawer.cpp",0x47);
  FUN_140a50bf4(&local_368,&local_340,uVar9);
  local_330 = local_340;
  local_328 = local_338;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_338 + 1) = (int)local_338[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_330);
  plVar8 = local_328;
  if (local_328 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_328 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_328)(local_328);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_338 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar1 = (int *)((longlong)local_338 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_338 + 0x10))(local_338);
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_35c,local_360);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  FUN_140a5660c(&local_2f0);
  plVar8 = (longlong *)param_3[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = (longlong *)param_4[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d78d0 FUN_1469d78d0 body=111 status=ok
// SIG undefined FUN_1469d78d0(void)

void FUN_1469d78d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  lVar1 = (**(code **)(*param_1 + 0x98))(param_1,DAT_14c979cf0,local_28,param_4);
  if (lVar1 == 0) {
    FUN_146962cd8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d7940 FUN_1469d7940 body=1747 status=ok
// SIG undefined FUN_1469d7940(void)

/* WARNING: Removing unreachable block (ram,0x0001469d79e7) */

void FUN_1469d7940(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  longlong in_stack_00000028;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  longlong *local_240;
  longlong local_238;
  longlong *local_230;
  longlong local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f8 [296];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (DAT_14c98e918 != '\0') goto LAB_1469d796e;
  DAT_14c98e918 = 1;
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_1469d79b3:
    local_58 = (undefined8 *)0x0;
    bVar16 = true;
    plVar14 = (longlong *)0x0;
    uVar15 = 0;
  }
  else {
    iVar10 = (int)plVar14[1];
    do {
      if (iVar10 == 0) goto LAB_1469d79b3;
      LOCK();
      iVar7 = (int)plVar14[1];
      bVar16 = iVar10 == iVar7;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar7 = iVar10;
      }
      iVar10 = iVar7;
      UNLOCK();
    } while (!bVar16);
    uVar15 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar14 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    local_58 = (undefined8 *)0x0;
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
  }
  local_50 = 0x400000001;
  local_58 = (undefined8 *)0x0;
  local_98 = uVar15;
  plStack_90 = plVar14;
  if (!bVar16) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar14 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  uVar6 = local_50;
  lVar12 = (longlong)(int)local_50;
  uVar9 = (int)local_50 + 1;
  local_50 = CONCAT44(local_50._4_4_,uVar9);
  if (local_50._4_4_ < uVar9) {
    FUN_1469f54c4(&local_98,uVar6 & 0xffffffff);
  }
  puVar11 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    puVar11 = &local_98;
  }
  puVar11[lVar12 * 2] = *(undefined8 *)(param_1 + 0x208);
  lVar13 = *(longlong *)(param_1 + 0x210);
  puVar11[lVar12 * 2 + 1] = lVar13;
  uVar6 = local_50;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x2f8);
  if (plVar3 != (longlong *)0x0) {
    iVar10 = (int)plVar3[1];
    do {
      if (iVar10 == 0) goto LAB_1469d7aac;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar17 = iVar10 == iVar7;
      if (bVar17) {
        *(int *)(plVar3 + 1) = iVar10 + 1;
        iVar7 = iVar10;
      }
      iVar10 = iVar7;
      UNLOCK();
    } while (!bVar17);
    lVar12 = *(longlong *)(param_1 + 0x2f0);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar13 = (longlong)(int)local_50;
      uVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar9);
      if (local_50._4_4_ < uVar9) {
        FUN_1469f54c4(&local_98,uVar6 & 0xffffffff);
      }
      puVar11 = local_58;
      if (local_58 == (undefined8 *)0x0) {
        puVar11 = &local_98;
      }
      puVar11[lVar13 * 2] = lVar12;
      puVar11[lVar13 * 2 + 1] = plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_1469d7aac:
  if (DAT_14c872a70 == '\0') {
    if (0 < (longlong)(int)DAT_14c98e618[0x3d]) {
      lVar13 = (longlong)(int)DAT_14c98e618[0x3d] * 0x10;
      lVar12 = *(longlong *)(DAT_14c98e618[0x3c] + -0x10 + lVar13);
      plVar3 = *(longlong **)(DAT_14c98e618[0x3c] + -8 + lVar13);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if (lVar12 != 0) goto LAB_1469d7ab9;
    }
    puVar11 = &local_98;
    if (local_58 != (undefined8 *)0x0) {
      puVar11 = local_58;
    }
    lVar12 = (longlong)(int)local_50;
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        cVar8 = FUN_1403d1f4c(in_stack_00000028,*(undefined8 *)((longlong)puVar11 + lVar13));
        if (cVar8 != '\0') {
          cVar8 = FUN_1459b8360(param_1 + 0x308);
          if ((cVar8 == '\0') || (cVar8 = FUN_14692f5de(param_1 + 0x308), cVar8 == '\0')) {
            FUN_14162fdc4();
            FUN_1469befb0(DAT_14c98e9c0,param_1 + 0x2e0);
          }
          goto LAB_1469d7ab9;
        }
        lVar13 = lVar13 + 0x10;
      } while (lVar12 * 0x10 != lVar13);
    }
    if (0 < *(int *)(in_stack_00000028 + 0x130)) {
      lVar12 = in_stack_00000028 + 8;
      if (*(longlong *)(in_stack_00000028 + 0x128) != 0) {
        lVar12 = *(longlong *)(in_stack_00000028 + 0x128);
      }
      uVar4 = *(undefined8 *)(lVar12 + 0x38);
      plVar3 = *(longlong **)(lVar12 + 0x40);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      plVar2 = DAT_14c98e618;
      if (!bVar16) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_218 = uVar15;
      local_210 = plVar14;
      (**(code **)(*plVar2 + 0x28))(plVar2,local_208,&local_218);
      cVar8 = FUN_146981260(uVar4,local_208);
      if (cVar8 != '\0') {
        if (local_200 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_200 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_200)(local_200);
            LOCK();
            piVar1 = (int *)((longlong)local_200 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_200 + 0x10))(local_200);
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        goto LAB_1469d7ab9;
      }
      FUN_1469aa21e(DAT_14c98e618,&local_228);
      plVar5 = local_220;
      plVar2 = DAT_14c98e618;
      if (local_228 == 0) {
        if (local_220 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_220 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_220)(local_220);
            LOCK();
            piVar1 = (int *)((longlong)local_220 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_220 + 0x10))(local_220);
            }
          }
        }
        if (local_200 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_200 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_200)(local_200);
            LOCK();
            piVar1 = (int *)((longlong)local_200 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_200 + 0x10))(local_200);
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
      else {
        local_1f8[0] = DAT_14c96b238;
        local_d0 = 0;
        local_c8 = 0x400000000;
        local_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        if (local_220 == (longlong *)0x0) {
          local_238 = local_228;
          local_230 = (longlong *)0x0;
          FUN_1407c4cd2(DAT_14c98e618,&local_238,local_1f8);
        }
        else {
          LOCK();
          *(int *)(local_220 + 1) = (int)local_220[1] + 1;
          UNLOCK();
          local_238 = local_228;
          local_230 = local_220;
          LOCK();
          *(int *)(local_220 + 1) = (int)local_220[1] + 1;
          UNLOCK();
          FUN_1407c4cd2(plVar2,&local_238,local_1f8);
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        cVar8 = FUN_1403d1f4c(local_1f8,*(undefined8 *)(param_1 + 0x208));
        FUN_1447fa21a(local_1f8);
        if (local_220 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_220 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_220)(local_220);
            LOCK();
            piVar1 = (int *)((longlong)local_220 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_220 + 0x10))(local_220);
            }
          }
        }
        if (local_200 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_200 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_200)(local_200);
            LOCK();
            piVar1 = (int *)((longlong)local_200 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_200 + 0x10))(local_200);
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        if (cVar8 != '\0') goto LAB_1469d7ab9;
      }
    }
    if (!bVar16) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_248 = uVar15;
    local_240 = plVar14;
    FUN_1469dae2c(param_1 + 0x2b0,&local_248);
  }
LAB_1469d7ab9:
  FUN_1469daeba(&local_98);
  if (!bVar16) {
    LOCK();
    plVar3 = plVar14 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  DAT_14c98e918 = '\0';
LAB_1469d796e:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d8014 FUN_1469d8014 body=386 status=ok
// SIG undefined FUN_1469d8014(void)

longlong * FUN_1469d8014(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1469d8125:
    *puVar5 = &PTR_LAB_149f03bd0;
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
    *puVar5 = &PTR_FUN_149f03b60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469d8125;
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
    *puVar5 = &PTR_LAB_149f03bd0;
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
    *puVar5 = &PTR_FUN_149f03b60;
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



// FUNCTION 1469d8196 FUN_1469d8196 body=280 status=ok
// SIG undefined FUN_1469d8196(void)

void FUN_1469d8196(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_2 == *(longlong *)(param_1 + 0x2e0)) && (*param_3 != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_1469d8261:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1469d8261;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar7 = iVar6 == iVar5;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar7);
      local_38 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_30 = plVar3;
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
    FUN_1469dae2c(param_1 + 0x2b0,&local_38);
  }
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
      }
    }
  }
  puVar4 = (undefined8 *)param_3[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d82c2 FUN_1469d82c2 body=84 status=ok
// SIG undefined FUN_1469d82c2(void)

undefined8 FUN_1469d82c2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar3[1];
  *puVar3 = uVar4;
  puVar3[1] = lVar5;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return *param_1;
}



// FUNCTION 1469d8316 FUN_1469d8316 body=541 status=ok
// SIG undefined FUN_1469d8316(void)

void FUN_1469d8316(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [16];
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\0') {
    fVar10 = *(float *)(param_1 + 0x3c0);
    if (*(float *)(param_1 + 0x3c0) <= *(float *)(param_1 + 0x3b8)) {
      fVar10 = *(float *)(param_1 + 0x3b8);
    }
    *(float *)(param_1 + 0x3b4) = fVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  lVar3 = param_1 + 0x308;
  cVar5 = FUN_1459b8360(lVar3);
  uVar11 = 0;
  if (cVar5 != '\0') {
    uVar11 = FUN_14692ef86(lVar3);
  }
  local_28 = *(longlong **)(param_1 + 0x10);
  if (local_28 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_30 = (code *)0x0;
  }
  else {
    iVar6 = (int)local_28[1];
    local_30 = (code *)0x0;
    do {
      if (iVar6 == 0) {
        local_28 = (longlong *)0x0;
        goto LAB_1469d83bb;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(local_28 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    local_30 = *(code **)(param_1 + 8);
  }
LAB_1469d83bb:
  local_48 = 0;
  FUN_14692f220(lVar3,&local_30,0,uVar11);
  plVar2 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_28 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) goto LAB_1469d840a;
  uVar7 = FUN_14171dbb4();
  FUN_14692fd52(uVar7,&local_30);
  *(undefined4 *)(param_1 + 0x304) = local_30._0_4_;
  local_30 = FUN_1469d86c6;
  local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
  FUN_1469d8544(local_40,param_1,&local_30);
  FUN_14697ef1e(param_1,&local_30,0,local_40);
  plVar2 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(code **)(param_1 + 0x2d0) = local_30;
    plVar8 = *(longlong **)(param_1 + 0x2d8);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2d8) = 0;
LAB_1469d84d5:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x0001469d8500:
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(code **)(param_1 + 0x2d0) = local_30;
    plVar8 = *(longlong **)(param_1 + 0x2d8);
    if (local_28 == plVar8) {
      LOCK();
      plVar8 = local_28 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar8 = plVar2;
        goto joined_r0x0001469d8500;
      }
    }
    else {
      *(longlong **)(param_1 + 0x2d8) = local_28;
      if (plVar8 != (longlong *)0x0) goto LAB_1469d84d5;
    }
  }
  plVar2 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_28 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_1469d840a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d8544 FUN_1469d8544 body=386 status=ok
// SIG undefined FUN_1469d8544(void)

longlong * FUN_1469d8544(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1469d8655:
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f03c40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469d8655;
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
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f03c40;
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



// FUNCTION 1469d86c6 FUN_1469d86c6 body=330 status=ok
// SIG undefined FUN_1469d86c6(void)

undefined8 FUN_1469d86c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  float fVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1 + 0x308;
  fVar11 = (float)FUN_14692f614(lVar3);
  fVar4 = *(float *)(param_1 + 0x3c0);
  fVar11 = fVar11 * fVar4 + 0.0;
  if (fVar4 <= fVar11) {
    fVar11 = fVar4;
  }
  if (fVar11 <= *(float *)(param_1 + 0x3b8)) {
    fVar11 = *(float *)(param_1 + 0x3b8);
  }
  *(float *)(param_1 + 0x3b4) = fVar11;
  cVar7 = FUN_1459b8360(lVar3);
  uVar9 = 1;
  if (cVar7 == '\0') {
    cVar7 = FUN_14692f590(lVar3);
    if (cVar7 != '\0') {
      plVar5 = *(longlong **)(param_1 + 0x10);
      if (plVar5 == (longlong *)0x0) {
LAB_1469d87b5:
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
      }
      else {
        iVar8 = (int)plVar5[1];
        do {
          if (iVar8 == 0) goto LAB_1469d87b5;
          LOCK();
          iVar6 = (int)plVar5[1];
          bVar10 = iVar8 == iVar6;
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar10);
        local_38 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plStack_30 = plVar5;
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
      FUN_1469dae2c(param_1 + 0x2c0,&local_38);
    }
    uVar9 = FUN_14171dbb4();
    FUN_14692fd60(uVar9,param_1 + 0x304);
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    plVar5 = *(longlong **)(param_1 + 0x2d8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2d8) = 0;
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
    uVar9 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1469d8812 FUN_1469d8812 body=503 status=ok
// SIG undefined FUN_1469d8812(void)

void FUN_1469d8812(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  code *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = FUN_14692f5d6(param_1 + 0x308);
  if (cVar6 != '\0') {
    FUN_14692f47a(param_1 + 0x308);
  }
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    uVar8 = FUN_14171dbb4();
    FUN_14692fd52(uVar8,&local_38);
    *(undefined4 *)(param_1 + 0x304) = local_38._0_4_;
    local_38 = FUN_1469d86c6;
    uStack_30 = (longlong *)((ulonglong)uStack_30._4_4_ << 0x20);
    FUN_1469d8544(local_48,param_1,&local_38);
    FUN_14697ef1e(param_1,&local_38,0,local_48);
    plVar2 = uStack_30;
    if (uStack_30 == (longlong *)0x0) {
      *(code **)(param_1 + 0x2d0) = local_38;
      plVar9 = *(longlong **)(param_1 + 0x2d8);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x2d8) = 0;
LAB_1469d899c:
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
joined_r0x0001469d89c7:
          if (iVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
      UNLOCK();
      *(code **)(param_1 + 0x2d0) = local_38;
      plVar9 = *(longlong **)(param_1 + 0x2d8);
      if (uStack_30 == plVar9) {
        LOCK();
        plVar9 = uStack_30 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*uStack_30)(uStack_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
          plVar9 = plVar2;
          goto joined_r0x0001469d89c7;
        }
      }
      else {
        *(longlong **)(param_1 + 0x2d8) = uStack_30;
        if (plVar9 != (longlong *)0x0) goto LAB_1469d899c;
      }
    }
    plVar2 = uStack_30;
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = uStack_30 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*uStack_30)(uStack_30);
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
  FUN_14162fdc4();
  lVar3 = DAT_14c98e9c0;
  plVar2 = *(longlong **)(DAT_14c98e9c0 + 0x1e0);
  if (plVar2 == (longlong *)0x0) {
LAB_1469d88cb:
    if (*(longlong *)(param_1 + 0x2e0) != 0) goto LAB_1469d88d5;
  }
  else {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_1469d88cb;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *(longlong *)(lVar3 + 0x1d8);
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (lVar3 != lVar4) goto LAB_1469d88d5;
  }
  FUN_14162fdc4();
  local_38 = (code *)0x0;
  uStack_30 = (longlong *)0x0;
  FUN_1469befb0(DAT_14c98e9c0);
LAB_1469d88d5:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d8a52 FUN_1469d8a52 body=2074 status=ok
// SIG undefined FUN_1469d8a52(void)

void FUN_1469d8a52(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  float *local_160;
  float *local_158;
  float local_148;
  float fStack_144;
  undefined4 local_13c;
  longlong local_138;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  char local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = *(longlong *)(param_1 + 0x208);
  if ((*(byte *)(lVar4 + 0x39) & *param_3) == 0) goto LAB_1469d90b9;
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    dVar3 = *(double *)(param_1 + 0x3a8);
    fVar10 = (float)dVar3;
    fStack_144 = (float)((double)param_2[1] - (dVar3 + dVar3));
    local_148 = *(float *)(param_1 + 0x3c0);
    fVar8 = (float)*(double *)(param_1 + 0x3a0);
    local_138 = CONCAT44(fVar10,fVar8);
    local_90 = *(char *)(lVar4 + 0x198);
    if (DAT_14c96b1e0 == '\0') {
      if (local_90 != '\0') goto LAB_1469d8f89;
    }
    else if (local_90 != '\0') goto LAB_1469d9111;
    bVar6 = *(byte *)(param_2 + 0xd) & 1;
    fStack_120 = param_2[2];
    fStack_10c = param_2[7];
    fVar13 = param_2[8];
    fVar9 = param_2[10];
    fVar11 = param_2[9];
    fVar7 = fVar8 * fVar13 + fVar9 * fVar10 + param_2[0xc];
    fVar12 = fVar8 * fStack_10c + fVar11 * fVar10 + param_2[0xb];
    fVar14 = fVar13 * 0.0 + fVar9;
    fVar15 = fStack_10c * 0.0 + fVar11;
    fVar13 = fVar9 * 0.0 + fVar13;
    fStack_10c = fVar11 * 0.0 + fStack_10c;
    local_118 = fVar10 * fStack_120 + param_2[4];
    fStack_11c = fVar8 * fStack_120 + param_2[3];
    plVar5 = *(longlong **)(param_1 + 0x210);
    local_128 = local_148;
    fStack_124 = fStack_144;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      goto LAB_1469d8ecd;
    }
LAB_1469d902e:
    uStack_114 = (undefined4)local_138;
    fStack_110 = (float)((ulonglong)local_138 >> 0x20);
    local_108 = CONCAT44(fVar15,fVar13);
    uStack_100 = CONCAT44(fVar12,fVar14);
LAB_1469d9067:
    local_13c = 0x3f800000;
    local_f8._0_5_ = CONCAT14(bVar6,fVar7);
    local_148 = local_128;
    fStack_144 = fStack_124;
LAB_1469d906f:
    local_e8 = (longlong *)0x0;
    local_f0 = lVar4;
  }
  else {
    if (*(char *)(param_1 + 0x3c8) == '\0') {
      dVar3 = *(double *)(param_1 + 0x3a8);
      fStack_110 = (float)dVar3;
      local_148 = *(float *)(param_1 + 0x3c0);
      fStack_144 = (float)((double)param_2[1] - (dVar3 + dVar3));
      local_138 = (ulonglong)(uint)fStack_110 << 0x20;
      local_90 = *(char *)(lVar4 + 0x198);
      if (DAT_14c96b1e0 == '\0') {
        if (local_90 == '\0') goto LAB_1469d8b3e;
LAB_1469d8f89:
        local_98 = *(ulonglong *)(lVar4 + 400);
        local_a8 = *(undefined8 *)(lVar4 + 0x180);
        uStack_a0 = *(undefined8 *)(lVar4 + 0x188);
      }
      else {
        if (local_90 == '\0') {
LAB_1469d8b3e:
          bVar6 = *(byte *)(param_2 + 0xd) & 1;
          fStack_120 = param_2[2];
          fVar10 = param_2[10];
          fVar9 = param_2[8] * 0.0;
          fVar8 = param_2[9];
          fVar13 = param_2[7] * 0.0;
          fVar7 = fVar10 * fStack_110 + fVar9 + param_2[0xc];
          fVar11 = fVar8 * fStack_110 + fVar13 + param_2[0xb];
          fVar9 = fVar9 + fVar10;
          fVar13 = fVar13 + fVar8;
          fVar10 = fVar10 * 0.0 + param_2[8];
          fStack_10c = fVar8 * 0.0 + param_2[7];
          local_118 = fStack_110 * fStack_120 + param_2[4];
          fStack_11c = fStack_120 * 0.0 + param_2[3];
          plVar5 = *(longlong **)(param_1 + 0x210);
          uStack_114 = 0;
          local_128 = local_148;
          fStack_124 = fStack_144;
          if (plVar5 == (longlong *)0x0) {
            local_108 = CONCAT44(fVar13,fVar10);
            uStack_100 = CONCAT44(fVar11,fVar9);
            goto LAB_1469d9067;
          }
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_108 = CONCAT44(fVar13,fVar10);
          uStack_100 = CONCAT44(fVar11,fVar9);
          goto LAB_1469d8f06;
        }
LAB_1469d9111:
        local_a8 = *(undefined8 *)(lVar4 + 0x180);
        uStack_a0 = *(undefined8 *)(lVar4 + 0x188);
        local_98 = *(ulonglong *)(lVar4 + 400) ^ 0x80000000;
      }
      local_13c = 0x3f800000;
      fVar10 = (float)*(double *)(lVar4 + 0x170);
      if (DAT_14c96b1e0 != '\0') {
        fVar10 = (0.5 - fVar10) + 0.5;
      }
      local_130 = CONCAT44((float)*(double *)(lVar4 + 0x178),fVar10);
      local_168 = &local_130;
      local_158 = param_2 + 7;
      local_128 = param_2[2];
      local_160 = &local_128;
      fStack_124 = (float)*(undefined8 *)(param_2 + 3);
      fStack_120 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
      FUN_146978c22(&local_e0,&local_148,&local_13c,&local_a8);
      lVar4 = *(longlong *)(param_1 + 0x208);
      plVar5 = *(longlong **)(param_1 + 0x210);
      local_128 = local_e0;
      fStack_124 = fStack_dc;
      if (plVar5 == (longlong *)0x0) {
        local_f8 = local_b0;
        fStack_120 = fStack_d8;
        fStack_11c = fStack_d4;
        local_108 = CONCAT44(uStack_bc,local_c0);
        uStack_100 = CONCAT44(uStack_b4,uStack_b8);
        local_118 = local_d0;
        uStack_114 = uStack_cc;
        fStack_110 = fStack_c8;
        fStack_10c = fStack_c4;
        goto LAB_1469d906f;
      }
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_f8 = local_b0;
      fStack_120 = fStack_d8;
      fStack_11c = fStack_d4;
      local_118 = local_d0;
      uStack_114 = uStack_cc;
      fStack_110 = fStack_c8;
      fStack_10c = fStack_c4;
      local_108 = CONCAT44(uStack_bc,local_c0);
      uStack_100 = CONCAT44(uStack_b4,uStack_b8);
    }
    else {
      dVar3 = *(double *)(param_1 + 0x3a0);
      fVar10 = (float)dVar3;
      local_148 = (float)((double)*param_2 - (dVar3 + dVar3));
      fStack_144 = *(float *)(param_1 + 0x3c0);
      fVar8 = (float)*(double *)(param_1 + 0x3a8);
      local_138 = CONCAT44(fVar8,fVar10);
      local_90 = *(char *)(lVar4 + 0x198);
      if (DAT_14c96b1e0 == '\0') {
        if (local_90 != '\0') goto LAB_1469d8f89;
      }
      else if (local_90 != '\0') goto LAB_1469d9111;
      bVar6 = *(byte *)(param_2 + 0xd) & 1;
      fStack_120 = param_2[2];
      fStack_10c = param_2[7];
      fVar13 = param_2[8];
      fVar9 = param_2[10];
      fVar11 = param_2[9];
      fVar7 = fVar10 * fVar13 + fVar9 * fVar8 + param_2[0xc];
      fVar12 = fVar10 * fStack_10c + fVar11 * fVar8 + param_2[0xb];
      fVar14 = fVar13 * 0.0 + fVar9;
      fVar15 = fStack_10c * 0.0 + fVar11;
      fVar13 = fVar9 * 0.0 + fVar13;
      fStack_10c = fVar11 * 0.0 + fStack_10c;
      local_118 = fVar8 * fStack_120 + param_2[4];
      fStack_11c = fVar10 * fStack_120 + param_2[3];
      plVar5 = *(longlong **)(param_1 + 0x210);
      local_128 = local_148;
      fStack_124 = fStack_144;
      if (plVar5 == (longlong *)0x0) goto LAB_1469d902e;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
LAB_1469d8ecd:
      uStack_114 = (undefined4)local_138;
      fStack_110 = (float)((ulonglong)local_138 >> 0x20);
      local_108 = CONCAT44(fVar15,fVar13);
      uStack_100 = CONCAT44(fVar12,fVar14);
LAB_1469d8f06:
      local_13c = 0x3f800000;
      local_f8._0_5_ = CONCAT14(bVar6,fVar7);
      local_f8 = CONCAT17(local_e0._2_1_,CONCAT25((undefined2)local_e0,(undefined5)local_f8));
      local_148 = local_128;
      fStack_144 = fStack_124;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_f0 = lVar4;
    local_e8 = plVar5;
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
  FUN_1402018be(param_3,&local_128);
  plVar5 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_1469d90b9:
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469d926e FUN_1469d926e body=801 status=ok
// SIG undefined FUN_1469d926e(void)

undefined1 * FUN_1469d926e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_188;
  undefined1 local_180 [136];
  undefined4 local_f8;
  undefined1 local_f4;
  float local_f0;
  float local_ec;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [56];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  lVar6 = DAT_14c966e98;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar6 = DAT_14c966e98;
    UNLOCK();
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
  if (lVar3 == lVar6) {
    FUN_1469d9590(param_1,local_b8,param_3);
    FUN_1469d96de(param_1,&local_f0,param_3);
    local_1a8 = CONCAT44(local_c8 * 0.0 + local_d0 * 0.0 + local_c0,
                         local_cc * 0.0 + local_d4 * 0.0 + local_c4);
    local_1a0 = CONCAT44(local_f0 * local_d0 + local_c8 * 0.0,local_f0 * local_d4 + local_cc * 0.0);
    uStack_198 = CONCAT44(local_c8 * local_ec + local_d0 * 0.0,local_ec * local_cc + local_d4 * 0.0)
    ;
    cVar8 = FUN_1402b2a42(&local_1a8,*(undefined8 *)(param_4 + 0x20));
    if (cVar8 != '\0') {
      bVar5 = true;
      *(undefined1 *)(param_1 + 0x3c9) = 1;
      FUN_144b00ffc(param_1 + 0x268,&local_f0);
      *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x3b4);
      uVar10 = FUN_14171dbb4();
      FUN_14692fd52(uVar10);
      *(undefined4 *)(param_1 + 0x300) = (undefined4)local_1a8;
      local_1a8 = CONCAT71(local_1a8._1_7_,1);
      local_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      memset(local_180,0,0x88);
      local_f8 = 0x20702;
      local_f4 = 0;
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_1469d953e:
        local_1b8 = 0;
        plStack_1b0 = (longlong *)0x0;
      }
      else {
        iVar9 = (int)plVar4[1];
        do {
          if (iVar9 == 0) goto LAB_1469d953e;
          LOCK();
          iVar7 = (int)plVar4[1];
          bVar11 = iVar9 == iVar7;
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar9 + 1;
            iVar7 = iVar9;
          }
          iVar9 = iVar7;
          UNLOCK();
        } while (!bVar11);
        uVar10 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        bVar5 = false;
        local_1b8 = uVar10;
        plStack_1b0 = plVar4;
      }
      plVar4 = plStack_1b0;
      uVar10 = FUN_140592a6e(&local_1a8,&local_1b8);
      FUN_1402c17c2(param_2,uVar10);
      if (!bVar5) {
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
      FUN_14493db24(&local_1a8);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469d9590 FUN_1469d9590 body=332 status=ok
// SIG undefined FUN_1469d9590(void)

undefined8 FUN_1469d9590(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 *local_70;
  longlong local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    local_20 = *(float *)(param_1 + 0x3c0) - *(float *)(param_1 + 0x3b4);
  }
  else {
    if (*(char *)(param_1 + 0x3c8) != '\0') {
      local_1c = *(float *)(param_1 + 0x3c0) - *(float *)(param_1 + 0x3b4);
      local_20 = 0.0;
      goto LAB_1469d9624;
    }
    local_20 = *(float *)(param_1 + 0x3b4) - *(float *)(param_1 + 0x3c0);
  }
  local_1c = 0.0;
LAB_1469d9624:
  uStack_24 = 0x3f800000;
  uStack_28 = 0;
  uStack_2c = 0;
  local_30 = 0x3f800000;
  local_58 = 0x3f0000003f000000;
  local_78 = &local_58;
  local_68 = (longlong)param_3 + 0x1c;
  local_38 = *(undefined8 *)((longlong)param_3 + 0xc);
  local_3c = *(undefined4 *)(param_3 + 1);
  local_70 = &local_3c;
  local_48 = 0x3f800000;
  local_40 = 0;
  local_50 = *param_3;
  FUN_146978c22(param_2,&local_50,&local_48);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d96de FUN_1469d96de body=468 status=ok
// SIG undefined FUN_1469d96de(void)

undefined8 FUN_1469d96de(longlong param_1,undefined8 param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  byte local_80;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined8 local_60;
  float local_58 [2];
  undefined4 local_50;
  undefined8 local_4c;
  undefined1 local_3c [24];
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1469d9590(param_1,local_58);
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    local_78 = *(float *)(param_1 + 0x3b0);
    dVar1 = *(double *)(param_1 + 0x3a0) - (double)local_78;
    dVar2 = *(double *)(param_1 + 0x3a8);
    local_74 = (float)((double)param_3[1] - (dVar2 + dVar2));
  }
  else if (*(char *)(param_1 + 0x3c8) == '\0') {
    dVar2 = *(double *)(param_1 + 0x3a8);
    dVar1 = (double)local_58[0] - *(double *)(param_1 + 0x3a0);
    local_78 = *(float *)(param_1 + 0x3b0);
    local_74 = (float)((double)param_3[1] - (dVar2 + dVar2));
  }
  else {
    local_74 = *(float *)(param_1 + 0x3b0);
    dVar1 = *(double *)(param_1 + 0x3a0);
    dVar2 = *(double *)(param_1 + 0x3a8) - (double)local_74;
    local_78 = (float)((double)*param_3 - (dVar1 + dVar1));
  }
  local_68 = (float)dVar2;
  local_6c = (float)dVar1;
  local_70 = 0x3f800000;
  local_88 = local_3c;
  local_80 = local_24 & 1;
  local_64 = local_50;
  local_60 = local_4c;
  FUN_1401272be(param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469d98b4 FUN_1469d98b4 body=531 status=ok
// SIG undefined FUN_1469d98b4(void)

undefined1 * FUN_1469d98b4(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(param_4 + 0x40);
  plVar6 = *(longlong **)(param_4 + 0x50);
  if (plVar6 == (longlong *)0x0) {
    if (lVar5 == DAT_14c966e98) {
      cVar4 = *(char *)(param_1 + 0x3c9);
      goto joined_r0x0001469d99a1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (lVar5 == DAT_14c966e98) {
      cVar4 = *(char *)(param_1 + 0x3c9);
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
joined_r0x0001469d99a1:
      if (cVar4 != '\0') {
        *(undefined1 *)(param_1 + 0x3c9) = 0;
        uVar9 = FUN_14171dbb4();
        FUN_14692fd60(uVar9,param_1 + 0x300);
        uVar3 = *(undefined4 *)(param_1 + 0x3c0);
        plVar6 = *(longlong **)(param_1 + 0x10);
        if (plVar6 == (longlong *)0x0) {
LAB_1469d99da:
          local_108 = 0;
          plStack_100 = (longlong *)0x0;
        }
        else {
          iVar8 = (int)plVar6[1];
          do {
            if (iVar8 == 0) goto LAB_1469d99da;
            LOCK();
            iVar7 = (int)plVar6[1];
            bVar10 = iVar8 == iVar7;
            if (bVar10) {
              *(int *)(plVar6 + 1) = iVar8 + 1;
              iVar7 = iVar8;
            }
            iVar8 = iVar7;
            UNLOCK();
          } while (!bVar10);
          local_108 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          plStack_100 = plVar6;
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
        FUN_1469d9ac8(param_1 + 0x2a0,&local_108,uVar3);
        local_f8[0] = 1;
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_48 = 0x20702;
        local_c0 = 0;
        uStack_b8 = 0;
        local_44 = 1;
        FUN_1403d4c6e(param_2,local_f8);
        FUN_14493db24(local_f8);
        goto LAB_1469d995e;
      }
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1469d995e:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d9ac8 FUN_1469d9ac8 body=140 status=ok
// SIG undefined FUN_1469d9ac8(void)

void FUN_1469d9ac8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x60))(param_1,&local_20);
  }
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
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d9b56 FUN_1469d9b56 body=790 status=ok
// SIG undefined FUN_1469d9b56(void)

undefined1 * FUN_1469d9b56(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1469d96de(param_1,&local_98);
  local_b0 = CONCAT44(local_70 * 0.0 + local_78 * 0.0 + local_68,
                      local_74 * 0.0 + local_7c * 0.0 + local_6c);
  local_a8 = CONCAT44(local_98 * local_78 + local_70 * 0.0,local_98 * local_7c + local_74 * 0.0);
  local_a0 = CONCAT44(local_70 * local_94 + local_78 * 0.0,local_94 * local_74 + local_7c * 0.0);
  uVar3 = FUN_1402b2a42();
  *(undefined1 *)(param_1 + 0x3ca) = uVar3;
  if (*(char *)(param_1 + 0x3c9) == '\x01') {
    cVar4 = FUN_140591fd6(param_1);
    if ((cVar4 != '\0') &&
       ((((*(float *)(param_4 + 0x30) != 0.0 || (NAN(*(float *)(param_4 + 0x30)))) ||
         (*(float *)(param_4 + 0x34) != 0.0)) || (NAN(*(float *)(param_4 + 0x34)))))) {
      fVar5 = *(float *)(param_4 + 0x20);
      fVar1 = *(float *)(param_4 + 0x24);
      fVar6 = *(float *)(param_1 + 0x28c);
      fVar2 = *(float *)(param_1 + 0x290);
      fVar7 = 1.0 / (*(float *)(param_1 + 0x284) * fVar2 - fVar6 * *(float *)(param_1 + 0x288));
      if (*(char *)(param_1 + 0x3c8) == '\x01') {
        fVar5 = -(fVar5 * fVar2 * fVar7 + fVar1 * -fVar6 * fVar7 +
                 (-*(float *)(param_1 + 0x294) * fVar2 * fVar7 -
                 -fVar6 * fVar7 * *(float *)(param_1 + 0x298)));
      }
      else if (*(char *)(param_1 + 0x3c8) == '\0') {
        fVar5 = fVar5 * fVar2 * fVar7 + fVar1 * -fVar6 * fVar7 +
                (-*(float *)(param_1 + 0x294) * fVar2 * fVar7 -
                -fVar6 * fVar7 * *(float *)(param_1 + 0x298));
      }
      else {
        fVar6 = *(float *)(param_1 + 0x284) * fVar7;
        fVar7 = -*(float *)(param_1 + 0x288) * fVar7;
        fVar5 = -(fVar5 * fVar7 + fVar1 * fVar6 +
                 (-*(float *)(param_1 + 0x294) * fVar7 - fVar6 * *(float *)(param_1 + 0x298)));
      }
      fVar1 = *(float *)(param_1 + 0x3b8);
      fVar5 = fVar5 + *(float *)(param_1 + 0x3c4);
      fVar6 = fVar5;
      if (*(float *)(param_1 + 0x3bc) <= fVar5) {
        fVar6 = *(float *)(param_1 + 0x3bc);
      }
      if (fVar6 <= fVar1) {
        fVar6 = fVar1;
      }
      *(float *)(param_1 + 0x3c0) = fVar6;
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
      if (fVar5 <= fVar1) {
        fVar5 = fVar1;
      }
      *(float *)(param_1 + 0x3b4) = fVar5;
      uVar3 = 1;
      goto LAB_1469d9c9a;
    }
  }
  uVar3 = 0;
LAB_1469d9c9a:
  *param_2 = uVar3;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469d9e6e FUN_1469d9e6e body=26 status=ok
// SIG undefined FUN_1469d9e6e(void)

void FUN_1469d9e6e(longlong param_1)

{
  FUN_1403d1e68();
  *(undefined1 *)(param_1 + 0x3ca) = 0;
  return;
}



// FUNCTION 1469d9ecc FUN_1469d9ecc body=3934 status=ok
// SIG undefined FUN_1469d9ecc(void)

int FUN_1469d9ecc(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                 ulonglong param_5,undefined4 param_6,longlong param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong *plVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_378 [32];
  undefined *local_358;
  undefined8 *local_350;
  longlong local_348;
  undefined1 local_340;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  undefined4 uStack_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [16];
  ulonglong local_2e8;
  double local_2e0;
  undefined1 local_2d8 [16];
  float local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_290;
  undefined8 local_288;
  float local_280;
  undefined8 local_27c;
  ulonglong local_274;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  byte local_254;
  undefined8 local_250;
  float local_248;
  undefined8 local_244;
  ulonglong local_23c;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  byte local_21c;
  undefined8 local_218;
  float fStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  ulonglong local_204;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  byte local_1e4;
  undefined8 local_1d8;
  float fStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  byte local_1a4;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  byte local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  char local_12c;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float fStack_118;
  float local_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float local_fc;
  float fStack_f8;
  char local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98e914) && (FUN_144b3d300(&DAT_14c98e914), DAT_14c98e914 == -1)) {
    plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_290,"Colors.Foldout",1);
    local_358 = &DAT_14c98de74;
    local_350 = (undefined8 *)0x0;
    (**(code **)(*plVar11 + 0x40))(plVar11,&DAT_14c98e900,local_290,0);
    _Init_thread_footer(&DAT_14c98e914);
  }
  FUN_1469d9590(param_1,&local_128,param_3);
  FUN_1469d96de(param_1,&local_160,param_3);
  local_2e8 = (ulonglong)(uint)*param_3;
  local_30c = param_3[1];
  local_2e0 = (double)local_30c;
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    uVar25 = (undefined4)*(undefined8 *)(param_1 + 0x3a0);
    uVar26 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20);
    dVar3 = *(double *)(param_1 + 0x3a8);
    uVar23 = SUB84(dVar3,0);
    uVar24 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar5 = local_2e0 - (dVar3 + dVar3);
    dVar3 = (double)*(float *)(param_1 + 0x3c0);
  }
  else if (*(char *)(param_1 + 0x3c8) == '\0') {
    dVar3 = *(double *)(param_1 + 0x3a8);
    uVar23 = SUB84(dVar3,0);
    uVar24 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar5 = local_2e0 - (dVar3 + dVar3);
    dVar3 = (double)*(float *)(param_1 + 0x3c0);
    uVar25 = 0;
    uVar26 = 0;
  }
  else {
    dVar3 = *(double *)(param_1 + 0x3a0);
    uVar25 = SUB84(dVar3,0);
    uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar5 = (double)*(float *)(param_1 + 0x3c0);
    uVar23 = (undefined4)*(undefined8 *)(param_1 + 0x3a8);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3a8) >> 0x20);
    dVar3 = (double)*param_3 - (dVar3 + dVar3);
  }
  fVar22 = (float)(double)CONCAT44(uVar24,uVar23);
  fVar17 = (float)(double)CONCAT44(uVar26,uVar25);
  local_180 = (float)dVar5;
  local_184 = (float)dVar3;
  local_198 = CONCAT44(local_120 * fVar22 + fStack_118,local_120 * fVar17 + local_11c);
  local_168 = fVar17 * fStack_108 + fStack_100 * fVar22 + fStack_f8;
  local_16c = fVar17 * local_10c + fVar22 * fStack_104 + local_fc;
  local_170 = fStack_108 * 0.0 + fStack_100;
  local_174 = local_10c * 0.0 + fStack_104;
  local_178 = fStack_100 * 0.0 + fStack_108;
  local_17c = fStack_104 * 0.0 + local_10c;
  local_190 = local_120;
  local_18c = 0;
  local_164 = local_164 & 0xfc | local_f4 * '\x02' & 2U;
  if ((*(char *)(param_1 + 0x3c9) != '\0') || (*(char *)(param_1 + 0x3ca) == '\x01')) {
    lVar13 = *(longlong *)(param_1 + 0x398);
    cVar4 = *(char *)(lVar13 + 0xd8);
    puVar9 = (undefined8 *)(lVar13 + 200);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        puVar9 = (undefined8 *)FUN_1400c06fe(puVar9);
      }
      else if (cVar4 == '\x03') {
        puVar9 = (undefined8 *)(param_7 + 0x20);
      }
      else {
        puVar9 = (undefined8 *)(param_7 + 0x10);
      }
    }
    local_218 = *puVar9;
    local_350 = &local_218;
    fStack_210 = (float)puVar9[1];
    uStack_20c = (undefined4)((ulonglong)puVar9[1] >> 0x20);
    local_1d8 = local_154;
    fStack_1d0 = (float)local_158;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    local_1c4 = local_160;
    local_1bc = local_144;
    uStack_1b4 = uStack_13c;
    local_1ac = local_134;
    local_1a4 = local_1a4 & 0xfc | local_12c * '\x02' & 2U;
    local_358 = (undefined *)((ulonglong)local_358 & 0xffffffffffffff00);
    FUN_140239bd2(param_5,param_6,&local_1d8,lVar13 + 0xc0);
  }
  lVar13 = *(longlong *)(param_1 + 0x380);
  puVar9 = (undefined8 *)(lVar13 + 8);
  cVar4 = *(char *)(lVar13 + 0x18);
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      puVar9 = (undefined8 *)FUN_1400c06fe(puVar9);
      lVar13 = *(longlong *)(param_1 + 0x380);
    }
    else if (cVar4 == '\x03') {
      puVar9 = (undefined8 *)(param_7 + 0x20);
    }
    else {
      puVar9 = (undefined8 *)(param_7 + 0x10);
    }
  }
  local_218 = *puVar9;
  local_350 = &local_218;
  fStack_210 = (float)puVar9[1];
  uStack_20c = (undefined4)((ulonglong)puVar9[1] >> 0x20);
  fStack_1d0 = local_120;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  local_1c4 = local_128;
  local_1bc = CONCAT44(fStack_108,local_10c);
  uStack_1b4 = CONCAT44(fStack_100,fStack_104);
  local_1ac = CONCAT44(fStack_f8,local_fc);
  local_1a4 = local_1a4 & 0xfc | local_f4 * '\x02' & 2U;
  local_358 = (undefined *)((ulonglong)local_358 & 0xffffffffffffff00);
  FUN_140239bd2(param_5,param_6,&local_1d8,lVar13);
  lVar13 = *(longlong *)(param_1 + 0x378);
  puVar9 = (undefined8 *)(lVar13 + 8);
  cVar4 = *(char *)(lVar13 + 0x18);
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      puVar9 = (undefined8 *)FUN_1400c06fe(puVar9);
      lVar13 = *(longlong *)(param_1 + 0x378);
    }
    else if (cVar4 == '\x03') {
      puVar9 = (undefined8 *)(param_7 + 0x20);
    }
    else {
      puVar9 = (undefined8 *)(param_7 + 0x10);
    }
  }
  local_1d8 = *puVar9;
  fStack_1d0 = (float)puVar9[1];
  uStack_1cc = (undefined4)((ulonglong)puVar9[1] >> 0x20);
  local_358 = (undefined *)((ulonglong)local_358 & 0xffffffffffffff00);
  local_350 = &local_1d8;
  FUN_140239bd2(param_5,param_6,&local_198,lVar13);
  local_340 = param_8;
  local_348 = param_7;
  local_350 = (undefined8 *)CONCAT44(local_350._4_4_,param_6);
  local_358 = (undefined *)param_5;
  iVar7 = FUN_1400c0302(param_1,param_2,&local_128,param_4);
  plVar11 = *(longlong **)(param_1 + 0x2f8);
  bVar16 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_1469da468:
    plVar11 = (longlong *)0x0;
LAB_1469da46b:
    lVar13 = *(longlong *)(param_1 + 0x388);
    puVar9 = (undefined8 *)(lVar13 + 8);
    cVar4 = *(char *)(lVar13 + 0x18);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        puVar9 = (undefined8 *)FUN_1400c06fe(puVar9);
        lVar13 = *(longlong *)(param_1 + 0x388);
      }
      else if (cVar4 == '\x03') {
        puVar9 = (undefined8 *)(param_7 + 0x20);
      }
      else {
        puVar9 = (undefined8 *)(param_7 + 0x10);
      }
    }
    local_1d8 = *puVar9;
    fStack_1d0 = (float)puVar9[1];
    uStack_1cc = (undefined4)((ulonglong)puVar9[1] >> 0x20);
    local_358 = (undefined *)((ulonglong)local_358 & 0xffffffffffffff00);
    local_350 = &local_1d8;
    FUN_140239bd2(param_5,iVar7,&local_198,lVar13);
    if (bVar16) goto LAB_1469da4f2;
  }
  else {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) goto LAB_1469da468;
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar15 = iVar8 == iVar6;
      if (bVar15) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar15);
    if (*(longlong *)(param_1 + 0x2f0) == 0 || *(char *)(param_1 + 0x3c8) == '\x02') {
      bVar16 = false;
      goto LAB_1469da46b;
    }
    pfVar10 = (float *)FUN_144b013ec();
    fVar17 = *pfVar10;
    fVar22 = (float)DAT_14c8463f8 * pfVar10[1];
    local_310 = fStack_104;
    local_324 = fStack_100;
    fVar21 = 1.0 / (local_10c * fStack_100 - fStack_104 * fStack_108);
    fVar28 = local_10c * fVar21;
    fVar21 = fVar21 * -fStack_108;
    fVar27 = (float)DAT_14c846328 * pfVar10[1];
    local_2d8 = ZEXT416((uint)local_fc);
    local_314 = fStack_f8;
    fVar20 = -local_fc * fVar21 - fVar28 * fStack_f8;
    lVar13 = *(longlong *)(param_1 + 0x388);
    dVar19 = (double)fVar17;
    bVar16 = *(char *)(param_1 + 0x3c8) == '\0';
    if (bVar16) {
      local_308._0_4_ = SUB84(dVar19,0);
      local_308._4_4_ = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
    }
    else {
      local_308._0_4_ = SUB84(DAT_14c8463f0,0);
      local_308._4_4_ = (uint)((ulonglong)DAT_14c8463f0 >> 0x20);
    }
    local_32c = *(float *)(lVar13 + 0x74) * 0.5 +
                ((float)DAT_14c8463f0 * fVar17 * pfVar10[7] + fVar22 * pfVar10[9] + pfVar10[0xb]) *
                fVar21 + ((float)DAT_14c8463f0 * fVar17 * pfVar10[8] + pfVar10[10] * fVar22 +
                         pfVar10[0xc]) * fVar28 + fVar20;
    fVar17 = *(float *)(lVar13 + 0x74) * -0.5 +
             ((float)DAT_14c846320 * fVar17 * pfVar10[7] + fVar27 * pfVar10[9] + pfVar10[0xb]) *
             fVar21 + (pfVar10[8] * (float)DAT_14c846320 * fVar17 + pfVar10[10] * fVar27 +
                      pfVar10[0xc]) * fVar28 + fVar20;
    dVar18 = DAT_14c8463f8;
    if (bVar16) {
      dVar18 = -0.0;
    }
    fVar27 = (float)((double)CONCAT44(uVar26,uVar25) +
                    (double)CONCAT44(local_308._4_4_,(undefined4)local_308));
    _local_320 = CONCAT44((int)((ulonglong)DAT_14c8463f8 >> 0x20),local_11c);
    fVar20 = (float)((double)CONCAT44(uVar24,uVar23) + dVar18);
    local_1d8 = CONCAT44(local_120 * fVar20 + fStack_118,local_120 * fVar27 + local_11c);
    fStack_1d0 = local_120;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    local_1c4 = CONCAT44((float)(dVar5 + 0.0),(float)(dVar3 + dVar19));
    fVar22 = fStack_108 * 0.0;
    local_308 = (ulonglong)(uint)fVar22;
    uStack_300 = 0;
    local_2c8 = fVar22 + fStack_100;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    fVar21 = local_10c * 0.0;
    local_318 = fVar21 + fStack_104;
    local_268 = fStack_108 + fStack_100 * 0.0;
    local_2f8 = ZEXT416((uint)local_268);
    local_328 = local_10c + fStack_104 * 0.0;
    local_1bc = CONCAT44(local_268,local_328);
    uStack_1b4 = CONCAT44(local_2c8,local_318);
    local_1ac = CONCAT44(fVar27 * fStack_108 + fStack_100 * fVar20 + fStack_f8,
                         fVar27 * local_10c + fVar20 * fStack_104 + local_fc);
    local_11c = local_120 * 0.0 + local_11c;
    local_218 = CONCAT44(fStack_118 + local_120 * 0.0,local_11c);
    local_204 = (ulonglong)(uint)local_32c << 0x20 | local_2e8;
    local_1ec = fStack_104 * 0.0 + fVar21 + local_fc;
    fStack_210 = local_120;
    uStack_20c = 0;
    uStack_208 = 0;
    local_1e8 = fStack_100 * 0.0 + fVar22 + fStack_f8;
    local_250 = CONCAT44(local_32c * local_120 + fStack_118,local_11c);
    local_23c = (ulonglong)(uint)(fVar17 - local_32c) << 0x20 | local_2e8;
    local_224 = fStack_104 * local_32c + fVar21 + local_fc;
    local_248 = local_120;
    local_244 = 0;
    local_220 = fStack_100 * local_32c + fVar22 + fStack_f8;
    local_258 = fStack_100 * fVar17 + fVar22 + fStack_f8;
    local_25c = fStack_104 * fVar17 + fVar21 + local_fc;
    local_288 = CONCAT44(local_120 * fVar17 + fStack_118,local_11c);
    local_280 = local_120;
    local_274 = (ulonglong)(uint)(local_30c - fVar17) << 0x20 | local_2e8;
    local_27c = 0;
    bVar12 = local_f4 * '\x02' & 2;
    local_1a4 = local_1a4 & 0xfc | bVar12;
    local_1e4 = local_1e4 & 0xfc | bVar12;
    local_21c = local_21c & 0xfc | bVar12;
    local_254 = local_254 & 0xfc | bVar12;
    lVar14 = *(longlong *)
              (param_1 + 0x388 +
              (ulonglong)
              ((double)local_32c <
              *(double *)(param_1 + 0x3a8) + *(double *)(lVar13 + 0x40 + (ulonglong)!bVar16 * 8)) *
              8);
    lVar13 = *(longlong *)
              (param_1 + 0x388 +
              (ulonglong)
              ((local_2e0 - *(double *)(param_1 + 0x3a8)) -
               *(double *)(lVar13 + 0x40 + (ulonglong)(!bVar16 ^ 3) * 8) < (double)fVar17) * 8);
    local_26c = local_328;
    local_264 = local_318;
    local_260 = local_2c8;
    local_234 = local_328;
    local_230 = local_268;
    local_22c = local_318;
    local_228 = local_2c8;
    local_1fc = local_328;
    local_1f8 = local_268;
    local_1f4 = local_318;
    local_1f0 = local_2c8;
    FUN_146948d7a(&local_2b8);
    FUN_1400d7f4c(param_5,&local_2b8);
    puVar9 = (undefined8 *)(lVar14 + 8);
    cVar4 = *(char *)(lVar14 + 0x18);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        puVar9 = (undefined8 *)FUN_1400c06fe(puVar9);
      }
      else if (cVar4 == '\x03') {
        puVar9 = (undefined8 *)(param_7 + 0x20);
      }
      else {
        puVar9 = (undefined8 *)(param_7 + 0x10);
      }
    }
    local_2b8 = *puVar9;
    uStack_2b0 = puVar9[1];
    local_358 = (undefined *)((ulonglong)local_358 & 0xffffffffffffff00);
    local_350 = &local_2b8;
    FUN_140239bd2(param_5,iVar7,&local_198,lVar14);
    FUN_14171ebf2(param_5);
    FUN_146948d7a(&local_2b8,&local_250);
    FUN_1400d7f4c(param_5,&local_2b8);
    lVar14 = *(longlong *)(param_1 + 0x390);
    puVar9 = (undefined8 *)(lVar14 + 8);
    cVar4 = *(char *)(lVar14 + 0x18);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        puVar9 = (undefined8 *)FUN_1400c06fe(puVar9);
        lVar14 = *(longlong *)(param_1 + 0x390);
      }
      else if (cVar4 == '\x03') {
        puVar9 = (undefined8 *)(param_7 + 0x20);
      }
      else {
        puVar9 = (undefined8 *)(param_7 + 0x10);
      }
    }
    local_2b8 = *puVar9;
    uStack_2b0 = puVar9[1];
    local_358 = (undefined *)((ulonglong)local_358 & 0xffffffffffffff00);
    local_350 = &local_2b8;
    FUN_140239bd2(param_5,iVar7,&local_1d8,lVar14);
    FUN_14171ebf2(param_5);
    FUN_146948d7a(&local_2b8,&local_288);
    FUN_1400d7f4c(param_5,&local_2b8);
    puVar9 = (undefined8 *)(lVar13 + 8);
    cVar4 = *(char *)(lVar13 + 0x18);
    if (cVar4 != '\0') {
      if (cVar4 == '\x01') {
        puVar9 = (undefined8 *)FUN_1400c06fe(puVar9);
      }
      else if (cVar4 == '\x03') {
        puVar9 = (undefined8 *)(param_7 + 0x20);
      }
      else {
        puVar9 = (undefined8 *)(param_7 + 0x10);
      }
    }
    local_2b8 = *puVar9;
    uStack_2b0 = puVar9[1];
    local_358 = (undefined *)((ulonglong)local_358 & 0xffffffffffffff00);
    local_350 = &local_2b8;
    FUN_140239bd2(param_5,iVar7,&local_198,lVar13);
    FUN_14171ebf2(param_5);
  }
  LOCK();
  plVar1 = plVar11 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_1469da4f2:
  if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7 + 1;
}



// FUNCTION 1469dae2c FUN_1469dae2c body=140 status=ok
// SIG undefined FUN_1469dae2c(void)

void FUN_1469dae2c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x60))(param_1,&local_20);
  }
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
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469daeba FUN_1469daeba body=53 status=ok
// SIG undefined FUN_1469daeba(void)

void FUN_1469daeba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_1404578a2(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469daef0 FUN_1469daef0 body=277 status=ok
// SIG undefined FUN_1469daef0(void)

void FUN_1469daef0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f00c80;
  FUN_1469db006();
  plVar3 = (longlong *)param_1[0x59];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1469f55de(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x55];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar3 = (longlong *)param_1[0x52];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1469f55b8(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1469db006 FUN_1469db006 body=299 status=ok
// SIG undefined FUN_1469db006(void)

void FUN_1469db006(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  local_40 = 0;
  iVar5 = *(int *)(param_1 + 0x2b8);
  uVar3 = *(undefined8 *)(param_1 + 0x2b0);
  local_38 = iVar5;
  if (iVar5 == 0) {
    local_34 = 0;
    iVar5 = 0;
  }
  else {
    FUN_1469fd6fc(&local_40,iVar5);
    FUN_1469fd754(local_40,uVar3,iVar5);
    lVar4 = local_40;
    lVar6 = (longlong)local_38;
    iVar5 = 0;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        local_50 = *(undefined8 *)(*(longlong *)(lVar4 + lVar7) + 0x2e0);
        local_48 = *(longlong *)(*(longlong *)(lVar4 + lVar7) + 0x2e8);
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        FUN_1469dc3c8(param_1,&local_50);
        lVar7 = lVar7 + 0x10;
        iVar5 = local_38;
      } while (lVar6 * 0x10 != lVar7);
    }
  }
  FUN_1469f55de(local_40,iVar5);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469db132 FUN_1469db132 body=1183 status=ok
// SIG undefined FUN_1469db132(void)

void FUN_1469db132(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_628 [32];
  undefined1 *local_608;
  undefined1 local_5f1;
  undefined1 local_5f0 [8];
  longlong *local_5e8;
  undefined1 local_5d1;
  undefined8 local_5d0;
  longlong *local_5c8;
  undefined8 local_5b8;
  longlong *local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  longlong *local_578;
  undefined8 local_570;
  longlong *local_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined1 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined1 local_380 [424];
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8 [80];
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148 [248];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_628;
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 0x1a8);
  uVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2a0) = uVar4;
    plVar6 = *(longlong **)(param_1 + 0x2a8);
    if (plVar6 == (longlong *)0x0) goto LAB_1469db1f5;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
LAB_1469db1bd:
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1469db1f5;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar5 = plVar6;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2a0) = uVar4;
    plVar6 = *(longlong **)(param_1 + 0x2a8);
    if (plVar5 != plVar6) {
      *(longlong **)(param_1 + 0x2a8) = plVar5;
      if (plVar6 == (longlong *)0x0) goto LAB_1469db1f5;
      goto LAB_1469db1bd;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1469db1f5;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1469db1f5:
  local_558 = 0x40000000;
  local_560 = 0x40000000;
  if (*(char *)(param_1 + 0x298) != '\x01') {
    local_560 = 0;
  }
  if (*(char *)(param_1 + 0x298) != '\0') {
    local_558 = 0;
  }
  local_55c = 0;
  local_554 = 0;
  local_550 = 1;
  local_548 = 0;
  uStack_540 = 0;
  uVar4 = FUN_140a58d14(param_1 + 0x218);
  FUN_140a562d0(local_380);
  local_538 = 0;
  uStack_530 = 0;
  local_528 = 1;
  local_520 = 0;
  uStack_518 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 1;
  FUN_144a450dc(local_1a8,&local_520);
  FUN_1449db362(&local_520);
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_5a8,"Docking.Sidebar.Background",1);
  local_5a0 = (**(code **)(*plVar5 + 0x50))(plVar5,local_5a8,0,0);
  local_598 = 1;
  local_590 = 0;
  uStack_588 = 0;
  local_150 = 1;
  local_158 = local_5a0;
  FUN_144a450dc(local_148,&local_590);
  FUN_1449db362(&local_590);
  FUN_1407679b0(&local_538);
  local_608 = &local_5d1;
  FUN_14076837c(&local_5d0,"SVerticalBox",
                ".\\Runtime/Slate/Private/Framework/Docking/STabSidebar.cpp",0x1a9);
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5c8 + 1) = (int)local_5c8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = local_5d0;
  *(longlong **)(param_1 + 0x270) = local_5c8;
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
  FUN_14076784c(&local_5d0,&local_5b8,&local_538);
  plVar6 = local_1d0;
  plVar5 = local_5b0;
  if (local_5b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5b0 + 1) = (int)local_5b0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_5b0 + 1) = (int)local_5b0[1] + 1;
    UNLOCK();
  }
  local_1d8 = local_5b8;
  local_1d0 = local_5b0;
  if (plVar6 != (longlong *)0x0) {
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
  local_608 = &local_5f1;
  FUN_140a55c32(local_5f0,"SBorder",".\\Runtime/Slate/Private/Framework/Docking/STabSidebar.cpp",
                0x1a5);
  FUN_140a530e4(local_5f0,&local_580,local_380);
  local_570 = local_580;
  local_568 = local_578;
  if (local_578 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_578 + 1) = (int)local_578[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(uVar4,&local_570);
  plVar6 = local_568;
  if (local_568 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_568 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_568)(local_568);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_578 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_578 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_578)(local_578);
      LOCK();
      piVar1 = (int *)((longlong)local_578 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_578 + 0x10))(local_578);
      }
    }
  }
  if (local_5e8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_5e8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_5e8)(local_5e8);
      LOCK();
      piVar1 = (int *)((longlong)local_5e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5e8 + 0x10))(local_5e8);
      }
    }
  }
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
  if (local_5b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_5b0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_5b0)(local_5b0);
      LOCK();
      piVar1 = (int *)((longlong)local_5b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5b0 + 0x10))(local_5b0);
      }
    }
  }
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_5c8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_5c8)(local_5c8);
      LOCK();
      piVar1 = (int *)((longlong)local_5c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5c8 + 0x10))(local_5c8);
      }
    }
  }
  FUN_14149255e(&local_538);
  FUN_140a59028(local_380);
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
  if ((local_50 ^ (ulonglong)auStack_628) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469db5d2 FUN_1469db5d2 body=63 status=ok
// SIG undefined FUN_1469db5d2(void)

longlong FUN_1469db5d2(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  return param_1;
}



// FUNCTION 1469db612 FUN_1469db612 body=231 status=ok
// SIG undefined FUN_1469db612(void)

void FUN_1469db612(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = FUN_146a57ad6(*param_2);
  uVar3 = *param_2;
  if (cVar5 == '\0') {
    local_40 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    local_48 = uVar3;
    FUN_1469dc822(param_1,&local_48,1);
  }
  else {
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_28 = uVar3;
    cVar5 = FUN_1428f9e74(&local_28);
    if (cVar5 == '\0') {
      local_38 = *param_2;
      local_30 = param_2[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_1469dc692(param_1,&local_38);
    }
  }
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469db6fa FUN_1469db6fa body=243 status=ok
// SIG undefined FUN_1469db6fa(void)

void FUN_1469db6fa(longlong param_1,longlong *param_2,byte param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x280) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x278);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x280) * 4;
    do {
      local_48 = *plVar3;
      lVar2 = *param_2;
      local_40 = plVar3[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_1428f9dd0(&local_48,local_48 == lVar2 & param_3);
      plVar3 = plVar3 + 4;
    } while (plVar3 != plVar4);
  }
  if (param_3 != 0) {
    local_58 = *param_2;
    local_50 = param_2[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_1469dc822(param_1,&local_58,1);
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469db7ee FUN_1469db7ee body=154 status=ok
// SIG undefined FUN_1469db7ee(void)

longlong FUN_1469db7ee(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_1469f6a1c(local_30);
  FUN_144a450dc(param_1 + 0x1c8,local_30);
  FUN_1449db362(local_30);
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469db88a FUN_1469db88a body=1970 status=ok
// SIG undefined FUN_1469db88a(void)

undefined8 FUN_1469db88a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_2b8 [32];
  code **local_298;
  longlong local_290;
  undefined1 local_288;
  undefined8 local_280;
  longlong **local_278;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  longlong *local_230 [2];
  wchar_t *local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  longlong *local_1f0 [2];
  wchar_t *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_190 [16];
  code *local_180;
  undefined4 local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined8 auStack_160 [2];
  undefined1 local_150 [24];
  longlong *local_138 [2];
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined **local_e0 [13];
  longlong *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_268 = param_3;
  local_258 = param_2;
  local_290 = FUN_140a2b044(&DAT_14c96b348);
  if (local_290 == 0) {
    local_290 = DAT_14c96b350;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_278 = (longlong **)CONCAT71(local_278._1_7_,1);
  local_288 = 1;
  local_280 = 0;
  local_298 = (code **)((ulonglong)local_298 & 0xffffffffffffff00);
  FUN_1469d0642(local_e0,1);
  local_180 = (code *)0x149f00f0c;
  local_178 = 0xe;
  FUN_1446e940c(&local_1e0,&local_180);
  local_180 = (code *)0x149f00f2a;
  local_178 = 10;
  FUN_1446e940c(&local_220,&local_180);
  FUN_140208bae(local_138,&local_220,&local_1e0,L"Options");
  FUN_14023423e(&local_180,local_138);
  local_170[0] = 1;
  local_168 = 0;
  auStack_160[0] = 0;
  FUN_1446ddc76(&local_110,"RestoreOptions",1);
  FUN_146a0d4b6(local_e0,local_110,&local_180);
  FUN_1449db362(&local_168);
  if (local_180 != (code *)0x0) {
    (**(code **)(*(longlong *)local_180 + 0x10))();
  }
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  FUN_144a5dc74(local_138);
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = FUN_1469dd596;
  local_178 = 0;
  local_260 = param_1;
  FUN_1469dd42c(local_190,param_1,&local_180,local_268);
  FUN_1469ba902(&local_180,local_190);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1e0 = L"HideTabWellTooltip";
  local_1d8 = 0x12;
  FUN_1446e940c(local_1f4,&local_1e0);
  local_1e0 = L"TabSidebar";
  local_1d8 = 10;
  FUN_1446e940c(local_1f8,&local_1e0);
  FUN_140208bae(local_1f0,local_1f8,local_1f4,
                L"Moves this tab out of the sidebar and back to a full tab where it previously was before it was added to the sidebar."
               );
  FUN_14023423e(&local_1e0,local_1f0);
  local_1d0 = 1;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_220 = L"AutoHideTab";
  local_218 = 0xb;
  FUN_1446e940c(local_234,&local_220);
  local_220 = L"TabSidebar";
  local_218 = 10;
  FUN_1446e940c(local_238,&local_220);
  FUN_140208bae(local_230,local_238,local_234,L"Undock from Sidebar");
  FUN_14023423e(&local_220,local_230);
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_278 = local_138;
  local_280 = 0;
  local_288 = 1;
  local_290 = 0;
  local_298 = &local_180;
  FUN_146a0d19c(local_e0,&local_220,&local_1e0,&local_1b8);
  FUN_1449db362(&local_208);
  if (local_220 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_220 + 0x10))();
  }
  if (local_230[0] != (longlong *)0x0) {
    (**(code **)(*local_230[0] + 0x10))();
  }
  FUN_1449db362(&local_1c8);
  uVar4 = local_260;
  if (local_1e0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1e0 + 0x10))();
  }
  if (local_1f0[0] != (longlong *)0x0) {
    (**(code **)(*local_1f0[0] + 0x10))();
  }
  FUN_1449db362(local_150);
  FUN_1449db362(auStack_160);
  FUN_1449db362(local_170);
  FUN_1449db362(&local_180);
  FUN_1449db362(&local_120);
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  FUN_146a0d58a(local_e0);
  FUN_144a5dc74(&local_180);
  local_170[0] = 0;
  local_168 = 0;
  auStack_160[0] = 0;
  FUN_1446ddc76(&local_240,"CloseOptions",1);
  FUN_146a0d4b6(local_e0,local_240,&local_180);
  FUN_1449db362(&local_168);
  if (local_180 != (code *)0x0) {
    (**(code **)(*(longlong *)local_180 + 0x10))();
  }
  FUN_144a5dc74(local_138);
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_180 = FUN_1469dd62e;
  local_178 = 0;
  FUN_1469dd42c(local_250,uVar4,&local_180,local_268);
  FUN_1469ba902(&local_180,local_250);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1e0 = L"CloseTabTooltip";
  local_1d8 = 0xf;
  FUN_1446e940c(local_1f4,&local_1e0);
  local_1e0 = L"TabSidebar";
  local_1d8 = 10;
  FUN_1446e940c(local_1f8,&local_1e0);
  FUN_140208bae(local_1f0,local_1f8,local_1f4,
                L"Close this tab, removing it from the sidebar and its parent tab well.");
  FUN_14023423e(&local_1e0,local_1f0);
  local_1d0 = 1;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_220 = L"CloseTab";
  local_218 = 8;
  FUN_1446e940c(local_234,&local_220);
  local_220 = L"TabSidebar";
  local_218 = 10;
  FUN_1446e940c(local_238,&local_220);
  FUN_140208bae(local_230,local_238,local_234,L"Close Tab");
  FUN_14023423e(&local_220,local_230);
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_278 = local_138;
  local_280 = 0;
  local_288 = 1;
  local_290 = 0;
  local_298 = &local_180;
  FUN_146a0d19c(local_e0,&local_220,&local_1e0,&local_1b8);
  FUN_1449db362(&local_208);
  if (local_220 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_220 + 0x10))();
  }
  if (local_230[0] != (longlong *)0x0) {
    (**(code **)(*local_230[0] + 0x10))();
  }
  FUN_1449db362(&local_1c8);
  if (local_1e0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1e0 + 0x10))();
  }
  if (local_1f0[0] != (longlong *)0x0) {
    (**(code **)(*local_1f0[0] + 0x10))();
  }
  FUN_1449db362(local_150);
  FUN_1449db362(auStack_160);
  FUN_1449db362(local_170);
  FUN_1449db362(&local_180);
  FUN_1449db362(&local_120);
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  FUN_146a0d58a(local_e0);
  uVar4 = local_258;
  FUN_146a0a3c8(local_e0,local_258,0);
  local_e0[0] = &PTR_FUN_149f05160;
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  FUN_1469e534a(local_e0);
  plVar3 = *(longlong **)(local_268 + 8);
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
  if ((local_60 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dc03e FUN_1469dc03e body=197 status=ok
// SIG undefined FUN_1469dc03e(void)

longlong * FUN_1469dc03e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a515e6(*param_1,param_3);
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)param_1[2];
  uVar1 = *(undefined1 *)((longlong *)param_1[2])[1];
  local_30 = *puVar3;
  local_28 = puVar3[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1469f7074(lVar2,param_3,&local_30,uVar1);
  plVar4 = (longlong *)*param_1;
  bVar7 = *(byte *)(plVar4 + 6);
  bVar6 = 0x20;
  if ((bVar7 & 0x10) == 0) {
    cVar5 = (**(code **)(*plVar4 + 0x220))(plVar4);
    bVar6 = cVar5 << 5;
    bVar7 = *(byte *)(plVar4 + 6);
  }
  *(byte *)(plVar4 + 6) = bVar7 & 0xdf | bVar6;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dc104 FUN_1469dc104 body=185 status=ok
// SIG undefined FUN_1469dc104(void)

undefined8 * FUN_1469dc104(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x280) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x278);
    lVar3 = (longlong)*(int *)(param_1 + 0x280) << 5;
    do {
      local_38 = *puVar2;
      local_30 = puVar2[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      cVar1 = FUN_1428f9e74(&local_38);
      if (cVar1 != '\0') {
        if (puVar2 != (undefined8 *)0x0) {
          *param_2 = *puVar2;
          lVar3 = puVar2[1];
          param_2[1] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_2;
        }
        break;
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1469dc1be FUN_1469dc1be body=439 status=ok
// SIG undefined FUN_1469dc1be(void)

void FUN_1469dc1be(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  code *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x2c0) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x2c8);
  if (plVar4 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2c8);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x2c8) = plVar3;
  }
  *(undefined1 *)(param_1 + 0x2d0) = param_3;
  if (*(longlong *)(param_1 + 0x288) != 0) goto LAB_1469dc232;
  local_38 = FUN_1469dd916;
  local_30 = 0;
  FUN_1469dda64(local_48,param_1);
  FUN_14697ef1e(param_1,&local_38,0,local_48);
  plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
  if (plVar3 == (longlong *)0x0) {
    *(code **)(param_1 + 0x288) = local_38;
    plVar4 = *(longlong **)(param_1 + 0x290);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x290) = 0;
LAB_1469dc306:
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
joined_r0x0001469dc333:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(code **)(param_1 + 0x288) = local_38;
    plVar4 = *(longlong **)(param_1 + 0x290);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x0001469dc333;
      }
    }
    else {
      *(longlong **)(param_1 + 0x290) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1469dc306;
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
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
LAB_1469dc232:
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dc376 FUN_1469dc376 body=82 status=ok
// SIG undefined FUN_1469dc376(void)

void FUN_1469dc376(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x20 + *param_1);
  FUN_1469dc62e(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar1) << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1469fd026(param_1);
  return;
}



// FUNCTION 1469dc3c8 FUN_1469dc3c8 body=390 status=ok
// SIG undefined FUN_1469dc3c8(void)

void FUN_1469dc3c8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1469dd718(param_1,&local_38,&local_48);
  if (local_38 != 0) {
    local_58 = local_38;
    local_50 = local_30;
    if (local_30 == (longlong *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x2a0);
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      local_60 = local_30;
      uVar4 = *(undefined8 *)(param_1 + 0x2a0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
    }
    FUN_145901a74(uVar4,local_68);
    local_28 = &local_58;
    FUN_1469fd5f4(param_1 + 0x2b0);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  FUN_146a5c9b2(*param_2);
  FUN_1469dd7f0(param_1);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dc550 FUN_1469dc550 body=221 status=ok
// SIG undefined FUN_1469dc550(void)

void FUN_1469dc550(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1469dd168(param_1,&local_30);
  plVar3 = local_28;
  lVar4 = local_30;
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
      }
    }
  }
  if (lVar4 == 0) {
    FUN_1469dc104(param_1,&local_30);
    if (local_30 != 0) {
      local_40 = local_30;
      local_38 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      FUN_1469dc822(param_1,&local_40,1);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dc62e FUN_1469dc62e body=100 status=ok
// SIG undefined FUN_1469dc62e(void)

void FUN_1469dc62e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001469dc686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469dc692 FUN_1469dc692 body=398 status=ok
// SIG undefined FUN_1469dc692(void)

void FUN_1469dc692(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1469dd718(param_1,&local_38,&local_48);
  if (local_38 != 0) {
    FUN_1469d8812(local_38);
    local_58 = local_38;
    local_50 = local_30;
    if (local_30 == (longlong *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x2a0);
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      local_60 = local_30;
      uVar4 = *(undefined8 *)(param_1 + 0x2a0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
    }
    FUN_145901a74(uVar4,local_68);
    local_28 = &local_58;
    FUN_1469fd5f4(param_1 + 0x2b0);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  FUN_1469dc550(param_1);
  FUN_1469dd7f0(param_1);
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dc822 FUN_1469dc822 body=1992 status=ok
// SIG undefined FUN_1469dc822(void)

void FUN_1469dc822(longlong param_1,code *param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_398 [39];
  undefined1 local_371;
  longlong *local_370;
  float local_368;
  undefined4 local_364;
  float local_360;
  undefined4 local_35c;
  undefined1 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_339;
  code *local_338;
  undefined8 local_330;
  undefined1 *local_328;
  longlong local_320;
  longlong *local_318;
  undefined8 local_308;
  longlong *local_300;
  longlong local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  longlong *plStack_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  float local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0;
  undefined1 local_298 [16];
  int local_288;
  undefined1 local_284;
  undefined8 local_120;
  longlong *local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [32];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_2d8 = *(longlong *)param_2;
  local_2d0 = *(longlong *)(param_2 + 8);
  if (local_2d0 != 0) {
    LOCK();
    *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
    UNLOCK();
  }
  FUN_1469dd718(param_1,&local_2c8,&local_2d8);
  plVar3 = local_2c0;
  lVar4 = local_2c8;
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_2c0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (lVar4 == 0) {
    plVar3 = *(longlong **)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x2d0) = 0;
    fVar16 = *(float *)(param_1 + 0xd0) + -4.0;
    fVar14 = fVar16;
    if (*(char *)(param_1 + 0x298) != '\0') {
      fVar14 = 0.0;
    }
    fVar15 = fVar16;
    if (*(char *)(param_1 + 0x298) != '\x01') {
      fVar15 = 0.0;
    }
    fVar17 = *(float *)(*(longlong *)(param_1 + 0x2a0) + 0xd0);
    FUN_146a58688(*(longlong *)param_2,&local_2c8);
    fVar13 = (float)FUN_1469cdd46(local_2c8,param_2);
    plVar3 = local_2c0;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_2c0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_371 = (undefined1)(param_3 & 0xffffffff);
    lVar4 = *(longlong *)param_2;
    plVar3 = *(longlong **)(param_2 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (0.5 <= fVar13) {
      fVar13 = 0.5;
    }
    plVar11 = *(longlong **)(param_1 + 0x278);
    lVar6 = (longlong)*(int *)(param_1 + 0x280);
    uVar9 = (undefined7)((param_3 & 0xffffffff) >> 8);
    bVar12 = true;
    plVar10 = plVar11;
    if (lVar6 != 0) {
      lVar7 = lVar6 * 0x20;
      local_370 = plVar11 + lVar6 * 4;
      do {
        lVar6 = *plVar11;
        local_2c0 = (longlong *)plVar11[1];
        if (local_2c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
          UNLOCK();
        }
        local_2b8 = plVar11[2];
        local_2b0 = plVar11[3];
        if (local_2b0 != 0) {
          LOCK();
          *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
          UNLOCK();
        }
        local_2c8 = lVar6;
        FUN_1469dc62e(&local_2c8);
        bVar12 = lVar6 != lVar4;
        uVar9 = (undefined7)((ulonglong)lVar6 >> 8);
        plVar10 = plVar11;
        if (lVar6 == lVar4) break;
        plVar11 = plVar11 + 4;
        lVar7 = lVar7 + -0x20;
        plVar10 = local_370;
      } while (lVar7 != 0);
    }
    fVar17 = fVar17 - (fVar14 + fVar15);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    if ((bool)(bVar12 | plVar10 == (longlong *)0x0)) {
      local_2e8 = 0;
      plStack_2e0 = (longlong *)0x0;
    }
    else {
      local_2e8 = plVar10[2];
      plStack_2e0 = (longlong *)plVar10[3];
      if (plStack_2e0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_2e0 + 0xc) = *(int *)((longlong)plStack_2e0 + 0xc) + 1;
        UNLOCK();
      }
    }
    uVar8 = CONCAT71(uVar9,local_371);
    FUN_1469ddbe6(&local_2c8);
    local_338 = FUN_1469dcfec;
    local_330._0_4_ = 0;
    local_110 = fVar16;
    local_10c = fVar17 * 0.5;
    local_108 = fVar13 * fVar17;
    FUN_1469fdd8c(&local_320,param_1,&local_338);
    FUN_144a450dc(local_f0,&local_320);
    FUN_1449db362(&local_320);
    local_338 = FUN_1469dd278;
    local_330._0_4_ = 0;
    FUN_1469fdd8c(&local_320,param_1,&local_338);
    FUN_144a450dc(local_e0,&local_320);
    FUN_1449db362(&local_320);
    local_338 = FUN_1469dd31a;
    local_330 = (longlong *)((ulonglong)local_330._4_4_ << 0x20);
    FUN_1469fe39c(&local_320,param_1,&local_338);
    FUN_144a450dc(local_100,&local_320);
    FUN_1449db362(&local_320);
    FUN_146a58434(*(longlong *)param_2,&local_308);
    plVar3 = local_118;
    if (local_300 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_300 + 1) = (int)local_300[1] + 1;
      UNLOCK();
    }
    local_120 = local_308;
    local_118 = local_300;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    local_339 = *(char *)(param_1 + 0x298) != '\0';
    local_328 = &local_339;
    local_330 = &local_2e8;
    local_338 = param_2;
    FUN_1469fdae2(&local_320);
    FUN_1469ddc6a(&local_320,&local_2f8,&local_2c8);
    if (local_318 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_318 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_318)(local_318);
        LOCK();
        piVar1 = (int *)((longlong)local_318 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_318 + 0x10))(local_318);
        }
      }
    }
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_300 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar1 = (int *)((longlong)local_300 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_300 + 0x10))(local_300);
        }
      }
    }
    FUN_1469ddce2(&local_2c8);
    FUN_140763f46(*(undefined8 *)(param_1 + 0x2a0),&local_2c8,0xffffffff);
    local_364 = 0xc1000000;
    local_35c = 0xc1000000;
    local_358 = 1;
    local_350 = 0;
    uStack_348 = 0;
    local_2a0 = 1;
    local_2b0 = CONCAT44(0xc1000000,fVar14);
    local_2a4 = 0xc1000000;
    local_368 = fVar14;
    local_360 = fVar15;
    local_2a8 = fVar15;
    FUN_144a450dc(local_298,&local_350);
    FUN_1449db362(&local_350);
    bVar12 = *(char *)(param_1 + 0x298) != '\0';
    local_288 = bVar12 + 1 + (uint)bVar12;
    local_284 = 1;
    local_320 = local_2f8;
    local_318 = local_2f0;
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
    }
    FUN_140a4fd40(&local_2c8,&local_320);
    plVar3 = local_318;
    if (local_318 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_318 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_318)(local_318);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1407640b6(&local_2c8);
    lVar4 = local_2f8;
    FUN_1469d8316(local_2f8,uVar8 & 0xffffffff);
    iVar2 = *(int *)(param_1 + 0x2b8);
    *(uint *)(param_1 + 0x2b8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 700) < iVar2 + 1U) {
      FUN_1469fea3c((longlong *)(param_1 + 0x2b0),iVar2);
    }
    lVar6 = *(longlong *)(param_1 + 0x2b0);
    *(longlong *)(lVar6 + (longlong)iVar2 * 0x10) = lVar4;
    *(longlong **)(lVar6 + 8 + (longlong)iVar2 * 0x10) = local_2f0;
    if (local_2f0 == (longlong *)0x0) {
      local_2c8 = lVar4;
      local_2c0 = (longlong *)0x0;
      uVar5 = DAT_14c98e618;
    }
    else {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      uVar5 = DAT_14c98e618;
      UNLOCK();
      local_2c8 = local_2f8;
      local_2c0 = local_2f0;
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
      }
    }
    FUN_140d673ae(uVar5,&local_2c8,2);
    plVar3 = local_2c0;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_2c0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_146a5c994(*(longlong *)param_2);
    FUN_1469dd7f0(param_1);
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_2f0 + 0x10))(local_2f0);
        }
      }
    }
    if (plStack_2e0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_2e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_2e0 + 0x10))();
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_c0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469dcfec FUN_1469dcfec body=357 status=ok
// SIG undefined FUN_1469dcfec(void)

void FUN_1469dcfec(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined8 *)(*param_2 + 0x2e0);
  local_40 = *(longlong *)(*param_2 + 0x2e8);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_1428f9e74(&local_48);
  if (cVar6 != '\0') {
    lVar3 = *(longlong *)(*param_2 + 0x2e0);
    plVar4 = *(longlong **)(*param_2 + 0x2e8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_1469dd168(param_1,&local_58);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
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
    if (local_58 != 0 && local_58 == lVar3) goto LAB_1469dd101;
  }
  local_68 = *(undefined8 *)(*param_2 + 0x2e0);
  local_60 = *(longlong *)(*param_2 + 0x2e8);
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_1469dc692(param_1,&local_68);
LAB_1469dd101:
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dd168 FUN_1469dd168 body=271 status=ok
// SIG undefined FUN_1469dd168(void)

undefined8 * FUN_1469dd168(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x2b8);
  if (lVar8 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2b0);
    lVar7 = lVar8 << 0x20;
    uVar9 = lVar8 * 0x10 - 0x10;
    do {
      lVar7 = lVar7 + -0x100000000;
      cVar6 = FUN_14692f590(*(longlong *)(lVar3 + uVar9) + 0x308);
      if (cVar6 == '\0') {
        lVar8 = *(longlong *)(lVar3 + uVar9) + 0x308;
        cVar6 = FUN_1459b8360(lVar8);
        if ((cVar6 == '\0') || (cVar6 = FUN_14692f5de(lVar8), cVar6 == '\0')) {
          if ((int)(~uVar9 >> 4) != 0) {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (lVar7 >> 0x20) * 0x10);
            uVar4 = *(undefined8 *)(lVar8 + 0x2e0);
            plVar5 = *(longlong **)(lVar8 + 0x2e8);
            if (plVar5 == (longlong *)0x0) {
              *param_2 = uVar4;
              param_2[1] = 0;
              return param_2;
            }
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            *param_2 = uVar4;
            param_2[1] = plVar5;
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) {
              return param_2;
            }
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 != 0) {
              return param_2;
            }
            (**(code **)(*plVar5 + 0x10))(plVar5);
            return param_2;
          }
          break;
        }
      }
      uVar9 = uVar9 - 0x10;
    } while (uVar9 != 0xfffffffffffffff0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1469dd278 FUN_1469dd278 body=144 status=ok
// SIG undefined FUN_1469dd278(void)

void FUN_1469dd278(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(*param_2 + 0x2e0);
  local_20 = *(longlong *)(*param_2 + 0x2e8);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1469dc3c8(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
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



// FUNCTION 1469dd31a FUN_1469dd31a body=272 status=ok
// SIG undefined FUN_1469dd31a(void)

void FUN_1469dd31a(longlong param_1,longlong *param_2,float param_3)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(undefined8 *)(*param_2 + 0x2e0);
  local_38 = *(longlong **)(*param_2 + 0x2e8);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_40 = uVar4;
  pfVar6 = (float *)FUN_144b013ec(*(undefined8 *)(param_1 + 0x2a0));
  fVar3 = *pfVar6;
  FUN_146a58688(uVar4,&local_50);
  FUN_1469cddd8(local_50,&local_40,param_3 / fVar3);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dd42c FUN_1469dd42c body=361 status=ok
// SIG undefined FUN_1469dd42c(void)

longlong * FUN_1469dd42c(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
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
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1469dd4a9:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1469dd4a9;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar13 = iVar8 == iVar7;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_149f04820;
  puVar5[1] = *param_4;
  lVar6 = param_4[1];
  puVar5[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar5[3] = lVar11;
  *puVar5 = &PTR_FUN_149f047b0;
  puVar5[4] = uVar12;
  puVar5[5] = plVar10;
  if (bVar9) {
    puVar5[6] = uVar4;
    *(undefined4 *)(puVar5 + 7) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 7) = uVar3;
    puVar5[6] = uVar4;
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



// FUNCTION 1469dd596 FUN_1469dd596 body=134 status=ok
// SIG undefined FUN_1469dd596(void)

void FUN_1469dd596(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1469c4e32(param_1,&local_28);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
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



// FUNCTION 1469dd62e FUN_1469dd62e body=233 status=ok
// SIG undefined FUN_1469dd62e(void)

void FUN_1469dd62e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_146a56f5e(*param_2);
  if (cVar4 != '\0') {
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1469c5226(param_1,&local_28);
    FUN_146a58688(*param_2,&local_38);
    FUN_1469cce7a(local_38,param_2,1);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dd718 FUN_1469dd718 body=215 status=ok
// SIG undefined FUN_1469dd718(void)

longlong * FUN_1469dd718(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x2b0);
    lVar7 = (longlong)*(int *)(param_1 + 0x2b8) << 4;
    do {
      lVar3 = *(longlong *)(*plVar6 + 0x2e0);
      plVar4 = *(longlong **)(*plVar6 + 0x2e8);
      if (plVar4 == (longlong *)0x0) {
        lVar5 = *param_3;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        lVar5 = *param_3;
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
      if (lVar5 == lVar3) {
        if (plVar6 != (longlong *)0x0) {
          *param_2 = *plVar6;
          lVar7 = plVar6[1];
          param_2[1] = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          goto LAB_1469dd798;
        }
        break;
      }
      plVar6 = plVar6 + 2;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1469dd798:
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_2;
}



// FUNCTION 1469dd7f0 FUN_1469dd7f0 body=270 status=ok
// SIG undefined FUN_1469dd7f0(void)

void FUN_1469dd7f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x2b8) < 1) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + 0x2b0) + -0x10 + (longlong)*(int *)(param_1 + 0x2b8) * 0x10);
    uVar6 = *(undefined8 *)(lVar4 + 0x2e0);
    plVar7 = *(longlong **)(lVar4 + 0x2e8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
      goto LAB_1469dd869;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1469dd869:
  iVar3 = *(int *)(param_1 + 0x280);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x278);
    lVar8 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar4 + 0x10 + lVar8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_48 = uVar6;
      local_40 = plVar7;
      FUN_1469ddd46(uVar5,&local_48);
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar8);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dd916 FUN_1469dd916 body=333 status=ok
// SIG undefined FUN_1469dd916(void)

undefined8 FUN_1469dd916(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0x2c8);
  if (plVar5 != (longlong *)0x0) {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) goto LAB_1469dd9b7;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar10 = iVar8 == iVar7;
      if (bVar10) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar10);
    lVar6 = *(longlong *)(param_1 + 0x2c0);
    bVar10 = true;
    if (lVar6 != 0) {
      fVar3 = *(float *)(*(longlong *)(param_1 + 0x2a0) + 0xd0);
      if ((((fVar3 != 0.0) || (NAN(fVar3))) ||
          (fVar3 = *(float *)(*(longlong *)(param_1 + 0x2a0) + 0xd4), fVar3 != 0.0)) || (NAN(fVar3))
         ) {
        uVar4 = *(undefined1 *)(param_1 + 0x2d0);
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_30 = lVar6;
        local_28 = plVar5;
        FUN_1469dc822(param_1,&local_30,uVar4);
      }
      else {
        bVar10 = false;
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
      }
    }
    uVar9 = 1;
    if (!bVar10) goto LAB_1469dda21;
  }
LAB_1469dd9b7:
  *(undefined8 *)(param_1 + 0x288) = 0;
  plVar5 = *(longlong **)(param_1 + 0x290);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x290) = 0;
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
  plVar5 = *(longlong **)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  uVar9 = 0;
LAB_1469dda21:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1469dda64 FUN_1469dda64 body=386 status=ok
// SIG undefined FUN_1469dda64(void)

longlong * FUN_1469dda64(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1469ddb75:
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f04890;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469ddb75;
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
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f04890;
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



// FUNCTION 1469ddbe6 FUN_1469ddbe6 body=131 status=ok
// SIG undefined FUN_1469ddbe6(void)

longlong FUN_1469ddbe6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0x4020000000000000;
  *(undefined8 *)(param_1 + 0x200) = 0x4020000000000000;
  return param_1;
}



// FUNCTION 1469ddc6a FUN_1469ddc6a body=119 status=ok
// SIG undefined FUN_1469ddc6a(void)

longlong * FUN_1469ddc6a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469fe9ac(param_1[2],*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1469ddce2 FUN_1469ddce2 body=100 status=ok
// SIG undefined FUN_1469ddce2(void)

void FUN_1469ddce2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469ddd46 FUN_1469ddd46 body=654 status=ok
// SIG undefined FUN_1469ddd46(void)

void FUN_1469ddd46(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = *(longlong *)(param_1 + 0x278);
  local_68 = (uint)((*(char *)(param_1 + 0x300) != '\0') != (*param_2 != 0));
  local_64 = 1;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined1 *)(lVar4 + 0x4f4) = 1;
  *(uint *)(lVar4 + 0x4f0) = local_68;
  FUN_1469e5a6c(lVar4 + 0x4f8,&local_60);
  FUN_1449db362(&local_60);
  if (*param_2 == *(longlong *)(param_1 + 0x268)) {
    local_80 = DAT_14c96b23a;
    local_7f = 1;
    local_78 = 0;
    uStack_70 = 0;
    FUN_14020e622(*(undefined8 *)(param_1 + 0x298));
    uVar5 = *(undefined8 *)(param_1 + 0x2a8);
    plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_88,"Docking.SidebarButton.Opened",1);
    uVar7 = FUN_141492734(plVar6,local_88,0,0);
    FUN_145ab4972(uVar5,uVar7);
    cVar3 = *(char *)(param_1 + 0x300);
    uVar5 = *(undefined8 *)(param_1 + 0x298);
    plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = DAT_14c96b350;
    }
    if (cVar3 == '\0') {
      FUN_1446ddc76(&local_b0,"Docking.Sidebar.Border_SquareRight",1);
      uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,local_b0,0,0);
      puVar8 = local_a8;
    }
    else {
      FUN_1446ddc76(&local_d8,"Docking.Sidebar.Border_SquareLeft",1);
      uVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,local_d8,0,0);
      puVar8 = &local_d0;
    }
    *puVar8 = uVar7;
    *(undefined1 *)(puVar8 + 1) = 1;
    puVar8[2] = 0;
    puVar8[3] = 0;
    FUN_145ab4d4e(uVar5);
  }
  else {
    local_f0 = DAT_14c96b1e1;
    local_ef = 1;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_14020e622(*(undefined8 *)(param_1 + 0x298));
    uVar5 = *(undefined8 *)(param_1 + 0x2a8);
    plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_f8,"Docking.SidebarButton.Closed",1);
    uVar7 = FUN_141492734(plVar6,local_f8,0,0);
    FUN_145ab4972(uVar5,uVar7);
  }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ddfd6 FUN_1469ddfd6 body=558 status=ok
// SIG undefined FUN_1469ddfd6(void)

undefined8 * FUN_1469ddfd6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  void *local_68;
  uint local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x78);
      plVar2 = *(longlong **)(lVar8 + 8 + lVar9 * 0x10);
      if (plVar2 != (longlong *)0x0) {
        iVar4 = (int)plVar2[1];
        do {
          if (iVar4 == 0) goto LAB_1469de075;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar10 = iVar4 == iVar5;
          if (bVar10) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          UNLOCK();
        } while (!bVar10);
        plVar3 = *(longlong **)(lVar8 + lVar9 * 0x10);
        bVar10 = false;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x260))(plVar3,&local_58);
          FUN_1469c57e2(plVar3,&local_68);
          iVar4 = local_50;
          lVar8 = (longlong)(int)local_60;
          if (lVar8 != 0) {
            lVar7 = (longlong)local_50;
            iVar5 = local_50 + local_60;
            uVar6 = local_4c - local_50;
            local_50 = iVar5;
            if (uVar6 < local_60) {
              FUN_1469eebc8(&local_58,iVar4);
            }
            memmove((void *)(lVar7 * 0x10 + local_58),local_68,lVar8 << 4);
            local_60 = 0;
          }
          FUN_1469ec9dc(local_68,0);
          if (local_68 != (void *)0x0) {
            FUN_1400020a8();
          }
          bVar10 = false;
          if (0 < local_50) {
            lVar7 = 0;
            lVar8 = 0;
            local_70 = param_2;
            do {
              FUN_146a584e0(*(undefined8 *)(local_58 + lVar7),&local_68);
              param_2 = local_70;
              if (((void *)*param_3 == local_68) &&
                 (((*(uint *)(param_3 + 1) == 0xffffffff || (local_60 == 0xffffffff)) ||
                  (*(uint *)(param_3 + 1) == local_60)))) {
                *local_70 = *(undefined8 *)(local_58 + lVar7);
                lVar8 = *(longlong *)(local_58 + 8 + lVar7);
                local_70[1] = lVar8;
                bVar10 = true;
                if (lVar8 != 0) {
                  LOCK();
                  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                  UNLOCK();
                }
                break;
              }
              lVar8 = lVar8 + 1;
              lVar7 = lVar7 + 0x10;
            } while (lVar8 < local_50);
          }
          FUN_1469ec9dc(local_58,local_50);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
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
        if (bVar10) goto LAB_1469de192;
      }
LAB_1469de075:
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x80));
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1469de192:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469de206 FUN_1469de206 body=90 status=ok
// SIG undefined FUN_1469de206(void)

undefined8 FUN_1469de206(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  
  uVar2 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar3 = FUN_1449baa48(param_1,uVar2,param_2);
  if (iVar3 != -1) {
    lVar1 = *param_1 + (longlong)iVar3 * 0x28;
    plVar4 = (longlong *)(lVar1 + 0x10);
    if ((plVar4 != (longlong *)0x0 && lVar1 != 0) && (*plVar4 != 0)) {
      return CONCAT71((int7)((ulonglong)((longlong)iVar3 * 5) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1469de260 FUN_1469de260 body=287 status=ok
// SIG undefined FUN_1469de260(void)

void FUN_1469de260(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_58 = 0;
  uStack_50 = 0;
  if (0 < *(int *)(lVar1 + 0x80)) {
    lVar5 = 8;
    lVar6 = 0;
    do {
      uVar3 = uStack_50;
      lVar2 = *(longlong *)(lVar1 + 0x78);
      if (((*(longlong *)(lVar2 + -8 + lVar5) != 0) && (*(longlong *)(lVar2 + lVar5) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar2 + lVar5) + 8))) {
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1469feb22(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar7 * 0x10) = *(undefined8 *)(lVar2 + -8 + lVar5);
        lVar2 = *(longlong *)(lVar2 + lVar5);
        *(longlong *)(local_58 + 8 + lVar7 * 0x10) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < *(int *)(lVar1 + 0x80));
  }
  FUN_1469feac2((longlong *)(lVar1 + 0x78),&local_58);
  FUN_1469feba7(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1428f9fbf(*param_1 + 0x78,1);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469de380 FUN_1469de380 body=287 status=ok
// SIG undefined FUN_1469de380(void)

void FUN_1469de380(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_58 = 0;
  uStack_50 = 0;
  if (0 < *(int *)(lVar1 + 0x80)) {
    lVar5 = 8;
    lVar6 = 0;
    do {
      uVar3 = uStack_50;
      lVar2 = *(longlong *)(lVar1 + 0x78);
      if (((*(longlong *)(lVar2 + -8 + lVar5) != 0) && (*(longlong *)(lVar2 + lVar5) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar2 + lVar5) + 8))) {
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1469feb22(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar7 * 0x10) = *(undefined8 *)(lVar2 + -8 + lVar5);
        lVar2 = *(longlong *)(lVar2 + lVar5);
        *(longlong *)(local_58 + 8 + lVar7 * 0x10) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < *(int *)(lVar1 + 0x80));
  }
  FUN_1469feac2((longlong *)(lVar1 + 0x78),&local_58);
  FUN_1469feba7(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1428f9fbf(*param_1 + 0x78,0);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469de4a0 FUN_1469de4a0 body=161 status=ok
// SIG undefined FUN_1469de4a0(void)

void FUN_1469de4a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x158) != 0) && (*(longlong *)(param_1 + 0x160) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x160) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x158);
    local_18 = *(longlong *)(param_1 + 0x160);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469de542 FUN_1469de542 body=115 status=ok
// SIG undefined FUN_1469de542(void)

bool FUN_1469de542(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a584e0(*param_2,&local_28);
  bVar1 = true;
  if (*(longlong *)(param_1 + 0x114) == local_28) {
    if (*(int *)(param_1 + 0x11c) == -1) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(param_1 + 0x11c) != local_20 && local_20 != -1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469de5d4 FUN_1469de5d4 body=829 status=ok
// SIG undefined FUN_1469de5d4(void)

longlong * FUN_1469de5d4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14627f844(param_2,*(undefined8 *)(param_1 + 0xf8));
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar8 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x78);
      plVar3 = *(longlong **)(lVar10 + 8 + lVar8 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_1469de704;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar5 == iVar4;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar11);
        plVar7 = *(longlong **)(lVar10 + lVar8 * 0x10);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          (**(code **)(*plVar7 + 0x280))(plVar7,&local_58);
          if (local_58 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
            plVar9 = (longlong *)0x0;
          }
          else {
            (**(code **)(*local_58 + 0x18))(local_58,&local_68);
            plVar7 = local_60;
            plVar9 = local_68;
          }
          plVar6 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (plVar9 != (longlong *)0x0) {
            lVar10 = *param_2;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            local_58 = plVar9;
            local_50 = plVar7;
            FUN_14608fcfa(lVar10,local_78,&local_58);
            plVar6 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_70 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            plVar6 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            if ((int)plVar9[7] == 0) {
              lVar10 = *param_2;
              plVar6 = *(longlong **)(lVar10 + 0x18);
              if ((*(longlong *)(lVar10 + 0x10) != 0) && (plVar6 == (longlong *)0x0)) {
                plVar6 = (longlong *)0x0;
              }
              *(longlong **)(lVar10 + 0x10) = plVar9;
              if (plVar6 != plVar7) {
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
                  UNLOCK();
                  plVar6 = *(longlong **)(lVar10 + 0x18);
                }
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar6 + 0x10))();
                  }
                }
                *(longlong **)(lVar10 + 0x18) = plVar7;
              }
            }
          }
        }
        LOCK();
        plVar9 = plVar3 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (plVar7 != (longlong *)0x0) {
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
      }
LAB_1469de704:
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x80));
  }
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      FUN_14608fcfa(*param_2,local_88,*(longlong *)(param_1 + 0x88) + lVar10);
      plVar3 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_80 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar8 < *(int *)(param_1 + 0x90));
  }
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      FUN_14608fcfa(*param_2,local_98,*(longlong *)(param_1 + 0x98) + lVar10);
      plVar3 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_90 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar8 < *(int *)(param_1 + 0xa0));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469de912 FUN_1469de912 body=140 status=ok
// SIG undefined FUN_1469de912(void)

void FUN_1469de912(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1469de4a0();
  FUN_1469de5d4(param_1,local_20);
  if ((*(int *)(param_1 + 0x108) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x100), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,local_20);
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_18 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469de9a0 FUN_1469de9a0 body=860 status=ok
// SIG undefined FUN_1469de9a0(void)

undefined8 *
FUN_1469de9a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined1 local_b0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)(param_1 + 0x178);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_1469fede5(*(undefined8 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x180));
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 0x184) != 0) {
    FUN_1469fee1c(plVar3);
  }
  local_88 = *param_3;
  plVar13 = (longlong *)param_3[1];
  local_b8 = &local_68;
  local_80 = plVar13;
  if (plVar13 == (longlong *)0x0) {
    local_b0 = param_5;
    uVar9 = FUN_1469dfd4a(param_1,&local_78,&local_88,param_4);
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_b0 = param_5;
    uVar9 = FUN_1469dfd4a(param_1,&local_78,&local_88,param_4);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar13 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        uVar9 = (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar9 = (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (local_78 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar13 = *(longlong **)(local_78 + 0x10);
    local_90 = param_2;
    if (plVar13 == (longlong *)0x0) {
      local_9c = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
LAB_1469deb43:
      uVar9 = 0;
      plVar13 = (longlong *)0x0;
    }
    else {
      uVar10 = (ulonglong)*(uint *)(plVar13 + 1);
      do {
        uVar8 = (uint)uVar10;
        if (uVar8 == 0) {
          local_9c = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
          goto LAB_1469deb43;
        }
        LOCK();
        uVar4 = *(uint *)(plVar13 + 1);
        if (uVar8 == uVar4) {
          *(uint *)(plVar13 + 1) = uVar8 + 1;
        }
        else {
          uVar10 = (ulonglong)uVar4;
        }
        UNLOCK();
      } while (uVar8 != uVar4);
      uVar9 = *(undefined8 *)(local_78 + 8);
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar13 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      local_9c = 0;
    }
    FUN_1469c2ef8(uVar9,3);
    local_98 = uVar9;
    FUN_1469c570a(uVar9,&local_68);
    if ((longlong)(int)uStack_60 != 0) {
      puVar12 = local_68 + (longlong)(int)uStack_60 * 2;
      puVar11 = local_68;
      do {
        uVar9 = *puVar11;
        lVar6 = puVar11[1];
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
          UNLOCK();
        }
        iVar5 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
          FUN_1469fee4c(plVar3,iVar5);
        }
        lVar7 = *plVar3;
        *(undefined8 *)(lVar7 + (longlong)iVar5 * 0x10) = uVar9;
        *(longlong *)(lVar7 + 8 + (longlong)iVar5 * 0x10) = lVar6;
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar12);
    }
    if ((longlong)(int)uStack_50 != 0) {
      puVar12 = local_58 + (longlong)(int)uStack_50 * 2;
      puVar11 = local_58;
      do {
        uVar9 = *puVar11;
        lVar6 = puVar11[1];
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
          UNLOCK();
        }
        iVar5 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
          FUN_1469fee4c(plVar3,iVar5);
        }
        lVar7 = *plVar3;
        *(undefined8 *)(lVar7 + (longlong)iVar5 * 0x10) = uVar9;
        *(longlong *)(lVar7 + 8 + (longlong)iVar5 * 0x10) = lVar6;
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar12);
    }
    param_2 = local_90;
    *local_90 = local_98;
    local_90[1] = plVar13;
    if ((char)local_9c == '\0') {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar13 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  FUN_1469cd42a(&local_68);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469decfe FUN_1469decfe body=332 status=ok
// SIG undefined FUN_1469decfe(void)

void FUN_1469decfe(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ushort uVar7;
  ushort uVar8;
  
  iVar2 = (int)((ulonglong)param_3 >> 0x20);
  uVar8 = (ushort)((ulonglong)param_3 >> 0x10);
  uVar7 = (ushort)param_3;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             iVar2 + ((int)param_3 << 0x10 | (uint)uVar7) +
                             ((uint)uVar8 << 0x13 | (uint)uVar8) + (uint)(uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20) == param_3) {
          if (lVar5 != 0) {
            puVar6 = (undefined8 *)(lVar5 + 8);
            goto LAB_1469dee2e;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x18);
      } while (iVar3 != -1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    iVar2 + ((int)param_3 << 0x10 | (uint)uVar7) +
                    ((uint)uVar8 << 0x13 | (uint)uVar8) + (uint)(uVar7 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*plVar1 + (longlong)iVar2 * 0x20) == param_3) {
          if ((lVar5 != 0) && (puVar6 = (undefined8 *)(lVar5 + 8), puVar6 != (undefined8 *)0x0)) {
LAB_1469dee2e:
            *param_2 = *puVar6;
            lVar5 = puVar6[1];
            param_2[1] = lVar5;
            if (lVar5 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar2 = *(int *)(lVar5 + 0x18);
      } while (iVar2 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1469dee4a FUN_1469dee4a body=640 status=ok
// SIG undefined FUN_1469dee4a(void)

void FUN_1469dee4a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146a588b8(*param_2);
  if (local_40 != 0) {
    local_48 = *(longlong **)(local_40 + 0x2e8);
    if (local_48 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      local_50 = 0;
    }
    else {
      iVar7 = (int)local_48[1];
      local_50 = 0;
      do {
        if (iVar7 == 0) {
          local_48 = (longlong *)0x0;
          goto LAB_1469deedb;
        }
        LOCK();
        iVar5 = (int)local_48[1];
        bVar9 = iVar7 == iVar5;
        if (bVar9) {
          *(int *)(local_48 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar9);
      local_50 = *(longlong *)(local_40 + 0x2e0);
    }
LAB_1469deedb:
    FUN_14162fdc4();
    if (local_50 != DAT_14c98e9c0) {
      FUN_14162fdc4();
      FUN_1469df0cc(DAT_14c98e9c0,&local_50);
    }
    if (((*(longlong *)(local_40 + 0x2c0) == 0) ||
        (plVar8 = *(longlong **)(local_40 + 0x2c8), plVar8 == (longlong *)0x0)) ||
       ((int)plVar8[1] < 1)) {
LAB_1469def80:
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar8[1];
      do {
        if (iVar7 == 0) goto LAB_1469def80;
        LOCK();
        iVar5 = (int)plVar8[1];
        bVar9 = iVar7 == iVar5;
        if (bVar9) {
          *(int *)(plVar8 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar9);
      lVar3 = *(longlong *)(local_40 + 0x2c0);
      if ((lVar3 != 0) &&
         (((cVar6 = FUN_146980626(lVar3), cVar6 != '\0' ||
           (cVar6 = FUN_1469806a2(lVar3), cVar6 != '\0')) || (0 < *(int *)(DAT_14c98e618 + 0x638))))
         ) {
        FUN_146981248(lVar3,0);
      }
    }
    local_60 = *param_2;
    local_58 = param_2[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_1469c54d4(local_40,&local_60);
    if (cVar6 == '\0') {
      FUN_146a58688(*param_2,&local_70);
      uVar4 = *(undefined8 *)(local_70 + 0x290);
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      FUN_1469ce008(uVar4,&local_30);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_68 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
    }
    FUN_146a5928a(*param_2);
    FUN_14162fdc4();
    FUN_1469c6316(DAT_14c98e9c0,param_2);
    if (plVar8 != (longlong *)0x0) {
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
    }
    plVar8 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_38 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469df0cc FUN_1469df0cc body=347 status=ok
// SIG undefined FUN_1469df0cc(void)

void FUN_1469df0cc(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1469df362(param_1,&local_38,param_2);
  if (local_38 != 0) {
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    (**(code **)*param_1)(param_1,&local_48);
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
    lVar4 = param_1[0x52];
    if (lVar4 != 0) {
      FUN_146a584e0(local_38,local_58);
      cVar6 = FUN_1469e374c(lVar4,local_58);
      if (cVar6 != '\0') {
        puVar5 = (undefined8 *)param_1[0x52];
        local_48 = local_38;
        local_40 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        (**(code **)*puVar5)(puVar5,&local_48);
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
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469df228 FUN_1469df228 body=313 status=ok
// SIG undefined FUN_1469df228(void)

longlong * FUN_1469df228(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_48 [2];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 1;
  FUN_1428fa162();
  lVar3 = *param_2;
  if (lVar3 == 0) goto LAB_1469df30e;
  FUN_146a58938(lVar3,&local_38);
  cVar7 = FUN_146a580ce(lVar3);
  if (((cVar7 == '\0') || (cVar7 = FUN_146a580ce(lVar3), cVar7 == '\x02')) && (local_38 != 0)) {
    FUN_14162fdc4();
    lVar5 = local_38;
    lVar3 = DAT_14c98e9c0;
    plVar4 = *(longlong **)(DAT_14c98e9c0 + 0x230);
    if (plVar4 == (longlong *)0x0) {
LAB_1469df2df:
      if (local_38 != 0) {
LAB_1469df332:
        FUN_146a5ba88(*param_2,local_48);
        FUN_1469d64d8(local_38,local_48);
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
      }
    }
    else {
      iVar8 = (int)plVar4[1];
      do {
        if (iVar8 == 0) goto LAB_1469df2df;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar9 = iVar8 == iVar6;
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar9);
      lVar3 = *(longlong *)(lVar3 + 0x228);
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
      if (lVar5 != lVar3) goto LAB_1469df332;
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1469df30e:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469df362 FUN_1469df362 body=272 status=ok
// SIG undefined FUN_1469df362(void)

undefined8 * FUN_1469df362(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = *(int *)(param_1 + 0x1d0);
  local_50 = param_3;
  if ((longlong)iVar4 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    uVar5 = 0;
    lVar6 = 0;
    do {
      cVar3 = FUN_1469ff968(&local_50,uVar5 + lVar2);
      if (cVar3 != '\0') {
        if ((int)(~uVar5 >> 5) != 0) {
          lVar2 = *(longlong *)(param_1 + 0x1c8);
          lVar7 = (lVar6 >> 0x20) * 0x20;
          *param_2 = 0;
          lVar6 = *(longlong *)(lVar2 + 8 + lVar7);
          param_2[1] = lVar6;
          if (lVar6 == 0) goto LAB_1469df458;
          iVar4 = *(int *)(lVar6 + 8);
          goto LAB_1469df431;
        }
        break;
      }
      lVar6 = lVar6 + 0x100000000;
      uVar5 = uVar5 + 0x20;
    } while ((longlong)iVar4 * 0x20 != uVar5);
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  while( true ) {
    LOCK();
    iVar1 = *(int *)(lVar6 + 8);
    bVar8 = iVar4 == iVar1;
    if (bVar8) {
      *(int *)(lVar6 + 8) = iVar4 + 1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
    UNLOCK();
    if (bVar8) break;
LAB_1469df431:
    if (iVar4 == 0) {
      param_2[1] = 0;
      goto LAB_1469df458;
    }
  }
  if (param_2[1] != 0) {
    *param_2 = *(undefined8 *)(lVar2 + lVar7);
  }
LAB_1469df458:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469df474 FUN_1469df474 body=858 status=ok
// SIG undefined FUN_1469df474(void)

longlong * FUN_1469df474(longlong param_1,longlong *param_2,undefined4 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = 7;
  local_44 = 1;
  iVar5 = FUN_1469df98e();
  if (iVar5 == -1) {
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar7 = (longlong)iVar5 * 0x10;
    local_68 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar7);
    local_60 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 8 + lVar7);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_1469bf126(*(undefined8 *)(param_1 + 0xe8),&local_88);
    local_a8 = param_4;
    FUN_1469de9a0(param_1,&local_78,lVar7 + *(longlong *)(param_1 + 0x88),&local_88);
    plVar6 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_88 = &local_68;
    FUN_1469fec6e(param_1 + 0x88);
    if (local_78 != 0) {
      plStack_90 = *(longlong **)(local_78 + 0x10);
      if (plStack_90 == (longlong *)0x0) {
LAB_1469df6a4:
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        bVar8 = true;
      }
      else {
        iVar5 = (int)plStack_90[1];
        do {
          if (iVar5 == 0) goto LAB_1469df6a4;
          LOCK();
          iVar4 = (int)plStack_90[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(plStack_90 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar8);
        local_98 = *(undefined8 *)(local_78 + 8);
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
        bVar8 = false;
      }
      plVar1 = plStack_90;
      FUN_1469dfac4(&local_88,&local_58,&local_98);
      plVar3 = local_80;
      *param_2 = (longlong)local_88;
      local_88 = (longlong *)0x0;
      plVar6 = (longlong *)param_2[1];
      if (local_80 == plVar6) {
LAB_1469df718:
        plVar6 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_80 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_80)(local_80);
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
      else {
        local_80 = (longlong *)0x0;
        param_2[1] = (longlong)plVar3;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
          goto LAB_1469df718;
        }
      }
      plVar6 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_90 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (!bVar8) {
        LOCK();
        plVar6 = plVar1 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar1)(plVar1);
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    plVar6 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (*param_2 != 0) goto LAB_1469df668;
    plVar6 = (longlong *)param_2[1];
  }
  FUN_1469dfba0(param_1,&local_68,&local_58);
  plVar1 = local_60;
  *param_2 = local_68;
  local_68 = 0;
  if (local_60 != plVar6) {
    local_60 = (longlong *)0x0;
    param_2[1] = (longlong)plVar1;
    if (plVar6 == (longlong *)0x0) goto LAB_1469df668;
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
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1469df668:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469df7d0 FUN_1469df7d0 body=204 status=ok
// SIG undefined FUN_1469df7d0(void)

longlong * FUN_1469df7d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14162fdc4();
  FUN_1469e2518(DAT_14c98e9c0,&local_38,param_2);
  bVar3 = true;
  if ((local_38 != 0) && (*(int *)(local_38 + 0x38) == 2)) {
    *param_1 = local_38;
    param_1[1] = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    bVar3 = false;
  }
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
  if (bVar3) {
    FUN_1469e2354(&local_38,param_2);
    FUN_1469c41f2(param_1,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469df89e FUN_1469df89e body=239 status=ok
// SIG undefined FUN_1469df89e(void)

undefined8 * FUN_1469df89e(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  iVar7 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar7 + 1U) {
    FUN_1469e545e(param_1 + 0x20,iVar7);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar8 = (longlong)iVar7 * 0x20;
  puVar3 = (undefined4 *)(lVar4 + lVar8);
  *puVar3 = local_38;
  puVar3[1] = uStack_34;
  puVar3[2] = uStack_30;
  puVar3[3] = uStack_2c;
  *(undefined4 *)(lVar4 + 0x10 + lVar8) = 1;
  *(undefined1 *)(lVar4 + 0x14 + lVar8) = 2;
  *(undefined4 *)(lVar4 + 0x18 + lVar8) = 0;
  *(undefined1 *)(lVar4 + 0x1c + lVar8) = 0;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_1469df949:
    *param_2 = 0;
    param_2[1] = 0;
LAB_1469df94f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  iVar7 = (int)plVar5[1];
  do {
    if (iVar7 == 0) goto LAB_1469df949;
    LOCK();
    iVar6 = (int)plVar5[1];
    bVar9 = iVar7 == iVar6;
    if (bVar9) {
      *(int *)(plVar5 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar9);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = plVar5;
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
      goto LAB_1469df94f;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469df98e FUN_1469df98e body=309 status=ok
// SIG undefined FUN_1469df98e(void)

ulonglong FUN_1469df98e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar5 = 8;
    uVar7 = 0;
    do {
      local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + -8 + lVar5);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar5);
      local_60 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        FUN_1469e30dc(&local_58,param_2,&local_68);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        FUN_1469e30dc(&local_58,param_2,&local_68);
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
      plVar3 = local_50;
      lVar4 = local_58;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (lVar4 != 0) {
        uVar6 = uVar7 & 0xffffffff;
        break;
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x90));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1469dfac4 FUN_1469dfac4 body=218 status=ok
// SIG undefined FUN_1469dfac4(void)

undefined8 * FUN_1469dfac4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1469e2242(param_3,&local_68);
  lVar2 = local_68;
  uVar4 = (ulonglong)(int)uStack_60;
  if (0 < (longlong)uVar4) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + lVar5);
      cVar3 = FUN_1469cdfa4(uVar1,param_2);
      if (cVar3 != '\0') {
        *param_1 = uVar1;
        lVar2 = *(longlong *)(lVar2 + 8 + lVar5);
        param_1[1] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
          uVar4 = uStack_60 & 0xffffffff;
        }
        goto LAB_1469dfb3a;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 << 4 != lVar5);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1469dfb3a:
  FUN_1469ff3e9(local_68,uVar4 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469dfba0 FUN_1469dfba0 body=391 status=ok
// SIG undefined FUN_1469dfba0(void)

longlong * FUN_1469dfba0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x78);
      plVar4 = *(longlong **)(lVar3 + 8 + lVar8 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_1469dfc2e;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar9 = iVar7 == iVar6;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar9);
        lVar3 = *(longlong *)(lVar3 + lVar8 * 0x10);
        if (lVar3 != 0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_50 = lVar3;
          local_48 = plVar4;
          FUN_1469dfac4(param_2,param_3,&local_50);
          plVar5 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_48 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (*param_2 != 0) {
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
                goto LAB_1469dfcc4;
              }
            }
            if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
              return param_2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          plVar5 = (longlong *)param_2[1];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
        }
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
LAB_1469dfc2e:
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x80));
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1469dfcc4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1469dfd28 FUN_1469dfd28 body=34 status=ok
// SIG undefined FUN_1469dfd28(void)

undefined8 FUN_1469dfd28(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x148) == 0) || (lVar1 = *(longlong *)(param_1 + 0x150), lVar1 == 0))
  {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 8));
  }
  return uVar2;
}



// FUNCTION 1469dfd4a FUN_1469dfd4a body=6120 status=ok
// SIG undefined FUN_1469dfd4a(void)

longlong *
FUN_1469dfd4a(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,byte param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong ****pppplVar7;
  longlong ****pppplVar8;
  longlong *****ppppplVar9;
  longlong *plVar10;
  longlong *****ppppplVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong *****ppppplVar14;
  undefined8 uVar15;
  longlong *****ppppplVar16;
  longlong *****ppppplVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_468 [32];
  longlong ****local_448;
  longlong *local_438;
  longlong ****local_430;
  longlong ****local_428;
  longlong ****local_420;
  longlong *local_418;
  longlong *local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  longlong ****local_3e8;
  longlong ****local_3e0;
  undefined1 local_3d8 [16];
  longlong ****local_3c8;
  longlong ****local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined1 local_3a8 [16];
  longlong ***local_398;
  longlong *plStack_390;
  longlong ****local_388;
  longlong ****local_380;
  longlong ****local_378;
  longlong ****local_370;
  longlong ***local_368;
  longlong *local_360;
  longlong ****local_358;
  longlong ****pppplStack_350;
  longlong ****local_348;
  longlong ****local_340;
  longlong ****local_338;
  longlong ****pppplStack_330;
  longlong ****local_320;
  longlong ****local_318;
  longlong ****local_310;
  longlong ****local_308;
  longlong ****local_300;
  longlong ****local_2f8;
  longlong ****local_2f0;
  longlong ****local_2e8;
  longlong ****local_2e0;
  longlong ****pppplStack_2d8;
  undefined1 local_137;
  undefined1 local_128;
  undefined1 local_ff;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e0;
  undefined1 local_ac;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_468;
  (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_2f0);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_300);
  (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_310);
  pppplVar8 = local_2f8;
  pppplVar7 = local_308;
  if ((longlong *****)local_2f0 == (longlong *****)0x0) {
    if ((longlong *****)local_310 == (longlong *****)0x0) {
      if ((longlong *****)local_300 != (longlong *****)0x0) {
        if ((longlong *****)local_2f8 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
          UNLOCK();
          LOCK();
          ppppplVar17 = (longlong *****)(local_2f8 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**local_2f8)(local_2f8);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar8)[2])(pppplVar8);
            }
          }
        }
        thunk_FUN_140a5071c(&local_2e0);
        local_348 = local_300;
        local_340 = local_2f8;
        if ((longlong *****)local_2f8 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
          UNLOCK();
        }
        local_358 = (longlong ****)&local_348;
        FUN_1469eec4e(&local_338,".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0x741);
        FUN_1469c5fc4(&local_338,&local_320,&local_2e0);
        pppplVar7 = pppplStack_330;
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          ppppplVar17 = (longlong *****)(pppplStack_330 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**pppplStack_330)(pppplStack_330);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        pppplVar7 = local_340;
        if ((longlong *****)local_340 != (longlong *****)0x0) {
          LOCK();
          ppppplVar17 = (longlong *****)(local_340 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**local_340)(local_340);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        FUN_140a4ff8c(&local_2e0);
        *(undefined4 *)(local_320 + 0x4f) = *(undefined4 *)(*param_3 + 0x18);
        (*(code *)(*local_320)[0x53])();
        pppplVar7 = local_2f8;
        local_2e0 = local_300;
        pppplStack_2d8 = local_2f8;
        if ((longlong *****)local_2f8 == (longlong *****)0x0) {
          local_448 = (longlong ****)param_5;
          FUN_1469e1620(param_1,&local_2e0,&local_320,param_4);
        }
        else {
          LOCK();
          *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
          UNLOCK();
          local_448 = (longlong ****)param_5;
          FUN_1469e1620(param_1,&local_2e0,&local_320,param_4);
          if ((longlong *****)pppplVar7 != (longlong *****)0x0) {
            LOCK();
            ppppplVar17 = (longlong *****)(pppplVar7 + 1);
            *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
            UNLOCK();
            if (*(int *)ppppplVar17 == 0) {
              (*(code *)**pppplVar7)(pppplVar7);
              LOCK();
              piVar1 = (int *)((longlong)pppplVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*pppplVar7)[2])(pppplVar7);
              }
            }
          }
        }
        pppplVar7 = local_318;
        *param_2 = (longlong)local_320;
        param_2[1] = (longlong)local_318;
        if ((longlong *****)local_318 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
          UNLOCK();
          if ((longlong *****)local_318 != (longlong *****)0x0) {
            LOCK();
            ppppplVar17 = (longlong *****)(local_318 + 1);
            *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
            UNLOCK();
            if (*(int *)ppppplVar17 == 0) {
              (*(code *)**local_318)(local_318);
              LOCK();
              piVar1 = (int *)((longlong)pppplVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*pppplVar7)[2])(pppplVar7);
              }
            }
          }
        }
        FUN_1469eeec9(0,0);
        goto LAB_1469e065c;
      }
      FUN_1469bed42(&local_2e0);
      FUN_1469bed62(&local_348);
      local_358 = (longlong ****)&local_348;
      FUN_1469ece9a(&local_338,".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0x756);
      FUN_1469bee4e(&local_338,&local_320,&local_2e0);
      pppplVar7 = pppplStack_330;
      if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
        LOCK();
        ppppplVar17 = (longlong *****)(pppplStack_330 + 1);
        *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
        UNLOCK();
        if (*(int *)ppppplVar17 == 0) {
          (*(code *)**pppplStack_330)(pppplStack_330);
          LOCK();
          piVar1 = (int *)((longlong)pppplVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pppplVar7)[2])(pppplVar7);
          }
        }
      }
      pppplVar7 = local_340;
      if (local_340 != (longlong ****)0x0) {
        LOCK();
        plVar10 = (longlong *)(local_340 + 1);
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (*(code *)**local_340)(local_340);
          LOCK();
          piVar1 = (int *)((longlong)pppplVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)((longlong)*pppplVar7 + 0x10))(pppplVar7);
          }
        }
      }
      FUN_140a4ff8c(&local_2e0);
      pppplVar7 = local_320;
      local_348 = (longlong ****)0x0;
      local_340 = (longlong ****)CONCAT35(local_340._5_3_,0x1ffffffff);
      local_448 = (longlong ****)((ulonglong)local_448 & 0xffffffffffffff00);
      FUN_1428faa40(param_1,&local_338,&local_348,param_4);
      local_2e0 = local_338;
      pppplStack_2d8 = pppplStack_330;
      local_338 = (longlong ****)0x0;
      pppplStack_330 = (longlong ****)0x0;
      FUN_1469bd63c(pppplVar7,&local_2e0,0xffffffff,0);
      pppplVar7 = pppplStack_2d8;
      if ((longlong *****)pppplStack_2d8 != (longlong *****)0x0) {
        LOCK();
        ppppplVar17 = (longlong *****)(pppplStack_2d8 + 1);
        *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
        UNLOCK();
        if (*(int *)ppppplVar17 == 0) {
          (*(code *)**pppplStack_2d8)(pppplStack_2d8);
          LOCK();
          piVar1 = (int *)((longlong)pppplVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*pppplVar7)[2])(pppplVar7);
          }
        }
        pppplVar7 = pppplStack_330;
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          ppppplVar17 = (longlong *****)(pppplStack_330 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**pppplStack_330)(pppplStack_330);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
      }
      ppppplVar9 = (longlong *****)local_318;
      *param_2 = (longlong)local_320;
      param_2[1] = (longlong)local_318;
      if ((longlong *****)local_318 == (longlong *****)0x0) goto LAB_1469e065c;
      LOCK();
      *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
      UNLOCK();
      if ((longlong *****)local_318 == (longlong *****)0x0) goto LAB_1469e065c;
      LOCK();
      ppppplVar17 = (longlong *****)(local_318 + 1);
      *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
      UNLOCK();
      if (*(int *)ppppplVar17 != 0) goto LAB_1469e065c;
      (*(code *)**local_318)(local_318);
      LOCK();
      piVar1 = (int *)((longlong)ppppplVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1469e065c;
      pppplVar7 = *ppppplVar9;
    }
    else {
      if (*(int *)(local_310 + 7) == 0) {
        if ((longlong *****)local_308 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
          LOCK();
          ppppplVar17 = (longlong *****)(local_308 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**local_308)(local_308);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
          LOCK();
          ppppplVar17 = (longlong *****)(pppplVar7 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**pppplVar7)(pppplVar7);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        FUN_1469bec34(&local_2e0);
        local_408 = 0;
        uStack_400 = 0;
        FUN_1469bf252(&local_2e0);
        local_128 = 0;
        local_348 = local_310;
        local_340 = local_308;
        if ((longlong *****)local_308 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
        }
        ppppplVar17 = *(longlong ******)(param_1 + 0x10);
        if (ppppplVar17 == (longlong *****)0x0) {
LAB_1469e02df:
          local_358 = (longlong ****)0x0;
          pppplStack_350 = (longlong ****)0x0;
        }
        else {
          iVar6 = *(int *)(ppppplVar17 + 1);
          do {
            if (iVar6 == 0) goto LAB_1469e02df;
            LOCK();
            iVar3 = *(int *)(ppppplVar17 + 1);
            bVar19 = iVar6 == iVar3;
            if (bVar19) {
              *(int *)(ppppplVar17 + 1) = iVar6 + 1;
              iVar3 = iVar6;
            }
            iVar6 = iVar3;
            UNLOCK();
          } while (!bVar19);
          local_358 = *(longlong *****)(param_1 + 8);
          LOCK();
          *(int *)(ppppplVar17 + 1) = *(int *)(ppppplVar17 + 1) + 1;
          UNLOCK();
          LOCK();
          ppppplVar16 = ppppplVar17 + 1;
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          pppplStack_350 = (longlong ****)ppppplVar17;
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**ppppplVar17)(ppppplVar17);
            LOCK();
            piVar1 = (int *)((longlong)ppppplVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*ppppplVar17)[2])(ppppplVar17);
            }
          }
        }
        local_320 = (longlong ****)&local_358;
        local_318 = (longlong ****)&local_348;
        FUN_1469eca5c(&local_338,".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0x725);
        ppppplVar9 = (longlong *****)pppplStack_330;
        ppppplVar17 = (longlong *****)local_338;
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          *(int *)(pppplStack_330 + 1) = *(int *)(pppplStack_330 + 1) + 1;
          UNLOCK();
        }
        FUN_1469beec8(&local_338,local_3f8,&local_2e0);
        if (local_3f0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_3f0 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_3f0)(local_3f0);
            LOCK();
            piVar1 = (int *)((longlong)local_3f0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_3f0 + 0x10))(local_3f0);
            }
          }
        }
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplStack_330 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplStack_330)(pppplStack_330);
            LOCK();
            piVar1 = (int *)((longlong)pppplStack_330 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplStack_330)[2])(pppplStack_330);
            }
          }
        }
        pppplVar7 = pppplStack_350;
        if ((longlong *****)pppplStack_350 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplStack_350 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplStack_350)(pppplStack_350);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        pppplVar7 = local_340;
        if ((longlong *****)local_340 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(local_340 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**local_340)(local_340);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        FUN_1469bef46(&local_2e0);
        pppplVar7 = local_308;
        if (ppppplVar9 == (longlong *****)0x0) {
          pppplStack_2d8 = (longlong ****)0x0;
        }
        else {
          LOCK();
          *(int *)(ppppplVar9 + 1) = *(int *)(ppppplVar9 + 1) + 1;
          UNLOCK();
          pppplStack_2d8 = (longlong ****)ppppplVar9;
          LOCK();
          *(int *)(ppppplVar9 + 1) = *(int *)(ppppplVar9 + 1) + 1;
          UNLOCK();
        }
        local_2e0 = local_338;
        if ((longlong *****)local_308 == (longlong *****)0x0) {
          pppplStack_330 = (longlong ****)0x0;
        }
        else {
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
          pppplStack_330 = local_308;
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
        }
        local_338 = local_310;
        local_448 = (longlong ****)param_5;
        FUN_1469e1620(param_1,&local_338,&local_2e0,param_4);
        pppplVar8 = pppplStack_330;
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplStack_330 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplStack_330)(pppplStack_330);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar8)[2])(pppplVar8);
            }
          }
        }
        if ((longlong *****)pppplVar7 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplVar7 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplVar7)(pppplVar7);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        pppplVar7 = pppplStack_2d8;
        if ((longlong *****)pppplStack_2d8 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplStack_2d8 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplStack_2d8)(pppplStack_2d8);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        if (ppppplVar9 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = ppppplVar9 + 1;
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**ppppplVar9)(ppppplVar9);
            LOCK();
            piVar1 = (int *)((longlong)ppppplVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*ppppplVar9)[2])(ppppplVar9);
            }
          }
        }
        FUN_1469eeec9(0,0);
      }
      else {
        lVar18 = *param_4;
        if (*(int *)(local_310 + 7) == 1) {
          FUN_14627df0c(&local_2e0);
          local_ff = 2;
          pppplVar8 = (longlong ****)local_310[0xb];
          pppplVar7 = (longlong ****)local_310[10];
          local_e0 = *(undefined1 *)(local_310 + 0xc);
          local_448 = (longlong ****)&local_348;
          uVar15 = 0x6f2;
        }
        else {
          FUN_14627df0c(&local_2e0);
          local_ff = 0;
          local_f8 = (float)(double)local_310[9];
          local_fc = (float)(double)local_310[8];
          pppplVar8 = (longlong ****)local_310[0xb];
          pppplVar7 = (longlong ****)local_310[10];
          local_e0 = *(undefined1 *)(local_310 + 0xc);
          local_448 = (longlong ****)&local_358;
          uVar15 = 0x6f7;
        }
        local_f0 = (float)(double)pppplVar8;
        local_f4 = (float)(double)pppplVar7;
        local_ac = 0;
        FUN_1461c0e96(&local_338,"SWindow",
                      ".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",uVar15);
        FUN_1462139ea(&local_338,&local_320,&local_2e0);
        pppplVar7 = pppplStack_330;
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          ppppplVar17 = (longlong *****)(pppplStack_330 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**pppplStack_330)(pppplStack_330);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        FUN_14627e134(&local_2e0);
        pppplVar7 = local_320;
        FUN_14162fdc4();
        FUN_1469d64d8(pppplVar7,DAT_14c98e9c0 + 0x218);
        pppplVar8 = local_308;
        pppplVar7 = local_318;
        if ((longlong *****)local_318 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
          UNLOCK();
        }
        if ((longlong *****)local_308 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
          LOCK();
          ppppplVar17 = (longlong *****)(local_308 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**local_308)(local_308);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar8)[2])(pppplVar8);
            }
          }
          LOCK();
          ppppplVar17 = (longlong *****)(pppplVar8 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**pppplVar8)(pppplVar8);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar8)[2])(pppplVar8);
            }
          }
        }
        if ((longlong *****)pppplVar7 != (longlong *****)0x0) {
          LOCK();
          ppppplVar17 = (longlong *****)(pppplVar7 + 1);
          *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
          UNLOCK();
          if (*(int *)ppppplVar17 == 0) {
            (*(code *)**pppplVar7)(pppplVar7);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        pppplVar7 = local_320;
        FUN_1469bec34(&local_2e0);
        local_378 = local_320;
        local_370 = local_318;
        if ((longlong *****)local_318 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
          UNLOCK();
        }
        FUN_1469bf252(&local_2e0,&local_378);
        local_388 = local_310;
        local_380 = local_308;
        if ((longlong *****)local_308 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
        }
        plVar10 = *(longlong **)(param_1 + 0x10);
        if (plVar10 == (longlong *)0x0) {
LAB_1469e0ae9:
          local_398 = (longlong ***)0x0;
          plStack_390 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar10[1];
          do {
            if (iVar6 == 0) goto LAB_1469e0ae9;
            LOCK();
            iVar3 = (int)plVar10[1];
            bVar19 = iVar6 == iVar3;
            if (bVar19) {
              *(int *)(plVar10 + 1) = iVar6 + 1;
              iVar3 = iVar6;
            }
            iVar6 = iVar3;
            UNLOCK();
          } while (!bVar19);
          local_398 = *(longlong ****)(param_1 + 8);
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          plStack_390 = plVar10;
          if ((int)*plVar2 == 0) {
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
        local_358 = &local_398;
        pppplStack_350 = (longlong ****)&local_388;
        FUN_1469eca5c(&local_338,".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0x704);
        ppppplVar9 = (longlong *****)pppplStack_330;
        ppppplVar17 = (longlong *****)local_338;
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          *(int *)(pppplStack_330 + 1) = *(int *)(pppplStack_330 + 1) + 1;
          UNLOCK();
        }
        FUN_1469beec8(&local_338,&local_348,&local_2e0);
        local_368 = (longlong ***)local_348;
        local_360 = (longlong *)local_340;
        if (local_340 == (longlong ****)0x0) {
          FUN_140763be6(pppplVar7,&local_368);
        }
        else {
          LOCK();
          *(int *)(local_340 + 1) = (int)local_340[1] + 1;
          UNLOCK();
          FUN_140763be6(pppplVar7,&local_368);
          if (local_340 != (longlong ****)0x0) {
            LOCK();
            plVar10 = (longlong *)(local_340 + 1);
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (*(code *)**local_340)(local_340);
              LOCK();
              piVar1 = (int *)((longlong)local_340 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)((longlong)*local_340 + 0x10))(local_340);
              }
            }
          }
        }
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplStack_330 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplStack_330)(pppplStack_330);
            LOCK();
            piVar1 = (int *)((longlong)pppplStack_330 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplStack_330)[2])(pppplStack_330);
            }
          }
        }
        plVar10 = plStack_390;
        if (plStack_390 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_390 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_390)(plStack_390);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        pppplVar7 = local_380;
        if ((longlong *****)local_380 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(local_380 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**local_380)(local_380);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        FUN_1469bef46(&local_2e0);
        pppplVar7 = local_308;
        local_2e0 = local_320;
        pppplStack_2d8 = local_318;
        if ((longlong *****)local_318 != (longlong *****)0x0) {
          LOCK();
          *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
          UNLOCK();
        }
        if (ppppplVar9 == (longlong *****)0x0) {
          pppplStack_330 = (longlong ****)0x0;
        }
        else {
          LOCK();
          *(int *)(ppppplVar9 + 1) = *(int *)(ppppplVar9 + 1) + 1;
          UNLOCK();
          LOCK();
          *(int *)(ppppplVar9 + 1) = *(int *)(ppppplVar9 + 1) + 1;
          UNLOCK();
          pppplStack_330 = (longlong ****)ppppplVar9;
        }
        if ((longlong *****)local_308 == (longlong *****)0x0) {
          local_340 = (longlong ****)0x0;
        }
        else {
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
          local_340 = local_308;
          LOCK();
          *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
          UNLOCK();
        }
        local_348 = local_310;
        local_448 = (longlong ****)param_5;
        FUN_1469e1620(param_1,&local_348,&local_338,&local_2e0);
        pppplVar8 = local_340;
        if ((longlong *****)local_340 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(local_340 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**local_340)(local_340);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar8)[2])(pppplVar8);
            }
          }
        }
        if ((longlong *****)pppplVar7 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplVar7 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplVar7)(pppplVar7);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        pppplVar7 = pppplStack_330;
        if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplStack_330 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplStack_330)(pppplStack_330);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        if (ppppplVar9 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = ppppplVar9 + 1;
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**ppppplVar9)(ppppplVar9);
            LOCK();
            piVar1 = (int *)((longlong)ppppplVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*ppppplVar9)[2])(ppppplVar9);
            }
          }
        }
        pppplVar7 = pppplStack_2d8;
        if ((longlong *****)pppplStack_2d8 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(pppplStack_2d8 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**pppplStack_2d8)(pppplStack_2d8);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
        plVar10 = DAT_14c98e618;
        if (lVar18 == 0) {
          local_3e8 = local_320;
          local_3e0 = local_318;
          if ((longlong *****)local_318 != (longlong *****)0x0) {
            LOCK();
            *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
            UNLOCK();
          }
          puVar12 = local_3d8;
          (**(code **)(*plVar10 + 0x10))(plVar10,puVar12,&local_3e8,1);
LAB_1469e1016:
          plVar10 = *(longlong **)(puVar12 + 8);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar10 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
        else {
          iVar6 = (*(code *)(*ppppplVar17)[0x4d])(ppppplVar17);
          plVar10 = DAT_14c98e618;
          if ((iVar6 < 1 & (param_6 ^ 1)) == 0) {
            local_3b8 = *param_4;
            local_3b0 = param_4[1];
            if (local_3b0 != 0) {
              LOCK();
              *(int *)(local_3b0 + 8) = *(int *)(local_3b0 + 8) + 1;
              UNLOCK();
            }
            local_3c8 = local_320;
            local_3c0 = local_318;
            if ((longlong *****)local_318 != (longlong *****)0x0) {
              LOCK();
              *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
              UNLOCK();
            }
            local_448 = (longlong ****)CONCAT71(local_448._1_7_,1);
            puVar12 = local_3a8;
            FUN_1469a8322(plVar10,puVar12,&local_3c8,&local_3b8);
            goto LAB_1469e1016;
          }
        }
        FUN_1469eeec9(0,0);
        pppplVar7 = local_318;
        if ((longlong *****)local_318 != (longlong *****)0x0) {
          LOCK();
          ppppplVar16 = (longlong *****)(local_318 + 1);
          *(int *)ppppplVar16 = *(int *)ppppplVar16 + -1;
          UNLOCK();
          if (*(int *)ppppplVar16 == 0) {
            (*(code *)**local_318)(local_318);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar7)[2])(pppplVar7);
            }
          }
        }
      }
      *param_2 = (longlong)ppppplVar17;
      param_2[1] = (longlong)ppppplVar9;
      if (ppppplVar9 == (longlong *****)0x0) goto LAB_1469e065c;
      LOCK();
      *(int *)(ppppplVar9 + 1) = *(int *)(ppppplVar9 + 1) + 1;
      UNLOCK();
      LOCK();
      ppppplVar17 = ppppplVar9 + 1;
      *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
      UNLOCK();
      if (*(int *)ppppplVar17 != 0) goto LAB_1469e065c;
      (*(code *)**ppppplVar9)(ppppplVar9);
      LOCK();
      piVar1 = (int *)((longlong)ppppplVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1469e065c;
      pppplVar7 = *ppppplVar9;
    }
  }
  else {
    local_410 = param_2;
    FUN_1469bed42(&local_2e0);
    local_137 = *(undefined1 *)((longlong)local_2f0 + 0x4c);
    local_348 = local_2f0;
    local_340 = local_2e8;
    if ((longlong *****)local_2e8 != (longlong *****)0x0) {
      LOCK();
      *(int *)(local_2e8 + 1) = *(int *)(local_2e8 + 1) + 1;
      UNLOCK();
    }
    local_358 = (longlong ****)&local_348;
    FUN_1469ece9a(&local_338,".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0x6a0);
    FUN_1469bee4e(&local_338,&local_320,&local_2e0);
    ppppplVar16 = (longlong *****)local_318;
    ppppplVar17 = (longlong *****)local_320;
    if ((longlong *****)local_318 != (longlong *****)0x0) {
      LOCK();
      *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
      UNLOCK();
      if ((longlong *****)local_318 != (longlong *****)0x0) {
        LOCK();
        ppppplVar9 = (longlong *****)(local_318 + 1);
        *(int *)ppppplVar9 = *(int *)ppppplVar9 + -1;
        UNLOCK();
        if (*(int *)ppppplVar9 == 0) {
          (*(code *)**local_318)(local_318);
          LOCK();
          piVar1 = (int *)((longlong)ppppplVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppppplVar16)[2])(ppppplVar16);
          }
        }
      }
    }
    pppplVar7 = pppplStack_330;
    if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
      LOCK();
      ppppplVar9 = (longlong *****)(pppplStack_330 + 1);
      *(int *)ppppplVar9 = *(int *)ppppplVar9 + -1;
      UNLOCK();
      if (*(int *)ppppplVar9 == 0) {
        (*(code *)**pppplStack_330)(pppplStack_330);
        LOCK();
        piVar1 = (int *)((longlong)pppplVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppplVar7)[2])(pppplVar7);
        }
      }
    }
    pppplVar7 = local_340;
    if ((longlong *****)local_340 != (longlong *****)0x0) {
      LOCK();
      ppppplVar9 = (longlong *****)(local_340 + 1);
      *(int *)ppppplVar9 = *(int *)ppppplVar9 + -1;
      UNLOCK();
      if (*(int *)ppppplVar9 == 0) {
        (*(code *)**local_340)(local_340);
        LOCK();
        piVar1 = (int *)((longlong)pppplVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppplVar7)[2])(pppplVar7);
        }
      }
    }
    FUN_140a4ff8c(&local_2e0);
    *(undefined4 *)(ppppplVar17 + 0x4f) = *(undefined4 *)(*param_3 + 0x18);
    (*(code *)(*ppppplVar17)[0x53])(ppppplVar17);
    if ((longlong)*(int *)(local_2f0 + 5) == 0) {
      ppppplVar9 = (longlong *****)0x0;
    }
    else {
      pppplVar7 = (longlong ****)local_2f0[4];
      lVar18 = (longlong)*(int *)(local_2f0 + 5) << 5;
      ppppplVar9 = (longlong *****)0x0;
      local_428 = (longlong ****)0x0;
      ppppplVar11 = ppppplVar16;
      local_438 = param_4;
      do {
        ppppplVar16 = ppppplVar11;
        if (((*(int *)(pppplVar7 + 2) == 4) || (*(int *)(pppplVar7 + 2) == 1)) &&
           (cVar5 = FUN_1469e1534(param_1,pppplVar7), cVar5 != '\0')) {
          local_448 = (longlong ****)CONCAT71(local_448._1_7_,1);
          FUN_1428faa40(param_1,&local_320,pppplVar7,local_438);
          pppplVar8 = local_320;
          if ((longlong *****)local_320 != (longlong *****)0x0) {
            if ((*pppplVar7 == *(longlong ****)((longlong)local_2f0 + 0x34)) &&
               (((*(int *)(pppplVar7 + 1) == -1 || (*(int *)((longlong)local_2f0 + 0x3c) == -1)) ||
                (*(int *)(pppplVar7 + 1) == *(int *)((longlong)local_2f0 + 0x3c))))) {
              if ((longlong *****)local_318 != (longlong *****)0x0) {
                LOCK();
                *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
                UNLOCK();
              }
              if (ppppplVar9 != (longlong *****)0x0) {
                LOCK();
                ppppplVar14 = ppppplVar9 + 1;
                *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
                UNLOCK();
                if (*(int *)ppppplVar14 == 0) {
                  local_430 = local_318;
                  (*(code *)**ppppplVar9)(ppppplVar9);
                  LOCK();
                  piVar1 = (int *)((longlong)ppppplVar9 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*ppppplVar9)[2])(ppppplVar9);
                  }
                  local_428 = pppplVar8;
                  ppppplVar9 = (longlong *****)local_430;
                  goto LAB_1469e1196;
                }
              }
              local_428 = local_320;
              ppppplVar9 = (longlong *****)local_318;
            }
LAB_1469e1196:
            if (ppppplVar17 == (longlong *****)0x0) {
              FUN_1469bed42(&local_2e0);
              local_358 = local_2f0;
              pppplStack_350 = local_2e8;
              if ((longlong *****)local_2e8 != (longlong *****)0x0) {
                LOCK();
                *(int *)(local_2e8 + 1) = *(int *)(local_2e8 + 1) + 1;
                UNLOCK();
              }
              local_388 = (longlong ****)&local_358;
              FUN_1469ece9a(&local_338,".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",
                            0x6ba,&local_388);
              FUN_1469bee4e(&local_338,&local_348,&local_2e0);
              pppplVar8 = local_340;
              ppppplVar17 = (longlong *****)local_348;
              if ((longlong *****)local_340 != (longlong *****)0x0) {
                LOCK();
                *(int *)(local_340 + 1) = *(int *)(local_340 + 1) + 1;
                UNLOCK();
              }
              if ((longlong *****)local_340 == ppppplVar11) {
                if (ppppplVar11 == (longlong *****)0x0) {
                  ppppplVar16 = (longlong *****)0x0;
                }
                else {
                  LOCK();
                  ppppplVar14 = (longlong *****)(local_340 + 1);
                  *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
                  UNLOCK();
                  if (*(int *)ppppplVar14 == 0) {
                    (*(code *)**local_340)(local_340);
                    LOCK();
                    piVar1 = (int *)((longlong)pppplVar8 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar6 = *piVar1;
                    UNLOCK();
                    ppppplVar14 = (longlong *****)pppplVar8;
joined_r0x0001469e1285:
                    ppppplVar16 = ppppplVar11;
                    if (iVar6 == 0) {
                      (*(code *)(*ppppplVar14)[2])();
                    }
                  }
                }
              }
              else {
                ppppplVar16 = (longlong *****)local_340;
                if (ppppplVar11 != (longlong *****)0x0) {
                  LOCK();
                  ppppplVar14 = ppppplVar11 + 1;
                  *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
                  UNLOCK();
                  if (*(int *)ppppplVar14 == 0) {
                    (*(code *)**ppppplVar11)(ppppplVar11);
                    LOCK();
                    piVar1 = (int *)((longlong)ppppplVar11 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    iVar6 = *piVar1;
                    UNLOCK();
                    ppppplVar14 = ppppplVar11;
                    ppppplVar11 = (longlong *****)pppplVar8;
                    goto joined_r0x0001469e1285;
                  }
                }
              }
              pppplVar8 = local_340;
              if ((longlong *****)local_340 != (longlong *****)0x0) {
                LOCK();
                ppppplVar11 = (longlong *****)(local_340 + 1);
                *(int *)ppppplVar11 = *(int *)ppppplVar11 + -1;
                UNLOCK();
                if (*(int *)ppppplVar11 == 0) {
                  (*(code *)**local_340)(local_340);
                  LOCK();
                  piVar1 = (int *)((longlong)pppplVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pppplVar8)[2])(pppplVar8);
                  }
                }
              }
              pppplVar8 = pppplStack_330;
              if ((longlong *****)pppplStack_330 != (longlong *****)0x0) {
                LOCK();
                ppppplVar11 = (longlong *****)(pppplStack_330 + 1);
                *(int *)ppppplVar11 = *(int *)ppppplVar11 + -1;
                UNLOCK();
                if (*(int *)ppppplVar11 == 0) {
                  (*(code *)**pppplStack_330)(pppplStack_330);
                  LOCK();
                  piVar1 = (int *)((longlong)pppplVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pppplVar8)[2])(pppplVar8);
                  }
                }
              }
              pppplVar8 = pppplStack_350;
              if ((longlong *****)pppplStack_350 != (longlong *****)0x0) {
                LOCK();
                ppppplVar11 = (longlong *****)(pppplStack_350 + 1);
                *(int *)ppppplVar11 = *(int *)ppppplVar11 + -1;
                UNLOCK();
                if (*(int *)ppppplVar11 == 0) {
                  (*(code *)**pppplStack_350)(pppplStack_350);
                  LOCK();
                  piVar1 = (int *)((longlong)pppplVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pppplVar8)[2])(pppplVar8);
                  }
                }
              }
              FUN_140a4ff8c(&local_2e0);
              *(undefined4 *)(ppppplVar17 + 0x4f) = *(undefined4 *)(*param_3 + 0x18);
              (*(code *)(*ppppplVar17)[0x53])(ppppplVar17);
            }
            pppplVar8 = local_318;
            if (*(int *)(pppplVar7 + 2) == 1) {
              local_2e0 = local_320;
              pppplStack_2d8 = local_318;
              if ((longlong *****)local_318 != (longlong *****)0x0) {
                LOCK();
                *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
                UNLOCK();
              }
              FUN_1469cd470(ppppplVar17,&local_2e0,0xffffffff,0);
              ppppplVar11 = (longlong *****)pppplStack_2d8;
              if ((longlong *****)pppplStack_2d8 != (longlong *****)0x0) {
                LOCK();
                ppppplVar14 = (longlong *****)(pppplStack_2d8 + 1);
                *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
                UNLOCK();
                if (*(int *)ppppplVar14 == 0) {
                  (*(code *)**pppplStack_2d8)(pppplStack_2d8);
                  LOCK();
                  piVar1 = (int *)((longlong)ppppplVar11 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    pppplVar8 = *ppppplVar11;
LAB_1469e14c6:
                    (*(code *)pppplVar8[2])(ppppplVar11);
                  }
                }
              }
            }
            else {
              if ((longlong *****)local_318 != (longlong *****)0x0) {
                LOCK();
                *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
                UNLOCK();
              }
              local_2e0 = ppppplVar17[0x52];
              pppplStack_2d8 = ppppplVar17[0x53];
              if ((longlong *****)pppplStack_2d8 != (longlong *****)0x0) {
                LOCK();
                *(int *)(pppplStack_2d8 + 1) = *(int *)(pppplStack_2d8 + 1) + 1;
                UNLOCK();
              }
              FUN_146a584ee(local_320,&local_2e0);
              if ((longlong *****)pppplVar8 != (longlong *****)0x0) {
                LOCK();
                ppppplVar11 = (longlong *****)(pppplVar8 + 1);
                *(int *)ppppplVar11 = *(int *)ppppplVar11 + -1;
                UNLOCK();
                if (*(int *)ppppplVar11 == 0) {
                  (*(code *)**pppplVar8)(pppplVar8);
                  LOCK();
                  piVar1 = (int *)((longlong)pppplVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (*(code *)(*pppplVar8)[2])(pppplVar8);
                  }
                }
              }
              ppppplVar11 = (longlong *****)local_318;
              ppppplVar14 = (longlong *****)local_320;
              if (*(char *)((longlong)pppplVar7 + 0x14) == '\0') {
                if ((longlong *****)local_318 != (longlong *****)0x0) {
                  LOCK();
                  *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
                  UNLOCK();
                }
                iVar6 = (int)param_5[1];
                lVar13 = (longlong)iVar6;
                *(uint *)(param_5 + 1) = iVar6 + 1U;
                plVar10 = param_5;
                if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
                  local_430 = local_318;
                  local_420 = local_320;
                  FUN_1469eebc8(param_5,iVar6);
                  ppppplVar11 = (longlong *****)local_430;
                  ppppplVar14 = (longlong *****)local_420;
                }
              }
              else {
                if ((longlong *****)local_318 != (longlong *****)0x0) {
                  LOCK();
                  *(int *)(local_318 + 1) = *(int *)(local_318 + 1) + 1;
                  UNLOCK();
                }
                plVar10 = param_5 + 2;
                iVar6 = (int)param_5[3];
                lVar13 = (longlong)iVar6;
                *(uint *)(param_5 + 3) = iVar6 + 1U;
                if (*(uint *)((longlong)param_5 + 0x1c) < iVar6 + 1U) {
                  local_430 = local_318;
                  local_420 = local_320;
                  local_418 = plVar10;
                  FUN_1469eebc8(plVar10,iVar6);
                  plVar10 = local_418;
                  ppppplVar11 = (longlong *****)local_430;
                  ppppplVar14 = (longlong *****)local_420;
                }
              }
              lVar4 = *plVar10;
              *(longlong ******)(lVar4 + lVar13 * 0x10) = ppppplVar14;
              *(longlong ******)(lVar4 + 8 + lVar13 * 0x10) = ppppplVar11;
              if (ppppplVar11 != (longlong *****)0x0) {
                LOCK();
                *(int *)(ppppplVar11 + 1) = *(int *)(ppppplVar11 + 1) + 1;
                UNLOCK();
                LOCK();
                ppppplVar14 = ppppplVar11 + 1;
                *(int *)ppppplVar14 = *(int *)ppppplVar14 + -1;
                UNLOCK();
                if (*(int *)ppppplVar14 == 0) {
                  (*(code *)**ppppplVar11)(ppppplVar11);
                  LOCK();
                  piVar1 = (int *)((longlong)ppppplVar11 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    pppplVar8 = *ppppplVar11;
                    goto LAB_1469e14c6;
                  }
                }
              }
            }
          }
          pppplVar8 = local_318;
          if ((longlong *****)local_318 != (longlong *****)0x0) {
            LOCK();
            ppppplVar11 = (longlong *****)(local_318 + 1);
            *(int *)ppppplVar11 = *(int *)ppppplVar11 + -1;
            UNLOCK();
            if (*(int *)ppppplVar11 == 0) {
              (*(code *)**local_318)(local_318);
              LOCK();
              piVar1 = (int *)((longlong)pppplVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*pppplVar8)[2])(pppplVar8);
              }
            }
          }
        }
        pppplVar8 = local_428;
        pppplVar7 = pppplVar7 + 4;
        lVar18 = lVar18 + -0x20;
        ppppplVar11 = ppppplVar16;
      } while (lVar18 != 0);
      if ((longlong *****)local_428 != (longlong *****)0x0) {
        FUN_146a565d8(local_428,1);
        cVar5 = FUN_146a580ce(pppplVar8);
        if (((cVar5 == '\0') || (cVar5 = FUN_146a580ce(pppplVar8), cVar5 == '\x02')) &&
           (*local_438 != 0)) {
          FUN_14162fdc4();
          lVar18 = DAT_14c98e9c0;
          plVar10 = *(longlong **)(DAT_14c98e9c0 + 0x230);
          if (plVar10 == (longlong *)0x0) {
LAB_1469e0792:
            if (*local_438 != 0) {
LAB_1469e07a1:
              lVar18 = *local_438;
              FUN_146a5ba88(pppplVar8,&local_2e0);
              FUN_1469d64d8(lVar18,&local_2e0);
              if ((longlong *****)local_2e0 != (longlong *****)0x0) {
                (*(code *)(*local_2e0)[2])();
              }
            }
          }
          else {
            iVar6 = (int)plVar10[1];
            do {
              if (iVar6 == 0) goto LAB_1469e0792;
              LOCK();
              iVar3 = (int)plVar10[1];
              bVar19 = iVar6 == iVar3;
              if (bVar19) {
                *(int *)(plVar10 + 1) = iVar6 + 1;
                iVar3 = iVar6;
              }
              iVar6 = iVar3;
              UNLOCK();
            } while (!bVar19);
            lVar18 = *(longlong *)(lVar18 + 0x228);
            lVar13 = *local_438;
            LOCK();
            plVar2 = plVar10 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
            if (lVar13 != lVar18) goto LAB_1469e07a1;
          }
        }
      }
    }
    param_2 = local_410;
    *local_410 = (longlong)ppppplVar17;
    local_410[1] = (longlong)ppppplVar16;
    if (ppppplVar16 != (longlong *****)0x0) {
      LOCK();
      *(int *)(ppppplVar16 + 1) = *(int *)(ppppplVar16 + 1) + 1;
      UNLOCK();
      LOCK();
      ppppplVar17 = ppppplVar16 + 1;
      *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
      UNLOCK();
      if (*(int *)ppppplVar17 == 0) {
        (*(code *)**ppppplVar16)(ppppplVar16);
        LOCK();
        piVar1 = (int *)((longlong)ppppplVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppppplVar16)[2])(ppppplVar16);
        }
      }
    }
    if (ppppplVar9 == (longlong *****)0x0) goto LAB_1469e065c;
    LOCK();
    ppppplVar17 = ppppplVar9 + 1;
    *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
    UNLOCK();
    if (*(int *)ppppplVar17 != 0) goto LAB_1469e065c;
    (*(code *)**ppppplVar9)(ppppplVar9);
    LOCK();
    piVar1 = (int *)((longlong)ppppplVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1469e065c;
    pppplVar7 = *ppppplVar9;
  }
  (*(code *)pppplVar7[2])(ppppplVar9);
LAB_1469e065c:
  if ((longlong *****)local_308 != (longlong *****)0x0) {
    LOCK();
    ppppplVar17 = (longlong *****)(local_308 + 1);
    *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
    UNLOCK();
    if (*(int *)ppppplVar17 == 0) {
      (*(code *)**local_308)(local_308);
      LOCK();
      piVar1 = (int *)((longlong)local_308 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_308)[2])(local_308);
      }
    }
  }
  if ((longlong *****)local_2f8 != (longlong *****)0x0) {
    LOCK();
    ppppplVar17 = (longlong *****)(local_2f8 + 1);
    *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
    UNLOCK();
    if (*(int *)ppppplVar17 == 0) {
      (*(code *)**local_2f8)(local_2f8);
      LOCK();
      piVar1 = (int *)((longlong)local_2f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_2f8)[2])(local_2f8);
      }
    }
  }
  if ((longlong *****)local_2e8 != (longlong *****)0x0) {
    LOCK();
    ppppplVar17 = (longlong *****)(local_2e8 + 1);
    *(int *)ppppplVar17 = *(int *)ppppplVar17 + -1;
    UNLOCK();
    if (*(int *)ppppplVar17 == 0) {
      (*(code *)**local_2e8)(local_2e8);
      LOCK();
      piVar1 = (int *)((longlong)local_2e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_2e8)[2])(local_2e8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e1534 FUN_1469e1534 body=235 status=ok
// SIG undefined FUN_1469e1534(void)

ulonglong FUN_1469e1534(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  
  cVar4 = FUN_1428fa0de();
  if (cVar4 == '\0') {
LAB_1469e1614:
    uVar5 = 0;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x68);
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
      lVar2 = *param_2;
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar9 = (uint)lVar2 & 0xffff;
      plVar7 = plVar8 + 7;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar8[8];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)plVar8[9] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *plVar8 + (longlong)iVar6 * 0x20;
          if (*(longlong *)(*plVar8 + (longlong)iVar6 * 0x20) == lVar2) {
            plVar8 = (longlong *)(lVar1 + 8);
            if ((plVar8 != (longlong *)0x0 && lVar1 != 0) &&
               (cVar4 = FUN_1469dfd28(*plVar8), cVar4 != '\0')) {
              if ((*(int *)(*plVar8 + 0x120) != 0) &&
                 (plVar8 = *(longlong **)(*plVar8 + 0x118), plVar8 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001469e1610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (**(code **)(*plVar8 + 0x30))();
                return uVar5;
              }
              goto LAB_1469e1614;
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x18);
        } while (iVar6 != -1);
      }
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1469e1620 FUN_1469e1620 body=513 status=ok
// SIG undefined FUN_1469e1620(void)

void FUN_1469e1620(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *param_2;
  local_a0 = param_3;
  if (0 < *(int *)(lVar6 + 0x30)) {
    lVar7 = 0;
    do {
      local_70 = *(undefined8 *)(*(longlong *)(lVar6 + 0x28) + lVar7 * 0x10);
      local_68 = *(longlong **)(*(longlong *)(lVar6 + 0x28) + 8 + lVar7 * 0x10);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      local_b8 = param_5;
      local_b0 = 0;
      FUN_1469dfd4a(param_1,&local_80,&local_70,param_4);
      if (local_80 != 0) {
        plVar3 = *(longlong **)(local_80 + 0x10);
        if (plVar3 == (longlong *)0x0) {
LAB_1469e1776:
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
        }
        else {
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_1469e1776;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar8 = iVar5 == iVar4;
            if (bVar8) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar8);
          local_98 = *(undefined8 *)(local_80 + 8);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          plStack_90 = plVar3;
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
        FUN_1469c1f3e(*local_a0,&local_98,0xffffffff);
        plVar3 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_90 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_90)(plStack_90);
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
      plVar3 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = *param_2;
    } while (lVar7 < *(int *)(lVar6 + 0x30));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e1822 FUN_1469e1822 body=341 status=ok
// SIG undefined FUN_1469e1822(void)

void FUN_1469e1822(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  
  iVar4 = (int)((ulonglong)param_3 >> 0x20);
  uVar8 = (ushort)((ulonglong)param_3 >> 0x10);
  uVar2 = (ushort)param_3;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             iVar4 + ((int)param_3 << 0x10 | (uint)uVar2) +
                             ((uint)uVar8 << 0x13 | (uint)uVar8) + (uint)(uVar2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x20) == param_3) {
          if (lVar5 != 0) {
            puVar7 = (undefined8 *)(lVar5 + 8);
            goto LAB_1469e1942;
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x18);
      } while (iVar3 != -1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar6 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    iVar4 + ((int)param_3 << 0x10 | (uint)uVar2) +
                    ((uint)uVar8 << 0x13 | (uint)uVar8) + (uint)(uVar2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x20) == param_3) {
          puVar7 = (undefined8 *)(lVar5 + 8);
          if (puVar7 != (undefined8 *)0x0 && lVar5 != 0) {
LAB_1469e1942:
            *param_2 = *puVar7;
            lVar5 = puVar7[1];
            param_2[1] = lVar5;
            if (lVar5 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1469e1978 FUN_1469e1978 body=430 status=ok
// SIG undefined FUN_1469e1978(void)

longlong FUN_1469e1978(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_140a5071c();
  uVar3 = DAT_14c98dec8;
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1b8) = uVar3;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    lVar2 = DAT_14c98ded0;
    uVar3 = DAT_14c98dec8;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1b8) = DAT_14c98dec8;
    *(longlong *)(param_1 + 0x1c0) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      lVar2 = DAT_14c98ded0;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x1c8) = DAT_14c98dec8;
      *(longlong *)(param_1 + 0x1d0) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      goto LAB_1469e1a21;
    }
  }
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
LAB_1469e1a21:
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x200) = 1;
  FUN_144a5dc74(param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  FUN_144a5dc74(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c4) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0x3f800000;
  *(undefined1 **)(param_1 + 0x318) = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 800) = 4;
  *(undefined1 *)(param_1 + 0x324) = 1;
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  return param_1;
}



// FUNCTION 1469e1b26 FUN_1469e1b26 body=86 status=ok
// SIG undefined FUN_1469e1b26(void)

longlong FUN_1469e1b26(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x208);
  *(char *)(param_1 + 0x218) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x220,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 1469e1b7c FUN_1469e1b7c body=636 status=ok
// SIG undefined FUN_1469e1b7c(void)

undefined8 FUN_1469e1b7c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  longlong local_88 [2];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  FUN_145715fae(local_68,param_1);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(&local_78,L"TabType");
  FUN_140233eec(&local_58,&local_78,&local_48);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_1413a4536(local_68,*(undefined4 *)(param_1 + 8),0);
  local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
  FUN_14023423e(&local_38,local_68);
  FUN_140056680(local_88,L"InstanceIdNumber");
  FUN_140233eec(&local_58,local_88,&local_48);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
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
  if (*(int *)(param_1 + 8) == -1) {
    FUN_145715fae(param_2,param_1);
  }
  else {
    local_48 = L"TabIdFormat";
    local_40 = 0xb;
    FUN_1446e940c(local_68,&local_48);
    local_48 = L"TabManager";
    local_40 = 10;
    FUN_1446e940c(&local_78,&local_48);
    FUN_140208bae(&local_48,&local_78,local_68,L"{TabType} : {InstanceIdNumber}");
    FUN_14023409e(local_98,&local_48,1);
    FUN_140233c04(param_2,local_98,&local_58);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e1dfa FUN_1469e1dfa body=115 status=ok
// SIG undefined FUN_1469e1dfa(void)

longlong * FUN_1469e1dfa(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a593f2(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1469e1e6e FUN_1469e1e6e body=350 status=ok
// SIG undefined FUN_1469e1e6e(void)

void FUN_1469e1e6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x328);
  FUN_1449db362(param_1 + 0x300);
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c8);
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x288);
  FUN_1449db362(param_1 + 0x278);
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x248);
  if (*(longlong **)(param_1 + 0x230) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x230) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x220);
  if (*(longlong **)(param_1 + 0x208) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x208) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1f0);
  plVar3 = *(longlong **)(param_1 + 0x1d0);
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
  plVar3 = *(longlong **)(param_1 + 0x1c0);
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
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469e1fcc FUN_1469e1fcc body=630 status=ok
// SIG undefined FUN_1469e1fcc(void)

void FUN_1469e1fcc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f014e0;
  FUN_1469de4a0();
  FUN_144760e21(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1469fede5(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2e];
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
  plVar3 = (longlong *)param_1[0x2c];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x29];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x26];
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
  FUN_1449db362(param_1 + 0x20);
  plVar3 = (longlong *)param_1[0x1e];
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
  plVar3 = (longlong *)param_1[0x1c];
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
  plVar3 = (longlong *)param_1[0x1a];
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
  plVar3 = (longlong *)param_1[0x18];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
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
  FUN_145af15fc(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145af15fc(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1469feba7(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xe];
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
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1469e5b20(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469e2236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1469e2242 FUN_1469e2242 body=272 status=ok
// SIG undefined FUN_1469e2242(void)

void FUN_1469e2242(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1469c6670(*param_1,&local_48);
  if (0 < local_40) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      iVar6 = (**(code **)(**(longlong **)(local_48 + lVar7) + 0x240))();
      if (iVar6 == 0) {
        uVar3 = *(undefined8 *)(local_48 + lVar7);
        plVar4 = *(longlong **)(local_48 + 8 + lVar7);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        iVar6 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
          FUN_1469ff590(param_2,iVar6);
        }
        lVar5 = *param_2;
        *(undefined8 *)(lVar5 + (longlong)iVar6 * 0x10) = uVar3;
        *(longlong **)(lVar5 + 8 + (longlong)iVar6 * 0x10) = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < local_40);
  }
  FUN_1469eeec9(local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e2354 FUN_1469e2354 body=121 status=ok
// SIG undefined FUN_1469e2354(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1469e2354(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar5 = uRam000000014c98e92c;
  uVar4 = _DAT_14c98e928;
  uVar3 = uRam000000014c98e924;
  *(undefined4 *)param_1 = _DAT_14c98e920;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  iVar6 = FUN_1469ff432(((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4) ^ *(uint *)(param_2 + 1));
  lVar7 = (longlong)iVar6 * 0x28 + DAT_14c98e930;
  if (lVar7 != 0 && iVar6 != -1) {
    uVar1 = *(undefined8 *)(lVar7 + 0x18);
    *param_1 = *(undefined8 *)(lVar7 + 0x10);
    param_1[1] = uVar1;
  }
  return param_1;
}



// FUNCTION 1469e23ce FUN_1469e23ce body=329 status=ok
// SIG undefined FUN_1469e23ce(void)

ulonglong FUN_1469e23ce(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,&local_40);
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_50);
  if (local_50 == 0) {
    if (0 < *(int *)(local_40 + 0x30)) {
      lVar8 = 0;
      lVar10 = 0;
      do {
        uVar7 = FUN_1469e23ce(*(longlong *)(local_40 + 0x28) + lVar8,param_2);
        uVar9 = (ulonglong)uVar7;
        if ((char)uVar7 != '\0') break;
        lVar10 = lVar10 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar10 < *(int *)(local_40 + 0x30));
      goto LAB_1469e2450;
    }
  }
  else {
    iVar3 = *(int *)(local_50 + 0x28);
    if ((longlong)iVar3 != 0) {
      pcVar4 = (code *)*param_2;
      uVar5 = param_2[1];
      lVar8 = *(longlong *)(local_50 + 0x20);
      uVar9 = 0;
      do {
        cVar6 = (*pcVar4)(uVar5,lVar8 + uVar9);
        if (cVar6 != '\0') {
          uVar9 = CONCAT71((int7)((ulonglong)uVar5 >> 8),(int)(~uVar9 >> 5) != 0);
          goto LAB_1469e2450;
        }
        uVar9 = uVar9 + 0x20;
      } while ((longlong)iVar3 * 0x20 != uVar9);
    }
  }
  uVar9 = 0;
LAB_1469e2450:
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1469e2518 FUN_1469e2518 body=374 status=ok
// SIG undefined FUN_1469e2518(void)

undefined8 * FUN_1469e2518(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  FUN_14162fdc4();
  lVar4 = *(longlong *)(DAT_14c98e9c0 + 0x2a0);
  plVar5 = *(longlong **)(DAT_14c98e9c0 + 0x2a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar4 != 0) && (iVar3 = *(int *)(lVar4 + 0x28), (longlong)iVar3 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    lVar8 = 0;
    do {
      local_78 = *(undefined8 *)(lVar4 + lVar8);
      local_70 = *(longlong **)(lVar4 + 8 + lVar8);
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_60 = *param_3;
      local_50 = &local_68;
      local_58 = FUN_1428fc2ae;
      local_68 = param_1;
      cVar7 = FUN_1469e23ce(&local_78,&local_58);
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
      if (cVar7 != '\0') {
        *local_80 = *(undefined8 *)(lVar4 + lVar8);
        lVar4 = *(longlong *)(lVar4 + 8 + lVar8);
        local_80[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        goto LAB_1469e2622;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *local_80 = 0;
  local_80[1] = 0;
LAB_1469e2622:
  puVar6 = local_80;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e2692 FUN_1469e2692 body=688 status=ok
// SIG undefined FUN_1469e2692(void)

void FUN_1469e2692(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  FUN_146a5c9d0(*param_2);
  plVar5 = param_1 + 0xf;
  local_68 = 0;
  uStack_60 = (longlong *)0x0;
  if (0 < (int)param_1[0x10]) {
    lVar11 = 8;
    lVar14 = 0;
    do {
      uVar6 = (ulonglong)uStack_60;
      lVar4 = *plVar5;
      if (((*(longlong *)(lVar4 + -8 + lVar11) != 0) && (*(longlong *)(lVar4 + lVar11) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar4 + lVar11) + 8))) {
        lVar12 = (longlong)(int)uStack_60;
        uVar8 = (int)uStack_60 + 1;
        uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uVar8);
        if (uStack_60._4_4_ < uVar8) {
          FUN_1469feb22(&local_68,uVar6 & 0xffffffff);
        }
        *(undefined8 *)(local_68 + lVar12 * 0x10) = *(undefined8 *)(lVar4 + -8 + lVar11);
        lVar4 = *(longlong *)(lVar4 + lVar11);
        *(longlong *)(local_68 + 8 + lVar12 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar14 = lVar14 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar14 < (int)param_1[0x10]);
  }
  FUN_1469feac2(plVar5,&local_68);
  FUN_1469feba7(local_68,(ulonglong)uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_146a584e0(*local_80,&local_78);
  local_68 = CONCAT44(uStack_74,local_78);
  uStack_60 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  local_58 = 7;
  local_54 = 1;
  FUN_1469e2944(param_1);
  if (0 < (int)param_1[0x10]) {
    lVar11 = 0;
    do {
      lVar14 = *plVar5;
      plVar13 = *(longlong **)(lVar14 + 8 + lVar11 * 0x10);
      bVar16 = true;
      if (plVar13 == (longlong *)0x0) {
LAB_1469e27ec:
        plVar13 = (longlong *)0x0;
        uVar10 = 0;
      }
      else {
        iVar9 = (int)plVar13[1];
        do {
          if (iVar9 == 0) goto LAB_1469e27ec;
          LOCK();
          iVar7 = (int)plVar13[1];
          bVar15 = iVar9 == iVar7;
          if (bVar15) {
            *(int *)(plVar13 + 1) = iVar9 + 1;
            iVar7 = iVar9;
          }
          iVar9 = iVar7;
          UNLOCK();
        } while (!bVar15);
        uVar10 = *(undefined8 *)(lVar14 + lVar11 * 0x10);
        bVar16 = false;
      }
      local_68 = *param_3;
      uStack_60 = (longlong *)param_3[1];
      if (uStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
        UNLOCK();
      }
      FUN_1469c2cac(uVar10,&local_68);
      plVar3 = uStack_60;
      if (uStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_60)(uStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (!bVar16) {
        LOCK();
        plVar3 = plVar13 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10]);
  }
  FUN_14162fdc4();
  plVar5 = local_80;
  FUN_1469c6316(DAT_14c98e9c0,local_80);
  (**(code **)(*param_1 + 0x50))(param_1);
  FUN_1469c8608(param_1);
  lVar11 = *plVar5;
  plVar5 = *(longlong **)(lVar11 + 0x2c8);
  if (plVar5 != (longlong *)0x0) {
    iVar9 = (int)plVar5[1];
    do {
      if (iVar9 == 0) goto LAB_1469e2914;
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar16 = iVar9 == iVar7;
      if (bVar16) {
        *(int *)(plVar5 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar16);
    if (*(longlong *)(lVar11 + 0x2c0) != 0) {
      FUN_1469c8608();
    }
    LOCK();
    plVar13 = plVar5 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
LAB_1469e2914:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e2944 FUN_1469e2944 body=611 status=ok
// SIG undefined FUN_1469e2944(void)

void FUN_1469e2944(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar8 = 0;
    local_80 = param_2;
    local_78 = param_1;
    do {
      puVar15 = (undefined8 *)(lVar8 * 0x10 + *(longlong *)(local_78 + 0x88));
      plVar10 = (longlong *)0x0;
LAB_1469e2999:
      local_68 = *puVar15;
      local_60 = (longlong *)puVar15[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_1469e30dc(&local_58,param_2);
      plVar7 = local_50;
      lVar6 = local_58;
      local_58 = 0;
      plVar16 = plVar10;
      if (local_50 == plVar10) {
LAB_1469e2a12:
        plVar10 = local_50;
        plVar7 = plVar16;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_50 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*local_50)(local_50);
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
      else {
        local_50 = (longlong *)0x0;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          plVar16 = plVar7;
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
          goto LAB_1469e2a12;
        }
      }
      plVar10 = plVar7;
      plVar7 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_60 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (lVar6 != 0) {
        iVar14 = *(int *)(lVar6 + 0x28);
        if ((longlong)iVar14 != 0) {
          local_70 = lVar6 + 0x20;
          lVar12 = *param_2;
          plVar7 = param_2 + 1;
          puVar3 = (uint *)(param_2 + 2);
          lVar5 = *(longlong *)(lVar6 + 0x20);
          pbVar4 = (byte *)((longlong)param_2 + 0x14);
          iVar13 = 1;
          lVar9 = 0;
          lVar11 = 0;
          do {
            param_2 = local_80;
            if ((((*(uint *)(lVar5 + 0x10 + lVar9) & *puVar3) != 0) &&
                (*(longlong *)(lVar5 + lVar9) == lVar12)) &&
               ((((int)*plVar7 == -1 & *pbVar4) != 0 ||
                ((int)*plVar7 == *(int *)(lVar5 + 8 + lVar9))))) {
              if (iVar13 != 0) {
                if (iVar14 - iVar13 != 0) {
                  lVar12 = (lVar11 >> 0x20) * 0x20;
                  memmove((void *)(lVar5 + lVar12),(void *)(lVar5 + lVar12 + 0x20),
                          (longlong)(iVar14 - iVar13) << 5);
                  iVar14 = *(int *)(lVar6 + 0x28);
                }
                *(int *)(lVar6 + 0x28) = iVar14 + -1;
                FUN_1469f2506(local_70);
              }
              break;
            }
            lVar11 = lVar11 + 0x100000000;
            iVar13 = iVar13 + 1;
            lVar9 = lVar9 + 0x20;
          } while ((longlong)iVar14 << 5 != lVar9);
        }
        goto LAB_1469e2999;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar10 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(local_78 + 0x90));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e2bb2 FUN_1469e2bb2 body=496 status=ok
// SIG undefined FUN_1469e2bb2(void)

void FUN_1469e2bb2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_58 = 0;
  uStack_50 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar14 = 8;
    lVar12 = 0;
    do {
      uVar7 = uStack_50;
      lVar4 = *plVar1;
      if (((*(longlong *)(lVar4 + -8 + lVar14) != 0) && (*(longlong *)(lVar4 + lVar14) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar4 + lVar14) + 8))) {
        lVar13 = (longlong)(int)uStack_50;
        uVar9 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar9);
        if (uStack_50._4_4_ < uVar9) {
          FUN_1469feb22(&local_58,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar13 * 0x10) = *(undefined8 *)(lVar4 + -8 + lVar14);
        lVar4 = *(longlong *)(lVar4 + lVar14);
        *(longlong *)(local_58 + 8 + lVar13 * 0x10) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar12 = lVar12 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar12 < *(int *)(param_1 + 0x80));
  }
  FUN_1469feac2(plVar1,&local_58);
  FUN_1469feba7(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1469de912(param_1);
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar12 = 0;
    do {
      lVar14 = *plVar1;
      plVar11 = *(longlong **)(lVar14 + 8 + lVar12 * 0x10);
      bVar6 = true;
      if (plVar11 == (longlong *)0x0) {
LAB_1469e2ce2:
        plVar11 = (longlong *)0x0;
        lVar14 = 0;
      }
      else {
        iVar10 = (int)plVar11[1];
        do {
          if (iVar10 == 0) goto LAB_1469e2ce2;
          LOCK();
          iVar8 = (int)plVar11[1];
          bVar15 = iVar10 == iVar8;
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar10 + 1;
            iVar8 = iVar10;
          }
          iVar10 = iVar8;
          UNLOCK();
        } while (!bVar15);
        lVar14 = *(longlong *)(lVar14 + lVar12 * 0x10);
        bVar6 = false;
      }
      if (((*(longlong *)(lVar14 + 0x2c0) != 0) &&
          (plVar5 = *(longlong **)(lVar14 + 0x2c8), plVar5 != (longlong *)0x0)) &&
         (0 < (int)plVar5[1])) {
        iVar10 = (int)plVar5[1];
        do {
          if (iVar10 == 0) goto LAB_1469e2d46;
          LOCK();
          iVar8 = (int)plVar5[1];
          bVar15 = iVar10 == iVar8;
          if (bVar15) {
            *(int *)(plVar5 + 1) = iVar10 + 1;
            iVar8 = iVar10;
          }
          iVar10 = iVar8;
          UNLOCK();
        } while (!bVar15);
        if (*(longlong *)(lVar14 + 0x2c0) != 0) {
          FUN_14698158e();
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
LAB_1469e2d46:
      if (!bVar6) {
        LOCK();
        plVar5 = plVar11 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x80));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e2da4 FUN_1469e2da4 body=822 status=ok
// SIG undefined FUN_1469e2da4(void)

undefined8 FUN_1469e2da4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_78 = 0;
  uStack_70 = 0;
  local_90 = param_2;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar12 = 8;
    lVar13 = 0;
    do {
      uVar11 = uStack_70;
      lVar10 = *plVar1;
      if (((*(longlong *)(lVar10 + -8 + lVar12) != 0) && (*(longlong *)(lVar10 + lVar12) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar10 + lVar12) + 8))) {
        lVar15 = (longlong)(int)uStack_70;
        uVar8 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_1469feb22(&local_78,uVar11 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar15 * 0x10) = *(undefined8 *)(lVar10 + -8 + lVar12);
        lVar10 = *(longlong *)(lVar10 + lVar12);
        *(longlong *)(local_78 + 8 + lVar15 * 0x10) = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar13 < *(int *)(param_1 + 0x80));
  }
  FUN_1469feac2(plVar1,&local_78);
  FUN_1469feba7(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  bVar7 = 1;
  lVar12 = 0;
  do {
    lVar10 = lVar12;
    lVar13 = (longlong)*(int *)(param_1 + 0x80);
    lVar12 = lVar10;
    if (lVar13 <= lVar10) break;
    lVar12 = *plVar1;
    plVar14 = *(longlong **)(lVar12 + 8 + lVar10 * 0x10);
    local_98 = lVar13;
    if (plVar14 == (longlong *)0x0) {
LAB_1469e2ed1:
      bVar16 = true;
      plVar14 = (longlong *)0x0;
LAB_1469e2ed7:
      local_78 = 0;
      uStack_70 = 0;
      uVar11 = 0;
    }
    else {
      iVar9 = (int)plVar14[1];
      do {
        if (iVar9 == 0) goto LAB_1469e2ed1;
        LOCK();
        iVar5 = (int)plVar14[1];
        bVar16 = iVar9 == iVar5;
        if (bVar16) {
          *(int *)(plVar14 + 1) = iVar9 + 1;
          iVar5 = iVar9;
        }
        iVar9 = iVar5;
        UNLOCK();
      } while (!bVar16);
      plVar4 = *(longlong **)(lVar12 + lVar10 * 0x10);
      if (plVar4 == (longlong *)0x0) {
        bVar16 = false;
        goto LAB_1469e2ed7;
      }
      (**(code **)(*plVar4 + 0x260))(plVar4,&local_78);
      uVar11 = uStack_70 & 0xffffffff;
      if ((0 < (int)uStack_70 & bVar7) == 1) {
        lVar13 = 0;
        lVar12 = 1;
        do {
          uVar11 = *(ulonglong *)(local_78 + lVar13);
          plVar4 = *(longlong **)(local_78 + 8 + lVar13);
          local_88 = uVar11;
          local_80 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              LOCK();
              plVar2 = plVar4 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar3 = (int *)((longlong)plVar4 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
          }
          uVar8 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          iVar9 = FUN_1469ff4ac(local_90,uVar8 >> 0x10 ^ uVar8,&local_88);
          plVar4 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          bVar7 = 1;
          if ((iVar9 == -1) &&
             (cVar6 = FUN_146a580ce(*(undefined8 *)(local_78 + lVar13)), cVar6 == '\0')) {
            bVar7 = FUN_146a5ca8a(*(undefined8 *)(local_78 + lVar13));
          }
          uVar11 = uStack_70 & 0xffffffff;
          if (bVar7 == 0) break;
          lVar13 = lVar13 + 0x10;
          bVar16 = lVar12 < (int)uStack_70;
          lVar12 = lVar12 + 1;
        } while (bVar16);
        bVar16 = false;
      }
      else {
        bVar16 = false;
      }
    }
    FUN_1469ec9dc(local_78,uVar11);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (!bVar16) {
      LOCK();
      plVar4 = plVar14 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    lVar12 = lVar10 + 1;
    lVar13 = local_98;
  } while ((bVar7 & 1) != 0);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar12 >> 8),lVar13 <= lVar10);
}



// FUNCTION 1469e30dc FUN_1469e30dc body=546 status=ok
// SIG undefined FUN_1469e30dc(void)

longlong * FUN_1469e30dc(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_58);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,&local_68);
  if (local_58 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    lVar5 = -1;
    lVar6 = 0;
    do {
      lVar5 = lVar5 + 1;
      if (*(int *)(local_68 + 0x30) <= lVar5) break;
      FUN_1469e30dc(&local_78,param_2,*(longlong *)(local_68 + 0x28) + lVar6);
      plVar3 = local_70;
      if (&local_78 == param_1) {
LAB_1469e3296:
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_70 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
      else {
        *param_1 = local_78;
        local_78 = 0;
        plVar2 = (longlong *)param_1[1];
        if (local_70 == plVar2) goto LAB_1469e3296;
        local_70 = (longlong *)0x0;
        param_1[1] = (longlong)plVar3;
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
          goto LAB_1469e3296;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while (*param_1 == 0);
  }
  else {
    plVar3 = param_1;
    if ((longlong)*(int *)(local_58 + 0x28) != 0) {
      lVar5 = *(longlong *)(local_58 + 0x20);
      uVar4 = 0;
      do {
        if ((((*(uint *)(lVar5 + 0x10 + uVar4) & *(uint *)(param_2 + 2)) != 0) &&
            (*(longlong *)(lVar5 + uVar4) == *param_2)) &&
           ((((int)param_2[1] == -1 & *(byte *)((longlong)param_2 + 0x14)) != 0 ||
            ((int)param_2[1] == *(int *)(lVar5 + 8 + uVar4))))) {
          if ((int)(~uVar4 >> 5) != 0) {
            *param_1 = local_58;
            param_1[1] = (longlong)plStack_50;
            plVar3 = &local_58;
          }
          break;
        }
        uVar4 = uVar4 + 0x20;
      } while ((longlong)*(int *)(local_58 + 0x28) * 0x20 != uVar4);
    }
    *plVar3 = 0;
    plVar3[1] = 0;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plStack_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1469e3300 FUN_1469e3300 body=93 status=ok
// SIG undefined FUN_1469e3300(void)

void FUN_1469e3300(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14162fdc4();
  plVar3 = DAT_14c98e9c8;
  plVar1 = DAT_14c98e9c0;
  if (DAT_14c98e9c8 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469e3359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c98e9c0 + 0x50))();
    return;
  }
  LOCK();
  *(int *)(DAT_14c98e9c8 + 1) = (int)DAT_14c98e9c8[1] + 1;
  UNLOCK();
  (**(code **)(*plVar1 + 0x50))();
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
                    /* WARNING: Could not recover jumptable at 0x0001469e3346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1469e335e FUN_1469e335e body=587 status=ok
// SIG undefined FUN_1469e335e(void)

void FUN_1469e335e(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x78);
      plVar4 = *(longlong **)(lVar6 + 8 + lVar7 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        iVar8 = (int)plVar4[1];
        do {
          if (iVar8 == 0) goto LAB_1469e33fd;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar9 = iVar8 == iVar5;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
        } while (!bVar9);
        lVar6 = *(longlong *)(lVar6 + lVar7 * 0x10);
        if (lVar6 != 0) {
          if (((*(longlong *)(lVar6 + 0x2c0) == 0) ||
              (plStack_70 = *(longlong **)(lVar6 + 0x2c8), plStack_70 == (longlong *)0x0)) ||
             ((int)plStack_70[1] < 1)) {
            local_78 = 0;
            plStack_70 = (longlong *)0x0;
          }
          else {
            local_78 = 0;
            iVar8 = (int)plStack_70[1];
            do {
              if (iVar8 == 0) {
                plStack_70 = (longlong *)0x0;
                goto LAB_1469e3579;
              }
              LOCK();
              iVar5 = (int)plStack_70[1];
              bVar9 = iVar8 == iVar5;
              if (bVar9) {
                *(int *)(plStack_70 + 1) = iVar8 + 1;
                iVar5 = iVar8;
              }
              iVar8 = iVar5;
              UNLOCK();
            } while (!bVar9);
            if (plStack_70 != (longlong *)0x0) {
              local_78 = *(longlong *)(lVar6 + 0x2c0);
            }
LAB_1469e3579:
            if (local_78 != 0) {
              FUN_1469ff616(param_3,&local_78);
            }
          }
          local_88 = 0;
          uStack_80 = 0;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_98 = lVar6;
          local_90 = plVar4;
          FUN_1469e2242(&local_98,&local_88);
          plVar1 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_90 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          if (0 < (int)uStack_80) {
            lVar6 = 0;
            iVar8 = 0;
            do {
              iVar5 = (**(code **)(**(longlong **)(local_88 + lVar6) + 0x268))();
              *param_2 = *param_2 + iVar5;
              iVar8 = iVar8 + 1;
              lVar6 = lVar6 + 0x10;
            } while (iVar8 < (int)uStack_80);
          }
          FUN_1469ff3e9(local_88);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          plVar1 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_70 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_70)(plStack_70);
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
LAB_1469e33fd:
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(param_1 + 0x80));
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e35aa FUN_1469e35aa body=206 status=ok
// SIG undefined FUN_1469e35aa(void)

void FUN_1469e35aa(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1469ff802(param_1,&local_38,&local_28);
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
      }
    }
  }
  puVar4 = (undefined8 *)param_3[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e368a FUN_1469e368a body=194 status=ok
// SIG undefined FUN_1469e368a(void)

ulonglong FUN_1469e368a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  cVar6 = FUN_1469e2da4();
  if (cVar6 == '\0') {
LAB_1469e373b:
    uVar8 = 0;
  }
  else {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x1c8);
        plVar3 = *(longlong **)(lVar2 + 0x18 + lVar9 * 0x20);
        if (plVar3 != (longlong *)0x0) {
          iVar7 = (int)plVar3[1];
          do {
            if (iVar7 == 0) goto LAB_1469e3725;
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar10 = iVar7 == iVar5;
            if (bVar10) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar10);
          plVar4 = *(longlong **)(lVar9 * 0x20 + lVar2 + 0x10);
          if (plVar4 == (longlong *)0x0) {
            cVar6 = '\x01';
          }
          else {
            cVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
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
          if (cVar6 == '\0') goto LAB_1469e373b;
        }
LAB_1469e3725:
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x1d0));
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469e374c FUN_1469e374c body=142 status=ok
// SIG undefined FUN_1469e374c(void)

ulonglong FUN_1469e374c(longlong param_1,undefined4 *param_2)

{
  undefined7 uVar2;
  undefined8 uVar1;
  longlong lVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 1;
  uVar2 = (undefined7)(local_10 >> 8);
  if ((longlong)*(int *)(param_1 + 0x1b0) != 0) {
    lVar3 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x1a8) + 8 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x1a8) + lVar3) != 0)) {
        local_28 = *param_2;
        uStack_24 = param_2[1];
        uStack_20 = param_2[2];
        uStack_1c = param_2[3];
        uVar1 = FUN_1469ffa98(param_1 + 0x1a8,&local_28,&local_29);
        uVar2 = (undefined7)((ulonglong)uVar1 >> 8);
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x1b0) * 0x10 != lVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar2,local_29) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e37dc FUN_1469e37dc body=782 status=ok
// SIG undefined FUN_1469e37dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469e37dc(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = *param_2;
  if (lVar9 != 0) {
    local_58 = (longlong *)param_2[1];
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_50 = &local_60;
    iVar6 = -1;
    local_60 = lVar9;
    if ((longlong)*(int *)(param_1 + 0x1d0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1c8);
      lVar7 = (longlong)*(int *)(param_1 + 0x1d0) << 5;
      iVar8 = 0;
      do {
        cVar5 = FUN_1469ffa00(&local_50,lVar9);
        iVar6 = iVar8;
        if (cVar5 != '\0') break;
        lVar9 = lVar9 + 0x20;
        iVar8 = iVar8 + 1;
        lVar7 = lVar7 + -0x20;
        iVar6 = -1;
      } while (lVar7 != 0);
    }
    plVar3 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (iVar6 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x1c8);
      plVar3 = *(longlong **)(lVar9 + 0x18 + (longlong)iVar6 * 0x20);
      if (plVar3 == (longlong *)0x0) {
LAB_1469e39e3:
        FUN_1469de260(_DAT_000000e8);
      }
      else {
        iVar8 = (int)plVar3[1];
        do {
          if (iVar8 == 0) goto LAB_1469e39e3;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar8 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
            iVar4 = iVar8;
          }
          iVar8 = iVar4;
          UNLOCK();
        } while (!bVar10);
        FUN_1469de260(*(undefined8 *)(*(longlong *)((longlong)iVar6 * 0x20 + lVar9 + 0x10) + 0xe8));
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
    FUN_146a5cc14(*param_2);
  }
  lVar9 = *param_3;
  if (lVar9 != 0) {
    local_58 = (longlong *)param_3[1];
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_50 = &local_60;
    iVar6 = -1;
    local_60 = lVar9;
    if ((longlong)*(int *)(param_1 + 0x1d0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1c8);
      lVar7 = (longlong)*(int *)(param_1 + 0x1d0) << 5;
      iVar8 = 0;
      do {
        cVar5 = FUN_1469ffa00(&local_50,lVar9);
        iVar6 = iVar8;
        if (cVar5 != '\0') break;
        lVar9 = lVar9 + 0x20;
        iVar8 = iVar8 + 1;
        lVar7 = lVar7 + -0x20;
        iVar6 = -1;
      } while (lVar7 != 0);
    }
    plVar3 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (iVar6 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x1c8);
      plVar3 = *(longlong **)(lVar9 + 0x18 + (longlong)iVar6 * 0x20);
      if (plVar3 == (longlong *)0x0) {
LAB_1469e397b:
        FUN_1469de380(_DAT_000000e8);
      }
      else {
        iVar8 = (int)plVar3[1];
        do {
          if (iVar8 == 0) goto LAB_1469e397b;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar8 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
            iVar4 = iVar8;
          }
          iVar8 = iVar4;
          UNLOCK();
        } while (!bVar10);
        FUN_1469de380(*(undefined8 *)(*(longlong *)((longlong)iVar6 * 0x20 + lVar9 + 0x10) + 0xe8));
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
  }
  local_70 = *param_3;
  local_68 = param_3[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_80 = *param_2;
  local_78 = param_2[1];
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  FUN_1469e35aa(param_1 + 0x200,&local_80,&local_70);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e3aec FUN_1469e3aec body=1352 status=ok
// SIG undefined FUN_1469e3aec(void)

void FUN_1469e3aec(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_3a8 [32];
  undefined1 *local_388;
  undefined4 local_37c;
  longlong *local_378;
  longlong local_370;
  longlong *local_368;
  undefined8 *local_360;
  longlong local_358;
  longlong *local_350;
  undefined8 local_348;
  longlong *local_340;
  longlong local_338;
  longlong local_330;
  undefined1 local_328 [8];
  longlong *local_320;
  undefined1 local_311;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined8 local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 *local_2e0 [60];
  undefined1 local_ff;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined2 local_d2;
  undefined1 local_ac;
  longlong local_80;
  longlong *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  cVar12 = FUN_146a580ce(*param_2);
  if ((cVar12 == '\0') || (cVar12 = FUN_146a580ce(*param_2), cVar12 == '\x02')) {
    *(longlong *)(param_1 + 0x140) = *param_3;
    plVar19 = (longlong *)param_3[1];
    plVar15 = *(longlong **)(param_1 + 0x148);
    if (plVar15 != plVar19) {
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
        UNLOCK();
        plVar15 = *(longlong **)(param_1 + 0x148);
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x148) = plVar19;
    }
  }
  if ((*param_3 != 0) &&
     (iVar13 = *(int *)(param_1 + 0x1d0), local_370 = param_1, local_2e0[0] = param_2,
     (longlong)iVar13 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x1c8);
    uVar17 = 0;
    lVar18 = 0;
    do {
      cVar12 = FUN_1469ffa00(local_2e0,lVar5 + uVar17);
      param_1 = local_370;
      if (cVar12 != '\0') {
        if ((int)(~uVar17 >> 5) != 0) {
          lVar5 = *(longlong *)(local_370 + 0x1c8);
          lVar18 = (lVar18 >> 0x20) * 0x20;
          plVar19 = *(longlong **)(lVar5 + 0x18 + lVar18);
          if (plVar19 != (longlong *)0x0) {
            uVar17 = (ulonglong)*(uint *)(plVar19 + 1);
            lVar16 = 0;
            goto LAB_1469e4007;
          }
          local_37c = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          plVar19 = (longlong *)0x0;
          lVar16 = 0;
          goto LAB_1469e3c63;
        }
        break;
      }
      lVar18 = lVar18 + 0x100000000;
      uVar17 = uVar17 + 0x20;
    } while ((longlong)iVar13 * 0x20 != uVar17);
  }
  goto LAB_1469e3b7d;
  while( true ) {
    LOCK();
    uVar4 = *(uint *)(plVar19 + 1);
    if (uVar14 == uVar4) {
      *(uint *)(plVar19 + 1) = uVar14 + 1;
    }
    else {
      uVar17 = (ulonglong)uVar4;
    }
    UNLOCK();
    if (uVar14 == uVar4) break;
LAB_1469e4007:
    uVar14 = (uint)uVar17;
    if (uVar14 == 0) {
      local_37c = (undefined4)CONCAT71((int7)(uVar17 >> 8),1);
      plVar19 = (longlong *)0x0;
      goto LAB_1469e3c63;
    }
  }
  lVar16 = *(longlong *)(lVar5 + lVar18 + 0x10);
  local_37c = 0;
LAB_1469e3c63:
  lVar5 = **(longlong **)(lVar16 + 0xe8);
  local_368 = param_3;
  local_360 = param_2;
  if (0 < *(int *)(lVar5 + 0x80)) {
    lVar18 = 0;
    do {
      lVar16 = *(longlong *)(lVar5 + 0x78);
      plVar15 = *(longlong **)(lVar16 + 8 + lVar18 * 0x10);
      bVar9 = true;
      if (plVar15 == (longlong *)0x0) {
LAB_1469e3caf:
        plVar15 = (longlong *)0x0;
        lVar16 = 0;
      }
      else {
        iVar13 = (int)plVar15[1];
        do {
          if (iVar13 == 0) goto LAB_1469e3caf;
          LOCK();
          iVar10 = (int)plVar15[1];
          bVar20 = iVar13 == iVar10;
          if (bVar20) {
            *(int *)(plVar15 + 1) = iVar13 + 1;
            iVar10 = iVar13;
          }
          iVar13 = iVar10;
          UNLOCK();
        } while (!bVar20);
        lVar16 = *(longlong *)(lVar16 + lVar18 * 0x10);
        bVar9 = false;
      }
      if (((*(longlong *)(lVar16 + 0x2c0) != 0) &&
          (plVar6 = *(longlong **)(lVar16 + 0x2c8), plVar6 != (longlong *)0x0)) &&
         (0 < (int)plVar6[1])) {
        iVar13 = (int)plVar6[1];
        do {
          if (iVar13 == 0) goto LAB_1469e3d16;
          LOCK();
          iVar10 = (int)plVar6[1];
          bVar20 = iVar13 == iVar10;
          if (bVar20) {
            *(int *)(plVar6 + 1) = iVar13 + 1;
            iVar10 = iVar13;
          }
          iVar13 = iVar10;
          UNLOCK();
        } while (!bVar20);
        lVar7 = *(longlong *)(lVar16 + 0x2c0);
        if (lVar7 != 0) {
          FUN_14627df0c(local_2e0);
          local_ff = 0;
          local_fc = *(undefined8 *)(lVar7 + 0x380);
          FUN_14287c17c(lVar7,&local_2f8);
          plVar3 = local_78;
          local_f4 = local_2f8;
          local_d2 = 0;
          local_ac = 0;
          local_ec = 0;
          if (!bVar9) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
          }
          local_80 = lVar16;
          plVar11 = plVar15;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_78 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar8 = (undefined8 *)*local_78;
              local_378 = local_78;
              local_78 = plVar15;
              (*(code *)*puVar8)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)local_378 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar11 = local_78;
              if (*piVar1 == 0) {
                (**(code **)(*local_378 + 0x10))();
                plVar11 = local_78;
              }
            }
          }
          local_78 = plVar11;
          local_388 = &local_311;
          FUN_1461c0e96(local_310,"SWindow",
                        ".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",0xb31);
          FUN_1462139ea(local_310,&local_2f0,local_2e0);
          if (local_308 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_308 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              local_378 = local_308;
              (**(code **)*local_308)(local_308);
              LOCK();
              piVar1 = (int *)((longlong)local_378 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_378 + 0x10))();
              }
            }
          }
          if (!bVar9) {
            LOCK();
            plVar3 = plVar15 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          FUN_14627e134(local_2e0);
          FUN_1469c1bfe(lVar16,&local_2f0);
          plVar3 = DAT_14c98e618;
          local_338 = *local_368;
          local_330 = local_368[1];
          if (local_330 != 0) {
            LOCK();
            *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
            UNLOCK();
          }
          local_348 = local_2f0;
          local_340 = local_2e8;
          if (local_2e8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
            UNLOCK();
          }
          local_388 = (undefined1 *)CONCAT71(local_388._1_7_,1);
          FUN_1469a8322(plVar3,local_328,&local_348,&local_338);
          plVar3 = local_320;
          if (local_320 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_320 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_320)(local_320);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = DAT_14c98e618;
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          local_358 = lVar7;
          local_350 = plVar6;
          (**(code **)(*plVar3 + 0x140))(plVar3,&local_358);
          plVar3 = local_2e8;
          if (local_2e8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_2e8 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_2e8)(local_2e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
LAB_1469e3d16:
      if (!bVar9) {
        LOCK();
        plVar6 = plVar15 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(lVar5 + 0x80));
  }
  param_2 = local_360;
  param_3 = local_368;
  param_1 = local_370;
  if ((char)local_37c == '\0') {
    LOCK();
    plVar15 = plVar19 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
LAB_1469e3b7d:
  FUN_1469e2692(param_1,param_2,param_3);
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e4036 FUN_1469e4036 body=295 status=ok
// SIG undefined FUN_1469e4036(void)

void FUN_1469e4036(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar6 = *(int *)(param_1 + 0x1d0);
  local_48 = param_2;
  if ((longlong)iVar6 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1c8);
    uVar8 = 0;
    lVar7 = 0;
    do {
      cVar5 = FUN_1469ffa00(&local_48,lVar3 + uVar8);
      if (cVar5 != '\0') {
        if ((int)(~uVar8 >> 5) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x1c8);
          lVar7 = (lVar7 >> 0x20) * 0x20;
          puVar4 = *(undefined8 **)(lVar3 + 0x18 + lVar7);
          if (puVar4 == (undefined8 *)0x0) goto LAB_1469e415c;
          iVar6 = *(int *)(puVar4 + 1);
          do {
            if (iVar6 == 0) {
LAB_1469e415c:
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
            }
            LOCK();
            iVar2 = *(int *)(puVar4 + 1);
            bVar9 = iVar6 == iVar2;
            if (bVar9) {
              *(int *)(puVar4 + 1) = iVar6 + 1;
              iVar2 = iVar6;
            }
            iVar6 = iVar2;
            UNLOCK();
          } while (!bVar9);
          (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)(lVar3 + lVar7 + 0x10) + 0xe8) +
                      0x40))();
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4);
            LOCK();
            piVar1 = (int *)((longlong)puVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
            }
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x100000000;
      uVar8 = uVar8 + 0x20;
    } while ((longlong)iVar6 * 0x20 != uVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e4190 FUN_1469e4190 body=130 status=ok
// SIG undefined FUN_1469e4190(void)

void FUN_1469e4190(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (0 < *(int *)(param_1 + 0x1d0)) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x1c8);
      plVar4 = *(longlong **)(lVar3 + 8 + lVar7 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_1469e41fb;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar8 = iVar6 == iVar5;
          if (bVar8) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar8);
        if (*(longlong *)(lVar3 + lVar7 * 0x20) != 0) {
          FUN_146a5870a();
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
LAB_1469e41fb:
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x1d0));
  }
  return;
}



// FUNCTION 1469e4212 FUN_1469e4212 body=343 status=ok
// SIG undefined FUN_1469e4212(void)

void FUN_1469e4212(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  undefined8 uStack_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1469e335e();
  iVar5 = *(int *)(param_1 + 0x1d0);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x10 + lVar7 * 0x20) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x1c8) + lVar7 * 0x20;
        plVar3 = *(longlong **)(lVar6 + 0x18);
        if ((plVar3 != (longlong *)0x0) && (0 < (int)plVar3[1])) {
          local_4c = 0;
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) {
              FUN_1469e335e(0,&local_4c,&local_48);
              goto LAB_1469e42f4;
            }
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar8 = iVar5 == iVar4;
            if (bVar8) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar8);
          FUN_1469e335e(*(undefined8 *)(lVar6 + 0x10),&local_4c,&local_48);
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
LAB_1469e42f4:
          local_34 = local_34 + local_4c;
          iVar5 = *(int *)(param_1 + 0x1d0);
        }
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x288);
  if (*(int *)(param_1 + 0x288) < local_34) {
    iVar5 = local_34;
  }
  *(int *)(param_1 + 0x288) = iVar5;
  iVar5 = *(int *)(param_1 + 0x28c);
  if (*(int *)(param_1 + 0x28c) < (int)uStack_40) {
    iVar5 = (int)uStack_40;
  }
  *(int *)(param_1 + 0x28c) = iVar5;
  FUN_145e1062d(local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e436a FUN_1469e436a body=160 status=ok
// SIG undefined FUN_1469e436a(void)

void FUN_1469e436a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x290);
  if (lVar1 != 0) {
    FUN_146a584e0(*param_4,local_48);
    cVar2 = FUN_1469e374c(lVar1,local_48);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x290) + 0x18))
                (*(longlong **)(param_1 + 0x290),param_2,param_3,param_4);
      goto LAB_1469e43af;
    }
  }
  FUN_1428fb684(param_1,param_2,param_3,param_4);
LAB_1469e43af:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e440c FUN_1469e440c body=190 status=ok
// SIG undefined FUN_1469e440c(void)

void FUN_1469e440c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x1d0) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x1c8);
    lVar6 = (longlong)*(int *)(param_1 + 0x1d0) * 0x20 + lVar7;
    do {
      plVar3 = *(longlong **)(lVar7 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_1469e448b;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar8);
        if (*(longlong *)(lVar7 + 0x10) != 0) {
          local_58 = 0;
          uStack_50 = 0;
          FUN_1469d61bc(*(longlong *)(lVar7 + 0x10),&local_58);
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
LAB_1469e448b:
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469e44cc FUN_1469e44cc body=63 status=ok
// SIG undefined FUN_1469e44cc(void)

undefined8 * FUN_1469e44cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149efef08;
  if (DAT_14c98e618 != 0) {
    FUN_1428f52e0(DAT_14c98e618,*(undefined4 *)(param_1 + 1));
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e450c FUN_1469e450c body=38 status=ok
// SIG undefined FUN_1469e450c(void)

undefined8 FUN_1469e450c(undefined8 param_1,int param_2)

{
  FUN_145dd5e18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e4532 FUN_1469e4532 body=38 status=ok
// SIG undefined FUN_1469e4532(void)

undefined8 FUN_1469e4532(undefined8 param_1,int param_2)

{
  FUN_1469beadc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e4558 FUN_1469e4558 body=134 status=ok
// SIG undefined FUN_1469e4558(void)

undefined8 FUN_1469e4558(undefined8 param_1,ulonglong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  FUN_1469ee30c();
  iVar5 = (int)param_2[1];
  if (DAT_14c98e9f0 == iVar5) {
    if (DAT_14c98e9f0 < 2) {
      return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
    }
    uVar3 = *param_2;
    lVar6 = 0;
    while( true ) {
      uVar1 = *(ushort *)(DAT_14c98e9e8 + lVar6);
      uVar4 = (uint)uVar1;
      uVar2 = *(ushort *)(uVar3 + lVar6);
      uVar7 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1469e45a1;
        }
        iVar5 = uVar4 - uVar7;
        goto LAB_1469e45da;
      }
      if (uVar1 == 0) break;
LAB_1469e45a1:
      lVar6 = lVar6 + 2;
    }
    iVar5 = 0;
LAB_1469e45da:
    bVar8 = iVar5 == 0;
  }
  else {
    uVar3 = (ulonglong)(uint)(iVar5 + DAT_14c98e9f0);
    bVar8 = iVar5 + DAT_14c98e9f0 == 1;
  }
  return CONCAT71((int7)(uVar3 >> 8),bVar8);
}



// FUNCTION 1469e45fc FUN_1469e45fc body=38 status=ok
// SIG undefined FUN_1469e45fc(void)

undefined8 FUN_1469e45fc(undefined8 param_1,int param_2)

{
  FUN_1428fbf3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e4622 FUN_1469e4622 body=38 status=ok
// SIG undefined FUN_1469e4622(void)

undefined8 FUN_1469e4622(undefined8 param_1,int param_2)

{
  FUN_1469d71b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e4648 FUN_1469e4648 body=38 status=ok
// SIG undefined FUN_1469e4648(void)

undefined8 FUN_1469e4648(undefined8 param_1,int param_2)

{
  FUN_1469daef0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e466e FUN_1469e466e body=38 status=ok
// SIG undefined FUN_1469e466e(void)

undefined8 FUN_1469e466e(undefined8 param_1,int param_2)

{
  FUN_1469e1fcc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e4696 FUN_1469e4696 body=80 status=ok
// SIG undefined FUN_1469e4696(void)

int FUN_1469e4696(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x18))();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x20))
                        (*(longlong **)(param_1 + -0x18),iVar3);
      if (lVar2 == param_1 + -0x20) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return -1;
}



// FUNCTION 1469e46e6 FUN_1469e46e6 body=38 status=ok
// SIG undefined FUN_1469e46e6(void)

undefined8 FUN_1469e46e6(undefined8 param_1,int param_2)

{
  FUN_140ba0864();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469e470c FUN_1469e470c body=83 status=ok
// SIG undefined FUN_1469e470c(void)

void FUN_1469e470c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1469e4760(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1469e4760(param_1);
  return;
}



// FUNCTION 1469e4760 FUN_1469e4760 body=52 status=ok
// SIG undefined FUN_1469e4760(void)

void FUN_1469e4760(longlong *param_1)

{
  FUN_1469e4794();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469e4794 FUN_1469e4794 body=313 status=ok
// SIG undefined FUN_1469e4794(void)

void FUN_1469e4794(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e492a FUN_1469e492a body=56 status=ok
// SIG undefined FUN_1469e492a(void)

void FUN_1469e492a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001469e4957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469e4978 FUN_1469e4978 body=60 status=ok
// SIG undefined FUN_1469e4978(void)

undefined1 FUN_1469e4978(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1413a517a(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1469e49dc FUN_1469e49dc body=117 status=ok
// SIG undefined FUN_1469e49dc(void)

uint FUN_1469e49dc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *(uint *)(param_2 + 3) & 0xf ^
           ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e4a5c FUN_1469e4a5c body=64 status=ok
// SIG undefined FUN_1469e4a5c(void)

void FUN_1469e4a5c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1469e4aec FUN_1469e4aec body=115 status=ok
// SIG undefined FUN_1469e4aec(void)

undefined8 * FUN_1469e4aec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ea90) {
    FUN_144b3d300(&DAT_14c98ea90);
    if (DAT_14c98ea90 == -1) {
      FUN_140056680(&DAT_14c98ea80,L"FUICommandDragDropOp");
      atexit((_func_5014 *)&LAB_1428fb9f6);
      _Init_thread_footer(&DAT_14c98ea90);
    }
  }
  return &DAT_14c98ea80;
}



// FUNCTION 1469e4b60 FUN_1469e4b60 body=193 status=ok
// SIG undefined FUN_1469e4b60(void)

undefined4 FUN_1469e4b60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar7 = (longlong *)param_1[1];
  if (plVar7 == (longlong *)0x0) {
LAB_1469e4b8f:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_1469e4b8f;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = *param_1;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469e4bda;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *param_2;
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
LAB_1469e4bda:
  if (plVar7 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
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
  if (lVar9 == lVar8) {
    uVar6 = CONCAT31((int3)((uint)(int)param_1[2] >> 8),(int)param_1[2] == (int)param_2[2]);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1469e4c22 FUN_1469e4c22 body=157 status=ok
// SIG undefined FUN_1469e4c22(void)

bool FUN_1469e4c22(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe7a(param_1,&local_38,param_2,0);
  plVar1 = (longlong *)*param_3;
  lVar2 = 0;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
    lVar2 = local_40;
  }
  if (local_38 != lVar2) {
    FUN_1469e4cc0(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469e4cc0 FUN_1469e4cc0 body=161 status=ok
// SIG undefined FUN_1469e4cc0(void)

void FUN_1469e4cc0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149f051b0;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee990(param_1,param_2,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


