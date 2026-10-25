// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1469a8a04 FUN_1469a8a04 body=113 status=ok
// SIG undefined FUN_1469a8a04(void)

longlong FUN_1469a8a04(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a8a76 FUN_1469a8a76 body=189 status=ok
// SIG undefined FUN_1469a8a76(void)

longlong * FUN_1469a8a76(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_208 [40];
  undefined1 local_1e0 [440];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  FUN_140a504fe(local_1e0);
  FUN_140a54a0c(lVar1,local_1e0);
  FUN_1415b5e16(local_1e0);
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  bVar4 = 0x20;
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a8b34 FUN_1469a8b34 body=437 status=ok
// SIG undefined FUN_1469a8b34(void)

void FUN_1469a8b34(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0 < *(int *)(param_1 + 0x68)) && (*(longlong *)(param_1 + 0xd8) == 0)) {
    FUN_1469a5c0c(param_1,&local_30,param_2);
    if (local_30 == 0) {
      uVar7 = (ulonglong)*(int *)(param_1 + 0x68);
      if (0 < (longlong)uVar7) {
        lVar3 = uVar7 << 4;
        do {
          lVar3 = lVar3 + -0x10;
          if ((longlong)uVar7 <= (longlong)*(int *)(param_1 + 0x68)) {
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x60) + lVar3) + 0x38))();
          }
          bVar2 = 1 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar2);
      }
    }
    else {
      lVar3 = (longlong)*(int *)(param_1 + 0x68);
      lVar4 = -1;
      if (lVar3 != 0) {
        lVar8 = 0;
        lVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar8) == local_30) {
            lVar4 = lVar9 >> 0x20;
            break;
          }
          lVar9 = lVar9 + 0x100000000;
          lVar8 = lVar8 + 0x10;
        } while (lVar3 << 4 != lVar8);
      }
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar4 * 0x10);
      do {
        plVar6 = plVar5;
        plVar5 = plVar6 + 2;
        lVar4 = lVar4 + 1;
        if (lVar3 <= lVar4) goto LAB_1469a8c1a;
        lVar8 = *plVar5;
      } while (*(char *)(lVar8 + 0x41) != '\x01');
      plVar5 = (longlong *)plVar6[3];
      local_40 = lVar8;
      local_38 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        FUN_1469a8986(param_1,&local_40);
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        FUN_1469a8986(param_1);
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
      }
    }
LAB_1469a8c1a:
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469a8cea FUN_1469a8cea body=100 status=ok
// SIG undefined FUN_1469a8cea(void)

longlong FUN_1469a8cea(longlong param_1)

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
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0xbf800000bf800000;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return param_1;
}



// FUNCTION 1469a8d4e FUN_1469a8d4e body=172 status=ok
// SIG undefined FUN_1469a8d4e(void)

longlong FUN_1469a8d4e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar1 = local_30;
  local_28 = 2;
  *local_30 = &PTR_LAB_149efd4c0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149efd450;
  puVar1[3] = FUN_1469a5657;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a8dfc FUN_1469a8dfc body=183 status=ok
// SIG undefined FUN_1469a8dfc(void)

longlong FUN_1469a8dfc(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_38 = &PTR_LAB_149efd5a0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149efd530;
  puVar1[3] = param_2;
  puVar1[4] = FUN_1469a8b34;
  FUN_144a450dc(param_1 + 0x1c8,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a8eb4 FUN_1469a8eb4 body=84 status=ok
// SIG undefined FUN_1469a8eb4(void)

undefined8 FUN_1469a8eb4(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1469a8f08 FUN_1469a8f08 body=115 status=ok
// SIG undefined FUN_1469a8f08(void)

longlong * FUN_1469a8f08(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1469b3d86(*param_1,param_3);
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



// FUNCTION 1469a8f7c FUN_1469a8f7c body=88 status=ok
// SIG undefined FUN_1469a8f7c(void)

void FUN_1469a8f7c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
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



// FUNCTION 1469a8fd4 FUN_1469a8fd4 body=157 status=ok
// SIG undefined FUN_1469a8fd4(void)

ulonglong FUN_1469a8fd4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    param_1 = (longlong *)*param_1;
    plVar9 = param_1;
    do {
      lVar3 = *plVar9;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) {
LAB_1469a9042:
        lVar8 = 0;
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_1469a9042;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar10 = iVar7 == iVar6;
          if (bVar10) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar10);
        lVar8 = *param_2;
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
      if (lVar3 == lVar8) {
        return (ulonglong)((longlong)plVar9 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != param_1 + (longlong)(int)lVar5 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 1469a9072 FUN_1469a9072 body=930 status=ok
// SIG undefined FUN_1469a9072(void)

longlong FUN_1469a9072(longlong param_1,longlong *param_2,undefined8 param_3,float *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_238 [32];
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  longlong local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [288];
  undefined1 *local_98;
  uint local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  iVar3 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar3 != 0) {
    iVar7 = 1;
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar9);
      if ((lVar10 != 0) && (lVar10 == *param_2)) {
        if (iVar7 < iVar3 && iVar7 != 0) {
          lVar11 = (longlong)iVar7;
          lVar9 = lVar11 << 4;
          lVar10 = 0;
          goto LAB_1469a914c;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 << 4 != lVar9);
  }
  lVar10 = 0;
  goto LAB_1469a90ea;
LAB_1469a914c:
  do {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x60) + lVar9);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_1e8);
    plVar4 = local_1e0;
    if (local_1e8 != 0) {
      if (local_1e0 == (longlong *)0x0) {
        local_1f8 = local_1e8;
        local_1f0 = (longlong *)0x0;
        FUN_140d95bee(param_3,local_1c0,&local_1f8);
      }
      else {
        LOCK();
        *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
        UNLOCK();
        local_1f8 = local_1e8;
        local_1f0 = local_1e0;
        LOCK();
        *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
        UNLOCK();
        FUN_140d95bee(param_3,local_1c0,&local_1f8);
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
      plVar4 = local_1e0;
      uVar6 = DAT_14c98e618;
      uVar5 = DAT_14c96b238;
      if ((int)local_90 < 1) {
        if (local_1e0 == (longlong *)0x0) {
          local_208 = local_1e8;
          local_200 = (longlong *)0x0;
          FUN_1469a9416(DAT_14c98e618,&local_208,local_1c0,DAT_14c96b238);
        }
        else {
          LOCK();
          *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
          UNLOCK();
          local_208 = local_1e8;
          local_200 = local_1e0;
          LOCK();
          *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
          UNLOCK();
          FUN_1469a9416(uVar6,&local_208,local_1c0,uVar5);
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
        if (0 < (int)local_90) goto LAB_1469a91e7;
      }
      else {
LAB_1469a91e7:
        puVar8 = local_98;
        if (local_98 == (undefined1 *)0x0) {
          puVar8 = local_1b8;
        }
        if (lVar10 == 0) {
          fVar12 = *(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x40);
          fVar13 = fVar12 * 0.0;
          local_1d8 = CONCAT44(*(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x38) + fVar13,
                               fVar13 + *(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x3c));
          local_1c8 = CONCAT44(*(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x44) * fVar12,
                               fVar13);
          local_1d0 = CONCAT44(fVar13,fVar12 * *(float *)(puVar8 + (ulonglong)local_90 * 0x48 +
                                                                   -0x48));
          FUN_144b01024(&local_1d8,&local_218);
          *param_4 = local_218;
          param_4[1] = fStack_214;
          param_4[2] = fStack_210;
          param_4[3] = fStack_20c;
          lVar10 = 1;
        }
        else {
          fVar12 = *(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x40);
          fVar13 = fVar12 * 0.0;
          local_1d8 = CONCAT44(*(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x38) + fVar13,
                               fVar13 + *(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x3c));
          local_1c8 = CONCAT44(*(float *)(puVar8 + (ulonglong)local_90 * 0x48 + -0x44) * fVar12,
                               fVar13);
          local_1d0 = CONCAT44(fVar13,fVar12 * *(float *)(puVar8 + (ulonglong)local_90 * 0x48 +
                                                                   -0x48));
          FUN_144b01024(&local_1d8,&local_218);
          fVar12 = param_4[3];
          if (param_4[3] <= fStack_20c) {
            fVar12 = fStack_20c;
          }
          fVar13 = param_4[2];
          if (param_4[2] <= fStack_210) {
            fVar13 = fStack_210;
          }
          fVar15 = param_4[1];
          if (fStack_214 <= param_4[1]) {
            fVar15 = fStack_214;
          }
          fVar14 = *param_4;
          if (local_218 <= *param_4) {
            fVar14 = local_218;
          }
          *param_4 = fVar14;
          param_4[1] = fVar15;
          param_4[2] = fVar13;
          param_4[3] = fVar12;
        }
      }
      FUN_1447fa21a(local_1c0);
    }
    plVar4 = local_1e0;
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar11 = lVar11 + 1;
    lVar9 = lVar9 + 0x10;
  } while (lVar11 < *(int *)(param_1 + 0x68));
LAB_1469a90ea:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1469a9416 FUN_1469a9416 body=211 status=ok
// SIG undefined FUN_1469a9416(void)

void FUN_1469a9416(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1407c4db4(param_1 + 0x1b0,&local_38,param_3,param_4);
  if (cVar4 == '\0') {
    local_48 = *param_2;
    local_40 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_1407c4db4(param_1 + 0x1c0,&local_48,param_3,param_4);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a94ea FUN_1469a94ea body=117 status=ok
// SIG undefined FUN_1469a94ea(void)

int FUN_1469a94ea(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x68);
  iVar5 = 0;
  if ((longlong)iVar3 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar6) == *param_2) {
        if (iVar5 != 1) {
          iVar5 = CONCAT31((int3)((uint)-iVar5 >> 8),-iVar5 < iVar3 + -1);
          goto LAB_1469a951f;
        }
        break;
      }
      iVar5 = iVar5 + -1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar3 << 4 != lVar6);
    iVar5 = 0;
  }
LAB_1469a951f:
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
  return iVar5;
}



// FUNCTION 1469a956e FUN_1469a956e body=158 status=ok
// SIG undefined FUN_1469a956e(void)

ulonglong FUN_1469a956e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_2 + 8) == '\0') ||
     (uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),3),
     *(char *)((longlong)param_1 + 0x1b) != '\0')) {
    local_30 = *(undefined8 *)(param_2 + 0x20);
    local_28 = *(undefined8 *)(param_2 + 0x28);
    local_20 = *(longlong **)(param_2 + 0x30);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    uVar4 = (**(code **)(*param_1 + 0x40))(param_1,&local_30);
    plVar3 = local_20;
    uVar5 = (ulonglong)uVar4;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a96c8 FUN_1469a96c8 body=891 status=ok
// SIG undefined FUN_1469a96c8(void)

undefined8 FUN_1469a96c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined1 auStack_8f8 [40];
  undefined2 *local_8d0;
  int local_8c8;
  undefined2 *local_8c0;
  int local_8b8;
  longlong *local_8b0;
  int local_8a8;
  uint uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  longlong *local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined2 *local_868;
  undefined2 *local_860;
  ulonglong *local_858;
  undefined1 local_850;
  undefined2 local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  local_868 = local_848;
  local_850 = 0;
  local_858 = &local_48;
  local_860 = local_868;
  FUN_140212e80(&local_868,L"bTabNavigation: %u\n",*(undefined1 *)(param_1 + 0x18));
  FUN_140212e80(&local_868,L"bKeyNavigation: %u\n",*(undefined1 *)(param_1 + 0x19));
  FUN_140212e80(&local_868,L"bAnalogNavigation: %u\n",*(undefined1 *)(param_1 + 0x1a));
  FUN_140212e80(&local_868,L"AnalogNavigationHorizontalThreshold: %f\n",
                (double)*(float *)(param_1 + 0x1c));
  FUN_140212e80(&local_868,L"AnalogNavigationVerticalThreshold: %f\n",
                (double)*(float *)(param_1 + 0x20));
  FUN_14171cb22(param_1 + 0x28,&local_8b0);
  plVar12 = local_8b0;
  if (local_8a8 == 0) {
    plVar12 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140212e80(&local_868,L"AnalogHorizontalKey: %s\n",plVar12);
  if (local_8b0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14171cb22(param_1 + 0x40,&local_8b0);
  plVar12 = local_8b0;
  if (local_8a8 == 0) {
    plVar12 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140212e80(&local_868,L"AnalogVerticalKey: %s\n",plVar12);
  if (local_8b0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140212e80(&local_868,L"KeyEventRules: \n");
  plVar12 = (longlong *)(param_1 + 0x58);
  lVar1 = param_1 + 0x68;
  local_888 = 0x100000000;
  local_878 = (longlong *)&DAT_ffffffff;
  uStack_870 = 0;
  uStack_880 = lVar1;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_888);
    iVar11 = *(int *)(param_1 + 0x80);
  }
  uStack_890 = CONCAT44(uStack_86c,uStack_870);
  local_898 = local_878;
  plVar6 = local_898;
  local_8a8 = (int)local_888;
  uStack_8a4 = local_888._4_4_;
  uStack_8a0 = (undefined4)uStack_880;
  uStack_89c = uStack_880._4_4_;
  local_898._4_4_ = (int)((ulonglong)local_878 >> 0x20);
  iVar7 = local_898._4_4_;
  local_8b0 = plVar12;
  if ((local_898._4_4_ != iVar11) || (local_898 = plVar6, uStack_880 != lVar1)) {
    do {
      local_898 = plVar6;
      lVar5 = *local_8b0;
      lVar8 = (longlong)iVar7;
      local_888 = *(undefined8 *)(lVar5 + lVar8 * 0x28);
      uStack_880 = *(longlong *)(lVar5 + 8 + lVar8 * 0x28);
      local_878 = *(longlong **)(lVar5 + 0x10 + lVar8 * 0x28);
      if (local_878 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_878 + 1) = (int)local_878[1] + 1;
        UNLOCK();
      }
      uVar4 = *(undefined1 *)(lVar5 + lVar8 * 0x28 + 0x18);
      uStack_870 = CONCAT31(uStack_870._1_3_,uVar4);
      uVar9 = FUN_14692eee9();
      FUN_1414aa4be(uVar9,&local_8d0,uVar4);
      FUN_1400021e4(&local_8d0,&local_8c0);
      puVar10 = &DAT_149dfb77a;
      if (local_8b8 != 0) {
        puVar10 = local_8c0;
      }
      FUN_14171cb22(&local_888,&local_8d0);
      puVar13 = &DAT_149dfb77a;
      if (local_8c8 != 0) {
        puVar13 = local_8d0;
      }
      FUN_140212e80(&local_868,L"Pair: %s -> %s\n",puVar13,puVar10);
      if (local_8d0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_8c0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar6 = local_878;
      if (local_878 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_878 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_878)(local_878);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      local_898 = (longlong *)CONCAT44(local_898._4_4_,(uint)local_898 & ~uStack_8a4);
      FUN_1449c0562(&local_8a8);
      iVar7 = local_898._4_4_;
      plVar6 = local_898;
    } while (local_8b0 != plVar12 ||
             (CONCAT44(uStack_89c,uStack_8a0) != lVar1 || local_898._4_4_ != iVar11));
  }
  *local_860 = 0;
  FUN_140056680(param_2,local_868);
  FUN_144724f3c(&local_868);
  if ((local_48 ^ (ulonglong)auStack_8f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469a9a44 FUN_1469a9a44 body=124 status=ok
// SIG undefined FUN_1469a9a44(void)

void FUN_1469a9a44(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(longlong *)(param_1 + 0x28) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001469a9ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469a9ac0 FUN_1469a9ac0 body=153 status=ok
// SIG undefined FUN_1469a9ac0(void)

void FUN_1469a9ac0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  FUN_140ecb6b4(param_1 + 0x48,param_2 + 1);
  puVar5 = param_2 + 3;
  puVar6 = (undefined8 *)(param_1 + 0x58);
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar7 = FUN_145787b36();
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  iVar1 = *(int *)((longlong)param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 6);
  iVar3 = *(int *)((longlong)param_2 + 0x2c);
  *(float *)(param_1 + 0x510) = (float)*(int *)(param_2 + 5);
  *(float *)(param_1 + 0x514) = (float)iVar3;
  *(float *)(param_1 + 0x518) = (float)iVar2;
  *(float *)(param_1 + 0x51c) = (float)iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001469a9b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x1b0))(*(longlong **)(param_1 + 0x20),param_2);
  return;
}



// FUNCTION 1469a9b5e FUN_1469a9b5e body=584 status=ok
// SIG undefined FUN_1469a9b5e(void)

undefined4 FUN_1469a9b5e(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    plVar7 = *(longlong **)(param_1 + 0x28);
    if (plVar7 == (longlong *)0x0) goto LAB_1469a9bbc;
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_1469a9bb2:
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469a9bbc;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar7;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    plVar7 = *(longlong **)(param_1 + 0x28);
    if (plVar4 != plVar7) {
      *(longlong **)(param_1 + 0x28) = plVar4;
      if (plVar7 == (longlong *)0x0) goto LAB_1469a9bbc;
      goto LAB_1469a9bb2;
    }
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1469a9bbc;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1469a9bbc:
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
  if (param_3 == '\0' && (char)uVar5 == '\0') {
    local_58 = L"UnsupportedVideoCardErrorTitle";
    local_50 = 0x1e;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"SlateD3DRenderer";
    local_50 = 0x10;
    FUN_1446e940c(local_70,&local_58);
    FUN_140208bae(local_68,local_70,local_6c,L"Unsupported Graphics Card");
    puVar6 = (undefined8 *)FUN_1447a1f4a(local_68);
    puVar9 = &DAT_149dfb77a;
    puVar8 = &DAT_149dfb77a;
    if (*(int *)(puVar6 + 1) != 0) {
      puVar8 = (undefined2 *)*puVar6;
    }
    local_58 = L"ProblemWithGraphicsCard";
    local_50 = 0x17;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"SlateD3DRenderer";
    local_50 = 0x10;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,
                  L"There is a problem with your graphics card. Please ensure your card meets the minimum system requirements and that you have the latest drivers installed."
                 );
    puVar6 = (undefined8 *)FUN_1447a1f4a(&local_58);
    if (*(int *)(puVar6 + 1) != 0) {
      puVar9 = (undefined2 *)*puVar6;
    }
    FUN_14682f732(0,puVar9,puVar8);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a9da8 FUN_1469a9da8 body=16 status=ok
// SIG undefined FUN_1469a9da8(void)

void FUN_1469a9da8(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001469a9db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x3d0))();
  return;
}



// FUNCTION 1469a9db8 FUN_1469a9db8 body=119 status=ok
// SIG undefined FUN_1469a9db8(void)

void FUN_1469a9db8(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x1d0) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(param_1 + 0x1c8);
    plVar4 = (longlong *)(*(undefined8 **)(param_1 + 0x1c8))[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      goto LAB_1469a9de3;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1469a9de3:
  FUN_141653418(uVar3,10,(int)*param_2,(int)param_2[1]);
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
                    /* WARNING: Could not recover jumptable at 0x0001469a9e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469a9e30 FUN_1469a9e30 body=35 status=ok
// SIG undefined FUN_1469a9e30(void)

void FUN_1469a9e30(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  if ((DAT_14c968088 != 0) &&
     (plVar1 = *(longlong **)(DAT_14c968088 + 8), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001469a9e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1469a9e54 FUN_1469a9e54 body=90 status=ok
// SIG undefined FUN_1469a9e54(void)

void FUN_1469a9e54(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x310);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((lVar3 != 0) && ((param_3 != '\0' || (*(longlong *)(lVar3 + 0x20) != 0)))) {
        (*(code *)*param_2)(param_2[1]);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 1469a9eae FUN_1469a9eae body=126 status=ok
// SIG undefined FUN_1469a9eae(void)

undefined4 FUN_1469a9eae(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405df8b8(param_1,&local_30,*(undefined4 *)(param_2 + 0xc));
  uVar3 = (**(code **)(*local_30 + 0x38))(local_30,param_2);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469a9f40 FUN_1469a9f40 body=67 status=ok
// SIG undefined FUN_1469a9f40(void)

void FUN_1469a9f40(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1405535de(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14113c126(param_1);
    return;
  }
  FUN_1469b5f16(param_1);
  FUN_1405535de(param_1,0);
  return;
}



// FUNCTION 1469a9f84 FUN_1469a9f84 body=524 status=ok
// SIG undefined FUN_1469a9f84(void)

undefined8 *
FUN_1469a9f84(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  longlong *local_190;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(int *)(param_4 + 0x130) < 1) {
    local_198 = DAT_14c96b238;
    local_70 = 0;
    local_68 = 0x400000000;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_1a8 = *param_3;
    local_1a0 = param_3[1];
    if (local_1a0 != 0) {
      LOCK();
      *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
      UNLOCK();
    }
    cVar3 = FUN_1407c4cd2(param_1,&local_1a8,&local_198);
    if (cVar3 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      local_1d0 = param_9;
      local_1e0 = param_7;
      local_1e8 = param_6;
      local_1c8 = 0;
      FUN_1469a6738(param_1 + 0x200,&local_1b8,&local_198,param_5);
      *param_2 = local_1b8;
      param_2[1] = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar2 = (int *)((longlong)local_1b0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_1b0 + 0x10))(local_1b0);
            }
          }
        }
      }
    }
    FUN_1447fa21a(&local_198);
  }
  else {
    local_1d0 = param_9;
    local_1e0 = param_7;
    local_1e8 = param_6;
    local_1c8 = 0;
    FUN_1469a6738(param_1 + 0x200,&local_198,param_4,param_5);
    *param_2 = CONCAT71(uStack_197,local_198);
    param_2[1] = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_190 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_190 + 0x10))(local_190);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aa192 FUN_1469aa192 body=138 status=ok
// SIG undefined FUN_1469aa192(void)

undefined4 FUN_1469aa192(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
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
  uVar4 = FUN_1469a94ea(param_1 + 0x200,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aa21e FUN_1469aa21e body=74 status=ok
// SIG undefined FUN_1469aa21e(void)

undefined8 * FUN_1469aa21e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x238);
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
      *param_2 = *(undefined8 *)(param_1 + 0x230);
    }
  }
  return param_2;
}



// FUNCTION 1469aa268 FUN_1469aa268 body=282 status=ok
// SIG undefined FUN_1469aa268(void)

void FUN_1469aa268(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong *local_190;
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [296];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_178[0] = DAT_14c96b238;
  local_50 = 0;
  local_48 = 0x400000000;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_188 = *param_2;
  local_180 = param_2[1];
  if (local_180 != 0) {
    LOCK();
    *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
    UNLOCK();
  }
  cVar3 = FUN_1407c4cd2(param_1,&local_188,local_178);
  if (cVar3 != '\0') {
    FUN_1469a5c0c(param_1 + 0x200,&local_198,local_178);
    if (local_198 != 0) {
      FUN_1469a8986(param_1 + 0x200,&local_198);
    }
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)local_190 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
  }
  FUN_1447fa21a(local_178);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aa384 FUN_1469aa384 body=74 status=ok
// SIG undefined FUN_1469aa384(void)

undefined8 * FUN_1469aa384(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x3b8);
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
      *param_2 = *(undefined8 *)(param_1 + 0x3b0);
    }
  }
  return param_2;
}



// FUNCTION 1469aa3ce FUN_1469aa3ce body=133 status=ok
// SIG undefined FUN_1469aa3ce(void)

void FUN_1469aa3ce(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x728);
  *(undefined8 *)(param_1 + 0x720) = uVar3;
  *(longlong *)(param_1 + 0x728) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001469aa447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469aa454 FUN_1469aa454 body=148 status=ok
// SIG undefined FUN_1469aa454(void)

void FUN_1469aa454(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_198 [40];
  undefined1 local_170 [296];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170[0] = DAT_14c96b238;
  local_48 = 0;
  local_40 = 0x400000000;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  (**(code **)(*param_1 + 0x150))(0,param_2,local_170,param_3);
  FUN_1447fa21a(local_170);
  if ((local_10 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aa534 FUN_1469aa534 body=273 status=ok
// SIG undefined FUN_1469aa534(void)

void FUN_1469aa534(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_258 [296];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_f8[0] = 1;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  uVar1 = FUN_146948ce8(local_f8,2,1);
  local_258[0] = DAT_14c96b238;
  local_130 = 0;
  local_128 = 0x400000000;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_268 = 0;
  local_260 = 0;
  FUN_1402c1d72(param_1,local_258,uVar1,0);
  FUN_1447fa21a(local_258);
  FUN_14493db24(local_f8);
  FUN_1413f6830(param_1);
  if ((local_40 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aa654 FUN_1469aa654 body=169 status=ok
// SIG undefined FUN_1469aa654(void)

undefined8 * FUN_1469aa654(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x458);
  *(uint *)(param_1 + 0x458) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x45c) < iVar1 + 1U) {
    FUN_1469b605a(param_1 + 0x450,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x450);
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = 0;
  FUN_1469b60e0(lVar3 + lVar4,param_3);
  lVar3 = (longlong)(*(int *)(param_1 + 0x458) + -1) * 0x10;
  if ((*(int *)(*(longlong *)(param_1 + 0x450) + 8 + lVar3) == 0) ||
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x450) + lVar3), plVar2 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  }
  return param_2;
}



// FUNCTION 1469aa6fe FUN_1469aa6fe body=176 status=ok
// SIG undefined FUN_1469aa6fe(void)

void FUN_1469aa6fe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x458)) {
    plVar1 = (longlong *)(param_1 + 0x450);
    iVar4 = 0;
    do {
      if ((*(int *)(*plVar1 + 8 + (longlong)iVar4 * 0x10) == 0) ||
         (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar4 * 0x10), plVar2 == (longlong *)0x0)) {
        lVar3 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
        lVar3 = local_38;
      }
      if (lVar3 == param_2) {
        FUN_1469b6164(plVar1,iVar4);
        FUN_1469b61ce(plVar1);
      }
      else {
        iVar4 = iVar4 + 1;
      }
    } while (iVar4 < *(int *)(param_1 + 0x458));
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469aa7fa FUN_1469aa7fa body=60 status=ok
// SIG undefined FUN_1469aa7fa(void)

void FUN_1469aa7fa(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)param_1[0xe4] + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001469aa833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,uVar1,param_2,param_3);
  return;
}



// FUNCTION 1469aa836 FUN_1469aa836 body=96 status=ok
// SIG undefined FUN_1469aa836(void)

void FUN_1469aa836(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_14096fe04(uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x0001469aa87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
      return;
    }
  }
  FUN_14096fe04(uVar4);
  return;
}



// FUNCTION 1469aa896 FUN_1469aa896 body=96 status=ok
// SIG undefined FUN_1469aa896(void)

void FUN_1469aa896(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_14589483e(uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x0001469aa8df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
      return;
    }
  }
  FUN_14589483e(uVar4);
  return;
}



// FUNCTION 1469aa8f6 FUN_1469aa8f6 body=116 status=ok
// SIG undefined FUN_1469aa8f6(void)

void FUN_1469aa8f6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_1428f73a4(uVar4,param_1 + 0x200,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x0001469aa94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
      return;
    }
  }
  FUN_1428f73a4(uVar4,param_1 + 0x200,param_2);
  return;
}



// FUNCTION 1469aa96a FUN_1469aa96a body=53 status=ok
// SIG undefined FUN_1469aa96a(void)

void FUN_1469aa96a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1401b439d(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469aa9a0 FUN_1469aa9a0 body=112 status=ok
// SIG undefined FUN_1469aa9a0(void)

ulonglong FUN_1469aa9a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong unaff_RSI;
  longlong lVar4;
  bool bVar5;
  
  if ((longlong)*(int *)(param_1 + 0x1f8) == 0) {
    unaff_RSI = 0;
  }
  else {
    lVar4 = 0;
    do {
      bVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar4) == *param_2;
      unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),bVar5);
      if (bVar5) break;
      bVar5 = (longlong)*(int *)(param_1 + 0x1f8) * 0x10 + -0x10 != lVar4;
      lVar4 = lVar4 + 0x10;
    } while (bVar5);
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
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1469aaa10 FUN_1469aaa10 body=9 status=ok
// SIG undefined FUN_1469aaa10(void)

undefined4 FUN_1469aaa10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1a8);
}



// FUNCTION 1469aaa1a FUN_1469aaa1a body=63 status=ok
// SIG undefined FUN_1469aaa1a(void)

bool FUN_1469aaa1a(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x20) - (float)param_3;
  fVar1 = *(float *)(param_2 + 0x24) - (float)((ulonglong)param_3 >> 0x20);
  return *(float *)(param_1 + 0x1a8) * *(float *)(param_1 + 0x1a8) <= fVar2 * fVar2 + fVar1 * fVar1;
}



// FUNCTION 1469aaa5a FUN_1469aaa5a body=54 status=ok
// SIG undefined FUN_1469aaa5a(void)

bool FUN_1469aaa5a(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  
  fVar1 = (float)((ulonglong)param_3 >> 0x20);
  if (param_4 == 0) {
    fVar1 = (float)param_3;
  }
  return *(float *)(param_1 + 0x1a8) <=
         ABS(*(float *)(param_2 + 0x20 + (ulonglong)(param_4 != 0) * 4) - fVar1);
}



// FUNCTION 1469aaa90 FUN_1469aaa90 body=146 status=ok
// SIG undefined FUN_1469aaa90(void)

undefined4 FUN_1469aaa90(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20[0] = 6;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_1c = param_3;
  uVar4 = FUN_1456d46ea(param_1,&local_30,local_20);
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aab24 FUN_1469aab24 body=583 status=ok
// SIG undefined FUN_1469aab24(void)

float * FUN_1469aab24(longlong *param_1,float *param_2,undefined8 param_3,float *param_4,
                     char param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  char local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  float local_90;
  float local_8c;
  int local_88;
  int local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = &local_a0;
  local_a0 = DAT_14c84635c;
  local_b8 = param_5;
  local_a8 = 1;
  (**(code **)(*param_1 + 0x1d0))(param_1,&local_90);
  fVar6 = local_8c;
  fVar5 = local_90;
  uVar1 = CONCAT44(local_8c,local_90);
  (**(code **)(*param_1 + 0x68))(param_1,&local_90);
  fVar4 = local_8c;
  fVar3 = local_90;
  if ((((local_90 < fVar5) || (*param_4 + fVar5 < local_90)) || (local_8c < fVar6)) ||
     (param_4[1] + fVar6 < local_8c)) {
    *(undefined8 *)param_2 = uVar1;
  }
  else {
    fVar5 = 1.0;
    local_84 = (int)(local_8c + 1.0);
    local_88 = (int)(local_90 + 1.0);
    local_8c = (float)(int)local_8c;
    local_90 = (float)(int)local_90;
    (**(code **)(*DAT_14c968088 + 0xb0))(DAT_14c968088,&local_a0);
    fVar6 = (float)local_a0._4_4_;
    fVar7 = (float)(int)local_a0;
    if (param_5 != '\0') {
      fVar5 = (float)FUN_145788320(fVar3,fVar4);
    }
    fVar2 = fVar5 * 12.0;
    fVar5 = fVar5 * 16.0;
    fVar4 = (fVar4 - fVar2) - param_4[1];
    fVar3 = (fVar3 - fVar5) - *param_4;
    if (fVar3 < fVar7) {
      fVar3 = fVar3 + fVar5 + fVar5 + *param_4;
    }
    if (fVar4 < fVar6) {
      fVar4 = fVar4 + fVar2 + fVar2 + param_4[1];
    }
    *param_2 = fVar3;
    param_2[1] = fVar4;
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aad6c FUN_1469aad6c body=724 status=ok
// SIG undefined FUN_1469aad6c(void)

float * FUN_1469aad6c(undefined8 param_1,float *param_2,float *param_3,float *param_4,char param_5,
                     float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  float fVar6;
  undefined1 auStack_118 [32];
  float *local_f8;
  double *local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  int local_90;
  int local_8c;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  iVar3 = param_7;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = 0.0;
  dStack_80 = 0.0;
  if (param_5 == '\0') {
    fVar6 = 1.0;
  }
  else {
    fVar6 = (float)FUN_145788320(*param_3,param_3[1]);
  }
  fVar1 = param_4[1];
  fVar2 = *param_4;
  local_98 = (int)*param_3;
  iStack_94 = (int)param_3[1];
  local_90 = (int)param_3[2];
  local_8c = (int)param_3[3];
  local_a0 = (double)param_6[1];
  local_a8 = (double)*param_6;
  local_b0 = (double)(fVar1 * fVar6);
  local_b8 = (double)(fVar2 * fVar6);
  local_f0 = &local_88;
  local_f8 = (float *)CONCAT44(local_f8._4_4_,(uint)(iVar3 == 1));
  cVar4 = (**(code **)(*DAT_14c968088 + 0xb8))(DAT_14c968088,&local_98);
  if (cVar4 == '\0') {
    local_a8 = (double)CONCAT44(iStack_94,local_98);
    local_a0 = (double)CONCAT44(iStack_94 + 1,local_98 + 1);
    (**(code **)(*DAT_14c968088 + 0xb0))(DAT_14c968088,&local_b8);
    local_bc = (float)local_b0._4_4_;
    local_c0 = (float)(int)local_b0;
    local_c4 = (float)local_b8._4_4_;
    local_c8 = (float)(int)local_b8;
    local_e0 = *param_6;
    local_dc = param_6[1];
    if ((((local_e0 == 0.0) && (!NAN(local_e0))) && (local_dc == 0.0)) && (!NAN(local_dc))) {
      piVar5 = &local_8c;
      if (iVar3 == 0) {
        piVar5 = &iStack_94;
      }
      local_dc = (float)*piVar5;
      piVar5 = &local_98;
      if (iVar3 == 0) {
        piVar5 = &local_90;
      }
      local_e0 = (float)*piVar5;
    }
    local_d4 = fVar1 * fVar6 + local_dc;
    local_d8 = fVar2 * fVar6 + local_e0;
    local_f8 = &local_c8;
    FUN_140398c85(&local_d0,param_3,&local_e0,&param_7);
    *param_2 = (1.0 / fVar6) * local_d0;
    param_2[1] = local_cc * (1.0 / fVar6);
  }
  else {
    *param_2 = (float)((1.0 / (double)fVar6) * local_88);
    param_2[1] = (float)(dStack_80 * (1.0 / (double)fVar6));
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ab042 FUN_1469ab042 body=69 status=ok
// SIG undefined FUN_1469ab042(void)

void FUN_1469ab042(longlong param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  
  if (*(longlong **)(param_1 + 0x4b8) == (longlong *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
    ppuVar2 = &PTR_FUN_149efda40;
    *puVar1 = &PTR_FUN_149efda40;
    *(undefined8 **)(param_1 + 0x4b8) = puVar1;
  }
  else {
    ppuVar2 = (undefined **)**(longlong **)(param_1 + 0x4b8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001469ab05e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppuVar2[2])();
  return;
}



// FUNCTION 1469ab088 FUN_1469ab088 body=1239 status=ok
// SIG undefined FUN_1469ab088(void)

float * FUN_1469ab088(longlong *param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar8 = (**(code **)(*(longlong *)param_1[0xe4] + 8))();
  if ((-1 < (int)uVar8) && ((int)uVar8 < (int)param_1[99])) {
    lVar3 = *(longlong *)(param_1[0x62] + (ulonglong)uVar8 * 0x10);
    plVar4 = *(longlong **)(param_1[0x62] + 8 + (ulonglong)uVar8 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (lVar3 == 0) goto LAB_1469ab2d9;
    if ((((*(int *)(lVar3 + 0x78) < 1) || (*(longlong *)(lVar3 + 0x80) == 0)) ||
        (plVar5 = *(longlong **)(lVar3 + 0x88), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1))
    {
      FUN_14007d9be(lVar3,&local_108,10);
      fVar13 = local_108 + 1.0;
      local_108 = (float)(int)local_108;
      local_100 = (longlong *)CONCAT44((int)(fStack_104 + 1.0),(int)fVar13);
      fStack_104 = (float)(int)fStack_104;
      (**(code **)(*DAT_14c968088 + 0xb0))(DAT_14c968088,&local_118,&local_108);
      fStack_11c = (float)local_10c;
      fStack_120 = (float)local_110;
      fStack_124 = (float)local_114;
      local_128 = (float)local_118;
      cVar7 = FUN_14692fb7c(param_1 + 0x36);
      if (cVar7 != '\0') {
        *param_2 = local_128;
        param_2[1] = fStack_124;
        param_2[2] = fStack_120;
        param_2[3] = fStack_11c;
        goto LAB_1469ab222;
      }
      (**(code **)(*param_1 + 0x30))(param_1,&local_108);
      plVar5 = local_100;
      if (CONCAT44(fStack_104,local_108) != 0) {
        uVar12 = FUN_146980726(CONCAT44(fStack_104,local_108),&local_118);
        FUN_1461182c0(uVar12,param_2,&local_118);
        plVar5 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_100 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        goto LAB_1469ab222;
      }
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_100 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (0 < (longlong)(int)param_1[0x3d]) {
        lVar10 = (longlong)(int)param_1[0x3d] * 0x10;
        lVar3 = *(longlong *)(param_1[0x3c] + -0x10 + lVar10);
        plVar5 = *(longlong **)(param_1[0x3c] + -8 + lVar10);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          uVar12 = FUN_146980726(lVar3,&local_108);
          FUN_1461182c0(uVar12,param_2,&local_108);
        }
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
        if (lVar3 != 0) goto LAB_1469ab222;
      }
LAB_1469ab2d9:
      bVar11 = true;
      if (plVar4 == (longlong *)0x0) goto LAB_1469ab303;
    }
    else {
      iVar9 = (int)plVar5[1];
      do {
        if (iVar9 == 0) {
          FUN_144b016b8(0,&local_108);
          fVar13 = local_108;
          fVar14 = fStack_104;
          goto LAB_1469ab4b1;
        }
        LOCK();
        iVar6 = (int)plVar5[1];
        bVar11 = iVar9 == iVar6;
        if (bVar11) {
          *(int *)(plVar5 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar11);
      FUN_144b016b8(*(undefined8 *)(lVar3 + 0x80),&local_108);
      fVar14 = fStack_104;
      fVar13 = local_108;
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
LAB_1469ab4b1:
      plVar5 = *(longlong **)(lVar3 + 0x88);
      if (plVar5 == (longlong *)0x0) {
LAB_1469ab4bd:
        uVar12 = FUN_14287c17c(0,&local_108);
      }
      else {
        iVar9 = (int)plVar5[1];
        do {
          if (iVar9 == 0) goto LAB_1469ab4bd;
          LOCK();
          iVar6 = (int)plVar5[1];
          bVar11 = iVar9 == iVar6;
          if (bVar11) {
            *(int *)(plVar5 + 1) = iVar9 + 1;
            iVar6 = iVar9;
          }
          iVar9 = iVar6;
          UNLOCK();
        } while (!bVar11);
        uVar12 = FUN_14287c17c(*(undefined8 *)(lVar3 + 0x80),&local_108);
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          uVar12 = (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            uVar12 = (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      local_100 = (longlong *)CONCAT44(fStack_104 + fVar14,local_108 + fVar13);
      local_108 = fVar13;
      fStack_104 = fVar14;
      FUN_1461182c0(uVar12,param_2);
LAB_1469ab222:
      if (plVar4 == (longlong *)0x0) goto LAB_1469ab37f;
      bVar11 = false;
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
    if (!bVar11) goto LAB_1469ab37f;
  }
LAB_1469ab303:
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (longlong *)0x0;
  uStack_f8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_146118180(param_1,&local_108);
  *param_2 = (float)(int)local_f0;
  param_2[1] = (float)local_f0._4_4_;
  param_2[2] = (float)(int)uStack_e8;
  param_2[3] = (float)uStack_e8._4_4_;
  FUN_140ecb711(local_100,uStack_f8 & 0xffffffff);
  if (local_100 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1469ab37f:
  if ((local_80 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469ab560 FUN_1469ab560 body=74 status=ok
// SIG undefined FUN_1469ab560(void)

void FUN_1469ab560(void)

{
  undefined8 in_R9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = in_R9;
  FUN_1469ab5ac();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ab5ac FUN_1469ab5ac body=404 status=ok
// SIG undefined FUN_1469ab5ac(void)

ulonglong FUN_1469ab5ac(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                       int *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  plVar1 = DAT_14c98e618;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_50,&local_60);
  plVar1 = local_48;
  if (local_50 == 0) {
    uVar6 = 0;
  }
  else {
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_1469ab923(param_2,param_3,&local_78,local_50);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x108))
              (*(longlong **)(param_1 + 0x20),&local_78,param_4,local_50);
    local_88 = local_50;
    local_80 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_1428f2718(param_1,&local_88);
    iVar4 = (int)uStack_70 - (int)local_78;
    *param_5 = iVar4;
    iVar5 = uStack_70._4_4_ - local_78._4_4_;
    param_5[1] = iVar5;
    if (iVar5 == 0 || iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),iVar5 * iVar4 <= *(int *)(param_4 + 8));
    }
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ab742 FUN_1469ab742 body=74 status=ok
// SIG undefined FUN_1469ab742(void)

void FUN_1469ab742(void)

{
  undefined8 in_R9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = in_R9;
  FUN_1469ab78e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ab78e FUN_1469ab78e body=404 status=ok
// SIG undefined FUN_1469ab78e(void)

ulonglong FUN_1469ab78e(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                       int *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  plVar1 = DAT_14c98e618;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_50,&local_60);
  plVar1 = local_48;
  if (local_50 == 0) {
    uVar6 = 0;
  }
  else {
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_1469ab923(param_2,param_3,&local_78,local_50);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x110))
              (*(longlong **)(param_1 + 0x20),&local_78,param_4,local_50);
    local_88 = local_50;
    local_80 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_1428f2718(param_1,&local_88);
    iVar4 = (int)uStack_70 - (int)local_78;
    *param_5 = iVar4;
    iVar5 = uStack_70._4_4_ - local_78._4_4_;
    param_5[1] = iVar5;
    if (iVar5 == 0 || iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),iVar5 * iVar4 <= *(int *)(param_4 + 8));
    }
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ab923 FUN_1469ab923 body=691 status=ok
// SIG undefined FUN_1469ab923(void)

void FUN_1469ab923(undefined8 *param_1,int *param_2,int *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  float *pfVar9;
  float *pfVar10;
  longlong **pplVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_278 [40];
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  float local_230;
  float local_22c;
  longlong *local_1f0;
  byte local_1e8;
  undefined1 local_1e0 [296];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  uVar13 = DAT_14c98e618;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1e0[0] = DAT_14c96b238;
  local_b8 = 0;
  local_b0 = 0x400000000;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_240 = *param_1;
  local_238 = param_1[1];
  if (local_238 != 0) {
    LOCK();
    *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
    UNLOCK();
  }
  FUN_1469a9416(uVar13,&local_240,local_1e0);
  local_250 = *param_1;
  local_248 = param_1[1];
  if (local_248 != 0) {
    LOCK();
    *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
    UNLOCK();
  }
  FUN_14497fa56(local_1e0,&local_230,&local_250);
  pfVar9 = (float *)FUN_140f0b848();
  pfVar10 = pfVar9;
  if (local_1e8 != 0) {
    pfVar10 = &local_230;
  }
  fVar3 = *pfVar10;
  fVar4 = pfVar10[1];
  fVar5 = pfVar10[2];
  fVar6 = pfVar10[3];
  fVar7 = pfVar10[4];
  pplVar11 = &local_1f0;
  if (local_1e8 == 0) {
    pplVar11 = (longlong **)(pfVar9 + 0x10);
  }
  plVar8 = *pplVar11;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if (((local_1e8 & 1) != 0) && (local_1f0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_144b016b8(param_4,&local_230);
  if ((param_2[2] == *param_2) && (param_2[3] == param_2[1])) {
    uVar12 = CONCAT44((int)(fVar4 * fVar5),(int)(fVar3 * fVar5));
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 2);
  }
  *param_3 = (int)((float)(int)uVar13 + (fVar6 - local_230));
  param_3[1] = (int)((float)(int)((ulonglong)uVar13 >> 0x20) + (fVar7 - local_22c));
  param_3[2] = (int)((float)(int)uVar12 + (fVar6 - local_230));
  param_3[3] = (int)((float)(int)((ulonglong)uVar12 >> 0x20) + (fVar7 - local_22c));
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
  FUN_1447fa21a(local_1e0);
  if ((local_80 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469abbd8 FUN_1469abbd8 body=660 status=ok
// SIG undefined FUN_1469abbd8(void)

longlong * FUN_1469abbd8(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_64;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  iVar7 = (int)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)(param_1 + 800);
  uVar10 = param_3;
  if (*(int *)(param_1 + 0x328) <= iVar7) {
    FUN_1469abe6e(plVar5,iVar7 + 1);
  }
  lVar12 = *plVar5;
  lVar8 = (longlong)iVar7 * 0x10;
  plVar6 = *(longlong **)(lVar12 + 8 + lVar8);
  uVar9 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
  if (plVar6 == (longlong *)0x0) {
LAB_1469abc54:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar6[1];
    do {
      if (iVar7 == 0) goto LAB_1469abc54;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar13 = iVar7 == iVar3;
      if (bVar13) {
        *(int *)(plVar6 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar13);
    lVar12 = *(longlong *)(lVar12 + lVar8);
    plVar4 = plVar6;
    if (lVar12 != 0) goto LAB_1469abdf4;
    uVar9 = 0;
  }
  iVar7 = 8;
  local_70 = param_2;
  local_64 = uVar9;
  local_60 = plVar5;
  if (8 < *(int *)(param_1 + 0x318)) {
    lVar12 = 0x88;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x310) + -8 + lVar12);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x310) + lVar12);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (lVar2 == 0) break;
      iVar7 = iVar7 + 1;
      lVar12 = lVar12 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0x318));
  }
  FUN_141370954(param_1,&local_58,iVar7,1);
  lVar12 = FUN_14001cc68(0x10,0x10);
  FUN_1469b6f8c(lVar12,*(undefined4 *)(local_58 + 0x18),param_3 & 0xffffffff);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5 = local_60;
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149efda60;
  plVar4[2] = lVar12;
  plVar11 = (longlong *)0x0;
  if (plVar4 == plVar6) {
    plVar11 = plVar4;
  }
  if ((char)local_64 == '\0' && plVar4 != plVar6) {
    LOCK();
    plVar11 = plVar6 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar7 = *piVar1;
      UNLOCK();
joined_r0x0001469abd86:
      if (iVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  else if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar7 = *piVar1;
      UNLOCK();
      plVar6 = plVar4;
      goto joined_r0x0001469abd86;
    }
  }
  lVar2 = *plVar5;
  *(longlong *)(lVar2 + lVar8) = lVar12;
  plVar5 = *(longlong **)(lVar2 + 8 + lVar8);
  if (plVar5 != plVar4) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar2 + lVar8 + 8);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    *(longlong **)(lVar2 + lVar8 + 8) = plVar4;
  }
  param_2 = local_70;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      param_2 = local_70;
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        param_2 = local_70;
      }
    }
  }
LAB_1469abdf4:
  *param_2 = lVar12;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469abe6e FUN_1469abe6e body=130 status=ok
// SIG undefined FUN_1469abe6e(void)

void FUN_1469abe6e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1469b6496(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1469b651c(param_1,param_2,iVar1 - param_2);
    FUN_1469b6576(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1469abef2 FUN_1469abef2 body=126 status=ok
// SIG undefined FUN_1469abef2(void)

float * FUN_1469abef2(undefined8 param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(DAT_14c968088 + 8);
  if (plVar1 == (longlong *)0x0) {
    fVar2 = 1.0;
    fVar3 = fVar2;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_24,&local_28);
    fVar2 = (float)local_24;
    fVar3 = (float)local_28;
  }
  *param_2 = fVar2;
  param_2[1] = fVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469abf72 FUN_1469abf72 body=72 status=ok
// SIG undefined FUN_1469abf72(void)

undefined1 * FUN_1469abf72(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((*(char *)(param_1 + 0x4e9) == '\x01') &&
     (*(longlong **)(DAT_14c968088 + 8) != (longlong *)0x0)) {
    iVar1 = (**(code **)(**(longlong **)(DAT_14c968088 + 8) + 0x38))();
    if (iVar1 != 0) {
      puVar2 = &DAT_14c96b23a;
      goto LAB_1469abfad;
    }
  }
  puVar2 = &DAT_14c96b23b;
LAB_1469abfad:
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1469abfba FUN_1469abfba body=141 status=ok
// SIG undefined FUN_1469abfba(void)

undefined8 FUN_1469abfba(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      FUN_1469b72f4(uVar4,param_2);
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
  FUN_1469b72f4(uVar4,param_2);
  return param_2;
}



// FUNCTION 1469ac08a FUN_1469ac08a body=180 status=ok
// SIG undefined FUN_1469ac08a(void)

ulonglong FUN_1469ac08a(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x318))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_2 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_2 * 0x10);
    uVar6 = (undefined7)((ulonglong)lVar3 >> 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71(uVar6,*(int *)(lVar3 + 0x17c) < *(int *)(lVar3 + 0x150));
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
      goto LAB_1469ac131;
    }
    if (lVar3 != 0) {
      uVar5 = CONCAT71(uVar6,*(int *)(lVar3 + 0x17c) < *(int *)(lVar3 + 0x150));
      goto LAB_1469ac131;
    }
  }
  uVar5 = 0;
LAB_1469ac131:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1469ac13e FUN_1469ac13e body=377 status=ok
// SIG undefined FUN_1469ac13e(void)

ulonglong FUN_1469ac13e(longlong param_1,undefined8 *param_2,uint param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  ulonglong unaff_RBP;
  byte bVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x318) <= (int)param_3)) {
LAB_1469ac1fb:
    bVar8 = 0;
    goto LAB_1469ac1fe;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_3 * 0x10);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_3 * 0x10);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == 0) goto LAB_1469ac1fb;
LAB_1469ac1bd:
    if (*(char *)(param_4 + 1) == '\x01') {
      uVar3 = *param_4;
      local_40 = *param_2;
      local_38 = param_2[1];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      uVar7 = FUN_1469b71bc(lVar4,&local_40,uVar3);
    }
    else {
      local_50 = *param_2;
      local_48 = param_2[1];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      uVar7 = FUN_1401b6302(lVar4,&local_50);
    }
    unaff_RBP = (ulonglong)uVar7;
    bVar8 = 1;
    bVar6 = 1;
    if (plVar5 == (longlong *)0x0) goto LAB_1469ac1fe;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    if (lVar4 != 0) goto LAB_1469ac1bd;
    bVar6 = 0;
  }
  bVar8 = bVar6;
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
LAB_1469ac1fe:
  plVar5 = (longlong *)param_2[1];
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
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(unaff_RBP >> 8),(byte)unaff_RBP & bVar8) & 0xffffffff;
}



// FUNCTION 1469ac2b8 FUN_1469ac2b8 body=305 status=ok
// SIG undefined FUN_1469ac2b8(void)

longlong FUN_1469ac2b8(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_4 < 0) || (*(int *)(param_1 + 0x318) <= (int)param_4)) {
LAB_1469ac36c:
    *(undefined1 *)(param_2 + 1) = 0;
    goto LAB_1469ac370;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_4 * 0x10);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_4 * 0x10);
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_1469ac36c;
LAB_1469ac336:
    local_38 = *param_3;
    local_30 = param_3[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_1400c307c(lVar3,param_2,&local_38);
    if (plVar4 == (longlong *)0x0) goto LAB_1469ac370;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
    if (lVar3 != 0) goto LAB_1469ac336;
    *(undefined1 *)(param_2 + 1) = 0;
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
LAB_1469ac370:
  plVar4 = (longlong *)param_3[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469ac3ec FUN_1469ac3ec body=197 status=ok
// SIG undefined FUN_1469ac3ec(void)

ulonglong FUN_1469ac3ec(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x310);
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar9);
      if (lVar5 != 0) {
        local_40 = *param_2;
        local_38 = param_2[1];
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        cVar7 = FUN_1469b763a(lVar5,&local_40);
        if (cVar7 != '\0') {
          uVar8 = CONCAT71((int7)((ulonglong)&local_40 >> 8),1);
          goto LAB_1469ac462;
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  uVar8 = 0;
LAB_1469ac462:
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ac4b2 FUN_1469ac4b2 body=233 status=ok
// SIG undefined FUN_1469ac4b2(void)

undefined4 FUN_1469ac4b2(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x318) <= (int)param_3)) {
LAB_1469ac558:
    uVar5 = 0;
    goto LAB_1469ac55a;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_3 * 0x10);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_3 * 0x10);
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_1469ac558;
LAB_1469ac523:
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_1469b6ffa(lVar3,&local_30);
    if (plVar4 == (longlong *)0x0) goto LAB_1469ac55a;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
    if (lVar3 != 0) goto LAB_1469ac523;
    uVar5 = 0;
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
LAB_1469ac55a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1469ac59c FUN_1469ac59c body=156 status=ok
// SIG undefined FUN_1469ac59c(void)

undefined8 FUN_1469ac59c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x310);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (lVar3 != 0) {
        local_40 = *param_2;
        local_38 = param_2[1];
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        cVar4 = FUN_1469b6ffa(lVar3,&local_40);
        if (cVar4 != '\0') {
          uVar5 = 1;
          goto LAB_1469ac612;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  uVar5 = 0;
LAB_1469ac612:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ac63a FUN_1469ac63a body=340 status=ok
// SIG undefined FUN_1469ac63a(void)

longlong * FUN_1469ac63a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_378 [32];
  undefined1 *local_358;
  undefined1 local_341;
  undefined1 local_340 [8];
  longlong *local_338;
  longlong *local_328;
  undefined4 local_320;
  undefined1 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  longlong local_300;
  longlong *local_2f8;
  undefined1 local_2f0 [712];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_378;
  FUN_145c895fc(local_2f0);
  local_328 = (longlong *)*param_3;
  if (local_328 != (longlong *)0x0) {
    (**(code **)(*local_328 + 8))();
  }
  local_320 = (undefined4)param_3[1];
  local_318 = 1;
  local_310 = 0;
  uStack_308 = 0;
  uVar3 = FUN_145c88ffe(local_2f0);
  local_358 = &local_341;
  FUN_145c892fc(local_340,"SToolTip",
                ".\\Runtime/Slate/Private/Framework/Application/SlateApplication.cpp",0x123a);
  FUN_145c89054(local_340,&local_300,uVar3);
  lVar4 = local_300 + 0x268;
  if (local_300 == 0) {
    lVar4 = 0;
  }
  *param_2 = lVar4;
  param_2[1] = (longlong)local_2f8;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2f8 + 1) = (int)local_2f8[1] + 1;
    UNLOCK();
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_2f8)(local_2f8);
        LOCK();
        piVar2 = (int *)((longlong)local_2f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_2f8 + 0x10))(local_2f8);
        }
      }
    }
  }
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_338 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar2 = (int *)((longlong)local_338 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_338 + 0x10))(local_338);
      }
    }
  }
  FUN_145c890ca(local_2f0);
  if ((local_28 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ac790 FUN_1469ac790 body=21 status=ok
// SIG undefined FUN_1469ac790(void)

void FUN_1469ac790(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1409efacc();
  FUN_142848054(uVar1);
  return;
}



// FUNCTION 1469ac7a6 FUN_1469ac7a6 body=132 status=ok
// SIG undefined FUN_1469ac7a6(void)

void FUN_1469ac7a6(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  float local_40;
  float local_3c;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(param_1[-0x29] + 0x68))(param_1 + -0x29,&local_40);
  local_30 = (double)local_3c;
  local_38 = (double)local_40;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ac82c FUN_1469ac82c body=124 status=ok
// SIG undefined FUN_1469ac82c(void)

void FUN_1469ac82c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149efe1e0;
  plVar3 = (longlong *)param_1[0x10];
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
  *param_1 = &PTR_FUN_149eda650;
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
                    /* WARNING: Could not recover jumptable at 0x0001469ac8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469ac8a8 FUN_1469ac8a8 body=132 status=ok
// SIG undefined FUN_1469ac8a8(void)

void FUN_1469ac8a8(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  float local_40;
  float local_3c;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(param_1[-0x29] + 0x68))(param_1 + -0x29,&local_40);
  local_30 = (double)local_3c;
  local_38 = (double)local_40;
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ac92e FUN_1469ac92e body=118 status=ok
// SIG undefined FUN_1469ac92e(void)

void FUN_1469ac92e(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(param_1[-0x29] + 0x68))(param_1 + -0x29,&local_38);
  local_28 = (double)local_34;
  local_30 = (double)local_38;
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ac9a6 FUN_1469ac9a6 body=131 status=ok
// SIG undefined FUN_1469ac9a6(void)

void FUN_1469ac9a6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(param_1[-0x29] + 0x68))(param_1 + -0x29,&local_48);
  local_38 = (double)local_44;
  local_40 = (double)local_48;
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aca2a FUN_1469aca2a body=855 status=ok
// SIG undefined FUN_1469aca2a(void)

void FUN_1469aca2a(longlong *param_1,undefined4 param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined4 local_340;
  longlong local_330;
  longlong local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined1 local_198 [296];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (*param_3 == 0) goto LAB_1469acbb6;
  local_198[0] = DAT_14c96b238;
  local_70 = 0;
  local_68 = 0x400000000;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (param_4 == '\x01') {
    FUN_1401b43e8(param_1,&local_308);
    FUN_1400e2090(param_1,&local_320,param_2);
    FUN_14007d9be(local_320,&local_310,10);
    local_348 = 0;
    local_340 = param_2;
    (**(code **)(*param_1 + 0x108))(param_1,&local_2f8,local_310,&local_308);
    FUN_1400e213c(local_198,&local_2f8);
    FUN_1447fa21a(&local_2f8);
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
    FUN_1401b439d(local_308,local_300);
    if (local_308 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1400e2090(param_1,&local_308,param_2);
    lVar4 = *(longlong *)(local_308 + 0x90);
    if (lVar4 == 0) {
      local_348 = DAT_14c96b238;
      FUN_1402c4e4c(local_308 + 0x70,&local_2f8,0,0);
      plVar3 = local_2f0;
      if (local_2f0 == (longlong *)0x0) {
        *(undefined8 *)(local_308 + 0x90) = local_2f8;
        plVar5 = *(longlong **)(local_308 + 0x98);
        if (plVar5 != (longlong *)0x0) {
          *(undefined8 *)(local_308 + 0x98) = 0;
LAB_1469acd12:
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x0001469acd41:
            if (iVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
        *(undefined8 *)(local_308 + 0x90) = local_2f8;
        plVar5 = *(longlong **)(local_308 + 0x98);
        if (local_2f0 == plVar5) {
          LOCK();
          plVar5 = local_2f0 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_2f0)(local_2f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar5 = plVar3;
            goto joined_r0x0001469acd41;
          }
        }
        else {
          *(longlong **)(local_308 + 0x98) = local_2f0;
          if (plVar5 != (longlong *)0x0) goto LAB_1469acd12;
        }
      }
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
      lVar4 = *(longlong *)(local_308 + 0x90);
    }
    plVar3 = *(longlong **)(local_308 + 0x98);
    if (plVar3 == (longlong *)0x0) {
      FUN_1401bb69a(local_198,lVar4);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_1401bb69a(local_198,lVar4);
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    plVar3 = (longlong *)CONCAT44(uStack_2fc,local_300);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  if (0 < (int)local_68) {
    local_330 = *param_3;
    local_328 = param_3[1];
    if (local_328 != 0) {
      LOCK();
      *(int *)(local_328 + 8) = *(int *)(local_328 + 8) + 1;
      UNLOCK();
    }
    local_348 = 0;
    FUN_1428f4eb4(param_1,local_198,&local_330,param_2);
  }
  FUN_1447fa21a(local_198);
LAB_1469acbb6:
  if ((local_38 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469acd82 FUN_1469acd82 body=761 status=ok
// SIG undefined FUN_1469acd82(void)

undefined4
FUN_1469acd82(longlong param_1,undefined1 param_2,double *param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1b8 [38];
  undefined2 local_192;
  undefined **local_190;
  undefined2 local_188;
  undefined1 local_186;
  undefined8 local_184;
  undefined8 local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined **local_118;
  undefined1 local_110 [2];
  undefined1 local_10e;
  undefined8 local_10c;
  undefined8 local_100;
  undefined **local_f8;
  undefined **local_f0;
  float local_e8;
  float local_e4;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b3;
  float local_b0;
  float local_ac;
  undefined1 local_a8;
  undefined2 local_a7;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  (**(code **)(*(longlong *)(param_1 + -0x148) + 0x68))(param_1 + -0x148,&local_118);
  ppuVar6 = local_118;
  dVar3 = param_3[1];
  dVar4 = *param_3;
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,local_110);
  lVar8 = param_1 + 8;
  local_10e = 0;
  local_10c = 0;
  local_100 = 0;
  local_118 = &PTR_FUN_149eda650;
  local_f8 = ppuVar6;
  local_f0 = ppuVar6;
  fVar9 = SUB84(ppuVar6,0);
  fVar10 = (float)((ulonglong)ppuVar6 >> 0x20);
  fVar11 = fVar10 - fVar10;
  fVar12 = fVar9 - fVar9;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_b8 = 0x3f800000;
  local_b4 = 0;
  local_a8 = param_5;
  local_a7 = 0;
  local_e8 = fVar12;
  local_e4 = fVar11;
  local_e0 = lVar8;
  local_b3 = param_2;
  local_b0 = (float)dVar4;
  local_ac = (float)dVar3;
  (**(code **)(*DAT_14c968088 + 0x58))();
  plVar5 = DAT_14c966e90;
  local_148 = DAT_14c966e88;
  local_150 = DAT_14c966e80;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  local_188 = local_192;
  local_186 = 0;
  local_184 = 0;
  local_178 = 0;
  local_190 = &PTR_FUN_149eda650;
  local_140 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_138 = 10;
  local_130 = 0x3f800000;
  local_12c = 0;
  local_128 = 0;
  local_120 = 0;
  local_11e = 0;
  local_170 = fVar9;
  local_16c = fVar10;
  local_168 = fVar9;
  local_164 = fVar10;
  local_160 = fVar12;
  local_15c = fVar11;
  local_158 = lVar8;
  local_124 = param_4;
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
  uVar7 = FUN_141519358(param_1 + -0x148,&local_190,&local_118);
  plVar5 = local_140;
  local_190 = &PTR_FUN_149eda650;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_c8;
  local_118 = &PTR_FUN_149eda650;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ad07c FUN_1469ad07c body=447 status=ok
// SIG undefined FUN_1469ad07c(void)

bool FUN_1469ad07c(longlong param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                  int param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dc [4];
  undefined4 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined7 local_80;
  undefined4 uStack_79;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_5 < 10) {
    fVar4 = (float)param_3[1];
    fVar5 = (float)*param_3;
    local_e8 = &PTR_FUN_149eda670;
    local_e0 = 0;
    local_de = 0;
    local_d8 = param_7;
    local_d0 = 0;
    plVar3 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar3 + 0x58))(plVar3,local_dc,param_7);
    local_e8 = &PTR_FUN_149eda650;
    local_b4 = fVar4 - fVar4;
    local_b8 = fVar5 - fVar5;
    local_b0 = &DAT_14c96b240;
    local_a8 = (undefined4)DAT_14c966e98;
    uStack_a4 = DAT_14c966e98._4_4_;
    uStack_a0 = (undefined4)DAT_14c966ea0;
    uStack_9c = DAT_14c966ea0._4_4_;
    local_98 = DAT_14c966ea8;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_90 = param_5;
    local_8c = 0;
    local_84 = 1;
    local_80 = 0;
    uStack_79 = 0;
    local_c8 = fVar5;
    local_c4 = fVar4;
    local_c0 = fVar5;
    local_bc = fVar4;
    local_88 = param_4;
    FUN_1469ad23c(param_1 + -0x148,param_2,&local_e8);
    plVar3 = local_98;
    local_e8 = &PTR_FUN_149eda650;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_98)(local_98);
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
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_5 < 10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ad23c FUN_1469ad23c body=147 status=ok
// SIG undefined FUN_1469ad23c(void)

void FUN_1469ad23c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400e2090(param_1,&local_38,*(undefined4 *)(param_3 + 0xc));
  FUN_1428f731e(local_38,param_3);
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
  FUN_1411b470e(param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ad2d0 FUN_1469ad2d0 body=610 status=ok
// SIG undefined FUN_1469ad2d0(void)

undefined4
FUN_1469ad2d0(longlong param_1,double *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_158 [40];
  float local_130;
  float local_12c;
  undefined **local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11c [4];
  undefined4 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined7 local_c0;
  undefined4 uStack_b9;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar6 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar6 + 0x58))(plVar6,&local_128,param_6);
  FUN_1428f522c(param_1 + -0x148,&local_b0,(ulonglong)local_128 & 0xffffffff);
  uVar5 = FUN_1469b827c(local_b0,param_4);
  if ((char)uVar5 != '\0') {
    FUN_1400bbf02(local_b0,&local_130,param_4);
    dVar3 = param_2[1];
    dVar4 = *param_2;
    local_128 = &PTR_FUN_149eda670;
    local_120 = 0;
    local_11e = 0;
    local_118 = param_6;
    local_110 = 0;
    plVar6 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar6 + 0x58))(plVar6,local_11c,param_6);
    local_128 = &PTR_FUN_149eda650;
    local_100 = local_130;
    local_fc = local_12c;
    local_f4 = (float)dVar3 - local_12c;
    local_f8 = (float)dVar4 - local_130;
    local_f0 = &DAT_14c96b240;
    local_e8 = (undefined4)DAT_14c966e98;
    uStack_e4 = DAT_14c966e98._4_4_;
    uStack_e0 = (undefined4)DAT_14c966ea0;
    uStack_dc = DAT_14c966ea0._4_4_;
    local_d8 = DAT_14c966ea8;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_cc = 0;
    local_c4 = 1;
    local_c0 = 0;
    uStack_b9 = 0;
    local_108 = (float)dVar4;
    local_104 = (float)dVar3;
    local_d0 = param_4;
    local_c8 = param_3;
    FUN_14058dffc(param_1 + -0x148,&local_128,0);
    plVar6 = local_d8;
    local_128 = &PTR_FUN_149eda650;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d8)(local_d8);
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
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ad534 FUN_1469ad534 body=503 status=ok
// SIG undefined FUN_1469ad534(void)

undefined4
FUN_1469ad534(longlong param_1,double *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dc [4];
  undefined4 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined2 local_84;
  undefined7 local_80;
  undefined4 uStack_79;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar4 + 0x58))(plVar4,&local_e8,param_5);
  FUN_1428f522c(param_1 + -0x148,&local_70,(ulonglong)local_e8 & 0xffffffff);
  uVar3 = FUN_1469b827c(local_70,param_3);
  if ((char)uVar3 != '\0') {
    fVar5 = (float)param_2[1];
    fVar6 = (float)*param_2;
    local_e8 = &PTR_FUN_149eda670;
    local_e0 = 0;
    local_de = 0;
    local_d8 = param_5;
    local_d0 = 0;
    plVar4 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar4 + 0x58))(plVar4,local_dc,param_5);
    local_e8 = &PTR_FUN_149eda650;
    local_b4 = fVar5 - fVar5;
    local_b8 = fVar6 - fVar6;
    local_b0 = &DAT_14c96b240;
    local_a8 = (undefined4)DAT_14c966e98;
    uStack_a4 = DAT_14c966e98._4_4_;
    uStack_a0 = (undefined4)DAT_14c966ea0;
    uStack_9c = DAT_14c966ea0._4_4_;
    local_98 = DAT_14c966ea8;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_8c = 0;
    local_84 = 1;
    local_80 = 0;
    uStack_79 = 0;
    local_c8 = fVar6;
    local_c4 = fVar5;
    local_c0 = fVar6;
    local_bc = fVar5;
    local_90 = param_3;
    FUN_140e6b9a2(param_1 + -0x148,&local_e8);
    plVar4 = local_98;
    local_e8 = &PTR_FUN_149eda650;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_98)(local_98);
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
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ad72c FUN_1469ad72c body=545 status=ok
// SIG undefined FUN_1469ad72c(void)

undefined4
FUN_1469ad72c(longlong param_1,double *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ec [4];
  undefined4 local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined2 local_87;
  undefined8 local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar4 + 0x58))(plVar4,&local_f8,param_6);
  FUN_1428f522c(param_1 + -0x148,&local_80,(ulonglong)local_f8 & 0xffffffff);
  uVar3 = FUN_1469b827c(local_80,param_4);
  if ((char)uVar3 != '\0') {
    fVar5 = (float)param_2[1];
    fVar6 = (float)*param_2;
    local_f8 = &PTR_FUN_149eda670;
    local_f0 = 0;
    local_ee = 0;
    local_e8 = param_6;
    local_e0 = 0;
    plVar4 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar4 + 0x58))(plVar4,local_ec,param_6);
    local_f8 = &PTR_FUN_149eda650;
    local_c4 = fVar5 - fVar5;
    local_c8 = fVar6 - fVar6;
    local_c0 = &DAT_14c96b240;
    local_b8 = (undefined4)DAT_14c966e98;
    uStack_b4 = DAT_14c966e98._4_4_;
    uStack_b0 = (undefined4)DAT_14c966ea0;
    uStack_ac = DAT_14c966ea0._4_4_;
    local_a8 = DAT_14c966ea8;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_9c = 0;
    local_94 = 1;
    local_90 = 0;
    local_88 = 0;
    local_87 = 1;
    local_d8 = fVar6;
    local_d4 = fVar5;
    local_d0 = fVar6;
    local_cc = fVar5;
    local_a0 = param_4;
    local_98 = param_3;
    FUN_14058dffc(param_1 + -0x148,&local_f8,0);
    plVar4 = local_a8;
    local_f8 = &PTR_FUN_149eda650;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a8)(local_a8);
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
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_78 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ad94e FUN_1469ad94e body=620 status=ok
// SIG undefined FUN_1469ad94e(void)

undefined4
FUN_1469ad94e(longlong param_1,double *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_158 [40];
  float local_130;
  float local_12c;
  undefined **local_128;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11c [4];
  undefined4 local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar6 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar6 + 0x58))(plVar6,&local_128,param_6);
  FUN_1428f522c(param_1 + -0x148,&local_b0,(ulonglong)local_128 & 0xffffffff);
  uVar5 = FUN_1469b827c(local_b0,param_4);
  if ((char)uVar5 != '\0') {
    FUN_1400bbf02(local_b0,&local_130,param_4);
    dVar3 = param_2[1];
    dVar4 = *param_2;
    local_128 = &PTR_FUN_149eda670;
    local_120 = 0;
    local_11e = 0;
    local_118 = param_6;
    local_110 = 0;
    plVar6 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar6 + 0x58))(plVar6,local_11c,param_6);
    local_128 = &PTR_FUN_149eda650;
    local_100 = local_130;
    local_fc = local_12c;
    local_f4 = (float)dVar3 - local_12c;
    local_f8 = (float)dVar4 - local_130;
    local_f0 = &DAT_14c96b240;
    local_e8 = (undefined4)DAT_14c966e98;
    uStack_e4 = DAT_14c966e98._4_4_;
    uStack_e0 = (undefined4)DAT_14c966ea0;
    uStack_dc = DAT_14c966ea0._4_4_;
    local_d8 = DAT_14c966ea8;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_cc = 0;
    local_c4 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b6 = 1;
    local_108 = (float)dVar4;
    local_104 = (float)dVar3;
    local_d0 = param_4;
    local_c8 = param_3;
    FUN_14058dffc(param_1 + -0x148,&local_128,0);
    plVar6 = local_d8;
    local_128 = &PTR_FUN_149eda650;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d8)(local_d8);
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
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469adbf4 FUN_1469adbf4 body=267 status=ok
// SIG undefined FUN_1469adbf4(void)

undefined8
FUN_1469adbf4(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b4 [4];
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = &PTR_FUN_149eda670;
  local_b8 = 0;
  local_b6 = 0;
  local_b0 = param_7;
  local_a8 = 0;
  plVar1 = (longlong *)FUN_144a81a0a();
  (**(code **)(*plVar1 + 0x58))(plVar1,local_b4,param_7);
  local_c0 = &PTR_FUN_149eda710;
  local_90 = param_2[2];
  local_a0 = *param_2;
  uStack_98 = param_2[1];
  local_78 = param_3[2];
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_70 = *param_4;
  uStack_68 = param_4[1];
  local_60 = param_4[2];
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  local_48 = *(undefined8 *)(param_5 + 4);
  FUN_1469add00(param_1 + -0x148,&local_c0);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469add00 FUN_1469add00 body=1162 status=ok
// SIG undefined FUN_1469add00(void)

void FUN_1469add00(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong **pplVar14;
  ulonglong uVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined4 local_2d0;
  longlong *local_2c0;
  longlong *local_2b8;
  undefined **local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  undefined8 local_290 [12];
  longlong local_230;
  longlong *local_228;
  longlong *local_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined1 local_200;
  undefined1 local_1f8 [136];
  undefined4 local_170;
  undefined1 local_16c;
  undefined1 *local_168;
  longlong **pplStack_160;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 *local_60;
  longlong **pplStack_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (DAT_14c75ef40 == '\x01') {
    dVar17 = (double)(**(code **)(*param_1 + 0x60))(param_1);
    if (((double)param_1[0x6e] != dVar17) || (NAN((double)param_1[0x6e]) || NAN(dVar17))) {
      param_1[0x6e] = (longlong)dVar17;
      FUN_1402c1cc6(param_1 + 0x70,dVar17);
    }
  }
  pplStack_160 = &local_220;
  local_168 = &LAB_1428f5e0a;
  local_220 = param_1;
  local_218 = param_2;
  cVar8 = FUN_1402c4aee(param_1 + 0xc9);
  if (cVar8 != '\0') goto LAB_1469add9c;
  FUN_1400e2090(param_1,&local_230,*(undefined4 *)(param_2 + 0xc));
  if (0 < *(int *)(local_230 + 0x78)) {
    lVar16 = *(longlong *)(local_230 + 0x90);
    local_2b8 = param_1;
    if (lVar16 == 0) {
      local_2d8 = CONCAT71(local_2d8._1_7_,DAT_14c96b238);
      FUN_1402c4e4c(local_230 + 0x70,&local_168,0,0);
      pplVar4 = pplStack_160;
      puVar7 = local_168;
      if (pplStack_160 == (longlong **)0x0) {
        *(undefined1 **)(local_230 + 0x90) = local_168;
        pplVar14 = *(longlong ***)(local_230 + 0x98);
        if (pplVar14 != (longlong **)0x0) {
          *(undefined8 *)(local_230 + 0x98) = 0;
LAB_1469ae106:
          LOCK();
          pplVar4 = pplVar14 + 1;
          *(int *)pplVar4 = *(int *)pplVar4 + -1;
          UNLOCK();
          if (*(int *)pplVar4 == 0) {
            (*(code *)**pplVar14)(pplVar14);
            LOCK();
            piVar2 = (int *)((longlong)pplVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar6 = *piVar2;
            UNLOCK();
joined_r0x0001469ae133:
            if (iVar6 == 0) {
              (*(code *)(*pplVar14)[2])(pplVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(pplStack_160 + 1) = *(int *)(pplStack_160 + 1) + 1;
        UNLOCK();
        *(undefined1 **)(local_230 + 0x90) = puVar7;
        pplVar14 = *(longlong ***)(local_230 + 0x98);
        if (pplVar4 == pplVar14) {
          LOCK();
          pplVar14 = pplVar4 + 1;
          *(int *)pplVar14 = *(int *)pplVar14 + -1;
          UNLOCK();
          if (*(int *)pplVar14 == 0) {
            (*(code *)**pplVar4)(pplVar4);
            LOCK();
            piVar2 = (int *)((longlong)pplVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar6 = *piVar2;
            UNLOCK();
            pplVar14 = pplVar4;
            goto joined_r0x0001469ae133;
          }
        }
        else {
          *(longlong ***)(local_230 + 0x98) = pplVar4;
          if (pplVar14 != (longlong **)0x0) goto LAB_1469ae106;
        }
      }
      pplVar4 = pplStack_160;
      if (pplStack_160 != (longlong **)0x0) {
        LOCK();
        pplVar14 = pplStack_160 + 1;
        *(int *)pplVar14 = *(int *)pplVar14 + -1;
        UNLOCK();
        if (*(int *)pplVar14 == 0) {
          (*(code *)**pplVar4)(pplVar4);
          LOCK();
          piVar2 = (int *)((longlong)pplVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar4)[2])(pplVar4);
          }
        }
      }
      lVar16 = *(longlong *)(local_230 + 0x90);
    }
    local_2c0 = *(longlong **)(local_230 + 0x98);
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
      UNLOCK();
    }
    local_2a8 = *(undefined8 *)(param_2 + 8);
    uStack_2a0 = *(undefined8 *)(param_2 + 0x10);
    local_2b0 = &PTR_FUN_149eda710;
    puVar12 = (undefined8 *)(param_2 + 0x20);
    puVar13 = local_290;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar15 = (ulonglong)*(int *)(lVar16 + 0x130);
    local_220 = (longlong *)((ulonglong)local_220 & 0xffffffffffffff00);
    local_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    memset(local_1f8,0,0x88);
    local_170 = 0x20702;
    local_16c = 0;
    local_298 = lVar16;
    if (0 < (longlong)uVar15) {
      lVar9 = uVar15 * 0x48 + -8;
      lVar11 = uVar15 * 0x14 + -4;
      do {
        local_50 = *(char *)(*(longlong *)(lVar16 + 0x150) + lVar11);
        if (local_50 == '\x01') {
          lVar10 = *(longlong *)(lVar16 + 0x150) + lVar11;
          local_168 = *(undefined1 **)(lVar10 + -0x10);
          pplStack_160 = *(longlong ***)(lVar10 + -8);
        }
        lVar10 = *(longlong *)(lVar16 + 0x128);
        if (*(longlong *)(lVar16 + 0x128) == 0) {
          lVar10 = lVar16 + 8;
        }
        local_78 = *(undefined8 *)(lVar10 + -0x10 + lVar9);
        puVar12 = (undefined8 *)(lVar10 + -0x40 + lVar9);
        local_a8 = *puVar12;
        uStack_a0 = puVar12[1];
        puVar12 = (undefined8 *)(lVar10 + -0x30 + lVar9);
        local_98 = *puVar12;
        uStack_90 = puVar12[1];
        puVar5 = (undefined4 *)(lVar10 + -0x20 + lVar9);
        local_88 = *puVar5;
        uStack_84 = puVar5[1];
        uStack_80 = puVar5[2];
        uStack_7c = puVar5[3];
        local_70 = *(longlong **)(lVar10 + -8 + lVar9);
        local_68 = *(longlong **)(lVar10 + lVar9);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
        if (local_50 != '\0') {
          local_60 = local_168;
          pplStack_58 = pplStack_160;
        }
        (**(code **)(*local_70 + 0x110))(local_70,&local_168,&local_a8,&local_2b0);
        FUN_1402c173a(&local_168,&local_70);
        FUN_1402c17c2(&local_220,&local_168);
        FUN_14493db24(&local_168);
        local_2d0 = local_2a8._4_4_;
        local_2d8 = 0;
        FUN_1402c1d72(local_2b8,lVar16,&local_220,lVar16);
        plVar3 = local_68;
        if (local_50 == '\x01') {
          local_50 = '\0';
        }
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
        if (uVar15 < 2) break;
        lVar9 = lVar9 + -0x48;
        lVar11 = lVar11 + -0x14;
        uVar15 = uVar15 - 1;
      } while ((char)local_220 == '\0');
    }
    FUN_14493db24(&local_220);
    plVar3 = local_2c0;
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_2c0)(local_2c0);
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
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_228 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar2 = (int *)((longlong)local_228 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
LAB_1469add9c:
  if ((local_48 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ae1a0 FUN_1469ae1a0 body=75 status=ok
// SIG undefined FUN_1469ae1a0(void)

uint FUN_1469ae1a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x148) + 0x100))(param_1 + -0x148);
  if (((char)uVar1 == '\0') && (*(int *)(param_1 + 0x364) == -1)) {
    lVar2 = FUN_14171dbb4();
    iVar3 = *(int *)(lVar2 + 0x18) + 1;
    *(int *)(lVar2 + 0x18) = iVar3;
    *(int *)(param_1 + 0x364) = iVar3;
  }
  return uVar1 ^ 1;
}



// FUNCTION 1469ae1ec FUN_1469ae1ec body=50 status=ok
// SIG undefined FUN_1469ae1ec(void)

void FUN_1469ae1ec(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x364) != -1) {
    lVar1 = FUN_14171dbb4();
    if (*(int *)(param_1 + 0x364) != -1) {
      *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
      *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 1469ae222 FUN_1469ae222 body=160 status=ok
// SIG undefined FUN_1469ae222(void)

undefined4 FUN_1469ae222(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14682fce0();
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"simmobile");
  if (cVar1 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"faketouches");
    if (cVar1 == '\0') {
      *(bool *)(param_1 + 0x378) = iVar2 == 2;
    }
  }
  FUN_1469b6a3e(iVar2);
  return 1;
}



// FUNCTION 1469ae2c2 FUN_1469ae2c2 body=161 status=ok
// SIG undefined FUN_1469ae2c2(void)

undefined4 FUN_1469ae2c2(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14054cb04(&local_30,param_1 + 0x68,param_2);
  if (local_30 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14698222a(local_30,CONCAT44((float)param_4,(float)param_3));
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ae364 FUN_1469ae364 body=453 status=ok
// SIG undefined FUN_1469ae364(void)

void FUN_1469ae364(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong *local_e8;
  char local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14054cb04(&local_f0,param_1 + 0x68,param_2);
  if (local_f0 == 0) goto LAB_1469ae468;
  plVar2 = *(longlong **)(param_1 + 0x270);
  if (plVar2 == (longlong *)0x0) {
LAB_1469ae463:
    FUN_14698158e(local_f0);
    goto LAB_1469ae468;
  }
  iVar7 = (int)plVar2[1];
  do {
    if (iVar7 == 0) goto LAB_1469ae463;
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar9 = iVar7 == iVar6;
    if (bVar9) {
      *(int *)(plVar2 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar9);
  lVar3 = *(longlong *)(param_1 + 0x268);
  if ((lVar3 == 0) || (plVar4 = *(longlong **)(lVar3 + 0x270), plVar4 == (longlong *)0x0)) {
LAB_1469ae4f6:
    FUN_14698158e(local_f0);
  }
  else {
    plVar5 = *(longlong **)(lVar3 + 0x268);
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    iVar7 = (int)plVar4[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar7 == 0) break;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar8 = plVar4;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    if (plVar5 == (longlong *)0x0 || plVar8 == (longlong *)0x0) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      goto LAB_1469ae4f6;
    }
    (**(code **)(*plVar5 + 0x148))(plVar5,local_e0);
    FUN_14493db24(local_e0);
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (local_e0[0] == '\0') goto LAB_1469ae4f6;
  }
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
LAB_1469ae468:
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e8 + 0x10))(local_e8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469ae52a FUN_1469ae52a body=522 status=ok
// SIG undefined FUN_1469ae52a(void)

undefined8 FUN_1469ae52a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar5 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar5 * 2);
  }
  FUN_146947332(&local_40,&local_50);
  plVar4 = local_38;
  lVar5 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
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
  FUN_14054cb04(&local_40,param_1 + 0x68,param_2);
  plVar1 = local_38;
  if (local_40 != 0 && lVar5 != 0) {
    local_60 = lVar5;
    local_58 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_70 = local_40;
    local_68 = local_38;
    if (local_38 == (longlong *)0x0) {
      FUN_1469ae736(param_1 + -0x148,&local_70,&local_60);
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      FUN_1469ae736(param_1 + -0x148,&local_70,&local_60);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    plVar1 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_58)(local_58);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ae736 FUN_1469ae736 body=647 status=ok
// SIG undefined FUN_1469ae736(void)

void FUN_1469ae736(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_1a8 [40];
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined2 local_15a;
  undefined **local_158;
  undefined2 local_150;
  undefined1 local_14e;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined7 local_f0;
  undefined4 uStack_e9;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 local_d0 [136];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined1 *)(param_1 + 0x96) = 0;
  local_178 = param_2;
  (**(code **)(*param_1 + 0x68))(param_1,local_d0);
  uVar4 = local_d0._0_8_;
  (**(code **)(*param_1 + 0x70))(param_1,local_d0);
  local_e0 = *param_3;
  local_d8 = param_3[1];
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_15a);
  plVar3 = DAT_14c966e90;
  local_110 = DAT_14c966e88;
  local_180 = DAT_14c966e80;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  plVar2 = param_1 + 0x2a;
  local_14c = (*(code *)**(undefined8 **)param_1[0xe4])();
  local_130 = (float)local_d0._0_8_;
  local_12c = SUB84(local_d0._0_8_,4);
  local_138 = (float)uVar4;
  local_128 = local_138 - local_130;
  local_134 = SUB84(uVar4,4);
  local_124 = local_134 - local_12c;
  local_150 = local_15a;
  local_14e = 0;
  local_140 = 0;
  local_158 = &PTR_FUN_149eda650;
  local_118 = local_180;
  local_108 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_100 = 10;
  local_f8 = 0x3f800000;
  local_f4 = 0;
  local_f0 = 0;
  uStack_e9 = 0;
  local_148 = local_14c;
  local_120 = plVar2;
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
  FUN_1403d061a(local_d0,&local_158,&local_e0);
  plVar3 = local_108;
  local_158 = &PTR_FUN_149eda650;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_108 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_170 = *local_178;
  local_168 = local_178[1];
  if (local_168 != 0) {
    LOCK();
    *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
    UNLOCK();
  }
  FUN_1469aee2a(param_1,&local_170,local_d0);
  FUN_1469ac82c(local_d0);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ae9be FUN_1469ae9be body=518 status=ok
// SIG undefined FUN_1469ae9be(void)

undefined8 FUN_1469ae9be(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  iVar4 = *(int *)(param_3 + 1);
  uVar5 = *param_3;
  local_48 = iVar4;
  if (iVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_140b856de(&local_50,iVar4,0);
    FUN_140b8566a(local_50,uVar5,iVar4);
  }
  FUN_14694746a(&local_40,&local_50);
  plVar7 = local_38;
  lVar6 = local_40;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  FUN_14054cb04(&local_40,param_1 + 0x68,param_2);
  plVar1 = local_38;
  if (local_40 != 0 && lVar6 != 0) {
    local_60 = lVar6;
    local_58 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_70 = local_40;
    local_68 = local_38;
    if (local_38 == (longlong *)0x0) {
      FUN_1469ae736(param_1 + -0x148,&local_70,&local_60);
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      FUN_1469ae736(param_1 + -0x148,&local_70,&local_60);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    plVar1 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_58)(local_58);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aebc6 FUN_1469aebc6 body=611 status=ok
// SIG undefined FUN_1469aebc6(void)

undefined8
FUN_1469aebc6(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Src;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  iVar4 = *(int *)(param_4 + 1);
  uVar5 = *param_4;
  local_50 = iVar4;
  if (iVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_140b856de(&local_58,iVar4,0);
    FUN_140b8566a(local_58,uVar5,iVar4);
  }
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_60;
  _Src = (void *)*param_3;
  if (lVar7 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar7 * 2);
  }
  FUN_146947586(&local_48,&local_68,&local_58);
  plVar6 = local_40;
  lVar7 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  FUN_14054cb04(&local_48,param_1 + 0x68,param_2);
  plVar1 = local_40;
  if (local_48 != 0 && lVar7 != 0) {
    local_78 = lVar7;
    local_70 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_88 = local_48;
    local_80 = local_40;
    if (local_40 == (longlong *)0x0) {
      FUN_1469ae736(param_1 + -0x148,&local_88,&local_78);
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      FUN_1469ae736(param_1 + -0x148,&local_88,&local_78);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    plVar1 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aee2a FUN_1469aee2a body=519 status=ok
// SIG undefined FUN_1469aee2a(void)

void FUN_1469aee2a(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_348 [32];
  ulonglong local_328;
  undefined4 local_320;
  undefined8 local_318;
  longlong local_310;
  undefined1 local_308;
  undefined7 uStack_307;
  longlong *local_300;
  undefined8 uStack_2f8;
  undefined1 local_2e8;
  undefined1 local_2e0 [136];
  undefined8 local_258;
  longlong local_250 [23];
  undefined1 local_198 [304];
  int local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_348;
  dVar6 = (double)(**(code **)(*param_1 + 0x60))();
  if (((double)param_1[0x6e] != dVar6) || (NAN((double)param_1[0x6e]) || NAN(dVar6))) {
    param_1[0x6e] = (longlong)dVar6;
    FUN_1402c1cc6(param_1 + 0x70,dVar6);
  }
  uVar3 = *(undefined4 *)(param_3 + 0xc);
  FUN_1401b43e8(param_1,local_250);
  local_328 = local_328 & 0xffffffffffffff00;
  local_320 = uVar3;
  (**(code **)(*param_1 + 0x108))(param_1,local_198,*(undefined8 *)(param_3 + 0x20),local_250);
  FUN_1401b439d(local_250[0]);
  if (local_250[0] != 0) {
    FUN_1400020a8();
  }
  if (0 < local_68) {
    local_308 = 1;
    local_2e8 = 0;
    local_300 = (longlong *)0x0;
    uStack_2f8 = 0;
    memset(local_2e0,0,0x88);
    local_258 = 0x20702;
    local_318 = *(undefined8 *)(param_3 + 0x78);
    local_310 = *(longlong *)(param_3 + 0x80);
    if (local_310 != 0) {
      LOCK();
      *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_1469af032(&local_308);
    FUN_1403d4c6e(local_250,uVar5);
    FUN_14493db24(&local_308);
    local_320 = 0;
    local_328 = param_3;
    FUN_1402c1d72(param_1,local_198,local_250,local_198);
    FUN_1400e2090(param_1,&local_308,*(undefined4 *)(param_3 + 0xc));
    FUN_1411d4e4a(CONCAT71(uStack_307,local_308),param_3);
    plVar4 = local_300;
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_300 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_14493db24(local_250);
  }
  FUN_1447fa21a(local_198);
  plVar4 = *(longlong **)(param_2 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469af032 FUN_1469af032 body=202 status=ok
// SIG undefined FUN_1469af032(void)

longlong FUN_1469af032(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0xa8);
    if (plVar5 == (longlong *)0x0) goto LAB_1469af0c9;
    *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_1469af091:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469af0c9;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0xa8);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0xa8) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1469af0c9;
      goto LAB_1469af091;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1469af0c9;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1469af0c9:
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1469af0fc FUN_1469af0fc body=787 status=ok
// SIG undefined FUN_1469af0fc(void)

undefined1 FUN_1469af0fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 local_118;
  undefined2 local_10a;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined7 local_a0;
  undefined4 uStack_99;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x1d0) < 1) {
    lVar8 = 0;
  }
  else {
    lVar8 = **(longlong **)(param_1 + 0x1c8);
    plVar4 = (longlong *)(*(longlong **)(param_1 + 0x1c8))[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar8 = *(longlong *)(lVar8 + 0x1e8);
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
      goto joined_r0x0001469af1a0;
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0x1e8);
joined_r0x0001469af1a0:
  if (lVar8 != 0) {
    plVar4 = (longlong *)(param_1 + -0x148);
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_108);
    fVar9 = (float)local_108;
    fVar5 = local_108._4_4_;
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_108);
    fVar10 = (float)local_108;
    fVar6 = local_108._4_4_;
    if (((((float)local_108 != fVar9) || (NAN((float)local_108) || NAN(fVar9))) ||
        (local_108._4_4_ != fVar5)) || (NAN(local_108._4_4_) || NAN(fVar5))) {
      (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_10a);
      plVar1 = DAT_14c966e90;
      local_118 = DAT_14c966e80;
      local_120 = DAT_14c966e88;
      if (DAT_14c966e90 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
        UNLOCK();
      }
      lVar8 = param_1 + 8;
      local_fc = (**(code **)**(undefined8 **)(param_1 + 0x5d8))();
      local_100 = local_10a;
      local_fe = 0;
      local_f0 = 0;
      local_108 = &PTR_FUN_149eda650;
      local_e8 = fVar9;
      local_e4 = fVar5;
      local_e0 = fVar10;
      local_dc = fVar6;
      local_d4 = fVar5 - fVar6;
      local_d8 = fVar9 - fVar10;
      local_c8 = local_118;
      local_c0 = local_120;
      local_b8 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      local_b0 = 10;
      local_a8 = 0x3f800000;
      local_a4 = 0;
      local_a0 = 0;
      uStack_99 = 0;
      local_f8 = local_fc;
      local_d0 = lVar8;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      uVar7 = FUN_14058dffc(plVar4,&local_108,0);
      plVar4 = local_b8;
      fVar10 = local_d4;
      fVar9 = local_d8;
      local_108 = &PTR_FUN_149eda650;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b8)(local_b8);
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
    else {
      uVar7 = 1;
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
    if (fVar9 * fVar9 + fVar10 * fVar10 <= 0.0) {
      uVar7 = *(undefined1 *)(param_1 + 0x368);
    }
    else {
      *(undefined1 *)(param_1 + 0x368) = uVar7;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1469af410 FUN_1469af410 body=96 status=ok
// SIG undefined FUN_1469af410(void)

void FUN_1469af410(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x1d0) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x1c8);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x1c8))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_145e0f546(uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x0001469af459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
      return;
    }
  }
  FUN_145e0f546(uVar4);
  return;
}



// FUNCTION 1469af470 FUN_1469af470 body=632 status=ok
// SIG undefined FUN_1469af470(void)

undefined1 FUN_1469af470(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined2 local_c2;
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined7 local_58;
  undefined4 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1d0) < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = **(longlong **)(param_1 + 0x1c8);
    plVar4 = (longlong *)(*(longlong **)(param_1 + 0x1c8))[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar6 = *(longlong *)(lVar6 + 0x1e8);
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
      goto joined_r0x0001469af4f2;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x1e8);
joined_r0x0001469af4f2:
  if (lVar6 != 0) {
    lVar6 = param_1 + -0x148;
    (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_c2);
    plVar4 = DAT_14c966ea8;
    local_e0 = DAT_14c966e98;
    local_e8 = DAT_14c966ea0;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    lVar3 = param_1 + 8;
    (**(code **)(*(longlong *)(param_1 + -0x148) + 0x70))(lVar6,&local_cc);
    (**(code **)(*(longlong *)(param_1 + -0x148) + 0x68))(lVar6,&local_d4);
    local_b4 = (**(code **)**(undefined8 **)(param_1 + 0x5d8))();
    local_90 = local_d4 - local_cc;
    local_8c = local_d0 - local_c8;
    local_b8 = local_c2;
    local_b6 = 0;
    local_a8 = 0;
    local_c0 = &PTR_FUN_149eda650;
    local_a0 = local_d4;
    local_9c = local_d0;
    local_98 = local_cc;
    local_94 = local_c8;
    local_80 = local_e0;
    local_78 = local_e8;
    local_70 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_68 = 10;
    local_60 = 0x3f800000;
    local_5c = 0;
    local_58 = 0;
    uStack_51 = 0;
    local_b0 = local_b4;
    local_88 = lVar3;
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
    uVar5 = FUN_140e6b9a2(lVar6,&local_c0);
    plVar4 = local_70;
    local_c0 = &PTR_FUN_149eda650;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
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
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1469af6ea FUN_1469af6ea body=131 status=ok
// SIG undefined FUN_1469af6ea(void)

bool FUN_1469af6ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(longlong **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      lVar4 = *(longlong *)(lVar4 + 0x1e8);
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
      goto LAB_1469af760;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x1e8);
LAB_1469af760:
  return lVar4 != 0;
}



// FUNCTION 1469af76e FUN_1469af76e body=159 status=ok
// SIG undefined FUN_1469af76e(void)

undefined8 * FUN_1469af76e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  bVar3 = true;
  if (*(int *)(param_1 + 0x318) < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x310);
    plVar5 = (longlong *)(*(longlong **)(param_1 + 0x310))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
      bVar3 = false;
      goto LAB_1469af7c3;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1469af7c3:
  *param_2 = *(undefined8 *)(lVar4 + 0x1e8);
  lVar4 = *(longlong *)(lVar4 + 0x1f0);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (!bVar3) {
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



// FUNCTION 1469af80e FUN_1469af80e body=96 status=ok
// SIG undefined FUN_1469af80e(void)

void FUN_1469af80e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x318) < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(param_1 + 0x310);
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x310))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      FUN_1469b781a(uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x0001469af857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
      return;
    }
  }
  FUN_1469b781a(uVar4);
  return;
}



// FUNCTION 1469af86e FUN_1469af86e body=130 status=ok
// SIG undefined FUN_1469af86e(void)

void FUN_1469af86e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456d4c80(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1469b6c7a(param_1,param_2,iVar1 - param_2);
    FUN_1469b6cd4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1469af8f2 FUN_1469af8f2 body=130 status=ok
// SIG undefined FUN_1469af8f2(void)

int FUN_1469af8f2(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456d4c80(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 1469af9c4 FUN_1469af9c4 body=54 status=ok
// SIG undefined FUN_1469af9c4(void)

longlong FUN_1469af9c4(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1469afa3e FUN_1469afa3e body=72 status=ok
// SIG undefined FUN_1469afa3e(void)

undefined8 * FUN_1469afa3e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149ef9ec0;
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1469b6f0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469afa8a FUN_1469afa8a body=23 status=ok
// SIG undefined FUN_1469afa8a(void)

undefined8 FUN_1469afa8a(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))();
  return param_2;
}



// FUNCTION 1469afaa2 FUN_1469afaa2 body=38 status=ok
// SIG undefined FUN_1469afaa2(void)

undefined8 FUN_1469afaa2(undefined8 param_1,int param_2)

{
  FUN_1469b6f0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469afad6 FUN_1469afad6 body=72 status=ok
// SIG undefined FUN_1469afad6(void)

undefined8 * FUN_1469afad6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149ef9f40;
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1469b6f0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469afb2c FUN_1469afb2c body=38 status=ok
// SIG undefined FUN_1469afb2c(void)

undefined8 FUN_1469afb2c(undefined8 param_1,int param_2)

{
  FUN_145e10c7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469afb5e FUN_1469afb5e body=272 status=ok
// SIG undefined FUN_1469afb5e(void)

ulonglong FUN_1469afb5e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_1401b43e8(param_1,&local_60);
  cVar4 = FUN_1407c4db4(&local_60,&local_50,param_3,param_4);
  FUN_1401b439d(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar4 == '\0') {
    local_70 = *param_2;
    local_68 = param_2[1];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    uVar5 = FUN_1407c4db4(param_1 + 0x1c0,&local_70,param_3,param_4);
    uVar6 = (ulonglong)uVar5;
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469afc70 FUN_1469afc70 body=81 status=ok
// SIG undefined FUN_1469afc70(void)

undefined8 * FUN_1469afc70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x1b8);
  uVar2 = *(undefined8 *)(param_1 + 0x1b0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1401b4740(param_2,iVar1);
    FUN_1401b4712(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1469afcea FUN_1469afcea body=48 status=ok
// SIG undefined FUN_1469afcea(void)

longlong FUN_1469afcea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x148;
  FUN_145e0ff26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469afd9a FUN_1469afd9a body=59 status=ok
// SIG undefined FUN_1469afd9a(void)

undefined8 FUN_1469afd9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469afea8 FUN_1469afea8 body=59 status=ok
// SIG undefined FUN_1469afea8(void)

undefined8 FUN_1469afea8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469aff7e FUN_1469aff7e body=54 status=ok
// SIG undefined FUN_1469aff7e(void)

undefined1 FUN_1469aff7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469b0096(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1469affdc FUN_1469affdc body=59 status=ok
// SIG undefined FUN_1469affdc(void)

undefined8 FUN_1469affdc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b0022 FUN_1469b0022 body=37 status=ok
// SIG undefined FUN_1469b0022(void)

void FUN_1469b0022(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1469b0096 FUN_1469b0096 body=88 status=ok
// SIG undefined FUN_1469b0096(void)

undefined8 * FUN_1469b0096(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1469b00ee(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1469b00ee FUN_1469b00ee body=98 status=ok
// SIG undefined FUN_1469b00ee(void)

void FUN_1469b00ee(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,2);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1469b01b6 FUN_1469b01b6 body=59 status=ok
// SIG undefined FUN_1469b01b6(void)

undefined8 FUN_1469b01b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b02ce FUN_1469b02ce body=59 status=ok
// SIG undefined FUN_1469b02ce(void)

undefined8 FUN_1469b02ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b03dc FUN_1469b03dc body=59 status=ok
// SIG undefined FUN_1469b03dc(void)

undefined8 FUN_1469b03dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b04ea FUN_1469b04ea body=59 status=ok
// SIG undefined FUN_1469b04ea(void)

undefined8 FUN_1469b04ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b05c0 FUN_1469b05c0 body=54 status=ok
// SIG undefined FUN_1469b05c0(void)

undefined1 FUN_1469b05c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1469b061e FUN_1469b061e body=59 status=ok
// SIG undefined FUN_1469b061e(void)

undefined8 FUN_1469b061e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b0664 FUN_1469b0664 body=37 status=ok
// SIG undefined FUN_1469b0664(void)

void FUN_1469b0664(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1469b06da FUN_1469b06da body=37 status=ok
// SIG undefined FUN_1469b06da(void)

void FUN_1469b06da(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a0);
  FUN_1469b0850(param_2);
  return;
}



// FUNCTION 1469b0726 FUN_1469b0726 body=63 status=ok
// SIG undefined FUN_1469b0726(void)

undefined1 FUN_1469b0726(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469b0b86(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1469b078e FUN_1469b078e body=59 status=ok
// SIG undefined FUN_1469b078e(void)

undefined8 FUN_1469b078e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b07da FUN_1469b07da body=40 status=ok
// SIG undefined FUN_1469b07da(void)

void FUN_1469b07da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_1469b09a2(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1469b0850 FUN_1469b0850 body=119 status=ok
// SIG undefined FUN_1469b0850(void)

undefined8 * FUN_1469b0850(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1461b9e58(param_1 + 0x17);
  return param_1;
}



// FUNCTION 1469b08c8 FUN_1469b08c8 body=38 status=ok
// SIG undefined FUN_1469b08c8(void)

undefined8 FUN_1469b08c8(undefined8 param_1,int param_2)

{
  FUN_1469b08ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b08ee FUN_1469b08ee body=179 status=ok
// SIG undefined FUN_1469b08ee(void)

void FUN_1469b08ee(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149efdd80;
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc242(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc242(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b0995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1469b09a2 FUN_1469b09a2 body=116 status=ok
// SIG undefined FUN_1469b09a2(void)

void FUN_1469b09a2(longlong param_1)

{
  FUN_1469b08ee(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1469b0a16(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1469b0ace(param_1 + 8);
  return;
}



// FUNCTION 1469b0a16 FUN_1469b0a16 body=54 status=ok
// SIG undefined FUN_1469b0a16(void)

void FUN_1469b0a16(longlong *param_1)

{
  FUN_1469b0a4c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469b0a4c FUN_1469b0a4c body=128 status=ok
// SIG undefined FUN_1469b0a4c(void)

void FUN_1469b0a4c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1469b0ace FUN_1469b0ace body=54 status=ok
// SIG undefined FUN_1469b0ace(void)

void FUN_1469b0ace(longlong *param_1)

{
  FUN_1469b0b04(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469b0b04 FUN_1469b0b04 body=128 status=ok
// SIG undefined FUN_1469b0b04(void)

void FUN_1469b0b04(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1469b0b86 FUN_1469b0b86 body=91 status=ok
// SIG undefined FUN_1469b0b86(void)

undefined8 * FUN_1469b0b86(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1469b0c46(param_1 + 1,param_2 + 1);
  FUN_1469b0d3a(param_1 + 0xb,param_2 + 0xb);
  FUN_1406fa324(param_1 + 0x15,param_2 + 0x15);
  FUN_1469b0be2(param_1 + 0x17,param_2 + 0x17);
  return param_1;
}



// FUNCTION 1469b0be2 FUN_1469b0be2 body=99 status=ok
// SIG undefined FUN_1469b0be2(void)

longlong FUN_1469b0be2(longlong param_1,longlong param_2)

{
  FUN_1469b0e2e(param_1 + 0x18,param_2 + 0x18);
  FUN_1469b0e2e(param_1 + 0x68,param_2 + 0x68);
  FUN_1406fa324(param_1 + 0xb8,param_2 + 0xb8);
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 200,param_2 + 200);
  }
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  return param_1;
}



// FUNCTION 1469b0c46 FUN_1469b0c46 body=122 status=ok
// SIG undefined FUN_1469b0c46(void)

longlong FUN_1469b0c46(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1469b0cc0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1469b0cc0 FUN_1469b0cc0 body=121 status=ok
// SIG undefined FUN_1469b0cc0(void)

undefined8 * FUN_1469b0cc0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1469b0b04(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 1469b0d3a FUN_1469b0d3a body=122 status=ok
// SIG undefined FUN_1469b0d3a(void)

longlong FUN_1469b0d3a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1469b0db4(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1469b0db4 FUN_1469b0db4 body=121 status=ok
// SIG undefined FUN_1469b0db4(void)

undefined8 * FUN_1469b0db4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1469b0a4c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 1469b0e2e FUN_1469b0e2e body=122 status=ok
// SIG undefined FUN_1469b0e2e(void)

longlong FUN_1469b0e2e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1469b0ea8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1469b0ea8 FUN_1469b0ea8 body=202 status=ok
// SIG undefined FUN_1469b0ea8(void)

undefined8 * FUN_1469b0ea8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1401fc9ae(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1469b0f72(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1469b0f72 FUN_1469b0f72 body=114 status=ok
// SIG undefined FUN_1469b0f72(void)

undefined8 * FUN_1469b0f72(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1469b0fe6 FUN_1469b0fe6 body=108 status=ok
// SIG undefined FUN_1469b0fe6(void)

void FUN_1469b0fe6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x200);
  FUN_1469b0850(param_2);
  *(undefined8 *)((longlong)param_2 + 0x1c0) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1e0) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f8) = 0;
  return;
}



// FUNCTION 1469b1052 FUN_1469b1052 body=90 status=ok
// SIG undefined FUN_1469b1052(void)

void FUN_1469b1052(undefined8 param_1,longlong param_2)

{
  FUN_1469b0850(param_2);
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined4 *)(param_2 + 0x1c8) = 0;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)(param_2 + 0x1d4) = 0;
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  *(undefined4 *)(param_2 + 0x1e8) = 0;
  *(undefined8 *)(param_2 + 0x1f0) = 0;
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  return;
}



// FUNCTION 1469b10ca FUN_1469b10ca body=126 status=ok
// SIG undefined FUN_1469b10ca(void)

undefined1 FUN_1469b10ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469b0b86(param_2,param_3);
    FUN_1469b141c(param_2 + 0x1a0,param_3 + 0x1a0);
    FUN_1406fa324(param_2 + 0x1f0,param_3 + 0x1f0);
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
  }
  return 1;
}



// FUNCTION 1469b1170 FUN_1469b1170 body=59 status=ok
// SIG undefined FUN_1469b1170(void)

undefined8 FUN_1469b1170(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b11bc FUN_1469b11bc body=40 status=ok
// SIG undefined FUN_1469b11bc(void)

void FUN_1469b11bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_1469b1232(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 1469b1232 FUN_1469b1232 body=77 status=ok
// SIG undefined FUN_1469b1232(void)

void FUN_1469b1232(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  FUN_1469b1280(param_1 + 0x1a0);
  FUN_1469b09a2(param_1);
  return;
}



// FUNCTION 1469b1280 FUN_1469b1280 body=54 status=ok
// SIG undefined FUN_1469b1280(void)

void FUN_1469b1280(longlong *param_1)

{
  FUN_1469b12b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469b12b6 FUN_1469b12b6 body=356 status=ok
// SIG undefined FUN_1469b12b6(void)

void FUN_1469b12b6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1469b141c FUN_1469b141c body=122 status=ok
// SIG undefined FUN_1469b141c(void)

longlong FUN_1469b141c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1469b1496(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1469b1496 FUN_1469b1496 body=201 status=ok
// SIG undefined FUN_1469b1496(void)

undefined8 * FUN_1469b1496(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1469b12b6(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1469b1560(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1469b1560 FUN_1469b1560 body=114 status=ok
// SIG undefined FUN_1469b1560(void)

undefined8 * FUN_1469b1560(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1469b15d4 FUN_1469b15d4 body=176 status=ok
// SIG undefined FUN_1469b15d4(void)

void FUN_1469b15d4(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&local_48);
  local_30 = local_48;
  uStack_28 = plStack_40;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_145901a74(param_1);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b1686 FUN_1469b1686 body=230 status=ok
// SIG undefined FUN_1469b1686(void)

undefined8 * FUN_1469b1686(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1469b176e FUN_1469b176e body=313 status=ok
// SIG undefined FUN_1469b176e(void)

longlong * FUN_1469b176e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469b186a:
    *puVar5 = &PTR_LAB_149efe120;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149efcdc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_1469b186a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149efe120;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149efcdc0;
    puVar5[3] = uVar10;
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



// FUNCTION 1469b18a8 FUN_1469b18a8 body=64 status=ok
// SIG undefined FUN_1469b18a8(void)

undefined8 * FUN_1469b18a8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149efcdc0;
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



// FUNCTION 1469b18ec FUN_1469b18ec body=81 status=ok
// SIG undefined FUN_1469b18ec(void)

undefined8 FUN_1469b18ec(longlong param_1)

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



// FUNCTION 1469b1944 FUN_1469b1944 body=89 status=ok
// SIG undefined FUN_1469b1944(void)

bool FUN_1469b1944(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469b198f;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469b198f:
  return lVar6 == param_2;
}



// FUNCTION 1469b19c6 FUN_1469b19c6 body=118 status=ok
// SIG undefined FUN_1469b19c6(void)

void FUN_1469b19c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efe120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efcdc0;
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



// FUNCTION 1469b1a3c FUN_1469b1a3c body=118 status=ok
// SIG undefined FUN_1469b1a3c(void)

void FUN_1469b1a3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efe120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efcdc0;
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



// FUNCTION 1469b1ab2 FUN_1469b1ab2 body=156 status=ok
// SIG undefined FUN_1469b1ab2(void)

void FUN_1469b1ab2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149efe120;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efcdc0;
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
                    /* WARNING: Could not recover jumptable at 0x0001469b1b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469b1b4e FUN_1469b1b4e body=230 status=ok
// SIG undefined FUN_1469b1b4e(void)

void FUN_1469b1b4e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1469b1b97;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_1469b1b97:
  iVar6 = *(int *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar8 + iVar6,&local_30);
  if (!bVar4) {
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
  plVar7 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469b1c36 FUN_1469b1c36 body=253 status=ok
// SIG undefined FUN_1469b1c36(void)

ulonglong FUN_1469b1c36(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469b1ceb;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x30);
      pcVar5 = *(code **)(param_1 + 0x28);
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar7,&local_30);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_1469b1ced;
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
LAB_1469b1ceb:
  uVar8 = 0;
LAB_1469b1ced:
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469b1d36 FUN_1469b1d36 body=131 status=ok
// SIG undefined FUN_1469b1d36(void)

void FUN_1469b1d36(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x70);
  if ((uint)param_3 < 8) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x70,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x70),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x70,param_2,param_3,0x10);
  return;
}



// FUNCTION 1469b1dba FUN_1469b1dba body=100 status=ok
// SIG undefined FUN_1469b1dba(void)

void FUN_1469b1dba(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001469b1e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b1e1e FUN_1469b1e1e body=37 status=ok
// SIG undefined FUN_1469b1e1e(void)

void FUN_1469b1e1e(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_1428f591a(param_1);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 1469b1e44 FUN_1469b1e44 body=38 status=ok
// SIG undefined FUN_1469b1e44(void)

undefined8 FUN_1469b1e44(undefined8 param_1,int param_2)

{
  FUN_1469ac82c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b1e6a FUN_1469b1e6a body=428 status=ok
// SIG undefined FUN_1469b1e6a(void)

undefined8 * FUN_1469b1e6a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  wchar_t *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = (longlong *)*param_2;
  param_1[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[1];
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_144a5dc74(param_1 + 7);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x400000003f000000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x86) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0x43a00000;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  *(undefined2 *)(param_1 + 0x12) = 0x100;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_144a5dc74(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_60 = L"DefaultHyperlinkText";
  local_58 = 0x14;
  FUN_1446e940c(local_64,&local_60);
  local_60 = L"EditorNotification";
  local_58 = 0x12;
  FUN_1446e940c(local_68,&local_60);
  FUN_140208bae(&local_60,local_68,local_64,L"Show Log");
  FUN_14023423e(param_1 + 0x1e,&local_60);
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if (local_60 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_60 + 0x10))();
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b2018 FUN_1469b2018 body=273 status=ok
// SIG undefined FUN_1469b2018(void)

void FUN_1469b2018(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x120);
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
  FUN_1449db362(param_1 + 0x108);
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))();
  }
  FUN_1449db362(param_1 + 0xe0);
  FUN_1449db362(param_1 + 0xd0);
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
  }
  FUN_1449db362(param_1 + 0xa8);
  FUN_1449db362(param_1 + 0x98);
  FUN_1469b2129(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x0001469b211d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b2129 FUN_1469b2129 body=41 status=ok
// SIG undefined FUN_1469b2129(void)

void FUN_1469b2129(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1469b2152(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1469b2152 FUN_1469b2152 body=95 status=ok
// SIG undefined FUN_1469b2152(void)

void FUN_1469b2152(longlong *param_1)

{
  FUN_1449db362(param_1 + 0xe);
  FUN_1449db362(param_1 + 0xc);
  FUN_1449db362(param_1 + 10);
  FUN_1449db362(param_1 + 8);
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  FUN_1449db362(param_1 + 3);
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b21a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1469b21b1 FUN_1469b21b1 body=56 status=ok
// SIG undefined FUN_1469b21b1(void)

void FUN_1469b21b1(longlong param_1,int param_2)

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



// FUNCTION 1469b21ea FUN_1469b21ea body=31 status=ok
// SIG undefined FUN_1469b21ea(void)

undefined8 FUN_1469b21ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b2226 FUN_1469b2226 body=93 status=ok
// SIG undefined FUN_1469b2226(void)

void FUN_1469b2226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efce50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469b2284 FUN_1469b2284 body=126 status=ok
// SIG undefined FUN_1469b2284(void)

void FUN_1469b2284(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efce50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b22f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469b2310 FUN_1469b2310 body=269 status=ok
// SIG undefined FUN_1469b2310(void)

void FUN_1469b2310(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar9), plVar4 != (longlong *)0x0))) {
        local_48 = *param_2;
        local_40 = param_2[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
        if (cVar6 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar5 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_1469b23c5;
          goto LAB_1469b23d4;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1469b23c5:
    FUN_14474d06a(param_1,0);
  }
LAB_1469b23d4:
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b241e FUN_1469b241e body=24 status=ok
// SIG undefined FUN_1469b241e(void)

void FUN_1469b241e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b2432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1469b2436 FUN_1469b2436 body=29 status=ok
// SIG undefined FUN_1469b2436(void)

undefined8 FUN_1469b2436(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b2454 FUN_1469b2454 body=29 status=ok
// SIG undefined FUN_1469b2454(void)

undefined8 FUN_1469b2454(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b248e FUN_1469b248e body=93 status=ok
// SIG undefined FUN_1469b248e(void)

void FUN_1469b248e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efe120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efcee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469b24ec FUN_1469b24ec body=93 status=ok
// SIG undefined FUN_1469b24ec(void)

void FUN_1469b24ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efe120;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efcee0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469b254a FUN_1469b254a body=126 status=ok
// SIG undefined FUN_1469b254a(void)

void FUN_1469b254a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149efe120;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efcee0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b25b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469b25c8 FUN_1469b25c8 body=133 status=ok
// SIG undefined FUN_1469b25c8(void)

void FUN_1469b25c8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar3,&local_20);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b264e FUN_1469b264e body=135 status=ok
// SIG undefined FUN_1469b264e(void)

undefined8 FUN_1469b264e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar3,&local_20);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b26d6 FUN_1469b26d6 body=63 status=ok
// SIG undefined FUN_1469b26d6(void)

undefined8 * FUN_1469b26d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b2716 FUN_1469b2716 body=24 status=ok
// SIG undefined FUN_1469b2716(void)

void FUN_1469b2716(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b272a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1469b272e FUN_1469b272e body=29 status=ok
// SIG undefined FUN_1469b272e(void)

undefined8 FUN_1469b272e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b274c FUN_1469b274c body=24 status=ok
// SIG undefined FUN_1469b274c(void)

void FUN_1469b274c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b2760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1469b2764 FUN_1469b2764 body=29 status=ok
// SIG undefined FUN_1469b2764(void)

undefined8 FUN_1469b2764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b2782 FUN_1469b2782 body=132 status=ok
// SIG undefined FUN_1469b2782(void)

void FUN_1469b2782(longlong param_1,int param_2)

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



// FUNCTION 1469b2808 FUN_1469b2808 body=402 status=ok
// SIG undefined FUN_1469b2808(void)

undefined4 * FUN_1469b2808(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1469b299c(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_40 = *puVar3;
  local_40[1] = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  local_40[2] = *puVar4;
  local_40[3] = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = *local_40;
  plVar5 = (longlong *)local_40[1];
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
  uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar7 = FUN_1469b2a82(param_1,uVar8,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1469b2cca(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b299c FUN_1469b299c body=230 status=ok
// SIG undefined FUN_1469b299c(void)

int * FUN_1469b299c(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1469b2a82 FUN_1469b2a82 body=240 status=ok
// SIG undefined FUN_1469b2a82(void)

undefined8 FUN_1469b2a82(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
      iVar12 = FUN_1469b2b74(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_1469b2b74(param_1);
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
      FUN_1469b1dba(puVar3);
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
      FUN_1469b2c58(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_1469b2aa8;
    }
  }
  uVar13 = 0;
LAB_1469b2aa8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b2b74 FUN_1469b2b74 body=228 status=ok
// SIG undefined FUN_1469b2b74(void)

int FUN_1469b2b74(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 1469b2c58 FUN_1469b2c58 body=114 status=ok
// SIG undefined FUN_1469b2c58(void)

void FUN_1469b2c58(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1469b2cca FUN_1469b2cca body=527 status=ok
// SIG undefined FUN_1469b2cca(void)

void FUN_1469b2cca(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
        if (plVar7 != (longlong *)0x0) {
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
        }
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469b2eda FUN_1469b2eda body=391 status=ok
// SIG undefined FUN_1469b2eda(void)

void FUN_1469b2eda(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar9 = (ulonglong *)((longlong)iVar6 * 0x28 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar9;
        plVar4 = (longlong *)puVar9[1];
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
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
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
        if (uVar3 == uVar8) {
          FUN_1469b3062(param_1,(int)*puVar10);
          break;
        }
        iVar6 = (int)puVar9[4];
        puVar10 = puVar9 + 4;
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001469b2f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b3062 FUN_1469b3062 body=117 status=ok
// SIG undefined FUN_1469b3062(void)

void FUN_1469b3062(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1469b1dba((longlong)param_2 * 0x28 + *param_1);
  FUN_1469b2c58(param_1,param_2);
  return;
}



// FUNCTION 1469b30d8 FUN_1469b30d8 body=118 status=ok
// SIG undefined FUN_1469b30d8(void)

void FUN_1469b30d8(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1469b314e FUN_1469b314e body=62 status=ok
// SIG undefined FUN_1469b314e(void)

void FUN_1469b314e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469b318c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1469b318c FUN_1469b318c body=93 status=ok
// SIG undefined FUN_1469b318c(void)

ulonglong FUN_1469b318c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1469b31ea FUN_1469b31ea body=351 status=ok
// SIG undefined FUN_1469b31ea(void)

undefined8 * FUN_1469b31ea(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x218);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149efcf90;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x208);
  FUN_140a539ac(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_149efcfb0;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1469b3398(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1469b32dc;
    param_1[1] = 0;
LAB_1469b32a6:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1469b32dc;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1469b32dc;
      goto LAB_1469b32a6;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469b32dc;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1469b32dc:
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
  local_38 = 0x208;
  FUN_140a52e78(*param_1,"SMenuPanel",".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp"
                ,0x2a6);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b334a FUN_1469b334a body=9 status=ok
// SIG undefined FUN_1469b334a(void)

void FUN_1469b334a(longlong param_1)

{
  FUN_140a58a56(param_1 + 0x10);
  return;
}



// FUNCTION 1469b3354 FUN_1469b3354 body=29 status=ok
// SIG undefined FUN_1469b3354(void)

undefined8 FUN_1469b3354(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b3372 FUN_1469b3372 body=38 status=ok
// SIG undefined FUN_1469b3372(void)

undefined8 FUN_1469b3372(undefined8 param_1,int param_2)

{
  FUN_140a58a56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b3398 FUN_1469b3398 body=167 status=ok
// SIG undefined FUN_1469b3398(void)

void FUN_1469b3398(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1469b3413;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1469b3413;
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
LAB_1469b3413:
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
                    /* WARNING: Could not recover jumptable at 0x0001469b3433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469b3440 FUN_1469b3440 body=164 status=ok
// SIG undefined FUN_1469b3440(void)

void FUN_1469b3440(longlong *param_1,undefined8 param_2)

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
        goto LAB_1469b34c0;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1469b34c0:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1469b34e4 FUN_1469b34e4 body=386 status=ok
// SIG undefined FUN_1469b34e4(void)

undefined8 * FUN_1469b34e4(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x298);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149efd1f0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x288);
  FUN_140a55f88(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_149efd210;
  plVar3[0x4f] = 0;
  *(undefined4 *)(plVar3 + 0x50) = 0;
  plVar3[0x51] = 0;
  *(undefined4 *)(plVar3 + 0x52) = 0;
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_1469b388c(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1469b35f7;
    param_1[1] = 0;
LAB_1469b35c1:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1469b35f7;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1469b35f7;
      goto LAB_1469b35c1;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469b35f7;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1469b35f7:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x288;
  FUN_140a52e78(*param_1,"MenuStackInternal::SMenuContentWrapper",
                ".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",0x2fe);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b3668 FUN_1469b3668 body=88 status=ok
// SIG undefined FUN_1469b3668(void)

void FUN_1469b3668(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149efd210;
  FUN_1449db362(param_1 + 0x288);
  FUN_1449db362(param_1 + 0x278);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 1469b36c0 FUN_1469b36c0 body=29 status=ok
// SIG undefined FUN_1469b36c0(void)

undefined8 FUN_1469b36c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b36de FUN_1469b36de body=97 status=ok
// SIG undefined FUN_1469b36de(void)

undefined8 * FUN_1469b36de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149efd210;
  FUN_1449db362(param_1 + 0x4f);
  FUN_1449db362(param_1 + 0x4d);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b3740 FUN_1469b3740 body=111 status=ok
// SIG undefined FUN_1469b3740(void)

void FUN_1469b3740(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar1 != '\0') {
      cVar1 = FUN_14497f9ca(param_2,param_1);
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x280) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x278);
        }
                    /* WARNING: Could not recover jumptable at 0x0001469b379f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469b37b0 FUN_1469b37b0 body=214 status=ok
// SIG undefined FUN_1469b37b0(void)

undefined1 * FUN_1469b37b0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))();
    if (cVar1 != '\0') {
      local_38 = *(undefined8 *)(param_4 + 0x20);
      local_30 = *(undefined8 *)(param_4 + 0x28);
      local_28 = *(longlong *)(param_4 + 0x30);
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x270) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x268);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      goto LAB_1469b3861;
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1469b3861:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b388c FUN_1469b388c body=167 status=ok
// SIG undefined FUN_1469b388c(void)

void FUN_1469b388c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1469b3907;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1469b3907;
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
LAB_1469b3907:
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
                    /* WARNING: Could not recover jumptable at 0x0001469b3927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469b3934 FUN_1469b3934 body=29 status=ok
// SIG undefined FUN_1469b3934(void)

undefined8 FUN_1469b3934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b3974 FUN_1469b3974 body=93 status=ok
// SIG undefined FUN_1469b3974(void)

void FUN_1469b3974(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efd4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1469b39d2 FUN_1469b39d2 body=93 status=ok
// SIG undefined FUN_1469b39d2(void)

void FUN_1469b39d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efd4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1469b3a30 FUN_1469b3a30 body=126 status=ok
// SIG undefined FUN_1469b3a30(void)

void FUN_1469b3a30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149efd4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efd450;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b3a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469b3aae FUN_1469b3aae body=141 status=ok
// SIG undefined FUN_1469b3aae(void)

undefined8 FUN_1469b3aae(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_30 = *param_3;
  local_28 = param_3[1];
  local_20 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  (*pcVar3)(param_2);
  plVar4 = (longlong *)param_3[2];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b3b3c FUN_1469b3b3c body=161 status=ok
// SIG undefined FUN_1469b3b3c(void)

undefined8 FUN_1469b3b3c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pcVar3 = *(code **)(param_1 + 0x18);
  local_e8 = *param_2;
  local_e0 = param_2[1];
  local_d8 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  (*pcVar3)(local_d0);
  FUN_14493db24(local_d0);
  plVar4 = (longlong *)param_2[2];
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
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b3be0 FUN_1469b3be0 body=29 status=ok
// SIG undefined FUN_1469b3be0(void)

undefined8 FUN_1469b3be0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469b3c26 FUN_1469b3c26 body=93 status=ok
// SIG undefined FUN_1469b3c26(void)

void FUN_1469b3c26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efd5a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469b3c84 FUN_1469b3c84 body=93 status=ok
// SIG undefined FUN_1469b3c84(void)

void FUN_1469b3c84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efd5a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469b3ce2 FUN_1469b3ce2 body=126 status=ok
// SIG undefined FUN_1469b3ce2(void)

void FUN_1469b3ce2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149efd5a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efd530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469b3d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469b3d6e FUN_1469b3d6e body=21 status=ok
// SIG undefined FUN_1469b3d6e(void)

undefined8 FUN_1469b3d6e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1469b3d86 FUN_1469b3d86 body=3498 status=ok
// SIG undefined FUN_1469b3d86(void)

void FUN_1469b3d86(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_d48 [32];
  undefined1 *local_d28;
  undefined8 local_d20;
  undefined4 local_d10;
  undefined1 local_d0c;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined4 local_cf8;
  undefined1 local_cf4;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined4 local_cd8;
  undefined4 uStack_cd4;
  undefined4 uStack_cd0;
  undefined4 uStack_ccc;
  undefined4 local_cc8;
  undefined1 local_cc4;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined8 local_cb0;
  undefined1 local_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined1 local_c89;
  undefined1 local_c88 [8];
  longlong *local_c80;
  undefined1 local_c69;
  undefined8 local_c68;
  undefined4 local_c5c;
  undefined4 uStack_c58;
  undefined4 uStack_c54;
  undefined4 uStack_c50;
  undefined4 local_c4c;
  undefined4 local_c48;
  undefined4 uStack_c44;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  undefined4 local_c38;
  undefined1 local_c34;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined1 local_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  longlong *local_bf8;
  undefined8 local_bf0;
  longlong *local_be8;
  undefined1 local_bd9;
  undefined1 local_bd8 [8];
  longlong *local_bd0;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined1 local_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  longlong *local_b90;
  undefined8 local_b88;
  longlong *local_b80;
  undefined1 local_b71;
  undefined8 local_b70;
  longlong *local_b68;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined1 local_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  longlong *local_b28;
  undefined8 local_b20;
  longlong *local_b18;
  undefined1 local_b10 [8];
  longlong *local_b08;
  undefined1 local_b00 [24];
  undefined8 local_ae8;
  longlong *plStack_ae0;
  undefined1 local_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined1 local_ac0 [8];
  longlong *local_ab8;
  undefined4 local_a68;
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined4 local_a58;
  undefined1 local_a10 [8];
  longlong *local_a08;
  undefined1 local_9b8 [424];
  undefined8 local_810;
  longlong *local_808;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined1 local_7e8;
  undefined1 local_7e0 [8];
  longlong *local_7d8;
  undefined4 local_7a0;
  undefined1 local_79c;
  undefined1 local_798 [8];
  undefined8 local_790;
  undefined1 local_788;
  undefined1 local_780 [40];
  undefined4 local_758;
  undefined1 local_754;
  undefined1 local_750 [128];
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 local_6c0;
  undefined1 local_6bc;
  undefined1 local_6b8 [48];
  undefined8 local_688;
  longlong *local_680;
  undefined8 local_4e0;
  undefined1 local_4d8;
  undefined1 local_4d0 [128];
  undefined8 local_450;
  longlong *local_448;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined1 local_298 [128];
  undefined8 local_218;
  longlong *plStack_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d48;
  FUN_1469b4b32(*(longlong *)(param_2 + 0x1a8) + 0x39,local_b00);
  FUN_14020e622(param_1,local_b00);
  FUN_1469b4b8c(param_1 + 0x268,param_2 + 0x1b8);
  FUN_1469b4c10(param_1 + 0x278,param_2 + 0x1c8);
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_140a504fe(&local_218);
    FUN_140a4fdf2(local_a10,0);
    FUN_140a53334(&local_450);
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_b58,"Menu.Background",1);
    local_b50 = (**(code **)(*plVar4 + 0x50))(plVar4,local_b58,0,0);
    local_b48 = 1;
    local_b40 = 0;
    uStack_b38 = 0;
    local_2a0 = 1;
    local_2a8 = local_b50;
    FUN_144a450dc(local_298,&local_b40);
    FUN_1449db362(&local_b40);
    local_d28 = &local_b71;
    FUN_140a554b8(&local_b70,"SImage",".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp"
                  ,0x70);
    FUN_140a52c70(&local_b70,&local_b30,&local_450);
    local_b20 = local_b30;
    local_b18 = local_b28;
    if (local_b28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b28 + 1) = (int)local_b28[1] + 1;
      UNLOCK();
    }
    uVar5 = FUN_140a4fd40(local_a10,&local_b20);
    uVar5 = FUN_140a5058c(&local_218,uVar5);
    FUN_140a4fdf2(&local_a68,0);
    FUN_140a53334(&local_688);
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    uVar6 = FUN_141319416();
    FUN_1446ddc76(&local_bc0,"Menu.Outline",1);
    local_bb8 = (**(code **)(*plVar4 + 0x58))(plVar4,local_bc0,0,uVar6);
    local_bb0 = 1;
    local_ba8 = 0;
    uStack_ba0 = 0;
    local_4d8 = 1;
    local_4e0 = local_bb8;
    FUN_144a450dc(local_4d0,&local_ba8);
    FUN_1449db362(&local_ba8);
    local_d28 = &local_bd9;
    FUN_140a554b8(local_bd8,"SImage",".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",
                  0x75);
    FUN_140a52c70(local_bd8,&local_b98,&local_688);
    local_b88 = local_b98;
    local_b80 = local_b90;
    if (local_b90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b90 + 1) = (int)local_b90[1] + 1;
      UNLOCK();
    }
    uVar6 = FUN_140a4fd40(&local_a68,&local_b88);
    uVar5 = FUN_140a5058c(uVar5,uVar6);
    FUN_140a4fdf2(local_ac0,0);
    FUN_140a562d0(local_9b8);
    local_ae8 = 0;
    plStack_ae0 = (longlong *)0x0;
    local_ad8 = 1;
    local_ad0 = 0;
    uStack_ac8 = 0;
    local_7f8 = 0;
    uStack_7f0 = 0;
    local_7e8 = 1;
    FUN_144a450dc(local_7e0,&local_ad0);
    FUN_1449db362(&local_ad0);
    local_c20 = FUN_141319416();
    local_c18 = 1;
    local_c10 = 0;
    uStack_c08 = 0;
    local_788 = 1;
    local_790 = local_c20;
    FUN_144a450dc(local_780,&local_c10);
    FUN_1449db362(&local_c10);
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_c68,"DefaultForeground",1);
    local_d28 = &DAT_14c98de74;
    local_d20 = 0;
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_c5c,local_c68,0);
    local_c38 = local_c4c;
    local_c48 = local_c5c;
    uStack_c44 = uStack_c58;
    uStack_c40 = uStack_c54;
    uStack_c3c = uStack_c50;
    local_c34 = 1;
    local_c30 = 0;
    uStack_c28 = 0;
    local_6d0 = local_c5c;
    uStack_6cc = uStack_c58;
    uStack_6c8 = uStack_c54;
    uStack_6c4 = uStack_c50;
    local_6c0 = local_c4c;
    local_6bc = 1;
    FUN_144a450dc(local_6b8,&local_c30);
    FUN_1449db362(&local_c30);
    plVar3 = local_808;
    local_810 = *(undefined8 *)(param_2 + 0x1a8);
    plVar4 = *(longlong **)(param_2 + 0x1b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 8) = *(int *)((longlong)plVar4 + 8) + 1;
      UNLOCK();
    }
    if (local_808 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_808 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        puVar7 = (undefined8 *)*local_808;
        local_808 = plVar4;
        (*(code *)*puVar7)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_808;
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar4 = local_808;
        }
      }
    }
    local_808 = plVar4;
    local_d28 = &local_c69;
    FUN_140a55c32(&local_ae8,"SBorder",
                  ".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",0x7a);
    FUN_140a530e4(&local_ae8,&local_c00,local_9b8);
    local_bf0 = local_c00;
    local_be8 = local_bf8;
    if (local_bf8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_bf8 + 1) = (int)local_bf8[1] + 1;
      UNLOCK();
    }
    uVar6 = FUN_140a4fd40(local_ac0,&local_bf0);
    uVar5 = FUN_140a5058c(uVar5,uVar6);
    local_d28 = &local_c89;
    FUN_140a536a8(local_c88,"SOverlay",
                  ".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",0x6d);
    FUN_140a4ff16(local_c88,local_b10,uVar5);
    if (local_b08 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b08 + 1) = (int)local_b08[1] + 1;
      UNLOCK();
      if (local_b08 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b08 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_b08)(local_b08);
          LOCK();
          piVar2 = (int *)((longlong)local_b08 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_b08 + 0x10))(local_b08);
          }
        }
      }
    }
    if (local_c80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_c80)(local_c80);
        LOCK();
        piVar2 = (int *)((longlong)local_c80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c80 + 0x10))(local_c80);
        }
      }
    }
    plVar4 = local_be8;
    if (local_be8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_be8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_be8)(local_be8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_bf8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_bf8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_bf8)(local_bf8);
        LOCK();
        piVar2 = (int *)((longlong)local_bf8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_bf8 + 0x10))(local_bf8);
        }
      }
    }
    plVar4 = plStack_ae0;
    if (plStack_ae0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_ae0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_ae0)(plStack_ae0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_140a59028(local_9b8);
    FUN_1415b5e50(local_ac0);
    plVar4 = local_b80;
    if (local_b80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_b80)(local_b80);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_b90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b90 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_b90)(local_b90);
        LOCK();
        piVar2 = (int *)((longlong)local_b90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b90 + 0x10))(local_b90);
        }
      }
    }
    if (local_bd0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_bd0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_bd0)(local_bd0);
        LOCK();
        piVar2 = (int *)((longlong)local_bd0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_bd0 + 0x10))(local_bd0);
        }
      }
    }
    FUN_140a55a86(&local_688);
    FUN_1415b5e50(&local_a68);
    plVar4 = local_b18;
    if (local_b18 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_b18 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_b18)(local_b18);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_b28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_b28)(local_b28);
        LOCK();
        piVar2 = (int *)((longlong)local_b28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b28 + 0x10))(local_b28);
        }
      }
    }
    if (local_b68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b68 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_b68)(local_b68);
        LOCK();
        piVar2 = (int *)((longlong)local_b68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b68 + 0x10))(local_b68);
        }
      }
    }
    FUN_140a55a86(&local_450);
    FUN_1415b5e50(local_a10);
    puVar7 = &local_218;
    plVar4 = local_b08;
  }
  else {
    FUN_140a504fe(&local_450);
    FUN_140a4fdf2(&local_688,0);
    FUN_140a562d0(local_9b8);
    local_218 = 0;
    plStack_210 = (longlong *)0x0;
    local_208 = 1;
    local_200 = 0;
    uStack_1f8 = 0;
    local_7f8 = 0;
    uStack_7f0 = 0;
    local_7e8 = 1;
    FUN_144a450dc(local_7e0,&local_200);
    FUN_1449db362(&local_200);
    local_cb0 = FUN_141319416();
    local_ca8 = 1;
    local_ca0 = 0;
    uStack_c98 = 0;
    local_788 = 1;
    local_790 = local_cb0;
    FUN_144a450dc(local_780,&local_ca0);
    FUN_1449db362(&local_ca0);
    plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_ce0,"DefaultForeground",1);
    local_d28 = &DAT_14c98de74;
    local_d20 = 0;
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_a68,local_ce0,0);
    local_cc8 = local_a58;
    local_cd8 = local_a68;
    uStack_cd4 = uStack_a64;
    uStack_cd0 = uStack_a60;
    uStack_ccc = uStack_a5c;
    local_cc4 = 1;
    local_cc0 = 0;
    uStack_cb8 = 0;
    local_6d0 = local_a68;
    uStack_6cc = uStack_a64;
    uStack_6c8 = uStack_a60;
    uStack_6c4 = uStack_a5c;
    local_6c0 = local_a58;
    local_6bc = 1;
    FUN_144a450dc(local_6b8,&local_cc0);
    FUN_1449db362(&local_cc0);
    plVar3 = local_808;
    local_810 = *(undefined8 *)(param_2 + 0x1a8);
    plVar4 = *(longlong **)(param_2 + 0x1b0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 8) = *(int *)((longlong)plVar4 + 8) + 1;
      UNLOCK();
    }
    if (local_808 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_808 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        puVar7 = (undefined8 *)*local_808;
        local_808 = plVar4;
        (*(code *)*puVar7)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar4 = local_808;
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar4 = local_808;
        }
      }
    }
    local_808 = plVar4;
    local_d28 = local_bd8;
    FUN_140a55c32(&local_218,"SBorder",
                  ".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",0x88);
    FUN_140a530e4(&local_218,&local_b70,local_9b8);
    local_ae8 = local_b70;
    plStack_ae0 = local_b68;
    if (local_b68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b68 + 1) = (int)local_b68[1] + 1;
      UNLOCK();
    }
    uVar5 = FUN_140a4fd40(&local_688,&local_ae8);
    uVar5 = FUN_140a5058c(&local_450,uVar5);
    local_d28 = local_c88;
    FUN_140a536a8(local_a10,"SOverlay",
                  ".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",0x85);
    FUN_140a4ff16(local_a10,local_ac0,uVar5);
    if (local_ab8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_ab8 + 1) = (int)local_ab8[1] + 1;
      UNLOCK();
      if (local_ab8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_ab8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_ab8)(local_ab8);
          LOCK();
          piVar2 = (int *)((longlong)local_ab8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_ab8 + 0x10))(local_ab8);
          }
        }
      }
    }
    if (local_a08 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a08 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_a08)(local_a08);
        LOCK();
        piVar2 = (int *)((longlong)local_a08 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a08 + 0x10))(local_a08);
        }
      }
    }
    plVar4 = plStack_ae0;
    if (plStack_ae0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_ae0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_ae0)(plStack_ae0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_b68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b68 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_b68)(local_b68);
        LOCK();
        piVar2 = (int *)((longlong)local_b68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b68 + 0x10))(local_b68);
        }
      }
    }
    plVar4 = plStack_210;
    if (plStack_210 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_210 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_210)(plStack_210);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_140a59028(local_9b8);
    FUN_1415b5e50(&local_688);
    puVar7 = &local_450;
    plVar4 = local_ab8;
  }
  FUN_1415b5e16(puVar7);
  FUN_140a53a96(local_9b8);
  local_cf8 = *(undefined4 *)(param_2 + 0x1d8);
  local_cf4 = 1;
  local_cf0 = 0;
  uStack_ce8 = 0;
  local_79c = 1;
  local_7a0 = local_cf8;
  FUN_144a450dc(local_798,&local_cf0);
  FUN_1449db362(&local_cf0);
  local_d10 = *(undefined4 *)(param_2 + 0x1dc);
  local_d0c = 1;
  local_d08 = 0;
  uStack_d00 = 0;
  local_754 = 1;
  local_758 = local_d10;
  FUN_144a450dc(local_750,&local_d08);
  FUN_1449db362(&local_d08);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_7d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_7d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_7d8)(local_7d8);
      LOCK();
      piVar2 = (int *)((longlong)local_7d8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7d8 + 0x10))(local_7d8);
      }
    }
  }
  local_d28 = local_a10;
  FUN_140a53d66(&local_450,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/Application/MenuStack.cpp",0x94);
  FUN_140a50bf4(&local_450,&local_218,local_9b8);
  local_688 = local_218;
  local_680 = plStack_210;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_210 + 1) = (int)plStack_210[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_688);
  plVar3 = local_680;
  if (local_680 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_680 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_680)(local_680);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_210;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_210 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_448 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_448 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_448)(local_448);
      LOCK();
      piVar2 = (int *)((longlong)local_448 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_448 + 0x10))(local_448);
      }
    }
  }
  if (plVar4 == (longlong *)0x0) {
    FUN_140a5660c(local_9b8);
  }
  else {
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
    FUN_140a5660c(local_9b8);
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
  if ((local_60 ^ (ulonglong)auStack_d48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b4b32 FUN_1469b4b32 body=90 status=ok
// SIG undefined FUN_1469b4b32(void)

undefined2 * FUN_1469b4b32(undefined1 *param_1,undefined2 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_146973a16(param_1,param_3,0);
  if (lVar1 == 0) {
    *(undefined1 *)param_2 = *param_1;
    *(undefined1 *)((longlong)param_2 + 1) = 1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    *param_2 = 0x119;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    FUN_140fe25fc(param_2 + 4,lVar1 + 8);
  }
  return param_2;
}



// FUNCTION 1469b4b8c FUN_1469b4b8c body=130 status=ok
// SIG undefined FUN_1469b4b8c(void)

void FUN_1469b4b8c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b4c10 FUN_1469b4c10 body=130 status=ok
// SIG undefined FUN_1469b4c10(void)

void FUN_1469b4c10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b4c94 FUN_1469b4c94 body=48 status=ok
// SIG undefined FUN_1469b4c94(void)

void FUN_1469b4c94(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1469b4cc4 FUN_1469b4cc4 body=63 status=ok
// SIG undefined FUN_1469b4cc4(void)

void FUN_1469b4cc4(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145e118d4(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1469b2cca(param_1);
    return;
  }
  FUN_1469b4d04(param_1);
  FUN_145e118d4(param_1);
  return;
}



// FUNCTION 1469b4d04 FUN_1469b4d04 body=322 status=ok
// SIG undefined FUN_1469b4d04(void)

void FUN_1469b4d04(longlong *param_1)

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



// FUNCTION 1469b4e48 FUN_1469b4e48 body=114 status=ok
// SIG undefined FUN_1469b4e48(void)

void FUN_1469b4e48(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1469b4eba FUN_1469b4eba body=114 status=ok
// SIG undefined FUN_1469b4eba(void)

void FUN_1469b4eba(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1469b4f2c FUN_1469b4f2c body=326 status=ok
// SIG undefined FUN_1469b4f2c(void)

void FUN_1469b4f2c(longlong *param_1)

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



// FUNCTION 1469b5074 FUN_1469b5074 body=319 status=ok
// SIG undefined FUN_1469b5074(void)

void FUN_1469b5074(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_145e11420(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b520a FUN_1469b520a body=95 status=ok
// SIG undefined FUN_1469b520a(void)

void FUN_1469b520a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_1469b526a();
  return;
}



// FUNCTION 1469b526a FUN_1469b526a body=82 status=ok
// SIG undefined FUN_1469b526a(void)

void FUN_1469b526a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145e11420(lVar1 + lVar2 + 8);
  FUN_1469b52bc(param_1,param_2);
  return;
}



// FUNCTION 1469b52bc FUN_1469b52bc body=122 status=ok
// SIG undefined FUN_1469b52bc(void)

void FUN_1469b52bc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1469b5336 FUN_1469b5336 body=314 status=ok
// SIG undefined FUN_1469b5336(void)

undefined4 * FUN_1469b5336(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405e039c(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = *puVar1;
  local_40[1] = puVar1[1];
  local_40[2] = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(local_40 + 3) = *(undefined1 *)(puVar1 + 3);
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar2 = FUN_1405e0488(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145726f12(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469b5472 FUN_1469b5472 body=68 status=ok
// SIG undefined FUN_1469b5472(void)

undefined8 * FUN_1469b5472(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149efd650;
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



// FUNCTION 1469b54ba FUN_1469b54ba body=81 status=ok
// SIG undefined FUN_1469b54ba(void)

undefined8 FUN_1469b54ba(longlong param_1)

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



// FUNCTION 1469b5512 FUN_1469b5512 body=89 status=ok
// SIG undefined FUN_1469b5512(void)

bool FUN_1469b5512(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469b555d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469b555d:
  return lVar6 == param_2;
}



// FUNCTION 1469b556c FUN_1469b556c body=118 status=ok
// SIG undefined FUN_1469b556c(void)

void FUN_1469b556c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efde30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd650;
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



// FUNCTION 1469b55e2 FUN_1469b55e2 body=118 status=ok
// SIG undefined FUN_1469b55e2(void)

void FUN_1469b55e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efde30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149efd650;
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



// FUNCTION 1469b5658 FUN_1469b5658 body=156 status=ok
// SIG undefined FUN_1469b5658(void)

void FUN_1469b5658(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149efde30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149efd650;
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
                    /* WARNING: Could not recover jumptable at 0x0001469b56e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469b56f4 FUN_1469b56f4 body=104 status=ok
// SIG undefined FUN_1469b56f4(void)

void FUN_1469b56f4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001469b5741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001469b5752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}


