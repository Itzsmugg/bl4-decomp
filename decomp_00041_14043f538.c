// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14043f538 FUN_14043f538 body=478 status=ok
// SIG undefined FUN_14043f538(void)

undefined8 FUN_14043f538(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb10130 == 0) {
    local_40 = &local_20;
    local_20 = FUN_140754f84;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147da9a76;
    local_50 = FUN_1409f3105;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar2 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
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
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043f728 FUN_14043f728 body=1171 status=ok
// SIG undefined FUN_14043f728(void)

longlong FUN_14043f728(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  while( true ) {
    if ((param_1 == 0) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) goto LAB_14043fbc6;
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = (code *)&LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) break;
    lVar3 = FUN_144a7b8cc();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
LAB_14043fba5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
    lVar3 = FUN_144a7757c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) goto LAB_14043fba5;
      goto LAB_14043fbc6;
    }
    lVar3 = FUN_140183dc6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) goto LAB_14043f84e;
    param_1 = *(longlong *)(param_1 + 0x20);
  }
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    if (DAT_14cae8b20 == 0) {
      local_40 = &local_20;
      local_20 = (code *)&LAB_14355090c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147b8e16d;
      local_50 = (code *)&LAB_140810a38;
      local_58 = L"Engine";
      local_60 = 0x800000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar3 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
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
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar3 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
           (lVar4 = lVar2,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar3 + 0x30)) {
          lVar4 = 0;
        }
      } while ((lVar4 == 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0));
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
        lVar3 = FUN_14019a418(lVar4 + 0x2c0);
        if (lVar3 == 0) {
          lVar3 = *(longlong *)(lVar4 + 0x20);
          if (lVar3 != 0) {
            if (DAT_14cb10130 == 0) {
              local_40 = &local_20;
              local_20 = FUN_140754f84;
              local_30 = FUN_14081d0ea;
              local_38 = FUN_14081d0ea;
              local_48 = &LAB_147da9a76;
              local_50 = FUN_1409f3105;
              local_58 = L"Engine";
              local_60 = 0;
              local_68 = 0x10000000;
              local_70 = 8;
              local_78 = 0x990;
              FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
            }
            if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
              lVar3 = *(longlong *)(lVar3 + 0x30);
              goto LAB_14043f82e;
            }
          }
        }
        else {
          lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x78))(lVar3 + 0x28);
          lVar3 = *(longlong *)(lVar3 + 0x30);
LAB_14043f82e:
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x2b0) != 0)) {
            param_1 = *(longlong *)(*(longlong *)(lVar3 + 0x2b0) + 0x3f0);
            goto LAB_14043f84e;
          }
        }
      }
    }
  }
LAB_14043fbc6:
  param_1 = 0;
LAB_14043f84e:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043fbdc FUN_14043fbdc body=80 status=ok
// SIG undefined FUN_14043fbdc(void)

float FUN_14043fbdc(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x27);
  if (fVar2 <= 0.0009999999) {
    cVar1 = (**(code **)(*param_1 + 0x3b8))();
    if ((byte)(cVar1 - 9U) < 2) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = *(float *)(&DAT_14aad5a58 +
                        (ulonglong)((*(byte *)((longlong)param_1 + 0x15a) & 1) == 0) * 4);
    }
  }
  return fVar2;
}



// FUNCTION 14043fd80 FUN_14043fd80 body=136 status=ok
// SIG undefined FUN_14043fd80(void)

void FUN_14043fd80(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_2 + 800);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 800);
    *(uint *)(param_1 + 800) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x324) - iVar2) < uVar1) {
      FUN_14011d10e(param_1,iVar2);
    }
    lVar4 = *(longlong *)(param_2 + 0x318);
    if (*(longlong *)(param_2 + 0x318) == 0) {
      lVar4 = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) == 0) {
      lVar3 = param_1;
    }
    FUN_14011d00d((longlong)iVar2 * 0x108 + lVar3,lVar4,uVar1);
    return;
  }
  return;
}



// FUNCTION 14043fe08 FUN_14043fe08 body=362 status=ok
// SIG undefined FUN_14043fe08(void)

ulonglong FUN_14043fe08(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 in_RAX;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar10 = 0;
  }
  else {
    auVar6._8_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[9] - *(double *)(lVar1 + 0x268)));
    auVar6._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[8] - *(double *)(lVar1 + 0x260)));
    iVar11 = movmskpd(param_3,auVar6);
    auVar4._8_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[0xb] - *(double *)(lVar1 + 0x278)));
    auVar4._0_8_ = -(ulonglong)
                    (9.99999993922529e-09 < ABS((double)param_1[10] - *(double *)(lVar1 + 0x270)));
    uVar12 = movmskpd(param_4,auVar4);
    uVar10 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
      lVar14 = -(ulonglong)
                (9.99999993922529e-09 < ABS((double)param_1[5] - *(double *)(lVar1 + 0x248)));
      auVar9._8_4_ = (int)lVar14;
      auVar9._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[4] - *(double *)(lVar1 + 0x240)));
      auVar9._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar12 = movmskpd(iVar11,auVar9);
      lVar14 = -(ulonglong)
                (9.99999993922529e-09 < ABS((double)param_1[7] - *(double *)(lVar1 + 600)));
      auVar8._8_4_ = (int)lVar14;
      auVar8._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[6] - *(double *)(lVar1 + 0x250)));
      auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar11 = movmskpd(0,auVar8);
      uVar13 = iVar11 << 2 | uVar12;
      if (uVar13 != 0) {
        auVar7._8_8_ = -(ulonglong)
                        (9.99999993922529e-09 < ABS((double)param_1[5] + *(double *)(lVar1 + 0x248))
                        );
        auVar7._0_8_ = -(ulonglong)
                        (9.99999993922529e-09 < ABS((double)param_1[4] + *(double *)(lVar1 + 0x240))
                        );
        iVar11 = movmskpd(uVar12,auVar7);
        auVar5._8_8_ = -(ulonglong)
                        (9.99999993922529e-09 < ABS((double)param_1[7] + *(double *)(lVar1 + 600)));
        auVar5._0_8_ = -(ulonglong)
                        (9.99999993922529e-09 < ABS((double)param_1[6] + *(double *)(lVar1 + 0x250))
                        );
        uVar12 = movmskpd(uVar13,auVar5);
        if ((uVar12 & 0x3fffffff) != 0 || iVar11 != 0) {
          return uVar10;
        }
      }
      auVar3._8_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[0xd] - *(double *)(lVar1 + 0x288))
                      );
      auVar3._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[0xc] - *(double *)(lVar1 + 0x280))
                      );
      iVar11 = movmskpd((int)uVar10,auVar3);
      auVar2._8_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[0xf] - *(double *)(lVar1 + 0x298))
                      );
      auVar2._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 < ABS((double)param_1[0xe] - *(double *)(lVar1 + 0x290))
                      );
      uVar12 = movmskpd((int)param_1,auVar2);
      uVar10 = (ulonglong)((uVar12 & 0x3fffffff) != 0 || iVar11 != 0);
    }
  }
  return uVar10;
}



// FUNCTION 14043ff72 FUN_14043ff72 body=268 status=ok
// SIG undefined FUN_14043ff72(void)

void FUN_14043ff72(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 3) {
      iVar6 = 2;
    }
    else {
      if (*(uint *)(param_1 + 0x20c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        uVar4 = (ulonglong)(int)uVar2;
      }
      else {
        uVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar5 = uVar4 * 0x100;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar5 < 0x7ff1) {
            uVar5 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[(uVar4 & 0xffffffffffffff) * 0x10]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
        }
      }
      iVar3 = (int)(uVar5 >> 8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar6;
    FUN_14044007e(param_1,param_2,iVar6,0x100);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14044007e FUN_14044007e body=141 status=ok
// SIG undefined FUN_14044007e(void)

void FUN_14044007e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 14044010c FUN_14044010c body=116 status=ok
// SIG undefined FUN_14044010c(void)

ulonglong FUN_14044010c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_140440163:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140440163;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x30))
                (lVar4 + *(int *)(param_1 + 0x38),param_2,param_1,*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140440180 FUN_140440180 body=220 status=ok
// SIG undefined FUN_140440180(void)

void FUN_140440180(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 unaff_XMM6 [16];
  float fVar5;
  undefined1 auVar4 [16];
  
  lVar1 = FUN_14008e0ae(param_2);
  if ((*(longlong *)(lVar1 + 0x18) == 0) ||
     (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x18) != '\x01')) {
    fVar3 = *(float *)(lVar1 + 0x30);
  }
  else {
    auVar4 = roundps(unaff_XMM6,ZEXT416(*(uint *)(lVar1 + 0x30)),3);
    fVar3 = auVar4._0_4_;
  }
  fVar5 = param_3;
  if (*(char *)(param_4 + 0x20) != '\0') {
    fVar5 = fVar3 - param_3;
  }
  fVar2 = (float)(~-(uint)(fVar3 == 0.0) & (uint)(param_3 / fVar3));
  if (*(char *)(param_4 + 0x21) != '\0') {
    fVar2 = 1.0 - fVar2;
  }
  lVar1 = FUN_14008e0ae(param_2);
  FUN_14044025c(param_1,fVar5,fVar3,fVar2,*(undefined4 *)(lVar1 + 0x60),param_5);
  return;
}



// FUNCTION 14044025c FUN_14044025c body=399 status=ok
// SIG undefined FUN_14044025c(void)

void FUN_14044025c(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  longlong param_6)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x30))(param_1,1);
  if (lVar1 == 0) {
    return;
  }
  iVar3 = *(int *)(lVar1 + 0x48);
  *(int *)(lVar1 + 0x48) = iVar3 + 1;
  if ((longlong)*(int *)(lVar1 + 0x40) != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x38);
    lVar4 = (longlong)*(int *)(lVar1 + 0x40) * 0x2c;
    do {
      if (((int)*plVar2 == (int)param_6) &&
         (*(int *)((longlong)plVar2 + 4) == (int)((ulonglong)param_6 >> 0x20))) {
        if (plVar2 != (longlong *)0x0) goto LAB_1404402df;
        break;
      }
      plVar2 = (longlong *)((longlong)plVar2 + 0x2c);
      lVar4 = lVar4 + -0x2c;
    } while (lVar4 != 0);
  }
  *(int *)(lVar1 + 0x48) = iVar3 + 2;
  plVar2 = (longlong *)FUN_14044046a(lVar1 + 0x38);
  if ((int)plVar2[1] == 0 || *plVar2 != param_6) {
    *plVar2 = param_6;
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
LAB_1404402df:
  if ((*(float *)((longlong)plVar2 + 0x14) != param_2) ||
     (NAN(*(float *)((longlong)plVar2 + 0x14)) || NAN(param_2))) {
    iVar3 = (int)plVar2[3] + 1;
LAB_1404402f5:
    *(float *)((longlong)plVar2 + 0x14) = param_2;
    *(int *)(plVar2 + 3) = iVar3;
  }
  else if ((int)plVar2[3] == 0) {
    iVar3 = 1;
    goto LAB_1404402f5;
  }
  if ((*(float *)((longlong)plVar2 + 0x1c) != param_3) ||
     (NAN(*(float *)((longlong)plVar2 + 0x1c)) || NAN(param_3))) {
    iVar3 = (int)plVar2[4] + 1;
LAB_1404403d0:
    *(float *)((longlong)plVar2 + 0x1c) = param_3;
    *(int *)(plVar2 + 4) = iVar3;
  }
  else if ((int)plVar2[4] == 0) {
    iVar3 = 1;
    goto LAB_1404403d0;
  }
  if ((*(float *)((longlong)plVar2 + 0x24) != param_4) ||
     (NAN(*(float *)((longlong)plVar2 + 0x24)) || NAN(param_4))) {
    iVar3 = (int)plVar2[5] + 1;
  }
  else {
    if ((int)plVar2[5] != 0) goto LAB_14044033f;
    iVar3 = 1;
  }
  *(float *)((longlong)plVar2 + 0x24) = param_4;
  *(int *)(plVar2 + 5) = iVar3;
LAB_14044033f:
  if ((*(float *)((longlong)plVar2 + 0xc) != param_5) ||
     (NAN(*(float *)((longlong)plVar2 + 0xc)) || NAN(param_5))) {
    iVar3 = (int)plVar2[2] + 1;
  }
  else {
    if ((int)plVar2[2] != 0) {
      return;
    }
    iVar3 = 1;
  }
  *(float *)((longlong)plVar2 + 0xc) = param_5;
  *(int *)(plVar2 + 2) = iVar3;
  return;
}



// FUNCTION 1404403ec FUN_1404403ec body=126 status=ok
// SIG undefined FUN_1404403ec(void)

int * FUN_1404403ec(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x28))();
  if (puVar2 == (undefined8 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 4));
    *(int *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1;
    *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
    if ((longlong)*(int *)(puVar2 + 1) != 0) {
      piVar4 = (int *)*puVar2;
      lVar3 = (longlong)*(int *)(puVar2 + 1) * 0x50;
      do {
        if ((*piVar4 == (int)uVar1) && (piVar4[1] == (int)((ulonglong)uVar1 >> 0x20)))
        goto LAB_140440452;
        piVar4 = piVar4 + 0x14;
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != 0);
    }
    piVar4 = (int *)0x0;
LAB_140440452:
    ReleaseSRWLockExclusive((PSRWLOCK)(puVar2 + 4));
  }
  return piVar4;
}



// FUNCTION 14044046a FUN_14044046a body=64 status=ok
// SIG undefined FUN_14044046a(void)

longlong FUN_14044046a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14571149e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x2c + *param_1;
  FUN_1404404aa(lVar2,1);
  return lVar2;
}



// FUNCTION 1404404aa FUN_1404404aa body=34 status=ok
// SIG undefined FUN_1404404aa(void)

void FUN_1404404aa(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0x2c);
  }
  return;
}



// FUNCTION 1404404d4 FUN_1404404d4 body=340 status=ok
// SIG undefined FUN_1404404d4(void)

longlong * FUN_1404404d4(longlong *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (longlong)&PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = (longlong)&PTR_FUN_14ac3c930;
  FUN_14044066a(param_1 + 0x10,10,1);
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_140440628(param_1 + 0x18,&DAT_14cb23ee0,0);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_14044066a(param_1 + 0x21,10,1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_140440628(param_1 + 0x29,&DAT_14cb23ee0,0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  FUN_14044066a(param_1 + 0x32,10,1);
  *(undefined4 *)(param_1 + 0x39) = 0;
  FUN_140440628(param_1 + 0x3a,&DAT_14cb23ee0,0);
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_14044066a(param_1 + 0x43,10,1);
  *(undefined4 *)(param_1 + 0x4a) = 0;
  FUN_140440628(param_1 + 0x4b,&DAT_14cb23ee0,0);
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



// FUNCTION 140440628 FUN_140440628 body=66 status=ok
// SIG undefined FUN_140440628(void)

longlong FUN_140440628(longlong param_1,longlong *param_2)

{
  FUN_14044066a(param_1,10);
  if ((*(longlong *)(param_1 + 8) != *param_2) || (*(int *)(param_1 + 0x10) != -0xfffff30)) {
    *(longlong *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0x10) = 0xf00000d0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



// FUNCTION 14044066a FUN_14044066a body=138 status=ok
// SIG undefined FUN_14044066a(void)

undefined8 * FUN_14044066a(undefined8 *param_1,byte param_2,undefined1 param_3)

{
  uint uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *_Dst;
  
  *param_1 = 0;
  uVar3 = (ulonglong)((uint)param_2 * 0x120);
  uVar1 = *(uint *)((longlong)&DAT_14c9a8510 + uVar3);
  uVar2 = (ushort)uVar1;
  *(ushort *)(param_1 + 4) = uVar2;
  _Dst = param_1 + 1;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    param_1[1] = _Dst;
  }
  if (*(code **)((longlong)&DAT_14c9a85a8 + uVar3) == (code *)0x0) {
    memset(_Dst,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
  }
  else {
    (**(code **)((longlong)&DAT_14c9a85a8 + uVar3))(_Dst);
  }
  *(byte *)(param_1 + 5) = param_2;
  *(undefined1 *)(param_1 + 6) = param_3;
  return param_1;
}



// FUNCTION 1404406f4 FUN_1404406f4 body=28 status=ok
// SIG undefined FUN_1404406f4(void)

void FUN_1404406f4(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_1 + 0x100);
  *(undefined1 *)(param_1 + 0x79) = *(undefined1 *)(param_1 + 0x210);
  *(undefined1 *)(param_1 + 0x7b) = *(undefined1 *)(param_1 + 0x298);
  return;
}



// FUNCTION 140440710 FUN_140440710 body=1220 status=ok
// SIG undefined FUN_140440710(void)

void FUN_140440710(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  float unaff_XMM6_Da;
  undefined1 auStack_f8 [43];
  undefined1 local_cd;
  uint local_cc;
  longlong *local_c8;
  char local_c0 [8];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_98 [2];
  char local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar4 = *(byte *)(param_1 + 0x25c);
  if (bVar4 == 1) {
    unaff_XMM6_Da = *(float *)(param_1 + 600);
  }
  FUN_140440bd6(param_1);
  bVar5 = *(byte *)(param_1 + 0x25c);
  bVar18 = unaff_XMM6_Da == *(float *)(param_1 + 600);
  if ((bVar5 & 1) == 0) {
    bVar18 = bVar5 == bVar4;
  }
  if ((!(bool)(bVar5 == bVar4 & bVar18)) &&
     ((((bVar4 & bVar5) != 1 || (1e-08 <= ABS(unaff_XMM6_Da - *(float *)(param_1 + 600)))) &&
      (uVar16 = (ulonglong)*(int *)(param_1 + 0x250), 0 < (longlong)uVar16)))) {
    lVar2 = param_1 + 0x108;
    lVar15 = uVar16 * 0x40 + -0x10;
    do {
      lVar17 = *(longlong *)(param_1 + 0x248);
      if (*(longlong *)(param_1 + 0x248) == 0) {
        lVar17 = lVar2;
      }
      cVar6 = *(char *)(lVar17 + -0x30 + lVar15);
      if (cVar6 == '\x01') {
        if (*(longlong *)(lVar17 + -0x28 + lVar15) != 0) goto LAB_14044086d;
LAB_14044083a:
        FUN_140f75858(lVar2,(int)uVar16 + -1);
        FUN_140f757ba(lVar2);
      }
      else {
        if (cVar6 == '\x02') {
          iVar9 = *(int *)(lVar17 + -0x24 + lVar15);
          if ((((iVar9 != 0) && (uVar10 = *(uint *)(lVar17 + -0x28 + lVar15), -1 < (int)uVar10)) &&
              (((int)uVar10 < DAT_14c9647dc &&
               ((lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                param_4 = DAT_14c9647c8, lVar13 != 0 && (*(int *)(lVar13 + 0x10) == iVar9)))))) &&
             ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)) goto LAB_14044086d;
          goto LAB_14044083a;
        }
        if ((((cVar6 != '\x03') || (*(longlong *)(lVar17 + -0x28 + lVar15) == 0)) ||
            (lVar13 = *(longlong *)(lVar17 + -0x20 + lVar15), lVar13 == 0)) ||
           (*(int *)(lVar13 + 8) < 1)) goto LAB_14044083a;
LAB_14044086d:
        plVar14 = (longlong *)(lVar17 + lVar15);
        plVar12 = *(longlong **)(lVar17 + lVar15);
        if (*(char *)(param_1 + 0x25c) == '\x01') {
          if (plVar12 == (longlong *)0x0) {
            FUN_140f75c2e(param_1,lVar17 + lVar15 + -0x30);
          }
          else {
            uVar3 = *(undefined4 *)(param_1 + 600);
            uVar7 = *(undefined1 *)(param_1 + 0x100);
            param_4 = CONCAT71((int7)(param_4 >> 8),uVar7);
            plVar12 = (longlong *)(lVar17 + lVar15 + -0x28);
            if (cVar6 == '\x01') {
LAB_1404408af:
              local_c0[0] = '\x02';
              if (*plVar12 == 0) {
                local_b8._0_4_ = 0;
                uVar10 = 0;
                uVar8 = (uint)local_b8;
              }
              else {
                uVar8 = *(uint *)(*plVar12 + 0xc);
                local_b8 = (ulonglong)uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar13 = 0;
                }
                uVar10 = *(uint *)(lVar13 + 0x10);
                if (uVar10 == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  local_cc = DAT_14c964868 + 1;
                  bVar18 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  local_cd = uVar7;
                  local_c8 = plVar14;
                  if (bVar18) {
                    param_4 = (ulonglong)local_cc;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,param_4);
                  }
                  LOCK();
                  uVar10 = *(uint *)(lVar13 + 0x10);
                  bVar18 = uVar10 == 0;
                  if (bVar18) {
                    *(uint *)(lVar13 + 0x10) = local_cc;
                    uVar10 = 0;
                  }
                  UNLOCK();
                  if (bVar18) {
                    uVar10 = local_cc;
                  }
                  param_4 = CONCAT71((int7)(param_4 >> 8),local_cd);
                  plVar14 = local_c8;
                  uVar8 = (uint)local_b8;
                }
              }
              local_b8._0_4_ = uVar8;
              local_b8 = CONCAT44(uVar10,(uint)local_b8);
            }
            else {
              local_c0[0] = cVar6;
              if (cVar6 == '\x02') {
                local_b8 = *plVar12;
              }
              else {
                local_b8 = *(longlong *)(lVar17 + -0x28 + lVar15);
                local_b0 = *(longlong **)(lVar17 + -0x20 + lVar15);
                if (local_b0 == (longlong *)0x0) {
                  local_a8 = *(undefined8 *)(lVar17 + -0x18 + lVar15);
                  local_a0 = *(undefined1 *)(lVar17 + -0x10 + lVar15);
                }
                else {
                  LOCK();
                  *(int *)((longlong)local_b0 + 0xc) = *(int *)((longlong)local_b0 + 0xc) + 1;
                  UNLOCK();
                  local_a8 = *(undefined8 *)(lVar17 + -0x18 + lVar15);
                  local_a0 = *(undefined1 *)(lVar17 + -0x10 + lVar15);
                  plVar12 = &local_b8;
                  if (cVar6 == '\x01') goto LAB_1404408af;
                }
              }
            }
            local_98[0] = 0;
            if (*(int *)(lVar17 + -8 + lVar15) != 0) {
              local_cd = (undefined1)param_4;
              local_c8 = plVar14;
              uVar11 = FUN_1448174c4(local_98);
              FUN_1400e08b0(uVar11,DAT_14c9a3da0 + (longlong)*(int *)(lVar17 + -8 + lVar15) * 0x10 +
                                   -0x10);
              param_4 = CONCAT71((int7)(param_4 >> 8),local_cd);
              plVar14 = local_c8;
            }
            local_90 = '\0';
            local_68[0] = 0;
            plVar14 = (longlong *)*plVar14;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x18))(plVar14,local_c0,param_4 & 0xffffffff,uVar3);
            }
            FUN_1448173f8(local_68);
            if (local_90 != '\0') {
              if (local_90 == '\x01') {
                local_88 = 0;
              }
              else if ((local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_80 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_80 + 0x10))();
                }
              }
              local_90 = '\0';
            }
            FUN_1448173f8(local_98);
            if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_b0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_b0 + 0x10))();
              }
            }
          }
        }
        else if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
          FUN_14053d96a(plVar14);
        }
      }
      lVar15 = lVar15 + -0x40;
      bVar18 = 1 < uVar16;
      uVar16 = uVar16 - 1;
    } while (bVar18);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140440bd6 FUN_140440bd6 body=388 status=ok
// SIG undefined FUN_140440bd6(void)

void FUN_140440bd6(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_a8 [40];
  float local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x25c) == '\x01') {
    *(undefined1 *)(param_1 + 0x25c) = 0;
  }
  if (((*(byte *)(param_1 + 0x20) & 2) == 0) || (*(int *)(param_1 + 0x250) == 0))
  goto LAB_140440c0d;
  pfVar4 = &local_80;
  FUN_1448729ea(param_1 + 0xa8,pfVar4,param_1 + 0x48);
  fVar5 = local_80;
  if (local_60 == 3) {
LAB_140440c67:
    iVar2 = _isnan((double)fVar5);
    if (iVar2 == 0) {
      *(float *)(param_1 + 600) = fVar5;
      *(undefined1 *)(param_1 + 0x25c) = 1;
    }
  }
  else if (local_60 != 0) {
    pfVar3 = &local_58;
    FUN_1400b56fe(pfVar3,&local_80,3);
    fVar5 = 0.0;
    if (local_38 != 0) {
      fVar5 = local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        pfVar3 = (float *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(pfVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    goto LAB_140440c67;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      pfVar4 = (float *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(pfVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
LAB_140440c0d:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140440d68 FUN_140440d68 body=31 status=ok
// SIG undefined FUN_140440d68(void)

undefined8 FUN_140440d68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140440d88 FUN_140440d88 body=892 status=ok
// SIG undefined FUN_140440d88(void)

uint * FUN_140440d88(uint *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  bVar10 = DAT_14c7609f0 != 0;
  *param_1 = (uint)bVar10;
  if ((bVar10) &&
     ((((cVar2 = FUN_1447e0190(), cVar2 == '\0' || (DAT_14ca9a438 != '\x01')) ||
       (DAT_14ca84e25 != '\x01')) ||
      ((0 < DAT_14ca4b410 ||
       ((&DAT_14ca814b8)
        [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 8) * 2) * 0xf] == 1)))
      ))) {
    *param_1 = 0;
  }
  uVar9 = *(uint *)(param_2 + 0x3338);
  param_1[3] = uVar9;
  param_1[2] = 0;
  uVar4 = *(uint *)(param_2 + 0x3328);
  if (uVar4 == 0xffffffff) {
    uVar4 = uVar9;
    uVar9 = 0x10;
    if (DAT_14c8335d8 < 0x10) {
      uVar9 = DAT_14c8335d8;
    }
  }
  else {
    param_1[3] = uVar4;
    iVar6 = *(int *)(param_2 + 0x3338);
    param_1[2] = iVar6 - uVar4;
    uVar9 = 0x10;
    if (DAT_14c8335d8 < 0x10) {
      uVar9 = DAT_14c8335d8;
    }
    iVar6 = iVar6 - uVar4;
    if (iVar6 != 0) {
      uVar8 = iVar6 + 0x1fU >> 5;
      if (*param_1 == 0) {
        uVar3 = 0x80;
      }
      else {
        uVar3 = ((uVar8 + uVar9 * 2) - 1) / (uVar9 * 2);
      }
      if (uVar3 < uVar8) {
        uVar8 = uVar3;
      }
      uVar3 = 0x20;
      if (0x20 < uVar8) {
        uVar3 = uVar8;
      }
      param_1[6] = uVar3;
      uVar3 = uVar3 * 0x20;
      param_1[7] = uVar3;
      uVar3 = ((iVar6 + uVar3) - 1) / uVar3;
      goto LAB_140440eed;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  uVar3 = 0;
LAB_140440eed:
  param_1[5] = uVar3;
  uVar8 = uVar4 + 0x1f >> 5;
  if (DAT_14ca4b578 < 1) {
    if (*param_1 == 0) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = ((uVar8 + uVar9 * 2) - 1) / (uVar9 * 2);
    }
  }
  else {
    uVar3 = DAT_14ca4b578 + 0x1fU >> 5;
  }
  if (uVar3 < uVar8) {
    uVar8 = uVar3;
  }
  uVar3 = 0x20;
  if (0x20 < uVar8) {
    uVar3 = uVar8;
  }
  param_1[10] = uVar3;
  uVar3 = uVar3 * 0x20;
  param_1[0xb] = uVar3;
  param_1[9] = ((uVar4 + uVar3) - 1) / uVar3;
  uVar4 = *(uint *)(param_3 + 1);
  uVar8 = param_1[0x14];
  if ((int)uVar8 < (int)uVar4) {
    param_1[0x14] = uVar4;
    if (param_1[0x15] - uVar8 < uVar4 - uVar8) {
      FUN_1472e7a9a(param_1 + 0x10,uVar8);
    }
    FUN_140441105();
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    if ((int)uVar4 < (int)uVar8) {
      param_1[0x14] = uVar4;
      FUN_1472e7b7a();
    }
  }
  if (0 < (int)param_3[1]) {
    lVar5 = 0;
    do {
      puVar7 = *(uint **)(param_1 + 0x12);
      if (*(uint **)(param_1 + 0x12) == (uint *)0x0) {
        puVar7 = param_1 + 0x10;
      }
      uVar4 = DAT_14ca4b5e0;
      if ((int)DAT_14ca4b5e0 < 1) {
        lVar1 = *(longlong *)(*(longlong *)(*param_3 + lVar5 * 8) + 0x10);
        if (lVar1 == 0) {
          uVar4 = puVar7[lVar5];
        }
        else {
          iVar6 = uVar9 + (uVar9 == 0);
          uVar4 = ((*(int *)(lVar1 + 0x21d8) + iVar6 * 2) - 1U) / (uint)(iVar6 * 2);
        }
      }
      if (uVar4 < 0x41) {
        uVar4 = 0x40;
      }
      puVar7[lVar5] = uVar4;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_3[1]);
  }
  if ((int)DAT_14ca4b618 < 1) {
    uVar4 = param_1[3];
    if (*param_1 == 0) {
      uVar9 = 0x80;
    }
    else {
      uVar9 = ((uVar9 * 0x20 + uVar4) - 1) / (uVar9 * 0x20);
    }
  }
  else {
    uVar4 = param_1[3];
    uVar9 = DAT_14ca4b618;
  }
  uVar8 = 0x800;
  if (uVar9 < 0x800) {
    uVar8 = uVar9;
  }
  uVar9 = 0x20;
  if (0x20 < uVar8) {
    uVar9 = uVar8;
  }
  param_1[0x1a] = uVar9;
  param_1[0x19] = ((uVar9 + uVar4) - 1) / uVar9;
  return param_1;
}



// FUNCTION 140441105 FUN_140441105 body=19 status=ok
// SIG undefined FUN_140441105(void)

void FUN_140441105(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 140441118 FUN_140441118 body=1705 status=ok
// SIG undefined FUN_140441118(void)

void FUN_140441118(longlong param_1,undefined4 param_2)

{
  longlong *****ppppplVar1;
  undefined4 *puVar2;
  longlong **pplVar3;
  longlong ***ppplVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 auStack_158 [32];
  longlong ***local_138;
  longlong ****local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 *local_100;
  uint local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong ****local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  longlong local_a8;
  int local_a0;
  longlong **local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_78 = 0;
  iVar5 = 0;
  local_70 = 0;
  local_98 = (longlong **)0x0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  ppppplVar1 = (longlong *****)(param_1 + 0xb0);
  puVar2 = (undefined4 *)(param_1 + 0xc0);
  local_130 = (longlong ****)0x100000000;
  local_120._0_4_ = 0xffffffff;
  local_120._4_4_ = 0;
  local_118 = local_118 & 0xffffffff00000000;
  local_128 = puVar2;
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_1449c0562(&local_130);
    iVar5 = *(int *)(param_1 + 0xd8);
  }
  uStack_d0 = (uint)local_120;
  iStack_cc = local_120._4_4_;
  local_c8 = local_118;
  uStack_e0 = local_130;
  local_d8 = local_128;
  local_e8 = (longlong ****)ppppplVar1;
  if ((local_120._4_4_ != iVar5) || (local_128 != puVar2)) {
    do {
      local_138 = (longlong ***)(*local_e8)[(longlong)iStack_cc * 2];
      local_130 = (longlong ****)local_138;
      FUN_144417ee6(local_138,param_2);
      if (*(int *)(local_138 + 0xe) <= *(int *)((longlong)local_138 + 0x9c)) {
        FUN_14908a748(&local_98,&local_108,&local_130);
      }
      uStack_d0 = uStack_d0 & ~uStack_e0._4_4_;
      FUN_1449c0562(&uStack_e0);
    } while (((iStack_cc != iVar5) || (local_d8 != puVar2)) ||
            ((longlong *****)local_e8 != ppppplVar1));
  }
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = (longlong ****)0x0;
  uStack_e0 = (longlong ****)0x0;
  uStack_bc = 0x80;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar7 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xe4);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_14908ac34(&local_e8,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar5)) {
      local_a0 = iVar5;
      FUN_14908aa56();
    }
  }
  local_108 = 0x100000000;
  local_f8 = 0xffffffff;
  uStack_f4 = 0;
  local_f0 = 0;
  local_100 = puVar2;
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_1449c0562(&local_108);
  }
  local_118._0_4_ = local_f8;
  local_118._4_4_ = uStack_f4;
  local_110 = local_f0;
  local_10c = local_ec;
  local_128 = (undefined4 *)local_108;
  local_120 = local_100;
  local_130 = (longlong ****)ppppplVar1;
  if ((int)uStack_f4 < (int)local_100[6]) {
    do {
      if ((int)uStack_90 != local_64) {
        ppplVar4 = (longlong ***)(*local_130)[(longlong)(int)local_118._4_4_ * 2];
        uVar7 = ((uint)((ulonglong)ppplVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppplVar4 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_60;
        }
        for (iVar5 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
            iVar5 != -1; iVar5 = *(int *)(local_98 + (longlong)iVar5 * 2 + 1)) {
          if ((longlong ***)local_98[(longlong)iVar5 * 2] == ppplVar4) goto LAB_140441670;
        }
      }
      FUN_14908a748(&local_e8,&local_108,*local_130 + (longlong)(int)local_118._4_4_ * 2);
LAB_140441670:
      local_118._0_4_ = (uint)local_118 & ~local_128._4_4_;
      FUN_1449c0562(&local_128);
    } while ((int)local_118._4_4_ < (int)local_120[6]);
  }
  if (ppppplVar1 == &local_e8) {
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *****)(param_1 + 0xb0) = local_e8;
    local_e8 = (longlong ****)0x0;
    *(undefined4 *)(param_1 + 0xb8) = (undefined4)uStack_e0;
    *(uint *)(param_1 + 0xbc) = uStack_e0._4_4_;
    uStack_e0 = (longlong ****)0x0;
    if (local_c8 == 0) {
      *puVar2 = (undefined4)local_d8;
      *(undefined4 *)(param_1 + 0xc4) = local_d8._4_4_;
      *(uint *)(param_1 + 200) = uStack_d0;
      *(int *)(param_1 + 0xcc) = iStack_cc;
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(param_1 + 0xd0) = local_c8;
    local_c8 = 0;
    *(undefined4 *)(param_1 + 0xd8) = local_c0;
    *(undefined4 *)(param_1 + 0xdc) = uStack_bc;
    local_c0 = 0;
    uStack_bc = 0;
    *(undefined4 *)(param_1 + 0xe0) = uStack_b8;
    *(undefined4 *)(param_1 + 0xe4) = uStack_b4;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0;
    if (local_a8 == 0) {
      *(undefined4 *)(param_1 + 0xe8) = local_b0;
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xf0) = local_a8;
    local_a8 = 0;
    *(int *)(param_1 + 0xf8) = local_a0;
    local_a0 = 0;
  }
  FUN_1404417c4(&local_e8);
  local_130 = (longlong ****)0x100000000;
  local_120._0_4_ = 0xffffffff;
  local_120._4_4_ = 0;
  local_118 = (ulonglong)local_118._4_4_ << 0x20;
  iVar5 = 0;
  local_128 = (undefined4 *)local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_130);
    iVar5 = local_70;
  }
  uStack_d0 = (uint)local_120;
  iStack_cc = local_120._4_4_;
  local_c8 = local_118;
  uStack_e0 = local_130;
  local_d8 = local_128;
  local_e8 = (longlong ****)&local_98;
  if ((local_120._4_4_ != iVar5) || (local_128 != (undefined4 *)local_88)) {
    do {
      pplVar3 = (*local_e8)[(longlong)iStack_cc * 2];
      if (pplVar3 != (longlong **)0x0) {
        FUN_14907c89a(pplVar3);
        FUN_1400020a8(pplVar3);
      }
      uStack_d0 = uStack_d0 & ~uStack_e0._4_4_;
      FUN_1449c0562(&uStack_e0);
    } while (((iStack_cc != iVar5) || (local_d8 != (undefined4 *)local_88)) ||
            (local_e8 != (longlong ****)&local_98));
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1404417c4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404417c4 FUN_1404417c4 body=118 status=ok
// SIG undefined FUN_1404417c4(void)

void FUN_1404417c4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14044183a FUN_14044183a body=42 status=ok
// SIG undefined FUN_14044183a(void)

void FUN_14044183a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140441864(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 140441864 FUN_140441864 body=257 status=ok
// SIG undefined FUN_140441864(void)

void FUN_140441864(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_140441966();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0x88);
  FUN_14044246e(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    FUN_140441e36(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    FUN_140441e36(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000140441909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140441966 FUN_140441966 body=842 status=ok
// SIG undefined FUN_140441966(void)

void FUN_140441966(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1404422c0(param_1);
  }
  lVar13 = *(longlong *)(param_1 + 0x50);
  if (lVar13 != 0) {
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 == 0) {
      uVar15 = 1;
      uVar17 = 0;
      iVar11 = 0;
      iVar9 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0xa8);
      if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x98);
      }
      uVar16 = *puVar4;
      if (uVar16 == 0) {
        iVar11 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar11 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar7 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar7 = uVar17;
        }
        iVar11 = 0;
        do {
          if (uVar7 == uVar17) goto LAB_1404419be;
          iVar11 = iVar11 + 0x20;
          uVar16 = puVar4[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar17 = 0;
        iVar11 = 0;
      }
      uVar15 = (ulonglong)(-uVar16 & uVar16);
      uVar7 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar9) {
        iVar9 = iVar2;
      }
    }
    if (iVar9 != iVar2) {
      uVar16 = 0xffffffff;
      do {
        plVar12 = (longlong *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x88));
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58);
        if (*(int *)(lVar13 + 0x5d0) != *(int *)(lVar13 + 0x5fc)) {
          lVar14 = *plVar12;
          lVar10 = lVar13 + 0x600;
          if (*(longlong *)(lVar13 + 0x608) != 0) {
            lVar10 = *(longlong *)(lVar13 + 0x608);
          }
          iVar9 = *(int *)(lVar10 + (ulonglong)
                                    (*(int *)(lVar13 + 0x610) - 1U &
                                    (int)lVar14 + (int)((ulonglong)lVar14 >> 0x20) * 0x17) * 4);
          if (iVar9 != -1) {
            do {
              lVar10 = *(longlong *)(lVar13 + 0x5c8) + (longlong)iVar9 * 0x60;
              if (*(longlong *)(*(longlong *)(lVar13 + 0x5c8) + (longlong)iVar9 * 0x60) == lVar14)
              goto LAB_140441b0d;
              iVar9 = *(int *)(lVar10 + 0x58);
            } while (iVar9 != -1);
          }
        }
        lVar10 = 0;
LAB_140441b0d:
        FUN_140441cb0(lVar10 + 8,param_1);
        if (*(int *)(lVar10 + 0x10) == *(int *)(lVar10 + 0x3c)) {
          FUN_14044270c(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x5c8,plVar12);
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar4 = *(uint **)(param_1 + 0xa8);
        if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
          puVar4 = (uint *)(param_1 + 0x98);
        }
        iVar3 = *(int *)(param_1 + 0xb0);
        iVar9 = (int)uVar17;
        lVar13 = (longlong)iVar9;
        uVar8 = puVar4[lVar13] & uVar16;
        if (uVar8 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar9) {
            iVar6 = iVar9;
          }
          if (iVar9 < iVar5) {
            lVar14 = 0;
            do {
              uVar8 = puVar4[lVar13 + lVar14 + 1];
              if (uVar8 != 0) {
                uVar17 = (ulonglong)(iVar9 + (int)lVar14 + 1);
                uVar16 = 0xffffffff;
                goto LAB_140441bae;
              }
              iVar11 = iVar11 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar6 - lVar13 != lVar14);
            uVar16 = 0xffffffff;
            iVar9 = iVar6;
          }
          uVar17 = (ulonglong)(iVar9 + 1);
          iVar9 = iVar3;
        }
        else {
LAB_140441bae:
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar7 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar9 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
      } while (iVar9 != iVar2);
      lVar13 = *(longlong *)(param_1 + 0x50);
    }
LAB_1404419be:
    FUN_140441cb0(*(longlong *)(lVar13 + 0x58) + 0x620,param_1);
    piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x618);
    *piVar1 = *piVar1 - *(int *)(param_1 + 8);
    FUN_140441cb0(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x58) + 0x670,param_1);
  }
  FUN_144958770(param_1 + 0x88,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xe5;
  lVar13 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar13 != 0) {
    FUN_140441e36(lVar13);
    FUN_1400020a8(lVar13);
  }
  lVar13 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (lVar13 != 0) {
    FUN_140441e36(lVar13);
    FUN_1400020a8(lVar13);
    return;
  }
  return;
}



// FUNCTION 140441cb0 FUN_140441cb0 body=158 status=ok
// SIG undefined FUN_140441cb0(void)

undefined8 FUN_140441cb0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_140441d4e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140441d4e FUN_140441d4e body=95 status=ok
// SIG undefined FUN_140441d4e(void)

void FUN_140441d4e(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_140441dae(param_1,param_2,1);
  return;
}



// FUNCTION 140441dae FUN_140441dae body=136 status=ok
// SIG undefined FUN_140441dae(void)

void FUN_140441dae(longlong *param_1,int param_2,int param_3)

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
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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



// FUNCTION 140441e36 FUN_140441e36 body=163 status=ok
// SIG undefined FUN_140441e36(void)

void FUN_140441e36(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1404424c6(lVar1);
    FUN_1400020a8(lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 200) = 0;
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    FUN_140441f12(lVar1 + 0x80);
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(lVar1 + 0x68) = 0;
    if (*(longlong *)(lVar1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_140441eda(lVar1 + 0x20);
    FUN_140441f4a(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 140441eda FUN_140441eda body=55 status=ok
// SIG undefined FUN_140441eda(void)

void FUN_140441eda(longlong *param_1)

{
  FUN_14044204a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140441f12 FUN_140441f12 body=55 status=ok
// SIG undefined FUN_140441f12(void)

void FUN_140441f12(longlong *param_1)

{
  FUN_1402429d4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140441f4a FUN_140441f4a body=123 status=ok
// SIG undefined FUN_140441f4a(void)

void FUN_140441f4a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (0 < (int)param_1[1]) {
    FUN_140441fc6(param_1[2],param_1);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_147cebb24(param_1,0);
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140441fc6 FUN_140441fc6 body=132 status=ok
// SIG undefined FUN_140441fc6(void)

void FUN_140441fc6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      if ((*(int *)(lVar3 + 0x10 + lVar5) == 0) &&
         (plVar4 = *(longlong **)(lVar3 + lVar5), (*(byte *)((longlong)plVar4 + 0x3c) & 0x10) == 0))
      {
        (**(code **)(*plVar4 + 0x148))(plVar4,*(int *)(lVar3 + 0x18 + lVar5) + lVar2);
      }
      lVar5 = lVar5 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar5);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_140389cc2(param_2,0);
    return;
  }
  return;
}



// FUNCTION 14044204a FUN_14044204a body=518 status=ok
// SIG undefined FUN_14044204a(void)

void FUN_14044204a(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar12 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_140442132;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      FUN_14041f8ca((longlong)iVar6 * 0xe0 + *param_1 + 8);
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar12;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140442132;
        }
        uVar12 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140442132:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140442250(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar3 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140442250 FUN_140442250 body=112 status=ok
// SIG undefined FUN_140442250(void)

void FUN_140442250(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe0,8);
  }
  return;
}



// FUNCTION 1404422c0 FUN_1404422c0 body=430 status=ok
// SIG undefined FUN_1404422c0(void)

void FUN_1404422c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8), lVar3 != 0)) {
    uVar8 = (ulonglong)*(int *)(lVar3 + 0x438);
    if (0 < (longlong)uVar8) {
      do {
        uVar9 = uVar8 - 1;
        lVar4 = *(longlong *)(lVar3 + 0x430);
        puVar10 = *(undefined8 **)(lVar4 + uVar9 * 0x28);
        *(undefined8 *)(lVar4 + uVar9 * 0x28) = 0;
        while (puVar10 != (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar10;
          plVar6 = (longlong *)puVar10[2];
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
          FUN_1400020a8(puVar10);
          puVar10 = puVar5;
        }
        bVar7 = 1 < (longlong)uVar8;
        uVar8 = uVar9;
      } while (bVar7);
      uVar8 = (ulonglong)*(uint *)(lVar3 + 0x438);
    }
    FUN_14044268e(*(undefined8 *)(lVar3 + 0x430),uVar8 & 0xffffffff);
    *(undefined4 *)(lVar3 + 0x438) = 0;
    if (*(int *)(lVar3 + 0x43c) != 0) {
      FUN_140442496((longlong *)(lVar3 + 0x430));
    }
  }
  FUN_14044246e(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_147a4fd72(param_1 + 0x78);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14044246e FUN_14044246e body=40 status=ok
// SIG undefined FUN_14044246e(void)

void FUN_14044246e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a4fb26(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 140442496 FUN_140442496 body=48 status=ok
// SIG undefined FUN_140442496(void)

void FUN_140442496(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1404424c6 FUN_1404424c6 body=381 status=ok
// SIG undefined FUN_1404424c6(void)

void FUN_1404424c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140442643(*(undefined8 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b8));
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FUN_1400020a8();
  }
  FUN_140442643(*(undefined8 *)(param_1 + 0x4a0),*(undefined4 *)(param_1 + 0x4a8));
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FUN_1400020a8();
  }
  FUN_140442643(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x498));
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FUN_1400020a8();
  }
  FUN_1404426db(*(undefined8 *)(param_1 + 0x440),*(undefined4 *)(param_1 + 0x448));
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  FUN_14044268e(*(undefined8 *)(param_1 + 0x430),*(undefined4 *)(param_1 + 0x438));
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x418;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x20;
  } while (lVar4 != 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000140442603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140442643 FUN_140442643 body=75 status=ok
// SIG undefined FUN_140442643(void)

void FUN_140442643(longlong param_1,int param_2)

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



// FUNCTION 14044268e FUN_14044268e body=77 status=ok
// SIG undefined FUN_14044268e(void)

void FUN_14044268e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404426db FUN_1404426db body=49 status=ok
// SIG undefined FUN_1404426db(void)

void FUN_1404426db(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14044270c FUN_14044270c body=225 status=ok
// SIG undefined FUN_14044270c(void)

void FUN_14044270c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      lVar3 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x60;
        lVar1 = lVar3 + lVar8;
        if (*(longlong *)(lVar3 + lVar8) == lVar2) {
          iVar4 = *(int *)((longlong)plVar5 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
          if (iVar4 == iVar7) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
          }
          else {
            do {
              piVar6 = (int *)(lVar3 + (longlong)iVar4 * 0x60 + 0x58);
              iVar4 = *piVar6;
            } while (iVar4 != iVar7);
          }
          *piVar6 = *(int *)(lVar1 + 0x58);
          lVar2 = *param_1;
          *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
          if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
            FUN_1400020a8();
          }
          FUN_1404427ee(lVar2 + lVar8 + 8);
          FUN_1404428a2(param_1,iVar7);
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x58);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 1404427ee FUN_1404427ee body=55 status=ok
// SIG undefined FUN_1404427ee(void)

void FUN_1404427ee(longlong *param_1)

{
  FUN_140442826(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140442826 FUN_140442826 body=123 status=ok
// SIG undefined FUN_140442826(void)

void FUN_140442826(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1404428a2 FUN_1404428a2 body=122 status=ok
// SIG undefined FUN_1404428a2(void)

void FUN_1404428a2(longlong *param_1,int param_2)

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



// FUNCTION 14044291c FUN_14044291c body=24 status=ok
// SIG undefined FUN_14044291c(void)

void FUN_14044291c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140442930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140442934 FUN_140442934 body=38 status=ok
// SIG undefined FUN_140442934(void)

undefined8 FUN_140442934(undefined8 param_1,int param_2)

{
  FUN_14044295a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14044295a FUN_14044295a body=266 status=ok
// SIG undefined FUN_14044295a(void)

void FUN_14044295a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aa6ced0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140442ac6(param_1 + 0x1d);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1408927d8(param_1 + 0xd);
  FUN_140442c80(param_1[0xb]);
  FUN_140442a64(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 140442a64 FUN_140442a64 body=42 status=ok
// SIG undefined FUN_140442a64(void)

void FUN_140442a64(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      FUN_140442a8e(*puVar1);
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140442a8e FUN_140442a8e body=56 status=ok
// SIG undefined FUN_140442a8e(void)

void FUN_140442a8e(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  FUN_140442a64(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140442ac6 FUN_140442ac6 body=55 status=ok
// SIG undefined FUN_140442ac6(void)

void FUN_140442ac6(longlong *param_1)

{
  FUN_140442afe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140442afe FUN_140442afe body=384 status=ok
// SIG undefined FUN_140442afe(void)

void FUN_140442afe(longlong *param_1,int param_2)

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
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140442c80 FUN_140442c80 body=59 status=ok
// SIG undefined FUN_140442c80(void)

void FUN_140442c80(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140442cbc FUN_140442cbc body=220 status=ok
// SIG undefined FUN_140442cbc(void)

undefined8 * FUN_140442cbc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a8a3730;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e37560;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140442d98 FUN_140442d98 body=66 status=ok
// SIG undefined FUN_140442d98(void)

void FUN_140442d98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    FUN_140442dda(lVar1 + 0x48);
    FUN_140442e10(lVar1 + 8);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 140442dda FUN_140442dda body=53 status=ok
// SIG undefined FUN_140442dda(void)

void FUN_140442dda(longlong param_1)

{
  FUN_140102ae4(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140102b0c(param_1 + 8);
  return;
}



// FUNCTION 140442e10 FUN_140442e10 body=104 status=ok
// SIG undefined FUN_140442e10(void)

void FUN_140442e10(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140102ae4(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_140102ae4(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140102b0c(param_1 + 8);
  return;
}



// FUNCTION 140442e78 FUN_140442e78 body=233 status=ok
// SIG undefined FUN_140442e78(void)

void FUN_140442e78(longlong param_1)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  LPVOID lpTlsValue;
  bool bVar6;
  
  DVar4 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar4 = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar6 = DAT_14c75ec34 != 0xffffffff;
    DVar3 = DVar4;
    if (bVar6) {
      DVar5 = DAT_14c75ec34;
      DVar3 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar3;
    UNLOCK();
    if (bVar6) {
      TlsFree(DVar4);
      DVar4 = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(DVar4);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(DVar4,lpTlsValue);
  }
  FUN_140442f61(*(undefined8 *)((longlong)lpTlsValue + 0x58),0);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 != 1) {
      return;
    }
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) {
      return;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x298) + 0x5e0);
  *piVar1 = *piVar1 + -1;
  return;
}



// FUNCTION 140442f61 FUN_140442f61 body=1850 status=ok
// SIG undefined FUN_140442f61(void)

void FUN_140442f61(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  DWORD DVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  uint *puVar11;
  LPVOID lpTlsValue;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = param_2;
  if ((param_2 != (longlong *)0x0) &&
     (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) < 0)) {
    FUN_1468874ea(param_2,0);
  }
  cVar5 = (*(code *)PTR_FUN_14c758760)();
  if (cVar5 != '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    goto LAB_140443513;
  }
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  piVar1 = (int *)(param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar13 = *piVar1;
  lVar20 = param_1;
  lVar19 = local_120;
  while ((local_120 = lVar20, iVar13 == 0 &&
         (((iVar13 = *(int *)(param_1 + 0x18), iVar13 != 0 || (*(int *)(param_1 + 4) != 0)) ||
          (lVar19 = local_120, *(int *)(param_1 + 8) != 0))))) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    local_118 = 0;
    uStack_110 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    while (iVar13 != 0) {
      FUN_1469010d4(param_1,&local_118);
      FUN_146903b77(local_118,uStack_110 & 0xffffffff);
      if (0 < (int)uStack_110) {
        lVar19 = 0;
        iVar13 = (int)uStack_110;
        do {
          lVar20 = *(longlong *)(local_118 + lVar19 * 8);
          if ((*(uint *)(lVar20 + 8) >> 10 & 1) != 0) {
            iVar13 = *(int *)(lVar20 + 0xc);
            AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
            iVar6 = iVar13 + 0xffff;
            if (-1 < iVar13) {
              iVar6 = iVar13;
            }
            if ((iVar6 >> 0x10 < DAT_14c964390) &&
               (lVar14 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar6 >> 0x10) * 0x10),
               lVar14 != 0)) {
              lVar14 = *(longlong *)(lVar14 + (longlong)(iVar13 % 0x10000) * 0x10);
            }
            else {
              lVar14 = 0;
            }
            ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
            FUN_1427ff290(lVar14 + 0x240,lVar20);
            iVar13 = (int)uStack_110;
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < iVar13);
      }
      iVar13 = *(int *)(param_1 + 0x18);
      if (iVar13 == 0) {
        DVar9 = DAT_14c75ec34;
        if (DAT_14c75ec34 == 0xffffffff) {
          DVar9 = TlsAlloc();
          DVar10 = 0xffffffff;
          LOCK();
          bVar23 = DAT_14c75ec34 != 0xffffffff;
          DVar4 = DVar9;
          if (bVar23) {
            DVar10 = DAT_14c75ec34;
            DVar4 = DAT_14c75ec34;
          }
          DAT_14c75ec34 = DVar4;
          UNLOCK();
          if (bVar23) {
            TlsFree(DVar9);
            DVar9 = DVar10;
          }
        }
        lpTlsValue = TlsGetValue(DVar9);
        if (lpTlsValue == (LPVOID)0x0) {
          lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
          FUN_141073f92(lpTlsValue);
          FUN_140fddf04(lpTlsValue);
          TlsSetValue(DVar9,lpTlsValue);
        }
        local_128 = CONCAT71(local_128._1_7_,*(undefined1 *)((longlong)lpTlsValue + 0x20));
        *(undefined1 *)((longlong)lpTlsValue + 0x20) = 1;
        lVar19 = (longlong)(int)uStack_110;
        if (0 < lVar19) {
          lVar14 = 0;
          lVar20 = 0;
          do {
            lVar19 = *(longlong *)(local_118 + lVar14 * 8);
            iVar13 = *(int *)(lVar19 + 0xc);
            AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
            iVar6 = iVar13 + 0xffff;
            if (-1 < iVar13) {
              iVar6 = iVar13;
            }
            if ((iVar6 >> 0x10 < DAT_14c964390) &&
               (lVar17 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar6 >> 0x10) * 0x10),
               lVar17 != 0)) {
              lVar17 = *(longlong *)(lVar17 + (longlong)(iVar13 % 0x10000) * 0x10);
            }
            else {
              lVar17 = 0;
            }
            ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
            if (lVar17 != lVar20 && lVar17 != 0) {
              FUN_1468b83aa(lVar17,0);
              lVar20 = lVar17;
            }
            FUN_1400337aa(lVar19);
            lVar14 = lVar14 + 1;
            lVar19 = (longlong)(int)uStack_110;
          } while (lVar14 < lVar19);
        }
        lVar20 = local_118;
        *(undefined1 *)((longlong)lpTlsValue + 0x20) = (undefined1)local_128;
        if ((int)uStack_110 != 0) {
          lVar14 = 0;
          do {
            (**(code **)(**(longlong **)(*(longlong *)(lVar20 + lVar14) + 0x10) + 0x368))();
            lVar14 = lVar14 + 8;
          } while (lVar19 * 8 != lVar14);
        }
        lVar19 = local_118;
        param_1 = local_120;
        if ((((DAT_14c75b114 == '\0') && (DAT_14c75ece4 != 0)) && (DAT_14c75ece0 != 0)) &&
           (DAT_14c9647c4 == '\0')) {
          lVar20 = (longlong)(int)uStack_110;
          if (lVar20 != 0) {
            lVar14 = 0;
            do {
              plVar3 = *(longlong **)(lVar19 + lVar14);
              cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
              if (cVar5 != '\0') {
                (**(code **)(*plVar3 + 0x30))(plVar3);
              }
              lVar14 = lVar14 + 8;
            } while (lVar20 * 8 != lVar14);
          }
        }
        bVar23 = (longlong)uStack_110 < 0;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        if (bVar23) {
          FUN_14079e7a6(&local_118,0);
        }
        iVar13 = *(int *)(param_1 + 0x18);
      }
    }
    uVar12 = FUN_1402a3fee();
    FUN_1468bcaee(uVar12);
    lVar19 = *(longlong *)(param_1 + 0x20);
    iVar13 = *(int *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if ((longlong)iVar13 != 0) {
      lVar20 = 0;
      do {
        lVar14 = *(longlong *)(lVar19 + lVar20);
        if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x328) != 0)) &&
           (*(longlong *)(lVar14 + 0xa0) != 0)) {
          FUN_1468b6d7e();
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar13 * 8 != lVar20);
    }
    if (lVar19 != 0) {
      FUN_1400020a8(lVar19);
    }
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_145a26156(&local_108);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar13 = *piVar1;
    lVar20 = local_120;
    lVar19 = local_120;
  }
  local_120 = lVar19;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar13 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar13 != 2)) {
    if (iVar13 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_140443691;
    }
  }
  else {
LAB_140443691:
    DAT_14c9642d0 = DAT_14c9642d0 + -1;
  }
  if (local_130 != (longlong *)0x0) {
    iVar13 = (int)uStack_b0 - local_84;
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar13);
    }
    if (*(int *)((longlong)local_130 + 0xc) < iVar13) {
      FUN_1468874ea(local_130);
    }
    iVar13 = local_90;
    if (local_90 == 0) {
      uVar15 = 1;
      uVar22 = 0;
      iVar16 = 0;
      iVar6 = 0;
    }
    else {
      puVar11 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar11 = local_a8;
      }
      uVar18 = *puVar11;
      if (uVar18 == 0) {
        iVar6 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar6 = local_90 + -1;
        }
        uVar22 = 0;
        uVar15 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar15 = uVar22;
        }
        iVar16 = 0;
        do {
          if (uVar15 == uVar22) goto LAB_1404434e9;
          iVar16 = iVar16 + 0x20;
          uVar18 = puVar11[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar22 = 0;
        iVar16 = 0;
      }
      uVar15 = (ulonglong)(-uVar18 & uVar18);
      uVar2 = uVar15 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar6 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (local_90 <= iVar6) {
        iVar6 = local_90;
      }
    }
    if (iVar6 != local_90) {
      iVar21 = local_90 + 0x1e;
      if (-1 < local_90 + -1) {
        iVar21 = local_90 + -1;
      }
      iVar21 = iVar21 >> 5;
      uVar18 = 0xffffffff;
      local_128 = local_b8;
      lVar19 = local_b8;
      do {
        uVar12 = *(undefined8 *)(lVar19 + (longlong)iVar6 * 0x10);
        iVar6 = (int)local_130[1];
        *(uint *)(local_130 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)local_130 + 0xc) < iVar6 + 1U) {
          FUN_146874aec(local_130,iVar6);
          lVar19 = local_128;
        }
        *(undefined8 *)(*local_130 + (longlong)iVar6 * 8) = uVar12;
        uVar18 = uVar18 & ~(uint)uVar15;
        puVar11 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar11 = local_a8;
        }
        iVar6 = (int)uVar22;
        lVar20 = (longlong)iVar6;
        uVar7 = puVar11[lVar20] & uVar18;
        if (uVar7 == 0) {
          iVar8 = iVar21;
          if (iVar21 < iVar6) {
            iVar8 = iVar6;
          }
          if (iVar21 <= iVar6) break;
          lVar14 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar7 = puVar11[lVar20 + lVar14 + 1];
            if (uVar7 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar8 - lVar20 == lVar14) goto LAB_1404434e9;
          }
          uVar22 = (ulonglong)(iVar6 + (int)lVar14 + 1);
          uVar18 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar15 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
    }
  }
LAB_1404434e9:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14090246c(&local_b8);
LAB_140443513:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14044369c FUN_14044369c body=75 status=ok
// SIG undefined FUN_14044369c(void)

int FUN_14044369c(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x3c0))();
  if (param_2 < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = (longlong)iVar2;
    iVar3 = 0;
    do {
      lVar1 = lVar4 * 8;
      lVar4 = lVar4 + -1;
      iVar3 = iVar3 + *(int *)(*(longlong *)(*(longlong *)param_1[0x1d] + -8 + lVar1) + 0x460);
    } while (iVar2 - param_2 < lVar4);
  }
  return iVar3;
}



// FUNCTION 1404436f0 FUN_1404436f0 body=28 status=ok
// SIG undefined FUN_1404436f0(void)

undefined8 FUN_1404436f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14044370c();
  return CONCAT71((int7)((ulonglong)*plVar1 >> 8),*plVar1 == *param_2);
}



// FUNCTION 14044370c FUN_14044370c body=109 status=ok
// SIG undefined FUN_14044370c(void)

undefined * FUN_14044370c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e16c) {
    FUN_144b3d300(&DAT_14c98e16c);
    if (DAT_14c98e16c == -1) {
      FUN_1446f470e(&DAT_14c98e164,L"FNavigationMetaData",1);
      _Init_thread_footer(&DAT_14c98e16c);
    }
  }
  return &DAT_14c98e164;
}



// FUNCTION 140443780 FUN_140443780 body=57 status=ok
// SIG undefined FUN_140443780(void)

void FUN_140443780(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6da68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6da68 = FUN_140002ddd(FUN_146537029,uVar1,L"GbxStaticLIDef");
  }
  return;
}



// FUNCTION 1404437ba FUN_1404437ba body=108 status=ok
// SIG undefined FUN_1404437ba(void)

undefined4 * FUN_1404437ba(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140443828();
  FUN_140443828();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca6b130,0);
  FUN_140443828();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140443828 FUN_140443828 body=289 status=ok
// SIG undefined FUN_140443828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140443828(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6b1d8) {
    FUN_144b3d300(&DAT_14ca6b1d8);
    if (DAT_14ca6b1d8 == -1) {
      FUN_14044394a();
      FUN_14571152e();
      FUN_140db5666(&DAT_14ca6b130,0,&DAT_14ca6b0c8,L"FWriteToBoundingSphereVS",
                    L"/Engine/Private/VolumetricFog.usf",L"WriteToBoundingSphereVS",0,1,
                    FUN_14733499c,FUN_14733493c,&LAB_147334938,&LAB_147334934,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca6cbe0);
      _DAT_14ca6b130 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431028c9);
      _Init_thread_footer(&DAT_14ca6b1d8);
    }
  }
  return &DAT_14ca6b130;
}



// FUNCTION 14044394a FUN_14044394a body=258 status=ok
// SIG undefined FUN_14044394a(void)

void FUN_14044394a(void)

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
              0x110) < DAT_14ca6cc60) {
    FUN_144b3d300(&DAT_14ca6cc60);
    if (DAT_14ca6cc60 == -1) {
      FUN_145711678(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x210;
      local_58 = 0x121;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6cbe0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e743);
      _Init_thread_footer(&DAT_14ca6cc60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140443a4e FUN_140443a4e body=643 status=ok
// SIG undefined FUN_140443a4e(void)

void FUN_140443a4e(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  uVar1 = FUN_14479fe53(*(undefined2 *)(param_1 + 0x8a8),1,1);
  *(undefined1 *)(param_1 + 0xe68) = uVar1;
  *(undefined8 *)(param_1 + 0xe70) = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c2ed8) && (FUN_144b3d300(&DAT_14c9c2ed8), DAT_14c9c2ed8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c9c2ed0 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HZBOcclusion",1);
    _Init_thread_footer(&DAT_14c9c2ed8);
  }
  iVar2 = (**(code **)(*DAT_14c9c2ed0 + 0xb0))();
  *(bool *)(param_1 + 0xe69) = iVar2 != 0;
  *(undefined8 *)(param_1 + 0xe70) = 2;
  FUN_140443cd2(param_1);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x410);
  if (0 < (int)*(uint *)(param_1 + 0x410)) {
    lVar9 = 0;
    do {
      uVar3 = 0xffffffffffffffff;
      if (0 < (int)uVar4) {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          if (*(longlong *)(*(longlong *)(param_1 + 0x408) + uVar3 * 8) ==
              *(longlong *)(*(longlong *)(param_1 + 0x408) + lVar9 * 8)) break;
          uVar7 = uVar3 + 1;
          uVar3 = 0xffffffffffffffff;
        } while ((uVar4 & 0xffffffff) != uVar7);
      }
      lVar5 = *(longlong *)(param_1 + 0xe58);
      if (*(longlong *)(param_1 + 0xe58) == 0) {
        lVar5 = param_1 + 0xe38;
      }
      lVar8 = (longlong)(int)uVar3 * 0x20;
      iVar2 = *(int *)(lVar5 + lVar8);
      bVar6 = 1;
      bVar10 = true;
      if (iVar2 != 2) {
        bVar10 = *(int *)(lVar5 + 0xc + lVar8) == 2;
      }
      if (((*(char *)(param_1 + 0xe69) == '\0') && (*(char *)(param_1 + 0xe68) == '\0')) &&
         (*(int *)(lVar5 + 8 + lVar8) != 1)) {
        bVar6 = (*(int *)(lVar5 + 0xc + lVar8) == 1 || iVar2 == 1) | bVar10;
      }
      *(byte *)(lVar5 + 0x15 + lVar8) = bVar6;
      *(undefined8 *)(lVar5 + 0x18 + lVar8) = 0x16;
      uVar1 = 1;
      if (iVar2 != 1 && bVar10 == false) {
        uVar1 = FUN_140444a77(param_1 + 0x98);
      }
      *(undefined1 *)(lVar5 + 0x16 + lVar8) = uVar1;
      *(undefined8 *)(lVar5 + 0x18 + lVar8) = 0x17;
      lVar9 = lVar9 + 1;
      uVar4 = (ulonglong)*(int *)(param_1 + 0x410);
    } while (lVar9 < (longlong)uVar4);
    if (0 < *(int *)(param_1 + 0x410)) {
      lVar9 = 0;
      do {
        uVar3 = 0xffffffffffffffff;
        if (0 < (int)uVar4) {
          uVar7 = 0;
          do {
            uVar3 = uVar7;
            if (*(longlong *)(*(longlong *)(param_1 + 0x408) + uVar7 * 8) ==
                *(longlong *)(*(longlong *)(param_1 + 0x408) + lVar9 * 8)) break;
            uVar7 = uVar7 + 1;
            uVar3 = 0xffffffffffffffff;
          } while ((uVar4 & 0xffffffff) != uVar7);
        }
        lVar5 = *(longlong *)(param_1 + 0xe58);
        if (*(longlong *)(param_1 + 0xe58) == 0) {
          lVar5 = param_1 + 0xe38;
        }
        *(undefined8 *)(lVar5 + 0x18 + (longlong)(int)uVar3 * 0x20) = 0xffffffffffffffff;
        lVar9 = lVar9 + 1;
        uVar4 = (ulonglong)*(int *)(param_1 + 0x410);
      } while (lVar9 < (longlong)uVar4);
    }
  }
  *(undefined8 *)(param_1 + 0xe70) = 0xffffffffffffffff;
  return;
}



// FUNCTION 140443cd2 FUN_140443cd2 body=691 status=ok
// SIG undefined FUN_140443cd2(void)

void FUN_140443cd2(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 local_6c;
  ulonglong local_68;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x410);
  if (0 < (int)*(uint *)(param_1 + 0x410)) {
    lVar13 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x408) + lVar13 * 8);
      if (0 < (int)uVar7) {
        local_68 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x408) + local_68 * 8) == lVar8)
          goto LAB_140443d30;
          local_68 = local_68 + 1;
        } while ((uVar7 & 0xffffffff) != local_68);
      }
      local_68 = 0xffffffffffffffff;
LAB_140443d30:
      lVar11 = *(longlong *)(param_1 + 0xe58);
      if (*(longlong *)(param_1 + 0xe58) == 0) {
        lVar11 = param_1 + 0xe38;
      }
      if ((*(byte *)(param_1 + 0xed) & 0x80) == 0) {
        local_6c = 0;
        uVar12 = 0;
        uVar9 = 0;
        uVar10 = 0;
        uVar5 = 0;
        uVar1 = 0;
      }
      else {
        uVar4 = FUN_1449a7bda(*(undefined8 *)(param_1 + 8),lVar8,0,0);
        if ((byte)uVar4 == 0) {
          cVar2 = FUN_140444b1a(lVar8);
          if (cVar2 == '\0') {
            local_6c = 0;
            uVar6 = 0;
            if (*(char *)(lVar8 + 0x28e4) == '\x03') {
              uVar6 = FUN_1472e3c50(&DAT_14c9e4560);
              local_6c = 3;
            }
LAB_140443e86:
            uVar5 = uVar6;
            uVar9 = *(uint *)(lVar8 + 0x2b28) & 1;
            if (-1 < (int)DAT_14c760908) {
              uVar9 = DAT_14c760908;
            }
            cVar2 = FUN_14090c054(0.0 < *(float *)(lVar8 + 0x2b30) && uVar9 != 0,1);
            if ((cVar2 == '\0') ||
               (uVar12 = 3, (~(byte)uVar4 & *(int *)(param_1 + 0x3f0) == 1) == 0)) {
              bVar3 = FUN_140444b9a(lVar8,uVar4);
              uVar12 = (uint)bVar3;
            }
          }
          else {
            FUN_1472e3c50(&DAT_14c9e4560);
            uVar5 = FUN_1472e3c50(&DAT_14c9e4560);
            uVar12 = 2;
            local_6c = 1;
          }
        }
        else {
          uVar5 = 0;
          local_6c = 2;
          if (DAT_14c9ece28 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            uVar6 = 0;
            if (DAT_14c760758 == 0) goto LAB_140443e86;
          }
        }
        cVar2 = FUN_140444219(lVar8,0,0,1,0);
        uVar10 = 2;
        uVar9 = 2;
        if (cVar2 == '\0') {
          bVar3 = FUN_14044417b(lVar8);
          uVar9 = (uint)bVar3;
        }
        cVar2 = FUN_140443f85(lVar8,0);
        if (cVar2 == '\0') {
          bVar3 = FUN_1404448f8(lVar8);
          uVar10 = (uint)bVar3;
        }
        uVar1 = FUN_140443fc4(param_1,lVar8);
      }
      if (*(char *)(lVar8 + 0x30c8) == '\x01') {
        local_6c = 0;
        uVar12 = 0;
        uVar9 = 0;
        uVar10 = 0;
        uVar5 = 0;
      }
      lVar8 = (longlong)(int)local_68 * 0x20;
      *(undefined4 *)(lVar11 + lVar8) = local_6c;
      *(undefined4 *)(lVar11 + 4 + lVar8) = uVar5;
      *(uint *)(lVar11 + 8 + lVar8) = uVar12;
      *(uint *)(lVar11 + 0xc + lVar8) = uVar9;
      *(uint *)(lVar11 + 0x10 + lVar8) = uVar10;
      *(undefined1 *)(lVar11 + 0x14 + lVar8) = uVar1;
      *(undefined8 *)(lVar11 + 0x18 + lVar8) = 0x15;
      lVar13 = lVar13 + 1;
      uVar7 = (ulonglong)*(int *)(param_1 + 0x410);
    } while (lVar13 < (longlong)uVar7);
  }
  return;
}



// FUNCTION 140443f85 FUN_140443f85 body=62 status=ok
// SIG undefined FUN_140443f85(void)

undefined8 FUN_140443f85(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x23eb) == '\0') &&
      ((*(byte *)(*(longlong *)(param_1 + 8) + 0x55) & 0x80) != 0)) &&
     (*(int *)(DAT_14ca5be88 + 4) == 1)) {
    uVar1 = FUN_140444219();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 140443fc4 FUN_140443fc4 body=438 status=ok
// SIG undefined FUN_140443fc4(void)

undefined8 FUN_140443fc4(longlong param_1,longlong param_2)

{
  double *pdVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_2 + 0x23ec) == '\0') && (*(char *)(param_2 + 0x23eb) == '\0')) {
    if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
      lVar2 = (longlong)*(int *)(param_1 + 0xa8) << 3;
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar4 * 8) == param_2) {
          if (1 < (int)lVar4) goto LAB_14044404e;
          break;
        }
        lVar4 = lVar4 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    uVar6 = (ulonglong)*(int *)(*(longlong *)(param_1 + 8) + 0x3720);
    if (0 < (longlong)uVar6) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3718);
      uVar5 = 1;
      do {
        pdVar1 = *(double **)(lVar2 + -8 + uVar5 * 8);
        local_88 = (pdVar1[5] - pdVar1[2]) * 0.5;
        local_90 = (pdVar1[4] - pdVar1[1]) * 0.5;
        local_98 = (pdVar1[3] - *pdVar1) * 0.5;
        local_a0 = (pdVar1[5] + pdVar1[2]) * 0.5;
        local_a8 = (pdVar1[4] + pdVar1[1]) * 0.5;
        local_b0 = (pdVar1[3] + *pdVar1) * 0.5;
        uVar3 = FUN_144b22be2(param_2 + 8000,&local_b0,&local_98);
        if ((char)uVar3 != '\0') break;
        bVar7 = uVar5 < uVar6;
        uVar5 = uVar5 + 1;
      } while (bVar7);
      goto LAB_140444050;
    }
  }
LAB_14044404e:
  uVar3 = 0;
LAB_140444050:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14044417b FUN_14044417b body=158 status=ok
// SIG undefined FUN_14044417b(void)

undefined8 FUN_14044417b(longlong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x50) & 0x20) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2930) == '\0') {
    return 0;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x60) & 2) == 0) {
    if (*(char *)(param_1 + 0x23eb) != '\0') {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    if (*(int *)(DAT_14ca4cb38 + 4) < 1) {
      return 0;
    }
    if (*(float *)(param_1 + 0x2948) <= 1.0 && *(float *)(param_1 + 0x2948) != 1.0) {
      return 0;
    }
    uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
    uVar2 = (ulonglong)uVar1;
    puVar4 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar4 = DAT_14ca96af8;
    }
    uVar3 = uVar2;
    if ((((uint)puVar4[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) ||
       (uVar3 = uVar2 * 0x3c, (int)(&DAT_14ca814b8)[uVar2 * 0xf] < 3)) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 140444219 FUN_140444219 body=1759 status=ok
// SIG undefined FUN_140444219(void)

char FUN_140444219(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  
  lVar4 = DAT_14c9f3d10;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (iVar2 == 0x40000002) {
    uVar11 = 0;
  }
  else {
    bVar12 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar12 = DVar7 == DVar8;
      }
      else {
        bVar12 = false;
      }
    }
    uVar11 = (ulonglong)(bVar12 ^ 1);
  }
  if (((param_5 == 1) || (*(char *)(lVar4 + uVar11) == '\0')) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40), lVar4 != 0)) {
    cVar6 = FUN_144aaf6f2(lVar4,param_1,param_2,param_3);
    lVar5 = DAT_14c9f3a10;
    if (cVar6 == '\0') {
      return '\0';
    }
    if (*(char *)(param_1 + 0x2930) != '\x01') {
      return '\0';
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x50) & 0x40) != 0) {
      piVar1 = (int *)(lVar3 + 0xc60);
      iVar2 = *piVar1;
      if (iVar2 == 0x40000002) {
        uVar11 = 0;
      }
      else {
        bVar12 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar12 = DVar7 == DVar8;
          }
          else {
            bVar12 = false;
          }
        }
        uVar11 = (ulonglong)(bVar12 ^ 1);
      }
      if (*(int *)(lVar5 + uVar11 * 4) != 0) {
        cVar6 = FUN_1449a7bda(lVar4,param_1,param_2,param_3);
        if (cVar6 != '\0') {
          if ((char)param_2 != '\0') {
            return '\x01';
          }
LAB_14044434c:
          lVar3 = *(longlong *)(param_1 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            plVar10 = (longlong *)
                      (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
            if (plVar10 == (longlong *)0x0) {
              DAT_14ca97068 = 0;
            }
            else {
              DAT_14ca97068 = (**(code **)(*plVar10 + 0x68))(plVar10);
            }
            _Init_thread_footer(&DAT_14ca97070);
          }
          lVar4 = DAT_14ca97068;
          bVar12 = true;
          cVar6 = DAT_14ca96da8;
          if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
            iVar2 = *piVar1;
            cVar6 = '\x02';
            if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
              uVar11 = 0;
            }
            else if (iVar2 == 1) {
              DVar7 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              uVar11 = (ulonglong)(DVar7 != DVar8);
              cVar6 = DAT_14ca96da8;
            }
            else {
              uVar11 = 1;
            }
            bVar12 = *(int *)(lVar4 + uVar11 * 4) != 0;
          }
          if ((((bVar12) && (cVar6 != '\0')) &&
              (cVar6 = FUN_144785782(), lVar4 = DAT_14c9ed2f0, cVar6 != '\0')) &&
             ((DAT_14ca84efa != '\0' || ((DAT_14ca84ef5 == '\x01' && ((DAT_14ca84ef7 & 1) != 0))))))
          {
            iVar2 = *piVar1;
            if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
              uVar11 = 0;
            }
            else if (iVar2 == 1) {
              DVar7 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              uVar11 = (ulonglong)(DVar7 != DVar8);
            }
            else {
              uVar11 = 1;
            }
            if (((*(int *)(lVar4 + uVar11 * 4) != 0) &&
                ((iVar2 = *(int *)(lVar3 + 0x10), iVar2 == 1 ||
                 ((iVar2 == 2 && (cVar6 = FUN_144b2acae(), cVar6 != '\0')))))) &&
               ((lVar4 = DAT_14c9f3638, lVar3 = **(longlong **)(lVar3 + 8),
                *(char *)(lVar3 + 0x3098) == '\x01' &&
                ((*(char *)(lVar3 + 0x23e8) != '\x01' || (*(char *)(lVar3 + 0x23ea) == '\x01'))))))
            {
              iVar2 = *piVar1;
              if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
                uVar11 = 0;
              }
              else if (iVar2 == 1) {
                DVar7 = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                uVar11 = (ulonglong)(DVar7 != DVar8);
              }
              else {
                uVar11 = 1;
              }
              if (*(int *)(lVar4 + uVar11 * 4) != 0) {
                return '\x01';
              }
            }
          }
          cVar6 = FUN_144aaf4ae();
          return cVar6;
        }
        if (param_4 != '\0') {
          lVar3 = *(longlong *)(param_1 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            plVar10 = (longlong *)
                      (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
            if (plVar10 == (longlong *)0x0) {
              DAT_14ca97068 = 0;
            }
            else {
              DAT_14ca97068 = (**(code **)(*plVar10 + 0x68))(plVar10);
            }
            _Init_thread_footer(&DAT_14ca97070);
          }
          lVar4 = DAT_14ca97068;
          bVar12 = true;
          cVar6 = DAT_14ca96da8;
          if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
            iVar2 = *piVar1;
            if (iVar2 == 0x40000002) {
              cVar6 = '\x02';
              uVar11 = 0;
            }
            else {
              bVar12 = true;
              cVar6 = '\x02';
              if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
                if (iVar2 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar8 = GetCurrentThreadId();
                  bVar12 = DVar7 == DVar8;
                  cVar6 = DAT_14ca96da8;
                }
                else {
                  bVar12 = false;
                }
              }
              uVar11 = (ulonglong)(bVar12 ^ 1);
            }
            bVar12 = *(int *)(lVar4 + uVar11 * 4) != 0;
          }
          if (!bVar12) {
            return '\0';
          }
          if (cVar6 == '\0') {
            return '\0';
          }
          piVar9 = &DAT_14c760db4;
          if (*(longlong *)(lVar3 + 0x40) != 0) {
            piVar9 = (int *)(*(longlong *)(lVar3 + 0x40) + 8);
          }
          cVar6 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar9 * 2));
          lVar4 = DAT_14c9ed2f0;
          if (cVar6 != '\0') {
            if (DAT_14ca84efa == '\0') {
              if (DAT_14ca84ef5 != '\x01') {
                return '\0';
              }
              if ((DAT_14ca84ef7 & 1) == 0) {
                return '\0';
              }
            }
            iVar2 = *piVar1;
            if (iVar2 == 0x40000002) {
              uVar11 = 0;
            }
            else {
              bVar12 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
                if (iVar2 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar8 = GetCurrentThreadId();
                  bVar12 = DVar7 == DVar8;
                }
                else {
                  bVar12 = false;
                }
              }
              uVar11 = (ulonglong)(bVar12 ^ 1);
            }
            if (((*(int *)(lVar4 + uVar11 * 4) != 0) &&
                (((*(int *)(lVar3 + 0x10) == 1 ||
                  ((*(int *)(lVar3 + 0x10) == 2 &&
                   (cVar6 = FUN_144b2acae(**(undefined8 **)(lVar3 + 8)), cVar6 != '\0')))) &&
                 (lVar4 = DAT_14c9f3638, lVar3 = **(longlong **)(lVar3 + 8),
                 *(char *)(lVar3 + 0x3098) == '\x01')))) &&
               ((*(char *)(lVar3 + 0x23e8) != '\x01' || (*(char *)(lVar3 + 0x23ea) == '\x01')))) {
              iVar2 = *piVar1;
              if (iVar2 == 0x40000002) {
                uVar11 = 0;
              }
              else {
                bVar12 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
                  if (iVar2 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    bVar12 = DVar7 == DVar8;
                  }
                  else {
                    bVar12 = false;
                  }
                }
                uVar11 = (ulonglong)(bVar12 ^ 1);
              }
              if (*(int *)(lVar4 + uVar11 * 4) != 0) {
                if (DAT_14ca84ef5 != '\x01' || (char)param_2 != '\0') {
                  return DAT_14ca84ef5;
                }
                goto LAB_14044434c;
              }
            }
          }
        }
      }
    }
  }
  return '\0';
}



// FUNCTION 1404448f8 FUN_1404448f8 body=383 status=ok
// SIG undefined FUN_1404448f8(void)

bool FUN_1404448f8(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((*(byte *)(lVar2 + 0x50) & 0x20) != 0) {
    if ((*(byte *)(lVar2 + 0x55) & 0x80) == 0) {
      return false;
    }
    if (*(int *)(DAT_14ca5be88 + 4) < 3 &&
        (*(int *)(DAT_14ca5be88 + 4) != 1 || *(char *)(param_1 + 0x2930) == '\0')) {
      return false;
    }
    if ((*(byte *)(lVar2 + 0x60) & 2) != 0) {
      return false;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return false;
    }
    if (*(char *)(param_1 + 0x23eb) == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5bfd8) && (FUN_144b3d300(&DAT_14ca5bfd8), DAT_14ca5bfd8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar4 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SSR.Quality",1);
        if (plVar4 == (longlong *)0x0) {
          DAT_14ca5bfd0 = 0;
        }
        else {
          DAT_14ca5bfd0 = (**(code **)(*plVar4 + 0x68))(plVar4);
        }
        _Init_thread_footer(&DAT_14ca5bfd8);
      }
      if (DAT_14ca5bfd0 != 0) {
        if (*(int *)(DAT_14ca5bfd0 + 4) < 1) {
          return false;
        }
        if (*(float *)(param_1 + 0x2948) <= 1.0 && *(float *)(param_1 + 0x2948) != 1.0) {
          return false;
        }
        uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
        puVar3 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar3 = DAT_14ca96af8;
        }
        if (((uint)puVar3[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
          return true;
        }
        return (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3;
      }
    }
  }
  return false;
}



// FUNCTION 140444a77 FUN_140444a77 body=163 status=ok
// SIG undefined FUN_140444a77(void)

bool FUN_140444a77(longlong param_1)

{
  char cVar1;
  int *piVar2;
  
  if ((*(byte *)(**(longlong **)(param_1 + 8) + 0x2954) & 1) != 0) {
    if (*(int *)(DAT_14ca046e8 + 4) == 0) {
      return false;
    }
    if (-1 < *(int *)(param_1 + 0x4c)) {
      return false;
    }
    piVar2 = &DAT_14c760db4;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    }
    if (((3 < (int)(&DAT_14ca814b8)
                   [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar2 * 2) * 0xf]) &&
        (((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar2 * 2) * 0x3c] &
         3) != 0)) &&
       ((cVar1 = FUN_1472390ef(), cVar1 != '\0' ||
        ((cVar1 = FUN_14498f84a(), cVar1 != '\0' && (*(int *)(DAT_14ca08660 + 4) != 0)))))) {
      return *(int *)(DAT_14ca085d0 + 4) != 0;
    }
  }
  return false;
}



// FUNCTION 140444b1a FUN_140444b1a body=128 status=ok
// SIG undefined FUN_140444b1a(void)

bool FUN_140444b1a(longlong param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  
  if ((*(char *)(param_1 + 0x28e4) == '\x02') && (0 < *(int *)(DAT_14ca4cbc8 + 4))) {
    uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
    puVar2 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar2 = DAT_14ca96af8;
    }
    if (((uint)puVar2[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
      if ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) {
        return false;
      }
      if (*(longlong *)(param_1 + 0x3108) == 0) {
        return false;
      }
      return *(longlong *)(param_1 + 0x131d8) != 0;
    }
  }
  return false;
}



// FUNCTION 140444b9a FUN_140444b9a body=683 status=ok
// SIG undefined FUN_140444b9a(void)

byte FUN_140444b9a(longlong param_1,byte param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  undefined4 *puVar6;
  bool bVar7;
  byte bVar8;
  
  if (*(float *)(param_1 + 0x2af0) <= 0.0) {
    bVar8 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    bVar8 = 0;
    if (((*(byte *)(lVar2 + 0x55) & 0x80) != 0) && (bVar8 = 0, 0.1 <= *(float *)(param_1 + 11000)))
    {
      if (0.01 <= *(float *)(param_1 + 0x2af4)) {
        uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
        if ((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) {
          if ((DAT_14ca964f0 == '\x01') && (bVar8 = 1, (DAT_14c760e14 & 1) != 0))
          goto LAB_140444db0;
        }
        else {
          puVar6 = &DAT_14ca96aa8;
          if (DAT_14ca96af8 != (undefined4 *)0x0) {
            puVar6 = DAT_14ca96af8;
          }
          bVar8 = 1;
          if (((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) ||
             ((1 << ((byte)uVar1 & 0x1f) & puVar6[uVar1 >> 5]) == 0)) goto LAB_140444db0;
        }
      }
      if (*(int *)(param_1 + 0x2e98) != 0) {
        uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
        if ((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) {
          if ((DAT_14ca964f0 == '\x01') && (bVar8 = 1, (DAT_14c760e14 & 1) != 0))
          goto LAB_140444db0;
        }
        else {
          puVar6 = &DAT_14ca96aa8;
          if (DAT_14ca96af8 != (undefined4 *)0x0) {
            puVar6 = DAT_14ca96af8;
          }
          bVar8 = 1;
          if (((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3) ||
             ((1 << ((byte)uVar1 & 0x1f) & puVar6[uVar1 >> 5]) == 0)) goto LAB_140444db0;
        }
      }
      lVar3 = *(longlong *)(lVar2 + 0x40);
      if ((2 < *(int *)(lVar3 + 8)) &&
         (((*(uint *)(lVar2 + 0x50) & 1) != 0 &&
          (0 < *(int *)(lVar3 + 0x3748) || (char)((*(uint *)(lVar2 + 0x50) & 0x20) >> 5) != '\0'))))
      {
        uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
        puVar6 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar6 = DAT_14ca96af8;
        }
        bVar8 = 1;
        if ((((uint)puVar6[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) ||
           ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3)) goto LAB_140444db0;
      }
      if ((*(longlong *)(lVar3 + 0x3608) == 0) ||
         ((*(longlong *)(*(longlong *)(lVar3 + 0x3608) + 8) == 0 ||
          (bVar8 = 1, (*(byte *)(lVar2 + 0x5b) & 0x20) == 0)))) {
        uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
        puVar6 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar6 = DAT_14ca96af8;
        }
        if (((uint)puVar6[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
          bVar7 = false;
        }
        else {
          bVar7 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf];
        }
        bVar8 = bVar7 | param_2;
      }
    }
  }
LAB_140444db0:
  uVar4 = *(uint *)(param_1 + 0x2b28) & 1;
  if (-1 < (int)DAT_14c760908) {
    uVar4 = DAT_14c760908;
  }
  bVar5 = FUN_14090c054(CONCAT31((int3)(uVar4 >> 8),0.0 < *(float *)(param_1 + 0x2b30) && uVar4 != 0
                                ),1);
  return (bVar5 ^ 1) & bVar8;
}



// FUNCTION 140444e46 FUN_140444e46 body=269 status=ok
// SIG undefined FUN_140444e46(void)

void FUN_140444e46(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  local_18 = param_3;
  if (param_2 < param_3) {
    local_10 = param_3;
    local_18 = param_2;
  }
  uVar1 = ((uint)(local_18 >> 0x14) & 0xffff ^ (uint)(local_18 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar3 = ((uint)(local_10 >> 0x14) & 0xffff ^ (uint)(local_10 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  lVar2 = FUN_1449a971c(param_1 + 0x208,
                        uVar1 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1);
  if ((*(longlong *)(lVar2 + 0x508) == 0) && (*(longlong *)(lVar2 + 0x518) == 0)) {
    *(undefined4 *)(lVar2 + 0x500) = 5;
    *(ulonglong *)(lVar2 + 0x508) = local_18;
    *(undefined4 *)(lVar2 + 0x510) = 5;
    *(ulonglong *)(lVar2 + 0x518) = local_10;
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140444f54 FUN_140444f54 body=361 status=ok
// SIG undefined FUN_140444f54(void)

void FUN_140444f54(longlong param_1,int *param_2)

{
  longlong lVar1;
  double dVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar3 = *(double **)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(lVar4 + 0x28);
  lVar7 = (longlong)*param_2 * 0x50;
  dVar2 = *(double *)(lVar5 + 0x18 + lVar7);
  if (dVar2 < pdVar3[3] || dVar2 == pdVar3[3]) {
    lVar1 = lVar5 + lVar7;
    if ((((*pdVar3 < *(double *)(lVar1 + 0x30) || *pdVar3 == *(double *)(lVar1 + 0x30)) &&
         (*(double *)(lVar1 + 0x20) < pdVar3[4] || *(double *)(lVar1 + 0x20) == pdVar3[4])) &&
        (pdVar3[1] < *(double *)(lVar1 + 0x38) || pdVar3[1] == *(double *)(lVar1 + 0x38))) &&
       ((*(double *)(lVar1 + 0x28) < pdVar3[5] || *(double *)(lVar1 + 0x28) == pdVar3[5] &&
        (pdVar3[2] < *(double *)(lVar1 + 0x40) || pdVar3[2] == *(double *)(lVar1 + 0x40))))) {
      if (*(int *)(lVar5 + 0xc + lVar7) != -1) {
        local_34 = *(undefined4 *)(lVar5 + 8 + lVar7);
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,&local_34);
          local_34 = *(undefined4 *)(*(longlong *)(lVar4 + 0x28) + 0xc + lVar7);
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,&local_34);
            goto LAB_140445060;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      plVar6 = (longlong *)**(longlong **)(param_1 + 0x18);
      lVar4 = *plVar6;
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + lVar7);
      if (*(char *)(lVar5 + 0x270) == '\0') {
        FUN_140444e46(lVar4,lVar5,
                      *(undefined8 *)
                       (plVar6[1] + (longlong)*(int *)(*(longlong **)(param_1 + 0x18))[1] * 8));
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_140445060:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404450d8 FUN_1404450d8 body=788 status=ok
// SIG undefined FUN_1404450d8(void)

void FUN_1404450d8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined1 auStack_1a8 [36];
  int local_184;
  longlong local_180;
  code **local_178;
  longlong *local_170;
  double **local_168;
  double *local_160;
  longlong local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_120;
  longlong local_118;
  uint local_10c;
  code *local_108 [2];
  undefined ***local_f8;
  undefined **local_e8;
  longlong local_e0;
  int *local_d8;
  undefined **local_c0;
  double *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined ***local_a0;
  undefined ***local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = *param_1;
  local_184 = 0;
  iVar3 = *(int *)(lVar1 + 0x10);
  if (0 < iVar3) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)local_184 * 8);
      if ((((*(byte *)(lVar2 + 0x20) & 1) == 0) &&
          ((((9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x60)) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x68)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x70)))) ||
           (((9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x48)) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x50)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar2 + 0x58)))))))) &&
         (*(char *)(lVar2 + 0x270) == '\0')) {
        local_f8 = (undefined ***)0x0;
        local_e8 = &PTR_LAB_14a1e1670;
        local_d8 = &local_184;
        local_108[0] = FUN_142b5e9da;
        local_158 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)local_184 * 8);
        local_120 = 0;
        local_138 = *(double *)(local_158 + 600);
        local_140 = *(double *)(local_158 + 0x160) - local_138;
        local_148 = *(double *)(local_158 + 0x158) - local_138;
        local_150 = *(double *)(local_158 + 0x150) - local_138;
        local_128 = *(double *)(local_158 + 0x160) + local_138;
        local_130 = *(double *)(local_158 + 0x158) + local_138;
        local_138 = *(double *)(local_158 + 0x150) + local_138;
        local_178 = local_108;
        local_c0 = &PTR_LAB_14a1e38e0;
        ppuVar4 = &PTR_LAB_14a1e38e0;
        local_180 = param_2;
        local_170 = &local_118;
        local_168 = &local_160;
        local_160 = &local_150;
        local_118 = local_158;
        local_e0 = lVar1;
        local_b8 = &local_150;
        local_b0 = param_2;
        local_a8 = &local_180;
        local_a0 = &local_c0;
        local_88 = &local_c0;
        if (*(uint *)(param_2 + 0x10) == 0xffffffff) {
LAB_1404452c8:
          (*(code *)ppuVar4[4])(local_88,local_88 != &local_c0);
        }
        else {
          local_10c = *(uint *)(param_2 + 0x10);
          FUN_1406024d4(&local_c0,&local_10c);
          if (local_88 != (undefined ***)0x0) {
            ppuVar4 = *local_88;
            goto LAB_1404452c8;
          }
        }
        if (local_108[0] != (code *)0x0) {
          pppuVar5 = local_f8;
          if (local_f8 == (undefined ***)0x0) {
            pppuVar5 = &local_e8;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      local_184 = local_184 + 1;
    } while (local_184 < iVar3);
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404453ed FUN_1404453ed body=3275 status=ok
// SIG undefined FUN_1404453ed(void)

void FUN_1404453ed(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = param_2 + 0x130;
  lVar9 = param_1 + 0x130;
  uVar2 = *(uint *)(param_1 + 0x208);
  uVar5 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x208);
    if ((*(uint *)(param_2 + 0x208) != 0) && (0 < (int)uVar2)) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar4) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_147105f1b(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x200) + lVar6 * 0x30,lVar1,
                          *(longlong *)(param_2 + 0x200) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar4 = (ulonglong)*(int *)(param_2 + 0x208);
            lVar7 = lVar7 + 0x30;
          } while (lVar10 < (longlong)uVar4);
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x208);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uVar5);
      if ((int)uVar5 == 0) goto LAB_14044543b;
    }
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x218);
    if (0 < (int)uVar5 && *(uint *)(param_2 + 0x218) != 0) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar4) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_14044f75a(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x200) + lVar6 * 0x30,lVar1,
                          *(longlong *)(param_2 + 0x210) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar4 = (ulonglong)*(int *)(param_2 + 0x218);
            lVar7 = lVar7 + 0x58;
          } while (lVar10 < (longlong)uVar4);
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x208);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uVar5);
      if ((int)uVar5 == 0) goto LAB_14044543b;
    }
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x228);
    if (0 < (int)uVar5 && *(uint *)(param_2 + 0x228) != 0) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar4) {
          lVar10 = 0;
          lVar7 = 0;
          do {
            FUN_14044c9ac(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x200) + lVar6 * 0x30,lVar1,
                          *(longlong *)(param_2 + 0x220) + lVar10,param_3);
            lVar7 = lVar7 + 1;
            uVar4 = (ulonglong)*(int *)(param_2 + 0x228);
            lVar10 = lVar10 + 0x50;
          } while (lVar7 < (longlong)uVar4);
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x208);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uVar5);
    }
    iVar3 = *(int *)(param_2 + 0x238);
    if (0 < iVar3 && (int)uVar5 != 0) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar10 = 0;
          lVar7 = 0;
          do {
            FUN_14044b170(param_2,param_1,lVar1,*(longlong *)(param_2 + 0x230) + lVar6 * 0x60,lVar9,
                          *(longlong *)(param_1 + 0x200) + lVar10,param_3);
            lVar7 = lVar7 + 1;
            uVar5 = (ulonglong)*(int *)(param_1 + 0x208);
            lVar10 = lVar10 + 0x30;
          } while (lVar7 < (longlong)uVar5);
          iVar3 = *(int *)(param_2 + 0x238);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
LAB_14044543b:
  piVar8 = (int *)(param_2 + 0x238);
  iVar3 = *(int *)(param_2 + 0x208);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x218);
  if ((iVar3 != 0) && (0 < iVar3 && *(uint *)(param_1 + 0x218) != 0)) {
    lVar6 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar10 = 0;
        lVar7 = 0;
        do {
          FUN_14044f75a(param_2,param_1,lVar1,*(longlong *)(param_2 + 0x200) + lVar6 * 0x30,lVar9,
                        *(longlong *)(param_1 + 0x210) + lVar10,param_3);
          lVar7 = lVar7 + 1;
          uVar5 = (ulonglong)*(int *)(param_1 + 0x218);
          lVar10 = lVar10 + 0x58;
        } while (lVar7 < (longlong)uVar5);
        iVar3 = *(int *)(param_2 + 0x208);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  if ((int)uVar5 != 0) {
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x218);
    if (*(uint *)(param_2 + 0x218) == 0) {
LAB_140445555:
      if ((0 < (int)uVar5) &&
         (uVar4 = (ulonglong)*(uint *)(param_2 + 0x228), *(uint *)(param_2 + 0x228) != 0)) {
        lVar6 = 0;
        do {
          if (0 < (int)uVar4) {
            lVar7 = 0;
            lVar10 = 0;
            do {
              FUN_1449ab00f(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x210) + lVar6 * 0x58,
                            lVar1,*(longlong *)(param_2 + 0x220) + lVar7,param_3);
              lVar10 = lVar10 + 1;
              uVar4 = (ulonglong)*(int *)(param_2 + 0x228);
              lVar7 = lVar7 + 0x50;
            } while (lVar10 < (longlong)uVar4);
            uVar5 = (ulonglong)*(uint *)(param_1 + 0x218);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)uVar5);
      }
    }
    else if (0 < (int)uVar5) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar4) {
          lVar10 = 0;
          lVar7 = 0;
          do {
            FUN_14044e2b0(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x210) + lVar6 * 0x58,lVar1,
                          *(longlong *)(param_2 + 0x210) + lVar10,param_3);
            lVar7 = lVar7 + 1;
            uVar4 = (ulonglong)*(int *)(param_2 + 0x218);
            lVar10 = lVar10 + 0x58;
          } while (lVar7 < (longlong)uVar4);
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x218);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)uVar5);
      if ((int)uVar5 == 0) goto LAB_140445457;
      goto LAB_140445555;
    }
    iVar3 = *piVar8;
    if (((int)uVar5 != 0 && iVar3 != 0) && (0 < iVar3)) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_1404507a5(param_2,param_1,lVar1,*(longlong *)(param_2 + 0x230) + lVar6 * 0x60,lVar9,
                          *(longlong *)(param_1 + 0x210) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar5 = (ulonglong)*(int *)(param_1 + 0x218);
            lVar7 = lVar7 + 0x58;
          } while (lVar10 < (longlong)uVar5);
          iVar3 = *piVar8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
LAB_140445457:
  iVar3 = *(int *)(param_2 + 0x208);
  if ((iVar3 != 0) &&
     (uVar5 = (ulonglong)*(uint *)(param_1 + 0x228), 0 < iVar3 && *(uint *)(param_1 + 0x228) != 0))
  {
    lVar6 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          FUN_14044c9ac(param_2,param_1,lVar1,*(longlong *)(param_2 + 0x200) + lVar6 * 0x30,lVar9,
                        *(longlong *)(param_1 + 0x220) + lVar7,param_3);
          lVar10 = lVar10 + 1;
          uVar5 = (ulonglong)*(int *)(param_1 + 0x228);
          lVar7 = lVar7 + 0x50;
        } while (lVar10 < (longlong)uVar5);
        iVar3 = *(int *)(param_2 + 0x208);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  iVar3 = *(int *)(param_2 + 0x218);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x228);
  if (((iVar3 != 0) && (0 < iVar3)) && (*(uint *)(param_1 + 0x228) != 0)) {
    lVar6 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          FUN_1449ab00f(param_2,param_1,lVar1,*(longlong *)(param_2 + 0x210) + lVar6 * 0x58,lVar9,
                        *(longlong *)(param_1 + 0x220) + lVar7,param_3);
          lVar10 = lVar10 + 1;
          uVar5 = (ulonglong)*(int *)(param_1 + 0x228);
          lVar7 = lVar7 + 0x50;
        } while (lVar10 < (longlong)uVar5);
        iVar3 = *(int *)(param_2 + 0x218);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else if ((0 < (int)uVar5) &&
          (uVar4 = (ulonglong)*(uint *)(param_2 + 0x228), *(uint *)(param_2 + 0x228) != 0)) {
    lVar6 = 0;
    do {
      if (0 < (int)uVar4) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          FUN_1404465dc(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x220) + lVar6 * 0x50,lVar1,
                        *(longlong *)(param_2 + 0x220) + lVar7,param_3);
          lVar10 = lVar10 + 1;
          uVar4 = (ulonglong)*(int *)(param_2 + 0x228);
          lVar7 = lVar7 + 0x50;
        } while (lVar10 < (longlong)uVar4);
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x228);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uVar5);
  }
  iVar3 = *piVar8;
  if (((iVar3 != 0) && (0 < iVar3)) && ((int)uVar5 != 0)) {
    lVar6 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          FUN_1449a97f0(param_2,param_1,lVar1,*(longlong *)(param_2 + 0x230) + lVar6 * 0x60,lVar9,
                        *(longlong *)(param_1 + 0x220) + lVar7,param_3);
          lVar10 = lVar10 + 1;
          uVar5 = (ulonglong)*(int *)(param_1 + 0x228);
          lVar7 = lVar7 + 0x50;
        } while (lVar10 < (longlong)uVar5);
        iVar3 = *piVar8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x238);
  if (iVar3 == 0) goto LAB_140445528;
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x208);
  if ((*(uint *)(param_2 + 0x208) != 0) && (0 < iVar3)) {
    lVar6 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          FUN_14044b170(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x230) + lVar6 * 0x60,lVar1,
                        *(longlong *)(param_2 + 0x200) + lVar7,param_3);
          lVar10 = lVar10 + 1;
          uVar5 = (ulonglong)*(int *)(param_2 + 0x208);
          lVar7 = lVar7 + 0x30;
        } while (lVar10 < (longlong)uVar5);
        iVar3 = *(int *)(param_1 + 0x238);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (iVar3 == 0) goto LAB_140445528;
  }
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x218);
  if (*(uint *)(param_2 + 0x218) == 0) {
LAB_140445792:
    if ((0 < iVar3) &&
       (uVar5 = (ulonglong)*(uint *)(param_2 + 0x228), *(uint *)(param_2 + 0x228) != 0)) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_1449a97f0(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x230) + lVar6 * 0x60,lVar1,
                          *(longlong *)(param_2 + 0x220) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar5 = (ulonglong)*(int *)(param_2 + 0x228);
            lVar7 = lVar7 + 0x50;
          } while (lVar10 < (longlong)uVar5);
          iVar3 = *(int *)(param_1 + 0x238);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
      if (iVar3 == 0) goto LAB_140445528;
    }
  }
  else if (0 < iVar3) {
    lVar6 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          FUN_1404507a5(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x230) + lVar6 * 0x60,lVar1,
                        *(longlong *)(param_2 + 0x210) + lVar7,param_3);
          lVar10 = lVar10 + 1;
          uVar5 = (ulonglong)*(int *)(param_2 + 0x218);
          lVar7 = lVar7 + 0x58;
        } while (lVar10 < (longlong)uVar5);
        iVar3 = *(int *)(param_1 + 0x238);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (iVar3 == 0) goto LAB_140445528;
    goto LAB_140445792;
  }
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x238);
  if ((*(uint *)(param_2 + 0x238) != 0) && (0 < iVar3)) {
    lVar6 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          FUN_1471066e5(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x230) + lVar6 * 0x60,lVar1,
                        *(longlong *)(param_2 + 0x230) + lVar7,param_3);
          lVar10 = lVar10 + 1;
          uVar5 = (ulonglong)*(int *)(param_2 + 0x238);
          lVar7 = lVar7 + 0x60;
        } while (lVar10 < (longlong)uVar5);
        iVar3 = *(int *)(param_1 + 0x238);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
LAB_140445528:
  iVar3 = *(int *)(param_1 + 0x248);
  if (iVar3 != 0) {
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x208);
    if (0 < iVar3 && *(uint *)(param_2 + 0x208) != 0) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_14710804c(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x240) + lVar6 * 0x58,lVar1,
                          *(longlong *)(param_2 + 0x200) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar5 = (ulonglong)*(int *)(param_2 + 0x208);
            lVar7 = lVar7 + 0x30;
          } while (lVar10 < (longlong)uVar5);
          iVar3 = *(int *)(param_1 + 0x248);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
      if (iVar3 == 0) {
        return;
      }
    }
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x218);
    if (0 < iVar3 && *(uint *)(param_2 + 0x218) != 0) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_147108f08(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x240) + lVar6 * 0x58,lVar1,
                          *(longlong *)(param_2 + 0x210) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar5 = (ulonglong)*(int *)(param_2 + 0x218);
            lVar7 = lVar7 + 0x58;
          } while (lVar10 < (longlong)uVar5);
          iVar3 = *(int *)(param_1 + 0x248);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
      if (iVar3 == 0) {
        return;
      }
    }
    if ((0 < iVar3) &&
       (uVar5 = (ulonglong)*(uint *)(param_2 + 0x228), *(uint *)(param_2 + 0x228) != 0)) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_14710a08d(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x240) + lVar6 * 0x58,lVar1,
                          *(longlong *)(param_2 + 0x220) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar5 = (ulonglong)*(int *)(param_2 + 0x228);
            lVar7 = lVar7 + 0x50;
          } while (lVar10 < (longlong)uVar5);
          iVar3 = *(int *)(param_1 + 0x248);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
      if (iVar3 == 0) {
        return;
      }
    }
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x238);
    if (0 < iVar3 && *(uint *)(param_2 + 0x238) != 0) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_14710b173(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x240) + lVar6 * 0x58,lVar1,
                          *(longlong *)(param_2 + 0x230) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar5 = (ulonglong)*(int *)(param_2 + 0x238);
            lVar7 = lVar7 + 0x60;
          } while (lVar10 < (longlong)uVar5);
          iVar3 = *(int *)(param_1 + 0x248);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
      if (iVar3 == 0) {
        return;
      }
    }
    uVar5 = (ulonglong)*(uint *)(param_2 + 0x248);
    if (0 < iVar3 && *(uint *)(param_2 + 0x248) != 0) {
      lVar6 = 0;
      do {
        if (0 < (int)uVar5) {
          lVar7 = 0;
          lVar10 = 0;
          do {
            FUN_14710cb72(param_1,param_2,lVar9,*(longlong *)(param_1 + 0x240) + lVar6 * 0x58,lVar1,
                          *(longlong *)(param_2 + 0x240) + lVar7,param_3);
            lVar10 = lVar10 + 1;
            uVar5 = (ulonglong)*(int *)(param_2 + 0x248);
            lVar7 = lVar7 + 0x58;
          } while (lVar10 < (longlong)uVar5);
          iVar3 = *(int *)(param_1 + 0x248);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 1404460b8 FUN_1404460b8 body=240 status=ok
// SIG undefined FUN_1404460b8(void)

undefined8 *
FUN_1404460b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = param_2;
  puVar9 = param_1;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = param_6;
  puVar9 = param_1 + 0xc;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  param_1[0x18] = param_3;
  param_1[0x19] = param_7;
  param_1[0x1a] = param_5;
  param_1[0x1b] = param_9;
  param_1[0x1c] = param_4;
  param_1[0x1d] = param_8;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x272) = 0;
  *(undefined2 *)((longlong)param_1 + 0x274) = 0;
  dVar4 = (double)param_2[5];
  dVar1 = (double)param_2[6];
  dVar2 = (double)param_6[6];
  dVar5 = (double)param_6[5];
  param_1[0x4f] = (double)param_2[4] - (double)param_6[4];
  param_1[0x50] = dVar4 - dVar5;
  param_1[0x51] = dVar1 - dVar2;
  while( true ) {
    uVar3 = (ushort)*(undefined4 *)((longlong)param_1 + 0x274);
    *(ushort *)((longlong)param_1 + 0x274) = uVar3 + 1;
    if (0x7f < uVar3) {
      return param_1;
    }
    cVar6 = FUN_144a3be3c(param_1);
    if (cVar6 == '\0') break;
    cVar6 = FUN_144b0a38c(param_1);
    if (cVar6 == '\0') {
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1404461a8 FUN_1404461a8 body=1076 status=ok
// SIG undefined FUN_1404461a8(void)

void FUN_1404461a8(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  ushort uVar4;
  ushort *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  lVar10 = *(longlong *)(param_1 + 0x3720);
  param_4[2] = *(double *)(lVar10 + 0x18);
  dVar17 = *(double *)(lVar10 + 0x10);
  *param_4 = *(double *)(lVar10 + 8);
  param_4[1] = dVar17;
  lVar10 = param_1 + 0xf0;
  lVar14 = *(longlong *)(param_1 + 0x24f0);
  if (*(longlong *)(param_1 + 0x24f0) == 0) {
    lVar14 = lVar10;
  }
  uVar13 = (ulonglong)**(ushort **)(param_1 + 0x3720);
  dVar17 = param_4[2] * *(double *)(lVar14 + 0x10 + uVar13 * 0x48) +
           *param_4 * *(double *)(lVar14 + uVar13 * 0x48) +
           param_4[1] * *(double *)(lVar14 + 8 + uVar13 * 0x48);
  *param_5 = dVar17;
  puVar5 = *(ushort **)(param_1 + 0x3720);
  lVar14 = *(longlong *)(param_1 + 0x24f0);
  if (*(longlong *)(param_1 + 0x24f0) == 0) {
    lVar14 = lVar10;
  }
  uVar11 = (ulonglong)puVar5[1];
  pdVar1 = (double *)(lVar14 + (ulonglong)*puVar5 * 0x48);
  dVar15 = pdVar1[2];
  dVar20 = *(double *)(lVar14 + 0x10 + uVar11 * 0x48) - dVar15;
  dVar3 = *pdVar1;
  dVar18 = pdVar1[1];
  dVar23 = *(double *)(lVar14 + 8 + uVar11 * 0x48) - dVar18;
  dVar7 = *(double *)(lVar14 + uVar11 * 0x48) - dVar3;
  uVar13 = (ulonglong)puVar5[2];
  dVar21 = *(double *)(lVar14 + 0x10 + uVar13 * 0x48) - dVar15;
  dVar22 = *(double *)(lVar14 + 8 + uVar13 * 0x48) - dVar18;
  dVar8 = *(double *)(lVar14 + uVar13 * 0x48) - dVar3;
  dVar19 = dVar20 * dVar20 + dVar7 * dVar7 + dVar23 * dVar23;
  dVar9 = dVar20 * dVar21 + dVar7 * dVar8 + dVar23 * dVar22;
  dVar6 = dVar21 * dVar21 + dVar8 * dVar8 + dVar22 * dVar22;
  dVar16 = dVar19 * dVar6 - dVar9 * dVar9;
  if (ABS(dVar16) < 9.99999993922529e-09) {
    param_2[2] = pdVar1[5];
    dVar17 = pdVar1[4];
    *param_2 = pdVar1[3];
    param_2[1] = dVar17;
    uVar4 = **(ushort **)(param_1 + 0x3720);
    if (*(longlong *)(param_1 + 0x24f0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x24f0);
    }
    param_3[2] = *(double *)(lVar10 + 0x40 + (ulonglong)uVar4 * 0x48);
    pdVar1 = (double *)(lVar10 + 0x30 + (ulonglong)uVar4 * 0x48);
    dVar17 = pdVar1[1];
    *param_3 = *pdVar1;
    param_3[1] = dVar17;
  }
  else {
    lVar2 = lVar14 + uVar11 * 0x48;
    lVar14 = lVar14 + uVar13 * 0x48;
    dVar15 = param_4[2] * dVar17 - dVar15;
    dVar3 = *param_4 * dVar17 - dVar3;
    dVar18 = dVar17 * param_4[1] - dVar18;
    dVar22 = dVar21 * dVar15 + dVar8 * dVar3 + dVar22 * dVar18;
    dVar17 = dVar15 * dVar20 + dVar3 * dVar7 + dVar23 * dVar18;
    dVar8 = (dVar6 * dVar17 + dVar22 * -dVar9) / dVar16;
    dVar16 = (dVar17 * -dVar9 + dVar19 * dVar22) / dVar16;
    dVar19 = (1.0 - dVar8) - dVar16;
    dVar17 = pdVar1[5];
    dVar15 = pdVar1[4];
    dVar3 = *(double *)(lVar2 + 0x28);
    dVar18 = *(double *)(lVar2 + 0x20);
    dVar6 = *(double *)(lVar14 + 0x28);
    dVar7 = *(double *)(lVar14 + 0x20);
    *param_2 = *(double *)(lVar14 + 0x18) * dVar16 +
               *(double *)(lVar2 + 0x18) * dVar8 + pdVar1[3] * dVar19;
    param_2[1] = dVar7 * dVar16 + dVar18 * dVar8 + dVar15 * dVar19;
    param_2[2] = dVar6 * dVar16 + dVar3 * dVar8 + dVar17 * dVar19;
    puVar5 = *(ushort **)(param_1 + 0x3720);
    uVar13 = (ulonglong)*puVar5;
    if (*(longlong *)(param_1 + 0x24f0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x24f0);
    }
    dVar17 = *(double *)(lVar10 + 0x40 + uVar13 * 0x48);
    dVar15 = *(double *)(lVar10 + 0x38 + uVar13 * 0x48);
    uVar11 = (ulonglong)puVar5[1];
    dVar3 = *(double *)(lVar10 + 0x40 + uVar11 * 0x48);
    dVar18 = *(double *)(lVar10 + 0x38 + uVar11 * 0x48);
    uVar12 = (ulonglong)puVar5[2];
    dVar6 = *(double *)(lVar10 + 0x40 + uVar12 * 0x48);
    dVar7 = *(double *)(lVar10 + 0x38 + uVar12 * 0x48);
    *param_3 = dVar16 * *(double *)(lVar10 + 0x30 + uVar12 * 0x48) +
               dVar8 * *(double *)(lVar10 + 0x30 + uVar11 * 0x48) +
               dVar19 * *(double *)(lVar10 + 0x30 + uVar13 * 0x48);
    param_3[1] = dVar7 * dVar16 + dVar18 * dVar8 + dVar15 * dVar19;
    param_3[2] = dVar6 * dVar16 + dVar3 * dVar8 + dVar17 * dVar19;
  }
  return;
}



// FUNCTION 1404465dc FUN_1404465dc body=8424 status=ok
// SIG undefined FUN_1404465dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404465dc(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16],longlong param_4
                  ,double *param_5,longlong param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined4 extraout_EAX;
  int iVar2;
  undefined4 extraout_EAX_00;
  uint uVar3;
  undefined8 uVar4;
  double *pdVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar20;
  double dVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  double dVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_558 [32];
  double local_538;
  double dStack_530;
  undefined1 local_528 [16];
  double local_518;
  double dStack_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
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
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_4e8 = *(double *)(param_4 + 0x48) * 0.5;
  dStack_4e0 = 0.0;
  local_4d8 = *(double *)(param_6 + 0x48) * 0.5;
  uStack_4d0 = 0;
  auVar11 = divpd(*(undefined1 (*) [16])(param_4 + 0x28),_DAT_1499387d0);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(double *)(param_4 + 0x38);
  auVar15 = divpd(auVar15,_DAT_1499387d0);
  auVar11 = roundpd(auVar11,auVar11,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar30 = (*(double *)*(undefined1 (*) [16])(param_4 + 0x28) -
           auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar31 = (*(double *)(param_4 + 0x30) - auVar11._8_8_ * DAT_1499387d0._8_8_) *
           0.008726646259971648;
  dVar33 = (*(double *)(param_4 + 0x38) - auVar15._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar34 = (0.0 - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  uVar4 = param_1;
  dVar7 = sin(dVar30);
  uVar41 = (undefined4)uVar4;
  dVar8 = sin(dVar31);
  dVar9 = sin(dVar33);
  sin(dVar34);
  dVar10 = cos(dVar30);
  dVar31 = cos(dVar31);
  dVar33 = cos(dVar33);
  cos(dVar34);
  auVar23 = _DAT_149934d80;
  dVar34 = -(dVar31 * dVar7 * dVar9) + dVar8 * dVar10 * dVar33;
  dVar32 = dVar8 * dVar7 * dVar9 + dVar31 * dVar10 * dVar33;
  dVar30 = dVar7 * dVar8 * dVar33 - dVar10 * dVar31 * dVar9;
  dVar9 = -(dVar7 * dVar31 * dVar33) - dVar10 * dVar8 * dVar9;
  auVar11 = param_3[4];
  dVar7 = auVar11._0_8_;
  dVar8 = auVar11._8_8_;
  auVar15 = param_3[5];
  local_3f8 = auVar15._0_8_;
  auVar11 = minpd(_DAT_149934d80,auVar11);
  auVar27 = minpd(ZEXT816(0x3ff0000000000000),auVar15);
  auVar28._8_8_ = -(ulonglong)(auVar11._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar11._0_8_ < 0.0);
  iVar2 = movmskpd(extraout_EAX,auVar28);
  auVar11._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar11._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  uVar3 = movmskpd(uVar41,auVar11);
  if ((uVar3 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar35 = *(double *)*param_3;
    dVar38 = *(double *)(*param_3 + 8);
    dVar31 = *(double *)(param_3[1] + 8);
    dVar10 = *(double *)(param_3[1] + 8);
    dVar33 = *(double *)(*param_3 + 8);
    dVar17 = *(double *)(*param_3 + 8);
    dVar42 = *(double *)param_3[1];
    dVar44 = *(double *)(param_3[1] + 8);
    dVar20 = *(double *)param_3[1];
    dVar40 = *(double *)param_3[1];
    local_428 = dVar9 * dVar20 * -1.0 +
                dVar34 * dVar33 + dVar32 * *(double *)*param_3 * 1.0 + dVar30 * dVar31;
    local_408 = dVar30 * dVar40 * 1.0 +
                dVar32 * dVar17 + dVar34 * *(double *)*param_3 * -1.0 + dVar9 * dVar10;
    local_478._0_8_ =
         dVar32 * dVar20 * 1.0 +
         ((*(double *)*param_3 * dVar9 * 1.0 + dVar34 * dVar31) - dVar30 * dVar33);
    local_478._8_8_ =
         dVar34 * dVar40 * -1.0 +
         ((*(double *)*param_3 * dVar30 * -1.0 + dVar32 * dVar10) - dVar9 * dVar17);
    dVar17 = *(double *)(param_4 + 0x10) * dVar7;
    dVar20 = *(double *)(param_4 + 0x18) * dVar8;
    dVar34 = *(double *)(param_4 + 0x20) * local_3f8;
    dVar32 = auVar15._8_8_ * 0.0;
    dVar30 = dVar20 * dVar35 - dVar17 * dVar38;
    dVar40 = dVar34 * dVar38 - dVar20 * dVar42;
    dVar33 = dVar17 * dVar42 - dVar34 * dVar35;
    dVar9 = dVar32 * dVar44 - dVar32 * dVar44;
    dVar40 = dVar40 + dVar40;
    dVar33 = dVar33 + dVar33;
    dVar30 = dVar30 + dVar30;
    dVar9 = dVar9 + dVar9;
    dStack_460 = (dVar9 * dVar44 - dVar9 * dVar44) + dVar10 * dVar9 + dVar32 +
                 *(double *)(param_3[3] + 8);
    uVar41 = 0;
    local_468 = (dVar33 * dVar35 - dVar38 * dVar40) + dVar31 * dVar30 + dVar34 +
                *(double *)param_3[3];
    local_3e8 = (dVar30 * dVar38 - dVar42 * dVar33) + dVar31 * dVar40 + dVar17 +
                *(double *)param_3[2];
    dStack_3e0 = (dVar40 * dVar42 - dVar30 * dVar35) + dVar10 * dVar33 + dVar20 +
                 *(double *)(param_3[2] + 8);
  }
  else {
    dVar20 = *(double *)*param_3;
    dVar40 = *(double *)(*param_3 + 8);
    dVar10 = *(double *)param_3[1];
    dVar35 = dVar40 + dVar40;
    dVar38 = dVar10 + dVar10;
    dVar33 = dVar20 * (dVar20 + dVar20);
    local_178 = (1.0 - (dVar10 * dVar38 + dVar40 * dVar35)) * dVar7;
    dVar31 = (1.0 - (dVar10 * dVar38 + dVar33)) * dVar8;
    dVar17 = *(double *)*param_3 * dVar38;
    dVar10 = *(double *)(param_3[1] + 8);
    dVar42 = dVar38 * dVar10;
    dVar44 = (dVar20 + dVar20) * *(double *)(param_3[1] + 8);
    dVar10 = dVar35 * dVar10;
    dStack_130 = (dVar38 * dVar40 - dVar44) * local_3f8;
    local_138 = (dVar10 + dVar17) * local_3f8;
    dStack_170 = (dVar35 * dVar20 + dVar42) * dVar7;
    local_148 = (dVar38 * dVar40 + dVar44) * dVar8;
    local_128 = (1.0 - (dVar33 + dVar40 * dVar35)) * local_3f8;
    local_168 = (dVar17 - dVar10) * dVar7;
    uStack_160 = 0;
    local_158._8_4_ = SUB84(dVar31,0);
    local_158._0_8_ = (dVar35 * dVar20 - dVar42) * dVar8;
    local_158._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = *(double *)param_3[2];
    dStack_110 = *(double *)(param_3[2] + 8);
    local_108 = *(double *)param_3[3];
    uStack_100 = 0x3ff0000000000000;
    dVar33 = dVar9 + dVar9;
    dVar31 = dVar34 + dVar34;
    dVar10 = dVar30 * (dVar30 + dVar30);
    local_1f8 = (double)DAT_149934d80 - (dVar34 * dVar31 + dVar9 * dVar33);
    dStack_1d0 = DAT_149934d80._8_8_ - (dVar34 * dVar31 + dVar10);
    local_1a8 = 1.0 - (dVar10 + dVar9 * dVar33);
    dVar10 = (dVar30 + dVar30) * dVar32;
    dStack_1f0 = dVar33 * dVar30 + dVar31 * dVar32;
    local_1c8 = dVar31 * dVar9 + dVar10;
    local_1d8 = dVar33 * dVar30 - dVar31 * dVar32;
    dVar10 = dVar31 * dVar9 - dVar10;
    local_1e8 = dVar30 * dVar31 - dVar33 * dVar32;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar10,0);
    local_1b8._0_8_ = dVar33 * dVar32 + dVar30 * dVar31;
    local_1b8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    local_198 = *(double *)(param_4 + 0x10);
    dStack_190 = *(double *)(param_4 + 0x18);
    local_188 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(&local_338);
    FUN_144a1c686(&local_338,0x3e45798ee0000000);
    auVar27._8_8_ = -(ulonglong)(0.0 <= dVar8);
    auVar27._0_8_ = -(ulonglong)(0.0 <= dVar7);
    auVar11 = blendvpd(_DAT_149936790,auVar23,auVar27);
    uVar6 = -(ulonglong)(0.0 <= local_3f8 * 1.0);
    dVar30 = (double)(~uVar6 & 0xbff0000000000000 | uVar6 & 0x3ff0000000000000);
    dVar9 = auVar11._0_8_;
    local_328 = local_328 * dVar9;
    dStack_330 = dStack_330 * dVar9;
    local_338 = local_338 * dVar9;
    dVar9 = auVar11._8_8_;
    local_308 = local_308 * dVar9;
    local_310 = local_310 * dVar9;
    dStack_318 = dVar9 * dStack_318;
    dStack_2e8 = dStack_2e8 * dVar30;
    local_2f0 = local_2f0 * dVar30;
    local_2f8 = dVar30 * local_2f8;
    pdVar5 = &local_358;
    FUN_14481fd10(pdVar5,&local_338);
    uVar41 = SUB84(pdVar5,0);
    dVar30 = local_348 * local_348 + local_358 * local_358;
    dVar9 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
    auVar18._0_8_ = dVar30 + dVar9;
    auVar18._8_8_ = dVar30 + dVar9;
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    auVar11 = sqrtpd(auVar18,auVar18);
    auVar11 = divpd(auVar23,auVar11);
    auVar23._0_8_ = auVar11._0_8_ * local_348;
    auVar23._8_8_ = auVar11._8_8_ * dStack_340;
    local_428 = (double)((ulonglong)(local_358 * auVar11._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
    local_408 = (double)((ulonglong)(dStack_350 * auVar11._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
    local_478 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar12);
    dStack_460 = 0.0;
    local_468 = local_2c8;
    local_3e8 = local_2d8;
    dStack_3e0 = dStack_2d0;
  }
  dStack_3f0 = auVar15._8_8_ * 0.0;
  local_3f8 = local_3f8 * 1.0;
  dVar7 = dVar7 * 0.0;
  dVar8 = dVar8 * 0.0;
  dVar34 = local_4e8 * local_3f8;
  dVar17 = dStack_3f0 * 0.0;
  dStack_400 = local_478._0_8_;
  dStack_510 = local_478._8_8_;
  local_438 = dVar7 * local_408;
  dStack_430 = dVar8 * dStack_400;
  dVar33 = dVar7 * dStack_400 - local_428 * dVar34;
  dVar20 = dVar17 * dStack_510 - dStack_510 * dVar17;
  dVar9 = dVar8 * local_428 - local_438;
  dVar10 = dVar34 * local_408 - dStack_430;
  dVar10 = dVar10 + dVar10;
  dVar33 = dVar33 + dVar33;
  dVar9 = dVar9 + dVar9;
  local_3c8._8_4_ = SUB84(dVar8,0);
  local_3c8._0_8_ = dVar7;
  local_3c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar30 = dVar9 * local_408 - dVar33 * dStack_400;
  dVar32 = local_428 * 0.0 + local_408 * -0.0;
  dVar31 = dStack_400 * 0.0 + local_428;
  dVar40 = dStack_400 * -0.0 - local_408;
  dVar31 = dVar31 + dVar31;
  dVar40 = dVar40 + dVar40;
  dVar32 = dVar32 + dVar32;
  local_508._8_8_ = local_408;
  local_508._0_8_ = (local_428 * dVar31 - dVar40 * local_408) + dStack_510 * dVar32 + -1.0;
  local_3d8._8_4_ = SUB84(local_408,0);
  local_3d8._0_8_ = local_428;
  local_3d8._12_4_ = (int)((ulonglong)local_408 >> 0x20);
  local_418._8_4_ = local_478._8_4_;
  local_418._0_8_ = dStack_510;
  local_418._12_4_ = local_478._12_4_;
  local_518 = (dStack_400 * dVar40 - dVar32 * local_428) + dStack_510 * dVar31 + 0.0;
  local_4c8._8_8_ = local_408;
  local_4c8._0_8_ = (local_408 * dVar32 - dVar31 * dStack_400) + dStack_510 * dVar40 + 0.0;
  auVar11 = divpd(*(undefined1 (*) [16])(param_6 + 0x28),_DAT_1499387d0);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(double *)(param_6 + 0x38);
  auVar15 = divpd(auVar16,_DAT_1499387d0);
  auVar11 = roundpd(auVar11,auVar11,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar31 = (*(double *)*(undefined1 (*) [16])(param_6 + 0x28) -
           auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar32 = (*(double *)(param_6 + 0x30) - auVar11._8_8_ * DAT_1499387d0._8_8_) *
           0.008726646259971648;
  dVar40 = (*(double *)(param_6 + 0x38) - auVar15._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar35 = (0.0 - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar8 = (dStack_400 * dVar10 - dVar9 * local_428) + dStack_510 * dVar33 + dVar8 + dStack_3e0;
  local_528._8_4_ = SUB84(dVar8,0);
  local_528._0_8_ = dVar30 + dStack_510 * dVar10 + dVar7 + local_3e8;
  local_528._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar7 = dStack_510 * (dVar20 + dVar20) + dVar17 + dVar30 + dStack_460;
  local_4f8._8_4_ = SUB84(dVar7,0);
  local_4f8._0_8_ =
       dStack_510 * dVar9 + dVar34 + (dVar33 * local_428 - dVar10 * local_408) + local_468;
  local_4f8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dStack_420 = dStack_510;
  dVar7 = sin(dVar31);
  dVar8 = sin(dVar32);
  dVar30 = sin(dVar40);
  sin(dVar35);
  dVar9 = cos(dVar31);
  dVar10 = cos(dVar32);
  dVar31 = cos(dVar40);
  cos(dVar35);
  auVar23 = _DAT_149934d80;
  dVar34 = -(dVar10 * dVar7 * dVar30) + dVar8 * dVar9 * dVar31;
  dVar32 = dVar8 * dVar7 * dVar30 + dVar10 * dVar9 * dVar31;
  dVar33 = dVar7 * dVar8 * dVar31 - dVar9 * dVar10 * dVar30;
  dVar30 = -(dVar7 * dVar10 * dVar31) - dVar9 * dVar8 * dVar30;
  auVar11 = *(undefined1 (*) [16])(param_5 + 8);
  dVar7 = auVar11._0_8_;
  dVar8 = auVar11._8_8_;
  auVar15 = *(undefined1 (*) [16])(param_5 + 10);
  local_378 = auVar15._0_8_;
  auVar11 = minpd(_DAT_149934d80,auVar11);
  auVar28 = minpd(ZEXT816(0x3ff0000000000000),auVar15);
  auVar22._8_8_ = -(ulonglong)(auVar11._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar11._0_8_ < 0.0);
  iVar2 = movmskpd(extraout_EAX_00,auVar22);
  auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
  auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
  uVar3 = movmskpd(uVar41,auVar29);
  if ((uVar3 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar35 = *param_5;
    dVar38 = param_5[1];
    dVar9 = param_5[3];
    dVar10 = param_5[3];
    dVar31 = param_5[1];
    dVar17 = param_5[1];
    dVar42 = param_5[2];
    dVar44 = param_5[3];
    dVar20 = param_5[2];
    dVar40 = param_5[2];
    local_3a8 = dVar30 * dVar20 * -1.0 + dVar34 * dVar31 + dVar32 * *param_5 * 1.0 + dVar33 * dVar9;
    local_388 = dVar33 * dVar40 * 1.0 + dVar32 * dVar17 + dVar34 * *param_5 * -1.0 + dVar30 * dVar10
    ;
    local_488._0_8_ =
         dVar32 * dVar20 * 1.0 + ((*param_5 * dVar30 * 1.0 + dVar34 * dVar9) - dVar33 * dVar31);
    local_488._8_8_ =
         dVar34 * dVar40 * -1.0 + ((*param_5 * dVar33 * -1.0 + dVar32 * dVar10) - dVar30 * dVar17);
    dVar32 = *(double *)(param_6 + 0x10) * dVar7;
    dVar17 = *(double *)(param_6 + 0x18) * dVar8;
    dVar33 = *(double *)(param_6 + 0x20) * local_378;
    dVar34 = auVar15._8_8_ * 0.0;
    dVar31 = dVar17 * dVar35 - dVar32 * dVar38;
    dVar20 = dVar33 * dVar38 - dVar17 * dVar42;
    dVar40 = dVar32 * dVar42 - dVar33 * dVar35;
    dVar30 = dVar34 * dVar44 - dVar34 * dVar44;
    dVar20 = dVar20 + dVar20;
    dVar40 = dVar40 + dVar40;
    dVar31 = dVar31 + dVar31;
    dVar30 = dVar30 + dVar30;
    local_538 = (dVar40 * dVar35 - dVar38 * dVar20) + dVar9 * dVar31 + dVar33 + param_5[6];
    dStack_530 = (dVar30 * dVar44 - dVar30 * dVar44) + dVar10 * dVar30 + dVar34 + param_5[7];
    dVar30 = (dVar31 * dVar38 - dVar42 * dVar40) + dVar9 * dVar20 + dVar32 + param_5[4];
    dVar9 = (dVar20 * dVar42 - dVar31 * dVar35) + dVar10 * dVar40 + dVar17 + param_5[5];
  }
  else {
    dVar17 = *param_5;
    dVar20 = param_5[1];
    dVar9 = param_5[2];
    dVar40 = dVar20 + dVar20;
    dVar35 = dVar9 + dVar9;
    dVar31 = dVar17 * (dVar17 + dVar17);
    local_178 = ((double)DAT_149934d80 - (dVar9 * dVar35 + dVar20 * dVar40)) * dVar7;
    dVar10 = (DAT_149934d80._8_8_ - (dVar9 * dVar35 + dVar31)) * dVar8;
    dVar9 = param_5[3];
    dVar38 = dVar35 * dVar9;
    dVar42 = (dVar17 + dVar17) * param_5[3];
    dVar9 = dVar40 * dVar9;
    dStack_130 = (dVar35 * dVar20 - dVar42) * local_378;
    local_138 = (dVar9 + *param_5 * dVar35) * local_378;
    dStack_170 = (dVar40 * dVar17 + dVar38) * dVar7;
    local_148 = (dVar35 * dVar20 + dVar42) * dVar8;
    local_128 = (1.0 - (dVar31 + dVar20 * dVar40)) * local_378;
    local_168 = (*param_5 * dVar35 - dVar9) * dVar7;
    uStack_160 = 0;
    local_158._8_4_ = SUB84(dVar10,0);
    local_158._0_8_ = (dVar40 * dVar17 - dVar38) * dVar8;
    local_158._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_5[4];
    dStack_110 = param_5[5];
    local_108 = param_5[6];
    uStack_100 = 0x3ff0000000000000;
    dVar31 = dVar30 + dVar30;
    dVar10 = dVar34 + dVar34;
    dVar9 = dVar33 * (dVar33 + dVar33);
    local_1f8 = (double)DAT_149934d80 - (dVar34 * dVar10 + dVar30 * dVar31);
    dStack_1d0 = DAT_149934d80._8_8_ - (dVar34 * dVar10 + dVar9);
    local_1a8 = 1.0 - (dVar9 + dVar30 * dVar31);
    dVar9 = (dVar33 + dVar33) * dVar32;
    dStack_1f0 = dVar31 * dVar33 + dVar10 * dVar32;
    local_1c8 = dVar10 * dVar30 + dVar9;
    local_1d8 = dVar31 * dVar33 - dVar10 * dVar32;
    dVar9 = dVar10 * dVar30 - dVar9;
    local_1e8 = dVar33 * dVar10 - dVar31 * dVar32;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar9,0);
    local_1b8._0_8_ = dVar31 * dVar32 + dVar33 * dVar10;
    local_1b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    local_198 = *(double *)(param_6 + 0x10);
    dStack_190 = *(double *)(param_6 + 0x18);
    local_188 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(&local_338);
    FUN_144a1c686(&local_338,0x3e45798ee0000000);
    auVar13._8_8_ = -(ulonglong)(0.0 <= dVar8);
    auVar13._0_8_ = -(ulonglong)(0.0 <= dVar7);
    auVar11 = blendvpd(_DAT_149936790,auVar23,auVar13);
    uVar6 = -(ulonglong)(0.0 <= local_378 * 1.0);
    dVar30 = (double)(~uVar6 & 0xbff0000000000000 | uVar6 & 0x3ff0000000000000);
    dVar9 = auVar11._0_8_;
    local_328 = local_328 * dVar9;
    dStack_330 = dStack_330 * dVar9;
    local_338 = local_338 * dVar9;
    dVar9 = auVar11._8_8_;
    local_308 = local_308 * dVar9;
    local_310 = local_310 * dVar9;
    dStack_318 = dVar9 * dStack_318;
    dStack_2e8 = dStack_2e8 * dVar30;
    local_2f0 = local_2f0 * dVar30;
    local_2f8 = dVar30 * local_2f8;
    FUN_14481fd10(&local_358,&local_338);
    dVar30 = local_348 * local_348 + local_358 * local_358;
    dVar9 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
    auVar19._0_8_ = dVar30 + dVar9;
    auVar19._8_8_ = dVar30 + dVar9;
    auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
    auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
    auVar11 = sqrtpd(auVar19,auVar19);
    auVar11 = divpd(auVar23,auVar11);
    auVar25._0_8_ = auVar11._0_8_ * local_348;
    auVar25._8_8_ = auVar11._8_8_ * dStack_340;
    local_3a8 = (double)((ulonglong)(local_358 * auVar11._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
    local_388 = (double)((ulonglong)(dStack_350 * auVar11._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
    local_488 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar14);
    local_538 = local_2c8;
    dStack_530 = 0.0;
    dVar30 = local_2d8;
    dVar9 = dStack_2d0;
  }
  dStack_370 = auVar15._8_8_ * 0.0;
  local_378 = local_378 * 1.0;
  dVar7 = dVar7 * 0.0;
  dVar8 = dVar8 * 0.0;
  dVar20 = local_4d8 * local_378;
  dStack_380 = local_488._0_8_;
  dStack_3a0 = local_488._8_8_;
  local_3b8 = dVar7 * local_388;
  dStack_3b0 = dVar8 * dStack_380;
  dVar17 = dVar7 * dStack_380 - local_3a8 * dVar20;
  dVar32 = dStack_370 * 0.0 * dStack_3a0 - dStack_3a0 * dStack_370 * 0.0;
  dVar10 = dVar8 * local_3a8 - local_3b8;
  dVar34 = dVar20 * local_388 - dStack_3b0;
  dVar34 = dVar34 + dVar34;
  dVar17 = dVar17 + dVar17;
  dVar10 = dVar10 + dVar10;
  dVar32 = dVar32 + dVar32;
  local_498._8_4_ = SUB84(dVar8,0);
  local_498._0_8_ = dVar7;
  local_498._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar33 = (dVar10 * local_388 - dVar17 * dStack_380) + dStack_3a0 * dVar34 + dVar7 + dVar30;
  local_4b8._8_8_ = (dStack_380 * dVar34 - local_3a8 * dVar10) + dStack_3a0 * dVar17 + dVar8 + dVar9
  ;
  uVar41 = (undefined4)((ulonglong)local_4b8._8_8_ >> 0x20);
  dVar31 = local_3a8 * 0.0 + local_388 * -0.0;
  dVar35 = dStack_380 * 0.0 + local_3a8;
  dVar8 = dStack_380 * -0.0 - local_388;
  dVar31 = dVar31 + dVar31;
  dVar35 = dVar35 + dVar35;
  dVar8 = dVar8 + dVar8;
  local_398._8_4_ = local_488._8_4_;
  local_398._0_8_ = dStack_3a0;
  local_398._12_4_ = local_488._12_4_;
  dVar40 = (local_3a8 * dVar35 - dVar8 * local_388) + dStack_3a0 * dVar31 + -1.0;
  dVar44 = (dStack_380 * dVar8 - dVar31 * local_3a8) + dStack_3a0 * dVar35 + 0.0;
  dVar35 = (local_388 * dVar31 - dVar35 * dStack_380) + dStack_3a0 * dVar8 + 0.0;
  dVar31 = (double)local_508._0_8_ * (double)local_508._0_8_ +
           (double)local_4c8._0_8_ * (double)local_4c8._0_8_ + local_518 * local_518;
  dVar38 = (double)local_508._0_8_ * dVar40 + (double)local_4c8._0_8_ * dVar35 + local_518 * dVar44;
  dVar42 = dVar40 * dVar40 + dVar35 * dVar35 + dVar44 * dVar44;
  local_458 = (double)local_528._8_8_;
  dStack_450 = (double)local_528._8_8_;
  local_448._8_4_ = (int)local_4b8._8_8_;
  local_448._0_8_ = local_4b8._8_8_;
  local_448._12_4_ = uVar41;
  auVar1._8_4_ = (int)local_4b8._8_8_;
  auVar1._0_8_ = dVar33;
  auVar1._12_4_ = uVar41;
  dVar34 = dVar10 * dStack_3a0 + dVar20 + (dVar17 * local_3a8 - dVar34 * local_388) + local_538;
  dVar8 = (double)local_508._0_8_ * ((double)local_4f8._0_8_ - dVar34) +
          (double)local_4c8._0_8_ * ((double)local_528._0_8_ - dVar33) +
          local_518 * ((double)local_528._8_8_ - (double)local_4b8._8_8_);
  dVar10 = dVar31 * dVar42 - dVar38 * dVar38;
  if (dVar10 < 9.99999993922529e-09) {
    dVar10 = dVar8 / dVar38;
    dVar17 = 0.0;
  }
  else {
    dVar20 = ((double)local_4f8._0_8_ - dVar34) * dVar40 +
             ((double)local_528._0_8_ - dVar33) * dVar35 +
             ((double)local_528._8_8_ - (double)local_4b8._8_8_) * dVar44;
    dVar10 = 1.0 / dVar10;
    dVar17 = (dVar38 * dVar20 - dVar42 * dVar8) * dVar10;
    dVar10 = (dVar31 * dVar20 + -dVar38 * dVar8) * dVar10;
  }
  uVar41 = local_4c8._8_4_;
  uVar43 = local_4c8._12_4_;
  if (*(double *)(param_4 + 0x48) <= dVar17 && dVar17 != *(double *)(param_4 + 0x48)) {
    dVar38 = (double)((ulonglong)local_4e8 ^ DAT_149931e80) * local_3f8;
    dVar17 = (double)local_3c8._0_8_ * (double)local_478._0_8_ - local_428 * dVar38;
    dVar8 = (double)local_3c8._8_8_ * (double)local_3d8._0_8_ - local_438;
    dVar42 = dVar38 * (double)local_3d8._8_8_ - dStack_430;
    dVar42 = dVar42 + dVar42;
    dVar17 = dVar17 + dVar17;
    dVar8 = dVar8 + dVar8;
    dVar31 = local_3e8 +
             (dVar8 * (double)local_3d8._8_8_ - dStack_400 * dVar17) +
             dVar42 * (double)local_418._0_8_ + (double)local_3c8._0_8_;
    dVar20 = dStack_3e0 +
             ((double)local_478._0_8_ * dVar42 - (double)local_3d8._0_8_ * dVar8) +
             dVar17 * (double)local_418._8_8_ + (double)local_3c8._8_8_;
    dVar8 = local_468 +
            dVar8 * (double)local_418._0_8_ + dVar38 +
            (dVar17 * (double)local_3d8._0_8_ - local_408 * dVar42);
  }
  else {
    dVar31 = (double)local_528._0_8_;
    dVar20 = (double)local_528._8_8_;
    dVar8 = (double)local_4f8._0_8_;
    if (0.0 <= dVar17) {
      dVar31 = (double)local_4c8._0_8_ * dVar17 + (double)local_528._0_8_;
      dVar20 = local_518 * dVar17 + (double)local_528._8_8_;
      dVar8 = (double)local_4f8._0_8_ + dVar17 * (double)local_508._0_8_;
    }
  }
  if (*(double *)(param_6 + 0x48) <= dVar10 && dVar10 != *(double *)(param_6 + 0x48)) {
    dVar10 = -local_4d8 * local_378;
    dVar35 = dVar7 * dStack_380 - local_3a8 * dVar10;
    dVar17 = (double)local_498._8_8_ * local_3a8 - local_3b8;
    dVar40 = dVar10 * local_388 - dStack_3b0;
    dVar40 = dVar40 + dVar40;
    dVar35 = dVar35 + dVar35;
    dVar17 = dVar17 + dVar17;
    dVar33 = dVar30 + (dVar17 * local_388 - dStack_380 * dVar35) + dVar40 * dStack_3a0 + dVar7;
    local_4b8._8_8_ =
         dVar9 + (dStack_380 * dVar40 - local_3a8 * dVar17) +
                 dVar35 * (double)local_398._8_8_ + (double)local_498._8_8_;
    local_4a8 = local_538 + dVar17 * dStack_3a0 + dVar10 + (dVar35 * local_3a8 - local_388 * dVar40)
    ;
    dStack_4a0 = dStack_530;
  }
  else {
    dStack_4a0 = dVar32;
    if (0.0 <= dVar10) {
      local_4b8._8_8_ = dVar44 * dVar10 + (double)local_4b8._8_8_;
      dVar33 = dVar35 * dVar10 + dVar33;
      local_4a8 = dVar34 + dVar40 * dVar10;
    }
    else {
      local_4b8._8_8_ = auVar1._8_8_;
      local_4a8 = dVar34;
    }
  }
  uVar6 = (ulonglong)local_4b8._8_8_ >> 0x20;
  uVar36 = (undefined4)local_4b8._8_8_;
  dVar40 = dVar8 - local_4a8;
  dVar9 = dVar31 - dVar33;
  dVar10 = dVar20 - (double)local_4b8._8_8_;
  dVar17 = dVar40 * dVar40 + dVar9 * dVar9 + dVar10 * dVar10;
  dVar7 = *(double *)(param_4 + 0x40);
  dVar30 = *(double *)(param_6 + 0x40);
  local_4b8 = auVar1;
  local_368 = local_3a8;
  dStack_360 = local_388;
  if (dVar17 < (dVar7 + dVar30) * (dVar7 + dVar30)) {
    local_4b8._8_4_ = uVar36;
    local_4b8._0_8_ = dVar33;
    local_4b8._12_4_ = (int)uVar6;
    if (ABS(dVar17) <= 9.99999993922529e-09) {
      uVar36 = SUB84(DAT_14c8462c8,0);
      uVar37 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
      dVar10 = 1.0 - ABS((double)local_508._0_8_ * DAT_14c8462d0 +
                         (double)local_4c8._0_8_ * DAT_14c8462c0 + local_518 * DAT_14c8462c8);
      dVar9 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar10) & DAT_14c8462d8 |
                      (ulonglong)DAT_14c8462c0 & -(ulonglong)(9.99999993922529e-09 < dVar10));
      if (dVar10 <= 9.99999993922529e-09) {
        uVar36 = (undefined4)DAT_14c8462e0;
        uVar37 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
      }
      dVar40 = dVar9 * local_518 - (double)local_4c8._0_8_ * (double)CONCAT44(uVar37,uVar36);
      dVar34 = DAT_14c8462d0;
      if (dVar10 <= 9.99999993922529e-09) {
        dVar34 = DAT_14c8462e8;
      }
      dVar32 = (double)local_4c8._0_8_ * dVar34 - dVar9 * (double)local_508._0_8_;
      dVar9 = (double)CONCAT44(uVar37,uVar36) * (double)local_508._0_8_ - local_518 * dVar34;
      dVar34 = dVar40 * dVar40 + dVar9 * dVar9 + dVar32 * dVar32;
      dVar10 = 0.0;
      if (9.99999993922529e-09 < dVar34) {
        dVar10 = 1.0 / SQRT(dVar34);
        dVar9 = dVar9 * dVar10;
        dVar32 = dVar32 * dVar10;
        dVar40 = dVar40 * dVar10;
        dVar10 = 0.0;
      }
    }
    else {
      dVar34 = 1.0 / SQRT(dVar17);
      dVar9 = dVar9 * dVar34;
      dVar32 = dVar10 * dVar34;
      dVar40 = dVar40 * dVar34;
      uVar41 = SUB84(dVar10,0);
      uVar43 = (undefined4)((ulonglong)dVar10 >> 0x20);
    }
    local_230 = 0xffffffffffffffff;
    local_228 = 0xffffffff;
    local_220 = 0;
    uStack_218 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_488._0_8_ = *(undefined8 *)*param_3;
    dVar44 = *(double *)*(undefined1 (*) [16])(*param_3 + 8);
    local_528 = *param_3;
    dVar45 = -(double)local_488._0_8_;
    dVar21 = -dVar44;
    dVar34 = dVar9 * dVar21 - dVar45 * dVar32;
    local_4e8 = *(double *)param_3[1];
    local_498 = *(undefined1 (*) [16])(*param_3 + 8);
    dStack_4e0 = *(double *)(param_3[1] + 8);
    dVar35 = local_4e8 * -1.0;
    dVar38 = dStack_4e0 * 1.0;
    dVar17 = dVar40 * dVar45 - dVar35 * dVar9;
    dVar42 = dVar32 * dVar35 - dVar21 * dVar40;
    dVar17 = dVar17 + dVar17;
    dVar42 = dVar42 + dVar42;
    local_4c8._8_4_ = uVar41;
    local_4c8._0_8_ = dVar32;
    local_4c8._12_4_ = uVar43;
    dVar34 = dVar34 + dVar34;
    local_2c8 = (dVar45 * dVar17 - dVar42 * dVar21) + (dVar38 * dVar34 - dVar40);
    dStack_2d0 = (dVar35 * dVar42 - dVar34 * dVar45) + (dVar38 * dVar17 - dVar32);
    local_2d8 = (dVar21 * dVar34 - dVar17 * dVar35) + (dVar38 * dVar42 - dVar9);
    local_4f8._0_8_ = *(undefined8 *)(param_3[1] + 8);
    local_4f8._8_8_ = *(undefined8 *)(param_3[1] + 8);
    local_4d8 = *(double *)param_3[3];
    uStack_4d0 = *(undefined8 *)(param_3[3] + 8);
    dVar8 = dVar8 - local_4d8;
    local_538 = *(double *)param_3[2];
    dStack_530 = *(double *)(param_3[2] + 8);
    dVar31 = dVar31 - local_538;
    dVar20 = dVar20 - dStack_530;
    dVar39 = dVar31 * dVar35 - dVar45 * dVar8;
    dVar24 = dVar20 * dVar45 - dVar21 * dVar31;
    dVar26 = dVar8 * dVar21 - dVar35 * dVar20;
    dVar26 = dVar26 + dVar26;
    dVar39 = dVar39 + dVar39;
    dVar24 = dVar24 + dVar24;
    local_508 = param_3[4];
    dVar34 = local_508._0_8_;
    dVar17 = local_508._8_8_;
    auVar11 = divpd(_DAT_149934d80,local_508);
    dVar42 = *(double *)param_3[5];
    local_478 = param_3[5];
    local_328 = local_2c8 * dVar7 +
                (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar42)) &
                        (ulonglong)(1.0 / dVar42)) *
                (dVar24 * dVar38 + dVar8 + (dVar39 * dVar45 - dVar26 * dVar21));
    local_338 = local_2d8 * dVar7 +
                (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar34)) & auVar11._0_8_) *
                ((dVar24 * dVar21 - dVar39 * dVar35) + dVar38 * dVar26 + dVar31);
    dStack_330 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar17)) & auVar11._8_8_) *
                 ((double)local_488._0_8_ * dVar24 + dVar35 * dVar26 + dVar38 * dVar39 + dVar20) +
                 dStack_2d0 * dVar7;
    dVar35 = local_338 * dVar34;
    dVar38 = dStack_330 * dVar17;
    dVar20 = local_328 * dVar42;
    dVar7 = dVar38 * (double)local_488._0_8_ - dVar44 * dVar35;
    dVar8 = dVar20 * dVar44 - local_4e8 * dVar38;
    local_488._8_8_ = dStack_4e0;
    dVar31 = dVar35 * local_4e8 - (double)local_488._0_8_ * dVar20;
    dVar8 = dVar8 + dVar8;
    dVar31 = dVar31 + dVar31;
    dVar7 = dVar7 + dVar7;
    local_308 = (dVar7 * dVar44 - dVar31 * local_4e8) + (double)local_4f8._0_8_ * dVar8 + dVar35 +
                local_538;
    dStack_300 = (local_4e8 * dVar8 - (double)local_488._0_8_ * dVar7) +
                 (double)local_4f8._8_8_ * dVar31 + dVar38 + dStack_530;
    local_518 = -dVar9;
    dStack_510 = -dVar10;
    local_2f8 = dVar7 * (double)local_4f8._0_8_ + dVar20 +
                (dVar31 * (double)local_488._0_8_ - dVar8 * dVar44) + local_4d8;
    dVar8 = -*param_5;
    dVar10 = -param_5[1];
    dVar31 = param_5[2] * -1.0;
    dVar20 = param_5[3] * 1.0;
    dVar38 = dVar8 * dVar32 - dVar9 * dVar10;
    dVar7 = dVar31 * dVar9 - dVar40 * dVar8;
    dVar35 = dVar10 * dVar40 - dVar32 * dVar31;
    dVar35 = dVar35 + dVar35;
    dVar7 = dVar7 + dVar7;
    dVar38 = dVar38 + dVar38;
    local_2b0 = (dVar8 * dVar7 - dVar35 * dVar10) + dVar20 * dVar38 + dVar40;
    local_2b8 = (dVar31 * dVar35 - dVar38 * dVar8) + dVar20 * dVar7 + dVar32;
    local_2c0 = (dVar10 * dVar38 - dVar7 * dVar31) + dVar20 * dVar35 + dVar9;
    dVar38 = local_4a8 - param_5[6];
    dVar33 = dVar33 - param_5[4];
    dVar35 = (double)local_4b8._8_8_ - param_5[5];
    dVar9 = dVar33 * dVar31 - dVar8 * dVar38;
    dVar7 = dVar35 * dVar8 - dVar10 * dVar33;
    dVar45 = dVar38 * dVar10 - dVar31 * dVar35;
    dVar45 = dVar45 + dVar45;
    dVar9 = dVar9 + dVar9;
    dVar7 = dVar7 + dVar7;
    auVar11 = *(undefined1 (*) [16])(param_5 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar11);
    local_310 = local_2b0 * dVar30 +
                (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                        (ulonglong)(1.0 / param_5[10])) *
                (dVar7 * dVar20 + dVar38 + (dVar9 * dVar8 - dVar45 * dVar10));
    local_320 = local_2c0 * dVar30 +
                (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar11._0_8_)) & auVar15._0_8_) *
                ((dVar7 * dVar10 - dVar9 * dVar31) + dVar20 * dVar45 + dVar33);
    dStack_318 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar11._8_8_)) & auVar15._8_8_) *
                 (*param_5 * dVar7 + dVar31 * dVar45 + dVar20 * dVar9 + dVar35) + local_2b8 * dVar30
    ;
    dVar34 = local_320 * dVar34;
    dVar17 = dStack_318 * dVar17;
    dVar42 = local_310 * dVar42;
    dVar7 = dVar17 * (double)local_488._0_8_ - dVar44 * dVar34;
    dVar8 = dVar42 * dVar44 - local_4e8 * dVar17;
    dVar9 = dVar34 * local_4e8 - (double)local_488._0_8_ * dVar42;
    dVar8 = dVar8 + dVar8;
    dVar9 = dVar9 + dVar9;
    dVar7 = dVar7 + dVar7;
    local_2f0 = (dVar7 * dVar44 - dVar9 * local_4e8) + (double)local_4f8._0_8_ * dVar8 + dVar34 +
                local_538;
    dStack_2e8 = (local_4e8 * dVar8 - (double)local_488._0_8_ * dVar7) +
                 (double)local_4f8._8_8_ * dVar9 + dVar17 + dStack_530;
    local_2e0 = dVar7 * (double)local_4f8._0_8_ + dVar42 +
                (dVar9 * (double)local_488._0_8_ - dVar8 * dVar44) + local_4d8;
    local_2a8 = ((local_308 - local_2f0) * local_518 - (dStack_300 - dStack_2e8) * dVar32) -
                (local_2f8 - local_2e0) * dVar40;
    local_468 = dVar30;
    local_2a0 = param_1;
    local_298 = param_2;
    FUN_1404486c6(param_7);
    dVar34 = local_4a8;
    dVar32 = dStack_4a0;
  }
  dStack_4a0 = dVar32;
  local_4a8 = dVar34;
  if ((local_f0 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404486c6 FUN_1404486c6 body=4241 status=ok
// SIG undefined FUN_1404486c6(void)

void FUN_1404486c6(longlong param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  double *pdVar18;
  bool bVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar26 = *(longlong *)(param_2[9] + 8);
  lVar17 = *(longlong *)param_2[10];
  if ((lVar26 == *(longlong *)(param_1 + 0x518)) || (lVar17 == *(longlong *)(param_1 + 0x508))) {
    *(longlong *)(param_2[9] + 8) = lVar17;
    *(longlong *)param_2[10] = lVar26;
    uVar7 = *(undefined8 *)param_2[1];
    uVar11 = *(undefined8 *)*param_2;
    uVar12 = *(undefined8 *)(*param_2 + 8);
    *(undefined8 *)*param_2 = *(undefined8 *)(param_2[1] + 8);
    *(undefined8 *)(*param_2 + 8) = *(undefined8 *)param_2[2];
    *(undefined8 *)param_2[1] = *(undefined8 *)(param_2[2] + 8);
    *(undefined8 *)(param_2[1] + 8) = uVar11;
    *(undefined8 *)param_2[2] = uVar12;
    *(undefined8 *)(param_2[2] + 8) = uVar7;
    uVar7 = *(undefined8 *)param_2[4];
    uVar11 = *(undefined8 *)param_2[3];
    uVar12 = *(undefined8 *)(param_2[3] + 8);
    *(undefined8 *)param_2[3] = *(undefined8 *)(param_2[4] + 8);
    *(undefined8 *)(param_2[3] + 8) = *(undefined8 *)param_2[5];
    *(undefined8 *)param_2[4] = *(undefined8 *)(param_2[5] + 8);
    *(undefined8 *)(param_2[4] + 8) = uVar11;
    *(undefined8 *)param_2[5] = uVar12;
    *(undefined8 *)(param_2[5] + 8) = uVar7;
    uVar7 = *(undefined8 *)param_2[7];
    uVar11 = *(undefined8 *)param_2[6];
    uVar12 = *(undefined8 *)(param_2[6] + 8);
    *(undefined8 *)param_2[6] = *(undefined8 *)(param_2[7] + 8);
    *(undefined8 *)(param_2[6] + 8) = *(undefined8 *)param_2[8];
    *(undefined8 *)param_2[7] = *(undefined8 *)(param_2[8] + 8);
    *(undefined8 *)(param_2[7] + 8) = uVar11;
    *(undefined8 *)param_2[8] = uVar12;
    *(undefined8 *)(param_2[8] + 8) = uVar7;
    uVar7 = *(undefined8 *)(param_2[0xb] + 8);
    uVar11 = *(undefined8 *)(param_2[10] + 8);
    uVar12 = *(undefined8 *)param_2[0xb];
    uVar13 = *(undefined8 *)(param_2[0xc] + 8);
    *(undefined8 *)(param_2[10] + 8) = *(undefined8 *)param_2[0xc];
    *(undefined8 *)param_2[0xb] = uVar13;
    *(undefined8 *)(param_2[0xb] + 8) = *(undefined8 *)param_2[0xd];
    *(undefined8 *)param_2[0xc] = uVar11;
    *(undefined8 *)(param_2[0xc] + 8) = uVar12;
    *(undefined8 *)param_2[0xd] = uVar7;
    local_e8 = *(undefined8 *)(param_2[0xe] + 8);
    local_f8 = *(undefined8 *)(param_2[0xd] + 8);
    uStack_f0 = *(undefined8 *)param_2[0xe];
    uVar7 = *(undefined8 *)(param_2[0xf] + 8);
    *(undefined8 *)(param_2[0xd] + 8) = *(undefined8 *)param_2[0xf];
    *(undefined8 *)param_2[0xe] = uVar7;
    *(undefined8 *)(param_2[0xe] + 8) = *(undefined8 *)param_2[0x10];
    *(undefined8 *)param_2[0xf] = local_f8;
    *(undefined8 *)(param_2[0xf] + 8) = uStack_f0;
    *(undefined8 *)param_2[0x10] = local_e8;
    lVar26 = lVar17;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    uVar16 = *(uint *)(param_1 + 0x4f8);
    if (uVar16 == 0) {
LAB_1404495da:
      *(undefined4 *)(param_1 + 0x4f8) = 1;
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2[9] + 8);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)param_2[10];
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)param_2[9];
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2[0x10] + 8);
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)param_2[0x11];
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)param_2[0x13];
      *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2[0x12] + 8);
      uVar7 = *(undefined8 *)param_2[0x12];
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2[0x11] + 8);
      *(undefined8 *)(param_1 + 0x138) = uVar7;
      if (10000.0 < *(double *)param_2[9] || *(double *)param_2[9] == 10000.0) {
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      lVar26 = 0;
      bVar15 = true;
      do {
        bVar19 = bVar15;
        lVar26 = lVar26 * 0x18;
        *(undefined8 *)(param_1 + 0x28 + lVar26) =
             *(undefined8 *)((longlong)param_2 + lVar26 + 0x10);
        uVar7 = ((undefined8 *)((longlong)param_2 + lVar26))[1];
        puVar1 = (undefined8 *)(param_1 + 0x18 + lVar26);
        *puVar1 = *(undefined8 *)((longlong)param_2 + lVar26);
        puVar1[1] = uVar7;
        *(undefined8 *)(param_1 + 0x58 + lVar26) =
             *(undefined8 *)((longlong)param_2 + lVar26 + 0x40);
        puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x30);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0x48 + lVar26);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(param_1 + 0x88 + lVar26) =
             *(undefined8 *)((longlong)param_2 + lVar26 + 0x70);
        puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x60);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0x78 + lVar26);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(param_1 + 0xd0 + lVar26) =
             *(undefined8 *)((longlong)param_2 + lVar26 + 0xb8);
        puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0xa8);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + 0xc0 + lVar26);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(param_1 + 0x100 + lVar26) =
             *(undefined8 *)((longlong)param_2 + lVar26 + 0xe8);
        puVar3 = (undefined4 *)((longlong)param_2 + lVar26 + 0xd8);
        uVar27 = puVar3[1];
        uVar28 = puVar3[2];
        uVar29 = puVar3[3];
        puVar4 = (undefined4 *)(param_1 + 0xf0 + lVar26);
        *puVar4 = *puVar3;
        puVar4[1] = uVar27;
        puVar4[2] = uVar28;
        puVar4[3] = uVar29;
        lVar26 = 1;
        bVar15 = false;
      } while (bVar19);
      goto LAB_1404493ab;
    }
    lVar17 = *(longlong *)(param_1 + 0x508);
    if (lVar17 == 0) goto LAB_1404495be;
    auVar6 = *param_2;
    uVar27 = auVar6._0_4_;
    uVar28 = auVar6._4_4_;
    uVar29 = auVar6._8_4_;
    uVar30 = auVar6._12_4_;
    dVar36 = *(double *)(lVar17 + 0x170) * auVar6._0_8_;
    dVar37 = *(double *)(lVar17 + 0x178) * auVar6._8_8_;
    dVar31 = *(double *)param_2[1] * *(double *)(lVar17 + 0x180);
    dVar33 = *(double *)(lVar17 + 0x130);
    dVar5 = *(double *)(lVar17 + 0x138);
    dVar32 = *(double *)(lVar17 + 0x140);
    dVar40 = *(double *)(lVar17 + 0x148);
    dVar35 = dVar37 * dVar33 - dVar36 * dVar5;
    dVar39 = dVar31 * dVar5 - dVar37 * dVar32;
    dVar8 = dVar36 * dVar32 - dVar33 * dVar31;
    dVar39 = dVar39 + dVar39;
    dVar8 = dVar8 + dVar8;
    dVar35 = dVar35 + dVar35;
    dVar36 = (dVar35 * dVar5 - dVar8 * dVar32) + dVar40 * dVar39 + dVar36 +
             *(double *)(lVar17 + 0x150);
    dVar37 = (dVar32 * dVar39 - dVar33 * dVar35) + *(double *)(lVar17 + 0x148) * dVar8 + dVar37 +
             *(double *)(lVar17 + 0x158);
    dVar32 = *(double *)param_2[1];
    bVar15 = false;
    dVar40 = dVar35 * dVar40 + dVar31 + (dVar8 * dVar33 - dVar39 * dVar5) +
             *(double *)(lVar17 + 0x160);
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x4f8);
    if (uVar16 == 0) goto LAB_1404495da;
LAB_1404495be:
    auVar6 = *param_2;
    dVar36 = auVar6._0_8_;
    uVar27 = auVar6._0_4_;
    uVar28 = auVar6._4_4_;
    dVar37 = auVar6._8_8_;
    uVar29 = auVar6._8_4_;
    uVar30 = auVar6._12_4_;
    dVar32 = *(double *)param_2[1];
    bVar15 = true;
    lVar17 = 0;
    dVar40 = dVar32;
  }
  if (0 < (int)uVar16) {
    dVar35 = (double)CONCAT44(uVar30,uVar29);
    lVar21 = param_1 + 0x18;
    uVar20 = (ulonglong)uVar16;
    lVar23 = param_1 + 0xc0;
    do {
      dVar8 = *(double *)(lVar23 + -0xa8);
      dVar33 = *(double *)(lVar23 + -0xa0);
      dVar39 = *(double *)(lVar23 + -0x98);
      if (!bVar15) {
        dVar8 = dVar8 * *(double *)(lVar17 + 0x170);
        dVar33 = dVar33 * *(double *)(lVar17 + 0x178);
        dVar39 = dVar39 * *(double *)(lVar17 + 0x180);
        dVar41 = *(double *)(lVar17 + 0x130);
        dVar9 = *(double *)(lVar17 + 0x138);
        dVar10 = *(double *)(lVar17 + 0x140);
        dVar5 = *(double *)(lVar17 + 0x148);
        dVar31 = dVar33 * dVar41 - dVar8 * dVar9;
        dVar34 = dVar39 * dVar9 - dVar33 * dVar10;
        dVar38 = dVar8 * dVar10 - dVar41 * dVar39;
        dVar34 = dVar34 + dVar34;
        dVar38 = dVar38 + dVar38;
        dVar31 = dVar31 + dVar31;
        dVar8 = (dVar31 * dVar9 - dVar38 * dVar10) + dVar5 * dVar34 + dVar8 +
                *(double *)(lVar17 + 0x150);
        dVar33 = (dVar10 * dVar34 - dVar41 * dVar31) + *(double *)(lVar17 + 0x148) * dVar38 + dVar33
                 + *(double *)(lVar17 + 0x158);
        dVar39 = dVar31 * dVar5 + dVar39 + (dVar38 * dVar41 - dVar34 * dVar9) +
                 *(double *)(lVar17 + 0x160);
      }
      if ((dVar40 - dVar39) * (dVar40 - dVar39) +
          (dVar36 - dVar8) * (dVar36 - dVar8) + (dVar37 - dVar33) * (dVar37 - dVar33) < 625.0) {
        *(longlong *)(lVar23 + -0x10) = lVar26;
        *(undefined8 *)(lVar23 + -8) = *(undefined8 *)param_2[10];
        *(undefined8 *)(lVar23 + -0x18) = *(undefined8 *)param_2[9];
        *(undefined8 *)(lVar23 + 0x60) = *(undefined8 *)(param_2[0x10] + 8);
        *(undefined4 *)(lVar23 + 0x68) = *(undefined4 *)param_2[0x11];
        *(undefined8 *)(lVar23 + 0x88) = *(undefined8 *)param_2[0x13];
        if (10000.0 < *(double *)param_2[9] || *(double *)param_2[9] == 10000.0) {
          *(undefined8 *)(lVar23 + -0x18) = 0;
        }
        lVar26 = 0;
        bVar15 = true;
        do {
          bVar19 = bVar15;
          lVar26 = lVar26 * 0x18;
          *(undefined8 *)(lVar23 + -0x98 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0x10);
          uVar7 = ((undefined8 *)((longlong)param_2 + lVar26))[1];
          puVar1 = (undefined8 *)(lVar23 + -0xa8 + lVar26);
          *puVar1 = *(undefined8 *)((longlong)param_2 + lVar26);
          puVar1[1] = uVar7;
          *(undefined8 *)(lVar23 + -0x68 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0x40);
          puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x30);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar23 + -0x78 + lVar26);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar23 + -0x38 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0x70);
          puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x60);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar23 + -0x48 + lVar26);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar23 + 0x10 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0xb8);
          puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0xa8);
          uVar7 = puVar1[1];
          *(undefined8 *)(lVar23 + lVar26) = *puVar1;
          ((undefined8 *)(lVar23 + lVar26))[1] = uVar7;
          puVar3 = (undefined4 *)((longlong)param_2 + lVar26 + 0xd8);
          uVar27 = puVar3[1];
          uVar28 = puVar3[2];
          uVar29 = puVar3[3];
          puVar4 = (undefined4 *)(lVar23 + 0x30 + lVar26);
          *puVar4 = *puVar3;
          puVar4[1] = uVar27;
          puVar4[2] = uVar28;
          puVar4[3] = uVar29;
          *(undefined8 *)(lVar23 + 0x40 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0xe8);
          lVar26 = 1;
          bVar15 = false;
        } while (bVar19);
        goto LAB_1404493ab;
      }
      lVar23 = lVar23 + 0x138;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    if (3 < (int)uVar16) {
      lVar17 = 0;
      uVar22 = 1;
      uVar16 = 0;
      do {
        dVar36 = *(double *)(param_1 + 0x1e0 + lVar17);
        pdVar18 = (double *)(param_1 + 0xa8 + (longlong)(int)uVar16 * 0x138);
        uVar14 = uVar22;
        if (dVar36 < *pdVar18 || dVar36 == *pdVar18) {
          uVar14 = uVar16;
        }
        uVar16 = uVar14;
        lVar17 = lVar17 + 0x138;
        uVar22 = uVar22 + 1;
      } while (lVar17 != 0x3a8);
      lVar17 = (longlong)(int)uVar16 * 0x138;
      local_118 = *(double *)(param_1 + 0x28 + lVar17);
      dVar36 = local_118 - dVar32;
      local_110 = *(double *)(lVar21 + lVar17);
      local_120 = *(double *)(param_1 + 0x20 + lVar17);
      dVar37 = local_120 - dVar35;
      dVar40 = local_110 - (double)CONCAT44(uVar28,uVar27);
      dVar39 = dVar36 * dVar36 + dVar40 * dVar40 + dVar37 * dVar37;
      if (((dVar39 != 1.0) || (dVar8 = dVar36, dVar33 = dVar37, dVar5 = dVar40, NAN(dVar39))) &&
         (dVar8 = DAT_14c8464f0, dVar33 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar39)) {
        dVar39 = 1.0 / SQRT(dVar39);
        dVar8 = dVar36 * dVar39;
        dVar33 = dVar37 * dVar39;
        dVar5 = dVar40 * dVar39;
      }
      pdVar18 = (double *)(param_1 + 0x28);
      dVar36 = -3.4028234663852886e+38;
      uVar24 = 0xffffffff;
      uVar20 = 0;
      do {
        if (uVar16 != uVar20) {
          dVar40 = (*pdVar18 - dVar32) * dVar8 +
                   (pdVar18[-2] - (double)CONCAT44(uVar28,uVar27)) * dVar5 +
                   (pdVar18[-1] - dVar35) * dVar33;
          dVar39 = pdVar18[-2] - (dVar40 * dVar5 + (double)CONCAT44(uVar28,uVar27));
          dVar37 = pdVar18[-1] - (dVar33 * dVar40 + dVar35);
          dVar40 = *pdVar18 - (dVar8 * dVar40 + dVar32);
          dVar37 = dVar40 * dVar40 + dVar37 * dVar37 + dVar39 * dVar39;
          if (dVar36 < dVar37) {
            uVar24 = uVar20 & 0xffffffff;
            dVar36 = dVar37;
          }
        }
        uVar20 = uVar20 + 1;
        pdVar18 = pdVar18 + 0x27;
      } while (uVar20 != 4);
      lVar17 = (longlong)(int)uVar24 * 0x138;
      local_128 = *(double *)(param_1 + 0x28 + lVar17);
      dVar36 = *(double *)(lVar21 + lVar17);
      local_108 = *(double *)(param_1 + 0x20 + lVar17);
      pdVar18 = (double *)(param_1 + 0x28);
      uVar25 = 0xffffffff;
      uVar20 = 0;
      dVar37 = -3.4028234663852886e+38;
      do {
        if ((uVar16 != uVar20) && (uVar24 != uVar20)) {
          dVar40 = *pdVar18;
          dVar39 = pdVar18[-2];
          dVar31 = pdVar18[-1];
          dVar34 = (dVar40 - dVar32) * dVar8 +
                   (dVar39 - (double)CONCAT44(uVar28,uVar27)) * dVar5 + (dVar31 - dVar35) * dVar33;
          dVar41 = dVar39 - (dVar34 * dVar5 + (double)CONCAT44(uVar28,uVar27));
          dVar38 = dVar31 - (dVar33 * dVar34 + dVar35);
          dVar34 = dVar40 - (dVar8 * dVar34 + dVar32);
          dVar34 = dVar34 * dVar34 + dVar38 * dVar38 + dVar41 * dVar41;
          dVar38 = (dVar40 - local_118) * dVar8 +
                   (dVar39 - local_110) * dVar5 + (dVar31 - local_120) * dVar33;
          dVar41 = dVar39 - (dVar38 * dVar5 + (double)CONCAT44(uVar28,uVar27));
          dVar9 = dVar31 - (dVar33 * dVar38 + dVar35);
          dVar38 = dVar40 - (dVar8 * dVar38 + dVar32);
          dVar38 = dVar38 * dVar38 + dVar9 * dVar9 + dVar41 * dVar41;
          if (dVar34 <= dVar38) {
            dVar34 = dVar38;
          }
          dVar38 = (dVar40 - local_128) * dVar8 +
                   (dVar39 - dVar36) * dVar5 + (dVar31 - local_108) * dVar33;
          dVar39 = dVar39 - (dVar38 * dVar5 + (double)CONCAT44(uVar28,uVar27));
          dVar31 = dVar31 - (dVar33 * dVar38 + dVar35);
          dVar40 = dVar40 - (dVar8 * dVar38 + dVar32);
          dVar40 = dVar40 * dVar40 + dVar31 * dVar31 + dVar39 * dVar39;
          if (dVar34 <= dVar40) {
            dVar34 = dVar40;
          }
          local_100 = dVar37;
          if (dVar37 < dVar34) {
            uVar25 = uVar20 & 0xffffffff;
            dVar37 = dVar34;
          }
        }
        uVar20 = uVar20 + 1;
        pdVar18 = pdVar18 + 0x27;
      } while (uVar20 != 4);
      uVar22 = 1 << ((byte)uVar24 & 0x1f) | 1 << (uVar16 & 0x1f) | 1 << ((uint)uVar25 & 0x1f);
      uVar16 = uVar22 - 7;
      if ((uVar16 < 8) && ((0xd1U >> (uVar16 & 0x1f) & 1) != 0)) {
        uVar22 = *(uint *)(&DAT_14a1e3ca8 + (ulonglong)uVar16 * 4);
      }
      lVar23 = (longlong)(int)(uint)uVar25 * 0x138;
      lVar17 = (longlong)(int)uVar22 * 0x138;
      dVar37 = *(double *)(param_1 + 0x28 + lVar23);
      dVar40 = *(double *)(lVar21 + lVar23);
      dVar39 = *(double *)(param_1 + 0x20 + lVar23);
      dVar8 = (dVar36 - local_110) * (dVar39 - local_120) -
              (dVar40 - local_110) * (local_108 - local_120);
      dVar5 = (local_128 - local_118) * (dVar40 - local_110) -
              (dVar37 - local_118) * (dVar36 - local_110);
      dVar33 = (local_108 - local_120) * (dVar37 - local_118) -
               (dVar39 - local_120) * (local_128 - local_118);
      dVar5 = (dVar8 * dVar8 + dVar33 * dVar33 + dVar5 * dVar5) * 0.25;
      dVar8 = dVar40 - (double)CONCAT44(uVar28,uVar27);
      dVar33 = dVar36 - (double)CONCAT44(uVar28,uVar27);
      dVar34 = dVar33 * (dVar39 - dVar35) - dVar8 * (local_108 - dVar35);
      dVar8 = (local_128 - dVar32) * dVar8 - (dVar37 - dVar32) * dVar33;
      dVar31 = (local_108 - dVar35) * (dVar37 - dVar32) - (local_128 - dVar32) * (dVar39 - dVar35);
      dVar32 = *(double *)(param_1 + 0x28 + lVar17);
      dVar37 = dVar37 - dVar32;
      dVar35 = *(double *)(param_1 + 0x20 + lVar17);
      dVar39 = dVar39 - dVar35;
      dVar40 = dVar40 - *(double *)(lVar21 + lVar17);
      dVar32 = local_128 - dVar32;
      dVar35 = local_108 - dVar35;
      dVar36 = dVar36 - *(double *)(lVar21 + lVar17);
      dVar33 = dVar36 * dVar39 - dVar40 * dVar35;
      dVar36 = dVar32 * dVar40 - dVar37 * dVar36;
      dVar32 = dVar35 * dVar37 - dVar32 * dVar39;
      if ((dVar33 * dVar33 + dVar32 * dVar32 + dVar36 * dVar36) * 0.25 + dVar5 <=
          (dVar34 * dVar34 + dVar31 * dVar31 + dVar8 * dVar8) * 0.25 + dVar5) {
        lVar21 = lVar21 + lVar17;
        *(longlong *)(lVar21 + 0x98) = lVar26;
        *(undefined8 *)(lVar21 + 0xa0) = *(undefined8 *)param_2[10];
        *(undefined8 *)(lVar21 + 0x90) = *(undefined8 *)param_2[9];
        *(undefined8 *)(lVar21 + 0x108) = *(undefined8 *)(param_2[0x10] + 8);
        *(undefined4 *)(lVar21 + 0x110) = *(undefined4 *)param_2[0x11];
        *(undefined8 *)(lVar21 + 0x130) = *(undefined8 *)param_2[0x13];
        *(undefined8 *)(lVar21 + 0x128) = *(undefined8 *)(param_2[0x12] + 8);
        uVar7 = *(undefined8 *)param_2[0x12];
        *(undefined8 *)(lVar21 + 0x118) = *(undefined8 *)(param_2[0x11] + 8);
        *(undefined8 *)(lVar21 + 0x120) = uVar7;
        if (10000.0 < *(double *)param_2[9] || *(double *)param_2[9] == 10000.0) {
          *(undefined8 *)(lVar21 + 0x90) = 0;
        }
        lVar26 = 0;
        bVar15 = true;
        do {
          bVar19 = bVar15;
          lVar26 = lVar26 * 0x18;
          *(undefined8 *)(lVar21 + 0x10 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0x10);
          uVar7 = ((undefined8 *)((longlong)param_2 + lVar26))[1];
          *(undefined8 *)(lVar21 + lVar26) = *(undefined8 *)((longlong)param_2 + lVar26);
          ((undefined8 *)(lVar21 + lVar26))[1] = uVar7;
          *(undefined8 *)(lVar21 + 0x40 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0x40);
          puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x30);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar21 + 0x30 + lVar26);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar21 + 0x70 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0x70);
          puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x60);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar21 + 0x60 + lVar26);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar21 + 0xb8 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0xb8);
          puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0xa8);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(lVar21 + 0xa8 + lVar26);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar21 + 0xe8 + lVar26) =
               *(undefined8 *)((longlong)param_2 + lVar26 + 0xe8);
          puVar3 = (undefined4 *)((longlong)param_2 + lVar26 + 0xd8);
          uVar27 = puVar3[1];
          uVar28 = puVar3[2];
          uVar29 = puVar3[3];
          puVar4 = (undefined4 *)(lVar21 + 0xd8 + lVar26);
          *puVar4 = *puVar3;
          puVar4[1] = uVar27;
          puVar4[2] = uVar28;
          puVar4[3] = uVar29;
          lVar26 = 1;
          bVar15 = false;
        } while (bVar19);
      }
      goto LAB_1404493ab;
    }
  }
  *(uint *)(param_1 + 0x4f8) = uVar16 + 1;
  param_1 = (longlong)(int)uVar16 * 0x138 + param_1;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2[9] + 8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)param_2[10];
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)param_2[9];
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2[0x10] + 8);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)param_2[0x11];
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)param_2[0x13];
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2[0x12] + 8);
  uVar7 = *(undefined8 *)param_2[0x12];
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2[0x11] + 8);
  *(undefined8 *)(param_1 + 0x138) = uVar7;
  if (10000.0 < *(double *)param_2[9] || *(double *)param_2[9] == 10000.0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar26 = 0;
  bVar15 = true;
  do {
    bVar19 = bVar15;
    lVar26 = lVar26 * 0x18;
    *(undefined8 *)(param_1 + 0x28 + lVar26) = *(undefined8 *)((longlong)param_2 + lVar26 + 0x10);
    uVar7 = ((undefined8 *)((longlong)param_2 + lVar26))[1];
    puVar1 = (undefined8 *)(param_1 + 0x18 + lVar26);
    *puVar1 = *(undefined8 *)((longlong)param_2 + lVar26);
    puVar1[1] = uVar7;
    *(undefined8 *)(param_1 + 0x58 + lVar26) = *(undefined8 *)((longlong)param_2 + lVar26 + 0x40);
    puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x30);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + 0x48 + lVar26);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(param_1 + 0x88 + lVar26) = *(undefined8 *)((longlong)param_2 + lVar26 + 0x70);
    puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0x60);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + 0x78 + lVar26);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(param_1 + 0xd0 + lVar26) = *(undefined8 *)((longlong)param_2 + lVar26 + 0xb8);
    puVar1 = (undefined8 *)((longlong)param_2 + lVar26 + 0xa8);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + 0xc0 + lVar26);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined8 *)(param_1 + 0x100 + lVar26) = *(undefined8 *)((longlong)param_2 + lVar26 + 0xe8);
    puVar3 = (undefined4 *)((longlong)param_2 + lVar26 + 0xd8);
    uVar27 = puVar3[1];
    uVar28 = puVar3[2];
    uVar29 = puVar3[3];
    puVar4 = (undefined4 *)(param_1 + 0xf0 + lVar26);
    *puVar4 = *puVar3;
    puVar4[1] = uVar27;
    puVar4[2] = uVar28;
    puVar4[3] = uVar29;
    lVar26 = 1;
    bVar15 = false;
  } while (bVar19);
LAB_1404493ab:
  if ((local_e0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140449758 FUN_140449758 body=6147 status=ok
// SIG undefined FUN_140449758(void)

undefined8 * FUN_140449758(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  code *pcVar8;
  code *pcVar9;
  ushort *puVar10;
  bool bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  double *pdVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  ushort uVar21;
  short sVar22;
  double *pdVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  double *pdVar30;
  int iVar31;
  ulonglong uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_208 [32];
  double *local_1e8;
  undefined8 *local_1d8;
  double *local_1d0;
  undefined8 *local_1c8;
  short local_1ba;
  undefined8 *local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158 [4];
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_108 [16];
  double local_f8;
  ulonglong local_f0;
  short sVar23;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puVar15 = param_2;
  puVar12 = param_1;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar12 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar12 = puVar12 + 1;
  }
  local_190 = param_1 + 0xc;
  puVar15 = param_2 + 0xc;
  puVar12 = local_190;
  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar12 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar12 = puVar12 + 1;
  }
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  pdVar30 = (double *)(param_1 + 0x1e);
  iVar31 = 0;
  param_1[0x49e] = 0;
  param_1[0x49f] = 0x8000000000;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0x8000000000;
  param_1[0x6e2] = 0;
  param_1[0x6e3] = 0x8000000000;
  uVar7 = *(ushort *)((longlong)param_2 + 0x274);
  local_1d0 = pdVar30;
  if (uVar7 == 0) {
    uVar25 = 0x80;
    pdVar14 = (double *)0x0;
  }
  else {
    uVar17 = 4;
    if (uVar7 < 4) {
      uVar17 = uVar7;
    }
    lVar18 = 0;
    local_1b8 = param_2;
    do {
      local_158[2] = *(double *)((longlong)param_2 + lVar18 + 0x1c0);
      pdVar14 = (double *)((longlong)param_2 + lVar18 + 0x1b0);
      local_158[0] = *pdVar14;
      local_158[1] = pdVar14[1];
      local_130 = *(undefined8 *)((longlong)param_2 + lVar18 + 0x100);
      puVar15 = (undefined8 *)((longlong)param_2 + lVar18 + 0xf0);
      local_158[3] = (double)*puVar15;
      uStack_138 = puVar15[1];
      local_118 = *(undefined8 *)((longlong)param_2 + lVar18 + 0x160);
      puVar1 = (undefined4 *)((longlong)param_2 + lVar18 + 0x150);
      local_128 = *puVar1;
      uStack_124 = puVar1[1];
      uStack_120 = puVar1[2];
      uStack_11c = puVar1[3];
      iVar31 = *(int *)(param_1 + 0x49f);
      *(uint *)(param_1 + 0x49f) = iVar31 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24fc) < iVar31 + 1U) {
        FUN_14711fabe(pdVar30,iVar31);
        pdVar30 = local_1d0;
      }
      pdVar14 = (double *)param_1[0x49e];
      if ((double *)param_1[0x49e] == (double *)0x0) {
        pdVar14 = pdVar30;
      }
      pdVar24 = local_158;
      pdVar14 = pdVar14 + (longlong)iVar31 * 9;
      for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar14 = *pdVar24;
        pdVar24 = pdVar24 + 1;
        pdVar14 = pdVar14 + 1;
      }
      lVar18 = lVar18 + 0x18;
    } while ((ulonglong)uVar17 * 0x18 != lVar18);
    pdVar14 = (double *)param_1[0x49e];
    iVar31 = *(int *)(param_1 + 0x6e3);
    uVar25 = *(uint *)((longlong)param_1 + 0x371c);
    param_2 = local_1b8;
  }
  if (pdVar14 == (double *)0x0) {
    pdVar14 = pdVar30;
  }
  dVar37 = pdVar14[0x14] - pdVar14[2];
  dVar38 = pdVar14[0x13] - pdVar14[1];
  dVar42 = pdVar14[0x12] - *pdVar14;
  dVar35 = pdVar14[0xb] - pdVar14[2];
  dVar34 = pdVar14[10] - pdVar14[1];
  dVar41 = pdVar14[9] - *pdVar14;
  dVar40 = (double)param_2[0x4b];
  dVar36 = (double)param_2[0x4c];
  dVar2 = (double)param_2[0x4d];
  dVar41 = (dVar41 * dVar38 - dVar42 * dVar34) * dVar2 +
           (dVar34 * dVar37 - dVar35 * dVar38) * dVar40 +
           (dVar35 * dVar42 - dVar37 * dVar41) * dVar36;
  puVar15 = param_1 + 0x4e2;
  *(uint *)(param_1 + 0x6e3) = iVar31 + 1U;
  if (uVar25 < iVar31 + 1U) {
    FUN_14711fa40(puVar15,iVar31);
    pdVar30 = local_1d0;
  }
  puVar12 = (undefined8 *)param_1[0x6e2];
  if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
    puVar12 = puVar15;
  }
  lVar18 = (longlong)iVar31;
  *(ushort *)(puVar12 + lVar18 * 4) = (ushort)(dVar41 <= 0.0);
  *(ushort *)((longlong)puVar12 + lVar18 * 0x20 + 2) = (ushort)(0.0 < dVar41);
  *(undefined2 *)((longlong)puVar12 + lVar18 * 0x20 + 4) = 2;
  puVar12[lVar18 * 4 + 1] = dVar40;
  puVar12[lVar18 * 4 + 2] = dVar36;
  puVar12[lVar18 * 4 + 3] = dVar2;
  pdVar14 = (double *)param_1[0x49e];
  if ((double *)param_1[0x49e] == (double *)0x0) {
    pdVar14 = pdVar30;
  }
  dVar34 = pdVar14[0x1d] - pdVar14[0x14];
  dVar37 = pdVar14[0x1c] - pdVar14[0x13];
  dVar38 = pdVar14[0x1b] - pdVar14[0x12];
  dVar42 = pdVar14[2] - pdVar14[0x14];
  dVar35 = pdVar14[1] - pdVar14[0x13];
  dVar41 = *pdVar14 - pdVar14[0x12];
  dVar40 = (double)param_2[0x45];
  dVar36 = (double)param_2[0x46];
  dVar2 = (double)param_2[0x47];
  dVar41 = (dVar41 * dVar37 - dVar38 * dVar35) * dVar2 +
           (dVar35 * dVar34 - dVar42 * dVar37) * dVar40 +
           (dVar42 * dVar38 - dVar34 * dVar41) * dVar36;
  iVar31 = *(int *)(param_1 + 0x6e3);
  lVar18 = (longlong)iVar31;
  *(uint *)(param_1 + 0x6e3) = iVar31 + 1U;
  if (*(uint *)((longlong)param_1 + 0x371c) < iVar31 + 1U) {
    FUN_14711fa40(puVar15,iVar31);
    pdVar30 = local_1d0;
  }
  puVar12 = (undefined8 *)param_1[0x6e2];
  if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
    puVar12 = puVar15;
  }
  *(ushort *)(puVar12 + lVar18 * 4) = (ushort)(0.0 < dVar41) * 2;
  *(ushort *)((longlong)puVar12 + lVar18 * 0x20 + 2) = (ushort)(dVar41 <= 0.0) * 2;
  *(undefined2 *)((longlong)puVar12 + lVar18 * 0x20 + 4) = 3;
  puVar12[lVar18 * 4 + 1] = dVar40;
  puVar12[lVar18 * 4 + 2] = dVar36;
  puVar12[lVar18 * 4 + 3] = dVar2;
  pdVar14 = (double *)param_1[0x49e];
  if ((double *)param_1[0x49e] == (double *)0x0) {
    pdVar14 = pdVar30;
  }
  dVar37 = pdVar14[0xb] - pdVar14[2];
  dVar38 = pdVar14[10] - pdVar14[1];
  dVar42 = pdVar14[9] - *pdVar14;
  dVar35 = pdVar14[0x1d] - pdVar14[2];
  dVar34 = pdVar14[0x1c] - pdVar14[1];
  dVar41 = pdVar14[0x1b] - *pdVar14;
  dVar40 = (double)param_2[0x48];
  dVar36 = (double)param_2[0x49];
  dVar2 = (double)param_2[0x4a];
  dVar41 = (dVar41 * dVar38 - dVar42 * dVar34) * dVar2 +
           (dVar34 * dVar37 - dVar35 * dVar38) * dVar40 +
           (dVar35 * dVar42 - dVar37 * dVar41) * dVar36;
  iVar31 = *(int *)(param_1 + 0x6e3);
  lVar18 = (longlong)iVar31;
  *(uint *)(param_1 + 0x6e3) = iVar31 + 1U;
  if (*(uint *)((longlong)param_1 + 0x371c) < iVar31 + 1U) {
    FUN_14711fa40(puVar15,iVar31);
    pdVar30 = local_1d0;
  }
  puVar12 = (undefined8 *)param_1[0x6e2];
  if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
    puVar12 = puVar15;
  }
  *(ushort *)(puVar12 + lVar18 * 4) = (ushort)(dVar41 <= 0.0) * 3;
  *(ushort *)((longlong)puVar12 + lVar18 * 0x20 + 2) = (ushort)(0.0 < dVar41) * 3;
  *(undefined2 *)((longlong)puVar12 + lVar18 * 0x20 + 4) = 1;
  puVar12[lVar18 * 4 + 1] = dVar40;
  puVar12[lVar18 * 4 + 2] = dVar36;
  puVar12[lVar18 * 4 + 3] = dVar2;
  pdVar14 = (double *)param_1[0x49e];
  if ((double *)param_1[0x49e] == (double *)0x0) {
    pdVar14 = pdVar30;
  }
  dVar40 = pdVar14[0x1d];
  dVar36 = pdVar14[0xb];
  dVar2 = pdVar14[0x1c];
  dVar41 = pdVar14[9];
  dVar42 = pdVar14[10];
  dVar35 = pdVar14[0x1b];
  dVar34 = pdVar14[0x14];
  dVar37 = pdVar14[0x13];
  dVar38 = pdVar14[0x12];
  puVar12 = (undefined8 *)param_2[0x42];
  dVar39 = (double)param_2[0x43];
  dVar3 = (double)param_2[0x44];
  iVar31 = *(int *)(param_1 + 0x6e3);
  lVar18 = (longlong)iVar31;
  *(uint *)(param_1 + 0x6e3) = iVar31 + 1U;
  if (*(uint *)((longlong)param_1 + 0x371c) < iVar31 + 1U) {
    local_1b8 = puVar12;
    local_1b0 = dVar39;
    FUN_14711fa40(puVar15,iVar31);
    pdVar30 = local_1d0;
    puVar12 = local_1b8;
    dVar39 = local_1b0;
  }
  dVar38 = dVar38 - dVar41;
  dVar2 = dVar2 - dVar42;
  dVar35 = dVar35 - dVar41;
  dVar37 = dVar37 - dVar42;
  dVar40 = dVar40 - dVar36;
  dVar34 = dVar34 - dVar36;
  bVar11 = 0.0 < (dVar38 * dVar2 - dVar35 * dVar37) * dVar3 +
                 (dVar37 * dVar40 - dVar2 * dVar34) * (double)puVar12 +
                 (dVar34 * dVar35 - dVar40 * dVar38) * dVar39;
  puVar16 = (undefined8 *)param_1[0x6e2];
  if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
    puVar16 = puVar15;
  }
  *(ushort *)(puVar16 + lVar18 * 4) = 2 - (ushort)bVar11;
  *(ushort *)((longlong)puVar16 + lVar18 * 0x20 + 2) = bVar11 + 1;
  *(undefined2 *)((longlong)puVar16 + lVar18 * 0x20 + 4) = 3;
  puVar16[lVar18 * 4 + 1] = puVar12;
  puVar16[lVar18 * 4 + 2] = dVar39;
  puVar16[lVar18 * 4 + 3] = dVar3;
  local_1d8 = param_1 + 0x4a0;
  sVar22 = 0x7f;
  local_1c8 = puVar15;
  do {
    puVar12 = (undefined8 *)param_1[0x6e2];
    if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
      puVar12 = puVar15;
    }
    puVar16 = puVar12;
    if (0 < (int)*(uint *)(param_1 + 0x6e3)) {
      pdVar14 = (double *)param_1[0x49e];
      if ((double *)param_1[0x49e] == (double *)0x0) {
        pdVar14 = pdVar30;
      }
      uVar25 = 1;
      dVar40 = 3.4028234663852886e+38;
      do {
        uVar32 = (ulonglong)((uVar25 - 1 & 0xffff) << 5);
        uVar29 = (ulonglong)*(ushort *)((longlong)puVar12 + uVar32);
        dVar36 = *(double *)((longlong)puVar12 + uVar32 + 8);
        dVar2 = *(double *)((longlong)puVar12 + uVar32 + 0x10);
        dVar41 = pdVar14[uVar29 * 9];
        dVar42 = pdVar14[uVar29 * 9 + 1];
        dVar35 = *(double *)((longlong)puVar12 + uVar32 + 0x18);
        dVar34 = pdVar14[uVar29 * 9 + 2];
        dVar37 = dVar35 * dVar34 + dVar36 * dVar41 + dVar2 * dVar42;
        if (dVar37 < dVar40) {
          uStack_1a0 = 0;
          puVar28 = (undefined8 *)(uVar32 + (longlong)puVar12);
          local_1b8 = (undefined8 *)(dVar35 * dVar37);
          local_1b0 = dVar2 * dVar37;
          uVar32 = (ulonglong)*(ushort *)((longlong)puVar28 + 2);
          local_168 = pdVar14[uVar32 * 9 + 2];
          local_160 = pdVar14[uVar32 * 9];
          local_170 = pdVar14[uVar32 * 9 + 1];
          dVar38 = dVar36 * dVar37;
          local_1a8 = dVar40;
          if ((dVar38 - dVar41) * ((local_170 - dVar42) * dVar35 - dVar2 * (local_168 - dVar34)) +
              (local_1b0 - dVar42) * ((local_168 - dVar34) * dVar36 - dVar35 * (local_160 - dVar41))
              + ((double)local_1b8 - dVar34) *
                ((local_160 - dVar41) * dVar2 - dVar36 * (local_170 - dVar42)) <=
              0.0010000000474974513) {
            uVar32 = (ulonglong)*(ushort *)((longlong)puVar28 + 4);
            local_180 = pdVar14[uVar32 * 9 + 2];
            local_178 = pdVar14[uVar32 * 9];
            local_188 = pdVar14[uVar32 * 9 + 1];
            if (((dVar38 - local_160) *
                 ((local_188 - local_170) * dVar35 - dVar2 * (local_180 - local_168)) +
                 (local_1b0 - local_170) *
                 ((local_180 - local_168) * dVar36 - dVar35 * (local_178 - local_160)) +
                 ((double)local_1b8 - local_168) *
                 ((local_178 - local_160) * dVar2 - dVar36 * (local_188 - local_170)) <=
                 0.0010000000474974513) &&
               (dVar36 = (dVar38 - local_178) *
                         ((dVar42 - local_188) * dVar35 - (dVar34 - local_180) * dVar2) +
                         (local_1b0 - local_188) *
                         ((dVar34 - local_180) * dVar36 - dVar35 * (dVar41 - local_178)) +
                         ((double)local_1b8 - local_180) *
                         ((dVar41 - local_178) * dVar2 - dVar36 * (dVar42 - local_188)),
               uVar32 = -(ulonglong)(0.0010000000474974513 < dVar36),
               dVar40 = (double)((ulonglong)dVar40 & uVar32 | ~uVar32 & (ulonglong)dVar37),
               uStack_1a0 = 0, dVar36 <= 0.0010000000474974513)) {
              puVar16 = puVar28;
            }
          }
        }
        uVar27 = uVar25 & 0xffff;
        uVar25 = uVar25 + 1;
      } while (uVar27 < *(uint *)(param_1 + 0x6e3));
    }
    param_1[0x6e4] = puVar16;
    pdVar14 = (double *)param_1[0x1b];
    lVar18 = param_1[0x18];
    lVar19 = param_1[0x19];
    pcVar8 = (code *)param_1[0x1d];
    pdVar24 = (double *)param_1[0x1a];
    pcVar9 = (code *)param_1[0x1c];
    local_1ba = sVar22;
    if (pcVar9 == FUN_1471053b7) {
      dVar40 = (double)puVar16[1];
      dVar36 = (double)puVar16[2];
      dVar2 = (double)puVar16[3];
      uVar33 = 0;
      uVar25 = 0;
      if (dVar2 * *(double *)(lVar18 + 0x70) +
          dVar40 * *(double *)(lVar18 + 0x60) + dVar36 * *(double *)(lVar18 + 0x68) <= 0.0) {
        uVar25 = (uint)((ulonglong)*(undefined8 *)(lVar18 + 0x90) >> 0x20) ^ 0x80000000;
        uVar33 = (undefined4)*(undefined8 *)(lVar18 + 0x90);
      }
      dVar41 = pdVar24[2] * dVar2 + *pdVar24 * dVar40 + pdVar24[1] * dVar36;
      dVar36 = dVar2 * pdVar24[5] + dVar40 * pdVar24[3] + dVar36 * pdVar24[4];
      dVar40 = dVar36;
      if (dVar36 <= dVar41) {
        dVar40 = dVar41;
      }
      lVar13 = (ulonglong)(dVar36 <= dVar41) + 1;
      if (dVar40 < 0.0) {
        lVar13 = 0;
      }
      dVar40 = *(double *)(lVar18 + 0x70) * (double)CONCAT44(uVar25,uVar33) +
               *(double *)(lVar18 + 0x28 + lVar13 * 0x18);
      dVar36 = *(double *)(lVar18 + 0x60) * (double)CONCAT44(uVar25,uVar33) +
               *(double *)(lVar18 + 0x18 + lVar13 * 0x18);
      dVar2 = *(double *)(lVar18 + 0x68) * (double)CONCAT44(uVar25,uVar33) +
              *(double *)(lVar18 + 0x20 + lVar13 * 0x18);
    }
    else if (pcVar9 == (code *)&LAB_1471052f9) {
      if ((longlong)*(int *)(lVar18 + 0x18) < 1) {
        lVar18 = -1;
      }
      else {
        pdVar20 = pdVar24 + 2;
        uVar32 = 0xffffffff;
        uVar29 = 0;
        dVar40 = -1.79769313486232e+308;
        do {
          dVar36 = *pdVar20 * (double)puVar16[3] +
                   pdVar20[-2] * (double)puVar16[1] + pdVar20[-1] * (double)puVar16[2];
          if (dVar40 < dVar36) {
            uVar32 = uVar29 & 0xffffffff;
            dVar40 = dVar36;
          }
          uVar29 = uVar29 + 1;
          pdVar20 = pdVar20 + 3;
        } while ((longlong)*(int *)(lVar18 + 0x18) != uVar29);
        lVar18 = (longlong)(int)uVar32;
      }
      dVar40 = (double)param_1[6] + pdVar24[lVar18 * 3 + 2];
      dVar36 = (double)param_1[4] + pdVar24[lVar18 * 3];
      dVar2 = (double)param_1[5] + pdVar24[lVar18 * 3 + 1];
    }
    else if (pcVar9 == (code *)&LAB_142b5f570) {
      pdVar20 = pdVar24 + 2;
      uVar32 = 0xffffffff;
      uVar29 = 0;
      dVar40 = -1.79769313486232e+308;
      do {
        dVar36 = *pdVar20 * (double)puVar16[3] +
                 pdVar20[-2] * (double)puVar16[1] + pdVar20[-1] * (double)puVar16[2];
        if (dVar40 < dVar36) {
          uVar32 = uVar29 & 0xffffffff;
          dVar40 = dVar36;
        }
        uVar29 = uVar29 + 1;
        pdVar20 = pdVar20 + 3;
      } while (uVar29 != 8);
      lVar18 = (longlong)(int)uVar32;
      dVar40 = (double)param_1[6] + pdVar24[lVar18 * 3 + 2];
      dVar36 = (double)param_1[4] + pdVar24[lVar18 * 3];
      dVar2 = (double)param_1[5] + pdVar24[lVar18 * 3 + 1];
    }
    else {
      local_1e8 = pdVar24;
      (*pcVar9)(local_158,param_1);
      pdVar30 = local_1d0;
      dVar40 = local_158[2];
      dVar36 = local_158[0];
      dVar2 = local_158[1];
    }
    local_f8 = -(double)puVar16[3];
    dVar41 = (double)puVar16[2];
    dVar42 = -(double)puVar16[1];
    local_108._8_4_ = SUB84(dVar41,0);
    local_108._0_8_ = dVar42;
    local_108._12_4_ = (int)((ulonglong)-dVar41 >> 0x20);
    if (pcVar8 == FUN_14710519c) {
      uVar32 = (ulonglong)(local_f8 * pdVar14[2] + dVar42 * *pdVar14 + -dVar41 * pdVar14[1] <= 0.0);
      dVar35 = *(double *)(lVar19 + 0x40);
      dVar42 = ((double)param_1[0x12] + pdVar14[uVar32 * 3 + 2]) - (double)puVar16[3] * dVar35;
      dVar41 = ((double)param_1[0x11] + pdVar14[uVar32 * 3 + 1]) - dVar41 * dVar35;
      dVar35 = ((double)param_1[0x10] + pdVar14[uVar32 * 3]) - (double)puVar16[1] * dVar35;
    }
    else {
      local_1e8 = pdVar14;
      (*pcVar8)(local_158,local_190,lVar19);
      pdVar30 = local_1d0;
      dVar42 = local_158[2];
      dVar41 = local_158[1];
      dVar35 = local_158[0];
    }
    puVar10 = (ushort *)param_1[0x6e4];
    uVar32 = (ulonglong)*puVar10;
    pdVar14 = (double *)param_1[0x49e];
    pdVar24 = pdVar14;
    if (pdVar14 == (double *)0x0) {
      pdVar24 = pdVar30;
    }
    if (((dVar40 - dVar42) - pdVar24[uVar32 * 9 + 2]) * *(double *)(puVar10 + 0xc) +
        ((dVar36 - dVar35) - pdVar24[uVar32 * 9]) * *(double *)(puVar10 + 4) +
        ((dVar2 - dVar41) - pdVar24[uVar32 * 9 + 1]) * *(double *)(puVar10 + 8) <
        0.10000000149011612) break;
    iVar31 = *(int *)(param_1 + 0x49f);
    lVar18 = (longlong)iVar31;
    *(uint *)(param_1 + 0x49f) = iVar31 + 1U;
    if (*(uint *)((longlong)param_1 + 0x24fc) < iVar31 + 1U) {
      FUN_14711fabe(pdVar30,iVar31);
      pdVar14 = (double *)param_1[0x49e];
      pdVar30 = local_1d0;
    }
    if (pdVar14 == (double *)0x0) {
      pdVar14 = pdVar30;
    }
    pdVar14[lVar18 * 9] = dVar36 - dVar35;
    pdVar14[lVar18 * 9 + 1] = dVar2 - dVar41;
    pdVar14[lVar18 * 9 + 2] = dVar40 - dVar42;
    pdVar14[lVar18 * 9 + 3] = dVar36;
    pdVar14[lVar18 * 9 + 4] = dVar2;
    pdVar14[lVar18 * 9 + 5] = dVar40;
    pdVar14[lVar18 * 9 + 6] = dVar35;
    pdVar14[lVar18 * 9 + 7] = dVar41;
    pdVar14[lVar18 * 9 + 8] = dVar42;
    pdVar14 = (double *)param_1[0x49e];
    if ((double *)param_1[0x49e] == (double *)0x0) {
      pdVar14 = pdVar30;
    }
    pdVar14 = pdVar14 + (longlong)(*(int *)(param_1 + 0x49f) + -1) * 9;
    puVar12 = (undefined8 *)param_1[0x6e4];
    local_1b8 = (undefined8 *)*puVar12;
    uVar4 = puVar12[1];
    uVar5 = puVar12[2];
    uVar6 = puVar12[3];
    iVar31 = *(int *)(param_1 + 0x6e3);
    puVar12 = local_1d8;
    if (0 < iVar31) {
      uVar25 = 0;
      do {
        puVar16 = (undefined8 *)param_1[0x6e2];
        if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
          puVar16 = puVar15;
        }
        uVar27 = uVar25 & 0xffff;
        uVar32 = (ulonglong)(uVar27 << 5);
        uVar7 = *(ushort *)((longlong)puVar16 + uVar32);
        uVar29 = (ulonglong)uVar7;
        pdVar24 = (double *)param_1[0x49e];
        if ((double *)param_1[0x49e] == (double *)0x0) {
          pdVar24 = pdVar30;
        }
        if (-9.99999993922529e-09 <
            (pdVar14[2] - pdVar24[uVar29 * 9 + 2]) * *(double *)((longlong)puVar16 + uVar32 + 0x18)
            + (*pdVar14 - pdVar24[uVar29 * 9]) * *(double *)((longlong)puVar16 + uVar32 + 8) +
              (pdVar14[1] - pdVar24[uVar29 * 9 + 1]) *
              *(double *)((longlong)puVar16 + uVar32 + 0x10)) {
          uVar17 = *(ushort *)((longlong)puVar16 + uVar32 + 2);
          puVar15 = (undefined8 *)param_1[0x4e0];
          puVar16 = puVar15;
          if (puVar15 == (undefined8 *)0x0) {
            puVar16 = puVar12;
          }
          iVar31 = *(int *)(param_1 + 0x4e1);
          lVar18 = (longlong)iVar31;
          if (lVar18 != 0) {
            iVar26 = 1;
            lVar13 = 0;
            lVar19 = 0;
            do {
              if (((*(ushort *)((longlong)puVar16 + lVar13) == uVar7) &&
                  (*(ushort *)((longlong)puVar16 + lVar13 + 2) == uVar17)) ||
                 ((*(ushort *)((longlong)puVar16 + lVar13) == uVar17 &&
                  (*(ushort *)((longlong)puVar16 + lVar13 + 2) == uVar7)))) {
                if (iVar26 != 0) {
                  iVar26 = iVar31 - iVar26;
                  if (iVar26 != 0) {
                    if (0 < iVar26) {
                      iVar26 = 1;
                    }
                    memmove((void *)((longlong)puVar16 + (lVar19 >> 0x20) * 4),
                            (void *)((longlong)puVar16 + (longlong)(iVar31 - iVar26) * 4),
                            (longlong)iVar26 << 2);
                    iVar31 = *(int *)(param_1 + 0x4e1);
                  }
                  iVar31 = iVar31 + -1;
                  *(int *)(param_1 + 0x4e1) = iVar31;
                  goto LAB_14044a677;
                }
                break;
              }
              lVar19 = lVar19 + 0x100000000;
              iVar26 = iVar26 + 1;
              lVar13 = lVar13 + 4;
            } while (lVar18 * 4 - lVar13 != 0);
          }
          *(uint *)(param_1 + 0x4e1) = iVar31 + 1U;
          if (*(uint *)((longlong)param_1 + 0x270c) < iVar31 + 1U) {
            FUN_14711f932(local_1d8,iVar31);
            puVar15 = (undefined8 *)param_1[0x4e0];
          }
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = local_1d8;
          }
          *(uint *)((longlong)puVar15 + lVar18 * 4) = CONCAT22(uVar17,uVar7);
          iVar31 = *(int *)(param_1 + 0x4e1);
LAB_14044a677:
          puVar15 = (undefined8 *)param_1[0x6e2];
          if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
            puVar15 = local_1c8;
          }
          sVar22 = *(short *)((longlong)puVar15 + (ulonglong)(uVar27 << 5) + 4);
          sVar23 = *(short *)((longlong)puVar15 + (ulonglong)(uVar27 << 5) + 2);
          puVar15 = (undefined8 *)param_1[0x4e0];
          puVar12 = puVar15;
          if (puVar15 == (undefined8 *)0x0) {
            puVar12 = local_1d8;
          }
          if (iVar31 != 0) {
            iVar26 = 1;
            lVar19 = 0;
            lVar18 = 0;
            do {
              if (((*(short *)((longlong)puVar12 + lVar19) == sVar23) &&
                  (*(short *)((longlong)puVar12 + lVar19 + 2) == sVar22)) ||
                 ((*(short *)((longlong)puVar12 + lVar19) == sVar22 &&
                  (*(short *)((longlong)puVar12 + lVar19 + 2) == sVar23)))) {
                if (iVar26 != 0) {
                  iVar26 = iVar31 - iVar26;
                  if (iVar26 != 0) {
                    if (0 < iVar26) {
                      iVar26 = 1;
                    }
                    memmove((void *)((longlong)puVar12 + (lVar18 >> 0x20) * 4),
                            (void *)((longlong)puVar12 + (longlong)(iVar31 - iVar26) * 4),
                            (longlong)iVar26 << 2);
                    iVar31 = *(int *)(param_1 + 0x4e1);
                  }
                  iVar31 = iVar31 + -1;
                  *(int *)(param_1 + 0x4e1) = iVar31;
                  goto LAB_14044a78b;
                }
                break;
              }
              lVar18 = lVar18 + 0x100000000;
              iVar26 = iVar26 + 1;
              lVar19 = lVar19 + 4;
            } while ((longlong)iVar31 * 4 - lVar19 != 0);
          }
          *(uint *)(param_1 + 0x4e1) = iVar31 + 1U;
          if (*(uint *)((longlong)param_1 + 0x270c) < iVar31 + 1U) {
            FUN_14711f932(local_1d8,iVar31);
            puVar15 = (undefined8 *)param_1[0x4e0];
          }
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = local_1d8;
          }
          *(uint *)((longlong)puVar15 + (longlong)iVar31 * 4) = CONCAT22(sVar22,sVar23);
          iVar31 = *(int *)(param_1 + 0x4e1);
LAB_14044a78b:
          puVar15 = (undefined8 *)param_1[0x6e2];
          if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
            puVar15 = local_1c8;
          }
          sVar22 = *(short *)((longlong)puVar15 + (ulonglong)(uVar27 << 5));
          sVar23 = *(short *)((longlong)puVar15 + (ulonglong)(uVar27 << 5) + 4);
          puVar15 = (undefined8 *)param_1[0x4e0];
          puVar12 = puVar15;
          if (puVar15 == (undefined8 *)0x0) {
            puVar12 = local_1d8;
          }
          if (iVar31 != 0) {
            iVar26 = 1;
            lVar19 = 0;
            lVar18 = 0;
            do {
              if (((*(short *)((longlong)puVar12 + lVar19) == sVar23) &&
                  (*(short *)((longlong)puVar12 + lVar19 + 2) == sVar22)) ||
                 ((*(short *)((longlong)puVar12 + lVar19) == sVar22 &&
                  (*(short *)((longlong)puVar12 + lVar19 + 2) == sVar23)))) {
                if (iVar26 != 0) {
                  iVar26 = iVar31 - iVar26;
                  if (iVar26 != 0) {
                    if (0 < iVar26) {
                      iVar26 = 1;
                    }
                    memmove((void *)((longlong)puVar12 + (lVar18 >> 0x20) * 4),
                            (void *)((longlong)puVar12 + (longlong)(iVar31 - iVar26) * 4),
                            (longlong)iVar26 << 2);
                    iVar31 = *(int *)(param_1 + 0x4e1);
                  }
                  *(int *)(param_1 + 0x4e1) = iVar31 + -1;
                  goto LAB_14044a88f;
                }
                break;
              }
              lVar18 = lVar18 + 0x100000000;
              iVar26 = iVar26 + 1;
              lVar19 = lVar19 + 4;
            } while ((longlong)iVar31 * 4 - lVar19 != 0);
          }
          *(uint *)(param_1 + 0x4e1) = iVar31 + 1U;
          if (*(uint *)((longlong)param_1 + 0x270c) < iVar31 + 1U) {
            FUN_14711f932(local_1d8,iVar31);
            puVar15 = (undefined8 *)param_1[0x4e0];
          }
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = local_1d8;
          }
          *(uint *)((longlong)puVar15 + (longlong)iVar31 * 4) = CONCAT22(sVar22,sVar23);
LAB_14044a88f:
          puVar15 = local_1c8;
          iVar31 = *(int *)(param_1 + 0x6e3);
          iVar26 = ~uVar27 + iVar31;
          if (iVar26 != 0) {
            if (0 < iVar26) {
              iVar26 = 1;
            }
            puVar12 = (undefined8 *)param_1[0x6e2];
            if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
              puVar12 = local_1c8;
            }
            memmove((void *)((ulonglong)(uVar27 << 5) + (longlong)puVar12),
                    puVar12 + (longlong)(iVar31 - iVar26) * 4,(longlong)iVar26 << 5);
            iVar31 = *(int *)(param_1 + 0x6e3);
          }
          *(int *)(param_1 + 0x6e3) = iVar31 + -1;
          FUN_144b0d2b4(puVar15);
          uVar25 = uVar25 - 1;
          iVar31 = *(int *)(param_1 + 0x6e3);
          puVar12 = local_1d8;
          pdVar30 = local_1d0;
        }
        uVar25 = uVar25 + 1;
      } while ((int)(uVar25 & 0xffff) < iVar31);
    }
    if (iVar31 == 0) {
      *(undefined4 *)(param_1 + 0x6e3) = 1;
      if (*(int *)((longlong)param_1 + 0x371c) == 0) {
        FUN_14711fa40(local_1c8,0);
      }
      puVar15 = (undefined8 *)param_1[0x6e2];
      if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
        puVar15 = local_1c8;
      }
      *puVar15 = local_1b8;
      puVar15[1] = uVar4;
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      pdVar30 = local_1d0;
      puVar15 = local_1c8;
      sVar23 = local_1ba;
    }
    else {
      iVar31 = *(int *)(param_1 + 0x4e1);
      if (0 < iVar31) {
        uVar25 = 1;
        do {
          puVar16 = (undefined8 *)param_1[0x4e0];
          if ((undefined8 *)param_1[0x4e0] == (undefined8 *)0x0) {
            puVar16 = puVar12;
          }
          uVar29 = (ulonglong)(uVar25 - 1 & 0xffff);
          uVar7 = *(ushort *)((longlong)puVar16 + uVar29 * 4);
          uVar32 = (ulonglong)uVar7;
          pdVar24 = (double *)param_1[0x49e];
          if ((double *)param_1[0x49e] == (double *)0x0) {
            pdVar24 = pdVar30;
          }
          dVar42 = pdVar14[2] - pdVar24[uVar32 * 9 + 2];
          dVar35 = pdVar14[1] - pdVar24[uVar32 * 9 + 1];
          dVar34 = *pdVar14 - pdVar24[uVar32 * 9];
          uVar17 = *(ushort *)((longlong)puVar16 + uVar29 * 4 + 2);
          uVar29 = (ulonglong)uVar17;
          dVar40 = pdVar24[uVar29 * 9 + 2] - pdVar24[uVar32 * 9 + 2];
          dVar36 = pdVar24[uVar29 * 9 + 1] - pdVar24[uVar32 * 9 + 1];
          dVar2 = pdVar24[uVar29 * 9] - pdVar24[uVar32 * 9];
          dVar41 = dVar2 * dVar35 - dVar34 * dVar36;
          dVar2 = dVar40 * dVar34 - dVar42 * dVar2;
          dVar40 = dVar36 * dVar42 - dVar40 * dVar35;
          dVar36 = dVar41 * dVar41 + dVar40 * dVar40 + dVar2 * dVar2;
          if (9.99999993922529e-09 < dVar36) {
            dVar36 = 1.0 / SQRT(dVar36);
            dVar40 = dVar40 * dVar36;
            dVar2 = dVar2 * dVar36;
            dVar41 = dVar41 * dVar36;
          }
          if (pdVar24[uVar29 * 9 + 2] * dVar41 +
              pdVar24[uVar29 * 9] * dVar40 + pdVar24[uVar29 * 9 + 1] * dVar2 <= 0.0) {
            dVar41 = -dVar41;
            dVar2 = -dVar2;
            dVar40 = -dVar40;
            sVar22 = (short)*(undefined4 *)(param_1 + 0x49f);
            iVar31 = *(int *)(param_1 + 0x6e3);
            uVar27 = iVar31 + 1;
            *(uint *)(param_1 + 0x6e3) = uVar27;
            uVar21 = uVar7;
          }
          else {
            sVar22 = (short)*(undefined4 *)(param_1 + 0x49f);
            iVar31 = *(int *)(param_1 + 0x6e3);
            uVar27 = iVar31 + 1;
            *(uint *)(param_1 + 0x6e3) = uVar27;
            uVar21 = uVar17;
            uVar17 = uVar7;
          }
          if (*(uint *)((longlong)param_1 + 0x371c) < uVar27) {
            FUN_14711fa40(puVar15,iVar31);
            puVar12 = local_1d8;
            pdVar30 = local_1d0;
          }
          puVar16 = (undefined8 *)param_1[0x6e2];
          if ((undefined8 *)param_1[0x6e2] == (undefined8 *)0x0) {
            puVar16 = puVar15;
          }
          lVar18 = (longlong)iVar31;
          *(ushort *)(puVar16 + lVar18 * 4) = uVar17;
          *(ushort *)((longlong)puVar16 + lVar18 * 0x20 + 2) = uVar21;
          *(short *)((longlong)puVar16 + lVar18 * 0x20 + 4) = sVar22 + -1;
          puVar16[lVar18 * 4 + 1] = dVar40;
          puVar16[lVar18 * 4 + 2] = dVar2;
          puVar16[lVar18 * 4 + 3] = dVar41;
          uVar27 = uVar25 & 0xffff;
          iVar31 = *(int *)(param_1 + 0x4e1);
          uVar25 = uVar25 + 1;
        } while ((int)uVar27 < iVar31);
      }
      sVar23 = local_1ba;
      if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar31);
      }
      *(undefined4 *)(param_1 + 0x4e1) = 0;
      if (*(int *)((longlong)param_1 + 0x270c) != iVar31) {
        FUN_144b0d356(puVar12);
        pdVar30 = local_1d0;
      }
    }
    sVar22 = sVar23 + -1;
  } while (sVar23 != 0);
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14044af5e FUN_14044af5e body=529 status=ok
// SIG undefined FUN_14044af5e(void)

undefined4 *
FUN_14044af5e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 auStack_5e8 [9];
  undefined *puStack_5a0;
  undefined1 auStack_598 [32];
  undefined8 local_578;
  undefined8 local_570;
  undefined8 *local_568;
  undefined8 auStack_560 [160];
  undefined4 local_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_598;
  puStack_5a0 = (undefined *)0x14044afa2;
  FUN_140853256(param_1,&local_570);
  lVar5 = 0x130;
  do {
    *(undefined8 *)((longlong)auStack_5e8 + lVar5) = 0;
    *(undefined8 *)((longlong)auStack_5e8 + lVar5 + 8) = 0;
    *(undefined8 *)((longlong)auStack_5e8 + lVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)&local_570 + lVar5) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)auStack_560 + lVar5 + -8) = 0xffffffff;
    *(undefined8 *)((longlong)auStack_560 + lVar5) = 0;
    *(undefined8 *)((longlong)auStack_560 + lVar5 + 8) = 0;
    *(undefined8 *)((longlong)auStack_560 + lVar5 + 0x10) = 0;
    *(undefined8 *)((longlong)auStack_560 + lVar5 + 0x18) = 0;
    lVar5 = lVar5 + 0x138;
  } while (lVar5 != 0x610);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = ((undefined8 *)*param_4)[1];
  *local_568 = *(undefined8 *)*param_4;
  local_568[1] = uVar2;
  *(undefined1 *)(local_568 + 3) = 0;
  local_568[4] = 0;
  local_568[2] = &PTR_LAB_14a1e1920;
  lVar5 = 0x140;
  do {
    puVar1 = (undefined8 *)((longlong)local_568 + lVar5 + -0x88);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)local_568 + lVar5 + -0x78) = 0;
    *(undefined8 *)((longlong)local_568 + lVar5 + -0x10) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)local_568 + lVar5 + -8) = 0xffffffff;
    *(undefined8 *)((longlong)local_568 + lVar5) = 0;
    ((undefined8 *)((longlong)local_568 + lVar5))[1] = 0;
    puVar1 = (undefined8 *)((longlong)local_568 + lVar5 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar5 = lVar5 + 0x138;
  } while (lVar5 != 0x620);
  local_568[0xa1] = 0;
  local_568[0xa2] = (ulonglong)uStack_5c << 0x20;
  local_568[0xa3] = 0;
  *(undefined4 *)(local_568 + 0xa4) = 0;
  *(undefined4 *)((longlong)local_568 + 0x524) = uStack_4c;
  *(undefined4 *)(local_568 + 0xa5) = 0;
  *(undefined4 *)((longlong)local_568 + 0x52c) = 0;
  *(undefined4 *)(local_568 + 0xa6) = 0xffffffff;
  local_578 = param_5;
  puStack_5a0 = (undefined *)0x14044b0a8;
  cVar3 = FUN_1408530d0(param_1,param_3,local_568);
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_568 + 0x534) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_568 + 0xa6) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           (undefined4)local_570;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      puStack_5a0 = (undefined *)0x14044b16e;
      FUN_14044c6bc(param_1);
    }
  }
  *param_2 = (undefined4)local_570;
  if ((local_40 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  puStack_5a0 = &UNK_14044b158;
  FUN_144d8e3a0();
}



// FUNCTION 14044b170 FUN_14044b170 body=3555 status=ok
// SIG undefined FUN_14044b170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044b170(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined1 *puVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar55;
  undefined1 auVar54 [16];
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  double dVar59;
  undefined1 local_388 [8];
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
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
  double local_178;
  double local_170;
  double local_168;
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
  double dVar3;
  
  auVar54 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)local_308;
  dVar59 = *(double *)(param_4 + 0x40);
  dVar4 = *(double *)(param_4 + 0x48);
  dVar47 = *(double *)(param_4 + 0x50);
  dVar51 = *(double *)(param_4 + 0x58);
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  auVar35 = *(undefined1 (*) [16])(param_3 + 8);
  dVar28 = auVar35._0_8_;
  dVar33 = auVar35._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_3 + 10);
  dVar55 = auVar5._0_8_;
  dVar53 = (double)DAT_149934d80;
  dVar58 = DAT_149934d80._8_8_;
  auVar44 = minpd(_DAT_149934d80,auVar35);
  auVar48 = minpd(ZEXT816(0x3ff0000000000000),auVar5);
  auVar40._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
  iVar20 = movmskpd((int)local_f0,auVar40);
  auVar44._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
  auVar44._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
  uVar22 = movmskpd((int)param_1,auVar44);
  if ((uVar22 & 0x3fffffff) == 0 && iVar20 == 0) {
    dVar9 = *param_3;
    dVar10 = param_3[1];
    dVar29 = param_3[3];
    dVar46 = param_3[3];
    dVar52 = param_3[1];
    dVar50 = param_3[1];
    dVar11 = param_3[2];
    dVar12 = param_3[3];
    dVar2 = param_3[2];
    dVar3 = param_3[2];
    dVar7 = dVar59 * dVar3 * 1.0 + dVar51 * dVar50 + dVar47 * *param_3 * -1.0 + dVar4 * dVar46;
    dVar28 = *(double *)(param_4 + 0x20) * dVar28;
    dVar33 = *(double *)(param_4 + 0x28) * dVar33;
    dVar34 = *(double *)(param_4 + 0x30) * dVar55;
    dVar36 = auVar5._8_8_ * 0.0;
    dVar37 = dVar33 * dVar9 - dVar28 * dVar10;
    dVar38 = dVar34 * dVar10 - dVar33 * dVar11;
    dVar39 = dVar28 * dVar11 - dVar34 * dVar9;
    dVar49 = dVar36 * dVar12 - dVar36 * dVar12;
    dVar38 = dVar38 + dVar38;
    dVar39 = dVar39 + dVar39;
    dVar37 = dVar37 + dVar37;
    dVar49 = dVar49 + dVar49;
    local_2d8 = (dVar37 * dVar10 - dVar11 * dVar39) + dVar29 * dVar38 + dVar28 + param_3[4];
    dStack_2d0 = (dVar38 * dVar11 - dVar37 * dVar9) + dVar46 * dVar39 + dVar33 + param_3[5];
    local_2c8 = (dVar39 * dVar9 - dVar10 * dVar38) + dVar29 * dVar37 + dVar34 + param_3[6];
    dStack_2c0 = (dVar49 * dVar12 - dVar49 * dVar12) + dVar46 * dVar49 + dVar36 + param_3[7];
    local_2f8._8_4_ = SUB84(dVar7,0);
    local_2f8._0_8_ =
         dVar4 * dVar2 * -1.0 + dVar47 * dVar52 + dVar51 * *param_3 * 1.0 + dVar59 * dVar29;
    local_2f8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_2e8._8_8_ =
         dVar47 * dVar3 * -1.0 + ((*param_3 * dVar59 * -1.0 + dVar51 * dVar46) - dVar4 * dVar50);
    local_2e8._0_8_ =
         dVar51 * dVar2 * 1.0 + ((*param_3 * dVar4 * 1.0 + dVar47 * dVar29) - dVar59 * dVar52);
    uVar23 = 0;
  }
  else {
    dVar7 = *param_3;
    dVar37 = param_3[1];
    dVar46 = param_3[2];
    dVar49 = dVar37 + dVar37;
    dVar29 = dVar46 + dVar46;
    dVar3 = dVar7 * (dVar7 + dVar7);
    local_1f8 = (dVar53 - (dVar46 * dVar29 + dVar37 * dVar49)) * dVar28;
    dVar2 = (dVar58 - (dVar46 * dVar29 + dVar3)) * dVar33;
    dVar46 = param_3[3];
    dVar52 = dVar29 * dVar46;
    dVar50 = (dVar7 + dVar7) * param_3[3];
    dVar46 = dVar49 * dVar46;
    dStack_1b0 = (dVar29 * dVar37 - dVar50) * dVar55;
    local_1b8 = (dVar46 + *param_3 * dVar29) * dVar55;
    dStack_1f0 = (dVar49 * dVar7 + dVar52) * dVar28;
    local_1c8 = (dVar29 * dVar37 + dVar50) * dVar33;
    local_1a8 = (1.0 - (dVar3 + dVar37 * dVar49)) * dVar55;
    local_1e8 = (*param_3 * dVar29 - dVar46) * dVar28;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar2,0);
    local_1d8._0_8_ = (dVar49 * dVar7 - dVar52) * dVar33;
    local_1d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar50 = dVar4 + dVar4;
    dVar52 = dVar47 + dVar47;
    dVar46 = dVar59 * (dVar59 + dVar59);
    local_278 = dVar53 - (dVar47 * dVar52 + dVar4 * dVar50);
    local_228 = 1.0 - (dVar46 + dVar4 * dVar50);
    dVar29 = (dVar59 + dVar59) * dVar51;
    dStack_270 = dVar50 * dVar59 + dVar52 * dVar51;
    local_248 = dVar52 * dVar4 + dVar29;
    dVar29 = dVar52 * dVar4 - dVar29;
    local_268 = dVar59 * dVar52 - dVar50 * dVar51;
    uStack_260 = 0;
    local_258._8_8_ = dVar58 - (dVar47 * dVar52 + dVar46);
    local_258._0_8_ = dVar50 * dVar59 - dVar52 * dVar51;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar29,0);
    local_238._0_8_ = dVar50 * dVar51 + dVar59 * dVar52;
    local_238._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uStack_220 = 0;
    local_208._8_8_ = 0x3ff0000000000000;
    local_208._0_8_ = *(double *)(param_4 + 0x30);
    local_218 = *(double *)(param_4 + 0x20);
    dStack_210 = *(double *)(param_4 + 0x28);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar48._8_8_ = -(ulonglong)(0.0 <= dVar33);
    auVar48._0_8_ = -(ulonglong)(0.0 <= dVar28);
    auVar44 = blendvpd(_DAT_149936790,auVar54,auVar48);
    uVar27 = -(ulonglong)(0.0 <= dVar55 * 1.0);
    dVar28 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
    dVar33 = auVar44._0_8_;
    local_168 = local_168 * dVar33;
    local_170 = local_170 * dVar33;
    local_178 = local_178 * dVar33;
    dVar33 = auVar44._8_8_;
    local_148 = local_148 * dVar33;
    local_150 = local_150 * dVar33;
    local_158 = dVar33 * local_158;
    local_128 = local_128 * dVar28;
    local_130 = local_130 * dVar28;
    local_138 = dVar28 * local_138;
    uVar23 = SUB84(local_358,0);
    FUN_14481fd10();
    iVar20 = (int)local_358;
    dVar28 = (double)local_348._0_8_ * (double)local_348._0_8_ +
             (double)local_358._0_8_ * (double)local_358._0_8_;
    dVar33 = (double)local_348._8_8_ * (double)local_348._8_8_ +
             (double)local_358._8_8_ * (double)local_358._8_8_;
    auVar42._0_8_ = dVar28 + dVar33;
    auVar42._8_8_ = dVar28 + dVar33;
    auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    auVar44 = sqrtpd(auVar42,auVar42);
    auVar44 = divpd(auVar54,auVar44);
    auVar45._0_8_ = auVar44._0_8_ * (double)local_348._0_8_;
    auVar45._8_8_ = auVar44._8_8_ * (double)local_348._8_8_;
    local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar31);
    local_2f8._8_8_ =
         (ulonglong)((double)local_358._8_8_ * auVar44._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    local_2f8._0_8_ =
         (ulonglong)((double)local_358._0_8_ * auVar44._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    local_2d8 = local_118;
    dStack_2d0 = dStack_110;
    local_2c8 = local_108;
    dStack_2c0 = 0.0;
  }
  dVar28 = auVar5._8_8_ * 0.0;
  uVar57 = (undefined4)((ulonglong)dVar28 >> 0x20);
  uVar56 = SUB84(dVar28,0);
  local_368._8_4_ = uVar56;
  local_368._0_8_ = dVar55 * 1.0;
  local_368._12_4_ = uVar57;
  local_2a8._8_4_ = uVar56;
  local_2a8._0_8_ = dVar55 * 1.0;
  local_2a8._12_4_ = uVar57;
  local_338 = ZEXT816(0);
  local_328 = 0.0;
  dStack_320 = 0.0;
  _local_388 = *(undefined1 (*) [16])(param_5 + 8);
  dVar28 = local_388;
  dVar33 = local_388._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_5 + 10);
  dVar55 = auVar5._0_8_;
  auVar44 = minpd(auVar54,_local_388);
  auVar40 = minpd(ZEXT816(0x3ff0000000000000),auVar5);
  auVar30._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
  iVar20 = movmskpd(iVar20,auVar30);
  auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
  auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
  uVar22 = movmskpd(uVar23,auVar41);
  local_2b8 = auVar35;
  if ((uVar22 & 0x3fffffff) == 0 && iVar20 == 0) {
    dVar50 = *param_5;
    dVar2 = param_5[1];
    dVar3 = param_5[2];
    dVar7 = param_5[3];
    dVar58 = param_5[3];
    dVar53 = param_5[3];
    dVar28 = *(double *)(param_6 + 0x10) * dVar28;
    dVar33 = *(double *)(param_6 + 0x18) * dVar33;
    dVar52 = *(double *)(param_6 + 0x20) * dVar55;
    dVar59 = auVar5._8_8_ * 0.0;
    local_378._8_4_ = SUB84(dVar59,0);
    local_378._0_8_ = dVar52;
    local_378._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    dVar51 = dVar33 * dVar50 - dVar28 * dVar2;
    dVar46 = dVar52 * dVar2 - dVar33 * dVar3;
    dVar29 = dVar28 * dVar3 - dVar52 * dVar50;
    dVar37 = dVar59 * dVar7 - dVar59 * dVar7;
    dVar46 = dVar46 + dVar46;
    dVar29 = dVar29 + dVar29;
    dVar51 = dVar51 + dVar51;
    dVar37 = dVar37 + dVar37;
    dVar4 = param_5[1];
    dVar59 = param_5[1];
    dVar47 = dVar3 * 0.0 * 1.0 + dVar59 * 1.0 + *param_5 * 0.0 * -1.0 + dVar53 * 0.0;
    dVar33 = (dVar46 * dVar3 - dVar51 * dVar50) + dVar53 * dVar29 + dVar33 + param_5[5];
    local_328 = (dVar29 * dVar50 - dVar2 * dVar46) + dVar58 * dVar51 + dVar52 + param_5[6];
    dStack_320 = (dVar37 * dVar7 - dVar37 * dVar7) + dVar53 * dVar37 + (double)local_378._8_8_ +
                 param_5[7];
    local_358._8_4_ = SUB84(dVar47,0);
    local_358._0_8_ = dVar3 * 0.0 * -1.0 + dVar4 * 0.0 + *param_5 * 1.0 * 1.0 + dVar58 * 0.0;
    local_358._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    local_348._8_8_ =
         param_5[2] * 0.0 * -1.0 + ((dVar50 * 0.0 * -1.0 + dVar53 * 1.0) - dVar59 * 0.0);
    local_348._0_8_ = param_5[2] * 1.0 * 1.0 + ((dVar50 * 0.0 * 1.0 + dVar58 * 0.0) - dVar4 * 0.0);
    local_338._8_4_ = SUB84(dVar33,0);
    local_338._0_8_ = (dVar51 * dVar2 - dVar3 * dVar29) + dVar58 * dVar46 + dVar28 + param_5[4];
    local_338._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  }
  else {
    dVar59 = *param_5;
    dVar4 = param_5[1];
    dVar47 = param_5[2];
    dVar51 = dVar4 + dVar4;
    dVar46 = dVar47 + dVar47;
    dVar52 = dVar59 * (dVar59 + dVar59);
    local_1f8 = (dVar53 - (dVar47 * dVar46 + dVar4 * dVar51)) * dVar28;
    dVar58 = (dVar58 - (dVar47 * dVar46 + dVar52)) * dVar33;
    dVar53 = param_5[3];
    dVar47 = dVar46 * dVar53;
    dVar29 = (dVar59 + dVar59) * param_5[3];
    dVar53 = dVar51 * dVar53;
    dStack_1b0 = (dVar46 * dVar4 - dVar29) * dVar55;
    local_1b8 = (dVar53 + *param_5 * dVar46) * dVar55;
    dStack_1f0 = (dVar51 * dVar59 + dVar47) * dVar28;
    local_1c8 = (dVar46 * dVar4 + dVar29) * dVar33;
    local_1e8 = (*param_5 * dVar46 - dVar53) * dVar28;
    uStack_1e0 = 0;
    local_1d8._8_4_ = SUB84(dVar58,0);
    local_1d8._0_8_ = (dVar51 * dVar59 - dVar47) * dVar33;
    local_1d8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    uStack_1c0 = 0;
    local_1a8 = (1.0 - (dVar52 + dVar4 * dVar51)) * dVar55;
    uStack_1a0 = 0;
    local_198 = param_5[4];
    dStack_190 = param_5[5];
    local_188 = param_5[6];
    uStack_180 = 0x3ff0000000000000;
    local_278 = 1.0;
    dStack_270 = 0.0;
    local_268 = 0.0;
    uStack_260 = 0;
    local_248 = 0.0;
    uStack_240 = 0;
    local_238 = ZEXT816(0);
    local_228 = 1.0;
    uStack_220 = 0;
    local_208._8_4_ = 0;
    local_208._0_8_ = *(double *)(param_6 + 0x20);
    local_208._12_4_ = 0x3ff00000;
    local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_218 = *(double *)(param_6 + 0x10);
    dStack_210 = *(double *)(param_6 + 0x18);
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar35._8_8_ = -(ulonglong)(0.0 <= dVar33);
    auVar35._0_8_ = -(ulonglong)(0.0 <= dVar28);
    auVar35 = blendvpd(_DAT_149936790,auVar54,auVar35);
    uVar27 = -(ulonglong)(0.0 <= dVar55 * 1.0);
    dVar28 = (double)(~uVar27 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar27 >> 0x20) & 0x3ff00000) << 0x20);
    dVar53 = auVar35._0_8_;
    local_168 = local_168 * dVar53;
    local_170 = local_170 * dVar53;
    local_178 = local_178 * dVar53;
    dVar53 = auVar35._8_8_;
    local_148 = local_148 * dVar53;
    local_150 = local_150 * dVar53;
    local_158 = dVar53 * local_158;
    local_128 = local_128 * dVar28;
    local_130 = local_130 * dVar28;
    local_138 = dVar28 * local_138;
    FUN_14481fd10(&local_298);
    dVar28 = local_288 * local_288 + local_298 * local_298;
    dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar43._0_8_ = dVar28 + dVar53;
    auVar43._8_8_ = dVar28 + dVar53;
    auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
    auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
    auVar35 = sqrtpd(auVar43,auVar43);
    auVar35 = divpd(auVar54,auVar35);
    auVar54._0_8_ = auVar35._0_8_ * local_288;
    auVar54._8_8_ = auVar35._8_8_ * dStack_280;
    local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar32);
    local_358._8_8_ =
         (ulonglong)(dStack_290 * auVar35._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
    local_358._0_8_ =
         (ulonglong)(local_298 * auVar35._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
    local_338._8_8_ = dStack_110;
    local_338._0_8_ = local_118;
    local_328 = local_108;
    dStack_320 = 0.0;
  }
  dVar28 = auVar5._8_8_ * 0.0;
  local_318 = local_388;
  uStack_310 = dStack_380;
  local_308._8_4_ = SUB84(dVar28,0);
  local_308._0_8_ = dVar55 * 1.0;
  local_308._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  lVar25 = (longlong)*(int *)(param_4 + 0x18);
  if (lVar25 == 0) {
    puVar21 = (undefined1 *)0x0;
    puVar24 = local_388;
  }
  else {
    lVar8 = -(lVar25 * 0x18 + 0x1eU & 0xfffffffffffffff0);
    uVar13 = local_368._0_8_;
    puVar21 = local_388 + lVar8;
    puVar24 = local_388 + lVar8;
    if (0 < *(int *)(param_4 + 0x18)) {
      lVar6 = *(longlong *)(param_4 + 0x10);
      uVar14 = local_2f8._0_8_;
      uVar15 = local_2f8._8_8_;
      uVar16 = local_2e8._0_8_;
      uVar18 = local_2b8._0_8_;
      uVar19 = local_2b8._8_8_;
      uVar17 = local_2e8._8_8_;
      lVar26 = 0;
      do {
        pdVar1 = (double *)(lVar6 + lVar26);
        dVar58 = *pdVar1 * (double)uVar18;
        dVar59 = pdVar1[1] * (double)uVar19;
        dVar28 = *(double *)(lVar6 + 0x10 + lVar26) * (double)uVar13;
        dVar53 = dVar59 * (double)uVar14 - (double)uVar15 * dVar58;
        dVar33 = dVar28 * (double)uVar15 - (double)uVar16 * dVar59;
        dVar55 = dVar58 * (double)uVar16 - (double)uVar14 * dVar28;
        dVar33 = dVar33 + dVar33;
        dVar55 = dVar55 + dVar55;
        dVar53 = dVar53 + dVar53;
        pdVar1 = (double *)(local_388 + lVar26 + lVar8);
        *pdVar1 = (dVar53 * (double)uVar15 - dVar55 * (double)uVar16) +
                  (double)uVar17 * dVar33 + dVar58;
        pdVar1[1] = ((double)uVar16 * dVar33 - (double)uVar14 * dVar53) +
                    (double)uVar17 * dVar55 + dVar59;
        *(double *)(local_378 + lVar26 + lVar8) =
             dVar53 * (double)uVar17 + dVar28 + (dVar55 * (double)uVar14 - dVar33 * (double)uVar15);
        lVar26 = lVar26 + 0x18;
        puVar21 = local_388 + lVar8;
        puVar24 = local_388 + lVar8;
      } while (lVar25 * 0x18 != lVar26);
    }
  }
  *(undefined8 *)(puVar24 + -8) = 0;
  *(undefined8 *)(puVar24 + -0x10) = param_7;
  *(undefined8 *)(puVar24 + -0x18) = 0;
  *(undefined1 **)(puVar24 + -0x20) = &LAB_14083879e;
  *(longlong *)(puVar24 + -0x28) = param_6;
  *(undefined1 **)(puVar24 + -0x30) = local_358;
  *(undefined1 **)(puVar24 + -0x38) = puVar21;
  *(undefined1 **)(puVar24 + -0x40) = &LAB_1471052f9;
  *(longlong *)(puVar24 + -0x48) = param_4;
  *(undefined1 **)(puVar24 + -0x50) = local_2f8;
  *(undefined8 *)(puVar24 + -0x78) = 0x14044b812;
  FUN_14044bf58(param_1,param_2,param_3,param_5);
  if ((local_f0 ^ (ulonglong)local_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar24 + -0x28) = &UNK_14044b894;
  FUN_144d8e3a0();
}



// FUNCTION 14044bf58 FUN_14044bf58 body=1890 status=ok
// SIG undefined FUN_14044bf58(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044bf58(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,double *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,double *param_14)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_3c38 [32];
  double *local_3c18;
  undefined8 uStack_3c10;
  undefined8 local_3c08;
  undefined8 uStack_3c00;
  undefined8 local_3bf8;
  double local_3be8;
  double dStack_3be0;
  double local_3bd8;
  double local_3bd0;
  double dStack_3bc8;
  double local_3bc0;
  double local_3bb8;
  double dStack_3bb0;
  double local_3ba8;
  double dStack_3ba0;
  double local_3b98;
  double local_3b90;
  double dStack_3b88;
  double dStack_3b80;
  double local_3b78;
  double local_3b70;
  double local_3b68;
  double local_3b60;
  double local_3b58;
  undefined8 local_3b50;
  undefined8 local_3b48;
  undefined8 local_3ae0;
  undefined4 local_3ad8;
  undefined8 local_3ad0;
  undefined8 uStack_3ac8;
  undefined8 local_3ac0;
  undefined8 uStack_3ab8;
  undefined1 local_3aa8 [9456];
  longlong local_15b8;
  longlong local_13a8;
  longlong local_398;
  undefined1 local_378 [626];
  char local_106;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3c38;
  local_3bf8 = param_12;
  local_3c08 = param_10;
  uStack_3c00 = param_11;
  local_3c18 = param_8;
  uStack_3c10 = param_9;
  FUN_1404460b8(local_378,param_5,param_6,param_7);
  if (local_106 == '\x01') {
    FUN_140449758(local_3aa8,local_378);
    local_3c18 = &local_3b58;
    local_3b58 = 0.0;
    local_3ae0 = 0xffffffffffffffff;
    local_3ad8 = 0xffffffff;
    local_3ad0 = 0;
    uStack_3ac8 = 0;
    local_3ac0 = 0;
    uStack_3ab8 = 0;
    local_3b50 = param_1;
    local_3b48 = param_2;
    FUN_1404461a8(local_3aa8,&local_3bb8,&dStack_3ba0,&dStack_3b88);
    if (param_14 != (double *)0x0) {
      local_3b78 = param_14[2];
      dStack_3b88 = *param_14;
      dStack_3b80 = param_14[1];
      local_3b58 = (local_3ba8 - local_3b90) * local_3b78 +
                   (local_3bb8 - dStack_3ba0) * dStack_3b88 +
                   (dStack_3bb0 - local_3b98) * dStack_3b80;
    }
    dVar9 = -*param_3;
    dVar11 = -param_3[1];
    dVar5 = param_3[2] * -1.0;
    dVar7 = param_3[3] * 1.0;
    dVar12 = dVar9 * dStack_3b80 - dStack_3b88 * dVar11;
    dVar14 = dVar5 * dStack_3b88 - local_3b78 * dVar9;
    dVar15 = dVar11 * local_3b78 - dStack_3b80 * dVar5;
    dVar12 = dVar12 + dVar12;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    local_3bb8 = local_3bb8 - param_3[4];
    dStack_3bb0 = dStack_3bb0 - param_3[5];
    local_3ba8 = local_3ba8 - param_3[6];
    dVar16 = local_3bb8 * dVar5 - dVar9 * local_3ba8;
    dVar13 = dStack_3bb0 * dVar9 - dVar11 * local_3bb8;
    dVar2 = local_3ba8 * dVar11 - dVar5 * dStack_3bb0;
    dVar2 = dVar2 + dVar2;
    dVar16 = dVar16 + dVar16;
    dVar13 = dVar13 + dVar13;
    auVar1 = *(undefined1 (*) [16])(param_3 + 8);
    auVar10 = divpd(_DAT_149934d80,auVar1);
    local_3be8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar10._0_8_) *
                 ((dVar13 * dVar11 - dVar16 * dVar5) + dVar7 * dVar2 + local_3bb8);
    dStack_3be0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar10._8_8_) *
                  (*param_3 * dVar13 + dVar5 * dVar2 + dVar7 * dVar16 + dStack_3bb0);
    local_3bd8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_3[10])) &
                         (ulonglong)(1.0 / param_3[10])) *
                 (dVar13 * dVar7 + local_3ba8 + (dVar16 * dVar9 - dVar2 * dVar11));
    dVar6 = -*param_4;
    dVar8 = -param_4[1];
    dVar3 = param_4[2] * -1.0;
    dVar4 = param_4[3] * 1.0;
    dVar13 = dStack_3b88 * dVar8 - dVar6 * dStack_3b80;
    dVar16 = local_3b78 * dVar6 - dVar3 * dStack_3b88;
    dVar2 = dStack_3b80 * dVar3 - dVar8 * local_3b78;
    dVar13 = dVar13 + dVar13;
    dVar16 = dVar16 + dVar16;
    dVar2 = dVar2 + dVar2;
    local_3b60 = (dVar6 * dVar16 - dVar2 * dVar8) + (dVar4 * dVar13 - local_3b78);
    local_3b68 = (dVar3 * dVar2 - dVar13 * dVar6) + (dVar4 * dVar16 - dStack_3b80);
    local_3b70 = (dVar8 * dVar13 - dVar16 * dVar3) + (dVar4 * dVar2 - dStack_3b88);
    dStack_3ba0 = dStack_3ba0 - param_4[4];
    local_3b98 = local_3b98 - param_4[5];
    local_3b90 = local_3b90 - param_4[6];
    dVar16 = dStack_3ba0 * dVar3 - dVar6 * local_3b90;
    dVar13 = local_3b98 * dVar6 - dVar8 * dStack_3ba0;
    dVar2 = local_3b90 * dVar8 - dVar3 * local_3b98;
    dVar2 = dVar2 + dVar2;
    dVar16 = dVar16 + dVar16;
    dVar13 = dVar13 + dVar13;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar10 = divpd(_DAT_149934d80,auVar1);
    local_3bd0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar10._0_8_) *
                 ((dVar13 * dVar8 - dVar16 * dVar3) + dVar4 * dVar2 + dStack_3ba0);
    dStack_3bc8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar10._8_8_) *
                  (*param_4 * dVar13 + dVar3 * dVar2 + dVar4 * dVar16 + local_3b98);
    local_3bc0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                         (ulonglong)(1.0 / param_4[10])) *
                 (dVar13 * dVar4 + local_3b90 + (dVar16 * dVar6 - dVar2 * dVar8));
    dStack_3b88 = (dVar11 * dVar12 - dVar14 * dVar5) + dVar7 * dVar15 + dStack_3b88;
    dStack_3b80 = (dVar5 * dVar15 - dVar12 * dVar9) + dVar7 * dVar14 + dStack_3b80;
    local_3b78 = (dVar9 * dVar14 - dVar15 * dVar11) + dVar7 * dVar12 + local_3b78;
    FUN_1404486c6(param_13);
    if (local_398 != 0) {
      FUN_1400020a8();
    }
    if (local_13a8 != 0) {
      FUN_1400020a8();
    }
    if (local_15b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_3c38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14044c6bc FUN_14044c6bc body=752 status=ok
// SIG undefined FUN_14044c6bc(void)

void FUN_14044c6bc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_14044c72f;
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
  } while (uVar10 != uVar2);
LAB_14044c72f:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar3 = 0;
    uVar14 = 1;
    iVar7 = 0;
    iVar4 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar7 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar7 = iVar15 + -1;
      }
      uVar3 = 0;
      uVar14 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar14 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar14 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar10 = puVar13[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar16 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar7) {
      iVar7 = iVar15;
    }
  }
  if (iVar7 < iVar15) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar7 * 0x538;
      uVar16 = *(ulonglong *)(lVar9 + 8 + lVar8);
      uVar2 = ((uint)(*(ulonglong *)(lVar9 + lVar8) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar9 + lVar8) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = uVar2 >> 0x10 ^ uVar2;
      uVar6 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar16 = (longlong)
               (int)((uVar2 >> 2) + uVar2 * 0x40 + (uVar6 >> 0x10 ^ uVar6) + 0x9e3779b9 ^ uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar9 + 0x534 + lVar8) = iVar15;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x530 + lVar8) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar7 = (int)uVar3;
      lVar9 = (longlong)iVar7;
      uVar2 = puVar13[lVar9] & uVar10;
      if (uVar2 == 0) {
        iVar11 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar11 = iVar15 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar7) {
          iVar12 = iVar7;
        }
        if (iVar11 <= iVar7) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar13[lVar9 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar12 - lVar9 == lVar8) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar7 + (int)lVar8 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar16 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar15);
  }
  return;
}



// FUNCTION 14044c9ac FUN_14044c9ac body=6403 status=ok
// SIG undefined FUN_14044c9ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044c9ac(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  undefined4 extraout_EAX;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_458 [32];
  undefined1 local_438 [8];
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
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
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double dStack_168;
  double local_160 [6];
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  auVar15 = divpd(*(undefined1 (*) [16])(param_6 + 0x28),_DAT_1499387d0);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(double *)(param_6 + 0x38);
  auVar17 = divpd(auVar17,_DAT_1499387d0);
  auVar15 = roundpd(auVar15,auVar15,3);
  auVar17 = roundpd(auVar17,auVar17,3);
  dVar27 = (*(double *)*(undefined1 (*) [16])(param_6 + 0x28) -
           auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar30 = (*(double *)(param_6 + 0x30) - auVar15._8_8_ * DAT_1499387d0._8_8_) *
           0.008726646259971648;
  dVar33 = (*(double *)(param_6 + 0x38) - auVar17._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar34 = (0.0 - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  uVar6 = param_1;
  dVar10 = sin(dVar27);
  uVar4 = (undefined4)uVar6;
  dVar11 = sin(dVar30);
  dVar12 = sin(dVar33);
  sin(dVar34);
  dVar27 = cos(dVar27);
  dVar30 = cos(dVar30);
  dVar33 = cos(dVar33);
  cos(dVar34);
  auVar21 = _DAT_149934d80;
  dVar28 = -(dVar30 * dVar10 * dVar12) + dVar11 * dVar27 * dVar33;
  dVar31 = dVar11 * dVar10 * dVar12 + dVar30 * dVar27 * dVar33;
  dVar34 = dVar10 * dVar11 * dVar33 - dVar27 * dVar30 * dVar12;
  dVar27 = -(dVar10 * dVar30 * dVar33) - dVar27 * dVar11 * dVar12;
  auVar15 = *(undefined1 (*) [16])(param_5 + 8);
  dVar10 = auVar15._0_8_;
  dVar12 = auVar15._8_8_;
  auVar17 = *(undefined1 (*) [16])(param_5 + 10);
  dVar11 = auVar17._0_8_;
  auVar15 = minpd(_DAT_149934d80,auVar15);
  auVar26 = minpd(ZEXT816(0x3ff0000000000000),auVar17);
  auVar18._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
  auVar18._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
  iVar3 = movmskpd(extraout_EAX,auVar18);
  auVar15._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
  auVar15._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
  uVar5 = movmskpd(uVar4,auVar15);
  if ((uVar5 & 0x3fffffff) == 0 && iVar3 == 0) {
    dVar16 = *param_5;
    dVar20 = param_5[1];
    dVar33 = param_5[3];
    dVar30 = param_5[3];
    dVar22 = param_5[1];
    dVar23 = param_5[1];
    dVar25 = param_5[2];
    dVar14 = param_5[3];
    dVar24 = param_5[2];
    dVar38 = param_5[2];
    dVar35 = dVar27 * dVar24 * -1.0 + dVar28 * dVar22 + dVar31 * *param_5 * 1.0 + dVar34 * dVar33;
    dVar36 = dVar34 * dVar38 * 1.0 + dVar31 * dVar23 + dVar28 * *param_5 * -1.0 + dVar27 * dVar30;
    dVar23 = dVar28 * dVar38 * -1.0 +
             ((*param_5 * dVar34 * -1.0 + dVar31 * dVar30) - dVar27 * dVar23);
    unique0x10000869 = SUB84(dVar23,0);
    local_438 = (undefined1  [8])
                (dVar31 * dVar24 * 1.0 +
                ((*param_5 * dVar27 * 1.0 + dVar28 * dVar33) - dVar34 * dVar22));
    unique0x1000086d = (int)((ulonglong)dVar23 >> 0x20);
    dVar31 = *(double *)(param_6 + 0x10) * dVar10;
    dVar22 = *(double *)(param_6 + 0x18) * dVar12;
    dVar28 = *(double *)(param_6 + 0x20) * dVar11;
    dVar27 = auVar17._8_8_ * 0.0;
    dVar23 = dVar22 * dVar16 - dVar31 * dVar20;
    dVar24 = dVar28 * dVar20 - dVar22 * dVar25;
    dVar38 = dVar31 * dVar25 - dVar28 * dVar16;
    dVar34 = dVar27 * dVar14 - dVar27 * dVar14;
    dVar24 = dVar24 + dVar24;
    dVar38 = dVar38 + dVar38;
    dVar23 = dVar23 + dVar23;
    dVar34 = dVar34 + dVar34;
    dVar34 = (dVar34 * dVar14 - dVar34 * dVar14) + dVar30 * dVar34 + dVar27 + param_5[7];
    dVar27 = (dVar23 * dVar20 - dVar25 * dVar38) + dVar33 * dVar24 + dVar31 + param_5[4];
    dVar30 = (dVar24 * dVar25 - dVar23 * dVar16) + dVar30 * dVar38 + dVar22 + param_5[5];
    dVar33 = (dVar38 * dVar16 - dVar20 * dVar24) + dVar33 * dVar23 + dVar28 + param_5[6];
  }
  else {
    dVar33 = *param_5;
    dVar35 = param_5[1];
    dVar30 = param_5[2];
    dVar36 = dVar35 + dVar35;
    dVar22 = dVar30 + dVar30;
    dVar38 = dVar33 * (dVar33 + dVar33);
    local_178 = ((double)DAT_149934d80 - (dVar30 * dVar22 + dVar35 * dVar36)) * dVar10;
    local_160[2] = (DAT_149934d80._8_8_ - (dVar30 * dVar22 + dVar38)) * dVar12;
    dVar30 = param_5[3];
    dVar23 = dVar22 * dVar30;
    dVar24 = (dVar33 + dVar33) * param_5[3];
    dVar30 = dVar36 * dVar30;
    local_160[1] = (dVar36 * dVar33 - dVar23) * dVar12;
    dStack_130 = (dVar22 * dVar35 - dVar24) * dVar11;
    local_160[5] = (dVar30 + *param_5 * dVar22) * dVar11;
    dStack_170 = (dVar36 * dVar33 + dVar23) * dVar10;
    local_160[3] = (dVar22 * dVar35 + dVar24) * dVar12;
    local_128 = (1.0 - (dVar38 + dVar35 * dVar36)) * dVar11;
    dStack_168 = (*param_5 * dVar22 - dVar30) * dVar10;
    local_160[0] = 0.0;
    local_160[4] = 0.0;
    uStack_120 = 0;
    local_118 = param_5[4];
    dStack_110 = param_5[5];
    local_108 = param_5[6];
    uStack_100 = 0x3ff0000000000000;
    dVar33 = dVar27 + dVar27;
    dVar30 = dVar28 + dVar28;
    dVar35 = dVar34 * (dVar34 + dVar34);
    local_1f8 = (double)DAT_149934d80 - (dVar28 * dVar30 + dVar27 * dVar33);
    dStack_1d0 = DAT_149934d80._8_8_ - (dVar28 * dVar30 + dVar35);
    local_1a8 = 1.0 - (dVar35 + dVar27 * dVar33);
    dStack_1b0 = (dVar34 + dVar34) * dVar31;
    dStack_1f0 = dVar33 * dVar34 + dVar30 * dVar31;
    local_1c8 = dVar30 * dVar27 + dStack_1b0;
    local_1d8 = dVar33 * dVar34 - dVar30 * dVar31;
    dStack_1b0 = dVar30 * dVar27 - dStack_1b0;
    local_1b8 = dVar33 * dVar31 + dVar34 * dVar30;
    local_1e8 = dVar34 * dVar30 - dVar33 * dVar31;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    local_198 = *(double *)(param_6 + 0x10);
    dStack_190 = *(double *)(param_6 + 0x18);
    local_188 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(&local_338);
    FUN_144a1c686(&local_338,0x3e45798ee0000000);
    auVar26._8_8_ = -(ulonglong)(0.0 <= dVar12);
    auVar26._0_8_ = -(ulonglong)(0.0 <= dVar10);
    auVar15 = blendvpd(_DAT_149936790,auVar21,auVar26);
    uVar9 = -(ulonglong)(0.0 <= dVar11 * 1.0);
    dVar27 = (double)(~uVar9 & 0xbff0000000000000 | uVar9 & 0x3ff0000000000000);
    dVar30 = auVar15._0_8_;
    local_328 = local_328 * dVar30;
    dStack_330 = dStack_330 * dVar30;
    local_338 = local_338 * dVar30;
    dVar30 = auVar15._8_8_;
    local_308 = local_308 * dVar30;
    local_310 = local_310 * dVar30;
    dStack_318 = dVar30 * dStack_318;
    dStack_2e8 = dStack_2e8 * dVar27;
    local_2f0 = local_2f0 * dVar27;
    local_2f8 = dVar27 * local_2f8;
    FUN_14481fd10(&local_358,&local_338);
    dVar27 = local_348 * local_348 + local_358 * local_358;
    dVar30 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
    auVar19._0_8_ = dVar27 + dVar30;
    auVar19._8_8_ = dVar27 + dVar30;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
    auVar15 = sqrtpd(auVar19,auVar19);
    auVar15 = divpd(auVar21,auVar15);
    auVar21._0_8_ = auVar15._0_8_ * local_348;
    auVar21._8_8_ = auVar15._8_8_ * dStack_340;
    dVar35 = (double)((ulonglong)(local_358 * auVar15._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
    dVar36 = (double)((ulonglong)(dStack_350 * auVar15._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
    _local_438 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar13);
    dVar34 = 0.0;
    dVar27 = local_2d8;
    dVar30 = dStack_2d0;
    dVar33 = local_2c8;
  }
  pauVar1 = (undefined1 (*) [16])(param_3 + 8);
  dVar31 = *(double *)*pauVar1;
  dStack_3d0 = param_3[9];
  auVar17 = *pauVar1;
  auVar15 = *pauVar1;
  dVar24 = *(double *)(param_4 + 0x10) * dVar31;
  dVar38 = *(double *)(param_4 + 0x18) * dStack_3d0;
  dVar22 = param_3[10];
  dStack_3e0 = param_3[0xb];
  dVar23 = *(double *)(param_4 + 0x20) * dVar22;
  dStack_420 = dStack_3e0 * 0.0;
  local_378 = *param_3;
  dStack_370 = param_3[1];
  local_3b8 = param_3[2];
  dStack_3b0 = param_3[3];
  local_388 = param_3[4];
  dStack_380 = param_3[5];
  local_3c8 = param_3[6];
  dStack_3c0 = param_3[7];
  dVar28 = param_3[3];
  dStack_3a0 = param_3[3];
  dVar16 = dVar38 * local_378 - dVar24 * dStack_370;
  dVar20 = dVar23 * dStack_370 - dVar38 * local_3b8;
  dVar25 = dVar24 * local_3b8 - local_378 * dVar23;
  dVar20 = dVar20 + dVar20;
  dVar25 = dVar25 + dVar25;
  dVar16 = dVar16 + dVar16;
  local_408 = (dVar16 * dStack_370 - dVar25 * local_3b8) + dVar28 * dVar20 + dVar24 + local_388;
  dStack_410 = (local_3b8 * dVar20 - local_378 * dVar16) + dStack_3a0 * dVar25 + dVar38 + dStack_380
  ;
  local_160[0] = 0.0;
  local_160[1] = 0.0;
  local_160[2] = *(double *)(param_6 + 0x48) * 0.5;
  local_160[3] = 0.0;
  local_160[4] = 0.0;
  local_160[5] = *(double *)(param_6 + 0x48) * -0.5;
  lVar8 = 0;
  bVar2 = true;
  do {
    bVar7 = bVar2;
    dVar38 = local_160[lVar8 * 3 + 2] * dVar11 * 1.0;
    dVar29 = local_160[lVar8 * 3] * dVar10;
    dVar32 = local_160[lVar8 * 3 + 1] * dVar12;
    dVar24 = dVar32 * dVar35 - dVar36 * dVar29;
    dVar37 = dVar38 * dVar36 - (double)local_438 * dVar32;
    dVar14 = dVar29 * (double)local_438 - dVar35 * dVar38;
    dVar37 = dVar37 + dVar37;
    dVar14 = dVar14 + dVar14;
    dVar24 = dVar24 + dVar24;
    local_160[lVar8 * 3] =
         (dVar24 * dVar36 - dVar14 * (double)local_438) + dStack_430 * dVar37 + dVar29;
    local_160[lVar8 * 3 + 1] =
         ((double)local_438 * dVar37 - dVar35 * dVar24) + dStack_430 * dVar14 + dVar32;
    local_160[lVar8 * 3 + 2] = dVar24 * dStack_430 + dVar38 + (dVar14 * dVar35 - dVar37 * dVar36);
    lVar8 = 1;
    bVar2 = false;
  } while (bVar7);
  local_428 = dVar23 + dVar28 * dVar16 + (dVar25 * local_378 - dVar20 * dStack_370) + local_3c8;
  dVar20 = local_160[0] + dVar27;
  dVar35 = local_160[1] + dVar30;
  local_438 = (undefined1  [8])(local_160[2] + dVar33);
  dVar30 = dVar30 + local_160[4];
  dVar33 = dVar33 + local_160[5];
  dVar27 = local_160[3] + dVar27;
  dVar36 = dVar33 - (double)local_438;
  dVar12 = dVar30 - dVar35;
  dVar11 = dVar27 - dVar20;
  dStack_430 = 0.0;
  auVar21 = _local_438;
  dVar16 = (double)local_438 - local_428;
  dVar23 = dVar35 - dStack_410;
  dVar25 = dVar20 - local_408;
  dVar28 = dVar36 * dVar36 + dVar11 * dVar11 + dVar12 * dVar12;
  dVar24 = -(dVar16 * dVar36 + dVar25 * dVar11 + dVar23 * dVar12) / dVar28;
  local_3a8 = *(double *)(param_4 + 0x28);
  dVar10 = *(double *)(param_6 + 0x40);
  dVar38 = (local_3a8 + dVar10) * (local_3a8 + dVar10);
  dStack_430 = 0.0;
  _local_438 = auVar21;
  local_418 = dStack_410;
  dStack_400 = dStack_410;
  local_3e8 = dVar22;
  local_3d8 = dVar31;
  if ((dVar24 <= 0.0) || (1.0 <= dVar24)) {
    dVar12 = (double)(~-(ulonglong)(dVar24 <= 0.0) & (ulonglong)dVar27 |
                     (ulonglong)dVar20 & -(ulonglong)(dVar24 <= 0.0));
    dVar11 = dVar12 - local_408;
    if (0.0 < dVar24) {
      dVar35 = dVar30;
    }
    dVar28 = dVar35 - dStack_410;
    dVar27 = (double)local_438;
    dVar30 = dStack_430;
    if (0.0 < dVar24) {
      dVar27 = dVar33;
      dVar30 = dVar34;
    }
    dVar33 = dVar27 - local_428;
    dVar34 = dVar33 * dVar33 + dVar11 * dVar11 + dVar28 * dVar28;
    if (dVar38 < dVar34) goto LAB_14044d1e6;
    dStack_430 = dVar30;
    local_438 = (undefined1  [8])dVar27;
    if (9.99999993922529e-09 < dVar34) {
      dVar30 = 1.0 / SQRT(dVar34);
      dVar11 = dVar11 * dVar30;
      dVar28 = dVar28 * dVar30;
      dVar33 = dVar33 * dVar30;
    }
    dVar38 = -local_378;
    dVar16 = -dStack_370;
    dVar34 = dVar38 * dVar28 - dVar11 * dVar16;
    dVar20 = local_3b8 * -1.0;
    local_3b8 = dStack_3b0 * 1.0;
    dVar30 = dVar20 * dVar11 - dVar33 * dVar38;
    dVar36 = dVar16 * dVar33 - dVar28 * dVar20;
    dVar30 = dVar30 + dVar30;
    dVar36 = dVar36 + dVar36;
    dVar34 = dVar34 + dVar34;
    local_2c8 = (dVar38 * dVar30 - dVar36 * dVar16) + local_3b8 * dVar34 + dVar33;
    dStack_2d0 = (dVar20 * dVar36 - dVar34 * dVar38) + local_3b8 * dVar30 + dVar28;
    local_2d8 = (dVar16 * dVar34 - dVar30 * dVar20) + local_3b8 * dVar36 + dVar11;
    local_2f8 = local_428 + local_3a8 * dVar33;
    dStack_300 = dStack_410 + local_3a8 * dVar28;
    local_308 = local_3a8 * dVar11 + local_408;
    dVar23 = local_308 - local_388;
    dVar24 = dStack_300 - dStack_380;
    local_3c8 = local_2f8 - local_3c8;
    dVar36 = dVar23 * dVar20 - dVar38 * local_3c8;
    dVar30 = dVar24 * dVar38 - dVar16 * dVar23;
    dVar34 = local_3c8 * dVar16 - dVar20 * dVar24;
    dVar34 = dVar34 + dVar34;
    dVar36 = dVar36 + dVar36;
    dVar30 = dVar30 + dVar30;
    auVar15 = divpd(_DAT_149934d80,auVar17);
    local_338 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar31)) & auVar15._0_8_) *
                ((dVar30 * dVar16 - dVar36 * dVar20) + local_3b8 * dVar34 + dVar23);
    dStack_330 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_3d0)) & auVar15._8_8_) *
                 (local_378 * dVar30 + dVar20 * dVar34 + local_3b8 * dVar36 + dVar24);
    local_328 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar22)) &
                        (ulonglong)(1.0 / dVar22)) *
                (dVar30 * local_3b8 + local_3c8 + (dVar36 * dVar38 - dVar34 * dVar16));
    local_3c8 = *param_5;
    dStack_3c0 = param_5[1];
    local_408 = -local_3c8;
    dStack_400 = -dStack_3c0;
    dVar22 = dVar11 * dStack_400 - local_408 * dVar28;
    dVar31 = param_5[2] * -1.0;
    dVar36 = param_5[3] * 1.0;
    dVar30 = dVar33 * local_408 - dVar31 * dVar11;
    dVar34 = dVar28 * dVar31 - dStack_400 * dVar33;
    dVar30 = dVar30 + dVar30;
    dVar34 = dVar34 + dVar34;
    dVar22 = dVar22 + dVar22;
    local_2b0 = (local_408 * dVar30 - dVar34 * dStack_400) + (dVar36 * dVar22 - dVar33);
    local_2b8 = (dVar31 * dVar34 - dVar22 * local_408) + (dVar36 * dVar30 - dVar28);
    local_2c0 = (dStack_400 * dVar22 - dVar30 * dVar31) + (dVar36 * dVar34 - dVar11);
    local_2e0 = dVar27 - dVar10 * dVar33;
    dStack_2e8 = dVar35 - dVar10 * dVar28;
    local_2f0 = dVar12 - dVar10 * dVar11;
    dVar34 = local_2f0 - param_5[4];
    dVar22 = dStack_2e8 - param_5[5];
    dVar10 = local_2e0 - param_5[6];
    dVar12 = dVar34 * dVar31 - local_408 * dVar10;
    dVar27 = dVar22 * local_408 - dStack_400 * dVar34;
    dVar30 = dVar10 * dStack_400 - dVar31 * dVar22;
    dVar30 = dVar30 + dVar30;
    dVar12 = dVar12 + dVar12;
    dVar27 = dVar27 + dVar27;
    auVar15 = *(undefined1 (*) [16])(param_5 + 8);
    auVar17 = divpd(_DAT_149934d80,auVar15);
    local_320 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar15._0_8_)) & auVar17._0_8_) *
                ((dVar27 * dStack_400 - dVar12 * dVar31) + dVar36 * dVar30 + dVar34);
    dStack_318 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar15._8_8_)) & auVar17._8_8_) *
                 (local_3c8 * dVar27 + dVar31 * dVar30 + dVar36 * dVar12 + dVar22);
    local_310 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                        (ulonglong)(1.0 / param_5[10])) *
                (dVar27 * dVar36 + dVar10 + (dVar12 * local_408 - dVar30 * dStack_400));
    local_2a8 = (local_2e0 - local_2f8) * dVar33 +
                (local_2f0 - local_308) * dVar11 + (dStack_2e8 - dStack_300) * dVar28;
    local_3f0 = dVar35;
    dStack_3b0 = local_3b8;
  }
  else {
    dVar34 = dVar11 * dVar23 - dVar25 * dVar12;
    dVar25 = dVar36 * dVar25 - dVar16 * dVar11;
    dVar11 = dVar12 * dVar16 - dVar23 * dVar36;
    local_390 = dVar10;
    if (dVar38 < SQRT((dVar34 * dVar34 + dVar11 * dVar11 + dVar25 * dVar25) / dVar28))
    goto LAB_14044d1e6;
    local_438 = (undefined1  [8])((double)local_438 + dVar33 * dVar24);
    local_3f0 = dVar35 + dVar30 * dVar24;
    local_368 = dVar20 + dVar27 * dVar24;
    local_3d8 = (double)local_438 - local_428;
    local_398 = local_3f0 - dStack_410;
    local_3e8 = local_368 - local_408;
    dVar11 = local_3d8 * local_3d8 + local_3e8 * local_3e8 + local_398 * local_398;
    dStack_430 = 0.0;
    uStack_360 = 0;
    if (9.99999993922529e-09 < dVar11) {
      dVar11 = 1.0 / SQRT(dVar11);
      local_3e8 = local_3e8 * dVar11;
      local_398 = local_398 * dVar11;
      local_3d8 = local_3d8 * dVar11;
    }
    dStack_3e0 = 0.0;
    dVar28 = -local_378;
    dVar35 = -dStack_370;
    dVar12 = dVar28 * local_398 - local_3e8 * dVar35;
    dVar36 = local_3b8 * -1.0;
    dVar23 = dStack_3b0 * 1.0;
    dVar11 = dVar36 * local_3e8 - local_3d8 * dVar28;
    dVar27 = dVar35 * local_3d8 - local_398 * dVar36;
    dVar11 = dVar11 + dVar11;
    dVar27 = dVar27 + dVar27;
    dVar12 = dVar12 + dVar12;
    local_2c8 = (dVar28 * dVar11 - dVar27 * dVar35) + dVar23 * dVar12 + local_3d8;
    dStack_2d0 = (dVar36 * dVar27 - dVar12 * dVar28) + dVar23 * dVar11 + local_398;
    local_2d8 = (dVar35 * dVar12 - dVar11 * dVar36) + dVar23 * dVar27 + local_3e8;
    local_2f8 = local_428 + local_3a8 * local_3d8;
    dStack_300 = dStack_410 + local_3a8 * local_398;
    local_308 = local_3a8 * local_3e8 + local_408;
    dVar33 = local_308 - local_388;
    dVar34 = dStack_300 - dStack_380;
    dVar30 = local_2f8 - local_3c8;
    dVar27 = dVar33 * dVar36 - dVar28 * dVar30;
    dVar11 = dVar34 * dVar28 - dVar35 * dVar33;
    dVar12 = dVar30 * dVar35 - dVar36 * dVar34;
    dVar12 = dVar12 + dVar12;
    dVar27 = dVar27 + dVar27;
    dVar11 = dVar11 + dVar11;
    auVar15 = divpd(_DAT_149934d80,auVar15);
    local_338 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar31)) & auVar15._0_8_) *
                ((dVar11 * dVar35 - dVar27 * dVar36) + dVar23 * dVar12 + dVar33);
    dStack_330 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_3d0)) & auVar15._8_8_) *
                 (local_378 * dVar11 + dVar36 * dVar12 + dVar23 * dVar27 + dVar34);
    local_328 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar22)) &
                        (ulonglong)(1.0 / dVar22)) *
                (dVar11 * dVar23 + dVar30 + (dVar27 * dVar28 - dVar12 * dVar35));
    dVar34 = -*param_5;
    dVar28 = -param_5[1];
    dVar30 = local_3e8 * dVar28 - dVar34 * local_398;
    dVar12 = param_5[2] * -1.0;
    dVar27 = param_5[3] * 1.0;
    dVar33 = local_3d8 * dVar34 - dVar12 * local_3e8;
    dVar11 = local_398 * dVar12 - dVar28 * local_3d8;
    dVar33 = dVar33 + dVar33;
    dVar11 = dVar11 + dVar11;
    dVar30 = dVar30 + dVar30;
    local_2b0 = (dVar34 * dVar33 - dVar11 * dVar28) + (dVar27 * dVar30 - local_3d8);
    local_2b8 = (dVar12 * dVar11 - dVar30 * dVar34) + (dVar27 * dVar33 - local_398);
    local_2c0 = (dVar28 * dVar30 - dVar33 * dVar12) + (dVar27 * dVar11 - local_3e8);
    local_2e0 = (double)local_438 - dVar10 * local_3d8;
    dStack_2e8 = local_3f0 - dVar10 * local_398;
    local_2f0 = local_368 - dVar10 * local_3e8;
    dVar31 = local_2f0 - param_5[4];
    dVar35 = dStack_2e8 - param_5[5];
    dVar11 = local_2e0 - param_5[6];
    dVar33 = dVar31 * dVar12 - dVar34 * dVar11;
    dVar10 = dVar35 * dVar34 - dVar28 * dVar31;
    dVar30 = dVar11 * dVar28 - dVar12 * dVar35;
    dVar30 = dVar30 + dVar30;
    dVar33 = dVar33 + dVar33;
    dVar10 = dVar10 + dVar10;
    auVar15 = *(undefined1 (*) [16])(param_5 + 8);
    auVar17 = divpd(_DAT_149934d80,auVar15);
    local_320 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar15._0_8_)) & auVar17._0_8_) *
                ((dVar10 * dVar28 - dVar33 * dVar12) + dVar27 * dVar30 + dVar31);
    dStack_318 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar15._8_8_)) & auVar17._8_8_) *
                 (*param_5 * dVar10 + dVar12 * dVar30 + dVar27 * dVar33 + dVar35);
    local_310 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                        (ulonglong)(1.0 / param_5[10])) *
                (dVar10 * dVar27 + dVar11 + (dVar33 * dVar34 - dVar30 * dVar28));
    local_2a8 = (local_2e0 - local_2f8) * local_3d8 +
                (local_2f0 - local_308) * local_3e8 + (dStack_2e8 - dStack_300) * local_398;
  }
  uStack_208 = 0;
  local_210 = 0;
  uStack_218 = 0;
  local_220 = 0;
  local_228 = 0xffffffff;
  local_230 = 0xffffffffffffffff;
  local_428 = local_2f8;
  local_418 = dStack_300;
  local_2a0 = param_1;
  local_298 = param_2;
  FUN_1404486c6(param_7);
LAB_14044d1e6:
  if ((local_f0 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14044e2b0 FUN_14044e2b0 body=5289 status=ok
// SIG undefined FUN_14044e2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044e2b0(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined4 extraout_EAX;
  int iVar4;
  undefined4 extraout_EAX_00;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  double *pdVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar35;
  double dVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auStack_448 [32];
  double *local_428;
  longlong local_420;
  undefined1 *local_418;
  undefined1 *local_410;
  double *local_408;
  longlong local_400;
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308 [2];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248 [2];
  undefined1 local_238 [16];
  double local_228;
  double local_220;
  undefined1 local_218 [16];
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
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
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  auVar39 = _DAT_1499387d0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  dVar19 = (double)DAT_1499387d0;
  dVar44 = DAT_1499387d0._8_8_;
  auVar20 = divpd(*(undefined1 (*) [16])(param_4 + 0x28),_DAT_1499387d0);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *(double *)(param_4 + 0x38);
  auVar26 = divpd(auVar26,_DAT_1499387d0);
  auVar20 = roundpd(auVar20,auVar20,3);
  auVar26 = roundpd(auVar26,auVar26,3);
  dVar14 = (*(double *)*(undefined1 (*) [16])(param_4 + 0x28) - auVar20._0_8_ * dVar19) *
           0.008726646259971648;
  dVar15 = (*(double *)(param_4 + 0x30) - auVar20._8_8_ * dVar44) * 0.008726646259971648;
  dVar16 = (*(double *)(param_4 + 0x38) - auVar26._0_8_ * dVar19) * 0.008726646259971648;
  dVar17 = (0.0 - auVar26._8_8_ * dVar44) * 0.008726646259971648;
  uVar7 = param_1;
  dVar11 = sin(dVar14);
  uVar5 = (undefined4)uVar7;
  dVar12 = sin(dVar15);
  dVar13 = sin(dVar16);
  sin(dVar17);
  dVar14 = cos(dVar14);
  dVar15 = cos(dVar15);
  dVar16 = cos(dVar16);
  cos(dVar17);
  auVar26 = _DAT_149934d80;
  dVar17 = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar16;
  dVar18 = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar16;
  dVar30 = dVar11 * dVar12 * dVar16 - dVar14 * dVar15 * dVar13;
  dVar11 = -(dVar11 * dVar15 * dVar16) - dVar14 * dVar12 * dVar13;
  local_358 = 0.0;
  dStack_350 = 0.0;
  local_348 = 0.0;
  dStack_340 = 0.0;
  local_338 = *(undefined1 (*) [16])(param_3 + 8);
  dVar14 = local_338._0_8_;
  dVar16 = local_338._8_8_;
  auVar20 = *(undefined1 (*) [16])(param_3 + 10);
  dVar15 = auVar20._0_8_;
  auVar37 = minpd(_DAT_149934d80,local_338);
  auVar42 = minpd(ZEXT816(0x3ff0000000000000),auVar20);
  auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
  auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
  iVar4 = movmskpd(extraout_EAX,auVar38);
  auVar37._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
  auVar37._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
  uVar6 = movmskpd(uVar5,auVar37);
  if ((uVar6 & 0x3fffffff) == 0 && iVar4 == 0) {
    dVar46 = *param_3;
    dVar3 = param_3[1];
    dVar13 = param_3[3];
    dVar12 = param_3[3];
    dVar43 = param_3[1];
    dVar1 = param_3[1];
    dVar25 = param_3[2];
    dVar29 = param_3[3];
    dVar32 = param_3[2];
    dVar45 = param_3[2];
    local_378 = dVar11 * dVar32 * -1.0 + dVar17 * dVar43 + dVar18 * *param_3 * 1.0 + dVar30 * dVar13
    ;
    dStack_370 = dVar30 * dVar45 * 1.0 + dVar18 * dVar1 + dVar17 * *param_3 * -1.0 + dVar11 * dVar12
    ;
    dVar14 = *(double *)(param_4 + 0x10) * dVar14;
    dVar16 = *(double *)(param_4 + 0x18) * dVar16;
    dVar24 = *(double *)(param_4 + 0x20) * dVar15;
    dVar28 = auVar20._8_8_ * 0.0;
    dVar31 = dVar16 * dVar46 - dVar14 * dVar3;
    dVar35 = dVar24 * dVar3 - dVar16 * dVar25;
    dVar36 = dVar14 * dVar25 - dVar24 * dVar46;
    dVar47 = dVar28 * dVar29 - dVar28 * dVar29;
    dVar35 = dVar35 + dVar35;
    dVar36 = dVar36 + dVar36;
    dVar31 = dVar31 + dVar31;
    dVar47 = dVar47 + dVar47;
    local_358 = (dVar31 * dVar3 - dVar25 * dVar36) + dVar13 * dVar35 + dVar14 + param_3[4];
    dStack_350 = (dVar35 * dVar25 - dVar31 * dVar46) + dVar12 * dVar36 + dVar16 + param_3[5];
    local_348 = (dVar36 * dVar46 - dVar3 * dVar35) + dVar13 * dVar31 + dVar24 + param_3[6];
    dStack_340 = (dVar47 * dVar29 - dVar47 * dVar29) + dVar12 * dVar47 + dVar28 + param_3[7];
    local_368._8_8_ =
         dVar17 * dVar45 * -1.0 + ((*param_3 * dVar30 * -1.0 + dVar18 * dVar12) - dVar11 * dVar1);
    local_368._0_8_ =
         dVar18 * dVar32 * 1.0 + ((*param_3 * dVar11 * 1.0 + dVar17 * dVar13) - dVar30 * dVar43);
    uVar5 = 0;
  }
  else {
    dVar1 = *param_3;
    dVar32 = param_3[1];
    dVar45 = param_3[2];
    dVar31 = dVar32 + dVar32;
    dVar47 = dVar45 + dVar45;
    dVar43 = dVar1 * (dVar1 + dVar1);
    dVar13 = (1.0 - (dVar45 * dVar47 + dVar43)) * dVar16;
    dVar12 = param_3[3];
    dVar36 = dVar47 * dVar12;
    dVar46 = (dVar1 + dVar1) * param_3[3];
    dVar12 = dVar31 * dVar12;
    dStack_2b0 = (dVar47 * dVar32 - dVar46) * dVar15;
    local_2b8 = (dVar12 + *param_3 * dVar47) * dVar15;
    local_2c8 = (dVar47 * dVar32 + dVar46) * dVar16;
    local_2f8._8_8_ = (dVar31 * dVar1 + dVar36) * dVar14;
    local_2f8._0_8_ = (1.0 - (dVar45 * dVar47 + dVar32 * dVar31)) * dVar14;
    local_2a8 = (1.0 - (dVar43 + dVar32 * dVar31)) * dVar15;
    local_2e8 = (*param_3 * dVar47 - dVar12) * dVar14;
    dStack_2e0 = 0.0;
    local_2d8._8_4_ = SUB84(dVar13,0);
    local_2d8._0_8_ = (dVar31 * dVar1 - dVar36) * dVar16;
    local_2d8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    dStack_2c0 = 0.0;
    dStack_2a0 = 0.0;
    dStack_298 = param_3[4];
    dStack_290 = param_3[5];
    local_288 = param_3[6];
    dStack_280 = 1.0;
    dVar43 = dVar11 + dVar11;
    dVar13 = dVar17 + dVar17;
    dVar12 = dVar30 * (dVar30 + dVar30);
    local_178 = (double)DAT_149934d80 - (dVar17 * dVar13 + dVar11 * dVar43);
    dStack_150 = DAT_149934d80._8_8_ - (dVar17 * dVar13 + dVar12);
    local_128 = 1.0 - (dVar12 + dVar11 * dVar43);
    dVar17 = (dVar30 + dVar30) * dVar18;
    dStack_170 = dVar43 * dVar30 + dVar13 * dVar18;
    local_148 = dVar13 * dVar11 + dVar17;
    local_158 = dVar43 * dVar30 - dVar13 * dVar18;
    dVar17 = dVar13 * dVar11 - dVar17;
    local_168 = dVar30 * dVar13 - dVar43 * dVar18;
    uStack_160 = 0;
    uStack_140 = 0;
    local_138._8_4_ = SUB84(dVar17,0);
    local_138._0_8_ = dVar43 * dVar18 + dVar30 * dVar13;
    local_138._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    uStack_120 = 0;
    uStack_100 = 0x3ff0000000000000;
    local_118 = *(double *)(param_4 + 0x10);
    dStack_110 = *(double *)(param_4 + 0x18);
    local_108 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(local_238);
    FUN_144a1c686(local_238,0x3e45798ee0000000);
    auVar42._8_8_ = -(ulonglong)(0.0 <= dVar16);
    auVar42._0_8_ = -(ulonglong)(0.0 <= dVar14);
    auVar37 = blendvpd(_DAT_149936790,auVar26,auVar42);
    uVar10 = -(ulonglong)(0.0 <= dVar15 * 1.0);
    dVar14 = (double)(~uVar10 & 0xbff0000000000000 | uVar10 & 0x3ff0000000000000);
    dVar16 = auVar37._0_8_;
    local_228 = local_228 * dVar16;
    local_238._8_8_ = (double)local_238._8_8_ * dVar16;
    local_238._0_8_ = (double)local_238._0_8_ * dVar16;
    dVar16 = auVar37._8_8_;
    local_208 = local_208 * dVar16;
    local_218._8_8_ = (double)local_218._8_8_ * dVar16;
    local_218._0_8_ = dVar16 * (double)local_218._0_8_;
    local_1e8 = local_1e8 * dVar14;
    local_1f0 = local_1f0 * dVar14;
    local_1f8 = dVar14 * local_1f8;
    pdVar9 = &local_3d8;
    FUN_14481fd10(pdVar9,local_238);
    uVar5 = SUB84(pdVar9,0);
    dVar14 = (double)local_3c8._0_8_ * (double)local_3c8._0_8_ + local_3d8 * local_3d8;
    dVar16 = (double)local_3c8._8_8_ * (double)local_3c8._8_8_ + dStack_3d0 * dStack_3d0;
    auVar33._0_8_ = dVar14 + dVar16;
    auVar33._8_8_ = dVar14 + dVar16;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
    auVar37 = sqrtpd(auVar33,auVar33);
    auVar26 = divpd(auVar26,auVar37);
    auVar41._0_8_ = auVar26._0_8_ * (double)local_3c8._0_8_;
    auVar41._8_8_ = auVar26._8_8_ * (double)local_3c8._8_8_;
    local_378 = (double)((ulonglong)(local_3d8 * auVar26._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
    dStack_370 = (double)((ulonglong)(dStack_3d0 * auVar26._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
    local_368 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar21);
    local_358 = dStack_1d8;
    dStack_350 = local_1d0;
    local_348 = local_1c8;
    dStack_340 = 0.0;
  }
  dVar14 = auVar20._8_8_ * 0.0;
  local_328._8_4_ = SUB84(dVar14,0);
  local_328._0_8_ = dVar15 * 1.0;
  local_328._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  auVar20 = divpd(*(undefined1 (*) [16])(param_6 + 0x28),auVar39);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *(double *)(param_6 + 0x38);
  auVar26 = divpd(auVar27,auVar39);
  auVar20 = roundpd(auVar20,auVar20,3);
  auVar26 = roundpd(auVar26,auVar26,3);
  dVar14 = (*(double *)*(undefined1 (*) [16])(param_6 + 0x28) - auVar20._0_8_ * dVar19) *
           0.008726646259971648;
  dVar15 = (*(double *)(param_6 + 0x30) - auVar20._8_8_ * dVar44) * 0.008726646259971648;
  dVar19 = (*(double *)(param_6 + 0x38) - auVar26._0_8_ * dVar19) * 0.008726646259971648;
  dVar44 = (0.0 - auVar26._8_8_ * dVar44) * 0.008726646259971648;
  dVar17 = sin(dVar14);
  dVar18 = sin(dVar15);
  dVar11 = sin(dVar19);
  sin(dVar44);
  dVar14 = cos(dVar14);
  dVar15 = cos(dVar15);
  dVar19 = cos(dVar19);
  cos(dVar44);
  auVar26 = _DAT_149934d80;
  dVar44 = -(dVar15 * dVar17 * dVar11) + dVar18 * dVar14 * dVar19;
  dVar16 = dVar18 * dVar17 * dVar11 + dVar15 * dVar14 * dVar19;
  dVar12 = dVar17 * dVar18 * dVar19 - dVar14 * dVar15 * dVar11;
  dVar17 = -(dVar17 * dVar15 * dVar19) - dVar14 * dVar18 * dVar11;
  local_3b8 = 0.0;
  dStack_3b0 = 0.0;
  local_3a8 = 0.0;
  dStack_3a0 = 0.0;
  local_398 = *(undefined1 (*) [16])(param_5 + 8);
  dVar19 = local_398._0_8_;
  dVar15 = local_398._8_8_;
  auVar20 = *(undefined1 (*) [16])(param_5 + 10);
  dVar14 = auVar20._0_8_;
  auVar39 = minpd(_DAT_149934d80,local_398);
  auVar37 = minpd(ZEXT816(0x3ff0000000000000),auVar20);
  auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  iVar4 = movmskpd(extraout_EAX_00,auVar40);
  auVar39._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
  auVar39._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
  uVar6 = movmskpd(uVar5,auVar39);
  if ((uVar6 & 0x3fffffff) == 0 && iVar4 == 0) {
    dVar47 = *param_5;
    dVar36 = param_5[1];
    dVar11 = param_5[3];
    dVar18 = param_5[3];
    dVar30 = param_5[1];
    dVar13 = param_5[1];
    dVar46 = param_5[2];
    dVar3 = param_5[3];
    dVar1 = param_5[2];
    dVar43 = param_5[2];
    local_3d8 = dVar17 * dVar1 * -1.0 + dVar44 * dVar30 + dVar16 * *param_5 * 1.0 + dVar12 * dVar11;
    dStack_3d0 = dVar12 * dVar43 * 1.0 +
                 dVar16 * dVar13 + dVar44 * *param_5 * -1.0 + dVar17 * dVar18;
    dVar24 = *(double *)(param_6 + 0x10) * dVar19;
    dVar28 = *(double *)(param_6 + 0x18) * dVar15;
    dVar25 = *(double *)(param_6 + 0x20) * dVar14;
    dVar29 = auVar20._8_8_ * 0.0;
    dVar32 = dVar28 * dVar47 - dVar24 * dVar36;
    dVar35 = dVar25 * dVar36 - dVar28 * dVar46;
    dVar31 = dVar24 * dVar46 - dVar25 * dVar47;
    dVar45 = dVar29 * dVar3 - dVar29 * dVar3;
    dVar35 = dVar35 + dVar35;
    dVar31 = dVar31 + dVar31;
    dVar32 = dVar32 + dVar32;
    dVar45 = dVar45 + dVar45;
    local_3b8 = (dVar32 * dVar36 - dVar46 * dVar31) + dVar11 * dVar35 + dVar24 + param_5[4];
    dStack_3b0 = (dVar35 * dVar46 - dVar32 * dVar47) + dVar18 * dVar31 + dVar28 + param_5[5];
    local_3a8 = (dVar31 * dVar47 - dVar36 * dVar35) + dVar11 * dVar32 + dVar25 + param_5[6];
    dStack_3a0 = (dVar45 * dVar3 - dVar45 * dVar3) + dVar18 * dVar45 + dVar29 + param_5[7];
    local_3c8._8_8_ =
         dVar44 * dVar43 * -1.0 + ((*param_5 * dVar12 * -1.0 + dVar16 * dVar18) - dVar17 * dVar13);
    local_3c8._0_8_ =
         dVar16 * dVar1 * 1.0 + ((*param_5 * dVar17 * 1.0 + dVar44 * dVar11) - dVar12 * dVar30);
  }
  else {
    dVar30 = *param_5;
    dVar43 = param_5[1];
    dVar1 = param_5[2];
    dVar32 = dVar43 + dVar43;
    dVar45 = dVar1 + dVar1;
    dVar13 = dVar30 * (dVar30 + dVar30);
    dVar11 = (DAT_149934d80._8_8_ - (dVar1 * dVar45 + dVar13)) * dVar15;
    dVar18 = param_5[3];
    dVar31 = dVar45 * dVar18;
    dVar47 = (dVar30 + dVar30) * param_5[3];
    dVar18 = dVar32 * dVar18;
    dStack_2b0 = (dVar45 * dVar43 - dVar47) * dVar14;
    local_2b8 = (dVar18 + *param_5 * dVar45) * dVar14;
    local_2c8 = (dVar45 * dVar43 + dVar47) * dVar15;
    local_2f8._8_8_ = (dVar32 * dVar30 + dVar31) * dVar19;
    local_2f8._0_8_ = ((double)DAT_149934d80 - (dVar1 * dVar45 + dVar43 * dVar32)) * dVar19;
    local_2a8 = (1.0 - (dVar13 + dVar43 * dVar32)) * dVar14;
    local_2e8 = (*param_5 * dVar45 - dVar18) * dVar19;
    dStack_2e0 = 0.0;
    local_2d8._8_4_ = SUB84(dVar11,0);
    local_2d8._0_8_ = (dVar32 * dVar30 - dVar31) * dVar15;
    local_2d8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dStack_2c0 = 0.0;
    dStack_2a0 = 0.0;
    dStack_298 = param_5[4];
    dStack_290 = param_5[5];
    local_288 = param_5[6];
    dStack_280 = 1.0;
    dVar13 = dVar17 + dVar17;
    dVar11 = dVar44 + dVar44;
    dVar18 = dVar12 * (dVar12 + dVar12);
    local_178 = (double)DAT_149934d80 - (dVar44 * dVar11 + dVar17 * dVar13);
    dStack_150 = DAT_149934d80._8_8_ - (dVar44 * dVar11 + dVar18);
    local_128 = 1.0 - (dVar18 + dVar17 * dVar13);
    dVar44 = (dVar12 + dVar12) * dVar16;
    dStack_170 = dVar13 * dVar12 + dVar11 * dVar16;
    local_148 = dVar11 * dVar17 + dVar44;
    local_158 = dVar13 * dVar12 - dVar11 * dVar16;
    dVar44 = dVar11 * dVar17 - dVar44;
    local_168 = dVar12 * dVar11 - dVar13 * dVar16;
    uStack_160 = 0;
    uStack_140 = 0;
    local_138._8_4_ = SUB84(dVar44,0);
    local_138._0_8_ = dVar13 * dVar16 + dVar12 * dVar11;
    local_138._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    uStack_120 = 0;
    uStack_100 = 0x3ff0000000000000;
    local_118 = *(double *)(param_6 + 0x10);
    dStack_110 = *(double *)(param_6 + 0x18);
    local_108 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(local_238);
    FUN_144a1c686(local_238,0x3e45798ee0000000);
    auVar22._8_8_ = -(ulonglong)(0.0 <= dVar15);
    auVar22._0_8_ = -(ulonglong)(0.0 <= dVar19);
    auVar39 = blendvpd(_DAT_149936790,auVar26,auVar22);
    uVar10 = -(ulonglong)(0.0 <= dVar14 * 1.0);
    dVar44 = (double)(~uVar10 & 0xbff0000000000000 | uVar10 & 0x3ff0000000000000);
    dVar16 = auVar39._0_8_;
    local_228 = local_228 * dVar16;
    local_238._8_8_ = (double)local_238._8_8_ * dVar16;
    local_238._0_8_ = (double)local_238._0_8_ * dVar16;
    dVar16 = auVar39._8_8_;
    local_208 = local_208 * dVar16;
    local_218._8_8_ = (double)local_218._8_8_ * dVar16;
    local_218._0_8_ = dVar16 * (double)local_218._0_8_;
    local_1e8 = local_1e8 * dVar44;
    local_1f0 = local_1f0 * dVar44;
    local_1f8 = dVar44 * local_1f8;
    FUN_14481fd10(&local_318,local_238);
    dVar44 = local_308[0] * local_308[0] + local_318 * local_318;
    dVar16 = local_308[1] * local_308[1] + dStack_310 * dStack_310;
    auVar34._0_8_ = dVar44 + dVar16;
    auVar34._8_8_ = dVar44 + dVar16;
    auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
    auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
    auVar39 = sqrtpd(auVar34,auVar34);
    auVar26 = divpd(auVar26,auVar39);
    auVar48._0_8_ = auVar26._0_8_ * local_308[0];
    auVar48._8_8_ = auVar26._8_8_ * local_308[1];
    local_3d8 = (double)((ulonglong)(local_318 * auVar26._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
    dStack_3d0 = (double)((ulonglong)(dStack_310 * auVar26._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
    local_3c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar23);
    local_3b8 = dStack_1d8;
    dStack_3b0 = local_1d0;
    local_3a8 = local_1c8;
    dStack_3a0 = 0.0;
  }
  dVar44 = auVar20._8_8_ * 0.0;
  local_388._8_4_ = SUB84(dVar44,0);
  local_388._0_8_ = dVar14 * 1.0;
  local_388._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  local_1c8 = *(double *)(param_4 + 0x50) * 0.5;
  local_200 = *(double *)(param_4 + 0x48) * 0.5;
  local_220 = *(double *)(param_4 + 0x40) * 0.5;
  local_288 = *(double *)(param_6 + 0x50) * 0.5;
  dStack_2c0 = *(double *)(param_6 + 0x48) * 0.5;
  dStack_2e0 = *(double *)(param_6 + 0x40) * 0.5;
  local_228 = -local_1c8;
  local_1d0 = -local_200;
  local_208 = -local_220;
  local_238._8_4_ = SUB84(local_200,0);
  local_238._0_8_ = local_208;
  local_238._12_4_ = (int)((ulonglong)local_1d0 >> 0x20);
  local_218._8_4_ = SUB84(local_1c8,0);
  local_218._0_8_ = local_1d0;
  local_218._12_4_ = (int)((ulonglong)local_228 >> 0x20);
  local_1f8 = local_228;
  local_1f0 = local_220;
  local_1e8 = local_200;
  local_1e0 = local_228;
  dStack_1d8 = local_208;
  local_1c0 = local_220;
  local_1b8 = local_1d0;
  local_1b0 = local_1c8;
  local_1a8 = local_208;
  local_1a0 = local_200;
  local_198 = local_1c8;
  local_190 = local_220;
  local_188 = local_200;
  local_180 = local_1c8;
  local_2e8 = -local_288;
  dStack_290 = -dStack_2c0;
  local_2c8 = -dStack_2e0;
  local_2f8._8_4_ = SUB84(dStack_2c0,0);
  local_2f8._0_8_ = local_2c8;
  local_2f8._12_4_ = (int)((ulonglong)dStack_290 >> 0x20);
  local_2d8._8_4_ = SUB84(local_288,0);
  local_2d8._0_8_ = dStack_290;
  local_2d8._12_4_ = (int)((ulonglong)local_2e8 >> 0x20);
  local_2b8 = local_2e8;
  dStack_2b0 = dStack_2e0;
  local_2a8 = dStack_2c0;
  dStack_2a0 = local_2e8;
  dStack_298 = local_2c8;
  dStack_280 = dStack_2e0;
  local_278 = dStack_290;
  local_270 = local_288;
  local_268 = local_2c8;
  local_260 = dStack_2c0;
  local_258 = local_288;
  local_250 = dStack_2e0;
  local_248[0] = dStack_2c0;
  local_248[1] = local_288;
  lVar8 = 0x10;
  do {
    dVar18 = *(double *)((longlong)local_248 + lVar8) * (double)local_338._0_8_;
    dVar11 = *(double *)(local_238 + lVar8 + -8) * (double)local_338._8_8_;
    dVar12 = *(double *)(local_238 + lVar8) * (double)local_328._0_8_;
    dVar44 = dVar11 * local_378 - dStack_370 * dVar18;
    dVar16 = dVar12 * dStack_370 - (double)local_368._0_8_ * dVar11;
    dVar17 = dVar18 * (double)local_368._0_8_ - local_378 * dVar12;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    dVar44 = dVar44 + dVar44;
    dVar11 = ((double)local_368._0_8_ * dVar16 - local_378 * dVar44) +
             (double)local_368._8_8_ * dVar17 + dVar11;
    auVar20._8_4_ = SUB84(dVar11,0);
    auVar20._0_8_ =
         (dVar44 * dStack_370 - dVar17 * (double)local_368._0_8_) +
         (double)local_368._8_8_ * dVar16 + dVar18;
    auVar20._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_248 + lVar8) = auVar20;
    *(double *)(local_238 + lVar8) =
         dVar44 * (double)local_368._8_8_ + dVar12 + (dVar17 * local_378 - dVar16 * dStack_370);
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd0);
  lVar8 = 0x10;
  do {
    dVar16 = *(double *)((longlong)local_308 + lVar8) * dVar19;
    dVar17 = *(double *)(local_2f8 + lVar8 + -8) * dVar15;
    dVar44 = *(double *)(local_2f8 + lVar8) * dVar14 * 1.0;
    dVar11 = dVar17 * local_3d8 - dStack_3d0 * dVar16;
    dVar12 = dVar44 * dStack_3d0 - (double)local_3c8._0_8_ * dVar17;
    dVar18 = dVar16 * (double)local_3c8._0_8_ - local_3d8 * dVar44;
    dVar12 = dVar12 + dVar12;
    dVar18 = dVar18 + dVar18;
    dVar11 = dVar11 + dVar11;
    dVar17 = ((double)local_3c8._0_8_ * dVar12 - local_3d8 * dVar11) +
             (double)local_3c8._8_8_ * dVar18 + dVar17;
    auVar2._8_4_ = SUB84(dVar17,0);
    auVar2._0_8_ = (dVar11 * dStack_3d0 - dVar18 * (double)local_3c8._0_8_) +
                   (double)local_3c8._8_8_ * dVar12 + dVar16;
    auVar2._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_308 + lVar8) = auVar2;
    *(double *)(local_2f8 + lVar8) =
         dVar11 * (double)local_3c8._8_8_ + dVar44 + (dVar18 * local_3d8 - dVar12 * dStack_3d0);
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd0);
  local_3e8 = param_7;
  local_3f0 = local_2f8;
  local_3f8 = &LAB_142b5f570;
  local_400 = param_6;
  local_408 = &local_3d8;
  local_410 = local_238;
  local_418 = &LAB_142b5f570;
  local_428 = &local_378;
  local_3e0 = 0;
  local_420 = param_4;
  FUN_14044bf58(param_1,param_2,param_3,param_5);
  if ((local_f0 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14044f75a FUN_14044f75a body=4170 status=ok
// SIG undefined FUN_14044f75a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044f75a(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 extraout_EAX;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  double *pdVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auStack_418 [32];
  undefined1 *local_3f8;
  longlong local_3f0;
  undefined1 *local_3e8;
  undefined8 local_3e0;
  double *local_3d8;
  longlong local_3d0;
  undefined1 *local_3c8;
  undefined1 *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8 [2];
  undefined1 local_2b8 [16];
  double local_2a8;
  double local_2a0;
  undefined1 local_298 [16];
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
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
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  auVar40 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_318 = ZEXT816(0);
  local_308 = 0.0;
  dStack_300 = 0.0;
  auVar2 = *(undefined1 (*) [16])(param_3 + 8);
  dVar20 = auVar2._0_8_;
  dVar22 = auVar2._8_8_;
  auVar21 = *(undefined1 (*) [16])(param_3 + 10);
  dVar13 = auVar21._0_8_;
  dVar24 = (double)DAT_149934d80;
  dVar29 = DAT_149934d80._8_8_;
  auVar14 = minpd(_DAT_149934d80,auVar2);
  auVar30 = minpd(ZEXT816(0x3ff0000000000000),auVar21);
  auVar15._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar15._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  iVar3 = movmskpd((int)local_f0,auVar15);
  auVar14._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar14._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  uVar4 = movmskpd((int)param_1,auVar14);
  if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
    dVar35 = *param_3;
    dVar36 = param_3[1];
    dVar37 = param_3[2];
    dVar38 = param_3[3];
    dVar33 = param_3[3];
    dVar1 = param_3[3];
    dVar20 = *(double *)(param_4 + 0x10) * dVar20;
    dVar22 = *(double *)(param_4 + 0x18) * dVar22;
    dVar23 = *(double *)(param_4 + 0x20) * dVar13;
    dVar27 = auVar21._8_8_ * 0.0;
    dVar39 = dVar22 * dVar35 - dVar20 * dVar36;
    dVar28 = dVar23 * dVar36 - dVar22 * dVar37;
    dVar9 = dVar20 * dVar37 - dVar23 * dVar35;
    dVar19 = dVar27 * dVar38 - dVar27 * dVar38;
    dVar28 = dVar28 + dVar28;
    dVar9 = dVar9 + dVar9;
    dVar39 = dVar39 + dVar39;
    dVar19 = dVar19 + dVar19;
    dVar10 = param_3[1];
    dVar11 = param_3[1];
    dVar12 = dVar37 * 0.0 * 1.0 + dVar11 * 1.0 + *param_3 * 0.0 * -1.0 + dVar1 * 0.0;
    dVar22 = (dVar28 * dVar37 - dVar39 * dVar35) + dVar1 * dVar9 + dVar22 + param_3[5];
    local_308 = (dVar9 * dVar35 - dVar36 * dVar28) + dVar33 * dVar39 + dVar23 + param_3[6];
    dStack_300 = (dVar19 * dVar38 - dVar19 * dVar38) + dVar1 * dVar19 + dVar27 + param_3[7];
    local_338._8_4_ = SUB84(dVar12,0);
    local_338._0_8_ = dVar37 * 0.0 * -1.0 + dVar10 * 0.0 + *param_3 * 1.0 * 1.0 + dVar33 * 0.0;
    local_338._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_328._8_8_ = param_3[2] * 0.0 * -1.0 + ((dVar35 * 0.0 * -1.0 + dVar1 * 1.0) - dVar11 * 0.0)
    ;
    local_328._0_8_ = param_3[2] * 1.0 * 1.0 + ((dVar35 * 0.0 * 1.0 + dVar33 * 0.0) - dVar10 * 0.0);
    local_318._8_4_ = SUB84(dVar22,0);
    local_318._0_8_ = (dVar39 * dVar36 - dVar37 * dVar9) + dVar33 * dVar28 + dVar20 + param_3[4];
    local_318._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uVar5 = 0;
    local_3a8 = auVar2;
  }
  else {
    dVar10 = *param_3;
    dVar11 = param_3[1];
    dVar12 = param_3[2];
    dVar39 = dVar11 + dVar11;
    dVar28 = dVar12 + dVar12;
    dVar1 = dVar10 * (dVar10 + dVar10);
    local_178 = (dVar24 - (dVar12 * dVar28 + dVar11 * dVar39)) * dVar20;
    dVar33 = param_3[3];
    dVar9 = dVar28 * dVar33;
    dVar35 = (dVar10 + dVar10) * param_3[3];
    dVar33 = dVar39 * dVar33;
    dStack_130 = (dVar28 * dVar11 - dVar35) * dVar13;
    local_138 = (dVar33 + *param_3 * dVar28) * dVar13;
    dStack_170 = (dVar39 * dVar10 + dVar9) * dVar20;
    local_148 = (dVar28 * dVar11 + dVar35) * dVar22;
    local_168 = (*param_3 * dVar28 - dVar33) * dVar20;
    uStack_160 = 0;
    local_158._8_8_ = (dVar29 - (dVar12 * dVar28 + dVar1)) * dVar22;
    local_158._0_8_ = (dVar39 * dVar10 - dVar9) * dVar22;
    uStack_140 = 0;
    local_128 = (1.0 - (dVar1 + dVar11 * dVar39)) * dVar13;
    uStack_120 = 0;
    local_118 = param_3[4];
    dStack_110 = param_3[5];
    local_108 = param_3[6];
    uStack_100 = 0x3ff0000000000000;
    local_1f8 = 1.0;
    dStack_1f0 = 0.0;
    local_1e8 = 0.0;
    uStack_1e0 = 0;
    local_1c8 = 0.0;
    uStack_1c0 = 0;
    local_1b8 = ZEXT816(0);
    local_1a8 = 1.0;
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    local_1d8 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_198 = *(double *)(param_4 + 0x10);
    dStack_190 = *(double *)(param_4 + 0x18);
    local_188 = *(double *)(param_4 + 0x20);
    FUN_1447fea8d(local_2b8);
    FUN_144a1c686(local_2b8,0x3e45798ee0000000);
    auVar30._8_8_ = -(ulonglong)(0.0 <= dVar22);
    auVar30._0_8_ = -(ulonglong)(0.0 <= dVar20);
    auVar14 = blendvpd(_DAT_149936790,auVar40,auVar30);
    uVar8 = -(ulonglong)(0.0 <= dVar13 * 1.0);
    dVar20 = (double)(~uVar8 & 0xbff0000000000000 | uVar8 & 0x3ff0000000000000);
    dVar22 = auVar14._0_8_;
    local_2a8 = local_2a8 * dVar22;
    local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar22;
    local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar22;
    dVar22 = auVar14._8_8_;
    local_288 = local_288 * dVar22;
    local_298._8_8_ = (double)local_298._8_8_ * dVar22;
    local_298._0_8_ = dVar22 * (double)local_298._0_8_;
    local_268 = local_268 * dVar20;
    local_270 = local_270 * dVar20;
    local_278 = dVar20 * local_278;
    pdVar7 = &local_398;
    FUN_14481fd10(pdVar7,local_2b8);
    uVar5 = SUB84(pdVar7,0);
    dVar20 = (double)local_388._0_8_ * (double)local_388._0_8_ + local_398 * local_398;
    dVar22 = (double)local_388._8_8_ * (double)local_388._8_8_ + dStack_390 * dStack_390;
    auVar32._0_8_ = dVar20 + dVar22;
    auVar32._8_8_ = dVar20 + dVar22;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    auVar14 = sqrtpd(auVar32,auVar32);
    auVar14 = divpd(auVar40,auVar14);
    auVar34._0_8_ = auVar14._0_8_ * (double)local_388._0_8_;
    auVar34._8_8_ = auVar14._8_8_ * (double)local_388._8_8_;
    local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar16);
    local_338._8_8_ =
         (ulonglong)(dStack_390 * auVar14._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    local_338._0_8_ =
         (ulonglong)(local_398 * auVar14._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    local_318._8_8_ = local_250;
    local_318._0_8_ = dStack_258;
    local_308 = local_248;
    dStack_300 = 0.0;
  }
  dStack_2e0 = auVar21._8_8_ * 0.0;
  local_2e8 = dVar13 * 1.0;
  auVar21 = divpd(*(undefined1 (*) [16])(param_6 + 0x28),_DAT_1499387d0);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(double *)(param_6 + 0x38);
  auVar14 = divpd(auVar25,_DAT_1499387d0);
  auVar21 = roundpd(auVar21,auVar21,3);
  auVar14 = roundpd(auVar14,auVar14,3);
  dVar20 = (*(double *)*(undefined1 (*) [16])(param_6 + 0x28) -
           auVar21._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar13 = (*(double *)(param_6 + 0x30) - auVar21._8_8_ * DAT_1499387d0._8_8_) *
           0.008726646259971648;
  dVar22 = (*(double *)(param_6 + 0x38) - auVar14._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar33 = (0.0 - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  local_2f8 = auVar2._0_4_;
  uStack_2f4 = auVar2._4_4_;
  uStack_2f0 = auVar2._8_4_;
  uStack_2ec = auVar2._12_4_;
  dVar10 = sin(dVar20);
  dVar11 = sin(dVar13);
  dVar12 = sin(dVar22);
  sin(dVar33);
  dVar20 = cos(dVar20);
  dVar13 = cos(dVar13);
  dVar22 = cos(dVar22);
  cos(dVar33);
  dVar33 = -(dVar13 * dVar10 * dVar12) + dVar11 * dVar20 * dVar22;
  dVar1 = dVar11 * dVar10 * dVar12 + dVar13 * dVar20 * dVar22;
  dVar39 = dVar10 * dVar11 * dVar22 - dVar20 * dVar13 * dVar12;
  dVar10 = -(dVar10 * dVar13 * dVar22) - dVar20 * dVar11 * dVar12;
  local_378 = 0.0;
  dStack_370 = 0.0;
  local_368 = 0.0;
  dStack_360 = 0.0;
  local_358 = *(undefined1 (*) [16])(param_5 + 8);
  dVar20 = local_358._0_8_;
  dVar22 = local_358._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_5 + 10);
  dVar13 = auVar2._0_8_;
  auVar21 = minpd(auVar40,local_358);
  auVar14 = minpd(ZEXT816(0x3ff0000000000000),auVar2);
  auVar31._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar3 = movmskpd(extraout_EAX,auVar31);
  auVar21._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  uVar4 = movmskpd(uVar5,auVar21);
  if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
    dVar35 = *param_5;
    dVar36 = param_5[1];
    dVar24 = param_5[3];
    dVar29 = param_5[3];
    dVar12 = param_5[1];
    dVar11 = param_5[1];
    dVar37 = param_5[2];
    dVar38 = param_5[3];
    dVar28 = param_5[2];
    dVar9 = param_5[2];
    local_398 = dVar10 * dVar28 * -1.0 + dVar33 * dVar12 + dVar1 * *param_5 * 1.0 + dVar39 * dVar24;
    dStack_390 = dVar39 * dVar9 * 1.0 + dVar1 * dVar11 + dVar33 * *param_5 * -1.0 + dVar10 * dVar29;
    local_388._0_8_ =
         dVar1 * dVar28 * 1.0 + ((*param_5 * dVar10 * 1.0 + dVar33 * dVar24) - dVar39 * dVar12);
    local_388._8_8_ =
         dVar33 * dVar9 * -1.0 + ((*param_5 * dVar39 * -1.0 + dVar1 * dVar29) - dVar10 * dVar11);
    dVar39 = *(double *)(param_6 + 0x10) * dVar20;
    dVar28 = *(double *)(param_6 + 0x18) * dVar22;
    dVar11 = *(double *)(param_6 + 0x20) * dVar13;
    dVar12 = auVar2._8_8_ * 0.0;
    dVar33 = dVar28 * dVar35 - dVar39 * dVar36;
    dVar9 = dVar11 * dVar36 - dVar28 * dVar37;
    dVar10 = dVar39 * dVar37 - dVar11 * dVar35;
    dVar1 = dVar12 * dVar38 - dVar12 * dVar38;
    dVar9 = dVar9 + dVar9;
    dVar10 = dVar10 + dVar10;
    dVar33 = dVar33 + dVar33;
    dVar1 = dVar1 + dVar1;
    local_378 = (dVar33 * dVar36 - dVar37 * dVar10) + dVar24 * dVar9 + dVar39 + param_5[4];
    dStack_370 = (dVar9 * dVar37 - dVar33 * dVar35) + dVar29 * dVar10 + dVar28 + param_5[5];
    local_368 = (dVar10 * dVar35 - dVar36 * dVar9) + dVar24 * dVar33 + dVar11 + param_5[6];
    dStack_360 = (dVar1 * dVar38 - dVar1 * dVar38) + dVar29 * dVar1 + dVar12 + param_5[7];
  }
  else {
    dVar9 = *param_5;
    dVar35 = param_5[1];
    dVar11 = param_5[2];
    dVar36 = dVar35 + dVar35;
    dVar37 = dVar11 + dVar11;
    dVar28 = dVar9 * (dVar9 + dVar9);
    local_178 = (dVar24 - (dVar11 * dVar37 + dVar35 * dVar36)) * dVar20;
    dVar12 = (dVar29 - (dVar11 * dVar37 + dVar28)) * dVar22;
    dVar11 = param_5[3];
    dVar38 = dVar37 * dVar11;
    dVar19 = (dVar9 + dVar9) * param_5[3];
    dVar11 = dVar36 * dVar11;
    dStack_130 = (dVar37 * dVar35 - dVar19) * dVar13;
    local_138 = (dVar11 + *param_5 * dVar37) * dVar13;
    dStack_170 = (dVar36 * dVar9 + dVar38) * dVar20;
    local_148 = (dVar37 * dVar35 + dVar19) * dVar22;
    local_128 = (1.0 - (dVar28 + dVar35 * dVar36)) * dVar13;
    local_168 = (*param_5 * dVar37 - dVar11) * dVar20;
    uStack_160 = 0;
    local_158._8_4_ = SUB84(dVar12,0);
    local_158._0_8_ = (dVar36 * dVar9 - dVar38) * dVar22;
    local_158._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_5[4];
    dStack_110 = param_5[5];
    local_108 = param_5[6];
    uStack_100 = 0x3ff0000000000000;
    dVar28 = dVar10 + dVar10;
    dVar12 = dVar33 + dVar33;
    dVar11 = dVar39 * (dVar39 + dVar39);
    local_1f8 = dVar24 - (dVar33 * dVar12 + dVar10 * dVar28);
    local_1a8 = 1.0 - (dVar11 + dVar10 * dVar28);
    dVar24 = (dVar39 + dVar39) * dVar1;
    dStack_1f0 = dVar28 * dVar39 + dVar12 * dVar1;
    local_1c8 = dVar12 * dVar10 + dVar24;
    dVar24 = dVar12 * dVar10 - dVar24;
    local_1e8 = dVar39 * dVar12 - dVar28 * dVar1;
    uStack_1e0 = 0;
    local_1d8._8_8_ = dVar29 - (dVar33 * dVar12 + dVar11);
    local_1d8._0_8_ = dVar28 * dVar39 - dVar12 * dVar1;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar24,0);
    local_1b8._0_8_ = dVar28 * dVar1 + dVar39 * dVar12;
    local_1b8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    local_198 = *(double *)(param_6 + 0x10);
    dStack_190 = *(double *)(param_6 + 0x18);
    local_188 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(local_2b8);
    FUN_144a1c686(local_2b8,0x3e45798ee0000000);
    auVar17._8_8_ = -(ulonglong)(0.0 <= dVar22);
    auVar17._0_8_ = -(ulonglong)(0.0 <= dVar20);
    auVar21 = blendvpd(_DAT_149936790,auVar40,auVar17);
    uVar8 = -(ulonglong)(0.0 <= dVar13 * 1.0);
    dVar24 = (double)(~uVar8 & 0xbff0000000000000 | uVar8 & 0x3ff0000000000000);
    dVar29 = auVar21._0_8_;
    local_2a8 = local_2a8 * dVar29;
    local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar29;
    local_2b8._0_8_ = (double)local_2b8._0_8_ * dVar29;
    dVar29 = auVar21._8_8_;
    local_288 = local_288 * dVar29;
    local_298._8_8_ = (double)local_298._8_8_ * dVar29;
    local_298._0_8_ = dVar29 * (double)local_298._0_8_;
    local_268 = local_268 * dVar24;
    local_270 = local_270 * dVar24;
    local_278 = dVar24 * local_278;
    FUN_14481fd10(&local_2d8,local_2b8);
    dVar24 = local_2c8[0] * local_2c8[0] + local_2d8 * local_2d8;
    dVar29 = local_2c8[1] * local_2c8[1] + dStack_2d0 * dStack_2d0;
    auVar26._0_8_ = dVar24 + dVar29;
    auVar26._8_8_ = dVar24 + dVar29;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
    auVar21 = sqrtpd(auVar26,auVar26);
    auVar21 = divpd(auVar40,auVar21);
    auVar40._0_8_ = auVar21._0_8_ * local_2c8[0];
    auVar40._8_8_ = auVar21._8_8_ * local_2c8[1];
    local_398 = (double)((ulonglong)(local_2d8 * auVar21._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
    dStack_390 = (double)((ulonglong)(dStack_2d0 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
    local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar18);
    local_378 = dStack_258;
    dStack_370 = local_250;
    local_368 = local_248;
    dStack_360 = 0.0;
  }
  dVar24 = auVar2._8_8_ * 0.0;
  local_348._8_4_ = SUB84(dVar24,0);
  local_348._0_8_ = dVar13 * 1.0;
  local_348._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  local_248 = *(double *)(param_6 + 0x50) * 0.5;
  local_280 = *(double *)(param_6 + 0x48) * 0.5;
  local_2a0 = *(double *)(param_6 + 0x40) * 0.5;
  local_2a8 = -local_248;
  local_250 = -local_280;
  local_288 = -local_2a0;
  local_2b8._8_4_ = SUB84(local_280,0);
  local_2b8._0_8_ = local_288;
  local_2b8._12_4_ = (int)((ulonglong)local_250 >> 0x20);
  local_298._8_4_ = SUB84(local_248,0);
  local_298._0_8_ = local_250;
  local_298._12_4_ = (int)((ulonglong)local_2a8 >> 0x20);
  local_278 = local_2a8;
  local_270 = local_2a0;
  local_268 = local_280;
  local_260 = local_2a8;
  dStack_258 = local_288;
  local_240 = local_2a0;
  local_238 = local_250;
  local_230 = local_248;
  local_228 = local_288;
  local_220 = local_280;
  local_218 = local_248;
  local_210 = local_2a0;
  local_208 = local_280;
  local_200 = local_248;
  dVar24 = local_388._0_8_;
  dVar29 = local_388._8_8_;
  lVar6 = 0x10;
  do {
    dVar33 = *(double *)((longlong)local_2c8 + lVar6) * dVar20;
    dVar1 = *(double *)(local_2b8 + lVar6 + -8) * dVar22;
    dVar11 = *(double *)(local_2b8 + lVar6) * dVar13 * 1.0;
    dVar12 = dVar1 * local_398 - dStack_390 * dVar33;
    dVar39 = dVar11 * dStack_390 - dVar24 * dVar1;
    dVar10 = dVar33 * dVar24 - local_398 * dVar11;
    dVar39 = dVar39 + dVar39;
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar12 + dVar12;
    dVar1 = (dVar24 * dVar39 - local_398 * dVar12) + dVar29 * dVar10 + dVar1;
    auVar2._8_4_ = SUB84(dVar1,0);
    auVar2._0_8_ = (dVar12 * dStack_390 - dVar10 * dVar24) + dVar29 * dVar39 + dVar33;
    auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_2c8 + lVar6) = auVar2;
    *(double *)(local_2b8 + lVar6) =
         dVar12 * dVar29 + dVar11 + (dVar10 * local_398 - dVar39 * dStack_390);
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0xd0);
  local_3b0 = 0;
  local_3b8 = param_7;
  local_3c0 = local_2b8;
  local_3c8 = &LAB_142b5f570;
  local_3d0 = param_6;
  local_3d8 = &local_398;
  local_3e0 = 0;
  local_3e8 = &LAB_14083879e;
  local_3f8 = local_338;
  local_3f0 = param_4;
  FUN_14044bf58(param_1,param_2,param_3,param_5);
  if ((local_f0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404507a5 FUN_1404507a5 body=4630 status=ok
// SIG undefined FUN_1404507a5(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404507a5(undefined8 param_1,undefined8 param_2,double *param_3,longlong param_4,
                  double *param_5,longlong param_6,undefined8 param_7)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined4 extraout_EAX;
  undefined1 *puVar15;
  uint uVar16;
  double *pdVar17;
  longlong lVar18;
  undefined1 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  double dVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  double dVar37;
  double dVar38;
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auVar58 [16];
  undefined1 local_3a8 [16];
  double local_398 [2];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8 [6];
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
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
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  auVar36 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)local_328;
  dVar23 = *(double *)(param_4 + 0x40);
  dVar48 = *(double *)(param_4 + 0x48);
  dVar49 = *(double *)(param_4 + 0x50);
  dVar24 = *(double *)(param_4 + 0x58);
  local_318 = 0.0;
  dStack_310 = 0.0;
  local_308 = 0.0;
  dStack_300 = 0.0;
  auVar3 = *(undefined1 (*) [16])(param_3 + 8);
  dVar31 = auVar3._0_8_;
  dVar34 = auVar3._8_8_;
  auVar32 = *(undefined1 (*) [16])(param_3 + 10);
  dVar50 = auVar32._0_8_;
  auVar43 = minpd(_DAT_149934d80,auVar3);
  auVar46 = minpd(ZEXT816(0x3ff0000000000000),auVar32);
  auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
  auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
  iVar14 = movmskpd((int)local_f0,auVar44);
  auVar43._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
  auVar43._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
  uVar16 = movmskpd((int)param_1,auVar43);
  if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
    dVar53 = *param_3;
    dVar7 = param_3[1];
    dVar26 = param_3[3];
    dVar25 = param_3[3];
    dVar52 = param_3[1];
    dVar42 = param_3[1];
    dVar8 = param_3[2];
    dVar9 = param_3[3];
    dVar39 = param_3[2];
    dVar2 = param_3[2];
    local_338 = dVar48 * dVar39 * -1.0 + dVar49 * dVar52 + dVar24 * *param_3 * 1.0 + dVar23 * dVar26
    ;
    dStack_330 = dVar23 * dVar2 * 1.0 + dVar24 * dVar42 + dVar49 * *param_3 * -1.0 + dVar48 * dVar25
    ;
    dVar31 = *(double *)(param_4 + 0x20) * dVar31;
    dVar34 = *(double *)(param_4 + 0x28) * dVar34;
    dVar22 = *(double *)(param_4 + 0x30) * dVar50;
    dVar30 = auVar32._8_8_ * 0.0;
    dVar35 = dVar34 * dVar53 - dVar31 * dVar7;
    dVar37 = dVar22 * dVar7 - dVar34 * dVar8;
    dVar38 = dVar31 * dVar8 - dVar22 * dVar53;
    dVar51 = dVar30 * dVar9 - dVar30 * dVar9;
    dVar37 = dVar37 + dVar37;
    dVar38 = dVar38 + dVar38;
    dVar35 = dVar35 + dVar35;
    dVar51 = dVar51 + dVar51;
    local_318 = (dVar35 * dVar7 - dVar8 * dVar38) + dVar26 * dVar37 + dVar31 + param_3[4];
    dStack_310 = (dVar37 * dVar8 - dVar35 * dVar53) + dVar25 * dVar38 + dVar34 + param_3[5];
    local_308 = (dVar38 * dVar53 - dVar7 * dVar37) + dVar26 * dVar35 + dVar22 + param_3[6];
    dStack_300 = (dVar51 * dVar9 - dVar51 * dVar9) + dVar25 * dVar51 + dVar30 + param_3[7];
    local_328._8_8_ =
         dVar49 * dVar2 * -1.0 + ((*param_3 * dVar23 * -1.0 + dVar24 * dVar25) - dVar48 * dVar42);
    local_328._0_8_ =
         dVar24 * dVar39 * 1.0 + ((*param_3 * dVar48 * 1.0 + dVar49 * dVar26) - dVar23 * dVar52);
    uVar54 = 0;
  }
  else {
    dVar42 = *param_3;
    dVar52 = param_3[1];
    dVar2 = param_3[2];
    dVar39 = dVar52 + dVar52;
    dVar35 = dVar2 + dVar2;
    dVar26 = dVar42 * (dVar42 + dVar42);
    local_178 = ((double)DAT_149934d80 - (dVar2 * dVar35 + dVar52 * dVar39)) * dVar31;
    dVar25 = param_3[3];
    dVar51 = dVar35 * dVar25;
    dVar38 = (dVar42 + dVar42) * param_3[3];
    dVar25 = dVar39 * dVar25;
    dStack_130 = (dVar35 * dVar52 - dVar38) * dVar50;
    local_138 = (dVar25 + *param_3 * dVar35) * dVar50;
    dStack_170 = (dVar39 * dVar42 + dVar51) * dVar31;
    local_148 = (dVar35 * dVar52 + dVar38) * dVar34;
    local_128 = (1.0 - (dVar26 + dVar52 * dVar39)) * dVar50;
    local_168 = (*param_3 * dVar35 - dVar25) * dVar31;
    uStack_160 = 0;
    local_158._8_8_ = (DAT_149934d80._8_8_ - (dVar2 * dVar35 + dVar26)) * dVar34;
    local_158._0_8_ = (dVar39 * dVar42 - dVar51) * dVar34;
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_3[4];
    dStack_110 = param_3[5];
    local_108 = param_3[6];
    uStack_100 = 0x3ff0000000000000;
    dVar26 = dVar48 + dVar48;
    dVar25 = dVar49 + dVar49;
    dVar42 = dVar23 * (dVar23 + dVar23);
    local_1f8 = (double)DAT_149934d80 - (dVar49 * dVar25 + dVar48 * dVar26);
    dStack_1d0 = DAT_149934d80._8_8_ - (dVar49 * dVar25 + dVar42);
    local_1a8 = 1.0 - (dVar42 + dVar48 * dVar26);
    dVar49 = (dVar23 + dVar23) * dVar24;
    dStack_1f0 = dVar26 * dVar23 + dVar25 * dVar24;
    local_1c8 = dVar25 * dVar48 + dVar49;
    local_1d8 = dVar26 * dVar23 - dVar25 * dVar24;
    local_1e8 = dVar23 * dVar25 - dVar26 * dVar24;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_8_ = dVar25 * dVar48 - dVar49;
    local_1b8._0_8_ = dVar26 * dVar24 + dVar23 * dVar25;
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    pdVar1 = local_2c8 + 2;
    local_198 = *(double *)(param_4 + 0x20);
    dStack_190 = *(double *)(param_4 + 0x28);
    local_188 = *(double *)(param_4 + 0x30);
    FUN_1447fea8d(pdVar1);
    FUN_144a1c686(pdVar1,0x3e45798ee0000000);
    auVar46._8_8_ = -(ulonglong)(0.0 <= dVar34);
    auVar46._0_8_ = -(ulonglong)(0.0 <= dVar31);
    auVar43 = blendvpd(_DAT_149936790,auVar36,auVar46);
    uVar21 = -(ulonglong)(0.0 <= dVar50 * 1.0);
    dVar31 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
    dVar34 = auVar43._0_8_;
    local_2c8[4] = local_2c8[4] * dVar34;
    local_2c8[3] = local_2c8[3] * dVar34;
    local_2c8[2] = local_2c8[2] * dVar34;
    dVar34 = auVar43._8_8_;
    local_288 = local_288 * dVar34;
    dStack_290 = dStack_290 * dVar34;
    local_298 = dVar34 * local_298;
    local_268 = local_268 * dVar31;
    local_270 = local_270 * dVar31;
    local_278 = dVar31 * local_278;
    pdVar17 = local_398;
    FUN_14481fd10(pdVar17,pdVar1);
    uVar54 = SUB84(pdVar17,0);
    dVar31 = (double)local_388._0_8_ * (double)local_388._0_8_ + local_398[0] * local_398[0];
    dVar34 = (double)local_388._8_8_ * (double)local_388._8_8_ + local_398[1] * local_398[1];
    auVar40._0_8_ = dVar31 + dVar34;
    auVar40._8_8_ = dVar31 + dVar34;
    auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
    auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
    auVar43 = sqrtpd(auVar40,auVar40);
    auVar36 = divpd(auVar36,auVar43);
    auVar45._0_8_ = auVar36._0_8_ * (double)local_388._0_8_;
    auVar45._8_8_ = auVar36._8_8_ * (double)local_388._8_8_;
    local_338 = (double)((ulonglong)(local_398[0] * auVar36._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
    dStack_330 = (double)((ulonglong)(local_398[1] * auVar36._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
    local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar27);
    local_318 = dStack_258;
    dStack_310 = local_250;
    local_308 = local_248;
    dStack_300 = 0.0;
  }
  dVar31 = auVar32._8_8_ * 0.0;
  local_2e8._8_4_ = SUB84(dVar31,0);
  local_2e8._0_8_ = dVar50 * 1.0;
  local_2e8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  auVar32 = divpd(*(undefined1 (*) [16])(param_6 + 0x28),_DAT_1499387d0);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(double *)(param_6 + 0x38);
  auVar36 = divpd(auVar36,_DAT_1499387d0);
  auVar32 = roundpd(auVar32,auVar32,3);
  auVar36 = roundpd(auVar36,auVar36,3);
  dVar31 = (*(double *)*(undefined1 (*) [16])(param_6 + 0x28) -
           auVar32._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar34 = (*(double *)(param_6 + 0x30) - auVar32._8_8_ * DAT_1499387d0._8_8_) *
           0.008726646259971648;
  dVar48 = (*(double *)(param_6 + 0x38) - auVar36._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar49 = (0.0 - auVar36._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  local_2f8 = auVar3;
  dVar23 = sin(dVar31);
  dVar24 = sin(dVar34);
  dVar25 = sin(dVar48);
  sin(dVar49);
  dVar31 = cos(dVar31);
  dVar34 = cos(dVar34);
  dVar26 = cos(dVar48);
  cos(dVar49);
  auVar32 = _DAT_149934d80;
  dVar48 = -(dVar34 * dVar23 * dVar25) + dVar24 * dVar31 * dVar26;
  dVar49 = dVar24 * dVar23 * dVar25 + dVar34 * dVar31 * dVar26;
  dVar42 = dVar23 * dVar24 * dVar26 - dVar31 * dVar34 * dVar25;
  dVar24 = -(dVar23 * dVar34 * dVar26) - dVar31 * dVar24 * dVar25;
  local_378 = 0.0;
  dStack_370 = 0.0;
  local_368 = 0.0;
  dStack_360 = 0.0;
  local_358 = *(undefined1 (*) [16])(param_5 + 8);
  dVar31 = local_358._0_8_;
  dVar23 = local_358._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_5 + 10);
  dVar34 = auVar3._0_8_;
  auVar36 = minpd(_DAT_149934d80,local_358);
  auVar43 = minpd(ZEXT816(0x3ff0000000000000),auVar3);
  auVar33._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
  auVar33._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
  iVar14 = movmskpd(extraout_EAX,auVar33);
  auVar47._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
  auVar47._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
  uVar16 = movmskpd(uVar54,auVar47);
  if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
    dVar53 = *param_5;
    dVar7 = param_5[1];
    dVar52 = param_5[3];
    dVar2 = param_5[3];
    dVar35 = param_5[1];
    dVar39 = param_5[1];
    dVar8 = param_5[2];
    dVar9 = param_5[3];
    dVar51 = param_5[2];
    dVar38 = param_5[2];
    dVar25 = dVar24 * dVar51 * -1.0 + dVar48 * dVar35 + dVar49 * *param_5 * 1.0 + dVar42 * dVar52;
    dVar26 = dVar42 * dVar38 * 1.0 + dVar49 * dVar39 + dVar48 * *param_5 * -1.0 + dVar24 * dVar2;
    auVar32._0_8_ =
         dVar49 * dVar51 * 1.0 + ((*param_5 * dVar24 * 1.0 + dVar48 * dVar52) - dVar42 * dVar35);
    auVar32._8_8_ =
         dVar48 * dVar38 * -1.0 + ((*param_5 * dVar42 * -1.0 + dVar49 * dVar2) - dVar24 * dVar39);
    dVar31 = *(double *)(param_6 + 0x10) * dVar31;
    dVar23 = *(double *)(param_6 + 0x18) * dVar23;
    dVar42 = *(double *)(param_6 + 0x20) * dVar34;
    dVar39 = auVar3._8_8_ * 0.0;
    dVar48 = dVar23 * dVar53 - dVar31 * dVar7;
    dVar35 = dVar42 * dVar7 - dVar23 * dVar8;
    dVar24 = dVar31 * dVar8 - dVar42 * dVar53;
    dVar49 = dVar39 * dVar9 - dVar39 * dVar9;
    dVar35 = dVar35 + dVar35;
    dVar24 = dVar24 + dVar24;
    dVar48 = dVar48 + dVar48;
    dVar49 = dVar49 + dVar49;
    local_378 = (dVar48 * dVar7 - dVar8 * dVar24) + dVar52 * dVar35 + dVar31 + param_5[4];
    dStack_370 = (dVar35 * dVar8 - dVar48 * dVar53) + dVar2 * dVar24 + dVar23 + param_5[5];
    local_368 = (dVar24 * dVar53 - dVar7 * dVar35) + dVar52 * dVar48 + dVar42 + param_5[6];
    dStack_360 = (dVar49 * dVar9 - dVar49 * dVar9) + dVar2 * dVar49 + dVar39 + param_5[7];
  }
  else {
    dVar2 = *param_5;
    dVar39 = param_5[1];
    dVar25 = param_5[2];
    dVar35 = dVar39 + dVar39;
    dVar51 = dVar25 + dVar25;
    dVar52 = dVar2 * (dVar2 + dVar2);
    local_178 = ((double)DAT_149934d80 - (dVar25 * dVar51 + dVar39 * dVar35)) * dVar31;
    dVar26 = (DAT_149934d80._8_8_ - (dVar25 * dVar51 + dVar52)) * dVar23;
    dVar25 = param_5[3];
    dVar38 = dVar51 * dVar25;
    dVar53 = (dVar2 + dVar2) * param_5[3];
    dVar25 = dVar35 * dVar25;
    dStack_130 = (dVar51 * dVar39 - dVar53) * dVar34;
    local_138 = (dVar25 + *param_5 * dVar51) * dVar34;
    dStack_170 = (dVar35 * dVar2 + dVar38) * dVar31;
    local_148 = (dVar51 * dVar39 + dVar53) * dVar23;
    local_128 = (1.0 - (dVar52 + dVar39 * dVar35)) * dVar34;
    local_168 = (*param_5 * dVar51 - dVar25) * dVar31;
    uStack_160 = 0;
    local_158._8_4_ = SUB84(dVar26,0);
    local_158._0_8_ = (dVar35 * dVar2 - dVar38) * dVar23;
    local_158._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_5[4];
    dStack_110 = param_5[5];
    local_108 = param_5[6];
    uStack_100 = 0x3ff0000000000000;
    dVar52 = dVar24 + dVar24;
    dVar26 = dVar48 + dVar48;
    dVar25 = dVar42 * (dVar42 + dVar42);
    local_1f8 = (double)DAT_149934d80 - (dVar48 * dVar26 + dVar24 * dVar52);
    dStack_1d0 = DAT_149934d80._8_8_ - (dVar48 * dVar26 + dVar25);
    local_1a8 = 1.0 - (dVar25 + dVar24 * dVar52);
    dVar48 = (dVar42 + dVar42) * dVar49;
    dStack_1f0 = dVar52 * dVar42 + dVar26 * dVar49;
    local_1c8 = dVar26 * dVar24 + dVar48;
    local_1d8 = dVar52 * dVar42 - dVar26 * dVar49;
    dVar48 = dVar26 * dVar24 - dVar48;
    local_1e8 = dVar42 * dVar26 - dVar52 * dVar49;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar48,0);
    local_1b8._0_8_ = dVar52 * dVar49 + dVar42 * dVar26;
    local_1b8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    pdVar1 = local_2c8 + 2;
    local_198 = *(double *)(param_6 + 0x10);
    dStack_190 = *(double *)(param_6 + 0x18);
    local_188 = *(double *)(param_6 + 0x20);
    FUN_1447fea8d(pdVar1);
    FUN_144a1c686(pdVar1,0x3e45798ee0000000);
    auVar28._8_8_ = -(ulonglong)(0.0 <= dVar23);
    auVar28._0_8_ = -(ulonglong)(0.0 <= dVar31);
    auVar36 = blendvpd(_DAT_149936790,auVar32,auVar28);
    uVar21 = -(ulonglong)(0.0 <= dVar34 * 1.0);
    dVar31 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
    dVar23 = auVar36._0_8_;
    local_2c8[4] = local_2c8[4] * dVar23;
    local_2c8[3] = local_2c8[3] * dVar23;
    local_2c8[2] = local_2c8[2] * dVar23;
    dVar23 = auVar36._8_8_;
    local_288 = local_288 * dVar23;
    dStack_290 = dStack_290 * dVar23;
    local_298 = dVar23 * local_298;
    local_268 = local_268 * dVar31;
    local_270 = local_270 * dVar31;
    local_278 = dVar31 * local_278;
    FUN_14481fd10(&local_2d8,pdVar1);
    dVar31 = local_2c8[0] * local_2c8[0] + local_2d8 * local_2d8;
    dVar23 = local_2c8[1] * local_2c8[1] + dStack_2d0 * dStack_2d0;
    auVar41._0_8_ = dVar31 + dVar23;
    auVar41._8_8_ = dVar31 + dVar23;
    auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
    auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
    auVar36 = sqrtpd(auVar41,auVar41);
    auVar32 = divpd(auVar32,auVar36);
    auVar58._0_8_ = auVar32._0_8_ * local_2c8[0];
    auVar58._8_8_ = auVar32._8_8_ * local_2c8[1];
    dVar25 = (double)((ulonglong)(local_2d8 * auVar32._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
    dVar26 = (double)((ulonglong)(dStack_2d0 * auVar32._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
    auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar58,auVar29);
    local_378 = dStack_258;
    dStack_370 = local_250;
    local_368 = local_248;
    dStack_360 = 0.0;
  }
  dVar48 = dStack_330;
  dVar23 = local_338;
  puVar19 = local_3a8;
  dVar31 = auVar3._8_8_ * 0.0;
  uVar54 = local_358._0_4_;
  uVar55 = local_358._4_4_;
  uVar56 = local_358._8_4_;
  uVar57 = local_358._12_4_;
  local_348._8_4_ = SUB84(dVar31,0);
  local_348._0_8_ = dVar34 * 1.0;
  local_348._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  lVar18 = (longlong)*(int *)(param_4 + 0x18);
  local_398[0] = dVar25;
  local_398[1] = dVar26;
  local_388 = auVar32;
  if (lVar18 == 0) {
    puVar15 = (undefined1 *)0x0;
  }
  else {
    lVar6 = -(lVar18 * 0x18 + 0x1eU & 0xfffffffffffffff0);
    puVar15 = local_3a8 + lVar6;
    puVar19 = local_3a8 + lVar6;
    if (0 < *(int *)(param_4 + 0x18)) {
      lVar4 = *(longlong *)(param_4 + 0x10);
      uVar10 = local_328._0_8_;
      uVar12 = local_2f8._0_8_;
      uVar13 = local_2f8._8_8_;
      uVar11 = local_328._8_8_;
      lVar20 = 0;
      local_3a8 = local_358;
      do {
        pdVar1 = (double *)(lVar4 + lVar20);
        dVar52 = *pdVar1 * (double)uVar12;
        dVar2 = pdVar1[1] * (double)uVar13;
        dVar31 = *(double *)(lVar4 + 0x10 + lVar20) * dVar50 * 1.0;
        dVar49 = dVar2 * dVar23 - dVar48 * dVar52;
        dVar24 = dVar31 * dVar48 - (double)uVar10 * dVar2;
        dVar42 = dVar52 * (double)uVar10 - dVar23 * dVar31;
        dVar24 = dVar24 + dVar24;
        dVar42 = dVar42 + dVar42;
        dVar49 = dVar49 + dVar49;
        dVar2 = ((double)uVar10 * dVar24 - dVar23 * dVar49) + (double)uVar11 * dVar42 + dVar2;
        auVar3._8_4_ = SUB84(dVar2,0);
        auVar3._0_8_ = (dVar49 * dVar48 - dVar42 * (double)uVar10) +
                       (double)uVar11 * dVar24 + dVar52;
        auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        *(undefined1 (*) [16])(local_3a8 + lVar20 + lVar6) = auVar3;
        *(double *)((longlong)local_398 + lVar20 + lVar6) =
             dVar49 * (double)uVar11 + dVar31 + (dVar42 * dVar23 - dVar24 * dVar48);
        lVar20 = lVar20 + 0x18;
      } while (lVar18 * 0x18 != lVar20);
      puVar15 = local_3a8 + lVar6;
      puVar19 = local_3a8 + lVar6;
      uVar54 = local_3a8._0_4_;
      uVar55 = local_3a8._4_4_;
      uVar56 = local_3a8._8_4_;
      uVar57 = local_3a8._12_4_;
    }
  }
  local_248 = *(double *)(param_6 + 0x50) * 0.5;
  local_280 = *(double *)(param_6 + 0x48) * 0.5;
  local_2c8[5] = *(double *)(param_6 + 0x40) * 0.5;
  local_2c8[4] = -local_248;
  local_2c8[3] = -local_280;
  local_2c8[2] = -local_2c8[5];
  local_298 = local_2c8[3];
  dStack_290 = local_2c8[4];
  local_288 = local_2c8[2];
  local_278 = local_2c8[4];
  local_270 = local_2c8[5];
  local_268 = local_280;
  local_260 = local_2c8[4];
  dStack_258 = local_2c8[2];
  local_250 = local_2c8[3];
  local_240 = local_2c8[5];
  local_238 = local_2c8[3];
  local_230 = local_248;
  local_228 = local_2c8[2];
  local_220 = local_280;
  local_218 = local_248;
  local_210 = local_2c8[5];
  local_208 = local_280;
  local_200 = local_248;
  dVar31 = auVar32._0_8_;
  dVar50 = auVar32._8_8_;
  lVar18 = 0x10;
  do {
    dVar23 = *(double *)((longlong)local_2c8 + lVar18) * (double)CONCAT44(uVar55,uVar54);
    dVar48 = *(double *)((longlong)local_2c8 + lVar18 + 8) * (double)CONCAT44(uVar57,uVar56);
    dVar49 = *(double *)((longlong)local_2c8 + lVar18 + 0x10) * dVar34 * 1.0;
    dVar24 = dVar48 * dVar25 - dVar26 * dVar23;
    dVar52 = dVar49 * dVar26 - dVar31 * dVar48;
    dVar42 = dVar23 * dVar31 - dVar25 * dVar49;
    dVar52 = dVar52 + dVar52;
    dVar42 = dVar42 + dVar42;
    dVar24 = dVar24 + dVar24;
    dVar48 = (dVar31 * dVar52 - dVar25 * dVar24) + dVar50 * dVar42 + dVar48;
    auVar5._8_4_ = SUB84(dVar48,0);
    auVar5._0_8_ = (dVar24 * dVar26 - dVar42 * dVar31) + dVar50 * dVar52 + dVar23;
    auVar5._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_2c8 + lVar18) = auVar5;
    *(double *)((longlong)local_2c8 + lVar18 + 0x10) =
         dVar24 * dVar50 + dVar49 + (dVar42 * dVar25 - dVar52 * dVar26);
    lVar18 = lVar18 + 0x18;
  } while (lVar18 != 0xd0);
  *(undefined8 *)(puVar19 + -0x10) = param_7;
  *(double **)(puVar19 + -0x18) = local_2c8 + 2;
  *(undefined1 **)(puVar19 + -0x20) = &LAB_142b5f570;
  *(longlong *)(puVar19 + -0x28) = param_6;
  *(double **)(puVar19 + -0x30) = local_398;
  *(undefined1 **)(puVar19 + -0x38) = puVar15;
  *(undefined1 **)(puVar19 + -0x40) = &LAB_1471052f9;
  *(longlong *)(puVar19 + -0x48) = param_4;
  *(double **)(puVar19 + -0x50) = &local_338;
  *(undefined8 *)(puVar19 + -8) = 0;
  *(undefined8 *)(puVar19 + -0x78) = 0x140451185;
  FUN_14044bf58(param_1,param_2,param_3,param_5);
  if ((local_f0 ^ (ulonglong)local_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -0x28) = &UNK_140451207;
  FUN_144d8e3a0();
}



// FUNCTION 1404519c0 FUN_1404519c0 body=490 status=ok
// SIG undefined FUN_1404519c0(void)

undefined8 FUN_1404519c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x230);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar1);
  }
  *(undefined4 *)(param_2 + 0x88) = 0;
  if (*(uint *)(param_2 + 0x8c) == uVar1) {
    iVar4 = 0;
    uVar2 = uVar1;
  }
  else {
    FUN_140451baa(param_2,uVar1);
    iVar4 = *(int *)(param_2 + 0x88);
    uVar2 = *(uint *)(param_2 + 0x8c);
  }
  *(uint *)(param_2 + 0x88) = iVar4 + uVar1;
  uVar3 = (ulonglong)(uVar2 - iVar4);
  if (uVar2 - iVar4 < uVar1) {
    FUN_14738ac8a(param_2);
  }
  else if (uVar1 == 0) goto LAB_140451a9f;
  lVar5 = 0;
  do {
    *(undefined1 *)(param_2 + lVar5) = *(undefined1 *)(param_1 + 0x20 + lVar5 * 4);
    *(undefined1 *)(param_2 + 1 + lVar5) = *(undefined1 *)(param_1 + 0x24 + lVar5 * 4);
    iVar4 = *(int *)(param_1 + 0x1c + lVar5 * 4);
    switch(iVar4) {
    case 2:
      *(undefined1 *)(param_2 + 2 + lVar5) = 4;
      break;
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1d:
    case 0x20:
    case 0x21:
    case 0x27:
    case 0x28:
switchD_140451a60_caseD_3:
      FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12VertexDeclaration.cpp",0xd6,
                    L"Unknown D3D vertex element type %u");
      break;
    case 6:
      *(undefined1 *)(param_2 + 2 + lVar5) = 3;
      break;
    case 10:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0xd;
      break;
    case 0xb:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0x12;
      break;
    case 0xc:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0x10;
      break;
    case 0xd:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0xe;
      break;
    case 0xe:
      *(undefined1 *)(param_2 + 2 + lVar5) = 10;
      break;
    case 0x10:
      *(undefined1 *)(param_2 + 2 + lVar5) = 2;
      break;
    case 0x18:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0x13;
      break;
    case 0x1c:
      *(undefined1 *)(param_2 + 2 + lVar5) = 7;
      break;
    case 0x1e:
      *(undefined1 *)(param_2 + 2 + lVar5) = 6;
      break;
    case 0x1f:
      *(undefined1 *)(param_2 + 2 + lVar5) = 5;
      break;
    case 0x22:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0xc;
      break;
    case 0x23:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0x11;
      break;
    case 0x24:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0xf;
      break;
    case 0x25:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0xb;
      break;
    case 0x26:
      *(undefined1 *)(param_2 + 2 + lVar5) = 9;
      break;
    case 0x29:
      *(undefined1 *)(param_2 + 2 + lVar5) = 1;
      break;
    case 0x2a:
      *(undefined1 *)(param_2 + 2 + lVar5) = 0x14;
      break;
    default:
      if (iVar4 != 0x57) goto switchD_140451a60_caseD_3;
      *(undefined1 *)(param_2 + 2 + lVar5) = 8;
    }
    *(undefined1 *)(param_2 + 3 + lVar5) = *(undefined1 *)(param_1 + 0x18 + lVar5 * 4);
    *(undefined2 *)(param_2 + 4 + lVar5) =
         *(undefined2 *)(param_1 + 0x238 + (ulonglong)*(uint *)(param_1 + 0x20 + lVar5 * 4) * 2);
    uVar3 = 0;
    *(ushort *)(param_2 + 6 + lVar5) = (ushort)(*(int *)(param_1 + 0x28 + lVar5 * 4) == 1);
    lVar5 = lVar5 + 8;
  } while ((ulonglong)uVar1 * 8 - lVar5 != 0);
LAB_140451a9f:
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 140451baa FUN_140451baa body=27 status=ok
// SIG undefined FUN_140451baa(void)

void FUN_140451baa(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x11;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = iVar1;
  }
  return;
}



// FUNCTION 140451bc5 FUN_140451bc5 body=34 status=ok
// SIG undefined FUN_140451bc5(void)

void FUN_140451bc5(undefined4 param_1)

{
  FUN_140451be7(0x29,param_1,0,0,0);
  return;
}



// FUNCTION 140451be7 FUN_140451be7 body=478 status=ok
// SIG undefined FUN_140451be7(void)

void FUN_140451be7(byte param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140451c32;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_140451c32:
    puVar3 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar6 = puVar4[0x12];
    if (puVar3 + 0x10 <= puVar4 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar6 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar6) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      puVar3 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar6 = 0;
      if (puVar3 + 0x10 <= puVar4 + 0x4000) {
        uVar6 = 1;
        goto LAB_140451cae;
      }
    }
  }
  uVar6 = uVar6 + 1;
LAB_140451cae:
  *(undefined8 **)(puVar4 + 0x10) = puVar3 + 0x11;
  puVar4[0x12] = uVar6;
  *(int *)(puVar3 + -1) = ((int)puVar3 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar3 + -4) = 0x80;
  if (param_1 != 0x3a) {
    *(undefined4 *)(puVar3 + 1) =
         (&DAT_14ca11f20)[(ulonglong)(2 < param_2) * 0x3a + (ulonglong)param_1];
    *puVar3 = &PTR_LAB_14a28c900;
    *(byte *)(puVar3 + 2) = param_1;
    bVar5 = 0;
    switch(param_1) {
    case 0x26:
    case 0x34:
      bVar5 = 0x26;
      break;
    case 0x27:
    case 0x35:
      bVar5 = 0x27;
      break;
    case 0x28:
    case 0x36:
      bVar5 = 0x28;
      break;
    case 0x2a:
      break;
    case 0x2b:
switchD_140451d21_caseD_2b:
      bVar5 = 2;
      break;
    default:
      if (param_1 == 2) goto switchD_140451d21_caseD_2b;
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
switchD_140451d21_caseD_29:
      bVar5 = 0x29;
      if (param_1 != 0x37) {
        bVar5 = param_1;
      }
    }
    *(byte *)((longlong)puVar3 + 0x11) = bVar5;
    puVar3[3] = param_3;
    *(int *)(puVar3 + 4) = param_2;
    puVar3[5] = param_4;
    puVar3[6] = param_5;
    *(undefined1 *)(puVar3 + 7) = 0x3a;
    *puVar3 = &PTR_FUN_14a204cb0;
    *(undefined4 *)(puVar3 + 10) = 0x11;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[8] = DAT_14c9c0d50;
    puVar3[9] = DAT_14c9c7ca8;
    *(undefined4 *)(puVar3 + 0xf) = 0xff;
    return;
  }
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  *puVar3 = &PTR_LAB_14a28c900;
  *(undefined1 *)(puVar3 + 2) = 0x3a;
  goto switchD_140451d21_caseD_29;
}



// FUNCTION 140451dd0 FUN_140451dd0 body=2036 status=ok
// SIG undefined FUN_140451dd0(void)

void FUN_140451dd0(longlong param_1,byte *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined8 local_128;
  int local_120;
  double *local_118;
  double *local_110;
  double *local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  int local_f0;
  int local_ec;
  uint local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*param_2 == 1) {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_dc = (uint)bVar5;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8);
    local_e4 = *(int *)(param_2 + 0x44) * (uint)bVar5;
    bVar5 = 1;
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar13 = uVar1 & 0x7fff;
    local_dc = (uint)(uVar1 >> 0xf);
    lVar12 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar14 = (ulonglong)(uVar13 * *(int *)(lVar12 + 0x80)) + *(longlong *)(lVar12 + 0x70);
    }
    else {
      iVar9 = **(int **)(lVar12 + 0x20);
      lVar14 = 0;
      if (iVar9 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar9;
          iVar9 = (*(int **)(lVar12 + 0x20))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (iVar9 <= (int)uVar13);
      }
      lVar14 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar12 + 0x18) + lVar14 * 8);
    }
    local_e4 = *(int *)(lVar12 + 0x4c) * local_dc;
    bVar5 = *param_2;
  }
  if ((bVar5 & 1) == 0) {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar13 = uVar1 & 0x7fff;
    local_e0 = (uint)(uVar1 >> 0xf);
    lVar10 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar12 = (ulonglong)(uVar13 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70);
    }
    else {
      iVar9 = **(int **)(lVar10 + 0x20);
      lVar12 = 0;
      if (iVar9 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar9;
          iVar9 = (*(int **)(lVar10 + 0x20))[lVar12 + 1];
          lVar12 = lVar12 + 1;
        } while (iVar9 <= (int)uVar13);
      }
      lVar12 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar10 + 0x18) + lVar12 * 8);
    }
    local_ec = *(int *)(lVar10 + 0x4c) * local_e0;
    bVar5 = *param_2;
  }
  else {
    iVar9 = *(int *)(param_2 + 0x30);
    local_e0 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8);
    local_ec = *(int *)(param_2 + 0x44) * local_e0;
  }
  if ((bVar5 & 1) == 0) {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar13 = uVar1 & 0x7fff;
    local_e8 = (uint)(uVar1 >> 0xf);
    lVar11 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar10 = (ulonglong)(uVar13 * *(int *)(lVar11 + 0x80)) + *(longlong *)(lVar11 + 0x70);
    }
    else {
      iVar9 = **(int **)(lVar11 + 0x20);
      lVar10 = 0;
      if (iVar9 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar9;
          iVar9 = (*(int **)(lVar11 + 0x20))[lVar10 + 1];
          lVar10 = lVar10 + 1;
        } while (iVar9 <= (int)uVar13);
      }
      lVar10 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar11 + 0x18) + lVar10 * 8);
    }
    local_f0 = *(int *)(lVar11 + 0x4c) * local_e8;
    bVar5 = *param_2;
  }
  else {
    iVar9 = *(int *)(param_2 + 0x30);
    local_e8 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8);
    local_f0 = *(int *)(param_2 + 0x44) * local_e8;
  }
  if ((bVar5 & 1) == 0) {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar13 = uVar1 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_58 = &local_4c;
      local_50 = 0;
    }
    else {
      lVar11 = *(longlong *)(param_2 + 0x80);
      local_50 = 1;
      local_58 = (undefined4 *)
                 ((ulonglong)(uVar13 * *(int *)(lVar11 + 0x80)) + *(longlong *)(lVar11 + 0x70) +
                 (longlong)*(int *)(lVar11 + 0x4c) * 4);
    }
  }
  else {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_50 = (uint)bVar5;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    local_58 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
  }
  if (*param_2 == 1) {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_60 = (uint)bVar5;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    local_68 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar13 = uVar1 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_68 = &local_5c;
      local_60 = 0;
    }
    else {
      lVar11 = *(longlong *)(param_2 + 0x80);
      local_60 = 1;
      local_68 = (undefined4 *)
                 ((ulonglong)(uVar13 * *(int *)(lVar11 + 0x80)) + *(longlong *)(lVar11 + 0x70) +
                 (longlong)*(int *)(lVar11 + 0x4c) * 4);
    }
  }
  if (*param_2 == 1) {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_70 = (uint)bVar5;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    local_78 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar13 = uVar1 & 0x7fff;
    if (uVar13 == 0x7fff) {
      local_78 = &local_6c;
      local_70 = 0;
    }
    else {
      lVar11 = *(longlong *)(param_2 + 0x80);
      local_70 = 1;
      local_78 = (undefined4 *)
                 ((ulonglong)(uVar13 * *(int *)(lVar11 + 0x80)) + *(longlong *)(lVar11 + 0x70) +
                 (longlong)*(int *)(lVar11 + 0x4c) * 4);
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar6 = FUN_140d5a4a0();
    lVar11 = *(longlong *)(param_1 + 0x38);
    if (lVar11 != 0) {
      if (((lVar6 == 0) || (lVar4 = *(longlong *)(lVar11 + 0x10), lVar4 == 0)) ||
         (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) {
        FUN_1414cbd82();
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8);
        FUN_1414cbd82();
        if ((lVar4 == lVar6 + 0x30) && (*(char *)(lVar11 + 0x74) == '\x01')) {
          local_90 = 0x3ff0000000000000;
          local_80 = 0x3ff0000000000000;
          if (*(char *)(param_1 + 0x42) == '\0') {
            local_80 = 0;
          }
          local_88 = 0x3ff0000000000000;
          if (*(char *)(param_1 + 0x41) == '\0') {
            local_88 = 0;
          }
          if (*(char *)(param_1 + 0x40) == '\0') {
            local_90 = 0;
          }
          uVar13 = *(uint *)(lVar11 + 0x68);
          uVar7 = *(uint *)(lVar11 + 0x6c);
          uVar2 = *(uint *)(lVar11 + 0x70);
          local_98 = (double)uVar2;
          local_a0 = (double)uVar7;
          local_a8 = (double)uVar13;
          local_b0 = *(double *)(lVar11 + 0x38);
          local_c0 = *(double *)(lVar11 + 0x28);
          local_b8 = *(double *)(lVar11 + 0x30);
          iVar9 = *(int *)(lVar11 + 0xb0);
          if (iVar9 != 0) {
            if (uVar13 < uVar7) {
              uVar7 = uVar13;
            }
            if (uVar2 <= uVar7) {
              uVar7 = uVar2;
            }
            if (uVar7 != 0) {
              dVar17 = *(double *)(lVar11 + 0x50) - local_b0;
              dVar18 = *(double *)(lVar11 + 0x48) - local_b8;
              dVar16 = *(double *)(lVar11 + 0x40) - local_c0;
              dVar15 = dVar16;
              if (dVar18 <= dVar16) {
                dVar15 = dVar18;
              }
              if (dVar17 <= dVar15) {
                dVar15 = dVar17;
              }
              if (9.99999993922529e-09 < dVar15) {
                local_c8 = DAT_14c846520 / dVar17;
                local_d0 = DAT_14c846518 / dVar18;
                local_d8 = DAT_14c846510 / dVar16;
                local_110 = &local_d8;
                local_128 = *(undefined8 *)(lVar11 + 0xa8);
                pbVar8 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
                if (*param_2 != 0) {
                  pbVar8 = param_2 + 0x3c;
                }
                local_f8 = *(undefined4 *)pbVar8;
                local_138 = 0 < (int)local_60;
                local_140 = 0 < (int)local_50;
                local_130 = 0 < (int)local_70;
                lVar11 = (longlong)(iVar9 >> 1) / 3 + ((longlong)(iVar9 >> 1) >> 0x3f);
                local_120 = ((int)lVar11 - (iVar9 >> 0x1f)) + -1;
                local_160 = local_e8 == 0;
                local_168 = local_e0 == 0;
                local_100 = &local_90;
                local_108 = &local_a8;
                local_118 = &local_c0;
                local_148 = local_78;
                local_150 = local_68;
                local_158 = local_58;
                FUN_142431ab0(lVar14 + (longlong)local_e4 * 4,(longlong)local_ec * 4 + lVar12,
                              lVar10 + (longlong)local_f0 * 4,
                              CONCAT71((int7)((ulonglong)lVar11 >> 8),local_dc == 0));
                goto LAB_140452463;
              }
            }
          }
        }
      }
    }
  }
  pbVar8 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar8 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar8) {
    iVar9 = 0;
    do {
      *local_58 = 0;
      *local_68 = 0;
      *local_78 = 0;
      local_58 = local_58 + (int)local_50;
      local_68 = local_68 + (int)local_60;
      local_78 = local_78 + (int)local_70;
      iVar9 = iVar9 + 1;
      pbVar8 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar8 = param_2 + 0x3c;
      }
    } while (iVar9 < *(int *)pbVar8);
  }
LAB_140452463:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404525c6 FUN_1404525c6 body=108 status=ok
// SIG undefined FUN_1404525c6(void)

undefined8 FUN_1404525c6(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x220);
  *(uint *)(param_1 + 0x220) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
    FUN_146564b0e((longlong *)(param_1 + 0x218),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x218);
  lVar3 = (longlong)iVar1 * 0x20;
  *(undefined4 *)(lVar2 + lVar3) = param_3;
  *(undefined4 *)(lVar2 + 8 + lVar3) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar3) = param_4;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 140452632 FUN_140452632 body=137 status=ok
// SIG undefined FUN_140452632(void)

void FUN_140452632(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 5,8);
      uVar3 = uVar3 >> 5;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x20,8);
    }
  }
  return;
}



// FUNCTION 1404526bc FUN_1404526bc body=210 status=ok
// SIG undefined FUN_1404526bc(void)

undefined8
FUN_1404526bc(longlong param_1,uint param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  iVar2 = 0;
  if (param_2 < 3) {
    iVar2 = *(int *)(&DAT_14b43b954 + (ulonglong)param_2 * 4);
  }
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar3 + 0xe) = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14b439cd0;
  *(undefined1 *)(puVar3 + 3) = param_5;
  *(int *)(puVar3 + 4) = iVar2;
  puVar3[5] = 0;
  *(int *)((longlong)puVar3 + 0x1c) = param_3 * iVar2;
  FUN_14006bf18(puVar3,&DAT_14ca85100);
  iVar2 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar2 + 1U) {
    FUN_1418b55c8((longlong *)(param_1 + 0x180),iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x180);
  *(undefined4 *)(lVar1 + (longlong)iVar2 * 0x10) = param_4;
  *(undefined8 **)(lVar1 + 8 + (longlong)iVar2 * 0x10) = puVar3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 14045278e FUN_14045278e body=218 status=ok
// SIG undefined FUN_14045278e(void)

bool FUN_14045278e(longlong param_1,uint param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_2 < 5) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar3 + 0xc) = 0x105;
    *(undefined1 *)((longlong)puVar3 + 0xe) = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_14b43aed0;
    *(undefined1 *)(puVar3 + 3) = param_5;
    puVar3[4] = 0;
    *(uint *)(puVar3 + 5) = param_2;
    *(int *)((longlong)puVar3 + 0x1c) = param_3 * *(int *)(&DAT_14b43b940 + (ulonglong)param_2 * 4);
    FUN_14006bf18(puVar3,&DAT_14ca85100);
    iVar1 = *(int *)(param_1 + 0x178);
    *(uint *)(param_1 + 0x178) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x17c) < iVar1 + 1U) {
      FUN_1418b54ba((longlong *)(param_1 + 0x170),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x170);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = param_4;
    *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar3;
  }
  return param_2 < 5;
}



// FUNCTION 140452868 FUN_140452868 body=149 status=ok
// SIG undefined FUN_140452868(void)

undefined8 * FUN_140452868(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14b43aed0;
  FUN_144725486();
  *param_1 = &PTR_FUN_14a38cff0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404528fe FUN_1404528fe body=56 status=ok
// SIG undefined FUN_1404528fe(void)

undefined8 * FUN_1404528fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b439cd0;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140452936 FUN_140452936 body=248 status=ok
// SIG undefined FUN_140452936(void)

void FUN_140452936(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar3 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 140452a2e FUN_140452a2e body=248 status=ok
// SIG undefined FUN_140452a2e(void)

void FUN_140452a2e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar3 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 140452b26 FUN_140452b26 body=298 status=ok
// SIG undefined FUN_140452b26(void)

void FUN_140452b26(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar8 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1e0);
    }
    uVar5 = (longlong)param_2 & (longlong)*(int *)(param_1 + 0x1e8) - 1U;
    iVar10 = *(int *)(lVar8 + (uVar5 & 0xffffffff) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x1a0);
      do {
        piVar1 = (int *)(lVar2 + (longlong)iVar10 * 0x18);
        if (*piVar1 == param_2) {
          if (piVar1 == (int *)0x0) {
            return;
          }
          lVar3 = *(longlong *)(piVar1 + 2);
          iVar10 = *(int *)(lVar8 + uVar5 * 4);
          goto LAB_140452ba5;
        }
        iVar10 = piVar1[4];
      } while (iVar10 != -1);
    }
  }
  return;
LAB_140452ba5:
  if (iVar10 == -1) goto LAB_140452bde;
  piVar1 = (int *)(lVar2 + (longlong)iVar10 * 0x18);
  if (*piVar1 == param_2) {
    iVar7 = *(int *)(lVar8 + (longlong)piVar1[5] * 4);
    if (iVar7 == iVar10) {
      piVar9 = (int *)(lVar8 + (longlong)piVar1[5] * 4);
    }
    else {
      do {
        piVar9 = (int *)(lVar2 + (longlong)iVar7 * 0x18 + 0x10);
        iVar7 = *piVar9;
      } while (iVar7 != iVar10);
    }
    *piVar9 = piVar1[4];
    FUN_143e7a282((longlong *)(param_1 + 0x1a0),iVar10);
LAB_140452bde:
    if (*(char *)(lVar3 + 0x70) == '\x06') {
      return;
    }
    if ((((lVar3 != 0) && (1 < *(int *)(lVar3 + 8))) && (*(int *)(param_1 + 0x10) != 0)) &&
       ((*(longlong **)(param_1 + 8) != (longlong *)0x0 &&
        (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(), cVar4 != '\0')))) {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,lVar3,*(undefined4 *)(lVar3 + 0x10));
    }
    FUN_14058be5a(lVar3);
    return;
  }
  iVar10 = piVar1[4];
  goto LAB_140452ba5;
}



// FUNCTION 140452c50 FUN_140452c50 body=403 status=ok
// SIG undefined FUN_140452c50(void)

undefined8
FUN_140452c50(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  uint uVar1;
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
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar14 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined4 *)(puVar14 + 2) = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  *(undefined4 *)(puVar14 + 5) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x2c) = 1;
  *(undefined2 *)((longlong)puVar14 + 0x34) = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  *(undefined8 *)((longlong)puVar14 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x4c) = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  *(undefined8 *)((longlong)puVar14 + 0x61) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x69) = 0;
  FUN_140056680(puVar14 + 0xf,L"Dummy Texture");
  *(undefined1 *)(puVar14 + 0x11) = 0;
  *(undefined4 *)(puVar14 + 10) = param_3[0xc];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  *(undefined4 *)(puVar14 + 8) = param_3[8];
  *(undefined4 *)((longlong)puVar14 + 0x44) = uVar10;
  *(undefined4 *)(puVar14 + 9) = uVar11;
  *(undefined4 *)((longlong)puVar14 + 0x4c) = uVar12;
  *(undefined4 *)(puVar14 + 6) = uVar6;
  *(undefined4 *)((longlong)puVar14 + 0x34) = uVar7;
  *(undefined4 *)(puVar14 + 7) = uVar8;
  *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar9;
  *(undefined4 *)(puVar14 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar14 + 0x24) = uVar3;
  *(undefined4 *)(puVar14 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar5;
  *(undefined1 *)(puVar14 + 0xe) = 5;
  local_48 = puVar14;
  FUN_14020fad6(puVar14 + 0xf,L"Coherent Auxiliary texture");
  uVar13 = DAT_14ca84e40;
  uVar15 = *(uint *)(puVar14 + 4);
  uVar1 = *(uint *)((longlong)puVar14 + 0x24);
  if (DAT_14ca84e40 <= uVar15 - 1 || DAT_14ca84e40 <= uVar1 - 1) {
    if (DAT_14ca84e40 <= uVar15) {
      uVar15 = DAT_14ca84e40;
    }
    *(uint *)(puVar14 + 4) = uVar15 + (uVar15 == 0);
    if (uVar1 < uVar13) {
      uVar13 = uVar1;
    }
    *(uint *)((longlong)puVar14 + 0x24) = uVar13 + (uVar13 == 0);
  }
  FUN_143e78516(puVar14,param_4,param_5);
  local_50 = FUN_140596b32(&local_48);
  local_58 = param_2;
  FUN_140452eae(param_1 + 0x1a0,local_5c);
  puVar14 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    FUN_14058c1a6(local_48);
    FUN_1400020a8(puVar14);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140452de4 FUN_140452de4 body=182 status=ok
// SIG undefined FUN_140452de4(void)

void FUN_140452de4(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_4;
  local_28 = param_2;
  FUN_140452eae(param_1 + 0x1a0,local_34);
  if (((1 < *(int *)(param_2 + 8)) && (*(int *)(param_1 + 0x20) != 0)) &&
     (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x18);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,*(undefined4 *)(param_2 + 0x10));
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140452eae FUN_140452eae body=736 status=ok
// SIG undefined FUN_140452eae(void)

uint * FUN_140452eae(longlong *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar13 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar13 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar13) {
      FUN_14482b872(param_1,uVar13);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar7 = iVar15 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar5 = param_1 + 2;
    iVar9 = iVar15 + 1;
    iVar12 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar12 = iVar15;
    }
    if (iVar12 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar7 = iVar15;
        }
        else {
          uVar8 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar8) {
              uVar16 = uVar8;
            }
          }
          else {
            uVar16 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar16 << 2,0);
          iVar7 = (int)(uVar10 >> 2);
          iVar9 = -0x20;
          if ((int)uVar8 <= iVar7) {
            iVar9 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar5,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar5;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)(int)uVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    uVar13 = *(uint *)(param_1 + 6);
    lVar4 = (longlong)(int)uVar13;
    iVar15 = *(int *)(*param_1 + 4 + lVar4 * 0x18);
    *(int *)(param_1 + 6) = iVar15;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  uVar8 = uVar13 + 0x1f;
  if (-1 < (int)uVar13) {
    uVar8 = uVar13;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)uVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar13 & 0x1f);
  iVar15 = 1;
  puVar1 = (uint *)(*param_1 + lVar4 * 0x18);
  uVar8 = param_3[1];
  uVar16 = param_3[2];
  uVar14 = param_3[3];
  *puVar1 = *param_3;
  puVar1[1] = uVar8;
  puVar1[2] = uVar16;
  puVar1[3] = uVar14;
  puVar1[4] = 0xffffffff;
  uVar8 = *puVar1;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar14 = *(uint *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*param_1 + (longlong)(int)uVar14 * 0x18);
        if (*puVar2 == uVar8) {
          uVar8 = puVar1[1];
          uVar16 = puVar1[2];
          uVar3 = puVar1[3];
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar2[2] = uVar16;
          puVar2[3] = uVar3;
          FUN_143e7a282(param_1,uVar13);
          goto LAB_14045300a;
        }
        uVar14 = puVar2[4];
      } while (uVar14 != 0xffffffff);
    }
  }
  if (3 < uVar16) {
    uVar10 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar15 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar14 = uVar13;
  if (((int)uVar16 < 1) || (iVar15 <= (int)param_1[9])) {
    uVar8 = (int)param_1[9] - 1U & uVar8;
    puVar1[5] = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         uVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    FUN_1404540f6(param_1);
  }
LAB_14045300a:
  *param_2 = uVar14;
  return param_2;
}



// FUNCTION 14045318e FUN_14045318e body=190 status=ok
// SIG undefined FUN_14045318e(void)

void FUN_14045318e(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x208);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x200);
    lVar4 = 0;
    do {
      if (*(int *)(lVar1 + lVar4) == param_2) {
        uVar5 = (int)(lVar4 >> 3) * 0x286bca1b;
        if (uVar5 == 0xffffffff) {
          return;
        }
        iVar3 = ~uVar5 + iVar2;
        if (iVar3 != 0) {
          iVar6 = 1;
          if (iVar3 < 1) {
            iVar6 = iVar3;
          }
          memmove((void *)((longlong)(int)uVar5 * 0x98 + lVar1),
                  (void *)((longlong)(iVar2 - iVar6) * 0x98 + lVar1),(longlong)iVar6 * 0x98);
          iVar2 = *(int *)(param_1 + 0x208);
        }
        *(int *)(param_1 + 0x208) = iVar2 + -1;
        FUN_14045324c(param_1 + 0x200);
        return;
      }
      lVar4 = lVar4 + 0x98;
    } while ((longlong)iVar2 * 0x98 - lVar4 != 0);
  }
  return;
}



// FUNCTION 14045324c FUN_14045324c body=151 status=ok
// SIG undefined FUN_14045324c(void)

void FUN_14045324c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x98)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x98,4);
      uVar3 = uVar3 / 0x98;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x98,4);
    }
  }
  return;
}



// FUNCTION 1404532e4 FUN_1404532e4 body=623 status=ok
// SIG undefined FUN_1404532e4(void)

void FUN_1404532e4(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5,
                  uint param_6)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  int *local_a8;
  uint local_a0;
  void *local_98;
  longlong local_90;
  void *local_88;
  ulonglong uStack_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar3 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1e0);
    }
    uVar5 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 != (uint *)0x0) {
            local_90 = *(longlong *)(puVar1 + 2);
            if ((0x35 < (longlong)*(int *)(local_90 + 0x38)) ||
               (lVar3 = (longlong)*(int *)(local_90 + 0x38) * 0x10,
               *(int *)(&DAT_14b43b288 + lVar3) * *(int *)(&DAT_14b43b284 + lVar3) < 2)) {
              iVar4 = 0;
              if ((ulonglong)*(uint *)(param_3 + 0x18) < 0x36) {
                iVar4 = *(int *)(&DAT_14b43b960 + (ulonglong)*(uint *)(param_3 + 0x18) * 4);
              }
              if (param_6 != 0) {
                lVar3 = 0;
                do {
                  local_70 = 0;
                  local_78 = *(int *)(param_4 + 4 + lVar3 * 2);
                  local_74 = *(int *)(param_4 + lVar3 * 2);
                  local_68 = *(int *)(param_4 + 8 + lVar3 * 2) - local_78;
                  local_64 = *(int *)(param_4 + 0xc + lVar3 * 2) - local_74;
                  uVar5 = (uint)(local_68 * iVar4) >> 3;
                  local_88 = (void *)0x0;
                  uStack_80 = 0;
                  pvVar6 = *(void **)(param_5 + lVar3);
                  if (*(void **)(param_5 + lVar3) == (void *)0x0) {
                    uVar7 = local_64 * uVar5;
                    uStack_80 = (ulonglong)uVar7;
                    if (uVar7 != 0) {
                      FUN_1447403be(&local_88);
                    }
                    memset(local_88,0,(longlong)(int)uVar7);
                    *(void **)(param_5 + lVar3) = local_88;
                    pvVar6 = local_88;
                  }
                  uVar2 = *(undefined8 *)(local_90 + 0x58);
                  if (DAT_14ca85169 == '\0') {
                    FUN_14002049c(&DAT_14ca85100,1);
                    local_a8 = &local_78;
                    local_a0 = uVar5;
                    local_98 = pvVar6;
                    (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,&DAT_14ca85100,uVar2,0);
                    FUN_14002049c(&DAT_14ca85100);
                  }
                  else {
                    local_a8 = &local_78;
                    local_a0 = uVar5;
                    local_98 = pvVar6;
                    (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,&DAT_14ca85100,uVar2);
                  }
                  if (local_88 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar3 = lVar3 + 8;
                } while ((ulonglong)param_6 << 3 != lVar3);
              }
            }
          }
          break;
        }
        uVar5 = puVar1[4];
      } while (uVar5 != 0xffffffff);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140453554 FUN_140453554 body=103 status=ok
// SIG undefined FUN_140453554(void)

void FUN_140453554(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1f0) + uVar1) == param_2) {
        if ((int)(uVar1 >> 4) * -0x55555555 == -1) {
          return;
        }
        FUN_1457119a4(param_1 + 0x1f0);
        FUN_1457118fa(param_1 + 0x1f0);
        return;
      }
      uVar1 = uVar1 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x1f8) * 0x30 != uVar1);
  }
  return;
}



// FUNCTION 1404535bc FUN_1404535bc body=137 status=ok
// SIG undefined FUN_1404535bc(void)

void FUN_1404535bc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_146564790(param_2);
  if (cVar1 != '\0') {
    local_30 = param_4;
    local_28 = param_2;
    FUN_140452eae(param_1 + 0x1a0,local_34);
    if ((*(int *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
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



// FUNCTION 14045365a FUN_14045365a body=700 status=ok
// SIG undefined FUN_14045365a(void)

undefined8 FUN_14045365a(longlong param_1,undefined4 param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  char cVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 auStack_c8 [36];
  undefined2 local_a4;
  char local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_8c;
  undefined2 local_8b;
  undefined1 local_89;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a2 = (param_3[2] == 1) * '\x02';
  cVar11 = (param_3[1] == 1) * '\x02';
  uVar12 = *param_3 == 1;
  if (*param_3 == 2) {
    uVar12 = 2;
  }
  if (param_3[1] == 2) {
    cVar11 = '\x01';
  }
  if (param_3[2] == 2) {
    local_a2 = '\x01';
  }
  local_a4 = CONCAT11(cVar11,uVar12);
  local_a1 = 1;
  local_a0 = DAT_14cb8e59c;
  local_9c = 0x7f7fffff00000000;
  local_94 = 1;
  local_8c = 0;
  uStack_78 = 1;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6f = local_8b;
  uStack_6d = local_89;
  local_88 = CONCAT13(1,CONCAT12(local_a2,local_a4));
  uStack_84 = DAT_14cb8e59c;
  uStack_80 = 0;
  uStack_7c = 0x7f7fffff;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_40);
  if (local_40 == 0) {
    uStack_54 = CONCAT17(uStack_6d,CONCAT25(uStack_6f,CONCAT14(uStack_70,uStack_74)));
    uStack_58 = uStack_78;
    uStack_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    local_5c = uStack_7c;
  }
  else {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
    uStack_54 = CONCAT17(uStack_6d,CONCAT25(uStack_6f,CONCAT14(uStack_70,uStack_74)));
    uStack_58 = uStack_78;
    uStack_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    local_5c = uStack_7c;
    LOCK();
    puVar8 = (uint *)(local_40 + 8);
    uVar3 = *puVar8;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    puVar8 = (uint *)(local_40 + 8);
    if ((uVar3 & 0x3fffffff) == 1) {
      LOCK();
      uVar3 = *puVar8;
      *puVar8 = *puVar8 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_40 + 0xd);
        puVar7 = (uint *)FUN_14001cc68(0x10,8);
        *(longlong *)(puVar7 + 2) = local_40;
        puVar10 = DAT_14ca843c0;
        puVar9 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *(uint **)puVar7 = puVar10;
            LOCK();
            bVar13 = puVar10 != DAT_14ca843c0;
            puVar9 = puVar7;
            if (bVar13) {
              puVar10 = DAT_14ca843c0;
              puVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = puVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *(uint **)puVar7 = puVar9;
            LOCK();
            bVar13 = puVar9 != DAT_14ca843c8;
            puVar10 = puVar7;
            if (bVar13) {
              puVar9 = DAT_14ca843c8;
              puVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = puVar10;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
    LOCK();
    *puVar8 = *puVar8 + 1;
    UNLOCK();
  }
  iVar5 = *(int *)(param_1 + 0x1f8);
  *(uint *)(param_1 + 0x1f8) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1fc) < iVar5 + 1U) {
    FUN_146564c18((longlong *)(param_1 + 0x1f0),iVar5);
  }
  puVar8 = (uint *)((longlong)iVar5 * 0x30);
  lVar6 = *(longlong *)(param_1 + 0x1f0);
  *(undefined4 *)(lVar6 + (longlong)puVar8) = param_2;
  *(longlong *)(lVar6 + 8 + (longlong)puVar8) = local_40;
  puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)puVar8);
  *puVar1 = CONCAT44(uStack_64,uStack_68);
  puVar1[1] = CONCAT44(local_5c,uStack_60);
  puVar2 = (undefined4 *)(lVar6 + 0x1c + (longlong)puVar8);
  *puVar2 = local_5c;
  puVar2[1] = uStack_58;
  puVar2[2] = (undefined4)uStack_54;
  puVar2[3] = uStack_54._4_4_;
  if (local_40 != 0) {
    LOCK();
    puVar8 = (uint *)(local_40 + 8);
    uVar3 = *puVar8;
    *puVar8 = *puVar8 - 1;
    UNLOCK();
    puVar8 = (uint *)(ulonglong)(uVar3 & 0x3fffffff);
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar8 = (uint *)(local_40 + 8);
      LOCK();
      uVar3 = *puVar8;
      *puVar8 = *puVar8 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_40 + 0xd);
        puVar9 = (uint *)FUN_14001cc68(0x10,8);
        *(longlong *)(puVar9 + 2) = local_40;
        puVar8 = DAT_14ca843c0;
        puVar10 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *(uint **)puVar9 = puVar8;
            LOCK();
            bVar13 = puVar8 != DAT_14ca843c0;
            puVar10 = puVar9;
            if (bVar13) {
              puVar8 = DAT_14ca843c0;
              puVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = puVar10;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            puVar8 = puVar10;
            *(uint **)puVar9 = puVar8;
            LOCK();
            bVar13 = puVar8 != DAT_14ca843c8;
            puVar10 = puVar9;
            if (bVar13) {
              puVar8 = DAT_14ca843c8;
              puVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = puVar10;
            UNLOCK();
            puVar10 = puVar8;
          } while (bVar13);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}



// FUNCTION 140453918 FUN_140453918 body=2013 status=ok
// SIG undefined FUN_140453918(void)

undefined8 FUN_140453918(longlong param_1,void *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  longlong lVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_158 [36];
  undefined4 local_134;
  longlong local_130;
  uint local_128;
  int iStack_124;
  uint uStack_120;
  int iStack_11c;
  int local_118;
  uint uStack_114;
  int iStack_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e6;
  undefined2 uStack_e2;
  undefined2 local_e0;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined2 local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_fc = *(int *)((longlong)param_2 + 0x78);
  local_128 = *(uint *)((longlong)param_2 + 8);
  iStack_124 = *(int *)((longlong)param_2 + 0xc);
  uStack_120 = *(uint *)((longlong)param_2 + 0x10);
  iStack_11c = *(int *)((longlong)param_2 + 0x14);
  local_118 = *(int *)((longlong)param_2 + 0x18);
  uStack_114 = *(uint *)((longlong)param_2 + 0x1c);
  iStack_110 = *(int *)((longlong)param_2 + 0x20);
  fStack_10c = *(float *)((longlong)param_2 + 0x24);
  local_108 = *(float *)((longlong)param_2 + 0x28);
  local_104 = *(float *)((longlong)param_2 + 0x2c);
  local_100 = *(float *)((longlong)param_2 + 0x30);
  local_134 = param_3;
  if (*(int *)(param_1 + 0x350) != *(int *)(param_1 + 0x37c)) {
    lVar16 = param_1 + 0x380;
    if (*(longlong *)(param_1 + 0x388) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x388);
    }
    iVar21 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x390) - 1U &
                               local_fc * 0x4b1 + (local_128 & 0xff) + (local_128 & 0xff) * 4 +
                               (iStack_124 << 8 | iStack_11c << 0x10 | uStack_120) * 0x75 +
                               (local_118 << 8 | iStack_110 << 0x10 | uStack_114) * 0x40b7) * 4);
    if (iVar21 != -1) {
      lVar16 = *(longlong *)(param_1 + 0x348);
      do {
        lVar22 = (longlong)iVar21 * 0x40;
        if (((((*(char *)(lVar16 + lVar22) == (char)local_128) &&
              (lVar3 = lVar16 + lVar22, *(int *)(lVar3 + 4) == iStack_124)) &&
             (*(uint *)(lVar3 + 8) == uStack_120)) &&
            ((*(int *)(lVar3 + 0xc) == iStack_11c && (*(int *)(lVar3 + 0x10) == local_118)))) &&
           ((*(uint *)(lVar3 + 0x14) == uStack_114 && (*(int *)(lVar3 + 0x18) == iStack_110)))) {
          if ((*(float *)(lVar3 + 0x1c) == fStack_10c) &&
             (!NAN(*(float *)(lVar3 + 0x1c)) && !NAN(fStack_10c))) {
            if ((*(float *)(lVar3 + 0x20) == local_108) &&
               (!NAN(*(float *)(lVar3 + 0x20)) && !NAN(local_108))) {
              if ((*(float *)(lVar3 + 0x24) == local_104) &&
                 (!NAN(*(float *)(lVar3 + 0x24)) && !NAN(local_104))) {
                if ((*(float *)(lVar3 + 0x28) == local_100) &&
                   ((!NAN(*(float *)(lVar3 + 0x28)) && !NAN(local_100) &&
                    (*(int *)(lVar3 + 0x2c) == local_fc)))) {
                  if ((lVar3 != 0) && (lVar3 != -0x30)) goto LAB_140453ad5;
                  break;
                }
              }
            }
          }
        }
        iVar21 = *(int *)(lVar16 + 0x38 + lVar22);
      } while (iVar21 != -1);
    }
  }
  uVar18 = 0;
  uVar17 = (char)(0x30204010000 >> ((char)*(uint *)((longlong)param_2 + 0x20) * '\b' & 0x3fU));
  if (5 < *(uint *)((longlong)param_2 + 0x20)) {
    uVar17 = uVar18;
  }
  uVar12 = *(int *)((longlong)param_2 + 0x1c) - 2;
  if (uVar12 < 0xe) {
    uVar18 = (&DAT_14b43b930)[uVar12];
  }
  uVar12 = *(int *)((longlong)param_2 + 0x18) - 2;
  uVar20 = 0;
  uVar15 = 0;
  if (uVar12 < 0xe) {
    uVar15 = (&DAT_14b43b930)[uVar12];
  }
  uVar14 = (char)(0x30204010000 >> ((char)*(uint *)((longlong)param_2 + 0x14) * '\b' & 0x3fU));
  if (5 < *(uint *)((longlong)param_2 + 0x14)) {
    uVar14 = uVar20;
  }
  uVar12 = *(int *)((longlong)param_2 + 0x10) - 2;
  if (uVar12 < 0xe) {
    uVar20 = (&DAT_14b43b930)[uVar12];
  }
  uVar12 = *(int *)((longlong)param_2 + 0xc) - 2;
  if (uVar12 < 0xe) {
    uVar11 = (&DAT_14b43b930)[uVar12];
  }
  else {
    uVar11 = 0;
  }
  lVar16 = 6;
  do {
    *(undefined4 *)((longlong)&uStack_e6 + lVar16) = 0x100;
    *(undefined2 *)((longlong)&uStack_e2 + lVar16) = 1;
    *(undefined1 *)((longlong)&local_e0 + lVar16) = 0xf;
    lVar16 = lVar16 + 7;
  } while (lVar16 != 0x3e);
  local_a8 = 0;
  uStack_da = (undefined1)local_fc;
  local_e0._0_1_ = uVar14;
  local_e0._1_1_ = uVar11;
  uStack_de = uVar20;
  uStack_dd = uVar17;
  uStack_dc = uVar15;
  uStack_db = uVar18;
  (**(code **)(*DAT_14ca83900 + 0x60))(DAT_14ca83900,&local_130);
  local_f8 = &local_128;
  local_f0 = &local_130;
  FUN_145a61374((longlong *)(param_1 + 0x348),(longlong)&uStack_e6 + 2);
  lVar16 = local_130;
  if (local_130 != 0) {
    LOCK();
    puVar2 = (uint *)(local_130 + 8);
    uVar12 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar12 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_130 + 8);
      LOCK();
      uVar12 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar12 >> 0x1e & 1) == 0) {
        bVar19 = *(byte *)(local_130 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar16;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar19 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar23 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar23) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar23 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar23) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
LAB_140453ad5:
  plVar10 = (longlong *)(param_1 + 0x2f8);
  puVar2 = (uint *)((longlong)param_2 + 0x34);
  iVar21 = *(int *)((longlong)param_2 + 100);
  uVar12 = *(uint *)((longlong)param_2 + 0x40);
  uVar4 = *(uint *)((longlong)param_2 + 0x48);
  uVar5 = *(uint *)((longlong)param_2 + 0x4c);
  iVar7 = FUN_144a850aa(plVar10,uVar5 | uVar4 << 8 | uVar12 << 0x10 | iVar21 << 0x18,puVar2);
  if (iVar7 == -1) {
LAB_140453d10:
    uVar18 = 7;
    if (*(char *)((longlong)param_2 + 0x62) == '\x01') {
      if (*puVar2 < 8) {
        uVar18 = (undefined1)(0x705040302010006 >> ((byte)(*puVar2 << 3) & 0x3f));
      }
      else {
        uVar18 = 0;
      }
    }
    uVar17 = *(undefined1 *)((longlong)param_2 + 99);
    if (*(char *)((longlong)param_2 + 0x62) == '\0') {
      uVar17 = 0;
    }
    uVar15 = (undefined1)iVar21;
    bVar19 = (byte)(0x706040305020100 >> ((char)uVar12 * '\b' & 0x3fU));
    if (7 < uVar12) {
      bVar19 = 0;
    }
    local_f0._0_3_ = (uint3)bVar19 << 8;
    uVar20 = (undefined1)(0x706040305020100 >> ((char)uVar4 * '\b' & 0x3fU));
    if (7 < uVar4) {
      uVar20 = 0;
    }
    local_f0 = (longlong *)
               CONCAT44(CONCAT22(local_f0._6_2_,
                                 CONCAT11(*(undefined1 *)((longlong)param_2 + 0x60),
                                          *(undefined1 *)((longlong)param_2 + 0x61))),
                        CONCAT13(uVar20,(int3)local_f0));
    uVar20 = (undefined1)
             (0x706040305020100 >> ((char)*(uint *)((longlong)param_2 + 0x44) * '\b' & 0x3fU));
    if (7 < *(uint *)((longlong)param_2 + 0x44)) {
      uVar20 = 0;
    }
    local_f0._0_3_ = CONCAT12(uVar20,(undefined2)local_f0);
    uVar20 = (undefined1)(0x705040302010006 >> ((char)uVar5 * '\b' & 0x3fU));
    if (7 < uVar5) {
      uVar20 = 0;
    }
    local_f0 = (longlong *)CONCAT71(local_f0._1_7_,uVar20);
    uVar20 = (undefined1)
             (0x706040305020100 >> ((char)*(uint *)((longlong)param_2 + 0x50) * '\b' & 0x3fU));
    if (7 < *(uint *)((longlong)param_2 + 0x50)) {
      uVar20 = 0;
    }
    uVar14 = (undefined1)
             (0x706040305020100 >> ((char)*(uint *)((longlong)param_2 + 0x58) * '\b' & 0x3fU));
    if (7 < *(uint *)((longlong)param_2 + 0x58)) {
      uVar14 = 0;
    }
    uVar11 = (undefined1)
             (0x706040305020100 >> ((char)*(uint *)((longlong)param_2 + 0x54) * '\b' & 0x3fU));
    if (7 < *(uint *)((longlong)param_2 + 0x54)) {
      uVar11 = 0;
    }
    uVar6 = (undefined1)
            (0x705040302010006 >> ((char)*(uint *)((longlong)param_2 + 0x5c) * '\b' & 0x3fU));
    if (7 < *(uint *)((longlong)param_2 + 0x5c)) {
      uVar6 = 0;
    }
    local_f8 = (uint *)CONCAT44(CONCAT22(CONCAT11(uVar15,uVar14),CONCAT11(uVar11,uVar20)),
                                CONCAT13(uVar6,CONCAT12(uVar15,CONCAT11(uVar18,uVar17))));
    (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_130);
    local_e0._0_1_ = SUB81(puVar2,0);
    local_e0._1_1_ = (undefined1)((ulonglong)puVar2 >> 8);
    uStack_de = (undefined1)((ulonglong)puVar2 >> 0x10);
    uStack_dd = (undefined1)((ulonglong)puVar2 >> 0x18);
    uStack_dc = (undefined1)((ulonglong)puVar2 >> 0x20);
    uStack_db = (undefined1)((ulonglong)puVar2 >> 0x28);
    uStack_da = (undefined1)((ulonglong)puVar2 >> 0x30);
    uStack_d9 = (undefined1)((ulonglong)puVar2 >> 0x38);
    uStack_d8 = SUB84(&local_130,0);
    uStack_d4 = (undefined1)((ulonglong)&local_130 >> 0x20);
    uStack_d3 = (undefined1)((ulonglong)&local_130 >> 0x28);
    uStack_d2 = (undefined1)((ulonglong)&local_130 >> 0x30);
    uStack_d1 = (undefined1)((ulonglong)&local_130 >> 0x38);
    FUN_1459e05dc(plVar10,(longlong)&uStack_e6 + 2);
    if (local_130 != 0) {
      LOCK();
      puVar2 = (uint *)(local_130 + 8);
      uVar12 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_130 + 8);
        LOCK();
        uVar12 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar19 = *(byte *)(local_130 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = local_130;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar19 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar23 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar23) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar23 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar23) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
  }
  else if ((*plVar10 + (longlong)iVar7 * 0x48 == 0) || (*plVar10 + (longlong)iVar7 * 0x48 == -0x38))
  goto LAB_140453d10;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    uStack_d2 = 0;
    uStack_d4 = 0;
    local_e0._0_1_ = 2;
    local_e0._1_1_ = 0;
    uStack_dc = 0;
    uStack_db = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    uStack_d8 = 0;
    uStack_d3 = 1 < *(uint *)((longlong)param_2 + 0x7c);
    plVar10 = (longlong *)(param_1 + 0x160);
    (**(code **)(*DAT_14ca83900 + 0x50))(DAT_14ca83900,&local_f8);
    if (plVar10 != &local_f8) {
      lVar16 = *plVar10;
      *plVar10 = (longlong)local_f8;
      local_f8 = (uint *)0x0;
      if (lVar16 == 0) goto LAB_140453b50;
      LOCK();
      puVar2 = (uint *)(lVar16 + 8);
      uVar12 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar16 + 8);
        LOCK();
        uVar12 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar19 = *(byte *)(lVar16 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar16;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar19 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar23 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar23) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar23 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar23) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
    puVar2 = local_f8;
    if (local_f8 != (uint *)0x0) {
      LOCK();
      puVar1 = local_f8 + 2;
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar1 = puVar2 + 2;
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar19 = *(byte *)((longlong)puVar2 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = (longlong)puVar2;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar19 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar23 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar23) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar23);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar23 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar23) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar23);
          }
        }
      }
    }
  }
LAB_140453b50:
  memcpy(&local_e0,param_2,0x94);
  iVar21 = *(int *)(param_1 + 0x208);
  *(uint *)(param_1 + 0x208) = iVar21 + 1U;
  if (*(uint *)(param_1 + 0x20c) < iVar21 + 1U) {
    FUN_146564a7a((longlong *)(param_1 + 0x200),iVar21);
  }
  puVar13 = (undefined4 *)((longlong)iVar21 * 0x98 + *(longlong *)(param_1 + 0x200));
  *puVar13 = local_134;
  memcpy(puVar13 + 1,&local_e0,0x94);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1404540f6 FUN_1404540f6 body=540 status=ok
// SIG undefined FUN_1404540f6(void)

void FUN_1404540f6(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10 * 0x18);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1404542c9;
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
LAB_1404542c9:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140454314 FUN_140454314 body=453 status=ok
// SIG undefined FUN_140454314(void)

undefined8 FUN_140454314(longlong param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined2 local_5d;
  undefined1 local_5b;
  undefined4 local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  piVar4 = (int *)FUN_14001cc68(0x20,0x10);
  iVar1 = param_3[2];
  iVar5 = *param_3;
  iVar2 = param_3[1];
  *piVar4 = iVar5;
  piVar4[1] = iVar2;
  piVar4[2] = iVar1;
  *(wchar_t **)(piVar4 + 6) = L"Coh_StencilBuffer";
  iVar6 = DAT_14ca84e40;
  if ((DAT_14ca84e40 < iVar5 || iVar5 < 1) || (iVar2 < 1 || DAT_14ca84e40 < iVar2)) {
    if (DAT_14ca84e40 <= iVar5) {
      iVar5 = DAT_14ca84e40;
    }
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    *piVar4 = iVar5;
    if (iVar2 < iVar6) {
      iVar6 = iVar2;
    }
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    piVar4[1] = iVar6;
  }
  iVar5 = 1;
  if (1 < iVar1) {
    iVar5 = iVar1;
  }
  local_6c = *(undefined8 *)piVar4;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_40 = 0;
  uStack_38 = 0;
  local_5e = 0;
  local_90 = 0xc;
  local_5d = 0xb;
  local_64 = 0x10001;
  local_60 = 1;
  local_5f = (undefined1)iVar5;
  local_88 = 2;
  uStack_84 = 0x3f800000;
  uStack_80 = 1;
  uStack_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_5b = 0xff;
  local_50 = L"Coh_StencilBuffer";
  local_48 = 0;
  local_58 = 0x8200;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_98,&DAT_14ca85100);
  *(undefined8 *)(piVar4 + 4) = local_98;
  iVar1 = *(int *)(param_1 + 0x198);
  *(uint *)(param_1 + 0x198) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x19c) < iVar1 + 1U) {
    FUN_146564b94((longlong *)(param_1 + 400),iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 400);
  *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x10) = param_2;
  *(int **)(lVar3 + 8 + (longlong)iVar1 * 0x10) = piVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404544ee FUN_1404544ee body=107 status=ok
// SIG undefined FUN_1404544ee(void)

ulonglong FUN_1404544ee(undefined8 param_1,longlong param_2,double param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  bool bVar4;
  
  bVar3 = 1;
  if ((longlong)*(int *)(param_2 + 0x28) != 0) {
    if (0.0 <= param_3) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,param_2,0xff);
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x20);
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar1 = param_2;
      }
      lVar2 = 0;
      do {
        bVar3 = *(byte *)(*(longlong *)(lVar1 + lVar2) + 0xa0);
        if ((bVar3 & 1) == 0) break;
        bVar4 = (longlong)*(int *)(param_2 + 0x28) * 8 + -8 != lVar2;
        lVar2 = lVar2 + 8;
      } while (bVar4);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffff01;
}



// FUNCTION 14045455a FUN_14045455a body=1150 status=ok
// SIG undefined FUN_14045455a(void)

void FUN_14045455a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong *local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 local_98;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1 = (longlong *)*param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar10 = *piVar1;
  if (iVar10 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar10 = *piVar1;
  }
  *piVar1 = 0x40000020;
  plVar4 = param_1 + 5;
  local_b8 = 0;
  FUN_1404549da(param_1,param_1[0x41],param_1[0x42],plVar4);
  if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
    FUN_145711e66(plVar4);
    FUN_145711d52(plVar4);
  }
  FUN_140454cb0(param_1,param_1 + 0xf,param_1 + 0x50);
  local_b8 = 1;
  FUN_1404549da(param_1,param_1[0x41],param_1[0x42],param_1 + 0xf);
  uVar12 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar12) {
    lVar9 = uVar12 * 0x60;
    do {
      lVar13 = lVar9 + -0x60;
      cVar7 = FUN_1402ce39e(*(undefined8 *)(*param_1 + 0x58 + lVar13));
      if (cVar7 != '\0') {
        FUN_1402ce13e(*(undefined8 *)(*param_1 + 0x58 + lVar13));
        plVar4 = (longlong *)*param_1;
        iVar8 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar8 + 1U) {
          FUN_14740fcf4(param_1 + 2,iVar8);
        }
        lVar5 = param_1[2];
        local_b0 = plVar4;
        FUN_14740f91a(lVar5 + (longlong)iVar8 * 0x60,(longlong)plVar4 + lVar13);
        *(undefined8 *)(lVar5 + 0x58 + (longlong)iVar8 * 0x60) =
             *(undefined8 *)((longlong)local_b0 + lVar9 + -8);
        FUN_14740fdbc(param_1,(int)uVar12 + -1);
      }
      bVar6 = 1 < uVar12;
      uVar12 = uVar12 - 1;
      lVar9 = lVar13;
    } while (bVar6);
  }
  if (*(char *)((longlong)param_1 + 0x2b1) == '\x01') {
    lVar9 = param_1[0x42];
    if (*(int *)(lVar9 + 8) != *(int *)(lVar9 + 0x34)) {
      FUN_145711e66(lVar9);
      FUN_145711d52(lVar9);
    }
    FUN_140454f1a(param_1,param_1 + 0x41,param_1 + 0x42);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer(&DAT_14ca813a8);
  }
  if (((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) &&
     (iVar8 = (**(code **)(*DAT_14ca813a0 + 0xb0))(), 0 < iVar8)) {
    if (*(longlong *)param_1[0x57] != 0) {
      do {
        FUN_145711bf8(param_1 + 0x57,&local_a8);
        bVar11 = local_50;
        if (local_50 == 1) {
          local_b0 = (longlong *)param_1[0x41];
          iVar8 = FUN_145711cec(local_b0,(int)((ulonglong)local_98 >> 0x20) * 0x17 + (int)local_98 ^
                                         (int)((ulonglong)local_a0 >> 0x20) * 0x17 + (int)local_a0 ^
                                         (int)((uint7)uStack_a7 >> 0x18) * 0x17 +
                                         (int)CONCAT71(uStack_a7,local_a8),&local_a8);
          if (iVar8 != -1) {
            uVar3 = *(undefined8 *)(*local_b0 + 0x58 + (longlong)iVar8 * 0x68);
            FUN_145711ff2(local_b0,iVar8);
            lVar9 = FUN_145711faa(param_1 + 0x5b);
            *(undefined8 *)(lVar9 + 8) = uVar3;
            *(longlong *)param_1[0x5c] = lVar9;
            param_1[0x5c] = lVar9;
            bVar11 = local_50;
          }
        }
        if ((bVar11 & 1) != 0) {
          FUN_145711c9a(&local_a8);
        }
      } while (*(longlong *)param_1[0x57] != 0);
    }
    if (*(longlong *)param_1[0x5b] != 0) {
      iVar8 = -1;
      do {
        iVar8 = iVar8 + 1;
        if (DAT_14c760d7c <= iVar8) break;
        lVar9 = *(longlong *)param_1[0x5b];
        if (lVar9 != 0) {
          puVar2 = *(undefined8 **)(lVar9 + 8);
          param_1[0x5b] = lVar9;
          if (puVar2 != (undefined8 *)0x0) {
            FUN_1402ce13e(puVar2);
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      } while (*(longlong *)param_1[0x5b] != 0);
    }
  }
  LOCK();
  *(int *)(param_1[0x54] + 8) = *(int *)(param_1[0x54] + 8) + 1;
  UNLOCK();
  local_a8 = 1;
  FUN_1447439e4();
  *piVar1 = iVar10;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404549da FUN_1404549da body=725 status=ok
// SIG undefined FUN_1404549da(void)

void FUN_1404549da(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  char param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  undefined2 local_78;
  longlong local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = param_4 + 2;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  if ((int)param_4[5] != 0) {
    FUN_1449c0562(&local_70);
  }
  local_98 = local_60;
  iStack_94 = iStack_5c;
  local_90 = local_58;
  local_8c = local_54;
  local_a8 = local_70;
  local_a0 = local_68;
  local_78 = 0;
  local_b0 = param_4;
  local_88 = param_4;
  local_80 = param_4;
  if (iStack_5c < (int)local_68[3]) {
    do {
      lVar5 = *local_b0 + (longlong)iStack_94 * 0x68;
      puVar1 = (undefined8 *)(*local_b0 + (longlong)iStack_94 * 0x68);
      plVar6 = puVar1 + 0xb;
      iVar3 = FUN_145711cec(param_2,(int)((ulonglong)puVar1[2] >> 0x20) * 0x17 + (int)puVar1[2] ^
                                    (int)((ulonglong)puVar1[1] >> 0x20) * 0x17 + (int)puVar1[1] ^
                                    (int)((ulonglong)*puVar1 >> 0x20) * 0x17 + (int)*puVar1,lVar5);
      if ((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x68 + *param_2, lVar4 == 0)) {
        local_70 = lVar5;
        local_68 = plVar6;
        FUN_14740f640(param_2,local_4c,&local_70,0);
        cVar2 = FUN_14740fc2e(param_3,lVar5);
        if (cVar2 == '\0' && param_5 == '\x01') {
          lVar5 = (longlong)iStack_94 * 0x68 + *local_b0;
          iVar3 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
            FUN_14740fcf4(param_1,iVar3);
          }
          local_b8 = *param_1;
          FUN_14740f91a(local_b8 + (longlong)iVar3 * 0x60,lVar5);
          *(undefined8 *)(local_b8 + 0x58 + (longlong)iVar3 * 0x60) = *(undefined8 *)(lVar5 + 0x58);
        }
      }
      else if (*(longlong *)(lVar4 + 0x58) != *plVar6) {
        *(int *)((longlong)param_1 + 0x2ac) = *(int *)((longlong)param_1 + 0x2ac) + 1;
        iVar3 = (int)param_1[0x46];
        *(uint *)(param_1 + 0x46) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x234) < iVar3 + 1U) {
          FUN_14740f546(param_1 + 0x45,iVar3);
        }
        *(longlong *)(param_1[0x45] + (longlong)iVar3 * 8) = *plVar6;
        FUN_145711ff2(local_88,iStack_94);
        local_78 = CONCAT11(local_78._1_1_,1);
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while (iStack_94 < (int)local_a0[3]);
    if (((local_78 & 1) != 0) && (local_78._1_1_ == '\x01')) {
      FUN_14740f9f0(local_80,(int)local_80[1] - *(int *)((longlong)local_80 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140454cb0 FUN_140454cb0 body=616 status=ok
// SIG undefined FUN_140454cb0(void)

void FUN_140454cb0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  undefined2 local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)(int)param_3[1] != 0) {
    plVar7 = (longlong *)*param_3;
    plVar8 = plVar7 + (int)param_3[1];
    do {
      plVar9 = (longlong *)*plVar7;
      local_68 = plVar9 + 2;
      local_70 = 0x100000000;
      local_60 = 0xffffffff;
      local_58 = 0;
      if ((int)plVar9[5] != 0) {
        FUN_1449c0562(&local_70);
      }
      local_98 = local_60;
      uVar4 = local_98;
      local_90 = local_58;
      local_8c = local_54;
      local_a8 = local_70;
      local_a0 = local_68;
      local_78 = 0;
      local_98._4_4_ = (int)((ulonglong)local_60 >> 0x20);
      bVar3 = local_98._4_4_ < (int)local_68[3];
      iVar5 = local_98._4_4_;
      local_b0 = plVar9;
      local_98 = uVar4;
      local_88 = plVar9;
      local_80 = plVar9;
      if (bVar3) {
        do {
          lVar1 = *local_b0 + (longlong)iVar5 * 0x68;
          puVar2 = (undefined8 *)(*local_b0 + (longlong)iVar5 * 0x68);
          plVar9 = puVar2 + 0xb;
          iVar5 = FUN_145711cec(param_2,(int)((ulonglong)puVar2[2] >> 0x20) * 0x17 + (int)puVar2[2]
                                        ^ (int)((ulonglong)puVar2[1] >> 0x20) * 0x17 +
                                          (int)puVar2[1] ^
                                          (int)((ulonglong)*puVar2 >> 0x20) * 0x17 + (int)*puVar2,
                                lVar1);
          lVar6 = (longlong)iVar5 * 0x68 + *param_2;
          if (lVar6 == 0 || iVar5 == -1) {
            local_70 = lVar1;
            local_68 = plVar9;
            FUN_14740f640(param_2,local_4c,&local_70,0);
          }
          else if (*(longlong *)(lVar6 + 0x58) != *plVar9) {
            *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
            iVar5 = *(int *)(param_1 + 0x230);
            *(uint *)(param_1 + 0x230) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x234) < iVar5 + 1U) {
              FUN_14740f546((longlong *)(param_1 + 0x228),iVar5);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar5 * 8) = *plVar9;
          }
          FUN_145711ff2(local_88,local_98._4_4_);
          local_78 = CONCAT11(local_78._1_1_,1);
          local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
          FUN_1449c0562(&local_a8);
          iVar5 = local_98._4_4_;
        } while (local_98._4_4_ < (int)local_a0[3]);
        if (((local_78 & 1) != 0) && (local_78._1_1_ == '\x01')) {
          FUN_14740f9f0(local_80,(int)local_80[1] - *(int *)((longlong)local_80 + 0x34));
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140454f1a FUN_140454f1a body=1010 status=ok
// SIG undefined FUN_140454f1a(void)

int FUN_140454f1a(longlong *param_1,longlong *param_2,longlong *param_3)

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
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer(&DAT_14ca813a8);
  }
  if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    iVar7 = 0;
    if (0 < iVar2) goto LAB_140454f94;
  }
  lVar8 = *param_3;
  iVar7 = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
  if (iVar7 != 0 && *(int *)(lVar8 + 0x34) <= *(int *)(lVar8 + 8)) {
    FUN_147410564(local_128);
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar2 == 2) goto LAB_14045508f;
      if (iVar2 != 1) goto LAB_140455086;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14045508f;
LAB_140455196:
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_1402a2ad0(&local_98,local_128);
      local_d8[0] = (code *)0x0;
      puVar5 = (undefined8 *)FUN_14001cc68(0x58,8);
      *puVar5 = &PTR_LAB_14a37d640;
      local_c8 = puVar5;
      FUN_147410564(puVar5 + 1,&local_98);
      if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_d8[0] = FUN_1431e887c;
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
    else {
LAB_140455086:
      if (iVar2 != 0x10) goto LAB_140455196;
LAB_14045508f:
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_1402a2ad0(&local_98,local_128);
      if (DAT_14ca85164 == '\x01') {
        FUN_1431e86a8(&local_98);
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
        *puVar6 = &PTR_FUN_14a37d638;
        FUN_147410564(puVar6 + 2,&local_98);
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145adebb8(&local_98);
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_145adebb8(local_128);
    lVar8 = *param_3;
  }
  *param_3 = *param_2;
  *param_2 = lVar8;
  lVar8 = (longlong)(int)param_1[1];
  if (0 < lVar8) {
    uVar9 = lVar8 + 1;
    lVar8 = lVar8 * 0x60;
    do {
      lVar8 = lVar8 + -0x60;
      iVar2 = FUN_14740fc2e(*param_3,*param_1 + lVar8);
      if (iVar2 != 0) {
        lStack_90 = *param_1 + lVar8 + 0x58;
        local_98 = *param_1 + lVar8;
        FUN_14740f640(*param_2,local_128,&local_98,0);
      }
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
LAB_140454f94:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 14045530e FUN_14045530e body=187 status=ok
// SIG undefined FUN_14045530e(void)

void FUN_14045530e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x100);
  if ((lVar7 != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    if (*(char *)(param_1 + 0x5c) == '\0') {
      FUN_1404553ca(*(longlong *)(param_2 + 8),lVar7);
      *(undefined1 *)(param_1 + 0x5e) = 1;
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (lVar7 == 0) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar4 = (longlong *)FUN_14001cc68(0x10,8);
        plVar4[1] = lVar7;
        plVar6 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar4 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c0;
            plVar5 = plVar4;
            if (bVar8) {
              plVar6 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar4 = (longlong)plVar5;
            LOCK();
            bVar8 = plVar5 != DAT_14ca843c8;
            plVar6 = plVar4;
            if (bVar8) {
              plVar5 = DAT_14ca843c8;
              plVar6 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404553ca FUN_1404553ca body=269 status=ok
// SIG undefined FUN_1404553ca(void)

void FUN_1404553ca(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  bool bVar9;
  
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  bVar3 = *(byte *)(lVar4 + 0x30);
  *(byte *)(param_1 + 0x5e) = bVar3;
  bVar8 = *(byte *)(param_1 + 0x5d);
  if (bVar3 != bVar8) {
    if (bVar8 <= bVar3) {
      bVar8 = bVar3;
    }
    FUN_1432241a2(param_1 + 0x30,(float)bVar8,(float)bVar3,*(undefined8 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x7c));
  }
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 != param_2) {
    *(longlong **)(param_1 + 0x10) = param_2;
    if (param_2 != (longlong *)0x0) {
      LOCK();
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      UNLOCK();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar7 + 1);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(plVar7 + 1);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)plVar7 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = (longlong)plVar7;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_1 + 0x5e);
  return;
}



// FUNCTION 1404554d8 FUN_1404554d8 body=982 status=ok
// SIG undefined FUN_1404554d8(void)

void FUN_1404554d8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  size_t _Size;
  undefined2 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *_Buf1;
  undefined1 auStack_d8 [32];
  float local_b8;
  float local_b4;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar7 + 0x18) != *(int *)(lVar7 + 0x44)) {
    uVar11 = 0;
    lVar7 = FUN_14473c272(param_2,lVar7 + 0x148,0);
    lVar8 = FUN_14473c272(param_2,*(longlong *)(param_1 + 8) + 0x150,0);
    lVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x148) + 0x10))();
    iVar6 = *(int *)(lVar9 + 0x30);
    iVar4 = *(int *)(lVar9 + 0x2c);
    local_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    if ((*(char *)(lVar7 + 0x92) == '\x04') || (*(char *)(lVar7 + 0x92) == '\x01')) {
      uVar11 = *(undefined2 *)(lVar7 + 0x8e);
    }
    uVar3 = *(undefined1 *)(lVar7 + 0x90);
    plVar1 = (longlong *)(param_2 + 0x70);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
      FUN_140023dd8(plVar1,0x48);
      puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar13 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar10;
    puVar13[1] = *(undefined8 *)(lVar7 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 1;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *puVar13 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar13 + 5) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar13 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x2e) = uVar11;
    *(undefined1 *)(puVar13 + 6) = 0;
    *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
    puVar13[7] = lVar7;
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    if ((*(char *)(lVar8 + 0x92) == '\x04') || (*(char *)(lVar8 + 0x92) == '\x01')) {
      uVar11 = *(undefined2 *)(lVar8 + 0x8e);
    }
    else {
      uVar11 = 0;
    }
    uVar3 = *(undefined1 *)(lVar8 + 0x90);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 8;
    local_b0 = puVar13;
    if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
      FUN_140023dd8(plVar1,0x48);
      puVar12 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar12 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar10;
    puVar12[1] = *(undefined8 *)(lVar8 + 8);
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 1;
    *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
    *puVar12 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar12 + 5) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar12 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar12 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar12 + 0x2e) = uVar11;
    *(undefined1 *)(puVar12 + 6) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x32) = 0;
    puVar12[7] = lVar8;
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar12;
    *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_a0 = DAT_14c9c0de0;
    local_b8 = 1.0 / (float)iVar4;
    local_b4 = 1.0 / (float)iVar6;
    puStack_a8 = puVar12;
    FUN_1404558b0();
    lVar7 = DAT_14ca4b2f0;
    lVar9 = (longlong)DAT_14ca5d990;
    lVar8 = param_3 + 0x10;
    if (*(longlong *)(param_3 + 0x20) != 0) {
      lVar8 = *(longlong *)(param_3 + 0x20);
    }
    _Size = (size_t)DAT_14ca5fbcc;
    iVar6 = DAT_14ca5d990 + 0x1f;
    if (-1 < lVar9) {
      iVar6 = DAT_14ca5d990;
    }
    puVar2 = (uint *)(lVar8 + (longlong)(iVar6 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)DAT_14ca5d990 & 0x1f);
    _Buf1 = (void *)((longlong)*(int *)(lVar7 + 4 + lVar9 * 0x60) + *(longlong *)(param_3 + 0x30));
    iVar6 = memcmp(_Buf1,&local_b8,_Size);
    if (iVar6 != 0) {
      *(undefined1 *)(param_3 + 8) = 1;
      memcpy(_Buf1,&local_b8,_Size);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404558b0 FUN_1404558b0 body=258 status=ok
// SIG undefined FUN_1404558b0(void)

void FUN_1404558b0(void)

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
              0x110) < DAT_14ca5fc10) {
    FUN_144b3d300(&DAT_14ca5fc10);
    if (DAT_14ca5fc10 == -1) {
      FUN_145712064(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSplineMeshSceneResourceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x2e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5fb90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430a4151);
      _Init_thread_footer(&DAT_14ca5fc10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404559b4 FUN_1404559b4 body=63 status=ok
// SIG undefined FUN_1404559b4(void)

void FUN_1404559b4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1404559f4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1404559f4 FUN_1404559f4 body=93 status=ok
// SIG undefined FUN_1404559f4(void)

ulonglong FUN_1404559f4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 140455a60 FUN_140455a60 body=31 status=ok
// SIG undefined FUN_140455a60(void)

undefined8 FUN_140455a60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140455a80 FUN_140455a80 body=83 status=ok
// SIG undefined FUN_140455a80(void)

void FUN_140455a80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_140455ad4(*(longlong *)(param_1 + 0x20),param_2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_140208018((longlong *)(param_1 + 0x38),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 140455ad4 FUN_140455ad4 body=59 status=ok
// SIG undefined FUN_140455ad4(void)

void FUN_140455ad4(longlong param_1)

{
  char cVar1;
  
  FUN_140f9f112(param_1 + 0x48);
  cVar1 = FUN_1404e786a(param_1 + 8);
  if (cVar1 != '\0') {
    FUN_1404e7742(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 140455b10 FUN_140455b10 body=1899 status=ok
// SIG undefined FUN_140455b10(void)

void FUN_140455b10(wchar_t *param_1,ulonglong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
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
  undefined1 local_a1;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
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
  
  param_2 = param_2 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pwVar8 = param_1;
  if (DAT_14cac7648 == 0) {
    local_c0 = &local_90;
    local_90 = FUN_144a7958c;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_143242436;
    local_c8 = &LAB_14789ef1f;
    local_d0 = &LAB_1417b008f;
    local_d8 = L"Engine";
    local_e0 = 0x8000000000;
    local_e8 = 0x10000004;
    local_f0 = 0x10;
    local_f8 = 0x2b0;
    pwVar8 = L"/Script/Engine";
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  lVar3 = DAT_14cac7648;
  if ((DAT_14cac7648 == 0) || (DAT_14c950c29 == 0)) {
    if (DAT_14cac7648 != 0) goto LAB_140455b66;
    local_a0 = CONCAT71((int7)((ulonglong)pwVar8 >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140456019;
LAB_1404560b0:
    lVar15 = 0;
LAB_140455ba1:
    bVar9 = lVar3 != 0 & DAT_14c950c29;
    if (lVar15 == DAT_14cad00c8) {
      if (bVar9 != 0) {
        FUN_1456cec3c(lVar3);
      }
      pcVar1 = (code *)(param_1 + 0x120);
      pwVar8 = param_1 + 0x128;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = pwVar8;
      if (*(int *)(param_1 + 0x134) == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar14 = *(int *)(param_1 + 0x134);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar4 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = pcVar1;
      if ((local_78._4_4_ != iVar14) || (uStack_60 != pwVar8)) {
        iVar5 = local_78._4_4_;
        local_78 = uVar4;
        do {
          lVar3 = *(longlong *)(*(longlong *)local_90 + (longlong)iVar5 * 0x10);
          if ((lVar3 != 0) && (((*(byte *)(lVar3 + 0x1f8) & 0x20) == 0) == (bool)(char)param_2)) {
            FUN_14045627c(lVar3,param_2,1);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar4 = local_78;
        } while (local_90 != pcVar1 ||
                 ((wchar_t *)CONCAT44(uStack_7c,uStack_80) != pwVar8 || local_78._4_4_ != iVar14));
      }
      goto LAB_14045620f;
    }
joined_r0x0001404560d1:
    if (bVar9 != 0) {
      FUN_1456cec3c(lVar3);
    }
  }
  else {
    FUN_1456cec3c(DAT_14cac7648);
LAB_140455b66:
    if (DAT_14cad00c8 == 0) {
      local_c0 = &local_90;
      local_90 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1479b7a0c;
      local_d0 = &LAB_1463b464e;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000005;
      local_f0 = 8;
      local_f8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        local_a0 = 0;
LAB_140456019:
        local_c0 = &local_90;
        local_90 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_1479b7a0c;
        local_d0 = &LAB_1463b464e;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000005;
        local_f0 = 8;
        local_f8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        goto LAB_1404560b0;
      }
    }
    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar3 + 0x38)) {
      local_a0 = 0;
      lVar15 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) {
        lVar15 = lVar3;
      }
      goto LAB_140455ba1;
    }
    local_a0 = 0;
    bVar9 = DAT_14c950c29;
    if (lVar3 != 0) goto joined_r0x0001404560d1;
  }
  local_98 = param_1 + 0x128;
  iVar14 = *(int *)(param_1 + 0x134);
  uVar4 = local_78;
  if (iVar14 == 0) {
    uVar18 = 1;
    uVar12 = 0;
    iVar5 = 0;
    iVar13 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)(param_1 + 0x130);
    if (*(wchar_t **)(param_1 + 0x130) == (wchar_t *)0x0) {
      pwVar8 = local_98;
    }
    uVar17 = *(uint *)pwVar8;
    if (uVar17 == 0) {
      iVar5 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar5 = iVar14 + -1;
      }
      uVar12 = 0;
      uVar18 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar18 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar18 == uVar12) goto LAB_14045620f;
        iVar13 = iVar13 + 0x20;
        uVar17 = *(uint *)(pwVar8 + (uVar12 + 1) * 2);
        uVar12 = uVar12 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar18 = (ulonglong)(-uVar17 & uVar17);
    uVar11 = uVar18 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar5 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar5) {
      iVar5 = iVar14;
    }
  }
  if (iVar5 != iVar14) {
    uVar17 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar5 * 0x10);
      if (lVar15 != 0) {
        if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
          local_a1 = (undefined1)param_2;
          FUN_1456cec3c(lVar3);
          param_2 = CONCAT71((int7)(param_2 >> 8),local_a1);
        }
        if ((char)local_a0 == '\0') {
          if (DAT_14cad00c8 == 0) {
            local_c0 = &local_90;
            local_90 = FUN_144a7958c;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_14081d0ea;
            local_c8 = &LAB_1479b7a0c;
            local_d0 = &LAB_1463b464e;
            local_d8 = L"Engine";
            local_e0 = 0;
            local_e8 = 0x10000005;
            local_f0 = 8;
            local_f8 = 0x110;
            local_a1 = (undefined1)param_2;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            param_2 = CONCAT71((int7)(param_2 >> 8),local_a1);
            if (DAT_14cad00c8 == 0) goto LAB_140455f0e;
          }
          if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140455f0e;
          lVar16 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar16 = lVar3;
          }
        }
        else {
LAB_140455f0e:
          lVar16 = 0;
        }
        if (((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) &&
           (((*(byte *)(lVar15 + 0x1f8) & 0x20) == 0) == (bool)(char)param_2)) {
          uVar11 = param_2 & 0xffffffff;
          param_2 = param_2 & 0xffffffff;
          FUN_14045627c(lVar15,uVar11,1);
        }
      }
      uVar17 = uVar17 & ~(uint)uVar18;
      pwVar8 = *(wchar_t **)(param_1 + 0x130);
      if (*(wchar_t **)(param_1 + 0x130) == (wchar_t *)0x0) {
        pwVar8 = local_98;
      }
      iVar2 = *(int *)(param_1 + 0x134);
      iVar5 = (int)uVar12;
      lVar15 = (longlong)iVar5;
      uVar10 = *(uint *)(pwVar8 + lVar15 * 2) & uVar17;
      if (uVar10 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar5 < iVar6) {
          lVar16 = 0;
          do {
            uVar10 = *(uint *)(pwVar8 + (lVar15 + lVar16 + 1) * 2);
            if (uVar10 != 0) {
              uVar12 = (ulonglong)(iVar5 + (int)lVar16 + 1);
              uVar17 = 0xffffffff;
              goto LAB_140455d63;
            }
            iVar13 = iVar13 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar7 - lVar15 != lVar16);
          uVar17 = 0xffffffff;
          iVar5 = iVar7;
        }
        uVar12 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_140455d63:
        uVar18 = (ulonglong)(-uVar10 & uVar10);
        uVar11 = uVar18 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      uVar4 = local_78;
    } while (iVar5 != iVar14);
  }
LAB_14045620f:
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045627c FUN_14045627c body=726 status=ok
// SIG undefined FUN_14045627c(void)

void FUN_14045627c(longlong *param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  uint *puVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_1 + 0x3f) & 0x20) >> 5 == (byte)param_2) {
    if (param_3 != '\x02') goto LAB_140456317;
  }
  else {
    *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xdf | (byte)param_2 << 5;
    uVar2 = param_1[7];
    if (uVar2 < 0xffffffff00000000) {
      plVar9 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar9 = (longlong *)0x0;
      }
      (**(code **)(*plVar9 + 0x58))(plVar9,param_1,uVar2,0xb);
    }
    else {
      uVar10 = (uint)uVar2;
      if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
        puVar7 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar7 = DAT_14c998080;
        }
        if ((*(uint *)(puVar7 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
          lVar5 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
          puVar8 = *(uint **)(lVar5 + 0x18);
          if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
            puVar8 = (uint *)(lVar5 + 8);
          }
          *puVar8 = *puVar8 | 0x800;
          *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
        }
      }
    }
    (**(code **)(*param_1 + 0x4f0))(param_1);
    if (1 < (byte)(param_3 - 1U)) goto LAB_140456317;
  }
  if (0 < (int)param_1[0x28]) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1800000000;
    FUN_1404565ba(local_118,param_1 + 0x27);
    uVar10 = (uint)local_50;
    while (0 < (int)uVar10) {
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_118;
      }
      lVar5 = *(longlong *)(puVar4 + (ulonglong)uVar10 * 8 + -8);
      uVar10 = uVar10 - 1;
      local_50._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      local_50 = CONCAT44(local_50._4_4_,uVar10);
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x140);
        if (uVar1 != 0) {
          local_50 = CONCAT44(local_50._4_4_,uVar10 + uVar1);
          if (local_50._4_4_ - uVar10 < uVar1) {
            FUN_14024d3e4(local_118,uVar10);
          }
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_118;
          }
          FUN_144738dca(puVar4 + (ulonglong)uVar10 * 8,*(undefined8 *)(lVar5 + 0x138),uVar1);
        }
        if (param_3 == '\x02') {
          FUN_14045627c(lVar5,param_2,0);
        }
        if ((~*(byte *)(lVar5 + 0x9c) & 3) == 0) {
          bVar3 = *(byte *)(lVar5 + 0x9d);
          if ((bVar3 & 1) != 0) {
            if ((*(longlong *)(lVar5 + 0xb0) != 0) || (lVar6 = FUN_1448abda6(lVar5), lVar6 != 0))
            goto LAB_140456455;
            bVar3 = *(byte *)(lVar5 + 0x9d);
          }
          *(byte *)(lVar5 + 0x9d) = bVar3 | 1;
          FUN_1401057d4(lVar5);
          FUN_14010586c(&DAT_14cad0140,lVar5);
        }
LAB_140456455:
        uVar10 = (uint)local_50;
      }
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140456317:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140456554 FUN_140456554 body=101 status=ok
// SIG undefined FUN_140456554(void)

void FUN_140456554(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar2 = *(byte *)(param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_140456595:
      *(byte *)(param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar1 = FUN_1448abda6(param_1);
      if (lVar1 == 0) {
        bVar2 = *(byte *)(param_1 + 0x9d);
        goto LAB_140456595;
      }
    }
  }
  return;
}



// FUNCTION 1404565ba FUN_1404565ba body=119 status=ok
// SIG undefined FUN_1404565ba(void)

void FUN_1404565ba(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0xcc) - iVar2) < uVar1) {
      FUN_14024d3e4(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar3 = param_1;
    }
    memcpy((void *)(lVar3 + (longlong)iVar2 * 8),(void *)*param_2,(longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 140456632 FUN_140456632 body=2518 status=ok
// SIG undefined FUN_140456632(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140456632(longlong *param_1,undefined8 param_2,double *param_3,double *param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  void *_Src;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_be8 [32];
  undefined4 local_bc8;
  undefined4 local_bc0;
  undefined4 local_bb8;
  undefined8 local_bb0;
  wchar_t *local_ba8;
  code *local_ba0;
  undefined1 *local_b98;
  code **local_b90;
  code *local_b88;
  code *local_b80;
  undefined4 local_b74;
  double *local_b70;
  double *local_b68;
  double local_b60;
  double dStack_b58;
  double local_b50;
  double local_b48;
  double dStack_b40;
  double local_b38;
  double dStack_b30;
  code *local_b28 [3];
  double local_b10;
  double dStack_b08;
  double local_b00;
  undefined4 local_a90;
  char local_a8c;
  undefined8 local_a88;
  undefined4 local_a80;
  undefined1 local_a78 [2088];
  longlong local_250;
  longlong local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 auStack_198 [12];
  char local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_f0;
  
  uVar33 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar32 = (undefined4)param_2;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_be8;
  if (((*(byte *)((longlong)param_1 + 0x2ef4) & 2) == 0) || (param_1[0x72] == 0))
  goto LAB_140456d2e;
  lVar15 = param_1[0x86];
  cVar12 = (**(code **)(*param_1 + 0x880))(param_1);
  if ((cVar12 != '\0') || ((param_1[0x746] == 0 && ((int)param_1[0x747] == 0x7201))))
  goto LAB_140456d2e;
  if ((lVar15 != 0) && (cVar12 = FUN_14479439c(lVar15,0), cVar12 != '\0')) {
    lVar15 = *(longlong *)(lVar15 + 0x10);
    if (((lVar15 != 0) && (lVar14 = FUN_140086810(), lVar14 != 0)) &&
       ((*(byte *)(lVar14 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_b90 = local_b28;
        local_b28[0] = FUN_1449e2820;
        local_b80 = FUN_14081d0ea;
        local_b88 = FUN_14081d0ea;
        local_b98 = &LAB_1468b50ee;
        local_ba0 = FUN_1427f23a3;
        local_ba8 = L"Engine";
        local_bb0 = 0;
        local_bb8 = 0x10004001;
        local_bc0 = 8;
        local_bc8 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if (DAT_14c950d78 != lVar14) {
        do {
          if (0 < (longlong)*(int *)(lVar15 + 0x1e0)) {
            lVar16 = 0;
            do {
              lVar4 = *(longlong *)(*(longlong *)(lVar15 + 0x1d8) + lVar16);
              if (((lVar4 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                  == lVar14 + 0x30)) goto LAB_14045672d;
              lVar16 = lVar16 + 0x10;
            } while ((longlong)*(int *)(lVar15 + 0x1e0) * 0x10 != lVar16);
          }
          lVar15 = *(longlong *)(lVar15 + 0x40);
        } while (lVar15 != 0);
      }
    }
    goto LAB_140456d2e;
  }
LAB_14045672d:
  _Src = (void *)(**(code **)(*param_1 + 0x670))(param_1);
  memcpy(local_b28,_Src,0x98);
  local_a8c = *(char *)((longlong)_Src + 0x9c);
  if (local_a8c == '\x01') {
    local_a90 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_a80 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_a88 = *(undefined8 *)((longlong)_Src + 0xa0);
  FUN_144903306(local_a78);
  local_1b8 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_1b0 = *(undefined8 *)((longlong)_Src + 0x978);
  local_1a8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_1a0 = *(undefined8 *)((longlong)_Src + 0x988);
  local_138 = *(char *)((longlong)_Src + 0x9f0);
  if (local_138 == '\x01') {
    puVar18 = (undefined8 *)((longlong)_Src + 0x990);
    puVar19 = auStack_198;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  local_108 = *(undefined8 *)((longlong)_Src + 0xa20);
  local_128 = *(undefined8 *)((longlong)_Src + 0xa00);
  uStack_120 = *(undefined8 *)((longlong)_Src + 0xa08);
  local_118 = *(undefined8 *)((longlong)_Src + 0xa10);
  uStack_110 = *(undefined8 *)((longlong)_Src + 0xa18);
  plVar3 = (longlong *)param_1[0x73b];
  lVar15 = param_1[0x749];
  if ((*(byte *)((longlong)plVar3 + 0x14c) & 0x40) != 0) {
    (**(code **)(*plVar3 + 0x2a0))(plVar3);
    *(byte *)((longlong)plVar3 + 0x14c) =
         *(byte *)((longlong)plVar3 + 0x14c) & 0xdf |
         (*(byte *)(*(longlong *)(lVar15 + 0x10) + 0x1d) & 1) << 5;
  }
  lVar14 = (**(code **)(*plVar3 + 0x180))(plVar3);
  local_b70 = param_3;
  if (lVar14 == 0) {
LAB_140456fbc:
    bVar17 = 0;
  }
  else if ((((*(longlong *)(lVar14 + 0x30) != 0) &&
            (lVar16 = *(longlong *)(*(longlong *)(lVar14 + 0x30) + 0x2b0), lVar16 != 0)) &&
           ((*(longlong *)(lVar16 + 0x588) != 0 &&
            (*(double *)(lVar14 + 0x708) <= *(double *)(lVar14 + 0x6d0))))) ||
          (((*(byte *)(lVar14 + 0x154) & 0x40) != 0 && (iVar13 = FUN_14490d72a(lVar14), iVar13 == 3)
           ))) {
    bVar17 = 1;
  }
  else {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar16 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar16);
        if (*(longlong *)(lVar4 + 0x360) == lVar14) {
          if ((lVar4 != 0) && (bVar17 = 1, (*(byte *)(lVar4 + 0x278) & 1) != 0)) goto LAB_1404568f7;
          break;
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar16);
    }
    cVar12 = FUN_144a80e00(lVar14);
    if (cVar12 == '\0') goto LAB_140456fbc;
    bVar17 = *(byte *)(lVar14 + 0x155) >> 7;
  }
LAB_1404568f7:
  if (0 < (longlong)*(int *)(lVar15 + 0x28)) {
    puVar18 = *(undefined8 **)(lVar15 + 0x20);
    puVar19 = puVar18 + (longlong)*(int *)(lVar15 + 0x28) * 2;
    local_b68 = param_4;
    do {
      plVar5 = (longlong *)*puVar18;
      plVar6 = (longlong *)puVar18[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (bVar17 != 0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
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
      puVar18 = puVar18 + 2;
    } while (puVar18 != puVar19);
    local_b74 = uVar32;
    if ((*(byte *)(*(longlong *)(lVar15 + 0x10) + 0x1c) & 8) == 0) {
      FUN_140457442(plVar3);
    }
    auVar29 = _DAT_1499387d0;
    auVar2 = *(undefined1 (*) [16])(plVar3 + 9);
    dVar10 = (double)DAT_1499387d0;
    dVar11 = DAT_1499387d0._8_8_;
    auVar28 = divpd(auVar2,_DAT_1499387d0);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = plVar3[0xb];
    auVar30 = divpd(auVar30,_DAT_1499387d0);
    auVar28 = roundpd(auVar28,auVar28,3);
    auVar30 = roundpd(auVar30,auVar30,3);
    dVar7 = (auVar2._0_8_ - auVar28._0_8_ * dVar10) * 0.008726646259971648;
    dVar24 = (auVar2._8_8_ - auVar28._8_8_ * dVar11) * 0.008726646259971648;
    dVar8 = ((double)plVar3[0xb] - auVar30._0_8_ * dVar10) * 0.008726646259971648;
    dVar9 = (0.0 - auVar30._8_8_ * dVar11) * 0.008726646259971648;
    dVar20 = sin(dVar7);
    dVar21 = sin(dVar24);
    dVar22 = sin(dVar8);
    sin(dVar9);
    dVar23 = cos(dVar7);
    dVar24 = cos(dVar24);
    dVar25 = cos(dVar8);
    cos(dVar9);
    dVar8 = -(dVar24 * dVar20 * dVar22) + dVar21 * dVar23 * dVar25;
    dVar9 = dVar21 * dVar20 * dVar22 + dVar24 * dVar23 * dVar25;
    dVar7 = dVar20 * dVar21 * dVar25 - dVar23 * dVar24 * dVar22;
    dVar24 = -(dVar20 * dVar24 * dVar25) - dVar23 * dVar21 * dVar22;
    auVar2 = *(undefined1 (*) [16])(plVar3 + 0x14);
    auVar28 = divpd(auVar2,auVar29);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = plVar3[0x16];
    auVar30 = divpd(auVar31,auVar29);
    auVar29 = roundpd(auVar28,auVar28,3);
    auVar28 = roundpd(auVar30,auVar30,3);
    dVar20 = (auVar2._0_8_ - auVar29._0_8_ * dVar10) * 0.008726646259971648;
    dVar21 = (auVar2._8_8_ - auVar29._8_8_ * dVar11) * 0.008726646259971648;
    dVar10 = ((double)plVar3[0x16] - auVar28._0_8_ * dVar10) * 0.008726646259971648;
    dVar11 = (0.0 - auVar28._8_8_ * dVar11) * 0.008726646259971648;
    dVar22 = sin(dVar20);
    dVar23 = sin(dVar21);
    dVar25 = sin(dVar10);
    sin(dVar11);
    dVar20 = cos(dVar20);
    dVar21 = cos(dVar21);
    dVar26 = cos(dVar10);
    cos(dVar11);
    dVar10 = -(dVar21 * dVar22 * dVar25) + dVar23 * dVar20 * dVar26;
    dVar11 = dVar23 * dVar22 * dVar25 + dVar21 * dVar20 * dVar26;
    dVar27 = dVar22 * dVar23 * dVar26 - dVar20 * dVar21 * dVar25;
    dVar20 = -(dVar22 * dVar21 * dVar26) - dVar20 * dVar23 * dVar25;
    local_b48 = dVar20 * dVar8 * -1.0 + dVar10 * dVar24 + dVar7 * dVar11 * 1.0 + dVar9 * dVar27;
    dStack_b40 = dVar27 * dVar8 * 1.0 + dVar11 * dVar24 + dVar7 * dVar10 * -1.0 + dVar9 * dVar20;
    local_b38 = dVar11 * dVar8 * 1.0 + ((dVar7 * dVar20 * 1.0 + dVar9 * dVar10) - dVar24 * dVar27);
    dStack_b30 = dVar10 * dVar8 * -1.0 +
                 ((dVar7 * dVar27 * -1.0 + dVar9 * dVar11) - dVar24 * dVar20);
    FUN_1448052ee(&local_b48,&local_b60);
    local_b00 = local_b50;
    local_b10 = local_b60;
    dStack_b08 = dStack_b58;
    uVar33 = 0;
    param_4 = local_b68;
    uVar32 = local_b74;
  }
  param_3 = local_b70;
  iVar13 = *(int *)(*(longlong *)(param_1[0x749] + 0x10) + 0x20);
  if (iVar13 == 0) {
    local_b70[2] = local_b00;
    *local_b70 = local_b10;
    local_b70[1] = dStack_b08;
LAB_140456ce4:
    param_4[2] = DAT_14c846508;
    dVar10 = DAT_14c846500;
    *param_4 = DAT_14c8464f8;
    param_4[1] = dVar10;
  }
  else {
    if (iVar13 == 1) goto LAB_140456ce4;
    *local_b70 = *param_4 + *local_b70;
    local_b70[1] = param_4[1] + local_b70[1];
    local_b70[2] = param_4[2] + local_b70[2];
  }
  if (local_138 == '\x01') {
    local_138 = '\0';
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_250 != 0) {
    FUN_1400020a8();
  }
LAB_140456d2e:
  FUN_1404571f6(param_1,CONCAT44(uVar33,uVar32),param_3,param_4);
  if ((local_f0 ^ (ulonglong)auStack_be8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045700e FUN_14045700e body=237 status=ok
// SIG undefined FUN_14045700e(void)

void FUN_14045700e(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  
  if (-1 < *(char *)(param_3 + 0x14c)) {
    dVar2 = (double)FUN_144719204((int)*(undefined8 *)(param_3 + 0x48));
    dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                    (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
    fVar1 = (float)(double)(~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
                           (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2));
    if (*(float *)(param_1 + 0x1c) <= fVar1) {
      fVar1 = *(float *)(param_1 + 0x1c);
    }
    if (fVar1 <= *(float *)(param_1 + 0x18)) {
      fVar1 = *(float *)(param_1 + 0x18);
    }
    *(double *)(param_3 + 0x48) = (double)fVar1;
    dVar2 = *(double *)(param_3 + 0xa0);
    fVar1 = (float)((double)fVar1 + dVar2);
    if (*(float *)(param_1 + 0x1c) < fVar1) {
      dVar2 = dVar2 - (double)(fVar1 - *(float *)(param_1 + 0x1c));
    }
    else {
      if (*(float *)(param_1 + 0x18) <= fVar1) {
        return;
      }
      dVar2 = dVar2 + (double)(*(float *)(param_1 + 0x18) - fVar1);
    }
    *(double *)(param_3 + 0xa0) = dVar2;
  }
  return;
}



// FUNCTION 1404570fc FUN_1404570fc body=249 status=ok
// SIG undefined FUN_1404570fc(void)

void FUN_1404570fc(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  *(double *)(param_3 + 0xf0) = *(double *)(param_1 + 0x18) + *(double *)(param_3 + 0xf0);
  *(double *)(param_3 + 0xf8) = *(double *)(param_1 + 0x20) + *(double *)(param_3 + 0xf8);
  *(double *)(param_3 + 0x100) = *(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x100);
  *(double *)(param_3 + 0x108) = *(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x108);
  *(double *)(param_3 + 0x110) = *(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x110);
  *(double *)(param_3 + 0x118) = *(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x118);
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe8);
  if (lVar1 != 0) {
    cVar2 = FUN_14016169c(lVar1,0);
    if (cVar2 != '\0') {
      *(double *)(param_3 + 0xf0) = *(double *)(param_1 + 0x48) + *(double *)(param_3 + 0xf0);
      *(double *)(param_3 + 0xf8) = *(double *)(param_1 + 0x50) + *(double *)(param_3 + 0xf8);
      *(double *)(param_3 + 0x100) = *(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x100);
    }
  }
  return;
}



// FUNCTION 1404571f6 FUN_1404571f6 body=588 status=ok
// SIG undefined FUN_1404571f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404571f6(longlong *param_1,undefined8 param_2,undefined1 (*param_3) [16],double *param_4)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  
  if (0 < (int)param_1[0x5b1]) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(param_1[0x5b0] + lVar7 * 8);
      if (plVar1 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar1 + 0x2c8))();
        if (cVar5 == '\0') {
          plVar1 = *(longlong **)(param_1[0x5b0] + lVar7 * 8);
          cVar5 = (**(code **)(*plVar1 + 0x2f8))(plVar1,param_1[0x86]);
          if (cVar5 != '\0') break;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_1[0x5b1]);
  }
  *(double *)*param_3 = *param_4 + *(double *)*param_3;
  *(double *)(*param_3 + 8) = param_4[1] + *(double *)(*param_3 + 8);
  *(double *)param_3[1] = param_4[2] + *(double *)param_3[1];
  param_4[2] = DAT_14c846508;
  dVar14 = DAT_14c846500;
  *param_4 = DAT_14c8464f8;
  param_4[1] = dVar14;
  if (*(longlong *)(DAT_14cb0d2b0 + 0xfe0) != 0) {
    lVar7 = FUN_1447210f0(param_1);
    plVar1 = *(longlong **)(DAT_14cb0d2b0 + 0xfe0);
    if (lVar7 == 0) {
      cVar5 = (**(code **)(*plVar1 + 0x150))(plVar1);
    }
    else {
      uVar6 = FUN_1447210f0(param_1);
      cVar5 = (**(code **)(*plVar1 + 0x158))(plVar1,uVar6);
    }
    if (cVar5 != '\0') {
      auVar16 = *param_3;
      dVar14 = (double)DAT_1499387d0;
      dVar2 = DAT_1499387d0._8_8_;
      auVar8 = divpd(auVar16,_DAT_1499387d0);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(double *)param_3[1];
      auVar12 = divpd(auVar11,_DAT_1499387d0);
      auVar8 = roundpd(auVar8,auVar8,3);
      auVar12 = roundpd(auVar12,auVar12,3);
      dVar3 = auVar16._0_8_ - auVar8._0_8_ * dVar14;
      dVar4 = auVar16._8_8_ - auVar8._8_8_ * dVar2;
      dVar17 = *(double *)param_3[1] - auVar12._0_8_ * dVar14;
      dVar18 = 0.0 - auVar12._8_8_ * dVar2;
      auVar19._0_8_ = dVar3 + dVar14;
      auVar19._8_8_ = dVar4 + dVar2;
      auVar15._0_8_ = dVar14 + dVar17;
      auVar15._8_8_ = dVar2 + dVar18;
      auVar12._8_8_ = -(ulonglong)(0.0 <= dVar4);
      auVar12._0_8_ = -(ulonglong)(0.0 <= dVar3);
      auVar16._8_4_ = SUB84(dVar4,0);
      auVar16._0_8_ = dVar3;
      auVar16._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar12 = blendvpd(auVar19,auVar16,auVar12);
      auVar9._8_8_ = -(ulonglong)(0.0 <= dVar18);
      auVar9._0_8_ = -(ulonglong)(0.0 <= dVar17);
      auVar8._8_8_ = dVar18;
      auVar8._0_8_ = dVar17;
      auVar16 = blendvpd(auVar15,auVar8,auVar9);
      auVar13._0_8_ = auVar12._0_8_ + -360.0;
      auVar13._8_8_ = auVar12._8_8_ + -360.0;
      auVar10._8_8_ = -(ulonglong)(180.0 < auVar12._8_8_);
      auVar10._0_8_ = -(ulonglong)(180.0 < auVar12._0_8_);
      auVar8 = blendvpd(auVar12,auVar13,auVar10);
      *param_3 = auVar8;
      dVar14 = auVar16._0_8_;
      *(ulonglong *)param_3[1] =
           ~-(ulonglong)(180.0 < dVar14) & (ulonglong)dVar14 |
           (ulonglong)(dVar14 + -360.0) & -(ulonglong)(180.0 < dVar14);
      return;
    }
  }
  (**(code **)(*param_1 + 0x828))(param_1,param_3);
  (**(code **)(*param_1 + 0x838))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014045743f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x830))(param_1,param_3);
  return;
}



// FUNCTION 140457442 FUN_140457442 body=529 status=ok
// SIG undefined FUN_140457442(void)

void FUN_140457442(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  
  dVar1 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x48),0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  *(ulonglong *)(param_1 + 0x48) =
       ~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
       (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1);
  dVar1 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0xa0),0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  *(ulonglong *)(param_1 + 0xa0) =
       ~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
       (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1);
  dVar1 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0xd8),0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  dVar5 = (double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  *(double *)(param_1 + 0xd8) = dVar5;
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0xa0);
  if (89.0 <= dVar1) {
    dVar1 = 89.0;
  }
  if (dVar1 <= -89.0) {
    dVar1 = -89.0;
  }
  dVar3 = dVar2 + dVar1;
  fVar4 = (float)dVar3;
  *(double *)(param_1 + 0x48) = dVar1;
  if (89.0 < fVar4) {
    dVar2 = dVar2 - (double)(fVar4 + -89.0);
  }
  else {
    if (-89.0 <= fVar4) goto LAB_1404575b2;
    dVar2 = dVar2 + (double)(-89.0 - fVar4);
  }
  *(double *)(param_1 + 0xa0) = dVar2;
  dVar3 = dVar1 + dVar2;
LAB_1404575b2:
  fVar4 = (float)(dVar3 + dVar5);
  if (89.0 < fVar4) {
    dVar5 = dVar5 - (double)(fVar4 + -89.0);
  }
  else {
    if (-89.0 <= fVar4) {
      return;
    }
    dVar5 = dVar5 + (double)(-89.0 - fVar4);
  }
  *(double *)(param_1 + 0xd8) = dVar5;
  return;
}



// FUNCTION 140457654 FUN_140457654 body=438 status=ok
// SIG undefined FUN_140457654(void)

void FUN_140457654(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined8 *)(param_1 + 0x80) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x70) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x88) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + 0xb0) = DAT_14c846508;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xc0) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 200) = uVar3;
  *(undefined8 *)(param_1 + 0xe8) = DAT_14c846508;
  uVar3 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0x100) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xf0) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  uVar3 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *(ulonglong *)(param_1 + 0x108) = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  *(undefined8 *)(param_1 + 0x118) = DAT_14c846508;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar6 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar2 + 0x48);
    uVar6 = *(undefined4 *)(lVar2 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x124) = uVar6;
  *(undefined4 *)(param_1 + 0x120) = uVar6;
  uVar3 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x128) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  uVar3 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x138) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x140) = uVar3;
  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0xfe;
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0x5a;
  *(undefined8 *)(param_1 + 0x160) = DAT_14c846508;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar6 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x150) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)(param_1 + 0x154) = uVar6;
  *(undefined4 *)(param_1 + 0x158) = uVar4;
  *(undefined4 *)(param_1 + 0x15c) = uVar5;
  iVar1 = *(int *)(param_1 + 0x174);
  FUN_14045780a(*(undefined8 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x170));
  *(undefined4 *)(param_1 + 0x170) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x174) != 0)) {
    FUN_14880dd46(param_1 + 0x168);
  }
  FUN_1449ad616(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xbf;
  return;
}



// FUNCTION 14045780a FUN_14045780a body=72 status=ok
// SIG undefined FUN_14045780a(void)

void FUN_14045780a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x8c0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x11] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x11a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140457852 FUN_140457852 body=80 status=ok
// SIG undefined FUN_140457852(void)

void FUN_140457852(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014045789e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404578a2 FUN_1404578a2 body=75 status=ok
// SIG undefined FUN_1404578a2(void)

void FUN_1404578a2(longlong param_1,int param_2)

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



// FUNCTION 1404578ee FUN_1404578ee body=826 status=ok
// SIG undefined FUN_1404578ee(void)

longlong * FUN_1404578ee(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar10 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_140457c28(param_2);
  }
  iVar10 = *(int *)(param_1 + 0x170);
  if (iVar10 == 0) {
    uVar17 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar13 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x158);
    }
    uVar16 = *puVar6;
    if (uVar16 == 0) {
      iVar5 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar5 = iVar10 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar15) {
          return param_2;
        }
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar15 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar5 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar5) {
      iVar5 = iVar10;
    }
  }
  if (iVar5 != iVar10) {
    uVar16 = 0xffffffff;
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 8 + (longlong)iVar5 * 0x30);
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x10 + (longlong)iVar5 * 0x30) *
              0x10;
      plVar4 = *(longlong **)(lVar14 + -8 + lVar7);
      if (plVar4 != (longlong *)0x0) {
        lVar14 = *(longlong *)(lVar14 + -0x10 + lVar7);
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar5 = (int)plVar4[1];
        do {
          if (iVar5 == 0) {
            plVar12 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar18 = iVar5 == iVar3;
          if (bVar18) {
            *(int *)(plVar4 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar12 = plVar4;
        } while (!bVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        if ((plVar12 == (longlong *)0x0) || (lVar14 == 0)) {
          if (plVar12 == (longlong *)0x0) goto LAB_140457a68;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          iVar5 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
            FUN_1469e5f1c(param_2,iVar5);
          }
          lVar7 = *param_2;
          *(longlong *)(lVar7 + (longlong)iVar5 * 0x10) = lVar14;
          *(longlong **)(lVar7 + 8 + (longlong)iVar5 * 0x10) = plVar12;
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          plVar4 = plVar12 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        LOCK();
        plVar4 = plVar12 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
LAB_140457a68:
      uVar16 = uVar16 & ~(uint)uVar17;
      puVar6 = *(uint **)(param_1 + 0x168);
      if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x158);
      }
      iVar3 = *(int *)(param_1 + 0x170);
      iVar5 = (int)uVar15;
      lVar14 = (longlong)iVar5;
      uVar11 = puVar6[lVar14] & uVar16;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar7 = 0;
          do {
            uVar11 = puVar6[lVar14 + lVar7 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar7 + 1);
              uVar16 = 0xffffffff;
              goto LAB_140457ae2;
            }
            iVar13 = iVar13 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar9 - lVar14 != lVar7);
          uVar16 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_140457ae2:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar10);
  }
  return param_2;
}



// FUNCTION 140457c28 FUN_140457c28 body=226 status=ok
// SIG undefined FUN_140457c28(void)

void FUN_140457c28(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140457d0a FUN_140457d0a body=21 status=ok
// SIG undefined FUN_140457d0a(void)

undefined8 FUN_140457d0a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140457d26 FUN_140457d26 body=725 status=ok
// SIG undefined FUN_140457d26(void)

void FUN_140457d26(char *param_1)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined *puVar9;
  ulonglong *puVar10;
  int iVar11;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 != '\0') {
    *param_1 = '\0';
    FUN_140917eae(param_1);
  }
  if (param_1[1] == '\x01') {
    param_1[1] = '\0';
    lVar4 = FUN_140458208(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_1401b0f18();
      plVar6 = (longlong *)FUN_144718840(lVar4,uVar5);
      if (plVar6 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
        FUN_1406c9d00(uVar5,&local_30);
        if (local_28 == 0) {
          uVar5 = FUN_140927942();
          local_28 = FUN_14477b664(uVar5);
        }
        if (local_20 == 0) {
          if ((((local_30 == 0) || (local_28 == 0)) ||
              (plVar6 = *(longlong **)(local_28 + 0xb8), plVar6 == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) goto LAB_140457dd1;
          uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
          local_20 = FUN_144aff482(uVar5,&local_30);
          if (local_20 == 0) goto LAB_140457dd1;
        }
        if (DAT_14cbc1a78 != DAT_14cbc1aa4) {
          uVar8 = ((uint)(local_20 >> 0x14) & 0xffff ^ (uint)(local_20 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          uVar8 = uVar8 >> 0x10 ^ uVar8;
          puVar9 = DAT_14cbc1ab0;
          if (DAT_14cbc1ab0 == (undefined *)0x0) {
            puVar9 = &DAT_14cbc1aa8;
          }
          iVar11 = *(int *)(puVar9 + (ulonglong)(DAT_14cbc1ab8 - 1U & uVar8) * 4);
          while (iVar11 != -1) {
            puVar1 = (ulonglong *)(DAT_14cbc1a70 + (longlong)iVar11 * 0x18);
            if (*puVar1 == local_20) {
              puVar10 = puVar1 + 1;
              if (((puVar10 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
                  ((int)*puVar10 != 0)) &&
                 ((iVar11 = (int)*puVar10 + -1, *(int *)puVar10 = iVar11, iVar11 == 0 &&
                  (DAT_14cbc1a78 != DAT_14cbc1aa4)))) {
                puVar9 = &DAT_14cbc1aa8;
                if (DAT_14cbc1ab0 != (undefined *)0x0) {
                  puVar9 = DAT_14cbc1ab0;
                }
                iVar11 = *(int *)(puVar9 + ((longlong)(int)uVar8 & (longlong)DAT_14cbc1ab8 - 1U) * 4
                                 );
                goto joined_r0x000140457f88;
              }
              break;
            }
            iVar11 = (int)puVar1[2];
          }
        }
      }
    }
  }
LAB_140457dd1:
  lVar4 = FUN_140458208(param_1);
  if (lVar4 != 0) {
    FUN_140457ffc(lVar4 + 0x2b8,param_1);
    FUN_140457ffc(lVar4 + 0x2d0,param_1);
    FUN_140457ffc(lVar4 + 0x318,param_1);
    FUN_140457ffc(lVar4 + 0x300,param_1);
  }
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
joined_r0x000140457f88:
  if (iVar11 == -1) goto LAB_140457dd1;
  puVar1 = (ulonglong *)(DAT_14cbc1a70 + (longlong)iVar11 * 0x18);
  if (*puVar1 == local_20) {
    iVar3 = *(int *)(puVar9 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
    if (iVar3 == iVar11) {
      puVar7 = (undefined4 *)(puVar9 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
    }
    else {
      do {
        lVar4 = (longlong)iVar3;
        iVar3 = *(int *)(DAT_14cbc1a70 + 0x10 + lVar4 * 0x18);
      } while (iVar3 != iVar11);
      puVar7 = (undefined4 *)(DAT_14cbc1a70 + lVar4 * 0x18 + 0x10);
    }
    *puVar7 = (int)puVar1[2];
    FUN_140458334();
    goto LAB_140457dd1;
  }
  iVar11 = (int)puVar1[2];
  goto joined_r0x000140457f88;
}



// FUNCTION 140457ffc FUN_140457ffc body=304 status=ok
// SIG undefined FUN_140457ffc(void)

int FUN_140457ffc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (*(int *)((longlong)param_1 + 0x14) < 1) {
    iVar1 = (int)param_1[1];
    iVar6 = 0;
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        if (((*(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10) == 0) ||
            (plVar7 = *(longlong **)(*param_1 + (longlong)iVar5 * 0x10), plVar7 == (longlong *)0x0))
           || ((cVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2), cVar4 != '\0' ||
               (cVar4 = (**(code **)(*plVar7 + 0x28))(plVar7), cVar4 != '\0')))) {
          FUN_14005b288(param_1,iVar5);
          iVar6 = iVar6 + 1;
        }
        else {
          iVar5 = iVar5 + 1;
        }
        iVar1 = (int)param_1[1];
      } while (iVar5 < iVar1);
    }
    iVar5 = 2;
    if (2 < iVar1 * 2) {
      iVar5 = iVar1 * 2;
    }
    *(int *)(param_1 + 2) = iVar5;
    if (*(int *)((longlong)param_1 + 0xc) != iVar1) {
      FUN_14045812c(param_1);
    }
  }
  else if ((longlong)(int)param_1[1] == 0) {
    iVar6 = 0;
  }
  else {
    plVar7 = (longlong *)*param_1;
    lVar8 = (longlong)(int)param_1[1] << 4;
    iVar6 = 0;
    do {
      if ((((int)plVar7[1] != 0) && (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), cVar4 != '\0')) {
        if (((int)plVar7[1] != 0) && (puVar3 = (undefined8 *)*plVar7, puVar3 != (undefined8 *)0x0))
        {
          (**(code **)*puVar3)(puVar3,0);
          FUN_1446efa72(plVar7,0,0,0x10);
          *(undefined4 *)(plVar7 + 1) = 0;
        }
        iVar6 = iVar6 + 1;
      }
      plVar7 = plVar7 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    if (0 < iVar6) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return iVar6;
}



// FUNCTION 14045812c FUN_14045812c body=220 status=ok
// SIG undefined FUN_14045812c(void)

void FUN_14045812c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140458208 FUN_140458208 body=299 status=ok
// SIG undefined FUN_140458208(void)

longlong FUN_140458208(longlong param_1)

{
  longlong lVar1;
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
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if (lVar1 != 0) {
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
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
      goto LAB_14045826d;
    }
  }
  lVar1 = 0;
LAB_14045826d:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140458334 FUN_140458334 body=128 status=ok
// SIG undefined FUN_140458334(void)

void FUN_140458334(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cbc1a70;
  if (DAT_14cbc1aa4 != 0) {
    *(int *)(DAT_14cbc1a70 + (longlong)DAT_14cbc1aa0 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cbc1aa4) {
    iVar4 = DAT_14cbc1aa0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cbc1aa4 = DAT_14cbc1aa4 + 1;
  puVar3 = &DAT_14cbc1a80;
  if (DAT_14cbc1a90 != (undefined4 *)0x0) {
    puVar3 = DAT_14cbc1a90;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cbc1aa0 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1404583b4 FUN_1404583b4 body=26 status=ok
// SIG undefined FUN_1404583b4(void)

void FUN_1404583b4(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14068fdd8();
                    /* WARNING: Could not recover jumptable at 0x0001404583c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  return;
}



// FUNCTION 1404583d4 FUN_1404583d4 body=109 status=ok
// SIG undefined FUN_1404583d4(void)

void FUN_1404583d4(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x108);
    lVar2 = (longlong)*(int *)(param_1 + 0x110) * 0x18;
    do {
      if (*plVar3 == param_2) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        iVar1 = *(int *)(param_3 + 0x18);
        *(uint *)(param_3 + 0x18) = iVar1 + 1U;
        if (*(uint *)(param_3 + 0x1c) < iVar1 + 1U) {
          FUN_1488d2c78(param_3,iVar1);
        }
        lVar2 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar2 = param_3;
        }
        *(longlong **)(lVar2 + (longlong)iVar1 * 8) = plVar3;
        return;
      }
      plVar3 = plVar3 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140458448 FUN_140458448 body=57 status=ok
// SIG undefined FUN_140458448(void)

void FUN_140458448(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba85f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba85f0 = FUN_140002ddd(FUN_1465d0527,uVar1,L"OakCharacterBodySettings");
  }
  return;
}



// FUNCTION 140458482 FUN_140458482 body=614 status=ok
// SIG undefined FUN_140458482(void)

void FUN_140458482(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 8;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)(param_1 + 0x10);
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147ce68e0(param_2,puVar4);
    goto LAB_1404585c6;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x18) << 3,(longlong)*(int *)(param_1 + 0x1c) << 3
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1404585c6;
    local_30 = *(uint *)(param_1 + 0x18);
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      }
      else {
        FUN_14572512c(param_2,&local_30);
      }
    }
    else {
      local_30 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    uVar6 = *puVar4;
    uVar8 = ((longlong)uVar6 >> 0x18) + (longlong)puVar4;
    if ((uVar6 & 1) == 0) {
      uVar8 = uVar6;
    }
    lVar7 = *param_2;
LAB_1404585c0:
    (**(code **)(lVar7 + 0x170))(param_2,uVar8,(longlong)(int)local_30 << 3);
  }
  else {
    if (local_2c == 8) {
      local_30 = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar2;
      }
      if (local_30 < 0x10000000) {
        FUN_1404586ea(puVar4);
        iVar3 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar3 + local_30;
        if ((uint)(*(int *)(param_1 + 0x1c) - iVar3) < local_30) {
          FUN_147ce67be(puVar4);
        }
        uVar8 = *puVar4;
        if ((uVar8 & 1) != 0) {
          uVar8 = (longlong)puVar4 + ((longlong)uVar8 >> 0x18);
        }
        lVar7 = *param_2;
        goto LAB_1404585c0;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_1404585c6:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404586ea FUN_1404586ea body=42 status=ok
// SIG undefined FUN_1404586ea(void)

void FUN_1404586ea(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140458716();
    return;
  }
  return;
}



// FUNCTION 140458716 FUN_140458716 body=341 status=ok
// SIG undefined FUN_140458716(void)

void FUN_140458716(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (param_2 == 0) goto LAB_14045878c;
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar5 = uVar6 & 0xfffffffffffffff0;
        if (uVar5 < 0x7ff1) goto LAB_14045880c;
        goto LAB_1404587de;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_14045877e:
  do {
    uVar5 = 0x7fffffff;
    unaff_EDI = param_2;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
LAB_14045878c:
    param_2 = unaff_EDI;
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5 << 3,4);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar6 = 0;
    FUN_1467ac767();
LAB_14045880c:
    bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14045877e;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_1404587de:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 14045886c FUN_14045886c body=98 status=ok
// SIG undefined FUN_14045886c(void)

undefined8 FUN_14045886c(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar2 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[9];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[10] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x40) == *param_2) {
          FUN_1404588ce();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1404588ce FUN_1404588ce body=182 status=ok
// SIG undefined FUN_1404588ce(void)

void FUN_1404588ce(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 8;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[9];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0x3c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar7 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar2 + (longlong)iVar4 * 0x40 + 0x38);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar2 + lVar3 + 0x38);
  lVar2 = *param_1;
  plVar5 = *(longlong **)(lVar2 + 0x30 + lVar3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*(longlong *)(lVar2 + lVar3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140458984(param_1,param_2,1);
  return;
}



// FUNCTION 140458984 FUN_140458984 body=134 status=ok
// SIG undefined FUN_140458984(void)

void FUN_140458984(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x3c) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[7] * 0x40) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x3c)) {
        uVar4 = (undefined4)param_1[7];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 7) = param_2;
      *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
      plVar5 = (longlong *)param_1[5];
      if ((longlong *)param_1[5] == (longlong *)0x0) {
        plVar5 = param_1 + 3;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140458a4e FUN_140458a4e body=120 status=ok
// SIG undefined FUN_140458a4e(void)

void FUN_140458a4e(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 8) -
          *(int *)(*(longlong *)(param_1 + 0x10) + 0x24 +
                  (ulonglong)((*(byte *)(param_1 + 0x30) & 1) == 0) * 0x10);
  if (iVar1 != 0) {
    FUN_140459344(param_1,0,iVar1);
  }
  if (iVar1 != 0 || param_2 != 0) {
    local_30 = param_1;
    local_28 = param_2;
    FUN_140458ac8(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140458ac8 FUN_140458ac8 body=29 status=ok
// SIG undefined FUN_140458ac8(void)

void FUN_140458ac8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_2 + 1);
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    FUN_1468c9562();
    return;
  }
  FUN_140458cae(lVar2,uVar1,*param_2 + 0x28);
  if (uVar1 < 4) {
    if (((uVar1 == 0) || (*(int *)(lVar2 + 0x48) == 1)) ||
       (*(undefined4 *)(lVar2 + 0x48) = 1, *(longlong *)(lVar2 + 0x40) == 0)) goto LAB_1449b14aa;
    iVar6 = 0;
  }
  else {
    uVar5 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
    if (*(int *)(lVar2 + 0x48) == iVar6) goto LAB_1449b14aa;
    *(int *)(lVar2 + 0x48) = iVar6;
  }
  FUN_1446efa72(lVar2 + 0x40,0,iVar6,4);
LAB_1449b14aa:
  lVar3 = lVar2 + 0x38;
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x40);
  }
  if (0 < *(int *)(lVar2 + 0x48)) {
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + lVar4 * 4) = 0xffffffff;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar2 + 0x48));
  }
  return;
}



// FUNCTION 140458ae6 FUN_140458ae6 body=330 status=ok
// SIG undefined FUN_140458ae6(void)

void FUN_140458ae6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  undefined8 *lpTlsValue;
  bool bVar5;
  
  dwTlsIndex = DAT_14c75eca8;
  if (DAT_14c75eca8 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar5 = DAT_14c75eca8 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar5) {
      DVar4 = DAT_14c75eca8;
      DVar3 = DAT_14c75eca8;
    }
    DAT_14c75eca8 = DVar3;
    UNLOCK();
    if (bVar5) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    DVar4 = GetCurrentThreadId();
    *(DWORD *)(lpTlsValue + 1) = DVar4;
    *lpTlsValue = &PTR_FUN_149e8f028;
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    lpTlsValue[4] = 0;
    lpTlsValue[5] = 0;
    lpTlsValue[6] = 0;
    lpTlsValue[7] = 0;
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if ((0 < *(int *)(lpTlsValue + 3)) || (0 < *(int *)(lpTlsValue + 5))) {
    uVar2 = *param_2;
    *(ulonglong *)(param_1 + 8) = uVar2;
    if (((uVar2 & 1) != 0) && (((uVar2 & 0xfffffffffffffffe) != 0 && (DAT_14c950c29 == '\x01')))) {
      FUN_1456cec3c();
    }
    iVar1 = *(int *)(lpTlsValue + 7);
    *(uint *)(lpTlsValue + 7) = iVar1 + 1U;
    if (*(uint *)((longlong)lpTlsValue + 0x3c) < iVar1 + 1U) {
      FUN_14124d582(lpTlsValue + 6,iVar1);
    }
    uVar2 = *param_2;
    *(ulonglong *)(lpTlsValue[6] + (longlong)iVar1 * 8) = uVar2;
    if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c();
      return;
    }
  }
  return;
}



// FUNCTION 140458c30 FUN_140458c30 body=124 status=ok
// SIG undefined FUN_140458c30(void)

void FUN_140458c30(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  code *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_20 = param_1;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    local_18 = FUN_14281a220;
    FUN_1449b1504();
  }
  else {
    local_18 = FUN_14281a0ee;
    FUN_1468c9cb6(*(undefined8 *)(param_1 + 0x10),param_1 + 0x1c);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140458cae FUN_140458cae body=98 status=ok
// SIG undefined FUN_140458cae(void)

void FUN_140458cae(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140458d10(param_1,param_2,uVar2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar3) {
    *(uint *)(param_1 + 0x2c) = uVar3;
    FUN_140458e4a(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 140458d10 FUN_140458d10 body=313 status=ok
// SIG undefined FUN_140458d10(void)

void FUN_140458d10(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (ulonglong)param_3;
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * uVar5;
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
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140458d82;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_140458d82:
    uVar6 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / uVar5)) {
      uVar6 = uVar3 / uVar5 & 0xffffffff;
    }
  }
  if ((int)uVar6 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar6;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar6,uVar5,param_4);
  }
  return;
}



// FUNCTION 140458e4a FUN_140458e4a body=472 status=ok
// SIG undefined FUN_140458e4a(void)

void FUN_140458e4a(void *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar3 = *(int *)((longlong)param_1 + 0x1c) + 0x1f;
  uVar9 = 4;
  if (0x9f < uVar3) {
    uVar9 = (ulonglong)((uVar3 >> 5) * 4);
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar10 = (uint)(uVar9 + 0xf);
        if (uVar3 < 0x3ffa0) {
          uVar9 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 + 0xf >> 4]];
        }
        else {
          uVar5 = (ulonglong)(uVar10 & 0xfffffff0);
          if (uVar5 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar10 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar9 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140458f73;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar9 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar9 = (ulonglong)DAT_14c841df8;
          }
          uVar9 = -uVar9 & (uVar5 + uVar9) - 1;
        }
      }
      else {
        uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
      }
    }
LAB_140458f73:
    uVar9 = uVar9 >> 2;
    if ((int)uVar9 < (int)(uVar3 >> 5)) {
      uVar9 = 0x7fffffff;
    }
  }
  uVar3 = (uint)uVar9;
  *(uint *)((longlong)param_1 + 0x1c) = uVar3 << 5;
  uVar10 = param_2 + 0x1fU >> 5;
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  if (uVar3 < 5) {
    if (pvVar4 == (void *)0x0) goto LAB_140458ea1;
    memmove(param_1,pvVar4,(ulonglong)(uVar10 * 4));
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x10,0,uVar9 & 0xffffffff,4);
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(ulonglong)(uVar10 * 4));
      goto LAB_140458ea1;
    }
    uVar9 = uVar9 & 0xffffffff;
    uVar7 = uVar10;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,uVar7,uVar9,4);
LAB_140458ea1:
  if (uVar3 < uVar10 || uVar3 - uVar10 == 0) {
    return;
  }
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
    pvVar4 = param_1;
  }
  memset((void *)((longlong)pvVar4 + (ulonglong)uVar10 * 4),0,(ulonglong)(uVar3 - uVar10) << 2);
  return;
}



// FUNCTION 140459022 FUN_140459022 body=603 status=ok
// SIG undefined FUN_140459022(void)

void FUN_140459022(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  void *pvVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  byte local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(param_1 + 0x98);
  lVar9 = (longlong)*(int *)(param_1 + 0x94);
  local_88 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  local_70 = *(undefined4 *)(param_1 + 0x80);
  uStack_6c = *(undefined4 *)(param_1 + 0x84);
  uStack_68 = *(undefined4 *)(param_1 + 0x88);
  uStack_64 = *(undefined4 *)(param_1 + 0x8c);
  local_60 = *(undefined8 *)(param_1 + 0x90);
  uVar11 = param_3[1];
  iVar12 = *(int *)((longlong)param_3 + (ulonglong)((bVar1 & 1) == 0) * 0x10 + 0x24);
  local_78 = param_2;
  local_58 = bVar1;
  FUN_140458a4e(&local_88,(int)uVar11 - iVar12);
  iVar12 = (int)uVar11 - iVar12;
  if (iVar12 != 0) {
    local_98 = param_3 + 2;
    local_90 = 0;
    uVar11 = 0;
    local_a0 = lVar9;
    do {
      if ((bVar1 & 1) == 0) {
        if ((longlong)uVar11 < (longlong)(int)param_3[5]) {
          puVar6 = (ulonglong *)param_3[4];
          if ((ulonglong *)param_3[4] == (ulonglong *)0x0) {
            puVar6 = local_98;
          }
LAB_140459119:
          if ((*(uint *)((longlong)puVar6 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f)
              & 1) != 0) {
            local_50 = &local_88;
            iVar5 = FUN_140007ec8(&local_88,&local_50);
            if ((bVar1 & 1) == 0) {
              uVar13 = *param_3;
            }
            else {
              uVar4 = *param_3;
              uVar13 = ((longlong)uVar4 >> 0x18) + (longlong)param_3;
              if ((uVar4 & 1) == 0) {
                uVar13 = uVar4;
              }
            }
            if ((local_58 & 1) == 0) {
              uVar7 = *local_78;
            }
            else {
              uVar4 = *local_78;
              uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)local_78;
              if ((uVar4 & 1) == 0) {
                uVar7 = uVar4;
              }
            }
            lVar14 = uVar13 + local_90;
            lVar9 = (longlong)iVar5 * (longlong)local_60._4_4_ + uVar7;
            if (lVar14 != lVar9) {
              plVar2 = *(longlong **)(param_1 + 0x70);
              pvVar10 = (void *)(lVar14 + *(int *)((longlong)plVar2 + 0x44));
              pvVar8 = (void *)(*(int *)((longlong)plVar2 + 0x44) + lVar9);
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar8,pvVar10,(int)plVar2[6]);
              }
              else {
                memcpy(pvVar8,pvVar10,
                       (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
              }
              plVar2 = *(longlong **)(param_1 + 0x78);
              pvVar8 = (void *)(lVar14 + *(int *)((longlong)plVar2 + 0x44));
              pvVar10 = (void *)(lVar9 + *(int *)((longlong)plVar2 + 0x44));
              if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar10,pvVar8,(int)plVar2[6]);
              }
              else {
                memcpy(pvVar10,pvVar8,
                       (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
            iVar12 = iVar12 + -1;
            lVar9 = local_a0;
          }
        }
      }
      else {
        lVar9 = local_a0;
        if ((longlong)uVar11 < (longlong)(int)param_3[3]) {
          puVar3 = (ulonglong *)*local_98;
          puVar6 = (ulonglong *)(((longlong)puVar3 >> 0x18) + (longlong)local_98);
          if (((ulonglong)puVar3 & 1) == 0) {
            puVar6 = puVar3;
          }
          goto LAB_140459119;
        }
      }
      uVar11 = uVar11 + 1;
      local_90 = local_90 + lVar9;
    } while (iVar12 != 0);
    FUN_140458c30(&local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140459288 FUN_140459288 body=188 status=ok
// SIG undefined FUN_140459288(void)

void FUN_140459288(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (0 < (int)param_4) {
    lVar7 = 0;
    do {
      *(undefined8 *)(param_2 + lVar7) = *(undefined8 *)(param_3 + lVar7);
      puVar1 = (undefined4 *)(param_3 + 8 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 0x20 + lVar7);
        _Src = *(void **)(param_3 + 0x18 + lVar7);
        *(int *)(param_2 + 0x20 + lVar7) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x24 + lVar7) == 0) {
          *(undefined4 *)(param_2 + 0x24 + lVar7) = 0;
        }
        else {
          FUN_1446dd670(param_2 + 0x18 + lVar7,iVar3);
          if (iVar3 != 0) {
            memcpy(*(void **)(param_2 + 0x18 + lVar7),_Src,(longlong)iVar3 * 2);
          }
        }
      }
      lVar7 = lVar7 + 0x28;
    } while ((ulonglong)param_4 * 0x28 != lVar7);
  }
  return;
}



// FUNCTION 140459344 FUN_140459344 body=566 status=ok
// SIG undefined FUN_140459344(void)

void FUN_140459344(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (param_3 != 0) {
    uVar10 = (ulonglong)param_2;
    uVar6 = *(ulonglong *)(param_1[1] + 0x38) & 0x1040000000;
    uVar5 = *(ulonglong *)(*param_1 + 0x38) & 0x1040000000;
    if ((uVar5 == 0) || (uVar6 == 0)) {
      uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
      puVar7 = (ulonglong *)param_1[2];
      if ((*(byte *)(param_1 + 6) & 1) == 0) {
        uVar8 = *puVar7;
      }
      else {
        uVar4 = *puVar7;
        uVar8 = ((longlong)uVar4 >> 0x18) + (longlong)puVar7;
        if ((uVar4 & 1) == 0) {
          uVar8 = uVar4;
        }
      }
      lVar11 = (longlong)(int)param_2 * (longlong)*(int *)((longlong)param_1 + 0x2c) + uVar8;
      if (uVar5 == 0) {
        if (uVar6 == 0) {
          do {
            lVar1 = param_1[2];
            puVar7 = (ulonglong *)(lVar1 + 0x10);
            uVar9 = (uint)uVar10;
            if ((*(byte *)(param_1 + 6) & 1) == 0) {
              if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar1 + 0x28))) {
                if (*(ulonglong **)(lVar1 + 0x20) != (ulonglong *)0x0) {
                  puVar7 = *(ulonglong **)(lVar1 + 0x20);
                }
LAB_14045950a:
                if ((*(uint *)((longlong)puVar7 + (uVar10 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
                  plVar2 = (longlong *)*param_1;
                  if ((plVar2[7] & 0x1000000000U) == 0) {
                    (**(code **)(*plVar2 + 0x148))
                              (plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar11);
                  }
                  plVar2 = (longlong *)param_1[1];
                  if ((plVar2[7] & 0x1000000000U) == 0) {
                    (**(code **)(*plVar2 + 0x148))
                              (plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar11);
                  }
                  param_3 = param_3 + -1;
                }
              }
            }
            else if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar1 + 0x18))) {
              puVar3 = (ulonglong *)*puVar7;
              puVar7 = (ulonglong *)(((longlong)puVar3 >> 0x18) + (longlong)puVar7);
              if (((ulonglong)puVar3 & 1) == 0) {
                puVar7 = puVar3;
              }
              goto LAB_14045950a;
            }
            lVar11 = lVar11 + uVar12;
            uVar10 = (ulonglong)(uVar9 + 1);
          } while (param_3 != 0);
        }
        else {
          do {
            lVar1 = param_1[2];
            puVar7 = (ulonglong *)(lVar1 + 0x10);
            uVar9 = (uint)uVar10;
            if ((*(byte *)(param_1 + 6) & 1) == 0) {
              if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar1 + 0x28))) {
                if (*(ulonglong **)(lVar1 + 0x20) != (ulonglong *)0x0) {
                  puVar7 = *(ulonglong **)(lVar1 + 0x20);
                }
LAB_14045944c:
                if ((*(uint *)((longlong)puVar7 + (uVar10 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
                  plVar2 = (longlong *)*param_1;
                  if ((plVar2[7] & 0x1000000000U) == 0) {
                    (**(code **)(*plVar2 + 0x148))
                              (plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar11);
                  }
                  param_3 = param_3 + -1;
                }
              }
            }
            else if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar1 + 0x18))) {
              puVar3 = (ulonglong *)*puVar7;
              puVar7 = (ulonglong *)(((longlong)puVar3 >> 0x18) + (longlong)puVar7);
              if (((ulonglong)puVar3 & 1) == 0) {
                puVar7 = puVar3;
              }
              goto LAB_14045944c;
            }
            lVar11 = lVar11 + uVar12;
            uVar10 = (ulonglong)(uVar9 + 1);
          } while (param_3 != 0);
        }
      }
      else {
        do {
          lVar1 = param_1[2];
          puVar7 = (ulonglong *)(lVar1 + 0x10);
          uVar9 = (uint)uVar10;
          if ((*(byte *)(param_1 + 6) & 1) == 0) {
            if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar1 + 0x28))) {
              if (*(ulonglong **)(lVar1 + 0x20) != (ulonglong *)0x0) {
                puVar7 = *(ulonglong **)(lVar1 + 0x20);
              }
LAB_1404593e7:
              if ((*(uint *)((longlong)puVar7 + (uVar10 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0) {
                plVar2 = (longlong *)param_1[1];
                if ((plVar2[7] & 0x1000000000U) == 0) {
                  (**(code **)(*plVar2 + 0x148))(plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar11);
                }
                param_3 = param_3 + -1;
              }
            }
          }
          else if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(lVar1 + 0x18))) {
            puVar3 = (ulonglong *)*puVar7;
            puVar7 = (ulonglong *)(((longlong)puVar3 >> 0x18) + (longlong)puVar7);
            if (((ulonglong)puVar3 & 1) == 0) {
              puVar7 = puVar3;
            }
            goto LAB_1404593e7;
          }
          lVar11 = lVar11 + uVar12;
          uVar10 = (ulonglong)(uVar9 + 1);
        } while (param_3 != 0);
      }
    }
  }
  return;
}



// FUNCTION 140459624 FUN_140459624 body=207 status=ok
// SIG undefined FUN_140459624(void)

void FUN_140459624(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_1405f1eac();
  FUN_140c1abcc(&DAT_14caf6fc8,param_1);
  if (*(longlong *)(param_1 + 0x13f8) != 0) {
    FUN_1409b534c(param_1 + 0x1ef8,param_1 + 0x1120);
  }
  FUN_1405f85e0(param_1 + 0x12f0);
  FUN_1401b3e2a(param_1 + 0x1488);
  FUN_14045a89e(param_1 + 0x35e0,param_1);
  if ((((*(longlong *)(param_1 + 0x13f8) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x13f8) + 0x1bb) == '\x01')) && (param_1 != 0)) &&
     (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar1 = FUN_140757e32();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_14045a684(uVar1,1);
    }
  }
  FUN_1404596f4(param_1);
  FUN_140c7cbb8(param_1 + 0x1508,param_1);
  FUN_14045978a(param_1);
  return;
}



// FUNCTION 1404596f4 FUN_1404596f4 body=148 status=ok
// SIG undefined FUN_1404596f4(void)

void FUN_1404596f4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x13f8);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10)) {
    local_20 = *(undefined4 *)(lVar1 + 0x534);
    local_28 = *(undefined8 *)(lVar1 + 0x52c);
    FUN_1409b5530(param_1 + 0x31e0,param_1 + 0x12f0,&local_28,*(undefined1 *)(lVar1 + 0x539));
    FUN_14045982b(param_1 + 0x10a0,param_1 + 0x31e0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045978a FUN_14045978a body=161 status=ok
// SIG undefined FUN_14045978a(void)

void FUN_14045978a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  
  if (((param_1 != 0) && (DAT_14cadbb28 != 0)) && (*(int *)(DAT_14cadbb28 + 0xc) != 0)) {
    puVar5 = (uint *)(DAT_14cadbb28 + 8);
    uVar1 = *puVar5;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar4 != 0) &&
          ((*(int *)(lVar4 + 0x10) == *(int *)(DAT_14cadbb28 + 0xc) &&
           ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) && (DAT_14cadba60 == '\x01')) {
        uVar3 = FUN_1447210f0(param_1);
        cVar2 = FUN_1447ffd82(puVar5,uVar3);
        if (cVar2 != '\0') {
          FUN_14045b29a(DAT_14cadbb28 + 0x10,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14045982b FUN_14045982b body=357 status=ok
// SIG undefined FUN_14045982b(void)

void FUN_14045982b(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_78 [47];
  char local_49;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x20))();
  if (lVar3 != 0) {
    local_30 = 0;
    local_28 = 0;
    local_49 = '\0';
    cVar2 = FUN_140459992(param_2,&DAT_14cb767c8);
    if (cVar2 != '\0') {
      cVar2 = FUN_140613580(local_48,&local_49);
      if (cVar2 != '\0') {
        if (local_49 == '\x01') {
          FUN_1400bc96c(lVar3 + 0x90,&DAT_14cb76718);
        }
        else {
          FUN_1400bc8c2(lVar3 + 0x90,&DAT_14cb76718);
        }
      }
    }
    cVar2 = FUN_140459992(param_2,&DAT_14cb767e0,local_48);
    if (cVar2 != '\0') {
      cVar2 = FUN_140613580(local_48,&local_49);
      if (cVar2 != '\0') {
        if (local_49 == '\x01') {
          FUN_1400bc96c(lVar3 + 0xb8,&DAT_14cb76720);
        }
        else {
          FUN_1400bc8c2(lVar3 + 0xb8,&DAT_14cb76720);
        }
      }
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_48;
      if (0x18 < local_30) {
        pppuVar4 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140459992 FUN_140459992 body=684 status=ok
// SIG undefined FUN_140459992(void)

bool FUN_140459992(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_54 = 0;
  local_4c = 0;
  cVar1 = FUN_140459d0c();
  if (cVar1 == '\0') {
    local_30 = 0;
    local_28 = 0;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_3 + 4) * 0x120)
                       );
    if (pcVar3 != (code *)0x0) {
      plVar4 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        plVar4 = (longlong *)*param_3;
      }
      (*pcVar3)(plVar4);
    }
    if (0x18 < *(ushort *)(param_3 + 3)) {
      FUN_1400020a8(*param_3);
    }
    *(undefined2 *)(param_3 + 3) = 0;
    pcVar3 = DAT_14c9a85b8;
    if ((DAT_14c9a85b8 == (code *)0x0) && (pcVar3 = DAT_14c9a85b0, DAT_14c9a85b0 == (code *)0x0)) {
      memcpy(param_3,local_48,(longlong)DAT_14c9a8510);
    }
    else {
      (*pcVar3)(param_3,local_48);
    }
    *(byte *)(param_3 + 4) = local_28;
    local_28 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar5 = (undefined8 ****)local_48[0];
      if (local_30 < 0x19) {
        ppppuVar5 = local_48;
      }
      (*DAT_14c9a85d0)(ppppuVar5);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
    bVar6 = false;
  }
  else {
    FUN_140459c40(local_58,local_48);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_3 + 4) * 0x120)
                       );
    if (pcVar3 != (code *)0x0) {
      plVar4 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        plVar4 = (longlong *)*param_3;
      }
      (*pcVar3)(plVar4);
    }
    if (0x18 < *(ushort *)(param_3 + 3)) {
      FUN_1400020a8(*param_3);
    }
    *(ushort *)(param_3 + 3) = local_30;
    if (local_30 < 0x19) {
      uVar2 = (ulonglong)((uint)local_28 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar2) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar2) == (code *)0x0) {
          memcpy(param_3,local_48,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar2))(param_3,local_48);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar2))(param_3,local_48);
      }
    }
    else {
      *param_3 = (longlong)local_48[0];
      local_48[0] = (undefined8 ****)0x0;
      local_30 = 0;
    }
    *(byte *)(param_3 + 4) = local_28;
    local_28 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar5 = local_48;
      if (0x18 < local_30) {
        ppppuVar5 = (undefined8 ****)local_48[0];
      }
      (*DAT_14c9a85d0)(ppppuVar5);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
    bVar6 = (char)param_3[4] != '\0';
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 140459c40 FUN_140459c40 body=204 status=ok
// SIG undefined FUN_140459c40(void)

uint * FUN_140459c40(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  cVar1 = *param_1;
  if (cVar1 == '\x03') {
    uVar4 = *(undefined8 *)(param_1 + 4);
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(param_2), 0x18 < (ushort)param_2[6])) {
      FUN_1400020a8(*(undefined8 *)param_2);
    }
    *(undefined2 *)(param_2 + 6) = 8;
    *(undefined8 *)param_2 = uVar4;
    uVar5 = 0x12;
  }
  else if (cVar1 == '\x01') {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(param_2), 0x18 < (ushort)param_2[6])) {
      FUN_1400020a8(*(undefined8 *)param_2);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = (uint)(iVar3 != 0);
    uVar5 = 1;
  }
  else {
    if (cVar1 != '\x02') {
      return param_2;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
    if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(param_2), 0x18 < (ushort)param_2[6])) {
      FUN_1400020a8(*(undefined8 *)param_2);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar2;
    uVar5 = 2;
  }
  *(undefined1 *)(param_2 + 8) = uVar5;
  return param_2;
}



// FUNCTION 140459d0c FUN_140459d0c body=540 status=ok
// SIG undefined FUN_140459d0c(void)

ulonglong FUN_140459d0c(longlong param_1,undefined8 *param_2,char *param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  int local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined8 local_80;
  int local_78;
  char local_70 [16];
  int local_60;
  int local_5c;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_3[0] = '\0';
  param_3[1] = '\0';
  param_3[2] = '\0';
  param_3[3] = '\0';
  param_3[4] = '\0';
  param_3[5] = '\0';
  param_3[6] = '\0';
  param_3[7] = '\0';
  param_3[8] = '\0';
  param_3[9] = '\0';
  param_3[10] = '\0';
  param_3[0xb] = '\0';
  param_3[0xc] = '\0';
  param_3[0xd] = '\0';
  param_3[0xe] = '\0';
  param_3[0xf] = '\0';
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x78);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140459e8e;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x7c))) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar5 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*(longlong *)*plVar5 + 0x180))();
      if (lVar2 != 0) {
        plVar5 = (longlong *)FUN_140502abf(lVar2);
        if (plVar5 != (longlong *)0x0) {
          FUN_1406f1bc8(param_1,local_70);
          if (local_70[0] == '\x01') {
            piVar3 = &DAT_14c948620;
            piVar4 = (int *)&DAT_14c948618;
            if (((local_60 != 0) && (1 < local_5c)) && (local_60 != DAT_14c948000)) {
              piVar4 = (int *)(local_48 + 0xc);
              piVar3 = (int *)(local_48 + 0x14);
            }
            if ((*piVar4 == (int)DAT_14cb7bb98) && (*piVar3 == DAT_14cb7bba0)) {
              local_80 = *(undefined8 *)(lVar2 + 0x18);
              FUN_1401533ba(&local_8c,&local_80,1);
              if (local_8c == 0) {
                local_78 = DAT_14cb7bba0;
                local_80 = CONCAT44(DAT_14cb7bb98._4_4_,(int)DAT_14cb7bb98);
              }
              else {
                local_78 = local_84;
                local_80 = CONCAT44(uStack_88,local_8c);
              }
              FUN_144928d62(&local_60,1,&local_80);
            }
          }
          local_90 = *(undefined4 *)(param_2 + 1);
          local_98 = *param_2;
          FUN_144928d62(&local_60,5);
          local_a8 = 0;
          (**(code **)(*plVar5 + 0xa0))(plVar5,local_70,param_3,0);
          uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),*param_3 != '\0');
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          goto LAB_140459e8e;
        }
      }
    }
  }
  uVar6 = 0;
LAB_140459e8e:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140459f30 FUN_140459f30 body=1735 status=ok
// SIG undefined FUN_140459f30(void)

undefined8
FUN_140459f30(longlong param_1,char *param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  uint uVar16;
  int *piVar17;
  longlong *plVar18;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined2 *local_b0;
  uint local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined1 local_8c [12];
  undefined2 *local_80;
  int local_78;
  undefined1 local_6c [12];
  undefined2 *local_60;
  uint local_58;
  undefined2 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_140114204(param_2);
  if (cVar2 == '\0') {
    uVar9 = FUN_144a82cde();
    FUN_140b126e4(param_2,&local_50);
    puVar7 = local_50;
    if (local_48 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_146816218(uVar9,3,L"ERROR: ReadValueInternal() called with invalid address: %ls",puVar7);
LAB_14045a4da:
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((((*(int *)(param_2 + 0x10) == 0) || (iVar3 = *(int *)(param_2 + 0x14), iVar3 == 0)) ||
        (*(int *)(param_2 + 0x10) == DAT_14c948000)) || ((iVar3 == 1 || (iVar3 < 2)))) {
      local_58 = DAT_14c948620;
      local_60 = DAT_14c948618;
    }
    else {
      local_58 = *(uint *)(*(longlong *)(param_2 + 0x28) + 0x14);
      local_60 = *(undefined2 **)(*(longlong *)(param_2 + 0x28) + 0xc);
    }
    piVar1 = (int *)(param_2 + 0x10);
    FUN_144976b9c(param_3,0);
    if (*param_2 == '\x01') {
      iVar3 = *piVar1;
      piVar17 = (int *)&DAT_14c948618;
      piVar11 = (int *)&DAT_14c948620;
      if (((iVar3 != 0) && (1 < *(int *)(param_2 + 0x14))) && (iVar3 != DAT_14c948000)) {
        piVar17 = (int *)(*(longlong *)(param_2 + 0x28) + 0xc);
        piVar11 = (int *)(*(longlong *)(param_2 + 0x28) + 0x14);
      }
      if ((*piVar17 == (int)DAT_14cb7bb98) && (*piVar11 == DAT_14cb7bba0)) {
        uVar9 = FUN_144a82cde();
        FUN_144a659ac(piVar1,local_6c,5);
        FUN_1408226d0(local_6c,&local_50,1);
        puVar7 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar7 = local_50;
        }
        FUN_144a659ac(piVar1,local_8c,4);
        FUN_1408226d0(local_8c,&local_80,1);
        local_c8 = &DAT_149dfb77a;
        if (local_78 != 0) {
          local_c8 = local_80;
        }
        FUN_1408226d0(&local_60,&local_a0,1);
        puVar15 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar15 = local_a0;
        }
        local_c0 = puVar7;
        FUN_146816218(uVar9,3,
                      L"ERROR: ReadValueInternal() called with map wildcard; returning None: registry.%s.%s.%s"
                      ,puVar15);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14045a4da;
      }
      if ((int)local_60 != 0) {
        piVar17 = (int *)&DAT_14c948618;
        piVar11 = (int *)&DAT_14c948620;
        if (((iVar3 != 0) && (1 < *(int *)(param_2 + 0x14))) && (iVar3 != DAT_14c948000)) {
          piVar17 = (int *)(*(longlong *)(param_2 + 0x28) + 0xc);
          piVar11 = (int *)(*(longlong *)(param_2 + 0x28) + 0x14);
        }
        if ((*piVar17 != (int)DAT_14cb7bb98) || (*piVar11 != DAT_14cb7bba0)) goto LAB_14045a064;
        goto LAB_14045a080;
      }
    }
    else if ((int)local_60 != 0) {
LAB_14045a064:
      if (((int)local_60 == *(int *)(param_1 + 0x2c)) && (local_58 == *(uint *)(param_1 + 0x34))) {
        iVar3 = *piVar1;
LAB_14045a080:
        if (((iVar3 == 0) || (iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0)) ||
           (iVar3 == DAT_14c948000)) {
LAB_14045a402:
          local_48 = DAT_14c948620;
          local_50 = DAT_14c948618;
        }
        else {
          pcVar6 = param_2 + 0x18;
          if (0 < *(int *)(param_2 + 0x34)) {
            pcVar6 = *(char **)(param_2 + 0x28);
          }
          if (1 < iVar5) {
            pcVar6 = *(char **)(param_2 + 0x28);
          }
          if ((iVar5 == 1) || (iVar5 < 3)) goto LAB_14045a402;
          local_48 = *(uint *)(pcVar6 + 0x20);
          local_50 = *(undefined2 **)(pcVar6 + 0x18);
        }
        uVar14 = (ulonglong)local_50 & 0xffffffff;
        if (local_48 != 0) {
          uVar4 = FUN_144a78877(uVar14,local_48);
          uVar14 = (ulonglong)uVar4;
        }
        iVar3 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar14,&local_50);
        if (iVar3 != -1) {
          lVar12 = *(longlong *)(param_1 + 0x78);
          if ((lVar12 + (longlong)iVar3 * 0x70 != 0) &&
             (plVar18 = (longlong *)(lVar12 + (longlong)iVar3 * 0x70 + 0x10),
             plVar18 != (longlong *)0x0)) {
            if ((*piVar1 == 0) ||
               ((iVar3 = *(int *)(param_2 + 0x14), iVar3 == 0 || (*piVar1 == DAT_14c948000)))) {
LAB_14045a41b:
              local_48 = DAT_14c948620;
              local_50 = DAT_14c948618;
            }
            else {
              pcVar6 = param_2 + 0x18;
              if (0 < *(int *)(param_2 + 0x34)) {
                pcVar6 = *(char **)(param_2 + 0x28);
              }
              if (1 < iVar3) {
                pcVar6 = *(char **)(param_2 + 0x28);
              }
              if ((iVar3 == 1) || (iVar3 < 4)) goto LAB_14045a41b;
              local_48 = *(uint *)(pcVar6 + 0x2c);
              local_50 = *(undefined2 **)(pcVar6 + 0x24);
            }
            uVar14 = (ulonglong)local_50 & 0xffffffff;
            if (local_48 != 0) {
              uVar4 = FUN_144a78877(uVar14,local_48);
              uVar14 = (ulonglong)uVar4;
            }
            iVar3 = FUN_144a24328(plVar18,uVar14,&local_50);
            if (iVar3 != -1) {
              if ((*plVar18 + (longlong)iVar3 * 0x68 != 0) &&
                 (plVar18 = (longlong *)(*plVar18 + (longlong)iVar3 * 0x68 + 0x10),
                 plVar18 != (longlong *)0x0)) {
                iVar3 = *piVar1;
                if ((iVar3 == 0) ||
                   ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (iVar3 == DAT_14c948000)))) {
LAB_14045a434:
                  local_48 = DAT_14c948620;
                  puVar7 = DAT_14c948618;
                }
                else {
                  pcVar6 = param_2 + 0x18;
                  if (0 < *(int *)(param_2 + 0x34)) {
                    pcVar6 = *(char **)(param_2 + 0x28);
                  }
                  if (1 < iVar5) {
                    pcVar6 = *(char **)(param_2 + 0x28);
                  }
                  if ((iVar5 == 1) || (iVar5 < 5)) goto LAB_14045a434;
                  local_48 = *(uint *)(pcVar6 + 0x38);
                  puVar7 = *(undefined2 **)(pcVar6 + 0x30);
                }
                local_50._0_4_ = (uint)puVar7;
                if (local_48 != 0) {
                  uVar4 = local_48 >> 0xd ^ (uint)local_50 - local_48;
                  uVar13 = uVar4 << 8 ^ (-0x61c88647 - local_48) - uVar4;
                  uVar16 = uVar13 >> 0xd ^ (local_48 - uVar4) - uVar13;
                  uVar10 = uVar16 >> 0xc ^ (uVar4 - uVar13) - uVar16;
                  uVar4 = uVar10 << 0x10 ^ (uVar13 - uVar16) - uVar10;
                  uVar13 = uVar4 >> 5 ^ (uVar16 - uVar10) - uVar4;
                  uVar10 = uVar13 >> 3 ^ (uVar10 - uVar4) - uVar13;
                  uVar4 = uVar10 << 10 ^ (uVar4 - uVar13) - uVar10;
                  local_50._0_4_ = uVar4 >> 0xf ^ uVar13 - (uVar10 + uVar4);
                }
                uVar4 = (uint)local_50;
                local_50 = puVar7;
                iVar5 = FUN_140727b76(plVar18,uVar4,&local_50);
                if (iVar5 != -1) {
                  uVar9 = 0;
                  if ((*plVar18 + (longlong)iVar5 * 0xa8 == 0) ||
                     (lVar12 = *plVar18 + (longlong)iVar5 * 0xa8 + 0x10, lVar12 == 0))
                  goto LAB_14045a393;
                  if ((iVar3 == 0) ||
                     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (iVar3 == DAT_14c948000)))) {
LAB_14045a44d:
                    local_a8 = DAT_14c948620;
                    local_b0 = DAT_14c948618;
                  }
                  else {
                    pcVar6 = param_2 + 0x18;
                    if (0 < *(int *)(param_2 + 0x34)) {
                      pcVar6 = *(char **)(param_2 + 0x28);
                    }
                    if (1 < iVar5) {
                      pcVar6 = *(char **)(param_2 + 0x28);
                    }
                    if ((iVar5 == 1) || (iVar5 < 6)) goto LAB_14045a44d;
                    local_a8 = *(uint *)(pcVar6 + 0x44);
                    local_b0 = *(undefined2 **)(pcVar6 + 0x3c);
                  }
                  puVar8 = (undefined4 *)FUN_14045a5f8(lVar12,&local_b0,param_1 + 0x40);
                  if (puVar8 != (undefined4 *)0x0) {
                    if (param_4 != (undefined4 *)0x0) {
                      *param_4 = *puVar8;
                    }
                    if (param_5 != (undefined4 *)0x0) {
                      *param_5 = puVar8[1];
                    }
                    FUN_144976b9c(param_3,*(undefined8 *)(puVar8 + 0xe));
                    uVar9 = 1;
                    goto LAB_14045a393;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_14045a393:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14045a5f8 FUN_14045a5f8 body=140 status=ok
// SIG undefined FUN_14045a5f8(void)

longlong FUN_14045a5f8(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = *param_2;
  if ((iVar1 != 0) && ((iVar1 != DAT_14cb7bf10 || (param_2[2] != DAT_14cb7bf18)))) {
    iVar2 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar2 != 0) {
      lVar3 = *param_3;
      lVar4 = (longlong)iVar2 * 4;
      lVar7 = 0;
      while ((lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4) * 0x68,
             *(int *)(lVar3 + 0x2c + lVar5) != iVar1 ||
             (*(int *)(lVar3 + 0x34 + lVar5) != param_2[2]))) {
        lVar7 = lVar7 + 1;
        lVar4 = lVar4 + -4;
        if (lVar4 == 0) {
          return 0;
        }
      }
      uVar6 = (uint)lVar7;
      if ((int)uVar6 < iVar2 && -1 < (int)uVar6) {
        return lVar3 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar6 & 0x7fffffff) * 4)
                       * 0x68;
      }
    }
  }
  return 0;
}



// FUNCTION 14045a684 FUN_14045a684 body=414 status=ok
// SIG undefined FUN_14045a684(void)

void FUN_14045a684(uint *param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [192];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((char)param_1[0xe] == param_2) goto LAB_14045a7e7;
  *(char *)(param_1 + 0xe) = param_2;
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 == 0 ||
          (*(uint *)(lVar6 + 0x10) != param_1[1])))) || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0))
  goto LAB_14045a7e7;
  if (param_2 == '\0') {
    FUN_1409998f6(param_1 + 2,0);
  }
  else {
    FUN_14045a824(param_1 + 2,&DAT_14cae3bf0,param_1);
  }
  local_30 = (undefined1 *)0x0;
  local_28 = 0x1800000000;
  if (param_1[1] == 0) {
LAB_14045a80c:
    uVar2 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
      goto LAB_14045a80c;
      uVar2 = *puVar3;
    }
  }
  FUN_14024dbd6(uVar2,local_f0,0);
  puVar5 = local_30;
  if (local_30 == (undefined1 *)0x0) {
    puVar5 = local_f0;
  }
  lVar6 = (longlong)(int)local_28;
  if (lVar6 != 0) {
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(puVar5 + lVar4) + 0x3f8))();
      lVar4 = lVar4 + 8;
    } while (lVar6 * 8 != lVar4);
  }
  if (local_30 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14045a7e7:
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045a824 FUN_14045a824 body=121 status=ok
// SIG undefined FUN_14045a824(void)

void FUN_14045a824(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1[2] == 0) {
    param_1[3] = param_2;
    param_1[2] = param_3;
    lVar3 = *(longlong *)(param_2 + 0x30);
    while( true ) {
      *param_1 = lVar3;
      LOCK();
      lVar2 = *(longlong *)(param_1[3] + 0x30);
      bVar4 = lVar3 == lVar2;
      if (bVar4) {
        *(longlong *)(param_1[3] + 0x30) = (longlong)param_1;
        lVar2 = lVar3;
      }
      UNLOCK();
      if (bVar4) break;
      *param_1 = lVar2;
      lVar3 = *(longlong *)(param_1[3] + 0x30);
    }
    if (*param_1 != 0) {
      *(longlong **)(*param_1 + 8) = param_1;
    }
    plVar1 = (longlong *)param_1[3];
    if ((longlong)(int)plVar1[1] != 0) {
      lVar3 = 0;
      do {
        if ((*(int *)(*plVar1 + 8 + lVar3) != 0) && (*(longlong *)(*plVar1 + lVar3) != 0)) {
          FUN_1409999d8(plVar1,param_1[2]);
          return;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)(int)plVar1[1] * 0x10 != lVar3);
    }
  }
  return;
}



// FUNCTION 14045a89e FUN_14045a89e body=577 status=ok
// SIG undefined FUN_14045a89e(void)

void FUN_14045a89e(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
    param_1[0] = 0;
    param_1[1] = 0;
LAB_14045aa82:
    lVar4 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar2 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar7;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar7;
      }
    }
    param_1[1] = uVar2;
    uVar3 = FUN_14045aae0();
    lVar8 = (**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (lVar8 == 0) goto LAB_14045aa82;
    uVar3 = FUN_14045aae0();
    lVar4 = FUN_144718840(lVar8,uVar3);
    if (lVar8 == lVar4) goto LAB_14045aa82;
  }
  FUN_14045adb4(&local_38,lVar4);
  param_1[2] = local_38;
  param_1[3] = uStack_34;
  param_1[4] = uStack_30;
  param_1[5] = uStack_2c;
  uVar2 = param_1[1];
  if (((((uVar2 == 0) || (uVar7 = *param_1, (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != uVar2)))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
      (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)))) {
LAB_14045aa89:
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_14045aae0();
    lVar8 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar3);
    if (lVar8 == 0) goto LAB_14045aa89;
    uVar3 = FUN_14045aae0();
    lVar4 = FUN_144718840(lVar8,uVar3);
    if (lVar8 == lVar4) goto LAB_14045aa89;
  }
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar7 = *param_1;
    uVar3 = 0;
    if (((int)uVar7 < 0) || (DAT_14c9647dc <= (int)uVar7)) goto LAB_14045aa47;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar7 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar5 + 2) == uVar2 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar5;
      }
      else {
        uVar3 = 0;
      }
      uVar3 = FUN_1447210f0(uVar3);
      goto LAB_14045aa47;
    }
  }
  uVar3 = 0;
LAB_14045aa47:
  FUN_14045abc6(uVar3,lVar4,1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045aae0 FUN_14045aae0 body=228 status=ok
// SIG undefined FUN_14045aae0(void)

longlong FUN_14045aae0(void)

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
  if (DAT_14cb61330 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486d8e53;
    local_40 = FUN_1464f25d4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMovingPlatformAdherent",&DAT_14cb61330,&DAT_1486d8e52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61330;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045abc6 FUN_14045abc6 body=180 status=ok
// SIG undefined FUN_14045abc6(void)

void FUN_14045abc6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14045ac7c(&local_30,param_1);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_28;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_14045ae80(local_30,param_2,param_3);
      }
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045ac7c FUN_14045ac7c body=310 status=ok
// SIG undefined FUN_14045ac7c(void)

longlong * FUN_14045ac7c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb89530;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045adb4 FUN_14045adb4 body=204 status=ok
// SIG undefined FUN_14045adb4(void)

uint * FUN_14045adb4(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 14045ae80 FUN_14045ae80 body=1048 status=ok
// SIG undefined FUN_14045ae80(void)

void FUN_14045ae80(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  code *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    plVar9 = (longlong *)(param_1 + 0x58);
    lVar15 = *(longlong *)(param_1 + 0x58);
    iVar10 = *(int *)(param_1 + 0x60);
    lVar12 = (longlong)iVar10;
    if (lVar12 != 0) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar15 + 8 + lVar6);
        if (((lVar4 == 0) || (iVar3 = *(int *)(lVar15 + 4 + lVar6), iVar3 == 0)) ||
           (uVar8 = *(uint *)(lVar15 + lVar6), (int)uVar8 < 0)) {
LAB_14045af3c:
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != iVar3)) goto LAB_14045af3c;
            lVar13 = lVar4;
            if ((*(uint *)(lVar14 + 8) & 0x10200000) != 0) {
              lVar13 = 0;
            }
          }
        }
        if (lVar13 == param_2) {
          if (param_3 != '\0') goto LAB_14045af60;
          uVar8 = (int)(lVar6 >> 4) * -0x55555555;
          if ((int)uVar8 < iVar10 && -1 < (int)uVar8) {
            if (~uVar8 + iVar10 != 0) {
              lVar12 = (ulonglong)(uVar8 & 0x7fffffff) * 0x30;
              memmove((void *)(lVar15 + lVar12),(void *)(lVar12 + lVar15 + 0x30),
                      (longlong)(int)(~uVar8 + iVar10) * 0x30);
              iVar10 = *(int *)(param_1 + 0x60);
            }
            *(int *)(param_1 + 0x60) = iVar10 + -1;
            FUN_1418a2cc8(plVar9);
          }
          goto LAB_14045b01a;
        }
        lVar6 = lVar6 + 0x30;
      } while (lVar12 * 0x30 != lVar6);
    }
    if (param_3 != '\0') {
LAB_14045af60:
      *(uint *)(param_1 + 0x60) = iVar10 + 1U;
      if (*(uint *)(param_1 + 100) < iVar10 + 1U) {
        FUN_14655a9e6(plVar9,iVar10);
        lVar15 = *plVar9;
      }
      lVar12 = lVar12 * 0x30;
      puVar1 = (uint *)(lVar15 + lVar12);
      FUN_143e064a1(puVar1);
      FUN_14045adb4(&local_50,param_2);
      puVar2 = (undefined4 *)(lVar15 + lVar12);
      *puVar2 = (undefined4)local_50;
      puVar2[1] = local_50._4_4_;
      puVar2[2] = uStack_48;
      puVar2[3] = uStack_44;
      iVar10 = *(int *)(lVar15 + 4 + lVar12);
      if (((iVar10 != 0) && (uVar8 = *puVar1, -1 < (int)uVar8)) &&
         (((int)uVar8 < DAT_14c9647dc &&
          ((((plVar9 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar10)) &&
            ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) && (lVar15 = *plVar9, lVar15 != 0)))))) {
        if (DAT_14cac9ca8 == 0) {
          local_50 = FUN_141030f22;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_78 = &LAB_1478c0a72;
          local_80 = &LAB_1417b2375;
          local_88 = L"Engine";
          local_90 = 0x1000000000;
          local_98 = 0x10000004;
          local_a0 = 8;
          local_a8 = 0x390;
          local_70 = &local_50;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
          uVar8 = *(uint *)(lVar15 + 0xc);
          puVar1[4] = uVar8;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          uVar8 = *(uint *)(lVar15 + 0x10);
          if (uVar8 == 0) {
            LOCK();
            iVar10 = DAT_14c964868 + 1;
            UNLOCK();
            uVar11 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar10;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar11);
            }
            LOCK();
            uVar8 = *(uint *)(lVar15 + 0x10);
            bVar16 = uVar8 == 0;
            if (bVar16) {
              *(uint *)(lVar15 + 0x10) = uVar11;
              uVar8 = 0;
            }
            UNLOCK();
            if (bVar16) {
              uVar8 = uVar11;
            }
            puVar1[5] = uVar8;
            if (uVar8 == 0) goto LAB_14045b01a;
          }
          else {
            puVar1[5] = uVar8;
          }
          uVar11 = puVar1[4];
          if (((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) &&
             ((plVar9 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
              plVar9 != (longlong *)0x0 &&
              ((*(uint *)(plVar9 + 2) == uVar8 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))))) {
            if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
              lVar15 = *plVar9;
            }
            else {
              lVar15 = 0;
            }
            lVar15 = *(longlong *)(lVar15 + 0x1c8);
            if (lVar15 == 0) {
              puVar7 = &DAT_14c8464e0;
              uVar17 = (undefined4)DAT_14c8464f0;
              uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar17 = (undefined4)*(undefined8 *)(lVar15 + 0x270);
              uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x270) >> 0x20);
              puVar7 = (undefined8 *)(lVar15 + 0x260);
            }
            uVar5 = puVar7[1];
            *(undefined8 *)(puVar1 + 6) = *puVar7;
            *(undefined8 *)(puVar1 + 8) = uVar5;
            *(ulonglong *)(puVar1 + 10) = CONCAT44(uVar18,uVar17);
          }
          goto LAB_14045b01a;
        }
      }
      puVar1[4] = 0;
      puVar1[5] = 0;
    }
  }
LAB_14045b01a:
  FUN_1411d7036(param_1);
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045b29a FUN_14045b29a body=686 status=ok
// SIG undefined FUN_14045b29a(void)

ulonglong FUN_14045b29a(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_97;
  undefined3 uStack_93;
  ulonglong local_90;
  
  uVar8 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_90 = uVar8;
  if (param_2 != (longlong *)0x0) {
    local_a8 = DAT_14c8464f0;
    local_b8 = (undefined4)DAT_14c8464e0;
    uStack_b4 = DAT_14c8464e0._4_4_;
    uStack_b0 = (undefined4)DAT_14c8464e8;
    uStack_ac = DAT_14c8464e8._4_4_;
    local_c8 = DAT_14c8464f0;
    local_d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_e8 = 0;
    (**(code **)(*param_2 + 800))(param_2,1);
    lVar13 = param_2[0x39];
    if (lVar13 == 0) {
      pdVar9 = (double *)&DAT_14c8464e0;
      dVar16 = DAT_14c8464f0;
    }
    else {
      pdVar9 = (double *)(lVar13 + 0x260);
      dVar16 = *(double *)(lVar13 + 0x270);
    }
    dVar3 = ABS(local_d8);
    if (ABS(local_d8) <= ABS(uStack_d0)) {
      dVar3 = ABS(uStack_d0);
    }
    local_d8 = dVar3;
    if (dVar3 <= ABS(local_c8)) {
      local_d8 = ABS(local_c8);
    }
    dVar15 = (double)CONCAT44(uStack_ac,uStack_b0) - pdVar9[1];
    dVar3 = (double)CONCAT44(uStack_b4,local_b8) - *pdVar9;
    dVar16 = local_a8 - dVar16;
    dVar5 = -local_d8;
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    dVar6 = local_d8 - dVar16;
    dVar7 = local_d8 - dVar15;
    dVar4 = local_d8 - dVar3;
    iVar11 = *(int *)(lVar13 + 0x10);
    uStack_d0 = local_d8;
    local_c8 = local_d8;
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar11 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar11 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar12;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar11 = iVar12;
      }
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar10 = 0;
    *(uint *)(puVar10 + 1) = uVar2;
    *(int *)((longlong)puVar10 + 0xc) = iVar11;
    puVar10[2] = dVar5 - dVar3;
    puVar10[3] = dVar5 - dVar15;
    puVar10[4] = dVar5 - dVar16;
    puVar10[5] = dVar4;
    puVar10[6] = dVar7;
    puVar10[7] = dVar6;
    *(undefined1 *)(puVar10 + 8) = 1;
    *(undefined4 *)((longlong)puVar10 + 0x41) = local_97;
    *(uint *)((longlong)puVar10 + 0x44) = CONCAT31(uStack_93,local_97._3_1_);
    uVar8 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (ulonglong *)*param_1;
      *param_1 = puVar10;
      UNLOCK();
      LOCK();
      uVar8 = *puVar1;
      *puVar1 = (ulonglong)puVar10;
      UNLOCK();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14045b54a FUN_14045b54a body=1658 status=ok
// SIG undefined FUN_14045b54a(void)

void FUN_14045b54a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  double *pdVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  uint *local_188;
  undefined8 *local_180;
  longlong *local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  code *local_158;
  undefined1 local_150 [192];
  undefined1 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_90 = (undefined1 *)0x0;
  local_88 = 0x1800000000;
  puVar19 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_180 = param_3;
  local_178 = param_2;
  if (iVar2 == 0) {
    uVar20 = 1;
    uVar21 = 0;
    iVar17 = 0;
    iVar9 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar11 = puVar19;
    }
    uVar18 = *puVar11;
    if (uVar18 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar21 = 0;
      uVar20 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar20 = uVar21;
      }
      iVar17 = 0;
      do {
        if (uVar20 == uVar21) goto LAB_14045bb74;
        iVar17 = iVar17 + 0x20;
        uVar18 = puVar11[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar21 = 0;
      iVar17 = 0;
    }
    uVar20 = (ulonglong)(-uVar18 & uVar18);
    uVar1 = uVar20 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar9 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 != iVar2) {
    uVar18 = 0xffffffff;
    local_188 = puVar19;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar9 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar12 = *local_178;
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
          puVar19 = local_188;
LAB_14045b69d:
          if (DAT_14cad00c8 == 0) {
            local_158 = FUN_144a7958c;
            local_190 = FUN_14081d0ea;
            local_198 = FUN_14081d0ea;
            local_1a0 = &local_158;
            local_1a8 = &LAB_1479b7a0c;
            local_1b0 = (code *)&LAB_1463b464e;
            local_1b8 = L"Engine";
            local_1c0 = 0;
            local_1c8 = 0x10000005;
            local_1d0 = 8;
            local_1d8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar19 = local_188;
            if (DAT_14cad00c8 == 0) goto LAB_14045b6b7;
          }
          if (*(int *)(lVar12 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14045b6b7;
          if (*(longlong *)
               (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar12 = 0;
          }
        }
        else {
          if (lVar12 != 0) goto LAB_14045b69d;
LAB_14045b6b7:
          lVar12 = 0;
        }
        if ((((*(int *)(lVar12 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
              == lVar12 + 0x30)) && ((*(byte *)((longlong)plVar4 + 0x9c) & 1) != 0)) &&
           ((*(char *)*local_180 != '\0' ||
            (iVar9 = (**(code **)(*plVar4 + 0x570))(plVar4), puVar19 = local_188, iVar9 != 0)))) {
          dVar22 = (double)plVar4[0x2e] + (double)plVar4[0x31];
          dVar23 = (double)plVar4[0x2d] + (double)plVar4[0x30];
          dVar25 = (double)plVar4[0x2c] + (double)plVar4[0x2f];
          dVar24 = (double)plVar4[0x2e] - (double)plVar4[0x31];
          dVar26 = (double)plVar4[0x2d] - (double)plVar4[0x30];
          dVar27 = (double)plVar4[0x2c] - (double)plVar4[0x2f];
          pdVar5 = (double *)local_180[1];
          if (*(char *)(pdVar5 + 6) == '\0') {
            *pdVar5 = dVar27;
            pdVar5[1] = dVar26;
            pdVar5[2] = dVar24;
            pdVar5[3] = dVar25;
            pdVar5[4] = dVar23;
            pdVar5[5] = dVar22;
            *(undefined1 *)(pdVar5 + 6) = 1;
          }
          else {
            dVar7 = *pdVar5;
            if (dVar27 <= *pdVar5) {
              dVar7 = dVar27;
            }
            *pdVar5 = dVar7;
            dVar27 = pdVar5[1];
            if (dVar26 <= pdVar5[1]) {
              dVar27 = dVar26;
            }
            pdVar5[1] = dVar27;
            dVar26 = pdVar5[2];
            if (dVar24 <= pdVar5[2]) {
              dVar26 = dVar24;
            }
            pdVar5[2] = dVar26;
            dVar24 = pdVar5[3];
            if (pdVar5[3] <= dVar25) {
              dVar24 = dVar25;
            }
            pdVar5[3] = dVar24;
            dVar24 = pdVar5[4];
            if (pdVar5[4] <= dVar23) {
              dVar24 = dVar23;
            }
            pdVar5[4] = dVar24;
            dVar23 = pdVar5[5];
            if (pdVar5[5] <= dVar22) {
              dVar23 = dVar22;
            }
            pdVar5[5] = dVar23;
          }
        }
        if (DAT_14cabf8d0 == 0) {
          local_158 = FUN_144a7958c;
          local_190 = FUN_14081d0ea;
          local_198 = FUN_142b47bc4;
          local_1a0 = &local_158;
          local_1a8 = &LAB_147860ffd;
          local_1b0 = FUN_1463713dc;
          local_1b8 = L"Engine";
          local_1c0 = 0;
          local_1c8 = 0x10000005;
          local_1d0 = 0x10;
          local_1d8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar19 = local_188;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar12 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_88, puVar19 = local_188,
           lVar12 != 0)) {
          lVar16 = (longlong)(int)local_88;
          uVar10 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,uVar10);
          if (local_88._4_4_ < uVar10) {
            FUN_1470e9d72(local_150,uVar1 & 0xffffffff);
          }
          puVar13 = local_90;
          if (local_90 == (undefined1 *)0x0) {
            puVar13 = local_150;
          }
          *(longlong *)(puVar13 + lVar16 * 8) = lVar12;
          puVar19 = local_188;
        }
      }
      puVar8 = local_180;
      uVar18 = uVar18 & ~(uint)uVar20;
      puVar11 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar11 = puVar19;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar9 = (int)uVar21;
      lVar12 = (longlong)iVar9;
      uVar10 = puVar11[lVar12] & uVar18;
      if (uVar10 == 0) {
        iVar14 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar14 = iVar3 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar9) {
          iVar15 = iVar9;
        }
        if (iVar9 < iVar14) {
          lVar16 = 0;
          do {
            uVar10 = puVar11[lVar12 + lVar16 + 1];
            if (uVar10 != 0) {
              uVar21 = (ulonglong)(iVar9 + (int)lVar16 + 1);
              uVar18 = 0xffffffff;
              goto LAB_14045b915;
            }
            iVar17 = iVar17 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar15 - lVar12 != lVar16);
          uVar18 = 0xffffffff;
          iVar9 = iVar15;
        }
        uVar21 = (ulonglong)(iVar9 + 1);
        puVar19 = local_188;
        iVar9 = iVar3;
      }
      else {
LAB_14045b915:
        uVar20 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar20 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar9) {
          iVar9 = iVar3;
        }
      }
    } while (iVar9 != iVar2);
    lVar12 = (longlong)(int)local_88;
    puVar13 = local_150;
    if (local_90 != (undefined1 *)0x0) {
      puVar13 = local_90;
    }
    if (lVar12 != 0) {
      lVar16 = 0;
      do {
        uVar6 = *(undefined8 *)(puVar13 + lVar16);
        local_168 = *puVar8;
        uStack_160 = puVar8[1];
        local_170 = *local_178;
        if ((local_170 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14045b54a(uVar6,&local_170,&local_168);
        lVar16 = lVar16 + 8;
      } while (lVar12 * 8 != lVar16);
    }
    if (local_90 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14045bb74:
  if ((local_80 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045bbc6 FUN_14045bbc6 body=138 status=ok
// SIG undefined FUN_14045bbc6(void)

void FUN_14045bbc6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a178030;
  local_58[0] = FUN_142b246fa;
  local_30 = param_4;
  local_28 = param_1;
  FUN_14045bc52(param_4,param_3,param_2,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045bc52 FUN_14045bc52 body=151 status=ok
// SIG undefined FUN_14045bc52(void)

ulonglong FUN_14045bc52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [64];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14045bdca(local_70);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar3 = FUN_14045bea4(local_70,1);
  if (iVar3 == 2) {
    uVar4 = FUN_1446ec29a(local_70,param_1,param_4);
    uVar5 = (ulonglong)uVar4;
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045bcea FUN_14045bcea body=46 status=ok
// SIG undefined FUN_14045bcea(void)

void FUN_14045bcea(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14045bd18(param_1 + 0x10);
  return;
}



// FUNCTION 14045bd18 FUN_14045bd18 body=55 status=ok
// SIG undefined FUN_14045bd18(void)

void FUN_14045bd18(longlong *param_1)

{
  FUN_14045bd50(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14045bd50 FUN_14045bd50 body=121 status=ok
// SIG undefined FUN_14045bd50(void)

void FUN_14045bd50(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14045bdca FUN_14045bdca body=217 status=ok
// SIG undefined FUN_14045bdca(void)

undefined4 * FUN_14045bdca(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined *puVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a176b80;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar3 + 0x44) = 0;
  plVar3[10] = 0;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(longlong *)(param_1 + 6) = param_3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if (param_3 == 0) {
    puVar4 = &DAT_14c9a0f28;
  }
  else {
    puVar4 = (undefined *)FUN_1456aba26(param_2);
  }
  *(undefined **)(param_1 + 0xc) = puVar4;
  *(longlong **)(param_1 + 0xe) = plVar3 + 2;
  *(longlong **)(param_1 + 0x10) = plVar3;
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
  return param_1;
}



// FUNCTION 14045bea4 FUN_14045bea4 body=899 status=ok
// SIG undefined FUN_14045bea4(void)

ulonglong FUN_14045bea4(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 4;
  }
  plVar8 = (longlong *)(param_1 + 0x20);
  if (*plVar8 == 0) {
    uVar1 = FUN_1446efc98(param_1,&DAT_14c9a0fe8);
    return uVar1;
  }
  if (DAT_14c9a0fe8 == 0) {
    lVar2 = FUN_1456ac3b8(param_1,&DAT_14c9a0fe8);
    return (ulonglong)((uint)(lVar2 == 0) * 2 + 2);
  }
  uVar4 = (uint)((ulonglong)DAT_14c9a0fec >> 0x10);
  uVar9 = (uint)DAT_14c9a0fec & 0xffff;
  uVar4 = (int)((ulonglong)DAT_14c9a0fec >> 0x20) + ((uint)DAT_14c9a0fec << 0x10 | uVar9) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
  plVar10 = &DAT_14c9a0ff8;
LAB_14045bf1d:
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    bVar14 = true;
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      uVar9 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar12 = (uint)lVar5 & 0xffff;
      lVar7 = lVar2 + 0x58;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        lVar7 = *(longlong *)(lVar2 + 0x60);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(lVar2 + 0x68) - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar12) +
                               (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          lVar7 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar6 * 0x60;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar6 * 0x60) == lVar5) {
            if (lVar7 != 0) {
              if (*(int *)(lVar7 + 0x10) == *(int *)(lVar7 + 0x3c)) goto LAB_14045c0b3;
              lVar5 = lVar7 + 0x40;
              if (*(longlong *)(lVar7 + 0x48) != 0) {
                lVar5 = *(longlong *)(lVar7 + 0x48);
              }
              iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar4) * 4);
              if (iVar6 == -1) goto LAB_14045c0b3;
              goto LAB_14045c059;
            }
            break;
          }
          iVar6 = *(int *)(lVar7 + 0x58);
        } while (iVar6 != -1);
      }
    }
    goto LAB_14045bf47;
  }
  goto LAB_14045bfdf;
  while (iVar6 = *(int *)(lVar5 + 0x18), iVar6 != -1) {
LAB_14045c059:
    lVar5 = *(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20) == DAT_14c9a0fec)
    goto LAB_14045c06a;
  }
LAB_14045c0b3:
  lVar5 = 0;
LAB_14045c06a:
  bVar14 = lVar5 == 0;
LAB_14045bf47:
  if ((param_2 & bVar14) != 1) {
    if (((bVar14 == false) && (param_1 != 0)) && (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)))
    {
      lVar5 = *(longlong *)(*plVar8 + 0x20);
      uVar9 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar12 = (uint)lVar5 & 0xffff;
      lVar7 = lVar2 + 0x58;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        lVar7 = *(longlong *)(lVar2 + 0x60);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(lVar2 + 0x68) - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar12) +
                               (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4)) * 4);
      if (iVar6 != -1) {
        plVar8 = (longlong *)0x0;
        goto LAB_14045c12b;
      }
    }
    goto LAB_14045bfdf;
  }
  param_1 = *(longlong *)(param_1 + 0x28);
  param_2 = 1;
  if (param_1 == 0) goto LAB_14045bfdf;
  goto LAB_14045bf1d;
  while (iVar6 = *(int *)(lVar7 + 0x58), iVar6 != -1) {
LAB_14045c12b:
    lVar7 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar6 * 0x60;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar6 * 0x60) == lVar5) {
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x10) == *(int *)(lVar7 + 0x3c)) goto LAB_14045c223;
        lVar2 = lVar7 + 0x40;
        if (*(longlong *)(lVar7 + 0x48) != 0) {
          lVar2 = *(longlong *)(lVar7 + 0x48);
        }
        iVar6 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar7 + 0x50) - 1U & uVar4) * 4);
        if (iVar6 == -1) goto LAB_14045c223;
        goto LAB_14045c1e7;
      }
      plVar8 = (longlong *)0x0;
      break;
    }
  }
  goto LAB_14045c203;
  while (iVar6 = *(int *)(lVar2 + 0x18), iVar6 != -1) {
LAB_14045c1e7:
    lVar2 = *(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar6 * 0x20) == DAT_14c9a0fec)
    goto LAB_14045c1f8;
  }
LAB_14045c223:
  lVar2 = 0;
LAB_14045c1f8:
  plVar8 = (longlong *)(lVar2 + 8);
  if (lVar2 == 0) {
    plVar8 = (longlong *)0x0;
  }
LAB_14045c203:
  plVar10 = &DAT_14c9a0ff8;
  if (plVar8 != (longlong *)0x0) {
    plVar10 = plVar8;
  }
LAB_14045bfdf:
  uVar1 = 1;
  if (1 < *(uint *)(plVar10 + 1)) {
    lVar2 = 0;
    while( true ) {
      uVar3 = *(ushort *)(*plVar10 + lVar2);
      uVar1 = (ulonglong)uVar3;
      uVar11 = *(ushort *)((longlong)&DAT_149e06346 + lVar2);
      if (uVar3 != uVar11) break;
      if (uVar3 == 0) goto LAB_14045c1a8;
LAB_14045c174:
      lVar2 = lVar2 + 2;
    }
    if ((uVar11 | uVar3) < 0x80) {
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
      uVar13 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar13]) goto LAB_14045c174;
    }
    if (uVar3 != uVar11) {
      return 4;
    }
LAB_14045c1a8:
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 14045c228 FUN_14045c228 body=1786 status=ok
// SIG undefined FUN_14045c228(void)

void FUN_14045c228(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14045c924();
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x220) + 0x98);
  if (lVar8 != 0) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x90);
    lVar8 = lVar8 * 0x18;
    do {
      lVar13 = *plVar10;
      if (lVar13 != 0) {
        plVar3 = (longlong *)plVar10[1];
        if (plVar3 == (longlong *)0x0) {
          if (*(longlong *)(lVar13 + 8) == *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10))
          goto LAB_14045c2fb;
        }
        else {
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
          lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x10);
          lVar13 = *(longlong *)(lVar13 + 8);
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
          if (lVar13 == lVar9) {
LAB_14045c2fb:
            if (plVar10 != (longlong *)0x0) {
              FUN_14571249e(plVar10,&local_58);
              if (local_58 == 0) goto LAB_14045c3ba;
              if (param_3 != 0) {
                lVar8 = FUN_144a78c84();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                  *(undefined1 *)(param_3 + 0x17ff) = 0;
                  if (*(char *)(local_58 + 0x38) == '\x01') {
                    lVar8 = local_58 + 0x40;
                    lVar13 = FUN_14479d2ce(lVar8);
                    if (lVar13 == 0) {
                      if (*(longlong *)(local_58 + 0x48) != 0) {
                        lVar13 = FUN_140007850();
                        cVar6 = (*(code *)PTR_FUN_14c758760)();
                        if ((lVar13 == 0) || (cVar6 == '\0')) {
                          FUN_14485c47a(lVar8,lVar13);
                          if (lVar13 == 0) goto LAB_14045c35f;
                        }
                        else {
                          uVar7 = *(uint *)(lVar13 + 0xc);
                          if ((int)uVar7 < DAT_14c9647dc) {
                            lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                          }
                          else {
                            lVar9 = 0;
                          }
                          if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
                            FUN_14485c47a(lVar8,lVar13);
                          }
                        }
                        if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_14045c58f;
                      }
                    }
                    else {
LAB_14045c58f:
                      lVar9 = FUN_144a797b2();
                      if ((((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)
                            ) && (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) &&
                          (lVar9 = FUN_1402e44f4(), lVar9 != 0)) &&
                         ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar13 + 0x38) &&
                          (*(longlong *)
                            (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                           lVar9 + 0x30)))) {
                        lVar13 = FUN_14479d2ce(lVar8);
                        if (lVar13 == 0) {
                          if (*(longlong *)(local_58 + 0x48) != 0) {
                            lVar13 = FUN_140007850();
                            cVar6 = (*(code *)PTR_FUN_14c758760)();
                            if ((lVar13 == 0) || (cVar6 == '\0')) {
                              FUN_14485c47a(lVar8,lVar13);
                              if (lVar13 == 0) goto LAB_14045c8e4;
                            }
                            else {
                              uVar7 = *(uint *)(lVar13 + 0xc);
                              if ((int)uVar7 < DAT_14c9647dc) {
                                lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                              }
                              else {
                                lVar9 = 0;
                              }
                              if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
                                FUN_14485c47a(lVar8,lVar13);
                              }
                            }
                            if ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0) goto LAB_14045c5f8;
                          }
LAB_14045c8e4:
                          lVar9 = 0;
                        }
                        else {
LAB_14045c5f8:
                          lVar8 = FUN_144a797b2();
                          if ((((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) <
                                 *(int *)(lVar8 + 0x38)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                                 (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) ||
                              (lVar8 = FUN_1402e44f4(), lVar8 == 0)) ||
                             (*(int *)(lVar13 + 0x38) < *(int *)(lVar8 + 0x38))) goto LAB_14045c8e4;
                          lVar9 = 0;
                          if (*(longlong *)
                               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                              == lVar8 + 0x30) {
                            lVar9 = lVar13;
                          }
                        }
                        FUN_14065465c(param_3,lVar9);
                      }
                    }
                  }
LAB_14045c35f:
                  if (*(char *)(local_58 + 0x68) == '\x01') {
                    *(undefined4 *)(param_3 + 0x1290) = 0;
                    if (*(int *)(param_3 + 0x1294) < 0) {
                      FUN_1488b5c5c(param_3 + 0x1288);
                    }
                    if ((longlong)*(int *)(local_58 + 0x78) != 0) {
                      puVar11 = *(undefined8 **)(local_58 + 0x70);
                      puVar12 = puVar11 + (longlong)*(int *)(local_58 + 0x78) * 5;
                      do {
                        local_80 = *puVar11;
                        local_78 = *(undefined4 *)(puVar11 + 1);
                        uStack_74 = *(undefined4 *)((longlong)puVar11 + 0xc);
                        uStack_70 = *(undefined4 *)(puVar11 + 2);
                        uStack_6c = *(undefined4 *)((longlong)puVar11 + 0x14);
                        local_68 = (void *)0x0;
                        local_60 = *(int *)(puVar11 + 4);
                        lVar8 = (longlong)local_60;
                        pvVar4 = (void *)puVar11[3];
                        if (lVar8 == 0) {
                          local_5c = 0;
                        }
                        else {
                          FUN_1446dd670(&local_68,local_60,0);
                          memcpy(local_68,pvVar4,lVar8 * 2);
                        }
                        lVar8 = FUN_1412199c4(&local_80);
                        if (lVar8 != 0) {
                          lVar13 = FUN_1488ae336(param_3 + 0x1288);
                          if (DAT_14c950c29 == '\x01') {
                            FUN_1456cec3c(lVar8);
                          }
                          *(longlong *)(lVar13 + 8) = lVar8;
                        }
                        if (local_68 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        puVar11 = puVar11 + 5;
                      } while (puVar11 != puVar12);
                    }
                  }
                  if (*(char *)(local_58 + 0x80) == '\x01') {
                    local_98 = 0;
                    uStack_90 = 0;
                    if ((longlong)*(int *)(local_58 + 0x90) != 0) {
                      puVar11 = *(undefined8 **)(local_58 + 0x88);
                      puVar12 = puVar11 + (longlong)*(int *)(local_58 + 0x90) * 5;
                      do {
                        local_80 = *puVar11;
                        local_78 = *(undefined4 *)(puVar11 + 1);
                        uStack_74 = *(undefined4 *)((longlong)puVar11 + 0xc);
                        uStack_70 = *(undefined4 *)(puVar11 + 2);
                        uStack_6c = *(undefined4 *)((longlong)puVar11 + 0x14);
                        local_68 = (void *)0x0;
                        local_60 = *(int *)(puVar11 + 4);
                        lVar8 = (longlong)local_60;
                        pvVar4 = (void *)puVar11[3];
                        if (lVar8 == 0) {
                          local_5c = 0;
                        }
                        else {
                          FUN_1446dd670(&local_68,local_60,0);
                          memcpy(local_68,pvVar4,lVar8 * 2);
                        }
                        lVar8 = FUN_1457125b0(&local_80);
                        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
                          FUN_1456cec3c(lVar8);
                        }
                        uVar5 = uStack_90;
                        lVar13 = (longlong)(int)uStack_90;
                        uVar7 = (int)uStack_90 + 1;
                        uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
                        if (uStack_90._4_4_ < uVar7) {
                          FUN_14571252c(&local_98,uVar5 & 0xffffffff);
                        }
                        *(longlong *)(local_98 + lVar13 * 8) = lVar8;
                        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
                          FUN_1456cec3c(lVar8);
                        }
                        if (local_68 != (void *)0x0) {
                          FUN_1400020a8();
                        }
                        puVar11 = puVar11 + 5;
                      } while (puVar11 != puVar12);
                    }
                    FUN_145712494(param_3 + 0x1288,&local_98);
                    if (local_98 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  if (*(char *)(local_58 + 0x18) == '\x01') {
                    lVar8 = local_58 + 0x1c;
LAB_14045c398:
                    FUN_141270910(param_3,lVar8);
                  }
                  else if (*(longlong *)(param_3 + 0x1898) == DAT_14caa8578) {
                    lVar8 = FUN_141270945();
                    goto LAB_14045c398;
                  }
                  if ((longlong)*(int *)(local_58 + 0x30) != 0) {
                    lVar8 = *(longlong *)(local_58 + 0x28);
                    lVar13 = (longlong)*(int *)(local_58 + 0x30) << 3;
                    do {
                      (**(code **)(*(longlong *)(param_3 + 0x1248) + 0x20))
                                ((longlong *)(param_3 + 0x1248),lVar8);
                      lVar8 = lVar8 + 8;
                      lVar13 = lVar13 + -8;
                    } while (lVar13 != 0);
                  }
                  if (*(char *)(local_58 + 0x98) != '\0') {
                    FUN_14045627c(param_3,0,1);
                    FUN_1446f470e(&local_80,L"StandInMeshHidden",1);
                    FUN_140d52e40(param_3,&local_80,1,1);
                  }
LAB_14045c3ba:
                  if (local_50 != (longlong *)0x0) {
                    LOCK();
                    plVar10 = local_50 + 1;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)*plVar10 == 0) {
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
                  break;
                }
              }
              if (*(char *)(local_58 + 0x98) != '\0') {
                FUN_14045627c(param_3,0,1);
              }
              goto LAB_14045c3ba;
            }
            break;
          }
        }
      }
      plVar10 = plVar10 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045c924 FUN_14045c924 body=560 status=ok
// SIG undefined FUN_14045c924(void)

void FUN_14045c924(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = param_3 + 5;
  lVar6 = FUN_14045cbe4(plVar1);
  if (lVar6 == 0) {
    uVar3 = *(uint *)(param_3 + 1);
    FUN_14058b40c(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    local_d8 = FUN_14045cc78();
    local_88 = (longlong *)0x0;
    local_58 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    uStack_c0 = (ulonglong)uVar3 & 0xffffffff00000069;
    local_b0 = 0;
    uStack_a8 = 0;
    local_d0 = param_3;
    lVar6 = FUN_1402710dd(&local_d8);
    if (lStack_98 != 0) {
      plVar8 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar8 = local_78;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (lVar6 == 0) goto LAB_14045ca00;
    (**(code **)(*plVar1 + 0x10))(plVar1,lVar6);
  }
  lVar4 = *(longlong *)(param_2 + 0x48);
  lVar7 = FUN_14045cd5e(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(lVar6 + 0x28) = lVar7;
  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar4 + 0x10);
  *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar4 + 0x18);
  FUN_14045cb56(param_2,&local_d8);
  plVar1 = local_d0;
  uVar5 = local_d8;
  if (local_d0 == (longlong *)0x0) {
    *(undefined8 *)(lVar6 + 0x40) = local_d8;
    plVar8 = *(longlong **)(lVar6 + 0x48);
    if (plVar8 == (longlong *)0x0) goto LAB_14045ca00;
LAB_14045cacd:
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x48) = plVar1;
    if (plVar1 == (longlong *)0x0) goto LAB_14045ca00;
  }
  else {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    *(undefined8 *)(lVar6 + 0x40) = uVar5;
    if (*(longlong **)(lVar6 + 0x48) != plVar1) {
      LOCK();
      *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x48);
      if (plVar8 != (longlong *)0x0) goto LAB_14045cacd;
      *(longlong **)(lVar6 + 0x48) = plVar1;
    }
  }
  LOCK();
  plVar8 = plVar1 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar1)(plVar1);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
LAB_14045ca00:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045cb56 FUN_14045cb56 body=142 status=ok
// SIG undefined FUN_14045cb56(void)

longlong * FUN_14045cb56(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x118);
  if (plVar2 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
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
    iVar4 = (int)plVar2[1];
    do {
      plVar5 = (longlong *)0x0;
      if (iVar4 == 0) break;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = plVar2;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    param_1 = 0;
  }
  *param_2 = param_1;
  param_2[1] = (longlong)plVar5;
  return param_2;
}



// FUNCTION 14045cbe4 FUN_14045cbe4 body=146 status=ok
// SIG undefined FUN_14045cbe4(void)

longlong FUN_14045cbe4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14045cc78();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_14045cc78();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14045cc49;
  }
  lVar1 = 0;
LAB_14045cc49:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045cc78 FUN_14045cc78 body=228 status=ok
// SIG undefined FUN_14045cc78(void)

longlong FUN_14045cc78(void)

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
  if (DAT_14cb5a8e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b34458;
    local_38 = &LAB_14866b8af;
    local_40 = FUN_140198721;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxBodyComponentUserData",&DAT_14cb5a8e8,&DAT_14866b8ae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a8e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045cd5e FUN_14045cd5e body=363 status=ok
// SIG undefined FUN_14045cd5e(void)

longlong FUN_14045cd5e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  code *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
    if (DAT_14c9a53e8 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_141741c86;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1470cc1e5;
      local_50 = FUN_1462ad312;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000001;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGraphAsset",&DAT_14c9a53e8,&DAT_1470cc1e4);
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) goto LAB_14045cea1;
    }
    if ((((DAT_14c9a53e8 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14c9a53e8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c9a53e8 + 0x38) * 8) ==
        DAT_14c9a53e8 + 0x30)) {
      lVar1 = FUN_14045ceca();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) goto LAB_14045cea3;
    }
  }
LAB_14045cea1:
  lVar2 = 0;
LAB_14045cea3:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14045ceca FUN_14045ceca body=228 status=ok
// SIG undefined FUN_14045ceca(void)

longlong FUN_14045ceca(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5a8a0 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_14866b897;
    local_40 = FUN_1464cb220;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxBodyData",&DAT_14cb5a8a0,FUN_1464cb1fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a8a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045cfb0 FUN_14045cfb0 body=119 status=ok
// SIG undefined FUN_14045cfb0(void)

undefined8 * FUN_14045cfb0(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((param_3 != 0) &&
     (plVar1 = (longlong *)FUN_14045d028(param_1 + -0x3d8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2,param_3,param_4);
    return param_2;
  }
  puVar3 = &DAT_14c846480;
  if (*(longlong *)(param_1 + -0x210) != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + -0x210) + 0x240);
  }
  puVar4 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_2;
}



// FUNCTION 14045d028 FUN_14045d028 body=292 status=ok
// SIG undefined FUN_14045d028(void)

void FUN_14045d028(longlong *param_1)

{
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
  longlong local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cac7cb8 == 0) {
    local_40 = &local_18;
    local_18 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1417963e0;
    local_48 = &LAB_1478a2d90;
    local_50 = &LAB_146395589;
    local_58 = L"Engine";
    local_60 = 0x20000000000;
    local_68 = 0x10000005;
    local_70 = 0x10;
    local_78 = 0xad0;
    FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
  }
  local_20 = DAT_14cac7cb8;
  if ((DAT_14cac7cb8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_20);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045d14e thunk_FUN_14045d156 body=8 status=ok
// SIG undefined thunk_FUN_14045d156(void)

void thunk_FUN_14045d156(void)

{
  FUN_14045d156();
  return;
}



// FUNCTION 14045d156 FUN_14045d156 body=74 status=ok
// SIG undefined FUN_14045d156(void)

void FUN_14045d156(undefined8 param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  
  cVar2 = FUN_14045d218();
  if (cVar2 != '\0') {
    puVar1 = (undefined1 *)FUN_14045d1a0(param_1,param_2);
    *puVar1 = param_3;
    if (param_4 != '\0') {
      FUN_14045d2f8(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14045d1a0 FUN_14045d1a0 body=118 status=ok
// SIG undefined FUN_14045d1a0(void)

longlong FUN_14045d1a0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar1) {
    FUN_147a3fb42(param_1 + 1,iVar1);
  }
  local_1c = param_2;
  piVar2 = (int *)FUN_14045d29c(param_1 + 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)*piVar2 * 0x1c + param_1[0xe];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045d218 FUN_14045d218 body=130 status=ok
// SIG undefined FUN_14045d218(void)

undefined4 FUN_14045d218(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar2) {
    FUN_147a3fb42(param_1 + 1,iVar2);
  }
  local_24 = param_2;
  piVar4 = (int *)FUN_14045d29c(param_1 + 1);
  if (piVar4 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *piVar4;
    uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < iVar2 && -1 < iVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045d29c FUN_14045d29c body=91 status=ok
// SIG undefined FUN_14045d29c(void)

longlong FUN_14045d29c(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & *param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar4 * 0x10;
        if (*(uint *)(*param_1 + (longlong)iVar4 * 0x10) == *param_2) goto LAB_14045d2dd;
        iVar4 = *(int *)(lVar2 + 8);
      } while (iVar4 != -1);
    }
  }
  lVar2 = 0;
LAB_14045d2dd:
  lVar1 = lVar2 + 4;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14045d2f8 FUN_14045d2f8 body=286 status=ok
// SIG undefined FUN_14045d2f8(void)

void FUN_14045d2f8(longlong param_1,float param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x78);
  if (0 < (int)*(uint *)(param_1 + 0x78)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x70);
      fVar1 = *(float *)(lVar3 + 0xc + lVar4);
      fVar9 = *(float *)(lVar3 + 0x14 + lVar4);
      fVar7 = fVar1;
      fVar8 = fVar9;
      if (lVar5 == 0) {
        if ((1 < (int)uVar6) && (fVar8 = 0.0, *(char *)(lVar3 + 1 + lVar4) != '\0')) {
          fVar8 = fVar9;
        }
      }
      else if (lVar5 < (int)uVar6 + -1) {
        if (*(char *)(lVar3 + lVar4) == '\x02') {
          if (*(char *)(lVar3 + 1 + lVar4) == '\0') {
            fVar1 = *(float *)(lVar3 + 8 + lVar4);
            fVar9 = *(float *)(lVar3 + 0x20 + lVar4) - *(float *)(lVar3 + -0x18 + lVar4);
            fVar7 = 0.0001;
            if (0.0001 <= fVar9) {
              fVar7 = fVar9;
            }
            fVar7 = (((*(float *)(lVar3 + 0x24 + lVar4) - fVar1) +
                     (fVar1 - *(float *)(lVar3 + -0x14 + lVar4))) * (1.0 - param_2)) / fVar7;
            fVar8 = fVar7;
          }
          else if (*(char *)(lVar3 + -0x1c + lVar4) == '\x01') goto LAB_14045d3b8;
        }
        else {
          cVar2 = *(char *)(lVar3 + -0x1c + lVar4);
          if (cVar2 == '\x01') {
LAB_14045d3b8:
            fVar7 = 0.0;
            fVar8 = 0.0;
          }
          else if ((*(char *)(lVar3 + lVar4) == '\x01') && (fVar8 = 0.0, cVar2 != '\x02')) {
            fVar7 = 0.0;
          }
        }
      }
      else if ((*(char *)(lVar3 + lVar4) == '\x02') &&
              (fVar7 = 0.0, *(char *)(lVar3 + 1 + lVar4) != '\0')) {
        fVar7 = fVar1;
      }
      *(float *)(lVar3 + 0xc + lVar4) = fVar7;
      *(float *)(lVar3 + 0x14 + lVar4) = fVar8;
      lVar5 = lVar5 + 1;
      uVar6 = (ulonglong)*(int *)(param_1 + 0x78);
      lVar4 = lVar4 + 0x1c;
    } while (lVar5 < (longlong)uVar6);
  }
  return;
}



// FUNCTION 14045d416 FUN_14045d416 body=21 status=ok
// SIG undefined FUN_14045d416(void)

int * FUN_14045d416(int *param_1)

{
  int iVar1;
  
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c761474 + 1;
  DAT_14c761474 = DAT_14c761474 + 1;
  *param_1 = iVar1;
  return param_1;
}



// FUNCTION 14045d42c FUN_14045d42c body=21 status=ok
// SIG undefined FUN_14045d42c(void)

undefined8 FUN_14045d42c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14045d442 FUN_14045d442 body=116 status=ok
// SIG undefined FUN_14045d442(void)

void FUN_14045d442(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x88 + lVar5;
    do {
      iVar1 = *(int *)(lVar5 + 0x10);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar5 + 8);
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar6);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
      lVar5 = lVar5 + 0x88;
    } while (lVar5 != lVar4);
  }
  return;
}



// FUNCTION 14045d4b6 FUN_14045d4b6 body=23 status=ok
// SIG undefined FUN_14045d4b6(void)

bool FUN_14045d4b6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14045d4ce(param_1,param_2,0);
  return lVar1 != 0;
}



// FUNCTION 14045d4ce FUN_14045d4ce body=251 status=ok
// SIG undefined FUN_14045d4ce(void)

short * FUN_14045d4ce(longlong param_1,wchar_t *param_2,short *param_3)

{
  short *psVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  
  sVar2 = wcslen(param_2);
  if ((0 < (int)(uint)sVar2) && (0 < (longlong)*(int *)(param_1 + 0x50))) {
    uVar3 = (ulonglong)((uint)sVar2 & 0x7fffffff);
    lVar7 = 0;
    do {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(*(longlong *)(param_1 + 0x48) + 8 + lVar7 * 0x10) != 0) {
        puVar4 = *(undefined2 **)(lVar7 * 0x10 + *(longlong *)(param_1 + 0x48));
      }
      if (uVar3 != 0) {
        lVar5 = 0;
        uVar9 = uVar3;
        while( true ) {
          uVar10 = *(ushort *)((longlong)puVar4 + lVar5);
          uVar11 = (ulonglong)uVar10;
          uVar6 = *(ushort *)((longlong)param_2 + lVar5);
          if (uVar10 != uVar6) break;
          if (uVar10 == 0) goto LAB_14045d58b;
LAB_14045d560:
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_14045d58b;
          lVar5 = lVar5 + 2;
        }
        if ((uVar6 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar8 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar8]) goto LAB_14045d560;
        }
        if (uVar10 != uVar6) goto LAB_14045d5b8;
      }
LAB_14045d58b:
      psVar1 = puVar4 + uVar3;
      if (psVar1[-1] == 0x3d) {
        return psVar1;
      }
      if (*psVar1 == 0x3d) {
        return psVar1;
      }
      if (*psVar1 == 0) {
        return psVar1;
      }
LAB_14045d5b8:
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(int *)(param_1 + 0x50));
  }
  return param_3;
}



// FUNCTION 14045d5ca FUN_14045d5ca body=640 status=ok
// SIG undefined FUN_14045d5ca(void)

void FUN_14045d5ca(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
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
  lVar1 = param_1 + 8;
  if (*(int *)(param_1 + 0x1148) == 0x40) {
    lVar10 = param_1 + 0x1040;
    if (*(longlong *)(param_1 + 0x1140) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1140);
    }
    if (*(int *)(param_1 + 0x1010) - *(int *)(param_1 + 0x103c) < 0x10) {
      lVar6 = param_1 + 0x1018;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar9 = *(int *)(param_1 + 0x1030);
      local_50 = lVar6;
      if (iVar9 != 0) {
        FUN_14045d8e6(&local_58);
      }
      local_78 = local_58;
      local_70 = local_50;
      local_68 = local_48;
      uVar3 = local_68;
      local_60 = local_40;
      local_5c = local_3c;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar4 = local_68._4_4_;
      local_80 = lVar1;
      if ((local_68._4_4_ != iVar9) || (local_68 = uVar3, local_50 != lVar6)) {
        do {
          local_68 = uVar3;
          lVar7 = *(longlong *)(local_80 + 0x1000);
          if (*(longlong *)(local_80 + 0x1000) == 0) {
            lVar7 = local_80;
          }
          *(undefined4 *)(lVar10 + (longlong)*(int *)(lVar7 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
               0xffffffff;
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_14045d8e6(&local_78);
          iVar4 = local_68._4_4_;
          uVar3 = local_68;
        } while (((local_68._4_4_ != iVar9) || (local_70 != lVar6)) || (local_80 != lVar1));
      }
    }
    else {
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar10 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x1148));
    }
    FUN_14045d860(lVar1,0x80);
  }
  else {
    FUN_14045d860(lVar1,0x80);
    *(undefined4 *)(param_1 + 0x1148) = 0x40;
    FUN_1418814fa(lVar1);
  }
  lVar1 = param_1 + 0x1150;
  uVar8 = (ulonglong)*(int *)(param_1 + 0x2558);
  if (0 < (longlong)uVar8) {
    iVar9 = -*(int *)(param_1 + 0x2558);
    lVar10 = uVar8 * 0x28;
    do {
      lVar6 = *(longlong *)(param_1 + 0x2550);
      if (*(longlong *)(param_1 + 0x2550) == 0) {
        lVar6 = lVar1;
      }
      iVar4 = *(int *)(lVar6 + -8 + lVar10);
      *(int *)(lVar6 + -8 + lVar10) = iVar4 + 1;
      if (DAT_14c7638fc <= iVar4) {
        uVar5 = *(uint *)(param_1 + 0x2558);
        if (uVar8 != uVar5) {
          iVar4 = iVar9 + uVar5;
          if (0 < (int)(iVar9 + uVar5)) {
            iVar4 = 1;
          }
          lVar6 = *(longlong *)(param_1 + 0x2550);
          if (*(longlong *)(param_1 + 0x2550) == 0) {
            lVar6 = lVar1;
          }
          memmove((void *)(lVar6 + lVar10 + -0x28),
                  (void *)(lVar6 + (longlong)(int)(uVar5 - iVar4) * 0x28),(longlong)iVar4 * 0x28);
          uVar5 = *(uint *)(param_1 + 0x2558);
        }
        *(uint *)(param_1 + 0x2558) = uVar5 - 1;
        if (uVar8 == 1) {
          FUN_14045d98c(lVar1);
          break;
        }
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + -0x28;
      bVar2 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
  if (*(int *)(param_1 + 0x255c) < 0x80) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14045d860 FUN_14045d860 body=133 status=ok
// SIG undefined FUN_14045d860(void)

void FUN_14045d860(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x1008) = 0;
  if (*(int *)(param_1 + 0x100c) != param_2) {
    FUN_145712954(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x1030) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x102c)) && (*(int *)(param_1 + 0x102c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x102c) = uVar1;
  FUN_1403a3b9e(param_1 + 0x1010,0);
  return;
}



// FUNCTION 14045d8e6 FUN_14045d8e6 body=165 status=ok
// SIG undefined FUN_14045d8e6(void)

void FUN_14045d8e6(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  lVar9 = *(longlong *)(param_1 + 2);
  lVar8 = *(longlong *)(lVar9 + 0x10);
  if (*(longlong *)(lVar9 + 0x10) == 0) {
    lVar8 = lVar9;
  }
  iVar2 = *(int *)(lVar9 + 0x18);
  iVar4 = *param_1;
  lVar9 = (longlong)iVar4;
  uVar5 = param_1[4] & *(uint *)(lVar8 + lVar9 * 4);
  if (uVar5 == 0) {
    iVar3 = param_1[6];
    iVar10 = iVar4;
    do {
      iVar10 = iVar10 + 1;
      iVar6 = iVar2 + -1;
      if (iVar2 + -1 < 0) {
        iVar6 = iVar2 + 0x1e;
      }
      iVar7 = iVar6 >> 5;
      if (iVar6 >> 5 < iVar4) {
        iVar7 = iVar4;
      }
      *param_1 = iVar10;
      iVar3 = iVar3 + 0x20;
      param_1[6] = iVar3;
      if (lVar9 == iVar7) {
        param_1[5] = iVar2;
        return;
      }
      uVar5 = *(uint *)(lVar8 + 4 + lVar9 * 4);
      param_1[4] = -1;
      lVar9 = lVar9 + 1;
    } while (uVar5 == 0);
  }
  else {
    iVar3 = param_1[6];
  }
  param_1[1] = -uVar5 & uVar5;
  uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar4 = (iVar3 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar4) {
    iVar4 = iVar2;
  }
  param_1[5] = iVar4;
  return;
}



// FUNCTION 14045d98c FUN_14045d98c body=180 status=ok
// SIG undefined FUN_14045d98c(void)

void FUN_14045d98c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x1408);
  uVar1 = *(uint *)(param_1 + 0x140c);
  if ((ulonglong)uVar4 < 0x81) {
    uVar4 = 0x80;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if ((ulonglong)((longlong)iVar3 * 0x28) < 0x4000) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 * 0x28,0);
      uVar4 = (uint)(uVar2 / 0x28);
      uVar1 = *(uint *)(param_1 + 0x140c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x140c) = uVar4;
  FUN_148834cb4(param_1,*(undefined4 *)(param_1 + 0x1408));
  return;
}



// FUNCTION 14045da40 FUN_14045da40 body=373 status=ok
// SIG undefined FUN_14045da40(void)

void FUN_14045da40(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14045dacb;
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
LAB_14045dacb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,4);
  return;
}



// FUNCTION 14045dbb6 FUN_14045dbb6 body=52 status=ok
// SIG undefined FUN_14045dbb6(void)

void FUN_14045dbb6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14473400f(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14045dbea FUN_14045dbea body=205 status=ok
// SIG undefined FUN_14045dbea(void)

void FUN_14045dbea(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_2 + 0x18);
  UNLOCK();
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar8 = param_2;
  }
  iVar2 = *(int *)(param_2 + 0x18);
  if ((longlong)iVar2 == 0) {
    iVar7 = 0;
  }
  else {
    lVar9 = 0;
    lVar1 = param_1 + 0x28;
    iVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar8 + lVar9);
      if ((lVar4 == 0) || (cVar5 = FUN_1456bb142(lVar4 + 0x88,param_1), cVar5 == '\0')) {
        iVar7 = iVar7 + 1;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        if (param_3 == '\0') {
          iVar3 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
            FUN_144724bd8(lVar1,(longlong)iVar3);
          }
          lVar6 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(param_1 + 0x30) == 0) {
            lVar6 = lVar1;
          }
          *(longlong *)(lVar6 + (longlong)iVar3 * 8) = lVar4;
        }
        else {
          FUN_1456bb1d4(lVar1,lVar4);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar7;
  UNLOCK();
  return;
}



// FUNCTION 14045dcb8 FUN_14045dcb8 body=713 status=ok
// SIG undefined FUN_14045dcb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14045dcb8(longlong param_1,double *param_2,int param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  lVar5 = *(longlong *)(param_1 + 0x50);
  lVar6 = (longlong)param_3 * 0x60;
  lVar1 = lVar5 + lVar6;
  dVar2 = *(double *)(lVar5 + 0x40 + lVar6);
  uVar16 = SUB84(dVar2,0);
  uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar7 = *(double *)(lVar5 + 0x48 + lVar6);
  dVar3 = *(double *)(lVar5 + 0x50 + lVar6);
  uVar18 = SUB84(dVar3,0);
  uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if ((((*(char *)(param_1 + 0x3a) == '\x01') && (dVar2 == 0.0)) && (!NAN(dVar2))) &&
     (((dVar7 == 0.0 && (!NAN(dVar7))) && ((dVar3 == 0.0 && (!NAN(dVar3))))))) {
    uVar16 = 0xa0b5ed8d;
    uVar17 = 0x3eb0c6f7;
    dVar7 = 1e-06;
    uVar18 = uVar16;
    uVar19 = uVar17;
  }
  auVar4 = *(undefined1 (*) [16])(lVar1 + 0x28);
  auVar14 = divpd(auVar4,_DAT_1499387d0);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(double *)(lVar1 + 0x38);
  auVar15 = divpd(auVar15,_DAT_1499387d0);
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar11 = (auVar4._0_8_ - auVar14._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar12 = (auVar4._8_8_ - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = (*(double *)(lVar1 + 0x38) - auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
  ;
  dVar3 = (0.0 - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar8 = sin(dVar11);
  dVar9 = sin(dVar12);
  dVar10 = sin(dVar2);
  sin(dVar3);
  dVar11 = cos(dVar11);
  dVar12 = cos(dVar12);
  dVar13 = cos(dVar2);
  cos(dVar3);
  dVar2 = dVar9 * dVar8 * dVar10 + dVar12 * dVar11 * dVar13;
  *param_2 = dVar8 * dVar9 * dVar13 - dVar11 * dVar12 * dVar10;
  param_2[1] = -(dVar8 * dVar12 * dVar13) - dVar11 * dVar9 * dVar10;
  auVar4._8_4_ = SUB84(dVar2,0);
  auVar4._0_8_ = -(dVar12 * dVar8 * dVar10) + dVar9 * dVar11 * dVar13;
  auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar4;
  dVar3 = *(double *)(lVar1 + 0x18);
  dVar2 = *(double *)(lVar1 + 0x20);
  param_2[4] = *(double *)(lVar1 + 0x10);
  param_2[5] = dVar3;
  param_2[6] = dVar2;
  param_2[7] = 0.0;
  *(undefined4 *)(param_2 + 8) = uVar16;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar17;
  *(int *)(param_2 + 9) = SUB84(dVar7,0);
  *(int *)((longlong)param_2 + 0x4c) = (int)((ulonglong)dVar7 >> 0x20);
  param_2[10] = (double)CONCAT44(uVar19,uVar18);
  param_2[0xb] = 0.0;
  dVar7 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  if (*(char *)(param_1 + 0x38) == '\0') {
    param_2[4] = DAT_14c8464e0;
    param_2[5] = dVar2;
    param_2[6] = dVar7;
    param_2[7] = 0.0;
  }
  dVar3 = DAT_14c8463e8;
  dVar7 = DAT_14c8463e0;
  dVar2 = DAT_14c8463d8;
  if (*(char *)(param_1 + 0x39) == '\0') {
    *param_2 = DAT_14c8463d0;
    param_2[1] = dVar2;
    param_2[2] = dVar7;
    param_2[3] = dVar3;
  }
  dVar7 = DAT_14c846520;
  dVar2 = DAT_14c846518;
  if (*(char *)(param_1 + 0x3a) == '\0') {
    param_2[8] = DAT_14c846510;
    param_2[9] = dVar2;
    param_2[10] = dVar7;
    param_2[0xb] = 0.0;
  }
  return param_2;
}



// FUNCTION 14045df82 FUN_14045df82 body=2322 status=ok
// SIG undefined FUN_14045df82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14045df82(undefined8 param_1,longlong *param_2,double *param_3,int param_4,int param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_2b8 [32];
  double local_298;
  double local_290;
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
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (param_5 == 3) {
    if (param_4 == -1) goto LAB_14045e885;
    lVar20 = (longlong)param_4;
    cVar5 = *(char *)(param_2[3] + lVar20);
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_2b8);
      }
      goto LAB_14045e885;
    }
    if (param_4 == -1) goto LAB_14045e885;
    param_4 = *(int *)(*(longlong *)(param_2[2] + 0x90) + (longlong)param_4 * 4);
    lVar20 = (longlong)param_4;
    if (lVar20 == -1) goto LAB_14045e885;
    cVar5 = *(char *)(param_2[3] + lVar20);
  }
  if (cVar5 == '\0') {
    FUN_1447d5d8e(param_2,param_4);
  }
  lVar6 = *param_2;
  lVar20 = lVar20 * 0x60;
  pdVar1 = (double *)(lVar6 + lVar20);
  auVar24 = *(undefined1 (*) [16])(lVar6 + 0x40 + lVar20);
  dVar36 = auVar24._0_8_;
  dVar9 = auVar24._8_8_;
  auVar40 = *(undefined1 (*) [16])(lVar6 + 0x50 + lVar20);
  dVar27 = auVar40._0_8_;
  dVar37 = auVar40._8_8_;
  auVar28 = *(undefined1 (*) [16])(param_3 + 8);
  dVar7 = auVar28._0_8_;
  dVar41 = auVar28._8_8_;
  auVar22 = *(undefined1 (*) [16])(param_3 + 10);
  dVar8 = auVar22._0_8_;
  auVar24 = minpd(auVar28,auVar24);
  auVar28 = minpd(auVar22,auVar40);
  auVar40._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
  iVar18 = movmskpd((int)lVar6,auVar40);
  auVar24._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
  uVar19 = movmskpd((int)lVar20,auVar24);
  if ((uVar19 & 0x3fffffff) == 0 && iVar18 == 0) {
    dVar10 = *param_3;
    dVar11 = param_3[1];
    dVar12 = param_3[2];
    dVar13 = param_3[3];
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    dVar16 = pdVar1[2];
    dVar17 = pdVar1[3];
    dVar23 = pdVar1[3];
    dVar46 = pdVar1[3];
    dVar30 = *pdVar1;
    dVar33 = *pdVar1;
    dVar34 = pdVar1[1];
    dVar26 = pdVar1[1];
    dVar32 = pdVar1[2];
    dVar31 = pdVar1[2];
    dVar42 = param_3[4] * dVar36;
    dVar43 = param_3[5] * dVar9;
    dVar44 = param_3[6] * dVar27;
    dVar45 = param_3[7] * dVar37;
    dVar38 = dVar43 * dVar14 - dVar15 * dVar42;
    dVar39 = dVar44 * dVar15 - dVar16 * dVar43;
    dVar47 = dVar42 * dVar16 - dVar14 * dVar44;
    dVar48 = dVar45 * dVar17 - dVar17 * dVar45;
    dVar39 = dVar39 + dVar39;
    dVar47 = dVar47 + dVar47;
    dVar38 = dVar38 + dVar38;
    dVar48 = dVar48 + dVar48;
    dVar35 = pdVar1[4];
    dVar3 = pdVar1[5];
    dVar2 = pdVar1[6];
    dVar4 = pdVar1[7];
    *param_3 = dVar11 * dVar32 * -1.0 + dVar12 * dVar34 + dVar13 * dVar30 * 1.0 + dVar10 * dVar23;
    param_3[1] = dVar10 * dVar31 * 1.0 + dVar13 * dVar26 + dVar12 * dVar33 * -1.0 + dVar11 * dVar46;
    param_3[2] = dVar13 * dVar32 * 1.0 +
                 ((dVar30 * dVar11 * 1.0 + dVar12 * dVar23) - dVar10 * dVar34);
    param_3[3] = dVar12 * dVar31 * -1.0 +
                 ((dVar33 * dVar10 * -1.0 + dVar13 * dVar46) - dVar11 * dVar26);
    param_3[4] = (dVar38 * dVar15 - dVar16 * dVar47) + dVar23 * dVar39 + dVar42 + dVar35;
    param_3[5] = (dVar39 * dVar16 - dVar38 * dVar14) + dVar46 * dVar47 + dVar43 + dVar3;
    param_3[6] = (dVar47 * dVar14 - dVar15 * dVar39) + dVar23 * dVar38 + dVar44 + dVar2;
    param_3[7] = (dVar48 * dVar17 - dVar48 * dVar17) + dVar46 * dVar48 + dVar45 + dVar4;
    param_3[8] = dVar7 * dVar36;
    param_3[9] = dVar41 * dVar9;
    param_3[10] = dVar8 * dVar27;
    param_3[0xb] = auVar22._8_8_ * dVar37;
  }
  else {
    dVar30 = *pdVar1;
    dVar33 = pdVar1[1];
    dVar34 = pdVar1[2];
    dVar26 = dVar33 + dVar33;
    dVar31 = dVar34 + dVar34;
    dVar46 = dVar30 * (dVar30 + dVar30);
    local_178 = (1.0 - (dVar46 + dVar33 * dVar26)) * dVar27;
    dVar23 = pdVar1[3];
    dVar32 = dVar31 * dVar23;
    dVar35 = (dVar30 + dVar30) * pdVar1[3];
    dVar23 = dVar26 * dVar23;
    local_188 = (dVar23 + *pdVar1 * dVar31) * dVar27;
    local_278 = dVar27 * dVar8;
    dStack_270 = dVar37 * auVar22._8_8_;
    local_1c8 = (1.0 - (dVar34 * dVar31 + dVar33 * dVar26)) * dVar36;
    dStack_1a0 = (1.0 - (dVar34 * dVar31 + dVar46)) * dVar9;
    dStack_1c0 = (dVar26 * dVar30 + dVar32) * dVar36;
    local_198 = (dVar31 * dVar33 + dVar35) * dVar9;
    local_1a8 = (dVar26 * dVar30 - dVar32) * dVar9;
    dStack_180 = (dVar31 * dVar33 - dVar35) * dVar27;
    local_1b8 = (*pdVar1 * dVar31 - dVar23) * dVar36;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = pdVar1[4];
    dStack_160 = pdVar1[5];
    local_158 = pdVar1[6];
    uStack_150 = 0x3ff0000000000000;
    dVar37 = *param_3;
    dVar23 = param_3[1];
    dVar46 = param_3[2];
    dVar30 = dVar23 + dVar23;
    dVar33 = dVar46 + dVar46;
    dVar31 = dVar37 * (dVar37 + dVar37);
    local_1f8 = (1.0 - (dVar31 + dVar23 * dVar30)) * dVar8;
    dVar27 = param_3[3];
    dVar34 = dVar33 * dVar27;
    dVar26 = (dVar37 + dVar37) * param_3[3];
    dVar27 = dVar30 * dVar27;
    local_208 = (dVar27 + *param_3 * dVar33) * dVar8;
    local_228 = (dVar30 * dVar37 - dVar34) * dVar41;
    dStack_200 = (dVar33 * dVar23 - dVar26) * dVar8;
    local_288 = dVar36 * dVar7;
    dStack_280 = dVar9 * dVar41;
    local_248 = (1.0 - (dVar46 * dVar33 + dVar23 * dVar30)) * dVar7;
    dStack_220 = (1.0 - (dVar46 * dVar33 + dVar31)) * dVar41;
    dStack_240 = (dVar30 * dVar37 + dVar34) * dVar7;
    local_218 = (dVar33 * dVar23 + dVar26) * dVar41;
    local_238 = (*param_3 * dVar33 - dVar27) * dVar7;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_3[4];
    dStack_1e0 = param_3[5];
    local_1d8 = param_3[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    dVar9 = dStack_270;
    dVar8 = local_278;
    dVar7 = dStack_280;
    dVar27 = local_288;
    local_290 = local_138;
    dVar37 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    local_298 = local_118;
    dVar23 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    dVar36 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100;
    uVar21 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
    dVar41 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar21);
    uVar21 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar23 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar21);
    uVar21 = -(ulonglong)(0.0 <= dVar36 + -9.99999993922529e-09);
    dVar46 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar36)) & uVar21);
    auVar28._8_8_ = -(ulonglong)(0.0 <= dStack_280);
    auVar28._0_8_ = -(ulonglong)(0.0 <= local_288);
    auVar24 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar28);
    dVar36 = (double)(~-(ulonglong)(0.0 <= local_278) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_278) & 0x3ff0000000000000);
    dVar37 = auVar24._0_8_;
    local_148 = local_148 * dVar41 * dVar37;
    local_140 = local_140 * dVar41 * dVar37;
    local_138 = dVar41 * local_138 * dVar37;
    dVar37 = auVar24._8_8_;
    local_118 = dVar23 * local_118 * dVar37;
    local_120 = local_120 * dVar23 * dVar37;
    local_128 = dVar37 * local_128 * dVar23;
    local_f8 = dVar46 * local_f8 * dVar36;
    local_100 = local_100 * dVar46 * dVar36;
    local_108 = dVar36 * local_108 * dVar46;
    FUN_14481fd10(&local_268,&local_148);
    dVar36 = local_258 * local_258 + local_268 * local_268;
    dVar37 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar25._0_8_ = dVar36 + dVar37;
    auVar25._8_8_ = dVar36 + dVar37;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar24 = sqrtpd(auVar25,auVar25);
    auVar24 = divpd(_DAT_149934d80,auVar24);
    auVar29._0_8_ = auVar24._0_8_ * local_258;
    auVar29._8_8_ = auVar24._8_8_ * dStack_250;
    auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar22);
    param_3[8] = dVar27;
    param_3[9] = dVar7;
    param_3[10] = dVar8;
    param_3[0xb] = dVar9;
    *param_3 = (double)((ulonglong)(local_268 * auVar24._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
    param_3[1] = (double)((ulonglong)(dStack_260 * auVar24._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
    *(undefined1 (*) [16])(param_3 + 2) = auVar40;
    param_3[4] = local_e8;
    param_3[5] = dStack_e0;
    param_3[6] = local_d8;
    param_3[7] = 0.0;
  }
LAB_14045e885:
  if ((local_c0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045e902 FUN_14045e902 body=2293 status=ok
// SIG undefined FUN_14045e902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14045e902(double *param_1,longlong param_2,double *param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_2b8 [32];
  double local_298;
  double local_290;
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
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (param_5 == 3) {
    cVar4 = *(char *)(*(longlong *)(param_2 + 0x18) + (longlong)param_4);
joined_r0x00014045ef8a:
    if (cVar4 == '\0') {
      FUN_1447d5d8e(param_2,param_4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_2b8);
  }
  if (param_5 == 2) {
    param_4 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x90) + (longlong)param_4 * 4);
    if ((longlong)param_4 != -1) {
      cVar4 = *(char *)(*(longlong *)(param_2 + 0x18) + (longlong)param_4);
      goto joined_r0x00014045ef8a;
    }
  }
  else if (param_5 == 0) {
    auVar21 = *(undefined1 (*) [16])(param_1 + 8);
    dVar33 = auVar21._0_8_;
    dVar7 = auVar21._8_8_;
    auVar37 = *(undefined1 (*) [16])(param_1 + 10);
    dVar24 = auVar37._0_8_;
    dVar34 = auVar37._8_8_;
    auVar25 = *(undefined1 (*) [16])(param_3 + 8);
    dVar5 = auVar25._0_8_;
    dVar38 = auVar25._8_8_;
    auVar19 = *(undefined1 (*) [16])(param_3 + 10);
    dVar6 = auVar19._0_8_;
    auVar21 = minpd(auVar25,auVar21);
    auVar25 = minpd(auVar19,auVar37);
    auVar37._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
    iVar16 = movmskpd(0,auVar37);
    auVar21._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar21._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    uVar17 = movmskpd((int)local_c0,auVar21);
    if ((uVar17 & 0x3fffffff) == 0 && iVar16 == 0) {
      dVar8 = *param_3;
      dVar9 = param_3[1];
      dVar10 = param_3[2];
      dVar11 = param_3[3];
      dVar12 = *param_1;
      dVar13 = param_1[1];
      dVar14 = param_1[2];
      dVar15 = param_1[3];
      dVar20 = param_1[3];
      dVar43 = param_1[3];
      dVar27 = *param_1;
      dVar30 = *param_1;
      dVar31 = param_1[1];
      dVar23 = param_1[1];
      dVar29 = param_1[2];
      dVar28 = param_1[2];
      dVar39 = param_3[4] * dVar33;
      dVar40 = param_3[5] * dVar7;
      dVar41 = param_3[6] * dVar24;
      dVar42 = param_3[7] * dVar34;
      dVar35 = dVar40 * dVar12 - dVar13 * dVar39;
      dVar36 = dVar41 * dVar13 - dVar14 * dVar40;
      dVar44 = dVar39 * dVar14 - dVar12 * dVar41;
      dVar45 = dVar42 * dVar15 - dVar15 * dVar42;
      dVar36 = dVar36 + dVar36;
      dVar44 = dVar44 + dVar44;
      dVar35 = dVar35 + dVar35;
      dVar45 = dVar45 + dVar45;
      dVar32 = param_1[4];
      dVar2 = param_1[5];
      dVar1 = param_1[6];
      dVar3 = param_1[7];
      *param_3 = dVar9 * dVar29 * -1.0 + dVar10 * dVar31 + dVar11 * dVar27 * 1.0 + dVar8 * dVar20;
      param_3[1] = dVar8 * dVar28 * 1.0 + dVar11 * dVar23 + dVar10 * dVar30 * -1.0 + dVar9 * dVar43;
      param_3[2] = dVar11 * dVar29 * 1.0 +
                   ((dVar27 * dVar9 * 1.0 + dVar10 * dVar20) - dVar8 * dVar31);
      param_3[3] = dVar10 * dVar28 * -1.0 +
                   ((dVar30 * dVar8 * -1.0 + dVar11 * dVar43) - dVar9 * dVar23);
      param_3[4] = (dVar35 * dVar13 - dVar14 * dVar44) + dVar20 * dVar36 + dVar39 + dVar32;
      param_3[5] = (dVar36 * dVar14 - dVar35 * dVar12) + dVar43 * dVar44 + dVar40 + dVar2;
      param_3[6] = (dVar44 * dVar12 - dVar13 * dVar36) + dVar20 * dVar35 + dVar41 + dVar1;
      param_3[7] = (dVar45 * dVar15 - dVar45 * dVar15) + dVar43 * dVar45 + dVar42 + dVar3;
      param_3[8] = dVar5 * dVar33;
      param_3[9] = dVar38 * dVar7;
      param_3[10] = dVar6 * dVar24;
      param_3[0xb] = auVar19._8_8_ * dVar34;
    }
    else {
      dVar27 = *param_1;
      dVar30 = param_1[1];
      dVar31 = param_1[2];
      dVar23 = dVar30 + dVar30;
      dVar28 = dVar31 + dVar31;
      dVar43 = dVar27 * (dVar27 + dVar27);
      local_178 = (1.0 - (dVar43 + dVar30 * dVar23)) * dVar24;
      dVar20 = param_1[3];
      dVar29 = dVar28 * dVar20;
      dVar32 = (dVar27 + dVar27) * param_1[3];
      dVar20 = dVar23 * dVar20;
      local_188 = (dVar20 + *param_1 * dVar28) * dVar24;
      local_278 = dVar24 * dVar6;
      dStack_270 = dVar34 * auVar19._8_8_;
      local_1c8 = (1.0 - (dVar31 * dVar28 + dVar30 * dVar23)) * dVar33;
      dStack_1a0 = (1.0 - (dVar31 * dVar28 + dVar43)) * dVar7;
      dStack_1c0 = (dVar23 * dVar27 + dVar29) * dVar33;
      local_198 = (dVar28 * dVar30 + dVar32) * dVar7;
      local_1a8 = (dVar23 * dVar27 - dVar29) * dVar7;
      dStack_180 = (dVar28 * dVar30 - dVar32) * dVar24;
      local_1b8 = (*param_1 * dVar28 - dVar20) * dVar33;
      uStack_1b0 = 0;
      uStack_190 = 0;
      uStack_170 = 0;
      local_168 = param_1[4];
      dStack_160 = param_1[5];
      local_158 = param_1[6];
      uStack_150 = 0x3ff0000000000000;
      dVar34 = *param_3;
      dVar20 = param_3[1];
      dVar43 = param_3[2];
      dVar27 = dVar20 + dVar20;
      dVar30 = dVar43 + dVar43;
      dVar28 = dVar34 * (dVar34 + dVar34);
      local_1f8 = (1.0 - (dVar28 + dVar20 * dVar27)) * dVar6;
      dVar24 = param_3[3];
      dVar31 = dVar30 * dVar24;
      dVar23 = (dVar34 + dVar34) * param_3[3];
      dVar24 = dVar27 * dVar24;
      local_208 = (dVar24 + *param_3 * dVar30) * dVar6;
      local_228 = (dVar27 * dVar34 - dVar31) * dVar38;
      dStack_200 = (dVar30 * dVar20 - dVar23) * dVar6;
      local_288 = dVar33 * dVar5;
      dStack_280 = dVar7 * dVar38;
      local_248 = (1.0 - (dVar43 * dVar30 + dVar20 * dVar27)) * dVar5;
      dStack_220 = (1.0 - (dVar43 * dVar30 + dVar28)) * dVar38;
      dStack_240 = (dVar27 * dVar34 + dVar31) * dVar5;
      local_218 = (dVar30 * dVar20 + dVar23) * dVar38;
      local_238 = (*param_3 * dVar30 - dVar24) * dVar5;
      uStack_230 = 0;
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1e8 = param_3[4];
      dStack_1e0 = param_3[5];
      local_1d8 = param_3[6];
      uStack_1d0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_148);
      dVar7 = dStack_270;
      dVar6 = local_278;
      dVar5 = dStack_280;
      dVar24 = local_288;
      local_290 = local_138;
      dVar34 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
      local_298 = local_118;
      dVar20 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
      dVar33 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100;
      uVar18 = -(ulonglong)(0.0 <= dVar34 + -9.99999993922529e-09);
      dVar38 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar34)) & uVar18);
      uVar18 = -(ulonglong)(0.0 <= dVar20 + -9.99999993922529e-09);
      dVar20 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar20)) & uVar18);
      uVar18 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
      dVar43 = (double)(~uVar18 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar18);
      auVar25._8_8_ = -(ulonglong)(0.0 <= dStack_280);
      auVar25._0_8_ = -(ulonglong)(0.0 <= local_288);
      auVar21 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
      dVar33 = (double)(~-(ulonglong)(0.0 <= local_278) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= local_278) & 0x3ff0000000000000);
      dVar34 = auVar21._0_8_;
      local_148 = local_148 * dVar38 * dVar34;
      local_140 = local_140 * dVar38 * dVar34;
      local_138 = dVar38 * local_138 * dVar34;
      dVar34 = auVar21._8_8_;
      local_118 = dVar20 * local_118 * dVar34;
      local_120 = local_120 * dVar20 * dVar34;
      local_128 = dVar34 * local_128 * dVar20;
      local_f8 = dVar43 * local_f8 * dVar33;
      local_100 = local_100 * dVar43 * dVar33;
      local_108 = dVar33 * local_108 * dVar43;
      FUN_14481fd10(&local_268,&local_148);
      dVar33 = local_258 * local_258 + local_268 * local_268;
      dVar34 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar22._0_8_ = dVar33 + dVar34;
      auVar22._8_8_ = dVar33 + dVar34;
      auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
      auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
      auVar21 = sqrtpd(auVar22,auVar22);
      auVar21 = divpd(_DAT_149934d80,auVar21);
      auVar26._0_8_ = auVar21._0_8_ * local_258;
      auVar26._8_8_ = auVar21._8_8_ * dStack_250;
      auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar19);
      param_3[8] = dVar24;
      param_3[9] = dVar5;
      param_3[10] = dVar6;
      param_3[0xb] = dVar7;
      *param_3 = (double)((ulonglong)(local_268 * auVar21._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
      param_3[1] = (double)((ulonglong)(dStack_260 * auVar21._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
      *(undefined1 (*) [16])(param_3 + 2) = auVar37;
      param_3[4] = local_e8;
      param_3[5] = dStack_e0;
      param_3[6] = local_d8;
      param_3[7] = 0.0;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045f266 FUN_14045f266 body=361 status=ok
// SIG undefined FUN_14045f266(void)

undefined4 *
FUN_14045f266(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14045f502(param_1,local_58);
  puVar6 = (undefined8 *)param_3[1];
  uVar1 = *(undefined8 *)*param_3;
  *local_50 = uVar1;
  puVar7 = local_50 + 2;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(local_50 + 0xe) = 0xffffffff;
  local_5c = local_58[0];
  uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar9 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  local_68 = param_4;
  cVar2 = FUN_14045f3d0(param_1,uVar9,local_50);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_50 + 0x74) = uVar9;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0xe) =
           *(undefined4 *)
            (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14045f7dc(param_1);
    }
  }
  *param_2 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045f3d0 FUN_14045f3d0 body=167 status=ok
// SIG undefined FUN_14045f3d0(void)

void FUN_14045f3d0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x80);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x80) == *param_3) {
          memmove(_Dst,param_3,0x70);
          FUN_14045f478(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14045f441;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x70);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14045f441:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14045f478 FUN_14045f478 body=138 status=ok
// SIG undefined FUN_14045f478(void)

void FUN_14045f478(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x80 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
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
      puVar7 = puVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14045f502 FUN_14045f502 body=473 status=ok
// SIG undefined FUN_14045f502(void)

int * FUN_14045f502(longlong *param_1,int *param_2)

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
      FUN_14045f6dc(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x80);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 14045f6dc FUN_14045f6dc body=255 status=ok
// SIG undefined FUN_14045f6dc(void)

void FUN_14045f6dc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14045f7dc FUN_14045f7dc body=691 status=ok
// SIG undefined FUN_14045f7dc(void)

void FUN_14045f7dc(longlong *param_1)

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
  int iVar15;
  longlong lVar16;
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
    if ((int)uVar10 < 1) goto LAB_14045f842;
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
LAB_14045f842:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
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
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x80;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x74 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x70 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 14045fa90 FUN_14045fa90 body=182 status=ok
// SIG undefined FUN_14045fa90(void)

undefined4 * FUN_14045fa90(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_3 + 1);
  iVar5 = param_3[3];
  uVar7 = (uint)(iVar5 == 4);
  if (iVar5 == 2) {
    uVar7 = 2;
  }
  uVar6 = 3;
  if (iVar5 != 1) {
    uVar6 = uVar7;
  }
  bVar2 = *(byte *)(param_3 + 2);
  bVar3 = *(byte *)(param_3 + 4);
  bVar4 = *(byte *)((longlong)param_3 + 0x11);
  iVar5 = *param_3;
  FUN_14045fb48();
  FUN_1448e935e(param_2,&local_38,&DAT_14ca6c518,
                ((uint)bVar2 * 2 + ((uint)bVar3 * 4 + (uint)bVar4 * 8 | uVar6) * 4 | (uint)bVar1) *
                5 + iVar5);
  FUN_14045fb48();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045fb48 FUN_14045fb48 body=289 status=ok
// SIG undefined FUN_14045fb48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14045fb48(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c5c0) {
    FUN_144b3d300(&DAT_14ca6c5c0);
    if (DAT_14ca6c5c0 == -1) {
      FUN_14045fc6a();
      FUN_145712a10();
      FUN_140db5666(&DAT_14ca6c518,0,&DAT_14ca6c4b0,L"FComposeVolumetricRTOverScenePS",
                    L"/Engine/Private/VolumetricRenderTarget.usf",L"ComposeVolumetricRTOverScenePS",
                    3,0x140,FUN_147335798,FUN_147335738,&LAB_14310c45e,&LAB_147335734,&LAB_14712ac0c
                    ,&LAB_14712ac08,0xe0,&DAT_14ca6d0a8);
      _DAT_14ca6c518 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14310c4fc);
      _Init_thread_footer(&DAT_14ca6c5c0);
    }
  }
  return &DAT_14ca6c518;
}



// FUNCTION 14045fc6a FUN_14045fc6a body=258 status=ok
// SIG undefined FUN_14045fc6a(void)

void FUN_14045fc6a(void)

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
              0x110) < DAT_14ca6d128) {
    FUN_144b3d300(&DAT_14ca6d128);
    if (DAT_14ca6d128 == -1) {
      FUN_14045fd6e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x240;
      local_58 = 699;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6d0a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310eaec);
      _Init_thread_footer(&DAT_14ca6d128);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045fd6e FUN_14045fd6e body=226 status=ok
// SIG undefined FUN_14045fd6e(void)

longlong * FUN_14045fd6e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146316072;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14045fe52 FUN_14045fe52 body=504 status=ok
// SIG undefined FUN_14045fe52(void)

undefined8 FUN_14045fe52(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  uint local_88;
  int local_80;
  code *local_78 [2];
  longlong *local_68 [2];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar6 = *(int *)(param_1 + 0x68);
  local_78[0] = *(code **)(param_1 + 0x70);
  local_68[0] = (longlong *)0x0;
  if (local_78[0] != (code *)0x0) {
    puVar3 = (undefined8 *)(param_1 + 0x90);
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x80);
    }
    (**(code **)*puVar3)(puVar3,local_68);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 == 0 | *(byte *)(param_1 + 0x5c)) == 1) {
    iVar6 = *(int *)(param_1 + 0xb0);
    FUN_140795136(local_78,param_1 + 0xc0);
  }
  if (iVar6 == 0) {
    FUN_14371cc54(param_1);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if ((*(int *)(param_1 + 0x58) < 1) && ((param_3 == '\0' || (DAT_14cb0a468 < 1)))) {
      if (*(char *)(param_1 + 0x5d) == '\x01') {
        *(undefined1 *)(param_1 + 0x5d) = 0;
      }
      else {
        if (iVar6 == param_2) {
          FUN_14371cc54(param_1);
          pcVar2 = local_78[0];
          local_90 = 0;
          local_88 = 0;
          local_98 = *(longlong **)(lVar1 + 0xe0);
          if (local_98 != (longlong *)0x0) {
            local_90 = (ulonglong)*(byte *)(lVar1 + 0xc4) * 8 + *local_98;
            local_88 = (uint)*(byte *)(lVar1 + 0xc3);
          }
          plVar4 = local_68[0];
          if (local_68[0] == (longlong *)0x0) {
            plVar4 = local_58;
          }
          local_a0 = lVar1;
          local_80 = param_2;
          uVar5 = (**(code **)(*plVar4 + 8))();
          (*pcVar2)(uVar5,&local_a0);
        }
        else {
          uVar5 = 2;
          if (iVar6 == 1) {
            if ((*(int *)(param_1 + 0x44) != 0) || (DAT_14ca9a438 != '\x01')) goto LAB_14045ff14;
            FUN_14031076c(param_1);
          }
          else if (iVar6 == 2) {
            if (*(int *)(param_1 + 0x48) != 0) goto LAB_14045ff14;
            FUN_1403104fe(param_1);
          }
          else {
            if ((iVar6 != 3) || (*(int *)(param_1 + 0x40) != 0)) goto LAB_14045ff14;
            FUN_14371c8b2(param_1);
          }
        }
        uVar5 = 3;
      }
    }
  }
LAB_14045ff14:
  if (local_78[0] != (code *)0x0) {
    plVar4 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar4 = local_58;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14046004c FUN_14046004c body=307 status=ok
// SIG undefined FUN_14046004c(void)

void FUN_14046004c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb101d0 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    lVar3 = *(longlong *)(param_1 + 0x98);
    lVar7 = 0;
    do {
      uVar6 = uStack_50;
      lVar4 = *(longlong *)(lVar3 + lVar7);
      uVar2 = *(uint *)(lVar4 + 0x100);
      if ((longlong)(int)uVar2 != 0) {
        iVar5 = (int)uStack_50;
        lVar8 = (longlong)(int)uStack_50;
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + uVar2);
        if ((uint)(uStack_50._4_4_ - iVar5) < uVar2) {
          FUN_1446f48e2(&local_58,uVar6 & 0xffffffff);
        }
        memcpy((void *)(lVar8 * 4 + local_58),*(void **)(lVar4 + 0xf8),(longlong)(int)uVar2 << 2);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
    FUN_1404601ea(param_1 + 0x98);
    if ((int)uStack_50 != 0) {
      local_68 = local_58;
      local_60 = (int)uStack_50;
      FUN_14046019a(&local_68);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14046019a FUN_14046019a body=78 status=ok
// SIG undefined FUN_14046019a(void)

void FUN_14046019a(undefined4 *param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c948aa0 != (longlong *)0x0) {
    local_18 = *param_1;
    uStack_14 = param_1[1];
    uStack_10 = param_1[2];
    uStack_c = param_1[3];
    (**(code **)(*DAT_14c948aa0 + 0x60))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404601ea FUN_1404601ea body=211 status=ok
// SIG undefined FUN_1404601ea(void)

void FUN_1404601ea(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + -1;
  if (iVar1 < 2) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (0 < (longlong)iVar1) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if ((lVar3 != 0) &&
           ((cVar4 = FUN_14018b00e(param_1,lVar3), cVar4 != '\0' ||
            (*(char *)(lVar2 + 8 + lVar5) == '\0')))) {
          FUN_14018b23a(param_1,lVar3,1);
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar5);
      if (lVar2 != 0) {
        FUN_1400020a8(lVar2);
      }
    }
    local_38 = &local_40;
    local_40 = 0;
    FUN_1449b3bee(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404602be FUN_1404602be body=1028 status=ok
// SIG undefined FUN_1404602be(void)

void FUN_1404602be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined1 local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined1 local_160;
  undefined1 local_158;
  longlong local_150;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined4 local_138;
  undefined4 local_134;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  undefined1 local_f0 [24];
  undefined **local_d8;
  longlong local_d0;
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(char *)(*param_2 + 0x4285) == '\x01') {
    local_d8 = &PTR_FUN_14a2f1c30;
    local_d0 = *param_2;
    FUN_1404606c4(local_c8);
    local_60 = 0;
    local_58 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_d8 = &PTR_FUN_14a337190;
    FUN_1449b47aa(&local_88,&local_d8);
    FUN_1449b3f6c(*param_2 + 0x3f08,param_1,local_c8);
    FUN_1449b3dbc(&local_88,param_1,local_c8);
    if (0 < (int)param_2[0x21]) {
      local_208 = 0;
      FUN_1404609f2(local_f0,DAT_14ca6dc98 != 0,param_1,L"RenderRVTPages");
      iVar1 = 1;
      if (1 < DAT_14ca6dc98) {
        iVar1 = DAT_14ca6dc98;
      }
      DAT_14ca6dc98 = iVar1 + -1;
      if (0 < (int)param_2[0x21]) {
        local_120 = (longlong)param_2 + 0xac;
        local_128 = param_2 + 0xe;
        local_130 = param_2 + 2;
        plVar3 = param_2 + 0x32;
        lVar2 = 0;
        local_118 = param_1;
        do {
          local_158 = *(undefined1 *)((longlong)param_2 + 0xa9);
          local_160 = (undefined1)plVar3[-0x10];
          local_168 = plVar3 + -0xf;
          local_1d0 = plVar3 + -10;
          local_188 = param_2[0x20];
          local_190 = *(undefined4 *)((longlong)param_2 + 0xfc);
          local_198 = (undefined4)param_2[0x1f];
          local_1a0 = param_2[0x1e];
          local_1a8 = plVar3 + -5;
          local_1b0 = param_2[0x1d];
          local_1b8 = *(undefined4 *)((longlong)param_2 + 0xe4);
          local_1c0 = (undefined4)param_2[0x1c];
          local_1c8 = param_2[0x1b];
          local_1d8 = param_2[0x1a];
          local_1e0 = *(undefined4 *)((longlong)param_2 + 0xcc);
          local_1f8 = *(undefined1 *)((longlong)param_2 + 0xab);
          local_200 = *(undefined1 *)((longlong)param_2 + 0xaa);
          local_13c = (undefined1)param_2[0x15];
          local_1e8 = (undefined4)param_2[0x19];
          local_1f0 = param_2[0x18];
          local_134 = (undefined4)param_2[1];
          local_100 = *param_2;
          local_150 = local_120;
          local_170 = local_128;
          local_178 = local_130;
          local_208 = CONCAT71(local_208._1_7_,local_13c);
          local_180 = plVar3;
          local_13d = local_1f8;
          local_13b = local_200;
          local_13a = local_160;
          local_139 = local_158;
          local_138 = local_1e0;
          local_110 = local_1b0;
          local_108 = local_1d8;
          local_f8 = local_1d0;
          FUN_1404616ef(local_118,local_100,&local_d8,local_134);
          lVar2 = lVar2 + 1;
          plVar3 = plVar3 + 0x15;
        } while (lVar2 < (int)param_2[0x21]);
      }
      FUN_140460f52(local_f0);
    }
    local_d8 = &PTR_FUN_14a2f1c30;
    FUN_14470d152(&local_88);
    FUN_140460ed8(&uStack_80,0);
    FUN_1400200e4(&local_60);
    FUN_1400e0d24(&uStack_80);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404606c4 FUN_1404606c4 body=371 status=ok
// SIG undefined FUN_1404606c4(void)

undefined8 * FUN_1404606c4(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 *_Dst;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = DAT_14ca4b2f8;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(int *)(param_1 + 5) = iVar1;
  uVar4 = iVar1 + 0x1f;
  if (uVar4 < 0x20) goto LAB_140460757;
  puVar5 = param_1 + 2;
  _Dst = puVar5;
  if (uVar4 < 0xa0) {
LAB_140460717:
    uVar4 = uVar4 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(puVar5,0,uVar4 >> 5,4);
    *(uint *)((longlong)param_1 + 0x2c) = uVar4 & 0xffffffe0;
    _Dst = (undefined8 *)param_1[4];
    if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
      _Dst = puVar5;
    }
    if (uVar4 < 0x120) goto LAB_140460717;
    uVar4 = (uVar4 >> 5) << 2;
  }
  memset(_Dst,0,(ulonglong)uVar4);
  iVar1 = *(int *)(param_1 + 5);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[4];
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)((longlong)puVar5 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)((longlong)puVar5 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
         (bVar3 & 0x1f);
  }
LAB_140460757:
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  local_29 = 0;
  FUN_1449b3d4e(param_1 + 6,&local_29,*(undefined4 *)(DAT_14ca4b320 + 0x3c));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140460838 FUN_140460838 body=307 status=ok
// SIG undefined FUN_140460838(void)

void FUN_140460838(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14046089e;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = DAT_14c841df8;
          }
          uVar3 = -uVar6 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
      }
    }
LAB_14046089e:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if (uVar6 != *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar6;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar6,1,1);
  }
  return;
}



// FUNCTION 14046096c FUN_14046096c body=133 status=ok
// SIG undefined FUN_14046096c(void)

undefined8 * FUN_14046096c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144735dd8(param_3,param_1 + 8,0);
  *param_2 = uVar1;
  uVar1 = FUN_144735dd8(param_3,param_1 + 0x20,0);
  param_2[1] = uVar1;
  uVar1 = FUN_144735dd8(param_3,param_1 + 0x118,0);
  param_2[2] = uVar1;
  uVar1 = FUN_144735dd8(param_3,param_1 + 0x208,0);
  param_2[3] = uVar1;
  uVar1 = FUN_144735dd8(param_3,param_1 + 0x220,0);
  param_2[4] = uVar1;
  return param_2;
}


