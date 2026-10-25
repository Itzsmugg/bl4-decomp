// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404dd0ca FUN_1404dd0ca body=233 status=ok
// SIG undefined FUN_1404dd0ca(void)

void FUN_1404dd0ca(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1404dd1b4 FUN_1404dd1b4 body=211 status=ok
// SIG undefined FUN_1404dd1b4(void)

void FUN_1404dd1b4(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (1 < param_2) {
    uVar2 = (longlong)(int)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)(int)param_2 & 0xfffffffffffffff]
                          ];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    uVar1 = (uint)(uVar2 >> 4);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar4 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar4) {
    FUN_1404dd288(param_1,0,uVar4,0x10);
    param_3 = uVar4;
  }
  *(uint *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 1404dd288 FUN_1404dd288 body=132 status=ok
// SIG undefined FUN_1404dd288(void)

void FUN_1404dd288(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1404dd30c FUN_1404dd30c body=216 status=ok
// SIG undefined FUN_1404dd30c(void)

void FUN_1404dd30c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
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
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1404dd3e4 FUN_1404dd3e4 body=278 status=ok
// SIG undefined FUN_1404dd3e4(void)

void FUN_1404dd3e4(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)(puVar7 + -4) = *param_2;
      *(undefined4 *)((longlong)puVar7 + -0x1c) = uVar4;
      *(undefined4 *)(puVar7 + -3) = uVar5;
      *(undefined4 *)((longlong)puVar7 + -0x14) = uVar6;
      puVar7[-2] = 0;
      iVar1 = param_2[6];
      pvVar2 = *(void **)(param_2 + 4);
      *(int *)(puVar7 + -1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + -4) = 0;
      }
      else {
        FUN_1446dd670(puVar7 + -2,iVar1,0);
        memcpy((void *)puVar7[-2],pvVar2,(longlong)iVar1 * 2);
      }
      *puVar7 = 0;
      iVar1 = param_2[10];
      pvVar2 = *(void **)(param_2 + 8);
      *(int *)(puVar7 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar7,iVar1,0);
        memcpy((void *)*puVar7,pvVar2,(longlong)iVar1 * 2);
      }
      puVar7[2] = 0;
      iVar1 = param_2[0xe];
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      *(int *)(puVar7 + 3) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
      }
      else {
        FUN_1404dd0ca(puVar7 + 2,iVar1,0);
        FUN_1404dd017(puVar7[2],uVar3);
      }
      param_2 = param_2 + 0x10;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1404dd4fa FUN_1404dd4fa body=93 status=ok
// SIG undefined FUN_1404dd4fa(void)

undefined1 *
FUN_1404dd4fa(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  *param_2 = DAT_14c96b238;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  FUN_1404dd558(0,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1404dd558 FUN_1404dd558 body=4828 status=ok
// SIG undefined FUN_1404dd558(void)

/* WARNING: Type propagation algorithm not settling */

byte FUN_1404dd558(longlong *param_1,undefined4 *param_2,int param_3,longlong param_4,byte param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  byte bVar23;
  bool bVar24;
  byte bVar25;
  undefined1 auStack_348 [32];
  double *local_328;
  double *local_320;
  undefined4 local_314;
  ulonglong local_310;
  undefined4 *local_308;
  int local_2fc;
  longlong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8 [2];
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  longlong local_2b8 [2];
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  longlong local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined4 *local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_278 = 0;
  uStack_270 = 0;
  plVar20 = (longlong *)param_1[3];
  local_314 = (undefined4)CONCAT71((int7)(local_48 >> 8),1);
  if (plVar20 == (longlong *)0x0) {
    plVar20 = (longlong *)0x0;
    lVar22 = 0;
  }
  else {
    iVar10 = (int)plVar20[1];
    lVar22 = 0;
    do {
      if (iVar10 == 0) {
        plVar20 = (longlong *)0x0;
        goto LAB_1404dd5d4;
      }
      LOCK();
      iVar5 = (int)plVar20[1];
      bVar24 = iVar10 == iVar5;
      if (bVar24) {
        *(int *)(plVar20 + 1) = iVar10 + 1;
        iVar5 = iVar10;
      }
      iVar10 = iVar5;
      UNLOCK();
    } while (!bVar24);
    lVar22 = param_1[2];
    local_314 = 0;
  }
LAB_1404dd5d4:
  local_308 = param_2;
  local_2fc = param_3;
  local_2f8 = param_4;
  if (0 < (int)param_1[1]) {
    lVar18 = 0;
    do {
      uVar15 = uStack_270;
      puVar14 = local_308;
      if (lVar18 == 999) {
        local_1a8._0_4_ = CONCAT31(local_1a8._1_3_,DAT_14c96b238);
        local_80 = (undefined4 *)0x0;
        local_78 = 0x400000000;
        local_70 = 0;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        local_58 = 0;
        uStack_50 = 0;
        *(undefined1 *)local_308 = DAT_14c96b238;
        FUN_1400e223c(local_308 + 2,&uStack_1a0);
        plVar16 = plStack_60;
        *(undefined1 *)(puVar14 + 0x4e) = local_70;
        if (&local_1a8 != (undefined8 *)puVar14) {
          *(undefined8 *)(puVar14 + 0x50) = local_68;
          local_68 = 0;
          plVar6 = *(longlong **)(puVar14 + 0x52);
          if (plStack_60 != plVar6) {
            plStack_60 = (longlong *)0x0;
            *(longlong **)(puVar14 + 0x52) = plVar16;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar6 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
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
          }
        }
        FUN_1400e21ec(puVar14 + 0x54,&local_58);
        FUN_1447fa2ac(local_58,uStack_50 & 0xffffffff);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        plVar16 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_60 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar16 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        puVar14 = &uStack_1a0;
        if (local_80 != (undefined4 *)0x0) {
          puVar14 = local_80;
        }
        FUN_1447157bd(puVar14,local_78 & 0xffffffff);
        if (local_80 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        bVar25 = 1;
        goto LAB_1404de6fb;
      }
      lVar19 = *param_1;
      lVar21 = *(longlong *)(lVar19 + 8 + lVar18 * 0x10);
      if (lVar21 == 0) {
LAB_1404dd625:
        lVar21 = 0;
        uVar13 = 0;
      }
      else {
        iVar10 = *(int *)(lVar21 + 8);
        do {
          if (iVar10 == 0) goto LAB_1404dd625;
          LOCK();
          iVar5 = *(int *)(lVar21 + 8);
          bVar24 = iVar10 == iVar5;
          if (bVar24) {
            *(int *)(lVar21 + 8) = iVar10 + 1;
            iVar5 = iVar10;
          }
          iVar10 = iVar5;
          UNLOCK();
        } while (!bVar24);
        uVar13 = *(undefined8 *)(lVar19 + lVar18 * 0x10);
      }
      lVar19 = (longlong)(int)uStack_270;
      uVar11 = (int)uStack_270 + 1;
      uStack_270 = CONCAT44(uStack_270._4_4_,uVar11);
      if (uStack_270._4_4_ < uVar11) {
        FUN_14171e5a8(&local_278,uVar15 & 0xffffffff);
      }
      lVar18 = lVar18 + 1;
      *(undefined8 *)(local_278 + lVar19 * 0x10) = uVar13;
      *(longlong *)(local_278 + 8 + lVar19 * 0x10) = lVar21;
    } while (lVar18 < (int)param_1[1]);
  }
  if (DAT_14c979c68 == '\x01') {
    local_288 = 0;
    uStack_280 = 0;
    if (lVar22 == 0) {
      uStack_280._0_4_ = 0;
      bVar23 = 1;
      puVar14 = local_308;
    }
    else {
      FUN_1401271b4(lVar22,&local_1a8);
      if ((char)local_314 == '\0') {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        local_1f8 = local_178;
        local_208 = local_188;
        uStack_200 = uStack_180;
        local_218 = local_198;
        uStack_210 = uStack_190;
        local_228 = CONCAT44(local_1a8._4_4_,(undefined4)local_1a8);
        uStack_220 = CONCAT44(uStack_19c,uStack_1a0);
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        local_1b8 = local_1f8;
        local_1c8 = local_208;
        uStack_1c0 = uStack_200;
        local_1d8 = local_218;
        uStack_1d0 = uStack_210;
        local_1e8 = (undefined4)local_228;
        uStack_1e4 = local_228._4_4_;
        uStack_1e0 = (undefined4)uStack_220;
        uStack_1dc = uStack_220._4_4_;
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      else {
        local_228 = CONCAT44(local_1a8._4_4_,(undefined4)local_1a8);
        uStack_220 = CONCAT44(uStack_19c,uStack_1a0);
        local_1e8 = (undefined4)local_1a8;
        uStack_1e4 = local_1a8._4_4_;
        uStack_1e0 = uStack_1a0;
        uStack_1dc = uStack_19c;
        local_1d8 = local_198;
        uStack_1d0 = uStack_190;
        local_1c8 = local_188;
        uStack_1c0 = uStack_180;
        local_1b8 = local_178;
      }
      uVar15 = uStack_280;
      lVar18 = (longlong)(int)uStack_280;
      uVar11 = (int)uStack_280 + 1;
      uStack_280 = CONCAT44(uStack_280._4_4_,uVar11);
      local_218 = local_1d8;
      uStack_210 = uStack_1d0;
      local_208 = local_1c8;
      uStack_200 = uStack_1c0;
      local_1f8 = local_1b8;
      if (uStack_280._4_4_ < uVar11) {
        FUN_1402b2682(&local_288,uVar15 & 0xffffffff);
      }
      puVar14 = local_308;
      lVar18 = lVar18 * 0x60;
      *(longlong *)(local_288 + 0x30 + lVar18) = local_1b8;
      puVar4 = (undefined4 *)(local_288 + 0x20 + lVar18);
      *puVar4 = (undefined4)local_1c8;
      puVar4[1] = local_1c8._4_4_;
      puVar4[2] = (undefined4)uStack_1c0;
      puVar4[3] = uStack_1c0._4_4_;
      puVar4 = (undefined4 *)(local_288 + 0x10 + lVar18);
      *puVar4 = (undefined4)local_1d8;
      puVar4[1] = local_1d8._4_4_;
      puVar4[2] = (undefined4)uStack_1d0;
      puVar4[3] = uStack_1d0._4_4_;
      puVar4 = (undefined4 *)(local_288 + lVar18);
      *puVar4 = local_1e8;
      puVar4[1] = uStack_1e4;
      puVar4[2] = uStack_1e0;
      puVar4[3] = uStack_1dc;
      *(longlong *)(local_288 + 0x38 + lVar18) = lVar22;
      *(longlong **)(local_288 + 0x40 + lVar18) = plVar20;
      if ((char)local_314 == '\0') {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        *(undefined1 *)(local_288 + lVar18 + 0x58) = 0;
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      else {
        *(undefined1 *)(local_288 + lVar18 + 0x58) = 0;
      }
      bVar25 = local_2fc != 1;
      bVar23 = 0;
      if (1 < (int)uStack_270) {
        local_2f0 = 0;
        lVar22 = 0;
        local_310 = CONCAT71(local_310._1_7_,bVar25);
        do {
          lVar18 = lVar22 * 0x10;
          plVar16 = *(longlong **)(local_278 + lVar18);
          plVar6 = *(longlong **)(local_278 + 8 + lVar18);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          if (plVar16 == (longlong *)0x0) {
LAB_1404dddc8:
            bVar23 = 0;
            bVar17 = bVar25;
            if (plVar6 != (longlong *)0x0) {
LAB_1404dde16:
              LOCK();
              plVar16 = plVar6 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
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
            if (bVar17 == 0) {
LAB_1404de775:
              bVar25 = 1;
              goto LAB_1404de6d5;
            }
          }
          else {
            if ((((*(byte *)((longlong)plVar16 + 0x31) & 1) != 0) &&
                (lVar19 = *(longlong *)plVar16[0x36], lVar19 != 0)) &&
               (*(byte *)(lVar19 + 0x99) != 0)) {
              local_328 = (double *)CONCAT44(local_328._4_4_,(uint)*(byte *)(lVar19 + 0x99));
              FUN_1401630a0(lVar19,plVar16,2,0);
            }
            if ((*(byte *)((longlong)plVar16 + 0x39) & param_5) == 0) goto LAB_1404dddc8;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            lVar19 = *(longlong *)(local_278 + 0x10 + lVar18);
            if (lVar19 == 0) {
LAB_1404dddd5:
              bVar23 = 0;
            }
            else {
              plVar7 = *(longlong **)(lVar19 + 0x1c8);
              if (plVar7 == (longlong *)0x0) {
LAB_1404dddda:
                bVar23 = 0;
              }
              else {
                lVar18 = local_278 + lVar18;
                iVar10 = (int)plVar7[1];
                do {
                  if (iVar10 == 0) goto LAB_1404dddda;
                  LOCK();
                  iVar5 = (int)plVar7[1];
                  bVar24 = iVar10 == iVar5;
                  if (bVar24) {
                    *(int *)(plVar7 + 1) = iVar10 + 1;
                    iVar5 = iVar10;
                  }
                  iVar10 = iVar5;
                  UNLOCK();
                } while (!bVar24);
                plVar8 = *(longlong **)(lVar19 + 0x1c0);
                LOCK();
                plVar2 = plVar7 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar7 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
                uVar15 = local_2f0;
                puVar14 = local_308;
                bVar25 = (byte)local_310;
                if (plVar8 != plVar16 || plVar8 == (longlong *)0x0) goto LAB_1404dddd5;
                if ((local_2f8 != 0) && ((local_2f0 & 1) == 0)) {
                  local_290 = (double)*(float *)(local_2f8 + 0x2c);
                  local_298 = (double)*(float *)(local_2f8 + 0x28);
                  local_2a0 = (double)*(float *)(local_2f8 + 0x24);
                  local_2a8 = (double)*(float *)(local_2f8 + 0x20);
                  local_320 = &local_298;
                  local_328 = &local_2a8;
                  (**(code **)(*plVar16 + 0x128))(plVar16,&local_1e8,*(undefined8 *)(lVar18 + 0x10))
                  ;
                  if ((char)local_1d8 == '\x01') {
                    local_238 = CONCAT44(uStack_1e4,local_1e8);
                    uStack_230 = CONCAT44(uStack_1dc,uStack_1e0);
                    uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
                  }
                }
                if ((uVar15 & 1) != 0) {
                  local_258 = local_238;
                  uStack_250 = uStack_230;
                }
                lVar19 = *(longlong *)(lVar18 + 0x10);
                plVar7 = *(longlong **)(lVar18 + 0x18);
                puVar1 = (undefined8 *)(lVar19 + 0xd0);
                if (plVar7 == (longlong *)0x0) {
                  local_1f8 = *(longlong *)(lVar19 + 0x100);
                  local_228 = *puVar1;
                  uStack_220 = *(undefined8 *)(lVar19 + 0xd8);
                  local_218 = *(longlong *)(lVar19 + 0xe0);
                  uStack_210 = *(longlong *)(lVar19 + 0xe8);
                  local_208 = *(longlong *)(lVar19 + 0xf0);
                  uStack_200 = *(longlong *)(lVar19 + 0xf8);
                  local_1e8 = *(undefined4 *)puVar1;
                  uStack_1e4 = *(undefined4 *)(lVar19 + 0xd4);
                  uStack_1e0 = *(undefined4 *)(lVar19 + 0xd8);
                  uStack_1dc = *(undefined4 *)(lVar19 + 0xdc);
                  local_1d8 = *(longlong *)(lVar19 + 0xe0);
                  uStack_1d0 = *(longlong *)(lVar19 + 0xe8);
                  local_1c8 = *(longlong *)(lVar19 + 0xf0);
                  uStack_1c0 = *(longlong *)(lVar19 + 0xf8);
                  local_1b8 = *(longlong *)(lVar19 + 0x100);
                }
                else {
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                  local_1f8 = *(longlong *)(lVar19 + 0x100);
                  local_228 = *puVar1;
                  uStack_220 = *(undefined8 *)(lVar19 + 0xd8);
                  local_218 = *(longlong *)(lVar19 + 0xe0);
                  uStack_210 = *(longlong *)(lVar19 + 0xe8);
                  local_208 = *(longlong *)(lVar19 + 0xf0);
                  uStack_200 = *(longlong *)(lVar19 + 0xf8);
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = plVar7 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar7)(plVar7);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar7 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                  local_1b8 = local_1f8;
                  local_1c8 = local_208;
                  uStack_1c0 = uStack_200;
                  local_1d8 = local_218;
                  uStack_1d0 = uStack_210;
                  local_1e8 = (undefined4)local_228;
                  uStack_1e4 = local_228._4_4_;
                  uStack_1e0 = (undefined4)uStack_220;
                  uStack_1dc = uStack_220._4_4_;
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                }
                uVar9 = uStack_280;
                if ((uVar15 & 1) != 0) {
                  local_248 = (undefined4)local_258;
                  uStack_244 = local_258._4_4_;
                  uStack_240 = (undefined4)uStack_250;
                  uStack_23c = uStack_250._4_4_;
                }
                lVar18 = (longlong)(int)uStack_280;
                uVar11 = (int)uStack_280 + 1;
                uStack_280 = CONCAT44(uStack_280._4_4_,uVar11);
                if (uStack_280._4_4_ < uVar11) {
                  FUN_1402b2682(&local_288,uVar9 & 0xffffffff);
                }
                lVar18 = lVar18 * 0x60;
                *(longlong *)(local_288 + 0x30 + lVar18) = local_1b8;
                puVar14 = (undefined4 *)(local_288 + 0x20 + lVar18);
                *puVar14 = (undefined4)local_1c8;
                puVar14[1] = local_1c8._4_4_;
                puVar14[2] = (undefined4)uStack_1c0;
                puVar14[3] = uStack_1c0._4_4_;
                puVar14 = (undefined4 *)(local_288 + 0x10 + lVar18);
                *puVar14 = (undefined4)local_1d8;
                puVar14[1] = local_1d8._4_4_;
                puVar14[2] = (undefined4)uStack_1d0;
                puVar14[3] = uStack_1d0._4_4_;
                puVar14 = (undefined4 *)(local_288 + lVar18);
                *puVar14 = local_1e8;
                puVar14[1] = uStack_1e4;
                puVar14[2] = uStack_1e0;
                puVar14[3] = uStack_1dc;
                *(longlong *)(local_288 + 0x38 + lVar18) = lVar19;
                *(longlong **)(local_288 + 0x40 + lVar18) = plVar7;
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                  UNLOCK();
                }
                lVar18 = local_288 + lVar18;
                *(char *)(lVar18 + 0x58) = (char)uVar15;
                if ((uVar15 & 1) != 0) {
                  *(undefined4 *)(lVar18 + 0x48) = local_248;
                  *(undefined4 *)(lVar18 + 0x4c) = uStack_244;
                  *(undefined4 *)(lVar18 + 0x50) = uStack_240;
                  *(undefined4 *)(lVar18 + 0x54) = uStack_23c;
                }
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar7 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar7)(plVar7);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar7 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                  LOCK();
                  plVar2 = plVar7 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*plVar7)(plVar7);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar7 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                }
                bVar23 = 1;
                local_2f0 = uVar15;
                if (&local_1a8 != plVar16 + 0x1a) {
                  local_178 = plVar16[0x20];
                  local_1a8._0_4_ = (undefined4)plVar16[0x1a];
                  local_1a8._4_4_ = *(undefined4 *)((longlong)plVar16 + 0xd4);
                  uStack_1a0 = (undefined4)plVar16[0x1b];
                  uStack_19c = *(undefined4 *)((longlong)plVar16 + 0xdc);
                  local_198 = plVar16[0x1c];
                  uStack_190 = plVar16[0x1d];
                  local_188 = plVar16[0x1e];
                  uStack_180 = plVar16[0x1f];
                }
              }
              puVar14 = local_308;
              bVar25 = (byte)local_310;
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar6 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar3 = (int *)((longlong)plVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
              bVar17 = local_2fc != 1 | bVar23;
              goto LAB_1404dde16;
            }
            if (local_2fc == 1 && bVar23 == 0) goto LAB_1404de775;
          }
          if (bVar23 == 0) break;
          lVar22 = lVar22 + 1;
        } while (lVar22 < (longlong)(int)uStack_270 + -1);
        bVar23 = bVar23 ^ 1;
      }
    }
    plVar16 = local_2b8;
    uVar12 = (int)uStack_280;
  }
  else {
    local_288 = 0;
    uStack_280 = 0;
    if (lVar22 == 0) {
      uStack_280._0_4_ = 0;
      bVar23 = 1;
    }
    else {
      FUN_1401271b4(lVar22,&local_1e8);
      if ((char)local_314 == '\0') {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        local_1f8 = local_1b8;
        local_208 = local_1c8;
        uStack_200 = uStack_1c0;
        local_218 = local_1d8;
        uStack_210 = uStack_1d0;
        local_228 = CONCAT44(uStack_1e4,local_1e8);
        uStack_220 = CONCAT44(uStack_1dc,uStack_1e0);
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        local_178 = local_1f8;
        local_188 = local_208;
        uStack_180 = uStack_200;
        local_198 = local_218;
        uStack_190 = uStack_210;
        local_1a8._0_4_ = (undefined4)local_228;
        local_1a8._4_4_ = local_228._4_4_;
        uStack_1a0 = (undefined4)uStack_220;
        uStack_19c = uStack_220._4_4_;
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      else {
        local_228 = CONCAT44(uStack_1e4,local_1e8);
        uStack_220 = CONCAT44(uStack_1dc,uStack_1e0);
        local_1a8._0_4_ = local_1e8;
        local_1a8._4_4_ = uStack_1e4;
        uStack_1a0 = uStack_1e0;
        uStack_19c = uStack_1dc;
        local_198 = local_1d8;
        uStack_190 = uStack_1d0;
        local_188 = local_1c8;
        uStack_180 = uStack_1c0;
        local_178 = local_1b8;
      }
      uVar15 = uStack_280;
      lVar18 = (longlong)(int)uStack_280;
      uVar11 = (int)uStack_280 + 1;
      uStack_280 = CONCAT44(uStack_280._4_4_,uVar11);
      local_218 = local_198;
      uStack_210 = uStack_190;
      local_208 = local_188;
      uStack_200 = uStack_180;
      local_1f8 = local_178;
      if (uStack_280._4_4_ < uVar11) {
        FUN_1402b2682(&local_288,uVar15 & 0xffffffff);
      }
      lVar18 = lVar18 * 0x60;
      *(longlong *)(local_288 + 0x30 + lVar18) = local_178;
      puVar14 = (undefined4 *)(local_288 + 0x20 + lVar18);
      *puVar14 = (undefined4)local_188;
      puVar14[1] = local_188._4_4_;
      puVar14[2] = (undefined4)uStack_180;
      puVar14[3] = uStack_180._4_4_;
      puVar14 = (undefined4 *)(local_288 + 0x10 + lVar18);
      *puVar14 = (undefined4)local_198;
      puVar14[1] = local_198._4_4_;
      puVar14[2] = (undefined4)uStack_190;
      puVar14[3] = uStack_190._4_4_;
      puVar14 = (undefined4 *)(local_288 + lVar18);
      *puVar14 = (undefined4)local_1a8;
      puVar14[1] = local_1a8._4_4_;
      puVar14[2] = uStack_1a0;
      puVar14[3] = uStack_19c;
      *(longlong *)(local_288 + 0x38 + lVar18) = lVar22;
      *(longlong **)(local_288 + 0x40 + lVar18) = plVar20;
      if ((char)local_314 == '\0') {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        *(undefined1 *)(local_288 + lVar18 + 0x58) = 0;
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        LOCK();
        plVar16 = plVar20 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar3 = (int *)((longlong)plVar20 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      else {
        *(undefined1 *)(local_288 + lVar18 + 0x58) = 0;
      }
      local_1a8._0_4_ = CONCAT31(local_1a8._1_3_,param_5);
      local_80 = (undefined4 *)0x0;
      local_78 = 0x400000000;
      local_70 = 1;
      if ((int)uStack_270 < 2) {
        bVar17 = 1;
        uVar15 = 0;
        bVar23 = 0;
      }
      else {
        local_310 = 0;
        lVar22 = 0;
        do {
          lVar18 = lVar22 * 0x10;
          plVar16 = *(longlong **)(local_278 + lVar18);
          plVar6 = *(longlong **)(local_278 + 8 + lVar18);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          bVar23 = 0;
          if (plVar16 != (longlong *)0x0) {
            FUN_146279048(&uStack_1a0,0);
            FUN_142877f32(plVar16,2,0);
            (**(code **)(*plVar16 + 0x238))(plVar16,&local_1e8);
            if (0 < (longlong)(int)local_78) {
              puVar14 = local_80;
              if (local_80 == (undefined4 *)0x0) {
                puVar14 = &uStack_1a0;
              }
              lVar18 = *(longlong *)(local_278 + 0x10 + lVar18);
              lVar19 = 0;
              do {
                if ((lVar18 != 0) && (lVar18 == *(longlong *)((longlong)puVar14 + lVar19 + 0x38))) {
                  if ((local_2f8 != 0) && ((local_310 & 1) == 0)) {
                    local_2c0 = (double)*(float *)(local_2f8 + 0x2c);
                    local_2c8 = (double)*(float *)(local_2f8 + 0x28);
                    local_2d0 = (double)*(float *)(local_2f8 + 0x24);
                    local_2d8 = (double)*(float *)(local_2f8 + 0x20);
                    local_320 = &local_2c8;
                    local_328 = &local_2d8;
                    uVar13 = (**(code **)(*plVar16 + 0x128))
                                       (plVar16,&local_228,
                                        *(undefined8 *)((longlong)puVar14 + lVar19 + 0x38),
                                        &local_1e8);
                    if ((char)local_218 == '\x01') {
                      local_238 = local_228;
                      uStack_230 = uStack_220;
                      local_310 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                    }
                  }
                  uVar15 = uStack_280;
                  if ((local_310 & 1) != 0) {
                    local_268 = local_238;
                    uStack_260 = uStack_230;
                  }
                  puVar14 = local_80;
                  if (local_80 == (undefined4 *)0x0) {
                    puVar14 = &uStack_1a0;
                  }
                  local_1f8 = *(longlong *)((longlong)puVar14 + lVar19 + 0x30);
                  local_228 = *(undefined8 *)((longlong)puVar14 + lVar19);
                  uStack_220 = ((undefined8 *)((longlong)puVar14 + lVar19))[1];
                  plVar16 = (longlong *)((longlong)puVar14 + lVar19 + 0x10);
                  local_218 = *plVar16;
                  uStack_210 = plVar16[1];
                  plVar16 = (longlong *)((longlong)puVar14 + lVar19 + 0x20);
                  local_208 = *plVar16;
                  uStack_200 = plVar16[1];
                  uVar13 = *(undefined8 *)((longlong)puVar14 + lVar19 + 0x38);
                  plVar16 = *(longlong **)((longlong)puVar14 + lVar19 + 0x40);
                  if (plVar16 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                    UNLOCK();
                  }
                  if ((local_310 & 1) != 0) {
                    local_248 = (undefined4)local_268;
                    uStack_244 = local_268._4_4_;
                    uStack_240 = (undefined4)uStack_260;
                    uStack_23c = uStack_260._4_4_;
                  }
                  lVar18 = (longlong)(int)uStack_280;
                  uVar11 = (int)uStack_280 + 1;
                  uStack_280 = CONCAT44(uStack_280._4_4_,uVar11);
                  if (uStack_280._4_4_ < uVar11) {
                    FUN_1402b2682(&local_288,uVar15 & 0xffffffff);
                  }
                  lVar18 = lVar18 * 0x60;
                  *(longlong *)(local_288 + 0x30 + lVar18) = local_1f8;
                  puVar14 = (undefined4 *)(local_288 + 0x20 + lVar18);
                  *puVar14 = (undefined4)local_208;
                  puVar14[1] = local_208._4_4_;
                  puVar14[2] = (undefined4)uStack_200;
                  puVar14[3] = uStack_200._4_4_;
                  puVar14 = (undefined4 *)(local_288 + 0x10 + lVar18);
                  *puVar14 = (undefined4)local_218;
                  puVar14[1] = local_218._4_4_;
                  puVar14[2] = (undefined4)uStack_210;
                  puVar14[3] = uStack_210._4_4_;
                  puVar14 = (undefined4 *)(local_288 + lVar18);
                  *puVar14 = (undefined4)local_228;
                  puVar14[1] = local_228._4_4_;
                  puVar14[2] = (undefined4)uStack_220;
                  puVar14[3] = uStack_220._4_4_;
                  *(undefined8 *)(local_288 + 0x38 + lVar18) = uVar13;
                  *(longlong **)(local_288 + 0x40 + lVar18) = plVar16;
                  if (plVar16 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                    UNLOCK();
                  }
                  lVar18 = local_288 + lVar18;
                  *(char *)(lVar18 + 0x58) = (char)local_310;
                  if ((local_310 & 1) != 0) {
                    *(undefined4 *)(lVar18 + 0x48) = local_248;
                    *(undefined4 *)(lVar18 + 0x4c) = uStack_244;
                    *(undefined4 *)(lVar18 + 0x50) = uStack_240;
                    *(undefined4 *)(lVar18 + 0x54) = uStack_23c;
                  }
                  if (plVar16 != (longlong *)0x0) {
                    LOCK();
                    plVar7 = plVar16 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      (**(code **)*plVar16)(plVar16);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar16 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar16 + 0x10))(plVar16);
                      }
                    }
                  }
                  puVar14 = local_80;
                  if (local_80 == (undefined4 *)0x0) {
                    puVar14 = &uStack_1a0;
                  }
                  puVar14 = (undefined4 *)((longlong)puVar14 + lVar19);
                  bVar23 = 1;
                  if (puVar14 != &local_1e8) {
                    local_1b8 = *(longlong *)(puVar14 + 0xc);
                    local_1e8 = *puVar14;
                    uStack_1e4 = puVar14[1];
                    uStack_1e0 = puVar14[2];
                    uStack_1dc = puVar14[3];
                    local_1d8 = *(longlong *)(puVar14 + 4);
                    uStack_1d0 = *(longlong *)(puVar14 + 6);
                    local_1c8 = *(longlong *)(puVar14 + 8);
                    uStack_1c0 = *(longlong *)(puVar14 + 10);
                  }
                  break;
                }
                lVar19 = lVar19 + 0x48;
                bVar23 = 0;
              } while ((longlong)(int)local_78 * 0x48 != lVar19);
            }
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar6 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
          if (bVar23 == 0) break;
          lVar22 = lVar22 + 1;
        } while (lVar22 < (longlong)(int)uStack_270 + -1);
        bVar17 = local_2fc != 1 | bVar23;
        uVar15 = local_78 & 0xffffffff;
        bVar23 = bVar23 ^ 1;
      }
      puVar14 = &uStack_1a0;
      if (local_80 != (undefined4 *)0x0) {
        puVar14 = local_80;
      }
      FUN_1447157bd(puVar14,uVar15);
      if (local_80 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      bVar25 = 1;
      if (bVar17 == 0) goto LAB_1404de6d5;
    }
    plVar16 = local_2e8;
    puVar14 = local_308;
    uVar12 = (int)uStack_280;
  }
  *plVar16 = local_288;
  *(undefined4 *)(plVar16 + 1) = uVar12;
  FUN_14493a2ae(&local_1a8);
  *(undefined1 *)puVar14 = (undefined1)local_1a8;
  FUN_1400e223c(puVar14 + 2,&uStack_1a0);
  plVar16 = plStack_60;
  *(undefined1 *)(puVar14 + 0x4e) = local_70;
  if (&local_1a8 != (undefined8 *)puVar14) {
    *(undefined8 *)(puVar14 + 0x50) = local_68;
    local_68 = 0;
    plVar6 = *(longlong **)(puVar14 + 0x52);
    if (plStack_60 != plVar6) {
      plStack_60 = (longlong *)0x0;
      *(longlong **)(puVar14 + 0x52) = plVar16;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar6 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
    }
  }
  FUN_1400e21ec(puVar14 + 0x54,&local_58);
  FUN_1447fa2ac(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar16 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_60 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar16 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  puVar14 = &uStack_1a0;
  if (local_80 != (undefined4 *)0x0) {
    puVar14 = local_80;
  }
  FUN_1447157bd(puVar14,local_78 & 0xffffffff);
  bVar25 = bVar23;
  if (local_80 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_1404de6d5:
  FUN_14493a258(local_288,uStack_280 & 0xffffffff);
  if (local_288 != 0) {
    FUN_1400020a8();
  }
LAB_1404de6fb:
  if ((char)local_314 == '\0') {
    LOCK();
    plVar16 = plVar20 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar3 = (int *)((longlong)plVar20 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  FUN_144a81ee1(local_278,uStack_270 & 0xffffffff);
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar25;
}



// FUNCTION 1404de840 FUN_1404de840 body=112 status=ok
// SIG undefined FUN_1404de840(void)

undefined8 FUN_1404de840(undefined4 param_1)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_60;
  local_60 = 0;
  local_48 = 0;
  local_38 = &PTR_LAB_14ab49ff0;
  local_58[0] = &LAB_1437e72ae;
  local_28 = param_1;
  FUN_1449cc10c(local_58);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404de8b8 FUN_1404de8b8 body=149 status=ok
// SIG undefined FUN_1404de8b8(void)

ulonglong FUN_1404de8b8(ushort *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  
  uVar2 = *(ulonglong *)(param_1 + 0x1c);
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar5 = (ulonglong)*param_1;
  if ((&DAT_14ca814b8)[uVar5 * 0xf] == 1) {
    uVar3 = FUN_143224a65();
    uVar4 = (ulonglong)uVar3 ^ 1;
    uVar5 = (ulonglong)*param_1;
  }
  else {
    uVar4 = 0;
  }
  uVar3 = FUN_140052d29(uVar5);
  uVar5 = (ulonglong)uVar3 ^ 1;
  if ((((uint)uVar2 >> 8 & 1) != 0) && ((char)uVar3 == '\0')) {
    uVar5 = (ulonglong)
            (byte)((byte)(uVar2 >> 0x19) & 1 | (byte)((uVar2 & 0xffffffff) >> 4) & 0xf & uVar1 < 2);
  }
  bVar6 = (byte)uVar4 | *(byte *)(*(longlong *)(param_1 + 0x24) + 0x29);
  uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar6) ^ 1;
  if (((uVar2 & 2) == 0) && ((bVar6 & 1) == 0)) {
    uVar4 = CONCAT71((int7)(uVar5 >> 8),
                     (byte)uVar5 |
                     (byte)(uint)((ulonglong)*(undefined8 *)(param_1 + 0x1c) >> 0x2a) & 1);
  }
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 1404de958 FUN_1404de958 body=1146 status=ok
// SIG undefined FUN_1404de958(void)

void FUN_1404de958(longlong param_1,byte *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  int iVar13;
  byte bVar14;
  longlong lVar15;
  byte *pbVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_b8 [40];
  float *local_90;
  uint local_88;
  float local_84;
  float *local_80;
  uint local_78;
  float local_74;
  float *local_70;
  uint local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 == 1) {
    iVar13 = *(int *)(param_2 + 0x30);
    uVar9 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar13);
    *(int *)(param_2 + 0x30) = iVar13 + 1;
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar13 * 8);
    iVar13 = *(int *)(param_2 + 0x44) * uVar9;
    bVar14 = 1;
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    uVar9 = (uint)(uVar6 >> 0xf);
    lVar15 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar11 = (ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) + *(longlong *)(lVar15 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar15 + 0x20);
      lVar11 = 0;
      if (iVar13 <= (int)uVar10) {
        do {
          uVar10 = uVar10 - iVar13;
          iVar13 = (*(int **)(lVar15 + 0x20))[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (iVar13 <= (int)uVar10);
      }
      lVar11 = (longlong)(int)uVar10 + *(longlong *)(*(longlong *)(lVar15 + 0x18) + lVar11 * 8);
    }
    iVar13 = *(int *)(lVar15 + 0x4c) * uVar9;
    bVar14 = *param_2;
  }
  if ((bVar14 & 1) == 0) {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_70 = &local_64;
      local_68 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_2 + 0x80);
      local_68 = 1;
      local_70 = (float *)((ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) +
                           *(longlong *)(lVar15 + 0x70) + (longlong)*(int *)(lVar15 + 0x4c) * 4);
    }
  }
  else {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_68 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_70 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_78 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_80 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_80 = &local_74;
      local_78 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_2 + 0x80);
      local_78 = 1;
      local_80 = (float *)((ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) +
                           *(longlong *)(lVar15 + 0x70) + (longlong)*(int *)(lVar15 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar14 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_88 = (uint)bVar14;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_90 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar14 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar8;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar6 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_90 = &local_84;
      local_88 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_2 + 0x80);
      local_88 = 1;
      local_90 = (float *)((ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) +
                           *(longlong *)(lVar15 + 0x70) + (longlong)*(int *)(lVar15 + 0x4c) * 4);
    }
  }
  pbVar16 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar16 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar16) {
    pfVar12 = (float *)(lVar11 + (longlong)iVar13 * 4);
    iVar13 = 0;
    do {
      fVar2 = *(float *)(param_1 + 0x54);
      fVar17 = (*pfVar12 - *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x50) * fVar2;
      if (fVar2 <= fVar17) {
        fVar17 = fVar2;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      auVar19 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17),3);
      fVar18 = auVar19._0_4_;
      fVar17 = fVar17 - fVar18;
      lVar11 = *(longlong *)(param_1 + 0x38);
      lVar15 = (longlong)(int)(fVar18 * 3.0);
      fVar3 = *(float *)(lVar11 + 8 + lVar15 * 4);
      fVar4 = *(float *)(lVar11 + lVar15 * 4);
      fVar5 = *(float *)(lVar11 + 4 + lVar15 * 4);
      lVar15 = (longlong)
               (int)((float)(~-(uint)(fVar18 < fVar2) & (uint)fVar18 |
                            (uint)(fVar18 + 1.0) & -(uint)(fVar18 < fVar2)) * 3.0);
      fVar2 = *(float *)(lVar11 + 8 + lVar15 * 4);
      fVar18 = *(float *)(lVar11 + 4 + lVar15 * 4);
      *local_70 = (*(float *)(lVar11 + lVar15 * 4) - fVar4) * fVar17 + fVar4;
      local_70 = local_70 + (int)local_68;
      *local_80 = (fVar18 - fVar5) * fVar17 + fVar5;
      pfVar1 = local_90 + (int)local_88;
      local_80 = local_80 + (int)local_78;
      *local_90 = (fVar2 - fVar3) * fVar17 + fVar3;
      iVar13 = iVar13 + 1;
      pbVar16 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar16 = param_2 + 0x3c;
      }
      pfVar12 = (float *)((longlong)pfVar12 + (ulonglong)(uVar9 << 2));
      local_90 = pfVar1;
    } while (iVar13 < *(int *)pbVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404dedd4 FUN_1404dedd4 body=623 status=ok
// SIG undefined FUN_1404dedd4(void)

void FUN_1404dedd4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x408) < 0xd) {
    FUN_1404df0ae(param_2);
    iVar6 = *(int *)(param_1 + 0x408);
    if ((longlong)iVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x400);
      lVar7 = 0;
      do {
        iVar4 = *(int *)(lVar2 + 0xe4 + lVar7);
        if (((iVar4 != 0) && (uVar1 = *(uint *)(lVar2 + 0xe0 + lVar7), -1 < (int)uVar1)) &&
           ((int)uVar1 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar4)) &&
             (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (local_98 = *plVar5, local_98 != 0)))) {
            FUN_1404df044(param_2,&local_98);
          }
        }
        lVar7 = lVar7 + 0x108;
      } while ((longlong)iVar6 * 0x108 != lVar7);
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_1479f0748(param_1,&local_98);
    FUN_1404df0ae(param_2,(int)uStack_90 - local_64);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar6 = 0;
    local_b0 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar6 = local_70;
    }
    local_c8 = local_a8;
    uVar3 = local_c8;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = &local_98;
    if ((local_c8._4_4_ != iVar6) || (local_b0 != local_88)) {
      iVar4 = local_c8._4_4_;
      local_c8 = uVar3;
      do {
        uVar3 = *(undefined8 *)(*local_e0 + (longlong)iVar4 * 0x10);
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_140c43e06(param_2,iVar4);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = uVar3;
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
        FUN_1449c0562(&local_d8);
        iVar4 = local_c8._4_4_;
        uVar3 = local_c8;
      } while (local_e0 != &local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar6));
    }
    local_c8 = uVar3;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_141361a2c(&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404df044 FUN_1404df044 body=105 status=ok
// SIG undefined FUN_1404df044(void)

ulonglong FUN_1404df044(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1404df08b;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140c43e06(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1404df08b:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1404df0ae FUN_1404df0ae body=42 status=ok
// SIG undefined FUN_1404df0ae(void)

void FUN_1404df0ae(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140337ccc();
    return;
  }
  return;
}



// FUNCTION 1404df0da FUN_1404df0da body=92 status=ok
// SIG undefined FUN_1404df0da(void)

void FUN_1404df0da(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ac0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404df137 FUN_1404df137 body=813 status=ok
// SIG undefined FUN_1404df137(void)

longlong * FUN_1404df137(longlong *param_1,longlong *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_1449cc1de();
  lVar4 = param_2[0x31];
  if ((lVar4 == 0) && (lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar4 == 0)) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *param_1 = lVar4;
  lVar4 = param_2[0x32];
  if ((lVar4 == 0) && (lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar4 == 0)) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  param_1[1] = lVar4;
  lVar4 = param_2[0x34];
  if ((lVar4 == 0) && (lVar4 = *(longlong *)(DAT_14ca94dc0 + 0x10), lVar4 == 0)) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  param_1[2] = lVar4;
  lVar4 = param_2[0x35];
  if ((lVar4 == 0) && (lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar4 == 0)) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  param_1[3] = lVar4;
  plVar5 = param_2;
  plVar6 = param_1 + 4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_2 + 0xc;
  plVar6 = param_1 + 0x10;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_2 + 0x18;
  plVar6 = param_1 + 0x1c;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_2 + 0x24;
  plVar6 = param_1 + 0x28;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  *(int *)(param_1 + 0x34) = (int)param_2[0x30];
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)((longlong)param_2 + 0x184);
  *(int *)(param_1 + 0x35) = (int)param_2[0x36];
  dVar2 = (double)param_2[0x39];
  dVar3 = (double)param_2[0x38];
  *(float *)(param_1 + 0x36) = (float)(double)param_2[0x37];
  *(float *)((longlong)param_1 + 0x1b4) = (float)dVar3;
  *(float *)(param_1 + 0x37) = (float)dVar2;
  dVar2 = (double)param_2[0x3c];
  dVar3 = (double)param_2[0x3b];
  *(float *)(param_1 + 0x38) = (float)(double)param_2[0x3a];
  *(float *)((longlong)param_1 + 0x1c4) = (float)dVar3;
  *(float *)(param_1 + 0x39) = (float)dVar2;
  fVar1 = *(float *)((longlong)param_2 + 0x1ec);
  *(float *)((longlong)param_1 + 0x1cc) = fVar1;
  *(float *)(param_1 + 0x3a) = 1.0 / fVar1;
  *(int *)((longlong)param_1 + 0x1d4) = (int)param_2[0x3e];
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)((longlong)param_2 + 500);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = DAT_14c760260;
  *(undefined4 *)(param_1 + 0x3c) = DAT_14c760264;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = DAT_14c760268;
  *(undefined4 *)(param_1 + 0x3d) = DAT_14c76026c;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = DAT_14c760270;
  lVar4 = DAT_14c9cfce8;
  param_1[0x3e] = DAT_14c9cfce8;
  param_1[0x3f] = lVar4;
  param_1[0x40] = DAT_14c9cfda8;
  lVar4 = param_2[0x3f];
  if ((lVar4 == 0) && (lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar4 == 0)) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  param_1[0x41] = lVar4;
  lVar4 = param_2[0x40];
  if ((lVar4 == 0) && (lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar4 == 0)) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  param_1[0x42] = lVar4;
  return param_1;
}



// FUNCTION 1404df464 FUN_1404df464 body=553 status=ok
// SIG undefined FUN_1404df464(void)

void FUN_1404df464(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  undefined1 local_e8 [176];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = FUN_1404df6a8();
  if (lVar4 == 0) goto LAB_1404df56c;
  FUN_1404df75a(param_1);
  if (*(int *)(param_1 + 0x414) < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_118);
  }
  local_38 = 0;
  uStack_30 = 0x3f80000000000000;
  lVar4 = *(longlong *)(param_1 + 0x3f8);
  if (lVar4 == 0) {
    uVar5 = FUN_145c272be();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x3f8) = lVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x3f0);
  lVar6 = *(longlong *)(param_1 + 0x400);
  if (lVar6 == 0) {
    if ((lVar4 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar1);
          *(longlong *)(param_1 + 0x400) = lVar6;
          if (lVar6 != 0) {
            lVar4 = *(longlong *)(param_1 + 0x3f8);
            goto LAB_1404df50d;
          }
          goto LAB_1404df522;
        }
      }
      *(undefined8 *)(param_1 + 0x400) = 0;
    }
  }
  else {
LAB_1404df50d:
    if (lVar4 == 0) {
      uVar5 = FUN_145c272be();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x3f8) = lVar4;
      lVar6 = *(longlong *)(param_1 + 0x400);
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if (plVar2 == (longlong *)0x0) {
LAB_1404df6a4:
          lVar6 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
          if (cVar3 == '\0') goto LAB_1404df6a4;
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar1);
        }
        *(longlong *)(param_1 + 0x400) = lVar6;
      }
    }
    local_38 = *(undefined8 *)(lVar6 + 0x48);
    uStack_30 = *(undefined8 *)(lVar6 + 0x50);
  }
LAB_1404df522:
  local_f0 = (double)*(float *)(param_3 + 0x34);
  local_f8 = (double)*(float *)(param_3 + 0x30);
  FUN_140484538(local_e8,&DAT_14c8463f0,&local_f8,&local_38);
  FUN_140484502(param_3,local_e8);
  *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + -1;
LAB_1404df56c:
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404df6a8 FUN_1404df6a8 body=177 status=ok
// SIG undefined FUN_1404df6a8(void)

undefined8 FUN_1404df6a8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x3e0);
  if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0x3dc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x3d8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x3dc))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,local_20);
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,local_20);
      goto LAB_1404df733;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x3d0);
LAB_1404df733:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404df75a FUN_1404df75a body=284 status=ok
// SIG undefined FUN_1404df75a(void)

void FUN_1404df75a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    fVar5 = 0.7853982;
  }
  else {
    fVar5 = *(float *)(*(longlong *)(param_1 + 0x3c0) + 0x38c) * 0.5 * 0.017453292;
  }
  lVar2 = FUN_1404df6a8(param_1);
  puVar3 = &DAT_14c967818;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x50);
  }
  uVar1 = *puVar3;
  fVar5 = tanf(fVar5);
  uVar4 = FUN_140083894();
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 == 0) {
    local_38 = DAT_14c8464f0;
    local_48 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_40 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_48 = *(undefined8 *)(lVar2 + 0x260);
    uStack_40 = *(undefined8 *)(lVar2 + 0x268);
    local_38 = *(undefined8 *)(lVar2 + 0x270);
  }
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0x3f800000;
  FUN_1404df878(uVar4,&local_48,(float)(int)uVar1,(float)(int)uVar1 / fVar5);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404df878 FUN_1404df878 body=377 status=ok
// SIG undefined FUN_1404df878(void)

void FUN_1404df878(undefined8 param_1,double *param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,undefined1 param_6,float param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  float fVar2;
  
  if (((ABS(*param_2) < 1.0000000200408773e+20) && (ABS(param_2[1]) < 1.0000000200408773e+20)) &&
     (ABS(param_2[2]) < 1.0000000200408773e+20)) {
    fVar2 = *DAT_14cb0b0f0;
    if (*DAT_14cb0b0f0 <= *DAT_14cb0b0d8) {
      fVar2 = *DAT_14cb0b0d8;
    }
    if (DAT_14cad39a8 == '\x01') {
      DAT_14cad39a8 = '\0';
      FUN_1404df9f2(DAT_14cb0b0f0,0);
    }
    if (param_7 <= 0.0) {
      FUN_1404dfadc(&DAT_14cad3988,param_2);
    }
    if (0.0 < param_7) {
      puVar1 = &DAT_14cad3988;
    }
    else {
      param_7 = 0.0;
      puVar1 = &DAT_14cad3978;
    }
    FUN_1404dfbb8(puVar1,param_2,param_3,param_4,fVar2 * param_5,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 1404df9f2 FUN_1404df9f2 body=124 status=ok
// SIG undefined FUN_1404df9f2(void)

void FUN_1404df9f2(undefined8 param_1,int param_2)

{
  DAT_14cad3980 = 0;
  if (DAT_14cad3984 != 0) {
    FUN_1404dfa6e(&DAT_14cad3978,0);
  }
  DAT_14cad39a0 = 0;
  if (DAT_14cad39a4 != 0) {
    FUN_147a3c00e(&DAT_14cad3998,0);
  }
  if ((param_2 == 1) && (DAT_14cad3990 = 0, DAT_14cad3994 != 0)) {
    FUN_1404dfa6e(&DAT_14cad3988,0);
    return;
  }
  return;
}



// FUNCTION 1404dfa6e FUN_1404dfa6e body=109 status=ok
// SIG undefined FUN_1404dfa6e(void)

void FUN_1404dfa6e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 1404dfadc FUN_1404dfadc body=219 status=ok
// SIG undefined FUN_1404dfadc(void)

void FUN_1404dfadc(longlong *param_1,double *param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    uVar3 = 0;
    do {
      lVar1 = *param_1;
      if (((ABS(*param_2 - *(double *)(lVar1 + (longlong)(int)uVar3 * 0x38)) <= 0.5) &&
          (_Dst = (void *)((longlong)(int)uVar3 * 0x38 + lVar1),
          ABS(param_2[1] - *(double *)((longlong)_Dst + 8)) <= 0.5)) &&
         (ABS(param_2[2] - *(double *)((longlong)_Dst + 0x10)) <= 0.5)) {
        iVar4 = ~uVar3 + iVar2;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar5) * 0x38),(longlong)iVar5 * 0x38);
          iVar2 = (int)param_1[1];
        }
        uVar3 = uVar3 - 1;
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_147a3bec8(param_1);
        iVar2 = (int)param_1[1];
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
  }
  return;
}



// FUNCTION 1404dfbb8 FUN_1404dfbb8 body=467 status=ok
// SIG undefined FUN_1404dfbb8(void)

void FUN_1404dfbb8(longlong *param_1,double *param_2,float param_3,float param_4,float param_5,
                  char param_6,undefined4 param_7,undefined8 param_8)

{
  double dVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)uVar7;
  if ((int)uVar7 < 1) {
LAB_1404dfc07:
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar7 + 1) {
      FUN_1404dfd8c(param_1,uVar7);
    }
    lVar2 = *param_1;
    lVar4 = (longlong)(int)uVar7 * 0x38;
    *(double *)(lVar2 + 0x10 + lVar4) = param_2[2];
    dVar1 = param_2[1];
    *(double *)(lVar2 + lVar4) = *param_2;
    ((double *)(lVar2 + lVar4))[1] = dVar1;
    *(float *)(lVar2 + 0x18 + lVar4) = param_3;
    *(float *)(lVar2 + 0x1c + lVar4) = param_4;
    *(float *)(lVar2 + 0x20 + lVar4) = param_5;
    *(undefined4 *)(lVar2 + 0x24 + lVar4) = param_7;
    *(char *)(lVar2 + 0x28 + lVar4) = param_6;
    *(undefined8 *)(lVar2 + 0x2c + lVar4) = param_8;
  }
  else {
    bVar3 = true;
    lVar2 = 0;
    do {
      pcVar5 = (char *)(*param_1 + lVar2 * 0x38 + 0x28);
      uVar7 = (uint)uVar6;
      while ((((0.5 < ABS(*param_2 - *(double *)(pcVar5 + -0x28)) ||
               (0.5 < ABS(param_2[1] - *(double *)(pcVar5 + -0x20)))) ||
              (0.5 < ABS(param_2[2] - *(double *)(pcVar5 + -0x18)))) ||
             (((1e-08 < ABS(param_3 - *(float *)(pcVar5 + -0x10)) ||
               (1e-08 < ABS(param_4 - *(float *)(pcVar5 + -0xc)))) || (*pcVar5 != param_6))))) {
        lVar2 = lVar2 + 1;
        pcVar5 = pcVar5 + 0x38;
        if ((int)uVar7 <= lVar2) {
          if (!bVar3) {
            return;
          }
          goto LAB_1404dfc07;
        }
      }
      *(undefined4 *)(pcVar5 + -4) = param_7;
      uVar7 = -(uint)(ABS(param_5 + -1.0) <= 1e-08);
      *(uint *)(pcVar5 + -8) = ~uVar7 & (uint)param_5 | *(uint *)(pcVar5 + -8) & uVar7;
      uVar6 = (ulonglong)(int)param_1[1];
      lVar2 = lVar2 + 1;
      bVar3 = false;
    } while (lVar2 < (longlong)uVar6);
  }
  return;
}



// FUNCTION 1404dfd8c FUN_1404dfd8c body=366 status=ok
// SIG undefined FUN_1404dfd8c(void)

void FUN_1404dfd8c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1404dfe11;
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
LAB_1404dfe11:
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



// FUNCTION 1404e046a FUN_1404e046a body=213 status=ok
// SIG undefined FUN_1404e046a(void)

uint * FUN_1404e046a(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x1328);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    param_2[1] = 0;
  }
  else {
    param_2[1] = 0;
    if (lVar4 == 0) {
      *param_2 = 0;
      uVar2 = 0;
      goto LAB_1404e04cb;
    }
  }
  uVar2 = *(uint *)(lVar4 + 0xc);
  *param_2 = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  uVar2 = *(uint *)(lVar4 + 0x10);
  if (*(uint *)(lVar4 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar3 = DAT_14c964868 + 1;
    bVar5 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar5) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar3);
    }
    LOCK();
    uVar2 = *(uint *)(lVar4 + 0x10);
    bVar5 = uVar2 == 0;
    if (bVar5) {
      *(uint *)(lVar4 + 0x10) = uVar3;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar5) {
      uVar2 = uVar3;
    }
  }
LAB_1404e04cb:
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1404e0540 FUN_1404e0540 body=721 status=ok
// SIG undefined FUN_1404e0540(void)

void FUN_1404e0540(longlong param_1,longlong *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11,char param_12,float param_13,undefined4 *param_14)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  undefined1 auStack_1a8 [40];
  undefined **local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  double local_140;
  double local_138;
  undefined4 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar3 = FUN_1404e0812();
  if ((param_2 != (longlong *)0x0) && (cVar3 != '\0')) {
    dVar2 = (double)param_11;
    local_100 = (**(code **)(*param_2 + 0x2f0))();
    local_170 = (double)param_4;
    local_178 = (double)param_3;
    local_158 = 0;
    local_168 = 0;
    local_160 = 0;
    local_150 = &DAT_3f8000003f800000;
    puStack_148 = &DAT_3f8000003f800000;
    local_180 = &PTR_FUN_14aaeb770;
    local_130 = 0x3f800000;
    local_108 = 0;
    local_f0 = (double)param_13;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = *param_14;
    uStack_dc = param_14[1];
    uStack_d8 = param_14[2];
    uStack_d4 = param_14[3];
    if (param_12 != '\0') {
      local_178 = local_178 * dVar2;
      local_170 = local_170 * dVar2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x2e0);
    local_140 = (double)param_5 * dVar2;
    local_138 = (double)param_6 * dVar2;
    local_128 = (double)param_7;
    local_120 = (double)param_8;
    local_118 = (double)(param_7 + param_9);
    local_110 = (double)(param_8 + param_10);
    FUN_1405054c0(&local_180,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e0812 FUN_1404e0812 body=792 status=ok
// SIG undefined FUN_1404e0812(void)

bool FUN_1404e0812(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  wchar_t *local_100;
  longlong *local_f8;
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0 [2];
  undefined1 local_b0 [8];
  undefined1 local_a8 [48];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  wchar_t *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_1 + 0x3e0);
  if (lVar4 == 0) {
    FUN_1446ddc76(local_b0,&DAT_14a492018,1);
    FUN_14276766e(local_a8,local_b0);
    FUN_144a5dc74(local_c0);
    FUN_1427679d4(local_a8,&local_78,local_c0);
    FUN_144a5dc74(local_f0);
    FUN_1468756a4(&local_e0,param_1,local_f0);
    local_d0 = local_e0;
    local_c8 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(local_78,&local_68,&local_d0);
    local_48 = L"PIE_Warning_Message_CanvasCallOutsideOfDrawCanvas";
    local_40._0_4_ = 0x31;
    FUN_1446e940c(local_114,&local_48);
    local_48 = L"HUD";
    local_40 = (longlong *)CONCAT44(local_40._4_4_,3);
    FUN_1446e940c(local_118,&local_48);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Canvas Draw functions may only be called during the handling of the DrawHUD event"
                 );
    FUN_1467eb2e4(&local_100,local_110,1);
    local_48 = local_100;
    local_40 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(local_68,local_58,&local_48);
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
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar2 = (int *)((longlong)local_f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    plVar1 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
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
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    FUN_1427678c0(local_a8);
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e0b2c FUN_1404e0b2c body=14 status=ok
// SIG undefined FUN_1404e0b2c(void)

void FUN_1404e0b2c(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1404e0b3a();
    return;
  }
  return;
}



// FUNCTION 1404e0b3a FUN_1404e0b3a body=453 status=ok
// SIG undefined FUN_1404e0b3a(void)

void FUN_1404e0b3a(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0xc);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1404e0c58:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1404e0c95:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xc;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1404e0b93;
LAB_1404e0b88:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1404e0b93:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x154e) goto code_r0x0001404e0bbf;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1404e0c15:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1404e0c95;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1404e0c58;
code_r0x0001404e0bbf:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1404e0c15;
    }
  }
  goto LAB_1404e0b88;
}



// FUNCTION 1404e0d14 FUN_1404e0d14 body=57 status=ok
// SIG undefined FUN_1404e0d14(void)

void FUN_1404e0d14(longlong *param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
    if ((*(char *)((longlong)param_1 + 0x31) == '\x01') && ((char)param_1[6] == '\x01')) {
      *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) | 0x10;
    }
    else {
      *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xef;
    }
  }
  return;
}



// FUNCTION 1404e0d62 FUN_1404e0d62 body=511 status=ok
// SIG undefined FUN_1404e0d62(void)

void FUN_1404e0d62(undefined8 param_1,double *param_2,double *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_108 [32];
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
  double local_b0;
  double local_a8;
  double local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar4 = *param_3;
  dVar3 = param_3[1];
  dVar1 = param_3[2];
  if (0.0 < DAT_14cb39df0) {
    dVar5 = dVar1 - param_2[2];
    dVar7 = dVar3 - param_2[1];
    dVar6 = dVar4 - *param_2;
    dVar2 = SQRT(dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
    if ((double)DAT_14cb39df0 < dVar2) {
      dVar2 = (double)DAT_14cb39df0 / dVar2;
      dVar1 = param_2[2] + dVar5 * dVar2;
      dVar3 = param_2[1] + dVar7 * dVar2;
      dVar4 = *param_2 + dVar6 * dVar2;
    }
  }
  local_88 = param_2[2];
  local_98 = *(undefined4 *)param_2;
  uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_90 = *(undefined4 *)(param_2 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_1404e0f62(param_1,DAT_14cb39dd0);
  local_b0 = dVar4;
  local_a8 = dVar3;
  local_a0 = dVar1;
  FUN_1404e0f62(param_1,DAT_14cb39de0);
  local_b8 = *(undefined8 *)(param_4 + 4);
  local_c8 = *param_4;
  uStack_c4 = param_4[1];
  uStack_c0 = param_4[2];
  uStack_bc = param_4[3];
  FUN_1404e0f62(param_1,DAT_14cb39dd8);
  local_d8 = *(undefined8 *)(param_5 + 4);
  local_e8 = *param_5;
  uStack_e4 = param_5[1];
  uStack_e0 = param_5[2];
  uStack_dc = param_5[3];
  FUN_1404e0f62(param_1,DAT_14cb39de8);
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e0f62 FUN_1404e0f62 body=479 status=ok
// SIG undefined FUN_1404e0f62(void)

void FUN_1404e0f62(longlong param_1,undefined8 param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  float *local_b8;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined8 local_68;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x678);
  local_68 = param_2;
  lVar2 = FUN_1404e123c(plVar1,&local_68);
  if (lVar2 != 0) {
    local_78 = param_3[2];
    local_88 = *(undefined4 *)param_3;
    uStack_84 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_80 = *(undefined4 *)(param_3 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1404e1568(param_1,local_68);
    goto LAB_1404e1039;
  }
  fVar5 = (float)param_3[2];
  fVar6 = (float)param_3[1];
  fVar7 = (float)*param_3;
  local_a8 = local_68;
  local_a0[0] = FUN_144830b78(local_a0,&DAT_14cb42140);
  local_98 = 0;
  uStack_90 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    pfVar3 = (float *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_a8,0);
    if (pfVar3 == (float *)0x0) {
      local_5c = -NAN;
    }
    else {
      local_5c = *pfVar3;
      lVar2 = (longlong)(int)local_5c;
      if (lVar2 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x698);
        *(float *)(lVar4 + lVar2) = fVar7;
        *(float *)(lVar4 + 4 + lVar2) = fVar6;
        *(float *)(lVar4 + 8 + lVar2) = fVar5;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_1404e102b;
      }
    }
    local_b8 = &local_5c;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(plVar1,&local_a8,0,0);
    lVar4 = (longlong)(int)local_5c;
    lVar2 = *(longlong *)(param_1 + 0x698);
    *(float *)(lVar2 + lVar4) = fVar7;
    *(float *)(lVar2 + 4 + lVar4) = fVar6;
    *(float *)(lVar2 + 8 + lVar4) = fVar5;
    FUN_140219f72(plVar1);
  }
  else {
    local_5c = fVar7;
    local_58 = fVar6;
    local_54 = fVar5;
    FUN_1404e1142(*(longlong *)(param_1 + 0x760),local_68);
  }
LAB_1404e102b:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_1404e1039:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e1142 FUN_1404e1142 body=248 status=ok
// SIG undefined FUN_1404e1142(void)

void FUN_1404e1142(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1404e11d0;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42140);
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  piVar3 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
  if (piVar3 == (int *)0x0) {
    local_24 = -1;
LAB_1404e11f7:
    local_58 = &local_24;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_48,0,0);
    lVar4 = plVar1[4];
    *(undefined4 *)(lVar4 + 8 + (longlong)local_24) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar4 + local_24) = *param_3;
    FUN_140219f72(plVar1);
  }
  else {
    local_24 = *piVar3;
    lVar4 = (longlong)local_24;
    if (lVar4 == -1) goto LAB_1404e11f7;
    lVar2 = plVar1[4];
    *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar2 + lVar4) = *param_3;
    *(byte *)(plVar1 + 0x10) = *(byte *)(plVar1 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1404e11d0:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e123c FUN_1404e123c body=811 status=ok
// SIG undefined FUN_1404e123c(void)

longlong FUN_1404e123c(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_2;
  local_50 = lVar6;
  iVar2 = FUN_144830b78(local_48,&DAT_14cb42130);
  local_40 = 0;
  uStack_38 = 0;
  local_48[0] = iVar2;
  puVar4 = (ulonglong *)FUN_144741050(local_48);
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar7 = (uint)lVar6 & 0xffff;
    uVar7 = (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar7) +
            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4);
    uVar1 = (ushort)puVar4[1];
    uVar3 = ((uint)(*puVar4 >> 0x14) & 0xffff ^ (uint)(*puVar4 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = (uint)(uVar1 >> 0xd) ^ (uVar3 >> 0x10 ^ uVar3) - (uint)uVar1;
    uVar12 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - (uint)uVar1;
    uVar13 = uVar12 >> 0xd ^ (uVar1 - uVar3) - uVar12;
    uVar3 = uVar13 >> 0xc ^ (uVar3 - uVar12) - uVar13;
    uVar12 = uVar3 << 0x10 ^ (uVar12 - uVar13) - uVar3;
    uVar13 = uVar12 >> 5 ^ (uVar13 - uVar3) - uVar12;
    uVar14 = uVar13 >> 3 ^ (uVar3 - uVar12) - uVar13;
    uVar3 = uVar14 << 10 ^ (uVar12 - uVar13) - uVar14;
    uVar3 = uVar3 >> 0xf ^ uVar13 - (uVar14 + uVar3);
    iVar11 = uVar3 - *(byte *)((longlong)puVar4 + 10);
    uVar12 = iVar11 * 0x100 ^ 0x9e3779b9 - uVar3;
    uVar13 = uVar12 >> 0xd ^ ((uint)*(byte *)((longlong)puVar4 + 10) - iVar11) - uVar12;
    uVar3 = uVar13 >> 0xc ^ (iVar11 - uVar12) - uVar13;
    uVar12 = uVar3 << 0x10 ^ (uVar12 - uVar13) - uVar3;
    uVar14 = uVar12 >> 5 ^ (uVar13 - uVar3) - uVar12;
    uVar13 = uVar14 >> 3 ^ (uVar3 - uVar12) - uVar14;
    uVar3 = uVar13 << 10 ^ (uVar12 - uVar14) - uVar13;
    uVar13 = uVar7 >> 0xd ^ (uVar3 >> 0xf ^ uVar14 - (uVar13 + uVar3)) - uVar7;
    uVar12 = uVar13 << 8 ^ (-0x61c88647 - uVar7) - uVar13;
    uVar3 = uVar12 >> 0xd ^ (uVar7 - uVar13) - uVar12;
    uVar7 = uVar3 >> 0xc ^ (uVar13 - uVar12) - uVar3;
    uVar13 = uVar7 << 0x10 ^ (uVar12 - uVar3) - uVar7;
    uVar12 = uVar13 >> 5 ^ (uVar3 - uVar7) - uVar13;
    uVar3 = uVar12 >> 3 ^ (uVar7 - uVar13) - uVar12;
    uVar7 = uVar3 << 10 ^ (uVar13 - uVar12) - uVar3;
    lVar8 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar8 = *(longlong *)(param_1 + 200);
    }
    iVar11 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(param_1 + 0xd0) - 1U &
                              (uVar7 >> 0xf ^ uVar12 - (uVar3 + uVar7))) * 4);
    if (iVar11 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar11 * 0x48);
        if ((*plVar5 == lVar6) &&
           (*(int *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)iVar11 * 0x48) == iVar2)) break;
        iVar11 = (int)plVar5[8];
        plVar5 = (longlong *)0x0;
      } while (iVar11 != -1);
      goto LAB_1404e14e3;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1404e14e3:
  if ((longlong)*(int *)(param_1 + 0x58) == 0) {
    lVar10 = 0;
  }
  else {
    plVar9 = plVar5 + 4;
    if (plVar5 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = param_2;
    }
    lVar6 = *(longlong *)(param_1 + 0x50) + 8;
    lVar8 = (longlong)*(int *)(param_1 + 0x58) << 5;
    do {
      lVar10 = lVar6;
      if (*(longlong *)(lVar6 + -8) == *plVar9) break;
      lVar6 = lVar6 + 0x20;
      lVar8 = lVar8 + -0x20;
      lVar10 = 0;
    } while (lVar8 != 0);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1404e1568 FUN_1404e1568 body=293 status=ok
// SIG undefined FUN_1404e1568(void)

void FUN_1404e1568(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80 [2];
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_2;
  lVar2 = FUN_1404e123c(param_1 + 0x678,&local_50);
  if (lVar2 == 0) {
    local_58 = *(undefined8 *)(param_3 + 4);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_1404e0f62(param_1,local_50);
  }
  else {
    local_88 = local_50;
    local_80[0] = FUN_144830b78(local_80,&DAT_14cb42130);
    local_78 = 0;
    uStack_70 = 0;
    if (*(longlong *)(param_1 + 0x760) == 0) {
      FUN_1404e168e(param_1 + 0x678,param_3,&local_50,1);
    }
    else {
      local_38 = *(undefined8 *)(param_3 + 4);
      local_48 = *param_3;
      uStack_44 = param_3[1];
      uStack_40 = param_3[2];
      uStack_3c = param_3[3];
      local_30 = local_50;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x760) + 0x28);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x60))(plVar1,&local_48,&local_30,1);
      }
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e168e FUN_1404e168e body=774 status=ok
// SIG undefined FUN_1404e168e(void)

undefined4 FUN_1404e168e(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58 [2];
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_3;
  local_60 = lVar2;
  iVar3 = FUN_144830b78(local_58,&DAT_14cb42130);
  local_50 = 0;
  uStack_48 = 0;
  local_58[0] = iVar3;
  puVar6 = (ulonglong *)FUN_144741050(local_58);
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar9 = (uint)lVar2 & 0xffff;
    uVar9 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
    uVar1 = (ushort)puVar6[1];
    uVar4 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = (uint)(uVar1 >> 0xd) ^ (uVar4 >> 0x10 ^ uVar4) - (uint)uVar1;
    uVar12 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - (uint)uVar1;
    uVar13 = uVar12 >> 0xd ^ (uVar1 - uVar4) - uVar12;
    uVar4 = uVar13 >> 0xc ^ (uVar4 - uVar12) - uVar13;
    uVar12 = uVar4 << 0x10 ^ (uVar12 - uVar13) - uVar4;
    uVar13 = uVar12 >> 5 ^ (uVar13 - uVar4) - uVar12;
    uVar14 = uVar13 >> 3 ^ (uVar4 - uVar12) - uVar13;
    uVar4 = uVar14 << 10 ^ (uVar12 - uVar13) - uVar14;
    uVar4 = uVar4 >> 0xf ^ uVar13 - (uVar14 + uVar4);
    iVar10 = uVar4 - *(byte *)((longlong)puVar6 + 10);
    uVar12 = iVar10 * 0x100 ^ 0x9e3779b9 - uVar4;
    uVar13 = uVar12 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar10) - uVar12;
    uVar4 = uVar13 >> 0xc ^ (iVar10 - uVar12) - uVar13;
    uVar12 = uVar4 << 0x10 ^ (uVar12 - uVar13) - uVar4;
    uVar14 = uVar12 >> 5 ^ (uVar13 - uVar4) - uVar12;
    uVar13 = uVar14 >> 3 ^ (uVar4 - uVar12) - uVar14;
    uVar4 = uVar13 << 10 ^ (uVar12 - uVar14) - uVar13;
    uVar13 = uVar9 >> 0xd ^ (uVar4 >> 0xf ^ uVar14 - (uVar13 + uVar4)) - uVar9;
    uVar12 = uVar13 << 8 ^ (-0x61c88647 - uVar9) - uVar13;
    uVar4 = uVar12 >> 0xd ^ (uVar9 - uVar13) - uVar12;
    uVar9 = uVar4 >> 0xc ^ (uVar13 - uVar12) - uVar4;
    uVar13 = uVar9 << 0x10 ^ (uVar12 - uVar4) - uVar9;
    uVar12 = uVar13 >> 5 ^ (uVar4 - uVar9) - uVar13;
    uVar4 = uVar12 >> 3 ^ (uVar9 - uVar13) - uVar12;
    uVar9 = uVar4 << 10 ^ (uVar13 - uVar12) - uVar4;
    lVar7 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar7 = *(longlong *)(param_1 + 200);
    }
    iVar10 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0xd0) - 1U &
                              (uVar9 >> 0xf ^ uVar12 - (uVar4 + uVar9))) * 4);
    if (iVar10 != -1) {
      do {
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar10 * 0x48);
        if ((*plVar8 == lVar2) &&
           (*(int *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)iVar10 * 0x48) == iVar3))
        goto LAB_1404e192e;
        iVar10 = (int)plVar8[8];
      } while (iVar10 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_1404e192e:
  plVar11 = plVar8 + 4;
  if (plVar8 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_3;
  }
  uVar5 = FUN_1404e1996(param_1,param_2,plVar11,param_4);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e1996 FUN_1404e1996 body=373 status=ok
// SIG undefined FUN_1404e1996(void)

ulonglong FUN_1404e1996(longlong *param_1,double *param_2,undefined8 *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  int *local_98;
  undefined8 local_88;
  undefined4 local_80 [2];
  longlong local_78;
  undefined8 uStack_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1404e1b0c(param_1,param_3,param_2);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  dVar3 = *param_2;
  local_88 = *param_3;
  local_80[0] = FUN_144830b78(local_80,&DAT_14cb42130);
  local_78 = 0;
  uStack_70 = 0;
  piVar4 = (int *)(**(code **)(*param_1 + 0x58))(param_1,&local_88,0);
  if (piVar4 == (int *)0x0) {
    local_64 = -1;
LAB_1404e1ab3:
    if (param_4 == '\0') {
      uVar7 = 0;
      goto LAB_1404e1a64;
    }
    local_98 = &local_64;
    (**(code **)(*param_1 + 0x10))(param_1,&local_88,0,0);
    lVar6 = (longlong)local_64;
    lVar5 = param_1[4];
    *(float *)(lVar5 + lVar6) = (float)dVar3;
    *(float *)(lVar5 + 4 + lVar6) = (float)dVar2;
    *(float *)(lVar5 + 8 + lVar6) = (float)dVar1;
    FUN_140219f72(param_1);
  }
  else {
    local_64 = *piVar4;
    lVar5 = (longlong)local_64;
    if (lVar5 == -1) goto LAB_1404e1ab3;
    lVar6 = param_1[4];
    *(float *)(lVar6 + lVar5) = (float)dVar3;
    *(float *)(lVar6 + 4 + lVar5) = (float)dVar2;
    *(float *)(lVar6 + 8 + lVar5) = (float)dVar1;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  }
  uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1404e1a64:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e1b0c FUN_1404e1b0c body=216 status=ok
// SIG undefined FUN_1404e1b0c(void)

void FUN_1404e1b0c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *(longlong *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x58);
  lVar10 = (longlong)iVar2;
  if (lVar10 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar8 + lVar9) == *param_2) {
        *(undefined8 *)(lVar8 + 0x18 + lVar9) = param_3[2];
        uVar3 = *(undefined4 *)((longlong)param_3 + 4);
        uVar4 = *(undefined4 *)(param_3 + 1);
        uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
        puVar1 = (undefined4 *)(lVar8 + 8 + lVar9);
        *puVar1 = *(undefined4 *)param_3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
      lVar9 = lVar9 + 0x20;
    } while (lVar10 << 5 != lVar9);
  }
  *(uint *)(param_1 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
    FUN_1481d71a0((longlong *)(param_1 + 0x50),iVar2);
    lVar8 = *(longlong *)(param_1 + 0x50);
  }
  lVar10 = lVar10 * 0x20;
  local_38 = param_3[2];
  uVar6 = *param_3;
  uVar7 = param_3[1];
  *(longlong *)(lVar8 + lVar10) = *param_2;
  *(undefined8 *)(lVar8 + 0x18 + lVar10) = local_38;
  local_48._0_4_ = (undefined4)uVar6;
  local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar7;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  puVar1 = (undefined4 *)(lVar8 + 8 + lVar10);
  *puVar1 = (undefined4)local_48;
  puVar1[1] = local_48._4_4_;
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
    local_48 = uVar6;
    uStack_40 = uVar7;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e1be5 FUN_1404e1be5 body=671 status=ok
// SIG undefined FUN_1404e1be5(void)

void FUN_1404e1be5(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5,byte param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar19;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar8 = *(undefined8 *)(param_3 + 8);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar8;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar1;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  uVar8 = *(undefined8 *)param_7[2];
  lVar4 = *(longlong *)param_7[1];
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(((longlong *)param_7[1])[1] + 8);
    lVar9 = (longlong)*(int *)(lVar4 + 0xd4);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar9 * 8);
    if (lVar4 == 0) {
      lVar4 = FUN_1400bafc2(lVar2,lVar9,1);
    }
  }
  uVar1 = *param_7;
  puVar7 = (undefined8 *)param_7[1];
  uVar5 = FUN_1404e1e84();
  FUN_1449cc26b(uVar1,lVar4,*puVar7,uVar5,uVar8);
  uVar10 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0xc);
  iVar6 = *(int *)(param_3 + 0x10) - *(int *)(param_3 + 8);
  bVar13 = (param_6 & 2) == 0;
  iVar11 = (int)param_4[1];
  fVar14 = (float)iVar11;
  iVar12 = (int)((ulonglong)param_4[1] >> 0x20);
  fVar15 = (float)((int)((ulonglong)param_4[2] >> 0x20) - iVar12);
  fVar16 = (float)((int)param_4[2] - iVar11);
  iVar11 = *(int *)(param_2 + 4);
  fVar17 = (float)iVar12;
  uVar8 = CONCAT44(uVar10,iVar6);
  if (iVar11 == -1 || ((~*(byte *)(param_2 + 0xc) & 1) != 0 || bVar13)) {
    FUN_140094833(param_1,param_5,
                  CONCAT71((int7)(((ulonglong)uVar10 << 0x20) >> 8),
                           iVar11 == -1 | ~*(byte *)(param_2 + 0xc) | bVar13),iVar11,
                  (float)(int)uVar10,fVar14,fVar17,fVar16,fVar15,uVar8,*param_4,param_5,
                  CONCAT44(uVar19,1),*(undefined4 *)(param_2 + 8));
  }
  else {
    FUN_142f2cc50(param_1,(float)(int)DAT_14c967818,(float)DAT_14c967818._4_4_,(float)iVar6,
                  (float)(int)uVar10,fVar14,fVar17,fVar16,fVar15,uVar8,*param_4,
                  CONCAT44(uVar18,iVar11),param_5,*(undefined4 *)(param_2 + 8));
  }
  return;
}



// FUNCTION 1404e1e84 FUN_1404e1e84 body=265 status=ok
// SIG undefined FUN_1404e1e84(void)

undefined * FUN_1404e1e84(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7490) {
    FUN_144b3d300(&DAT_14c9e7490);
    if (DAT_14c9e7490 == -1) {
      FUN_14571ab5c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0xa3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e7410,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cd3b49);
      _Init_thread_footer(&DAT_14c9e7490);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e7410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e1f8e FUN_1404e1f8e body=502 status=ok
// SIG undefined FUN_1404e1f8e(void)

void FUN_1404e1f8e(ulonglong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined5 uStack_74;
  undefined3 uStack_6f;
  undefined5 uStack_6c;
  undefined8 uStack_67;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar2 = 0;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_7c = 0;
  uStack_74 = 0;
  uStack_6f = 0;
  uStack_6c = 0;
  uStack_67 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 1;
  local_38 = 0;
  FUN_144b0e33a(0,&local_108);
  local_d8 = param_2[4];
  uStack_d0 = DAT_14c9c0db0;
  local_c8 = param_2[5];
  local_108 = param_2[6];
  if (*param_2 != 0) {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uStack_100 = lVar2;
  if (param_2[2] == 0) {
    lVar2 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(param_2[2] + 0xd4);
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[3] + 8) + 0x50) + lVar5 * 8);
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(param_2[3] + 8),lVar5,1);
    }
  }
  local_b0 = 0;
  bVar1 = *(byte *)(param_2 + 7);
  local_f8 = lVar2;
  lVar2 = FUN_140028f18(param_1);
  if ((lVar2 != 0) && ((local_40 & 0x10000000) == 0)) {
    *(undefined4 *)(param_1 + 0x35) = (undefined4)local_e8;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = local_e8._4_4_;
    *(undefined4 *)(param_1 + 0x36) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = uStack_e0._4_4_;
    *(undefined4 *)(param_1 + 0x33) = (undefined4)local_f8;
    *(undefined4 *)((longlong)param_1 + 0x19c) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 0x34) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_f0._4_4_;
    *(undefined4 *)(param_1 + 0x31) = (undefined4)local_108;
    *(undefined4 *)((longlong)param_1 + 0x18c) = local_108._4_4_;
    *(undefined4 *)(param_1 + 0x32) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)param_1 + 0x194) = uStack_100._4_4_;
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 4;
    if ((undefined8 *)param_1[1] < puVar4) {
      FUN_140023dd8(param_1,0x28);
      puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 4;
    }
    *param_1 = (ulonglong)puVar4;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar3;
    param_1[6] = (ulonglong)(puVar3 + 1);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_14a37d348;
    puVar3[2] = lVar2;
    *(uint *)(puVar3 + 3) = (uint)bVar1;
    *(undefined1 *)((longlong)puVar3 + 0x1c) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e2186 FUN_1404e2186 body=353 status=ok
// SIG undefined FUN_1404e2186(void)

void FUN_1404e2186(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404e220d;
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
LAB_1404e220d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1404e22e8 FUN_1404e22e8 body=159 status=ok
// SIG undefined FUN_1404e22e8(void)

void FUN_1404e22e8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1404e2388(param_2);
  *param_2 = &PTR_FUN_14b10ff30;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0x447a0000;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0xaaad1010;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x105) = 0;
  *(undefined4 *)(param_2 + 0x25) = 0xf;
  param_2[0x26] = 0;
  *(undefined1 *)(param_2 + 0x27) = 0;
  *(undefined1 *)((longlong)param_2 + 0x26) = 0;
  return;
}



// FUNCTION 1404e2388 FUN_1404e2388 body=323 status=ok
// SIG undefined FUN_1404e2388(void)

undefined8 * FUN_1404e2388(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab51200;
  param_1[3] = 0x4461000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
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
  FUN_1404e256a(param_1 + 5,&local_40);
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
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_1 + 0x4b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e24cc FUN_1404e24cc body=157 status=ok
// SIG undefined FUN_1404e24cc(void)

void FUN_1404e24cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1404e2506;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1404e2506;
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
LAB_1404e2506:
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
                    /* WARNING: Could not recover jumptable at 0x0001404e2565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1404e256a FUN_1404e256a body=301 status=ok
// SIG undefined FUN_1404e256a(void)

undefined8 * FUN_1404e256a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  
  plVar6 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *param_1 = plVar6;
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar6;
    param_1[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar6 + 8))();
    param_1[2] = 0;
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0xc);
      *(uint *)(param_1 + 2) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar4 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar5 + 0x10);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(lVar5 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar4 = iVar7;
        }
      }
      goto LAB_1404e25f1;
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  iVar4 = 0;
LAB_1404e25f1:
  *(int *)((longlong)param_1 + 0x14) = iVar4;
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
  return param_1;
}



// FUNCTION 1404e2698 FUN_1404e2698 body=151 status=ok
// SIG undefined FUN_1404e2698(void)

void FUN_1404e2698(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1[1] < 0x20001) {
    LOCK();
    UNLOCK();
    if (DAT_14c874dd0 < DAT_14c75d640) {
      DAT_14c874dd0 = DAT_14c874dd0 + 1;
      uVar1 = FUN_14493c560();
      if (uVar1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
      }
      *(longlong **)(lVar2 + 8) = param_1;
      FUN_1404e2730(&DAT_14c874dc8,uVar1);
      return;
    }
    LOCK();
    UNLOCK();
  }
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 1404e2730 FUN_1404e2730 body=226 status=ok
// SIG undefined FUN_1404e2730(void)

ulonglong FUN_1404e2730(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  do {
    uVar1 = *param_1;
    uVar2 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
    if (uVar2 >> 0x1a < uVar1 >> 0x1a) {
      FUN_14274643a();
    }
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(&DAT_14c833b00 + (ulonglong)(param_2 >> 0xe) * 8) +
              (ulonglong)((param_2 & 0x3fff) * 0x18);
    }
    *(uint *)(lVar3 + 0x10) = (uint)uVar1 & 0x3ffffff;
    LOCK();
    uVar4 = *param_1;
    bVar5 = uVar1 == uVar4;
    if (bVar5) {
      *param_1 = uVar2 | param_2;
      uVar4 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return uVar4;
}



// FUNCTION 1404e2812 FUN_1404e2812 body=400 status=ok
// SIG undefined FUN_1404e2812(void)

longlong FUN_1404e2812(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar2 = *(longlong *)(param_1 + 0x3c0);
    if (lVar2 == 0) {
      if (*(longlong *)(param_1 + 0x168) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
    else {
      if (DAT_14caf9cd0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1463c0cc2;
        local_48 = &LAB_147c9db5b;
        local_50 = &LAB_1463f9c44;
        local_58 = &DAT_149e063b2;
        local_60 = 0x2000000000;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
        lVar2 = *(longlong *)(param_1 + 0x3c0);
        if (lVar2 == 0) goto LAB_1404e2836;
      }
      lVar3 = 0;
      if ((DAT_14caf9cd0 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0))
      goto LAB_1404e2838;
      if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
          == DAT_14caf9cd0 + 0x30)) {
        lVar3 = *(longlong *)(lVar2 + 0x430);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        goto LAB_1404e2838;
      }
    }
  }
LAB_1404e2836:
  lVar3 = 0;
LAB_1404e2838:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1404e29dc FUN_1404e29dc body=179 status=ok
// SIG undefined FUN_1404e29dc(void)

void FUN_1404e29dc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong local_38;
  ulonglong *local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  lVar1 = *param_1;
  if ((*(uint *)(local_38 + 8) & 1) != 0) {
    ((undefined8 *)param_1[1])[1] = *(undefined8 *)param_1[1];
    FUN_144750bde(local_38,0,param_1[1]);
    local_30 = *(ulonglong **)param_1[1];
    local_28 = (longlong *)
               CONCAT44(local_28._4_4_,
                        (int)((ulonglong)(((longlong *)param_1[1])[1] - (longlong)local_30) >> 1));
    local_40 = FUN_1449e6bae(&local_30);
    local_40 = local_40 | 0x4000000000000000;
    local_30 = &local_40;
    local_28 = &local_38;
    FUN_14059ec8a(lVar1 + 0x58,local_1c,&local_30,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e2af2 FUN_1404e2af2 body=493 status=ok
// SIG undefined FUN_1404e2af2(void)

void FUN_1404e2af2(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 *local_30;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1404e2ce0(local_20);
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_28 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_30 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
    uVar6 = uVar3 & 0x7fff;
    if (uVar6 == 0x7fff) {
      local_30 = &local_24;
      local_28 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x80);
      local_28 = 1;
      local_30 = (undefined4 *)
                 ((ulonglong)(uVar6 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar7);
    local_38 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    local_40 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8));
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar4;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar4 + 1;
    uVar6 = uVar3 & 0x7fff;
    if (uVar6 == 0x7fff) {
      local_40 = &local_34;
      local_38 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x80);
      local_38 = 1;
      local_40 = (undefined4 *)
                 ((ulonglong)(uVar6 * *(int *)(lVar5 + 0x80)) + *(longlong *)(lVar5 + 0x70) +
                 (longlong)*(int *)(lVar5 + 0x4c) * 4);
    }
  }
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar7 = 0;
    do {
      *local_30 = *local_18;
      puVar1 = local_40 + (int)local_38;
      local_30 = local_30 + (int)local_28;
      *local_40 = local_18[1];
      iVar7 = iVar7 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar1;
    } while (iVar7 < *piVar8);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e2ce0 FUN_1404e2ce0 body=148 status=ok
// SIG undefined FUN_1404e2ce0(void)

void FUN_1404e2ce0(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 1404e2d74 FUN_1404e2d74 body=740 status=ok
// SIG undefined FUN_1404e2d74(void)

void FUN_1404e2d74(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  longlong lVar6;
  byte bVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_88 [40];
  int *local_60;
  int local_58;
  undefined1 local_50 [8];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1404e2ce0(local_50);
  if (*param_2 == 1) {
    iVar13 = *(int *)(param_2 + 0x30);
    uVar14 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar13);
    *(int *)(param_2 + 0x30) = iVar13 + 1;
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar13 * 8);
    iVar13 = *(int *)(param_2 + 0x44) * uVar14;
    bVar7 = 1;
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar17 = uVar2 & 0x7fff;
    uVar14 = (uint)(uVar2 >> 0xf);
    lVar10 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar9 = (ulonglong)(uVar17 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar10 + 0x20);
      lVar9 = 0;
      if (iVar13 <= (int)uVar17) {
        do {
          uVar17 = uVar17 - iVar13;
          iVar13 = (*(int **)(lVar10 + 0x20))[lVar9 + 1];
          lVar9 = lVar9 + 1;
        } while (iVar13 <= (int)uVar17);
      }
      lVar9 = (longlong)(int)uVar17 + *(longlong *)(*(longlong *)(lVar10 + 0x18) + lVar9 * 8);
    }
    iVar13 = *(int *)(lVar10 + 0x4c) * uVar14;
    bVar7 = *param_2;
  }
  if ((bVar7 & 1) == 0) {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar17 = uVar2 & 0x7fff;
    lVar6 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar10 = (ulonglong)(uVar17 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70);
    }
    else {
      iVar16 = **(int **)(lVar6 + 0x20);
      lVar10 = 0;
      if (iVar16 <= (int)uVar17) {
        do {
          uVar17 = uVar17 - iVar16;
          iVar16 = (*(int **)(lVar6 + 0x20))[lVar10 + 1];
          lVar10 = lVar10 + 1;
        } while (iVar16 <= (int)uVar17);
      }
      lVar10 = (longlong)(int)uVar17 + *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar10 * 8);
    }
    uVar17 = (uint)(uVar2 >> 0xf);
    pbVar8 = (byte *)(lVar6 + 0x4c);
  }
  else {
    iVar16 = *(int *)(param_2 + 0x30);
    uVar17 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar16);
    *(int *)(param_2 + 0x30) = iVar16 + 1;
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar16 * 8);
    pbVar8 = param_2 + 0x44;
  }
  iVar16 = *(int *)pbVar8;
  FUN_140126e42(&local_60,param_2);
  pbVar8 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar8 = param_2 + 0x3c;
  }
  iVar15 = *(int *)pbVar8;
  if (0 < iVar15) {
    puVar11 = (uint *)(lVar9 + (longlong)iVar13 * 4);
    puVar12 = (uint *)(lVar10 + (longlong)(int)(iVar16 * uVar17) * 4);
    iVar13 = 0;
    do {
      if (local_48 == (int *)0x0) {
        *local_60 = 0;
        local_60 = local_60 + local_58;
      }
      else {
        uVar3 = *puVar11;
        uVar4 = *puVar12;
        bVar18 = -1 < (int)(uVar3 | uVar4);
        piVar1 = local_60 + local_58;
        *local_60 = -(uint)(bVar18 && iVar15 == 1);
        local_60 = piVar1;
        if (bVar18 && iVar15 == 1) {
          iVar16 = (int)((float)(int)uVar3 * DAT_14c762894);
          if (DAT_14ca84e40 <= iVar16) {
            iVar16 = DAT_14ca84e40;
          }
          if (iVar16 < 2) {
            iVar16 = 1;
          }
          *local_48 = iVar16;
          iVar16 = (int)((float)(int)uVar4 * DAT_14c762894);
          if (DAT_14ca84e40 <= iVar16) {
            iVar16 = DAT_14ca84e40;
          }
          if (iVar16 < 2) {
            iVar16 = 1;
          }
          local_48[1] = iVar16;
        }
      }
      iVar13 = iVar13 + 1;
      pbVar8 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar8 = param_2 + 0x3c;
      }
      iVar15 = *(int *)pbVar8;
      puVar12 = (uint *)((longlong)puVar12 + (ulonglong)(uVar17 << 2));
      puVar11 = (uint *)((longlong)puVar11 + (ulonglong)(uVar14 << 2));
    } while (iVar13 < iVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e305a FUN_1404e305a body=1770 status=ok
// SIG undefined FUN_1404e305a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1404e305a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_118 [36];
  int local_f4;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = param_2;
  FUN_1404e37f4(*param_3,&local_80,&DAT_14cb8b8c0);
  if (local_80 == 0) {
    *local_e8 = 0;
    local_e8[1] = 0;
    plVar13 = local_e8;
  }
  else {
    plVar10 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b428100;
    local_d8 = plVar10 + 2;
    plVar10[8] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x31) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x39) = 0;
    *(undefined4 *)((longlong)plVar10 + 0x44) = 0xffffffff;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 2;
    plVar10[2] = (longlong)&PTR_FUN_14b242940;
    plVar10[0xc] = 0;
    plVar10[0xd] = 0;
    local_f0 = param_1;
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      local_e0 = plVar10 + 0xc;
      local_d0 = param_1 + 0x58;
      lVar17 = (longlong)*(int *)(param_1 + 0x38) * 0x68;
      lVar15 = *(longlong *)(param_1 + 0x30) + 0x58;
      do {
        plVar13 = *(longlong **)(lVar15 + -0x30);
        plVar4 = *(longlong **)(lVar15 + -0x28);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar11 = plVar4 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        if (plVar13 != (longlong *)0x0) {
          local_98 = (longlong *)0x0;
          plStack_90 = (longlong *)0x0;
          local_a8 = 0;
          uStack_a0._0_4_ = 0;
          local_b8 = *(undefined4 *)(lVar15 + -0x40);
          uStack_b4 = *(undefined4 *)(lVar15 + -0x3c);
          uStack_b0 = *(undefined4 *)(lVar15 + -0x38);
          uStack_ac = *(undefined4 *)(lVar15 + -0x34);
          if (param_3[1] == 0) {
            iVar9 = 0;
            uVar3 = (uint)uStack_a0;
          }
          else {
            uVar3 = *(uint *)(param_3[1] + 0xc);
            uStack_a0 = (ulonglong)uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar16 = 0;
            }
            iVar9 = *(int *)(lVar16 + 0x10);
            if (*(int *)(lVar16 + 0x10) == 0) {
              LOCK();
              iVar9 = DAT_14c964868 + 1;
              UNLOCK();
              iVar14 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar9;
              if (bVar18) {
                local_f4 = iVar14;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar14);
                iVar14 = local_f4;
              }
              LOCK();
              iVar9 = *(int *)(lVar16 + 0x10);
              bVar18 = iVar9 == 0;
              if (bVar18) {
                *(int *)(lVar16 + 0x10) = iVar14;
                iVar9 = 0;
              }
              UNLOCK();
              uVar3 = (uint)uStack_a0;
              if (bVar18) {
                iVar9 = iVar14;
              }
            }
          }
          uStack_a0._0_4_ = uVar3;
          plVar11 = plStack_90;
          uStack_a0 = CONCAT44(iVar9,(uint)uStack_a0);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_98 = plVar13;
          plVar8 = plVar4;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar5 = (undefined8 *)*plStack_90;
              plStack_90 = plVar4;
              (*(code *)*puVar5)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar8 = plStack_90;
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                plVar8 = plStack_90;
              }
            }
          }
          plStack_90 = plVar8;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_70 = plVar13;
          local_68 = plVar4;
          (**(code **)(*plVar13 + 0x10))(plVar13,&local_c8,&local_70,&local_b8);
          plVar13 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_68 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          plVar13 = local_c0;
          if (local_c8 != (longlong *)0x0) {
            if (local_c0 == (longlong *)0x0) {
              uVar12 = *param_3;
              plVar11 = *(longlong **)(lVar15 + -0x18);
              if (plVar11 == (longlong *)0x0) {
                plVar11 = *(longlong **)(local_f0 + 0x40);
                if (plVar11 != (longlong *)0x0) {
                  local_68 = (longlong *)0x0;
                  goto LAB_1404e32a3;
                }
              }
              else {
                local_68 = (longlong *)0x0;
LAB_1404e32a3:
                local_70 = local_c8;
                (**(code **)(*plVar11 + 0x18))(plVar11,uVar12,&local_70);
                plVar11 = local_68;
                if (local_68 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = local_68 + 1;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)*plVar8 == 0) {
                    (**(code **)*local_68)(local_68);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar11 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
                if (plVar13 != (longlong *)0x0) goto LAB_1404e32c9;
              }
            }
            else {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
              uVar12 = *param_3;
              plVar11 = *(longlong **)(lVar15 + -0x18);
              if ((plVar11 != (longlong *)0x0) ||
                 (plVar11 = *(longlong **)(local_f0 + 0x40), plVar11 != (longlong *)0x0)) {
                local_68 = local_c0;
                LOCK();
                *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
                UNLOCK();
                goto LAB_1404e32a3;
              }
LAB_1404e32c9:
              LOCK();
              plVar11 = plVar13 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
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
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb8ab48) && (FUN_144b3d300(&DAT_14cb8ab48), DAT_14cb8ab48 == -1))
            {
              DAT_14cb8ab38 = 0;
              _DAT_14cb8ab40 = 0;
              atexit(FUN_143e281a2);
              _Init_thread_footer(&DAT_14cb8ab48);
            }
            uVar7 = _DAT_14cb8ab40;
            FUN_140b47c46(DAT_14cb8ab38,_DAT_14cb8ab40 & 0xffffffff);
            uVar6 = _DAT_14cb8ab40 >> 0x20;
            _DAT_14cb8ab40 = _DAT_14cb8ab40 & 0xffffffff00000000;
            if (((longlong)uVar7 < 0) && ((int)uVar6 != 0)) {
              FUN_14896cd66(&DAT_14cb8ab38,0);
            }
            FUN_1404e3746(&DAT_14cb8ab38,local_d0);
            FUN_1404e3746(&DAT_14cb8ab38,lVar15);
            FUN_1404e38dc(local_80,*param_3,local_c8 + 4,&DAT_14cb8ab38);
            plVar11 = local_c0;
            plVar13 = local_c8;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
              UNLOCK();
            }
            iVar9 = (int)plVar10[0xd];
            *(uint *)(plVar10 + 0xd) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar10 + 0x6c) < iVar9 + 1U) {
              FUN_1404e3dee(local_e0,iVar9);
            }
            lVar16 = *local_e0;
            *(longlong **)(lVar16 + (longlong)iVar9 * 0x10) = plVar13;
            *(longlong **)(lVar16 + 8 + (longlong)iVar9 * 0x10) = plVar11;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
              LOCK();
              plVar13 = plVar11 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
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
          }
          plVar13 = local_c0;
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_c0 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_c0)(local_c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          plVar13 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar11 = plStack_90 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar4 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
        lVar15 = lVar15 + 0x68;
        lVar17 = lVar17 + -0x68;
      } while (lVar17 != 0);
    }
    plVar13 = local_e8;
    *local_e8 = (longlong)local_d8;
    local_e8[1] = (longlong)plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_78 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar13;
}



// FUNCTION 1404e3746 FUN_1404e3746 body=98 status=ok
// SIG undefined FUN_1404e3746(void)

void FUN_1404e3746(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14571be2c(param_1,iVar2);
    }
    FUN_1404e37a8((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1404e37a8 FUN_1404e37a8 body=76 status=ok
// SIG undefined FUN_1404e37a8(void)

void FUN_1404e37a8(undefined8 *param_1,longlong param_2,int param_3)

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



// FUNCTION 1404e37f4 FUN_1404e37f4 body=173 status=ok
// SIG undefined FUN_1404e37f4(void)

longlong * FUN_1404e37f4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x58))(param_1,&local_28);
  lVar3 = local_28;
  if (local_28 != 0) {
    uVar5 = FUN_1404e38a2();
    cVar4 = FUN_1448093f4(lVar3,uVar5);
    if (cVar4 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_1404e3850;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1404e3850:
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e38a2 FUN_1404e38a2 body=57 status=ok
// SIG undefined FUN_1404e38a2(void)

void FUN_1404e38a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65e38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65e38 = FUN_140002ddd(FUN_14650d846,uVar1,L"GbxSkillTargetHub");
  }
  return;
}



// FUNCTION 1404e38dc FUN_1404e38dc body=1161 status=ok
// SIG undefined FUN_1404e38dc(void)

void FUN_1404e38dc(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong unaff_R14;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong local_80;
  longlong *local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_2;
  if ((longlong)(int)param_4[1] == 0) goto LAB_1404e3b0c;
  plVar12 = (longlong *)*param_4;
  local_98 = plVar12 + (longlong)(int)param_4[1] * 3;
  uVar14 = 0;
  local_a0 = param_1 + 0x40;
  local_b8 = (undefined8 *)(param_1 + 0x78);
  do {
    uVar13 = DAT_14cb8b740;
    if ((*plVar12 != 0) &&
       (lVar6 = (**(code **)(*local_90 + 0x20))(), uVar13 = DAT_14cb8b740, lVar6 != 0)) {
      (**(code **)(*(longlong *)*plVar12 + 0x10))((longlong *)*plVar12,&local_70);
      iVar5 = local_70;
      iVar4 = DAT_14cb8bf58;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (iVar5 == iVar4) {
        uVar13 = *(ulonglong *)(param_1 + 0x70);
        if (*(ulonglong *)(param_1 + 0x70) == 0) {
          uVar13 = *(longlong *)(param_1 + 0x78) * 2;
          if (*(longlong *)(param_1 + 0x78) == 0) {
            uVar13 = 1;
          }
          *(ulonglong *)(param_1 + 0x78) = uVar13;
          *(ulonglong *)(param_1 + 0x70) = uVar13;
        }
      }
      else {
        if ((*plVar12 != 0) && ((longlong)*(int *)(param_1 + 0x48) != 0)) {
          lVar7 = *(longlong *)(param_1 + 0x40);
          lVar10 = (longlong)*(int *)(param_1 + 0x48) << 5;
          local_b0 = param_3;
          do {
            lVar11 = *(longlong *)(lVar7 + 8);
            local_a8 = lVar7;
            (**(code **)(*(longlong *)*plVar12 + 0x10))((longlong *)*plVar12,&local_70);
            iVar5 = local_70;
            iVar4 = *(int *)(lVar11 + 0x30);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            param_3 = local_b0;
            if (iVar4 == iVar5) {
              lVar7 = local_a8;
              if (local_a8 != 0) goto LAB_1404e3a3b;
              break;
            }
            lVar7 = local_a8 + 0x20;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
        FUN_14571b1c8(*plVar12,&local_80,lVar6);
        lVar6 = local_80;
        if (local_80 == 0) {
          lVar7 = 0;
          uVar13 = DAT_14cb8b740;
        }
        else {
          lVar7 = *(longlong *)(param_1 + 0x78) * 2;
          if (*(longlong *)(param_1 + 0x78) == 0) {
            lVar7 = 1;
          }
          *(longlong *)(param_1 + 0x78) = lVar7;
          lVar7 = local_80 + 0x18;
          FUN_14571b654(&local_70,param_1,local_b8);
          FUN_1404e4072(lVar7,local_88,&local_70);
          FUN_1449db362(&local_70);
          plVar9 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = (int)local_78[1] + 1;
            UNLOCK();
          }
          iVar4 = *(int *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x4c) < iVar4 + 1U) {
            FUN_14571b5a4(local_a0,iVar4);
          }
          lVar10 = *(longlong *)(param_1 + 0x40);
          lVar11 = (longlong)iVar4 * 0x20;
          lVar7 = lVar10 + lVar11;
          *(longlong *)(lVar10 + lVar11) = param_1;
          *(longlong *)(lVar10 + 8 + lVar11) = lVar6;
          *(longlong **)(lVar10 + 0x10 + lVar11) = plVar9;
          uVar13 = unaff_R14;
          if (plVar9 == (longlong *)0x0) {
            *(undefined8 *)(lVar7 + 0x18) = *local_b8;
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            *(undefined8 *)(lVar7 + 0x18) = *local_b8;
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)();
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
        }
        plVar9 = local_78;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_78 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (lVar6 != 0) {
LAB_1404e3a3b:
          puVar8 = (ulonglong *)(lVar7 + 0x18);
          if (lVar7 == 0) {
            puVar8 = &DAT_14cb8b740;
          }
          uVar13 = *puVar8;
        }
      }
    }
    uVar14 = uVar14 | uVar13;
    plVar12 = plVar12 + 3;
    unaff_R14 = uVar13;
  } while (plVar12 != local_98);
  if (uVar14 == 0) goto LAB_1404e3b0c;
  FUN_1404e3d8a(param_1,&local_70);
  plVar12 = local_68;
  if (local_68 == (longlong *)0x0) {
    *(ulonglong *)(param_3 + 8) = CONCAT44(uStack_6c,local_70);
    plVar9 = *(longlong **)(param_3 + 0x10);
    if (plVar9 != (longlong *)0x0) {
LAB_1404e3ca0:
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      *(longlong **)(param_3 + 0x10) = plVar12;
      if (plVar12 != (longlong *)0x0) goto LAB_1404e3aa3;
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    *(ulonglong *)(param_3 + 8) = CONCAT44(uStack_6c,local_70);
    if (*(longlong **)(param_3 + 0x10) != local_68) {
      LOCK();
      *(int *)((longlong)local_68 + 0xc) = *(int *)((longlong)local_68 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_3 + 0x10);
      if (plVar9 != (longlong *)0x0) goto LAB_1404e3ca0;
      *(longlong **)(param_3 + 0x10) = local_68;
    }
LAB_1404e3aa3:
    LOCK();
    plVar9 = plVar12 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_68 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x58);
  lVar6 = (longlong)iVar4;
  *(uint *)(param_1 + 0x58) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
    FUN_1404e3efc(param_1 + 0x50,iVar4);
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  *(longlong *)(lVar7 + lVar6 * 0x18) = param_3;
  puVar3 = (undefined8 *)(lVar7 + 8 + lVar6 * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar10 = 1;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x80) * 2;
  }
  *(longlong *)(param_1 + 0x80) = lVar10;
  *(longlong *)(lVar7 + 0x10 + lVar6 * 0x18) = lVar10;
  *(ulonglong *)(lVar7 + 8 + lVar6 * 0x18) = uVar14;
LAB_1404e3b0c:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e3d8a FUN_1404e3d8a body=99 status=ok
// SIG undefined FUN_1404e3d8a(void)

undefined8 * FUN_1404e3d8a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1404e3dcc:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1404e3dcc;
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



// FUNCTION 1404e3dee FUN_1404e3dee body=269 status=ok
// SIG undefined FUN_1404e3dee(void)

void FUN_1404e3dee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1404e3efc FUN_1404e3efc body=373 status=ok
// SIG undefined FUN_1404e3efc(void)

void FUN_1404e3efc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404e3f85;
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
LAB_1404e3f85:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1404e4072 FUN_1404e4072 body=370 status=ok
// SIG undefined FUN_1404e4072(void)

undefined8 * FUN_1404e4072(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404e41e6 FUN_1404e41e6 body=1340 status=ok
// SIG undefined FUN_1404e41e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1404e41e6(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
  case 4:
    lVar8 = *param_3;
    plVar7 = (longlong *)param_3[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)FUN_14001cc68(0x110,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_FUN_14b427a10;
    plVar4 = plVar2 + 2;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b427a30;
    local_60 = FUN_143e2b9e2;
    puVar9 = &LAB_140903d04;
    local_88 = (longlong *)&LAB_140903d04;
    FUN_1404e4778(plVar4,param_4);
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[2] = (longlong)&PTR_FUN_14b427a50;
    ppuVar3 = &PTR_FUN_14b427a90;
    break;
  case 1:
  case 5:
    local_98 = *param_3;
    local_90 = (longlong *)param_3[1];
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_LAB_14b427b60;
    plVar7 = plVar4 + 2;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b427b80;
    local_60 = FUN_143e2bd58;
    local_88 = (longlong *)&LAB_148975436;
    FUN_14571c07e(plVar7,&local_88,&local_98,param_4);
    if (local_88 != (longlong *)0x0) {
      pppuVar5 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar5 = &local_68;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    local_88 = plVar7;
    local_80 = plVar4;
    FUN_14571c12e(&local_88,plVar7);
    goto LAB_1404e451a;
  case 2:
  case 3:
    lVar8 = *param_3;
    plVar7 = (longlong *)param_3[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)FUN_14001cc68(0x110,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_FUN_14b427e00;
    plVar4 = plVar2 + 2;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_FUN_14b427e20;
    local_60 = FUN_143e2bf9e;
    puVar9 = &LAB_140cb5ae0;
    local_88 = (longlong *)&LAB_140cb5ae0;
    FUN_1404e4778(plVar4,param_4);
    plVar2[0x15] = 0;
    plVar2[0x16] = 0;
    plVar2[2] = (longlong)&PTR_FUN_14b427e40;
    ppuVar3 = &PTR_FUN_14b427e80;
    break;
  case 6:
    local_98 = *param_3;
    local_90 = (longlong *)param_3[1];
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14b427cb0;
    plVar7 = plVar4 + 2;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b427cd0;
    local_60 = FUN_143e2be86;
    local_88 = (longlong *)&LAB_148975a44;
    FUN_148975984(plVar7,&local_88,&local_98,param_4);
    if (local_88 != (longlong *)0x0) {
      pppuVar5 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar5 = &local_68;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    local_88 = plVar7;
    local_80 = plVar4;
    FUN_14897637a(&local_88,plVar7);
LAB_1404e451a:
    plVar2 = local_80;
    *param_2 = plVar7;
    param_2[1] = plVar4;
    plVar7 = local_90;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = local_90;
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            plVar7 = local_90;
          }
        }
      }
    }
    goto LAB_1404e438f;
  default:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  plVar2[6] = (longlong)ppuVar3;
  plVar2[0x17] = lVar8;
  plVar2[0x18] = (longlong)plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar2[0x1a] = (longlong)puVar9;
    plVar2[0x1c] = 0;
LAB_1404e42ff:
    pppuVar5 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar5 = &local_68;
    }
    (*(code *)**pppuVar5)(pppuVar5,plVar2 + 0x1c);
    if (local_88 != (longlong *)0x0) {
      pppuVar5 = &local_68;
      if (local_78 != (undefined ***)0x0) {
        pppuVar5 = local_78;
      }
      (*(code *)(*pppuVar5)[2])(pppuVar5);
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar2[0x1a] = (longlong)local_88;
    plVar2[0x1c] = 0;
    if (local_88 != (longlong *)0x0) goto LAB_1404e42ff;
  }
  if ((plVar4 == (longlong *)0x0) ||
     (((plVar2[10] != 0 && (plVar2[0xb] != 0)) && (0 < *(int *)(plVar2[0xb] + 8))))) {
    *param_2 = plVar4;
    param_2[1] = plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_1404e438f;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      plVar10 = (longlong *)&DAT_00000058;
      plVar6 = _DAT_00000058;
      _DAT_00000050 = plVar4;
      if (_DAT_00000058 != (longlong *)0x0) {
LAB_1404e46a4:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *plVar10 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) goto LAB_1404e4370;
      }
      *param_2 = plVar4;
      param_2[1] = plVar2;
      goto LAB_1404e438f;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[10] = (longlong)plVar4;
    if ((longlong *)plVar2[0xb] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[0xb] != (longlong *)0x0) {
        plVar10 = plVar2 + 0xb;
        plVar6 = (longlong *)plVar2[0xb];
        goto LAB_1404e46a4;
      }
      plVar2[0xb] = (longlong)plVar2;
    }
LAB_1404e4370:
    LOCK();
    plVar10 = plVar2 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *param_2 = plVar4;
    param_2[1] = plVar2;
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
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
LAB_1404e438f:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404e4734 FUN_1404e4734 body=12 status=ok
// SIG undefined FUN_1404e4734(void)

void FUN_1404e4734(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001404e473d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1404e4740 FUN_1404e4740 body=31 status=ok
// SIG undefined FUN_1404e4740(void)

undefined8 FUN_1404e4740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404e4778 FUN_1404e4778 body=102 status=ok
// SIG undefined FUN_1404e4778(void)

void FUN_1404e4778(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_LAB_14b4270f0;
  param_1[4] = &PTR_LAB_14b427130;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  param_1[10] = *param_2;
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = param_2[4];
  lVar1 = param_2[5];
  param_1[0xf] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  return;
}



// FUNCTION 1404e47de FUN_1404e47de body=31 status=ok
// SIG undefined FUN_1404e47de(void)

undefined8 FUN_1404e47de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404e47fe FUN_1404e47fe body=24 status=ok
// SIG undefined FUN_1404e47fe(void)

longlong FUN_1404e47fe(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b427e20;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 1404e4816 FUN_1404e4816 body=461 status=ok
// SIG undefined FUN_1404e4816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1404e4816(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FUN_14001cc68(200,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b427f50;
  plVar1 = plVar5 + 2;
  FUN_1404e4778(plVar1,param_4);
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b427f70;
  plVar5[6] = (longlong)&PTR_FUN_14b427fb0;
  plVar5[0x17] = lVar3;
  plVar5[0x18] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar5[10] != 0 && (plVar5[0xb] != 0)) && (0 < *(int *)(plVar5[0xb] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_1404e4904;
  }
  else {
    if (plVar5 == (longlong *)0x0) {
      _DAT_00000050 = 0x10;
      plVar7 = (longlong *)&DAT_00000058;
      plVar6 = _DAT_00000058;
      if (_DAT_00000058 != (longlong *)0x0) {
LAB_1404e497f:
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *plVar7 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_1404e48e9;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar5;
      goto LAB_1404e4904;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar5[10] = (longlong)plVar1;
    if ((longlong *)plVar5[0xb] != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar5[0xb] != (longlong *)0x0) {
        plVar7 = plVar5 + 0xb;
        plVar6 = (longlong *)plVar5[0xb];
        goto LAB_1404e497f;
      }
      plVar5[0xb] = (longlong)plVar5;
    }
LAB_1404e48e9:
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar5;
  }
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
LAB_1404e4904:
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
  return param_2;
}



// FUNCTION 1404e49e4 FUN_1404e49e4 body=22 status=ok
// SIG undefined FUN_1404e49e4(void)

void FUN_1404e49e4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1404e49fa();
  return;
}



// FUNCTION 1404e49fa FUN_1404e49fa body=141 status=ok
// SIG undefined FUN_1404e49fa(void)

undefined4 * FUN_1404e49fa(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[8] = 0;
  if (param_1[9] != 0) {
    FUN_1446dda88(param_1 + 6,0);
  }
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
  }
  if (((int)param_1[9] < 1) && ((int)param_1[1] < 2)) {
    param_1[4] = param_2[4];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  }
  return param_1;
}



// FUNCTION 1404e4a88 FUN_1404e4a88 body=101 status=ok
// SIG undefined FUN_1404e4a88(void)

void FUN_1404e4a88(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001404e4aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404e4aee FUN_1404e4aee body=432 status=ok
// SIG undefined FUN_1404e4aee(void)

void FUN_1404e4aee(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
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



// FUNCTION 1404e4ca0 FUN_1404e4ca0 body=860 status=ok
// SIG undefined FUN_1404e4ca0(void)

undefined8 * FUN_1404e4ca0(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined2 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x11;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a37f8a8;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar3 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar3 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
    if (((ulonglong)puVar2 & 1) != 0) {
      puVar2 = (undefined2 *)(((longlong)puVar2 >> 0x18) + (longlong)param_2);
    }
  }
  FUN_14006620a(&local_40,puVar2,iVar3);
  if (&local_40 == param_1 + 2) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 3) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_34;
  }
  pvVar1 = (void *)param_2[2];
  iVar3 = *(int *)(param_2 + 3);
  param_1[4] = 0;
  *(int *)(param_1 + 5) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    pvVar4 = (void *)((longlong)param_2 + ((longlong)pvVar1 >> 0x18) + 0x10);
    if (((ulonglong)pvVar1 & 1) == 0) {
      pvVar4 = pvVar1;
    }
    FUN_1404e4ffe(param_1 + 4,iVar3);
    memcpy((void *)param_1[4],pvVar4,(longlong)iVar3 << 2);
  }
  pvVar1 = (void *)param_2[4];
  iVar3 = *(int *)(param_2 + 5);
  param_1[6] = 0;
  *(int *)(param_1 + 7) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    pvVar4 = (void *)((longlong)param_2 + ((longlong)pvVar1 >> 0x18) + 0x20);
    if (((ulonglong)pvVar1 & 1) == 0) {
      pvVar4 = pvVar1;
    }
    FUN_1404e4ffe(param_1 + 6,iVar3);
    memcpy((void *)param_1[6],pvVar4,(longlong)iVar3 << 2);
  }
  pvVar1 = (void *)param_2[6];
  iVar3 = *(int *)(param_2 + 7);
  param_1[8] = 0;
  *(int *)(param_1 + 9) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    pvVar4 = (void *)((longlong)param_2 + ((longlong)pvVar1 >> 0x18) + 0x30);
    if (((ulonglong)pvVar1 & 1) == 0) {
      pvVar4 = pvVar1;
    }
    FUN_1404e4ffe(param_1 + 8,iVar3);
    memcpy((void *)param_1[8],pvVar4,(longlong)iVar3 << 2);
  }
  pvVar1 = (void *)param_2[8];
  iVar3 = *(int *)(param_2 + 9);
  param_1[10] = 0;
  *(int *)(param_1 + 0xb) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    pvVar4 = (void *)((longlong)param_2 + ((longlong)pvVar1 >> 0x18) + 0x40);
    if (((ulonglong)pvVar1 & 1) == 0) {
      pvVar4 = pvVar1;
    }
    FUN_1404e4ffe(param_1 + 10,iVar3);
    memcpy((void *)param_1[10],pvVar4,(longlong)iVar3 << 2);
  }
  pvVar1 = (void *)param_2[10];
  iVar3 = *(int *)(param_2 + 0xb);
  param_1[0xc] = 0;
  *(int *)(param_1 + 0xd) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    pvVar4 = (void *)((longlong)param_2 + ((longlong)pvVar1 >> 0x18) + 0x50);
    if (((ulonglong)pvVar1 & 1) == 0) {
      pvVar4 = pvVar1;
    }
    FUN_1404e4ffe(param_1 + 0xc,iVar3);
    memcpy((void *)param_1[0xc],pvVar4,(longlong)iVar3 << 2);
  }
  pvVar1 = (void *)param_2[0xc];
  iVar3 = *(int *)(param_2 + 0xd);
  param_1[0xe] = 0;
  *(int *)(param_1 + 0xf) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    pvVar4 = (void *)((longlong)param_2 + ((longlong)pvVar1 >> 0x18) + 0x60);
    if (((ulonglong)pvVar1 & 1) == 0) {
      pvVar4 = pvVar1;
    }
    FUN_1404e4ffe(param_1 + 0xe,iVar3);
    memcpy((void *)param_1[0xe],pvVar4,(longlong)iVar3 << 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0xf);
  *(undefined1 *)((longlong)param_1 + 0x8a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x8b) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)((longlong)param_2 + 0x7c);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1404e4ffe FUN_1404e4ffe body=306 status=ok
// SIG undefined FUN_1404e4ffe(void)

void FUN_1404e4ffe(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1404e5060;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_1404e5060:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 2)) {
    uVar6 = uVar3 >> 2 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,4,2);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 1404e5130 FUN_1404e5130 body=1144 status=ok
// SIG undefined FUN_1404e5130(void)

void FUN_1404e5130(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  ulonglong local_d0;
  code *local_c8;
  code *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (iVar9 = *(int *)(param_1 + 0x30), iVar9 != 0)) {
    if ((*(byte *)(*(longlong *)(param_3 + 0x28) + 0xa4) & 2) == 0) {
      if (0 < iVar9) {
        local_90 = param_1 + 0xa8;
        uVar6 = 0;
        bVar8 = false;
        do {
          while( true ) {
            lVar4 = uVar6 * 0x30;
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar4);
            if (lVar7 == 0) break;
            puVar5 = *(undefined8 **)(lVar7 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
            {
              local_c8 = (code *)FUN_1446ddbd2();
              local_c0 = FUN_14067a048;
              local_d0 = 0;
              local_d8 = 0x28001;
              FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
              atexit(FUN_142811fe5);
              _Init_thread_footer(&DAT_14c951d20);
            }
            if (DAT_14c951cd8 == 0) {
              bVar10 = puVar5 != (undefined8 *)0x0;
              if (puVar5 != &DAT_14c951cd0 && bVar10) {
                do {
                  puVar5 = (undefined8 *)puVar5[6];
                  bVar10 = puVar5 != (undefined8 *)0x0;
                  if (puVar5 == &DAT_14c951cd0) break;
                } while (puVar5 != (undefined8 *)0x0);
              }
              if (!bVar10) break;
            }
            else if ((puVar5[3] & DAT_14c951cd8) == 0) break;
LAB_1404e5265:
            local_78 = local_78 & 0xffffffffffffff00;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            local_c0 = (code *)((ulonglong)local_c0 & 0xffffffff00000000);
            local_c8 = (code *)&local_78;
            local_d0 = param_5;
            local_d8 = CONCAT44(local_d8._4_4_,
                                (uint)*(ushort *)(*(longlong *)(param_1 + 0x28) + 0x1e + lVar4));
            local_b0 = param_1 + 0x68;
            FUN_1404e55aa(param_1,param_4,*(undefined8 *)(param_4 + 0xb8));
            uVar6 = uVar6 + 1;
            bVar8 = true;
            if ((longlong)*(int *)(param_1 + 0x30) <= (longlong)uVar6) goto LAB_1404e52ea;
          }
          if (DAT_14c7619e0 == 0) {
            lVar7 = *(longlong *)(param_1 + 0x28);
LAB_1404e5222:
            plVar1 = *(longlong **)(lVar7 + lVar4);
            uVar3 = (**(code **)(*plVar1 + 200))
                              (plVar1,(longlong)*(int *)((longlong)plVar1 + 0x34) *
                                      (longlong)*(int *)(lVar7 + 0x10 + lVar4) +
                                      (longlong)*(int *)((longlong)plVar1 + 0x44) + param_5,0);
            FUN_1400748c2(param_4,uVar3 ^ 1);
            if ((char)uVar3 == '\0') goto LAB_1404e5265;
          }
          else {
            lVar7 = *(longlong *)(param_1 + 0x28);
            if ((*(char *)(param_1 + 0xa0) != '\x01') ||
               ((*(byte *)(*(longlong *)(lVar7 + lVar4) + 0x39) & 1) != 0)) goto LAB_1404e5222;
            lVar7 = *(longlong *)(param_1 + 0xb8);
            if (*(longlong *)(param_1 + 0xb8) == 0) {
              lVar7 = local_90;
            }
            uVar3 = *(uint *)(lVar7 + (uVar6 >> 5 & 0x7ffffff) * 4);
            FUN_1400748c2(param_4,(uVar3 >> ((uint)uVar6 & 0x1f) & 1) != 0);
            if ((uVar3 >> ((uint)uVar6 & 0x1f) & 1) != 0) goto LAB_1404e5265;
          }
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x30));
        if (bVar8) {
LAB_1404e52ea:
          if ((*(char *)(param_1 + 0xa0) == '\x01') && (*(longlong *)(param_4 + 0xc0) != 0)) {
            local_88 = param_1 + 0x80;
            if (*(longlong *)(param_1 + 0x90) != 0) {
              local_88 = *(longlong *)(param_1 + 0x90);
            }
            local_80 = *(undefined4 *)(param_1 + 0x98);
            lVar7 = *(longlong *)(*(longlong *)(param_4 + 0xc0) + 8);
            if (lVar7 != 0) {
              FUN_1400dacfe(lVar7,&local_88);
            }
          }
        }
      }
    }
    else {
      local_78 = 0;
      uStack_70 = 0;
      if (iVar9 < 1) {
        uVar3 = 0;
        iVar9 = 0;
      }
      else {
        lVar7 = 0;
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar7);
          cVar2 = (**(code **)(*plVar1 + 200))
                            (plVar1,(longlong)*(int *)((longlong)plVar1 + 0x34) *
                                    (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar7)
                                    + (longlong)*(int *)((longlong)plVar1 + 0x44) + param_5,0,0);
          if (cVar2 == '\0') {
            local_d8 = param_5;
            local_c8 = (code *)((ulonglong)local_c8 & 0xffffffffffffff00);
            local_d0 = local_d0 & 0xffffffff00000000;
            local_c0 = (code *)&local_78;
            FUN_1417ec340(param_1,param_1 + 0x48,
                          *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x1c + lVar7));
          }
          lVar4 = lVar4 + 1;
          lVar7 = lVar7 + 0x30;
        } while (lVar4 < *(int *)(param_1 + 0x30));
        iVar9 = (int)uStack_70;
        uVar3 = uStack_70._4_4_;
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar9 + 1U);
      if (uVar3 < iVar9 + 1U) {
        FUN_14488eebe(&local_78,iVar9);
      }
      *(undefined2 *)(local_78 + (longlong)iVar9 * 2) = 0;
      local_d8 = *(ulonglong *)(param_3 + 0x28);
      local_d0 = param_4;
      local_c8 = (code *)&local_78;
      FUN_14368db7a(param_1);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e55aa FUN_1404e55aa body=534 status=ok
// SIG undefined FUN_1404e55aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404e55aa(longlong param_1,longlong *param_2,longlong *param_3,int param_4,int param_5,
                  longlong param_6,undefined1 *param_7,int param_8,int param_9,undefined8 *param_10,
                  undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  
  if (param_4 < param_5) {
    do {
      if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) {
        return;
      }
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_4 * 0x20);
      if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x1c + (longlong)param_4 * 0x20) == '\0') {
        FUN_1414df80a(param_1,param_2,param_3,param_4,*(int *)((longlong)puVar1 + 0xc) + param_6,
                      param_7,param_9 + 1,param_10,param_11,param_12);
        param_4 = *(ushort *)(puVar1 + 1) - 1;
      }
      else {
        if ((((*(byte *)(param_2 + 5) & 4) != 0 && DAT_14c7619e0 != 0) &&
            ((*(byte *)((longlong)puVar1 + 0x1d) & 1) != 0)) &&
           ((longlong)*(int *)(param_10 + 1) != 0)) {
          piVar4 = (int *)*param_10;
          lVar3 = (longlong)*(int *)(param_10 + 1) * 0x28;
          do {
            if (((*piVar4 == param_4) && (piVar4[1] == param_8)) &&
               ((piVar4[2] == param_9 &&
                (*(longlong *)(piVar4 + 4) == *(int *)((longlong)puVar1 + 0xc) + param_6))))
            goto LAB_1404e5684;
            piVar4 = piVar4 + 10;
            lVar3 = lVar3 + -0x28;
          } while (lVar3 != 0);
        }
        piVar4 = (int *)0x0;
LAB_1404e5684:
        if ((*(byte *)(param_2 + 5) & 1) != 0 && param_3 != (longlong *)0x0) {
          (**(code **)(*param_3 + 0x308))(param_3);
        }
        if (piVar4 == (int *)0x0) {
          _DAT_14caf2784 = _DAT_14caf2784 + 1;
          cVar2 = (**(code **)(*(longlong *)*puVar1 + 0xd8))
                            ((longlong *)*puVar1,param_2,param_3,
                             *(int *)((longlong)puVar1 + 0xc) + param_6,0);
          if (cVar2 == '\0') {
            *param_7 = 1;
          }
        }
        else {
          _DAT_14caf2780 = _DAT_14caf2780 + 1;
          (**(code **)(*param_2 + 0x260))
                    (param_2,*(undefined8 *)(param_10[2] + 0x90),piVar4[8],(longlong)piVar4[9]);
        }
        if ((param_3 != (longlong *)0x0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
          (**(code **)(*param_3 + 0x310))(param_3,*puVar1,param_12);
        }
      }
      param_4 = param_4 + 1;
    } while (param_4 < param_5);
  }
  return;
}



// FUNCTION 1404e57c0 FUN_1404e57c0 body=136 status=ok
// SIG undefined FUN_1404e57c0(void)

undefined8 FUN_1404e57c0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[1] = DAT_14c967818;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = FUN_144830b78(param_2 + 6,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 6) = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_1404e5848(param_2 + 3,param_3 + 0x1e8,param_1 + 0x40);
  return 1;
}



// FUNCTION 1404e5848 FUN_1404e5848 body=221 status=ok
// SIG undefined FUN_1404e5848(void)

undefined8 FUN_1404e5848(int *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  int *piVar3;
  
  if ((*param_3 != 0) && (plVar2 = (longlong *)FUN_144741050(param_3 + 1), *plVar2 != 0)) {
    *(undefined8 *)(param_1 + 2) = param_2;
    *(longlong *)(param_1 + 4) = *param_3;
    param_1[6] = (int)param_3[1];
    plVar2 = (longlong *)(param_1 + 8);
    if (plVar2 != param_3 + 2) {
      iVar1 = (int)param_3[3];
      _Src = (void *)param_3[2];
      param_1[10] = iVar1;
      if (iVar1 == 0 && param_1[0xb] == 0) {
        param_1[0xb] = 0;
      }
      else {
        FUN_1447a127e(plVar2,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*plVar2,_Src,(longlong)iVar1);
        }
      }
    }
    plVar2 = *(longlong **)(param_1 + 2);
    param_1[0xc] = *(int *)((longlong)plVar2 + 0x84);
    piVar3 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,param_3,0);
    if (piVar3 == (int *)0x0) {
      *param_1 = -1;
    }
    else {
      iVar1 = *piVar3;
      *param_1 = iVar1;
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 2) + 0x48))) {
        return *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 2) + 0x40) + (longlong)iVar1 * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 1404e5926 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e592c FUN_1404e592c body=285 status=ok
// SIG undefined FUN_1404e592c(void)

undefined8 FUN_1404e592c(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1404e5a42;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1404e5a42;
    }
    FUN_1400841de(param_1 + 0x18,&local_38);
  }
  else {
LAB_1404e5a42:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1404e59f6;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1404e59f6;
    }
  }
  uVar6 = 0;
LAB_1404e59f6:
  if (local_38 != 0) {
    FUN_140113f3a(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e5a68 FUN_1404e5a68 body=969 status=ok
// SIG undefined FUN_1404e5a68(void)

void FUN_1404e5a68(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (param_1[0x35] == param_3)) {
    cVar5 = (**(code **)(*param_1 + 0x3c0))(param_1);
    lVar14 = *(longlong *)(param_2 + 0xa0);
    iVar2 = *(int *)(param_2 + 0xa8);
    if (cVar5 == '\0') {
      if (iVar2 != 0) {
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar14 + lVar10) != 0) {
            (**(code **)(*param_1 + 0x3a0))(param_1);
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar2 * 8 != lVar10);
      }
    }
    else {
      if (iVar2 != 0) {
        lVar10 = 0;
        do {
          lVar13 = *(longlong *)(lVar14 + lVar10);
          if (lVar13 != 0) {
            cVar5 = FUN_1449e2a3e(lVar13);
            if (cVar5 == '\0') {
              (**(code **)(*param_1 + 0x3a0))(param_1,lVar13);
            }
            else {
              FUN_14021bd22(param_1[0x10b],lVar13);
            }
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar2 * 8 != lVar10);
      }
      local_58 = 0;
      uStack_50 = 0;
      iVar2 = (int)param_1[0x81];
      local_90 = param_1;
      local_70 = param_2;
      if (iVar2 == 0) {
        uVar12 = 1;
        uVar16 = 0;
        iVar11 = 0;
        iVar17 = 0;
      }
      else {
        puVar9 = (uint *)param_1[0x80];
        if ((uint *)param_1[0x80] == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x7e);
        }
        uVar15 = *puVar9;
        if (uVar15 == 0) {
          iVar11 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar11 = iVar2 + -1;
          }
          uVar16 = 0;
          uVar12 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar12 = uVar16;
          }
          iVar17 = 0;
          do {
            if (uVar12 == uVar16) goto LAB_1404e5cca;
            iVar17 = iVar17 + 0x20;
            uVar15 = puVar9[uVar16 + 1];
            uVar16 = uVar16 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar16 = 0;
          iVar17 = 0;
        }
        uVar12 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar11 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar11) {
          iVar11 = iVar2;
        }
      }
      if (iVar11 < iVar2) {
        local_88 = param_1 + 0x7c;
        uVar15 = 0xffffffff;
        do {
          lVar14 = *(longlong *)(*local_88 + 8 + (longlong)iVar11 * 0x18);
          cVar5 = FUN_1404e5e32(lVar14,local_70);
          if ((cVar5 != '\0') && ((*(byte *)(lVar14 + 0x28) & 1) == 0)) {
            if ((longlong)(int)local_90[0x20] != 0) {
              local_60 = lVar14 + 0x28;
              local_68 = local_90[0x1f];
              lVar10 = (longlong)(int)local_90[0x20] << 3;
              lVar13 = 0;
              local_80 = lVar10;
              do {
                lVar3 = *(longlong *)(local_68 + lVar13);
                if ((*(longlong *)(lVar3 + 0x58) == 0) ||
                   (*(longlong *)(*(longlong *)(lVar3 + 0x58) + 0x840) == 0)) {
                  plVar4 = *(longlong **)(lVar3 + 0x14a8);
                  local_78 = lVar13;
                  if (plVar4 == (longlong *)0x0) {
                    FUN_140326250(lVar3 + 0x14e0,local_60);
                    lVar10 = local_80;
                    lVar13 = local_78;
                  }
                  else {
                    (**(code **)(*plVar4 + 0x2c8))(plVar4,lVar14);
                    lVar10 = local_80;
                    lVar13 = local_78;
                  }
                }
                lVar13 = lVar13 + 8;
              } while (lVar10 != lVar13);
            }
            uVar1 = uStack_50;
            lVar14 = *local_88;
            lVar10 = (longlong)(int)uStack_50;
            uVar6 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
            if (uStack_50._4_4_ < uVar6) {
              FUN_140b3b51e(&local_58,uVar1 & 0xffffffff);
            }
            *(undefined8 *)(local_58 + lVar10 * 8) =
                 *(undefined8 *)((longlong)iVar11 * 0x18 + lVar14);
            FUN_14571c1d0(local_88,iVar11);
          }
          uVar15 = uVar15 & ~(uint)uVar12;
          puVar9 = (uint *)local_90[0x80];
          if ((uint *)local_90[0x80] == (uint *)0x0) {
            puVar9 = (uint *)(param_1 + 0x7e);
          }
          iVar2 = (int)local_90[0x81];
          iVar11 = (int)uVar16;
          lVar14 = (longlong)iVar11;
          uVar6 = puVar9[lVar14] & uVar15;
          if (uVar6 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar8 = iVar7;
            if (iVar7 < iVar11) {
              iVar8 = iVar11;
            }
            if (iVar7 <= iVar11) break;
            lVar10 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar6 = puVar9[lVar14 + lVar10 + 1];
              if (uVar6 != 0) break;
              lVar10 = lVar10 + 1;
              if (iVar8 - lVar14 == lVar10) goto LAB_1404e5cca;
            }
            uVar16 = (ulonglong)(iVar11 + (int)lVar10 + 1);
            uVar15 = 0xffffffff;
          }
          uVar12 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar12 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar11 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar11 < iVar2);
      }
LAB_1404e5cca:
      FUN_1404e6ace(local_90,local_70,&local_58);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e5e32 FUN_1404e5e32 body=329 status=ok
// SIG undefined FUN_1404e5e32(void)

ulonglong FUN_1404e5e32(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1404e5f7c FUN_1404e5f7c body=373 status=ok
// SIG undefined FUN_1404e5f7c(void)

void FUN_1404e5f7c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  (**(code **)(*param_1 + 0x388))(param_1,param_2,1);
  lVar2 = param_1[0x1e];
  if (lVar2 != 0) {
    if (param_2 == 0) {
      uVar7 = 0;
      uVar3 = 0;
    }
    else {
      uVar7 = *(uint *)(param_2 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar3 = *(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar3 = *(uint *)(lVar6 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar6 + 0x10) = uVar5;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar5;
        }
      }
    }
    if (*(int *)(lVar2 + 0x1460) != *(int *)(lVar2 + 0x148c)) {
      lVar6 = lVar2 + 0x1490;
      if (*(longlong *)(lVar2 + 0x1498) != 0) {
        lVar6 = *(longlong *)(lVar2 + 0x1498);
      }
      iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar2 + 0x14a0) - 1U & (uVar3 ^ uVar7)) * 4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x1458) + (longlong)iVar4 * 0x18);
          if (*plVar1 == CONCAT44(uVar3,uVar7)) {
            if (plVar1 == (longlong *)0x0) {
              return;
            }
            lVar2 = plVar1[1];
            if (lVar2 == 0) {
              return;
            }
            FUN_140744940(param_1[0x1e],param_2);
            FUN_147a48258(lVar2);
            return;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
      }
    }
  }
  return;
}



// FUNCTION 1404e60f2 FUN_1404e60f2 body=2523 status=ok
// SIG undefined FUN_1404e60f2(void)

void FUN_1404e60f2(longlong *param_1,ulonglong param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  uint local_b4;
  undefined8 local_b0;
  ulonglong *local_a8;
  ulonglong *local_a0;
  code *local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68;
  ulonglong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1[0x108] == 0) {
    cVar5 = (**(code **)(*param_1 + 0x3c0))(param_1);
    if (cVar5 != '\0') {
      cVar5 = FUN_14008df0e(param_2);
      if (((cVar5 == '\x01' && param_3 == '\0') && *(char *)(param_2 + 0x68) != '\0') &&
         ((DAT_14caf2188 & 1) == 0)) {
        lVar7 = FUN_1435993ba(param_1,param_2,0);
        local_b0 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      }
      else {
        local_b0 = 0;
        lVar7 = 0;
      }
      FUN_140573f8c(param_1[0x10b],&local_88,param_2);
      plVar2 = uStack_80;
      puVar3 = local_88;
      if (uStack_80 != (longlong *)0x0) {
        LOCK();
        plVar12 = uStack_80 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*uStack_80)(uStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (0 < (longlong)(int)param_1[0x20]) {
        local_a0 = puVar3 + 0xd;
        local_a8 = puVar3 + 0x17;
        lVar19 = (longlong)(int)param_1[0x20];
        do {
          plVar2 = *(longlong **)(param_1[0x1f] + -8 + lVar19 * 8);
          if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
            local_60[0] = param_2;
            if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(param_2);
            }
            local_88 = local_60;
            FUN_14111a8f2(plVar2 + 0x10,&local_88);
          }
          if (param_2 == 0) {
            uVar17 = 0;
            uVar6 = 0;
          }
          else {
            uVar6 = *(uint *)(param_2 + 0xc);
            uVar17 = (ulonglong)uVar6;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            uVar6 = *(uint *)(lVar18 + 0x10);
            if (*(uint *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              uVar15 = DAT_14c964868 + 1;
              bVar20 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar20) {
                local_b4 = uVar15;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar15);
                uVar15 = local_b4;
              }
              LOCK();
              uVar6 = *(uint *)(lVar18 + 0x10);
              bVar20 = uVar6 == 0;
              if (bVar20) {
                *(uint *)(lVar18 + 0x10) = uVar15;
                uVar6 = 0;
              }
              UNLOCK();
              if (bVar20) {
                uVar6 = uVar15;
              }
            }
          }
          if ((int)plVar2[0x28c] != *(int *)((longlong)plVar2 + 0x148c)) {
            plVar12 = plVar2 + 0x292;
            if ((longlong *)plVar2[0x293] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar2[0x293];
            }
            iVar8 = *(int *)((longlong)plVar12 +
                            (ulonglong)((int)plVar2[0x294] - 1U & (uVar6 ^ (uint)uVar17)) * 4);
            if (iVar8 != -1) {
              do {
                puVar13 = (ulonglong *)(plVar2[0x28b] + (longlong)iVar8 * 0x18);
                if (*puVar13 == (uVar17 | (ulonglong)uVar6 << 0x20)) {
                  if ((puVar13 != (ulonglong *)0x0) &&
                     (plVar12 = (longlong *)puVar13[1], plVar12 != (longlong *)0x0)) {
                    *(byte *)(plVar12 + 0x12) = *(byte *)(plVar12 + 0x12) & 0xf7;
                    (**(code **)(*plVar12 + 0x2b8))(plVar12,0);
                    goto LAB_1404e6555;
                  }
                  break;
                }
                iVar8 = (int)puVar13[2];
              } while (iVar8 != -1);
            }
          }
          if (puVar3 != (ulonglong *)0x0) {
            if (plVar2 == (longlong *)0x0) {
              uVar15 = 0;
              uVar6 = 0;
            }
            else {
              uVar15 = *(uint *)((longlong)plVar2 + 0xc);
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              uVar6 = *(uint *)(lVar18 + 0x10);
              if (*(uint *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar8 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar8;
                if (bVar20) {
                  local_b4 = uVar9;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                  uVar9 = local_b4;
                }
                LOCK();
                uVar6 = *(uint *)(lVar18 + 0x10);
                bVar20 = uVar6 == 0;
                if (bVar20) {
                  *(uint *)(lVar18 + 0x10) = uVar9;
                  uVar6 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  uVar6 = uVar9;
                }
              }
            }
            if ((int)puVar3[7] != *(int *)((longlong)puVar3 + 100)) {
              puVar13 = (ulonglong *)puVar3[0xe];
              if ((ulonglong *)puVar3[0xe] == (ulonglong *)0x0) {
                puVar13 = local_a0;
              }
              iVar8 = *(int *)((longlong)puVar13 +
                              (ulonglong)((int)puVar3[0xf] - 1U & (uVar6 ^ uVar15)) * 4);
              if (iVar8 != -1) {
                uVar17 = puVar3[6];
                do {
                  lVar18 = (longlong)iVar8 * 0x10;
                  if ((*(uint *)(uVar17 + lVar18) == uVar15) &&
                     (*(uint *)(uVar17 + 4 + lVar18) == uVar6)) goto LAB_1404e6526;
                  iVar8 = *(int *)(lVar18 + uVar17 + 8);
                } while (iVar8 != -1);
              }
            }
            if (plVar2 == (longlong *)0x0) {
              uVar15 = 0;
              uVar6 = 0;
            }
            else {
              uVar15 = *(uint *)((longlong)plVar2 + 0xc);
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              uVar6 = *(uint *)(lVar18 + 0x10);
              if (*(uint *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar8 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar8;
                if (bVar20) {
                  local_b4 = uVar9;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                  uVar9 = local_b4;
                }
                LOCK();
                uVar6 = *(uint *)(lVar18 + 0x10);
                bVar20 = uVar6 == 0;
                if (bVar20) {
                  *(uint *)(lVar18 + 0x10) = uVar9;
                  uVar6 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  uVar6 = uVar9;
                }
              }
            }
            if ((int)puVar3[0x11] != *(int *)((longlong)puVar3 + 0xb4)) {
              puVar13 = (ulonglong *)puVar3[0x18];
              if ((ulonglong *)puVar3[0x18] == (ulonglong *)0x0) {
                puVar13 = local_a8;
              }
              iVar8 = *(int *)((longlong)puVar13 +
                              (ulonglong)((int)puVar3[0x19] - 1U & (uVar6 ^ uVar15)) * 4);
              if (iVar8 != -1) {
                uVar17 = puVar3[0x10];
                do {
                  lVar18 = (longlong)iVar8 * 0x10;
                  if ((*(uint *)(uVar17 + lVar18) == uVar15) &&
                     (*(uint *)(uVar17 + 4 + lVar18) == uVar6)) goto LAB_1404e6526;
                  iVar8 = *(int *)(lVar18 + uVar17 + 8);
                } while (iVar8 != -1);
              }
            }
          }
          if ((char)local_b0 != '\0') {
LAB_1404e6526:
            lVar7 = FUN_1435993ba(param_1,param_2,lVar7);
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else {
              FUN_1417e28fe(plVar2,lVar7);
            }
          }
LAB_1404e6555:
          (**(code **)(*plVar2 + 0x3d0))(plVar2,param_2,0);
          bVar20 = 1 < lVar19;
          lVar19 = lVar19 + -1;
        } while (bVar20);
      }
    }
    plVar2 = (longlong *)param_1[0x1e];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x3d0))(plVar2,param_2,0);
    }
    lVar7 = param_1[0x10b];
    if (param_2 == 0) {
      uVar15 = 0;
      uVar6 = 0;
    }
    else {
      uVar15 = *(uint *)(param_2 + 0xc);
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar6 = *(uint *)(lVar19 + 0x10);
      if (*(uint *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar9);
        }
        LOCK();
        uVar6 = *(uint *)(lVar19 + 0x10);
        bVar20 = uVar6 == 0;
        if (bVar20) {
          *(uint *)(lVar19 + 0x10) = uVar9;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar20) {
          uVar6 = uVar9;
        }
      }
    }
    if (*(int *)(lVar7 + 0x238) != *(int *)(lVar7 + 0x264)) {
      uVar9 = uVar6 >> 0xd ^ uVar15 - uVar6;
      uVar11 = uVar9 << 8 ^ (-0x61c88647 - uVar6) - uVar9;
      uVar14 = uVar11 >> 0xd ^ (uVar6 - uVar9) - uVar11;
      uVar16 = uVar14 >> 0xc ^ (uVar9 - uVar11) - uVar14;
      uVar9 = uVar16 << 0x10 ^ (uVar11 - uVar14) - uVar16;
      uVar11 = uVar9 >> 5 ^ (uVar14 - uVar16) - uVar9;
      uVar14 = uVar11 >> 3 ^ (uVar16 - uVar9) - uVar11;
      uVar9 = uVar14 << 10 ^ (uVar9 - uVar11) - uVar14;
      lVar19 = lVar7 + 0x268;
      if (*(longlong *)(lVar7 + 0x270) != 0) {
        lVar19 = *(longlong *)(lVar7 + 0x270);
      }
      iVar8 = *(int *)(lVar19 + ((longlong)(int)(uVar9 >> 0xf ^ uVar11 - (uVar14 + uVar9)) &
                                (longlong)*(int *)(lVar7 + 0x278) - 1U) * 4);
      if (iVar8 != -1) {
        lVar19 = *(longlong *)(lVar7 + 0x230);
        do {
          lVar18 = (longlong)iVar8 * 0x78;
          if ((*(uint *)(lVar19 + lVar18) == uVar15) && (*(uint *)(lVar19 + 4 + lVar18) == uVar6)) {
            FUN_1403cca3c((longlong *)(lVar7 + 0x230));
            break;
          }
          iVar8 = *(int *)(lVar18 + lVar19 + 0x70);
        } while (iVar8 != -1);
      }
    }
    FUN_14021bb6a(param_1,param_2);
  }
  else if (((*(byte *)(param_1[0x108] + 0x50) & 1) != 0) && (param_2 != 0)) {
    cVar5 = *(char *)(param_2 + 0x68);
    cVar4 = FUN_1449e2a3e(param_2);
    if ((cVar4 != '\0') &&
       (((((cVar5 != '\0' && *(char *)(param_2 + 0x179) == '\x04') && param_3 == '\0' &&
          ((DAT_14caf2188 & 1) == 0)) && (lVar7 = FUN_147bd6678(param_1[0x108]), lVar7 != 0)) &&
        (FUN_146f23f7c(*(undefined8 *)(lVar7 + 0x48),local_60,param_2), (local_60[0] & 1) != 0)))) {
      lVar19 = *(longlong *)(param_2 + 0x1c8);
      if (lVar19 == 0) {
        local_78 = DAT_14c8464f0;
        local_88 = (ulonglong *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_80 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_88 = *(ulonglong **)(lVar19 + 0x260);
        uStack_80 = *(longlong **)(lVar19 + 0x268);
        local_78 = *(undefined8 *)(lVar19 + 0x270);
      }
      if (DAT_14cae8b20 == 0) {
        local_d0 = local_98;
        local_98[0] = (code *)&LAB_14355090c;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_147b8e16d;
        local_e0 = (code *)&LAB_140810a38;
        local_e8 = L"Engine";
        local_f0 = 0x800000000;
        local_f8 = 0x10000000;
        local_100 = 8;
        local_108 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar19 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_d0 = local_98;
        local_98[0] = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d8 = &LAB_1468c5283;
        local_e0 = FUN_142809da0;
        local_e8 = L"Engine";
        local_f0 = 0x400000000;
        local_f8 = 0x10000000;
        local_100 = 8;
        local_108 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar18 = *(longlong *)(param_2 + 0x20);
      if (lVar18 == 0) {
        local_70 = 0;
      }
      else {
        iVar8 = *(int *)(lVar19 + 0x38);
        lVar10 = lVar18;
        do {
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar8) ||
             (local_70 = lVar10,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar8 * 8)
             != lVar19 + 0x30)) {
            local_70 = 0;
          }
        } while ((local_70 == 0) && (lVar10 = *(longlong *)(lVar10 + 0x20), lVar10 != 0));
      }
      local_68 = 1;
      local_50 = *(undefined8 *)(param_2 + 0x18);
      FUN_1400021e4(&local_50,local_98);
      FUN_146f33c20(lVar7,local_98,lVar18,&local_88);
      if (local_98[0] != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e6ace FUN_1404e6ace body=298 status=ok
// SIG undefined FUN_1404e6ace(void)

void FUN_1404e6ace(longlong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_2 + 0xc0) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0x30) != param_2)) {
LAB_1404e6af1:
    lVar3 = param_2;
    lVar2 = lVar3;
    if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x0001404e6b00;
    goto LAB_1404e6b0e;
  }
  lVar2 = 0;
LAB_1404e6b1b:
  if (*(int *)(param_1 + 0x438) != *(int *)(param_1 + 0x464)) {
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar3 = param_1 + 0x468;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x470);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x478) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x430) + (longlong)iVar5 * 0x60;
        if (*(longlong *)(*(longlong *)(param_1 + 0x430) + (longlong)iVar5 * 0x60) == lVar2) {
          if (lVar3 == 0) {
            return;
          }
          if (lVar3 + 8 == 0) {
            return;
          }
          if ((longlong)(int)param_3[1] == 0) {
            return;
          }
          lVar2 = *param_3;
          lVar6 = (longlong)(int)param_3[1] << 3;
          do {
            FUN_140326250(lVar3 + 8,lVar2);
            lVar2 = lVar2 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
          return;
        }
        iVar5 = *(int *)(lVar3 + 0x58);
      } while (iVar5 != -1);
    }
  }
  return;
code_r0x0001404e6b00:
  param_2 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_1404e6af1;
  lVar2 = FUN_142840154(lVar3);
LAB_1404e6b0e:
  if (lVar2 == 0) {
    param_2 = *(longlong *)(lVar3 + 0x20);
    goto LAB_1404e6af1;
  }
  lVar2 = *(longlong *)(lVar2 + 0x18);
  goto LAB_1404e6b1b;
}



// FUNCTION 1404e6bfe FUN_1404e6bfe body=57 status=ok
// SIG undefined FUN_1404e6bfe(void)

void FUN_1404e6bfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf540 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf540 = FUN_140002ddd(FUN_1465ef90f,uVar1,L"OakTrackerObjectLocationDef");
  }
  return;
}



// FUNCTION 1404e6c38 FUN_1404e6c38 body=121 status=ok
// SIG undefined FUN_1404e6c38(void)

void FUN_1404e6c38(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  iVar5 = 0x20;
  if (0x20 < uVar1) {
    lVar4 = (longlong)(int)uVar1;
    if (0x20 < *(uint *)(param_1 + 0x20c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
  }
  *(int *)(param_1 + 0x20c) = iVar5;
  FUN_1404e6cb2(param_1,param_2);
  return;
}



// FUNCTION 1404e6cb2 FUN_1404e6cb2 body=140 status=ok
// SIG undefined FUN_1404e6cb2(void)

void FUN_1404e6cb2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x10);
  return;
}



// FUNCTION 1404e6d3e FUN_1404e6d3e body=26 status=ok
// SIG undefined FUN_1404e6d3e(void)

void FUN_1404e6d3e(longlong param_1)

{
  FUN_1404e6d58();
  *(undefined1 *)(param_1 + 0x550) = 0;
  return;
}



// FUNCTION 1404e6d58 FUN_1404e6d58 body=114 status=ok
// SIG undefined FUN_1404e6d58(void)

void FUN_1404e6d58(longlong param_1)

{
  FUN_1404e6ea0();
  *(undefined1 *)(param_1 + 0x448) = 0;
  *(byte *)(param_1 + 0x449) = *(byte *)(param_1 + 0x449) & 0xe0;
  *(undefined8 *)(param_1 + 0x44c) = 0;
  *(undefined8 *)(param_1 + 0x454) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  FUN_1404e6dca(param_1 + 0x468);
  *(undefined8 *)(param_1 + 0x4e8) = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 0x4f0) = 0xbf800000;
  FUN_1404f22a0(param_1 + 0x4f8,0);
  *(undefined8 *)(param_1 + 0x548) = 0;
  return;
}



// FUNCTION 1404e6dca FUN_1404e6dca body=213 status=ok
// SIG undefined FUN_1404e6dca(void)

void FUN_1404e6dca(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  _uStack_a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _local_98 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  uStack_90 = DAT_14c8464f0;
  local_88 = (undefined4)DAT_14c8464e0;
  uStack_84 = DAT_14c8464e0._4_4_;
  uStack_80 = (undefined4)DAT_14c8464e8;
  uStack_7c = DAT_14c8464e8._4_4_;
  local_78 = DAT_14c8464f0;
  _uStack_70 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _local_68 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  uStack_60 = DAT_14c8464f0;
  local_38 = 0;
  puVar2 = &local_a8;
  puVar3 = param_1;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[10] = 0;
  FUN_1403ed422(param_1 + 0xb,&uStack_50);
  *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_30;
  param_1[0xe] = local_38;
  if ((char)uStack_40 == '\x01') {
    FUN_1449db362(&uStack_50);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e6ea0 FUN_1404e6ea0 body=729 status=ok
// SIG undefined FUN_1404e6ea0(void)

void FUN_1404e6ea0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xc0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x24) = 0x100000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x48) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x70) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  memset((void *)(param_1 + 0x90),0,0x9c);
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x188) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined8 *)(param_1 + 0x1b0) = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x1a0) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  uVar1 = DAT_14c8463d8;
  *(undefined8 *)(param_1 + 0x1c0) = DAT_14c8463d0;
  *(undefined8 *)(param_1 + 0x1c8) = uVar1;
  uVar1 = DAT_14c8463e8;
  *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8463e0;
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x220) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x210) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  *(undefined8 *)(param_1 + 0x238) = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x228) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x230) = uVar1;
  *(undefined8 *)(param_1 + 0x250) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x240) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x248) = uVar1;
  *(undefined8 *)(param_1 + 0x268) = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 600) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x260) = uVar1;
  *(undefined8 *)(param_1 + 0x298) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x288) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x290) = uVar1;
  *(undefined8 *)(param_1 + 0x2c8) = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x2b8) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x2c0) = uVar1;
  *(undefined8 *)(param_1 + 0x2b0) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x2a0) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x2a8) = uVar1;
  *(undefined8 *)(param_1 + 0x338) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x328) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x330) = uVar1;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x358) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x348) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x350) = uVar1;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x308) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x2f8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x300) = uVar1;
  *(undefined8 *)(param_1 + 800) = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x310) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)(param_1 + 0x314) = uVar2;
  *(undefined4 *)(param_1 + 0x318) = uVar3;
  *(undefined4 *)(param_1 + 0x31c) = uVar4;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  FUN_140239626(param_1 + 0x3f0);
  return;
}



// FUNCTION 1404e7180 FUN_1404e7180 body=57 status=ok
// SIG undefined FUN_1404e7180(void)

void FUN_1404e7180(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5adf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5adf8 = FUN_140002ddd(FUN_1464cd0a3,uVar1,L"GbxBrainAspect_Rotate");
  }
  return;
}



// FUNCTION 1404e71ba FUN_1404e71ba body=1066 status=ok
// SIG undefined FUN_1404e71ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404e71ba(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 auStack_208 [32];
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
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x38) + 8) >> 0x1e & 1) == 0)) {
    *(byte *)(param_1 + 0x790) = (*(byte *)(param_1 + 0x790) & 0xfc) + 1;
    iVar4 = 0;
    memset((void *)(param_1 + 0x270),0,0xc0);
    local_1b8 = _DAT_14c846280;
    uStack_1b0 = _DAT_14c846288;
    local_1c8 = _DAT_14c846270;
    uStack_1c0 = _DAT_14c846278;
    local_1d8 = _DAT_14c846260;
    uStack_1d0 = _DAT_14c846268;
    local_1e8 = _DAT_14c846250;
    uStack_1e0 = DAT_14c846258;
    local_1a8 = _DAT_14c846250;
    uStack_1a0 = DAT_14c846258;
    local_198 = _DAT_14c846260;
    uStack_190 = _DAT_14c846268;
    local_188 = _DAT_14c846270;
    uStack_180 = _DAT_14c846278;
    local_178 = _DAT_14c846280;
    uStack_170 = _DAT_14c846288;
    local_168 = _DAT_14c846250;
    uStack_160 = DAT_14c846258;
    local_158 = _DAT_14c846260;
    uStack_150 = _DAT_14c846268;
    local_148 = _DAT_14c846270;
    uStack_140 = _DAT_14c846278;
    local_138 = _DAT_14c846280;
    uStack_130 = _DAT_14c846288;
    local_128 = _DAT_14c846250;
    uStack_120 = DAT_14c846258;
    local_118 = _DAT_14c846260;
    uStack_110 = _DAT_14c846268;
    local_108 = _DAT_14c846270;
    uStack_100 = _DAT_14c846278;
    local_f8 = _DAT_14c846280;
    uStack_f0 = _DAT_14c846288;
    local_b8 = _DAT_14c846280;
    uStack_b0 = _DAT_14c846288;
    local_c8 = _DAT_14c846270;
    uStack_c0 = _DAT_14c846278;
    local_d8 = _DAT_14c846260;
    uStack_d0 = _DAT_14c846268;
    local_e8 = _DAT_14c846250;
    uStack_e0 = DAT_14c846258;
    local_a8 = _DAT_14c846250;
    uStack_a0 = DAT_14c846258;
    local_98 = _DAT_14c846260;
    uStack_90 = _DAT_14c846268;
    local_88 = _DAT_14c846270;
    uStack_80 = _DAT_14c846278;
    local_78 = _DAT_14c846280;
    uStack_70 = _DAT_14c846288;
    local_68 = ram0x00014c846340;
    uStack_60 = _DAT_14c846348;
    memcpy((void *)(param_1 + 0x330),&local_1e8,400);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    *(undefined4 *)(param_1 + 0x4e0) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x4e4) = 0;
    *(undefined8 *)(param_1 + 0x4ec) = 0;
    *(undefined4 *)(param_1 + 0x4f4) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    *(undefined8 *)(param_1 + 0x500) = 0;
    *(undefined8 *)(param_1 + 0x508) = 0x3f800000;
    *(undefined1 **)(param_1 + 0x510) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 0x518) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x51c) = 0;
    *(undefined8 *)(param_1 + 0x524) = 0;
    *(undefined4 *)(param_1 + 0x52c) = 0;
    local_1b8 = _DAT_14c846280;
    uStack_1b0 = _DAT_14c846288;
    local_1c8 = _DAT_14c846270;
    uStack_1c0 = _DAT_14c846278;
    local_1d8 = _DAT_14c846260;
    uStack_1d0 = _DAT_14c846268;
    local_1e8 = _DAT_14c846250;
    uStack_1e0 = DAT_14c846258;
    local_1a8 = _DAT_14c846250;
    uStack_1a0 = DAT_14c846258;
    local_198 = _DAT_14c846260;
    uStack_190 = _DAT_14c846268;
    local_188 = _DAT_14c846270;
    uStack_180 = _DAT_14c846278;
    local_178 = _DAT_14c846280;
    uStack_170 = _DAT_14c846288;
    local_168 = _DAT_14c846250;
    uStack_160 = DAT_14c846258;
    local_158 = _DAT_14c846260;
    uStack_150 = _DAT_14c846268;
    local_148 = _DAT_14c846270;
    uStack_140 = _DAT_14c846278;
    local_138 = _DAT_14c846280;
    uStack_130 = _DAT_14c846288;
    local_f8 = _DAT_14c846280;
    uStack_f0 = _DAT_14c846288;
    local_108 = _DAT_14c846270;
    uStack_100 = _DAT_14c846278;
    local_118 = _DAT_14c846260;
    uStack_110 = _DAT_14c846268;
    local_128 = _DAT_14c846250;
    uStack_120 = DAT_14c846258;
    local_b8 = _DAT_14c846280;
    uStack_b0 = _DAT_14c846288;
    local_c8 = _DAT_14c846270;
    uStack_c0 = _DAT_14c846278;
    local_d8 = _DAT_14c846260;
    uStack_d0 = _DAT_14c846268;
    local_e8 = _DAT_14c846250;
    uStack_e0 = DAT_14c846258;
    local_78 = _DAT_14c846280;
    uStack_70 = _DAT_14c846288;
    local_88 = _DAT_14c846270;
    uStack_80 = _DAT_14c846278;
    local_98 = _DAT_14c846260;
    uStack_90 = _DAT_14c846268;
    local_a8 = _DAT_14c846250;
    uStack_a0 = DAT_14c846258;
    local_68 = ram0x00014c846340;
    uStack_60 = _DAT_14c846348;
    memcpy((void *)(param_1 + 0x530),&local_1e8,400);
    *(undefined8 *)(param_1 + 0x6c0) = 0;
    *(undefined8 *)(param_1 + 0x6c8) = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    *(undefined4 *)(param_1 + 0x6e0) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x6e4) = 0;
    *(undefined8 *)(param_1 + 0x6ec) = 0;
    *(undefined4 *)(param_1 + 0x6f4) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x708) = 0x3f800000;
    *(undefined1 **)(param_1 + 0x710) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 0x718) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x71c) = 0;
    *(undefined8 *)(param_1 + 0x724) = 0;
    *(undefined4 *)(param_1 + 0x72c) = 0;
    uVar6 = *(int *)(param_1 + 0x110) * 2;
    if (-1 < *(int *)(param_1 + 0x110)) {
      iVar2 = *(int *)(param_1 + 0x73c);
      *(undefined4 *)(param_1 + 0x738) = 0;
      if (iVar2 < (int)uVar6) {
        FUN_1404e75e6(param_1 + 0x730,uVar6);
        iVar4 = *(int *)(param_1 + 0x738);
        iVar2 = *(int *)(param_1 + 0x73c);
        uVar6 = *(int *)(param_1 + 0x110) * 2;
      }
      *(uint *)(param_1 + 0x738) = iVar4 + uVar6;
      if ((uint)(iVar2 - iVar4) < uVar6) {
        FUN_1481f7f1c(param_1 + 0x730,iVar4);
      }
      FUN_1449cd25a((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x730),uVar6);
      puVar5 = &DAT_14c846480;
      puVar7 = (undefined8 *)(param_1 + 0x8c0);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined8 *)(param_1 + 0x930) = DAT_14c8464f0;
      uVar1 = DAT_14c8464e8;
      *(undefined8 *)(param_1 + 0x920) = DAT_14c8464e0;
      *(undefined8 *)(param_1 + 0x928) = uVar1;
      *(undefined8 *)(param_1 + 0x938) = 0;
      *(undefined8 *)(param_1 + 0x940) = 0;
      *(undefined8 *)(param_1 + 0x944) = 0;
      *(undefined8 *)(param_1 + 0x94c) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_208);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if ((local_50 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e75e6 FUN_1404e75e6 body=212 status=ok
// SIG undefined FUN_1404e75e6(void)

void FUN_1404e75e6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 1404e76ba FUN_1404e76ba body=86 status=ok
// SIG undefined FUN_1404e76ba(void)

byte FUN_1404e76ba(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_1400f6522(param_1);
    bVar3 = 1;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x71) = 1;
    FUN_14007f294();
    lVar1 = *(longlong *)(param_1 + 0x20);
    cVar2 = FUN_1404e786a(lVar1 + 8);
    if (cVar2 != '\0') {
      FUN_1404e7742(lVar1 + 0x48);
    }
    bVar3 = FUN_1404e7710(*(undefined8 *)(param_1 + 0x20));
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}



// FUNCTION 1404e7710 FUN_1404e7710 body=50 status=ok
// SIG undefined FUN_1404e7710(void)

undefined8 FUN_1404e7710(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar2 = 0;
  if ((lVar1 == 0) ||
     (uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1), (*(byte *)(lVar1 + 0xa0) & 1) != 0)) {
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    uVar2 = CONCAT71(uVar3,1);
    if ((*(int *)(param_1 + 0x28) == 0) &&
       ((*(int *)(param_1 + 0x18) == 0 && (*(int *)(param_1 + 0x68) == 0)))) {
      uVar2 = CONCAT71(uVar3,*(int *)(param_1 + 0x58) != 0);
    }
  }
  return uVar2;
}



// FUNCTION 1404e7742 FUN_1404e7742 body=295 status=ok
// SIG undefined FUN_1404e7742(void)

undefined8 FUN_1404e7742(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar5 = CONCAT71((int7)(local_30 >> 8),*(int *)(param_1 + 0x10) == 0);
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x18);
    lVar3 = *plVar6;
    iVar9 = 0;
    *plVar6 = 0;
    iVar1 = (int)plVar6[1];
    local_34 = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    _Dst = *(void **)(param_1 + 0x18);
    local_40 = lVar3;
    local_38 = iVar1;
    FUN_140102b0c(_Dst);
    iVar4 = *(int *)(param_1 + 0x20) + -1;
    if (iVar4 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar4 << 4);
      iVar9 = *(int *)(param_1 + 0x20) + -1;
    }
    *(int *)(param_1 + 0x20) = iVar9;
    if (iVar1 != 0) {
      lVar8 = 0;
      do {
        iVar4 = *(int *)(lVar3 + 4 + lVar8);
        if (((iVar4 != 0) && (uVar2 = *(uint *)(lVar3 + lVar8), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == iVar4)) &&
             ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
              plVar6 = (longlong *)*puVar7;
            }
            else {
              plVar6 = (longlong *)0x0;
            }
            (**(code **)(*plVar6 + 0x330))();
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    FUN_140102b0c(&local_40);
    uVar5 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e786a FUN_1404e786a body=2770 status=ok
// SIG undefined FUN_1404e786a(void)

ulonglong FUN_1404e786a(longlong *param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulonglong *_Dst;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_1[7] == 0) || ((*(byte *)(param_1[7] + 0xa0) & 1) != 0)) {
    ppuVar1 = (undefined8 **)(param_1 + 5);
    FUN_140102a84(ppuVar1);
    if ((int)param_1[4] == 0) {
      if ((param_1[7] == 0) || (((*(byte *)(param_1[7] + 0xa0) & 1) != 0 && ((int)param_1[4] == 0)))
         ) {
        uVar18 = CONCAT71((int7)((ulonglong)param_1 >> 8),(int)param_1[2] == 0);
        goto LAB_1404e7f8b;
      }
    }
    else {
      plVar5 = (longlong *)*param_1;
      if ((char)plVar5[0xe] == '\x01') {
        uVar6 = *(undefined8 *)(*(longlong *)(*plVar5 + 0xc0) + 0x218);
        if (*(char *)((longlong)plVar5 + 0x71) == '\0') {
          puVar23 = (undefined8 *)param_1[3];
          uVar13 = *puVar23;
          iVar10 = 0;
          *puVar23 = 0;
          uVar3 = *(undefined4 *)(puVar23 + 1);
          uVar4 = *(undefined4 *)((longlong)puVar23 + 0xc);
          puVar23[1] = 0;
          pvVar7 = (void *)param_1[3];
          FUN_140102b0c(pvVar7);
          iVar12 = (int)param_1[4] + -1;
          if (iVar12 != 0) {
            memmove(pvVar7,(void *)((longlong)pvVar7 + 0x10),(longlong)iVar12 << 4);
            iVar10 = (int)param_1[4] + -1;
          }
          *(int *)(param_1 + 4) = iVar10;
          local_b8 = (undefined8 *)0x0;
          uStack_b0 = 1;
          FUN_1404936e2(&local_b8,0);
          *local_b8 = uVar13;
          local_98.QuadPart = 0;
          *(undefined4 *)(local_b8 + 1) = uVar3;
          *(undefined4 *)((longlong)local_b8 + 0xc) = uVar4;
          uStack_90 = 0;
          if (ppuVar1 != &local_b8) {
            FUN_140102ae4(param_1[5],(int)param_1[6]);
            if (param_1[5] != 0) {
              FUN_1400020a8();
            }
            param_1[5] = (longlong)local_b8;
            local_b8 = (undefined8 *)0x0;
            *(undefined4 *)(param_1 + 6) = (undefined4)uStack_b0;
            *(undefined4 *)((longlong)param_1 + 0x34) = uStack_b0._4_4_;
            uStack_b0 = 0;
          }
          puVar23 = TlsGetValue(DAT_14c896140);
          if (puVar23 == (undefined8 *)0x0) {
            puVar23 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            *puVar23 = 0;
            puVar23[1] = 0;
            *(undefined4 *)(puVar23 + 2) = 0;
            TlsSetValue(DAT_14c896140,puVar23);
          }
          puVar14 = (undefined8 *)puVar23[1];
          if (puVar14 == (undefined8 *)0x0) {
            puVar14 = (undefined8 *)*puVar23;
            if (puVar14 == (undefined8 *)0x0) {
              uVar9 = (uint)DAT_14c896180;
              uVar18 = DAT_14c896180;
              while (DAT_14c896180 = uVar18, local_a0 = uVar18, (uVar18 & 0x3ffffff) != 0) {
                local_c8 = (uVar18 & 0xfffffffffc000000) + 0x4000000;
                if (local_c8 >> 0x1a < uVar18 >> 0x1a) {
                  FUN_14000f986(0x3a83126f);
                }
                uVar17 = (ulonglong)((uVar9 & 0x3ffffff) >> 0xe);
                uVar21 = (ulonglong)((uint)uVar18 & 0x3fff);
                local_c8 = local_c8 & 0xfffffffffc000000 |
                           (ulonglong)
                           *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 0x10 +
                                    uVar21 * 0x18);
                LOCK();
                bVar24 = local_a0 == DAT_14c896180;
                uVar18 = local_c8;
                if (!bVar24) {
                  uVar18 = DAT_14c896180;
                }
                DAT_14c896180 = uVar18;
                UNLOCK();
                if (bVar24) {
                  *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + uVar21 * 0x18 + 0x10)
                       = 0;
                  puVar14 = *(undefined8 **)
                             (*(longlong *)(&DAT_14c833b00 + uVar17 * 8) + 8 +
                             (ulonglong)(uVar9 & 0x3fff) * 0x18);
                  FUN_1447d080c(uVar9 & 0x3ffffff);
                  puVar23[1] = puVar14;
                  if (puVar14 != (undefined8 *)0x0) goto LAB_1404e8180;
                  goto LAB_1404e8220;
                }
                uVar9 = (uint)DAT_14c896180;
                uVar18 = DAT_14c896180;
              }
              puVar23[1] = 0;
LAB_1404e8220:
              puVar14 = (undefined8 *)FUN_14001cc68(0x10000,0);
              puVar23[1] = puVar14;
              iVar12 = 0xff;
              puVar15 = puVar14;
              do {
                puVar16 = puVar15 + 0x20;
                *puVar15 = puVar16;
                iVar12 = iVar12 + -1;
                puVar15 = puVar16;
              } while (iVar12 != 0);
            }
            else {
              puVar23[1] = puVar14;
              puVar16 = puVar23;
            }
            *puVar16 = 0;
LAB_1404e8180:
            *(undefined4 *)(puVar23 + 2) = 0x100;
            iVar12 = 0xff;
          }
          else {
            iVar12 = *(int *)(puVar23 + 2) + -1;
          }
          puVar23[1] = *puVar14;
          *(int *)(puVar23 + 2) = iVar12;
          *puVar14 = UE::Tasks::Private::FTaskBase::vftable;
          puVar14[1] = &DAT_100000002;
          puVar14[2] = 0;
          *(undefined4 *)(puVar14 + 3) = 0;
          *(undefined4 *)(puVar14 + 4) = 0xffffffff;
          puVar14[6] = 0;
          puVar14[7] = 0x100000000;
          *(undefined1 *)(puVar14 + 8) = 1;
          puVar14[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          puVar14[0xf] = 0;
          puVar14[0x10] = 0xe800000000000020;
          puVar14[0x12] = 0;
          puVar14[0x13] = 0x100000000;
          *(undefined2 *)(puVar14 + 0x14) = 0;
          LOCK();
          bVar24 = *(char *)(puVar14 + 8) == '\x01';
          if (bVar24) {
            *(char *)(puVar14 + 8) = '\0';
          }
          UNLOCK();
          if (!bVar24) {
            FUN_14008cdb0(puVar14 + 8);
          }
          *puVar14 = &PTR_FUN_14a78d6b8;
          if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
          }
          puVar14[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar14[9] = puVar14;
          puVar14[10] = puVar14;
          lVar22 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar22 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined8 *)(lVar22 + 0x30);
          }
          puVar14[0xf] = uVar13;
          puVar14[0x10] = 0xc80000529df6ad00;
          *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
          puVar14[0x15] = uVar6;
          puVar14[0x16] = ppuVar1;
          *puVar14 = &PTR_FUN_14a78d6a8;
          local_a0 = CONCAT71(local_a0._1_7_,1);
          FUN_1447439e4(puVar14);
          puVar23 = (undefined8 *)param_1[7];
          param_1[7] = (longlong)puVar14;
          if (puVar23 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar23 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar23)(puVar23,1);
            }
          }
          FUN_140102ae4(local_b8,uStack_b0 & 0xffffffff);
          if (local_b8 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          FUN_140102b0c(&local_98);
        }
        else {
          iVar12 = 0x7fffffff;
          if (DAT_14c7614ac != 0) {
            iVar12 = DAT_14c7614ac;
          }
          local_98.QuadPart = 0;
          uStack_90 = 0;
          local_c0 = uVar6;
          if (0 < iVar12) {
            iVar10 = 0;
            while( true ) {
              uVar18 = uStack_90;
              puVar23 = (undefined8 *)param_1[3];
              iVar20 = *(int *)(puVar23 + 1) + iVar10;
              if (iVar12 < iVar20) break;
              lVar22 = (longlong)(int)uStack_90;
              uVar9 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
              if (uStack_90._4_4_ < uVar9) {
                FUN_1404936e2(&local_98,uVar18 & 0xffffffff);
              }
              lVar22 = lVar22 * 0x10;
              *(undefined8 *)(local_98.QuadPart + lVar22) = 0;
              *(undefined8 *)(local_98.QuadPart + lVar22) = *puVar23;
              *puVar23 = 0;
              *(undefined4 *)(local_98.QuadPart + 8 + lVar22) = *(undefined4 *)(puVar23 + 1);
              *(undefined4 *)(local_98.QuadPart + 0xc + lVar22) =
                   *(undefined4 *)((longlong)puVar23 + 0xc);
              puVar23[1] = 0;
              pvVar7 = (void *)param_1[3];
              FUN_140102b0c(pvVar7);
              iVar10 = (int)param_1[4] + -1;
              if (iVar10 == 0) {
                *(undefined4 *)(param_1 + 4) = 0;
                goto LAB_1404e7f5f;
              }
              memmove(pvVar7,(void *)((longlong)pvVar7 + 0x10),(longlong)iVar10 << 4);
              iVar11 = (int)param_1[4] + -1;
              *(int *)(param_1 + 4) = iVar11;
              if ((iVar12 <= iVar20) || (iVar10 = iVar20, iVar11 == 0)) goto LAB_1404e7f5f;
            }
            iVar20 = iVar12 - iVar10;
            lVar22 = (longlong)(int)uStack_90;
            uVar9 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
            if (uStack_90._4_4_ < uVar9) {
              FUN_1404936e2(&local_98,uVar18 & 0xffffffff);
            }
            lVar22 = lVar22 * 0x10;
            *(undefined8 *)(local_98.QuadPart + lVar22) = 0;
            ((undefined8 *)(local_98.QuadPart + lVar22))[1] = 0;
            pvVar7 = *(void **)param_1[3];
            *(int *)(local_98.QuadPart + 8 + lVar22) = iVar20;
            if (iVar12 != iVar10) {
              puVar23 = (undefined8 *)(local_98.QuadPart + lVar22);
              FUN_1449bcc2e(puVar23,0);
              memcpy((void *)*puVar23,pvVar7,(longlong)iVar20 * 8);
              puVar23 = (undefined8 *)param_1[3];
              iVar12 = iVar20;
              if (*(int *)(puVar23 + 1) - iVar20 != 0) {
                memmove((void *)*puVar23,(void *)((longlong)*puVar23 + (longlong)iVar20 * 8),
                        (longlong)(*(int *)(puVar23 + 1) - iVar20) << 3);
                iVar12 = *(int *)(puVar23 + 1);
              }
              *(int *)(puVar23 + 1) = iVar12 - iVar20;
            }
          }
LAB_1404e7f5f:
          FUN_1417b0f28(&local_98,local_c0);
          FUN_140102ae4(local_98.QuadPart,uStack_90 & 0xffffffff);
          if (local_98.QuadPart != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  else if (*(char *)(*param_1 + 0x71) == '\x01') {
    if ((int)param_1[4] != 0) {
      uVar17 = 0;
      uVar18 = 0;
      do {
        uVar9 = (uint)uVar18;
        iVar12 = (int)uVar17;
        if (((((iVar12 != 0) && (-1 < (int)uVar9)) && ((int)uVar9 < DAT_14c9647dc)) &&
            ((lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (uVar18 >> 0x10 & 0xffff) * 8), lVar22 != 0 &&
             (*(int *)(lVar22 + 0x10) == iVar12)))) && ((*(uint *)(lVar22 + 8) & 0x10200000) == 0))
        goto LAB_1404e7d21;
        puVar23 = (undefined8 *)param_1[3];
        iVar12 = *(int *)(puVar23 + 1);
        while (iVar12 != 0) {
          if ((((int)uVar17 != 0) && (uVar9 = (uint)uVar18, -1 < (int)uVar9)) &&
             (((int)uVar9 < DAT_14c9647dc &&
              (((lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (uVar18 >> 0x10 & 0xffff) * 8), lVar22 != 0
                && (*(int *)(lVar22 + 0x10) == (int)uVar17)) &&
               ((*(uint *)(lVar22 + 8) & 0x10200000) == 0)))))) {
            iVar10 = (int)param_1[4];
            goto LAB_1404e7af8;
          }
          _Dst = (ulonglong *)*puVar23;
          uVar18 = *_Dst;
          uVar17 = uVar18 >> 0x20;
          iVar10 = iVar12 + -1;
          if (iVar10 == 0) {
            *(undefined4 *)(puVar23 + 1) = 0;
            break;
          }
          if (0 < iVar10) {
            iVar10 = 1;
          }
          memmove(_Dst,_Dst + (iVar12 - iVar10),(longlong)iVar10 << 3);
          iVar12 = *(int *)(puVar23 + 1) + -1;
          *(int *)(puVar23 + 1) = iVar12;
        }
        pvVar7 = (void *)param_1[3];
        FUN_140102b0c(pvVar7);
        iVar12 = (int)param_1[4] + -1;
        if (iVar12 == 0) {
          iVar10 = 0;
        }
        else {
          memmove(pvVar7,(void *)((longlong)pvVar7 + 0x10),(longlong)iVar12 << 4);
          iVar10 = (int)param_1[4] + -1;
        }
        *(int *)(param_1 + 4) = iVar10;
LAB_1404e7af8:
        iVar12 = (int)uVar17;
        uVar9 = (uint)uVar18;
      } while (iVar10 != 0);
      if (iVar12 != 0) {
LAB_1404e7d21:
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          if ((lVar22 != 0) &&
             ((*(int *)(lVar22 + 0x10) == iVar12 && ((*(uint *)(lVar22 + 8) & 0x10200000) == 0)))) {
            plVar5 = *(longlong **)(*(longlong *)(*(longlong *)*param_1 + 0xc0) + 0x218);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1))
            {
              if (DAT_14c846b14 == '\0') {
                FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                              L"Attempting to get the command line but it hasn\'t been initialized yet."
                             );
              }
              DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
              _Init_thread_footer(&DAT_14c8442bc);
            }
            if ((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) {
              bVar8 = 0;
            }
            else {
              bVar8 = DAT_14c8442b8 ^ 1;
            }
            if (((((int)uVar9 < DAT_14c9647dc) &&
                 (plVar19 = (longlong *)
                            ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                 plVar19 != (longlong *)0x0)) && ((int)plVar19[2] == iVar12)) &&
               ((((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
                 (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)) &&
                ((*(byte *)((longlong)plVar19 + 0x9c) & 1) != 0)))) {
              if ((bVar8 & (*(byte *)((longlong)plVar19 + 0x9c) & 2) == 0) != 0) {
                uVar18 = 0;
                (**(code **)(*plVar19 + 800))(plVar19,0);
                goto LAB_1404e7f8b;
              }
              if (plVar19[0xb5] == 0) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
            goto LAB_1404e7f89;
          }
        }
      }
    }
    lVar22 = param_1[7];
    if (lVar22 != 0) {
      if (DAT_14c87e718 == '\0') {
        iVar12 = *(int *)(lVar22 + 0x1c);
        if ((2 < iVar12) &&
           (bVar8 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar8 < 3)) {
          local_98.QuadPart = 0x20100000001;
          uStack_90 = 0x30100000101;
          local_88 = DAT_14c7585c8;
          local_84 = DAT_14c7585c8 | 0x200;
          local_80 = DAT_14c7585c8 | 0x100;
          local_7c = DAT_14c7585c8 | 0x300;
          local_78 = 0x20000000000;
          uStack_70 = 0x30000000100;
          if (*(byte *)((longlong)&local_98 + (ulonglong)(iVar12 - 3) * 4) == bVar8)
          goto LAB_1404e8307;
        }
        QueryPerformanceCounter(&local_98);
        uStack_90 = 0xffffffffffffffff;
        FUN_140056092(lVar22,&local_98);
      }
      else {
LAB_1404e8307:
        FUN_140082318(lVar22);
      }
      FUN_140102a84(param_1 + 5);
    }
  }
LAB_1404e7f89:
  uVar18 = 0;
LAB_1404e7f8b:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e833d FUN_1404e833d body=34 status=ok
// SIG undefined FUN_1404e833d(void)

void FUN_1404e833d(undefined4 param_1)

{
  FUN_1404e835f(0x2c,param_1,0,0,0);
  return;
}



// FUNCTION 1404e835f FUN_1404e835f body=611 status=ok
// SIG undefined FUN_1404e835f(void)

void FUN_1404e835f(byte param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [36];
  int local_54;
  undefined1 local_4d;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1447be468(param_2,&local_4c,&local_4d);
  uVar4 = DAT_14c9c0ea0;
  uVar3 = DAT_14c9c0d50;
  uVar9 = DAT_14c9c0d38;
  local_54 = local_4c;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_1404e83e5;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_1404e83e5:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x11 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x11 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_1404e8461;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1404e8461:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x12;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x88;
  if (param_1 != 0x3a) {
    *(undefined4 *)(puVar5 + 1) =
         (&DAT_14ca11f20)[(ulonglong)(2 < param_2) * 0x3a + (ulonglong)param_1];
    *puVar5 = &PTR_LAB_14a28c900;
    *(byte *)(puVar5 + 2) = param_1;
    bVar8 = 0;
    switch(param_1) {
    case 0x26:
    case 0x34:
      bVar8 = 0x26;
      break;
    case 0x27:
    case 0x35:
      bVar8 = 0x27;
      break;
    case 0x28:
    case 0x36:
      bVar8 = 0x28;
      break;
    case 0x2a:
      break;
    case 0x2b:
switchD_1404e84e8_caseD_2b:
      bVar8 = 2;
      break;
    default:
      if (param_1 == 2) goto switchD_1404e84e8_caseD_2b;
      if (param_1 == 0) break;
    case 0x29:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
switchD_1404e84e8_caseD_29:
      bVar8 = 0x29;
      if (param_1 != 0x37) {
        bVar8 = param_1;
      }
    }
    if (local_54 == 5) {
      uVar9 = uVar4;
    }
    *(byte *)((longlong)puVar5 + 0x11) = bVar8;
    puVar5[3] = param_3;
    *(int *)(puVar5 + 4) = param_2;
    puVar5[5] = param_4;
    puVar5[6] = param_5;
    *(undefined1 *)(puVar5 + 7) = 0x3a;
    puVar5[8] = uVar3;
    puVar5[9] = uVar9;
    *(undefined4 *)(puVar5 + 10) = 0x11;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    *(undefined4 *)(puVar5 + 0xf) = 0;
    *puVar5 = &PTR_FUN_14a31b690;
    *(int *)(puVar5 + 0x10) = local_4c;
    if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(undefined4 *)(puVar5 + 1) = 0xffffffff;
  *puVar5 = &PTR_LAB_14a28c900;
  *(undefined1 *)(puVar5 + 2) = 0x3a;
  goto switchD_1404e84e8_caseD_29;
}



// FUNCTION 1404e85c4 FUN_1404e85c4 body=1382 status=ok
// SIG undefined FUN_1404e85c4(void)

void FUN_1404e85c4(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  longlong **pplVar14;
  code *pcVar15;
  code *pcVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStack_168 [32];
  longlong **local_148;
  longlong *local_140;
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  longlong *local_128;
  undefined8 uStack_120;
  undefined4 local_10c;
  code *pcStack_108;
  longlong **local_100;
  undefined ***local_f8;
  undefined **local_e8;
  undefined1 *local_e0;
  code *local_c8;
  undefined8 *puStack_c0;
  undefined ***local_b8;
  undefined **local_a8;
  longlong *local_a0;
  longlong *local_88;
  longlong *local_80;
  longlong **local_78;
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_1[6] == 0) {
    local_10c = 0;
  }
  else {
    local_10c = *(undefined4 *)(param_1[6] + 0x120);
  }
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
  lVar8 = FUN_14079342c();
  if ((lVar8 != 0) && (param_1[5] != 0)) {
    local_100 = &local_88;
    local_80 = (longlong *)&local_10c;
    local_78 = &local_128;
    local_138 = &pcStack_108;
    pcStack_108 = FUN_143d209de;
    puStack_c0 = &local_138;
    local_c8 = FUN_1400460c0;
    local_88 = param_1;
    FUN_140045d3e(lVar8,&local_c8,0);
  }
  if (param_1[5] != 0) {
    lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar8 == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)(lVar8 + 0x18);
    }
    FUN_1405f0c40(DAT_14cb84f20,&local_88,plVar17);
    plVar9 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar9 = plVar17;
    }
    if (plVar9 == (longlong *)param_1[5]) {
      uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_14027ab42(&local_88,uVar10);
      plVar17 = local_80;
      if (local_80 != (longlong *)0x0) {
        iVar11 = (int)local_80[1];
        do {
          if (iVar11 == 0) {
            plVar17 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)plVar17[1];
          bVar20 = iVar11 == iVar5;
          if (bVar20) {
            *(int *)(plVar17 + 1) = iVar11 + 1;
            iVar5 = iVar11;
          }
          iVar11 = iVar5;
          UNLOCK();
        } while (!bVar20);
        plVar9 = local_80;
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        if (plVar17 != (longlong *)0x0) {
          if (local_88 != (longlong *)0x0) {
            local_c8 = (code *)0x0;
            puStack_c0 = (undefined8 *)0x0;
            FUN_1404e8c3a(local_88,&local_c8);
            if ((longlong)(int)puStack_c0 != 0) {
              pcVar16 = local_c8 + (longlong)(int)puStack_c0 * 0x10;
              pcVar15 = local_c8;
              local_140 = plVar17;
              do {
                if (((((*(longlong **)(pcVar15 + 8) != (longlong *)0x0) &&
                      (*(uint *)(pcVar15 + 4) != 0)) && (uVar7 = *(uint *)pcVar15, -1 < (int)uVar7))
                    && (((int)uVar7 < DAT_14c9647dc &&
                        (lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8),
                        lVar8 != 0)))) &&
                   ((*(uint *)(lVar8 + 0x10) == *(uint *)(pcVar15 + 4) &&
                    ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
                  uVar10 = (**(code **)(**(longlong **)(pcVar15 + 8) + 0x20))();
                  FUN_1404e8b2c(uVar10,&local_88);
                  (**(code **)(**(longlong **)(pcVar15 + 8) + 0x40))
                            (*(longlong **)(pcVar15 + 8),&pcStack_108);
                  plVar17 = local_128;
                  if ((longlong)(int)uStack_120 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    plVar19 = local_128 + (longlong)(int)uStack_120 * 3;
                    plVar9 = local_128;
                    do {
                      if (*plVar9 == 0) {
                        cVar6 = '\0';
LAB_1404e89d2:
                        bVar20 = false;
                      }
                      else {
                        cVar6 = FUN_14493b798(*plVar9 + 0x48,&local_88);
                        lVar8 = *plVar9;
                        if ((lVar8 == 0) || ((int)local_100 < 2)) goto LAB_1404e89d2;
                        if (*(int *)(lVar8 + 0x260) == (int)local_100) {
                          lVar18 = 0;
                          while( true ) {
                            uVar3 = *(ushort *)(*(longlong *)(lVar8 + 600) + lVar18);
                            uVar7 = (uint)uVar3;
                            uVar4 = *(ushort *)(pcStack_108 + lVar18);
                            uVar21 = (uint)uVar4;
                            if (uVar3 != uVar4) {
                              if ((uVar4 | uVar3) < 0x80) {
                                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                                uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                                if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4])
                                goto LAB_1404e8982;
                              }
                              iVar11 = uVar7 - uVar21;
                              goto LAB_1404e89ae;
                            }
                            if (uVar3 == 0) break;
LAB_1404e8982:
                            lVar18 = lVar18 + 2;
                          }
                          iVar11 = 0;
                        }
                        else {
                          iVar11 = *(int *)(lVar8 + 0x260) + (int)local_100 + -1;
                        }
LAB_1404e89ae:
                        bVar20 = iVar11 == 0;
                      }
                      if ((cVar6 != '\0') || (bVar20)) {
                        uVar7 = (int)((longlong)plVar9 - (longlong)plVar17 >> 3) * -0x55555555;
                        uVar13 = uStack_120 & 0xffffffff;
                        if (((int)uVar7 < 0) || ((int)uStack_120 <= (int)uVar7)) goto LAB_1404e89e4;
                        uVar13 = (ulonglong)(uVar7 & 0x7fffffff);
                        uVar7 = *(uint *)pcVar15;
                        uVar21 = *(uint *)(pcVar15 + 4);
                        uVar22 = *(uint *)(pcVar15 + 8);
                        uVar23 = *(uint *)(pcVar15 + 0xc);
                        goto LAB_1404e8a17;
                      }
                      plVar9 = plVar9 + 3;
                    } while (plVar9 != plVar19);
                    uVar13 = uStack_120 & 0xffffffff;
                  }
LAB_1404e89e4:
                  local_138 = *(code ***)pcVar15;
                  uStack_130 = *(uint *)(pcVar15 + 8);
                  uStack_12c = *(uint *)(pcVar15 + 0xc);
                  uVar7 = (int)uVar13 + 1;
                  uStack_120 = CONCAT44(uStack_120._4_4_,uVar7);
                  if (uStack_120._4_4_ < uVar7) {
                    FUN_14654c74e(&local_128,uVar13);
                  }
                  uVar13 = (ulonglong)(int)uVar13;
                  local_128[uVar13 * 3] = 0;
                  uVar7 = (uint)local_138;
                  uVar21 = local_138._4_4_;
                  uVar22 = uStack_130;
                  uVar23 = uStack_12c;
LAB_1404e8a17:
                  puVar2 = (uint *)(local_128 + uVar13 * 3 + 1);
                  *puVar2 = uVar7;
                  puVar2[1] = uVar21;
                  puVar2[2] = uVar22;
                  puVar2[3] = uVar23;
                  if (pcStack_108 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_60 != 0) {
                    FUN_1400020a8();
                  }
                }
                pcVar15 = pcVar15 + 0x10;
                plVar17 = local_140;
              } while (pcVar15 != pcVar16);
            }
            if (local_c8 != (code *)0x0) {
              FUN_1400020a8(local_c8);
            }
          }
          LOCK();
          plVar9 = plVar17 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
      }
    }
  }
  local_148 = &local_88;
  local_88 = (longlong *)0x0;
  local_78 = (longlong **)0x0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14b3fb070;
  local_c8 = (code *)&LAB_143d20a66;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_LAB_14b3fb050;
  local_e0 = &LAB_143d20a4a;
  pcStack_108 = (code *)&LAB_1404e93f6;
  local_a0 = param_1;
  FUN_1404e8e72(param_1,&local_128,&pcStack_108);
  if (pcStack_108 != (code *)0x0) {
    pppuVar12 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar12 = &local_e8;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar12 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar12 = &local_a8;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_88 != (longlong *)0x0) {
    pplVar14 = local_78;
    if (local_78 == (longlong **)0x0) {
      pplVar14 = (longlong **)&local_68;
    }
    (**(code **)((longlong)*pplVar14 + 0x10))();
  }
  if (local_128 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e8b2c FUN_1404e8b2c body=121 status=ok
// SIG undefined FUN_1404e8b2c(void)

undefined8 FUN_1404e8b2c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
      uVar2 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1404e8b8d;
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xc) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
        goto LAB_1404e8b8d;
      }
    }
  }
  uVar2 = 0;
LAB_1404e8b8d:
  FUN_1404e8ba6(param_2,uVar2,0);
  return param_2;
}



// FUNCTION 1404e8ba6 FUN_1404e8ba6 body=147 status=ok
// SIG undefined FUN_1404e8ba6(void)

undefined2 * FUN_1404e8ba6(undefined2 *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_140427846();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 != plVar3) goto LAB_1404e8bed;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1404e8bed:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_1);
  }
  return param_1;
}



// FUNCTION 1404e8c3a FUN_1404e8c3a body=567 status=ok
// SIG undefined FUN_1404e8c3a(void)

void FUN_1404e8c3a(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 0x98;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar17 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar17 = local_68 >> 0x20;
  }
  lVar8 = local_60;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    plVar9 = (longlong *)(param_1 + 0x88);
    iVar18 = (int)local_68;
    uVar16 = (uint)local_58;
    iVar11 = local_50;
    local_70 = plVar9;
    iVar14 = local_58._4_4_;
    do {
      if (*(longlong *)(*plVar9 + 8 + (longlong)iVar14 * 0x18) == 0) {
LAB_1404e8e04:
        FUN_140cd5456();
        plVar9 = local_70;
      }
      else {
        puVar1 = (uint *)(*plVar9 + (longlong)iVar14 * 0x18);
        if ((((puVar1[1] == 0) || (uVar15 = *puVar1, (int)uVar15 < 0)) ||
            (DAT_14c9647dc <= (int)uVar15)) ||
           (((lVar12 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8), lVar12 == 0
             || (*(uint *)(lVar12 + 0x10) != puVar1[1])) ||
            ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))) goto LAB_1404e8e04;
        iVar14 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
          FUN_14571c312(param_2,iVar14);
          plVar9 = local_70;
        }
        uVar15 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (uint *)(*param_2 + (longlong)iVar14 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar15;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
      }
      uVar16 = uVar16 & ~(uint)uVar17;
      lVar12 = *(longlong *)(lVar8 + 0x10);
      if (*(longlong *)(lVar8 + 0x10) == 0) {
        lVar12 = lVar8;
      }
      iVar4 = *(int *)(lVar8 + 0x18);
      lVar13 = (longlong)iVar18;
      uVar15 = *(uint *)(lVar12 + lVar13 * 4) & uVar16;
      if (uVar15 == 0) {
        iVar14 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar14 = iVar4 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar5 = iVar14;
        if (iVar14 < iVar18) {
          iVar5 = iVar18;
        }
        if (iVar14 <= iVar18) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar15 = *(uint *)(lVar12 + lVar13 * 4 + 4 + lVar10 * 4);
          if (uVar15 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_1404e8e32;
        }
        iVar18 = iVar18 + (int)lVar10 + 1;
        uVar16 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar15 & uVar15);
      uVar3 = uVar17 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar14 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar4);
  }
LAB_1404e8e32:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e8e72 FUN_1404e8e72 body=1404 status=ok
// SIG undefined FUN_1404e8e72(void)

void FUN_1404e8e72(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    lVar10 = 0;
    do {
      *(undefined2 *)(lVar11 + 0x10 + lVar10) = 0x100;
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar10);
  }
  local_78 = (longlong *)(param_1 + 0x38);
  local_68 = param_4;
  if ((longlong)(int)param_2[1] != 0) {
    lVar11 = *param_2;
    local_58 = lVar11 + (longlong)(int)param_2[1] * 0x18;
    local_60 = param_4 + 4;
    local_70 = param_1;
    do {
      iVar1 = *(int *)(param_1 + 0x40);
      if ((longlong)iVar1 != 0) {
        lVar10 = *(longlong *)(local_70 + 0x38);
        lVar8 = 0;
        do {
          lVar2 = *(longlong *)(lVar10 + lVar8);
          if (lVar2 != 0) {
            if (DAT_14cb5d278 == 0) {
              local_50 = FUN_1449e2820;
              local_80 = FUN_14081d0ea;
              local_88 = &LAB_145885dac;
              local_90 = &local_50;
              local_98 = &LAB_1486962c5;
              local_a0 = FUN_1464da8ae;
              local_a8 = L"Engine";
              local_b0 = 0;
              local_b8 = 0x10000000;
              local_c0 = 8;
              local_c8 = 0x118;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                            &DAT_14cb5d278,&DAT_1486962c4);
            }
            if (((*(int *)(DAT_14cb5d278 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) == DAT_14cb5d278 + 0x30)) &&
               (pcVar6 = (code *)*param_3, pcVar6 != (code *)0x0)) {
              plVar5 = (longlong *)param_3[2];
              if ((longlong *)param_3[2] == (longlong *)0x0) {
                plVar5 = param_3 + 4;
              }
              uVar4 = (**(code **)(*plVar5 + 8))();
              cVar3 = (*pcVar6)(uVar4,lVar2,lVar11);
              param_1 = local_70;
              if (cVar3 != '\0') {
                uVar7 = (int)(lVar8 >> 3) * -0x55555555;
                if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(local_70 + 0x40))) {
                  *(undefined1 *)(*local_78 + 0x11 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18) = 0;
                  if ((*param_5 == 0) ||
                     (pcVar6 = *(code **)(*local_78 + (ulonglong)(uVar7 & 0x7fffffff) * 0x18),
                     pcVar6 == (code *)0x0)) goto LAB_1404e9056;
                  lVar10 = FUN_144a84b50();
                  if ((*(int *)(*(longlong *)(pcVar6 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(pcVar6 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_1404e9056;
                  pcVar9 = (code *)*param_5;
                  plVar5 = param_5 + 4;
                  if ((longlong *)param_5[2] != (longlong *)0x0) {
                    plVar5 = (longlong *)param_5[2];
                  }
                  goto LAB_1404e9045;
                }
                break;
              }
            }
          }
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar1 * 0x18 != lVar8);
      }
      plVar5 = (longlong *)FUN_1404e9402(local_78);
      *(undefined2 *)(plVar5 + 2) = 1;
      if (DAT_14cb5d278 == 0) {
        local_50 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_145885dac;
        local_90 = &local_50;
        local_98 = &LAB_1486962c5;
        local_a0 = FUN_1464da8ae;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000000;
        local_c0 = 8;
        local_c8 = 0x118;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                      &DAT_14cb5d278,&DAT_1486962c4);
      }
      param_1 = local_70;
      FUN_1404e95e0(local_70,&local_50,DAT_14cb5d278);
      if ((*plVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      pcVar6 = local_50;
      *plVar5 = (longlong)local_50;
      if (local_50 != (code *)0x0) {
        if (DAT_14cb5d278 == 0) {
          local_50 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = &LAB_145885dac;
          local_90 = &local_50;
          local_98 = &LAB_1486962c5;
          local_a0 = FUN_1464da8ae;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10000000;
          local_c0 = 8;
          local_c8 = 0x118;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                        &DAT_14cb5d278,&DAT_1486962c4);
        }
        if (((*(int *)(DAT_14cb5d278 + 0x38) <= *(int *)(*(longlong *)(pcVar6 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(pcVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) == DAT_14cb5d278 + 0x30)) &&
           (pcVar9 = (code *)*local_68, pcVar9 != (code *)0x0)) {
          plVar5 = (longlong *)local_68[2];
          if ((longlong *)local_68[2] == (longlong *)0x0) {
            plVar5 = local_60;
          }
LAB_1404e9045:
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*pcVar9)(uVar4,pcVar6,lVar11);
        }
      }
LAB_1404e9056:
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != local_58);
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar11 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      if ((char)plVar5[1] == '\x01') {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          pcVar6 = (code *)0x0;
        }
        else {
          FUN_140a97e96(*(longlong *)(param_1 + 0x30),&local_50,plVar5[-1]);
          pcVar6 = local_50;
        }
        *plVar5 = (longlong)pcVar6;
      }
      else if (*(char *)((longlong)plVar5 + 9) == '\x01') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_140993b54(*(longlong *)(param_1 + 0x30),plVar5);
        }
        FUN_1404e9462(param_1,plVar5 + -1);
      }
      plVar5 = plVar5 + 3;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
  }
  FUN_1404ec66c(local_78);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404e9402 FUN_1404e9402 body=70 status=ok
// SIG undefined FUN_1404e9402(void)

longlong FUN_1404e9402(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1404ec4f6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1404e9448(lVar2,1);
  return lVar2;
}



// FUNCTION 1404e9448 FUN_1404e9448 body=25 status=ok
// SIG undefined FUN_1404e9448(void)

void FUN_1404e9448(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1404e9462 FUN_1404e9462 body=185 status=ok
// SIG undefined FUN_1404e9462(void)

void FUN_1404e9462(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    plVar2[6] = 0;
    *(undefined1 *)((longlong)plVar2 + 0x79) = 0;
    FUN_1404e99ac(plVar2,0);
    FUN_1404e951c(plVar2,0);
    *(undefined1 *)(plVar2 + 0x18) = 0;
    plVar2[0x17] = 0;
    (**(code **)(*plVar2 + 0x370))(plVar2);
    iVar1 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
      FUN_1404ec394((longlong *)(param_1 + 0x48),iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = 0;
    lVar4 = *param_2;
    if (lVar4 != 0) {
      FUN_1401924dc(lVar4);
      *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar4;
      if (*param_2 != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *param_2 = 0;
      }
    }
  }
  return;
}



// FUNCTION 1404e951c FUN_1404e951c body=195 status=ok
// SIG undefined FUN_1404e951c(void)

void FUN_1404e951c(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((((*(int *)((longlong)param_1 + 0x2c) != 0) &&
        (uVar1 = *(uint *)(param_1 + 5), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x2c))))) &&
     ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 != 0) {
      if ((char)param_2 == '\0') {
        if (*(char *)((longlong)param_1 + 0xc1) == '\x01') {
LAB_1404e95ca:
          FUN_143d1505a(lVar3,param_1,param_2);
          return;
        }
      }
      else {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
        if (((plVar4 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0xc1) == '\0')) &&
           (cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4), cVar2 != '\0')) {
          *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
          goto LAB_1404e95ca;
        }
      }
    }
  }
  return;
}



// FUNCTION 1404e95e0 FUN_1404e95e0 body=470 status=ok
// SIG undefined FUN_1404e95e0(void)

undefined8 * FUN_1404e95e0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1,param_3);
  if ((((param_3 == 0) || (lVar4 == 0)) || (*(int *)(lVar4 + 0x38) < *(int *)(param_3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) !=
      param_3 + 0x30)) {
    *param_2 = 0;
    return param_2;
  }
  lVar5 = (longlong)(int)param_1[10];
  if (0 < lVar5) {
    lVar2 = param_1[9];
    plVar6 = *(longlong **)(lVar2 + -8 + lVar5 * 8);
    *param_2 = plVar6;
    *(undefined8 *)(lVar2 + -8 + lVar5 * 8) = 0;
    FUN_1404e98be(param_1 + 9,(int)param_1[10] + -1);
    FUN_1404e9922(param_1 + 9);
    if (plVar6 != (longlong *)0x0) {
      if (plVar6[2] == lVar4) goto LAB_1404e9682;
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48(plVar6);
      }
      *param_2 = 0;
    }
  }
  plVar6 = (longlong *)FUN_1404e97b6(DAT_14c951640,lVar4,0,0,0,0,0,0);
  *param_2 = 0;
  if (plVar6 == (longlong *)0x0) {
    return param_2;
  }
  FUN_1401924dc(plVar6);
  *param_2 = plVar6;
LAB_1404e9682:
  if (param_1 == (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 5) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(plVar6 + 5) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar4 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar7;
      }
    }
  }
  *(int *)((longlong)plVar6 + 0x2c) = iVar3;
  plVar6[0x17] = 0;
  *(undefined1 *)(plVar6 + 0x18) = 0;
  (**(code **)(*plVar6 + 0x368))(plVar6);
  return param_2;
}



// FUNCTION 1404e97b6 FUN_1404e97b6 body=262 status=ok
// SIG undefined FUN_1404e97b6(void)

undefined8
FUN_1404e97b6(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404e98be FUN_1404e98be body=99 status=ok
// SIG undefined FUN_1404e98be(void)

void FUN_1404e98be(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  int iVar1;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 8);
  if (*_Dst != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *_Dst = 0;
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,_Dst + 1,(longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1404e9922 FUN_1404e9922 body=137 status=ok
// SIG undefined FUN_1404e9922(void)

void FUN_1404e9922(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1404e99ac FUN_1404e99ac body=5532 status=ok
// SIG undefined FUN_1404e99ac(void)

void FUN_1404e99ac(longlong *param_1,char param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_188 [32];
  undefined8 **local_168;
  undefined1 local_158 [16];
  longlong local_148;
  undefined1 local_138 [16];
  longlong local_128;
  undefined1 local_118 [4];
  float local_114;
  float local_10c;
  undefined8 *local_108;
  ulonglong uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined8 *local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((((*(int *)((longlong)param_1 + 0x2c) == 0) ||
        (uVar1 = *(uint *)(param_1 + 5), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)((longlong)param_1 + 0x2c))))) ||
     ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_1404ea934;
  if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar5;
  }
  else {
    lVar3 = 0;
  }
  if ((*(longlong *)(lVar3 + 0x30) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x3f0), lVar3 == 0)) goto LAB_1404ea934;
  if ((longlong)(int)param_1[0x16] != 0) {
    puVar6 = (undefined8 *)param_1[0x15];
    lVar9 = (longlong)(int)param_1[0x16] << 4;
    do {
      FUN_1404eaf96(lVar3,puVar6);
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  plVar5 = param_1 + 0x15;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) < 0) {
    FUN_14882c5e8(plVar5);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x17] = 0;
  if (param_2 == '\0') goto LAB_1404ea934;
  (**(code **)(*param_1 + 0x330))(param_1,local_138,1);
  (**(code **)(*param_1 + 0x330))(param_1,local_158,2);
  puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
  *(undefined4 *)(puVar2 + 1) = 1;
  local_88 = (undefined8 *)0x0;
  uStack_80._0_4_ = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  puVar6 = local_88;
  uStack_80._0_4_ = 3;
  iVar7 = (int)uStack_80;
  uStack_80._0_4_ = 3;
  *local_88 = &PTR_LAB_14b3f8df0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_88[2] = lVar4;
  *local_88 = &PTR_FUN_14b3f87e0;
  local_88[3] = 0;
  iVar10 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_88 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar10 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      uStack_80._0_4_ = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar10 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar10 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar10 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar10;
  puVar6[4] = &LAB_1409f2b30;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1404ebbc8(&local_58,&local_88);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  local_f8 = local_b8;
  local_168 = &local_58;
  FUN_1404eb494(lVar3,&local_70,&local_108,local_138);
  *puVar2 = local_70;
  if ((int)uStack_80 == 0) {
LAB_1404e9c5e:
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    uStack_80._0_4_ = 0;
    goto LAB_1404e9c5e;
  }
  puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
  *(undefined4 *)(puVar2 + 1) = 2;
  local_88 = (undefined8 *)0x0;
  uStack_80 = (ulonglong)uStack_80._4_4_ << 0x20;
  FUN_1446efa72(&local_88,0,3,0x10);
  puVar6 = local_88;
  uStack_80 = CONCAT44(uStack_80._4_4_,3);
  *local_88 = &PTR_LAB_14b3f8df0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_88[2] = lVar4;
  *local_88 = &PTR_FUN_14b3f87e0;
  local_88[3] = 0;
  iVar7 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_88 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar10;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar10;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar7;
  puVar6[4] = &LAB_1409f2b30;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1404ebbc8(&local_58,&local_88);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  local_f8 = local_b8;
  local_168 = &local_58;
  FUN_1404eb494(lVar3,&local_70,&local_108,local_158);
  *puVar2 = local_70;
  if ((int)uStack_80 == 0) {
LAB_1404e9dd7:
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    uStack_80 = uStack_80 & 0xffffffff00000000;
    goto LAB_1404e9dd7;
  }
  (**(code **)(*param_1 + 0x338))(param_1,local_118,2);
  if (1.0 < local_10c) {
    uStack_100 = CONCAT35(uStack_100._5_3_,0x44bb8000);
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (undefined8 *)(CONCAT44(local_10c,(int)local_108) & 0xffffffffffffff00);
    puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
    *(undefined4 *)(puVar2 + 1) = 3;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar6 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b3f8df0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14b3f87e0;
    local_58[3] = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar7 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar7;
    puVar6[4] = &LAB_1409f2b30;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1404ebbc8(&local_70,&local_58);
    (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    local_168 = &local_70;
    FUN_1404eb494(lVar3,&local_60,&local_88,&local_108);
    *puVar2 = local_60;
    if (local_50 == 0) {
LAB_1404e9faf:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_1404e9faf;
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (0.0 < local_114) {
      uStack_100 = CONCAT35(uStack_100._5_3_,0x44bb8000);
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = (undefined8 *)(CONCAT44(local_114,(int)local_108) & 0xffffffffffffff00);
      puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
      *(undefined4 *)(puVar2 + 1) = 4;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar6 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b3f8df0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_58[2] = lVar4;
      *local_58 = &PTR_FUN_14b3f87e0;
      local_58[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_58 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar10;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar7 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar7;
      puVar6[4] = &LAB_1409f2b30;
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1404ebbc8(&local_70,&local_58);
      (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_78 = local_b8;
      local_168 = &local_70;
      FUN_1404eb494(lVar3,&local_60,&local_88,&local_108);
      *puVar2 = local_60;
      if (local_50 == 0) {
LAB_1404ea17f:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_1404ea17f;
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  (**(code **)(*param_1 + 0x338))(param_1,local_118,4);
  if (1.0 < local_10c) {
    uStack_100 = CONCAT35(uStack_100._5_3_,0x44bb8000);
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (undefined8 *)(CONCAT44(local_10c,(int)local_108) & 0xffffffffffffff00);
    puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
    *(undefined4 *)(puVar2 + 1) = 5;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar6 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b3f8df0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14b3f87e0;
    local_58[3] = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar7 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar7;
    puVar6[4] = &LAB_1409f2b30;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1404ebbc8(&local_70,&local_58);
    (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    local_168 = &local_70;
    FUN_1404eb494(lVar3,&local_60,&local_88,&local_108);
    *puVar2 = local_60;
    if (local_50 == 0) {
LAB_1404ea36a:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_1404ea36a;
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (0.0 < local_114) {
      uStack_100 = CONCAT35(uStack_100._5_3_,0x44bb8000);
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = (undefined8 *)(CONCAT44(local_114,(int)local_108) & 0xffffffffffffff00);
      puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
      *(undefined4 *)(puVar2 + 1) = 6;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar6 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b3f8df0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_58[2] = lVar4;
      *local_58 = &PTR_FUN_14b3f87e0;
      local_58[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_58 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar10;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar7 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar7;
      puVar6[4] = &LAB_1409f2b30;
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1404ebbc8(&local_70,&local_58);
      (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_78 = local_b8;
      local_168 = &local_70;
      FUN_1404eb494(lVar3,&local_60,&local_88,&local_108);
      *puVar2 = local_60;
      if (local_50 == 0) {
LAB_1404ea53a:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_1404ea53a;
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  (**(code **)(*param_1 + 0x338))(param_1,local_118,3);
  if (1.0 < local_10c) {
    uStack_100 = CONCAT35(uStack_100._5_3_,0x44bb8000);
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (undefined8 *)(CONCAT44(local_10c,(int)local_108) & 0xffffffffffffff00);
    puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
    *(undefined4 *)(puVar2 + 1) = 7;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar6 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b3f8df0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14b3f87e0;
    local_58[3] = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar7 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar7;
    puVar6[4] = &LAB_1409f2b30;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1404ebbc8(&local_70,&local_58);
    (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
    local_88 = local_c8;
    uStack_80 = uStack_c0;
    local_78 = local_b8;
    local_168 = &local_70;
    FUN_1404eb494(lVar3,&local_60,&local_88,&local_108);
    *puVar2 = local_60;
    if (local_50 == 0) {
LAB_1404ea725:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_1404ea725;
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (0.0 < local_114) {
      uStack_100 = CONCAT35(uStack_100._5_3_,0x44bb8000);
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = (undefined8 *)(CONCAT44(local_114,(int)local_108) & 0xffffffffffffff00);
      puVar2 = (undefined8 *)FUN_1404eaf4a(plVar5);
      *(undefined4 *)(puVar2 + 1) = 8;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar6 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b3f8df0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_58[2] = lVar4;
      *local_58 = &PTR_FUN_14b3f87e0;
      local_58[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_58 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar10;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar7 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar7;
      puVar6[4] = &LAB_1409f2b30;
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      FUN_1404ebbc8(&local_70,&local_58);
      (**(code **)(*param_1 + 0x2b0))(param_1,local_e8);
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      local_78 = local_b8;
      local_168 = &local_70;
      FUN_1404eb494(lVar3,&local_60,&local_88,&local_108);
      *puVar2 = local_60;
      if (local_50 == 0) {
LAB_1404ea8f5:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_1404ea8f5;
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_1404ea934:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404eaf4a FUN_1404eaf4a body=61 status=ok
// SIG undefined FUN_1404eaf4a(void)

longlong FUN_1404eaf4a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1404eb38c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1404eaf87(lVar2);
  return lVar2;
}



// FUNCTION 1404eaf87 FUN_1404eaf87 body=15 status=ok
// SIG undefined FUN_1404eaf87(void)

void FUN_1404eaf87(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1404eaf96 FUN_1404eaf96 body=892 status=ok
// SIG undefined FUN_1404eaf96(void)

void FUN_1404eaf96(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar8 = *param_2;
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *plVar1 + (longlong)iVar7 * 0x90;
        if (*(longlong *)(*plVar1 + (longlong)iVar7 * 0x90) == lVar8) {
          if ((lVar6 != 0) && (lVar6 + 8 != 0)) {
            iVar7 = *(int *)(lVar6 + 0x10);
            if (iVar7 == 1) {
              if (*(char *)(param_1 + 0x108) == '\x01') {
                FUN_1449cd27a(param_1 + 0x98,lVar6 + 8,lVar6 + 0x18);
              }
            }
            else if (iVar7 == 2) {
              if ((longlong)*(int *)(param_1 + 0x60) != 0) {
                lVar6 = param_1 + 0x58;
                lVar12 = *(longlong *)(param_1 + 0x58);
                lVar13 = 0;
                goto LAB_1404eb24f;
              }
            }
            else if (iVar7 == 3) {
              if ((longlong)*(int *)(param_1 + 0x80) != 0) {
                lVar6 = param_1 + 0x78;
                lVar12 = *(longlong *)(param_1 + 0x78);
                lVar13 = 0;
                goto LAB_1404eb2b1;
              }
            }
            else if ((iVar7 == 4) && ((longlong)*(int *)(param_1 + 0x70) != 0)) {
              lVar6 = param_1 + 0x68;
              lVar12 = *(longlong *)(param_1 + 0x68);
              lVar13 = 0;
              goto LAB_1404eb2f0;
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x88);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1404eb04d;
  while (lVar13 = lVar13 + 8, (longlong)*(int *)(param_1 + 0x60) * 8 != lVar13) {
LAB_1404eb24f:
    if (*(longlong *)(lVar12 + lVar13) == lVar8) goto LAB_1404eb266;
  }
  goto LAB_1404eb04d;
  while (lVar13 = lVar13 + 8, (longlong)*(int *)(param_1 + 0x80) * 8 != lVar13) {
LAB_1404eb2b1:
    if (*(longlong *)(lVar12 + lVar13) == lVar8) goto LAB_1404eb266;
  }
  goto LAB_1404eb04d;
LAB_1404eb266:
  FUN_140e8e0b8(lVar6,param_2,CONCAT71((int7)((ulonglong)lVar12 >> 8),1));
  goto LAB_1404eb04d;
  while (lVar13 = lVar13 + 8, (longlong)*(int *)(param_1 + 0x70) * 8 != lVar13) {
LAB_1404eb2f0:
    if (*(longlong *)(lVar12 + lVar13) == lVar8) goto LAB_1404eb266;
  }
LAB_1404eb04d:
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar8 = *param_2;
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) * 0x17 + (int)lVar8) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar7 != -1) {
      lVar12 = *plVar1;
      do {
        lVar11 = (longlong)iVar7 * 0x90;
        lVar13 = lVar12 + lVar11;
        if (*(longlong *)(lVar12 + lVar11) == lVar8) {
          iVar4 = *(int *)(lVar6 + (longlong)*(int *)(lVar13 + 0x8c) * 4);
          if (iVar4 == iVar7) {
            piVar5 = (int *)(lVar6 + (longlong)*(int *)(lVar13 + 0x8c) * 4);
          }
          else {
            do {
              piVar5 = (int *)(lVar12 + (longlong)iVar4 * 0x90 + 0x88);
              iVar4 = *piVar5;
            } while (iVar4 != iVar7);
          }
          *piVar5 = *(int *)(lVar13 + 0x88);
          lVar8 = *plVar1 + lVar11;
          lVar11 = *plVar1 + lVar11;
          plVar18 = (longlong *)(lVar11 + 0x78);
          if (*(int *)(lVar11 + 0x80) == 0) {
LAB_1404eb0f5:
            if (*plVar18 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar3 = (undefined8 *)*plVar18;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,0);
              FUN_1446efa72(plVar18,0,0,0x10);
              *(undefined4 *)(lVar8 + 0x80) = 0;
              goto LAB_1404eb0f5;
            }
          }
          if (*(longlong *)(lVar8 + 0x68) != 0) {
            FUN_1400020a8();
          }
          FUN_1404eb312(plVar1,iVar7);
          break;
        }
        iVar7 = *(int *)(lVar13 + 0x88);
      } while (iVar7 != -1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x90);
  lVar8 = (longlong)(int)uVar2;
  if (lVar8 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x88);
    uVar9 = 0;
    bVar19 = *plVar1 == *param_2;
    uVar15 = 0;
    do {
      uVar10 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar2) {
        uVar10 = uVar2;
      }
      uVar16 = uVar15;
      uVar14 = (ulonglong)uVar15;
      do {
        uVar14 = uVar14 + 1;
        uVar17 = uVar10;
        if (lVar8 <= (longlong)uVar14) break;
        uVar16 = uVar16 + 1;
        uVar17 = uVar16;
      } while (bVar19 == (plVar1[uVar14] == *param_2));
      if (bVar19 == false) {
        if (uVar9 != uVar15) {
          memmove(plVar1 + (int)uVar9,plVar1 + uVar15,(longlong)(int)(uVar17 - uVar15) << 3);
        }
        uVar9 = uVar9 + (uVar17 - uVar15);
      }
      bVar19 = (bool)(bVar19 ^ 1);
      uVar15 = uVar17;
    } while ((longlong)uVar14 < lVar8);
    *(uint *)(param_1 + 0x90) = uVar9;
  }
  return;
}



// FUNCTION 1404eb312 FUN_1404eb312 body=122 status=ok
// SIG undefined FUN_1404eb312(void)

void FUN_1404eb312(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 1404eb38c FUN_1404eb38c body=262 status=ok
// SIG undefined FUN_1404eb38c(void)

void FUN_1404eb38c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1404eb494 FUN_1404eb494 body=1748 status=ok
// SIG undefined FUN_1404eb494(void)

longlong *
FUN_1404eb494(longlong param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  LOCK();
  UNLOCK();
  lVar18 = DAT_14c75f6d8 + 1;
  lVar17 = DAT_14c75f6d8 + 1;
  if (lVar18 == 0) {
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c75f6d8 + 2;
    lVar17 = DAT_14c75f6d8 + 2;
  }
  DAT_14c75f6d8 = lVar17;
  *param_2 = lVar18;
  plVar19 = (longlong *)(param_1 + 8);
  uVar21 = (int)((ulonglong)lVar18 >> 0x20) * 0x17 + (int)lVar18;
  iVar20 = *(int *)(param_1 + 0x10);
  iVar10 = *(int *)(param_1 + 0x3c);
  local_80 = param_4;
  local_78 = param_3;
  if (iVar20 != iVar10) {
    lVar17 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x48);
    }
    iVar9 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar21) * 4);
    if (iVar9 != -1) {
      do {
        lVar17 = *plVar19 + (longlong)iVar9 * 0x90;
        if (*(longlong *)(*plVar19 + (longlong)iVar9 * 0x90) == lVar18) {
          if (lVar17 != 0) goto LAB_1404eb75c;
          break;
        }
        iVar9 = *(int *)(lVar17 + 0x88);
      } while (iVar9 != -1);
    }
  }
  if (iVar10 == 0) {
    *(int *)(param_1 + 0x10) = iVar20 + 1;
    if (*(int *)(param_1 + 0x14) == iVar20) {
      FUN_140f20a84(plVar19,iVar20);
    }
    iVar10 = *(int *)(param_1 + 0x30);
    if (iVar10 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar9 = iVar10 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    lVar15 = param_1 + 0x18;
    iVar13 = iVar10 + 1;
    iVar22 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar22 = iVar10;
    }
    if (iVar22 >> 5 == iVar9) {
      *(int *)(param_1 + 0x30) = iVar13;
    }
    else {
      if (*(int *)(param_1 + 0x34) <= iVar10) {
        local_88 = plVar19;
        if (iVar10 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar9 = iVar10;
        }
        else {
          uVar16 = iVar10 + 0x20U >> 5;
          local_90 = (ulonglong)uVar16;
          if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar16) {
              uVar14 = uVar16;
            }
          }
          else {
            uVar14 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar14 << 2,0);
          iVar9 = (int)(uVar11 >> 2);
          iVar13 = -0x20;
          if ((int)local_90 <= iVar9) {
            iVar13 = iVar9 << 5;
          }
          iVar9 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x34) = iVar13;
        FUN_1446efbd8(lVar15,iVar9);
        iVar13 = *(int *)(param_1 + 0x30) + 1;
        plVar19 = local_88;
      }
      iVar9 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar9 = iVar13;
      }
      *(int *)(param_1 + 0x30) = iVar13;
      if (iVar13 % 0x20 != 0) {
        lVar17 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar17 = lVar15;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)(lVar17 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)(lVar17 + (longlong)(iVar9 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar20;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x28);
    }
    bVar12 = (byte)iVar10 & 0x1f;
    puVar1 = (uint *)(lVar15 + (longlong)(iVar22 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar20 = *(int *)(param_1 + 0x38);
    lVar17 = (longlong)iVar20;
    iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar17 * 0x90);
    *(int *)(param_1 + 0x38) = iVar9;
    *(int *)(param_1 + 0x3c) = iVar10 + -1;
    if (iVar10 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar9 * 0x90) = 0xffffffff;
    }
  }
  iVar10 = 1;
  lVar15 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x28);
  }
  iVar9 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar9 = iVar20;
  }
  puVar1 = (uint *)(lVar15 + (longlong)(iVar9 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar20 & 0x1f);
  lVar15 = *(longlong *)(param_1 + 8);
  lVar17 = lVar17 * 0x90;
  _Src = (void *)(lVar15 + lVar17);
  *(undefined8 *)(lVar15 + 0x50 + lVar17) = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x40 + lVar17);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x30 + lVar17);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar17);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar17);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar15 + 0x5b + lVar17) = 0;
  *(undefined2 *)(lVar15 + 0x59 + lVar17) = 0;
  *(longlong *)(lVar15 + lVar17) = lVar18;
  *(undefined8 *)(lVar15 + 8 + lVar17) = 0;
  *(undefined1 *)(lVar15 + 0x58 + lVar17) = 0;
  *(undefined8 *)(lVar15 + 0x5c + lVar17) = 0x44bb800043fa0000;
  *(undefined1 *)(lVar15 + 100 + lVar17) = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x68 + lVar17);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x74 + lVar17);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar15 + 0x88 + lVar17) = 0xffffffff;
  uVar16 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    lVar17 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x48);
    }
    iVar9 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar21) * 4);
    if (iVar9 != -1) {
      do {
        _Dst = (void *)(*plVar19 + (longlong)iVar9 * 0x90);
        if (*(longlong *)(*plVar19 + (longlong)iVar9 * 0x90) == lVar18) {
          FUN_1449db362((longlong)_Dst + 0x78);
          if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,_Src,0x88);
          FUN_1404eb312(plVar19,iVar20);
          goto LAB_1404eb746;
        }
        iVar9 = *(int *)((longlong)_Dst + 0x88);
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar16) {
    uVar11 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar10 <= *(int *)(param_1 + 0x50))) {
    uVar21 = *(int *)(param_1 + 0x50) - 1U & uVar21;
    *(uint *)((longlong)_Src + 0x8c) = uVar21;
    lVar17 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar17 = param_1 + 0x40;
    }
    *(undefined4 *)((longlong)_Src + 0x88) =
         *(undefined4 *)
          (lVar17 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar21) * 4);
    lVar17 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar17 = param_1 + 0x40;
    }
    *(int *)(lVar17 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar21) * 4) =
         iVar20;
  }
  else {
    *(int *)(param_1 + 0x50) = iVar10;
    FUN_1404ec754(plVar19);
  }
LAB_1404eb746:
  lVar17 = *plVar19 + (longlong)iVar20 * 0x90;
LAB_1404eb75c:
  puVar7 = local_78;
  puVar2 = local_80;
  *(longlong *)(lVar17 + 8) = lVar18;
  uVar4 = local_78[1];
  uVar5 = local_78[2];
  uVar6 = local_78[3];
  *(undefined4 *)(lVar17 + 0x40) = *local_78;
  *(undefined4 *)(lVar17 + 0x44) = uVar4;
  *(undefined4 *)(lVar17 + 0x48) = uVar5;
  *(undefined4 *)(lVar17 + 0x4c) = uVar6;
  *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)(local_78 + 4);
  uVar3 = *(undefined8 *)((longlong)local_80 + 5);
  *(undefined8 *)(lVar17 + 0x58) = *local_80;
  *(undefined8 *)(lVar17 + 0x5d) = uVar3;
  FUN_1404ebb6e(lVar17 + 0x68,local_80 + 2);
  FUN_1404ebbc8(lVar17 + 0x78,param_5);
  if ((*(char *)(lVar17 + 0x58) != '\0') ||
     ((4.3980465e+12 < *(float *)(lVar17 + 0x5c) &&
      ((*(char *)(lVar17 + 100) != '\x01' || (4.3980465e+12 < *(float *)(lVar17 + 0x60))))))) {
    *(undefined4 *)(lVar17 + 0x10) = 2;
    plVar19 = (longlong *)(param_1 + 0x58);
    uVar11 = (ulonglong)*(int *)(param_1 + 0x60);
    uVar21 = *(int *)(param_1 + 0x60) + 1;
    *(uint *)(param_1 + 0x60) = uVar21;
    if (*(uint *)(param_1 + 100) < uVar21) {
LAB_1404ebab8:
      FUN_140279b48(plVar19,uVar11 & 0xffffffff);
    }
LAB_1404eb9ca:
    *(longlong *)(*plVar19 + uVar11 * 8) = *(longlong *)(lVar17 + 8);
  }
  else {
    if ((*(float *)(lVar17 + 0x5c) <= 0.0) && (*(int *)(lVar17 + 0x70) == 0)) {
      *(undefined4 *)(lVar17 + 0x10) = 3;
      plVar19 = (longlong *)(param_1 + 0x78);
      uVar11 = (ulonglong)*(int *)(param_1 + 0x80);
      uVar21 = *(int *)(param_1 + 0x80) + 1;
      *(uint *)(param_1 + 0x80) = uVar21;
      if (*(uint *)(param_1 + 0x84) < uVar21) goto LAB_1404ebab8;
      goto LAB_1404eb9ca;
    }
    FUN_1404ebd58(lVar17 + 0x58,&local_70,lVar17 + 0x40);
    if (((((double)CONCAT44(uStack_6c,local_70) <= -4398046511104.0 &&
           (double)CONCAT44(uStack_6c,local_70) != -4398046511104.0) ||
         (4398046511104.0 < (double)CONCAT44(uStack_5c,local_60))) ||
        ((double)CONCAT44(uStack_64,uStack_68) <= -4398046511104.0 &&
         (double)CONCAT44(uStack_64,uStack_68) != -4398046511104.0)) ||
       (4398046511104.0 < (double)CONCAT44(uStack_54,uStack_58))) {
      *(undefined4 *)(lVar17 + 0x10) = 4;
      plVar19 = (longlong *)(param_1 + 0x68);
      uVar11 = (ulonglong)*(int *)(param_1 + 0x70);
      uVar21 = *(int *)(param_1 + 0x70) + 1;
      *(uint *)(param_1 + 0x70) = uVar21;
      if (*(uint *)(param_1 + 0x74) < uVar21) goto LAB_1404ebab8;
      goto LAB_1404eb9ca;
    }
    *(undefined4 *)(lVar17 + 0x10) = 1;
    FUN_1404ebd58(puVar2,&local_70,puVar7);
    *(undefined8 *)(lVar17 + 0x38) = local_50;
    *(undefined4 *)(lVar17 + 0x28) = local_60;
    *(undefined4 *)(lVar17 + 0x2c) = uStack_5c;
    *(undefined4 *)(lVar17 + 0x30) = uStack_58;
    *(undefined4 *)(lVar17 + 0x34) = uStack_54;
    *(undefined4 *)(lVar17 + 0x18) = local_70;
    *(undefined4 *)(lVar17 + 0x1c) = uStack_6c;
    *(undefined4 *)(lVar17 + 0x20) = uStack_68;
    *(undefined4 *)(lVar17 + 0x24) = uStack_64;
    if (*(char *)(param_1 + 0x108) == '\x01') {
      cVar8 = FUN_140a19cb0(param_1 + 200,lVar17 + 0x18);
      if (cVar8 == '\0') {
        FUN_140526ea2(param_1 + 0x98);
        *(undefined1 *)(param_1 + 0x108) = 0;
      }
      else {
        FUN_1402801dc(param_1 + 0x98,param_2,lVar17 + 0x18);
      }
    }
  }
  if ((int)param_5[1] != 0) {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1404eb879;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
LAB_1404eb879:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404ebb6e FUN_1404ebb6e body=89 status=ok
// SIG undefined FUN_1404ebb6e(void)

undefined8 * FUN_1404ebb6e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1404ec2aa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404ebbc8 FUN_1404ebbc8 body=305 status=ok
// SIG undefined FUN_1404ebbc8(void)

void FUN_1404ebbc8(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1404ebc62;
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
LAB_1404ebc3b:
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
      goto LAB_1404ebc3b;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1404ebc62;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1404ebc62:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404ebcfa FUN_1404ebcfa body=93 status=ok
// SIG undefined FUN_1404ebcfa(void)

void FUN_1404ebcfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f87e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1404ebd58 FUN_1404ebd58 body=1184 status=ok
// SIG undefined FUN_1404ebd58(void)

double * FUN_1404ebd58(char *param_1,double *param_2,double *param_3)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  bool bVar4;
  double *pdVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  double dVar19;
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
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  undefined8 local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*param_1 == '\x01') {
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[4] = 0.0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_168);
  }
  *(undefined1 *)(param_2 + 4) = 0;
  bVar2 = 0.0 < *(float *)(param_1 + 4);
  if (bVar2) {
    dVar14 = *param_3;
    dVar10 = param_3[1];
    dVar7 = (double)*(float *)(param_1 + 4);
    *param_2 = dVar14 - dVar7;
    param_2[1] = dVar10 - dVar7;
    param_2[2] = dVar14 + dVar7;
    param_2[3] = dVar10 + dVar7;
    *(undefined1 *)(param_2 + 4) = 1;
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    pdVar5 = *(double **)(param_1 + 0x10);
    uVar29 = SUB84(*param_2,0);
    uVar30 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uVar26 = SUB84(param_2[1],0);
    uVar27 = (undefined4)((ulonglong)param_2[1] >> 0x20);
    uVar23 = SUB84(param_2[2],0);
    uVar24 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    uVar20 = SUB84(param_2[3],0);
    uVar21 = (undefined4)((ulonglong)param_2[3] >> 0x20);
    lVar6 = (longlong)*(int *)(param_1 + 0x18) * 0x90;
    do {
      iVar1 = *(int *)(pdVar5 + 0xc);
      if (iVar1 == 0) {
        dVar8 = *pdVar5;
        dVar19 = pdVar5[1];
        dVar11 = pdVar5[2];
        dVar7 = dVar11 + dVar11;
        dVar17 = dVar19 + dVar19;
        dVar14 = pdVar5[3];
        dVar10 = pdVar5[0xf];
        auVar9._0_8_ = (dVar17 * dVar14 + dVar8 * dVar7) * pdVar5[10];
        auVar9._8_8_ = (dVar17 * 0.0 + dVar19 * (pdVar5[3] + pdVar5[3])) * pdVar5[0xb];
        dVar13 = (1.0 - (dVar7 * dVar11 + dVar17 * dVar19)) * pdVar5[8];
        dVar18 = (dVar17 * dVar8 + dVar14 * dVar7) * pdVar5[8];
        dVar12 = pdVar5[0xd];
        dVar3 = pdVar5[0xe];
        auVar15._0_8_ = pdVar5[9] * (dVar17 * dVar8 - dVar14 * dVar7);
        auVar15._8_8_ = pdVar5[10] * (dVar7 * dVar19 - dVar14 * (dVar8 + dVar8));
        auVar9 = blendpd(auVar9,auVar15,2);
        auVar16._8_8_ = (1.0 - (dVar7 * dVar11 + (dVar8 + dVar8) * dVar8)) * pdVar5[9];
        auVar16._0_8_ = dVar13;
        auVar16 = blendpd(auVar15,auVar16,2);
        dVar7 = (dVar12 - dVar12) * 0.5;
        dVar19 = (dVar3 - dVar3) * 0.5;
        dVar14 = (dVar10 - dVar10) * 0.5;
        dVar11 = (dVar12 + dVar12) * 0.5;
        dVar12 = (dVar3 + dVar3) * 0.5;
        dVar10 = (dVar10 + dVar10) * 0.5;
        dVar8 = dVar14 * auVar9._0_8_ + dVar19 * auVar16._0_8_ + dVar7 * dVar13 + pdVar5[4];
        dVar7 = dVar14 * auVar9._8_8_ + dVar19 * auVar16._8_8_ + dVar7 * dVar18 + pdVar5[5];
        dVar19 = ABS(dVar10 * auVar9._0_8_) + ABS(dVar12 * auVar16._0_8_) + ABS(dVar11 * dVar13);
        dVar11 = ABS(dVar10 * auVar9._8_8_) + ABS(dVar12 * auVar16._8_8_) + ABS(dVar11 * dVar18);
        dVar14 = dVar19 + dVar8;
        dVar10 = dVar11 + dVar7;
        dVar7 = dVar7 - dVar11;
        dVar8 = dVar8 - dVar19;
LAB_1404ec088:
        bVar4 = true;
      }
      else {
        if (iVar1 == 1) {
          local_e0 = (double)*(float *)((longlong)pdVar5 + 0x84);
          local_f0 = (double)*(float *)(pdVar5 + 0x11);
          local_108 = -local_f0;
          dStack_100 = -local_f0;
          local_f8 = -local_e0;
          local_d8 = 1;
          local_e8 = local_f0;
          FUN_144a1c3a2(&local_108,&local_140,pdVar5);
          dVar14 = local_128;
          dVar10 = local_120;
          dVar7 = local_138;
          dVar8 = local_140;
          goto LAB_1404ec088;
        }
        if (iVar1 == 2) {
          dVar14 = (double)*(float *)(pdVar5 + 0x10);
          dVar7 = pdVar5[5] - dVar14;
          dVar8 = pdVar5[4] - dVar14;
          dVar10 = pdVar5[5] + dVar14;
          dVar14 = pdVar5[4] + dVar14;
          goto LAB_1404ec088;
        }
        bVar4 = false;
        local_108 = (double)((ulonglong)local_108 & 0xff00000000000000);
        dVar8 = 0.0;
        dVar7 = 0.0;
        dVar14 = 0.0;
        dVar10 = 0.0;
      }
      uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uVar28 = (undefined4)((ulonglong)dVar7 >> 0x20);
      uVar25 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar22 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (bVar2) {
        if (bVar4 != false) {
          if (dVar8 <= (double)CONCAT44(uVar30,uVar29)) {
            uVar29 = SUB84(dVar8,0);
            uVar30 = uVar31;
          }
          if (dVar7 <= (double)CONCAT44(uVar27,uVar26)) {
            uVar26 = SUB84(dVar7,0);
            uVar27 = uVar28;
          }
          if ((double)CONCAT44(uVar24,uVar23) <= dVar14) {
            uVar23 = SUB84(dVar14,0);
            uVar24 = uVar25;
          }
          if ((double)CONCAT44(uVar21,uVar20) <= dVar10) {
            uVar20 = SUB84(dVar10,0);
            uVar21 = uVar22;
          }
        }
      }
      else if (bVar4 != false) {
        uVar20 = (undefined4)local_108;
        *(undefined4 *)((longlong)param_2 + 0x24) = local_108._3_4_;
        *(undefined4 *)((longlong)param_2 + 0x21) = uVar20;
        uVar20 = SUB84(dVar10,0);
        uVar21 = uVar22;
        uVar23 = SUB84(dVar14,0);
        uVar24 = uVar25;
        uVar26 = SUB84(dVar7,0);
        uVar27 = uVar28;
        uVar29 = SUB84(dVar8,0);
        uVar30 = uVar31;
        bVar2 = bVar4;
      }
      pdVar5 = pdVar5 + 0x12;
      lVar6 = lVar6 + -0x90;
    } while (lVar6 != 0);
    *(bool *)(param_2 + 4) = bVar2;
    *param_2 = (double)CONCAT44(uVar30,uVar29);
    param_2[1] = (double)CONCAT44(uVar27,uVar26);
    param_2[2] = (double)CONCAT44(uVar24,uVar23);
    param_2[3] = (double)CONCAT44(uVar21,uVar20);
  }
  if ((local_d0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404ec1fe FUN_1404ec1fe body=171 status=ok
// SIG undefined FUN_1404ec1fe(void)

undefined8 * FUN_1404ec1fe(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  if ((param_3 < 3) && (lVar3 != 0)) {
    lVar4 = (longlong)param_3 * 0x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x30 + lVar4);
    *(undefined8 *)((longlong)param_2 + 5) = *(undefined8 *)(lVar3 + 0x35 + lVar4);
    *param_2 = uVar2;
    param_2[2] = 0;
    iVar1 = *(int *)(lVar3 + 0x48 + lVar4);
    _Src = *(void **)(lVar3 + 0x40 + lVar4);
    *(int *)(param_2 + 3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    }
    else {
      FUN_1404ec2aa(param_2 + 2,iVar1,0);
      memcpy((void *)param_2[2],_Src,(longlong)iVar1 * 0x90);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0x44bb800043fa0000;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return param_2;
}



// FUNCTION 1404ec2aa FUN_1404ec2aa body=233 status=ok
// SIG undefined FUN_1404ec2aa(void)

void FUN_1404ec2aa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    iVar1 = (int)(uVar3 / 0x90);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x90,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1404ec394 FUN_1404ec394 body=353 status=ok
// SIG undefined FUN_1404ec394(void)

void FUN_1404ec394(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404ec41b;
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
LAB_1404ec41b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1404ec4f6 FUN_1404ec4f6 body=373 status=ok
// SIG undefined FUN_1404ec4f6(void)

void FUN_1404ec4f6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404ec581;
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
LAB_1404ec581:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1404ec66c FUN_1404ec66c body=104 status=ok
// SIG undefined FUN_1404ec66c(void)

void FUN_1404ec66c(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    return;
  }
  uVar4 = 0;
  bVar1 = false;
  do {
    uVar4 = (ulonglong)(int)uVar4;
    pcVar3 = (char *)(*param_1 + uVar4 * 0x18 + 0x11);
    while (*pcVar3 == '\0') {
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0x18;
      if ((longlong)iVar2 <= (longlong)uVar4) {
        if (!bVar1) {
          return;
        }
        goto LAB_1404ec6bb;
      }
    }
    FUN_1404ec6d4(param_1,uVar4 & 0xffffffff);
    iVar2 = (int)param_1[1];
    bVar1 = true;
  } while ((int)uVar4 < iVar2);
LAB_1404ec6bb:
  FUN_141089ae6(param_1);
  return;
}



// FUNCTION 1404ec6d4 FUN_1404ec6d4 body=127 status=ok
// SIG undefined FUN_1404ec6d4(void)

void FUN_1404ec6d4(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x18);
  if (*_Dst != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *_Dst = 0;
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1404ec754 FUN_1404ec754 body=570 status=ok
// SIG undefined FUN_1404ec754(void)

void FUN_1404ec754(longlong *param_1)

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
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
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
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x90;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x8c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x88 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1404ec949;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1404ec949:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404ec998 FUN_1404ec998 body=130 status=ok
// SIG undefined FUN_1404ec998(void)

void FUN_1404ec998(longlong param_1,char param_2)

{
  uint uVar1;
  
  FUN_1402b6186();
  uVar1 = *(uint *)(param_1 + 0x7cc);
  if (param_2 == '\0') {
    FUN_140388f74(param_1);
  }
  else {
    *(uint *)(param_1 + 0x7cc) = uVar1 | 0x80;
  }
  FUN_1402a37f2(param_1,0);
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FUN_1402a3786(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30),1);
    return;
  }
  if (((char)uVar1 < '\0') && ((*(byte *)(param_1 + 0x7cc) & 0x80) == 0)) {
    FUN_140557bc8(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404eca1a FUN_1404eca1a body=2469 status=ok
// SIG undefined FUN_1404eca1a(void)

void FUN_1404eca1a(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int *piVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  undefined8 *local_240;
  code *local_238;
  code *local_230;
  undefined8 *local_220;
  longlong *local_218;
  longlong local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined2 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined2 local_120;
  undefined1 local_118;
  char local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_b0;
  undefined1 local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_1400ef488();
  local_218 = (longlong *)(param_1 + 0x418);
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(int *)(param_1 + 0x424) < 0) {
    FUN_147f53e6a(local_218);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if ((((((iVar2 == 0) || (uVar8 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), (int)uVar8 < 0))
        || (DAT_14c9647dc <= (int)uVar8)) ||
       ((plVar16 = (longlong *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
        plVar16 == (longlong *)0x0 || ((int)plVar16[2] != iVar2)))) ||
      ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) ||
     (plVar16 = (longlong *)*plVar16, plVar16 == (longlong *)0x0)) goto LAB_1404ed159;
  if (DAT_14cac9ca8 == 0) {
    local_240 = &local_180;
    local_180 = FUN_141030f22;
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
  }
  if ((*(int *)(plVar16[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
      != DAT_14cac9ca8 + 0x30)) goto LAB_1404ed159;
  lVar10 = FUN_1447210f0(plVar16);
  uVar11 = FUN_1408a34bc();
  plVar12 = (longlong *)(**(code **)(*plVar16 + 0x288))(plVar16,uVar11);
  if (plVar12 == (longlong *)0x0) goto LAB_1404ed159;
  uVar11 = FUN_1408a34bc();
  plVar13 = (longlong *)FUN_144718840(plVar12,uVar11);
  if ((((plVar12 == plVar13) || (plVar13 == (longlong *)0x0)) ||
      (lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar10 == 0)) || (lVar14 == 0))
  goto LAB_1404ed159;
  if (DAT_14caf64b8 == 0) {
    local_240 = &local_180;
    local_180 = FUN_141030f22;
    local_230 = FUN_14081d0ea;
    local_238 = FUN_142b4754c;
    local_248 = &LAB_147c45ce0;
    local_250 = &LAB_1463f1ff4;
    local_258 = L"Game";
    local_260 = 0x4000000000;
    local_268 = 0x10000004;
    local_270 = 8;
    local_278 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  local_220 = (undefined8 *)lVar10;
  local_210 = lVar14;
  if ((*(int *)(plVar16[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
      != DAT_14caf64b8 + 0x30)) {
    bVar21 = false;
  }
  else {
    pcVar3 = *(code **)(*plVar16 + 0x5e8);
    if (pcVar3 == FUN_140972dde) {
      lVar10 = plVar16[0x76];
      if (lVar10 == 0) {
        pcVar3 = *(code **)(*plVar16 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          if (*(code **)(plVar16[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (*(int *)((longlong)plVar16 + 0x75b4) != 0) {
              uVar8 = *(uint *)(plVar16 + 0xeb6);
              lVar10 = 0;
              if (((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) goto LAB_1404ecc76;
              plVar12 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if ((plVar12 != (longlong *)0x0) &&
                 (((int)plVar12[2] == *(int *)((longlong)plVar16 + 0x75b4) &&
                  ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
                if ((*(uint *)(plVar12 + 1) & 0x10200000) == 0) {
                  lVar10 = *plVar12;
                }
                else {
                  lVar10 = 0;
                }
                lVar10 = lVar10 + 0x110;
                goto LAB_1404ed1ab;
              }
            }
          }
          else {
            lVar10 = (**(code **)(plVar16[0x784] + 0x18))(plVar16 + 0x784);
LAB_1404ed1ab:
            if (lVar10 != 0) {
              lVar10 = *(longlong *)(lVar10 + 0x20);
              goto LAB_1404ed1b8;
            }
          }
        }
        else {
          lVar10 = (*pcVar3)(plVar16);
LAB_1404ed1b8:
          if (lVar10 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x3b0);
            goto LAB_1404ecc76;
          }
        }
        lVar10 = 0;
      }
    }
    else {
      lVar10 = (*pcVar3)(plVar16);
    }
LAB_1404ecc76:
    bVar21 = lVar10 == 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x48);
  lVar14 = *(longlong *)(param_1 + 0x40) + 0x240;
  local_200 = param_1;
  fVar23 = (float)FUN_140309e34(lVar10 + 0x40,lVar14,lVar10 + 0x58);
  FUN_140309ec4(lVar10 + 0x60,&local_198,lVar14);
  local_180 = *(code **)(lVar10 + 0x110);
  uVar11 = FUN_14030a1e6(lVar10 + 0xf8,lVar14,&local_180);
  local_178 = 0;
  local_158 = 4;
  local_170 = 0;
  local_148 = (DAT_14c9a8634 & 0x20) == 0;
  local_150 = 1;
  local_140 = 0;
  local_120 = 4;
  local_138 = 0x40200000;
  local_118 = 3;
  local_110 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  local_108 = 0;
  local_e8 = 4;
  local_100 = 0;
  local_e0 = 1;
  local_d0 = 0;
  local_b0 = 4;
  local_c8 = 0x40200000;
  local_a8 = 3;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_d8 = local_148;
  local_a0 = local_110;
  cVar7 = FUN_140337e44(lVar10 + 0x118,lVar14,lVar10 + 0x130);
  local_180 = (code *)CONCAT71(local_180._1_7_,*(char *)(lVar10 + 0x131) != cVar7);
  cVar7 = FUN_140337e44(lVar10 + 0x138,lVar14,lVar10 + 0x150);
  bVar22 = *(char *)(lVar10 + 0x151) != cVar7;
  local_180._0_2_ = CONCAT11(bVar22,(undefined1)local_180);
  local_1a8 = 0;
  uStack_1a0 = 0;
  if (((bVar22) && (lVar10 = FUN_140519fd4(plVar16), lVar10 != 0)) &&
     ((longlong)*(int *)(lVar10 + 0x80) != 0)) {
    piVar18 = *(int **)(lVar10 + 0x78);
    lVar10 = (longlong)*(int *)(lVar10 + 0x80) * 0x30;
    do {
      if (*piVar18 != 0x7fffffff) {
        FUN_140519d92(piVar18,&local_1e0,0);
        uVar19 = uStack_1a0;
        lVar14 = (longlong)(int)uStack_1a0;
        uVar8 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar8);
        if (uStack_1a0._4_4_ < uVar8) {
          FUN_1403e3958(&local_1a8,uVar19 & 0xffffffff);
        }
        *(undefined8 **)(local_1a8 + 0x10 + lVar14 * 0x18) = local_1d0;
        puVar1 = (undefined4 *)(local_1a8 + lVar14 * 0x18);
        *puVar1 = (undefined4)local_1e0;
        puVar1[1] = local_1e0._4_4_;
        puVar1[2] = (undefined4)uStack_1d8;
        puVar1[3] = uStack_1d8._4_4_;
      }
      piVar18 = piVar18 + 0xc;
      lVar10 = lVar10 + -0x30;
    } while (lVar10 != 0);
  }
  local_1e0 = (longlong)local_220;
  LOCK();
  DAT_14cb23a78 = DAT_14cb23a78 + 1;
  UNLOCK();
  uStack_1d8 = (undefined8 *)FUN_1404ed40e(DAT_14cb23a70);
  local_1d0 = &DAT_14cb23a70;
  LOCK();
  DAT_14cb23a78 = DAT_14cb23a78 + 1;
  UNLOCK();
  local_1c8 = &local_1e0;
  FUN_1404ed3c0(&uStack_1d8);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = &DAT_14cb23a70;
  LOCK();
  DAT_14cb23a78 = DAT_14cb23a78 + 1;
  UNLOCK();
  local_1b0 = &local_1e0;
  FUN_1404ed3c0(&local_1c0);
  puVar6 = local_1c0;
  lVar10 = local_210;
  LOCK();
  DAT_14cb23a78 = DAT_14cb23a78 + -1;
  UNLOCK();
  local_1f8 = uStack_1d8;
  local_1f0 = local_1d0;
  LOCK();
  *(int *)(local_1d0 + 1) = *(int *)(local_1d0 + 1) + 1;
  UNLOCK();
  local_1e8 = local_1c8;
  local_220 = local_1b8;
  LOCK();
  *(int *)(local_1b8 + 1) = *(int *)(local_1b8 + 1) + 1;
  UNLOCK();
  if (uStack_1d8 != local_1c0) {
    local_208 = uVar11;
    do {
      puVar17 = local_1f8;
      lVar14 = local_1f8[2];
      if ((((*(longlong *)(lVar14 + 0x620) != 0) && (*(char *)(lVar14 + 0x629) == '\x01')) &&
          ((0 < *(int *)(lVar14 + 0x638) && (*(char *)(lVar14 + 0x628) == '\x01')))) &&
         (((*(longlong **)(lVar14 + 0x660) == (longlong *)0x0 ||
           (*(longlong **)(lVar14 + 0x660) == plVar16)) &&
          ((dVar4 = local_198 - *(double *)(lVar14 + 0x260),
           dVar24 = local_190 - *(double *)(lVar14 + 0x268),
           dVar5 = local_188 - *(double *)(lVar14 + 0x270),
           (float)(dVar5 * dVar5 + dVar24 * dVar24 + dVar4 * dVar4) <= fVar23 * fVar23 &&
           (((!bVar21 || (lVar15 = FUN_1404ed488(lVar10,lVar14,uVar11,&local_180), lVar15 != 0)) &&
            ((local_180._1_1_ != '\x01' || (cVar7 = FUN_14051a1c8(lVar14,&local_1a8), cVar7 == '\0')
             ))))))))) {
        if (lVar14 == 0) {
          uVar8 = 0;
          uVar19 = 0;
        }
        else {
          uVar8 = *(uint *)(lVar14 + 0xc);
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar19 = (ulonglong)*(uint *)(lVar14 + 0x10);
          if (*(uint *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            uVar20 = DAT_14c964868 + 1;
            bVar22 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar22) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            uVar9 = *(uint *)(lVar14 + 0x10);
            bVar22 = uVar9 == 0;
            if (bVar22) {
              *(uint *)(lVar14 + 0x10) = uVar20;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar22) {
              uVar9 = uVar20;
            }
            uVar19 = (ulonglong)uVar9;
          }
        }
        iVar2 = *(int *)(local_200 + 0x420);
        *(uint *)(local_200 + 0x420) = iVar2 + 1U;
        if (*(uint *)(local_200 + 0x424) < iVar2 + 1U) {
          FUN_1404ee920(local_218,iVar2);
        }
        *(ulonglong *)(*local_218 + (longlong)iVar2 * 8) = (ulonglong)uVar8 | uVar19 << 0x20;
        puVar17 = local_1f8;
        uVar11 = local_208;
      }
      local_1f8 = (undefined8 *)FUN_1404ed40e(*puVar17);
      FUN_1404ed3c0(&local_1f8);
    } while (local_1f8 != puVar6);
  }
  LOCK();
  *(int *)(local_220 + 1) = *(int *)(local_220 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_1f0 + 1) = *(int *)(local_1f0 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_1b8 + 1) = *(int *)(local_1b8 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(local_1d0 + 1) = *(int *)(local_1d0 + 1) + -1;
  UNLOCK();
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140b970fc(&local_180);
LAB_1404ed159:
  if ((local_70 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404ed3c0 FUN_1404ed3c0 body=77 status=ok
// SIG undefined FUN_1404ed3c0(void)

void FUN_1404ed3c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_1404ed40e(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1404ed40e FUN_1404ed40e body=122 status=ok
// SIG undefined FUN_1404ed40e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1404ed40e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_1404ed45c:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_1404ed45c;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 1404ed488 FUN_1404ed488 body=3829 status=ok
// SIG undefined FUN_1404ed488(void)

undefined8 FUN_1404ed488(longlong param_1,longlong param_2,longlong param_3,char *param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  float *pfVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  byte bVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  ulonglong *puVar29;
  longlong lVar30;
  ulonglong *puVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_298 [32];
  char *local_278;
  ulonglong local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong *local_248;
  int local_230;
  float local_228;
  undefined4 uStack_224;
  ushort local_210;
  byte local_208;
  float local_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  float *local_1c0;
  undefined8 local_1b8;
  undefined4 *local_138;
  undefined8 local_130;
  uint local_128 [2];
  uint *local_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined1 local_108 [16];
  undefined1 *local_f8;
  int local_f0;
  float local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float *local_a8;
  undefined8 local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (((((*(longlong *)(param_1 + 0x110) == 0) || (*(longlong *)(param_1 + 0x118) == 0)) ||
       (*(longlong *)(param_1 + 0x120) == 0)) ||
      ((*(longlong *)(param_1 + 0x130) == 0 || (*(longlong *)(param_1 + 0x128) == 0)))) ||
     (*(longlong *)(param_1 + 0x138) == 0)) {
LAB_1404ee192:
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    if ((param_2 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x110) == 0))
    goto LAB_1404ed678;
    local_278 = param_4;
    if (param_3 == 0) {
      if (*param_4 != '\0') goto LAB_1404ee192;
      local_a8 = (float *)0x0;
      local_a0 = 0x800000000;
      FUN_143869b64(param_2,&local_200);
      FUN_147f4ac16(&local_e8,&local_200);
      param_4 = local_278;
      if (local_1c0 != (float *)0x0) {
        FUN_1400020a8();
        param_4 = local_278;
      }
    }
    else {
      local_a8 = (float *)0x0;
      local_a0 = 0x800000000;
      lVar28 = *(longlong *)(param_3 + 0x1c8);
      if (lVar28 == 0) {
        local_248 = DAT_14c8464f0;
        local_258 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_250 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_258 = *(ulonglong *)(lVar28 + 0x260);
        uStack_250 = *(undefined8 *)(lVar28 + 0x268);
        local_248 = *(longlong **)(lVar28 + 0x270);
      }
      FUN_1404ee408(param_2,&local_200);
      if (local_1c0 == (float *)0x0) {
        local_b8 = local_1d0;
        uStack_b0 = uStack_1c8;
        local_c8 = local_1e0;
        uStack_c0 = uStack_1d8;
        local_d8 = local_1f0;
        uStack_d4 = uStack_1ec;
        uStack_d0 = uStack_1e8;
        uStack_cc = uStack_1e4;
        local_e8 = local_200;
        uStack_e4 = uStack_1fc;
        uStack_e0 = uStack_1f8;
        uStack_dc = uStack_1f4;
      }
      if (local_a8 != (float *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = local_1c0;
      local_a0 = local_1b8;
    }
    if (param_4[0x108] == '\x01') {
      pfVar11 = local_a8;
      if (local_a8 == (float *)0x0) {
        pfVar11 = &local_e8;
      }
      if ((longlong)(int)local_a0 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        lVar28 = 0;
        do {
          if (*(char *)(*(longlong *)((longlong)pfVar11 + lVar28) + 0x50) == '\0')
          goto LAB_1404ed6b9;
          lVar28 = lVar28 + 8;
        } while ((longlong)(int)local_a0 * 8 != lVar28);
      }
    }
    else {
LAB_1404ed6b9:
      uVar10 = *(uint *)(*(longlong *)(param_1 + 0x128) + 0x38);
      local_200 = 0.0;
      uStack_1fc = uStack_1fc & 0xffffff00;
      local_138 = (undefined4 *)0x0;
      local_130 = 0x800000000;
      local_120 = (uint *)0x0;
      local_118 = 0;
      iStack_114 = 0x20;
      iStack_110 = -1;
      iStack_10c = 0;
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0;
      uVar19 = (ulonglong)(((uVar10 >> 1) - 1) + (uint)(uVar10 >> 1 == 0)) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar28 & 0x1f);
      if ((uint)lVar28 < 2) {
        iVar20 = 4;
      }
      if (uVar10 < 4) {
        iVar20 = 4;
      }
      local_268 = param_2;
      local_260 = param_3;
      if ((((int)uVar10 < 1) || (iVar20 < 1)) && (-1 < iVar20)) {
        FUN_147f53bdc(&uStack_1f8);
        FUN_1404ee37e(&uStack_1f8);
      }
      else {
        FUN_1404ee37e(&uStack_1f8);
        local_f0 = iVar20;
        FUN_1404ee6c2(&uStack_1f8);
      }
      lVar28 = (longlong)*(int *)(*(longlong *)(param_1 + 0x128) + 0x38);
      if (lVar28 != 0) {
        puVar29 = *(ulonglong **)(*(longlong *)(param_1 + 0x128) + 0x30);
        puVar31 = puVar29 + lVar28 * 0x1f;
        pcVar22 = local_278;
LAB_1404ed7a3:
        uVar19 = *puVar29;
        if ((uVar19 != 0) && (*(longlong *)(uVar19 + 0x40) != 0)) {
          pfVar11 = local_a8;
          if (local_a8 == (float *)0x0) {
            pfVar11 = &local_e8;
          }
          if ((longlong)(int)local_a0 != 0) {
            lVar28 = 0;
            do {
              if (*(longlong *)(uVar19 + 0x40) == *(longlong *)((longlong)pfVar11 + lVar28)) {
                if ((*(char *)(param_1 + 0x52) == '\x01') &&
                   (*(longlong *)(uVar19 + 0x34) == DAT_14cb241b0)) {
                  cVar9 = FUN_147f4a934(param_1);
                  if (cVar9 == '\0') break;
                  uVar19 = *puVar29;
                }
                lVar28 = *(longlong *)(uVar19 + 0x34);
                if (lVar28 == 0) goto LAB_1404ed82b;
                if ((longlong)*(int *)(pcVar22 + 0xf0) == 0) goto LAB_1404ed81b;
                lVar26 = 0;
                goto LAB_1404ee149;
              }
              lVar28 = lVar28 + 8;
            } while ((longlong)(int)local_a0 * 8 != lVar28);
          }
        }
        goto LAB_1404ed7e7;
      }
LAB_1404edcd1:
      uVar10 = rand();
      fVar32 = ((float)(uVar10 & 0x7fff) / 32767.0) * local_200;
      if (local_118 == 0) {
        uVar25 = 1;
        uVar19 = 0;
        iVar20 = 0;
        iVar27 = 0;
      }
      else {
        puVar12 = local_120;
        if (local_120 == (uint *)0x0) {
          puVar12 = local_128;
        }
        uVar10 = *puVar12;
        if (uVar10 == 0) {
          iVar20 = local_118 + 0x1e;
          if (-1 < local_118 + -1) {
            iVar20 = local_118 + -1;
          }
          uVar19 = 0;
          uVar25 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar25 = uVar19;
          }
          iVar27 = 0;
          do {
            if (uVar25 == uVar19) goto LAB_1404edd47;
            iVar27 = iVar27 + 0x20;
            uVar10 = puVar12[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar19 = 0;
          iVar27 = 0;
        }
        uVar25 = (ulonglong)(-uVar10 & uVar10);
        uVar4 = uVar25 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar20 = (iVar27 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (local_118 <= iVar20) {
          iVar20 = local_118;
        }
      }
      if (iVar20 != local_118) {
        puVar13 = local_138;
        if (local_138 == (undefined4 *)0x0) {
          puVar13 = &uStack_1f8;
        }
        uVar10 = 0xffffffff;
        fVar33 = 0.0;
        do {
          bVar6 = fVar33 <= fVar32;
          fVar33 = fVar33 + (float)puVar13[(longlong)iVar20 * 6 + 2];
          if ((bVar6) && (fVar32 <= fVar33)) {
            uVar16 = *(undefined8 *)(puVar13 + (longlong)iVar20 * 6);
            goto LAB_1404edd56;
          }
          puVar12 = local_120;
          if (local_120 == (uint *)0x0) {
            puVar12 = local_128;
          }
          uVar10 = uVar10 & ~(uint)uVar25;
          iVar20 = (int)uVar19;
          lVar28 = (longlong)iVar20;
          uVar21 = puVar12[lVar28] & uVar10;
          if (uVar21 == 0) {
            iVar24 = local_118 + -1;
            if (local_118 + -1 < 0) {
              iVar24 = local_118 + 0x1e;
            }
            iVar24 = iVar24 >> 5;
            iVar18 = iVar24;
            if (iVar24 < iVar20) {
              iVar18 = iVar20;
            }
            if (iVar24 <= iVar20) break;
            lVar26 = 0;
            while( true ) {
              iVar27 = iVar27 + 0x20;
              uVar21 = puVar12[lVar28 + lVar26 + 1];
              if (uVar21 != 0) break;
              lVar26 = lVar26 + 1;
              if (iVar18 - lVar28 == lVar26) goto LAB_1404edd47;
            }
            uVar19 = (ulonglong)(iVar20 + (int)lVar26 + 1);
            uVar10 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar21 & uVar21);
          uVar4 = uVar25 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          iVar20 = (iVar27 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        } while (iVar20 < local_118);
      }
LAB_1404edd47:
      if ((local_260 == 0) || (*local_278 != '\0')) {
        uVar16 = 0;
      }
      else {
        uVar16 = FUN_1404ed488(param_1,local_268,0,local_278);
      }
LAB_1404edd56:
      local_f0 = 0;
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1404ee37e(&uStack_1f8,0);
      if (local_120 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_a8 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1404ed678:
  if ((local_70 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (lVar26 = lVar26 + 8, (longlong)*(int *)(pcVar22 + 0xf0) * 8 != lVar26) {
LAB_1404ee149:
    if (*(longlong *)(*(longlong *)(pcVar22 + 0xe8) + lVar26) == lVar28) goto LAB_1404ed7e7;
  }
LAB_1404ed81b:
  if ((longlong)*(int *)(pcVar22 + 0x100) != 0) {
    lVar26 = 0;
    do {
      if (*(longlong *)(*(longlong *)(pcVar22 + 0xf8) + lVar26) == lVar28) goto LAB_1404ed7e7;
      lVar26 = lVar26 + 8;
    } while ((longlong)*(int *)(pcVar22 + 0x100) * 8 != lVar26);
  }
LAB_1404ed82b:
  if ((*(char *)(uVar19 + 0x48) != '\x01') || (cVar9 = FUN_147f4a934(param_1), cVar9 != '\0')) {
    local_258 = local_258 & 0xffffffffffffff00;
    local_230 = 0;
    FUN_1456bb102(&local_258,*(undefined8 *)(param_1 + 0x120));
    FUN_1447c3578(puVar29 + 1);
    if (local_208 == 3) {
      fVar32 = local_228;
      bVar17 = 3;
    }
    else {
      FUN_1400b56fe(&local_98);
      fVar32 = 0.0;
      if (local_78 != 0) {
        fVar32 = local_98;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar5 != (code *)0x0) {
        pfVar11 = &local_98;
        if (0x18 < local_80) {
          pfVar11 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar5)(pfVar11);
        pcVar22 = local_278;
      }
      bVar17 = local_208;
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
        bVar17 = local_208;
      }
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar17 * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar11 = &local_228;
      if (0x18 < local_210) {
        pfVar11 = (float *)CONCAT44(uStack_224,local_228);
      }
      (*pcVar5)(pfVar11);
      pcVar22 = local_278;
    }
    if (0x18 < local_210) {
      FUN_1400020a8(CONCAT44(uStack_224,local_228));
    }
    lVar28 = DAT_14c9a3da0;
    if ((longlong)local_230 != 0) {
      lVar30 = (longlong)local_230 + -1;
      lVar26 = lVar30 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar26),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar26));
      if (*(longlong *)(lVar28 + lVar26) != 0) {
        FUN_1400020a8();
      }
      lVar28 = DAT_14c9a3da0;
      iVar20 = (int)lVar30;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
      }
      *(undefined4 *)(lVar28 + lVar26) = 0xffffffff;
      iVar27 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar27 = DAT_14c9a3dd0;
      }
      *(int *)(lVar28 + 4 + lVar26) = iVar27;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar15 = DAT_14c9a3dc0;
      if (DAT_14c9a3dc0 == (undefined *)0x0) {
        puVar15 = &DAT_14c9a3db0;
      }
      iVar27 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar27 = iVar20;
      }
      bVar17 = (byte)lVar30 & 0x1f;
      DAT_14c9a3dd0 = iVar20;
      *(uint *)(puVar15 + (longlong)(iVar27 >> 5) * 4) =
           *(uint *)(puVar15 + (longlong)(iVar27 >> 5) * 4) &
           (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
      local_230 = 0;
    }
    if (((char)local_258 == '\x03') && (local_248 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_248 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_248 + 0x10))();
      }
    }
    iVar20 = iStack_110;
    uVar25 = local_130;
    uVar19 = *puVar29;
    if ((1e-08 < fVar32) || ((char)uStack_1fc == '\x01')) {
      iVar27 = (int)local_130;
      if ((int)local_130 != iStack_10c) {
        uVar10 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        puVar14 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          puVar14 = local_108;
        }
        iVar24 = *(int *)(puVar14 + (ulonglong)(local_f0 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar24 != -1) {
          puVar13 = local_138;
          if (local_138 == (undefined4 *)0x0) {
            puVar13 = &uStack_1f8;
          }
          do {
            puVar2 = (ulonglong *)(puVar13 + (longlong)iVar24 * 6);
            if (*puVar2 == uVar19) {
              if ((float *)(puVar2 + 1) != (float *)0x0 && puVar2 != (ulonglong *)0x0) {
                local_200 = local_200 - *(float *)(puVar2 + 1);
              }
              break;
            }
            iVar24 = (int)puVar2[2];
          } while (iVar24 != -1);
        }
      }
      local_200 = local_200 + fVar32;
      if (iStack_10c == 0) {
        local_130 = CONCAT44(local_130._4_4_,(int)local_130 + 1);
        if (local_130._4_4_ == iVar27) {
          FUN_147f53d46(&uStack_1f8,uVar25 & 0xffffffff);
        }
        iVar20 = local_118;
        if (local_118 == 0) {
          iVar24 = -1;
        }
        else {
          iVar24 = local_118 + 0x1e;
          if (-1 < local_118 + -1) {
            iVar24 = local_118 + -1;
          }
          iVar24 = iVar24 >> 5;
        }
        iVar18 = local_118 + 1;
        iVar23 = local_118 + 0x1f;
        if (-1 < local_118) {
          iVar23 = local_118;
        }
        if (iVar23 >> 5 == iVar24) {
          local_118 = iVar18;
        }
        else {
          if (iStack_114 <= local_118) {
            if (local_118 + 0x20U < 0x40) {
              iStack_114 = 0x20;
            }
            else {
              uVar10 = local_118 + 0x20U >> 5;
              local_270 = (ulonglong)uVar10;
              if (iStack_114 + 0x1fU < 0x40) {
                uVar21 = 4;
                if (4 < uVar10) {
                  uVar21 = uVar10;
                }
              }
              else {
                uVar21 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
              }
              uVar25 = FUN_144a3809e(uVar21 << 2,0);
              iVar24 = (int)(uVar25 >> 2);
              iStack_114 = -0x20;
              if ((int)local_270 <= iVar24) {
                iStack_114 = iVar24 << 5;
              }
            }
            FUN_14008f53c(local_128,local_118);
            iVar18 = local_118 + 1;
          }
          iVar24 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar24 = iVar18;
          }
          local_118 = iVar18;
          if (iVar18 % 0x20 != 0) {
            puVar12 = local_120;
            if (local_120 == (uint *)0x0) {
              puVar12 = local_128;
            }
            bVar17 = -(char)(iVar18 % 0x20);
            puVar12[iVar24 >> 5] = (puVar12[iVar24 >> 5] << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
          }
        }
        lVar28 = (longlong)iVar27;
        puVar12 = local_120;
        if (local_120 == (uint *)0x0) {
          puVar12 = local_128;
        }
        bVar17 = (byte)iVar20 & 0x1f;
        puVar12[iVar23 >> 5] = puVar12[iVar23 >> 5] & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
        iVar20 = iVar27;
      }
      else {
        puVar13 = local_138;
        if (local_138 == (undefined4 *)0x0) {
          puVar13 = &uStack_1f8;
        }
        lVar28 = (longlong)iStack_110;
        iStack_110 = puVar13[lVar28 * 6 + 1];
        iStack_10c = iStack_10c + -1;
        if (iStack_10c != 0) {
          puVar13[(longlong)(int)puVar13[lVar28 * 6 + 1] * 6] = 0xffffffff;
        }
      }
      puVar12 = local_120;
      if (local_120 == (uint *)0x0) {
        puVar12 = local_128;
      }
      iVar27 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar27 = iVar20;
      }
      puVar12[iVar27 >> 5] = puVar12[iVar27 >> 5] | 1 << ((byte)iVar20 & 0x1f);
      puVar13 = local_138;
      if (local_138 == (undefined4 *)0x0) {
        puVar13 = &uStack_1f8;
      }
      puVar2 = (ulonglong *)(puVar13 + lVar28 * 6);
      *puVar2 = uVar19;
      *(float *)(puVar2 + 1) = fVar32;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      uVar10 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      uVar10 = uVar10 >> 0x10 ^ uVar10;
      uVar21 = (int)local_130 - iStack_10c;
      if (1 < uVar21) {
        puVar14 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          puVar14 = local_108;
        }
        iVar27 = *(int *)(puVar14 + (ulonglong)(local_f0 - 1U & uVar10) * 4);
        if (iVar27 != -1) {
          puVar13 = local_138;
          if (local_138 == (undefined4 *)0x0) {
            puVar13 = &uStack_1f8;
          }
          do {
            puVar3 = (ulonglong *)(puVar13 + (longlong)iVar27 * 6);
            if (*puVar3 == uVar19) {
              uVar7 = *(undefined4 *)((longlong)puVar2 + 4);
              uVar19 = puVar2[1];
              uVar8 = *(undefined4 *)((longlong)puVar2 + 0xc);
              *(int *)puVar3 = (int)*puVar2;
              *(undefined4 *)((longlong)puVar3 + 4) = uVar7;
              *(int *)(puVar3 + 1) = (int)uVar19;
              *(undefined4 *)((longlong)puVar3 + 0xc) = uVar8;
              FUN_147f53dd6(&uStack_1f8);
              pcVar22 = local_278;
              goto LAB_1404ed7e7;
            }
            iVar27 = (int)puVar3[2];
          } while (iVar27 != -1);
        }
      }
      uVar19 = (ulonglong)(((uVar21 >> 1) - 1) + (uint)(uVar21 >> 1 == 0)) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar27 = 1 << ((byte)lVar28 & 0x1f);
      if ((uint)lVar28 < 2) {
        iVar27 = 4;
      }
      if (uVar21 < 4) {
        iVar27 = 4;
      }
      if (((int)uVar21 < 1) || (iVar27 <= local_f0)) {
        uVar10 = local_f0 - 1U & uVar10;
        *(uint *)((longlong)puVar2 + 0x14) = uVar10;
        puVar14 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          puVar14 = local_108;
        }
        *(undefined4 *)(puVar2 + 2) =
             *(undefined4 *)(puVar14 + ((longlong)local_f0 - 1U & (longlong)(int)uVar10) * 4);
        puVar14 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          puVar14 = local_108;
        }
        *(int *)(puVar14 + ((longlong)local_f0 - 1U & (longlong)(int)uVar10) * 4) = iVar20;
        pcVar22 = local_278;
      }
      else {
        local_f0 = iVar27;
        FUN_1404ee6c2(&uStack_1f8);
        pcVar22 = local_278;
      }
    }
  }
LAB_1404ed7e7:
  puVar29 = puVar29 + 0x1f;
  if (puVar29 == puVar31) goto LAB_1404edcd1;
  goto LAB_1404ed7a3;
}



// FUNCTION 1404ee37e FUN_1404ee37e body=137 status=ok
// SIG undefined FUN_1404ee37e(void)

void FUN_1404ee37e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != param_2) {
    FUN_1404ee4d0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0xe4)) && (*(int *)(param_1 + 0xe4) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0xe4) = uVar1;
  FUN_14008f53c(param_1 + 0xd0,0);
  return;
}



// FUNCTION 1404ee408 FUN_1404ee408 body=200 status=ok
// SIG undefined FUN_1404ee408(void)

longlong FUN_1404ee408(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0x800000000;
  if (((*(longlong *)(param_1 + 0x620) != 0) && (*(char *)(param_1 + 0x629) == '\x01')) &&
     (0 < (longlong)*(int *)(param_1 + 0x638))) {
    lVar5 = (longlong)*(int *)(param_1 + 0x638) * 0x70;
    lVar4 = *(longlong *)(param_1 + 0x630) + 0x10;
    do {
      lVar6 = *(longlong *)(lVar4 + -0x10);
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0x50) == '\0') {
          cVar2 = FUN_14051a950(lVar6 + 0x54,lVar4,param_3);
          if (cVar2 == '\0') goto LAB_1404ee4a8;
          lVar6 = *(longlong *)(lVar4 + -0x10);
        }
        iVar1 = *(int *)(param_2 + 0x48);
        *(uint *)(param_2 + 0x48) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x4c) < iVar1 + 1U) {
          FUN_147f4a648(param_2,iVar1);
        }
        lVar3 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar3 = param_2;
        }
        *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar6;
      }
LAB_1404ee4a8:
      lVar4 = lVar4 + 0x70;
      lVar5 = lVar5 + -0x70;
    } while (lVar5 != 0);
  }
  return param_2;
}



// FUNCTION 1404ee4d0 FUN_1404ee4d0 body=347 status=ok
// SIG undefined FUN_1404ee4d0(void)

void FUN_1404ee4d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar5 = 8;
    }
    else {
      uVar3 = (longlong)(int)param_2 * 0x18;
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
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404ee54a;
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
LAB_1404ee54a:
      uVar5 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar3 / 0x18)) {
        uVar5 = uVar3 / 0x18 & 0xffffffff;
      }
    }
  }
  if ((int)uVar5 == *(int *)(param_1 + 0xcc)) {
    return;
  }
  *(int *)(param_1 + 0xcc) = (int)uVar5;
  FUN_1404ee62c(param_1,*(undefined4 *)(param_1 + 200),uVar5,0x18);
  return;
}



// FUNCTION 1404ee62c FUN_1404ee62c body=150 status=ok
// SIG undefined FUN_1404ee62c(void)

void FUN_1404ee62c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1404ee6c2 FUN_1404ee6c2 body=604 status=ok
// SIG undefined FUN_1404ee6c2(void)

void FUN_1404ee6c2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 0x108);
  uVar3 = local_58;
  if (uVar8 == 0) goto LAB_1404ee7c9;
  lVar2 = param_1 + 0xf0;
  if (uVar8 < 5) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
LAB_1404ee71a:
    uVar4 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = lVar2;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x108) + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    FUN_1446efa72(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) goto LAB_1404ee71a;
  }
  local_40 = param_1 + 0xd0;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  local_30 = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_144a81a4c(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  uVar3 = local_58;
  local_50 = local_30;
  local_4c = local_2c;
  local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
  local_70 = param_1;
  if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
    iVar5 = local_58._4_4_;
    local_58 = uVar3;
    do {
      lVar7 = *(longlong *)(local_70 + 0xc0);
      if (*(longlong *)(local_70 + 0xc0) == 0) {
        lVar7 = local_70;
      }
      lVar6 = (longlong)iVar5;
      uVar11 = *(ulonglong *)(lVar7 + lVar6 * 0x18);
      uVar8 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar11 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)*(int *)(param_1 + 0x108) - 1U;
      iVar10 = (int)uVar11;
      *(int *)(lVar7 + 0x14 + lVar6 * 0x18) = iVar10;
      lVar9 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar9 = lVar2;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar6 * 0x18) =
           *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar11) * 4);
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = lVar2;
      }
      *(int *)(lVar7 + ((longlong)iVar10 & (longlong)*(int *)(param_1 + 0x108) - 1U) * 4) = iVar5;
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_144a81a4c(&local_68);
      iVar5 = local_58._4_4_;
      uVar3 = local_58;
    } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
  }
LAB_1404ee7c9:
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404ee920 FUN_1404ee920 body=353 status=ok
// SIG undefined FUN_1404ee920(void)

void FUN_1404ee920(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404ee9a5;
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
LAB_1404ee9a5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1404eea90 FUN_1404eea90 body=40 status=ok
// SIG undefined FUN_1404eea90(void)

undefined8 FUN_1404eea90(undefined8 param_1,int param_2)

{
  FUN_1404eeab8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404eeab8 FUN_1404eeab8 body=169 status=ok
// SIG undefined FUN_1404eeab8(void)

void FUN_1404eeab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a42a530;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1404eeb61(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1404eeb61 FUN_1404eeb61 body=43 status=ok
// SIG undefined FUN_1404eeb61(void)

void FUN_1404eeb61(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1404eeb8c FUN_1404eeb8c body=1 status=ok
// SIG undefined FUN_1404eeb8c(void)

void FUN_1404eeb8c(void)

{
  return;
}



// FUNCTION 1404eeb8e FUN_1404eeb8e body=119 status=ok
// SIG undefined FUN_1404eeb8e(void)

void FUN_1404eeb8e(longlong param_1)

{
  FUN_1404eec70(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_1 + 0x48);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x40)])(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404eec06 FUN_1404eec06 body=52 status=ok
// SIG undefined FUN_1404eec06(void)

void FUN_1404eec06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1404eec3a(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404eec3a FUN_1404eec3a body=54 status=ok
// SIG undefined FUN_1404eec3a(void)

void FUN_1404eec3a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1404eec70(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1404eec70 FUN_1404eec70 body=49 status=ok
// SIG undefined FUN_1404eec70(void)

void FUN_1404eec70(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x20)])(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1404eeca2 FUN_1404eeca2 body=1 status=ok
// SIG undefined FUN_1404eeca2(void)

void FUN_1404eeca2(void)

{
  return;
}



// FUNCTION 1404eeca4 FUN_1404eeca4 body=1 status=ok
// SIG undefined FUN_1404eeca4(void)

void FUN_1404eeca4(void)

{
  return;
}



// FUNCTION 1404eeca6 FUN_1404eeca6 body=13 status=ok
// SIG undefined FUN_1404eeca6(void)

void FUN_1404eeca6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1404eecb3 FUN_1404eecb3 body=89 status=ok
// SIG undefined FUN_1404eecb3(void)

void FUN_1404eecb3(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x38);
    do {
      FUN_1404eec70(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404eed0c FUN_1404eed0c body=65 status=ok
// SIG undefined FUN_1404eed0c(void)

void FUN_1404eed0c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a184350;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001404eed49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404eed4e FUN_1404eed4e body=126 status=ok
// SIG undefined FUN_1404eed4e(void)

undefined8 * FUN_1404eed4e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    *(undefined1 *)(param_2 + 4) = 6;
  }
  else if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_1400021e4((undefined4 *)(param_1 + 8),&local_28);
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    *(undefined1 *)(param_2 + 4) = 4;
  }
  else {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404eedce FUN_1404eedce body=125 status=ok
// SIG undefined FUN_1404eedce(void)

longlong * FUN_1404eedce(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    uVar3 = *param_2;
    iVar2 = (int)param_1[0xe];
    *(uint *)(param_1 + 0xe) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x74) < iVar2 + 1U) {
      FUN_141225836(param_1 + 0xd,iVar2);
    }
    lVar4 = param_1[0xd];
    lVar5 = (longlong)iVar2 * 0x40;
    *(undefined8 *)(lVar4 + lVar5) = uVar3;
    *(undefined8 *)(lVar4 + 8 + lVar5) = param_3;
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1404eec70(0,0);
  }
  return param_1;
}



// FUNCTION 1404eee4c FUN_1404eee4c body=107 status=ok
// SIG undefined FUN_1404eee4c(void)

void FUN_1404eee4c(longlong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    FUN_141237793();
    if ((longlong)DAT_14c9a3330 != 0) {
      lVar3 = 0;
      do {
        puVar2 = *(undefined **)(DAT_14c9a3328 + lVar3);
        if ((puVar2 != (undefined *)0x0) && (*(longlong *)(puVar2 + 0x3c) == *param_1))
        goto LAB_1404eeea3;
        lVar3 = lVar3 + 0x18;
      } while ((longlong)DAT_14c9a3330 * 0x18 != lVar3);
    }
    puVar2 = (undefined *)0x0;
LAB_1404eeea3:
    puVar1 = &DAT_14c9a3168;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    param_1[1] = (longlong)puVar1;
  }
  return;
}



// FUNCTION 1404eeeb8 FUN_1404eeeb8 body=163 status=ok
// SIG undefined FUN_1404eeeb8(void)

longlong * FUN_1404eeeb8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    iVar1 = (int)param_1[0xc];
    if (iVar1 == 0) {
      FUN_140d76a74(param_1);
      iVar1 = (int)param_1[0xc];
    }
    plVar3 = param_1 + 9;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xb];
    }
    lVar2 = (longlong)(iVar1 + -1);
    iVar1 = (int)plVar3[lVar2 * 2 + 1];
    *(uint *)(plVar3 + lVar2 * 2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + lVar2 * 0x10 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3 + lVar2 * 2,iVar1);
    }
    lVar2 = plVar3[lVar2 * 2];
    lVar4 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar2 + lVar4) = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 1404eef5c FUN_1404eef5c body=165 status=ok
// SIG undefined FUN_1404eef5c(void)

longlong * FUN_1404eef5c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    iVar1 = (int)param_1[0xc];
    if (iVar1 == 0) {
      FUN_140d76a74(param_1);
      iVar1 = (int)param_1[0xc];
    }
    plVar3 = param_1 + 9;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xb];
    }
    lVar2 = (longlong)(iVar1 + -1);
    iVar1 = (int)plVar3[lVar2 * 2 + 1];
    *(uint *)(plVar3 + lVar2 * 2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + lVar2 * 0x10 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3 + lVar2 * 2,iVar1);
    }
    lVar2 = plVar3[lVar2 * 2];
    lVar4 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar2 + lVar4) = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 3;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 1404ef002 FUN_1404ef002 body=283 status=ok
// SIG undefined FUN_1404ef002(void)

longlong * FUN_1404ef002(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [32];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    iVar1 = (int)param_1[0xc];
    if (iVar1 == 0) {
      FUN_140d76a74(param_1);
      iVar1 = (int)param_1[0xc];
    }
    plVar3 = param_1 + 9;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xb];
    }
    lVar2 = (longlong)(iVar1 + -1);
    iVar1 = (int)plVar3[lVar2 * 2 + 1];
    *(uint *)(plVar3 + lVar2 * 2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + lVar2 * 0x10 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3 + lVar2 * 2,iVar1);
    }
    lVar2 = plVar3[lVar2 * 2];
    lVar4 = (longlong)iVar1 * 0x30;
    local_50 = *(byte *)(param_3 + 0x20);
    (*(code *)(&PTR_LAB_14a184230)[local_50])(local_70,param_3);
    *(byte *)(lVar2 + 0x20 + lVar4) = local_50;
    (*(code *)(&PTR_LAB_14a184230)[local_50])(lVar2 + lVar4,local_70);
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
    (*(code *)(&PTR_FUN_14a1842f0)[local_50])(local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404ef148 FUN_1404ef148 body=718 status=ok
// SIG undefined FUN_1404ef148(void)

int * FUN_1404ef148(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1406cd6a8(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1404ef2f7;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1404ef2f7:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x40);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x40) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1404ef416 FUN_1404ef416 body=101 status=ok
// SIG undefined FUN_1404ef416(void)

void FUN_1404ef416(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xe4 + (longlong)param_2 * 0xe8);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0xe8 + 0xe0);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0xe8 + 0xe0);
  FUN_1404efe4e();
  return;
}



// FUNCTION 1404ef47c FUN_1404ef47c body=558 status=ok
// SIG undefined FUN_1404ef47c(void)

void FUN_1404ef47c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = (int)param_1[9];
    iVar13 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar13 >> 2) {
      iVar2 = (int)param_1[5];
      if (iVar2 == 0) {
        uVar10 = 0;
        uVar12 = 1;
        iVar13 = 0;
        iVar9 = 0;
      }
      else {
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 2);
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar13 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar13 = iVar2 + -1;
          }
          uVar10 = 0;
          uVar12 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar12 = uVar10;
          }
          iVar9 = 0;
          do {
            if (uVar12 == uVar10) goto LAB_1404ef61e;
            iVar9 = iVar9 + 0x20;
            uVar8 = puVar11[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar10 = 0;
          iVar9 = 0;
        }
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar13) {
          iVar13 = iVar2;
        }
      }
      if (iVar13 != iVar2) {
        uVar8 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0xe4 + (longlong)iVar13 * 0xe8) * 4) =
               0xffffffff;
          uVar8 = ~(uint)uVar12 & uVar8;
          puVar11 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 2);
          }
          iVar3 = (int)param_1[5];
          iVar13 = (int)uVar10;
          lVar15 = (longlong)iVar13;
          uVar7 = puVar11[lVar15] & uVar8;
          if (uVar7 == 0) {
            iVar5 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar5 = iVar3 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar13) {
              iVar6 = iVar13;
            }
            if (iVar13 < iVar5) {
              lVar14 = 0;
              do {
                uVar7 = puVar11[lVar15 + lVar14 + 1];
                if (uVar7 != 0) {
                  uVar10 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_1404ef5e9;
                }
                iVar9 = iVar9 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar6 - lVar15 != lVar14);
              uVar8 = 0xffffffff;
              iVar13 = iVar6;
            }
            uVar10 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar3;
          }
          else {
LAB_1404ef5e9:
            uVar12 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar12 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar13) {
              iVar13 = iVar3;
            }
          }
        } while (iVar13 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar15 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar15 * 4) = 0xffffffff;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)param_1[9]);
    }
LAB_1404ef61e:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_140032aa6(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1404ef6aa FUN_1404ef6aa body=783 status=ok
// SIG undefined FUN_1404ef6aa(void)

void FUN_1404ef6aa(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  byte param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *_Src;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_b8 [47];
  byte local_89;
  longlong *local_88;
  longlong *local_80;
  uint local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = (int)param_4[5];
  if (iVar4 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    puVar6 = (uint *)param_4[4];
    if ((uint *)param_4[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_4 + 2);
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar10 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar10 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar7 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar7 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar7 == uVar14) goto LAB_1404ef6f0;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar7 = uVar15 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar9 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar11 = 0xffffffff;
    local_89 = param_5 ^ 1;
    local_70 = param_1;
    local_68 = param_3;
    do {
      local_88 = (longlong *)((longlong)iVar9 * 0xe8);
      local_80 = (longlong *)((longlong)local_88 + *param_4 + 0xd8);
      lVar16 = *param_4 + (longlong)local_88;
      local_74 = uVar11;
      uVar3 = FUN_140032235(lVar16);
      iVar4 = FUN_1456b279a(param_2,uVar3,lVar16);
      lVar5 = (longlong)iVar4 * 0xe8 + *param_2;
      if (lVar5 == 0 || iVar4 == -1) {
        local_58 = local_80;
        local_60 = lVar16;
        FUN_1404efec8(param_2,local_4c,&local_60,0);
        cVar2 = FUN_1404ef9ba(local_68,lVar16);
        plVar1 = local_70;
        if (cVar2 == '\0' && local_89 == 0) {
          lVar5 = *param_4;
          iVar4 = (int)local_70[1];
          *(uint *)(local_70 + 1) = iVar4 + 1U;
          _Src = (longlong *)((longlong)local_88 + lVar5);
          if (*(uint *)((longlong)local_70 + 0xc) < iVar4 + 1U) {
            local_88 = (longlong *)((longlong)local_88 + lVar5);
            FUN_14571cade(local_70,iVar4);
            _Src = local_88;
          }
          memcpy((void *)((longlong)iVar4 * 0xe0 + *plVar1),_Src,0xe0);
        }
      }
      else if (*(longlong *)(lVar5 + 0xd8) != *local_80) {
        local_88 = local_70 + 0x45;
        *(int *)((longlong)local_70 + 0x2ac) = *(int *)((longlong)local_70 + 0x2ac) + 1;
        iVar4 = (int)local_70[0x46];
        *(uint *)(local_70 + 0x46) = iVar4 + 1U;
        if (*(uint *)((longlong)local_70 + 0x234) < iVar4 + 1U) {
          FUN_1404f01fe(local_88,iVar4);
        }
        *(longlong *)(*local_88 + (longlong)iVar4 * 8) = *local_80;
        FUN_1404ef416(param_4,iVar9);
      }
      uVar11 = local_74 & ~(uint)uVar15;
      puVar6 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_4 + 2);
      }
      iVar4 = (int)param_4[5];
      iVar9 = (int)uVar14;
      lVar5 = (longlong)iVar9;
      uVar8 = puVar6[lVar5] & uVar11;
      if (uVar8 == 0) {
        iVar12 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar12 = iVar4 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar12 <= iVar9) break;
        lVar16 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar8 = puVar6[lVar5 + lVar16 + 1];
          if (uVar8 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar5 == lVar16) goto LAB_1404ef6f0;
        }
        uVar14 = (ulonglong)(iVar9 + (int)lVar16 + 1);
        uVar11 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar7 = uVar15 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_1404ef6f0:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404ef9ba FUN_1404ef9ba body=155 status=ok
// SIG undefined FUN_1404ef9ba(void)

undefined8 FUN_1404ef9ba(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = FUN_140032235(param_2);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar5 = (ulonglong)
            *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar5 != 0xffffffffffffffff) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_144b1ba6e(uVar5 * 0xe8 + lVar1,param_2);
        if (cVar2 != '\0') {
          FUN_1404ef416(param_1,uVar5 & 0xffffffff);
          return 1;
        }
        uVar5 = (ulonglong)*(int *)(lVar1 + 0xe0 + uVar5 * 0xe8);
      } while (uVar5 != 0xffffffffffffffff);
    }
  }
  return 0;
}



// FUNCTION 1404efa56 FUN_1404efa56 body=1015 status=ok
// SIG undefined FUN_1404efa56(void)

int FUN_1404efa56(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 *local_130;
  undefined1 local_128 [64];
  longlong local_e8;
  undefined4 local_e0;
  code *local_d8 [2];
  undefined8 *local_c8;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca813a8) {
    FUN_144b3d300(&DAT_14ca813a8);
    if (DAT_14ca813a8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca813a0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
      _Init_thread_footer(&DAT_14ca813a8);
    }
  }
  if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    iVar7 = 0;
    if (0 < iVar2) goto LAB_1404efb67;
  }
  lVar8 = *param_3;
  iVar7 = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
  if (iVar7 != 0 && *(int *)(lVar8 + 0x34) <= *(int *)(lVar8 + 8)) {
    FUN_14741104a(local_128);
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar2 != 2) {
        if (iVar2 != 1) goto LAB_1404efbc7;
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_1404efbd0;
        goto LAB_1404efcd7;
      }
LAB_1404efbd0:
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_145cb3208(&local_98,local_128);
      if (DAT_14ca85164 == '\x01') {
        FUN_1431e8d66(&local_98);
      }
      else {
        puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0xc;
        if (DAT_14ca85108 < puVar5) {
          FUN_140023dd8(&DAT_14ca85100,0x68);
          puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar5 = puVar6 + 0xc;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar5;
        *DAT_14ca85130 = puVar6;
        DAT_14ca85130 = puVar6 + 1;
        puVar6[1] = 0;
        *puVar6 = &PTR_FUN_14a37d6c8;
        FUN_14741104a(puVar6 + 2,&local_98);
      }
    }
    else {
LAB_1404efbc7:
      if (iVar2 == 0x10) goto LAB_1404efbd0;
LAB_1404efcd7:
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_145cb3208(&local_98,local_128);
      local_d8[0] = (code *)0x0;
      puVar5 = (undefined8 *)FUN_14001cc68(0x58,8);
      *puVar5 = &PTR_LAB_14a37d6d0;
      local_c8 = puVar5;
      FUN_14741104a(puVar5 + 1,&local_98);
      if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_d8[0] = FUN_1431e8f44;
      }
      local_138 = 2;
      FUN_14014aede(&local_130,local_d8);
      if (local_130 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_130 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_130)(local_130,1);
        }
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1400329f4(&local_98);
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400329f4(local_128);
    lVar8 = *param_3;
  }
  *param_3 = *param_2;
  *param_2 = lVar8;
  lVar8 = (longlong)(int)param_1[1];
  if (0 < lVar8) {
    lVar10 = lVar8 * 0xe0;
    uVar9 = lVar8 + 1;
    do {
      lVar10 = lVar10 + -0xe0;
      iVar2 = FUN_1404ef9ba(*param_3,*param_1 + lVar10);
      if (iVar2 != 0) {
        lStack_90 = *param_1 + lVar10 + 0xd8;
        local_98 = *param_1 + lVar10;
        FUN_1404efec8(*param_2,local_128,&local_98,0);
      }
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
LAB_1404efb67:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404efe4e FUN_1404efe4e body=122 status=ok
// SIG undefined FUN_1404efe4e(void)

void FUN_1404efe4e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe8 + 4) = uVar5;
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



// FUNCTION 1404efec8 FUN_1404efec8 body=821 status=ok
// SIG undefined FUN_1404efec8(void)

int * FUN_1404efec8(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  void *_Dst;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_1404f0360(param_1,iVar14);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar5 = iVar7 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar11 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        if (iVar7 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar7;
        }
        else {
          uVar6 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar6) {
              uVar8 = uVar6;
            }
          }
          else {
            uVar8 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar8 << 2,0);
          iVar5 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar6 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar12,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar9 = (longlong)iVar14;
    iVar7 = *(int *)(*param_1 + 4 + lVar9 * 0xe8);
    *(int *)(param_1 + 6) = iVar7;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0xe8) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar7 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  lVar2 = *param_1;
  lVar9 = lVar9 * 0xe8;
  _Dst = (void *)(lVar2 + lVar9);
  puVar3 = (undefined8 *)param_3[1];
  memcpy(_Dst,(void *)*param_3,0xd8);
  *(undefined8 *)(lVar2 + 0xd8 + lVar9) = *puVar3;
  *(undefined4 *)(lVar2 + 0xe0 + lVar9) = 0xffffffff;
  uVar6 = FUN_140032235(_Dst);
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_1456b279a(param_1,uVar6,_Dst);
    if (iVar7 != -1) {
      memmove((void *)((longlong)iVar7 * 0xe8 + *param_1),_Dst,0xe0);
      FUN_1404efe4e(param_1,iVar14);
      cVar4 = '\x01';
      goto LAB_1404efffb;
    }
  }
  cVar4 = '\0';
  iVar7 = iVar14;
LAB_1404efffb:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar8 < 4) {
      iVar14 = 1;
    }
    else {
      uVar13 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar6 = (int)param_1[9] - 1U & uVar6;
      *(uint *)((longlong)_Dst + 0xe4) = uVar6;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Dst + 0xe0) =
           *(undefined4 *)
            ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
           iVar7;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_1404f04d6(param_1);
    }
  }
  *param_2 = iVar7;
  return param_2;
}



// FUNCTION 1404f01fe FUN_1404f01fe body=353 status=ok
// SIG undefined FUN_1404f01fe(void)

void FUN_1404f01fe(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404f0283;
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
LAB_1404f0283:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1404f0360 FUN_1404f0360 body=372 status=ok
// SIG undefined FUN_1404f0360(void)

void FUN_1404f0360(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
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
  uVar7 = lVar6 * 0xe8;
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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1404f03ea;
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
LAB_1404f03ea:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x8d3dcb08d3dcb09),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0xe8,8);
  return;
}



// FUNCTION 1404f04d6 FUN_1404f04d6 body=684 status=ok
// SIG undefined FUN_1404f04d6(void)

void FUN_1404f04d6(longlong *param_1)

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
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_48;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0);
  }
  plVar1 = param_1 + 7;
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0);
    }
  }
  else {
    if (uVar13 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar13);
    if ((int)uVar13 < 1) goto LAB_1404f054b;
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
  } while (uVar13 != uVar2);
LAB_1404f054b:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    local_48 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar10 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar10 = iVar3 + -1;
      }
      local_48 = 0;
      uVar14 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar14 = local_48;
      }
      iVar10 = 0;
      do {
        if (uVar14 == local_48) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar8[local_48 + 1];
        local_48 = local_48 + 1;
      } while (uVar13 == 0);
    }
    else {
      local_48 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar4 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar12 = (longlong)iVar5 * 0xe8;
      iVar3 = FUN_140032235(lVar11 + lVar12);
      uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
      iVar3 = (int)uVar4;
      *(int *)(lVar11 + 0xe4 + lVar12) = iVar3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(undefined4 *)(lVar11 + 0xe0 + lVar12) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar4) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)local_48;
      lVar11 = (longlong)iVar5;
      uVar2 = puVar8[lVar11] & uVar13;
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
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar2 = puVar8[lVar11 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar11 == lVar12) {
            return;
          }
        }
        local_48 = (ulonglong)(iVar5 + (int)lVar12 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar4 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 1404f0782 FUN_1404f0782 body=445 status=ok
// SIG undefined FUN_1404f0782(void)

void FUN_1404f0782(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if ((cVar2 != '\0') && ((char)param_1[0x8dc] == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x897);
    if (((uVar1 & 1) == 0) ||
       ((((char)param_1[0x220] != '\n' || (param_1[0x22] == 0)) || (param_1[0x57c] == DAT_14cbc6c68)
        ))) {
      uVar4 = uVar1 & 0xfffffffd;
      *(uint *)(param_1 + 0x897) = uVar4;
    }
    else {
      uVar4 = uVar1 | 2;
      *(uint *)(param_1 + 0x897) = uVar4;
      *(undefined4 *)(param_1 + 0x86) = 0x3f800000;
    }
    uVar4 = uVar4 >> 1 & 1;
    if ((uVar1 >> 1 & 1) != uVar4) {
      if (uVar4 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x44bc) = 1;
        plVar5 = (longlong *)param_1[0x841];
        lVar3 = 0xb90;
      }
      else {
        plVar5 = (longlong *)param_1[0x841];
        lVar3 = 0xb88;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + lVar3))();
      }
    }
    (**(code **)(*param_1 + 0xef8))(param_1);
    FUN_1404f0940(param_1 + 0x89b,param_2);
    FUN_1404f171a(param_1,param_2);
    if (((*(char *)((longlong)param_1 + 0x44bc) == '\x01') &&
        ((((*(byte *)(param_1 + 0x897) & 2) == 0 || ((char)param_1[0x220] != '\n')) ||
         (param_1[0x22] == 0)))) &&
       (((((double)param_1[0x71] != 0.0 || (NAN((double)param_1[0x71]))) ||
         (((double)param_1[0x72] != 0.0 ||
          (((NAN((double)param_1[0x72]) || ((double)param_1[0x73] != 0.0)) ||
           (NAN((double)param_1[0x73]))))))) ||
        (((ABS((double)param_1[0x25]) <= 9.999999747378752e-05 &&
          (ABS((double)param_1[0x26]) <= 9.999999747378752e-05)) &&
         (ABS((double)param_1[0x27]) <= 9.999999747378752e-05)))))) {
      *(undefined1 *)((longlong)param_1 + 0x44bc) = 0;
    }
  }
  return;
}



// FUNCTION 1404f0940 FUN_1404f0940 body=73 status=ok
// SIG undefined FUN_1404f0940(void)

void FUN_1404f0940(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0xa8);
    if ((lVar1 == 0) || (*(char *)(lVar1 + 0x178) != '\x02')) {
      FUN_1440efc5c(param_1);
      FUN_1440f02da(param_1);
    }
    FUN_1440f091a(param_1);
    return;
  }
  return;
}



// FUNCTION 1404f098a FUN_1404f098a body=2149 status=ok
// SIG undefined FUN_1404f098a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404f098a(longlong *param_1)

{
  ulonglong uVar1;
  float fVar2;
  double dVar3;
  char cVar4;
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
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  char cVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  uint uVar27;
  longlong lVar28;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar32;
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 in_XMM1 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 in_XMM3 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined1 in_XMM4 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  longlong lVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar60 [16];
  
  if ((param_1[0x39d] != 0) && (*(char *)(param_1[0x39d] + 0x178) == '\x01')) {
    return;
  }
  cVar4 = *(char *)((longlong)param_1 + 0x422c);
  if ((*(char *)((longlong)param_1 + 0x422b) == '\x01') &&
     (*(char *)((longlong)param_1 + 0x4229) == '\x01')) {
    cVar20 = (**(code **)(*param_1 + 0xf10))();
  }
  else {
    cVar20 = '\0';
  }
  *(char *)((longlong)param_1 + 0x422c) = cVar20;
  if (param_1[0x842] != 0) {
    if (cVar20 != cVar4) {
      uVar1 = param_1[7];
      if (uVar1 < 0xffffffff00000000) {
        plVar26 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar26 = (longlong *)0x0;
        }
        (**(code **)(*plVar26 + 0x58))(plVar26,param_1,uVar1,0x11);
      }
      else {
        uVar27 = (uint)uVar1;
        if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c998088)) {
          puVar23 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar23 = DAT_14c998080;
          }
          if ((*(uint *)(puVar23 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar27 & 0x1f) & 1) != 0) {
            lVar28 = DAT_14c998060 + (ulonglong)(uVar27 & 0x7fffffff) * 0x68;
            puVar24 = *(uint **)(lVar28 + 0x18);
            if (*(uint **)(lVar28 + 0x18) == (uint *)0x0) {
              puVar24 = (uint *)(lVar28 + 8);
            }
            *puVar24 = *puVar24 | 0x20000;
            *(byte *)(lVar28 + 0x60) = *(byte *)(lVar28 + 0x60) | 1;
          }
        }
      }
    }
    if (cVar4 == '\0') {
      if (*(char *)((longlong)param_1 + 0x422c) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x422a) = 0;
        FUN_1404f9ac2(param_1);
        FUN_1404f4614(param_1);
        FUN_140f7f83a(param_1,1);
        lVar28 = param_1[0x841];
        if (lVar28 != 0) {
          uVar21 = (**(code **)(*(longlong *)(lVar28 + 0x3b38) + 0x18))(lVar28 + 0x3b38);
          FUN_1409c9c98(uVar21,1);
        }
        auVar19 = _DAT_149931e80;
        if ((longlong)(int)param_1[0x854] != 0) {
          uVar1 = (longlong)(int)param_1[0x854] * 0xc - 0xc;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar1;
          uVar29 = SUB164(auVar34 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
          uVar32 = (undefined4)(uVar1 / 0x180000000);
          auVar36._0_8_ = CONCAT44(uVar32,uVar29);
          auVar36._8_4_ = uVar29;
          auVar36._12_4_ = uVar32;
          auVar31._0_8_ = auVar36._0_8_ >> 3;
          auVar31._8_8_ = auVar36._8_8_ >> 3;
          puVar22 = (undefined1 *)(param_1[0x853] + 0xbc);
          uVar25 = 0;
          auVar34 = pmovsxbq(in_XMM1,0xf0e);
          auVar36 = pmovsxbq(in_XMM2,0xd0c);
          auVar38 = pmovsxbq(in_XMM3,0xb0a);
          auVar41 = pmovsxbq(in_XMM4,0x908);
          auVar42 = pmovsxbq(in_XMM5,0x706);
          auVar43 = pmovsxbq(unaff_XMM6,0x504);
          auVar45 = pmovsxbq(unaff_XMM7,0x302);
          auVar47 = pmovsxbq(unaff_XMM8,0x100);
          do {
            auVar48._8_4_ = (int)uVar25;
            auVar48._0_8_ = uVar25;
            auVar48._12_4_ = (int)(uVar25 >> 0x20);
            auVar50 = auVar31 | auVar19;
            auVar52 = (auVar48 | auVar47) ^ auVar19;
            lVar28 = auVar50._0_8_;
            auVar53._0_8_ = -(ulonglong)(lVar28 < auVar52._0_8_);
            lVar51 = auVar50._8_8_;
            auVar53._8_8_ = -(ulonglong)(lVar51 < auVar52._8_8_);
            auVar60 = pshuflw(unaff_XMM14,auVar53,0xe8);
            auVar52._8_4_ = 0xffffffff;
            auVar52._0_8_ = 0xffffffffffffffff;
            auVar52._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar60 ^ auVar52,auVar60 ^ auVar52);
            if ((auVar52._0_4_ & 1) != 0) {
              puVar22[-0xb4] = 1;
            }
            auVar53 = packssdw(auVar53,auVar53);
            auVar60._8_4_ = 0xffffffff;
            auVar60._0_8_ = 0xffffffffffffffff;
            auVar60._12_4_ = 0xffffffff;
            auVar53 = packssdw(auVar53 ^ auVar60,auVar53 ^ auVar60);
            auVar53 = packsswb(auVar53,auVar53);
            if ((auVar53[1] & 1) != 0) {
              puVar22[-0xa8] = 1;
            }
            auVar53 = (auVar48 | auVar45) ^ auVar19;
            auVar54._0_8_ = -(ulonglong)(lVar28 < auVar53._0_8_);
            auVar54._8_8_ = -(ulonglong)(lVar51 < auVar53._8_8_);
            auVar52 = packssdw(auVar52,auVar54);
            auVar5._8_4_ = 0xffffffff;
            auVar5._0_8_ = 0xffffffffffffffff;
            auVar5._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar5,auVar52 ^ auVar5);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[2] & 1) != 0) {
              puVar22[-0x9c] = 1;
            }
            auVar53 = pshufhw(auVar54,auVar54,0x84);
            auVar6._8_4_ = 0xffffffff;
            auVar6._0_8_ = 0xffffffffffffffff;
            auVar6._12_4_ = 0xffffffff;
            auVar53 = packssdw(auVar53 ^ auVar6,auVar53 ^ auVar6);
            auVar53 = packsswb(auVar53,auVar53);
            if ((auVar53[3] & 1) != 0) {
              puVar22[-0x90] = 1;
            }
            auVar53 = (auVar48 | auVar43) ^ auVar19;
            auVar55._0_8_ = -(ulonglong)(lVar28 < auVar53._0_8_);
            auVar55._8_8_ = -(ulonglong)(lVar51 < auVar53._8_8_);
            auVar52 = pshuflw(auVar52,auVar55,0xe8);
            auVar7._8_4_ = 0xffffffff;
            auVar7._0_8_ = 0xffffffffffffffff;
            auVar7._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar7,auVar52 ^ auVar7);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[4] & 1) != 0) {
              puVar22[-0x84] = 1;
            }
            auVar53 = packssdw(auVar55,auVar55);
            auVar8._8_4_ = 0xffffffff;
            auVar8._0_8_ = 0xffffffffffffffff;
            auVar8._12_4_ = 0xffffffff;
            auVar53 = packssdw(auVar53 ^ auVar8,auVar53 ^ auVar8);
            auVar53 = packsswb(auVar53,auVar53);
            if ((auVar53[5] & 1) != 0) {
              puVar22[-0x78] = 1;
            }
            auVar53 = (auVar48 | auVar42) ^ auVar19;
            auVar56._0_8_ = -(ulonglong)(lVar28 < auVar53._0_8_);
            auVar56._8_8_ = -(ulonglong)(lVar51 < auVar53._8_8_);
            auVar52 = packssdw(auVar52,auVar56);
            auVar9._8_4_ = 0xffffffff;
            auVar9._0_8_ = 0xffffffffffffffff;
            auVar9._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar9,auVar52 ^ auVar9);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[6] & 1) != 0) {
              puVar22[-0x6c] = 1;
            }
            auVar53 = pshufhw(auVar56,auVar56,0x84);
            auVar10._8_4_ = 0xffffffff;
            auVar10._0_8_ = 0xffffffffffffffff;
            auVar10._12_4_ = 0xffffffff;
            auVar53 = packssdw(auVar53 ^ auVar10,auVar53 ^ auVar10);
            auVar53 = packsswb(auVar53,auVar53);
            if ((auVar53[7] & 1) != 0) {
              puVar22[-0x60] = 1;
            }
            auVar53 = (auVar48 | auVar41) ^ auVar19;
            auVar57._0_8_ = -(ulonglong)(lVar28 < auVar53._0_8_);
            auVar57._8_8_ = -(ulonglong)(lVar51 < auVar53._8_8_);
            auVar52 = pshuflw(auVar52,auVar57,0xe8);
            auVar11._8_4_ = 0xffffffff;
            auVar11._0_8_ = 0xffffffffffffffff;
            auVar11._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar11,auVar52 ^ auVar11);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[8] & 1) != 0) {
              puVar22[-0x54] = 1;
            }
            auVar53 = packssdw(auVar57,auVar57);
            auVar12._8_4_ = 0xffffffff;
            auVar12._0_8_ = 0xffffffffffffffff;
            auVar12._12_4_ = 0xffffffff;
            auVar53 = packssdw(auVar53 ^ auVar12,auVar53 ^ auVar12);
            auVar53 = packsswb(auVar53,auVar53);
            if ((auVar53[9] & 1) != 0) {
              puVar22[-0x48] = 1;
            }
            auVar53 = (auVar48 | auVar38) ^ auVar19;
            auVar58._0_8_ = -(ulonglong)(lVar28 < auVar53._0_8_);
            auVar58._8_8_ = -(ulonglong)(lVar51 < auVar53._8_8_);
            auVar52 = packssdw(auVar52,auVar58);
            auVar13._8_4_ = 0xffffffff;
            auVar13._0_8_ = 0xffffffffffffffff;
            auVar13._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar13,auVar52 ^ auVar13);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[10] & 1) != 0) {
              puVar22[-0x3c] = 1;
            }
            auVar53 = pshufhw(auVar58,auVar58,0x84);
            auVar14._8_4_ = 0xffffffff;
            auVar14._0_8_ = 0xffffffffffffffff;
            auVar14._12_4_ = 0xffffffff;
            auVar53 = packssdw(auVar53 ^ auVar14,auVar53 ^ auVar14);
            auVar53 = packsswb(auVar53,auVar53);
            if ((auVar53[0xb] & 1) != 0) {
              puVar22[-0x30] = 1;
            }
            auVar53 = (auVar48 | auVar36) ^ auVar19;
            auVar59._0_8_ = -(ulonglong)(lVar28 < auVar53._0_8_);
            auVar59._8_8_ = -(ulonglong)(lVar51 < auVar53._8_8_);
            auVar52 = pshuflw(auVar52,auVar59,0xe8);
            auVar15._8_4_ = 0xffffffff;
            auVar15._0_8_ = 0xffffffffffffffff;
            auVar15._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar15,auVar52 ^ auVar15);
            unaff_XMM14 = packsswb(auVar52,auVar52);
            if ((unaff_XMM14[0xc] & 1) != 0) {
              puVar22[-0x24] = 1;
            }
            auVar52 = packssdw(auVar59,auVar59);
            auVar16._8_4_ = 0xffffffff;
            auVar16._0_8_ = 0xffffffffffffffff;
            auVar16._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar16,auVar52 ^ auVar16);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[0xd] & 1) != 0) {
              puVar22[-0x18] = 1;
            }
            auVar52 = (auVar48 | auVar34) ^ auVar19;
            auVar49._0_8_ = -(ulonglong)(lVar28 < auVar52._0_8_);
            auVar49._8_8_ = -(ulonglong)(lVar51 < auVar52._8_8_);
            auVar52 = packssdw(auVar50,auVar49);
            auVar50._8_4_ = 0xffffffff;
            auVar50._0_8_ = 0xffffffffffffffff;
            auVar50._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar50,auVar52 ^ auVar50);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[0xe] & 1) != 0) {
              puVar22[-0xc] = 1;
            }
            auVar52 = pshufhw(auVar49,auVar49,0x84);
            auVar17._8_4_ = 0xffffffff;
            auVar17._0_8_ = 0xffffffffffffffff;
            auVar17._12_4_ = 0xffffffff;
            auVar52 = packssdw(auVar52 ^ auVar17,auVar52 ^ auVar17);
            auVar52 = packsswb(auVar52,auVar52);
            if ((auVar52[0xf] & 1) != 0) {
              *puVar22 = 1;
            }
            uVar25 = uVar25 + 0x10;
            puVar22 = puVar22 + 0xc0;
          } while ((uVar1 / 0xc + 0x10 & 0xfffffffffffffff0) != uVar25);
        }
        if (((param_1[0x842] != 0) && (0.0 < *(float *)((longlong)param_1 + 0x45e4))) &&
           (0.0 < *(float *)((longlong)param_1 + 0x4254))) {
          dVar3 = (double)param_1[0x25];
          dVar35 = (double)param_1[0x26];
          dVar39 = dVar3 * dVar3 + dVar35 * dVar35;
          fVar44 = (float)SQRT(dVar39);
          fVar2 = *(float *)(param_1 + 0x8bb);
          if (fVar44 <= fVar2) {
            fVar46 = fVar44 / *(float *)((longlong)param_1 + 0x4254);
            fVar18 = 1.0;
            if (fVar46 <= 1.0) {
              fVar18 = fVar46;
            }
            fVar44 = *(float *)((longlong)param_1 + 0x45e4) * fVar18 + fVar44;
            if (fVar2 <= fVar44) {
              fVar44 = fVar2;
            }
            if ((dVar39 != 1.0) || (NAN(dVar39))) {
              dVar37 = DAT_14c8464f0;
              dVar33 = DAT_14c8464e8;
              dVar30 = DAT_14c8464e0;
              if (9.99999993922529e-09 <= dVar39) {
                dVar39 = 1.0 / SQRT(dVar39);
                dVar37 = 0.0;
                dVar33 = dVar35 * dVar39;
                dVar30 = dVar3 * dVar39;
              }
            }
            else {
              dVar37 = (double)(-(ulonglong)((double)param_1[0x27] == 0.0) & param_1[0x27]);
              dVar33 = dVar35;
              dVar30 = dVar3;
            }
            dVar35 = (double)fVar44;
            dVar3 = (double)param_1[0x27];
            dVar40 = DAT_14c8462d0 * dVar3;
            dVar39 = DAT_14c8462c8 * dVar3;
            param_1[0x25] = (longlong)(dVar3 * DAT_14c8462c0 + dVar30 * dVar35);
            param_1[0x26] = (longlong)(dVar39 + dVar33 * dVar35);
            param_1[0x27] = (longlong)(dVar40 + dVar37 * dVar35);
          }
        }
      }
    }
    else if (*(char *)((longlong)param_1 + 0x422c) == '\0') {
      if (*(char *)((longlong)param_1 + 0x42b4) == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x42b4) = 0;
      }
      FUN_140f7f83a(param_1,0);
      FUN_1404f4614(param_1);
      if (*(char *)((longlong)param_1 + 0x4235) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x4235) = 0;
        FUN_145bec7b4(param_1,0);
      }
    }
    if ((cVar4 != *(char *)((longlong)param_1 + 0x422c)) && ((longlong)(int)param_1[0x8cb] != 0)) {
      lVar28 = 0;
      do {
        if ((*(int *)(param_1[0x8ca] + 8 + lVar28) != 0) &&
           (*(longlong *)(param_1[0x8ca] + lVar28) != 0)) {
          FUN_1404f401e(param_1 + 0x8ca,param_1);
          break;
        }
        lVar28 = lVar28 + 0x10;
      } while ((longlong)(int)param_1[0x8cb] * 0x10 != lVar28);
    }
  }
  FUN_1404f11f0(param_1);
  return;
}



// FUNCTION 1404f11f0 FUN_1404f11f0 body=1322 status=ok
// SIG undefined FUN_1404f11f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404f11f0(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  char cVar16;
  longlong lVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar24;
  undefined1 auVar23 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar44 [16];
  
  auVar15 = _DAT_149931e80;
  if (((&DAT_00001100)[param_1] == '\x03') || ((&DAT_00001100)[param_1] == '\x05')) {
    if ((longlong)*(int *)(param_1 + 0x42a0) != 0) {
      lVar21 = *(longlong *)(param_1 + 0x4298);
      lVar20 = (longlong)*(int *)(param_1 + 0x42a0) * 0xc;
      do {
        cVar16 = FUN_144729dda(lVar21);
        if (((cVar16 != '\0') &&
            (lVar17 = FUN_14479d2ce(lVar21), *(char *)(lVar17 + 0x114) == '\x01')) &&
           ((*(char *)(lVar17 + 0x115) != '\x01' || (*(char *)(lVar21 + 8) != '\0')))) {
          if (*(int *)(&DAT_00002bb0 + param_1) != 2) {
            *(undefined4 *)(&DAT_00002bb0 + param_1) = 2;
            FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),10);
          }
          if (*(longlong *)(param_1 + 0x1f0) == 0) {
            return;
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 0x568) =
               *(undefined4 *)(&DAT_00002bb0 + param_1);
          return;
        }
        lVar21 = lVar21 + 0xc;
        lVar20 = lVar20 + -0xc;
      } while (lVar20 != 0);
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x42a0) != 0) {
    uVar1 = (longlong)*(int *)(param_1 + 0x42a0) * 0xc - 0xc;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar1;
    uVar22 = SUB164(auVar25 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
    uVar24 = (undefined4)(uVar1 / 0x180000000);
    auVar26._0_8_ = CONCAT44(uVar24,uVar22);
    auVar26._8_4_ = uVar22;
    auVar26._12_4_ = uVar24;
    auVar23._0_8_ = auVar26._0_8_ >> 3;
    auVar23._8_8_ = auVar26._8_8_ >> 3;
    puVar18 = (undefined1 *)(*(longlong *)(param_1 + 0x4298) + 0xbc);
    uVar19 = 0;
    auVar25 = pmovsxbq(in_XMM1,0xf0e);
    auVar26 = pmovsxbq(in_XMM2,0xd0c);
    auVar27 = pmovsxbq(in_XMM3,0xb0a);
    auVar28 = pmovsxbq(in_XMM4,0x908);
    auVar29 = pmovsxbq(in_XMM5,0x706);
    auVar30 = pmovsxbq(unaff_XMM6,0x504);
    auVar31 = pmovsxbq(unaff_XMM7,0x302);
    auVar32 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar33._8_4_ = (int)uVar19;
      auVar33._0_8_ = uVar19;
      auVar33._12_4_ = (int)(uVar19 >> 0x20);
      auVar35 = auVar23 | auVar15;
      auVar36 = (auVar33 | auVar32) ^ auVar15;
      lVar21 = auVar35._0_8_;
      auVar37._0_8_ = -(ulonglong)(lVar21 < auVar36._0_8_);
      lVar20 = auVar35._8_8_;
      auVar37._8_8_ = -(ulonglong)(lVar20 < auVar36._8_8_);
      auVar44 = pshuflw(unaff_XMM14,auVar37,0xe8);
      auVar36._8_4_ = 0xffffffff;
      auVar36._0_8_ = 0xffffffffffffffff;
      auVar36._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar44 ^ auVar36,auVar44 ^ auVar36);
      if ((auVar36._0_4_ & 1) != 0) {
        puVar18[-0xb4] = 0;
      }
      auVar37 = packssdw(auVar37,auVar37);
      auVar44._8_4_ = 0xffffffff;
      auVar44._0_8_ = 0xffffffffffffffff;
      auVar44._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar44,auVar37 ^ auVar44);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[1] & 1) != 0) {
        puVar18[-0xa8] = 0;
      }
      auVar37 = (auVar33 | auVar31) ^ auVar15;
      auVar38._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar38);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar2,auVar36 ^ auVar2);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[2] & 1) != 0) {
        puVar18[-0x9c] = 0;
      }
      auVar37 = pshufhw(auVar38,auVar38,0x84);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar3,auVar37 ^ auVar3);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[3] & 1) != 0) {
        puVar18[-0x90] = 0;
      }
      auVar37 = (auVar33 | auVar30) ^ auVar15;
      auVar39._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar39,0xe8);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar4,auVar36 ^ auVar4);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[4] & 1) != 0) {
        puVar18[-0x84] = 0;
      }
      auVar37 = packssdw(auVar39,auVar39);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar5,auVar37 ^ auVar5);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[5] & 1) != 0) {
        puVar18[-0x78] = 0;
      }
      auVar37 = (auVar33 | auVar29) ^ auVar15;
      auVar40._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar40);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar6,auVar36 ^ auVar6);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[6] & 1) != 0) {
        puVar18[-0x6c] = 0;
      }
      auVar37 = pshufhw(auVar40,auVar40,0x84);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar7,auVar37 ^ auVar7);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[7] & 1) != 0) {
        puVar18[-0x60] = 0;
      }
      auVar37 = (auVar33 | auVar28) ^ auVar15;
      auVar41._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar41,0xe8);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar8,auVar36 ^ auVar8);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[8] & 1) != 0) {
        puVar18[-0x54] = 0;
      }
      auVar37 = packssdw(auVar41,auVar41);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar9,auVar37 ^ auVar9);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[9] & 1) != 0) {
        puVar18[-0x48] = 0;
      }
      auVar37 = (auVar33 | auVar27) ^ auVar15;
      auVar42._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
      auVar42._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = packssdw(auVar36,auVar42);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar10,auVar36 ^ auVar10);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[10] & 1) != 0) {
        puVar18[-0x3c] = 0;
      }
      auVar37 = pshufhw(auVar42,auVar42,0x84);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar37 = packssdw(auVar37 ^ auVar11,auVar37 ^ auVar11);
      auVar37 = packsswb(auVar37,auVar37);
      if ((auVar37[0xb] & 1) != 0) {
        puVar18[-0x30] = 0;
      }
      auVar37 = (auVar33 | auVar26) ^ auVar15;
      auVar43._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
      auVar43._8_8_ = -(ulonglong)(lVar20 < auVar37._8_8_);
      auVar36 = pshuflw(auVar36,auVar43,0xe8);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar12,auVar36 ^ auVar12);
      unaff_XMM14 = packsswb(auVar36,auVar36);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar18[-0x24] = 0;
      }
      auVar36 = packssdw(auVar43,auVar43);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar13,auVar36 ^ auVar13);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xd] & 1) != 0) {
        puVar18[-0x18] = 0;
      }
      auVar36 = (auVar33 | auVar25) ^ auVar15;
      auVar34._0_8_ = -(ulonglong)(lVar21 < auVar36._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar20 < auVar36._8_8_);
      auVar36 = packssdw(auVar35,auVar34);
      auVar35._8_4_ = 0xffffffff;
      auVar35._0_8_ = 0xffffffffffffffff;
      auVar35._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar35,auVar36 ^ auVar35);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xe] & 1) != 0) {
        puVar18[-0xc] = 0;
      }
      auVar36 = pshufhw(auVar34,auVar34,0x84);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar36 = packssdw(auVar36 ^ auVar14,auVar36 ^ auVar14);
      auVar36 = packsswb(auVar36,auVar36);
      if ((auVar36[0xf] & 1) != 0) {
        *puVar18 = 0;
      }
      uVar19 = uVar19 + 0x10;
      puVar18 = puVar18 + 0xc0;
    } while ((uVar1 / 0xc + 0x10 & 0xfffffffffffffff0) != uVar19);
  }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  return;
}



// FUNCTION 1404f171a FUN_1404f171a body=2708 status=ok
// SIG undefined FUN_1404f171a(void)

void FUN_1404f171a(longlong *param_1,float param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  char *pcVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  longlong *plVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  float fVar29;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar5 = (**(code **)(*param_1 + 0x600))();
  if (cVar5 == '\0') goto LAB_1404f185e;
  plVar15 = (longlong *)param_1[0x83c];
  if (((plVar15 != (longlong *)0x0) && (param_1[0x3e] != 0)) &&
     ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) == 0)) {
    plVar19 = plVar15 + 0x18;
    uVar26 = 0;
    FUN_1404f22a0(plVar19);
    iVar13 = (int)plVar15[0xb];
    if (0 < iVar13) {
      plVar22 = plVar15 + 0x1a;
      plVar23 = plVar15 + 0x1f;
      do {
        plVar25 = (longlong *)(longlong)(int)uVar26;
        uVar27 = *(ulonglong *)(plVar15[10] + (longlong)plVar25 * 8);
        iVar12 = (int)(uVar27 >> 0x20);
        if ((int)plVar15[1] != *(int *)((longlong)plVar15 + 0x34)) {
          plVar9 = plVar15 + 7;
          if ((longlong *)plVar15[8] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar15[8];
          }
          iVar28 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)plVar15[9] - 1U & (int)uVar27 + iVar12 * 0x17) * 4);
          if (iVar28 != -1) {
            do {
              puVar20 = (ulonglong *)(*plVar15 + (longlong)iVar28 * 0x18);
              if (*puVar20 == uVar27) goto LAB_1404f1b4d;
              iVar28 = (int)puVar20[2];
            } while (iVar28 != -1);
          }
        }
        puVar20 = (ulonglong *)0x0;
LAB_1404f1b4d:
        plVar9 = (longlong *)puVar20[1];
        if ((char)*plVar9 == '\x04') {
          if (~uVar26 + iVar13 != 0) {
            _Dst = (void *)(plVar15[10] + (longlong)plVar25 * 8);
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar26 + iVar13) << 3);
            iVar13 = (int)plVar15[0xb];
          }
          *(int *)(plVar15 + 0xb) = iVar13 + -1;
          uVar26 = uVar26 - 1;
          local_90 = uVar27;
          FUN_1412c30d4(plVar15);
        }
        else {
          local_b0 = plVar9;
          local_a0 = plVar25;
          if (*(int *)((longlong)plVar15 + 0xf4) == 0) {
            iVar13 = (int)plVar15[0x19];
            *(int *)(plVar15 + 0x19) = iVar13 + 1;
            if (*(int *)((longlong)plVar15 + 0xcc) == iVar13) {
              FUN_14482b872(plVar19,iVar13);
            }
            iVar28 = (int)plVar15[0x1d];
            if (iVar28 == 0) {
              iVar6 = -1;
            }
            else {
              iVar6 = iVar28 + 0x1e;
              if (-1 < iVar28 + -1) {
                iVar6 = iVar28 + -1;
              }
              iVar6 = iVar6 >> 5;
            }
            iVar14 = iVar28 + 1;
            iVar24 = iVar28 + 0x1f;
            if (-1 < iVar28) {
              iVar24 = iVar28;
            }
            if (iVar24 >> 5 == iVar6) {
              *(int *)(plVar15 + 0x1d) = iVar14;
            }
            else {
              if (*(int *)((longlong)plVar15 + 0xec) <= iVar28) {
                uVar17 = iVar28 + 0x20;
                local_b8 = (ulonglong)uVar17;
                local_a8 = plVar22;
                local_98 = plVar23;
                if (uVar17 < 0xa0) {
                  iVar14 = 0x80;
                  iVar6 = iVar28;
                }
                else {
                  uVar17 = uVar17 >> 5;
                  local_b8 = (ulonglong)uVar17;
                  if (*(int *)((longlong)plVar15 + 0xec) + 0x1fU < 0xa0) {
                    uVar18 = 4;
                    if (4 < uVar17) {
                      uVar18 = uVar17;
                    }
                  }
                  else {
                    uVar18 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
                  }
                  uVar16 = FUN_144a3809e(uVar18 << 2,0);
                  iVar6 = (int)(uVar16 >> 2);
                  iVar14 = -0x20;
                  if ((int)local_b8 <= iVar6) {
                    iVar14 = iVar6 << 5;
                  }
                  iVar6 = (int)plVar15[0x1d];
                }
                *(int *)((longlong)plVar15 + 0xec) = iVar14;
                FUN_1446efbd8(local_a8,iVar6);
                iVar14 = (int)plVar15[0x1d] + 1;
                plVar22 = local_a8;
                plVar23 = local_98;
              }
              iVar6 = iVar14 + 0x1f;
              if (-1 < iVar14) {
                iVar6 = iVar14;
              }
              *(int *)(plVar15 + 0x1d) = iVar14;
              if (iVar14 % 0x20 != 0) {
                plVar25 = (longlong *)plVar15[0x1c];
                if ((longlong *)plVar15[0x1c] == (longlong *)0x0) {
                  plVar25 = plVar22;
                }
                bVar11 = -(char)(iVar14 % 0x20);
                *(uint *)((longlong)plVar25 + (longlong)(iVar6 >> 5) * 4) =
                     (uint)(*(int *)((longlong)plVar25 + (longlong)(iVar6 >> 5) * 4) <<
                           (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
              }
            }
            lVar8 = (longlong)iVar13;
            plVar25 = (longlong *)plVar15[0x1c];
            if ((longlong *)plVar15[0x1c] == (longlong *)0x0) {
              plVar25 = plVar22;
            }
            bVar11 = (byte)iVar28 & 0x1f;
            puVar1 = (uint *)((longlong)plVar25 + (longlong)(iVar24 >> 5) * 4);
            *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
          }
          else {
            iVar13 = (int)plVar15[0x1e];
            lVar8 = (longlong)iVar13;
            iVar28 = *(int *)(plVar15[0x18] + 4 + lVar8 * 0x18);
            *(int *)(plVar15 + 0x1e) = iVar28;
            iVar6 = *(int *)((longlong)plVar15 + 0xf4) + -1;
            *(int *)((longlong)plVar15 + 0xf4) = iVar6;
            if (iVar6 != 0) {
              *(undefined4 *)(plVar15[0x18] + (longlong)iVar28 * 0x18) = 0xffffffff;
            }
          }
          plVar25 = local_b0;
          plVar9 = (longlong *)plVar15[0x1c];
          if ((longlong *)plVar15[0x1c] == (longlong *)0x0) {
            plVar9 = plVar22;
          }
          iVar28 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar28 = iVar13;
          }
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar28 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
          puVar20 = (ulonglong *)(plVar15[0x18] + lVar8 * 0x18);
          *puVar20 = uVar27;
          *(undefined4 *)(puVar20 + 1) = *(undefined4 *)((longlong)local_b0 + 4);
          *(undefined4 *)(puVar20 + 2) = 0xffffffff;
          uVar17 = iVar12 * 0x17 + (int)uVar27;
          uVar18 = (int)plVar15[0x19] - *(int *)((longlong)plVar15 + 0xf4);
          if (1 < uVar18) {
            plVar9 = (longlong *)plVar15[0x20];
            if ((longlong *)plVar15[0x20] == (longlong *)0x0) {
              plVar9 = plVar23;
            }
            iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar15[0x21] - 1U & uVar17) * 4);
            if (iVar12 != -1) {
              do {
                puVar2 = (ulonglong *)(*plVar19 + (longlong)iVar12 * 0x18);
                if (*puVar2 == uVar27) {
                  uVar3 = *(undefined4 *)((longlong)puVar20 + 4);
                  uVar16 = puVar20[1];
                  uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
                  *(int *)puVar2 = (int)*puVar20;
                  *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
                  *(int *)(puVar2 + 1) = (int)uVar16;
                  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
                  FUN_1488136c0(plVar19);
                  goto LAB_1404f1cfd;
                }
                iVar12 = (int)puVar2[2];
              } while (iVar12 != -1);
            }
          }
          iVar12 = 1;
          if (3 < uVar18) {
            uVar16 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
            lVar8 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar12 = 1 << ((byte)lVar8 & 0x1f);
          }
          if (((int)uVar18 < 1) || (iVar12 <= (int)plVar15[0x21])) {
            uVar17 = (int)plVar15[0x21] - 1U & uVar17;
            *(uint *)((longlong)puVar20 + 0x14) = uVar17;
            plVar9 = (longlong *)plVar15[0x20];
            if ((longlong *)plVar15[0x20] == (longlong *)0x0) {
              plVar9 = plVar23;
            }
            *(undefined4 *)(puVar20 + 2) =
                 *(undefined4 *)
                  ((longlong)plVar9 +
                  ((longlong)(int)plVar15[0x21] - 1U & (longlong)(int)uVar17) * 4);
            plVar9 = (longlong *)plVar15[0x20];
            if ((longlong *)plVar15[0x20] == (longlong *)0x0) {
              plVar9 = plVar23;
            }
            *(int *)((longlong)plVar9 +
                    ((longlong)(int)plVar15[0x21] - 1U & (longlong)(int)uVar17) * 4) = iVar13;
          }
          else {
            *(int *)(plVar15 + 0x21) = iVar12;
            FUN_1404fa580(plVar19);
          }
LAB_1404f1cfd:
          fVar29 = *(float *)((longlong)plVar25 + 4) - param_2;
          *(float *)((longlong)plVar25 + 4) = fVar29;
          if (fVar29 <= 0.0) {
            *(int *)(plVar15 + 0x17) = (int)plVar15[0x17] + 1;
            iVar13 = (int)plVar15[0xb];
            if (~uVar26 + iVar13 != 0) {
              memmove((void *)(plVar15[10] + (longlong)local_a0 * 8),
                      (void *)(plVar15[10] + (longlong)local_a0 * 8 + 8),
                      (longlong)(int)(~uVar26 + iVar13) << 3);
              iVar13 = (int)plVar15[0xb];
            }
            *(int *)(plVar15 + 0xb) = iVar13 + -1;
            plVar15[0x16] = uVar27;
            uVar26 = uVar26 - 1;
            *(char *)local_b0 = '\x03';
            FUN_1404fa942(local_b0 + 2);
            pcVar10 = (char *)FUN_1412c2f92(plVar15);
            if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\x03')) {
              local_90 = plVar15[0x16];
              FUN_1412c30d4(plVar15);
              plVar15[0x16] = 0;
            }
          }
        }
        uVar26 = uVar26 + 1;
        iVar13 = (int)plVar15[0xb];
      } while ((int)uVar26 < iVar13);
    }
    if (*(int *)((longlong)plVar15 + 0x94) < (int)plVar15[0xd]) {
      local_b0 = plVar15 + 0xe;
      local_90 = 0x100000000;
      local_80 = 0xffffffff;
      local_78 = 0;
      local_88 = local_b0;
      if ((int)plVar15[0x11] == 0) {
        uVar27 = 1;
        local_80._0_4_ = 0xffffffff;
        iVar13 = 0;
        local_80._4_4_ = 0;
        local_90._0_4_ = 0;
      }
      else {
        FUN_1449c0562(&local_90);
        uVar27 = local_90 >> 0x20;
        iVar13 = (int)plVar15[0x11];
      }
      local_98 = plVar15 + 0xc;
      local_b8 = CONCAT44(local_b8._4_4_,iVar13);
      local_a8 = local_88;
      if (local_80._4_4_ != iVar13 || local_88 != local_b0) {
        local_a0 = plVar15 + 10;
        iVar13 = (int)local_90;
        uVar26 = (uint)local_80;
        iVar12 = local_80._4_4_;
        iVar28 = local_78;
        do {
          uVar16 = *(ulonglong *)(plVar15[0xc] + (longlong)iVar12 * 0x10);
          local_90 = uVar16;
          puVar7 = (undefined1 *)FUN_1404f45ac(plVar15,&local_90);
          *puVar7 = 1;
          iVar12 = (int)plVar15[0xb];
          *(uint *)(plVar15 + 0xb) = iVar12 + 1U;
          if (*(uint *)((longlong)plVar15 + 0x5c) < iVar12 + 1U) {
            FUN_140279b48(local_a0,iVar12);
          }
          *(ulonglong *)(*local_a0 + (longlong)iVar12 * 8) = uVar16;
          uVar26 = uVar26 & ~(uint)uVar27;
          plVar19 = (longlong *)local_a8[2];
          if ((longlong *)local_a8[2] == (longlong *)0x0) {
            plVar19 = local_a8;
          }
          iVar6 = (int)local_a8[3];
          lVar8 = (longlong)iVar13;
          uVar17 = *(uint *)((longlong)plVar19 + lVar8 * 4) & uVar26;
          if (uVar17 == 0) {
            iVar12 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar12 = iVar6 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar14 = iVar12;
            if (iVar12 < iVar13) {
              iVar14 = iVar13;
            }
            if (iVar13 < iVar12) {
              lVar21 = 0;
              do {
                uVar17 = *(uint *)((longlong)plVar19 + lVar21 * 4 + lVar8 * 4 + 4);
                if (uVar17 != 0) {
                  iVar13 = iVar13 + (int)lVar21 + 1;
                  uVar26 = 0xffffffff;
                  goto LAB_1404f1a2d;
                }
                iVar28 = iVar28 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar14 - lVar8 != lVar21);
              uVar26 = 0xffffffff;
              iVar13 = iVar14;
            }
            iVar13 = iVar13 + 1;
            iVar12 = iVar6;
          }
          else {
LAB_1404f1a2d:
            uVar27 = (ulonglong)(-uVar17 & uVar17);
            uVar16 = uVar27 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar12 = (iVar28 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if (iVar6 <= iVar12) {
              iVar12 = iVar6;
            }
          }
        } while (iVar12 != (int)local_b8 || local_a8 != local_b0);
      }
      FUN_14571cb72(local_98);
    }
  }
  (**(code **)(*param_1 + 0xe80))(param_1,param_2,0);
  if ((char)param_1[0x6a7] == '\x01') {
    if ((char)param_1[0x6a4] == '\x01') {
      FUN_1449db362(param_1 + 0x6a2);
      *(undefined1 *)(param_1 + 0x6a4) = 0;
    }
    *(undefined1 *)(param_1 + 0x6a7) = 0;
  }
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] == '\x01') {
      plVar15 = param_1 + 0x642;
      goto LAB_1404f1a81;
    }
  }
  else {
    plVar15 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_1404f1a81:
    lVar8 = FUN_140153468(plVar15);
    if (((lVar8 != 0) && ((*(byte *)(plVar15 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_1404f17ac;
        plVar15 = param_1 + 0x642;
      }
      else {
        plVar15 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      FUN_1404f4fe8(plVar15);
    }
  }
LAB_1404f17ac:
  if ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) == 0) {
    if ((*(char *)((longlong)param_1 + 0x411c) == '\x01') &&
       (fVar29 = *(float *)(param_1 + 0x823), *(float *)(param_1 + 0x823) = fVar29 - param_2,
       fVar29 - param_2 <= 0.0)) {
      *(undefined1 *)((longlong)param_1 + 0x411c) = 0;
    }
    bVar11 = *(byte *)(param_1 + 0x3e3);
    if ((bVar11 & 8) == 0) {
      if (((((bVar11 & 1) != 0) && (param_1[0x15] != 0)) && (1 < *(byte *)(param_1[0x15] + 0x178)))
         && (fVar29 = *(float *)(param_1 + 0x3e9), *(float *)(param_1 + 0x3e9) = fVar29 + param_2,
            *(float *)((longlong)param_1 + 0x1f4c) <= fVar29 + param_2)) {
        FUN_1404fab38(param_1 + 0x3e1);
      }
    }
    else {
      *(byte *)(param_1 + 0x3e3) = bVar11 & 0xf7;
      if (((longlong *)param_1[0x39d] != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))(), cVar5 != '\0')) {
        FUN_14571cbb6(param_1 + 0x3e1);
      }
    }
    plVar15 = (longlong *)param_1[0x3d7];
    if (((plVar15 != (longlong *)0x0) && (param_1[0x15] != 0)) &&
       ((1 < *(byte *)(param_1[0x15] + 0x178) &&
        ((0.0001 < *(float *)(param_1 + 0x3f) && ((char)param_1[0x52] == '\0')))))) {
      (**(code **)(*plVar15 + 0x28))(plVar15,param_2);
    }
    FUN_1404f2388(param_1);
  }
  FUN_1404f27d8(param_1);
  FUN_1404f2dde(param_1,param_2);
  (**(code **)(*param_1 + 0xe48))(param_1);
  if (((char)param_1[0x5f9] == '\x01') && (*(float *)((longlong)param_1 + 0x2fcc) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
  }
LAB_1404f185e:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404f21d8 FUN_1404f21d8 body=200 status=ok
// SIG undefined FUN_1404f21d8(void)

void FUN_1404f21d8(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < (longlong)(int)param_1[0x631]) {
    lVar4 = param_1[0x630] + 8;
    lVar5 = (longlong)(int)param_1[0x631] * 0x50;
    do {
      if ((*(int *)(lVar4 + -4) == 0) || (uVar1 = *(uint *)(lVar4 + -8), (int)uVar1 < 0)) {
LAB_1404f229c:
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 2) != *(int *)(lVar4 + -4))) ||
             ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)) goto LAB_1404f229c;
          uVar2 = *puVar3;
        }
      }
      (**(code **)(*param_1 + 0xe30))(param_1,uVar2,lVar4);
      lVar4 = lVar4 + 0x50;
      lVar5 = lVar5 + -0x50;
    } while (lVar5 != 0);
    *(undefined4 *)(param_1 + 0x631) = 0;
    if (*(int *)((longlong)param_1 + 0x318c) != 0) {
      FUN_1404f3fee(param_1 + 0x630);
      return;
    }
  }
  return;
}



// FUNCTION 1404f22a0 FUN_1404f22a0 body=107 status=ok
// SIG undefined FUN_1404f22a0(void)

void FUN_1404f22a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1404f22ef:
      FUN_1404f230c(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1404fa580(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1404f22ef;
  FUN_1404f2a3c(param_1);
  FUN_1404f230c(param_1,param_2);
  return;
}



// FUNCTION 1404f230c FUN_1404f230c body=123 status=ok
// SIG undefined FUN_1404f230c(void)

void FUN_1404f230c(longlong param_1,int param_2)

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



// FUNCTION 1404f2388 FUN_1404f2388 body=357 status=ok
// SIG undefined FUN_1404f2388(void)

void FUN_1404f2388(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0xe78))(param_1,8);
  if (((cVar1 != '\0') && ((longlong *)param_1[0x39d] != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))(), cVar1 != '\0')) {
    if (((param_1[0x3a4] != 0) && (param_1[0x3a5] != 0)) &&
       ((lVar3 = param_1[0x16], lVar3 != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
      if (param_1[0x3a7] == 0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = *(float *)(param_1[0x3a7] + 0x28);
      }
      if ((double)(fVar4 + *(float *)(param_1 + 0x3a6)) < *(double *)(lVar3 + 0x6d0)) {
        param_1[0x3a4] = 0;
        param_1[0x3a5] = 0;
      }
    }
    if (((char)param_1[0x220] == '\n') && (param_1[0x22] != 0)) {
      *(byte *)((longlong)param_1 + 0x1d34) = *(byte *)((longlong)param_1 + 0x1d34) | 2;
    }
    else {
      lVar3 = param_1[0x3a2];
      if ((lVar3 != 0) && (lVar2 = param_1[0x3a3], lVar2 != 0)) {
        local_20 = lVar3;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
          lVar2 = param_1[0x3a3];
        }
        local_18 = lVar2;
        cVar1 = (**(code **)(*param_1 + 0xd48))(param_1);
        *(byte *)((longlong)param_1 + 0x1d34) =
             *(byte *)((longlong)param_1 + 0x1d34) & 0xfd | cVar1 * '\x02';
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404f24ee FUN_1404f24ee body=745 status=ok
// SIG undefined FUN_1404f24ee(void)

void FUN_1404f24ee(longlong *param_1,undefined4 param_2,char param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  undefined *puVar7;
  uint *puVar8;
  longlong *plVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  
  uVar11 = *(uint *)(param_1 + 0x6d5);
  bVar6 = (byte)(uVar11 & 1);
  if ((uVar11 & 1) == 0 || param_3 != '\0') {
    bVar10 = bVar6 ^ 1;
  }
  else {
    bVar10 = (**(code **)(*param_1 + 0xe88))(param_1);
    uVar11 = *(uint *)(param_1 + 0x6d5);
    bVar6 = (byte)(uVar11 & 1);
    if (bVar10 == 2 && (uVar11 & 1) != 0) {
      bVar10 = 2;
      if ((longlong *)param_1[0x39d] == (longlong *)0x0) {
        bVar6 = 1;
      }
      else {
        cVar2 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))();
        uVar11 = *(uint *)(param_1 + 0x6d5) & 0xfffffffe;
        if (cVar2 == '\0') {
          uVar11 = *(uint *)(param_1 + 0x6d5);
        }
        bVar6 = (byte)uVar11 & 1;
      }
    }
  }
  bVar6 = bVar10 == 0 & bVar6;
  uVar3 = (uVar11 & 0xfffffffb) + (uint)bVar6 * 4;
  *(uint *)(param_1 + 0x6d5) = uVar3;
  uVar11 = uVar11 >> 2 & 1;
  if (bVar6 != uVar11) {
    if ((char)param_1[0x274] == '\0') {
      uVar4 = FUN_144836af6(param_1 + 0x251);
      FUN_1448367ba(param_1 + 0x251,uVar4);
    }
    if ((((char)param_1[0x27d] == '\x01') && (4 < DAT_14c872be0 - param_1[0x27c])) &&
       ((param_1[0x27b] + 4U <= DAT_14c872be0 || ((char)param_1[0x27a] == '\0')))) {
      FUN_14012b994();
    }
    uVar3 = *(uint *)(param_1 + 0x6d5);
    if ((uVar3 & 4) != 0) {
      uVar12 = (**(code **)(*param_1 + 0x718))(param_1);
      (**(code **)(*param_1 + 0x6f0))
                (param_1,param_2,*(undefined4 *)((longlong)param_1 + 0x294),0,uVar12);
      uVar3 = *(uint *)(param_1 + 0x6d5);
    }
  }
  if ((((uVar3 & 4) != 0) && ((longlong *)param_1[0x39d] != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))(), cVar2 != '\0')) {
    *(byte *)(param_1 + 0x6d5) = *(byte *)(param_1 + 0x6d5) & 0xfd;
  }
  if (((param_1[0x3e] != 0) && ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) == 0)) &&
     ((*(uint *)(param_1 + 0x6d5) >> 2 & 1) != uVar11)) {
    uVar1 = param_1[7];
    if (uVar1 < 0xffffffff00000000) {
      plVar9 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar9 = (longlong *)0x0;
      }
      (**(code **)(*plVar9 + 0x58))(plVar9,param_1,uVar1,0xf);
    }
    else {
      uVar11 = (uint)uVar1;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
        puVar7 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar7 = DAT_14c998080;
        }
        if ((*(uint *)(puVar7 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          lVar5 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
          puVar8 = *(uint **)(lVar5 + 0x18);
          if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
            puVar8 = (uint *)(lVar5 + 8);
          }
          *puVar8 = *puVar8 | 0x8000;
          *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
        }
      }
    }
    if ((*(byte *)(param_1 + 0x6d5) & 4) == 0) {
      FUN_1404f454a(param_1);
    }
    else {
      FUN_1404f4446(param_1);
    }
  }
  if ((((*(byte *)(param_1 + 0x6d5) & 4) != 0) && (param_1[0x39e] != 0)) &&
     (*(char *)(param_1[0x39e] + 0x24c) == '\x01')) {
    *(undefined4 *)(param_1 + 0x86) = 0x3f800000;
  }
  return;
}



// FUNCTION 1404f27d8 FUN_1404f27d8 body=610 status=ok
// SIG undefined FUN_1404f27d8(void)

void FUN_1404f27d8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  char cVar17;
  char cVar18;
  longlong *plVar19;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)((longlong)param_1 + 0x1d34) & 2) == 0) goto LAB_1404f27f6;
  cVar17 = (**(code **)(*param_1 + 0xd58))();
  if (((cVar17 == '\0') || (param_1[0x3a2] == 0)) || ((longlong *)param_1[0x3a3] == (longlong *)0x0)
     ) goto LAB_1404f27f6;
  cVar17 = (**(code **)(*(longlong *)param_1[0x3a3] + 0x20))();
  if (((cVar17 == '\0') || (param_1[0x39d] == 0)) ||
     (((char)param_1[0x220] == '\n' && (param_1[0x22] != 0)))) goto LAB_1404f27f6;
  if (param_1[0x3a2] == 0) {
    plVar19 = (longlong *)0x0;
  }
  else {
    plVar19 = (longlong *)param_1[0x3a3];
  }
  cVar17 = (**(code **)(*plVar19 + 0x70))(plVar19,param_1);
  if (cVar17 == '\0') {
    cVar18 = '\x01';
    cVar17 = '\0';
  }
  else {
    if (param_1[0x3a2] == 0) {
      plVar19 = (longlong *)0x0;
    }
    else {
      plVar19 = (longlong *)param_1[0x3a3];
    }
    cVar17 = (**(code **)(*plVar19 + 0x58))();
    cVar18 = cVar17 * '\x02' + '\x01';
  }
  *(char *)(param_1 + 0x3a8) = cVar18;
  *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xdf;
  if ((*(byte *)(param_1[0x39d] + 0x550) & 2) != 0) {
    (**(code **)(*param_1 + 0x7f0))(param_1,0);
  }
  if (cVar17 != '\0') {
    if (param_1[0x3a2] == 0) {
      plVar19 = (longlong *)0x0;
    }
    else {
      plVar19 = (longlong *)param_1[0x3a3];
    }
    (**(code **)(*plVar19 + 0x90))(plVar19,&local_30,param_1);
    if ((((double)CONCAT44(uStack_2c,local_30) == 0.0) &&
        (!NAN((double)CONCAT44(uStack_2c,local_30)))) &&
       (((double)CONCAT44(uStack_24,uStack_28) == 0.0 &&
        (!NAN((double)CONCAT44(uStack_24,uStack_28)))))) {
      if ((local_20 == 0.0) && (!NAN(local_20))) goto LAB_1404f29ec;
    }
    lVar1 = param_1[0x22];
    if (lVar1 != 0) {
      lVar12 = *(longlong *)(lVar1 + 0x248);
      lVar2 = *(longlong *)(lVar1 + 0x250);
      lVar3 = *(longlong *)(lVar1 + 600);
      uVar4 = *(undefined4 *)(lVar1 + 0x260);
      uVar5 = *(undefined4 *)(lVar1 + 0x264);
      uVar6 = *(undefined4 *)(lVar1 + 0x268);
      uVar7 = *(undefined4 *)(lVar1 + 0x26c);
      uVar8 = *(undefined4 *)(lVar1 + 0x270);
      uVar9 = *(undefined4 *)(lVar1 + 0x274);
      uVar10 = *(undefined4 *)(lVar1 + 0x278);
      uVar11 = *(undefined4 *)(lVar1 + 0x27c);
      lVar13 = *(longlong *)(lVar1 + 0x280);
      lVar14 = *(longlong *)(lVar1 + 0x288);
      lVar15 = *(longlong *)(lVar1 + 0x290);
      lVar16 = *(longlong *)(lVar1 + 0x298);
      param_1[0x3aa] = *(longlong *)(lVar1 + 0x240);
      param_1[0x3ab] = lVar12;
      param_1[0x3ac] = lVar2;
      param_1[0x3ad] = lVar3;
      *(undefined4 *)(param_1 + 0x3ae) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x1d74) = uVar5;
      *(undefined4 *)(param_1 + 0x3af) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x1d7c) = uVar7;
      *(undefined4 *)(param_1 + 0x3b0) = uVar8;
      *(undefined4 *)((longlong)param_1 + 0x1d84) = uVar9;
      *(undefined4 *)(param_1 + 0x3b1) = uVar10;
      *(undefined4 *)((longlong)param_1 + 0x1d8c) = uVar11;
      param_1[0x3b2] = lVar13;
      param_1[0x3b3] = lVar14;
      param_1[0x3b4] = lVar15;
      param_1[0x3b5] = lVar16;
      local_38 = local_20;
      local_48 = local_30;
      uStack_44 = uStack_2c;
      uStack_40 = uStack_28;
      uStack_3c = uStack_24;
      local_58 = 1;
      FUN_140d93b16(lVar1,&local_48,0,0);
      *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) | 0x20;
      uVar6 = DAT_14c8464e8._4_4_;
      uVar5 = (undefined4)DAT_14c8464e8;
      uVar4 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_1 + 300) = uVar4;
      *(undefined4 *)(param_1 + 0x26) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar6;
      param_1[0x27] = DAT_14c8464f0;
    }
  }
LAB_1404f29ec:
  FUN_140257a06(param_1,&DAT_14cb75f24,10);
  FUN_141874722(param_1,0);
  if ((longlong *)param_1[0x3d7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3d7] + 0x88))();
  }
LAB_1404f27f6:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404f2a3c FUN_1404f2a3c body=325 status=ok
// SIG undefined FUN_1404f2a3c(void)

void FUN_1404f2a3c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1404f2b82 FUN_1404f2b82 body=218 status=ok
// SIG undefined FUN_1404f2b82(void)

ulonglong FUN_1404f2b82(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  
  cVar2 = (**(code **)(*param_1 + 0xe78))(param_1,2);
  uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar3 = CONCAT71(uVar4,2);
  if ((cVar2 != '\0') && ((char)param_1[0x6c7] == '\0')) {
    plVar1 = param_1 + 0x2f;
    cVar2 = (**(code **)(param_1[0x2f] + 0xe0))(plVar1);
    if ((cVar2 != '\0') || (cVar2 = (**(code **)(*param_1 + 0xe90))(param_1), cVar2 == '\0')) {
      cVar2 = (**(code **)(*plVar1 + 0xd0))(plVar1);
      if (cVar2 == '\0') {
        cVar2 = FUN_1404f2c5c(param_1);
        if (cVar2 == '\0') {
          uVar3 = (ulonglong)(byte)(((*(byte *)(param_1 + 0x6d5) & 2) == 0) + 1);
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1);
          uVar3 = CONCAT71(uVar4,1);
          if ((cVar2 == '\0') && ((char)param_1[0x6cc] == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001404f2c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(*(longlong *)param_1[0x39d] + 0x960))();
            return uVar3;
          }
        }
      }
      else {
        uVar3 = CONCAT71(uVar4,'\x02' - ((*(byte *)((longlong)param_1 + 0x5b5) & 0x20) == 0));
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1404f2c5c FUN_1404f2c5c body=384 status=ok
// SIG undefined FUN_1404f2c5c(void)

bool FUN_1404f2c5c(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  double dVar7;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x388))) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x390)))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x398)))) &&
     (lVar4 = *(longlong *)(param_1 + 0x1cf0), lVar4 != 0)) {
    if (*(float *)(lVar4 + 0x248) < *(float *)(param_1 + 0x430) ||
        *(float *)(lVar4 + 0x248) == *(float *)(param_1 + 0x430)) {
      fVar6 = cosf((*(float *)(lVar4 + 0x244) * 3.1415927) / 180.0);
      FUN_14023d054(*(undefined8 *)(&DAT_00001ce8 + param_1),&local_b8);
      dVar1 = *(double *)(param_1 + 0x388);
      dVar2 = *(double *)(param_1 + 0x390);
      dVar3 = *(double *)(param_1 + 0x398);
      dVar7 = 1.0 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
      bVar5 = (double)fVar6 <=
              dVar3 * dVar7 * local_a8 + dVar7 * dVar1 * local_b8 + dVar2 * dVar7 * local_b0;
      goto LAB_1404f2d79;
    }
  }
  bVar5 = false;
LAB_1404f2d79:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404f2dde FUN_1404f2dde body=4480 status=ok
// SIG undefined FUN_1404f2dde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404f2dde(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  char cVar20;
  byte bVar21;
  undefined4 uVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  undefined8 uVar30;
  undefined1 (*pauVar31) [16];
  undefined8 *puVar32;
  longlong lVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_7d8 [32];
  undefined1 (*local_7b8) [16];
  undefined1 *local_7b0;
  undefined4 local_7a8;
  undefined8 local_7a0;
  wchar_t *local_798;
  code *local_790;
  undefined1 *local_788;
  code **local_780;
  code *local_778;
  code *local_770;
  undefined1 local_768 [16];
  double local_758;
  double dStack_750;
  undefined1 local_748 [16];
  undefined1 local_738 [16];
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 local_6d8;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  code *local_6a8 [125];
  longlong local_2c0;
  longlong local_b0;
  byte local_a0;
  ulonglong local_90;
  
  fVar35 = (float)param_2;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_7d8;
  lVar24 = *(longlong *)param_1[0xb];
  if ((lVar24 == 0) &&
     (((*(longlong *)(param_1[10] + 8) == 0 ||
       ((*(uint *)(*(longlong *)(param_1[10] + 8) + 8) & 0x10) != 0)) ||
      (lVar24 = FUN_1447210f0(), lVar24 == 0)))) {
    lVar24 = *(longlong *)param_1[2];
    if (lVar24 != 0) {
      if (DAT_14cb10130 == 0) {
        local_780 = local_6a8;
        local_6a8[0] = FUN_140754f84;
        local_770 = FUN_14081d0ea;
        local_778 = FUN_14081d0ea;
        local_788 = &LAB_147da9a76;
        local_790 = FUN_1409f3105;
        local_798 = L"Engine";
        local_7a0 = 0;
        local_7a8 = 0x10000000;
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,8);
        local_7b8 = (undefined1 (*) [16])CONCAT44(local_7b8._4_4_,0x990);
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar24 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_1404f2e6e;
    }
    lVar24 = 0;
  }
LAB_1404f2e6e:
  cVar20 = (**(code **)(*(longlong *)*param_1 + 0x600))(param_1);
  if ((lVar24 == 0) || (cVar20 == '\0')) goto LAB_1404f3bd2;
  plVar9 = *(longlong **)param_1[0x11];
  bVar21 = 1;
  if (((double)plVar9[0x4c] == *(double *)param_1[0x3c]) &&
     (!NAN((double)plVar9[0x4c]) && !NAN(*(double *)param_1[0x3c]))) {
    if (((double)plVar9[0x4d] == *(double *)(param_1[0x3c] + 8)) &&
       (!NAN((double)plVar9[0x4d]) && !NAN(*(double *)(param_1[0x3c] + 8)))) {
      bVar21 = -((double)plVar9[0x4e] != *(double *)param_1[0x3d]) & 1;
    }
  }
  param_1[0x76][0xb] = bVar21;
  if (((param_1[0x29][1] == '\0') || (*(char *)((longlong)plVar9 + 0x1fb) != '\x02')) ||
     (cVar20 = (**(code **)(*plVar9 + 0x480))(plVar9,0), cVar20 != '\0')) {
    lVar24 = *(longlong *)param_1[0x1f];
    if (((*(byte *)(lVar24 + 0x550) & 0x10) != 0) || ((*(byte *)(lVar24 + 0x551) & 4) != 0))
    goto LAB_1404f3002;
    plVar9 = *(longlong **)(lVar24 + 0x428);
    if (plVar9 == (longlong *)0x0) goto LAB_1404f2fe4;
    lVar24 = *plVar9;
    if (*(code **)(lVar24 + 0xba8) == FUN_144b222b6) {
      if (*(code **)(lVar24 + 3000) != (code *)&LAB_147a0c89e) {
        cVar20 = (**(code **)(lVar24 + 3000))(plVar9);
        if (cVar20 == '\0') {
          lVar24 = *plVar9;
          goto LAB_1404f2f70;
        }
        goto LAB_1404f2fb2;
      }
      if ((plVar9[0x15d] != 0) && (*(char *)(plVar9[0x15d] + 0x30) == '\x02')) goto LAB_1404f2fb2;
LAB_1404f2f70:
      if (*(code **)(lVar24 + 0xbb0) != (code *)&LAB_1400ba9be) {
        cVar20 = (**(code **)(lVar24 + 0xbb0))(plVar9);
        goto LAB_1404f3f39;
      }
      lVar24 = plVar9[0x15d];
      if ((lVar24 != 0) && (*(char *)(lVar24 + 0x30) == '\x03')) {
        if (*(longlong *)(lVar24 + 0x358) == 0) {
          if (0 < *(int *)(lVar24 + 0x368)) goto LAB_1404f2fb2;
        }
        else if (*(int *)(*(longlong *)(lVar24 + 0x358) + 0x1b4) < 1) goto LAB_1404f2fb2;
      }
    }
    else {
      cVar20 = (**(code **)(lVar24 + 0xba8))(plVar9);
LAB_1404f3f39:
      if (cVar20 == '\0') goto LAB_1404f2fe4;
LAB_1404f2fb2:
      if (*(longlong *)(*(longlong *)param_1[0x1f] + 0x428) != 0) {
        (**(code **)(*(longlong *)*param_1 + 0xa68))(param_1,fVar35);
        param_1[0xf8][0] = 0;
        *(undefined4 *)(param_1[0xf8] + 4) = 0;
      }
    }
LAB_1404f2fe4:
    if ((0 < *(int *)(param_1[0xd9] + 8)) || (0 < *(int *)(param_1[0xda] + 8))) {
      FUN_140239626(param_1[0xd8] + 8);
    }
LAB_1404f3002:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_7d8);
  }
  cVar20 = (**(code **)(*(longlong *)(param_1[0x17] + 8) + 0xe0))();
  if (cVar20 == '\0') {
    cVar20 = '\0';
  }
  else {
    cVar20 = param_1[0x76][0xb];
  }
  bVar21 = param_1[0x34][9];
  param_1[0x34][9] = cVar20 << 4 | bVar21;
  if ((param_1[0xdb][0] & 1) != 0) {
    dVar2 = *(double *)(param_1[0x13] + 8);
    dVar3 = *(double *)(param_1[0x3e] + 8);
    dVar4 = *(double *)param_1[0x13];
    dVar5 = *(double *)param_1[0x3e];
    *(double *)(param_1[0xdb] + 8) =
         (*(double *)(param_1[0x12] + 8) - *(double *)(param_1[0x3d] + 8)) +
         *(double *)(param_1[0xdb] + 8);
    *(double *)param_1[0xdc] = (dVar4 - dVar5) + *(double *)param_1[0xdc];
    *(double *)(param_1[0xdc] + 8) = (dVar2 - dVar3) + *(double *)(param_1[0xdc] + 8);
  }
  if ((bVar21 & 1) == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = *(undefined8 *)param_1[0x11];
  }
  puVar1 = param_1[0xd8] + 8;
  FUN_1402ed838(local_6a8,uVar30,1,1);
  (**(code **)(*(longlong *)*param_1 + 0x638))(param_1,fVar35);
  cVar20 = FUN_143432570(param_1);
  if (((cVar20 != '\0') &&
      (lVar33 = *(longlong *)param_1[0x1f], (*(byte *)(lVar33 + 0x550) & 0x10) == 0)) &&
     ((*(byte *)(lVar33 + 0x551) & 4) == 0)) {
    FUN_1434e77ce(puVar1,fVar35,lVar33,param_1);
  }
  local_6b8 = *(double *)(param_1[0x13] + 8);
  local_6c8 = *(double *)(param_1[0x12] + 8);
  dStack_6c0 = *(double *)param_1[0x13];
  lVar33 = *(longlong *)param_1[0x11];
  local_6e8 = *(undefined4 *)(lVar33 + 0x260);
  uStack_6e4 = *(undefined4 *)(lVar33 + 0x264);
  uStack_6e0 = *(undefined4 *)(lVar33 + 0x268);
  uStack_6dc = *(undefined4 *)(lVar33 + 0x26c);
  local_6d8 = *(undefined8 *)(lVar33 + 0x270);
  (**(code **)(*(longlong *)*param_1 + 0x748))(param_1,fVar35);
  (**(code **)(*(longlong *)*param_1 + 0x758))(param_1,fVar35);
  if ((param_1[0x29][1] == '\x02') && ((param_1[0x5b][6] & 0x10) != 0)) {
    (**(code **)(*(longlong *)*param_1 + 0x7c8))(param_1);
  }
  (**(code **)(*(longlong *)*param_1 + 0x690))(param_1);
  (**(code **)(*(longlong *)*param_1 + 0x750))(param_1);
  if ((param_1[0xdb][0] & 1) != 0) {
    dVar2 = *(double *)(param_1[0x13] + 8);
    dVar3 = *(double *)param_1[0x13];
    *(double *)(param_1[0xdb] + 8) =
         (*(double *)(param_1[0x12] + 8) - local_6c8) + *(double *)(param_1[0xdb] + 8);
    *(double *)param_1[0xdc] = (dVar3 - dStack_6c0) + *(double *)param_1[0xdc];
    *(double *)(param_1[0xdc] + 8) = (dVar2 - local_6b8) + *(double *)(param_1[0xdc] + 8);
  }
  if (((cVar20 == '\0') ||
      (lVar33 = *(longlong *)param_1[0x1f], (*(byte *)(lVar33 + 0x550) & 0x10) != 0)) ||
     ((*(byte *)(lVar33 + 0x551) & 4) != 0)) {
LAB_1404f3449:
    pauVar31 = (undefined1 (*) [16])(param_1[0x12] + 8);
    if ((param_1[0xdb][0] & 2) == 0) {
      if ((param_1[0xf8][0] & 1) != 0) {
LAB_1404f3470:
        if (*(longlong *)(*(longlong *)param_1[0x1f] + 0x428) != 0) {
          (**(code **)(*(longlong *)*param_1 + 0xb90))(param_1,local_748,param_1 + 0xf9,fVar35);
          param_1[0xf8][0] = 1;
          *(undefined8 *)param_1[0xf9] = local_748._0_8_;
          *(undefined8 *)(param_1[0xf9] + 8) = local_748._8_8_;
          *(undefined8 *)param_1[0xfa] = local_738._0_8_;
          *(undefined8 *)(param_1[0xfa] + 8) = local_738._8_8_;
          *(undefined8 *)param_1[0xfb] = local_728;
          *(undefined8 *)(param_1[0xfb] + 8) = uStack_720;
          *(undefined8 *)param_1[0xfc] = local_718;
          *(undefined8 *)(param_1[0xfc] + 8) = uStack_710;
          uVar19 = DAT_14cacb0f0;
          uVar30 = DAT_14cacb0e8;
          *(undefined8 *)param_1[0xfd] = _DAT_14cacb0e0;
          *(undefined8 *)(param_1[0xfd] + 8) = uVar30;
          *(undefined8 *)param_1[0xfe] = uVar19;
          *(undefined8 *)(param_1[0xfe] + 8) = 0;
          *(undefined4 *)(param_1[0xf8] + 4) = 0x3f800000;
        }
        if (0.0 < fVar35) {
          local_768 = param_1[0xfb];
          local_758 = *(double *)param_1[0xfc];
          local_7b8 = pauVar31;
          (**(code **)(*(longlong *)*param_1 + 0xb98))(param_1,local_748,local_768,fVar35);
          *(undefined8 *)param_1[0x100] = local_738._0_8_;
          *(undefined4 *)param_1[0xff] = local_748._0_4_;
          *(undefined4 *)(param_1[0xff] + 4) = local_748._4_4_;
          *(undefined4 *)(param_1[0xff] + 8) = local_748._8_4_;
          *(undefined4 *)(param_1[0xff] + 0xc) = local_748._12_4_;
          (**(code **)(*(longlong *)*param_1 + 0xba0))(param_1,local_748,param_1 + 0xff,pauVar31);
          *(undefined8 *)(param_1[0x13] + 8) = local_738._0_8_;
          *(undefined4 *)*pauVar31 = local_748._0_4_;
          *(undefined4 *)(param_1[0x12] + 0xc) = local_748._4_4_;
          *(undefined4 *)param_1[0x13] = local_748._8_4_;
          *(undefined4 *)(param_1[0x13] + 4) = local_748._12_4_;
          cVar20 = (**(code **)(*(longlong *)(param_1[0x17] + 8) + 0xd8))(param_1[0x17] + 8);
          if (cVar20 != '\0') {
            dVar2 = *(double *)param_1[0x78];
            *(double *)(param_1[0x12] + 8) =
                 *(double *)(param_1[0x77] + 8) + *(double *)(param_1[0x12] + 8);
            *(double *)param_1[0x13] = dVar2 + *(double *)param_1[0x13];
            *(double *)(param_1[0x13] + 8) = *(double *)(param_1[0x13] + 8) + 0.0;
          }
        }
      }
    }
    else {
      if ((param_1[0xf8][0] & 1) != 0) goto LAB_1404f3470;
      if (0.0 < fVar35) {
        local_7b0 = local_748;
        local_738._0_8_ = *(undefined8 *)(param_1[0x13] + 8);
        local_748 = *pauVar31;
        local_7b8 = param_1;
        FUN_147aa0094(puVar1,0,param_2,*(undefined8 *)param_1[0x1f]);
        cVar20 = (**(code **)(*(longlong *)(param_1[0x17] + 8) + 0xd8))(param_1[0x17] + 8);
        if (cVar20 != '\0') {
          uVar22 = 0;
          uVar34 = 0;
          if ((param_1[0xdb][0] & 4) == 0) {
            uVar22 = (undefined4)*(undefined8 *)(param_1[0x78] + 8);
            uVar34 = (undefined4)((ulonglong)*(undefined8 *)(param_1[0x78] + 8) >> 0x20);
          }
          local_748._8_8_ = *(double *)param_1[0x78] + (double)local_748._8_8_;
          local_748._0_8_ = *(double *)(param_1[0x77] + 8) + (double)local_748._0_8_;
          local_738._0_8_ = (double)CONCAT44(uVar34,uVar22) + (double)local_738._0_8_;
        }
        *(undefined8 *)(param_1[0x13] + 8) = local_738._0_8_;
        *(undefined4 *)*pauVar31 = local_748._0_4_;
        *(undefined4 *)(param_1[0x12] + 0xc) = local_748._4_4_;
        *(undefined4 *)param_1[0x13] = local_748._8_4_;
        *(undefined4 *)(param_1[0x13] + 4) = local_748._12_4_;
      }
    }
    (**(code **)(**(longlong **)param_1[0x1f] + 0x8a0))(*(longlong **)param_1[0x1f],fVar35);
    *(undefined4 *)(param_1[0x43] + 0xc) = 0;
    (**(code **)(*(longlong *)*param_1 + 0x668))(param_1,fVar35,0);
    cVar20 = (**(code **)(*(longlong *)*param_1 + 0x600))(param_1);
    if (cVar20 != '\0') {
      (**(code **)(*(longlong *)*param_1 + 0x760))(param_1,fVar35);
      pauVar29 = param_1;
      uVar22 = (**(code **)(*(longlong *)*param_1 + 0xbc8))(param_1,0);
      uVar34 = SUB84(pauVar29,0);
      if ((char)uVar22 != '\0') {
        pauVar29 = param_1;
        uVar22 = (**(code **)(*(longlong *)*param_1 + 0x818))(param_1,fVar35);
        uVar34 = SUB84(pauVar29,0);
      }
      if (param_1[0xf8][0] == '\x01') {
        dVar2 = *(double *)param_1[0xf9];
        dVar3 = *(double *)(param_1[0xf9] + 8);
        dVar4 = *(double *)param_1[0xfa];
        dVar5 = *(double *)(param_1[0xfa] + 8);
        lVar33 = -(ulonglong)
                  (9.99999993922529e-09 <
                  ABS(dVar3 - (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8)));
        auVar7._8_4_ = (int)lVar33;
        auVar7._0_8_ = -(ulonglong)
                        (9.99999993922529e-09 <
                        ABS(dVar2 - (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0))
                        );
        auVar7._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
        uVar23 = movmskpd(uVar22,auVar7);
        lVar33 = -(ulonglong)
                  (9.99999993922529e-09 <
                  ABS(dVar5 - (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8)));
        auVar6._8_4_ = (int)lVar33;
        auVar6._0_8_ = -(ulonglong)
                        (9.99999993922529e-09 <
                        ABS(dVar4 - (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0))
                        );
        auVar6._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
        iVar25 = movmskpd(uVar34,auVar6);
        uVar26 = iVar25 << 2 | uVar23;
        if (uVar26 != 0) {
          auVar13._8_8_ =
               -(ulonglong)
                (9.99999993922529e-09 <
                ABS((double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8) + dVar3));
          auVar13._0_8_ =
               -(ulonglong)
                (9.99999993922529e-09 <
                ABS((double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0) + dVar2));
          iVar25 = movmskpd(uVar23,auVar13);
          auVar8._8_8_ = -(ulonglong)
                          (9.99999993922529e-09 <
                          ABS((double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8) +
                              dVar5));
          auVar8._0_8_ = -(ulonglong)
                          (9.99999993922529e-09 <
                          ABS((double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0) +
                              dVar4));
          uVar23 = movmskpd(uVar26,auVar8);
          if ((uVar23 & 0x3fffffff) != 0 || iVar25 != 0) {
            lVar33 = *(longlong *)param_1[0x11];
            dVar15 = *(double *)(lVar33 + 0x240);
            dVar16 = *(double *)(lVar33 + 0x248);
            dVar17 = *(double *)(lVar33 + 0x250);
            dVar18 = *(double *)(lVar33 + 600);
            dVar14 = dVar15 * dVar4 * 1.0 + dVar18 * dVar3 + dVar17 * dVar2 * -1.0 + dVar16 * dVar5;
            dVar12 = dVar17 * dVar4 * -1.0 +
                     ((dVar2 * dVar15 * -1.0 + dVar5 * dVar18) - dVar3 * dVar16);
            local_748._8_4_ = SUB84(dVar14,0);
            local_748._0_8_ =
                 dVar16 * dVar4 * -1.0 + dVar17 * dVar3 + dVar18 * dVar2 * 1.0 + dVar15 * dVar5;
            local_748._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
            local_738._8_4_ = SUB84(dVar12,0);
            local_738._0_8_ =
                 dVar18 * dVar4 * 1.0 + ((dVar2 * dVar16 * 1.0 + dVar5 * dVar17) - dVar3 * dVar15);
            local_738._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            local_7b0 = (undefined1 *)((ulonglong)local_7b0 & 0xffffffffffffff00);
            local_7b8 = (undefined1 (*) [16])0x0;
            (**(code **)(*(longlong *)*param_1 + 0x4e8))(param_1,&DAT_14c8464e0,local_748,1);
          }
        }
        param_1[0xf8][0] = 0;
        *(undefined4 *)(param_1[0xf8] + 4) = 0;
      }
      else if (((0 < *(int *)(param_1[0xd9] + 8)) || (0 < *(int *)(param_1[0xda] + 8))) &&
              ((*(longlong *)param_1[0x1f] != 0 &&
               (lVar33 = *(longlong *)param_1[0x11], lVar33 != 0)))) {
        local_7b8 = &local_748;
        cVar20 = FUN_147aa0766(puVar1,fVar35,*(longlong *)param_1[0x1f],param_1);
        if (cVar20 != '\0') {
          dVar3 = *(double *)(lVar33 + 0x240);
          dVar4 = *(double *)(lVar33 + 0x248);
          dVar5 = *(double *)(lVar33 + 0x250);
          dVar12 = *(double *)(lVar33 + 600);
          dVar2 = dVar3 * (double)local_738._0_8_ * 1.0 +
                  dVar12 * (double)local_748._8_8_ +
                  dVar5 * (double)local_748._0_8_ * -1.0 + dVar4 * (double)local_738._8_8_;
          local_758 = dVar12 * (double)local_738._0_8_ * 1.0 +
                      (((double)local_748._0_8_ * dVar4 * 1.0 + (double)local_738._8_8_ * dVar5) -
                      dVar3 * (double)local_748._8_8_);
          dStack_750 = dVar5 * (double)local_738._0_8_ * -1.0 +
                       (((double)local_748._0_8_ * dVar3 * -1.0 + (double)local_738._8_8_ * dVar12)
                       - dVar4 * (double)local_748._8_8_);
          local_768._8_4_ = SUB84(dVar2,0);
          local_768._0_8_ =
               dVar4 * (double)local_738._0_8_ * -1.0 +
               dVar5 * (double)local_748._8_8_ +
               dVar12 * (double)local_748._0_8_ * 1.0 + dVar3 * (double)local_738._8_8_;
          local_768._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          local_7b0 = (undefined1 *)((ulonglong)local_7b0 & 0xffffffffffffff00);
          local_7b8 = (undefined1 (*) [16])0x0;
          (**(code **)(*(longlong *)*param_1 + 0x4e8))(param_1,&DAT_14c8464e0,local_768,1);
        }
      }
      bVar21 = param_1[0x5b][0xc];
      pauVar29 = (undefined1 (*) [16])&DAT_14c8464e0;
      if ((bVar21 & 1) != 0) {
        pauVar29 = param_1 + 0x5e;
      }
      uVar22 = *(undefined4 *)((longlong)*pauVar29 + 4);
      uVar34 = *(undefined4 *)((longlong)*pauVar29 + 8);
      uVar38 = *(undefined4 *)((longlong)*pauVar29 + 0xc);
      *(undefined4 *)(param_1[0x5f] + 8) = *(undefined4 *)*pauVar29;
      *(undefined4 *)(param_1[0x5f] + 0xc) = uVar22;
      *(undefined4 *)param_1[0x60] = uVar34;
      *(undefined4 *)(param_1[0x60] + 4) = uVar38;
      *(undefined8 *)(param_1[0x60] + 8) = *(undefined8 *)pauVar29[1];
      param_1[0x5b][0xc] = bVar21 & 0xfe;
      (**(code **)(*(longlong *)*param_1 + 0x968))(param_1,fVar35,&local_6e8,&local_6c8);
      if ((((local_a0 & 1) != 0) && (local_6a8[0] != (code *)0x0)) &&
         ((*(uint *)(local_6a8[0] + 8) >> 0x1e & 1) == 0)) {
        FUN_140248a4c(local_6a8[0],local_6a8);
      }
      local_6a8[0] = (code *)0x0;
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_2c0 != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*(longlong *)*param_1 + 0x970))(param_1,fVar35,&local_6e8,&local_6c8);
      (**(code **)(*(longlong *)*param_1 + 0x650 + (ulonglong)(DAT_14c7613d4 == 0) * 8))(param_1);
      (**(code **)(*(longlong *)*param_1 + 0x4d0))(param_1);
      if ((*(longlong *)param_1[0x1f] == 0) ||
         (*(char *)(*(longlong *)param_1[0x1f] + 0x178) != '\x03')) {
        lVar24 = *(longlong *)param_1[0x11];
        if (lVar24 != 0) {
          uVar36 = (undefined4)*(undefined8 *)(lVar24 + 0x270);
          uVar37 = (undefined4)((ulonglong)*(undefined8 *)(lVar24 + 0x270) >> 0x20);
          uVar22 = *(undefined4 *)(lVar24 + 0x260);
          uVar34 = *(undefined4 *)(lVar24 + 0x264);
          uVar38 = *(undefined4 *)(lVar24 + 0x268);
          uVar39 = *(undefined4 *)(lVar24 + 0x26c);
          uVar40 = *(undefined4 *)(lVar24 + 0x240);
          uVar41 = *(undefined4 *)(lVar24 + 0x244);
          uVar42 = *(undefined4 *)(lVar24 + 0x248);
          uVar43 = *(undefined4 *)(lVar24 + 0x24c);
          uVar44 = *(undefined4 *)(lVar24 + 0x250);
          uVar45 = *(undefined4 *)(lVar24 + 0x254);
          uVar46 = *(undefined4 *)(lVar24 + 600);
          uVar47 = *(undefined4 *)(lVar24 + 0x25c);
          goto LAB_1404f3b99;
        }
LAB_1404f3b77:
        uVar36 = (undefined4)DAT_14c8464f0;
        uVar37 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        uVar22 = (undefined4)DAT_14c8464e0;
        uVar34 = DAT_14c8464e0._4_4_;
        uVar38 = (undefined4)DAT_14c8464e8;
        uVar39 = DAT_14c8464e8._4_4_;
        uVar40 = (undefined4)DAT_14c8463d0;
        uVar41 = DAT_14c8463d0._4_4_;
        uVar42 = (undefined4)DAT_14c8463d8;
        uVar43 = DAT_14c8463d8._4_4_;
        uVar44 = (undefined4)DAT_14c8463e0;
        uVar45 = DAT_14c8463e0._4_4_;
        uVar46 = (undefined4)DAT_14c8463e8;
        uVar47 = DAT_14c8463e8._4_4_;
      }
      else {
        cVar20 = FUN_143595122();
        if (cVar20 != '\0') {
          if (*(longlong *)param_1[0x11] == 0) goto LAB_1404f3b77;
          plVar9 = *(longlong **)(lVar24 + 0x38);
          if (((plVar9 != (longlong *)0x0) &&
              (cVar20 = (**(code **)(*plVar9 + 0x3c0))(plVar9), cVar20 != '\0')) &&
             ((cVar20 = FUN_147bd5400(plVar9,*(undefined8 *)param_1[0x1f]), cVar20 == '\0' &&
              ((cVar20 = FUN_147bd523c(plVar9,*(undefined8 *)param_1[0x1f]), cVar20 != '\0' &&
               (cVar20 = (**(code **)(*(longlong *)*param_1 + 0xa70))(param_1), cVar20 != '\0'))))))
          {
            FUN_147bd52b2(plVar9,*(undefined8 *)param_1[0x1f]);
          }
        }
        lVar33 = *(longlong *)param_1[0x11];
        if (lVar33 == 0) goto LAB_1404f3b77;
        dVar2 = *(double *)(lVar33 + 0x270);
        uVar36 = SUB84(dVar2,0);
        uVar37 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar6 = *(undefined1 (*) [16])(lVar33 + 0x260);
        uVar22 = auVar6._0_4_;
        uVar34 = auVar6._4_4_;
        uVar38 = auVar6._8_4_;
        uVar39 = auVar6._12_4_;
        auVar7 = *(undefined1 (*) [16])(lVar33 + 0x240);
        uVar40 = auVar7._0_4_;
        uVar41 = auVar7._4_4_;
        uVar42 = auVar7._8_4_;
        uVar43 = auVar7._12_4_;
        auVar8 = *(undefined1 (*) [16])(lVar33 + 0x250);
        uVar44 = auVar8._0_4_;
        uVar45 = auVar8._4_4_;
        uVar46 = auVar8._8_4_;
        uVar47 = auVar8._12_4_;
        lVar28 = *(longlong *)(param_1[10] + 8);
        if ((lVar28 == 0) || (lVar33 = FUN_14487fd02(), (int)lVar33 != 3)) {
          uVar23 = (uint)CONCAT71((int7)((ulonglong)lVar33 >> 8),1);
          if ((auVar6._0_8_ == *(double *)param_1[0x3c]) &&
             (!NAN(auVar6._0_8_) && !NAN(*(double *)param_1[0x3c]))) {
            if ((auVar6._8_8_ == *(double *)(param_1[0x3c] + 8)) &&
               (!NAN(auVar6._8_8_) && !NAN(*(double *)(param_1[0x3c] + 8)))) {
              uVar23 = -(uint)(*(double *)param_1[0x3d] != dVar2) & 1;
            }
          }
          if ((char)uVar23 == '\0') {
            lVar33 = -(ulonglong)(*(double *)(param_1[0x3a] + 8) != auVar7._8_8_);
            auVar10._8_4_ = (int)lVar33;
            auVar10._0_8_ = -(ulonglong)(*(double *)param_1[0x3a] != auVar7._0_8_);
            auVar10._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
            iVar25 = movmskpd(uVar23,auVar10);
            lVar33 = -(ulonglong)(*(double *)(param_1[0x3b] + 8) != auVar8._8_8_);
            auVar11._8_4_ = (int)lVar33;
            auVar11._0_8_ = -(ulonglong)(*(double *)param_1[0x3b] != auVar8._0_8_);
            auVar11._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
            iVar27 = movmskpd((int)lVar28,auVar11);
            if (iVar25 + iVar27 * 4 == 0) goto LAB_1404f3b99;
          }
          if (*(char *)(*(longlong *)param_1[0x1f] + 0x68) == '\x02') {
            lVar33 = *(longlong *)(param_1[0x81] + 8);
            if (lVar33 == 0) {
              lVar33 = (**(code **)(*(longlong *)(param_1[0x1e] + 8) + 0x30))(param_1[0x1e] + 8);
              *(longlong *)(param_1[0x81] + 8) = lVar33;
            }
            if ((lVar33 == 0) || (DAT_14c7613c4 == 0)) goto LAB_1404f3c28;
            dVar2 = *(double *)(lVar33 + 0xa0);
          }
          else {
LAB_1404f3c28:
            dVar2 = *(double *)(lVar24 + 0x6d0);
          }
          *(float *)param_1[0x3f] = (float)dVar2;
        }
      }
LAB_1404f3b99:
      *(undefined4 *)param_1[0x3c] = uVar22;
      *(undefined4 *)(param_1[0x3c] + 4) = uVar34;
      *(undefined4 *)(param_1[0x3c] + 8) = uVar38;
      *(undefined4 *)(param_1[0x3c] + 0xc) = uVar39;
      *(ulonglong *)param_1[0x3d] = CONCAT44(uVar37,uVar36);
      *(undefined4 *)param_1[0x3a] = uVar40;
      *(undefined4 *)(param_1[0x3a] + 4) = uVar41;
      *(undefined4 *)(param_1[0x3a] + 8) = uVar42;
      *(undefined4 *)(param_1[0x3a] + 0xc) = uVar43;
      *(undefined4 *)param_1[0x3b] = uVar44;
      *(undefined4 *)(param_1[0x3b] + 4) = uVar45;
      *(undefined4 *)(param_1[0x3b] + 8) = uVar46;
      *(undefined4 *)(param_1[0x3b] + 0xc) = uVar47;
      uVar22 = *(undefined4 *)(param_1[0x12] + 0xc);
      uVar34 = *(undefined4 *)param_1[0x13];
      uVar38 = *(undefined4 *)(param_1[0x13] + 4);
      *(undefined4 *)(param_1[0x3d] + 8) = *(undefined4 *)*pauVar31;
      *(undefined4 *)(param_1[0x3d] + 0xc) = uVar22;
      *(undefined4 *)param_1[0x3e] = uVar34;
      *(undefined4 *)(param_1[0x3e] + 4) = uVar38;
      *(undefined8 *)(param_1[0x3e] + 8) = *(undefined8 *)(param_1[0x13] + 8);
      goto LAB_1404f3bd2;
    }
  }
  else {
    plVar9 = *(longlong **)(lVar33 + 0x428);
    if (plVar9 == (longlong *)0x0) {
LAB_1404f33fb:
      lVar33 = *(longlong *)param_1[0x1f];
LAB_1404f3402:
      local_7b8 = (undefined1 (*) [16])CONCAT71(local_7b8._1_7_,1);
      FUN_1434e7e92(puVar1,fVar35,lVar33,param_1);
      cVar20 = (**(code **)(**(longlong **)param_1[0x1f] + 0x700))();
      if ((cVar20 != '\0') && (*(char *)(*(longlong *)param_1[0x1f] + 0x178) == '\x02')) {
        FUN_140fb3d70(*(longlong *)param_1[0x1f] + 0x5b8,puVar1);
      }
      goto LAB_1404f3449;
    }
    lVar28 = *plVar9;
    if (*(code **)(lVar28 + 0xba8) == FUN_144b222b6) {
      if (*(code **)(lVar28 + 3000) != (code *)&LAB_147a0c89e) {
        cVar20 = (**(code **)(lVar28 + 3000))(plVar9);
        if (cVar20 == '\0') {
          lVar28 = *plVar9;
          goto LAB_1404f32f8;
        }
        lVar33 = *(longlong *)param_1[0x1f];
        goto LAB_1404f334d;
      }
      if ((plVar9[0x15d] != 0) && (*(char *)(plVar9[0x15d] + 0x30) == '\x02')) goto LAB_1404f334d;
LAB_1404f32f8:
      if (*(code **)(lVar28 + 0xbb0) != (code *)&LAB_1400ba9be) {
        cVar20 = (**(code **)(lVar28 + 0xbb0))(plVar9);
        goto LAB_1404f3f75;
      }
      lVar28 = plVar9[0x15d];
      if ((lVar28 == 0) || (*(char *)(lVar28 + 0x30) != '\x03')) goto LAB_1404f33fb;
      lVar33 = *(longlong *)param_1[0x1f];
      if (*(longlong *)(lVar28 + 0x358) == 0) {
        if (0 < *(int *)(lVar28 + 0x368)) goto LAB_1404f334d;
      }
      else if (*(int *)(*(longlong *)(lVar28 + 0x358) + 0x1b4) < 1) goto LAB_1404f334d;
      goto LAB_1404f3402;
    }
    cVar20 = (**(code **)(lVar28 + 0xba8))(plVar9);
LAB_1404f3f75:
    lVar33 = *(longlong *)param_1[0x1f];
    if (cVar20 == '\0') goto LAB_1404f3402;
LAB_1404f334d:
    if (*(longlong *)(lVar33 + 0x428) == 0) goto LAB_1404f3402;
    (**(code **)(*(longlong *)*param_1 + 0xa68))(param_1,fVar35);
    cVar20 = (**(code **)(*(longlong *)*param_1 + 0x600))(param_1);
    if (cVar20 != '\0') {
      cVar20 = (**(code **)(**(longlong **)param_1[0x1f] + 0x700))();
      lVar33 = *(longlong *)param_1[0x1f];
      if (((cVar20 != '\0') && (*(char *)(lVar33 + 0x178) == '\x02')) &&
         (*(longlong **)(lVar33 + 0x428) != (longlong *)0x0)) {
        cVar20 = (**(code **)(**(longlong **)(lVar33 + 0x428) + 0xbb0))();
        lVar33 = *(longlong *)param_1[0x1f];
        if (cVar20 != '\0') {
          *(undefined1 *)(lVar33 + 0x600) = param_1[0xf8][0];
          *(undefined4 *)(lVar33 + 0x604) = *(undefined4 *)(param_1[0xf8] + 4);
          pauVar31 = param_1 + 0xf9;
          puVar32 = (undefined8 *)(lVar33 + 0x610);
          for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
            *puVar32 = *(undefined8 *)*pauVar31;
            pauVar31 = (undefined1 (*) [16])(*pauVar31 + 8);
            puVar32 = puVar32 + 1;
          }
          goto LAB_1404f33fb;
        }
      }
      goto LAB_1404f3402;
    }
  }
  if ((((local_a0 & 1) != 0) && (local_6a8[0] != (code *)0x0)) &&
     ((*(uint *)(local_6a8[0] + 8) >> 0x1e & 1) == 0)) {
    FUN_140248a4c(local_6a8[0],local_6a8);
  }
  local_6a8[0] = (code *)0x0;
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_2c0 != 0) {
    FUN_1400020a8();
  }
LAB_1404f3bd2:
  if ((local_90 ^ (ulonglong)auStack_7d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404f3fee FUN_1404f3fee body=48 status=ok
// SIG undefined FUN_1404f3fee(void)

void FUN_1404f3fee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 1404f401e FUN_1404f401e body=162 status=ok
// SIG undefined FUN_1404f401e(void)

void FUN_1404f401e(longlong *param_1,undefined8 param_2)

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
        goto LAB_1404f40ab;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1404f40ab:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1404f40c0 FUN_1404f40c0 body=806 status=ok
// SIG undefined FUN_1404f40c0(void)

ulonglong FUN_1404f40c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  longlong unaff_RDI;
  ulonglong uVar6;
  undefined7 uVar7;
  
  if (((char)param_1[0x8d7] == '\0') && (lVar2 = param_1[0x841], lVar2 != 0)) {
    if ((param_1[0x8b1] != 0) && (*(char *)(param_1[0x8b1] + 0x1b) == '\x01')) {
      cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x3b48) + 0x60))(lVar2 + 0x3b48);
      if (cVar1 != '\0') goto LAB_1404f437e;
      lVar2 = param_1[0x841];
    }
    if ((*(char *)(lVar2 + 0x5d30) == '\0') &&
       ((((lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x18))(lVar2 + 0x3c20), lVar2 == 0
          || (lVar3 = FUN_14058c572(lVar2), unaff_RDI = lVar2, lVar3 == 0)) ||
         (*(float *)(lVar2 + 0x50) <= 0.0)) || (*(char *)(lVar3 + 0x731) == '\0')))) {
      lVar2 = param_1[0x16];
      if ((((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
          (*(longlong *)(lVar2 + 0x30) != 0)) &&
         (unaff_RDI = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), unaff_RDI != 0)) {
        lVar2 = FUN_140a99ecc();
        if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
           (*(char *)(unaff_RDI + 0x6a1) != '\x01')) goto LAB_1404f437e;
      }
      bVar5 = *(byte *)(param_1 + 0x845) ^ 1;
      if ((*(byte *)(param_1 + 0x845) == 1) && ((longlong *)param_1[0x3d7] != (longlong *)0x0)) {
        bVar5 = (**(code **)(*(longlong *)param_1[0x3d7] + 0xa8))();
      }
      cVar1 = (**(code **)(*param_1 + 0xe78))(param_1,0x20000);
      if (((cVar1 != '\0') && (bVar5 != 0)) &&
         (cVar1 = (**(code **)(*param_1 + 0xf38))(param_1), cVar1 == '\0')) {
        if ((param_1[0x39d] == 0) || (*(byte *)(param_1[0x39d] + 0x178) < 2)) {
          cVar1 = (char)param_1[0x3dc];
joined_r0x0001404f43bf:
          if (cVar1 != '\0') goto LAB_1404f437e;
        }
        else {
          plVar4 = (longlong *)param_1[0x3d7];
          if (plVar4 != (longlong *)0x0) {
            if (*(code **)(*plVar4 + 0x40) != (code *)&LAB_1449cc0ea) {
              cVar1 = (**(code **)(*plVar4 + 0x40))();
              goto joined_r0x0001404f43bf;
            }
            if (*(char *)((longlong)plVar4 + 0xb2) == '\0') {
              if (*(char *)((longlong)plVar4 + 0x79) != '\0') goto LAB_1404f437e;
              if (0 < (int)plVar4[4]) {
                cVar1 = (char)plVar4[0xf];
                goto joined_r0x0001404f43bf;
              }
            }
          }
        }
        uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
        uVar6 = CONCAT71(uVar7,1);
        if (param_1[0x87b] == 0) goto LAB_1404f4249;
        lVar3 = param_1[0x87b] + 0x20;
        lVar2 = FUN_14485c28e(lVar3);
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          lVar2 = FUN_14485c28e(lVar3);
        }
        if (param_1[0x62e] == 0) {
          if ((char)param_1[0x696] != '\x01') goto LAB_1404f4249;
          plVar4 = param_1 + 0x642;
        }
        else {
          plVar4 = (longlong *)(param_1[0x62e] + 0xd8);
        }
        lVar3 = FUN_140153468(plVar4);
        if (((lVar3 == 0) || ((*(byte *)(plVar4 + 0x53) & 2) != 0)) || (param_1[0x22] == 0))
        goto LAB_1404f4249;
        if (param_1[0x62e] == 0) {
          if ((char)param_1[0x696] != '\x01') goto LAB_1404f4249;
          plVar4 = param_1 + 0x642;
        }
        else {
          plVar4 = (longlong *)(param_1[0x62e] + 0xd8);
        }
        lVar3 = FUN_140153468(plVar4);
        if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_1404f4249;
        if (param_1[0x62e] == 0) {
          if ((char)param_1[0x696] == '\x01') {
            param_1 = param_1 + 0x642;
            goto LAB_1404f435f;
          }
          lVar3 = 0;
        }
        else {
          param_1 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_1404f435f:
          lVar3 = FUN_140153468(param_1);
        }
        uVar6 = CONCAT71(uVar7,lVar3 != lVar2);
        goto LAB_1404f4249;
      }
    }
  }
LAB_1404f437e:
  uVar6 = 0;
LAB_1404f4249:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1404f43e6 FUN_1404f43e6 body=96 status=ok
// SIG undefined FUN_1404f43e6(void)

undefined4 FUN_1404f43e6(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_2 != 2) {
    lVar1 = *(longlong *)(param_1 + 0x4208);
    lVar4 = FUN_14010113e(lVar1);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x21f0) == lVar1)) {
      return 0;
    }
  }
  if ((*(longlong *)(&DAT_00001ce8 + param_1) != 0) && (cVar2 = FUN_1449ce79a(), cVar2 != '\0')) {
    uVar3 = *(uint *)(param_1 + 0x3630) | *(uint *)(param_1 + 0x362c);
    return CONCAT31((int3)(uVar3 >> 8),(uVar3 & param_2) != 0);
  }
  return 0;
}



// FUNCTION 1404f4446 FUN_1404f4446 body=98 status=ok
// SIG undefined FUN_1404f4446(void)

void FUN_1404f4446(longlong param_1)

{
  longlong lVar1;
  
  FUN_1447cd2ec(param_1 + 0x3688,0);
  if ((longlong)*(int *)(param_1 + 0x41a0) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x4198) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x4198) + lVar1) != 0)) {
        FUN_1404f44a8(param_1 + 0x4198,param_1);
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x41a0) * 0x10 != lVar1);
  }
  return;
}



// FUNCTION 1404f44a8 FUN_1404f44a8 body=162 status=ok
// SIG undefined FUN_1404f44a8(void)

void FUN_1404f44a8(longlong *param_1,undefined8 param_2)

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
        goto LAB_1404f4535;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1404f4535:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1404f454a FUN_1404f454a body=98 status=ok
// SIG undefined FUN_1404f454a(void)

void FUN_1404f454a(longlong param_1)

{
  longlong lVar1;
  
  FUN_1447cd2ec(param_1 + 0x3698,0);
  if ((longlong)*(int *)(param_1 + 0x41a0) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x4198) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x4198) + lVar1) != 0)) {
        FUN_1404f44a8(param_1 + 0x4198,param_1);
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x41a0) * 0x10 != lVar1);
  }
  return;
}



// FUNCTION 1404f45ac FUN_1404f45ac body=104 status=ok
// SIG undefined FUN_1404f45ac(void)

longlong FUN_1404f45ac(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4
                    );
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar2 == lVar1) goto LAB_1404f460f;
        iVar3 = (int)plVar2[2];
      } while (iVar3 != -1);
    }
  }
  plVar2 = (longlong *)0x0;
LAB_1404f460f:
  return plVar2[1];
}



// FUNCTION 1404f4614 FUN_1404f4614 body=311 status=ok
// SIG undefined FUN_1404f4614(void)

void FUN_1404f4614(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x422c) != '\x01') {
    cVar1 = FUN_1404f47a2(param_1 + 0x42b8,DAT_14cbc5e20);
    if (cVar1 == '\0') {
      return;
    }
    FUN_14064ce80(param_1 + 0x4330,DAT_14cbc5e20);
    FUN_1404f474c(param_1 + 0x42b8);
    return;
  }
  fVar5 = (float)FUN_14075fe08(param_1,0x20000);
  if ((longlong)*(int *)(param_1 + 0x42a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x4298);
    lVar3 = (longlong)*(int *)(param_1 + 0x42a0) * 0xc;
    do {
      cVar1 = FUN_144729dda(lVar4);
      if (cVar1 != '\0') {
        lVar2 = FUN_14479d2ce(lVar4);
        fVar5 = fVar5 * *(float *)(lVar2 + 0x110);
      }
      lVar4 = lVar4 + 0xc;
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0);
  }
  if ((*(longlong *)(param_1 + 0x4210) != 0) && (*(char *)(param_1 + 0x4235) == '\x01')) {
    fVar5 = fVar5 * *(float *)(*(longlong *)(param_1 + 0x4210) + 0x510);
  }
  cVar1 = FUN_1404f47a2(param_1 + 0x42b8,DAT_14cbc5e20);
  if (cVar1 != '\0') {
    FUN_148ef956a(param_1 + 0x42b8,DAT_14cbc5e20,fVar5);
    return;
  }
  FUN_1404f4834();
  return;
}



// FUNCTION 1404f474c FUN_1404f474c body=85 status=ok
// SIG undefined FUN_1404f474c(void)

void FUN_1404f474c(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14075fac2();
  if (lVar1 != 0) {
    uVar2 = FUN_1404f489e(param_1);
    lVar1 = FUN_14008e0ae(lVar1);
    *(undefined4 *)(lVar1 + 0x58) = uVar2;
    FUN_14020a6cc(lVar1 + 0x50,1);
    return;
  }
  return;
}



// FUNCTION 1404f47a2 FUN_1404f47a2 body=146 status=ok
// SIG undefined FUN_1404f47a2(void)

undefined8 FUN_1404f47a2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x14) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x14 + 0xc);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1404f4834 FUN_1404f4834 body=105 status=ok
// SIG undefined FUN_1404f4834(void)

void FUN_1404f4834(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_30;
  local_20 = &local_34;
  local_34 = param_3;
  local_30 = param_2;
  FUN_144a405ac(param_1 + 0x78,local_14,&local_28,0);
  FUN_1404f474c(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404f489e FUN_1404f489e body=374 status=ok
// SIG undefined FUN_1404f489e(void)

float FUN_1404f489e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar9 = 0;
    iVar10 = 0;
    iVar7 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x88);
    }
    uVar11 = *puVar3;
    if (uVar11 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar9) {
          return 0.0;
        }
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar3[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar13 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar7 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  fVar14 = 0.0;
  if (iVar7 < iVar2) {
    puVar3 = (uint *)(param_1 + 0x88);
    if (*(uint **)(param_1 + 0x98) != (uint *)0x0) {
      puVar3 = *(uint **)(param_1 + 0x98);
    }
    iVar4 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar4 = iVar2 + -1;
    }
    iVar4 = iVar4 >> 5;
    uVar11 = 0xffffffff;
    do {
      fVar14 = fVar14 + *(float *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)iVar7 * 0x14);
      uVar11 = ~(uint)uVar13 & uVar11;
      iVar7 = (int)uVar9;
      lVar5 = (longlong)iVar7;
      uVar8 = puVar3[lVar5] & uVar11;
      if (uVar8 == 0) {
        iVar12 = iVar4;
        if (iVar4 < iVar7) {
          iVar12 = iVar7;
        }
        if (iVar4 <= iVar7) {
          return fVar14;
        }
        lVar6 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar8 = puVar3[lVar5 + lVar6 + 1];
          if (uVar8 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar12 - lVar5 == lVar6) {
            return fVar14;
          }
        }
        uVar9 = (ulonglong)(iVar7 + (int)lVar6 + 1);
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar13 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
  return fVar14;
}



// FUNCTION 1404f4a14 FUN_1404f4a14 body=1485 status=ok
// SIG undefined FUN_1404f4a14(void)

void FUN_1404f4a14(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float *pfVar1;
  double dVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  double *pdVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_d0;
  undefined1 local_c0 [24];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  ulonglong local_90;
  
  fVar16 = (float)param_2;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(float *)(param_1 + 0x3f) <= 0.0001) || ((char)param_1[0x52] == '\x01')) &&
     (((double)param_1[0x25] != 0.0 ||
      ((((NAN((double)param_1[0x25]) || ((double)param_1[0x26] != 0.0)) ||
        (NAN((double)param_1[0x26]))) ||
       (((double)param_1[0x27] != 0.0 || (NAN((double)param_1[0x27]))))))))) {
    param_1[0x27] = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar18 = (undefined4)DAT_14c8464e8;
    uVar17 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 300) = uVar17;
    *(undefined4 *)(param_1 + 0x26) = uVar18;
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
  }
  bVar6 = *(byte *)(param_1 + 0x3e3);
  if ((bVar6 & 4) != 0) {
    dVar13 = (double)param_1[0x71];
    dVar2 = (double)param_1[0x72];
    if (((dVar13 != 0.0) || (NAN(dVar13))) ||
       ((dVar2 != 0.0 ||
        (((NAN(dVar2) || ((double)param_1[0x73] != 0.0)) || (NAN((double)param_1[0x73]))))))) {
      dVar12 = dVar13 * dVar13 + dVar2 * dVar2;
      if ((dVar12 != 1.0) || (NAN(dVar12))) {
        if (9.99999993922529e-09 <= dVar12) {
          dVar2 = dVar2 * (1.0 / SQRT(dVar12));
          dVar13 = dVar13 * (1.0 / SQRT(dVar12));
          uVar17 = 0;
          uVar18 = 0;
        }
        else {
          dVar13 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar2 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          uVar17 = (undefined4)DAT_14c8464f0;
          uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
      }
      else {
        uVar4 = -(ulonglong)((double)param_1[0x73] == 0.0) & param_1[0x73];
        uVar17 = (undefined4)uVar4;
        uVar18 = (undefined4)(uVar4 >> 0x20);
      }
      fVar11 = (float)(**(code **)(*param_1 + 0x480))(param_1);
      dVar12 = (double)fVar11;
      param_1[0x25] = (longlong)(dVar13 * dVar12);
      param_1[0x26] = (longlong)(dVar2 * dVar12);
      param_1[0x27] = (longlong)((double)CONCAT44(uVar18,uVar17) * dVar12);
      bVar6 = *(byte *)(param_1 + 0x3e3);
    }
    *(byte *)(param_1 + 0x3e3) = bVar6 & 0xfb;
  }
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] == '\x01') {
      plVar9 = param_1 + 0x642;
      goto LAB_1404f4c4c;
    }
LAB_1404f4c70:
    bVar10 = false;
  }
  else {
    plVar9 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_1404f4c4c:
    lVar7 = FUN_140153468(plVar9);
    if ((lVar7 == 0) || ((*(byte *)(plVar9 + 0x53) & 2) != 0)) goto LAB_1404f4c70;
    bVar10 = param_1[0x22] != 0;
  }
  if ((char)param_1[0x5f9] != '\x01') {
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,param_5);
    FUN_1404d8b20(param_1,param_2,param_3,param_4);
    if (bVar10) {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_1404f4e3e;
        plVar9 = param_1 + 0x642;
      }
      else {
        plVar9 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      FUN_143cf447a(plVar9,param_2,param_1 + 0x25,param_1 + 0x71);
    }
    goto LAB_1404f4e3e;
  }
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  uVar3 = *(uint *)((longlong)param_1 + 0x2fac);
  pfVar1 = (float *)((longlong)param_1 + 0x2fcc);
  if ((uVar3 & 8) != 0) {
    FUN_143ce112a(param_1,local_c0);
    local_d0 = (undefined1)((uVar3 & 2) >> 1);
    local_d8 = local_c0;
    FUN_14880fea6(param_1,&local_a8,param_2,pfVar1);
    param_1[0x27] = local_98;
    *(undefined4 *)(param_1 + 0x25) = local_a8;
    *(undefined4 *)((longlong)param_1 + 300) = uStack_a4;
    *(undefined4 *)(param_1 + 0x26) = uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0x134) = uStack_9c;
    goto LAB_1404f4e3e;
  }
  FUN_143ce112a(param_1,&local_a8);
  dVar2 = DAT_14c8463f8;
  dVar13 = DAT_14c8463f0;
  if (param_1[0x39d] != 0) {
    fVar11 = *pfVar1;
    if (fVar11 <= 0.0) {
LAB_1404f4f89:
      dVar13 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dVar2 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      lVar7 = *(longlong *)(param_1[0x39d] + 0x1c8);
      pdVar8 = (double *)&DAT_14c8464e0;
      if (lVar7 != 0) {
        pdVar8 = (double *)(lVar7 + 0x260);
      }
      dVar2 = (double)CONCAT44(uStack_9c,uStack_a0) - pdVar8[1];
      dVar12 = (double)CONCAT44(uStack_a4,local_a8) - *pdVar8;
      dVar14 = dVar12 * dVar12 + dVar2 * dVar2;
      dVar15 = 1.0 / SQRT(dVar14);
      if (9.99999993922529e-09 < dVar14) {
        dVar2 = dVar2 * dVar15;
      }
      else {
        dVar2 = 0.0;
      }
      if (fVar11 <= fVar16) {
        fVar11 = fVar16;
      }
      dVar13 = (double)(float)(-(uint)(0.0 < fVar11) & (uint)((float)SQRT(dVar14) / fVar11));
      dVar2 = dVar2 * dVar13;
      dVar13 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar14) & (ulonglong)(dVar12 * dVar15))
               * dVar13;
      if ((uVar3 & 2) != 0) {
        fVar11 = (float)(**(code **)(*param_1 + 0x480))(param_1);
        if (fVar11 < 0.0001) goto LAB_1404f4f89;
        dVar12 = (double)fVar11;
        dVar14 = dVar13 * dVar13 + dVar2 * dVar2;
        if (dVar12 * dVar12 < dVar14) {
          dVar12 = (1.0 / SQRT(dVar14)) * dVar12;
          dVar2 = dVar2 * dVar12;
          dVar13 = dVar13 * dVar12;
        }
      }
    }
    if ((*(byte *)(param_1[0x39d] + 0x550) & 0x10) == 0) {
      *pfVar1 = *pfVar1 - fVar16;
    }
  }
  param_1[0x25] = (longlong)dVar13;
  param_1[0x26] = (longlong)dVar2;
  param_1[0x27] = 0;
LAB_1404f4e3e:
  if (*(char *)((longlong)param_1 + 0x411c) == '\x01') {
    dVar2 = 0.0;
    dVar13 = 0.0;
    if (0.0001 <= *(float *)(param_1 + 0x824)) {
      dVar12 = (double)*(float *)(param_1 + 0x824);
      dVar13 = (double)param_1[0x25];
      dVar2 = (double)param_1[0x26];
      dVar14 = dVar13 * dVar13 + dVar2 * dVar2;
      if (dVar12 * dVar12 < dVar14) {
        dVar12 = (1.0 / SQRT(dVar14)) * dVar12;
        dVar2 = dVar2 * dVar12;
        dVar13 = dVar13 * dVar12;
      }
    }
    param_1[0x25] = (longlong)dVar13;
    param_1[0x26] = (longlong)dVar2;
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404f4fe8 FUN_1404f4fe8 body=19033 status=ok
// SIG undefined FUN_1404f4fe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404f4fe8(uint *param_1)

{
  int *piVar1;
  double *pdVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  longlong lVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 uVar25;
  longlong ********pppppppplVar26;
  longlong ********pppppppplVar27;
  double *pdVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  double *pdVar31;
  uint *puVar32;
  longlong *plVar33;
  undefined *puVar34;
  byte bVar35;
  undefined8 *puVar36;
  undefined8 unaff_RDI;
  ulonglong uVar37;
  longlong *plVar38;
  undefined8 uVar39;
  longlong lVar40;
  longlong ************pppppppppppplVar41;
  bool bVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  longlong *******ppppppplVar51;
  longlong *******ppppppplVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  double dVar60;
  double _X;
  undefined1 in_XMM1 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  longlong *******ppppppplVar65;
  longlong *******ppppppplVar66;
  longlong *******ppppppplVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  float fVar70;
  undefined1 auVar71 [16];
  float fVar72;
  longlong *******ppppppplVar73;
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  undefined1 auStack_3d8 [32];
  double *local_3b8;
  undefined8 local_3b0;
  uint *local_3a8;
  longlong ************local_3a0;
  undefined8 *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  undefined8 *local_380;
  undefined1 *local_378;
  code *local_370;
  longlong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  longlong *******ppppppplStack_338;
  longlong *******local_330;
  longlong *******local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  float local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  byte local_298;
  undefined7 uStack_297;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_278;
  longlong *******ppppppplStack_270;
  longlong *******local_268;
  longlong *******ppppppplStack_260;
  longlong *******local_258;
  longlong *******ppppppplStack_250;
  longlong *******local_248;
  longlong *******ppppppplStack_240;
  longlong *******local_238;
  longlong *******ppppppplStack_230;
  double local_228;
  longlong *******ppppppplStack_220;
  longlong *******local_218;
  double dStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1d4;
  undefined4 local_1a8;
  longlong ***********local_178;
  longlong *******ppppppplStack_170;
  longlong *******local_168;
  longlong *******local_160;
  longlong local_158;
  undefined2 local_150;
  longlong local_128;
  undefined8 local_120;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  iVar20 = DAT_14c9647dc;
  plVar38 = _DAT_00001ce8;
  fVar46 = in_XMM1._0_4_;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  uVar43 = param_1[1];
  if (((uVar43 == 0) || (uVar21 = *param_1, (int)uVar21 < 0)) || (DAT_14c9647dc <= (int)uVar21)) {
    *(longlong ********)(param_1 + 0xa4) = DAT_14c8464f0;
    ppppppplVar67 = DAT_14c8464e8;
    *(longlong ********)(param_1 + 0xa0) = DAT_14c8464e0;
    *(longlong ********)(param_1 + 0xa2) = ppppppplVar67;
    if ((*(byte *)(plVar38 + 0xaa) & 0x10) != 0) {
LAB_1404f54d8:
      lVar22 = 0;
      goto LAB_1404f5408;
    }
  }
  else {
    plVar38 = (longlong *)
              ((ulonglong)((uVar21 & 0xffff) * 0x18) +
              *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
    if (((plVar38 == (longlong *)0x0) || (*(uint *)(plVar38 + 2) != uVar43)) ||
       ((*(uint *)(plVar38 + 1) & 0x10200000) != 0)) {
      lVar22 = 0;
    }
    else {
      lVar22 = *plVar38;
    }
    plVar38 = *(longlong **)(&DAT_00001ce8 + lVar22);
    *(longlong ********)(param_1 + 0xa4) = DAT_14c8464f0;
    ppppppplVar67 = DAT_14c8464e8;
    *(longlong ********)(param_1 + 0xa0) = DAT_14c8464e0;
    *(longlong ********)(param_1 + 0xa2) = ppppppplVar67;
    if ((*(byte *)(plVar38 + 0xaa) & 0x10) != 0) {
      if (((iVar20 <= (int)uVar21) ||
          (plVar38 = (longlong *)
                     ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                     *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
          plVar38 == (longlong *)0x0)) ||
         ((*(uint *)(plVar38 + 2) != uVar43 || ((*(uint *)(plVar38 + 1) & 0x10200000) != 0))))
      goto LAB_1404f54d8;
      lVar22 = *plVar38;
LAB_1404f5408:
      if (*(char *)(lVar22 + 0x3540) == '\x01') {
        param_1[0x22] = (uint)(fVar46 + (float)param_1[0x22]);
      }
      goto LAB_1404f5421;
    }
  }
  param_1[0x22] = (uint)((float)param_1[0x22] + fVar46);
  if ((((param_1[0xa6] & 0x40) != 0) || (lVar22 = FUN_140153468(), lVar22 == 0)) ||
     ((param_1[0xa6] & 2) != 0)) goto LAB_1404f5421;
  uVar25 = in_XMM1._0_8_;
  if (1 < *(byte *)(plVar38 + 0x2f)) {
    if (param_1[1] == 0) {
LAB_1404f5b47:
      plVar30 = (longlong *)0x0;
    }
    else {
      uVar43 = *param_1;
      plVar30 = (longlong *)0x0;
      if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
        puVar29 = (undefined8 *)
                  ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                  *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
        if ((puVar29 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar29 + 2) != param_1[1] || ((*(uint *)(puVar29 + 1) & 0x10200000) != 0))))
        goto LAB_1404f5b47;
        plVar30 = (longlong *)*puVar29;
      }
    }
    cVar18 = (**(code **)(*plVar30 + 0xe50))();
    if (cVar18 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3d8);
    }
    if ((((char)plVar38[0x2f] == '\x03') &&
        (cVar18 = (**(code **)(*plVar38 + 0x700))(), cVar18 == '\0')) &&
       (cVar18 = FUN_143cf3594(), cVar18 != '\0')) {
      *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_1 + 0x94);
      *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x96);
      *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_1 + 0x9a);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x9c);
      *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_1 + 0x9e);
    }
    if (param_1[1] == 0) {
LAB_1404f5cbd:
      plVar30 = (longlong *)0x0;
    }
    else {
      uVar43 = *param_1;
      plVar30 = (longlong *)0x0;
      if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
        puVar29 = (undefined8 *)
                  ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                  *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
        if ((puVar29 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar29 + 2) != param_1[1] || ((*(uint *)(puVar29 + 1) & 0x10200000) != 0))))
        goto LAB_1404f5cbd;
        plVar30 = (longlong *)*puVar29;
      }
    }
    cVar18 = (**(code **)(*plVar30 + 0xe70))();
    if (cVar18 != '\0') {
      param_1[0x22] = 0;
    }
    lVar22 = FUN_140153468(param_1);
    bVar3 = *(byte *)(lVar22 + 0xa0);
    lVar22 = FUN_140153468(param_1);
    uVar37 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(char *)(lVar22 + 0xa0) * '\x02') &
             0xffffffffffffff04;
    if (((float)param_1[0x21] <= 0.0) || ((float)param_1[0x22] < (float)param_1[0x21])) {
      local_348 = *(undefined8 *)(param_1 + 0x56);
      local_358 = *(undefined8 *)(param_1 + 0x52);
      uStack_350 = *(undefined8 *)(param_1 + 0x54);
    }
    else {
      lVar22 = FUN_140153468(param_1);
      if ((*(byte *)(lVar22 + 0xf8) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3d8);
      }
      local_348 = *(undefined8 *)(param_1 + 0x56);
      local_358 = *(undefined8 *)(param_1 + 0x52);
      uStack_350 = *(undefined8 *)(param_1 + 0x54);
      if ((-1 < (char)param_1[0xa6]) &&
         (lVar22 = FUN_140153468(param_1), (*(byte *)(lVar22 + 0xf8) & 4) != 0)) {
        *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x80;
        uVar43 = param_1[1];
        if ((uVar43 == 0) ||
           ((uVar21 = *param_1, (int)uVar21 < 0 || (DAT_14c9647dc <= (int)uVar21)))) {
          if (DAT_00001100 == '\x05') {
LAB_1404f893c:
            uVar23 = 0;
            goto LAB_1404f5a18;
          }
        }
        else {
          plVar30 = (longlong *)
                    ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
          if (((plVar30 == (longlong *)0x0) || (*(uint *)(plVar30 + 2) != uVar43)) ||
             ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)) {
            lVar22 = 0;
          }
          else {
            lVar22 = *plVar30;
          }
          if ((&DAT_00001100)[lVar22] == '\x05') {
            if (((DAT_14c9647dc <= (int)uVar21) ||
                (puVar29 = (undefined8 *)
                           ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                           *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8))
                , puVar29 == (undefined8 *)0x0)) ||
               ((*(uint *)(puVar29 + 2) != uVar43 || ((*(uint *)(puVar29 + 1) & 0x10200000) != 0))))
            goto LAB_1404f893c;
            uVar23 = *puVar29;
LAB_1404f5a18:
            FUN_1409df526(uVar23);
          }
        }
      }
    }
    lVar22 = FUN_140153468();
    if ((*(byte *)(lVar22 + 0xf8) & 0x20) != 0) {
      if (param_1[1] == 0) {
LAB_1404f66d7:
        lVar22 = 0;
      }
      else {
        uVar43 = *param_1;
        lVar22 = 0;
        if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
          plVar30 = (longlong *)
                    ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                    *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
          if ((plVar30 == (longlong *)0x0) ||
             ((*(uint *)(plVar30 + 2) != param_1[1] || ((*(uint *)(plVar30 + 1) & 0x10200000) != 0))
             )) goto LAB_1404f66d7;
          lVar22 = *plVar30;
        }
      }
      plVar30 = *(longlong **)(&DAT_00001ce8 + lVar22);
      uVar23 = FUN_1447210f0(plVar30);
      local_318 = local_318 & 0xffffffff00000000;
      local_2d8 = (double)((ulonglong)local_2d8 & 0xffffffff00000000);
      (**(code **)(*plVar30 + 0x528))(plVar30);
      lVar22 = plVar30[0x39];
      if (lVar22 == 0) {
        local_178 = (longlong ***********)DAT_14c8464e0;
        ppppppplStack_170 = DAT_14c8464e8;
        local_168 = DAT_14c8464f0;
        uVar68 = SUB84(DAT_14c8464e0,0);
        uVar69 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
        ppppppplVar67 = DAT_14c8464e8;
      }
      else {
        uVar68 = *(undefined4 *)(lVar22 + 0x260);
        uVar69 = *(undefined4 *)(lVar22 + 0x264);
        local_178 = *(longlong ************)(lVar22 + 0x260);
        ppppppplStack_170 = *(longlong ********)(lVar22 + 0x268);
        local_168 = *(longlong ********)(lVar22 + 0x270);
        ppppppplVar67 = *(longlong ********)(lVar22 + 0x268);
      }
      lVar22 = FUN_140153468(param_1);
      fVar75 = *(float *)(lVar22 + 0x6f0) + local_2d8._0_4_;
      lVar22 = FUN_140153468(param_1);
      fVar76 = *(float *)(lVar22 + 0x6f4) + local_2d8._0_4_;
      lVar22 = FUN_140153468(param_1);
      ppppppplVar51 = local_168;
      fVar45 = (float)local_318;
      dVar60 = *(double *)(param_1 + 0x44) - (double)CONCAT44(uVar69,uVar68);
      fVar44 = *(float *)(lVar22 + 0x6ec) + (float)local_318;
      if (fVar44 * fVar44 <
          (float)(dVar60 * dVar60 +
                 (*(double *)(param_1 + 0x46) - (double)ppppppplVar67) *
                 (*(double *)(param_1 + 0x46) - (double)ppppppplVar67))) goto LAB_1404f5651;
      fVar59 = (float)(*(double *)(param_1 + 0x48) - (double)local_168);
      fVar44 = ABS(fVar59);
      if (fVar59 <= 0.0) {
        if (fVar76 < fVar44) {
          fVar75 = fVar76 + fVar76;
          goto joined_r0x0001404f5a3c;
        }
      }
      else if (fVar75 < fVar44) {
        fVar75 = fVar75 + fVar75;
joined_r0x0001404f5a3c:
        if (fVar44 <= fVar75) {
          memset(&local_278,0,0x100);
          local_1a8 = 0xffffffff;
          local_1d4 = 0xffffffff;
          local_278 = (code *)CONCAT44(0x3f800000,(undefined4)local_278);
          local_2a8 = (double)ppppppplVar51 - (double)local_2d8._0_4_;
          uStack_2b0 = ppppppplVar67;
          if ((0.0 <= fVar59) || (fVar45 <= local_2d8._0_4_)) {
            local_3a8 = (uint *)&local_340;
            local_340 = (longlong ***********)CONCAT44(fVar45,3);
            ppppppplStack_338 = (longlong *******)CONCAT44(ppppppplStack_338._4_4_,local_2d8._0_4_);
            local_2b8 = (undefined8 *)CONCAT44(uVar69,uVar68);
            local_398 = (undefined8 *)&DAT_14cad0f10;
            local_3a0 = (longlong ************)&DAT_14cad0f68;
            local_3b8 = &DAT_14c8463d0;
            local_3b0 = (undefined8 *)((ulonglong)local_3b0._4_4_ << 0x20);
            FUN_14021655c(uVar23,&local_278,&local_178);
            if (0.949999988079071 <= local_228) goto LAB_1404f5651;
            if (param_1[1] == 0) {
LAB_1404f924b:
              lVar22 = 0;
            }
            else {
              uVar43 = *param_1;
              lVar22 = 0;
              if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                plVar30 = (longlong *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                if ((plVar30 == (longlong *)0x0) ||
                   ((*(uint *)(plVar30 + 2) != param_1[1] ||
                    ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) goto LAB_1404f924b;
                lVar22 = *plVar30;
              }
            }
            bVar42 = (double)*(float *)(lVar22 + 0x228) <= local_228;
          }
          else {
            local_3a8 = (uint *)&local_340;
            local_340 = (longlong ***********)CONCAT44(local_2d8._0_4_,3);
            ppppppplStack_338 = (longlong *******)CONCAT44(ppppppplStack_338._4_4_,local_2d8._0_4_);
            local_2b8 = (undefined8 *)CONCAT44(uVar69,uVar68);
            local_398 = (undefined8 *)&DAT_14cad0f10;
            local_3a0 = (longlong ************)&DAT_14cad0f68;
            local_3b8 = &DAT_14c8463d0;
            local_3b0 = (undefined8 *)((ulonglong)local_3b0._4_4_ << 0x20);
            FUN_14021655c(uVar23,&local_278,&local_178);
            bVar42 = local_278._4_4_ < 1.0;
            fVar59 = (float)(*(double *)(param_1 + 0x48) - (double)local_258);
          }
          if ((bVar42) && (fVar59 < 0.0)) {
            dVar60 = (double)local_2d8._0_4_;
            dVar49 = (double)(float)local_318;
            dVar50 = 1.0 / (local_228 * local_228) + -1.0;
            if (dVar50 < 0.0) {
              dVar50 = sqrt(dVar50);
            }
            else {
              dVar50 = SQRT(dVar50);
            }
            if ((double)-fVar59 < dVar49 * dVar50 + dVar60) goto LAB_1404f683a;
          }
        }
        goto LAB_1404f5651;
      }
LAB_1404f683a:
      *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x40;
      lVar22 = FUN_140153468(param_1);
      if (((char)plVar38[0x2f] == '\x03') && (param_1[0x3b] != 0)) {
        puVar32 = param_1 + 0x3a;
        uVar43 = *puVar32;
        if ((-1 < (int)uVar43) &&
           (((((int)uVar43 < DAT_14c9647dc &&
              (lVar24 = (ulonglong)((uVar43 & 0xffff) * 0x18) +
                        *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8),
              lVar24 != 0)) && (*(uint *)(lVar24 + 0x10) == param_1[0x3b])) &&
            ((*(uint *)(lVar24 + 8) & 0x10200000) == 0)))) {
          local_278 = (code *)((ulonglong)local_278 & 0xffffffffffffff00);
          ppppppplStack_250 = (longlong *******)((ulonglong)ppppppplStack_250 & 0xffffffff00000000);
          FUN_1405833e0(&local_278,puVar32);
          plVar30 = (longlong *)FUN_1447262c2(&local_278);
          if (plVar30 == (longlong *)0x0) {
LAB_1404f7948:
            plVar33 = (longlong *)0x0;
          }
          else {
            uVar25 = FUN_14069ce7c();
            plVar30 = (longlong *)(**(code **)(*plVar30 + 0x288))(plVar30,uVar25);
            if (plVar30 == (longlong *)0x0) goto LAB_1404f7948;
            uVar25 = FUN_14069ce7c();
            plVar33 = (longlong *)FUN_144718840(plVar30,uVar25);
            if (plVar30 == plVar33) goto LAB_1404f7948;
          }
          if ((longlong)(int)ppppppplStack_250 != 0) {
            lVar40 = (longlong)(int)ppppppplStack_250 + -1;
            local_360 = DAT_14c9a3da0;
            lVar24 = lVar40 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar24),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar24));
            if (*(longlong *)(local_360 + lVar24) != 0) {
              FUN_1400020a8();
            }
            lVar17 = DAT_14c9a3da0;
            iVar20 = (int)lVar40;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
            }
            *(undefined4 *)(lVar17 + lVar24) = 0xffffffff;
            iVar19 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar19 = DAT_14c9a3dd0;
            }
            *(int *)(lVar17 + 4 + lVar24) = iVar19;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar34 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar34 = DAT_14c9a3dc0;
            }
            iVar19 = iVar20 + 0x1f;
            if (-1 < iVar20) {
              iVar19 = iVar20;
            }
            bVar35 = (byte)lVar40 & 0x1f;
            DAT_14c9a3dd0 = iVar20;
            *(uint *)(puVar34 + (longlong)(iVar19 >> 5) * 4) =
                 *(uint *)(puVar34 + (longlong)(iVar19 >> 5) * 4) &
                 (-2 << bVar35 | 0xfffffffeU >> 0x20 - bVar35);
            ppppppplStack_250 =
                 (longlong *******)((ulonglong)ppppppplStack_250 & 0xffffffff00000000);
          }
          if (((char)local_278 == '\x03') && (local_268 != (longlong *******)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_268 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*local_268)[2])();
            }
          }
          if ((plVar33 != (longlong *)0x0) &&
             ((lVar24 = (**(code **)(*plVar33 + 0x10))(), *(char *)(lVar24 + 0x18) != '\x01' ||
              (*(char *)(lVar24 + 0x40) == '\0')))) {
            lVar24 = plVar38[0x39];
            if (lVar24 == 0) {
              pppppppplVar26 = &DAT_14c8464e0;
              local_268 = DAT_14c8464f0;
            }
            else {
              pppppppplVar26 = (longlong ********)(lVar24 + 0x260);
              local_268 = *(longlong ********)(lVar24 + 0x270);
            }
            if (param_1[0x3b] == 0) {
LAB_1404f969b:
              lVar24 = 0;
            }
            else {
              uVar43 = *puVar32;
              lVar24 = 0;
              if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                plVar38 = (longlong *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                if ((plVar38 == (longlong *)0x0) ||
                   ((*(uint *)(plVar38 + 2) != param_1[0x3b] ||
                    ((*(uint *)(plVar38 + 1) & 0x10200000) != 0)))) goto LAB_1404f969b;
                lVar24 = *plVar38;
              }
            }
            lVar24 = *(longlong *)(lVar24 + 0x1c8);
            if (lVar24 == 0) {
              pppppppplVar27 = &DAT_14c8464e0;
              ppppppplVar67 = DAT_14c8464f0;
            }
            else {
              pppppppplVar27 = (longlong ********)(lVar24 + 0x260);
              ppppppplVar67 = *(longlong ********)(lVar24 + 0x270);
            }
            local_268 = (longlong *******)((double)local_268 - (double)ppppppplVar67);
            local_278 = (code *)((double)*pppppppplVar26 - (double)*pppppppplVar27);
            ppppppplStack_270 =
                 (longlong *******)((double)pppppppplVar26[1] - (double)pppppppplVar27[1]);
            dVar60 = (double)local_268 * (double)local_268 +
                     (double)local_278 * (double)local_278 +
                     (double)ppppppplStack_270 * (double)ppppppplStack_270;
            if ((dVar60 != 1.0) || (NAN(dVar60))) {
              if (9.99999993922529e-09 <= dVar60) {
                dVar60 = 1.0 / SQRT(dVar60);
                local_268 = (longlong *******)((double)local_268 * dVar60);
                ppppppplStack_270 = (longlong *******)((double)ppppppplStack_270 * dVar60);
                local_278 = (code *)(dVar60 * (double)local_278);
              }
              else {
                local_268 = DAT_14c8464f0;
                local_278 = (code *)DAT_14c8464e0;
                ppppppplStack_270 = DAT_14c8464e8;
              }
            }
            if (((*(longlong *)(param_1 + 2) != 0) &&
                (plVar38 = *(longlong **)(param_1 + 4), plVar38 != (longlong *)0x0)) &&
               (0 < (int)plVar38[1])) {
              iVar20 = (int)plVar38[1];
              do {
                if (iVar20 == 0) {
                  if (param_1[0x3b] == 0) {
LAB_1404f96d6:
                    uVar25 = 0;
                  }
                  else {
                    uVar43 = *puVar32;
                    uVar25 = 0;
                    if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                      puVar29 = (undefined8 *)
                                ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                                *(longlong *)
                                 ((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                      if ((puVar29 == (undefined8 *)0x0) ||
                         ((*(uint *)(puVar29 + 2) != param_1[0x3b] ||
                          ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f96d6;
                      uVar25 = *puVar29;
                    }
                  }
                  (**(code **)(_DAT_00000000 + 0xd8))(0,uVar25,&local_278);
                  goto LAB_1404f68a2;
                }
                LOCK();
                iVar19 = (int)plVar38[1];
                bVar42 = iVar20 == iVar19;
                if (bVar42) {
                  *(int *)(plVar38 + 1) = iVar20 + 1;
                  iVar19 = iVar20;
                }
                iVar20 = iVar19;
                UNLOCK();
              } while (!bVar42);
              if (param_1[0x3b] == 0) {
LAB_1404f96dd:
                uVar25 = 0;
              }
              else {
                uVar43 = *puVar32;
                uVar25 = 0;
                if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                  puVar29 = (undefined8 *)
                            ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                            *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8)
                            );
                  if ((puVar29 == (undefined8 *)0x0) ||
                     ((*(uint *)(puVar29 + 2) != param_1[0x3b] ||
                      ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f96dd;
                  uVar25 = *puVar29;
                }
              }
              (**(code **)(**(longlong **)(param_1 + 2) + 0xd8))
                        (*(longlong **)(param_1 + 2),uVar25,&local_278);
              LOCK();
              plVar30 = plVar38 + 1;
              *(int *)plVar30 = (int)*plVar30 + -1;
              UNLOCK();
              if ((int)*plVar30 == 0) {
                (**(code **)*plVar38)(plVar38);
                LOCK();
                piVar1 = (int *)((longlong)plVar38 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar38 + 0x10))(plVar38);
                }
              }
            }
          }
        }
      }
LAB_1404f68a2:
      lVar24 = FUN_140153468(param_1);
      if ((lVar24 == 0) || (lVar24 = FUN_140153468(param_1), lVar24 != lVar22)) goto LAB_1404f5421;
LAB_1404f9076:
      FUN_141105826(param_1,CONCAT71((int7)(uVar37 >> 8),(byte)uVar37 | bVar3 & 1) & 0xffffffff);
      goto LAB_1404f5421;
    }
LAB_1404f5651:
    lVar22 = FUN_140153468();
    if ((*(byte *)(lVar22 + 0xa1) & 2) != 0) {
      if (param_1[1] == 0) {
LAB_1404f68c9:
        lVar22 = 0;
      }
      else {
        uVar43 = *param_1;
        lVar22 = 0;
        if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
          plVar30 = (longlong *)
                    ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                    *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
          if ((plVar30 == (longlong *)0x0) ||
             ((*(uint *)(plVar30 + 2) != param_1[1] || ((*(uint *)(plVar30 + 1) & 0x10200000) != 0))
             )) goto LAB_1404f68c9;
          lVar22 = *plVar30;
        }
      }
      lVar22 = *(longlong *)(lVar22 + 0xa8);
      if (lVar22 != 0) {
        lVar24 = *(longlong *)(lVar22 + 0x1c8);
        if (lVar24 == 0) {
          pppppppplVar26 = &DAT_14c8464e0;
          uVar68 = SUB84(DAT_14c8464f0,0);
          uVar69 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar68 = (undefined4)*(undefined8 *)(lVar24 + 0x270);
          uVar69 = (undefined4)((ulonglong)*(undefined8 *)(lVar24 + 0x270) >> 0x20);
          pppppppplVar26 = (longlong ********)(lVar24 + 0x260);
        }
        ppppppplVar67 = *pppppppplVar26;
        ppppppplVar51 = pppppppplVar26[1];
        lVar24 = FUN_140153468(param_1);
        local_278 = (code *)((ulonglong)local_278 & 0xffffffffffffff00);
        ppppppplStack_250 = (longlong *******)((ulonglong)ppppppplStack_250 & 0xffffffff00000000);
        FUN_1456bb102(&local_278,lVar22);
        FUN_1448729ea(lVar24 + 0xa8,&local_2b8,&local_278);
        if (local_298 == 3) {
          bVar35 = 3;
          fVar75 = (float)local_2b8;
        }
        else {
          FUN_1400b56fe(&local_178,&local_2b8,3);
          if ((byte)local_158 == 0) {
            fVar75 = 2000.0;
          }
          else {
            fVar75 = local_178._0_4_;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_158 * 0x120))
          ;
          if (pcVar4 != (code *)0x0) {
            pppppppppppplVar41 = &local_178;
            if (0x18 < (ushort)local_160) {
              pppppppppppplVar41 = (longlong ************)local_178;
            }
            (*pcVar4)(pppppppppppplVar41);
          }
          bVar35 = local_298;
          if (0x18 < (ushort)local_160) {
            FUN_1400020a8(local_178);
            bVar35 = local_298;
          }
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar35 * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar29 = &local_2b8;
          if (0x18 < dStack_2a0._0_2_) {
            puVar29 = local_2b8;
          }
          (*pcVar4)(puVar29);
        }
        if (0x18 < dStack_2a0._0_2_) {
          FUN_1400020a8(local_2b8);
        }
        lVar22 = DAT_14c9a3da0;
        if ((longlong)(int)ppppppplStack_250 != 0) {
          lVar24 = (longlong)(int)ppppppplStack_250 + -1;
          lVar40 = lVar24 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar40),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar40));
          if (*(longlong *)(lVar22 + lVar40) != 0) {
            FUN_1400020a8();
          }
          lVar22 = DAT_14c9a3da0;
          iVar20 = (int)lVar24;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
          }
          *(undefined4 *)(lVar22 + lVar40) = 0xffffffff;
          iVar19 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar19 = DAT_14c9a3dd0;
          }
          *(int *)(lVar22 + 4 + lVar40) = iVar19;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar34 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar34 = DAT_14c9a3dc0;
          }
          iVar19 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar19 = iVar20;
          }
          bVar35 = (byte)lVar24 & 0x1f;
          DAT_14c9a3dd0 = iVar20;
          *(uint *)(puVar34 + (longlong)(iVar19 >> 5) * 4) =
               *(uint *)(puVar34 + (longlong)(iVar19 >> 5) * 4) &
               (-2 << bVar35 | 0xfffffffeU >> 0x20 - bVar35);
          ppppppplStack_250 = (longlong *******)((ulonglong)ppppppplStack_250 & 0xffffffff00000000);
        }
        if (((char)local_278 == '\x03') && (local_268 != (longlong *******)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_268 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*local_268)[2])();
          }
        }
        dVar60 = *(double *)(param_1 + 0x60) - (double)CONCAT44(uVar69,uVar68);
        if ((double)(fVar75 * fVar75) <=
            dVar60 * dVar60 +
            (*(double *)(param_1 + 0x5e) - (double)ppppppplVar51) *
            (*(double *)(param_1 + 0x5e) - (double)ppppppplVar51) +
            (*(double *)(param_1 + 0x5c) - (double)ppppppplVar67) *
            (*(double *)(param_1 + 0x5c) - (double)ppppppplVar67)) {
          FUN_141105826(param_1);
        }
      }
    }
    uVar43 = param_1[1];
    if ((char)(byte)param_1[0xa6] < '\0') {
      if (uVar43 == 0) {
LAB_1404f68d8:
        lVar22 = 0;
      }
      else {
        uVar21 = *param_1;
        lVar22 = 0;
        if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
          plVar30 = (longlong *)
                    ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
          if ((plVar30 == (longlong *)0x0) ||
             ((*(uint *)(plVar30 + 2) != uVar43 || ((*(uint *)(plVar30 + 1) & 0x10200000) != 0))))
          goto LAB_1404f68d8;
          lVar22 = *plVar30;
        }
      }
      if ((&DAT_00001100)[lVar22] != '\x03') {
        *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x40;
        goto LAB_1404f9076;
      }
    }
    else {
      if ((((uVar43 == 0) || (uVar21 = *param_1, (int)uVar21 < 0)) || (DAT_14c9647dc <= (int)uVar21)
          ) || ((plVar30 = (longlong *)
                           ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                           *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8))
                , plVar30 == (longlong *)0x0 || (*(uint *)(plVar30 + 2) != uVar43)))) {
        lVar22 = 0;
        plVar30 = _DAT_00001ce8;
        if (DAT_00001100 != '\x05') goto LAB_1404f5d00;
LAB_1404f5767:
        lVar22 = *(longlong *)(lVar22 + 0x110);
        if (((*(int *)(lVar22 + 0x11c) == 0) ||
            (uVar43 = *(uint *)(lVar22 + 0x118), (int)uVar43 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar43 ||
            ((((plVar33 = (longlong *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8)),
               plVar33 == (longlong *)0x0 || ((int)plVar33[2] != *(int *)(lVar22 + 0x11c))) ||
              ((*(uint *)(plVar33 + 1) & 0x10200000) != 0)) || (*plVar33 == 0)))))) {
          lVar24 = *(longlong *)(lVar22 + 0xb0);
          if (lVar24 == 0) {
            lVar24 = FUN_1448abda6(lVar22);
            fVar75 = 0.0;
            if (lVar24 == 0) goto LAB_1404f5d09;
          }
          if ((*(longlong *)(lVar24 + 0x118) == 0) && (lVar24 = FUN_14572cb46(lVar24), lVar24 == 0))
          {
            fVar75 = 0.0;
            goto LAB_1404f5d09;
          }
        }
        if ((((*(int *)(lVar22 + 0x11c) == 0) ||
             (uVar43 = *(uint *)(lVar22 + 0x118), (int)uVar43 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar43 ||
             (((plVar33 = (longlong *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8)),
               plVar33 == (longlong *)0x0 || ((int)plVar33[2] != *(int *)(lVar22 + 0x11c))) ||
              ((*(uint *)(plVar33 + 1) & 0x10200000) != 0)))))) || (lVar24 = *plVar33, lVar24 == 0))
        {
          lVar22 = *(longlong *)(lVar22 + 0xb0);
          if ((lVar22 == 0) && (lVar22 = FUN_1448abda6(), lVar22 == 0)) {
            lVar24 = 0;
          }
          else {
            lVar24 = *(longlong *)(lVar22 + 0x118);
            if (lVar24 == 0) {
              lVar24 = FUN_14572cb46(lVar22);
            }
          }
        }
        fVar75 = *(float *)(lVar24 + 0x3d0) * 0.5;
      }
      else {
        if ((*(uint *)(plVar30 + 1) & 0x10200000) == 0) {
          lVar24 = *plVar30;
        }
        else {
          lVar24 = 0;
        }
        if ((*(uint *)(plVar30 + 1) & 0x10200000) == 0) {
          lVar40 = *plVar30;
        }
        else {
          lVar40 = 0;
        }
        if ((*(uint *)(plVar30 + 1) & 0x10200000) == 0) {
          lVar22 = *plVar30;
        }
        else {
          lVar22 = 0;
        }
        plVar30 = *(longlong **)(&DAT_00001ce8 + lVar24);
        if ((&DAT_00001100)[lVar40] == '\x05') goto LAB_1404f5767;
LAB_1404f5d00:
        fVar75 = *(float *)(lVar22 + 0x294);
      }
LAB_1404f5d09:
      lVar22 = FUN_140153468(param_1);
      if (((*(byte *)(lVar22 + 0xf8) & 0x40) == 0) ||
         (lVar22 = FUN_140153468(param_1), *(char *)(lVar22 + 0x6f9) != '\x02')) {
        lVar24 = FUN_140153468(param_1);
        lVar22 = *(longlong *)(lVar24 + 0x240) + 0x30;
        if (*(longlong *)(lVar24 + 0x240) == 0) {
          lVar22 = lVar24 + 0x1c0;
        }
        if (0 < *(int *)(lVar22 + 0x78)) {
          FUN_140153468(param_1);
          FUN_1448c9f94(lVar22);
        }
        if (param_1[1] == 0) {
LAB_1404f68d0:
          plVar33 = (longlong *)0x0;
        }
        else {
          uVar43 = *param_1;
          plVar33 = (longlong *)0x0;
          if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
            puVar29 = (undefined8 *)
                      ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                      *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
            if ((puVar29 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar29 + 2) != param_1[1] ||
                ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f68d0;
            plVar33 = (longlong *)*puVar29;
          }
        }
        FUN_140153468(param_1);
        fVar45 = (float)(**(code **)(*plVar33 + 0xe58))();
        if (((byte)param_1[0xa6] & 0x10) == 0) {
          param_1[0x15] = (uint)fVar45;
        }
        else {
          if (param_1[1] == 0) {
LAB_1404f6a6e:
            lVar22 = 0;
          }
          else {
            uVar43 = *param_1;
            lVar22 = 0;
            if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
              plVar33 = (longlong *)
                        ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                        *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
              if ((plVar33 == (longlong *)0x0) ||
                 ((*(uint *)(plVar33 + 2) != param_1[1] ||
                  ((*(uint *)(plVar33 + 1) & 0x10200000) != 0)))) goto LAB_1404f6a6e;
              lVar22 = *plVar33;
            }
          }
          fVar76 = fVar45 - (float)param_1[0x15];
          fVar44 = fVar45;
          if (1e-08 <= fVar76 * fVar76) {
            fVar44 = *(float *)(lVar22 + 0x2ec) * fVar46;
            if (fVar44 <= fVar76) {
              fVar76 = fVar44;
            }
            if (fVar76 <= -fVar44) {
              fVar76 = -fVar44;
            }
            fVar44 = (float)param_1[0x15] + fVar76;
          }
          param_1[0x15] = (uint)fVar44;
          *(byte *)(param_1 + 0xa6) =
               (byte)param_1[0xa6] & 0xef | (1e-08 < ABS(fVar44 - fVar45)) << 4;
        }
        lVar22 = FUN_140153468(param_1);
        if (((*(byte *)(lVar22 + 0xf8) & 0x10) != 0) &&
           (lVar22 = FUN_140153468(param_1), *(char *)(lVar22 + 0x168) == '\0')) {
          param_1[0x17] = param_1[0x15];
          fVar44 = (float)FUN_143cf5b0a(param_1);
          param_1[0x15] = (uint)fVar44;
          fVar45 = (float)param_1[0x17];
          if ((fVar45 != 0.0) || (NAN(fVar45))) {
            param_1[0x17] = (uint)(fVar44 / fVar45);
          }
        }
      }
      else {
        plVar33 = (longlong *)plVar30[0x78];
        if (plVar33 != (longlong *)0x0) {
          if (DAT_14cb61cd0 == 0) {
            local_380 = &local_278;
            local_278 = FUN_141030f22;
            local_370 = FUN_14081d0ea;
            local_378 = &LAB_1463b31ae;
            local_388 = &LAB_1486dca4f;
            local_390 = &LAB_1464f50a6;
            local_398 = (undefined8 *)&DAT_149e063b2;
            local_3a0 = (longlong ************)0x0;
            local_3a8 = (uint *)CONCAT44(local_3a8._4_4_,0x10000004);
            local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,8);
            local_3b8 = (double *)CONCAT44(local_3b8._4_4_,0xd70);
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar33[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar33[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
               DAT_14cb61cd0 + 0x30)) &&
             (cVar18 = (**(code **)(*plVar33 + 0x6c8))(plVar33), cVar18 != '\0')) {
            lVar24 = FUN_140153468(param_1);
            lVar22 = *(longlong *)(lVar24 + 0x240) + 0x30;
            if (*(longlong *)(lVar24 + 0x240) == 0) {
              lVar22 = lVar24 + 0x1c0;
            }
            if (0 < *(int *)(lVar22 + 0x78)) {
              FUN_140153468(param_1);
              FUN_1448c9f94(lVar22);
            }
            if (param_1[1] == 0) {
LAB_1404f947a:
              plVar33 = (longlong *)0x0;
            }
            else {
              uVar43 = *param_1;
              plVar33 = (longlong *)0x0;
              if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                puVar29 = (undefined8 *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                if ((puVar29 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar29 + 2) != param_1[1] ||
                    ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f947a;
                plVar33 = (longlong *)*puVar29;
              }
            }
            uVar23 = FUN_140153468(param_1);
            fVar45 = (float)(**(code **)(*plVar33 + 0xe58))(plVar33,uVar23);
            lVar24 = FUN_140153468(param_1);
            lVar22 = *(longlong *)(lVar24 + 0x240) + 0x30;
            if (*(longlong *)(lVar24 + 0x240) == 0) {
              lVar22 = lVar24 + 0x1c0;
            }
            if (0 < *(int *)(lVar22 + 0x78)) {
              FUN_140153468(param_1);
              FUN_1448c9f94(lVar22);
            }
            if (param_1[1] == 0) {
LAB_1404f9482:
              plVar33 = (longlong *)0x0;
            }
            else {
              uVar43 = *param_1;
              plVar33 = (longlong *)0x0;
              if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                puVar29 = (undefined8 *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                if ((puVar29 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar29 + 2) != param_1[1] ||
                    ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f9482;
                plVar33 = (longlong *)*puVar29;
              }
            }
            FUN_140153468(param_1);
            fVar76 = (float)(**(code **)(*plVar33 + 0xe58))(plVar33);
            fVar44 = (float)param_1[0x91];
            fVar70 = 0.0;
            fVar59 = (float)param_1[0x15] - fVar76;
            if ((fVar44 != 0.0) || (NAN(fVar44))) {
              fVar76 = (float)param_1[0x15] - (fVar59 - fVar44 * ABS(fVar59)) * fVar46 * fVar75;
            }
            else {
              if (0.0 < fVar46) {
                fVar70 = 0.0;
                fVar44 = fVar59;
                do {
                  fVar72 = in_XMM1._0_4_;
                  fVar9 = 0.03;
                  if (fVar72 <= 0.03) {
                    fVar9 = fVar72;
                  }
                  in_XMM1._0_4_ = fVar72 - fVar9;
                  fVar44 = fVar44 + fVar44 * -2.0 * fVar9 * fVar75;
                  uVar43 = -(uint)(0.0 < fVar59 * fVar44);
                  fVar70 = (float)(~uVar43 & (uint)fVar70 |
                                  (uint)((fVar9 * fVar44) / fVar46 + fVar70) & uVar43);
                } while (0.0 < in_XMM1._0_4_);
              }
              fVar76 = fVar76 + (float)(~-(uint)(fVar70 < 100.0) &
                                       ~-(uint)(fVar59 * fVar70 < 0.0) & (uint)fVar70);
            }
            param_1[0x15] = (uint)fVar76;
            if (param_1[1] == 0) {
LAB_1404f948a:
              lVar22 = 0;
            }
            else {
              uVar43 = *param_1;
              lVar22 = 0;
              if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                plVar33 = (longlong *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                if ((plVar33 == (longlong *)0x0) ||
                   ((*(uint *)(plVar33 + 2) != param_1[1] ||
                    ((*(uint *)(plVar33 + 1) & 0x10200000) != 0)))) goto LAB_1404f948a;
                lVar22 = *plVar33;
              }
            }
            fVar44 = fVar45 - fVar76;
            if (1e-08 <= fVar44 * fVar44) {
              fVar45 = *(float *)(lVar22 + 0x2ec) * fVar46;
              if (fVar45 <= fVar44) {
                fVar44 = fVar45;
              }
              if (fVar44 <= -fVar45) {
                fVar44 = -fVar45;
              }
              fVar45 = fVar76 + fVar44;
            }
            param_1[0x15] = (uint)fVar45;
          }
        }
      }
      lVar22 = FUN_140153468(param_1);
      if ((((*(byte *)(lVar22 + 0xf8) & 0x40) == 0) ||
          (lVar22 = FUN_140153468(param_1), *(char *)(lVar22 + 0x6fa) != '\x02')) ||
         (plVar30 = (longlong *)plVar30[0x78], plVar30 == (longlong *)0x0)) {
LAB_1404f6146:
        param_1[0x16] = 0;
      }
      else {
        if (DAT_14cb61cd0 == 0) {
          local_380 = &local_278;
          local_278 = FUN_141030f22;
          local_370 = FUN_14081d0ea;
          local_378 = &LAB_1463b31ae;
          local_388 = &LAB_1486dca4f;
          local_390 = &LAB_1464f50a6;
          local_398 = (undefined8 *)&DAT_149e063b2;
          local_3a0 = (longlong ************)0x0;
          local_3a8 = (uint *)CONCAT44(local_3a8._4_4_,0x10000004);
          local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,8);
          local_3b8 = (double *)CONCAT44(local_3b8._4_4_,0xd70);
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if (((*(int *)(plVar30[2] + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) !=
             DAT_14cb61cd0 + 0x30)) ||
           (((*(byte *)(plVar30 + 0x84) & 2) == 0 ||
            (cVar18 = (**(code **)(*plVar30 + 0x6c8))(plVar30), cVar18 == '\0'))))
        goto LAB_1404f6146;
        lVar24 = FUN_140153468(param_1);
        lVar22 = *(longlong *)(lVar24 + 0x240) + 0x30;
        if (*(longlong *)(lVar24 + 0x240) == 0) {
          lVar22 = lVar24 + 0x1c0;
        }
        if (0 < *(int *)(lVar22 + 0x78)) {
          FUN_140153468(param_1);
          FUN_1448c9f94(lVar22);
        }
        if (param_1[1] == 0) {
LAB_1404f95ab:
          plVar30 = (longlong *)0x0;
        }
        else {
          uVar43 = *param_1;
          plVar30 = (longlong *)0x0;
          if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
            puVar29 = (undefined8 *)
                      ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                      *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
            if ((puVar29 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar29 + 2) != param_1[1] ||
                ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f95ab;
            plVar30 = (longlong *)*puVar29;
          }
        }
        FUN_140153468(param_1);
        fVar76 = (float)(**(code **)(*plVar30 + 0xe58))(plVar30);
        fVar45 = (float)param_1[0x16];
        fVar44 = (float)param_1[0x92];
        fVar59 = 0.0;
        if ((fVar44 != 0.0) || (NAN(fVar44))) {
          fVar45 = fVar45 - (fVar45 - fVar44 * ABS(fVar45)) * fVar46 * fVar75;
        }
        else {
          if (0.0 < fVar46) {
            fVar59 = 0.0;
            fVar44 = fVar45;
            fVar70 = fVar46;
            do {
              fVar9 = 0.03;
              if (fVar70 <= 0.03) {
                fVar9 = fVar70;
              }
              fVar70 = fVar70 - fVar9;
              fVar44 = fVar44 + fVar44 * -2.0 * fVar9 * fVar75;
              uVar43 = -(uint)(0.0 < fVar45 * fVar44);
              fVar59 = (float)(~uVar43 & (uint)fVar59 |
                              (uint)((fVar9 * fVar44) / fVar46 + fVar59) & uVar43);
            } while (0.0 < fVar70);
          }
          fVar45 = (float)(~-(uint)(fVar59 < 100.0) &
                          ~-(uint)(fVar45 * fVar59 < 0.0) & (uint)(fVar59 + 0.0));
        }
        param_1[0x16] = (uint)fVar45;
        if (param_1[1] == 0) {
LAB_1404f95b3:
          lVar22 = 0;
        }
        else {
          uVar43 = *param_1;
          lVar22 = 0;
          if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
            plVar30 = (longlong *)
                      ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                      *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
            if ((plVar30 == (longlong *)0x0) ||
               ((*(uint *)(plVar30 + 2) != param_1[1] ||
                ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) goto LAB_1404f95b3;
            lVar22 = *plVar30;
          }
        }
        fVar75 = fVar76 - fVar45;
        if (1e-08 <= fVar75 * fVar75) {
          fVar44 = *(float *)(lVar22 + 0x2ec) * fVar46;
          if (fVar44 <= fVar75) {
            fVar75 = fVar44;
          }
          if (fVar75 <= -fVar44) {
            fVar75 = -fVar44;
          }
          fVar76 = fVar45 + fVar75;
        }
        param_1[0x16] = (uint)fVar76;
      }
      lVar22 = FUN_140153468();
      if ((*(byte *)(lVar22 + 0xf8) & 0x40) != 0) {
        if (param_1[1] == 0) {
LAB_1404f6a67:
          lVar22 = 0;
        }
        else {
          uVar43 = *param_1;
          lVar22 = 0;
          if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
            plVar30 = (longlong *)
                      ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                      *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
            if ((plVar30 == (longlong *)0x0) ||
               ((*(uint *)(plVar30 + 2) != param_1[1] ||
                ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) goto LAB_1404f6a67;
            lVar22 = *plVar30;
          }
        }
        plVar30 = *(longlong **)(&DAT_00001ce8 + lVar22);
        plVar33 = (longlong *)plVar30[0x78];
        if (((plVar33 != (longlong *)0x0) && ((*(byte *)(plVar33 + 0x84) & 2) != 0)) &&
           (cVar18 = (**(code **)(*plVar33 + 0x6c8))(), cVar18 != '\0')) {
          lVar22 = FUN_140153468(param_1);
          bVar35 = 1;
          if ((*(byte *)(lVar22 + 0xa0) & 8) == 0) {
            lVar22 = FUN_140153468(param_1);
            bVar35 = (*(byte *)(lVar22 + 0xa0) & 4) >> 2;
          }
          lVar22 = FUN_140153468(param_1);
          dVar60 = 0.0;
          dVar50 = 0.0;
          if (*(char *)(lVar22 + 0x6f9) == '\x01') {
            dVar50 = (double)(ABS((float)param_1[0x91]) *
                             (float)param_1[(ulonglong)((float)param_1[0x91] <= 0.0) + 0x19] *
                             fVar46);
          }
          lVar22 = FUN_140153468(param_1);
          if (*(char *)(lVar22 + 0x6fa) == '\x01') {
            dVar60 = (double)((float)param_1[0x18] * fVar46 * (float)param_1[0x92]);
          }
          lVar22 = FUN_140153468(param_1);
          if ((*(byte *)(lVar22 + 0xf8) & 0x80) == 0) {
            (**(code **)(*(longlong *)plVar30[0x78] + 0x718))
                      ((longlong *)plVar30[0x78],&local_278,&local_178);
            dVar48 = *(double *)(param_1 + 0x52);
            dVar49 = *(double *)(param_1 + 0x54);
            dVar47 = 0.0;
            if (((dVar48 != 0.0) || (NAN(dVar48))) || ((dVar49 != 0.0 || (NAN(dVar49))))) {
              dVar47 = atan2(dVar49,dVar48);
              dVar47 = dVar47 * 57.29577951308232;
              dVar48 = *(double *)(param_1 + 0x52);
              dVar49 = *(double *)(param_1 + 0x54);
            }
            _X = SQRT(dVar48 * dVar48 + dVar49 * dVar49);
            dVar49 = *(double *)(param_1 + 0x56);
            dVar48 = 0.0;
            if (((dVar49 != 0.0) || (NAN(dVar49))) || ((_X != 0.0 || (NAN(_X))))) {
              dVar48 = atan2(dVar49,_X);
              dVar48 = dVar48 * 57.29577951308232;
            }
            auVar53._8_8_ = dVar47;
            auVar53._0_8_ = dVar48;
            auVar53 = divpd(auVar53,_DAT_1499387d0);
            auVar53 = roundpd(auVar53,auVar53,3);
            auVar63._0_8_ = dVar48 - auVar53._0_8_ * (double)DAT_1499387d0;
            auVar63._8_8_ = dVar47 - auVar53._8_8_ * DAT_1499387d0._8_8_;
            auVar74._0_8_ = (double)DAT_1499387d0 + auVar63._0_8_;
            auVar74._8_8_ = DAT_1499387d0._8_8_ + auVar63._8_8_;
            auVar54._8_8_ = -(ulonglong)(0.0 <= auVar63._8_8_);
            auVar54._0_8_ = -(ulonglong)(0.0 <= auVar63._0_8_);
            auVar53 = blendvpd(auVar74,auVar63,auVar54);
            auVar61._0_8_ = auVar53._0_8_ + -360.0;
            auVar61._8_8_ = auVar53._8_8_ + -360.0;
            auVar55._8_8_ = -(ulonglong)(180.0 < auVar53._8_8_);
            auVar55._0_8_ = -(ulonglong)(180.0 < auVar53._0_8_);
            auVar53 = blendvpd(auVar53,auVar61,auVar55);
            dVar49 = (double)FUN_144719204((double)ppppppplStack_170 - auVar53._8_8_,
                                           0x4076800000000000);
            dVar49 = (double)(~-(ulonglong)(dVar49 < 0.0) & (ulonglong)dVar49 |
                             (ulonglong)(dVar49 + 360.0) & -(ulonglong)(dVar49 < 0.0));
            lVar22 = FUN_140153468(param_1);
            if (*(char *)(lVar22 + 0x168) != '\0') {
              dVar48 = (double)FUN_144719204((double)local_178 - auVar53._0_8_,0x4076800000000000);
              dVar48 = (double)(~-(ulonglong)(dVar48 < 0.0) & (ulonglong)dVar48 |
                               (ulonglong)(dVar48 + 360.0) & -(ulonglong)(dVar48 < 0.0));
              dVar50 = dVar50 + (double)(~-(ulonglong)(180.0 < dVar48) & (ulonglong)dVar48 |
                                        (ulonglong)(dVar48 + -360.0) & -(ulonglong)(180.0 < dVar48))
              ;
            }
            dVar60 = dVar60 + (double)(~-(ulonglong)(180.0 < dVar49) & (ulonglong)dVar49 |
                                      (ulonglong)(dVar49 + -360.0) & -(ulonglong)(180.0 < dVar49));
          }
          dVar50 = (double)FUN_144719204(dVar50,0x4076800000000000);
          dVar50 = (double)(~-(ulonglong)(dVar50 < 0.0) & (ulonglong)dVar50 |
                           (ulonglong)(dVar50 + 360.0) & -(ulonglong)(dVar50 < 0.0));
          if ((dVar50 != 0.0) || (NAN(dVar50))) {
LAB_1404f7c90:
            bVar42 = false;
          }
          else {
            dVar50 = (double)FUN_144719204(dVar60,0x4076800000000000);
            dVar50 = (double)(~-(ulonglong)(dVar50 < 0.0) & (ulonglong)dVar50 |
                             (ulonglong)(dVar50 + 360.0) & -(ulonglong)(dVar50 < 0.0));
            if ((dVar50 != 0.0) || (NAN(dVar50))) goto LAB_1404f7c90;
            dVar50 = (double)FUN_144719204(0,0x4076800000000000);
            bVar42 = (double)(~-(ulonglong)(dVar50 < 0.0) & (ulonglong)dVar50 |
                             (ulonglong)(dVar50 + 360.0) & -(ulonglong)(dVar50 < 0.0)) == 0.0;
          }
          dVar50 = *(double *)(param_1 + 0x54);
          if ((bVar42) || (bVar35 != 1)) {
            dVar60 = *(double *)(param_1 + 0x52);
            uVar68 = (undefined4)*(undefined8 *)(param_1 + 0x56);
            uVar69 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x56) >> 0x20);
          }
          else {
            dVar49 = *(double *)(param_1 + 0x52);
            dVar48 = 0.0;
            if ((((dVar50 != 0.0) || (NAN(dVar50))) || (dVar49 != 0.0)) || (NAN(dVar49))) {
              dVar48 = atan2(dVar50,dVar49);
              dVar48 = dVar48 * 57.29577951308232;
              dVar49 = *(double *)(param_1 + 0x52);
              dVar50 = *(double *)(param_1 + 0x54);
            }
            dVar47 = SQRT(dVar49 * dVar49 + dVar50 * dVar50);
            dVar50 = *(double *)(param_1 + 0x56);
            dVar49 = 0.0;
            if (((dVar50 != 0.0) || (NAN(dVar50))) || ((dVar47 != 0.0 || (NAN(dVar47))))) {
              dVar49 = atan2(dVar50,dVar47);
              dVar49 = dVar49 * 57.29577951308232;
            }
            auVar56._8_8_ = dVar48;
            auVar56._0_8_ = dVar49;
            auVar53 = divpd(auVar56,_DAT_1499387d0);
            auVar53 = roundpd(auVar53,auVar53,3);
            auVar64._0_8_ = dVar49 - auVar53._0_8_ * (double)DAT_1499387d0;
            auVar64._8_8_ = dVar48 - auVar53._8_8_ * DAT_1499387d0._8_8_;
            auVar71._0_8_ = (double)DAT_1499387d0 + auVar64._0_8_;
            auVar71._8_8_ = DAT_1499387d0._8_8_ + auVar64._8_8_;
            auVar57._8_8_ = -(ulonglong)(0.0 <= auVar64._8_8_);
            auVar57._0_8_ = -(ulonglong)(0.0 <= auVar64._0_8_);
            auVar53 = blendvpd(auVar71,auVar64,auVar57);
            auVar62._0_8_ = auVar53._0_8_ + -360.0;
            auVar62._8_8_ = auVar53._8_8_ + -360.0;
            auVar58._8_8_ = -(ulonglong)(180.0 < auVar53._8_8_);
            auVar58._0_8_ = -(ulonglong)(180.0 < auVar53._0_8_);
            auVar53 = blendvpd(auVar53,auVar62,auVar58);
            FUN_140153468(param_1);
            dVar50 = (double)FUN_144719204();
            dVar60 = (double)FUN_144719204(dVar60 + auVar53._8_8_,0x4076800000000000);
            dVar49 = sin(dVar50 * 0.017453292519943295);
            uVar68 = SUB84(dVar49,0);
            uVar69 = (undefined4)((ulonglong)dVar49 >> 0x20);
            dVar48 = cos(dVar50 * 0.017453292519943295);
            dVar50 = sin(dVar60 * 0.017453292519943295);
            dVar60 = cos(dVar60 * 0.017453292519943295);
            dVar50 = dVar50 * dVar48;
            dVar60 = dVar60 * dVar48;
            *(double *)(param_1 + 0x52) = dVar60;
            *(double *)(param_1 + 0x54) = dVar50;
            *(double *)(param_1 + 0x56) = dVar49;
          }
          dVar48 = (double)(float)param_1[0x15];
          dVar49 = (double)CONCAT44(uVar69,uVar68) * dVar48;
          *(double *)(param_1 + 0x6e) = dVar48 * dVar60;
          *(double *)(param_1 + 0x70) = dVar50 * dVar48;
          *(double *)(param_1 + 0x72) = dVar49;
          fVar75 = (float)param_1[0x16];
          if ((fVar75 != 0.0) || (NAN(fVar75))) {
            ppppppplVar65 = (longlong *******)(DAT_14c8462c0 * dVar50 - dVar60 * DAT_14c8462c8);
            ppppppplVar51 =
                 (longlong *******)
                 (dVar60 * DAT_14c8462d0 - (double)CONCAT44(uVar69,uVar68) * DAT_14c8462c0);
            ppppppplVar67 =
                 (longlong *******)
                 (DAT_14c8462c8 * (double)CONCAT44(uVar69,uVar68) - dVar50 * DAT_14c8462d0);
            dVar47 = (double)ppppppplVar65 * (double)ppppppplVar65 +
                     (double)ppppppplVar67 * (double)ppppppplVar67 +
                     (double)ppppppplVar51 * (double)ppppppplVar51;
            if (((dVar47 != 1.0) ||
                (ppppppplVar66 = ppppppplVar65, ppppppplVar52 = ppppppplVar51,
                ppppppplVar73 = ppppppplVar67, NAN(dVar47))) &&
               (ppppppplVar66 = DAT_14c8464f0, ppppppplVar52 = DAT_14c8464e8,
               ppppppplVar73 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar47)) {
              dVar47 = 1.0 / SQRT(dVar47);
              ppppppplVar66 = (longlong *******)((double)ppppppplVar65 * dVar47);
              ppppppplVar52 = (longlong *******)((double)ppppppplVar51 * dVar47);
              ppppppplVar73 = (longlong *******)((double)ppppppplVar67 * dVar47);
            }
            dVar47 = (double)fVar75;
            *(double *)(param_1 + 0x6e) = dVar48 * dVar60 + (double)ppppppplVar73 * dVar47;
            *(double *)(param_1 + 0x70) = dVar50 * dVar48 + (double)ppppppplVar52 * dVar47;
            *(double *)(param_1 + 0x72) = dVar49 + (double)ppppppplVar66 * dVar47;
          }
        }
        lVar22 = FUN_140153468(param_1);
        if (((lVar22 == 0) || (lVar22 = FUN_140153468(param_1), *(char *)(lVar22 + 0x6fa) == '\x02')
            ) || (lVar22 = FUN_140153468(param_1), *(char *)(lVar22 + 0x6f9) == '\x02')) {
LAB_1404f6b35:
          bVar42 = false;
        }
        else {
          lVar22 = FUN_140153468(param_1);
          bVar42 = true;
          if ((*(byte *)(lVar22 + 0x101) & 0x10) == 0) {
            lVar24 = FUN_140153468(param_1);
            lVar22 = *(longlong *)(lVar24 + 0x240) + 0x30;
            if (*(longlong *)(lVar24 + 0x240) == 0) {
              lVar22 = lVar24 + 0x1c0;
            }
            if (0 < *(int *)(lVar22 + 0x78)) goto LAB_1404f6b35;
          }
        }
        cVar18 = (**(code **)(*plVar30 + 0x700))();
        if ((cVar18 == '\0') && ((char)plVar30[0x2f] == '\x03')) {
          if (bVar42) {
            dVar60 = (double)(float)param_1[0x15];
            ppppppplVar51 = (longlong *******)(*(double *)(param_1 + 0x54) * dVar60);
            ppppppplVar65 = (longlong *******)(*(double *)(param_1 + 0x56) * dVar60);
            ppppppplVar67 = (longlong *******)(dVar60 * *(double *)(param_1 + 0x52));
          }
          else {
            lVar22 = FUN_140153468();
            ppppppplVar51 = DAT_14c8464e8;
            ppppppplVar65 = DAT_14c8464f0;
            ppppppplVar67 = DAT_14c8464e0;
            if ((lVar22 != 0) &&
               (lVar22 = FUN_140153468(), ppppppplVar51 = DAT_14c8464e8,
               ppppppplVar65 = DAT_14c8464f0, ppppppplVar67 = DAT_14c8464e0,
               (*(byte *)(lVar22 + 0xf8) & 0x40) != 0)) {
              fVar75 = (float)param_1[0x15];
              lVar22 = FUN_140153468();
              fVar45 = 0.0;
              if (*(char *)(lVar22 + 0x6fa) == '\x02') {
                fVar45 = (float)param_1[0x18];
              }
              ppppppplVar51 = DAT_14c8464e8;
              ppppppplVar65 = DAT_14c8464f0;
              ppppppplVar67 = DAT_14c8464e0;
              if (0.0001 <= fVar75 + fVar45) {
                dVar60 = (double)(fVar75 + fVar45);
                ppppppplVar67 = *(longlong ********)(param_1 + 0x6e);
                ppppppplVar51 = *(longlong ********)(param_1 + 0x70);
                ppppppplVar65 = *(longlong ********)(param_1 + 0x72);
                dVar50 = (double)ppppppplVar65 * (double)ppppppplVar65 +
                         (double)ppppppplVar67 * (double)ppppppplVar67 +
                         (double)ppppppplVar51 * (double)ppppppplVar51;
                if (dVar60 * dVar60 < dVar50) {
                  dVar60 = (1.0 / SQRT(dVar50)) * dVar60;
                  ppppppplVar51 = (longlong *******)((double)ppppppplVar51 * dVar60);
                  ppppppplVar65 = (longlong *******)((double)ppppppplVar65 * dVar60);
                  ppppppplVar67 = (longlong *******)((double)ppppppplVar67 * dVar60);
                }
              }
            }
          }
          *(longlong ********)(param_1 + 0x6e) = ppppppplVar67;
          *(longlong ********)(param_1 + 0x70) = ppppppplVar51;
          *(longlong ********)(param_1 + 0x72) = ppppppplVar65;
        }
        if (param_1[1] == 0) {
LAB_1404f73ff:
          plVar33 = (longlong *)0x0;
        }
        else {
          uVar43 = *param_1;
          plVar33 = (longlong *)0x0;
          if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
            puVar29 = (undefined8 *)
                      ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                      *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
            if ((puVar29 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar29 + 2) != param_1[1] ||
                ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f73ff;
            plVar33 = (longlong *)*puVar29;
          }
        }
        (**(code **)(*plVar33 + 0xe68))();
        if ((char)plVar30[0x2f] == '\x02') {
          FUN_1403ed672(param_1 + 0x52);
          FUN_1407b9d1e();
          *(longlong ********)(param_1 + 0x56) = local_268;
          *(code **)(param_1 + 0x52) = local_278;
          *(longlong ********)(param_1 + 0x54) = ppppppplStack_270;
          if (!bVar42) {
            if (param_1[1] == 0) {
LAB_1404f7e55:
              plVar30 = (longlong *)0x0;
            }
            else {
              uVar43 = *param_1;
              plVar30 = (longlong *)0x0;
              if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
                puVar29 = (undefined8 *)
                          ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                          *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                if ((puVar29 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar29 + 2) != param_1[1] ||
                    ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f7e55;
                plVar30 = (longlong *)*puVar29;
              }
            }
            local_168 = *(longlong ********)(param_1 + 0x72);
            local_178 = *(longlong ************)(param_1 + 0x6e);
            ppppppplStack_170 = *(longlong ********)(param_1 + 0x70);
            (**(code **)(*plVar30 + 0x9f8))();
            *(longlong ********)(param_1 + 0x72) = local_268;
            *(code **)(param_1 + 0x6e) = local_278;
            *(longlong ********)(param_1 + 0x70) = ppppppplStack_270;
          }
        }
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x72);
        *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x6e);
        *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_1 + 0x70);
        lVar22 = FUN_140153468(param_1);
        if (*(char *)(lVar22 + 0x168) != '\0') {
          *(double *)(param_1 + 0x78) = *(double *)(param_1 + 0x78) - (double)(float)param_1[0x20];
        }
      }
      lVar22 = FUN_140153468();
      if ((*(byte *)(lVar22 + 0x100) & 4) == 0) {
        lVar22 = FUN_140153468();
        if ((*(byte *)(lVar22 + 0x100) & 1) != 0) {
          if (param_1[1] == 0) {
LAB_1404f78d3:
            lVar22 = 0;
          }
          else {
            uVar43 = *param_1;
            lVar22 = 0;
            if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
              plVar30 = (longlong *)
                        ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                        *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
              if ((plVar30 == (longlong *)0x0) ||
                 ((*(uint *)(plVar30 + 2) != param_1[1] ||
                  ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) goto LAB_1404f78d3;
              lVar22 = *plVar30;
            }
          }
          plVar30 = *(longlong **)(&DAT_00001ce8 + lVar22);
          pcVar4 = *(code **)(*plVar30 + 0x5e8);
          if (pcVar4 == FUN_140972dde) {
            lVar22 = plVar30[0x76];
            if (lVar22 == 0) {
              pcVar4 = *(code **)(*plVar30 + 0x5f8);
              if (pcVar4 == FUN_144784df4) {
                if (*(code **)(plVar30[0x784] + 0x18) == (code *)&LAB_144904684) {
                  if (*(int *)((longlong)plVar30 + 0x75b4) != 0) {
                    uVar43 = *(uint *)(plVar30 + 0xeb6);
                    lVar22 = 0;
                    if (((int)uVar43 < 0) || (DAT_14c9647dc <= (int)uVar43)) goto LAB_1404f6eca;
                    plVar33 = (longlong *)
                              ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                              *(longlong *)
                               ((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
                    if ((plVar33 != (longlong *)0x0) &&
                       (((int)plVar33[2] == *(int *)((longlong)plVar30 + 0x75b4) &&
                        ((*(uint *)(plVar33 + 1) & 0x10200000) == 0)))) {
                      if ((*(uint *)(plVar33 + 1) & 0x10200000) == 0) {
                        lVar22 = *plVar33;
                      }
                      else {
                        lVar22 = 0;
                      }
                      lVar22 = lVar22 + 0x110;
                      goto LAB_1404f73dd;
                    }
                  }
                }
                else {
                  lVar22 = (**(code **)(plVar30[0x784] + 0x18))();
LAB_1404f73dd:
                  if (lVar22 != 0) {
                    lVar22 = *(longlong *)(lVar22 + 0x20);
                    goto LAB_1404f73ea;
                  }
                }
              }
              else {
                lVar22 = (*pcVar4)();
LAB_1404f73ea:
                if (lVar22 != 0) {
                  lVar22 = *(longlong *)(lVar22 + 0x3b0);
                  goto LAB_1404f6eca;
                }
              }
              lVar22 = 0;
            }
          }
          else {
            lVar22 = (*pcVar4)();
          }
LAB_1404f6eca:
          if (param_1[1] == 0) {
LAB_1404f78da:
            lVar24 = 0;
          }
          else {
            uVar43 = *param_1;
            lVar24 = 0;
            if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
              plVar33 = (longlong *)
                        ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                        *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
              if ((plVar33 == (longlong *)0x0) ||
                 ((*(uint *)(plVar33 + 2) != param_1[1] ||
                  ((*(uint *)(plVar33 + 1) & 0x10200000) != 0)))) goto LAB_1404f78da;
              lVar24 = *plVar33;
            }
          }
          pdVar28 = (double *)(lVar24 + 0x128);
          pdVar2 = (double *)(lVar24 + 0x130);
          pdVar31 = (double *)(lVar24 + 0x138);
          if (lVar22 != 0) {
            pdVar31 = (double *)(lVar24 + 0x398);
            pdVar2 = (double *)(lVar24 + 0x390);
            pdVar28 = (double *)(lVar24 + 0x388);
          }
          dVar60 = *pdVar31;
          ppppppplVar67 = (longlong *******)*pdVar2;
          ppppppplVar51 = (longlong *******)*pdVar28;
          if ((((((double)ppppppplVar51 != 0.0) || (NAN((double)ppppppplVar51))) ||
               ((double)ppppppplVar67 != 0.0)) ||
              (((NAN((double)ppppppplVar67) || (dVar60 != 0.0)) || (NAN(dVar60))))) &&
             ((float)param_1[0x5a] <= (float)param_1[0x22])) {
            dVar50 = (double)ppppppplVar51 * (double)ppppppplVar51 +
                     (double)ppppppplVar67 * (double)ppppppplVar67;
            if ((dVar50 != 1.0) || (NAN(dVar50))) {
              ppppppplVar65 = DAT_14c8464e8;
              ppppppplVar73 = DAT_14c8464e0;
              ppppppplVar66 = DAT_14c8464f0;
              if (9.99999993922529e-09 <= dVar50) {
                ppppppplVar65 = (longlong *******)((double)ppppppplVar67 * (1.0 / SQRT(dVar50)));
                ppppppplVar73 = (longlong *******)((double)ppppppplVar51 * (1.0 / SQRT(dVar50)));
                ppppppplVar66 = (longlong *******)0x0;
              }
            }
            else {
              ppppppplVar65 = ppppppplVar67;
              ppppppplVar73 = ppppppplVar51;
              ppppppplVar66 = (longlong *******)(-(ulonglong)(dVar60 == 0.0) & (ulonglong)dVar60);
            }
            dVar60 = (double)(float)param_1[0x59];
            dVar48 = (double)fVar46;
            dVar49 = (double)ppppppplVar66 * dVar60 * dVar48 + *(double *)(param_1 + 0x48);
            dVar50 = (double)ppppppplVar65 * dVar60 * dVar48 + *(double *)(param_1 + 0x46);
            dVar60 = (double)ppppppplVar73 * dVar60 * dVar48 + *(double *)(param_1 + 0x44);
            fVar75 = (float)param_1[0x58];
            if (0.0 < fVar75) {
              ppppppplVar51 = (longlong *******)(dVar50 - *(double *)(param_1 + 0x40));
              ppppppplVar67 = (longlong *******)(dVar60 - *(double *)(param_1 + 0x3e));
              dVar48 = (double)ppppppplVar67 * (double)ppppppplVar67 +
                       (double)ppppppplVar51 * (double)ppppppplVar51;
              if ((double)(fVar75 * fVar75) < dVar48) {
                if (((dVar48 != 1.0) ||
                    (ppppppplVar65 = ppppppplVar67, ppppppplVar73 = ppppppplVar51, NAN(dVar48))) &&
                   (ppppppplVar65 = DAT_14c8464e0, ppppppplVar73 = DAT_14c8464e8,
                   9.99999993922529e-09 <= dVar48)) {
                  ppppppplVar65 = (longlong *******)((double)ppppppplVar67 * (1.0 / SQRT(dVar48)));
                  ppppppplVar73 = (longlong *******)((double)ppppppplVar51 * (1.0 / SQRT(dVar48)));
                }
                dVar50 = *(double *)(param_1 + 0x40) + (double)ppppppplVar73 * (double)fVar75;
                dVar60 = *(double *)(param_1 + 0x3e) + (double)ppppppplVar65 * (double)fVar75;
                dVar49 = *(double *)(param_1 + 0x48);
              }
            }
            pdVar28 = (double *)(param_1 + 0x44);
            local_2bc = 0;
            local_2c0 = 0.0;
            (**(code **)(*plVar30 + 0x528))(plVar30);
            lVar22 = FUN_1447210f0(plVar30);
            lVar24 = FUN_140153468(param_1);
            uVar68 = local_2bc;
            uVar43 = *(uint *)(lVar24 + 0x100);
            if ((uVar43 & 2) == 0) {
              local_2c8 = *(double *)(param_1 + 0x48);
              local_2d8 = *pdVar28;
              dStack_2d0 = *(double *)(param_1 + 0x46);
              fVar75 = local_2c0;
            }
            else {
              local_2c8 = (double)local_2c0 + dVar49;
              dStack_2d0 = dVar50 + 0.0;
              local_2d8 = dVar60 + 0.0;
              dVar49 = dVar49 - (double)(local_2c0 + local_2c0);
              fVar75 = 1.0;
            }
            local_2f0 = dVar60;
            local_2e8 = dVar50;
            local_2e0 = dVar49;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb767c0) && (FUN_144b3d300(&DAT_14cb767c0), DAT_14cb767c0 == -1))
            {
              local_278 = (code *)0x14b3f5e7e;
              ppppppplStack_270 = (longlong *******)CONCAT35(ppppppplStack_270._5_3_,0xf);
              uVar21 = FUN_14001a6c0(&local_278,1);
              DAT_14cb767b8 = (longlong *******)(ulonglong)uVar21;
              _Init_thread_footer(&DAT_14cb767c0);
            }
            lVar24 = 0;
            ppppppplStack_170 = (longlong *******)0x0;
            local_150 = 0x101;
            local_128 = 0;
            local_120 = 0x800000000;
            local_108 = 0;
            local_100 = 0x400000000;
            local_178 = (longlong ***********)DAT_14cb767b8;
            local_158 = (ulonglong)(uint3)((uint)(undefined4)local_158 >> 8) << 8;
            local_168 = (longlong *******)0x100000000000100;
            uVar21 = (uint)local_160._0_4_ >> 8;
            local_160 = (longlong *******)CONCAT71((uint7)(uint3)uVar21,1);
            local_308 = _DAT_14cad0ee0;
            uStack_300 = uRam000000014cad0ee8;
            local_318 = _DAT_14cad0ed0;
            uStack_310 = _DAT_14cad0ed8;
            do {
              cVar18 = *(char *)((longlong)&uStack_310 + lVar24);
              cVar10 = *(char *)((longlong)&uStack_310 + lVar24 + 1);
              cVar11 = *(char *)((longlong)&uStack_310 + lVar24 + 2);
              cVar12 = *(char *)((longlong)&uStack_310 + lVar24 + 3);
              cVar13 = *(char *)((longlong)&uStack_310 + lVar24 + 4);
              cVar14 = *(char *)((longlong)&uStack_310 + lVar24 + 5);
              cVar15 = *(char *)((longlong)&uStack_310 + lVar24 + 6);
              cVar16 = *(char *)((longlong)&uStack_310 + lVar24 + 7);
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24) = 0;
              }
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24 + 1) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24 + 1) = 0;
              }
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24 + 2) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24 + 2) = 0;
              }
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24 + 3) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24 + 3) = 0;
              }
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24 + 4) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24 + 4) = 0;
              }
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24 + 5) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24 + 5) = 0;
              }
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24 + 6) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24 + 6) = 0;
              }
              if ((bool)(~(*(char *)((longlong)&local_318 + lVar24 + 7) == '\0') & 1)) {
                *(undefined1 *)((longlong)&local_318 + lVar24 + 7) = 0;
              }
              if ((bool)(~(cVar18 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24) = 0;
              }
              if ((bool)(~(cVar10 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24 + 1) = 0;
              }
              if ((bool)(~(cVar11 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24 + 2) = 0;
              }
              if ((bool)(~(cVar12 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24 + 3) = 0;
              }
              if ((bool)(~(cVar13 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24 + 4) = 0;
              }
              if ((bool)(~(cVar14 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24 + 5) = 0;
              }
              if ((bool)(~(cVar15 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24 + 6) = 0;
              }
              if ((bool)(~(cVar16 == '\0') & 1)) {
                *(undefined1 *)((longlong)&uStack_310 + lVar24 + 7) = 0;
              }
              lVar24 = lVar24 + 0x10;
            } while (lVar24 != 0x20);
            if ((char)local_318 != '\x02') {
              local_318 = CONCAT71(local_318._1_7_,2);
            }
            if (local_318._1_1_ != '\x02') {
              local_318._0_2_ = CONCAT11(2,(char)local_318);
            }
            if (local_318._7_1_ != '\x02') {
              local_318 = CONCAT17(2,(undefined7)local_318);
            }
            memset(&local_278,0,0x100);
            local_1a8 = 0xffffffff;
            local_1d4 = 0xffffffff;
            local_278 = (code *)CONCAT44(0x3f800000,(undefined4)local_278);
            local_3a8 = (uint *)&local_2b8;
            local_2b8 = (undefined8 *)CONCAT44(uVar68,1);
            uStack_2b0 = (longlong *******)CONCAT44(fVar75,uVar68);
            local_398 = &local_318;
            local_3a0 = &local_178;
            local_3b8 = &DAT_14c8463d0;
            local_3b0 = (undefined8 *)((ulonglong)local_3b0 & 0xffffffff00000000);
            dVar48 = (double)FUN_14021655c(lVar22,&local_278,&local_2d8,&local_2f0);
            if ((uVar43 & 2) == 0) {
              if (SUB81(dVar48,0) != '\0') {
                dVar60 = (double)ppppppplStack_220 * (double)ppppppplStack_220 +
                         (double)local_218 * (double)local_218;
                if ((dVar60 != 1.0) || (NAN(dVar60))) {
                  ppppppplVar65 = DAT_14c8464f0;
                  ppppppplVar51 = DAT_14c8464e8;
                  ppppppplVar67 = DAT_14c8464e0;
                  if (9.99999993922529e-09 <= dVar60) {
                    ppppppplVar51 = (longlong *******)((double)local_218 * (1.0 / SQRT(dVar60)));
                    ppppppplVar67 =
                         (longlong *******)((double)ppppppplStack_220 * (1.0 / SQRT(dVar60)));
                    ppppppplVar65 = (longlong *******)0x0;
                  }
                }
                else {
                  ppppppplVar65 =
                       (longlong *******)(-(ulonglong)(dStack_210 == 0.0) & (ulonglong)dStack_210);
                  ppppppplVar51 = local_218;
                  ppppppplVar67 = ppppppplStack_220;
                }
                dVar49 = (double)ppppppplVar65 + (double)local_258;
                dVar50 = (double)ppppppplVar51 + (double)ppppppplStack_260;
                dVar60 = (double)ppppppplVar67 + (double)local_268;
              }
LAB_1404f8402:
              uVar68 = (undefined4)lVar22;
              if (((9.999999747378752e-05 < ABS(dVar60 - *(double *)(param_1 + 0x44))) ||
                  (9.999999747378752e-05 < ABS(dVar50 - *(double *)(param_1 + 0x46)))) ||
                 (9.999999747378752e-05 < ABS(dVar49 - *(double *)(param_1 + 0x48)))) {
                *(double *)(param_1 + 0x44) = dVar60;
                *(double *)(param_1 + 0x46) = dVar50;
                *(double *)(param_1 + 0x48) = dVar49;
                if ((*(byte *)((longlong)param_1 + 0x299) & 4) == 0) {
                  lVar22 = plVar30[0x39];
                  if (lVar22 == 0) {
                    uVar68 = SUB84(DAT_14c846500,0);
                    uVar69 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
                  }
                  else {
                    puVar29 = *(undefined8 **)(lVar22 + 0x240);
                    ppppppplVar67 = *(longlong ********)(lVar22 + 0x248);
                    dVar60 = *(double *)(lVar22 + 0x250);
                    dVar50 = *(double *)(lVar22 + 600);
                    pdVar28 = *(double **)(lVar22 + 0x228);
                    local_2b8 = puVar29;
                    uStack_2b0 = ppppppplVar67;
                    local_2a8 = dVar60;
                    dStack_2a0 = dVar50;
                    if (pdVar28 == (double *)0x0) {
                      uVar68 = 0x40;
                      pdVar28 = (double *)FUN_14001cc68();
                      dVar49 = DAT_14c8463d8;
                      *pdVar28 = DAT_14c8463d0;
                      pdVar28[1] = dVar49;
                      dVar49 = DAT_14c8463e8;
                      pdVar28[2] = DAT_14c8463e0;
                      pdVar28[3] = dVar49;
                      dVar49 = DAT_14c846500;
                      pdVar28[4] = DAT_14c8464f8;
                      pdVar28[5] = dVar49;
                      dVar48 = DAT_14c846508;
                      pdVar28[6] = DAT_14c846508;
                      *(double **)(lVar22 + 0x228) = pdVar28;
                    }
                    auVar5._8_4_ = (int)-(ulonglong)((double)ppppppplVar67 != pdVar28[1]);
                    auVar5._0_8_ = -(ulonglong)((double)puVar29 != *pdVar28);
                    auVar5._12_4_ = (int)(-(ulonglong)((double)ppppppplVar67 != pdVar28[1]) >> 0x20)
                    ;
                    iVar20 = movmskpd(SUB84(dVar48,0),auVar5);
                    auVar7._8_4_ = (int)-(ulonglong)(dVar50 != pdVar28[3]);
                    auVar7._0_8_ = -(ulonglong)(dVar60 != pdVar28[2]);
                    auVar7._12_4_ = (int)(-(ulonglong)(dVar50 != pdVar28[3]) >> 0x20);
                    uVar43 = movmskpd(uVar68,auVar7);
                    if ((uVar43 & 0x3fffffff) != 0 || iVar20 != 0) {
                      pdVar28[2] = local_2a8;
                      pdVar28[3] = dStack_2a0;
                      *pdVar28 = (double)local_2b8;
                      pdVar28[1] = (double)uStack_2b0;
                      FUN_1448052ee();
                      pdVar28[6] = (double)local_330;
                      pdVar28[4] = (double)local_340;
                      pdVar28[5] = (double)ppppppplStack_338;
                    }
                    uVar68 = SUB84(pdVar28[5],0);
                    uVar69 = (undefined4)((ulonglong)pdVar28[5] >> 0x20);
                  }
                  dVar60 = (double)FUN_144719204();
                  dVar50 = (double)FUN_144719204(CONCAT44(uVar69,uVar68));
                  sin(dVar60 * 0.017453292519943295);
                  cos(dVar60 * 0.017453292519943295);
                  sin(dVar50 * 0.017453292519943295);
                  cos(dVar50 * 0.017453292519943295);
                  lVar22 = plVar30[0x39];
                  if (lVar22 == 0) {
                    pppppppplVar26 = &DAT_14c8464e0;
                    ppppppplVar67 = DAT_14c8464f0;
                  }
                  else {
                    pppppppplVar26 = (longlong ********)(lVar22 + 0x260);
                    ppppppplVar67 = *(longlong ********)(lVar22 + 0x270);
                  }
                  dVar60 = *(double *)(param_1 + 0x48);
                  ppppppplVar65 =
                       (longlong *******)(*(double *)(param_1 + 0x46) - (double)pppppppplVar26[1]);
                  ppppppplVar51 =
                       (longlong *******)(*(double *)(param_1 + 0x44) - (double)*pppppppplVar26);
                  lVar22 = FUN_140153468(param_1);
                  ppppppplVar73 = (longlong *******)0x0;
                  if (*(char *)(lVar22 + 0x168) != '\0') {
                    ppppppplVar73 = (longlong *******)(dVar60 - (double)ppppppplVar67);
                  }
                  dVar60 = (double)ppppppplVar73 * (double)ppppppplVar73 +
                           (double)ppppppplVar51 * (double)ppppppplVar51 +
                           (double)ppppppplVar65 * (double)ppppppplVar65;
                  if (((dVar60 != 1.0) ||
                      (ppppppplVar52 = ppppppplVar73, ppppppplVar67 = ppppppplVar65,
                      ppppppplVar66 = ppppppplVar51, NAN(dVar60))) &&
                     (ppppppplVar52 = DAT_14c8464f0, ppppppplVar67 = DAT_14c8464e8,
                     ppppppplVar66 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar60)) {
                    dVar60 = 1.0 / SQRT(dVar60);
                    ppppppplVar52 = (longlong *******)((double)ppppppplVar73 * dVar60);
                    ppppppplVar67 = (longlong *******)((double)ppppppplVar65 * dVar60);
                    ppppppplVar66 = (longlong *******)((double)ppppppplVar51 * dVar60);
                  }
                  *(longlong ********)(param_1 + 0x52) = ppppppplVar66;
                  *(longlong ********)(param_1 + 0x54) = ppppppplVar67;
                  *(longlong ********)(param_1 + 0x56) = ppppppplVar52;
                }
                else {
                  local_340 = (longlong ***********)0x44fa0000;
                  local_320 = 0xbf80000043800000;
                  ppppppplStack_338 = DAT_14c8464e0;
                  local_330 = DAT_14c8464e8;
                  local_328 = DAT_14c8464f0;
                  fVar75 = (float)param_1[0x23] / 90.0;
                  if (1.0 <= fVar75) {
                    fVar75 = 1.0;
                  }
                  if (fVar75 <= 0.0) {
                    fVar75 = 0.0;
                  }
                  local_3b8 = (double *)CONCAT44(local_3b8._4_4_,param_1[0x15]);
                  local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,fVar75);
                  FUN_14080f864(&local_340,param_1 + 0x5c,pdVar28,param_1[0x24]);
                  FUN_1409cd2ec(&local_340,&local_2b8,param_1 + 0x5c,pdVar28);
                  *(undefined8 *)(param_1 + 0x38) = local_288;
                  *(ulonglong *)(param_1 + 0x34) = CONCAT71(uStack_297,local_298);
                  *(undefined8 *)(param_1 + 0x36) = uStack_290;
                  *(double *)(param_1 + 0x30) = local_2a8;
                  *(double *)(param_1 + 0x32) = dStack_2a0;
                  *(undefined8 **)(param_1 + 0x2c) = local_2b8;
                  *(longlong ********)(param_1 + 0x2e) = uStack_2b0;
                  param_1[0x21] = param_1[0x39];
                }
                FUN_143cf5cf0(param_1);
              }
            }
            else if (SUB81(dVar48,0) != '\0') {
              uVar43 = param_1[1];
              dVar48 = (double)(ulonglong)uVar43;
              if (uVar43 == 0) {
LAB_1404f9473:
                lVar22 = 0;
              }
              else {
                uVar21 = *param_1;
                lVar22 = 0;
                if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
                  plVar33 = (longlong *)
                            ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                            *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)
                            );
                  if ((plVar33 == (longlong *)0x0) ||
                     ((*(uint *)(plVar33 + 2) != uVar43 ||
                      (dVar48 = (double)(ulonglong)*(uint *)(plVar33 + 1),
                      (*(uint *)(plVar33 + 1) & 0x10200000) != 0)))) goto LAB_1404f9473;
                  lVar22 = *plVar33;
                }
              }
              if ((double)*(float *)(lVar22 + 0x228) <= dStack_210) {
                dVar49 = (double)local_258 + -1.0;
                goto LAB_1404f8402;
              }
            }
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            if (local_128 != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
      else {
        if (param_1[1] == 0) {
LAB_1404f7406:
          lVar22 = 0;
        }
        else {
          uVar43 = *param_1;
          lVar22 = 0;
          if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
            plVar30 = (longlong *)
                      ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                      *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
            if ((plVar30 == (longlong *)0x0) ||
               ((*(uint *)(plVar30 + 2) != param_1[1] ||
                ((*(uint *)(plVar30 + 1) & 0x10200000) != 0)))) goto LAB_1404f7406;
            lVar22 = *plVar30;
          }
        }
        lVar22 = *(longlong *)(&DAT_00001ce8 + lVar22);
        bVar35 = *(byte *)((longlong)param_1 + 0x299);
        puVar32 = param_1;
        dVar60 = (double)FUN_140153468();
        iVar20 = (int)puVar32;
        if ((((0.0 < *(float *)((longlong)dVar60 + 0xc8c)) && (param_1[0x3b] != 0)) &&
            (uVar43 = param_1[0x3a], -1 < (int)uVar43)) &&
           (((iVar20 = DAT_14c9647dc, (int)uVar43 < DAT_14c9647dc &&
             (lVar24 = (ulonglong)((uVar43 & 0xffff) * 0x18) +
                       *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8),
             dVar60 = DAT_14c9647c8, lVar24 != 0)) &&
            ((*(uint *)(lVar24 + 0x10) == param_1[0x3b] &&
             ((*(uint *)(lVar24 + 8) & 0x10200000) == 0)))))) {
          if (param_1[0x3d] == 0) {
LAB_1404f9548:
            local_340 = (longlong ***********)0x0;
          }
          else {
            uVar43 = param_1[0x3c];
            local_340 = (longlong ***********)0x0;
            if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
              pdVar28 = (double *)
                        ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                        *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
              if ((pdVar28 == (double *)0x0) ||
                 ((*(uint *)(pdVar28 + 2) != param_1[0x3d] ||
                  (((ulonglong)pdVar28[1] & 0x10200000) != 0)))) goto LAB_1404f9548;
              local_340 = (longlong ***********)*pdVar28;
            }
          }
          uVar23 = FUN_140153468(param_1);
          uVar43 = param_1[0x3b];
          if (uVar43 == 0) {
LAB_1404f9550:
            lVar24 = 0;
          }
          else {
            uVar21 = param_1[0x3a];
            lVar24 = 0;
            if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
              plVar30 = (longlong *)
                        ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                        *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
              if ((plVar30 == (longlong *)0x0) ||
                 ((*(uint *)(plVar30 + 2) != uVar43 || ((*(uint *)(plVar30 + 1) & 0x10200000) != 0))
                 )) goto LAB_1404f9550;
              lVar24 = *plVar30;
            }
          }
          lVar24 = *(longlong *)(lVar24 + 0x1c8);
          if (lVar24 == 0) {
            local_268 = DAT_14c8464f0;
            local_278 = (code *)DAT_14c8464e0;
            ppppppplStack_270 = DAT_14c8464e8;
          }
          else {
            local_278 = *(code **)(lVar24 + 0x260);
            ppppppplStack_270 = *(longlong ********)(lVar24 + 0x268);
            local_268 = *(longlong ********)(lVar24 + 0x270);
          }
          local_3a8 = param_1 + 0x4a;
          local_3b8 = (double *)(param_1 + 0x52);
          if (uVar43 == 0) {
LAB_1404f9557:
            uVar39 = 0;
          }
          else {
            uVar21 = param_1[0x3a];
            uVar39 = 0;
            if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
              puVar29 = (undefined8 *)
                        ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                        *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
              if ((puVar29 == (undefined8 *)0x0) ||
                 ((*(uint *)(puVar29 + 2) != uVar43 || ((*(uint *)(puVar29 + 1) & 0x10200000) != 0))
                 )) goto LAB_1404f9557;
              uVar39 = *puVar29;
            }
          }
          local_3a0 = (longlong ************)&local_340;
          local_3b0 = &local_278;
          FUN_148814c08(uVar23,&local_2b8,lVar22,uVar39);
          if (local_340 != (longlong ***********)0x0) {
            uVar43 = *(uint *)((longlong)local_340 + 0xc);
            param_1[0x3c] = uVar43;
            if ((int)uVar43 < DAT_14c9647dc) {
              lVar24 = (ulonglong)((uVar43 & 0xffff) * 0x18) +
                       *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8);
            }
            else {
              lVar24 = 0;
            }
            uVar43 = *(uint *)(lVar24 + 0x10);
            if (*(uint *)(lVar24 + 0x10) == 0) {
              LOCK();
              iVar20 = DAT_14c964868 + 1;
              UNLOCK();
              uVar21 = DAT_14c964868 + 1;
              bVar42 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar20;
              if (bVar42) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar21);
              }
              LOCK();
              uVar43 = *(uint *)(lVar24 + 0x10);
              bVar42 = uVar43 == 0;
              if (bVar42) {
                *(uint *)(lVar24 + 0x10) = uVar21;
                uVar43 = 0;
              }
              UNLOCK();
              if (bVar42) {
                uVar43 = uVar21;
              }
            }
            param_1[0x3d] = uVar43;
          }
          dVar60 = local_2a8 - *(double *)(param_1 + 0x48);
          dVar50 = (double)uStack_2b0 - *(double *)(param_1 + 0x46);
          dVar49 = (double)local_2b8 - *(double *)(param_1 + 0x44);
          fVar75 = (float)SQRT(dVar60 * dVar60 + dVar49 * dVar49 + dVar50 * dVar50);
          if (10.0 < fVar75) {
            pdVar28 = (double *)(param_1 + 0x44);
            lVar24 = FUN_140153468(param_1);
            fVar45 = *(float *)(lVar24 + 0xc8c) * fVar46;
            if (fVar75 <= fVar45) {
              *(double *)(param_1 + 0x48) = local_2a8;
              *pdVar28 = (double)local_2b8;
              *(longlong ********)(param_1 + 0x46) = uStack_2b0;
            }
            else if (0.0 < fVar45) {
              dVar47 = 1.0 / (double)fVar75;
              dVar48 = (double)fVar45;
              *(double *)(param_1 + 0x44) = dVar49 * dVar47 * dVar48 + *(double *)(param_1 + 0x44);
              *(double *)(param_1 + 0x46) = dVar50 * dVar47 * dVar48 + *(double *)(param_1 + 0x46);
              *(double *)(param_1 + 0x48) = dVar60 * dVar47 * dVar48 + *(double *)(param_1 + 0x48);
            }
            if ((*(byte *)((longlong)param_1 + 0x299) & 4) != 0) {
              local_178 = (longlong ***********)0x44fa0000;
              local_158 = -0x407fffffbc800000;
              ppppppplStack_170 = DAT_14c8464e0;
              local_168 = DAT_14c8464e8;
              local_160 = DAT_14c8464f0;
              fVar75 = (float)param_1[0x23] / 90.0;
              if (1.0 <= fVar75) {
                fVar75 = 1.0;
              }
              if (fVar75 <= 0.0) {
                fVar75 = 0.0;
              }
              local_3b8 = (double *)CONCAT44(local_3b8._4_4_,param_1[0x15]);
              local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,fVar75);
              FUN_14080f864(&local_178,param_1 + 0x5c,pdVar28,param_1[0x24]);
              FUN_1409cd2ec(&local_178,&local_278,param_1 + 0x5c,pdVar28);
              *(longlong ********)(param_1 + 0x38) = local_248;
              *(longlong ********)(param_1 + 0x34) = local_258;
              *(longlong ********)(param_1 + 0x36) = ppppppplStack_250;
              *(longlong ********)(param_1 + 0x30) = local_268;
              *(longlong ********)(param_1 + 0x32) = ppppppplStack_260;
              *(code **)(param_1 + 0x2c) = local_278;
              *(longlong ********)(param_1 + 0x2e) = ppppppplStack_270;
              param_1[0x21] = param_1[0x39];
            }
          }
          puVar32 = param_1;
          dVar60 = (double)FUN_143cf5cf0();
          iVar20 = (int)puVar32;
        }
        if (((bVar35 & 4) == 0) &&
           (((((*(double *)(param_1 + 0x44) != 0.0 || (NAN(*(double *)(param_1 + 0x44)))) ||
              (*(double *)(param_1 + 0x46) != 0.0)) ||
             ((NAN(*(double *)(param_1 + 0x46)) || (*(double *)(param_1 + 0x48) != 0.0)))) ||
            (NAN(*(double *)(param_1 + 0x48)))))) {
          lVar24 = *(longlong *)(lVar22 + 0x1c8);
          if (lVar24 == 0) {
            uVar68 = SUB84(DAT_14c846500,0);
            uVar69 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
          }
          else {
            ppppppplVar67 = *(longlong ********)(lVar24 + 0x240);
            ppppppplVar51 = *(longlong ********)(lVar24 + 0x248);
            ppppppplVar65 = *(longlong ********)(lVar24 + 0x250);
            ppppppplVar73 = *(longlong ********)(lVar24 + 600);
            pdVar28 = *(double **)(lVar24 + 0x228);
            local_278 = (code *)ppppppplVar67;
            ppppppplStack_270 = ppppppplVar51;
            local_268 = ppppppplVar65;
            ppppppplStack_260 = ppppppplVar73;
            if (pdVar28 == (double *)0x0) {
              iVar20 = 0x40;
              pdVar28 = (double *)FUN_14001cc68();
              dVar60 = DAT_14c8463d8;
              *pdVar28 = DAT_14c8463d0;
              pdVar28[1] = dVar60;
              dVar60 = DAT_14c8463e8;
              pdVar28[2] = DAT_14c8463e0;
              pdVar28[3] = dVar60;
              dVar60 = DAT_14c846500;
              pdVar28[4] = DAT_14c8464f8;
              pdVar28[5] = dVar60;
              dVar60 = DAT_14c846508;
              pdVar28[6] = DAT_14c846508;
              *(double **)(lVar24 + 0x228) = pdVar28;
            }
            auVar6._8_4_ = (int)-(ulonglong)((double)ppppppplVar51 != pdVar28[1]);
            auVar6._0_8_ = -(ulonglong)((double)ppppppplVar67 != *pdVar28);
            auVar6._12_4_ = (int)(-(ulonglong)((double)ppppppplVar51 != pdVar28[1]) >> 0x20);
            iVar19 = movmskpd(SUB84(dVar60,0),auVar6);
            auVar8._8_4_ = (int)-(ulonglong)((double)ppppppplVar73 != pdVar28[3]);
            auVar8._0_8_ = -(ulonglong)((double)ppppppplVar65 != pdVar28[2]);
            auVar8._12_4_ = (int)(-(ulonglong)((double)ppppppplVar73 != pdVar28[3]) >> 0x20);
            uVar43 = movmskpd(iVar20,auVar8);
            if ((uVar43 & 0x3fffffff) != 0 || iVar19 != 0) {
              pdVar28[2] = (double)local_268;
              pdVar28[3] = (double)ppppppplStack_260;
              *pdVar28 = (double)local_278;
              pdVar28[1] = (double)ppppppplStack_270;
              FUN_1448052ee();
              pdVar28[6] = (double)local_168;
              pdVar28[4] = (double)local_178;
              pdVar28[5] = (double)ppppppplStack_170;
            }
            uVar68 = SUB84(pdVar28[5],0);
            uVar69 = (undefined4)((ulonglong)pdVar28[5] >> 0x20);
          }
          dVar60 = (double)FUN_144719204();
          dVar50 = (double)FUN_144719204(CONCAT44(uVar69,uVar68));
          dVar49 = sin(dVar60 * 0.017453292519943295);
          dVar60 = cos(dVar60 * 0.017453292519943295);
          dVar48 = sin(dVar50 * 0.017453292519943295);
          dVar50 = cos(dVar50 * 0.017453292519943295);
          lVar22 = *(longlong *)(lVar22 + 0x1c8);
          if (lVar22 == 0) {
            pppppppplVar26 = &DAT_14c8464e0;
            uVar68 = SUB84(DAT_14c8464f0,0);
            uVar69 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar68 = (undefined4)*(undefined8 *)(lVar22 + 0x270);
            uVar69 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x270) >> 0x20);
            pppppppplVar26 = (longlong ********)(lVar22 + 0x260);
          }
          dVar47 = *(double *)(param_1 + 0x48);
          ppppppplVar65 =
               (longlong *******)(*(double *)(param_1 + 0x46) - (double)pppppppplVar26[1]);
          ppppppplVar51 = (longlong *******)(*(double *)(param_1 + 0x44) - (double)*pppppppplVar26);
          lVar22 = FUN_140153468(param_1);
          ppppppplVar67 = (longlong *******)0x0;
          if (*(char *)(lVar22 + 0x168) != '\0') {
            ppppppplVar67 = (longlong *******)(dVar47 - (double)CONCAT44(uVar69,uVar68));
          }
          dVar47 = (double)ppppppplVar67 * (double)ppppppplVar67 +
                   (double)ppppppplVar51 * (double)ppppppplVar51 +
                   (double)ppppppplVar65 * (double)ppppppplVar65;
          if (((dVar47 != 1.0) ||
              (ppppppplVar66 = ppppppplVar65, ppppppplVar52 = ppppppplVar51,
              ppppppplVar73 = ppppppplVar67, NAN(dVar47))) &&
             (ppppppplVar66 = DAT_14c8464e8, ppppppplVar52 = DAT_14c8464e0,
             ppppppplVar73 = DAT_14c8464f0, 9.99999993922529e-09 <= dVar47)) {
            dVar47 = 1.0 / SQRT(dVar47);
            ppppppplVar66 = (longlong *******)((double)ppppppplVar65 * dVar47);
            ppppppplVar52 = (longlong *******)((double)ppppppplVar51 * dVar47);
            ppppppplVar73 = (longlong *******)((double)ppppppplVar67 * dVar47);
          }
          lVar22 = FUN_140153468(param_1);
          fVar75 = *(float *)(lVar22 + 0xc88);
          if (360.0 <= fVar75) {
            fVar75 = 360.0;
          }
          if (fVar75 <= 0.0) {
            fVar75 = 0.0;
          }
          fVar75 = cosf(fVar75 * 0.5 * 0.017453292);
          if (fVar75 <= (float)(dVar49 * (double)ppppppplVar73 +
                               dVar50 * dVar60 * (double)ppppppplVar52 +
                               dVar48 * dVar60 * (double)ppppppplVar66)) {
            *(longlong ********)(param_1 + 0x52) = ppppppplVar52;
            *(longlong ********)(param_1 + 0x54) = ppppppplVar66;
            *(longlong ********)(param_1 + 0x56) = ppppppplVar73;
          }
        }
      }
      lVar22 = FUN_140153468(param_1);
      if ((0.0 < *(float *)(lVar22 + 0x4c8)) &&
         (lVar22 = FUN_140153468(param_1), 0.0 < *(float *)(lVar22 + 0x4c8))) {
        if ((float)param_1[0x17] <= 0.0) {
          fVar75 = (float)param_1[0x21];
        }
        else {
          lVar22 = FUN_140153468(param_1);
          fVar75 = powf((float)param_1[0x17],*(float *)(lVar22 + 0x4c8));
          fVar75 = (1.0 / fVar75 + -1.0) * fVar46 + (float)param_1[0x22];
        }
        param_1[0x22] = (uint)fVar75;
      }
      bVar35 = *(byte *)((longlong)param_1 + 0x299);
      if ((bVar35 & 4) == 0) {
        lVar22 = FUN_140153468(param_1);
        if ((*(byte *)(lVar22 + 0xf8) & 0x40) == 0) {
          dVar60 = (double)(float)param_1[0x15];
          *(double *)(param_1 + 0x74) = dVar60 * *(double *)(param_1 + 0x52);
          *(double *)(param_1 + 0x76) = *(double *)(param_1 + 0x54) * dVar60;
          *(double *)(param_1 + 0x78) = *(double *)(param_1 + 0x56) * dVar60;
        }
      }
      else if ((char)plVar38[0x2f] == '\x03') {
        if ((bVar35 & 8) == 0) {
          FUN_140a2a54e(param_1 + 0x2c,&local_278,(float)param_1[0x22] - fVar46);
          FUN_140a2a54e(param_1 + 0x2c);
          ppppppplVar67 = (longlong *******)((double)local_168 - (double)local_268);
          dVar60 = (double)ppppppplVar67 * (double)ppppppplVar67 +
                   ((double)local_178 - (double)local_278) * ((double)local_178 - (double)local_278)
                   + ((double)ppppppplStack_170 - (double)ppppppplStack_270) *
                     ((double)ppppppplStack_170 - (double)ppppppplStack_270);
          if (((dVar60 != 1.0) || (ppppppplVar51 = ppppppplVar67, NAN(dVar60))) &&
             (ppppppplVar51 = DAT_14c8464f0, 9.99999993922529e-09 <= dVar60)) {
            ppppppplVar51 = (longlong *******)((double)ppppppplVar67 * (1.0 / SQRT(dVar60)));
          }
          lVar22 = FUN_140153468(param_1);
          fVar46 = sinf(*(float *)(lVar22 + 0xb60) * 0.017453292);
          if ((double)ppppppplVar51 <= (double)fVar46) {
            *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) | 8;
            lVar22 = FUN_140153468(param_1);
            if ((plVar38 != (longlong *)0x0) && (*(longlong *)(lVar22 + 0xb78) != 0)) {
              FUN_1407ca880();
              plVar30 = (longlong *)(**(code **)(*plVar38 + 0x288))(plVar38);
              if (plVar30 != (longlong *)0x0) {
                FUN_1407ca880();
                plVar33 = (longlong *)FUN_144718840(plVar30);
                if (plVar33 != (longlong *)0x0 && plVar30 != plVar33) {
                  FUN_140153468(param_1);
                  (**(code **)(*plVar33 + 0x20))(plVar33);
                }
              }
            }
            lVar22 = FUN_140153468(param_1);
            if ((*(byte *)(lVar22 + 0xf9) & 0x40) != 0) goto LAB_1404f9076;
          }
          bVar35 = *(byte *)((longlong)param_1 + 0x299);
        }
        if ((((bVar35 & 0x10) == 0) &&
            (lVar22 = FUN_140153468(param_1), (*(byte *)(lVar22 + 0xf8) & 4) == 0)) &&
           (fVar46 = (float)param_1[0x21], fVar75 = (float)param_1[0x22],
           lVar22 = FUN_140153468(param_1), fVar46 - *(float *)(lVar22 + 0xb64) <= fVar75)) {
          *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) | 0x10;
          lVar22 = FUN_140153468(param_1);
          if ((plVar38 != (longlong *)0x0) && (*(longlong *)(lVar22 + 0xb80) != 0)) {
            FUN_1407ca880();
            plVar30 = (longlong *)(**(code **)(*plVar38 + 0x288))(plVar38);
            if (plVar30 != (longlong *)0x0) {
              FUN_1407ca880();
              plVar33 = (longlong *)FUN_144718840(plVar30);
              if (plVar33 != (longlong *)0x0 && plVar30 != plVar33) {
                FUN_140153468(param_1);
                (**(code **)(*plVar33 + 0x20))(plVar33);
              }
            }
          }
        }
      }
    }
    bVar35 = *(byte *)((longlong)param_1 + 0x299);
    if ((((bVar35 & 4) == 0) && ((bVar35 & 8) == 0)) && ((char)plVar38[0x2f] == '\x03')) {
      if (param_1[1] == 0) {
LAB_1404f912a:
        lVar22 = 0;
      }
      else {
        uVar43 = *param_1;
        lVar22 = 0;
        if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
          plVar30 = (longlong *)
                    ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                    *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
          if ((plVar30 == (longlong *)0x0) ||
             ((*(uint *)(plVar30 + 2) != param_1[1] || ((*(uint *)(plVar30 + 1) & 0x10200000) != 0))
             )) goto LAB_1404f912a;
          lVar22 = *plVar30;
        }
      }
      if (*(double *)(lVar22 + 0x138) <= 0.0 && *(double *)(lVar22 + 0x138) != 0.0) {
        *(byte *)((longlong)param_1 + 0x299) = bVar35 | 8;
        lVar22 = FUN_140153468(param_1);
        if ((plVar38 != (longlong *)0x0) && (*(longlong *)(lVar22 + 0xb78) != 0)) {
          uVar23 = FUN_1407ca880();
          plVar30 = (longlong *)(**(code **)(*plVar38 + 0x288))(plVar38,uVar23);
          if (plVar30 != (longlong *)0x0) {
            uVar23 = FUN_1407ca880();
            plVar33 = (longlong *)FUN_144718840(plVar30,uVar23);
            if (plVar33 != (longlong *)0x0 && plVar30 != plVar33) {
              lVar22 = FUN_140153468(param_1);
              (**(code **)(*plVar33 + 0x20))(plVar33,*(undefined8 *)(lVar22 + 0xb78));
            }
          }
        }
        lVar22 = FUN_140153468(param_1);
        if ((*(byte *)(lVar22 + 0xf9) & 0x40) != 0) goto LAB_1404f9076;
      }
    }
    lVar22 = FUN_140153468(param_1);
    if (((*(byte *)(lVar22 + 0xa0) & 4) != 0) ||
       (lVar22 = FUN_140153468(param_1), (*(byte *)(lVar22 + 0xa0) & 8) != 0)) {
      FUN_143cf35cc(param_1,&local_358,0);
    }
  }
  if (((*(longlong *)(param_1 + 2) != 0) &&
      (plVar30 = *(longlong **)(param_1 + 4), plVar30 != (longlong *)0x0)) && (0 < (int)plVar30[1]))
  {
    iVar20 = (int)plVar30[1];
    do {
      if (iVar20 == 0) {
        if (param_1[1] == 0) {
LAB_1404f911c:
          uVar23 = 0;
        }
        else {
          uVar43 = *param_1;
          uVar23 = 0;
          if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
            puVar29 = (undefined8 *)
                      ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                      *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
            if ((puVar29 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar29 + 2) != param_1[1] ||
                ((*(uint *)(puVar29 + 1) & 0x10200000) != 0)))) goto LAB_1404f911c;
            uVar23 = *puVar29;
          }
        }
        (**(code **)(_DAT_00000000 + 0xa0))(0,uVar23,param_1 + 0x74,uVar25);
        goto LAB_1404f8ed6;
      }
      LOCK();
      iVar19 = (int)plVar30[1];
      bVar42 = iVar20 == iVar19;
      if (bVar42) {
        *(int *)(plVar30 + 1) = iVar20 + 1;
        iVar19 = iVar20;
      }
      iVar20 = iVar19;
      UNLOCK();
    } while (!bVar42);
    if (param_1[1] == 0) {
LAB_1404f9123:
      uVar23 = 0;
    }
    else {
      uVar43 = *param_1;
      uVar23 = 0;
      if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
        puVar29 = (undefined8 *)
                  ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                  *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
        if ((puVar29 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar29 + 2) != param_1[1] || ((*(uint *)(puVar29 + 1) & 0x10200000) != 0))))
        goto LAB_1404f9123;
        uVar23 = *puVar29;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 2) + 0xa0))
              (*(longlong **)(param_1 + 2),uVar23,param_1 + 0x74,uVar25);
    LOCK();
    plVar33 = plVar30 + 1;
    *(int *)plVar33 = (int)*plVar33 + -1;
    UNLOCK();
    if ((int)*plVar33 == 0) {
      (**(code **)*plVar30)(plVar30);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
  }
LAB_1404f8ed6:
  if ((char)plVar38[0x2f] != '\x02') goto LAB_1404f5421;
  local_278 = (code *)0x0;
  uStack_200 = 0;
  local_218 = (longlong *******)0x0;
  dStack_210 = 0.0;
  local_228 = 0.0;
  ppppppplStack_220 = (longlong *******)0x0;
  ppppppplStack_270 = DAT_14c8464e0;
  local_268 = DAT_14c8464e8;
  ppppppplStack_260 = DAT_14c8464f0;
  local_258 = DAT_14c8464e0;
  ppppppplStack_250 = DAT_14c8464e8;
  local_248 = DAT_14c8464f0;
  ppppppplStack_240 = DAT_14c8464e0;
  local_238 = DAT_14c8464e8;
  ppppppplStack_230 = DAT_14c8464f0;
  local_208 = 0;
  if (param_1[1] == 0) {
LAB_1404f9085:
    lVar22 = 0;
  }
  else {
    uVar43 = *param_1;
    lVar22 = 0;
    if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
      plVar38 = (longlong *)
                ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
      if ((plVar38 == (longlong *)0x0) ||
         ((*(uint *)(plVar38 + 2) != param_1[1] || ((*(uint *)(plVar38 + 1) & 0x10200000) != 0))))
      goto LAB_1404f9085;
      lVar22 = *plVar38;
    }
  }
  puVar29 = (undefined8 *)(lVar22 + 0x34b8);
  if (&local_278 != puVar29) {
    if ((*(char *)(lVar22 + 0x3538) == '\x01') && (*(char *)(lVar22 + 0x3520) == '\x01')) {
      plVar38 = (longlong *)(lVar22 + 0x3510);
      if (*(int *)(lVar22 + 0x3518) == 0) {
LAB_1404f991b:
        if (*plVar38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar36 = (undefined8 *)*plVar38;
        if (puVar36 != (undefined8 *)0x0) {
          if (*(code **)*puVar36 == FUN_145715146) {
            *puVar36 = &PTR_FUN_14b478da0;
            plVar30 = (longlong *)puVar36[4];
            if (plVar30 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar30 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar30 + 0x10))();
              }
            }
          }
          else {
            (**(code **)*puVar36)(puVar36,0);
          }
          FUN_1446efa72(plVar38,0,0,0x10);
          *(undefined4 *)(lVar22 + 0x3518) = 0;
          goto LAB_1404f991b;
        }
      }
      puVar36 = &local_278;
      for (lVar24 = 10; lVar24 != 0; lVar24 = lVar24 + -1) {
        *puVar29 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar29 = puVar29 + 1;
      }
      *(double *)(lVar22 + 0x3508) = local_228;
      *(undefined1 *)(lVar22 + 0x3520) = dStack_210._0_1_;
      if (((ulonglong)dStack_210 & 1) != 0) {
        *(undefined8 *)(lVar22 + 0x3510) = 0;
        *(undefined4 *)(lVar22 + 0x3518) = 0;
        FUN_14867b726(plVar38,&ppppppplStack_220);
      }
      *(undefined4 *)(lVar22 + 0x3530) = (undefined4)uStack_200;
      *(undefined8 *)(lVar22 + 0x3528) = local_208;
      *(undefined1 *)(lVar22 + 0x3538) = 1;
      if (((ulonglong)dStack_210 & 1) != 0) {
        if ((int)local_218 != 0) {
          if (ppppppplStack_220 == (longlong *******)0x0) goto LAB_1404f901f;
          (*(code *)**ppppppplStack_220)(ppppppplStack_220,0);
          FUN_1446efa72(&ppppppplStack_220,0,0,0x10);
          local_218 = (longlong *******)((ulonglong)local_218 & 0xffffffff00000000);
        }
        if (ppppppplStack_220 != (longlong *******)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      puVar36 = &local_278;
      for (lVar24 = 10; lVar24 != 0; lVar24 = lVar24 + -1) {
        *puVar29 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar29 = puVar29 + 1;
      }
      *(undefined8 *)(lVar22 + 0x3508) = 0;
      *(undefined1 *)(lVar22 + 0x3520) = 0;
      *(undefined8 *)(lVar22 + 0x3528) = 0;
      *(undefined4 *)(lVar22 + 0x3530) = 0;
      *(undefined1 *)(lVar22 + 0x3538) = 1;
    }
  }
LAB_1404f901f:
  if (param_1[1] == 0) {
LAB_1404f908d:
    lVar22 = 0;
  }
  else {
    uVar43 = *param_1;
    lVar22 = 0;
    if ((-1 < (int)uVar43) && ((int)uVar43 < DAT_14c9647dc)) {
      plVar38 = (longlong *)
                ((ulonglong)((uVar43 & 0xffff) * 0x18) +
                *(longlong *)((longlong)DAT_14c9647c8 + (ulonglong)(uVar43 >> 0x10) * 8));
      if ((plVar38 == (longlong *)0x0) ||
         ((*(uint *)(plVar38 + 2) != param_1[1] || ((*(uint *)(plVar38 + 1) & 0x10200000) != 0))))
      goto LAB_1404f908d;
      lVar22 = *plVar38;
    }
  }
  FUN_140fece72(param_1,lVar22 + 0x34b8);
LAB_1404f5421:
  if ((local_f0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404f9ac2 FUN_1404f9ac2 body=827 status=ok
// SIG undefined FUN_1404f9ac2(void)

void FUN_1404f9ac2(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_228 [32];
  uint local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_fc;
  uint local_f0;
  int local_ec;
  undefined4 local_d0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined2 local_89;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((((*(char *)((longlong)param_1 + 0x422c) == '\x01') && (param_1[0x841] != 0)) &&
      (param_1[0x842] != 0)) &&
     ((param_1[0x16] != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
    if (*(char *)((longlong)param_1 + 0x4134) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x4134) = 0;
    }
    param_1[0x851] = 0;
    *(undefined4 *)(param_1 + 0x851) = *(undefined4 *)(param_1[0x842] + 0x518);
    memset(local_1a0,0,0x100);
    local_d0 = 0xffffffff;
    local_19c = 0x3f800000;
    local_fc = 0xffffffff;
    lVar3 = param_1[0x841];
    local_7c = 0;
    local_78 = 0x101;
    local_50 = 0;
    local_48 = 0x800000000;
    local_30 = 0;
    local_28 = 0x400000000;
    local_90 = 0;
    local_84 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_8f = 1;
    local_80 = 0;
    local_8c = 0;
    local_8a = 0;
    if (lVar3 != 0) {
      local_40 = *(undefined4 *)(lVar3 + 0xc);
      local_28 = 0x400000001;
      uStack_98 = *(undefined8 *)(lVar3 + 0x18);
    }
    local_89 = 0x101;
    local_8d = 1;
    (**(code **)(*param_1 + 0x578))(param_1,local_1b8);
    (**(code **)(*param_1 + 0x578))(param_1,&local_1e8);
    lVar3 = param_1[0x842];
    local_1c0 = local_1d8 - (double)*(float *)(lVar3 + 0x518);
    local_1c8 = local_1e0 + 0.0;
    local_1d0 = local_1e8 + 0.0;
    lVar4 = param_1[0x16];
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
      lVar3 = param_1[0x842];
    }
    local_1f8 = &DAT_14cad0f10;
    local_200 = &local_a0;
    local_208 = (uint)*(byte *)(lVar3 + 0x51c);
    cVar1 = FUN_1400b50cc(lVar4,local_1a0,local_1b8,&local_1d0);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x851) = local_198;
      uVar2 = 0;
      if (((local_ec != 0) && (-1 < (int)local_f0)) &&
         (((int)local_f0 < DAT_14c9647dc &&
          (((plVar5 = (longlong *)
                      ((ulonglong)((local_f0 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_f0 >> 0x10) * 8)),
            plVar5 != (longlong *)0x0 && ((int)plVar5[2] == local_ec)) &&
           ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar5;
        }
        else {
          lVar3 = 0;
        }
        uVar2 = (uint)*(byte *)(lVar3 + 0x60);
      }
      *(uint *)((longlong)param_1 + 0x428c) = uVar2;
    }
    FUN_1404f9dfe(param_1);
    FUN_1404f9e58(param_1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404f9dfe FUN_1404f9dfe body=90 status=ok
// SIG undefined FUN_1404f9dfe(void)

void FUN_1404f9dfe(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x4210) != 0) {
    fVar2 = 0.0;
    if (*(char *)(param_1 + 0x4235) == '\x01') {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x4210) + 0x514);
      if (fVar2 <= 0.0) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x4288) / fVar2;
        if (1.0 <= fVar2) {
          fVar2 = 1.0;
        }
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
      }
    }
    if (fVar2 != *(float *)(param_1 + 0x4238)) {
      *(float *)(param_1 + 0x4238) = fVar2;
      lVar1 = *(longlong *)(param_1 + 0x4210);
      *(float *)(param_1 + 0x423c) =
           (*(float *)(lVar1 + 0x3d8) - *(float *)(lVar1 + 0x2a0)) * fVar2 +
           *(float *)(lVar1 + 0x2a0);
      *(float *)(param_1 + 0x4240) =
           (*(float *)(lVar1 + 0x3dc) - *(float *)(lVar1 + 0x2a4)) * fVar2 +
           *(float *)(lVar1 + 0x2a4);
      *(float *)(param_1 + 0x4244) =
           (*(float *)(lVar1 + 0x3e0) - *(float *)(lVar1 + 0x2a8)) * fVar2 +
           *(float *)(lVar1 + 0x2a8);
      *(float *)(param_1 + 0x4248) =
           (*(float *)(lVar1 + 0x3e4) - *(float *)(lVar1 + 0x2ac)) * fVar2 +
           *(float *)(lVar1 + 0x2ac);
      *(float *)(param_1 + 0x424c) =
           (*(float *)(lVar1 + 1000) - *(float *)(lVar1 + 0x2b0)) * fVar2 +
           *(float *)(lVar1 + 0x2b0);
      *(float *)(param_1 + 0x4250) =
           (*(float *)(lVar1 + 0x3ec) - *(float *)(lVar1 + 0x2b4)) * fVar2 +
           *(float *)(lVar1 + 0x2b4);
      *(float *)(param_1 + 0x4254) =
           (*(float *)(lVar1 + 0x3f0) - *(float *)(lVar1 + 0x2b8)) * fVar2 +
           *(float *)(lVar1 + 0x2b8);
      *(float *)(param_1 + 0x4258) =
           (*(float *)(lVar1 + 0x3f4) - *(float *)(lVar1 + 700)) * fVar2 + *(float *)(lVar1 + 700);
      *(float *)(param_1 + 0x425c) =
           (*(float *)(lVar1 + 0x3f8) - *(float *)(lVar1 + 0x2c0)) * fVar2 +
           *(float *)(lVar1 + 0x2c0);
      *(float *)(param_1 + 0x4260) =
           (*(float *)(lVar1 + 0x3fc) - *(float *)(lVar1 + 0x2c4)) * fVar2 +
           *(float *)(lVar1 + 0x2c4);
      FUN_145bec930();
      return;
    }
  }
  return;
}



// FUNCTION 1404f9e58 FUN_1404f9e58 body=820 status=ok
// SIG undefined FUN_1404f9e58(void)

void FUN_1404f9e58(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  lVar1 = param_1 + 17000;
  cVar3 = FUN_1404fa388(lVar1);
  if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x4210) != 0)) {
    lVar4 = FUN_14075fac2(param_1 + 0x42b8);
    if (lVar4 == 0) {
      fVar11 = 0.0;
    }
    else {
      lVar4 = FUN_14008e0ae(lVar4);
      fVar9 = *(float *)(lVar4 + 0x30) - *(float *)(lVar4 + 0x24);
      fVar11 = 0.0;
      if ((fVar9 != 0.0) || (NAN(fVar9))) {
        fVar11 = (*(float *)(lVar4 + 200) - *(float *)(lVar4 + 0x24)) / fVar9;
      }
    }
    lVar5 = FUN_1404fa18c(param_1);
    lVar4 = *(longlong *)(lVar5 + 0x90);
    if (lVar4 == 0) {
      uVar6 = FUN_1407f787c();
      lVar4 = FUN_14477b664(uVar6);
      *(longlong *)(lVar5 + 0x90) = lVar4;
    }
    lVar7 = *(longlong *)(lVar5 + 0x98);
    if (((lVar7 == 0) && (lVar7 = 0, lVar4 != 0)) && (*(longlong *)(lVar5 + 0x88) != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x88));
      }
      *(longlong *)(lVar5 + 0x98) = lVar7;
    }
    uVar10 = 0;
    FUN_1404fa226(lVar1,lVar7,fVar11,0);
    if (((&DAT_00001100)[param_1] == '\x03') || ((&DAT_00001100)[param_1] == '\x05')) {
      uVar10 = *(undefined4 *)(param_1 + 0x4288);
    }
    lVar5 = FUN_1404fa18c(param_1);
    lVar4 = *(longlong *)(lVar5 + 0xa8);
    if (lVar4 == 0) {
      uVar6 = FUN_1407f787c();
      lVar4 = FUN_14477b664(uVar6);
      *(longlong *)(lVar5 + 0xa8) = lVar4;
    }
    lVar7 = *(longlong *)(lVar5 + 0xb0);
    if (((lVar7 == 0) && (lVar7 = 0, lVar4 != 0)) && (*(longlong *)(lVar5 + 0xa0) != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0xa0));
      }
      *(longlong *)(lVar5 + 0xb0) = lVar7;
    }
    FUN_1404fa226(lVar1,lVar7,uVar10,0);
    if (*(char *)(param_1 + 0x4294) == '\0') {
      iVar8 = *(int *)(param_1 + 0x428c);
    }
    else {
      iVar8 = *(int *)(param_1 + 0x428c);
      if (*(int *)(param_1 + 0x4290) == iVar8) {
        return;
      }
    }
    *(int *)(param_1 + 0x4290) = iVar8;
    *(undefined1 *)(param_1 + 0x4294) = 1;
    lVar5 = FUN_1404fa18c(param_1);
    lVar4 = *(longlong *)(lVar5 + 0xc0);
    if (lVar4 == 0) {
      uVar6 = FUN_1407f787c();
      lVar4 = FUN_14477b664(uVar6);
      *(longlong *)(lVar5 + 0xc0) = lVar4;
    }
    lVar7 = *(longlong *)(lVar5 + 200);
    if (lVar7 == 0) {
      if ((*(longlong *)(lVar5 + 0xb8) == 0) || (lVar4 == 0)) {
        lVar7 = 0;
      }
      else {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0xb8));
        }
        *(longlong *)(lVar5 + 200) = lVar7;
      }
    }
    FUN_1404fa226(lVar1,lVar7,(float)iVar8,0);
    return;
  }
  return;
}



// FUNCTION 1404fa18c FUN_1404fa18c body=153 status=ok
// SIG undefined FUN_1404fa18c(void)

undefined * FUN_1404fa18c(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4210);
  if (lVar1 == 0) {
    puVar2 = &DAT_14cbc5e68;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbc5fa0) {
      FUN_144b3d300(&DAT_14cbc5fa0);
      if (DAT_14cbc5fa0 == -1) {
        puVar2 = &DAT_14cbc5e68;
        FUN_1412b46dc(&DAT_14cbc5e68);
        atexit(FUN_1440e8753);
        _Init_thread_footer(&DAT_14cbc5fa0);
      }
    }
  }
  else {
    puVar2 = (undefined *)(lVar1 + 0x3d8);
    if (*(char *)(param_1 + 0x4235) == '\0') {
      puVar2 = (undefined *)(lVar1 + 0x2a0);
    }
  }
  return puVar2;
}



// FUNCTION 1404fa226 FUN_1404fa226 body=352 status=ok
// SIG undefined FUN_1404fa226(void)

void FUN_1404fa226(longlong *param_1,longlong param_2,undefined4 param_3,float param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = FUN_1404fa388();
  if (((param_2 == 0) || (cVar5 == '\0')) ||
     (plVar3 = (longlong *)param_1[1], plVar3 == (longlong *)0x0)) goto LAB_1404fa300;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_1404fa300;
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar7 = iVar6 == iVar4;
    if (bVar7) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
  } while (!bVar7);
  if (*param_1 != 0) {
    local_58 = (undefined4)param_1[2];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_50 = (undefined4)param_1[3];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
    FUN_1404fa4f6(*param_1,&local_48);
    if (local_48 != (longlong *)0x0) {
      local_68 = 0;
      FUN_1447997cc(local_48,param_2,param_3,(int)(param_4 * 1000.0));
      *(int *)(local_48 + 0x21) = (int)local_48[0x21] + -1;
      if (((int)local_48[0x26] < 1) && (FUN_1400847bc(local_48 + 0x17,0), (int)local_48[0x21] == 0))
      {
        FUN_140087e46(local_48);
        if (*local_48 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1404fa2fa;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_48);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_48);
        }
      }
    }
  }
LAB_1404fa2fa:
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
LAB_1404fa300:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404fa388 FUN_1404fa388 body=175 status=ok
// SIG undefined FUN_1404fa388(void)

uint FUN_1404fa388(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint unaff_EDI;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)((longlong)param_1 + 0x14) != 0 || (int)param_1[2] != 0) || (int)param_1[3] != 0)
       || *(int *)((longlong)param_1 + 0x1c) != 0) &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1404fa419;
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
    lVar4 = *param_1;
    if (lVar4 != 0) {
      local_38 = (undefined4)param_1[2];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_30 = (undefined4)param_1[3];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
      unaff_EDI = FUN_1404fa438(lVar4);
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
    if (lVar4 != 0) goto LAB_1404fa3f4;
  }
LAB_1404fa419:
  unaff_EDI = 0;
LAB_1404fa3f4:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EDI & 0xffffff01;
}



// FUNCTION 1404fa438 FUN_1404fa438 body=75 status=ok
// SIG undefined FUN_1404fa438(void)

bool FUN_1404fa438(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    bVar3 = false;
  }
  else {
    uVar1 = FUN_1447addd0(param_2,0x10);
    iVar2 = FUN_1404fa484(param_1 + 0x140,uVar1,param_2);
    bVar3 = iVar2 != -1;
  }
  return bVar3;
}



// FUNCTION 1404fa484 FUN_1404fa484 body=113 status=ok
// SIG undefined FUN_1404fa484(void)

int FUN_1404fa484(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x40;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1404fa4f6 FUN_1404fa4f6 body=137 status=ok
// SIG undefined FUN_1404fa4f6(void)

longlong * FUN_1404fa4f6(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    uVar2 = FUN_1447addd0(param_3,0x10);
    iVar3 = FUN_1404fa484((longlong *)(param_1 + 0x140),uVar2,param_3);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x140);
      if ((lVar1 + (longlong)iVar3 * 0x40 != 0) &&
         (plVar4 = (longlong *)((longlong)iVar3 * 0x40 + lVar1 + 0x10), plVar4 != (longlong *)0x0))
      {
        lVar1 = *plVar4;
        *param_2 = lVar1;
        if (lVar1 == 0) {
          return param_2;
        }
        *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + 1;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1404fa580 FUN_1404fa580 body=649 status=ok
// SIG undefined FUN_1404fa580(void)

void FUN_1404fa580(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_1404fa5f3;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_1404fa5f3:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar11 = 1;
    iVar5 = 0;
    iVar14 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar12;
    if (uVar8 == 0) {
      iVar5 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar5 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar16 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar16 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar16 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar12[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar11 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar11 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x18);
      uVar16 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x14 + lVar13 * 0x18) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar13 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar11 & uVar8;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar12[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar12[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar11 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 1404fa80a FUN_1404fa80a body=311 status=ok
// SIG undefined FUN_1404fa80a(void)

void FUN_1404fa80a(longlong *param_1)

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
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1404fa942 FUN_1404fa942 body=449 status=ok
// SIG undefined FUN_1404fa942(void)

void FUN_1404fa942(uint *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  longlong *plVar7;
  
  cVar2 = (char)param_1[0x10];
  if (cVar2 == '\x03') {
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    puVar6 = param_1 + 8;
    if (*(uint **)(param_1 + 4) != (uint *)0x0) {
      puVar6 = *(uint **)(param_1 + 4);
    }
    uVar4 = (**(code **)(*(longlong *)puVar6 + 8))(puVar6);
                    /* WARNING: Could not recover jumptable at 0x0001404faae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar4);
    return;
  }
  if (cVar2 != '\x02') {
    if (((cVar2 == '\x01') && (param_1[2] != 0)) && (*(longlong **)param_1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)param_1 + 0x30))();
      if (cVar2 != '\0') {
        if (((param_1[2] == 0) || (*(longlong **)param_1 == (longlong *)0x0)) ||
           ((**(code **)(**(longlong **)param_1 + 8))(), param_1[2] == 0)) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)param_1;
        }
                    /* WARNING: Could not recover jumptable at 0x0001404faafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x58))();
        return;
      }
      return;
    }
    return;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  plVar7 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if (*(uint *)(plVar7 + 2) != param_1[1]) {
    return;
  }
  if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) {
    return;
  }
  if (*plVar7 == 0) {
    return;
  }
  lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),*(longlong *)(param_1 + 2),1);
  if (lVar3 == 0) {
    return;
  }
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    plVar7 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1404faa8e;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar5 + 2) == param_1[1] && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      plVar7 = (longlong *)*puVar5;
      goto LAB_1404faa8e;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1404faa8e:
  uVar4 = FUN_14477b072(plVar7,*(undefined8 *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x0001404faab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x248))(plVar7,uVar4,0,*(code **)(*plVar7 + 0x248));
  return;
}



// FUNCTION 1404fab04 FUN_1404fab04 body=52 status=ok
// SIG undefined FUN_1404fab04(void)

void FUN_1404fab04(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x810) == 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28))(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x810) = uVar1;
  }
  return;
}



// FUNCTION 1404fab38 FUN_1404fab38 body=549 status=ok
// SIG undefined FUN_1404fab38(void)

void FUN_1404fab38(longlong *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  
  FUN_146548c0c(*param_1);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    lVar5 = *(longlong *)(*param_1 + 0xa8);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) {
      *(undefined4 *)(*param_1 + 0x2b94) = 0xffffffff;
      uVar1 = *(ulonglong *)(*param_1 + 0x38);
      if (uVar1 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,*param_1,uVar1,9);
      }
      else {
        uVar9 = (uint)uVar1;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar5 + 8);
            }
            *puVar7 = *puVar7 | 0x200;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
    FUN_1409df526(*param_1,&DAT_14cb85548);
    lVar5 = *param_1;
    *(undefined8 *)(lVar5 + 0x138) = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8._4_4_;
    uVar3 = (undefined4)DAT_14c8464e8;
    uVar2 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(lVar5 + 0x128) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(lVar5 + 300) = uVar2;
    *(undefined4 *)(lVar5 + 0x130) = uVar3;
    *(undefined4 *)(lVar5 + 0x134) = uVar4;
    *(byte *)(*param_1 + 0x5b4) = *(byte *)(*param_1 + 0x5b4) | 0x20;
    lVar5 = *param_1;
    if ((((*(longlong *)(lVar5 + 0xa8) != 0) && (1 < *(byte *)(*(longlong *)(lVar5 + 0xa8) + 0x178))
         ) && ((&DAT_00001100)[lVar5] == '\x01')) && (*(int *)(&DAT_00002bb0 + lVar5) != 0)) {
      *(undefined4 *)(&DAT_00002bb0 + lVar5) = 0;
      uVar1 = *(ulonglong *)(lVar5 + 0x38);
      if (uVar1 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))();
      }
      else {
        uVar9 = (uint)uVar1;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar5 + 8);
            }
            *puVar7 = *puVar7 | 0x400;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x101) = 0;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
    }
  }
  return;
}



// FUNCTION 1404fad5e FUN_1404fad5e body=463 status=ok
// SIG undefined FUN_1404fad5e(void)

void FUN_1404fad5e(longlong *param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  
  plVar4 = param_1 + 0x222;
  if ((longlong *)param_1[0x228] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x228];
  }
  if ((longlong)(int)param_1[0x229] != 0) {
    lVar5 = (longlong)(int)param_1[0x229] * 0xc;
    do {
      if (*(longlong *)((longlong)plVar4 + 4) == DAT_14cb76120) {
        if (plVar4 != (longlong *)0x0) {
          if ((*(byte *)((longlong)param_1 + 0x2fac) & 0x10) == 0) {
            FUN_1409df526(param_1,&DAT_14cb76120);
          }
          else {
            uVar1 = *(undefined4 *)((longlong)param_1 + 0x1fc);
            *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
            FUN_1409df526(param_1,&DAT_14cb76120);
            FUN_140d735ec(param_1);
            *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar1;
          }
        }
        break;
      }
      plVar4 = (longlong *)((longlong)plVar4 + 0xc);
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  if ((((char)param_1[0x5f9] == '\x01') && ((*(byte *)((longlong)param_1 + 0x2fac) & 4) != 0)) &&
     (0.0 < (double)param_1[0x25] * (double)param_1[0x25] +
            (double)param_1[0x26] * (double)param_1[0x26])) {
    fVar6 = (float)(**(code **)(*param_1 + 0x480))(param_1);
    dVar2 = (double)param_1[0x25];
    dVar3 = (double)param_1[0x26];
    fVar6 = (float)((double)fVar6 / SQRT(dVar2 * dVar2 + dVar3 * dVar3));
    if (fVar6 < 1.0) {
      dVar7 = (double)fVar6;
      param_1[0x25] = (longlong)(dVar2 * dVar7);
      param_1[0x26] = (longlong)(dVar3 * dVar7);
    }
  }
  param_1[0x5f1] = 0;
  lVar5 = DAT_14c8464e8;
  param_1[0x5f2] = DAT_14c8464e0;
  param_1[0x5f3] = lVar5;
  param_1[0x5f4] = DAT_14c8464f0;
  param_1[0x5f5] = 0x13f800000;
  lVar5 = DAT_14c8464e8;
  param_1[0x5f6] = DAT_14c8464e0;
  param_1[0x5f7] = lVar5;
  param_1[0x5f8] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x5f9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fcc) = 0;
  return;
}



// FUNCTION 1404faf2e FUN_1404faf2e body=803 status=ok
// SIG undefined FUN_1404faf2e(void)

bool FUN_1404faf2e(longlong *param_1)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  uint local_1e8 [4];
  undefined1 local_1d8 [4];
  undefined4 local_1d4;
  undefined4 local_134;
  undefined4 local_108;
  double local_d8;
  double dStack_d0;
  double local_c8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  cVar9 = FUN_14022753c();
  if ((cVar9 != '\0') && ((*(byte *)(param_1 + 2) & 3) == 2)) {
    cVar9 = (**(code **)(*(longlong *)*param_1 + 0x600))();
    if ((cVar9 != '\0') && (param_1[1] != 0)) {
      lVar10 = param_1[7];
      if ((lVar10 == 0) || (*(char *)(lVar10 + 0x1fb) != '\x02')) {
        local_c8 = (double)param_1[6];
        local_d8 = (double)param_1[4];
        dStack_d0 = (double)param_1[5];
      }
      else {
        local_c8 = *(double *)(lVar10 + 0x270) + (double)param_1[6];
        dStack_d0 = *(double *)(lVar10 + 0x268) + (double)param_1[5];
        local_d8 = *(double *)(lVar10 + 0x260) + (double)param_1[4];
      }
      dVar5 = dStack_d0;
      dVar4 = local_d8;
      lVar10 = *(longlong *)(*param_1 + 0x110);
      dVar7 = *(double *)(lVar10 + 0x260);
      dVar8 = *(double *)(lVar10 + 0x268);
      dVar1 = *(double *)(lVar10 + 0x270);
      dVar6 = local_c8 - dVar1;
      lVar10 = FUN_14069294b();
      plVar3 = *(longlong **)(&DAT_00001ce8 + *param_1);
      fVar14 = 1.0;
      if ((char)plVar3[0xd] == '\x02') {
        fVar14 = *(float *)(lVar10 + 0x9c) + 1.0;
      }
      iVar2 = *(int *)(lVar10 + 0x20);
      fVar16 = *(float *)(param_1[1] + 0x38);
      fVar15 = *(float *)(lVar10 + 0x98);
      (**(code **)(*plVar3 + 0x528))(plVar3,local_1e8,&local_b4);
      fVar12 = (float)((double)(local_b4 + local_b4) +
                      (double)*(float *)(lVar10 + 0x28) + (dVar1 - (double)local_b4));
      fVar13 = *(float *)(lVar10 + 0x94);
      if (*(float *)(lVar10 + 0x94) <= fVar12) {
        fVar13 = fVar12;
      }
      if (ABS(dVar6) <= (double)(fVar13 * fVar14)) {
        fVar16 = fVar16 + (float)iVar2;
        if (fVar15 <= fVar16) {
          fVar15 = fVar16;
        }
        dVar4 = dVar4 - dVar7;
        dVar5 = dVar5 - dVar8;
        if (SQRT(dVar4 * dVar4 + dVar5 * dVar5) <= (double)(fVar14 * fVar15)) {
          local_1e8[0] = 0;
          local_1e8[1] = 0;
          local_1e8[2] = 0;
          memset(local_1d8,0,0x100);
          local_108 = 0xffffffff;
          local_134 = 0xffffffff;
          local_1d4 = 0x3f800000;
          local_1f8 = 0;
          (**(code **)(*(longlong *)*param_1 + 0x900))((longlong *)*param_1,&local_d8,local_1e8,0);
          bVar11 = ((local_1e8[0] ^ 0xffffffff) & 3) == 0;
          goto LAB_1404fb130;
        }
      }
    }
  }
  bVar11 = false;
LAB_1404fb130:
  if ((local_b0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404fb252 FUN_1404fb252 body=2961 status=ok
// SIG undefined FUN_1404fb252(void)

void FUN_1404fb252(longlong *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double _Y;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  double *pdVar17;
  undefined8 uVar18;
  undefined *puVar19;
  uint *puVar20;
  undefined8 unaff_RBP;
  uint uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_498 [32];
  undefined8 *local_478;
  undefined8 *local_470;
  undefined8 *local_468;
  undefined1 local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  longlong *local_450;
  undefined4 local_3b4;
  undefined4 local_388;
  undefined4 local_358;
  undefined4 local_354;
  undefined8 local_350;
  undefined8 local_348;
  double local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  ulonglong local_2c8;
  undefined **ppuStack_2c0;
  undefined *local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  ulonglong uStack_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined2 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined **local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  plVar15 = (longlong *)*param_1;
  if ((((plVar15 == (longlong *)0x0) || (plVar15[0x39d] == 0)) || (lVar22 = param_1[1], lVar22 == 0)
      ) || ((*(byte *)(param_1 + 2) & 2) == 0)) goto LAB_1404fb317;
  iVar6 = (int)param_1[3];
  if ((((longlong)iVar6 < 0) || (*(int *)(lVar22 + 0x20) <= iVar6)) ||
     (lVar22 = (longlong)iVar6 * 0x40 + *(longlong *)(lVar22 + 0x18), lVar22 == 0))
  goto LAB_1404fb317;
  (**(code **)(*plVar15 + 0xde8))();
  (**(code **)(*(longlong *)*param_1 + 0xde0))();
  FUN_140257a06(*param_1,&DAT_14cb85548,6);
  param_1[8] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  lVar13 = FUN_140963a30(lVar22 + 8);
  uVar41 = 0;
  if ((lVar13 == 0) ||
     (plVar15 = *(longlong **)(&DAT_00001ce8 + *param_1), plVar15 == (longlong *)0x0)) {
LAB_1404fb435:
    plVar15 = (longlong *)0x0;
  }
  else {
    uVar14 = FUN_1407ca880();
    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15,uVar14);
    if (plVar15 == (longlong *)0x0) goto LAB_1404fb435;
    uVar14 = FUN_1407ca880();
    plVar16 = (longlong *)FUN_144718840(plVar15,uVar14);
    if (plVar16 == (longlong *)0x0 || plVar15 == plVar16) goto LAB_1404fb435;
    uVar14 = (**(code **)(*plVar16 + 0x50))(plVar16);
    local_2b8 = (undefined *)0x0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2c8 = 0;
    ppuStack_2c0 = (undefined **)0x0;
    local_2d8 = (longlong *)0x0;
    uStack_2d0 = 0;
    uStack_2b0 = 0x8000000000;
    uStack_2a8 = 0xffffffff;
    uVar18 = FUN_140963a30(lVar22 + 8);
    local_470 = (undefined8 *)CONCAT71(local_470._1_7_,1);
    local_478 = &local_2d8;
    FUN_14096dfee(uVar14,&local_458,uVar18,1);
    uStack_290 = uStack_290 & 0xffffffff00000000;
    if (local_298 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_2d8);
    plVar15 = (longlong *)CONCAT44(uStack_454,local_458);
    if (plVar15 == (longlong *)0x0) {
      uVar41 = 0;
      plVar15 = (longlong *)0x0;
    }
    else {
      local_2d8 = (longlong *)0x0;
      uStack_2d0 = 0;
      (**(code **)(*plVar15 + 8))(plVar15,&local_2d8,&DAT_14cb8d438);
      if ((int)uStack_2d0 == 0) {
        if ((((*param_1 != 0) && (*(longlong *)(*param_1 + 0xb0) == 0)) &&
            (lVar13 = FUN_1448abda6(), lVar13 != 0)) &&
           ((*param_1 != 0 && (*(longlong *)(*param_1 + 0xb0) == 0)))) {
          FUN_1448abda6();
        }
      }
      if ((int)uStack_2d0 < 1) {
        uVar41 = 0;
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)*local_2d8;
        if (plVar15 == (longlong *)0x0) {
          uVar41 = 0;
          plVar15 = (longlong *)0x0;
        }
        else {
          fVar25 = (float)(**(code **)(*plVar15 + 0x2b0))(plVar15);
          *(float *)((longlong)param_1 + 0x44) = fVar25 * *(float *)(lVar22 + 0x38);
          uVar41 = *(undefined4 *)(lVar22 + 0x34);
          lVar22 = FUN_1402576f0();
          if ((*(int *)(plVar15[2] + 0x38) < *(int *)(lVar22 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) !=
              lVar22 + 0x30)) {
            plVar15 = (longlong *)0x0;
          }
          lVar22 = *(longlong *)(*param_1 + 0xa8);
          if ((lVar22 != 0) && (*(char *)(lVar22 + 0x178) == '\x03')) {
            *(int *)(*param_1 + 0x2b94) = (int)param_1[3];
            *(char *)(*param_1 + 0x2b90) = *(char *)(*param_1 + 0x2b90) + '\x01';
            uVar7 = *(ulonglong *)(*param_1 + 0x38);
            if (uVar7 < 0xffffffff00000000) {
              plVar16 = DAT_14c9980d0;
              if (DAT_14c9980d8 == 0) {
                plVar16 = (longlong *)0x0;
              }
              (**(code **)(*plVar16 + 0x58))(plVar16,*param_1,uVar7,9);
            }
            else {
              uVar21 = (uint)uVar7;
              if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c998088)) {
                puVar19 = &DAT_14c998070;
                if (DAT_14c998080 != (undefined *)0x0) {
                  puVar19 = DAT_14c998080;
                }
                if ((*(uint *)(puVar19 + ((uint)(uVar7 >> 3) & 0xffffffc)) >> (uVar21 & 0x1f) & 1)
                    != 0) {
                  lVar22 = DAT_14c998060 + (ulonglong)(uVar21 & 0x7fffffff) * 0x68;
                  puVar20 = *(uint **)(lVar22 + 0x18);
                  if (*(uint **)(lVar22 + 0x18) == (uint *)0x0) {
                    puVar20 = (uint *)(lVar22 + 8);
                  }
                  *puVar20 = *puVar20 | 0x200;
                  *(byte *)(lVar22 + 0x60) = *(byte *)(lVar22 + 0x60) | 1;
                }
              }
            }
          }
        }
      }
      if (local_2d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_450 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_450 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_450)(local_450);
        LOCK();
        piVar1 = (int *)((longlong)local_450 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_450 + 0x10))(local_450);
        }
      }
    }
  }
  lVar22 = *(longlong *)(*(longlong *)(*param_1 + 0x1f0) + 0x1c8);
  if (lVar22 == 0) {
    pdVar17 = &DAT_14c8464e0;
    uVar23 = SUB84(DAT_14c8464f0,0);
    uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar23 = (undefined4)*(undefined8 *)(lVar22 + 0x270);
    uVar26 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x270) >> 0x20);
    pdVar17 = (double *)(lVar22 + 0x260);
  }
  lVar22 = param_1[7];
  if ((lVar22 == 0) || (*(char *)(lVar22 + 0x1fb) != '\x02')) {
    dVar2 = (double)param_1[4];
    dVar3 = (double)param_1[5];
    dVar4 = (double)param_1[6];
  }
  else {
    dVar4 = *(double *)(lVar22 + 0x270) + (double)param_1[6];
    dVar3 = *(double *)(lVar22 + 0x268) + (double)param_1[5];
    dVar2 = *(double *)(lVar22 + 0x260) + (double)param_1[4];
  }
  dVar8 = dVar4 - (double)CONCAT44(uVar26,uVar23);
  dVar9 = dVar2 - *pdVar17;
  dVar10 = dVar3 - pdVar17[1];
  dVar28 = dVar9 * dVar9 + dVar10 * dVar10;
  if ((dVar28 != 1.0) || (NAN(dVar28))) {
    _Y = DAT_14c8464f0;
    dVar11 = DAT_14c8464e0;
    dVar12 = DAT_14c8464e8;
    if (9.99999993922529e-09 <= dVar28) {
      _Y = 0.0;
      dVar11 = (1.0 / SQRT(dVar28)) * dVar9;
      dVar12 = dVar10 * (1.0 / SQRT(dVar28));
    }
  }
  else {
    dVar11 = dVar9;
    dVar12 = dVar10;
    if ((dVar8 != 0.0) || (_Y = dVar8, NAN(dVar8))) {
      _Y = 0.0;
    }
  }
  local_2e8 = 0.0;
  if ((((dVar12 != 0.0) || (NAN(dVar12))) || (dVar11 != 0.0)) || (NAN(dVar11))) {
    local_2e8 = atan2(dVar12,dVar11);
    local_2e8 = local_2e8 * 57.29577951308232;
  }
  dVar28 = SQRT(dVar11 * dVar11 + dVar12 * dVar12);
  local_2f0 = 0.0;
  if (((_Y != 0.0) || (NAN(_Y))) || ((dVar28 != 0.0 || (NAN(dVar28))))) {
    local_2f0 = atan2(_Y,dVar28);
    local_2f0 = local_2f0 * 57.29577951308232;
  }
  local_2e0 = 0;
  local_308 = dVar9;
  local_300 = dVar10;
  local_2f8 = dVar8;
  FUN_140d2943c(&local_2f0,&local_2d8);
  lVar22 = *(longlong *)(*param_1 + 0x110);
  if (lVar22 == 0) {
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0x3ff00000;
    uVar37 = 0;
    uVar38 = 0x3ff00000;
    uVar39 = 0;
    uVar40 = 0x3ff00000;
    uVar42 = 0;
    uVar43 = 0x3ff00000;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar23 = 0;
    uVar26 = 0;
    uVar50 = 0;
    uVar51 = 0;
  }
  else {
    uVar23 = *(undefined4 *)(lVar22 + 0x240);
    uVar26 = *(undefined4 *)(lVar22 + 0x244);
    uVar50 = *(undefined4 *)(lVar22 + 0x248);
    uVar51 = *(undefined4 *)(lVar22 + 0x24c);
    uVar33 = *(undefined4 *)(lVar22 + 0x250);
    uVar34 = *(undefined4 *)(lVar22 + 0x254);
    uVar35 = *(undefined4 *)(lVar22 + 600);
    uVar36 = *(undefined4 *)(lVar22 + 0x25c);
    uVar46 = *(undefined4 *)(lVar22 + 0x260);
    uVar47 = *(undefined4 *)(lVar22 + 0x264);
    uVar48 = *(undefined4 *)(lVar22 + 0x268);
    uVar49 = *(undefined4 *)(lVar22 + 0x26c);
    uVar29 = *(undefined4 *)(lVar22 + 0x270);
    uVar30 = *(undefined4 *)(lVar22 + 0x274);
    uVar31 = *(undefined4 *)(lVar22 + 0x278);
    uVar32 = *(undefined4 *)(lVar22 + 0x27c);
    uVar37 = *(undefined4 *)(lVar22 + 0x280);
    uVar38 = *(undefined4 *)(lVar22 + 0x284);
    uVar39 = *(undefined4 *)(lVar22 + 0x288);
    uVar40 = *(undefined4 *)(lVar22 + 0x28c);
    uVar42 = *(undefined4 *)(lVar22 + 0x290);
    uVar43 = *(undefined4 *)(lVar22 + 0x294);
    uVar44 = *(undefined4 *)(lVar22 + 0x298);
    uVar45 = *(undefined4 *)(lVar22 + 0x29c);
  }
  local_478 = (undefined8 *)CONCAT71(local_478._1_7_,1);
  local_320 = dVar2;
  local_318 = dVar3;
  local_310 = dVar4;
  FUN_140d93b16(lVar22,&local_320,0,0);
  FUN_146555e62(*param_1);
  lVar22 = *param_1;
  lVar13 = *(longlong *)(lVar22 + 0x110);
  if (lVar13 == 0) {
    local_338 = 0x47efffffe0000000;
    uStack_330 = 0x47efffffe0000000;
    local_328 = 3.4028234663852886e+38;
    uVar24 = 0xe0000000;
    uVar27 = 0x47efffff;
    local_348 = 0x47efffffe0000000;
  }
  else {
    uVar24 = *(undefined4 *)(lVar13 + 0x260);
    uVar27 = *(undefined4 *)(lVar13 + 0x264);
    local_338 = *(undefined8 *)(lVar13 + 0x260);
    uStack_330 = *(undefined8 *)(lVar13 + 0x268);
    local_348 = *(undefined8 *)(lVar13 + 0x268);
    local_328 = *(double *)(lVar13 + 0x270);
  }
  local_340 = local_328 - (double)*(float *)(lVar22 + 0x1fc);
  local_350 = CONCAT44(uVar27,uVar24);
  (**(code **)(**(longlong **)(&DAT_00001ce8 + lVar22) + 0x528))
            (*(longlong **)(&DAT_00001ce8 + lVar22),&local_354,&local_358);
  lVar13 = 0;
  memset(&local_458,0,0x100);
  local_388 = 0xffffffff;
  uStack_454 = 0x3f800000;
  local_3b4 = 0xffffffff;
  local_2d8 = (longlong *)CONCAT44(local_354,3);
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,local_358);
  lVar22 = *param_1;
  uVar5 = *(undefined1 *)(*(longlong *)(lVar22 + 0x118) + 0x2ea);
  uVar14 = *(undefined8 *)(&DAT_00001ce8 + lVar22);
  if ((lVar22 != 0) && (lVar13 = *(longlong *)(lVar22 + 0xb0), lVar13 == 0)) {
    lVar13 = FUN_1448abda6();
  }
  local_470 = &local_350;
  local_478 = &local_338;
  local_460 = 1;
  local_468 = &local_2d8;
  FUN_140692a30(&local_458,lVar13,uVar14,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar5) & 0xffffffff);
  local_2d8 = (longlong *)0x0;
  local_2c8 = local_2c8 & 0xffffffffffffff00;
  ppuStack_2c0 = &PTR_FUN_14b00bdf8;
  uStack_290 = 0;
  local_288 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  local_284 = 0xffffffff00000080;
  local_27c = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x7f7fffff;
  local_24c = 0x404;
  local_2b8 = &DAT_14a176f00;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_210 = &PTR_FUN_14b00bdf8;
  local_1e0 = 0;
  local_1d8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d4 = 0xffffffff00000080;
  local_1cc = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0x7f7fffff;
  local_19c = 0x404;
  local_208 = &DAT_14a176f00;
  local_168 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  uStack_2d0 = CONCAT44(0xbf800000,uVar41);
  local_158 = uVar23;
  uStack_154 = uVar26;
  uStack_150 = uVar50;
  uStack_14c = uVar51;
  local_148 = uVar33;
  uStack_144 = uVar34;
  uStack_140 = uVar35;
  uStack_13c = uVar36;
  local_138 = uVar46;
  uStack_134 = uVar47;
  uStack_130 = uVar48;
  uStack_12c = uVar49;
  local_128 = uVar29;
  uStack_124 = uVar30;
  uStack_120 = uVar31;
  uStack_11c = uVar32;
  local_118 = uVar37;
  uStack_114 = uVar38;
  uStack_110 = uVar39;
  uStack_10c = uVar40;
  local_108 = uVar42;
  uStack_104 = uVar43;
  uStack_100 = uVar44;
  uStack_fc = uVar45;
  if ((plVar15 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar15);
  }
  local_2d8 = plVar15;
  FUN_143cdf59a(*param_1,&local_2d8);
  lVar22 = *param_1;
  if (((*(longlong *)(lVar22 + 0xa8) != 0) && (1 < *(byte *)(*(longlong *)(lVar22 + 0xa8) + 0x178)))
     && (*(int *)(&DAT_00002bb0 + lVar22) != 0)) {
    *(undefined4 *)(&DAT_00002bb0 + lVar22) = 0;
    uVar7 = *(ulonglong *)(lVar22 + 0x38);
    if (uVar7 < 0xffffffff00000000) {
      plVar15 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar15 = (longlong *)0x0;
      }
      (**(code **)(*plVar15 + 0x58))(plVar15,lVar22,uVar7,10);
    }
    else {
      uVar21 = (uint)uVar7;
      if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c998088)) {
        puVar19 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar19 = DAT_14c998080;
        }
        if ((*(uint *)(puVar19 + ((uint)(uVar7 >> 3) & 0xffffffc)) >> (uVar21 & 0x1f) & 1) != 0) {
          lVar22 = DAT_14c998060 + (ulonglong)(uVar21 & 0x7fffffff) * 0x68;
          puVar20 = *(uint **)(lVar22 + 0x18);
          if (*(uint **)(lVar22 + 0x18) == (uint *)0x0) {
            puVar20 = (uint *)(lVar22 + 8);
          }
          *puVar20 = *puVar20 | 0x400;
          *(byte *)(lVar22 + 0x60) = *(byte *)(lVar22 + 0x60) | 1;
        }
      }
    }
  }
  FUN_14051f4c4(&local_210);
  FUN_14051f4c4(&ppuStack_2c0);
LAB_1404fb317:
  if ((local_f0 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404fbde4 FUN_1404fbde4 body=116 status=ok
// SIG undefined FUN_1404fbde4(void)

ulonglong FUN_1404fbde4(longlong param_1)

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
LAB_1404fbe3b:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1404fbe3b;
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



// FUNCTION 1404fbe58 FUN_1404fbe58 body=637 status=ok
// SIG undefined FUN_1404fbe58(void)

void FUN_1404fbe58(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((((*(int *)(param_1 + 0x14) == 0) || (uVar3 = *(uint *)(param_1 + 0x10), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_1 + 0x14))))) ||
     (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 || (*plVar15 == 0)))) goto LAB_1404fbf3d;
  lVar12 = 0;
  if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
    lVar12 = *plVar15;
  }
  lVar12 = *(longlong *)(lVar12 + 0x20);
  if (lVar12 == 0) {
LAB_1404fc0ce:
    lVar12 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_50 = &local_38;
      local_38 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_1404fc0ce;
  }
  if (((param_3 != (longlong *)0x0) && (lVar12 == param_2)) && (4 < param_6 - 2)) {
    plVar15 = (longlong *)(**(code **)(*param_3 + 0x2a0))(param_3);
    if ((plVar15 != (longlong *)0x0) && (lVar12 = (**(code **)(*plVar15 + 8))(plVar15), lVar12 != 0)
       ) {
      lVar13 = FUN_14019a59a();
      if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30 &&
          (*(longlong *)(lVar12 + 0xa8) != 0)))) {
        iVar4 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
          FUN_14571ccc0((longlong *)(param_1 + 0x18),iVar4);
        }
        lVar13 = *(longlong *)(param_1 + 0x18);
        lVar16 = (longlong)iVar4 * 0x40;
        puVar2 = (undefined8 *)(lVar13 + 0x30 + lVar16);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar16);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar16);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar13 + lVar16) = 0;
        ((undefined8 *)(lVar13 + lVar16))[1] = 0;
        puVar14 = (undefined4 *)(**(code **)(*(longlong *)(lVar12 + 0x28) + 0x50))(lVar12 + 0x28);
        uVar5 = puVar14[1];
        uVar6 = puVar14[2];
        uVar7 = puVar14[3];
        uVar8 = *(undefined8 *)(puVar14 + 4);
        uVar9 = *(undefined8 *)(puVar14 + 6);
        uVar10 = *(undefined8 *)(puVar14 + 8);
        uVar11 = *(undefined8 *)(puVar14 + 10);
        puVar1 = (undefined4 *)(lVar13 + lVar16);
        *puVar1 = *puVar14;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar16);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar16);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        *(undefined8 *)(lVar13 + 0x30 + lVar16) = *(undefined8 *)(puVar14 + 0xc);
        *(bool *)(lVar13 + 0x38 + lVar16) = param_6 == 7;
      }
    }
  }
LAB_1404fbf3d:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404fc0d6 FUN_1404fc0d6 body=137 status=ok
// SIG undefined FUN_1404fc0d6(void)

float FUN_1404fc0d6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x240)) {
    fVar4 = 10.0;
    if ((((*(int *)(param_1 + 0x22c) != 0) && (uVar1 = *(uint *)(param_1 + 0x228), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x22c))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      fVar4 = *(float *)(lVar2 + 1000);
    }
    fVar4 = 1.0 - *(float *)(param_1 + 0x240) / fVar4;
  }
  return fVar4;
}



// FUNCTION 1404fc160 FUN_1404fc160 body=192 status=ok
// SIG undefined FUN_1404fc160(void)

void FUN_1404fc160(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x50);
    lVar8 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
    do {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        uVar6 = FUN_1406f88fc();
        cVar5 = FUN_1448093f4(lVar3,uVar6);
        if (cVar5 != '\0') {
          FUN_14571dc88(plVar7,local_40);
          (*(code *)*param_2)(param_2[1],local_40);
          plVar4 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_38)(local_38);
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
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404fc222 FUN_1404fc222 body=373 status=ok
// SIG undefined FUN_1404fc222(void)

void FUN_1404fc222(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404fc2ab;
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
LAB_1404fc2ab:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1404fc398 FUN_1404fc398 body=794 status=ok
// SIG undefined FUN_1404fc398(void)

void FUN_1404fc398(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  longlong *plVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar15 = &local_358;
    do {
      pfVar7 = (float *)*plVar15;
      pfVar16 = (float *)plVar15[1];
      iVar18 = (int)plVar15[2];
      iVar8 = (int)((ulonglong)((longlong)pfVar16 - (longlong)pfVar7) >> 3);
      pfVar11 = pfVar16;
      pfVar19 = pfVar7;
      if (iVar18 != 0) {
LAB_1404fc463:
        uVar10 = iVar8 * -0x55555555 + 1;
        if (8 < (int)uVar10) {
          uVar12 = (ulonglong)(uVar10 >> 1);
          uVar1 = *(undefined8 *)(pfVar7 + uVar12 * 6 + 4);
          uVar2 = *(undefined8 *)(pfVar7 + uVar12 * 6);
          uVar3 = *(undefined8 *)(pfVar7 + uVar12 * 6 + 2);
          *(undefined8 *)(pfVar7 + uVar12 * 6 + 4) = *(undefined8 *)(pfVar7 + 4);
          uVar4 = *(undefined8 *)(pfVar7 + 2);
          *(undefined8 *)(pfVar7 + uVar12 * 6) = *(undefined8 *)pfVar7;
          *(undefined8 *)(pfVar7 + uVar12 * 6 + 2) = uVar4;
          *(undefined8 *)(pfVar7 + 4) = uVar1;
          *(undefined8 *)pfVar7 = uVar2;
          *(undefined8 *)(pfVar7 + 2) = uVar3;
          pfVar13 = pfVar16 + 6;
          pfVar9 = pfVar7;
          do {
            pfVar5 = pfVar9 + 6;
            pfVar17 = pfVar9 + 6;
            do {
              pfVar9 = pfVar17;
              pfVar14 = pfVar5;
              if (pfVar16 < pfVar9) break;
              pfVar5 = pfVar14 + 6;
              pfVar17 = pfVar9 + 6;
            } while (*pfVar9 < *pfVar7 || *pfVar9 == *pfVar7);
            pfVar5 = pfVar13 + -0xc;
            do {
              pfVar17 = pfVar13;
              pfVar20 = pfVar5;
              pfVar13 = pfVar17 + -6;
              if (pfVar13 <= pfVar7) break;
              pfVar5 = pfVar20 + -6;
            } while (*pfVar7 < *pfVar13 || *pfVar7 == *pfVar13);
            if (pfVar13 < pfVar9) goto LAB_1404fc5e9;
            uVar1 = *(undefined8 *)(pfVar9 + 4);
            uVar2 = *(undefined8 *)pfVar9;
            uVar3 = *(undefined8 *)(pfVar9 + 2);
            *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(pfVar17 + -2);
            uVar4 = *(undefined8 *)(pfVar17 + -4);
            *(undefined8 *)pfVar9 = *(undefined8 *)pfVar13;
            *(undefined8 *)(pfVar9 + 2) = uVar4;
            *(undefined8 *)(pfVar17 + -2) = uVar1;
            *(undefined8 *)pfVar13 = uVar2;
            *(undefined8 *)(pfVar17 + -4) = uVar3;
          } while( true );
        }
        if (pfVar7 < pfVar16) {
          do {
            pfVar11 = pfVar7;
            if (pfVar7 + 6 <= pfVar16) {
              fVar21 = *pfVar7;
              pfVar19 = pfVar7 + 6;
              do {
                fVar6 = *pfVar19;
                pfVar13 = pfVar19;
                if (*pfVar19 <= fVar21) {
                  fVar6 = fVar21;
                  pfVar13 = pfVar11;
                }
                pfVar11 = pfVar13;
                fVar21 = fVar6;
                pfVar19 = pfVar19 + 6;
              } while (pfVar19 <= pfVar16);
            }
            local_48 = *(undefined8 *)(pfVar11 + 4);
            local_58 = *(undefined8 *)pfVar11;
            uStack_50 = *(undefined8 *)(pfVar11 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            *(undefined8 *)(pfVar11 + 4) = *(undefined8 *)(pfVar16 + 4);
            uVar1 = *(undefined8 *)(pfVar16 + 2);
            *(undefined8 *)pfVar11 = *(undefined8 *)pfVar16;
            *(undefined8 *)(pfVar11 + 2) = uVar1;
            *(undefined8 *)(pfVar16 + 4) = local_48;
            local_58._4_4_ = (float)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (float)((ulonglong)uStack_50 >> 0x20);
            *pfVar16 = (float)local_58;
            pfVar16[1] = local_58._4_4_;
            pfVar16[2] = (float)uStack_50;
            pfVar16[3] = uStack_50._4_4_;
            pfVar16 = pfVar16 + -6;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (pfVar7 < pfVar16);
        }
        goto LAB_1404fc4ed;
      }
LAB_1404fc502:
      FUN_14860b74e(pfVar7);
LAB_1404fc4ed:
      plVar15 = plVar15 + -3;
    } while (&local_358 <= plVar15);
  }
  if ((local_38 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1404fc5e9:
  local_48 = *(undefined8 *)(pfVar7 + 4);
  local_58 = *(undefined8 *)pfVar7;
  uStack_50 = *(undefined8 *)(pfVar7 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  *(undefined8 *)(pfVar7 + 4) = *(undefined8 *)(pfVar17 + -2);
  uVar1 = *(undefined8 *)(pfVar17 + -4);
  *(undefined8 *)pfVar7 = *(undefined8 *)pfVar13;
  *(undefined8 *)(pfVar7 + 2) = uVar1;
  *(undefined8 *)(pfVar17 + -2) = local_48;
  local_58._4_4_ = (float)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (float)((ulonglong)uStack_50 >> 0x20);
  *pfVar13 = (float)local_58;
  pfVar17[-5] = local_58._4_4_;
  pfVar17[-4] = (float)uStack_50;
  pfVar17[-3] = uStack_50._4_4_;
  iVar18 = iVar18 + -1;
  pfVar17 = pfVar17 + -0xc;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)pfVar20 - (longlong)pfVar19 < (longlong)pfVar11 - (longlong)pfVar14) {
    if (pfVar9 < pfVar16) {
      *plVar15 = (longlong)pfVar9;
      plVar15[1] = (longlong)pfVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    pfVar14 = pfVar7;
    if (pfVar13 <= pfVar7 + 6) goto LAB_1404fc4ed;
  }
  else {
    if (pfVar7 + 6 < pfVar13) {
      *plVar15 = (longlong)pfVar7;
      plVar15[1] = (longlong)pfVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    pfVar7 = pfVar9;
    pfVar17 = pfVar16;
    pfVar20 = pfVar16;
    if (pfVar16 <= pfVar9) goto LAB_1404fc4ed;
  }
  iVar8 = (int)((ulonglong)((longlong)pfVar20 - (longlong)pfVar14) >> 3);
  pfVar16 = pfVar17;
  pfVar11 = pfVar20;
  pfVar19 = pfVar14;
  if (iVar18 == 0) goto LAB_1404fc502;
  goto LAB_1404fc463;
}



// FUNCTION 1404fc6b4 FUN_1404fc6b4 body=2076 status=ok
// SIG undefined FUN_1404fc6b4(void)

void FUN_1404fc6b4(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float fVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong **pplVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  longlong *plVar27;
  longlong *plVar28;
  int iVar29;
  longlong *plVar30;
  bool bVar31;
  float fVar32;
  undefined1 auStack_3b8 [40];
  longlong local_390;
  undefined2 *local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong *local_368;
  undefined8 local_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 local_350;
  undefined8 uStack_348;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  plVar22 = (longlong *)(param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(int *)(param_1 + 0x42c) != 0) {
    FUN_14012d2da(plVar22);
  }
  cVar10 = FUN_144729dda(param_1 + 0x238);
  if (cVar10 != '\0') {
    lVar11 = FUN_14479d2ce(param_1 + 0x238);
    plVar17 = (longlong *)(lVar11 + 0x4a0);
    lVar2 = lVar11 + 0x4b0;
    local_388 = (undefined2 *)0x100000000;
    local_378 = 0xffffffff;
    uStack_370 = 0;
    uStack_380 = lVar2;
    if (*(int *)(lVar11 + 0x4c8) == 0) {
      iVar24 = 0;
    }
    else {
      FUN_1449c0562(&local_388);
      iVar24 = *(int *)(lVar11 + 0x4c8);
    }
    uStack_348 = CONCAT44(uStack_36c,uStack_370);
    local_350 = local_378;
    uVar12 = local_350;
    local_360 = local_388;
    uStack_358 = (int)uStack_380;
    uStack_354 = uStack_380._4_4_;
    local_350._4_4_ = (int)((ulonglong)local_378 >> 0x20);
    iVar29 = local_350._4_4_;
    local_368 = plVar17;
    if ((local_350._4_4_ != iVar24) || (local_350 = uVar12, uStack_380 != lVar2)) {
      do {
        local_350 = uVar12;
        uVar12 = *(undefined8 *)(*local_368 + (longlong)iVar29 * 0x14);
        fVar32 = *(float *)(*local_368 + 8 + (longlong)iVar29 * 0x14);
        fVar6 = *(float *)(param_1 + 0x1f8);
        iVar29 = *(int *)(param_1 + 0x428);
        *(uint *)(param_1 + 0x428) = iVar29 + 1U;
        if (*(uint *)(param_1 + 0x42c) < iVar29 + 1U) {
          FUN_14493950a(plVar22,iVar29);
        }
        lVar11 = *plVar22;
        *(undefined8 *)(lVar11 + (longlong)iVar29 * 0xc) = uVar12;
        *(float *)(lVar11 + 8 + (longlong)iVar29 * 0xc) = fVar32 / fVar6;
        local_350 = CONCAT44(local_350._4_4_,(uint)local_350 & ~local_360._4_4_);
        FUN_1449c0562(&local_360);
        iVar29 = local_350._4_4_;
        uVar12 = local_350;
      } while (local_368 != plVar17 ||
               (CONCAT44(uStack_354,uStack_358) != lVar2 || local_350._4_4_ != iVar24));
    }
  }
  plVar17 = (longlong *)(param_1 + 0x3d0);
  lVar2 = param_1 + 0x3e0;
  local_388 = (undefined2 *)0x100000000;
  local_378._0_4_ = 0xffffffff;
  local_378._4_4_ = 0;
  uStack_370 = 0;
  uStack_380 = lVar2;
  if (*(int *)(param_1 + 0x3f8) == 0) {
    iVar24 = 0;
  }
  else {
    FUN_1449c0562(&local_388);
    iVar24 = *(int *)(param_1 + 0x3f8);
  }
  uStack_348 = CONCAT44(uStack_36c,uStack_370);
  local_350._0_4_ = (uint)local_378;
  local_350._4_4_ = local_378._4_4_;
  local_360 = local_388;
  uStack_358 = (int)uStack_380;
  uStack_354 = uStack_380._4_4_;
  local_368 = plVar17;
  if ((local_378._4_4_ != iVar24) || (uStack_380 != lVar2)) {
    do {
      uVar7 = *(undefined1 *)(*local_368 + (longlong)local_350._4_4_ * 0x10);
      uVar8 = *(undefined4 *)(*local_368 + 4 + (longlong)local_350._4_4_ * 0x10);
      uVar12 = FUN_14571e1e4();
      FUN_1401cfad2(uVar12,&local_388,uVar7);
      puVar15 = local_388;
      if ((int)uStack_380 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_390,puVar15,1);
      if (local_388 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar13 = *(longlong **)(param_1 + 0x420);
      iVar29 = *(int *)(param_1 + 0x428);
      lVar11 = (longlong)iVar29;
      if (lVar11 != 0) {
        lVar16 = lVar11 * 0xc;
        plVar20 = plVar13;
        do {
          if (*plVar20 == local_390) {
            if (plVar20 != (longlong *)0x0) goto LAB_1404fc99c;
            break;
          }
          plVar20 = (longlong *)((longlong)plVar20 + 0xc);
          lVar16 = lVar16 + -0xc;
        } while (lVar16 != 0);
      }
      *(uint *)(param_1 + 0x428) = iVar29 + 1U;
      if (*(uint *)(param_1 + 0x42c) < iVar29 + 1U) {
        FUN_14493950a(plVar22,iVar29);
        plVar13 = (longlong *)*plVar22;
      }
      *(longlong *)((longlong)plVar13 + lVar11 * 0xc) = local_390;
      *(undefined4 *)((longlong)plVar13 + lVar11 * 0xc + 8) = uVar8;
LAB_1404fc99c:
      local_350._0_4_ = (uint)local_350 & ~local_360._4_4_;
      FUN_1449c0562(&local_360);
    } while (local_368 != plVar17 ||
             (CONCAT44(uStack_354,uStack_358) != lVar2 || local_350._4_4_ != iVar24));
  }
  iVar24 = *(int *)(param_1 + 0x428);
  if (1 < (longlong)iVar24) {
    plVar22 = (longlong *)*plVar22;
    memset(&uStack_358,0,0x2f0);
    local_360 = (undefined2 *)((longlong)plVar22 + (longlong)iVar24 * 0xc + -0xc);
    local_368 = plVar22;
    fVar32 = logf((float)iVar24);
    uStack_358 = (int)(longlong)(fVar32 + fVar32);
    pplVar14 = &local_368;
    do {
      plVar17 = *pplVar14;
      plVar13 = pplVar14[1];
      iVar24 = *(int *)(pplVar14 + 2);
      iVar29 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar17) >> 2) * -0x55555555;
      uVar25 = iVar29 + 1;
      plVar19 = plVar17;
      plVar20 = plVar17;
      plVar22 = plVar13;
      if (iVar24 != 0) {
LAB_1404fca65:
        if (8 < (int)uVar25) {
          uVar21 = (ulonglong)(uVar25 >> 1);
          uVar8 = *(undefined4 *)((longlong)plVar20 + uVar21 * 0xc + 8);
          lVar2 = *(longlong *)((longlong)plVar20 + uVar21 * 0xc);
          *(int *)((longlong)plVar20 + uVar21 * 0xc + 8) = (int)plVar20[1];
          *(longlong *)((longlong)plVar20 + uVar21 * 0xc) = *plVar20;
          *(undefined4 *)(plVar20 + 1) = uVar8;
          *plVar20 = lVar2;
          plVar30 = (longlong *)((longlong)plVar22 + 0xc);
          plVar17 = plVar20;
          do {
            plVar9 = (longlong *)((longlong)plVar17 + 0xc);
            plVar23 = (longlong *)((longlong)plVar17 + 0xc);
            do {
              plVar17 = plVar23;
              plVar28 = plVar9;
              if (plVar22 < plVar17) break;
              plVar9 = (longlong *)((longlong)plVar28 + 0xc);
              plVar23 = (longlong *)((longlong)plVar17 + 0xc);
            } while (*(float *)(plVar17 + 1) < *(float *)(plVar20 + 1) ||
                     *(float *)(plVar17 + 1) == *(float *)(plVar20 + 1));
            plVar9 = plVar30 + -3;
            do {
              plVar23 = plVar30;
              plVar27 = plVar9;
              plVar30 = (longlong *)((longlong)plVar23 + -0xc);
              if (plVar30 <= plVar20) break;
              plVar9 = (longlong *)((longlong)plVar27 + -0xc);
            } while (*(float *)(plVar20 + 1) < *(float *)((longlong)plVar23 + -4) ||
                     *(float *)(plVar20 + 1) == *(float *)((longlong)plVar23 + -4));
            if (plVar30 < plVar17) goto LAB_1404fce12;
            lVar11 = plVar17[1];
            lVar2 = *plVar17;
            *(undefined4 *)(plVar17 + 1) = *(undefined4 *)((longlong)plVar23 + -4);
            *plVar17 = *plVar30;
            *(int *)((longlong)plVar23 + -4) = (int)lVar11;
            *plVar30 = lVar2;
          } while( true );
        }
        for (; lVar2 = uStack_380, plVar13 = plVar20, plVar17 = plVar20, plVar20 < plVar22;
            plVar22 = (longlong *)((longlong)plVar22 + -0xc)) {
          while (plVar19 = plVar13, plVar17 = (longlong *)((longlong)plVar17 + 0xc),
                plVar17 <= plVar22) {
            plVar13 = plVar17;
            if (*(float *)(plVar17 + 1) < *(float *)(plVar19 + 1) ||
                *(float *)(plVar17 + 1) == *(float *)(plVar19 + 1)) {
              plVar13 = plVar19;
            }
          }
          lVar2 = plVar19[1];
          uStack_380._4_4_ = (undefined4)((ulonglong)uStack_380 >> 0x20);
          uStack_380 = CONCAT44(uStack_380._4_4_,(int)lVar2);
          local_388 = (undefined2 *)*plVar19;
          *(int *)(plVar19 + 1) = (int)plVar22[1];
          *plVar19 = *plVar22;
          *(int *)(plVar22 + 1) = (int)lVar2;
          *plVar22 = (longlong)local_388;
        }
        goto LAB_1404fcae0;
      }
LAB_1404fcb34:
      lVar2 = uStack_380;
      if (uVar25 != 0) {
        iVar24 = (iVar29 - (iVar29 + -1 >> 0x1f)) + -1 >> 1;
        iVar29 = iVar24;
joined_r0x0001404fcb57:
        do {
          iVar26 = iVar24 * 2 + 1;
          uStack_380._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
          if (iVar26 < (int)uVar25) {
            iVar18 = iVar24 * 2 + 2;
            if ((iVar18 < (int)uVar25) &&
               (fVar32 = *(float *)((longlong)plVar17 + (longlong)iVar26 * 0xc + 8),
               pfVar5 = (float *)((longlong)plVar17 + (longlong)iVar18 * 0xc + 8),
               fVar32 < *pfVar5 || fVar32 == *pfVar5)) {
              iVar26 = iVar18;
            }
            fVar32 = *(float *)((longlong)plVar17 + (longlong)iVar26 * 0xc + 8);
            pfVar5 = (float *)((longlong)plVar17 + (longlong)iVar24 * 0xc + 8);
            if (*pfVar5 <= fVar32 && fVar32 != *pfVar5) {
              puVar3 = (undefined8 *)((longlong)plVar17 + (longlong)iVar24 * 0xc);
              puVar4 = (undefined8 *)((longlong)plVar17 + (longlong)iVar26 * 0xc);
              uVar8 = *(undefined4 *)(puVar3 + 1);
              uStack_380 = CONCAT44(uStack_380._4_4_,uVar8);
              local_388 = (undefined2 *)*puVar3;
              *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
              *puVar3 = *puVar4;
              *(undefined4 *)(puVar4 + 1) = uVar8;
              *puVar4 = local_388;
              iVar24 = iVar26;
              lVar2 = uStack_380;
              goto joined_r0x0001404fcb57;
            }
          }
          bVar31 = iVar29 != 0;
          iVar24 = iVar29 + -1;
          iVar29 = iVar24;
        } while (bVar31);
        if (1 < (int)uVar25) {
          uVar21 = (ulonglong)uVar25 - 1;
          lVar2 = plVar17[1];
          uStack_380 = CONCAT44(uStack_380._4_4_,(int)lVar2);
          local_388 = (undefined2 *)*plVar17;
          *(undefined4 *)(plVar17 + 1) = *(undefined4 *)((longlong)plVar17 + uVar21 * 0xc + 8);
          *plVar17 = *(longlong *)((longlong)plVar17 + uVar21 * 0xc);
          *(int *)((longlong)plVar17 + uVar21 * 0xc + 8) = (int)lVar2;
          *(undefined2 **)((longlong)plVar17 + uVar21 * 0xc) = local_388;
          lVar2 = uStack_380;
          if (uVar25 != 2) {
            do {
              iVar24 = 0;
              iVar26 = 1;
              iVar29 = 0;
              do {
                iVar24 = iVar24 + 2;
                iVar18 = iVar26;
                if (((longlong)iVar24 < (longlong)uVar21) &&
                   (fVar32 = *(float *)((longlong)plVar17 + (longlong)iVar26 * 0xc + 8),
                   pfVar5 = (float *)((longlong)plVar17 + (longlong)iVar24 * 0xc + 8),
                   fVar32 < *pfVar5 || fVar32 == *pfVar5)) {
                  iVar18 = iVar24;
                }
                fVar32 = *(float *)((longlong)plVar17 + (longlong)iVar18 * 0xc + 8);
                pfVar5 = (float *)((longlong)plVar17 + (longlong)iVar29 * 0xc + 8);
                if (fVar32 < *pfVar5 || fVar32 == *pfVar5) break;
                puVar3 = (undefined8 *)((longlong)plVar17 + (longlong)iVar29 * 0xc);
                puVar4 = (undefined8 *)((longlong)plVar17 + (longlong)iVar18 * 0xc);
                uVar8 = *(undefined4 *)(puVar3 + 1);
                uStack_380 = CONCAT44(uStack_380._4_4_,uVar8);
                uVar12 = *puVar3;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
                *puVar3 = *puVar4;
                *(undefined4 *)(puVar4 + 1) = uVar8;
                *puVar4 = uVar12;
                iVar24 = iVar18 * 2;
                iVar26 = iVar18 * 2 + 1;
                iVar29 = iVar18;
              } while ((longlong)iVar26 < (longlong)uVar21);
              uVar1 = uVar21 - 1;
              lVar2 = plVar17[1];
              uStack_380 = CONCAT44(uStack_380._4_4_,(int)lVar2);
              local_388 = (undefined2 *)*plVar17;
              *(undefined4 *)(plVar17 + 1) = *(undefined4 *)((longlong)plVar17 + uVar1 * 0xc + 8);
              *plVar17 = *(longlong *)((longlong)plVar17 + uVar1 * 0xc);
              *(int *)((longlong)plVar17 + uVar1 * 0xc + 8) = (int)lVar2;
              *(undefined2 **)((longlong)plVar17 + uVar1 * 0xc) = local_388;
              bVar31 = 2 < uVar21;
              uVar21 = uVar1;
              lVar2 = uStack_380;
            } while (bVar31);
          }
        }
      }
LAB_1404fcae0:
      uStack_380 = lVar2;
      pplVar14 = pplVar14 + -3;
    } while (&local_368 <= pplVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1404fce12:
  lVar2 = plVar20[1];
  uStack_380 = CONCAT44(uStack_380._4_4_,(int)lVar2);
  local_388 = (undefined2 *)*plVar20;
  *(undefined4 *)(plVar20 + 1) = *(undefined4 *)((longlong)plVar23 + -4);
  *plVar20 = *plVar30;
  *(int *)((longlong)plVar23 + -4) = (int)lVar2;
  *plVar30 = (longlong)local_388;
  iVar24 = iVar24 + -1;
  plVar23 = plVar23 + -3;
  lVar2 = uStack_380;
  if ((longlong)plVar27 - (longlong)plVar19 < (longlong)plVar13 - (longlong)plVar28) {
    if (plVar17 < plVar22) {
      *pplVar14 = plVar17;
      pplVar14[1] = plVar22;
      *(int *)(pplVar14 + 2) = iVar24;
      pplVar14 = pplVar14 + 3;
    }
    plVar17 = plVar20;
    plVar13 = plVar27;
    if (plVar30 <= (longlong *)((longlong)plVar20 + 0xc)) goto LAB_1404fcae0;
  }
  else {
    if ((longlong *)((longlong)plVar20 + 0xc) < plVar30) {
      *pplVar14 = plVar20;
      pplVar14[1] = plVar23;
      *(int *)(pplVar14 + 2) = iVar24;
      pplVar14 = pplVar14 + 3;
    }
    plVar20 = plVar28;
    plVar23 = plVar22;
    plVar13 = plVar22;
    if (plVar22 <= plVar17) goto LAB_1404fcae0;
  }
  iVar29 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar20) >> 2) * -0x55555555;
  uVar25 = iVar29 + 1;
  plVar19 = plVar20;
  plVar20 = plVar17;
  plVar22 = plVar23;
  if (iVar24 == 0) goto LAB_1404fcb34;
  goto LAB_1404fca65;
}



// FUNCTION 1404fced2 FUN_1404fced2 body=305 status=ok
// SIG undefined FUN_1404fced2(void)

void FUN_1404fced2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)param_1[0xe];
  uVar5 = 0;
  if ((longlong)(int)param_1[0xf] != 0) {
    plVar7 = plVar6 + (longlong)(int)param_1[0xf] * 2;
    do {
      if (((*plVar6 != 0) && (plVar9 = (longlong *)plVar6[1], plVar9 != (longlong *)0x0)) &&
         (0 < (int)plVar9[1])) {
        iVar4 = (int)plVar9[1];
        do {
          iVar3 = iVar4;
          if (iVar3 == 0) {
            plVar9 = (longlong *)0x0;
            lVar8 = 0;
            goto LAB_1404fcf81;
          }
          LOCK();
          iVar4 = (int)plVar9[1];
          bVar10 = iVar3 == iVar4;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar3 + 1;
            iVar4 = iVar3;
          }
          UNLOCK();
        } while (!bVar10);
        lVar8 = *plVar6;
LAB_1404fcf81:
        local_50 = *(undefined8 *)(lVar8 + 8);
        local_48 = *(longlong *)(lVar8 + 0x10);
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*param_1 + 0xa8))(param_1,&local_50);
        *(undefined1 *)(lVar8 + 0x18) = 1;
        if (iVar3 != 0) {
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
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar7);
    uVar5 = (undefined4)param_1[0xf];
    plVar6 = (longlong *)param_1[0xe];
  }
  FUN_1404fd004(plVar6,uVar5);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    FUN_14571e3f6(param_1 + 0xe);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404fd004 FUN_1404fd004 body=58 status=ok
// SIG undefined FUN_1404fd004(void)

void FUN_1404fd004(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404fd03e FUN_1404fd03e body=231 status=ok
// SIG undefined FUN_1404fd03e(void)

void FUN_1404fd03e(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_68,param_3);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar6) goto LAB_1404fd0d8;
          goto LAB_1404fd11a;
        }
      }
      uVar5 = uVar8 - 1;
      bVar6 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1404fd11a:
    FUN_14474d06a(param_1,0);
  }
LAB_1404fd0d8:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404fd126 FUN_1404fd126 body=156 status=ok
// SIG undefined FUN_1404fd126(void)

ulonglong FUN_1404fd126(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1404fd1a6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1404fd1a6;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = *param_2;
      uStack_24 = param_2[1];
      uStack_20 = param_2[2];
      uStack_1c = param_2[3];
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1404fd1c4 FUN_1404fd1c4 body=1783 status=ok
// SIG undefined FUN_1404fd1c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404fd1c4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  double dVar14;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  lVar12 = DAT_14cb54498;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar3 = *DAT_14cb54468;
  iVar4 = *DAT_14cb54480;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar5 == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar13 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar13 = DVar7 == DVar8;
      }
      else {
        bVar13 = false;
      }
    }
    uVar9 = (ulonglong)(bVar13 ^ 1);
  }
  if (param_3 == 0) goto LAB_1404fd532;
  lVar1 = param_1 + -0x390;
  lVar10 = *(longlong *)(param_3 + 0x20);
  if (lVar1 == param_2) {
    fVar2 = *(float *)(lVar12 + uVar9 * 4);
    FUN_1446f470e(&local_60,L"SunlightZenithOffset",1);
    if ((lVar10 == local_60) || (FUN_1446f470e(&local_68,L"SunlightRotation",1), lVar10 == local_68)
       ) {
      if (iVar4 < 1) {
        dVar14 = _DAT_14cb544b8;
        if (0.0 < fVar2) {
          QueryPerformanceCounter(&local_58);
          dVar14 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
          if (dVar14 - _DAT_14cb544b8 < (double)fVar2) goto LAB_1404fd528;
        }
        _DAT_14cb544b8 = dVar14;
        FUN_1404fda2e(lVar1);
      }
    }
    else {
      FUN_1446f470e(&local_70,L"MoonlightZenithOffset",1);
      if ((((lVar10 == local_70) ||
           (FUN_1446f470e(&local_78,L"MoonlightRotation",1), lVar10 == local_78)) ||
          (FUN_1446f470e(&local_80,L"MoonlightPitch",1), lVar10 == local_80)) ||
         (((FUN_1446f470e(&local_88,L"MoonlightYaw",1), lVar10 == local_88 ||
           (FUN_1446f470e(&local_90,L"MoonlightRoll",1), lVar10 == local_90)) ||
          (FUN_1446f470e(&local_98,L"bUseMoonlightZenithRotation",1), lVar10 == local_98)))) {
        if (iVar4 < 1) {
          dVar14 = _DAT_14cb544b8;
          if (0.0 < fVar2) {
            QueryPerformanceCounter(&local_58);
            dVar14 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
            if (dVar14 - _DAT_14cb544b8 < (double)fVar2) goto LAB_1404fd528;
          }
          _DAT_14cb544b8 = dVar14;
          FUN_1404ff11c(lVar1);
        }
      }
      else {
        FUN_1446f470e(&local_a0,L"bIsVolumetricCloudComponentVisible",1);
        if (lVar10 == local_a0) {
          FUN_14045627c(*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0xc1),1);
        }
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x30) == param_2) {
    FUN_1446f470e(&local_a8,L"LightColor",1);
    if ((((lVar10 == local_a8) || (FUN_1446f470e(&local_b0,L"Intensity",1), lVar10 == local_b0)) ||
        (FUN_1446f470e(&local_b8,L"IndirectLightingIntensity",1), lVar10 == local_b8)) ||
       ((FUN_1446f470e(&local_c0,L"VolumetricScatteringIntensity",1), lVar10 == local_c0 ||
        (FUN_1446f470e(&local_c8,L"Temperature",1), lVar10 == local_c8)))) {
      uVar11 = *(undefined8 *)(param_1 + 0x30);
LAB_1404fd523:
      FUN_1406f9b24(uVar11);
    }
    else {
      FUN_1446f470e(&local_d0,L"bAffectsWorld",1);
      if (((lVar10 == local_d0) ||
          ((FUN_1446f470e(&local_d8,L"CastShadows",1), lVar10 == local_d8 ||
           (FUN_1446f470e(&local_e0,L"LightFunctionMaterial",1), lVar10 == local_e0)))) ||
         (iVar3 < 1)) {
        lVar12 = *(longlong *)(param_1 + 0x30);
        goto LAB_1404fd2ac;
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x38) == param_2) {
    FUN_1446f470e(&local_e8,L"LightColor",1);
    if (((lVar10 == local_e8) || (FUN_1446f470e(&local_f0,L"Intensity",1), lVar10 == local_f0)) ||
       ((FUN_1446f470e(&local_f8,L"IndirectLightingIntensity",1), lVar10 == local_f8 ||
        ((FUN_1446f470e(&local_100,L"VolumetricScatteringIntensity",1), lVar10 == local_100 ||
         (FUN_1446f470e(&local_108,L"Temperature",1), lVar10 == local_108)))))) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      goto LAB_1404fd523;
    }
    FUN_1446f470e(&local_110,L"bAffectsWorld",1);
    if ((lVar10 == local_110) ||
       ((FUN_1446f470e(&local_118,L"CastShadows",1), lVar10 == local_118 || (iVar3 < 1)))) {
      lVar12 = *(longlong *)(param_1 + 0x38);
      goto LAB_1404fd2ac;
    }
  }
  else if (*(longlong *)(param_1 + 0x40) == param_2) {
    FUN_1446f470e(&local_120,L"LightColor",1);
    if ((((lVar10 == local_120) || (FUN_1446f470e(&local_128,L"Intensity",1), lVar10 == local_128))
        || (FUN_1446f470e(&local_130,L"IndirectLightingIntensity",1), lVar10 == local_130)) ||
       (FUN_1446f470e(&local_138,L"VolumetricScatteringIntensity",1), lVar10 == local_138)) {
      FUN_14349a0f6(*(undefined8 *)(param_1 + 0x40));
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x40);
LAB_1404fd2ac:
      if ((~*(byte *)(lVar12 + 0x9c) & 3) == 0) {
        bVar6 = *(byte *)(lVar12 + 0x9d);
        if ((bVar6 & 1) != 0) {
          if ((*(longlong *)(lVar12 + 0xb0) != 0) || (lVar10 = FUN_1448abda6(lVar12), lVar10 != 0))
          goto LAB_1404fd528;
          bVar6 = *(byte *)(lVar12 + 0x9d);
        }
        *(byte *)(lVar12 + 0x9d) = bVar6 | 1;
        FUN_1401057d4(lVar12);
LAB_1404fd792:
        FUN_14010586c(&DAT_14cad0140,lVar12);
      }
    }
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x48);
    if (lVar12 == param_2) {
      if ((~*(byte *)(lVar12 + 0x9c) & 3) == 0) {
        bVar6 = *(byte *)(lVar12 + 0x9d);
        if ((bVar6 & 1) != 0) {
          if ((*(longlong *)(lVar12 + 0xb0) != 0) || (lVar10 = FUN_1448abda6(lVar12), lVar10 != 0))
          goto LAB_1404fd528;
          bVar6 = *(byte *)(lVar12 + 0x9d);
        }
        *(byte *)(lVar12 + 0x9d) = bVar6 | 1;
        FUN_1401057d4(lVar12);
        goto LAB_1404fd792;
      }
    }
    else {
      lVar12 = *(longlong *)(param_1 + 0x58);
      if (lVar12 == param_2) goto LAB_1404fd2ac;
    }
  }
LAB_1404fd528:
  FUN_140fa3984(lVar1,0);
LAB_1404fd532:
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404fd8bc FUN_1404fd8bc body=370 status=ok
// SIG undefined FUN_1404fd8bc(void)

void FUN_1404fd8bc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404fd945;
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
LAB_1404fd945:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1404fda2e FUN_1404fda2e body=5868 status=ok
// SIG undefined FUN_1404fda2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404fda2e(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double extraout_XMM0_Qb;
  double dVar30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar47 [16];
  double dVar51;
  double dVar53;
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined1 local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
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
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
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
  double *pdVar13;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_2a8 = DAT_14c8464e0;
  dStack_2a0 = DAT_14c8464e8;
  dVar15 = (double)(*(float *)(param_1 + 0x434) + 90.0);
  auVar23._0_8_ = dVar15 / 360.0;
  auVar23._8_8_ = 0;
  auVar23 = roundpd(auVar23,auVar23,3);
  auVar31 = roundpd(in_XMM1,ZEXT816(0),3);
  dVar44 = (dVar15 - auVar23._0_8_ * 360.0) * 0.008726646259971648;
  dVar48 = (0.0 - auVar23._8_8_ * 360.0) * 0.008726646259971648;
  dVar51 = (0.0 - auVar31._0_8_ * 360.0) * 0.008726646259971648;
  dVar53 = (0.0 - auVar31._8_8_ * 360.0) * 0.008726646259971648;
  local_2b8 = DAT_14c8464f0;
  uStack_2b0 = 0;
  dVar16 = sin(dVar44);
  dVar17 = sin(dVar48);
  dVar15 = sin(dVar51);
  sin(dVar53);
  dVar44 = cos(dVar44);
  dVar18 = cos(dVar48);
  dVar48 = cos(dVar51);
  cos(dVar53);
  local_2d8._8_8_ = dVar48;
  local_2d8._0_8_ = dVar48;
  local_318._8_8_ = dVar44;
  local_318._0_8_ = dVar44;
  local_308 = dVar16 * dVar17;
  dStack_300 = dVar16 * dVar18;
  local_288 = DAT_14c8464e0;
  dStack_280 = DAT_14c8464e8;
  dVar44 = (double)(*(float *)(param_1 + 0x438) + 180.0);
  auVar31._0_8_ = dVar44 / 360.0;
  auVar31._8_8_ = 0;
  auVar23 = roundpd(auVar31,auVar31,3);
  dVar44 = (dVar44 - auVar23._0_8_ * 360.0) * 0.008726646259971648;
  dVar48 = (0.0 - auVar23._8_8_ * 360.0) * 0.008726646259971648;
  local_298 = DAT_14c8464f0;
  uStack_290 = 0;
  local_2f8 = dVar15;
  dStack_2f0 = dVar15;
  local_338 = sin(dVar51);
  dStack_330 = extraout_XMM0_Qb;
  dVar19 = sin(dVar53);
  dVar15 = sin(dVar44);
  sin(dVar48);
  dVar20 = cos(dVar51);
  dVar53 = cos(dVar53);
  dVar21 = cos(dVar44);
  cos(dVar48);
  dVar56 = local_338 * dVar19;
  dVar57 = local_338 * dVar53;
  dVar48 = local_338 * dVar53;
  dVar51 = local_338 * dVar19;
  dVar44 = dVar15;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54520) {
    local_338 = dVar15;
    dStack_330 = dVar15;
    FUN_144b3d300(&DAT_14cb54520);
    dVar30 = DAT_14c8464e8;
    dVar22 = DAT_14c8464e0;
    dVar15 = local_338;
    dVar44 = dStack_330;
    if (DAT_14cb54520 == -1) {
      local_328 = DAT_14c8464f0;
      dStack_320 = 0.0;
      local_1d8 = ZEXT816(0);
      local_1c8 = -90.0;
      FUN_144a7484c(local_1d8,&local_158);
      DAT_14cb544c0 = local_158;
      dRam000000014cb544c8 = dStack_150;
      _DAT_14cb544d0 = (double)local_148._0_8_;
      DAT_14cb544d8 = (double)local_148._8_8_;
      _DAT_14cb544e0 = dVar22;
      dRam000000014cb544e8 = dVar30;
      _DAT_14cb544f0 = local_328;
      dRam000000014cb544f8 = dStack_320;
      _DAT_14cb54500 = 0.5;
      dRam000000014cb54508 = 0.5;
      _DAT_14cb54510 = 0.5;
      dRam000000014cb54518 = 0.0;
      _Init_thread_footer(&DAT_14cb54520);
      dVar15 = local_338;
      dVar44 = dStack_330;
    }
  }
  dVar50 = dVar18 * (double)local_318._8_8_;
  uVar7 = local_2d8._0_8_;
  uVar8 = local_2d8._8_8_;
  dVar22 = dVar18 * (double)local_318._0_8_;
  dVar30 = dVar17 * (double)local_318._8_8_;
  dVar45 = dVar16 * dVar18 * local_2f8;
  dVar49 = dVar16 * dVar17 * dStack_2f0;
  dVar48 = dVar48 * dVar15;
  dVar51 = dVar51 * dVar44;
  dVar16 = dVar17 * (double)local_318._0_8_;
  dVar18 = local_308 * (double)local_2d8._0_8_;
  dVar42 = dStack_300 * (double)local_2d8._8_8_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54590) {
    local_318._8_4_ = SUB84(dVar50,0);
    local_318._0_8_ = dVar17 * (double)local_318._0_8_;
    local_318._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    local_338 = dVar15;
    dStack_330 = dVar44;
    local_328 = dVar45;
    dStack_320 = dVar49;
    local_308 = local_308 * (double)local_2d8._0_8_;
    dStack_300 = dStack_300 * (double)local_2d8._8_8_;
    local_2e8 = dVar48;
    dStack_2e0 = dVar51;
    FUN_144b3d300(&DAT_14cb54590);
    dVar43 = DAT_14c8464f0;
    dVar54 = DAT_14c8464e8;
    dVar17 = DAT_14c8464e0;
    dVar16 = (double)local_318._0_8_;
    dVar50 = (double)local_318._8_8_;
    dVar15 = local_338;
    dVar44 = dStack_330;
    dVar48 = local_2e8;
    dVar51 = dStack_2e0;
    dVar18 = local_308;
    dVar42 = dStack_300;
    dVar45 = local_328;
    dVar49 = dStack_320;
    if (DAT_14cb54590 == -1) {
      local_1d8 = ZEXT816(0);
      local_1c8 = 0.0;
      FUN_144a7484c(local_1d8,&local_158);
      DAT_14cb54530 = local_158;
      DAT_14cb54538 = dStack_150;
      DAT_14cb54540 = (double)local_148._0_8_;
      DAT_14cb54548 = (double)local_148._8_8_;
      _DAT_14cb54550 = dVar17;
      dRam000000014cb54558 = dVar54;
      _DAT_14cb54560 = dVar43;
      dRam000000014cb54568 = 0.0;
      _DAT_14cb54570 = 0.5;
      dRam000000014cb54578 = 0.5;
      _DAT_14cb54580 = 2.0;
      dRam000000014cb54588 = 0.0;
      _Init_thread_footer(&DAT_14cb54590);
      dVar16 = (double)local_318._0_8_;
      dVar50 = (double)local_318._8_8_;
      dVar15 = local_338;
      dVar44 = dStack_330;
      dVar48 = local_2e8;
      dVar51 = dStack_2e0;
      dVar18 = local_308;
      dVar42 = dStack_300;
      dVar45 = local_328;
      dVar49 = dStack_320;
    }
  }
  dVar50 = dVar50 * (double)uVar8;
  dVar22 = local_2f8 * dVar22;
  dVar30 = dStack_2f0 * dVar30;
  dVar15 = dVar15 * dVar53 * dVar20;
  dVar44 = dVar44 * dVar19 * dVar20;
  puVar12 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = DAT_14cb54600;
  dVar17 = dVar16 * (double)uVar7;
  dVar54 = -dVar48;
  dVar43 = -dVar42;
  dVar46 = -dVar45;
  if ((int)puVar12[0x44] < DAT_14cb54600) {
    puVar12 = &DAT_14cb54600;
    local_318._8_4_ = SUB84(dVar50,0);
    local_318._0_8_ = dVar16 * (double)uVar7;
    local_318._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    local_338 = dVar15;
    dStack_330 = dVar44;
    local_328 = -dVar45;
    dStack_320 = dVar49;
    local_308 = dVar18;
    dStack_300 = -dVar42;
    local_2f8 = dVar22;
    dStack_2f0 = dVar30;
    local_2e8 = -dVar48;
    dStack_2e0 = dVar51;
    iVar9 = FUN_144b3d300();
    dVar6 = dRam000000014cb54588;
    dVar5 = _DAT_14cb54580;
    dVar4 = dRam000000014cb54578;
    dVar3 = _DAT_14cb54570;
    dVar45 = dRam000000014cb54518;
    dVar42 = _DAT_14cb54510;
    dVar16 = dRam000000014cb54508;
    dVar48 = _DAT_14cb54500;
    auVar23 = _DAT_149934d80;
    dVar17 = (double)local_318._0_8_;
    dVar50 = (double)local_318._8_8_;
    dVar22 = local_2f8;
    dVar30 = dStack_2f0;
    dVar15 = local_338;
    dVar44 = dStack_330;
    dVar54 = local_2e8;
    dVar51 = dStack_2e0;
    dVar18 = local_308;
    dVar43 = dStack_300;
    dVar46 = local_328;
    dVar49 = dStack_320;
    if (DAT_14cb54600 == -1) {
      _DAT_14cb545d0 = 0.0;
      dRam000000014cb545d8 = 0.0;
      _DAT_14cb545c0 = 0.0;
      dRam000000014cb545c8 = 0.0;
      auVar38._8_8_ = dRam000000014cb54578;
      auVar38._0_8_ = _DAT_14cb54570;
      local_2d8._8_8_ = dRam000000014cb54508;
      local_2d8._0_8_ = _DAT_14cb54500;
      auVar31 = minpd(local_2d8,auVar38);
      auVar2._8_8_ = dRam000000014cb54588;
      auVar2._0_8_ = _DAT_14cb54580;
      local_2c8._8_8_ = dRam000000014cb54518;
      local_2c8._0_8_ = _DAT_14cb54510;
      auVar38 = minpd(local_2c8,auVar2);
      auVar34._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
      iVar9 = movmskpd(iVar9,auVar34);
      auVar40._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar40._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      uVar10 = movmskpd((int)puVar12,auVar40);
      if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
        DAT_14cb545a0 =
             dRam000000014cb544c8 * DAT_14cb54540 * -1.0 +
             _DAT_14cb544d0 * DAT_14cb54538 +
             DAT_14cb544d8 * DAT_14cb54530 * 1.0 + DAT_14cb544c0 * DAT_14cb54548;
        DAT_14cb545a8 =
             DAT_14cb544c0 * DAT_14cb54540 * 1.0 +
             DAT_14cb544d8 * DAT_14cb54538 +
             _DAT_14cb544d0 * DAT_14cb54530 * -1.0 + dRam000000014cb544c8 * DAT_14cb54548;
        DAT_14cb545b8 =
             _DAT_14cb544d0 * DAT_14cb54540 * -1.0 +
             ((DAT_14cb54530 * DAT_14cb544c0 * -1.0 + DAT_14cb544d8 * DAT_14cb54548) -
             dRam000000014cb544c8 * DAT_14cb54538);
        DAT_14cb545b0 =
             DAT_14cb544d8 * DAT_14cb54540 * 1.0 +
             ((DAT_14cb54530 * dRam000000014cb544c8 * 1.0 + _DAT_14cb544d0 * DAT_14cb54548) -
             DAT_14cb544c0 * DAT_14cb54538);
        dVar15 = _DAT_14cb544e0 * _DAT_14cb54570;
        dVar44 = dRam000000014cb544e8 * dRam000000014cb54578;
        dVar51 = _DAT_14cb544f0 * _DAT_14cb54580;
        dVar17 = dRam000000014cb544f8 * dRam000000014cb54588;
        dVar30 = dVar44 * DAT_14cb54530 - DAT_14cb54538 * dVar15;
        dVar50 = dVar51 * DAT_14cb54538 - DAT_14cb54540 * dVar44;
        dVar18 = dVar15 * DAT_14cb54540 - DAT_14cb54530 * dVar51;
        dVar22 = dVar17 * DAT_14cb54548 - DAT_14cb54548 * dVar17;
        dVar50 = dVar50 + dVar50;
        dVar18 = dVar18 + dVar18;
        dVar30 = dVar30 + dVar30;
        dVar22 = dVar22 + dVar22;
        _DAT_14cb545c0 =
             (dVar30 * DAT_14cb54538 - DAT_14cb54540 * dVar18) + DAT_14cb54548 * dVar50 + dVar15 +
             _DAT_14cb54550;
        dRam000000014cb545c8 =
             (dVar50 * DAT_14cb54540 - dVar30 * DAT_14cb54530) + DAT_14cb54548 * dVar18 + dVar44 +
             dRam000000014cb54558;
        _DAT_14cb545d0 =
             (dVar18 * DAT_14cb54530 - DAT_14cb54538 * dVar50) + DAT_14cb54548 * dVar30 + dVar51 +
             _DAT_14cb54560;
        dRam000000014cb545d8 =
             (dVar22 * DAT_14cb54548 - dVar22 * DAT_14cb54548) + DAT_14cb54548 * dVar22 + dVar17 +
             dRam000000014cb54568;
      }
      else {
        dVar17 = DAT_14cb54538 + DAT_14cb54538;
        dVar18 = DAT_14cb54540 + DAT_14cb54540;
        dVar15 = DAT_14cb54530 * (DAT_14cb54530 + DAT_14cb54530);
        local_188 = (1.0 - (dVar15 + DAT_14cb54538 * dVar17)) * _DAT_14cb54580;
        dVar22 = (DAT_14cb54530 + DAT_14cb54530) * DAT_14cb54548;
        local_198 = (dVar17 * DAT_14cb54548 + DAT_14cb54530 * dVar18) * _DAT_14cb54580;
        dVar44 = _DAT_14cb54580 * _DAT_14cb54510;
        dVar15 = (1.0 - (DAT_14cb54540 * dVar18 + dVar15)) * dRam000000014cb54578;
        dVar51 = (dVar17 * DAT_14cb54530 + dVar18 * DAT_14cb54548) * _DAT_14cb54570;
        local_1a8 = (dVar18 * DAT_14cb54538 + dVar22) * dRam000000014cb54578;
        dStack_190 = (dVar18 * DAT_14cb54538 - dVar22) * _DAT_14cb54580;
        local_1c8 = (DAT_14cb54530 * dVar18 - dVar17 * DAT_14cb54548) * _DAT_14cb54570;
        local_1d8._8_4_ = SUB84(dVar51,0);
        local_1d8._0_8_ = (1.0 - (DAT_14cb54540 * dVar18 + DAT_14cb54538 * dVar17)) * _DAT_14cb54570
        ;
        local_1d8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar15,0);
        local_1b8._0_8_ = (dVar17 * DAT_14cb54530 - dVar18 * DAT_14cb54548) * dRam000000014cb54578;
        local_1b8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = _DAT_14cb54550;
        dStack_170 = dRam000000014cb54558;
        local_168 = _DAT_14cb54560;
        uStack_160 = 0x3ff0000000000000;
        dVar18 = dRam000000014cb544c8 + dRam000000014cb544c8;
        dVar22 = _DAT_14cb544d0 + _DAT_14cb544d0;
        dVar15 = DAT_14cb544c0 * (DAT_14cb544c0 + DAT_14cb544c0);
        local_208 = (1.0 - (dVar15 + dRam000000014cb544c8 * dVar18)) * _DAT_14cb54510;
        dVar30 = (DAT_14cb544c0 + DAT_14cb544c0) * DAT_14cb544d8;
        local_218 = (dVar18 * DAT_14cb544d8 + DAT_14cb544c0 * dVar22) * _DAT_14cb54510;
        dStack_210 = (dVar22 * dRam000000014cb544c8 - dVar30) * _DAT_14cb54510;
        dVar51 = _DAT_14cb54570 * _DAT_14cb54500;
        dVar17 = dRam000000014cb54578 * dRam000000014cb54508;
        local_258 = ((double)DAT_149934d80 -
                    (_DAT_14cb544d0 * dVar22 + dRam000000014cb544c8 * dVar18)) * _DAT_14cb54500;
        dVar15 = (DAT_149934d80._8_8_ - (_DAT_14cb544d0 * dVar22 + dVar15)) * dRam000000014cb54508;
        dStack_250 = (dVar18 * DAT_14cb544c0 + dVar22 * DAT_14cb544d8) * _DAT_14cb54500;
        local_228 = (dVar22 * dRam000000014cb544c8 + dVar30) * dRam000000014cb54508;
        local_248 = (DAT_14cb544c0 * dVar22 - dVar18 * DAT_14cb544d8) * _DAT_14cb54500;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar15,0);
        local_238._0_8_ = (dVar18 * DAT_14cb544c0 - dVar22 * DAT_14cb544d8) * dRam000000014cb54508;
        local_238._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8._8_8_ = dRam000000014cb544e8;
        local_1f8._0_8_ = _DAT_14cb544e0;
        local_1e8._8_8_ = 0x3ff0000000000000;
        local_1e8._0_8_ = _DAT_14cb544f0;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar28._8_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar28._0_8_ = -(ulonglong)(0.0 <= dVar51);
        auVar31 = blendvpd(_DAT_149936790,auVar23,auVar28);
        uVar14 = -(ulonglong)(0.0 <= dVar44);
        dVar15 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
        dVar44 = auVar31._0_8_;
        dStack_150 = dStack_150 * dVar44;
        local_158 = local_158 * dVar44;
        local_148._0_8_ = (double)local_148._0_8_ * dVar44;
        dVar44 = auVar31._8_8_;
        local_128 = local_128 * dVar44;
        local_130 = local_130 * dVar44;
        local_138 = dVar44 * local_138;
        local_108 = local_108 * dVar15;
        local_110 = local_110 * dVar15;
        local_118 = dVar15 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar15 = local_268 * local_268 + local_278 * local_278;
        dVar44 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar37._0_8_ = dVar15 + dVar44;
        auVar37._8_8_ = dVar15 + dVar44;
        auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar31 = sqrtpd(auVar37,auVar37);
        auVar23 = divpd(auVar23,auVar31);
        auVar41._0_8_ = auVar23._0_8_ * local_268;
        auVar41._8_8_ = auVar23._8_8_ * dStack_260;
        DAT_14cb545a0 =
             (double)((ulonglong)(local_278 * auVar23._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
        DAT_14cb545a8 =
             (double)((ulonglong)(dStack_270 * auVar23._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
        _DAT_14cb545b0 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar29);
        _DAT_14cb545c0 = local_f8;
        dRam000000014cb545c8 = dStack_f0;
        _DAT_14cb545d0 = local_e8;
        dRam000000014cb545d8 = 0.0;
      }
      unique0x100014a4 = SUB84(dVar16 * dVar4,0);
      _DAT_14cb545e0 = dVar48 * dVar3;
      unique0x100014a8 = (int)((ulonglong)(dVar16 * dVar4) >> 0x20);
      unique0x10001180 = SUB84(dVar45 * dVar6,0);
      _DAT_14cb545f0 = dVar42 * dVar5;
      unique0x10001184 = (int)((ulonglong)(dVar45 * dVar6) >> 0x20);
      puVar12 = &DAT_14cb54600;
      iVar9 = _Init_thread_footer();
      dVar17 = (double)local_318._0_8_;
      dVar50 = (double)local_318._8_8_;
      dVar22 = local_2f8;
      dVar30 = dStack_2f0;
      dVar15 = local_338;
      dVar44 = dStack_330;
      dVar54 = local_2e8;
      dVar51 = dStack_2e0;
      dVar18 = local_308;
      dVar43 = dStack_300;
      dVar46 = local_328;
      dVar49 = dStack_320;
    }
  }
  auVar23 = _DAT_149934d80;
  dVar18 = dVar18 - dVar22;
  dVar43 = dVar43 - dVar30;
  dVar17 = dVar17 + dVar46;
  dVar50 = dVar50 + dVar49;
  dVar15 = dVar56 * dVar21 - dVar15;
  dVar44 = -(dVar57 * dVar21) - dVar44;
  dVar54 = dVar19 * dVar20 * dVar21 + dVar54;
  dVar51 = dVar53 * dVar20 * dVar21 + dVar51;
  dVar48 = (double)DAT_149931150;
  dVar16 = DAT_149931150._8_8_;
  auVar31 = minpd(_DAT_149931150,_DAT_149931ec0);
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  auVar38 = minpd(ZEXT816(0x3fe0000000000000),ZEXT816(0x4000000000000000));
  auVar33._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar33._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  iVar9 = movmskpd(iVar9,auVar33);
  auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  uVar10 = movmskpd((int)puVar12,auVar39);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar48 = dVar43 * dVar54 * -1.0 + dVar17 * dVar44 + dVar50 * dVar15 * 1.0 + dVar18 * dVar51;
    dVar16 = dVar18 * dVar54 * 1.0 + dVar50 * dVar44 + dVar17 * dVar15 * -1.0 + dVar43 * dVar51;
    auVar47._0_8_ =
         dVar50 * dVar54 * 1.0 + ((dVar15 * dVar43 * 1.0 + dVar17 * dVar51) - dVar44 * dVar18);
    auVar47._8_8_ =
         dVar17 * dVar54 * -1.0 + ((dVar15 * dVar18 * -1.0 + dVar50 * dVar51) - dVar44 * dVar43);
    dVar17 = local_2a8 + local_2a8;
    dVar18 = dStack_2a0 + dStack_2a0;
    dVar19 = local_2b8 * 2.0;
    dVar20 = dVar18 * dVar15 - dVar17 * dVar44;
    dVar53 = dVar19 * dVar44 - dVar18 * dVar54;
    dVar21 = dVar17 * dVar54 - dVar19 * dVar15;
    dVar53 = dVar53 + dVar53;
    dVar21 = dVar21 + dVar21;
    dVar20 = dVar20 + dVar20;
    local_f8 = local_288 + (dVar20 * dVar44 - dVar54 * dVar21) + dVar51 * dVar53 + dVar17;
    dStack_f0 = dStack_280 + (dVar53 * dVar54 - dVar20 * dVar15) + dVar51 * dVar21 + dVar18;
    local_e8 = local_298 + (dVar21 * dVar15 - dVar44 * dVar53) + dVar51 * dVar20 + dVar19;
    uVar11 = 0;
  }
  else {
    dVar56 = dVar44 + dVar44;
    dVar19 = dVar54 + dVar54;
    dVar21 = dVar15 * (dVar15 + dVar15);
    dVar20 = (double)DAT_149934d80 - (dVar54 * dVar19 + dVar44 * dVar56);
    dVar53 = DAT_149934d80._8_8_ - (dVar54 * dVar19 + dVar21);
    local_188 = 1.0 - (dVar21 + dVar44 * dVar56);
    dStack_190 = (dVar15 + dVar15) * dVar51;
    dVar57 = dVar56 * dVar15 + dVar19 * dVar51;
    local_1a8 = dVar19 * dVar44 + dStack_190;
    dVar21 = dVar56 * dVar15 - dVar19 * dVar51;
    dStack_190 = dVar19 * dVar44 - dStack_190;
    local_198 = dVar56 * dVar51 + dVar15 * dVar19;
    local_1c8 = dVar15 * dVar19 - dVar56 * dVar51;
    local_198 = local_198 + local_198;
    dStack_190 = dStack_190 + dStack_190;
    local_1a8 = local_1a8 + local_1a8;
    local_1d8._8_8_ = dVar57 + dVar57;
    local_1d8._0_8_ = dVar20 + dVar20;
    local_1c8 = local_1c8 + local_1c8;
    uStack_1c0 = 0;
    local_1b8._8_8_ = dVar53 + dVar53;
    local_1b8._0_8_ = dVar21 + dVar21;
    local_188 = local_188 + local_188;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_288;
    dStack_170 = dStack_280;
    local_168 = local_298;
    uStack_160 = 0x3ff0000000000000;
    dVar44 = dVar43 + dVar43;
    dVar51 = dVar17 + dVar17;
    dVar15 = dVar18 * (dVar18 + dVar18);
    dVar19 = (dVar18 + dVar18) * dVar50;
    local_258 = ((double)DAT_149934d80 - (dVar17 * dVar51 + dVar43 * dVar44)) * dVar48;
    dStack_250 = (dVar44 * dVar18 + dVar51 * dVar50) * dVar48;
    local_228 = (dVar51 * dVar43 + dVar19) * dVar16;
    dStack_210 = (dVar51 * dVar43 - dVar19) * dVar16;
    local_208 = (1.0 - (dVar15 + dVar43 * dVar44)) * 0.5;
    local_218 = (dVar44 * dVar50 + dVar18 * dVar51) * 0.5;
    local_248 = (dVar18 * dVar51 - dVar44 * dVar50) * 0.5;
    uStack_240 = 0;
    local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar17 * dVar51 + dVar15)) * dVar16;
    local_238._0_8_ = (dVar44 * dVar18 - dVar51 * dVar50) * dVar48;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8._8_8_ = dStack_2a0;
    local_1f8._0_8_ = local_2a8;
    local_1e8._8_8_ = 0x3ff0000000000000;
    local_1e8._0_8_ = local_2b8;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    pdVar13 = &local_278;
    iVar9 = FUN_14481fd10(pdVar13,&local_158);
    uVar11 = SUB84(pdVar13,0);
    dVar15 = local_268 * local_268 + local_278 * local_278;
    dVar44 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar35._0_8_ = dVar15 + dVar44;
    auVar35._8_8_ = dVar15 + dVar44;
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
    auVar31 = sqrtpd(auVar35,auVar35);
    auVar23 = divpd(auVar23,auVar31);
    auVar52._0_8_ = auVar23._0_8_ * local_268;
    auVar52._8_8_ = auVar23._8_8_ * dStack_260;
    dVar48 = (double)((ulonglong)(local_278 * auVar23._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
    dVar16 = (double)((ulonglong)(dStack_270 * auVar23._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
    auVar47 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar25);
  }
  auVar23 = _DAT_149934d80;
  dVar15 = (double)DAT_14cb545e0;
  dVar51 = DAT_14cb545e0._8_8_;
  auVar31 = minpd(_DAT_149934d80,_DAT_14cb545e0);
  dVar44 = (double)DAT_14cb545f0;
  auVar38 = minpd(ZEXT816(0x3ff0000000000000),_DAT_14cb545f0);
  auVar24._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  iVar9 = movmskpd(iVar9,auVar24);
  auVar32._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  uVar10 = movmskpd(uVar11,auVar32);
  dVar17 = auVar47._0_8_;
  dVar18 = auVar47._8_8_;
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    local_158 = dVar16 * DAT_14cb545b0 * -1.0 +
                dVar17 * DAT_14cb545a8 + dVar18 * DAT_14cb545a0 * 1.0 + dVar48 * DAT_14cb545b8;
    dStack_150 = dVar48 * DAT_14cb545b0 * 1.0 +
                 dVar18 * DAT_14cb545a8 + dVar17 * DAT_14cb545a0 * -1.0 + dVar16 * DAT_14cb545b8;
    local_148._0_8_ =
         dVar18 * DAT_14cb545b0 * 1.0 +
         ((DAT_14cb545a0 * dVar16 * 1.0 + DAT_14cb545b8 * dVar17) - dVar48 * DAT_14cb545a8);
    local_148._8_8_ =
         dVar17 * DAT_14cb545b0 * -1.0 +
         ((DAT_14cb545a0 * dVar48 * -1.0 + DAT_14cb545b8 * dVar18) - dVar16 * DAT_14cb545a8);
  }
  else {
    dVar20 = DAT_14cb545a8 + DAT_14cb545a8;
    dVar53 = DAT_14cb545b0 + DAT_14cb545b0;
    dVar19 = DAT_14cb545a0 * (DAT_14cb545a0 + DAT_14cb545a0);
    dVar21 = (DAT_14cb545a0 + DAT_14cb545a0) * DAT_14cb545b8;
    dStack_190 = (dVar53 * DAT_14cb545a8 - dVar21) * dVar44;
    local_198 = (dVar20 * DAT_14cb545b8 + DAT_14cb545a0 * dVar53) * dVar44;
    local_1a8 = (dVar53 * DAT_14cb545a8 + dVar21) * dVar51;
    local_1d8._8_8_ = (dVar20 * DAT_14cb545a0 + dVar53 * DAT_14cb545b8) * dVar15;
    local_1d8._0_8_ =
         ((double)DAT_149934d80 - (DAT_14cb545b0 * dVar53 + DAT_14cb545a8 * dVar20)) * dVar15;
    local_188 = (1.0 - (dVar19 + DAT_14cb545a8 * dVar20)) * dVar44;
    local_1c8 = (DAT_14cb545a0 * dVar53 - dVar20 * DAT_14cb545b8) * dVar15;
    uStack_1c0 = 0;
    local_1b8._8_8_ = (DAT_149934d80._8_8_ - (DAT_14cb545b0 * dVar53 + dVar19)) * dVar51;
    local_1b8._0_8_ = (dVar20 * DAT_14cb545a0 - dVar53 * DAT_14cb545b8) * dVar51;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = _DAT_14cb545c0;
    dStack_170 = dRam000000014cb545c8;
    local_168 = _DAT_14cb545d0;
    uStack_160 = 0x3ff0000000000000;
    dVar19 = dVar16 + dVar16;
    dVar53 = dVar17 + dVar17;
    dVar20 = dVar48 * (dVar48 + dVar48);
    local_258 = (double)DAT_149934d80 - (dVar17 * dVar53 + dVar16 * dVar19);
    local_208 = 1.0 - (dVar20 + dVar16 * dVar19);
    dStack_210 = (dVar48 + dVar48) * dVar18;
    dStack_250 = dVar19 * dVar48 + dVar53 * dVar18;
    local_228 = dVar53 * dVar16 + dStack_210;
    dStack_210 = dVar53 * dVar16 - dStack_210;
    local_218 = dVar48 * dVar53 + dVar19 * dVar18;
    local_248 = dVar48 * dVar53 - dVar19 * dVar18;
    uStack_240 = 0;
    local_238._8_8_ = DAT_149934d80._8_8_ - (dVar17 * dVar53 + dVar20);
    local_238._0_8_ = dVar19 * dVar48 - dVar53 * dVar18;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8._8_4_ = SUB84(dStack_f0,0);
    local_1f8._0_8_ = local_f8;
    local_1f8._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
    local_1e8._8_4_ = 0;
    local_1e8._0_8_ = local_e8;
    local_1e8._12_4_ = 0x3ff00000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar26._8_8_ = -(ulonglong)(0.0 <= dVar51);
    auVar26._0_8_ = -(ulonglong)(0.0 <= dVar15);
    auVar31 = blendvpd(_DAT_149936790,auVar23,auVar26);
    dVar15 = (double)(~-(ulonglong)(0.0 <= dVar44) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar44) & 0x3ff0000000000000);
    dVar44 = auVar31._0_8_;
    dStack_150 = dStack_150 * dVar44;
    local_158 = local_158 * dVar44;
    local_148._0_8_ = (double)local_148._0_8_ * dVar44;
    dVar44 = auVar31._8_8_;
    local_128 = local_128 * dVar44;
    local_130 = local_130 * dVar44;
    local_138 = dVar44 * local_138;
    local_108 = local_108 * dVar15;
    local_110 = local_110 * dVar15;
    local_118 = dVar15 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar15 = local_268 * local_268 + local_278 * local_278;
    dVar44 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar36._0_8_ = dVar15 + dVar44;
    auVar36._8_8_ = dVar15 + dVar44;
    auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar31 = sqrtpd(auVar36,auVar36);
    auVar23 = divpd(auVar23,auVar31);
    auVar55._0_8_ = auVar23._0_8_ * local_268;
    auVar55._8_8_ = auVar23._8_8_ * dStack_260;
    local_158 = (double)((ulonglong)(local_278 * auVar23._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    dStack_150 = (double)((ulonglong)(dStack_270 * auVar23._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar27);
  }
  local_1c8 = *(double *)(lVar1 + 0x1a8);
  local_1d8 = *(undefined1 (*) [16])(lVar1 + 0x198);
  local_340 = 0;
  local_348 = 0;
  FUN_144927ad4(lVar1,local_1d8,&local_158,0);
  FUN_1448c69c8(*(undefined8 *)(param_1 + 0x3c0));
  if ((local_d0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404ff11c FUN_1404ff11c body=6085 status=ok
// SIG undefined FUN_1404ff11c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404ff11c(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double extraout_XMM0_Qb;
  double dVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar49 [16];
  double dVar53;
  double dVar55;
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 auStack_388 [32];
  ulonglong local_368;
  undefined1 local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
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
  double *pdVar16;
  
  lVar1 = DAT_14cb544b0;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
    uVar14 = 0;
  }
  else if (iVar9 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar14 = 1;
  }
  if (*(int *)(lVar1 + uVar14 * 4) != 1) {
    if (*(char *)(param_1 + 0x450) == '\x01') {
      local_2c8 = DAT_14c8464e0;
      dStack_2c0 = DAT_14c8464e8;
      dVar17 = (double)(*(float *)(param_1 + 0x43c) + 90.0);
      auVar25._0_8_ = dVar17 / 360.0;
      auVar25._8_8_ = 0;
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar33 = roundpd(in_XMM1,ZEXT816(0),3);
      dVar46 = (dVar17 - auVar25._0_8_ * 360.0) * 0.008726646259971648;
      dVar50 = (0.0 - auVar25._8_8_ * 360.0) * 0.008726646259971648;
      dVar53 = (0.0 - auVar33._0_8_ * 360.0) * 0.008726646259971648;
      dVar55 = (0.0 - auVar33._8_8_ * 360.0) * 0.008726646259971648;
      local_2d8 = DAT_14c8464f0;
      uStack_2d0 = 0;
      dVar18 = sin(dVar46);
      dVar19 = sin(dVar50);
      dVar17 = sin(dVar53);
      sin(dVar55);
      dVar46 = cos(dVar46);
      dVar20 = cos(dVar50);
      dVar50 = cos(dVar53);
      cos(dVar55);
      local_2f8._8_8_ = dVar50;
      local_2f8._0_8_ = dVar50;
      local_338._8_8_ = dVar46;
      local_338._0_8_ = dVar46;
      local_328 = dVar18 * dVar19;
      dStack_320 = dVar18 * dVar20;
      local_2a8 = DAT_14c8464e0;
      dStack_2a0 = DAT_14c8464e8;
      dVar46 = (double)(*(float *)(param_1 + 0x440) + 180.0);
      auVar33._0_8_ = dVar46 / 360.0;
      auVar33._8_8_ = 0;
      auVar25 = roundpd(auVar33,auVar33,3);
      dVar46 = (dVar46 - auVar25._0_8_ * 360.0) * 0.008726646259971648;
      dVar50 = (0.0 - auVar25._8_8_ * 360.0) * 0.008726646259971648;
      local_2b8 = DAT_14c8464f0;
      uStack_2b0 = 0;
      local_318 = dVar17;
      dStack_310 = dVar17;
      local_358 = sin(dVar53);
      dStack_350 = extraout_XMM0_Qb;
      dVar21 = sin(dVar55);
      dVar17 = sin(dVar46);
      sin(dVar50);
      dVar22 = cos(dVar53);
      dVar55 = cos(dVar55);
      dVar23 = cos(dVar46);
      cos(dVar50);
      dVar58 = local_358 * dVar21;
      dVar59 = local_358 * dVar55;
      dVar50 = local_358 * dVar55;
      dVar53 = local_358 * dVar21;
      dVar46 = dVar17;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb54670) {
        local_358 = dVar17;
        dStack_350 = dVar17;
        FUN_144b3d300(&DAT_14cb54670);
        dVar32 = DAT_14c8464e8;
        dVar24 = DAT_14c8464e0;
        dVar17 = local_358;
        dVar46 = dStack_350;
        if (DAT_14cb54670 == -1) {
          local_348 = DAT_14c8464f0;
          dStack_340 = 0.0;
          local_1d8 = ZEXT816(0);
          local_1c8 = -90.0;
          FUN_144a7484c(local_1d8,&local_158);
          DAT_14cb54610 = local_158;
          dRam000000014cb54618 = dStack_150;
          _DAT_14cb54620 = (double)local_148._0_8_;
          DAT_14cb54628 = (double)local_148._8_8_;
          _DAT_14cb54630 = dVar24;
          dRam000000014cb54638 = dVar32;
          _DAT_14cb54640 = local_348;
          dRam000000014cb54648 = dStack_340;
          _DAT_14cb54650 = 0.5;
          dRam000000014cb54658 = 0.5;
          _DAT_14cb54660 = 0.5;
          dRam000000014cb54668 = 0.0;
          _Init_thread_footer(&DAT_14cb54670);
          dVar17 = local_358;
          dVar46 = dStack_350;
        }
      }
      dVar52 = dVar20 * (double)local_338._8_8_;
      uVar7 = local_2f8._0_8_;
      uVar8 = local_2f8._8_8_;
      dVar24 = dVar20 * (double)local_338._0_8_;
      dVar32 = dVar19 * (double)local_338._8_8_;
      dVar47 = dVar18 * dVar20 * local_318;
      dVar51 = dVar18 * dVar19 * dStack_310;
      dVar50 = dVar50 * dVar17;
      dVar53 = dVar53 * dVar46;
      dVar18 = dVar19 * (double)local_338._0_8_;
      dVar20 = local_328 * (double)local_2f8._0_8_;
      dVar44 = dStack_320 * (double)local_2f8._8_8_;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb546e0) {
        local_338._8_4_ = SUB84(dVar52,0);
        local_338._0_8_ = dVar19 * (double)local_338._0_8_;
        local_338._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        local_358 = dVar17;
        dStack_350 = dVar46;
        local_348 = dVar47;
        dStack_340 = dVar51;
        local_328 = local_328 * (double)local_2f8._0_8_;
        dStack_320 = dStack_320 * (double)local_2f8._8_8_;
        local_308 = dVar50;
        dStack_300 = dVar53;
        FUN_144b3d300(&DAT_14cb546e0);
        dVar45 = DAT_14c8464f0;
        dVar56 = DAT_14c8464e8;
        dVar19 = DAT_14c8464e0;
        dVar18 = (double)local_338._0_8_;
        dVar52 = (double)local_338._8_8_;
        dVar17 = local_358;
        dVar46 = dStack_350;
        dVar50 = local_308;
        dVar53 = dStack_300;
        dVar20 = local_328;
        dVar44 = dStack_320;
        dVar47 = local_348;
        dVar51 = dStack_340;
        if (DAT_14cb546e0 == -1) {
          local_1d8 = ZEXT816(0);
          local_1c8 = 0.0;
          FUN_144a7484c(local_1d8,&local_158);
          DAT_14cb54680 = local_158;
          DAT_14cb54688 = dStack_150;
          DAT_14cb54690 = (double)local_148._0_8_;
          DAT_14cb54698 = (double)local_148._8_8_;
          _DAT_14cb546a0 = dVar19;
          dRam000000014cb546a8 = dVar56;
          _DAT_14cb546b0 = dVar45;
          dRam000000014cb546b8 = 0.0;
          _DAT_14cb546c0 = 0.5;
          dRam000000014cb546c8 = 0.5;
          _DAT_14cb546d0 = 2.0;
          dRam000000014cb546d8 = 0.0;
          _Init_thread_footer(&DAT_14cb546e0);
          dVar18 = (double)local_338._0_8_;
          dVar52 = (double)local_338._8_8_;
          dVar17 = local_358;
          dVar46 = dStack_350;
          dVar50 = local_308;
          dVar53 = dStack_300;
          dVar20 = local_328;
          dVar44 = dStack_320;
          dVar47 = local_348;
          dVar51 = dStack_340;
        }
      }
      dVar52 = dVar52 * (double)uVar8;
      dVar24 = local_318 * dVar24;
      dVar32 = dStack_310 * dVar32;
      dVar17 = dVar17 * dVar55 * dVar22;
      dVar46 = dVar46 * dVar21 * dVar22;
      puVar15 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = DAT_14cb54750;
      dVar19 = dVar18 * (double)uVar7;
      dVar56 = -dVar50;
      dVar45 = -dVar44;
      dVar48 = -dVar47;
      if ((int)puVar15[0x44] < DAT_14cb54750) {
        puVar15 = &DAT_14cb54750;
        local_338._8_4_ = SUB84(dVar52,0);
        local_338._0_8_ = dVar18 * (double)uVar7;
        local_338._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
        local_358 = dVar17;
        dStack_350 = dVar46;
        local_348 = -dVar47;
        dStack_340 = dVar51;
        local_328 = dVar20;
        dStack_320 = -dVar44;
        local_318 = dVar24;
        dStack_310 = dVar32;
        local_308 = -dVar50;
        dStack_300 = dVar53;
        iVar9 = FUN_144b3d300();
        dVar6 = dRam000000014cb546d8;
        dVar5 = _DAT_14cb546d0;
        dVar4 = dRam000000014cb546c8;
        dVar3 = _DAT_14cb546c0;
        dVar47 = dRam000000014cb54668;
        dVar44 = _DAT_14cb54660;
        dVar18 = dRam000000014cb54658;
        dVar50 = _DAT_14cb54650;
        auVar25 = _DAT_149934d80;
        dVar19 = (double)local_338._0_8_;
        dVar52 = (double)local_338._8_8_;
        dVar24 = local_318;
        dVar32 = dStack_310;
        dVar17 = local_358;
        dVar46 = dStack_350;
        dVar56 = local_308;
        dVar53 = dStack_300;
        dVar20 = local_328;
        dVar45 = dStack_320;
        dVar48 = local_348;
        dVar51 = dStack_340;
        if (DAT_14cb54750 == -1) {
          _DAT_14cb54720 = 0.0;
          dRam000000014cb54728 = 0.0;
          _DAT_14cb54710 = 0.0;
          dRam000000014cb54718 = 0.0;
          auVar40._8_8_ = dRam000000014cb546c8;
          auVar40._0_8_ = _DAT_14cb546c0;
          local_2f8._8_8_ = dRam000000014cb54658;
          local_2f8._0_8_ = _DAT_14cb54650;
          auVar33 = minpd(local_2f8,auVar40);
          auVar2._8_8_ = dRam000000014cb546d8;
          auVar2._0_8_ = _DAT_14cb546d0;
          local_2e8._8_8_ = dRam000000014cb54668;
          local_2e8._0_8_ = _DAT_14cb54660;
          auVar40 = minpd(local_2e8,auVar2);
          auVar36._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
          auVar36._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
          iVar9 = movmskpd(iVar9,auVar36);
          auVar42._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
          auVar42._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
          uVar12 = movmskpd((int)puVar15,auVar42);
          if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
            DAT_14cb546f0 =
                 dRam000000014cb54618 * DAT_14cb54690 * -1.0 +
                 _DAT_14cb54620 * DAT_14cb54688 +
                 DAT_14cb54628 * DAT_14cb54680 * 1.0 + DAT_14cb54610 * DAT_14cb54698;
            DAT_14cb546f8 =
                 DAT_14cb54610 * DAT_14cb54690 * 1.0 +
                 DAT_14cb54628 * DAT_14cb54688 +
                 _DAT_14cb54620 * DAT_14cb54680 * -1.0 + dRam000000014cb54618 * DAT_14cb54698;
            DAT_14cb54708 =
                 _DAT_14cb54620 * DAT_14cb54690 * -1.0 +
                 ((DAT_14cb54680 * DAT_14cb54610 * -1.0 + DAT_14cb54628 * DAT_14cb54698) -
                 dRam000000014cb54618 * DAT_14cb54688);
            DAT_14cb54700 =
                 DAT_14cb54628 * DAT_14cb54690 * 1.0 +
                 ((DAT_14cb54680 * dRam000000014cb54618 * 1.0 + _DAT_14cb54620 * DAT_14cb54698) -
                 DAT_14cb54610 * DAT_14cb54688);
            dVar17 = _DAT_14cb54630 * _DAT_14cb546c0;
            dVar46 = dRam000000014cb54638 * dRam000000014cb546c8;
            dVar53 = _DAT_14cb54640 * _DAT_14cb546d0;
            dVar19 = dRam000000014cb54648 * dRam000000014cb546d8;
            dVar32 = dVar46 * DAT_14cb54680 - DAT_14cb54688 * dVar17;
            dVar52 = dVar53 * DAT_14cb54688 - DAT_14cb54690 * dVar46;
            dVar20 = dVar17 * DAT_14cb54690 - DAT_14cb54680 * dVar53;
            dVar24 = dVar19 * DAT_14cb54698 - DAT_14cb54698 * dVar19;
            dVar52 = dVar52 + dVar52;
            dVar20 = dVar20 + dVar20;
            dVar32 = dVar32 + dVar32;
            dVar24 = dVar24 + dVar24;
            _DAT_14cb54710 =
                 (dVar32 * DAT_14cb54688 - DAT_14cb54690 * dVar20) + DAT_14cb54698 * dVar52 + dVar17
                 + _DAT_14cb546a0;
            dRam000000014cb54718 =
                 (dVar52 * DAT_14cb54690 - dVar32 * DAT_14cb54680) + DAT_14cb54698 * dVar20 + dVar46
                 + dRam000000014cb546a8;
            _DAT_14cb54720 =
                 (dVar20 * DAT_14cb54680 - DAT_14cb54688 * dVar52) + DAT_14cb54698 * dVar32 + dVar53
                 + _DAT_14cb546b0;
            dRam000000014cb54728 =
                 (dVar24 * DAT_14cb54698 - dVar24 * DAT_14cb54698) + DAT_14cb54698 * dVar24 + dVar19
                 + dRam000000014cb546b8;
          }
          else {
            dVar19 = DAT_14cb54688 + DAT_14cb54688;
            dVar20 = DAT_14cb54690 + DAT_14cb54690;
            dVar17 = DAT_14cb54680 * (DAT_14cb54680 + DAT_14cb54680);
            local_188 = (1.0 - (dVar17 + DAT_14cb54688 * dVar19)) * _DAT_14cb546d0;
            dVar24 = (DAT_14cb54680 + DAT_14cb54680) * DAT_14cb54698;
            local_198 = (dVar19 * DAT_14cb54698 + DAT_14cb54680 * dVar20) * _DAT_14cb546d0;
            dVar46 = _DAT_14cb546d0 * _DAT_14cb54660;
            dVar17 = (1.0 - (DAT_14cb54690 * dVar20 + dVar17)) * dRam000000014cb546c8;
            dVar53 = (dVar19 * DAT_14cb54680 + dVar20 * DAT_14cb54698) * _DAT_14cb546c0;
            local_1a8 = (dVar20 * DAT_14cb54688 + dVar24) * dRam000000014cb546c8;
            dStack_190 = (dVar20 * DAT_14cb54688 - dVar24) * _DAT_14cb546d0;
            local_1c8 = (DAT_14cb54680 * dVar20 - dVar19 * DAT_14cb54698) * _DAT_14cb546c0;
            local_1d8._8_4_ = SUB84(dVar53,0);
            local_1d8._0_8_ =
                 (1.0 - (DAT_14cb54690 * dVar20 + DAT_14cb54688 * dVar19)) * _DAT_14cb546c0;
            local_1d8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar17,0);
            local_1b8._0_8_ =
                 (dVar19 * DAT_14cb54680 - dVar20 * DAT_14cb54698) * dRam000000014cb546c8;
            local_1b8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            uStack_1a0 = 0;
            uStack_180 = 0;
            local_178 = _DAT_14cb546a0;
            dStack_170 = dRam000000014cb546a8;
            local_168 = _DAT_14cb546b0;
            uStack_160 = 0x3ff0000000000000;
            dVar20 = dRam000000014cb54618 + dRam000000014cb54618;
            dVar24 = _DAT_14cb54620 + _DAT_14cb54620;
            dVar17 = DAT_14cb54610 * (DAT_14cb54610 + DAT_14cb54610);
            local_208 = (1.0 - (dVar17 + dRam000000014cb54618 * dVar20)) * _DAT_14cb54660;
            dVar32 = (DAT_14cb54610 + DAT_14cb54610) * DAT_14cb54628;
            local_218 = (dVar20 * DAT_14cb54628 + DAT_14cb54610 * dVar24) * _DAT_14cb54660;
            dStack_210 = (dVar24 * dRam000000014cb54618 - dVar32) * _DAT_14cb54660;
            dVar53 = _DAT_14cb546c0 * _DAT_14cb54650;
            dVar19 = dRam000000014cb546c8 * dRam000000014cb54658;
            local_258 = ((double)DAT_149934d80 -
                        (_DAT_14cb54620 * dVar24 + dRam000000014cb54618 * dVar20)) * _DAT_14cb54650;
            dVar17 = (DAT_149934d80._8_8_ - (_DAT_14cb54620 * dVar24 + dVar17)) *
                     dRam000000014cb54658;
            dStack_250 = (dVar20 * DAT_14cb54610 + dVar24 * DAT_14cb54628) * _DAT_14cb54650;
            local_228 = (dVar24 * dRam000000014cb54618 + dVar32) * dRam000000014cb54658;
            local_248 = (DAT_14cb54610 * dVar24 - dVar20 * DAT_14cb54628) * _DAT_14cb54650;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar17,0);
            local_238._0_8_ =
                 (dVar20 * DAT_14cb54610 - dVar24 * DAT_14cb54628) * dRam000000014cb54658;
            local_238._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            uStack_220 = 0;
            uStack_200 = 0;
            local_1f8._8_8_ = dRam000000014cb54638;
            local_1f8._0_8_ = _DAT_14cb54630;
            local_1e8._8_8_ = 0x3ff0000000000000;
            local_1e8._0_8_ = _DAT_14cb54640;
            FUN_1447fea8d(&local_158);
            FUN_144a1c686(&local_158,0x3e45798ee0000000);
            auVar30._8_8_ = -(ulonglong)(0.0 <= dVar19);
            auVar30._0_8_ = -(ulonglong)(0.0 <= dVar53);
            auVar33 = blendvpd(_DAT_149936790,auVar25,auVar30);
            uVar14 = -(ulonglong)(0.0 <= dVar46);
            dVar17 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
            dVar46 = auVar33._0_8_;
            dStack_150 = dStack_150 * dVar46;
            local_158 = local_158 * dVar46;
            local_148._0_8_ = (double)local_148._0_8_ * dVar46;
            dVar46 = auVar33._8_8_;
            local_128 = local_128 * dVar46;
            local_130 = local_130 * dVar46;
            local_138 = dVar46 * local_138;
            local_108 = local_108 * dVar17;
            local_110 = local_110 * dVar17;
            local_118 = dVar17 * local_118;
            FUN_14481fd10(&local_278,&local_158);
            dVar17 = local_268 * local_268 + local_278 * local_278;
            dVar46 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
            auVar39._0_8_ = dVar17 + dVar46;
            auVar39._8_8_ = dVar17 + dVar46;
            auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
            auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
            auVar33 = sqrtpd(auVar39,auVar39);
            auVar25 = divpd(auVar25,auVar33);
            auVar43._0_8_ = auVar25._0_8_ * local_268;
            auVar43._8_8_ = auVar25._8_8_ * dStack_260;
            DAT_14cb546f0 =
                 (double)((ulonglong)(local_278 * auVar25._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
            DAT_14cb546f8 =
                 (double)((ulonglong)(dStack_270 * auVar25._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
            _DAT_14cb54700 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar31);
            _DAT_14cb54710 = local_f8;
            dRam000000014cb54718 = dStack_f0;
            _DAT_14cb54720 = local_e8;
            dRam000000014cb54728 = 0.0;
          }
          unique0x100014bf = SUB84(dVar18 * dVar4,0);
          _DAT_14cb54730 = dVar50 * dVar3;
          unique0x100014c3 = (int)((ulonglong)(dVar18 * dVar4) >> 0x20);
          unique0x1000119b = SUB84(dVar47 * dVar6,0);
          _DAT_14cb54740 = dVar44 * dVar5;
          unique0x1000119f = (int)((ulonglong)(dVar47 * dVar6) >> 0x20);
          puVar15 = &DAT_14cb54750;
          iVar9 = _Init_thread_footer();
          dVar19 = (double)local_338._0_8_;
          dVar52 = (double)local_338._8_8_;
          dVar24 = local_318;
          dVar32 = dStack_310;
          dVar17 = local_358;
          dVar46 = dStack_350;
          dVar56 = local_308;
          dVar53 = dStack_300;
          dVar20 = local_328;
          dVar45 = dStack_320;
          dVar48 = local_348;
          dVar51 = dStack_340;
        }
      }
      auVar25 = _DAT_149934d80;
      dVar20 = dVar20 - dVar24;
      dVar45 = dVar45 - dVar32;
      dVar19 = dVar19 + dVar48;
      dVar52 = dVar52 + dVar51;
      dVar17 = dVar58 * dVar23 - dVar17;
      dVar46 = -(dVar59 * dVar23) - dVar46;
      dVar56 = dVar21 * dVar22 * dVar23 + dVar56;
      dVar53 = dVar55 * dVar22 * dVar23 + dVar53;
      dVar50 = (double)DAT_149931150;
      dVar18 = DAT_149931150._8_8_;
      auVar33 = minpd(_DAT_149931150,_DAT_149931ec0);
      lVar1 = *(longlong *)(param_1 + 0x3c8);
      auVar40 = minpd(ZEXT816(0x3fe0000000000000),ZEXT816(0x4000000000000000));
      auVar35._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar35._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      iVar9 = movmskpd(iVar9,auVar35);
      auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      uVar12 = movmskpd((int)puVar15,auVar41);
      if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar50 = dVar45 * dVar56 * -1.0 + dVar19 * dVar46 + dVar52 * dVar17 * 1.0 + dVar20 * dVar53;
        dVar18 = dVar20 * dVar56 * 1.0 + dVar52 * dVar46 + dVar19 * dVar17 * -1.0 + dVar45 * dVar53;
        auVar49._0_8_ =
             dVar52 * dVar56 * 1.0 + ((dVar17 * dVar45 * 1.0 + dVar19 * dVar53) - dVar46 * dVar20);
        auVar49._8_8_ =
             dVar19 * dVar56 * -1.0 + ((dVar17 * dVar20 * -1.0 + dVar52 * dVar53) - dVar46 * dVar45)
        ;
        dVar19 = local_2c8 + local_2c8;
        dVar20 = dStack_2c0 + dStack_2c0;
        dVar21 = local_2d8 * 2.0;
        dVar22 = dVar20 * dVar17 - dVar19 * dVar46;
        dVar55 = dVar21 * dVar46 - dVar20 * dVar56;
        dVar23 = dVar19 * dVar56 - dVar21 * dVar17;
        dVar55 = dVar55 + dVar55;
        dVar23 = dVar23 + dVar23;
        dVar22 = dVar22 + dVar22;
        local_f8 = local_2a8 + (dVar22 * dVar46 - dVar56 * dVar23) + dVar53 * dVar55 + dVar19;
        dStack_f0 = dStack_2a0 + (dVar55 * dVar56 - dVar22 * dVar17) + dVar53 * dVar23 + dVar20;
        local_e8 = local_2b8 + (dVar23 * dVar17 - dVar46 * dVar55) + dVar53 * dVar22 + dVar21;
        uVar13 = 0;
      }
      else {
        dVar58 = dVar46 + dVar46;
        dVar21 = dVar56 + dVar56;
        dVar23 = dVar17 * (dVar17 + dVar17);
        dVar22 = (double)DAT_149934d80 - (dVar56 * dVar21 + dVar46 * dVar58);
        dVar55 = DAT_149934d80._8_8_ - (dVar56 * dVar21 + dVar23);
        local_188 = 1.0 - (dVar23 + dVar46 * dVar58);
        dStack_190 = (dVar17 + dVar17) * dVar53;
        dVar59 = dVar58 * dVar17 + dVar21 * dVar53;
        local_1a8 = dVar21 * dVar46 + dStack_190;
        dVar23 = dVar58 * dVar17 - dVar21 * dVar53;
        dStack_190 = dVar21 * dVar46 - dStack_190;
        local_198 = dVar58 * dVar53 + dVar17 * dVar21;
        local_1c8 = dVar17 * dVar21 - dVar58 * dVar53;
        local_198 = local_198 + local_198;
        dStack_190 = dStack_190 + dStack_190;
        local_1a8 = local_1a8 + local_1a8;
        local_1d8._8_8_ = dVar59 + dVar59;
        local_1d8._0_8_ = dVar22 + dVar22;
        local_1c8 = local_1c8 + local_1c8;
        uStack_1c0 = 0;
        local_1b8._8_8_ = dVar55 + dVar55;
        local_1b8._0_8_ = dVar23 + dVar23;
        local_188 = local_188 + local_188;
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = local_2a8;
        dStack_170 = dStack_2a0;
        local_168 = local_2b8;
        uStack_160 = 0x3ff0000000000000;
        dVar46 = dVar45 + dVar45;
        dVar53 = dVar19 + dVar19;
        dVar17 = dVar20 * (dVar20 + dVar20);
        dVar21 = (dVar20 + dVar20) * dVar52;
        local_258 = ((double)DAT_149934d80 - (dVar19 * dVar53 + dVar45 * dVar46)) * dVar50;
        dStack_250 = (dVar46 * dVar20 + dVar53 * dVar52) * dVar50;
        local_228 = (dVar53 * dVar45 + dVar21) * dVar18;
        dStack_210 = (dVar53 * dVar45 - dVar21) * dVar18;
        local_208 = (1.0 - (dVar17 + dVar45 * dVar46)) * 0.5;
        local_218 = (dVar46 * dVar52 + dVar20 * dVar53) * 0.5;
        local_248 = (dVar20 * dVar53 - dVar46 * dVar52) * 0.5;
        uStack_240 = 0;
        local_238._8_8_ = (DAT_149934d80._8_8_ - (dVar19 * dVar53 + dVar17)) * dVar18;
        local_238._0_8_ = (dVar46 * dVar20 - dVar53 * dVar52) * dVar50;
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8._8_8_ = dStack_2c0;
        local_1f8._0_8_ = local_2c8;
        local_1e8._8_8_ = 0x3ff0000000000000;
        local_1e8._0_8_ = local_2d8;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        pdVar16 = &local_278;
        iVar9 = FUN_14481fd10(pdVar16,&local_158);
        uVar13 = SUB84(pdVar16,0);
        dVar17 = local_268 * local_268 + local_278 * local_278;
        dVar46 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar37._0_8_ = dVar17 + dVar46;
        auVar37._8_8_ = dVar17 + dVar46;
        auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar33 = sqrtpd(auVar37,auVar37);
        auVar25 = divpd(auVar25,auVar33);
        auVar54._0_8_ = auVar25._0_8_ * local_268;
        auVar54._8_8_ = auVar25._8_8_ * dStack_260;
        dVar50 = (double)((ulonglong)(local_278 * auVar25._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
        dVar18 = (double)((ulonglong)(dStack_270 * auVar25._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
        auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar27);
      }
      auVar25 = _DAT_149934d80;
      dVar17 = (double)DAT_14cb54730;
      dVar53 = DAT_14cb54730._8_8_;
      auVar33 = minpd(_DAT_149934d80,_DAT_14cb54730);
      dVar46 = (double)DAT_14cb54740;
      auVar40 = minpd(ZEXT816(0x3ff0000000000000),_DAT_14cb54740);
      auVar26._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      iVar9 = movmskpd(iVar9,auVar26);
      auVar34._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
      uVar12 = movmskpd(uVar13,auVar34);
      dVar19 = auVar49._0_8_;
      dVar20 = auVar49._8_8_;
      if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
        local_158 = dVar18 * DAT_14cb54700 * -1.0 +
                    dVar19 * DAT_14cb546f8 + dVar20 * DAT_14cb546f0 * 1.0 + dVar50 * DAT_14cb54708;
        dStack_150 = dVar50 * DAT_14cb54700 * 1.0 +
                     dVar20 * DAT_14cb546f8 + dVar19 * DAT_14cb546f0 * -1.0 + dVar18 * DAT_14cb54708
        ;
        local_148._0_8_ =
             dVar20 * DAT_14cb54700 * 1.0 +
             ((DAT_14cb546f0 * dVar18 * 1.0 + DAT_14cb54708 * dVar19) - dVar50 * DAT_14cb546f8);
        local_148._8_8_ =
             dVar19 * DAT_14cb54700 * -1.0 +
             ((DAT_14cb546f0 * dVar50 * -1.0 + DAT_14cb54708 * dVar20) - dVar18 * DAT_14cb546f8);
      }
      else {
        dVar22 = DAT_14cb546f8 + DAT_14cb546f8;
        dVar55 = DAT_14cb54700 + DAT_14cb54700;
        dVar21 = DAT_14cb546f0 * (DAT_14cb546f0 + DAT_14cb546f0);
        dVar23 = (DAT_14cb546f0 + DAT_14cb546f0) * DAT_14cb54708;
        dStack_190 = (dVar55 * DAT_14cb546f8 - dVar23) * dVar46;
        local_198 = (dVar22 * DAT_14cb54708 + DAT_14cb546f0 * dVar55) * dVar46;
        local_1a8 = (dVar55 * DAT_14cb546f8 + dVar23) * dVar53;
        local_1d8._8_8_ = (dVar22 * DAT_14cb546f0 + dVar55 * DAT_14cb54708) * dVar17;
        local_1d8._0_8_ =
             ((double)DAT_149934d80 - (DAT_14cb54700 * dVar55 + DAT_14cb546f8 * dVar22)) * dVar17;
        local_188 = (1.0 - (dVar21 + DAT_14cb546f8 * dVar22)) * dVar46;
        local_1c8 = (DAT_14cb546f0 * dVar55 - dVar22 * DAT_14cb54708) * dVar17;
        uStack_1c0 = 0;
        local_1b8._8_8_ = (DAT_149934d80._8_8_ - (DAT_14cb54700 * dVar55 + dVar21)) * dVar53;
        local_1b8._0_8_ = (dVar22 * DAT_14cb546f0 - dVar55 * DAT_14cb54708) * dVar53;
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = _DAT_14cb54710;
        dStack_170 = dRam000000014cb54718;
        local_168 = _DAT_14cb54720;
        uStack_160 = 0x3ff0000000000000;
        dVar21 = dVar18 + dVar18;
        dVar55 = dVar19 + dVar19;
        dVar22 = dVar50 * (dVar50 + dVar50);
        local_258 = (double)DAT_149934d80 - (dVar19 * dVar55 + dVar18 * dVar21);
        local_208 = 1.0 - (dVar22 + dVar18 * dVar21);
        dStack_210 = (dVar50 + dVar50) * dVar20;
        dStack_250 = dVar21 * dVar50 + dVar55 * dVar20;
        local_228 = dVar55 * dVar18 + dStack_210;
        dStack_210 = dVar55 * dVar18 - dStack_210;
        local_218 = dVar50 * dVar55 + dVar21 * dVar20;
        local_248 = dVar50 * dVar55 - dVar21 * dVar20;
        uStack_240 = 0;
        local_238._8_8_ = DAT_149934d80._8_8_ - (dVar19 * dVar55 + dVar22);
        local_238._0_8_ = dVar21 * dVar50 - dVar55 * dVar20;
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8._8_4_ = SUB84(dStack_f0,0);
        local_1f8._0_8_ = local_f8;
        local_1f8._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
        local_1e8._8_4_ = 0;
        local_1e8._0_8_ = local_e8;
        local_1e8._12_4_ = 0x3ff00000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar28._8_8_ = -(ulonglong)(0.0 <= dVar53);
        auVar28._0_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar33 = blendvpd(_DAT_149936790,auVar25,auVar28);
        dVar17 = (double)(~-(ulonglong)(0.0 <= dVar46) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar46) & 0x3ff0000000000000);
        dVar46 = auVar33._0_8_;
        dStack_150 = dStack_150 * dVar46;
        local_158 = local_158 * dVar46;
        local_148._0_8_ = (double)local_148._0_8_ * dVar46;
        dVar46 = auVar33._8_8_;
        local_128 = local_128 * dVar46;
        local_130 = local_130 * dVar46;
        local_138 = dVar46 * local_138;
        local_108 = local_108 * dVar17;
        local_110 = local_110 * dVar17;
        local_118 = dVar17 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar17 = local_268 * local_268 + local_278 * local_278;
        dVar46 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar38._0_8_ = dVar17 + dVar46;
        auVar38._8_8_ = dVar17 + dVar46;
        auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
        auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
        auVar33 = sqrtpd(auVar38,auVar38);
        auVar25 = divpd(auVar25,auVar33);
        auVar57._0_8_ = auVar25._0_8_ * local_268;
        auVar57._8_8_ = auVar25._8_8_ * dStack_260;
        local_158 = (double)((ulonglong)(local_278 * auVar25._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
        dStack_150 = (double)((ulonglong)(dStack_270 * auVar25._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
        local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar29);
      }
      local_1c8 = *(double *)(lVar1 + 0x1a8);
      local_1d8 = *(undefined1 (*) [16])(lVar1 + 0x198);
      local_360 = 0;
      local_368 = 0;
      FUN_144927ad4(lVar1,local_1d8,&local_158,0);
    }
    else {
      local_280 = (double)*(float *)(param_1 + 0x44c);
      local_288 = (double)*(float *)(param_1 + 0x448);
      local_290 = (double)*(float *)(param_1 + 0x444);
      local_368 = local_368 & 0xffffffffffffff00;
      FUN_14020f75c(*(undefined8 *)(param_1 + 0x3c8),&local_290,0,0);
    }
    FUN_1448c69c8(*(undefined8 *)(param_1 + 0x3c0));
  }
  if ((local_d0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405008e2 FUN_1405008e2 body=62 status=ok
// SIG undefined FUN_1405008e2(void)

void FUN_1405008e2(longlong *param_1)

{
  char cVar1;
  char cVar2;
  
  FUN_140500920();
  cVar1 = DAT_14c9a6220;
  cVar2 = (**(code **)(*param_1 + 0x708))(param_1);
  if (cVar1 == cVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140500919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8d8))(param_1);
  return;
}



// FUNCTION 140500920 FUN_140500920 body=260 status=ok
// SIG undefined FUN_140500920(void)

void FUN_140500920(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  
  if (*(char *)(param_1 + 0x178) == '\x01') {
    bVar3 = true;
    if ((ABS(*(double *)(param_1 + 0x530) - *(double *)(param_1 + 0x518)) <= 9.999999747378752e-05)
       && (ABS(*(double *)(param_1 + 0x538) - *(double *)(param_1 + 0x520)) <= 9.999999747378752e-05
          )) {
      bVar3 = 9.999999747378752e-05 <
              ABS(*(double *)(param_1 + 0x540) - *(double *)(param_1 + 0x528));
    }
    *(byte *)(*(longlong *)(param_1 + 0x430) + 0x5b5) =
         *(byte *)(*(longlong *)(param_1 + 0x430) + 0x5b5) & 0xfe | bVar3;
    if (DAT_14cacf914 == *(char *)(param_1 + 0x552)) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x5e0))();
      bVar5 = (cVar4 != *(char *)(param_1 + 0x552)) << 7;
    }
    else {
      bVar5 = 0x80;
    }
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4);
    *pbVar1 = *pbVar1 | bVar5;
    lVar2 = *(longlong *)(param_1 + 0x430);
    if ((*(byte *)(lVar2 + 0x5b4) & 0xa0) == 0) {
      bVar5 = (*(byte *)(lVar2 + 0x5b5) & 1) << 6;
    }
    else {
      bVar5 = 0x40;
    }
    *(byte *)(lVar2 + 0x5b4) = bVar5 | *(byte *)(lVar2 + 0x5b4);
  }
  FUN_140500a24(param_1);
  return;
}



// FUNCTION 140500a24 FUN_140500a24 body=208 status=ok
// SIG undefined FUN_140500a24(void)

void FUN_140500a24(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  
  plVar3 = param_1;
  if ((*(byte *)((longlong)param_1 + 99) & 0x40) == 0) {
    FUN_140500b04(param_1);
    DAT_14caca000 = *(byte *)(param_1 + 0x2b) >> 1 & 1;
    *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 0x40;
  }
  bVar2 = DAT_14cac9ff0;
  uVar5 = CONCAT71((int7)((ulonglong)plVar3 >> 8),*(byte *)(param_1 + 0xc)) & 0xffffffff;
  bVar4 = (byte)uVar5 >> 7;
  uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar4);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0x7f | DAT_14cac9ff0 << 7;
  lVar1 = param_1[0x2d];
  DAT_14cac9ff0 = bVar4;
  param_1[0x2d] = DAT_14cac9ff8;
  if ((DAT_14c950c29 == '\x01') && (DAT_14cac9ff8 != 0)) {
    DAT_14cac9ff8 = lVar1;
    FUN_1456cec3c();
    uVar5 = CONCAT71((int7)(uVar5 >> 8),DAT_14cac9ff0);
    bVar2 = *(byte *)(param_1 + 0xc) >> 7;
    lVar1 = DAT_14cac9ff8;
  }
  DAT_14cac9ff8 = lVar1;
  if ((byte)uVar5 != bVar2) {
    (**(code **)(*param_1 + 0x330))(param_1,uVar5 & 0xffffffffffffff01);
  }
  if (param_1[0x2d] == DAT_14cac9ff8) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140500ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x440))(param_1);
  return;
}



// FUNCTION 140500af4 FUN_140500af4 body=15 status=ok
// SIG undefined FUN_140500af4(void)

void FUN_140500af4(undefined8 param_1,undefined4 param_2)

{
  FUN_1406966b6(param_1,&DAT_14cac9d44,param_2);
  return;
}



// FUNCTION 140500b04 FUN_140500b04 body=458 status=ok
// SIG undefined FUN_140500b04(void)

void FUN_140500b04(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(byte *)(param_1 + 0x60) & 0x10) != 0) &&
       (plVar5 = *(longlong **)(param_1 + 0x1c8), plVar5 != (longlong *)0x0)) &&
      (cVar2 = (**(code **)(*plVar5 + 0x480))(plVar5,0),
      ((*(byte *)(param_1 + 0x158) & 2) == 0) == (bool)cVar2)) &&
     (plVar5 = *(longlong **)(param_1 + 0x1c8), plVar5 != (longlong *)0x0)) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      plVar5 = *(longlong **)(param_1 + 0x1c8);
      if (plVar5 == (longlong *)0x0) goto LAB_140500b23;
    }
    if ((DAT_14cac6e60 != 0) && (lVar3 = plVar5[2], lVar3 != 0)) {
      iVar1 = *(int *)(DAT_14cac6e60 + 0x38);
      if ((((iVar1 <= *(int *)(lVar3 + 0x38)) &&
           ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
             DAT_14cac6e60 + 0x30 &&
            (uVar4 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(param_1 + 0x158)) &
                     0xffffffffffffff02,
            (**(code **)(*plVar5 + 0x690))(plVar5,CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 1)),
            (*(byte *)(param_1 + 0x158) & 2) == 0)))) &&
          (lVar3 = FUN_1447210f0(param_1), lVar3 != 0)) &&
         ((*(longlong *)(lVar3 + 0x260) != 0 &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x260) + 0x210) != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_140500b23:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140500ce6 FUN_140500ce6 body=603 status=ok
// SIG undefined FUN_140500ce6(void)

void FUN_140500ce6(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x168);
  if ((lVar4 == param_2) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) goto LAB_140500e68;
  if (param_2 != 0) {
    lVar3 = param_2;
    if (param_2 == param_1) goto LAB_140500e68;
    do {
      lVar3 = *(longlong *)(lVar3 + 0x168);
      if (lVar3 == 0) break;
    } while (lVar3 != param_1);
    if (lVar3 != 0) goto LAB_140500e68;
  }
  if (lVar4 != 0) {
    local_38 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    local_30 = &local_38;
    FUN_14111a8f2(lVar4 + 0x1b8);
    FUN_1410b8c2c(*(longlong *)(param_1 + 0x168) + 0x330,param_1,0);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  *(longlong *)(param_1 + 0x168) = param_2;
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 < 0xffffffff00000000) {
    plVar7 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar7 = (longlong *)0x0;
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar2,8);
  }
  else {
    uVar8 = (uint)uVar2;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c998088)) {
      puVar5 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar5 = DAT_14c998080;
      }
      if ((*(uint *)(puVar5 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar8 & 0x1f) & 1) != 0) {
        lVar4 = DAT_14c998060 + (ulonglong)(uVar8 & 0x7fffffff) * 0x68;
        puVar6 = *(uint **)(lVar4 + 0x18);
        if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
          puVar6 = (uint *)(lVar4 + 8);
        }
        *puVar6 = *puVar6 | 0x100;
        *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x168);
  if (lVar4 != 0) {
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    iVar1 = *(int *)(lVar4 + 0x1c0);
    *(uint *)(lVar4 + 0x1c0) = iVar1 + 1U;
    if (*(uint *)(lVar4 + 0x1c4) < iVar1 + 1U) {
      FUN_140b51998((longlong *)(lVar4 + 0x1b8),iVar1);
    }
    *(longlong *)(*(longlong *)(lVar4 + 0x1b8) + (longlong)iVar1 * 8) = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    FUN_1410b8c2c(*(longlong *)(param_1 + 0x168) + 0x330,param_1,1);
  }
  if ((*(byte *)(param_1 + 100) & 1) != 0) {
    FUN_1433b7baa(param_1);
  }
  FUN_1405f18a8(param_1);
LAB_140500e68:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140500fb0 FUN_140500fb0 body=887 status=ok
// SIG undefined FUN_140500fb0(void)

/* WARNING: Removing unreachable block (ram,0x000140501308) */
/* WARNING: Removing unreachable block (ram,0x000140501314) */
/* WARNING: Removing unreachable block (ram,0x000140501318) */

void FUN_140500fb0(undefined8 param_1,byte *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  longlong local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1448a4298(local_f8);
  if (*param_2 == 1) {
    iVar5 = *(int *)(param_2 + 0x30);
    bVar9 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar5);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    iVar5 = (uint)bVar9 * *(int *)(param_2 + 0x44);
    bVar9 = 1;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar7 = uVar2 & 0x7fff;
    lVar12 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar11 = (ulonglong)(uVar7 * *(int *)(lVar12 + 0x80)) + *(longlong *)(lVar12 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar12 + 0x20);
      lVar11 = 0;
      if (iVar5 <= (int)uVar7) {
        do {
          uVar7 = uVar7 - iVar5;
          iVar5 = (*(int **)(lVar12 + 0x20))[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (iVar5 <= (int)uVar7);
      }
      lVar11 = (longlong)(int)uVar7 + *(longlong *)(*(longlong *)(lVar12 + 0x18) + lVar11 * 8);
    }
    iVar5 = (uint)(uVar2 >> 0xf) * *(int *)(lVar12 + 0x4c);
    bVar9 = *param_2;
  }
  if ((bVar9 & 1) == 0) {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar7 = uVar2 & 0x7fff;
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar2 < 0) {
      lVar12 = (ulonglong)(uVar7 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar4 + 0x20);
      lVar12 = 0;
      if (iVar13 <= (int)uVar7) {
        do {
          uVar7 = uVar7 - iVar13;
          iVar13 = (*(int **)(lVar4 + 0x20))[lVar12 + 1];
          lVar12 = lVar12 + 1;
        } while (iVar13 <= (int)uVar7);
      }
      lVar12 = (longlong)(int)uVar7 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar12 * 8);
    }
    uVar10 = (ulonglong)(uVar2 >> 0xf);
    param_2 = (byte *)(lVar4 + 0x4c);
  }
  else {
    iVar13 = *(int *)(param_2 + 0x30);
    uVar10 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar13);
    *(int *)(param_2 + 0x30) = iVar13 + 1;
    lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar13 * 8);
    param_2 = param_2 + 0x44;
  }
  iVar13 = *(int *)param_2;
  *(undefined1 *)(local_f0 + 0x139) = 1;
  if (local_f0 != 0) {
    uVar7 = *(uint *)(lVar11 + (longlong)iVar5 * 4);
    if (((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(local_f0 + 0x110))) &&
       (lVar11 = *(longlong *)(*(longlong *)(local_f0 + 0x108) + (ulonglong)uVar7 * 8), lVar11 != 0)
       ) {
      local_a8 = 0;
      local_38 = (undefined4)local_78;
      uStack_34 = local_78._4_4_;
      uStack_30 = (undefined4)uStack_70;
      uStack_2c = uStack_70._4_4_;
      local_b8 = (undefined4)local_68;
      uStack_24 = local_68._4_4_;
      local_28 = (undefined4)local_68;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = uStack_80;
      uStack_3c = uStack_7c;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = uStack_90;
      uStack_4c = uStack_8c;
      local_88 = (longlong *)0x0;
      local_98 = FUN_144618192;
      local_78 = &PTR_LAB_14be78360;
      uStack_70 = lVar11;
      local_68 = CONCAT44(uStack_b4,*(undefined4 *)(lVar12 + (longlong)iVar13 * uVar10 * 4));
      uStack_b4 = uStack_24;
      uStack_b0 = uStack_60;
      uStack_ac = uStack_5c;
      local_28 = local_b8;
      uStack_44 = 0;
      local_48 = 0;
      uStack_54 = 0;
      local_58 = 0;
      local_78 = &PTR_LAB_14be78360;
      local_88 = (longlong *)0x0;
      local_98 = FUN_144618192;
      local_a8 = 0;
      uStack_cc = uStack_7c;
      uStack_d0 = uStack_80;
      local_d8 = 0;
      uStack_dc = uStack_8c;
      uStack_e0 = uStack_90;
      local_e8 = 0;
      puVar6 = (undefined8 *)FUN_14001cc68(0x60,0x10);
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      puVar6[4] = local_98;
      puVar6[6] = 0;
      if (local_98 != (code *)0x0) {
        plVar8 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar8 = &local_78;
        }
        (**(code **)*plVar8)(plVar8,puVar6 + 6);
      }
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        puVar1 = *(undefined8 **)(local_f0 + 0x70);
        *(undefined8 **)(local_f0 + 0x70) = puVar6;
        UNLOCK();
        LOCK();
        *puVar1 = puVar6;
        UNLOCK();
      }
      if (local_98 != (code *)0x0) {
        plVar8 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar8 = &local_78;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140501328 FUN_140501328 body=85 status=ok
// SIG undefined FUN_140501328(void)

void FUN_140501328(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_2 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 14050137e FUN_14050137e body=62 status=ok
// SIG undefined FUN_14050137e(void)

void FUN_14050137e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x2c8))();
  FUN_1405013be(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1405013be FUN_1405013be body=425 status=ok
// SIG undefined FUN_1405013be(void)

/* WARNING: Removing unreachable block (ram,0x0001405014fc) */
/* WARNING: Removing unreachable block (ram,0x000140501506) */
/* WARNING: Removing unreachable block (ram,0x000140501518) */

ulonglong FUN_1405013be(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  local_40 = 0;
  uStack_3b = 0;
  local_38 = 0;
  local_34 = 0;
  local_60 = *param_5;
  plStack_58 = (longlong *)param_5[1];
  if (plStack_58 == (longlong *)0x0) {
    plStack_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
    UNLOCK();
  }
  local_50 = param_5[2];
  lVar5 = param_5[3];
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_5[3];
    }
  }
  uStack_48 = (undefined5)lVar5;
  uStack_43 = (undefined3)((ulonglong)lVar5 >> 0x28);
  lVar5 = param_5[4];
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_5[4];
    }
  }
  local_40 = (undefined5)lVar5;
  uStack_3b = (undefined3)((ulonglong)lVar5 >> 0x28);
  local_34 = *(undefined1 *)((longlong)param_5 + 0x2c);
  local_38 = *(undefined4 *)(param_5 + 5);
  uVar4 = FUN_14477b072(param_1,DAT_14cacc500);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_78);
  plVar3 = plStack_58;
  uVar6 = CONCAT71((int7)((ulonglong)param_5 >> 8),local_30);
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140501576 FUN_140501576 body=106 status=ok
// SIG undefined FUN_140501576(void)

undefined8 * FUN_140501576(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1405015e0 FUN_1405015e0 body=25 status=ok
// SIG undefined FUN_1405015e0(void)

undefined8 FUN_1405015e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1405015fa FUN_1405015fa body=1175 status=ok
// SIG undefined FUN_1405015fa(void)

void FUN_1405015fa(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140501635;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14050163a;
      goto LAB_14050165f;
    }
  }
  else {
LAB_140501635:
    if (iVar6 != 0x10) {
LAB_14050165f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14050163a;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14050163a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1405017c4;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143feea9b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1405017c4:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140501844;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140501844:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14b5a8d30;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b3190;
        local_40 = FUN_1400f751a;
        local_68[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"BinkProcess",&DAT_14cb9e704);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1405016fd;
    }
  }
LAB_14050163a:
  FUN_148b7397e();
LAB_1405016fd:
  FUN_143fe70f0();
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


