// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140754ddc FUN_140754ddc body=95 status=ok
// SIG undefined FUN_140754ddc(void)

undefined8 FUN_140754ddc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  local_10 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140754e3c FUN_140754e3c body=327 status=ok
// SIG undefined FUN_140754e3c(void)

void FUN_140754e3c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar8 = *param_2;
    lVar10 = (longlong)(int)param_2[1] * 0x14;
    local_78 = param_1;
    do {
      puVar5 = (undefined8 *)FUN_14061d268(param_1,lVar8,&local_5c);
      iVar3 = local_5c;
      if (puVar5 != (undefined8 *)0x0) {
        uVar1 = *local_70;
        local_68 = local_70[1];
        lVar9 = (longlong)local_5c;
        AcquireSRWLockExclusive((PSRWLOCK)(puVar5 + 0x163));
        lVar2 = puVar5[0x141];
        lVar7 = *(longlong *)(lVar2 + lVar9 * 8);
        if (lVar7 == 0) {
          uVar6 = FUN_14001cc68(0x78,0x10);
          FUN_1406f65ea(uVar6,puVar5,iVar3);
          *(undefined8 *)(lVar2 + lVar9 * 8) = uVar6;
          if (DAT_14c760e5c != 0) {
            local_50 = local_68;
            local_58 = uVar1;
            uVar4 = (**(code **)(*(longlong *)*puVar5 + 0x68))((longlong *)*puVar5,iVar3,&local_58);
            *(undefined1 *)(*(longlong *)(lVar2 + lVar9 * 8) + 0x74) = uVar4;
            uVar6 = *(undefined8 *)(lVar2 + lVar9 * 8);
          }
          FUN_140308182(uVar6,0);
          lVar7 = *(longlong *)(lVar2 + lVar9 * 8);
          param_1 = local_78;
        }
        LOCK();
        *(int *)(lVar7 + 0x60) = *(int *)(lVar7 + 0x60) + 1;
        UNLOCK();
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + 0x163));
      }
      lVar8 = lVar8 + 0x14;
      lVar10 = lVar10 + -0x14;
    } while (lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140754f84 FUN_140754f84 body=104 status=ok
// SIG undefined FUN_140754f84(void)

void FUN_140754f84(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xa8);
    lVar2 = (longlong)*(int *)(param_1 + 0xb0) << 4;
    do {
      if (*plVar1 != 0) {
        (**(code **)(*param_2 + 0x88))(param_2,plVar1,param_1,0);
      }
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  FUN_140754fec(param_1 + 0x870,param_1,param_2);
  return;
}



// FUNCTION 140754fec FUN_140754fec body=780 status=ok
// SIG undefined FUN_140754fec(void)

void FUN_140754fec(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar9 = 1;
    uVar13 = 0;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x18);
    }
    uVar15 = *puVar3;
    if (uVar15 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar13 = 0;
      uVar7 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar7 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar7 == uVar13) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar15 = puVar3[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar9 = (ulonglong)(-uVar15 & uVar15);
    uVar7 = uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar4) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 != iVar1) {
    uVar15 = 0xffffffff;
    do {
      plVar14 = (longlong *)((longlong)iVar4 * 0x18 + *(longlong *)(param_1 + 8));
      if (*(code **)(*param_3 + 0x10) == (code *)&LAB_1448810c0) {
        if ((char)param_3[2] == '\0') {
          lVar11 = *plVar14;
          uVar8 = *(uint *)(param_3 + 0x9b0);
          iVar4 = uVar8 + 1;
          *(int *)(param_3 + 0x9b0) = iVar4;
          param_3[(ulonglong)uVar8 + 0x9b1] = lVar11;
          if (iVar4 == 0x20) {
            FUN_1447111de(param_3 + 0x938);
          }
        }
        else {
          uVar8 = *(uint *)(param_3 + 0x88);
          iVar4 = uVar8 + 1;
          *(int *)(param_3 + 0x88) = iVar4;
          param_3[(ulonglong)uVar8 + 0x89] = (longlong)plVar14;
          if (iVar4 == 0x20) {
            FUN_144710aee(param_3 + 0x10);
          }
        }
      }
      else {
        (**(code **)(*param_3 + 0x10))(param_3,plVar14);
      }
      plVar14 = plVar14 + 1;
      if (*(code **)(*param_3 + 0x10) == (code *)&LAB_1448810c0) {
        if ((char)param_3[2] == '\0') {
          lVar11 = *plVar14;
          uVar8 = *(uint *)(param_3 + 0x9b0);
          iVar4 = uVar8 + 1;
          *(int *)(param_3 + 0x9b0) = iVar4;
          param_3[(ulonglong)uVar8 + 0x9b1] = lVar11;
          if (iVar4 == 0x20) {
            FUN_1447111de(param_3 + 0x938);
          }
        }
        else {
          uVar8 = *(uint *)(param_3 + 0x88);
          iVar4 = uVar8 + 1;
          *(int *)(param_3 + 0x88) = iVar4;
          param_3[(ulonglong)uVar8 + 0x89] = (longlong)plVar14;
          if (iVar4 == 0x20) {
            FUN_144710aee(param_3 + 0x10);
          }
        }
      }
      else {
        (**(code **)(*param_3 + 0x10))(param_3,plVar14);
      }
      uVar15 = uVar15 & ~(uint)uVar9;
      puVar3 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x18);
      }
      iVar2 = *(int *)(param_1 + 0x30);
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar8 = puVar3[lVar11] & uVar15;
      if (uVar8 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar4 < iVar5) {
          lVar12 = 0;
          do {
            uVar8 = puVar3[lVar11 + lVar12 + 1];
            if (uVar8 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14075514e;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar6 - lVar11 != lVar12);
          uVar15 = 0xffffffff;
          iVar4 = iVar6;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar2;
      }
      else {
LAB_14075514e:
        uVar9 = (ulonglong)(-uVar8 & uVar8);
        uVar7 = uVar9 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar4) {
          iVar4 = iVar2;
        }
      }
    } while (iVar4 != iVar1);
  }
  return;
}



// FUNCTION 1407552f8 FUN_1407552f8 body=1520 status=ok
// SIG undefined FUN_1407552f8(void)

void FUN_1407552f8(longlong param_1)

{
  PSRWLOCK pRVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *_Str;
  size_t sVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 unaff_XMM8_Db;
  float fVar19;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined1 **local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  double local_288;
  double dStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_260 [7];
  undefined1 local_259;
  undefined1 *local_258;
  undefined1 *local_250;
  undefined4 *local_248;
  ulonglong local_240;
  undefined1 local_238 [256];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 *local_b8;
  undefined4 *local_b0;
  int local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_1407558ea();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((lVar2 == 0) || ((*(byte *)(param_1 + 0x8c) & 0x80) == 0)) goto LAB_140755366;
  plVar6 = (longlong *)FUN_1407559f6(param_1);
  lVar7 = *plVar6;
  pRVar1 = (PSRWLOCK)(lVar7 + 0x638);
  AcquireSRWLockShared(pRVar1);
  cVar5 = *(char *)(lVar7 + 0x4e8);
  local_278 = CONCAT31(local_278._1_3_,cVar5);
  cVar10 = *(char *)(lVar2 + 0xb0);
  if (cVar10 != cVar5) {
    if (((((*(int *)(param_1 + 0x34) != 0) && (uVar12 = *(uint *)(param_1 + 0x30), -1 < (int)uVar12)
          ) && ((int)uVar12 < DAT_14c9647dc)) &&
        ((puVar13 = (undefined8 *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
         puVar13 != (undefined8 *)0x0 && (*(int *)(puVar13 + 2) == *(int *)(param_1 + 0x34))))) &&
       ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
        local_290 = *puVar13;
      }
      else {
        local_290 = 0;
      }
      local_258 = local_238;
      local_240 = local_240 & 0xffffffffffffff00;
      local_248 = &local_138;
      local_250 = local_258;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"UpdateVisibility",&local_258);
      local_b8 = (undefined4 *)0x0;
      if (_Str == (wchar_t *)0x0) {
        local_b0 = (undefined4 *)0x0;
        local_a8 = 0;
      }
      else {
        sVar9 = wcslen(_Str);
        local_a8 = FUN_14475aa65(0,_Str,sVar9 & 0xffffffff);
        uVar12 = local_a8 + 1;
        local_b0 = (undefined4 *)0x0;
        if (0x80 < uVar12) {
          FUN_1446efa72(&local_b8,0,uVar12,1);
          local_b0 = local_b8;
        }
        if (local_b0 == (undefined4 *)0x0) {
          local_b0 = &local_138;
        }
        FUN_14475a98a(local_b0,uVar12,_Str,(int)sVar9 + 1);
      }
      FUN_140755a72(local_290,local_b0,&local_278);
      if (local_b8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if ((char)local_240 == '\x01') {
        FUN_1400020a8(local_258);
      }
      cVar10 = *(char *)(lVar2 + 0xb0);
      cVar5 = (char)local_278;
    }
    if (cVar5 == cVar10) {
      if (*(int *)(lVar2 + 0xb4) != 0) goto LAB_1407553f3;
      iVar11 = 1;
    }
    else {
      iVar11 = *(int *)(lVar2 + 0xb4) + 1;
    }
    *(char *)(lVar2 + 0xb0) = cVar5;
    *(int *)(lVar2 + 0xb4) = iVar11;
  }
LAB_1407553f3:
  ReleaseSRWLockShared(pRVar1);
  bVar4 = *(byte *)(lVar2 + 0xb0);
  if ((((bVar4 == 1) && (*(int *)(param_1 + 0x34) != 0)) &&
      ((uVar12 = *(uint *)(param_1 + 0x30), -1 < (int)uVar12 &&
       ((((int)uVar12 < DAT_14c9647dc &&
         (plVar6 = (longlong *)
                   ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0)) && ((int)plVar6[2] == *(int *)(param_1 + 0x34))))))) &&
     ((((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar7 = *plVar6, lVar7 != 0)) &&
      (*(char *)(lVar7 + 0xcb) == '\x01')))) {
    local_278 = *(undefined4 *)(param_1 + 0x298);
    uStack_274 = *(undefined4 *)(param_1 + 0x29c);
    uStack_270 = *(undefined4 *)(param_1 + 0x2a0);
    uStack_26c = *(undefined4 *)(param_1 + 0x2a4);
    dVar15 = *(double *)(param_1 + 0x2a8);
    plVar6 = (longlong *)FUN_1407559f6(param_1);
    lVar3 = *plVar6;
    pRVar1 = (PSRWLOCK)(lVar3 + 0x638);
    AcquireSRWLockShared(pRVar1);
    cVar5 = *(char *)(lVar3 + 0x4d8);
    ReleaseSRWLockShared(pRVar1);
    if (cVar5 == '\x01') {
      dVar15 = dVar15 - (double)*(float *)(param_1 + 0x3a4);
    }
    local_288 = DAT_14c8463f0;
    dStack_280 = DAT_14c8463f8;
    local_138 = local_278;
    uStack_134 = uStack_274;
    uStack_130 = uStack_270;
    uStack_12c = uStack_26c;
    local_2a0 = &local_258;
    local_258 = (undefined1 *)0x3f947ae140000000;
    local_250 = (undefined1 *)0x3f947ae140000000;
    local_248 = (undefined4 *)0x3f947ae140000000;
    local_240 = 0x3f947ae140000000;
    local_2a8 = &local_259;
    local_298 = 0;
    local_128 = dVar15;
    FUN_140962b5a(lVar7 + 0xd0,&local_138,&local_288,local_260);
    if ((1e-08 < ABS((double)*(float *)(lVar2 + 0x5c8) - local_288)) ||
       (1e-08 < ABS((double)*(float *)(lVar2 + 0x5cc) - dStack_280))) {
      fVar17 = (float)local_288;
      fVar18 = (float)dStack_280;
      fVar19 = *(float *)(param_1 + 0x3a0);
      dVar15 = dStack_280 - (double)fVar19;
      fVar16 = fVar18 - ((*(float *)(lVar2 + 0x5e0) + -0.5) * 100.0 + *(float *)(param_1 + 0x39c));
      if (0.0 < fVar16) {
        lVar7 = FUN_1447e736e(param_1 + 0x3a8);
        if (lVar7 != 0) {
          fVar19 = *(float *)(param_1 + 0x398);
          if (1000.0 <= fVar19) {
            fVar19 = 1000.0;
          }
          if (fVar19 <= 1.0) {
            fVar19 = 1.0;
          }
          uVar8 = FUN_1447e736e(param_1 + 0x3a8);
          fVar16 = (float)FUN_1449e6cbc(uVar8,CONCAT44(unaff_XMM8_Db,fVar16 / fVar19));
          fVar16 = fVar16 * fVar19;
        }
        fVar19 = fVar16 + *(float *)(param_1 + 0x3a0);
      }
      *(float *)(lVar2 + 0x5c8) = fVar17;
      *(float *)(lVar2 + 0x5cc) = fVar18 - fVar19;
      *(float *)(lVar2 + 0x5d0) = fVar17;
      *(float *)(lVar2 + 0x5d4) = (float)dVar15;
    }
    bVar4 = *(byte *)(lVar2 + 0xb0);
  }
  if ((bVar4 & 1) != 0) {
    plVar6 = (longlong *)FUN_1407559f6(param_1);
    lVar7 = *plVar6;
    pRVar1 = (PSRWLOCK)(lVar7 + 0x638);
    AcquireSRWLockShared(pRVar1);
    *(undefined4 *)(lVar2 + 0x5e8) = *(undefined4 *)(lVar7 + 0x460);
    ReleaseSRWLockShared(pRVar1);
    lVar7 = FUN_1447e736e(param_1 + 0x3d0);
    if (lVar7 != 0) {
      uVar8 = FUN_1447e736e(param_1 + 0x3d0);
      uVar14 = FUN_1449e6cbc(uVar8,*(undefined4 *)(lVar2 + 0x5e8));
      *(undefined4 *)(lVar2 + 0x5e4) = uVar14;
    }
  }
LAB_140755366:
  if ((local_a0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407558ea FUN_1407558ea body=267 status=ok
// SIG undefined FUN_1407558ea(void)

void FUN_1407558ea(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  PVOID pvVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  PSRWLOCK local_48;
  int local_40;
  undefined4 uStack_3c;
  PVOID local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)((longlong)param_1 + 0x8c) & 0x80) != 0) && (lVar3 = param_1[0x51], lVar3 != 0)) {
    if ((char)param_1[0x56] == '\x01') {
      FUN_1448d5e3c(&local_48,param_1 + 0x41);
      plVar5 = (longlong *)CONCAT44(uStack_3c,local_40);
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
      local_48 = local_48 + 0x1e;
    }
    else {
      local_48 = (PSRWLOCK)FUN_1407559f6(param_1);
    }
    pvVar4 = local_48->Ptr;
    SRWLock = (PSRWLOCK)((longlong)pvVar4 + 0x638);
    AcquireSRWLockShared(SRWLock);
    local_40 = 0;
    local_48 = SRWLock;
    local_38 = pvVar4;
    (**(code **)(*param_1 + 0x100))(param_1,lVar3,&local_48);
    if (local_40 == 0) {
      ReleaseSRWLockShared(local_48);
    }
    else {
      ReleaseSRWLockExclusive(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407559f6 FUN_1407559f6 body=123 status=ok
// SIG undefined FUN_1407559f6(void)

longlong FUN_1407559f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0xe0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140755a72 FUN_140755a72 body=393 status=ok
// SIG undefined FUN_140755a72(void)

/* WARNING: Removing unreachable block (ram,0x000140755bde) */
/* WARNING: Removing unreachable block (ram,0x000140755bed) */
/* WARNING: Removing unreachable block (ram,0x000140755bf1) */

undefined8 FUN_140755a72(longlong param_1,char *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined1 local_180 [256];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_80 = 0;
  if (param_2 == (char *)0x0) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_180,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_198,local_78);
  local_188 = *param_3;
  local_48 = &PTR_FUN_14b47b010;
  uStack_40 = local_198;
  uStack_38 = uStack_190;
  local_198 = 0;
  uStack_190 = 0;
  uStack_30 = CONCAT31(uStack_30._1_3_,local_188);
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = &LAB_140b8ab40;
  puVar3[4] = 0;
  local_58 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_48._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_40._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_38._4_4_;
  *(undefined4 *)(puVar3 + 9) = uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_2c;
  local_68 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_198 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_80 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140755bfc FUN_140755bfc body=8 status=ok
// SIG undefined FUN_140755bfc(void)

undefined8 * FUN_140755bfc(void)

{
  return &DAT_14ca85100;
}



// FUNCTION 140755c04 FUN_140755c04 body=304 status=ok
// SIG undefined FUN_140755c04(void)

void FUN_140755c04(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x2b4) == '\x01') {
    local_78 = param_1 + 0x248;
    FUN_140755d36(param_2,*(undefined4 *)(param_1 + 4),*(undefined8 *)(param_3 + 0x10),
                  param_1 + 0x1f8);
    *(undefined1 *)(param_1 + 0x2b4) = 0;
  }
  lVar8 = 0;
  if (*(int *)(param_1 + 0x22c) < *(int *)(param_1 + 0x200)) {
    lVar8 = param_1 + 0x248;
  }
  iVar3 = *(int *)(param_1 + 0x1e8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1e0);
    lVar7 = 0;
    do {
      cVar6 = (**(code **)(**(longlong **)(lVar4 + lVar7) + 8))();
      if (cVar6 != '\0') {
        plVar5 = *(longlong **)(lVar4 + lVar7);
        local_50 = *param_5;
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_68 = *param_4;
        uStack_64 = param_4[1];
        uStack_60 = param_4[2];
        uStack_5c = param_4[3];
        local_78 = lVar8;
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&local_68,&local_50);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  if (*param_5 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140755d36 FUN_140755d36 body=3284 status=ok
// SIG undefined FUN_140755d36(void)

void FUN_140755d36(ulonglong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 *_Dst;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  uint local_138;
  ulonglong local_130;
  undefined8 local_128;
  ulonglong *local_120;
  ulonglong local_118;
  longlong *local_110;
  undefined4 local_104;
  uint *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar8 = (int)param_4[1] - *(int *)((longlong)param_4 + 0x34);
  if (uVar8 == 0) {
    *(undefined4 *)(param_5 + 0x50) = 0;
    FUN_1413ff406(param_5);
    *(undefined4 *)(param_5 + 0x38) = 0;
    lVar15 = *(longlong *)(param_5 + 0x20);
    if (lVar15 != 0) {
      *(undefined8 *)(param_5 + 0x20) = 0;
      LOCK();
      puVar11 = (uint *)(lVar15 + 8);
      uVar8 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(lVar15 + 8);
        LOCK();
        uVar8 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar16 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar16;
              LOCK();
              bVar26 = plVar16 != DAT_14ca843c0;
              plVar14 = plVar10;
              if (bVar26) {
                plVar16 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar26 = plVar14 != DAT_14ca843c8;
              plVar16 = plVar10;
              if (bVar26) {
                plVar14 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
    lVar15 = *(longlong *)(param_5 + 0x28);
    if (lVar15 != 0) {
      *(undefined8 *)(param_5 + 0x28) = 0;
      LOCK();
      puVar11 = (uint *)(lVar15 + 8);
      uVar8 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(lVar15 + 8);
        LOCK();
        uVar8 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar16 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar16;
              LOCK();
              bVar26 = plVar16 != DAT_14ca843c0;
              plVar14 = plVar10;
              if (bVar26) {
                plVar16 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar26 = plVar14 != DAT_14ca843c8;
              plVar16 = plVar10;
              if (bVar26) {
                plVar14 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
    lVar15 = *(longlong *)(param_5 + 0x30);
    if (lVar15 != 0) {
      *(undefined8 *)(param_5 + 0x30) = 0;
      LOCK();
      puVar11 = (uint *)(lVar15 + 8);
      uVar8 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(lVar15 + 8);
        LOCK();
        uVar8 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar16 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar16;
              LOCK();
              bVar26 = plVar16 != DAT_14ca843c0;
              plVar14 = plVar10;
              if (bVar26) {
                plVar16 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar26 = plVar14 != DAT_14ca843c8;
              plVar16 = plVar10;
              if (bVar26) {
                plVar14 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
  }
  else {
    uVar21 = 0x40;
    if (0x40 < uVar8) {
      uVar21 = uVar8;
    }
    uVar23 = (ulonglong)(uVar21 + 0x3f & 0xffffffc0);
    local_e8 = 0;
    lStack_e0 = 0;
    local_d8 = 0;
    local_148 = (longlong **)(CONCAT44(local_148._4_4_,uVar21 + 0x3f) & 0xffffffffffffffc0);
    local_130 = 0;
    local_138 = 4;
    local_140 = CONCAT31(local_140._1_3_,0x44);
    local_104 = param_2;
    FUN_140661c88(&local_e8,param_1,L"NewPrimIdCollisionGroupPairs",8);
    lVar15 = local_e8;
    cVar4 = *(char *)((longlong)param_1 + 0x69);
    local_118 = uVar23;
    if (cVar4 == '\0') {
      FUN_14002049c(param_1,1);
    }
    local_148 = (longlong **)CONCAT44(local_148._4_4_,(int)(uVar23 * 8));
    local_140 = 1;
    uVar22 = 0;
    local_120 = param_1;
    _Dst = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar15,0);
    if (cVar4 == '\0') {
      FUN_14002049c(local_120);
    }
    memset(_Dst,0,uVar23 * 8);
    local_100 = (uint *)(param_4 + 2);
    iVar1 = (int)param_4[5];
    uVar23 = 1;
    iVar24 = 0;
    iVar9 = 0;
    local_110 = param_4;
    if (iVar1 != 0) {
      puVar11 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar11 = local_100;
      }
      uVar8 = *puVar11;
      if (uVar8 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        uVar22 = 0;
        uVar23 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar23 = uVar22;
        }
        iVar24 = 0;
        do {
          if (uVar23 == uVar22) goto LAB_140756078;
          iVar24 = iVar24 + 0x20;
          uVar8 = puVar11[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar22 = 0;
      }
      uVar23 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar23 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar9) {
        iVar9 = iVar1;
      }
    }
    if (iVar9 != iVar1) {
      uVar8 = 0xffffffff;
      do {
        uVar5 = *(undefined4 *)(*local_110 + 4 + (longlong)iVar9 * 0x10);
        lVar15 = (**(code **)(*param_3 + 200))
                           (param_3,*(undefined4 *)(*local_110 + (longlong)iVar9 * 0x10));
        uVar17 = 0xffffffff;
        if (lVar15 != 0) {
          uVar17 = *(undefined4 *)(lVar15 + 0x204);
        }
        *_Dst = uVar17;
        _Dst[1] = uVar5;
        uVar8 = uVar8 & ~(uint)uVar23;
        puVar11 = (uint *)local_110[4];
        if ((uint *)local_110[4] == (uint *)0x0) {
          puVar11 = local_100;
        }
        iVar6 = (int)local_110[5];
        iVar9 = (int)uVar22;
        lVar15 = (longlong)iVar9;
        uVar21 = puVar11[lVar15] & uVar8;
        if (uVar21 == 0) {
          iVar18 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar18 = iVar6 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar24 = iVar24 + 0x20;
          iVar19 = iVar18;
          if (iVar18 < iVar9) {
            iVar19 = iVar9;
          }
          if (iVar9 < iVar18) {
            lVar25 = 0;
            do {
              uVar21 = puVar11[lVar15 + lVar25 + 1];
              if (uVar21 != 0) {
                uVar22 = (ulonglong)(iVar9 + (int)lVar25 + 1);
                uVar8 = 0xffffffff;
                goto LAB_14075676b;
              }
              iVar24 = iVar24 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar19 - lVar15 != lVar25);
            uVar8 = 0xffffffff;
            iVar9 = iVar19;
          }
          uVar22 = (ulonglong)(iVar9 + 1);
          iVar9 = iVar6;
        }
        else {
LAB_14075676b:
          uVar23 = (ulonglong)(-uVar21 & uVar21);
          uVar2 = uVar23 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar9 = (iVar24 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar9) {
            iVar9 = iVar6;
          }
        }
        _Dst = _Dst + 2;
      } while (iVar9 != iVar1);
    }
LAB_140756078:
    lVar15 = local_e8;
    puVar7 = local_120;
    if (*(char *)((longlong)local_120 + 0x69) == '\0') {
      FUN_14002049c(local_120,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar7,lVar15);
      FUN_14002049c(puVar7,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,local_120,local_e8);
    }
    uVar8 = (uint)local_118;
    if (*(uint *)(param_5 + 0x50) < uVar8) {
      *(uint *)(param_5 + 0x50) = uVar8;
      FUN_1413ff406(param_5);
      local_130 = local_130 & 0xffffffffffffff00;
      local_138 = local_138 & 0xffffff00;
      local_148 = (longlong **)CONCAT44(local_148._4_4_,uVar8);
      local_128 = CONCAT44(local_128._4_4_,0xc00);
      local_140 = 1;
      FUN_14323d458(param_5,puVar7,L"NiagaraPrimIdHashTable",4);
      *(undefined4 *)(param_5 + 0x38) = 0;
      lVar15 = *(longlong *)(param_5 + 0x20);
      if (lVar15 != 0) {
        *(undefined8 *)(param_5 + 0x20) = 0;
        LOCK();
        puVar11 = (uint *)(lVar15 + 8);
        uVar21 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar11 = (uint *)(lVar15 + 8);
          LOCK();
          uVar21 = *puVar11;
          *puVar11 = *puVar11 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar15 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar15;
            uVar8 = (uint)local_118;
            plVar16 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar16;
                LOCK();
                bVar26 = plVar16 != DAT_14ca843c0;
                plVar14 = plVar10;
                if (bVar26) {
                  plVar16 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar26);
            }
            else {
              do {
                *plVar10 = (longlong)plVar14;
                LOCK();
                bVar26 = plVar14 != DAT_14ca843c8;
                plVar16 = plVar10;
                if (bVar26) {
                  plVar14 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar26);
            }
          }
        }
      }
      lVar15 = *(longlong *)(param_5 + 0x28);
      if (lVar15 != 0) {
        *(undefined8 *)(param_5 + 0x28) = 0;
        LOCK();
        puVar11 = (uint *)(lVar15 + 8);
        uVar21 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar11 = (uint *)(lVar15 + 8);
          LOCK();
          uVar21 = *puVar11;
          *puVar11 = *puVar11 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar15 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar15;
            plVar16 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar16;
                LOCK();
                bVar26 = plVar16 != DAT_14ca843c0;
                plVar14 = plVar10;
                if (bVar26) {
                  plVar16 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar26);
            }
            else {
              do {
                *plVar10 = (longlong)plVar14;
                LOCK();
                bVar26 = plVar14 != DAT_14ca843c8;
                plVar16 = plVar10;
                if (bVar26) {
                  plVar14 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar26);
            }
          }
        }
      }
      lVar15 = *(longlong *)(param_5 + 0x30);
      if (lVar15 != 0) {
        *(undefined8 *)(param_5 + 0x30) = 0;
        LOCK();
        puVar11 = (uint *)(lVar15 + 8);
        uVar21 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar21 & 0x3fffffff) == 1) {
          puVar11 = (uint *)(lVar15 + 8);
          LOCK();
          uVar21 = *puVar11;
          *puVar11 = *puVar11 | 0x40000000;
          UNLOCK();
          if ((uVar21 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar15 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar15;
            plVar16 = DAT_14ca843c0;
            plVar14 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar16;
                LOCK();
                bVar26 = plVar16 != DAT_14ca843c0;
                plVar14 = plVar10;
                if (bVar26) {
                  plVar16 = DAT_14ca843c0;
                  plVar14 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar14;
                UNLOCK();
              } while (bVar26);
            }
            else {
              do {
                *plVar10 = (longlong)plVar14;
                LOCK();
                bVar26 = plVar14 != DAT_14ca843c8;
                plVar16 = plVar10;
                if (bVar26) {
                  plVar14 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar26);
            }
          }
        }
      }
      local_148 = (longlong **)CONCAT44(local_148._4_4_,uVar8);
      local_128 = 0;
      local_130 = CONCAT44(local_130._4_4_,1);
      local_138 = 0x400;
      local_140 = CONCAT31(local_140._1_3_,0x1c);
      FUN_1407fe5c2((undefined8 *)(param_5 + 0x20),local_120,L"NiagaraPrimIdHashToCollisionGroups",4
                   );
    }
    local_70 = *(undefined8 *)(param_5 + 8);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 3;
    local_64 = 0x40000000000;
    uVar23 = 0;
    local_5c = 0;
    local_50 = 0;
    local_b0 = 1;
    local_b8 = &local_80;
    FUN_144760590(local_120,&local_b8,0);
    local_70 = *(undefined8 *)(param_5 + 0x28);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 3;
    local_64 = 0x40000000000;
    local_5c = 0;
    local_50 = 0;
    local_b0 = 1;
    local_b8 = &local_80;
    FUN_144760590(local_120,&local_b8,0);
    uVar5 = local_104;
    local_148 = (longlong **)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_144a9a41e(local_120,local_104,*(undefined8 *)(param_5 + 8),*(uint *)(param_5 + 0x18) >> 2);
    local_70 = *(undefined8 *)(param_5 + 8);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 3;
    local_64 = 0x40000000400;
    local_5c = 0;
    local_50 = 0;
    local_b0 = 1;
    local_b8 = &local_80;
    FUN_144760590(local_120,&local_b8,0);
    local_148 = (longlong **)CONCAT44(local_148._4_4_,0xffffffff);
    FUN_144a9a41e(local_120,uVar5,*(undefined8 *)(param_5 + 0x28),*(uint *)(param_5 + 0x38) >> 2);
    puVar7 = local_120;
    local_70 = *(undefined8 *)(param_5 + 0x28);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 3;
    local_64 = 0x40000000400;
    local_5c = 0;
    local_50 = 0;
    local_b0 = 1;
    local_b8 = &local_80;
    FUN_144760590(local_120,&local_b8,0);
    uVar12 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_145f0e288();
    FUN_1448e935e(uVar12,&local_80,&DAT_14cb2d680,0);
    FUN_145f0e288();
    plVar16 = local_110;
    local_f0 = CONCAT44(uStack_74,local_78);
    local_f8 = local_80;
    if (local_80 != 0) {
      uVar23 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_f0 + 8) + 0x50) +
                (longlong)*(int *)(local_80 + 0xd4) * 8);
      if (uVar23 == 0) {
        uVar23 = FUN_1400bafc2(*(longlong *)(local_f0 + 8),(longlong)*(int *)(local_80 + 0xd4),1);
      }
    }
    local_b8 = *(longlong **)(param_5 + 8);
    local_b0 = *(undefined4 *)(param_5 + 0x50);
    local_a8 = *(undefined8 *)(param_5 + 0x28);
    local_a0 = lStack_e0;
    local_98 = (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34);
    uVar12 = FUN_140029432(puVar7,uVar23,0);
    puVar7[0x37] = uVar23;
    puVar13 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
    puVar20 = puVar13 + 3;
    if ((undefined8 *)puVar7[1] < puVar20) {
      FUN_140023dd8(puVar7,0x20);
      puVar13 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
      puVar20 = puVar13 + 3;
    }
    *puVar7 = (ulonglong)puVar20;
    *(int *)(puVar7 + 0xc) = (int)puVar7[0xc] + 1;
    *(undefined8 **)puVar7[6] = puVar13;
    puVar7[6] = (ulonglong)(puVar13 + 1);
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_14a37d340;
    puVar13[2] = uVar12;
    FUN_145f0e4f6();
    local_148 = &local_b8;
    FUN_140023cbf(puVar7,uVar23,local_f8,&DAT_14cb33238);
    iVar9 = (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34);
    iVar1 = iVar9 + 0x3f;
    iVar9 = iVar9 + 0x7e;
    if (-1 < iVar1) {
      iVar9 = iVar1;
    }
    puVar13 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
    puVar20 = puVar13 + 4;
    if ((undefined8 *)puVar7[1] < puVar20) {
      FUN_140023dd8(puVar7,0x28);
      puVar13 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
      puVar20 = puVar13 + 4;
    }
    *puVar7 = (ulonglong)puVar20;
    *(int *)(puVar7 + 0xc) = (int)puVar7[0xc] + 1;
    *(undefined8 **)puVar7[6] = puVar13;
    puVar7[6] = (ulonglong)(puVar13 + 1);
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_14a1fbc30;
    *(int *)(puVar13 + 2) = iVar9 >> 6;
    *(undefined1 **)((longlong)puVar13 + 0x14) = &DAT_100000001;
    FUN_14804b5b0(puVar7,&local_f8,uVar23);
    local_70 = *(undefined8 *)(param_5 + 8);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 3;
    local_64 = 0x1000000400;
    local_5c = 0;
    local_50 = 0;
    local_c0 = 1;
    local_c8 = &local_80;
    FUN_144760590(puVar7,&local_c8,0);
    local_70 = *(undefined8 *)(param_5 + 0x28);
    local_80 = -1;
    local_78 = 0xffffffff;
    local_68 = 3;
    local_64 = 0x1000000400;
    local_5c = 0;
    local_50 = 0;
    local_c0 = 1;
    local_c8 = &local_80;
    FUN_144760590(puVar7,&local_c8,0);
    lVar15 = lStack_e0;
    if (lStack_e0 != 0) {
      LOCK();
      puVar11 = (uint *)(lStack_e0 + 8);
      uVar8 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(lStack_e0 + 8);
        LOCK();
        uVar8 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lStack_e0 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar16 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar16;
              LOCK();
              bVar26 = plVar16 != DAT_14ca843c0;
              plVar14 = plVar10;
              if (bVar26) {
                plVar16 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar26 = plVar14 != DAT_14ca843c8;
              plVar16 = plVar10;
              if (bVar26) {
                plVar14 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
    lVar15 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      puVar11 = (uint *)(local_e8 + 8);
      uVar8 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(local_e8 + 8);
        LOCK();
        uVar8 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_e8 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar15;
          plVar16 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar16;
              LOCK();
              bVar26 = plVar16 != DAT_14ca843c0;
              plVar14 = plVar10;
              if (bVar26) {
                plVar16 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar26);
          }
          else {
            do {
              *plVar10 = (longlong)plVar14;
              LOCK();
              bVar26 = plVar14 != DAT_14ca843c8;
              plVar16 = plVar10;
              if (bVar26) {
                plVar14 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar26);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140756a0c FUN_140756a0c body=199 status=ok
// SIG undefined FUN_140756a0c(void)

undefined8 FUN_140756a0c(longlong param_1,void *param_2,size_t param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  size_t _Size;
  
  if ((longlong)param_3 < 1) {
LAB_140756acf:
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x3c)) {
      cVar1 = FUN_140756ad4(param_1);
      if (cVar1 == '\0') goto LAB_140756acf;
      FUN_140756b76(param_1,*(undefined4 *)(param_1 + 0x40));
    }
    do {
      sVar2 = (longlong)*(int *)(param_1 + 0x38) - (longlong)*(int *)(param_1 + 0x44);
      _Size = sVar2;
      if ((longlong)param_3 < (longlong)sVar2) {
        _Size = param_3;
      }
      if (*(longlong *)(param_1 + 0x10) < (longlong)(*(longlong *)(param_1 + 0x18) + _Size))
      goto LAB_140756acf;
      if ((int)sVar2 < 1) {
        cVar1 = FUN_140756ad4(param_1);
        if (cVar1 == '\0') goto LAB_140756acf;
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) ^ 1;
        *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) ^ 1;
        *(undefined4 *)(param_1 + 0x44) = 0;
        FUN_140756b76(param_1);
      }
      else {
        memcpy(param_2,(void *)((longlong)*(int *)(param_1 + 0x44) +
                               *(longlong *)
                                (param_1 + 0x28 + (longlong)*(int *)(param_1 + 0x3c) * 8)),_Size);
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)_Size;
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + _Size;
        param_3 = param_3 - _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
      }
      uVar3 = 1;
    } while (0 < (longlong)param_3);
  }
  return uVar3;
}



// FUNCTION 140756ad4 FUN_140756ad4 body=161 status=ok
// SIG undefined FUN_140756ad4(void)

undefined8 FUN_140756ad4(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  undefined1 auStack_38 [36];
  DWORD local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar3 = CONCAT71((int7)(local_10 >> 8),1);
  if ((*(char *)(param_1 + 0x78) == '\0') && (*(char *)(param_1 + 0x79) == '\x01')) {
    local_14 = 0;
    BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)(param_1 + 0x58),&local_14,1)
    ;
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      uVar3 = CONCAT44(extraout_var,DVar2);
      if (DVar2 != 0x26) {
        uVar3 = 0;
        goto LAB_140756b42;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x79) = 0;
      uVar4 = (ulonglong)local_14 + *(longlong *)(param_1 + 0x20);
      *(ulonglong *)(param_1 + 0x20) = uVar4;
      *(ulonglong *)(param_1 + 0x68) = uVar4;
      uVar3 = CONCAT71((uint7)(uVar4 >> 0x28),1);
      if (uVar4 < *(ulonglong *)(param_1 + 0x10)) goto LAB_140756b42;
    }
    *(undefined1 *)(param_1 + 0x78) = 1;
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
LAB_140756b42:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140756b76 FUN_140756b76 body=173 status=ok
// SIG undefined FUN_140756b76(void)

void FUN_140756b76(longlong param_1,int param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined1 auStackY_48 [32];
  DWORD local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStackY_48;
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x79) = 1;
    *(int *)(param_1 + 0x48) = param_2;
    local_14 = 0;
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 8),*(LPVOID *)(param_1 + 0x28 + (longlong)param_2 * 8),
                     *(DWORD *)(param_1 + 0x38),&local_14,(LPOVERLAPPED)(param_1 + 0x58));
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 != 0x3e5) {
        *(undefined2 *)(param_1 + 0x78) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x79) = 0;
      uVar3 = (ulonglong)local_14 + *(longlong *)(param_1 + 0x20);
      *(ulonglong *)(param_1 + 0x20) = uVar3;
      *(ulonglong *)(param_1 + 0x68) = uVar3;
      if (*(ulonglong *)(param_1 + 0x10) <= uVar3) {
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStackY_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140756c31 FUN_140756c31 body=976 status=ok
// SIG undefined FUN_140756c31(void)

void FUN_140756c31(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_2;
  local_80 = param_3;
  local_78 = param_4;
  bVar7 = FUN_14492b351(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)param_1 * 2),param_1);
  uVar18 = 0x22;
  if (2 < (int)param_1) {
    cVar8 = FUN_1447be618(*(undefined2 *)(&DAT_14ca85070 + (ulonglong)param_1 * 2));
    lVar6 = DAT_14ca43398;
    if (cVar8 != '\0') {
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar15 = 0;
      }
      else if (iVar3 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar15 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar15 = 1;
      }
      uVar18 = (*(int *)(lVar6 + uVar15 * 4) == 0) + 0x22;
    }
  }
  uVar20 = 1;
  if (bVar7 == 0) {
    uVar20 = uVar18;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b61e0) {
    FUN_144b3d300(&DAT_14c9b61e0);
    if (DAT_14c9b61e0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar14 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.BasePassOutputsVelocityDebug",1);
      if (plVar14 == (longlong *)0x0) {
        DAT_14c9b61d8 = 0;
      }
      else {
        DAT_14c9b61d8 = (**(code **)(*plVar14 + 0x68))(plVar14);
      }
      _Init_thread_footer(&DAT_14c9b61e0);
    }
  }
  if ((DAT_14c9b61d8 == 0) || (*(int *)(DAT_14c9b61d8 + 4) != 2)) {
    puVar11 = &DAT_14c9c0d50;
  }
  else {
    puVar11 = &DAT_14c9b7ad0;
  }
  uVar4 = *puVar11;
  puVar16 = &DAT_14c9c0e90;
  if ((uVar20 & 2) == 0) {
    puVar16 = &DAT_14c9c07b0;
  }
  puVar12 = &DAT_14ca5e728;
  if (bVar7 == 0) {
    puVar12 = puVar16;
  }
  uVar5 = *(undefined8 *)(puVar12 + 0x10);
  puVar11 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8)
  ;
  puVar17 = (uint *)*puVar11;
  if (puVar17 != (uint *)0x0) goto LAB_140756da6;
  while( true ) {
    FUN_14472e504(puVar11);
    puVar17 = (uint *)*puVar11;
LAB_140756da6:
    puVar13 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar18 = puVar17[0x12];
    if (puVar13 + 0x10 <= puVar17 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
      LOCK();
      uVar1 = *puVar17;
      *puVar17 = *puVar17 + uVar18 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar18) != 0xffffffff) break;
      puVar17 = (uint *)*puVar11;
      *puVar17 = 0xffffffff;
      *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
      puVar17[0x12] = 0;
      *puVar11 = puVar17;
      puVar13 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
      uVar18 = 0;
      if (puVar13 + 0x10 <= puVar17 + 0x4000) {
        uVar18 = 1;
        goto LAB_140756e22;
      }
    }
  }
  uVar18 = uVar18 + 1;
LAB_140756e22:
  *(undefined8 **)(puVar17 + 0x10) = puVar13 + 0x11;
  puVar17[0x12] = uVar18;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar17;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x80;
  *(undefined4 *)(puVar13 + 1) =
       *(undefined4 *)(&DAT_14ca11f34 + (ulonglong)(2 < (int)param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x505;
  puVar13[3] = local_88;
  *(uint *)(puVar13 + 4) = param_1;
  puVar13[5] = local_80;
  puVar13[6] = local_78;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a30b410;
  puVar13[8] = uVar4;
  puVar13[9] = uVar5;
  *(uint *)(puVar13 + 10) = uVar20;
  *(undefined4 *)((longlong)puVar13 + 0x54) = uStack_6c;
  *(undefined4 *)(puVar13 + 0xb) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar13 + 0x5c) = local_68._4_4_;
  *(undefined4 *)(puVar13 + 0xc) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar13 + 100) = uStack_60._4_4_;
  *(undefined4 *)(puVar13 + 0xd) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar13 + 0x6c) = local_58._4_4_;
  *(undefined4 *)(puVar13 + 0xe) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar13 + 0x74) = uStack_50._4_4_;
  *(uint *)(puVar13 + 0xf) = (uint)bVar7;
  uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)(int)param_1 * 2);
  if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)uVar2 * 0x3c + 5) & 4) != 0) {
    puVar19 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar19 = DAT_14ca96af8;
    }
    if ((((uint)puVar19[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0) &&
       (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf])) {
      puVar13[8] = DAT_14ca5e720;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140757002 FUN_140757002 body=2417 status=ok
// SIG undefined FUN_140757002(void)

void FUN_140757002(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_1f8 [40];
  undefined1 local_1d0 [112];
  undefined1 local_160 [112];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  char *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 8;
  if ((*(byte *)(param_1 + 0x418) & 1) == 0) {
    *(byte *)(param_1 + 0x950) = *(byte *)(param_1 + 0x950) & 0xf7;
  }
  if ((*(longlong *)(param_1 + 0xa40) != 0) || (*(longlong *)(param_1 + 0x660) == 0))
  goto LAB_140757689;
  lVar13 = *(longlong *)(param_1 + 0xb0);
  if ((lVar13 == 0) && (lVar13 = FUN_1448abda6(), lVar13 == 0)) {
LAB_1407572c2:
    lVar13 = *(longlong *)(param_1 + 0xb0);
    if (lVar13 == 0) {
      lVar13 = FUN_1448abda6(param_1);
      if (lVar13 == 0) {
        cVar6 = '\0';
        goto LAB_1407570cc;
      }
      lVar13 = *(longlong *)(param_1 + 0xb0);
      if (lVar13 == 0) {
        lVar13 = FUN_1448abda6(param_1);
      }
    }
    cVar6 = FUN_1407579fa(lVar13);
  }
  else {
    if (*(longlong *)(param_1 + 0x658) == 0) {
      lVar20 = *(longlong *)(param_1 + 0xb0);
      if (((lVar20 != 0) || (lVar20 = FUN_1448abda6(), lVar20 != 0)) &&
         (*(longlong *)(lVar20 + 0x260) != 0)) {
        plVar11 = (longlong *)(*(longlong *)(lVar20 + 0x260) + 0x38);
        goto LAB_14075709c;
      }
      lVar20 = 0;
    }
    else {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x658) + 0x550);
LAB_14075709c:
      lVar20 = *plVar11;
    }
    bVar17 = *(char *)(lVar13 + 0x152) - 1;
    if (((5 < bVar17) || (cVar6 = '\x01', (0x35U >> (bVar17 & 0x1f) & 1) == 0)) &&
       ((cVar6 = '\x01', DAT_14caa9628 == '\0' &&
        ((lVar20 == 0 || (*(char *)(lVar20 + 0x68) == '\0')))))) goto LAB_1407572c2;
  }
LAB_1407570cc:
  lVar13 = *(longlong *)(param_1 + 0xa48);
  if ((lVar13 == 0) || (cVar6 != '\x01' || *(int *)(*(longlong *)(lVar13 + 0xb8) + 200) < 1))
  goto LAB_140757689;
  *(undefined4 *)(param_1 + 0x980) = 5;
  *(longlong *)(param_1 + 0x988) = param_1;
  cVar6 = '\x04';
  if (*(char *)(param_1 + 0x67a) != '\x01') {
    cVar6 = *(char *)(param_1 + 0x67a);
  }
  if (cVar6 != 'd') {
    plVar11 = (longlong *)(lVar13 + 0x150);
    if ((cVar6 == '\x04') && (lVar20 = *(longlong *)(param_1 + 0x660), lVar20 != 0)) {
      lVar16 = *(longlong *)(lVar20 + 0x218);
      plVar15 = *(longlong **)(lVar20 + 0x220);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar15 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      iVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
      if (0 < iVar7) {
        lVar20 = 0;
        do {
          iVar7 = *(int *)(*(longlong *)(lVar16 + 0x1f0) + lVar20 * 4);
          uVar5 = (undefined1)iVar7;
          if (iVar7 == 0) {
            uVar5 = 4;
          }
          *(undefined1 *)(*(longlong *)(lVar13 + 0x160) + lVar20) = uVar5;
          lVar20 = lVar20 + 1;
          iVar7 = (**(code **)(*(longlong *)(lVar13 + 0x150) + 0x60))(plVar11);
        } while (lVar20 < iVar7);
      }
    }
    else {
      iVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
      if (0 < iVar7) {
        lVar20 = 0;
        do {
          *(char *)(*(longlong *)(lVar13 + 0x160) + lVar20) = cVar6;
          lVar20 = lVar20 + 1;
          iVar7 = (**(code **)(*(longlong *)(lVar13 + 0x150) + 0x60))(plVar11);
        } while (lVar20 < iVar7);
      }
    }
  }
  lVar13 = *(longlong *)(param_1 + 0xa48);
  plVar11 = (longlong *)(lVar13 + 0x120);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (plVar15 == (longlong *)0x0) {
    cVar6 = FUN_140498cd4(uVar3,DAT_14c996a18,DAT_14c9974a8);
    if (cVar6 != '\0') goto LAB_1407571ff;
LAB_1407573c3:
    iVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
    if (0 < iVar7) {
      uVar14 = 0;
      do {
        lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        uVar21 = 1 << ((byte)uVar14 & 0x1f);
        lVar16 = *(longlong *)(lVar13 + 0x140);
        if (*(longlong *)(lVar13 + 0x140) == 0) {
          lVar16 = lVar13 + 0x130;
        }
        uVar19 = uVar14 >> 5 & 0x7ffffff;
        if (*(int *)(*(longlong *)(lVar20 + 0x1b0) + uVar14 * 4) == 1) {
          uVar21 = uVar21 | *(uint *)(lVar16 + uVar19 * 4);
        }
        else {
          uVar21 = ~uVar21 & *(uint *)(lVar16 + uVar19 * 4);
        }
        *(uint *)(lVar16 + uVar19 * 4) = uVar21;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        uVar14 = uVar14 + 1;
        iVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
      } while ((longlong)uVar14 < (longlong)iVar7);
    }
  }
  else {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    cVar6 = FUN_140498cd4(uVar3,DAT_14c996a18,DAT_14c9974a8);
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if (cVar6 == '\0') goto LAB_1407573c3;
LAB_1407571ff:
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
    plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (plVar15 == (longlong *)0x0) {
      lVar20 = FUN_140757d0a(uVar3,DAT_14c996a18,DAT_14c9974a8);
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      lVar20 = FUN_140757d0a(uVar3,DAT_14c996a18,DAT_14c9974a8);
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    iVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
    if (0 < iVar7) {
      uVar21 = 0;
      do {
        uVar8 = 1 << ((byte)uVar21 & 0x1f);
        lVar16 = *(longlong *)(lVar20 + 0x20);
        if (*(longlong *)(lVar20 + 0x20) == 0) {
          lVar16 = lVar20 + 0x10;
        }
        uVar14 = (ulonglong)(uVar21 >> 5);
        lVar18 = *(longlong *)(lVar13 + 0x140);
        if (*(longlong *)(lVar13 + 0x140) == 0) {
          lVar18 = lVar13 + 0x130;
        }
        if ((*(uint *)(lVar16 + uVar14 * 4) >> (uVar21 & 0x1f) & 1) == 0) {
          uVar8 = ~uVar8 & *(uint *)(lVar18 + uVar14 * 4);
        }
        else {
          uVar8 = uVar8 | *(uint *)(lVar18 + uVar14 * 4);
        }
        *(uint *)(lVar18 + uVar14 * 4) = uVar8;
        uVar21 = uVar21 + 1;
        iVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
      } while ((int)uVar21 < iVar7);
    }
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  uVar4 = DAT_14c9974a8;
  local_d8 = "Level";
  local_d0 = CONCAT35(local_d0._5_3_,5);
  uVar9 = FUN_14001a6c0(&local_d8,1);
  cVar6 = FUN_140498cd4(uVar3,uVar9,uVar4);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar11 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if (cVar6 == '\0') {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar4 = DAT_14c9974a8;
    local_e8 = 0;
    local_e0 = 1;
    FUN_1446ddc76(&local_f0,"Level",1);
    plVar15 = (longlong *)FUN_140b1fb8c(uVar3,local_f0,uVar4,&local_e8);
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
    iVar7 = (**(code **)(*plVar15 + 0x60))(plVar15);
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
        if (plVar11 == (longlong *)0x0) {
          FUN_146ee9550(iVar7,lVar13 + 0x110,plVar15);
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          FUN_146ee9550(iVar7,lVar13 + 0x110,plVar15);
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
        iVar7 = iVar7 + 1;
        iVar22 = (**(code **)(*plVar15 + 0x60))(plVar15);
      } while (iVar7 < iVar22);
    }
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (plVar11 == (longlong *)0x0) {
    FUN_140757a08(local_160,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    FUN_140757a08(local_160,uVar3);
    LOCK();
    plVar15 = plVar11 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  FUN_140757a08(local_1d0,*(undefined8 *)(param_1 + 0xa48));
  FUN_140757bfc(local_1d0,local_160);
  pcVar12 = (char *)FUN_14099bfa2();
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_d8 = pcVar12;
  local_d0 = param_1;
  lVar13 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar11 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar11 = local_78;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (lVar13 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar13);
  }
  bVar17 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xa50) = lVar13;
  if ((lVar13 == 0) || ((bVar17 & 1) == 0)) {
    if (lVar13 != 0) goto LAB_1407575d1;
    uVar21 = 0;
    uVar14 = 0;
  }
  else {
    FUN_1456cec3c(lVar13);
LAB_1407575d1:
    uVar21 = *(uint *)(lVar13 + 0xc);
    if ((int)uVar21 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar14 = (ulonglong)*(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar10 = *(uint *)(lVar13 + 0x10);
      bVar23 = uVar10 == 0;
      if (bVar23) {
        *(uint *)(lVar13 + 0x10) = uVar8;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar23) {
        uVar10 = uVar8;
      }
      uVar14 = (ulonglong)uVar10;
    }
  }
  *(ulonglong *)(param_1 + 0x410) = (ulonglong)uVar21 | uVar14 << 0x20;
  if (param_1 == 0) {
    uRam0000000000000550 = 0;
    iVar7 = 0;
  }
  else {
    uVar21 = *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 0x550) = uVar21;
    if ((int)uVar21 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar7 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar22 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar22);
      }
      LOCK();
      iVar7 = *(int *)(lVar13 + 0x10);
      bVar23 = iVar7 == 0;
      if (bVar23) {
        *(int *)(lVar13 + 0x10) = iVar22;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar7 = iVar22;
      }
    }
  }
  *(int *)(param_1 + 0x554) = iVar7;
  FUN_140757c4e(param_1);
  if ((*(byte *)(param_1 + 0x418) & 1) != 0) {
    FUN_140758034(param_1);
    FUN_140757974(param_1 + 0x59e,param_1,0);
  }
LAB_140757689:
  if ((local_40 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140757974 FUN_140757974 body=133 status=ok
// SIG undefined FUN_140757974(void)

void FUN_140757974(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140156614(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1417adf60(local_30,param_2,param_3);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407579fa FUN_1407579fa body=14 status=ok
// SIG undefined FUN_1407579fa(void)

bool FUN_1407579fa(longlong param_1)

{
  return (*(byte *)(param_1 + 0x152) & 0xfe) == 4;
}



// FUNCTION 140757a08 FUN_140757a08 body=232 status=ok
// SIG undefined FUN_140757a08(void)

undefined8 * FUN_140757a08(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = "InitialDynamicState";
  local_30 = 0x13;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = (ulonglong)uVar1;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  uVar2 = FUN_140757af2(param_2);
  param_1[5] = uVar2;
  param_1[6] = uVar2;
  local_38 = "Anchored";
  local_30 = 8;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[9] = (ulonglong)uVar1;
  param_1[10] = DAT_14c9974a8;
  param_1[0xb] = 0;
  uVar2 = FUN_1401c090c(param_2);
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140757af2 FUN_140757af2 body=265 status=ok
// SIG undefined FUN_140757af2(void)

longlong FUN_140757af2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((char *)(lVar1 + 0x10) == (char *)0x0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x10) == '\x05') {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140757bfc FUN_140757bfc body=81 status=ok
// SIG undefined FUN_140757bfc(void)

void FUN_140757bfc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1408a6bca(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x38),
                  *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50));
    uVar1 = FUN_1401c090c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                          *(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  return;
}



// FUNCTION 140757c4e FUN_140757c4e body=186 status=ok
// SIG undefined FUN_140757c4e(void)

void FUN_140757c4e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_144a2a070(param_1 + 0x410,&local_48,0xffffffff);
  *(undefined8 *)(param_1 + 0x95c) = local_48;
  *(undefined8 *)(param_1 + 0x964) = uStack_40;
  *(undefined4 *)(param_1 + 0x96c) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x970) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x974) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 0x978) = uStack_30._4_4_;
  uVar1 = *(uint *)(param_1 + 0x978);
  *(uint *)(param_1 + 0x978) = uVar1 | 3;
  uVar2 = *(uint *)(param_1 + 0x968);
  *(uint *)(param_1 + 0x968) = uVar2 | 3;
  if ((*(char *)(param_1 + 0x841) != '\0') || (*(char *)(param_1 + 0x847) == '\x01')) {
    *(uint *)(param_1 + 0x978) = uVar1 | 0xb;
    *(uint *)(param_1 + 0x968) = uVar2 | 0xb;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140757d0a FUN_140757d0a body=260 status=ok
// SIG undefined FUN_140757d0a(void)

longlong FUN_140757d0a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (uint)param_3;
  uVar4 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar4 = (int)((ulonglong)param_2 >> 0x20) + (uVar4 << 0x10 | uVar4 & 0xffff) +
            ((uVar4 & 0xffff) >> 4) + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar4 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar5 * 0x10000 + (uVar5 & 0xffff)
                              + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10) + ((uVar5 & 0xffff) >> 4)
                              + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar3 = (longlong)iVar2 * 0x40;
        lVar1 = lVar6 + lVar3;
        if ((*(longlong *)(lVar6 + lVar3) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar3) == param_3)) break;
        iVar2 = *(int *)(lVar1 + 0x38);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if (lVar1 == -0x10) {
        return 0;
      }
      FUN_1448c236a();
      lVar6 = *(longlong *)(lVar1 + 0x30);
      *(undefined1 *)(lVar6 + 8) = 1;
      return lVar6;
    }
  }
  return 0;
}



// FUNCTION 140757e0e FUN_140757e0e body=36 status=ok
// SIG undefined FUN_140757e0e(void)

bool FUN_140757e0e(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(char *)((longlong)param_1 + 0x1fb) == '\x02') {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x580))();
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 140757e32 FUN_140757e32 body=228 status=ok
// SIG undefined FUN_140757e32(void)

longlong FUN_140757e32(void)

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
  if (DAT_14cac1410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14786f3d1;
    local_40 = FUN_14637933d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"GbxLagCompensator",&DAT_14cac1410,&DAT_14786f3d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140757f18 FUN_140757f18 body=145 status=ok
// SIG undefined FUN_140757f18(void)

undefined1 FUN_140757f18(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  if ((((*(byte *)((longlong)param_1 + 0x3b) & 2) == 0) || ((int)param_2 < 0)) ||
     ((int)param_1[8] <= (int)param_2)) {
    if (param_1[1] == 0) {
      return 0;
    }
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
    if (*(uint *)(plVar4 + 2) != param_1[1]) {
      return 0;
    }
    if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar4;
    }
    else {
      lVar2 = 0;
    }
    lVar2 = FUN_140757faa(lVar2 + 0x38);
    if (lVar2 == 0) {
      return 0;
    }
    puVar3 = (undefined1 *)(lVar2 + 0x19);
  }
  else {
    puVar3 = (undefined1 *)((ulonglong)param_2 + *(longlong *)(param_1 + 6));
  }
  return *puVar3;
}



// FUNCTION 140757faa FUN_140757faa body=138 status=ok
// SIG undefined FUN_140757faa(void)

longlong FUN_140757faa(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - (int)param_1[1];
  if (param_2 < (int)param_1[1]) {
    return (longlong)param_2 * 0x50 + *param_1;
  }
  iVar2 = iVar1 - (int)param_1[3];
  if (iVar1 < (int)param_1[3]) {
    return (longlong)iVar1 * 0x70 + param_1[2];
  }
  iVar1 = iVar2 - (int)param_1[5];
  if (iVar2 < (int)param_1[5]) {
    return (longlong)iVar2 * 0x68 + param_1[4];
  }
  iVar2 = iVar1 - (int)param_1[7];
  if (iVar1 < (int)param_1[7]) {
    return (longlong)iVar1 * 0x100 + param_1[6];
  }
  iVar1 = iVar2 - (int)param_1[9];
  if (iVar2 < (int)param_1[9]) {
    return (longlong)iVar2 * 0x70 + param_1[8];
  }
  iVar2 = iVar1 - (int)param_1[0xb];
  if (iVar1 < (int)param_1[0xb]) {
    return (longlong)iVar1 * 0xa0 + param_1[10];
  }
  if (iVar2 < (int)param_1[0xd]) {
    return (longlong)iVar2 * 0x38 + param_1[0xc];
  }
  return 0;
}



// FUNCTION 140758034 FUN_140758034 body=4721 status=ok
// SIG undefined FUN_140758034(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140758034(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uchar auVar3 [8];
  uchar auVar4 [8];
  byte bVar5;
  undefined1 uVar6;
  void *_Src;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined ***pppuVar19;
  byte bVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  byte bVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  int iVar26;
  longlong lVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined1 auStack_588 [32];
  undefined4 *local_568;
  undefined8 *local_560;
  longlong **local_558;
  undefined1 local_550;
  longlong *local_548;
  longlong *local_540;
  uchar *local_538;
  undefined4 local_530;
  uchar *local_528;
  undefined4 local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  longlong *local_4f8;
  uchar auStack_4f0 [8];
  undefined8 *local_4e0;
  undefined8 local_4d8;
  uchar local_4d0 [8];
  uchar local_4c8 [8];
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined1 local_4ac [4];
  code *local_4a8 [2];
  undefined ***local_498;
  undefined **local_488;
  longlong local_480;
  undefined1 *local_468;
  undefined ***local_458;
  undefined **local_448;
  longlong local_440;
  undefined1 *local_428 [2];
  undefined ***local_418;
  undefined **local_408;
  longlong local_400;
  undefined1 local_3e8 [16];
  longlong local_3d8;
  longlong lStack_3d0;
  longlong *local_3c8;
  longlong alStack_3c0 [2];
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 local_3a0;
  undefined8 local_398;
  byte local_390;
  undefined8 local_388 [12];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined8 *local_2b8;
  int local_2b0;
  int local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined2 local_29c;
  char local_29a;
  undefined1 uStack_299;
  uint uStack_298;
  undefined2 uStack_294;
  undefined2 uStack_292;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  float fStack_280;
  float fStack_27c;
  float local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined2 local_268;
  byte local_266;
  byte local_265;
  undefined2 local_264;
  undefined1 local_262;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  longlong local_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined8 uStack_20f;
  byte local_207;
  GUID local_1f8;
  uchar local_1e8 [8];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined2 *local_128;
  int local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110 [24];
  undefined1 local_b0 [80];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_588;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa9808) && (FUN_144b3d300(&DAT_14caa9808), DAT_14caa9808 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14caa9800 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"p.IgnoreAnalyticCollisionsOverride",1);
    _Init_thread_footer(&DAT_14caa9808);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa9810) && (FUN_144b3d300(&DAT_14caa9810), DAT_14caa9810 == -1)) {
    if (DAT_14caa9800 == (longlong *)0x0) {
      DAT_14caa980c = '\0';
    }
    else {
      DAT_14caa980c = (**(code **)(*DAT_14caa9800 + 0xa8))();
    }
    _Init_thread_footer(&DAT_14caa9810);
  }
  FUN_1400b22c2(local_3e8,&DAT_149e02088);
  uVar25 = 0;
  local_3d8 = 0;
  lStack_3d0 = 0;
  local_3c8 = (longlong *)0x0;
  alStack_3c0[0] = 0;
  local_3b0 = 0x3dcccccd;
  uStack_3ac = 0x47c35000;
  uStack_3a8 = 0x3dcccccd;
  uStack_3a4 = 0x49742400;
  local_3a0 = 0x60ad78ec322bcc77;
  local_398 = 0x3f8000000000003c;
  local_390 = (local_390 & 0xfc) + 1;
  alStack_3c0[1] = 1;
  FUN_1407599d4(alStack_3c0,0);
  FUN_140759459(alStack_3c0[0],1);
  puVar16 = &DAT_14c846480;
  puVar24 = local_388;
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar24 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar24 = puVar24 + 1;
  }
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_30c = 0x3ff00000;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e4 = 0x3ff00000;
  uStack_2e0 = 0;
  uStack_2dc = 0x3ff00000;
  local_2d8 = 0x3ff0000000000000;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = (undefined8 *)0x0;
  local_2b0 = 3;
  FUN_1447c510a(&local_2b8,3,0);
  *local_2b8 = 0x4743500048f42400;
  *(undefined4 *)(local_2b8 + 1) = 0x459c4000;
  local_2a8 = 0xffffffff;
  local_2a0 = 0x640064;
  local_29c = 0x100;
  local_29a = 0;
  uStack_299 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_292 = 0;
  local_290 = 0;
  local_28c = 0x3f800000;
  local_288 = 0;
  fStack_280 = 0.0;
  fStack_27c = 0.0;
  local_278 = 0.0;
  local_274 = 0;
  local_26c = 0x3f800000;
  local_268 = 0x22;
  local_266 = 0x53;
  local_265 = local_265 & 0xfe;
  local_264 = 0x108;
  local_262 = 1;
  local_260 = 0x3f800000;
  uStack_258 = 0x3c23d70a;
  local_250 = 0xbf800000;
  uStack_24c = 0x3f800000;
  uStack_248 = 0;
  uStack_244 = 0xffffffff;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  uStack_217 = 0;
  uStack_210 = 0;
  uStack_20f = 0;
  local_207 = local_207 & 0xfc;
  if (*(longlong *)(param_1 + 0x660) == 0) {
    bVar23 = *(byte *)(param_1 + 0x6bc);
    uVar29 = 0;
LAB_14075831d:
    cVar9 = '\0';
  }
  else {
    FUN_14075d0ac(*(longlong *)(param_1 + 0x660),alStack_3c0);
    plVar21 = local_3c8;
    lStack_3d0 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
    plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (plVar15 == (longlong *)0x0) {
      if (local_3c8 != (longlong *)0x0) {
        local_3c8 = (longlong *)0x0;
LAB_140758f8e:
        LOCK();
        plVar1 = plVar21 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
        if (plVar15 != (longlong *)0x0) goto LAB_1407582af;
      }
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      if (plVar15 == local_3c8) {
        LOCK();
        plVar21 = plVar15 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
      else {
        bVar28 = local_3c8 != (longlong *)0x0;
        local_3c8 = plVar15;
        if (bVar28) goto LAB_140758f8e;
      }
LAB_1407582af:
      LOCK();
      plVar21 = plVar15 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
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
    local_3d8 = lStack_3d0;
    lVar17 = *(longlong *)(param_1 + 0x660);
    local_2a8 = CONCAT44(local_2a8._4_4_,*(undefined4 *)(lVar17 + 0x1e8));
    bVar23 = *(byte *)(lVar17 + 0x88);
    uVar29 = *(undefined4 *)(lVar17 + 0x8c);
    if ((((DAT_14c75f314 != '\x01') || (lStack_3d0 == 0)) ||
        (cVar9 = FUN_140498cd4(lStack_3d0,DAT_14c9968b8,DAT_14c9974a8), cVar9 == '\0')) ||
       (*(int *)(alStack_3c0[0] + 0x10) == 0)) goto LAB_14075831d;
    cVar9 = '\x01';
    if (**(char **)(alStack_3c0[0] + 8) != '\x01') {
      cVar9 = DAT_14caa980c;
    }
  }
  if (*(char *)(param_1 + 0x686) == '\x01') {
    uVar25 = *(undefined4 *)(param_1 + 0x688);
  }
  local_2a8 = CONCAT44(uVar25,(undefined4)local_2a8);
  local_2a0 = CONCAT22(*(undefined2 *)(param_1 + 0x690),*(undefined2 *)(param_1 + 0x68c));
  local_29a = *(char *)(param_1 + 0x694);
  uStack_299 = local_29a == '\x01';
  local_268 = CONCAT11(local_268._1_1_,
                       *(char *)(param_1 + 0x6a9) << 3 | *(char *)(param_1 + 0x6a8) << 2 |
                       *(char *)(param_1 + 0x686) * '\x02' |
                       (byte)local_268 & 0xf0 | *(byte *)(param_1 + 0x418) & 1);
  if (&local_2b8 != (undefined8 **)(param_1 + 0x698)) {
    iVar12 = *(int *)(param_1 + 0x6a0);
    _Src = *(void **)(param_1 + 0x698);
    local_2b0 = iVar12;
    if (iVar12 == 0 && local_2ac == 0) {
      local_2ac = 0;
    }
    else {
      FUN_1447c510a(&local_2b8);
      if (iVar12 != 0) {
        memcpy(local_2b8,_Src,(longlong)iVar12 << 2);
      }
    }
  }
  lVar17 = *(longlong *)(param_1 + 0x660);
  if (lVar17 == 0) {
    bVar20 = 0;
  }
  else {
    bVar20 = *(char *)(lVar17 + 0x7a) << 4;
  }
  uStack_298 = (uint)bVar23;
  uStack_294 = (undefined2)uVar29;
  uStack_292 = (undefined2)((uint)uVar29 >> 0x10);
  local_290 = *(undefined4 *)(param_1 + 0x6c0);
  local_28c = *(undefined4 *)(param_1 + 0x6c4);
  fStack_280 = (float)*(double *)(param_1 + 0x6f0);
  local_288 = CONCAT44((float)*(double *)(param_1 + 0x6e8),(float)*(double *)(param_1 + 0x6e0));
  local_278 = (float)*(double *)(param_1 + 0x700);
  fStack_27c = (float)*(double *)(param_1 + 0x6f8);
  local_274 = CONCAT44(local_274._4_4_,(float)*(double *)(param_1 + 0x708));
  local_29c = CONCAT11(*(undefined1 *)(param_1 + 0x6d8),*(undefined1 *)(param_1 + 0x67a));
  bVar23 = *(byte *)(param_1 + 0x418);
  local_268 = CONCAT11(*(char *)(param_1 + 0x84a) << 7 | *(char *)(param_1 + 0x849) << 6 |
                       *(char *)(param_1 + 0x847) << 5 |
                       *(char *)(param_1 + 0x846) << 4 |
                       *(char *)(param_1 + 0x845) << 3 |
                       *(char *)(param_1 + 0x844) << 2 |
                       *(char *)(param_1 + 0x842) * '\x02' | *(byte *)(param_1 + 0x841),
                       *(char *)(param_1 + 0x840) << 7 |
                       bVar23 & 0x20 |
                       bVar20 & 0x10 | (byte)local_268 & 0xf | *(char *)(param_1 + 0x6bb) << 6);
  uStack_248 = *(undefined4 *)(param_1 + 0x67c);
  uStack_244 = *(undefined4 *)(param_1 + 0x680);
  bVar20 = *(byte *)(param_1 + 0x44d);
  bVar5 = *(byte *)(param_1 + 1099);
  local_264 = *(undefined2 *)(param_1 + 0x422);
  local_262 = *(undefined1 *)(param_1 + 0x424);
  uStack_258 = *(undefined8 *)(param_1 + 0x4b8);
  local_250 = *(undefined4 *)(param_1 + 0x4a8);
  if (*(char *)(param_1 + 0x449) == '\x01') {
    puVar13 = &DAT_14c761710;
LAB_14075903b:
    uStack_24c = *puVar13;
  }
  else {
    if (*(char *)(param_1 + 0x449) == '\x02') {
      puVar13 = (undefined4 *)(param_1 + 0x53c);
      goto LAB_14075903b;
    }
    uStack_24c = 0x3f800000;
  }
  local_265 = local_265 & 0xfe | *(byte *)(param_1 + 0x6ac);
  local_260 = *(undefined8 *)(param_1 + 0x6b0);
  puVar16 = (undefined8 *)(param_1 + 0x240);
  puVar24 = local_388;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar24 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar24 = puVar24 + 1;
  }
  local_220 = param_1 + 0x980;
  if (lVar17 == 0) {
    bVar10 = 0x40;
  }
  else {
    bVar10 = *(char *)(lVar17 + 0x105) << 6;
  }
  local_266 = cVar9 << 7 |
              (*(char *)(param_1 + 0x873) << 5 | *(char *)(param_1 + 0x6b8) << 4) & 0x3fU |
              bVar5 & 8 | bVar20 >> 6 & 2 | bVar23 >> 2 & 1 | bVar5 * '\x04' & 4 | bVar10;
  local_207 = local_207 | 1;
  uStack_20f = CONCAT17(*(undefined1 *)(param_1 + 0x718),
                        CONCAT43(*(undefined4 *)(param_1 + 0x728),(undefined3)uStack_20f));
  lVar17 = FUN_14075957a(param_1);
  if (lVar17 != 0) {
    puVar13 = (undefined4 *)FUN_14488068a(lVar17);
    local_274 = CONCAT44(*puVar13,(undefined4)local_274);
  }
  local_26c = FUN_1407594de(param_1);
  uVar8 = uStack_2c0;
  FUN_1408bc7be(local_2c8,uStack_2c0 & 0xffffffff);
  uVar7 = uStack_2c0 >> 0x20;
  uStack_2c0 = uStack_2c0 & 0xffffffff00000000;
  if (((longlong)uVar8 < 0) && ((int)uVar7 != 0)) {
    FUN_146eee2a6(&local_2c8,0);
  }
  if ((longlong)*(int *)(param_1 + 0x670) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x668);
    local_540 = plVar15 + *(int *)(param_1 + 0x670);
    do {
      lVar17 = *plVar15;
      if ((lVar17 != 0) && (lVar18 = *(longlong *)(lVar17 + 0x390), lVar18 != 0)) {
        iVar12 = *(int *)(lVar18 + 0x648);
        if (iVar12 < 1) {
          if (*(longlong *)(lVar18 + 0x620) != 0) {
            if (*(longlong *)(param_1 + 0xa8) == 0) {
              FUN_1446f470e(&local_4d8,&DAT_149dfb77a,1);
            }
            else {
              local_1f8._0_8_ = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x18);
              FUN_1400021e4(&local_1f8,&local_128);
              puVar22 = &DAT_149dfb77a;
              if (local_120 != 0) {
                puVar22 = local_128;
              }
              FUN_1446f470e(&local_4d8,puVar22,1);
              if (local_128 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x390) + 0x620);
            lVar18 = (longlong)*(int *)(lVar17 + 0x30);
            if (lVar18 != 0) {
              lVar17 = *(longlong *)(lVar17 + 0x28);
              lVar18 = lVar18 * 200 + lVar17;
              do {
                if (*(longlong **)(lVar17 + 8) != (longlong *)0x0) {
                  uVar14 = (**(code **)(**(longlong **)(lVar17 + 8) + 0x18))();
                  FUN_1474a85ce(&local_128,lVar17,uVar14);
                  local_118 = local_4d8;
                  iVar12 = 0;
                  local_110[0] = 0;
                  auVar3 = (uchar  [8])(lVar17 + 0x88);
                  local_4d0[0] = '\0';
                  local_4d0[1] = '\0';
                  local_4d0[2] = '\0';
                  local_4d0[3] = '\0';
                  local_4d0[4] = '\x01';
                  local_4d0[5] = '\0';
                  local_4d0[6] = '\0';
                  local_4d0[7] = '\0';
                  local_4c0 = 0xffffffff;
                  local_4b8 = 0;
                  local_4c8 = auVar3;
                  if (*(int *)(lVar17 + 0xa0) != 0) {
                    FUN_1449c0562(local_4d0);
                    iVar12 = *(int *)(lVar17 + 0xa0);
                  }
                  local_548 = (longlong *)(lVar17 + 0x78);
                  local_1e0 = local_4c0;
                  uVar14 = local_1e0;
                  local_1d8 = local_4b8;
                  local_1d4 = local_4b4;
                  local_1f8.Data4[0] = local_4d0[0];
                  local_1f8.Data4[1] = local_4d0[1];
                  local_1f8.Data4[2] = local_4d0[2];
                  local_1f8.Data4[3] = local_4d0[3];
                  local_1f8.Data4[4] = local_4d0[4];
                  local_1f8.Data4[5] = local_4d0[5];
                  local_1f8.Data4[6] = local_4d0[6];
                  local_1f8.Data4[7] = local_4d0[7];
                  local_1e8[0] = local_4c8[0];
                  local_1e8[1] = local_4c8[1];
                  local_1e8[2] = local_4c8[2];
                  local_1e8[3] = local_4c8[3];
                  local_1e8[4] = local_4c8[4];
                  local_1e8[5] = local_4c8[5];
                  local_1e8[6] = local_4c8[6];
                  local_1e8[7] = local_4c8[7];
                  local_1e0._4_4_ = (int)((ulonglong)local_4c0 >> 0x20);
                  iVar26 = local_1e0._4_4_;
                  local_1f8._0_8_ = local_548;
                  if ((local_1e0._4_4_ != iVar12) || (local_1e0 = uVar14, local_4c8 != auVar3)) {
                    do {
                      local_1e0 = uVar14;
                      auVar4 = (uchar  [8])(*(longlong *)local_1f8._0_8_ + (longlong)iVar26 * 0x18);
                      local_4e0 = (undefined8 *)
                                  (**(code **)(**(undefined8 **)((longlong)auVar4 + 8) + 0x10))();
                      local_4c8 = (uchar  [8])&local_4e0;
                      local_4d0 = auVar4;
                      FUN_1474ab0bc(local_b0,local_4ac,local_4d0);
                      if (local_4e0 != (undefined8 *)0x0) {
                        (**(code **)*local_4e0)(local_4e0,1);
                      }
                      local_1e0 = CONCAT44(local_1e0._4_4_,(uint)local_1e0 & ~local_1f8.Data4._4_4_)
                      ;
                      FUN_1449c0562(local_1f8.Data4);
                      iVar26 = local_1e0._4_4_;
                      uVar14 = local_1e0;
                    } while ((longlong *)local_1f8._0_8_ != local_548 ||
                             (local_1e8 != auVar3 || local_1e0._4_4_ != iVar12));
                  }
                  uVar7 = uStack_2c0;
                  lVar27 = (longlong)(int)uStack_2c0;
                  uVar11 = (int)uStack_2c0 + 1;
                  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar11);
                  if (uStack_2c0._4_4_ < uVar11) {
                    FUN_14173150e(&local_2c8,uVar7 & 0xffffffff);
                  }
                  FUN_1403c2a98(lVar27 * 200 + local_2c8,&local_128);
                  FUN_14017126a(&local_128);
                }
                lVar17 = lVar17 + 200;
              } while (lVar17 != lVar18);
            }
          }
        }
        else {
          iVar26 = 0;
          do {
            FUN_1474a8532(*(longlong *)(lVar17 + 0x390) + 0x640,&local_128,iVar26);
            uVar7 = uStack_2c0;
            if (CONCAT44(uStack_11c,local_120) != 0) {
              lVar18 = (longlong)(int)uStack_2c0;
              uVar11 = (int)uStack_2c0 + 1;
              uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar11);
              if (uStack_2c0._4_4_ < uVar11) {
                FUN_14173150e(&local_2c8,uVar7 & 0xffffffff);
              }
              FUN_1403c2a98(lVar18 * 200 + local_2c8,&local_128);
              lVar18 = *(longlong *)(param_1 + 0xb0);
              if (((lVar18 != 0) || (lVar18 = FUN_1448abda6(param_1), lVar18 != 0)) &&
                 (*(longlong *)(lVar18 + 0x288) != 0)) {
                if (*(longlong *)(param_1 + 0xa8) == 0) {
                  FUN_1446f470e(local_4d0,&DAT_149dfb77a,1);
                }
                else {
                  local_4d0 = *(uchar (*) [8])(*(longlong *)(param_1 + 0xa8) + 0x18);
                  FUN_1400021e4(local_4d0,&local_1f8);
                  plVar21 = (longlong *)&DAT_149dfb77a;
                  if (local_1f8.Data4._0_4_ != 0) {
                    plVar21 = (longlong *)local_1f8._0_8_;
                  }
                  FUN_1446f470e(local_4d0,plVar21,1);
                  if ((longlong *)local_1f8._0_8_ != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                FUN_1403c2a98(&local_1f8,&local_128);
                local_1e8[0] = local_4d0[0];
                local_1e8[1] = local_4d0[1];
                local_1e8[2] = local_4d0[2];
                local_1e8[3] = local_4d0[3];
                local_1e8[4] = local_4d0[4];
                local_1e8[5] = local_4d0[5];
                local_1e8[6] = local_4d0[6];
                local_1e8[7] = local_4d0[7];
                local_1e0 = CONCAT44(local_1e0._4_4_,(float)*(double *)(lVar18 + 0x6d0));
                FUN_147c90c36(*(undefined8 *)(lVar18 + 0x288),&local_1f8);
                FUN_14017126a(&local_1f8);
              }
            }
            FUN_14017126a(&local_128);
            iVar26 = iVar26 + 1;
          } while (iVar12 != iVar26);
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != local_540);
  }
  local_1f8._0_8_ = (longlong *)0x0;
  local_1f8.Data4[0] = '\0';
  local_1f8.Data4[1] = '\0';
  local_1f8.Data4[2] = '\0';
  local_1f8.Data4[3] = '\0';
  local_1f8.Data4[4] = '\0';
  local_1f8.Data4[5] = '\0';
  local_1f8.Data4[6] = '\0';
  local_1f8.Data4[7] = '\0';
  CoCreateGuid(&local_1f8);
  lVar17 = FUN_14001cc68(0x8e0,0x10);
  local_558 = &local_4f8;
  local_4f8 = (longlong *)local_1f8._0_8_;
  auStack_4f0[0] = local_1f8.Data4[0];
  auStack_4f0[1] = local_1f8.Data4[1];
  auStack_4f0[2] = local_1f8.Data4[2];
  auStack_4f0[3] = local_1f8.Data4[3];
  auStack_4f0[4] = local_1f8.Data4[4];
  auStack_4f0[5] = local_1f8.Data4[5];
  auStack_4f0[6] = local_1f8.Data4[6];
  auStack_4f0[7] = local_1f8.Data4[7];
  local_508 = *(undefined8 *)(param_1 + 0x96c);
  uStack_500 = *(undefined8 *)(param_1 + 0x974);
  local_560 = &local_508;
  local_518 = *(undefined4 *)(param_1 + 0x95c);
  uStack_514 = *(undefined4 *)(param_1 + 0x960);
  uStack_510 = *(undefined4 *)(param_1 + 0x964);
  uStack_50c = *(undefined4 *)(param_1 + 0x968);
  local_568 = &local_518;
  local_550 = 4;
  FUN_14075e732(lVar17,param_1,*(undefined8 *)(param_1 + 0xa48),local_3e8);
  *(longlong *)(param_1 + 0xa40) = lVar17;
  local_418 = (undefined ***)0x0;
  local_408 = &PTR_LAB_14a40dad0;
  local_428[0] = &LAB_14327d060;
  local_400 = param_1;
  FUN_140759336(lVar17 + 0x550,local_428);
  if (local_428[0] != (undefined1 *)0x0) {
    pppuVar19 = local_418;
    if (local_418 == (undefined ***)0x0) {
      pppuVar19 = &local_408;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  local_458 = (undefined ***)0x0;
  local_448 = &PTR_LAB_14a40daf0;
  local_468 = &LAB_14327d0b6;
  local_440 = param_1;
  FUN_140759336(*(longlong *)(param_1 + 0xa40) + 0x590);
  if (local_468 != (undefined1 *)0x0) {
    pppuVar19 = local_458;
    if (local_458 == (undefined ***)0x0) {
      pppuVar19 = &local_448;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (((*(char *)(param_1 + 0x9c) < '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) &&
     (iVar12 = FUN_14487fd02(), iVar12 != 0)) {
    *(char *)(*(longlong *)(param_1 + 0xa40) + 0x318) = (iVar12 == 3) + '\x01';
  }
  lVar17 = *(longlong *)(param_1 + 0x660);
  if ((lVar17 != 0) && ((longlong)*(int *)(lVar17 + 200) != 0)) {
    lVar18 = 0;
    do {
      lVar27 = *(longlong *)(*(longlong *)(lVar17 + 0xc0) + lVar18);
      if ((lVar27 != 0) && (*(longlong *)(lVar27 + 0x188) != 0)) {
        local_498 = (undefined ***)0x0;
        local_488 = &PTR_LAB_14a40db10;
        local_4a8[0] = FUN_14327d106;
        local_480 = param_1;
        FUN_1474aaa0e(*(longlong *)(param_1 + 0xa40) + 0x510,local_4a8);
        if (local_4a8[0] != (code *)0x0) {
          pppuVar19 = local_498;
          if (local_498 == (undefined ***)0x0) {
            pppuVar19 = &local_488;
          }
          (*(code *)(*pppuVar19)[2])();
        }
        break;
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)*(int *)(lVar17 + 200) * 8 != lVar18);
  }
  lVar17 = FUN_1407592a6(param_1);
  if (lVar17 == 0) goto LAB_140758993;
  uVar14 = *(undefined8 *)(param_1 + 0xa40);
  FUN_14075bef6(lVar17,param_1,uVar14);
  FUN_140759698(*(undefined8 *)(lVar17 + 0x38),uVar14);
  if ((*(char *)(param_1 + 0x9c) < '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0xa40) + 0x318) == '\x02')) {
    if (*(longlong *)(param_1 + 0x658) == 0) {
      lVar18 = *(longlong *)(param_1 + 0xb0);
      if (((lVar18 == 0) && (lVar18 = FUN_1448abda6(param_1), lVar18 == 0)) ||
         (*(longlong *)(lVar18 + 0x260) == 0)) goto LAB_140758912;
      plVar15 = (longlong *)(*(longlong *)(lVar18 + 0x260) + 0x38);
    }
    else {
      plVar15 = (longlong *)(*(longlong *)(param_1 + 0x658) + 0x550);
    }
    lVar18 = *plVar15;
    if (lVar18 != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0xa40);
      uVar25 = *(undefined4 *)(param_1 + 0x8a8);
      uVar6 = *(undefined1 *)(param_1 + 0x853);
      puVar16 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *(undefined2 *)(puVar16 + 1) = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      *(undefined2 *)(puVar16 + 8) = 1;
      *puVar16 = &PTR_FUN_149f45dc0;
      puVar16[10] = FUN_14327d63c;
      puVar16[0xc] = 0;
      puVar16[0xe] = &PTR_LAB_14a40db30;
      puVar16[0xf] = uVar14;
      *(undefined4 *)(puVar16 + 0x10) = uVar25;
      *(undefined1 *)((longlong)puVar16 + 0x84) = uVar6;
      puVar16[0x12] = 0;
      puVar16[0x14] = 0;
      *(undefined1 *)(puVar16 + 0x1a) = 0;
      FUN_1406e6496(lVar18 + 0x70,puVar16);
    }
  }
LAB_140758912:
  FUN_140759f2c(param_1);
  local_128 = (undefined2 *)0x0;
  local_4d0 = (uchar  [8])(**(code **)(*(longlong *)(param_1 + 0x2b8) + 0x18))(param_1 + 0x2b8);
  if (local_4d0 != (uchar  [8])0x0) {
    local_520 = 1;
    local_528 = local_4d0;
    FUN_14015671e(&local_128);
    local_530 = 1;
    local_538 = local_4d0;
    FUN_14075980a(local_110,&local_538,*(undefined8 *)(lVar17 + 0x28));
    FUN_1448635f4(&local_128);
  }
LAB_140758993:
  FUN_14075ad8a(param_1);
  FUN_1408bc6da(local_3e8);
  if ((local_60 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407592a6 FUN_1407592a6 body=144 status=ok
// SIG undefined FUN_1407592a6(void)

undefined8 FUN_1407592a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x658);
  if (lVar5 == 0) {
    if ((*(longlong *)(param_1 + 0xa8) == 0) || (lVar5 = FUN_1447210f0(), lVar5 == 0)) {
      lVar5 = DAT_14cb10918;
      if (DAT_14cb10918 == 0) {
        return 0;
      }
    }
    else {
      lVar5 = FUN_1447210f0(*(undefined8 *)(param_1 + 0xa8));
    }
    return *(undefined8 *)(lVar5 + 0x260);
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x4c8);
  plVar4 = *(longlong **)(lVar5 + 0x4d0);
  if (plVar4 == (longlong *)0x0) {
    return uVar3;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar4 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 != 0) {
    return uVar3;
  }
  (**(code **)*plVar4)(plVar4);
  LOCK();
  piVar2 = (int *)((longlong)plVar4 + 0xc);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 != 0) {
    return uVar3;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  return uVar3;
}



// FUNCTION 140759336 FUN_140759336 body=290 status=ok
// SIG undefined FUN_140759336(void)

longlong * FUN_140759336(longlong *param_1,longlong *param_2)

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



// FUNCTION 140759459 FUN_140759459 body=132 status=ok
// SIG undefined FUN_140759459(void)

void FUN_140759459(undefined8 *param_1,int param_2)

{
  undefined2 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x459c400000000000;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    FUN_14075f27a(param_1 + 1,1,0);
    puVar1 = (undefined2 *)param_1[1];
    *puVar1 = 0x101;
    *(undefined8 *)(puVar1 + 2) = 0xa00000005;
    *(undefined8 *)(puVar1 + 6) = 0x3200000019;
    *(undefined8 *)(puVar1 + 10) = 0x3c3f800000;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1407594de FUN_1407594de body=154 status=ok
// SIG undefined FUN_1407594de(void)

void FUN_1407594de(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14075957a();
  fVar2 = 1.0;
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x660) != 0)) &&
     (*(char *)(param_1 + 0x684) == '\x01')) {
    local_19 = '\0';
    fVar3 = (float)thunk_FUN_14327eeb4(0x3f800000);
    fVar2 = 1.0;
    if ((1e-08 < fVar3) && (local_19 != '\0')) {
      fVar2 = (*(float *)(lVar1 + 0x3c) / 1000.0) / fVar3;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 14075957a FUN_14075957a body=156 status=ok
// SIG undefined FUN_14075957a(void)

longlong FUN_14075957a(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = FUN_14034b308(param_1 + 0x82);
  if ((lVar3 != 0) &&
     (cVar1 = FUN_14002b5e0(*(undefined8 *)(lVar3 + 0x18),"DefaultPhysicalMaterial",0x17),
     cVar1 == '\0')) {
    return lVar3;
  }
  iVar2 = (**(code **)(*param_1 + 0x7b0))(param_1);
  if (((0 < iVar2) &&
      (plVar4 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,0), plVar4 != (longlong *)0x0))
     && (lVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4), lVar5 != 0)) {
    lVar3 = (**(code **)(*plVar4 + 0x2f8))(plVar4);
  }
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x898);
  }
  return lVar3;
}



// FUNCTION 14075962c FUN_14075962c body=108 status=ok
// SIG undefined FUN_14075962c(void)

longlong FUN_14075962c(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (-1 < (int)param_2) {
    if (((int)param_2 < *(int *)(param_1 + 0x628)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x620) + (ulonglong)param_2 * 8), lVar1 != 0))
    {
      return lVar1;
    }
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((lVar1 != 0) && ((int)param_2 < *(int *)(lVar1 + 0x98))) {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + (ulonglong)param_2 * 8);
      if (DAT_14c950c29 != '\x01') {
        return lVar1;
      }
      if (lVar1 == 0) {
        return 0;
      }
      FUN_1456cec3c(lVar1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140759698 FUN_140759698 body=370 status=ok
// SIG undefined FUN_140759698(void)

void FUN_140759698(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(longlong *)(param_2 + 8) = param_1;
  FUN_142a14230(param_2,*(undefined8 *)(param_1 + 0x9c8));
  iVar3 = *(int *)(param_2 + 0x448);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x440);
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar7);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x1b9) == '\0')) {
        FUN_1448b734e(param_1,lVar6,1);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x128));
    if (*(int *)(param_2 + 0x18) == -1) {
      lVar5 = *(longlong *)(param_1 + 0x98);
      uVar4 = *(uint *)(param_2 + 0x1c);
      piVar2 = (int *)(lVar5 + 0x160 + (ulonglong)uVar4 * 4);
      *piVar2 = *piVar2 + 1;
      *(int *)(lVar5 + 0x194) = *(int *)(lVar5 + 0x194) + 1;
      lVar5 = lVar5 + (ulonglong)uVar4 * 0x10;
      iVar3 = *(int *)(lVar5 + 0x1a0);
      *(int *)(param_2 + 0x18) = iVar3;
      *(uint *)(lVar5 + 0x1a0) = iVar3 + 1U;
      if (*(uint *)(lVar5 + 0x1a4) < iVar3 + 1U) {
        FUN_140431d5c((longlong *)(lVar5 + 0x198),iVar3);
      }
      lVar5 = *(longlong *)(lVar5 + 0x198);
      lVar7 = (longlong)iVar3 * 0x20;
      *(longlong *)(lVar5 + lVar7) = param_2;
      *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014075972d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x128));
    return;
  }
  if (*(int *)(param_2 + 0x18) == -1) {
    lVar5 = *(longlong *)(param_1 + 0x98);
    uVar4 = *(uint *)(param_2 + 0x1c);
    piVar2 = (int *)(lVar5 + 0x160 + (ulonglong)uVar4 * 4);
    *piVar2 = *piVar2 + 1;
    *(int *)(lVar5 + 0x194) = *(int *)(lVar5 + 0x194) + 1;
    lVar5 = lVar5 + (ulonglong)uVar4 * 0x10;
    iVar3 = *(int *)(lVar5 + 0x1a0);
    *(int *)(param_2 + 0x18) = iVar3;
    *(uint *)(lVar5 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(lVar5 + 0x1a4) < iVar3 + 1U) {
      FUN_140431d5c((longlong *)(lVar5 + 0x198),iVar3);
    }
    lVar5 = *(longlong *)(lVar5 + 0x198);
    lVar7 = (longlong)iVar3 * 0x20;
    *(longlong *)(lVar5 + lVar7) = param_2;
    *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 14075980a FUN_14075980a body=338 status=ok
// SIG undefined FUN_14075980a(void)

void FUN_14075980a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined2 local_118;
  undefined2 local_102;
  undefined1 local_100 [56];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_3 != (longlong *)0x0) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      local_50 = *(undefined8 *)(lVar1 + lVar3);
      local_98 = &local_50;
      local_90 = 1;
      FUN_14075aa78(param_1,&local_88,&local_98);
      local_b8 = local_78;
      local_c8 = local_88;
      uStack_c0 = uStack_80;
      local_a0 = local_60;
      local_b0 = local_70;
      uStack_ac = uStack_6c;
      uStack_a8 = uStack_68;
      uStack_a4 = uStack_64;
      FUN_140759d40(param_1,local_100,local_50);
      FUN_14075995e(param_1,&local_102,local_50);
      local_118 = local_102;
      (**(code **)(*param_3 + 0x88))(param_3,local_100,&local_c8,1);
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075995e FUN_14075995e body=117 status=ok
// SIG undefined FUN_14075995e(void)

void FUN_14075995e(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((param_3 == (longlong *)0x0) || (lVar2 = *param_3, lVar2 == 0)) goto LAB_1407599cf;
  iVar1 = *(int *)(lVar2 + 0x1c);
  if (iVar1 == 0xb) {
    plVar4 = (longlong *)(lVar2 + 0x40);
LAB_14075997a:
    if (*plVar4 != 0) {
      uVar3 = *(undefined2 *)(*plVar4 + 0x5c);
      goto LAB_140759986;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (int)param_3[1];
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x418))) &&
       (lVar5 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)iVar1 * 4), lVar5 != -1)
       ) {
      plVar4 = (longlong *)(lVar5 * 8 + *(longlong *)(lVar2 + 0x440));
      goto LAB_14075997a;
    }
  }
  else if (iVar1 == 0xc) {
    plVar4 = (longlong *)(lVar2 + 0x128);
    goto LAB_14075997a;
  }
LAB_1407599cf:
  uVar3 = 0;
LAB_140759986:
  *param_2 = uVar3;
  return;
}



// FUNCTION 1407599d4 FUN_1407599d4 body=370 status=ok
// SIG undefined FUN_1407599d4(void)

void FUN_1407599d4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140759a5d;
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
LAB_140759a5d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140759b46 FUN_140759b46 body=371 status=ok
// SIG undefined FUN_140759b46(void)

undefined8 FUN_140759b46(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1[0x75];
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else if (*param_2 == 0) {
    local_38 = (undefined4 *)0x0;
    uStack_30 = 0;
    uVar7 = *(undefined8 *)(lVar3 + 0x218);
    plVar4 = *(longlong **)(lVar3 + 0x220);
    if (plVar4 == (longlong *)0x0) {
      FUN_140759cba(uVar7,&local_38);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_140759cba(uVar7,&local_38);
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
    if ((int)uStack_30 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1,*local_38);
    }
    if (local_38 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 0x218);
    plVar4 = *(longlong **)(lVar3 + 0x220);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_1400021e4(param_2,&local_38);
    uVar6 = FUN_144a075de(lVar5 + 0xe0,&local_38);
    if (local_38 != (undefined4 *)0x0) {
      FUN_1400020a8();
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
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1,uVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140759cba FUN_140759cba body=133 status=ok
// SIG undefined FUN_140759cba(void)

void FUN_140759cba(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x110);
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x110) + 0x60))(plVar1);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x120) + lVar3 * 4) == (int)DAT_14c75f3b2) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_2,iVar2);
        }
        *(int *)(*param_2 + (longlong)iVar2 * 4) = (int)lVar3;
      }
      lVar3 = lVar3 + 1;
      iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 140759d40 FUN_140759d40 body=491 status=ok
// SIG undefined FUN_140759d40(void)

longlong * FUN_140759d40(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  lVar5 = *param_3;
  if (lVar5 == 0) goto LAB_140759f01;
  iVar1 = *(int *)(lVar5 + 0x1c);
  if (iVar1 == 0xb) {
    plVar3 = (longlong *)(lVar5 + 0x40);
  }
  else if (iVar1 == 2) {
    iVar1 = (int)param_3[1];
    if ((((longlong)iVar1 < 0) || (*(int *)(lVar5 + 0x418) <= iVar1)) ||
       (lVar4 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x410) + (longlong)iVar1 * 4), lVar4 == -1)
       ) {
LAB_140759f01:
      *param_2 = 0;
      goto LAB_140759f08;
    }
    plVar3 = (longlong *)(lVar4 * 8 + *(longlong *)(lVar5 + 0x440));
  }
  else {
    if (iVar1 != 0xc) goto LAB_140759f01;
    plVar3 = (longlong *)(lVar5 + 0x128);
  }
  lVar5 = *plVar3;
  *param_2 = lVar5;
  if (lVar5 != 0) {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    }
    param_2[1] = lVar4;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar5 + 0x58);
    *(undefined8 *)((longlong)param_2 + 0x14) = 0;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x24) = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    if (DAT_14c992a90 == '\0') {
      FUN_144a61b4f();
    }
    lVar4 = lVar5 + 0x78;
    if (*(longlong *)(lVar5 + 0x80) != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x80);
    }
    if ((longlong)*(int *)(lVar5 + 0x88) != 0) {
      lVar5 = (longlong)*(int *)(lVar5 + 0x88) * 8;
      lVar7 = 0;
      uVar6 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar7);
        if ((lVar2 != 0) &&
           ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 2) != 0))
        {
          uVar11 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
          uVar10 = uVar10 | *(uint *)(lVar2 + 0x48 + uVar11 * 8);
          uVar9 = uVar9 | *(uint *)(lVar2 + 0x4c + uVar11 * 8);
          uVar8 = uVar8 | *(uint *)(lVar2 + 0x50 + uVar11 * 8);
          uVar6 = uVar6 | *(uint *)(lVar2 + 0x54 + uVar11 * 8);
        }
        lVar7 = lVar7 + 8;
      } while (lVar5 != lVar7);
      *(uint *)((longlong)param_2 + 0x14) = uVar10;
      *(uint *)(param_2 + 3) = uVar9;
      *(uint *)((longlong)param_2 + 0x1c) = uVar8;
      *(uint *)(param_2 + 4) = uVar6;
      lVar7 = 0;
      uVar6 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar7);
        if ((lVar2 != 0) &&
           ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 5) != 0))
        {
          uVar11 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
          uVar10 = uVar10 | *(uint *)(lVar2 + 0x58 + uVar11 * 8);
          uVar9 = uVar9 | *(uint *)(lVar2 + 0x5c + uVar11 * 8);
          uVar8 = uVar8 | *(uint *)(lVar2 + 0x60 + uVar11 * 8);
          uVar6 = uVar6 | *(uint *)(lVar2 + 100 + uVar11 * 8);
        }
        lVar7 = lVar7 + 8;
      } while (lVar5 != lVar7);
      *(uint *)((longlong)param_2 + 0x24) = uVar10;
      *(uint *)(param_2 + 5) = uVar9;
      *(uint *)((longlong)param_2 + 0x2c) = uVar8;
      *(uint *)(param_2 + 6) = uVar6;
    }
    *(undefined1 *)((longlong)param_2 + 0x34) = 1;
    return param_2;
  }
LAB_140759f08:
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  return param_2;
}



// FUNCTION 140759f2c FUN_140759f2c body=1078 status=ok
// SIG undefined FUN_140759f2c(void)

void FUN_140759f2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined4 local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_190;
  int local_188;
  longlong local_180;
  int local_178;
  undefined1 local_170 [160];
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [8];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    lVar10 = 0;
    local_c0 = &local_98;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0x80;
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = param_1;
    if (*(char *)(param_1 + 0x853) == '\x01') {
      if (*(char *)(param_1 + 0x9c) < '\0') {
        lVar10 = FUN_14327b5c6(&local_c8,param_1 + 0x854);
      }
      else {
        lVar10 = 0;
      }
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x218);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (plVar5 == (longlong *)0x0) {
      FUN_14075a44e(local_170,uVar4);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_14075a44e(local_170,uVar4);
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
    FUN_14075a364(*(undefined8 *)(param_1 + 0xa40),&local_180);
    local_190 = local_180;
    local_188 = local_178;
    FUN_14015671e(local_b8);
    local_1a8 = 0;
    uStack_1a0 = 0;
    if (local_178 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_178);
    }
    if ((local_178 != 0) && (FUN_14075a616(&local_1a8), 0 < local_178)) {
      lVar14 = 0;
      lVar13 = 0;
      do {
        lVar7 = local_180;
        if (*(longlong *)(local_180 + lVar14) != 0) {
          if (local_d0 == 0) {
            iVar11 = -1;
          }
          else {
            iVar11 = *(int *)(*(longlong *)(local_d0 + 0x10) + lVar13 * 4);
          }
          if ((*(int *)(param_1 + 0x8a0) == 0) ||
             (*(longlong *)(*(longlong *)(param_1 + 0x898) + lVar14) == 0)) {
            if (*(int *)(param_1 + 0x890) != 0) {
              iVar8 = *(int *)(param_1 + 0x890) + -1;
              if (iVar11 <= iVar8) {
                iVar8 = iVar11;
              }
              lVar12 = (longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x888);
              goto LAB_14075a1de;
            }
            if ((lVar10 == 0) || (lVar12 = lVar10, iVar11 <= *(int *)(param_1 + 0x8a8)))
            goto LAB_14075a0a6;
          }
          else {
            lVar12 = *(longlong *)(param_1 + 0x898) + lVar14;
LAB_14075a1de:
            lVar12 = FUN_14327b5c6(&local_c8,lVar12);
            if (lVar12 == 0) goto LAB_14075a0a6;
          }
          uVar6 = uStack_1a0;
          uStack_1d4 = *(undefined4 *)(lVar12 + 4);
          uStack_1d0 = *(undefined4 *)(lVar12 + 8);
          uStack_1cc = *(undefined4 *)(lVar12 + 0xc);
          local_1c8 = *(undefined4 *)(lVar12 + 0x10);
          uStack_1c4 = *(undefined4 *)(lVar12 + 0x14);
          uStack_1c0 = *(undefined4 *)(lVar12 + 0x18);
          uStack_1bc = *(undefined4 *)(lVar12 + 0x1c);
          local_1b8 = *(undefined8 *)(lVar12 + 0x20);
          local_1d8 = (undefined4)lVar13;
          lVar12 = (longlong)(int)uStack_1a0;
          uVar9 = (int)uStack_1a0 + 1;
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar9);
          if (uStack_1a0._4_4_ < uVar9) {
            FUN_1474ace60(&local_1a8,uVar6 & 0xffffffff);
          }
          *(undefined8 *)(local_1a8 + 0x20 + lVar12 * 0x28) = local_1b8;
          puVar3 = (undefined4 *)(local_1a8 + 0x10 + lVar12 * 0x28);
          *puVar3 = local_1c8;
          puVar3[1] = uStack_1c4;
          puVar3[2] = uStack_1c0;
          puVar3[3] = uStack_1bc;
          puVar3 = (undefined4 *)(local_1a8 + lVar12 * 0x28);
          *puVar3 = local_1d8;
          puVar3[1] = uStack_1d4;
          puVar3[2] = uStack_1d0;
          puVar3[3] = uStack_1cc;
          local_1e0 = 1;
          local_1e8 = lVar7 + lVar14;
          FUN_146e2172a(local_a0,&local_1e8,uStack_1d4._2_1_,uStack_1d4._1_1_);
          local_1f0 = 1;
          local_1f8 = lVar7 + lVar14;
          FUN_146e21878(local_a0,&local_1f8,&uStack_1d0,&uStack_1c0);
        }
LAB_14075a0a6:
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar13 < local_178);
    }
    FUN_14075a8be(*(undefined8 *)(param_1 + 0xa40),&local_1a8);
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1448635f4(local_b8);
    if (local_180 != 0) {
      FUN_1400020a8();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar6 = uStack_90 >> 0x20;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      FUN_146812a68(&local_98,0);
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
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14075a364 FUN_14075a364 body=110 status=ok
// SIG undefined FUN_14075a364(void)

longlong * FUN_14075a364(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14075a3d2(param_2,*(undefined4 *)(param_1 + 0x300),1);
  if (0 < *(int *)(param_1 + 0x300)) {
    lVar1 = 0;
    do {
      lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x410) + lVar1 * 4);
      if (lVar2 == -1) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x230) + lVar2 * 8);
      }
      *(undefined8 *)(*param_2 + lVar1 * 8) = uVar3;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x300));
  }
  return param_2;
}



// FUNCTION 14075a3d2 FUN_14075a3d2 body=122 status=ok
// SIG undefined FUN_14075a3d2(void)

void FUN_14075a3d2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14075a758(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146eee98c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14075a44e FUN_14075a44e body=190 status=ok
// SIG undefined FUN_14075a44e(void)

undefined8 * FUN_14075a44e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = DAT_14c9974b8;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[9] = DAT_14c9974c0;
  param_1[10] = DAT_14c9974a8;
  param_1[0xb] = 0;
  uVar1 = FUN_14075a50c(param_2);
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xe] = param_2;
  param_1[0xf] = param_2;
  param_1[0x10] = DAT_14c9974a0;
  param_1[0x11] = DAT_14c9974a8;
  param_1[0x12] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  return param_1;
}



// FUNCTION 14075a50c FUN_14075a50c body=265 status=ok
// SIG undefined FUN_14075a50c(void)

longlong FUN_14075a50c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((char *)(lVar1 + 0x10) == (char *)0x0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x10) == '\x0e') {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 14075a616 FUN_14075a616 body=321 status=ok
// SIG undefined FUN_14075a616(void)

undefined8 FUN_14075a616(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x333) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x3ffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14075a67b;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0x3ffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,4);
    }
  }
LAB_14075a67b:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar6 / 0x28)) {
    uVar4 = uVar6 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,4);
  }
  return uVar5;
}



// FUNCTION 14075a758 FUN_14075a758 body=356 status=ok
// SIG undefined FUN_14075a758(void)

void FUN_14075a758(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14075a7dd;
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
LAB_14075a7dd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14075a8be FUN_14075a8be body=441 status=ok
// SIG undefined FUN_14075a8be(void)

void FUN_14075a8be(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_80;
  pvVar1 = (void *)*param_2;
  local_90 = param_1;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_146eee5ea(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 0x28);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    pvVar1 = local_88;
    local_78 = 0;
    local_68 = 0;
    local_58 = &PTR_LAB_149f6d860;
    uStack_50 = local_90;
    local_48 = (void *)0x0;
    lVar4 = (longlong)local_80;
    iStack_40 = local_80;
    if (lVar4 == 0) {
      uStack_3c = 0;
    }
    else {
      FUN_146eee5ea(&local_48,local_80,0);
      memcpy(local_48,pvVar1,lVar4 * 0x28);
    }
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = FUN_142a28ae2;
    puVar2[0xc] = local_68;
    *(undefined4 *)(puVar2 + 0xe) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar2 + 0x74) = local_58._4_4_;
    *(undefined4 *)(puVar2 + 0xf) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_50._4_4_;
    *(undefined4 *)(puVar2 + 0x10) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar2 + 0x84) = local_48._4_4_;
    *(int *)(puVar2 + 0x11) = iStack_40;
    *(undefined4 *)((longlong)puVar2 + 0x8c) = uStack_3c;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar3 + 0x70,puVar2);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075aa78 FUN_14075aa78 body=785 status=ok
// SIG undefined FUN_14075aa78(void)

undefined8 * FUN_14075aa78(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = param_3[1];
  if ((longlong)(int)lVar5 == 0) {
    bVar4 = false;
    uVar14 = 0;
    uVar17 = 0;
    uVar21 = 0;
    uVar23 = 0;
    uVar25 = 0;
    uVar27 = 0;
    uVar12 = 0;
    uVar30 = 0;
    uVar11 = 0;
    uVar33 = 0;
    uVar10 = 0;
    uVar19 = 0;
  }
  else {
    lVar2 = *param_3;
    lVar9 = 0;
    bVar4 = false;
    uVar13 = 0;
    uVar15 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar22 = 0;
    uVar24 = 0;
    uVar26 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar34 = 0;
    do {
      plVar7 = *(longlong **)(lVar2 + lVar9);
      uVar14 = uVar13;
      uVar17 = uVar15;
      uVar10 = uVar18;
      uVar19 = uVar20;
      uVar21 = uVar22;
      uVar23 = uVar24;
      uVar25 = uVar26;
      uVar27 = uVar28;
      uVar12 = uVar29;
      uVar30 = uVar31;
      uVar11 = uVar32;
      uVar33 = uVar34;
      bVar6 = bVar4;
      if ((plVar7 == (longlong *)0x0) || (lVar3 = *plVar7, lVar3 == 0)) goto LAB_14075ac46;
      iVar1 = *(int *)(lVar3 + 0x1c);
      if (iVar1 == 0xb) {
        plVar7 = (longlong *)(lVar3 + 0x40);
LAB_14075ab68:
        lVar3 = *plVar7;
        if (((lVar3 != 0) && (plVar7 = *(longlong **)(lVar3 + 0x50), plVar7 != (longlong *)0x0)) &&
           (*(char *)((longlong)plVar7 + 0x1a) == '\x01')) {
          local_158._8_4_ = SUB84((double)*(float *)(lVar3 + 0x44),0);
          local_158._0_8_ = (double)*(float *)(lVar3 + 0x40);
          local_158._12_4_ = (int)((ulonglong)(double)*(float *)(lVar3 + 0x44) >> 0x20);
          local_148._8_4_ = SUB84((double)*(float *)(lVar3 + 0x4c),0);
          local_148._0_8_ = (double)*(float *)(lVar3 + 0x48);
          local_148._12_4_ = (int)((ulonglong)(double)*(float *)(lVar3 + 0x4c) >> 0x20);
          local_138 = *(undefined4 *)(lVar3 + 0x20);
          uStack_134 = *(undefined4 *)(lVar3 + 0x24);
          uStack_130 = *(undefined4 *)(lVar3 + 0x28);
          uStack_12c = *(undefined4 *)(lVar3 + 0x2c);
          local_128 = *(undefined8 *)(lVar3 + 0x30);
          uStack_120 = 0;
          local_118 = 0x3ff0000000000000;
          uStack_110 = 0x3ff0000000000000;
          local_108 = 0x3ff0000000000000;
          uStack_100 = 0;
          (**(code **)(*plVar7 + 0x88))(plVar7,&local_f0,local_158);
          uVar10 = SUB84(local_f0,0);
          uVar11 = SUB84(local_e8,0);
          uVar12 = SUB84(local_e0,0);
          bVar6 = true;
          uVar16 = (undefined4)((ulonglong)local_c8 >> 0x20);
          uVar21 = SUB84(local_d0,0);
          uVar23 = (undefined4)((ulonglong)local_d0 >> 0x20);
          uVar25 = SUB84(local_d8,0);
          uVar27 = (undefined4)((ulonglong)local_d8 >> 0x20);
          uVar19 = (undefined4)((ulonglong)local_f0 >> 0x20);
          uVar33 = (undefined4)((ulonglong)local_e8 >> 0x20);
          uVar30 = (undefined4)((ulonglong)local_e0 >> 0x20);
          uVar14 = SUB84(local_c8,0);
          uVar17 = uVar16;
          if (bVar4) {
            if (local_f0 <= (double)CONCAT44(uVar20,uVar18)) {
              uVar18 = uVar10;
              uVar20 = uVar19;
            }
            if (local_e8 <= (double)CONCAT44(uVar34,uVar32)) {
              uVar32 = uVar11;
              uVar34 = uVar33;
            }
            if (local_e0 <= (double)CONCAT44(uVar31,uVar29)) {
              uVar29 = uVar12;
              uVar31 = uVar30;
            }
            if ((double)CONCAT44(uVar28,uVar26) <= local_d8) {
              uVar26 = uVar25;
              uVar28 = uVar27;
            }
            if ((double)CONCAT44(uVar24,uVar22) <= local_d0) {
              uVar22 = uVar21;
              uVar24 = uVar23;
            }
            uVar14 = uVar13;
            uVar17 = uVar15;
            uVar10 = uVar18;
            uVar19 = uVar20;
            uVar21 = uVar22;
            uVar23 = uVar24;
            uVar25 = uVar26;
            uVar27 = uVar28;
            uVar12 = uVar29;
            uVar30 = uVar31;
            uVar11 = uVar32;
            uVar33 = uVar34;
            if ((double)CONCAT44(uVar15,uVar13) <= local_c8) {
              uVar14 = SUB84(local_c8,0);
              uVar17 = uVar16;
            }
          }
        }
      }
      else if (iVar1 == 2) {
        iVar1 = (int)plVar7[1];
        if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x418))) &&
           (lVar8 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x410) + (longlong)iVar1 * 4),
           lVar8 != -1)) {
          plVar7 = (longlong *)(lVar8 * 8 + *(longlong *)(lVar3 + 0x440));
          goto LAB_14075ab68;
        }
      }
      else if (iVar1 == 0xc) {
        plVar7 = (longlong *)(lVar3 + 0x128);
        goto LAB_14075ab68;
      }
LAB_14075ac46:
      bVar4 = bVar6;
      lVar9 = lVar9 + 8;
      uVar13 = uVar14;
      uVar15 = uVar17;
      uVar18 = uVar10;
      uVar20 = uVar19;
      uVar22 = uVar21;
      uVar24 = uVar23;
      uVar26 = uVar25;
      uVar28 = uVar27;
      uVar29 = uVar12;
      uVar31 = uVar30;
      uVar32 = uVar11;
      uVar34 = uVar33;
    } while ((longlong)(int)lVar5 * 8 != lVar9);
  }
  *(bool *)(param_2 + 6) = bVar4;
  *param_2 = CONCAT44(uVar19,uVar10);
  param_2[1] = CONCAT44(uVar33,uVar11);
  param_2[2] = CONCAT44(uVar30,uVar12);
  param_2[3] = CONCAT44(uVar27,uVar25);
  param_2[4] = CONCAT44(uVar23,uVar21);
  param_2[5] = CONCAT44(uVar17,uVar14);
  if ((local_c0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14075ad8a FUN_14075ad8a body=1402 status=ok
// SIG undefined FUN_14075ad8a(void)

void FUN_14075ad8a(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_d8;
  undefined **local_c8;
  code *local_c0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) ||
      (*(longlong *)(lVar3 + 0x260) == 0)) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x260) + 0x38), lVar3 == 0)) goto LAB_14075af87;
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    FUN_1408baeb8();
    if ((*(byte *)(param_1 + 1099) & 0x20) == 0) {
      bVar1 = *(byte *)(param_1 + 0x840);
      if (bVar1 != 0) {
        if ((*(byte *)(param_1 + 0x841) & 1) != 0) goto LAB_14075adf8;
        goto LAB_14075ae81;
      }
      if ((*(byte *)(param_1 + 0x841) & 1) != 0) goto LAB_14075adf8;
      if ((*(char *)(param_1 + 0x843) != '\0') || (*(char *)(param_1 + 0x844) != '\0'))
      goto LAB_14075ae81;
    }
    else {
LAB_14075adf8:
      FUN_14075b306(*(undefined8 *)(param_1 + 0xa58),param_1,param_1);
      puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined2 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_149f45dc0;
      puVar2[10] = &LAB_14327c4bc;
      puVar2[0xc] = 0;
      puVar2[0xe] = &PTR_LAB_14a40d930;
      puVar2[0xf] = lVar3;
      puVar2[0x12] = 0;
      puVar2[0x14] = 0;
      *(undefined1 *)(puVar2 + 0x1a) = 0;
      FUN_1406e6496(lVar3 + 0x70,puVar2);
      bVar1 = *(byte *)(param_1 + 0x840);
LAB_14075ae81:
      if ((bVar1 & 1) != 0) {
        local_58 = 0;
        local_48 = &PTR_LAB_14a40d950;
        local_40 = FUN_143279c0c;
        local_68 = &LAB_14327c500;
        FUN_14075bb12(*(undefined8 *)(param_1 + 0xa58),param_1);
        puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
        *(undefined2 *)(puVar2 + 1) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined2 *)(puVar2 + 8) = 1;
        *puVar2 = &PTR_FUN_149f45dc0;
        puVar2[10] = &LAB_14327c528;
        puVar2[0xc] = 0;
        puVar2[0xe] = &PTR_LAB_14a40d970;
        puVar2[0xf] = lVar3;
        puVar2[0x12] = 0;
        puVar2[0x14] = 0;
        *(undefined1 *)(puVar2 + 0x1a) = 0;
        FUN_1406e6496(lVar3 + 0x70,puVar2);
      }
      if (*(char *)(param_1 + 0x843) == '\x01') {
        local_98 = 0;
        local_88 = &PTR_LAB_14a40d990;
        local_80 = FUN_143279c84;
        local_a8 = &LAB_1474acc72;
        FUN_147489bb4(*(undefined8 *)(param_1 + 0xa58),param_1);
        puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
        *(undefined2 *)(puVar2 + 1) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined2 *)(puVar2 + 8) = 1;
        *puVar2 = &PTR_FUN_149f45dc0;
        puVar2[10] = &LAB_14327c57a;
        puVar2[0xc] = 0;
        puVar2[0xe] = &PTR_LAB_14a40d9b0;
        puVar2[0xf] = lVar3;
        puVar2[0x12] = 0;
        puVar2[0x14] = 0;
        *(undefined1 *)(puVar2 + 0x1a) = 0;
        FUN_1406e6496(lVar3 + 0x70,puVar2);
      }
      if (*(char *)(param_1 + 0x844) == '\x01') {
        local_d8 = 0;
        local_c8 = &PTR_LAB_14a40d9d0;
        local_c0 = FUN_143279cfc;
        local_e8 = &LAB_1474accc4;
        FUN_147489cb6(*(undefined8 *)(param_1 + 0xa58),param_1);
        puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
        *(undefined2 *)(puVar2 + 1) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined2 *)(puVar2 + 8) = 1;
        *puVar2 = &PTR_FUN_149f45dc0;
        puVar2[10] = &LAB_14327c5be;
        puVar2[0xc] = 0;
        puVar2[0xe] = &PTR_LAB_14a40d9f0;
        puVar2[0xf] = lVar3;
        puVar2[0x12] = 0;
        puVar2[0x14] = 0;
        *(undefined1 *)(puVar2 + 0x1a) = 0;
        FUN_1406e6496(lVar3 + 0x70,puVar2);
      }
    }
    FUN_14084513e(*(undefined8 *)(param_1 + 0xa58));
  }
  if ((*(char *)(param_1 + 0x846) != '\0') || (*(char *)(param_1 + 0x849) == '\x01')) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_14327c610;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_14a40da10;
    puVar2[0xf] = lVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar3 + 0x70,puVar2);
  }
  if ((*(char *)(param_1 + 0x847) == '\x01') && (lVar4 = FUN_1407592a6(param_1), lVar4 != 0)) {
    FUN_147c6966a(lVar4,param_1);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_14327c662;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_14a40da30;
    puVar2[0xf] = lVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar3 + 0x70,puVar2);
  }
  if ((*(char *)(param_1 + 0x848) == '\x01') && (lVar4 = FUN_1407592a6(param_1), lVar4 != 0)) {
    FUN_147c696c2(lVar4,param_1);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = &LAB_14327c6a6;
    puVar2[0xc] = 0;
    puVar2[0xe] = &PTR_LAB_14a40da50;
    puVar2[0xf] = lVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar3 + 0x70,puVar2);
  }
LAB_14075af87:
  if ((local_20 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14075b306 FUN_14075b306 body=286 status=ok
// SIG undefined FUN_14075b306(void)

void FUN_14075b306(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  puVar2 = (undefined1 *)FUN_14075b426(param_1 + 0x1e0,uVar1 >> 0x10 ^ uVar1,&local_30);
  if (param_3 != 0) {
    uVar3 = FUN_1400dbfc6();
    lVar4 = FUN_144718840(param_3,uVar3);
    if (lVar4 != 0) {
      local_30 = param_3;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_3);
      }
      FUN_14075b584(puVar2 + 8,local_34,&local_30,0);
    }
  }
  if (param_3 == param_2) {
    *puVar2 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075b426 FUN_14075b426 body=140 status=ok
// SIG undefined FUN_14075b426(void)

longlong FUN_14075b426(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14075b4b4();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_14075b48d;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_14075df16(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_14075b48d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075b4b4 FUN_14075b4b4 body=208 status=ok
// SIG undefined FUN_14075b4b4(void)

int FUN_14075b4b4(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x60 + (longlong)iVar1 * 0x68)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x68);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 14075b584 FUN_14075b584 body=403 status=ok
// SIG undefined FUN_14075b584(void)

undefined4 *
FUN_14075b584(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14075b938(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  if ((uVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar4);
    uVar4 = *local_40;
  }
  bVar1 = DAT_14c950c29;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar1 & 1) != 0) && (uVar4 != 0)) {
    FUN_1456cec3c(uVar4);
  }
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = param_4;
  cVar2 = FUN_14075b718(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14075bc1a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075b718 FUN_14075b718 body=196 status=ok
// SIG undefined FUN_14075b718(void)

void FUN_14075b718(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar2 = FUN_14075b868(param_1,param_2,&local_38);
    if (iVar2 != -1) {
      *(longlong *)(*param_1 + (longlong)iVar2 * 0x10) = *param_3;
      FUN_14075b7de(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_14075b7a6;
    }
  }
  uVar1 = 0;
LAB_14075b7a6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075b7de FUN_14075b7de body=138 status=ok
// SIG undefined FUN_14075b7de(void)

void FUN_14075b7de(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14075b868 FUN_14075b868 body=208 status=ok
// SIG undefined FUN_14075b868(void)

int FUN_14075b868(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 14075b938 FUN_14075b938 body=473 status=ok
// SIG undefined FUN_14075b938(void)

int * FUN_14075b938(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14075bb12 FUN_14075bb12 body=263 status=ok
// SIG undefined FUN_14075bb12(void)

void FUN_14075bb12(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_6c [4];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    local_68[0] = *param_3;
    local_58[0] = (longlong *)0x0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
    }
    local_88 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_80 = &local_88;
    local_78 = local_68;
    FUN_14075d6b8(param_1 + 0x230,local_6c,&local_80,0);
    if (local_68[0] != 0) {
      plVar1 = local_58[0];
      if (local_58[0] == (longlong *)0x0) {
        plVar1 = local_48;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075bc1a FUN_14075bc1a body=731 status=ok
// SIG undefined FUN_14075bc1a(void)

void FUN_14075bc1a(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar13 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar13,4);
    if ((int)uVar13 < 1) goto LAB_14075bc80;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar13 != uVar3);
LAB_14075bc80:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar11 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar11 = iVar6 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar16 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar11 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar11) {
      iVar11 = iVar6;
    }
  }
  if (iVar11 < iVar6) {
    uVar13 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    do {
      lVar15 = *param_1;
      uVar9 = *(ulonglong *)(lVar15 + (longlong)iVar11 * 0x10);
      if (((bVar2 & 1) != 0) && (uVar9 != 0)) {
        FUN_1456cec3c(uVar9);
        bVar2 = DAT_14c950c29;
      }
      lVar15 = lVar15 + (longlong)iVar11 * 0x10;
      uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar9 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar9;
      *(int *)(lVar15 + 0xc) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar15 + 8) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11;
      uVar13 = uVar13 & ~(uint)uVar14;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar11 = (int)uVar16;
      lVar15 = (longlong)iVar11;
      uVar3 = puVar4[lVar15] & uVar13;
      if (uVar3 == 0) {
        iVar7 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar7 = iVar6 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar4[lVar15 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar11 + (int)lVar12 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar9 = uVar14 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar6);
  }
  return;
}



// FUNCTION 14075bef6 FUN_14075bef6 body=3873 status=ok
// SIG undefined FUN_14075bef6(void)

void FUN_14075bef6(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  PSRWLOCK SRWLock;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined1 auStack_88 [32];
  uint *local_68;
  PSRWLOCK local_60;
  ulonglong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_14075c404;
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0x280);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  plVar1 = (longlong *)(param_1 + 0x2a8);
  local_60 = SRWLock;
  if (*(int *)(param_1 + 0x2dc) == 0) {
    iVar19 = *(int *)(param_1 + 0x2b0);
    *(int *)(param_1 + 0x2b0) = iVar19 + 1;
    if (*(int *)(param_1 + 0x2b4) == iVar19) {
      FUN_14482b872(plVar1,iVar19);
    }
    iVar24 = *(int *)(param_1 + 0x2d0);
    if (iVar24 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar12 = iVar24 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    lVar10 = param_1 + 0x2b8;
    iVar17 = iVar24 + 1;
    iVar22 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar22 = iVar24;
    }
    if (iVar22 >> 5 == iVar12) {
      *(int *)(param_1 + 0x2d0) = iVar17;
    }
    else {
      if (*(int *)(param_1 + 0x2d4) <= iVar24) {
        iVar12 = iVar24;
        if (iVar24 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar21 = iVar24 + 0x20U >> 5;
          local_68 = (uint *)(ulonglong)uVar21;
          if (*(int *)(param_1 + 0x2d4) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar21) {
              uVar7 = uVar21;
            }
          }
          else {
            uVar7 = uVar21 + (uVar21 * 3 >> 3) + 0x10;
          }
          uVar14 = (ulonglong)(uVar7 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar21 = (uint)(uVar14 + 0xf);
              if (uVar7 < 0x1ffd) {
                uVar14 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar14 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar21 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar11 = (&DAT_14c841e00)[uVar21 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar11) {
                    uVar20 = (ulonglong)bVar11;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar11;
                  do {
                    uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_14075c6a1;
                    lVar9 = uVar20 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar9 != 0x33);
                }
                uVar14 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar14 = (ulonglong)DAT_14c841df8;
                }
                uVar14 = -uVar14 & (uVar18 + uVar14) - 1;
              }
            }
            else {
              uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
              iVar12 = *(int *)(param_1 + 0x2d0);
            }
          }
LAB_14075c6a1:
          iVar8 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)local_68 <= iVar8) {
            iVar17 = iVar8 << 5;
          }
        }
        *(int *)(param_1 + 0x2d4) = iVar17;
        FUN_1446efbd8(lVar10,iVar12);
        iVar17 = *(int *)(param_1 + 0x2d0) + 1;
      }
      iVar12 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar12 = iVar17;
      }
      *(int *)(param_1 + 0x2d0) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x2c8);
        if (*(longlong *)(param_1 + 0x2c8) == 0) {
          lVar9 = lVar10;
        }
        bVar11 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar9 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)(lVar9 + (longlong)(iVar12 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar19;
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x2c8);
    }
    bVar11 = (byte)iVar24 & 0x1f;
    puVar15 = (uint *)(lVar10 + (longlong)(iVar22 >> 5) * 4);
    *puVar15 = *puVar15 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x2d8);
    lVar9 = (longlong)iVar19;
    iVar24 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 4 + lVar9 * 0x18);
    *(int *)(param_1 + 0x2d8) = iVar24;
    iVar12 = *(int *)(param_1 + 0x2dc) + -1;
    *(int *)(param_1 + 0x2dc) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar24 * 0x18) = 0xffffffff;
    }
  }
  puVar15 = (uint *)(param_1 + 0x2b8);
  uVar21 = 1;
  puVar13 = *(uint **)(param_1 + 0x2c8);
  if (*(uint **)(param_1 + 0x2c8) == (uint *)0x0) {
    puVar13 = puVar15;
  }
  iVar24 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar24 = iVar19;
  }
  puVar13[iVar24 >> 5] = puVar13[iVar24 >> 5] | 1 << ((byte)iVar19 & 0x1f);
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + lVar9 * 0x18);
  *puVar2 = param_3;
  puVar2[1] = param_2;
  uVar14 = param_3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
    uVar14 = *puVar2;
  }
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar7 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar16 = *(int *)(param_1 + 0x2b0) - *(int *)(param_1 + 0x2dc);
  if (uVar16 != 1) {
    if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
      lVar10 = param_1 + 0x2e0;
      if (*(longlong *)(param_1 + 0x2e8) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x2e8);
      }
      iVar24 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x2f0) - 1U & uVar7) * 4);
      if (iVar24 != -1) {
        do {
          puVar3 = (ulonglong *)(*plVar1 + (longlong)iVar24 * 0x18);
          if (*puVar3 == uVar14) {
            uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
            uVar14 = puVar2[1];
            uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
            *(int *)puVar3 = (int)*puVar2;
            *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
            *(int *)(puVar3 + 1) = (int)uVar14;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
            FUN_1401bacd2(plVar1,iVar19);
            goto LAB_14075c11a;
          }
          iVar24 = (int)puVar3[2];
        } while (iVar24 != -1);
      }
    }
    if (3 < uVar16) {
      uVar14 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar21 = 1 << ((byte)lVar10 & 0x1f);
    }
  }
  if (((int)uVar16 < 1) || ((int)uVar21 <= *(int *)(param_1 + 0x2f0))) {
    uVar7 = *(int *)(param_1 + 0x2f0) - 1U & uVar7;
    *(uint *)((longlong)puVar2 + 0x14) = uVar7;
    lVar10 = *(longlong *)(param_1 + 0x2e8);
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
      lVar10 = param_1 + 0x2e0;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          (lVar10 + ((longlong)*(int *)(param_1 + 0x2f0) - 1U & (longlong)(int)uVar7) * 4);
    lVar10 = *(longlong *)(param_1 + 0x2e8);
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
      lVar10 = param_1 + 0x2e0;
    }
    *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x2f0) - 1U & (longlong)(int)uVar7) * 4) =
         iVar19;
  }
  else {
    *(uint *)(param_1 + 0x2f0) = uVar21;
    plVar1 = (longlong *)(param_1 + 0x2e8);
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_1446efa72(plVar1,0,0,4);
      uVar21 = *(uint *)(param_1 + 0x2f0);
    }
    lVar10 = param_1 + 0x2e0;
    if (uVar21 == 1) {
      if (*plVar1 != 0) {
        FUN_1446efa72(plVar1,0,0,4);
      }
LAB_14075c72b:
      uVar7 = 0;
      do {
        lVar9 = *(longlong *)(param_1 + 0x2e8);
        if (*(longlong *)(param_1 + 0x2e8) == 0) {
          lVar9 = lVar10;
        }
        *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x2f0) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar21 != uVar7);
    }
    else {
      if (uVar21 == 0) goto LAB_14075c11a;
      FUN_1446efa72(plVar1,0,uVar21,4);
      if (0 < (int)uVar21) goto LAB_14075c72b;
    }
    iVar19 = *(int *)(param_1 + 0x2d0);
    if (iVar19 == 0) {
      uVar14 = 0;
      uVar18 = 1;
      iVar24 = 0;
      iVar12 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x2c8);
      if (*(uint **)(param_1 + 0x2c8) == (uint *)0x0) {
        puVar13 = puVar15;
      }
      uVar21 = *puVar13;
      if (uVar21 == 0) {
        iVar24 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar24 = iVar19 + -1;
        }
        uVar14 = 0;
        uVar18 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar18 = uVar14;
        }
        iVar12 = 0;
        do {
          if (uVar18 == uVar14) goto LAB_14075c11a;
          iVar12 = iVar12 + 0x20;
          uVar21 = puVar13[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar14 = 0;
        iVar12 = 0;
      }
      uVar18 = (ulonglong)(-uVar21 & uVar21);
      uVar20 = uVar18 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar24 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar24) {
        iVar24 = iVar19;
      }
    }
    if (iVar24 < iVar19) {
      uVar21 = 0xffffffff;
      do {
        lVar9 = *(longlong *)(param_1 + 0x2a8);
        lVar25 = (longlong)iVar24;
        uVar20 = *(ulonglong *)(lVar9 + lVar25 * 0x18);
        uVar7 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar20 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x2f0) - 1U;
        iVar19 = (int)uVar20;
        *(int *)(lVar9 + 0x14 + lVar25 * 0x18) = iVar19;
        lVar26 = *(longlong *)(param_1 + 0x2e8);
        if (*(longlong *)(param_1 + 0x2e8) == 0) {
          lVar26 = lVar10;
        }
        *(undefined4 *)(lVar9 + 0x10 + lVar25 * 0x18) =
             *(undefined4 *)(lVar26 + ((longlong)*(int *)(param_1 + 0x2f0) - 1U & uVar20) * 4);
        lVar9 = *(longlong *)(param_1 + 0x2e8);
        if (*(longlong *)(param_1 + 0x2e8) == 0) {
          lVar9 = lVar10;
        }
        *(int *)(lVar9 + ((longlong)iVar19 & (longlong)*(int *)(param_1 + 0x2f0) - 1U) * 4) = iVar24
        ;
        uVar21 = ~(uint)uVar18 & uVar21;
        puVar13 = *(uint **)(param_1 + 0x2c8);
        if (*(uint **)(param_1 + 0x2c8) == (uint *)0x0) {
          puVar13 = puVar15;
        }
        iVar19 = *(int *)(param_1 + 0x2d0);
        iVar24 = (int)uVar14;
        lVar9 = (longlong)iVar24;
        uVar7 = puVar13[lVar9] & uVar21;
        if (uVar7 == 0) {
          iVar17 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar17 = iVar19 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar22 = iVar17;
          if (iVar17 < iVar24) {
            iVar22 = iVar24;
          }
          if (iVar17 <= iVar24) break;
          lVar26 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar7 = puVar13[lVar9 + lVar26 + 1];
            if (uVar7 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar22 - lVar9 == lVar26) goto LAB_14075c11a;
          }
          uVar14 = (ulonglong)(iVar24 + (int)lVar26 + 1);
          uVar21 = 0xffffffff;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar20 = uVar18 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar24 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar24 < iVar19);
    }
  }
LAB_14075c11a:
  plVar1 = (longlong *)(param_1 + 0x2f8);
  if (*(int *)(param_1 + 0x300) != *(int *)(param_1 + 0x32c)) {
    uVar21 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    lVar10 = param_1 + 0x330;
    if (*(longlong *)(param_1 + 0x338) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x338);
    }
    iVar19 = *(int *)(lVar10 + (ulonglong)
                               (*(int *)(param_1 + 0x340) - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
    if (iVar19 != -1) {
      do {
        lVar10 = *plVar1 + (longlong)iVar19 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar19 * 0x20) == param_2) {
          if ((lVar10 != 0) && (plVar27 = (longlong *)(lVar10 + 8), plVar27 != (longlong *)0x0)) {
            iVar19 = *(int *)(lVar10 + 0x10);
            *(uint *)(lVar10 + 0x10) = iVar19 + 1U;
            if (*(uint *)(lVar10 + 0x14) < iVar19 + 1U) {
              FUN_14075ce18(plVar27,iVar19);
            }
            *(ulonglong *)(*plVar27 + (longlong)iVar19 * 8) = param_3;
            goto LAB_14075c3f4;
          }
          break;
        }
        iVar19 = *(int *)(lVar10 + 0x18);
      } while (iVar19 != -1);
    }
  }
  local_58 = (ulonglong *)0x0;
  uStack_50 = 1;
  FUN_14075ce18(&local_58,0);
  *local_58 = param_3;
  if (*(int *)(param_1 + 0x32c) == 0) {
    iVar19 = *(int *)(param_1 + 0x300);
    *(int *)(param_1 + 0x300) = iVar19 + 1;
    if (*(int *)(param_1 + 0x304) == iVar19) {
      FUN_1447711aa(plVar1,iVar19);
    }
    iVar24 = *(int *)(param_1 + 800);
    if (iVar24 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar12 = iVar24 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    lVar10 = param_1 + 0x308;
    iVar17 = iVar24 + 1;
    iVar22 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar22 = iVar24;
    }
    if (iVar22 >> 5 == iVar12) {
      *(int *)(param_1 + 800) = iVar17;
    }
    else {
      if (*(int *)(param_1 + 0x324) <= iVar24) {
        if (iVar24 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar12 = iVar24;
        }
        else {
          uVar21 = iVar24 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x324) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar21) {
              uVar7 = uVar21;
            }
          }
          else {
            uVar7 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar7 << 2,0);
          iVar12 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)uVar21 <= iVar12) {
            iVar17 = iVar12 << 5;
          }
          iVar12 = *(int *)(param_1 + 800);
        }
        *(int *)(param_1 + 0x324) = iVar17;
        FUN_1446efbd8(lVar10,iVar12);
        iVar17 = *(int *)(param_1 + 800) + 1;
      }
      iVar12 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar12 = iVar17;
      }
      *(int *)(param_1 + 800) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x318);
        if (*(longlong *)(param_1 + 0x318) == 0) {
          lVar9 = lVar10;
        }
        bVar11 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar9 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)(lVar9 + (longlong)(iVar12 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar19;
    if (*(longlong *)(param_1 + 0x318) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x318);
    }
    bVar11 = (byte)iVar24 & 0x1f;
    puVar15 = (uint *)(lVar10 + (longlong)(iVar22 >> 5) * 4);
    *puVar15 = *puVar15 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x328);
    lVar9 = (longlong)iVar19;
    iVar24 = *(int *)(*(longlong *)(param_1 + 0x2f8) + 4 + lVar9 * 0x20);
    *(int *)(param_1 + 0x328) = iVar24;
    iVar12 = *(int *)(param_1 + 0x32c) + -1;
    *(int *)(param_1 + 0x32c) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar24 * 0x20) = 0xffffffff;
    }
  }
  puVar2 = local_58;
  local_68 = (uint *)(param_1 + 0x308);
  puVar15 = *(uint **)(param_1 + 0x318);
  if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
    puVar15 = local_68;
  }
  iVar24 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar24 = iVar19;
  }
  puVar15[iVar24 >> 5] = puVar15[iVar24 >> 5] | 1 << ((byte)iVar19 & 0x1f);
  lVar10 = *(longlong *)(param_1 + 0x2f8);
  lVar9 = lVar9 * 0x20;
  puVar3 = (ulonglong *)(lVar10 + lVar9);
  *(ulonglong *)(lVar10 + lVar9) = param_2;
  *(undefined8 *)(lVar10 + 8 + lVar9) = 0;
  lVar26 = (longlong)(int)uStack_50;
  *(int *)(lVar10 + 0x10 + lVar9) = (int)uStack_50;
  if (lVar26 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
  }
  else {
    FUN_14075cf7a(lVar10 + lVar9 + 8,uStack_50 & 0xffffffff);
    memcpy((void *)puVar3[1],puVar2,lVar26 << 3);
    param_2 = *puVar3;
  }
  *(undefined4 *)(puVar3 + 3) = 0xffffffff;
  uVar21 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
  uVar21 = uVar21 >> 0x10 ^ uVar21;
  uVar7 = *(int *)(param_1 + 0x300) - *(int *)(param_1 + 0x32c);
  if ((uVar7 != 0) && (uVar7 != 1)) {
    lVar10 = param_1 + 0x330;
    if (*(longlong *)(param_1 + 0x338) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x338);
    }
    iVar24 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x340) - 1U & uVar21) * 4);
    if (iVar24 != -1) {
      do {
        puVar4 = (undefined4 *)(*plVar1 + (longlong)iVar24 * 0x20);
        if (*(ulonglong *)(*plVar1 + (longlong)iVar24 * 0x20) == param_2) {
          if (*(longlong *)(puVar4 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar14 = *puVar3;
          uVar5 = *(undefined4 *)((longlong)puVar3 + 4);
          uVar18 = puVar3[1];
          uVar6 = *(undefined4 *)((longlong)puVar3 + 0xc);
          *(ulonglong *)(puVar4 + 4) = puVar3[2];
          *puVar4 = (int)uVar14;
          puVar4[1] = uVar5;
          puVar4[2] = (int)uVar18;
          puVar4[3] = uVar6;
          FUN_1401bad44(plVar1,iVar19);
          goto LAB_14075c3b2;
        }
        iVar24 = puVar4[6];
      } while (iVar24 != -1);
    }
  }
  if (uVar7 < 4) {
    uVar16 = 1;
  }
  else {
    uVar14 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar7 < 1) || ((int)uVar16 <= *(int *)(param_1 + 0x340))) {
    uVar21 = *(int *)(param_1 + 0x340) - 1U & uVar21;
    *(uint *)((longlong)puVar3 + 0x1c) = uVar21;
    lVar10 = *(longlong *)(param_1 + 0x338);
    if (*(longlong *)(param_1 + 0x338) == 0) {
      lVar10 = param_1 + 0x330;
    }
    *(undefined4 *)(puVar3 + 3) =
         *(undefined4 *)
          (lVar10 + ((longlong)*(int *)(param_1 + 0x340) - 1U & (longlong)(int)uVar21) * 4);
    lVar10 = *(longlong *)(param_1 + 0x338);
    if (*(longlong *)(param_1 + 0x338) == 0) {
      lVar10 = param_1 + 0x330;
    }
    *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x340) - 1U & (longlong)(int)uVar21) * 4) =
         iVar19;
  }
  else {
    *(uint *)(param_1 + 0x340) = uVar16;
    plVar1 = (longlong *)(param_1 + 0x338);
    if (*(longlong *)(param_1 + 0x338) != 0) {
      FUN_1446efa72(plVar1,0,0,4);
      uVar16 = *(uint *)(param_1 + 0x340);
    }
    lVar10 = param_1 + 0x330;
    if (uVar16 == 1) {
      if (*plVar1 != 0) {
        FUN_1446efa72(plVar1,0,0,4);
      }
LAB_14075c9fb:
      uVar21 = 0;
      do {
        lVar9 = *(longlong *)(param_1 + 0x338);
        if (*(longlong *)(param_1 + 0x338) == 0) {
          lVar9 = lVar10;
        }
        *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x340) + 0x7fffffffU & uVar21) * 4) =
             0xffffffff;
        uVar21 = uVar21 + 1;
      } while (uVar16 != uVar21);
    }
    else {
      if (uVar16 == 0) goto LAB_14075c3b2;
      FUN_1446efa72(plVar1,0,uVar16,4);
      if (0 < (int)uVar16) goto LAB_14075c9fb;
    }
    iVar19 = *(int *)(param_1 + 800);
    if (iVar19 == 0) {
      uVar14 = 0;
      uVar18 = 1;
      iVar24 = 0;
      iVar12 = 0;
    }
    else {
      puVar15 = *(uint **)(param_1 + 0x318);
      if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
        puVar15 = local_68;
      }
      uVar21 = *puVar15;
      if (uVar21 == 0) {
        iVar24 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar24 = iVar19 + -1;
        }
        uVar14 = 0;
        uVar18 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar18 = uVar14;
        }
        iVar12 = 0;
        do {
          if (uVar18 == uVar14) goto LAB_14075c3b2;
          iVar12 = iVar12 + 0x20;
          uVar21 = puVar15[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar14 = 0;
        iVar12 = 0;
      }
      uVar18 = (ulonglong)(-uVar21 & uVar21);
      uVar20 = uVar18 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar24 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar24) {
        iVar24 = iVar19;
      }
    }
    if (iVar24 < iVar19) {
      uVar21 = 0xffffffff;
      do {
        lVar9 = *(longlong *)(param_1 + 0x2f8);
        lVar25 = (longlong)iVar24 * 0x20;
        uVar7 = ((uint)(*(ulonglong *)(lVar9 + lVar25) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar9 + lVar25) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar20 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x340) - 1U;
        iVar19 = (int)uVar20;
        *(int *)(lVar9 + 0x1c + lVar25) = iVar19;
        lVar26 = *(longlong *)(param_1 + 0x338);
        if (*(longlong *)(param_1 + 0x338) == 0) {
          lVar26 = lVar10;
        }
        *(undefined4 *)(lVar9 + 0x18 + lVar25) =
             *(undefined4 *)(lVar26 + ((longlong)*(int *)(param_1 + 0x340) - 1U & uVar20) * 4);
        lVar9 = *(longlong *)(param_1 + 0x338);
        if (*(longlong *)(param_1 + 0x338) == 0) {
          lVar9 = lVar10;
        }
        *(int *)(lVar9 + ((longlong)iVar19 & (longlong)*(int *)(param_1 + 0x340) - 1U) * 4) = iVar24
        ;
        uVar21 = ~(uint)uVar18 & uVar21;
        puVar15 = *(uint **)(param_1 + 0x318);
        if (*(uint **)(param_1 + 0x318) == (uint *)0x0) {
          puVar15 = local_68;
        }
        iVar19 = *(int *)(param_1 + 800);
        iVar24 = (int)uVar14;
        lVar9 = (longlong)iVar24;
        uVar7 = puVar15[lVar9] & uVar21;
        if (uVar7 == 0) {
          iVar17 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar17 = iVar19 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar22 = iVar17;
          if (iVar17 < iVar24) {
            iVar22 = iVar24;
          }
          if (iVar17 <= iVar24) break;
          lVar26 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar7 = puVar15[lVar9 + lVar26 + 1];
            if (uVar7 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar22 - lVar9 == lVar26) goto LAB_14075c3b2;
          }
          uVar14 = (ulonglong)(iVar24 + (int)lVar26 + 1);
          uVar21 = 0xffffffff;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar20 = uVar18 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar24 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar24 < iVar19);
    }
  }
LAB_14075c3b2:
  if (local_58 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
LAB_14075c3f4:
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
  }
LAB_14075c404:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075ce18 FUN_14075ce18 body=353 status=ok
// SIG undefined FUN_14075ce18(void)

void FUN_14075ce18(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14075ce9d;
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
LAB_14075ce9d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14075cf7a FUN_14075cf7a body=306 status=ok
// SIG undefined FUN_14075cf7a(void)

void FUN_14075cf7a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14075cfdc;
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
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14075cfdc:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 14075d0ac FUN_14075d0ac body=1546 status=ok
// SIG undefined FUN_14075d0ac(void)

void FUN_14075d0ac(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  longlong *plVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  char cVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auStack_3a8 [40];
  undefined4 local_380;
  char *local_378;
  int local_370;
  int local_36c;
  undefined4 local_368;
  byte local_359;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  pfVar18 = *(float **)(param_1 + 0x138);
  if ((longlong)*(int *)(param_1 + 0x140) < 1) {
    lVar23 = -1;
  }
  else {
    fVar26 = -3.4028235e+38;
    uVar10 = 0xffffffff;
    uVar13 = 0;
    pfVar8 = pfVar18;
    do {
      if (fVar26 < *pfVar8) {
        uVar10 = uVar13 & 0xffffffff;
        fVar26 = *pfVar8;
      }
      uVar13 = uVar13 + 1;
      pfVar8 = pfVar8 + 8;
    } while ((longlong)*(int *)(param_1 + 0x140) != uVar13);
    lVar23 = (longlong)(int)uVar10;
  }
  local_359 = 0;
  uVar27 = FUN_14327eeb4(param_1,&local_359,0);
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar27;
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe | local_359;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x100);
  local_380 = 0x47c34ff3;
  local_378 = (char *)0x0;
  local_370 = 1;
  FUN_140b1cbbc(&local_378,1,0);
  iVar20 = local_370;
  local_378[0] = '\0';
  local_378[1] = '\x05';
  local_378[4] = '\x05';
  local_378[5] = '\0';
  local_378[6] = '\0';
  local_378[7] = '\0';
  local_378[8] = '\n';
  local_378[9] = '\0';
  local_378[10] = '\0';
  local_378[0xb] = '\0';
  local_378[0xc] = '\x19';
  local_378[0xd] = '\0';
  local_378[0xe] = '\0';
  local_378[0xf] = '\0';
  local_378[0x10] = '2';
  local_378[0x11] = '\0';
  local_378[0x12] = '\0';
  local_378[0x13] = '\0';
  local_378[0x14] = '\0';
  local_378[0x15] = '\0';
  local_378[0x16] = -0x80;
  local_378[0x17] = '?';
  local_378[0x18] = '<';
  local_378[0x19] = '\0';
  local_378[0x1a] = '\0';
  local_378[0x1b] = '\0';
  local_378[0x1c] = '\0';
  local_378[0x1d] = '\0';
  local_378[0x1e] = '\0';
  local_378[0x1f] = '\0';
  local_378[0x20] = '\0';
  local_378[0x21] = '\0';
  local_378[0x22] = '\0';
  local_378[0x23] = '\0';
  local_368 = 5000;
  if (pfVar18[lVar23 * 8 + 4] != 0.0) {
    pfVar18 = pfVar18 + lVar23 * 8 + 2;
    lVar23 = (longlong)local_370;
    if (lVar23 < 1) {
      local_370 = 1;
      if ((uint)(local_36c - iVar20) < 1U - iVar20) {
        FUN_1474bd20e(&local_378,iVar20);
      }
      FUN_1474bd1de(local_378 + lVar23 * 0x24,1U - iVar20);
    }
    else if (local_370 != 1) {
      local_370 = 1;
      FUN_1474bd2a2(&local_378);
    }
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(*(longlong *)pfVar18 + 0x18);
    cVar25 = **(char **)pfVar18;
    if (cVar25 == '\0') {
      cVar25 = (*(char **)pfVar18)[1] == '\x03';
    }
    *local_378 = cVar25;
    local_378[1] = *(char *)(*(longlong *)pfVar18 + 1);
    *(undefined4 *)(local_378 + 4) = *(undefined4 *)(*(longlong *)pfVar18 + 4);
    *(undefined4 *)(local_378 + 8) = *(undefined4 *)(*(longlong *)pfVar18 + 8);
    *(undefined4 *)(local_378 + 0xc) = *(undefined4 *)(*(longlong *)pfVar18 + 0xc);
    *(undefined4 *)(local_378 + 0x10) = *(undefined4 *)(*(longlong *)pfVar18 + 0x10);
    *(undefined4 *)(local_378 + 0x1c) = *(undefined4 *)(*(longlong *)pfVar18 + 0x1c);
    *(undefined4 *)(local_378 + 0x20) = *(undefined4 *)(*(longlong *)pfVar18 + 0x20);
    *(undefined4 *)(local_378 + 0x14) = *(undefined4 *)(*(longlong *)pfVar18 + 0x14);
    *(undefined4 *)(local_378 + 0x18) = *(undefined4 *)(*(longlong *)pfVar18 + 0x18);
  }
  local_380 = 0x7f7fffff;
  iVar9 = *(int *)(param_1 + 0x140);
  iVar20 = iVar9 + 1;
  iVar1 = (int)param_2[1];
  if (iVar9 < iVar1) {
    if (iVar9 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar20);
    }
    if (iVar20 < iVar1) {
      FUN_1474bd350(param_2,iVar20,iVar1 - iVar20);
      FUN_1474bd3b2(param_2);
    }
  }
  else {
    *(int *)(param_2 + 1) = iVar20;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < (uint)(iVar20 - iVar1)) {
      FUN_1407599d4(param_2,iVar1);
    }
    FUN_140759459((longlong)iVar1 * 0x18 + *param_2,iVar20 - iVar1);
  }
  FUN_14327ecd2(*param_2);
  if (0 < *(int *)(param_1 + 0x140)) {
    lVar23 = 0x18;
    lVar24 = 0;
    do {
      lVar24 = lVar24 + 1;
      FUN_14327ecd2(*param_2 + lVar23);
      lVar23 = lVar23 + 0x18;
    } while (lVar24 < *(int *)(param_1 + 0x140));
  }
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfd | *(char *)(param_1 + 0x104) * '\x02';
  iVar20 = (int)param_2[1];
  if (1 < (longlong)iVar20) {
    lVar23 = *param_2;
    memset(local_348,0,0x2f0);
    local_350 = lVar23 + (longlong)iVar20 * 0x18 + -0x18;
    local_358 = lVar23;
    fVar26 = logf((float)iVar20);
    local_348[0] = (int)(longlong)(fVar26 + fVar26);
    plVar17 = &local_358;
    do {
      pfVar8 = (float *)*plVar17;
      pfVar18 = (float *)plVar17[1];
      iVar20 = (int)plVar17[2];
      iVar9 = (int)((ulonglong)((longlong)pfVar18 - (longlong)pfVar8) >> 3);
      pfVar15 = pfVar18;
      pfVar21 = pfVar8;
      if (iVar20 != 0) {
LAB_14075d3e4:
        uVar12 = iVar9 * -0x55555555 + 1;
        if (8 < (int)uVar12) {
          uVar10 = (ulonglong)(uVar12 >> 1);
          uVar2 = *(undefined8 *)(pfVar8 + uVar10 * 6 + 4);
          uVar3 = *(undefined8 *)(pfVar8 + uVar10 * 6);
          uVar4 = *(undefined8 *)(pfVar8 + uVar10 * 6 + 2);
          *(undefined8 *)(pfVar8 + uVar10 * 6 + 4) = *(undefined8 *)(pfVar8 + 4);
          uVar5 = *(undefined8 *)(pfVar8 + 2);
          *(undefined8 *)(pfVar8 + uVar10 * 6) = *(undefined8 *)pfVar8;
          *(undefined8 *)(pfVar8 + uVar10 * 6 + 2) = uVar5;
          *(undefined8 *)(pfVar8 + 4) = uVar2;
          *(undefined8 *)pfVar8 = uVar3;
          *(undefined8 *)(pfVar8 + 2) = uVar4;
          pfVar14 = pfVar18 + 6;
          pfVar11 = pfVar8;
          do {
            pfVar6 = pfVar11 + 6;
            pfVar19 = pfVar11 + 6;
            do {
              pfVar11 = pfVar19;
              pfVar16 = pfVar6;
              if (pfVar18 < pfVar11) break;
              pfVar6 = pfVar16 + 6;
              pfVar19 = pfVar11 + 6;
            } while (*pfVar11 < *pfVar8 || *pfVar11 == *pfVar8);
            pfVar6 = pfVar14 + -0xc;
            do {
              pfVar19 = pfVar14;
              pfVar22 = pfVar6;
              pfVar14 = pfVar19 + -6;
              if (pfVar14 <= pfVar8) break;
              pfVar6 = pfVar22 + -6;
            } while (*pfVar8 < *pfVar14 || *pfVar8 == *pfVar14);
            if (pfVar14 < pfVar11) goto LAB_14075d4cd;
            uVar2 = *(undefined8 *)(pfVar11 + 4);
            uVar3 = *(undefined8 *)pfVar11;
            uVar4 = *(undefined8 *)(pfVar11 + 2);
            *(undefined8 *)(pfVar11 + 4) = *(undefined8 *)(pfVar19 + -2);
            uVar5 = *(undefined8 *)(pfVar19 + -4);
            *(undefined8 *)pfVar11 = *(undefined8 *)pfVar14;
            *(undefined8 *)(pfVar11 + 2) = uVar5;
            *(undefined8 *)(pfVar19 + -2) = uVar2;
            *(undefined8 *)pfVar14 = uVar3;
            *(undefined8 *)(pfVar19 + -4) = uVar4;
          } while( true );
        }
        if (pfVar8 < pfVar18) {
          do {
            pfVar15 = pfVar8;
            if (pfVar8 + 6 <= pfVar18) {
              fVar26 = *pfVar8;
              pfVar21 = pfVar8 + 6;
              do {
                fVar7 = *pfVar21;
                pfVar14 = pfVar21;
                if (*pfVar21 <= fVar26) {
                  fVar7 = fVar26;
                  pfVar14 = pfVar15;
                }
                pfVar15 = pfVar14;
                fVar26 = fVar7;
                pfVar21 = pfVar21 + 6;
              } while (pfVar21 <= pfVar18);
            }
            local_48 = *(undefined8 *)(pfVar15 + 4);
            local_58 = *(undefined8 *)pfVar15;
            uStack_50 = *(undefined8 *)(pfVar15 + 2);
            uVar3 = local_58;
            uVar4 = uStack_50;
            *(undefined8 *)(pfVar15 + 4) = *(undefined8 *)(pfVar18 + 4);
            uVar2 = *(undefined8 *)(pfVar18 + 2);
            *(undefined8 *)pfVar15 = *(undefined8 *)pfVar18;
            *(undefined8 *)(pfVar15 + 2) = uVar2;
            *(undefined8 *)(pfVar18 + 4) = local_48;
            local_58._4_4_ = (float)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (float)((ulonglong)uStack_50 >> 0x20);
            *pfVar18 = (float)local_58;
            pfVar18[1] = local_58._4_4_;
            pfVar18[2] = (float)uStack_50;
            pfVar18[3] = uStack_50._4_4_;
            pfVar18 = pfVar18 + -6;
            local_58 = uVar3;
            uStack_50 = uVar4;
          } while (pfVar8 < pfVar18);
        }
        goto LAB_14075d618;
      }
LAB_14075d3b2:
      FUN_1474bd460(pfVar8);
LAB_14075d618:
      plVar17 = plVar17 + -3;
    } while (&local_358 <= plVar17);
  }
  if (local_378 != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14075d4cd:
  local_48 = *(undefined8 *)(pfVar8 + 4);
  local_58 = *(undefined8 *)pfVar8;
  uStack_50 = *(undefined8 *)(pfVar8 + 2);
  uVar3 = local_58;
  uVar4 = uStack_50;
  *(undefined8 *)(pfVar8 + 4) = *(undefined8 *)(pfVar19 + -2);
  uVar2 = *(undefined8 *)(pfVar19 + -4);
  *(undefined8 *)pfVar8 = *(undefined8 *)pfVar14;
  *(undefined8 *)(pfVar8 + 2) = uVar2;
  *(undefined8 *)(pfVar19 + -2) = local_48;
  local_58._4_4_ = (float)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (float)((ulonglong)uStack_50 >> 0x20);
  *pfVar14 = (float)local_58;
  pfVar19[-5] = local_58._4_4_;
  pfVar19[-4] = (float)uStack_50;
  pfVar19[-3] = uStack_50._4_4_;
  iVar20 = iVar20 + -1;
  pfVar19 = pfVar19 + -0xc;
  local_58 = uVar3;
  uStack_50 = uVar4;
  if ((longlong)pfVar22 - (longlong)pfVar21 < (longlong)pfVar15 - (longlong)pfVar16) {
    if (pfVar11 < pfVar18) {
      *plVar17 = (longlong)pfVar11;
      plVar17[1] = (longlong)pfVar18;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    pfVar16 = pfVar8;
    if (pfVar14 <= pfVar8 + 6) goto LAB_14075d618;
  }
  else {
    if (pfVar8 + 6 < pfVar14) {
      *plVar17 = (longlong)pfVar8;
      plVar17[1] = (longlong)pfVar19;
      *(int *)(plVar17 + 2) = iVar20;
      plVar17 = plVar17 + 3;
    }
    pfVar8 = pfVar11;
    pfVar19 = pfVar18;
    pfVar22 = pfVar18;
    if (pfVar18 <= pfVar11) goto LAB_14075d618;
  }
  iVar9 = (int)((ulonglong)((longlong)pfVar22 - (longlong)pfVar16) >> 3);
  pfVar18 = pfVar19;
  pfVar15 = pfVar22;
  pfVar21 = pfVar16;
  if (iVar20 == 0) goto LAB_14075d3b2;
  goto LAB_14075d3e4;
}



// FUNCTION 14075d6b8 FUN_14075d6b8 body=1934 status=ok
// SIG undefined FUN_14075d6b8(void)

undefined4 *
FUN_14075d6b8(longlong *param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong *_Src;
  void *_Dst;
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint *puVar8;
  byte bVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong *puVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  uint *local_70;
  longlong *local_68;
  uint local_5c;
  undefined4 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_4;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar21 = *(uint *)(param_1 + 1);
    uVar17 = (ulonglong)uVar21;
    *(uint *)(param_1 + 1) = uVar21 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar21) {
      FUN_1401284dc(param_1,uVar21);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar3 = iVar12 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar19 = iVar12 + 1;
    iVar13 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar13 = iVar12;
    }
    if (iVar13 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar19;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar19 = 0x80;
          iVar3 = iVar12;
        }
        else {
          uVar4 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar4) {
              uVar5 = uVar4;
            }
          }
          else {
            uVar5 = (uVar4 * 3 >> 3) + uVar4 + 0x10;
          }
          uVar22 = FUN_144a3809e(uVar5 << 2,0);
          iVar3 = (int)(uVar22 >> 2);
          iVar19 = -0x20;
          if ((int)uVar4 <= iVar3) {
            iVar19 = iVar3 << 5;
          }
          iVar3 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar19;
        FUN_1446efbd8(plVar11,iVar3);
        iVar19 = (int)param_1[5] + 1;
      }
      iVar3 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar3 = iVar19;
      }
      *(int *)(param_1 + 5) = iVar19;
      if (iVar19 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar11;
        }
        bVar9 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar3 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)(int)uVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar12 & 0x1f;
    puVar8 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
    *puVar8 = *puVar8 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    uVar17 = (ulonglong)*(uint *)(param_1 + 6);
    lVar7 = (longlong)(int)*(uint *)(param_1 + 6);
    iVar12 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar12;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x60) = 0xffffffff;
    }
  }
  iVar12 = (int)uVar17;
  uVar21 = 1 << ((byte)uVar17 & 0x1f);
  puVar8 = (uint *)(param_1 + 2);
  puVar10 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar10 = puVar8;
  }
  iVar3 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar3 = iVar12;
  }
  puVar10[iVar3 >> 5] = puVar10[iVar3 >> 5] | uVar21;
  _Src = (ulonglong *)(*param_1 + lVar7 * 0x60);
  puVar1 = (ulonglong *)param_3[1];
  lVar18 = *(longlong *)*param_3;
  *(longlong *)(*param_1 + lVar7 * 0x60) = lVar18;
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar22 = *puVar1;
  _Src[2] = uVar22;
  _Src[4] = 0;
  if (uVar22 != 0) {
    puVar20 = puVar1 + 4;
    if ((ulonglong *)puVar1[2] != (ulonglong *)0x0) {
      puVar20 = (ulonglong *)puVar1[2];
    }
    (**(code **)*puVar20)(puVar20,_Src + 4);
  }
  *(undefined4 *)(_Src + 10) = 0xffffffff;
  uVar22 = *_Src;
  local_78 = uVar17;
  if ((DAT_14c950c29 == 1) && (uVar22 != 0)) {
    FUN_1456cec3c(uVar22);
  }
  uVar4 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_70 = puVar8;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    cVar2 = '\0';
  }
  else {
    local_50 = *_Src;
    if ((DAT_14c950c29 == 1) && (local_50 != 0)) {
      FUN_1456cec3c();
    }
    uVar5 = FUN_14075de48(param_1,uVar4,&local_50);
    if (uVar5 == 0xffffffff) {
      cVar2 = '\0';
    }
    else {
      _Dst = (void *)(*param_1 + (longlong)(int)uVar5 * 0x60);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)(int)uVar5 * 0x60) != 0) {
        plVar11 = (longlong *)((longlong)_Dst + 0x30);
        if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
          plVar11 = *(longlong **)((longlong)_Dst + 0x20);
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      memmove(_Dst,_Src,0x50);
      lVar7 = *param_1;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar7 + (longlong)(int)param_1[6] * 0x60) = (int)local_78;
      }
      *(undefined4 *)(lVar7 + (longlong)(int)local_78 * 0x60) = 0xffffffff;
      uVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar6 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar7 + (longlong)(int)local_78 * 0x60 + 4) = uVar6;
      *(int *)(param_1 + 6) = (int)local_78;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = local_70;
      }
      puVar8[iVar3 >> 5] = puVar8[iVar3 >> 5] & ~uVar21;
      cVar2 = '\x01';
      local_78 = (ulonglong)uVar5;
    }
  }
  puVar8 = local_70;
  if (local_68 != (longlong *)0x0) {
    *(char *)local_68 = cVar2;
  }
  if (cVar2 != '\0') goto LAB_14075dd40;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar21 = 1;
  if (3 < uVar5) {
    uVar17 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar5 < 1) || ((int)uVar21 <= (int)param_1[9])) {
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x54) = uVar4;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 10) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         (int)local_78;
    goto LAB_14075dd40;
  }
  *(uint *)(param_1 + 9) = uVar21;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar21 = *(uint *)(param_1 + 9);
  }
  plVar16 = param_1 + 7;
  if (uVar21 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_14075d8c2:
    uVar4 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar16;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar21 != uVar4);
  }
  else {
    if (uVar21 == 0) goto LAB_14075dd40;
    FUN_1446efa72(plVar11,0,uVar21,4);
    if (0 < (int)uVar21) goto LAB_14075d8c2;
  }
  iVar12 = (int)param_1[5];
  if (iVar12 == 0) {
    uVar22 = 0;
    uVar17 = 1;
    iVar3 = 0;
    iVar19 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar8;
    }
    uVar21 = *puVar10;
    if (uVar21 == 0) {
      iVar3 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar3 = iVar12 + -1;
      }
      uVar22 = 0;
      uVar17 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar17 = uVar22;
      }
      iVar19 = 0;
      do {
        if (uVar17 == uVar22) goto LAB_14075dd40;
        iVar19 = iVar19 + 0x20;
        uVar21 = puVar10[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar22 = 0;
      iVar19 = 0;
    }
    uVar17 = (ulonglong)(-uVar21 & uVar21);
    uVar15 = uVar17 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar3 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar3) {
      iVar3 = iVar12;
    }
  }
  if (iVar3 < iVar12) {
    uVar21 = 0xffffffff;
    bVar9 = DAT_14c950c29;
    local_58 = param_2;
    do {
      lVar7 = *param_1;
      uVar15 = *(ulonglong *)(lVar7 + (longlong)iVar3 * 0x60);
      if (((bVar9 & 1) != 0) && (uVar15 != 0)) {
        local_68 = plVar16;
        local_5c = uVar21;
        FUN_1456cec3c(uVar15);
        plVar16 = local_68;
        bVar9 = DAT_14c950c29;
        uVar21 = local_5c;
      }
      lVar7 = lVar7 + (longlong)iVar3 * 0x60;
      uVar4 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
      iVar12 = (int)uVar15;
      *(int *)(lVar7 + 0x54) = iVar12;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar16;
      }
      *(undefined4 *)(lVar7 + 0x50) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar16;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar3;
      uVar21 = uVar21 & ~(uint)uVar17;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = local_70;
      }
      iVar12 = (int)param_1[5];
      iVar3 = (int)uVar22;
      lVar7 = (longlong)iVar3;
      uVar4 = puVar8[lVar7] & uVar21;
      param_2 = local_58;
      if (uVar4 == 0) {
        iVar13 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar13 = iVar12 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar3) {
          iVar14 = iVar3;
        }
        if (iVar13 <= iVar3) break;
        lVar18 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar4 = puVar8[lVar7 + lVar18 + 1];
          if (uVar4 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar14 - lVar7 == lVar18) goto LAB_14075dd40;
        }
        uVar22 = (ulonglong)(iVar3 + (int)lVar18 + 1);
        uVar21 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar4 & uVar4);
      uVar15 = uVar17 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar3 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar12);
  }
LAB_14075dd40:
  *param_2 = (int)local_78;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075de48 FUN_14075de48 body=206 status=ok
// SIG undefined FUN_14075de48(void)

int FUN_14075de48(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x50 + (longlong)iVar1 * 0x60)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x60);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 14075df16 FUN_14075df16 body=1798 status=ok
// SIG undefined FUN_14075df16(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 *
FUN_14075df16(longlong *param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_f8 [40];
  uint *local_d0;
  ulonglong local_c8;
  uint local_bc;
  undefined4 *local_b8;
  longlong *local_b0;
  longlong local_a8 [6];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    uVar13 = (ulonglong)uVar7;
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar7) {
      FUN_1406a7630(param_1,uVar7);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar3 = iVar10 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar18 = iVar10 + 1;
    iVar11 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar11 = iVar10;
    }
    if (iVar11 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar18;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        local_c8 = uVar13;
        if (iVar10 + 0x20U < 0xa0) {
          iVar18 = 0x80;
          iVar3 = iVar10;
        }
        else {
          uVar7 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar4 = 4;
            if (4 < uVar7) {
              uVar4 = uVar7;
            }
          }
          else {
            uVar4 = (uVar7 * 3 >> 3) + uVar7 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar4 << 2,0);
          iVar3 = (int)(uVar13 >> 2);
          iVar18 = -0x20;
          if ((int)uVar7 <= iVar3) {
            iVar18 = iVar3 << 5;
          }
          iVar3 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar18;
        FUN_1446efbd8(plVar9,iVar3);
        iVar18 = (int)param_1[5] + 1;
        uVar13 = local_c8;
      }
      iVar3 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar3 = iVar18;
      }
      *(int *)(param_1 + 5) = iVar18;
      if (iVar18 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar9;
        }
        bVar6 = -(char)(iVar18 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar5 = (longlong)(int)uVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar10 & 0x1f;
    puVar8 = (uint *)((longlong)plVar9 + (longlong)(iVar11 >> 5) * 4);
    *puVar8 = *puVar8 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    uVar13 = (ulonglong)*(uint *)(param_1 + 6);
    lVar5 = (longlong)(int)*(uint *)(param_1 + 6);
    iVar10 = *(int *)(*param_1 + 4 + lVar5 * 0x68);
    *(int *)(param_1 + 6) = iVar10;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x68) = 0xffffffff;
    }
  }
  iVar10 = (int)uVar13;
  local_d0 = (uint *)(param_1 + 2);
  puVar8 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar8 = local_d0;
  }
  iVar3 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar3 = iVar10;
  }
  puVar8[iVar3 >> 5] = puVar8[iVar3 >> 5] | 1 << ((byte)uVar13 & 0x1f);
  plVar9 = (longlong *)(*param_1 + lVar5 * 0x68);
  local_78 = 0;
  uStack_6c = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_58 = 0;
  uStack_74 = 0x80;
  uStack_70 = 0xffffffff;
  lVar17 = *(longlong *)*param_4;
  *(longlong *)(*param_1 + lVar5 * 0x68) = lVar17;
  if ((lVar17 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(plVar9 + 1) = 0;
  FUN_14075e61e(plVar9 + 2,local_a8 + 1);
  local_58 = local_58 & 0xffffffff00000000;
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(local_a8 + 1);
  *(undefined4 *)(plVar9 + 0xc) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
LAB_14075e0b6:
    cVar2 = '\0';
  }
  else {
    local_a8[0] = *plVar9;
    if ((DAT_14c950c29 == 1) && (local_a8[0] != 0)) {
      FUN_1456cec3c();
    }
    iVar3 = FUN_14748bf88(param_1,param_3,local_a8);
    if (iVar3 == -1) goto LAB_14075e0b6;
    lVar5 = *param_1;
    lVar17 = (longlong)iVar3 * 0x68;
    *(undefined4 *)(lVar5 + 0x58 + lVar17) = 0;
    if (*(longlong *)(lVar5 + 0x50 + lVar17) != 0) {
      FUN_1400020a8();
    }
    FUN_1400dbf0e(lVar5 + lVar17 + 0x10);
    memmove((void *)(lVar5 + lVar17),plVar9,0x60);
    FUN_14748c058(param_1,uVar13 & 0xffffffff);
    cVar2 = '\x01';
  }
  if (param_5 != (char *)0x0) {
    *param_5 = cVar2;
  }
  if (cVar2 != '\0') goto LAB_14075e4a3;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar7 = 1;
  if (3 < uVar4) {
    uVar15 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((int)uVar4 < 1) || ((int)uVar7 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)plVar9 + 100) = param_3;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(plVar9 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar10;
    goto LAB_14075e4a3;
  }
  *(uint *)(param_1 + 9) = uVar7;
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar7 = *(uint *)(param_1 + 9);
  }
  local_b0 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_14075e127:
    uVar4 = 0;
    do {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = local_b0;
      }
      *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
  }
  else {
    if (uVar7 == 0) goto LAB_14075e4a3;
    FUN_1446efa72(plVar9,0,uVar7,4);
    if (0 < (int)uVar7) goto LAB_14075e127;
  }
  iVar10 = (int)param_1[5];
  if (iVar10 == 0) {
    uVar19 = 0;
    uVar15 = 1;
    iVar3 = 0;
    iVar18 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = local_d0;
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar3 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar3 = iVar10 + -1;
      }
      uVar19 = 0;
      uVar15 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar15 = uVar19;
      }
      iVar18 = 0;
      do {
        if (uVar15 == uVar19) goto LAB_14075e4a3;
        iVar18 = iVar18 + 0x20;
        uVar7 = puVar8[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar19 = 0;
      iVar18 = 0;
    }
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar15 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar3 = (iVar18 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar3) {
      iVar3 = iVar10;
    }
  }
  if (iVar3 < iVar10) {
    puVar8 = local_d0;
    bVar6 = DAT_14c950c29;
    local_c8 = uVar13;
    local_b8 = param_2;
    uVar7 = 0xffffffff;
    do {
      local_bc = uVar7;
      lVar5 = *param_1;
      uVar13 = *(ulonglong *)(lVar5 + (longlong)iVar3 * 0x68);
      if (((bVar6 & 1) != 0) && (uVar13 != 0)) {
        FUN_1456cec3c(uVar13);
        puVar8 = local_d0;
        bVar6 = DAT_14c950c29;
      }
      lVar5 = lVar5 + (longlong)iVar3 * 0x68;
      uVar7 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar13 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar13;
      *(int *)(lVar5 + 100) = iVar10;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = local_b0;
      }
      *(undefined4 *)(lVar5 + 0x60) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = local_b0;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar3;
      uVar7 = local_bc & ~(uint)uVar15;
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puVar8;
      }
      iVar10 = (int)param_1[5];
      iVar3 = (int)uVar19;
      lVar5 = (longlong)iVar3;
      uVar4 = puVar16[lVar5] & uVar7;
      uVar13 = local_c8;
      param_2 = local_b8;
      if (uVar4 == 0) {
        iVar11 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar11 = iVar10 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar3) {
          iVar12 = iVar3;
        }
        if (iVar11 <= iVar3) break;
        lVar17 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar4 = puVar16[lVar5 + lVar17 + 1];
          if (uVar4 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar12 - lVar5 == lVar17) goto LAB_14075e4a3;
        }
        uVar19 = (ulonglong)(iVar3 + (int)lVar17 + 1);
        uVar7 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar15 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar3 = (iVar18 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar10);
  }
LAB_14075e4a3:
  *param_2 = (int)uVar13;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075e61e FUN_14075e61e body=125 status=ok
// SIG undefined FUN_14075e61e(void)

undefined8 * FUN_14075e61e(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14075e69c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14075e69c FUN_14075e69c body=150 status=ok
// SIG undefined FUN_14075e69c(void)

longlong * FUN_14075e69c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14075e732 FUN_14075e732 body=2747 status=ok
// SIG undefined FUN_14075e732(void)

undefined8 *
FUN_14075e732(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_149f6d400;
  local_90 = plVar12 + 2;
  *(undefined1 *)(plVar12 + 2) = 0;
  local_88 = plVar12;
  if (plVar12 == (longlong *)0x0) {
    FUN_140216c60(param_1,2,param_2,&local_90);
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    FUN_140216c60(param_1,2,param_2,&local_90);
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  *param_1 = &PTR_LAB_149f6c8d0;
  param_1[8] = 0;
  iVar4 = *(int *)(param_4 + 1);
  pvVar5 = (void *)*param_4;
  *(int *)(param_1 + 9) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar4,0);
    memcpy((void *)param_1[8],pvVar5,(longlong)iVar4 * 2);
  }
  param_1[10] = param_4[2];
  param_1[0xb] = param_4[3];
  lVar21 = param_4[4];
  param_1[0xc] = lVar21;
  if (lVar21 != 0) {
    LOCK();
    *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
    UNLOCK();
  }
  param_1[0xd] = 0;
  iVar4 = *(int *)(param_4 + 6);
  uVar6 = param_4[5];
  *(int *)(param_1 + 0xe) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_14075f3c8(param_1 + 0xd,iVar4);
    FUN_14075f1ee(param_1[0xd],uVar6,iVar4);
  }
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_4 + 0xb);
  uVar6 = param_4[7];
  uVar10 = param_4[8];
  uVar11 = param_4[10];
  param_1[0x11] = param_4[9];
  param_1[0x12] = uVar11;
  param_1[0xf] = uVar6;
  param_1[0x10] = uVar10;
  puVar13 = param_4 + 0xc;
  puVar22 = param_1 + 0x14;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar22 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar22 = puVar22 + 1;
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3ff00000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x3ff0000000000000;
  param_1[0x29] = 0x3ff0000000000000;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  iVar4 = *(int *)(param_4 + 0x25);
  uVar6 = param_4[0x24];
  *(int *)(param_1 + 0x2d) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  }
  else {
    FUN_146eecc00(param_1 + 0x2c,iVar4,0);
    FUN_146eecc76(param_1[0x2c],uVar6,iVar4);
  }
  param_1[0x2e] = 0;
  iVar4 = *(int *)(param_4 + 0x27);
  pvVar5 = (void *)param_4[0x26];
  *(int *)(param_1 + 0x2f) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x2e,iVar4,0);
    memcpy((void *)param_1[0x2e],pvVar5,(longlong)iVar4 << 2);
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_4 + 0x144);
  *(undefined2 *)(param_1 + 0x31) = *(undefined2 *)(param_4 + 0x29);
  *(undefined2 *)((longlong)param_1 + 0x18a) = *(undefined2 *)((longlong)param_4 + 0x14a);
  *(undefined1 *)((longlong)param_1 + 0x18c) = *(undefined1 *)((longlong)param_4 + 0x14c);
  *(undefined1 *)((longlong)param_1 + 0x18d) = *(undefined1 *)((longlong)param_4 + 0x14d);
  *(undefined1 *)((longlong)param_1 + 0x18e) = *(undefined1 *)((longlong)param_4 + 0x14e);
  *(undefined1 *)((longlong)param_1 + 399) = *(undefined1 *)((longlong)param_4 + 0x14f);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_4 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_4 + 0x154);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_4 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)((longlong)param_4 + 0x15c);
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_4 + 0x2d);
  param_1[0x34] = param_4[0x2c];
  *(undefined8 *)((longlong)param_1 + 0x1ac) = *(undefined8 *)((longlong)param_4 + 0x16c);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_4 + 0x174);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_4 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_4 + 0x17c);
  bVar14 = *(byte *)(param_4 + 0x30) & 1;
  bVar3 = *(byte *)(param_1 + 0x38);
  *(byte *)(param_1 + 0x38) = bVar3 & 0xfe | bVar14;
  bVar15 = *(byte *)(param_4 + 0x30) & 2;
  *(byte *)(param_1 + 0x38) = bVar3 & 0xfc | bVar14 | bVar15;
  bVar16 = *(byte *)(param_4 + 0x30) & 4;
  *(byte *)(param_1 + 0x38) = bVar3 & 0xf8 | bVar14 | bVar15 | bVar16;
  bVar17 = *(byte *)(param_4 + 0x30) & 8;
  *(byte *)(param_1 + 0x38) = bVar3 & 0xf0 | bVar14 | bVar15 | bVar16 | bVar17;
  bVar18 = *(byte *)(param_4 + 0x30) & 0x10;
  *(byte *)(param_1 + 0x38) = bVar3 & 0xe0 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18;
  bVar19 = *(byte *)(param_4 + 0x30) & 0x20;
  *(byte *)(param_1 + 0x38) = bVar3 & 0xc0 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19;
  bVar20 = *(byte *)(param_4 + 0x30);
  *(byte *)(param_1 + 0x38) =
       bVar3 & 0x80 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20 & 0x40;
  *(byte *)(param_1 + 0x38) =
       bVar14 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20 & 0x40 |
       *(byte *)(param_4 + 0x30) & 0x80;
  bVar20 = *(byte *)((longlong)param_4 + 0x181) & 1;
  bVar3 = *(byte *)((longlong)param_1 + 0x1c1);
  *(byte *)((longlong)param_1 + 0x1c1) = bVar3 & 0xfe | bVar20;
  bVar14 = *(byte *)((longlong)param_4 + 0x181) & 2;
  *(byte *)((longlong)param_1 + 0x1c1) = bVar3 & 0xfc | bVar20 | bVar14;
  bVar15 = *(byte *)((longlong)param_4 + 0x181) & 4;
  *(byte *)((longlong)param_1 + 0x1c1) = bVar3 & 0xf8 | bVar20 | bVar14 | bVar15;
  bVar16 = *(byte *)((longlong)param_4 + 0x181) & 8;
  *(byte *)((longlong)param_1 + 0x1c1) = bVar3 & 0xf0 | bVar20 | bVar14 | bVar15 | bVar16;
  bVar17 = *(byte *)((longlong)param_4 + 0x181) & 0x10;
  *(byte *)((longlong)param_1 + 0x1c1) = bVar3 & 0xe0 | bVar20 | bVar14 | bVar15 | bVar16 | bVar17;
  bVar18 = *(byte *)((longlong)param_4 + 0x181) & 0x20;
  *(byte *)((longlong)param_1 + 0x1c1) =
       bVar3 & 0xc0 | bVar20 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18;
  bVar19 = *(byte *)((longlong)param_4 + 0x181) & 0x40;
  *(byte *)((longlong)param_1 + 0x1c1) =
       bVar3 & 0x80 | bVar20 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19;
  *(byte *)((longlong)param_1 + 0x1c1) =
       bVar20 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19 |
       *(byte *)((longlong)param_4 + 0x181) & 0x80;
  bVar20 = *(byte *)((longlong)param_4 + 0x182) & 1;
  bVar3 = *(byte *)((longlong)param_1 + 0x1c2);
  *(byte *)((longlong)param_1 + 0x1c2) = bVar3 & 0xfe | bVar20;
  bVar14 = *(byte *)((longlong)param_4 + 0x182) & 2;
  *(byte *)((longlong)param_1 + 0x1c2) = bVar3 & 0xfc | bVar20 | bVar14;
  bVar15 = *(byte *)((longlong)param_4 + 0x182) & 4;
  *(byte *)((longlong)param_1 + 0x1c2) = bVar3 & 0xf8 | bVar20 | bVar14 | bVar15;
  bVar16 = *(byte *)((longlong)param_4 + 0x182) & 8;
  *(byte *)((longlong)param_1 + 0x1c2) = bVar3 & 0xf0 | bVar20 | bVar14 | bVar15 | bVar16;
  bVar17 = *(byte *)((longlong)param_4 + 0x182) & 0x10;
  *(byte *)((longlong)param_1 + 0x1c2) = bVar3 & 0xe0 | bVar20 | bVar14 | bVar15 | bVar16 | bVar17;
  bVar18 = *(byte *)((longlong)param_4 + 0x182) & 0x20;
  *(byte *)((longlong)param_1 + 0x1c2) =
       bVar3 & 0xc0 | bVar20 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18;
  bVar19 = *(byte *)((longlong)param_4 + 0x182) & 0x40;
  *(byte *)((longlong)param_1 + 0x1c2) =
       bVar3 & 0x80 | bVar20 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19;
  *(byte *)((longlong)param_1 + 0x1c2) =
       bVar20 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 | bVar19 |
       *(byte *)((longlong)param_4 + 0x182) & 0x80;
  *(byte *)((longlong)param_1 + 0x1c3) =
       *(byte *)((longlong)param_1 + 0x1c3) & 0xfe | *(byte *)((longlong)param_4 + 0x183) & 1;
  *(undefined1 *)((longlong)param_1 + 0x1c4) = *(undefined1 *)((longlong)param_4 + 0x184);
  *(undefined1 *)((longlong)param_1 + 0x1c5) = *(undefined1 *)((longlong)param_4 + 0x185);
  *(undefined1 *)((longlong)param_1 + 0x1c6) = *(undefined1 *)((longlong)param_4 + 0x186);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_4 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_4 + 0x18c);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_4 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)((longlong)param_4 + 0x194);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_4 + 0x33);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)((longlong)param_4 + 0x19c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_4 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_4 + 0x1a4);
  uVar6 = param_4[0x36];
  param_1[0x3d] = param_4[0x35];
  param_1[0x3e] = uVar6;
  uVar6 = param_4[0x38];
  param_1[0x3f] = param_4[0x37];
  param_1[0x40] = uVar6;
  param_1[0x41] = param_4[0x39];
  param_1[0x42] = param_4[0x3a];
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_4 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)((longlong)param_4 + 0x1dc);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_4 + 0x3c);
  *(byte *)((longlong)param_1 + 0x221) =
       *(byte *)((longlong)param_1 + 0x221) & 0xfc | *(byte *)((longlong)param_4 + 0x1e1) & 1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  puVar13 = &DAT_14c846480;
  puVar22 = param_1 + 0x48;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar22 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar22 = puVar22 + 1;
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3ff00000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0x3ff0000000000000;
  param_1[0x5d] = 0x3ff0000000000000;
  param_1[0x5e] = 0x3ff0000000000000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x30c) = DAT_14c75f3b8;
  param_1[0x62] = 0;
  *(undefined2 *)(param_1 + 99) = 0x2000;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x80;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  uVar6 = param_5[1];
  param_1[0x9e] = *param_5;
  param_1[0x9f] = uVar6;
  uVar7 = param_6[1];
  uVar8 = param_6[2];
  uVar9 = param_6[3];
  *(undefined4 *)(param_1 + 0xa0) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x504) = uVar7;
  *(undefined4 *)(param_1 + 0xa1) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x50c) = uVar9;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  param_1[0xaa] = 0;
  param_1[0xac] = 0;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  local_a0 = param_1[0xb];
  local_98 = param_1[0xc];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  FUN_1406ccb14(param_1 + 0xba,&local_a0);
  param_1[0x105] = param_3;
  param_1[0x106] = &PTR_FUN_149f6d420;
  puVar13 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = &PTR_FUN_149f6c8c8;
  puVar13[5] = 0;
  puVar13[6] = 0x8000000000;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  *(undefined1 *)(puVar13 + 0xd) = 0;
  param_1[0x107] = puVar13;
  *(undefined1 *)(param_1 + 0x108) = 0;
  puVar13 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = &PTR_FUN_149f6c8c8;
  puVar13[5] = 0;
  puVar13[6] = 0x8000000000;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  *(undefined1 *)(puVar13 + 0xd) = 0;
  param_1[0x109] = puVar13;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  puVar13 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = &PTR_FUN_149f6c8c8;
  puVar13[5] = 0;
  puVar13[6] = 0x8000000000;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  *(undefined1 *)(puVar13 + 0xd) = 0;
  param_1[0x10b] = puVar13;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  param_1[0x10d] = param_1 + 0x107;
  param_1[0x10e] = param_1 + 0x109;
  param_1[0x10f] = param_1 + 0x10b;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  puVar13 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar13 = &PTR_FUN_149f6d940;
  puVar13[1] = 0xffffffff;
  param_1[0x110] = puVar13;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075f1ee FUN_14075f1ee body=139 status=ok
// SIG undefined FUN_14075f1ee(void)

void FUN_14075f1ee(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = 0;
    iVar1 = *(int *)(param_2 + 0x10 + lVar2);
    _Src = *(void **)(param_2 + 8 + lVar2);
    *(int *)(param_1 + 0x10 + lVar2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
    }
    else {
      FUN_14075f27a(param_1 + 8 + lVar2,iVar1,0);
      memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 0x24);
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14075f27a FUN_14075f27a body=334 status=ok
// SIG undefined FUN_14075f27a(void)

void FUN_14075f27a(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x24;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14075f2ec;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14075f2ec:
    iVar5 = (int)(uVar4 / 0x24);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x24,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14075f3c8 FUN_14075f3c8 body=323 status=ok
// SIG undefined FUN_14075f3c8(void)

undefined8 FUN_14075f3c8(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14075f42e;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14075f42e:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x18)) {
    uVar8 = uVar5 / 0x18 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 14075f50c FUN_14075f50c body=28 status=ok
// SIG undefined FUN_14075f50c(void)

undefined1
FUN_14075f50c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5)

{
  *param_4 = 1;
  FUN_14075f528(param_2,param_5);
  return 1;
}



// FUNCTION 14075f528 FUN_14075f528 body=506 status=ok
// SIG undefined FUN_14075f528(void)

longlong * FUN_14075f528(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  byte local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = *(byte *)(param_2 + 0x38);
  puVar2 = (ulonglong *)param_1[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_79,1);
  }
  else {
    local_79 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_14075f6bd;
    FUN_14075f724(param_2,local_79,1);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    if (local_79 == 0) goto LAB_14075f6bd;
    lVar6 = 0;
    uVar7 = 0;
    do {
      FUN_14075f7c0(param_1,&local_78);
      lVar3 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar3 = param_2;
      }
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,&local_88,&local_78,1);
      if (*(longlong *)(lVar3 + lVar6) != local_88) {
        *(undefined8 *)(lVar3 + 0x10 + lVar6) = 0;
      }
      *(longlong *)(lVar3 + lVar6) = local_88;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < local_79);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    if (local_79 == 0) goto LAB_14075f6bd;
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar3 = param_2;
      }
      lVar3 = FUN_14033465a(lVar3 + lVar6);
      puVar5 = &DAT_14c9485f0;
      if (lVar3 != 0) {
        puVar5 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
          puVar5 = *(undefined4 **)(lVar3 + 8);
        }
      }
      FUN_1447715ec(&local_78,puVar5);
      FUN_14075f7c0(param_1,&local_78);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < local_79);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_14075f6bd:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14075f724 FUN_14075f724 body=155 status=ok
// SIG undefined FUN_14075f724(void)

void FUN_14075f724(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    uVar4 = param_2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < uVar4) {
      FUN_1409d5af8(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    puVar3 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0x18);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0x3003;
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x38) = param_2, param_3 == '\x01')) {
      FUN_14075f9e6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14075f7c0 FUN_14075f7c0 body=549 status=ok
// SIG undefined FUN_14075f7c0(void)

longlong * FUN_14075f7c0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    piVar1 = (int *)((longlong)param_2 + 4);
    piVar2 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
      }
      else {
        thunk_FUN_14572512c(param_1,piVar1);
      }
    }
    else {
      *piVar1 = *piVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    if (*piVar1 != 0) {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
        }
        else {
          thunk_FUN_14572512c(param_1,param_2);
        }
      }
      else {
        *(undefined4 *)param_2 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
    }
  }
  else {
    if ((0 < *(int *)((longlong)param_2 + 0x24)) || (1 < *(int *)((longlong)param_2 + 4))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      if (*(int *)((longlong)param_2 + 0x24) != 0) {
        FUN_1446dda88(param_2 + 3,0);
      }
    }
    piVar1 = (int *)((longlong)param_2 + 4);
    piVar2 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,piVar1,4);
      }
      else {
        thunk_FUN_14572512c(param_1,piVar1);
      }
    }
    else {
      *piVar1 = *piVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    if (*piVar1 == 0) {
      *(undefined4 *)param_2 = 0;
    }
    else {
      puVar3 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
        }
        else {
          thunk_FUN_14572512c(param_1,param_2);
        }
      }
      else {
        *(undefined4 *)param_2 = *puVar3;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      if ((0 < *(int *)((longlong)param_2 + 0x24)) || (1 < *(int *)((longlong)param_2 + 4))) {
        FUN_145741a94(param_2 + 3,*(int *)((longlong)param_2 + 4),1);
      }
    }
  }
  lVar4 = (longlong)*(int *)((longlong)param_2 + 4);
  puVar5 = param_2 + 1;
  if (1 < lVar4) {
    puVar5 = (undefined8 *)param_2[3];
  }
  if (0 < *(int *)((longlong)param_2 + 0x24)) {
    puVar5 = (undefined8 *)param_2[3];
  }
  if (lVar4 != 0) {
    lVar4 = lVar4 * 0xc;
    do {
      FUN_14011750a(puVar5,param_1);
      puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 14075f9e6 FUN_14075f9e6 body=162 status=ok
// SIG undefined FUN_14075f9e6(void)

void FUN_14075f9e6(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((ulonglong)uVar4 < 3) {
    uVar4 = 2;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if ((ulonglong)((longlong)iVar3 * 0x18) < 0x4000) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 * 0x18,0);
      uVar4 = (uint)(uVar2 / 0x18);
      uVar1 = *(uint *)(param_1 + 0x3c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x3c) = uVar4;
  FUN_140070b9e(param_1,*(undefined4 *)(param_1 + 0x38));
  return;
}



// FUNCTION 14075fa88 FUN_14075fa88 body=58 status=ok
// SIG undefined FUN_14075fa88(void)

bool FUN_14075fa88(undefined8 param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14075fac2();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_140280ec4(lVar2);
    bVar1 = param_2 <= *(float *)(lVar2 + 200);
  }
  return bVar1;
}



// FUNCTION 14075fac2 FUN_14075fac2 body=703 status=ok
// SIG undefined FUN_14075fac2(void)

uint * FUN_14075fac2(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_14075fd82();
  if (cVar2 == '\0') {
    puVar3 = (uint *)(param_1 + 0x48);
    plVar4 = *(longlong **)(param_1 + 0x50);
    if ((((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0x4c) != 0)) &&
        (uVar1 = *puVar3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x4c))) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
        if (*(code **)(*plVar4 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar4 = plVar4 + 0xd9;
        }
        else {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
        }
        cVar2 = FUN_14486eb0e(plVar4,puVar3);
        if (cVar2 != '\0') goto LAB_14075fba9;
      }
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      puVar8 = (uint *)(param_1 + 0x40);
      uVar1 = *puVar8;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar9 != 0) &&
           ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x44) &&
            ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
          lVar9 = FUN_14479d2ce(puVar8);
          if (*(longlong *)(lVar9 + 0x4210) != 0) {
            local_60 = *(undefined8 *)(*(longlong *)(lVar9 + 0x4210) + 0x580);
            FUN_1446dcdd4(&local_58);
            if (DAT_14cb7d760 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = FUN_144837462(DAT_14cb7d760,&local_58);
            }
            if (CONCAT44(uStack_3c,uStack_40) != 0) {
              FUN_1400020a8();
            }
            if (lVar9 != 0) {
              lVar5 = FUN_14479d2ce(puVar8);
              plVar4 = *(longlong **)(lVar5 + 0x1f0);
              if (plVar4 != (longlong *)0x0) {
                uVar6 = FUN_1403c7982();
                plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar6);
                if (plVar4 != (longlong *)0x0) {
                  uVar6 = FUN_1403c7982();
                  plVar7 = (longlong *)FUN_144718840(plVar4,uVar6);
                  if ((plVar4 != plVar7) && (plVar7 != (longlong *)0x0)) {
                    uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7);
                    local_58 = 0;
                    uStack_50 = 0;
                    uStack_3c = CONCAT31(uStack_3c._1_3_,0xff);
                    uStack_40 = 0;
                    local_48 = 0;
                    FUN_14493679e(uVar6,&local_58,lVar9,0);
                    *(undefined8 *)(param_1 + 0x58) = local_48;
                    *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_3c,uStack_40);
                    *puVar3 = (uint)local_58;
                    *(undefined4 *)(param_1 + 0x4c) = local_58._4_4_;
                    *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_50;
                    *(undefined4 *)(param_1 + 0x54) = uStack_50._4_4_;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14075fba9:
  plVar4 = *(longlong **)(param_1 + 0x50);
  if ((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0x4c) != 0)) {
    puVar8 = (uint *)(param_1 + 0x48);
    uVar1 = *puVar8;
    puVar3 = (uint *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14075fc2f;
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x4c))) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar4 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar4 = plVar4 + 0xd9;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
      }
      cVar2 = FUN_14486eb0e(plVar4,puVar8);
      puVar3 = (uint *)0x0;
      if (cVar2 != '\0') {
        puVar3 = puVar8;
      }
      goto LAB_14075fc2f;
    }
  }
  puVar3 = (uint *)0x0;
LAB_14075fc2f:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14075fd82 FUN_14075fd82 body=134 status=ok
// SIG undefined FUN_14075fd82(void)

undefined8 FUN_14075fd82(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x44))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0xa8) != 0) {
        if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar2;
        }
        else {
          lVar3 = 0;
        }
        return CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0xa8) >> 8),
                        *(char *)(*(longlong *)(lVar3 + 0xa8) + 0x178) == '\x03');
      }
    }
  }
  return 0;
}



// FUNCTION 14075fe08 FUN_14075fe08 body=658 status=ok
// SIG undefined FUN_14075fe08(void)

float FUN_14075fe08(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_2 < 0x40000) {
    if (param_2 == 0x10000) {
      fVar9 = *(float *)(param_1 + 0x4614);
      goto LAB_14075fe52;
    }
    if (param_2 == 0x20000) {
      fVar9 = *(float *)(param_1 + 0x4620);
      goto LAB_14075fe52;
    }
  }
  else {
    if (param_2 == 0x40000) {
      fVar9 = *(float *)(param_1 + 0x462c);
      goto LAB_14075fe52;
    }
    if (param_2 == 0x80000) {
      fVar9 = *(float *)(param_1 + 0x4608);
      goto LAB_14075fe52;
    }
    if (param_2 == 0x200000) {
      fVar9 = *(float *)(param_1 + 0x4638);
      goto LAB_14075fe52;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x4210);
  fVar9 = 0.0;
  if ((lVar1 != 0) && (fVar9 = 0.0, *(int *)(lVar1 + 0x5a0) != *(int *)(lVar1 + 0x5cc))) {
    lVar5 = lVar1 + 0x5d0;
    if (*(longlong *)(lVar1 + 0x5d8) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x5d8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar1 + 0x5e0) - 1U & param_2) * 4);
    fVar9 = 0.0;
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x598);
      iVar6 = iVar4;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar6 * 0x60) == param_2) goto LAB_14075ffee;
        iVar6 = *(int *)((longlong)iVar6 * 0x60 + lVar1 + 0x58);
        fVar9 = 0.0;
      } while (iVar6 != -1);
    }
  }
LAB_14075fe52:
  if (*(int *)(param_1 + 0x4644) < 1) {
    lVar1 = *(longlong *)(param_1 + 0x4210);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x5f0) != *(int *)(lVar1 + 0x61c))) {
      lVar5 = lVar1 + 0x620;
      if (*(longlong *)(lVar1 + 0x628) != 0) {
        lVar5 = *(longlong *)(lVar1 + 0x628);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar1 + 0x630) - 1U & param_2) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar1 + 0x5e8) + (longlong)iVar4 * 0xc) == param_2)
          goto LAB_14075ff2f;
          iVar4 = *(int *)(*(longlong *)(lVar1 + 0x5e8) + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
      }
    }
  }
  else {
LAB_14075ff2f:
    cVar3 = FUN_140c07a22(param_1 + 0x42b8);
    if ((cVar3 == '\0') && (fVar8 = (float)FUN_14076009c(param_1 + 0x42b8), fVar8 <= fVar9)) {
      fVar9 = fVar8;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar9;
  while (iVar4 = *(int *)(lVar5 + 0x58), iVar4 != -1) {
LAB_14075ffee:
    lVar5 = lVar1 + (longlong)iVar4 * 0x60;
    if (*(uint *)(lVar1 + (longlong)iVar4 * 0x60) == param_2) goto LAB_140760007;
  }
  lVar5 = 0;
LAB_140760007:
  local_98[0] = 0;
  local_70 = 0;
  FUN_1456bb102(local_98,*(undefined8 *)(param_1 + 0x4208));
  FUN_1448729ea(lVar5 + 8,local_68,local_98);
  fVar9 = (float)FUN_144a7ecd0(local_68);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar7 = local_68;
    if (0x18 < local_50) {
      ppppuVar7 = (undefined8 ****)local_68[0];
    }
    (*pcVar2)(ppppuVar7);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_144a5ac3a(local_98);
  goto LAB_14075fe52;
}



// FUNCTION 14076009c FUN_14076009c body=40 status=ok
// SIG undefined FUN_14076009c(void)

undefined4 FUN_14076009c(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14075fac2();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_140280ec4(lVar1);
    uVar2 = *(undefined4 *)(lVar1 + 200);
  }
  return uVar2;
}



// FUNCTION 1407600c4 FUN_1407600c4 body=40 status=ok
// SIG undefined FUN_1407600c4(void)

undefined8 FUN_1407600c4(undefined8 param_1,int param_2)

{
  FUN_1407600ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407600ec FUN_1407600ec body=215 status=ok
// SIG undefined FUN_1407600ec(void)

void FUN_1407600ec(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ac5cae0;
  param_1[5] = &PTR_FUN_14ac5d4e0;
  param_1[6] = &PTR_LAB_14ac5d520;
  param_1[0x55] = &PTR_FUN_14ac5d570;
  param_1[0x56] = &PTR_FUN_14ac5d5f0;
  param_1[0x57] = &PTR_FUN_14ac5d600;
  param_1[0xc4] = &PTR_FUN_14ac5d630;
  if (param_1[0x135] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[0x134];
  if (lVar1 != 0) {
    FUN_140315562(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_14494dff0(param_1 + 0x10f);
  FUN_14494dff0(param_1 + 0xeb);
  FUN_14494dff0(param_1 + 199);
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 1407601c4 FUN_1407601c4 body=38 status=ok
// SIG undefined FUN_1407601c4(void)

undefined8 FUN_1407601c4(undefined8 param_1,int param_2)

{
  FUN_1407601ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407601ea FUN_1407601ea body=193 status=ok
// SIG undefined FUN_1407601ea(void)

void FUN_1407601ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a920300;
  plVar3 = (longlong *)param_1[0x156];
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
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (param_1[0x153] != 0) {
    FUN_1400020a8();
  }
  FUN_1407602e2(param_1 + 0x14b);
  FUN_1407602ab(param_1[0x141],*(undefined4 *)(param_1 + 0x142));
  if (param_1[0x141] != 0) {
    FUN_1400020a8();
  }
  FUN_14076031a(param_1 + 0x11b,0);
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  FUN_140208272(param_1);
  return;
}



// FUNCTION 1407602ab FUN_1407602ab body=55 status=ok
// SIG undefined FUN_1407602ab(void)

void FUN_1407602ab(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14476820c(param_1 + 0xb0);
    FUN_140137a98(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 1407602e2 FUN_1407602e2 body=55 status=ok
// SIG undefined FUN_1407602e2(void)

void FUN_1407602e2(longlong *param_1)

{
  FUN_14076038c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14076031a FUN_14076031a body=114 status=ok
// SIG undefined FUN_14076031a(void)

void FUN_14076031a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1447ab16c(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14076038c FUN_14076038c body=669 status=ok
// SIG undefined FUN_14076038c(void)

void FUN_14076038c(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar18 = 1;
    iVar8 = 0;
    iVar16 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar14 = *puVar12;
    if (uVar14 == 0) {
      iVar8 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar8 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar16 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_140760543;
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar12[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar16 = 0;
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar8 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar8) {
      iVar8 = iVar4;
    }
  }
  if (iVar8 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(*param_1 + 8 + (longlong)iVar8 * 0x18);
      if (lVar15 != 0) {
        LOCK();
        puVar12 = (uint *)(lVar15 + 8);
        uVar9 = *puVar12;
        *puVar12 = *puVar12 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          puVar12 = (uint *)(lVar15 + 8);
          LOCK();
          uVar9 = *puVar12;
          *puVar12 = *puVar12 | 0x40000000;
          UNLOCK();
          if ((uVar9 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar15 + 0xd);
            plVar5 = (longlong *)FUN_14001cc68(0x10,8);
            plVar5[1] = lVar15;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar5 = (longlong)plVar7;
                LOCK();
                bVar19 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar5;
                if (bVar19) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar19);
            }
            else {
              do {
                *plVar5 = (longlong)plVar6;
                LOCK();
                bVar19 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar5;
                if (bVar19) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar19);
            }
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar18;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar8 = (int)uVar17;
      lVar15 = (longlong)iVar8;
      uVar9 = puVar12[lVar15] & uVar14;
      if (uVar9 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar13 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar9 = puVar12[lVar15 + lVar13 + 1];
          if (uVar9 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar11 - lVar15 == lVar13) goto LAB_140760543;
        }
        uVar17 = (ulonglong)(iVar8 + (int)lVar13 + 1);
        uVar14 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar9 & uVar9);
      uVar2 = uVar18 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar8 = (iVar16 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_140760543:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar9 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar9 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar9;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14076062a FUN_14076062a body=136 status=ok
// SIG undefined FUN_14076062a(void)

void FUN_14076062a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407607ae();
  cVar1 = FUN_1407606b4(param_1 + 0x7ec,param_2);
  if (cVar1 != '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x7f4);
    local_30 = &DAT_3f8000003f800000;
    local_28 = 0x3f800000;
    FUN_1461b73f6(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407606b4 FUN_1407606b4 body=249 status=ok
// SIG undefined FUN_1407606b4(void)

void FUN_1407606b4(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    param_2 = param_2 + param_1[5];
    param_1[5] = param_2;
    fVar1 = param_1[3];
    if ((fVar1 <= param_2) || (fVar1 <= 0.0)) {
      param_1[2] = param_1[1];
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      param_2 = param_2 / fVar1;
      if (param_1[4] == 1.4013e-45) {
        fVar2 = param_2 * param_2;
        fVar1 = param_2 * fVar2;
        param_2 = (fVar2 * 3.0 - (fVar1 + fVar1)) +
                  (fVar1 - fVar2) * 0.0 +
                  (((fVar1 + fVar1) - fVar2 * 3.0) + 1.0) * 0.0 +
                  ((fVar1 - (fVar2 + fVar2)) + param_2) * 0.0;
      }
      param_1[2] = (1.0 - param_2) * *param_1 + param_2 * param_1[1];
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
    if (*(char *)((longlong)param_1 + 0x19) != '\x01') {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}



// FUNCTION 1407607ae FUN_1407607ae body=579 status=ok
// SIG undefined FUN_1407607ae(void)

void FUN_1407607ae(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_30 = (code *)CONCAT44(local_30._4_4_,param_2);
    uVar5 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_30);
    if ((DAT_14c761388 != 0) &&
       ((lVar3 = param_1[0x16], lVar3 != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
      uVar5 = FUN_14119d0a4(lVar3);
      FUN_140e65914(uVar5,param_1,*(undefined4 *)(lVar3 + 0x6f4));
    }
  }
  (**(code **)(*param_1 + 0xa88))(param_1);
  if (param_1[0xed] == 0) {
    if ((param_1[0xee] == 0) && ((char)param_1[0xf2] != '\0')) goto LAB_14076083a;
  }
  else if (((char)param_1[0xe7] != '\x01') &&
          ((cVar1 = FUN_1407609f2(param_1), cVar1 == '\0' &&
           ((**(code **)(*param_1 + 0x3b0))(param_1,0), *(char *)((longlong)param_1 + 0x791) == '\0'
           )))) {
    local_30 = FUN_1477608f4;
    local_28 = 0;
    FUN_145741ba0(param_1[0xed] + 0x1c8,local_20,param_1);
    *(undefined1 *)((longlong)param_1 + 0x791) = 1;
  }
  if (((char)param_1[0xe7] == '\0') && (*(char *)((longlong)param_1 + 0x669) == '\0')) {
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
  }
  else if (((char)param_1[0xca] == '\0') &&
          (cVar1 = (**(code **)(*param_1 + 0xad0))(param_1), cVar1 != '\0')) {
    dVar4 = (double)param_1[0xce];
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      if (*(char *)((longlong)param_1 + 0x651) == '\0') {
        pdVar2 = (double *)&DAT_14c866ff8;
      }
      else {
        lVar3 = param_1[0x16];
        if (lVar3 == 0) {
          lVar3 = FUN_1448abda6(param_1);
          dVar4 = (double)param_1[0xce];
        }
        pdVar2 = (double *)(lVar3 + 0x6d0);
      }
      uVar5 = CONCAT44((int)((ulonglong)(*pdVar2 - dVar4) >> 0x20),(float)(*pdVar2 - dVar4));
    }
    else {
      uVar5 = 0;
    }
    (**(code **)(*param_1 + 0xad8))(param_1,uVar5);
    if ((param_1[0xed] == 0) && (param_1[0xee] == 0)) {
      *(undefined1 *)(param_1 + 0xf2) = 1;
    }
  }
LAB_14076083a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407609f2 FUN_1407609f2 body=102 status=ok
// SIG undefined FUN_1407609f2(void)

undefined8 FUN_1407609f2(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (((char)param_1[0xca] != '\0') ||
     (((cVar2 = (**(code **)(*param_1 + 0x4e8))(param_1), cVar2 != '\0' && (param_1[0xe8] != 0)) &&
      ((*(byte *)(param_1[0xe8] + 0x39) & 0x19) != 0)))) {
    if (param_1[0xed] != 0) {
      uVar3 = FUN_140760b04();
      return uVar3;
    }
    lVar1 = param_1[0xee];
    if (lVar1 != 0) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),(*(byte *)(lVar1 + 0x39) & 0x19) != 0);
    }
  }
  return 0;
}



// FUNCTION 140760a58 FUN_140760a58 body=172 status=ok
// SIG undefined FUN_140760a58(void)

undefined8 FUN_140760a58(longlong *param_1)

{
  char cVar1;
  double *pdVar2;
  undefined7 uVar4;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x4e8))();
  if ((cVar1 != '\0') &&
     (((*(char *)((longlong)param_1 + 0x6ce) != '\0' ||
       (cVar1 = FUN_140760b84(param_1), cVar1 != '\0')) ||
      (((double)param_1[0xce] == 0.0 && (!NAN((double)param_1[0xce]))))))) {
    if (*(char *)((longlong)param_1 + 0x651) == '\0') {
      pdVar2 = (double *)&DAT_14c866ff8;
    }
    else {
      lVar3 = param_1[0x16];
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
      }
      pdVar2 = (double *)(lVar3 + 0x6d0);
    }
    if ((double)*(float *)((longlong)param_1 + 0x66c) <= *pdVar2 - (double)param_1[0xce]) {
      uVar4 = (undefined7)((ulonglong)pdVar2 >> 8);
      if ((char)param_1[0xcd] == '\x01') {
        return CONCAT71(uVar4,*(undefined1 *)((longlong)param_1 + 0x669));
      }
      return CONCAT71(uVar4,1);
    }
  }
  return 0;
}



// FUNCTION 140760b04 FUN_140760b04 body=126 status=ok
// SIG undefined FUN_140760b04(void)

ulonglong FUN_140760b04(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140760c2c(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),(*(byte *)(local_28 + 0x39) & 0x19) != 0);
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



// FUNCTION 140760b84 FUN_140760b84 body=168 status=ok
// SIG undefined FUN_140760b84(void)

bool FUN_140760b84(longlong param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_1), lVar2 == 0)) {
    bVar1 = false;
  }
  else {
    fVar4 = *(float *)(lVar2 + 0x6f4) + 0.0001;
    if (param_2 <= fVar4) {
      param_2 = fVar4;
    }
    if ((*(int *)(param_1 + 0x3d4) < 0) &&
       ((lVar3 = *(longlong *)(param_1 + 0xb0), lVar3 != 0 ||
        (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
      fVar4 = (float)*(double *)(lVar3 + 0x6d0);
    }
    else {
      fVar4 = *(float *)(param_1 + 0x3c4);
    }
    bVar1 = *(double *)(lVar2 + 0x6d0) - (double)fVar4 <= (double)param_2;
  }
  return bVar1;
}



// FUNCTION 140760c2c FUN_140760c2c body=192 status=ok
// SIG undefined FUN_140760c2c(void)

undefined8 * FUN_140760c2c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x108) == 0) ||
      (plVar4 = *(longlong **)(param_1 + 0x110), plVar4 == (longlong *)0x0)) || ((int)plVar4[1] < 1)
     ) {
    *param_2 = 0;
    lVar5 = *(longlong *)(param_1 + 0x100);
    param_2[1] = lVar5;
    if (lVar5 != 0) {
      iVar6 = *(int *)(lVar5 + 8);
      do {
        if (iVar6 == 0) {
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 8);
        bVar7 = iVar6 == iVar3;
        if (bVar7) {
          *(int *)(lVar5 + 8) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar7);
      if (param_2[1] != 0) {
        *param_2 = *(undefined8 *)(param_1 + 0xf8);
      }
    }
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar7 = iVar6 == iVar3;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar7);
    *param_2 = *(undefined8 *)(param_1 + 0x108);
    param_2[1] = plVar4;
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
  return param_2;
}



// FUNCTION 140760cec FUN_140760cec body=2502 status=ok
// SIG undefined FUN_140760cec(void)

void FUN_140760cec(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  longlong local_270;
  longlong *local_268;
  longlong local_260;
  longlong *local_258;
  longlong local_250;
  longlong *local_248;
  undefined1 local_240;
  undefined1 local_23f;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_221;
  longlong local_220;
  longlong *local_218;
  uint5 local_210;
  undefined3 uStack_20b;
  longlong *local_208;
  code *local_1f8;
  longlong *local_1f0;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (((param_1 == (longlong *)0x0) || (DAT_14c98e618 == 0)) ||
     ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0)) goto LAB_140760ea4;
  if ((char)param_1[0xca] == '\0') {
    if (param_1[0xed] == 0) {
      lVar8 = 0;
      plVar13 = (longlong *)0x0;
    }
    else {
      local_1f0 = &local_220;
      local_1f8 = FUN_143336ee2;
      FUN_1407616b4(param_1[0xed],&local_210);
      plVar13 = local_208;
      lVar8 = _local_210;
      if (local_208 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_208 + 1) = (int)local_208[1] + 1;
        UNLOCK();
        if (local_208 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_208 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_208)(local_208);
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
    }
    lVar9 = param_1[0xe8];
    lVar14 = lVar9;
    if (lVar9 == 0) {
      FUN_140762f94(param_1);
      FUN_140761ace(&local_1f8);
      local_50 = (double)(int)param_1[0xcf];
      local_48 = (double)(int)((ulonglong)param_1[0xcf] >> 0x20);
      local_278 = &local_221;
      FUN_140763374(&local_210,"SVirtualWindow",
                    ".\\Runtime/UMG/Private/Components/WidgetComponent.cpp",0x70f);
      FUN_140761c10(&local_210,&local_220,&local_1f8);
      plVar11 = local_218;
      if (local_218 == (longlong *)0x0) {
        param_1[0xe8] = local_220;
        plVar10 = (longlong *)param_1[0xe9];
        if (plVar10 != (longlong *)0x0) {
          param_1[0xe9] = 0;
LAB_140761575:
          LOCK();
          plVar11 = plVar10 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
joined_r0x0001407615ae:
            if (iVar7 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_218 + 1) = (int)local_218[1] + 1;
        UNLOCK();
        param_1[0xe8] = local_220;
        plVar10 = (longlong *)param_1[0xe9];
        if (local_218 == plVar10) {
          LOCK();
          plVar10 = local_218 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_218)(local_218);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            plVar10 = plVar11;
            goto joined_r0x0001407615ae;
          }
        }
        else {
          param_1[0xe9] = (longlong)local_218;
          if (plVar10 != (longlong *)0x0) goto LAB_140761575;
        }
      }
      plVar11 = local_218;
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_218 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      plVar11 = local_208;
      if (local_208 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_208 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_208)(local_208);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      FUN_140a4ff8c(&local_1f8);
      *(undefined1 *)(param_1[0xe8] + 0x688) = *(undefined1 *)((longlong)param_1 + 0x699);
      FUN_140761afc(param_1[0xe8],(char)param_1[0xd0]);
      puVar12 = &DAT_14c96b23c;
      if (*(char *)((longlong)param_1 + 0x69a) == '\0') {
        puVar12 = &DAT_14c96b238;
      }
      local_240 = *puVar12;
      local_23f = 1;
      local_238 = 0;
      uStack_230 = 0;
      FUN_14020e622(param_1[0xe8]);
      pcVar2 = (code *)param_1[0xe8];
      if (pcVar2 != (code *)0x0) {
        if ((((char)param_1[0xd3] != '\x01') || ((char)param_1[0xe5] != '\0')) &&
           (DAT_14c98e618 != 0)) {
          plVar11 = (longlong *)param_1[0xe9];
          local_1f8 = pcVar2;
          if (plVar11 == (longlong *)0x0) {
            local_1f0 = (longlong *)0x0;
            FUN_140761b34();
          }
          else {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            local_1f0 = plVar11;
            FUN_140761b34();
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
        }
        if ((((param_1[0xed] != 0) &&
             ((lVar14 = param_1[0x16], lVar14 != 0 || (lVar14 = FUN_1448abda6(param_1), lVar14 != 0)
              ))) && ((bVar5 = *(byte *)(lVar14 + 0x152), bVar5 == 1 ||
                      ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))))) &&
           ((*(longlong *)(lVar14 + 0x1f0) != 0 &&
            (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x1f0) + 0x30), lVar14 != 0)))) {
          lVar14 = *(longlong *)(lVar14 + 0x2a0);
          if ((DAT_14c950c29 == '\x01') && (lVar14 != 0)) {
            FUN_1456cec3c(lVar14);
          }
          else if (lVar14 == 0) goto LAB_140761148;
          lVar3 = param_1[0xe8];
          FUN_140761b7a(lVar14,&local_220);
          _local_210 = local_220;
          local_208 = local_218;
          if (local_218 == (longlong *)0x0) {
            FUN_1407630f8(lVar3,&local_210);
          }
          else {
            LOCK();
            *(int *)(local_218 + 1) = (int)local_218[1] + 1;
            UNLOCK();
            FUN_1407630f8(lVar3,&local_210);
            if (local_218 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_218 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*local_218)(local_218);
                LOCK();
                piVar1 = (int *)((longlong)local_218 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_218 + 0x10))(local_218);
                }
              }
            }
          }
        }
      }
LAB_140761148:
      lVar14 = param_1[0xe8];
    }
    local_210 = (uint5)(uint)local_210;
    FUN_1402bad2e(lVar14,&local_1f8,
                  CONCAT44((float)*(int *)((longlong)param_1 + 0x67c),(float)(int)param_1[0xcf]));
    FUN_1402baeb8(lVar14,local_1f8);
    if (lVar8 == 0) {
      lVar8 = param_1[0xee];
      plVar11 = (longlong *)param_1[0xf1];
      if (lVar8 != 0) {
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          iVar7 = (int)plVar11[1];
          lVar14 = 0;
          do {
            if (iVar7 == 0) goto LAB_1407612d2;
            LOCK();
            iVar4 = (int)plVar11[1];
            bVar15 = iVar7 == iVar4;
            if (bVar15) {
              *(int *)(plVar11 + 1) = iVar7 + 1;
              iVar4 = iVar7;
            }
            iVar7 = iVar4;
            UNLOCK();
          } while (!bVar15);
          lVar14 = param_1[0xf0];
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
LAB_1407612d2:
          if ((lVar9 != 0) && (lVar8 == lVar14)) goto LAB_140760e5a;
          lVar8 = param_1[0xee];
          plVar11 = (longlong *)param_1[0xf1];
        }
        param_1[0xf0] = lVar8;
        plVar10 = (longlong *)param_1[0xef];
        if (plVar11 != plVar10) {
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar11 = (longlong *)param_1[0xf1];
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          param_1[0xf1] = (longlong)plVar10;
          lVar8 = param_1[0xee];
          plVar10 = (longlong *)param_1[0xef];
        }
        lVar9 = param_1[0xe8];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        plVar11 = &local_260;
        local_260 = lVar8;
        local_258 = plVar10;
        goto LAB_1407611a6;
      }
      if (plVar11 == (longlong *)0x0) {
LAB_14076142d:
        lVar8 = 0;
        lVar14 = DAT_14c98dec8;
      }
      else {
        iVar7 = (int)plVar11[1];
        do {
          if (iVar7 == 0) goto LAB_14076142d;
          LOCK();
          iVar4 = (int)plVar11[1];
          bVar15 = iVar7 == iVar4;
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          lVar14 = DAT_14c98dec8;
          UNLOCK();
        } while (!bVar15);
        lVar8 = param_1[0xf0];
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
      plVar11 = DAT_14c98ded0;
      local_270 = DAT_14c98dec8;
      bVar15 = lVar8 != lVar14;
      local_268 = DAT_14c98ded0;
      if (bVar15) {
        param_1[0xf0] = DAT_14c98dec8;
        plVar10 = (longlong *)param_1[0xf1];
        local_268 = plVar11;
        if (plVar10 != plVar11) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar10 = (longlong *)param_1[0xf1];
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
          param_1[0xf1] = (longlong)plVar11;
          local_270 = DAT_14c98dec8;
          local_268 = DAT_14c98ded0;
        }
        *(undefined1 *)(param_1 + 0xf2) = 0;
      }
      lVar8 = param_1[0xe8];
      if (local_268 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_268 + 1) = (int)local_268[1] + 1;
        UNLOCK();
      }
      FUN_140763be6(lVar8,&local_270);
LAB_140760e5c:
      if ((lVar9 == 0) || (bVar15)) goto LAB_1407611b2;
    }
    else {
      plVar11 = (longlong *)param_1[0xf1];
      if (plVar11 == (longlong *)0x0) {
        lVar14 = 0;
      }
      else {
        iVar7 = (int)plVar11[1];
        lVar14 = 0;
        do {
          if (iVar7 == 0) goto LAB_140760e48;
          LOCK();
          iVar4 = (int)plVar11[1];
          bVar15 = iVar7 == iVar4;
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar15);
        lVar14 = param_1[0xf0];
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
LAB_140760e48:
      if ((lVar9 != 0) && (lVar8 == lVar14)) {
LAB_140760e5a:
        bVar15 = false;
        goto LAB_140760e5c;
      }
      param_1[0xf0] = lVar8;
      plVar11 = (longlong *)param_1[0xf1];
      if (plVar11 != plVar13) {
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
          UNLOCK();
          plVar11 = (longlong *)param_1[0xf1];
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        param_1[0xf1] = (longlong)plVar13;
      }
      lVar9 = param_1[0xe8];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      plVar11 = &local_250;
      local_250 = lVar8;
      local_248 = plVar13;
LAB_1407611a6:
      FUN_140763be6(lVar9,plVar11);
      *(undefined1 *)(param_1 + 0xf2) = 0;
LAB_1407611b2:
      if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
        bVar5 = *(byte *)((longlong)param_1 + 0x9d);
        if ((bVar5 & 1) != 0) {
          if ((param_1[0x16] != 0) || (lVar8 = FUN_1448abda6(param_1), lVar8 != 0))
          goto LAB_140761204;
          bVar5 = *(byte *)((longlong)param_1 + 0x9d);
        }
        *(byte *)((longlong)param_1 + 0x9d) = bVar5 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
LAB_140761204:
      (**(code **)(*param_1 + 0x3b0))(param_1,1);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar13 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  if ((((((param_1[0xed] == 0) && (param_1[0xee] == 0)) || ((char)param_1[0xca] != '\x01')) ||
       (((lVar8 = param_1[0x16], lVar8 == 0 && (lVar8 = FUN_1448abda6(param_1), lVar8 == 0)) ||
        ((bVar5 = *(byte *)(lVar8 + 0x152), bVar5 != 1 &&
         ((6 < bVar5 || ((0x68U >> (bVar5 & 0x1f) & 1) == 0)))))))) ||
      (lVar8 = FUN_14112ea38(param_1), lVar8 == 0)) ||
     (((*(longlong *)(lVar8 + 0x30) == 0 ||
       (cVar6 = (**(code **)(*param_1 + 0x4e8))(param_1), cVar6 == '\0')) ||
      (*(char *)(param_1[0x15] + 0x60) < '\0')))) {
    if ((char)param_1[0xe3] == '\x01') {
      FUN_14112e8e8(param_1);
    }
  }
  else if ((char)param_1[0xe3] == '\0') {
    FUN_147760958(param_1,lVar8);
  }
LAB_140760ea4:
  if ((local_40 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407616b4 FUN_1407616b4 body=1049 status=ok
// SIG undefined FUN_1407616b4(void)

longlong * FUN_1407616b4(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_1[0x1f] == 0) || (plVar11 = (longlong *)param_1[0x20], plVar11 == (longlong *)0x0)) ||
     ((int)plVar11[1] < 1)) {
    (**(code **)(*param_1 + 0x2e8))(param_1,&local_60);
    plVar11 = local_58;
    lVar8 = local_60;
    if (local_58 == (longlong *)0x0) {
      param_1[0x1f] = local_60;
      plVar9 = (longlong *)param_1[0x20];
      if (plVar9 != (longlong *)0x0) {
LAB_1407617aa:
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        goto LAB_1407617b6;
      }
      bVar12 = false;
LAB_1407617c1:
      bVar3 = bVar12;
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_58 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      param_1[0x1f] = lVar8;
      if ((longlong *)param_1[0x20] != plVar11) {
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)param_1[0x20];
        if (plVar9 != (longlong *)0x0) goto LAB_1407617aa;
LAB_1407617b6:
        param_1[0x20] = (longlong)plVar11;
      }
      bVar3 = false;
    }
  }
  else {
    iVar5 = (int)plVar11[1];
    do {
      bVar3 = true;
      lVar8 = 0;
      bVar12 = true;
      if (iVar5 == 0) goto LAB_1407617c1;
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar12 = iVar5 == iVar6;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      iVar5 = iVar6;
      UNLOCK();
    } while (!bVar12);
    lVar8 = param_1[0x1f];
  }
  lVar7 = FUN_1405e2bf2();
  iVar5 = *(int *)(lVar7 + 0x38);
  if ((*(int *)(param_1[2] + 0x38) < iVar5) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)iVar5 * 8) != lVar7 + 0x30))
  goto LAB_1407617e6;
  plVar9 = (longlong *)param_1[0x22];
  if (plVar9 == (longlong *)0x0) {
LAB_1407618c5:
    plVar10 = (longlong *)0x0;
    local_74 = (int)CONCAT71((int7)(int3)((uint)iVar5 >> 8),1);
LAB_1407618c8:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_70 = lVar8;
    local_68 = plVar11;
    if (param_1 == (longlong *)0x0) {
LAB_140761907:
      local_50 = (longlong *)0x0;
    }
    else {
      lVar8 = FUN_1405e2bf2();
      if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (local_50 = param_1,
         *(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
         lVar8 + 0x30)) goto LAB_140761907;
    }
    (*(code *)*param_3)(&local_60,param_3[1],&local_50,&local_70);
    plVar9 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar2 = local_58;
    lVar7 = local_60;
    local_60 = 0;
    plVar9 = plVar10;
    if (local_58 == plVar10) {
LAB_14076198e:
      plVar10 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_58 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_58)(local_58);
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
      local_58 = (longlong *)0x0;
      plVar9 = plVar2;
      if ((char)local_74 == '\0') {
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
        goto LAB_14076198e;
      }
    }
    param_1[0x21] = lVar7;
    plVar10 = (longlong *)param_1[0x22];
    if (plVar10 != plVar9) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)param_1[0x22];
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
      param_1[0x22] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar10 = (longlong *)0x0;
    if (plVar9 == plVar11) {
      plVar10 = plVar9;
    }
    if ((plVar11 == (longlong *)0x0) || (plVar9 == plVar11)) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar11 = plVar9;
          goto joined_r0x000140761a3c;
        }
      }
    }
    else {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000140761a3c:
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    plVar10 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      lVar8 = lVar7;
      goto LAB_1407617e6;
    }
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_1407618c5;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar12 = iVar6 == iVar4;
      if (bVar12) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar12);
    lVar7 = param_1[0x21];
    if (lVar7 == 0) {
      plVar10 = plVar9;
      local_74 = 0;
      goto LAB_1407618c8;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (plVar9 == plVar11) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar10 = plVar11;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar2 = plVar9;
joined_r0x000140761aa3:
        plVar10 = plVar11;
        if (iVar5 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    else {
      plVar10 = plVar9;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar2 = plVar11;
          plVar11 = plVar9;
          goto joined_r0x000140761aa3;
        }
      }
    }
  }
  LOCK();
  plVar2 = plVar9 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  plVar11 = plVar10;
  lVar8 = lVar7;
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
LAB_1407617e6:
  if (!bVar3) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
    (**(code **)(*param_1 + 0x2f0))(param_1);
  }
  *param_2 = lVar8;
  param_2[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar11 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140761ace FUN_140761ace body=46 status=ok
// SIG undefined FUN_140761ace(void)

longlong FUN_140761ace(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x1b0) = 0x4059000000000000;
  return param_1;
}



// FUNCTION 140761afc FUN_140761afc body=55 status=ok
// SIG undefined FUN_140761afc(void)

void FUN_140761afc(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x36a) & 8) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x36a) = *(byte *)(param_1 + 0x36a) & 0xf7 | param_2 * '\b';
    if (param_2 != '\0') {
      FUN_14032aaf4(param_1 + 0x268,0);
      return;
    }
  }
  return;
}



// FUNCTION 140761b34 FUN_140761b34 body=70 status=ok
// SIG undefined FUN_140761b34(void)

void FUN_140761b34(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140761c9a(param_1 + 0x1c0);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000140761b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140761b7a FUN_140761b7a body=149 status=ok
// SIG undefined FUN_140761b7a(void)

undefined8 * FUN_140761b7a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = *(longlong *)(param_1 + 0xf8);
  if ((((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb4) != DAT_14cb08720)) || (lVar2 == 8)) ||
     (plVar3 = *(longlong **)(lVar2 + 0x248), plVar3 == (longlong *)0x0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x240);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    *param_2 = 0;
    param_2[1] = plVar3;
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        param_2[1] = 0;
        goto LAB_140761be6;
      }
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
    if (param_2[1] != 0) {
      *param_2 = uVar4;
    }
LAB_140761be6:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return param_2;
}



// FUNCTION 140761c10 FUN_140761c10 body=117 status=ok
// SIG undefined FUN_140761c10(void)

longlong * FUN_140761c10(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140763742(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140761c86 FUN_140761c86 body=20 status=ok
// SIG undefined FUN_140761c86(void)

undefined8 FUN_140761c86(longlong *param_1)

{
  (**(code **)(*param_1 + 0x208))();
  return 0;
}



// FUNCTION 140761c9a FUN_140761c9a body=136 status=ok
// SIG undefined FUN_140761c9a(void)

ulonglong FUN_140761c9a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = 0;
    iVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) == *param_2) {
        if (iVar3 != 1) {
          uVar4 = (ulonglong)(uint)-iVar3;
          goto LAB_140761cfe;
        }
        break;
      }
      iVar3 = iVar3 + -1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 << 4 != lVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1413f6722(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar2 + 8 + uVar4 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_140761cfe:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140761d22 FUN_140761d22 body=1399 status=ok
// SIG undefined FUN_140761d22(void)

void FUN_140761d22(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 uVar10;
  bool bVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  double *local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  longlong local_d8;
  longlong *local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_80;
  double local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((DAT_14ca84e78 != '\0') || (param_1[0xe8] == 0)) || (lVar9 = param_1[0xec], lVar9 == 0)) ||
     ((int)param_1[0xcc] < 1)) goto LAB_140761fb6;
  if (((DAT_14ca84e40 < *(int *)((longlong)param_1 + 0x664)) || (DAT_14ca84e40 < (int)param_1[0xcc])
      ) || (*(int *)((longlong)param_1 + 0x664) < 1)) goto LAB_140761fb6;
  lVar3 = param_1[0xcf];
  param_1[0xcf] = param_1[0xcc];
  if ((char)param_1[0xd0] == '\x01') {
    FUN_14171f9c0();
LAB_140761de0:
    FUN_1405d299c();
    lVar9 = param_1[0xec];
    uVar10 = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x681) == '\x01') goto LAB_140761de0;
    uVar10 = 1;
  }
  *(undefined1 *)(lVar9 + 0x28) = uVar10;
  if (*(char *)((longlong)param_1 + 0x681) == '\0') {
    iVar5 = (int)param_1[0xcf];
    bVar11 = true;
  }
  else {
    pfVar6 = (float *)&DAT_14c84635c;
    if ((*(byte *)(param_1[0xe8] + 0x31) & 0x20) != 0) {
      pfVar6 = (float *)(param_1[0xe8] + 0x168);
    }
    auVar13._0_8_ = (double)*pfVar6 + 0.5;
    auVar13._8_8_ = 0;
    auVar13 = roundpd(auVar13,auVar13,1);
    auVar15._0_8_ = (double)pfVar6[1] + 0.5;
    auVar15._8_8_ = 0;
    auVar15 = roundpd(auVar15,auVar15,1);
    dVar14 = auVar15._0_8_;
    dVar12 = auVar13._0_8_;
    uVar7 = (ulonglong)(longlong)ROUND(dVar12 + dVar12 + 0.5) >> 1;
    iVar5 = (int)uVar7;
    param_1[0xcf] =
         uVar7 & 0xffffffff | ((longlong)ROUND(dVar14 + dVar14 + 0.5) & 0xfffffffffffffffeU) << 0x1f
    ;
    bVar11 = 0.0 < dVar12 && 0.0 < dVar14;
  }
  if ((iVar5 != (int)lVar3) ||
     (*(int *)((longlong)param_1 + 0x67c) != (int)((ulonglong)lVar3 >> 0x20))) {
    if (bVar11) {
      FUN_14099bbec(param_1,1);
      FUN_1406cc378(param_1);
    }
    else {
      FUN_140acf690(param_1);
    }
  }
  (**(code **)(*param_1 + 0xa90))(param_1,param_1[0xcf]);
  if (param_1[0xe1] == 0) goto LAB_140761fb6;
  *(undefined1 *)((longlong)param_1 + 0x669) = 0;
  if ((char)param_1[0xd0] == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cab90d0) && (FUN_144b3d300(&DAT_14cab90d0), DAT_14cab90d0 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cab90c8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"Slate.DeferRetainedRenderingRenderThread",1);
      _Init_thread_footer(&DAT_14cab90d0);
    }
    if (DAT_14cab90c8 == (longlong *)0x0) {
      bVar11 = false;
    }
    else {
      iVar5 = (**(code **)(*DAT_14cab90c8 + 0xb0))();
      bVar11 = iVar5 != 0;
    }
    local_f0 = (double *)CONCAT44(local_f0._4_4_,param_2);
    local_f8 = DAT_14c866ff8;
    FUN_142877efe(&local_60,0,*(undefined8 *)(param_1[0xe8] + 0x520),
                  CONCAT44((float)DAT_14c8463f8,(float)DAT_14c8463f0));
    local_70 = param_1[0xe8];
    local_68 = (longlong *)param_1[0xe9];
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_80 = (double)(int)param_1[0xcf];
    local_f0 = &local_80;
    local_78 = (double)(int)((ulonglong)param_1[0xcf] >> 0x20);
    local_b8 = local_60;
    uStack_b0 = uStack_58;
    local_a8 = local_50;
    uStack_a0 = uStack_48;
    local_98 = local_40;
    uStack_90 = uStack_38;
    local_e8 = CONCAT31(local_e8._1_3_,bVar11);
    local_f8 = CONCAT44(local_f8._4_4_,0x3f800000);
    FUN_147791f00(param_1[0xec],&local_70,param_1[0xe1]);
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) goto LAB_140761f7f;
  }
  else {
    lVar9 = param_1[0xec];
    local_c8 = (double)(int)param_1[0xcf];
    local_c0 = (double)(int)((ulonglong)param_1[0xcf] >> 0x20);
    local_d8 = param_1[0xe8];
    plVar8 = (longlong *)param_1[0xe9];
    local_e8 = param_2;
    if (plVar8 == (longlong *)0x0) {
      local_d0 = (longlong *)0x0;
      local_f0 = &local_c8;
      local_e0 = 0;
      local_f8 = CONCAT44(local_f8._4_4_,0x3f800000);
      FUN_14076229a(lVar9,param_1[0xe1],*(undefined8 *)(local_d8 + 0x520));
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_f0 = &local_c8;
      local_e0 = 0;
      local_f8 = CONCAT44(local_f8._4_4_,0x3f800000);
      local_d0 = plVar8;
      FUN_14076229a(lVar9,param_1[0xe1],*(undefined8 *)(param_1[0xe8] + 0x520));
LAB_140761f7f:
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
  }
  if (*(char *)((longlong)param_1 + 0x651) == '\0') {
    plVar8 = &DAT_14c866ff8;
  }
  else {
    lVar9 = param_1[0x16];
    if (lVar9 == 0) {
      lVar9 = FUN_1448abda6(param_1);
    }
    plVar8 = (longlong *)(lVar9 + 0x6d0);
  }
  param_1[0xce] = *plVar8;
  if (((char)param_1[0xe7] == '\0') &&
     (cVar4 = (**(code **)(*param_1 + 0x3b8))(param_1), cVar4 != '\0')) {
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
  }
LAB_140761fb6:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14076229a FUN_14076229a body=270 status=ok
// SIG undefined FUN_14076229a(void)

void FUN_14076229a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *param_6;
  uStack_64 = param_6[1];
  uStack_60 = param_6[2];
  uStack_5c = param_6[3];
  local_78 = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  lVar3 = FUN_1447b4020(param_2);
  lVar4 = lVar3 + 0x50;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  local_80 = param_8;
  local_88 = param_7;
  local_90 = &local_68;
  local_98 = param_5;
  FUN_1407627b2(param_1,lVar4,param_3,&local_78);
  puVar2 = (undefined8 *)param_4[1];
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
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407623cc FUN_1407623cc body=997 status=ok
// SIG undefined FUN_1407623cc(void)

void FUN_1407623cc(longlong param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *local_90;
  undefined4 local_88;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x6cc) == '\x01') {
    fVar14 = 0.0;
  }
  else if (*(char *)(param_1 + 0x6cc) == '\0') {
    fVar14 = 1.0;
  }
  else {
    fVar14 = *(float *)(param_1 + 0x6b4);
  }
  if ((param_2 >> 0x20 != 0) && (uVar11 = (uint)param_2, uVar11 != 0)) {
    fVar1 = *(float *)(param_1 + 0x6a8);
    fVar2 = *(float *)(param_1 + 0x6ac);
    fVar3 = *(float *)(param_1 + 0x6b0);
    uVar8 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x1a8))();
    lVar12 = *(longlong *)(param_1 + 0x708);
    uVar13 = (uint)(param_2 >> 0x20);
    if (lVar12 == 0) {
      lVar12 = FUN_1407635e4(param_1);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x708) = lVar12;
      *(float *)(lVar12 + 0x148) = fVar1;
      *(float *)(lVar12 + 0x14c) = fVar2;
      *(float *)(lVar12 + 0x150) = fVar3;
      *(float *)(lVar12 + 0x154) = fVar14;
      plVar6 = *(longlong **)(param_1 + 0x708);
      *(uint *)(plVar6 + 0x28) = uVar11;
      *(uint *)((longlong)plVar6 + 0x144) = uVar13;
      *(undefined1 *)(plVar6 + 0x2c) = uVar8;
      *(byte *)((longlong)plVar6 + 0x15a) = *(byte *)((longlong)plVar6 + 0x15a) & 0xfe;
      if (0x10000 < uVar11) {
        *(undefined4 *)(plVar6 + 0x28) = 1;
      }
      if (0x10000 < uVar13) {
        *(undefined4 *)((longlong)plVar6 + 0x144) = 1;
      }
      (**(code **)(*plVar6 + 0x318))();
      lVar12 = *(longlong *)(param_1 + 0x710);
      bVar7 = true;
      if (lVar12 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x708);
        local_90 = "SlateUI";
        local_88 = 7;
        local_84 = local_84 & 0xffffff00;
        uVar10 = FUN_14001a6c0(&local_90,1);
        FUN_14016d8b0(lVar12,uVar10,uVar4);
      }
    }
    else {
      bVar7 = true;
      if ((*(float *)(lVar12 + 0x148) == fVar1) && (!NAN(*(float *)(lVar12 + 0x148)) && !NAN(fVar1))
         ) {
        if ((*(float *)(lVar12 + 0x14c) == fVar2) &&
           (!NAN(*(float *)(lVar12 + 0x14c)) && !NAN(fVar2))) {
          if ((*(float *)(lVar12 + 0x150) == fVar3) &&
             (!NAN(*(float *)(lVar12 + 0x150)) && !NAN(fVar3))) {
            if ((*(float *)(lVar12 + 0x154) == fVar14) &&
               (!NAN(*(float *)(lVar12 + 0x154)) && !NAN(fVar14))) {
              if ((*(uint *)(lVar12 + 0x140) == uVar11) && (*(uint *)(lVar12 + 0x144) == uVar13))
              goto LAB_1407624ee;
              bVar7 = false;
            }
          }
        }
      }
      *(float *)(lVar12 + 0x148) = fVar1;
      *(float *)(lVar12 + 0x14c) = fVar2;
      *(float *)(lVar12 + 0x150) = fVar3;
      *(float *)(lVar12 + 0x154) = fVar14;
      plVar6 = *(longlong **)(param_1 + 0x708);
      *(uint *)(plVar6 + 0x28) = uVar11;
      *(uint *)((longlong)plVar6 + 0x144) = uVar13;
      *(undefined1 *)(plVar6 + 0x2c) = 2;
      *(byte *)((longlong)plVar6 + 0x15a) = *(byte *)((longlong)plVar6 + 0x15a) & 0xfe;
      if (0x10000 < uVar11) {
        *(undefined4 *)(plVar6 + 0x28) = 1;
      }
      if (0x10000 < uVar13) {
        *(undefined4 *)((longlong)plVar6 + 0x144) = 1;
      }
      (**(code **)(*plVar6 + 0x318))();
      FUN_140768b6e(*(undefined8 *)(param_1 + 0x708),1);
    }
    lVar12 = *(longlong *)(param_1 + 0x708);
    if (lVar12 != 0) {
      if ((bVar7) && (lVar5 = *(longlong *)(param_1 + 0x710), lVar5 != 0)) {
        local_a8 = *(undefined4 *)(lVar12 + 0x148);
        uStack_a4 = *(undefined4 *)(lVar12 + 0x14c);
        uStack_a0 = *(undefined4 *)(lVar12 + 0x150);
        uStack_9c = *(undefined4 *)(lVar12 + 0x154);
        local_90 = "BackColor";
        local_88 = 9;
        local_84 = local_84 & 0xffffff00;
        uVar11 = FUN_14001a6c0(&local_90,1);
        local_90 = (char *)(ulonglong)uVar11;
        local_88 = CONCAT31(local_88._1_3_,2);
        local_84 = 0xffffffff;
        FUN_14016d7a8(lVar5,&local_90,&local_a8);
      }
      if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
        bVar9 = *(byte *)(param_1 + 0x9d);
        if ((bVar9 & 1) != 0) {
          if (*(longlong *)(param_1 + 0xb0) != 0) goto LAB_1407624ee;
          lVar12 = FUN_1448abda6(param_1);
          if (lVar12 != 0) goto LAB_1407624ee;
          bVar9 = *(byte *)(param_1 + 0x9d);
        }
        *(byte *)(param_1 + 0x9d) = bVar9 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
    }
  }
LAB_1407624ee:
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407627b2 FUN_1407627b2 body=1777 status=ok
// SIG undefined FUN_1407627b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407627b2(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  float param_5,double *param_6,undefined4 param_7,char param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 *puVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined4 local_200;
  undefined1 **local_1f8;
  undefined1 local_1f0;
  LPCRITICAL_SECTION local_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  float local_1ac;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined1 *local_178;
  undefined1 *puStack_170;
  undefined1 *local_168;
  undefined1 *puStack_160;
  float local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  LARGE_INTEGER local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  float local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  undefined1 local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  fVar13 = (float)(param_6[1] * (double)(1.0 / param_5));
  fVar11 = (float)((double)(1.0 / param_5) * *param_6);
  local_ec = param_5 + 0.0;
  fVar10 = param_5 * 0.0;
  local_e8 = fVar10 + 0.0;
  local_108 = CONCAT44(fVar13,fVar11);
  fVar13 = fVar13 * param_5;
  fVar15 = fVar10 + local_e8;
  fVar12 = fVar11 * param_5 + local_e8;
  fVar16 = local_e8 + fVar13;
  fVar13 = fVar13 + fVar15;
  fVar14 = fVar10 + fVar12;
  fVar11 = fVar15;
  if (fVar15 <= fVar16) {
    fVar11 = fVar16;
  }
  if (fVar11 <= fVar13) {
    fVar11 = fVar13;
  }
  local_1ac = (float)(-(uint)(fVar11 < fVar10) & (uint)local_e8 |
                     ~-(uint)(fVar11 < fVar10) & (uint)fVar11);
  fVar11 = fVar12;
  if (fVar12 <= fVar15) {
    fVar11 = fVar15;
  }
  if (fVar11 <= fVar14) {
    fVar11 = fVar14;
  }
  local_1b0 = (float)(-(uint)(fVar11 < fVar10) & (uint)local_e8 |
                     ~-(uint)(fVar11 < fVar10) & (uint)fVar11);
  if (fVar15 <= fVar12) {
    fVar12 = fVar15;
  }
  if (fVar16 <= fVar15) {
    fVar15 = fVar16;
  }
  if (fVar13 <= fVar15) {
    fVar15 = fVar13;
  }
  fStack_1b4 = (float)(-(uint)(fVar10 < fVar15) & (uint)local_e8 |
                      ~-(uint)(fVar10 < fVar15) & (uint)fVar15);
  if (fVar14 <= fVar12) {
    fVar12 = fVar14;
  }
  local_1b8 = (float)(-(uint)(fVar10 < fVar12) & (uint)local_e8 |
                     ~-(uint)(fVar10 < fVar12) & (uint)fVar12);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_118 = 0;
  local_110 = 0;
  lVar2 = *param_4;
  plVar3 = (longlong *)param_4[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_198 = CONCAT44((float)DAT_14c8463f8,(float)DAT_14c8463f0);
  local_190 = 0;
  local_188 = DAT_14c866ff8;
  local_180 = param_7;
  local_17c = 1;
  local_100 = param_5;
  local_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  local_d4 = 0;
  local_dc = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(DAT_14c98e618 + 0x20);
  local_1a8 = param_3;
  local_1a0 = param_3;
  local_e4 = local_e8;
  local_e0 = local_ec;
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar4 + 0x160))(plVar4);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar9 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar9,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar6 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_140762d0f;
    bVar6 = DAT_14c8442b8 & 1;
  }
  if (bVar6 == 0) {
    local_1d8 = param_2;
    local_1d0 = param_4;
    if (*(char *)(param_1 + 0x28) == '\x01') {
      FUN_1405d299c(lVar2,local_100);
    }
    lVar7 = local_1a0;
    local_178 = DAT_14c84635c;
    local_120.s.HighPart = (LONG)(local_1ac - fStack_1b4);
    local_120.s.LowPart = (DWORD)(local_1b0 - local_1b8);
    local_128 = CONCAT44(fStack_1b4,local_1b8);
    FUN_14020e8f6(local_1a0,&local_128,&local_120,&local_178);
    if (*(char *)(param_1 + 0x29) == '\x01') {
      FUN_1448e9c5c(lVar7,*(undefined4 *)(lVar7 + 0x90));
    }
    plVar5 = *(longlong **)(param_1 + 0x18);
    local_1e0 = lpCriticalSection;
    puVar8 = (undefined1 *)(**(code **)(*plVar5 + 0x20))(plVar5);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_138 = lVar2;
    local_130 = plVar3;
    uVar9 = FUN_1405d2af8(puVar8,&local_138);
    local_1f0 = *(undefined1 *)(lVar2 + 0x3a);
    local_178 = &DAT_3f8000003f800000;
    puStack_170 = &DAT_3f8000003f800000;
    local_168 = &DAT_3f8000003f800000;
    puStack_160 = &DAT_3f8000003f800000;
    local_158 = 0.6;
    uStack_154 = 0x3f19999a;
    uStack_150 = 0x3f19999a3f19999a;
    local_200 = 0;
    local_208 = uVar9;
    local_1f8 = &local_178;
    FUN_14016eaf2(lVar2,&local_1a8,&local_108,&local_1b8);
    FUN_140762f42(uVar9,&local_178);
    FUN_140762ef2(param_1 + 8,&local_178);
    FUN_140762ea4(local_178,(ulonglong)puStack_170 & 0xffffffff);
    if (local_178 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))(*(longlong **)(param_1 + 0x18),puVar8);
    *(float *)(puVar8 + 0x60) = (float)*(double *)(param_1 + 0x30);
    *(float *)(puVar8 + 100) = (float)*(double *)(param_1 + 0x38);
    puStack_170 = (undefined1 *)(DAT_14c866ff8 - _DAT_14c86a9d8);
    local_168 = (undefined1 *)CONCAT44(local_168._4_4_,(float)DAT_14c759090);
    local_178 = puVar8;
    QueryPerformanceCounter(&local_120);
    puStack_160 = (undefined1 *)
                  (((double)CONCAT44(local_120.s.HighPart,local_120.s.LowPart) * DAT_14c83f420 +
                   16777216.0) - _DAT_14c86a9d8);
    local_158 = (float)DAT_14c759090;
    uStack_150 = local_1d8;
    local_148 = *(undefined8 *)(param_1 + 0x18);
    local_140 = *(undefined1 *)(param_1 + 0x2b);
    (**(code **)(*plVar4 + 0x1a0))
              (plVar4,&local_178,CONCAT71((int7)((ulonglong)&local_178 >> 8),param_8) & 0xffffffff);
    param_4 = local_1d0;
    lpCriticalSection = local_1e0;
    if (param_8 == '\0') {
      (**(code **)(*plVar5 + 0x28))(plVar5,puVar8);
    }
  }
LAB_140762d0f:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
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
  plVar3 = (longlong *)param_4[1];
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
  if ((local_d0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140762ea4 FUN_140762ea4 body=77 status=ok
// SIG undefined FUN_140762ea4(void)

void FUN_140762ea4(longlong param_1,int param_2)

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



// FUNCTION 140762ef2 FUN_140762ef2 body=80 status=ok
// SIG undefined FUN_140762ef2(void)

longlong * FUN_140762ef2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140762ea4(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 140762f42 FUN_140762f42 body=81 status=ok
// SIG undefined FUN_140762f42(void)

undefined8 * FUN_140762f42(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x160);
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1477a9746(param_2,iVar1);
    FUN_1477a979e(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 140762f94 FUN_140762f94 body=236 status=ok
// SIG undefined FUN_140762f94(void)

void FUN_140762f94(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1[0xe2] = 0;
  if ((char)param_1[0xca] == '\x01') {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x610))(param_1,0);
  lVar3 = FUN_14090ceee(uVar2,param_1,0);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0xe2] = lVar3;
    if (lVar3 == 0) goto LAB_140762ff9;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0xe2] = lVar3;
  }
  FUN_1406555d4(lVar3,param_1,0);
LAB_140762ff9:
  FUN_1407631e0(param_1);
  (**(code **)(*param_1 + 0x310))(param_1);
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) != 0) {
    return;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x9d);
  if ((bVar1 & 1) != 0) {
    if (param_1[0x16] != 0) {
      return;
    }
    lVar3 = FUN_1448abda6(param_1);
    if (lVar3 != 0) {
      return;
    }
    bVar1 = *(byte *)((longlong)param_1 + 0x9d);
  }
  *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
  return;
}



// FUNCTION 1407630f8 FUN_1407630f8 body=232 status=ok
// SIG undefined FUN_1407630f8(void)

void FUN_1407630f8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(longlong *)(param_1 + 0x1c0) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x1c8);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x1c8);
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
    *(longlong **)(param_1 + 0x1c8) = plVar2;
  }
  if (DAT_14c968098 != 0) {
    lVar3 = *(longlong *)(DAT_14c968098 + 200);
    plVar2 = *(longlong **)(DAT_14c968098 + 0xd0);
    if (plVar2 == (longlong *)0x0) {
      *(undefined1 *)(lVar3 + 0x88) = 1;
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      *(undefined1 *)(lVar3 + 0x88) = 1;
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
  if (*param_2 != 0) {
    FUN_140163244(*param_2,8);
  }
  plVar2 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001407631ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407631e0 FUN_1407631e0 body=402 status=ok
// SIG undefined FUN_1407631e0(void)

void FUN_1407631e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_e8 [32];
  char **local_c8;
  char *local_c0;
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
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x710);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x708);
    local_c0 = "SlateUI";
    local_b8._0_5_ = 7;
    uVar3 = FUN_14001a6c0(&local_c0,1);
    FUN_14016d8b0(lVar1,uVar3,uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x710);
    local_68 = *(ulonglong *)(param_1 + 0x6b8);
    uStack_60 = *(undefined4 *)(param_1 + 0x6c0);
    uStack_5c = *(undefined4 *)(param_1 + 0x6c4);
    local_c0 = "TintColorAndOpacity";
    local_b8 = CONCAT35(local_b8._5_3_,0x13);
    uVar4 = FUN_14001a6c0(&local_c0,1);
    local_c0 = (char *)(ulonglong)uVar4;
    local_b8 = CONCAT71(local_b8._1_7_,2);
    local_b8._4_4_ = 0xffffffff;
    FUN_14016d7a8(uVar2,&local_c0,&local_68);
    uVar2 = *(undefined8 *)(param_1 + 0x710);
    uVar3 = *(undefined4 *)(param_1 + 0x6c8);
    local_c0 = "OpacityFromTexture";
    local_b8 = CONCAT35(local_b8._5_3_,0x12);
    uVar4 = FUN_14001a6c0(&local_c0,1);
    local_68 = (ulonglong)uVar4;
    uStack_60 = CONCAT31(uStack_60._1_3_,2);
    uStack_5c = 0xffffffff;
    local_c0 = (char *)((ulonglong)local_c0 & 0xffffffffffffff00);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_c8 = &local_c0;
    FUN_140042bb4(uVar2,&local_68,uVar3,0);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140763374 FUN_140763374 body=460 status=ok
// SIG undefined FUN_140763374(void)

undefined8 *
FUN_140763374(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x6a0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a355fb0;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x690);
  FUN_140764bf0(plVar1);
  plVar4[2] = (longlong)&PTR_FUN_14a355fd0;
  plVar4[0x4f] = (longlong)&PTR_FUN_14a356230;
  plVar4[0xd1] = 0;
  plVar4[0xd2] = 0;
  local_60 = plVar1;
  local_58 = plVar4;
  FUN_140763542(&local_60,plVar1);
  plVar1 = local_58;
  if (local_58 == (longlong *)0x0) {
    *param_1 = local_60;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_140763460;
    param_1[1] = 0;
LAB_1407634d2:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140763460;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    *param_1 = local_60;
    plVar4 = (longlong *)param_1[1];
    if (local_58 != plVar4) {
      param_1[1] = local_58;
      if (plVar4 == (longlong *)0x0) goto LAB_140763460;
      goto LAB_1407634d2;
    }
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140763460;
    (**(code **)*local_58)(local_58);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140763460:
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_68 = 0x690;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140763542 FUN_140763542 body=162 status=ok
// SIG undefined FUN_140763542(void)

void FUN_140763542(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140763581;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140763581;
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
LAB_140763581:
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
                    /* WARNING: Could not recover jumptable at 0x0001407635e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1407635e4 FUN_1407635e4 body=349 status=ok
// SIG undefined FUN_1407635e4(void)

undefined8 FUN_1407635e4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  if (DAT_14cb0b9a0 == (code *)0x0) {
    local_d0 = &local_b8;
    local_b8 = FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = &LAB_146408884;
    local_d8 = &LAB_147d719e1;
    local_e0 = &LAB_140fb41fe;
    local_e8 = L"Engine";
    local_f0 = 0;
    local_f8 = 0x10000000;
    local_100 = 8;
    local_108 = 0x168;
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
  }
  local_b8 = DAT_14cb0b9a0;
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140763742 FUN_140763742 body=1186 status=ok
// SIG undefined FUN_140763742(void)

void FUN_140763742(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_508 [32];
  undefined1 *local_4e8;
  undefined8 local_4d8;
  longlong local_4d0;
  undefined1 local_4c1;
  undefined1 local_4c0 [8];
  longlong *local_4b8;
  undefined1 local_4a1;
  undefined8 local_4a0;
  longlong *local_498;
  undefined8 local_488;
  longlong *local_480;
  undefined8 local_478;
  longlong *local_470;
  undefined8 local_468;
  longlong *local_460;
  undefined8 *local_458;
  undefined8 *local_450;
  undefined1 local_448 [432];
  longlong *local_298;
  undefined1 local_290 [424];
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 local_d8 [176];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_508;
  *(byte *)(param_1 + 0x368) = *(byte *)(param_1 + 0x368) | 2;
  *(byte *)(param_1 + 0x369) = *(byte *)(param_1 + 0x369) | 2;
  *(undefined2 *)(param_1 + 0x688) = 0x100;
  FUN_1402bb070((float)*(double *)(param_2 + 0x1b0),
                CONCAT44((float)*(double *)(param_2 + 0x1b0),(float)*(double *)(param_2 + 0x1a8)));
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar5 = &PTR_FUN_149ec5bf0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  local_458 = puVar5;
  local_450 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  local_450[1] = &DAT_100000001;
  *local_450 = &PTR_LAB_149eca0b0;
  local_450[2] = puVar5;
  FUN_140764358(param_1,&local_458);
  FUN_1407659d4(param_1);
  FUN_140763f46(*(undefined8 *)(param_1 + 0x5c0),local_d8,0xffffffff);
  FUN_140763df2(local_290);
  FUN_140763e9c(local_448);
  local_4e8 = &local_4a1;
  FUN_140764680(&local_4a0,"STooltipPresenter",".\\Runtime/Slate/Private/Widgets/SVirtualWindow.cpp"
                ,0x1c);
  if (local_498 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_498 + 1) = (int)local_498[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x680);
  *(undefined8 *)(param_1 + 0x678) = local_4a0;
  *(longlong **)(param_1 + 0x680) = local_498;
  if (plVar4 != (longlong *)0x0) {
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
  FUN_140763cd8(&local_4a0,&local_488,local_448);
  plVar2 = local_e0;
  plVar4 = local_480;
  if (local_480 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_480 + 1) = (int)local_480[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_480 + 1) = (int)local_480[1] + 1;
    UNLOCK();
  }
  local_e8 = local_488;
  local_e0 = local_480;
  if (plVar2 != (longlong *)0x0) {
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
  local_4e8 = &local_4c1;
  FUN_14076492c(local_4c0,"SPopup",".\\Runtime/Slate/Private/Widgets/SVirtualWindow.cpp",0x1a);
  FUN_140763d70(local_4c0,&local_478,local_290);
  local_468 = local_478;
  local_460 = local_470;
  if (local_470 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_470 + 1) = (int)local_470[1] + 1;
    UNLOCK();
  }
  FUN_140a4fd40(local_d8,&local_468);
  plVar2 = local_460;
  if (local_460 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_460 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_460)(local_460);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_470 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_470 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_470)(local_470);
      LOCK();
      piVar3 = (int *)((longlong)local_470 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_470 + 0x10))(local_470);
      }
    }
  }
  if (local_4b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_4b8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_4b8)(local_4b8);
      LOCK();
      piVar3 = (int *)((longlong)local_4b8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_4b8 + 0x10))(local_4b8);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if (local_480 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_480 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_480)(local_480);
      LOCK();
      piVar3 = (int *)((longlong)local_480 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_480 + 0x10))(local_480);
      }
    }
  }
  if (local_498 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_498 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_498)(local_498);
      LOCK();
      piVar3 = (int *)((longlong)local_498 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_498 + 0x10))(local_498);
      }
    }
  }
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_298 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar3 = (int *)((longlong)local_298 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_298 + 0x10))(local_298);
      }
    }
  }
  FUN_140a4ff8c(local_448);
  plVar4 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_140a4ff8c(local_290);
  FUN_1407640b6(local_d8);
  local_4d8 = DAT_14c98dec8;
  local_4d0 = DAT_14c98ded0;
  if (DAT_14c98ded0 != 0) {
    LOCK();
    *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
    UNLOCK();
  }
  FUN_140763be6(param_1,&local_4d8);
  if ((local_28 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140763be6 FUN_140763be6 body=111 status=ok
// SIG undefined FUN_140763be6(void)

void FUN_140763be6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x470) == 0) {
    FUN_140a58896(param_1 + 0x1e0,param_2);
  }
  else {
    FUN_140763c56(*(longlong *)(param_1 + 0x470),param_2);
  }
  FUN_140163244(param_1,8);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000140763c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140763c56 FUN_140763c56 body=129 status=ok
// SIG undefined FUN_140763c56(void)

longlong FUN_140763c56(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x10) != DAT_14c98dec8) {
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    }
    FUN_14066af28(*(longlong *)(param_1 + 0x10),uVar5);
  }
  uVar5 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(longlong *)(param_1 + 0x18) = lVar3;
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
  FUN_140a5503c(param_1);
  return param_1;
}



// FUNCTION 140763cd8 FUN_140763cd8 body=117 status=ok
// SIG undefined FUN_140763cd8(void)

longlong * FUN_140763cd8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14076441e(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140763d70 FUN_140763d70 body=129 status=ok
// SIG undefined FUN_140763d70(void)

longlong * FUN_140763d70(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140a58896(*param_1 + 0x1e0,param_3 + 0x1a8);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140763df2 FUN_140763df2 body=169 status=ok
// SIG undefined FUN_140763df2(void)

longlong FUN_140763df2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar4 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar2 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140763e4a;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_140763e4a:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140763e9c FUN_140763e9c body=169 status=ok
// SIG undefined FUN_140763e9c(void)

longlong FUN_140763e9c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar4 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23a | 0x100;
  plVar2 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140763ef4;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_140763ef4:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140763f46 FUN_140763f46 body=367 status=ok
// SIG undefined FUN_140763f46(void)

undefined8 FUN_140763f46(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_94;
  undefined1 local_8c;
  undefined1 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar2 = *(uint *)(param_1 + 0x200);
  if (param_3 == -1) {
    uVar4 = 0xffffffff;
    if (uVar2 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x1f8) + -8 + (longlong)(int)uVar2 * 8) + 0x40) +
                1;
    }
  }
  else if ((int)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      if (param_3 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar5 * 8) + 0x40))
      break;
      uVar5 = uVar5 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 != uVar5);
  }
  local_d8 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_d8[4] = 0;
  *local_d8 = &PTR_FUN_149edb640;
  local_d8[1] = 0;
  local_d8[2] = DAT_14c98dec8;
  lVar3 = DAT_14c98ded0;
  local_d8[3] = DAT_14c98ded0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0;
  *local_d8 = &PTR_FUN_149ef0310;
  local_d8[4] = &PTR_LAB_149ef0320;
  *(int *)(local_d8 + 8) = param_3;
  local_80 = param_1 + 0x1e0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = (undefined4)uVar4;
  local_68 = 0;
  local_58 = 0;
  FUN_14076426e(param_2,&local_d8);
  FUN_1407640b6(&local_d8);
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407640b6 FUN_1407640b6 body=438 status=ok
// SIG undefined FUN_1407640b6(void)

void FUN_1407640b6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if ((int)param_1[0xc] == -1) {
      uVar6 = FUN_140a54e06();
      *(undefined4 *)(param_1 + 0xc) = uVar6;
    }
    else {
      FUN_145741b0a(param_1[0xb],param_1);
    }
    pcVar4 = (code *)param_1[0xe];
    if (pcVar4 != (code *)0x0) {
      local_34 = (undefined4)param_1[0xc];
      plVar8 = param_1 + 0x12;
      if ((longlong *)param_1[0x10] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[0x10];
      }
      local_40 = lVar3;
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,&local_40,&local_34);
    }
  }
  if (param_1[0xe] != 0) {
    plVar8 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  plVar8 = param_1 + 6;
  if ((int)param_1[7] != 0) {
    puVar5 = (undefined8 *)*plVar8;
    if (puVar5 == (undefined8 *)0x0) goto LAB_140764144;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar8,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar8 != 0) {
    FUN_1400020a8();
  }
LAB_140764144:
  plVar8 = (longlong *)param_1[2];
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
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076426e FUN_14076426e body=233 status=ok
// SIG undefined FUN_14076426e(void)

void FUN_14076426e(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_2 + 7) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x44);
  *(char *)((longlong)param_1 + 0x44) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x4c);
  *(char *)((longlong)param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x54);
  *(char *)((longlong)param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xb] = param_2[0xb];
  param_1[0xe] = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  uVar4 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar4;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  if (param_1[0xe] != 0) {
    param_2[0xe] = 0;
  }
  return;
}



// FUNCTION 140764358 FUN_140764358 body=197 status=ok
// SIG undefined FUN_140764358(void)

void FUN_140764358(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x510) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x518);
    if (plVar5 == (longlong *)0x0) goto LAB_140764391;
    *(undefined8 *)(param_1 + 0x518) = 0;
LAB_1407643c6:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_140764391;
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
    *(undefined8 *)(param_1 + 0x510) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x518);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x518) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_140764391;
      goto LAB_1407643c6;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_140764391;
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
LAB_140764391:
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
                    /* WARNING: Could not recover jumptable at 0x000140764419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14076441e FUN_14076441e body=243 status=ok
// SIG undefined FUN_14076441e(void)

void FUN_14076441e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_2 + 0x1a8);
  local_20 = *(longlong **)(param_2 + 0x1b0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  FUN_140764512(param_1 + 0x1e0,&local_28);
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  bVar3 = *(byte *)(param_1 + 0x38);
  *(byte *)(param_1 + 0x38) = bVar3 & 0xfb;
  if ((bVar3 != (bVar3 & 0xfb)) && (((bVar3 & 0xcc) != 0) != ((bVar3 & 200) != 0))) {
    cVar6 = FUN_1400d1184(param_1 + 0x18,param_1);
    if (cVar6 != '\0') {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      FUN_146932214(lVar4,(ulonglong)((*(uint *)(param_1 + 0x28) >> 0x10) * 0x18) +
                          *(longlong *)
                           (*(longlong *)(lVar4 + 0x10) + 0x10 +
                           (ulonglong)((*(uint *)(param_1 + 0x28) & 0xffff) << 6)));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140764512 FUN_140764512 body=344 status=ok
// SIG undefined FUN_140764512(void)

void FUN_140764512(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *puStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140764572:
    lVar7 = *param_2;
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140764572;
      LOCK();
      iVar2 = (int)plVar3[1];
      bVar9 = iVar5 == iVar2;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x18);
    lVar7 = *param_2;
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
  if (lVar8 != lVar7) {
    *(longlong *)(param_1 + 0x18) = *param_2;
    plVar3 = (longlong *)param_2[1];
    plVar6 = *(longlong **)(param_1 + 0x20);
    if (plVar6 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x20);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x20) = plVar3;
    }
    FUN_140163244(*(undefined8 *)(param_1 + 8),8);
    if ((*param_2 != 0) && (*param_2 != DAT_14c98dec8)) {
      lVar8 = *(longlong *)(param_1 + 8);
      puVar4 = *(undefined8 **)(lVar8 + 0x10);
      if (puVar4 == (undefined8 *)0x0) {
LAB_14076464d:
        local_48 = 0;
        puStack_40 = (undefined8 *)0x0;
        FUN_1407630f8();
      }
      else {
        iVar5 = *(int *)(puVar4 + 1);
        do {
          if (iVar5 == 0) goto LAB_14076464d;
          LOCK();
          iVar2 = *(int *)(puVar4 + 1);
          bVar9 = iVar5 == iVar2;
          if (bVar9) {
            *(int *)(puVar4 + 1) = iVar5 + 1;
            iVar2 = iVar5;
          }
          iVar5 = iVar2;
          UNLOCK();
        } while (!bVar9);
        local_48 = *(undefined8 *)(lVar8 + 8);
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
        puStack_40 = puVar4;
        FUN_1407630f8();
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
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140764680 FUN_140764680 body=520 status=ok
// SIG undefined FUN_140764680(void)

longlong *
FUN_140764680(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar5 = (longlong *)FUN_14001cc68(0x218,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f1fe90;
  plVar1 = plVar5 + 2;
  FUN_140a560dc(plVar1);
  plVar5[2] = (longlong)&PTR_FUN_149f1feb0;
  plVar5[0x3e] = (longlong)&PTR__purecall_149ef0700;
  plVar5[0x3f] = (longlong)plVar1;
  local_60 = (longlong *)0x149ef0748;
  local_58 = (longlong *)CONCAT35(local_58._5_3_,8);
  uVar4 = FUN_14001a6c0(&local_60,1);
  plVar5[0x40] = (ulonglong)uVar4;
  plVar5[0x3e] = (longlong)&PTR_LAB_149f200f0;
  plVar5[0x41] = 0;
  plVar5[0x42] = 0;
  *(byte *)(plVar5 + 8) = *(byte *)(plVar5 + 8) & 0xfe;
  local_60 = plVar1;
  local_58 = plVar5;
  FUN_14076488a(&local_60,plVar1);
  plVar1 = local_58;
  if (local_58 == (longlong *)0x0) {
    *param_1 = (longlong)local_60;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) goto LAB_1407647a8;
    param_1[1] = 0;
LAB_14076481a:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1407647a8;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_60;
    plVar5 = (longlong *)param_1[1];
    if (local_58 != plVar5) {
      param_1[1] = (longlong)local_58;
      if (plVar5 == (longlong *)0x0) goto LAB_1407647a8;
      goto LAB_14076481a;
    }
    LOCK();
    plVar5 = local_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1407647a8;
    (**(code **)*local_58)(local_58);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1407647a8:
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  local_68 = 0x208;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076488a FUN_14076488a body=162 status=ok
// SIG undefined FUN_14076488a(void)

void FUN_14076488a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1407648c9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1407648c9;
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
LAB_1407648c9:
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
                    /* WARNING: Could not recover jumptable at 0x000140764928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14076492c FUN_14076492c body=544 status=ok
// SIG undefined FUN_14076492c(void)

longlong *
FUN_14076492c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar6 = (longlong *)FUN_14001cc68(0x278,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149efdec0;
  plVar1 = plVar6 + 2;
  FUN_140a55f88(plVar1);
  plVar6[2] = (longlong)&PTR_FUN_149efdee0;
  bVar4 = *(byte *)(plVar6 + 9);
  *(byte *)(plVar6 + 9) = bVar4 & 0xfb;
  if (((bVar4 != (bVar4 & 0xfb)) && (((bVar4 & 0xcc) != 0) != ((bVar4 & 200) != 0))) &&
     (cVar5 = FUN_1400d1184(plVar6 + 5,plVar1), cVar5 != '\0')) {
    FUN_146932214(*(longlong *)(plVar6[5] + 0x10),
                  (ulonglong)((*(uint *)(plVar6 + 7) >> 0x10) * 0x18) +
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(plVar6[5] + 0x10) + 0x10) + 0x10 +
                   (ulonglong)((*(uint *)(plVar6 + 7) & 0xffff) << 6)));
  }
  *(byte *)(plVar6 + 8) = *(byte *)(plVar6 + 8) & 0xfe;
  local_50 = plVar1;
  local_48 = plVar6;
  FUN_140764b4e(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar6 = (longlong *)param_1[1];
    if (plVar6 == (longlong *)0x0) goto LAB_140764a0f;
    param_1[1] = 0;
LAB_140764ada:
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140764a0f;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar6 = (longlong *)param_1[1];
    if (local_48 != plVar6) {
      param_1[1] = (longlong)local_48;
      if (plVar6 == (longlong *)0x0) goto LAB_140764a0f;
      goto LAB_140764ada;
    }
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_140764a0f;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140764a0f:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x268;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140764b4e FUN_140764b4e body=162 status=ok
// SIG undefined FUN_140764b4e(void)

void FUN_140764b4e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140764b8d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140764b8d;
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
LAB_140764b8d:
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
                    /* WARNING: Could not recover jumptable at 0x000140764bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140764bf0 FUN_140764bf0 body=1405 status=ok
// SIG undefined FUN_140764bf0(void)

undefined8 * FUN_140764bf0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a55f88();
  FUN_1407651e0(param_1 + 0x4d);
  *param_1 = &PTR_FUN_149ef1020;
  param_1[0x4d] = &PTR_FUN_149ef1280;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0xbf800000bf800000;
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
  param_1[0x61] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
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
  param_1[0x66] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x6c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 1 | 0x80;
  *(byte *)((longlong)param_1 + 0x369) = *(byte *)((longlong)param_1 + 0x369) & 2;
  *(byte *)((longlong)param_1 + 0x36a) = *(byte *)((longlong)param_1 + 0x36a) & 0xf2;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 1;
  uVar2 = DAT_14c84635c;
  param_1[0x6e] = DAT_14c84635c;
  param_1[0x6f] = uVar2;
  param_1[0x70] = uVar2;
  param_1[0x71] = uVar2;
  param_1[0x72] = uVar2;
  param_1[0x73] = uVar2;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0x42080000bf800000;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x42c80000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(byte *)(param_1 + 0x89) = *(byte *)(param_1 + 0x89) & 0xf8 | 1;
  *(byte *)(param_1 + 0x8a) = *(byte *)(param_1 + 0x8a) & 0xfc;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  lVar4 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar4 == 0) {
    lVar4 = DAT_14c96b350;
  }
  local_60 = "Window";
  local_58 = 6;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  lVar4 = FUN_14076516e(lVar4,uVar3,0,0);
  param_1[0x93] = lVar4;
  param_1[0x94] = lVar4 + 0x1480;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0x19;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x80;
  *(undefined4 *)(puVar5 + 6) = 0xffffffff;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x7c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x9c) = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0xbf800000bf800000;
  puVar5[0x17] = 0xbf800000bf800000;
  puVar5[0x1b] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  *(undefined4 *)(puVar5 + 0x1c) = 0xffffffff;
  param_1[0xa4] = puVar5;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 2;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 2;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0xffffffffffffffff;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 1;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x80;
  param_1[0x57] = param_1;
  param_1[0x58] = puVar5;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076516e FUN_14076516e body=113 status=ok
// SIG undefined FUN_14076516e(void)

void FUN_14076516e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  lVar1 = (**(code **)(*param_1 + 0x98))(param_1,DAT_14c979ce0,local_28,param_4);
  if (lVar1 == 0) {
    FUN_14612e6ea();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407651e0 FUN_1407651e0 body=1915 status=ok
// SIG undefined FUN_1407651e0(void)

undefined8 * FUN_1407651e0(undefined8 *param_1)

{
  longlong **pplVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  byte bVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  bool bVar22;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_LAB_149eceb60;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar9 = (undefined8 *)FUN_14001cc68(0x1f8,0x10);
  puVar9[4] = 0;
  *(undefined4 *)(puVar9 + 5) = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000080;
  puVar9[0x3b] = 0;
  puVar9[0x3c] = 0x3200000000;
  *(undefined8 *)((longlong)puVar9 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x3c) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x44) = 0;
  puVar9[0x3d] = 0;
  puVar9[0x3e] = 0;
  param_1[9] = puVar9;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  iVar17 = DAT_14c967f50;
  iVar16 = DAT_14c967f28;
  DAT_14c967f70 = DAT_14c967f70 + 1;
  if (DAT_14c967f54 == 0) {
    iVar17 = DAT_14c967f28 + 1;
    bVar22 = DAT_14c967f2c == DAT_14c967f28;
    DAT_14c967f28 = iVar17;
    if (bVar22) {
      FUN_14482b872(&DAT_14c967f20,iVar16);
    }
    lVar19 = (longlong)iVar16;
    iVar17 = FUN_144a54ea4(&DAT_14c967f30,1);
    puVar13 = DAT_14c967f40;
    if (DAT_14c967f40 == (undefined *)0x0) {
      puVar13 = &DAT_14c967f30;
    }
    iVar15 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar15 = iVar17;
    }
    bVar6 = (byte)iVar17 & 0x1f;
    *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    lVar19 = (longlong)DAT_14c967f50;
    DAT_14c967f50 = *(int *)(DAT_14c967f20 + 4 + lVar19 * 0x18);
    DAT_14c967f54 = DAT_14c967f54 + -1;
    iVar16 = iVar17;
    if (DAT_14c967f54 != 0) {
      *(undefined4 *)(DAT_14c967f20 + (longlong)DAT_14c967f50 * 0x18) = 0xffffffff;
    }
  }
  puVar13 = &DAT_14c967f30;
  if (DAT_14c967f40 != (undefined *)0x0) {
    puVar13 = DAT_14c967f40;
  }
  iVar17 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar17 = iVar16;
  }
  *(uint *)(puVar13 + (longlong)(iVar17 >> 5) * 4) =
       *(uint *)(puVar13 + (longlong)(iVar17 >> 5) * 4) | 1 << ((byte)iVar16 & 0x1f);
  uVar11 = DAT_14c967f70;
  iVar17 = 1;
  puVar2 = (uint *)(DAT_14c967f20 + lVar19 * 0x18);
  *puVar2 = DAT_14c967f70;
  *(undefined8 **)(puVar2 + 2) = param_1;
  puVar2[4] = 0xffffffff;
  uVar18 = DAT_14c967f28 - DAT_14c967f54;
  if ((uVar18 != 0) && (uVar18 != 1)) {
    puVar13 = &DAT_14c967f58;
    if (DAT_14c967f60 != (undefined *)0x0) {
      puVar13 = DAT_14c967f60;
    }
    uVar4 = *(uint *)(puVar13 + (ulonglong)(DAT_14c967f68 - 1U & uVar11) * 4);
    while (uVar4 != 0xffffffff) {
      puVar3 = (uint *)(DAT_14c967f20 + (longlong)(int)uVar4 * 0x18);
      if (*puVar3 == uVar11) {
        uVar11 = puVar2[1];
        uVar18 = puVar2[2];
        uVar4 = puVar2[3];
        *puVar3 = *puVar2;
        puVar3[1] = uVar11;
        puVar3[2] = uVar18;
        puVar3[3] = uVar4;
        FUN_1402bc86e(&DAT_14c967f20,iVar16,1);
        goto LAB_14076540c;
      }
      uVar4 = puVar3[4];
    }
  }
  if (3 < uVar18) {
    uVar12 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar18 < 1) || (iVar17 <= DAT_14c967f68)) {
    uVar11 = DAT_14c967f68 - 1U & uVar11;
    puVar2[5] = uVar11;
    puVar13 = DAT_14c967f60;
    if (DAT_14c967f60 == (undefined *)0x0) {
      puVar13 = &DAT_14c967f58;
    }
    puVar2[4] = *(uint *)(puVar13 + ((longlong)DAT_14c967f68 - 1U & (longlong)(int)uVar11) * 4);
    puVar13 = DAT_14c967f60;
    if (DAT_14c967f60 == (undefined *)0x0) {
      puVar13 = &DAT_14c967f58;
    }
    *(int *)(puVar13 + ((longlong)DAT_14c967f68 - 1U & (longlong)(int)uVar11) * 4) = iVar16;
  }
  else {
    DAT_14c967f68 = iVar17;
    FUN_140768994();
  }
LAB_14076540c:
  uVar11 = DAT_14c967f70;
  uVar10 = FUN_14007026e(&DAT_14c967f20,DAT_14c967f70);
  param_1[0xd] = uVar10;
  *(uint *)(param_1 + 0xe) = uVar11;
  lVar19 = DAT_14c968098;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  local_70 = 3;
  *local_78 = (longlong)&PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar20 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar20 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar20;
  local_78[2] = lVar14;
  *local_78 = (longlong)&PTR_FUN_149ed0530;
  local_78[3] = (longlong)param_1;
  local_78[4] = (longlong)FUN_14032aac0;
  *(undefined4 *)(local_78 + 5) = 0;
  if ((local_78 == (longlong *)0x0) || (cVar8 = (**(code **)(*local_78 + 0x30))(), cVar8 == '\0')) {
    if (local_70 != 0) {
      if (local_78 == (longlong *)0x0) goto LAB_14076558d;
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      goto LAB_140765577;
    }
  }
  else {
    plVar21 = (longlong *)(lVar19 + 0xd8);
    if (*(int *)(lVar19 + 0xec) < 1) {
      iVar16 = *(int *)(lVar19 + 0xe0);
      iVar17 = *(int *)(lVar19 + 0xe8) + -1;
      *(int *)(lVar19 + 0xe8) = iVar17;
      if (iVar17 <= iVar16) {
        iVar17 = iVar16;
        if (0 < iVar16) {
          iVar15 = 0;
          do {
            if (((*(int *)(*plVar21 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                (plVar5 = *(longlong **)(*plVar21 + (longlong)iVar15 * 0x10),
                plVar5 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar5 + 0x28))(), cVar8 != '\0')) {
              FUN_14005b288(plVar21,iVar15);
              FUN_14005b248(plVar21);
            }
            else {
              iVar15 = iVar15 + 1;
            }
            iVar17 = *(int *)(lVar19 + 0xe0);
          } while (iVar15 < iVar17);
        }
        iVar15 = 2;
        if (2 < iVar17 * 2) {
          iVar15 = iVar17 * 2;
        }
        *(int *)(lVar19 + 0xe8) = iVar15;
        if ((iVar15 < iVar16) && (*(int *)(lVar19 + 0xe4) != iVar17)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x38))(local_78,local_68);
    }
    iVar16 = *(int *)(lVar19 + 0xe0);
    *(uint *)(lVar19 + 0xe0) = iVar16 + 1U;
    if (*(uint *)(lVar19 + 0xe4) < iVar16 + 1U) {
      FUN_1447a71f6(plVar21,iVar16);
    }
    lVar19 = *plVar21;
    lVar20 = (longlong)iVar16 * 0x10;
    *(undefined8 *)(lVar19 + lVar20) = 0;
    *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
    *(longlong **)(lVar19 + lVar20) = local_78;
    local_78 = (longlong *)0x0;
    *(int *)(lVar19 + 8 + lVar20) = local_70;
LAB_140765577:
    local_70 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14076558d:
  uVar7 = DAT_14c75ed24;
  iVar16 = DAT_14c75ed20;
  pplVar1 = (longlong **)(param_1 + 2);
  local_78 = (longlong *)FUN_14001cc68(0x80,0x10);
  lVar19 = param_1[0xe];
  *local_78 = param_1[0xd];
  local_78[1] = lVar19;
  local_78[6] = 0;
  *(undefined4 *)(local_78 + 7) = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)((longlong)local_78 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_78 + 0x54) = 0;
  *(undefined8 *)((longlong)local_78 + 0x44) = 0;
  *(undefined8 *)((longlong)local_78 + 0x4c) = 0;
  local_78[0xb] = -1;
  *(undefined4 *)(local_78 + 0xc) = 0;
  local_78[0xd] = 0;
  *(int *)(local_78 + 0xe) = iVar16;
  *(undefined4 *)((longlong)local_78 + 0x74) = uVar7;
  *(undefined4 *)(local_78 + 0xf) = 1000;
  if (iVar16 - 1000U < 0xfffffc1a) {
    *(undefined4 *)(local_78 + 0xe) = 0x40;
  }
  if (pplVar1 != &local_78) {
    plVar21 = *pplVar1;
    *pplVar1 = local_78;
    local_78 = (longlong *)0x0;
    FUN_14076595c(pplVar1,plVar21);
  }
  FUN_14076595c(&local_78,local_78);
  plVar21 = (longlong *)param_1[2];
  lVar20 = FUN_14001cc68(0x118,0x10);
  *(undefined8 *)(lVar20 + 0x100) = 0;
  *(undefined8 *)(lVar20 + 0x108) = 0x2000000000;
  *(longlong **)(lVar20 + 0x110) = plVar21;
  lVar19 = param_1[3];
  param_1[3] = lVar20;
  if (lVar19 != 0) {
    if (*(longlong *)(lVar19 + 0x100) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar19);
    plVar21 = *pplVar1;
  }
  lVar20 = FUN_14001cc68(0x120,0x10);
  *(undefined8 *)(lVar20 + 0x100) = 0;
  *(undefined8 *)(lVar20 + 0x108) = 0x2000000000;
  *(longlong **)(lVar20 + 0x110) = plVar21;
  *(undefined1 *)(lVar20 + 0x118) = 0;
  lVar19 = param_1[4];
  param_1[4] = lVar20;
  if (lVar19 != 0) {
    if (*(longlong *)(lVar19 + 0x100) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar19);
    plVar21 = *pplVar1;
  }
  lVar20 = FUN_14001cc68(0x340,0x10);
  *(undefined8 *)(lVar20 + 800) = 0;
  *(undefined8 *)(lVar20 + 0x328) = 0x6400000000;
  *(longlong **)(lVar20 + 0x330) = plVar21;
  *(undefined4 *)(lVar20 + 0x338) = DAT_14c967f78;
  *(undefined1 *)(lVar20 + 0x33c) = 0;
  lVar19 = param_1[5];
  param_1[5] = lVar20;
  if (lVar19 != 0) {
    if (*(longlong *)(lVar19 + 800) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar19);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14076595c FUN_14076595c body=64 status=ok
// SIG undefined FUN_14076595c(void)

void FUN_14076595c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14076599c(param_2 + 0x10);
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14076599c FUN_14076599c body=55 status=ok
// SIG undefined FUN_14076599c(void)

void FUN_14076599c(longlong *param_1)

{
  FUN_14032afc0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407659d4 FUN_1407659d4 body=7681 status=ok
// SIG undefined FUN_1407659d4(void)

void FUN_1407659d4(longlong *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_aa8 [32];
  longlong **local_a88;
  undefined8 local_a80;
  longlong *local_a70;
  longlong *local_a68;
  longlong *local_a60;
  undefined4 local_a58;
  undefined1 local_a54;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined1 local_a39;
  longlong local_a38;
  longlong *plStack_a30;
  longlong local_a18;
  longlong *plStack_a10;
  longlong *local_a08;
  longlong local_a00;
  longlong *local_9f8;
  undefined8 local_9e8;
  longlong *local_9e0;
  undefined8 local_9d8;
  longlong *local_9d0;
  undefined1 local_9c1;
  longlong local_9c0;
  longlong *local_9b8;
  undefined8 local_9a8;
  longlong *local_9a0;
  undefined2 local_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 local_980;
  longlong *local_978;
  undefined8 local_970;
  longlong *local_968;
  undefined1 local_959;
  undefined1 local_958 [16];
  undefined8 local_948;
  undefined8 uStack_940;
  undefined1 local_938;
  undefined8 local_930;
  undefined4 local_928;
  longlong local_920;
  longlong *local_918;
  longlong local_910;
  longlong *local_908;
  longlong local_900;
  longlong *local_8f8;
  longlong *local_8f0;
  longlong *local_8e8;
  longlong *local_8e0;
  longlong *local_8d8;
  undefined4 local_8d0;
  undefined1 local_8cc;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined1 local_8b8 [8];
  longlong *local_8b0;
  longlong local_8a8;
  longlong *plStack_8a0;
  undefined8 local_898;
  longlong *plStack_890;
  undefined4 local_888;
  longlong *local_880;
  undefined4 local_878;
  undefined1 local_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined2 local_850;
  undefined8 *local_848;
  ulonglong uStack_840;
  undefined8 local_838;
  longlong *local_830;
  char *local_828;
  undefined8 uStack_820;
  undefined4 local_818;
  undefined1 local_814;
  undefined8 *local_810;
  ulonglong uStack_808;
  undefined8 local_800;
  longlong *local_7f8;
  undefined8 local_7a8;
  longlong *local_7a0;
  undefined4 local_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined1 local_780;
  undefined1 local_778 [40];
  undefined8 local_750;
  longlong *local_748;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined1 local_728;
  undefined1 local_720 [40];
  longlong local_6f8;
  longlong *local_6f0;
  longlong local_6a0;
  longlong *local_698;
  undefined1 local_648;
  undefined1 uStack_647;
  undefined6 uStack_646;
  undefined8 local_640;
  longlong *plStack_638;
  undefined8 *local_618;
  int local_610;
  char local_604;
  char local_5fc;
  char local_5f4;
  undefined1 local_490;
  undefined1 uStack_48f;
  undefined6 uStack_48e;
  longlong *local_488;
  longlong *plStack_480;
  undefined8 *local_460;
  int local_458;
  char local_44c;
  char local_444;
  char local_43c;
  undefined8 local_3d0;
  longlong *plStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined2 local_360;
  undefined1 local_358 [304];
  longlong local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined2 local_1a8;
  undefined8 *local_1a0;
  int local_198;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_aa8;
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  local_218 = "DefaultForeground";
  uStack_210 = CONCAT35(uStack_210._5_3_,0x11);
  uVar7 = FUN_14001a6c0(&local_218,1);
  local_a88 = (longlong **)&DAT_14c98de74;
  local_a80 = 0;
  (**(code **)(*plVar9 + 0x40))(plVar9,&local_218,uVar7,0);
  local_818 = (undefined4)local_208;
  local_828 = local_218;
  uStack_820 = uStack_210;
  local_814 = 1;
  local_810 = (undefined8 *)0x0;
  uStack_808 = 0;
  FUN_140a5c8a2(param_1 + 0x4a,param_1,&local_828);
  if ((int)uStack_808 == 0) {
LAB_140765ab0:
    if (local_810 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_810 != (undefined8 *)0x0) {
    (**(code **)*local_810)(local_810,0);
    FUN_1446efa72(&local_810,0,0,0x10);
    uStack_808 = uStack_808 & 0xffffffff00000000;
    goto LAB_140765ab0;
  }
  FUN_1407679b0(&local_218);
  local_850 = CONCAT11(1,DAT_14c96b23c);
  local_1a8 = local_850;
  local_848 = (undefined8 *)0x0;
  uStack_840 = 0;
  if (local_198 == 0) {
LAB_140765b0a:
    if (local_1a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1a0 != (undefined8 *)0x0) {
    (**(code **)*local_1a0)(local_1a0,0);
    FUN_1446efa72(&local_1a0,0,0,0x10);
    local_198 = 0;
    goto LAB_140765b0a;
  }
  local_1a0 = (undefined8 *)0x0;
  local_198 = 0;
  if ((int)uStack_840 == 0) {
LAB_140765b48:
    if (local_848 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_848 != (undefined8 *)0x0) {
    (**(code **)*local_848)(local_848,0);
    FUN_1446efa72(&local_848,0,0,0x10);
    uStack_840 = uStack_840 & 0xffffffff00000000;
    goto LAB_140765b48;
  }
  local_a88 = (longlong **)&local_648;
  FUN_14076837c(&local_3d0,"SVerticalBox",".\\Runtime/SlateCore/Private/Widgets/SWindow.cpp",0x21e);
  FUN_14076784c(&local_3d0,&local_838,&local_218);
  plVar9 = plStack_3c8;
  if (plStack_3c8 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_3c8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_3c8)(plStack_3c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_141492598(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_218);
  plVar9 = (longlong *)param_1[2];
  if (plVar9 == (longlong *)0x0) {
LAB_140766527:
    local_8a8 = 0;
    plStack_8a0 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar8 = (int)plVar9[1];
    do {
      if (iVar8 == 0) goto LAB_140766527;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar15 = iVar8 == iVar5;
      if (bVar15) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar3 = param_1[1];
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar15 = false;
    local_8a8 = lVar3;
    plStack_8a0 = plVar9;
  }
  plVar9 = plStack_8a0;
  local_898 = 0;
  plStack_890 = (longlong *)0x0;
  local_888 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_880 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_878 = 0;
  local_870 = 0;
  local_868 = 0;
  uStack_860 = 0;
  if (!bVar15) {
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  plVar9 = plStack_890;
  local_898 = 0;
  if (plStack_890 != (longlong *)0x0) {
    plStack_890 = (longlong *)0x0;
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  local_888 = (**(code **)(*param_1 + 0x250))(param_1);
  plVar14 = local_880;
  plVar9 = (longlong *)param_1[0x66];
  if (local_880 != plVar9) {
    local_880 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  local_878 = (undefined4)param_1[0x67];
  local_870 = (undefined1)param_1[0x68];
  FUN_1413a4324(&local_868,param_1 + 0x69);
  (**(code **)(*DAT_14c968098 + 0x138))(DAT_14c968098,local_8b8,&local_8a8,param_1 + 0xc6);
  if ((*(byte *)(param_1 + 0x6d) & 1) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x42080000;
    FUN_140767c14(local_838,&local_218,0xffffffff);
    uVar11 = FUN_145aaf900(&uStack_210);
    FUN_140767a3e(uVar11,local_8b8);
    FUN_140767802(&local_218);
  }
  if ((char)param_1[0xc4] == '\0') {
    puVar10 = &DAT_14c96b23b;
    if (param_1[0xbc] == 0) {
      puVar10 = &DAT_14c96b23c;
    }
  }
  else {
    puVar10 = &DAT_14c96b23c;
  }
  uVar2 = *puVar10;
  *(undefined1 *)(param_1 + 0x9d) = uVar2;
  if ((longlong *)param_1[0x95] != (longlong *)0x0) {
    local_218._0_2_ = CONCAT11(1,uVar2);
    uStack_210 = 0;
    local_208 = 0;
    (**(code **)(*(longlong *)param_1[0x95] + 0x1c0))();
  }
  if ((longlong *)param_1[0x97] != (longlong *)0x0) {
    local_3d0._0_2_ = CONCAT11(1,(char)param_1[0x9d]);
    plStack_3c8 = (longlong *)0x0;
    local_3c0 = 0;
    (**(code **)(*(longlong *)param_1[0x97] + 0x1c0))();
  }
  if ((longlong *)param_1[0x99] != (longlong *)0x0) {
    local_648 = (undefined1)param_1[0x9d];
    uStack_647 = 1;
    local_640 = 0;
    plStack_638 = (longlong *)0x0;
    (**(code **)(*(longlong *)param_1[0x99] + 0x1c0))();
  }
  if ((longlong *)param_1[0x9b] != (longlong *)0x0) {
    local_490 = (undefined1)param_1[0x9d];
    uStack_48f = 1;
    local_488 = (longlong *)0x0;
    plStack_480 = (longlong *)0x0;
    (**(code **)(*(longlong *)param_1[0x9b] + 0x1c0))();
  }
  if ((*(int *)((longlong)param_1 + 0x304) == 0) || (*(int *)((longlong)param_1 + 0x304) == 5)) {
    bVar6 = *(byte *)((longlong)param_1 + 0x369);
    if (((bVar6 >> 1 | bVar6) & 1) == 0) {
      FUN_140767c14(local_838,&local_218,0xffffffff);
      local_8d0 = 0x3f800000;
      local_8cc = 1;
      local_8c8 = 0;
      uStack_8c0 = 0;
      plVar9 = (longlong *)FUN_140767d84(&uStack_210);
      param_1[0x8e] = *plVar9;
      FUN_140767a3e(plVar9,&DAT_14c98dec8);
      FUN_140767802(&local_218);
      local_648 = (undefined1)param_1[0x9d];
      uStack_647 = 1;
      local_640 = 0;
      plStack_638 = (longlong *)0x0;
      lVar3 = param_1[0x93];
      local_218 = *(char **)(lVar3 + 0x12c0);
      uStack_210 = *(undefined8 *)(lVar3 + 0x12c8);
      local_208._0_5_ = CONCAT14(1,*(undefined4 *)(lVar3 + 0x12d0));
      local_200 = 0;
      uStack_1f8 = 0;
      local_3d0 = (code *)param_1[0x94];
      plStack_3c8 = (longlong *)CONCAT71(plStack_3c8._1_7_,1);
      local_3c0 = 0;
      uStack_3b8 = 0;
      local_a88 = (longlong **)&local_648;
      (**(code **)(*DAT_14c968098 + 0x120))(DAT_14c968098,&local_490,&local_3d0,&local_218);
      plVar9 = local_488;
      lVar3 = CONCAT62(uStack_48e,CONCAT11(uStack_48f,local_490));
      if (local_488 == (longlong *)0x0) {
        param_1[0x95] = lVar3;
        plVar14 = (longlong *)param_1[0x96];
        if (plVar14 != (longlong *)0x0) {
          param_1[0x96] = 0;
LAB_140767706:
          LOCK();
          plVar9 = plVar14 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x000140766d41:
            if (iVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_488 + 1) = (int)local_488[1] + 1;
        UNLOCK();
        param_1[0x95] = lVar3;
        plVar14 = (longlong *)param_1[0x96];
        if (local_488 == plVar14) {
          LOCK();
          plVar14 = local_488 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_488)(local_488);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
            plVar14 = plVar9;
            goto joined_r0x000140766d41;
          }
        }
        else {
          param_1[0x96] = (longlong)local_488;
          if (plVar14 != (longlong *)0x0) goto LAB_140767706;
        }
      }
      plVar9 = local_488;
      if (local_488 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_488 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_488)(local_488);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_1449db362(&local_3c0);
      FUN_1449db362(&local_200);
      FUN_1449db362(&local_640);
      local_648 = (undefined1)param_1[0x9d];
      uStack_647 = 1;
      local_640 = 0;
      plStack_638 = (longlong *)0x0;
      lVar3 = param_1[0x93];
      local_218 = *(char **)(lVar3 + 0x1460);
      uStack_210 = *(undefined8 *)(lVar3 + 0x1468);
      local_208._0_5_ = CONCAT14(1,*(undefined4 *)(lVar3 + 0x1470));
      local_200 = 0;
      uStack_1f8 = 0;
      local_3d0 = (code *)(lVar3 + 0x13b0);
      plStack_3c8 = (longlong *)CONCAT71(plStack_3c8._1_7_,1);
      local_3c0 = 0;
      uStack_3b8 = 0;
      local_a88 = (longlong **)&local_648;
      (**(code **)(*DAT_14c968098 + 0x120))(DAT_14c968098,&local_490);
      plVar9 = local_488;
      lVar3 = CONCAT62(uStack_48e,CONCAT11(uStack_48f,local_490));
      if (local_488 == (longlong *)0x0) {
        param_1[0x97] = lVar3;
        plVar14 = (longlong *)param_1[0x98];
        if (plVar14 != (longlong *)0x0) {
          param_1[0x98] = 0;
LAB_14076773b:
          LOCK();
          plVar9 = plVar14 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x000140766d80:
            if (iVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_488 + 1) = (int)local_488[1] + 1;
        UNLOCK();
        param_1[0x97] = lVar3;
        plVar14 = (longlong *)param_1[0x98];
        if (local_488 == plVar14) {
          LOCK();
          plVar14 = local_488 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_488)(local_488);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
            plVar14 = plVar9;
            goto joined_r0x000140766d80;
          }
        }
        else {
          param_1[0x98] = (longlong)local_488;
          if (plVar14 != (longlong *)0x0) goto LAB_14076773b;
        }
      }
      plVar9 = local_488;
      if (local_488 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_488 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_488)(local_488);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_1449db362(&local_3c0);
      FUN_1449db362(&local_200);
      FUN_1449db362(&local_640);
      local_648 = (undefined1)param_1[0x9d];
      uStack_647 = 1;
      local_640 = 0;
      plStack_638 = (longlong *)0x0;
      lVar3 = param_1[0x93];
      local_218 = *(char **)(lVar3 + 0x1390);
      uStack_210 = *(undefined8 *)(lVar3 + 0x1398);
      local_208._0_5_ = CONCAT14(1,*(undefined4 *)(lVar3 + 0x13a0));
      local_200 = 0;
      uStack_1f8 = 0;
      local_3d0 = (code *)(lVar3 + 0x12e0);
      plStack_3c8 = (longlong *)CONCAT71(plStack_3c8._1_7_,1);
      local_3c0 = 0;
      uStack_3b8 = 0;
      local_a88 = (longlong **)&local_648;
      (**(code **)(*DAT_14c968098 + 0x120))(DAT_14c968098,&local_490);
      plVar9 = local_488;
      lVar3 = CONCAT62(uStack_48e,CONCAT11(uStack_48f,local_490));
      if (local_488 == (longlong *)0x0) {
        param_1[0x99] = lVar3;
        plVar14 = (longlong *)param_1[0x9a];
        if (plVar14 != (longlong *)0x0) {
          param_1[0x9a] = 0;
LAB_140767770:
          LOCK();
          plVar9 = plVar14 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x000140766dbf:
            if (iVar8 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_488 + 1) = (int)local_488[1] + 1;
        UNLOCK();
        param_1[0x99] = lVar3;
        plVar14 = (longlong *)param_1[0x9a];
        if (local_488 == plVar14) {
          LOCK();
          plVar14 = local_488 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_488)(local_488);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
            plVar14 = plVar9;
            goto joined_r0x000140766dbf;
          }
        }
        else {
          param_1[0x9a] = (longlong)local_488;
          if (plVar14 != (longlong *)0x0) goto LAB_140767770;
        }
      }
      plVar9 = local_488;
      if (local_488 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_488 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_488)(local_488);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_1449db362(&local_3c0);
      FUN_1449db362(&local_200);
      FUN_1449db362(&local_640);
      FUN_140a504fe(&local_218);
      FUN_140a4fdf2(&local_6a0,0);
      local_900 = param_1[0x95];
      local_a60 = (longlong *)param_1[0x96];
      if (local_a60 == (longlong *)0x0) {
        local_8f8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_a60 + 1) = (int)local_a60[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_a60 + 1) = (int)local_a60[1] + 1;
        UNLOCK();
        local_8f8 = local_a60;
      }
      uVar11 = FUN_140a4fd40(&local_6a0,&local_900);
      uVar11 = FUN_140a5058c(&local_218,uVar11);
      FUN_140a4fdf2(&local_6f8,0);
      local_910 = param_1[0x97];
      local_a68 = (longlong *)param_1[0x98];
      if (local_a68 == (longlong *)0x0) {
        local_908 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_a68 + 1) = (int)local_a68[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_a68 + 1) = (int)local_a68[1] + 1;
        UNLOCK();
        local_908 = local_a68;
      }
      uVar12 = FUN_140a4fd40(&local_6f8,&local_910);
      uVar11 = FUN_140a5058c(uVar11,uVar12);
      FUN_140a4fdf2(&local_750,0);
      local_3d0 = (code *)0x4000000040000000;
      plStack_3c8 = (longlong *)0x4000000040000000;
      local_3c0 = CONCAT71(local_3c0._1_7_,1);
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      local_728 = 1;
      local_738 = 0x40000000;
      uStack_734 = 0x40000000;
      uStack_730 = 0x40000000;
      uStack_72c = 0x40000000;
      FUN_144a450dc(local_720,&uStack_3b8);
      FUN_1449db362(&uStack_3b8);
      local_920 = param_1[0x99];
      local_a70 = (longlong *)param_1[0x9a];
      if (local_a70 == (longlong *)0x0) {
        local_918 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_a70 + 1) = (int)local_a70[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_a70 + 1) = (int)local_a70[1] + 1;
        UNLOCK();
        local_918 = local_a70;
      }
      uVar12 = FUN_140a4fd40(&local_750,&local_920);
      uVar11 = FUN_140a5058c(uVar11,uVar12);
      FUN_140a4fdf2(&local_7a8,0);
      local_959 = 0;
      local_3d0 = FUN_14697fe60;
      plStack_3c8 = (longlong *)((ulonglong)plStack_3c8 & 0xffffffff00000000);
      FUN_14698041e(local_958,param_1);
      local_948 = 0;
      uStack_940 = 0;
      local_938 = 1;
      local_930 = 0;
      local_928 = 0;
      FUN_140a58be0(&local_930,local_958);
      local_780 = local_938;
      local_790 = (undefined4)local_948;
      uStack_78c = local_948._4_4_;
      uStack_788 = (undefined4)uStack_940;
      uStack_784 = uStack_940._4_4_;
      FUN_144a450dc(local_778,&local_930);
      FUN_1449db362(&local_930);
      FUN_1407679b0(&local_3d0);
      local_998 = CONCAT11(1,(char)param_1[0x9d]);
      local_990 = 0;
      uStack_988 = 0;
      local_360 = local_998;
      FUN_144a450dc(local_358,&local_990);
      FUN_1449db362(&local_990);
      FUN_145aafb3e(&local_490);
      local_9a8 = local_838;
      local_9a0 = local_830;
      if (local_830 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_830 + 1) = (int)local_830[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_145aaf878(&local_490,&local_9a8);
      uVar12 = FUN_145aaf822(&local_3d0,uVar12);
      local_a88 = (longlong **)&local_9c1;
      FUN_14076837c(&local_9c0,"SVerticalBox",".\\Runtime/SlateCore/Private/Widgets/SWindow.cpp",
                    0x274);
      uVar13 = FUN_146980566(&local_9c0,param_1 + 0x9b);
      FUN_14076784c(uVar13,&local_980,uVar12);
      local_970 = local_980;
      local_968 = local_978;
      if (local_978 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_978 + 1) = (int)local_978[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_140a4fd40(&local_7a8,&local_970);
      uVar11 = FUN_140a5058c(uVar11,uVar12);
      FUN_140a4fdf2(&local_800,0);
      FUN_140767ac6(&local_648);
      plVar9 = (longlong *)param_1[2];
      if (plVar9 == (longlong *)0x0) {
LAB_1407671b4:
        local_a18 = 0;
        plStack_a10 = (longlong *)0x0;
      }
      else {
        iVar8 = (int)plVar9[1];
        do {
          if (iVar8 == 0) goto LAB_1407671b4;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar15 = iVar8 == iVar5;
          if (bVar15) {
            *(int *)(plVar9 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
        } while (!bVar15);
        local_a18 = param_1[1];
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar14 = plVar9 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        plStack_a10 = plVar9;
        if ((int)*plVar14 == 0) {
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
      local_a08 = &local_a18;
      FUN_140768704(&local_a00);
      if (local_9f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_9f8 + 1) = (int)local_9f8[1] + 1;
        UNLOCK();
      }
      plVar9 = (longlong *)param_1[0xbb];
      param_1[0xba] = local_a00;
      param_1[0xbb] = (longlong)local_9f8;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar9 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      FUN_140768190(&local_a00,&local_9e8,&local_648);
      local_9d8 = local_9e8;
      local_9d0 = local_9e0;
      if (local_9e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_9e0 + 1) = (int)local_9e0[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_140a4fd40(&local_800,&local_9d8);
      uVar11 = FUN_140a5058c(uVar11,uVar12);
      local_a88 = (longlong **)&local_a39;
      FUN_140a536a8(&local_a38,"SOverlay",".\\Runtime/SlateCore/Private/Widgets/SWindow.cpp",0x25c);
      if (plStack_a30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a30 + 1) = (int)plStack_a30[1] + 1;
        UNLOCK();
      }
      plVar9 = (longlong *)param_1[0xb9];
      param_1[0xb8] = local_a38;
      param_1[0xb9] = (longlong)plStack_a30;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar9 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      FUN_140a4ff16(&local_a38,&local_8f0,uVar11);
      local_8e0 = local_8f0;
      local_8d8 = local_8e8;
      if (local_8e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_8e8 + 1) = (int)local_8e8[1] + 1;
        UNLOCK();
      }
      FUN_140a58896(param_1 + 0x3c,&local_8e0);
      plVar9 = local_8d8;
      if (local_8d8 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_8d8 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_8d8)(local_8d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_8e8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_8e8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_8e8)(local_8e8);
          LOCK();
          piVar1 = (int *)((longlong)local_8e8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_8e8 + 0x10))(local_8e8);
          }
        }
      }
      plVar9 = plStack_a30;
      if (plStack_a30 != (longlong *)0x0) {
        LOCK();
        plVar14 = plStack_a30 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plStack_a30)(plStack_a30);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_9d0;
      if (local_9d0 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_9d0 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_9d0)(local_9d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_9e0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_9e0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_9e0)(local_9e0);
          LOCK();
          piVar1 = (int *)((longlong)local_9e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_9e0 + 0x10))(local_9e0);
          }
        }
      }
      if (local_9f8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_9f8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_9f8)(local_9f8);
          LOCK();
          piVar1 = (int *)((longlong)local_9f8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_9f8 + 0x10))(local_9f8);
          }
        }
      }
      plVar9 = plStack_a10;
      if (plStack_a10 != (longlong *)0x0) {
        LOCK();
        plVar14 = plStack_a10 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plStack_a10)(plStack_a10);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_1469805ec(&local_648);
      FUN_1415b5e50(&local_800);
      plVar9 = local_968;
      if (local_968 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_968 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_968)(local_968);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_978 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_978 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_978)(local_978);
          LOCK();
          piVar1 = (int *)((longlong)local_978 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_978 + 0x10))(local_978);
          }
        }
      }
      plVar9 = local_9b8;
      if (local_9b8 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_9b8 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_9b8)(local_9b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_9a0;
      if (local_9a0 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_9a0 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_9a0)(local_9a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      FUN_140767f30(&local_490);
      FUN_14149255e(&local_3d0);
      FUN_1449db362(local_958);
      FUN_1415b5e50(&local_7a8);
      plVar9 = local_918;
      if (local_918 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_918 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_918)(local_918);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_a70;
      if (local_a70 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_a70 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_a70)(local_a70);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a70 + 0x10))();
          }
        }
      }
      FUN_1415b5e50(&local_750);
      plVar9 = local_908;
      if (local_908 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_908 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_908)(local_908);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_a68;
      if (local_a68 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_a68 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_a68)(local_a68);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a68 + 0x10))();
          }
        }
      }
      FUN_1415b5e50(&local_6f8);
      plVar9 = local_8f8;
      if (local_8f8 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_8f8 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_8f8)(local_8f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = local_a60;
      if (local_a60 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_a60 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_a60)(local_a60);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a60 + 0x10))();
          }
        }
      }
      FUN_1415b5e50(&local_6a0);
      FUN_1415b5e16(&local_218);
      goto LAB_140766282;
    }
  }
  else {
    bVar6 = *(byte *)((longlong)param_1 + 0x369);
  }
  if (((bVar6 & 2) == 0 & (bVar6 ^ 1)) != 0) goto LAB_140766282;
  FUN_140767c14(local_838,&local_218,0xffffffff);
  local_a58 = 0x3f800000;
  local_a54 = 1;
  local_a50 = 0;
  uStack_a48 = 0;
  plVar9 = (longlong *)FUN_140767d84(&uStack_210);
  param_1[0x8e] = *plVar9;
  FUN_140767a3e(plVar9,&DAT_14c98dec8);
  FUN_140767802(&local_218);
  FUN_140a504fe(&local_218);
  FUN_140a4fdf2(&local_648,0);
  local_800 = local_838;
  local_7f8 = local_830;
  if (local_830 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_830 + 1) = (int)local_830[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fd40(&local_648,&local_800);
  uVar11 = FUN_140a5058c(&local_218,uVar11);
  FUN_140a4fdf2(&local_490,0);
  FUN_140767ac6(&local_3d0);
  plVar9 = (longlong *)param_1[2];
  if (plVar9 == (longlong *)0x0) {
LAB_14076653b:
    local_a38 = 0;
    plStack_a30 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar9[1];
    do {
      if (iVar8 == 0) goto LAB_14076653b;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar15 = iVar8 == iVar5;
      if (bVar15) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar15);
    local_a38 = param_1[1];
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    plStack_a30 = plVar9;
    if ((int)*plVar14 == 0) {
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
  local_8e0 = &local_a38;
  FUN_140768704(&local_6a0);
  if (local_698 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_698 + 1) = (int)local_698[1] + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)param_1[0xbb];
  param_1[0xba] = local_6a0;
  param_1[0xbb] = (longlong)local_698;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_140768190(&local_6a0,&local_a00,&local_3d0);
  local_9c0 = local_a00;
  local_9b8 = local_9f8;
  if (local_9f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_9f8 + 1) = (int)local_9f8[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fd40(&local_490,&local_9c0);
  uVar11 = FUN_140a5058c(uVar11,uVar12);
  local_a88 = &local_8f0;
  FUN_140a536a8(&local_6f8,"SOverlay",".\\Runtime/SlateCore/Private/Widgets/SWindow.cpp",0x290);
  if (local_6f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6f0 + 1) = (int)local_6f0[1] + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)param_1[0xb9];
  param_1[0xb8] = local_6f8;
  param_1[0xb9] = (longlong)local_6f0;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar9 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_140a4ff16(&local_6f8,&local_7a8,uVar11);
  local_750 = local_7a8;
  local_748 = local_7a0;
  if (local_7a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7a0 + 1) = (int)local_7a0[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x3c,&local_750);
  plVar9 = local_748;
  if (local_748 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_748 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_748)(local_748);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_7a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_7a0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_7a0)(local_7a0);
      LOCK();
      piVar1 = (int *)((longlong)local_7a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_7a0 + 0x10))(local_7a0);
      }
    }
  }
  if (local_6f0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_6f0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_6f0)(local_6f0);
      LOCK();
      piVar1 = (int *)((longlong)local_6f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_6f0 + 0x10))(local_6f0);
      }
    }
  }
  plVar9 = local_9b8;
  if (local_9b8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_9b8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_9b8)(local_9b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_9f8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_9f8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_9f8)(local_9f8);
      LOCK();
      piVar1 = (int *)((longlong)local_9f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_9f8 + 0x10))(local_9f8);
      }
    }
  }
  if (local_698 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_698 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_698)(local_698);
      LOCK();
      piVar1 = (int *)((longlong)local_698 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_698 + 0x10))(local_698);
      }
    }
  }
  plVar9 = plStack_a30;
  if (plStack_a30 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_a30 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_a30)(plStack_a30);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_1407677d6(local_228,local_220);
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_3d0);
  if (local_43c == '\x01') {
    local_43c = '\0';
  }
  if (local_444 == '\x01') {
    local_444 = '\0';
  }
  if (local_44c == '\x01') {
    local_44c = '\0';
  }
  if (local_458 == 0) {
LAB_14076618f:
    if (local_460 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_460 != (undefined8 *)0x0) {
    (**(code **)*local_460)(local_460,0);
    FUN_1446efa72(&local_460,0,0,0x10);
    local_458 = 0;
    goto LAB_14076618f;
  }
  plVar9 = plStack_480;
  if (plStack_480 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_480 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_480)(plStack_480);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  puVar4 = (undefined8 *)CONCAT62(uStack_48e,CONCAT11(uStack_48f,local_490));
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar9 = local_7f8;
  if (local_7f8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_7f8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_7f8)(local_7f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_5f4 == '\x01') {
    local_5f4 = '\0';
  }
  if (local_5fc == '\x01') {
    local_5fc = '\0';
  }
  if (local_604 == '\x01') {
    local_604 = '\0';
  }
  if (local_610 == 0) {
LAB_140766217:
    if (local_618 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_618 != (undefined8 *)0x0) {
    (**(code **)*local_618)(local_618,0);
    FUN_1446efa72(&local_618,0,0,0x10);
    local_610 = 0;
    goto LAB_140766217;
  }
  plVar9 = plStack_638;
  if (plStack_638 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_638 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_638)(plStack_638);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  puVar4 = (undefined8 *)CONCAT62(uStack_646,CONCAT11(uStack_647,local_648));
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_140a54e77(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_218);
LAB_140766282:
  if (local_8b0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_8b0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_8b0)(local_8b0);
      LOCK();
      piVar1 = (int *)((longlong)local_8b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_8b0 + 0x10))(local_8b0);
      }
    }
  }
  FUN_140767b54(&local_8a8);
  if (local_830 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_830 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_830)(local_830);
      LOCK();
      piVar1 = (int *)((longlong)local_830 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_830 + 0x10))(local_830);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_aa8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407677d6 FUN_1407677d6 body=43 status=ok
// SIG undefined FUN_1407677d6(void)

void FUN_1407677d6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146983860(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 140767802 FUN_140767802 body=74 status=ok
// SIG undefined FUN_140767802(void)

void FUN_140767802(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ef1b88;
  if (param_1[1] != 0) {
    if (*(int *)(param_1 + 0x1a) == -1) {
      FUN_140a50fb6();
    }
    else {
      FUN_146983a00(param_1[0x19],param_1 + 1);
    }
  }
  FUN_140767f30(param_1 + 1);
  return;
}



// FUNCTION 14076784c FUN_14076784c body=117 status=ok
// SIG undefined FUN_14076784c(void)

longlong * FUN_14076784c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140767932(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1407678c2 FUN_1407678c2 body=112 status=ok
// SIG undefined FUN_1407678c2(void)

byte FUN_1407678c2(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  
  plVar3 = DAT_14c968090;
  plVar1 = DAT_14c968088;
  if (DAT_14c968090 == (longlong *)0x0) {
    iVar5 = (**(code **)(*DAT_14c968088 + 200))();
  }
  else {
    LOCK();
    *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
    UNLOCK();
    iVar5 = (**(code **)(*plVar1 + 200))();
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
  bVar4 = 1;
  if (iVar5 != 0) {
    bVar4 = iVar5 == 1 ^ 3;
  }
  return bVar4;
}



// FUNCTION 140767932 FUN_140767932 body=125 status=ok
// SIG undefined FUN_140767932(void)

void FUN_140767932(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1b0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_1 + 0x204) < iVar1) {
    FUN_140a5356c(param_1 + 0x1f8);
    iVar1 = *(int *)(param_2 + 0x1b0);
  }
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x1a8);
    lVar2 = (longlong)iVar1 * 0xc0;
    do {
      FUN_140a50fb6(param_1 + 0x1e0,lVar3);
      lVar3 = lVar3 + 0xc0;
      lVar2 = lVar2 + -0xc0;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1407679b0 FUN_1407679b0 body=142 status=ok
// SIG undefined FUN_1407679b0(void)

longlong FUN_1407679b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1407679ed;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1407679ed:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140767a3e FUN_140767a3e body=136 status=ok
// SIG undefined FUN_140767a3e(void)

longlong FUN_140767a3e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000140767aa0;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000140767aa0:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 140767ac6 FUN_140767ac6 body=142 status=ok
// SIG undefined FUN_140767ac6(void)

longlong FUN_140767ac6(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140767b03;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140767b03:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140767b54 FUN_140767b54 body=191 status=ok
// SIG undefined FUN_140767b54(void)

void FUN_140767b54(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140767b73;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140767b73:
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140767c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140767c14 FUN_140767c14 body=226 status=ok
// SIG undefined FUN_140767c14(void)

undefined8 FUN_140767c14(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  *local_28 = &PTR_FUN_149edb640;
  local_28[1] = 0;
  local_28[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_28[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  *(undefined4 *)(local_28 + 8) = 1;
  *(undefined1 **)((longlong)local_28 + 0x44) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)local_28 + 0x4c) = 0;
  *local_28 = &PTR_FUN_149ef1b48;
  local_28[4] = &PTR_LAB_149ef1b50;
  FUN_140767cf8(param_2,&local_28,param_1 + 0x1e0,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140767cf8 FUN_140767cf8 body=140 status=ok
// SIG undefined FUN_140767cf8(void)

undefined8 *
FUN_140767cf8(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  param_1[1] = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xad) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_149ef1b88;
  param_1[0x19] = param_3;
  *(undefined4 *)(param_1 + 0x1a) = param_4;
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 140767d84 FUN_140767d84 body=426 status=ok
// SIG undefined FUN_140767d84(void)

longlong FUN_140767d84(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 *local_60;
  int local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = 1;
  local_68 = *param_2;
  local_64 = *(undefined1 *)(param_2 + 1);
  plVar1 = (longlong *)(param_2 + 2);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_140a52b3c(&local_60,plVar1);
  local_4c = *(undefined1 *)(param_2 + 1);
  local_50 = *param_2;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_140a52b3c(&local_48,plVar1);
  if (local_70 != (undefined4 *)(param_1 + 0x50)) {
    FUN_140a52676((undefined4 *)(param_1 + 0x50),local_70);
  }
  if (local_40 == 0) {
LAB_140767e1c:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_140767e1c;
  }
  if (local_58 == 0) {
LAB_140767e31:
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_140767e31;
  }
  if (param_2[4] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140767e55;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    param_2[4] = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140767e55:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140767f30 FUN_140767f30 body=607 status=ok
// SIG undefined FUN_140767f30(void)

void FUN_140767f30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = param_1 + 0x16;
  if ((int)param_1[0x17] == 0) {
LAB_140767f4d:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x17) = 0;
      goto LAB_140767f4d;
    }
  }
  plVar3 = param_1 + 0x13;
  if ((int)param_1[0x14] == 0) {
LAB_140767f6d:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_140767f6d;
    }
  }
  if ((char)param_1[0x11] == '\x01') {
    plVar3 = param_1 + 0xf;
    if ((int)param_1[0x10] == 0) {
LAB_140767f93:
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar4 = (undefined8 *)*plVar3;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(plVar3,0,0,0x10);
        *(undefined4 *)(param_1 + 0x10) = 0;
        goto LAB_140767f93;
      }
    }
    plVar3 = param_1 + 0xc;
    if ((int)param_1[0xd] == 0) {
LAB_140767fad:
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar4 = (undefined8 *)*plVar3;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(plVar3,0,0,0x10);
        *(undefined4 *)(param_1 + 0xd) = 0;
        goto LAB_140767fad;
      }
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  plVar3 = param_1 + 6;
  if ((int)param_1[7] != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140767fee;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140767fee:
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014076813a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)(puVar4,1);
  return;
}



// FUNCTION 140768190 FUN_140768190 body=492 status=ok
// SIG undefined FUN_140768190(void)

longlong * FUN_140768190(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  FUN_140a515e6(*param_1,param_3);
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)param_1[2];
  bVar9 = *(byte *)(lVar3 + 0x38);
  *(byte *)(lVar3 + 0x38) = bVar9 & 0xfb;
  if (((bVar9 != (bVar9 & 0xfb)) && (((bVar9 & 0xcc) != 0) != ((bVar9 & 200) != 0))) &&
     (cVar7 = FUN_1400d1184(lVar3 + 0x18,lVar3), cVar7 != '\0')) {
    lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10);
    FUN_146932214(lVar6,(ulonglong)((*(uint *)(lVar3 + 0x28) >> 0x10) * 0x18) +
                        *(longlong *)
                         (*(longlong *)(lVar6 + 0x10) + 0x10 +
                         (ulonglong)((*(uint *)(lVar3 + 0x28) & 0xffff) << 6)));
  }
  *(undefined8 *)(lVar3 + 0x208) = *puVar4;
  plVar5 = (longlong *)puVar4[1];
  plVar10 = *(longlong **)(lVar3 + 0x210);
  if (plVar10 != plVar5) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(lVar3 + 0x210);
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
    *(longlong **)(lVar3 + 0x210) = plVar5;
  }
  lVar6 = *(longlong *)(param_3 + 0x1a8);
  iVar2 = *(int *)(param_3 + 0x1b0);
  *(undefined8 *)(param_3 + 0x1a8) = 0;
  *(undefined8 *)(param_3 + 0x1b0) = 0;
  iVar11 = *(int *)(lVar3 + 0x200) + iVar2;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (*(int *)(lVar3 + 0x204) < iVar11) {
    FUN_1469859aa(lVar3 + 0x1f8);
  }
  if (iVar2 != 0) {
    lVar12 = (longlong)iVar2 * 200;
    lVar13 = lVar6;
    do {
      FUN_146985952(lVar3 + 0x1e0,lVar13);
      lVar13 = lVar13 + 200;
      lVar12 = lVar12 + -200;
    } while (lVar12 != 0);
  }
  FUN_1407677d6(lVar6,iVar2);
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  plVar5 = (longlong *)*param_1;
  bVar9 = *(byte *)(plVar5 + 6);
  if ((bVar9 & 0x10) == 0) {
    cVar7 = (**(code **)(*plVar5 + 0x220))(plVar5);
    bVar8 = cVar7 << 5;
    bVar9 = *(byte *)(plVar5 + 6);
  }
  else {
    bVar8 = 0x20;
  }
  *(byte *)(plVar5 + 6) = bVar9 & 0xdf | bVar8;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14076837c FUN_14076837c body=608 status=ok
// SIG undefined FUN_14076837c(void)

longlong *
FUN_14076837c(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  size_t sVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar5 = (longlong *)FUN_14001cc68(0x220,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149ef1c50;
  plVar10 = plVar5 + 2;
  FUN_1407685de(plVar10);
  local_40 = plVar10;
  local_38 = plVar5;
  FUN_140768662(&local_40,plVar10);
  plVar10 = local_38;
  if (local_38 == (longlong *)0x0) {
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 != (longlong *)0x0) {
      param_1[1] = 0;
LAB_140768570:
      LOCK();
      plVar10 = plVar5 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001407685a9:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_40;
    plVar5 = (longlong *)param_1[1];
    if (local_38 == plVar5) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar10;
        goto joined_r0x0001407685a9;
      }
    }
    else {
      param_1[1] = (longlong)local_38;
      if (plVar5 != (longlong *)0x0) goto LAB_140768570;
    }
  }
  plVar10 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar3 = *param_1;
  if (param_2 != (longlong *)0x0) {
    sVar6 = strlen((char *)param_2);
    uVar4 = (uint)sVar6;
    if (uVar4 != 0) {
      lVar9 = (longlong)(int)uVar4;
      plVar10 = (longlong *)((longlong)param_2 + lVar9 + -1);
      uVar8 = 0;
      if (plVar10 < param_2) {
        lVar14 = 0;
      }
      else {
        do {
          if (9 < (byte)((char)*plVar10 - 0x30U)) break;
          uVar8 = uVar8 + 1;
          plVar10 = (longlong *)((longlong)plVar10 + -1);
        } while (param_2 <= plVar10);
        if (uVar8 == 0 || (int)uVar4 <= (int)uVar8) {
LAB_14076849d:
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          if ((uVar8 < 0xb) &&
             (lVar11 = -(ulonglong)uVar8, *(char *)((longlong)param_2 + lVar11 + lVar9 + -1) == '_')
             ) {
            if ((uVar8 == 1) || (*(char *)((longlong)param_2 + lVar11 + lVar9) != '0')) {
              lVar13 = 0;
              do {
                lVar14 = (longlong)*(char *)((longlong)param_2 + lVar11 + lVar9) + lVar13 * 10;
                lVar13 = lVar14 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar13 < 0x7fffffff) {
                uVar4 = ~uVar8 + uVar4;
                lVar14 = lVar14 + -0x2f;
                goto LAB_1407684a0;
              }
            }
            goto LAB_14076849d;
          }
        }
LAB_1407684a0:
        if (uVar4 == 0) goto LAB_1407684f3;
      }
      local_38._0_5_ = (uint5)uVar4;
      local_40 = param_2;
      uVar4 = FUN_14001a6c0(&local_40,1);
      uVar12 = lVar14 << 0x20;
      uVar7 = (ulonglong)uVar4;
      goto LAB_1407684c3;
    }
  }
LAB_1407684f3:
  uVar7 = 0;
  uVar12 = 0;
LAB_1407684c3:
  *(ulonglong *)(lVar3 + 0x1d8) = uVar7 | uVar12;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1407685de FUN_1407685de body=131 status=ok
// SIG undefined FUN_1407685de(void)

undefined8 * FUN_1407685de(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  
  FUN_140a543ee(param_1,1);
  *param_1 = &PTR_FUN_149ef1c70;
  bVar1 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar2 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar2 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return param_1;
}



// FUNCTION 140768662 FUN_140768662 body=162 status=ok
// SIG undefined FUN_140768662(void)

void FUN_140768662(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1407686a1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1407686a1;
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
LAB_1407686a1:
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
                    /* WARNING: Could not recover jumptable at 0x000140768700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140768704 FUN_140768704 body=655 status=ok
// SIG undefined FUN_140768704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140768704(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar5 = (longlong *)FUN_14001cc68(0x228,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149ef1750;
  plVar7 = plVar5 + 2;
  FUN_140a560dc(plVar7);
  *plVar7 = (longlong)&PTR_FUN_149ef1770;
  plVar5[0x3e] = (longlong)&PTR__purecall_149ef0700;
  plVar5[0x3f] = (longlong)plVar7;
  local_50 = "Children";
  local_48 = 8;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  plVar5[0x40] = (ulonglong)uVar4;
  plVar5[0x3e] = (longlong)&PTR_LAB_149ef19b0;
  plVar5[0x41] = 0;
  plVar5[0x42] = 0;
  plVar5[0x43] = 0;
  plVar5[0x44] = 0;
  plVar7 = plVar5 + 2;
  if ((plVar7 == (longlong *)0x0) ||
     (((plVar5[3] != 0 && (plVar5[4] != 0)) && (0 < *(int *)(plVar5[4] + 8))))) {
    if (plVar5 == (longlong *)0x0) goto LAB_14076892e;
LAB_14076881b:
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar7;
    plVar7 = (longlong *)param_1[1];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) {
        bVar3 = false;
        goto LAB_140768969;
      }
    }
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar5[3] = (longlong)plVar7;
      if ((longlong *)plVar5[4] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar5[4] != (longlong *)0x0) {
          plVar8 = plVar5 + 4;
          plVar6 = (longlong *)plVar5[4];
          goto LAB_140768916;
        }
        plVar5[4] = (longlong)plVar5;
      }
LAB_140768811:
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_14076881b;
    }
    _DAT_00000018 = 0x10;
    plVar8 = (longlong *)&DAT_00000020;
    plVar6 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_140768916:
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      *plVar8 = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) goto LAB_140768811;
    }
LAB_14076892e:
    *param_1 = (longlong)plVar7;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_14076883e;
    param_1[1] = (longlong)plVar5;
    bVar3 = true;
LAB_140768969:
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (bVar3) goto LAB_14076883e;
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_14076883e:
  lVar2 = *param_1;
  local_50 = "SPopupLayer";
  local_48 = 0xb;
  local_44 = 0;
  uVar4 = FUN_14001a6c0(&local_50,1);
  *(ulonglong *)(lVar2 + 0x1d8) = (ulonglong)uVar4;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140768994 FUN_140768994 body=473 status=ok
// SIG undefined FUN_140768994(void)

void FUN_140768994(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c967f60 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c967f60,0,0,4);
  }
  uVar2 = DAT_14c967f68;
  uVar3 = local_50;
  if (DAT_14c967f68 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c967f58,0,DAT_14c967f68,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14c967f60;
        if (DAT_14c967f60 == (undefined *)0x0) {
          puVar6 = &DAT_14c967f58;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c967f68 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c967f30;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c967f48 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c967f20;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14c967f68 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x18);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c967f60;
        if (DAT_14c967f60 == (undefined *)0x0) {
          puVar6 = &DAT_14c967f58;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c967f68 - 1U & uVar9) * 4);
        puVar6 = DAT_14c967f60;
        if (DAT_14c967f60 == (undefined *)0x0) {
          puVar6 = &DAT_14c967f58;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c967f68 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140768b6e FUN_140768b6e body=1258 status=ok
// SIG undefined FUN_140768b6e(void)

void FUN_140768b6e(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = FUN_1447b4020();
  if (lVar9 == 0) goto LAB_140768c9d;
  lVar10 = FUN_1447b4020(param_1);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140768bc7;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140768bcc;
      goto LAB_140768c03;
    }
  }
  else {
LAB_140768bc7:
    if (iVar6 != 0x10) {
LAB_140768c03:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_140768bcc;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140768bcc;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_140768d5e;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14374dad0);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_140768d5e:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_140768dde;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_140768dde:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aadfff0;
        puVar17[0x15] = lVar10;
        *(char *)(puVar17 + 0x16) = (char)param_2;
        uVar4 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar17 + 0xb1) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar6 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar5 = 1;
          if ((char)uVar18 != '\x06') {
            uVar5 = uVar18;
          }
          uVar18 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aadffa0;
        local_68 = &LAB_14374f652;
        local_40 = lVar10;
        local_38 = (char)param_2;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateResourceImmediate",&DAT_14cb0ca38);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_140768c9d;
    }
  }
LAB_140768bcc:
  (*(code *)**(undefined8 **)(lVar10 + 0x60))(lVar10 + 0x60,&DAT_14ca85100,param_2);
LAB_140768c9d:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140769068 FUN_140769068 body=77 status=ok
// SIG undefined FUN_140769068(void)

undefined8 * FUN_140769068(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b302f20;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1407690b6 FUN_1407690b6 body=83 status=ok
// SIG undefined FUN_1407690b6(void)

undefined8 * FUN_1407690b6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44510;
  plVar3 = (longlong *)param_1[4];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14076910a FUN_14076910a body=25 status=ok
// SIG undefined FUN_14076910a(void)

void FUN_14076910a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014076911f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 140769124 FUN_140769124 body=56 status=ok
// SIG undefined FUN_140769124(void)

longlong FUN_140769124(longlong param_1,int param_2)

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



// FUNCTION 14076915c FUN_14076915c body=246 status=ok
// SIG undefined FUN_14076915c(void)

longlong * FUN_14076915c(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if ((((param_1[0x2c6] == 0) && (cVar6 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar6 == '\0'))
      && (cVar6 = FUN_140769252(param_1), cVar6 == '\0')) && (param_1[0x2c7] == 0)) {
    FUN_1407693d4(param_1,param_2);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    lVar5 = param_1[0x2cc];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = param_1[0x2cb];
      lVar9 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar9);
        if ((plVar4 != (longlong *)0x0) &&
           (lVar7 = (**(code **)(*plVar4 + 0x4b8))(plVar4), 0 < *(int *)(lVar7 + 8))) {
          puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x4b8))(plVar4);
          uVar1 = *(uint *)(puVar8 + 1);
          if (uVar1 != 0) {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + uVar1;
            if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
              FUN_14076a0ae(param_2,iVar2);
            }
            FUN_14076958e((longlong)iVar2 * 8 + *param_2,*puVar8,uVar1);
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar9);
    }
  }
  return param_2;
}



// FUNCTION 140769252 FUN_140769252 body=158 status=ok
// SIG undefined FUN_140769252(void)

undefined8 FUN_140769252(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar1 = DAT_14c868883;
  plVar3 = *(longlong **)(param_1 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_1401fa540();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1401fa540();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      lVar5 = 0;
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      goto LAB_1407692b0;
    }
  }
  lVar5 = 0;
LAB_1407692b0:
  if ((((param_1 != 0) && (cVar1 != '\0')) && (lVar5 != 0)) &&
     ((*(uint *)(param_1 + 8) & 0x40000000) == 0)) {
    uVar2 = FUN_1407692f0(param_1 + 0x1898,lVar5);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1407692f0 FUN_1407692f0 body=227 status=ok
// SIG undefined FUN_1407692f0(void)

undefined4 FUN_1407692f0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar7 = true;
  if (DAT_14c86a9f8 == '\x01') {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        uVar6 = 0;
        goto LAB_14076933c;
      }
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      bVar7 = DVar4 == DVar5;
    }
  }
  uVar6 = 0;
  if ((bVar7) && (*param_1 != 0)) {
    FUN_14076964e(param_2,&local_30);
    if (local_30 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1407695a6(local_30,param_1,param_2);
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
  }
LAB_14076933c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407693d4 FUN_1407693d4 body=441 status=ok
// SIG undefined FUN_1407693d4(void)

undefined8 * FUN_1407693d4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
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
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_14076955d;
    if (plVar3 == (longlong *)0x0) goto LAB_1407694a2;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14076955d:
    FUN_1456cec3c(plVar3);
  }
  if (DAT_14cb06da8 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1464003b0;
    local_48 = &LAB_147d17bdf;
    local_50 = &LAB_1417edf22;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
      == DAT_14cb06da8 + 0x30)) {
    puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0x4b8))(plVar3);
    *param_2 = 0;
    iVar1 = *(int *)(puVar2 + 1);
    _Src = (void *)*puVar2;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_147a14fc2(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_1407694a2:
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14076958e FUN_14076958e body=23 status=ok
// SIG undefined FUN_14076958e(void)

void FUN_14076958e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 1407695a6 FUN_1407695a6 body=167 status=ok
// SIG undefined FUN_1407695a6(void)

bool FUN_1407695a6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x20) == lVar1) {
          if (lVar5 != 0) {
            lVar5 = lVar5 + 8;
            goto LAB_14076962a;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar5 = FUN_14076a210();
  if (lVar5 == 0) {
    bVar3 = false;
  }
  else {
LAB_14076962a:
    bVar3 = 0 < *(int *)(lVar5 + 8);
  }
  return bVar3;
}



// FUNCTION 14076964e FUN_14076964e body=814 status=ok
// SIG undefined FUN_14076964e(void)

longlong * FUN_14076964e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  uint local_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_1 + 0x20) == 0) || (uVar4 = *(uint *)(param_1 + 0x1c), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0 ||
       (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x20))) ||
      (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 ||
       ((*(longlong *)(param_1 + 0x30) == 0 || (*(int *)(param_1 + 0x2c) == 0)))))))) {
LAB_1407697d6:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  uVar4 = *(uint *)(param_1 + 0x28);
  if (((int)uVar4 < 0) ||
     ((((DAT_14c9647dc <= (int)uVar4 ||
        (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0)) ||
       (*(int *)(lVar9 + 0x10) != *(int *)(param_1 + 0x2c))) ||
      (((*(uint *)(lVar9 + 8) & 0x10200000) != 0 || (lVar9 = FUN_14076997e(), lVar9 == 0))))))
  goto LAB_1407697d6;
  uStack_3c = 0;
  local_40 = *(uint *)(lVar9 + 0xc);
  if ((int)local_40 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((local_40 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar4 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    uVar7 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar7);
    }
    LOCK();
    uVar4 = *(uint *)(lVar9 + 0x10);
    bVar10 = uVar4 == 0;
    if (bVar10) {
      *(uint *)(lVar9 + 0x10) = uVar7;
      uVar4 = 0;
    }
    UNLOCK();
    if (bVar10) {
      uVar4 = uVar7;
    }
  }
  uStack_3c = uVar4;
  plVar5 = (longlong *)FUN_1407699b8(param_1 + 0x50,uVar4 ^ local_40);
  if (*plVar5 != 0) goto LAB_1407697a8;
  plVar6 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b3e70b0;
  plVar6[2] = *(longlong *)(param_1 + 0x1c);
  lVar9 = *(longlong *)(param_1 + 0x30);
  plVar6[3] = *(longlong *)(param_1 + 0x28);
  plVar6[4] = lVar9;
  plVar6[9] = 0;
  *(undefined4 *)(plVar6 + 10) = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x5c) = 0;
  plVar6[0xd] = 0;
  *(undefined4 *)(plVar6 + 0xe) = 0;
  *(undefined1 *)(plVar6 + 0x10) = 0;
  if (plVar6 == (longlong *)0x0) {
    *plVar5 = 0x10;
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) goto LAB_1407697a8;
    plVar5[1] = 0;
LAB_140769906:
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
    if (plVar6 == (longlong *)0x0) goto LAB_1407697a8;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)(plVar6 + 2);
    plVar8 = (longlong *)plVar5[1];
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar5[1] = (longlong)plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_140769906;
    }
  }
  LOCK();
  plVar8 = plVar6 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1407697a8:
  *param_2 = *plVar5;
  lVar9 = plVar5[1];
  param_2[1] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076997e FUN_14076997e body=57 status=ok
// SIG undefined FUN_14076997e(void)

void FUN_14076997e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58760 = FUN_140002ddd(FUN_1464c2118,uVar1,L"GbxActorPartState_Gestalt");
  }
  return;
}



// FUNCTION 1407699b8 FUN_1407699b8 body=1679 status=ok
// SIG undefined FUN_1407699b8(void)

longlong FUN_1407699b8(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  uint *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar27 = (int)param_1[1];
  if (iVar27 != *(int *)((longlong)param_1 + 0x34)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar27 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar27 != -1) {
      lVar14 = *param_1;
      do {
        local_58 = *param_3;
        lVar29 = (longlong)iVar27 * 0x20;
        local_50 = *(undefined8 *)(lVar14 + lVar29);
        cVar10 = FUN_14076a048(&local_50,&local_58);
        lVar14 = *param_1;
        if (cVar10 != '\0') {
          if (lVar14 + lVar29 != 0) {
            lVar14 = lVar14 + lVar29;
            goto LAB_140769dd5;
          }
          break;
        }
        iVar27 = *(int *)(lVar14 + 0x18 + lVar29);
      } while (iVar27 != -1);
    }
    iVar27 = *(int *)((longlong)param_1 + 0x34);
  }
  if (iVar27 == 0) {
    uVar20 = *(uint *)(param_1 + 1);
    uVar15 = (ulonglong)uVar20;
    *(uint *)(param_1 + 1) = uVar20 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar20) {
      FUN_1447711aa(param_1,uVar20);
    }
    iVar27 = (int)param_1[5];
    if (iVar27 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar11 = iVar27 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar28 = iVar27 + 1;
    iVar17 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar17 = iVar27;
    }
    if (iVar17 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar28;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar27) {
        if (iVar27 + 0x20U < 0xa0) {
          iVar28 = 0x80;
          iVar11 = iVar27;
        }
        else {
          uVar12 = iVar27 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar12) {
              uVar18 = uVar12;
            }
          }
          else {
            uVar18 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar25 = FUN_144a3809e(uVar18 << 2,0);
          iVar11 = (int)(uVar25 >> 2);
          iVar28 = -0x20;
          if ((int)uVar12 <= iVar11) {
            iVar28 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar28;
        FUN_1446efbd8(plVar13,iVar11);
        iVar28 = (int)param_1[5] + 1;
      }
      iVar11 = iVar28 + 0x1f;
      if (-1 < iVar28) {
        iVar11 = iVar28;
      }
      *(int *)(param_1 + 5) = iVar28;
      if (iVar28 % 0x20 != 0) {
        plVar24 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar24 = plVar13;
        }
        bVar16 = -(char)(iVar28 % 0x20);
        *(uint *)((longlong)plVar24 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar24 + (longlong)(iVar11 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)(int)uVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar27 & 0x1f;
    puVar19 = (uint *)((longlong)plVar13 + (longlong)(iVar17 >> 5) * 4);
    *puVar19 = *puVar19 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    uVar15 = (ulonglong)*(uint *)(param_1 + 6);
    lVar14 = (longlong)(int)*(uint *)(param_1 + 6);
    iVar11 = *(int *)(*param_1 + 4 + lVar14 * 0x20);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar27 + -1;
    if (iVar27 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x20) = 0xffffffff;
    }
  }
  local_60 = (uint *)(param_1 + 2);
  iVar27 = (int)uVar15;
  puVar19 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar19 = local_60;
  }
  iVar11 = iVar27 + 0x1f;
  if (-1 < iVar27) {
    iVar11 = iVar27;
  }
  puVar19[iVar11 >> 5] = puVar19[iVar11 >> 5] | 1 << ((byte)uVar15 & 0x1f);
  uVar20 = 1;
  lVar29 = *param_1;
  lVar14 = lVar14 * 0x20;
  puVar2 = (undefined4 *)(lVar29 + lVar14);
  uVar5 = *param_3;
  *(undefined8 *)(lVar29 + lVar14) = uVar5;
  puVar4 = (undefined8 *)(lVar29 + 8 + lVar14);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar29 + 0x18 + lVar14) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar12) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar27 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar27 != -1) {
      lVar14 = *param_1;
      local_68 = uVar15;
      do {
        lVar29 = (longlong)iVar27 * 0x20;
        local_50 = *(undefined8 *)(lVar14 + lVar29);
        local_58 = uVar5;
        cVar10 = FUN_1403d434c(&local_50,&local_58);
        lVar14 = *param_1;
        if (cVar10 != '\0') {
          puVar3 = (undefined4 *)(lVar14 + lVar29);
          plVar13 = *(longlong **)(lVar14 + 0x10 + lVar29);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar24 = plVar13 + 1;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)*plVar24 == 0) {
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
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          iVar27 = (int)local_68;
          FUN_1487be512(param_1,local_68 & 0xffffffff);
          goto LAB_140769e41;
        }
        iVar27 = *(int *)(lVar14 + 0x18 + lVar29);
      } while (iVar27 != -1);
      uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      uVar15 = local_68;
    }
  }
  iVar27 = (int)uVar15;
  if (3 < uVar12) {
    uVar15 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar20 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar2[7] = param_2;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4)
    ;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar27;
    goto LAB_140769e41;
  }
  *(uint *)(param_1 + 9) = uVar20;
  plVar13 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar13,0,0,4);
    uVar20 = *(uint *)(param_1 + 9);
  }
  puVar19 = local_60;
  plVar24 = param_1 + 7;
  if (uVar20 == 1) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
LAB_140769bf1:
    uVar12 = 0;
    do {
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar24;
      }
      *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4) =
           0xffffffff;
      uVar12 = uVar12 + 1;
    } while (uVar20 != uVar12);
  }
  else {
    if (uVar20 == 0) goto LAB_140769e41;
    FUN_1446efa72(plVar13,0,uVar20,4);
    if (0 < (int)uVar20) goto LAB_140769bf1;
  }
  iVar11 = (int)param_1[5];
  if (iVar11 == 0) {
    uVar15 = 0;
    uVar25 = 1;
    iVar28 = 0;
    iVar17 = 0;
  }
  else {
    puVar23 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar23 = puVar19;
    }
    uVar20 = *puVar23;
    if (uVar20 == 0) {
      iVar28 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar28 = iVar11 + -1;
      }
      uVar15 = 0;
      uVar25 = (ulonglong)(uint)(iVar28 >> 5);
      if (iVar28 >> 5 < 1) {
        uVar25 = uVar15;
      }
      iVar17 = 0;
      do {
        if (uVar25 == uVar15) goto LAB_140769e41;
        iVar17 = iVar17 + 0x20;
        uVar20 = puVar23[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar15 = 0;
      iVar17 = 0;
    }
    uVar25 = (ulonglong)(-uVar20 & uVar20);
    uVar26 = uVar25 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar28 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar28) {
      iVar28 = iVar11;
    }
  }
  if (iVar28 < iVar11) {
    uVar20 = 0xffffffff;
    do {
      lVar14 = *param_1;
      lVar29 = (longlong)iVar28 * 0x20;
      uVar26 = (longlong)
               (int)((uint)((ulonglong)*(undefined8 *)(lVar14 + lVar29) >> 0x20) ^
                    (uint)*(undefined8 *)(lVar14 + lVar29)) & (longlong)(int)param_1[9] - 1U;
      iVar11 = (int)uVar26;
      *(int *)(lVar14 + 0x1c + lVar29) = iVar11;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar24;
      }
      *(undefined4 *)(lVar14 + 0x18 + lVar29) =
           *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar26) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar24;
      }
      *(int *)((longlong)plVar13 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) = iVar28
      ;
      uVar20 = ~(uint)uVar25 & uVar20;
      puVar23 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar23 = puVar19;
      }
      iVar11 = (int)param_1[5];
      iVar28 = (int)uVar15;
      lVar14 = (longlong)iVar28;
      uVar12 = puVar23[lVar14] & uVar20;
      if (uVar12 == 0) {
        iVar21 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar21 = iVar11 + -1;
        }
        iVar21 = iVar21 >> 5;
        iVar22 = iVar21;
        if (iVar21 < iVar28) {
          iVar22 = iVar28;
        }
        if (iVar21 <= iVar28) break;
        lVar29 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar12 = puVar23[lVar14 + lVar29 + 1];
          if (uVar12 != 0) break;
          lVar29 = lVar29 + 1;
          if (iVar22 - lVar14 == lVar29) goto LAB_140769e41;
        }
        uVar15 = (ulonglong)(iVar28 + (int)lVar29 + 1);
        uVar20 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar12 & uVar12);
      uVar26 = uVar25 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar28 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar28 < iVar11);
  }
LAB_140769e41:
  lVar14 = *param_1 + (longlong)iVar27 * 0x20;
LAB_140769dd5:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar14 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076a048 FUN_14076a048 body=102 status=ok
// SIG undefined FUN_14076a048(void)

ulonglong FUN_14076a048(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 14076a0ae FUN_14076a0ae body=353 status=ok
// SIG undefined FUN_14076a0ae(void)

void FUN_14076a0ae(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14076a133;
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
LAB_14076a133:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14076a210 FUN_14076a210 body=2210 status=ok
// SIG undefined FUN_14076a210(void)

longlong * FUN_14076a210(longlong param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined ***pppuVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  undefined ***pppuVar30;
  int iVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined1 *puVar36;
  bool bVar37;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [256];
  undefined1 *local_98;
  undefined8 local_90;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_98 = (undefined1 *)0x0;
  local_90 = 0x2000000000;
  lVar16 = *(longlong *)(param_3 + 0x40);
  if (lVar16 != 0) {
    local_58 = lVar16 + 0x18;
    local_88 = FUN_143c9965a;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b3e70d0;
    local_50 = local_198;
    local_60 = param_2;
    uVar14 = FUN_1408c3c54();
    plVar15 = (longlong *)FUN_1403566f4(lVar16,uVar14);
    if ((longlong)(int)plVar15[1] == 0) {
      pppuVar18 = (undefined ***)0x0;
    }
    else {
      plVar33 = (longlong *)*plVar15;
      plVar15 = plVar33 + (int)plVar15[1];
      do {
        plVar5 = (longlong *)*plVar33;
        if (plVar5 != (longlong *)0x0) {
          lVar16 = (**(code **)(*plVar5 + 8))(plVar5);
          lVar17 = FUN_1408c3c54();
          pcVar10 = local_88;
          if (((lVar17 != 0) && (*(int *)(lVar17 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
              lVar17 + 0x30)) {
            pppuVar18 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar18 = &local_68;
            }
            uVar14 = (*(code *)(*pppuVar18)[1])();
            cVar11 = (*pcVar10)(uVar14,plVar5);
            if (cVar11 == '\0') break;
          }
        }
        plVar33 = plVar33 + 1;
      } while (plVar33 != plVar15);
      pppuVar18 = local_78;
      if (local_88 == (code *)0x0) goto LAB_14076a351;
    }
    pppuVar30 = &local_68;
    if (pppuVar18 != (undefined ***)0x0) {
      pppuVar30 = pppuVar18;
    }
    (*(code *)(*pppuVar30)[2])(pppuVar30);
  }
LAB_14076a351:
  plVar15 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar25 = *(uint *)(param_1 + 0x20);
    uVar20 = (ulonglong)uVar25;
    *(uint *)(param_1 + 0x20) = uVar25 + 1;
    if (*(uint *)(param_1 + 0x24) == uVar25) {
      FUN_1447711aa(plVar15,uVar25);
    }
    iVar29 = *(int *)(param_1 + 0x40);
    if (iVar29 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar29 + 0x1e;
      if (-1 < iVar29 + -1) {
        iVar12 = iVar29 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    lVar17 = param_1 + 0x28;
    iVar31 = iVar29 + 1;
    iVar22 = iVar29 + 0x1f;
    if (-1 < iVar29) {
      iVar22 = iVar29;
    }
    if (iVar22 >> 5 == iVar12) {
      *(int *)(param_1 + 0x40) = iVar31;
    }
    else {
      if (*(int *)(param_1 + 0x44) <= iVar29) {
        if (iVar29 + 0x20U < 0xa0) {
          iVar31 = 0x80;
          iVar12 = iVar29;
        }
        else {
          uVar13 = iVar29 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x44) + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar13) {
              uVar24 = uVar13;
            }
          }
          else {
            uVar24 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar19 = FUN_144a3809e(uVar24 << 2,0);
          iVar12 = (int)(uVar19 >> 2);
          iVar31 = -0x20;
          if ((int)uVar13 <= iVar12) {
            iVar31 = iVar12 << 5;
          }
          iVar12 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x44) = iVar31;
        FUN_1446efbd8(lVar17,iVar12);
        iVar31 = *(int *)(param_1 + 0x40) + 1;
      }
      iVar12 = iVar31 + 0x1f;
      if (-1 < iVar31) {
        iVar12 = iVar31;
      }
      *(int *)(param_1 + 0x40) = iVar31;
      if (iVar31 % 0x20 != 0) {
        lVar16 = *(longlong *)(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar16 = lVar17;
        }
        bVar21 = -(char)(iVar31 % 0x20);
        *(uint *)(lVar16 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)(lVar16 + (longlong)(iVar12 >> 5) * 4) << (bVar21 & 0x1f)) >>
             (bVar21 & 0x1f);
      }
    }
    lVar16 = (longlong)(int)uVar25;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x38);
    }
    bVar21 = (byte)iVar29 & 0x1f;
    puVar1 = (uint *)(lVar17 + (longlong)(iVar22 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
  }
  else {
    uVar20 = (ulonglong)*(uint *)(param_1 + 0x48);
    lVar16 = (longlong)(int)*(uint *)(param_1 + 0x48);
    iVar29 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar16 * 0x20);
    *(int *)(param_1 + 0x48) = iVar29;
    iVar12 = *(int *)(param_1 + 0x4c) + -1;
    *(int *)(param_1 + 0x4c) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar29 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 0x28);
  iVar29 = (int)uVar20;
  puVar23 = *(uint **)(param_1 + 0x38);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    puVar23 = puVar1;
  }
  iVar12 = iVar29 + 0x1f;
  if (-1 < iVar29) {
    iVar12 = iVar29;
  }
  puVar23[iVar12 >> 5] = puVar23[iVar12 >> 5] | 1 << ((byte)uVar20 & 0x1f);
  uVar25 = 1;
  lVar17 = *(longlong *)(param_1 + 0x18);
  lVar16 = lVar16 * 0x20;
  puVar2 = (undefined4 *)(lVar17 + lVar16);
  lVar34 = *param_2;
  *(longlong *)(lVar17 + lVar16) = lVar34;
  puVar4 = (undefined8 *)(lVar17 + 8 + lVar16);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar17 + 0x18 + lVar16) = 0xffffffff;
  uVar13 = (uint)((ulonglong)lVar34 >> 0x10);
  uVar24 = (uint)lVar34 & 0xffff;
  uVar13 = ((uint)lVar34 << 0x10 | uVar24) + (int)((ulonglong)lVar34 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar24 >> 4);
  uVar24 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
  if (1 < uVar24) {
    lVar16 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x58);
    }
    iVar12 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar13) * 4);
    if (iVar12 != -1) {
      do {
        puVar3 = (undefined4 *)(*plVar15 + (longlong)iVar12 * 0x20);
        if (*(longlong *)(*plVar15 + (longlong)iVar12 * 0x20) == lVar34) {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_1487beb2e(plVar15,uVar20);
          iVar29 = iVar12;
          goto LAB_14076a7f3;
        }
        iVar12 = puVar3[6];
      } while (iVar12 != -1);
    }
  }
  if (3 < uVar24) {
    uVar19 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar25 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar24 < 1) || ((int)uVar25 <= *(int *)(param_1 + 0x60))) {
    uVar13 = *(int *)(param_1 + 0x60) - 1U & uVar13;
    puVar2[7] = uVar13;
    lVar16 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar16 = param_1 + 0x50;
    }
    puVar2[6] = *(undefined4 *)
                 (lVar16 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar13) * 4);
    lVar16 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar16 = param_1 + 0x50;
    }
    *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)(int)uVar13) * 4) =
         iVar29;
    goto LAB_14076a7f3;
  }
  *(uint *)(param_1 + 0x60) = uVar25;
  plVar33 = (longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1446efa72(plVar33,0,0,4);
    uVar25 = *(uint *)(param_1 + 0x60);
  }
  lVar16 = param_1 + 0x50;
  if (uVar25 == 1) {
    if (*plVar33 != 0) {
      FUN_1446efa72(plVar33,0,0,4);
    }
LAB_14076a4b9:
    uVar13 = 0;
    do {
      lVar17 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar17 = lVar16;
      }
      *(undefined4 *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x60) + 0x7fffffffU & uVar13) * 4) =
           0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar25 != uVar13);
  }
  else {
    if (uVar25 == 0) goto LAB_14076a7f3;
    FUN_1446efa72(plVar33,0,uVar25,4);
    if (0 < (int)uVar25) goto LAB_14076a4b9;
  }
  iVar12 = *(int *)(param_1 + 0x40);
  if (iVar12 == 0) {
    uVar19 = 0;
    uVar28 = 1;
    iVar31 = 0;
    iVar22 = 0;
  }
  else {
    puVar23 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar23 = puVar1;
    }
    uVar25 = *puVar23;
    if (uVar25 == 0) {
      iVar31 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar31 = iVar12 + -1;
      }
      uVar19 = 0;
      uVar28 = (ulonglong)(uint)(iVar31 >> 5);
      if (iVar31 >> 5 < 1) {
        uVar28 = uVar19;
      }
      iVar22 = 0;
      do {
        if (uVar28 == uVar19) goto LAB_14076a7f3;
        iVar22 = iVar22 + 0x20;
        uVar25 = puVar23[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar19 = 0;
      iVar22 = 0;
    }
    uVar28 = (ulonglong)(-uVar25 & uVar25);
    uVar35 = uVar28 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar31 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar31) {
      iVar31 = iVar12;
    }
  }
  if (iVar31 < iVar12) {
    uVar25 = 0xffffffff;
    do {
      lVar17 = *(longlong *)(param_1 + 0x18);
      lVar32 = (longlong)iVar31 * 0x20;
      uVar14 = *(undefined8 *)(lVar17 + lVar32);
      uVar13 = (uint)((ulonglong)uVar14 >> 0x10);
      uVar24 = (uint)uVar14 & 0xffff;
      uVar35 = (longlong)
               (int)(((uint)uVar14 << 0x10 | uVar24) + (int)((ulonglong)uVar14 >> 0x20) +
                     (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar24 >> 4)) &
               (longlong)*(int *)(param_1 + 0x60) - 1U;
      iVar12 = (int)uVar35;
      *(int *)(lVar17 + 0x1c + lVar32) = iVar12;
      lVar34 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar34 = lVar16;
      }
      *(undefined4 *)(lVar17 + 0x18 + lVar32) =
           *(undefined4 *)(lVar34 + ((longlong)*(int *)(param_1 + 0x60) - 1U & uVar35) * 4);
      lVar17 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar17 = lVar16;
      }
      *(int *)(lVar17 + ((longlong)iVar12 & (longlong)*(int *)(param_1 + 0x60) - 1U) * 4) = iVar31;
      uVar25 = ~(uint)uVar28 & uVar25;
      puVar23 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar23 = puVar1;
      }
      iVar12 = *(int *)(param_1 + 0x40);
      iVar31 = (int)uVar19;
      lVar17 = (longlong)iVar31;
      uVar13 = puVar23[lVar17] & uVar25;
      local_1a8 = uVar20;
      local_1a0 = plVar15;
      if (uVar13 == 0) {
        iVar26 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar26 = iVar12 + -1;
        }
        iVar26 = iVar26 >> 5;
        iVar27 = iVar26;
        if (iVar26 < iVar31) {
          iVar27 = iVar31;
        }
        if (iVar26 <= iVar31) break;
        lVar34 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar13 = puVar23[lVar17 + lVar34 + 1];
          if (uVar13 != 0) break;
          lVar34 = lVar34 + 1;
          if (iVar27 - lVar17 == lVar34) goto LAB_14076a7f3;
        }
        uVar19 = (ulonglong)(iVar31 + (int)lVar34 + 1);
        uVar25 = 0xffffffff;
      }
      uVar28 = (ulonglong)(-uVar13 & uVar13);
      uVar35 = uVar28 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar31 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar31 < iVar12);
  }
LAB_14076a7f3:
  lVar16 = *plVar15 + (longlong)iVar29 * 0x20;
  plVar15 = (longlong *)(lVar16 + 8);
  puVar36 = local_98;
  if (local_98 == (undefined1 *)0x0) {
    puVar36 = local_198;
  }
  lVar17 = (longlong)(int)local_90;
  if (lVar17 != 0) {
    lVar34 = 0;
    do {
      uVar25 = 0;
      iVar29 = 0;
      if (*(longlong *)(puVar36 + lVar34) != 0) {
        uVar25 = *(uint *)(*(longlong *)(puVar36 + lVar34) + 0xc);
        if ((int)uVar25 < DAT_14c9647dc) {
          lVar32 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
        }
        else {
          lVar32 = 0;
        }
        iVar29 = *(int *)(lVar32 + 0x10);
        if (*(int *)(lVar32 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar29 = DAT_14c964868 + 1;
          bVar37 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar37) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar29);
          }
          LOCK();
          iVar12 = *(int *)(lVar32 + 0x10);
          bVar37 = iVar12 == 0;
          if (bVar37) {
            *(int *)(lVar32 + 0x10) = iVar29;
            iVar12 = 0;
          }
          UNLOCK();
          if (!bVar37) {
            iVar29 = iVar12;
          }
        }
      }
      iVar12 = *(int *)(lVar16 + 0x10);
      *(uint *)(lVar16 + 0x10) = iVar12 + 1U;
      if (*(uint *)(lVar16 + 0x14) < iVar12 + 1U) {
        FUN_14076aab4(plVar15,iVar12);
      }
      *(ulonglong *)(*plVar15 + (longlong)iVar12 * 8) = CONCAT44(iVar29,uVar25);
      lVar34 = lVar34 + 8;
    } while (lVar17 * 8 != lVar34);
  }
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return plVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076aab4 FUN_14076aab4 body=353 status=ok
// SIG undefined FUN_14076aab4(void)

void FUN_14076aab4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14076ab39;
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
LAB_14076ab39:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14076ac16 FUN_14076ac16 body=134 status=ok
// SIG undefined FUN_14076ac16(void)

undefined8 * FUN_14076ac16(undefined8 *param_1)

{
  FUN_14076ac9c();
  *param_1 = &PTR_FUN_14a829a20;
  param_1[5] = &PTR_FUN_14a82a420;
  param_1[6] = &PTR_LAB_14a82a460;
  param_1[0x55] = &PTR_FUN_14a82a4b0;
  param_1[0x56] = &PTR_FUN_14a82a530;
  param_1[0x57] = &PTR_FUN_14a82a540;
  param_1[200] = 0x4040000000000000;
  param_1[0xc9] = 0x4040000000000000;
  param_1[0xca] = 0x4040000000000000;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  return param_1;
}



// FUNCTION 14076ac9c FUN_14076ac9c body=370 status=ok
// SIG undefined FUN_14076ac9c(void)

longlong * FUN_14076ac9c(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  byte bVar3;
  
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14a86a810;
  param_1[5] = (longlong)&PTR_FUN_14a86b210;
  param_1[6] = (longlong)&PTR_LAB_14a86b250;
  param_1[0x55] = (longlong)&PTR_FUN_14a86b2a0;
  param_1[0x56] = (longlong)&PTR_FUN_14a86b320;
  param_1[0x57] = (longlong)&PTR_FUN_14a86b330;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad2430) && (FUN_144b3d300(&DAT_14cad2430), DAT_14cad2430 == -1)) {
    FUN_1446f470e(&DAT_14cad2428,L"OverlapAllDynamic",1);
    _Init_thread_footer(&DAT_14cad2430);
  }
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cad2428,1);
  *(byte *)(param_1 + 0x83) = *(byte *)(param_1 + 0x83) | 0x10;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) & 0xbf;
  *(byte *)((longlong)param_1 + 0x2dd) = *(byte *)((longlong)param_1 + 0x2dd) | 4;
  *(undefined4 *)(param_1 + 0xc5) = 0xffdf959d;
  bVar1 = *(byte *)((longlong)param_1 + 0x62c);
  *(byte *)((longlong)param_1 + 0x62c) = bVar1 & 0xfd;
  bVar3 = 0x10;
  plVar2 = param_1;
  do {
    if (plVar2 == (longlong *)0x0) {
LAB_14076ad92:
      *(undefined1 *)((longlong)param_1 + 0x2e9) = 1;
      *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0x80;
      *(byte *)((longlong)param_1 + 0x2d2) = *(byte *)((longlong)param_1 + 0x2d2) | 0x80;
      *(byte *)((longlong)param_1 + 0x62c) = bVar1 & 0xe1 | bVar3 | 8;
      param_1[0xc6] = 0;
      return param_1;
    }
    if ((*(uint *)(plVar2 + 1) & 0x30) != 0) {
      bVar3 = 0;
      goto LAB_14076ad92;
    }
    plVar2 = (longlong *)plVar2[4];
  } while( true );
}



// FUNCTION 14076ae1e FUN_14076ae1e body=464 status=ok
// SIG undefined FUN_14076ae1e(void)

void FUN_14076ae1e(longlong *param_1,char param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_78 [36];
  undefined1 local_54;
  undefined1 local_4c;
  undefined1 local_47;
  ushort local_46;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  lVar2 = DAT_14c9abbf0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 == '\x01' && param_2 == '\0') &&
     (lVar3 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247),
     *(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44))) {
    uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = lVar3 + 0x48;
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar3 + 0x58) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar4 * 0x460;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar4 * 0x460) == lVar2) {
          if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x450);
      } while (iVar4 != -1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb7620c) && (FUN_144b3d300(&DAT_14cb7620c), DAT_14cb7620c == -1)) {
    FUN_1446f470e(&DAT_14cb76204,L"SetSimulatePhysics",1);
    _Init_thread_footer(&DAT_14cb7620c);
  }
  local_54 = 0;
  local_4c = 0;
  local_47 = 0;
  local_46 = (ushort)(byte)local_46;
  local_43 = 0;
  local_3f = 0;
  local_3c = 0xffffffff;
  uStack_38 = 0;
  uStack_34 = 0xffffffff;
  uStack_30 = 0;
  local_2b = 0;
  local_29 = 0;
  if (param_2 != '\0') {
    local_46 = 0x101;
  }
  local_42 = param_2 == '\0';
  local_41 = 1;
  (**(code **)(*param_1 + 0xd78))(param_1,&DAT_14cb76204);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14076b000 FUN_14076b000 body=1048 status=ok
// SIG undefined FUN_14076b000(void)

void FUN_14076b000(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_68;
  code *local_60;
  longlong **local_58;
  undefined1 local_49;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    uVar6 = (uint)((ulonglong)DAT_14c9abbf0 >> 0x10);
    uVar7 = (uint)DAT_14c9abbf0 & 0xffff;
    lVar3 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x50);
    }
    iVar10 = *(int *)(lVar3 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)((ulonglong)DAT_14c9abbf0 >> 0x20) +
                              ((uint)DAT_14c9abbf0 << 0x10 | uVar7) +
                              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 0x460;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 0x460) == DAT_14c9abbf0)
        goto LAB_14076b0c9;
        iVar10 = *(int *)(lVar3 + 0x450);
      } while (iVar10 != -1);
    }
  }
  lVar3 = 0;
LAB_14076b0c9:
  local_48 = lVar3 + 0x10;
  if (lVar3 == 0) {
    local_48 = 0;
  }
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  if (*(char *)(local_48 + 0x362) == '\x01') {
    local_49 = 0;
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
    local_88 = &local_48;
    local_58 = &local_88;
    local_60 = FUN_143ce90b8;
    local_80 = param_2;
    local_78 = param_3;
    local_70 = &local_49;
    local_68 = param_1;
    FUN_1408d6bd2(uVar4,DAT_14c9abbf0);
    lVar2 = param_1 + 0x1430;
    iVar10 = *(int *)(param_1 + 0x1478);
    if (iVar10 < 2) {
      lVar3 = param_1 + 0x1468;
      if (*(longlong *)(param_1 + 0x1470) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1470);
      }
      iVar11 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      if (*(int *)(param_1 + 0x1438) - *(int *)(param_1 + 0x1464) < iVar11 >> 2) {
        iVar10 = *(int *)(param_1 + 0x1458);
        if (iVar10 != 0) {
          puVar13 = *(uint **)(param_1 + 0x1450);
          if (*(uint **)(param_1 + 0x1450) == (uint *)0x0) {
            puVar13 = (uint *)(param_1 + 0x1440);
          }
          uVar6 = *puVar13;
          if (uVar6 == 0) {
            iVar11 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar11 = iVar10 + -1;
            }
            uVar12 = 0;
            uVar16 = (ulonglong)(uint)(iVar11 >> 5);
            if (iVar11 >> 5 < 1) {
              uVar16 = uVar12;
            }
            iVar11 = 0;
            do {
              if (uVar16 == uVar12) goto LAB_14076b1af;
              iVar11 = iVar11 + 0x20;
              uVar6 = puVar13[uVar12 + 1];
              uVar12 = uVar12 + 1;
            } while (uVar6 == 0);
          }
          else {
            uVar12 = 0;
            iVar11 = 0;
          }
          uVar14 = (ulonglong)(-uVar6 & uVar6);
          uVar16 = uVar14 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar15 < iVar10) {
            uVar6 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar3 + (longlong)
                        *(int *)(*(longlong *)(param_1 + 0x1430) + 0x14 + (longlong)iVar15 * 0x18) *
                        4) = 0xffffffff;
              uVar6 = ~(uint)uVar14 & uVar6;
              puVar13 = *(uint **)(param_1 + 0x1450);
              if (*(uint **)(param_1 + 0x1450) == (uint *)0x0) {
                puVar13 = (uint *)(param_1 + 0x1440);
              }
              iVar1 = *(int *)(param_1 + 0x1458);
              iVar15 = (int)uVar12;
              lVar5 = (longlong)iVar15;
              uVar7 = puVar13[lVar5] & uVar6;
              if (uVar7 == 0) {
                iVar8 = iVar1 + 0x1e;
                if (-1 < iVar1 + -1) {
                  iVar8 = iVar1 + -1;
                }
                iVar8 = iVar8 >> 5;
                iVar11 = iVar11 + 0x20;
                iVar9 = iVar8;
                if (iVar8 < iVar15) {
                  iVar9 = iVar15;
                }
                if (iVar15 < iVar8) {
                  lVar17 = 0;
                  do {
                    uVar7 = puVar13[lVar5 + lVar17 + 1];
                    if (uVar7 != 0) {
                      uVar12 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                      uVar6 = 0xffffffff;
                      goto LAB_14076b3dd;
                    }
                    iVar11 = iVar11 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar9 - lVar5 != lVar17);
                  uVar6 = 0xffffffff;
                  lVar5 = (longlong)iVar9;
                }
                uVar12 = lVar5 + 1U & 0xffffffff;
                iVar15 = iVar1;
              }
              else {
LAB_14076b3dd:
                uVar14 = (ulonglong)(-uVar7 & uVar7);
                uVar16 = uVar14 * 2 + 1;
                lVar5 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                  }
                }
                iVar15 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
                if (iVar1 <= iVar15) {
                  iVar15 = iVar1;
                }
              }
            } while (iVar15 != iVar10);
          }
        }
      }
      else if (iVar10 == 1) {
        lVar5 = 0;
        do {
          *(undefined4 *)(lVar3 + lVar5 * 4) = 0xffffffff;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 0x1478));
      }
LAB_14076b1af:
      FUN_1403c4176(lVar2,0);
    }
    else {
      FUN_1403c4176(lVar2,0);
      *(undefined4 *)(param_1 + 0x1478) = 1;
      FUN_1418760ce(lVar2);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb76218) && (FUN_144b3d300(&DAT_14cb76218), DAT_14cb76218 == -1)) {
      FUN_1446f470e(&DAT_14cb76210,L"Primary Simulation Toggled",1);
      _Init_thread_footer(&DAT_14cb76218);
    }
    FUN_140d52e40(param_1,&DAT_14cb76210,local_49,1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14076b500 FUN_14076b500 body=49 status=ok
// SIG undefined FUN_14076b500(void)

longlong * FUN_14076b500(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14076b532();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 14076b532 FUN_14076b532 body=228 status=ok
// SIG undefined FUN_14076b532(void)

longlong FUN_14076b532(void)

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
  if (DAT_14cc271e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146293824;
    local_38 = &LAB_1497efd13;
    local_40 = FUN_14675e221;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ChaosCloth",L"ChaosClothingSimulationFactory",&DAT_14cc271e0,
                  &DAT_1497efd12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc271e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076b618 FUN_14076b618 body=71 status=ok
// SIG undefined FUN_14076b618(void)

int FUN_14076b618(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1406ce8b4(param_1,iVar1);
  }
  FUN_14076b65f((longlong)iVar1 * 0x30 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14076b65f FUN_14076b65f body=41 status=ok
// SIG undefined FUN_14076b65f(void)

void FUN_14076b65f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = &DAT_3f8000003f800000;
    param_1[5] = 0x3f800000;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14076b688 FUN_14076b688 body=149 status=ok
// SIG undefined FUN_14076b688(void)

longlong * FUN_14076b688(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x17 & 1) != 0)) ||
     (((*(uint *)(lVar1 + 8) >> 0x19 & 1) != 0 &&
      ((*(byte *)((longlong)param_1 + 0x36) & 0x40) == 0)))) {
    param_2 = &local_20;
    local_20 = 0;
    lVar1 = *param_1;
  }
  else {
    FUN_14076b71e(param_1,lVar1,1);
    lVar1 = *param_1;
  }
  (**(code **)(lVar1 + 0x170))(param_1,param_2,8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076b71e FUN_14076b71e body=774 status=ok
// SIG undefined FUN_14076b71e(void)

longlong FUN_14076b71e(longlong param_1,ulonglong param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
LAB_14076b836:
    lVar3 = 0;
    goto LAB_14076b838;
  }
  lVar3 = *(longlong *)(param_1 + 0x90);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  if (*(ulonglong *)(lVar3 + 0x80) == param_2) {
    uVar4 = *(ulonglong *)(lVar3 + 0x88);
  }
  else {
    *(ulonglong *)(lVar3 + 0x80) = param_2;
    if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      lVar7 = lVar3 + 0x40;
      if (*(longlong *)(lVar3 + 0x48) != 0) {
        lVar7 = *(longlong *)(lVar3 + 0x48);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                               4);
      if (iVar6 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x18);
          if (*puVar1 == param_2) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              uVar4 = puVar1[1];
              *(ulonglong *)(lVar3 + 0x88) = uVar4;
              goto LAB_14076b806;
            }
            break;
          }
          iVar6 = (int)puVar1[2];
        } while (iVar6 != -1);
      }
    }
    *(undefined8 *)(lVar3 + 0x88) = 0;
    uVar4 = 0;
  }
LAB_14076b806:
  local_d0 = uVar4;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (uVar4 != 0) {
    lVar3 = FUN_1409ca440(&local_d0);
    goto LAB_14076b838;
  }
  if ((param_3 == '\0') ||
     (lVar3 = FUN_14076b71e(param_1,*(undefined8 *)(param_2 + 0x20),1), lVar3 == 0))
  goto LAB_14076b836;
  local_c8 = *(undefined8 *)(param_2 + 0x10);
  lVar7 = 0;
  local_78 = (longlong *)0x0;
  local_48 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_b8 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  _uStack_b0 = CONCAT44(*(uint *)(lVar7 + 8) & *(uint *)(param_1 + 0xb0) | *(uint *)(param_1 + 0xb4)
                        ,*(uint *)(param_2 + 8) & *(uint *)(param_1 + 0xa8) |
                         *(uint *)(param_1 + 0xac));
  local_c0 = lVar3;
  local_a0 = FUN_144938c96(param_2);
  local_a8 = CONCAT11(local_a8._1_1_,1);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  lVar3 = FUN_1402710dd(&local_c8);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    uVar4 = param_2;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      if ((*(uint *)(param_2 + 8) >> 0x1c & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_142840154(param_2,param_2);
      }
    }
    lVar7 = FUN_14076b71e(param_1,uVar4,0);
    if (lVar7 == 0) goto LAB_14076b97c;
    lVar5 = FUN_144a7a812();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_14076b97c;
  }
  else {
LAB_14076b97c:
    lVar7 = 0;
  }
  if (*(longlong *)(lVar3 + 0x20) != 0) {
    if (lVar7 == 0) {
      FUN_140070ec4();
    }
    else {
      FUN_14283fbfd(lVar3,lVar7);
    }
  }
  FUN_1406afaf0(param_1,param_2,lVar3);
  if (lStack_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_14076b838:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14076ba26 FUN_14076ba26 body=16 status=ok
// SIG undefined FUN_14076ba26(void)

void FUN_14076ba26(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_14076ba36(param_1 + 1);
  return;
}



// FUNCTION 14076ba36 FUN_14076ba36 body=570 status=ok
// SIG undefined FUN_14076ba36(void)

void FUN_14076ba36(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_1400020a8();
  }
  FUN_140dbf95c(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  FUN_140dbf95c(param_1 + 0x198);
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  FUN_140dbf95c(param_1 + 0x130);
  lVar5 = DAT_14c9a3da0;
  if ((longlong)*(int *)(param_1 + 0x128) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x128) + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar5 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x100);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else if ((cVar2 == '\x03') &&
            (plVar3 = *(longlong **)(param_1 + 0x110), plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xac) != -1) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffff00000000;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1);
  return;
}



// FUNCTION 14076bc70 FUN_14076bc70 body=145 status=ok
// SIG undefined FUN_14076bc70(void)

void FUN_14076bc70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac52cf0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  return;
}



// FUNCTION 14076bd02 FUN_14076bd02 body=269 status=ok
// SIG undefined FUN_14076bd02(void)

void FUN_14076bd02(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1b6c40;
  plVar3 = (longlong *)param_1[10];
  while (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
    plVar3 = (longlong *)param_1[10];
  }
  FUN_14076be10(param_1);
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
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
  FUN_1403d8100(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14076be10 FUN_14076be10 body=317 status=ok
// SIG undefined FUN_14076be10(void)

void FUN_14076be10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  param_1[0x13] = 0;
  plVar7 = (longlong *)param_1[0x14];
  if (plVar7 != (longlong *)0x0) {
    param_1[0x14] = 0;
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
  for (plVar7 = (longlong *)param_1[10]; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[3])
  {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  lVar5 = param_1[6];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = param_1[5];
    lVar8 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar3 + lVar8);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
    lVar5 = param_1[6];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = param_1[5];
      lVar8 = 0;
      do {
        if ((*(longlong *)(lVar3 + lVar8) != 0) &&
           ((iVar6 = (int)*(longlong *)(lVar3 + lVar8) - (int)param_1[7], iVar6 < 0 ||
            ((int)param_1[8] <= iVar6)))) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar8);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    FUN_1447c613a(param_1 + 5,0);
  }
  if (*(int *)((longlong)param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_144893a1c(param_1 + 7,0);
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014076bede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 14076bf5c FUN_14076bf5c body=103 status=ok
// SIG undefined FUN_14076bf5c(void)

undefined8 * FUN_14076bf5c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4a96a0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14076bfc3 FUN_14076bfc3 body=345 status=ok
// SIG undefined FUN_14076bfc3(void)

undefined8
FUN_14076bfc3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 local_1d8 [208];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0x3ff0000000000000;
  local_48 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
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
  local_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3ff0000000000000;
  lVar1 = FUN_14034b308(param_2);
  if (lVar1 == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x3c) * 0.001;
    fVar3 = 9e-08;
    if (9e-08 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  FUN_14076c11d(&local_108,param_3,fVar3);
  FUN_14076c1ae(&local_108);
  memcpy(local_1d8,&local_108,0xd0);
  local_1e8 = 0;
  FUN_14076c2b0(param_1,param_2,local_1d8,param_4);
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076c11d FUN_14076c11d body=144 status=ok
// SIG undefined FUN_14076c11d(void)

void FUN_14076c11d(undefined8 param_1,longlong param_2,float param_3)

{
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  longlong local_68 [2];
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = local_58;
  local_48 = 0;
  local_38 = &PTR_LAB_14aa2a7b0;
  local_58[0] = &LAB_1436367a2;
  local_68[0] = 0;
  local_68[1] = 0;
  local_30 = param_2;
  FUN_14076c6af(0,*(undefined4 *)(param_2 + 8),(double)param_3,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076c1ae FUN_14076c1ae body=257 status=ok
// SIG undefined FUN_14076c1ae(void)

void FUN_14076c1ae(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_50;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14076d8a0(&local_78,param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x40);
  dVar8 = *(double *)(param_1 + 0x40);
  *(double *)(param_1 + 0x30) =
       dStack_70 * dVar7 * -1.0 + local_68 * dVar3 + dVar5 * dStack_60 * 1.0 + dVar1 * local_78;
  *(double *)(param_1 + 0x38) =
       local_78 * dVar8 * 1.0 + dStack_60 * dVar4 + dVar6 * local_68 * -1.0 + dVar2 * dStack_70;
  *(double *)(param_1 + 0x40) =
       dStack_60 * dVar7 * 1.0 + ((dVar5 * dStack_70 * 1.0 + dVar1 * local_68) - dVar3 * local_78);
  *(double *)(param_1 + 0x48) =
       local_68 * dVar8 * -1.0 + ((dVar6 * local_78 * -1.0 + dVar2 * dStack_60) - dVar4 * dStack_70)
  ;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076c2b0 FUN_14076c2b0 body=1022 status=ok
// SIG undefined FUN_14076c2b0(void)

void * FUN_14076c2b0(void *param_1,longlong param_2,double *param_3,double *param_4,
                    undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float _X;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  double local_f8 [17];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar10 = *param_3;
  _X = (float)dVar10;
  if ((*(byte *)(param_2 + 8) & 2) == 0) {
    lVar6 = FUN_14034b308(param_2);
    if (lVar6 == 0) {
      fVar9 = 0.75;
    }
    else {
      fVar9 = *(float *)(lVar6 + 0x4c);
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0001) {
      fVar9 = 0.0001;
    }
    fVar9 = powf(_X,fVar9);
    fVar9 = fVar9 * *(float *)(param_2 + 0xe0);
    if (fVar9 <= 0.001) {
      fVar9 = 0.001;
    }
    dVar10 = *param_3;
  }
  else {
    fVar9 = *(float *)(param_2 + 0x9c);
    if (fVar9 <= 0.001) {
      fVar9 = 0.001;
    }
  }
  dVar1 = (double)(fVar9 / _X);
  *param_3 = dVar10 * dVar1;
  param_3[10] = param_3[10] * dVar1;
  param_3[0xb] = param_3[0xb] * dVar1;
  param_3[0xc] = param_3[0xc] * dVar1;
  param_3[0xe] = param_3[0xe] * dVar1;
  param_3[0xf] = param_3[0xf] * dVar1;
  param_3[0x10] = param_3[0x10] * dVar1;
  param_3[0x12] = param_3[0x12] * dVar1;
  param_3[0x13] = param_3[0x13] * dVar1;
  param_3[0x14] = dVar1 * param_3[0x14];
  dVar11 = *(double *)(param_2 + 200) * param_4[8];
  dVar12 = *(double *)(param_2 + 0xd0) * param_4[9];
  dVar2 = *(double *)(param_2 + 0xd8) * param_4[10];
  dVar3 = *param_4;
  dVar4 = param_4[1];
  dVar5 = param_4[2];
  dVar10 = param_4[3];
  dVar1 = param_4[3];
  dVar13 = dVar12 * dVar3 - dVar11 * dVar4;
  dVar14 = dVar2 * dVar4 - dVar12 * dVar5;
  dVar15 = dVar11 * dVar5 - dVar3 * dVar2;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  param_3[2] = param_3[2] + (dVar13 * dVar4 - dVar15 * dVar5) + dVar10 * dVar14 + dVar11;
  param_3[3] = (dVar5 * dVar14 - dVar3 * dVar13) + dVar1 * dVar15 + dVar12 + param_3[3];
  param_3[4] = dVar13 * dVar10 + dVar2 + (dVar15 * dVar3 - dVar14 * dVar4) + param_3[4];
  if (((0.0010000000474974513 < ABS(*(double *)(param_2 + 0xe8) - DAT_14c846510)) ||
      (0.0010000000474974513 < ABS(*(double *)(param_2 + 0xf0) - DAT_14c846518))) ||
     (0.0010000000474974513 < ABS(*(double *)(param_2 + 0xf8) - DAT_14c846520))) {
    local_108 = *(undefined8 *)(param_2 + 0xf8);
    local_118 = *(undefined4 *)(param_2 + 0xe8);
    uStack_114 = *(undefined4 *)(param_2 + 0xec);
    uStack_110 = *(undefined4 *)(param_2 + 0xf0);
    uStack_10c = *(undefined4 *)(param_2 + 0xf4);
    FUN_146ddb05b(local_f8,param_3 + 10,&local_118,param_5);
    pdVar7 = local_f8;
    pdVar8 = param_3 + 10;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
  }
  if (DAT_14c761718 == '\x01') {
    dVar10 = *param_3;
    param_3[10] = dVar10 * *(double *)(param_2 + 200) * *(double *)(param_2 + 200) + param_3[10];
    param_3[0xf] = dVar10 * *(double *)(param_2 + 0xd0) * *(double *)(param_2 + 0xd0) + param_3[0xf]
    ;
    param_3[0x14] =
         dVar10 * *(double *)(param_2 + 0xd8) * *(double *)(param_2 + 0xd8) + param_3[0x14];
  }
  memcpy(param_1,param_3,0xd0);
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14076c6af FUN_14076c6af body=1278 status=ok
// SIG undefined FUN_14076c6af(void)

void FUN_14076c6af(double *param_1,uint param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
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
  undefined1 auStack_228 [40];
  longlong *local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uVar28 = 0;
  uVar29 = 0x3ff00000;
  uVar26 = 0;
  uVar27 = 0x411ffb80;
  if ((int)param_2 < 1) {
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar18 = 0.0;
    uVar12 = 0;
    dVar5 = 0.0;
    dVar2 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
    local_200 = param_4;
    do {
      local_1c8 = (double)CONCAT44(local_1c8._4_4_,(int)uVar12);
      pcVar1 = (code *)*param_5;
      plVar11 = (longlong *)param_5[2];
      if ((longlong *)param_5[2] == (longlong *)0x0) {
        plVar11 = param_5 + 4;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      lVar10 = (*pcVar1)(uVar9,&local_1c8);
      if ((((longlong)(int)local_200[1] <= (longlong)uVar12) ||
          (*(char *)(*local_200 + uVar12) == '\x01')) && (*(longlong *)(lVar10 + 0x10) != 0)) {
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        local_1c8 = 0.0;
        dStack_1c0 = 0.0;
        local_1a8 = 0.0;
        local_188 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_180 = 0x3ff0000000000000;
        local_108 = 0;
        local_118 = 0.0;
        dStack_110 = 0.0;
        local_128 = 0;
        dStack_120 = 0.0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0.0;
        uStack_140 = 0;
        local_158 = 0.0;
        dStack_150 = 0.0;
        local_168 = 0.0;
        dStack_160 = 0.0;
        local_178 = 0.0;
        uStack_170 = 0;
        uStack_100 = 0x3ff0000000000000;
        cVar7 = FUN_14076cbae(&local_1c8);
        uVar6 = uStack_1d0;
        if (cVar7 != '\0') {
          lVar10 = (longlong)(int)uStack_1d0;
          uVar8 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar8);
          if (uStack_1d0._4_4_ < uVar8) {
            FUN_14076cc58(&local_1d8,uVar6 & 0xffffffff);
          }
          memcpy((void *)(lVar10 * 0xd0 + local_1d8),&local_1c8,0xd0);
          dVar18 = dVar18 + local_1c8;
          dVar5 = dVar5 + dStack_1c0;
          dVar3 = dVar3 + local_1c8 * local_1b8;
          dVar4 = dVar4 + dStack_1b0 * local_1c8;
          dVar2 = dVar2 + local_1a8 * local_1c8;
        }
      }
      uVar12 = uVar12 + 1;
    } while (param_2 != uVar12);
    if ((9.99999993922529e-09 < dVar18) && (0 < (int)uStack_1d0)) {
      dVar15 = 1.0 / dVar18;
      dVar3 = dVar3 * dVar15;
      dVar4 = dVar4 * dVar15;
      dVar2 = dVar2 * dVar15;
      FUN_14076cd6b(&local_1c8,&local_1d8);
      uVar13 = (undefined4)uStack_170;
      uVar14 = (undefined4)((ulonglong)uStack_170 >> 0x20);
      local_200 = (longlong *)local_168;
      local_1e0 = dStack_160;
      local_1e8 = local_158;
      local_1f0 = dStack_150;
      local_1f8 = local_148;
      uVar20 = (undefined4)uStack_140;
      uVar21 = (undefined4)((ulonglong)uStack_140 >> 0x20);
      uVar22 = (undefined4)local_138;
      uVar23 = (undefined4)((ulonglong)local_138 >> 0x20);
      uVar24 = (undefined4)uStack_130;
      uVar25 = (undefined4)((ulonglong)uStack_130 >> 0x20);
      uVar26 = (undefined4)local_128;
      uVar27 = (undefined4)((ulonglong)local_128 >> 0x20);
      uVar30 = (undefined4)local_108;
      uVar31 = (undefined4)((ulonglong)local_108 >> 0x20);
      uVar28 = (undefined4)uStack_100;
      uVar29 = (undefined4)((ulonglong)uStack_100 >> 0x20);
      dVar15 = local_118;
      dVar16 = dStack_110;
      dVar17 = local_178;
      dVar19 = dStack_120;
      goto LAB_14076c9bd;
    }
  }
  uVar14 = 0;
  uVar13 = 0;
  dVar15 = 0.0;
  local_200 = (longlong *)0x0;
  local_1e0 = 0.0;
  local_1e8 = 0.0;
  local_1f0 = 524000.0;
  local_1f8 = 0.0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  dVar18 = 523.0;
  uVar24 = 0;
  uVar25 = 0;
  dVar17 = 524000.0;
  dVar19 = 0.0;
  dVar16 = 0.0;
  uVar30 = 0;
  uVar31 = 0;
  dVar5 = 523000.0;
LAB_14076c9bd:
  param_1[10] = dVar17;
  param_1[0xb] = (double)CONCAT44(uVar14,uVar13);
  param_1[0xc] = (double)local_200;
  param_1[0xd] = local_1e0;
  param_1[0xe] = local_1e8;
  param_1[0xf] = local_1f0;
  param_1[0x10] = local_1f8;
  param_1[0x11] = (double)CONCAT44(uVar21,uVar20);
  param_1[0x12] = (double)CONCAT44(uVar23,uVar22);
  param_1[0x13] = (double)CONCAT44(uVar25,uVar24);
  param_1[0x14] = (double)CONCAT44(uVar27,uVar26);
  param_1[0x15] = dVar19;
  param_1[0x16] = dVar15;
  param_1[0x17] = dVar16;
  param_1[0x18] = (double)CONCAT44(uVar31,uVar30);
  param_1[0x19] = (double)CONCAT44(uVar29,uVar28);
  *param_1 = dVar18;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  param_1[3] = dVar4;
  param_1[4] = dVar2;
  dVar2 = DAT_14c8463e8;
  param_1[8] = DAT_14c8463e0;
  param_1[9] = dVar2;
  uVar28 = DAT_14c8463d8._4_4_;
  uVar27 = (undefined4)DAT_14c8463d8;
  uVar26 = DAT_14c8463d0._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)DAT_14c8463d0;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar26;
  *(undefined4 *)(param_1 + 7) = uVar27;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar28;
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    plVar11 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14076cbae FUN_14076cbae body=168 status=ok
// SIG undefined FUN_14076cbae(void)

bool FUN_14076cbae(double *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  double *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0) {
    if ((*(char *)(param_3 + 0x1c) == '\x0f') || (*(char *)(param_3 + 0x1c) == '\x05')) {
      FUN_145741ec0(param_1,param_3,(int)param_4);
    }
    else {
      puVar2 = &DAT_14c846480;
      puVar3 = local_98;
      local_30 = param_1;
      local_28 = param_4;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_14076e672(param_3,local_98,&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0.0 < *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076cc58 FUN_14076cc58 body=274 status=ok
// SIG undefined FUN_14076cc58(void)

void FUN_14076cc58(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xd0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14076cd6b FUN_14076cd6b body=2517 status=ok
// SIG undefined FUN_14076cd6b(void)

double * FUN_14076cd6b(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  void *_Src;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double *pdVar8;
  uint uVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  if ((longlong)iVar3 == 1) {
    lVar13 = -(ulonglong)
              (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x38) - DAT_14c8463d8));
    auVar7._8_4_ = (int)lVar13;
    auVar7._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x30) - DAT_14c8463d0))
    ;
    auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar9 = movmskpd((int)param_1,auVar7);
    lVar13 = -(ulonglong)
              (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x48) - DAT_14c8463e8));
    auVar6._8_4_ = (int)lVar13;
    auVar6._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x40) - DAT_14c8463e0))
    ;
    auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd((int)param_2,auVar6);
    uVar12 = iVar11 << 2 | uVar9;
    if (uVar12 == 0) {
LAB_14076d477:
      memcpy(param_1,_Src,0xd0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1e8);
    }
    auVar4._8_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x38) + DAT_14c8463d8))
    ;
    auVar4._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x30) + DAT_14c8463d0))
    ;
    iVar11 = movmskpd(uVar9,auVar4);
    auVar5._8_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x48) + DAT_14c8463e8))
    ;
    auVar5._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS(*(double *)((longlong)_Src + 0x40) + DAT_14c8463e0))
    ;
    uVar9 = movmskpd(uVar12,auVar5);
    if ((uVar9 & 0x3fffffff) == 0 && iVar11 == 0) goto LAB_14076d477;
  }
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 1.0;
  param_1[0x18] = 0.0;
  param_1[0x19] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = 0.0;
  param_1[0x17] = 0.0;
  param_1[0x19] = 1.0;
  if (iVar3 != 0) {
    lVar13 = 0;
    do {
      param_1[1] = *(double *)((longlong)_Src + lVar13 + 8) + param_1[1];
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0.0;
      uStack_120 = 0;
      local_138 = 0.0;
      dStack_130 = 0.0;
      local_148 = 0.0;
      uStack_140 = 0;
      local_158 = 0.0;
      dStack_150 = 0.0;
      local_168 = 0.0;
      uStack_160 = 0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      FUN_14076d742((longlong)_Src + lVar13 + 0x30,&local_178);
      dVar17 = *(double *)((longlong)_Src + lVar13 + 0x60);
      dVar1 = *(double *)((longlong)_Src + lVar13 + 0x80);
      dVar2 = *(double *)((longlong)_Src + lVar13 + 0xa0);
      local_1a0 = local_178;
      local_190 = dStack_150;
      local_188 = local_158;
      local_198 = local_138;
      dVar18 = dVar2 * local_138 + dVar17 * local_178 + dVar1 * local_158;
      dVar15 = *(double *)((longlong)_Src + lVar13 + 0x58);
      dVar20 = *(double *)((longlong)_Src + lVar13 + 0x78);
      dVar14 = dVar2 * local_128 + dVar17 * local_168 + dVar1 * local_148;
      local_1a8 = dStack_130;
      dVar21 = dVar2 * dStack_130 + dVar17 * dStack_170 + dVar1 * dStack_150;
      dVar17 = *(double *)((longlong)_Src + lVar13 + 0x98);
      dVar26 = dVar17 * local_128 + dVar15 * local_168 + local_148 * dVar20;
      dVar23 = dVar17 * dStack_130 + dVar15 * dStack_170 + dStack_150 * dVar20;
      dVar1 = *(double *)((longlong)_Src + lVar13 + 0x70);
      dVar2 = *(double *)((longlong)_Src + lVar13 + 0x50);
      dVar20 = dVar17 * local_138 + dVar15 * local_178 + dVar20 * local_158;
      dVar17 = *(double *)((longlong)_Src + lVar13 + 0x90);
      dVar15 = dVar17 * local_128 + dVar2 * local_168 + local_148 * dVar1;
      dVar16 = dVar17 * dStack_130 + dVar2 * dStack_170 + dStack_150 * dVar1;
      dVar17 = dVar17 * local_138 + dVar2 * local_178 + dVar1 * local_158;
      local_180 = local_148;
      local_1b0 = local_128;
      local_1c0 = dStack_170 * dVar15 + dStack_150 * dVar26;
      local_1c8 = dStack_170 * dVar17 + dStack_150 * dVar20;
      local_1b8 = local_168 * dVar15;
      dVar19 = dVar18 * local_138 + dVar17 * local_178 + dVar20 * local_158 + param_1[10];
      param_1[10] = dVar19;
      dVar24 = dStack_130 * dVar18 + local_1c8 + param_1[0xb];
      param_1[0xb] = dVar24;
      dVar18 = local_128 * dVar18 + local_168 * dVar17 + local_148 * dVar20 + param_1[0xc];
      param_1[0xc] = dVar18;
      dVar22 = dVar21 * local_138 + dVar16 * local_178 + dVar23 * local_158 + param_1[0xe];
      param_1[0xe] = dVar22;
      dVar20 = dStack_130 * dVar21 + dStack_170 * dVar16 + dStack_150 * dVar23 + param_1[0xf];
      param_1[0xf] = dVar20;
      dVar16 = local_128 * dVar21 + local_168 * dVar16 + local_148 * dVar23 + param_1[0x10];
      param_1[0x10] = dVar16;
      dVar21 = dVar14 * local_138 + dVar15 * local_178 + dVar26 * local_158 + param_1[0x12];
      param_1[0x12] = dVar21;
      dVar23 = dStack_130 * dVar14 + local_1c0 + param_1[0x13];
      param_1[0x13] = dVar23;
      dVar15 = local_128 * dVar14 + local_1b8 + local_148 * dVar26 + param_1[0x14];
      param_1[0x14] = dVar15;
      dVar17 = *(double *)((longlong)_Src + lVar13);
      dVar1 = *(double *)((longlong)_Src + lVar13 + 0x18);
      dVar26 = *(double *)((longlong)_Src + lVar13 + 0x10) * dVar17 + param_1[2];
      dVar2 = *(double *)((longlong)_Src + lVar13 + 0x20);
      param_1[2] = dVar26;
      dVar1 = dVar1 * dVar17 + param_1[3];
      param_1[3] = dVar1;
      dVar2 = dVar2 * dVar17 + param_1[4];
      param_1[4] = dVar2;
      dVar17 = dVar17 + *param_1;
      *param_1 = dVar17;
      lVar13 = lVar13 + 0xd0;
    } while ((longlong)iVar3 * 0xd0 - lVar13 != 0);
    if (9.99999993922529e-09 < dVar17) {
      dVar17 = 1.0 / dVar17;
      dVar26 = dVar26 * dVar17;
      param_1[2] = dVar26;
      dVar1 = dVar1 * dVar17;
      param_1[3] = dVar1;
      dVar2 = dVar2 * dVar17;
      param_1[4] = dVar2;
      if (1 < (longlong)*(int *)(param_2 + 1)) {
        pdVar8 = (double *)*param_2;
        pdVar10 = pdVar8 + (longlong)*(int *)(param_2 + 1) * 0x1a;
        do {
          local_1c8 = dVar16;
          local_1c0 = dVar18;
          local_1a8 = dVar24;
          dVar16 = pdVar8[4] - dVar2;
          dVar14 = pdVar8[3] - dVar1;
          dVar17 = *pdVar8;
          dVar18 = pdVar8[2] - dVar26;
          dVar25 = dVar17 * dVar18 * dVar18;
          dVar27 = dVar17 * dVar14 * dVar14;
          dVar15 = dVar15 + dVar27 + dVar25;
          dVar24 = dVar17 * dVar16 * dVar16;
          dVar16 = dVar16 * -dVar17;
          dVar20 = dVar20 + dVar25 + dVar24;
          dVar25 = dVar16 * dVar14;
          dVar16 = dVar16 * dVar18;
          dVar18 = -dVar17 * dVar14 * dVar18;
          dVar19 = dVar19 + dVar24 + dVar27;
          dVar24 = local_1a8 + dVar18;
          dVar22 = dVar22 + dVar18;
          dVar18 = local_1c0 + dVar16;
          dVar21 = dVar21 + dVar16;
          dVar16 = local_1c8 + dVar25;
          dVar23 = dVar23 + dVar25;
          pdVar8 = pdVar8 + 0x1a;
        } while (pdVar8 != pdVar10);
        param_1[10] = dVar19;
        param_1[0xb] = dVar24;
        param_1[0xc] = dVar18;
        param_1[0xe] = dVar22;
        param_1[0xf] = dVar20;
        param_1[0x10] = dVar16;
        param_1[0x12] = dVar21;
        param_1[0x13] = dVar23;
        param_1[0x14] = dVar15;
      }
      goto LAB_14076d45d;
    }
  }
  param_1[1] = 1000000.0;
  *param_1 = 1000.0;
  dVar15 = DAT_14c9963f0 * 1666666.6666666667;
  dVar20 = DAT_14c9963d0 * 1666666.6666666667;
  dVar23 = DAT_14c9963b0 * 1666666.6666666667;
  dVar26 = DAT_14c9963e8 * 1666666.6666666667;
  dVar16 = DAT_14c9963c8 * 1666666.6666666667;
  dVar17 = DAT_14c9963a8 * 1666666.6666666667;
  dVar1 = DAT_14c9963e0 * 1666666.6666666667;
  dVar2 = DAT_14c9963c0 * 1666666.6666666667;
  param_1[10] = DAT_14c9963a0 * 1666666.6666666667;
  param_1[0xb] = dVar17;
  param_1[0xc] = dVar23;
  param_1[0xd] = 0.0;
  param_1[0xe] = dVar2;
  param_1[0xf] = dVar16;
  param_1[0x10] = dVar20;
  param_1[0x11] = 0.0;
  param_1[0x12] = dVar1;
  param_1[0x13] = dVar26;
  param_1[0x14] = dVar15;
  param_1[0x17] = 0.0;
  param_1[0x18] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = 0.0;
  param_1[0x19] = 1.0;
  param_1[4] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
LAB_14076d45d:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14076d742 FUN_14076d742 body=350 status=ok
// SIG undefined FUN_14076d742(void)

void FUN_14076d742(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar8 = dVar2 + dVar2;
  dVar3 = param_1[2];
  dVar5 = dVar3 + dVar3;
  dVar7 = dVar1 * (dVar1 + dVar1);
  dVar4 = param_1[3];
  dVar6 = (dVar1 + dVar1) * dVar4;
  *param_2 = 1.0 - (dVar2 * dVar8 + dVar3 * dVar5);
  param_2[4] = dVar1 * dVar8 - dVar5 * dVar4;
  param_2[8] = dVar1 * dVar5 + dVar8 * dVar4;
  param_2[1] = dVar5 * dVar4 + dVar1 * dVar8;
  param_2[5] = 1.0 - (dVar3 * dVar5 + dVar7);
  param_2[9] = dVar2 * dVar5 - dVar6;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  param_2[2] = dVar1 * dVar5 - dVar8 * dVar4;
  param_2[6] = dVar6 + dVar2 * dVar5;
  param_2[10] = 1.0 - (dVar2 * dVar8 + dVar7);
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xf] = 1.0;
  return;
}



// FUNCTION 14076d8a0 FUN_14076d8a0 body=3537 status=ok
// SIG undefined FUN_14076d8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14076d8a0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_258 [32];
  double local_238;
  double local_230;
  double local_228;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_190;
  double local_188;
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  dVar9 = (*param_2 + param_2[5] + param_2[10]) / 3.0;
  if ((dVar9 <= 9.99999993922529e-09) ||
     (dVar4 = param_2[9] * param_2[9] + param_2[8] * param_2[8] + param_2[4] * param_2[4],
     dVar4 / (dVar9 * dVar9) < 9.99999993922529e-09)) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  else {
    dVar12 = *param_2 - dVar9;
    dVar6 = param_2[5] - dVar9;
    dVar7 = param_2[10] - dVar9;
    dVar4 = (dVar4 + dVar4 + dVar7 * dVar7 + dVar6 * dVar6 + dVar12 * dVar12) / 6.0;
    if (dVar4 < 0.0) {
      dVar4 = sqrt(dVar4);
    }
    else {
      dVar4 = SQRT(dVar4);
    }
    dVar2 = 1.0;
    dVar16 = 1.0 / dVar4;
    dVar6 = (param_2[10] - DAT_14c9963f0 * dVar9) * dVar16;
    dVar15 = (param_2[9] - DAT_14c9963e8 * dVar9) * dVar16;
    dVar12 = (param_2[5] - DAT_14c9963c8 * dVar9) * dVar16;
    dVar7 = (param_2[8] - DAT_14c9963e0 * dVar9) * dVar16;
    dVar5 = (param_2[4] - DAT_14c9963c0 * dVar9) * dVar16;
    dVar13 = -(param_2[6] - DAT_14c9963d0 * dVar9) * dVar16;
    dVar6 = ((dVar5 * dVar15 - dVar7 * dVar12) * (param_2[2] - DAT_14c9963b0 * dVar9) * dVar16 +
            ((dVar12 * dVar6 + dVar13 * dVar15) * (*param_2 - DAT_14c9963a0 * dVar9) * dVar16 -
            dVar16 * (param_2[1] - DAT_14c9963a8 * dVar9) * (dVar6 * dVar5 + dVar13 * dVar7))) * 0.5
    ;
    if (dVar6 <= -1.0) {
      dVar6 = 1.0471975803375244;
    }
    else if (1.0 <= dVar6) {
      dVar6 = 0.0;
    }
    else {
      dVar7 = dVar6;
      if (1.0 <= dVar6) {
        dVar7 = 1.0;
      }
      dVar6 = acos((double)(~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar7 |
                           -(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000));
      dVar6 = dVar6 / 3.0;
    }
    dVar7 = cos(dVar6);
    dVar13 = dVar7 * (dVar4 + dVar4) + dVar9;
    dVar6 = cos(dVar6 + 2.094395160675049);
    local_230 = dVar6 * (dVar4 + dVar4) + dVar9;
    local_1d8 = (dVar9 * 3.0 - dVar13) - local_230;
    local_228 = dVar13 - local_230;
    local_238 = local_230 - local_1d8;
    uVar3 = -(ulonglong)(local_228 <= local_238);
    uStack_1d0 = 0;
    local_178._8_4_ = (int)extraout_XMM0_Qb_00;
    local_178._0_8_ = uVar3;
    local_178._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    dVar5 = (double)(~uVar3 & (ulonglong)dVar13 | uVar3 & (ulonglong)local_1d8);
    local_188 = param_2[10];
    dVar7 = local_188 - dVar5;
    dVar9 = param_2[9];
    local_190 = param_2[5];
    dVar15 = local_190 - dVar5;
    dVar4 = param_2[8];
    local_180 = *param_2;
    dVar6 = param_2[4];
    dVar5 = local_180 - dVar5;
    dVar16 = dVar5 * dVar15 - dVar6 * dVar6;
    dVar12 = dVar6 * dVar4 - dVar9 * dVar5;
    local_1a8 = dVar5 * dVar7 - dVar4 * dVar4;
    dVar1 = dVar6 * dVar9 - dVar4 * dVar15;
    dVar5 = dVar9 * dVar4 - dVar7 * dVar6;
    dVar15 = dVar15 * dVar7 - dVar9 * dVar9;
    dVar8 = dVar15 * dVar15 + dVar5 * dVar5 + dVar1 * dVar1;
    dVar7 = local_1a8 * local_1a8 + dVar5 * dVar5 + dVar12 * dVar12;
    dVar14 = dVar16 * dVar16 + dVar12 * dVar12 + dVar1 * dVar1;
    if ((dVar8 <= dVar7) || (dVar8 <= dVar14)) {
      if (dVar14 < dVar7) {
        dVar7 = SQRT(dVar7);
        local_1b8 = dVar12 / dVar7;
        local_1a8 = local_1a8 / dVar7;
        dVar2 = dVar5 / dVar7;
      }
      else {
        local_1a8 = 0.0;
        local_1b8 = 0.0;
        if (0.0 < dVar14) {
          dVar14 = SQRT(dVar14);
          local_1b8 = dVar16 / dVar14;
          local_1a8 = dVar12 / dVar14;
          dVar2 = dVar1 / dVar14;
        }
      }
    }
    else {
      dVar8 = SQRT(dVar8);
      local_1b8 = dVar1 / dVar8;
      local_1a8 = dVar5 / dVar8;
      dVar2 = dVar15 / dVar8;
    }
    uVar11 = 0;
    uVar10 = 0;
    dVar7 = ABS(local_1b8);
    dVar12 = ABS(dVar2);
    if ((dVar7 < dVar12) || (ABS(local_1a8) < dVar12)) {
      uVar17 = DAT_149931e80._8_4_;
      uVar18 = DAT_149931e80._12_4_;
      if ((dVar12 < dVar7) || (ABS(local_1a8) < dVar7)) {
        local_128 = (double)(DAT_149931e80 ^ (ulonglong)local_1b8);
        uVar10 = 0;
        uVar11 = 0;
        uStack_200 = 0;
        local_120 = 0.0;
        local_208 = dVar2;
      }
      else {
        uStack_200 = 0;
        uVar10 = uVar17;
        uVar11 = uVar18;
        uVar17 = 0;
        uVar18 = 0;
        local_128 = local_1a8;
        local_120 = (double)(DAT_149931e80 ^ (ulonglong)dVar2);
        local_208 = 0.0;
      }
    }
    else {
      uStack_200 = 0x8000000000000000;
      local_208 = -local_1a8;
      local_128 = 0.0;
      uVar17 = 0;
      uVar18 = 0;
      local_120 = local_1b8;
    }
    dVar7 = local_208 * local_208 + local_128 * local_128 + local_120 * local_120;
    local_1c8._8_4_ = (int)extraout_XMM0_Qb;
    local_1c8._0_8_ = dVar13;
    local_1c8._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    if ((dVar7 != 1.0) || (NAN(dVar7))) {
      if (dVar7 < 9.99999993922529e-09) {
        uVar17 = 0;
        uVar18 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uStack_200 = 0;
        local_120 = DAT_14c8464e8;
        local_128 = DAT_14c8464e0;
        local_208 = DAT_14c8464f0;
      }
      else {
        dVar7 = 1.0 / SQRT(dVar7);
        local_120 = local_120 * dVar7;
        local_128 = local_128 * dVar7;
        local_208 = local_208 * dVar7;
      }
    }
    local_1e8._8_4_ = uVar17;
    local_1e8._0_8_ = local_128;
    local_1e8._12_4_ = uVar18;
    local_218._8_4_ = uVar10;
    local_218._0_8_ = local_120;
    local_218._12_4_ = uVar11;
    dVar1 = dVar2 * local_120 - local_128 * local_1a8;
    uStack_1f0 = 0;
    dVar14 = local_1b8 * local_128 - local_208 * dVar2;
    uStack_1b0 = 0;
    uStack_1a0 = 0;
    dVar7 = local_1a8 * local_208 - local_120 * local_1b8;
    dVar5 = local_188 * dVar1 + dVar4 * dVar7 + dVar9 * dVar14;
    dVar16 = param_2[6] * dVar1 + dVar6 * dVar7 + local_190 * dVar14;
    dVar12 = param_2[2] * dVar1 + local_180 * dVar7 + dVar14 * param_2[1];
    dVar15 = dVar5 * local_208 + dVar12 * local_128 + dVar16 * local_120;
    dVar8 = (double)(~uVar3 & (ulonglong)local_1d8 | uVar3 & (ulonglong)dVar13);
    dVar12 = (dVar5 * dVar1 + dVar12 * dVar7 + dVar14 * dVar16) - dVar8;
    dVar8 = ((local_188 * local_208 + dVar4 * local_128 + dVar9 * local_120) * local_208 +
            (param_2[2] * local_208 + local_180 * local_128 + param_2[1] * local_120) * local_128 +
            (param_2[6] * local_208 + dVar6 * local_128 + local_190 * local_120) * local_120) -
            dVar8;
    dVar4 = dVar12 * dVar12 + dVar15 * dVar15;
    dVar16 = dVar8 * dVar8 + dVar15 * dVar15;
    dVar9 = SQRT(dVar4);
    dVar6 = SQRT(dVar16);
    if ((9.999999747378752e-05 <= dVar9) || (9.999999747378752e-05 <= dVar6)) {
      if (dVar16 < dVar4) {
        dVar4 = -dVar15 / dVar9;
        dVar6 = dVar12 / dVar9;
      }
      else {
        dVar4 = 0.0;
        if (dVar16 <= 0.0) {
          dVar6 = 1.0;
        }
        else {
          dVar4 = dVar8 / dVar6;
          dVar6 = -dVar15 / dVar6;
        }
      }
      dVar9 = local_208 * dVar6 + dVar1 * dVar4;
      dVar12 = local_120 * dVar6 + dVar14 * dVar4;
      dVar4 = local_128 * dVar6 + dVar7 * dVar4;
      dVar6 = dVar9 * dVar9 + dVar4 * dVar4 + dVar12 * dVar12;
      if (((dVar6 != 1.0) || (dVar16 = dVar9, local_100 = dVar12, dVar5 = dVar4, NAN(dVar6))) &&
         (dVar16 = DAT_14c8464f0, local_100 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar16 = dVar9 * dVar6;
        local_100 = dVar12 * dVar6;
        dVar5 = dVar4 * dVar6;
      }
      dVar9 = dVar5 * local_1a8 - dVar2 * local_100;
      dVar4 = dVar16 * dVar2 - local_1b8 * dVar5;
      dVar6 = local_100 * local_1b8 - local_1a8 * dVar16;
      dVar7 = dVar9 * dVar9 + dVar6 * dVar6 + dVar4 * dVar4;
      if (((dVar7 != 1.0) || (local_118 = dVar9, local_120 = dVar4, local_128 = dVar6, NAN(dVar7)))
         && (local_118 = DAT_14c8464f0, local_120 = DAT_14c8464e8, local_128 = DAT_14c8464e0,
            9.99999993922529e-09 <= dVar7)) {
        dVar7 = 1.0 / SQRT(dVar7);
        local_118 = dVar9 * dVar7;
        local_120 = dVar4 * dVar7;
        local_128 = dVar6 * dVar7;
      }
    }
    else {
      dVar9 = dVar1 * dVar1 + dVar7 * dVar7 + dVar14 * dVar14;
      local_118 = local_208;
      if (((dVar9 != 1.0) || (dVar16 = dVar1, local_100 = dVar14, dVar5 = dVar7, NAN(dVar9))) &&
         (dVar16 = DAT_14c8464f0, local_100 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar9)) {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar16 = dVar1 * dVar9;
        local_100 = dVar14 * dVar9;
        dVar5 = dVar7 * dVar9;
      }
    }
    *param_2 = dVar13;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[5] = local_230;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[10] = local_1d8;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 1.0;
    local_f8 = dVar16;
    local_108 = dVar5;
    local_138 = local_1b8;
    local_140 = local_1a8;
    local_148 = dVar2;
    if (local_228 <= local_238) {
      local_f8 = -local_1b8;
      local_108 = -dVar2;
      local_138 = dVar16;
      local_140 = local_100;
      local_148 = dVar5;
      local_100 = -local_1a8;
    }
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0x3ff0000000000000;
    local_130 = 0;
    local_110 = 0;
    local_f0 = 0;
    local_1f8 = dVar2;
    FUN_14481fd10(&local_168);
    uVar10 = SUB84(local_160,0);
    uVar11 = (undefined4)((ulonglong)local_160 >> 0x20);
    if (0.0001 < ABS((float)SQRT(local_150 * local_150 +
                                 local_158 * local_158 +
                                 local_168 * local_168 + local_160 * local_160) + -1.0)) {
      local_150 = 1.0;
      local_168 = 0.0;
      uVar10 = 0;
      uVar11 = 0;
      local_158 = 0.0;
    }
    *param_1 = local_168;
    param_1[1] = (double)CONCAT44(uVar11,uVar10);
    param_1[2] = local_158;
    param_1[3] = local_150;
  }
  if ((local_c0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14076e672 FUN_14076e672 body=6323 status=ok
// SIG undefined FUN_14076e672(void)

void FUN_14076e672(longlong param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
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
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
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
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double local_108 [17];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar2) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14076e6f3_caseD_42:
    dVar15 = *(double *)(param_1 + 0x10);
    *(double *)(*param_3 + 8) = dVar15 * 4.188790321350098 * dVar15 * dVar15;
    *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
    pdVar12 = (double *)*param_3;
    dVar15 = *pdVar12 * 0.4 * *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10);
    pdVar12[10] = dVar15;
    pdVar12[0xb] = 0.0;
    pdVar12[0xc] = 0.0;
    pdVar12[0xd] = 0.0;
    pdVar12[0xe] = 0.0;
    pdVar12[0xf] = dVar15;
    pdVar12[0x10] = 0.0;
    pdVar12[0x11] = 0.0;
    pdVar12[0x12] = 0.0;
    pdVar12[0x13] = 0.0;
    pdVar12[0x14] = dVar15;
    pdVar12[0x15] = 0.0;
    pdVar12[0x16] = 0.0;
    pdVar12[0x17] = 0.0;
    pdVar12[0x18] = 0.0;
    pdVar12[0x19] = 1.0;
    dVar19 = *(double *)(param_1 + 0x20);
    dVar20 = *(double *)(param_1 + 0x28);
    dVar15 = *(double *)(param_1 + 0x30);
    break;
  case 1:
    *(double *)(*param_3 + 8) =
         (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) *
         (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) *
         (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30));
    *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
    pdVar12 = (double *)*param_3;
    dVar19 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
    dVar21 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
    dVar20 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
    dVar15 = *pdVar12 / 12.0;
    dVar20 = dVar20 * dVar20;
    dVar21 = dVar21 * dVar21;
    dVar19 = dVar19 * dVar19;
    pdVar12[10] = (dVar19 + dVar21) * dVar15;
    pdVar12[0xb] = 0.0;
    pdVar12[0xc] = 0.0;
    pdVar12[0xd] = 0.0;
    pdVar12[0xe] = 0.0;
    pdVar12[0xf] = (dVar20 + dVar19) * dVar15;
    pdVar12[0x10] = 0.0;
    pdVar12[0x11] = 0.0;
    pdVar12[0x12] = 0.0;
    pdVar12[0x13] = 0.0;
    pdVar12[0x14] = (dVar21 + dVar20) * dVar15;
    pdVar12[0x15] = 0.0;
    pdVar12[0x16] = 0.0;
    pdVar12[0x17] = 0.0;
    pdVar12[0x18] = 0.0;
    pdVar12[0x19] = 1.0;
    dVar15 = *(double *)(param_1 + 0x30);
    dVar23 = *(double *)(param_1 + 0x48) - dVar15;
    dVar19 = *(double *)(param_1 + 0x20);
    dVar20 = *(double *)(param_1 + 0x28);
    uVar26 = SUB84(dVar20,0);
    uVar27 = (undefined4)((ulonglong)dVar20 >> 0x20);
    dVar20 = *(double *)(param_1 + 0x40) - dVar20;
    dVar21 = *(double *)(param_1 + 0x38);
LAB_14076f289:
    dVar19 = ((dVar21 - dVar19) * 0.5 + dVar19) * param_2[8];
    dVar20 = (dVar20 * 0.5 + (double)CONCAT44(uVar27,uVar26)) * param_2[9];
    dVar18 = (dVar23 * 0.5 + dVar15) * param_2[10];
    dVar25 = *param_2;
    dVar14 = param_2[1];
    dVar17 = param_2[2];
    dVar15 = param_2[3];
    dVar21 = dVar20 * dVar25 - dVar14 * dVar19;
    dVar24 = dVar18 * dVar14 - dVar17 * dVar20;
    dVar23 = dVar19 * dVar17 - dVar25 * dVar18;
    dVar24 = dVar24 + dVar24;
    dVar23 = dVar23 + dVar23;
    dVar21 = dVar21 + dVar21;
    dVar19 = dVar15 * dVar24 + dVar19;
    dVar20 = param_2[3] * dVar23 + dVar20;
    dVar16 = dVar21 * dVar14 - dVar23 * dVar17;
    dVar17 = dVar17 * dVar24 - dVar25 * dVar21;
    dVar15 = dVar21 * dVar15 + dVar18 + (dVar23 * dVar25 - dVar24 * dVar14);
    goto LAB_14076f371;
  case 3:
    dVar15 = *(double *)(param_1 + 0x10);
    *(double *)(*param_3 + 8) =
         (dVar15 * 1.3333333730697632 + *(double *)(param_1 + 0x50)) *
         dVar15 * 3.1415927410125732 * dVar15;
    *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
    pdVar12 = (double *)*param_3;
    dVar15 = *(double *)(param_1 + 0x10);
    dVar19 = *(double *)(param_1 + 0x50);
    if (1.79769313486232e+308 <= dVar15) {
      dVar15 = 1.79769313486232e+308;
    }
    if (dVar15 <= 0.0) {
      dVar15 = 0.0;
    }
    if (1.79769313486232e+308 <= dVar19) {
      dVar19 = 1.79769313486232e+308;
    }
    if (dVar19 <= 0.0) {
      dVar19 = 0.0;
    }
    dVar20 = dVar15 * dVar15;
    dVar21 = ((dVar20 * 32.0 * dVar15 +
              dVar19 * 45.0 * dVar20 +
              dVar19 * dVar19 * 5.0 * dVar19 + dVar19 * dVar19 * 20.0 * dVar15) * *pdVar12) /
             (dVar19 * 60.0 + dVar15 * 80.0);
    pdVar12[10] = dVar21;
    pdVar12[0xb] = 0.0;
    pdVar12[0xc] = 0.0;
    pdVar12[0xd] = 0.0;
    pdVar12[0xe] = 0.0;
    pdVar12[0xf] = dVar21;
    pdVar12[0x10] = 0.0;
    pdVar12[0x11] = 0.0;
    pdVar12[0x12] = 0.0;
    pdVar12[0x13] = 0.0;
    pdVar12[0x14] =
         ((dVar19 * 15.0 + dVar15 * 16.0) * dVar20 * *pdVar12) / (dVar19 * 30.0 + dVar15 * 40.0);
    pdVar12[0x15] = 0.0;
    pdVar12[0x16] = 0.0;
    pdVar12[0x17] = 0.0;
    pdVar12[0x18] = 0.0;
    pdVar12[0x19] = 1.0;
    dVar15 = *(double *)(param_1 + 0x50) * 0.5;
    dVar14 = (*(double *)(param_1 + 0x38) * dVar15 + *(double *)(param_1 + 0x20)) * param_2[8];
    dVar19 = (*(double *)(param_1 + 0x40) * dVar15 + *(double *)(param_1 + 0x28)) * param_2[9];
    dVar18 = (dVar15 * *(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x30)) * param_2[10];
    dVar16 = *param_2;
    dVar17 = param_2[1];
    dVar25 = param_2[2];
    dVar15 = param_2[3];
    dVar20 = dVar19 * dVar16 - dVar14 * dVar17;
    dVar24 = dVar18 * dVar17 - dVar19 * dVar25;
    dVar21 = dVar14 * dVar25 - dVar16 * dVar18;
    dVar24 = dVar24 + dVar24;
    dVar21 = dVar21 + dVar21;
    dVar20 = dVar20 + dVar20;
    dVar23 = (dVar25 * dVar24 - dVar16 * dVar20) + param_2[3] * dVar21 + dVar19 + param_2[5];
    dVar19 = param_2[6];
    lVar11 = *param_3;
    auVar10._8_4_ = SUB84(dVar23,0);
    auVar10._0_8_ = (dVar20 * dVar17 - dVar21 * dVar25) + dVar15 * dVar24 + dVar14 + param_2[4];
    auVar10._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    *(undefined1 (*) [16])(lVar11 + 0x10) = auVar10;
    *(double *)(lVar11 + 0x20) =
         dVar20 * dVar15 + dVar18 + (dVar21 * dVar16 - dVar24 * dVar17) + dVar19;
    dVar15 = param_2[3];
    uVar38 = SUB84(dVar15,0);
    uVar39 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar15 = param_2[3];
    uVar40 = SUB84(dVar15,0);
    uVar41 = (undefined4)((ulonglong)dVar15 >> 0x20);
    uVar26 = SUB84(*param_2,0);
    uVar27 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uVar28 = SUB84(*param_2,0);
    uVar29 = (undefined4)((ulonglong)*param_2 >> 0x20);
    dVar15 = param_2[1];
    uVar34 = SUB84(dVar15,0);
    uVar35 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar15 = param_2[1];
    uVar36 = SUB84(dVar15,0);
    uVar37 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar15 = param_2[2];
    uVar30 = SUB84(dVar15,0);
    uVar31 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar15 = param_2[2];
    uVar32 = SUB84(dVar15,0);
    uVar33 = (undefined4)((ulonglong)dVar15 >> 0x20);
LAB_14076f6ea:
    local_118 = 0x3ff0000000000000;
    uStack_120 = 0;
    local_128 = 0;
    FUN_140269010(local_108,&local_128,param_1 + 0x38);
    dVar20 = local_108[1] * (double)CONCAT44(uVar31,uVar30) * -1.0 +
             (double)CONCAT44(uVar27,uVar26) * local_108[3] * 1.0 +
             (double)CONCAT44(uVar39,uVar38) * local_108[0] +
             (double)CONCAT44(uVar35,uVar34) * local_108[2];
    dVar21 = local_108[0] * (double)CONCAT44(uVar33,uVar32) * 1.0 +
             (double)CONCAT44(uVar29,uVar28) * local_108[2] * -1.0 +
             (double)CONCAT44(uVar41,uVar40) * local_108[1] +
             (double)CONCAT44(uVar37,uVar36) * local_108[3];
    dVar15 = local_108[3] * (double)CONCAT44(uVar31,uVar30) * 1.0 +
             (((double)CONCAT44(uVar27,uVar26) * local_108[1] * 1.0 +
              (double)CONCAT44(uVar39,uVar38) * local_108[2]) -
             (double)CONCAT44(uVar35,uVar34) * local_108[0]);
    dVar19 = local_108[2] * (double)CONCAT44(uVar33,uVar32) * -1.0 +
             (((double)CONCAT44(uVar29,uVar28) * local_108[0] * -1.0 +
              (double)CONCAT44(uVar41,uVar40) * local_108[3]) -
             (double)CONCAT44(uVar37,uVar36) * local_108[1]);
    goto LAB_14076f770;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_108,param_2);
    FUN_14076e672(*(undefined8 *)(param_1 + 0x20),local_108,param_3);
    goto LAB_14076f9b2;
  case 8:
    *(double *)(*param_3 + 8) = (double)*(float *)(param_1 + 0x68);
    *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
    pdVar12 = (double *)*param_3;
    dVar15 = *pdVar12;
    dVar19 = *(double *)(param_1 + 0x88);
    dVar20 = *(double *)(param_1 + 0x80);
    pdVar12[10] = dVar15 * *(double *)(param_1 + 0x78);
    pdVar12[0xb] = 0.0;
    pdVar12[0xc] = 0.0;
    pdVar12[0xd] = 0.0;
    pdVar12[0xe] = 0.0;
    pdVar12[0xf] = dVar20 * dVar15;
    pdVar12[0x10] = 0.0;
    pdVar12[0x11] = 0.0;
    pdVar12[0x12] = 0.0;
    pdVar12[0x13] = 0.0;
    pdVar12[0x14] = dVar19 * dVar15;
    pdVar12[0x15] = 0.0;
    pdVar12[0x16] = 0.0;
    pdVar12[0x17] = 0.0;
    pdVar12[0x18] = 0.0;
    pdVar12[0x19] = 1.0;
    dVar18 = (double)*(float *)(param_1 + 0x6c) * param_2[8];
    dVar19 = (double)*(float *)(param_1 + 0x70) * param_2[9];
    dVar14 = (double)*(float *)(param_1 + 0x74) * param_2[10];
    dVar16 = *param_2;
    dVar17 = param_2[1];
    dVar25 = param_2[2];
    dVar15 = param_2[3];
    dVar20 = dVar19 * dVar16 - dVar18 * dVar17;
    dVar24 = dVar14 * dVar17 - dVar19 * dVar25;
    dVar21 = dVar18 * dVar25 - dVar16 * dVar14;
    dVar24 = dVar24 + dVar24;
    dVar21 = dVar21 + dVar21;
    dVar20 = dVar20 + dVar20;
    dVar23 = (dVar25 * dVar24 - dVar16 * dVar20) + param_2[3] * dVar21 + dVar19 + param_2[5];
    dVar19 = param_2[6];
    lVar11 = *param_3;
    auVar7._8_4_ = SUB84(dVar23,0);
    auVar7._0_8_ = (dVar20 * dVar17 - dVar21 * dVar25) + dVar15 * dVar24 + dVar18 + param_2[4];
    auVar7._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    *(undefined1 (*) [16])(lVar11 + 0x10) = auVar7;
    *(double *)(lVar11 + 0x20) =
         dVar20 * dVar15 + dVar14 + (dVar21 * dVar16 - dVar24 * dVar17) + dVar19;
    dVar15 = *(double *)(param_1 + 0x90);
    dVar19 = *(double *)(param_1 + 0x98);
    dVar20 = *(double *)(param_1 + 0xa0);
    dVar21 = *(double *)(param_1 + 0xa8);
LAB_14076f920:
    dVar16 = param_2[3];
    dVar23 = param_2[3];
    dVar14 = param_2[1];
    dVar18 = param_2[1];
    dVar24 = *param_2;
    dVar1 = param_2[2];
    dVar22 = param_2[2];
    dVar17 = dVar21 * dVar1 * 1.0 + ((*param_2 * dVar19 * 1.0 + dVar16 * dVar20) - dVar14 * dVar15);
    dVar25 = dVar20 * dVar22 * -1.0 + ((dVar24 * dVar15 * -1.0 + dVar23 * dVar21) - dVar18 * dVar19)
    ;
    lVar11 = *param_3;
    *(double *)(lVar11 + 0x30) =
         dVar19 * dVar1 * -1.0 + dVar20 * dVar14 + *param_2 * dVar21 * 1.0 + dVar16 * dVar15;
    *(double *)(lVar11 + 0x38) =
         dVar15 * dVar22 * 1.0 + dVar21 * dVar18 + dVar24 * dVar20 * -1.0 + dVar23 * dVar19;
LAB_14076f9ad:
    *(double *)(lVar11 + 0x40) = dVar17;
    *(double *)(lVar11 + 0x48) = dVar25;
    goto LAB_14076f9b2;
  default:
    switch(uVar2) {
    case 0x40:
      lVar11 = *(longlong *)(param_1 + 0x28);
      dVar15 = *(double *)(lVar11 + 0x10);
      *(double *)(*param_3 + 8) = dVar15 * 4.188790321350098 * dVar15 * dVar15;
      *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
      pdVar12 = (double *)*param_3;
      dVar15 = *pdVar12 * 0.4 * *(double *)(lVar11 + 0x10) * *(double *)(lVar11 + 0x10);
      pdVar12[10] = dVar15;
      pdVar12[0xb] = 0.0;
      pdVar12[0xc] = 0.0;
      pdVar12[0xd] = 0.0;
      pdVar12[0xe] = 0.0;
      pdVar12[0xf] = dVar15;
      pdVar12[0x10] = 0.0;
      pdVar12[0x11] = 0.0;
      pdVar12[0x12] = 0.0;
      pdVar12[0x13] = 0.0;
      pdVar12[0x14] = dVar15;
      pdVar12[0x15] = 0.0;
      pdVar12[0x16] = 0.0;
      pdVar12[0x17] = 0.0;
      pdVar12[0x18] = 0.0;
      pdVar12[0x19] = 1.0;
      dVar19 = *(double *)(lVar11 + 0x20);
      dVar20 = *(double *)(lVar11 + 0x28);
      dVar15 = *(double *)(lVar11 + 0x30);
      break;
    case 0x41:
      lVar11 = *(longlong *)(param_1 + 0x28);
      *(double *)(*param_3 + 8) =
           (*(double *)(lVar11 + 0x38) - *(double *)(lVar11 + 0x20)) *
           (*(double *)(lVar11 + 0x40) - *(double *)(lVar11 + 0x28)) *
           (*(double *)(lVar11 + 0x48) - *(double *)(lVar11 + 0x30));
      *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
      pdVar12 = (double *)*param_3;
      dVar19 = *(double *)(lVar11 + 0x48) - *(double *)(lVar11 + 0x30);
      dVar21 = *(double *)(lVar11 + 0x40) - *(double *)(lVar11 + 0x28);
      dVar20 = *(double *)(lVar11 + 0x38) - *(double *)(lVar11 + 0x20);
      dVar15 = *pdVar12 / 12.0;
      dVar20 = dVar20 * dVar20;
      dVar21 = dVar21 * dVar21;
      dVar19 = dVar19 * dVar19;
      pdVar12[10] = (dVar19 + dVar21) * dVar15;
      pdVar12[0xb] = 0.0;
      pdVar12[0xc] = 0.0;
      pdVar12[0xd] = 0.0;
      pdVar12[0xe] = 0.0;
      pdVar12[0xf] = (dVar20 + dVar19) * dVar15;
      pdVar12[0x10] = 0.0;
      pdVar12[0x11] = 0.0;
      pdVar12[0x12] = 0.0;
      pdVar12[0x13] = 0.0;
      pdVar12[0x14] = (dVar21 + dVar20) * dVar15;
      pdVar12[0x15] = 0.0;
      pdVar12[0x16] = 0.0;
      pdVar12[0x17] = 0.0;
      pdVar12[0x18] = 0.0;
      pdVar12[0x19] = 1.0;
      dVar15 = *(double *)(lVar11 + 0x30);
      dVar23 = *(double *)(lVar11 + 0x48) - dVar15;
      dVar19 = *(double *)(lVar11 + 0x20);
      dVar20 = *(double *)(lVar11 + 0x28);
      uVar26 = SUB84(dVar20,0);
      uVar27 = (undefined4)((ulonglong)dVar20 >> 0x20);
      dVar20 = *(double *)(lVar11 + 0x40) - dVar20;
      dVar21 = *(double *)(lVar11 + 0x38);
      goto LAB_14076f289;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14076e6f3_caseD_42;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      dVar15 = *(double *)(param_1 + 0x10);
      *(double *)(*param_3 + 8) =
           (dVar15 * 1.3333333730697632 + *(double *)(param_1 + 0x50)) *
           dVar15 * 3.1415927410125732 * dVar15;
      *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
      pdVar12 = (double *)*param_3;
      dVar15 = *(double *)(param_1 + 0x10);
      dVar19 = *(double *)(param_1 + 0x50);
      if (1.79769313486232e+308 <= dVar15) {
        dVar15 = 1.79769313486232e+308;
      }
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      if (1.79769313486232e+308 <= dVar19) {
        dVar19 = 1.79769313486232e+308;
      }
      if (dVar19 <= 0.0) {
        dVar19 = 0.0;
      }
      dVar20 = dVar15 * dVar15;
      dVar21 = ((dVar20 * 32.0 * dVar15 +
                dVar19 * 45.0 * dVar20 +
                dVar19 * dVar19 * 5.0 * dVar19 + dVar19 * dVar19 * 20.0 * dVar15) * *pdVar12) /
               (dVar19 * 60.0 + dVar15 * 80.0);
      pdVar12[10] = dVar21;
      pdVar12[0xb] = 0.0;
      pdVar12[0xc] = 0.0;
      pdVar12[0xd] = 0.0;
      pdVar12[0xe] = 0.0;
      pdVar12[0xf] = dVar21;
      pdVar12[0x10] = 0.0;
      pdVar12[0x11] = 0.0;
      pdVar12[0x12] = 0.0;
      pdVar12[0x13] = 0.0;
      pdVar12[0x14] =
           ((dVar19 * 15.0 + dVar15 * 16.0) * dVar20 * *pdVar12) / (dVar19 * 30.0 + dVar15 * 40.0);
      pdVar12[0x15] = 0.0;
      pdVar12[0x16] = 0.0;
      pdVar12[0x17] = 0.0;
      pdVar12[0x18] = 0.0;
      pdVar12[0x19] = 1.0;
      dVar15 = *(double *)(param_1 + 0x50) * 0.5;
      dVar14 = (*(double *)(param_1 + 0x38) * dVar15 + *(double *)(param_1 + 0x20)) * param_2[8];
      dVar19 = (*(double *)(param_1 + 0x40) * dVar15 + *(double *)(param_1 + 0x28)) * param_2[9];
      dVar18 = (dVar15 * *(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x30)) * param_2[10];
      dVar16 = *param_2;
      dVar17 = param_2[1];
      dVar25 = param_2[2];
      dVar15 = param_2[3];
      dVar20 = dVar19 * dVar16 - dVar14 * dVar17;
      dVar24 = dVar18 * dVar17 - dVar19 * dVar25;
      dVar21 = dVar14 * dVar25 - dVar16 * dVar18;
      dVar24 = dVar24 + dVar24;
      dVar21 = dVar21 + dVar21;
      dVar20 = dVar20 + dVar20;
      dVar23 = (dVar25 * dVar24 - dVar16 * dVar20) + param_2[3] * dVar21 + dVar19 + param_2[5];
      dVar19 = param_2[6];
      lVar11 = *param_3;
      auVar9._8_4_ = SUB84(dVar23,0);
      auVar9._0_8_ = (dVar20 * dVar17 - dVar21 * dVar25) + dVar15 * dVar24 + dVar14 + param_2[4];
      auVar9._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])(lVar11 + 0x10) = auVar9;
      *(double *)(lVar11 + 0x20) =
           dVar20 * dVar15 + dVar18 + (dVar21 * dVar16 - dVar24 * dVar17) + dVar19;
      dVar15 = param_2[3];
      uVar38 = SUB84(dVar15,0);
      uVar39 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar15 = param_2[3];
      uVar40 = SUB84(dVar15,0);
      uVar41 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar26 = SUB84(*param_2,0);
      uVar27 = (undefined4)((ulonglong)*param_2 >> 0x20);
      uVar28 = SUB84(*param_2,0);
      uVar29 = (undefined4)((ulonglong)*param_2 >> 0x20);
      dVar15 = param_2[1];
      uVar34 = SUB84(dVar15,0);
      uVar35 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar15 = param_2[1];
      uVar36 = SUB84(dVar15,0);
      uVar37 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar15 = param_2[2];
      uVar30 = SUB84(dVar15,0);
      uVar31 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar15 = param_2[2];
      uVar32 = SUB84(dVar15,0);
      uVar33 = (undefined4)((ulonglong)dVar15 >> 0x20);
      goto LAB_14076f6ea;
    case 0x48:
      lVar11 = *(longlong *)(param_1 + 0x28);
      *(double *)(*param_3 + 8) = (double)*(float *)(lVar11 + 0x68);
      *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
      pdVar12 = (double *)*param_3;
      dVar15 = *pdVar12;
      dVar19 = *(double *)(lVar11 + 0x88);
      dVar20 = *(double *)(lVar11 + 0x80);
      pdVar12[10] = dVar15 * *(double *)(lVar11 + 0x78);
      pdVar12[0xb] = 0.0;
      pdVar12[0xc] = 0.0;
      pdVar12[0xd] = 0.0;
      pdVar12[0xe] = 0.0;
      pdVar12[0xf] = dVar20 * dVar15;
      pdVar12[0x10] = 0.0;
      pdVar12[0x11] = 0.0;
      pdVar12[0x12] = 0.0;
      pdVar12[0x13] = 0.0;
      pdVar12[0x14] = dVar19 * dVar15;
      pdVar12[0x15] = 0.0;
      pdVar12[0x16] = 0.0;
      pdVar12[0x17] = 0.0;
      pdVar12[0x18] = 0.0;
      pdVar12[0x19] = 1.0;
      dVar18 = (double)*(float *)(lVar11 + 0x6c) * param_2[8];
      dVar19 = (double)*(float *)(lVar11 + 0x70) * param_2[9];
      dVar14 = (double)*(float *)(lVar11 + 0x74) * param_2[10];
      dVar16 = *param_2;
      dVar17 = param_2[1];
      dVar25 = param_2[2];
      dVar15 = param_2[3];
      dVar20 = dVar19 * dVar16 - dVar18 * dVar17;
      dVar24 = dVar14 * dVar17 - dVar19 * dVar25;
      dVar21 = dVar18 * dVar25 - dVar16 * dVar14;
      dVar24 = dVar24 + dVar24;
      dVar21 = dVar21 + dVar21;
      dVar20 = dVar20 + dVar20;
      dVar23 = (dVar25 * dVar24 - dVar16 * dVar20) + param_2[3] * dVar21 + dVar19 + param_2[5];
      dVar19 = param_2[6];
      lVar3 = *param_3;
      auVar4._8_4_ = SUB84(dVar23,0);
      auVar4._0_8_ = (dVar20 * dVar17 - dVar21 * dVar25) + dVar15 * dVar24 + dVar18 + param_2[4];
      auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      *(undefined1 (*) [16])(lVar3 + 0x10) = auVar4;
      *(double *)(lVar3 + 0x20) =
           dVar20 * dVar15 + dVar14 + (dVar21 * dVar16 - dVar24 * dVar17) + dVar19;
LAB_14076f910:
      dVar15 = *(double *)(lVar11 + 0x90);
      dVar19 = *(double *)(lVar11 + 0x98);
      dVar20 = *(double *)(lVar11 + 0xa0);
      dVar21 = *(double *)(lVar11 + 0xa8);
      goto LAB_14076f920;
    default:
      switch(uVar2) {
      case 0x80:
        dVar15 = *(double *)(*(longlong *)(param_1 + 0x88) + 0x10);
        *(double *)(*param_3 + 8) =
             dVar15 * 4.188790321350098 * dVar15 * dVar15 *
             ABS(*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) *
                 *(double *)(param_1 + 0x30));
        *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
        FUN_146ddafa2(param_1,local_108,*(undefined8 *)*param_3);
        pdVar12 = local_108;
        pdVar13 = (double *)(*param_3 + 0x50);
        for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        lVar11 = *(longlong *)(param_1 + 0x88);
        dVar20 = *(double *)(param_1 + 0x30) * *(double *)(lVar11 + 0x30);
        dVar19 = *(double *)(param_1 + 0x28) * *(double *)(lVar11 + 0x28);
        dVar15 = *(double *)(param_1 + 0x20) * *(double *)(lVar11 + 0x20);
        break;
      case 0x81:
        lVar11 = *(longlong *)(param_1 + 0x88);
        *(double *)(*param_3 + 8) =
             (*(double *)(lVar11 + 0x38) - *(double *)(lVar11 + 0x20)) *
             (*(double *)(lVar11 + 0x40) - *(double *)(lVar11 + 0x28)) *
             (*(double *)(lVar11 + 0x48) - *(double *)(lVar11 + 0x30)) *
             ABS(*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) *
                 *(double *)(param_1 + 0x30));
        *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
        FUN_146ddb1be(param_1,local_108,*(undefined8 *)*param_3);
        pdVar12 = local_108;
        pdVar13 = (double *)(*param_3 + 0x50);
        for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        lVar11 = *(longlong *)(param_1 + 0x88);
        dVar20 = ((*(double *)(lVar11 + 0x48) - *(double *)(lVar11 + 0x30)) * 0.5 +
                 *(double *)(lVar11 + 0x30)) * *(double *)(param_1 + 0x30);
        dVar19 = ((*(double *)(lVar11 + 0x40) - *(double *)(lVar11 + 0x28)) * 0.5 +
                 *(double *)(lVar11 + 0x28)) * *(double *)(param_1 + 0x28);
        dVar15 = ((*(double *)(lVar11 + 0x38) - *(double *)(lVar11 + 0x20)) * 0.5 +
                 *(double *)(lVar11 + 0x20)) * *(double *)(param_1 + 0x20);
        break;
      default:
        goto switchD_14076e6f3_caseD_42;
      case 0x83:
        dVar15 = *(double *)(*(longlong *)(param_1 + 0x88) + 0x10);
        *(double *)(*param_3 + 8) =
             (dVar15 * 1.3333333730697632 + *(double *)(*(longlong *)(param_1 + 0x88) + 0x50)) *
             dVar15 * 3.1415927410125732 * dVar15 *
             ABS(*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) *
                 *(double *)(param_1 + 0x30));
        *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
        FUN_146ddb2b0(param_1,local_108,*(undefined8 *)*param_3);
        pdVar12 = local_108;
        pdVar13 = (double *)(*param_3 + 0x50);
        for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        lVar11 = *(longlong *)(param_1 + 0x88);
        dVar15 = *(double *)(lVar11 + 0x50) * 0.5;
        dVar14 = (*(double *)(lVar11 + 0x38) * dVar15 + *(double *)(lVar11 + 0x20)) *
                 *(double *)(param_1 + 0x20) * param_2[8];
        dVar19 = (*(double *)(lVar11 + 0x40) * dVar15 + *(double *)(lVar11 + 0x28)) *
                 *(double *)(param_1 + 0x28) * param_2[9];
        dVar18 = (dVar15 * *(double *)(lVar11 + 0x48) + *(double *)(lVar11 + 0x30)) *
                 *(double *)(param_1 + 0x30) * param_2[10];
        dVar16 = *param_2;
        dVar17 = param_2[1];
        dVar25 = param_2[2];
        dVar15 = param_2[3];
        dVar20 = dVar19 * dVar16 - dVar14 * dVar17;
        dVar24 = dVar18 * dVar17 - dVar19 * dVar25;
        dVar21 = dVar14 * dVar25 - dVar16 * dVar18;
        dVar24 = dVar24 + dVar24;
        dVar21 = dVar21 + dVar21;
        dVar20 = dVar20 + dVar20;
        dVar23 = (dVar25 * dVar24 - dVar16 * dVar20) + param_2[3] * dVar21 + dVar19 + param_2[5];
        dVar19 = param_2[6];
        lVar11 = *param_3;
        auVar6._8_4_ = SUB84(dVar23,0);
        auVar6._0_8_ = (dVar20 * dVar17 - dVar21 * dVar25) + dVar15 * dVar24 + dVar14 + param_2[4];
        auVar6._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        *(undefined1 (*) [16])(lVar11 + 0x10) = auVar6;
        *(double *)(lVar11 + 0x20) =
             dVar20 * dVar15 + dVar18 + (dVar21 * dVar16 - dVar24 * dVar17) + dVar19;
        dVar15 = param_2[3];
        uVar38 = SUB84(dVar15,0);
        uVar39 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar15 = param_2[3];
        uVar40 = SUB84(dVar15,0);
        uVar41 = (undefined4)((ulonglong)dVar15 >> 0x20);
        uVar26 = SUB84(*param_2,0);
        uVar27 = (undefined4)((ulonglong)*param_2 >> 0x20);
        uVar28 = SUB84(*param_2,0);
        uVar29 = (undefined4)((ulonglong)*param_2 >> 0x20);
        dVar15 = param_2[1];
        uVar34 = SUB84(dVar15,0);
        uVar35 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar15 = param_2[1];
        uVar36 = SUB84(dVar15,0);
        uVar37 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar15 = param_2[2];
        uVar30 = SUB84(dVar15,0);
        uVar31 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar15 = param_2[2];
        uVar32 = SUB84(dVar15,0);
        uVar33 = (undefined4)((ulonglong)dVar15 >> 0x20);
        param_1 = *(longlong *)(param_1 + 0x88);
        goto LAB_14076f6ea;
      case 0x88:
        *(double *)(*param_3 + 8) =
             (double)*(float *)(*(longlong *)(param_1 + 0x88) + 0x68) *
             ABS(*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28) *
                 *(double *)(param_1 + 0x30));
        *(double *)*param_3 = ((double *)*param_3)[1] * (double)param_3[1];
        pdVar12 = (double *)*param_3;
        dVar15 = *pdVar12;
        lVar11 = *(longlong *)(param_1 + 0x88);
        dVar17 = *(double *)(lVar11 + 0x88) * dVar15;
        dVar19 = *(double *)(lVar11 + 0x80) * dVar15;
        dVar15 = dVar15 * *(double *)(lVar11 + 0x78);
        dVar20 = ABS(*(double *)(param_1 + 0x30));
        dVar23 = ABS(*(double *)(param_1 + 0x28));
        dVar21 = ABS(*(double *)(param_1 + 0x20));
        dVar16 = (dVar19 + dVar15 + dVar17) * 0.5;
        dVar17 = (dVar16 - dVar17) * dVar20 * dVar20;
        dVar25 = (dVar16 - dVar19) * dVar23 * dVar23;
        dVar19 = (dVar16 - dVar15) * dVar21 * dVar21;
        dVar15 = dVar23 * 0.0 * dVar20;
        dVar20 = dVar20 * dVar21 * 0.0;
        dVar23 = dVar21 * 0.0 * dVar23;
        pdVar12[10] = dVar25 + dVar17;
        pdVar12[0xb] = dVar23;
        pdVar12[0xc] = dVar20;
        pdVar12[0xd] = 0.0;
        pdVar12[0xe] = dVar23;
        pdVar12[0xf] = dVar19 + dVar17;
        pdVar12[0x10] = dVar15;
        pdVar12[0x11] = 0.0;
        pdVar12[0x12] = dVar20;
        pdVar12[0x13] = dVar15;
        pdVar12[0x14] = dVar19 + dVar25;
        pdVar12[0x15] = 0.0;
        pdVar12[0x16] = 0.0;
        pdVar12[0x17] = 0.0;
        pdVar12[0x18] = 0.0;
        pdVar12[0x19] = 1.0;
        lVar11 = *(longlong *)(param_1 + 0x88);
        dVar14 = (double)*(float *)(lVar11 + 0x6c) * *(double *)(param_1 + 0x20) * param_2[8];
        dVar19 = (double)*(float *)(lVar11 + 0x70) * *(double *)(param_1 + 0x28) * param_2[9];
        dVar18 = (double)*(float *)(lVar11 + 0x74) * *(double *)(param_1 + 0x30) * param_2[10];
        dVar16 = *param_2;
        dVar17 = param_2[1];
        dVar25 = param_2[2];
        dVar15 = param_2[3];
        dVar20 = dVar19 * dVar16 - dVar14 * dVar17;
        dVar24 = dVar18 * dVar17 - dVar19 * dVar25;
        dVar21 = dVar14 * dVar25 - dVar16 * dVar18;
        dVar24 = dVar24 + dVar24;
        dVar21 = dVar21 + dVar21;
        dVar20 = dVar20 + dVar20;
        dVar23 = (dVar25 * dVar24 - dVar16 * dVar20) + param_2[3] * dVar21 + dVar19 + param_2[5];
        dVar19 = param_2[6];
        lVar11 = *param_3;
        auVar5._8_4_ = SUB84(dVar23,0);
        auVar5._0_8_ = (dVar20 * dVar17 - dVar21 * dVar25) + dVar15 * dVar24 + dVar14 + param_2[4];
        auVar5._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        *(undefined1 (*) [16])(lVar11 + 0x10) = auVar5;
        *(double *)(lVar11 + 0x20) =
             dVar20 * dVar15 + dVar18 + (dVar21 * dVar16 - dVar24 * dVar17) + dVar19;
        lVar11 = *(longlong *)(param_1 + 0x88);
        goto LAB_14076f910;
      }
      dVar15 = dVar15 * param_2[8];
      dVar19 = dVar19 * param_2[9];
      dVar20 = dVar20 * param_2[10];
      dVar18 = *param_2;
      dVar24 = param_2[1];
      dVar1 = param_2[2];
      dVar23 = param_2[3];
      dVar21 = param_2[3];
      dVar25 = dVar19 * dVar18 - dVar15 * dVar24;
      dVar22 = dVar20 * dVar24 - dVar19 * dVar1;
      dVar14 = dVar15 * dVar1 - dVar18 * dVar20;
      dVar22 = dVar22 + dVar22;
      dVar14 = dVar14 + dVar14;
      dVar25 = dVar25 + dVar25;
      dVar17 = param_2[5];
      dVar16 = param_2[6];
      lVar11 = *param_3;
      *(double *)(lVar11 + 0x10) =
           (dVar25 * dVar24 - dVar14 * dVar1) + dVar23 * dVar22 + dVar15 + param_2[4];
      *(double *)(lVar11 + 0x18) =
           (dVar1 * dVar22 - dVar18 * dVar25) + dVar21 * dVar14 + dVar19 + dVar17;
      *(double *)(lVar11 + 0x20) =
           dVar25 * dVar23 + dVar20 + (dVar14 * dVar18 - dVar22 * dVar24) + dVar16;
      dVar15 = param_2[3];
      dVar19 = param_2[3];
      dVar20 = *param_2;
      dVar21 = param_2[2];
      dVar23 = param_2[1];
      dVar16 = param_2[1];
      dVar17 = dVar21 * 1.0 * 1.0 + ((dVar20 * 0.0 * 1.0 + dVar15 * 0.0) - dVar23 * 0.0);
      dVar25 = dVar21 * 0.0 * -1.0 + ((dVar20 * 0.0 * -1.0 + dVar19 * 1.0) - dVar16 * 0.0);
      lVar11 = *param_3;
      *(double *)(lVar11 + 0x30) =
           dVar21 * 0.0 * -1.0 + dVar23 * 0.0 + dVar20 * 1.0 * 1.0 + dVar15 * 0.0;
      *(double *)(lVar11 + 0x38) =
           dVar21 * 0.0 * 1.0 + dVar16 * 1.0 + dVar20 * 0.0 * -1.0 + dVar19 * 0.0;
      goto LAB_14076f9ad;
    }
  }
  dVar19 = dVar19 * param_2[8];
  dVar20 = dVar20 * param_2[9];
  dVar15 = dVar15 * param_2[10];
  dVar14 = *param_2;
  dVar18 = param_2[1];
  dVar17 = param_2[2];
  dVar21 = param_2[3];
  dVar23 = dVar20 * dVar14 - dVar19 * dVar18;
  dVar24 = dVar15 * dVar18 - dVar20 * dVar17;
  dVar25 = dVar19 * dVar17 - dVar14 * dVar15;
  dVar24 = dVar24 + dVar24;
  dVar25 = dVar25 + dVar25;
  dVar23 = dVar23 + dVar23;
  dVar19 = dVar21 * dVar24 + dVar19;
  dVar20 = param_2[3] * dVar25 + dVar20;
  dVar16 = dVar23 * dVar18 - dVar25 * dVar17;
  dVar17 = dVar17 * dVar24 - dVar14 * dVar23;
  dVar15 = dVar23 * dVar21 + dVar15 + (dVar25 * dVar14 - dVar24 * dVar18);
LAB_14076f371:
  dVar21 = dVar17 + dVar20 + param_2[5];
  dVar20 = param_2[6];
  lVar11 = *param_3;
  auVar8._8_4_ = SUB84(dVar21,0);
  auVar8._0_8_ = dVar16 + dVar19 + param_2[4];
  auVar8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(lVar11 + 0x10) = auVar8;
  *(double *)(lVar11 + 0x20) = dVar15 + dVar20;
  dVar15 = param_2[3];
  dVar19 = param_2[3];
  dVar23 = *param_2;
  dVar16 = param_2[2];
  dVar25 = param_2[1];
  dVar17 = param_2[1];
  dVar20 = dVar16 * 0.0 * -1.0 + dVar25 * 0.0 + dVar23 * 1.0 * 1.0 + dVar15 * 0.0;
  dVar21 = dVar16 * 0.0 * 1.0 + dVar17 * 1.0 + dVar23 * 0.0 * -1.0 + dVar19 * 0.0;
  dVar15 = dVar16 * 1.0 * 1.0 + ((dVar23 * 0.0 * 1.0 + dVar15 * 0.0) - dVar25 * 0.0);
  dVar19 = dVar16 * 0.0 * -1.0 + ((dVar23 * 0.0 * -1.0 + dVar19 * 1.0) - dVar17 * 0.0);
LAB_14076f770:
  lVar11 = *param_3;
  *(double *)(lVar11 + 0x30) = dVar20;
  *(double *)(lVar11 + 0x38) = dVar21;
  *(double *)(lVar11 + 0x40) = dVar15;
  *(double *)(lVar11 + 0x48) = dVar19;
LAB_14076f9b2:
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14076ff26 FUN_14076ff26 body=124 status=ok
// SIG undefined FUN_14076ff26(void)

undefined8 * FUN_14076ff26(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2bd500;
  param_1[6] = &PTR_FUN_14b2bd7f0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xf00000d000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x1ffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = DAT_14cb8ce08;
  return param_1;
}



// FUNCTION 14076ffa2 FUN_14076ffa2 body=248 status=ok
// SIG undefined FUN_14076ffa2(void)

undefined8 * FUN_14076ffa2(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14007ca06();
  FUN_14077009c(param_1,uVar1);
  *param_1 = &PTR_FUN_14b2b5560;
  param_1[6] = &PTR_LAB_14b2b5850;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[7] = DAT_14cb8d430;
  FUN_140770122();
  uVar1 = DAT_14cb8cc70;
  FUN_1446f470e(&local_30,L"Options",1);
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xc] = lVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14077009c FUN_14077009c body=134 status=ok
// SIG undefined FUN_14077009c(void)

undefined8 * FUN_14077009c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a8a2ea0;
  param_1[5] = 0;
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[5] = lVar1;
  return param_1;
}



// FUNCTION 140770122 FUN_140770122 body=236 status=ok
// SIG undefined FUN_140770122(void)

void FUN_140770122(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb8cc78 == '\0') {
    DAT_14cb8cc78 = '\x01';
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    local_38 = &DAT_14c872ce8;
    cVar1 = FUN_1449da20c(DAT_14c872ce0,L"GbxTrick",L"OptionsClass");
    if (cVar1 != '\0') {
      puVar3 = local_28;
      if ((int)uStack_20 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      uVar2 = FUN_14594c14c();
      local_30 = 0;
      local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff00000000);
      DAT_14cb8cc70 = FUN_141433b6f(uVar2,0,puVar3,0);
    }
    if (DAT_14cb8cc70 == 0) {
      DAT_14cb8cc70 = FUN_14594c14c();
    }
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140770210 FUN_140770210 body=26 status=ok
// SIG undefined FUN_140770210(void)

void FUN_140770210(undefined8 param_1)

{
  FUN_14077022a();
  FUN_1449e8d62(param_1);
  return;
}



// FUNCTION 14077022a FUN_14077022a body=5315 status=ok
// SIG undefined FUN_14077022a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077022a(longlong param_1,double *param_2,double param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar8;
  double dVar9;
  double dVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar20;
  double dVar21;
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auStack_338 [32];
  double local_318;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
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
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  double *pdVar7;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  auVar23 = *(undefined1 (*) [16])(param_2 + 8);
  dVar18 = auVar23._0_8_;
  dVar20 = auVar23._8_8_;
  dVar14 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x1d0);
  dVar22 = auVar24._0_8_;
  dVar40 = auVar24._8_8_;
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x1e0);
  dVar49 = auVar26._0_8_;
  uVar45 = auVar26._0_4_;
  uVar46 = auVar26._4_4_;
  uVar47 = auVar26._8_4_;
  uVar48 = auVar26._12_4_;
  auVar23 = minpd(auVar24,auVar23);
  auVar34 = minpd(auVar26,*(undefined1 (*) [16])(param_2 + 10));
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  iVar2 = movmskpd((int)local_c0,auVar24);
  auVar23._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar23._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar5 = movmskpd((int)param_1,auVar23);
  local_318 = param_3;
  if ((uVar5 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar9 = *(double *)(param_1 + 400);
    dVar13 = *(double *)(param_1 + 0x198);
    dVar43 = *(double *)(param_1 + 0x1a0);
    dVar33 = *(double *)(param_1 + 0x1a8);
    dVar38 = *param_2;
    dVar42 = param_2[1];
    dVar55 = param_2[2];
    dVar21 = param_2[3];
    dVar53 = param_2[3];
    dVar49 = param_2[1];
    dVar15 = param_2[1];
    dVar52 = param_2[2];
    dVar39 = param_2[2];
    local_2f8 = dVar13 * dVar52 * -1.0 + dVar43 * dVar49 + dVar33 * *param_2 * 1.0 + dVar9 * dVar21;
    dStack_2f0 = dVar9 * dVar39 * 1.0 + dVar33 * dVar15 + dVar43 * *param_2 * -1.0 + dVar13 * dVar53
    ;
    local_308._8_8_ =
         dVar43 * dVar39 * -1.0 + ((*param_2 * dVar9 * -1.0 + dVar33 * dVar53) - dVar13 * dVar15);
    local_308._0_8_ =
         dVar33 * dVar52 * 1.0 + ((*param_2 * dVar13 * 1.0 + dVar43 * dVar21) - dVar9 * dVar49);
    dVar18 = dVar18 * *(double *)(param_1 + 0x1b0);
    dVar20 = dVar20 * *(double *)(param_1 + 0x1b8);
    dVar14 = dVar14 * *(double *)(param_1 + 0x1c0);
    dVar52 = dVar20 * dVar38 - dVar42 * dVar18;
    dVar39 = dVar14 * dVar42 - dVar55 * dVar20;
    dVar15 = dVar18 * dVar55 - dVar38 * dVar14;
    dVar39 = dVar39 + dVar39;
    dVar15 = dVar15 + dVar15;
    dVar52 = dVar52 + dVar52;
    uVar6 = 0;
    dVar49 = (dVar15 * dVar38 - dVar42 * dVar39) + dVar21 * dVar52 + dVar14 + param_2[6];
    dVar18 = (dVar52 * dVar42 - dVar55 * dVar15) + dVar21 * dVar39 + dVar18 + param_2[4];
    dVar14 = (dVar39 * dVar55 - dVar52 * dVar38) + dVar53 * dVar15 + dVar20 + param_2[5];
  }
  else {
    dVar9 = *param_2;
    dVar13 = param_2[1];
    dVar53 = param_2[2];
    dVar29 = dVar13 + dVar13;
    dVar30 = dVar53 + dVar53;
    dVar15 = dVar9 * (dVar9 + dVar9);
    local_2c8 = (1.0 - (dVar53 * dVar30 + dVar13 * dVar29)) * dVar18;
    dVar21 = (1.0 - (dVar53 * dVar30 + dVar15)) * dVar20;
    dVar53 = param_2[3];
    dVar31 = dVar30 * dVar53;
    dVar37 = (dVar9 + dVar9) * param_2[3];
    dVar53 = dVar29 * dVar53;
    dVar52 = (dVar53 + *param_2 * dVar30) * dVar14;
    dVar54 = (dVar29 * dVar9 - dVar31) * dVar20;
    dVar56 = (dVar30 * dVar13 - dVar37) * dVar14;
    local_298._8_4_ = SUB84(dVar21,0);
    local_298._0_8_ = dVar54;
    local_298._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar43 = *(double *)(param_1 + 400);
    dVar33 = *(double *)(param_1 + 0x198);
    dVar55 = *(double *)(param_1 + 0x1a0);
    dVar39 = dVar33 + dVar33;
    dVar32 = dVar55 + dVar55;
    dStack_2f0 = *(double *)(param_1 + 0x1a8) + *(double *)(param_1 + 0x1a8);
    local_2f8 = dVar32 * dVar43;
    local_288 = dVar43 * (dVar43 + dVar43);
    dStack_280 = dVar33 * dVar39;
    dVar21 = *(double *)(param_1 + 0x1a8);
    dVar50 = dVar32 * dVar21;
    dVar51 = (dVar43 + dVar43) * *(double *)(param_1 + 0x1a8);
    dVar38 = (dVar39 * dVar43 - dVar50) * dVar40;
    dVar42 = (dVar32 * dVar33 - dVar51) * dVar49;
    dStack_2c0 = (dVar29 * dVar9 + dVar31) * dVar18;
    dVar41 = (dVar30 * dVar13 + dVar37) * dVar20;
    dVar31 = (1.0 - (dVar55 * dVar32 + dStack_280)) * dVar22;
    dVar37 = (1.0 - (dVar55 * dVar32 + local_288)) * dVar40;
    dVar43 = (dVar39 * dVar43 + dVar50) * dVar22;
    dVar33 = (dVar32 * dVar33 + dVar51) * dVar40;
    local_2b8 = (*param_2 * dVar30 - dVar53) * dVar18;
    uStack_2b0 = 0;
    dVar39 = dVar39 * dVar21;
    local_2d8 = dVar18 * dVar22;
    dStack_2d0 = dVar20 * dVar40;
    dVar22 = (local_2f8 - dVar39) * dVar22;
    local_278 = dVar52 * dVar22 + dVar54 * dVar43 + local_2c8 * dVar31;
    dStack_270 = dVar56 * dVar22 + (double)local_298._8_8_ * dVar43 + dStack_2c0 * dVar31;
    dVar55 = (1.0 - (dVar15 + dVar13 * dVar29)) * dVar14;
    local_2a8 = dVar52 * dVar33 + dVar54 * dVar37 + local_2c8 * dVar38;
    dStack_2a0 = dVar56 * dVar33 + (double)local_298._8_8_ * dVar37 + dStack_2c0 * dVar38;
    dVar39 = (dVar39 + local_2f8) * dVar49;
    dVar29 = (1.0 - (local_288 + dStack_280)) * dVar49;
    dVar18 = *(double *)(param_1 + 0x1b0);
    dVar20 = *(double *)(param_1 + 0x1b0);
    dVar40 = *(double *)(param_1 + 0x1b8);
    dVar53 = *(double *)(param_1 + 0x1b8);
    dVar21 = *(double *)(param_1 + 0x1c0);
    dVar15 = *(double *)(param_1 + 0x1c0);
    local_e8 = dVar52 * dVar21 + dVar54 * dVar40 + local_2c8 * dVar18 + param_2[4];
    dStack_e0 = dVar56 * dVar15 + (double)local_298._8_8_ * dVar53 + dStack_2c0 * dVar20 +
                param_2[5];
    dVar9 = param_2[4] * 0.0;
    dVar13 = param_2[5] * 0.0;
    local_d8 = dVar55 * dVar21 + dVar41 * dVar40 + dVar18 * local_2b8 + param_2[6];
    dStack_d0 = dVar15 * 0.0 + dVar53 * 0.0 + dVar20 * 0.0 + 1.0;
    dVar30 = param_2[6] * 0.0;
    dVar20 = local_278 + dVar9;
    dVar40 = dStack_270 + dVar13;
    local_308._0_8_ = dVar22 * dVar55 + dVar43 * dVar41 + dVar31 * local_2b8 + dVar30;
    dStack_130 = dVar22 * 0.0 + dVar43 * 0.0 + dVar31 * 0.0 + 0.0;
    dVar18 = local_2a8 + dVar9;
    dVar22 = dStack_2a0 + dVar13;
    dVar53 = dVar33 * dVar55 + dVar37 * dVar41 + dVar38 * local_2b8 + dVar30;
    dVar21 = dVar33 * 0.0 + dVar37 * 0.0 + dVar38 * 0.0 + 0.0;
    dVar9 = dVar52 * dVar29 + dVar54 * dVar42 + local_2c8 * dVar39 + dVar9;
    dVar13 = dVar56 * dVar29 + (double)local_298._8_8_ * dVar42 + dStack_2c0 * dVar39 + dVar13;
    dVar30 = dVar29 * dVar55 + dVar42 * dVar41 + dVar39 * local_2b8 + dVar30;
    dStack_f0 = dVar29 * 0.0 + dVar42 * 0.0 + dVar39 * 0.0 + 0.0;
    local_308._8_8_ = dStack_130;
    auVar34._8_4_ = SUB84(dVar21,0);
    auVar34._0_8_ = dVar53;
    auVar34._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar21 = (double)local_308._0_8_ * (double)local_308._0_8_ + dVar20 * dVar20 + dVar40 * dVar40;
    dVar15 = dVar53 * dVar53 + dVar18 * dVar18 + dVar22 * dVar22;
    dVar52 = dVar30 * dVar30 + dVar9 * dVar9 + dVar13 * dVar13;
    uVar8 = -(ulonglong)(0.0 <= dVar21 + -9.99999993922529e-09);
    dVar21 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar21)) & uVar8);
    uVar8 = -(ulonglong)(0.0 <= dVar15 + -9.99999993922529e-09);
    dVar15 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar15)) & uVar8);
    uVar8 = -(ulonglong)(0.0 <= dVar52 + -9.99999993922529e-09);
    dVar52 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar52)) & uVar8);
    auVar10._8_8_ = -(ulonglong)(0.0 <= dStack_2d0);
    auVar10._0_8_ = -(ulonglong)(0.0 <= local_2d8);
    auVar23 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar10);
    uVar8 = -(ulonglong)(0.0 <= dVar14 * dVar49);
    local_108 = (double)(~uVar8 & 0xbff0000000000000 | uVar8 & 0x3ff0000000000000);
    local_138 = auVar23._0_8_;
    local_148 = dVar20 * dVar21 * local_138;
    local_140 = dVar40 * dVar21 * local_138;
    local_138 = dVar21 * (double)local_308._0_8_ * local_138;
    dVar14 = auVar23._8_8_;
    local_120 = dVar22 * dVar15 * dVar14;
    local_128 = dVar14 * dVar18 * dVar15;
    uStack_110 = auVar34._8_8_;
    local_118 = dVar15 * dVar53 * dVar14;
    local_f8 = dVar52 * dVar30 * local_108;
    local_100 = dVar13 * dVar52 * local_108;
    local_108 = local_108 * dVar9 * dVar52;
    pdVar7 = &local_1c8;
    local_2e8 = auVar26;
    iVar2 = FUN_14481fd10(pdVar7,&local_148);
    uVar6 = SUB84(pdVar7,0);
    dVar18 = local_1b8 * local_1b8 + local_1c8 * local_1c8;
    dVar14 = dStack_1b0 * dStack_1b0 + dStack_1c0 * dStack_1c0;
    auVar19._0_8_ = dVar18 + dVar14;
    auVar19._8_8_ = dVar18 + dVar14;
    auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
    auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
    auVar23 = sqrtpd(auVar19,auVar19);
    auVar23 = divpd(_DAT_149934d80,auVar23);
    auVar35._0_8_ = auVar23._0_8_ * local_1b8;
    auVar35._8_8_ = auVar23._8_8_ * dStack_1b0;
    local_308 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar26);
    local_2f8 = (double)((ulonglong)(local_1c8 * auVar23._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
    dStack_2f0 = (double)((ulonglong)(dStack_1c0 * auVar23._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
    dVar22 = *(double *)(param_1 + 0x1d0);
    dVar40 = *(double *)(param_1 + 0x1d8);
    uVar45 = *(undefined4 *)(param_1 + 0x1e0);
    uVar46 = *(undefined4 *)(param_1 + 0x1e4);
    uVar47 = *(undefined4 *)(param_1 + 0x1e8);
    uVar48 = *(undefined4 *)(param_1 + 0x1ec);
    dVar49 = local_d8;
    dVar18 = local_e8;
    dVar14 = dStack_e0;
  }
  auVar24 = _DAT_149934d80;
  auVar23 = *(undefined1 (*) [16])(param_1 + 0x170);
  dVar20 = auVar23._0_8_;
  dVar21 = auVar23._8_8_;
  dVar53 = SUB168(*(undefined1 (*) [16])(param_1 + 0x180),0);
  auVar16._8_8_ = dVar40;
  auVar16._0_8_ = dVar22;
  auVar23 = minpd(auVar16,auVar23);
  auVar25._4_4_ = uVar46;
  auVar25._0_4_ = uVar45;
  auVar25._12_4_ = uVar48;
  auVar25._8_4_ = uVar47;
  auVar26 = minpd(auVar25,*(undefined1 (*) [16])(param_1 + 0x180));
  auVar17._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  iVar2 = movmskpd(iVar2,auVar17);
  auVar27._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
  uVar5 = movmskpd(uVar6,auVar27);
  if ((uVar5 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar42 = *(double *)(param_1 + 0x130);
    dVar55 = *(double *)(param_1 + 0x138);
    dVar29 = *(double *)(param_1 + 0x140);
    dVar30 = *(double *)(param_1 + 400);
    dVar31 = *(double *)(param_1 + 0x198);
    dVar32 = *(double *)(param_1 + 0x1a0);
    dVar37 = *(double *)(param_1 + 0x1a8);
    dVar39 = *(double *)(param_1 + 0x148);
    dVar40 = *(double *)(param_1 + 0x148);
    dVar22 = *(double *)(param_1 + 0x130);
    dVar9 = *(double *)(param_1 + 0x130);
    dVar13 = *(double *)(param_1 + 0x138);
    dVar43 = *(double *)(param_1 + 0x138);
    dVar33 = *(double *)(param_1 + 0x140);
    dVar38 = *(double *)(param_1 + 0x140);
    dVar15 = dVar31 * dVar33 * -1.0 + dVar32 * dVar13 + dVar37 * dVar22 * 1.0 + dVar30 * dVar39;
    dVar52 = dVar30 * dVar38 * 1.0 + dVar37 * dVar43 + dVar32 * dVar9 * -1.0 + dVar31 * dVar40;
    auVar44._0_8_ =
         dVar37 * dVar33 * 1.0 + ((dVar22 * dVar31 * 1.0 + dVar32 * dVar39) - dVar30 * dVar13);
    auVar44._8_8_ =
         dVar32 * dVar38 * -1.0 + ((dVar9 * dVar30 * -1.0 + dVar37 * dVar40) - dVar31 * dVar43);
    dVar20 = dVar20 * *(double *)(param_1 + 0x1b0);
    dVar21 = dVar21 * *(double *)(param_1 + 0x1b8);
    dVar53 = dVar53 * *(double *)(param_1 + 0x1c0);
    dVar9 = dVar21 * dVar42 - dVar55 * dVar20;
    dVar13 = dVar53 * dVar55 - dVar29 * dVar21;
    dVar43 = dVar20 * dVar29 - dVar42 * dVar53;
    dVar13 = dVar13 + dVar13;
    dVar43 = dVar43 + dVar43;
    dVar9 = dVar9 + dVar9;
    dVar22 = (dVar9 * dVar55 - dVar29 * dVar43) + dVar39 * dVar13 + dVar20 +
             *(double *)(param_1 + 0x150);
    dVar20 = (dVar13 * dVar29 - dVar9 * dVar42) + dVar40 * dVar43 + dVar21 +
             *(double *)(param_1 + 0x158);
    dVar40 = (dVar43 * dVar42 - dVar55 * dVar13) + dVar39 * dVar9 + dVar53 +
             *(double *)(param_1 + 0x160);
  }
  else {
    dVar39 = *(double *)(param_1 + 0x130);
    dVar9 = *(double *)(param_1 + 0x138);
    dVar52 = *(double *)(param_1 + 0x140);
    dVar42 = dVar9 + dVar9;
    dVar43 = dVar52 + dVar52;
    dVar55 = dVar39 * (dVar39 + dVar39);
    dVar13 = *(double *)(param_1 + 0x130) * dVar43;
    dVar15 = *(double *)(param_1 + 0x148);
    dVar33 = dVar43 * dVar15;
    dVar38 = (dVar39 + dVar39) * *(double *)(param_1 + 0x148);
    dVar15 = dVar42 * dVar15;
    dStack_180 = (dVar43 * dVar9 - dVar38) * dVar53;
    local_2e8._8_8_ = dVar40 * dVar21;
    local_2e8._0_8_ = dVar22 * dVar20;
    local_1c8 = (1.0 - (dVar52 * dVar43 + dVar9 * dVar42)) * dVar20;
    dVar52 = (1.0 - (dVar52 * dVar43 + dVar55)) * dVar21;
    local_178 = (1.0 - (dVar55 + dVar9 * dVar42)) * dVar53;
    dStack_1c0 = (dVar42 * dVar39 + dVar33) * dVar20;
    local_198 = (dVar43 * dVar9 + dVar38) * dVar21;
    local_188 = (dVar15 + dVar13) * dVar53;
    local_1b8 = (dVar13 - dVar15) * dVar20;
    dStack_1b0 = 0.0;
    local_1a8._8_4_ = SUB84(dVar52,0);
    local_1a8._0_8_ = (dVar42 * dVar39 - dVar33) * dVar21;
    local_1a8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = *(undefined8 *)(param_1 + 0x150);
    uStack_160 = *(undefined8 *)(param_1 + 0x158);
    local_158 = *(undefined8 *)(param_1 + 0x160);
    uStack_150 = 0x3ff0000000000000;
    dVar15 = *(double *)(param_1 + 400);
    dVar52 = *(double *)(param_1 + 0x198);
    dVar21 = *(double *)(param_1 + 0x1a0);
    dVar43 = dVar52 + dVar52;
    dVar39 = dVar21 + dVar21;
    dVar33 = dVar15 * (dVar15 + dVar15);
    dVar38 = *(double *)(param_1 + 400) * dVar39;
    dVar20 = *(double *)(param_1 + 0x1a8);
    dVar9 = dVar39 * dVar20;
    dVar13 = (dVar15 + dVar15) * *(double *)(param_1 + 0x1a8);
    dVar20 = dVar43 * dVar20;
    dStack_200 = (dVar39 * dVar52 - dVar13) * (double)CONCAT44(uVar46,uVar45);
    local_248 = ((double)DAT_149934d80 - (dVar21 * dVar39 + dVar52 * dVar43)) * dVar22;
    dVar21 = (DAT_149934d80._8_8_ - (dVar21 * dVar39 + dVar33)) * dVar40;
    dStack_240 = (dVar43 * dVar15 + dVar9) * dVar22;
    local_218 = (dVar39 * dVar52 + dVar13) * dVar40;
    local_208 = (dVar20 + dVar38) * (double)CONCAT44(uVar46,uVar45);
    local_238 = (dVar38 - dVar20) * dVar22;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar21,0);
    local_228._0_8_ = (dVar43 * dVar15 - dVar9) * dVar40;
    local_228._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    uStack_210 = 0;
    local_1f8 = (1.0 - (dVar33 + dVar52 * dVar43)) * (double)CONCAT44(uVar46,uVar45);
    uStack_1f0 = 0;
    local_1e8 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x1b8);
    local_1d8 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar11._8_8_ = -(ulonglong)(0.0 <= (double)local_2e8._8_8_);
    auVar11._0_8_ = -(ulonglong)(0.0 <= (double)local_2e8._0_8_);
    auVar23 = blendvpd(_DAT_149936790,auVar24,auVar11);
    uVar8 = -(ulonglong)(0.0 <= (double)CONCAT44(uVar46,uVar45) * dVar53);
    dVar22 = (double)(~uVar8 & 0xbff0000000000000 | uVar8 & 0x3ff0000000000000);
    dVar20 = auVar23._0_8_;
    local_138 = local_138 * dVar20;
    local_140 = local_140 * dVar20;
    local_148 = local_148 * dVar20;
    dVar20 = auVar23._8_8_;
    local_120 = local_120 * dVar20;
    local_128 = dVar20 * local_128;
    local_118 = local_118 * dVar20;
    local_f8 = local_f8 * dVar22;
    local_100 = local_100 * dVar22;
    local_108 = dVar22 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar22 = local_258 * local_258 + local_268 * local_268;
    dVar20 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar28._0_8_ = dVar22 + dVar20;
    auVar28._8_8_ = dVar22 + dVar20;
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar23 = sqrtpd(auVar28,auVar28);
    auVar23 = divpd(auVar24,auVar23);
    auVar36._0_8_ = auVar23._0_8_ * local_258;
    auVar36._8_8_ = auVar23._8_8_ * dStack_250;
    dVar15 = (double)((ulonglong)(local_268 * auVar23._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
    dVar52 = (double)((ulonglong)(dStack_260 * auVar23._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
    auVar44 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar12);
    dVar22 = local_e8;
    dVar20 = dStack_e0;
    dVar40 = local_d8;
  }
  bVar1 = *(byte *)(param_1 + 0x21);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (ABS(*(double *)(param_1 + 0x60)) <= 9.99999993922529e-09) {
      if (ABS(*(double *)(param_1 + 0x68)) <= 9.99999993922529e-09) {
        bVar3 = true;
        if (((ABS(*(double *)(param_1 + 0x70)) <= 9.99999993922529e-09) &&
            (ABS(*(double *)(param_1 + 0x48)) <= 9.99999993922529e-09)) &&
           (ABS(*(double *)(param_1 + 0x50)) <= 9.99999993922529e-09)) {
          bVar3 = 9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x58));
        }
        dVar53 = (double)(byte)((bVar1 & 0x20) == 0 & bVar3);
        dVar39 = (double)(byte)((bVar1 & 0x10) == 0 & bVar3);
        dVar21 = (double)(byte)((bVar1 & 8) == 0 & bVar3);
        if (((ABS(*(double *)(param_1 + 0x70)) <= 9.99999993922529e-09) &&
            (ABS(*(double *)(param_1 + 0x48)) <= 9.99999993922529e-09)) &&
           ((ABS(*(double *)(param_1 + 0x50)) <= 9.99999993922529e-09 &&
            (ABS(*(double *)(param_1 + 0x58)) <= 9.99999993922529e-09)))) goto LAB_1407709e8;
      }
      else {
        dVar21 = 1.0;
        dVar53 = 1.0;
        if ((bVar1 & 0x20) != 0) {
          dVar53 = 0.0;
        }
        dVar39 = 1.0;
        if ((bVar1 & 0x10) != 0) {
          dVar39 = 0.0;
        }
        if ((bVar1 & 8) != 0) {
          dVar21 = 0.0;
        }
      }
    }
    else {
      dVar21 = 1.0;
      dVar53 = 1.0;
      if ((bVar1 & 0x20) != 0) {
        dVar53 = 0.0;
      }
      dVar39 = 1.0;
      if ((bVar1 & 0x10) != 0) {
        dVar39 = 0.0;
      }
      if ((bVar1 & 8) != 0) {
        dVar21 = 0.0;
      }
    }
    uVar45 = 0;
    uVar46 = 0x3ff00000;
    dVar9 = 1.0;
    if ((bVar1 & 0x20) == 0) {
      dVar9 = 0.0;
    }
    dVar13 = 1.0;
    if ((bVar1 & 0x10) == 0) {
      dVar13 = 0.0;
    }
    if ((bVar1 & 8) == 0) {
      uVar45 = 0;
      uVar46 = 0;
    }
  }
  else {
    dVar21 = 0.0;
    dVar39 = 0.0;
    dVar53 = 0.0;
LAB_1407709e8:
    uVar45 = SUB84(DAT_14c846510,0);
    uVar46 = (undefined4)((ulonglong)DAT_14c846510 >> 0x20);
    dVar9 = DAT_14c846520;
    dVar13 = DAT_14c846518;
  }
  *(double *)(param_1 + 0xf0) =
       dVar21 * *(double *)(param_1 + 0xf0) +
       (dVar18 - dVar22) * local_318 * (double)CONCAT44(uVar46,uVar45);
  *(double *)(param_1 + 0xf8) =
       dVar39 * *(double *)(param_1 + 0xf8) + (dVar14 - dVar20) * local_318 * dVar13;
  *(double *)(param_1 + 0x100) =
       dVar53 * *(double *)(param_1 + 0x100) + (dVar49 - dVar40) * local_318 * dVar9;
  dVar18 = DAT_14c846520;
  dVar14 = DAT_14c846518;
  dVar22 = DAT_14c846510;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (ABS(*(double *)(param_1 + 0x60)) <= 9.99999993922529e-09) {
      if ((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x68))) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)))) {
        bVar3 = false;
      }
      else {
        if ((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x48))) ||
           (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x50)))) {
          bVar3 = false;
        }
        else {
          bVar3 = ABS(*(double *)(param_1 + 0x58)) <= 9.99999993922529e-09;
        }
        if (((ABS(*(double *)(param_1 + 0x48)) <= 9.99999993922529e-09) &&
            (ABS(*(double *)(param_1 + 0x50)) <= 9.99999993922529e-09)) &&
           (ABS(*(double *)(param_1 + 0x58)) <= 9.99999993922529e-09)) goto LAB_1407707e4;
      }
    }
    else {
      bVar3 = false;
    }
    dVar18 = 1.0;
    if ((bVar1 & 4) == 0) {
      dVar18 = 0.0;
    }
    dVar14 = 1.0;
    if ((bVar1 & 2) == 0) {
      dVar14 = 0.0;
    }
    dVar22 = 1.0;
    if ((bVar1 & 1) == 0) {
      dVar22 = 0.0;
    }
  }
  else {
    bVar3 = true;
  }
LAB_1407707e4:
  dVar9 = local_2f8 - dVar15;
  dVar13 = dStack_2f0 - dVar52;
  dVar40 = (double)local_308._0_8_ - auVar44._0_8_;
  dVar53 = (double)local_308._8_8_ - auVar44._8_8_;
  dVar21 = auVar44._0_8_ * -1.0;
  dVar39 = auVar44._8_8_ * 1.0;
  dVar49 = (dVar13 * dVar21 + (dVar9 * dVar39 * 1.0 - dVar15 * dVar53)) - dVar40 * dVar52 * -1.0;
  dVar20 = (dVar13 * dVar39 + (dVar9 * dVar21 * -1.0 - dVar52 * dVar53)) - dVar40 * dVar15 * 1.0;
  dVar40 = dVar13 * dVar15 + (dVar53 * dVar21 - dVar52 * dVar9) + dVar39 * dVar40;
  bVar4 = bVar3 ^ 1;
  *(double *)(param_1 + 0xd8) =
       local_318 * (dVar49 + dVar49) * dVar22 +
       (double)((bVar1 & 1) == 0 & bVar4) * *(double *)(param_1 + 0xd8);
  *(double *)(param_1 + 0xe0) =
       local_318 * (dVar20 + dVar20) * dVar14 +
       (double)((bVar1 & 2) == 0 & bVar4) * *(double *)(param_1 + 0xe0);
  *(double *)(param_1 + 0xe8) =
       (double)((bVar1 & 4) == 0 & bVar4) * *(double *)(param_1 + 0xe8) +
       (dVar40 + dVar40) * local_318 * dVar18;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(double *)(param_1 + 0x268) = *(double *)(param_1 + 0x278) * 10.0;
  if ((local_c0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407716ee FUN_1407716ee body=58 status=ok
// SIG undefined FUN_1407716ee(void)

void FUN_1407716ee(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_140771728(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140771728 FUN_140771728 body=41 status=ok
// SIG undefined FUN_140771728(void)

void FUN_140771728(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140771752(param_1);
    param_1 = param_1 + 0x300;
  }
  return;
}



// FUNCTION 140771752 FUN_140771752 body=310 status=ok
// SIG undefined FUN_140771752(void)

void FUN_140771752(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x2d0) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(int *)(param_1 + 0x2ec) != 0) {
    FUN_140115c12(param_1 + 0x2e0,0);
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  FUN_1448173f8(param_1 + 0x290);
  cVar2 = *(char *)(param_1 + 0x268);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      *(undefined8 *)(param_1 + 0x270) = 0;
    }
    else if ((cVar2 == '\x03') &&
            (plVar3 = *(longlong **)(param_1 + 0x278), plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x268) = 0;
  }
  FUN_140368b56(param_1 + 400);
  if (*(char *)(param_1 + 0x160) == '\x01') {
    *(undefined1 *)(param_1 + 0x160) = 0;
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14077189a FUN_14077189a body=88 status=ok
// SIG undefined FUN_14077189a(void)

void FUN_14077189a(longlong param_1,undefined8 param_2,bool param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1401e7ce8();
  bifrost::telemetry::rowBuilder::vBool((rowBuilder *)**(undefined8 **)(param_1 + 0x38),param_3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407718f3 FUN_1407718f3 body=650 status=ok
// SIG undefined FUN_1407718f3(void)

longlong FUN_1407718f3(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  short *psVar2;
  code *pcVar3;
  undefined1 auStack_188 [40];
  code *local_160;
  undefined8 *local_158;
  code *local_150;
  undefined8 *local_148;
  code *local_140;
  undefined8 *local_138;
  undefined4 local_12c;
  char cStack_128;
  undefined4 local_124;
  short *local_120;
  short *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int iStack_100;
  int iStack_fc;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  short *local_e8;
  short *local_e0;
  undefined8 local_d8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  short *local_60;
  short *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  psVar2 = *(short **)(param_2 + 0x20);
  if (((*(short **)(param_2 + 0x10) <= psVar2) &&
      (psVar2 <= (short *)(*(longlong *)(param_2 + 0x18) + -2))) && (*psVar2 == 0x7b)) {
    lVar1 = param_2 + 0x10;
    local_58 = psVar2 + 1;
    local_50 = 0;
    uStack_4c = (undefined4)
                ((ulonglong)((longlong)psVar2 - (longlong)*(short **)(param_2 + 0x10)) >> 1);
    local_48 = 1;
    local_140 = FUN_1427892f8;
    local_138 = &local_108;
    local_60 = psVar2;
    FUN_144a2afa0(lVar1,local_80,&local_140,&local_60);
    local_108 = (longlong *)&local_12c;
    cStack_128 = '\0';
    local_150 = FUN_142789316;
    local_148 = &local_108;
    FUN_144a2afa0(lVar1,local_a0,&local_150,&local_60);
    if (cStack_128 != '\0') {
      local_160 = FUN_14278936c;
      local_158 = &local_108;
      FUN_144a2afa0(lVar1,local_c0,&local_160,&local_60);
      if (((*(short **)(param_2 + 0x10) <= local_58) &&
          (local_58 <= (short *)(*(longlong *)(param_2 + 0x18) + -2))) && (*local_58 == 0x7d)) {
        local_118 = local_58 + 1;
        local_120 = local_60;
        local_110 = CONCAT44(uStack_4c,local_50);
        local_108 = (longlong *)0xaf714ac5e11f9937;
        iStack_100 = -0x775b1fb2;
        iStack_fc = 0x723a753c;
        local_f8 = &PTR_FUN_149e34c30;
        local_f0 = local_12c;
        local_ec = local_124;
        local_e8 = local_60;
        local_e0 = local_118;
        local_d8 = local_110;
        local_58 = local_118;
        FUN_140079082(param_2,&local_60,&local_108);
        if (((((local_108._4_4_ != 0 || (int)local_108 != 0) || iStack_100 != 0) || iStack_fc != 0)
            && (pcVar3 = (code *)*local_f8, pcVar3 != FUN_1400791ec)) &&
           ((pcVar3 != FUN_14477b052 && (pcVar3 != FUN_1400791cc)))) {
          (*pcVar3)(&local_f8,0);
        }
        goto LAB_14077193d;
      }
    }
    if (param_3 != '\0') {
      FUN_14574242e(&local_108,&local_60);
      FUN_14023423e(param_1,&local_108);
      *(undefined1 *)(param_1 + 0x10) = 1;
      if (local_108 != (longlong *)0x0) {
        (**(code **)(*local_108 + 0x10))();
      }
      goto LAB_140771941;
    }
  }
LAB_14077193d:
  *(undefined1 *)(param_1 + 0x10) = 0;
LAB_140771941:
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140771b7e FUN_140771b7e body=2637 status=ok
// SIG undefined FUN_140771b7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_140771b7e(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double *pdVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double *pdVar16;
  ulonglong uVar17;
  uint *puVar18;
  undefined1 (*pauVar19) [16];
  code ****ppppcVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code ***local_d0;
  code *local_c8;
  code *local_c0;
  double local_b8;
  longlong *plStack_b0;
  double local_a8;
  longlong local_a0;
  code ***local_98;
  double *pdStack_90;
  double local_88;
  double dStack_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar9 = (longlong *)FUN_1447262c2(param_4);
  if (plVar9 == (longlong *)0x0) {
LAB_140771d04:
    lVar13 = FUN_1447262c2(param_4);
    if (lVar13 == 0) {
switchD_140771d67_caseD_4:
      *(undefined2 *)(param_2[1] + 8) = 0;
      param_2[2][0] = 0;
      goto LAB_140771cb8;
    }
    if (DAT_14cac9ca8 == 0) {
      local_d0 = (code ***)&local_98;
      local_98 = (code ***)FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = &LAB_1417b2375;
      local_e8 = L"Engine";
      local_f0 = 0x1000000000;
      local_f8 = 0x10000004;
      local_100 = 8;
      local_108 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (puVar18 = *(uint **)(*(longlong *)(lVar13 + 0x10) + 0x30),
       *(longlong *)(puVar18 + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 2) != DAT_14cac9ca8 + 0x30
       )) goto switchD_140771d67_caseD_4;
    uVar8 = *(int *)(param_1 + 0x10) - 2;
    dVar14 = (double)(ulonglong)uVar8;
    dVar15 = dVar14;
    if (uVar8 < 7) {
      puVar18 = &switchD_140771d67::switchdataD_14b3ef770;
      uVar37 = 0x4b3ef770;
      dVar15 = (double)((longlong)&switchD_140771d67::switchdataD_14b3ef770 +
                       (longlong)(int)(&switchD_140771d67::switchdataD_14b3ef770)[(longlong)dVar14])
      ;
      switch(dVar14) {
      case 0.0:
        goto switchD_140771d67_caseD_0;
      default:
        lVar13 = *(longlong *)(lVar13 + 0x1c8);
        goto LAB_14077242d;
      case 1.48219693752374e-323:
        lVar13 = *(longlong *)(lVar13 + 0x1c8);
        if (lVar13 == 0) {
          puVar12 = &DAT_14c8464e0;
          dVar15 = DAT_14c8464f0;
        }
        else {
          puVar12 = (undefined8 *)(lVar13 + 0x260);
          dVar15 = *(double *)(lVar13 + 0x270);
        }
        uVar10 = *puVar12;
        uVar6 = puVar12[1];
        *(undefined2 *)(param_2[1] + 8) = 0x18;
        *(undefined8 *)*param_2 = uVar10;
        *(undefined8 *)((longlong)*param_2 + 8) = uVar6;
        goto LAB_1407723d8;
      case 1.97626258336499e-323:
      case 2.96439387504748e-323:
        goto switchD_140771d67_caseD_4;
      case 2.47032822920623e-323:
        break;
      }
    }
    uVar37 = SUB84(puVar18,0);
    lVar13 = *(longlong *)(lVar13 + 0x1c8);
LAB_140771d70:
    if (lVar13 == 0) {
      local_a8 = DAT_14c846508;
      local_b8 = DAT_14c8464f8;
      plStack_b0 = DAT_14c846500;
    }
    else {
      ppppcVar20 = *(code *****)(lVar13 + 0x240);
      pdVar5 = *(double **)(lVar13 + 0x248);
      dVar14 = *(double *)(lVar13 + 0x250);
      dVar32 = *(double *)(lVar13 + 600);
      pdVar16 = *(double **)(lVar13 + 0x228);
      local_98 = (code ***)ppppcVar20;
      pdStack_90 = pdVar5;
      local_88 = dVar14;
      dStack_80 = dVar32;
      if (pdVar16 == (double *)0x0) {
        uVar37 = 0x40;
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar15 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar15;
        dVar15 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar15;
        plVar9 = DAT_14c846500;
        pdVar16[4] = DAT_14c8464f8;
        pdVar16[5] = (double)plVar9;
        dVar15 = DAT_14c846508;
        pdVar16[6] = DAT_14c846508;
        *(double **)(lVar13 + 0x228) = pdVar16;
      }
      auVar3._8_4_ = (int)-(ulonglong)((double)pdVar5 != pdVar16[1]);
      auVar3._0_8_ = -(ulonglong)((double)ppppcVar20 != *pdVar16);
      auVar3._12_4_ = (int)(-(ulonglong)((double)pdVar5 != pdVar16[1]) >> 0x20);
      iVar7 = movmskpd(SUB84(dVar15,0),auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar32 != pdVar16[3]);
      auVar4._0_8_ = -(ulonglong)(dVar14 != pdVar16[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar32 != pdVar16[3]) >> 0x20);
      uVar8 = movmskpd(uVar37,auVar4);
      if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
        pdVar16[2] = local_88;
        pdVar16[3] = dStack_80;
        *pdVar16 = (double)local_98;
        pdVar16[1] = (double)pdStack_90;
        FUN_1448052ee(&local_98,&local_b8);
        pdVar16[6] = local_a8;
        pdVar16[4] = local_b8;
        pdVar16[5] = (double)plStack_b0;
      }
      local_a8 = pdVar16[6];
      local_b8 = pdVar16[4];
      plStack_b0 = (longlong *)pdVar16[5];
    }
    *(undefined2 *)(param_2[1] + 8) = 0x18;
    *(double *)*param_2 = local_b8;
    *(longlong **)((longlong)*param_2 + 8) = plStack_b0;
    dVar15 = local_a8;
    goto LAB_140771c9c;
  }
  uVar10 = FUN_1407725cc();
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
  if (plVar9 == (longlong *)0x0) goto LAB_140771d04;
  uVar10 = FUN_1407725cc();
  plVar11 = (longlong *)FUN_144718840(plVar9,uVar10);
  if ((plVar9 == plVar11) || (plVar11 == (longlong *)0x0)) goto LAB_140771d04;
  uVar10 = (**(code **)(*plVar11 + 0x10))(plVar11);
  local_b8 = (double)(param_1 + 8);
  plStack_b0 = &local_a0;
  local_a0 = 0;
  pdStack_90 = &local_b8;
  local_98 = (code ***)&LAB_143cbcae0;
  FUN_1457426f4(uVar10);
  lVar13 = local_a0;
  if (local_a0 == 0) goto switchD_140771d67_caseD_4;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    if (*(char *)(local_a0 + 0x3a0) != '\x01') {
      dVar15 = (double)FUN_140fecfdc();
      uVar37 = (undefined4)param_4;
      if (dVar15 == 0.0) goto switchD_140771f9c_caseD_3;
      lVar13 = *(longlong *)((longlong)dVar15 + 0x1c8);
      goto LAB_140771d70;
    }
    FUN_1448052ee(local_a0 + 0x380,param_2);
    *(undefined2 *)(param_2[1] + 8) = 0x18;
    goto LAB_140771ca0;
  case 2:
    if (*(char *)(local_a0 + 0x3a0) != '\0') {
      FUN_1448052ee(local_a0 + 0x380,&local_98);
      pdVar16 = (double *)FUN_1407726b2(lVar13);
      dVar15 = (double)DAT_1499387d0;
      dVar14 = DAT_1499387d0._8_8_;
      auVar25._8_8_ = (double)pdStack_90 - pdVar16[1];
      auVar25._0_8_ = (double)local_98 - *pdVar16;
      auVar26 = divpd(auVar25,_DAT_1499387d0);
      auVar21._0_8_ = (local_88 - pdVar16[2]) / 360.0;
      auVar21._8_8_ = 0;
      auVar27 = roundpd(auVar26,auVar26,3);
      auVar26 = roundpd(auVar21,auVar21,3);
      auVar36._0_8_ = (local_88 - pdVar16[2]) - auVar26._0_8_ * dVar15;
      auVar36._8_8_ = 0.0 - auVar26._8_8_ * dVar14;
      dVar32 = ((double)local_98 - *pdVar16) - auVar27._0_8_ * dVar15;
      dVar34 = ((double)pdStack_90 - pdVar16[1]) - auVar27._8_8_ * dVar14;
      auVar31._0_8_ = dVar32 + dVar15;
      auVar31._8_8_ = dVar34 + dVar14;
      auVar29._0_8_ = dVar15 + auVar36._0_8_;
      auVar29._8_8_ = dVar14 + auVar36._8_8_;
      auVar22._8_8_ = -(ulonglong)(0.0 <= dVar34);
      auVar22._0_8_ = -(ulonglong)(0.0 <= dVar32);
      auVar2._8_8_ = dVar34;
      auVar2._0_8_ = dVar32;
      auVar27 = blendvpd(auVar31,auVar2,auVar22);
      auVar23._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
      auVar23._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
      auVar26 = blendvpd(auVar29,auVar36,auVar23);
      auVar28._0_8_ = auVar27._0_8_ + -360.0;
      auVar28._8_8_ = auVar27._8_8_ + -360.0;
      auVar24._8_8_ = -(ulonglong)(180.0 < auVar27._8_8_);
      auVar24._0_8_ = -(ulonglong)(180.0 < auVar27._0_8_);
      auVar27 = blendvpd(auVar27,auVar28,auVar24);
      dVar15 = auVar26._0_8_;
      *(undefined2 *)(param_2[1] + 8) = 0x18;
      *param_2 = auVar27;
      *(ulonglong *)param_2[1] =
           ~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
           (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15);
      goto LAB_140771ca0;
    }
    lVar13 = FUN_140fecfdc(param_4);
    if (lVar13 == 0) goto switchD_140771d67_caseD_4;
switchD_140771d67_caseD_0:
    *(undefined2 *)(param_2[1] + 8) = 0x18;
    plVar9 = DAT_14c846500;
    *(double *)*param_2 = DAT_14c8464f8;
    *(longlong **)((longlong)*param_2 + 8) = plVar9;
    dVar15 = DAT_14c846508;
    goto LAB_140771c9c;
  case 3:
switchD_140771f9c_caseD_3:
    pdVar16 = (double *)FUN_1447c6d68(lVar13);
    dVar14 = pdVar16[2];
    dVar32 = *pdVar16;
    dVar34 = pdVar16[1];
    dVar30 = dVar14 - dVar32 * 0.0;
    dVar33 = dVar32 * 0.0 - dVar34;
    dVar35 = dVar34 * 0.0 + dVar14 * -0.0;
    dVar33 = dVar33 + dVar33;
    dVar30 = dVar30 + dVar30;
    dVar35 = dVar35 + dVar35;
    uVar37 = SUB84(pdVar16[3],0);
    uVar38 = (undefined4)((ulonglong)pdVar16[3] >> 0x20);
LAB_140772369:
    dVar15 = (dVar32 * dVar30 - dVar35 * dVar34) + (double)CONCAT44(uVar38,uVar37) * dVar33 + 0.0;
    *(undefined2 *)(param_2[1] + 8) = 0x18;
    *(double *)*param_2 =
         (dVar34 * dVar33 - dVar30 * dVar14) + dVar35 * (double)CONCAT44(uVar38,uVar37) + 1.0;
    *(double *)((longlong)*param_2 + 8) =
         (dVar14 * dVar35 - dVar33 * dVar32) + (double)CONCAT44(uVar38,uVar37) * dVar30 + 0.0;
LAB_1407723d8:
    *(double *)param_2[1] = dVar15;
    break;
  case 4:
    if (*(char *)(local_a0 + 0x3a0) == '\x01') {
      dVar14 = *(double *)(local_a0 + 0x390);
      dVar32 = *(double *)(local_a0 + 0x380);
      dVar34 = *(double *)(local_a0 + 0x388);
      dVar30 = dVar14 - dVar32 * 0.0;
      dVar33 = dVar32 * 0.0 - dVar34;
      dVar35 = dVar34 * 0.0 + dVar14 * -0.0;
      dVar33 = dVar33 + dVar33;
      dVar30 = dVar30 + dVar30;
      dVar35 = dVar35 + dVar35;
      uVar37 = (undefined4)*(undefined8 *)(local_a0 + 0x398);
      uVar38 = (undefined4)((ulonglong)*(undefined8 *)(local_a0 + 0x398) >> 0x20);
      goto LAB_140772369;
    }
    dVar15 = (double)FUN_140fecfdc();
    uVar37 = (undefined4)param_4;
    if (dVar15 == 0.0) goto switchD_140771f9c_caseD_5;
    lVar13 = *(longlong *)((longlong)dVar15 + 0x1c8);
LAB_14077242d:
    if (lVar13 == 0) {
      local_a8 = DAT_14c846508;
      local_b8 = DAT_14c8464f8;
      plStack_b0 = DAT_14c846500;
    }
    else {
      ppppcVar20 = *(code *****)(lVar13 + 0x240);
      pdVar5 = *(double **)(lVar13 + 0x248);
      dVar14 = *(double *)(lVar13 + 0x250);
      dVar32 = *(double *)(lVar13 + 600);
      pdVar16 = *(double **)(lVar13 + 0x228);
      local_98 = (code ***)ppppcVar20;
      pdStack_90 = pdVar5;
      local_88 = dVar14;
      dStack_80 = dVar32;
      if (pdVar16 == (double *)0x0) {
        uVar37 = 0x40;
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar15 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar15;
        dVar15 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar15;
        plVar9 = DAT_14c846500;
        pdVar16[4] = DAT_14c8464f8;
        pdVar16[5] = (double)plVar9;
        dVar15 = DAT_14c846508;
        pdVar16[6] = DAT_14c846508;
        *(double **)(lVar13 + 0x228) = pdVar16;
      }
      auVar26._8_4_ = (int)-(ulonglong)((double)pdVar5 != pdVar16[1]);
      auVar26._0_8_ = -(ulonglong)((double)ppppcVar20 != *pdVar16);
      auVar26._12_4_ = (int)(-(ulonglong)((double)pdVar5 != pdVar16[1]) >> 0x20);
      iVar7 = movmskpd(SUB84(dVar15,0),auVar26);
      auVar27._8_4_ = (int)-(ulonglong)(dVar32 != pdVar16[3]);
      auVar27._0_8_ = -(ulonglong)(dVar14 != pdVar16[2]);
      auVar27._12_4_ = (int)(-(ulonglong)(dVar32 != pdVar16[3]) >> 0x20);
      uVar8 = movmskpd(uVar37,auVar27);
      if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
        pdVar16[2] = local_88;
        pdVar16[3] = dStack_80;
        *pdVar16 = (double)local_98;
        pdVar16[1] = (double)pdStack_90;
        FUN_1448052ee(&local_98,&local_b8);
        pdVar16[6] = local_a8;
        pdVar16[4] = local_b8;
        pdVar16[5] = (double)plStack_b0;
      }
      local_a8 = pdVar16[6];
      local_b8 = pdVar16[4];
      plStack_b0 = (longlong *)pdVar16[5];
    }
    FUN_144a76660(&local_b8,param_2);
    goto LAB_1407722ab;
  case 5:
switchD_140771f9c_caseD_5:
    *(undefined2 *)(param_2[1] + 8) = 0x18;
    uVar10 = *(undefined8 *)(lVar13 + 0x408);
    *(undefined8 *)*param_2 = *(undefined8 *)(lVar13 + 0x400);
    *(undefined8 *)((longlong)*param_2 + 8) = uVar10;
    *(undefined8 *)param_2[1] = *(undefined8 *)(lVar13 + 0x410);
    break;
  case 6:
    if (*(char *)(local_a0 + 0x338) == '\0') goto switchD_140771d67_caseD_4;
    uVar10 = *(undefined8 *)(local_a0 + 0x368);
    uVar6 = *(undefined8 *)(local_a0 + 0x370);
    *(undefined8 *)param_2[1] = *(undefined8 *)(local_a0 + 0x378);
    *(undefined8 *)*param_2 = uVar10;
    *(undefined8 *)((longlong)*param_2 + 8) = uVar6;
LAB_1407722ab:
    *(undefined2 *)(param_2[1] + 8) = 0x18;
    break;
  case 7:
    puVar12 = (undefined8 *)FUN_14186af4e(local_a0);
    goto LAB_140771c8a;
  case 8:
    uVar37 = *(undefined4 *)(local_a0 + 0x2a4);
    *(undefined2 *)(param_2[1] + 8) = 4;
    *(undefined4 *)*param_2 = uVar37;
    param_2[2][0] = 3;
    goto LAB_140771ca4;
  default:
    puVar12 = (undefined8 *)FUN_1407726b2(local_a0);
LAB_140771c8a:
    *(undefined2 *)(param_2[1] + 8) = 0x18;
    uVar10 = puVar12[1];
    *(undefined8 *)*param_2 = *puVar12;
    *(undefined8 *)((longlong)*param_2 + 8) = uVar10;
    dVar15 = (double)puVar12[2];
LAB_140771c9c:
    *(double *)param_2[1] = dVar15;
LAB_140771ca0:
    param_2[2][0] = 5;
    goto LAB_140771ca4;
  }
  param_2[2][0] = 4;
LAB_140771ca4:
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1487da21a(param_1,&local_98,param_2);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[2][0] * 0x120));
    if (pcVar1 != (code *)0x0) {
      pauVar19 = param_2;
      if (0x18 < *(ushort *)(param_2[1] + 8)) {
        pauVar19 = *(undefined1 (**) [16])*param_2;
      }
      (*pcVar1)(pauVar19);
    }
    if (0x18 < *(ushort *)(param_2[1] + 8)) {
      FUN_1400020a8(*(undefined8 *)*param_2);
    }
    *(ushort *)(param_2[1] + 8) = dStack_80._0_2_;
    if (dStack_80._0_2_ < 0x19) {
      uVar17 = (ulonglong)((uint)local_78 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar17) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar17) == (code *)0x0) {
          memcpy(param_2,&local_98,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar17));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar17))(param_2,&local_98);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar17))(param_2,&local_98);
      }
    }
    else {
      *(code ****)*param_2 = local_98;
      local_98 = (code ***)0x0;
      dStack_80 = (double)((ulonglong)dStack_80 & 0xffffffffffff0000);
    }
    param_2[2][0] = local_78;
    local_78 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppcVar20 = &local_98;
      if (0x18 < dStack_80._0_2_) {
        ppppcVar20 = (code ****)local_98;
      }
      (*DAT_14c9a85d0)(ppppcVar20);
    }
    if (0x18 < dStack_80._0_2_) {
      FUN_1400020a8(local_98);
    }
    if (param_2[2][0] == '\0') goto LAB_140771cb8;
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar8 = FUN_1487da380(param_1,param_2);
    if (param_2[2][0] == 1) {
      *(uint *)*param_2 = uVar8 & 0xff;
    }
    else {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)param_2[2][0] * 0x120))
      ;
      if (pcVar1 != (code *)0x0) {
        pauVar19 = param_2;
        if (0x18 < *(ushort *)(param_2[1] + 8)) {
          pauVar19 = *(undefined1 (**) [16])*param_2;
        }
        (*pcVar1)(pauVar19);
      }
      if (0x18 < *(ushort *)(param_2[1] + 8)) {
        FUN_1400020a8(*(undefined8 *)*param_2);
      }
      *(undefined2 *)(param_2[1] + 8) = 4;
      *(uint *)*param_2 = uVar8 & 0xff;
      param_2[2][0] = 1;
    }
  }
LAB_140771cb8:
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407725cc FUN_1407725cc body=228 status=ok
// SIG undefined FUN_1407725cc(void)

longlong FUN_1407725cc(void)

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
  if (DAT_14cb62cc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486ed3db;
    local_40 = FUN_1464fabe9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxRotationInterface",&DAT_14cb62cc8,&DAT_1486ed3da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62cc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407726b2 FUN_1407726b2 body=116 status=ok
// SIG undefined FUN_1407726b2(void)

undefined4 * FUN_1407726b2(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x508) == '\0') {
    uVar1 = FUN_1447c6d68();
    FUN_1448052ee(uVar1,&local_38);
    *(undefined8 *)(param_1 + 0x500) = local_28;
    *(undefined4 *)(param_1 + 0x4f0) = local_38;
    *(undefined4 *)(param_1 + 0x4f4) = uStack_34;
    *(undefined4 *)(param_1 + 0x4f8) = uStack_30;
    *(undefined4 *)(param_1 + 0x4fc) = uStack_2c;
    *(undefined1 *)(param_1 + 0x508) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (undefined4 *)(param_1 + 0x4f0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140772728 FUN_140772728 body=343 status=ok
// SIG undefined FUN_140772728(void)

undefined4 *
FUN_140772728(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140772918(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140772880(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140772b08(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140772880 FUN_140772880 body=152 status=ok
// SIG undefined FUN_140772880(void)

void FUN_140772880(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14574276e((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1407728e9;
    }
  }
  uVar5 = 0;
LAB_1407728e9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140772918 FUN_140772918 body=496 status=ok
// SIG undefined FUN_140772918(void)

int * FUN_140772918(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140772b08 FUN_140772b08 body=688 status=ok
// SIG undefined FUN_140772b08(void)

void FUN_140772b08(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140772b6e;
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
  } while (uVar10 != uVar3);
LAB_140772b6e:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140772db8 FUN_140772db8 body=74 status=ok
// SIG undefined FUN_140772db8(void)

void FUN_140772db8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar1 = (**(code **)(*param_1 + 0x18))();
  FUN_1400bc8c2(lVar1 + 0x50,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140772e0c FUN_140772e0c body=64 status=ok
// SIG undefined FUN_140772e0c(void)

undefined4 FUN_140772e0c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140772e5c FUN_140772e5c body=83 status=ok
// SIG undefined FUN_140772e5c(void)

void FUN_140772e5c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong **)(param_1 + 0x428) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0xbb0))(), cVar2 != '\0')) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x430);
  if ((lVar1 != 0) && ((0 < *(int *)(lVar1 + 0xd98) || (0 < *(int *)(lVar1 + 0xda8))))) {
    return;
  }
  FUN_140772eb0(param_1);
  return;
}



// FUNCTION 140772eb0 FUN_140772eb0 body=1048 status=ok
// SIG undefined FUN_140772eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140772eb0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  code *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(byte *)(param_1 + 0xc) & 0x10) == 0) ||
     (plVar11 = (longlong *)param_1[0x39], plVar11 == (longlong *)0x0)) goto LAB_14077313d;
  if ((bool)DAT_14caca000 != ((*(uint *)(param_1 + 0x2b) >> 1 & 1) != 0)) {
    FUN_140500b04(param_1);
    plVar11 = (longlong *)param_1[0x39];
  }
  local_c8 = param_1[0x21];
  local_d8 = param_1[0x1f];
  lStack_d0 = param_1[0x20];
  local_f8 = param_1[0x1c];
  lStack_f0 = param_1[0x1d];
  local_e8 = param_1[0x1e];
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x25);
  auVar12 = divpd(auVar1,_DAT_1499387d0);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_1[0x27];
  auVar13 = divpd(auVar13,_DAT_1499387d0);
  auVar12 = roundpd(auVar12,auVar12,3);
  auVar13 = roundpd(auVar13,auVar13,3);
  dVar8 = (auVar1._0_8_ - auVar12._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar9 = (auVar1._8_8_ - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar6 = ((double)param_1[0x27] - auVar13._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar7 = (0.0 - auVar13._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar3 = sin(dVar8);
  dVar4 = sin(dVar9);
  dVar5 = sin(dVar6);
  sin(dVar7);
  dVar8 = cos(dVar8);
  dVar9 = cos(dVar9);
  dVar6 = cos(dVar6);
  cos(dVar7);
  dVar7 = dVar4 * dVar3 * dVar5 + dVar9 * dVar8 * dVar6;
  local_118 = dVar3 * dVar4 * dVar6 - dVar8 * dVar9 * dVar5;
  dStack_110 = -(dVar3 * dVar9 * dVar6) - dVar8 * dVar4 * dVar5;
  local_108._8_4_ = SUB84(dVar7,0);
  local_108._0_8_ = -(dVar9 * dVar3 * dVar5) + dVar4 * dVar8 * dVar6;
  local_108._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_138 = (undefined4)param_1[0x22];
  uStack_134 = *(undefined4 *)((longlong)param_1 + 0x114);
  uStack_130 = (undefined4)param_1[0x23];
  uStack_12c = *(undefined4 *)((longlong)param_1 + 0x11c);
  local_128 = param_1[0x24];
  local_188 = &local_d8;
  (**(code **)(*plVar11 + 0x5c8))(plVar11,&local_138,&local_118,&local_f8);
  lVar10 = param_1[0x39];
  if ((*(byte *)(param_1 + 0x2b) & 2) == 0) {
    if ((*(longlong *)(lVar10 + 0x120) == 0) && ((char)param_1[0x2f] == '\x01')) {
      (**(code **)(*param_1 + 0x438))(param_1,param_1 + 0x1c);
      (**(code **)(*param_1 + 0x430))(param_1);
    }
    goto LAB_14077313d;
  }
  if (lVar10 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_150 = &local_b8;
      local_b8 = FUN_144a7958c;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_142b47bc4;
      local_158 = &LAB_1478989f1;
      local_160 = &LAB_146391124;
      local_168 = L"Engine";
      local_170 = 0x10000000000;
      local_178 = 0x10000005;
      local_180 = 0x10;
      local_188 = (longlong *)CONCAT44(local_188._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar10 = param_1[0x39];
      if (lVar10 == 0) goto LAB_1407731f1;
    }
    if ((((DAT_14cac6e60 != 0) && (lVar2 = *(longlong *)(lVar10 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
         == DAT_14cac6e60 + 0x30 && (*(longlong *)(lVar10 + 0x518) != 0)))) goto LAB_14077313d;
  }
LAB_1407731f1:
  FUN_140773568(param_1);
LAB_14077313d:
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407732ca FUN_1407732ca body=669 status=ok
// SIG undefined FUN_1407732ca(void)

void FUN_1407732ca(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pdVar10 = &local_c0;
  dVar9 = (double)FUN_140496eb6(pdVar10,param_1 + 0x110,param_1);
  uVar11 = SUB84(pdVar10,0);
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x9c) & 1) != 0)) {
    if ((local_c0 == *(double *)(lVar1 + 0x260)) &&
       (!NAN(local_c0) && !NAN(*(double *)(lVar1 + 0x260)))) {
      if ((local_b8 == *(double *)(lVar1 + 0x268)) &&
         (!NAN(local_b8) && !NAN(*(double *)(lVar1 + 0x268)))) {
        if ((local_b0 == *(double *)(lVar1 + 0x270)) &&
           (!NAN(local_b0) && !NAN(*(double *)(lVar1 + 0x270)))) {
          dVar4 = *(double *)(lVar1 + 0x240);
          dVar5 = *(double *)(lVar1 + 0x248);
          dVar6 = *(double *)(lVar1 + 0x250);
          dVar7 = *(double *)(lVar1 + 600);
          pdVar10 = *(double **)(lVar1 + 0x228);
          local_a8 = dVar4;
          uStack_a0 = dVar5;
          local_98 = dVar6;
          uStack_90 = dVar7;
          if (pdVar10 == (double *)0x0) {
            uVar11 = 0x40;
            pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
            dVar9 = DAT_14c8463d8;
            *pdVar10 = DAT_14c8463d0;
            pdVar10[1] = dVar9;
            dVar9 = DAT_14c8463e8;
            pdVar10[2] = DAT_14c8463e0;
            pdVar10[3] = dVar9;
            dVar9 = DAT_14c846500;
            pdVar10[4] = DAT_14c8464f8;
            pdVar10[5] = dVar9;
            dVar9 = DAT_14c846508;
            pdVar10[6] = DAT_14c846508;
            *(double **)(lVar1 + 0x228) = pdVar10;
          }
          auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
          auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
          iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
          auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
          auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
          auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
          uVar12 = movmskpd(uVar11,auVar3);
          if ((uVar12 & 0x3fffffff) != 0 || iVar8 != 0) {
            *(undefined4 *)(pdVar10 + 2) = (undefined4)local_98;
            *(undefined4 *)((longlong)pdVar10 + 0x14) = local_98._4_4_;
            *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_90._4_4_;
            *(undefined4 *)pdVar10 = (undefined4)local_a8;
            *(undefined4 *)((longlong)pdVar10 + 4) = local_a8._4_4_;
            *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_a0._4_4_;
            FUN_1448052ee(&local_a8,&local_88);
            pdVar10[6] = local_78;
            pdVar10[4] = local_88;
            pdVar10[5] = dStack_80;
          }
          if ((*(double *)(param_1 + 0x128) == pdVar10[4]) &&
             (!NAN(*(double *)(param_1 + 0x128)) && !NAN(pdVar10[4]))) {
            if ((*(double *)(param_1 + 0x130) == pdVar10[5]) &&
               (!NAN(*(double *)(param_1 + 0x130)) && !NAN(pdVar10[5]))) {
              if ((*(double *)(param_1 + 0x138) == pdVar10[6]) &&
                 (!NAN(*(double *)(param_1 + 0x138)) && !NAN(pdVar10[6]))) goto LAB_1407733fc;
            }
          }
        }
      }
    }
    local_c8 = *(undefined8 *)(param_1 + 0x138);
    local_d8 = *(undefined4 *)(param_1 + 0x128);
    uStack_d4 = *(undefined4 *)(param_1 + 300);
    uStack_d0 = *(undefined4 *)(param_1 + 0x130);
    uStack_cc = *(undefined4 *)(param_1 + 0x134);
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 != 0) {
      local_98 = local_b0 - *(double *)(lVar1 + 0x270);
      uStack_a0 = local_b8 - *(double *)(lVar1 + 0x268);
      local_a8 = local_c0 - *(double *)(lVar1 + 0x260);
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      FUN_1407fd932(lVar1,&local_a8,&local_d8,0);
    }
  }
LAB_1407733fc:
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140773568 FUN_140773568 body=424 status=ok
// SIG undefined FUN_140773568(void)

void FUN_140773568(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_c0 = &local_a8;
      local_a8 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_142b47bc4;
      local_c8 = &LAB_1478989f1;
      local_d0 = &LAB_146391124;
      local_d8 = L"Engine";
      local_e0 = 0x10000000000;
      local_e8 = 0x10000005;
      local_f0 = 0x10;
      local_f8 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      lVar2 = *(longlong *)(param_1 + 0x1c8);
      if (lVar2 == 0) goto LAB_140773638;
    }
    if ((((DAT_14cac6e60 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      local_a8 = (code *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0x3ff0000000000000;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1407737c2(param_1 + 0xe0,&local_a8,param_1);
      local_f8 = *(undefined4 *)(param_1 + 0x160);
      FUN_140773712(lVar2,&local_a8,0,*(undefined4 *)(param_1 + 0x15c));
    }
  }
LAB_140773638:
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140773712 FUN_140773712 body=175 status=ok
// SIG undefined FUN_140773712(void)

void FUN_140773712(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x960))(param_1,param_3);
  if ((((cVar2 != '\0') &&
       (((lVar3 = param_1[0x16], lVar3 != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
        (*(longlong *)(lVar3 + 0x260) != 0)))) &&
      (plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x260) + 0x210), plVar1 != (longlong *)0x0)) &&
     ((DAT_14c761944 != '\0' ||
      ((lVar3 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff), lVar3 != 0 &&
       (*(longlong *)(lVar3 + 0x138) != 0)))))) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_3,param_2,param_4);
  }
  return;
}



// FUNCTION 1407737c2 FUN_1407737c2 body=566 status=ok
// SIG undefined FUN_1407737c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407737c2(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140496eb6(&local_b8,param_1 + 6);
  param_2[2] = local_a8;
  *param_2 = local_b8;
  param_2[1] = uStack_b0;
  auVar1 = *(undefined1 (*) [16])(param_1 + 9);
  auVar15 = divpd(auVar1,_DAT_1499387d0);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_1[0xb];
  auVar16 = divpd(auVar16,_DAT_1499387d0);
  auVar15 = roundpd(auVar15,auVar15,3);
  auVar16 = roundpd(auVar16,auVar16,3);
  dVar8 = (auVar1._0_8_ - auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar9 = (auVar1._8_8_ - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar6 = ((double)param_1[0xb] - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar7 = (0.0 - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar3 = sin(dVar8);
  dVar4 = sin(dVar9);
  dVar5 = sin(dVar6);
  sin(dVar7);
  dVar8 = cos(dVar8);
  dVar9 = cos(dVar9);
  dVar6 = cos(dVar6);
  cos(dVar7);
  dVar7 = dVar4 * dVar3 * dVar5 + dVar9 * dVar8 * dVar6;
  param_2[4] = dVar3 * dVar4 * dVar6 - dVar8 * dVar9 * dVar5;
  param_2[5] = -(dVar3 * dVar9 * dVar6) - dVar8 * dVar4 * dVar5;
  auVar1._8_4_ = SUB84(dVar7,0);
  auVar1._0_8_ = -(dVar9 * dVar3 * dVar5) + dVar4 * dVar8 * dVar6;
  auVar1._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 6) = auVar1;
  uVar2 = param_1[2];
  uVar14 = param_1[1];
  param_2[8] = *param_1;
  param_2[9] = uVar14;
  param_2[10] = uVar2;
  uVar10 = *(undefined4 *)(param_1 + 3);
  uVar11 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar12 = *(undefined4 *)(param_1 + 4);
  uVar13 = *(undefined4 *)((longlong)param_1 + 0x24);
  param_2[0xd] = param_1[5];
  *(undefined4 *)(param_2 + 0xb) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar11;
  *(undefined4 *)(param_2 + 0xc) = uVar12;
  *(undefined4 *)((longlong)param_2 + 100) = uVar13;
  *(byte *)(param_2 + 0xe) =
       *(byte *)(param_1 + 0xf) * '\x02' & 4 | *(byte *)(param_1 + 0xf) & 1 | 2;
  if ((local_a0 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407739fa FUN_1407739fa body=304 status=ok
// SIG undefined FUN_1407739fa(void)

undefined8 FUN_1407739fa(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140773b24;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140773b24;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_140773b24:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140773acc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140773acc;
    }
  }
  uVar6 = 0;
LAB_140773acc:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140773b2c FUN_140773b2c body=1018 status=ok
// SIG undefined FUN_140773b2c(void)

void FUN_140773b2c(longlong param_1,int param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  int local_6c;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_6c = param_2;
  if (*(longlong *)(param_1 + 0x180) == 0) {
LAB_140773d20:
    if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_90 = &local_68;
      local_68 = FUN_141864c34;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1464cee30;
      local_98 = &LAB_148bfac22;
      local_a0 = &LAB_140f21842;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x128);
      if (lVar9 != 0) {
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x120);
        plVar10 = plVar11 + lVar9 * 2;
        do {
          plVar4 = (longlong *)plVar11[1];
          if (plVar4 != (longlong *)0x0) {
            lVar9 = *plVar11;
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
            iVar6 = (int)plVar4[1];
            do {
              if (iVar6 == 0) goto LAB_140773c97;
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar12 = iVar6 == iVar5;
              if (bVar12) {
                *(int *)(plVar4 + 1) = iVar6 + 1;
                iVar5 = iVar6;
              }
              iVar6 = iVar5;
              UNLOCK();
            } while (!bVar12);
            if (lVar9 != 0) {
              AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x168));
              *(int *)(lVar9 + 0x160) = *(int *)(lVar9 + 0x160) + 1;
              if (*(int *)(*(longlong *)(param_1 + 0x180) + 0x144) == local_6c) {
                iVar6 = (int)plVar3[0x8fb];
                if (((longlong)iVar6 < 0) || ((int)plVar3[0x8f8] <= iVar6)) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = *(char *)(plVar3[0x8f7] + 0x80 + (longlong)iVar6 * 0x88);
                }
                iVar6 = *(int *)(lVar9 + 0x128);
                if (*(char *)(lVar9 + 0x124) == cVar7) {
                  if (iVar6 != 0) goto LAB_140773c87;
                  iVar6 = 0;
                }
                *(char *)(lVar9 + 0x124) = cVar7;
                lVar8 = 0x128;
LAB_140773ce9:
                *(int *)(lVar9 + lVar8) = iVar6 + 1;
              }
              else {
                if (*(int *)(*(longlong *)(param_1 + 0x180) + 0x148) != local_6c) {
                  bVar12 = *(char *)((longlong)plVar3 + 0x73eb) == '\x01';
                  iVar6 = *(int *)(lVar9 + 0x140);
                  if ((bool)*(char *)(lVar9 + 0x13c) == bVar12) {
                    if (iVar6 != 0) goto LAB_140773c87;
                    iVar6 = 0;
                  }
                  *(bool *)(lVar9 + 0x13c) = bVar12;
                  lVar8 = 0x140;
                  goto LAB_140773ce9;
                }
                if (param_3 <= 0.0) {
                  iVar6 = *(int *)(lVar9 + 0x138);
                  if (*(char *)(lVar9 + 0x134) == '\0') {
                    if (iVar6 != 0) goto LAB_140773c87;
                    iVar6 = 0;
                  }
                  *(undefined1 *)(lVar9 + 0x134) = 0;
                  lVar8 = 0x138;
                  goto LAB_140773ce9;
                }
              }
LAB_140773c87:
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x168));
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
LAB_140773c97:
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar10);
      }
      FUN_1402811b8(param_1);
      FUN_144925f42(param_1);
      lVar9 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
      if ((lVar9 != 0) && (DAT_14cbadd90 == 0)) {
        local_90 = &local_68;
        local_68 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1459f2e4c;
        local_98 = &LAB_148c39de3;
        local_a0 = &LAB_1457a9eb2;
        local_a8 = &DAT_149e063b2;
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      goto LAB_140773d20;
    }
  }
  FUN_1402811b8(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
}



// FUNCTION 140773f68 FUN_140773f68 body=121 status=ok
// SIG undefined FUN_140773f68(void)

undefined8 FUN_140773f68(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  
  if (((*(int *)(param_1 + 0x14) != 0) && (lVar2 = FUN_140495e96(), lVar2 != 0)) &&
     (plVar3 = (longlong *)FUN_140773fe2(), plVar3 != (longlong *)0x0)) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))((longlong *)(param_1 + -0x30));
    lVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3,*(undefined4 *)(lVar2 + 0xe0),uVar4);
    if (((lVar2 != 0) && (*(User **)(lVar2 + 0x2b8) != (User *)0x0)) &&
       (bVar1 = bifrost::account::isAuthed(*(User **)(lVar2 + 0x2b8)), bVar1)) {
      return CONCAT71(extraout_var,1);
    }
  }
  return 0;
}



// FUNCTION 140773fe2 FUN_140773fe2 body=223 status=ok
// SIG undefined FUN_140773fe2(void)

void FUN_140773fe2(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "Shift";
  local_18 = 5;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar2 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,1);
  (**(code **)(*plVar2 + 0x50))(plVar2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407740c8 FUN_1407740c8 body=114 status=ok
// SIG undefined FUN_1407740c8(void)

void FUN_1407740c8(longlong param_1)

{
  byte in_stack_00000038;
  
  (**(code **)(**(longlong **)
                 (param_1 + 8 +
                 (ulonglong)(*(int *)(param_1 + 0x18) <= (int)(uint)in_stack_00000038) * 8) + 0x20))
            ();
  return;
}



// FUNCTION 14077413a FUN_14077413a body=75 status=ok
// SIG undefined FUN_14077413a(void)

void FUN_14077413a(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_4 & 1) != 0) {
    uVar1 = *(undefined4 *)(*(undefined1 **)(param_1 + 0x10) + 0x1c);
  }
  FUN_14378090e(*(undefined8 *)(param_1 + 0x60),param_2,uVar1,**(undefined1 **)(param_1 + 0x10),
                param_6,param_9,param_10);
  return;
}



// FUNCTION 140774186 FUN_140774186 body=1391 status=ok
// SIG undefined FUN_140774186(void)

void FUN_140774186(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 **ppuVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  longlong local_178;
  longlong local_170;
  PSRWLOCK local_168;
  int local_160;
  undefined8 *local_158;
  PSRWLOCK local_150;
  int local_148;
  longlong local_140;
  PSRWLOCK local_138;
  int local_130;
  longlong local_128;
  PSRWLOCK local_120;
  int local_118;
  longlong local_110;
  undefined1 *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  longlong local_e0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((*(byte *)(param_1 + 0x8c) & 0x80) != 0) && (*(int *)(param_1 + 0x208) != 0)) &&
     (*(longlong *)(param_1 + 0x288) != 0)) {
    lVar6 = param_1 + 0x208;
    FUN_1448d5e3c(&local_88,lVar6);
    puVar4 = *(undefined8 **)(local_88 + 0x1e0);
    local_168 = (PSRWLOCK)(puVar4 + 6);
    local_160 = 0;
    AcquireSRWLockShared(local_168);
    plVar2 = local_80;
    local_158 = puVar4;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar12 = (int *)((longlong)plVar2 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (*(int *)(param_1 + 0x298) != *(int *)(local_158 + 5)) {
      *(int *)(param_1 + 0x298) = *(int *)(local_158 + 5);
      FUN_1407755f2(param_1,&local_168,0);
    }
    lVar5 = *(longlong *)(param_1 + 0x288);
    FUN_1448d5e3c(&local_88,lVar6);
    lVar10 = *(longlong *)(local_88 + 0x550);
    local_120 = (PSRWLOCK)(lVar10 + 0x168);
    local_118 = 0;
    AcquireSRWLockShared(local_120);
    plVar2 = local_80;
    local_110 = lVar10;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar12 = (int *)((longlong)plVar2 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_1448d5e3c(&local_88,lVar6);
    lVar10 = *(longlong *)(local_88 + 0x560);
    local_138 = (PSRWLOCK)(lVar10 + 0x168);
    local_130 = 0;
    AcquireSRWLockShared(local_138);
    plVar2 = local_80;
    local_128 = lVar10;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar12 = (int *)((longlong)plVar2 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_1448d5e3c(&local_88,lVar6);
    lVar6 = *(longlong *)(local_88 + 0x570);
    local_150 = (PSRWLOCK)(lVar6 + 0x168);
    local_148 = 0;
    AcquireSRWLockShared(local_150);
    local_140 = lVar6;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar12 = (int *)((longlong)local_80 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    if ((longlong)*(int *)(local_158 + 1) != 0) {
      piVar12 = (int *)*local_158;
      piVar8 = piVar12 + (longlong)*(int *)(local_158 + 1) * 0x36;
      lVar6 = local_140;
      lVar10 = local_128;
      lVar11 = local_110;
      do {
        lVar9 = (longlong)*(int *)(lVar5 + 0xb8);
        if (lVar9 != 0) {
          lVar13 = *(longlong *)(lVar5 + 0xb0);
          lVar9 = lVar9 * 0x268;
          do {
            if (*(int *)(lVar13 + 8) == *piVar12) {
              if (((lVar13 == 0) || (*(char *)(lVar13 + 0x210) != '\0')) ||
                 ((*(char *)(lVar13 + 0x1b8) != '\0' || (*(char *)(lVar13 + 0x1c0) != '\0'))))
              break;
              iVar3 = piVar12[6];
              if (iVar3 == 1) {
                if ((*(int *)(param_1 + 0x2a4) == *(int *)(lVar10 + 0x160)) &&
                   (*(char *)(lVar13 + 0x70) != '\x01')) break;
                *(int *)(param_1 + 0x2a4) = *(int *)(lVar10 + 0x160);
                local_180 = lVar11;
                local_178 = lVar10;
                local_170 = lVar6;
                FUN_1407746f6(&local_138,lVar13);
                *(undefined1 *)(lVar13 + 0x70) = 0;
                local_b8 = 0;
                local_a8 = &PTR_LAB_14b9c0980;
                local_c8[0] = &LAB_1442be648;
                ppuVar7 = local_c8;
                local_a0 = param_1;
              }
              else if (iVar3 == 0) {
                if ((*(int *)(param_1 + 0x2a0) == *(int *)(lVar11 + 0x160)) &&
                   (*(char *)(lVar13 + 0x70) != '\x01')) break;
                *(int *)(param_1 + 0x2a0) = *(int *)(lVar11 + 0x160);
                local_180 = lVar11;
                local_178 = lVar10;
                local_170 = lVar6;
                FUN_1407746f6(&local_120,lVar13);
                *(undefined1 *)(lVar13 + 0x70) = 0;
                local_78 = 0;
                local_68 = &PTR_LAB_14b9c0960;
                local_88 = &LAB_1442be5e8;
                ppuVar7 = &local_88;
                local_60 = param_1;
              }
              else {
                if ((iVar3 != 2) ||
                   ((*(int *)(param_1 + 0x2a8) == *(int *)(lVar6 + 0x160) &&
                    (*(char *)(lVar13 + 0x70) != '\x01')))) break;
                *(int *)(param_1 + 0x2a8) = *(int *)(lVar6 + 0x160);
                local_180 = lVar11;
                local_178 = lVar10;
                local_170 = lVar6;
                FUN_1407746f6(&local_150,lVar13);
                *(undefined1 *)(lVar13 + 0x70) = 0;
                ppuVar7 = local_108;
                local_f8 = 0;
                local_e8 = &PTR_LAB_14b9c09a0;
                local_108[0] = &LAB_1442be6aa;
                local_e0 = param_1;
              }
              FUN_1403911de(param_1,ppuVar7);
              lVar6 = local_170;
              lVar10 = local_178;
              lVar11 = local_180;
              break;
            }
            lVar13 = lVar13 + 0x268;
            lVar9 = lVar9 + -0x268;
          } while (lVar9 != 0);
        }
        piVar12 = piVar12 + 0x36;
      } while (piVar12 != piVar8);
    }
    if (local_148 == 0) {
      ReleaseSRWLockShared(local_150);
    }
    else {
      ReleaseSRWLockExclusive(local_150);
    }
    if (local_130 == 0) {
      ReleaseSRWLockShared(local_138);
    }
    else {
      ReleaseSRWLockExclusive(local_138);
    }
    if (local_118 == 0) {
      ReleaseSRWLockShared(local_120);
    }
    else {
      ReleaseSRWLockExclusive(local_120);
    }
    if (local_160 == 0) {
      ReleaseSRWLockShared(local_168);
    }
    else {
      ReleaseSRWLockExclusive(local_168);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407746f6 FUN_1407746f6 body=3223 status=ok
// SIG undefined FUN_1407746f6(void)

void FUN_1407746f6(longlong param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_d8 [40];
  longlong *local_b0 [2];
  longlong local_a0 [2];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)(*(longlong **)(param_1 + 0x10))[1] < 1) {
    if (*(int *)(param_2 + 0x80) == 0 || *(int *)(param_2 + 0x7c) != 0) {
      *(undefined4 *)(param_2 + 0x7c) = 0;
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
    }
    if (*(int *)(param_2 + 0xac) == 0 || *(float *)(param_2 + 0xa8) != 0.0) {
      *(undefined4 *)(param_2 + 0xa8) = 0;
      *(int *)(param_2 + 0xac) = *(int *)(param_2 + 0xac) + 1;
    }
    if (*(int *)(param_2 + 0xa4) == 0 || *(float *)(param_2 + 0xa0) != 0.0) {
      *(undefined4 *)(param_2 + 0xa0) = 0;
      *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + 1;
    }
    FUN_140c12dec(param_2 + 0x88,&DAT_149e02088);
  }
  else {
    plVar6 = (longlong *)**(longlong **)(param_1 + 0x10);
    fVar17 = (*(float *)(plVar6 + 5) / *(float *)(plVar6 + 7)) * 100.0;
    if (((fVar17 != *(float *)(param_2 + 0xa0)) || (NAN(fVar17) || NAN(*(float *)(param_2 + 0xa0))))
       || (*(int *)(param_2 + 0xa4) == 0)) {
      *(float *)(param_2 + 0xa0) = fVar17;
      *(int *)(param_2 + 0xa4) = *(int *)(param_2 + 0xa4) + 1;
      plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x10);
    }
    fVar17 = *(float *)(plVar6 + 8) * 100.0;
    if (((fVar17 != *(float *)(param_2 + 0xa8)) || (NAN(fVar17) || NAN(*(float *)(param_2 + 0xa8))))
       || (*(int *)(param_2 + 0xac) == 0)) {
      *(float *)(param_2 + 0xa8) = fVar17;
      *(int *)(param_2 + 0xac) = *(int *)(param_2 + 0xac) + 1;
      plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x10);
    }
    bVar5 = *(byte *)(*plVar6 + 0x18);
    plVar6 = (longlong *)FUN_14077538e();
    uVar11 = 0xffffffff;
    if (0 < (longlong)(int)plVar6[9]) {
      puVar9 = (ulonglong *)(plVar6[8] + 8);
      uVar13 = 0;
      do {
        if (*puVar9 == (ulonglong)bVar5) {
          uVar11 = uVar13 & 0xffffffff;
          break;
        }
        uVar13 = uVar13 + 1;
        puVar9 = puVar9 + 2;
      } while ((longlong)(int)plVar6[9] != uVar13);
    }
    (**(code **)(*plVar6 + 0x2b0))(plVar6,local_b0,uVar11);
    plVar6 = local_b0[0];
    if (*(code **)(*local_b0[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_b0[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar3 = *(code **)(*local_b0[0] + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar6 = local_b0[0] + 3;
      if (local_b0[0][5] != 0) {
        plVar6 = (longlong *)(local_b0[0][5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar6 = local_b0[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar3)();
    }
    FUN_144a2b0a4(plVar6,local_a0);
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    FUN_1407753c8(local_a0);
    FUN_140775496(param_2 + 0x88,local_a0);
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0x108) != '\x01') ||
     (*(float *)(*(longlong *)(param_1 + 0x10) + 0xf8) <= 0.0)) {
    if ((*(char *)(param_2 + 0x68) != '\0') || (*(int *)(param_2 + 0x6c) == 0)) {
      *(undefined1 *)(param_2 + 0x68) = 0;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
    }
    fVar17 = *(float *)(param_2 + 0xa0);
    iVar8 = *(int *)(param_2 + 0xb4);
    if (((fVar17 != *(float *)(param_2 + 0xb0)) || (NAN(fVar17) || NAN(*(float *)(param_2 + 0xb0))))
       || (iVar8 == 0)) {
LAB_140774e68:
      *(float *)(param_2 + 0xb0) = fVar17;
      *(int *)(param_2 + 0xb4) = iVar8 + 1;
    }
  }
  else if (*(char *)(param_2 + 0x68) == '\0') {
    *(undefined1 *)(param_2 + 0x68) = 1;
    *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
    iVar7 = (int)(*(float *)(*(longlong *)(param_1 + 0x10) + 0xf8) * 100.0 +
                 *(float *)(param_2 + 0xb0));
    iVar10 = (int)(100.0 - *(float *)(param_2 + 0xa8));
    iVar8 = *(int *)(param_2 + 0xb4);
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
    fVar17 = (float)iVar10;
    if (*(float *)(param_2 + 0xb0) != fVar17 || iVar8 == 0) goto LAB_140774e68;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (((int)plVar6[1] < 2) || (*(char *)((longlong)plVar6 + 300) != '\x01')) {
    if (*(int *)(param_2 + 0xbc) == 0 || *(int *)(param_2 + 0xb8) != 0) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
      *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
    }
    if (*(int *)(param_2 + 0xc4) == 0 || *(int *)(param_2 + 0xc0) != 0) {
      *(undefined4 *)(param_2 + 0xc0) = 0;
      *(int *)(param_2 + 0xc4) = *(int *)(param_2 + 0xc4) + 1;
    }
    if ((*(int *)(param_2 + 0xe4) == 0 | *(byte *)(param_2 + 0xe0)) == 1) {
      *(undefined1 *)(param_2 + 0xe0) = 0;
      *(int *)(param_2 + 0xe4) = *(int *)(param_2 + 0xe4) + 1;
    }
    if ((*(int *)(param_2 + 0xec) == 0 | *(byte *)(param_2 + 0xe8)) == 1) {
      *(undefined1 *)(param_2 + 0xe8) = 0;
      *(int *)(param_2 + 0xec) = *(int *)(param_2 + 0xec) + 1;
    }
    if (*(int *)(param_2 + 0xcc) == 0 || *(float *)(param_2 + 200) != 0.0) {
      *(undefined4 *)(param_2 + 200) = 0;
      *(int *)(param_2 + 0xcc) = *(int *)(param_2 + 0xcc) + 1;
    }
    if (*(int *)(param_2 + 0xdc) == 0 || *(int *)(param_2 + 0xd8) != 0) {
      *(undefined4 *)(param_2 + 0xd8) = 0;
      *(int *)(param_2 + 0xdc) = *(int *)(param_2 + 0xdc) + 1;
    }
    FUN_140c12dec(param_2 + 0x100,&DAT_149e02088);
    goto LAB_140774c38;
  }
  lVar15 = *plVar6;
  if (*(int *)(param_2 + 0xbc) == 0 || *(int *)(param_2 + 0xb8) != (int)*(float *)(lVar15 + 0x80)) {
    *(int *)(param_2 + 0xb8) = (int)*(float *)(lVar15 + 0x80);
    *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
    plVar6 = *(longlong **)(param_1 + 0x10);
    lVar15 = *plVar6;
  }
  iVar8 = (int)*(float *)(lVar15 + 0x90);
  if ((*(int *)(param_2 + 0xc0) != iVar8) || (*(int *)(param_2 + 0xc4) == 0)) {
    *(int *)(param_2 + 0xc0) = iVar8;
    *(int *)(param_2 + 0xc4) = *(int *)(param_2 + 0xc4) + 1;
    plVar6 = *(longlong **)(param_1 + 0x10);
  }
  if (*(int *)(param_2 + 0xdc) == (int)plVar6[0x2b]) {
    uVar2 = *(uint *)(param_2 + 0xd8);
  }
  else {
    uVar2 = *(uint *)((longlong)plVar6 + 0x154);
    *(uint *)(param_2 + 0xd8) = uVar2;
    *(int *)(param_2 + 0xdc) = (int)plVar6[0x2b];
  }
  uVar11 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    bVar5 = 0 < iVar8 & *(byte *)(*(longlong *)(param_1 + 0x10) + 300);
    if ((*(byte *)(param_2 + 0xe0) != bVar5) || (*(int *)(param_2 + 0xe4) == 0)) {
      *(byte *)(param_2 + 0xe0) = bVar5;
      *(int *)(param_2 + 0xe4) = *(int *)(param_2 + 0xe4) + 1;
    }
    if (bVar5 != 0) {
      fVar17 = (*(float *)(**(longlong **)(param_1 + 0x10) + 0x80) /
               *(float *)(**(longlong **)(param_1 + 0x10) + 0x90)) * 100.0;
      if (*(int *)(param_2 + 0xcc) == 0 || fVar17 != *(float *)(param_2 + 200)) {
        *(float *)(param_2 + 200) = fVar17;
        *(int *)(param_2 + 0xcc) = *(int *)(param_2 + 0xcc) + 1;
      }
    }
    if ((*(char *)(param_2 + 0xe8) != '\0') || (*(int *)(param_2 + 0xec) == 0)) {
      *(undefined1 *)(param_2 + 0xe8) = 0;
      *(int *)(param_2 + 0xec) = *(int *)(param_2 + 0xec) + 1;
    }
  }
  else {
    if ((*(char *)(param_2 + 0xe8) == '\0') || (*(int *)(param_2 + 0xec) == 0)) {
      *(undefined1 *)(param_2 + 0xe8) = 1;
      *(int *)(param_2 + 0xec) = *(int *)(param_2 + 0xec) + 1;
    }
    if ((*(char *)(param_2 + 0xe0) != '\0') || (*(int *)(param_2 + 0xe4) == 0)) {
      *(undefined1 *)(param_2 + 0xe0) = 0;
      *(int *)(param_2 + 0xe4) = *(int *)(param_2 + 0xe4) + 1;
    }
    fVar17 = *(float *)(**(longlong **)(param_1 + 0x10) + 0x80);
    fVar1 = *(float *)(**(longlong **)(param_1 + 0x10) + 0x90);
    iVar8 = 0;
    uVar13 = 100 / uVar11;
    *(undefined4 *)(param_2 + 0xf8) = 0;
    if (*(int *)(param_2 + 0xfc) < 0) {
      FUN_148e77092(param_2 + 0xf0,100 % uVar11);
      uVar11 = (ulonglong)*(uint *)(param_2 + 0xd8);
      if ((int)*(uint *)(param_2 + 0xd8) < 1) goto LAB_140774b4e;
    }
    fVar19 = (float)(int)uVar13;
    iVar10 = -1;
    do {
      bVar16 = iVar8 == 0;
      fVar18 = (fVar17 / fVar1) * 100.0 - (float)((int)uVar11 + iVar10) * fVar19;
      if (fVar18 < fVar19) {
        fVar20 = 0.0;
        if (0.0 < fVar18) {
          fVar20 = (fVar18 / fVar19) * 100.0;
          uVar14 = 1;
        }
        else {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 0;
        fVar20 = 100.0;
      }
      iVar7 = *(int *)(param_2 + 0xf8);
      lVar15 = (longlong)iVar7;
      *(uint *)(param_2 + 0xf8) = iVar7 + 1U;
      if (*(uint *)(param_2 + 0xfc) < iVar7 + 1U) {
        FUN_145742970(param_2 + 0xf0,iVar7);
      }
      iVar8 = iVar8 + 1;
      lVar4 = *(longlong *)(param_2 + 0xf0);
      *(float *)(lVar4 + lVar15 * 8) = fVar20;
      *(bool *)(lVar4 + 4 + lVar15 * 8) = bVar16;
      *(undefined1 *)(lVar4 + 5 + lVar15 * 8) = uVar14;
      uVar11 = (ulonglong)*(uint *)(param_2 + 0xd8);
      iVar10 = iVar10 + -1;
    } while (iVar8 < (int)*(uint *)(param_2 + 0xd8));
  }
LAB_140774b4e:
  bVar5 = *(byte *)(*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x58) + 0x18);
  plVar6 = (longlong *)FUN_14077538e();
  uVar11 = 0xffffffff;
  if (0 < (longlong)(int)plVar6[9]) {
    puVar9 = (ulonglong *)(plVar6[8] + 8);
    uVar13 = 0;
    do {
      if (*puVar9 == (ulonglong)bVar5) {
        uVar11 = uVar13 & 0xffffffff;
        break;
      }
      uVar13 = uVar13 + 1;
      puVar9 = puVar9 + 2;
    } while ((longlong)(int)plVar6[9] != uVar13);
  }
  (**(code **)(*plVar6 + 0x2b0))(plVar6,local_b0,uVar11);
  plVar6 = local_b0[0];
  if (*(code **)(*local_b0[0] + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*local_b0[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  pcVar3 = *(code **)(*local_b0[0] + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar6 = local_b0[0] + 3;
    if (local_b0[0][5] != 0) {
      plVar6 = (longlong *)(local_b0[0][5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar6 = local_b0[0] + 2;
  }
  else {
    plVar6 = (longlong *)(*pcVar3)();
  }
  FUN_144a2b0a4(plVar6,local_a0);
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
  FUN_1407753c8(local_a0);
  FUN_140775496(param_2 + 0x100,local_a0);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
LAB_140774c38:
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (*(int *)(param_2 + 0xd4) != (int)plVar6[0x2a]) {
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)((longlong)plVar6 + 0x14c);
    *(int *)(param_2 + 0xd4) = (int)plVar6[0x2a];
    plVar6 = *(longlong **)(param_1 + 0x10);
  }
  iVar10 = (int)*(float *)(plVar6 + 0xe);
  iVar8 = *(int *)(param_2 + 0x154);
  if ((*(int *)(param_2 + 0x150) != iVar10) || (iVar8 == 0)) {
    *(int *)(param_2 + 0x150) = iVar10;
    iVar8 = iVar8 + 1;
    *(int *)(param_2 + 0x154) = iVar8;
    plVar6 = *(longlong **)(param_1 + 0x10);
  }
  iVar12 = (int)*(float *)(plVar6 + 0x10);
  iVar7 = *(int *)(param_2 + 0x15c);
  if ((*(int *)(param_2 + 0x158) != iVar12) || (iVar7 == 0)) {
    *(int *)(param_2 + 0x158) = iVar12;
    iVar7 = iVar7 + 1;
    *(int *)(param_2 + 0x15c) = iVar7;
    plVar6 = *(longlong **)(param_1 + 0x10);
  }
  if (0 < iVar12) {
    fVar17 = (*(float *)(plVar6 + 0xe) / *(float *)(plVar6 + 0x10)) * 100.0;
    if (*(int *)(param_2 + 0x164) == 0 || fVar17 != *(float *)(param_2 + 0x160)) {
      *(float *)(param_2 + 0x160) = fVar17;
      *(int *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + 1;
      plVar6 = *(longlong **)(param_1 + 0x10);
    }
  }
  if ((int)plVar6[1] < 3) {
    if (*(int *)(param_2 + 300) == 0 || *(int *)(param_2 + 0x128) != 0) {
      *(undefined4 *)(param_2 + 0x128) = 0;
      *(int *)(param_2 + 300) = *(int *)(param_2 + 300) + 1;
    }
    if (*(int *)(param_2 + 0x134) == 0 || *(int *)(param_2 + 0x130) != 0) {
      *(undefined4 *)(param_2 + 0x130) = 0;
      *(int *)(param_2 + 0x134) = *(int *)(param_2 + 0x134) + 1;
    }
    if (*(int *)(param_2 + 0x13c) == 0 || *(float *)(param_2 + 0x138) != 0.0) {
      *(undefined4 *)(param_2 + 0x138) = 0;
      *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 0x13c) + 1;
    }
    if ((*(int *)(param_2 + 0x144) == 0 | *(byte *)(param_2 + 0x140)) == 1) {
      *(undefined1 *)(param_2 + 0x140) = 0;
      *(int *)(param_2 + 0x144) = *(int *)(param_2 + 0x144) + 1;
    }
    if (iVar8 == 0 || iVar10 != 0) {
      *(undefined4 *)(param_2 + 0x150) = 0;
      *(int *)(param_2 + 0x154) = iVar8 + 1;
    }
    if (iVar7 == 0 || iVar12 != 0) {
      *(undefined4 *)(param_2 + 0x158) = 0;
      *(int *)(param_2 + 0x15c) = iVar7 + 1;
    }
  }
  else {
    lVar15 = *plVar6;
    if ((*(int *)(param_2 + 0x128) != (int)*(float *)(lVar15 + 0xd8)) ||
       (*(int *)(param_2 + 300) == 0)) {
      *(int *)(param_2 + 0x128) = (int)*(float *)(lVar15 + 0xd8);
      *(int *)(param_2 + 300) = *(int *)(param_2 + 300) + 1;
      plVar6 = *(longlong **)(param_1 + 0x10);
      lVar15 = *plVar6;
    }
    fVar17 = *(float *)(lVar15 + 0xe8);
    if ((*(int *)(param_2 + 0x130) != (int)fVar17) || (*(int *)(param_2 + 0x134) == 0)) {
      *(int *)(param_2 + 0x130) = (int)fVar17;
      *(int *)(param_2 + 0x134) = *(int *)(param_2 + 0x134) + 1;
      plVar6 = *(longlong **)(param_1 + 0x10);
      lVar15 = *plVar6;
      fVar17 = *(float *)(lVar15 + 0xe8);
    }
    fVar17 = (*(float *)(lVar15 + 0xd8) / fVar17) * 100.0;
    if (((fVar17 != *(float *)(param_2 + 0x138)) ||
        (NAN(fVar17) || NAN(*(float *)(param_2 + 0x138)))) || (*(int *)(param_2 + 0x13c) == 0)) {
      *(float *)(param_2 + 0x138) = fVar17;
      *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 0x13c) + 1;
      plVar6 = *(longlong **)(param_1 + 0x10);
    }
    if (*(int *)(param_2 + 0x144) != (int)plVar6[0x27]) {
      *(undefined1 *)(param_2 + 0x140) = *(undefined1 *)((longlong)plVar6 + 0x134);
      *(int *)(param_2 + 0x144) = (int)plVar6[0x27];
    }
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14077538e FUN_14077538e body=57 status=ok
// SIG undefined FUN_14077538e(void)

void FUN_14077538e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb696e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb696e8 = FUN_14171c317(FUN_1465211c6,uVar1,L"HealthUIType");
  }
  return;
}



// FUNCTION 1407753c8 FUN_1407753c8 body=83 status=ok
// SIG undefined FUN_1407753c8(void)

void FUN_1407753c8(longlong *param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  
  iVar2 = (int)param_1[1];
  iVar5 = 0;
  uVar4 = iVar2 - 1;
  bVar7 = uVar4 != 0;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  if (iVar2 != 0 && bVar7) {
    lVar3 = *param_1;
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        sVar1 = *(short *)(lVar3 + uVar6 * 2);
        if (sVar1 != 0x20) {
          *(short *)(lVar3 + (longlong)iVar5 * 2) = sVar1;
          iVar5 = iVar5 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
    }
    if (iVar5 <= (int)uVar4) {
      *(undefined2 *)(lVar3 + (longlong)iVar5 * 2) = 0;
      FUN_14077541c(param_1,iVar5 + 1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14077541c FUN_14077541c body=120 status=ok
// SIG undefined FUN_14077541c(void)

void FUN_14077541c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144a2dbb8(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1449649ae(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140775496 FUN_140775496 body=161 status=ok
// SIG undefined FUN_140775496(void)

undefined8 FUN_140775496(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_140775538(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140775538 FUN_140775538 body=185 status=ok
// SIG undefined FUN_140775538(void)

undefined8 FUN_140775538(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  uVar1 = (uint)param_2[1];
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == (uint)param_1[1]) {
    if (1 < (int)uVar1) {
      uVar2 = *param_1;
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_2 + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(uVar2 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) goto LAB_1407755ac;
LAB_140775577:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_140775577;
      }
      if (uVar4 != uVar6) goto LAB_1407755bb;
    }
  }
  else if ((uint)param_1[1] + uVar1 != 1) goto LAB_1407755bb;
LAB_1407755ac:
  if ((int)param_1[2] != 0) {
    return 0;
  }
LAB_1407755bb:
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    uVar2 = 0;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1407755f2 FUN_1407755f2 body=4248 status=ok
// SIG undefined FUN_1407755f2(void)

void FUN_1407755f2(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  ushort *puVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  int *piVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  float fVar21;
  undefined1 auStack_398 [40];
  longlong *local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  undefined8 uStack_340;
  undefined1 local_330 [4];
  undefined1 local_32c [4];
  longlong *local_328;
  undefined8 uStack_320;
  undefined1 *local_318 [2];
  undefined8 local_308;
  undefined **local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [48];
  undefined1 local_268;
  undefined1 local_148;
  int local_144;
  byte local_120;
  int local_11c;
  char local_110;
  int local_10c;
  undefined1 local_c0;
  int local_bc;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_398;
  lVar8 = *(longlong *)(param_1 + 0x288);
  plVar2 = *(longlong **)(param_2 + 0x10);
  plVar19 = (longlong *)(lVar8 + 0xb0);
  local_370 = plVar19;
  local_368 = lVar8;
  local_360 = param_1;
  local_358 = param_2;
  if ((*(int *)(lVar8 + 0xb8) == (int)plVar2[1]) && (param_3 == '\0')) {
    if (0 < *(int *)(lVar8 + 0xb8)) {
      lVar8 = 0;
      do {
        lVar10 = (longlong)*(int *)(*(undefined8 **)(local_358 + 0x10) + 1);
        if (lVar10 == 0) {
LAB_1407765ba:
          FUN_1407755f2(local_360,local_358,1);
          break;
        }
        lVar12 = lVar8 * 0x268;
        piVar18 = (int *)(*plVar19 + lVar12);
        piVar13 = (int *)**(undefined8 **)(local_358 + 0x10);
        lVar10 = lVar10 * 0xd8;
        while (*piVar13 != *(int *)(*plVar19 + 8 + lVar12)) {
          piVar13 = piVar13 + 0x36;
          lVar10 = lVar10 + -0xd8;
          if (lVar10 == 0) goto LAB_1407765ba;
        }
        if (piVar13 == (int *)0x0) goto LAB_1407765ba;
        iVar15 = piVar18[1];
        if ((char)*piVar18 == '\0') {
LAB_1407765d3:
          *(char *)piVar18 = '\x01';
          piVar18[1] = iVar15 + 1;
        }
        else if (iVar15 == 0) {
          iVar15 = 0;
          goto LAB_1407765d3;
        }
        piVar1 = piVar18 + 4;
        local_350 = lVar8;
        if (piVar13 + 10 != piVar1) {
          iVar15 = piVar13[0xc];
          pvVar3 = *(void **)(piVar13 + 10);
          piVar18[6] = iVar15;
          if (iVar15 == 0 && piVar18[7] == 0) {
            piVar18[7] = 0;
          }
          else {
            FUN_1446dd670(piVar1,iVar15);
            if (iVar15 != 0) {
              memcpy(*(void **)piVar1,pvVar3,(longlong)iVar15 * 2);
            }
          }
        }
        if (piVar13 != piVar18) {
          iVar15 = piVar13[0x12];
          pvVar3 = *(void **)(piVar13 + 0x10);
          piVar18[0x12] = iVar15;
          if (iVar15 == 0 && piVar18[0x13] == 0) {
            piVar18[0x13] = 0;
          }
          else {
            FUN_1446dd670(piVar18 + 0x10,iVar15);
            if (iVar15 != 0) {
              memcpy(*(void **)(piVar18 + 0x10),pvVar3,(longlong)iVar15 * 2);
            }
          }
        }
        piVar1 = piVar18 + 0xc;
        if (piVar13 + 0x16 != piVar1) {
          iVar15 = piVar13[0x18];
          pvVar3 = *(void **)(piVar13 + 0x16);
          piVar18[0xe] = iVar15;
          if (iVar15 == 0 && piVar18[0xf] == 0) {
            piVar18[0xf] = 0;
          }
          else {
            FUN_1446dd670(piVar1,iVar15);
            if (iVar15 != 0) {
              memcpy(*(void **)piVar1,pvVar3,(longlong)iVar15 * 2);
            }
          }
        }
        FUN_1400b22c2(&local_348,"player_");
        plVar19 = local_370;
        iVar15 = piVar13[2];
        local_328 = (longlong *)0x0;
        uStack_320 = 0;
        lVar10 = 0xf;
        iVar9 = 0x10;
        lVar8 = 0x1000000000;
        iVar16 = iVar15 + 1;
        do {
          lVar8 = lVar8 + -0x100000000;
          *(undefined2 *)((longlong)&local_2d8 + lVar10 * 2) =
               *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar16 % 10) * 2);
          uVar17 = iVar16 + 9;
          lVar10 = lVar10 + -1;
          iVar9 = iVar9 + -1;
          iVar16 = iVar16 / 10;
        } while (0x12 < uVar17);
        if (iVar15 < -1) {
          iVar9 = (int)lVar10;
          lVar8 = (longlong)iVar9;
          *(undefined2 *)((longlong)&local_2d8 + lVar8 * 2) = 0x2d;
        }
        else {
          lVar8 = lVar8 >> 0x20;
        }
        FUN_1400020e8(&local_328,(longlong)&local_2d8 + lVar8 * 2,0x10 - iVar9);
        iVar15 = (int)uStack_320 + -1;
        if ((int)uStack_320 == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_348,local_328,iVar15);
        iVar15 = (int)uStack_340 + -1;
        if ((int)uStack_340 == 0) {
          iVar15 = 0;
        }
        FUN_1402980a2(piVar18 + 8,local_348,iVar15);
        if (local_328 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (piVar18[0x69] != piVar13[0x30]) {
          *(char *)(piVar18 + 0x68) = (char)piVar13[0x2f];
          piVar18[0x69] = piVar13[0x30];
        }
        if (piVar18[0x67] != piVar13[0x32]) {
          piVar18[0x66] = piVar13[0x31];
          piVar18[0x67] = piVar13[0x32];
        }
        if (*(char *)(*plVar19 + 0x1a0 + lVar12) == '\0') {
          FUN_1400b22c2(&local_328,&DAT_149e02088);
          FUN_140233b1a(&local_2d8,&local_328);
          if ((piVar18[0x92] == 0) ||
             (cVar7 = FUN_144722c14(piVar18 + 0x8e,&local_2d8,0), cVar7 == '\0')) {
            FUN_140008f88(piVar18 + 0x8e,&local_2d8);
            piVar18[0x92] = piVar18[0x92] + 1;
          }
          if (local_2d8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_2d8 + 0x10))();
          }
          if (local_328 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          local_2d8 = L"Level Up!";
          local_2d0 = 9;
          FUN_1446e940c(local_32c,&local_2d8);
          local_2d8 = L"BuddyInfo";
          local_2d0 = 9;
          FUN_1446e940c(local_330,&local_2d8);
          FUN_140208bae(&local_2d8,local_330,local_32c,L"Level Up!");
          FUN_14003c038(piVar18 + 0x8e,&local_2d8);
          plVar19 = local_370;
          if (local_2d8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_2d8 + 0x10))();
            plVar19 = local_370;
          }
        }
        if (piVar18[0x65] != piVar13[0x34]) {
          *(char *)(piVar18 + 100) = (char)piVar13[0x33];
          piVar18[0x65] = piVar13[0x34];
        }
        iVar15 = piVar18[0x77];
        if (iVar15 != piVar13[0x1f]) {
          *(char *)(piVar18 + 0x76) = (char)piVar13[0x1e];
          iVar15 = piVar13[0x1f];
          piVar18[0x77] = iVar15;
        }
        if (piVar18[0x73] != piVar13[0x21]) {
          *(char *)(piVar18 + 0x72) = (char)piVar13[0x20];
          piVar18[0x73] = piVar13[0x21];
        }
        if (piVar18[0x7b] != piVar13[0x25]) {
          *(char *)(piVar18 + 0x7a) = (char)piVar13[0x24];
          piVar18[0x7b] = piVar13[0x25];
        }
        if (piVar18[0x75] != piVar13[0x23]) {
          *(char *)(piVar18 + 0x74) = (char)piVar13[0x22];
          piVar18[0x75] = piVar13[0x23];
        }
        if (piVar18[0x79] != piVar13[0x27]) {
          *(char *)(piVar18 + 0x78) = (char)piVar13[0x26];
          piVar18[0x79] = piVar13[0x27];
        }
        if (((char)piVar18[0x76] == '\x01') &&
           (((*(byte *)(piVar13 + 0x20) ^ 1) != 1 || (iVar15 == 0)))) {
          *(byte *)(piVar18 + 0x76) = *(byte *)(piVar13 + 0x20) ^ 1;
          piVar18[0x77] = iVar15 + 1;
        }
        if ((char)piVar18[0x72] == '\x01') {
          local_2d8 = L"Reviving...";
          local_2d0 = 0xb;
          FUN_1446e940c(local_32c,&local_2d8);
          local_2d8 = L"BuddyInfo";
          local_2d0 = 9;
          FUN_1446e940c(local_330,&local_2d8);
          local_2d8 = L"Reviving...";
          local_2d0 = 0xb;
          FUN_140208c1e(&local_328,local_330,local_32c,&local_2d8);
          if ((piVar18[0x8c] == 0) ||
             (cVar7 = FUN_144722c14(piVar18 + 0x88,&local_328,0), cVar7 == '\0')) {
            FUN_140008f88(piVar18 + 0x88,&local_328);
            piVar18[0x8c] = piVar18[0x8c] + 1;
          }
          if (local_328 != (longlong *)0x0) {
            (**(code **)(*local_328 + 0x10))();
          }
        }
        if ((char)piVar18[0x74] == '\x01') {
          local_2d8 = L"Revived!";
          local_2d0 = 8;
          FUN_1446e940c(local_32c,&local_2d8);
          local_2d8 = L"BuddyInfo";
          local_2d0 = 9;
          FUN_1446e940c(local_330,&local_2d8);
          local_2d8 = L"Revived!";
          local_2d0 = 8;
          FUN_140208c1e(&local_328,local_330,local_32c,&local_2d8);
          if ((piVar18[0x8c] == 0) ||
             (cVar7 = FUN_144722c14(piVar18 + 0x88,&local_328,0), cVar7 == '\0')) {
            FUN_140008f88(piVar18 + 0x88,&local_328);
            piVar18[0x8c] = piVar18[0x8c] + 1;
          }
          plVar19 = local_370;
          if (local_328 != (longlong *)0x0) {
            (**(code **)(*local_328 + 0x10))();
            plVar19 = local_370;
          }
        }
        if ((char)piVar18[0x76] == '\x01') {
          local_2d8 = L"Dying!";
          local_2d0 = 6;
          FUN_1446e940c(local_32c,&local_2d8);
          local_2d8 = L"BuddyInfo";
          local_2d0 = 9;
          FUN_1446e940c(local_330,&local_2d8);
          local_2d8 = L"Dying!";
          local_2d0 = 6;
          FUN_140208c1e(&local_328,local_330,local_32c,&local_2d8);
          if ((piVar18[0x8c] == 0) ||
             (cVar7 = FUN_144722c14(piVar18 + 0x88,&local_328,0), cVar7 == '\0')) {
            FUN_140008f88(piVar18 + 0x88,&local_328);
            piVar18[0x8c] = piVar18[0x8c] + 1;
          }
          plVar19 = local_370;
          if (local_328 != (longlong *)0x0) {
            (**(code **)(*local_328 + 0x10))();
            plVar19 = local_370;
          }
        }
        if ((char)piVar18[0x78] == '\x01') {
          local_2d8 = L"Second Wind!";
          local_2d0 = 0xc;
          FUN_1446e940c(local_32c,&local_2d8);
          local_2d8 = L"BuddyInfo";
          local_2d0 = 9;
          FUN_1446e940c(local_330,&local_2d8);
          local_2d8 = L"Second Wind!";
          local_2d0 = 0xc;
          FUN_140208c1e(&local_328,local_330,local_32c,&local_2d8);
          if ((piVar18[0x8c] == 0) ||
             (cVar7 = FUN_144722c14(piVar18 + 0x88,&local_328,0), cVar7 == '\0')) {
            FUN_140008f88(piVar18 + 0x88,&local_328);
            piVar18[0x8c] = piVar18[0x8c] + 1;
          }
          plVar19 = local_370;
          if (local_328 != (longlong *)0x0) {
            (**(code **)(*local_328 + 0x10))();
            plVar19 = local_370;
          }
        }
        if ((char)piVar18[0x7a] == '\x01') {
          local_2d8 = L"Respawning...";
          local_2d0 = 0xd;
          FUN_1446e940c(&local_328,&local_2d8);
          local_2d8 = L"BuddyInfo";
          local_2d0 = 9;
          FUN_1446e940c(local_32c,&local_2d8);
          FUN_140208bae(&local_2d8,local_32c,&local_328,L"Respawning...");
          FUN_14003c038(piVar18 + 0x88,&local_2d8);
          plVar19 = local_370;
          if (local_2d8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_2d8 + 0x10))();
            plVar19 = local_370;
          }
        }
        bVar11 = *(byte *)(piVar18 + 0x74);
        if (((*(byte *)(piVar18 + 0x72) | *(byte *)(piVar18 + 0x78)) & 1) != 0) {
          bVar11 = 1;
        }
        if ((bVar11 != *(byte *)(piVar18 + 0x70)) || (piVar18[0x71] == 0)) {
          *(byte *)(piVar18 + 0x70) = bVar11;
          piVar18[0x71] = piVar18[0x71] + 1;
        }
        bVar11 = *(byte *)(piVar18 + 0x7a);
        if (((*(byte *)(piVar18 + 0x72) | *(byte *)(piVar18 + 0x76) | *(byte *)(piVar18 + 0x78)) & 1
            ) != 0) {
          bVar11 = 1;
        }
        if ((bVar11 != *(byte *)(piVar18 + 0x6e)) || (piVar18[0x6f] == 0)) {
          *(byte *)(piVar18 + 0x6e) = bVar11;
          piVar18[0x6f] = piVar18[0x6f] + 1;
        }
        if ((bVar11 & 1) == 0) {
          if ((*(byte *)(piVar18 + 0x74) & 1) == 0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
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
              plVar19 = local_370;
            }
            plVar2 = (longlong *)(piVar18 + 0x88);
            if ((piVar18[0x8c] == 0) ||
               (cVar7 = FUN_144722c14(plVar2,&DAT_14c844840,0), cVar7 == '\0')) {
              plVar6 = DAT_14c844840;
              plVar4 = (longlong *)*plVar2;
              if (plVar4 != DAT_14c844840) {
                *plVar2 = (longlong)DAT_14c844840;
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 8))();
                }
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
              piVar18[0x8a] = DAT_14c844848;
              piVar18[0x8c] = piVar18[0x8c] + 1;
            }
          }
        }
        else {
          fVar21 = (float)piVar13[0x2a] * 100.0;
          if (((fVar21 != (float)piVar18[0x28]) || (NAN(fVar21) || NAN((float)piVar18[0x28]))) ||
             (piVar18[0x29] == 0)) {
            piVar18[0x28] = (int)fVar21;
            piVar18[0x29] = piVar18[0x29] + 1;
          }
        }
        lVar8 = local_350;
        local_308 = 0;
        local_2f8 = &PTR_LAB_14b9c0940;
        local_2f0 = local_360;
        local_2e8 = (undefined4)local_350;
        local_318[0] = &LAB_1442be584;
        FUN_1403911de(local_360,local_318);
        if (local_348 != 0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(local_368 + 0xb8));
    }
  }
  else {
    iVar15 = *(int *)(lVar8 + 0xbc);
    FUN_145742812(*(undefined8 *)(lVar8 + 0xb0));
    *(undefined4 *)(lVar8 + 0xb8) = 0;
    if ((iVar15 < 0) && (*(int *)(local_368 + 0xbc) != 0)) {
      FUN_148e77062(local_370);
    }
    lVar8 = plVar2[1];
    if ((longlong)(int)lVar8 != 0) {
      lVar10 = *plVar2;
      puVar14 = (undefined1 *)(lVar10 + 0xcc);
      do {
        FUN_145742a86(&local_2d8);
        iVar15 = local_2d8._4_4_;
        if (local_2d8._4_4_ == 0 || (char)local_2d8 == '\0') {
          local_2d8 = (wchar_t *)CONCAT71(local_2d8._1_7_,1);
          local_2d8 = (wchar_t *)CONCAT44(iVar15 + 1,(undefined4)local_2d8);
        }
        local_2d0 = *(undefined4 *)(puVar14 + -0xcc);
        FUN_144a787a6(local_2c8,puVar14 + -0xa4);
        FUN_144a787a6(local_298,puVar14 + -0x8c);
        FUN_144a787a6(local_2a8,puVar14 + -0x74);
        if (local_bc != *(int *)(puVar14 + -0x58)) {
          local_c0 = puVar14[-0x5c];
          local_bc = *(int *)(puVar14 + -0x58);
        }
        if (local_144 != *(int *)(puVar14 + 4)) {
          local_148 = *puVar14;
          local_144 = *(int *)(puVar14 + 4);
        }
        FUN_1400b22c2(&local_328,"player_");
        local_348 = 0;
        uStack_340 = 0;
        FUN_144a83b10(&local_348,*(int *)(puVar14 + -0xc4) + 1);
        iVar15 = (int)uStack_340 + -1;
        if ((int)uStack_340 == 0) {
          iVar15 = 0;
        }
        FUN_1400020e8(&local_328,local_348,iVar15);
        iVar15 = (int)uStack_320 + -1;
        if ((int)uStack_320 == 0) {
          iVar15 = 0;
        }
        FUN_1402980a2(local_2b8,local_328,iVar15);
        if (local_348 != 0) {
          FUN_1400020a8();
        }
        if (local_11c != *(int *)(puVar14 + -0x50)) {
          local_120 = puVar14[-0x54];
          local_11c = *(int *)(puVar14 + -0x50);
        }
        if (local_10c != *(int *)(puVar14 + -0x48)) {
          local_110 = puVar14[-0x4c];
          local_10c = *(int *)(puVar14 + -0x48);
        }
        if ((local_120 == 1) && ((local_11c == 0 || ((puVar14[-0x4c] ^ 1) != 1)))) {
          local_11c = local_11c + 1;
          local_120 = puVar14[-0x4c] ^ 1;
        }
        if ((local_120 != 0) || (local_110 == '\x01')) {
          *(undefined4 *)(local_360 + 0x2b4) = *(undefined4 *)(puVar14 + -0x24);
        }
        local_268 = 1;
        iVar15 = *(int *)(local_368 + 0xb8);
        *(uint *)(local_368 + 0xb8) = iVar15 + 1U;
        if (*(uint *)(local_368 + 0xbc) < iVar15 + 1U) {
          FUN_1457429f4(local_370,iVar15);
        }
        FUN_145742ca6((longlong)iVar15 * 0x268 + *local_370,&local_2d8);
        if (local_328 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_14574283c(&local_2d8);
        puVar20 = puVar14 + 0xc;
        puVar14 = puVar14 + 0xd8;
      } while (puVar20 != (undefined1 *)((longlong)(int)lVar8 * 0xd8 + lVar10));
    }
    puVar5 = *(ushort **)(local_368 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(local_368 + 0x78) & 0x3f));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14077668c FUN_14077668c body=97 status=ok
// SIG undefined FUN_14077668c(void)

char FUN_14077668c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (((lVar1 != 0) && (fVar3 = (float)FUN_1407766ee(lVar1), *(char *)(lVar1 + 0x719) == '\x01')) &&
     (*(char *)(lVar1 + 0x718) == '\x01')) {
    if (*(float *)(lVar1 + 0x720) <= 0.0) {
      return '\x04';
    }
    if (fVar3 - *(float *)(lVar1 + 0x71c) <= *(float *)(lVar1 + 0x720)) {
      return '\x04';
    }
  }
  bVar2 = FUN_140776774(param_1);
  return (bVar2 ^ 1) * '\x02';
}


