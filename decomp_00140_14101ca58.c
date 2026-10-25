// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14101ca58 FUN_14101ca58 body=890 status=ok
// SIG undefined FUN_14101ca58(void)

/* WARNING: Removing unreachable block (ram,0x00014101cd45) */

longlong * FUN_14101ca58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  wchar_t *_Str;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_108 [46];
  undefined1 local_da;
  undefined1 local_d9;
  longlong local_d8;
  longlong local_d0;
  wchar_t *local_c8;
  longlong *plStack_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  int local_98;
  undefined1 local_94;
  undefined8 local_88;
  void *local_80;
  uint local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  local_d0 = param_1;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_14101cf30(*(longlong *)(param_1 + 0x50),&local_70);
    lVar5 = local_70;
    if ((longlong)local_68 == 0) {
      local_68 = 0;
    }
    else {
      local_d8 = (longlong)local_68 << 4;
      lVar12 = 0;
      do {
        local_d9 = *(int *)(*(longlong *)(lVar5 + lVar12) + 0x14) == 0;
        local_da = *(undefined1 *)(*(longlong *)(lVar5 + lVar12) + 0x18);
        uVar6 = FUN_14101cfac(local_d0);
        local_c8 = (wchar_t *)0x0;
        plStack_c0 = (longlong *)0x0;
        cVar7 = FUN_14101cdd4(*(longlong *)(lVar5 + lVar12) + 0x20,&DAT_14cbcf498,&local_c8);
        iVar8 = 0;
        if ((cVar7 != '\0') && (1 < (int)plStack_c0)) {
          iVar8 = _wtoi(local_c8);
        }
        if (local_c8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_c8 = (wchar_t *)0x0;
        plStack_c0 = (longlong *)0x0;
        FUN_14101cdd4(*(longlong *)(lVar5 + lVar12) + 0x20,&DAT_14cbcf4a8,&local_c8);
        _Str = L"";
        if ((int)plStack_c0 != 0) {
          _Str = local_c8;
        }
        iVar9 = _wtoi(_Str);
        if (local_c8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_c8 = (wchar_t *)0x0;
        plStack_c0 = (longlong *)0x0;
        FUN_14101cdd4(*(longlong *)(lVar5 + lVar12) + 0x20,&DAT_14cbcf488);
        FUN_14101d04a(&local_88,&local_c8);
        if (local_c8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        _Src = local_80;
        local_c8 = (wchar_t *)**(undefined8 **)(lVar5 + lVar12);
        plStack_c0 = (longlong *)(*(undefined8 **)(lVar5 + lVar12))[1];
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
          UNLOCK();
        }
        local_b8 = CONCAT11(local_da,local_d9);
        local_b0 = local_88;
        local_a8 = (void *)0x0;
        lVar11 = (longlong)(int)local_78;
        local_a0 = CONCAT44(local_a0._4_4_,local_78);
        local_b6 = uVar6;
        if (lVar11 == 0) {
          local_a0 = (ulonglong)local_78;
        }
        else {
          FUN_1446dd670(&local_a8,local_78,0);
          memcpy(local_a8,_Src,lVar11 * 2);
        }
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        local_98 = iVar8;
        local_94 = iVar9 == 1;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14101d438(param_2,iVar3);
        }
        plVar4 = plStack_c0;
        lVar11 = *param_2;
        lVar10 = (longlong)iVar3 * 0x38;
        *(wchar_t **)(lVar11 + lVar10) = local_c8;
        *(longlong **)(lVar11 + 8 + lVar10) = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
          UNLOCK();
        }
        lVar11 = lVar11 + lVar10;
        *(undefined1 *)(lVar11 + 0x12) = local_b6;
        *(undefined2 *)(lVar11 + 0x10) = local_b8;
        *(undefined8 *)(lVar11 + 0x18) = local_b0;
        *(undefined8 *)(lVar11 + 0x20) = 0;
        *(void **)(lVar11 + 0x20) = local_a8;
        *(undefined4 *)(lVar11 + 0x28) = (undefined4)local_a0;
        *(undefined4 *)(lVar11 + 0x2c) = local_a0._4_4_;
        *(undefined1 *)(lVar11 + 0x34) = local_94;
        *(int *)(lVar11 + 0x30) = local_98;
        local_a0 = 0;
        local_a8 = (void *)0x0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 0x10;
      } while (local_d8 != lVar12);
    }
    FUN_14101cee4(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101cdd4 FUN_14101cdd4 body=272 status=ok
// SIG undefined FUN_14101cdd4(void)

bool FUN_14101cdd4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  iVar2 = FUN_1457511aa(param_1);
  if (iVar2 == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)iVar2 * 0x28 + *param_1;
  }
  puVar4 = (undefined8 *)(lVar1 + 0x10);
  if (lVar1 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if ((puVar4 != param_3) && (puVar4 != (undefined8 *)0x0)) {
    iVar2 = *(int *)(puVar4 + 1);
    _Src = (void *)*puVar4;
    *(int *)(param_3 + 1) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_3,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*param_3,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  return puVar4 != (undefined8 *)0x0;
}



// FUNCTION 14101cee4 FUN_14101cee4 body=75 status=ok
// SIG undefined FUN_14101cee4(void)

void FUN_14101cee4(longlong param_1,int param_2)

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



// FUNCTION 14101cf30 FUN_14101cf30 body=78 status=ok
// SIG undefined FUN_14101cf30(void)

undefined8 * FUN_14101cf30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14101d206(param_2,iVar1,0);
    FUN_14101cf7e(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14101cf7e FUN_14101cf7e body=45 status=ok
// SIG undefined FUN_14101cf7e(void)

void FUN_14101cf7e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14101cfac FUN_14101cfac body=156 status=ok
// SIG undefined FUN_14101cfac(void)

ulonglong FUN_14101cfac(undefined8 param_1,longlong param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  FUN_14101cdd4(param_2 + 0x20,&DAT_14cb977e0,&local_28);
  puVar3 = (undefined8 *)FUN_14101d2ea();
  pwVar1 = local_28;
  iVar2 = *(int *)(puVar3 + 1);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar2 == (int)uStack_20) {
    if (iVar2 < 2) {
      uVar4 = CONCAT71(uVar5,1);
    }
    else {
      iVar2 = wcscmp((wchar_t *)*puVar3,local_28);
      uVar4 = CONCAT71(uVar5,iVar2 == 0);
    }
  }
  else {
    uVar4 = CONCAT71(uVar5,(int)uStack_20 + iVar2 == 1);
  }
  if (pwVar1 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14101d04a FUN_14101d04a body=442 status=ok
// SIG undefined FUN_14101d04a(void)

longlong * FUN_14101d04a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (1 < *(int *)(param_2 + 1)) {
    local_70 = 0xffffffff;
    local_78 = 0;
    iVar2 = FUN_1447ee042(param_2,&DAT_14b991bf8,3,0);
    if (iVar2 == -1) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(&local_50,puVar3,1);
      *param_1 = (longlong)local_50;
    }
    else {
      iVar1 = *(int *)(param_2 + 1);
      puVar7 = &DAT_149dfb77a;
      puVar3 = &DAT_149dfb77a;
      if (iVar1 != 0) {
        puVar3 = (undefined2 *)*param_2;
      }
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      FUN_14006620a(&local_50,puVar3,iVar5);
      puVar3 = &DAT_149dfb77a;
      if (local_48 != 0) {
        puVar3 = local_50;
      }
      FUN_1446f470e(&local_60,puVar3,1);
      *param_1 = local_60;
      uVar6 = *(int *)(param_2 + 1) - 1;
      if (*(int *)(param_2 + 1) == 0) {
        uVar6 = 0;
      }
      else {
        puVar7 = (undefined2 *)*param_2;
      }
      uVar4 = iVar2 + 1U;
      if ((int)uVar6 <= (int)(iVar2 + 1U)) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 1) {
        uVar4 = 0;
      }
      FUN_14006620a(&local_60,puVar7 + uVar4,uVar6 - uVar4);
      if (param_1 + 1 == &local_60) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[1] != 0) {
          FUN_1400020a8();
        }
        param_1[1] = local_60;
        local_60 = 0;
        *(undefined4 *)(param_1 + 2) = local_58;
        *(undefined4 *)((longlong)param_1 + 0x14) = local_54;
      }
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14101d206 FUN_14101d206 body=228 status=ok
// SIG undefined FUN_14101d206(void)

void FUN_14101d206(longlong param_1,int param_2,int param_3)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14101d2ea FUN_14101d2ea body=332 status=ok
// SIG undefined FUN_14101d2ea(void)

undefined8 * FUN_14101d2ea(void)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb97780 == '\0') {
    DAT_14cb97780 = '\x01';
    plVar1 = (longlong *)FUN_140a68038(1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_18);
      if (local_18 == DAT_14cb8e468) {
        pcVar2 = "steam";
      }
      else {
        FUN_1446f470e(&local_30,L"EPIC",1);
        if (local_18 == local_30) {
          pcVar2 = "epic";
        }
        else {
          FUN_1446f470e(&local_38,&DAT_14b4367ec,1);
          if ((local_18 == local_38) || (local_18 == DAT_14cb8e1d8)) {
            pcVar2 = "psn";
          }
          else {
            FUN_1446f470e(&local_40,&DAT_14b4367f4,1);
            if (local_18 == local_40) {
              pcVar2 = "xboxlive";
            }
            else {
              if (local_18 != DAT_14cb8e210) goto LAB_14101d401;
              pcVar2 = "nintendo";
            }
          }
        }
      }
      FUN_1400b22c2(&local_28,pcVar2);
      if (CONCAT44(DAT_14cb97770._4_4_,(undefined4)DAT_14cb97770) != 0) {
        FUN_1400020a8();
      }
      DAT_14cb97770._0_4_ = local_28;
      DAT_14cb97770._4_4_ = uStack_24;
      DAT_14cb97778 = uStack_20;
      uRam000000014cb9777c = uStack_1c;
    }
  }
LAB_14101d401:
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return &DAT_14cb97770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101d438 FUN_14101d438 body=366 status=ok
// SIG undefined FUN_14101d438(void)

void FUN_14101d438(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14101d4bd;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14101d4bd:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 14101d5a6 FUN_14101d5a6 body=198 status=ok
// SIG undefined FUN_14101d5a6(void)

ulonglong FUN_14101d5a6(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14131cafa(param_1,&local_40);
  lVar2 = local_40;
  lVar8 = (longlong)local_38;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (lVar8 == 0) {
    local_38 = 0;
    uVar6 = CONCAT71(uVar7,1);
  }
  else {
    lVar9 = 0;
    do {
      uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + lVar9) + 0x30);
      uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar5 = FUN_14127aa70(uVar4,uVar1);
      if ((lVar5 == 0) || (cVar3 = FUN_148a9568e(lVar5), cVar3 == '\0')) {
        uVar6 = 0;
        goto LAB_14101d631;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar8 * 0x10 != lVar9);
    uVar6 = CONCAT71(uVar7,1);
  }
LAB_14101d631:
  FUN_14131cf14(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14101d66e FUN_14101d66e body=126 status=ok
// SIG undefined FUN_14101d66e(void)

void FUN_14101d66e(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_14101f11e();
  if ((*(uint *)(param_3 + 8) & 0x10) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x20);
  }
  else {
    uVar4 = 0;
  }
  FUN_14101dd24(param_2,uVar4);
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        lVar3 = FUN_14101d7aa(lVar3,param_3);
        if (lVar3 != 0) {
          FUN_14101d6ec(param_2,lVar3);
        }
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  return;
}



// FUNCTION 14101d6ec FUN_14101d6ec body=189 status=ok
// SIG undefined FUN_14101d6ec(void)

void FUN_14101d6ec(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1410e6f7a((longlong *)(param_1 + 0x138),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 8) = param_2;
  if (DAT_14c950c29 == 1 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(param_2 + 0x60) = param_1;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14101dd24(param_2);
    return;
  }
  return;
}



// FUNCTION 14101d7aa FUN_14101d7aa body=244 status=ok
// SIG undefined FUN_14101d7aa(void)

longlong FUN_14101d7aa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = (**(code **)(*param_1 + 0x18))();
  uVar1 = DAT_14c951640;
  if (lVar2 != 0) {
    FUN_14058b40c(DAT_14c951640,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    local_78 = (longlong *)0x0;
    local_48 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_c0 = uVar1;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_c8 = lVar2;
    lVar2 = FUN_1402710dd(&local_c8);
    if (lStack_88 != 0) {
      plVar3 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar3 = local_68;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,lVar2,param_2);
      goto LAB_14101d852;
    }
  }
  lVar2 = 0;
LAB_14101d852:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101d8a0 FUN_14101d8a0 body=118 status=ok
// SIG undefined FUN_14101d8a0(void)

void FUN_14101d8a0(longlong param_1,undefined8 param_2)

{
  FUN_14101eafe();
  FUN_14101dc7e(param_2,*(undefined1 *)(param_1 + 0x90));
  if (*(char *)(param_1 + 0xb8) != '\x01') {
    FUN_14101dbe4(param_2,param_1 + 0xa8);
    FUN_14101d98e(param_2,param_1 + 0x98);
    return;
  }
  FUN_14101d98e(param_2,param_1 + 0x98);
  FUN_14101dbe4(param_2,param_1 + 0xa8);
  return;
}



// FUNCTION 14101d916 FUN_14101d916 body=119 status=ok
// SIG undefined FUN_14101d916(void)

undefined8 FUN_14101d916(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar2 = FUN_140febe0e();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x60), lVar1 != 0)) {
      lVar2 = FUN_140febe0e();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x60);
      }
      return uVar3;
    }
  }
  uVar3 = FUN_140febe0e();
  return uVar3;
}



// FUNCTION 14101d98e FUN_14101d98e body=153 status=ok
// SIG undefined FUN_14101d98e(void)

void FUN_14101d98e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_30,&DAT_149e06346);
  FUN_14101da28(param_1,local_30);
  local_40 = (longlong *)*param_2;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_38 = (undefined4)param_2[1];
  FUN_140056680(local_50,&DAT_149e06346);
  FUN_14100d696(param_1,local_50,&local_40);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101da28 FUN_14101da28 body=108 status=ok
// SIG undefined FUN_14101da28(void)

void FUN_14101da28(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0x178;
  iVar2 = FUN_140e1307c(lVar1);
  if (iVar2 != -1) {
    FUN_14101da94(lVar1,iVar2);
    FUN_140b12644(lVar1);
    FUN_14101daec(param_1 + 0x188,iVar2,1);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14101da94 FUN_14101da94 body=87 status=ok
// SIG undefined FUN_14101da94(void)

void FUN_14101da94(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar2) << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14101daec FUN_14101daec body=117 status=ok
// SIG undefined FUN_14101daec(void)

void FUN_14101daec(longlong *param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar3) << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  if (param_3 == '\x01') {
    FUN_14101db62(param_1);
    return;
  }
  return;
}



// FUNCTION 14101db62 FUN_14101db62 body=129 status=ok
// SIG undefined FUN_14101db62(void)

void FUN_14101db62(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 4,8);
      uVar2 = uVar2 >> 4;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,0x10,8);
    }
  }
  return;
}



// FUNCTION 14101dbe4 FUN_14101dbe4 body=153 status=ok
// SIG undefined FUN_14101dbe4(void)

void FUN_14101dbe4(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_30,L"false");
  FUN_14101da28(param_1,local_30);
  local_40 = (longlong *)*param_2;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_38 = (undefined4)param_2[1];
  FUN_140056680(local_50,L"false");
  FUN_14100d696(param_1,local_50,&local_40);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101dc7e FUN_14101dc7e body=165 status=ok
// SIG undefined FUN_14101dc7e(void)

void FUN_14101dc7e(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pwVar1 = L"false";
  if (param_2 != '\0') {
    pwVar1 = L"true";
  }
  FUN_140056680(&local_28,pwVar1);
  if (&local_28 == (longlong *)(param_1 + 0x158)) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x158) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x158) = local_28;
    *(undefined4 *)(param_1 + 0x160) = local_20;
    *(undefined4 *)(param_1 + 0x164) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101dd24 FUN_14101dd24 body=252 status=ok
// SIG undefined FUN_14101dd24(void)

void FUN_14101dd24(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0xb] != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    param_1[0xb] = param_2;
    lVar1 = param_1[0x1d];
    if ((longlong)(int)lVar1 != 0) {
      lVar3 = param_1[0x1c];
      lVar2 = 0;
      do {
        (**(code **)(**(longlong **)(lVar3 + lVar2) + 8))
                  (*(longlong **)(lVar3 + lVar2),param_1[0xb]);
        lVar2 = lVar2 + 0x10;
      } while ((longlong)(int)lVar1 * 0x10 != lVar2);
    }
    (**(code **)(*param_1 + 0x2a8))(param_1,&local_38);
    lVar1 = local_38;
    if ((longlong)local_30 != 0) {
      lVar3 = 0;
      do {
        FUN_14101dd24(*(undefined8 *)(lVar1 + lVar3),param_1[0xb]);
        lVar3 = lVar3 + 8;
      } while ((longlong)local_30 * 8 != lVar3);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
    (**(code **)(*param_1 + 0x2b0))(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101de48 FUN_14101de48 body=84 status=ok
// SIG undefined FUN_14101de48(void)

undefined8 * FUN_14101de48(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14101deec(param_2,iVar1,0);
    FUN_14101de9c(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14101de9c FUN_14101de9c body=80 status=ok
// SIG undefined FUN_14101de9c(void)

void FUN_14101de9c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14101deec FUN_14101deec body=317 status=ok
// SIG undefined FUN_14101deec(void)

void FUN_14101deec(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14101df5a;
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
LAB_14101df5a:
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



// FUNCTION 14101e02a FUN_14101e02a body=372 status=ok
// SIG undefined FUN_14101e02a(void)

void FUN_14101e02a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x138);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b538700;
  local_48[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_48 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = &LAB_14101e30a;
  (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(param_1 + 0x58),&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101e1a0 FUN_14101e1a0 body=102 status=ok
// SIG undefined FUN_14101e1a0(void)

void FUN_14101e1a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  
  if ((int)param_3[1] != 0) {
    if ((longlong *)*param_3 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)*param_3 + 0x60))();
    if ((int)param_3[1] != 0) {
      puVar1 = (undefined8 *)*param_3;
      if (puVar1 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_3,0,0,0x10);
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if (*param_3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14101e206 FUN_14101e206 body=258 status=ok
// SIG undefined FUN_14101e206(void)

undefined8 FUN_14101e206(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14101e302;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14101e302;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_14101e302:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14101e2b9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_14101e2b9;
    }
  }
  uVar6 = 0;
LAB_14101e2b9:
  if (local_28 != 0) {
    FUN_140113f3a(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101e326 FUN_14101e326 body=31 status=ok
// SIG undefined FUN_14101e326(void)

void FUN_14101e326(longlong *param_1)

{
  FUN_1410fa8b6();
                    /* WARNING: Could not recover jumptable at 0x00014101e33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))(param_1);
  return;
}



// FUNCTION 14101e346 FUN_14101e346 body=31 status=ok
// SIG undefined FUN_14101e346(void)

void FUN_14101e346(longlong *param_1)

{
  FUN_1410fa8b6();
                    /* WARNING: Could not recover jumptable at 0x00014101e35e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))(param_1);
  return;
}



// FUNCTION 14101e366 FUN_14101e366 body=31 status=ok
// SIG undefined FUN_14101e366(void)

void FUN_14101e366(longlong *param_1)

{
  FUN_1410fa8b6();
                    /* WARNING: Could not recover jumptable at 0x00014101e37e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))(param_1);
  return;
}



// FUNCTION 14101e386 FUN_14101e386 body=258 status=ok
// SIG undefined FUN_14101e386(void)

undefined8 FUN_14101e386(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14101e482;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14101e482;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_14101e482:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14101e439;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_14101e439;
    }
  }
  uVar6 = 0;
LAB_14101e439:
  if (local_28 != 0) {
    FUN_140113f3a(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101e4a6 FUN_14101e4a6 body=31 status=ok
// SIG undefined FUN_14101e4a6(void)

void FUN_14101e4a6(longlong *param_1)

{
  FUN_1410fa8b6();
                    /* WARNING: Could not recover jumptable at 0x00014101e4be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))(param_1);
  return;
}



// FUNCTION 14101e4c6 FUN_14101e4c6 body=372 status=ok
// SIG undefined FUN_14101e4c6(void)

void FUN_14101e4c6(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(param_1 + 0x138);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b538770;
  local_48[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_48 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = &LAB_14101e48a;
  (**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)(param_1 + 0x58),&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101e63c FUN_14101e63c body=834 status=ok
// SIG undefined FUN_14101e63c(void)

void FUN_14101e63c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_288 [32];
  longlong local_268 [2];
  undefined8 local_258 [6];
  longlong local_228 [2];
  undefined8 local_218 [6];
  longlong local_1e8 [2];
  undefined8 local_1d8 [6];
  longlong local_1a8 [2];
  undefined8 local_198 [6];
  longlong local_168 [2];
  undefined8 local_158 [6];
  longlong local_128 [2];
  undefined8 local_118 [6];
  longlong local_e8 [2];
  undefined8 local_d8 [6];
  longlong local_a8 [2];
  undefined8 local_98 [6];
  longlong local_68 [2];
  undefined8 local_58 [6];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_14101eafe();
  *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_1 + 0x90);
  *(undefined1 *)(param_2 + 0x160) = 1;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar2 = *(undefined4 *)(param_1 + 0xa8);
    uVar3 = *(undefined4 *)(param_1 + 0xac);
    uVar4 = *(undefined4 *)(param_1 + 0xb0);
    uVar5 = *(undefined4 *)(param_1 + 0xb4);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined1 *)(param_2 + 0x170) = 1;
    *(undefined8 *)(param_2 + 0x178) = uVar1;
    *(undefined1 *)(param_2 + 0x180) = 0;
    *(undefined4 *)(param_2 + 0x188) = uVar2;
    *(undefined4 *)(param_2 + 0x18c) = uVar3;
    *(undefined4 *)(param_2 + 400) = uVar4;
    *(undefined4 *)(param_2 + 0x194) = uVar5;
    FUN_140608954(param_2 + 0xb0,&DAT_14cb9a820);
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    local_28 = *(undefined8 *)(param_1 + 0xc0);
    local_20 = 1;
    FUN_1457e1daa(param_2);
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    local_28 = *(undefined8 *)(param_1 + 0xd0);
    local_20 = 1;
    FUN_1457e1dda(param_2);
  }
  switch(*(undefined4 *)(param_1 + 0xd8)) {
  case 0:
    local_68[0] = DAT_14cb9a250;
    plVar9 = local_68;
    local_58[0] = 0;
    if (DAT_14cb9a250 != 0) {
      puVar8 = local_58;
      puVar7 = &DAT_14cb9a270;
      puVar6 = &DAT_14cb9a260;
LAB_14101e764:
      if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar6;
      }
      (**(code **)*puVar7)(puVar7,puVar8);
    }
    break;
  case 1:
    local_a8[0] = DAT_14cb9a290;
    plVar9 = local_a8;
    local_98[0] = 0;
    if (DAT_14cb9a290 != 0) {
      puVar8 = local_98;
      puVar7 = &DAT_14cb9a2b0;
      puVar6 = &DAT_14cb9a2a0;
      goto LAB_14101e764;
    }
    break;
  case 2:
    plVar9 = local_e8;
    local_e8[0] = DAT_14cb9a2d0;
    local_d8[0] = 0;
    if (DAT_14cb9a2d0 != 0) {
      puVar8 = local_d8;
      puVar7 = &DAT_14cb9a2f0;
      puVar6 = &DAT_14cb9a2e0;
      goto LAB_14101e764;
    }
    break;
  case 3:
    local_128[0] = DAT_14cb9a450;
    plVar9 = local_128;
    local_118[0] = 0;
    if (DAT_14cb9a450 != 0) {
      puVar8 = local_118;
      puVar7 = &DAT_14cb9a470;
      puVar6 = &DAT_14cb9a460;
      goto LAB_14101e764;
    }
    break;
  case 4:
    local_168[0] = DAT_14cb9a310;
    plVar9 = local_168;
    local_158[0] = 0;
    if (DAT_14cb9a310 != 0) {
      puVar8 = local_158;
      puVar7 = &DAT_14cb9a330;
      puVar6 = &DAT_14cb9a320;
      goto LAB_14101e764;
    }
    break;
  case 5:
    local_1a8[0] = DAT_14cb9a350;
    plVar9 = local_1a8;
    local_198[0] = 0;
    if (DAT_14cb9a350 != 0) {
      puVar8 = local_198;
      puVar7 = &DAT_14cb9a370;
      puVar6 = &DAT_14cb9a360;
      goto LAB_14101e764;
    }
    break;
  case 6:
    local_1e8[0] = DAT_14cb9a390;
    plVar9 = local_1e8;
    local_1d8[0] = 0;
    if (DAT_14cb9a390 != 0) {
      puVar8 = local_1d8;
      puVar7 = &DAT_14cb9a3b0;
      puVar6 = &DAT_14cb9a3a0;
      goto LAB_14101e764;
    }
    break;
  case 7:
    local_228[0] = DAT_14cb9a3d0;
    plVar9 = local_228;
    local_218[0] = 0;
    if (DAT_14cb9a3d0 != 0) {
      puVar8 = local_218;
      puVar7 = &DAT_14cb9a3f0;
      puVar6 = &DAT_14cb9a3e0;
      goto LAB_14101e764;
    }
    break;
  case 8:
    local_268[0] = DAT_14cb9a410;
    plVar9 = local_268;
    local_258[0] = 0;
    if (DAT_14cb9a410 != 0) {
      puVar8 = local_258;
      puVar7 = &DAT_14cb9a430;
      puVar6 = &DAT_14cb9a420;
      goto LAB_14101e764;
    }
    break;
  default:
    goto switchD_14101e72d_default;
  }
  FUN_14101e980(param_2,plVar9);
switchD_14101e72d_default:
  if ((local_18 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101e980 FUN_14101e980 body=63 status=ok
// SIG undefined FUN_14101e980(void)

void FUN_14101e980(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_14101e9c0(param_1 + 0x1c0);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014101e9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14101e9c0 FUN_14101e9c0 body=292 status=ok
// SIG undefined FUN_14101e9c0(void)

longlong * FUN_14101e9c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
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
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101eafe FUN_14101eafe body=1566 status=ok
// SIG undefined FUN_14101eafe(void)

void FUN_14101eafe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  char cVar9;
  undefined8 unaff_RDI;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14101f11e();
  bVar3 = *(byte *)(param_1 + 0x60);
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3);
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_1 + 0x70);
  lVar11 = (longlong)local_80;
  pvVar4 = *(void **)(param_1 + 0x68);
  if (lVar11 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar4,lVar11 * 2);
  }
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_1 + 0x80);
  lVar11 = (longlong)local_90;
  pvVar4 = *(void **)(param_1 + 0x78);
  if (lVar11 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar4,lVar11 * 2);
  }
  cVar9 = *(char *)(param_1 + 0x88);
  if (param_2 != 0) {
    uVar5 = FUN_140e2120e();
    plVar6 = (longlong *)FUN_144718840(param_2,uVar5);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_78);
      uVar10 = (ulonglong)local_78 & 0xff;
      if (local_78._1_1_ == '\0') {
        uVar10 = (ulonglong)bVar3;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_78);
      ppvVar8 = (void **)&local_78;
      if (uStack_70._4_4_ == -1) {
        ppvVar8 = &local_88;
      }
      FUN_144a787a6(&local_88,ppvVar8);
      if ((uStack_70._4_4_ != -1) && (local_78 != (void *)0x0)) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
      ppvVar8 = (void **)&local_78;
      if (uStack_70._4_4_ == -1) {
        ppvVar8 = &local_98;
      }
      FUN_144a787a6(&local_98,ppvVar8);
      if ((uStack_70._4_4_ != -1) && (local_78 != (void *)0x0)) {
        FUN_1400020a8();
      }
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_78);
      if (local_78._1_1_ != '\0') {
        cVar9 = (char)local_78;
      }
    }
  }
  if (cVar9 == '\x01') {
    if (*(char *)(param_1 + 0x60) == '\x02') {
switchD_14101ef29_caseD_5:
      puVar7 = &DAT_14cb9a818;
    }
    else {
switchD_14101ef29_caseD_6:
      puVar7 = &DAT_14cb9a828;
    }
    goto LAB_14101ebfb;
  }
  switch(cVar9) {
  case '\x02':
    puVar7 = &DAT_14cb9a800;
    break;
  case '\x03':
    puVar7 = &DAT_14cb9a808;
    break;
  case '\x04':
    puVar7 = &DAT_14cb9a810;
    break;
  case '\x05':
    goto switchD_14101ef29_caseD_5;
  case '\x06':
    goto switchD_14101ef29_caseD_6;
  default:
    goto switchD_14101ef29_default;
  }
LAB_14101ebfb:
  FUN_140608954(param_2 + 0xb0,puVar7);
switchD_14101ef29_default:
  if (param_2 == 0) goto LAB_14101eea7;
  lVar11 = FUN_14101f1de();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
      != lVar11 + 0x30)) {
    lVar11 = FUN_140e212f4();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) goto LAB_14101eea7;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    FUN_140e8ffac(&local_78,&local_88);
    FUN_14101f2c4(&local_b8,uVar10 & 0xffffffff,&local_78);
    plVar6 = local_b0;
    local_a8 = local_b8;
    local_a0 = local_b0;
    if (local_b0 == (longlong *)0x0) {
      FUN_14101f572(param_2,&local_a8);
    }
    else {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
      FUN_14101f572(param_2);
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
      plVar6 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b0)(local_b0);
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
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    FUN_140e8ffac(&local_78,&local_98);
    FUN_14101f2c4(&local_b8,uVar10 & 0xffffffff,&local_78);
    plVar6 = local_b0;
    local_a8 = local_b8;
    local_a0 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
      FUN_14101f60a(param_2);
      goto LAB_14101ee75;
    }
    FUN_14101f60a(param_2,&local_a8);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    FUN_140e8ffac(&local_78,&local_88);
    FUN_14101f2c4(&local_b8,uVar10 & 0xffffffff,&local_78);
    plVar6 = local_b0;
    local_a8 = local_b8;
    local_a0 = local_b0;
    if (local_b0 == (longlong *)0x0) {
      FUN_14101f442(param_2,&local_a8);
    }
    else {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
      FUN_14101f442(param_2);
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
      plVar6 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b0)(local_b0);
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
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    FUN_140e8ffac(&local_78,&local_98);
    FUN_14101f2c4(&local_b8,uVar10 & 0xffffffff,&local_78);
    plVar6 = local_b0;
    local_a8 = local_b8;
    local_a0 = local_b0;
    if (local_b0 == (longlong *)0x0) {
      FUN_14101f4da(param_2,&local_a8);
    }
    else {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
      FUN_14101f4da(param_2);
LAB_14101ee75:
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
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_b0 + 0x10))(local_b0);
          }
        }
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14101eea7:
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14101f11e FUN_14101f11e body=191 status=ok
// SIG undefined FUN_14101f11e(void)

void FUN_14101f11e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 8);
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar2 = *(longlong **)(param_2 + 0x78);
  if (plVar2 != plVar1) {
    *(longlong **)(param_2 + 0x78) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x20);
  plVar2 = *(longlong **)(param_2 + 0x90);
  if (plVar2 != plVar1) {
    *(longlong **)(param_2 + 0x90) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(param_2 + 0xf0) = 1;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar3 = (longlong)*(int *)(param_1 + 0x58) << 3;
    do {
      FUN_140608954(param_2 + 0xb0,lVar4);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14101f1de FUN_14101f1de body=228 status=ok
// SIG undefined FUN_14101f1de(void)

longlong FUN_14101f1de(void)

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
  if (DAT_14cb9a0b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591b26;
    local_38 = &LAB_148af40b3;
    local_40 = FUN_146591b52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueDiscreteDynamic",&DAT_14cb9a0b8,
                  &DAT_148af40b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a0b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101f2c4 FUN_14101f2c4 body=382 status=ok
// SIG undefined FUN_14101f2c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14101f2c4(longlong *param_1,undefined1 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar8 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b540740;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[2] = (longlong)&PTR_FUN_14b53d760;
  *(undefined1 *)(plVar8 + 5) = param_2;
  plVar8[6] = 0;
  iVar2 = *(int *)(param_3 + 1);
  uVar3 = *param_3;
  *(int *)(plVar8 + 7) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)plVar8 + 0x3c) = 0;
  }
  else {
    FUN_140d87dac(plVar8 + 6,iVar2,0);
    FUN_140d87d23(plVar8[6],uVar3,iVar2);
  }
  plVar10 = plVar8 + 2;
  plVar8[8] = param_3[2];
  lVar4 = param_3[3];
  plVar8[9] = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)((longlong)plVar8 + 0x5d) = *(undefined8 *)((longlong)param_3 + 0x2d);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar6 = *(undefined4 *)(param_3 + 5);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(plVar8 + 10) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)plVar8 + 0x54) = uVar5;
  *(undefined4 *)(plVar8 + 0xb) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x5c) = uVar7;
  *param_1 = (longlong)plVar10;
  param_1[1] = (longlong)plVar8;
  if (plVar10 == (longlong *)0x0) {
    return param_1;
  }
  if (((plVar8[3] != 0) && (plVar8[4] != 0)) && (0 < *(int *)(plVar8[4] + 8))) {
    return param_1;
  }
  if (plVar8 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar10 = (longlong *)&DAT_00000020;
    plVar9 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar8[3] = (longlong)plVar10;
    if ((longlong *)plVar8[4] == plVar8) goto LAB_14101f3be;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    if ((longlong *)plVar8[4] == (longlong *)0x0) {
      plVar8[4] = (longlong)plVar8;
      goto LAB_14101f3be;
    }
    plVar10 = plVar8 + 4;
    plVar9 = (longlong *)plVar8[4];
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar9 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  *plVar10 = (longlong)plVar8;
  if (plVar8 == (longlong *)0x0) {
    return param_1;
  }
LAB_14101f3be:
  LOCK();
  plVar10 = plVar8 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return param_1;
}



// FUNCTION 14101f442 FUN_14101f442 body=151 status=ok
// SIG undefined FUN_14101f442(void)

void FUN_14101f442(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x140);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x140);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_14101f4b0;
    }
    *(longlong **)(param_1 + 0x140) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_14101f4b0:
                    /* WARNING: Could not recover jumptable at 0x00014101f4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14101f4da FUN_14101f4da body=151 status=ok
// SIG undefined FUN_14101f4da(void)

void FUN_14101f4da(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x150);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x150);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_14101f548;
    }
    *(longlong **)(param_1 + 0x150) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_14101f548:
                    /* WARNING: Could not recover jumptable at 0x00014101f554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14101f572 FUN_14101f572 body=151 status=ok
// SIG undefined FUN_14101f572(void)

void FUN_14101f572(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x140);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x138) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x140);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_14101f5e0;
    }
    *(longlong **)(param_1 + 0x140) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_14101f5e0:
                    /* WARNING: Could not recover jumptable at 0x00014101f5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14101f60a FUN_14101f60a body=151 status=ok
// SIG undefined FUN_14101f60a(void)

void FUN_14101f60a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x150);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x150);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_14101f678;
    }
    *(longlong **)(param_1 + 0x150) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_14101f678:
                    /* WARNING: Could not recover jumptable at 0x00014101f684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14101f6a2 FUN_14101f6a2 body=1870 status=ok
// SIG undefined FUN_14101f6a2(void)

char FUN_14101f6a2(longlong param_1,undefined4 *param_2,longlong *param_3,uint param_4,
                  undefined1 param_5,int param_6,undefined4 param_7)

{
  uint *puVar1;
  wchar_t *pwVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  char local_a5;
  uint local_a4;
  longlong *local_a0;
  code *local_98;
  code *local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pwVar2 = (wchar_t *)(param_1 + -0x3be8);
  local_a5 = FUN_14101fe5e(pwVar2,param_3,param_4);
  if (local_a5 == '\0') goto LAB_14101facb;
  lVar9 = *(longlong *)(param_1 + 0x3d00) + (longlong)(int)param_4 * 0x48;
  FUN_140705884(param_1 + 0x3bf0,lVar9);
  *(undefined4 *)(lVar9 + 0xc) = *param_2;
  if (*(char *)(param_1 + -0x3a70) != '\x03') goto LAB_14101facb;
  FUN_1401861f4(param_1 + 0x3bd8,param_4);
  local_a0 = param_3;
  if (((-1 < (int)param_4) && (*(char *)(param_1 + -0x3a70) == '\x03')) &&
     ((int)param_4 < *(int *)(param_1 + 0x3d08))) {
    lVar7 = *(longlong *)(param_1 + 0x3d00);
    uVar14 = (ulonglong)param_4;
    if ((*(longlong *)(lVar7 + 0x20 + uVar14 * 0x48) != 0) &&
       (lVar8 = lVar7 + uVar14 * 0x48, *(longlong *)(lVar8 + 0x28) != 0)) {
      lVar7 = lVar7 + uVar14 * 0x48;
      plVar16 = (longlong *)(lVar7 + 0x20);
      FUN_140705884(param_1 + 0x3bf0,lVar8);
      if (*(longlong *)(lVar8 + 0x20) == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)(lVar8 + 0x28);
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,pwVar2,param_4);
      if (*plVar16 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)(lVar8 + 0x28);
      }
      uVar6 = (**(code **)(*plVar13 + 8))();
      FUN_140aeefbc(uVar6,0,1);
      *plVar16 = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
    }
  }
  plVar16 = local_a0;
  lVar7 = FUN_1447210f0(pwVar2);
  if (lVar7 == 0) goto LAB_14101facb;
  lVar8 = *plVar16;
  puVar1 = (uint *)(lVar8 + 0x70);
  if (((*(int *)(lVar8 + 0x74) == 0) || (uVar15 = *puVar1, (int)uVar15 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar15 ||
      ((((plVar16 = (longlong *)
                    ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
         plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(lVar8 + 0x74))) ||
        ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (lVar10 = *plVar16, lVar10 == 0)))))) {
    if (*(longlong *)(lVar8 + 0x78) == 0) goto LAB_14101facb;
    lVar10 = FUN_140007850();
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar10 == 0) || (cVar4 == '\0')) {
      FUN_14485c47a(puVar1,lVar10);
      if (lVar10 == 0) goto LAB_14101facb;
    }
    else {
      uVar15 = *(uint *)(lVar10 + 0xc);
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(puVar1,lVar10);
      }
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) != 0) goto LAB_14101facb;
  }
  if (DAT_14c949118 == 0) {
    local_98 = FUN_140631fbe;
    lVar8 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar8;
    FUN_1446f470e(&local_90,L"Class",1);
    local_c8 = &LAB_146891e90;
    local_d0 = &LAB_146273097;
    local_e0 = L"Engine";
    local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
    local_e8 = 0x20;
    local_f0 = 0x10000000;
    local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,8);
    local_c0 = &local_98;
    FUN_14574b4b2(lVar8);
    DAT_14c949118 = lVar8;
    uVar6 = FUN_144a7a812();
    lVar8 = DAT_14c949118;
    uVar12 = FUN_1449e2fb2();
    local_f8 = L"Class";
    FUN_14574b446(uVar12,lVar8,uVar6,L"/Script/CoreUObject");
  }
  if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
     ((lVar8 = FUN_140126fc0(), lVar8 == 0 ||
      ((*(int *)(lVar10 + 0x38) < *(int *)(lVar8 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)))))) goto LAB_14101facb;
  local_e8 = CONCAT71(local_e8._1_7_,1);
  local_f0 = CONCAT31(local_f0._1_3_,1);
  local_f8 = pwVar2;
  local_90 = (code *)FUN_141020042(lVar7,lVar10,&DAT_14c846480,pwVar2);
  plVar16 = (longlong *)(lVar9 + 0x20);
  FUN_14101fdf2(plVar16,&local_90);
  if ((*(longlong *)(lVar9 + 0x20) == 0) ||
     (plVar13 = *(longlong **)(lVar9 + 0x28), plVar13 == (longlong *)0x0)) goto LAB_14101facb;
  if (param_6 == 0) {
    if (*(longlong **)(param_1 + 0x388) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x80))();
      if (cVar4 != '\0') goto LAB_14101f98e;
      if (*plVar16 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = *(longlong **)(lVar9 + 0x28);
      }
    }
    lVar7 = (**(code **)(*plVar13 + 8))();
    if (lVar7 != 0) {
      if (DAT_14cb939a8 == 0) {
        local_90 = FUN_140940982;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_146522c26;
        local_c8 = &LAB_148a0db91;
        local_d0 = &LAB_146572ba7;
        local_d8 = L"Engine";
        local_e0 = (wchar_t *)0x0;
        local_e8 = CONCAT44(local_e8._4_4_,0x10000004);
        local_f0 = 8;
        local_f8 = (wchar_t *)CONCAT44(local_f8._4_4_,0xdd8);
        local_c0 = &local_90;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
      }
      if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
        FUN_141020220(pwVar2,param_4);
      }
    }
  }
LAB_14101f98e:
  uVar15 = 0;
  if (*plVar16 == 0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    plVar16 = *(longlong **)(lVar9 + 0x28);
  }
  lVar9 = (**(code **)(*plVar16 + 8))();
  uVar14 = 0;
  if (lVar9 != 0) {
    uVar15 = *(uint *)(lVar9 + 0xc);
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar14 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar18 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar18);
      }
      uVar14 = 0;
      LOCK();
      uVar17 = *(uint *)(lVar7 + 0x10);
      if (uVar17 == 0) {
        *(uint *)(lVar7 + 0x10) = uVar18;
      }
      else {
        uVar14 = (ulonglong)uVar17;
      }
      UNLOCK();
      if (uVar17 == 0) {
        uVar14 = (ulonglong)uVar18;
      }
    }
  }
  if (pwVar2 == (wchar_t *)0x0) {
    uVar18 = 0;
    uVar11 = 0;
  }
  else {
    uVar18 = *(uint *)(param_1 + -0x3bdc);
    if ((int)uVar18 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar11 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar19) {
        local_a4 = uVar17;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
        uVar17 = local_a4;
      }
      LOCK();
      uVar5 = *(uint *)(lVar7 + 0x10);
      bVar19 = uVar5 == 0;
      if (bVar19) {
        *(uint *)(lVar7 + 0x10) = uVar17;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar5 = uVar17;
      }
      uVar11 = (ulonglong)uVar5;
    }
  }
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_78 = &PTR_FUN_14b95c690;
  local_78[1] = pwVar2;
  local_78[2] = (ulonglong)uVar18 | uVar11 << 0x20;
  local_78[3] = (ulonglong)uVar15 | uVar14 << 0x20;
  *(uint *)(local_78 + 4) = param_4;
  *(int *)((longlong)local_78 + 0x24) = param_6;
  *(undefined1 *)(local_78 + 5) = param_5;
  *(undefined4 *)((longlong)local_78 + 0x2c) = param_7;
  if (local_78 + 1 != (longlong *)0x0) {
    local_88[0] = FUN_1440b67ac;
  }
  FUN_140f6405a(lVar9,local_a0,local_88);
LAB_14101facb:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_a5;
}



// FUNCTION 14101fdf2 FUN_14101fdf2 body=107 status=ok
// SIG undefined FUN_14101fdf2(void)

longlong * FUN_14101fdf2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_14101fe33;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  uVar2 = FUN_14101ff5c();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
LAB_14101fe33:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 14101fe5e FUN_14101fe5e body=253 status=ok
// SIG undefined FUN_14101fe5e(void)

undefined8 FUN_14101fe5e(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x78f0))) && (*param_2 != 0)) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar5) == 0) goto LAB_14101ff4e;
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar5);
    }
    if ((*(byte *)(*param_2 + 0x368) & 0x10) != 0) {
      cVar2 = FUN_1402556d4(param_1,param_2,&local_21);
      if ((cVar2 != '\0') &&
         (lVar5 = *(longlong *)(param_1 + 0x78e8),
         *(char *)(lVar5 + 0x10 + (ulonglong)param_3 * 0x48) == '\0')) {
        cVar2 = FUN_1449ce79a(param_1);
        lVar1 = *param_2;
        if (lVar1 == 0) {
          lVar4 = 0;
        }
        else if (((cVar2 == '\0') || (lVar4 = *(longlong *)(lVar1 + 0xa0), lVar4 == 0)) &&
                (lVar4 = *(longlong *)(lVar1 + 0x98), lVar4 == 0)) {
          lVar4 = *(longlong *)(lVar1 + 0x3c);
        }
        uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),
                         lVar4 == *(longlong *)(lVar5 + (ulonglong)param_3 * 0x48 + 0x14));
        goto LAB_14101ff2f;
      }
    }
  }
LAB_14101ff4e:
  uVar3 = 0;
LAB_14101ff2f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14101ff5c FUN_14101ff5c body=228 status=ok
// SIG undefined FUN_14101ff5c(void)

longlong FUN_14101ff5c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaa708 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c122d7;
    local_40 = FUN_1465d8358;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakEquipableInventory",&DAT_14cbaa708,&DAT_148c122d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa708;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141020042 FUN_141020042 body=246 status=ok
// SIG undefined FUN_141020042(void)

longlong FUN_141020042(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  undefined4 local_64;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_64 = 8;
  lVar1 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68 = param_6;
  local_67 = param_7;
  uStack_80 = param_5;
  local_66 = 4;
  local_88 = param_4;
  if (param_2 != 0) {
    lVar1 = FUN_141037e38();
    if (lVar1 != 0) {
      lVar2 = FUN_14102013a();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_1410200ec;
    }
    lVar1 = 0;
  }
LAB_1410200ec:
  if (local_58 != 0) {
    plVar3 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar3 = local_38;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102013a FUN_14102013a body=228 status=ok
// SIG undefined FUN_14102013a(void)

longlong FUN_14102013a(void)

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
  if (DAT_14cb69b70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940a0a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c10;
    local_38 = &LAB_148755e77;
    local_40 = &LAB_146522c15;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x8c0;
    FUN_14081cfa3(L"/Script/GbxGame",L"Inventory",&DAT_14cb69b70,&DAT_148755e76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69b70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141020220 FUN_141020220 body=320 status=ok
// SIG undefined FUN_141020220(void)

void FUN_141020220(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_1 + 0x5e8))();
  if (lVar2 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
      FUN_141020362(lVar2,param_2);
    }
  }
  if ((longlong *)param_1[0x7ee] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x7ee] + 0x80))();
    if (cVar1 != '\0') goto LAB_14102026b;
  }
  *(undefined4 *)((longlong)param_1 + 0x790c) = param_2;
LAB_14102026b:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141020362 FUN_141020362 body=224 status=ok
// SIG undefined FUN_141020362(void)

void FUN_141020362(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = FUN_1403ae46b();
  if (iVar4 == param_2) {
    lVar2 = param_1[0x19c];
    iVar4 = FUN_1403ae46b();
    if ((int)lVar2 == iVar4) goto LAB_141020380;
    uVar1 = *(uint *)((longlong)param_1 + 0xce4);
    iVar4 = (int)param_1[0x19c];
LAB_1410203bc:
    *(uint *)((longlong)param_1 + 0xce4) = iVar4 + 1U | uVar1 & 0xffffff00;
  }
  else {
    if ((*(char *)((longlong)param_1 + 0xce4) == '\0') || (param_1[0x81] == 0)) goto LAB_141020380;
    lVar5 = FUN_144a2f878();
    lVar2 = param_1[0x81];
    if (((lVar2 == 0) ||
        (((lVar5 == 0 || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) ||
         (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_141020380;
    if (*(char *)(lVar2 + 0x62f9) != '\0') {
      uVar1 = *(uint *)((longlong)param_1 + 0xce4);
      iVar4 = param_2;
      goto LAB_1410203bc;
    }
    *(undefined4 *)((longlong)param_1 + 0xce4) = 0;
  }
  (**(code **)(*param_1 + 0x578))(param_1);
LAB_141020380:
  *(int *)(param_1 + 0x19c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000141020393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1);
  return;
}



// FUNCTION 141020442 FUN_141020442 body=274 status=ok
// SIG undefined FUN_141020442(void)

void FUN_141020442(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141020564 FUN_141020564 body=132 status=ok
// SIG undefined FUN_141020564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141020564(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
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



// FUNCTION 1410205e8 FUN_1410205e8 body=63 status=ok
// SIG undefined FUN_1410205e8(void)

void FUN_1410205e8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x48;
  do {
    *(undefined8 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x48 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x1c + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x14 + lVar2) = 0;
    *(undefined8 *)(param_1 + -8 + lVar2) = 0;
    *(undefined4 *)(param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while ((int)lVar2 != 0xa48);
  return;
}



// FUNCTION 141020628 FUN_141020628 body=272 status=ok
// SIG undefined FUN_141020628(void)

void FUN_141020628(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141020738 FUN_141020738 body=640 status=ok
// SIG undefined FUN_141020738(void)

void FUN_141020738(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14102079b;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14102079b:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1410209b8 FUN_1410209b8 body=62 status=ok
// SIG undefined FUN_1410209b8(void)

bool FUN_1410209b8(ushort param_1)

{
  undefined *puVar1;
  
  if ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)param_1 * 0x3c + 2) & 0x40) != 0) {
    puVar1 = &DAT_14ca96ce8;
    if (DAT_14ca96d38 != (undefined *)0x0) {
      puVar1 = DAT_14ca96d38;
    }
    return (*(uint *)(puVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0;
  }
  return false;
}



// FUNCTION 1410209f6 FUN_1410209f6 body=996 status=ok
// SIG undefined FUN_1410209f6(void)

undefined1 *
FUN_1410209f6(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 8) != 1) {
    switch(*(int *)(param_1 + 8)) {
    case 0:
      lVar4 = FUN_141020e19(param_4);
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      if (lVar4 == 0) goto LAB_141020d79;
      *(undefined4 *)(param_2 + 0x38) = 1;
      goto LAB_141020a5f;
    default:
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      goto LAB_141020d79;
    case 2:
      lVar4 = FUN_145cc3ae8(param_4);
      if (lVar4 != 0) {
LAB_141020db0:
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        goto LAB_141020a6f;
      }
      lVar4 = FUN_141020e19(param_4);
      if ((((lVar4 != 0) && (uVar3 = FUN_141526213(), -1 < (int)uVar3)) &&
          ((int)uVar3 < *(int *)(lVar4 + 0x78f0))) &&
         (((lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0 &&
           (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar4 + 0x20) != 0)) &&
          (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)))) {
        lVar5 = FUN_14593f3c6();
LAB_141020d00:
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) goto LAB_141020db0;
      }
      break;
    case 3:
      lVar4 = FUN_148d54bd8(param_4);
      if (lVar4 != 0) goto LAB_141020db0;
      lVar4 = FUN_141020e19(param_4);
      if (((lVar4 != 0) && (uVar3 = FUN_1415ef101(), -1 < (int)uVar3)) &&
         ((((int)uVar3 < *(int *)(lVar4 + 0x78f0) &&
           ((lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0 &&
            (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar4 + 0x20) != 0))))
          && (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)))) {
        lVar5 = FUN_1402566a4();
        goto LAB_141020d00;
      }
      break;
    case 4:
      lVar4 = FUN_148d54c16(param_4);
      if (lVar4 != 0) goto LAB_141020db0;
      lVar4 = FUN_141020e19(param_4);
      if (((lVar4 != 0) && (uVar3 = FUN_1403ae46b(), -1 < (int)uVar3)) &&
         (((int)uVar3 < *(int *)(lVar4 + 0x78f0) &&
          (((lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0 &&
            (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar4 + 0x20) != 0))
           && (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)))))) {
        lVar5 = FUN_141322e0c();
        goto LAB_141020d00;
      }
      break;
    case 5:
      lVar4 = FUN_140b99898(param_4);
      if (lVar4 != 0) goto LAB_141020db0;
      lVar4 = FUN_141020e19(param_4);
      if (((((lVar4 != 0) && (uVar3 = FUN_14042831e(lVar4), -1 < (int)uVar3)) &&
           ((int)uVar3 < *(int *)(lVar4 + 0x78f0))) &&
          ((lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0 &&
           (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar4 + 0x20) != 0))))
         && (lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))(), lVar4 != 0)) {
        lVar5 = FUN_144a7a5f4();
        goto LAB_141020d00;
      }
    }
LAB_141020d1f:
    FUN_140232ee4(param_4,&local_30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (local_30 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1408403ca(param_2,&local_30);
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
LAB_141020d79:
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar4 = FUN_141020ddc(param_4);
  if ((lVar4 == 0) &&
     ((lVar4 = FUN_141020e19(param_4), lVar4 == 0 || (lVar4 = FUN_14018ffce(lVar4), lVar4 == 0))))
  goto LAB_141020d1f;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
LAB_141020a5f:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
LAB_141020a6f:
  FUN_1456bb102(param_2,lVar4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 141020ddc FUN_141020ddc body=61 status=ok
// SIG undefined FUN_141020ddc(void)

longlong FUN_141020ddc(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_1401900c0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 141020e19 FUN_141020e19 body=520 status=ok
// SIG undefined FUN_141020e19(void)

longlong FUN_141020e19(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_1447262c2();
  if (lVar2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar3 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar1) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cba8288 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141864c34;
        local_20 = FUN_14081d0ea;
        local_28 = (code *)&LAB_1464cee30;
        local_38 = &LAB_148bfac22;
        local_40 = &LAB_140f21842;
        local_48 = L"Game";
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        lVar3 = *(longlong *)(lVar2 + 0x10);
        iVar1 = *(int *)(lVar3 + 0x38);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= iVar1) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
          == DAT_14cba8288 + 0x30)) goto LAB_141020e6d;
      lVar3 = FUN_140126fc0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
      }
    }
  }
  lVar2 = 0;
LAB_141020e6d:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141021032 FUN_141021032 body=266 status=ok
// SIG undefined FUN_141021032(void)

undefined8 FUN_141021032(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_48 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_50 = param_2;
      cVar3 = FUN_14472ecf8();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar6 = puVar1;
          lVar4 = (longlong)*(int *)(puVar6 + 2);
          if (lVar4 == -1) goto LAB_1410210c8;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_48 = *puVar1;
          local_50 = param_2;
          cVar3 = FUN_14472ecf8(&local_48,&local_50);
        } while (cVar3 == '\0');
        puVar6 = puVar6 + 2;
      }
      else {
        puVar6 = (undefined8 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_14102113e(param_1,*(undefined4 *)puVar6);
      uVar5 = 1;
    }
  }
LAB_1410210c8:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102113e FUN_14102113e body=91 status=ok
// SIG undefined FUN_14102113e(void)

void FUN_14102113e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140926e3c(param_1,param_2,1);
  return;
}



// FUNCTION 14102119a FUN_14102119a body=31 status=ok
// SIG undefined FUN_14102119a(void)

undefined8 FUN_14102119a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410211ba FUN_1410211ba body=31 status=ok
// SIG undefined FUN_1410211ba(void)

undefined8 FUN_1410211ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410211e2 FUN_1410211e2 body=246 status=ok
// SIG undefined FUN_1410211e2(void)

undefined8 * FUN_1410211e2(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d4f264();
  *param_1 = &PTR_FUN_14b693fd0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e1) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.InventoryAugment_ShotModifier";
  local_30 = 0x2d;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410212da FUN_1410212da body=956 status=ok
// SIG undefined FUN_1410212da(void)

void FUN_1410212da(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  uint *local_88;
  longlong *local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0x400000000;
    puVar21 = (uint *)(param_1 + 0xa0);
    iVar16 = *(int *)(param_1 + 0xb8);
    if (iVar16 == 0) {
      uVar17 = 1;
      uVar23 = 0;
      iVar10 = 0;
      iVar15 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0xb0);
      if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
        puVar7 = puVar21;
      }
      uVar22 = *puVar7;
      if (uVar22 == 0) {
        iVar10 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar10 = iVar16 + -1;
        }
        uVar23 = 0;
        uVar17 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar17 = uVar23;
        }
        iVar15 = 0;
        do {
          if (uVar17 == uVar23) goto LAB_1410215f5;
          iVar15 = iVar15 + 0x20;
          uVar22 = puVar7[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar23 = 0;
        iVar15 = 0;
      }
      uVar17 = (ulonglong)(-uVar22 & uVar22);
      uVar3 = uVar17 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar10 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar16 <= iVar10) {
        iVar10 = iVar16;
      }
    }
    if (iVar10 != iVar16) {
      plVar8 = (longlong *)(param_1 + 0x90);
      uVar22 = 0xffffffff;
      iVar6 = iVar16;
      local_98 = plVar8;
      local_90 = param_1;
      local_80 = param_2;
      do {
        uVar3 = local_50;
        lVar18 = *plVar8;
        if (*(longlong *)(lVar18 + 0x10 + (longlong)iVar10 * 0x1030) == *param_2) {
          lVar20 = (longlong)(int)local_50;
          uVar11 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar11);
          if (local_50._4_4_ < uVar11) {
            local_88 = puVar21;
            FUN_147e448ac(local_78,uVar3 & 0xffffffff);
            puVar21 = local_88;
            param_1 = local_90;
          }
          plVar8 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar8 = local_78;
          }
          plVar8[lVar20] = *(longlong *)(lVar18 + (longlong)iVar10 * 0x1030 + 8);
          iVar6 = *(int *)(param_1 + 0xb8);
          param_2 = local_80;
          plVar8 = local_98;
        }
        plVar5 = local_98;
        uVar22 = uVar22 & ~(uint)uVar17;
        puVar7 = *(uint **)(param_1 + 0xb0);
        if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
          puVar7 = puVar21;
        }
        iVar10 = (int)uVar23;
        lVar18 = (longlong)iVar10;
        uVar11 = puVar7[lVar18] & uVar22;
        if (uVar11 == 0) {
          iVar12 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar12 = iVar6 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar10) {
            iVar13 = iVar10;
          }
          if (iVar10 < iVar12) {
            lVar20 = 0;
            do {
              uVar11 = puVar7[lVar18 + lVar20 + 1];
              if (uVar11 != 0) {
                uVar23 = (ulonglong)(iVar10 + (int)lVar20 + 1);
                uVar22 = 0xffffffff;
                goto LAB_141021462;
              }
              iVar15 = iVar15 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar13 - lVar18 != lVar20);
            uVar22 = 0xffffffff;
            iVar10 = iVar13;
          }
          uVar23 = (ulonglong)(iVar10 + 1);
          param_1 = local_90;
          plVar8 = local_98;
          iVar10 = iVar6;
        }
        else {
LAB_141021462:
          uVar17 = (ulonglong)(-uVar11 & uVar11);
          uVar3 = uVar17 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar10 = (iVar15 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar10) {
            iVar10 = iVar6;
          }
        }
      } while (iVar10 != iVar16);
      plVar8 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar8 = local_58;
      }
      if ((longlong)(int)local_50 != 0) {
        plVar1 = plVar8 + (int)local_50;
        lVar18 = param_1 + 200;
        do {
          if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
            lVar20 = *plVar8;
            lVar14 = *(longlong *)(param_1 + 0xd0);
            if (*(longlong *)(param_1 + 0xd0) == 0) {
              lVar14 = lVar18;
            }
            iVar16 = *(int *)(lVar14 + ((longlong)
                                        ((int)((ulonglong)lVar20 >> 0x20) * 0x17 + (int)lVar20) &
                                       (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
            if (iVar16 != -1) {
              lVar4 = *local_98;
LAB_14102155e:
              lVar19 = (longlong)iVar16 * 0x1030;
              lVar2 = lVar4 + lVar19;
              if (*(longlong *)(lVar4 + lVar19) != lVar20) goto code_r0x000141021572;
              iVar10 = *(int *)(lVar14 + (longlong)*(int *)(lVar2 + 0x102c) * 4);
              if (iVar10 == iVar16) {
                piVar9 = (int *)(lVar14 + (longlong)*(int *)(lVar2 + 0x102c) * 4);
              }
              else {
                do {
                  piVar9 = (int *)((longlong)iVar10 * 0x1030 + lVar4 + 0x1028);
                  iVar10 = *piVar9;
                } while (iVar10 != iVar16);
              }
              *piVar9 = *(int *)(lVar2 + 0x1028);
              FUN_141082322(*plVar5 + lVar19 + 8);
              FUN_141021698(plVar5,iVar16);
              param_1 = local_90;
            }
          }
LAB_1410215bc:
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar1);
      }
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1410215f5:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000141021572:
  iVar16 = *(int *)(lVar2 + 0x1028);
  if (iVar16 == -1) goto LAB_1410215bc;
  goto LAB_14102155e;
}



// FUNCTION 141021698 FUN_141021698 body=122 status=ok
// SIG undefined FUN_141021698(void)

void FUN_141021698(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1030) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1030) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1030 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 141021712 FUN_141021712 body=340 status=ok
// SIG undefined FUN_141021712(void)

void FUN_141021712(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140836bcc();
  lVar2 = FUN_1410218b6();
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    do {
      if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (plVar4 = plVar3,
         *(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)) {
        plVar4 = (longlong *)0x0;
      }
    } while ((plVar4 == (longlong *)0x0) &&
            (plVar3 = (longlong *)plVar3[4], plVar3 != (longlong *)0x0));
    if (plVar4 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar4 + 0x330))(plVar4,param_1);
      if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410218b6 FUN_1410218b6 body=228 status=ok
// SIG undefined FUN_1410218b6(void)

longlong FUN_1410218b6(void)

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
  if (DAT_14cb634f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_1486f1b01;
    local_40 = FUN_141856bff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSequenceNotifyTrack",&DAT_14cb634f8,&DAT_1486f1b00);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb634f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410219a4 FUN_1410219a4 body=378 status=ok
// SIG undefined FUN_1410219a4(void)

undefined8 FUN_1410219a4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong local_88;
  longlong *local_70;
  char local_5f;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    FUN_147e48c04(local_98,param_2,1);
    if (*param_1 != 0) {
      FUN_147e48cd2(local_98,param_1);
    }
    FUN_147e48de0(local_98);
LAB_141021a3a:
    uVar4 = 1;
  }
  else {
    FUN_14180744c(param_1);
    FUN_140b5fdae(local_98,param_2,1);
    if (local_5f == '\x01') {
      cVar3 = FUN_14102a556(local_98,param_1);
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
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar3 != '\0') goto LAB_141021a3a;
    }
    else {
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
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
    }
    uVar4 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141021b20 FUN_141021b20 body=57 status=ok
// SIG undefined FUN_141021b20(void)

void FUN_141021b20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a708 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a708 = FUN_140002ddd(FUN_1464ca9fe,uVar1,L"GbxBodyNodeState_MovingPlatform");
  }
  return;
}



// FUNCTION 141021b5a FUN_141021b5a body=57 status=ok
// SIG undefined FUN_141021b5a(void)

void FUN_141021b5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbe310 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbe310 = FUN_140002ddd(FUN_14660ff70,uVar1,L"OakWidgetData_Backpack");
  }
  return;
}



// FUNCTION 141021b94 FUN_141021b94 body=63 status=ok
// SIG undefined FUN_141021b94(void)

undefined8 * FUN_141021b94(undefined8 *param_1)

{
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b5ecae0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  return param_1;
}



// FUNCTION 141021bd4 FUN_141021bd4 body=1687 status=ok
// SIG undefined FUN_141021bd4(void)

ulonglong FUN_141021bd4(longlong param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong unaff_RSI;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  byte local_89;
  ulonglong local_88;
  uint local_7c;
  ulonglong local_78;
  uint *local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1 != 0) {
    local_68 = 0;
    uStack_60 = 0;
    uVar6 = FUN_14102226c();
    if ((uVar6 == 0) || (DAT_14c950c29 == 0)) {
      if (uVar6 != 0) goto LAB_141021c48;
      bVar2 = true;
      if (DAT_14cad00c8 == 0) goto LAB_1410220c9;
      uVar11 = 0;
      bVar2 = true;
      unaff_RSI = uVar6;
LAB_141021c76:
      bVar18 = uVar6 != 0;
      if (uVar11 != DAT_14cad00c8) goto LAB_141021c81;
      if ((uVar6 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(uVar6);
      }
      FUN_148d76392(param_1);
    }
    else {
      FUN_1456cec3c(uVar6);
      unaff_RSI = uVar6;
LAB_141021c48:
      if (DAT_14cad00c8 == 0) {
        local_b0 = &local_50;
        local_50 = FUN_144a7958c;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1479b7a0c;
        local_c0 = &LAB_1463b464e;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10000005;
        local_e0 = 8;
        local_e8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        unaff_RSI = uVar6;
        if (DAT_14cad00c8 == 0) {
          bVar2 = false;
LAB_1410220c9:
          local_b0 = &local_50;
          local_50 = FUN_144a7958c;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b8 = &LAB_1479b7a0c;
          local_c0 = &LAB_1463b464e;
          local_c8 = L"Engine";
          local_d0 = 0;
          local_d8 = 0x10000005;
          local_e0 = 8;
          local_e8 = 0x110;
          FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
          uVar11 = 0;
          unaff_RSI = uVar6;
          goto LAB_141021c76;
        }
      }
      bVar18 = true;
      if (*(int *)(uVar6 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
        bVar2 = false;
      }
      else {
        bVar2 = false;
        uVar11 = uVar6;
        if (*(longlong *)
             (*(longlong *)(uVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
            DAT_14cad00c8 + 0x30) goto LAB_141021c76;
      }
LAB_141021c81:
      if ((bVar18 != false) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(uVar6);
      }
      puVar12 = (uint *)(param_1 + 0x250);
      uVar5 = *(uint *)(param_1 + 0x268);
      uVar11 = (ulonglong)uVar5;
      local_89 = bVar18;
      if (uVar5 == 0) {
        uVar16 = 1;
        uVar14 = 0;
        uVar4 = 0;
        unaff_RSI = 0;
      }
      else {
        puVar7 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar7 = puVar12;
        }
        uVar4 = *puVar7;
        if (uVar4 == 0) {
          iVar13 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar13 = uVar5 - 1;
          }
          uVar14 = 0;
          uVar16 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar16 = uVar14;
          }
          unaff_RSI = 0;
          do {
            if (uVar16 == uVar14) goto LAB_141022191;
            unaff_RSI = (ulonglong)((int)unaff_RSI + 0x20);
            uVar4 = puVar7[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar14 = 0;
          unaff_RSI = 0;
        }
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar8 = uVar16 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar4 = ((int)unaff_RSI - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
      if (uVar4 != uVar5) {
        uVar5 = 0xffffffff;
        local_78 = uVar11;
        local_70 = puVar12;
        do {
          local_7c = (uint)unaff_RSI;
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar4 * 0x10);
          if (lVar15 != 0) {
            if ((DAT_14c950c29 & local_89) == 1) {
              local_88 = uVar6;
              FUN_1456cec3c(uVar6);
              uVar6 = local_88;
              uVar11 = local_78;
LAB_141021d78:
              if (DAT_14cad00c8 == 0) {
                local_b0 = &local_50;
                local_50 = FUN_144a7958c;
                local_a0 = FUN_14081d0ea;
                local_a8 = FUN_14081d0ea;
                local_b8 = &LAB_1479b7a0c;
                local_c0 = &LAB_1463b464e;
                local_c8 = L"Engine";
                local_d0 = 0;
                local_d8 = 0x10000005;
                local_e0 = 8;
                local_e8 = 0x110;
                local_88 = uVar6;
                FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                uVar6 = local_88;
                uVar11 = local_78;
                if (DAT_14cad00c8 == 0) goto LAB_141021fb3;
              }
              if (*(int *)(uVar6 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141021fb3;
              uVar8 = 0;
              if (*(longlong *)
                   (*(longlong *)(uVar6 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                  DAT_14cad00c8 + 0x30) {
                uVar8 = uVar6;
              }
            }
            else {
              if (!bVar2) goto LAB_141021d78;
LAB_141021fb3:
              uVar8 = 0;
            }
            uVar3 = uStack_60;
            if ((*(int *)(uVar8 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                 (longlong)*(int *)(uVar8 + 0x38) * 8) == uVar8 + 0x30)) {
              local_88 = CONCAT44(local_88._4_4_,uVar5);
              lVar17 = (longlong)(int)uStack_60;
              uVar5 = (int)uStack_60 + 1;
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
              if (uStack_60._4_4_ < uVar5) {
                FUN_141022352(&local_68,uVar3 & 0xffffffff);
              }
              *(longlong *)(local_68 + lVar17 * 8) = lVar15;
              puVar12 = local_70;
              uVar11 = local_78;
              uVar5 = (uint)local_88;
            }
          }
          uVar5 = uVar5 & ~(uint)uVar16;
          puVar7 = *(uint **)(param_1 + 0x260);
          if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
            puVar7 = puVar12;
          }
          uVar1 = *(uint *)(param_1 + 0x268);
          iVar13 = (int)uVar14;
          lVar15 = (longlong)iVar13;
          uVar4 = puVar7[lVar15] & uVar5;
          if (uVar4 == 0) {
            iVar9 = uVar1 + 0x1e;
            if (-1 < (int)(uVar1 - 1)) {
              iVar9 = uVar1 - 1;
            }
            iVar9 = iVar9 >> 5;
            unaff_RSI = (ulonglong)(local_7c + 0x20);
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar13 < iVar9) {
              lVar17 = 0;
              do {
                uVar4 = puVar7[lVar15 + lVar17 + 1];
                if (uVar4 != 0) {
                  uVar14 = (ulonglong)(iVar13 + (int)lVar17 + 1);
                  uVar5 = 0xffffffff;
                  goto LAB_141021eb1;
                }
                unaff_RSI = (ulonglong)((int)unaff_RSI + 0x20);
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar15 != lVar17);
              uVar5 = 0xffffffff;
              iVar13 = iVar10;
            }
            uVar14 = (ulonglong)(iVar13 + 1);
            uVar4 = uVar1;
          }
          else {
            unaff_RSI = (ulonglong)local_7c;
LAB_141021eb1:
            uVar16 = (ulonglong)(-uVar4 & uVar4);
            uVar8 = uVar16 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar4 = ((int)unaff_RSI - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if ((int)uVar1 <= (int)uVar4) {
              uVar4 = uVar1;
            }
          }
        } while (uVar4 != (uint)uVar11);
      }
    }
LAB_141022191:
    if ((longlong)(int)uStack_60 == 0) {
      bVar2 = true;
    }
    else {
      lVar15 = 0;
      do {
        unaff_RSI = *(ulonglong *)(local_68 + lVar15);
        bVar18 = *(char *)(unaff_RSI + 0x67c) == param_2;
        bVar2 = !bVar18;
        if (bVar18) break;
        bVar18 = (longlong)(int)uStack_60 * 8 + -8 != lVar15;
        lVar15 = lVar15 + 8;
      } while (bVar18);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (!bVar2) goto LAB_1410221dc;
  }
  unaff_RSI = 0;
LAB_1410221dc:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RSI;
}



// FUNCTION 14102226c FUN_14102226c body=228 status=ok
// SIG undefined FUN_14102226c(void)

longlong FUN_14102226c(void)

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
  if (DAT_14cbacaa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_148c2ec69;
    local_40 = &LAB_14108b51c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x790;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMapViewerPOIIconComponent",&DAT_14cbacaa8,&DAT_148c2ec68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbacaa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141022352 FUN_141022352 body=353 status=ok
// SIG undefined FUN_141022352(void)

void FUN_141022352(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410223d7;
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
LAB_1410223d7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1410224d2 FUN_1410224d2 body=40 status=ok
// SIG undefined FUN_1410224d2(void)

undefined8 FUN_1410224d2(undefined8 param_1,int param_2)

{
  FUN_1410224fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410224fa FUN_1410224fa body=138 status=ok
// SIG undefined FUN_1410224fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410224fa(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3cd4d0;
  if (param_1[6] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014102256f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 141022584 FUN_141022584 body=829 status=ok
// SIG undefined FUN_141022584(void)

void FUN_141022584(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  local_30 = 0;
  local_28 = 0x3005;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14170fd90;
      local_60 = 0x8000000000000000;
      local_68 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_40 = local_28;
  local_38 = 0;
  FUN_1410228c2(local_18);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410228c2 FUN_1410228c2 body=333 status=ok
// SIG undefined FUN_1410228c2(void)

void FUN_1410228c2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) {
    local_58 = *param_2;
    FUN_1446dcdd4(&local_50);
    if (DAT_14cb77e00 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_144837462(DAT_14cb77e00,&local_50);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if ((lVar6 != 0) && (FUN_1405fd34a(&local_50,lVar5), local_48 != (longlong *)0x0)) {
      iVar4 = (int)local_48[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_48[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_48 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_48;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      lVar5 = local_50;
      if (plVar7 != (longlong *)0x0) {
        if (local_50 != 0) {
          local_50 = param_1;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_1);
          }
          local_48 = (longlong *)0x0;
          FUN_14187bf16(lVar5,&local_50,lVar6);
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
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141022a10 FUN_141022a10 body=9 status=ok
// SIG undefined FUN_141022a10(void)

void FUN_141022a10(longlong param_1)

{
  FUN_141022a1a(param_1 + 0x10);
  return;
}



// FUNCTION 141022a1a FUN_141022a1a body=105 status=ok
// SIG undefined FUN_141022a1a(void)

void FUN_141022a1a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &DAT_14b08e0e0;
  FUN_14028f404(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b082a90;
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000141022a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141022a83 FUN_141022a83 body=49 status=ok
// SIG undefined FUN_141022a83(void)

longlong FUN_141022a83(void)

{
  if (DAT_14c992138 == 0) {
    FUN_140f50038(&DAT_14c992138,&PTR_s__Script_Chaos_149f41040);
  }
  return DAT_14c992138;
}



// FUNCTION 141022ab4 FUN_141022ab4 body=49 status=ok
// SIG undefined FUN_141022ab4(void)

longlong FUN_141022ab4(void)

{
  if (DAT_14cb124e8 == 0) {
    FUN_140f50038(&DAT_14cb124e8,&PTR_s__Script_Serialization_14ab2e8cf_1_14ab2e8b0);
  }
  return DAT_14cb124e8;
}



// FUNCTION 141022ae5 FUN_141022ae5 body=49 status=ok
// SIG undefined FUN_141022ae5(void)

longlong FUN_141022ae5(void)

{
  if (DAT_14cb4c550 == 0) {
    FUN_140f50038(&DAT_14cb4c550,&PTR_s__Script_ModelingComponents_14aef3db0);
  }
  return DAT_14cb4c550;
}



// FUNCTION 141022b16 FUN_141022b16 body=49 status=ok
// SIG undefined FUN_141022b16(void)

longlong FUN_141022b16(void)

{
  if (DAT_14cbf6938 == 0) {
    FUN_140f50038(&DAT_14cbf6938,&PTR_s__Script_GbxPrefab_14ba783df_1_14ba783c0);
  }
  return DAT_14cbf6938;
}



// FUNCTION 141022b47 FUN_141022b47 body=49 status=ok
// SIG undefined FUN_141022b47(void)

longlong FUN_141022b47(void)

{
  if (DAT_14cc17390 == 0) {
    FUN_140f50038(&DAT_14cc17390,&PTR_s__Script_ComputeFramework_14bcd6b96_2_14bcd6b78);
  }
  return DAT_14cc17390;
}



// FUNCTION 141022b78 FUN_141022b78 body=172 status=ok
// SIG undefined FUN_141022b78(void)

void FUN_141022b78(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1403dcede();
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = (longlong)(int)param_1[1] * 0xf0;
    lVar4 = *param_1 + 0x10;
    do {
      if (*(longlong *)(lVar4 + -0xc) == *param_3) {
        lVar2 = *(longlong *)(lVar4 + 8);
        if (lVar2 == 0) {
          if (param_4 != 0) {
            lVar2 = FUN_1404dcd0c(param_4 + 0x1288,lVar4);
            if (lVar2 != 0) goto LAB_141022be1;
          }
        }
        else {
LAB_141022be1:
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_141022c24(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
      }
      lVar4 = lVar4 + 0xf0;
      lVar3 = lVar3 + -0xf0;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 141022c24 FUN_141022c24 body=353 status=ok
// SIG undefined FUN_141022c24(void)

void FUN_141022c24(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141022ca9;
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
LAB_141022ca9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141022d94 FUN_141022d94 body=22 status=ok
// SIG undefined FUN_141022d94(void)

void FUN_141022d94(longlong *param_1)

{
  if ((*param_1 != 0) && ((int)param_1[1] != -1)) {
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
  }
  return;
}



// FUNCTION 141022daa FUN_141022daa body=161 status=ok
// SIG undefined FUN_141022daa(void)

uint FUN_141022daa(longlong param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  float local_48;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)(param_1 + 0x48);
  if ((int)uVar2 < 1) {
    uVar4 = (uint)(*(float *)(param_1 + 0x30) <= *(float *)(param_1 + 200));
  }
  else {
    local_48 = 0.0;
    fVar1 = *(float *)(param_1 + 200);
    uVar3 = 0;
    do {
      FUN_141022e4c(param_1,uVar3,local_44,&local_48);
      uVar4 = uVar3;
      if (fVar1 < local_48) break;
      uVar3 = uVar3 + 1;
      uVar4 = uVar2;
    } while (uVar2 != uVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 141022e4c FUN_141022e4c body=147 status=ok
// SIG undefined FUN_141022e4c(void)

void FUN_141022e4c(longlong param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 1 && param_2 < iVar1) {
    if (iVar1 < 1) {
      if ((*(longlong *)(param_1 + 0x18) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) != '\x01')) {
        fVar2 = *(float *)(param_1 + 0x30);
      }
      else {
        auVar3 = roundps(ZEXT416(*(uint *)(param_1 + 0x30)),ZEXT416(*(uint *)(param_1 + 0x30)),3);
        fVar2 = auVar3._0_4_;
      }
    }
    else {
      fVar2 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24)) / (float)iVar1;
      if ((*(longlong *)(param_1 + 0x18) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
        auVar3 = roundps(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2),3);
        fVar2 = auVar3._0_4_;
      }
    }
    fVar4 = (float)param_2 * fVar2 + *(float *)(param_1 + 0x24);
    *param_3 = fVar4;
    *param_4 = fVar4 + fVar2;
  }
  return;
}



// FUNCTION 141022ee8 FUN_141022ee8 body=166 status=ok
// SIG undefined FUN_141022ee8(void)

undefined8 * FUN_141022ee8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a4380e0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff7fffffff;
  uVar1 = DAT_14c8464e8;
  param_1[0x1d] = DAT_14c8464e0;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = DAT_14c8464f0;
  uVar1 = DAT_14c846500;
  param_1[0x20] = DAT_14c8464f8;
  param_1[0x21] = uVar1;
  param_1[0x22] = DAT_14c846508;
  param_1[0x23] = 0x3ff0000000000000;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x26) = 0x1000000;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0x101;
  return param_1;
}



// FUNCTION 141022f8e FUN_141022f8e body=158 status=ok
// SIG undefined FUN_141022f8e(void)

void FUN_141022f8e(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  code *local_30;
  undefined8 **local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(undefined8 *)(param_2 + 4);
  FUN_14102302e();
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  local_40 = &local_20;
  local_20 = 0;
  local_28 = &local_40;
  local_30 = FUN_142b51c36;
  local_38 = param_2;
  FUN_1408d6bd2(uVar1,DAT_14c9abbf8);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102302e FUN_14102302e body=179 status=ok
// SIG undefined FUN_14102302e(void)

void FUN_14102302e(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0xd78)) {
    lVar1 = 0;
    do {
      local_60 = FUN_14362224a;
      local_70 = param_2;
      local_68 = &local_49;
      local_58 = &local_70;
      local_49 = param_3;
      FUN_144966906(*(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar1 * 8) + 0x138,&local_60);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xd78));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410230e2 FUN_1410230e2 body=565 status=ok
// SIG undefined FUN_1410230e2(void)

float FUN_1410230e2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_141023318();
  if (*(longlong *)(param_1 + 0x50) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x50) + 0x2c);
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_141023237:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x48);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != *(int *)(param_1 + 0x4c) || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)
          ))) goto LAB_141023237;
      lVar4 = *plVar5;
    }
  }
  lVar6 = *(longlong *)(lVar4 + 0x430);
  fVar7 = 0.0;
  if (lVar6 != 0) {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar6 = *(longlong *)(lVar4 + 0x430);
      fVar7 = 0.0;
      if (lVar6 == 0) goto LAB_1410231fe;
    }
    fVar7 = 0.0;
    if ((((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x10), lVar4 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      lVar4 = FUN_14030d4a0();
      fVar7 = 0.0;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        iVar2 = *(int *)(lVar6 + 0x4f0);
        if (iVar2 == 1) {
          fVar7 = *(float *)(lVar3 + 0x78);
        }
        else if (iVar2 == 2) {
          fVar7 = *(float *)(lVar3 + 0x7c);
        }
        else {
          if (iVar2 != 0) goto LAB_1410231fe;
          fVar7 = *(float *)(lVar3 + 0x74);
        }
        fVar7 = fVar7 - fVar8;
      }
    }
  }
LAB_1410231fe:
  fVar8 = 0.0;
  if (0.0 <= fVar7) {
    fVar8 = fVar7;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar8;
}



// FUNCTION 141023318 FUN_141023318 body=505 status=ok
// SIG undefined FUN_141023318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141023318(void)

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
  if (DAT_14cb74058 == (longlong *)0x0) {
    _DAT_14cb740d0 = 0;
    uRam000000014cb740d8 = 0;
    _DAT_14cb740c0 = 0;
    uRam000000014cb740c8 = 0;
    _DAT_14cb740b0 = 0;
    uRam000000014cb740b8 = 0;
    _DAT_14cb740a0 = 0;
    uRam000000014cb740a8 = 0;
    _DAT_14cb74090 = 0;
    uRam000000014cb74098 = 0;
    _DAT_14cb74080 = 0;
    uRam000000014cb74088 = 0;
    _DAT_14cb74070 = 0;
    _DAT_14cb74078 = 0;
    _DAT_14cb74060 = 0;
    DAT_14cb74068 = 0;
    FUN_145fee106(&DAT_14cb74060);
    DAT_14cb74058 = (longlong *)&DAT_14cb74060;
  }
  plVar1 = DAT_14cb74058;
  plVar4 = DAT_14cb74058 + 1;
  cVar2 = (char)DAT_14cb74058[2];
  plVar5 = plVar4;
  if (cVar2 == '\0') {
LAB_14102334c:
    if (*plVar5 == 0) goto LAB_141023464;
    plVar5 = plVar4;
    if (cVar2 == '\0') {
LAB_141023361:
      if (*plVar5 == 0) goto LAB_1410233f9;
      if ((((int)DAT_14cb74058[3] == *(int *)(*plVar5 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar4 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_141023379;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar1);
    }
    else {
      if (cVar2 == '\x02') {
        plVar5 = (longlong *)(*plVar4 + 0x30);
        goto LAB_141023361;
      }
LAB_1410233f9:
      if (((DAT_14c9a1ab0 == 0) || (*plVar4 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_141023379;
      puVar6 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar1,puVar6);
    }
    if (cVar2 == '\0') goto LAB_141023379;
  }
  else {
    if (cVar2 == '\x02') {
      plVar5 = (longlong *)(*plVar4 + 0x30);
      goto LAB_14102334c;
    }
LAB_141023464:
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_141023379;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_breadcrumb",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_141023379:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 141023512 FUN_141023512 body=11737 status=ok
// SIG undefined FUN_141023512(void)

void FUN_141023512(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  LPVOID pvVar7;
  longlong *plVar8;
  DWORD DVar9;
  char cVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  longlong *plVar12;
  undefined2 uVar13;
  uint uVar14;
  longlong lVar15;
  size_t _Size;
  undefined1 *puVar16;
  bool bVar17;
  undefined1 auStack_918 [32];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  code **local_8e0;
  undefined4 local_8d8;
  undefined1 local_8d0;
  longlong *local_8c0;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  code *local_8a8;
  undefined4 local_8a0;
  LPVOID local_898;
  longlong *local_890;
  undefined1 local_888 [2048];
  undefined1 *local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_918;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_144893a1c(param_2);
  }
  if ((param_1 != 0) && (DAT_14c76279c != 0)) {
    local_8b8 = *param_3;
    uStack_8b4 = param_3[1];
    uStack_8b0 = param_3[2];
    uStack_8ac = param_3[3];
    dwTlsIndex = DAT_14c7627b4;
    local_8c0 = param_2;
    if (DAT_14c7627b4 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar11 = 0xffffffff;
      LOCK();
      bVar17 = DAT_14c7627b4 != 0xffffffff;
      DVar9 = dwTlsIndex;
      if (bVar17) {
        DVar11 = DAT_14c7627b4;
        DVar9 = DAT_14c7627b4;
      }
      DAT_14c7627b4 = DVar9;
      UNLOCK();
      if (bVar17) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar11;
      }
    }
    plVar12 = local_8c0;
    local_898 = TlsGetValue(dwTlsIndex);
    if (local_898 == (LPVOID)0x0) {
      local_898 = (LPVOID)FUN_14181d17c();
      FUN_140fddf04(local_898);
      TlsSetValue(dwTlsIndex,local_898);
    }
    local_88 = (undefined1 *)0x0;
    local_80 = 0x10000000000;
    local_78 = local_8b8;
    uStack_74 = uStack_8b4;
    uStack_70 = uStack_8b0;
    uStack_6c = uStack_8ac;
    local_68 = 0;
    local_8e0 = &local_8a8;
    local_8a8 = (code *)0x0;
    local_8a0 = 0;
    local_8d0 = 0;
    local_8d8 = 0;
    local_8e8 = 0;
    local_8f8 = 0;
    uStack_8f0 = 0;
    local_890 = plVar12;
    FUN_144808f3c(local_898,0,0,0);
    pvVar7 = local_898;
    *(longlong *)((longlong)local_898 + 0x10) = param_1;
    *(undefined8 *)((longlong)local_898 + 0x40) = 0;
    *(undefined8 *)((longlong)local_898 + 0x48) = 0;
    *(undefined8 *)((longlong)local_898 + 0xa4) = 0xffffffff;
    *(undefined1 *)((longlong)local_898 + 0xac) = 0;
    *(undefined4 *)((longlong)local_898 + 0x98) = 0;
    if (*(int *)((longlong)local_898 + 0x9c) < 0) {
      plVar12 = (longlong *)((longlong)local_898 + 0x90);
      FUN_14481578e(plVar12);
      iVar3 = *(int *)((longlong)pvVar7 + 0x98);
      if ((longlong)iVar3 < 0) {
        *(undefined4 *)((longlong)pvVar7 + 0x98) = 0;
        if ((uint)(*(int *)((longlong)pvVar7 + 0x9c) - iVar3) < (uint)-iVar3) {
          FUN_1446f48e2(plVar12);
        }
        memset((void *)((longlong)iVar3 * 4 + *plVar12),0,(ulonglong)(uint)-iVar3 << 2);
      }
      else if (iVar3 != 0) {
        *(undefined4 *)((longlong)pvVar7 + 0x98) = 0;
        FUN_14479f406(plVar12);
      }
    }
    plVar12 = local_890;
    iVar3 = (int)local_890[1];
    *(int *)(local_890 + 1) = iVar3 + 4;
    if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 4) {
      FUN_1447403be(local_890,iVar3);
    }
    *(undefined4 *)(*plVar12 + (longlong)iVar3) = 0;
    do {
      pcVar4 = *(char **)((longlong)local_898 + 0x10);
      *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
      cVar1 = *pcVar4;
      lVar15 = 0;
      do {
        cVar10 = (**(code **)((longlong)&PTR_FUN_14ad40890 + lVar15))(cVar1,&local_898);
        if (cVar10 != '\0') goto switchD_1410236df_caseD_0;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0x10);
      switch(cVar1) {
      case '\0':
      case '\\':
        break;
      case '\x01':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b2f8c8;
LAB_1410240a0:
          FUN_144a29c16(&local_898);
LAB_1410240b8:
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_1410240ce:
          plVar12 = local_890;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          break;
        case 1:
          local_8a8 = FUN_144b2f928;
LAB_141024e7d:
          FUN_144a29c16(&local_898);
          goto LAB_141024e95;
        case 2:
          local_8a8 = FUN_144b2f9b4;
LAB_141024ab2:
          FUN_144a29c16(&local_898);
LAB_141024aca:
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024ae0:
          plVar12 = local_890;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          goto LAB_141024b0c;
        case 3:
          local_8a8 = FUN_144b2fa44;
LAB_141025918:
          FUN_144a29c16(&local_898);
          goto LAB_141025930;
        default:
          goto switchD_1410236df_caseD_0;
        }
        goto LAB_141024eb3;
      case '\x02':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b2faec;
          goto LAB_1410240a0;
        case 1:
          local_8a8 = FUN_144b2fb4c;
          goto LAB_141024e7d;
        case 2:
          local_8a8 = FUN_144b2fbd8;
          goto LAB_141024ab2;
        case 3:
          local_8a8 = FUN_144b2fc68;
          goto LAB_141025918;
        }
        break;
      case '\x03':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b2fd10;
          goto LAB_1410240a0;
        case 1:
          local_8a8 = FUN_144b2fd70;
          goto LAB_141024e7d;
        case 2:
          local_8a8 = FUN_144b2fdfc;
          goto LAB_141024ab2;
        case 3:
          local_8a8 = FUN_144b2fe8c;
          goto LAB_141025918;
        }
        break;
      case '\x04':
        FUN_148030a5c(&local_898);
        break;
      case '\x05':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b3005a;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_1410240ce;
        case 1:
          local_8a8 = FUN_144b300d0;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
          goto LAB_1410240b8;
        case 2:
          local_8a8 = FUN_144b30172;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          break;
        case 3:
          local_8a8 = FUN_144b30218;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
          break;
        case 4:
          local_8a8 = FUN_144b302de;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_141024ae0;
        case 5:
          local_8a8 = FUN_144b30384;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
          goto LAB_141024aca;
        case 6:
          local_8a8 = FUN_144b30450;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          goto LAB_141025930;
        case 7:
          local_8a8 = FUN_144b3051a;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
LAB_141025930:
          FUN_14074ef86(&local_898);
LAB_141024b0c:
          FUN_14074ef86(&local_898);
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_141024ef6;
        default:
          goto switchD_1410236df_caseD_0;
        }
LAB_141024e95:
        FUN_14074ef86(&local_898);
LAB_141024e9d:
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024eb3:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024ef6:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        break;
      case '\x06':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x03') {
          local_8a8 = FUN_144b30680;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
LAB_1410248c9:
          FUN_14074ef86(&local_898);
LAB_1410242bb:
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_1410242d1:
          plVar12 = local_890;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024314:
          plVar12 = local_890;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        }
        else {
          switch(cVar10) {
          case '\0':
            local_8a8 = FUN_144b305fa;
            FUN_144a29c16(&local_898);
            plVar12 = local_890;
            uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
            *(undefined2 **)((longlong)local_898 + 0x10) =
                 *(undefined2 **)((longlong)local_898 + 0x10) + 1;
            iVar3 = (int)local_890[1];
            *(int *)(local_890 + 1) = iVar3 + 2;
            if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
              FUN_1447403be(local_890,iVar3);
            }
            *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
            uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
            *(undefined2 **)((longlong)local_898 + 0x10) =
                 *(undefined2 **)((longlong)local_898 + 0x10) + 1;
            goto LAB_141024f5e;
          case '\x01':
            local_8a8 = FUN_1438f274a;
            FUN_144a29c16(&local_898);
            FUN_14074ef86(&local_898);
            goto LAB_141024f48;
          case '\x02':
            local_8a8 = FUN_1438f27fc;
            FUN_144a29c16(&local_898);
            plVar12 = local_890;
            uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
            *(undefined2 **)((longlong)local_898 + 0x10) =
                 *(undefined2 **)((longlong)local_898 + 0x10) + 1;
            iVar3 = (int)local_890[1];
            *(int *)(local_890 + 1) = iVar3 + 2;
            if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
              FUN_1447403be(local_890,iVar3);
            }
            *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
            goto LAB_1410248c9;
          case '\x04':
            local_8a8 = FUN_1438f28b2;
            FUN_144a29c16(&local_898);
            plVar12 = local_890;
            uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
            *(undefined2 **)((longlong)local_898 + 0x10) =
                 *(undefined2 **)((longlong)local_898 + 0x10) + 1;
            iVar3 = (int)local_890[1];
            *(int *)(local_890 + 1) = iVar3 + 2;
            if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
              FUN_1447403be(local_890,iVar3);
            }
            *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
            uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
            *(undefined2 **)((longlong)local_898 + 0x10) =
                 *(undefined2 **)((longlong)local_898 + 0x10) + 1;
            goto LAB_1410241eb;
          case '\x05':
            FUN_14645e9a6(&local_898);
            break;
          case '\x06':
            FUN_1480404a4(&local_898);
            break;
          case '\a':
            local_8a8 = FUN_144b3075a;
LAB_14102546d:
            FUN_144a29c16(&local_898);
            FUN_14074ef86(&local_898);
            goto LAB_141023c04;
          }
        }
        break;
      case '\a':
        FUN_148030a9a(&local_898);
        break;
      case '\b':
        FUN_148030b44(&local_898);
        break;
      case '\t':
        FUN_148030bee(&local_898);
        break;
      case '\n':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 != '\0') {
          if (cVar10 == '\x01') {
            local_8a8 = (code *)&LAB_1438f2a40;
            goto LAB_141023dfe;
          }
          break;
        }
        local_8a8 = (code *)&LAB_144b30a2c;
LAB_141024260:
        FUN_144a29c16(&local_898);
        goto LAB_141024e9d;
      case '\v':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_144b30a78;
LAB_1410242a3:
          FUN_144a29c16(&local_898);
          goto LAB_1410242bb;
        }
        if (cVar10 != '\x01') break;
        local_8a8 = (code *)&LAB_1438f2ab4;
LAB_141024c02:
        FUN_144a29c16(&local_898);
        FUN_14074ef86(&local_898);
LAB_141023d73:
        FUN_1457655f4(&local_898);
        break;
      case '\f':
        FUN_148030c98(&local_898);
        break;
      case '\r':
        FUN_148030d42(&local_898);
        break;
      case '\x0e':
        FUN_148030dec(&local_898);
        break;
      case '\x0f':
        FUN_148030e96(&local_898);
        break;
      case '\x10':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b30acc;
          goto LAB_1410242a3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = FUN_148036c24;
          goto LAB_141024c02;
        }
        break;
      case '\x11':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b30cbc;
          goto LAB_1410242a3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = FUN_148036caa;
          goto LAB_141024c02;
        }
        break;
      case '\x12':
        FUN_14645e49e(&local_898);
        break;
      case '\x13':
        FUN_148030f40(&local_898);
        break;
      case '\x14':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = FUN_1438f2bf6;
          goto LAB_1410242a3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = FUN_148037090;
          goto LAB_141024c02;
        }
        break;
      case '\x15':
        FUN_148030fea(&local_898);
        break;
      case '\x16':
        FUN_148031094(&local_898);
        break;
      case '\x17':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_1438f2d6c;
          goto LAB_1410242a3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_1438f2db8;
          goto LAB_141024c02;
        }
        break;
      case '\x18':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_144b30eb2;
          goto LAB_1410242a3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_148037768;
          goto LAB_141024c02;
        }
        break;
      case '\x19':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b30efe;
LAB_1410241bd:
          FUN_144a29c16(&local_898);
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_1410241eb:
          plVar12 = local_890;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
LAB_141024217:
          FUN_14074ef86(&local_898);
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_141024314;
        }
        if (cVar10 == '\x03') {
          local_8a8 = FUN_1438f2e92;
          FUN_144a29c16(&local_898);
          goto LAB_141023c04;
        }
        if (cVar10 == '\x01') {
          FUN_148040a58(&local_898);
        }
        else if (cVar10 == '\0') {
          FUN_1480409f8(&local_898);
        }
        break;
      case '\x1a':
        FUN_14645e5f2(&local_898);
        break;
      case '\x1b':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_144b31058;
          goto LAB_1410242a3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_148037be0;
          goto LAB_141024c02;
        }
        break;
      case '\x1c':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x06') {
          local_8a8 = FUN_144b310a4;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
LAB_141023c04:
          FUN_14074ef86(&local_898);
          goto LAB_141024217;
        }
        switch(cVar10) {
        case '\0':
          FUN_148040ab8(&local_898);
          break;
        case '\x01':
          FUN_148040b20(&local_898);
          break;
        case '\x02':
          FUN_14645ea0e(&local_898);
          break;
        case '\x03':
          FUN_148040b88(&local_898);
          break;
        case '\x04':
          FUN_148040bf0(&local_898);
          break;
        case '\x05':
          FUN_148040c58(&local_898);
          break;
        case '\a':
          local_8a8 = FUN_144b3116e;
          goto LAB_14102546d;
        }
        break;
      case '\x1d':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b31254;
          goto LAB_1410241bd;
        }
        if (cVar10 == '\x01') {
          local_8a8 = FUN_1438f3154;
          goto LAB_1410248b1;
        }
        if (cVar10 == '\0') {
          FUN_14645ea76(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_14645ead6(&local_898);
        }
        break;
      case '\x1e':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b312e4;
          goto LAB_141024ab2;
        }
        if (cVar10 == '\x01') {
          local_8a8 = FUN_1438f32f0;
          goto LAB_141024e7d;
        }
        if (cVar10 == '\0') {
          local_8a8 = FUN_1438f3290;
          goto LAB_1410240a0;
        }
        if (cVar10 == '\x03') {
          local_8a8 = FUN_1438f337c;
          goto LAB_141025918;
        }
        break;
      case '\x1f':
        FUN_1480310d2(&local_898);
        break;
      case ' ':
        FUN_14645e548(&local_898);
        break;
      case '!':
        FUN_14645e69c(&local_898);
        break;
      case '\"':
        FUN_148031110(&local_898);
        break;
      case '#':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_144b31374;
LAB_141023dfe:
          FUN_144a29c16(&local_898);
          goto LAB_141024b0c;
        }
        if (cVar10 == '\0') {
          local_8a8 = FUN_1438f348a;
          goto LAB_141024260;
        }
        break;
      case '$':
        FUN_14803f99c(&local_898);
        break;
      case '%':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b314f6;
          goto LAB_1410241bd;
        }
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b31496;
          goto LAB_141024f30;
        }
        if (cVar10 == '\x01') {
          FUN_14645eb36(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_14645eb96(&local_898);
        }
        break;
      case '&':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b31588;
LAB_141024f30:
          FUN_144a29c16(&local_898);
LAB_141024f48:
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024f5e:
          plVar12 = local_890;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_1410242d1;
        case 1:
          local_8a8 = FUN_144b315e8;
LAB_1410248b1:
          FUN_144a29c16(&local_898);
          goto LAB_1410248c9;
        case 2:
          local_8a8 = FUN_144b31676;
          goto LAB_1410241bd;
        case 3:
          FUN_14645ebf6(&local_898);
        }
        break;
      case '\'':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 != '\x02') {
          if (cVar10 == '\0') {
            local_8a8 = FUN_144b31708;
            goto LAB_1410243f7;
          }
          if (cVar10 == '\x03') {
            local_8a8 = FUN_144b317fa;
            goto LAB_1410253c1;
          }
          if (cVar10 == '\x01') {
            local_8a8 = FUN_1438f3784;
            goto LAB_141025632;
          }
          break;
        }
        local_8a8 = FUN_144b31768;
LAB_141024824:
        FUN_144a29c16(&local_898);
LAB_14102483c:
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024852:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        goto LAB_14102487e;
      case '(':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 != '\x02') {
          if (cVar10 == '\0') {
            local_8a8 = FUN_144b318b6;
            goto LAB_141024c36;
          }
          if (cVar10 == '\x03') {
            local_8a8 = FUN_144b319a8;
            goto LAB_141025564;
          }
          if (cVar10 == '\x01') {
            FUN_1480412e0(&local_898);
          }
          break;
        }
        local_8a8 = FUN_144b31916;
LAB_141024b36:
        FUN_144a29c16(&local_898);
        plVar12 = local_890;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
LAB_141024b90:
        FUN_14074ef86(&local_898);
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        goto LAB_141024ce6;
      case ')':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b31a64;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x03') {
          FUN_148041400(&local_898);
        }
        else if (cVar10 == '\x01') {
          FUN_1480413a0(&local_898);
        }
        else if (cVar10 == '\0') {
          FUN_148041340(&local_898);
        }
        break;
      case '*':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_1438f3872;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x01') {
          local_8a8 = FUN_144b31af6;
          goto LAB_1410239f4;
        }
        if (cVar10 == '\0') {
          FUN_14645ec56(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_148041460(&local_898);
        }
        break;
      case '+':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b31b84;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_1410249bd;
        case 1:
          local_8a8 = FUN_144b31c00;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
LAB_14102440f:
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_1410249bd:
          plVar12 = local_890;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_141024a00;
        case 2:
          local_8a8 = FUN_144b31cb6;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          break;
        case 3:
          local_8a8 = FUN_144b31d62;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
          break;
        case 4:
          local_8a8 = FUN_144b31e3c;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_141024852;
        case 5:
          local_8a8 = FUN_1438f3904;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
          goto LAB_14102483c;
        case 6:
          local_8a8 = FUN_144b31ee8;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          goto LAB_1410253d9;
        case 7:
          local_8a8 = FUN_1438f39d6;
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
LAB_1410253d9:
          FUN_14074ef86(&local_898);
LAB_14102487e:
          FUN_14074ef86(&local_898);
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          goto LAB_141024a43;
        default:
          goto switchD_1410236df_caseD_0;
        }
LAB_141023941:
        FUN_14074ef86(&local_898);
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024a00:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024a43:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        break;
      case ',':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b31fb8;
LAB_1410243f7:
          FUN_144a29c16(&local_898);
          goto LAB_14102440f;
        case 1:
          local_8a8 = FUN_144b3201a;
LAB_141025632:
          FUN_144a29c16(&local_898);
          goto LAB_141023941;
        case 2:
          local_8a8 = FUN_144b320aa;
          goto LAB_141024824;
        case 3:
          local_8a8 = FUN_1438f3abc;
LAB_1410253c1:
          FUN_144a29c16(&local_898);
          goto LAB_1410253d9;
        }
        break;
      case '-':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          FUN_14645ecb6(&local_898);
          break;
        case 1:
          FUN_1480414c0(&local_898);
          break;
        case 2:
          local_8a8 = FUN_1438f3bc8;
          goto LAB_141024b36;
        case 3:
          FUN_14645ed16(&local_898);
        }
        break;
      case '.':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          local_8a8 = FUN_144b3213e;
          goto LAB_141024c36;
        case 1:
          FUN_14645ed76(&local_898);
          break;
        case 2:
          local_8a8 = FUN_144b321a2;
          goto LAB_141024b36;
        case 3:
          local_8a8 = FUN_144b32238;
LAB_141025564:
          FUN_144a29c16(&local_898);
LAB_14102557c:
          FUN_14074ef86(&local_898);
          goto LAB_141024b90;
        }
        break;
      case '/':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          FUN_14645edd6(&local_898);
          break;
        case 1:
          FUN_14645ee36(&local_898);
          break;
        case 2:
          FUN_14645ee96(&local_898);
          break;
        case 3:
          FUN_148041520(&local_898);
        }
        break;
      case '0':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x06') {
          local_8a8 = FUN_1438f40da;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
          goto LAB_14102557c;
        }
        switch(cVar10) {
        case '\0':
          FUN_148041580(&local_898);
          break;
        case '\x01':
          FUN_1480415e8(&local_898);
          break;
        case '\x02':
          FUN_14645eef6(&local_898);
          break;
        case '\x03':
          FUN_148041650(&local_898);
          break;
        case '\x04':
          FUN_1480416b8(&local_898);
          break;
        case '\x05':
          FUN_148041720(&local_898);
          break;
        case '\a':
          FUN_148041788(&local_898);
        }
        break;
      case '1':
        FUN_14583f378(&local_898);
        break;
      case '2':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b322e4;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x03') {
          local_8a8 = FUN_144b3237a;
          goto LAB_141025564;
        }
        if (cVar10 == '\x01') {
          FUN_148041970(&local_898);
        }
        else if (cVar10 == '\0') {
          FUN_148041910(&local_898);
        }
        break;
      case '3':
        FUN_14645e746(&local_898);
        break;
      case '4':
        FUN_14803114e(&local_898);
        break;
      case '5':
        FUN_1480311f8(&local_898);
        break;
      case '6':
        FUN_1480312a2(&local_898);
        break;
      case '7':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b32428;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x03') {
          FUN_14645f01e(&local_898);
        }
        else if (cVar10 == '\0') {
          FUN_14645ef5e(&local_898);
        }
        else if (cVar10 == '\x01') {
          FUN_14645efbe(&local_898);
        }
        break;
      case '8':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b32526;
          goto LAB_141024b36;
        }
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b324bc;
          goto LAB_141024c36;
        }
        if (cVar10 == '\x01') {
          FUN_1480419d0(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_148041a30(&local_898);
        }
        break;
      case '9':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b325c2;
          goto LAB_141024b36;
        }
        if (cVar10 == '\0') {
          local_8a8 = FUN_1438f4464;
          goto LAB_141024c36;
        }
        if (cVar10 == '\x01') {
          FUN_14645f07e(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_14645f0de(&local_898);
        }
        break;
      case ':':
        FUN_1459034a0(&local_898);
        break;
      case ';':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b32656;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x03') {
          local_8a8 = FUN_144b326ea;
          goto LAB_141025564;
        }
        if (cVar10 == '\x01') {
          local_8a8 = FUN_1438f4776;
          goto LAB_1410239f4;
        }
        if (cVar10 == '\0') {
          FUN_14645f13e(&local_898);
        }
        break;
      case '<':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b327a2;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x03') {
          local_8a8 = FUN_144b3283e;
          goto LAB_141025564;
        }
        if (cVar10 == '\x01') {
          FUN_148041bb0(&local_898);
        }
        else if (cVar10 == '\0') {
          FUN_148041b50(&local_898);
        }
        break;
      case '=':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b328f6;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x03') {
          FUN_148041cd0(&local_898);
        }
        else if (cVar10 == '\x01') {
          FUN_148041c70(&local_898);
        }
        else if (cVar10 == '\0') {
          FUN_148041c10(&local_898);
        }
        break;
      case '>':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 != '\x01') {
          if (cVar10 == '\x03') {
            FUN_148041df0(&local_898);
          }
          else if (cVar10 == '\x02') {
            FUN_148041d90(&local_898);
          }
          else if (cVar10 == '\0') {
            FUN_148041d30(&local_898);
          }
          break;
        }
        local_8a8 = FUN_144b3298a;
LAB_1410239f4:
        FUN_144a29c16(&local_898);
        FUN_14074ef86(&local_898);
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        goto LAB_141024ca7;
      case '?':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = FUN_1438f4806;
          goto LAB_141024c36;
        }
        if (cVar10 == '\x02') {
          local_8a8 = FUN_1438f4866;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x01') {
          FUN_148041e50(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_148041eb0(&local_898);
        }
        break;
      case '@':
        FUN_14803134c(&local_898);
        break;
      case 'A':
        puVar16 = *(undefined1 **)((longlong)local_898 + 0x10);
        *(undefined1 **)((longlong)local_898 + 0x10) = puVar16 + 1;
        switch(*puVar16) {
        case 0:
          FUN_148041f10(&local_898);
          break;
        case 1:
          FUN_148041f70(&local_898);
          break;
        case 2:
          local_8a8 = FUN_144b32a1a;
          goto LAB_141024b36;
        case 3:
          local_8a8 = FUN_144b32ad4;
          goto LAB_141025564;
        }
        break;
      case 'B':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x02') {
          local_8a8 = FUN_144b32b84;
          goto LAB_141024b36;
        }
        if (cVar10 == '\x03') {
          FUN_148042090(&local_898);
        }
        else if (cVar10 == '\x01') {
          FUN_148042030(&local_898);
        }
        else if (cVar10 == '\0') {
          FUN_148041fd0(&local_898);
        }
        break;
      case 'C':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b32c3e;
          FUN_144a29c16(&local_898);
          plVar12 = local_890;
          uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
          *(undefined2 **)((longlong)local_898 + 0x10) =
               *(undefined2 **)((longlong)local_898 + 0x10) + 1;
          iVar3 = (int)local_890[1];
          *(int *)(local_890 + 1) = iVar3 + 2;
          if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
            FUN_1447403be(local_890,iVar3);
          }
          *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
LAB_141023d6b:
          FUN_1457655f4(&local_898);
          goto LAB_141023d73;
        }
        if (cVar10 == '\x01') {
          FUN_14645f19e(&local_898);
        }
        else if (cVar10 == '\x02') {
          FUN_14645f1fe(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_1480420f0(&local_898);
        }
        break;
      case 'D':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b32c9e;
          FUN_144a29c16(&local_898);
          FUN_1457655f4(&local_898);
          goto LAB_141023d6b;
        }
        if (cVar10 == '\x01') {
          FUN_148042150(&local_898);
        }
        else if (cVar10 == '\x02') {
          FUN_1480421b0(&local_898);
        }
        else if (cVar10 == '\x03') {
          FUN_148042210(&local_898);
        }
        break;
      case 'E':
        FUN_1480313f6(&local_898);
        break;
      case 'F':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_144b32cfe;
LAB_1410245d3:
          FUN_144a29c16(&local_898);
          FUN_1457655f4(&local_898);
        }
        else {
          if (cVar10 != '\x01') break;
          local_8a8 = (code *)&LAB_14803dab6;
LAB_141025599:
          FUN_144a29c16(&local_898);
          FUN_14074ef86(&local_898);
        }
        FUN_1457655f4(&local_898);
        break;
      case 'G':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_144b32d52;
          goto LAB_1410245d3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_14803db30;
          goto LAB_141025599;
        }
        break;
      case 'H':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_144b32d9c;
          goto LAB_1410245d3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_1438f4a1e;
          goto LAB_141025599;
        }
        break;
      case 'I':
        FUN_14645e7f0(&local_898);
        break;
      case 'J':
        FUN_148031434(&local_898);
        break;
      case 'K':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_1438f4a92;
          goto LAB_1410245d3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_1438f4ae6;
          goto LAB_141025599;
        }
        break;
      case 'L':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = (code *)&LAB_144b32de6;
          goto LAB_1410245d3;
        }
        if (cVar10 == '\x01') {
          local_8a8 = (code *)&LAB_1438f4b60;
          goto LAB_141025599;
        }
        break;
      case 'M':
        local_8a8 = (code *)&LAB_144b2f564;
        goto LAB_141024c36;
      case 'N':
        local_8a8 = (code *)&LAB_144b2f4e0;
        goto LAB_141024c36;
      case 'O':
        FUN_1480308b2(&local_898);
        break;
      case 'P':
        local_8a8 = (code *)&LAB_1438f2460;
LAB_141024c36:
        FUN_144a29c16(&local_898);
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024c64:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024ca7:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024ce6:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        break;
      case 'Q':
        FUN_14645e89a(&local_898);
        break;
      case 'R':
        FUN_148031632(&local_898);
        break;
      case 'S':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x01') {
          local_8a8 = FUN_144b32f82;
          goto LAB_141024780;
        }
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b32edc;
          goto LAB_141024780;
        }
        goto LAB_141024795;
      case 'T':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x01') {
          local_8a8 = FUN_1438f4bda;
        }
        else {
          if (cVar10 != '\0') goto LAB_141024795;
          local_8a8 = FUN_144b32e3a;
        }
        goto LAB_141024780;
      case 'U':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\x01') {
          local_8a8 = FUN_14803dfb6;
        }
        else {
          if (cVar10 != '\0') goto LAB_141024795;
          local_8a8 = FUN_14803dea6;
        }
LAB_141024780:
        FUN_144a29c16(&local_898);
LAB_141024795:
        plVar12 = local_890;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
LAB_141024921:
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        goto LAB_141024c64;
      case 'V':
        pcVar4 = *(char **)((longlong)local_898 + 0x10);
        *(char **)((longlong)local_898 + 0x10) = pcVar4 + 1;
        cVar10 = *pcVar4;
        if (cVar10 == '\0') {
          local_8a8 = FUN_144b33fa0;
LAB_14102490c:
          FUN_144a29c16(&local_898);
        }
        else if (cVar10 == '\x01') {
          local_8a8 = FUN_144b3403a;
          goto LAB_14102490c;
        }
        goto LAB_141024921;
      case 'W':
        pbVar5 = *(byte **)((longlong)local_898 + 0x10);
        *(byte **)((longlong)local_898 + 0x10) = pbVar5 + 1;
        bVar2 = *pbVar5;
        local_8a8 = FUN_144b2f5e8;
        FUN_144a29c16(&local_898);
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 1;
        if (*(int *)((longlong)local_890 + 0xc) == iVar3) {
          FUN_1447403be(local_890,iVar3);
        }
        *(byte *)(*plVar12 + (longlong)iVar3) = bVar2;
        bVar2 = *(byte *)(CONCAT44(uStack_74,local_78) + (ulonglong)bVar2);
        uVar14 = (uint)bVar2;
        if (bVar2 != 0) {
          do {
            plVar12 = local_890;
            uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
            *(undefined2 **)((longlong)local_898 + 0x10) =
                 *(undefined2 **)((longlong)local_898 + 0x10) + 1;
            iVar3 = (int)local_890[1];
            *(int *)(local_890 + 1) = iVar3 + 2;
            if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
              FUN_1447403be(local_890,iVar3);
            }
            *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        break;
      case 'X':
        local_8a8 = (code *)&LAB_144b2f864;
        FUN_144a29c16(&local_898);
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        goto LAB_141024717;
      case 'Y':
        FUN_14803fa46(&local_898);
        break;
      case 'Z':
        FUN_14803fc04(&local_898);
        break;
      case '[':
        *(longlong *)((longlong)local_898 + 0x10) = *(longlong *)((longlong)local_898 + 0x10) + 2;
        break;
      case ']':
        local_8a8 = FUN_144aec53c;
        goto LAB_141024663;
      case '^':
        local_8a8 = FUN_1438f24d2;
LAB_141024663:
        FUN_144a29c16(&local_898);
        plVar12 = local_890;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        plVar8 = local_890;
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar8 + (longlong)iVar3) = uVar13;
        uVar13 = **(undefined2 **)((longlong)local_898 + 0x10);
        *(undefined2 **)((longlong)local_898 + 0x10) =
             *(undefined2 **)((longlong)local_898 + 0x10) + 1;
LAB_141024717:
        plVar12 = local_890;
        iVar3 = (int)local_890[1];
        *(int *)(local_890 + 1) = iVar3 + 2;
        if ((uint)(*(int *)((longlong)local_890 + 0xc) - iVar3) < 2) {
          FUN_1447403be(local_890,iVar3);
        }
        *(undefined2 *)(*plVar12 + (longlong)iVar3) = uVar13;
        break;
      default:
        FUN_140033559(".\\Runtime/VectorVM/Private/VectorVM.cpp",0xef4,L"Unknown op code 0x%02x",
                      cVar1);
        *(undefined4 *)(local_8c0 + 1) = 0;
        plVar12 = local_8c0;
        if (*(int *)((longlong)local_8c0 + 0xc) != 0) goto LAB_1410261ff;
        goto LAB_14102618a;
      case '`':
        FUN_1480314de(&local_898);
        break;
      case 'a':
        FUN_148031588(&local_898);
      }
switchD_1410236df_caseD_0:
    } while (cVar1 != '\0');
    local_8a8 = (code *)0x0;
    FUN_144a29c16(&local_898);
    if ((int)local_80 - 0x100U < 0xffffff01) {
      *(undefined4 *)(local_890 + 1) = 0;
      plVar12 = local_890;
      if (*(int *)((longlong)local_890 + 0xc) < 0) {
LAB_1410261ff:
        FUN_144893a1c(plVar12,0);
      }
    }
    else {
      uVar14 = *(uint *)(local_890 + 1);
      *(uint *)*local_890 = uVar14;
      _Size = (local_80 & 0xffffffff) << 3;
      lVar15 = local_890[1];
      uVar6 = (uint)_Size;
      *(uint *)(local_890 + 1) = (int)lVar15 + uVar6;
      if ((uint)(*(int *)((longlong)local_890 + 0xc) - (int)lVar15) < uVar6) {
        FUN_1447403be();
      }
      puVar16 = local_888;
      if (local_88 != (undefined1 *)0x0) {
        puVar16 = local_88;
      }
      memcpy((void *)((ulonglong)uVar14 + *local_890),puVar16,_Size);
    }
LAB_14102618a:
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_918) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410262ec FUN_1410262ec body=150 status=ok
// SIG undefined FUN_1410262ec(void)

void FUN_1410262ec(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  FUN_14071ec36();
  plVar1 = (longlong *)(param_1 + 0x1c8);
  iVar2 = *(int *)(param_1 + 0x1b8);
  iVar3 = *(int *)(param_1 + 0x1d0);
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x1d0) = iVar2;
    if ((uint)(*(int *)(param_1 + 0x1d4) - iVar3) < (uint)(iVar2 - iVar3)) {
      FUN_141026396(plVar1,iVar3);
    }
    FUN_141026383((longlong)iVar3 * 4 + *plVar1,iVar2 - iVar3);
    return;
  }
  if (-1 < iVar2) {
    if (iVar3 <= iVar2) {
      return;
    }
    *(int *)(param_1 + 0x1d0) = iVar2;
    FUN_147f56118(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 141026383 FUN_141026383 body=19 status=ok
// SIG undefined FUN_141026383(void)

void FUN_141026383(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 141026396 FUN_141026396 body=353 status=ok
// SIG undefined FUN_141026396(void)

void FUN_141026396(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14102641b;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14102641b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 141026510 FUN_141026510 body=141 status=ok
// SIG undefined FUN_141026510(void)

undefined8 * FUN_141026510(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3f5210;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  FUN_140ef0aba(param_1 + 0x9f);
  if (*(char *)(param_1 + 0x9a) == '\x01') {
    FUN_1449db362(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
  *param_1 = &PTR_FUN_14a8379d0;
  FUN_140d7a9b4(param_1 + 0x7e);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410265ac FUN_1410265ac body=40 status=ok
// SIG undefined FUN_1410265ac(void)

undefined8 FUN_1410265ac(undefined8 param_1,int param_2)

{
  FUN_1410265d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410265d4 FUN_1410265d4 body=318 status=ok
// SIG undefined FUN_1410265d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410265d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b049ca0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1408c28ac(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001410266d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 141026712 FUN_141026712 body=142 status=ok
// SIG undefined FUN_141026712(void)

longlong FUN_141026712(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1410267a0(param_1 + 0x20,param_2 + 0x20);
  FUN_1410267fe(param_1 + 0x30,param_2 + 0x30);
  FUN_14102685c(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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



// FUNCTION 1410267a0 FUN_1410267a0 body=93 status=ok
// SIG undefined FUN_1410267a0(void)

undefined8 * FUN_1410267a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140beed8d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457e219a(param_1,iVar1);
      FUN_1457e214d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1410267fe FUN_1410267fe body=93 status=ok
// SIG undefined FUN_1410267fe(void)

undefined8 * FUN_1410267fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140beecf9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141026906(param_1,iVar1);
      FUN_1410268b9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14102685c FUN_14102685c body=93 status=ok
// SIG undefined FUN_14102685c(void)

undefined8 * FUN_14102685c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140beed42(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457e20d8(param_1,iVar1);
      FUN_1457e208c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1410268b9 FUN_1410268b9 body=76 status=ok
// SIG undefined FUN_1410268b9(void)

void FUN_1410268b9(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 141026906 FUN_141026906 body=331 status=ok
// SIG undefined FUN_141026906(void)

void FUN_141026906(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141026978;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141026978:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141026a52 FUN_141026a52 body=1077 status=ok
// SIG undefined FUN_141026a52(void)

void FUN_141026a52(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  byte bVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_140044672(param_1,iVar25);
    }
    iVar26 = (int)param_1[5];
    if (iVar26 == 0) {
      iVar15 = -1;
    }
    else {
      iVar15 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar15 = iVar26 + -1;
      }
      iVar15 = iVar15 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar20 = iVar26 + 1;
    iVar24 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar24 = iVar26;
    }
    if (iVar24 >> 5 == iVar15) {
      *(int *)(param_1 + 5) = iVar20;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar26) {
        if (iVar26 + 0x20U < 0xa0) {
          iVar20 = 0x80;
          iVar15 = iVar26;
        }
        else {
          uVar27 = iVar26 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar27) {
              uVar23 = uVar27;
            }
          }
          else {
            uVar23 = (uVar27 * 3 >> 3) + uVar27 + 0x10;
          }
          uVar18 = FUN_144a3809e(uVar23 << 2,0);
          iVar15 = (int)(uVar18 >> 2);
          iVar20 = -0x20;
          if ((int)uVar27 <= iVar15) {
            iVar20 = iVar15 << 5;
          }
          iVar15 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar20;
        FUN_1446efbd8(plVar21,iVar15);
        iVar20 = (int)param_1[5] + 1;
      }
      iVar15 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar15 = iVar20;
      }
      *(int *)(param_1 + 5) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar21;
        }
        bVar19 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar15 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar19 = (byte)iVar26 & 0x1f;
    puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar24 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar16 = (longlong)iVar25;
    iVar26 = *(int *)(*param_1 + 4 + lVar16 * 0x30);
    *(int *)(param_1 + 6) = iVar26;
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar26 * 0x30) = 0xffffffff;
    }
  }
  bVar19 = (byte)iVar25 & 0x1f;
  plVar21 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[4];
  }
  iVar26 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar26 = iVar25;
  }
  puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar26 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << bVar19;
  lVar3 = *param_1;
  lVar16 = lVar16 * 0x30;
  puVar2 = (undefined8 *)(lVar3 + lVar16);
  puVar4 = (undefined8 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar3 + lVar16) = 0;
  iVar26 = *(int *)(puVar4 + 1);
  pvVar6 = (void *)*puVar4;
  *(int *)(lVar3 + 8 + lVar16) = iVar26;
  if ((longlong)iVar26 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar26,0 << bVar19);
    memcpy((void *)*puVar2,pvVar6,(longlong)iVar26 * 2);
  }
  puVar2[2] = 0;
  iVar26 = *(int *)(puVar5 + 1);
  pvVar6 = (void *)*puVar5;
  *(int *)(puVar2 + 3) = iVar26;
  if ((longlong)iVar26 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 2,iVar26,0);
    memcpy((void *)puVar2[2],pvVar6,(longlong)iVar26 * 2);
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar5 + 2);
  *(undefined4 *)(puVar2 + 5) = 0xffffffff;
  iVar26 = *(int *)(puVar2 + 1);
  uVar27 = 0;
  iVar15 = iVar26 + -1;
  if (iVar26 == 0) {
    iVar15 = 0;
  }
  if (0 < iVar15) {
    if (iVar26 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = (undefined2 *)*puVar2;
    }
    lVar16 = 0;
    uVar27 = 0;
    do {
      uVar23 = ((uint)(0x19 < (ushort)puVar17[lVar16] - 0x61) * 0x20 + (uint)(ushort)puVar17[lVar16]
               ) - 0x20;
      uVar27 = uVar27 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar27 ^ uVar23) & 0xff) * 4);
      uVar27 = uVar27 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar27 & 0xff ^ uVar23 >> 8 & 0xff) * 4);
      lVar16 = lVar16 + 1;
    } while (iVar15 != (int)lVar16);
  }
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar26 = 1;
  if (uVar23 != 1) {
    iVar15 = FUN_141026e88(param_1,uVar27,puVar2);
    if (iVar15 != -1) {
      plVar21 = (longlong *)(*param_1 + (longlong)iVar15 * 0x30);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar15 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*plVar21 != 0) {
        FUN_1400020a8();
      }
      uVar7 = *(undefined4 *)puVar2;
      uVar8 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar9 = *(undefined4 *)(puVar2 + 1);
      uVar10 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar11 = *(undefined4 *)(puVar2 + 2);
      uVar12 = *(undefined4 *)((longlong)puVar2 + 0x14);
      uVar13 = *(undefined4 *)(puVar2 + 3);
      uVar14 = *(undefined4 *)((longlong)puVar2 + 0x1c);
      plVar21[4] = puVar2[4];
      *(undefined4 *)(plVar21 + 2) = uVar11;
      *(undefined4 *)((longlong)plVar21 + 0x14) = uVar12;
      *(undefined4 *)(plVar21 + 3) = uVar13;
      *(undefined4 *)((longlong)plVar21 + 0x1c) = uVar14;
      *(undefined4 *)plVar21 = uVar7;
      *(undefined4 *)((longlong)plVar21 + 4) = uVar8;
      *(undefined4 *)(plVar21 + 1) = uVar9;
      *(undefined4 *)((longlong)plVar21 + 0xc) = uVar10;
      FUN_147a7577c(param_1,iVar25);
      goto LAB_141026cd6;
    }
    if (3 < uVar23) {
      uVar18 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar26 = 1 << ((byte)lVar16 & 0x1f);
    }
  }
  iVar15 = iVar25;
  if (((int)uVar23 < 1) || (iVar26 <= (int)param_1[9])) {
    uVar27 = (int)param_1[9] - 1U & uVar27;
    *(uint *)((longlong)puVar2 + 0x2c) = uVar27;
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 5) =
         *(undefined4 *)
          ((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar27) * 4);
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar27) * 4) =
         iVar25;
  }
  else {
    *(int *)(param_1 + 9) = iVar26;
    FUN_141026f52(param_1);
  }
LAB_141026cd6:
  *param_2 = iVar15;
  return;
}



// FUNCTION 141026e88 FUN_141026e88 body=201 status=ok
// SIG undefined FUN_141026e88(void)

int FUN_141026e88(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_141026eca:
      lVar10 = (longlong)iVar1 * 0x30;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_141026f2a;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_141026f2a;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_141026ee8;
    }
  }
  return -1;
LAB_141026f2a:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_141026ee8:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_141026eca;
}



// FUNCTION 141026f52 FUN_141026f52 body=718 status=ok
// SIG undefined FUN_141026f52(void)

void FUN_141026f52(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x30);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x30);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x2c) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_1410271e2;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_1410271e2:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141027222 FUN_141027222 body=122 status=ok
// SIG undefined FUN_141027222(void)

void FUN_141027222(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((((*(int *)(param_1 + 0x66c) != 0) && (uVar1 = *(uint *)(param_1 + 0x668), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
       (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x66c))) &&
      ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
    return;
  }
  param_1 = (longlong)*(int *)(param_1 + 0x714) * 0x10 + param_1;
  if (*(int *)(param_1 + 0x880) <= param_2) {
    return;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x878) + (longlong)param_2) = 1;
  FUN_14102729c();
  return;
}



// FUNCTION 14102729c FUN_14102729c body=382 status=ok
// SIG undefined FUN_14102729c(void)

void FUN_14102729c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((((*(int *)(param_1 + 0x66c) != 0) && (uVar1 = *(uint *)(param_1 + 0x668), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0 &&
       (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x66c))) &&
      ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
    return;
  }
  lVar6 = (longlong)*(int *)(param_1 + 0x714) * 0x10;
  iVar2 = *(int *)(param_1 + 0x880 + lVar6);
  plVar7 = *(longlong **)(param_1 + 0x658);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) == 0) goto LAB_141027323;
  }
  else if (DAT_14c950c29 != 1) goto LAB_141027323;
  FUN_1456cec3c(plVar7);
LAB_141027323:
  lVar3 = (**(code **)(*plVar7 + 0x310))(plVar7);
  if (iVar2 == *(int *)(lVar3 + 0x28)) {
    lVar6 = lVar6 + param_1;
    plVar7 = (longlong *)(lVar6 + 0x878);
    iVar2 = *(int *)(lVar6 + 0x880);
    if (0 < iVar2) {
      lVar3 = 8;
      lVar9 = 0;
      do {
        if (*(char *)(*plVar7 + lVar9) != '\x02') {
          plVar8 = *(longlong **)(param_1 + 0x658);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x660);
            if ((DAT_14c950c29 & plVar8 != (longlong *)0x0) != 0) goto LAB_1410273d6;
          }
          else if (DAT_14c950c29 == 1) {
LAB_1410273d6:
            FUN_1456cec3c(plVar8);
          }
          lVar4 = (**(code **)(*plVar8 + 0x310))(plVar8);
          if (lVar9 < *(int *)(lVar4 + 0x28)) {
            lVar5 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x20) + lVar3);
            lVar4 = *plVar7;
            if (lVar5 == -1) goto LAB_1410273a7;
            bVar10 = *(char *)(lVar4 + lVar5) == '\x01';
          }
          else {
            lVar4 = *plVar7;
LAB_1410273a7:
            bVar10 = true;
          }
          *(bool *)(lVar4 + lVar9) = bVar10;
          iVar2 = *(int *)(lVar6 + 0x880);
        }
        lVar9 = lVar9 + 1;
        lVar3 = lVar3 + 0xc;
      } while (lVar9 < iVar2);
    }
    *(byte *)(param_1 + 0x8a1) = *(byte *)(param_1 + 0x8a1) | 8;
  }
  return;
}



// FUNCTION 141027422 FUN_141027422 body=852 status=ok
// SIG undefined FUN_141027422(void)

undefined8 * FUN_141027422(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b7f0ed0;
  param_1[0x72] = &PTR_FUN_14b7f1510;
  param_1[0x73] = &PTR_FUN_14b7f15b0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e9) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3af) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b7) = 0;
  *(undefined4 *)(param_1 + 0x81) = 2;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x431) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 2;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  FUN_1446f470e(&local_28,L"SkeletalMeshComponent",1);
  if (DAT_14cb63950 == 0) {
    local_50 = &local_20;
    local_20 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464ec72a;
    local_58 = &LAB_1486f5f75;
    local_60 = &LAB_140945686;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  local_80 = local_80 & 0xffffff00;
  local_88 = CONCAT31(local_88._1_3_,1);
  lVar2 = FUN_14048696c(param_1,local_28,DAT_14cb63950,DAT_14cb63950);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x74] = lVar2;
  FUN_1446f470e(&local_30,L"InternalGestaltPartList",1);
  uVar3 = FUN_141027778();
  local_80 = local_80 & 0xffffff00;
  local_88 = CONCAT31(local_88._1_3_,1);
  lVar2 = FUN_14048696c(param_1,local_30,uVar3,uVar3);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x75] = lVar2;
  if (param_1[0x74] != 0) {
    plVar1 = param_1 + 0x74;
    FUN_14073397e(param_1[0x74],1,1);
    *(byte *)(*plVar1 + 0xc62) = *(byte *)(*plVar1 + 0xc62) & 0xfd;
    (**(code **)(*(longlong *)*plVar1 + 0x720))((longlong *)*plVar1,0);
    (**(code **)(*(longlong *)*plVar1 + 0x3b0))((longlong *)*plVar1,0);
    *(byte *)(*plVar1 + 0x4a) = *(byte *)(*plVar1 + 0x4a) & 0xfd;
    *(undefined1 *)(*plVar1 + 0x17fe) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141027778 FUN_141027778 body=228 status=ok
// SIG undefined FUN_141027778(void)

longlong FUN_141027778(void)

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
  if (DAT_14cb68d20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14595cbc2;
    local_38 = &LAB_14874799b;
    local_40 = FUN_14185bc68;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GestaltPartListData",&DAT_14cb68d20,&DAT_14874799a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68d20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141027864 FUN_141027864 body=228 status=ok
// SIG undefined FUN_141027864(void)

longlong FUN_141027864(void)

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
  if (DAT_14cbafad8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_1465ea5ea;
    local_38 = &LAB_148c4a70b;
    local_40 = FUN_1465f0bf1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIBaseDataCollector_PlayerController",&DAT_14cbafad8,
                  &DAT_148c4a70a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbafad8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102794a FUN_14102794a body=124 status=ok
// SIG undefined FUN_14102794a(void)

void FUN_14102794a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53da40;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  param_2[0x1a] = 0;
  param_2[0x12] = 0;
  param_2[0x14] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x15] = 0x3ff0000000000000;
  param_2[0x16] = 0x3f847ae147ae147b;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 1410279c6 FUN_1410279c6 body=527 status=ok
// SIG undefined FUN_1410279c6(void)

undefined8 * FUN_1410279c6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b53d730;
  param_1[1] = 0;
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
  param_1[2] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 3) = 0;
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
  param_1[4] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14b53da10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 2;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return param_1;
}



// FUNCTION 141027bd6 FUN_141027bd6 body=40 status=ok
// SIG undefined FUN_141027bd6(void)

undefined8 FUN_141027bd6(undefined8 param_1,int param_2)

{
  FUN_141027bfe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141027bfe FUN_141027bfe body=119 status=ok
// SIG undefined FUN_141027bfe(void)

void FUN_141027bfe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8a69b0;
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14099dcc4(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141027c76 FUN_141027c76 body=255 status=ok
// SIG undefined FUN_141027c76(void)

void FUN_141027c76(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      iVar5 = 4;
    }
    else {
      uVar4 = (ulonglong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        uVar4 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
      }
      uVar3 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
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
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_141027d76(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 141027d76 FUN_141027d76 body=131 status=ok
// SIG undefined FUN_141027d76(void)

void FUN_141027d76(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 141027dfa FUN_141027dfa body=40 status=ok
// SIG undefined FUN_141027dfa(void)

undefined8 FUN_141027dfa(undefined8 param_1,int param_2)

{
  FUN_141027e22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141027e22 FUN_141027e22 body=125 status=ok
// SIG undefined FUN_141027e22(void)

void FUN_141027e22(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a513960;
  param_1[5] = &PTR_FUN_14a513c80;
  plVar3 = (longlong *)param_1[0x31];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 141027ea0 FUN_141027ea0 body=40 status=ok
// SIG undefined FUN_141027ea0(void)

undefined8 FUN_141027ea0(undefined8 param_1,int param_2)

{
  FUN_141027ec8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141027ec8 FUN_141027ec8 body=589 status=ok
// SIG undefined FUN_141027ec8(void)

void FUN_141027ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b91db00;
  param_1[0x72] = &PTR_FUN_14b91e1a0;
  param_1[0x73] = &PTR_FUN_14b91e1c0;
  param_1[0x74] = &PTR_FUN_14b91e1f0;
  param_1[0x75] = &PTR_FUN_14b91e200;
  param_1[0x76] = &PTR_FUN_14b91e270;
  param_1[0x77] = &PTR_FUN_14b91e2a0;
  param_1[0x78] = &PTR_FUN_14b91e2d0;
  param_1[0x7f] = &PTR_FUN_14b91e380;
  param_1[0x80] = &PTR_FUN_14b91e3f0;
  param_1[0x81] = &PTR_FUN_14b91e460;
  param_1[0x82] = &PTR_FUN_14b91e490;
  param_1[0x83] = &PTR_FUN_14b91e4d0;
  param_1[0x84] = &PTR_FUN_14b91e570;
  param_1[0x85] = &PTR_FUN_14b91e590;
  param_1[0x89] = &PTR_FUN_14b91e5b0;
  param_1[0x8a] = &PTR_FUN_14b91e670;
  param_1[0x8b] = &PTR_FUN_14b91e6f0;
  param_1[0x8c] = &PTR_FUN_14b91e740;
  param_1[0x8d] = &PTR_FUN_14b91e780;
  param_1[0x8e] = &PTR_FUN_14b91e7a0;
  param_1[0x8f] = &PTR_FUN_14b91e7c0;
  param_1[0x90] = &PTR_FUN_14b91e7e0;
  param_1[0x91] = &PTR_FUN_14b91e800;
  param_1[0x92] = &PTR_FUN_14b91e820;
  param_1[0x93] = &PTR_FUN_14b91e840;
  param_1[0x94] = &PTR_FUN_14b91e860;
  param_1[0x95] = &PTR_FUN_14b91e880;
  param_1[0x96] = &PTR_FUN_14b91e8a0;
  param_1[0x34b] = &PTR_FUN_14b91e8c0;
  param_1[0x352] = &PTR_FUN_14b91e8d0;
  param_1[0x353] = &PTR_FUN_14b91e910;
  param_1[0x354] = &PTR_FUN_14b91e950;
  param_1[0x355] = &PTR_FUN_14b91e9a0;
  param_1[0x356] = &PTR_FUN_14b91e9d0;
  param_1[0x359] = &PTR_FUN_14b91ea10;
  param_1[0x35a] = &PTR_FUN_14b91ea20;
  param_1[0x35b] = &PTR_FUN_14b91ea50;
  param_1[0x35c] = &PTR_FUN_14b91eaf0;
  param_1[0x4bf] = &PTR_FUN_14b91eb10;
  FUN_141028116(param_1 + 0x4e0);
  FUN_14102816a(param_1);
  return;
}



// FUNCTION 141028116 FUN_141028116 body=83 status=ok
// SIG undefined FUN_141028116(void)

void FUN_141028116(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b929bc0;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b5ecc40;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b5ecc40;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_140639928(param_1);
  return;
}



// FUNCTION 14102816a FUN_14102816a body=819 status=ok
// SIG undefined FUN_14102816a(void)

void FUN_14102816a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b93aac0;
  param_1[0x72] = &PTR_FUN_14b93b150;
  param_1[0x73] = &PTR_FUN_14b93b170;
  param_1[0x74] = &PTR_FUN_14b93b1a0;
  param_1[0x75] = &PTR_FUN_14b93b1b0;
  param_1[0x76] = &PTR_FUN_14b93b220;
  param_1[0x77] = &PTR_FUN_14b93b250;
  param_1[0x78] = &PTR_FUN_14b93b280;
  param_1[0x7f] = &PTR_FUN_14b93b330;
  param_1[0x80] = &PTR_FUN_14b93b3a0;
  param_1[0x81] = &PTR_FUN_14b93b410;
  param_1[0x82] = &PTR_FUN_14b93b440;
  param_1[0x83] = &PTR_FUN_14b93b480;
  param_1[0x84] = &PTR_FUN_14b93b520;
  param_1[0x85] = &PTR_FUN_14b93b540;
  param_1[0x89] = &PTR_FUN_14b93b560;
  param_1[0x8a] = &PTR_FUN_14b93b620;
  param_1[0x8b] = &PTR_FUN_14b93b6a0;
  param_1[0x8c] = &PTR_FUN_14b93b6f0;
  param_1[0x8d] = &PTR_FUN_14b93b730;
  param_1[0x8e] = &PTR_FUN_14b93b750;
  param_1[0x8f] = &PTR_FUN_14b93b770;
  param_1[0x90] = &PTR_FUN_14b93b790;
  param_1[0x91] = &PTR_FUN_14b93b7b0;
  param_1[0x92] = &PTR_FUN_14b93b7d0;
  param_1[0x93] = &PTR_FUN_14b93b7f0;
  param_1[0x94] = &PTR_FUN_14b93b810;
  param_1[0x95] = &PTR_FUN_14b93b830;
  param_1[0x96] = &PTR_FUN_14b93b850;
  param_1[0x34b] = &PTR_FUN_14b93b870;
  param_1[0x352] = &PTR_FUN_14b93b880;
  param_1[0x353] = &PTR_FUN_14b93b8c0;
  param_1[0x354] = &PTR_FUN_14b93b900;
  param_1[0x355] = &PTR_FUN_14b93b950;
  param_1[0x356] = &PTR_FUN_14b93b980;
  param_1[0x359] = &PTR_FUN_14b93b9c0;
  param_1[0x35a] = &PTR_FUN_14b93b9d0;
  param_1[0x35b] = &PTR_FUN_14b93ba00;
  param_1[0x35c] = &PTR_FUN_14b93baa0;
  param_1[0x4bf] = &PTR_FUN_14b93bac0;
  plVar3 = (longlong *)param_1[0x4de];
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
  if (param_1[0x4da] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d3] != 0) {
    FUN_1400020a8();
  }
  FUN_140e02d42(param_1[0x4d1],*(undefined4 *)(param_1 + 0x4d2));
  if (param_1[0x4d1] != 0) {
    FUN_1400020a8();
  }
  FUN_1407e878c(param_1 + 0x4cf);
  plVar3 = (longlong *)param_1[0x4c6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x4c2] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1410284a6 FUN_1410284a6 body=203 status=ok
// SIG undefined FUN_1410284a6(void)

undefined8 * FUN_1410284a6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140ac1c72(param_1,uVar1);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14b94ea20;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 1;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0xbff0000000000000;
  param_1[0x1b] = 0xbff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xe3) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
  return param_1;
}



// FUNCTION 141028572 FUN_141028572 body=18 status=ok
// SIG undefined FUN_141028572(void)

undefined4 * FUN_141028572(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 141028584 FUN_141028584 body=115 status=ok
// SIG undefined FUN_141028584(void)

void FUN_141028584(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1410285f8();
    if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
    }
    *(longlong **)(param_1 + 0x2260) = plVar4;
    FUN_140655f5e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1410285f8 FUN_1410285f8 body=57 status=ok
// SIG undefined FUN_1410285f8(void)

void FUN_1410285f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba76e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba76e0 = FUN_140002ddd(FUN_1465ccd04,uVar1,L"OakBoundaryDef");
  }
  return;
}



// FUNCTION 141028632 FUN_141028632 body=1052 status=ok
// SIG undefined FUN_141028632(void)

void FUN_141028632(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined2 *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined2 local_2c;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_141028719;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_141028719:
  local_2c = 0;
  FUN_140e98e1a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1410287c4;
          }
        }
        _Src_00 = (undefined2 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_1410287c4:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = (**(code **)(*param_1 + 0x750))(param_1,local_29,local_2c);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerStartUsing_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x758))(param_1,local_29,local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141028a6c FUN_141028a6c body=115 status=ok
// SIG undefined FUN_141028a6c(void)

void FUN_141028a6c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_141028ae0();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_141028a97;
  }
  else {
    FUN_14689c22e(lVar1);
LAB_141028a97:
    lVar2 = FUN_141028ae0();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
      goto LAB_141028abc;
    }
  }
  lVar3 = 0;
LAB_141028abc:
  FUN_1448a6f9c(param_1 + 0x100,lVar3);
  return;
}



// FUNCTION 141028ae0 FUN_141028ae0 body=228 status=ok
// SIG undefined FUN_141028ae0(void)

longlong FUN_141028ae0(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96f28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68e29;
    local_40 = &LAB_14657f1c0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x228;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxOnlineLoginManager",&DAT_14cb96f28,&DAT_148a68e28);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96f28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141028c0a FUN_141028c0a body=772 status=ok
// SIG undefined FUN_141028c0a(void)

void FUN_141028c0a(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_9c;
  ulonglong local_98;
  longlong local_90;
  int local_88;
  undefined8 *local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_141028c5f;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_141028c5f:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar7 = (ulonglong)uVar1;
  uVar10 = *(ulonglong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_141028caf;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_141028caf:
  local_a8 = *plVar8;
  iVar3 = *(int *)(param_2 + 0x14);
  local_9c = iVar2;
  local_98 = uVar10;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar5 = *plVar9;
  FUN_140b325e4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_50 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if ((local_80 != (undefined8 *)0x0) && (uVar1 != 0)) {
        uVar10 = 0;
        puVar6 = local_80;
        do {
          uVar4 = FUN_141028f10(*puVar6,*(undefined8 *)(lVar5 + uVar10 * 8));
          *(undefined1 *)(local_a8 + uVar10) = uVar4;
          uVar10 = uVar10 + 1;
          puVar6 = puVar6 + 2;
        } while (uVar7 != uVar10);
      }
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
        }
      }
    }
    else if (uVar7 != 0) {
      uVar10 = 0;
      do {
        *(undefined1 *)(local_a8 + uVar10) =
             *(undefined1 *)
              (*(longlong *)(lVar5 + uVar10 * 8) + (ulonglong)*(ushort *)(local_68 + uVar10 * 2));
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
      }
    }
  }
  else if (uVar7 != 0) {
    uVar10 = 0;
    do {
      uVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) *
                          (ulonglong)*(ushort *)(local_50 + uVar10 * 2)))
                        (*(undefined8 *)(lVar5 + uVar10 * 8));
      *(undefined1 *)(local_a8 + uVar10) = uVar4;
      uVar10 = uVar10 + 1;
    } while (uVar7 != uVar10);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar10 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_98) {
      uVar10 = local_98;
    }
    plVar8[2] = uVar10;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_9c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141028f10 FUN_141028f10 body=112 status=ok
// SIG undefined FUN_141028f10(void)

ulonglong FUN_141028f10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406f9c46(param_1,local_50,param_2);
  lVar1 = FUN_1406f977c(local_50);
  if ((lVar1 == 0) ||
     (puVar2 = (undefined1 *)(*(int *)(lVar1 + 0x44) + local_28), puVar2 == (undefined1 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)local_50 >> 8),*puVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141028f82 FUN_141028f82 body=152 status=ok
// SIG undefined FUN_141028f82(void)

longlong * FUN_141028f82(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    do {
      plVar1 = (longlong *)FUN_1400d690e(lVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x70))(plVar1,&local_30);
        if (local_30 != 0) goto LAB_141028fe0;
      }
      lVar2 = lVar2 + 0xf8;
      lVar3 = lVar3 + -0xf8;
    } while (lVar3 != 0);
  }
  local_30 = 0;
LAB_141028fe0:
  *param_2 = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102901c FUN_14102901c body=204 status=ok
// SIG undefined FUN_14102901c(void)

void FUN_14102901c(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

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



// FUNCTION 1410290ea FUN_1410290ea body=210 status=ok
// SIG undefined FUN_1410290ea(void)

void FUN_1410290ea(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = param_4;
  puVar2 = (undefined8 *)FUN_1409801a0();
  uVar1 = *puVar2;
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x28,8);
  *local_68 = (longlong)&PTR_FUN_14b9b75a0;
  local_68[1] = param_2;
  local_68[2] = param_3;
  local_68[3] = (longlong)&local_79;
  local_68[4] = param_1;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_1442a7c04;
  }
  FUN_140980216(uVar1,local_78);
  if (local_78[0] != (code *)0x0) {
    plVar3 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar3 = local_58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410291be FUN_1410291be body=445 status=ok
// SIG undefined FUN_1410291be(void)

undefined8 *
FUN_1410291be(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
             char param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = param_3;
  local_40 = param_2;
  if (param_5 == '\0') {
    *param_1 = param_2;
  }
  else {
    FUN_1400021e4(&local_40,&local_68);
    puVar3 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar3 = local_68;
    }
    FUN_140002266(&local_58,&DAT_14b47b6d8,puVar3);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_1446f470e(param_1,puVar3,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(char *)(param_1 + 1) = param_5;
  param_1[2] = 0;
  if (param_6 == '\0') {
    FUN_1400021e4(&local_48,&local_68);
    puVar3 = local_68;
    if (local_60 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_58,L"===  %s  ===",puVar3);
    iVar1 = local_50 + -1;
    if (local_50 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(local_70,iVar1,local_58,1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (param_4 == '\0') {
      FUN_1410293e6();
      puVar2 = &DAT_14cb92ff0;
    }
    else {
      FUN_14102937c();
      puVar2 = &DAT_14cb92fd8;
    }
    FUN_140721fbe(puVar2,local_70);
    FUN_140721fbe(puVar2,param_1);
  }
  param_1[2] = DAT_14cb92fd0;
  DAT_14cb92fd0 = param_1;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14102937c FUN_14102937c body=106 status=ok
// SIG undefined FUN_14102937c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14102937c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb92fe8) {
    FUN_144b3d300(&DAT_14cb92fe8);
    if (DAT_14cb92fe8 == -1) {
      DAT_14cb92fd8 = 0;
      _DAT_14cb92fe0 = 0;
      atexit((_func_5014 *)&LAB_143ebe6cf);
      _Init_thread_footer(&DAT_14cb92fe8);
    }
  }
  return &DAT_14cb92fd8;
}



// FUNCTION 1410293e6 FUN_1410293e6 body=106 status=ok
// SIG undefined FUN_1410293e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410293e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb93000) {
    FUN_144b3d300(&DAT_14cb93000);
    if (DAT_14cb93000 == -1) {
      DAT_14cb92ff0 = 0;
      _DAT_14cb92ff8 = 0;
      atexit((_func_5014 *)&LAB_143ebe6e0);
      _Init_thread_footer(&DAT_14cb93000);
    }
  }
  return &DAT_14cb92ff0;
}



// FUNCTION 141029450 FUN_141029450 body=93 status=ok
// SIG undefined FUN_141029450(void)

void FUN_141029450(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1401c3ca6();
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x20))(param_1 + 0x110);
  *(undefined1 *)(lVar1 + 0x590) = 0;
  lVar2 = FUN_14061177a(lVar1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x90) == '\x01')) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    FUN_140fd71ce(lVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 1410294ae FUN_1410294ae body=329 status=ok
// SIG undefined FUN_1410294ae(void)

undefined8 * FUN_1410294ae(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    return *(undefined8 **)(param_1 + 8);
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x598,0x10);
  puVar1 = (uint *)(puVar5 + 1);
  if ((param_1 == 0x110) || (DAT_14c950c29 == '\0')) {
    *puVar5 = &PTR_FUN_14b3f85a8;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar5[2] = 0;
    if (param_1 == 0x110) {
      lVar6 = 0;
      iVar4 = 0;
      goto LAB_14102954c;
    }
  }
  else {
    FUN_1456cec3c();
    *puVar5 = &PTR_FUN_14b3f85a8;
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar5[2] = 0;
  }
  uVar2 = *(uint *)(param_1 + -0x104);
  *puVar1 = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  lVar6 = param_1;
  iVar4 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar4 = *(int *)(lVar8 + 0x10);
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(lVar8 + 0x10) = iVar7;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar4 = iVar7;
    }
  }
LAB_14102954c:
  *(int *)((longlong)puVar5 + 0xc) = iVar4;
  puVar5[2] = lVar6;
  *(undefined1 *)(puVar5 + 3) = 0;
  FUN_140e29552(puVar5 + 4);
  *(undefined1 *)(puVar5 + 0xb2) = 0;
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    puVar5 = *(undefined8 **)(param_1 + 8);
  }
  return puVar5;
}



// FUNCTION 1410295f8 FUN_1410295f8 body=305 status=ok
// SIG undefined FUN_1410295f8(void)

void FUN_1410295f8(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_141029692;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14102966b:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14102966b;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_141029692;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141029692:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102972a FUN_14102972a body=118 status=ok
// SIG undefined FUN_14102972a(void)

void FUN_14102972a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b430810;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4307a0;
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



// FUNCTION 1410297b6 FUN_1410297b6 body=82 status=ok
// SIG undefined FUN_1410297b6(void)

void FUN_1410297b6(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xb30) == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x9f8) != 0) &&
     (lVar1 = FUN_140faa2e4(*(longlong *)(param_1 + 0xb30) + 0x18),
     *(longlong *)(param_1 + 0x9f8) != lVar1)) {
    return;
  }
  FUN_141029808(param_1 + 0x3a0,param_1 + 0xab8);
  return;
}



// FUNCTION 141029808 FUN_141029808 body=890 status=ok
// SIG undefined FUN_141029808(void)

void FUN_141029808(longlong param_1,int *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  uint uVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    piVar11 = &DAT_14c9485f0;
  }
  else {
    piVar3 = *(int **)(*(longlong *)(param_1 + 0x80) + 8);
    piVar11 = &DAT_14c9485f0;
    if (piVar3 != (int *)0x0) {
      piVar11 = piVar3;
    }
  }
  bVar5 = *param_2 != *piVar11;
  if (*param_2 == *piVar11) {
    bVar14 = 0;
  }
  else {
    if (DAT_14cb818a8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_144815d88(DAT_14cb818a8,param_2);
    }
    *(undefined8 *)(param_1 + 0x80) = uVar10;
    if (0 < *(int *)(param_1 + 0x58)) {
      FUN_1447325ac(param_2,&local_50,1);
      local_48 = local_50;
      local_40 = 0x678bcdb;
      local_38 = 0;
      FUN_14185c17c(param_1 + 0x50,&local_48,0);
    }
    bVar14 = *(byte *)(param_1 + 0xf0);
  }
  if (*(longlong *)(param_1 + 0x88) == 0) {
    piVar11 = &DAT_14c9485f0;
  }
  else {
    piVar3 = *(int **)(*(longlong *)(param_1 + 0x88) + 8);
    piVar11 = &DAT_14c9485f0;
    if (piVar3 != (int *)0x0) {
      piVar11 = piVar3;
    }
  }
  if (param_2[10] != *piVar11) {
    if (DAT_14cb818a8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_144815d88();
    }
    *(undefined8 *)(param_1 + 0x88) = uVar10;
    bVar14 = *(byte *)(param_1 + 0xf0);
    bVar5 = true;
  }
  if ((((*(double *)(param_2 + 0x14) != *(double *)(param_1 + 0xa0)) ||
       (NAN(*(double *)(param_2 + 0x14)) || NAN(*(double *)(param_1 + 0xa0)))) ||
      (*(double *)(param_2 + 0x16) != *(double *)(param_1 + 0xa8))) ||
     (((NAN(*(double *)(param_2 + 0x16)) || NAN(*(double *)(param_1 + 0xa8)) ||
       (*(double *)(param_2 + 0x18) != *(double *)(param_1 + 0xb0))) ||
      (NAN(*(double *)(param_2 + 0x18)) || NAN(*(double *)(param_1 + 0xb0)))))) {
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0xa8) = uVar10;
    bVar14 = *(byte *)(param_1 + 0xf0);
  }
  uVar2 = *(ushort *)((longlong)param_2 + 0x6a);
  uVar12 = (uint)uVar2 * 0x2000;
  if ((uVar12 & 0xf800000) == 0xf800000) {
    uVar8 = (int)(short)uVar2 & 0x80000000;
    fVar7 = (float)(uVar12 + uVar8 | 0x70000000);
    if ((*(float *)(param_1 + 0x5f0) == fVar7) && (!NAN(*(float *)(param_1 + 0x5f0)) && !NAN(fVar7))
       ) goto LAB_14102996e;
    fVar7 = (float)(uVar12 | uVar8 | 0x70000000);
  }
  else {
    fVar7 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
    if ((uVar12 & 0xf800000) != 0) {
      fVar7 = (float)((uVar12 & 0xfffe000) + 0x38000000);
    }
    fVar7 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar7);
    if ((*(float *)(param_1 + 0x5f0) == fVar7) && (!NAN(*(float *)(param_1 + 0x5f0)) && !NAN(fVar7))
       ) goto LAB_14102996e;
  }
  *(float *)(param_1 + 0x5f0) = fVar7;
  uVar12 = (uint)*(ushort *)(param_2 + 0x1a) << 0xd;
  if ((uVar12 & 0xf800000) == 0xf800000) {
    fVar13 = (float)(uVar12 | 0x70000000);
  }
  else if ((uVar12 & 0xf800000) == 0) {
    fVar13 = (float)(uVar12 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar13 = (float)((uVar12 & 0xfffe000) + 0x38000000);
  }
  *(uint *)(param_1 + 0xb8) = (int)(short)*(ushort *)(param_2 + 0x1a) & 0x80000000U | (uint)fVar13;
  if (((fVar7 != 0.0) || (NAN(fVar7))) &&
     (plVar4 = *(longlong **)(param_1 + 0x5e0), plVar4 != (longlong *)0x0)) {
    iVar9 = (int)plVar4[1];
    do {
      if (iVar9 == 0) goto LAB_14102996e;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar15 = iVar9 == iVar6;
      if (bVar15) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar15);
    if (*(longlong *)(param_1 + 0x5d8) != 0) {
      FUN_1405fd550(*(longlong *)(param_1 + 0x5d8),param_1 + 0x598);
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar11 = (int *)((longlong)plVar4 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14102996e:
  if (bVar5) {
    FUN_1447f69b6(param_1);
  }
  if ((bVar14 & 1) != 0) {
    FUN_1405ff6be(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141029b84 FUN_141029b84 body=237 status=ok
// SIG undefined FUN_141029b84(void)

undefined8 * FUN_141029b84(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4ce5a0;
  param_1[8] = &PTR_LAB_14a4ce880;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[10];
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
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141029c72 FUN_141029c72 body=9 status=ok
// SIG undefined FUN_141029c72(void)

void FUN_141029c72(longlong param_1)

{
  FUN_141029c86(param_1 + 0x10);
  return;
}



// FUNCTION 141029c7c FUN_141029c7c body=9 status=ok
// SIG undefined FUN_141029c7c(void)

void FUN_141029c7c(longlong param_1)

{
  FUN_141029c86(param_1 + 0x10);
  return;
}



// FUNCTION 141029c86 FUN_141029c86 body=731 status=ok
// SIG undefined FUN_141029c86(void)

void FUN_141029c86(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a4d79a0;
  plVar4 = (longlong *)param_1[0x1a];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  FUN_141029f75(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  plVar4 = param_1 + 0xd;
  puVar2 = param_1 + 0xf;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = puVar2;
  if (*(int *)(param_1 + 0x12) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar4;
  if (iStack_34 < *(int *)(local_40 + 3)) {
    do {
      if (*(longlong *)(*local_70 + 0x38 + (longlong)iStack_54 * 0x50) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 3));
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140e9549c(plVar4,0);
  }
  param_1[0x13] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x94)) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_1407f13e6(param_1 + 3,0);
  }
  param_1[9] = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x44)) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
    FUN_1446efbd8(param_1 + 5,0);
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    LOCK();
    piVar3 = (int *)(param_1[2] + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141029f75 FUN_141029f75 body=49 status=ok
// SIG undefined FUN_141029f75(void)

void FUN_141029f75(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141029fb2 FUN_141029fb2 body=122 status=ok
// SIG undefined FUN_141029fb2(void)

undefined8 * FUN_141029fb2(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  memset(param_1 + 8,0,0xb0);
  *param_1 = &PTR_FUN_14a6aa330;
  return param_1;
}



// FUNCTION 14102a02c FUN_14102a02c body=8 status=ok
// SIG undefined FUN_14102a02c(void)

void FUN_14102a02c(undefined8 param_1)

{
  FUN_1400ea36e(param_1,param_1);
  return;
}



// FUNCTION 14102a034 FUN_14102a034 body=107 status=ok
// SIG undefined FUN_14102a034(void)

void FUN_14102a034(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14102a0a0(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14102a0a0 FUN_14102a0a0 body=353 status=ok
// SIG undefined FUN_14102a0a0(void)

void FUN_14102a0a0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14102a125;
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
LAB_14102a125:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14102a202 FUN_14102a202 body=197 status=ok
// SIG undefined FUN_14102a202(void)

undefined4
FUN_14102a202(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [20];
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_60 = param_7;
    local_68 = param_6;
    FUN_14102a2d8(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  (**(code **)(*param_1 + 8))(param_1,local_58);
  local_60 = param_7;
  local_68 = param_6;
  uVar1 = FUN_14102a2d8(param_3,param_2,local_44,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102a2d8 FUN_14102a2d8 body=127 status=ok
// SIG undefined FUN_14102a2d8(void)

undefined8 FUN_14102a2d8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14102a358(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102a358 FUN_14102a358 body=197 status=ok
// SIG undefined FUN_14102a358(void)

undefined8 * FUN_14102a358(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (int)param_1[1];
  if (iVar1 == -1) {
    if (*param_1 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      FUN_1400021e4(param_1,param_2);
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400021e4(param_1,&local_30);
      puVar2 = local_30;
      if (local_28 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140002266(param_2,L"%ls(%d)",puVar2,iVar1);
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_140002266(param_2,L"(%d)",iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14102a41e FUN_14102a41e body=96 status=ok
// SIG undefined FUN_14102a41e(void)

ulonglong FUN_14102a41e(longlong param_1)

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
LAB_14102a461:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14102a461;
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



// FUNCTION 14102a48c FUN_14102a48c body=199 status=ok
// SIG undefined FUN_14102a48c(void)

void FUN_14102a48c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_1[0x31];
  if (plVar2 != plVar1) {
    param_1[0x31] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x32) = (int)param_2[1];
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  lVar3 = param_1[99];
  if (lVar3 != 0) {
    (**(code **)(*param_1 + 0x360))(param_1,local_50);
    FUN_140a5cace(lVar3,local_50);
  }
  (**(code **)(*param_1 + 0x350))(param_1);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102a556 FUN_14102a556 body=502 status=ok
// SIG undefined FUN_14102a556(void)

bool FUN_14102a556(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1[2] + 4 + (longlong)(int)param_1[6] * 0xc);
  lVar6 = (longlong)iVar1;
  bVar9 = true;
  if (0 < lVar6) {
    iVar2 = *(int *)(param_1[2] + (longlong)(int)param_1[6] * 0xc);
    lVar8 = (longlong)iVar2;
    if (lVar8 != -1) {
      if ((char)param_1[7] == '\x01') {
        plVar4 = (longlong *)param_1[4];
        if (plVar4[10] == 0) {
          FUN_144b44800(&local_80);
          lVar5 = FUN_14102a7c8(&local_80,*plVar4 + lVar8,lVar6);
          FUN_144b44810(&local_80);
        }
        else {
          lVar5 = FUN_14102a7c8(plVar4[10],*plVar4 + lVar8,lVar6);
        }
        if (lVar5 == 0) {
          FUN_144bfd270(&local_80);
          lVar5 = FUN_147e67690(&local_80,lVar8 + *plVar4,lVar6);
          FUN_144bfd310(&local_80);
        }
        else {
          iVar3 = (int)plVar4[9];
          lVar6 = (longlong)iVar3;
          *(uint *)(plVar4 + 9) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar4 + 0x4c) < iVar3 + 1U) {
            FUN_147e6779a(plVar4 + 2,iVar3);
          }
          plVar7 = plVar4 + 2;
          if ((longlong *)plVar4[8] != (longlong *)0x0) {
            plVar7 = (longlong *)plVar4[8];
          }
          *(int *)((longlong)plVar7 + lVar6 * 0xc) = iVar2;
          *(int *)((longlong)plVar7 + lVar6 * 0xc + 4) = iVar1;
          *(undefined4 *)((longlong)plVar7 + lVar6 * 0xc + 8) = 0;
        }
        local_78 = param_1[4];
        local_70 = param_1[5];
        if (local_70 != 0) {
          LOCK();
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
          UNLOCK();
        }
        local_80 = lVar5;
        FUN_14102a74e(param_2,&local_80);
        FUN_140d4add0(&local_80);
      }
      else {
        FUN_144bfd270(&local_80);
        local_98 = FUN_147e67690(&local_80,
                                 (longlong)*(int *)(param_1[2] + (longlong)(int)param_1[6] * 0xc) +
                                 *param_1,(longlong)
                                          *(int *)(param_1[2] + 4 + (longlong)(int)param_1[6] * 0xc)
                                );
        local_90 = 0;
        uStack_88 = 0;
        FUN_14102a74e(param_2,&local_98);
        FUN_140d4add0(&local_98);
        FUN_144bfd310(&local_80);
      }
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      bVar9 = *param_2 != 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102a74e FUN_14102a74e body=121 status=ok
// SIG undefined FUN_14102a74e(void)

undefined8 * FUN_14102a74e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_140d4ae10(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    plVar2 = (longlong *)param_2[2];
    plVar3 = (longlong *)param_1[2];
    if (plVar2 != plVar3) {
      param_2[2] = 0;
      param_1[2] = plVar2;
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
  }
  return param_1;
}



// FUNCTION 14102a7c8 FUN_14102a7c8 body=173 status=ok
// SIG undefined FUN_14102a7c8(void)

longlong FUN_14102a7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  byte local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &DAT_14c6e6040;
  FUN_144b45ed0(param_1,&local_40,param_2,param_3);
  if ((local_40 != 0) && (local_38 != 0)) {
    cVar1 = FUN_144b45dd0(local_38,&DAT_14c6e6040);
    if (cVar1 != '\0') {
      FUN_144b45d50(local_38,local_24);
      lVar2 = 0;
      if ((local_24[0] & 8) == 0) {
        lVar2 = local_40;
      }
      goto LAB_14102a83b;
    }
  }
  lVar2 = 0;
LAB_14102a83b:
  if ((local_30 & 1) != 0) {
    FUN_144be6b30(local_30 & 0xfffffffffffffffe);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102a876 FUN_14102a876 body=1934 status=ok
// SIG undefined FUN_14102a876(void)

longlong *
FUN_14102a876(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             undefined4 param_5,char param_6,undefined1 param_7,longlong param_8,undefined4 param_9,
             undefined8 param_10,uint param_11)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_5b8 [32];
  longlong *local_598;
  longlong *local_590;
  longlong *local_588;
  longlong local_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 local_568;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 local_538 [16];
  undefined8 local_4b8 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_410;
  undefined1 local_388;
  undefined8 local_378 [16];
  undefined1 local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  longlong local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 *local_278;
  undefined1 *puStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined8 uStack_167;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined1 *local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 local_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined8 local_100;
  undefined3 uStack_f8;
  undefined5 uStack_f5;
  undefined3 uStack_f0;
  undefined8 uStack_ed;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  uVar6 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x490))();
  *(undefined4 *)(param_2 + 0xac) = uVar6;
  *(undefined8 *)(param_2 + 0xb0) = DAT_14c872be0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_4[1];
  local_598 = param_1;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14102b006(param_1);
    if (0 < (int)param_4[1]) {
      local_590 = (longlong *)(param_2 + 8);
      lVar14 = 0x2d0;
      uVar10 = 0;
      local_588 = param_4;
      do {
        local_580 = *param_4;
        puVar11 = &DAT_14c846400;
        puVar12 = local_538;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar11 = &DAT_14c846400;
        puVar12 = local_4b8;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        local_410 = 0;
        local_388 = 0;
        local_2d8 = DAT_14c8464f0;
        local_2e8 = DAT_14c8464e0;
        uStack_2e0 = DAT_14c8464e8;
        uStack_2b8 = 0;
        local_2a8 = 0xffffffff;
        local_280 = 0;
        uStack_288 = 0;
        local_2a0 = 0;
        local_278 = &DAT_3f8000003f800000;
        puStack_270 = &DAT_3f8000003f800000;
        local_260 = 0x42c80000;
        local_208 = 0;
        local_200 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_1fc = 0xffffffff00000080;
        local_1f4 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0xffffffff00000000;
        local_1b8 = 0;
        local_1b0 = 0x8000000000;
        uStack_1a8 = 0xffffffff;
        local_198 = 0;
        local_190 = 0;
        local_188 = 0xffffffffffffffff;
        local_180 = 0xbf8000003f800000;
        local_178 = 0;
        uStack_170 = 0;
        uStack_16f = 0;
        uStack_168 = 0;
        uStack_167 = 0;
        local_15f = 1;
        local_14c = 0;
        local_154 = &DAT_3f8000003f800000;
        local_148 = 0;
        local_140 = 0x3f800000bf800000;
        local_138 = 0x3f800000;
        uStack_110 = 0;
        uStack_10f = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        local_117 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        uStack_f5 = 0;
        uStack_f0 = 0;
        uStack_ed = 0;
        puVar11 = &DAT_14c846400;
        puVar12 = local_378;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        local_2f8 = 1;
        puVar11 = (undefined8 *)(local_580 + -0x2b0 + lVar14);
        local_438 = puVar11[0x20];
        uStack_430 = puVar11[0x21];
        local_2d0 = puVar11[0x20];
        uStack_2c8 = puVar11[0x21];
        local_2b0 = param_10;
        local_248 = puVar11[0x51];
        local_258 = puVar11[0x4f];
        uStack_250 = puVar11[0x50];
        uStack_230 = puVar11[0x54];
        uStack_240 = puVar11[0x52];
        local_238 = puVar11[0x53];
        local_548 = puVar11[-2];
        local_558 = puVar11[-4];
        uStack_550 = puVar11[-3];
        puVar12 = puVar11;
        puVar13 = local_538;
        local_2c0 = param_2;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        uStack_298 = 0;
        local_290 = 0x3f80000000000000;
        local_180 = CONCAT44(param_5,(undefined4)local_180);
        local_268 = puVar11[0x55];
        puVar11 = (undefined8 *)(local_580 + -0x230 + lVar14);
        puVar12 = puVar11;
        puVar13 = local_4b8;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        local_148 = CONCAT31(local_148._1_3_,1);
        local_144 = param_7;
        uVar6 = *(undefined4 *)(puVar11 + 0x46);
        _local_15c = CONCAT44(uVar6,uVar6);
        lVar8 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x3d0))();
        if (lVar8 != 0) {
          lVar8 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x3d0))();
          if ((*(longlong *)(lVar8 + 0x30) != 0) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0) != 0)) {
            lVar8 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x3d0))();
            if (*(longlong *)(lVar8 + 0x30) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
            }
            local_260 = *(undefined4 *)(lVar8 + 0x408);
          }
        }
        if (param_6 != '\0') {
          *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) & 0xfe;
          uStack_288 = 0;
          local_280 = 0x3f80000000000000;
        }
        if (param_3 != (longlong *)0x0) {
          uVar9 = uVar10 & 0xffffffff;
          if (param_11 < 6) {
            uVar9 = (ulonglong)param_11;
          }
          uStack_2b8 = FUN_14102b136(param_3,uVar9);
          fVar15 = *(float *)(param_3 + 0x5e);
          if (100.0 <= fVar15) {
            fVar15 = 100.0;
          }
          if (fVar15 <= 0.01) {
            fVar15 = 0.01;
          }
          local_180 = CONCAT44(local_180._4_4_,fVar15);
          uVar3 = (**(code **)(*param_3 + 0x5e8))(param_3);
          uVar6 = local_148;
          if (DAT_14c7609a0 == -1) {
            uVar4 = *(undefined1 *)((longlong)param_3 + 0x2fc);
          }
          else {
            uVar4 = 0 < DAT_14c7609a0;
          }
          local_148._3_1_ = SUB41(uVar6,3);
          local_148._0_3_ = CONCAT12(uVar4,CONCAT11(uVar3,(undefined1)local_148));
        }
        lVar8 = FUN_14001cc68(0x30f0,0x10);
        FUN_144891fa0(lVar8,&local_558);
        if (param_3 != (longlong *)0x0) {
          FUN_14102b7bb(param_3,lVar8 + 0x1e98,lVar8 + 0x1ee8);
        }
        plVar2 = local_590;
        iVar1 = *(int *)(param_2 + 0x10);
        *(uint *)(param_2 + 0x10) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
          FUN_144928a2e(local_590,iVar1);
        }
        *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar8;
        iVar1 = (int)local_598[1];
        *(uint *)(local_598 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)local_598 + 0xc) < iVar1 + 1U) {
          FUN_14177ee66(local_598,iVar1);
        }
        lVar7 = local_580 + lVar14;
        *(longlong *)(*local_598 + (longlong)iVar1 * 8) = lVar8;
        local_568 = *(undefined8 *)(lVar7 + -0x2c0);
        local_578 = *(undefined4 *)(lVar7 + -0x2d0);
        uStack_574 = *(undefined4 *)(lVar7 + -0x2cc);
        uStack_570 = *(undefined4 *)(lVar7 + -0x2c8);
        uStack_56c = *(undefined4 *)(lVar7 + -0x2c4);
        FUN_14102b2ba(lVar8,&local_578);
        *(undefined1 *)(lVar8 + 0x28e4) = 0;
        *(undefined1 *)(lVar8 + 0x2930) = 0;
        *(undefined4 *)(lVar8 + 0x292c) = 0x3f000000;
        if (param_3 != (longlong *)0x0) {
          cVar5 = (**(code **)(*param_3 + 0x5e8))(param_3);
          if (cVar5 != '\0') {
            *(undefined4 *)(lVar8 + 0x2ab8) = 0;
            *(byte *)(lVar8 + 0x2938) = *(byte *)(lVar8 + 0x2938) & 0xfe;
            *(byte *)(lVar8 + 0x2918) = *(byte *)(lVar8 + 0x2918) & 0xfe;
          }
        }
        param_4 = local_588;
        if (param_8 != 0) {
          FUN_14102cb1c(lVar8,param_8,param_9);
        }
        FUN_14102bfb4(lVar8,&local_558);
        FUN_144891d70(&local_558);
        uVar10 = uVar10 + 1;
        lVar14 = lVar14 + 0x2e0;
      } while ((longlong)uVar10 < (longlong)(int)param_4[1]);
    }
  }
  if ((param_3 != (longlong *)0x0) && ((char)param_3[0x70] == '\x01')) {
    *(undefined1 *)(param_2 + 0x11a) = 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return local_598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102b006 FUN_14102b006 body=304 status=ok
// SIG undefined FUN_14102b006(void)

void FUN_14102b006(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14102b067;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14102b067:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14102b136 FUN_14102b136 body=388 status=ok
// SIG undefined FUN_14102b136(void)

longlong FUN_14102b136(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  plVar1 = param_1 + 0x6d;
  iVar4 = (int)param_1[0x6e];
  while (iVar4 <= param_2) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar6 = &PTR_FUN_14a544a68;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(uint *)(param_1 + 0x6e) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x374) < iVar4 + 1U) {
      FUN_1456bd870(plVar1,iVar4);
    }
    *(undefined8 **)(*plVar1 + (longlong)iVar4 * 8) = puVar6;
    if ((0 < param_2) && (cVar5 = (**(code **)(*param_1 + 0x5e8))(param_1), cVar5 != '\0')) {
      FUN_147cef84a(((undefined8 *)param_1[0x6d])[(int)param_1[0x6e] + -1],
                    *(undefined8 *)param_1[0x6d]);
    }
    iVar4 = (int)param_1[0x6e];
  }
  lVar2 = *(longlong *)(param_1[0x6d] + (longlong)param_2 * 8);
  lVar3 = *(longlong *)(lVar2 + 8);
  if ((*(byte *)((longlong)param_1 + 0x2aa) & 1) == 0) {
    if ((lVar3 == 0 & *(byte *)((longlong)param_1 + 0x2ab)) == 0) {
      if (lVar3 != 0) {
        if (*(byte *)((longlong)param_1 + 0x2ab) != 0) {
          return lVar3;
        }
        FUN_1411ab7fc();
      }
      return 0;
    }
  }
  else if (lVar3 != 0) {
    return lVar3;
  }
  if (param_1[0x16] == 0) {
    puVar7 = &DAT_14c760db4;
  }
  else {
    lVar3 = *(longlong *)(param_1[0x16] + 0x218);
    puVar7 = &DAT_14c760db4;
    if (lVar3 != 0) {
      puVar7 = (undefined4 *)(lVar3 + 8);
    }
  }
  FUN_1457e272a(lVar2,*puVar7);
  return *(longlong *)(*(longlong *)(*plVar1 + (longlong)param_2 * 8) + 8);
}



// FUNCTION 14102b2ba FUN_14102b2ba body=1280 status=ok
// SIG undefined FUN_14102b2ba(void)

void FUN_14102b2ba(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_928 [32];
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  undefined8 local_8f8;
  undefined1 local_8e8 [2088];
  longlong local_c0;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_928;
  lVar1 = param_1 + 0x2510;
  FUN_144894d4c(local_8e8);
  FUN_1414d07a4(lVar1,local_8e8);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2968) = 0;
  *(undefined4 *)(param_1 + 0x2b38) = 0;
  if (*DAT_14cb031d8 == 0) {
    *(undefined4 *)(param_1 + 0x2814) = 0;
  }
  if (*DAT_14cb031f0 == 0) {
    *(undefined4 *)(param_1 + 0x2af0) = 0;
  }
  if (*DAT_14cb03220 == 0) {
    *(undefined1 **)(param_1 + 0x29b8) = &DAT_3f8000003f800000;
    if (*DAT_14cb03268 != 0) {
      *(undefined8 *)(param_1 + 0x29b8) = 0xbe86ac73be86ac73;
    }
  }
  else if (*DAT_14cb03238 < 3) {
    *(char *)(param_1 + 0x2546) = (char)*DAT_14cb03238;
  }
  fVar4 = *DAT_14cb03280;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x29dc) = fVar4;
  fVar4 = *DAT_14cb03298;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x29e0) = fVar4;
  if (*DAT_14cb032b0 == 0) {
    *(undefined4 *)(param_1 + 0x2b88) = 0;
  }
  if (*DAT_14cb032c8 == 0) {
    *(undefined4 *)(param_1 + 0x2a10) = 0;
  }
  if (*DAT_14cb03208 == 0) {
    *(undefined4 *)(param_1 + 0x2af4) = 0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb034b8) {
    FUN_144b3d300(&DAT_14cb034b8);
    if (DAT_14cb034b8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MegaLights.EnableForProject",1)
      ;
      if (plVar3 == (longlong *)0x0) {
        DAT_14cb034b0 = (int *)0x0;
      }
      else {
        DAT_14cb034b0 = (int *)(**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14cb034b8);
    }
  }
  *(byte *)(param_1 + 0x2954) = *(byte *)(param_1 + 0x2954) & 0xfe | *DAT_14cb034b0 != 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb034c8) {
    FUN_144b3d300(&DAT_14cb034c8);
    if (DAT_14cb034c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DynamicGlobalIlluminationMethod",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14cb034c0 = (undefined1 *)0x0;
      }
      else {
        DAT_14cb034c0 = (undefined1 *)(**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14cb034c8);
    }
  }
  *(undefined1 *)(param_1 + 0x28e4) = *DAT_14cb034c0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb034d8) {
    FUN_144b3d300(&DAT_14cb034d8);
    if (DAT_14cb034d8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ReflectionMethod",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14cb034d0 = (undefined1 *)0x0;
      }
      else {
        DAT_14cb034d0 = (undefined1 *)(**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14cb034d8);
    }
  }
  *(undefined1 *)(param_1 + 0x2930) = *DAT_14cb034d0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb034e8) {
    FUN_144b3d300(&DAT_14cb034e8);
    if (DAT_14cb034e8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,
                          L"r.Lumen.TranslucencyReflections.FrontLayer.EnableForProject",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14cb034e0 = (int *)0x0;
      }
      else {
        DAT_14cb034e0 = (int *)(**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14cb034e8);
    }
  }
  *(byte *)(param_1 + 0x2938) = *(byte *)(param_1 + 0x2938) & 0xfd | (*DAT_14cb034e0 != 0) * '\x02';
  *(uint *)(param_1 + 0x2b5c) = *(uint *)(param_1 + 0x2b5c) & 0xfffffffe | (uint)(0 < DAT_14c761af4)
  ;
  plVar3 = *(longlong **)(DAT_14cb0d2b0 + 0xfd0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x88))
              (plVar3,lVar1,*(undefined4 *)(param_1 + 0x1dd0),*(undefined4 *)(param_1 + 0x1dd4));
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
  }
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40), plVar3 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar3 + 0x3d0))();
    if (lVar2 != 0) {
      local_8f8 = *(undefined8 *)(param_2 + 4);
      local_908 = *param_2;
      uStack_904 = param_2[1];
      uStack_900 = param_2[2];
      uStack_8fc = param_2[3];
      FUN_14378f4f4(lVar2,&local_908,param_1);
    }
  }
  FUN_1417c82cc(lVar1);
  if ((local_28 ^ (ulonglong)auStack_928) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102b7bb FUN_14102b7bb body=2040 status=ok
// SIG undefined FUN_14102b7bb(void)

void FUN_14102b7bb(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_54 [4];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = *(int *)(param_1 + 0x2b8);
  local_78 = param_1;
  local_70 = param_3;
  local_60 = param_2;
  if (0 < iVar3) {
    lVar11 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x2b0) + 4 + lVar11 * 8);
      if (((((iVar2 != 0) &&
            (uVar10 = *(uint *)(*(longlong *)(param_1 + 0x2b0) + lVar11 * 8), -1 < (int)uVar10)) &&
           ((int)uVar10 < DAT_14c9647dc)) &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == iVar2)))) &&
         (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (*plVar13 != 0)))) {
        local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(*plVar13 + 0x3d0));
        FUN_1472dd72a(local_60,local_54,&local_50);
        iVar3 = *(int *)(local_78 + 0x2b8);
        param_1 = local_78;
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x2c8);
  if (0 < iVar3) {
    lVar11 = 0;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + lVar11 * 8);
      if (lVar12 != 0) {
        iVar2 = *(int *)(lVar12 + 0x268);
        if (iVar2 == 0) {
          iVar16 = 0;
          uVar9 = 1;
          iVar4 = 0;
          uVar17 = 0;
        }
        else {
          puVar5 = *(uint **)(lVar12 + 0x260);
          if (*(uint **)(lVar12 + 0x260) == (uint *)0x0) {
            puVar5 = (uint *)(lVar12 + 0x250);
          }
          uVar10 = *puVar5;
          if (uVar10 == 0) {
            iVar4 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar4 = iVar2 + -1;
            }
            uVar17 = 0;
            uVar9 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar9 = uVar17;
            }
            iVar16 = 0;
            do {
              if (uVar9 == uVar17) goto LAB_14102bb6f;
              iVar16 = iVar16 + 0x20;
              uVar10 = puVar5[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar10 == 0);
          }
          else {
            iVar16 = 0;
            uVar17 = 0;
          }
          uVar9 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar9 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar4 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar4) {
            iVar4 = iVar2;
          }
        }
        if (iVar4 != iVar2) {
          uVar10 = 0xffffffff;
          local_68 = lVar11;
          do {
            lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x240) + (longlong)iVar4 * 0x10);
            if (lVar11 != 0) {
              if (DAT_14cac6e60 == 0) {
                local_50 = FUN_144a7958c;
                local_80 = FUN_14081d0ea;
                local_88 = FUN_142b47bc4;
                local_90 = &local_50;
                local_98 = &LAB_1478989f1;
                local_a0 = &LAB_146391124;
                local_a8 = L"Engine";
                local_b0 = 0x10000000000;
                local_b8 = 0x10000005;
                local_c0 = 0x10;
                local_c8 = 0x620;
                FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
                param_1 = local_78;
              }
              if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
                local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar11 + 0x3d0));
                FUN_1472dd72a(local_60,local_54,&local_50,0);
                param_1 = local_78;
              }
            }
            uVar10 = uVar10 & ~(uint)uVar9;
            puVar5 = *(uint **)(lVar12 + 0x260);
            if (*(uint **)(lVar12 + 0x260) == (uint *)0x0) {
              puVar5 = (uint *)(lVar12 + 0x250);
            }
            iVar3 = *(int *)(lVar12 + 0x268);
            iVar4 = (int)uVar17;
            lVar11 = (longlong)iVar4;
            uVar8 = puVar5[lVar11] & uVar10;
            if (uVar8 == 0) {
              iVar6 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar6 = iVar3 + -1;
              }
              iVar6 = iVar6 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar7 = iVar6;
              if (iVar6 < iVar4) {
                iVar7 = iVar4;
              }
              if (iVar4 < iVar6) {
                lVar14 = 0;
                do {
                  uVar8 = puVar5[lVar11 + lVar14 + 1];
                  if (uVar8 != 0) {
                    uVar17 = (ulonglong)(iVar4 + (int)lVar14 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_14102ba32;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar7 - lVar11 != lVar14);
                uVar10 = 0xffffffff;
                iVar4 = iVar7;
              }
              uVar17 = (ulonglong)(iVar4 + 1);
              param_1 = local_78;
              iVar4 = iVar3;
            }
            else {
LAB_14102ba32:
              uVar9 = (ulonglong)(-uVar8 & uVar8);
              uVar1 = uVar9 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar4 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar4) {
                iVar4 = iVar3;
              }
            }
          } while (iVar4 != iVar2);
          iVar3 = *(int *)(param_1 + 0x2c8);
          lVar11 = local_68;
        }
      }
LAB_14102bb6f:
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar3);
  }
  if (*(char *)(param_1 + 0x2a8) == '\x02') {
    FUN_14177e0d0(local_70);
    iVar3 = *(int *)(local_78 + 0x2d8);
    lVar11 = local_78;
    if (0 < iVar3) {
      lVar12 = 0;
      do {
        iVar2 = *(int *)(*(longlong *)(lVar11 + 0x2d0) + 4 + lVar12 * 8);
        if ((((iVar2 != 0) &&
             (uVar10 = *(uint *)(*(longlong *)(lVar11 + 0x2d0) + lVar12 * 8), -1 < (int)uVar10)) &&
            (((int)uVar10 < DAT_14c9647dc &&
             ((plVar13 = (longlong *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
              plVar13 != (longlong *)0x0 && ((int)plVar13[2] == iVar2)))))) &&
           (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (*plVar13 != 0)))) {
          local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(*plVar13 + 0x3d0));
          FUN_1472dd72a(local_70,local_54,&local_50);
          iVar3 = *(int *)(local_78 + 0x2d8);
          lVar11 = local_78;
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < iVar3);
    }
    iVar3 = *(int *)(lVar11 + 0x2e8);
    if (0 < iVar3) {
      lVar12 = 0;
      do {
        lVar14 = *(longlong *)(*(longlong *)(lVar11 + 0x2e0) + lVar12 * 8);
        if (lVar14 != 0) {
          iVar2 = *(int *)(lVar14 + 0x268);
          if (iVar2 == 0) {
            uVar9 = 0;
            uVar17 = 1;
            iVar4 = 0;
            iVar16 = 0;
          }
          else {
            puVar5 = *(uint **)(lVar14 + 0x260);
            if (*(uint **)(lVar14 + 0x260) == (uint *)0x0) {
              puVar5 = (uint *)(lVar14 + 0x250);
            }
            uVar10 = *puVar5;
            if (uVar10 == 0) {
              iVar4 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar4 = iVar2 + -1;
              }
              uVar9 = 0;
              uVar17 = (ulonglong)(uint)(iVar4 >> 5);
              if (iVar4 >> 5 < 1) {
                uVar17 = uVar9;
              }
              iVar16 = 0;
              do {
                if (uVar17 == uVar9) goto LAB_14102bf5d;
                iVar16 = iVar16 + 0x20;
                uVar10 = puVar5[uVar9 + 1];
                uVar9 = uVar9 + 1;
              } while (uVar10 == 0);
            }
            else {
              uVar9 = 0;
              iVar16 = 0;
            }
            uVar17 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar17 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar4 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar4) {
              iVar4 = iVar2;
            }
          }
          if (iVar4 != iVar2) {
            uVar10 = 0xffffffff;
            local_68 = lVar12;
            do {
              lVar12 = *(longlong *)(*(longlong *)(lVar14 + 0x240) + (longlong)iVar4 * 0x10);
              if (lVar12 != 0) {
                if (DAT_14cac6e60 == 0) {
                  local_50 = FUN_144a7958c;
                  local_80 = FUN_14081d0ea;
                  local_88 = FUN_142b47bc4;
                  local_90 = &local_50;
                  local_98 = &LAB_1478989f1;
                  local_a0 = &LAB_146391124;
                  local_a8 = L"Engine";
                  local_b0 = 0x10000000000;
                  local_b8 = 0x10000005;
                  local_c0 = 0x10;
                  local_c8 = 0x620;
                  FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102
                               );
                  lVar11 = local_78;
                }
                if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)
                    ) && (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
                  local_50 = (code *)CONCAT44(local_50._4_4_,*(undefined4 *)(lVar12 + 0x3d0));
                  FUN_1472dd72a(local_70,local_54,&local_50,0);
                  lVar11 = local_78;
                }
              }
              uVar10 = uVar10 & ~(uint)uVar17;
              puVar5 = *(uint **)(lVar14 + 0x260);
              if (*(uint **)(lVar14 + 0x260) == (uint *)0x0) {
                puVar5 = (uint *)(lVar14 + 0x250);
              }
              iVar3 = *(int *)(lVar14 + 0x268);
              iVar4 = (int)uVar9;
              lVar12 = (longlong)iVar4;
              uVar8 = puVar5[lVar12] & uVar10;
              if (uVar8 == 0) {
                iVar6 = iVar3 + 0x1e;
                if (-1 < iVar3 + -1) {
                  iVar6 = iVar3 + -1;
                }
                iVar6 = iVar6 >> 5;
                iVar16 = iVar16 + 0x20;
                iVar7 = iVar6;
                if (iVar6 < iVar4) {
                  iVar7 = iVar4;
                }
                if (iVar4 < iVar6) {
                  lVar15 = 0;
                  do {
                    uVar8 = puVar5[lVar12 + lVar15 + 1];
                    if (uVar8 != 0) {
                      uVar9 = (ulonglong)(iVar4 + (int)lVar15 + 1);
                      uVar10 = 0xffffffff;
                      goto LAB_14102be24;
                    }
                    iVar16 = iVar16 + 0x20;
                    lVar15 = lVar15 + 1;
                  } while (iVar7 - lVar12 != lVar15);
                  uVar10 = 0xffffffff;
                  iVar4 = iVar7;
                }
                uVar9 = (ulonglong)(iVar4 + 1);
                lVar11 = local_78;
                iVar4 = iVar3;
              }
              else {
LAB_14102be24:
                uVar17 = (ulonglong)(-uVar8 & uVar8);
                uVar1 = uVar17 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                iVar4 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                if (iVar3 <= iVar4) {
                  iVar4 = iVar3;
                }
              }
            } while (iVar4 != iVar2);
            iVar3 = *(int *)(lVar11 + 0x2e8);
            lVar12 = local_68;
          }
        }
LAB_14102bf5d:
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < iVar3);
    }
  }
  else if (((0 < *(int *)(param_1 + 0x2d8)) || (0 < *(int *)(param_1 + 0x2e8))) &&
          (DAT_14ca452e0 == '\0')) {
    DAT_14ca452e0 = '\x01';
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14102bfb4 FUN_14102bfb4 body=2919 status=ok
// SIG undefined FUN_14102bfb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14102bfb4(longlong param_1,longlong param_2)

{
  int iVar1;
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
  undefined4 uVar12;
  void *_Src;
  char cVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined2 *puVar19;
  undefined8 uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  void *local_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb034f8) {
    FUN_144b3d300(&DAT_14cb034f8);
    if (DAT_14cb034f8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar16 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SceneColorFringeQuality",1);
      if (plVar16 == (longlong *)0x0) {
        DAT_14cb034f0 = (int *)0x0;
      }
      else {
        DAT_14cb034f0 = (int *)(**(code **)(*plVar16 + 0x68))(plVar16);
      }
      _Init_thread_footer(&DAT_14cb034f8);
    }
  }
  if (*DAT_14cb034f0 < 1) {
    *(undefined4 *)(param_1 + 0x280c) = 0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03508) {
    FUN_144b3d300(&DAT_14cb03508);
    if (DAT_14cb03508 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar16 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.LocalExposure",1);
      if (plVar16 == (longlong *)0x0) {
        DAT_14cb03500 = (int *)0x0;
      }
      else {
        DAT_14cb03500 = (int *)(**(code **)(*plVar16 + 0x68))(plVar16);
      }
      _Init_thread_footer(&DAT_14cb03508);
    }
  }
  if ((*DAT_14cb03500 < 1) || ((*(byte *)(*(longlong *)(param_1 + 8) + 0x48) & 4) == 0)) {
    *(undefined1 **)(param_1 + 0x29dc) = &DAT_3f8000003f800000;
    *(undefined8 *)(param_1 + 0x29e8) = 0;
    *(undefined8 *)(param_1 + 0x29f0) = 0;
    *(undefined4 *)(param_1 + 0x2a00) = 0x3f800000;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03518) {
    FUN_144b3d300(&DAT_14cb03518);
    if (DAT_14cb03518 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar16 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.BloomQuality",1);
      if (plVar16 == (longlong *)0x0) {
        DAT_14cb03510 = (int *)0x0;
      }
      else {
        DAT_14cb03510 = (int *)(**(code **)(*plVar16 + 0x68))(plVar16);
      }
      _Init_thread_footer(&DAT_14cb03518);
    }
  }
  if (*DAT_14cb03510 < 1) {
    *(undefined4 *)(param_1 + 0x2814) = 0;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x48) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x2814) = 0;
  }
  if ((int)*DAT_14cb03388 < 2) {
    *(undefined4 *)(param_1 + 0x2ab8) = 0;
  }
  else if (3 < *DAT_14cb03388) goto LAB_14102c0fa;
  *(undefined4 *)(param_1 + 0x2ac8) = 0;
LAB_14102c0fa:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03528) {
    FUN_144b3d300(&DAT_14cb03528);
    if (DAT_14cb03528 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar16 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DepthOfFieldQuality",1);
      if (plVar16 == (longlong *)0x0) {
        DAT_14cb03520 = (int *)0x0;
      }
      else {
        DAT_14cb03520 = (int *)(**(code **)(*plVar16 + 0x68))(plVar16);
      }
      _Init_thread_footer(&DAT_14cb03528);
    }
  }
  if (*DAT_14cb03520 < 1) {
    *(undefined4 *)(param_1 + 0x2b6c) = 0;
  }
  lVar21 = *(longlong *)(param_1 + 8);
  if ((*(byte *)(lVar21 + 0x4d) & 8) == 0) {
    *(undefined4 *)(param_1 + 0x2b6c) = 0;
  }
  uVar17 = *(uint *)(lVar21 + 0x48);
  if ((uVar17 >> 0x15 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2ab8) = 0;
    uVar17 = *(uint *)(lVar21 + 0x48);
  }
  if ((uVar17 >> 0xb & 1) == 0) {
    if (*(int *)(param_1 + 0x2e9c) < 0) {
      *(undefined4 *)(param_1 + 0x2e98) = 0;
      FUN_147d0a2e0(param_1 + 0x2dd0,0);
      lVar21 = *(longlong *)(param_1 + 8);
    }
    else {
      *(undefined4 *)(param_1 + 0x2e98) = 0;
    }
  }
  if ((*(byte *)(lVar21 + 0x4e) & 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x27e4) = 0;
  }
  *(float *)(param_1 + 0x298c) = *DAT_14cb031c0 + *(float *)(param_1 + 0x298c);
  plVar16 = *(longlong **)(DAT_14cb0d2b0 + 0xfd0);
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x98))
              (plVar16,param_1 + 0x2510,*(undefined4 *)(param_1 + 0x1dd0),
               *(undefined4 *)(param_1 + 0x1dd4));
  }
  if (0.0 <= *DAT_14cb03178) {
    *(float *)(param_1 + 0x2950) = *DAT_14cb03178;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03538) {
    FUN_144b3d300(&DAT_14cb03538);
    if (DAT_14cb03538 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar16 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.AmbientOcclusionStaticFraction",1);
      if (plVar16 == (longlong *)0x0) {
        DAT_14cb03530 = (float *)0x0;
      }
      else {
        DAT_14cb03530 = (float *)(**(code **)(*plVar16 + 0x70))(plVar16);
      }
      _Init_thread_footer(&DAT_14cb03538);
    }
  }
  if (0.0 <= *DAT_14cb03530) {
    *(float *)(param_1 + 0x2af4) = *DAT_14cb03530;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x4a) & 0x80) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 8) + 0x5d) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x2af0) = 0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03548) {
    FUN_144b3d300(&DAT_14cb03548);
    if (DAT_14cb03548 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar16 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.AmbientOcclusionRadiusScale",1);
      if (plVar16 == (longlong *)0x0) {
        DAT_14cb03540 = (float *)0x0;
      }
      else {
        DAT_14cb03540 = (float *)(**(code **)(*plVar16 + 0x70))(plVar16);
      }
      _Init_thread_footer(&DAT_14cb03548);
    }
  }
  fVar22 = *DAT_14cb03540;
  if (15.0 <= fVar22) {
    fVar22 = 15.0;
  }
  if (fVar22 <= 0.1) {
    fVar22 = 0.1;
  }
  *(float *)(param_1 + 11000) = fVar22 * *(float *)(param_1 + 11000);
  fVar22 = *DAT_14cb031a8;
  if (50.0 <= fVar22) {
    fVar22 = 50.0;
  }
  if (fVar22 <= 0.01) {
    fVar22 = 0.01;
  }
  *(float *)(param_1 + 0x2b08) = fVar22 * *(float *)(param_1 + 0x2b08);
  fVar22 = *DAT_14cb03310;
  if (50.0 <= fVar22) {
    fVar22 = 50.0;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  *(float *)(param_1 + 0x2b88) = fVar22 * *(float *)(param_1 + 0x2b88);
  if (0.0 <= *DAT_14cb03328) {
    *(float *)(param_1 + 0x2b88) = *DAT_14cb03328;
  }
  if (0.0 <= *DAT_14cb03340) {
    *(float *)(param_1 + 0x2b8c) = *DAT_14cb03340;
  }
  if (-1 < *DAT_14cb03358) {
    *(int *)(param_1 + 0x2b90) = *DAT_14cb03358;
  }
  fVar22 = *DAT_14cb03370;
  if (0.0 <= fVar22) {
    fVar23 = *(float *)(param_1 + 0x280c);
    if (fVar22 <= *(float *)(param_1 + 0x280c)) {
      fVar23 = fVar22;
    }
    *(float *)(param_1 + 0x280c) = fVar23;
  }
  else if ((fVar22 == -2.0) && (!NAN(fVar22))) {
    *(undefined4 *)(param_1 + 0x280c) = 0x40a00000;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x55) & 0x80) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 8) + 0x4a) & 0x10) == 0)) {
    *(undefined8 *)(param_1 + 0x28e8) = 0;
    *(undefined8 *)(param_1 + 0x28f0) = 0;
    *(undefined4 *)(param_1 + 0x28f8) = 0;
  }
  lVar21 = DAT_14ca9ecb8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar18 = 0;
  }
  else if (iVar1 == 1) {
    DVar14 = FUN_140ad26c0();
    DVar15 = GetCurrentThreadId();
    uVar18 = (ulonglong)(DVar14 != DVar15);
  }
  else {
    uVar18 = 1;
  }
  if ((*(int *)(lVar21 + uVar18 * 4) == 1) &&
     (((DAT_14cb0ca80 != '\0' || (DAT_14c867cf1 != '\0')) || (DAT_14c86a9e0 != 0)))) {
    *(undefined1 *)(param_1 + 0x2f70) = 1;
    plVar16 = (longlong *)(param_1 + 0x2f30);
    *(undefined4 *)(param_1 + 0x2f38) = 0;
    if (*(int *)(param_1 + 0x2f3c) != 0) {
      FUN_1448831cc(plVar16,0);
    }
    FUN_140c50e9c(&local_70,&DAT_14cb0ca88,0);
    if ((void **)(param_1 + 0x2f78) == &local_70) {
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x2f78) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0x2f78) = local_70;
      local_70 = (void *)0x0;
      *(uint *)(param_1 + 0x2f80) = local_68;
      *(undefined4 *)(param_1 + 0x2f84) = local_64;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb03558) {
      FUN_144b3d300(&DAT_14cb03558);
      if (DAT_14cb03558 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb03550 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.BufferVisualizationOverviewTargets",1);
        _Init_thread_footer(&DAT_14cb03558);
      }
    }
    (**(code **)(*DAT_14cb03550 + 0xc0))(DAT_14cb03550,&local_70);
    if (DAT_14cacef48 == '\0') {
      FUN_14620d3c6(&DAT_14cacee68);
    }
    cVar13 = FUN_14798be54(&DAT_14cacee68,&local_70);
    uVar17 = local_68;
    _Src = local_70;
    if (cVar13 != '\0') {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      lVar21 = (longlong)(int)local_68;
      _DAT_14cacef10 = local_68;
      if (local_68 == 0 && DAT_14cacef14 == 0) {
        DAT_14cacef14 = 0;
      }
      else {
        FUN_1446dd670(&DAT_14cacef08,local_68);
        if (uVar17 != 0) {
          memcpy(DAT_14cacef08,_Src,lVar21 * 2);
        }
      }
      DAT_14cacef20 = 0;
      if (DAT_14cacef24 != 0) {
        FUN_1448831cc(&DAT_14cacef18,0);
      }
      if (1 < local_68) {
        do {
          FUN_140056680(local_a8,&DAT_149e06196);
          local_c0 = 0;
          local_c8 = 1;
          cVar13 = FUN_1407cdbc6(&local_70,local_a8,&local_88,&local_98);
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
          if (cVar13 == '\0') {
            iVar1 = local_68 - 1;
            if (local_68 == 0) {
              iVar1 = 0;
            }
            FUN_1402980a2(&local_88,local_70,iVar1);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            local_98 = 0;
            uStack_90 = 0;
          }
          FUN_140ded312(&local_88);
          puVar19 = &DAT_149dfb77a;
          if ((int)uStack_80 != 0) {
            puVar19 = local_88;
          }
          FUN_1446f470e(&local_b0,puVar19,1);
          lVar21 = FUN_14798bcc6(&DAT_14cacee68,local_b0);
          uVar17 = DAT_14cacef20;
          if (lVar21 == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(undefined8 *)(lVar21 + 0x20);
          }
          lVar21 = (longlong)(int)DAT_14cacef20;
          DAT_14cacef20 = DAT_14cacef20 + 1;
          if (DAT_14cacef24 < DAT_14cacef20) {
            FUN_144769b64(&DAT_14cacef18,uVar17);
          }
          *(undefined8 *)(DAT_14cacef18 + lVar21 * 8) = uVar20;
          iVar1 = (int)uStack_90 + -1;
          if ((int)uStack_90 == 0) {
            iVar1 = 0;
          }
          FUN_1402980a2(&local_70,local_98,iVar1);
        } while (1 < local_68);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (0 < (int)DAT_14cacef20) {
      lVar21 = 0;
      do {
        uVar20 = *(undefined8 *)(DAT_14cacef18 + lVar21 * 8);
        iVar1 = *(int *)(param_1 + 0x2f38);
        *(uint *)(param_1 + 0x2f38) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x2f3c) < iVar1 + 1U) {
          FUN_144769b64(plVar16,iVar1);
        }
        *(undefined8 *)(*plVar16 + (longlong)iVar1 * 8) = uVar20;
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 < (int)DAT_14cacef20);
    }
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0x440);
  uVar3 = *(undefined4 *)(param_2 + 0x444);
  uVar4 = *(undefined4 *)(param_2 + 0x448);
  uVar5 = *(undefined4 *)(param_2 + 0x44c);
  uVar6 = *(undefined4 *)(param_2 + 0x450);
  uVar7 = *(undefined4 *)(param_2 + 0x454);
  uVar8 = *(undefined4 *)(param_2 + 0x458);
  uVar9 = *(undefined4 *)(param_2 + 0x45c);
  uVar10 = *(undefined4 *)(param_2 + 0x464);
  uVar11 = *(undefined4 *)(param_2 + 0x468);
  uVar12 = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x3008) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x300c) = uVar10;
  *(undefined4 *)(param_1 + 0x3010) = uVar11;
  *(undefined4 *)(param_1 + 0x3014) = uVar12;
  *(undefined4 *)(param_1 + 0x2ff8) = uVar6;
  *(undefined4 *)(param_1 + 0x2ffc) = uVar7;
  *(undefined4 *)(param_1 + 0x3000) = uVar8;
  *(undefined4 *)(param_1 + 0x3004) = uVar9;
  *(undefined4 *)(param_1 + 0x2fe8) = uVar2;
  *(undefined4 *)(param_1 + 0x2fec) = uVar3;
  *(undefined4 *)(param_1 + 0x2ff0) = uVar4;
  *(undefined4 *)(param_1 + 0x2ff4) = uVar5;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14102cb1c FUN_14102cb1c body=13169 status=ok
// SIG undefined FUN_14102cb1c(void)

void FUN_14102cb1c(longlong param_1,byte *param_2,float param_3)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (param_3 <= 0.0) {
    return;
  }
  fVar21 = 1.0;
  if (param_3 <= 1.0) {
    fVar21 = param_3;
  }
  FUN_14350e63c(param_1 + 0x2d18,param_2 + 0x808,fVar21);
  FUN_143502628(param_1 + 0x2cd8,param_2 + 0x7c8,fVar21);
  FUN_14350e42c(param_1 + 0x2d50,param_2 + 0x840,fVar21);
  FUN_1417c9922(param_1 + 0x2da0,param_2 + 0x890);
  bVar6 = *param_2;
  if ((bVar6 & 1) != 0) {
    *(byte *)(param_1 + 0x2547) = param_2[0x37];
    bVar6 = *param_2;
  }
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x2548) =
         (*(float *)(param_2 + 0x38) - *(float *)(param_1 + 0x2548)) * fVar21 +
         *(float *)(param_1 + 0x2548);
    bVar6 = *param_2;
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x254c) =
         (*(float *)(param_2 + 0x3c) - *(float *)(param_1 + 0x254c)) * fVar21 +
         *(float *)(param_1 + 0x254c);
    bVar6 = *param_2;
  }
  if ((bVar6 & 8) != 0) {
    dVar2 = *(double *)(param_2 + 0x58);
    dVar3 = *(double *)(param_2 + 0x50);
    dVar4 = *(double *)(param_2 + 0x48);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2550) =
         (*(double *)(param_2 + 0x40) - *(double *)(param_1 + 0x2550)) * dVar5 +
         *(double *)(param_1 + 0x2550);
    *(double *)(param_1 + 0x2558) =
         (dVar4 - *(double *)(param_1 + 0x2558)) * dVar5 + *(double *)(param_1 + 0x2558);
    *(double *)(param_1 + 0x2560) =
         (dVar3 - *(double *)(param_1 + 0x2560)) * dVar5 + *(double *)(param_1 + 0x2560);
    *(double *)(param_1 + 0x2568) =
         (dVar2 - *(double *)(param_1 + 0x2568)) * dVar5 + *(double *)(param_1 + 0x2568);
    bVar6 = *param_2;
  }
  if ((bVar6 & 0x10) != 0) {
    dVar2 = *(double *)(param_2 + 0x78);
    dVar3 = *(double *)(param_2 + 0x70);
    dVar4 = *(double *)(param_2 + 0x68);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2570) =
         (*(double *)(param_2 + 0x60) - *(double *)(param_1 + 0x2570)) * dVar5 +
         *(double *)(param_1 + 0x2570);
    *(double *)(param_1 + 0x2578) =
         (dVar4 - *(double *)(param_1 + 0x2578)) * dVar5 + *(double *)(param_1 + 0x2578);
    *(double *)(param_1 + 0x2580) =
         (dVar3 - *(double *)(param_1 + 0x2580)) * dVar5 + *(double *)(param_1 + 0x2580);
    *(double *)(param_1 + 0x2588) =
         (dVar2 - *(double *)(param_1 + 0x2588)) * dVar5 + *(double *)(param_1 + 0x2588);
    bVar6 = *param_2;
  }
  if ((bVar6 & 0x20) != 0) {
    dVar2 = *(double *)(param_2 + 0x98);
    dVar3 = *(double *)(param_2 + 0x90);
    dVar4 = *(double *)(param_2 + 0x88);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2590) =
         (*(double *)(param_2 + 0x80) - *(double *)(param_1 + 0x2590)) * dVar5 +
         *(double *)(param_1 + 0x2590);
    *(double *)(param_1 + 0x2598) =
         (dVar4 - *(double *)(param_1 + 0x2598)) * dVar5 + *(double *)(param_1 + 0x2598);
    *(double *)(param_1 + 0x25a0) =
         (dVar3 - *(double *)(param_1 + 0x25a0)) * dVar5 + *(double *)(param_1 + 0x25a0);
    *(double *)(param_1 + 0x25a8) =
         (dVar2 - *(double *)(param_1 + 0x25a8)) * dVar5 + *(double *)(param_1 + 0x25a8);
    bVar6 = *param_2;
  }
  if ((bVar6 & 0x40) != 0) {
    dVar2 = *(double *)(param_2 + 0xb8);
    dVar3 = *(double *)(param_2 + 0xb0);
    dVar4 = *(double *)(param_2 + 0xa8);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x25b0) =
         (*(double *)(param_2 + 0xa0) - *(double *)(param_1 + 0x25b0)) * dVar5 +
         *(double *)(param_1 + 0x25b0);
    *(double *)(param_1 + 0x25b8) =
         (dVar4 - *(double *)(param_1 + 0x25b8)) * dVar5 + *(double *)(param_1 + 0x25b8);
    *(double *)(param_1 + 0x25c0) =
         (dVar3 - *(double *)(param_1 + 0x25c0)) * dVar5 + *(double *)(param_1 + 0x25c0);
    *(double *)(param_1 + 0x25c8) =
         (dVar2 - *(double *)(param_1 + 0x25c8)) * dVar5 + *(double *)(param_1 + 0x25c8);
    bVar6 = *param_2;
  }
  if ((char)bVar6 < '\0') {
    dVar2 = *(double *)(param_2 + 0xd8);
    dVar3 = *(double *)(param_2 + 0xd0);
    dVar4 = *(double *)(param_2 + 200);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x25d0) =
         (*(double *)(param_2 + 0xc0) - *(double *)(param_1 + 0x25d0)) * dVar5 +
         *(double *)(param_1 + 0x25d0);
    *(double *)(param_1 + 0x25d8) =
         (dVar4 - *(double *)(param_1 + 0x25d8)) * dVar5 + *(double *)(param_1 + 0x25d8);
    *(double *)(param_1 + 0x25e0) =
         (dVar3 - *(double *)(param_1 + 0x25e0)) * dVar5 + *(double *)(param_1 + 0x25e0);
    *(double *)(param_1 + 0x25e8) =
         (dVar2 - *(double *)(param_1 + 0x25e8)) * dVar5 + *(double *)(param_1 + 0x25e8);
  }
  bVar6 = param_2[1];
  if ((bVar6 & 1) != 0) {
    dVar2 = *(double *)(param_2 + 0xf8);
    dVar3 = *(double *)(param_2 + 0xf0);
    dVar4 = *(double *)(param_2 + 0xe8);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x25f0) =
         (*(double *)(param_2 + 0xe0) - *(double *)(param_1 + 0x25f0)) * dVar5 +
         *(double *)(param_1 + 0x25f0);
    *(double *)(param_1 + 0x25f8) =
         (dVar4 - *(double *)(param_1 + 0x25f8)) * dVar5 + *(double *)(param_1 + 0x25f8);
    *(double *)(param_1 + 0x2600) =
         (dVar3 - *(double *)(param_1 + 0x2600)) * dVar5 + *(double *)(param_1 + 0x2600);
    *(double *)(param_1 + 0x2608) =
         (dVar2 - *(double *)(param_1 + 0x2608)) * dVar5 + *(double *)(param_1 + 0x2608);
    bVar6 = param_2[1];
  }
  if ((bVar6 & 2) != 0) {
    dVar2 = *(double *)(param_2 + 0x118);
    dVar3 = *(double *)(param_2 + 0x110);
    dVar4 = *(double *)(param_2 + 0x108);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2610) =
         (*(double *)(param_2 + 0x100) - *(double *)(param_1 + 0x2610)) * dVar5 +
         *(double *)(param_1 + 0x2610);
    *(double *)(param_1 + 0x2618) =
         (dVar4 - *(double *)(param_1 + 0x2618)) * dVar5 + *(double *)(param_1 + 0x2618);
    *(double *)(param_1 + 0x2620) =
         (dVar3 - *(double *)(param_1 + 0x2620)) * dVar5 + *(double *)(param_1 + 0x2620);
    *(double *)(param_1 + 0x2628) =
         (dVar2 - *(double *)(param_1 + 0x2628)) * dVar5 + *(double *)(param_1 + 0x2628);
    bVar6 = param_2[1];
  }
  if ((bVar6 & 4) != 0) {
    dVar2 = *(double *)(param_2 + 0x138);
    dVar3 = *(double *)(param_2 + 0x130);
    dVar4 = *(double *)(param_2 + 0x128);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2630) =
         (*(double *)(param_2 + 0x120) - *(double *)(param_1 + 0x2630)) * dVar5 +
         *(double *)(param_1 + 0x2630);
    *(double *)(param_1 + 0x2638) =
         (dVar4 - *(double *)(param_1 + 0x2638)) * dVar5 + *(double *)(param_1 + 0x2638);
    *(double *)(param_1 + 0x2640) =
         (dVar3 - *(double *)(param_1 + 0x2640)) * dVar5 + *(double *)(param_1 + 0x2640);
    *(double *)(param_1 + 0x2648) =
         (dVar2 - *(double *)(param_1 + 0x2648)) * dVar5 + *(double *)(param_1 + 0x2648);
    bVar6 = param_2[1];
  }
  if ((bVar6 & 8) != 0) {
    dVar2 = *(double *)(param_2 + 0x158);
    dVar3 = *(double *)(param_2 + 0x150);
    dVar4 = *(double *)(param_2 + 0x148);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2650) =
         (*(double *)(param_2 + 0x140) - *(double *)(param_1 + 0x2650)) * dVar5 +
         *(double *)(param_1 + 0x2650);
    *(double *)(param_1 + 0x2658) =
         (dVar4 - *(double *)(param_1 + 0x2658)) * dVar5 + *(double *)(param_1 + 0x2658);
    *(double *)(param_1 + 0x2660) =
         (dVar3 - *(double *)(param_1 + 0x2660)) * dVar5 + *(double *)(param_1 + 0x2660);
    *(double *)(param_1 + 0x2668) =
         (dVar2 - *(double *)(param_1 + 0x2668)) * dVar5 + *(double *)(param_1 + 0x2668);
    bVar6 = param_2[1];
  }
  if ((bVar6 & 0x10) != 0) {
    dVar2 = *(double *)(param_2 + 0x178);
    dVar3 = *(double *)(param_2 + 0x170);
    dVar4 = *(double *)(param_2 + 0x168);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2670) =
         (*(double *)(param_2 + 0x160) - *(double *)(param_1 + 0x2670)) * dVar5 +
         *(double *)(param_1 + 0x2670);
    *(double *)(param_1 + 0x2678) =
         (dVar4 - *(double *)(param_1 + 0x2678)) * dVar5 + *(double *)(param_1 + 0x2678);
    *(double *)(param_1 + 0x2680) =
         (dVar3 - *(double *)(param_1 + 0x2680)) * dVar5 + *(double *)(param_1 + 0x2680);
    *(double *)(param_1 + 0x2688) =
         (dVar2 - *(double *)(param_1 + 0x2688)) * dVar5 + *(double *)(param_1 + 0x2688);
    bVar6 = param_2[1];
  }
  if ((bVar6 & 0x20) != 0) {
    dVar2 = *(double *)(param_2 + 0x198);
    dVar3 = *(double *)(param_2 + 400);
    dVar4 = *(double *)(param_2 + 0x188);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2690) =
         (*(double *)(param_2 + 0x180) - *(double *)(param_1 + 0x2690)) * dVar5 +
         *(double *)(param_1 + 0x2690);
    *(double *)(param_1 + 0x2698) =
         (dVar4 - *(double *)(param_1 + 0x2698)) * dVar5 + *(double *)(param_1 + 0x2698);
    *(double *)(param_1 + 0x26a0) =
         (dVar3 - *(double *)(param_1 + 0x26a0)) * dVar5 + *(double *)(param_1 + 0x26a0);
    *(double *)(param_1 + 0x26a8) =
         (dVar2 - *(double *)(param_1 + 0x26a8)) * dVar5 + *(double *)(param_1 + 0x26a8);
    bVar6 = param_2[1];
  }
  if ((bVar6 & 0x40) != 0) {
    dVar2 = *(double *)(param_2 + 0x1b8);
    dVar3 = *(double *)(param_2 + 0x1b0);
    dVar4 = *(double *)(param_2 + 0x1a8);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x26b0) =
         (*(double *)(param_2 + 0x1a0) - *(double *)(param_1 + 0x26b0)) * dVar5 +
         *(double *)(param_1 + 0x26b0);
    *(double *)(param_1 + 0x26b8) =
         (dVar4 - *(double *)(param_1 + 0x26b8)) * dVar5 + *(double *)(param_1 + 0x26b8);
    *(double *)(param_1 + 0x26c0) =
         (dVar3 - *(double *)(param_1 + 0x26c0)) * dVar5 + *(double *)(param_1 + 0x26c0);
    *(double *)(param_1 + 0x26c8) =
         (dVar2 - *(double *)(param_1 + 0x26c8)) * dVar5 + *(double *)(param_1 + 0x26c8);
    bVar6 = param_2[1];
  }
  if ((char)bVar6 < '\0') {
    dVar2 = *(double *)(param_2 + 0x1d8);
    dVar3 = *(double *)(param_2 + 0x1d0);
    dVar4 = *(double *)(param_2 + 0x1c8);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x26d0) =
         (*(double *)(param_2 + 0x1c0) - *(double *)(param_1 + 0x26d0)) * dVar5 +
         *(double *)(param_1 + 0x26d0);
    *(double *)(param_1 + 0x26d8) =
         (dVar4 - *(double *)(param_1 + 0x26d8)) * dVar5 + *(double *)(param_1 + 0x26d8);
    *(double *)(param_1 + 0x26e0) =
         (dVar3 - *(double *)(param_1 + 0x26e0)) * dVar5 + *(double *)(param_1 + 0x26e0);
    *(double *)(param_1 + 0x26e8) =
         (dVar2 - *(double *)(param_1 + 0x26e8)) * dVar5 + *(double *)(param_1 + 0x26e8);
  }
  bVar6 = param_2[2];
  if ((bVar6 & 1) != 0) {
    dVar2 = *(double *)(param_2 + 0x1f8);
    dVar3 = *(double *)(param_2 + 0x1f0);
    dVar4 = *(double *)(param_2 + 0x1e8);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x26f0) =
         (*(double *)(param_2 + 0x1e0) - *(double *)(param_1 + 0x26f0)) * dVar5 +
         *(double *)(param_1 + 0x26f0);
    *(double *)(param_1 + 0x26f8) =
         (dVar4 - *(double *)(param_1 + 0x26f8)) * dVar5 + *(double *)(param_1 + 0x26f8);
    *(double *)(param_1 + 0x2700) =
         (dVar3 - *(double *)(param_1 + 0x2700)) * dVar5 + *(double *)(param_1 + 0x2700);
    *(double *)(param_1 + 0x2708) =
         (dVar2 - *(double *)(param_1 + 0x2708)) * dVar5 + *(double *)(param_1 + 0x2708);
    bVar6 = param_2[2];
  }
  if ((bVar6 & 2) != 0) {
    dVar2 = *(double *)(param_2 + 0x218);
    dVar3 = *(double *)(param_2 + 0x210);
    dVar4 = *(double *)(param_2 + 0x208);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 10000) =
         (*(double *)(param_2 + 0x200) - *(double *)(param_1 + 10000)) * dVar5 +
         *(double *)(param_1 + 10000);
    *(double *)(param_1 + 0x2718) =
         (dVar4 - *(double *)(param_1 + 0x2718)) * dVar5 + *(double *)(param_1 + 0x2718);
    *(double *)(param_1 + 0x2720) =
         (dVar3 - *(double *)(param_1 + 0x2720)) * dVar5 + *(double *)(param_1 + 0x2720);
    *(double *)(param_1 + 0x2728) =
         (dVar2 - *(double *)(param_1 + 0x2728)) * dVar5 + *(double *)(param_1 + 0x2728);
    bVar6 = param_2[2];
  }
  if ((bVar6 & 4) != 0) {
    dVar2 = *(double *)(param_2 + 0x238);
    dVar3 = *(double *)(param_2 + 0x230);
    dVar4 = *(double *)(param_2 + 0x228);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2730) =
         (*(double *)(param_2 + 0x220) - *(double *)(param_1 + 0x2730)) * dVar5 +
         *(double *)(param_1 + 0x2730);
    *(double *)(param_1 + 0x2738) =
         (dVar4 - *(double *)(param_1 + 0x2738)) * dVar5 + *(double *)(param_1 + 0x2738);
    *(double *)(param_1 + 0x2740) =
         (dVar3 - *(double *)(param_1 + 0x2740)) * dVar5 + *(double *)(param_1 + 0x2740);
    *(double *)(param_1 + 0x2748) =
         (dVar2 - *(double *)(param_1 + 0x2748)) * dVar5 + *(double *)(param_1 + 0x2748);
    bVar6 = param_2[2];
  }
  if ((bVar6 & 8) != 0) {
    dVar2 = *(double *)(param_2 + 600);
    dVar3 = *(double *)(param_2 + 0x250);
    dVar4 = *(double *)(param_2 + 0x248);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2750) =
         (*(double *)(param_2 + 0x240) - *(double *)(param_1 + 0x2750)) * dVar5 +
         *(double *)(param_1 + 0x2750);
    *(double *)(param_1 + 0x2758) =
         (dVar4 - *(double *)(param_1 + 0x2758)) * dVar5 + *(double *)(param_1 + 0x2758);
    *(double *)(param_1 + 0x2760) =
         (dVar3 - *(double *)(param_1 + 0x2760)) * dVar5 + *(double *)(param_1 + 0x2760);
    *(double *)(param_1 + 0x2768) =
         (dVar2 - *(double *)(param_1 + 0x2768)) * dVar5 + *(double *)(param_1 + 0x2768);
    bVar6 = param_2[2];
  }
  if ((bVar6 & 0x10) != 0) {
    dVar2 = *(double *)(param_2 + 0x278);
    dVar3 = *(double *)(param_2 + 0x270);
    dVar4 = *(double *)(param_2 + 0x268);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2770) =
         (*(double *)(param_2 + 0x260) - *(double *)(param_1 + 0x2770)) * dVar5 +
         *(double *)(param_1 + 0x2770);
    *(double *)(param_1 + 0x2778) =
         (dVar4 - *(double *)(param_1 + 0x2778)) * dVar5 + *(double *)(param_1 + 0x2778);
    *(double *)(param_1 + 0x2780) =
         (dVar3 - *(double *)(param_1 + 0x2780)) * dVar5 + *(double *)(param_1 + 0x2780);
    *(double *)(param_1 + 0x2788) =
         (dVar2 - *(double *)(param_1 + 0x2788)) * dVar5 + *(double *)(param_1 + 0x2788);
    bVar6 = param_2[2];
  }
  if ((bVar6 & 0x20) != 0) {
    dVar2 = *(double *)(param_2 + 0x298);
    dVar3 = *(double *)(param_2 + 0x290);
    dVar4 = *(double *)(param_2 + 0x288);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x2790) =
         (*(double *)(param_2 + 0x280) - *(double *)(param_1 + 0x2790)) * dVar5 +
         *(double *)(param_1 + 0x2790);
    *(double *)(param_1 + 0x2798) =
         (dVar4 - *(double *)(param_1 + 0x2798)) * dVar5 + *(double *)(param_1 + 0x2798);
    *(double *)(param_1 + 0x27a0) =
         (dVar3 - *(double *)(param_1 + 0x27a0)) * dVar5 + *(double *)(param_1 + 0x27a0);
    *(double *)(param_1 + 0x27a8) =
         (dVar2 - *(double *)(param_1 + 0x27a8)) * dVar5 + *(double *)(param_1 + 0x27a8);
    bVar6 = param_2[2];
  }
  if ((bVar6 & 0x40) != 0) {
    dVar2 = *(double *)(param_2 + 0x2b8);
    dVar3 = *(double *)(param_2 + 0x2b0);
    dVar4 = *(double *)(param_2 + 0x2a8);
    dVar5 = (double)fVar21;
    *(double *)(param_1 + 0x27b0) =
         (*(double *)(param_2 + 0x2a0) - *(double *)(param_1 + 0x27b0)) * dVar5 +
         *(double *)(param_1 + 0x27b0);
    *(double *)(param_1 + 0x27b8) =
         (dVar4 - *(double *)(param_1 + 0x27b8)) * dVar5 + *(double *)(param_1 + 0x27b8);
    *(double *)(param_1 + 0x27c0) =
         (dVar3 - *(double *)(param_1 + 0x27c0)) * dVar5 + *(double *)(param_1 + 0x27c0);
    *(double *)(param_1 + 0x27c8) =
         (dVar2 - *(double *)(param_1 + 0x27c8)) * dVar5 + *(double *)(param_1 + 0x27c8);
    bVar6 = param_2[2];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x27d8) =
         (*(float *)(param_2 + 0x2c8) - *(float *)(param_1 + 0x27d8)) * fVar21 +
         *(float *)(param_1 + 0x27d8);
  }
  bVar6 = param_2[3];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x27d0) =
         (*(float *)(param_2 + 0x2c0) - *(float *)(param_1 + 0x27d0)) * fVar21 +
         *(float *)(param_1 + 0x27d0);
    bVar6 = param_2[3];
  }
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x27d4) =
         (*(float *)(param_2 + 0x2c4) - *(float *)(param_1 + 0x27d4)) * fVar21 +
         *(float *)(param_1 + 0x27d4);
    bVar6 = param_2[3];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x27dc) =
         (*(float *)(param_2 + 0x2cc) - *(float *)(param_1 + 0x27dc)) * fVar21 +
         *(float *)(param_1 + 0x27dc);
    bVar6 = param_2[3];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x27e0) =
         (*(float *)(param_2 + 0x2d0) - *(float *)(param_1 + 0x27e0)) * fVar21 +
         *(float *)(param_1 + 0x27e0);
    bVar6 = param_2[3];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x27e4) =
         (*(float *)(param_2 + 0x2d4) - *(float *)(param_1 + 0x27e4)) * fVar21 +
         *(float *)(param_1 + 0x27e4);
    bVar6 = param_2[3];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x27e8) =
         (*(float *)(param_2 + 0x2d8) - *(float *)(param_1 + 0x27e8)) * fVar21 +
         *(float *)(param_1 + 0x27e8);
    bVar6 = param_2[3];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x27ec) =
         (*(float *)(param_2 + 0x2dc) - *(float *)(param_1 + 0x27ec)) * fVar21 +
         *(float *)(param_1 + 0x27ec);
    bVar6 = param_2[3];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x27f0) =
         (*(float *)(param_2 + 0x2e0) - *(float *)(param_1 + 0x27f0)) * fVar21 +
         *(float *)(param_1 + 0x27f0);
  }
  bVar6 = param_2[4];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x27f4) =
         (*(float *)(param_2 + 0x2e4) - *(float *)(param_1 + 0x27f4)) * fVar21 +
         *(float *)(param_1 + 0x27f4);
    bVar6 = param_2[4];
  }
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x27f8) =
         (*(float *)(param_2 + 0x2e8) - *(float *)(param_1 + 0x27f8)) * fVar21 +
         *(float *)(param_1 + 0x27f8);
    bVar6 = param_2[4];
  }
  if ((bVar6 & 4) != 0) {
    fVar22 = *(float *)(param_2 + 0x2f8);
    fVar23 = *(float *)(param_2 + 0x2f4);
    fVar24 = *(float *)(param_2 + 0x2f0);
    *(float *)(param_1 + 0x27fc) =
         (*(float *)(param_2 + 0x2ec) - *(float *)(param_1 + 0x27fc)) * fVar21 +
         *(float *)(param_1 + 0x27fc);
    *(float *)(param_1 + 0x2800) =
         (fVar24 - *(float *)(param_1 + 0x2800)) * fVar21 + *(float *)(param_1 + 0x2800);
    *(float *)(param_1 + 0x2804) =
         (fVar23 - *(float *)(param_1 + 0x2804)) * fVar21 + *(float *)(param_1 + 0x2804);
    *(float *)(param_1 + 0x2808) =
         (fVar22 - *(float *)(param_1 + 0x2808)) * fVar21 + *(float *)(param_1 + 0x2808);
    bVar6 = param_2[4];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x280c) =
         (*(float *)(param_2 + 0x2fc) - *(float *)(param_1 + 0x280c)) * fVar21 +
         *(float *)(param_1 + 0x280c);
    bVar6 = param_2[4];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2810) =
         (*(float *)(param_2 + 0x300) - *(float *)(param_1 + 0x2810)) * fVar21 +
         *(float *)(param_1 + 0x2810);
  }
  bVar6 = param_2[5];
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x2814) =
         (*(float *)(param_2 + 0x304) - *(float *)(param_1 + 0x2814)) * fVar21 +
         *(float *)(param_1 + 0x2814);
    bVar6 = param_2[5];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x2818) =
         (*(float *)(param_2 + 0x308) - *(float *)(param_1 + 0x2818)) * fVar21 +
         *(float *)(param_1 + 0x2818);
    bVar6 = param_2[5];
  }
  if ((bVar6 & 8) != 0) {
    fVar22 = *(float *)(param_2 + 0x334);
    fVar23 = *(float *)(param_2 + 0x330);
    fVar24 = *(float *)(param_2 + 0x32c);
    *(float *)(param_1 + 0x2838) =
         (*(float *)(param_2 + 0x328) - *(float *)(param_1 + 0x2838)) * fVar21 +
         *(float *)(param_1 + 0x2838);
    *(float *)(param_1 + 0x283c) =
         (fVar24 - *(float *)(param_1 + 0x283c)) * fVar21 + *(float *)(param_1 + 0x283c);
    *(float *)(param_1 + 0x2840) =
         (fVar23 - *(float *)(param_1 + 0x2840)) * fVar21 + *(float *)(param_1 + 0x2840);
    *(float *)(param_1 + 0x2844) =
         (fVar22 - *(float *)(param_1 + 0x2844)) * fVar21 + *(float *)(param_1 + 0x2844);
  }
  if ((char)param_2[6] < '\0') {
    *(float *)(param_1 + 0x281c) =
         (*(float *)(param_2 + 0x30c) - *(float *)(param_1 + 0x281c)) * fVar21 +
         *(float *)(param_1 + 0x281c);
  }
  bVar6 = param_2[5];
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2820) =
         (*(float *)(param_2 + 0x310) - *(float *)(param_1 + 0x2820)) * fVar21 +
         *(float *)(param_1 + 0x2820);
    bVar6 = param_2[5];
  }
  if ((bVar6 & 0x40) != 0) {
    fVar22 = *(float *)(param_2 + 0x344);
    fVar23 = *(float *)(param_2 + 0x340);
    fVar24 = *(float *)(param_2 + 0x33c);
    *(float *)(param_1 + 0x2848) =
         (*(float *)(param_2 + 0x338) - *(float *)(param_1 + 0x2848)) * fVar21 +
         *(float *)(param_1 + 0x2848);
    *(float *)(param_1 + 0x284c) =
         (fVar24 - *(float *)(param_1 + 0x284c)) * fVar21 + *(float *)(param_1 + 0x284c);
    *(float *)(param_1 + 0x2850) =
         (fVar23 - *(float *)(param_1 + 0x2850)) * fVar21 + *(float *)(param_1 + 0x2850);
    *(float *)(param_1 + 0x2854) =
         (fVar22 - *(float *)(param_1 + 0x2854)) * fVar21 + *(float *)(param_1 + 0x2854);
    bVar6 = param_2[5];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2824) =
         (*(float *)(param_2 + 0x314) - *(float *)(param_1 + 0x2824)) * fVar21 +
         *(float *)(param_1 + 0x2824);
    bVar6 = param_2[5];
  }
  if ((char)bVar6 < '\0') {
    fVar22 = *(float *)(param_2 + 0x354);
    fVar23 = *(float *)(param_2 + 0x350);
    fVar24 = *(float *)(param_2 + 0x34c);
    *(float *)(param_1 + 0x2858) =
         (*(float *)(param_2 + 0x348) - *(float *)(param_1 + 0x2858)) * fVar21 +
         *(float *)(param_1 + 0x2858);
    *(float *)(param_1 + 0x285c) =
         (fVar24 - *(float *)(param_1 + 0x285c)) * fVar21 + *(float *)(param_1 + 0x285c);
    *(float *)(param_1 + 0x2860) =
         (fVar23 - *(float *)(param_1 + 0x2860)) * fVar21 + *(float *)(param_1 + 0x2860);
    *(float *)(param_1 + 0x2864) =
         (fVar22 - *(float *)(param_1 + 0x2864)) * fVar21 + *(float *)(param_1 + 0x2864);
  }
  bVar6 = param_2[6];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2828) =
         (*(float *)(param_2 + 0x318) - *(float *)(param_1 + 0x2828)) * fVar21 +
         *(float *)(param_1 + 0x2828);
    bVar6 = param_2[6];
  }
  if ((bVar6 & 2) != 0) {
    fVar22 = *(float *)(param_2 + 0x364);
    fVar23 = *(float *)(&DAT_00002874 + param_1);
    fVar24 = *(float *)(param_2 + 0x360);
    fVar25 = *(float *)(param_2 + 0x35c);
    *(float *)(param_1 + 0x2868) =
         (*(float *)(param_2 + 0x358) - *(float *)(param_1 + 0x2868)) * fVar21 +
         *(float *)(param_1 + 0x2868);
    *(float *)(param_1 + 0x286c) =
         (fVar25 - *(float *)(param_1 + 0x286c)) * fVar21 + *(float *)(param_1 + 0x286c);
    *(float *)(param_1 + 0x2870) =
         (fVar24 - *(float *)(param_1 + 0x2870)) * fVar21 + *(float *)(param_1 + 0x2870);
    *(float *)(&DAT_00002874 + param_1) = (fVar22 - fVar23) * fVar21 + fVar23;
    bVar6 = param_2[6];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x282c) =
         (*(float *)(param_2 + 0x31c) - *(float *)(param_1 + 0x282c)) * fVar21 +
         *(float *)(param_1 + 0x282c);
    bVar6 = param_2[6];
  }
  if ((bVar6 & 8) != 0) {
    fVar22 = *(float *)(param_2 + 0x374);
    fVar23 = *(float *)(param_1 + 0x2884);
    fVar24 = *(float *)(param_2 + 0x370);
    fVar25 = *(float *)(param_1 + 0x2880);
    fVar26 = *(float *)(param_2 + 0x36c);
    fVar18 = *(float *)(&DAT_0000287c + param_1);
    *(float *)(param_1 + 0x2878) =
         (*(float *)(param_2 + 0x368) - *(float *)(param_1 + 0x2878)) * fVar21 +
         *(float *)(param_1 + 0x2878);
    *(float *)(&DAT_0000287c + param_1) = (fVar26 - fVar18) * fVar21 + fVar18;
    *(float *)(param_1 + 0x2880) = (fVar24 - fVar25) * fVar21 + fVar25;
    *(float *)(param_1 + 0x2884) = (fVar22 - fVar23) * fVar21 + fVar23;
    bVar6 = param_2[6];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2830) =
         (*(float *)(param_2 + 800) - *(float *)(param_1 + 0x2830)) * fVar21 +
         *(float *)(param_1 + 0x2830);
    bVar6 = param_2[6];
  }
  if ((bVar6 & 0x20) != 0) {
    fVar22 = *(float *)(param_2 + 900);
    fVar23 = *(float *)(&DAT_00002894 + param_1);
    fVar24 = *(float *)(param_2 + 0x380);
    fVar25 = *(float *)(param_1 + 0x2890);
    fVar26 = *(float *)(param_2 + 0x37c);
    fVar18 = *(float *)(&DAT_0000288c + param_1);
    *(float *)(param_1 + 0x2888) =
         (*(float *)(param_2 + 0x378) - *(float *)(param_1 + 0x2888)) * fVar21 +
         *(float *)(param_1 + 0x2888);
    *(float *)(&DAT_0000288c + param_1) = (fVar26 - fVar18) * fVar21 + fVar18;
    *(float *)(param_1 + 0x2890) = (fVar24 - fVar25) * fVar21 + fVar25;
    *(float *)(&DAT_00002894 + param_1) = (fVar22 - fVar23) * fVar21 + fVar23;
    bVar6 = param_2[6];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x2834) =
         (*(float *)(param_2 + 0x324) - *(float *)(param_1 + 0x2834)) * fVar21 +
         *(float *)(param_1 + 0x2834);
  }
  bVar6 = param_2[8];
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x28d0) =
         (*(float *)(param_2 + 0x3c0) - *(float *)(param_1 + 0x28d0)) * fVar21 +
         *(float *)(param_1 + 0x28d0);
    bVar6 = param_2[8];
  }
  if ((bVar6 & 4) != 0) {
    fVar22 = *(float *)(param_2 + 0x3d0);
    fVar23 = *(float *)(param_2 + 0x3cc);
    fVar24 = *(float *)(param_2 + 0x3c8);
    *(float *)(param_1 + 0x28d4) =
         (*(float *)(param_2 + 0x3c4) - *(float *)(param_1 + 0x28d4)) * fVar21 +
         *(float *)(param_1 + 0x28d4);
    *(float *)(param_1 + 0x28d8) =
         (fVar24 - *(float *)(param_1 + 0x28d8)) * fVar21 + *(float *)(param_1 + 0x28d8);
    *(float *)(param_1 + 0x28dc) =
         (fVar23 - *(float *)(param_1 + 0x28dc)) * fVar21 + *(float *)(param_1 + 0x28dc);
    *(float *)(param_1 + 0x28e0) =
         (fVar22 - *(float *)(param_1 + 0x28e0)) * fVar21 + *(float *)(param_1 + 0x28e0);
  }
  bVar6 = param_2[7];
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x2898) =
         (*(float *)(param_2 + 0x388) - *(float *)(param_1 + 0x2898)) * fVar21 +
         *(float *)(param_1 + 0x2898);
    bVar6 = param_2[7];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x289c) =
         (*(float *)(param_2 + 0x38c) - *(float *)(param_1 + 0x289c)) * fVar21 +
         *(float *)(param_1 + 0x289c);
    bVar6 = param_2[7];
  }
  if ((bVar6 & 8) != 0) {
    dVar2 = *(double *)(param_2 + 0x3a0);
    *(double *)(param_1 + 0x28a8) =
         (*(double *)(param_2 + 0x398) - *(double *)(param_1 + 0x28a8)) * (double)fVar21 +
         *(double *)(param_1 + 0x28a8);
    *(double *)(param_1 + 0x28b0) =
         (dVar2 - *(double *)(param_1 + 0x28b0)) * (double)fVar21 + *(double *)(param_1 + 0x28b0);
    bVar6 = param_2[7];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x28b8) =
         (*(float *)(param_2 + 0x3a8) - *(float *)(param_1 + 0x28b8)) * fVar21 +
         *(float *)(param_1 + 0x28b8);
    bVar6 = param_2[7];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x28bc) =
         (*(float *)(param_2 + 0x3ac) - *(float *)(param_1 + 0x28bc)) * fVar21 +
         *(float *)(param_1 + 0x28bc);
    bVar6 = param_2[7];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x28c0) =
         (*(float *)(param_2 + 0x3b0) - *(float *)(param_1 + 0x28c0)) * fVar21 +
         *(float *)(param_1 + 0x28c0);
  }
  bVar6 = param_2[4];
  if ((bVar6 & 0x20) != 0) {
    *(byte *)(param_1 + 0x2954) = *(byte *)(param_1 + 0x2954) & 0xfe | param_2[0x444] & 1;
    bVar6 = param_2[4];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2968) =
         (*(float *)(param_2 + 0x458) - *(float *)(param_1 + 0x2968)) * fVar21 +
         *(float *)(param_1 + 0x2968);
    bVar6 = param_2[4];
  }
  if ((bVar6 & 0x40) != 0) {
    fVar22 = *(float *)(param_2 + 0x454);
    fVar23 = *(float *)(param_2 + 0x450);
    fVar24 = *(float *)(param_2 + 0x44c);
    *(float *)(param_1 + 0x2958) =
         (*(float *)(param_2 + 0x448) - *(float *)(param_1 + 0x2958)) * fVar21 +
         *(float *)(param_1 + 0x2958);
    *(float *)(param_1 + 0x295c) =
         (fVar24 - *(float *)(param_1 + 0x295c)) * fVar21 + *(float *)(param_1 + 0x295c);
    *(float *)(param_1 + 0x2960) =
         (fVar23 - *(float *)(param_1 + 0x2960)) * fVar21 + *(float *)(param_1 + 0x2960);
    *(float *)(param_1 + 0x2964) =
         (fVar22 - *(float *)(param_1 + 0x2964)) * fVar21 + *(float *)(param_1 + 0x2964);
  }
  bVar6 = param_2[8];
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2978) =
         (*(float *)(param_2 + 0x468) - *(float *)(param_1 + 0x2978)) * fVar21 +
         *(float *)(param_1 + 0x2978);
    bVar6 = param_2[8];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x297c) =
         (*(float *)(param_2 + 0x46c) - *(float *)(param_1 + 0x297c)) * fVar21 +
         *(float *)(param_1 + 0x297c);
    bVar6 = param_2[8];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x29b0) =
         (*(float *)(param_2 + 0x4a0) - *(float *)(param_1 + 0x29b0)) * fVar21 +
         *(float *)(param_1 + 0x29b0);
  }
  bVar6 = param_2[9];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x29b4) =
         (*(float *)(param_2 + 0x4a4) - *(float *)(param_1 + 0x29b4)) * fVar21 +
         *(float *)(param_1 + 0x29b4);
    bVar6 = param_2[9];
  }
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x29b8) =
         (*(float *)(param_2 + 0x4a8) - *(float *)(param_1 + 0x29b8)) * fVar21 +
         *(float *)(param_1 + 0x29b8);
    bVar6 = param_2[9];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x29bc) =
         (*(float *)(param_2 + 0x4ac) - *(float *)(param_1 + 0x29bc)) * fVar21 +
         *(float *)(param_1 + 0x29bc);
    bVar6 = param_2[9];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x29c0) =
         (*(float *)(param_2 + 0x4b0) - *(float *)(param_1 + 0x29c0)) * fVar21 +
         *(float *)(param_1 + 0x29c0);
    bVar6 = param_2[9];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x29c4) =
         (*(float *)(param_2 + 0x4b4) - *(float *)(param_1 + 0x29c4)) * fVar21 +
         *(float *)(param_1 + 0x29c4);
    bVar6 = param_2[9];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x298c) =
         (*(float *)(param_2 + 0x47c) - *(float *)(param_1 + 0x298c)) * fVar21 +
         *(float *)(param_1 + 0x298c);
  }
  bVar6 = param_2[10];
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x29c8) =
         (*(float *)(param_2 + 0x4b8) - *(float *)(param_1 + 0x29c8)) * fVar21 +
         *(float *)(param_1 + 0x29c8);
    bVar6 = param_2[10];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x29cc) =
         (*(float *)(param_2 + 0x4bc) - *(float *)(param_1 + 0x29cc)) * fVar21 +
         *(float *)(param_1 + 0x29cc);
    bVar6 = param_2[10];
  }
  if ((bVar6 & 0x10) != 0) {
    *(byte *)(param_1 + 0x29d4) = param_2[0x4c4];
    bVar6 = param_2[10];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x29d8) =
         (*(float *)(param_2 + 0x4c8) - *(float *)(param_1 + 0x29d8)) * fVar21 +
         *(float *)(param_1 + 0x29d8);
    bVar6 = param_2[10];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x29dc) =
         (*(float *)(param_2 + 0x4cc) - *(float *)(param_1 + 0x29dc)) * fVar21 +
         *(float *)(param_1 + 0x29dc);
    bVar6 = param_2[10];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x29e0) =
         (*(float *)(param_2 + 0x4d0) - *(float *)(param_1 + 0x29e0)) * fVar21 +
         *(float *)(param_1 + 0x29e0);
  }
  bVar6 = param_2[0xb];
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x29f8) =
         (*(float *)(param_2 + 0x4e8) - *(float *)(param_1 + 0x29f8)) * fVar21 +
         *(float *)(param_1 + 0x29f8);
    bVar6 = param_2[0xb];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x29fc) =
         (*(float *)(param_2 + 0x4ec) - *(float *)(param_1 + 0x29fc)) * fVar21 +
         *(float *)(param_1 + 0x29fc);
    bVar6 = param_2[0xb];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2a00) =
         (*(float *)(param_2 + 0x4f0) - *(float *)(param_1 + 0x2a00)) * fVar21 +
         *(float *)(param_1 + 0x2a00);
    bVar6 = param_2[0xb];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2a04) =
         (*(float *)(param_2 + 0x4f4) - *(float *)(param_1 + 0x2a04)) * fVar21 +
         *(float *)(param_1 + 0x2a04);
    bVar6 = param_2[0xb];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x2a08) =
         (*(float *)(param_2 + 0x4f8) - *(float *)(param_1 + 0x2a08)) * fVar21 +
         *(float *)(param_1 + 0x2a08);
    bVar6 = param_2[0xb];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2a0c) =
         (*(float *)(param_2 + 0x4fc) - *(float *)(param_1 + 0x2a0c)) * fVar21 +
         *(float *)(param_1 + 0x2a0c);
  }
  bVar6 = param_2[0xc];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2a10) =
         (*(float *)(param_2 + 0x500) - *(float *)(param_1 + 0x2a10)) * fVar21 +
         *(float *)(param_1 + 0x2a10);
    bVar6 = param_2[0xc];
  }
  if ((bVar6 & 2) != 0) {
    fVar22 = *(float *)(param_2 + 0x510);
    fVar23 = *(float *)(param_2 + 0x50c);
    fVar24 = *(float *)(param_2 + 0x508);
    *(float *)(param_1 + 0x2a14) =
         (*(float *)(param_2 + 0x504) - *(float *)(param_1 + 0x2a14)) * fVar21 +
         *(float *)(param_1 + 0x2a14);
    *(float *)(param_1 + 0x2a18) =
         (fVar24 - *(float *)(param_1 + 0x2a18)) * fVar21 + *(float *)(param_1 + 0x2a18);
    *(float *)(param_1 + 0x2a1c) =
         (fVar23 - *(float *)(param_1 + 0x2a1c)) * fVar21 + *(float *)(param_1 + 0x2a1c);
    *(float *)(param_1 + 0x2a20) =
         (fVar22 - *(float *)(param_1 + 0x2a20)) * fVar21 + *(float *)(param_1 + 0x2a20);
    bVar6 = param_2[0xc];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x2a24) =
         (*(float *)(param_2 + 0x514) - *(float *)(param_1 + 0x2a24)) * fVar21 +
         *(float *)(param_1 + 0x2a24);
    bVar6 = param_2[0xc];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2a28) =
         (*(float *)(param_2 + 0x518) - *(float *)(param_1 + 0x2a28)) * fVar21 +
         *(float *)(param_1 + 0x2a28);
    bVar6 = param_2[0xc];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x2ab8) =
         (*(float *)(param_2 + 0x5a8) - *(float *)(param_1 + 0x2ab8)) * fVar21 +
         *(float *)(param_1 + 0x2ab8);
    bVar6 = param_2[0xc];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2abc) =
         (*(float *)(param_2 + 0x5ac) - *(float *)(param_1 + 0x2abc)) * fVar21 +
         *(float *)(param_1 + 0x2abc);
  }
  bVar6 = param_2[0xd];
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x2ac8) =
         (*(float *)(param_2 + 0x5b8) - *(float *)(param_1 + 0x2ac8)) * fVar21 +
         *(float *)(param_1 + 0x2ac8);
    bVar6 = param_2[0xd];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x2acc) =
         (*(float *)(param_2 + 0x5bc) - *(float *)(param_1 + 0x2acc)) * fVar21 +
         *(float *)(param_1 + 0x2acc);
    bVar6 = param_2[0xd];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2ad0) =
         (*(float *)(param_2 + 0x5c0) - *(float *)(param_1 + 0x2ad0)) * fVar21 +
         *(float *)(param_1 + 0x2ad0);
    bVar6 = param_2[0xd];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2ad4) =
         (*(float *)(param_2 + 0x5c4) - *(float *)(param_1 + 0x2ad4)) * fVar21 +
         *(float *)(param_1 + 0x2ad4);
    bVar6 = param_2[0xd];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x2ad8) =
         (*(float *)(param_2 + 0x5c8) - *(float *)(param_1 + 0x2ad8)) * fVar21 +
         *(float *)(param_1 + 0x2ad8);
    bVar6 = param_2[0xd];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2adc) =
         (*(float *)(param_2 + 0x5cc) - *(float *)(param_1 + 0x2adc)) * fVar21 +
         *(float *)(param_1 + 0x2adc);
  }
  bVar6 = param_2[0xe];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2ae0) =
         (*(float *)(param_2 + 0x5d0) - *(float *)(param_1 + 0x2ae0)) * fVar21 +
         *(float *)(param_1 + 0x2ae0);
    bVar6 = param_2[0xe];
  }
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x2ae4) =
         (*(float *)(param_2 + 0x5d4) - *(float *)(param_1 + 0x2ae4)) * fVar21 +
         *(float *)(param_1 + 0x2ae4);
    bVar6 = param_2[0xe];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x2af0) =
         (*(float *)(param_2 + 0x5e0) - *(float *)(param_1 + 0x2af0)) * fVar21 +
         *(float *)(param_1 + 0x2af0);
    bVar6 = param_2[0xe];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2af4) =
         (*(float *)(param_2 + 0x5e4) - *(float *)(param_1 + 0x2af4)) * fVar21 +
         *(float *)(param_1 + 0x2af4);
    bVar6 = param_2[0xe];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 11000) =
         (*(float *)(param_2 + 0x5e8) - *(float *)(param_1 + 11000)) * fVar21 +
         *(float *)(param_1 + 11000);
    bVar6 = param_2[0xe];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x2b00) =
         (*(float *)(param_2 + 0x5f0) - *(float *)(param_1 + 0x2b00)) * fVar21 +
         *(float *)(param_1 + 0x2b00);
    bVar6 = param_2[0xe];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2b04) =
         (*(float *)(param_2 + 0x5f4) - *(float *)(param_1 + 0x2b04)) * fVar21 +
         *(float *)(param_1 + 0x2b04);
  }
  bVar6 = param_2[0xf];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2b08) =
         (*(float *)(param_2 + 0x5f8) - *(float *)(param_1 + 0x2b08)) * fVar21 +
         *(float *)(param_1 + 0x2b08);
    bVar6 = param_2[0xf];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x2b0c) =
         (*(float *)(param_2 + 0x5fc) - *(float *)(param_1 + 0x2b0c)) * fVar21 +
         *(float *)(param_1 + 0x2b0c);
    bVar6 = param_2[0xf];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x2b10) =
         (*(float *)(param_2 + 0x600) - *(float *)(param_1 + 0x2b10)) * fVar21 +
         *(float *)(param_1 + 0x2b10);
    bVar6 = param_2[0xf];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2b14) =
         (*(float *)(param_2 + 0x604) - *(float *)(param_1 + 0x2b14)) * fVar21 +
         *(float *)(param_1 + 0x2b14);
    bVar6 = param_2[0xf];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2b18) =
         (*(float *)(param_2 + 0x608) - *(float *)(param_1 + 0x2b18)) * fVar21 +
         *(float *)(param_1 + 0x2b18);
    bVar6 = param_2[0xf];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x2b1c) =
         (*(float *)(param_2 + 0x60c) - *(float *)(param_1 + 0x2b1c)) * fVar21 +
         *(float *)(param_1 + 0x2b1c);
    bVar6 = param_2[0xf];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2b20) =
         (*(float *)(param_2 + 0x610) - *(float *)(param_1 + 0x2b20)) * fVar21 +
         *(float *)(param_1 + 0x2b20);
  }
  if ((param_2[0x10] & 1) != 0) {
    *(float *)(param_1 + 0x2b24) =
         (*(float *)(param_2 + 0x614) - *(float *)(param_1 + 0x2b24)) * fVar21 +
         *(float *)(param_1 + 0x2b24);
  }
  if ((char)param_2[0x19] < '\0') {
    fVar22 = *(float *)(param_2 + 0x3e4);
    fVar23 = *(float *)(param_2 + 0x3e0);
    fVar24 = *(float *)(param_2 + 0x3dc);
    *(float *)(param_1 + 0x28e8) =
         (*(float *)(param_2 + 0x3d8) - *(float *)(param_1 + 0x28e8)) * fVar21 +
         *(float *)(param_1 + 0x28e8);
    *(float *)(param_1 + 0x28ec) =
         (fVar24 - *(float *)(param_1 + 0x28ec)) * fVar21 + *(float *)(param_1 + 0x28ec);
    *(float *)(param_1 + 0x28f0) =
         (fVar23 - *(float *)(param_1 + 0x28f0)) * fVar21 + *(float *)(param_1 + 0x28f0);
    *(float *)(param_1 + 0x28f4) =
         (fVar22 - *(float *)(param_1 + 0x28f4)) * fVar21 + *(float *)(param_1 + 0x28f4);
  }
  bVar6 = param_2[0x1a];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x28f8) =
         (*(float *)(param_2 + 1000) - *(float *)(param_1 + 0x28f8)) * fVar21 +
         *(float *)(param_1 + 0x28f8);
    bVar6 = param_2[0x1a];
  }
  if ((bVar6 & 8) != 0) {
    fVar22 = *(float *)(param_1 + 0x2b50);
    if ((fVar22 != 0.0) || (NAN(fVar22))) {
      fVar23 = *(float *)(param_2 + 0x640);
      if ((fVar23 == 0.0) && (!NAN(fVar23))) goto LAB_14102ee27;
      fVar22 = (fVar23 - fVar22) * fVar21 + fVar22;
    }
    else {
LAB_14102ee27:
      fVar22 = *(float *)(param_2 + 0x640);
    }
    *(float *)(param_1 + 0x2b50) = fVar22;
    bVar6 = param_2[0x1a];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2980) =
         (*(float *)(param_2 + 0x470) - *(float *)(param_1 + 0x2980)) * fVar21 +
         *(float *)(param_1 + 0x2980);
    bVar6 = param_2[0x1a];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2984) =
         (*(float *)(param_2 + 0x474) - *(float *)(param_1 + 0x2984)) * fVar21 +
         *(float *)(param_1 + 0x2984);
    bVar6 = param_2[0x1a];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2b48) =
         (*(float *)(param_2 + 0x638) - *(float *)(param_1 + 0x2b48)) * fVar21 +
         *(float *)(param_1 + 0x2b48);
  }
  bVar6 = param_2[0x1b];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2b4c) =
         (*(float *)(param_2 + 0x63c) - *(float *)(param_1 + 0x2b4c)) * fVar21 +
         *(float *)(param_1 + 0x2b4c);
    bVar6 = param_2[0x1b];
  }
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x2b58) =
         (*(float *)(param_2 + 0x648) - *(float *)(param_1 + 0x2b58)) * fVar21 +
         *(float *)(param_1 + 0x2b58);
    bVar6 = param_2[0x1b];
  }
  if ((bVar6 & 4) != 0) {
    *(uint *)(param_1 + 0x2b5c) =
         *(uint *)(param_1 + 0x2b5c) & 0xfffffffe | *(uint *)(param_2 + 0x64c) & 1;
    bVar6 = param_2[0x1b];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x2b54) =
         (*(float *)(param_2 + 0x644) - *(float *)(param_1 + 0x2b54)) * fVar21 +
         *(float *)(param_1 + 0x2b54);
    bVar6 = param_2[0x1b];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2b60) =
         (*(float *)(param_2 + 0x650) - *(float *)(param_1 + 0x2b60)) * fVar21 +
         *(float *)(param_1 + 0x2b60);
    bVar6 = param_2[0x1b];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2b64) =
         (*(float *)(param_2 + 0x654) - *(float *)(param_1 + 0x2b64)) * fVar21 +
         *(float *)(param_1 + 0x2b64);
    bVar6 = param_2[0x1b];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(param_1 + 0x2b68) =
         (*(float *)(param_2 + 0x658) - *(float *)(param_1 + 0x2b68)) * fVar21 +
         *(float *)(param_1 + 0x2b68);
    bVar6 = param_2[0x1b];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2b6c) =
         (*(float *)(param_2 + 0x65c) - *(float *)(param_1 + 0x2b6c)) * fVar21 +
         *(float *)(param_1 + 0x2b6c);
  }
  bVar6 = param_2[0x1c];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2b70) =
         (*(float *)(param_2 + 0x660) - *(float *)(param_1 + 0x2b70)) * fVar21 +
         *(float *)(param_1 + 0x2b70);
    bVar6 = param_2[0x1c];
  }
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x2b74) =
         (*(float *)(param_2 + 0x664) - *(float *)(param_1 + 0x2b74)) * fVar21 +
         *(float *)(param_1 + 0x2b74);
    bVar6 = param_2[0x1c];
  }
  if ((bVar6 & 8) != 0) {
    *(float *)(param_1 + 0x2b78) =
         (*(float *)(param_2 + 0x668) - *(float *)(param_1 + 0x2b78)) * fVar21 +
         *(float *)(param_1 + 0x2b78);
    bVar6 = param_2[0x1c];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2b7c) =
         (*(float *)(param_2 + 0x66c) - *(float *)(param_1 + 0x2b7c)) * fVar21 +
         *(float *)(param_1 + 0x2b7c);
    bVar6 = param_2[0x1c];
  }
  if ((bVar6 & 0x20) != 0) {
    *(float *)(param_1 + 0x2b80) =
         (*(float *)(param_2 + 0x670) - *(float *)(param_1 + 0x2b80)) * fVar21 +
         *(float *)(param_1 + 0x2b80);
    bVar6 = param_2[0x1c];
  }
  if ((bVar6 & 0x40) != 0) {
    *(float *)(&DAT_00002b84 + param_1) =
         (*(float *)(param_2 + 0x674) - *(float *)(&DAT_00002b84 + param_1)) * fVar21 +
         *(float *)(&DAT_00002b84 + param_1);
    bVar6 = param_2[0x1c];
  }
  if ((char)bVar6 < '\0') {
    *(float *)(param_1 + 0x2b88) =
         (*(float *)(param_2 + 0x678) - *(float *)(param_1 + 0x2b88)) * fVar21 +
         *(float *)(param_1 + 0x2b88);
  }
  bVar6 = param_2[0x1d];
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2b8c) =
         (*(float *)(param_2 + 0x67c) - *(float *)(param_1 + 0x2b8c)) * fVar21 +
         *(float *)(param_1 + 0x2b8c);
    bVar6 = param_2[0x1d];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x2b94) =
         (*(float *)(param_2 + 0x684) - *(float *)(param_1 + 0x2b94)) * fVar21 +
         *(float *)(param_1 + 0x2b94);
  }
  bVar6 = param_2[0x1e];
  if ((bVar6 & 2) != 0) {
    *(float *)(param_1 + 0x294c) =
         (*(float *)(param_2 + 0x43c) - *(float *)(param_1 + 0x294c)) * fVar21 +
         *(float *)(param_1 + 0x294c);
    bVar6 = param_2[0x1e];
  }
  if ((bVar6 & 1) != 0) {
    *(float *)(param_1 + 0x2948) =
         (*(float *)(param_2 + 0x438) - *(float *)(param_1 + 0x2948)) * fVar21 +
         *(float *)(param_1 + 0x2948);
    bVar6 = param_2[0x1e];
  }
  if ((bVar6 & 4) != 0) {
    *(float *)(param_1 + 0x2950) =
         (*(float *)(param_2 + 0x440) - *(float *)(param_1 + 0x2950)) * fVar21 +
         *(float *)(param_1 + 0x2950);
  }
  bVar6 = param_2[0x1d];
  if ((bVar6 & 8) != 0) {
    *(byte *)(param_1 + 0x2b98) = *(byte *)(param_1 + 0x2b98) & 0xfe | param_2[0x688] & 1;
    bVar6 = param_2[0x1d];
  }
  if ((bVar6 & 0x10) != 0) {
    *(float *)(param_1 + 0x2b9c) =
         (*(float *)(param_2 + 0x68c) - *(float *)(param_1 + 0x2b9c)) * fVar21 +
         *(float *)(param_1 + 0x2b9c);
  }
  uVar13 = *(uint *)(param_2 + 0x20);
  if ((uVar13 & 0x40) != 0) {
    *(byte *)(param_1 + 0x2bd4) = param_2[0x6c4];
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((char)uVar13 < '\0') {
    *(undefined4 *)(param_1 + 0x2bd8) = *(undefined4 *)(param_2 + 0x6c8);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2bdc) = *(undefined4 *)(param_2 + 0x6cc);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 9 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2be0) = *(undefined4 *)(param_2 + 0x6d0);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 10 & 1) != 0) {
    *(byte *)(param_1 + 0x2be4) = param_2[0x6d4];
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0xb & 1) != 0) {
    *(byte *)(param_1 + 0x2be5) = *(byte *)(param_1 + 0x2be5) & 0xfe | param_2[0x6d5] & 1;
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0xc & 1) != 0) {
    *(byte *)(param_1 + 0x28e4) = param_2[0x3d4];
  }
  if ((param_2[0x2c] & 1) != 0) {
    *(undefined4 *)(param_1 + 0x292c) = *(undefined4 *)(param_2 + 0x41c);
  }
  uVar13 = *(uint *)(param_2 + 0x20);
  if ((uVar13 >> 0xd & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2900) = *(undefined4 *)(param_2 + 0x3f0);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0xe & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2904) = *(undefined4 *)(param_2 + 0x3f4);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((short)uVar13 < 0) {
    *(undefined4 *)(param_1 + 0x2908) = *(undefined4 *)(param_2 + 0x3f8);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x10 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x290c) = *(undefined4 *)(param_2 + 0x3fc);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x11 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2910) = *(undefined4 *)(param_2 + 0x400);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x12 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2914) = *(undefined4 *)(param_2 + 0x404);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x13 & 1) != 0) {
    *(byte *)(param_1 + 0x2918) = *(byte *)(param_1 + 0x2918) & 0xfe | param_2[0x408] & 1;
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x14 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x291c) = *(undefined4 *)(param_2 + 0x40c);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x15 & 1) != 0) {
    *(float *)(param_1 + 0x2920) =
         (*(float *)(param_2 + 0x410) - *(float *)(param_1 + 0x2920)) * fVar21 +
         *(float *)(param_1 + 0x2920);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x16 & 1) != 0) {
    *(float *)(param_1 + 0x2924) =
         (*(float *)(param_2 + 0x414) - *(float *)(param_1 + 0x2924)) * fVar21 +
         *(float *)(param_1 + 0x2924);
    uVar13 = *(uint *)(param_2 + 0x20);
  }
  if ((uVar13 >> 0x17 & 1) != 0) {
    *(float *)(param_1 + 0x2928) =
         (*(float *)(param_2 + 0x418) - *(float *)(param_1 + 0x2928)) * fVar21 +
         *(float *)(param_1 + 0x2928);
  }
  bVar6 = param_2[0x24];
  if ((bVar6 & 1) != 0) {
    *(byte *)(param_1 + 0x28fc) = param_2[0x3ec];
    bVar6 = param_2[0x24];
  }
  if ((bVar6 & 2) != 0) {
    *(byte *)(param_1 + 0x2938) = *(byte *)(param_1 + 0x2938) & 0xfe | param_2[0x428] & 1;
    bVar6 = param_2[0x24];
  }
  if ((bVar6 & 4) != 0) {
    *(byte *)(param_1 + 0x2938) = *(byte *)(param_1 + 0x2938) & 0xfd | param_2[0x428] & 2;
  }
  uVar13 = *(uint *)(param_2 + 0x28);
  if ((uVar13 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x293c) = *(undefined4 *)(param_2 + 0x42c);
    uVar13 = *(uint *)(param_2 + 0x28);
  }
  if ((uVar13 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x2940) = *(undefined4 *)(param_2 + 0x430);
    uVar13 = *(uint *)(param_2 + 0x28);
  }
  if ((uVar13 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x2944) = *(undefined4 *)(param_2 + 0x434);
  }
  bVar6 = param_2[0x1d];
  if ((bVar6 & 0x40) != 0) {
    *(byte *)(param_1 + 0x2930) = param_2[0x420];
    bVar6 = param_2[0x1d];
  }
  if ((char)bVar6 < '\0') {
    *(undefined4 *)(param_1 + 0x2934) = *(undefined4 *)(param_2 + 0x424);
  }
  uVar13 = *(uint *)(param_2 + 0x14);
  if ((uVar13 & 1) != 0) {
    *(uint *)(param_1 + 0x2b28) =
         *(uint *)(param_1 + 0x2b28) & 0xfffffffe | *(uint *)(param_2 + 0x618) & 1;
    uVar13 = *(uint *)(param_2 + 0x14);
  }
  if ((uVar13 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x2b2c) = *(undefined4 *)(param_2 + 0x61c);
    uVar13 = *(uint *)(param_2 + 0x14);
  }
  if ((uVar13 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x2b30) = *(undefined4 *)(param_2 + 0x620);
    uVar13 = *(uint *)(param_2 + 0x14);
  }
  if ((uVar13 & 8) != 0) {
    *(undefined4 *)(param_1 + 0x2b34) = *(undefined4 *)(param_2 + 0x624);
  }
  uVar13 = *(uint *)(param_2 + 0x30);
  if ((uVar13 & 8) != 0) {
    *(undefined4 *)(param_1 + 0x2be8) = *(undefined4 *)(param_2 + 0x6d8);
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x2bec) = *(undefined4 *)(param_2 + 0x6dc);
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 & 0x20) != 0) {
    *(float *)(param_1 + 0x2bf0) =
         (*(float *)(param_2 + 0x6e0) - *(float *)(param_1 + 0x2bf0)) * fVar21 +
         *(float *)(param_1 + 0x2bf0);
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 & 0x40) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xfffffffe | *(uint *)(param_2 + 0x6e4) & 1;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((char)uVar13 < '\0') {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xfffffffd | *(uint *)(param_2 + 0x6e4) & 2;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xfffffffb | *(uint *)(param_2 + 0x6e4) & 4;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 9 & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xfffffff7 | *(uint *)(param_2 + 0x6e4) & 8;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 10 & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xffffffef | *(uint *)(param_2 + 0x6e4) & 0x10;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 0xb & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xffffffdf | *(uint *)(param_2 + 0x6e4) & 0x20;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xffffffbf | *(uint *)(param_2 + 0x6e4) & 0x40;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xffffff7f | *(uint *)(param_2 + 0x6e4) & 0x80;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xfffffeff | *(uint *)(param_2 + 0x6e4) & 0x100;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((short)uVar13 < 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xfffffdff | *(uint *)(param_2 + 0x6e4) & 0x200;
    uVar13 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar13 >> 0x10 & 1) != 0) {
    *(uint *)(param_1 + 0x2bf4) =
         *(uint *)(param_1 + 0x2bf4) & 0xfffffbff | *(uint *)(param_2 + 0x6e4) & 0x400;
  }
  if ((param_2[0x1a] & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x2988) = *(undefined4 *)(param_2 + 0x478);
  }
  lVar9 = *(longlong *)(param_2 + 0x460);
  if ((char)param_2[4] < '\0' && lVar9 != 0) {
    fVar22 = *(float *)(param_2 + 0x458);
    fVar23 = fVar22;
    fVar24 = fVar22;
    fVar25 = fVar22;
    if ((param_2[4] & 0x40) != 0) {
      fVar23 = *(float *)(param_2 + 0x448) * fVar22;
      fVar24 = *(float *)(param_2 + 0x44c) * fVar22;
      fVar25 = *(float *)(param_2 + 0x450) * fVar22;
      fVar22 = fVar22 * *(float *)(param_2 + 0x454);
    }
    lVar12 = param_1 + 0x2dd0;
    iVar17 = *(int *)(param_1 + 0x2e98);
    if (0 < iVar17) {
      fVar26 = 1.0 - fVar21;
      bVar15 = false;
      uVar14 = 0;
      do {
        uVar13 = (uint)uVar14;
        lVar8 = *(longlong *)(param_1 + 0x2e90);
        if (*(longlong *)(param_1 + 0x2e90) == 0) {
          lVar8 = lVar12;
        }
        pfVar1 = (float *)(lVar8 + uVar14 * 0x18);
        if (*(longlong *)(pfVar1 + 4) == lVar9) {
          fVar18 = (fVar25 - pfVar1[2]) * fVar21 + pfVar1[2];
          fVar19 = (fVar24 - pfVar1[1]) * fVar21 + pfVar1[1];
          fVar20 = (fVar23 - *pfVar1) * fVar21 + *pfVar1;
          *pfVar1 = fVar20;
          pfVar1[1] = fVar19;
          pfVar1[2] = fVar18;
          pfVar1[3] = (fVar22 - pfVar1[3]) * fVar21 + pfVar1[3];
          bVar15 = true;
        }
        else {
          fVar20 = *pfVar1 * fVar26;
          *pfVar1 = fVar20;
          fVar19 = pfVar1[1] * fVar26;
          pfVar1[1] = fVar19;
          fVar18 = pfVar1[2] * fVar26;
          pfVar1[2] = fVar18;
          pfVar1[3] = pfVar1[3] * fVar26;
        }
        iVar17 = *(int *)(param_1 + 0x2e98);
        if (((fVar20 * fVar20 < 1e-05) && (fVar19 * fVar19 < 1e-05)) && (fVar18 * fVar18 < 1e-05)) {
          if (~uVar13 + iVar17 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x2e90);
            if (*(longlong *)(param_1 + 0x2e90) == 0) {
              lVar8 = lVar12;
            }
            memmove((void *)(lVar8 + uVar14 * 0x18),(void *)(lVar8 + uVar14 * 0x18 + 0x18),
                    (longlong)(int)(~uVar13 + iVar17) * 0x18);
            iVar17 = *(int *)(param_1 + 0x2e98);
          }
          iVar17 = iVar17 + -1;
          *(int *)(param_1 + 0x2e98) = iVar17;
          uVar13 = uVar13 - 1;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < iVar17);
      if (bVar15) goto LAB_14102f880;
    }
    fVar23 = fVar23 * fVar21;
    fVar24 = fVar24 * fVar21;
    fVar25 = fVar25 * fVar21;
    if (((1e-05 <= fVar23 * fVar23) || (1e-05 <= fVar24 * fVar24)) || (1e-05 <= fVar25 * fVar25)) {
      *(uint *)(param_1 + 0x2e98) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x2e9c) < iVar17 + 1U) {
        FUN_147d0a3be(lVar12,iVar17);
      }
      if (*(longlong *)(param_1 + 0x2e90) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x2e90);
      }
      lVar8 = (longlong)iVar17;
      *(float *)(lVar12 + lVar8 * 0x18) = fVar23;
      *(float *)(lVar12 + 4 + lVar8 * 0x18) = fVar24;
      *(float *)(lVar12 + 8 + lVar8 * 0x18) = fVar25;
      *(float *)(lVar12 + 0xc + lVar8 * 0x18) = fVar22 * fVar21;
      *(longlong *)(lVar12 + 0x10 + lVar8 * 0x18) = lVar9;
    }
  }
LAB_14102f880:
  if (((param_2[0x1a] & 4) != 0) && (*(longlong *)(param_2 + 0x630) != 0)) {
    fVar22 = *(float *)(param_2 + 0x628);
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    FUN_147cf0d86(param_1 + 0x2510,*(longlong *)(param_2 + 0x630),fVar22 * fVar21);
  }
  if (((param_2[8] & 8) != 0) && (lVar9 = *(longlong *)(param_2 + 0x3b8), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x3b8);
    }
    *(longlong *)(param_1 + 0x28c8) = lVar9;
  }
  if ((param_2[5] & 1) != 0) {
    *(byte *)(param_1 + 0x2545) = param_2[0x35];
  }
  if (((param_2[7] & 1) != 0) && (lVar9 = *(longlong *)(param_2 + 0x390), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x390);
    }
    *(longlong *)(param_1 + 0x28a0) = lVar9;
  }
  if (((param_2[0xe] & 4) != 0) && (lVar9 = *(longlong *)(param_2 + 0x5d8), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x5d8);
    }
    *(longlong *)(param_1 + 0x2ae8) = lVar9;
  }
  if ((param_2[8] & 1) != 0) {
    fVar22 = *(float *)(param_2 + 0x3b4);
    if ((fVar22 != 0.0) || (NAN(fVar22))) {
      *(float *)(param_1 + 0x28c4) = fVar22;
    }
  }
  if (((char)param_2[9] < '\0') && (lVar9 = *(longlong *)(param_2 + 0x490), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x490);
    }
    *(longlong *)(param_1 + 0x29a0) = lVar9;
  }
  if (((param_2[10] & 1) != 0) && (lVar9 = *(longlong *)(param_2 + 0x498), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x498);
    }
    *(longlong *)(param_1 + 0x29a8) = lVar9;
  }
  bVar6 = param_2[0xb];
  if (((bVar6 & 1) != 0) && (lVar9 = *(longlong *)(param_2 + 0x4d8), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x4d8);
    }
    *(longlong *)(param_1 + 0x29e8) = lVar9;
    bVar6 = param_2[0xb];
  }
  if (((bVar6 & 2) != 0) && (lVar9 = *(longlong *)(param_2 + 0x4e0), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x4e0);
    }
    *(longlong *)(param_1 + 0x29f0) = lVar9;
  }
  bVar6 = param_2[0xc];
  if (((bVar6 & 0x10) != 0) && (lVar9 = *(longlong *)(param_2 + 0x520), lVar9 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x520);
    }
    *(longlong *)(param_1 + 0x2a30) = lVar9;
    bVar6 = param_2[0xc];
  }
  if ((bVar6 & 4) != 0) {
    lVar9 = 0;
    do {
      fVar22 = *(float *)(param_2 + lVar9 + 0x534);
      fVar23 = *(float *)(param_1 + 0x2a44 + lVar9);
      fVar24 = *(float *)(param_2 + lVar9 + 0x530);
      fVar25 = *(float *)(param_1 + 0x2a40 + lVar9);
      fVar26 = *(float *)(param_2 + lVar9 + 0x52c);
      fVar18 = *(float *)(param_1 + 0x2a38 + lVar9);
      fVar19 = *(float *)(param_1 + 0x2a3c + lVar9);
      *(float *)(param_1 + 0x2a38 + lVar9) =
           (*(float *)(param_2 + lVar9 + 0x528) - fVar18) * fVar21 + fVar18;
      *(float *)(param_1 + 0x2a3c + lVar9) = (fVar26 - fVar19) * fVar21 + fVar19;
      *(float *)(param_1 + 0x2a40 + lVar9) = (fVar24 - fVar25) * fVar21 + fVar25;
      *(float *)(param_1 + 0x2a44 + lVar9) = (fVar22 - fVar23) * fVar21 + fVar23;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x80);
  }
  if ((param_2[0x1c] & 4) != 0) {
    *(byte *)(param_1 + 0x2544) = *(byte *)(param_1 + 0x2544) & 0xfe | param_2[0x34] & 1;
  }
  if ((param_2[8] & 0x40) != 0) {
    *(byte *)(param_1 + 0x2546) = param_2[0x36];
  }
  if ((param_2[0xf] & 2) != 0) {
    *(uint *)(param_1 + 0x2afc) =
         *(uint *)(param_1 + 0x2afc) & 0xfffffffe | *(uint *)(param_2 + 0x5ec) & 1;
  }
  if ((param_2[0x1d] & 2) != 0) {
    *(undefined4 *)(param_1 + 0x2b90) = *(undefined4 *)(param_2 + 0x680);
  }
  if ((param_2[10] & 2) != 0) {
    *(uint *)(param_1 + 0x2998) =
         *(uint *)(param_1 + 0x2998) & 0xfffffffe | *(uint *)(param_2 + 0x488) & 1;
  }
  if ((param_2[0x32] & 2) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x8a8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar9 = *(longlong *)(param_2 + 0x8a8);
      }
    }
    *(longlong *)(param_1 + 0x2db8) = lVar9;
  }
  if ((param_2[0x1e] & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x2c04) = *(undefined4 *)(param_2 + 0x6f4);
  }
  iVar17 = *(int *)(param_2 + 0x8b8);
  if (iVar17 != 0) {
    iVar16 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x8b0) + 8 + (longlong)iVar16 * 0x10);
      if ((lVar9 != 0) && (cVar7 = FUN_140432338(lVar9), cVar7 != '\0')) {
        uVar10 = FUN_141302fe2();
        plVar11 = (longlong *)FUN_144718840(lVar9,uVar10);
        if (plVar11 != (longlong *)0x0) {
          fVar22 = *(float *)(*(longlong *)(param_2 + 0x8b0) + (longlong)iVar16 * 0x10);
          fVar23 = 1.0;
          if (fVar22 <= 1.0) {
            fVar23 = fVar22;
          }
          if (0.0 < fVar23 * fVar21) {
            (**(code **)(*plVar11 + 0x10))(plVar11,param_1);
          }
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar17 != iVar16);
  }
  return;
}



// FUNCTION 14102fe8e FUN_14102fe8e body=1548 status=ok
// SIG undefined FUN_14102fe8e(void)

longlong * FUN_14102fe8e(longlong *param_1,longlong param_2,undefined8 *param_3,float param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  char cVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  PSRWLOCK local_88;
  longlong local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_b8);
  }
  lVar10 = FUN_1447210f0(param_2);
  uVar4 = DAT_14cb1c840;
  if (lVar10 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_80,uVar4,lVar10);
    plVar12 = local_78;
    if ((local_80 == 0) || (local_78 == (longlong *)0x0)) {
      plVar12 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_78 + 0xc) = *(int *)((longlong)local_78 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar16 = local_78 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_78 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    if (plVar12 != (longlong *)0x0) {
      iVar7 = (int)plVar12[1];
      do {
        plVar16 = (longlong *)0x0;
        if (iVar7 == 0) break;
        LOCK();
        iVar17 = (int)plVar12[1];
        bVar21 = iVar7 == iVar17;
        if (bVar21) {
          *(int *)(plVar12 + 1) = iVar7 + 1;
          iVar17 = iVar7;
        }
        iVar7 = iVar17;
        UNLOCK();
        plVar16 = plVar12;
      } while (!bVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      lVar10 = DAT_14cb1ce68;
      if (plVar16 != (longlong *)0x0) {
        if ((local_80 == 0) || (param_4 <= 0.0)) {
          *param_1 = 0;
          param_1[1] = 0;
        }
        else {
          iVar7 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (iVar7 == 0x40000002) {
            uVar11 = 0;
          }
          else {
            bVar21 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
              if (iVar7 == 1) {
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                bVar21 = DVar8 == DVar9;
              }
              else {
                bVar21 = false;
              }
            }
            uVar11 = (ulonglong)(bVar21 ^ 1);
          }
          fVar22 = *(float *)(lVar10 + uVar11 * 4);
          if (param_4 <= fVar22) {
            fVar22 = param_4;
          }
          local_88 = (PSRWLOCK)(local_80 + 0x468);
          AcquireSRWLockExclusive(local_88);
          iVar7 = *(int *)(local_80 + 0x3d8);
          if ((longlong)iVar7 != 0) {
            lVar10 = *(longlong *)(local_80 + 0x3d0);
            lVar18 = 0;
            do {
              cVar6 = FUN_14069eaf4(*(longlong *)(lVar10 + lVar18) + 0x68,param_2);
              if (cVar6 != '\0') {
                lVar19 = *(longlong *)(lVar10 + lVar18);
                uVar2 = *(uint *)(lVar19 + 0x88);
                cVar14 = '\x01';
                cVar6 = '\x01';
                if ((0x14 < uVar2) && (cVar6 = '\x02', 9 < uVar2 - 0x15)) {
                  cVar6 = (uVar2 == 0x200) * '\x03';
                }
                uVar2 = *(uint *)(param_3 + 1);
                if ((0x14 < uVar2) && (cVar14 = '\x02', 9 < uVar2 - 0x15)) {
                  cVar14 = (uVar2 == 0x200) * '\x03';
                }
                if (cVar6 == cVar14) {
                  if (*(float *)(lVar19 + 8) <= fVar22 && fVar22 != *(float *)(lVar19 + 8)) {
                    *(float *)(lVar19 + 8) = fVar22;
                    lVar19 = *(longlong *)(lVar10 + lVar18);
                  }
                  *param_1 = lVar19;
                  lVar10 = *(longlong *)(lVar10 + 8 + lVar18);
                  param_1[1] = lVar10;
                  if (lVar10 != 0) {
                    LOCK();
                    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                    UNLOCK();
                  }
                  goto LAB_141030356;
                }
              }
              lVar18 = lVar18 + 0x10;
            } while ((longlong)iVar7 * 0x10 != lVar18);
          }
          lVar10 = FUN_140a40fb0(param_2);
          if (lVar10 == 0) {
            local_98 = (longlong *)0x0;
            local_90 = 0;
          }
          else {
            local_90 = *(undefined8 *)(lVar10 + 0x1518);
            local_98 = *(longlong **)(lVar10 + 0x1520);
            if (local_98 == (longlong *)0x0) {
              local_98 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(local_98 + 1) = (int)local_98[1] + 1;
              UNLOCK();
            }
          }
          plVar12 = (longlong *)FUN_14001cc68(0xc0,0x10);
          *plVar12 = local_80 + 0x3b8;
          *(undefined4 *)(plVar12 + 1) = 0x459c4000;
          plVar12[2] = -1;
          *(undefined4 *)(plVar12 + 3) = 0;
          lVar10 = DAT_14cb1cdb0;
          plVar12[4] = DAT_14cb1cda8;
          plVar12[5] = lVar10;
          plVar12[6] = DAT_14cb1cdb8;
          plVar12[9] = DAT_14cb1cdb8;
          lVar10 = DAT_14cb1cdb0;
          plVar12[7] = DAT_14cb1cda8;
          plVar12[8] = lVar10;
          plVar12[10] = 0;
          plVar12[0xb] = 0;
          *(undefined4 *)(plVar12 + 0xc) = 0xffffffff;
          plVar12[0xf] = 0;
          plVar12[0x10] = 0;
          plVar12[0xd] = 0;
          plVar12[0xe] = 0;
          *(undefined4 *)(plVar12 + 0x11) = 0xffffffff;
          plVar12[0x14] = 0;
          plVar12[0x15] = 0;
          plVar12[0x12] = 0;
          plVar12[0x13] = 0;
          plVar12[0x16] = 0;
          *(undefined1 *)(plVar12 + 0x17) = 1;
          iVar7 = *(int *)(local_80 + 0x3d8);
          *(uint *)(local_80 + 0x3d8) = iVar7 + 1U;
          if (*(uint *)(local_80 + 0x3dc) < iVar7 + 1U) {
            FUN_1464227e6((longlong *)(local_80 + 0x3d0),iVar7);
          }
          lVar10 = *(longlong *)(local_80 + 0x3d0);
          lVar19 = (longlong)iVar7 * 0x10;
          *(longlong **)(lVar10 + lVar19) = plVar12;
          puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          plVar5 = local_98;
          puVar13[1] = &DAT_100000001;
          *puVar13 = &PTR_FUN_14aba4960;
          puVar13[2] = plVar12;
          *(undefined8 **)(lVar10 + 8 + lVar19) = puVar13;
          *(float *)(plVar12 + 1) = fVar22;
          lVar18 = *(longlong *)(lVar10 + lVar19);
          uVar2 = *(uint *)(param_2 + 0xc);
          *(uint *)(lVar18 + 0x68) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar20 = 0;
          }
          plVar12 = (longlong *)(lVar10 + lVar19);
          iVar7 = *(int *)(lVar20 + 0x10);
          if (*(int *)(lVar20 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar21) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar7 = *(int *)(lVar20 + 0x10);
            bVar21 = iVar7 == 0;
            if (bVar21) {
              *(int *)(lVar20 + 0x10) = iVar17;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar21) {
              iVar7 = iVar17;
            }
          }
          *(int *)(lVar18 + 0x6c) = iVar7;
          lVar10 = *plVar12;
          *(undefined8 *)(lVar10 + 0x70) = local_90;
          plVar15 = *(longlong **)(lVar10 + 0x78);
          if (plVar15 != plVar5) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
              UNLOCK();
              plVar15 = *(longlong **)(lVar10 + 0x78);
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
            *(longlong **)(lVar10 + 0x78) = plVar5;
          }
          lVar10 = *plVar12;
          *(undefined4 *)(lVar10 + 0x88) = *(undefined4 *)(param_3 + 1);
          *(undefined8 *)(lVar10 + 0x80) = *param_3;
          uVar3 = param_3[2];
          lVar18 = param_3[3];
          if (lVar18 != 0) {
            LOCK();
            *(int *)(lVar18 + 0xc) = *(int *)(lVar18 + 0xc) + 1;
            UNLOCK();
          }
          plVar15 = *(longlong **)(lVar10 + 0x98);
          *(undefined8 *)(lVar10 + 0x90) = uVar3;
          *(longlong *)(lVar10 + 0x98) = lVar18;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))();
            }
          }
          *param_1 = *plVar12;
          lVar10 = plVar12[1];
          param_1[1] = lVar10;
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar5 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
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
LAB_141030356:
          ReleaseSRWLockExclusive(local_88);
        }
        LOCK();
        plVar12 = plVar16 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        goto LAB_14103037e;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_14103037e:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410304a0 FUN_1410304a0 body=881 status=ok
// SIG undefined FUN_1410304a0(void)

void FUN_1410304a0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar14 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar14;
    if ((int)param_1[0x54] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar6 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar6, plStack_60 != plVar14)) {
      do {
        local_78 = lVar6;
        lVar6 = *local_90;
        lVar7 = *(longlong *)(lVar6 + 0x10 + (longlong)iVar9 * 0x20);
        if ((lVar7 != 0) &&
           ((cVar5 = FUN_140dddae6(lVar7 + 0x48), cVar5 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar6 + (longlong)iVar9 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar7 = FUN_141030812();
          if ((lVar7 != 0) &&
             ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)))) {
            (*(code *)*local_98)(local_98[1],plVar3);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        lVar6 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar14 || local_78._4_4_ != iVar12));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar13 = 1;
      uVar11 = 0xffffffff;
      iVar12 = 0;
      iVar15 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar13 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x3e];
      iVar9 = (int)local_90;
      uVar11 = (uint)uStack_80;
      iVar8 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar8 != iVar12 || local_88 != local_a0) {
      do {
        local_a4 = iVar12;
        plVar14 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar14 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar7 = FUN_141030812();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        uVar11 = uVar11 & ~(uint)uVar13;
        plVar14 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        iVar12 = (int)plVar1[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar11;
        if (uVar10 == 0) {
          iVar8 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar8 = iVar12 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar14 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar11 = 0xffffffff;
                goto LAB_141030626;
              }
              iVar15 = iVar15 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar4 - lVar6 != lVar7);
            uVar11 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar12;
        }
        else {
LAB_141030626:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar13 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar8) {
            iVar8 = iVar12;
          }
        }
        iVar12 = local_a4;
      } while (iVar8 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141030812 FUN_141030812 body=57 status=ok
// SIG undefined FUN_141030812(void)

void FUN_141030812(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68c98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68c98 = FUN_140002ddd(FUN_14651d885,uVar1,L"GbxWorldRegionDef");
  }
  return;
}



// FUNCTION 14103084c FUN_14103084c body=67 status=ok
// SIG undefined FUN_14103084c(void)

void FUN_14103084c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141030890 FUN_141030890 body=373 status=ok
// SIG undefined FUN_141030890(void)

undefined4 *
FUN_141030890(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141030ae6(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar8 = *(undefined8 *)*param_3;
  *local_38 = uVar8;
  local_38[1] = *puVar1;
  lVar6 = puVar1[1];
  local_38[2] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    uVar8 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar4 = (uint)uVar8 & 0xffff;
  uVar7 = ((uint)uVar8 << 0x10 | uVar4) + (int)((ulonglong)uVar8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_141030a06(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_141030ccc(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141030a06 FUN_141030a06 body=223 status=ok
// SIG undefined FUN_141030a06(void)

void FUN_141030a06(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_146973440(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_141030a7c;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_141030a7c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 141030ae6 FUN_141030ae6 body=485 status=ok
// SIG undefined FUN_141030ae6(void)

int * FUN_141030ae6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 141030ccc FUN_141030ccc body=597 status=ok
// SIG undefined FUN_141030ccc(void)

void FUN_141030ccc(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_141030ed8;
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
LAB_141030ed8:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141030f22 FUN_141030f22 body=23 status=ok
// SIG undefined FUN_141030f22(void)

void FUN_141030f22(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141030f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240,*(code **)(*param_2 + 0x30));
  return;
}



// FUNCTION 141030f3a FUN_141030f3a body=44 status=ok
// SIG undefined FUN_141030f3a(void)

undefined8 FUN_141030f3a(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_141030f66(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 141030f66 FUN_141030f66 body=105 status=ok
// SIG undefined FUN_141030f66(void)

void FUN_141030f66(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14103101c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_141030fd0(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141030fd0 FUN_141030fd0 body=76 status=ok
// SIG undefined FUN_141030fd0(void)

void FUN_141030fd0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14103101c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14103100d;
    }
  }
  lVar2 = 0;
LAB_14103100d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14103101c FUN_14103101c body=228 status=ok
// SIG undefined FUN_14103101c(void)

longlong FUN_14103101c(void)

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
  if (DAT_14cb96e20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148a68df5;
    local_40 = FUN_14657ee58;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxOnline",L"GbxCommunicationsSubsystem",&DAT_14cb96e20,&DAT_148a68df4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96e20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141031102 FUN_141031102 body=1152 status=ok
// SIG undefined FUN_141031102(void)

void FUN_141031102(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
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
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_20 = 0;
  uStack_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined7)uVar2;
      uStack_19 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_21 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140a4831c;
      local_48 = 0x1000000008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_21 = (undefined1)uVar2;
      uStack_20 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_21);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141031584(local_18,CONCAT17(uStack_19,uStack_20),local_21);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141031584 FUN_141031584 body=235 status=ok
// SIG undefined FUN_141031584(void)

void FUN_141031584(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_141031670(0,&local_48);
    if ((longlong)(int)uStack_40 != 0) {
      plVar1 = local_48 + (int)uStack_40;
      plVar3 = local_48;
      do {
        plVar2 = (longlong *)*plVar3;
        if (plVar2 == (longlong *)0x0) goto LAB_1410315f0;
        if (param_2 == 0) {
LAB_141031665:
          (**(code **)(*plVar2 + 0x618))();
        }
        else if (param_3 == '\0') {
          lVar4 = *(longlong *)((longlong)plVar2 + 0x34c);
joined_r0x000141031663:
          if (lVar4 == param_2) goto LAB_141031665;
        }
        else if (param_3 == '\x02') {
          if ((longlong)(int)plVar2[0xf] != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(plVar2[0xe] + lVar4) == param_2) goto LAB_141031665;
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)plVar2[0xf] * 8 != lVar4);
          }
        }
        else if (param_3 == '\x01') {
          lVar4 = plVar2[0x25];
          goto joined_r0x000141031663;
        }
LAB_1410315f0:
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141031670 FUN_141031670 body=139 status=ok
// SIG undefined FUN_141031670(void)

void FUN_141031670(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_147f60aa8(param_2,0);
  }
  local_28 = FUN_1410316fc();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1410317e2(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410316fc FUN_1410316fc body=228 status=ok
// SIG undefined FUN_1410316fc(void)

longlong FUN_1410316fc(void)

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
  if (DAT_14cb20fa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14643186e;
    local_38 = &LAB_147f14ed1;
    local_40 = &LAB_146431873;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3b0;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxAIHeldActorComponent",&DAT_14cb20fa8,FUN_146431846);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410317e2 FUN_1410317e2 body=1609 status=ok
// SIG undefined FUN_1410317e2(void)

void FUN_1410317e2(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  uint *local_80;
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_141031c98:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
    }
LAB_141031851:
    lVar7 = *param_2;
    if (lVar12 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
        FUN_147f60d70(param_1,param_4);
      }
      else {
        local_58 = lVar7;
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
        FUN_147f60b08(param_1,&local_58,param_4);
      }
      goto LAB_141031dae;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_141031c98;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar12 = *param_2;
      goto LAB_141031851;
    }
    lVar7 = *param_2;
  }
  bVar15 = lVar7 != 0;
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & bVar15) == 1) {
      FUN_1456cec3c(lVar7);
    }
    puVar13 = (uint *)(param_1 + 0x250);
    uVar2 = *(uint *)(param_1 + 0x268);
    if (uVar2 == 0) {
      uVar16 = 1;
      uVar10 = 0;
      uVar3 = 0;
      iVar8 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar13;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0) {
        iVar8 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar8 = uVar2 - 1;
        }
        uVar10 = 0;
        uVar16 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar16 = uVar10;
        }
        iVar8 = 0;
        do {
          if (uVar16 == uVar10) goto LAB_141031dae;
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar4[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar10 = 0;
        iVar8 = 0;
      }
      uVar16 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar16 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar3 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar3) {
        uVar3 = uVar2;
      }
    }
    if (uVar3 != uVar2) {
      uVar14 = 0xffffffff;
      local_80 = puVar13;
      local_78 = param_1;
      local_70 = (ulonglong)uVar2;
      local_68 = param_4;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
        if (lVar12 != 0) {
          if ((DAT_14c950c29 & bVar15) == 1) {
            FUN_1456cec3c(lVar7);
            param_1 = local_78;
            puVar13 = local_80;
LAB_14103195f:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              param_1 = local_78;
              puVar13 = local_80;
              if (DAT_14cad00c8 == 0) goto LAB_141031b7c;
            }
            if (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141031b7c;
            lVar11 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar11 = lVar7;
            }
          }
          else {
            if (lVar7 != 0) goto LAB_14103195f;
LAB_141031b7c:
            lVar11 = 0;
          }
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            iVar9 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar9 + 1U) {
              FUN_141031e2c(param_4,iVar9);
              param_1 = local_78;
              puVar13 = local_80;
              param_4 = local_68;
            }
            *(longlong *)(*param_4 + (longlong)iVar9 * 8) = lVar12;
          }
        }
        uVar14 = uVar14 & ~(uint)uVar16;
        puVar4 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar4 = puVar13;
        }
        uVar2 = *(uint *)(param_1 + 0x268);
        iVar9 = (int)uVar10;
        lVar12 = (longlong)iVar9;
        uVar3 = puVar4[lVar12] & uVar14;
        if (uVar3 == 0) {
          iVar5 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar5 = uVar2 - 1;
          }
          iVar5 = iVar5 >> 5;
          iVar8 = iVar8 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar9) {
            iVar6 = iVar9;
          }
          puVar13 = local_80;
          if (iVar9 < iVar5) {
            lVar11 = 0;
            do {
              uVar3 = puVar4[lVar12 + lVar11 + 1];
              if (uVar3 != 0) {
                uVar10 = (ulonglong)(iVar9 + (int)lVar11 + 1);
                uVar14 = 0xffffffff;
                goto LAB_141031a31;
              }
              iVar8 = iVar8 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar6 - lVar12 != lVar11);
            uVar14 = 0xffffffff;
            iVar9 = iVar6;
          }
          uVar10 = (ulonglong)(iVar9 + 1);
          uVar3 = uVar2;
        }
        else {
LAB_141031a31:
          uVar16 = (ulonglong)(-uVar3 & uVar3);
          uVar1 = uVar16 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar3 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
        }
      } while (uVar3 != (uint)local_70);
    }
  }
  else {
    local_60 = lVar7;
    if ((bVar15 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar7);
    }
    FUN_147f60ea6(param_1,&local_60,param_4);
  }
LAB_141031dae:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141031e2c FUN_141031e2c body=353 status=ok
// SIG undefined FUN_141031e2c(void)

void FUN_141031e2c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141031eb1;
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
LAB_141031eb1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141031f8e FUN_141031f8e body=402 status=ok
// SIG undefined FUN_141031f8e(void)

void FUN_141031f8e(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140788b1e();
  local_20 = &local_29;
  local_28 = FUN_143496ee2;
  FUN_140788b96(param_1);
  if (param_1[0x2c6] == 0) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_140769252(param_1);
      if ((cVar1 == '\0') && (param_1[0x2c7] == 0)) goto LAB_141031ffb;
    }
  }
  if ((char)param_1[0x2f3] == '\0') {
    if ((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x03')) {
      FUN_141032122(param_1,0);
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
      if (((cVar1 != '\0') && ((char)param_1[0x32e] == '\0')) &&
         ((longlong *)param_1[0x2c6] != (longlong *)0x0)) {
        cVar1 = (**(code **)(*(longlong *)param_1[0x2c6] + 0x2a0))();
        if ((cVar1 == '\0') && (plVar3 = (longlong *)param_1[0x15], plVar3 != (longlong *)0x0)) {
          uVar2 = FUN_140f2b8bc();
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
          if (plVar3 != (longlong *)0x0) {
            uVar2 = FUN_140f2b8bc();
            plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
            if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
              local_28 = (code *)param_1[3];
              (**(code **)(*plVar4 + 0x28))(plVar4,&local_28,param_1[0x2c6],param_1 + 0x2c9);
            }
          }
        }
      }
    }
  }
LAB_141031ffb:
  if (param_1[0x312] != 0) {
    (**(code **)(*param_1 + 0x650))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141032122 FUN_141032122 body=469 status=ok
// SIG undefined FUN_141032122(void)

void FUN_141032122(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((param_1[0x2c6] == 0) && (cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar1 == '\0'))
       && (cVar1 = FUN_140769252(param_1), cVar1 == '\0')) && (param_1[0x2c7] == 0)) ||
     ((char)param_1[0x32e] != '\0')) goto LAB_14103223b;
  lVar5 = param_1[0x2c6];
  cVar1 = FUN_140769252(param_1);
  if (((lVar5 == 0) && (cVar1 == '\0')) && ((int)param_1[0x2d2] < 1)) goto LAB_14103223b;
  FUN_140c89340(local_28,param_1);
  if (lVar5 == 0) {
LAB_141032299:
    *(undefined1 *)(param_1 + 0x300) = 1;
    FUN_140f2be08(param_1,1);
  }
  else {
    if (param_2 == (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x15];
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_140f2b8bc();
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
        if (plVar4 != (longlong *)0x0) {
          uVar3 = FUN_140f2b8bc();
          param_2 = (longlong *)FUN_144718840(plVar4,uVar3);
          if ((plVar4 != param_2) && (param_2 != (longlong *)0x0)) goto LAB_1410321fb;
        }
      }
    }
    else {
LAB_1410321fb:
      local_30 = param_1[3];
      lVar5 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((lVar5 != 0) && ((short)(*(int *)(lVar5 + 0x18) / (int)(uint)*(byte *)(lVar5 + 9)) != 0))
      {
        local_30 = param_1[3];
        (**(code **)(*param_2 + 0x20))(param_2,&local_30,param_1[0x2c6],param_1 + 0x2c9);
        if ((DAT_14c950c29 == '\x01') && (iVar2 = (int)param_1[0x2ca], 0 < iVar2)) {
          lVar5 = param_1[0x2c9];
          lVar6 = 0;
          do {
            if (*(longlong *)(lVar5 + lVar6 * 8) != 0) {
              FUN_1456cec3c();
              iVar2 = (int)param_1[0x2ca];
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar2);
        }
        goto LAB_141032299;
      }
    }
    FUN_1410322f8(param_1);
  }
  FUN_1401ff858(param_1);
  (**(code **)(*param_1 + 0xcf0))(param_1);
  FUN_140c8931a(local_28);
LAB_14103223b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410322f8 FUN_1410322f8 body=565 status=ok
// SIG undefined FUN_1410322f8(void)

void FUN_1410322f8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  int local_48;
  undefined8 local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x1648;
  *(undefined4 *)(param_1 + 0x1650) = 0;
  if (*(int *)(param_1 + 0x1654) != 0) {
    FUN_140832776(lVar1,0);
  }
  plVar7 = *(longlong **)(param_1 + 0x1630);
  if (plVar7 != (longlong *)0x0) {
    local_30 = *(int *)(param_1 + 0x1678);
    if (local_30 == -1) {
      local_30 = rand();
      *(int *)(param_1 + 0x1678) = local_30;
      plVar7 = *(longlong **)(param_1 + 0x1630);
    }
    LOCK();
    iVar5 = DAT_14cb80fb0 + 1;
    UNLOCK();
    iVar4 = DAT_14cb80fb0 + 1;
    DAT_14cb80fb0 = iVar5;
    local_2c = local_30;
    if ((int)plVar7[8] != iVar4) {
      *(int *)(plVar7 + 8) = iVar4;
      local_48 = iVar4;
      (**(code **)(*plVar7 + 0x2a8))(plVar7,lVar1,param_1 + 0x1668,&local_30);
    }
    if ((DAT_14c950c29 == 1) && (iVar5 = *(int *)(param_1 + 0x1650), 0 < iVar5)) {
      lVar2 = *(longlong *)(param_1 + 0x1648);
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar9 * 8) != 0) {
          FUN_1456cec3c();
          iVar5 = *(int *)(param_1 + 0x1650);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar5);
    }
    if (((DAT_14c950c29 & 1) != 0) && (iVar5 = *(int *)(param_1 + 0x1670), 0 < iVar5)) {
      lVar2 = *(longlong *)(param_1 + 0x1668);
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar9 * 8) != 0) {
          FUN_1456cec3c();
          iVar5 = *(int *)(param_1 + 0x1670);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar5);
    }
    *(undefined1 *)(param_1 + 0x1800) = 1;
    if (((((*(byte *)(param_1 + 0x9f) & 0x20) != 0) && (*(char *)(param_1 + 0x1798) == '\0')) &&
        (*(char *)(param_1 + 0x1970) == '\0')) &&
       (((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1630) + 0x2a0))(), cVar3 == '\0' &&
         (plVar7 = *(longlong **)(param_1 + 0xa8), plVar7 != (longlong *)0x0)) &&
        ((char)plVar7[0x2f] == '\x03')))) {
      uVar6 = FUN_140f2b8bc();
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
      if (plVar7 != (longlong *)0x0) {
        uVar6 = FUN_140f2b8bc();
        plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
        if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
          local_38 = *(undefined8 *)(param_1 + 0x18);
          (**(code **)(*plVar8 + 0x28))(plVar8,&local_38,*(undefined8 *)(param_1 + 0x1630),lVar1);
        }
      }
    }
  }
  FUN_140f2be08(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14103252e FUN_14103252e body=1197 status=ok
// SIG undefined FUN_14103252e(void)

undefined8 * FUN_14103252e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  uint local_cc;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  ulonglong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar14 = 1;
  if (*(char *)((longlong)param_2 + 0xc) != '\b') {
    uVar14 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  if (uVar14 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar4 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  if (uVar14 != 0) {
    local_c8 = *(longlong *)(param_1 + 0xc0);
    puVar13 = (undefined8 *)0x0;
    uVar12 = uVar14;
    local_cc = uVar4;
    local_c0 = param_1;
    do {
      local_b8 = (ulonglong)uVar4;
      puVar2 = *(undefined4 **)(local_c8 + 2000 + local_b8 * 8);
      puVar6 = (undefined8 *)FUN_14001cc68(0x1a0,0x10);
      lVar11 = *(longlong *)(param_1 + 0xc0);
      FUN_1410329dc(puVar6,param_2);
      *(undefined4 *)(puVar6 + 0x29) = 0;
      *(undefined4 *)(puVar6 + 0x2a) = 1;
      puVar6[0x2b] = 0;
      puVar6[0x2c] = 0;
      puVar6[0x2d] = 0;
      puVar6[0x2e] = 0;
      puVar6[0x2f] = 0;
      puVar6[0x30] = 0;
      puVar6[0x31] = 0;
      puVar6[0x32] = 0;
      *puVar6 = &PTR_FUN_14a350f88;
      puVar6[0x28] = &PTR_FUN_14a350f90;
      puVar6[0x33] = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca77420) && (FUN_144b3d300(&DAT_14ca77420), DAT_14ca77420 == -1))
      {
        local_90 = CONCAT44(local_90._4_4_,0x13);
        FUN_14577453c(L"FD3D12TransientHeap");
        _Init_thread_footer(&DAT_14ca77420);
      }
      bVar9 = *(char *)((longlong)param_2 + 0xc) - 1;
      uVar4 = 0;
      if (bVar9 < 4) {
        uVar4 = (&DAT_14a3556a8)[bVar9];
      }
      uVar10 = 1;
      local_7c = uVar10;
      if (DAT_14ca81480 == 0) {
        uVar10 = uVar14;
        local_7c = 1 << (*(byte *)(puVar2 + 2) & 0x1f);
      }
      local_90 = *param_2;
      local_88 = 1;
      local_80 = 0;
      local_78 = (ulonglong)uVar10;
      uStack_70 = 0x400000;
      if (*(char *)(lVar11 + 0xc6) == '\x01') {
        uVar4 = uVar4 | 0x1000;
      }
      local_68 = (ulonglong)uVar4;
      local_98 = 0;
      plVar3 = *(longlong **)(*(longlong *)(puVar2 + 4) + 8);
      iVar5 = (**(code **)(*plVar3 + 0xe0))(plVar3,&local_90,&DAT_14a349268,&local_98);
      if (iVar5 < 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_e0 = &local_a8;
        local_e8 = 0;
        FUN_145763094(iVar5,"D3DDevice->CreateHeap(&Desc, IID_PPV_ARGS(&D3DHeap))",
                      ".\\Runtime/D3D12RHI/Private/D3D12TransientResourceAllocator.cpp",0x4c);
      }
      local_b0 = (longlong *)0x0;
      iVar5 = (**(code **)*plVar3)(plVar3,&DAT_14a349278,&local_b0);
      if (-1 < iVar5) {
        FUN_141032dd0(lVar11,local_98,0xa0010000,puVar2[2]);
      }
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x88,0x10);
      param_1 = local_c0;
      *puVar7 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7[2] = puVar2;
      *(undefined4 *)(puVar7 + 3) = *puVar2;
      *(uint *)((longlong)puVar7 + 0x1c) = uVar14;
      *puVar7 = &PTR_FUN_14a34ce88;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *(undefined1 *)(puVar7 + 6) = 1;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      *(undefined4 *)((longlong)puVar7 + 0x7c) = 1;
      *(undefined2 *)(puVar7 + 0x10) = 0x100;
      puVar8 = (undefined8 *)puVar6[0x33];
      if (puVar8 != puVar7) {
        puVar6[0x33] = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
          UNLOCK();
        }
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
      }
      local_e8 = CONCAT71(local_e8._1_7_,1);
      FUN_141033122(puVar6[0x33],local_98,L"TransientResourceAllocator Backing Heap",1);
      *(undefined1 *)(puVar6[0x33] + 0x80) = 1;
      *(undefined1 *)(puVar6[0x33] + 0x81) = 0;
      puVar6[4] = *(undefined8 *)(puVar6[0x33] + 0x68);
      puVar8 = puVar6;
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 0x29) = *(int *)(puVar6 + 0x29) + 1;
        UNLOCK();
        puVar8 = puVar13;
      }
      puVar8[local_b8 + 0x2b] = puVar6;
      uVar12 = uVar12 & ~(1 << ((uint)local_b8 & 0x1f));
      if (uVar12 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
      puVar13 = puVar8;
    } while (uVar12 != 0);
    if (puVar8 != (undefined8 *)0x0) {
      *(uint *)(puVar8 + 0x2a) = uVar14;
      bVar9 = (byte)local_cc & 0x1f;
      uVar14 = (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9) & uVar14;
      if (uVar14 != 0) {
        uVar4 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        do {
          puVar13 = puVar8 + 0x2a;
          puVar6 = (undefined8 *)(puVar8[(ulonglong)uVar4 + 0x2b] + 0x150);
          for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar6 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar6 = puVar6 + 1;
          }
          bVar9 = (byte)uVar4 & 0x1f;
          uVar14 = (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9) & uVar14;
          if (uVar14 == 0) {
            uVar4 = 0x20;
          }
          else {
            uVar4 = 0;
            if (uVar14 != 0) {
              for (; (uVar14 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
          }
        } while (uVar14 != 0);
      }
      goto LAB_1410328ba;
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_1410328ba:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410329dc FUN_1410329dc body=207 status=ok
// SIG undefined FUN_1410329dc(void)

undefined8 * FUN_1410329dc(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *param_1 = &PTR_FUN_14a353d90;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = param_2[2];
  FUN_141032ea0(param_1 + 4,*param_2,*(undefined4 *)(param_2 + 1));
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar6 = (ulonglong)(*(int *)(param_2 + 1) + (uint)(*(int *)(param_2 + 1) == 0)) - 1;
  if (uVar6 == 0) {
    uVar5 = 0x40;
  }
  else {
    lVar1 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar5 = (uint)lVar1 ^ 0x3f;
  }
  *(uint *)(param_1 + 0x11) = 0x40 - uVar5;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_141032aac(param_1 + 0x1c,*(undefined4 *)(param_2 + 2),0x20);
  FUN_141032af2(param_1 + 0x22,*(undefined4 *)((longlong)param_2 + 0x14),0x20);
  return param_1;
}



// FUNCTION 141032aac FUN_141032aac body=68 status=ok
// SIG undefined FUN_141032aac(void)

undefined8 * FUN_141032aac(undefined8 *param_1,int param_2,undefined4 param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(int *)((longlong)param_1 + 0x24) = param_2;
  param_1[5] = 0;
  if (param_2 != -1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 != 0) {
      FUN_141032b38(param_1);
    }
  }
  return param_1;
}



// FUNCTION 141032af2 FUN_141032af2 body=68 status=ok
// SIG undefined FUN_141032af2(void)

undefined8 * FUN_141032af2(undefined8 *param_1,int param_2,undefined4 param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(int *)((longlong)param_1 + 0x24) = param_2;
  param_1[5] = 0;
  if (param_2 != -1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 != 0) {
      FUN_141032c84(param_1);
    }
  }
  return param_1;
}



// FUNCTION 141032b38 FUN_141032b38 body=332 status=ok
// SIG undefined FUN_141032b38(void)

void FUN_141032b38(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141032ba6;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141032ba6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 141032c84 FUN_141032c84 body=332 status=ok
// SIG undefined FUN_141032c84(void)

void FUN_141032c84(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141032cf2;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141032cf2:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 141032dd0 FUN_141032dd0 body=207 status=ok
// SIG undefined FUN_141032dd0(void)

void FUN_141032dd0(longlong param_1,longlong *param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 4;
  local_38 = 0;
  local_30 = param_2;
  local_24 = param_3;
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&DAT_14a3465f8);
  if (((iVar2 < 0) || (local_34 != 4)) || (local_38 != param_3)) {
    plVar1 = *(longlong **)
              (*(longlong *)(*(longlong *)(param_1 + 2000 + (ulonglong)param_4 * 8) + 0x10) + 0x30);
    (**(code **)(*plVar1 + 0x170))(plVar1,1,&local_30,&local_24);
    (**(code **)(*local_30 + 0x20))(local_30,&DAT_14a3465f8,4,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141032ea0 FUN_141032ea0 body=366 status=ok
// SIG undefined FUN_141032ea0(void)

undefined8 * FUN_141032ea0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  FUN_14103300e(param_1 + 8,0);
  puVar3 = (undefined8 *)param_1[8];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[1] = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 2) = 0xffffffff;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0xffffffff00000000;
  iVar1 = *(int *)(param_1 + 9);
  *(short *)(param_1 + 5) = (short)(iVar1 - 1U);
  uVar4 = param_1[1];
  iVar2 = *(int *)(param_1 + 7);
  if ((longlong)iVar2 == 0) {
    *(uint *)(param_1 + 9) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar1 + 1U) {
      FUN_14103300e(param_1 + 8,iVar1);
    }
    lVar5 = param_1[8];
    lVar6 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    ((undefined8 *)(lVar5 + lVar6))[1] = 0;
    puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar6);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar6);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)(lVar5 + 8 + lVar6) = 0xffffffffffffffff;
    *(undefined4 *)(lVar5 + 0x10 + lVar6) = 0xffffffff;
    puVar3 = (undefined8 *)(lVar5 + 0x14 + lVar6);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)(lVar5 + 0x24 + lVar6) = 0xffffffff00000000;
    uVar8 = *(int *)(param_1 + 9) - 1;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1[6] + -2 + (longlong)iVar2 * 2);
    *(int *)(param_1 + 7) = iVar2 + -1;
    FUN_144715f92(param_1 + 6);
  }
  lVar5 = param_1[8];
  uVar7 = (ulonglong)((uVar8 & 0xffff) * 0x30);
  *(undefined8 *)(lVar5 + uVar7) = 0;
  puVar3 = (undefined8 *)(lVar5 + 8 + uVar7);
  *puVar3 = 0xffffffffffffffff;
  puVar3[1] = 0xffffffff;
  *(undefined8 *)(lVar5 + 0x20 + uVar7) = 0;
  *(undefined8 *)(lVar5 + 0x18 + uVar7) = uVar4;
  lVar6 = param_1[8];
  uVar9 = (ulonglong)((iVar1 - 1U & 0xffff) * 0x30);
  *(undefined2 *)(lVar5 + 0x28 + uVar7) = *(undefined2 *)(lVar6 + 0x28 + uVar9);
  *(short *)(lVar6 + 0x28 + uVar9) = (short)uVar8;
  return param_1;
}



// FUNCTION 14103300e FUN_14103300e body=275 status=ok
// SIG undefined FUN_14103300e(void)

void FUN_14103300e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141033122 FUN_141033122 body=484 status=ok
// SIG undefined FUN_141033122(void)

void FUN_141033122(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  char param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 *local_a0;
  undefined *local_98;
  longlong **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  FUN_1446f470e(&local_70,param_3);
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_6c,local_70);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))(*(longlong **)(param_1 + 0x20),&local_70);
  *(undefined4 *)(param_1 + 0x58) = local_50;
  *(undefined4 *)(param_1 + 0x5c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x60) = uStack_48;
  *(undefined4 *)(param_1 + 100) = uStack_44;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)local_60;
  *(undefined4 *)(param_1 + 0x4c) = local_60._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_58;
  *(undefined4 *)(param_1 + 0x54) = uStack_58._4_4_;
  *(undefined4 *)(param_1 + 0x38) = local_70;
  *(undefined4 *)(param_1 + 0x3c) = uStack_6c;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_68;
  *(undefined4 *)(param_1 + 0x44) = uStack_68._4_4_;
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 1) {
    bVar5 = true;
  }
  else if (iVar3 == 4) {
    bVar5 = *(int *)(param_1 + 0x44) == 1;
  }
  else {
    bVar5 = false;
  }
  *(bool *)(param_1 + 0x81) = bVar5;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if ((((param_5 != '\0') || (*(char *)(lVar2 + 0x6a8) == '\x01')) && (iVar3 == 1)) &&
     ((*(uint *)(param_1 + 0x60) & 4) == 0)) {
    local_60 = *(undefined8 *)(param_1 + 0x38);
    local_90 = &local_38;
    local_38 = (longlong *)0x0;
    local_70 = 1;
    uStack_68 = 0;
    uStack_58 = 0x1000100000001;
    local_50 = 0;
    uStack_4c = 1;
    uStack_48 = 0;
    uStack_44 = 1;
    local_40 = 0;
    plVar1 = *(longlong **)(lVar2 + 8);
    local_98 = &DAT_14a350238;
    local_a0 = (undefined8 *)0x0;
    local_a8 = local_a8 & 0xffffffff00000000;
    iVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,*(undefined8 *)(param_1 + 0x20),0);
    if (iVar3 < 0) {
      local_a0 = &local_88;
      local_88 = 0;
      uStack_80 = 0;
      local_a8 = 0;
      FUN_145763094(iVar3,
                    "Adapter->GetD3DDevice()->CreatePlacedResource(Heap, 0, &BufDesc, D3D12_RESOURCE_STATE_COMMON, nullptr, IID_PPV_ARGS(TempResource.GetInitReference()))"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Resources.cpp",0x2b1);
    }
    uVar4 = (**(code **)(*local_38 + 0x58))();
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141033307 FUN_141033307 body=41 status=ok
// SIG undefined FUN_141033307(void)

void FUN_141033307(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141033330(param_1);
    param_1 = param_1 + 0x168;
  }
  return;
}



// FUNCTION 141033330 FUN_141033330 body=175 status=ok
// SIG undefined FUN_141033330(void)

void FUN_141033330(longlong param_1)

{
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1410333df(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001410333c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1410333df FUN_1410333df body=44 status=ok
// SIG undefined FUN_1410333df(void)

void FUN_1410333df(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 141033424 FUN_141033424 body=167 status=ok
// SIG undefined FUN_141033424(void)

void FUN_141033424(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)0x0;
  local_40 = &PTR_FUN_149e62070;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x40);
  local_30 = param_2;
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar2 + 8))(plVar2,&local_40);
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
    local_40 = &PTR_LAB_149eb0140;
    if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410334cc FUN_1410334cc body=591 status=ok
// SIG undefined FUN_1410334cc(void)

void FUN_1410334cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [88];
  undefined1 local_60 [8];
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140323a4e();
  if (((byte)(*(char *)(param_1 + 0xb4) - 1U) < 2) || (*(char *)(param_1 + 0xcd) != '\0')) {
    *(bool *)(param_2 + 0xa9) = *(int *)(param_1 + 0x130) == 0;
    local_108 = *(undefined4 *)(param_1 + 0x140);
    local_110 = *(undefined8 *)(param_1 + 0x138);
    local_100 = *(undefined4 *)(param_1 + 0x148);
    uStack_fc = *(undefined4 *)(param_1 + 0x14c);
    uStack_f8 = *(undefined4 *)(param_1 + 0x150);
    uStack_f4 = *(undefined4 *)(param_1 + 0x154);
    local_f0 = *(undefined4 *)(param_1 + 0x158);
    uStack_ec = *(undefined4 *)(param_1 + 0x15c);
    uStack_e8 = *(undefined4 *)(param_1 + 0x160);
    uStack_e4 = *(undefined4 *)(param_1 + 0x164);
    local_e0 = *(undefined4 *)(param_1 + 0x168);
    uStack_dc = *(undefined4 *)(param_1 + 0x16c);
    uStack_d8 = *(undefined4 *)(param_1 + 0x170);
    uStack_d4 = *(undefined4 *)(param_1 + 0x174);
    local_d0 = *(undefined8 *)(param_1 + 0x178);
    local_c8 = *(longlong *)(param_1 + 0x180);
    if (local_c8 != 0) {
      LOCK();
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
      UNLOCK();
    }
    local_c0 = *(undefined4 *)(param_1 + 0x188);
    FUN_14103371c(local_60);
    FUN_1405b72da(param_1,local_60,param_2);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar3 = (undefined8 ****)local_58[0];
      if (local_40 < 0x19) {
        ppppuVar3 = local_58;
      }
      (*pcVar2)(ppppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x48) + 0x1e9);
      if (uVar4 < 2) {
        iVar5 = *(int *)(lVar1 + 0xb38 + uVar4 * 0xb70) + -1;
      }
      else {
        iVar5 = -1;
      }
      FUN_141033866(lVar1,local_b8,uVar4,iVar5);
      FUN_14103371c(local_60,local_b8);
      FUN_1405b72da(param_1,local_60,param_2);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar3 = (undefined8 ****)local_58[0];
        if (local_40 < 0x19) {
          ppppuVar3 = local_58;
        }
        (*pcVar2)(ppppuVar3);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(local_58[0]);
      }
      *(undefined1 *)(param_2 + 0xa9) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14103371c FUN_14103371c body=329 status=ok
// SIG undefined FUN_14103371c(void)

undefined8 * FUN_14103371c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
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
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  local_38 = *(undefined4 *)(param_2 + 1);
  local_40 = *param_2;
  local_78 = *(undefined4 *)(param_2 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_70 = *(undefined4 *)(param_2 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_58 = *(undefined4 *)(param_2 + 6);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_50 = *(undefined4 *)(param_2 + 7);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = param_2[8];
  plVar5 = (longlong *)param_2[9];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 4) = 0x58;
  puVar6 = (undefined8 *)FUN_14001cc68(0x58,0);
  param_1[1] = puVar6;
  *puVar6 = local_40;
  *(undefined4 *)(puVar6 + 1) = local_38;
  *(undefined4 *)(puVar6 + 2) = local_78;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_74;
  *(undefined4 *)(puVar6 + 3) = uStack_70;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_6c;
  *(undefined4 *)(puVar6 + 4) = local_68;
  *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_64;
  *(undefined4 *)(puVar6 + 5) = uStack_60;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = uStack_5c;
  *(undefined4 *)(puVar6 + 6) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x34) = uStack_54;
  *(undefined4 *)(puVar6 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_4c;
  puVar6[8] = uVar4;
  puVar6[9] = plVar5;
  if (plVar5 == (longlong *)0x0) {
    *(undefined4 *)(puVar6 + 10) = uVar3;
    *(undefined1 *)(param_1 + 5) = 9;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined4 *)(puVar6 + 10) = uVar3;
    *(undefined1 *)(param_1 + 5) = 9;
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
  *(char *)(param_1 + 6) = ((DAT_14c9a8f34 & 0x20) == 0) * '\t';
  plVar5 = (longlong *)param_2[9];
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141033866 FUN_141033866 body=249 status=ok
// SIG undefined FUN_141033866(void)

void FUN_141033866(longlong param_1,undefined8 *param_2,byte param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar8 = 0;
  if (param_3 < 2) {
    lVar8 = param_1 + 0x30 + (ulonglong)param_3 * 0xb70;
  }
  if ((-1 < (int)param_4 && lVar8 != 0) && ((int)param_4 < *(int *)(lVar8 + 0xb08))) {
    lVar10 = *(longlong *)(lVar8 + 0xb00);
    if (*(longlong *)(lVar8 + 0xb00) == 0) {
      lVar10 = lVar8;
    }
    lVar9 = (ulonglong)param_4 * 0x58;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar10 + 8 + lVar9);
    *param_2 = *(undefined8 *)(lVar10 + lVar9);
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar9);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar9);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar9);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    param_2[2] = *puVar1;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    param_2[6] = uVar6;
    param_2[7] = uVar7;
    param_2[8] = *(undefined8 *)(lVar10 + 0x40 + lVar9);
    lVar8 = *(longlong *)(lVar10 + 0x48 + lVar9);
    param_2[9] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar10 + lVar9 + 0x50);
    return;
  }
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0xffffffffffffffff;
  uVar3 = DAT_14cb7e380;
  param_2[2] = DAT_14cb7e378;
  param_2[3] = uVar3;
  param_2[4] = DAT_14cb7e388;
  uVar3 = DAT_14cb7e380;
  param_2[5] = DAT_14cb7e378;
  param_2[6] = uVar3;
  param_2[7] = DAT_14cb7e388;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0xffffffff;
  return;
}



// FUNCTION 141033960 FUN_141033960 body=388 status=ok
// SIG undefined FUN_141033960(void)

void FUN_141033960(longlong param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  char *local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    iVar3 = (int)sVar1;
    if (iVar3 != 0) {
      lVar4 = (longlong)iVar3;
      pcVar5 = param_2 + lVar4 + -1;
      uVar2 = 0;
      if (pcVar5 < param_2) {
        lVar10 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar5 - 0x30U)) break;
          uVar2 = uVar2 + 1;
          pcVar5 = pcVar5 + -1;
        } while (param_2 <= pcVar5);
        if (uVar2 == 0 || iVar3 <= (int)uVar2) {
LAB_1410339e2:
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          if ((uVar2 < 0xb) && (lVar6 = -(ulonglong)uVar2, param_2[lVar6 + lVar4 + -1] == '_')) {
            if ((uVar2 == 1) || (param_2[lVar6 + lVar4] != '0')) {
              lVar9 = 0;
              do {
                lVar10 = (longlong)param_2[lVar6 + lVar4] + lVar9 * 10;
                lVar9 = lVar10 + -0x30;
                lVar6 = lVar6 + 1;
              } while (lVar6 != 0);
              if (lVar9 < 0x7fffffff) {
                iVar3 = ~uVar2 + iVar3;
                lVar10 = lVar10 + -0x2f;
                goto LAB_1410339e5;
              }
            }
            goto LAB_1410339e2;
          }
        }
LAB_1410339e5:
        if (iVar3 == 0) goto LAB_141033a64;
      }
      local_3c = 0;
      local_48 = param_2;
      local_40 = iVar3;
      uVar2 = FUN_14001a6c0(&local_48,1);
      uVar8 = lVar10 << 0x20;
      uVar7 = (ulonglong)uVar2;
      goto LAB_141033a09;
    }
  }
LAB_141033a64:
  uVar7 = 0;
  uVar8 = 0;
LAB_141033a09:
  iVar3 = *(int *)(param_1 + 0x1f8);
  *(uint *)(param_1 + 0x1f8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1fc) < iVar3 + 1U) {
    FUN_14069ca4a((longlong *)(param_1 + 0x1f0),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x1f0);
  *(ulonglong *)(lVar4 + (longlong)iVar3 * 0x10) = uVar8 | uVar7;
  *(undefined8 *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = param_3;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141033ae6 FUN_141033ae6 body=127 status=ok
// SIG undefined FUN_141033ae6(void)

void FUN_141033ae6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144837e54(param_3,0);
  lVar2 = *(longlong *)(param_3 + 0x30);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x470))(param_1);
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x480))(param_1);
    *(undefined8 *)(param_3 + 0x38) = uVar1;
    FUN_1400f0d6e(param_1,param_3,0);
    lVar2 = *(longlong *)(param_3 + 0x30);
  }
  if (*(int *)(param_3 + 0x40) != *(int *)(param_3 + 0x44)) {
    uVar1 = FUN_141033b66();
    FUN_1446e7478(param_3 + 0x48,lVar2,uVar1,1);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}



// FUNCTION 141033b66 FUN_141033b66 body=57 status=ok
// SIG undefined FUN_141033b66(void)

void FUN_141033b66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25758 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25758 = FUN_140002ddd(FUN_146447bb9,uVar1,L"WwiseStateDef");
  }
  return;
}



// FUNCTION 141033ba0 FUN_141033ba0 body=74 status=ok
// SIG undefined FUN_141033ba0(void)

void FUN_141033ba0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181ad18();
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_14acb7ae0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 141033bea FUN_141033bea body=36 status=ok
// SIG undefined FUN_141033bea(void)

undefined8 FUN_141033bea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141033c18 FUN_141033c18 body=392 status=ok
// SIG undefined FUN_141033c18(void)

void FUN_141033c18(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406bf012(local_38);
  if (*param_2 == '\x01') {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_40 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    local_48 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_48 = &local_3c;
      local_40 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x80);
      local_40 = 1;
      local_48 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_141033cc4;
    }
  }
  local_30 = (char *)(lVar6 + 0x50);
LAB_141033cc4:
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    uVar4 = *(undefined4 *)(local_30 + 8);
    iVar9 = 0;
    do {
      puVar1 = local_48 + (int)local_40;
      *local_48 = uVar4;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141033da2 FUN_141033da2 body=40 status=ok
// SIG undefined FUN_141033da2(void)

void FUN_141033da2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141033dca();
  FUN_141033f1e(uVar1,*(undefined4 *)(param_1 + 0x34),param_1);
  FUN_141033e36(param_1);
  return;
}



// FUNCTION 141033dca FUN_141033dca body=108 status=ok
// SIG undefined FUN_141033dca(void)

undefined * FUN_141033dca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8441f8) {
    FUN_144b3d300(&DAT_14c8441f8);
    if (DAT_14c8441f8 == -1) {
      FUN_1457e2d22(&DAT_14c842770);
      atexit(FUN_14275beaf);
      _Init_thread_footer(&DAT_14c8441f8);
    }
  }
  return &DAT_14c842770;
}



// FUNCTION 141033e36 FUN_141033e36 body=119 status=ok
// SIG undefined FUN_141033e36(void)

ulonglong FUN_141033e36(longlong param_1)

{
  char cVar1;
  uint uVar2;
  LPWSTR pWVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  
  FUN_14279b91a(*(undefined8 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 8);
  }
  FUN_1415da298(puVar5);
  GetCommandLineW();
  pWVar3 = GetCommandLineW();
  cVar1 = FUN_14054d46e(pWVar3,L"noexceptionhandler");
  if (cVar1 != '\0') {
    uVar4 = FUN_14279df84(param_1);
    return uVar4;
  }
  uVar2 = FUN_14279df84(param_1);
  return (ulonglong)uVar2;
}



// FUNCTION 141033f1e FUN_141033f1e body=397 status=ok
// SIG undefined FUN_141033f1e(void)

void FUN_141033f1e(LPCRITICAL_SECTION param_1,uint param_2,longlong *param_3)

{
  byte bVar1;
  HANDLE *ppvVar2;
  LPCRITICAL_SECTION p_Var3;
  int iVar4;
  undefined1 auStack_68 [36];
  uint local_44;
  longlong *local_40;
  uint *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = param_2;
  local_40 = param_3;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar1 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar1 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 == 0) {
      (**(code **)(*param_3 + 0x28))(param_3);
    }
  }
  EnterCriticalSection(param_1);
  if ((int)param_1[0x9a].SpinCount != param_1[0x9c].RecursionCount) {
    ppvVar2 = &param_1[0x9c].OwningThread;
    if (*(HANDLE **)&param_1[0xa9].LockCount != (HANDLE *)0x0) {
      ppvVar2 = *(HANDLE **)&param_1[0xa9].LockCount;
    }
    iVar4 = *(int *)((longlong)ppvVar2 +
                    (ulonglong)(*(int *)&param_1[0xa9].OwningThread - 1U & param_2) * 4);
    if (iVar4 != -1) {
      p_Var3 = param_1[0x9a].LockSemaphore;
      if (param_1[0x9a].LockSemaphore == (LPCRITICAL_SECTION)0x0) {
        p_Var3 = param_1 + 1;
      }
      do {
        if (*(uint *)(&p_Var3->DebugInfo + (longlong)iVar4 * 3) == param_2) goto LAB_141034017;
        iVar4 = *(int *)(&p_Var3->OwningThread + (longlong)iVar4 * 3);
      } while (iVar4 != -1);
    }
  }
  local_38 = &local_44;
  local_30 = &local_40;
  FUN_1410850f4(param_1 + 1,local_24,&local_38,0);
  *(undefined1 *)&param_1[0xa9].LockSemaphore = 1;
LAB_141034017:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410340ac FUN_1410340ac body=311 status=ok
// SIG undefined FUN_1410340ac(void)

void FUN_1410340ac(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x88) & 2) == 0) {
    param_2 = param_2 + 0x18;
    lVar1 = param_1 + 0x40;
    cVar2 = FUN_1410341e4(param_2,1,lVar1,param_3);
    cVar3 = FUN_1410341e4(param_2,2,lVar1,param_3);
    cVar4 = FUN_1410341e4(param_2,3,lVar1,param_3);
    if (cVar2 != '\0') {
      local_60 = *param_3;
      local_58 = param_3[1];
      local_50 = param_3[2];
      local_48 = 1;
      local_44 = DAT_14cb8ae40;
      FUN_141034304(param_1);
    }
    if (cVar3 != '\0') {
      local_60 = *param_3;
      local_58 = param_3[1];
      local_50 = param_3[2];
      local_48 = 1;
      local_44 = DAT_14cb8ae48;
      FUN_141034304(param_1);
    }
    if (cVar4 != '\0') {
      local_60 = *param_3;
      local_58 = param_3[1];
      local_50 = param_3[2];
      local_48 = 1;
      local_44 = DAT_14cb8ae50;
      FUN_141034304(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410341e4 FUN_1410341e4 body=132 status=ok
// SIG undefined FUN_1410341e4(void)

undefined8 FUN_1410341e4(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  if ((char)param_2 != '\x01') {
    if ((param_2 & 0xff) == 3) {
      param_1 = param_1 + 4;
    }
    else {
      param_1 = param_1 + 2;
    }
  }
  if ((param_1 != (longlong *)0x0) && (lVar3 = param_1[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,param_4), cVar4 != '\0')) {
        return 1;
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != lVar5);
  }
  return 0;
}



// FUNCTION 141034268 FUN_141034268 body=155 status=ok
// SIG undefined FUN_141034268(void)

bool FUN_141034268(longlong param_1,char param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  int *piVar2;
  float fVar3;
  
  lVar1 = 0x24;
  piVar2 = param_3;
  if (param_2 != '\x01') {
    if (param_2 == '\x03') {
      piVar2 = param_3 + 6;
      lVar1 = 0x3c;
    }
    else {
      if (param_2 != '\x02') {
        return false;
      }
      piVar2 = param_3 + 3;
      lVar1 = 0x30;
    }
  }
  if (piVar2 == (int *)0x0) {
    return false;
  }
  if ((int *)((longlong)param_3 + lVar1) == (int *)0x0) {
    return false;
  }
  if (((char)piVar2[2] == '\x01') && (*piVar2 != *(int *)((longlong)param_3 + lVar1))) {
    fVar3 = 0.0;
    if ((*(longlong *)(*param_4 + 0x40) != 0) && (lVar1 = FUN_1447210f0(), lVar1 != 0)) {
      fVar3 = (float)*(double *)(lVar1 + 0x6d0);
    }
    return fVar3 - (float)piVar2[1] < *(float *)(param_1 + 8);
  }
  return false;
}



// FUNCTION 141034304 FUN_141034304 body=968 status=ok
// SIG undefined FUN_141034304(void)

void FUN_141034304(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int unaff_EBP;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined1 local_48;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) goto LAB_1410345e8;
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
  iVar6 = *(int *)(param_1 + 0x2c);
  if ((longlong)iVar6 < 0) {
LAB_14103443f:
    FUN_143e2b600(param_1,param_2);
    uVar5 = *(uint *)(param_1 + 0x2c);
    if (-1 < (int)uVar5) {
      lVar10 = *(longlong *)param_2[2];
      iVar6 = *(int *)(lVar10 + 0x30);
      goto LAB_14103445f;
    }
  }
  else {
    if ((iVar6 < *(int *)(*(longlong *)param_2[2] + 0x30)) &&
       (lVar10 = (longlong)iVar6 * 0xa0 + *(longlong *)(*(longlong *)param_2[2] + 0x28), lVar10 != 0
       )) {
      lVar1 = param_1 + 0x40;
      plVar7 = *(longlong **)(lVar10 + 0x48);
      if (plVar7 == (longlong *)0x0) {
        bVar2 = 0;
      }
      else {
        bVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,1,lVar1,param_2);
      }
      plVar7 = *(longlong **)(lVar10 + 0x60);
      if (plVar7 == (longlong *)0x0) {
        unaff_EBP = 0;
      }
      else {
        unaff_EBP = (**(code **)(*plVar7 + 0x10))(plVar7,2,lVar1,param_2);
      }
      plVar7 = *(longlong **)(lVar10 + 0x78);
      if (plVar7 == (longlong *)0x0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,3,lVar1,param_2);
      }
      lVar10 = *(longlong *)((longlong)param_2 + 0x1c);
      if ((lVar10 != DAT_14cb8ae40) && (bVar2 = (byte)unaff_EBP, lVar10 != DAT_14cb8ae48)) {
        bVar2 = bVar3 & lVar10 == DAT_14cb8ae50;
      }
      if (bVar2 != 0) {
        bVar2 = *(byte *)(param_1 + 0x88);
        bVar3 = bVar2 | 4;
        *(byte *)(param_1 + 0x88) = bVar3;
        iVar6 = *(int *)(param_1 + 0x2c);
        if (((-1 < (longlong)iVar6) && (iVar6 < *(int *)(*(longlong *)param_2[2] + 0x30))) &&
           (lVar10 = (longlong)iVar6 * 0xa0 + *(longlong *)(*(longlong *)param_2[2] + 0x28),
           lVar10 != 0)) {
          FUN_143e2b6bc(param_1,lVar10 + 0xc,param_2);
          bVar3 = *(byte *)(param_1 + 0x88);
        }
        *(byte *)(param_1 + 0x88) = bVar3 & 0xfb | bVar2 & 4;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x2c);
    if ((longlong)(int)uVar5 < 0) goto LAB_14103443f;
    lVar10 = *(longlong *)param_2[2];
    iVar6 = *(int *)(lVar10 + 0x30);
    if ((iVar6 <= (int)uVar5) || ((longlong)(int)uVar5 * 0xa0 + *(longlong *)(lVar10 + 0x28) == 0))
    goto LAB_14103443f;
LAB_14103445f:
    if (((int)uVar5 < iVar6) &&
       (lVar10 = (ulonglong)uVar5 * 0xa0 + *(longlong *)(lVar10 + 0x28), lVar10 != 0)) {
      lVar1 = param_2[1];
      if ((longlong)*(int *)(lVar1 + 0x50) != 0) {
        plVar7 = *(longlong **)(lVar1 + 0x48);
        lVar9 = (longlong)*(int *)(lVar1 + 0x50) * 0x38;
        do {
          if (*(int *)(*plVar7 + 8) == *(int *)(lVar10 + 8)) {
            if (plVar7 != (longlong *)0x0) {
              lVar10 = plVar7[5];
              if (lVar10 != 0) {
                unaff_EBP = *(int *)(lVar10 + 0x3c);
              }
              local_68 = *param_2;
              local_50 = &local_b8;
              local_98 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              uStack_90 = 0x8000000000;
              local_88 = 0xffffffff;
              local_48 = *(undefined1 *)(param_2 + 3);
              if (*(int *)((longlong)param_2 + 0x1c) == -1) {
                local_44 = 0xffffffff;
              }
              else {
                local_44 = *(undefined8 *)((longlong)param_2 + 0x1c);
              }
              local_60 = lVar1;
              local_58 = plVar7;
              FUN_141098bd2(*plVar7,&local_68);
              if (plVar7[5] == 0) {
                bVar8 = false;
              }
              else {
                bVar8 = *(int *)(plVar7[5] + 0x3c) != unaff_EBP || lVar10 == 0;
              }
              if ((int)local_44 != -1) {
                local_44 = 0xffffffff;
              }
              uStack_70 = uStack_70 & 0xffffffff00000000;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_140333f4e(&local_b8);
              if (bVar8) {
                *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x40);
                if (*(char *)(param_1 + 0x48) == '\x01') {
                  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x44);
                  uVar4 = 1;
LAB_1410345a7:
                  *(undefined1 *)(param_1 + 0x6c) = uVar4;
                }
                else if (*(char *)(param_1 + 0x6c) == '\x01') {
                  uVar4 = 0;
                  goto LAB_1410345a7;
                }
                *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x4c);
                if (*(char *)(param_1 + 0x54) == '\x01') {
                  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x50);
                  *(undefined1 *)(param_1 + 0x78) = 1;
                }
                else if (*(char *)(param_1 + 0x78) == '\x01') {
                  *(undefined1 *)(param_1 + 0x78) = 0;
                }
                *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x58);
                if (*(char *)(param_1 + 0x60) == '\x01') {
                  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x5c);
                  *(undefined1 *)(param_1 + 0x84) = 1;
                }
                else if (*(char *)(param_1 + 0x84) == '\x01') {
                  *(undefined1 *)(param_1 + 0x84) = 0;
                }
              }
            }
            break;
          }
          plVar7 = plVar7 + 7;
          lVar9 = lVar9 + -0x38;
        } while (lVar9 != 0);
      }
    }
  }
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfe;
LAB_1410345e8:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410346cd FUN_1410346cd body=85 status=ok
// SIG undefined FUN_1410346cd(void)

void FUN_1410346cd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141034722(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b13bae0;
  puVar1[5] = &PTR_FUN_14b13c0f0;
  puVar1[6] = &PTR_LAB_14b13c130;
  *(undefined1 *)(puVar1 + 0x62) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x314) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x31c) = 0;
  return;
}



// FUNCTION 141034722 FUN_141034722 body=170 status=ok
// SIG undefined FUN_141034722(void)

undefined8 * FUN_141034722(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a83f470;
  param_1[5] = &PTR_FUN_14a83fa80;
  param_1[6] = &PTR_LAB_14a83fac0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  *(byte *)(param_1 + 0x59) = (*(byte *)(param_1 + 0x59) & 0xfc) + 1;
  param_1[0x5a] = 0x4060000000000000;
  param_1[0x5b] = 0x4070000000000000;
  param_1[0x5c] = 0x4070000000000000;
  param_1[0x5d] = &DAT_3f8000003f800000;
  param_1[0x5e] = &DAT_3f8000003f800000;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  return param_1;
}



// FUNCTION 1410347cc FUN_1410347cc body=606 status=ok
// SIG undefined FUN_1410347cc(void)

void FUN_1410347cc(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  ulonglong *param_5,ulonglong param_6)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  ulonglong uVar8;
  
  cVar1 = FUN_1400b7021();
  if (cVar1 == '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = DAT_14c9c7ca8;
  *(undefined4 *)(param_1 + 0x78) = 0xff;
  uVar8 = *param_5;
  if ((uVar8 & 0x40) != 0) {
    uVar8 = param_6;
    FUN_141035364(param_1,param_4,param_3,0,param_6);
    FUN_141034a2a(param_1,param_4,param_3,2,uVar8 & 0xffffffff00000000,param_6);
    FUN_141035364(param_1,param_4,param_3,1,param_6);
    FUN_141034a2a(param_1,param_4,param_3,2,1,param_6);
    FUN_141035364(param_1,param_4,param_3,2,param_6);
    cVar1 = '\x02';
    iVar7 = 2;
    goto LAB_1410348df;
  }
  if ((uVar8 & 0x600000000000) == 0) {
    return;
  }
  pcVar3 = *(code **)(*param_3 + 0x38);
  plVar4 = param_3;
  if (pcVar3 == FUN_144765e18) {
    plVar4 = (longlong *)param_3[9];
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)param_3[8];
      pcVar3 = *(code **)(*plVar4 + 0x420);
      pcVar6 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar3 = *(code **)(*plVar4 + 0x420);
      pcVar6 = (code *)&LAB_14497e108;
    }
    if (pcVar3 != pcVar6) goto LAB_141034a0c;
  }
  else {
LAB_141034a0c:
    (*pcVar3)(plVar4);
  }
  lVar5 = *param_3;
  if (*(code **)(lVar5 + 0x100) == (code *)&LAB_144b25520) {
    bVar2 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar2 = (**(code **)(lVar5 + 0x100))(param_3);
    lVar5 = *param_3;
  }
  iVar7 = 2 - (uint)bVar2;
  pcVar3 = *(code **)(lVar5 + 0x38);
  if (pcVar3 == FUN_144765e18) {
    plVar4 = (longlong *)param_3[9];
    if (plVar4 == (longlong *)0x0) {
      pcVar3 = *(code **)(*(longlong *)param_3[8] + 0x420);
      if (pcVar3 != (code *)&LAB_144b24e8a) goto LAB_141034a23;
      bVar2 = *(byte *)((longlong *)param_3[8] + 0x30);
    }
    else {
      pcVar3 = *(code **)(*plVar4 + 0x420);
      if (pcVar3 != (code *)&LAB_14497e108) goto LAB_141034a23;
      bVar2 = *(byte *)(plVar4 + 0x2a);
    }
    bVar2 = (bVar2 & 0x10) >> 4;
  }
  else {
LAB_141034a23:
    bVar2 = (*pcVar3)();
  }
  cVar1 = (((uint)uVar8 >> 0x10 & 1) != 0) + '\x01';
  if (bVar2 != 0) {
    cVar1 = '\0';
  }
  if ((uVar8 & 0x20000) != 0) {
    cVar1 = '\0';
  }
LAB_1410348df:
  FUN_141034a2a(param_1,param_4,param_3,iVar7,cVar1,param_6);
  return;
}



// FUNCTION 141034a2a FUN_141034a2a body=2361 status=ok
// SIG undefined FUN_141034a2a(void)

/* WARNING: Removing unreachable block (ram,0x0001410351c1) */

void FUN_141034a2a(longlong param_1,longlong *param_2,longlong *param_3,int param_4,int param_5,
                  longlong *param_6)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_558 [32];
  uint *local_538;
  undefined1 *local_530;
  undefined1 local_519;
  uint local_518 [4];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4aa [2];
  undefined8 local_4a8;
  undefined1 local_499;
  uint local_498 [2];
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  ulonglong local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined8 local_254;
  undefined2 local_24a;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined2 local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_558;
  cVar4 = FUN_1400b7021();
  if (cVar4 != '\0') {
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4f8 = 0;
    uStack_4f0 = 0;
    local_508 = 0;
    uStack_500 = 0;
    local_538 = local_518;
    local_518[0] = 0;
    local_518[1] = 0;
    local_518[2] = 0;
    local_518[3] = 0;
    cVar4 = FUN_140ba56d1(param_3,*param_2,&local_508);
    uVar3 = DAT_14ca4af90;
    if (cVar4 != '\0') {
      local_460 = 0;
      uStack_458 = 0;
      local_470 = 0;
      uStack_468 = 0;
      local_480 = 0;
      uStack_478 = 0;
      local_490 = 0;
      uStack_488 = 0;
      local_519 = ((uint)DAT_14ca4af90 >> 0xc & 1) == 0;
      uVar1 = *(uint *)(param_1 + 8);
      local_190[0] = 0x100;
      local_80 = 0;
      local_78 = 0x300000000;
      local_70 = 0x7fffffff;
      uStack_68 = 0;
      cVar4 = FUN_1406917e6();
      if (cVar4 == '\0') {
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        local_220 = 1;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        lStack_200 = 0;
        local_1f8 = 0;
        lStack_1f0 = 0;
        local_1e8 = 0xffffffff;
        uStack_1e4 = 0xffffffff;
        uStack_1e0 = 0xffffffff;
        uStack_1dc = 0xffffffff;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1bf = 0;
        uStack_1b8 = 0;
        uStack_1b7 = 0;
        local_1af = 1;
        local_1ac = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        lVar8 = param_2[1];
        if (lVar8 == 0) {
          local_288 = 0x1100000000;
          (**(code **)(*param_2 + 0x48))(0,&local_310);
          lVar8 = FUN_14486d71a(&local_310);
        }
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_310 = local_508;
        uStack_308 = uStack_500;
        local_300 = (undefined4)local_4f8;
        uStack_2fc = local_4f8._4_4_;
        uStack_2f8 = (undefined4)uStack_4f0;
        uStack_2f4 = uStack_4f0._4_4_;
        local_2f0 = (undefined4)local_4e8;
        uStack_2ec = local_4e8._4_4_;
        uStack_2e8 = (undefined4)uStack_4e0;
        uStack_2e4 = uStack_4e0._4_4_;
        local_2e0 = (undefined4)local_4d8;
        uStack_2dc = local_4d8._4_4_;
        uStack_2d8 = (undefined4)uStack_4d0;
        uStack_2d4 = uStack_4d0._4_4_;
        local_2c0 = (undefined4)local_4c8;
        uStack_2bc = local_4c8._4_4_;
        uStack_2b8 = (undefined4)uStack_4c0;
        uStack_2b4 = uStack_4c0._4_4_;
        FUN_144765e6c(&local_238,lVar8);
        puVar10 = &DAT_14c9c0e10;
        if (param_5 == 2) {
          puVar10 = &DAT_14c9c0e28;
        }
        puVar11 = &DAT_14c9c0d68;
        if (param_5 == 2) {
          puVar11 = &DAT_14c9c0df8;
        }
        puVar9 = &DAT_14c9c0e40;
        if (param_5 != 0) {
          puVar9 = puVar10;
        }
        puVar10 = &DAT_14c9c0db0;
        if (param_5 != 0) {
          puVar10 = puVar11;
        }
        if (param_4 == 1) {
          puVar10 = puVar9;
        }
        uStack_1d0 = *puVar10;
        local_1d8 = *(undefined8 *)(param_1 + 0x40);
        local_1c8 = *(undefined8 *)(param_1 + 0x48);
        uVar7 = (**(code **)(*param_3 + 0x490))(param_3);
        if (uVar7 < 4) {
          uVar5 = (undefined1)(0x5010400 >> ((byte)(uVar7 << 3) & 0x1f));
        }
        else {
          uVar5 = 0;
          if ((uVar7 < 7) && (DAT_14ca84f33 != '\0')) {
            uVar5 = (undefined1)(0xa060900000000 >> ((byte)(uVar7 << 3) & 0x3f));
          }
        }
        local_1af = CONCAT11(uVar5,(undefined1)local_1af);
        cVar4 = (**(code **)(*param_3 + 0x4a0))(param_3);
        if (cVar4 == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_144a12f44(DAT_14ca85550);
        }
        local_1af = CONCAT11(local_1af._1_1_,uVar5);
        FUN_144a1fecc(&local_238,&local_310);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 == 2)) {
          uStack_1a8 = (undefined4)local_240;
          uStack_1a4 = (undefined4)((ulonglong)local_240 >> 0x20);
          FUN_14573402d(local_3b0);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            lVar8 = *param_2;
            local_450[0] = local_320;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            local_538 = local_498;
            local_498[0] = local_498[0] & 0xffff0000;
            local_530 = local_4aa;
            FUN_14573482a(&DAT_14cafccf8,&local_4a8,
                          (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] &
                          0x7fffffff,local_450);
            if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_4a8 * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_4a8 * 0x10 + DAT_14cafccf8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
              FUN_140691a2a(&DAT_14cafc0a0,uVar1,lVar8);
            }
          }
          FUN_1457340f6(local_450,&local_238);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            lVar8 = *param_2;
            local_4a8 = local_3c0;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            local_538 = (uint *)local_4aa;
            local_4aa = (undefined1  [2])0x0;
            local_530 = &local_499;
            FUN_14573482a(&DAT_14cafd9c8,local_498,
                          (int)((ulonglong)local_4a8 >> 0x20) * 0x17 + (int)local_4a8 & 0x7fffffff,
                          &local_4a8);
            if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_498[0] * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_498[0] * 0x10 + DAT_14cafd9c8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
              FUN_140691a2a(&DAT_14cafcd70,uVar1,lVar8);
            }
          }
          if (local_408 != 0) {
            FUN_140021284();
          }
          if (local_410 != 0) {
            FUN_140021284();
          }
          if (local_418 != 0) {
            FUN_140021284();
          }
          if (local_420 != 0) {
            FUN_140021284();
          }
          if (local_368 != 0) {
            FUN_140021284();
          }
          if (local_370 != 0) {
            FUN_140021284();
          }
          if (local_378 != 0) {
            FUN_140021284();
          }
          if (local_380 != 0) {
            FUN_140021284();
          }
        }
        uStack_2b4 = 0;
        local_2b0 = 0;
        local_2a8 = local_490;
        uStack_2a0 = uStack_488;
        local_298 = local_480;
        uStack_290 = uStack_478;
        local_288 = local_470;
        uStack_280 = uStack_468;
        local_278 = local_460;
        uStack_270 = uStack_458;
        local_268 = 0xb;
        local_258 = 1;
        local_257 = local_519;
        local_256 = 1;
        local_255 = local_519;
        local_254 = 0x100000021;
        local_24a = 0;
        local_260 = uVar3 | 0x400000c;
        memcpy(local_188,&local_310,0xd8);
        if (lStack_1f0 != 0) {
          FUN_140021284();
        }
        if (local_1f8 != 0) {
          FUN_140021284();
        }
        if (lStack_200 != 0) {
          FUN_140021284();
        }
        if (local_208 != 0) {
          FUN_140021284();
        }
        local_70 = 0;
      }
      else {
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_310 = local_508;
        uStack_308 = uStack_500;
        local_300 = (undefined4)local_4f8;
        uStack_2fc = local_4f8._4_4_;
        uStack_2f8 = (undefined4)uStack_4f0;
        uStack_2f4 = uStack_4f0._4_4_;
        local_2f0 = (undefined4)local_4e8;
        uStack_2ec = local_4e8._4_4_;
        uStack_2e8 = (undefined4)uStack_4e0;
        uStack_2e4 = uStack_4e0._4_4_;
        local_2e0 = (undefined4)local_4d8;
        uStack_2dc = local_4d8._4_4_;
        uStack_2d8 = (undefined4)uStack_4d0;
        uStack_2d4 = uStack_4d0._4_4_;
        local_2c0 = (undefined4)local_4c8;
        uStack_2bc = local_4c8._4_4_;
        uStack_2b8 = (undefined4)uStack_4c0;
        uStack_2b4 = uStack_4c0._4_4_;
        FUN_145734aa6(&local_310,&local_238);
        FUN_1457347b6(&local_b0,&local_238);
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        local_70 = local_70 & 0x80000000;
      }
      local_190[0] = 0x100;
      local_70 = uVar1 & 0x7fffffff | local_70;
      uStack_68 = *param_2;
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
        local_70 = local_70 & 0x7fffffff | (uint)bVar6 << 0x1f;
        FUN_1406918b2();
      }
      iVar2 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
        FUN_14069191a(param_6,iVar2);
      }
      lVar8 = *param_6;
      _Dst = (void *)(lVar8 + (longlong)iVar2 * 0x130);
      memcpy(_Dst,local_190,0xe0);
      *(undefined8 *)(lVar8 + 0x110 + (longlong)iVar2 * 0x130) = 0;
      if (local_80 == 0) {
        *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
        *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
        *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
        *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
        *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
        *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
      }
      *(longlong *)((longlong)_Dst + 0x110) = local_80;
      local_80 = 0;
      *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
      *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
      local_78 = 0x300000000;
      *(uint *)((longlong)_Dst + 0x120) = local_70;
      *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
      *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141035364 FUN_141035364 body=2469 status=ok
// SIG undefined FUN_141035364(void)

/* WARNING: Removing unreachable block (ram,0x000141035b77) */

void FUN_141035364(longlong param_1,longlong *param_2,longlong *param_3,int param_4,
                  longlong *param_5)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined1 auStack_518 [32];
  uint *local_4f8;
  undefined1 *local_4f0;
  undefined1 local_4d9;
  longlong *local_4d8;
  uint local_4cc;
  ulonglong local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b2 [2];
  undefined8 local_4b0;
  undefined1 local_4a1;
  uint local_4a0 [2];
  ulonglong local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458 [6];
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_3c8;
  undefined1 local_3b8 [48];
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_328;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  ulonglong local_268;
  undefined1 local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 local_25d;
  undefined8 local_25c;
  undefined2 local_252;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined *local_190;
  undefined8 local_188 [12];
  undefined4 auStack_128 [30];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_518;
  cVar6 = FUN_1400b7021();
  if (cVar6 != '\0') {
    lVar2 = *param_2;
    memset(local_188,0,0x90);
    FUN_1400cef80();
    local_188[DAT_14c9c4848] = &DAT_14c9c4800;
    auStack_128[DAT_14c9c4848] = 0;
    local_190 = &DAT_14c9c4e10;
    local_2b8 = (undefined1  [16])0x0;
    local_2c8 = (undefined1  [16])0x0;
    local_2d8 = (undefined1  [16])0x0;
    local_2e8 = (undefined1  [16])0x0;
    local_2f8 = (undefined1  [16])0x0;
    local_308 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    cVar6 = FUN_14007744c(param_3,&local_190,lVar2);
    uVar3 = DAT_14ca4af90;
    if (cVar6 != '\0') {
      uVar4 = local_308._0_8_;
      uVar15 = local_318._0_8_;
      if (local_308._0_8_ == 0) {
        uVar15 = 0;
      }
      uVar5 = local_2f8._8_8_;
      uVar10 = local_318._0_8_;
      if (local_2f8._8_8_ == 0) {
        uVar10 = 0;
      }
      local_468 = 0;
      uStack_460 = 0;
      local_478 = 0;
      uStack_470 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_4d9 = ((uint)DAT_14ca4af90 >> 0xc & 1) == 0;
      local_4cc = *(uint *)(param_1 + 8);
      local_190 = (undefined *)CONCAT62(local_190._2_6_,0x100);
      local_80 = 0;
      local_78 = 0x300000000;
      local_70 = 0x7fffffff;
      lStack_68 = 0;
      local_4d8 = param_2;
      cVar6 = FUN_1406917e6();
      if (cVar6 == '\0') {
        local_4c8 = uVar3;
        local_238 = 0;
        uStack_230 = 0;
        local_228 = 0;
        local_220 = 1;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        lStack_200 = 0;
        local_1f8 = 0;
        lStack_1f0 = 0;
        local_1e8 = 0xffffffff;
        uStack_1e4 = 0xffffffff;
        uStack_1e0 = 0xffffffff;
        uStack_1dc = 0xffffffff;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        uStack_1bf = 0;
        uStack_1b8 = 0;
        uStack_1b7 = 0;
        local_1af = 1;
        local_1ac = 0;
        uStack_1a8 = 0;
        uStack_1a4 = 0;
        uStack_1a0 = 0;
        local_290 = 0x1100000000;
        local_4c0 = uVar10;
        (**(code **)(*local_4d8 + 0x48))(1,local_318);
        uVar10 = FUN_14486d71a(local_318);
        local_2d8 = ZEXT816(0);
        local_318._8_8_ = uVar15;
        local_318._0_8_ = uVar4;
        local_308._8_8_ = local_4c0;
        local_308._0_8_ = uVar5;
        local_2f8 = ZEXT816(0);
        local_2e8 = ZEXT816(0);
        local_2c8 = ZEXT816(0);
        FUN_144765e6c(&local_238,uVar10,local_318);
        puVar12 = &DAT_14c9c0d58;
        if (param_4 == 2) {
          puVar12 = &DAT_14c9c0de8;
        }
        puVar11 = &DAT_14c9c0da0;
        if (param_4 != 0) {
          puVar11 = puVar12;
        }
        uStack_1d0 = *(undefined8 *)(puVar11 + 0x10);
        local_1d8 = *(undefined8 *)(param_1 + 0x40);
        local_1c8 = *(undefined8 *)(param_1 + 0x48);
        uVar9 = (**(code **)(*param_3 + 0x490))(param_3);
        uVar3 = local_4c8;
        uVar13 = local_4cc;
        plVar14 = local_4d8;
        if (uVar9 < 4) {
          uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar9 << 3) & 0x1f));
        }
        else {
          uVar7 = 0;
          if ((uVar9 < 7) && (uVar7 = 0, DAT_14ca84f33 != '\0')) {
            uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar9 << 3) & 0x3f));
          }
        }
        local_1af = CONCAT11(uVar7,(undefined1)local_1af);
        cVar6 = (**(code **)(*param_3 + 0x4a0))(param_3);
        if (cVar6 == '\0') {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_144a12f44(DAT_14ca85550);
        }
        local_1af = CONCAT11(local_1af._1_1_,uVar7);
        FUN_144a1fecc(&local_238,local_318);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 == 2)) {
          uStack_1a8 = (undefined4)local_248;
          uStack_1a4 = (undefined4)((ulonglong)local_248 >> 0x20);
          FUN_14573402d(local_3b8);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            local_4d8 = (longlong *)*plVar14;
            local_458[0] = local_328;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            local_4f8 = local_4a0;
            local_4a0[0] = local_4a0[0] & 0xffff0000;
            local_4f0 = local_4b2;
            FUN_14573482a(&DAT_14cafccf8,&local_4b0,
                          (int)((ulonglong)local_458[0] >> 0x20) * 0x17 + (int)local_458[0] &
                          0x7fffffff,local_458);
            if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_4b0 * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_4b0 * 0x10 + DAT_14cafccf8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
              FUN_140691a2a(&DAT_14cafc0a0,uVar13,local_4d8);
            }
          }
          FUN_1457340f6(local_458,&local_238);
          if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
             (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
            lVar2 = *plVar14;
            local_4b0 = local_3c8;
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            local_4f8 = (uint *)local_4b2;
            local_4b2 = (undefined1  [2])0x0;
            local_4f0 = &local_4a1;
            FUN_14573482a(&DAT_14cafd9c8,local_4a0,
                          (int)((ulonglong)local_4b0 >> 0x20) * 0x17 + (int)local_4b0 & 0x7fffffff,
                          &local_4b0);
            if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_4a0[0] * 0x10) == '\x01') {
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            }
            else {
              *(undefined1 *)((longlong)(int)local_4a0[0] * 0x10 + DAT_14cafd9c8 + 8) = 1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
              FUN_140691a2a(&DAT_14cafcd70,uVar13,lVar2);
            }
          }
          if (local_410 != 0) {
            FUN_140021284();
          }
          if (local_418 != 0) {
            FUN_140021284();
          }
          if (local_420 != 0) {
            FUN_140021284();
          }
          if (local_428 != 0) {
            FUN_140021284();
          }
          if (local_370 != 0) {
            FUN_140021284();
          }
          if (local_378 != 0) {
            FUN_140021284();
          }
          if (local_380 != 0) {
            FUN_140021284();
          }
          if (local_388 != 0) {
            FUN_140021284();
          }
        }
        local_2c8._12_4_ = 0;
        local_2b8._8_8_ = 0;
        local_2b8._0_8_ = local_498;
        local_2b8 = local_2b8 << 0x40;
        uStack_2a8 = uStack_490;
        local_2a0 = local_488;
        uStack_298 = uStack_480;
        local_290 = local_478;
        uStack_288 = uStack_470;
        local_280 = local_468;
        uStack_278 = uStack_460;
        local_270 = 0xb;
        local_260 = 1;
        local_25f = local_4d9;
        local_25e = 1;
        local_25d = local_4d9;
        local_25c = 0x100000021;
        local_252 = 0;
        local_268 = uVar3 | 0x400000c;
        memcpy(local_188,local_318,0xd8);
        if (lStack_1f0 != 0) {
          FUN_140021284();
        }
        if (local_1f8 != 0) {
          FUN_140021284();
        }
        if (lStack_200 != 0) {
          FUN_140021284();
        }
        if (local_208 != 0) {
          FUN_140021284();
        }
        local_70 = 0;
      }
      else {
        local_2d8 = ZEXT816(0);
        local_318._8_8_ = uVar15;
        local_318._0_8_ = uVar4;
        local_308._8_8_ = uVar10;
        local_308._0_8_ = uVar5;
        local_2f8 = ZEXT816(0);
        local_2e8 = ZEXT816(0);
        local_2c8 = ZEXT816(0);
        FUN_145734aa6(local_318,&local_238);
        FUN_1457347b6(&local_b0,&local_238);
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        local_70 = local_70 & 0x80000000;
        plVar14 = local_4d8;
        uVar13 = local_4cc;
      }
      local_190 = (undefined *)CONCAT62(local_190._2_6_,0x100);
      local_70 = uVar13 & 0x7fffffff | local_70;
      lStack_68 = *plVar14;
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        bVar8 = (**(code **)(*param_3 + 0x400))(param_3);
        local_70 = local_70 & 0x7fffffff | (uint)bVar8 << 0x1f;
        FUN_1406918b2();
      }
      iVar1 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
        FUN_14069191a(param_5,iVar1);
      }
      lVar2 = *param_5;
      _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
      memcpy(_Dst,&local_190,0xe0);
      *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
      if (local_80 == 0) {
        *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
        *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
        *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
        *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
        *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
        *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
      }
      *(longlong *)((longlong)_Dst + 0x110) = local_80;
      local_80 = 0;
      *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
      *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
      local_78 = 0x300000000;
      *(ulonglong *)((longlong)_Dst + 0x120) = CONCAT44(uStack_6c,local_70);
      *(longlong *)((longlong)_Dst + 0x128) = lStack_68;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141035d0a FUN_141035d0a body=1638 status=ok
// SIG undefined FUN_141035d0a(void)

void FUN_141035d0a(longlong param_1,longlong *param_2,double *param_3)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 *local_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar14 = (undefined4)param_2[2];
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar17 = (undefined4)param_2[3];
  uVar18 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar19 = (undefined4)param_2[4];
  uVar20 = (undefined4)((ulonglong)param_2[4] >> 0x20);
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0x1800000000;
      FUN_140a44582(plVar2,&local_168,0);
      lVar9 = (longlong)(int)local_a0;
      puVar11 = &local_168;
      if (local_a8 != (undefined8 *)0x0) {
        puVar11 = local_a8;
      }
      if (lVar9 == 0) {
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar10 = 0;
        local_1d8 = param_2;
        do {
          plVar8 = *(longlong **)((longlong)puVar11 + lVar10);
          if ((plVar8 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*plVar8 + 0x4c8))(plVar8,lVar3), cVar6 != '\0')) {
            param_2 = local_1d8;
            if (local_a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
              param_2 = local_1d8;
            }
            goto LAB_141035e68;
          }
          lVar10 = lVar10 + 8;
        } while (lVar9 * 8 != lVar10);
        param_2 = local_1d8;
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
          param_2 = local_1d8;
        }
      }
      if (*(code **)(*plVar2 + 0x3a8) == (code *)&LAB_144a8179a) {
        plVar8 = (longlong *)plVar2[0x39];
      }
      else {
        plVar8 = (longlong *)(**(code **)(*plVar2 + 0x3a8))(plVar2);
      }
      if (plVar8 != (longlong *)0x0) {
LAB_141035e68:
        (**(code **)(*plVar8 + 0x4a8))(plVar8,&local_168,param_2[1],0);
        uVar14 = (undefined4)local_148;
        uVar16 = local_148._4_4_;
        uVar17 = (undefined4)uStack_140;
        uVar18 = uStack_140._4_4_;
        uVar19 = (undefined4)CONCAT71(uStack_137,local_138);
        uVar20 = (undefined4)((uint7)uStack_137 >> 0x18);
        local_188 = (undefined4)local_168;
        uStack_184 = local_168._4_4_;
        uStack_180 = (undefined4)uStack_160;
        uStack_17c = uStack_160._4_4_;
        local_178 = local_158;
        uStack_170 = (undefined4)uStack_150;
        uStack_16c = uStack_150._4_4_;
        FUN_1448052ee(&local_188,&local_1a0);
      }
    }
    if (*param_2 != 0) {
      FUN_141036372(param_1 + 0x28,&local_188,*param_2,0);
      goto LAB_141035ed5;
    }
  }
  local_178 = DAT_14c8462d0;
  local_188 = (undefined4)DAT_14c8462c0;
  uStack_184 = DAT_14c8462c0._4_4_;
  uStack_180 = (undefined4)DAT_14c8462c8;
  uStack_17c = DAT_14c8462c8._4_4_;
LAB_141035ed5:
  fVar15 = *(float *)(param_1 + 0x1c);
  uVar7 = *(uint *)(param_1 + 0x18);
  if ((uVar7 & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0x20);
    uVar7 = rand();
    fVar15 = fVar15 + ((float)(uVar7 & 0x7fff) / 32767.0) * (fVar1 - fVar15);
    uVar7 = *(uint *)(param_1 + 0x18);
  }
  *(bool *)(param_3 + 6) = (uVar7 & 4) == 0;
  dVar4 = (double)fVar15;
  dVar12 = (double)CONCAT44(uStack_17c,uStack_180) * dVar4;
  dVar5 = dVar4 * (double)CONCAT44(uStack_184,local_188);
  param_3[3] = dVar5;
  param_3[4] = dVar12;
  param_3[5] = local_178 * dVar4;
  if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
    dVar13 = SQRT((double)param_2[7] * (double)param_2[7] +
                  (double)param_2[5] * (double)param_2[5] + (double)param_2[6] * (double)param_2[6])
    ;
    param_3[3] = dVar5 * dVar13;
    param_3[4] = dVar12 * dVar13;
    param_3[5] = local_178 * dVar4 * dVar13;
  }
  *(undefined4 *)param_3 = uVar14;
  *(undefined4 *)((longlong)param_3 + 4) = uVar16;
  *(undefined4 *)(param_3 + 1) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar18;
  param_3[2] = (double)CONCAT44(uVar20,uVar19);
  uVar7 = *(uint *)(param_1 + 0x18);
  plVar2 = (longlong *)*param_2;
  if ((plVar2 != (longlong *)0x0 & (byte)uVar7 >> 4) == 1) {
    local_1e8 = 0;
    (**(code **)(*plVar2 + 800))
              (plVar2,CONCAT71((uint7)(uint3)(uVar7 >> 8),1),&local_1a0,&local_1b8);
    local_1b8 = *(double *)(param_1 + 0x90) * local_1b8;
    local_1b0 = *(double *)(param_1 + 0x98) * local_1b0;
    dStack_1a8 = *(double *)(param_1 + 0xa0) * dStack_1a8;
    if (((9.999999747378752e-05 < ABS(local_1b8)) || (9.999999747378752e-05 < ABS(local_1b0))) ||
       (9.999999747378752e-05 < ABS(dStack_1a8))) {
      uStack_140 = dStack_1a8 + local_190;
      local_148 = local_1b0 + local_198;
      uStack_150 = local_1b8 + local_1a0;
      local_158 = local_190 - dStack_1a8;
      uStack_160 = local_198 - local_1b0;
      local_168 = local_1a0 - local_1b8;
      local_138 = 1;
      FUN_1467f9340(&local_1d0);
      param_3[2] = local_1c0;
      *(undefined4 *)param_3 = local_1d0;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_1cc;
      *(undefined4 *)(param_3 + 1) = uStack_1c8;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1c4;
    }
    uVar7 = *(uint *)(param_1 + 0x18);
  }
  fVar15 = *(float *)(param_1 + 0x58);
  if ((uVar7 & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x5c);
    uVar7 = rand();
    fVar15 = fVar15 + ((float)(uVar7 & 0x7fff) / 32767.0) * (fVar1 - fVar15);
    uVar7 = *(uint *)(param_1 + 0x18);
  }
  *(bool *)(param_3 + 10) = (uVar7 & 8) == 0;
  if ((fVar15 != 0.0) || (NAN(fVar15))) {
    if (*param_2 == 0) {
      local_158 = DAT_14c8462d0;
      local_168 = (double)CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
      uStack_160 = (double)CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
    }
    else {
      FUN_141036372(param_1 + 0x60,&local_168,*param_2,0);
    }
    dVar4 = (double)fVar15;
    param_3[7] = dVar4 * local_168;
    param_3[8] = uStack_160 * dVar4;
    param_3[9] = local_158 * dVar4;
  }
  else {
    param_3[9] = DAT_14c8464f0;
    uVar17 = DAT_14c8464e8._4_4_;
    uVar16 = (undefined4)DAT_14c8464e8;
    uVar14 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uVar14;
    *(undefined4 *)(param_3 + 8) = uVar16;
    *(undefined4 *)((longlong)param_3 + 0x44) = uVar17;
  }
  if ((*(uint *)(param_1 + 0xa8) & 1) != 0) {
    fVar15 = *(float *)(param_1 + 0xac);
    if ((*(uint *)(param_1 + 0xa8) & 2) != 0) {
      fVar1 = *(float *)(param_1 + 0xb0);
      uVar7 = rand();
      fVar15 = fVar15 + ((float)(uVar7 & 0x7fff) / 32767.0) * (fVar1 - fVar15);
    }
    uVar7 = rand();
    uStack_160 = (double)(((float)(uVar7 & 0x7fff) / 32767.0) * 360.0 + 0.0);
    local_168 = 0.0;
    local_158 = 0.0;
    local_1b8 = (double)fVar15;
    local_1b0 = 0.0;
    dStack_1a8 = 0.0;
    FUN_1401c9a0e(&local_168,&local_1a0);
    *param_3 = local_1a0 + *param_3;
    param_3[1] = local_198 + param_3[1];
    param_3[2] = local_190 + param_3[2];
  }
  if ((local_90 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141036372 FUN_141036372 body=333 status=ok
// SIG undefined FUN_141036372(void)

double * FUN_141036372(undefined8 param_1,double *param_2,undefined8 param_3,undefined1 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_88;
  double local_80;
  double dStack_78;
  double local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = '\0';
  local_88 = 0;
  local_a8 = param_4;
  FUN_140d0fc24(param_1,param_3,&local_80,&local_a0);
  if (local_68 == '\x01') {
    param_2[2] = local_70;
    *param_2 = local_80;
    param_2[1] = dStack_78;
  }
  else {
    dVar1 = (double)FUN_144719204(local_a0,0);
    dVar2 = (double)FUN_144719204(local_98,0);
    dVar3 = sin(dVar1 * 0.017453292519943295);
    dVar1 = cos(dVar1 * 0.017453292519943295);
    dVar4 = sin(dVar2 * 0.017453292519943295);
    dVar2 = cos(dVar2 * 0.017453292519943295);
    *param_2 = dVar2 * dVar1;
    param_2[1] = dVar4 * dVar1;
    param_2[2] = dVar3;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410364c0 FUN_1410364c0 body=37 status=ok
// SIG undefined FUN_1410364c0(void)

void FUN_1410364c0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x218);
  FUN_1410364e6(param_2);
  return;
}



// FUNCTION 1410364e6 FUN_1410364e6 body=372 status=ok
// SIG undefined FUN_1410364e6(void)

undefined8 * FUN_1410364e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b490720;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xf00000d0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3002;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x200000000;
  FUN_1405c5fa2();
  param_1[0x1a] = &DAT_14cb769e8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = &PTR_FUN_14b0394b0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xf00000d0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xf00000d0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf00000d0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  return param_1;
}



// FUNCTION 14103665a FUN_14103665a body=2507 status=ok
// SIG undefined FUN_14103665a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14103665a(longlong *param_1,longlong param_2,code *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong *in_stack_00000040;
  undefined1 auStack_298 [32];
  uint local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  code **local_240;
  code *local_238;
  code *local_230;
  longlong local_220;
  longlong *local_218;
  code *local_210;
  undefined4 local_208;
  uint uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  code *local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [5];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  (**(code **)(*param_1 + 0x340))(param_1,&local_180);
  lVar17 = local_180;
  if (local_180 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_240 = &local_158;
      local_158 = FUN_141030f22;
      local_230 = FUN_14081d0ea;
      local_238 = FUN_14081d0ea;
      local_248 = &LAB_1478c0a72;
      local_250 = &LAB_1417b2375;
      local_258 = L"Engine";
      local_260 = 0x1000000000;
      local_268 = 0x10000004;
      local_270 = 8;
      local_278 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_141036d98;
    }
    iVar25 = *(int *)(DAT_14cac9ca8 + 0x38);
    if (iVar25 <= *(int *)(lVar17 + 0x38)) {
      lVar29 = 0;
      if ((*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)iVar25 * 8) !=
           DAT_14cac9ca8 + 0x30) || (local_180 == 0)) goto LAB_141036c48;
      if (*(int *)(local_180 + 0x38) < iVar25) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        if (*(longlong *)(*(longlong *)(local_180 + 0x30) + (longlong)iVar25 * 8) ==
            DAT_14cac9ca8 + 0x30) {
          lVar17 = local_180;
        }
      }
      if (*(int *)(lVar17 + 0xd4) < 0) {
        lVar29 = 0;
        goto LAB_141036c48;
      }
      local_218 = param_1;
      lVar17 = (**(code **)(*param_1 + 0x348))(param_1);
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      uVar26 = 0;
      local_118 = 0;
      local_108 = (longlong *)0x0;
      local_128 = 0x4800040101;
      local_138 = *(undefined8 *)(param_2 + 0x30);
      local_220 = param_2;
      local_158 = param_3;
      local_150 = lVar17;
      if (lVar17 != 0) {
        FUN_1410391f0(lVar17);
        iVar25 = *(int *)(lVar17 + 0x268);
        if (iVar25 == 0) {
          uVar28 = 1;
          iVar16 = 0;
          iVar30 = 0;
        }
        else {
          puVar18 = *(uint **)(lVar17 + 0x260);
          if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
            puVar18 = (uint *)(lVar17 + 0x250);
          }
          uVar27 = *puVar18;
          if (uVar27 == 0) {
            iVar16 = iVar25 + 0x1e;
            if (-1 < iVar25 + -1) {
              iVar16 = iVar25 + -1;
            }
            uVar26 = 0;
            uVar28 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar28 = uVar26;
            }
            iVar30 = 0;
            do {
              if (uVar28 == uVar26) goto LAB_141036956;
              iVar30 = iVar30 + 0x20;
              uVar27 = puVar18[uVar26 + 1];
              uVar26 = uVar26 + 1;
            } while (uVar27 == 0);
          }
          else {
            uVar26 = 0;
            iVar30 = 0;
          }
          uVar28 = (ulonglong)(-uVar27 & uVar27);
          uVar4 = uVar28 * 2 + 1;
          lVar29 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          iVar16 = (iVar30 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
          if (iVar25 <= iVar16) {
            iVar16 = iVar25;
          }
        }
        if (iVar16 != iVar25) {
          uVar27 = 0xffffffff;
          do {
            lVar29 = *(longlong *)(*(longlong *)(lVar17 + 0x240) + (longlong)iVar16 * 0x10);
            if (lVar29 != 0) {
              lVar19 = FUN_140791f3e();
              if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar29 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
                FUN_1402a37f2(lVar29,0);
                *(byte *)(lVar29 + 0x9e) = *(byte *)(lVar29 + 0x9e) & 0xf7;
              }
            }
            uVar27 = uVar27 & ~(uint)uVar28;
            puVar18 = *(uint **)(lVar17 + 0x260);
            if (*(uint **)(lVar17 + 0x260) == (uint *)0x0) {
              puVar18 = (uint *)(lVar17 + 0x250);
            }
            iVar6 = *(int *)(lVar17 + 0x268);
            iVar16 = (int)uVar26;
            lVar29 = (longlong)iVar16;
            uVar23 = puVar18[lVar29] & uVar27;
            if (uVar23 == 0) {
              iVar21 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar21 = iVar6 + -1;
              }
              iVar21 = iVar21 >> 5;
              iVar30 = iVar30 + 0x20;
              iVar22 = iVar21;
              if (iVar21 < iVar16) {
                iVar22 = iVar16;
              }
              if (iVar16 < iVar21) {
                lVar19 = 0;
                do {
                  uVar23 = puVar18[lVar29 + lVar19 + 1];
                  if (uVar23 != 0) {
                    uVar26 = (ulonglong)(iVar16 + (int)lVar19 + 1);
                    uVar27 = 0xffffffff;
                    goto LAB_141036929;
                  }
                  iVar30 = iVar30 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar22 - lVar29 != lVar19);
                uVar27 = 0xffffffff;
                iVar16 = iVar22;
              }
              uVar26 = (ulonglong)(iVar16 + 1);
              iVar16 = iVar6;
            }
            else {
LAB_141036929:
              uVar28 = (ulonglong)(-uVar23 & uVar23);
              uVar4 = uVar28 * 2 + 1;
              lVar29 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                }
              }
              iVar16 = (iVar30 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar16) {
                iVar16 = iVar6;
              }
            }
          } while (iVar16 != iVar25);
        }
      }
LAB_141036956:
      plVar24 = local_218;
      local_1e8 = 0.0;
      dStack_1e0 = 0.0;
      local_1d8._0_12_ = ZEXT812(0);
      local_1d8._12_4_ = 0x3ff00000;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0x3ff0000000000000;
      uStack_1a0 = 0x3ff0000000000000;
      local_198 = 0x3ff0000000000000;
      uStack_190 = 0;
      lVar17 = (**(code **)(*local_218 + 0x348))(local_218);
      if ((lVar17 != 0) && (lVar17 = *(longlong *)(lVar17 + 0x1c8), lVar17 != 0)) {
        local_1c8 = *(undefined8 *)(lVar17 + 0x198);
        uStack_1c0 = *(undefined8 *)(lVar17 + 0x1a0);
        local_1b8 = *(undefined8 *)(lVar17 + 0x1a8);
        uStack_1b0 = 0;
        auVar5 = *(undefined1 (*) [16])(lVar17 + 0x1b0);
        auVar31 = divpd(auVar5,_DAT_1499387d0);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = *(double *)(lVar17 + 0x1c0);
        auVar32 = divpd(auVar32,_DAT_1499387d0);
        auVar31 = roundpd(auVar31,auVar31,3);
        auVar32 = roundpd(auVar32,auVar32,3);
        dVar13 = (auVar5._0_8_ - auVar31._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar14 = (auVar5._8_8_ - auVar31._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar11 = (*(double *)(lVar17 + 0x1c0) - auVar32._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar12 = (0.0 - auVar32._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar8 = sin(dVar13);
        dVar9 = sin(dVar14);
        dVar10 = sin(dVar11);
        sin(dVar12);
        dVar13 = cos(dVar13);
        dVar14 = cos(dVar14);
        dVar11 = cos(dVar11);
        cos(dVar12);
        dVar12 = dVar9 * dVar8 * dVar10 + dVar14 * dVar13 * dVar11;
        local_1e8 = dVar8 * dVar9 * dVar11 - dVar13 * dVar14 * dVar10;
        dStack_1e0 = -(dVar8 * dVar14 * dVar11) - dVar13 * dVar9 * dVar10;
        local_1d8._8_4_ = SUB84(dVar12,0);
        local_1d8._0_8_ = -(dVar14 * dVar8 * dVar10) + dVar9 * dVar13 * dVar11;
        local_1d8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_1a8 = *(undefined8 *)(lVar17 + 0x1c8);
        uStack_1a0 = *(undefined8 *)(lVar17 + 0x1d0);
        local_198 = *(undefined8 *)(lVar17 + 0x1d8);
        uStack_190 = 0;
      }
      lVar17 = local_180;
      if (local_180 == 0) {
LAB_141036e43:
        local_180 = 0;
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_240 = &local_210;
          local_210 = FUN_141030f22;
          local_230 = FUN_14081d0ea;
          local_238 = FUN_14081d0ea;
          local_248 = &LAB_1478c0a72;
          local_250 = &LAB_1417b2375;
          local_258 = L"Engine";
          local_260 = 0x1000000000;
          local_268 = 0x10000004;
          local_270 = 8;
          local_278 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          if (DAT_14cac9ca8 == 0) goto LAB_141036e43;
        }
        if ((*(int *)(lVar17 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
            DAT_14cac9ca8 + 0x30)) {
          local_180 = 0;
        }
      }
      lVar29 = FUN_1410371ba(local_220,local_180,&local_1e8,&local_158);
      if (lVar29 != 0) {
        if ((char)plVar24[6] == '\x01') {
          *(byte *)(lVar29 + 0x61) = *(byte *)(lVar29 + 0x61) | 2;
        }
        iVar25 = *(int *)(*in_stack_00000040 + 0x24);
        if (((((iVar25 != 0) && (uVar27 = *(uint *)(*in_stack_00000040 + 0x20), -1 < (int)uVar27))
             && ((int)uVar27 < DAT_14c9647dc)) &&
            ((plVar24 = (longlong *)
                        ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
             plVar24 != (longlong *)0x0 && ((int)plVar24[2] == iVar25)))) &&
           (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 &&
            ((*plVar24 != 0 && (lVar17 = FUN_141037070(), lVar17 != 0)))))) {
          pcVar3 = (code *)(lVar29 + 0x240);
          lVar19 = lVar29 + 0x250;
          local_178 = 0x100000000;
          local_168 = 0xffffffff;
          uStack_160 = 0;
          uStack_170 = lVar19;
          if (*(int *)(lVar29 + 0x268) == 0) {
            iVar25 = 0;
          }
          else {
            FUN_1449c0562(&local_178);
            iVar25 = *(int *)(lVar29 + 0x268);
          }
          uStack_1f0 = CONCAT44(uStack_15c,uStack_160);
          local_1f8 = local_168;
          uVar15 = local_1f8;
          local_208 = (undefined4)local_178;
          uStack_204 = local_178._4_4_;
          uStack_200 = (undefined4)uStack_170;
          uStack_1fc = uStack_170._4_4_;
          local_1f8._4_4_ = (int)((ulonglong)local_168 >> 0x20);
          iVar16 = local_1f8._4_4_;
          local_210 = pcVar3;
          if ((local_1f8._4_4_ != iVar25) || (local_1f8 = uVar15, uStack_170 != lVar19)) {
            do {
              local_1f8 = uVar15;
              lVar7 = *(longlong *)(*(longlong *)local_210 + (longlong)iVar16 * 0x10);
              if (lVar7 != 0) {
                lVar20 = FUN_144a799b0();
                if ((*(int *)(lVar20 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar20 + 0x38) * 8) == lVar20 + 0x30)) {
                  FUN_14765bee0(lVar17,lVar7);
                }
              }
              local_1f8 = CONCAT44(local_1f8._4_4_,(uint)local_1f8 & ~uStack_204);
              FUN_1449c0562(&local_208);
              iVar16 = local_1f8._4_4_;
              uVar15 = local_1f8;
            } while (local_210 != pcVar3 ||
                     (CONCAT44(uStack_1fc,uStack_200) != lVar19 || local_1f8._4_4_ != iVar25));
          }
        }
        local_278 = local_278 & 0xffffff00;
        FUN_14113775c(lVar29,&local_1e8,1,0);
      }
      if (local_118 != 0) {
        plVar24 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar24 = local_f8;
        }
        (**(code **)(*plVar24 + 0x10))();
      }
      goto LAB_141036c48;
    }
  }
LAB_141036d98:
  lVar29 = 0;
LAB_141036c48:
  plVar24 = (longlong *)in_stack_00000040[1];
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar24 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar2 = (int *)((longlong)plVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar29;
}



// FUNCTION 14103702c FUN_14103702c body=68 status=ok
// SIG undefined FUN_14103702c(void)

longlong * FUN_14103702c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x348))();
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    *param_2 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  return param_2;
}



// FUNCTION 141037070 FUN_141037070 body=98 status=ok
// SIG undefined FUN_141037070(void)

void FUN_141037070(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1410370d4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1400a1050(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410370d4 FUN_1410370d4 body=228 status=ok
// SIG undefined FUN_1410370d4(void)

longlong FUN_1410370d4(void)

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
  if (DAT_14cab5d08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_14765bed7;
    local_40 = &LAB_145ddf1e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneDeferredComponentMovementSystem",
                  &DAT_14cab5d08,&DAT_14765bed6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5d08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410371ba FUN_1410371ba body=3197 status=ok
// SIG undefined FUN_1410371ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410371ba(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  double *pdVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar44;
  double dVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar46;
  double dVar47;
  double dVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_348 [32];
  double *local_328;
  undefined1 local_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
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
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar7 = *(longlong *)(param_4 + 8);
  if ((lVar7 == 0) && (lVar7 = param_2[0x22], lVar7 == 0)) {
    (**(code **)(*param_2 + 1000))(param_2);
    lVar7 = param_2[0x22];
    puVar12 = (undefined8 *)local_2d8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar12 = *param_3;
      param_3 = param_3 + 1;
      puVar12 = puVar12 + 1;
    }
    if (lVar7 == 0) goto LAB_141037272;
  }
  else {
    puVar12 = (undefined8 *)local_2d8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar12 = *param_3;
      param_3 = param_3 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  lVar7 = *(longlong *)(lVar7 + 0x1c8);
  if (lVar7 != 0) {
    auVar42 = *(undefined1 (*) [16])(lVar7 + 0x1b0);
    dVar33 = auVar42._0_8_;
    dVar14 = auVar42._8_8_;
    dVar32 = *(double *)(lVar7 + 0x1c0);
    pdVar8 = *(double **)(lVar7 + 0x230);
    if (pdVar8 == (double *)0x0) {
      pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
      dVar19 = DAT_14c8463d8;
      *pdVar8 = DAT_14c8463d0;
      pdVar8[1] = dVar19;
      dVar19 = DAT_14c8463e8;
      pdVar8[2] = DAT_14c8463e0;
      pdVar8[3] = dVar19;
      dVar19 = DAT_14c846500;
      pdVar8[4] = DAT_14c8464f8;
      pdVar8[5] = dVar19;
      pdVar8[6] = DAT_14c846508;
      *(double **)(lVar7 + 0x230) = pdVar8;
    }
    auVar48 = _DAT_1499387d0;
    if ((((pdVar8[4] != dVar33) || (NAN(pdVar8[4]) || NAN(dVar33))) || (pdVar8[5] != dVar14)) ||
       (((NAN(pdVar8[5]) || NAN(dVar14) || (pdVar8[6] != dVar32)) || (NAN(pdVar8[6]) || NAN(dVar32))
        ))) {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = dVar32;
      dVar19 = (double)DAT_1499387d0;
      dVar25 = DAT_1499387d0._8_8_;
      auVar42 = divpd(auVar42,_DAT_1499387d0);
      auVar26 = divpd(auVar27,_DAT_1499387d0);
      auVar42 = roundpd(auVar42,auVar42,3);
      auVar26 = roundpd(auVar26,auVar26,3);
      auVar36._0_8_ = dVar33 - auVar42._0_8_ * dVar19;
      auVar36._8_8_ = dVar14 - auVar42._8_8_ * dVar25;
      auVar28._0_8_ = dVar32 - auVar26._0_8_ * dVar19;
      auVar28._8_8_ = 0.0 - auVar26._8_8_ * dVar25;
      auVar34._0_8_ = auVar36._0_8_ + dVar19;
      auVar34._8_8_ = auVar36._8_8_ + dVar25;
      auVar24._0_8_ = auVar28._0_8_ + dVar19;
      auVar24._8_8_ = auVar28._8_8_ + dVar25;
      auVar26._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
      auVar26._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
      auVar42 = blendvpd(auVar34,auVar36,auVar26);
      auVar35._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
      auVar35._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
      auVar26 = blendvpd(auVar24,auVar28,auVar35);
      auVar29._0_8_ = auVar42._0_8_ + -360.0;
      auVar29._8_8_ = auVar42._8_8_ + -360.0;
      auVar15._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
      auVar15._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
      auVar35 = blendvpd(auVar42,auVar29,auVar15);
      auVar16._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
      auVar16._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
      auVar42._8_8_ = auVar26._8_8_ + 0.0;
      auVar42._0_8_ = auVar26._0_8_ + -360.0;
      auVar42 = blendvpd(auVar26,auVar42,auVar16);
      *(undefined1 (*) [16])(pdVar8 + 4) = auVar35;
      dVar32 = auVar42._0_8_;
      pdVar8[6] = dVar32;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = dVar32;
      auVar42 = divpd(auVar35,auVar48);
      auVar48 = divpd(auVar37,auVar48);
      auVar42 = roundpd(auVar42,auVar42,3);
      auVar48 = roundpd(auVar48,auVar48,3);
      dVar30 = (auVar35._0_8_ - auVar42._0_8_ * dVar19) * 0.008726646259971648;
      dVar31 = (auVar35._8_8_ - auVar42._8_8_ * dVar25) * 0.008726646259971648;
      dVar23 = (dVar32 - auVar48._0_8_ * dVar19) * 0.008726646259971648;
      dVar46 = (0.0 - auVar48._8_8_ * dVar25) * 0.008726646259971648;
      dVar32 = sin(dVar30);
      dVar33 = sin(dVar31);
      dVar14 = sin(dVar23);
      sin(dVar46);
      dVar19 = cos(dVar30);
      dVar25 = cos(dVar31);
      dVar30 = cos(dVar23);
      cos(dVar46);
      *pdVar8 = dVar32 * dVar33 * dVar30 - dVar19 * dVar25 * dVar14;
      pdVar8[1] = -(dVar32 * dVar25 * dVar30) - dVar19 * dVar33 * dVar14;
      pdVar8[2] = -(dVar25 * dVar32 * dVar14) + dVar33 * dVar19 * dVar30;
      pdVar8[3] = dVar33 * dVar32 * dVar14 + dVar25 * dVar19 * dVar30;
    }
    local_158 = *pdVar8;
    dStack_150 = pdVar8[1];
    local_148 = pdVar8[2];
    dStack_140 = pdVar8[3];
    local_328 = &local_158;
    local_320 = 0;
    lVar11 = lVar7;
    uVar5 = FUN_140092404(lVar7,*(undefined8 *)(lVar7 + 0x120),*(undefined8 *)(lVar7 + 0x128),0);
    auVar42 = *(undefined1 (*) [16])(lVar7 + 0x280);
    auVar48 = *(undefined1 (*) [16])(lVar7 + 0x290);
    auVar1._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar42._8_8_));
    auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar42._0_8_));
    uVar6 = movmskpd(uVar5,auVar1);
    auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar48._8_8_));
    auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar48._0_8_));
    iVar9 = movmskpd((int)lVar11,auVar2);
    uVar10 = iVar9 << 2 | uVar6;
    local_318 = _DAT_14c8464d0;
    dVar32 = DAT_14c846480;
    dVar33 = DAT_14c846488;
    dVar14 = DAT_14c8464c0;
    dVar19 = DAT_14c8464c8;
    dVar25 = DAT_14c846490;
    dVar30 = DAT_14c846498;
    dVar31 = DAT_14c8464b0;
    dVar23 = DAT_14c8464b8;
    dVar46 = DAT_14c8464a0;
    dVar39 = DAT_14c8464a8;
    if (uVar10 != 0) {
      auVar35 = divpd(_DAT_149934d80,auVar42);
      auVar26 = divpd(ZEXT816(0x3ff0000000000000),auVar48);
      dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar42._0_8_)) & auVar35._0_8_);
      dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar42._8_8_)) & auVar35._8_8_);
      dVar31 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar48._0_8_)) & auVar26._0_8_);
      local_318._8_8_ = 0;
      local_318._0_8_ = dVar31;
      dVar25 = *(double *)(lVar7 + 0x250) * -1.0;
      dVar30 = *(double *)(lVar7 + 600) * 1.0;
      dVar32 = -*(double *)(lVar7 + 0x240);
      dVar33 = -*(double *)(lVar7 + 0x248);
      dVar46 = *(double *)(lVar7 + 0x260) * dVar14;
      dVar50 = *(double *)(lVar7 + 0x268) * dVar19;
      dVar31 = *(double *)(lVar7 + 0x270) * dVar31;
      dVar39 = dVar50 * dVar32 - dVar33 * dVar46;
      dVar44 = dVar31 * dVar33 - dVar25 * dVar50;
      dVar45 = dVar46 * dVar25 - dVar32 * dVar31;
      dVar44 = dVar44 + dVar44;
      dVar45 = dVar45 + dVar45;
      dVar39 = dVar39 + dVar39;
      dVar31 = 0.0 - (dVar30 * dVar39 + dVar31 + (dVar45 * dVar32 - dVar44 * dVar33));
      dVar23 = 0.0;
      dVar46 = 0.0 - ((dVar39 * dVar33 - dVar45 * dVar25) + dVar30 * dVar44 + dVar46);
      dVar39 = 0.0 - (dVar39 * *(double *)(lVar7 + 0x240) + dVar25 * dVar44 +
                     dVar30 * dVar45 + dVar50);
    }
    dVar45 = local_298._0_8_;
    dVar44 = local_298._8_8_;
    auVar48._8_8_ = dStack_280;
    auVar48._0_8_ = local_288;
    auVar41._8_8_ = dVar19;
    auVar41._0_8_ = dVar14;
    auVar42 = minpd(auVar41,local_298);
    auVar48 = minpd(local_318,auVar48);
    auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    iVar9 = movmskpd(uVar6,auVar43);
    auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
    auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
    uVar6 = movmskpd(uVar10,auVar49);
    uVar4 = local_318._8_8_;
    uVar3 = local_318._0_8_;
    if ((uVar6 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar50 = dVar33 * (double)local_2c8._0_8_ * -1.0 +
               dVar25 * (double)local_2d8._8_8_ +
               dVar30 * (double)local_2d8._0_8_ * 1.0 + dVar32 * (double)local_2c8._8_8_;
      dVar47 = dVar32 * (double)local_2c8._0_8_ * 1.0 +
               dVar30 * (double)local_2d8._8_8_ +
               dVar25 * (double)local_2d8._0_8_ * -1.0 + dVar33 * (double)local_2c8._8_8_;
      auVar38._0_8_ =
           dVar30 * (double)local_2c8._0_8_ * 1.0 +
           (((double)local_2d8._0_8_ * dVar33 * 1.0 + dVar25 * (double)local_2c8._8_8_) -
           dVar32 * (double)local_2d8._8_8_);
      auVar38._8_8_ =
           dVar25 * (double)local_2c8._0_8_ * -1.0 +
           (((double)local_2d8._0_8_ * dVar32 * -1.0 + dVar30 * (double)local_2c8._8_8_) -
           dVar33 * (double)local_2d8._8_8_);
      dVar46 = dVar46 * dVar45;
      dVar39 = dVar39 * dVar44;
      dVar31 = dVar31 * local_288;
      dVar23 = dVar23 * dStack_280;
      dVar32 = dVar39 * (double)local_2d8._0_8_ - dVar46 * (double)local_2d8._8_8_;
      dVar30 = dVar31 * (double)local_2d8._8_8_ - dVar39 * (double)local_2c8._0_8_;
      dVar25 = dVar46 * (double)local_2c8._0_8_ - dVar31 * (double)local_2d8._0_8_;
      dVar33 = dVar23 * (double)local_2c8._8_8_ - dVar23 * (double)local_2c8._8_8_;
      dVar30 = dVar30 + dVar30;
      dVar25 = dVar25 + dVar25;
      dVar32 = dVar32 + dVar32;
      dVar33 = dVar33 + dVar33;
      local_f8 = (dVar32 * (double)local_2d8._8_8_ - (double)local_2c8._0_8_ * dVar25) +
                 (double)local_2c8._8_8_ * dVar30 + dVar46 + local_2b8;
      dStack_f0 = (dVar30 * (double)local_2c8._0_8_ - dVar32 * (double)local_2d8._0_8_) +
                  (double)local_2c8._8_8_ * dVar25 + dVar39 + dStack_2b0;
      local_e8 = (dVar25 * (double)local_2d8._0_8_ - (double)local_2d8._8_8_ * dVar30) +
                 (double)local_2c8._8_8_ * dVar32 + dVar31 + local_2a8;
      dStack_2a0 = (dVar33 * (double)local_2c8._8_8_ - dVar33 * (double)local_2c8._8_8_) +
                   (double)local_2c8._8_8_ * dVar33 + dVar23 + dStack_2a0;
    }
    else {
      dVar47 = (double)local_2d8._0_8_ + (double)local_2d8._0_8_;
      dVar51 = (double)local_2d8._8_8_ + (double)local_2d8._8_8_;
      dVar50 = (double)local_2c8._0_8_ + (double)local_2c8._0_8_;
      dVar52 = (double)local_2d8._0_8_ * dVar47;
      dVar53 = (double)local_2d8._8_8_ * dVar51;
      local_308 = dVar51 * (double)local_2c8._8_8_;
      dStack_300 = dVar47 * (double)local_2c8._8_8_;
      dVar40 = (double)local_318._0_8_ * local_288;
      local_188 = (1.0 - (dVar52 + dVar53)) * local_288;
      dVar23 = (0.0 - (dVar52 + dVar53)) * dStack_280;
      local_2e8._8_4_ = SUB84(dVar23,0);
      local_2e8._0_8_ = local_188;
      local_2e8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_198 = (local_308 + (double)local_2d8._0_8_ * dVar50) * local_288;
      dVar23 = (dStack_300 + (double)local_2d8._0_8_ * dVar47) * dStack_280;
      local_2f8._8_4_ = SUB84(dVar23,0);
      local_2f8._0_8_ = local_198;
      local_2f8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_1b8 = (dVar51 * (double)local_2d8._0_8_ - dVar50 * (double)local_2c8._8_8_) * dVar44;
      dStack_190 = (dVar50 * (double)local_2d8._8_8_ - dVar47 * (double)local_2c8._8_8_) * local_288
      ;
      local_1d8 = (1.0 - ((double)local_2c8._0_8_ * dVar50 + dVar53)) * dVar45;
      dStack_1b0 = (1.0 - ((double)local_2c8._0_8_ * dVar50 + dVar52)) * dVar44;
      dStack_1d0 = (dVar51 * (double)local_2d8._0_8_ + dVar50 * (double)local_2c8._8_8_) * dVar45;
      local_1a8 = (dVar50 * (double)local_2d8._8_8_ + dVar47 * (double)local_2c8._8_8_) * dVar44;
      local_1c8 = ((double)local_2d8._0_8_ * dVar50 - local_308) * dVar45;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_2b8;
      dStack_170 = dStack_2b0;
      local_168 = local_2a8;
      uStack_160 = 0x3ff0000000000000;
      dVar52 = dVar33 + dVar33;
      dVar47 = dVar25 + dVar25;
      dVar23 = dVar32 * (dVar32 + dVar32);
      local_208 = (1.0 - (dVar23 + dVar33 * dVar52)) * (double)local_318._0_8_;
      dVar51 = (dVar32 + dVar32) * dVar30;
      local_238 = (dVar52 * dVar32 - dVar47 * dVar30) * dVar19;
      dVar50 = (dVar47 * dVar33 - dVar51) * (double)local_318._0_8_;
      local_258 = (1.0 - (dVar25 * dVar47 + dVar33 * dVar52)) * dVar14;
      dStack_230 = (1.0 - (dVar25 * dVar47 + dVar23)) * dVar19;
      dStack_250 = (dVar52 * dVar32 + dVar47 * dVar30) * dVar14;
      local_228 = (dVar47 * dVar33 + dVar51) * dVar19;
      local_248 = (dVar32 * dVar47 - dVar52 * dVar30) * dVar14;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218._8_4_ = SUB84(dVar50,0);
      local_218._0_8_ = (dVar32 * dVar47 + dVar52 * dVar30) * (double)local_318._0_8_;
      local_218._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_1f8 = dVar46;
      dStack_1f0 = dVar39;
      local_1e8 = dVar31;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar42 = _DAT_149934d80;
      auVar17._8_8_ = -(ulonglong)(0.0 <= dVar19 * dVar44);
      auVar17._0_8_ = -(ulonglong)(0.0 <= dVar14 * dVar45);
      auVar48 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar17);
      uVar13 = -(ulonglong)(0.0 <= dVar40);
      dVar32 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar33 = auVar48._0_8_;
      local_148 = local_148 * dVar33;
      dStack_150 = dStack_150 * dVar33;
      local_158 = local_158 * dVar33;
      dVar33 = auVar48._8_8_;
      local_128 = local_128 * dVar33;
      local_130 = local_130 * dVar33;
      local_138 = dVar33 * local_138;
      local_108 = local_108 * dVar32;
      local_110 = local_110 * dVar32;
      local_118 = dVar32 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      auVar20._0_8_ = local_278 * local_278;
      auVar20._8_8_ = dStack_270 * dStack_270;
      dVar32 = local_268 * local_268 + auVar20._0_8_;
      dVar33 = dStack_260 * dStack_260 + auVar20._8_8_;
      auVar21._0_8_ = dVar32 + dVar33;
      auVar21._8_8_ = dVar32 + dVar33;
      auVar48 = sqrtpd(auVar20,auVar21);
      auVar42 = divpd(auVar42,auVar48);
      auVar22._0_8_ = auVar42._0_8_ * local_268;
      auVar22._8_8_ = auVar42._8_8_ * dStack_260;
      dVar50 = (double)((ulonglong)(local_278 * auVar42._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
      dVar47 = (double)((ulonglong)(dStack_270 * auVar42._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
      auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar18);
      dStack_2a0 = 0.0;
    }
    local_288 = (double)uVar3 * local_288;
    dStack_280 = (double)uVar4 * dStack_280;
    local_2d8._8_4_ = SUB84(dVar47,0);
    local_2d8._0_8_ = dVar50;
    local_2d8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    local_298._8_4_ = SUB84(dVar19 * dVar44,0);
    local_298._0_8_ = dVar14 * dVar45;
    local_298._12_4_ = (int)((ulonglong)(dVar19 * dVar44) >> 0x20);
    local_2c8 = auVar38;
    local_2b8 = local_f8;
    dStack_2b0 = dStack_f0;
    local_2a8 = local_e8;
  }
LAB_141037272:
  FUN_141037e38(param_1,param_2,local_2d8,param_4);
  if ((local_d0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141037e38 FUN_141037e38 body=5046 status=ok
// SIG undefined FUN_141037e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_141037e38(longlong param_1,longlong *param_2,ulonglong *param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar6;
  undefined4 extraout_EAX;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  code *pcVar16;
  code cVar17;
  byte bVar18;
  ulonglong *puVar19;
  undefined2 *puVar20;
  int iVar21;
  code **ppcVar22;
  uint uVar23;
  longlong lVar24;
  bool bVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar50;
  undefined1 auVar49 [16];
  double dVar51;
  undefined1 auStack_3e8 [32];
  code *local_3c8;
  uint local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  wchar_t *local_3a8;
  code *local_3a0;
  undefined1 *local_398;
  code **local_390;
  code *local_388;
  code *local_380;
  byte local_378;
  undefined7 uStack_377;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  double local_358;
  double local_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  undefined1 local_320 [24];
  code *local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined2 *local_2a8;
  undefined2 *local_2a0;
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
  undefined8 local_208;
  undefined8 uStack_200;
  undefined2 *local_1f8;
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
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  code *local_178;
  double dStack_170;
  undefined1 local_168 [16];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((param_2 != (longlong *)0x0) && ((*(uint *)((longlong)param_2 + 0xd4) & 0x2000001) == 0)) {
    lVar9 = *(longlong *)(param_1 + 0x30);
    if (DAT_14cac9ca8 == 0) {
      local_390 = &local_178;
      local_178 = FUN_141030f22;
      local_380 = FUN_14081d0ea;
      local_388 = FUN_14081d0ea;
      local_398 = &LAB_1478c0a72;
      local_3a0 = (code *)&LAB_1417b2375;
      local_3a8 = L"Engine";
      uStack_3b0 = 0x1000000000;
      local_3b8 = CONCAT44(local_3b8._4_4_,0x10000004);
      local_3c0 = 8;
      local_3c8 = (code *)CONCAT44(local_3c8._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_141037f0e;
    }
    iVar7 = *(int *)(DAT_14cac9ca8 + 0x38);
    if ((iVar7 <= (int)param_2[7]) &&
       (*(longlong *)(param_2[6] + (longlong)iVar7 * 8) == DAT_14cac9ca8 + 0x30)) {
      plVar15 = (longlong *)param_4[1];
      if ((plVar15 == (longlong *)0x0) || ((longlong *)plVar15[2] == param_2)) {
        if ((((*(byte *)(param_1 + 0x154) & 2) == 0) ||
            ((*(byte *)((longlong)param_4 + 0x32) & 8) != 0)) &&
           ((*(byte *)(param_1 + 0x155) & 0x20) == 0)) {
          if (param_3 == (ulonglong *)0x0) {
LAB_14103808b:
            if (((*(byte *)((longlong)param_4 + 0x32) & 0x10) == 0) || (*param_4 == 0))
            goto LAB_141037fb3;
          }
          else {
            auVar39._8_8_ = -(ulonglong)((double)(param_3[1] & 0x7ff0000000000000) == INFINITY);
            auVar39._0_8_ = -(ulonglong)((double)(*param_3 & 0x7ff0000000000000) == INFINITY);
            iVar21 = movmskpd((int)(DAT_14cac9ca8 + 0x30),auVar39);
            auVar38._8_8_ = -(ulonglong)((double)(param_3[3] & 0x7ff0000000000000) == INFINITY);
            auVar38._0_8_ = -(ulonglong)((double)(param_3[2] & 0x7ff0000000000000) == INFINITY);
            uVar13 = movmskpd(iVar7,auVar38);
            if ((uVar13 & 0x3fffffff) == 0 && iVar21 == 0) {
              auVar43._8_8_ = -(ulonglong)((double)(param_3[5] & 0x7ff0000000000000) == INFINITY);
              auVar43._0_8_ = -(ulonglong)((double)(param_3[4] & 0x7ff0000000000000) == INFINITY);
              iVar7 = movmskpd(iVar21,auVar43);
              auVar44._8_8_ = -(ulonglong)((double)(param_3[7] & 0x7ff0000000000000) == INFINITY);
              auVar44._0_8_ = -(ulonglong)((double)(param_3[6] & 0x7ff0000000000000) == INFINITY);
              uVar13 = movmskpd(0,auVar44);
              if ((uVar13 & 0x3fffffff) == 0 && iVar7 == 0) {
                auVar41._8_8_ = -(ulonglong)((double)(param_3[9] & 0x7ff0000000000000) == INFINITY);
                auVar41._0_8_ = -(ulonglong)((double)(param_3[8] & 0x7ff0000000000000) == INFINITY);
                iVar7 = movmskpd(iVar7,auVar41);
                auVar35._8_8_ =
                     -(ulonglong)((double)(param_3[0xb] & 0x7ff0000000000000) == INFINITY);
                auVar35._0_8_ = -(ulonglong)((double)(param_3[10] & 0x7ff0000000000000) == INFINITY)
                ;
                uVar13 = movmskpd(0,auVar35);
                if ((uVar13 & 0x3fffffff) == 0 && iVar7 == 0) goto LAB_14103808b;
              }
            }
          }
        }
      }
      else if ((*(byte *)((longlong)param_4 + 0x32) & 2) != 0) {
LAB_141037fb3:
        lVar24 = param_4[4];
        if ((lVar24 == 0) && (lVar8 = param_4[2], lVar24 = lVar9, lVar8 != 0)) {
          if (DAT_14cae8b20 == 0) {
            local_390 = &local_178;
            local_178 = (code *)&LAB_14355090c;
            local_380 = FUN_14081d0ea;
            local_388 = FUN_14081d0ea;
            local_398 = &LAB_147b8e16d;
            local_3a0 = (code *)&LAB_140810a38;
            local_3a8 = L"Engine";
            uStack_3b0 = 0x800000000;
            local_3b8 = CONCAT44(local_3b8._4_4_,0x10000000);
            local_3c0 = 8;
            local_3c8 = (code *)CONCAT44(local_3c8._4_4_,0x3f0);
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar9 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_390 = &local_178;
            local_178 = FUN_1449e2820;
            local_380 = FUN_14081d0ea;
            local_388 = FUN_14081d0ea;
            local_398 = &LAB_1468c5283;
            local_3a0 = FUN_142809da0;
            local_3a8 = L"Engine";
            uStack_3b0 = 0x400000000;
            local_3b8 = CONCAT44(local_3b8._4_4_,0x10000000);
            local_3c0 = 8;
            local_3c8 = (code *)CONCAT44(local_3c8._4_4_,0x50);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar8 = *(longlong *)(lVar8 + 0x20);
          if (lVar8 == 0) {
            lVar24 = 0;
          }
          else {
            iVar7 = *(int *)(lVar9 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar7) ||
                 (lVar24 = lVar8,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
                 lVar9 + 0x30)) {
                lVar24 = 0;
              }
            } while ((lVar24 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
          }
          plVar15 = (longlong *)param_4[1];
        }
        if ((plVar15 == (longlong *)0x0) &&
           (plVar15 = (longlong *)param_2[0x22], plVar15 == (longlong *)0x0)) {
          (**(code **)(*param_2 + 1000))(param_2);
          plVar15 = (longlong *)param_2[0x22];
        }
        puVar20 = (undefined2 *)*param_4;
        bVar18 = *(byte *)((longlong)param_4 + 0x32) & 0x10;
        local_2a0 = puVar20;
        if (puVar20 == (undefined2 *)0x0) {
          if ((*(uint *)(plVar15 + 1) & 0x10) == 0) {
            local_278 = (double)plVar15[3];
            FUN_14029eeae(&local_278,&local_178);
            pcVar10 = local_178;
            if (dStack_170._0_4_ == 0) {
              pcVar10 = (code *)&DAT_149dfb77a;
            }
            FUN_1446f470e(&local_1f8,pcVar10,1);
            if (local_178 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            local_1f8 = (undefined2 *)param_2[3];
          }
          lVar9 = plVar15[2];
          local_2a8 = local_1f8;
LAB_1410382bf:
          local_3c8 = (code *)CONCAT71(local_3c8._1_7_,bVar18 != 0);
          FUN_140af9eb4(&local_2a0,lVar24,lVar9,local_2a8);
        }
        else {
          local_3c0 = 0;
          local_3c8 = (code *)((ulonglong)local_3c8 & 0xffffffff00000000);
          lVar9 = FUN_140be85e0(0,lVar24,puVar20,0);
          if (lVar9 != 0) {
            bVar5 = *(byte *)((longlong)param_4 + 0x33);
            if (1 < bVar5 - 1) {
              if (bVar5 != 0) goto joined_r0x00014103818b;
              FUN_144750a86(lVar24,&local_178,0,0);
              pcVar10 = (code *)&DAT_149dfb77a;
              if (dStack_170._0_4_ != 0) {
                pcVar10 = local_178;
              }
              FUN_1400021e4(&local_2a0,&local_1f8);
              puVar20 = &DAT_149dfb77a;
              if (dStack_1f0._0_4_ != 0) {
                puVar20 = local_1f8;
              }
              local_3c8 = pcVar10;
              FUN_140033559(".\\Runtime/Engine/Private/LevelActor.cpp",0x23e,
                            L"Cannot generate unique name for \'%s\' in level \'%s\'.",puVar20);
              if (local_1f8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_178 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            goto LAB_141037f0e;
          }
          local_378 = bVar18;
          bVar5 = FUN_1417dd0a0(puVar20);
          if (bVar18 >> 4 != bVar5) {
            bVar5 = *(byte *)((longlong)param_4 + 0x33);
            bVar18 = local_378;
joined_r0x00014103818b:
            local_378 = bVar18;
            if (bVar5 == 3) {
              local_1f8 = puVar20;
              cVar6 = FUN_1417dd0a0(puVar20);
              if (cVar6 == '\0') {
                FUN_14029eeae(&local_1f8);
                bVar18 = local_378;
                pcVar10 = local_178;
                if (dStack_170._0_4_ == 0) {
                  pcVar10 = (code *)&DAT_149dfb77a;
                }
                FUN_1446f470e(&local_2a8,pcVar10,1);
                if (local_178 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                FUN_14029eeae(&local_1f8);
                iVar7 = dStack_170._0_4_ + -1;
                if (dStack_170._0_4_ == 0) {
                  iVar7 = 0;
                }
                iVar21 = 0x18;
                if (0x18 < iVar7) {
                  iVar21 = iVar7;
                }
                uVar14 = iVar21 - 0x18;
                uVar23 = iVar7 - uVar14;
                uVar13 = 0x18;
                if ((int)uVar23 < 0x18) {
                  uVar13 = uVar23;
                }
                if ((int)uVar13 < 1) {
                  uVar13 = 0;
                }
                if (0 < (int)uVar23) {
                  iVar7 = dStack_170._0_4_ - (uVar13 + uVar14);
                  if (iVar7 != 0) {
                    memmove(local_178 + (ulonglong)uVar14 * 2,
                            local_178 + (ulonglong)uVar14 * 2 + (ulonglong)uVar13 * 2,
                            (longlong)iVar7 * 2);
                  }
                  dStack_170._0_4_ = dStack_170._0_4_ - uVar13;
                }
                pcVar10 = local_178;
                pcVar16 = (code *)&DAT_149dfb77a;
                if (dStack_170._0_4_ != 0) {
                  pcVar16 = local_178;
                }
                local_178 = (code *)0x0;
                dStack_170 = 0.0;
                FUN_1446f470e(&local_2a8,pcVar16,1);
                if (pcVar10 != (code *)0x0) {
                  FUN_1400020a8(pcVar10);
                }
                bVar18 = local_378;
                if (local_178 != (code *)0x0) {
                  FUN_1400020a8();
                  bVar18 = local_378;
                }
              }
              lVar9 = plVar15[2];
              goto LAB_1410382bf;
            }
          }
        }
        cVar6 = (**(code **)(*plVar15 + 0x100))(plVar15);
        if ((cVar6 != '\0') || (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 != '\0')) {
          puVar19 = &DAT_14c846480;
          if (param_3 != (ulonglong *)0x0) {
            puVar19 = param_3;
          }
          ppcVar22 = &local_308;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *ppcVar22 = (code *)*puVar19;
            puVar19 = puVar19 + 1;
            ppcVar22 = ppcVar22 + 1;
          }
          cVar17 = *(code *)(param_4 + 6);
          if ((*(byte *)((longlong)param_4 + 0x32) & 2) == 0) {
            if (cVar17 == (code)0x0) {
LAB_14103833e:
              cVar17 = *(code *)((longlong)plVar15 + 0x17a);
            }
            if (cVar17 == (code)0x4) {
              lVar8 = plVar15[0x39];
              if (lVar8 == 0) {
                local_168._8_8_ = dStack_2f0;
                local_168._0_8_ = local_2f8;
                dStack_110 = dStack_2e0;
                local_328 = local_2d8;
              }
              else {
                auVar39 = *(undefined1 (*) [16])(lVar8 + 0x1b0);
                auVar38 = divpd(auVar39,_DAT_1499387d0);
                auVar42._8_8_ = 0;
                auVar42._0_8_ = *(double *)(lVar8 + 0x1c0);
                auVar43 = divpd(auVar42,_DAT_1499387d0);
                auVar38 = roundpd(auVar38,auVar38,3);
                auVar43 = roundpd(auVar43,auVar43,3);
                dVar30 = (auVar39._0_8_ - auVar38._0_8_ * (double)DAT_1499387d0) *
                         0.008726646259971648;
                dVar31 = (auVar39._8_8_ - auVar38._8_8_ * DAT_1499387d0._8_8_) *
                         0.008726646259971648;
                dVar32 = (*(double *)(lVar8 + 0x1c0) - auVar43._0_8_ * (double)DAT_1499387d0) *
                         0.008726646259971648;
                dVar3 = (0.0 - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                local_368 = *(undefined1 (*) [16])(lVar8 + 0x198);
                local_378 = (byte)*(undefined8 *)(lVar8 + 0x1a8);
                uStack_377 = (undefined7)((ulonglong)*(undefined8 *)(lVar8 + 0x1a8) >> 8);
                uStack_370 = 0;
                auVar39 = *(undefined1 (*) [16])(lVar8 + 0x1c8);
                dVar51 = auVar39._0_8_;
                dVar2 = auVar39._8_8_;
                dVar34 = *(double *)(lVar8 + 0x1d8);
                dVar27 = sin(dVar30);
                uVar12 = (undefined4)lVar9;
                dVar28 = sin(dVar31);
                dVar29 = sin(dVar32);
                sin(dVar3);
                dVar30 = cos(dVar30);
                dVar31 = cos(dVar31);
                dVar32 = cos(dVar32);
                cos(dVar3);
                dVar3 = -(dVar31 * dVar27 * dVar29) + dVar28 * dVar30 * dVar32;
                dVar1 = dVar28 * dVar27 * dVar29 + dVar31 * dVar30 * dVar32;
                dVar33 = dVar27 * dVar28 * dVar32 - dVar30 * dVar31 * dVar29;
                dVar27 = -(dVar27 * dVar31 * dVar32) - dVar30 * dVar28 * dVar29;
                dVar30 = local_2c8._0_8_;
                dVar32 = local_2c8._8_8_;
                dVar31 = local_2b8._0_8_;
                auVar39 = minpd(auVar39,local_2c8);
                auVar45._8_8_ = 0;
                auVar45._0_8_ = dVar34;
                auVar38 = minpd(auVar45,local_2b8);
                auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                iVar7 = movmskpd(extraout_EAX,auVar40);
                auVar46._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
                auVar46._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
                uVar13 = movmskpd(uVar12,auVar46);
                if ((uVar13 & 0x3fffffff) == 0 && iVar7 == 0) {
                  dVar28 = dVar3 * (double)local_308;
                  local_168._0_8_ =
                       dVar1 * local_2f8 * 1.0 +
                       (((double)local_308 * dVar27 * 1.0 + dVar3 * dStack_2f0) -
                       dVar33 * dStack_300);
                  local_168._8_8_ =
                       dVar3 * local_2f8 * -1.0 +
                       (((double)local_308 * dVar33 * -1.0 + dVar1 * dStack_2f0) -
                       dVar27 * dStack_300);
                  dVar30 = (double)local_368._0_8_ * dVar30;
                  dVar32 = (double)local_368._8_8_ * dVar32;
                  dVar31 = (double)CONCAT71(uStack_377,local_378) * dVar31;
                  dVar34 = dVar32 * (double)local_308 - dVar30 * dStack_300;
                  dVar51 = dVar31 * dStack_300 - dVar32 * local_2f8;
                  dVar2 = dVar30 * local_2f8 - dVar31 * (double)local_308;
                  dVar51 = dVar51 + dVar51;
                  dVar2 = dVar2 + dVar2;
                  dVar34 = dVar34 + dVar34;
                  local_2e8 = (dVar34 * dStack_300 - local_2f8 * dVar2) +
                              dStack_2f0 * dVar51 + dVar30 + local_2e8;
                  dStack_110 = (dVar51 * local_2f8 - dVar34 * (double)local_308) +
                               dStack_2f0 * dVar2 + dVar32 + dStack_2e0;
                  local_328 = (dVar2 * (double)local_308 - dStack_300 * dVar51) +
                              dStack_2f0 * dVar34 + dVar31 + local_2d8;
                  local_308 = (code *)(dVar27 * local_2f8 * -1.0 +
                                      dVar3 * dStack_300 +
                                      dVar1 * (double)local_308 * 1.0 + dVar33 * dStack_2f0);
                  dStack_300 = dVar33 * local_2f8 * 1.0 +
                               dVar1 * dStack_300 + dVar28 * -1.0 + dVar27 * dStack_2f0;
                }
                else {
                  dVar29 = dStack_300 + dStack_300;
                  dVar48 = local_2f8 + local_2f8;
                  dVar28 = (double)local_308 * ((double)local_308 + (double)local_308);
                  dVar50 = ((double)local_308 + (double)local_308) * dStack_2f0;
                  local_1d8 = (dVar29 * (double)local_308 - dVar48 * dStack_2f0) * dVar32;
                  dStack_1b0 = (dVar48 * dStack_300 - dVar50) * dVar31;
                  local_348 = dVar51 * dVar30;
                  dStack_340 = dVar2 * dVar32;
                  local_1f8 = (undefined2 *)
                              ((1.0 - (local_2f8 * dVar48 + dStack_300 * dVar29)) * dVar30);
                  dStack_1d0 = (1.0 - (local_2f8 * dVar48 + dVar28)) * dVar32;
                  dStack_1f0 = (dVar29 * (double)local_308 + dVar48 * dStack_2f0) * dVar30;
                  local_1c8 = (dVar48 * dStack_300 + dVar50) * dVar32;
                  local_1b8 = (dVar29 * dStack_2f0 + (double)local_308 * dVar48) * dVar31;
                  local_1e8 = ((double)local_308 * dVar48 - dVar29 * dStack_2f0) * dVar30;
                  uStack_1e0 = 0;
                  local_1a8 = (1.0 - (dVar28 + dStack_300 * dVar29)) * dVar31;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = local_2e8;
                  dStack_190 = dStack_2e0;
                  local_188 = local_2d8;
                  uStack_180 = 0x3ff0000000000000;
                  dVar32 = dVar27 + dVar27;
                  dVar28 = dVar3 + dVar3;
                  dVar30 = dVar33 * (dVar33 + dVar33);
                  dVar29 = (dVar33 + dVar33) * dVar1;
                  local_258 = (dVar32 * dVar33 - dVar28 * dVar1) * dVar2;
                  dStack_230 = (dVar28 * dVar27 - dVar29) * dVar34;
                  local_278 = (1.0 - (dVar3 * dVar28 + dVar27 * dVar32)) * dVar51;
                  dStack_250 = (1.0 - (dVar3 * dVar28 + dVar30)) * dVar2;
                  dStack_270 = (dVar32 * dVar33 + dVar28 * dVar1) * dVar51;
                  local_248 = (dVar28 * dVar27 + dVar29) * dVar2;
                  local_238 = (dVar32 * dVar1 + dVar33 * dVar28) * dVar34;
                  local_268 = (dVar33 * dVar28 - dVar32 * dVar1) * dVar51;
                  uStack_260 = 0;
                  uStack_240 = 0;
                  local_228 = (1.0 - (dVar30 + dVar27 * dVar32)) * dVar34;
                  uStack_220 = 0;
                  local_218 = (double)local_368._0_8_;
                  dStack_210 = (double)local_368._8_8_;
                  local_208 = CONCAT71(uStack_377,local_378);
                  uStack_200 = 0x3ff0000000000000;
                  FUN_1447fea8d(&local_178);
                  auVar39 = _DAT_149934d80;
                  local_350 = (double)local_168._0_8_;
                  local_368 = local_2b8;
                  dVar32 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                           (double)local_178 * (double)local_178 + dStack_170 * dStack_170;
                  dVar51 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                  local_358 = local_128;
                  dVar30 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                  uVar26 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
                  dVar32 = (double)(~uVar26 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar32)) & uVar26);
                  uVar26 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
                  dVar51 = (double)(~uVar26 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar51)) & uVar26);
                  local_378 = 0;
                  uStack_377 = 0;
                  uStack_370 = 0;
                  uVar26 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
                  dVar30 = (double)(~uVar26 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar30)) & uVar26);
                  auVar36._8_8_ = -(ulonglong)(0.0 <= dStack_340);
                  auVar36._0_8_ = -(ulonglong)(0.0 <= local_348);
                  auVar38 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar36);
                  uVar26 = -(ulonglong)(0.0 <= dVar34 * dVar31);
                  dVar34 = (double)(~uVar26 & 0xbff0000000000000 |
                                   (ulonglong)((uint)(uVar26 >> 0x20) & 0x3ff00000) << 0x20);
                  dVar31 = auVar38._0_8_;
                  local_178 = (code *)((double)local_178 * dVar32 * dVar31);
                  dStack_170 = dStack_170 * dVar32 * dVar31;
                  local_168._0_8_ = dVar32 * (double)local_168._0_8_ * dVar31;
                  dVar31 = auVar38._8_8_;
                  local_148 = dVar51 * local_148 * dVar31;
                  local_150 = local_150 * dVar51 * dVar31;
                  local_158 = dVar31 * local_158 * dVar51;
                  local_128 = dVar30 * local_128 * dVar34;
                  local_130 = local_130 * dVar30 * dVar34;
                  local_138 = dVar34 * local_138 * dVar30;
                  FUN_14481fd10(&local_298,&local_178);
                  dVar34 = local_288 * local_288 + local_298 * local_298;
                  dVar30 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                  auVar47._0_8_ = dVar34 + dVar30;
                  auVar47._8_8_ = dVar34 + dVar30;
                  auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
                  auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
                  auVar38 = sqrtpd(auVar47,auVar47);
                  auVar39 = divpd(auVar39,auVar38);
                  auVar49._0_8_ = auVar39._0_8_ * local_288;
                  auVar49._8_8_ = auVar39._8_8_ * dStack_280;
                  uStack_370 = 0x3ff0000000000000;
                  auVar4._1_7_ = uStack_377;
                  auVar4[0] = local_378;
                  auVar4._8_8_ = 0x3ff0000000000000;
                  local_168 = blendvpd(auVar4,auVar49,auVar37);
                  local_2e8 = local_118;
                  local_328 = local_108;
                  local_308 = (code *)((ulonglong)(local_298 * auVar39._0_8_) &
                                      -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_));
                  dStack_300 = (double)((ulonglong)(dStack_290 * auVar39._8_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
                }
              }
              local_178 = local_308;
              dStack_170 = dStack_300;
              FUN_1448052ee(&local_178,local_320);
              local_338._8_4_ = SUB84(dStack_110,0);
              local_338._0_8_ = local_2e8;
              local_338._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
              local_3c8 = (code *)0x0;
              cVar6 = FUN_140c59c06(param_1,plVar15,local_338,local_320);
              cVar17 = (code)0x4;
              if (cVar6 != '\0') goto LAB_141037f0e;
            }
          }
          else {
            if (cVar17 == (code)0x0) goto LAB_14103833e;
            if (cVar17 == (code)0x3) {
              cVar17 = (code)0x2;
            }
            else if (cVar17 == (code)0x4) {
              cVar17 = (code)0x1;
            }
          }
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_3c0 = local_3c0 & 0xffffff00;
          local_3c8 = (code *)plVar15;
          pcVar10 = (code *)FUN_1417bcceb(lVar24,param_2,local_2a0,
                                          *(undefined4 *)((longlong)param_4 + 0x34));
          if (param_4[5] != 0) {
            uVar13 = *(uint *)(param_4[5] + 0xc);
            *(uint *)(pcVar10 + 0x1e8) = uVar13;
            if ((int)uVar13 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar7 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar21 = DAT_14c964868 + 1;
              bVar25 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar25) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar21);
              }
              LOCK();
              iVar7 = *(int *)(lVar9 + 0x10);
              bVar25 = iVar7 == 0;
              if (bVar25) {
                *(int *)(lVar9 + 0x10) = iVar21;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar25) {
                iVar7 = iVar21;
              }
            }
            *(int *)(pcVar10 + 0x1ec) = iVar7;
          }
          pcVar16 = (code *)param_4[8];
          if (pcVar16 != (code *)0x0) {
            plVar15 = param_4 + 0xc;
            if ((longlong *)param_4[10] != (longlong *)0x0) {
              plVar15 = (longlong *)param_4[10];
            }
            local_178 = pcVar10;
            uVar11 = (**(code **)(*plVar15 + 8))();
            (*pcVar16)(uVar11,&local_178);
          }
          FUN_1417dd412(lVar24,pcVar10,0);
          pcVar10[0x17a] = cVar17;
          FUN_1400da9ba(param_1 + 0x3e0,pcVar10);
          bVar18 = *(byte *)((longlong)param_4 + 0x32);
          uStack_3b0 = CONCAT71(uStack_3b0._1_7_,*(undefined1 *)((longlong)param_4 + 0x31));
          local_3b8 = CONCAT71(local_3b8._1_7_,(bVar18 & 4) >> 2);
          local_3c0 = CONCAT31(local_3c0._1_3_,(bVar18 & 2) >> 1);
          local_3c8 = (code *)(CONCAT71(local_3c8._1_7_,bVar18) & 0xffffffffffffff01);
          FUN_1433b81c4(pcVar10,&local_308,param_4[2],param_4[3]);
          if (((pcVar10 != (code *)0x0) && ((*(uint *)(pcVar10 + 8) >> 0x1e & 1) == 0)) ||
             ((*(byte *)((longlong)param_4 + 0x32) & 2) != 0)) {
            cVar6 = FUN_1400439fc(pcVar10,0,&local_178);
            if (cVar6 != '\0') {
              (**(code **)(*(longlong *)pcVar10 + 0x268))(pcVar10);
            }
            FUN_1400da9ba(param_1 + 0x3c8,pcVar10);
            FUN_14081b2ca(param_1,pcVar10);
            goto LAB_141037f10;
          }
        }
      }
    }
  }
LAB_141037f0e:
  pcVar10 = (code *)0x0;
LAB_141037f10:
  if ((local_f0 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return pcVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410391f0 FUN_1410391f0 body=3631 status=ok
// SIG undefined FUN_1410391f0(void)

/* WARNING: Removing unreachable block (ram,0x000141039984) */

void FUN_1410391f0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  code **ppcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  code *pcVar17;
  code *pcVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  code *pcVar23;
  code *pcVar24;
  undefined2 *puVar25;
  code *pcVar26;
  code *pcVar27;
  code *pcVar28;
  uint uVar29;
  code *pcVar30;
  longlong lVar31;
  ulonglong uVar32;
  code *pcVar33;
  ulonglong uVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_518 [32];
  undefined4 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  wchar_t *local_4d8;
  code *local_4d0;
  undefined1 *local_4c8;
  code **local_4c0;
  code *local_4b8;
  code *local_4b0;
  code *local_4a8;
  longlong local_4a0;
  ulonglong local_498;
  undefined8 local_490;
  code *local_488;
  uint uStack_480;
  uint uStack_47c;
  uint local_478 [4];
  uint *local_468;
  int local_460;
  undefined4 local_45c;
  int iStack_458;
  int local_454;
  longlong local_448;
  undefined4 local_440;
  undefined1 local_438 [192];
  undefined1 *local_378;
  undefined8 local_370;
  code *local_368;
  code *local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_518;
  uVar34 = 0;
  local_378 = (undefined1 *)0x0;
  local_370 = 0x1800000000;
  FUN_1448c0c58(param_1,local_438,0);
  local_468 = (uint *)0x0;
  local_460 = 0;
  local_488 = (code *)0x0;
  uStack_480 = 0;
  uStack_47c = 0;
  local_45c = 0x80;
  iStack_458 = -1;
  local_454 = 0;
  local_448 = 0;
  local_440 = 0;
  puVar22 = local_378;
  if (local_378 == (undefined1 *)0x0) {
    puVar22 = local_438;
  }
  lVar19 = (longlong)(int)local_370;
  if (lVar19 != 0) {
    lVar31 = 0;
    do {
      if (*(longlong *)(puVar22 + lVar31) != 0) {
        FUN_14103a0d2();
      }
      iVar16 = local_454;
      lVar31 = lVar31 + 8;
    } while (lVar19 * 8 != lVar31);
    if (local_454 < (int)uStack_480) {
      uVar20 = uStack_480;
      iVar8 = 0;
      if (local_454 != 0) {
        uVar20 = uStack_480 - local_454;
        if (iStack_458 != -1) {
          iVar21 = iStack_458;
          do {
            iVar13 = *(int *)(local_488 + (longlong)iVar21 * 0x18 + 4);
            if (iVar21 < (int)uVar20) {
              pcVar17 = local_488 + (longlong)iVar21 * 0x18;
              puVar9 = local_468;
              if (local_468 == (uint *)0x0) {
                puVar9 = local_478;
              }
              pcVar24 = local_488 + (longlong)(int)(uStack_480 - 1) * 0x18 + 0x18;
              uVar15 = uStack_480;
              do {
                pcVar23 = pcVar24;
                uStack_480 = uVar15 - 1;
                uVar29 = uVar15 + 0x1e;
                if (-1 < (int)uStack_480) {
                  uVar29 = uStack_480;
                }
                pcVar24 = pcVar23 + -0x18;
                uVar15 = uStack_480;
              } while ((puVar9[(int)uVar29 >> 5] >> (uStack_480 & 0x1f) & 1) == 0);
              uVar11 = *(undefined8 *)(pcVar23 + -0x18);
              uVar3 = *(undefined8 *)(pcVar23 + -0x10);
              *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar23 + -8);
              *(undefined8 *)pcVar17 = uVar11;
              *(undefined8 *)(pcVar17 + 8) = uVar3;
              puVar9 = local_468;
              if (local_468 == (uint *)0x0) {
                puVar9 = local_478;
              }
              iVar14 = iVar21 + 0x1f;
              if (-1 < iVar21) {
                iVar14 = iVar21;
              }
              puVar9[iVar14 >> 5] = puVar9[iVar14 >> 5] | 1 << ((byte)iVar21 & 0x1f);
            }
            iVar21 = iVar13;
          } while (iVar13 != -1);
        }
        local_4a0 = param_1;
        uStack_480 = uVar20;
        FUN_144a6134a(local_478,uVar20,iVar16);
        param_1 = local_4a0;
        iStack_458 = -1;
        local_454 = 0;
        uVar20 = uStack_47c;
        if (uStack_47c != uStack_480) {
          FUN_144727cd0(&local_488);
          uVar20 = uStack_480;
          iVar8 = local_454;
        }
      }
      pcVar17 = local_488;
      uVar20 = uVar20 - iVar8;
      if (1 < (int)uVar20) {
        memset(local_358,0,0x2f0);
        local_368 = pcVar17;
        local_360 = pcVar17 + (ulonglong)uVar20 * 0x18 + -0x18;
        fVar36 = logf((float)(int)uVar20);
        local_358[0] = (int)(longlong)(fVar36 + fVar36);
        ppcVar12 = &local_368;
        do {
          pcVar24 = *ppcVar12;
          pcVar23 = ppcVar12[1];
          iVar16 = *(int *)(ppcVar12 + 2);
          iVar8 = (int)((ulonglong)((longlong)pcVar23 - (longlong)pcVar24) >> 3) * -0x55555555;
          uVar20 = iVar8 + 1;
          pcVar18 = pcVar24;
          pcVar17 = pcVar23;
          if (iVar16 != 0) {
LAB_141039648:
            if (8 < (int)uVar20) {
              uVar32 = (ulonglong)(uVar20 >> 1);
              uVar11 = *(undefined8 *)(pcVar18 + (uVar32 * 3 + 2) * 8);
              uVar3 = *(undefined8 *)(pcVar18 + uVar32 * 0x18);
              uVar4 = *(undefined8 *)(pcVar18 + uVar32 * 0x18 + 8);
              *(undefined8 *)(pcVar18 + (uVar32 * 3 + 2) * 8) = *(undefined8 *)(pcVar18 + 0x10);
              uVar5 = *(undefined8 *)(pcVar18 + 8);
              *(undefined8 *)(pcVar18 + uVar32 * 0x18) = *(undefined8 *)pcVar18;
              *(undefined8 *)(pcVar18 + uVar32 * 0x18 + 8) = uVar5;
              *(undefined8 *)(pcVar18 + 0x10) = uVar11;
              *(undefined8 *)pcVar18 = uVar3;
              *(undefined8 *)(pcVar18 + 8) = uVar4;
              pcVar27 = pcVar17 + 0x18;
              local_4a8 = pcVar18;
              do {
                pcVar6 = local_4a8 + 0x18;
                pcVar26 = local_4a8 + 0x18;
                do {
                  pcVar33 = pcVar26;
                  pcVar28 = pcVar6;
                  if (pcVar17 < pcVar28) break;
                  pcVar6 = pcVar28 + 0x18;
                  pcVar26 = pcVar33 + 0x18;
                } while (*(int *)(pcVar18 + 8) <= *(int *)(pcVar28 + 8));
                pcVar6 = pcVar27 + -0x30;
                do {
                  pcVar26 = pcVar27;
                  pcVar30 = pcVar6;
                  pcVar27 = pcVar26 + -0x18;
                  if (pcVar27 <= pcVar18) break;
                  pcVar6 = pcVar30 + -0x18;
                } while (*(int *)(pcVar26 + -0x10) <= *(int *)(pcVar18 + 8));
                local_4a8 = pcVar28;
                if (pcVar27 < pcVar28) goto LAB_141039f41;
                uVar11 = *(undefined8 *)(pcVar28 + 0x10);
                uVar3 = *(undefined8 *)pcVar28;
                uVar4 = *(undefined8 *)(pcVar28 + 8);
                *(undefined8 *)(pcVar28 + 0x10) = *(undefined8 *)(pcVar26 + -8);
                uVar5 = *(undefined8 *)(pcVar26 + -0x10);
                *(undefined8 *)pcVar28 = *(undefined8 *)pcVar27;
                *(undefined8 *)(pcVar28 + 8) = uVar5;
                *(undefined8 *)(pcVar26 + -8) = uVar11;
                *(undefined8 *)pcVar27 = uVar3;
                *(undefined8 *)(pcVar26 + -0x10) = uVar4;
              } while( true );
            }
            for (; pcVar28 = local_4a8, pcVar24 = pcVar18, pcVar23 = pcVar18, pcVar18 < pcVar17;
                pcVar17 = pcVar17 + -0x18) {
              while (pcVar27 = pcVar24, pcVar24 = pcVar23 + 0x18, pcVar24 <= pcVar17) {
                pcVar6 = pcVar23 + 0x20;
                pcVar23 = pcVar24;
                if (*(int *)(pcVar27 + 8) <= *(int *)pcVar6) {
                  pcVar24 = pcVar27;
                }
              }
              local_58 = *(undefined8 *)(pcVar27 + 0x10);
              local_68 = *(undefined2 **)pcVar27;
              uStack_60 = *(undefined8 *)(pcVar27 + 8);
              puVar25 = local_68;
              uVar3 = uStack_60;
              *(undefined8 *)(pcVar27 + 0x10) = *(undefined8 *)(pcVar17 + 0x10);
              uVar11 = *(undefined8 *)(pcVar17 + 8);
              *(undefined8 *)pcVar27 = *(undefined8 *)pcVar17;
              *(undefined8 *)(pcVar27 + 8) = uVar11;
              *(undefined8 *)(pcVar17 + 0x10) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              *(undefined4 *)pcVar17 = (undefined4)local_68;
              *(undefined4 *)(pcVar17 + 4) = local_68._4_4_;
              *(int *)(pcVar17 + 8) = (int)uStack_60;
              *(undefined4 *)(pcVar17 + 0xc) = uStack_60._4_4_;
              local_68 = puVar25;
              uStack_60 = uVar3;
            }
            goto LAB_1410396d3;
          }
LAB_141039bd1:
          local_4a8 = pcVar18;
          pcVar28 = local_4a8;
          if (uVar20 != 0) {
            iVar16 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
            iVar8 = iVar16;
joined_r0x000141039bf8:
            do {
              iVar21 = iVar16 * 2 + 1;
              if (iVar21 < (int)uVar20) {
                iVar13 = iVar16 * 2 + 2;
                if ((iVar13 < (int)uVar20) &&
                   (*(int *)(local_4a8 + ((longlong)iVar13 * 3 + 1) * 8) <=
                    *(int *)(local_4a8 + ((longlong)iVar21 * 3 + 1) * 8))) {
                  iVar21 = iVar13;
                }
                if (*(int *)(local_4a8 + ((longlong)iVar21 * 3 + 1) * 8) <
                    *(int *)(local_4a8 + ((longlong)iVar16 * 3 + 1) * 8)) {
                  pcVar17 = local_4a8 + (longlong)iVar16 * 0x18;
                  pcVar24 = local_4a8 + (longlong)iVar21 * 0x18;
                  local_58 = *(undefined8 *)(pcVar17 + 0x10);
                  local_68 = *(undefined2 **)pcVar17;
                  uStack_60 = *(undefined8 *)(pcVar17 + 8);
                  puVar25 = local_68;
                  uVar3 = uStack_60;
                  *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar24 + 0x10);
                  uVar11 = *(undefined8 *)(pcVar24 + 8);
                  *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
                  *(undefined8 *)(pcVar17 + 8) = uVar11;
                  *(undefined8 *)(pcVar24 + 0x10) = local_58;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  *(undefined4 *)pcVar24 = (undefined4)local_68;
                  *(undefined4 *)(pcVar24 + 4) = local_68._4_4_;
                  *(int *)(pcVar24 + 8) = (int)uStack_60;
                  *(undefined4 *)(pcVar24 + 0xc) = uStack_60._4_4_;
                  iVar16 = iVar21;
                  local_68 = puVar25;
                  uStack_60 = uVar3;
                  goto joined_r0x000141039bf8;
                }
              }
              bVar35 = iVar8 != 0;
              iVar16 = iVar8 + -1;
              iVar8 = iVar16;
            } while (bVar35);
            if (1 < (int)uVar20) {
              uVar32 = (ulonglong)uVar20 - 1;
              local_58 = *(undefined8 *)(local_4a8 + 0x10);
              local_68 = *(undefined2 **)local_4a8;
              uStack_60 = *(undefined8 *)(local_4a8 + 8);
              puVar25 = local_68;
              uVar3 = uStack_60;
              *(undefined8 *)(local_4a8 + 0x10) = *(undefined8 *)(local_4a8 + (uVar32 * 3 + 2) * 8);
              uVar11 = *(undefined8 *)(local_4a8 + uVar32 * 0x18 + 8);
              *(undefined8 *)local_4a8 = *(undefined8 *)(local_4a8 + uVar32 * 0x18);
              *(undefined8 *)(local_4a8 + 8) = uVar11;
              *(undefined8 *)(local_4a8 + (uVar32 * 3 + 2) * 8) = local_58;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              pcVar17 = local_4a8 + uVar32 * 0x18;
              *(undefined4 *)pcVar17 = (undefined4)local_68;
              *(undefined4 *)(pcVar17 + 4) = local_68._4_4_;
              *(int *)(pcVar17 + 8) = (int)uStack_60;
              *(undefined4 *)(pcVar17 + 0xc) = uStack_60._4_4_;
              local_68 = puVar25;
              uStack_60 = uVar3;
              if (uVar20 != 2) {
                do {
                  iVar16 = 0;
                  iVar21 = 1;
                  iVar8 = 0;
                  do {
                    iVar16 = iVar16 + 2;
                    iVar13 = iVar21;
                    if (((longlong)iVar16 < (longlong)uVar32) &&
                       (*(int *)(local_4a8 + ((longlong)iVar16 * 3 + 1) * 8) <=
                        *(int *)(local_4a8 + ((longlong)iVar21 * 3 + 1) * 8))) {
                      iVar13 = iVar16;
                    }
                    if (*(int *)(local_4a8 + ((longlong)iVar8 * 3 + 1) * 8) <=
                        *(int *)(local_4a8 + ((longlong)iVar13 * 3 + 1) * 8)) break;
                    pcVar17 = local_4a8 + (longlong)iVar8 * 0x18;
                    pcVar24 = local_4a8 + (longlong)iVar13 * 0x18;
                    uVar11 = *(undefined8 *)(pcVar17 + 0x10);
                    uVar3 = *(undefined8 *)pcVar17;
                    uVar4 = *(undefined8 *)(pcVar17 + 8);
                    *(undefined8 *)(pcVar17 + 0x10) = *(undefined8 *)(pcVar24 + 0x10);
                    uVar5 = *(undefined8 *)(pcVar24 + 8);
                    *(undefined8 *)pcVar17 = *(undefined8 *)pcVar24;
                    *(undefined8 *)(pcVar17 + 8) = uVar5;
                    *(undefined8 *)(pcVar24 + 0x10) = uVar11;
                    *(undefined8 *)pcVar24 = uVar3;
                    *(undefined8 *)(pcVar24 + 8) = uVar4;
                    iVar16 = iVar13 * 2;
                    iVar21 = iVar13 * 2 + 1;
                    iVar8 = iVar13;
                  } while ((longlong)iVar21 < (longlong)uVar32);
                  uVar1 = uVar32 - 1;
                  local_58 = *(undefined8 *)(local_4a8 + 0x10);
                  local_68 = *(undefined2 **)local_4a8;
                  uStack_60 = *(undefined8 *)(local_4a8 + 8);
                  puVar25 = local_68;
                  uVar3 = uStack_60;
                  *(undefined8 *)(local_4a8 + 0x10) =
                       *(undefined8 *)(local_4a8 + (uVar1 * 3 + 2) * 8);
                  uVar11 = *(undefined8 *)(local_4a8 + uVar1 * 0x18 + 8);
                  *(undefined8 *)local_4a8 = *(undefined8 *)(local_4a8 + uVar1 * 0x18);
                  *(undefined8 *)(local_4a8 + 8) = uVar11;
                  *(undefined8 *)(local_4a8 + (uVar1 * 3 + 2) * 8) = local_58;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  pcVar17 = local_4a8 + uVar1 * 0x18;
                  *(undefined4 *)pcVar17 = (undefined4)local_68;
                  *(undefined4 *)(pcVar17 + 4) = local_68._4_4_;
                  *(int *)(pcVar17 + 8) = (int)uStack_60;
                  *(undefined4 *)(pcVar17 + 0xc) = uStack_60._4_4_;
                  bVar35 = 2 < uVar32;
                  uVar32 = uVar1;
                  local_68 = puVar25;
                  uStack_60 = uVar3;
                } while (bVar35);
              }
            }
          }
LAB_1410396d3:
          local_4a8 = pcVar28;
          ppcVar12 = ppcVar12 + -3;
        } while (&local_368 <= ppcVar12);
      }
    }
  }
  FUN_14103a464(&local_488);
  iVar16 = local_460;
  if (local_460 == 0) {
    uVar32 = 1;
    iVar8 = 0;
    iVar21 = 0;
  }
  else {
    puVar9 = local_468;
    if (local_468 == (uint *)0x0) {
      puVar9 = local_478;
    }
    uVar20 = *puVar9;
    if (uVar20 == 0) {
      iVar8 = local_460 + 0x1e;
      if (-1 < local_460 + -1) {
        iVar8 = local_460 + -1;
      }
      uVar34 = 0;
      uVar32 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar32 = uVar34;
      }
      iVar21 = 0;
      do {
        if (uVar32 == uVar34) goto LAB_141039528;
        iVar21 = iVar21 + 0x20;
        uVar20 = puVar9[uVar34 + 1];
        uVar34 = uVar34 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar34 = 0;
      iVar21 = 0;
    }
    uVar32 = (ulonglong)(-uVar20 & uVar20);
    uVar1 = uVar32 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar8 = (iVar21 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (local_460 <= iVar8) {
      iVar8 = local_460;
    }
  }
  if (iVar8 != local_460) {
    uVar20 = 0xffffffff;
    local_498 = 0;
    do {
      local_4a8 = (code *)CONCAT44(local_4a8._4_4_,uVar20);
      plVar2 = *(longlong **)(local_488 + (longlong)iVar8 * 0x18);
      if (plVar2 != (longlong *)0x0) {
        if (1 < (byte)(*(char *)((longlong)plVar2 + 0xb9) - 1U)) {
          if (DAT_14cad00c8 == 0) {
            local_4c0 = &local_368;
            local_368 = FUN_144a7958c;
            local_4b0 = FUN_14081d0ea;
            local_4b8 = FUN_14081d0ea;
            local_4c8 = &LAB_1479b7a0c;
            local_4d0 = (code *)&LAB_1463b464e;
            local_4d8 = L"Engine";
            local_4e0 = 0;
            local_4e8 = 0x10000005;
            local_4f0 = 8;
            local_4f8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
          }
          lVar19 = DAT_14cad00c8;
          if (DAT_14c951858 == 0) {
            local_4c0 = &local_368;
            local_368 = FUN_1449e2820;
            local_4b0 = FUN_14081d0ea;
            local_4b8 = FUN_14081d0ea;
            local_4c8 = &LAB_1468c5283;
            local_4d0 = FUN_142809da0;
            local_4d8 = L"Engine";
            local_4e0 = 0x400000000;
            local_4e8 = 0x10000000;
            local_4f0 = 8;
            local_4f8 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar31 = plVar2[4];
          if (lVar31 != 0) {
            iVar8 = *(int *)(lVar19 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar31 + 0x10) + 0x38) < iVar8) ||
                 (lVar10 = lVar31,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
                 lVar19 + 0x30)) {
                lVar10 = 0;
              }
            } while ((lVar10 == 0) && (lVar31 = *(longlong *)(lVar31 + 0x20), lVar31 != 0));
            for (; lVar10 != 0; lVar10 = FUN_144a78ede(lVar10,uVar11)) {
              if ((byte)(*(char *)(lVar10 + 0xb9) - 1U) < 2) goto LAB_141039a36;
              uVar11 = FUN_144a78d6a();
            }
          }
          if (((*(char *)((longlong)plVar2 + 0xb9) != '\0') ||
              ((*(uint *)(plVar2 + 1) >> 0x12 & 1) == 0)) ||
             (lVar19 = FUN_144938c96(plVar2),
             *(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x110) != lVar19)) goto LAB_141039469;
        }
LAB_141039a36:
        if (*(longlong **)(param_1 + 0x1c8) == plVar2) {
          *(undefined8 *)(param_1 + 0x1c8) = 0;
        }
        local_4a0 = param_1;
        (**(code **)(*plVar2 + 0x420))(plVar2,0);
        local_368 = *(code **)(plVar2[2] + 0x18);
        FUN_1400021e4(&local_368,&local_68);
        puVar25 = &DAT_149dfb77a;
        if ((int)uStack_60 != 0) {
          puVar25 = local_68;
        }
        FUN_140002266(&local_368,L"TRASH_%s",puVar25);
        pcVar17 = (code *)&DAT_149dfb77a;
        if ((int)local_360 != 0) {
          pcVar17 = local_368;
        }
        FUN_1446f470e(&local_490,pcVar17,1);
        if (local_368 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_4f8 = 0;
        FUN_140af9fb2(&local_68,local_4a0,*(undefined8 *)(local_4a0 + 0x10),local_490);
        FUN_1400021e4(&local_68,&local_368);
        pcVar17 = local_368;
        if ((int)local_360 == 0) {
          pcVar17 = (code *)&DAT_149dfb77a;
        }
        (**(code **)(*plVar2 + 0x170))(plVar2,pcVar17,local_4a0,0x34);
        if (local_368 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_498 = (ulonglong)
                    CONCAT31((int3)(*(uint *)(local_4a0 + 8) >> 8),
                             (*(uint *)(local_4a0 + 8) & 0x40) == 0);
        param_1 = local_4a0;
      }
LAB_141039469:
      uVar20 = (uint)local_4a8 & ~(uint)uVar32;
      puVar9 = local_468;
      if (local_468 == (uint *)0x0) {
        puVar9 = local_478;
      }
      iVar8 = (int)uVar34;
      lVar19 = (longlong)iVar8;
      uVar15 = puVar9[lVar19] & uVar20;
      if (uVar15 == 0) {
        iVar13 = local_460 + 0x1e;
        if (-1 < local_460 + -1) {
          iVar13 = local_460 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar8) {
          iVar14 = iVar8;
        }
        if (iVar8 < iVar13) {
          lVar31 = 0;
          do {
            uVar15 = puVar9[lVar19 + lVar31 + 1];
            if (uVar15 != 0) {
              uVar34 = (ulonglong)(iVar8 + (int)lVar31 + 1);
              uVar20 = 0xffffffff;
              goto LAB_1410394eb;
            }
            iVar21 = iVar21 + 0x20;
            lVar31 = lVar31 + 1;
          } while (iVar14 - lVar19 != lVar31);
          uVar20 = 0xffffffff;
          iVar8 = iVar14;
        }
        uVar34 = (ulonglong)(iVar8 + 1);
        iVar8 = local_460;
      }
      else {
LAB_1410394eb:
        uVar32 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar32 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar8 = (iVar21 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (local_460 <= iVar8) {
          iVar8 = local_460;
        }
      }
    } while (iVar8 != iVar16);
    if ((local_498 & 1) != 0) {
      uVar11 = FUN_144b00ba4(param_1);
      FUN_14282b7b8(uVar11);
    }
  }
LAB_141039528:
  if (*(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x274) < (int)local_370) {
    cVar7 = FUN_1478c8d40(param_1 + 0x240);
    if (cVar7 != '\0') {
      uVar20 = *(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x274);
      iVar16 = 1;
      if (3 < uVar20) {
        uVar34 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
        lVar19 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar16 = 1 << ((byte)lVar19 & 0x1f);
      }
      *(int *)(param_1 + 0x288) = iVar16;
      FUN_144829812(param_1 + 0x240);
    }
  }
  local_440 = 0;
  if (local_448 != 0) {
    FUN_1400020a8();
  }
  FUN_14103a020(&local_488);
  if (local_378 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_141039f41:
  local_58 = *(undefined8 *)(pcVar18 + 0x10);
  local_68 = *(undefined2 **)pcVar18;
  uStack_60 = *(undefined8 *)(pcVar18 + 8);
  puVar25 = local_68;
  uVar3 = uStack_60;
  *(undefined8 *)(pcVar18 + 0x10) = *(undefined8 *)(pcVar26 + -8);
  uVar11 = *(undefined8 *)(pcVar26 + -0x10);
  *(undefined8 *)pcVar18 = *(undefined8 *)pcVar27;
  *(undefined8 *)(pcVar18 + 8) = uVar11;
  *(undefined8 *)(pcVar26 + -8) = local_58;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  *(undefined4 *)pcVar27 = (undefined4)local_68;
  *(undefined4 *)(pcVar26 + -0x14) = local_68._4_4_;
  *(int *)(pcVar26 + -0x10) = (int)uStack_60;
  *(undefined4 *)(pcVar26 + -0xc) = uStack_60._4_4_;
  iVar16 = iVar16 + -1;
  pcVar26 = pcVar26 + -0x30;
  local_68 = puVar25;
  uStack_60 = uVar3;
  if ((longlong)pcVar30 - (longlong)pcVar24 < (longlong)pcVar23 - (longlong)pcVar33) {
    if (pcVar28 < pcVar17) {
      *ppcVar12 = pcVar28;
      ppcVar12[1] = pcVar17;
      *(int *)(ppcVar12 + 2) = iVar16;
      ppcVar12 = ppcVar12 + 3;
    }
    local_4a8 = pcVar18;
    pcVar23 = pcVar30;
    if (pcVar27 <= pcVar18 + 0x18) goto LAB_1410396d3;
  }
  else {
    if (pcVar18 + 0x18 < pcVar27) {
      *ppcVar12 = pcVar18;
      ppcVar12[1] = pcVar26;
      *(int *)(ppcVar12 + 2) = iVar16;
      ppcVar12 = ppcVar12 + 3;
    }
    pcVar18 = pcVar33;
    pcVar26 = pcVar17;
    pcVar23 = pcVar17;
    if (pcVar17 <= pcVar28) goto LAB_1410396d3;
  }
  iVar8 = (int)((ulonglong)((longlong)pcVar23 - (longlong)pcVar18) >> 3) * -0x55555555;
  uVar20 = iVar8 + 1;
  pcVar24 = pcVar18;
  pcVar18 = local_4a8;
  pcVar17 = pcVar26;
  if (iVar16 == 0) goto LAB_141039bd1;
  goto LAB_141039648;
}



// FUNCTION 14103a020 FUN_14103a020 body=55 status=ok
// SIG undefined FUN_14103a020(void)

void FUN_14103a020(longlong *param_1)

{
  FUN_14103a058(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14103a058 FUN_14103a058 body=121 status=ok
// SIG undefined FUN_14103a058(void)

void FUN_14103a058(longlong param_1,int param_2)

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


