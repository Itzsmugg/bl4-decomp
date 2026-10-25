// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1409cf7e9 FUN_1409cf7e9 body=56 status=ok
// SIG undefined FUN_1409cf7e9(void)

void FUN_1409cf7e9(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = DAT_14cb1cdb8;
    uVar1 = DAT_14cb1cdb0;
    *param_1 = DAT_14cb1cda8;
    param_1[1] = uVar1;
    uVar1 = DAT_14cb1cdb0;
    param_1[3] = DAT_14cb1cda8;
    param_1[4] = uVar1;
    param_1[5] = DAT_14cb1cdb8;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1409cf822 FUN_1409cf822 body=275 status=ok
// SIG undefined FUN_1409cf822(void)

void FUN_1409cf822(longlong param_1,int param_2)

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



// FUNCTION 1409cf936 FUN_1409cf936 body=47 status=ok
// SIG undefined FUN_1409cf936(void)

undefined8 FUN_1409cf936(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_140056680(param_1,&DAT_149e01fe8);
  }
  else {
    FUN_1409cf966(param_1);
  }
  return param_1;
}



// FUNCTION 1409cf966 FUN_1409cf966 body=852 status=ok
// SIG undefined FUN_1409cf966(void)

undefined8 FUN_1409cf966(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1409cfcbc(param_2,&local_48);
  if ((local_48 == 0) || (lVar6 = FUN_14479d2ce(local_48 + 0x20), lVar6 == 0)) {
    if (param_2 != (longlong *)0x0) {
      plVar10 = param_2;
      do {
        FUN_1409cfcbc(plVar10,&local_58);
        puVar8 = local_58;
        if (local_58 != (undefined2 *)0x0) {
          puVar7 = local_58 + 0x10;
          lVar6 = FUN_14479d2ce(puVar7);
          if (lVar6 != 0) {
            lVar6 = FUN_14479d2ce(puVar7);
            if (lVar6 == 0) goto LAB_1409cfa01;
            local_70 = *(undefined8 *)(lVar6 + 0x18);
            local_78 = *(undefined8 *)(puVar8 + 4);
            (**(code **)(*param_2 + 0x1e0))(param_2,&local_68);
            puVar8 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar8 = local_68;
            }
            FUN_1400021e4(&local_78,&local_88);
            puVar7 = &DAT_149dfb77a;
            if (local_80 != 0) {
              puVar7 = local_88;
            }
            FUN_1400021e4(&local_70,&local_98);
            puVar9 = &DAT_149dfb77a;
            if (local_90 != 0) {
              puVar9 = local_98;
            }
            local_a8 = puVar8;
            FUN_140002266(param_1,L"%s [%s(%s)]",puVar9,puVar7);
            if (local_98 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1409cfa10;
          }
        }
        plVar3 = (longlong *)plVar10[0x39];
        if (plVar3 == (longlong *)0x0) {
LAB_1409cf9e3:
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_1409cf9e3;
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
          plVar10 = (longlong *)plVar10[0x38];
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
        plVar3 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      } while (plVar10 != (longlong *)0x0);
    }
    local_58 = (undefined2 *)0x0;
    plStack_50 = (longlong *)0x0;
LAB_1409cfa01:
    (**(code **)(*param_2 + 0x1d8))(param_2,param_1);
LAB_1409cfa10:
    plVar10 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
    local_88 = *(undefined2 **)(lVar6 + 0x18);
    local_98 = *(undefined2 **)(local_48 + 8);
    FUN_1400021e4(&local_98,&local_58);
    puVar8 = &DAT_149dfb77a;
    if ((int)plStack_50 != 0) {
      puVar8 = local_58;
    }
    FUN_1400021e4(&local_88,&local_68);
    puVar7 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    FUN_140002266(param_1,L"%s [%s]",puVar7,puVar8);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_40 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1409cfcbc FUN_1409cfcbc body=273 status=ok
// SIG undefined FUN_1409cfcbc(void)

undefined8 * FUN_1409cfcbc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c98da5c) && (FUN_144b3d300(&DAT_14c98da5c), DAT_14c98da5c == -1))
      {
        FUN_1446f470e(&DAT_14c98da54,L"FReflectionMetaData",1);
        _Init_thread_footer(&DAT_14c98da5c);
      }
      cVar7 = (**(code **)(*plVar5 + 8))(plVar5,&DAT_14c98da54);
      if (cVar7 != '\0') {
        uVar6 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar6;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
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
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1409cfdce FUN_1409cfdce body=28 status=ok
// SIG undefined FUN_1409cfdce(void)

undefined8 FUN_1409cfdce(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1409cfdea();
  return CONCAT71((int7)((ulonglong)*plVar1 >> 8),*plVar1 == *param_2);
}



// FUNCTION 1409cfdea FUN_1409cfdea body=109 status=ok
// SIG undefined FUN_1409cfdea(void)

undefined * FUN_1409cfdea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98da68) {
    FUN_144b3d300(&DAT_14c98da68);
    if (DAT_14c98da68 == -1) {
      FUN_1446f470e(&DAT_14c98da60,L"FSlateAttributeMetaData",1);
      _Init_thread_footer(&DAT_14c98da68);
    }
  }
  return &DAT_14c98da60;
}



// FUNCTION 1409cfe58 FUN_1409cfe58 body=504 status=ok
// SIG undefined FUN_1409cfe58(void)

undefined8 * FUN_1409cfe58(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  wchar_t *_Str;
  longlong lVar4;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 *local_258;
  undefined4 *local_250;
  ulonglong *local_248;
  char local_240;
  undefined4 local_238 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_258 = local_238;
  local_240 = '\0';
  local_248 = &local_38;
  local_250 = local_258;
  FUN_14005eb5c(param_1 + 0x3b,&local_258);
  if (local_248 <= local_250 + 1) {
    FUN_140213274(&local_258,2);
  }
  *local_250 = 0x5b0020;
  local_250 = local_250 + 1;
  (**(code **)(*param_1 + 0x1e0))(param_1,&local_268);
  if (iStack_260 == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)CONCAT44(uStack_264,local_268);
  }
  if (_Str == (wchar_t *)0x0) {
    iVar3 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    iVar3 = (int)sVar2;
  }
  lVar4 = (longlong)iVar3;
  if (local_248 <= (ulonglong *)((longlong)local_250 + lVar4 * 2)) {
    FUN_140213274(&local_258,lVar4);
  }
  puVar1 = local_250;
  if (iVar3 != 0) {
    memcpy(local_250,_Str,lVar4 * 2);
    local_250 = (undefined4 *)((longlong)puVar1 + lVar4 * 2);
  }
  if (local_248 <= (ulonglong *)((longlong)local_250 + 2)) {
    FUN_140213274(&local_258,1);
  }
  *(undefined2 *)local_250 = 0x5d;
  local_250 = (undefined4 *)((longlong)local_250 + 2);
  if (CONCAT44(uStack_264,local_268) != 0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14006620a(&local_268,local_258,
                (ulonglong)((longlong)local_250 - (longlong)local_258) >> 1 & 0xffffffff);
  if ((undefined8 *)&local_268 == param_2) {
    if (CONCAT44(uStack_264,local_268) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_268;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_264;
    *(int *)(param_2 + 1) = iStack_260;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_25c;
  }
  if (local_240 == '\x01') {
    FUN_1400020a8(local_258);
  }
  if ((local_38 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d0084 FUN_1409d0084 body=1710 status=ok
// SIG undefined FUN_1409d0084(void)

void FUN_1409d0084(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ushort uVar12;
  uint uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_678 [40];
  undefined4 local_650;
  undefined2 local_64c;
  undefined1 local_64a;
  undefined1 local_648 [8];
  longlong local_640;
  longlong local_638;
  undefined4 uStack_630;
  undefined3 uStack_62c;
  longlong local_628;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  longlong local_610;
  longlong *local_608;
  longlong lStack_600;
  undefined4 uStack_5f8;
  undefined4 local_5f4;
  undefined4 uStack_5f0;
  undefined8 uStack_5ec;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined4 local_5d0;
  float local_5cc;
  float local_5c8;
  undefined8 local_5c4;
  undefined8 uStack_5bc;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined1 local_590;
  undefined2 local_58f;
  undefined1 local_58d;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  longlong local_550;
  undefined8 local_548 [10];
  undefined4 local_4f8;
  undefined1 local_4f4;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  longlong local_4a0;
  undefined8 local_498 [10];
  undefined4 local_448;
  undefined1 local_444;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  undefined8 local_368;
  undefined8 uStack_360;
  longlong *local_358;
  undefined4 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined1 local_330;
  undefined1 local_32f;
  undefined1 local_32e;
  undefined4 local_32c;
  undefined1 local_328;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_678;
  uVar13 = *(uint *)(param_1 + 0x5dc);
  if ((uVar13 >> 10 & 1) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x1f0);
    FUN_140e9ea3a(local_648,param_1 + 0x200);
    plVar17 = (longlong *)(param_1 + 0x208);
    if ((*(byte *)(param_1 + 0x5dc) & 2) != 0) {
      plVar17 = (longlong *)(param_1 + 0x4e0);
    }
    local_640 = *plVar17;
    if (DAT_14c950c29 == 1) {
      if (local_640 == 0) {
        local_640 = 0;
      }
      else {
        FUN_1456cec3c();
        local_640 = *plVar17;
      }
    }
    local_638 = plVar17[1];
    if ((DAT_14c950c29 & 1) != 0) {
      if (local_638 == 0) {
        local_638 = 0;
      }
      else {
        FUN_1456cec3c();
        local_638 = plVar17[1];
      }
    }
    uStack_630 = (undefined4)plVar17[2];
    uStack_62c = (undefined3)((uint)*(undefined4 *)((longlong)plVar17 + 0x13) >> 8);
    local_628 = plVar17[3];
    if ((DAT_14c950c29 & 1) != 0) {
      if (local_628 == 0) {
        local_628 = 0;
      }
      else {
        FUN_1456cec3c();
        local_628 = plVar17[3];
      }
    }
    plVar2 = local_608;
    local_620 = (undefined4)plVar17[4];
    uStack_61c = *(undefined4 *)((longlong)plVar17 + 0x24);
    uStack_618 = (undefined4)plVar17[5];
    uStack_614 = *(undefined4 *)((longlong)plVar17 + 0x2c);
    local_610 = plVar17[6];
    plVar11 = (longlong *)plVar17[7];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    if (local_608 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_608 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        puVar16 = (undefined8 *)*local_608;
        local_608 = plVar11;
        (*(code *)*puVar16)(plVar2);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar11 = local_608;
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          plVar11 = local_608;
        }
      }
    }
    local_608 = plVar11;
    lStack_600 = plVar17[8];
    uStack_5ec = *(undefined8 *)((longlong)plVar17 + 0x54);
    uStack_5f0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar17 + 0x4c) >> 0x20);
    uStack_5f8 = (undefined4)plVar17[9];
    local_5f4 = (undefined4)((ulonglong)plVar17[9] >> 0x20);
    uVar12 = *(ushort *)(param_1 + 0x5dc);
    if ((uVar12 & 4) == 0) {
      lVar19 = param_1 + 0x370;
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0x540);
    }
    if (lVar19 != 0) {
      local_4d0 = *(undefined4 *)(lVar19 + 8);
      uStack_4cc = *(undefined4 *)(lVar19 + 0xc);
      uStack_4c8 = *(undefined4 *)(lVar19 + 0x10);
      uStack_4c4 = *(undefined4 *)(lVar19 + 0x14);
      local_4c0 = *(undefined4 *)(lVar19 + 0x18);
      uStack_4bc = *(undefined4 *)(lVar19 + 0x1c);
      uStack_4b8 = *(undefined4 *)(lVar19 + 0x20);
      uStack_4b4 = *(undefined4 *)(lVar19 + 0x24);
      local_4b0 = *(undefined4 *)(lVar19 + 0x28);
      uStack_4ac = *(undefined4 *)(lVar19 + 0x2c);
      uStack_4a8 = *(undefined4 *)(lVar19 + 0x30);
      uStack_4a4 = *(undefined4 *)(lVar19 + 0x34);
      local_4a0 = *(longlong *)(lVar19 + 0x38);
      if (DAT_14c950c29 == 1) {
        if (local_4a0 == 0) {
          local_4a0 = 0;
        }
        else {
          FUN_1456cec3c();
          local_4a0 = *(longlong *)(lVar19 + 0x38);
        }
      }
      puVar16 = (undefined8 *)(lVar19 + 0x40);
      puVar18 = local_498;
      for (lVar15 = 10; plVar17 = local_438, lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar18 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar18 = puVar18 + 1;
      }
      local_444 = *(undefined1 *)(lVar19 + 0x94);
      local_448 = *(undefined4 *)(lVar19 + 0x90);
      local_440 = *(undefined8 *)(lVar19 + 0x98);
      plVar11 = *(longlong **)(lVar19 + 0xa0);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (local_438 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_438 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar16 = (undefined8 *)*local_438;
          local_438 = plVar11;
          (*(code *)*puVar16)(plVar17);
          LOCK();
          piVar3 = (int *)((longlong)plVar17 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar11 = local_438;
          if (*piVar3 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            plVar11 = local_438;
          }
        }
      }
      local_438 = plVar11;
      local_430 = *(undefined8 *)(lVar19 + 0xa8);
      uVar12 = *(ushort *)(param_1 + 0x5dc);
    }
    puVar16 = (undefined8 *)(param_1 + 0x548);
    if ((uVar12 & 8) == 0) {
      puVar16 = (undefined8 *)(param_1 + 0x268);
    }
    local_5d0 = *(undefined4 *)(puVar16 + 2);
    local_5e0 = *puVar16;
    uStack_5d8 = puVar16[1];
    if ((uVar12 & 0x10) == 0) {
      local_5cc = *(float *)(param_1 + 0x27c);
      local_5c8 = *(float *)(param_1 + 0x280);
    }
    else {
      local_5cc = (float)*(double *)(param_1 + 0x560);
      local_5c8 = (float)*(double *)(param_1 + 0x568);
    }
    puVar16 = (undefined8 *)(param_1 + 0x570);
    if ((uVar12 & 0x20) == 0) {
      puVar16 = (undefined8 *)(param_1 + 0x284);
    }
    local_5c4 = *puVar16;
    uStack_5bc = puVar16[1];
    if ((uVar12 & 0x40) == 0) {
      local_368 = *(longlong **)(param_1 + 0x2a8);
      uStack_360 = *(undefined8 *)(param_1 + 0x2b0);
      local_590 = *(undefined1 *)(param_1 + 0x2b8);
      local_64a = *(undefined1 *)(param_1 + 699);
      local_64c = *(undefined2 *)(param_1 + 0x2b9);
    }
    else {
      local_368 = *(longlong **)(param_1 + 0x580);
      uStack_360 = *(undefined8 *)(param_1 + 0x588);
      local_590 = 0;
    }
    local_5a0 = (undefined4)local_368;
    uStack_59c = local_368._4_4_;
    uStack_598 = (undefined4)uStack_360;
    uStack_594 = uStack_360._4_4_;
    local_58f = local_64c;
    local_58d = local_64a;
    if ((char)uVar12 < '\0') {
      lVar19 = *(longlong *)(param_1 + 0x590);
    }
    else {
      lVar19 = param_1 + 0x2c0;
    }
    if (lVar19 != 0) {
      local_580 = *(undefined4 *)(lVar19 + 8);
      uStack_57c = *(undefined4 *)(lVar19 + 0xc);
      uStack_578 = *(undefined4 *)(lVar19 + 0x10);
      uStack_574 = *(undefined4 *)(lVar19 + 0x14);
      local_570 = *(undefined4 *)(lVar19 + 0x18);
      uStack_56c = *(undefined4 *)(lVar19 + 0x1c);
      uStack_568 = *(undefined4 *)(lVar19 + 0x20);
      uStack_564 = *(undefined4 *)(lVar19 + 0x24);
      local_560 = *(undefined4 *)(lVar19 + 0x28);
      uStack_55c = *(undefined4 *)(lVar19 + 0x2c);
      uStack_558 = *(undefined4 *)(lVar19 + 0x30);
      uStack_554 = *(undefined4 *)(lVar19 + 0x34);
      local_550 = *(longlong *)(lVar19 + 0x38);
      if (DAT_14c950c29 == 1) {
        if (local_550 == 0) {
          local_550 = 0;
        }
        else {
          FUN_1456cec3c();
          local_550 = *(longlong *)(lVar19 + 0x38);
        }
      }
      puVar16 = (undefined8 *)(lVar19 + 0x40);
      puVar18 = local_548;
      for (lVar15 = 10; plVar17 = local_4e8, lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar18 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar18 = puVar18 + 1;
      }
      local_4f4 = *(undefined1 *)(lVar19 + 0x94);
      local_4f8 = *(undefined4 *)(lVar19 + 0x90);
      local_4f0 = *(undefined8 *)(lVar19 + 0x98);
      plVar11 = *(longlong **)(lVar19 + 0xa0);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (local_4e8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_4e8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar16 = (undefined8 *)*local_4e8;
          local_4e8 = plVar11;
          (*(code *)*puVar16)(plVar17);
          LOCK();
          piVar3 = (int *)((longlong)plVar17 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          plVar11 = local_4e8;
          if (*piVar3 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            plVar11 = local_4e8;
          }
        }
      }
      local_4e8 = plVar11;
      local_4e0 = *(undefined8 *)(lVar19 + 0xa8);
    }
    lVar19 = *plVar10;
    FUN_140e9ea3a(&local_368,local_648);
    FUN_140a5e6b8(lVar19 + 0x160,&local_368);
    FUN_140e9e952(&local_368);
    (**(code **)(*(longlong *)plVar10[2] + 0x20))();
    FUN_140e9e952(local_648);
    uVar13 = (uint)*(ushort *)(param_1 + 0x5dc);
  }
  if ((uVar13 & 0xc00) != 0) {
    local_650 = *(undefined4 *)(param_1 + 0x5c0);
    uVar6 = *(undefined1 *)(param_1 + 0x5c8);
    puVar14 = (undefined1 *)(param_1 + 0x5ae);
    if ((uVar13 >> 9 & 1) == 0) {
      puVar14 = (undefined1 *)(param_1 + 0x4d0);
    }
    uVar4 = *(undefined4 *)(param_1 + 0x5c4);
    uVar7 = *puVar14;
    uVar8 = *(undefined1 *)(param_1 + 0x5ad);
    uVar9 = *(undefined1 *)(param_1 + 0x5ac);
    uVar5 = *(undefined4 *)(param_1 + 0x5a8);
    plVar10 = *(longlong **)(param_1 + 0x1e0);
    local_368 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    uStack_360 = CONCAT44(uStack_360._4_4_,*(undefined4 *)(param_1 + 0x1e8));
    plVar17 = *(longlong **)(param_1 + 0x598);
    local_358 = plVar17;
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 8))(plVar17);
    }
    local_350 = *(undefined4 *)(param_1 + 0x5a0);
    local_348 = *(undefined4 *)(param_1 + 0x5b0);
    uStack_344 = *(undefined4 *)(param_1 + 0x5b4);
    uStack_340 = *(undefined4 *)(param_1 + 0x5b8);
    uStack_33c = *(undefined4 *)(param_1 + 0x5bc);
    local_32c = local_650;
    local_338 = uVar5;
    local_334 = uVar4;
    local_330 = uVar6;
    local_32f = uVar8;
    local_32e = uVar7;
    local_328 = uVar9;
    FUN_1409d0734(*(undefined8 *)(param_1 + 0x1f0),local_648,&local_368,param_2);
    *(byte *)(param_1 + 0x5dd) = *(byte *)(param_1 + 0x5dd) & 0xf3;
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_678) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d0734 FUN_1409d0734 body=2176 status=ok
// SIG undefined FUN_1409d0734(void)

double * FUN_1409d0734(longlong *param_1,double *param_2,longlong *param_3)

{
  longlong **pplVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  undefined2 *puVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  int local_7c;
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(int *)(param_1 + 7) = (int)param_3[6];
  *(char *)((longlong)param_1 + 0x3c) = (char)param_3[8];
  cVar10 = *(char *)(*param_1 + 0x9d);
  FUN_1409d1068();
  fVar4 = *(float *)(param_1 + 7);
  fVar21 = fVar4;
  if ((((*(char *)((longlong)param_1 + 0x3c) == '\x01') &&
       (fVar5 = *(float *)(param_1 + 6), 1.0 <= fVar5)) && (fVar21 = fVar5, 1.0 <= fVar4)) &&
     (fVar21 = fVar4, fVar5 <= fVar4)) {
    fVar21 = fVar5;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar21) {
    fVar4 = fVar21;
  }
  FUN_1409d0fb6(*param_1,fVar4);
  lVar13 = *param_1;
  if (*(char *)(lVar13 + 0x9c) != *(char *)((longlong)param_3 + 0x39)) {
    *(char *)(lVar13 + 0x9c) = *(char *)((longlong)param_3 + 0x39);
    *(byte *)(lVar13 + 0x90) = *(byte *)(lVar13 + 0x90) | 1;
    lVar13 = *param_1;
  }
  if (*(char *)(lVar13 + 0x9d) != *(char *)((longlong)param_3 + 0x3a)) {
    *(char *)(lVar13 + 0x9d) = *(char *)((longlong)param_3 + 0x3a);
    *(byte *)(lVar13 + 0x90) = *(byte *)(lVar13 + 0x90) | 1;
    lVar13 = *param_1;
  }
  FUN_1409d1012(lVar13,param_3 + 4);
  lVar13 = *param_1;
  if (*(int *)(lVar13 + 0xb0) != *(int *)((longlong)param_3 + 0x3c)) {
    *(int *)(lVar13 + 0xb0) = *(int *)((longlong)param_3 + 0x3c);
    *(byte *)(lVar13 + 0x90) = *(byte *)(lVar13 + 0x90) | 1;
    lVar13 = *param_1;
  }
  fVar4 = *(float *)((longlong)param_3 + 0x34);
  if ((*(float *)(lVar13 + 0xb4) != fVar4) || (NAN(*(float *)(lVar13 + 0xb4)) || NAN(fVar4))) {
    *(float *)(lVar13 + 0xb4) = fVar4;
    *(byte *)(lVar13 + 0x90) = *(byte *)(lVar13 + 0x90) | 1;
    lVar13 = *param_1;
  }
  if (*(char *)(lVar13 + 0xb8) != (char)param_3[7]) {
    *(char *)(lVar13 + 0xb8) = (char)param_3[7];
    *(byte *)(lVar13 + 0x90) = *(byte *)(lVar13 + 0x90) | 1;
    lVar13 = *param_1;
  }
  if (cVar10 != *(char *)(lVar13 + 0x9d)) {
    (**(code **)(*(longlong *)param_1[2] + 0x20))();
  }
  pplVar1 = (longlong **)(param_1 + 8);
  cVar10 = FUN_14010cac8(pplVar1,param_3);
  if (cVar10 == '\0') {
    cVar10 = FUN_1409d1136(pplVar1,param_3);
    FUN_1409d10d4(&local_68,param_3);
    if (pplVar1 != &local_68) {
      plVar14 = *pplVar1;
      *pplVar1 = local_68;
      local_68 = (longlong *)0x0;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))();
      }
      uVar8 = param_1[9];
      param_1[9] = uStack_60;
      uStack_60 = 0;
      if (uVar8 != 0) {
        local_50 = uVar8;
        FUN_1447a2442();
      }
    }
    param_1[10] = local_58;
    if (uStack_60 != 0) {
      local_50 = uStack_60;
      FUN_1447a2442();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (cVar10 != '\0') goto LAB_1409d082f;
  }
  else {
LAB_1409d082f:
    cVar10 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
    if (cVar10 == '\0') goto LAB_1409d0841;
  }
  plVar14 = (longlong *)*param_3;
  if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
    plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
  }
  FUN_1447a1fc0(plVar14);
  plVar14 = (longlong *)*param_3;
  pcVar7 = *(code **)(*plVar14 + 0x28);
  if (pcVar7 == FUN_14482841c) {
    plVar16 = plVar14 + 3;
    if (plVar14[5] != 0) {
      plVar16 = (longlong *)(plVar14[5] + 8);
    }
  }
  else if (pcVar7 == (code *)&LAB_14010c34c) {
    plVar16 = plVar14 + 2;
  }
  else {
    plVar16 = (longlong *)(*pcVar7)(plVar14);
  }
  FUN_1409d1288(param_1,plVar16);
LAB_1409d0841:
  param_3 = param_3 + 2;
  pplVar1 = (longlong **)(param_1 + 0xb);
  cVar10 = FUN_14010cac8(pplVar1,param_3);
  if (cVar10 == '\0') {
    cVar10 = FUN_1409d1136(pplVar1,param_3);
    if (cVar10 == '\0') {
      plVar14 = (longlong *)*param_3;
      if (*(code **)(*plVar14 + 0x50) != FUN_144828418) {
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x50))();
      }
      FUN_1447a1fc0(plVar14);
      plVar14 = (longlong *)*param_3;
      pcVar7 = *(code **)(*plVar14 + 0x28);
      if (pcVar7 == FUN_14482841c) {
        plVar16 = plVar14 + 3;
        if (plVar14[5] != 0) {
          plVar16 = (longlong *)(plVar14[5] + 8);
        }
      }
      else if (pcVar7 == (code *)&LAB_14010c34c) {
        plVar16 = plVar14 + 2;
      }
      else {
        plVar16 = (longlong *)(*pcVar7)();
      }
      iVar11 = (int)plVar16[1];
      iVar19 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar19 = 0;
      }
      lVar13 = *param_1;
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      if ((iVar11 - 2U < 0x7fffffff) && (iVar11 = *(int *)(lVar13 + 0x28), 0 < iVar11)) {
        local_88 = 0;
        do {
          local_78 = *(undefined8 **)(lVar13 + 0x20);
          local_7c = *(int *)(local_78[local_88 * 0xe] + 8) + -1;
          if (*(int *)(local_78[local_88 * 0xe] + 8) == 0) {
            local_7c = 0;
          }
          if (0 < local_7c) {
            local_78 = local_78 + local_88 * 0xe;
            local_90 = 0;
            do {
              iVar11 = (int)plVar16[1];
              iVar9 = iVar11 + -1;
              if (iVar11 == 0) {
                iVar9 = 0;
              }
              puVar18 = &DAT_149dfb77a;
              if (iVar11 != 0) {
                puVar18 = (undefined2 *)*plVar16;
              }
              local_b0 = (undefined4)local_90;
              local_b8 = 0;
              iVar11 = FUN_1447ee042(*local_78,puVar18,iVar9,1);
              if (iVar11 == -1) break;
              uVar17 = iVar11 + iVar19;
              local_90 = (ulonglong)uVar17;
              local_98 = (ulonglong)(int)uStack_60;
              if ((((longlong)local_98 < 1) || (local_88 != *(uint *)(local_68 + local_98 * 4 + -4))
                  ) || ((int)local_68[local_98 * 4 + -3] != iVar11)) {
                local_70 = param_1[4];
                local_a0 = (longlong *)param_1[5];
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                  local_98 = uStack_60 & 0xffffffff;
                }
                uVar12 = (int)local_98 + 1;
                uStack_60 = CONCAT44(uStack_60._4_4_,uVar12);
                if (uStack_60._4_4_ < uVar12) {
                  FUN_146a75516(&local_68,local_98);
                }
                plVar14 = local_a0;
                lVar15 = (longlong)(int)local_98;
                *(int *)(local_68 + lVar15 * 4) = (int)local_88;
                *(ulonglong *)((longlong)local_68 + lVar15 * 0x20 + 4) = CONCAT44(uVar17,iVar11);
                local_68[lVar15 * 4 + 2] = local_70;
                local_68[lVar15 * 4 + 3] = (longlong)local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = local_a0 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar14 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*local_a0 + 0x10))();
                    }
                  }
                  goto LAB_1409d0e9e;
                }
              }
              else {
                lVar15 = param_1[4];
                local_a0 = (longlong *)param_1[5];
                if (local_a0 == (longlong *)0x0) {
                  uVar6 = *(undefined4 *)
                           ((longlong)local_68 + (ulonglong)((int)uStack_60 - 1) * 0x20 + 4);
                }
                else {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                  uVar6 = *(undefined4 *)
                           ((longlong)local_68 + (longlong)((int)uStack_60 + -1) * 0x20 + 4);
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                  local_98 = uStack_60 & 0xffffffff;
                }
                lVar20 = (longlong)(int)local_98;
                *(int *)(local_68 + lVar20 * 4 + -4) = (int)local_88;
                *(ulonglong *)((longlong)local_68 + lVar20 * 0x20 + -0x1c) = CONCAT44(uVar17,uVar6);
                plVar14 = (longlong *)local_68[lVar20 * 4 + -1];
                local_68[lVar20 * 4 + -2] = lVar15;
                local_68[lVar20 * 4 + -1] = (longlong)local_a0;
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar14 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
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
                if (local_a0 != (longlong *)0x0) {
LAB_1409d0e9e:
                  plVar2 = local_a0;
                  LOCK();
                  plVar14 = local_a0 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar2 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*local_a0 + 0x10))();
                    }
                  }
                  plVar2 = local_a0;
                  LOCK();
                  plVar14 = local_a0 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar2 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*local_a0 + 0x10))();
                    }
                  }
                }
              }
            } while ((int)local_90 < local_7c);
            iVar11 = *(int *)(lVar13 + 0x28);
          }
          local_88 = local_88 + 1;
        } while ((longlong)local_88 < (longlong)iVar11);
        lVar13 = *param_1;
      }
      FUN_1409d11ca(lVar13,&local_68);
      FUN_1410f0e0e(local_68,uStack_60 & 0xffffffff);
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1409d10d4(&local_68,param_3);
    if (pplVar1 != &local_68) {
      plVar14 = *pplVar1;
      *pplVar1 = local_68;
      local_68 = (longlong *)0x0;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))();
      }
      uVar8 = param_1[0xc];
      param_1[0xc] = uStack_60;
      uStack_60 = 0;
      if (uVar8 != 0) {
        local_50 = uVar8;
        FUN_1447a2442();
      }
    }
    param_1[0xd] = local_58;
    if (uStack_60 != 0) {
      local_50 = uStack_60;
      FUN_1447a2442();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  (**(code **)(*(longlong *)*param_1 + 8))();
  lVar13 = *param_1;
  fVar4 = *(float *)(lVar13 + 0xc4);
  dVar22 = (double)(1.0 / *(float *)(lVar13 + 0x94));
  *param_2 = (double)*(float *)(lVar13 + 0xbc) * dVar22;
  param_2[1] = (double)fVar4 * dVar22;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1409d0fb6 FUN_1409d0fb6 body=91 status=ok
// SIG undefined FUN_1409d0fb6(void)

void FUN_1409d0fb6(longlong param_1,float param_2)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  fVar2 = *(float *)(param_1 + 0x98);
  if ((fVar2 != param_2) || (NAN(fVar2) || NAN(param_2))) {
    *(float *)(param_1 + 0x98) = param_2;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
    if ((param_2 <= 0.0 == 0.0 < fVar2) && (iVar3 = *(int *)(param_1 + 0x28), (longlong)iVar3 != 0))
    {
      lVar4 = *(longlong *)(param_1 + 0x20);
      lVar5 = 0;
      do {
        pbVar1 = (byte *)(lVar4 + 0x68 + lVar5);
        *pbVar1 = *pbVar1 | 1;
        lVar5 = lVar5 + 0x70;
      } while ((longlong)iVar3 * 0x70 - lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 1409d1012 FUN_1409d1012 body=86 status=ok
// SIG undefined FUN_1409d1012(void)

void FUN_1409d1012(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  
  if (((((*(float *)(param_1 + 0xa0) != *param_2) ||
        (NAN(*(float *)(param_1 + 0xa0)) || NAN(*param_2))) ||
       (*(float *)(param_1 + 0xa8) != param_2[2])) ||
      ((NAN(*(float *)(param_1 + 0xa8)) || NAN(param_2[2]) ||
       (*(float *)(param_1 + 0xa4) != param_2[1])))) ||
     ((NAN(*(float *)(param_1 + 0xa4)) || NAN(param_2[1]) ||
      ((*(float *)(param_1 + 0xac) != param_2[3] ||
       (NAN(*(float *)(param_1 + 0xac)) || NAN(param_2[3]))))))) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  }
  return;
}



// FUNCTION 1409d1068 FUN_1409d1068 body=107 status=ok
// SIG undefined FUN_1409d1068(void)

void FUN_1409d1068(longlong param_1,float param_2)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = _isnan((double)param_2);
  if (iVar3 != 0) {
    param_2 = 0.0;
  }
  if ((*(float *)(param_1 + 0x94) != param_2) || (NAN(*(float *)(param_1 + 0x94)) || NAN(param_2)))
  {
    *(float *)(param_1 + 0x94) = param_2;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
    iVar3 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar3 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(lVar2 + 0x68 + lVar4);
        *pbVar1 = *pbVar1 | 5;
        lVar4 = lVar4 + 0x70;
      } while ((longlong)iVar3 * 0x70 - lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1409d10d4 FUN_1409d10d4 body=86 status=ok
// SIG undefined FUN_1409d10d4(void)

longlong * FUN_1409d10d4(longlong *param_1,longlong *param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 8))();
    plVar2 = (longlong *)*param_2;
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,param_1 + 1);
  uVar1 = FUN_14010cbb8(param_2);
  *(undefined2 *)(param_1 + 2) = uVar1;
  uVar1 = FUN_14010cc04(param_2);
  *(undefined2 *)((longlong)param_1 + 0x12) = uVar1;
  *(int *)((longlong)param_1 + 0x14) = (int)param_2[1];
  return param_1;
}



// FUNCTION 1409d1136 FUN_1409d1136 body=147 status=ok
// SIG undefined FUN_1409d1136(void)

undefined8 FUN_1409d1136(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 extraout_var;
  bool bVar10;
  
  uVar6 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar6);
  if (((*param_1 != 0) &&
      (lVar2 = param_1[2], sVar3 = FUN_14010cbb8(param_2), (short)lVar2 == sVar3)) &&
     (sVar3 = *(short *)((longlong)param_1 + 0x12), sVar4 = FUN_14010cc04(param_2), sVar3 == sVar4))
  {
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x28))();
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))();
    iVar5 = *(int *)(puVar7 + 1);
    iVar1 = *(int *)(puVar8 + 1);
    if (iVar5 == iVar1) {
      if (iVar5 < 2) {
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      iVar5 = wcscmp((wchar_t *)*puVar7,(wchar_t *)*puVar8);
      uVar9 = CONCAT44(extraout_var,iVar5);
      bVar10 = iVar5 == 0;
    }
    else {
      uVar9 = (ulonglong)(uint)(iVar1 + iVar5);
      bVar10 = iVar1 + iVar5 == 1;
    }
    return CONCAT71((int7)(uVar9 >> 8),bVar10);
  }
  return 0;
}



// FUNCTION 1409d11ca FUN_1409d11ca body=73 status=ok
// SIG undefined FUN_1409d11ca(void)

void FUN_1409d11ca(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1409d1214();
  if (0 < (int)param_2[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_146a5039e(param_1,*param_2 + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1409d1214 FUN_1409d1214 body=115 status=ok
// SIG undefined FUN_1409d1214(void)

void FUN_1409d1214(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar3 = 0x48;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar1 + 8 + lVar3) != 0) {
        FUN_1410f0e0e(*(undefined8 *)(lVar1 + lVar3));
        *(undefined4 *)(lVar1 + 8 + lVar3) = 0;
        if (*(int *)(lVar1 + 0xc + lVar3) != 0) {
          FUN_146a754b6(lVar1 + lVar3,0);
        }
        *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
        iVar2 = *(int *)(param_1 + 0x28);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x70;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 1409d1288 FUN_1409d1288 body=171 status=ok
// SIG undefined FUN_1409d1288(void)

void FUN_1409d1288(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)param_1[2] + 0x28))();
  FUN_1409d1334(*param_1);
  FUN_1410f0110(*param_1);
  FUN_1409d1214(*param_1);
  (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],param_2,*param_1);
  plVar1 = (longlong *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  lVar2 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar2 != 0) {
    local_20 = lVar2;
    FUN_1447a2442();
  }
  param_1[0xd] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d1334 FUN_1409d1334 body=67 status=ok
// SIG undefined FUN_1409d1334(void)

void FUN_1409d1334(longlong param_1)

{
  FUN_140f20e83(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1410f106e(param_1 + 0x20,0);
  }
  FUN_1409d1378(param_1);
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 1;
  return;
}



// FUNCTION 1409d1378 FUN_1409d1378 body=73 status=ok
// SIG undefined FUN_1409d1378(void)

void FUN_1409d1378(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  FUN_1409d13c1(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1409d1430(param_1 + 0x30,0);
  }
  FUN_14068ded2(param_1 + 0x40,0);
  return;
}



// FUNCTION 1409d13c1 FUN_1409d13c1 body=110 status=ok
// SIG undefined FUN_1409d13c1(void)

void FUN_1409d13c1(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140868060(param_1[4],(int)param_1[5]);
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    FUN_140868060(param_1[2],(int)param_1[3]);
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    FUN_1408680ad(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xd;
  }
  return;
}



// FUNCTION 1409d1430 FUN_1409d1430 body=109 status=ok
// SIG undefined FUN_1409d1430(void)

void FUN_1409d1430(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 1409d149e thunk_FUN_1409d14a4 body=5 status=ok
// SIG undefined thunk_FUN_1409d14a4(void)

ulonglong thunk_FUN_1409d14a4(int *param_1)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if ((longlong)*param_1 != 0) {
    cVar1 = FUN_1409d14fc(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      FUN_14020a6cc(param_1,1);
      FUN_1409d1656(param_1);
      goto LAB_1409d14ef;
    }
  }
  uVar2 = 0;
LAB_1409d14ef:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1409d14a4 FUN_1409d14a4 body=88 status=ok
// SIG undefined FUN_1409d14a4(void)

ulonglong FUN_1409d14a4(int *param_1)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if ((longlong)*param_1 != 0) {
    cVar1 = FUN_1409d14fc(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      FUN_14020a6cc(param_1,1);
      FUN_1409d1656(param_1);
      goto LAB_1409d14ef;
    }
  }
  uVar2 = 0;
LAB_1409d14ef:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1409d14fc FUN_1409d14fc body=184 status=ok
// SIG undefined FUN_1409d14fc(void)

undefined8 FUN_1409d14fc(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar5 = param_1;
  }
  iVar4 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar4 != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(lVar5 + 8 + lVar2) == *(int *)(param_2 + 4)) {
        uVar3 = (int)(lVar2 >> 2) * -0x55555555;
        if ((int)uVar3 < 0) {
          return 0;
        }
        if (iVar4 <= (int)uVar3) {
          return 0;
        }
        iVar1 = ~uVar3 + iVar4;
        if (iVar1 != 0) {
          iVar6 = 1;
          if (iVar1 < 1) {
            iVar6 = iVar1;
          }
          memmove((void *)(lVar5 + (ulonglong)(uVar3 & 0x7fffffff) * 0xc),
                  (void *)(lVar5 + (ulonglong)(uint)(iVar4 - iVar6) * 0xc),(longlong)iVar6 * 0xc);
          iVar4 = *(int *)(param_1 + 0x68);
        }
        *(int *)(param_1 + 0x68) = iVar4 + -1;
        FUN_1409d15b4(param_1);
        return 1;
      }
      lVar2 = lVar2 + 0xc;
    } while ((longlong)iVar4 * 0xc != lVar2);
  }
  return 0;
}



// FUNCTION 1409d15b4 FUN_1409d15b4 body=162 status=ok
// SIG undefined FUN_1409d15b4(void)

void FUN_1409d15b4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x68);
  uVar1 = *(uint *)(param_1 + 0x6c);
  if ((ulonglong)uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if ((ulonglong)((longlong)iVar3 * 0xc) < 0x4000) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 * 0xc,0);
      uVar4 = (uint)(uVar2 / 0xc);
      uVar1 = *(uint *)(param_1 + 0x6c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x6c) = uVar4;
  FUN_1402a4ac6(param_1,*(undefined4 *)(param_1 + 0x68));
  return;
}



// FUNCTION 1409d1656 FUN_1409d1656 body=224 status=ok
// SIG undefined FUN_1409d1656(void)

void FUN_1409d1656(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = DAT_14c9a3d60;
  iVar1 = *param_1;
  if (((longlong)iVar1 != 0) &&
     (lVar4 = (longlong)iVar1 * 0x88, *(int *)(DAT_14c9a3d60 + -0x20 + lVar4) == 0)) {
    lVar4 = lVar4 + DAT_14c9a3d60;
    lVar3 = (longlong)*(int *)(lVar4 + -0x10);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + -0x18);
      lVar5 = 0;
      do {
        if ((*(int *)(lVar4 + 8 + lVar5) != 0) && (*(longlong *)(lVar4 + lVar5) != 0)) {
          return;
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar3 * 0x10 != lVar5);
    }
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      lVar3 = (longlong)(iVar1 + -1) * 0x88;
      lVar4 = DAT_14c9a3d60 + lVar3;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar3),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar3));
      if (*(longlong *)(lVar2 + 0x70 + lVar3) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar4 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar1 + -1,1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1409d173c FUN_1409d173c body=57 status=ok
// SIG undefined FUN_1409d173c(void)

void FUN_1409d173c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21e28 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21e28 = FUN_140002ddd(FUN_1464360f8,uVar1,L"GbxBrainTask_Selector");
  }
  return;
}



// FUNCTION 1409d1776 FUN_1409d1776 body=743 status=ok
// SIG undefined FUN_1409d1776(void)

void FUN_1409d1776(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (1 < DAT_14c760db4) {
    if ((*(longlong *)(param_1 + 0x20) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x20) + 0x84d) != '\x01')) {
      local_58 = 0;
      uStack_50 = 0;
      iVar1 = *(int *)(param_1 + 0x650);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x648);
        lVar5 = 0;
        do {
          uVar3 = uStack_50;
          if (*(longlong *)(lVar2 + lVar5) != 0) {
            lVar6 = (longlong)(int)(uint)uStack_50;
            uVar4 = (uint)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
            if (uStack_50._4_4_ < uVar4) {
              FUN_1409d1a76(&local_58,uVar3 & 0xffffffff);
            }
            lVar7 = *(longlong *)(lVar2 + lVar5);
            *(longlong *)(local_58 + lVar6 * 8) = lVar7;
            if ((lVar7 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
          }
          uVar3 = uStack_50;
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
        if ((uint)uStack_50 != 0) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + (uint)uStack_50;
          if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < (uint)uStack_50) {
            FUN_144769b64(param_2,iVar1);
          }
          FUN_1409d1a5e((longlong)iVar1 * 8 + *param_2,local_58,uVar3 & 0xffffffff);
          uStack_50 = uStack_50 & 0xffffffff00000000;
        }
      }
    }
    else {
      local_58 = 0;
      uStack_50 = 0;
      iVar1 = *(int *)(param_1 + 0x660);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x658);
        lVar5 = 0;
        do {
          uVar3 = uStack_50;
          lVar6 = *(longlong *)(lVar2 + lVar5);
          if (lVar6 != 0) {
            lVar7 = (longlong)(int)(uint)uStack_50;
            uVar4 = (uint)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
            if (uStack_50._4_4_ < uVar4) {
              FUN_1457d5db8(&local_58,uVar3 & 0xffffffff);
              lVar6 = *(longlong *)(lVar2 + lVar5);
            }
            *(longlong *)(local_58 + lVar7 * 8) = lVar6;
            if ((DAT_14c950c29 == 1) && (lVar6 != 0)) {
              FUN_1456cec3c();
            }
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
      }
      FUN_14746bb4c(param_2,&local_58);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x7c8);
  if ((longlong)iVar1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    lVar2 = *(longlong *)(param_1 + 0x7c0);
    lVar5 = 0;
    do {
      uVar3 = uStack_50;
      lVar6 = *(longlong *)(lVar2 + lVar5);
      if (lVar6 != 0) {
        lVar7 = (longlong)(int)(uint)uStack_50;
        uVar4 = (uint)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_140655806(&local_58,uVar3 & 0xffffffff);
          lVar6 = *(longlong *)(lVar2 + lVar5);
        }
        *(longlong *)(local_58 + lVar7 * 8) = lVar6;
        if ((DAT_14c950c29 == 1) && (lVar6 != 0)) {
          FUN_1456cec3c();
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
    FUN_14746bbaa(param_2,&local_58);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x638);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 0x640);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d1a5e FUN_1409d1a5e body=23 status=ok
// SIG undefined FUN_1409d1a5e(void)

void FUN_1409d1a5e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 1409d1a76 FUN_1409d1a76 body=353 status=ok
// SIG undefined FUN_1409d1a76(void)

void FUN_1409d1a76(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409d1afb;
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
LAB_1409d1afb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1409d1bd8 FUN_1409d1bd8 body=204 status=ok
// SIG undefined FUN_1409d1bd8(void)

void FUN_1409d1bd8(longlong param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  longlong *plVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48;
  ulonglong local_40;
  float fVar2;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + -0xf30) == '\x03') {
    fVar1 = *(float *)(param_2 + 0x84);
    fVar2 = *(float *)(param_2 + 0x84);
    local_48 = *(undefined8 *)(param_2 + 0x68);
    FUN_1401533ba(local_54,&local_48,1);
    FUN_140bfca4e(param_1 + 0x2138,local_54,param_2 + 0x78,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),fVar2 <= 0.0 && fVar1 != 0.0) &
                  0xffffffff);
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3);
  }
  FUN_1409d1ca6(param_1 + 0x3e0,param_2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d1ca6 FUN_1409d1ca6 body=195 status=ok
// SIG undefined FUN_1409d1ca6(void)

void FUN_1409d1ca6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar7 + *(int *)(param_1 + 0x38);
    bVar4 = false;
    do {
      lVar2 = *plVar7;
      if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
        plVar6 = *(longlong **)(lVar2 + 0x70);
        lVar5 = (longlong)*(int *)(lVar2 + 0x78) * 0x28;
        do {
          lVar3 = *plVar6;
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) == *(longlong *)(param_2 + 0x68))) {
            if (*(longlong *)(lVar3 + 0x24) == 0) {
              bVar4 = 0 < *(int *)(param_2 + 0x80);
            }
            else {
              if (*(int *)(param_2 + 0x80) != (int)plVar6[4]) goto LAB_1409d1cf8;
              bVar4 = true;
            }
            FUN_1409d1d6a(lVar2,plVar6,bVar4);
            bVar4 = true;
          }
LAB_1409d1cf8:
          plVar6 = plVar6 + 5;
          lVar5 = lVar5 + -0x28;
        } while (lVar5 != 0);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    if (bVar4) {
      FUN_1409d1fc8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409d1d6a FUN_1409d1d6a body=552 status=ok
// SIG undefined FUN_1409d1d6a(void)

void FUN_1409d1d6a(longlong param_1,longlong *param_2,byte param_3)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  undefined1 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    *(undefined1 *)((longlong)param_2 + 0x19) = 0;
    goto LAB_1409d1f59;
  }
  if (*(byte *)((longlong)param_2 + 0x19) == param_3) goto LAB_1409d1f59;
  if (((param_3 == 0) && (*(longlong *)(lVar4 + 0x24) != 0)) && (*(char *)(lVar4 + 0x2c) == '\x01'))
  {
    if ((longlong)*(int *)(param_1 + 0x78) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x70);
      lVar6 = (longlong)*(int *)(param_1 + 0x78) * 0x28;
      do {
        if (((plVar3 != param_2) && (*(char *)((longlong)plVar3 + 0x19) != '\0')) &&
           ((*plVar3 != 0 && (*(longlong *)(*plVar3 + 0x24) == *(longlong *)(lVar4 + 0x24))))) {
          if (plVar3 != (longlong *)0x0) goto LAB_1409d1dbe;
          break;
        }
        plVar3 = plVar3 + 5;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
    goto LAB_1409d1f59;
  }
LAB_1409d1dbe:
  *(byte *)((longlong)param_2 + 0x19) = param_3;
  if (((*(longlong *)(lVar4 + 8) != 0) && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) &&
     ((*(int *)(param_1 + 0x5c) != 0 &&
      ((((uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
        (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)) &&
       ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x5c) &&
        ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))))) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    if ((0 < (int)*(uint *)(lVar4 + 8)) &&
       (*(uint *)((longlong)param_2 + 0x1c) < *(uint *)(lVar4 + 8))) {
      if (*(longlong *)(*param_2 + 0x24) == 0) {
        local_44 = 0;
        uVar5 = (ulonglong)param_3;
      }
      else {
        if (param_3 == 0) goto LAB_1409d1e74;
        local_4c = 0;
        uVar5 = (ulonglong)*(uint *)(param_2 + 4);
      }
      FUN_14063ffb4(lVar4,*(uint *)((longlong)param_2 + 0x1c),uVar5);
    }
  }
LAB_1409d1e74:
  if (((*(longlong *)(*param_2 + 0x24) != 0) && (*(char *)((longlong)param_2 + 0x19) == '\x01')) &&
     ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x70);
    lVar4 = (longlong)*(int *)(param_1 + 0x78) * 0x28;
    do {
      if (((plVar3 != param_2) && (*plVar3 != 0)) &&
         (*(longlong *)(*plVar3 + 0x24) == *(longlong *)(*param_2 + 0x24))) {
        FUN_1409d1d6a(param_1,plVar3,0);
      }
      plVar3 = plVar3 + 5;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  if (*(char *)((longlong)param_2 + ((ulonglong)param_3 ^ 0x1b)) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if (((*(longlong *)(param_1 + 0x50) != 0) &&
      (cVar2 = FUN_144729dda(param_1 + 0x48), cVar2 != '\0')) &&
     (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
LAB_1409d1f59:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d1fc8 FUN_1409d1fc8 body=689 status=ok
// SIG undefined FUN_1409d1fc8(void)

void FUN_1409d1fc8(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(param_1 + 0x60);
  if ((((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
      ((*(byte *)(lVar3 + 0x348) & 2) == 0)) &&
     (((*(longlong *)(param_1 + 0x18) == 0 &&
       (plVar1 = *(longlong **)(param_1 + 0x50), plVar1 != (longlong *)0x0)) &&
      (((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0 &&
       (lVar3 = (**(code **)(*plVar1 + 0x180))(), lVar3 != 0)))))) {
    if (*(longlong *)(param_1 + 0x50) == 0) {
      uVar9 = 0;
      iVar5 = 0;
    }
    else {
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0x50) + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar8 + 0x10);
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(lVar8 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar5 = iVar6;
        }
      }
    }
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x58);
    }
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_b0[2] = lVar8;
    *local_b0 = &PTR_FUN_14b3e7730;
    *(uint *)(local_b0 + 3) = uVar9;
    *(int *)((longlong)local_b0 + 0x1c) = iVar5;
    local_b0[4] = uVar7;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    FUN_14016fdb0(uVar2,&local_a0,&local_98);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    *(undefined8 *)(param_1 + 0x18) = local_a0;
    if (local_a8 != 0) {
      if (local_b0 == (undefined8 *)0x0) goto LAB_1409d2197;
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1409d2197:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d227a FUN_1409d227a body=44 status=ok
// SIG undefined FUN_1409d227a(void)

undefined8 FUN_1409d227a(undefined8 param_1,undefined8 param_2)

{
  FUN_1409d22a6();
  return param_2;
}



// FUNCTION 1409d22a6 FUN_1409d22a6 body=169 status=ok
// SIG undefined FUN_1409d22a6(void)

longlong * FUN_1409d22a6(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))(param_1,&local_38);
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x48) == 0) {
      lVar1 = 0;
    }
    local_48 = local_38;
    local_40 = lVar1;
    (**(code **)(**(longlong **)(param_1[2] + 0x990) + 0x18))
              (*(longlong **)(param_1[2] + 0x990),param_3,param_4,param_1);
    *(undefined1 *)(local_38 + 9) = 1;
  }
  *param_2 = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1409d2356 FUN_1409d2356 body=57 status=ok
// SIG undefined FUN_1409d2356(void)

void FUN_1409d2356(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabf20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabf20 = FUN_140002ddd(FUN_1465df9cb,uVar1,L"OakLightBeamDef");
  }
  return;
}



// FUNCTION 1409d2390 FUN_1409d2390 body=77 status=ok
// SIG undefined FUN_1409d2390(void)

void FUN_1409d2390(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14018d992();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1409d23de(param_1,param_2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1409d23de FUN_1409d23de body=721 status=ok
// SIG undefined FUN_1409d23de(void)

void FUN_1409d23de(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x668) != param_2) {
    if (*(longlong *)(param_1 + 0x8c0) != 0) {
      FUN_148110b96(*(longlong *)(param_1 + 0x8c0),param_1);
      *(undefined8 *)(param_1 + 0x8c0) = 0;
    }
    FUN_140388f74(param_1);
    if (*(longlong *)(param_1 + 0x760) == 0) {
      bVar11 = false;
    }
    else {
      bVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x760) + 0x30) + 0x868) == 0;
    }
    uVar2 = *(uint *)(param_1 + 0x790);
    uVar1 = *(undefined1 *)(param_1 + 0x798);
    *(uint *)(param_1 + 0x790) = uVar2 & 0xfffffffe;
    *(undefined1 *)(param_1 + 0x798) = 0;
    FUN_14080aa0e(param_1);
    *(uint *)(param_1 + 0x790) = *(uint *)(param_1 + 0x790) & 0xfffffffe | uVar2 & 1;
    *(undefined1 *)(param_1 + 0x798) = uVar1;
    if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x668) = param_2;
      if (param_2 == 0) goto LAB_1409d261e;
    }
    else {
      FUN_1456cec3c(param_2);
      *(longlong *)(param_1 + 0x668) = param_2;
    }
    FUN_1439f74ee(param_1,param_3);
    if ((longlong)*(int *)(param_1 + 0x6e0) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x6d8);
      plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x6e0) * 7;
      do {
        lVar3 = *plVar9;
        local_48 = param_1 + 0x678;
        cVar4 = FUN_1448b0bbc(plVar9 + 1,lVar3,param_1 + 0x678,0);
        if (cVar4 != '\0') {
          FUN_1401a642c(lVar3 + 0x70,&local_48);
        }
        plVar9 = plVar9 + 7;
      } while (plVar9 != plVar10);
    }
    lVar3 = *(longlong *)(param_1 + 0x668);
    if (lVar3 != 0) {
      if ((*(byte *)(lVar3 + 0x50) & 2) == 0) {
        bVar5 = *(byte *)(param_1 + 0x2d6);
        bVar8 = bVar5 >> 1;
      }
      else {
        bVar8 = *(byte *)(lVar3 + 0x51);
        bVar5 = *(byte *)(param_1 + 0x2d6);
      }
      *(byte *)(param_1 + 0x2d6) = bVar5 & 0xfd | bVar8 * '\x02' & 2;
      if ((*(byte *)(lVar3 + 0x50) & 4) == 0) {
        bVar5 = *(byte *)(param_1 + 0x2d4);
        bVar8 = bVar5 >> 6;
      }
      else {
        bVar8 = *(byte *)(lVar3 + 0x51) >> 1;
        bVar5 = *(byte *)(param_1 + 0x2d4);
      }
      *(byte *)(param_1 + 0x2d4) = bVar5 & 0xbf | (bVar8 & 1) << 6;
      if ((*(byte *)(lVar3 + 0x50) & 8) == 0) {
        bVar5 = *(byte *)(param_1 + 0x2de);
        bVar8 = bVar5 >> 6;
      }
      else {
        bVar8 = *(byte *)(lVar3 + 0x51) >> 2;
        bVar5 = *(byte *)(param_1 + 0x2de);
      }
      *(byte *)(param_1 + 0x2de) = bVar5 & 0xbf | (bVar8 & 1) << 6;
      puVar6 = (undefined1 *)(lVar3 + 0x52);
      if ((*(byte *)(lVar3 + 0x50) & 0x10) == 0) {
        puVar6 = (undefined1 *)(param_1 + 0x332);
      }
      *(undefined1 *)(param_1 + 0x332) = *puVar6;
      puVar7 = (undefined4 *)(lVar3 + 0x54);
      if ((*(byte *)(lVar3 + 0x50) & 0x20) == 0) {
        puVar7 = (undefined4 *)(param_1 + 0x33c);
      }
      *(undefined4 *)(param_1 + 0x33c) = *puVar7;
      puVar7 = (undefined4 *)(lVar3 + 0x58);
      if ((*(byte *)(lVar3 + 0x50) & 0x40) == 0) {
        puVar7 = (undefined4 *)(param_1 + 0x388);
      }
      *(undefined4 *)(param_1 + 0x388) = *puVar7;
      puVar7 = (undefined4 *)(param_1 + 0x38c);
      if (*(char *)(lVar3 + 0x50) < '\0') {
        puVar7 = (undefined4 *)(lVar3 + 0x5c);
      }
      *(undefined4 *)(param_1 + 0x38c) = *puVar7;
      if (((*(byte *)(param_1 + 0x9c) & 1) != 0) &&
         (!(bool)(~bVar11 & (*(byte *)(param_1 + 0x9e) & 8) == 0))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_1409d261e:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d26e4 FUN_1409d26e4 body=59 status=ok
// SIG undefined FUN_1409d26e4(void)

undefined8 * FUN_1409d26e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f62f70;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409d2720 FUN_1409d2720 body=316 status=ok
// SIG undefined FUN_1409d2720(void)

undefined8 FUN_1409d2720(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_3 + 0x20);
  local_40 = *(undefined8 *)(param_3 + 0x28);
  local_38 = *(longlong **)(param_3 + 0x30);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  cVar4 = FUN_140230656(&local_48);
  if ((cVar4 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x20) + 0x100) != '\x01')) {
    uVar8 = 0;
  }
  else {
    uVar5 = FUN_14065dbd8(&local_48);
    uVar8 = (ulonglong)CONCAT31((int3)((uint)uVar5 >> 8),(char)uVar5 + '\x01');
  }
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
  cVar4 = (**(code **)(*param_2 + 8))(param_2);
  if ((cVar4 == '\0') && (*(char *)((longlong)param_2 + 0x4c4) == '\0')) {
    lVar6 = FUN_1409e7438();
    uVar7 = 0;
    if (((char)uVar8 != '\x01') || (*(char *)(lVar6 + 0xd8) == '\0')) goto LAB_1409d27d7;
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0xe0) ==
      *(int *)(param_3 + 0xc)) {
    if (*(char *)(param_1 + 0x29 + (uVar8 & 0xff)) != '\0') {
      uVar7 = 1;
      goto LAB_1409d27d7;
    }
    FUN_1409d285e(param_1,uVar8);
  }
  uVar7 = 0;
LAB_1409d27d7:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1409d285e FUN_1409d285e body=900 status=ok
// SIG undefined FUN_1409d285e(void)

void FUN_1409d285e(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143ae4dbe(*(undefined8 *)(param_1 + 0x20));
  if (param_2 != '\x01') goto LAB_1409d29e9;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1409d2b3b;
    }
    local_48 = "CommonInput";
    local_40 = 0xb;
    local_3c = 0;
    uVar5 = FUN_14001a6c0(&local_48,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar8 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar5);
  }
  else {
LAB_1409d2b3b:
    local_48 = "CommonInput";
    local_40 = 0xb;
    local_3c = 0;
    uVar5 = FUN_14001a6c0(&local_48,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar8 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar5,&local_48,1);
  }
  lVar9 = (**(code **)(*plVar8 + 0x40))(plVar8);
  if (((*(char *)(lVar9 + 0xdb) != '\x01') ||
      (lVar9 = FUN_140902dbe(), *(char *)(lVar9 + 0x4c) != '\x01')) ||
     (lVar9 = FUN_1403139a0(), lVar9 == 0)) goto LAB_1409d29e9;
  lVar12 = *(longlong *)(param_1 + 0x120);
  lVar11 = *(longlong *)(lVar9 + 8);
  if (*(longlong *)(lVar9 + 8) == lVar12) {
    iVar2 = *(int *)(lVar9 + 0x20);
    lVar11 = lVar12;
    if (iVar2 == *(int *)(param_1 + 0x130)) {
      if (1 < iVar2) {
        lVar12 = 0;
        while( true ) {
          uVar13 = *(ushort *)(*(longlong *)(lVar9 + 0x18) + lVar12);
          uVar14 = (ulonglong)uVar13;
          uVar15 = *(ushort *)(*(longlong *)(param_1 + 0x128) + lVar12);
          if (uVar13 != uVar15) break;
          if (uVar13 == 0) goto LAB_1409d29e9;
LAB_1409d29af:
          lVar12 = lVar12 + 2;
        }
        if ((uVar15 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          uVar16 = (ulonglong)uVar15;
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_1409d29af;
        }
        if (uVar13 != uVar15) goto LAB_1409d2a0e;
      }
      goto LAB_1409d29e9;
    }
    if (*(int *)(param_1 + 0x130) + iVar2 == 1) goto LAB_1409d29e9;
  }
LAB_1409d2a0e:
  *(longlong *)(param_1 + 0x120) = lVar11;
  puVar1 = (undefined8 *)(param_1 + 0x128);
  if (puVar1 != (undefined8 *)(lVar9 + 0x18)) {
    iVar2 = *(int *)(lVar9 + 0x20);
    _Src = *(void **)(lVar9 + 0x18);
    *(int *)(param_1 + 0x130) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x134) == 0) {
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  pcVar3 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x94);
  uVar10 = FUN_140902dbe();
  local_58 = (undefined8 *)(lVar9 + 0x18);
  FUN_14647dbb0(uVar10,&local_48,pcVar3,*(undefined8 *)(lVar9 + 8));
  pcVar4 = local_48;
  if (local_48 != pcVar3) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar12 = FUN_140902dbe();
    if (*(char *)(lVar12 + 0x4c) == '\x01') {
      *(char **)(lVar9 + 0x94) = pcVar4;
      FUN_140dc023e(lVar9);
    }
    FUN_141440cd6(param_1 + 8,pcVar4);
  }
LAB_1409d29e9:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d2be4 FUN_1409d2be4 body=628 status=ok
// SIG undefined FUN_1409d2be4(void)

void FUN_1409d2be4(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [40];
  char local_b0;
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined **local_80;
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x80);
    lVar9 = (longlong)*(int *)(param_1 + 0x88) << 3;
    do {
      cVar3 = FUN_1409d2f40(lVar10,param_2);
      if (cVar3 != '\0') goto LAB_1409d2db1;
      lVar10 = lVar10 + 8;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  if (param_2 != (longlong *)0x0) {
    uVar5 = FUN_1409d2e5a();
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_1409d2e5a();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
        plVar6 = (longlong *)(**(code **)(*plVar7 + 0x10))();
        local_b0 = '\0';
        local_88[0] = 0;
        local_78 = '\0';
        local_48 = param_1 + 0x50;
        local_50[0] = 0;
        local_80 = &PTR_FUN_14b42f700;
        local_40 = *param_4;
        (**(code **)(*plVar6 + 8))(plVar6,&local_80,param_3);
        local_80 = &PTR_LAB_14b3f62b0;
        FUN_1448173f8(local_50);
        if (local_78 != '\0') {
          if (local_78 == '\x01') {
            local_70 = 0;
          }
          else if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
          local_78 = '\0';
        }
        FUN_1448173f8(local_88);
        if ((local_b0 == '\x03') && (local_a0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a0 + 0x10))();
          }
        }
        uVar2 = *(uint *)((longlong)param_2 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar4 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar8;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar4 = iVar8;
          }
        }
        iVar8 = *(int *)(param_1 + 0x88);
        *(uint *)(param_1 + 0x88) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x8c) < iVar8 + 1U) {
          FUN_1409d3082((longlong *)(param_1 + 0x80),iVar8);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar8 * 8) = CONCAT44(iVar4,uVar2);
      }
    }
  }
LAB_1409d2db1:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d2e5a FUN_1409d2e5a body=228 status=ok
// SIG undefined FUN_1409d2e5a(void)

longlong FUN_1409d2e5a(void)

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
  if (DAT_14cb66c80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14872e12b;
    local_40 = FUN_146511eb0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierProvider",&DAT_14cb66c80,
                  &DAT_14872e12a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d2f40 FUN_1409d2f40 body=320 status=ok
// SIG undefined FUN_1409d2f40(void)

ulonglong FUN_1409d2f40(uint *param_1,longlong param_2)

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



// FUNCTION 1409d3082 FUN_1409d3082 body=353 status=ok
// SIG undefined FUN_1409d3082(void)

void FUN_1409d3082(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409d3107;
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
LAB_1409d3107:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1409d31e4 FUN_1409d31e4 body=40 status=ok
// SIG undefined FUN_1409d31e4(void)

undefined8 FUN_1409d31e4(undefined8 param_1,int param_2)

{
  FUN_1409d320c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409d320c FUN_1409d320c body=163 status=ok
// SIG undefined FUN_1409d320c(void)

void FUN_1409d320c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14acb0e10;
  if ((param_1[0x30] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x30] + 0x50));
  }
  if ((param_1[0x2e] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2e] + 0x50));
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x20];
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
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 1409d32b0 FUN_1409d32b0 body=42 status=ok
// SIG undefined FUN_1409d32b0(void)

void FUN_1409d32b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1409d32da(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1409d32da FUN_1409d32da body=202 status=ok
// SIG undefined FUN_1409d32da(void)

void FUN_1409d32da(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if ((*(longlong *)(param_1 + 0x98) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x50));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140c576e0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140c576e0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001409d3398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1409d33a4 FUN_1409d33a4 body=429 status=ok
// SIG undefined FUN_1409d33a4(void)

void FUN_1409d33a4(longlong param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  if ((((lVar4 != 0) || (lVar4 = *(longlong *)(param_1 + 0x7a0), lVar4 != 0)) &&
      ((*(byte *)(lVar4 + 0x398) & 0x10) != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x188), lVar4 != 0)) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14575f3fc(param_2,iVar3);
    }
    *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
  }
  if ((*(byte *)(param_1 + 0x700) & 8) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14575f3fc(param_2,iVar3);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x6f0);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      _Dst = (uint *)(*(longlong *)(param_1 + 0x6e8) + (longlong)(int)uVar5 * 8);
      if (((((_Dst[1] == 0) || (uVar1 = *_Dst, (int)uVar1 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar1 ||
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != _Dst[1])))))) ||
          ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) ||
         ((lVar4 = *plVar6, lVar4 == 0 || ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0)))) {
        if (~uVar5 + iVar3 != 0) {
          memmove(_Dst,_Dst + 2,(longlong)(int)(~uVar5 + iVar3) << 3);
          iVar3 = *(int *)(param_1 + 0x6f0);
        }
        uVar5 = uVar5 - 1;
        *(int *)(param_1 + 0x6f0) = iVar3 + -1;
        FUN_14575f3bc((longlong *)(param_1 + 0x6e8));
      }
      else {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14575f3fc(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(param_1 + 0x6f0);
    } while ((int)uVar5 < iVar3);
  }
  return;
}



// FUNCTION 1409d3552 FUN_1409d3552 body=94 status=ok
// SIG undefined FUN_1409d3552(void)

void FUN_1409d3552(longlong param_1,longlong param_2)

{
  FUN_1409d35b0();
  if (((*(longlong *)(param_1 + 0x580) != 0) && (*(longlong **)(param_1 + 0x588) != (longlong *)0x0)
      ) && ((*(byte *)(param_2 + 0x53c) & 1) == 0)) {
    if ((*(float *)(param_2 + 0x550) != *(float *)(param_2 + 0x554)) ||
       (NAN(*(float *)(param_2 + 0x550)) || NAN(*(float *)(param_2 + 0x554)))) {
                    /* WARNING: Could not recover jumptable at 0x0001409d35ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x588) + 0x18))();
      return;
    }
  }
  return;
}



// FUNCTION 1409d35b0 FUN_1409d35b0 body=60 status=ok
// SIG undefined FUN_1409d35b0(void)

void FUN_1409d35b0(longlong *param_1,undefined8 param_2)

{
  FUN_1409d35ec();
  FUN_1409d4082(param_1,param_2);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  FUN_1409d3cde(param_1,param_2);
  return;
}



// FUNCTION 1409d35ec FUN_1409d35ec body=130 status=ok
// SIG undefined FUN_1409d35ec(void)

void FUN_1409d35ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_144860928();
  if (0.0 < *(float *)(lVar1 + 0x94)) {
    fVar2 = (float)FUN_1409d366e(param_1);
    if (0.0 < fVar2) {
      fVar3 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
      *(float *)(param_1 + 0x50c) = fVar3 / fVar2 + *(float *)(param_1 + 0x50c);
      FUN_1409d3a2e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409d366e FUN_1409d366e body=276 status=ok
// SIG undefined FUN_1409d366e(void)

undefined8 FUN_1409d366e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if (*(longlong *)(param_1 + 600) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x260);
  }
  lVar3 = (**(code **)(*plVar4 + 0x10))();
  if (lVar3 == 0) {
    fVar9 = 0.0;
    uVar8 = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x5c);
    lVar5 = (longlong)iVar1;
    if (lVar5 < 0) {
      fVar9 = -1.0;
      uVar7 = 0xbf800000;
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x40);
      uVar7 = 0xbf800000;
      fVar9 = -1.0;
      if (iVar1 < iVar2) {
        fVar9 = (float)FUN_1405583ce(lVar5 * 0x88 + *(longlong *)(lVar3 + 0x38));
        iVar2 = *(int *)(lVar3 + 0x40);
      }
      if (iVar1 < iVar2) {
        uVar7 = FUN_14055830e(lVar5 * 0x88 + *(longlong *)(lVar3 + 0x38));
      }
    }
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((longlong)*(int *)(lVar3 + 0x40) == 0) {
      fVar10 = 0.0;
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0x38);
      lVar3 = (longlong)*(int *)(lVar3 + 0x40) * 0x88;
      fVar10 = 0.0;
      do {
        fVar6 = (float)FUN_1405583ce(lVar5);
        fVar10 = fVar10 + fVar6;
        lVar5 = lVar5 + 0x88;
        lVar3 = lVar3 + -0x88;
      } while (lVar3 != 0);
    }
    fVar9 = (float)uVar7 + (fVar10 - fVar9);
  }
  return CONCAT44(uVar8,fVar9);
}



// FUNCTION 1409d3782 FUN_1409d3782 body=682 status=ok
// SIG undefined FUN_1409d3782(void)

void FUN_1409d3782(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [16];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(char *)(param_1 + 0x7c) < '\0') &&
     ((lVar7 = FUN_1402179b4(), lVar7 == 0 ||
      (lVar7 = FUN_1402179b4(), (*(byte *)(lVar7 + 0x19) & 0x40) == 0)))) {
    if (*(longlong *)(param_1 + 600) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x260);
    }
    fVar9 = (float)(**(code **)(*plVar8 + 0x60))();
    if (0.0 < fVar9) {
      dVar10 = 1.0 / (double)fVar9;
      dVar2 = *(double *)(param_2 + 0x238) * dVar10;
      dVar1 = *(double *)(param_2 + 0x230) * dVar10;
      dVar10 = dVar10 * *(double *)(param_2 + 0x228);
      dVar12 = dVar10 * dVar10 + dVar1 * dVar1;
      local_88 = dVar10;
      local_80 = dVar1;
      local_78 = dVar2;
      if ((double)(*(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80)) <=
          dVar2 * dVar2 + dVar12) {
        (**(code **)(**(longlong **)(param_1 + 0x250) + 0x328))
                  (*(longlong **)(param_1 + 0x250),local_a0);
        fVar9 = (float)local_90;
        if ((0.0 < fVar9) && (fVar11 = (float)dVar2, 0.0 < fVar11)) {
          fVar13 = fVar9;
          if (fVar11 <= fVar9) {
            fVar13 = fVar11;
          }
          fVar14 = fVar9;
          if (fVar9 <= fVar11) {
            fVar14 = fVar11;
          }
          dVar2 = (double)((fVar13 * *(float *)(param_1 + 0x84) + fVar14) - fVar9);
          local_78 = dVar2;
        }
        cVar6 = FUN_140e2de6e();
        if (cVar6 != '\0') {
          dVar12 = dVar2 * dVar2 + dVar12;
          fVar9 = *(float *)(param_1 + 0x88);
          if ((double)(fVar9 * fVar9) < dVar12) {
            if (((dVar12 != 1.0) || (dVar3 = dVar1, dVar4 = dVar10, dVar5 = dVar2, NAN(dVar12))) &&
               (dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464e0, dVar5 = DAT_14c8464f0,
               9.99999993922529e-09 <= dVar12)) {
              dVar12 = 1.0 / SQRT(dVar12);
              dVar3 = dVar1 * dVar12;
              dVar4 = dVar10 * dVar12;
              dVar5 = dVar2 * dVar12;
            }
            dVar10 = (double)fVar9;
            local_78 = dVar5 * dVar10;
            local_80 = dVar3 * dVar10;
            local_88 = dVar4 * dVar10;
          }
        }
        if (*(longlong *)(param_1 + 600) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)(param_1 + 0x260);
        }
        (**(code **)(*plVar8 + 0x68))(plVar8,&local_88);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d3a2e FUN_1409d3a2e body=686 status=ok
// SIG undefined FUN_1409d3a2e(void)

void FUN_1409d3a2e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*(longlong *)(param_1 + 0x250) != 0) && (lVar2 = FUN_1447210f0(), lVar2 != 0)) &&
      (*(longlong *)(param_1 + 0x510) == 0)) && (0.0 < *(float *)(param_1 + 0x50c))) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    if (*(longlong *)(param_1 + 600) == 0) {
      uVar8 = 0;
      iVar5 = 0;
    }
    else {
      uVar8 = *(uint *)(*(longlong *)(param_1 + 600) + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      iVar5 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar2 + 0x10);
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(lVar2 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar5 = iVar6;
        }
      }
    }
    uVar7 = 0;
    if (*(longlong *)(param_1 + 600) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x260);
    }
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_b0[2] = lVar4;
    *local_b0 = &PTR_FUN_14b3f72b0;
    *(uint *)(local_b0 + 3) = uVar8;
    *(int *)((longlong)local_b0 + 0x1c) = iVar5;
    local_b0[4] = uVar7;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x510,&local_98,0x3dcccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    if (local_a8 != 0) {
      if (local_b0 == (undefined8 *)0x0) goto LAB_1409d3bfb;
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1409d3bfb:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d3cde FUN_1409d3cde body=931 status=ok
// SIG undefined FUN_1409d3cde(void)

void FUN_1409d3cde(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  byte local_88 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x2f8) == 0) goto LAB_1409d3d10;
  if (*(longlong *)(param_1 + 600) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x260);
  }
  lVar4 = (**(code **)(*plVar6 + 0x10))();
  if (lVar4 == 0) goto LAB_1409d3d10;
  if (((*(byte *)(param_1 + 0x7c) & 0x40) == 0) || (*(float *)(param_2 + 0x324) <= 0.0001)) {
LAB_1409d3dc1:
    local_88[0] = *(byte *)(param_1 + 0x470) >> 7;
  }
  else {
    if (*(longlong *)(param_1 + 600) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x260);
    }
    lVar5 = (**(code **)(*plVar6 + 0x10))();
    local_88[0] = 0xff;
    if (((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x40))) &&
       (fVar11 = (float)FUN_14055830e(*(undefined8 *)(lVar5 + 0x38)), 0.0001 < fVar11))
    goto LAB_1409d3dc1;
  }
  lVar5 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x250));
  local_84 = (float)*(double *)(lVar5 + 0x6d0);
  if ((longlong)*(int *)(param_1 + 0x2f8) != 0) {
    cVar1 = *(char *)(param_2 + 0x53c);
    plVar6 = *(longlong **)(param_1 + 0x2f0);
    plVar10 = plVar6 + (longlong)*(int *)(param_1 + 0x2f8) * 2;
    uVar9 = 0x80000000;
    do {
      uVar2 = *(uint *)(*plVar6 + 0x84);
      uVar8 = (ulonglong)uVar2;
      if (uVar2 == uVar9) {
LAB_1409d3f04:
        fVar11 = local_74;
        if (uVar2 != 0xffffffff) goto LAB_1409d3e8e;
        bVar3 = true;
        if ((longlong)*(int *)(lVar4 + 0x40) == 0) {
          fVar11 = 0.0;
        }
        else {
          lVar5 = *(longlong *)(lVar4 + 0x38);
          local_98 = (longlong)*(int *)(lVar4 + 0x40) * 0x88;
          fVar11 = 0.0;
          do {
            local_90 = lVar5;
            fVar12 = (float)FUN_14055830e(lVar5);
            fVar11 = fVar11 + fVar12;
            lVar5 = local_90 + 0x88;
            local_98 = local_98 + -0x88;
          } while (local_98 != 0);
          local_98 = 0;
        }
      }
      else {
        if (uVar2 == 0xffffffff) {
          local_78 = 0.0;
          if (0 < (longlong)*(int *)(param_2 + 0x330)) {
            local_78 = 0.0;
            lVar5 = 0;
            do {
              local_78 = local_78 + *(float *)(*(longlong *)(param_2 + 0x328) + lVar5 * 4);
              lVar5 = lVar5 + 1;
            } while (*(int *)(param_2 + 0x330) != lVar5);
          }
          if ((longlong)*(int *)(lVar4 + 0x40) == 0) {
            fVar11 = 0.0;
          }
          else {
            lVar5 = *(longlong *)(lVar4 + 0x38);
            lVar7 = (longlong)*(int *)(lVar4 + 0x40) * 0x88;
            fVar11 = 0.0;
            do {
              fVar12 = (float)FUN_1405583ce(lVar5);
              fVar11 = fVar11 + fVar12;
              lVar5 = lVar5 + 0x88;
              lVar7 = lVar7 + -0x88;
            } while (lVar7 != 0);
          }
          uVar9 = 0xffffffff;
          local_74 = fVar11;
          goto LAB_1409d3f04;
        }
        uVar9 = uVar2;
        if (((int)uVar2 < 0) || (*(int *)(param_2 + 0x330) <= (int)uVar2)) {
          local_78 = 0.0;
          fVar11 = -1.0;
          if (-1 < (int)uVar2) goto LAB_1409d3e68;
        }
        else {
          local_78 = *(float *)(*(longlong *)(param_2 + 0x328) + uVar8 * 4);
LAB_1409d3e68:
          fVar11 = -1.0;
          if ((int)uVar2 < *(int *)(lVar4 + 0x40)) {
            fVar11 = (float)FUN_1405583ce(uVar8 * 0x88 + *(longlong *)(lVar4 + 0x38));
          }
        }
LAB_1409d3e8e:
        local_74 = fVar11;
        if (((int)uVar2 < 0) || (*(int *)(lVar4 + 0x40) <= (int)uVar2)) {
          bVar3 = false;
          fVar11 = -1.0;
        }
        else {
          fVar11 = (float)FUN_14055830e(uVar8 * 0x88 + *(longlong *)(lVar4 + 0x38));
          bVar3 = false;
        }
      }
      if (cVar1 == '\0') {
        local_80 = 0.0;
        if (0.0 <= local_78 - fVar11) {
          local_80 = local_78 - fVar11;
        }
      }
      else {
        local_80 = 0.0;
        if (bVar3) {
          if (0 < (longlong)*(int *)(param_2 + 0x368)) {
            local_80 = 0.0;
            lVar5 = 0;
            do {
              local_80 = local_80 + *(float *)(*(longlong *)(param_2 + 0x360) + lVar5 * 4);
              lVar5 = lVar5 + 1;
            } while (*(int *)(param_2 + 0x368) != lVar5);
          }
        }
        else if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_2 + 0x368))) {
          local_80 = *(float *)(*(longlong *)(param_2 + 0x360) + uVar8 * 4);
        }
      }
      local_7c = fVar11;
      (**(code **)(*(longlong *)*plVar6 + 8))((longlong *)*plVar6,param_2,local_88);
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar10);
  }
LAB_1409d3d10:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d4082 FUN_1409d4082 body=1034 status=ok
// SIG undefined FUN_1409d4082(void)

void FUN_1409d4082(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined1 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [8];
  longlong local_188;
  longlong local_150;
  int local_148;
  undefined2 *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_d0;
  longlong local_c0;
  longlong local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14095dc64(param_1 + 0xe0);
  if (((((*(char *)(param_1 + 0x90) == '\0') && (-1 < *(char *)(param_1 + 0x470))) &&
       (*(longlong *)(param_1 + 600) != 0)) &&
      ((*(longlong **)(param_1 + 0x260) != (longlong *)0x0 &&
       ((*(byte *)(param_2 + 0x53c) & 1) == 0)))) &&
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))(), lVar5 != 0)) {
    FUN_14095fa38(local_190,param_2 + 800);
    uVar11 = (ulonglong)*(int *)(lVar5 + 0x40);
    if (0 < (longlong)uVar11) {
      lVar12 = uVar11 * 0x88;
      do {
        if ((longlong)uVar11 <= (longlong)local_148) {
          lVar10 = *(longlong *)(lVar5 + 0x38);
          lVar13 = lVar10 + lVar12 + -0x70;
          lVar6 = FUN_1409d448e(lVar13);
          if (lVar6 != 0) {
            pcVar8 = (char *)(lVar10 + lVar12 + -0x88);
            if (*pcVar8 == '\x01') {
              plVar7 = *(longlong **)(lVar10 + -0x50 + lVar12);
              if ((plVar7 != (longlong *)0x0) &&
                 (iVar1 = *(int *)(lVar10 + -0x54 + lVar12), iVar1 != 0)) {
                puVar14 = (uint *)(lVar10 + lVar12 + -0x58);
                uVar2 = *puVar14;
                if (((-1 < (int)uVar2) &&
                    ((((int)uVar2 < DAT_14c9647dc &&
                      (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8),
                      lVar10 != 0)) && (*(int *)(lVar10 + 0x10) == iVar1)))) &&
                   ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
                  if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_1447a1f2e) {
                    plVar7 = plVar7 + 0xd9;
                  }
                  else {
                    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))();
                  }
                  cVar4 = FUN_14486eb0e(plVar7,puVar14);
                  if (cVar4 != '\0') goto LAB_1409d425b;
                }
              }
            }
            else if (0.0 < *(float *)(lVar10 + -0x34 + lVar12)) {
LAB_1409d425b:
              fVar15 = (float)FUN_14055830e(pcVar8);
              fVar17 = *(float *)(local_150 + -4 + uVar11 * 4);
              lVar10 = FUN_1409d448e(lVar13);
              if (fVar17 <= 0.0) {
                uVar9 = *(undefined1 *)(lVar10 + 0x1a);
              }
              else {
                if ((*(char *)(lVar10 + 0x161) == '\x01') &&
                   (fVar16 = (float)FUN_148820aca(pcVar8), fVar16 <= fVar17)) {
                  fVar17 = fVar16;
                }
                fVar17 = (float)(~-(uint)(fVar15 + -1.0 < fVar17) & (uint)(fVar15 - fVar17));
                lVar10 = FUN_1409d448e(lVar13);
                if (*(char *)(lVar10 + 0x160) == '\x01') {
                  fVar15 = (float)FUN_148820b16(pcVar8);
                  if (fVar17 <= fVar15 + -1.0) {
                    fVar17 = fVar15 + -1.0;
                  }
                }
                uVar9 = 1;
                fVar15 = fVar17;
                if (((lVar12 == 0x88) && (*(char *)(param_1 + 0xb8) == '\x01')) &&
                   (fVar15 = 1.0, 1.0 <= fVar17)) {
                  fVar15 = fVar17;
                }
              }
              FUN_1409d451a(pcVar8,fVar15,uVar9);
            }
          }
        }
        lVar12 = lVar12 + -0x88;
        bVar3 = 1 < uVar11;
        uVar11 = uVar11 - 1;
      } while (bVar3);
    }
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    local_f0 = &DAT_14a171d50;
    local_d8 = 0;
    if (local_d4 != 0) {
      FUN_140115c12(&local_e0,0);
    }
    local_e8 = 0;
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    if (local_150 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d448e FUN_1409d448e body=138 status=ok
// SIG undefined FUN_1409d448e(void)

longlong FUN_1409d448e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb77d80 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb77d80,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d451a FUN_1409d451a body=259 status=ok
// SIG undefined FUN_1409d451a(void)

void FUN_1409d451a(char *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (*param_1 == '\x01') {
    plVar4 = *(longlong **)(param_1 + 0x38);
    if ((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0x34) != 0)) {
      puVar5 = (uint *)(param_1 + 0x30);
      uVar1 = *puVar5;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x34))) &&
           ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
          if (*(code **)(*plVar4 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar4 = plVar4 + 0xd9;
          }
          else {
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
          }
          cVar2 = FUN_14486eb0e(plVar4,puVar5);
          if (cVar2 != '\0') {
            uVar3 = FUN_14008e0ae(puVar5);
            FUN_1409d461e(uVar3,param_2,param_3);
            return;
          }
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = param_2;
    FUN_14020a6cc(param_1 + 0x70,1);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_14036aa80();
      return;
    }
  }
  return;
}



// FUNCTION 1409d461e FUN_1409d461e body=796 status=ok
// SIG undefined FUN_1409d461e(void)

void FUN_1409d461e(longlong param_1,float param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_b8 [44];
  int local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x133) != '\x01') goto LAB_1409d47bd;
  fVar11 = *(float *)(param_1 + 200);
  fVar12 = *(float *)(param_1 + 0x30);
  auVar13 = ZEXT416((uint)fVar12);
  fVar10 = *(float *)(param_1 + 0x24);
  if (*(float *)(param_1 + 0x24) <= fVar12) {
    if ((0.0 < *(float *)(param_1 + 0x3c)) && (*(longlong *)(param_1 + 0x10) != 0)) {
      fVar12 = fVar12 * (1.0 - *(float *)(param_1 + 0x3c));
      fVar10 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x90);
      if (fVar10 <= fVar12) {
        fVar10 = fVar12;
      }
      auVar13 = ZEXT416((uint)fVar10);
    }
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
      auVar13 = roundps(auVar13,ZEXT416(auVar13._0_4_),3);
    }
    local_8c = 0;
    fVar12 = auVar13._0_4_;
    if (*(int *)(param_1 + 0x20) == 0) {
      local_88 = *(float *)(param_1 + 0x28);
    }
    else {
      FUN_1402a453c(&local_8c);
      iVar3 = local_8c;
      iVar2 = *(int *)(param_1 + 0x20);
      lVar7 = (longlong)local_8c;
      lVar4 = DAT_14c9a3d60 + lVar7 * 0x88;
      lVar8 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
      FUN_1402a4668(lVar4 + -0x88,lVar8 + -0x88);
      if (iVar2 != iVar3) {
        FUN_1402a4744(lVar4 + -0x18,lVar8 + -0x18);
      }
      local_88 = *(float *)(param_1 + 0x28);
      if (iVar3 != 0) {
        local_84 = local_88;
        fVar9 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar7 * 0x88 + -0x88,local_88,0);
        lVar4 = DAT_14c9a3d60;
        if (fVar12 <= param_2) {
          param_2 = fVar12;
        }
        local_88 = fVar9;
        if (DAT_14c9a3d68 != DAT_14c9a3d94) {
          lVar8 = (longlong)(iVar3 + -1) * 0x88;
          lVar7 = DAT_14c9a3d60 + lVar8;
          FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar8),
                        *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar8));
          if (*(longlong *)(lVar4 + 0x70 + lVar8) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar7 + 0x60) != 0) {
            FUN_1400020a8();
          }
          FUN_14059507c(&DAT_14c9a3d60,iVar3 + -1,1);
        }
        fVar10 = param_2;
        if (param_2 <= fVar9) {
          fVar10 = fVar9;
        }
        local_8c = 0;
        goto LAB_1409d46d8;
      }
    }
    if (fVar12 <= param_2) {
      param_2 = fVar12;
    }
    fVar10 = param_2;
    local_84 = local_88;
    if (param_2 <= local_88) {
      fVar10 = local_88;
    }
  }
LAB_1409d46d8:
  *(float *)(param_1 + 200) = fVar10;
  if (param_3 != '\0') {
    fVar11 = 0.0;
    if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
         (uVar1 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar1)) &&
        (((int)uVar1 < DAT_14c9647dc &&
         (puVar6 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar6 != (undefined8 *)0x0)))) &&
       ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0xf4) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        plVar5 = (longlong *)*puVar6;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
      lVar4 = (**(code **)(*plVar5 + 0x180))();
      if (lVar4 != 0) {
        fVar11 = (float)*(double *)(lVar4 + 0x6d0);
      }
    }
    *(float *)(param_1 + 0x11c) = fVar11;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_b8);
  }
  if ((fVar11 == *(float *)(param_1 + 0x118)) && (!NAN(fVar11) && !NAN(*(float *)(param_1 + 0x118)))
     ) {
    *(float *)(param_1 + 0x118) = fVar10;
  }
LAB_1409d47bd:
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d496c FUN_1409d496c body=525 status=ok
// SIG undefined FUN_1409d496c(void)

void FUN_1409d496c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) {
    uVar2 = *(uint *)(param_1 + 0xf0);
    if ((-1 < (int)uVar2) &&
       (((((int)uVar2 < DAT_14c9647dc &&
          (puVar9 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          puVar9 != (undefined8 *)0x0)) && (*(int *)(puVar9 + 2) == *(int *)(param_1 + 0xf4))) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
        plVar8 = (longlong *)*puVar9;
      }
      else {
        plVar8 = (longlong *)0x0;
      }
      lVar6 = (**(code **)(*plVar8 + 0x180))();
      if ((lVar6 != 0) && ((longlong)*(int *)(param_1 + 0x2a8) != 0)) {
        lVar6 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x2a0) + 8 + lVar6) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x2a0) + lVar6) != 0)) {
            if ((*(longlong *)(param_1 + 0xf8) != 0) &&
               (cVar4 = FUN_144729dda((uint *)(param_1 + 0xf0)), cVar4 != '\0')) {
              uVar7 = FUN_141238f08(param_1);
              FUN_14060a688(&local_78,uVar7);
              if (local_70 != (longlong *)0x0) {
                iVar5 = (int)local_70[1];
                goto LAB_1409d4a8b;
              }
            }
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x2a8) * 0x10 != lVar6);
      }
    }
  }
  goto LAB_1409d4a01;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar11 = iVar5 == iVar3;
    if (bVar11) {
      *(int *)(local_70 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar8 = local_70;
    if (bVar11) break;
LAB_1409d4a8b:
    if (iVar5 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar6 = local_78;
  if (plVar8 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar7,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar10 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402280;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4b3b6;
      FUN_14060a5fa(lVar6);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
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
  }
LAB_1409d4a01:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d4b7a FUN_1409d4b7a body=1397 status=ok
// SIG undefined FUN_1409d4b7a(void)

void FUN_1409d4b7a(longlong param_1,longlong param_2,byte *param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((0 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 0x68))) ||
     (((*param_3 & 3) == 1 && ((*(byte *)(param_1 + 100) & 1) == 0)))) goto LAB_1409d4c2c;
  if (((*(longlong *)(param_1 + 0x50) != 0) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) &&
     (lVar7 = *(longlong *)(param_2 + 0x1a8), lVar7 != *(longlong *)(param_1 + 0x50))) {
    if (((*(byte *)(param_1 + 0x58) & 2) == 0) || (lVar5 = FUN_14479d2ce(param_2 + 400), lVar5 == 0)
       ) goto LAB_1409d4c2c;
    lVar6 = FUN_144a745da();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1409d4c2c;
    if (*(int *)(param_1 + 0x7c) == -1) {
      FUN_147a12732(lVar5,*(undefined8 *)(param_1 + 0x50),(int *)(param_1 + 0x7c),param_1 + 0x80);
    }
    iVar3 = FUN_144909502(lVar5,lVar7);
    if ((iVar3 < *(int *)(param_1 + 0x7c)) || (*(int *)(param_1 + 0x80) < iVar3))
    goto LAB_1409d4c2c;
  }
  cVar2 = *(char *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    if (((*(byte *)(param_1 + 100) & 1) != 0) && ((*param_3 & 1) == 0)) goto LAB_1409d4c2c;
    fVar16 = *(float *)(param_3 + 0x10) / *(float *)(param_3 + 0x14);
    fVar14 = *(float *)(param_3 + 0xc) / *(float *)(param_3 + 0x14);
    iVar3 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar3 < 1) {
      bVar11 = *(float *)(param_1 + 0x1c) < fVar16 && fVar14 <= *(float *)(param_1 + 0x1c);
      goto LAB_1409d4c1a;
    }
    uVar9 = *(uint *)(param_1 + 0x6c);
    if (-1 < (int)uVar9 && *(int *)(param_1 + 0x60) == 0) {
      uVar8 = (ulonglong)uVar9;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + uVar8 * 4);
      while (fVar1 < fVar16) {
        *(int *)(param_1 + 0x6c) = (int)uVar8 + -1;
        uVar9 = 0xffffffff;
        if ((longlong)uVar8 < 1) break;
        lVar7 = uVar8 * 4;
        uVar8 = uVar8 - 1;
        uVar9 = (uint)uVar8;
        fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + -4 + lVar7);
      }
    }
    lVar7 = (longlong)(int)uVar9;
    iVar12 = uVar9 + 1;
    if ((int)(uVar9 + 1) < iVar3) {
      iVar12 = iVar3;
    }
    uVar10 = uVar9;
    do {
      lVar7 = lVar7 + 1;
      uVar13 = iVar12 - 1;
      if (((iVar3 <= lVar7) ||
          (fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4), uVar13 = uVar10,
          fVar16 <= fVar1)) || (fVar1 < fVar14)) break;
      uVar13 = uVar10 + 1;
      uVar10 = uVar13;
    } while ((*(byte *)(param_1 + 0x19) & 2) == 0);
    if ((int)uVar13 <= (int)uVar9) goto LAB_1409d4c2c;
    if ((0 < (int)uVar13) && ((*(byte *)(param_1 + 0x19) & 4) == 0)) {
      *(uint *)(param_1 + 0x6c) = uVar13 - 1;
    }
    local_128 = 0;
    local_120 = 0x3002;
    local_118 = 0;
    local_e0 = 0;
    local_d8 = 0x200000000;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = (undefined4)DAT_14c8464e0;
    uStack_bc = DAT_14c8464e0._4_4_;
    uStack_b8 = (undefined4)DAT_14c8464e8;
    uStack_b4 = DAT_14c8464e8._4_4_;
    local_b0 = DAT_14c8464f0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0x3006;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = DAT_14c8464f0;
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
    local_50 = 0;
    FUN_1409d53c2(&local_128,param_2);
    uVar9 = *(uint *)(param_1 + 0x6c);
    uVar10 = uVar9;
    if ((int)uVar9 < (int)uVar13) {
      do {
        uVar9 = uVar9 + 1;
        FUN_1409d50f0(param_1 + 8,uVar9,&local_128);
        *(uint *)(param_1 + 0x6c) = uVar9;
        uVar10 = uVar13;
      } while (uVar9 != uVar13);
    }
    if (uVar10 + 1 == *(int *)(param_1 + 0x28)) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 4);
    }
  }
  else {
    if (cVar2 != '\x02') {
      if (cVar2 == '\x01') {
        bVar11 = *(float *)(param_3 + 0xc) / *(float *)(param_3 + 0x14) <=
                 *(float *)(param_1 + 0x1c);
        goto LAB_1409d4c1a;
      }
      if (cVar2 != '\x03') goto LAB_1409d4c2c;
      fVar14 = *(float *)(param_1 + 0x78);
      if (((fVar14 == 0.0) && (!NAN(fVar14))) ||
         (*(float *)(param_1 + 0x30) <= *(float *)(param_3 + 4) - fVar14 &&
          *(float *)(param_3 + 4) - fVar14 != *(float *)(param_1 + 0x30))) {
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_3 + 4);
      }
    }
    plVar4 = (longlong *)FUN_140789426(param_1 + 0x38);
    if ((plVar4 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0), cVar2 == '\0')) goto LAB_1409d4c2c;
    fVar14 = *(float *)(param_1 + 0x1c);
    fVar16 = *(float *)(param_1 + 0x74);
    bVar11 = true;
    if (0.0 < fVar14) {
      if (fVar14 <= fVar16 / *(float *)(param_3 + 0x14)) {
        bVar11 = false;
      }
      else {
        bVar11 = fVar14 <= (*(float *)(param_3 + 8) + fVar16) / *(float *)(param_3 + 0x14);
      }
    }
    fVar1 = *(float *)(param_3 + 8);
    *(float *)(param_1 + 0x74) = fVar16 + fVar1;
    if ((0.0001 < fVar14 * *(float *)(param_3 + 0x14)) &&
       (fVar14 * *(float *)(param_3 + 0x14) <= fVar16 + fVar1)) {
      uVar15 = FUN_1447c7e44();
      *(undefined4 *)(param_1 + 0x74) = uVar15;
    }
LAB_1409d4c1a:
    if (bVar11 != false) {
      if ((0.0 < *(float *)(param_1 + 0x70)) &&
         (*(float *)(param_3 + 4) - *(float *)(param_1 + 0x70) < *(float *)(param_1 + 0x5c)))
      goto LAB_1409d4c2c;
      if ((*(byte *)(param_1 + 100) & 1) != 0) {
        bVar11 = (bool)(bVar11 & *param_3);
      }
    }
    if (bVar11 == false) goto LAB_1409d4c2c;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 4);
    local_128 = 0;
    local_120 = 0x3002;
    local_118 = 0;
    local_e0 = 0;
    local_d8 = 0x200000000;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = (undefined4)DAT_14c8464e0;
    uStack_bc = DAT_14c8464e0._4_4_;
    uStack_b8 = (undefined4)DAT_14c8464e8;
    uStack_b4 = DAT_14c8464e8._4_4_;
    local_b0 = DAT_14c8464f0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0x3006;
    local_78 = 0;
    uStack_70 = 0;
    local_58 = DAT_14c8464f0;
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
    local_50 = 0;
    FUN_1409d53c2(&local_128,param_2);
    FUN_1409d50f0(param_1 + 8,0,&local_128);
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
LAB_1409d4c2c:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d50f0 FUN_1409d50f0 body=329 status=ok
// SIG undefined FUN_1409d50f0(void)

void FUN_1409d50f0(uint *param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_128 [40];
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)0x0;
  local_f8 = 0;
  local_f0 = 0x3002;
  local_e8 = 0;
  local_b0 = 0;
  local_a8 = 0x200000000;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (undefined4)DAT_14c8464e0;
  uStack_8c = DAT_14c8464e0._4_4_;
  uStack_88 = (undefined4)DAT_14c8464e8;
  uStack_84 = DAT_14c8464e8._4_4_;
  local_80 = DAT_14c8464f0;
  local_78 = (undefined4)DAT_14c8464e0;
  uStack_74 = DAT_14c8464e0._4_4_;
  uStack_70 = (undefined4)DAT_14c8464e8;
  uStack_6c = DAT_14c8464e8._4_4_;
  local_68 = DAT_14c8464f0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3006;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_20 = 0;
  local_100[0] = param_2;
  FUN_1409d523a(&local_f8,param_3);
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    plVar4 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)*puVar3;
      }
    }
  }
  uVar2 = FUN_14477b072(plVar4,*(undefined8 *)(param_1 + 2));
  (**(code **)(*plVar4 + 0x248))(plVar4,uVar2,local_100);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d523a FUN_1409d523a body=392 status=ok
// SIG undefined FUN_1409d523a(void)

longlong * FUN_1409d523a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  if (param_1 != param_2) {
    plVar15 = param_2 + 3;
    if ((longlong *)param_2[9] != (longlong *)0x0) {
      plVar15 = (longlong *)param_2[9];
    }
    FUN_1400709d4(param_1 + 3,plVar15,(int)param_2[10],*(undefined4 *)((longlong)param_1 + 0x54));
  }
  lVar14 = param_2[0xb];
  if (DAT_14c950c29 == 1) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = param_2[0xb];
    }
  }
  bVar13 = DAT_14c950c29;
  param_1[0xb] = lVar14;
  lVar14 = param_2[0xc];
  if ((bVar13 & 1) != 0) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = param_2[0xc];
      bVar13 = DAT_14c950c29;
    }
  }
  param_1[0xc] = lVar14;
  lVar14 = param_2[0xd];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x6c);
  lVar9 = param_2[0xe];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x74);
  lVar10 = param_2[0xf];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x7c);
  lVar11 = param_2[0x10];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  lVar12 = param_2[0x12];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x94);
  *(int *)(param_1 + 0x11) = (int)param_2[0x11];
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  *(int *)(param_1 + 0x12) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar6;
  *(int *)(param_1 + 0xf) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(int *)(param_1 + 0x10) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar4;
  *(int *)(param_1 + 0xd) = (int)lVar14;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(int *)(param_1 + 0xe) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar2;
  lVar14 = param_2[0x13];
  if ((bVar13 & 1) != 0) {
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar14 = param_2[0x13];
    }
  }
  param_1[0x13] = lVar14;
  if ((param_1[0x14] != param_2[0x14]) || ((int)param_1[0x15] != (int)param_2[0x15])) {
    param_1[0x14] = param_2[0x14];
    *(int *)(param_1 + 0x15) = (int)param_2[0x15];
    param_1[0x16] = 0;
  }
  param_1[0x17] = param_2[0x17];
  lVar14 = param_2[0x19];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0xcc);
  uVar8 = *(undefined8 *)((longlong)param_2 + 0xd4);
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = lVar14;
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0xd4) = uVar8;
  return param_1;
}



// FUNCTION 1409d53c2 FUN_1409d53c2 body=735 status=ok
// SIG undefined FUN_1409d53c2(void)

void FUN_1409d53c2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 8))(param_2);
  lVar3 = (**(code **)(*param_2 + 0xe0))(param_2);
  if (lVar3 == 0) {
    local_38 = 0;
  }
  else {
    puVar6 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(lVar3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar6,1);
  }
  if (*param_1 != local_38) {
    param_1[2] = 0;
  }
  *param_1 = local_38;
  plVar4 = (longlong *)(**(code **)(*param_2 + 0xd8))(param_2);
  if (param_1 + 3 != plVar4) {
    plVar5 = (longlong *)plVar4[6];
    if ((longlong *)plVar4[6] == (longlong *)0x0) {
      plVar5 = plVar4;
    }
    FUN_1400709d4(param_1 + 3,plVar5,(int)plVar4[7],*(undefined4 *)((longlong)param_1 + 0x54));
  }
  lVar3 = (**(code **)(*param_2 + 0x108))(param_2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0xb] = lVar3;
  lVar3 = (**(code **)(*param_2 + 0x100))(param_2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0xc] = lVar3;
  lVar3 = (**(code **)(*param_2 + 0xa8))(param_2);
  if (*(int *)(lVar3 + 0xdc) != 0) {
    uVar1 = *(uint *)(lVar3 + 0xd8);
    lVar7 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1409d553a;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(lVar3 + 0xdc) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))))
    {
      lVar7 = *plVar4;
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      goto LAB_1409d553a;
    }
  }
  lVar7 = 0;
LAB_1409d553a:
  param_1[0x13] = lVar7;
  (**(code **)(*param_2 + 0xb0))(param_2,&local_50);
  param_1[0xf] = local_40;
  *(undefined4 *)(param_1 + 0xd) = local_50;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_4c;
  *(undefined4 *)(param_1 + 0xe) = uStack_48;
  *(undefined4 *)((longlong)param_1 + 0x74) = uStack_44;
  (**(code **)(*param_2 + 0xb8))(param_2,&local_50);
  param_1[0x12] = local_40;
  *(undefined4 *)(param_1 + 0x10) = local_50;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_4c;
  *(undefined4 *)(param_1 + 0x11) = uStack_48;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_44;
  plVar4 = (longlong *)(**(code **)(*param_2 + 0xd0))(param_2);
  if ((param_1[0x14] != *plVar4) || ((int)param_1[0x15] != (int)plVar4[1])) {
    param_1[0x14] = *plVar4;
    *(int *)(param_1 + 0x15) = (int)plVar4[1];
    param_1[0x16] = 0;
  }
  param_1[0x17] = plVar4[3];
  cVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = plVar4[1];
    param_1[0x18] = *plVar4;
    param_1[0x19] = lVar3;
    param_1[0x1a] = plVar4[2];
    *(int *)(param_1 + 0x1b) = (int)plVar4[3];
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d56a8 FUN_1409d56a8 body=34 status=ok
// SIG undefined FUN_1409d56a8(void)

void FUN_1409d56a8(undefined8 param_1)

{
  FUN_140cf5864();
  FUN_140cf57c4(param_1);
  FUN_1409d56ca(param_1);
  return;
}



// FUNCTION 1409d56ca FUN_1409d56ca body=329 status=ok
// SIG undefined FUN_1409d56ca(void)

void FUN_1409d56ca(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    return;
  }
  cVar5 = FUN_143da03ec();
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (((lVar2 != 0) && (((*(byte *)(lVar2 + 0x2dc) & 0x40) == 0) == (bool)cVar5)) &&
     (*(byte *)(lVar2 + 0x2dc) = *(byte *)(lVar2 + 0x2dc) & 0xbf | cVar5 << 6,
     (~*(byte *)(lVar2 + 0x9c) & 3) == 0)) {
    bVar6 = *(byte *)(lVar2 + 0x9d);
    if ((bVar6 & 1) != 0) {
      if ((*(longlong *)(lVar2 + 0xb0) != 0) || (lVar7 = FUN_1448abda6(lVar2), lVar7 != 0))
      goto LAB_1409d5765;
      bVar6 = *(byte *)(lVar2 + 0x9d);
    }
    *(byte *)(lVar2 + 0x9d) = bVar6 | 1;
    FUN_1401057d4(lVar2);
    FUN_14010586c(&DAT_14cad0140,lVar2);
  }
LAB_1409d5765:
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      if (((lVar3 != 0) && (((*(byte *)(lVar3 + 0x2dc) & 0x40) == 0) == (bool)cVar5)) &&
         (*(byte *)(lVar3 + 0x2dc) = *(byte *)(lVar3 + 0x2dc) & 0xbf | cVar5 << 6,
         (~*(byte *)(lVar3 + 0x9c) & 3) == 0)) {
        bVar6 = *(byte *)(lVar3 + 0x9d);
        if ((bVar6 & 1) != 0) {
          if ((*(longlong *)(lVar3 + 0xb0) != 0) || (lVar4 = FUN_1448abda6(lVar3), lVar4 != 0))
          goto LAB_1409d57fb;
          bVar6 = *(byte *)(lVar3 + 0x9d);
        }
        *(byte *)(lVar3 + 0x9d) = bVar6 | 1;
        FUN_1401057d4(lVar3);
        FUN_14010586c(&DAT_14cad0140,lVar3);
      }
LAB_1409d57fb:
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return;
}



// FUNCTION 1409d5822 FUN_1409d5822 body=31 status=ok
// SIG undefined FUN_1409d5822(void)

undefined8 FUN_1409d5822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409d584a FUN_1409d584a body=455 status=ok
// SIG undefined FUN_1409d584a(void)

undefined8 FUN_1409d584a(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      local_39 = *(byte *)(param_1 + 0x38);
      puVar3 = (ulonglong *)param_2[1];
      pbVar1 = (byte *)*puVar3 + 1;
      if ((byte *)puVar3[1] < pbVar1) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_39,1);
      }
      else {
        local_39 = *(byte *)*puVar3;
        *puVar3 = (ulonglong)pbVar1;
      }
      if (local_39 != 0) {
        lVar6 = 8;
        uVar7 = 0;
        do {
          lVar4 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(param_1 + 0x30) == 0) {
            lVar4 = param_1;
          }
          local_58 = *(undefined8 *)(lVar4 + -8 + lVar6);
          local_50 = *(undefined4 *)(lVar4 + lVar6);
          local_48 = 0;
          FUN_1409d5a60(param_2,&local_58);
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (uVar7 < local_39);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_1409d5a12(param_1);
    }
    puVar3 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar3 + 1;
    if ((byte *)puVar3[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_39,1);
    }
    else {
      local_39 = *(byte *)*puVar3;
      *puVar3 = (ulonglong)pbVar1;
    }
    if (local_39 != 0) {
      bVar5 = 0;
      do {
        local_58 = 0;
        local_50 = 0x3003;
        local_48 = 0;
        FUN_1409d5a60(param_2,&local_58);
        iVar2 = *(int *)(param_1 + 0x38);
        lVar6 = (longlong)iVar2;
        *(uint *)(param_1 + 0x38) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
          FUN_1409d5af8(param_1,iVar2);
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar4 = param_1;
        }
        *(undefined8 *)(lVar4 + lVar6 * 0x18) = local_58;
        *(undefined4 *)(lVar4 + 8 + lVar6 * 0x18) = local_50;
        *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = 0;
        bVar5 = bVar5 + 1;
      } while (bVar5 < local_39);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1409d5a12 FUN_1409d5a12 body=78 status=ok
// SIG undefined FUN_1409d5a12(void)

void FUN_1409d5a12(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x30),
              (longlong)*(int *)((longlong)param_1 + 0x38) * 0x18);
      FUN_1446efa72((longlong)param_1 + 0x30,0,0,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 1409d5a60 FUN_1409d5a60 body=151 status=ok
// SIG undefined FUN_1409d5a60(void)

longlong * FUN_1409d5a60(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_28 = *param_2;
    (**(code **)(*param_1 + 0x160))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x160))(param_1,&local_28);
    if (*param_2 != local_28) {
      param_2[2] = 0;
    }
    *param_2 = local_28;
  }
  FUN_14041e882(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d5af8 FUN_1409d5af8 body=367 status=ok
// SIG undefined FUN_1409d5af8(void)

void FUN_1409d5af8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar5;
  
  uVar3 = *(uint *)(param_1 + 0x38);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  iVar9 = 2;
  if (2 < uVar3) {
    if (*(uint *)(param_1 + 0x3c) < 3) {
      uVar4 = 4;
      if (4 < uVar3) {
        uVar4 = uVar3;
      }
      lVar5 = (longlong)(int)uVar4;
    }
    else {
      lVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar6 = lVar5 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_1409d5ba1;
              lVar5 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_1409d5ba1:
    iVar7 = (int)(uVar6 / 0x18);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar7) {
      iVar9 = iVar7;
    }
  }
  *(int *)(param_1 + 0x3c) = iVar9;
  FUN_140070b9e(param_1,param_2);
  return;
}



// FUNCTION 1409d5c68 FUN_1409d5c68 body=28 status=ok
// SIG undefined FUN_1409d5c68(void)

undefined8 FUN_1409d5c68(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
  }
  return uVar1;
}



// FUNCTION 1409d5c94 FUN_1409d5c94 body=57 status=ok
// SIG undefined FUN_1409d5c94(void)

void FUN_1409d5c94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22bf0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22bf0 = FUN_140002ddd(FUN_14643b160,uVar1,L"GpsGenerator_Territory");
  }
  return;
}



// FUNCTION 1409d5cce FUN_1409d5cce body=2162 status=ok
// SIG undefined FUN_1409d5cce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d5cce(longlong *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  double *pdVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
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
  undefined1 auVar32 [16];
  double _X;
  double _X_00;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double _X_01;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  longlong *local_108;
  double dStack_100;
  undefined4 local_f0 [4];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1409d6668();
  plVar14 = (longlong *)param_1[0x10];
  if (plVar14 == (longlong *)0x0) {
LAB_1409d646a:
    param_1[0xf6] = 0;
  }
  else {
    lVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    lVar12 = FUN_1409d6548();
    if (((lVar12 == 0) || (*(int *)(lVar11 + 0x38) < *(int *)(lVar12 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
        lVar12 + 0x30)) goto LAB_1409d646a;
    param_1[0xf6] = (longlong)plVar14;
    if ((char)plVar14[0xfa] == '\x01') {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar11 = param_1[4];
      }
      else {
        lVar11 = 0;
      }
      if ((*(char *)(lVar11 + 0x178) == '\x03') && (lVar11 = param_1[0x31], lVar11 != 0)) {
        lVar12 = FUN_144a7a5f4();
        if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
          lVar12 = *(longlong *)(lVar11 + 0xe80);
          if (lVar12 != 0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar12);
          }
          bVar9 = DAT_14c950c29;
          param_1[0xf7] = lVar12;
          lVar11 = *(longlong *)(lVar11 + 0xe88);
          if ((lVar11 != 0) && ((bVar9 & 1) != 0)) {
            FUN_1456cec3c(lVar11);
          }
          param_1[0xf8] = lVar11;
        }
      }
    }
  }
  *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xfe;
  lVar11 = param_1[0x31];
  bVar8 = true;
  if (lVar11 == 0) {
LAB_1409d5f9e:
    plVar14 = (longlong *)0x0;
  }
  else {
    uVar13 = FUN_1409d6582();
    plVar14 = (longlong *)FUN_144718840(lVar11,uVar13);
    if (plVar14 == (longlong *)0x0) goto LAB_1409d5f9e;
    if ((*(byte *)((longlong)param_1 + 0x105) & 0x10) != 0) {
      iVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
      *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xfe | iVar10 - 1U < 2;
      if (param_1[0xd3] != 0) {
        lVar11 = (**(code **)(*plVar14 + 0x18))(plVar14);
        if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x40))) {
          local_118 = (double)((ulonglong)local_118 & 0xffffffffffffff00);
          local_f0[0] = 0;
          FUN_1456bb102(&local_118,param_1[0x31]);
          local_130 = *(double *)(lVar11 + 0x38);
          local_128 = (double)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar11 + 0x40));
          FUN_140e99737(param_1[0xd3],&local_130,&local_118);
          FUN_144a5ac3a(&local_118);
        }
      }
    }
    if (param_1[0xd3] != 0) {
      lVar11 = (**(code **)(*plVar14 + 0x48))(plVar14);
      if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x40))) {
        local_118 = (double)((ulonglong)local_118 & 0xffffffffffffff00);
        local_f0[0] = 0;
        FUN_1456bb102(&local_118,param_1[0x31]);
        local_130 = *(double *)(lVar11 + 0x38);
        local_128 = (double)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar11 + 0x40));
        FUN_140e99737(param_1[0xd3],&local_130,&local_118);
        FUN_1448173f8(local_f0);
        if ((local_118._0_1_ == '\x03') && (local_108 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_108 + 0x10))();
          }
        }
      }
    }
    bVar8 = false;
  }
  if (param_1[0xd2] != 0) {
    if (param_1[0xf7] != 0) {
      FUN_1409d8d1a();
    }
    if (param_1[0xf8] != 0) {
      FUN_1409d939c(param_1[0xf8],param_1[0xd2]);
    }
  }
  if (((param_1[0xd3] != 0) && ((*(byte *)((longlong)param_1 + 0x105) & 0x20) != 0)) && (!bVar8)) {
    lVar11 = (**(code **)(*plVar14 + 0x50))(plVar14);
    if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x40))) {
      local_118 = (double)((ulonglong)local_118 & 0xffffffffffffff00);
      local_f0[0] = 0;
      FUN_1456bb102(&local_118,param_1[0x31]);
      local_130 = *(double *)(lVar11 + 0x38);
      local_128 = (double)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar11 + 0x40));
      FUN_140e99737(param_1[0xd3],&local_130,&local_118);
      FUN_144a5ac3a(&local_118);
    }
  }
  if (*(char *)((longlong)param_1 + 0x794) == '\0') {
    *(byte *)((longlong)param_1 + 0x794) = *(byte *)(param_1 + 0x75) >> 2 & 1;
  }
  if (((param_1[0xd3] == 0) || (param_1[0xf6] == 0)) || (*(char *)(param_1[0xf6] + 0x7d1) != '\x01')
     ) goto LAB_1409d5e7e;
  plVar14 = (longlong *)param_1[0x30];
  if (plVar14 == (longlong *)0x0) {
    local_138 = DAT_14c8464f0;
    local_148 = DAT_14c8464e0;
    dStack_140 = DAT_14c8464e8;
  }
  else {
    (**(code **)(*plVar14 + 0x328))(plVar14,&local_148);
  }
  lVar11 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar11 == 0) {
    dVar6 = 0.0;
  }
  else {
    lVar11 = (**(code **)(*param_1 + 0x180))(param_1);
    dVar6 = (double)*(float *)(lVar11 + 0x6f4);
  }
  dVar7 = local_138 * dVar6;
  dVar5 = dStack_140 * dVar6;
  dVar6 = dVar6 * local_148;
  lVar11 = param_1[0xd3];
  dVar16 = (double)*(float *)(param_1[0xf6] + 0x7d4);
  dVar2 = *(double *)(lVar11 + 0x1a8);
  dVar3 = *(double *)(lVar11 + 0x1a0);
  dVar4 = *(double *)(lVar11 + 0x198);
  auVar21 = *(undefined1 (*) [16])(lVar11 + 0x1b0);
  dVar18 = auVar21._0_8_;
  dVar30 = auVar21._8_8_;
  dVar17 = *(double *)(lVar11 + 0x1c0);
  pdVar15 = *(double **)(lVar11 + 0x230);
  if (pdVar15 == (double *)0x0) {
    pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
    dVar19 = DAT_14c8463d8;
    *pdVar15 = DAT_14c8463d0;
    pdVar15[1] = dVar19;
    dVar19 = DAT_14c8463e8;
    pdVar15[2] = DAT_14c8463e0;
    pdVar15[3] = dVar19;
    dVar19 = DAT_14c846500;
    pdVar15[4] = DAT_14c8464f8;
    pdVar15[5] = dVar19;
    pdVar15[6] = DAT_14c846508;
    *(double **)(lVar11 + 0x230) = pdVar15;
  }
  auVar25 = _DAT_1499387d0;
  if ((((pdVar15[4] != dVar18) || (NAN(pdVar15[4]) || NAN(dVar18))) || (pdVar15[5] != dVar30)) ||
     (NAN(pdVar15[5]) || NAN(dVar30))) {
LAB_1409d6161:
    auVar27._8_8_ = 0;
    auVar27._0_8_ = dVar17;
    dVar19 = (double)DAT_1499387d0;
    dVar20 = DAT_1499387d0._8_8_;
    auVar21 = divpd(auVar21,_DAT_1499387d0);
    auVar24 = divpd(auVar27,_DAT_1499387d0);
    auVar21 = roundpd(auVar21,auVar21,3);
    auVar24 = roundpd(auVar24,auVar24,3);
    auVar33._0_8_ = dVar18 - auVar21._0_8_ * dVar19;
    auVar33._8_8_ = dVar30 - auVar21._8_8_ * dVar20;
    auVar28._0_8_ = dVar17 - auVar24._0_8_ * dVar19;
    auVar28._8_8_ = 0.0 - auVar24._8_8_ * dVar20;
    auVar31._0_8_ = auVar33._0_8_ + dVar19;
    auVar31._8_8_ = auVar33._8_8_ + dVar20;
    auVar26._0_8_ = auVar28._0_8_ + dVar19;
    auVar26._8_8_ = auVar28._8_8_ + dVar20;
    auVar24._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
    auVar24._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
    auVar21 = blendvpd(auVar31,auVar33,auVar24);
    auVar32._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
    auVar32._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
    auVar24 = blendvpd(auVar26,auVar28,auVar32);
    auVar29._0_8_ = auVar21._0_8_ + -360.0;
    auVar29._8_8_ = auVar21._8_8_ + -360.0;
    auVar22._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
    auVar22._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
    auVar32 = blendvpd(auVar21,auVar29,auVar22);
    auVar23._8_8_ = -(ulonglong)(180.0 < auVar24._8_8_);
    auVar23._0_8_ = -(ulonglong)(180.0 < auVar24._0_8_);
    auVar21._8_8_ = auVar24._8_8_ + 0.0;
    auVar21._0_8_ = auVar24._0_8_ + -360.0;
    auVar21 = blendvpd(auVar24,auVar21,auVar23);
    *(undefined1 (*) [16])(pdVar15 + 4) = auVar32;
    dVar17 = auVar21._0_8_;
    pdVar15[6] = dVar17;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = dVar17;
    auVar21 = divpd(auVar32,auVar25);
    auVar25 = divpd(auVar34,auVar25);
    auVar21 = roundpd(auVar21,auVar21,3);
    auVar25 = roundpd(auVar25,auVar25,3);
    dVar30 = (auVar32._0_8_ - auVar21._0_8_ * dVar19) * 0.008726646259971648;
    _X = (auVar32._8_8_ - auVar21._8_8_ * dVar20) * 0.008726646259971648;
    _X_00 = (dVar17 - auVar25._0_8_ * dVar19) * 0.008726646259971648;
    _X_01 = (0.0 - auVar25._8_8_ * dVar20) * 0.008726646259971648;
    local_158 = sin(dVar30);
    dVar17 = sin(_X);
    dVar18 = sin(_X_00);
    sin(_X_01);
    dVar30 = cos(dVar30);
    dVar19 = cos(_X);
    dVar20 = cos(_X_00);
    cos(_X_01);
    *pdVar15 = local_158 * dVar17 * dVar20 - dVar30 * dVar19 * dVar18;
    pdVar15[1] = -(local_158 * dVar19 * dVar20) - dVar30 * dVar17 * dVar18;
    pdVar15[2] = -(dVar19 * local_158 * dVar18) + dVar17 * dVar30 * dVar20;
    pdVar15[3] = dVar17 * local_158 * dVar18 + dVar19 * dVar30 * dVar20;
  }
  else if ((pdVar15[6] != dVar17) || (NAN(pdVar15[6]) || NAN(dVar17))) goto LAB_1409d6161;
  local_118 = *pdVar15;
  dStack_110 = pdVar15[1];
  local_108 = (longlong *)pdVar15[2];
  dStack_100 = pdVar15[3];
  local_160 = 0;
  local_168 = 0;
  local_130 = dVar6 * dVar16 + dVar4;
  local_128 = dVar5 * dVar16 + dVar3;
  local_120 = dVar7 * dVar16 + dVar2;
  FUN_144927ad4(lVar11,&local_130,&local_118,0);
LAB_1409d5e7e:
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d6548 FUN_1409d6548 body=57 status=ok
// SIG undefined FUN_1409d6548(void)

void FUN_1409d6548(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabf68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabf68 = FUN_140002ddd(FUN_1465dfb22,uVar1,L"OakLightProjectileDef");
  }
  return;
}



// FUNCTION 1409d6582 FUN_1409d6582 body=228 status=ok
// SIG undefined FUN_1409d6582(void)

longlong FUN_1409d6582(void)

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
  if (DAT_14cbc1308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148cc3127;
    local_40 = FUN_14661b050;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"WeaponManufacturerModInterface",&DAT_14cbc1308,&DAT_148cc3126
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc1308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d6668 FUN_1409d6668 body=9905 status=ok
// SIG undefined FUN_1409d6668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409d6668(longlong *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  code *pcVar3;
  int *piVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  undefined4 extraout_EAX;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  undefined ***pppuVar21;
  float *pfVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  int iVar26;
  char cVar27;
  bool bVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  ulonglong local_3c0;
  uint local_3b8;
  undefined8 local_3b0;
  wchar_t *local_3a8;
  code *local_3a0;
  undefined1 *local_398;
  code **local_390;
  code *local_388;
  code *local_380;
  undefined1 local_378 [16];
  double local_368;
  double local_360;
  double local_358;
  double dStack_350;
  longlong local_348;
  longlong local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  code *local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  code *local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  longlong *local_2a8;
  longlong *local_2a0;
  double local_298;
  int iStack_290;
  undefined4 uStack_28c;
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
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
  undefined **local_158;
  longlong *local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  code *local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar25 = param_1[4];
  }
  else {
    lVar25 = 0;
  }
  (**(code **)(*param_1 + 0x328))(param_1);
  param_1[0xa2] = 0;
  local_1f8._0_8_ = param_1[0x24];
  FUN_1446dcdd4(&local_178);
  if (DAT_14cb853e8 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_144837462();
  }
  param_1[0x10] = lVar13;
  if (local_168._8_8_ != 0) {
    FUN_1400020a8();
    lVar13 = param_1[0x10];
  }
  if (lVar13 == 0) goto LAB_1409d87c5;
  uVar19 = (*(uint *)(param_1 + 0x20) & 0xffc7a7e2) + 1;
  *(uint *)(param_1 + 0x20) = uVar19;
  uVar23 = 0;
  if ((*(byte *)(lVar13 + 0x368) & 0x40) != 0) {
    uVar23 = (uint)(*(float *)(lVar13 + 0x36c) <= 0.0) << 0x10;
  }
  *(uint *)(param_1 + 0x20) = uVar19 & 0xebc6a7e3 | uVar23;
  lVar13 = (**(code **)(*param_1 + 0x180))(param_1);
  *(float *)((longlong)param_1 + 0x31c) = (float)*(double *)(lVar13 + 0x6d0);
  *(undefined2 *)((longlong)param_1 + 0x104) = *(undefined2 *)((longlong)param_1 + 0x1dc);
  *(undefined2 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0xc9] = 0;
  if ((char)param_1[0xa1] == '\x01') {
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  *(byte *)((longlong)param_1 + 0x103) = *(byte *)((longlong)param_1 + 0x103) & 0xf7;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  uVar10 = *(ushort *)((longlong)param_1 + 0x1de);
  lVar13 = param_1[0x10];
  if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x208) & 2) != 0)) {
    uVar10 = uVar10 & ~*(ushort *)(lVar13 + 0x20a);
  }
  if (uVar10 != 0) {
    *(ushort *)(param_1 + 0x75) = uVar10;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  local_2a8 = (longlong *)0x0;
  if ((param_1 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
    if (param_1 != (longlong *)0x0) goto LAB_1409d6890;
    plVar24 = (longlong *)&DAT_00000030;
    local_2a0 = (longlong *)0x0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_1409d6890:
    local_2a0 = param_1 + 6;
    plVar24 = local_2a0;
  }
  local_2a8 = param_1;
  FUN_1407042f6(param_1 + 0xb4);
  *(int *)(param_1 + 0xb7) = (int)param_1[0x3c];
  *(int *)((longlong)param_1 + 0x5bc) = (int)param_1[0x3c];
  (**(code **)(*param_1 + 800))(param_1);
  cVar8 = (**(code **)(*plVar24 + 0x68))(plVar24);
  if (cVar8 != '\0') {
    *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) & 0xfe;
    FUN_143dc1470(param_1,1);
  }
  if (((*(byte *)((longlong)param_1 + 0x105) & 4) != 0) &&
     (FUN_143dc126e(param_1,10), (char)param_1[0xb6] != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x5b1) = 1;
  }
  lVar13 = param_1[0x10];
  fVar41 = *(float *)(lVar13 + 0x50);
  if (fVar41 <= 0.01) {
    fVar41 = 0.01;
  }
  *(float *)(param_1 + 100) = fVar41;
  fVar41 = *(float *)(param_1 + 0x3b);
  if (fVar41 < 0.0) {
    fVar41 = *(float *)(lVar13 + 0x2fc);
  }
  *(float *)(param_1 + 0xd1) = fVar41;
  bVar9 = *(byte *)(lVar13 + 0x308);
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfeffffff | (bVar9 & 1) << 0x18;
  lVar15 = DAT_14c8463d8;
  param_1[0xd8] = DAT_14c8463d0;
  param_1[0xd9] = lVar15;
  lVar15 = DAT_14c8463e8;
  param_1[0xda] = DAT_14c8463e0;
  param_1[0xdb] = lVar15;
  if ((bVar9 & 1) != 0) {
    param_1[0xde] = *(longlong *)(lVar13 + 800);
    lVar15 = *(longlong *)(lVar13 + 0x318);
    param_1[0xdc] = *(longlong *)(lVar13 + 0x310);
    param_1[0xdd] = lVar15;
  }
  uVar19 = 0;
  if (((param_1[0x30] != 0) &&
      (plVar14 = (longlong *)FUN_140ed3994(), uVar19 = 0, plVar14 != (longlong *)0x0)) &&
     ((*(byte *)(plVar14 + 0x84) & 2) != 0)) {
    bVar9 = (**(code **)(*plVar14 + 0x6c8))(plVar14);
    uVar19 = (uint)bVar9 * 2;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffd | uVar19;
  if ((*(ushort *)((longlong)param_1 + 0x104) & 0x40) != 0) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar13 = param_1[4];
    }
    else {
      lVar13 = 0;
    }
    if (*(char *)(lVar13 + 0x178) != '\x03') {
      *(ushort *)((longlong)param_1 + 0x104) = *(ushort *)((longlong)param_1 + 0x104) & 0xffbf;
    }
  }
  lVar13 = FUN_14082ce84(param_1[0x10] + 0x3f8);
  param_1[0x7c] = param_1[0x27];
  param_1[0x7d] = param_1[0x28];
  param_1[0x7e] = param_1[0x29];
  param_1[0x85] = param_1[0x27];
  param_1[0x86] = param_1[0x28];
  param_1[0x87] = param_1[0x29];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)((longlong)param_1 + 0x1e4);
  *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x48];
  param_1[0x1b] = *(longlong *)((longlong)param_1 + 0x244);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x24c);
  local_1f8._0_8_ = param_1[0x3d];
  FUN_1446dcdd4(&local_178);
  if (DAT_14cb77da0 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = FUN_144837462(DAT_14cb77da0,&local_178);
  }
  param_1[0x12] = lVar15;
  if (local_168._8_8_ != 0) {
    FUN_1400020a8();
  }
  plVar14 = param_1 + 0x13;
  plVar20 = param_1 + 0x40;
  if ((longlong *)param_1[0x46] != (longlong *)0x0) {
    plVar20 = (longlong *)param_1[0x46];
  }
  FUN_1400709d4(plVar14,plVar20,(int)param_1[0x47],*(undefined4 *)((longlong)param_1 + 0xd4));
  lVar15 = param_1[0x10];
  if (*(int *)(lVar15 + 0x3b8) < 1) {
LAB_1409d6b5e:
    if (lVar13 != 0) {
      plVar20 = (longlong *)(lVar13 + 0x38);
      goto LAB_1409d6b6b;
    }
  }
  else {
    plVar20 = (longlong *)(lVar15 + 0x380);
    plVar16 = *(longlong **)(lVar15 + 0x3b0);
    if (*(longlong **)(lVar15 + 0x3b0) == (longlong *)0x0) {
      plVar16 = plVar20;
    }
    if ((*plVar16 == 0) || (0xfffffffd < (int)plVar16[1] - 1U)) goto LAB_1409d6b5e;
LAB_1409d6b6b:
    if (plVar20 != (longlong *)0x0) {
      if (0 < (int)param_1[0x1a]) {
        plVar16 = (longlong *)param_1[0x19];
        if ((longlong *)param_1[0x19] == (longlong *)0x0) {
          plVar16 = plVar14;
        }
        if ((*plVar16 != 0) && ((int)plVar16[1] - 1U < 0xfffffffe)) {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = local_168._8_8_;
          local_168 = auVar40 << 0x40;
          local_158 = &PTR_LAB_14b414ee0;
          local_178 = FUN_143dcd866;
          local_150 = param_1;
          FUN_140cf3304(plVar20,&local_178);
          if (local_178 != (code *)0x0) {
            pppuVar21 = (undefined ***)local_168._0_8_;
            if ((undefined ***)local_168._0_8_ == (undefined ***)0x0) {
              pppuVar21 = &local_158;
            }
            (*(code *)(*pppuVar21)[2])();
          }
          goto LAB_1409d6c10;
        }
      }
      if (plVar14 != plVar20) {
        plVar16 = (longlong *)plVar20[6];
        if ((longlong *)plVar20[6] == (longlong *)0x0) {
          plVar16 = plVar20;
        }
        FUN_1400709d4(plVar14,plVar16,(int)plVar20[7],*(undefined4 *)((longlong)param_1 + 0xd4));
      }
    }
  }
LAB_1409d6c10:
  lVar15 = param_1[0x4a];
  if (param_1[0x1d] == lVar15) {
    iVar26 = (int)param_1[0x1e];
    iVar11 = (int)param_1[0x4b];
    if (iVar26 != (int)param_1[0x4b]) goto LAB_1409d6c38;
  }
  else {
    iVar11 = (int)param_1[0x4b];
LAB_1409d6c38:
    iVar26 = iVar11;
    param_1[0x1d] = lVar15;
    *(int *)(param_1 + 0x1e) = iVar26;
    param_1[0x1f] = 0;
  }
  if ((lVar15 == 0) || (0xfffffffd < iVar26 - 1U)) {
    lVar18 = param_1[0x10];
    lVar2 = *(longlong *)(lVar18 + 0x1d8);
    if (lVar2 != 0) {
      if (*(int *)(lVar18 + 0x1e0) - 1U < 0xfffffffe) {
        if (*(int *)(lVar18 + 0x1e0) == 0x3d418293) {
          local_178 = (code *)0x0;
          dStack_170 = (double)CONCAT44(dStack_170._4_4_,*(undefined4 *)((longlong)param_1 + 0x8c));
          local_168._0_8_ = param_1[0x12];
          FUN_141125464(lVar18 + 0x1d8,local_1f8);
          if ((param_1[0x1d] != local_1f8._0_8_) || ((int)param_1[0x1e] != local_1f8._8_4_)) {
            param_1[0x1d] = local_1f8._0_8_;
            *(undefined4 *)(param_1 + 0x1e) = local_1f8._8_4_;
            param_1[0x1f] = 0;
          }
        }
        else {
          if (lVar15 != lVar2) {
            param_1[0x1f] = 0;
          }
          param_1[0x1d] = lVar2;
        }
      }
    }
  }
  uVar19 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar19 & 0xffff7fff;
  if ((0.0 < *(float *)((longlong)param_1 + 0x8c)) ||
     ((lVar13 != 0 && (*(longlong *)(lVar13 + 0x348) != 0)))) {
    *(uint *)(param_1 + 0x20) = uVar19 | 0x8000;
  }
  plVar14 = param_1 + 0x7c;
  *(undefined4 *)((longlong)param_1 + 0x344) = 6;
  if (((*(byte *)(param_1[0x10] + 0x368) & 2) != 0) &&
     (plVar20 = (longlong *)param_1[0x30], plVar20 != (longlong *)0x0)) {
    if (DAT_14cb223d8 == 0) {
      local_178 = FUN_1449e2820;
      local_380 = FUN_14081d0ea;
      local_388 = FUN_1427b09ee;
      local_398 = &LAB_147f29feb;
      local_3a0 = FUN_1464384fe;
      local_3a8 = L"Engine";
      local_3b0 = 0;
      local_3b8 = 0x10004001;
      local_3c0 = CONCAT44(local_3c0._4_4_,8);
      local_3c8 = (longlong *)CONCAT44(local_3c8._4_4_,0x28);
      local_390 = &local_178;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar20 = (longlong *)(**(code **)(*plVar20 + 0x288))(plVar20,DAT_14cb223d8);
    if (plVar20 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_178 = FUN_1449e2820;
        local_380 = FUN_14081d0ea;
        local_388 = FUN_1427b09ee;
        local_398 = &LAB_147f29feb;
        local_3a0 = FUN_1464384fe;
        local_3a8 = L"Engine";
        local_3b0 = 0;
        local_3b8 = 0x10004001;
        local_3c0 = CONCAT44(local_3c0._4_4_,8);
        local_3c8 = (longlong *)CONCAT44(local_3c8._4_4_,0x28);
        local_390 = &local_178;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar16 = (longlong *)FUN_144718840(plVar20,DAT_14cb223d8);
      if (((plVar20 != plVar16) && (plVar16 != (longlong *)0x0)) &&
         (lVar13 = (**(code **)(*plVar16 + 0x10))(plVar16), lVar13 != 0)) {
        uVar1 = *(undefined2 *)(lVar13 + 0x28);
        lVar15 = *(longlong *)(lVar13 + 0x30);
        param_1[8] = *(longlong *)(lVar13 + 0x20);
        *(undefined2 *)(param_1 + 9) = uVar1;
        param_1[10] = lVar15;
        local_178 = (code *)((ulonglong)local_178 & 0xffff000000000000);
        cVar8 = FUN_140e8181a(lVar13,(longlong)param_1 + 0x344);
        if (cVar8 != '\0') {
          lVar15 = 0;
          do {
            if (*(char *)((longlong)&local_178 + lVar15) == '\x01') {
              *(byte *)((longlong)param_1 + 0x347) =
                   *(byte *)((longlong)param_1 + 0x347) | (byte)(1 << ((byte)lVar15 & 0x1f));
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 != 6);
          bVar9 = *(byte *)(param_1[0x10] + 0x368) >> 3 & 1;
          if ((*(byte *)(param_1[0x10] + 0x368) & 4) == 0) {
            bVar9 = *(byte *)(lVar13 + 0x52);
          }
          if (bVar9 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x345) = 1;
            *(char *)((longlong)param_1 + 0x346) =
                 (char)(1 << (*(byte *)((longlong)param_1 + 0x344) & 0x1f));
          }
        }
      }
    }
  }
  param_1[0x97] = param_1[0x7e];
  param_1[0x95] = *plVar14;
  param_1[0x96] = param_1[0x7d];
  param_1[0x81] = param_1[0x7e];
  param_1[0x7f] = *plVar14;
  param_1[0x80] = param_1[0x7d];
  param_1[0x8a] = param_1[0x7e];
  param_1[0x88] = *plVar14;
  param_1[0x89] = param_1[0x7d];
  param_1[0x94] = DAT_14c8464f0;
  lVar13 = DAT_14c8464e8;
  param_1[0x92] = DAT_14c8464e0;
  param_1[0x93] = lVar13;
  param_1[0x6b] = param_1[0x7e];
  param_1[0x69] = *plVar14;
  param_1[0x6a] = param_1[0x7d];
  param_1[0x8e] = *plVar14;
  param_1[0x8f] = param_1[0x7d];
  param_1[0x90] = param_1[0x7e];
  param_1[0x8b] = *plVar14;
  param_1[0x8c] = param_1[0x7d];
  param_1[0x8d] = param_1[0x7e];
  *(undefined1 *)(param_1 + 0x91) = 1;
  lVar13 = param_1[0x10];
  pfVar22 = (float *)(lVar13 + 0x360);
  if (0.0 < *(float *)(lVar13 + 0x374)) {
    pfVar22 = (float *)(lVar13 + 0x374);
  }
  dVar30 = (double)*pfVar22;
  param_1[0x8b] = (longlong)((double)param_1[0x8b] - dVar30);
  param_1[0x8c] = (longlong)((double)param_1[0x8c] - dVar30);
  param_1[0x8d] = (longlong)((double)param_1[0x8d] - dVar30);
  param_1[0x8e] = (longlong)((double)param_1[0x8e] + dVar30);
  param_1[0x8f] = (longlong)((double)param_1[0x8f] + dVar30);
  param_1[0x90] = (longlong)((double)param_1[0x90] + dVar30);
  *(undefined1 *)(param_1 + 0x91) = 1;
  dVar32 = (double)param_1[0x2a];
  dVar30 = (double)param_1[0x2b];
  dVar31 = 0.0;
  if (((dVar32 != 0.0) || (NAN(dVar32))) || ((dVar30 != 0.0 || (NAN(dVar30))))) {
    dVar31 = atan2(dVar30,dVar32);
    dVar31 = dVar31 * 57.29577951308232;
    dVar32 = (double)param_1[0x2a];
    dVar30 = (double)param_1[0x2b];
  }
  uVar12 = SUB84(pfVar22,0);
  dVar38 = SQRT(dVar32 * dVar32 + dVar30 * dVar30);
  dVar30 = (double)param_1[0x2c];
  dVar32 = 0.0;
  if (((dVar30 != 0.0) || (NAN(dVar30))) || ((dVar38 != 0.0 || (NAN(dVar38))))) {
    dVar32 = atan2(dVar30,dVar38);
    dVar32 = dVar32 * 57.29577951308232;
  }
  lVar13 = param_1[0x10];
  dVar30 = (double)FUN_144719204(*(undefined8 *)(lVar13 + 0x2e0),0x4076800000000000);
  dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                   (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
  if ((dVar30 != 0.0) || (NAN(dVar30))) {
LAB_1409d717b:
    lVar13 = param_1[0x10];
    dVar32 = dVar32 + *(double *)(lVar13 + 0x2e0);
    dVar31 = dVar31 + *(double *)(lVar13 + 0x2e8);
    dVar38 = *(double *)(lVar13 + 0x2f0) + 0.0;
  }
  else {
    dVar30 = (double)FUN_144719204(*(undefined8 *)(lVar13 + 0x2e8),0x4076800000000000);
    dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                     (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
    if ((dVar30 != 0.0) || (NAN(dVar30))) goto LAB_1409d717b;
    dVar30 = (double)FUN_144719204(*(undefined8 *)(lVar13 + 0x2f0),0x4076800000000000);
    dVar38 = 0.0;
    dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                     (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
    if ((dVar30 != 0.0) || (NAN(dVar30))) goto LAB_1409d717b;
  }
  param_1[0x82] = (longlong)dVar32;
  param_1[0x83] = (longlong)dVar31;
  param_1[0x84] = (longlong)dVar38;
  dVar30 = (double)FUN_144719204(dVar32);
  dVar33 = (double)FUN_144719204(dVar31);
  dVar34 = sin(dVar30 * 0.017453292519943295);
  dVar30 = cos(dVar30 * 0.017453292519943295);
  dVar35 = sin(dVar33 * 0.017453292519943295);
  dVar33 = cos(dVar33 * 0.017453292519943295);
  param_1[0x98] = (longlong)(dVar33 * dVar30);
  param_1[0x99] = (longlong)(dVar35 * dVar30);
  param_1[0x9a] = (longlong)dVar34;
  lVar13 = param_1[0x10];
  fVar41 = *(float *)(lVar13 + 0x2d4);
  *(float *)(param_1 + 0xcc) = fVar41;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(lVar13 + 0x2d8);
  uVar19 = -(uint)(0.0 < *(float *)(lVar13 + 0x2dc));
  fVar5 = (float)(~uVar19 & *(uint *)(lVar13 + 0x2d4) | (uint)*(float *)(lVar13 + 0x2dc) & uVar19);
  *(float *)((longlong)param_1 + 0x684) = fVar5;
  if ((char)param_1[0x3a] == '\x02') {
    fVar41 = *(float *)((longlong)param_1 + 0x1d4);
    *(float *)(param_1 + 0xcc) = fVar41;
    fVar45 = fVar41;
    if (*(float *)(lVar13 + 0x2dc) <= 0.0) goto LAB_1409d72f5;
  }
  else if ((char)param_1[0x3a] == '\x01') {
    fVar45 = fVar41 * *(float *)((longlong)param_1 + 0x1d4);
    *(float *)(param_1 + 0xcc) = fVar45;
    fVar41 = fVar5 * *(float *)((longlong)param_1 + 0x1d4);
LAB_1409d72f5:
    *(float *)((longlong)param_1 + 0x684) = fVar41;
    fVar41 = fVar45;
  }
  dVar39 = (double)fVar41;
  param_1[0xcd] = (longlong)(dVar33 * dVar30 * dVar39);
  param_1[0xce] = (longlong)(dVar35 * dVar30 * dVar39);
  param_1[0xcf] = (longlong)(dVar34 * dVar39);
  auVar43._8_8_ = dVar31;
  auVar43._0_8_ = dVar32;
  auVar40 = divpd(auVar43,_DAT_1499387d0);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = dVar38 / 360.0;
  auVar40 = roundpd(auVar40,auVar40,3);
  auVar43 = roundpd(auVar42,auVar42,3);
  dVar30 = (dVar32 - auVar40._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar32 = (dVar31 - auVar40._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar31 = (dVar38 - auVar43._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar49 = (0.0 - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar38 = sin(dVar30);
  dVar33 = sin(dVar32);
  dVar34 = sin(dVar31);
  sin(dVar49);
  dVar30 = cos(dVar30);
  dVar35 = cos(dVar32);
  dVar39 = cos(dVar31);
  cos(dVar49);
  dVar32 = -(dVar35 * dVar38 * dVar34) + dVar33 * dVar30 * dVar39;
  dVar31 = dVar33 * dVar38 * dVar34 + dVar35 * dVar30 * dVar39;
  dVar49 = dVar38 * dVar33 * dVar39 - dVar30 * dVar35 * dVar34;
  dVar38 = -(dVar38 * dVar35 * dVar39) - dVar30 * dVar33 * dVar34;
  local_2e8 = (code *)0x0;
  dStack_2e0 = 0.0;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_378 = *(undefined1 (*) [16])(lVar13 + 0xe0);
  auVar40 = *(undefined1 (*) [16])(lVar13 + 0xf0);
  dVar30 = auVar40._0_8_;
  auVar43 = minpd(local_378,_DAT_149934d80);
  auVar42 = minpd(auVar40,ZEXT816(0x3ff0000000000000));
  auVar47._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
  auVar47._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
  iVar11 = movmskpd(extraout_EAX,auVar47);
  auVar48._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
  auVar48._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
  uVar19 = movmskpd(uVar12,auVar48);
  if ((uVar19 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar33 = *(double *)(lVar13 + 0xa0);
    dVar34 = *(double *)(lVar13 + 0xa8);
    dVar35 = *(double *)(lVar13 + 0xb0);
    dVar39 = *(double *)(lVar13 + 0xb8);
    dVar6 = *(double *)(lVar13 + 0xc0);
    dVar7 = *(double *)(lVar13 + 200);
    local_308 = (code *)(dVar34 * dVar32 * -1.0 +
                        dVar35 * dVar38 + dVar49 * dVar39 * 1.0 + dVar31 * dVar33);
    dStack_300 = dVar33 * dVar32 * 1.0 + dVar39 * dVar38 + dVar49 * dVar35 * -1.0 + dVar31 * dVar34;
    local_2f8._0_8_ =
         dVar39 * dVar32 * 1.0 + ((dVar49 * dVar34 * 1.0 + dVar31 * dVar35) - dVar38 * dVar33);
    local_2f8._8_8_ =
         dVar35 * dVar32 * -1.0 + ((dVar49 * dVar33 * -1.0 + dVar31 * dVar39) - dVar38 * dVar34);
    dVar39 = *(double *)(lVar13 + 0xd0) * 1.0;
    dVar50 = *(double *)(lVar13 + 0xd8) * 0.0;
    dVar33 = dVar7 * dVar49 - dVar38 * dVar6;
    dVar34 = dVar39 * dVar38 - dVar32 * dVar7;
    dVar35 = dVar6 * dVar32 - dVar49 * dVar39;
    dVar51 = dVar50 * dVar31 - dVar31 * dVar50;
    dVar34 = dVar34 + dVar34;
    dVar35 = dVar35 + dVar35;
    dVar33 = dVar33 + dVar33;
    dVar51 = dVar51 + dVar51;
    local_2e8 = (code *)((double)param_1[0x7c] +
                        (dVar33 * dVar38 - dVar32 * dVar35) + dVar31 * dVar34 + dVar6);
    dStack_2e0 = (double)param_1[0x7d] +
                 (dVar34 * dVar32 - dVar33 * dVar49) + dVar31 * dVar35 + dVar7;
    local_2d8 = (double)param_1[0x7e] +
                (dVar35 * dVar49 - dVar38 * dVar34) + dVar31 * dVar33 + dVar39;
    dStack_2d0 = (dVar51 * dVar31 - dVar51 * dVar31) + dVar31 * dVar51 + dVar50 + 0.0;
    dVar30 = dVar30 * 1.0;
    dVar32 = auVar40._8_8_ * 0.0;
  }
  else {
    local_358 = dVar30 * 1.0;
    dStack_350 = auVar40._8_8_ * 0.0;
    dVar34 = dVar38 + dVar38;
    dVar35 = dVar32 + dVar32;
    dVar33 = dVar49 * (dVar49 + dVar49);
    dStack_1d0 = 1.0 - (dVar32 * dVar35 + dVar33);
    local_1a8 = 1.0 - (dVar33 + dVar38 * dVar34);
    dStack_1b0 = (dVar49 + dVar49) * dVar31;
    dVar33 = dVar34 * dVar49 + dVar35 * dVar31;
    local_1c8 = dVar35 * dVar38 + dStack_1b0;
    local_1b8 = dVar34 * dVar31 + dVar49 * dVar35;
    local_1d8 = dVar34 * dVar49 - dVar35 * dVar31;
    dStack_1b0 = dVar35 * dVar38 - dStack_1b0;
    local_1e8 = dVar49 * dVar35 - dVar34 * dVar31;
    local_1f8._8_4_ = SUB84(dVar33,0);
    local_1f8._0_8_ = 1.0 - (dVar32 * dVar35 + dVar38 * dVar34);
    local_1f8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0x3ff0000000000000;
    dVar38 = *(double *)(lVar13 + 0xa0);
    dVar33 = *(double *)(lVar13 + 0xa8);
    dVar31 = *(double *)(lVar13 + 0xb0);
    dVar34 = dVar33 + dVar33;
    dVar35 = dVar31 + dVar31;
    dVar32 = dVar38 * (dVar38 + dVar38);
    local_278 = (1.0 - (dVar31 * dVar35 + dVar33 * dVar34)) * (double)local_378._0_8_;
    dStack_250 = (1.0 - (dVar31 * dVar35 + dVar32)) * (double)local_378._8_8_;
    local_228 = (1.0 - (dVar32 + dVar33 * dVar34)) * dVar30;
    dVar31 = *(double *)(lVar13 + 0xa0) * dVar35;
    dVar32 = *(double *)(lVar13 + 0xb8);
    dVar39 = dVar35 * dVar32;
    dVar49 = (dVar38 + dVar38) * *(double *)(lVar13 + 0xb8);
    dVar32 = dVar34 * dVar32;
    dStack_270 = (dVar34 * dVar38 + dVar39) * (double)local_378._0_8_;
    local_248 = (dVar35 * dVar33 + dVar49) * (double)local_378._8_8_;
    local_238 = (dVar32 + dVar31) * dVar30;
    local_258 = (dVar34 * dVar38 - dVar39) * (double)local_378._8_8_;
    dStack_230 = (dVar35 * dVar33 - dVar49) * dVar30;
    local_268 = (dVar31 - dVar32) * (double)local_378._0_8_;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = *(undefined8 *)(lVar13 + 0xc0);
    uStack_210 = *(undefined8 *)(lVar13 + 200);
    local_208 = *(undefined8 *)(lVar13 + 0xd0);
    uStack_200 = 0x3ff0000000000000;
    local_198 = (double)param_1[0x7c];
    dStack_190 = (double)param_1[0x7d];
    local_188 = (double)param_1[0x7e];
    FUN_1447fea8d(&local_178);
    dVar32 = dStack_350;
    dVar30 = local_358;
    local_360 = (double)local_168._0_8_;
    dVar31 = (double)local_168._0_8_ * (double)local_168._0_8_ +
             (double)local_178 * (double)local_178 + dStack_170 * dStack_170;
    local_368 = local_148;
    dVar38 = local_148 * local_148 +
             (double)local_158 * (double)local_158 + (double)local_150 * (double)local_150;
    dVar33 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    uVar29 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar29 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar29);
    uVar29 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
    dVar38 = (double)(~uVar29 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar29);
    uVar29 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
    dVar33 = (double)(~uVar29 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar29);
    auVar36._8_8_ = -(ulonglong)(0.0 <= (double)local_378._8_8_);
    auVar36._0_8_ = -(ulonglong)(0.0 <= (double)local_378._0_8_);
    auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar36);
    dVar34 = (double)(~-(ulonglong)(0.0 <= local_358) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_358) & 0x3ff0000000000000);
    dVar35 = auVar40._0_8_;
    local_178 = (code *)((double)local_178 * dVar31 * dVar35);
    dStack_170 = dStack_170 * dVar31 * dVar35;
    local_168._0_8_ = dVar31 * (double)local_168._0_8_ * dVar35;
    dVar31 = auVar40._8_8_;
    local_148 = dVar38 * local_148 * dVar31;
    local_150 = (longlong *)((double)local_150 * dVar38 * dVar31);
    local_158 = (undefined **)(dVar31 * (double)local_158 * dVar38);
    local_128 = dVar33 * local_128 * dVar34;
    local_130 = local_130 * dVar33 * dVar34;
    local_138 = dVar34 * local_138 * dVar33;
    FUN_14481fd10(&local_298,&local_178);
    dVar31 = (double)CONCAT44(uStack_28c,iStack_290);
    dVar38 = local_288 * local_288 + local_298 * local_298;
    dVar33 = dStack_280 * dStack_280 + dVar31 * dVar31;
    auVar44._0_8_ = dVar38 + dVar33;
    auVar44._8_8_ = dVar38 + dVar33;
    auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
    auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
    auVar40 = sqrtpd(auVar44,auVar44);
    auVar40 = divpd(_DAT_149934d80,auVar40);
    auVar46._0_8_ = auVar40._0_8_ * local_288;
    auVar46._8_8_ = auVar40._8_8_ * dStack_280;
    local_308 = (code *)((ulonglong)(local_298 * auVar40._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
    dStack_300 = (double)((ulonglong)(dVar31 * auVar40._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
    local_2f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar37);
    local_2e8 = local_118;
    dStack_2e0 = dStack_110;
    local_2d8 = local_108;
    dStack_2d0 = 0.0;
  }
  local_2c8 = local_378._0_8_;
  uStack_2c0 = local_378._8_8_;
  local_2b8._8_4_ = SUB84(dVar32,0);
  local_2b8._0_8_ = dVar30;
  local_2b8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  local_178 = local_308;
  dStack_170 = dStack_300;
  local_168 = local_2f8;
  FUN_1448052ee(&local_178,&local_278);
  local_298 = 0.0;
  iStack_290 = 0;
  if ((*(byte *)((longlong)param_1 + 0x104) & 0x20) == 0) {
    lVar15 = param_1[0x10];
    lVar13 = param_1[0x4d];
    cVar8 = *(char *)(lVar15 + 0x100);
    if (lVar13 == 0) {
      lVar13 = FUN_1402d1dc0(lVar15 + 0x108);
      lVar15 = param_1[0x10];
    }
    plVar20 = (longlong *)FUN_140b51ce6(lVar15 + 0x140);
    if (plVar20 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar20 + 0x18))
                         (plVar20,*(undefined1 *)((longlong)param_1 + 0x275),&local_298);
    }
    if ((cVar8 == '\0' || lVar13 == 0) || ((*(byte *)((longlong)param_1 + 0x105) & 1) != 0)) {
      cVar8 = '\0';
    }
    else {
      plVar20 = (longlong *)param_1[0x30];
      cVar27 = '\x01';
      if (plVar20 != (longlong *)0x0) {
        if (DAT_14caf64b8 == 0) {
          local_178 = FUN_141030f22;
          local_380 = FUN_14081d0ea;
          local_388 = FUN_142b4754c;
          local_398 = &LAB_147c45ce0;
          local_3a0 = (code *)&LAB_1463f1ff4;
          local_3a8 = L"Game";
          local_3b0 = 0x4000000000;
          local_3b8 = 0x10000004;
          local_3c0 = CONCAT44(local_3c0._4_4_,8);
          local_3c8 = (longlong *)CONCAT44(local_3c8._4_4_,0x428);
          local_390 = &local_178;
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        cVar27 = '\x01';
        if (((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar20[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
             DAT_14caf64b8 + 0x30)) && (cVar27 = '\x03', (*(byte *)(param_1 + 0x20) & 2) == 0)) {
          pcVar3 = *(code **)(*plVar20 + 0x5e8);
          if (pcVar3 == FUN_140972dde) {
            lVar15 = plVar20[0x76];
            if (lVar15 == 0) {
              pcVar3 = *(code **)(*plVar20 + 0x5f8);
              if (pcVar3 == FUN_144784df4) {
                if (*(code **)(plVar20[0x784] + 0x18) == (code *)&LAB_144904684) {
                  if (*(int *)((longlong)plVar20 + 0x75b4) != 0) {
                    uVar19 = *(uint *)(plVar20 + 0xeb6);
                    lVar15 = 0;
                    if (((int)uVar19 < 0) || (DAT_14c9647dc <= (int)uVar19)) goto LAB_1409d7dbb;
                    plVar16 = (longlong *)
                              ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
                    if ((plVar16 != (longlong *)0x0) &&
                       (((int)plVar16[2] == *(int *)((longlong)plVar20 + 0x75b4) &&
                        ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) {
                      if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                        lVar15 = *plVar16;
                      }
                      else {
                        lVar15 = 0;
                      }
                      lVar15 = lVar15 + 0x110;
                      goto LAB_1409d8a62;
                    }
                  }
                }
                else {
                  lVar15 = (**(code **)(plVar20[0x784] + 0x18))(plVar20 + 0x784);
LAB_1409d8a62:
                  if (lVar15 != 0) {
                    lVar15 = *(longlong *)(lVar15 + 0x20);
                    goto LAB_1409d8a6f;
                  }
                }
              }
              else {
                lVar15 = (*pcVar3)(plVar20);
LAB_1409d8a6f:
                if (lVar15 != 0) {
                  lVar15 = *(longlong *)(lVar15 + 0x3b0);
                  goto LAB_1409d7dbb;
                }
              }
              lVar15 = 0;
            }
          }
          else {
            lVar15 = (*pcVar3)(plVar20);
          }
LAB_1409d7dbb:
          cVar27 = '\x02' - (lVar15 == 0);
        }
      }
      if ((longlong *)param_1[0x31] != (longlong *)0x0) {
        plVar20 = (longlong *)param_1[0x31];
      }
      cVar8 = FUN_14163df42(lVar25,CONCAT71((int7)((ulonglong)lVar25 >> 8),cVar8) & 0xffffffff,
                            plVar20,cVar27);
    }
  }
  else {
    lVar13 = 0;
    cVar8 = '\0';
  }
  lVar15 = FUN_1401fe4bc(param_1[0x10] + 0x70);
  if ((cVar8 == '\0') && (lVar15 != 0)) {
    uVar17 = FUN_1401fe4bc(param_1[0x10] + 0x70);
    lVar15 = FUN_140d35f9e(lVar25,uVar17,&local_308);
    bVar9 = DAT_14c950c29;
    if (lVar15 == 0 || DAT_14c950c29 != 1) {
      param_1[0xd2] = lVar15;
      if (lVar15 == 0) goto LAB_1409d7ec9;
    }
    else {
      FUN_1456cec3c(lVar15);
      param_1[0xd2] = lVar15;
      bVar9 = DAT_14c950c29;
    }
    local_378._0_8_ = lVar13;
    if ((bVar9 & 1) != 0) {
      FUN_1456cec3c(lVar15);
    }
    iVar11 = (int)param_1[0xd5];
    *(uint *)(param_1 + 0xd5) = iVar11 + 1U;
    if (*(uint *)((longlong)param_1 + 0x6ac) < iVar11 + 1U) {
      FUN_140e402be(param_1 + 0xd4,iVar11);
    }
    *(longlong *)(param_1[0xd4] + (longlong)iVar11 * 8) = lVar15;
    lVar13 = local_378._0_8_;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar15);
    }
  }
LAB_1409d7ec9:
  if ((*(byte *)((longlong)param_1 + 0x104) & 0x20) == 0) {
    if ((lVar13 == 0 || cVar8 != '\0') ||
       (((*(byte *)(param_1 + 0x20) & 2) == 0 &&
        (cVar8 = FUN_140385a64(param_1,plVar14), cVar8 == '\0')))) {
      *(byte *)((longlong)param_1 + 0x102) = *(byte *)((longlong)param_1 + 0x102) | 8;
    }
    else {
      local_3c0 = param_1[0x39];
      local_178 = local_2e8;
      dStack_170 = dStack_2e0;
      local_168._0_8_ = local_2d8;
      local_3b8 = local_3b8 & 0xffffff00;
      local_3c8 = param_1;
      lVar13 = FUN_14028e0e2(lVar25,lVar13,&local_178,&local_278);
      if ((lVar13 == 0) || (DAT_14c950c29 == 0)) {
        param_1[0xd3] = lVar13;
        if (lVar13 == 0) goto LAB_1409d81b7;
      }
      else {
        FUN_1456cec3c(lVar13);
        param_1[0xd3] = lVar13;
      }
      if (0 < iStack_290) {
        local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
        local_150 = (longlong *)((ulonglong)local_150 & 0xffffffff00000000);
        FUN_1456bb102(&local_178,param_1[0x31]);
        FUN_140e99737(param_1[0xd3],&local_298,&local_178);
        FUN_1448173f8(&local_150);
        if (((char)local_178 == '\x03') && ((longlong *)local_168._0_8_ != (longlong *)0x0)) {
          LOCK();
          piVar4 = (int *)(local_168._0_8_ + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*(longlong *)local_168._0_8_ + 0x10))();
          }
        }
      }
      local_318._0_4_ = 0;
      uStack_310 = 0;
      if (param_1 == (longlong *)0x0) {
        iVar11 = 0;
        uVar19 = (uint)local_318;
      }
      else {
        uVar19 = *(uint *)((longlong)param_1 + 0xc);
        local_318 = (ulonglong)uVar19;
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar11 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar26 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar26);
          }
          LOCK();
          iVar11 = *(int *)(lVar13 + 0x10);
          bVar28 = iVar11 == 0;
          if (bVar28) {
            *(int *)(lVar13 + 0x10) = iVar26;
            iVar11 = 0;
          }
          UNLOCK();
          uVar19 = (uint)local_318;
          if (bVar28) {
            iVar11 = iVar26;
          }
        }
      }
      local_318._0_4_ = uVar19;
      local_318 = CONCAT44(iVar11,(uint)local_318);
      uStack_310 = DAT_14cb85268;
      (**(code **)(*(longlong *)param_1[0xd3] + 0xa80))();
      lVar13 = param_1[0xd3];
      if ((lVar13 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar13);
      }
      iVar11 = (int)param_1[0xd5];
      *(uint *)(param_1 + 0xd5) = iVar11 + 1U;
      if (*(uint *)((longlong)param_1 + 0x6ac) < iVar11 + 1U) {
        FUN_140e402be(param_1 + 0xd4,iVar11);
      }
      *(longlong *)(param_1[0xd4] + (longlong)iVar11 * 8) = lVar13;
      if ((lVar13 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar13);
      }
      if (param_1[0xd2] == 0) {
        lVar13 = param_1[0x10];
        local_338 = *(undefined8 *)(lVar13 + 0x1a0);
        uStack_330 = *(undefined8 *)(lVar13 + 0x1a8);
        local_328 = *(undefined8 *)(lVar13 + 0x1b0);
        (**(code **)(*(longlong *)param_1[0xd3] + 0x478))();
      }
      else {
        FUN_14057a3b2((longlong *)param_1[0xd3],0,1,1);
        plVar20 = (longlong *)param_1[0xd3];
        lVar13 = param_1[0x10];
        local_178 = *(code **)(lVar13 + 0x160);
        dStack_170 = *(double *)(lVar13 + 0x168);
        local_168._0_8_ = *(undefined8 *)(lVar13 + 0x170);
        local_168._8_8_ = *(undefined8 *)(lVar13 + 0x178);
        local_1f8 = *(undefined1 (*) [16])(lVar13 + 0x180);
        local_1e8 = *(double *)(lVar13 + 400);
        local_3c0 = local_3c0 & 0xffffffffffffff00;
        local_3c8 = (longlong *)0x0;
        FUN_144927ad4(plVar20,local_1f8,&local_178,0);
        local_178 = *(code **)(lVar13 + 0x1a0);
        dStack_170 = *(double *)(lVar13 + 0x1a8);
        local_168._0_8_ = *(undefined8 *)(lVar13 + 0x1b0);
        if (*(code **)(*plVar20 + 0x478) == FUN_14028a216) {
          FUN_14028a216(plVar20);
        }
        else {
          (**(code **)(*plVar20 + 0x478))(plVar20,&local_178);
        }
        (**(code **)(*(longlong *)param_1[0xd3] + 0x490))
                  ((longlong *)param_1[0xd3],param_1[0xd2],&DAT_14cadad98,
                   *(undefined8 *)(param_1[0x10] + 0x158));
      }
      if (0 < *(int *)(param_1[0x10] + 0x138)) {
        local_178 = (code *)((ulonglong)local_178 & 0xffffffffffffff00);
        local_150 = (longlong *)((ulonglong)local_150 & 0xffffffff00000000);
        FUN_1456bb102(&local_178,param_1[0x30]);
        local_1f8._0_12_ = *(undefined1 (*) [12])(param_1[0x10] + 0x130);
        FUN_140e99737(param_1[0xd3],local_1f8,&local_178);
        FUN_1448173f8(&local_150);
        if (((char)local_178 == '\x03') && ((longlong *)local_168._0_8_ != (longlong *)0x0)) {
          LOCK();
          piVar4 = (int *)(local_168._0_8_ + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*(longlong *)local_168._0_8_ + 0x10))();
          }
        }
      }
      (**(code **)(*(longlong *)param_1[0xd3] + 0xa60))((longlong *)param_1[0xd3],1);
    }
  }
LAB_1409d81b7:
  if ((short)param_1[0x75] != 0) {
    (**(code **)(*param_1 + 0x420))(param_1);
  }
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x6c] = 0;
  cVar8 = (**(code **)(*plVar24 + 0x68))(plVar24);
  lVar13 = param_1[0x10];
  uVar19 = 0x2000;
  if (cVar8 == '\0') {
    uVar19 = (-(uint)(*(float *)(lVar13 + 0x2fc) != 0.0) & 1) << 0xd;
  }
  uVar23 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = uVar23 & 0xffffdfff | uVar19;
  bVar9 = *(byte *)(lVar13 + 0x328);
  *(uint *)(param_1 + 0x20) = uVar23 & 0xff7fdfff | uVar19 | (bVar9 & 1) << 0x17;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  uVar12 = 0;
  if (((bVar9 & 1) != 0) && ((*(byte *)(lVar13 + 0x34c) & 1) != 0)) {
    uVar12 = *(undefined4 *)(lVar13 + 0x350);
  }
  *(undefined4 *)((longlong)param_1 + 0x6b4) = uVar12;
  *(undefined4 *)(param_1 + 0x66) = 0xc2c80000;
  *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
  param_1[0xd7] = 0;
  if (*(int *)((longlong)param_1 + 900) < 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_1479c9b5a(param_1 + 0x6d,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x3a4) < 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    FUN_1479c9b5a(param_1 + 0x71,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x104) & 4) != 0) {
    (**(code **)(*param_1 + 0x388))(param_1);
  }
  *(undefined4 *)(param_1 + 0xe3) = 0;
  if (*(int *)((longlong)param_1 + 0x71c) < 0) {
    FUN_14480809c(param_1 + 0xe2,0);
  }
  if ((param_1[0x30] != 0) && ((*(byte *)(param_1[0x10] + 0x368) & 1) == 0)) {
    (**(code **)(*param_1 + 0x338))(param_1,param_1[0x30],param_1 + 0xe2);
  }
  *(undefined4 *)(param_1 + 0xe5) = 0;
  if (*(int *)((longlong)param_1 + 0x72c) < 0) {
    FUN_14480809c(param_1 + 0xe4,0);
  }
  if (((*(byte *)((longlong)param_1 + 0x102) & 1) == 0) && (lVar13 = param_1[0x31], lVar13 != 0)) {
    lVar15 = param_1[0x30];
    if ((lVar15 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
      lVar13 = param_1[0x31];
    }
    if ((lVar13 != lVar15) && ((*(byte *)(lVar13 + 0x65) & 1) != 0)) {
      (**(code **)(*param_1 + 0x338))(param_1,lVar13,param_1 + 0xe4);
    }
  }
  FUN_143dc1f10(&local_178,param_1[0x10] + 0x520);
  FUN_1407ec87c(param_1 + 0xee,&local_178);
  if ((local_178 != (code *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_178 + 0x50));
  }
  FUN_143dc1f10(&local_178,param_1[0x10] + 0x538);
  FUN_1407ec87c(param_1 + 0xf0,&local_178);
  if ((local_178 != (code *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_178 + 0x50));
  }
  FUN_143dc1f10(&local_178,param_1[0x10] + 0x550);
  FUN_1407ec87c(param_1 + 0xef,&local_178);
  if ((local_178 != (code *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_178 + 0x50));
  }
  FUN_143dc1f10(&local_178,param_1[0x10] + 0x568);
  FUN_1407ec87c(param_1 + 0xf1,&local_178);
  if ((local_178 != (code *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_178 + 0x50));
  }
  lVar13 = *(longlong *)(lVar25 + 0x540);
  if (lVar13 != 0) {
    lVar15 = param_1[0xf0];
    if ((lVar15 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      piVar4 = *(int **)(lVar15 + 0x50);
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      local_340 = lVar15;
      if (DAT_14cb259f8 == 0) {
        iVar11 = 5;
LAB_1409d84f8:
        LOCK();
        piVar4[2] = iVar11;
        UNLOCK();
      }
      else {
        if ((char)piVar4[1] == '\x01') {
          iVar11 = 2;
          goto LAB_1409d84f8;
        }
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
      }
      FUN_140c86dca(lVar13,param_1,&local_340);
      cVar8 = (**(code **)(*plVar24 + 0x68))(plVar24);
      if (cVar8 != '\0') {
        lVar13 = param_1[0x10];
        lVar15 = *(longlong *)(lVar13 + 0x5a0);
        if (lVar15 == 0) {
          uVar17 = FUN_1407f787c();
          lVar15 = FUN_14477b664(uVar17);
          *(longlong *)(lVar13 + 0x5a0) = lVar15;
        }
        if (*(longlong *)(lVar13 + 0x5a8) == 0) {
          if ((lVar15 != 0) && (*(longlong *)(lVar13 + 0x598) != 0)) {
            plVar24 = *(longlong **)(lVar15 + 0xb8);
            if ((plVar24 == (longlong *)0x0) ||
               (cVar8 = (**(code **)(*plVar24 + 0x108))(plVar24), cVar8 == '\0')) {
              *(undefined8 *)(lVar13 + 0x5a8) = 0;
            }
            else {
              uVar17 = (**(code **)(*plVar24 + 0x110))(plVar24);
              lVar15 = FUN_144aff482(uVar17,(longlong *)(lVar13 + 0x598));
              *(longlong *)(lVar13 + 0x5a8) = lVar15;
              if (lVar15 != 0) goto LAB_1409d88eb;
            }
          }
        }
        else {
LAB_1409d88eb:
          FUN_1487e2868(*(undefined8 *)(lVar25 + 0x540),param_1,param_1[0x10] + 0x598);
        }
      }
    }
    lVar13 = param_1[0xee];
    if ((lVar13 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      uVar17 = *(undefined8 *)(lVar25 + 0x540);
      uVar19 = *(uint *)(param_1 + 0x20);
      piVar4 = *(int **)(lVar13 + 0x50);
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      local_348 = lVar13;
      if (DAT_14cb259f8 == 0) {
        iVar11 = 5;
LAB_1409d860c:
        LOCK();
        piVar4[2] = iVar11;
        UNLOCK();
      }
      else {
        if ((char)piVar4[1] == '\x01') {
          iVar11 = 2;
          goto LAB_1409d860c;
        }
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
      }
      FUN_1407d6b2c(uVar17,param_1,&local_348,uVar19 >> 0xd & 1);
    }
    lVar13 = param_1[0x10];
    lVar15 = *(longlong *)(lVar13 + 0x588);
    if (lVar15 == 0) {
      uVar17 = FUN_140067708();
      lVar15 = FUN_14477b664(uVar17);
      *(longlong *)(lVar13 + 0x588) = lVar15;
    }
    lVar18 = *(longlong *)(lVar13 + 0x590);
    if (lVar18 == 0) {
      if ((lVar15 != 0) && (*(longlong *)(lVar13 + 0x580) != 0)) {
        plVar24 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar24 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar24 + 0x108))(plVar24), cVar8 == '\0')) {
          *(undefined8 *)(lVar13 + 0x590) = 0;
        }
        else {
          uVar17 = (**(code **)(*plVar24 + 0x110))(plVar24);
          lVar18 = FUN_144aff482(uVar17,(longlong *)(lVar13 + 0x580));
          *(longlong *)(lVar13 + 0x590) = lVar18;
          if (lVar18 != 0) goto LAB_1409d8669;
        }
      }
    }
    else {
LAB_1409d8669:
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar13 = param_1[4];
      }
      else {
        lVar13 = 0;
      }
      uVar17 = *(undefined8 *)(lVar13 + 0x540);
      FUN_140056680(&local_178,L"OnSpawn");
      FUN_14028d5f4(uVar17,param_1,lVar18,&local_178);
      if (local_178 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (((param_1[0x10] != 0) && ((*(byte *)(param_1[0x10] + 0x519) & 2) != 0)) &&
     (lVar13 = param_1[0x30], lVar13 != 0)) {
    uVar17 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_140806284(uVar17,plVar14,param_1 + 0xcd,lVar13);
  }
  FUN_140893100(lVar25,param_1);
  lVar13 = param_1[0x10];
  if ((*(byte *)(lVar13 + 0x370) & 1) != 0) {
    FUN_1488e5872(lVar25,param_1);
    lVar13 = param_1[0x10];
  }
  *(byte *)((longlong)param_1 + 0x794) = *(byte *)(lVar13 + 0x368) >> 4 & 1;
  FUN_140cf11b8(param_1 + 0xa3);
  if ((*(float *)(param_1 + 0xea) == 0.0) && (!NAN(*(float *)(param_1 + 0xea)))) {
    *(undefined4 *)(param_1 + 0xea) = *(undefined4 *)(param_1[0x10] + 0x364);
  }
LAB_1409d87c5:
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d8d1a FUN_1409d8d1a body=255 status=ok
// SIG undefined FUN_1409d8d1a(void)

void FUN_1409d8d1a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (**(code **)(*param_2 + 0x7b0))(param_2);
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((int)uVar4 < (int)uVar3) {
    uVar3 = uVar4;
  }
  local_48 = 0;
  uStack_40 = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  if (uVar4 != 0) {
    FUN_1409d8e1c(&local_48);
  }
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      uVar2 = uStack_40;
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(lVar1 + uVar6 * 8) != 0) {
        lVar5 = (longlong)(int)uStack_40;
        uVar4 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar4);
        if (uStack_40._4_4_ < uVar4) {
          FUN_1457b0878(&local_48,uVar2 & 0xffffffff);
        }
        *(int *)(local_48 + lVar5 * 0x10) = (int)uVar6;
        *(undefined8 *)(local_48 + 8 + lVar5 * 0x10) = *(undefined8 *)(lVar1 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  if (0 < (int)uStack_40) {
    FUN_1409d8efe(param_2);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d8e1c FUN_1409d8e1c body=226 status=ok
// SIG undefined FUN_1409d8e1c(void)

void FUN_1409d8e1c(longlong param_1,int param_2)

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



// FUNCTION 1409d8efe FUN_1409d8efe body=1181 status=ok
// SIG undefined FUN_1409d8efe(void)

void FUN_1409d8efe(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
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
  code *local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = (undefined1 *)0x0;
  local_4c = 0x80;
  uVar8 = param_3 + 0x1f;
  local_50 = param_3;
  if (uVar8 < 0x20) goto LAB_1409d9214;
  if (uVar8 < 0xa0) {
    puVar5 = local_68;
LAB_1409d8f6b:
    uVar8 = uVar8 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_68,0,uVar8 >> 5);
    local_4c = uVar8 & 0xffffffe0;
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_68;
    }
    if (uVar8 < 0x120) goto LAB_1409d8f6b;
    uVar8 = (uVar8 >> 5) << 2;
  }
  memset(puVar5,0,(ulonglong)uVar8);
  iVar4 = local_50 + 0x1f;
  if (-1 < local_50) {
    iVar4 = local_50;
  }
  if (local_50 % 0x20 != 0) {
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_68;
    }
    bVar6 = -(char)(local_50 % 0x20);
    *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
         (uint)(*(int *)(puVar5 + (longlong)(iVar4 >> 5) * 4) << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
  }
  if (local_50 < 1) goto LAB_1409d9214;
  plVar13 = param_1 + 0xc4;
  plVar11 = (longlong *)(param_2 + 8);
  lVar7 = 0;
  uVar8 = 1;
  iVar9 = -1;
  uVar12 = 0;
  iVar4 = local_50;
  do {
    iVar3 = (int)plVar11[-1];
    if ((-1 < (longlong)iVar3) &&
       (((int)param_1[0xc5] <= iVar3 || (*(longlong *)(*plVar13 + (longlong)iVar3 * 8) != *plVar11))
       )) {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_68;
      }
      *(uint *)(puVar5 + uVar12 * 4) = *(uint *)(puVar5 + uVar12 * 4) | uVar8;
      iVar4 = local_50;
      if (iVar9 < iVar3) {
        iVar9 = iVar3;
      }
    }
    iVar3 = uVar8 * 2;
    uVar12 = (ulonglong)((int)uVar12 + (uint)(iVar3 == 0));
    uVar8 = iVar3 + (uint)(iVar3 == 0);
    lVar7 = lVar7 + 1;
    plVar11 = plVar11 + 2;
  } while (lVar7 < iVar4);
  if (iVar9 < 0) goto LAB_1409d9214;
  iVar3 = (int)param_1[0xc5];
  if (iVar3 <= iVar9) {
    *(int *)(param_1 + 0xc5) = iVar9 + 1;
    uVar8 = (iVar9 + 1) - iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0x62c) - iVar3) < uVar8) {
      FUN_140655806(plVar13);
    }
    memset((void *)((longlong)iVar3 * 8 + *plVar13),0,(longlong)(int)uVar8 << 3);
    iVar4 = local_50;
  }
  if (0 < iVar4) {
    plVar11 = (longlong *)(param_2 + 8);
    lVar7 = 0;
    uVar8 = 1;
    uVar12 = 0;
    local_78 = plVar13;
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_68;
      }
      if ((*(uint *)(puVar5 + uVar12 * 4) & uVar8) != 0) {
        lVar10 = (longlong)(int)plVar11[-1];
        lVar1 = *plVar11;
        if (lVar1 == 0) {
          *(undefined8 *)(*plVar13 + lVar10 * 8) = 0;
        }
        else {
          if (DAT_14caec470 == 0) {
            local_90 = &local_70;
            local_70 = FUN_1417df956;
            local_80 = FUN_14081d0ea;
            local_88 = &LAB_1463eaa20;
            local_98 = &LAB_147bbd9ea;
            local_a0 = FUN_1401cf6d7;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000000;
            local_c0 = 8;
            local_c8 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) {
            lVar14 = *plVar13;
LAB_1409d912a:
            if (*(longlong *)(lVar14 + lVar10 * 8) == 0) goto LAB_1409d9131;
          }
          else {
            lVar14 = *plVar13;
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)
            goto LAB_1409d912a;
            lVar2 = *(longlong *)(lVar14 + lVar10 * 8);
            if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
              FUN_1456cec3c();
              lVar14 = *local_78;
            }
            if (*(longlong *)(lVar1 + 0x110) == lVar2) goto LAB_1409d912a;
LAB_1409d9131:
            *(byte *)((longlong)param_1 + 0x63c) = *(byte *)((longlong)param_1 + 0x63c) | 2;
          }
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
          *(longlong *)(lVar14 + lVar10 * 8) = lVar1;
          FUN_1406555d4(lVar1,param_1,1);
          plVar13 = local_78;
        }
      }
      iVar4 = uVar8 * 2;
      uVar12 = (ulonglong)((int)uVar12 + (uint)(iVar4 == 0));
      uVar8 = iVar4 + (uint)(iVar4 == 0);
      lVar7 = lVar7 + 1;
      plVar11 = plVar11 + 2;
    } while (lVar7 < local_50);
  }
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar6 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar6 & 1) != 0) {
      if ((param_1[0x16] != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) goto LAB_1409d91f8;
      bVar6 = *(byte *)((longlong)param_1 + 0x9d);
    }
    *(byte *)((longlong)param_1 + 0x9d) = bVar6 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_1409d91f8:
  lVar7 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x138) != 0)) {
    FUN_1406cc5aa(lVar7);
  }
LAB_1409d9214:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d939c FUN_1409d939c body=641 status=ok
// SIG undefined FUN_1409d939c(void)

void FUN_1409d939c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_168 [32];
  uint *local_148;
  longlong *local_140;
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = param_2;
  if (param_2 != (longlong *)0x0) {
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      uVar7 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + uVar7 * 0x30);
        if ((((0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8 + uVar7 * 0x30)) ||
             (0 < (int)plVar1[3])) || (0 < (int)plVar1[5])) &&
           (lVar3 = (**(code **)(*local_140 + 0x678))(local_140,uVar7 & 0xffffffff,0,0), lVar3 != 0)
           ) {
          if ((longlong)(int)plVar1[1] != 0) {
            lVar6 = *plVar1;
            lVar5 = (longlong)(int)plVar1[1] * 0xc;
            do {
              uVar2 = *(undefined4 *)(lVar6 + 8);
              uVar4 = FUN_1405b2aea(&local_c8,*(undefined8 *)(lVar3 + 0x110));
              local_128 = local_128 & 0xffffff00;
              local_e0 = 0;
              uStack_d8 = 0;
              local_f0 = 0;
              uStack_e8 = 0;
              local_100 = 0;
              uStack_f8 = 0;
              local_110 = 0;
              uStack_108 = 0;
              uStack_120 = 0;
              uStack_118 = 0;
              local_148 = &local_128;
              FUN_140042bb4(lVar3,uVar4,uVar2);
              lVar6 = lVar6 + 0xc;
              lVar5 = lVar5 + -0xc;
            } while (lVar5 != 0);
          }
          if ((longlong)(int)plVar1[3] != 0) {
            lVar6 = plVar1[2];
            lVar5 = (longlong)(int)plVar1[3] * 0x18;
            do {
              local_138 = *(uint *)(lVar6 + 8);
              uStack_134 = *(undefined4 *)(lVar6 + 0xc);
              uStack_130 = *(undefined4 *)(lVar6 + 0x10);
              uStack_12c = *(undefined4 *)(lVar6 + 0x14);
              uVar4 = FUN_1405b2aea(&local_c8,*(undefined8 *)(lVar3 + 0x110),lVar6);
              local_128 = local_138;
              uStack_124 = uStack_134;
              uStack_120 = CONCAT44(uStack_12c,uStack_130);
              FUN_14016d7a8(lVar3,uVar4);
              lVar6 = lVar6 + 0x18;
              lVar5 = lVar5 + -0x18;
            } while (lVar5 != 0);
          }
          if ((longlong)(int)plVar1[5] != 0) {
            lVar6 = plVar1[4];
            lVar5 = (longlong)(int)plVar1[5] << 4;
            do {
              uVar4 = FUN_1405b2aea(&local_c8,*(undefined8 *)(lVar3 + 0x110),lVar6);
              FUN_1409d961e(lVar3,uVar4);
              lVar6 = lVar6 + 0x10;
              lVar5 = lVar5 + -0x10;
            } while (lVar5 != 0);
          }
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x38));
      local_80 = 0;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140dda584(&local_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409d961e FUN_1409d961e body=247 status=ok
// SIG undefined FUN_1409d961e(void)

void FUN_1409d961e(longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_40 = *param_2 & 0xffffffff;
  local_38 = (undefined4)(*param_2 >> 0x20);
  local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_30 = (undefined1)param_2[1];
  FUN_14487c068();
  if (((param_3 != 0) && (local_28 != 0)) &&
     (uVar1 = *(ulonglong *)(param_3 + 0x18), uVar1 != *(ulonglong *)(local_28 + 0x18))) {
    uVar2 = (uint)(uVar1 >> 0x10);
    uVar4 = (uint)uVar1 & 0xffff;
    local_40 = uVar1;
    uVar3 = FUN_1409d9780(param_1 + 0x2e0,
                          ((uint)uVar1 << 0x10 | uVar4) + (int)(uVar1 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4));
    local_48 = *(undefined8 *)(local_28 + 0x18);
    FUN_1409d9716(uVar3);
  }
  FUN_14016d9be(param_1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d9716 FUN_1409d9716 body=105 status=ok
// SIG undefined FUN_1409d9716(void)

ulonglong FUN_1409d9716(longlong *param_1,longlong *param_2)

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
          goto LAB_1409d974e;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1409d974e:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1409d9780 FUN_1409d9780 body=190 status=ok
// SIG undefined FUN_1409d9780(void)

longlong FUN_1409d9780(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1409d9816;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1409d9840(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1409d9816:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1409d9840 FUN_1409d9840 body=299 status=ok
// SIG undefined FUN_1409d9840(void)

undefined4 *
FUN_1409d9840(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409d9a2a(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1409d996c(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1409d9c06(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409d996c FUN_1409d996c body=189 status=ok
// SIG undefined FUN_1409d996c(void)

void FUN_1409d996c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14680bc48(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1409d99df;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1409d99df:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1409d9a2a FUN_1409d9a2a body=476 status=ok
// SIG undefined FUN_1409d9a2a(void)

int * FUN_1409d9a2a(longlong *param_1,int *param_2)

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



// FUNCTION 1409d9c06 FUN_1409d9c06 body=691 status=ok
// SIG undefined FUN_1409d9c06(void)

void FUN_1409d9c06(longlong *param_1)

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
    if ((int)uVar10 < 1) goto LAB_1409d9c6c;
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
LAB_1409d9c6c:
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
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
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



// FUNCTION 1409d9ec8 FUN_1409d9ec8 body=275 status=ok
// SIG undefined FUN_1409d9ec8(void)

undefined8 FUN_1409d9ec8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  __int64 _Var2;
  uint uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_3;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_14021300e(&local_38,0x7b2,1,1);
  lVar1 = (lVar1 - local_38) / 10000000;
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 < 2) {
    local_38 = 0;
    FUN_1401e7ce8(param_1,param_2);
    bifrost::telemetry::rowBuilder::vTimestamp
              ((rowBuilder *)**(undefined8 **)(param_1 + 0x38),lVar1);
    if (uVar3 != 0) {
      uVar3 = *(uint *)(param_1 + 0x48);
      goto LAB_1409d9fd5;
    }
  }
  else {
LAB_1409d9fd5:
    if (uVar3 != 2) goto LAB_1409d9fae;
  }
  FUN_1401e7ce8(param_1,param_2,&DAT_14cb97a20);
  lVar1 = (lVar1 - DAT_14cb97a40) * 1000;
  _Var2 = 0;
  if (0 < lVar1) {
    _Var2 = lVar1;
  }
  bifrost::telemetry::rowBuilder::vTimeOffset((rowBuilder *)**(undefined8 **)(param_1 + 0x38),_Var2)
  ;
LAB_1409d9fae:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1409d9fdc FUN_1409d9fdc body=25 status=ok
// SIG undefined FUN_1409d9fdc(void)

undefined8 FUN_1409d9fdc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1409d9ff6 FUN_1409d9ff6 body=131 status=ok
// SIG undefined FUN_1409d9ff6(void)

void FUN_1409d9ff6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) + 1;
  lVar1 = *(longlong *)(param_1 + 0x500);
  if (lVar1 == 0) {
    return;
  }
  uVar4 = 0;
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      uVar4 = *(undefined4 *)(lVar3 + 0x930);
    }
  }
  *(undefined4 *)(lVar1 + 0x144) = uVar4;
  cVar2 = FUN_1408a2554(param_1,0);
  if (cVar2 == '\0') {
    FUN_1408a2052();
    return;
  }
  FUN_1408a23a4(param_1);
  return;
}



// FUNCTION 1409da082 FUN_1409da082 body=369 status=ok
// SIG undefined FUN_1409da082(void)

undefined8 * FUN_1409da082(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b30c780;
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
  param_1[3] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_140265f12();
  param_1[8] = &DAT_14cb83310;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = &PTR_FUN_14b1828b0;
  FUN_140265f12();
  param_1[0xc] = &DAT_14cb83310;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = &PTR_FUN_14b1828b0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 1409da1f4 FUN_1409da1f4 body=82 status=ok
// SIG undefined FUN_1409da1f4(void)

void FUN_1409da1f4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1401d9a90(param_1 + 8);
  return;
}



// FUNCTION 1409da246 FUN_1409da246 body=55 status=ok
// SIG undefined FUN_1409da246(void)

void FUN_1409da246(longlong *param_1)

{
  FUN_1409da27e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409da27e FUN_1409da27e body=123 status=ok
// SIG undefined FUN_1409da27e(void)

void FUN_1409da27e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 1409da2fa FUN_1409da2fa body=29 status=ok
// SIG undefined FUN_1409da2fa(void)

void FUN_1409da2fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1409da318 FUN_1409da318 body=31 status=ok
// SIG undefined FUN_1409da318(void)

undefined8 FUN_1409da318(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409da338 FUN_1409da338 body=103 status=ok
// SIG undefined FUN_1409da338(void)

ulonglong FUN_1409da338(longlong param_1)

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
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1409da382:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1409da382;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1409da3ac FUN_1409da3ac body=191 status=ok
// SIG undefined FUN_1409da3ac(void)

void FUN_1409da3ac(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409da46c(param_1 + 0x6c8);
  FUN_1409da46c(param_1 + 0x6b8,param_2);
  if (DAT_14cb758b8 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_140b1bfcc(DAT_14cb758b8,&local_48);
    lVar1 = local_48;
    lVar2 = (longlong)(int)uStack_40;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        if ((*(longlong *)(lVar1 + lVar3) != 0) &&
           (*(char *)(*(longlong *)(lVar1 + lVar3) + 0x41) == (char)param_2)) {
          FUN_140d72668(param_1);
        }
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409da46c FUN_1409da46c body=188 status=ok
// SIG undefined FUN_1409da46c(void)

void FUN_1409da46c(longlong *param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar5) {
    iVar6 = -(int)param_1[1];
    lVar4 = uVar5 * 0x60;
    do {
      if (DAT_14cb758b8 != 0) {
        lVar3 = FUN_144837462(DAT_14cb758b8,*param_1 + lVar4 + -0x38);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x41) == param_2)) {
          lVar3 = *param_1;
          if (*(longlong *)(lVar3 + -0x20 + lVar4) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(uint *)(param_1 + 1);
          if (uVar5 != uVar2) {
            memmove((void *)(lVar3 + lVar4 + -0x60),(void *)(lVar3 + lVar4),
                    (longlong)(int)(uVar2 + iVar6) * 0x60);
            uVar2 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar2 - 1;
        }
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + -0x60;
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 1409da528 FUN_1409da528 body=682 status=ok
// SIG undefined FUN_1409da528(void)

void FUN_1409da528(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  
  if (param_3 == 1) {
    if (param_2 == 0) {
      return;
    }
    if (*(char *)(param_2 + 0xd68) != '\x01') {
      return;
    }
    cVar5 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
    if (cVar5 == '\0') {
      return;
    }
LAB_1409da583:
    bVar6 = 1;
    if (*(char *)(param_2 + 0xd68) == '\x01') {
LAB_1409da590:
      bVar6 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
      bVar6 = bVar6 ^ 1;
    }
    bVar7 = 1;
    if (param_3 != 1) goto LAB_1409da5b4;
  }
  else {
    if (param_3 != 0) {
      if (param_2 != 0) goto LAB_1409da583;
      goto LAB_1409da590;
    }
    bVar6 = 1;
LAB_1409da5b4:
    if ((param_2 == 0) || (bVar7 = 1, *(char *)(param_2 + 0xd68) == '\x01')) {
      bVar7 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
      bVar7 = bVar7 ^ 1;
    }
  }
  if (param_4 != 2) {
    if (param_4 != 1) {
      return;
    }
    if ((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) || (*(int *)(param_1 + 0x134) == 0)) {
LAB_1409da64a:
      uVar10 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x130);
      uVar10 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x134))) ||
           ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_1409da64a;
        uVar10 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
      }
    }
    FUN_14041a931(uVar10);
    if (bVar7 == 1 && *(longlong *)(param_1 + 0x140) != 0) {
      FUN_143d1b02a();
    }
    if (bVar6 != 0) {
      FUN_1459b35da(param_1 + 0x410);
    }
    lVar8 = 0x38a;
    if (bVar7 == 0) goto LAB_1409da79c;
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
      FUN_143d18ca6(param_1 + 0x220);
      FUN_14187f1c8(param_1 + 0x220);
    }
  }
  if (bVar7 == 1 && *(int *)(param_1 + 0x120) == param_4) {
    lVar8 = param_1 + 0x1d0;
    if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
      FUN_143d18ca6(lVar8);
      FUN_14187f1c8(lVar8);
    }
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    if ((longlong)*(int *)(param_1 + 0x150) != 0) {
      plVar12 = *(longlong **)(param_1 + 0x148);
      plVar9 = plVar12 + *(int *)(param_1 + 0x150);
      do {
        lVar3 = *plVar12;
        if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x40), (longlong)iVar2 != 0)) {
          lVar3 = *(longlong *)(lVar3 + 0x38);
          lVar11 = 0;
          do {
            plVar4 = *(longlong **)(lVar3 + lVar11);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x2c8))();
            }
            lVar11 = lVar11 + 0x18;
          } while ((longlong)iVar2 * 0x18 != lVar11);
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar9);
    }
    cVar5 = FUN_1402799c0(param_1);
    if (((cVar5 != '\0') && (*(int *)(param_1 + 0x120) == 2)) &&
       (plVar9 = (longlong *)FUN_140caa0c0(param_1), plVar9 != (longlong *)0x0)) {
      uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_140caa3de(uVar10,lVar8);
    }
  }
  if (param_4 == 1) {
    lVar8 = 0x38a;
  }
  else {
    if (param_4 != 2) {
      return;
    }
    lVar8 = 0x388;
  }
LAB_1409da79c:
  *(undefined1 *)((ulonglong)param_3 + param_1 + lVar8) = 0;
  return;
}



// FUNCTION 1409da7d2 FUN_1409da7d2 body=476 status=ok
// SIG undefined FUN_1409da7d2(void)

longlong FUN_1409da7d2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = (**(code **)(*param_1 + 0x748))();
  if (lVar4 != 0) goto LAB_1409da802;
  lVar5 = param_1[0x2d];
  bVar3 = true;
  if (lVar5 == 0) {
LAB_1409da91c:
    lVar5 = 0;
  }
  else {
    if (DAT_14cb61cd0 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463b31ae;
      local_58 = &LAB_1486dca4f;
      local_60 = &LAB_1464f50a6;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_1409da91c;
    lVar4 = switchD_143c3d4dc::caseD_57(lVar5,param_2);
    if (lVar4 != 0) goto LAB_1409da802;
    bVar3 = false;
  }
  plVar1 = (longlong *)param_1[0x81];
  if (plVar1 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar1 + 0x7a0))(plVar1,param_2);
    if (bVar3 || lVar4 != 0) goto LAB_1409da802;
    plVar2 = *(longlong **)(lVar5 + 0xa08);
    if (plVar2 != (longlong *)0x0) {
      lVar5 = FUN_144a78b9e();
      if (*(int *)(lVar5 + 0x38) <= *(int *)(plVar2[2] + 0x38)) {
        lVar4 = 0;
        if ((plVar2 != plVar1) &&
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
        }
        goto LAB_1409da802;
      }
    }
  }
  lVar4 = 0;
LAB_1409da802:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409da9cd FUN_1409da9cd body=196 status=ok
// SIG undefined FUN_1409da9cd(void)

void FUN_1409da9cd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409daa92(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b14f7e0;
  puVar1[0x81] = &PTR_LAB_14b14fe20;
  *(undefined4 *)(puVar1 + 0x84) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x424) = 0;
  puVar1[0x8b] = 0;
  puVar1[0x8c] = 0;
  puVar1[0x82] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x417) = 0;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  puVar1[0x87] = 0;
  puVar1[0x88] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x441) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x449) = 0;
  *(undefined4 *)(puVar1 + 0x8d) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x46c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x474) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x47c) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0x484) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x48c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x491) = 0;
  puVar1[0x94] = 0;
  puVar1[0x95] = 0;
  puVar1[0x96] = 0;
  puVar1[0x97] = 0;
  puVar1[0x98] = 0;
  puVar1[0x99] = 0;
  puVar1[0x9a] = 0;
  puVar1[0x9b] = 0;
  puVar1[0x9c] = 0;
  return;
}



// FUNCTION 1409daa92 FUN_1409daa92 body=402 status=ok
// SIG undefined FUN_1409daa92(void)

undefined8 * FUN_1409daa92(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ac265a0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x43000000;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  FUN_1405bab3a(param_1,1);
  FUN_1403121a6(param_1,0);
  *(undefined4 *)(param_1 + 0x78) = 0x43000000;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x42800000;
  FUN_1446f470e(&local_28,L"RootComponent",1);
  uVar3 = FUN_1409dac26();
  local_30 = 0;
  local_38 = 1;
  lVar4 = FUN_14048696c(param_1,local_28,uVar3,uVar3);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x39] = lVar4;
  for (puVar2 = param_1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[4]) {
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) goto LAB_1409dabe3;
  }
  if (param_1[0x7f] == 0) {
    plVar1 = param_1 + 0x7d;
    param_1[0x80] = &DAT_14cb23a38;
    param_1[0x7f] = param_1;
    lVar4 = DAT_14cb23a38;
    while( true ) {
      param_1[0x7d] = lVar4;
      LOCK();
      lVar5 = *(longlong *)param_1[0x80];
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *(longlong *)param_1[0x80] = (longlong)plVar1;
        lVar5 = lVar4;
      }
      UNLOCK();
      if (bVar6) break;
      param_1[0x7d] = lVar5;
      lVar4 = *(longlong *)param_1[0x80];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
LAB_1409dabe3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409dac26 FUN_1409dac26 body=228 status=ok
// SIG undefined FUN_1409dac26(void)

longlong FUN_1409dac26(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb20c80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = &LAB_146430a00;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147f1492f;
    local_40 = FUN_14180b205;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/GbxAI",L"CoverRootComponent",&DAT_14cb20c80,&DAT_147f1492e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409dad0c FUN_1409dad0c body=64 status=ok
// SIG undefined FUN_1409dad0c(void)

undefined8 * FUN_1409dad0c(undefined8 *param_1)

{
  FUN_1406ed660();
  *param_1 = &PTR_FUN_14a489840;
  *(undefined2 *)((longlong)param_1 + 0x61) = 0x100;
  *(undefined1 *)((longlong)param_1 + 99) = 0;
  param_1[0xb] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    FUN_140b55eae();
  }
  return param_1;
}



// FUNCTION 1409dad52 FUN_1409dad52 body=336 status=ok
// SIG undefined FUN_1409dad52(void)

void FUN_1409dad52(longlong *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_38 = 0xa462b7ea;
  uStack_34 = 0xf4994e3a;
  uStack_30 = 0x99c1ec1f;
  uStack_2c = 0x8224e1b2;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 1) {
    *(uint *)(param_1 + 0xb) =
         *(uint *)(param_1 + 0xb) & 0xfffffffd | *(uint *)(param_1 + 0xb) >> 3 & 2;
  }
  lVar5 = (**(code **)(*param_1 + 0x328))(param_1);
  if (0 < *(int *)(lVar5 + 8)) {
    iVar4 = 0;
    do {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x328))(param_1);
      lVar5 = *(longlong *)(*plVar6 + (longlong)iVar4 * 8);
      if (lVar5 == 0) {
LAB_1409dae6a:
        (**(code **)(*param_1 + 0x340))(param_1,iVar4);
      }
      else {
        if ((*(char *)(lVar5 + 0xa0) != '\x02' && *(char *)(lVar5 + 0x98) != '\x02') &&
           ((iVar1 = *(int *)(lVar5 + 0xa4), iVar2 = *(int *)(lVar5 + 0x9c),
            iVar2 != iVar1 && iVar1 <= iVar2 ||
            ((iVar2 == iVar1 &&
             ((*(char *)(lVar5 + 0x98) == '\0' || (*(char *)(lVar5 + 0xa0) == '\0'))))))))
        goto LAB_1409dae6a;
        iVar4 = iVar4 + 1;
      }
      lVar5 = (**(code **)(*param_1 + 0x328))(param_1);
    } while (iVar4 < *(int *)(lVar5 + 8));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409daeaa FUN_1409daeaa body=57 status=ok
// SIG undefined FUN_1409daeaa(void)

void FUN_1409daeaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb236f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb236f0 = FUN_140002ddd(FUN_14643f156,uVar1,L"GpsTest_Sensed");
  }
  return;
}



// FUNCTION 1409daee4 FUN_1409daee4 body=81 status=ok
// SIG undefined FUN_1409daee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409daee4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1409daf36(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1409daf36(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001409daf32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 1409daf36 FUN_1409daf36 body=11649 status=ok
// SIG undefined FUN_1409daf36(void)

void FUN_1409daf36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  LARGE_INTEGER *pLVar4;
  char *pcVar5;
  DWORD DVar6;
  float *pfVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined8 **ppuVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong lVar20;
  int *piVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  uint *puVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  uint *puVar31;
  int iVar32;
  int *piVar33;
  LARGE_INTEGER LVar34;
  undefined4 uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  ushort uVar42;
  int iVar43;
  int iVar44;
  ulonglong uVar45;
  longlong lVar46;
  ulonglong uVar47;
  uint *puVar48;
  longlong lVar49;
  LARGE_INTEGER *pLVar50;
  int iVar51;
  uint uVar52;
  int *piVar53;
  undefined8 *puVar54;
  undefined4 *puVar55;
  int iVar56;
  bool bVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  longlong *local_240;
  LARGE_INTEGER *local_238;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  uint *local_208;
  LARGE_INTEGER local_200;
  undefined8 *local_1f8;
  longlong local_1f0;
  uint local_1e4;
  longlong *local_1e0;
  uint *local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  void *local_198;
  undefined4 local_18c;
  longlong *local_188;
  ulonglong uStack_180;
  undefined8 local_170;
  undefined8 *local_168;
  uint local_15c;
  code *local_158;
  undefined8 uStack_150;
  uint local_148 [4];
  uint *local_138;
  int local_130;
  uint local_12c;
  int iStack_128;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  uint local_110;
  LARGE_INTEGER local_108;
  undefined8 uStack_100;
  undefined8 *local_f8 [2];
  undefined8 **local_e8;
  uint local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  LARGE_INTEGER *local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uVar28 = *(uint *)(param_1 + 0x6e4);
  local_228 = param_1;
  if (uVar28 != 0) {
    iVar51 = 0;
    uVar45 = (ulonglong)
             ((*(int *)(param_1 + 0x3cc) + *(uint *)(param_1 + 0x3bc)) - *(int *)(param_1 + 0x3c8))
             % (ulonglong)*(uint *)(param_1 + 0x3bc);
    local_188 = (longlong *)0x0;
    uStack_180 = (ulonglong)uVar28;
    FUN_14367d4d6(&local_188);
    FUN_14367d4c2(local_188);
    local_e8 = (undefined8 **)0x0;
    local_e0 = 0;
    local_108.QuadPart = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_1e4 = uVar28;
    do {
      local_15c = (uint)(iVar51 + (int)uVar45) % *(uint *)(param_1 + 0x3bc);
      local_158 = (code *)(*(longlong *)(param_1 + 0x668) + (longlong)(int)local_15c * 0x20 + 0x10);
      uStack_150 = &local_15c;
      FUN_14499e2d8(&local_108,&local_170,&local_158,0);
      iVar51 = iVar51 + 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    iVar51 = 0;
    local_138 = (uint *)0x0;
    local_130 = 0;
    local_158 = (code *)0x0;
    uStack_150 = (uint *)0x0;
    local_12c = 0x80;
    iStack_128 = -1;
    local_124 = 0;
    local_118 = (undefined1 *)0x0;
    local_110 = 0;
    local_1d0 = uVar45;
    if (local_e0 == 0) {
      uVar45 = 1;
      uVar47 = 0;
      uVar28 = 0;
    }
    else {
      ppuVar11 = local_e8;
      if (local_e8 == (undefined8 **)0x0) {
        ppuVar11 = local_f8;
      }
      uVar28 = *(uint *)ppuVar11;
      if (uVar28 == 0) {
        iVar51 = local_e0 + 0x1e;
        if (-1 < (int)(local_e0 - 1)) {
          iVar51 = local_e0 - 1;
        }
        uVar47 = 0;
        uVar45 = (ulonglong)(uint)(iVar51 >> 5);
        if (iVar51 >> 5 < 1) {
          uVar45 = uVar47;
        }
        iVar51 = 0;
        do {
          if (uVar45 == uVar47) goto LAB_1409db157;
          iVar51 = iVar51 + 0x20;
          uVar28 = *(uint *)((longlong)ppuVar11 + (uVar47 + 1) * 4);
          uVar47 = uVar47 + 1;
        } while (uVar28 == 0);
      }
      else {
        iVar51 = 0;
        uVar47 = 0;
      }
      uVar45 = (ulonglong)(-uVar28 & uVar28);
      uVar19 = uVar45 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar28 = (iVar51 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)local_e0 <= (int)uVar28) {
        uVar28 = local_e0;
      }
    }
    if (uVar28 != local_e0) {
      local_218 = (longlong *)(local_228 + 0x630);
      local_200.QuadPart = local_228 + 0x608;
      uVar9 = 0xffffffff;
      local_210 = (longlong *)(ulonglong)local_e0;
      do {
        iVar29 = iStack_128;
        uVar19 = (ulonglong)uStack_150;
        local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar9);
        lVar17 = (longlong)*(int *)(local_108.QuadPart + (longlong)(int)uVar28 * 0x10);
        iVar44 = *(int *)(*(longlong *)(local_228 + 0x5d8) + lVar17 * 0xc);
        if ((iVar44 != -1) && (*(int *)(local_228 + 0x600) != *(int *)(local_228 + 0x62c))) {
          piVar21 = (int *)(*(longlong *)(local_228 + 0x5d8) + lVar17 * 0xc);
          plVar16 = *(longlong **)(local_228 + 0x638);
          if (*(longlong **)(local_228 + 0x638) == (longlong *)0x0) {
            plVar16 = local_218;
          }
          piVar33 = (int *)((longlong)plVar16 +
                           ((longlong)(piVar21[1] * 0x58399e77 + iVar44 * -0x39feb07) &
                           (longlong)*(int *)(local_228 + 0x640) - 1U) * 4);
          do {
            iVar44 = *piVar33;
            lVar17 = (longlong)iVar44;
            if (lVar17 == -1) break;
            piVar2 = (int *)(*(longlong *)(local_228 + 0x5f8) + lVar17 * 0x14);
            iVar40 = *piVar2;
            iVar41 = *piVar21;
            iVar56 = piVar21[1];
            iVar43 = piVar2[1];
            if (iVar56 != iVar43 || iVar40 != iVar41) {
              piVar33 = piVar2 + 3;
            }
            else {
              plVar16 = *(longlong **)(local_228 + 0x638);
              if (*(longlong **)(local_228 + 0x638) == (longlong *)0x0) {
                plVar16 = local_218;
              }
              iVar32 = *(int *)((longlong)plVar16 + (longlong)piVar2[4] * 4);
              if (iVar32 == iVar44) {
                piVar53 = (int *)((longlong)plVar16 + (longlong)piVar2[4] * 4);
              }
              else {
                do {
                  piVar53 = (int *)(*(longlong *)(local_228 + 0x5f8) + (longlong)iVar32 * 0x14 + 0xc
                                   );
                  iVar32 = *piVar53;
                } while (iVar32 != iVar44);
              }
              *piVar53 = piVar2[3];
              lVar30 = *(longlong *)(local_228 + 0x5f8);
              if (*(int *)(local_228 + 0x62c) != 0) {
                *(int *)(lVar30 + (longlong)*(int *)(local_228 + 0x628) * 0x14) = iVar44;
              }
              *(undefined4 *)(lVar30 + lVar17 * 0x14) = 0xffffffff;
              uVar35 = 0xffffffff;
              if (0 < *(int *)(local_228 + 0x62c)) {
                uVar35 = *(undefined4 *)(local_228 + 0x628);
              }
              *(undefined4 *)(lVar30 + lVar17 * 0x14 + 4) = uVar35;
              *(int *)(local_228 + 0x628) = iVar44;
              *(int *)(local_228 + 0x62c) = *(int *)(local_228 + 0x62c) + 1;
              LVar34.QuadPart = ((LARGE_INTEGER *)(local_228 + 0x618))->QuadPart;
              if (((LARGE_INTEGER *)(local_228 + 0x618))->QuadPart == 0) {
                LVar34 = local_200;
              }
              iVar32 = iVar44 + 0x1f;
              if (-1 < iVar44) {
                iVar32 = iVar44;
              }
              bVar18 = (byte)iVar44 & 0x1f;
              puVar25 = (uint *)(LVar34.QuadPart + (longlong)(iVar32 >> 5) * 4);
              *puVar25 = *puVar25 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
            }
          } while (iVar56 != iVar43 || iVar40 != iVar41);
        }
        iVar44 = *(int *)(local_108.QuadPart + (longlong)(int)uVar28 * 0x10 + 4);
        lVar17 = *(longlong *)(local_228 + 0x668);
        if (local_124 == 0) {
          iVar29 = (int)uStack_150;
          uStack_150 = (uint *)CONCAT44(uStack_150._4_4_,(int)uStack_150 + 1);
          if (uStack_150._4_4_ == iVar29) {
            FUN_144869a3c(&local_158,uVar19 & 0xffffffff);
          }
          iVar40 = local_130;
          if (local_130 == 0) {
            iVar41 = -1;
          }
          else {
            iVar41 = local_130 + 0x1e;
            if (-1 < local_130 + -1) {
              iVar41 = local_130 + -1;
            }
            iVar41 = iVar41 >> 5;
          }
          iVar56 = local_130 + 1;
          iVar43 = local_130 + 0x1f;
          if (-1 < local_130) {
            iVar43 = local_130;
          }
          if (iVar43 >> 5 == iVar41) {
            local_130 = iVar56;
          }
          else {
            if ((int)local_12c <= local_130) {
              if (local_130 + 0x20U < 0xa0) {
                local_12c = 0x80;
              }
              else {
                uVar28 = local_130 + 0x20U >> 5;
                if (local_12c + 0x1f < 0xa0) {
                  uVar9 = 4;
                  if (4 < uVar28) {
                    uVar9 = uVar28;
                  }
                }
                else {
                  uVar9 = uVar28 + (uVar28 * 3 >> 3) + 0x10;
                }
                uVar19 = (ulonglong)(uVar9 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar23 = (uint)(uVar19 + 0xf);
                    if (uVar9 < 0x1ffd) {
                      uVar19 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
                    }
                    else {
                      uVar26 = (ulonglong)(uVar23 & 0xfffffff0);
                      if (uVar26 < 0x7ff1) {
                        bVar18 = (&DAT_14c841e00)[uVar23 >> 4];
                        uVar36 = 0x32;
                        if (0x32 < bVar18) {
                          uVar36 = (ulonglong)bVar18;
                        }
                        uVar37 = 0x32 - (ulonglong)bVar18;
                        do {
                          uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar37 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar37 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1409dba44;
                          lVar30 = uVar36 + 1 + uVar37;
                          uVar37 = uVar37 - 1;
                        } while (lVar30 != 0x33);
                      }
                      uVar19 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar19 = 0x10;
                      }
                      uVar19 = -uVar19 & (uVar26 + uVar19) - 1;
                    }
                  }
                  else {
                    local_208 = (uint *)(ulonglong)uVar28;
                    uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
                    uVar28 = (uint)local_208;
                  }
                }
LAB_1409dba44:
                iVar41 = (int)(uVar19 >> 2);
                local_12c = iVar41 << 5;
                if (iVar41 < (int)uVar28) {
                  local_12c = 0xffffffe0;
                }
              }
              FUN_1446efbd8(local_148,local_130);
              iVar56 = local_130 + 1;
            }
            iVar41 = iVar56 + 0x1f;
            if (-1 < iVar56) {
              iVar41 = iVar56;
            }
            local_130 = iVar56;
            if (iVar56 % 0x20 != 0) {
              puVar25 = local_138;
              if (local_138 == (uint *)0x0) {
                puVar25 = local_148;
              }
              bVar18 = -(char)(iVar56 % 0x20);
              puVar25[iVar41 >> 5] = (puVar25[iVar41 >> 5] << (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
            }
          }
          lVar30 = (longlong)iVar29;
          puVar25 = local_138;
          if (local_138 == (uint *)0x0) {
            puVar25 = local_148;
          }
          bVar18 = (byte)iVar40 & 0x1f;
          puVar25[iVar43 >> 5] =
               puVar25[iVar43 >> 5] & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
        }
        else {
          lVar30 = (longlong)iStack_128;
          iStack_128 = *(int *)(local_158 + lVar30 * 0x10 + 4);
          local_124 = local_124 + -1;
          if (local_124 != 0) {
            *(undefined4 *)(local_158 + (longlong)*(int *)(local_158 + lVar30 * 0x10 + 4) * 0x10) =
                 0xffffffff;
          }
        }
        puVar25 = local_138;
        if (local_138 == (uint *)0x0) {
          puVar25 = local_148;
        }
        iVar40 = iVar29 + 0x1f;
        if (-1 < iVar29) {
          iVar40 = iVar29;
        }
        puVar25[iVar40 >> 5] = puVar25[iVar40 >> 5] | 1 << ((byte)iVar29 & 0x1f);
        lVar30 = lVar30 * 0x10;
        uVar13 = *(undefined8 *)(lVar17 + (longlong)iVar44 * 0x20 + 0x14);
        *(undefined8 *)(local_158 + lVar30) = uVar13;
        *(undefined4 *)(local_158 + lVar30 + 8) = 0xffffffff;
        iVar44 = (int)((ulonglong)uVar13 >> 0x20);
        uVar28 = iVar44 * 0x58399e77 + (int)uVar13 * -0x39feb07;
        uVar9 = (int)uStack_150 - local_124;
        if ((uVar9 != 0) && (uVar9 != 1)) {
          puVar10 = local_118;
          if (local_118 == (undefined1 *)0x0) {
            puVar10 = local_120;
          }
          iVar40 = *(int *)(puVar10 + (ulonglong)(local_110 - 1 & uVar28) * 4);
          while (iVar40 != -1) {
            lVar17 = (longlong)iVar40 * 0x10;
            if ((*(int *)(local_158 + lVar17) == (int)uVar13) &&
               (*(int *)(local_158 + lVar17 + 4) == iVar44)) {
              *(undefined8 *)(local_158 + lVar17) = uVar13;
              FUN_147cd4fce(&local_158,iVar29);
              goto LAB_1409db5b1;
            }
            iVar40 = *(int *)(local_158 + lVar17 + 8);
          }
        }
        if (uVar9 < 4) {
          uVar23 = 1;
        }
        else {
          uVar19 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
          lVar17 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar23 = 1 << ((byte)lVar17 & 0x1f);
        }
        if (((int)uVar9 < 1) || ((int)uVar23 <= (int)local_110)) {
          uVar28 = local_110 - 1 & uVar28;
          *(uint *)(local_158 + lVar30 + 0xc) = uVar28;
          puVar10 = local_118;
          if (local_118 == (undefined1 *)0x0) {
            puVar10 = local_120;
          }
          *(undefined4 *)(local_158 + lVar30 + 8) =
               *(undefined4 *)
                (puVar10 + ((longlong)(int)local_110 - 1U & (longlong)(int)uVar28) * 4);
          puVar10 = local_118;
          if (local_118 == (undefined1 *)0x0) {
            puVar10 = local_120;
          }
          *(int *)(puVar10 + ((longlong)(int)local_110 - 1U & (longlong)(int)uVar28) * 4) = iVar29;
        }
        else {
          local_110 = uVar23;
          if (local_118 != (undefined1 *)0x0) {
            FUN_1446efa72(&local_118,0,0,4);
          }
          uVar28 = local_110;
          if (local_110 == 1) {
            if (local_118 != (undefined1 *)0x0) {
              FUN_1446efa72(&local_118,0,0,4);
            }
LAB_1409db7a8:
            uVar9 = 0;
            do {
              puVar10 = local_118;
              if (local_118 == (undefined1 *)0x0) {
                puVar10 = local_120;
              }
              *(undefined4 *)(puVar10 + (ulonglong)(local_110 + 0x7fffffff & uVar9) * 4) =
                   0xffffffff;
              uVar9 = uVar9 + 1;
            } while (uVar28 != uVar9);
          }
          else {
            if (local_110 == 0) goto LAB_1409db5b1;
            FUN_1446efa72(&local_118,0,local_110,4);
            if (0 < (int)uVar28) goto LAB_1409db7a8;
          }
          if (local_130 == 0) {
            uVar19 = 0;
            uVar26 = 1;
            iVar44 = 0;
            iVar29 = 0;
          }
          else {
            puVar25 = local_138;
            if (local_138 == (uint *)0x0) {
              puVar25 = local_148;
            }
            uVar28 = *puVar25;
            if (uVar28 == 0) {
              iVar44 = local_130 + 0x1e;
              if (-1 < local_130 + -1) {
                iVar44 = local_130 + -1;
              }
              uVar19 = 0;
              uVar26 = (ulonglong)(uint)(iVar44 >> 5);
              if (iVar44 >> 5 < 1) {
                uVar26 = uVar19;
              }
              iVar29 = 0;
              do {
                if (uVar26 == uVar19) goto LAB_1409db5b1;
                iVar29 = iVar29 + 0x20;
                uVar28 = puVar25[uVar19 + 1];
                uVar19 = uVar19 + 1;
              } while (uVar28 == 0);
            }
            else {
              uVar19 = 0;
              iVar29 = 0;
            }
            uVar26 = (ulonglong)(-uVar28 & uVar28);
            uVar36 = uVar26 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar36 != 0) {
              for (; uVar36 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar44 = (iVar29 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (local_130 <= iVar44) {
              iVar44 = local_130;
            }
          }
          if (iVar44 < local_130) {
            uVar28 = 0xffffffff;
            do {
              lVar17 = (longlong)iVar44 * 0x10;
              uVar36 = (longlong)
                       (*(int *)(local_158 + lVar17 + 4) * 0x58399e77 +
                       *(int *)(local_158 + lVar17) * -0x39feb07) & (longlong)(int)local_110 - 1U;
              iVar40 = (int)uVar36;
              *(int *)(local_158 + lVar17 + 0xc) = iVar40;
              puVar10 = local_118;
              if (local_118 == (undefined1 *)0x0) {
                puVar10 = local_120;
              }
              *(undefined4 *)(local_158 + lVar17 + 8) =
                   *(undefined4 *)(puVar10 + ((longlong)(int)local_110 - 1U & uVar36) * 4);
              puVar10 = local_118;
              if (local_118 == (undefined1 *)0x0) {
                puVar10 = local_120;
              }
              *(int *)(puVar10 + ((longlong)iVar40 & (longlong)(int)local_110 - 1U) * 4) = iVar44;
              uVar28 = ~(uint)uVar26 & uVar28;
              puVar25 = local_138;
              if (local_138 == (uint *)0x0) {
                puVar25 = local_148;
              }
              iVar44 = (int)uVar19;
              lVar17 = (longlong)iVar44;
              uVar9 = puVar25[lVar17] & uVar28;
              if (uVar9 == 0) {
                iVar40 = local_130 + 0x1e;
                if (-1 < local_130 + -1) {
                  iVar40 = local_130 + -1;
                }
                iVar40 = iVar40 >> 5;
                iVar41 = iVar40;
                if (iVar40 < iVar44) {
                  iVar41 = iVar44;
                }
                if (iVar40 <= iVar44) break;
                lVar30 = 0;
                while( true ) {
                  iVar29 = iVar29 + 0x20;
                  uVar9 = puVar25[lVar17 + lVar30 + 1];
                  if (uVar9 != 0) break;
                  lVar30 = lVar30 + 1;
                  if (iVar41 - lVar17 == lVar30) goto LAB_1409db5b1;
                }
                uVar19 = (ulonglong)(iVar44 + (int)lVar30 + 1);
                uVar28 = 0xffffffff;
              }
              uVar26 = (ulonglong)(-uVar9 & uVar9);
              uVar36 = uVar26 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar44 = (iVar29 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            } while (iVar44 < local_130);
          }
        }
LAB_1409db5b1:
        uVar9 = (uint)local_220 & ~(uint)uVar45;
        ppuVar11 = local_e8;
        if (local_e8 == (undefined8 **)0x0) {
          ppuVar11 = local_f8;
        }
        iVar44 = (int)uVar47;
        lVar17 = (longlong)iVar44;
        uVar28 = *(uint *)((longlong)ppuVar11 + lVar17 * 4) & uVar9;
        if (uVar28 == 0) {
          iVar29 = local_e0 + 0x1e;
          if (-1 < (int)(local_e0 - 1)) {
            iVar29 = local_e0 - 1;
          }
          iVar29 = iVar29 >> 5;
          iVar51 = iVar51 + 0x20;
          iVar40 = iVar29;
          if (iVar29 < iVar44) {
            iVar40 = iVar44;
          }
          if (iVar44 < iVar29) {
            lVar30 = 0;
            do {
              uVar28 = *(uint *)((longlong)ppuVar11 + (lVar17 + lVar30 + 1) * 4);
              if (uVar28 != 0) {
                uVar47 = (ulonglong)(iVar44 + (int)lVar30 + 1);
                uVar9 = 0xffffffff;
                goto LAB_1409db651;
              }
              iVar51 = iVar51 + 0x20;
              lVar30 = lVar30 + 1;
            } while (iVar40 - lVar17 != lVar30);
            uVar9 = 0xffffffff;
            lVar17 = (longlong)iVar40;
          }
          uVar47 = lVar17 + 1U & 0xffffffff;
          uVar28 = local_e0;
        }
        else {
LAB_1409db651:
          uVar45 = (ulonglong)(-uVar28 & uVar28);
          uVar19 = uVar45 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar28 = (iVar51 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)local_e0 <= (int)uVar28) {
            uVar28 = local_e0;
          }
        }
      } while (uVar28 != (uint)local_210);
    }
LAB_1409db157:
    uVar28 = local_e0;
    if (local_e0 == 0) {
      uVar45 = 1;
      uVar47 = 0;
      iVar51 = 0;
      uVar9 = 0;
    }
    else {
      ppuVar11 = local_e8;
      if (local_e8 == (undefined8 **)0x0) {
        ppuVar11 = local_f8;
      }
      uVar9 = *(uint *)ppuVar11;
      if (uVar9 == 0) {
        iVar51 = local_e0 + 0x1e;
        if (-1 < (int)(local_e0 - 1)) {
          iVar51 = local_e0 - 1;
        }
        uVar47 = 0;
        uVar45 = (ulonglong)(uint)(iVar51 >> 5);
        if (iVar51 >> 5 < 1) {
          uVar45 = uVar47;
        }
        iVar51 = 0;
        do {
          if (uVar45 == uVar47) goto LAB_1409dbc00;
          iVar51 = iVar51 + 0x20;
          uVar9 = *(uint *)((longlong)ppuVar11 + (uVar47 + 1) * 4);
          uVar47 = uVar47 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar47 = 0;
        iVar51 = 0;
      }
      uVar45 = (ulonglong)(-uVar9 & uVar9);
      uVar19 = uVar45 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar9 = (iVar51 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)local_e0 <= (int)uVar9) {
        uVar9 = local_e0;
      }
    }
    if (uVar9 != local_e0) {
      local_220 = (longlong *)(local_228 + 0x460);
      uVar23 = 0xffffffff;
      do {
        lVar17 = (longlong)*(int *)(local_108.QuadPart + (longlong)(int)uVar9 * 0x10);
        pplVar3 = (longlong **)(*(longlong *)(local_228 + 0x5d8) + lVar17 * 0xc);
        uVar9 = *(uint *)pplVar3;
        bVar57 = true;
        if ((int)uStack_150 != local_124) {
          uVar39 = *(uint *)((longlong)pplVar3 + 4);
          puVar10 = local_118;
          if (local_118 == (undefined1 *)0x0) {
            puVar10 = local_120;
          }
          bVar57 = true;
          iVar44 = *(int *)(puVar10 +
                           (ulonglong)(local_110 - 1 & uVar39 * 0x58399e77 + uVar9 * -0x39feb07) * 4
                           );
          while (iVar44 != -1) {
            lVar30 = (longlong)iVar44 * 0x10;
            bVar57 = *(uint *)(local_158 + lVar30 + 4) != uVar39 ||
                     *(uint *)(local_158 + lVar30) != uVar9;
            if (*(uint *)(local_158 + lVar30 + 4) == uVar39 &&
                *(uint *)(local_158 + lVar30) == uVar9) break;
            iVar44 = *(int *)(local_158 + lVar30 + 8);
          }
        }
        if (uVar9 != 0xffffffff) {
          uVar39 = uVar9 & 0x1ffff;
          if (((uVar39 < *(uint *)(local_228 + 0x18)) &&
              (*(uint *)(*(longlong *)(local_228 + 0x10) + 8 + (ulonglong)uVar39 * 0x18) == uVar9))
             && (lVar30 = *(longlong *)(*(longlong *)(local_228 + 0x10) + (ulonglong)uVar39 * 0x18),
                lVar30 != 0)) {
            if (bVar57) {
              FUN_14366e376(local_228,*(undefined8 *)(*(longlong *)(local_228 + 0x5e8) + lVar17 * 8)
                            ,lVar30,1);
            }
            *(int *)(lVar30 + 0xc0) =
                 *(int *)(lVar30 + 0xc0) -
                 (uint)*(ushort *)(*(longlong *)(*(longlong *)(local_228 + 0x5e8) + lVar17 * 8) + 2)
            ;
            local_168 = (undefined8 *)(lVar30 + 0xc0);
            local_170 = pplVar3;
            FUN_14499e2d8(local_220,&local_15c,&local_170,0);
          }
          piVar21 = (int *)(**(longlong **)(local_228 + 0x3a0) +
                           (ulonglong)*(byte *)(pplVar3 + 1) * 4);
          *piVar21 = *piVar21 + -1;
        }
        *(uint *)pplVar3 = 0xffffffff;
        uVar23 = uVar23 & ~(uint)uVar45;
        ppuVar11 = local_e8;
        if (local_e8 == (undefined8 **)0x0) {
          ppuVar11 = local_f8;
        }
        iVar44 = (int)uVar47;
        lVar17 = (longlong)iVar44;
        uVar9 = *(uint *)((longlong)ppuVar11 + lVar17 * 4) & uVar23;
        if (uVar9 == 0) {
          iVar29 = local_e0 + 0x1e;
          if (-1 < (int)(local_e0 - 1)) {
            iVar29 = local_e0 - 1;
          }
          iVar29 = iVar29 >> 5;
          iVar51 = iVar51 + 0x20;
          iVar40 = iVar29;
          if (iVar29 < iVar44) {
            iVar40 = iVar44;
          }
          if (iVar44 < iVar29) {
            lVar30 = 0;
            do {
              uVar9 = *(uint *)((longlong)ppuVar11 + (lVar17 + lVar30 + 1) * 4);
              if (uVar9 != 0) {
                uVar47 = (ulonglong)(iVar44 + (int)lVar30 + 1);
                uVar23 = 0xffffffff;
                goto LAB_1409dbe92;
              }
              iVar51 = iVar51 + 0x20;
              lVar30 = lVar30 + 1;
            } while (iVar40 - lVar17 != lVar30);
            uVar23 = 0xffffffff;
            lVar17 = (longlong)iVar40;
          }
          uVar47 = lVar17 + 1U & 0xffffffff;
          uVar9 = local_e0;
        }
        else {
LAB_1409dbe92:
          uVar45 = (ulonglong)(-uVar9 & uVar9);
          uVar19 = uVar45 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar9 = (iVar51 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)local_e0 <= (int)uVar9) {
            uVar9 = local_e0;
          }
        }
      } while (uVar9 != uVar28);
    }
LAB_1409dbc00:
    uVar28 = local_e0;
    lVar17 = local_228;
    if (local_e0 == 0) {
      uVar45 = 1;
      uVar47 = 0;
      iVar51 = 0;
      uVar9 = 0;
    }
    else {
      ppuVar11 = local_e8;
      if (local_e8 == (undefined8 **)0x0) {
        ppuVar11 = local_f8;
      }
      uVar9 = *(uint *)ppuVar11;
      if (uVar9 == 0) {
        iVar51 = local_e0 + 0x1e;
        if (-1 < (int)(local_e0 - 1)) {
          iVar51 = local_e0 - 1;
        }
        uVar47 = 0;
        uVar45 = (ulonglong)(uint)(iVar51 >> 5);
        if (iVar51 >> 5 < 1) {
          uVar45 = uVar47;
        }
        iVar51 = 0;
        do {
          if (uVar45 == uVar47) goto LAB_1409dbef7;
          iVar51 = iVar51 + 0x20;
          uVar9 = *(uint *)((longlong)ppuVar11 + (uVar47 + 1) * 4);
          uVar47 = uVar47 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar47 = 0;
        iVar51 = 0;
      }
      uVar45 = (ulonglong)(-uVar9 & uVar9);
      uVar19 = uVar45 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      uVar9 = (iVar51 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if ((int)local_e0 <= (int)uVar9) {
        uVar9 = local_e0;
      }
    }
    if (uVar9 != local_e0) {
      lVar30 = local_228 + 0x5f8;
      uVar39 = 0xffffffff;
      uVar23 = local_e0;
      do {
        local_18c = *(undefined4 *)(local_108.QuadPart + (longlong)(int)uVar9 * 0x10);
        lVar49 = (longlong)*(int *)(local_108.QuadPart + 4 + (longlong)(int)uVar9 * 0x10) * 0x20;
        uVar9 = *(uint *)(*(longlong *)(lVar17 + 0x668) + 0x14 + lVar49);
        lVar20 = lVar17;
        if (((uVar9 != 0xffffffff) && (uVar24 = uVar9 & 0x1ffff, uVar24 < *(uint *)(lVar17 + 0x18)))
           && ((lVar20 = local_228,
               *(uint *)(*(longlong *)(lVar17 + 0x10) + 8 + (ulonglong)uVar24 * 0x18) == uVar9 &&
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)uVar24 * 0x18) != 0)))) {
          local_170 = (longlong **)(*(longlong *)(lVar17 + 0x668) + lVar49 + 0x14);
          local_168 = (undefined8 *)&local_18c;
          FUN_1448222aa(lVar30,&local_15c,&local_170);
          lVar20 = local_228;
          uVar23 = local_e0;
        }
        uVar39 = uVar39 & ~(uint)uVar45;
        ppuVar11 = local_e8;
        if (local_e8 == (undefined8 **)0x0) {
          ppuVar11 = local_f8;
        }
        iVar44 = (int)uVar47;
        lVar49 = (longlong)iVar44;
        uVar9 = *(uint *)((longlong)ppuVar11 + lVar49 * 4) & uVar39;
        lVar17 = lVar20;
        if (uVar9 == 0) {
          iVar29 = uVar23 + 0x1e;
          if (-1 < (int)(uVar23 - 1)) {
            iVar29 = uVar23 - 1;
          }
          iVar29 = iVar29 >> 5;
          iVar51 = iVar51 + 0x20;
          iVar40 = iVar29;
          if (iVar29 < iVar44) {
            iVar40 = iVar44;
          }
          lVar17 = local_228;
          if (iVar44 < iVar29) {
            lVar20 = 0;
            do {
              uVar9 = *(uint *)((longlong)ppuVar11 + (lVar49 + lVar20 + 1) * 4);
              if (uVar9 != 0) {
                uVar47 = (ulonglong)(iVar44 + (int)lVar20 + 1);
                uVar39 = 0xffffffff;
                goto LAB_1409dc710;
              }
              iVar51 = iVar51 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar40 - lVar49 != lVar20);
            uVar39 = 0xffffffff;
            lVar49 = (longlong)iVar40;
          }
          uVar47 = lVar49 + 1U & 0xffffffff;
          uVar9 = uVar23;
        }
        else {
LAB_1409dc710:
          uVar45 = (ulonglong)(-uVar9 & uVar9);
          uVar19 = uVar45 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar9 = (iVar51 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if ((int)uVar23 <= (int)uVar9) {
            uVar9 = uVar23;
          }
        }
      } while (uVar9 != uVar28);
    }
LAB_1409dbef7:
    local_208 = (uint *)(lVar17 + 0x5f8);
    local_1c0 = lVar17 + 0x460;
    local_1c8 = (longlong *)(lVar17 + 0x720);
    local_1f0 = lVar17 + 0x630;
    uVar45 = 0;
    uVar47 = local_1d0;
    uVar28 = local_1e4;
    do {
      iVar51 = (int)uVar45;
      uVar23 = (uint)(iVar51 + (int)uVar47) % *(uint *)(lVar17 + 0x3bc);
      lVar30 = *(longlong *)(lVar17 + 0x668);
      lVar20 = (longlong)(int)uVar23 * 0x20;
      puVar15 = (undefined8 *)(lVar30 + lVar20);
      local_210 = (longlong *)((longlong)iVar51 * 0x20);
      local_218 = local_188;
      local_188[(longlong)iVar51 * 4] = (longlong)puVar15;
      uVar9 = *(uint *)(lVar30 + 0x14 + lVar20);
      if (((uVar9 == 0xffffffff) || (uVar39 = uVar9 & 0x1ffff, *(uint *)(lVar17 + 0x18) <= uVar39))
         || (*(uint *)(*(longlong *)(lVar17 + 0x10) + 8 + (ulonglong)uVar39 * 0x18) != uVar9)) {
        lVar17 = 0;
      }
      else {
        lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)uVar39 * 0x18);
      }
      if ((int)uStack_100 == local_d4) {
        lVar49 = 0;
      }
      else {
        uVar9 = *(uint *)(*(longlong *)(local_228 + 0x668) + 0x10 + lVar20);
        puVar10 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar10 = local_d0;
        }
        iVar51 = *(int *)(puVar10 + (ulonglong)(local_c0 - 1U & uVar9) * 4);
        while (iVar51 != -1) {
          lVar49 = local_108.QuadPart + (longlong)iVar51 * 0x10;
          if (*(uint *)(local_108.QuadPart + (longlong)iVar51 * 0x10) == uVar9) goto LAB_1409dc033;
          iVar51 = *(int *)(lVar49 + 8);
        }
        lVar49 = 0;
      }
LAB_1409dc033:
      if ((lVar17 != 0) && (uVar23 == *(uint *)(lVar49 + 4))) {
        local_220 = (longlong *)(lVar30 + lVar20 + 0x14);
        local_1b8 = *(longlong *)(lVar17 + 0x68);
        local_200.QuadPart = (longlong)*(int *)(puVar15 + 3) * 5;
        local_168 = puVar15 + 2;
        iVar51 = *(int *)(puVar15 + 2);
        lVar20 = *(longlong *)(local_228 + 0x5d8);
        local_1b0 = uVar45;
        local_170 = (longlong **)local_220;
        FUN_1448222aa(local_208,&local_15c,&local_170);
        plVar16 = *(longlong **)*puVar15;
        puVar25 = (uint *)(ulonglong)
                          ((uint)*(ushort *)((longlong)plVar16 + 4) * 0x10 +
                           (uint)*(ushort *)((longlong)plVar16 + 6) * 8 + 8);
        pvVar12 = (void *)FUN_14001fdce(*(undefined8 *)
                                         (*(longlong *)(local_228 + 0x5e8) +
                                         (longlong)*(int *)(puVar15 + 2) * 8),puVar25,2);
        lVar30 = local_1b8;
        plVar22 = local_1c8;
        *(void **)(*(longlong *)(local_228 + 0x5e8) + (longlong)*(int *)(puVar15 + 2) * 8) = pvVar12
        ;
        bVar18 = *(byte *)(local_1b8 + 0x12 + local_200.QuadPart * 4);
        *(byte *)(lVar20 + 8 + (longlong)iVar51 * 0xc) = bVar18;
        piVar21 = (int *)(**(longlong **)(local_228 + 0x3a0) + (ulonglong)bVar18 * 4);
        *piVar21 = *piVar21 + 1;
        local_1f8 = puVar15;
        local_1e0 = plVar16;
        local_1d8 = puVar25;
        local_1a8 = (longlong)iVar51 * 3;
        local_1a0 = lVar20;
        memcpy(pvVar12,plVar16,(size_t)puVar25);
        *(int *)(lVar17 + 0xc0) = *(int *)(lVar17 + 0xc0) + (uint)*(ushort *)((longlong)pvVar12 + 2)
        ;
        local_168 = (undefined8 *)(lVar17 + 0xc0);
        local_170 = (longlong **)local_220;
        local_198 = pvVar12;
        FUN_14499e2d8(local_1c0,&local_15c,&local_170,0);
        *(undefined4 *)(local_228 + 0x728) = 0;
        if (*(int *)(local_228 + 0x72c) < 0) {
          FUN_14480809c(plVar22,0);
        }
        uVar45 = local_1b0;
        lVar30 = lVar30 + local_200.QuadPart * 4;
        lVar20 = local_228;
        if (((*(byte *)(lVar30 + 0x13) & 1) != 0) && (*(short *)(lVar30 + 0x10) != 0)) {
          uVar28 = 0;
          do {
            uVar9 = *(uint *)(*(longlong *)(lVar17 + 0x78) +
                             (longlong)(int)(*(int *)(lVar30 + 0xc) + uVar28) * 4);
            if (uVar9 < *(uint *)(lVar17 + 0x88)) {
              iVar51 = *(int *)(lVar20 + 0x3ac);
              iVar44 = *(int *)(lVar17 + 0xb4);
              iVar29 = *(int *)(lVar20 + 0x728);
              *(uint *)(lVar20 + 0x728) = iVar29 + 1U;
              if (*(uint *)(lVar20 + 0x72c) < iVar29 + 1U) {
                FUN_1447808da(plVar22,iVar29);
                lVar20 = local_228;
              }
              *(uint *)(*plVar22 + (longlong)iVar29 * 4) = uVar9 + iVar51 + iVar44;
            }
            else {
              if (*(int *)(lVar20 + 0x600) != *(int *)(lVar20 + 0x62c)) {
                lVar49 = *(longlong *)(lVar20 + 0x638);
                if (*(longlong *)(lVar20 + 0x638) == 0) {
                  lVar49 = local_1f0;
                }
                iVar51 = *(int *)(lVar49 + (ulonglong)
                                           (*(int *)(lVar20 + 0x640) - 1U &
                                           uVar9 * 0x58399e77 + (int)*local_220 * -0x39feb07) * 4);
                if (iVar51 != -1) {
                  do {
                    piVar21 = (int *)(*(longlong *)local_208 + (longlong)iVar51 * 0x14);
                    if ((*piVar21 == (int)*local_220) &&
                       (*(uint *)(*(longlong *)local_208 + 4 + (longlong)iVar51 * 0x14) == uVar9))
                    goto LAB_1409dc2dd;
                    iVar51 = piVar21[3];
                  } while (iVar51 != -1);
                }
              }
              piVar21 = (int *)0x0;
LAB_1409dc2dd:
              piVar33 = piVar21 + 2;
              if (piVar21 == (int *)0x0) {
                piVar33 = (int *)0x0;
              }
              iVar51 = *(int *)(lVar20 + 0x728);
              *(uint *)(lVar20 + 0x728) = iVar51 + 1U;
              if (*(uint *)(lVar20 + 0x72c) < iVar51 + 1U) {
                FUN_1447808da(plVar22,iVar51);
                lVar20 = local_228;
              }
              *(int *)(*plVar22 + (longlong)iVar51 * 4) = *piVar33;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < *(ushort *)(lVar30 + 0x10));
        }
        pvVar12 = local_198;
        puVar25 = local_1d8;
        puVar15 = local_1f8;
        puVar54 = (undefined8 *)((longlong)local_218 + (longlong)local_210);
        uVar28 = *(uint *)(local_1f8 + 2);
        uVar9 = *(uint *)(lVar20 + 0x3ac);
        uVar23 = uVar9;
        if (uVar28 < uVar9) {
          uVar23 = uVar28;
        }
        iVar51 = uVar28 - uVar9;
        if ((int)(uVar28 - uVar9) < 1) {
          iVar51 = 0;
        }
        local_220 = (longlong *)(local_1a0 + local_1a8 * 4);
        iVar44 = *(int *)(lVar30 + 4) - (int)local_1d8;
        local_170 = (longlong **)
                    CONCAT44(*(undefined4 *)(local_1f8 + 2),
                             *(undefined4 *)((longlong)local_1f8 + 0x14));
        *puVar54 = local_1f8;
        local_240 = plVar22;
        local_248 = &local_170;
        uVar13 = FUN_14482213a(*(undefined8 *)(lVar20 + 0x690),iVar44,
                               *(undefined2 *)((longlong)local_198 + 2),
                               iVar51 * 0x8000 + uVar23 * 0x20000);
        puVar54[1] = uVar13;
        puVar54[2] = (longlong)local_1e0 + (longlong)puVar25;
        *(int *)(puVar54 + 3) = iVar44;
        *local_220 = *(longlong *)((longlong)puVar15 + 0x14);
        FUN_14366e376(local_228,pvVar12,lVar17,0);
        uVar47 = local_1d0;
        uVar28 = local_1e4;
      }
      uVar9 = (int)uVar45 + 1;
      uVar45 = (ulonglong)uVar9;
      lVar17 = local_228;
    } while (uVar9 != uVar28);
    local_110 = 0;
    if (local_118 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar45 = (ulonglong)uStack_150 >> 0x20;
    uStack_150 = (uint *)((ulonglong)uStack_150 & 0xffffffff00000000);
    if ((int)uVar45 != 0) {
      FUN_14472eb64(&local_158,0);
    }
    iStack_128 = 0xffffffff;
    local_124 = 0;
    local_130 = 0;
    if (0x80 < local_12c) {
      local_12c = 0x80;
      FUN_1446efbd8(local_148,0);
    }
    if (local_138 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_158 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140201ac2(&local_108);
    local_108.QuadPart = 0;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    local_158 = FUN_14367d5ca;
    local_240 = (longlong *)((ulonglong)local_240 & 0xffffffff00000000);
    local_238 = &local_108;
    local_170 = &local_188;
    uStack_150 = (uint *)&local_170;
    FUN_1401f8d10(L"ParallelFor Task",uStack_180 & 0xffffffff);
    if (local_188 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar28 = *(uint *)(*(longlong **)(local_228 + 0x3a0) + 1);
  uVar45 = (ulonglong)uVar28;
  iVar51 = uVar28 + 1;
  do {
    if ((int)uVar45 < 1) {
      iVar51 = 0;
      break;
    }
    iVar51 = iVar51 + -1;
    lVar17 = uVar45 * 4;
    uVar45 = uVar45 - 1;
  } while (*(int *)(**(longlong **)(local_228 + 0x3a0) + -4 + lVar17) == 0);
  *(int *)(local_228 + 0x3a8) = iVar51;
  QueryPerformanceCounter(&local_108);
  LVar34 = local_108;
  lVar17 = local_228;
  if (*(longlong *)(local_228 + 0x6d8) == 0) goto LAB_1409ddb3d;
  if (*(int *)(local_228 + 0x664) < 0) {
    *(undefined4 *)(local_228 + 0x660) = 0;
    FUN_14480809c();
  }
  else {
    *(undefined4 *)(local_228 + 0x660) = 0;
  }
  local_200.s = LVar34.s;
  if (*(int *)(local_228 + 0x654) < 0) {
    *(undefined4 *)(local_228 + 0x650) = 0;
    FUN_147cd5586();
  }
  else {
    *(undefined4 *)(local_228 + 0x650) = 0;
  }
  lVar17 = local_228;
  if ((ulonglong)*(uint *)(local_228 + 0x6e0) != 0) {
    puVar27 = *(uint **)(local_228 + 0x6d8);
    puVar25 = puVar27 + (ulonglong)*(uint *)(local_228 + 0x6e0) * 3;
    plVar16 = (longlong *)(local_228 + 0x658);
    local_218 = (longlong *)(local_228 + 0x648);
    local_210 = plVar16;
    do {
      uVar28 = *puVar27;
      if (((uVar28 != 0xffffffff) && ((uVar28 & 0x1ffff) < *(uint *)(lVar17 + 0x18))) &&
         (lVar30 = *(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar28 & 0x1ffff) * 0x18,
         lVar30 != 0 && *(uint *)(lVar30 + 8) == uVar28)) {
        uVar9 = puVar27[1];
        uVar52 = uVar9 >> 5;
        uVar23 = puVar27[2];
        local_220 = (longlong *)(ulonglong)*(uint *)(lVar30 + 0xc);
        uVar24 = *(uint *)(lVar30 + 0xc) + uVar52;
        lVar30 = *(longlong *)(lVar17 + 0x588);
        lVar20 = (longlong)(int)uVar24;
        uVar39 = *(uint *)(lVar30 + lVar20 * 8);
        if (*(int *)(lVar30 + 4 + lVar20 * 8) == -1) {
          if (uVar39 == 0) {
            iVar51 = *(int *)(lVar17 + 0x650);
            *(uint *)(lVar17 + 0x650) = iVar51 + 1U;
            if (*(uint *)(lVar17 + 0x654) < iVar51 + 1U) {
              FUN_1463fcdd0(local_218,iVar51);
              plVar16 = local_210;
              lVar17 = local_228;
            }
            puVar31 = (uint *)(*local_218 + (longlong)iVar51 * 0xc);
            puVar48 = puVar31 + 2;
            *puVar31 = uVar28;
            puVar31[1] = uVar52;
            goto LAB_1409dc8d8;
          }
        }
        else if (uVar39 == 0) {
          iVar51 = *(int *)(lVar17 + 0x660);
          *(uint *)(lVar17 + 0x660) = iVar51 + 1U;
          if (*(uint *)(lVar17 + 0x664) < iVar51 + 1U) {
            FUN_1447808da(plVar16,iVar51);
            plVar16 = local_210;
            lVar17 = local_228;
          }
          puVar48 = (uint *)((longlong)iVar51 * 4 + *plVar16);
LAB_1409dc8d8:
          *puVar48 = uVar24;
          lVar30 = *(longlong *)(lVar17 + 0x588);
          uVar39 = *(uint *)(lVar30 + lVar20 * 8);
        }
        uVar9 = uVar9 & 0x1f;
        if (uVar39 < uVar23) {
          uVar39 = uVar23;
        }
        *(uint *)(lVar30 + lVar20 * 8) = uVar39;
        if (1 < uVar9) {
          lVar30 = (ulonglong)uVar9 - 1;
          plVar22 = local_220;
          do {
            uVar52 = uVar52 + 1;
            uVar39 = (int)plVar22 + uVar52;
            lVar20 = *(longlong *)(lVar17 + 0x588);
            lVar49 = (longlong)(int)uVar39;
            uVar9 = *(uint *)(lVar20 + lVar49 * 8);
            if (*(int *)(lVar20 + 4 + lVar49 * 8) == -1) {
              if (uVar9 == 0) {
                iVar51 = *(int *)(lVar17 + 0x650);
                *(uint *)(lVar17 + 0x650) = iVar51 + 1U;
                if (*(uint *)(lVar17 + 0x654) < iVar51 + 1U) {
                  FUN_1463fcdd0(local_218,iVar51);
                  plVar16 = local_210;
                  plVar22 = local_220;
                  lVar17 = local_228;
                }
                puVar31 = (uint *)(*local_218 + (longlong)iVar51 * 0xc);
                puVar48 = puVar31 + 2;
                *puVar31 = uVar28;
                puVar31[1] = uVar52;
                goto LAB_1409dc9a0;
              }
            }
            else if (uVar9 == 0) {
              iVar51 = *(int *)(lVar17 + 0x660);
              *(uint *)(lVar17 + 0x660) = iVar51 + 1U;
              if (*(uint *)(lVar17 + 0x664) < iVar51 + 1U) {
                FUN_1447808da(plVar16,iVar51);
                plVar16 = local_210;
                plVar22 = local_220;
                lVar17 = local_228;
              }
              puVar48 = (uint *)((longlong)iVar51 * 4 + *plVar16);
LAB_1409dc9a0:
              *puVar48 = uVar39;
              lVar20 = *(longlong *)(lVar17 + 0x588);
              uVar9 = *(uint *)(lVar20 + lVar49 * 8);
            }
            if (uVar9 < uVar23) {
              uVar9 = uVar23;
            }
            *(uint *)(lVar20 + lVar49 * 8) = uVar9;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
        }
      }
      puVar27 = puVar27 + 3;
    } while (puVar27 < puVar25);
  }
  uVar28 = *(uint *)(lVar17 + 0x6f8);
  if ((ulonglong)uVar28 != 0) {
    local_220 = (longlong *)(lVar17 + 0x6f0);
    if (0 < (int)uVar28) {
      plVar16 = (longlong *)(lVar17 + 0x410);
      uVar45 = 0;
      local_218 = plVar16;
      do {
        local_88 = (LARGE_INTEGER *)0x0;
        local_80 = 0x1000000000;
        FUN_147ccce9e(plVar16);
        uVar9 = (int)uVar45 + 1;
        uVar45 = (ulonglong)uVar9;
        lVar17 = local_228;
        if ((int)uVar9 < (int)uVar28) {
          uVar45 = (ulonglong)(int)uVar9;
          do {
            uVar9 = *(uint *)(*local_220 + uVar45 * 4);
            pLVar50 = local_88;
            if (local_88 == (LARGE_INTEGER *)0x0) {
              pLVar50 = &local_108;
            }
            lVar30 = (longlong)(int)local_80;
            if (lVar30 != 0) {
              uVar39 = uVar9 >> 1 & 0xffff;
              uVar23 = uVar9 | 0x1ffff;
              if (0xffffffdf < (uVar9 | 0x1ffff)) {
                uVar23 = 0xffffffe0;
              }
              lVar20 = 0;
              do {
                lVar49 = *(longlong *)((longlong)pLVar50 + lVar20);
                if ((*(uint *)(lVar49 + 0x88) <= uVar39) && (uVar39 < *(uint *)(lVar49 + 0x70))) {
                  FUN_14366ffac(lVar17,*(undefined4 *)(lVar49 + 0xac),uVar39,uVar23);
                  lVar17 = local_228;
                }
                lVar20 = lVar20 + 8;
              } while (lVar30 * 8 != lVar20);
            }
            uVar45 = uVar45 + 1;
            plVar16 = local_218;
          } while (((uVar9 & 1) != 0) && ((longlong)uVar45 < (longlong)(ulonglong)uVar28));
        }
        if (local_88 != (LARGE_INTEGER *)0x0) {
          FUN_1400020a8();
          lVar17 = local_228;
        }
      } while ((int)uVar45 < (int)uVar28);
    }
    *(undefined4 *)(lVar17 + 0x6f8) = 0;
    if (*(int *)(lVar17 + 0x6fc) < 0) {
      FUN_14480809c();
      lVar17 = local_228;
    }
  }
  if ((longlong)*(int *)(lVar17 + 0x708) != 0) {
    puVar27 = *(uint **)(lVar17 + 0x700);
    puVar25 = puVar27 + (longlong)*(int *)(lVar17 + 0x708) * 2;
    do {
      uVar28 = *puVar27;
      if (((uVar28 != 0xffffffff) && (uVar9 = uVar28 & 0x1ffff, uVar9 < *(uint *)(lVar17 + 0x18)))
         && (lVar30 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)uVar9 * 0x18),
            lVar30 != 0 &&
            *(uint *)(*(longlong *)(lVar17 + 0x10) + 8 + (ulonglong)uVar9 * 0x18) == uVar28)) {
        uVar28 = *(uint *)(lVar30 + 0x88);
        uVar9 = uVar28 + 0x10;
        if (*(uint *)(lVar30 + 0x70) < uVar28 + 0x10) {
          uVar9 = *(uint *)(lVar30 + 0x70);
        }
        if (uVar28 < uVar9) {
          do {
            FUN_14366ffac(lVar17,*puVar27,uVar28,-0x20 - puVar27[1]);
            uVar28 = uVar28 + 1;
            lVar17 = local_228;
          } while (uVar9 != uVar28);
        }
      }
      puVar27[1] = puVar27[1] - 1;
      puVar27 = puVar27 + 2;
    } while (puVar27 != puVar25);
    iVar51 = *(int *)(lVar17 + 0x708);
    lVar30 = (longlong)iVar51;
    if (lVar30 != 0) {
      lVar17 = *(longlong *)(lVar17 + 0x700);
      iVar29 = 0;
      bVar57 = *(int *)(lVar17 + 4) == 0;
      iVar44 = 0;
      do {
        lVar49 = (longlong)iVar44;
        lVar20 = lVar49;
        iVar41 = iVar44;
        iVar40 = iVar44 + 1;
        if (iVar44 + 1 < iVar51) {
          iVar40 = iVar51;
        }
        do {
          lVar20 = lVar20 + 1;
          iVar56 = iVar40;
          if (lVar30 <= lVar20) break;
          iVar56 = iVar41 + 1;
          iVar41 = iVar56;
        } while (bVar57 == (*(int *)(lVar17 + 4 + lVar20 * 8) == 0));
        if (bVar57 == false) {
          if (iVar29 != iVar44) {
            memmove((void *)(lVar17 + (longlong)iVar29 * 8),(void *)(lVar17 + lVar49 * 8),
                    (longlong)(iVar56 - iVar44) << 3);
          }
          iVar29 = iVar29 + (iVar56 - iVar44);
        }
        bVar57 = (bool)(bVar57 ^ 1);
        iVar44 = iVar56;
      } while (lVar20 < lVar30);
      *(int *)(local_228 + 0x708) = iVar29;
      lVar17 = local_228;
    }
  }
  iVar51 = *(int *)(lVar17 + 0x650);
  if (0 < (longlong)iVar51) {
    lVar30 = 0;
    do {
      lVar20 = *(longlong *)(lVar17 + 0x648);
      uVar28 = *(uint *)(lVar20 + lVar30);
      if (((uVar28 == 0xffffffff) || (uVar9 = uVar28 & 0x1ffff, *(uint *)(lVar17 + 0x18) <= uVar9))
         || (*(uint *)(*(longlong *)(lVar17 + 0x10) + 8 + (ulonglong)uVar9 * 0x18) != uVar28)) {
        puVar15 = (undefined8 *)0x0;
      }
      else {
        puVar15 = (undefined8 *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)uVar9 * 0x18);
      }
      local_240 = (longlong *)
                  CONCAT44(local_240._4_4_,
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + 0x588) +
                            (longlong)*(int *)(lVar20 + 8 + lVar30) * 8));
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,*(undefined4 *)((longlong)puVar15 + 0xc));
      FUN_1447a885c(local_228,*puVar15,uVar28,*(undefined4 *)(lVar20 + 4 + lVar30));
      lVar30 = lVar30 + 0xc;
      lVar17 = local_228;
    } while ((longlong)iVar51 * 0xc != lVar30);
  }
  local_218 = (longlong *)(longlong)*(int *)(lVar17 + 0x660);
  if (0 < (longlong)local_218) {
    plVar16 = (longlong *)(lVar17 + 0x658);
    plVar22 = (longlong *)0x0;
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x658) + (longlong)plVar22 * 4);
      lVar30 = *(longlong *)(lVar17 + 0x5a8);
      lVar38 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x588) + 4 + lVar14 * 8) * 0x50;
      lVar20 = *(longlong *)(lVar30 + 0x40 + lVar38);
      lVar49 = lVar30 + lVar38;
      if (lVar20 != 0) {
        lVar49 = lVar20;
      }
      lVar30 = (longlong)*(int *)(lVar30 + 0x48 + lVar38);
      local_220 = plVar22;
      if (lVar30 != 0) {
        uVar28 = *(int *)(*(longlong *)(lVar17 + 0x588) + lVar14 * 8) + 1;
        lVar20 = 0;
        do {
          iVar51 = *(int *)(lVar49 + lVar20);
          lVar14 = *(longlong *)(lVar17 + 0x588);
          lVar38 = (longlong)iVar51;
          uVar9 = *(uint *)(lVar14 + lVar38 * 8);
          if (uVar9 == 0) {
            iVar44 = *(int *)(lVar17 + 0x660);
            uVar9 = iVar44 + 1;
            *(uint *)(lVar17 + 0x660) = uVar9;
            if (*(uint *)(lVar17 + 0x664) < uVar9) {
              FUN_1447808da(plVar16);
              lVar17 = local_228;
            }
            *(int *)(*plVar16 + (longlong)iVar44 * 4) = iVar51;
            uVar9 = *(uint *)(lVar14 + lVar38 * 8);
          }
          if (uVar9 < uVar28) {
            *(uint *)(lVar14 + lVar38 * 8) = uVar28;
            FUN_14472c26a(lVar17);
            lVar17 = local_228;
          }
          lVar20 = lVar20 + 4;
        } while (lVar30 * 4 != lVar20);
      }
      plVar22 = (longlong *)((longlong)local_220 + 1);
    } while (plVar22 != local_218);
  }
  uVar28 = *(int *)(lVar17 + 0x3bc) - *(int *)(lVar17 + 0x3c8);
  plVar16 = (longlong *)(lVar17 + 0x730);
  *(undefined4 *)(lVar17 + 0x738) = 0;
  if (*(int *)(lVar17 + 0x73c) < 0) {
    FUN_147cd55b6(plVar16);
    lVar17 = local_228;
  }
  plVar22 = (longlong *)(lVar17 + 0x710);
  *(undefined4 *)(lVar17 + 0x718) = 0;
  if (*(int *)(lVar17 + 0x71c) < 0) {
    FUN_147cd5556(plVar22);
    lVar17 = local_228;
  }
  if ((longlong)*(int *)(lVar17 + 0x650) == 0) {
    iVar51 = 0;
  }
  else {
    puVar54 = *(undefined8 **)(lVar17 + 0x648);
    puVar15 = (undefined8 *)((longlong)puVar54 + (longlong)*(int *)(lVar17 + 0x650) * 0xc);
    do {
      uVar13 = *puVar54;
      uVar35 = *(undefined4 *)(*(longlong *)(lVar17 + 0x588) + (longlong)*(int *)(puVar54 + 1) * 8);
      iVar51 = *(int *)(lVar17 + 0x718);
      *(uint *)(lVar17 + 0x718) = iVar51 + 1U;
      if (*(uint *)(lVar17 + 0x71c) < iVar51 + 1U) {
        FUN_1463fce64(plVar22);
        lVar17 = local_228;
      }
      lVar30 = *plVar22;
      *(undefined8 *)(lVar30 + (longlong)iVar51 * 0xc) = uVar13;
      *(undefined4 *)(lVar30 + 8 + (longlong)iVar51 * 0xc) = uVar35;
      puVar54 = (undefined8 *)((longlong)puVar54 + 0xc);
    } while (puVar54 != puVar15);
    iVar51 = *(int *)(lVar17 + 0x650);
  }
  uVar9 = iVar51 + *(int *)(lVar17 + 0x660);
  *(uint *)(lVar17 + 0x3e0) = uVar9;
  fVar58 = 0.0;
  if (*(uint *)(lVar17 + 0x3ac) != 0) {
    fVar58 = ((float)uVar9 / (float)*(uint *)(lVar17 + 0x3ac)) * 100.0;
  }
  *(float *)(lVar17 + 0x3f4) = fVar58;
  pfVar7 = *(float **)(lVar17 + 0x6a0);
  fVar59 = DAT_14c7619a8;
  if (100.0 <= DAT_14c7619a8) {
    fVar59 = 100.0;
  }
  if (fVar59 <= 10.0) {
    fVar59 = 10.0;
  }
  fVar60 = DAT_14c7619ac;
  if (100.0 <= DAT_14c7619ac) {
    fVar60 = 100.0;
  }
  if (fVar60 <= fVar59) {
    fVar60 = fVar59;
  }
  if (fVar60 < fVar58) {
    fVar60 = (float)((int)pfVar7[1] + 1);
    pfVar7[1] = fVar60;
    if (fVar59 <= fVar58) {
      pfVar7[2] = 0.0;
      if ((uint)fVar60 < 2) goto LAB_1409dd004;
    }
    else {
      fVar58 = (float)((int)pfVar7[2] + 1);
      pfVar7[2] = fVar58;
      if ((uint)fVar60 < 2) goto LAB_1409dcfb0;
    }
    fVar58 = *pfVar7 * 0.97;
LAB_1409dd000:
    *pfVar7 = fVar58;
  }
  else {
    pfVar7[1] = 0.0;
    if (fVar59 <= fVar58) {
      pfVar7[2] = 0.0;
    }
    else {
      fVar58 = (float)((int)pfVar7[2] + 1);
      pfVar7[2] = fVar58;
LAB_1409dcfb0:
      if (0x1d < (uint)fVar58) {
        fVar58 = *pfVar7 * 1.01;
        goto LAB_1409dd000;
      }
    }
  }
LAB_1409dd004:
  fVar58 = DAT_14c7619b0;
  if (1.0 <= DAT_14c7619b0) {
    fVar58 = 1.0;
  }
  if (fVar58 <= 0.1) {
    fVar58 = 0.1;
  }
  fVar59 = *pfVar7;
  if (1.0 <= fVar59) {
    fVar59 = 1.0;
  }
  if (fVar59 <= fVar58) {
    fVar59 = fVar58;
  }
  *pfVar7 = fVar59;
  *(float *)(lVar17 + 0x3d0) = fVar59;
  iVar51 = *(int *)(lVar17 + 0x718);
  if (iVar51 != 0) {
    lVar17 = *(longlong *)(local_228 + 0x710);
    iVar44 = (iVar51 - (iVar51 + -2 >> 0x1f)) + -2 >> 1;
    iVar29 = iVar44;
joined_r0x0001409dd06c:
    do {
      iVar40 = iVar44 * 2 + 1;
      if (iVar40 < iVar51) {
        iVar41 = iVar44 * 2 + 2;
        if ((iVar41 < iVar51) &&
           (*(uint *)(lVar17 + 8 + (longlong)iVar40 * 0xc) <=
            *(uint *)(lVar17 + 8 + (longlong)iVar41 * 0xc))) {
          iVar40 = iVar41;
        }
        if (*(uint *)(lVar17 + 8 + (longlong)iVar44 * 0xc) <
            *(uint *)(lVar17 + 8 + (longlong)iVar40 * 0xc)) {
          pLVar50 = (LARGE_INTEGER *)(lVar17 + (longlong)iVar44 * 0xc);
          pLVar4 = (LARGE_INTEGER *)(lVar17 + (longlong)iVar40 * 0xc);
          DVar6 = pLVar50[1].s.LowPart;
          uStack_100._4_4_ = (undefined4)(uStack_100 >> 0x20);
          uStack_100 = CONCAT44(uStack_100._4_4_,DVar6);
          local_108 = *pLVar50;
          pLVar50[1].s.LowPart = pLVar4[1].s.LowPart;
          *pLVar50 = *pLVar4;
          pLVar4[1].s.LowPart = DVar6;
          *pLVar4 = local_108;
          iVar44 = iVar40;
          goto joined_r0x0001409dd06c;
        }
      }
      bVar57 = iVar29 != 0;
      iVar44 = iVar29 + -1;
      iVar29 = iVar44;
    } while (bVar57);
  }
  iVar51 = *(int *)(local_228 + 0x660);
  lVar17 = local_228;
  if ((longlong)iVar51 != 0) {
    local_220 = (longlong *)CONCAT44(local_220._4_4_,uVar28);
    lVar30 = *(longlong *)(local_228 + 0x658);
    plVar1 = (longlong *)(local_228 + 0x5c8);
    lVar20 = 0;
    do {
      lVar49 = *(longlong *)(lVar17 + 0x5b8);
      uVar28 = *(uint *)(*(longlong *)(lVar17 + 0x588) + 4 + (longlong)*(int *)(lVar30 + lVar20) * 8
                        );
      *(undefined4 *)
       (*(longlong *)(lVar17 + 0x5c8) + (longlong)*(int *)(lVar49 + (longlong)(int)uVar28 * 4) * 4)
           = 0xffffffff;
      iVar44 = *(int *)(lVar17 + 0x5d0);
      *(int *)(lVar49 + (longlong)(int)uVar28 * 4) = iVar44;
      *(uint *)(lVar17 + 0x5d0) = iVar44 + 1U;
      if (*(uint *)(lVar17 + 0x5d4) < iVar44 + 1U) {
        FUN_1447808da(plVar1);
        lVar17 = local_228;
      }
      *(uint *)(*plVar1 + (longlong)iVar44 * 4) = uVar28 | 0x80000000;
      lVar20 = lVar20 + 4;
    } while ((longlong)iVar51 * 4 != lVar20);
    iVar51 = *(int *)(lVar17 + 0x660);
    uVar28 = (uint)local_220;
    if ((longlong)iVar51 != 0) {
      lVar30 = *(longlong *)(lVar17 + 0x658);
      lVar20 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar17 + 0x588) + (longlong)*(int *)(lVar30 + lVar20) * 8) = 0
        ;
        lVar20 = lVar20 + 4;
      } while ((longlong)iVar51 * 4 != lVar20);
    }
  }
  iVar51 = *(int *)(lVar17 + 0x650);
  if ((longlong)iVar51 != 0) {
    lVar30 = *(longlong *)(lVar17 + 0x648);
    lVar20 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar17 + 0x588) + (longlong)*(int *)(lVar30 + 8 + lVar20) * 8) =
           0;
      lVar20 = lVar20 + 0xc;
    } while ((longlong)iVar51 * 0xc != lVar20);
  }
  while ((uVar9 = *(uint *)(lVar17 + 0x738), uVar9 < uVar28 &&
         (uVar23 = *(uint *)(lVar17 + 0x718), 0 < (int)uVar23))) {
    puVar15 = (undefined8 *)*plVar22;
    uVar13 = *puVar15;
    if (uVar23 == 1) {
      *(undefined4 *)(lVar17 + 0x718) = 0;
    }
    else {
      uVar8 = *(undefined8 *)((longlong)puVar15 + (ulonglong)uVar23 * 0xc + -0xc);
      *(undefined4 *)(puVar15 + 1) =
           *(undefined4 *)((longlong)puVar15 + (ulonglong)uVar23 * 0xc + -4);
      *puVar15 = uVar8;
      iVar51 = *(int *)(lVar17 + 0x718);
      lVar30 = *(longlong *)(lVar17 + 0x710);
      iVar44 = iVar51 + -1;
      *(int *)(lVar17 + 0x718) = iVar44;
      if (2 < iVar51) {
        iVar51 = 0;
        iVar40 = 1;
        iVar29 = 0;
        do {
          iVar51 = iVar51 + 2;
          iVar41 = iVar40;
          if ((iVar51 < iVar44) &&
             (*(uint *)(lVar30 + 8 + (longlong)iVar40 * 0xc) <=
              *(uint *)(lVar30 + 8 + (longlong)iVar51 * 0xc))) {
            iVar41 = iVar51;
          }
          if (*(uint *)(lVar30 + 8 + (longlong)iVar41 * 0xc) <=
              *(uint *)(lVar30 + 8 + (longlong)iVar29 * 0xc)) break;
          pLVar50 = (LARGE_INTEGER *)(lVar30 + (longlong)iVar29 * 0xc);
          pLVar4 = (LARGE_INTEGER *)(lVar30 + (longlong)iVar41 * 0xc);
          DVar6 = pLVar50[1].s.LowPart;
          uStack_100 = CONCAT44(uStack_100._4_4_,DVar6);
          local_108 = *pLVar50;
          pLVar50[1].s.LowPart = pLVar4[1].s.LowPart;
          *pLVar50 = *pLVar4;
          pLVar4[1].s.LowPart = DVar6;
          *pLVar4 = local_108;
          iVar51 = iVar41 * 2;
          iVar40 = iVar41 * 2 + 1;
          iVar29 = iVar41;
        } while (iVar40 < iVar44);
      }
    }
    uVar9 = (uint)uVar13;
    lVar17 = local_228;
    if ((((uVar9 != 0xffffffff) && ((uVar9 & 0x1ffff) < *(uint *)(local_228 + 0x18))) &&
        (lVar30 = *(longlong *)
                   (*(longlong *)(local_228 + 0x10) + (ulonglong)(uVar9 & 0x1ffff) * 0x18),
        lVar30 != 0 &&
        *(uint *)(*(longlong *)(local_228 + 0x10) + 8 + (ulonglong)(uVar9 & 0x1ffff) * 0x18) ==
        uVar9)) && ((uint)((ulonglong)uVar13 >> 0x20) < *(uint *)(lVar30 + 0x70))) {
      iVar51 = *(int *)(local_228 + 0x738);
      uVar9 = iVar51 + 1;
      *(uint *)(local_228 + 0x738) = uVar9;
      if (*(uint *)(local_228 + 0x73c) < uVar9) {
        FUN_1463fcef8(plVar16);
      }
      *(undefined8 *)(*plVar16 + (longlong)iVar51 * 8) = uVar13;
      lVar17 = local_228;
    }
  }
  if (uVar9 != 0) {
    local_108.QuadPart = 0;
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar9);
    local_f8[0] = (undefined8 *)0x0;
    puVar25 = *(uint **)(lVar17 + 0x730);
    iVar51 = 0;
    puVar15 = (undefined8 *)0x0;
    local_218 = (longlong *)0x0;
    puVar27 = puVar25 + (longlong)(int)uVar9 * 2;
    plVar16 = (longlong *)(lVar17 + 0x5c8);
LAB_1409dd430:
    uVar28 = *puVar25;
    if (((uVar28 == 0xffffffff) || (uVar9 = uVar28 & 0x1ffff, *(uint *)(lVar17 + 0x18) <= uVar9)) ||
       (*(uint *)(*(longlong *)(lVar17 + 0x10) + 8 + (ulonglong)uVar9 * 0x18) != uVar28)) {
      lVar30 = 0;
    }
    else {
      lVar30 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)uVar9 * 0x18);
    }
    if ((*(int *)(lVar30 + 0x24) < 0) || (iVar51 != 0x20)) {
      local_210 = (longlong *)CONCAT44(local_210._4_4_,*(int *)(lVar30 + 0x24));
      if ((int)local_218 < *(int *)(lVar17 + 0x5d0)) {
        local_220 = (longlong *)(lVar30 + 0x10);
        lVar20 = 0;
        do {
          lVar49 = (longlong)*(int *)((longlong)(int)local_218 * 4 + *plVar16 + lVar20 * 4);
          if (-1 < lVar49) {
            lVar49 = lVar49 * 0x10;
            puVar31 = (uint *)(*(longlong *)(lVar17 + 0x598) + lVar49);
            if ((puVar31 != (uint *)0x0) &&
               (*(char *)(*(longlong *)(lVar17 + 0x598) + 0xc + lVar49) == '\0'))
            goto LAB_1409dd4d0;
          }
          lVar20 = lVar20 + 1;
          if ((longlong)*(int *)(lVar17 + 0x5d0) - (longlong)(int)local_218 == lVar20) break;
        } while( true );
      }
    }
    else {
      iVar51 = 0x20;
    }
    goto LAB_1409dda12;
  }
  bVar57 = true;
  goto LAB_1409dda55;
LAB_1409dd4d0:
  puVar55 = (undefined4 *)((longlong)(int)puVar25[1] * 0x14 + *(longlong *)(lVar30 + 0x68));
  plVar22 = (longlong *)((longlong)*(int *)(lVar17 + 0x3cc) * 0x20 + *(longlong *)(lVar17 + 0x668));
  local_208 = puVar25;
  local_1f8 = puVar15;
  local_1e0 = plVar16;
  local_1d8 = puVar27;
  puVar15 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined8 *)((longlong)puVar15 + 10) = 0;
  *(undefined8 *)((longlong)puVar15 + 0x12) = 0;
  if (puVar15 != (undefined8 *)0x0) {
    LOCK();
    *(int *)((longlong)puVar15 + 0xc) = *(int *)((longlong)puVar15 + 0xc) + 1;
    UNLOCK();
  }
  lVar17 = *plVar22;
  *plVar22 = (longlong)puVar15;
  if (lVar17 != 0) {
    LOCK();
    piVar21 = (int *)(lVar17 + 0xc);
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (*piVar21 == 0) {
      FUN_144716208(lVar17);
      FUN_1400020a8(lVar17);
    }
  }
  plVar16 = (longlong *)plVar22[1];
  plVar22[1] = 0;
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x10))();
  }
  local_1f0 = CONCAT44(local_1f0._4_4_,iVar51);
  plVar22[2] = -1;
  plVar22[3] = 0xffffffff;
  piVar21 = *(int **)(local_228 + 0x688);
  iVar44 = puVar55[1];
  uVar28 = piVar21[1];
  uVar9 = piVar21[2];
  lVar17 = local_228;
  puVar15 = local_1f8;
  if (uVar9 < uVar28) {
    if (uVar28 - uVar9 < iVar44 + 1U) {
LAB_1409dda12:
      bVar57 = iVar51 == 0;
      if (((ulonglong)puVar15 & 1) != 0) goto LAB_1409dda1c;
      goto LAB_1409dda2e;
    }
  }
  else if ((*piVar21 - uVar9 < iVar44 + (uint)(uVar28 == 0)) && (uVar9 = 0, uVar28 < iVar44 + 1U))
  goto LAB_1409dda12;
  piVar21[2] = iVar44 + uVar9;
  lVar17 = *(longlong *)(local_228 + 0x678);
  uVar35 = puVar55[1];
  plVar16 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (ulonglong)uVar9 + lVar17;
  *(undefined4 *)(plVar16 + 1) = uVar35;
  *(undefined2 *)(plVar16 + 3) = 0;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
  }
  lVar30 = *plVar22;
  *plVar22 = (longlong)plVar16;
  if (lVar30 != 0) {
    LOCK();
    piVar21 = (int *)(lVar30 + 0xc);
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (*piVar21 == 0) {
      FUN_144716208(lVar30);
      FUN_1400020a8(lVar30);
    }
  }
  local_238 = (LARGE_INTEGER *)(plVar22 + 1);
  local_248 = (undefined8 *)CONCAT44(local_248._4_4_,1);
  local_240 = plVar22;
  FUN_1449baf38(&local_108,local_220,*puVar55,puVar55[1]);
  uVar28 = *puVar31;
  if (uVar28 != 0xffffffff) {
    if ((uVar28 & 0x1ffff) < *(uint *)(local_228 + 0x18)) {
      plVar16 = (longlong *)(*(longlong *)(local_228 + 0x10) + (ulonglong)(uVar28 & 0x1ffff) * 0x18)
      ;
      if (*(uint *)(plVar16 + 1) != uVar28) {
        plVar16 = (longlong *)0x0;
      }
    }
    else {
      plVar16 = (longlong *)0x0;
    }
    lVar17 = *plVar16;
    iVar51 = *(int *)((longlong)plVar16 + 0xc);
    uVar28 = puVar31[1];
    lVar30 = *(longlong *)(local_228 + 0x588);
    lVar49 = (longlong)*(int *)(lVar30 + 4 + (longlong)(int)(uVar28 + iVar51) * 8);
    puVar15 = (undefined8 *)(lVar49 * 0x10 + *(longlong *)(local_228 + 0x598));
    uVar42 = *(ushort *)(*(longlong *)(lVar17 + 0x68) + 0x10 + (longlong)(int)uVar28 * 0x14);
    if (uVar42 != 0) {
      lVar30 = *(longlong *)(lVar17 + 0x68) + (longlong)(int)uVar28 * 0x14;
      uVar28 = 0;
      do {
        uVar9 = *(uint *)(*(longlong *)(lVar17 + 0x78) +
                         (longlong)(int)(*(int *)(lVar30 + 0xc) + uVar28) * 4);
        if (*(uint *)(lVar17 + 0x88) <= uVar9) {
          pcVar5 = (char *)(*(longlong *)(local_228 + 0x598) + 0xc +
                           (longlong)
                           *(int *)(*(longlong *)(local_228 + 0x588) + 4 +
                                   (longlong)(int)(uVar9 + iVar51) * 8) * 0x10);
          *pcVar5 = *pcVar5 + -1;
          uVar42 = *(ushort *)(lVar30 + 0x10);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < uVar42);
      lVar30 = *(longlong *)(local_228 + 0x588);
    }
    *(undefined8 *)(lVar30 + (longlong)*(int *)(puVar15 + 1) * 8) = 0xffffffff00000000;
    *puVar15 = 0xffffffffffffffff;
    puVar15[1] = 0xffffffff;
    lVar17 = *(longlong *)(local_228 + 0x5a8);
    lVar49 = lVar49 * 0x50;
    *(undefined4 *)(lVar17 + 0x48 + lVar49) = 0;
    lVar30 = local_228;
    if (*(int *)(lVar17 + 0x4c + lVar49) < 0) {
      FUN_147cd4f0c(lVar17 + lVar49);
    }
  }
  *(undefined8 *)((longlong)plVar22 + 0x14) = *(undefined8 *)local_208;
  uVar9 = (uint)((ulonglong)((longlong)puVar31 - *(longlong *)(local_228 + 0x598)) >> 4);
  *(uint *)(plVar22 + 2) = uVar9;
  *(uint *)(local_228 + 0x3cc) = (*(int *)(local_228 + 0x3cc) + 1U) % *(uint *)(local_228 + 0x3bc);
  *(int *)(local_228 + 0x3c8) = *(int *)(local_228 + 0x3c8) + 1;
  *(undefined4 *)((longlong)plVar22 + 0x1c) = puVar55[1];
  uVar28 = *local_208;
  if (uVar28 == 0xffffffff) {
    lVar17 = *(longlong *)(local_228 + 0x10);
  }
  else {
    uVar23 = uVar28 & 0x1ffff;
    lVar17 = *(longlong *)(local_228 + 0x10);
    if ((uVar23 < *(uint *)(local_228 + 0x18)) &&
       (*(uint *)(lVar17 + 8 + (ulonglong)uVar23 * 0x18) == uVar28)) {
      lVar49 = *(longlong *)(lVar17 + (ulonglong)uVar23 * 0x18);
      goto LAB_1409dd7e0;
    }
  }
  lVar49 = 0;
LAB_1409dd7e0:
  lVar46 = (longlong)(int)local_208[1] * 0x14 + *(longlong *)(lVar49 + 0x68);
  local_220 = (longlong *)
              CONCAT44(local_220._4_4_,
                       *(undefined4 *)(lVar17 + 0xc + (longlong)*(int *)(lVar49 + 0xb4) * 0x18));
  lVar17 = *(longlong *)(local_228 + 0x5a8);
  puVar15 = (undefined8 *)(longlong)(int)uVar9;
  lVar38 = (longlong)puVar15 * 0x50;
  lVar14 = lVar17 + lVar38;
  *(undefined4 *)(lVar17 + 0x48 + lVar38) = 0;
  if (*(int *)(lVar17 + 0x4c + lVar38) < 0) {
    FUN_147cd4f0c(lVar14);
  }
  uVar42 = *(ushort *)(lVar46 + 0x10);
  lVar17 = local_228;
  puVar25 = local_208;
  if (uVar42 != 0) {
    uVar28 = 0;
    do {
      uVar23 = *(uint *)(*(longlong *)(lVar49 + 0x78) +
                        (longlong)(int)(*(int *)(lVar46 + 0xc) + uVar28) * 4);
      if (*(uint *)(lVar49 + 0x88) <= uVar23) {
        iVar44 = uVar23 + (uint)local_220;
        pcVar5 = (char *)(*(longlong *)(lVar17 + 0x598) + 0xc +
                         (longlong)
                         *(int *)(*(longlong *)(lVar17 + 0x588) + 4 + (longlong)iVar44 * 8) * 0x10);
        *pcVar5 = *pcVar5 + '\x01';
        iVar51 = *(int *)(lVar14 + 0x48);
        lVar30 = (longlong)iVar51;
        *(uint *)(lVar14 + 0x48) = iVar51 + 1U;
        if (*(uint *)(lVar14 + 0x4c) < iVar51 + 1U) {
          local_1f8 = puVar15;
          FUN_147cd4f58(lVar14,iVar51);
          puVar15 = local_1f8;
          lVar17 = local_228;
          puVar25 = local_208;
        }
        lVar38 = *(longlong *)(lVar14 + 0x40);
        if (*(longlong *)(lVar14 + 0x40) == 0) {
          lVar38 = lVar14;
        }
        *(int *)(lVar38 + lVar30 * 4) = iVar44;
        uVar42 = *(ushort *)(lVar46 + 0x10);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar42);
  }
  lVar49 = *(longlong *)(lVar17 + 0x598);
  lVar14 = (longlong)puVar15 * 0x10;
  *(undefined8 *)(lVar49 + lVar14) = 0xffffffffffffffff;
  ((undefined8 *)(lVar49 + lVar14))[1] = 0xffffffff;
  *(undefined8 *)(lVar49 + lVar14) = *(undefined8 *)puVar25;
  uVar28 = puVar25[1];
  *(uint *)(lVar49 + 8 + lVar14) = (uint)local_220 + uVar28;
  *(uint *)(*(longlong *)(lVar17 + 0x588) + 4 + (longlong)(int)((uint)local_220 + uVar28) * 8) =
       uVar9;
  lVar49 = *(longlong *)(lVar17 + 0x5b8);
  *(undefined4 *)
   (*(longlong *)(lVar17 + 0x5c8) + (longlong)*(int *)(lVar49 + (longlong)puVar15 * 4) * 4) =
       0xffffffff;
  iVar44 = *(int *)(lVar17 + 0x5d0);
  *(int *)(lVar49 + (longlong)puVar15 * 4) = iVar44;
  *(uint *)(lVar17 + 0x5d0) = iVar44 + 1U;
  if (*(uint *)(lVar17 + 0x5d4) < iVar44 + 1U) {
    FUN_1447808da(local_1e0);
    lVar17 = local_228;
    puVar25 = local_208;
  }
  local_218 = (longlong *)((ulonglong)((int)local_218 + 1) + lVar20);
  iVar51 = (int)local_1f0 - ((int)~(uint)local_210 >> 0x1f);
  *(uint *)(*local_1e0 + (longlong)iVar44 * 4) = uVar9 | 0x80000000;
  puVar25 = puVar25 + 2;
  puVar15 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
  puVar27 = local_1d8;
  plVar16 = local_1e0;
  if (puVar25 == local_1d8) goto LAB_1409ddbf2;
  goto LAB_1409dd430;
LAB_1409ddbf2:
  bVar57 = iVar51 == 0;
LAB_1409dda1c:
  FUN_1403c8d20(&local_108);
  lVar17 = local_228;
LAB_1409dda2e:
  if (local_f8[0] != (undefined8 *)0x0) {
    LOCK();
    piVar21 = (int *)(local_f8[0] + 1);
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (*piVar21 == 0) {
      (**(code **)*local_f8[0])();
      lVar17 = local_228;
    }
  }
LAB_1409dda55:
  iVar51 = *(int *)(lVar17 + 0x5d0);
  if (iVar51 != 0) {
    plVar16 = (longlong *)(lVar17 + 0x5c8);
    iVar29 = 0;
    iVar44 = 0;
    do {
      uVar28 = *(uint *)(*plVar16 + (longlong)iVar44 * 4);
      if (uVar28 != 0xffffffff) {
        uVar28 = uVar28 & 0x7fffffff;
        *(uint *)(*plVar16 + (longlong)iVar29 * 4) = uVar28;
        *(int *)(*(longlong *)(lVar17 + 0x5b8) + (ulonglong)uVar28 * 4) = iVar29;
        iVar29 = iVar29 + 1;
      }
      iVar44 = iVar44 + 1;
    } while (iVar51 != iVar44);
    iVar51 = *(int *)(lVar17 + 0x5d0);
    if (iVar51 < iVar29) {
      *(int *)(lVar17 + 0x5d0) = iVar29;
      if ((uint)(*(int *)(lVar17 + 0x5d4) - iVar51) < (uint)(iVar29 - iVar51)) {
        FUN_1447808da(plVar16);
      }
      memset((void *)((longlong)iVar51 * 4 + *plVar16),0,(longlong)(iVar29 - iVar51) << 2);
      lVar17 = local_228;
    }
    else {
      if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar29);
      }
      lVar17 = local_228;
      if (iVar29 < iVar51) {
        *(int *)(local_228 + 0x5d0) = iVar29;
        FUN_144780a3c(plVar16);
        lVar17 = local_228;
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caffd2c) &&
     (FUN_144b3d300(&DAT_14caffd2c), lVar17 = local_228, DAT_14caffd2c == -1)) {
    uVar13 = FUN_1400dbadc();
    lVar17 = FUN_145aa0930(uVar13,L"PakFile");
    DAT_14caffd29 = lVar17 != 0;
    _Init_thread_footer(&DAT_14caffd2c);
    lVar17 = local_228;
  }
  LVar34 = local_200;
  if (((!bVar57) && (DAT_14caffd29 == '\x01')) && (DAT_14caffd30 == '\0')) {
    DAT_14caffd30 = '\x01';
  }
LAB_1409ddb3d:
  *(DWORD *)(lVar17 + 0x3e4) = LVar34.s.LowPart;
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409ddcb8 FUN_1409ddcb8 body=9 status=ok
// SIG undefined FUN_1409ddcb8(void)

void FUN_1409ddcb8(longlong param_1)

{
  FUN_1409ddcc2(param_1 + 0x10);
  return;
}



// FUNCTION 1409ddcc2 FUN_1409ddcc2 body=140 status=ok
// SIG undefined FUN_1409ddcc2(void)

void FUN_1409ddcc2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3184b0;
  FUN_1407d69ac(param_1,0);
  FUN_1407d6a19(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001409ddd43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409ddd4e FUN_1409ddd4e body=63 status=ok
// SIG undefined FUN_1409ddd4e(void)

undefined1 FUN_1409ddd4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1409ddd8e(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1409ddd8e FUN_1409ddd8e body=216 status=ok
// SIG undefined FUN_1409ddd8e(void)

longlong FUN_1409ddd8e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_140311eb6(param_1 + 8,param_2 + 8);
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1 + 0x18,param_2 + 0x18);
  }
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar4;
  FUN_1409ddf36(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x4c);
  FUN_140841e14(param_1 + 0x48,1);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  FUN_1409dde66(param_1 + 0x68,param_2 + 0x68);
  FUN_1409dde66(param_1 + 0x98,param_2 + 0x98);
  if (param_2 != param_1) {
    FUN_1409ddf94(param_1 + 200,param_2 + 200);
    FUN_1409ddf94(param_1 + 0xe0,param_2 + 0xe0);
  }
  return param_1;
}



// FUNCTION 1409dde66 FUN_1409dde66 body=106 status=ok
// SIG undefined FUN_1409dde66(void)

void * FUN_1409dde66(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    }
    else {
      FUN_1409dded0(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1409dded0 FUN_1409dded0 body=101 status=ok
// SIG undefined FUN_1409dded0(void)

void FUN_1409dded0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 4, 4 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1486b8cdc(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 1409ddf36 FUN_1409ddf36 body=93 status=ok
// SIG undefined FUN_1409ddf36(void)

undefined8 * FUN_1409ddf36(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140639baa(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1409de12a(param_1,iVar1);
      FUN_1409de27b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1409ddf94 FUN_1409ddf94 body=404 status=ok
// SIG undefined FUN_1409ddf94(void)

/* WARNING: Removing unreachable block (ram,0x0001409de122) */

void FUN_1409ddf94(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409de12a FUN_1409de12a body=337 status=ok
// SIG undefined FUN_1409de12a(void)

void FUN_1409de12a(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x88;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409de19f;
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
LAB_1409de19f:
    iVar5 = (int)(uVar4 / 0x88);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x88,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1409de27b FUN_1409de27b body=793 status=ok
// SIG undefined FUN_1409de27b(void)

void FUN_1409de27b(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  
  if (param_3 != 0) {
    lVar13 = 0;
    lVar17 = param_1;
    do {
      *(undefined8 *)(param_1 + 0x10 + lVar13) = *(undefined8 *)(param_2 + 0x10 + lVar13);
      uVar4 = ((undefined8 *)(param_2 + lVar13))[1];
      *(undefined8 *)(param_1 + lVar13) = *(undefined8 *)(param_2 + lVar13);
      ((undefined8 *)(param_1 + lVar13))[1] = uVar4;
      *(undefined8 *)(param_1 + 0x18 + lVar13) = *(undefined8 *)(param_2 + 0x18 + lVar13);
      *(undefined4 *)(param_1 + 0x20 + lVar13) = *(undefined4 *)(param_2 + 0x20 + lVar13);
      *(undefined8 *)(param_1 + 0x28 + lVar13) = 0;
      puVar14 = (undefined4 *)(param_2 + 0x30 + lVar13);
      uVar18 = puVar14[1];
      uVar5 = puVar14[2];
      uVar6 = puVar14[3];
      puVar1 = (undefined4 *)(param_2 + 0x40 + lVar13);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar1 = (undefined4 *)(param_1 + 0x30 + lVar13);
      *puVar1 = *puVar14;
      puVar1[1] = uVar18;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      puVar14 = (undefined4 *)(param_1 + 0x40 + lVar13);
      *puVar14 = uVar7;
      puVar14[1] = uVar8;
      puVar14[2] = uVar9;
      puVar14[3] = uVar10;
      *(undefined4 *)(param_1 + 0x50 + lVar13) = 0;
      if (*(int *)(param_2 + 0x50 + lVar13) == 0) {
        puVar14 = (undefined4 *)(param_1 + lVar13 + 0x54);
        *puVar14 = 0;
        uVar18 = *(undefined4 *)(param_2 + 0x58 + lVar13);
        *(undefined4 *)(param_1 + lVar13 + 0x58) = uVar18;
      }
      else {
        piVar15 = (int *)(param_1 + lVar13 + 0x50);
        FUN_1402a453c(piVar15);
        iVar2 = *(int *)(param_2 + 0x50 + lVar13);
        iVar3 = *piVar15;
        lVar16 = (longlong)iVar3 * 0x88 + DAT_14c9a3d60;
        lVar12 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
        FUN_1402a4668(lVar16 + -0x88,lVar12 + -0x88);
        if (iVar2 != iVar3) {
          FUN_1402a4744(lVar16 + -0x18,lVar12 + -0x18);
        }
        lVar12 = (longlong)*(int *)(param_1 + 0x50 + lVar13);
        puVar14 = (undefined4 *)(lVar17 + 0x54);
        *(undefined4 *)(param_1 + 0x54 + lVar13) = 0;
        uVar18 = *(undefined4 *)(param_2 + 0x58 + lVar13);
        *(undefined4 *)(param_1 + 0x58 + lVar13) = uVar18;
        if (lVar12 != 0) {
          uVar18 = FUN_14020a770(DAT_14c9a3d60 + lVar12 * 0x88 + -0x88,uVar18,0);
        }
      }
      *puVar14 = uVar18;
      *(undefined4 *)(param_1 + 0x5c + lVar13) = *(undefined4 *)(param_2 + 0x5c + lVar13);
      *(undefined8 *)(param_1 + 0x60 + lVar13) = 0;
      iVar2 = *(int *)(param_2 + 0x68 + lVar13);
      uVar4 = *(undefined8 *)(param_2 + 0x60 + lVar13);
      *(int *)(param_1 + 0x68 + lVar13) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x6c + lVar13) = 0;
      }
      else {
        puVar11 = (undefined8 *)(param_1 + lVar13 + 0x60);
        FUN_1470d8626(puVar11,iVar2,0);
        FUN_1470d8699(*puVar11,uVar4);
      }
      *(undefined4 *)(param_1 + 0x70 + lVar13) = 0;
      if (*(int *)(param_2 + 0x70 + lVar13) == 0) {
        puVar14 = (undefined4 *)(param_1 + lVar13 + 0x74);
        *puVar14 = 0;
        uVar18 = *(undefined4 *)(param_2 + 0x78 + lVar13);
        *(undefined4 *)(param_1 + lVar13 + 0x78) = uVar18;
      }
      else {
        piVar15 = (int *)(param_1 + lVar13 + 0x70);
        FUN_1402a453c(piVar15);
        iVar2 = *(int *)(param_2 + 0x70 + lVar13);
        iVar3 = *piVar15;
        lVar16 = (longlong)iVar3 * 0x88 + DAT_14c9a3d60;
        lVar12 = (longlong)iVar2 * 0x88 + DAT_14c9a3d60;
        FUN_1402a4668(lVar16 + -0x88,lVar12 + -0x88);
        if (iVar2 != iVar3) {
          FUN_1402a4744(lVar16 + -0x18,lVar12 + -0x18);
        }
        lVar12 = (longlong)*(int *)(param_1 + 0x70 + lVar13);
        puVar14 = (undefined4 *)(lVar17 + 0x74);
        *(undefined4 *)(param_1 + 0x74 + lVar13) = 0;
        uVar18 = *(undefined4 *)(param_2 + 0x78 + lVar13);
        *(undefined4 *)(param_1 + 0x78 + lVar13) = uVar18;
        if (lVar12 != 0) {
          uVar18 = FUN_14020a770(DAT_14c9a3d60 + lVar12 * 0x88 + -0x88,uVar18);
        }
      }
      *puVar14 = uVar18;
      *(undefined1 *)(param_1 + 0x80 + lVar13) = *(undefined1 *)(param_2 + 0x80 + lVar13);
      *(undefined4 *)(param_1 + 0x7c + lVar13) = *(undefined4 *)(param_2 + 0x7c + lVar13);
      lVar17 = lVar17 + 0x88;
      lVar13 = lVar13 + 0x88;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409de594 FUN_1409de594 body=180 status=ok
// SIG undefined FUN_1409de594(void)

void FUN_1409de594(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_1409de64a(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409de64a FUN_1409de64a body=1541 status=ok
// SIG undefined FUN_1409de64a(void)

void FUN_1409de64a(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  longlong *plVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  undefined1 auStack_a8 [40];
  int *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar30 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar30 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar30) {
      FUN_1406cd6a8(param_1,iVar30);
    }
    iVar33 = (int)param_1[5];
    if (iVar33 == 0) {
      iVar19 = -1;
    }
    else {
      iVar19 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar19 = iVar33 + -1;
      }
      iVar19 = iVar19 >> 5;
    }
    plVar27 = param_1 + 2;
    iVar20 = iVar33 + 1;
    iVar24 = iVar33 + 0x1f;
    if (-1 < iVar33) {
      iVar24 = iVar33;
    }
    if (iVar24 >> 5 == iVar19) {
      *(int *)(param_1 + 5) = iVar20;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar33) {
        if (iVar33 + 0x20U < 0xa0) {
          iVar20 = 0x80;
          iVar19 = iVar33;
        }
        else {
          uVar29 = iVar33 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar29) {
              uVar17 = uVar29;
            }
          }
          else {
            uVar17 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
          }
          uVar22 = FUN_144a3809e(uVar17 << 2,0);
          iVar19 = (int)(uVar22 >> 2);
          iVar20 = -0x20;
          if ((int)uVar29 <= iVar19) {
            iVar20 = iVar19 << 5;
          }
          iVar19 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar20;
        FUN_1446efbd8(plVar27,iVar19);
        iVar20 = (int)param_1[5] + 1;
      }
      iVar19 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar19 = iVar20;
      }
      *(int *)(param_1 + 5) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar26 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar26 = plVar27;
        }
        bVar18 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar26 + (longlong)(iVar19 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar26 + (longlong)(iVar19 >> 5) * 4) << (bVar18 & 0x1f)) >>
             (bVar18 & 0x1f);
      }
    }
    lVar32 = (longlong)iVar30;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[4];
    }
    bVar18 = (byte)iVar33 & 0x1f;
    puVar2 = (uint *)((longlong)plVar27 + (longlong)(iVar24 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
  }
  else {
    iVar30 = (int)param_1[6];
    lVar32 = (longlong)iVar30;
    iVar33 = *(int *)(*param_1 + 4 + lVar32 * 0x40);
    *(int *)(param_1 + 6) = iVar33;
    iVar19 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar19;
    if (iVar19 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar33 * 0x40) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  uVar29 = 1;
  puVar21 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar21 = puVar2;
  }
  iVar33 = iVar30 + 0x1f;
  if (-1 < iVar30) {
    iVar33 = iVar30;
  }
  puVar21[iVar33 >> 5] = puVar21[iVar33 >> 5] | 1 << ((byte)iVar30 & 0x1f);
  lVar31 = *param_1;
  lVar32 = lVar32 * 0x40;
  puVar1 = (undefined4 *)(lVar31 + lVar32);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  *(undefined8 *)(lVar31 + lVar32) = *(undefined8 *)*param_3;
  puVar3 = (undefined8 *)(lVar31 + 8 + lVar32);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar31 + 0x18 + lVar32);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar4 = (undefined4 *)(lVar31 + 0x28 + lVar32);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0xffffffff;
  puVar4[3] = 0xffffffff;
  FUN_1409dec50();
  *(undefined4 *)(lVar31 + 0x38 + lVar32) = 0xffffffff;
  lVar32 = *(longlong *)(lVar31 + lVar32);
  uVar17 = (int)((ulonglong)lVar32 >> 0x20) * 0x17 + (int)lVar32;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar23) {
    plVar27 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[8];
    }
    iVar33 = *(int *)((longlong)plVar27 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar33 != -1) {
      do {
        puVar4 = (undefined4 *)(*param_1 + (longlong)iVar33 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar33 * 0x40) == lVar32) {
          FUN_1409dec50(puVar4 + 2);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          uVar9 = puVar1[4];
          uVar10 = puVar1[5];
          uVar11 = puVar1[6];
          uVar12 = puVar1[7];
          uVar13 = puVar1[8];
          uVar14 = puVar1[9];
          uVar15 = puVar1[10];
          uVar16 = puVar1[0xb];
          *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
          puVar4[8] = uVar13;
          puVar4[9] = uVar14;
          puVar4[10] = uVar15;
          puVar4[0xb] = uVar16;
          puVar4[4] = uVar9;
          puVar4[5] = uVar10;
          puVar4[6] = uVar11;
          puVar4[7] = uVar12;
          *puVar4 = uVar5;
          puVar4[1] = uVar6;
          puVar4[2] = uVar7;
          puVar4[3] = uVar8;
          FUN_1407bdd54(param_1,iVar30);
          iVar30 = iVar33;
          goto LAB_1409de7ef;
        }
        iVar33 = puVar4[0xe];
      } while (iVar33 != -1);
    }
  }
  if (3 < uVar23) {
    uVar22 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar32 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    uVar29 = 1 << ((byte)lVar32 & 0x1f);
  }
  if (((int)uVar23 < 1) || ((int)uVar29 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    puVar1[0xf] = uVar17;
    plVar27 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar27 = param_1 + 7;
    }
    puVar1[0xe] = *(undefined4 *)
                   ((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4
                   );
    plVar27 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar27 = param_1 + 7;
    }
    *(int *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar30;
    goto LAB_1409de7ef;
  }
  *(uint *)(param_1 + 9) = uVar29;
  plVar27 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar27,0,0,4);
    uVar29 = *(uint *)(param_1 + 9);
  }
  plVar26 = param_1 + 7;
  if (uVar29 == 1) {
    if (*plVar27 != 0) {
      FUN_1446efa72(plVar27,0,0,4);
    }
LAB_1409de92d:
    uVar17 = 0;
    do {
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar26;
      }
      *(undefined4 *)((longlong)plVar27 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar17) * 4) =
           0xffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar29 != uVar17);
  }
  else {
    if (uVar29 == 0) goto LAB_1409de7ef;
    FUN_1446efa72(plVar27,0,uVar29,4);
    if (0 < (int)uVar29) goto LAB_1409de92d;
  }
  iVar33 = (int)param_1[5];
  if (iVar33 == 0) {
    uVar22 = 0;
    uVar28 = 1;
    iVar19 = 0;
    iVar20 = 0;
  }
  else {
    puVar21 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar21 = puVar2;
    }
    uVar29 = *puVar21;
    if (uVar29 == 0) {
      iVar19 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar19 = iVar33 + -1;
      }
      uVar22 = 0;
      uVar28 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar28 = uVar22;
      }
      iVar20 = 0;
      do {
        if (uVar28 == uVar22) goto LAB_1409de7ef;
        iVar20 = iVar20 + 0x20;
        uVar29 = puVar21[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar22 = 0;
      iVar20 = 0;
    }
    uVar28 = (ulonglong)(-uVar29 & uVar29);
    uVar34 = uVar28 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar19 = (iVar20 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar33 <= iVar19) {
      iVar19 = iVar33;
    }
  }
  if (iVar19 < iVar33) {
    uVar29 = 0xffffffff;
    do {
      lVar32 = *param_1;
      lVar31 = (longlong)iVar19 * 0x40;
      uVar34 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar32 + lVar31) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar32 + lVar31)) & (longlong)(int)param_1[9] - 1U;
      iVar33 = (int)uVar34;
      *(int *)(lVar32 + 0x3c + lVar31) = iVar33;
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar26;
      }
      *(undefined4 *)(lVar32 + 0x38 + lVar31) =
           *(undefined4 *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & uVar34) * 4);
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = plVar26;
      }
      *(int *)((longlong)plVar27 + ((longlong)iVar33 & (longlong)(int)param_1[9] - 1U) * 4) = iVar19
      ;
      uVar29 = ~(uint)uVar28 & uVar29;
      puVar21 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar21 = puVar2;
      }
      iVar33 = (int)param_1[5];
      iVar19 = (int)uVar22;
      lVar32 = (longlong)iVar19;
      uVar17 = puVar21[lVar32] & uVar29;
      if (uVar17 == 0) {
        iVar24 = iVar33 + 0x1e;
        if (-1 < iVar33 + -1) {
          iVar24 = iVar33 + -1;
        }
        iVar24 = iVar24 >> 5;
        iVar25 = iVar24;
        if (iVar24 < iVar19) {
          iVar25 = iVar19;
        }
        if (iVar24 <= iVar19) break;
        lVar31 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar17 = puVar21[lVar32 + lVar31 + 1];
          if (uVar17 != 0) break;
          lVar31 = lVar31 + 1;
          if (iVar25 - lVar32 == lVar31) goto LAB_1409de7ef;
        }
        uVar22 = (ulonglong)(iVar19 + (int)lVar31 + 1);
        uVar29 = 0xffffffff;
      }
      uVar28 = (ulonglong)(-uVar17 & uVar17);
      uVar34 = uVar28 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar19 = (iVar20 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar33);
  }
LAB_1409de7ef:
  *local_80 = iVar30;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409dec50 FUN_1409dec50 body=164 status=ok
// SIG undefined FUN_1409dec50(void)

void FUN_1409dec50(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_1409decf4(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1409decf4 FUN_1409decf4 body=398 status=ok
// SIG undefined FUN_1409decf4(void)

void FUN_1409decf4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409dee82 FUN_1409dee82 body=58 status=ok
// SIG undefined FUN_1409dee82(void)

void FUN_1409dee82(longlong param_1)

{
  FUN_1409deebc(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1);
  return;
}



// FUNCTION 1409deebc FUN_1409deebc body=67 status=ok
// SIG undefined FUN_1409deebc(void)

void FUN_1409deebc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409def00 FUN_1409def00 body=243 status=ok
// SIG undefined FUN_1409def00(void)

void FUN_1409def00(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1409deff4(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1409df02c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 1409deff4 FUN_1409deff4 body=55 status=ok
// SIG undefined FUN_1409deff4(void)

void FUN_1409deff4(longlong *param_1)

{
  FUN_1409df1e6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409df02c FUN_1409df02c body=55 status=ok
// SIG undefined FUN_1409df02c(void)

void FUN_1409df02c(longlong *param_1)

{
  FUN_1409df064(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409df064 FUN_1409df064 body=384 status=ok
// SIG undefined FUN_1409df064(void)

void FUN_1409df064(longlong *param_1,int param_2)

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
      FUN_146efed88(*local_70 + (longlong)iStack_54 * 200 + 8);
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
    FUN_146efedec(param_1,param_2);
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



// FUNCTION 1409df1e6 FUN_1409df1e6 body=573 status=ok
// SIG undefined FUN_1409df1e6(void)

void FUN_1409df1e6(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar13 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_1409df21b;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar10 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar11 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar12 + 0x50 + lVar11) = 0;
      if (*(longlong *)(lVar12 + 0x48 + lVar11) != 0) {
        FUN_1400020a8();
      }
      FUN_140441eda(lVar12 + lVar11 + 8);
      uVar10 = uVar10 & ~(uint)uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar10;
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
        lVar11 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar12 + lVar11 + 1];
          if (uVar3 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar5 - lVar12 == lVar11) goto LAB_1409df21b;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1409df21b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar10 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar10 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar10) {
    uVar3 = uVar10;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1409df424 FUN_1409df424 body=257 status=ok
// SIG undefined FUN_1409df424(void)

void FUN_1409df424(longlong param_1,undefined1 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if ((0.0001 < *(float *)(lVar2 + 0x1f8)) && (*(char *)(lVar2 + 0x290) == '\0')) {
    FUN_1409df526(lVar2,&DAT_14cb8c968);
    FUN_1409df5ee(param_1,1);
    *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x1ee8) = param_2;
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xe0) + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001409df522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,*(longlong *)(param_1 + 0xe0),uVar1,8);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x100;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 1409df526 FUN_1409df526 body=91 status=ok
// SIG undefined FUN_1409df526(void)

void FUN_1409df526(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(param_1 + 0x1148)) {
    local_18 = param_2;
    FUN_1409df68e(param_1 + 0x1110,&local_18);
  }
  FUN_1409df582(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409df582 FUN_1409df582 body=107 status=ok
// SIG undefined FUN_1409df582(void)

void FUN_1409df582(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  char cVar10;
  longlong *plVar11;
  bool bVar12;
  double dVar13;
  
  iVar6 = (int)param_1[0x229];
  if ((longlong)iVar6 < 1) {
    plVar11 = param_1 + 0x221;
  }
  else {
    plVar11 = param_1 + 0x222;
    if ((longlong *)param_1[0x228] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0x228];
    }
    plVar11 = (longlong *)((longlong)plVar11 + (longlong)iVar6 * 0xc + -0xc);
  }
  cVar7 = (char)*plVar11;
  if (cVar7 == (char)param_1[0x220]) {
    return;
  }
  if (iVar6 != 0) {
    cVar10 = cVar7 + -6;
    bVar12 = cVar10 < '\0';
    if (bVar12) {
      cVar10 = '\0';
    }
    cVar8 = '\x06';
    if (bVar12) {
      cVar8 = cVar7;
    }
    FUN_1403967cc(param_1,cVar8,cVar10);
    return;
  }
  cVar7 = (**(code **)(param_1[0x2f] + 0x128))(param_1 + 0x2f);
  if ((cVar7 == '\0') || (cVar7 = (**(code **)(*param_1 + 0x4b8))(param_1), cVar7 == '\0')) {
    if (param_1[0x3e] == 0) {
      cVar7 = (char)param_1[0xb5];
    }
    else {
      cVar7 = (char)param_1[0xb5];
      if (*(char *)((longlong)param_1 + 0x291) == cVar7) {
        return;
      }
    }
    dVar1 = (double)param_1[0x46];
    dVar2 = (double)param_1[0x26];
    dVar3 = (double)param_1[0x47];
    dVar4 = (double)param_1[0x25];
    dVar13 = (double)param_1[0x27];
    dVar5 = (double)param_1[0x48];
    (**(code **)(*param_1 + 0x5d0))(param_1,cVar7,0);
    if ((*(char *)((longlong)param_1 + 0x291) != '\x01') ||
       ((param_1[0x3e] != 0 && (*(longlong *)(param_1[0x3e] + 0x450) != 0)))) {
      return;
    }
    dVar13 = (double)(float)((-dVar1 * dVar4 - dVar2 * dVar3) - dVar13 * dVar5);
    dVar1 = (double)param_1[0x46];
    dVar2 = (double)param_1[0x47];
    dVar3 = (double)param_1[0x48];
    dVar4 = (double)param_1[0x27] * dVar3 +
            (double)param_1[0x25] * dVar1 + dVar2 * (double)param_1[0x26];
    param_1[0x25] = (longlong)(((double)param_1[0x25] - dVar4 * dVar1) - dVar1 * dVar13);
    param_1[0x26] = (longlong)(((double)param_1[0x26] - dVar2 * dVar4) - dVar2 * dVar13);
    param_1[0x27] = (longlong)(((double)param_1[0x27] - dVar3 * dVar4) - dVar3 * dVar13);
    uVar9 = 3;
  }
  else {
    uVar9 = *(undefined1 *)((longlong)param_1 + 0x5a9);
  }
                    /* WARNING: Could not recover jumptable at 0x00014035c18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d0))(param_1,uVar9,0);
  return;
}



// FUNCTION 1409df5ee FUN_1409df5ee body=159 status=ok
// SIG undefined FUN_1409df5ee(void)

void FUN_1409df5ee(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong **)(param_1[0x1c] + 0x1d8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1[0x1c] + 0x1d8) + 0x700))();
    if (cVar2 != '\0') {
      cVar2 = FUN_144729dda(param_1 + 0x17);
      if (cVar2 != '\0') {
        lVar3 = (**(code **)(*param_1 + 0x150))(param_1);
        if (lVar3 != 0) {
          lVar1 = param_1[0x19];
          uVar4 = FUN_14479d2ce(param_1 + 0x18);
          FUN_14107e4c6(lVar3,uVar4,lVar1,param_2 ^ 1);
        }
      }
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
    }
  }
  return;
}



// FUNCTION 1409df68e FUN_1409df68e body=288 status=ok
// SIG undefined FUN_1409df68e(void)

int FUN_1409df68e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  int local_4c;
  
  iVar5 = *(int *)(param_1 + 0x38);
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar12 = param_1;
    }
    iVar4 = 0;
    bVar11 = *(longlong *)(lVar12 + 4) == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      lVar9 = (longlong)iVar7;
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      plVar8 = (longlong *)(lVar9 * 0xc + lVar12 + 0x10);
      lVar10 = lVar9;
      local_4c = iVar7;
      do {
        lVar10 = lVar10 + 1;
        iVar3 = iVar2;
        if (lVar6 <= lVar10) break;
        lVar1 = *plVar8;
        local_4c = local_4c + 1;
        plVar8 = (longlong *)((longlong)plVar8 + 0xc);
        iVar3 = local_4c;
      } while (bVar11 == (lVar1 == *(longlong *)*param_2));
      local_4c = iVar3;
      if (bVar11 == false) {
        if (iVar4 != iVar7) {
          memmove((void *)(lVar12 + (longlong)iVar4 * 0xc),(void *)(lVar12 + lVar9 * 0xc),
                  (longlong)(local_4c - iVar7) * 0xc);
        }
        iVar4 = iVar4 + (local_4c - iVar7);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar7 = local_4c;
    } while (lVar10 < lVar6);
    *(int *)(param_1 + 0x38) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 1409df7ae thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1409df80a FUN_1409df80a body=84 status=ok
// SIG undefined FUN_1409df80a(void)

void FUN_1409df80a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_1409dfab8();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    FUN_1409dff21(param_1 + 10,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001409df852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 1409df85e FUN_1409df85e body=78 status=ok
// SIG undefined FUN_1409df85e(void)

void FUN_1409df85e(longlong param_1,uint param_2)

{
  FUN_1409df9ef(param_1 + 0x54,param_1 + 0x50,*(undefined4 *)(param_1 + 0x18),param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}



// FUNCTION 1409df8ac FUN_1409df8ac body=322 status=ok
// SIG undefined FUN_1409df8ac(void)

bool FUN_1409df8ac(longlong *param_1,uint param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_1 + 3);
  if ((param_2 & 0xff000000) < (uVar1 & 0xff000000)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    (**(code **)(*DAT_14c8407a8 + 0xd8))(DAT_14c8407a8,&local_48,param_1);
    (**(code **)(*param_1 + 0xc0))(param_1,&local_68);
    local_70 = local_68;
    if (local_60 == 0) {
      local_70 = &DAT_149dfb77a;
    }
    pwVar3 = L"<UNKNOWN>";
    local_78 = L"<UNKNOWN>";
    if (uVar1 < 0xf000000) {
      local_78 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[uVar1 >> 0x18];
    }
    if (param_2 < 0xf000000) {
      pwVar3 = (wchar_t *)(&PTR_u_Constructor_149e142c8)[param_2 >> 0x18];
    }
    pwVar2 = local_48;
    if (local_40 < 2) {
      pwVar2 = L"unknown?";
    }
    FUN_140002266(local_58,
                  L"Setting the console variable \'%s\' with \'SetBy%s\' was ignored as it is lower priority than the previous \'SetBy%s\'. Value remains \'%s\'"
                  ,pwVar2,pwVar3);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (uVar1 & 0xff000000) <= (param_2 & 0xff000000);
}



// FUNCTION 1409df9ef FUN_1409df9ef body=200 status=ok
// SIG undefined FUN_1409df9ef(void)

void FUN_1409df9ef(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  if ((param_4 >> 0x11 & 1) != 0) {
    *param_1 = *param_2;
    return;
  }
  if (DAT_14c8407a8 == 0) {
    FUN_1414b00ea();
  }
  lVar3 = DAT_14c8407a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) goto LAB_1409dfa46;
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) goto LAB_1409dfa46;
  }
  if (((param_3 & 0x20) == 0) || (plVar2 = *(longlong **)(lVar3 + 0xf0), plVar2 == (longlong *)0x0))
  {
    *param_1 = *param_2;
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*param_2);
  }
LAB_1409dfa46:
  if ((param_4 >> 0x10 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x170) = 1;
  }
  return;
}



// FUNCTION 1409dfab8 FUN_1409dfab8 body=504 status=ok
// SIG undefined FUN_1409dfab8(void)

void FUN_1409dfab8(ulonglong *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong *local_50;
  undefined8 **local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_1[9];
  local_58 = param_4;
  if (uVar3 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    param_1[9] = (ulonglong)puVar2;
    (**(code **)(*param_1 + 0xc0))(param_1,&local_50);
    puVar4 = local_50;
    if ((int)local_48 == 0) {
      puVar4 = (ulonglong *)&DAT_149dfb77a;
    }
    FUN_1409dfcb2(puVar2,puVar4,0,0);
    if (local_50 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = param_1[9];
  }
  FUN_1409dfcb2(uVar3,param_2,param_3,param_4);
  if (param_4 != 0) {
    iVar1 = FUN_144a788f7(param_4 & 0xffffffff);
    if (DAT_14c83f430 != DAT_14c83f45c) {
      puVar5 = &DAT_14c83f460;
      if (DAT_14c83f468 != (undefined *)0x0) {
        puVar5 = DAT_14c83f468;
      }
      iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14c83f470 - 1U & iVar1 + (int)(param_4 >> 0x20)) * 4
                      );
      while (iVar1 != -1) {
        puVar4 = (ulonglong *)(DAT_14c83f428 + (longlong)iVar1 * 0x18);
        if (*puVar4 == param_4) {
          if ((puVar4 != (ulonglong *)0x0) && (uVar3 = puVar4[1], uVar3 != 0)) goto LAB_1409dfc56;
          break;
        }
        iVar1 = (int)puVar4[2];
      }
    }
    local_60 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    local_60[4] = 0;
    *(undefined4 *)(local_60 + 5) = 0;
    *local_60 = 0;
    local_60[1] = 0;
    *(undefined8 *)((longlong)local_60 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)local_60 + 0x34) = 0;
    local_60[8] = 0;
    *(undefined4 *)(local_60 + 9) = 0;
    local_48 = &local_60;
    local_50 = &local_58;
    FUN_1467be6a8(&local_3c);
    uVar3 = *(ulonglong *)(DAT_14c83f428 + 8 + (longlong)local_3c * 0x18);
LAB_1409dfc56:
    local_50 = param_1;
    FUN_1467bebf6(uVar3,&local_60);
    *(undefined1 *)(param_1[9] + 0x10) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409dfcb2 FUN_1409dfcb2 body=622 status=ok
// SIG undefined FUN_1409dfcb2(void)

void FUN_1409dfcb2(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_68 [44];
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = FUN_1409e01db(param_2);
  FUN_1409dff21(&local_3c,uVar9);
  uVar3 = *(uint *)(param_1 + 1);
  lVar11 = *param_1;
  uVar14 = 0;
  uVar13 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar13 >> 1) + uVar14;
      if (*(int *)(lVar11 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
        uVar14 = uVar1 + (uVar13 & 1);
      }
      bVar6 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar6);
  }
  if ((((int)uVar3 <= (int)uVar14) || ((int)param_3 < *(int *)(lVar11 + (ulonglong)uVar14 * 0x18)))
     || (puVar15 = (uint *)(lVar11 + (ulonglong)uVar14 * 0x18 + 8), puVar15 == (uint *)0x0)) {
    uVar14 = 0;
    uVar13 = uVar3;
    if ((int)uVar3 < 1) {
LAB_1409dfe7d:
      *(uint *)(param_1 + 1) = uVar3 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
        FUN_1409e0614(param_1,uVar3);
        lVar11 = *param_1;
      }
      lVar12 = (ulonglong)uVar14 * 0x18;
      memmove((void *)(lVar11 + lVar12 + 0x18),(void *)(lVar11 + lVar12),
              (ulonglong)(uVar3 - uVar14) * 0x18);
      puVar15 = (uint *)(lVar12 + *param_1);
    }
    else {
      do {
        uVar1 = (uVar13 >> 1) + uVar14;
        if (*(int *)(lVar11 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
          uVar14 = uVar1 + (uVar13 & 1);
        }
        bVar6 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar6);
      if (((int)uVar3 <= (int)uVar14) ||
         ((int)param_3 < *(int *)(lVar11 + (ulonglong)uVar14 * 0x18))) goto LAB_1409dfe7d;
      puVar15 = (uint *)(lVar11 + (ulonglong)uVar14 * 0x18);
      FUN_1467c12e2(puVar15,1);
    }
    *puVar15 = param_3;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15 = puVar15 + 2;
  }
  if ((((param_3 & 0xfd000000) != 0x5000000) && ((param_3 & 0xfe000000) != 0xa000000)) &&
     (0 < (int)puVar15[2])) {
    plVar5 = *(longlong **)puVar15;
    if (*plVar5 == param_4) {
      iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar10 = 0;
      }
      else if (iVar4 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar10 = 1;
      }
      fVar2 = *(float *)((longlong)plVar5 + uVar10 * 4 + 8);
      if ((fVar2 == local_3c) && (!NAN(fVar2) && !NAN(local_3c))) goto LAB_1409dfe15;
    }
    puVar15[2] = 0;
    if (puVar15[3] != 1) {
      FUN_1409e0786(puVar15);
    }
  }
  uVar3 = puVar15[2];
  puVar15[2] = uVar3 + 1;
  if (puVar15[3] < uVar3 + 1) {
    FUN_1409e03d2(puVar15,uVar3);
  }
  lVar11 = *(longlong *)puVar15;
  lVar12 = (longlong)(int)uVar3 * 0x10;
  *(longlong *)(lVar11 + lVar12) = param_4;
  *(float *)(lVar11 + 8 + lVar12) = local_3c;
  *(float *)(lVar11 + 0xc + lVar12) = local_3c;
LAB_1409dfe15:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409dff21 FUN_1409dff21 body=115 status=ok
// SIG undefined FUN_1409dff21(void)

void FUN_1409dff21(float *param_1,wchar_t *param_2)

{
  double dVar1;
  undefined1 auStack_58 [40];
  char *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1409dff96(local_30);
  dVar1 = _wtof(param_2);
  *param_1 = (float)dVar1;
  setlocale(4,local_30[0]);
  if (local_30[0] != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409dff96 FUN_1409dff96 body=270 status=ok
// SIG undefined FUN_1409dff96(void)

void ** FUN_1409dff96(void **param_1)

{
  char *_Str;
  size_t sVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  uint local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  _Str = setlocale(4,(char *)0x0);
  if (_Str != (char *)0x0) {
    sVar1 = strlen(_Str);
    uVar2 = (int)sVar1 + 1;
    local_38 = (void *)0x0;
    if ((int)sVar1 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar2);
    }
    local_30 = uVar2;
    if (uVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1409e00a6(&local_38,uVar2,0);
      memcpy(local_38,_Str,(ulonglong)uVar2);
    }
    if (&local_38 == param_1) {
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = (void *)0x0;
      *(uint *)(param_1 + 1) = local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
    }
  }
  setlocale(4,(char *)L"Cunknown?");
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e00a6 FUN_1409e00a6 body=309 status=ok
// SIG undefined FUN_1409e00a6(void)

void FUN_1409e00a6(longlong param_1,uint param_2,uint param_3)

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
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1409e0110;
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
LAB_1409e0110:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar6) {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
    param_3 = uVar6;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1409e01db FUN_1409e01db body=503 status=ok
// SIG undefined FUN_1409e01db(void)

undefined2 * FUN_1409e01db(undefined2 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  lVar1 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)param_1 + lVar1);
    uVar2 = (ulonglong)uVar3;
    uVar4 = *(ushort *)((longlong)&DAT_149e0617a + lVar1);
    if (uVar3 != uVar4) break;
    if (uVar3 == 0) {
      return &DAT_149e0209e;
    }
LAB_1409e020d:
    lVar1 = lVar1 + 2;
  }
  if ((uVar4 | uVar3) < 0x80) {
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    uVar5 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1409e020d;
  }
  if (uVar3 == uVar4) {
    return &DAT_149e0209e;
  }
  lVar1 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)param_1 + lVar1);
    uVar2 = (ulonglong)uVar3;
    uVar4 = *(ushort *)((longlong)&DAT_149e06384 + lVar1);
    if (uVar3 != uVar4) break;
    if (uVar3 == 0) {
      return &DAT_149e0209e;
    }
LAB_1409e025f:
    lVar1 = lVar1 + 2;
  }
  if ((uVar4 | uVar3) < 0x80) {
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    uVar5 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1409e025f;
  }
  if (uVar3 == uVar4) {
    return &DAT_149e0209e;
  }
  lVar1 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)param_1 + lVar1);
    uVar2 = (ulonglong)uVar3;
    uVar4 = *(ushort *)((longlong)&DAT_149e060ac + lVar1);
    if (uVar3 != uVar4) break;
    if (uVar3 == 0) {
      return &DAT_149e0209e;
    }
LAB_1409e02b1:
    lVar1 = lVar1 + 2;
  }
  if ((uVar4 | uVar3) < 0x80) {
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    uVar5 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1409e02b1;
  }
  if (uVar3 == uVar4) {
    return &DAT_149e0209e;
  }
  lVar1 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)param_1 + lVar1);
    uVar2 = (ulonglong)uVar3;
    uVar4 = *(ushort *)((longlong)L"False" + lVar1);
    if (uVar3 != uVar4) break;
    if (uVar3 == 0) goto LAB_1409e03d0;
LAB_1409e0309:
    lVar1 = lVar1 + 2;
  }
  if ((uVar4 | uVar3) < 0x80) {
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    uVar5 = (ulonglong)uVar4;
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1409e0309;
  }
  if (uVar3 != uVar4) {
    lVar1 = 0;
    goto LAB_1409e0341;
  }
LAB_1409e03d0:
  return &DAT_149e25dfc;
LAB_1409e0341:
  uVar3 = *(ushort *)((longlong)param_1 + lVar1);
  uVar2 = (ulonglong)uVar3;
  uVar4 = *(ushort *)((longlong)&DAT_149e06338 + lVar1);
  if (uVar3 != uVar4) {
    if ((uVar4 | uVar3) < 0x80) {
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      uVar5 = (ulonglong)uVar4;
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1409e0356;
    }
    if (uVar3 != uVar4) {
      lVar1 = 0;
      goto LAB_1409e038a;
    }
    goto LAB_1409e03d0;
  }
  if (uVar3 == 0) goto LAB_1409e03d0;
LAB_1409e0356:
  lVar1 = lVar1 + 2;
  goto LAB_1409e0341;
LAB_1409e038a:
  uVar3 = *(ushort *)((longlong)param_1 + lVar1);
  uVar2 = (ulonglong)uVar3;
  uVar4 = *(ushort *)((longlong)&DAT_149e1d734 + lVar1);
  if (uVar3 != uVar4) {
    if ((uVar4 | uVar3) < 0x80) {
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
      uVar5 = (ulonglong)uVar4;
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1409e039f;
    }
    if (uVar3 != uVar4) {
      return param_1;
    }
    goto LAB_1409e03d0;
  }
  if (uVar3 == 0) goto LAB_1409e03d0;
LAB_1409e039f:
  lVar1 = lVar1 + 2;
  goto LAB_1409e038a;
}



// FUNCTION 1409e03d2 FUN_1409e03d2 body=269 status=ok
// SIG undefined FUN_1409e03d2(void)

void FUN_1409e03d2(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1409e04e0 FUN_1409e04e0 body=53 status=ok
// SIG undefined FUN_1409e04e0(void)

undefined8 FUN_1409e04e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x58);
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x50);
  }
  FUN_1409e058e(param_2,*puVar2);
  return param_2;
}



// FUNCTION 1409e0516 FUN_1409e0516 body=120 status=ok
// SIG undefined FUN_1409e0516(void)

undefined8 FUN_1409e0516(longlong param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar4 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar4 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar4 = 1;
  }
  FUN_1409e058e(param_2,*(undefined4 *)(param_1 + 0x50 + uVar4 * 4));
  return param_2;
}



// FUNCTION 1409e058e FUN_1409e058e body=133 status=ok
// SIG undefined FUN_1409e058e(void)

undefined8 FUN_1409e058e(undefined8 param_1,float param_2)

{
  undefined1 auStack_68 [40];
  char *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409dff96(local_40);
  FUN_140002266(param_1,&DAT_149e14292,(double)param_2);
  setlocale(4,local_40[0]);
  if (local_40[0] != (char *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e0614 FUN_1409e0614 body=370 status=ok
// SIG undefined FUN_1409e0614(void)

void FUN_1409e0614(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409e069d;
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
LAB_1409e069d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1409e0786 FUN_1409e0786 body=144 status=ok
// SIG undefined FUN_1409e0786(void)

void FUN_1409e0786(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,4);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1409e0816 FUN_1409e0816 body=595 status=ok
// SIG undefined FUN_1409e0816(void)

void FUN_1409e0816(longlong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = param_1[6];
  if (((*(char *)((longlong)param_1 + 0xe2) == '\x01') &&
      (bVar4 = (char)param_1[0x18] - 1, bVar4 < 4)) &&
     (*(longlong *)(&PTR_DAT_14b9df5a8)[bVar4] != 0)) {
    local_60 = 0;
    local_68 = 0;
    cVar3 = FUN_140dd024a(lVar7,*(longlong *)(&PTR_DAT_14b9df5a8)[bVar4],0x3f800000,0);
    if (cVar3 != '\0') {
      *(char *)(param_1 + 0x19) = cVar3;
    }
    *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  }
  if (((byte)((char)param_1[0x18] - 1U) < 2) &&
     (fVar10 = (float)FUN_140086a76(param_1), 1e-08 < ABS(fVar10 - *(float *)(param_1 + 0x1d)))) {
    cVar3 = (char)param_1[0x18];
    puVar6 = &DAT_14cbe7720;
    if (cVar3 == '\x02') {
      puVar6 = &DAT_14cbe7708;
    }
    uVar2 = *puVar6;
    lVar5 = param_1[0xe];
    if (*(longlong *)(lVar5 + 0x224) != 0) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 1 << (*(byte *)((longlong)param_1 + 0xe6) & 0x1f);
      local_58 = uVar2;
      (**(code **)(*(longlong *)(lVar7 + 0x8c0) + 0x20))
                (lVar7 + 0x8c0,*(longlong *)(lVar5 + 0x224),fVar10);
      cVar3 = (char)param_1[0x18];
      lVar5 = param_1[0xe];
    }
    lVar7 = (ulonglong)(cVar3 != '\x02') * 0x10;
    lVar9 = (longlong)*(int *)(lVar5 + 0x248 + lVar7);
    if (lVar9 != 0) {
      pfVar8 = *(float **)(lVar5 + 0x240 + lVar7);
      lVar9 = lVar9 << 4;
      do {
        if (*(byte *)(pfVar8 + 1) < 4) {
          fVar1 = *(float *)(param_1 + 0x1d);
          switch(*(byte *)(pfVar8 + 1)) {
          case 0:
            if ((fVar10 < *pfVar8) && (*pfVar8 <= fVar1)) {
LAB_1409e0a5a:
              FUN_148f1092a(param_1,pfVar8,uVar2);
            }
            break;
          case 1:
            if ((fVar10 <= *pfVar8) && (*pfVar8 < fVar1)) goto LAB_1409e0a5a;
            break;
          case 2:
            if ((*pfVar8 < fVar10) && (fVar1 <= *pfVar8)) goto LAB_1409e0a5a;
            break;
          case 3:
            if ((*pfVar8 <= fVar10) && (fVar1 < *pfVar8)) goto LAB_1409e0a5a;
          }
        }
        pfVar8 = pfVar8 + 4;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
    *(float *)(param_1 + 0x1d) = fVar10;
  }
  cVar3 = (**(code **)(*param_1 + 0x340))(param_1);
  if ((cVar3 == '\0') && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    if (param_1[6] != 0) {
      FUN_140b8233c(param_1[6] + 0xd88,param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e0a78 FUN_1409e0a78 body=33 status=ok
// SIG undefined FUN_1409e0a78(void)

void FUN_1409e0a78(longlong param_1)

{
  FUN_1409e0a9a(param_1 + 0x120);
  FUN_1409e0e0c(param_1);
  return;
}



// FUNCTION 1409e0a9a FUN_1409e0a9a body=458 status=ok
// SIG undefined FUN_1409e0a9a(void)

void FUN_1409e0a9a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xe8) == 0) goto LAB_1409e0abd;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_1409e0c13:
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((((int)plVar7[2] != *(int *)(param_1 + 0x1c) ||
           ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) || (*plVar7 == 0)))) goto LAB_1409e0c13;
      uVar6 = FUN_1447210f0();
    }
  }
  FUN_1409e0c66(&local_30,uVar6);
  if (local_28 != (longlong *)0x0) {
    iVar5 = (int)local_28[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_1409e0d9e(local_30,param_1 + 0xe8);
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
  FUN_140457ffc(*(longlong *)(param_1 + 0xe8) + 0x130,param_1);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  plVar7 = *(longlong **)(param_1 + 0xf0);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
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
LAB_1409e0abd:
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    FUN_14063b348(param_1 + 0x28);
    FUN_14063b48e(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e0c66 FUN_1409e0c66 body=310 status=ok
// SIG undefined FUN_1409e0c66(void)

longlong * FUN_1409e0c66(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb23f20;
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



// FUNCTION 1409e0d9e FUN_1409e0d9e body=109 status=ok
// SIG undefined FUN_1409e0d9e(void)

void FUN_1409e0d9e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  iVar1 = FUN_141816488(param_1 + 0xb0);
  if ((0 < iVar1) && (*param_2 != 0)) {
    FUN_1418163e6(param_1 + 0x48,param_2);
    FUN_1406e3b0c(*param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e0e0c FUN_1409e0e0c body=304 status=ok
// SIG undefined FUN_1409e0e0c(void)

void FUN_1409e0e0c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    if (((*(int *)(param_1 + 0x100) != 0) && (uVar3 = *(uint *)(param_1 + 0xfc), -1 < (int)uVar3))
       && ((int)uVar3 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x100))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
        FUN_14480f766(*plVar4 + 0x14d0);
      }
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar4 = *(longlong **)(param_1 + 0xe0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
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
  plVar4 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  plVar4 = *(longlong **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1409e0f3c(param_1);
  return;
}



// FUNCTION 1409e0f3c FUN_1409e0f3c body=866 status=ok
// SIG undefined FUN_1409e0f3c(void)

void FUN_1409e0f3c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  char local_68 [8];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xd0) == 0) goto LAB_1409e0f61;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar12 = *(longlong *)(param_1 + 0x40);
  if (lVar12 == 0) {
    lVar10 = 0;
    local_60 = 0;
LAB_1409e11f2:
    local_58 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    if (*(int *)(lVar12 + 0x4c) == 0) {
LAB_1409e110c:
      lVar10 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar12 + 0x48);
      lVar10 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar12 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_1409e110c;
        lVar10 = *plVar11;
      }
    }
    plVar11 = *(longlong **)(lVar12 + 0x118);
    local_60 = param_1;
    if (plVar11 == (longlong *)0x0) goto LAB_1409e11f2;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_58 = plVar11;
  }
  plVar11 = local_58;
  local_40 = 0;
  local_68[0] = '\x03';
  local_50._0_4_ = 0;
  if (lVar10 == 0) {
    iVar7 = 0;
    uVar3 = (uint)local_50;
  }
  else {
    uVar3 = *(uint *)(lVar10 + 0xc);
    local_50 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar7 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_50;
      if (bVar13) {
        iVar7 = iVar9;
      }
    }
  }
  local_50._0_4_ = uVar3;
  local_50 = CONCAT44(iVar7,(uint)local_50);
  local_48 = 2;
  if (local_40 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_40 + -1,1);
    local_40 = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (*(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar4 + 0x60) * 0x120) != (code *)0x0) {
    (**(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar4 + 0x60) * 0x120))
              (lVar4 + 0x40,local_68,(undefined8 *)(param_1 + 0xd0));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_40 != 0) {
    lVar10 = (longlong)local_40 + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar4 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar7 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar4 + lVar12) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar12) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar9 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    bVar5 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_40 = 0;
  }
  if ((local_68[0] == '\x03') && (local_58 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_58 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
LAB_1409e0f61:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e12a0 FUN_1409e12a0 body=339 status=ok
// SIG undefined FUN_1409e12a0(void)

undefined8 * FUN_1409e12a0(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  puVar1[1] = &DAT_14c952060;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71530;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1409e13f4(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e13f4 FUN_1409e13f4 body=128 status=ok
// SIG undefined FUN_1409e13f4(void)

undefined8 *
FUN_1409e13f4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1409e1476(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e71530;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e1476 FUN_1409e1476 body=128 status=ok
// SIG undefined FUN_1409e1476(void)

undefined8 *
FUN_1409e1476(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1409e14f8(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9cc90;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e14f8 FUN_1409e14f8 body=135 status=ok
// SIG undefined FUN_1409e14f8(void)

undefined8 *
FUN_1409e14f8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9ce70;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e1588 FUN_1409e1588 body=117 status=ok
// SIG undefined FUN_1409e1588(void)

undefined8 FUN_1409e1588(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  if ((byte *)*param_2 == (byte *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(byte *)*param_2 & 3) != 0;
  }
  *(bool *)(param_1 + 3) = bVar2;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_140115c12(param_1 + 0x11,0);
  }
  param_1[0x10] = (longlong)&DAT_14cb70058;
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  FUN_1402057ac(param_2,param_1,uVar1,0);
  return 1;
}



// FUNCTION 1409e15fe FUN_1409e15fe body=88 status=ok
// SIG undefined FUN_1409e15fe(void)

undefined8 * FUN_1409e15fe(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b713650;
  param_1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(param_1 + 7);
  *param_1 = &PTR_FUN_14b80acd0;
  param_1[6] = &PTR_LAB_14b80af90;
  param_1[7] = &PTR_LAB_14b80b020;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1409e1656 FUN_1409e1656 body=134 status=ok
// SIG undefined FUN_1409e1656(void)

undefined8 * FUN_1409e1656(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_14aad9fb0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bab8) {
    FUN_144b3d300(&DAT_14cb0bab8);
    if (DAT_14cb0bab8 == -1) {
      FUN_146408b70(&DAT_14cb0ba00);
      atexit((_func_5014 *)&LAB_14373e0ae);
      _Init_thread_footer(&DAT_14cb0bab8);
    }
  }
  FUN_14032851c(&DAT_14cb0ba00,param_1);
  return param_1;
}



// FUNCTION 1409e16e4 FUN_1409e16e4 body=478 status=ok
// SIG undefined FUN_1409e16e4(void)

void FUN_1409e16e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x642700000;
  param_1[0xc] = 0xa00000000;
  *(undefined4 *)(param_1 + 0xd) = 0x1e;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x322bcc77322bcc77;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3b03126f322bcc77;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x12] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x16] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_1[0x14] = DAT_14c846510;
  param_1[0x15] = uVar1;
  *(undefined4 *)(param_1 + 0x17) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff7fffffff;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x447a0000;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 1;
  param_1[0x1c] = 0x47c350003f800000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0x3f0000003f800000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f333333;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0x4059000000000000;
  param_1[0x35] = 0x4059000000000000;
  param_1[0x36] = 0x4059000000000000;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x412000003f19999a;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x3ecccccd3f000000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0x3e4ccccd3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  return;
}



// FUNCTION 1409e18c2 FUN_1409e18c2 body=1156 status=ok
// SIG undefined FUN_1409e18c2(void)

undefined8 * FUN_1409e18c2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14a34ab20;
  if ((((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) == 0) &&
      (DAT_14ca76a80 != 0)) || (puVar5 = (undefined8 *)param_1[5], puVar5 == (undefined8 *)0x0))
  goto LAB_1409e1cbf;
  LOCK();
  piVar1 = (int *)(puVar5 + 1);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 2) {
    if (iVar3 == 1) {
      (**(code **)*puVar5)(puVar5,1);
    }
    goto LAB_1409e1cbf;
  }
  bVar9 = DAT_14ca76a80;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    bVar9 = DAT_14ca76a68;
  }
  if (((bVar9 & 1) != 0) ||
     ((~DAT_14ca76a80 & 1) == 0 && (~DAT_14ca76a68 & DAT_14ca84f5a & DAT_14c760d84 != 0) == 0))
  goto LAB_1409e1cbf;
  lVar6 = **(longlong **)(DAT_14ca77418 + 0x1b0);
  lVar7 = param_1[2];
  lVar8 = param_1[4];
  puVar5 = (undefined8 *)param_1[5];
  if ((DAT_14ca77568 == '\x01') && (DAT_14ca81488 != 0)) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x370));
    if (*(int *)(puVar5 + 1) != 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x370));
      goto LAB_1409e1b5a;
    }
    lStack_48 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    local_98 = *(undefined8 *)(lVar8 + 8);
    local_88 = (longlong)*(int *)(lVar7 + 0xb0);
    local_90 = *(longlong *)(lVar7 + 0xa8);
    if (local_88 == 0) {
      lStack_58 = 0;
      local_60 = 0;
    }
    else {
      local_60 = *(longlong *)(local_90 + 4);
      lStack_58 = *(longlong *)(local_90 + 0xc);
    }
    if (0 < *(int *)(lVar7 + 0xd0)) {
      lStack_48 = lVar7 + 200;
    }
    local_80 = 1;
    if (DAT_14ca81480 == 0) {
      local_80 = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    }
    uVar12 = local_80 * -0x651e95c4d06fbf81;
    uVar13 = (lStack_58 + 0x9ae16a3b2f90404fU << 0x2e | lStack_58 + 0x9ae16a3b2f90404fU >> 0x12) +
             local_60 * -0x4b6d499041670d8d + uVar12;
    uVar11 = local_60 * -0x4b6d499041670d8d + lStack_58;
    uVar11 = ((uVar12 << 0x22 | uVar12 >> 0x1e) +
              (uVar11 * 0x200000 | uVar11 >> 0x2b) + lStack_58 * -0x651e95c4d06fbfb1 ^ uVar13) *
             -0x651e95c4d06fbf81;
    uVar11 = (uVar11 >> 0x2f ^ uVar13 ^ uVar11) * -0x651e95c4d06fbf81;
    local_50 = (uVar11 >> 0x2f ^ uVar11) * -0x651e95c4d06fbf81;
    local_a0 = lVar8;
    FUN_1409e1d48(lVar6 + 0x318);
    if ((DAT_14ca77568 == '\x01') && (DAT_14ca81488 != 0)) {
      cVar10 = FUN_140840c92(DAT_14ca81488,puVar5);
      if (cVar10 == '\0') goto LAB_1409e1b0f;
    }
    else {
LAB_1409e1b0f:
      piVar1 = (int *)(puVar5 + 1);
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (puVar5 != (undefined8 *)0x0 && *piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  else {
LAB_1409e1b5a:
    AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x370));
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (puVar5 == (undefined8 *)0x0 || iVar3 != 1) {
      if (iVar3 != 1) {
        LOCK();
        *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        UNLOCK();
        goto LAB_1409e1cb6;
      }
    }
    else {
      (**(code **)*puVar5)(puVar5,1);
    }
    lStack_48 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    local_98 = *(undefined8 *)(lVar8 + 8);
    local_88 = (longlong)*(int *)(lVar7 + 0xb0);
    local_90 = *(longlong *)(lVar7 + 0xa8);
    if (local_88 == 0) {
      lStack_58 = 0;
      local_60 = 0;
    }
    else {
      local_60 = *(longlong *)(local_90 + 4);
      lStack_58 = *(longlong *)(local_90 + 0xc);
    }
    if (0 < *(int *)(lVar7 + 0xd0)) {
      lStack_48 = lVar7 + 200;
    }
    local_80 = 1;
    if (DAT_14ca81480 == 0) {
      local_80 = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    }
    uVar12 = local_80 * -0x651e95c4d06fbf81;
    uVar13 = (lStack_58 + 0x9ae16a3b2f90404fU << 0x2e | lStack_58 + 0x9ae16a3b2f90404fU >> 0x12) +
             local_60 * -0x4b6d499041670d8d + uVar12;
    uVar11 = local_60 * -0x4b6d499041670d8d + lStack_58;
    uVar11 = ((uVar12 << 0x22 | uVar12 >> 0x1e) +
              (uVar11 * 0x200000 | uVar11 >> 0x2b) + lStack_58 * -0x651e95c4d06fbfb1 ^ uVar13) *
             -0x651e95c4d06fbf81;
    uVar11 = (uVar11 >> 0x2f ^ uVar13 ^ uVar11) * -0x651e95c4d06fbf81;
    local_50 = (uVar11 >> 0x2f ^ uVar11) * -0x651e95c4d06fbf81;
    local_a0 = lVar8;
    FUN_1409e1d48(lVar6 + 0x318);
  }
LAB_1409e1cb6:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x370));
LAB_1409e1cbf:
  *param_1 = &PTR_FUN_14a1e4950;
  if (param_1[2] != 0) {
    LOCK();
    puVar2 = (uint *)(param_1[2] + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e1d48 FUN_1409e1d48 body=287 status=ok
// SIG undefined FUN_1409e1d48(void)

void FUN_1409e1d48(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    uVar7 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(param_2 + 0x50);
    lVar3 = (longlong)*(int *)((longlong)plVar8 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x70 + *param_1;
      cVar2 = FUN_1401914d2(&local_39,lVar3,param_2);
      if (cVar2 == '\0') {
        do {
          lVar5 = lVar3;
          lVar3 = (longlong)*(int *)(lVar5 + 0x68);
          if (lVar3 == -1) goto LAB_1409e1df6;
          lVar3 = lVar3 * 0x70 + *param_1;
          cVar2 = FUN_1401914d2(&local_39,lVar3,param_2);
        } while (cVar2 == '\0');
        piVar6 = (int *)(lVar5 + 0x68);
      }
      else {
        piVar6 = (int *)((longlong)plVar8 + uVar7 * 4);
      }
      iVar1 = *piVar6;
      lVar3 = *param_1;
      plVar8 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[8];
      }
      lVar5 = (longlong)*(int *)(lVar3 + 0x6c + (longlong)iVar1 * 0x70);
      iVar4 = *(int *)((longlong)plVar8 + lVar5 * 4);
      if (iVar4 == iVar1) {
        piVar6 = (int *)((longlong)plVar8 + lVar5 * 4);
      }
      else {
        do {
          piVar6 = (int *)(lVar3 + (longlong)iVar4 * 0x70 + 0x68);
          iVar4 = *piVar6;
        } while (iVar4 != iVar1);
      }
      *piVar6 = *(int *)(lVar3 + (longlong)iVar1 * 0x70 + 0x68);
      FUN_1409e1e68(param_1);
    }
  }
LAB_1409e1df6:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e1e68 FUN_1409e1e68 body=116 status=ok
// SIG undefined FUN_1409e1e68(void)

void FUN_1409e1e68(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 1409e1edc FUN_1409e1edc body=910 status=ok
// SIG undefined FUN_1409e1edc(void)

void FUN_1409e1edc(longlong *param_1)

{
  longlong *plVar1;
  void *_Dst;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = 7;
  if (DAT_14cb108d0 != DAT_14cb108fc) {
    lVar2 = *(longlong *)(param_1[4] + 0x18);
    uVar10 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    puVar9 = &DAT_14cb10900;
    if (DAT_14cb10908 != (undefined *)0x0) {
      puVar9 = DAT_14cb10908;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (DAT_14cb10910 - 1U &
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                              (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar8 >> 4)) * 4);
    while (iVar5 != -1) {
      plVar1 = (longlong *)(DAT_14cb108c8 + (longlong)iVar5 * 0x14);
      if (*plVar1 == lVar2) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          uVar3 = (undefined1)plVar1[1];
        }
        break;
      }
      iVar5 = *(int *)((longlong)plVar1 + 0xc);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x152) = uVar3;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar4 = FUN_1400439fc(param_1,0,&local_a8);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  iVar5 = (int)param_1[0x12];
  if (0 < iVar5) {
    plVar1 = param_1 + 0x11;
    uVar10 = 0;
    do {
      uVar11 = (ulonglong)uVar10;
      lVar2 = *(longlong *)(*plVar1 + uVar11 * 8);
      if (lVar2 == 0) {
        if (~uVar10 + iVar5 != 0) {
          _Dst = (void *)(*plVar1 + uVar11 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar10 + iVar5) << 3);
          iVar5 = (int)param_1[0x12];
        }
        *(int *)(param_1 + 0x12) = iVar5 + -1;
        FUN_140834a8e(plVar1);
        uVar10 = uVar10 - 1;
      }
      else {
        if (param_1[6] == 0) {
          lVar6 = *(longlong *)(lVar2 + 0x178);
        }
        else {
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_88 = 0;
          if (param_1 == (longlong *)0x0) {
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
          }
          else {
            FUN_1400bbfae(&local_80,param_1);
            uStack_a0 = CONCAT44(uStack_7c,local_80);
            local_98 = CONCAT44(uStack_74,uStack_78);
            if (uStack_90 != 0) {
              FUN_1400020a8();
            }
            uStack_90 = CONCAT44(uStack_6c,local_70);
            local_88 = CONCAT44(uStack_64,uStack_68);
            cVar4 = (*(code *)PTR_FUN_14c758760)();
            if (cVar4 != '\0') {
              uVar8 = *(uint *)((longlong)param_1 + 0xc);
              if ((int)uVar8 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
                local_a8 = 0;
                goto LAB_1409e20e7;
              }
            }
            FUN_14485c47a(&local_a8,param_1);
          }
LAB_1409e20e7:
          cVar4 = FUN_144a7afa6(lVar2 + 0x30,&uStack_a0);
          if (uStack_90 != 0) {
            FUN_1400020a8();
          }
          if ((cVar4 != '\0') || (lVar6 = *(longlong *)(lVar2 + 0x178), param_1[6] == lVar6)) {
            iVar5 = (int)param_1[0x12];
            if (~uVar10 + iVar5 != 0) {
              memmove((void *)(param_1[0x11] + uVar11 * 8),(void *)(param_1[0x11] + uVar11 * 8 + 8),
                      (longlong)(int)(~uVar10 + iVar5) << 3);
              iVar5 = (int)param_1[0x12];
            }
            *(int *)(param_1 + 0x12) = iVar5 + -1;
            FUN_140834a8e(plVar1);
            uVar10 = uVar10 - 1;
            FUN_14282b7b8(param_1);
            goto LAB_1409e2198;
          }
        }
        bVar7 = 1;
        if (lVar6 != 0) {
          bVar7 = (*(byte *)(lVar6 + 0x240) & 0x20) >> 4 | 5;
        }
        FUN_140191f3c(lVar2,bVar7);
        cVar4 = FUN_14039924e(lVar2);
        if (cVar4 != '\0') {
          FUN_14018b23a(param_1 + 0x13,lVar2,0);
        }
      }
LAB_1409e2198:
      uVar10 = uVar10 + 1;
      iVar5 = (int)param_1[0x12];
    } while ((int)uVar10 < iVar5);
  }
  FUN_1409e226c();
  FUN_1409e22f8(param_1);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e226c FUN_1409e226c body=138 status=ok
// SIG undefined FUN_1409e226c(void)

void FUN_1409e226c(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14cae9148 == '\0') {
    uVar1 = FUN_140c61bfa();
    FUN_14123f5ce(uVar1,local_10,FUN_14355c684);
    uVar1 = FUN_140b631de();
    FUN_14123f5ce(uVar1,local_10,&LAB_14355c7da);
    FUN_1458518c2(&DAT_14cb10808,local_10,&LAB_1401d6688);
    DAT_14cae9148 = '\x01';
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e22f8 FUN_1409e22f8 body=389 status=ok
// SIG undefined FUN_1409e22f8(void)

void FUN_1409e22f8(longlong param_1)

{
  void *_Src;
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  code *local_60;
  void ***local_58;
  int local_50;
  void *local_48;
  ulonglong uStack_40;
  uint local_38;
  void **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2c8) == 0)) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = -1;
    uVar1 = FUN_14482ca40();
    uVar2 = FUN_140fb7d76();
    local_58 = &local_30;
    local_60 = FUN_142840874;
    local_68 = uVar1 | 0x90000000;
    local_30 = &local_48;
    FUN_140245161(uVar2,&local_60,1,0x10);
    _Src = local_48;
    uVar4 = (ulonglong)(int)local_38;
    lVar6 = (longlong)(int)uStack_40;
    do {
      uVar4 = uVar4 + 1;
      local_38 = (uint)uVar4;
      uVar3 = uVar4 & 0xffffffff;
      if (lVar6 <= (longlong)uVar4) break;
    } while (*(longlong *)((longlong)local_48 + uVar4 * 8) == 0);
    local_60 = (code *)0x0;
    local_58 = (void ***)CONCAT44(local_58._4_4_,(int)uStack_40);
    if ((int)uStack_40 == 0) {
      local_58 = (void ***)(uStack_40 & 0xffffffff);
      iVar5 = 0;
    }
    else {
      FUN_14010590e(&local_60,uStack_40 & 0xffffffff,0);
      memcpy(local_60,_Src,lVar6 << 3);
      uVar3 = (ulonglong)local_38;
      iVar5 = (int)uStack_40;
    }
    local_50 = (int)uVar3;
joined_r0x0001409e23f6:
    if (local_50 != iVar5) {
      FUN_14133d686(param_1,*(undefined8 *)(local_60 + (longlong)(int)uVar3 * 8),0);
      uVar4 = (ulonglong)local_50;
      do {
        uVar4 = uVar4 + 1;
        local_50 = (int)uVar4;
        uVar3 = uVar4 & 0xffffffff;
        if ((longlong)(int)local_58 <= (longlong)uVar4) break;
      } while (*(longlong *)(local_60 + uVar4 * 8) == 0);
      goto joined_r0x0001409e23f6;
    }
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_140a2eb0a(param_1,0,0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e248a FUN_1409e248a body=113 status=ok
// SIG undefined FUN_1409e248a(void)

undefined8 * FUN_1409e248a(undefined8 *param_1,longlong *param_2)

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
  *param_1 = &PTR_FUN_14a6aa8b0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1409e24fc FUN_1409e24fc body=628 status=ok
// SIG undefined FUN_1409e24fc(void)

void FUN_1409e24fc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
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
  FUN_141045d4b(*(undefined8 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0xd8));
  *(undefined4 *)(param_2 + 0xd8) = 0;
  if (*(int *)(param_2 + 0xdc) != 0) {
    FUN_148e6624a(param_2 + 0xd0);
  }
  *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xe0) + 1;
  FUN_141045d4b(*(undefined8 *)(param_2 + 0xe8),*(undefined4 *)(param_2 + 0xf0));
  *(undefined4 *)(param_2 + 0xf0) = 0;
  if (*(int *)(param_2 + 0xf4) != 0) {
    FUN_148e6624a(param_2 + 0xe8);
  }
  *(int *)(param_2 + 0xf8) = *(int *)(param_2 + 0xf8) + 1;
  lVar4 = FUN_1400d7050(param_1 + 0x30);
  if (lVar4 == 0) goto LAB_1409e26a8;
  lVar6 = *(longlong *)(param_2 + 0x40);
  if (lVar6 == 0) {
    uVar5 = FUN_141218768();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_2 + 0x40) = lVar6;
  }
  lVar8 = *(longlong *)(param_2 + 0x48);
  if (lVar8 == 0) {
    if ((lVar6 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) goto LAB_1409e26a8;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_2 + 0x48) = 0;
      goto LAB_1409e26a8;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar8 = FUN_144aff482(uVar5,(longlong *)(param_2 + 0x38));
    *(longlong *)(param_2 + 0x48) = lVar8;
    if (lVar8 == 0) goto LAB_1409e26a8;
  }
  plVar1 = (longlong *)(lVar8 + 0x78);
  lVar6 = lVar8 + 0x88;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_58 = lVar6;
  if (*(int *)(lVar8 + 0xa0) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(lVar8 + 0xa0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  uVar5 = local_70;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
  iVar3 = local_70._4_4_;
  local_88 = plVar1;
  if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != lVar6)) {
    do {
      local_70 = uVar5;
      FUN_14575fc42(param_2,(longlong)iVar3 * 0xe0 + *local_88,lVar4);
      local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
      FUN_1449c0562(&local_80);
      iVar3 = local_70._4_4_;
      uVar5 = local_70;
    } while (local_88 != plVar1 ||
             (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar7));
  }
  if ((longlong)*(int *)(lVar8 + 0xd0) != 0) {
    lVar6 = *(longlong *)(lVar8 + 200);
    lVar8 = (longlong)*(int *)(lVar8 + 0xd0) << 5;
    do {
      FUN_1409e2772(param_2,lVar6,lVar4);
      lVar6 = lVar6 + 0x20;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
LAB_1409e26a8:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e2772 FUN_1409e2772 body=1604 status=ok
// SIG undefined FUN_1409e2772(void)

void FUN_1409e2772(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_248 [32];
  longlong local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined1 local_f8 [8];
  longlong local_f0;
  longlong *local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
  puVar8 = (undefined8 *)FUN_1409e2db8(param_1 + 0xe8);
  *(undefined4 *)(puVar8 + 9) = *param_2;
  local_228 = param_3;
  uVar5 = FUN_140de8536(param_2,*(undefined8 *)(param_3 + 0x398));
  *(undefined1 *)(puVar8 + 10) = uVar5;
  lVar9 = FUN_140de867c(param_2);
  if (lVar9 == 0) goto switchD_1409e29a6_default;
  if (*(longlong *)(lVar9 + 0x28) != 0) {
    FUN_1409e2dfc(lVar9 + 0x28,&local_f0);
    if (local_f0 != 0) {
      local_1d0 = "Reward.Item.Cosmetic";
      local_1c8 = 0x14;
      local_1c4 = 0;
      uVar7 = FUN_14001a6c0(&local_1d0,1);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,local_f8,uVar7,1);
      if ((longlong)*(int *)(local_f0 + 0x10) != 0) {
        lVar13 = *(longlong *)(local_f0 + 8);
        lVar12 = (longlong)*(int *)(local_f0 + 0x10) * 0xe0 + lVar13;
        do {
          cVar6 = FUN_14021d296(lVar13 + 8,local_f8);
          if (cVar6 != '\0') {
            FUN_140c5254a(lVar13,&local_1d0);
            FUN_1409e2f4a(puVar8 + 0xb,&local_1d0);
            FUN_1407dde54(&local_1d0);
            lVar3 = *(longlong *)(lVar13 + 8);
            puVar8[1] = lVar3;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cbd58a8) && (FUN_144b3d300(&DAT_14cbd58a8), DAT_14cbd58a8 == -1))
            {
              FUN_1446ddc76(local_50,"Reward.Item.Cosmetic.PlayerBody",1);
              FUN_1447683ea(&local_1d0,local_50,1);
              local_1d8 = local_1d0;
              FUN_1446ddc76(local_60,"Reward.Item.Cosmetic.PlayerHead",1);
              FUN_1447683ea(&local_58,local_60,1);
              local_1e0 = local_58;
              FUN_1446ddc76(local_70,"Reward.Item.Cosmetic.PlayerMaterial",1);
              FUN_1447683ea(&local_68,local_70,1);
              local_1e8 = local_68;
              FUN_1446ddc76(local_80,"Reward.Item.Cosmetic.EchoMaterial",1);
              FUN_1447683ea(&local_78,local_80,1);
              local_1f0 = local_78;
              FUN_1446ddc76(local_90,"Reward.Item.Cosmetic.EchoMesh",1);
              FUN_1447683ea(&local_88,local_90,1);
              local_1f8 = local_88;
              FUN_1446ddc76(local_a0,"Reward.Item.Cosmetic.EchoOrnament",1);
              FUN_1447683ea(&local_98,local_a0,1);
              local_200 = local_98;
              FUN_1446ddc76(local_b0,"Reward.Item.Cosmetic.HoverDrive",1);
              FUN_1447683ea(&local_a8,local_b0,1);
              local_208 = local_a8;
              FUN_1446ddc76(local_c0,"Reward.Item.Cosmetic.VehicleMaterial",1);
              FUN_1447683ea(&local_b8,local_c0,1);
              local_210 = local_b8;
              FUN_1446ddc76(local_d0,"Reward.Item.Cosmetic.VehicleMesh",1);
              FUN_1447683ea(&local_c8,local_d0,1);
              local_218 = local_c8;
              FUN_1446ddc76(local_e0,"Reward.Item.Cosmetic.WeaponMaterial",1);
              FUN_1447683ea(&local_d8,local_e0,1);
              local_220 = local_d8;
              DAT_14cbd5898 = (undefined8 *)0x0;
              DAT_14cbd58a0 = 10;
              FUN_1457607de();
              puVar4 = DAT_14cbd5898;
              *DAT_14cbd5898 = local_1d8;
              *(undefined1 *)(puVar4 + 1) = 2;
              *(undefined8 *)((longlong)puVar4 + 0xc) = local_1e0;
              *(undefined1 *)((longlong)puVar4 + 0x14) = 2;
              puVar4[3] = local_1e8;
              *(undefined1 *)(puVar4 + 4) = 2;
              *(undefined8 *)((longlong)puVar4 + 0x24) = local_1f0;
              *(undefined1 *)((longlong)puVar4 + 0x2c) = 1;
              puVar4[6] = local_1f8;
              *(undefined1 *)(puVar4 + 7) = 1;
              *(undefined8 *)((longlong)puVar4 + 0x3c) = local_200;
              *(undefined1 *)((longlong)puVar4 + 0x44) = 1;
              puVar4[9] = local_208;
              *(undefined1 *)(puVar4 + 10) = 3;
              *(undefined8 *)((longlong)puVar4 + 0x54) = local_210;
              *(undefined1 *)((longlong)puVar4 + 0x5c) = 3;
              puVar4[0xc] = local_218;
              *(undefined1 *)(puVar4 + 0xd) = 3;
              *(undefined8 *)((longlong)puVar4 + 0x6c) = local_220;
              *(undefined1 *)((longlong)puVar4 + 0x74) = 4;
              atexit((_func_5014 *)&LAB_14424698c);
              _Init_thread_footer(&DAT_14cbd58a8);
            }
            if ((longlong)DAT_14cbd58a0 != 0) {
              lVar11 = 0;
              do {
                if (*(longlong *)((longlong)DAT_14cbd5898 + lVar11) == lVar3) {
                  uVar5 = *(undefined1 *)((longlong)DAT_14cbd5898 + lVar11 + 8);
                  goto LAB_1409e2921;
                }
                lVar11 = lVar11 + 0xc;
              } while ((longlong)DAT_14cbd58a0 * 0xc != lVar11);
            }
            uVar5 = 0;
LAB_1409e2921:
            *(undefined1 *)(puVar8 + 2) = uVar5;
            lVar3 = *(longlong *)(lVar13 + 0x40);
            if (puVar8[6] != lVar3) {
              puVar8[8] = 0;
            }
            puVar8[6] = lVar3;
            if (puVar8[7] != *(longlong *)(lVar13 + 0x48)) {
              puVar8[8] = 0;
            }
            uVar10 = FUN_14477b664();
            uVar10 = FUN_14477b664(uVar10);
            puVar8[7] = uVar10;
            puVar8[8] = *(undefined8 *)(lVar13 + 0x50);
          }
          lVar13 = lVar13 + 0xe0;
        } while (lVar13 != lVar12);
      }
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
  }
  switch(*(undefined1 *)(puVar8 + 2)) {
  case 1:
    uVar10 = DAT_14cbcfbe0;
    break;
  case 2:
    uVar10 = DAT_14cbcfbd8;
    break;
  case 3:
    uVar10 = DAT_14cbcfbe8;
    break;
  case 4:
    FUN_14575fc86(&local_1d0,lVar9 + 0x18);
    *puVar8 = local_1d0;
  default:
    goto switchD_1409e29a6_default;
  }
  FUN_1409e323c(param_2,puVar8,local_228,uVar10);
switchD_1409e29a6_default:
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e2db8 FUN_1409e2db8 body=68 status=ok
// SIG undefined FUN_1409e2db8(void)

longlong FUN_1409e2db8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14575fd14(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x208 + *param_1;
  FUN_1409e2e89(lVar2);
  return lVar2;
}



// FUNCTION 1409e2dfc FUN_1409e2dfc body=83 status=ok
// SIG undefined FUN_1409e2dfc(void)

longlong * FUN_1409e2dfc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1409e2e50();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1409e2e50 FUN_1409e2e50 body=57 status=ok
// SIG undefined FUN_1409e2e50(void)

void FUN_1409e2e50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae6f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae6f8 = FUN_140002ddd(FUN_1465ebdb8,uVar1,L"OakRewardsSetCustomData_Mission");
  }
  return;
}



// FUNCTION 1409e2e89 FUN_1409e2e89 body=192 status=ok
// SIG undefined FUN_1409e2e89(void)

void FUN_1409e2e89(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 3;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_140c5455a(param_1 + 0xb);
  param_1[0x32] = 0;
  param_1[0x33] = 0x8000000000;
  param_1[0x34] = 0xffffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0xf;
  *(undefined2 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  return;
}



// FUNCTION 1409e2f4a FUN_1409e2f4a body=502 status=ok
// SIG undefined FUN_1409e2f4a(void)

longlong * FUN_1409e2f4a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == param_2) {
    *(char *)(param_1 + 6) = (char)param_2[6];
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(char *)(param_1 + 6) = (char)param_2[6];
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = param_2[7];
    param_2[7] = 0;
    *(int *)(param_1 + 8) = (int)param_2[8];
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = param_2[9];
    param_2[9] = 0;
    *(int *)(param_1 + 10) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = param_2[0xb];
    param_2[0xb] = 0;
    *(int *)(param_1 + 0xc) = (int)param_2[0xc];
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    param_2[0xc] = 0;
  }
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  FUN_140008f88(param_1 + 0xe,param_2 + 0xe);
  FUN_140008f88(param_1 + 0x10,param_2 + 0x10);
  FUN_140008f88(param_1 + 0x12,param_2 + 0x12);
  FUN_140008f88(param_1 + 0x14,param_2 + 0x14);
  param_1[0x16] = param_2[0x16];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xbc);
  lVar3 = param_2[0x18];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar1;
  *(int *)(param_1 + 0x18) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
  if (param_1 != param_2) {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    param_1[0x19] = param_2[0x19];
    param_2[0x19] = 0;
    *(int *)(param_1 + 0x1a) = (int)param_2[0x1a];
    *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
    param_2[0x1a] = 0;
  }
  return param_1;
}



// FUNCTION 1409e3140 FUN_1409e3140 body=84 status=ok
// SIG undefined FUN_1409e3140(void)

longlong * FUN_1409e3140(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1409e3194 FUN_1409e3194 body=115 status=ok
// SIG undefined FUN_1409e3194(void)

void FUN_1409e3194(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7f2890;
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  if (param_1[0xe] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409e3208 FUN_1409e3208 body=52 status=ok
// SIG undefined FUN_1409e3208(void)

undefined8 FUN_1409e3208(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140b47a16();
  if ((lVar1 == 0) || (*(char *)(lVar1 + 8) != '\0')) {
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    *(undefined1 *)(param_1 + 0xc0) = 1;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1409e323c FUN_1409e323c body=1952 status=ok
// SIG undefined FUN_1409e323c(void)

void FUN_1409e323c(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  undefined1 *local_198;
  code *local_190;
  longlong *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  int local_138;
  code *local_130;
  longlong *local_128;
  longlong local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8 [3];
  ulonglong uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar7 = *(longlong *)(param_3 + 0x398);
  local_168 = param_2;
  local_b8 = param_4;
  if (lVar7 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_1a0 = &local_130;
      local_130 = FUN_141030f22;
      local_190 = FUN_14081d0ea;
      local_198 = &LAB_1464f5fc4;
      local_1a8 = &LAB_148c3dd26;
      local_1b0 = &LAB_1459673ba;
      local_1b8 = L"Engine";
      local_1c0 = 0;
      local_1c8 = 0x10000004;
      local_1d0 = CONCAT44(local_1d0._4_4_,0x10);
      local_1d8 = CONCAT44(local_1d8._4_4_,0x1360);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar7 = *(longlong *)(param_3 + 0x398);
      if (lVar7 == 0) goto LAB_1409e37b7;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar15 = *(longlong *)(lVar7 + 0x10), lVar15 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar15 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
        == DAT_14cbae3d8 + 0x30)) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_1d8 = 0;
      FUN_14117274e(lVar7 + 0xd50,&local_b8,&local_c8,0);
      lVar7 = FUN_140de867c(param_1);
      if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x20) != 0)) {
        lVar15 = *(longlong *)(lVar7 + 0x18);
        lVar7 = lVar15 + (longlong)*(int *)(lVar7 + 0x20) * 0x18;
        local_170 = lVar7;
        do {
          FUN_1409e3aae(lVar15,&local_130);
          plVar2 = local_128;
          pcVar5 = local_130;
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_128 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          if (pcVar5 != (code *)0x0) {
            lVar8 = FUN_140aa5740();
            if (lVar8 == 0) {
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              local_70 = 0;
              uStack_68 = 0;
            }
            else {
              puVar13 = *(undefined4 **)(lVar8 + 8);
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = &DAT_14c9485f0;
              }
              FUN_1447a97f4(&local_88,puVar13);
              if ((((int)local_88 != 0) && (local_88._4_4_ != 0)) &&
                 (((int)local_88 != DAT_14c948000 && (0 < (int)uStack_c0)))) {
                lVar8 = 0;
                do {
                  local_150 = lVar8 * 5;
                  plVar2 = (longlong *)(local_c8 + lVar8 * 0x28);
                  lVar12 = plVar2[1];
                  local_148 = lVar8;
                  if (lVar12 == 0) {
                    uVar9 = FUN_140c1c194();
                    lVar12 = FUN_14477b664(uVar9);
                    plVar2[1] = lVar12;
                  }
                  local_180 = (longlong *)plVar2[2];
                  if (local_180 == (longlong *)0x0) {
                    if ((lVar12 != 0) && (*plVar2 != 0)) {
                      plVar4 = *(longlong **)(lVar12 + 0xb8);
                      if ((plVar4 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                        plVar2[2] = 0;
                        lVar7 = local_170;
                      }
                      else {
                        uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
                        local_180 = (longlong *)FUN_144aff482(uVar9,plVar2);
                        plVar2[2] = (longlong)local_180;
                        lVar7 = local_170;
                        if (local_180 != (longlong *)0x0) goto LAB_1409e3424;
                      }
                    }
                  }
                  else {
LAB_1409e3424:
                    if (0 < (int)plVar2[4]) {
                      uVar16 = 0;
                      local_160 = plVar2;
                      do {
                        cVar6 = (**(code **)(*local_180 + 0x30))(local_180,uVar16 & 0xffffffff);
                        if (cVar6 == '\x01') {
                          local_e8[2] = 0;
                          uStack_d0 = 0;
                          local_1d8 = local_1d8 & 0xffffffffffffff00;
                          local_1d0 = param_3;
                          FUN_1409e3e74(local_180,local_e8 + 2,uVar16 & 0xffffffff,local_160);
                          if ((longlong)(int)uStack_d0 == 0) {
                            uVar14 = 0;
                          }
                          else {
                            lVar7 = (longlong)(int)uStack_d0 * 0x58;
                            lVar8 = local_e8[2] + 0x20;
                            do {
                              lVar12 = *(longlong *)(lVar8 + -0x10);
                              if (lVar12 == 0) {
                                uVar9 = FUN_140c1c194();
                                lVar12 = FUN_14477b664(uVar9);
                                *(longlong *)(lVar8 + -0x10) = lVar12;
                              }
                              plVar2 = (longlong *)(lVar8 + -0x18);
                              lVar10 = *(longlong *)(lVar8 + -8);
                              if (lVar10 == 0) {
                                if ((lVar12 != 0) && (*plVar2 != 0)) {
                                  plVar4 = *(longlong **)(lVar12 + 0xb8);
                                  if ((plVar4 == (longlong *)0x0) ||
                                     (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')
                                     ) {
                                    *(undefined8 *)(lVar8 + -8) = 0;
                                  }
                                  else {
                                    uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
                                    lVar10 = FUN_144aff482(uVar9,plVar2);
                                    *(longlong *)(lVar8 + -8) = lVar10;
                                    if (lVar10 != 0) goto LAB_1409e3511;
                                  }
                                }
                              }
                              else {
LAB_1409e3511:
                                FUN_1409e39de(lVar10,&local_b0);
                                uVar14 = uStack_c0;
                                if ((((local_b0 != 0) && (local_ac != 0)) &&
                                    (local_b0 != DAT_14c948000)) && (local_b0 == (int)local_88)) {
                                  local_e8[0] = 0;
                                  local_e8[1] = 0;
                                  local_f8 = 0;
                                  local_178 = local_c8;
                                  local_f0 = (int)uStack_c0;
                                  local_158 = param_3;
                                  if ((int)uStack_c0 == 0) {
                                    local_ec = 0;
                                  }
                                  else {
                                    FUN_14099a736(&local_f8,uStack_c0 & 0xffffffff,0);
                                    FUN_14099a4c3(local_f8,local_178,uVar14 & 0xffffffff);
                                  }
                                  local_178 = local_168 + 0x18;
                                  lVar12 = *(longlong *)(local_f8 + 0x18 + local_150 * 8);
                                  puVar3 = (undefined1 *)(lVar12 + uVar16 * 0x58);
                                  *puVar3 = *(undefined1 *)(lVar8 + -0x20);
                                  FUN_1409e3b3c(puVar3 + 8,plVar2);
                                  FUN_144983130(lVar12 + uVar16 * 0x58 + 0x20,lVar8);
                                  local_140 = local_f8;
                                  local_138 = local_f0;
                                  FUN_1409e3b90(&local_130,&local_140);
                                  FUN_1409e3c80(&local_130,local_e8,0);
                                  puVar11 = (undefined8 *)FUN_1409e3bfc(local_180);
                                  *(undefined8 *)(local_168 + 0x28) = *puVar11;
                                  FUN_1402980a2(local_178,local_e8[0]);
                                  FUN_141022a1a(&local_130);
                                  FUN_14028f404(local_f8,local_f0);
                                  if (local_f8 != 0) {
                                    FUN_1400020a8();
                                  }
                                  param_3 = local_158;
                                  if (local_e8[0] != 0) {
                                    FUN_1400020a8();
                                  }
                                }
                                if (local_98 != 0) {
                                  FUN_1400020a8();
                                }
                              }
                              lVar8 = lVar8 + 0x58;
                              lVar7 = lVar7 + -0x58;
                            } while (lVar7 != 0);
                            uVar14 = uStack_d0 & 0xffffffff;
                            lVar7 = local_170;
                          }
                          FUN_14028f43e(local_e8[2],uVar14);
                          if (local_e8[2] != 0) {
                            FUN_1400020a8();
                          }
                        }
                        uVar16 = uVar16 + 1;
                      } while ((longlong)uVar16 < (longlong)(int)local_160[4]);
                    }
                  }
                  lVar8 = local_148 + 1;
                } while (lVar8 < (int)uStack_c0);
              }
            }
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          lVar15 = lVar15 + 0x18;
        } while (lVar15 != lVar7);
      }
      FUN_14028f404(local_c8,uStack_c0 & 0xffffffff);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1409e37b7:
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e39de FUN_1409e39de body=208 status=ok
// SIG undefined FUN_1409e39de(void)

undefined8 * FUN_1409e39de(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  plVar3 = (longlong *)FUN_14094fa22();
  lVar6 = plVar3[1];
  if (lVar6 == 0) {
    uVar4 = FUN_1406ef318();
    lVar6 = FUN_14477b664(uVar4);
    plVar3[1] = lVar6;
  }
  lVar5 = plVar3[2];
  if (lVar5 == 0) {
    if ((lVar6 != 0) && (*plVar3 != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        plVar3[2] = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,plVar3);
        plVar3[2] = lVar5;
        if (lVar5 != 0) goto LAB_1409e3a06;
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  else {
LAB_1409e3a06:
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar5 + 8);
    }
    FUN_1447a97f4(param_2,puVar7);
  }
  return param_2;
}



// FUNCTION 1409e3aae FUN_1409e3aae body=83 status=ok
// SIG undefined FUN_1409e3aae(void)

longlong * FUN_1409e3aae(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1409e3b02();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1409e3b02 FUN_1409e3b02 body=57 status=ok
// SIG undefined FUN_1409e3b02(void)

void FUN_1409e3b02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62820 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62820 = FUN_140002ddd(FUN_1464f911f,uVar1,L"GbxRewardData_Unlockable");
  }
  return;
}



// FUNCTION 1409e3b3c FUN_1409e3b3c body=84 status=ok
// SIG undefined FUN_1409e3b3c(void)

longlong * FUN_1409e3b3c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1409e3b90 FUN_1409e3b90 body=107 status=ok
// SIG undefined FUN_1409e3b90(void)

undefined8 * FUN_1409e3b90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_14b08e0e0;
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_14099a736(param_1 + 5,iVar1,0);
    FUN_14099a4c3(param_1[5],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1409e3bfc FUN_1409e3bfc body=132 status=ok
// SIG undefined FUN_1409e3bfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1409e3bfc(longlong param_1)

{
  undefined *puVar1;
  
  if ((int)(uint)*(byte *)(param_1 + 0x80) < *(int *)(DAT_14cb71140 + 1000)) {
    puVar1 = (undefined *)
             ((ulonglong)*(byte *)(param_1 + 0x80) * 8 + *(longlong *)(DAT_14cb71140 + 0x3e0));
  }
  else {
    puVar1 = &DAT_14cb70ee8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb70ef0) {
      FUN_144b3d300(&DAT_14cb70ef0);
      if (DAT_14cb70ef0 == -1) {
        _DAT_14cb70ee8 = 0;
        _Init_thread_footer(&DAT_14cb70ef0);
      }
    }
  }
  return puVar1;
}



// FUNCTION 1409e3c80 FUN_1409e3c80 body=270 status=ok
// SIG undefined FUN_1409e3c80(void)

ulonglong FUN_1409e3c80(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  size_t sVar2;
  undefined8 unaff_RBX;
  char ***_Str;
  undefined1 auStack_188 [40];
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  char **local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_48 = (char **)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0xf;
  bVar1 = FUN_1409e3d90(0,&local_48);
  bVar1 = local_38 != 0 & bVar1;
  if (bVar1 == 1) {
    _Str = &local_48;
    if (0xf < local_30) {
      _Str = (char ***)local_48;
    }
    local_60 = 0;
    if (_Str == (char ***)0x0) {
      local_58 = 0;
      local_50 = 0;
    }
    else {
      sVar2 = strlen((char *)_Str);
      FUN_1446e6fe8(local_160,_Str,sVar2 & 0xffffffff,1);
    }
    FUN_14020fad6(param_2,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1401d9a90(&local_48);
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e3d90 FUN_1409e3d90 body=227 status=ok
// SIG undefined FUN_1409e3d90(void)

undefined8 FUN_1409e3d90(longlong *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = param_1[2];
  if (((lVar4 == 0) || ((char)param_1[4] != '\0')) ||
     ((param_3 != (char *)0x0 && (*param_3 == '\x01')))) {
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((cVar2 == '\0') || (lVar4 = param_1[2], lVar4 == 0)) {
      uVar3 = 0;
      goto LAB_1409e3e55;
    }
  }
  local_38 = 0x800010000;
  uStack_30 = uStack_30 & 0xff000000;
  local_28 = (undefined8 *)0x0;
  if (param_3 == (char *)0x0) {
    FUN_143e20286(lVar4,param_2,&local_38);
  }
  else {
    local_38 = *(undefined8 *)param_3;
    uVar1 = *(uint *)(param_3 + 8);
    uStack_2c = *(undefined4 *)(param_3 + 0xc);
    local_28 = *(undefined8 **)(param_3 + 0x10);
    uStack_30 = uVar1;
    FUN_143e20286(*(undefined4 *)param_3,param_2);
    if (((uVar1 & 0x10000) != 0) && (local_28 != (undefined8 *)0x0)) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  uVar3 = 1;
LAB_1409e3e55:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e3e74 FUN_1409e3e74 body=863 status=ok
// SIG undefined FUN_1409e3e74(void)

void FUN_1409e3e74(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,longlong param_6)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong local_78;
  ulonglong local_70;
  
  (**(code **)(*param_1 + 0x50))();
  if (param_6 == 0 || param_5 != '\x01') {
    return;
  }
  lVar4 = param_2[1];
  uVar14 = (ulonglong)(int)lVar4;
  if (uVar14 == 0) {
    return;
  }
  lVar1 = *param_2;
  lVar11 = *(longlong *)(lVar1 + 0x10);
  if (lVar11 == 0) {
    uVar10 = FUN_140c1c194();
    lVar11 = FUN_14477b664(uVar10);
    *(longlong *)(lVar1 + 0x10) = lVar11;
  }
  lVar16 = *(longlong *)(lVar1 + 0x18);
  if (lVar16 == 0) {
    bVar5 = 0;
    if ((lVar11 == 0) || (*(longlong *)(lVar1 + 8) == 0)) goto LAB_1409e3f0f;
    plVar17 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar17 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar7 == '\0')) {
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar17 + 0x110))(plVar17);
      lVar16 = FUN_144aff482(uVar10,(longlong *)(lVar1 + 8));
      *(longlong *)(lVar1 + 0x18) = lVar16;
      if (lVar16 != 0) goto LAB_1409e3f01;
    }
    bVar5 = 0;
  }
  else {
LAB_1409e3f01:
    bVar5 = FUN_14094f966(lVar16,param_6);
    bVar5 = bVar5 ^ 1;
  }
LAB_1409e3f0f:
  iVar9 = 0;
  local_78 = 0;
  local_70 = local_78;
LAB_1409e3f46:
  do {
    iVar8 = (int)local_70;
    if ((int)(iVar8 + 1U) < (int)lVar4) {
      lVar16 = (longlong)iVar8;
      plVar17 = (longlong *)(lVar1 + 0x60 + lVar16 * 0x58);
      bVar3 = true;
      lVar11 = 0;
      do {
        lVar12 = plVar17[1];
        if (lVar12 == 0) {
          uVar10 = FUN_140c1c194();
          lVar12 = FUN_14477b664(uVar10);
          plVar17[1] = lVar12;
        }
        lVar13 = plVar17[2];
        if (lVar13 == 0) {
          if ((lVar12 != 0) && (*plVar17 != 0)) {
            plVar2 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar7 == '\0')) {
              plVar17[2] = 0;
            }
            else {
              uVar10 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar13 = FUN_144aff482(uVar10,plVar17);
              plVar17[2] = lVar13;
              if (lVar13 != 0) goto LAB_1409e3fb0;
            }
          }
          if ((bVar5 & 1) != 0) {
            FUN_14028f43e(lVar16 * 0x58 + lVar1,(int)lVar11 + 1);
            if (!bVar3) goto LAB_1409e4131;
            local_70 = lVar16 + 1 + lVar11;
            bVar5 = 0;
            goto LAB_1409e3f46;
          }
        }
        else {
LAB_1409e3fb0:
          bVar6 = FUN_14094f966(lVar13,param_6);
          if ((bVar5 & 1) == bVar6) {
            local_78 = (ulonglong)(uint)((int)(lVar16 + 1) + (int)lVar11);
            break;
          }
        }
        bVar3 = lVar11 + 2 + lVar16 < (longlong)uVar14;
        lVar11 = lVar11 + 1;
        plVar17 = plVar17 + 0xb;
        local_78 = uVar14;
      } while ((lVar16 - uVar14) + 1 + lVar11 != 0);
    }
    else {
      bVar3 = false;
      local_78 = (ulonglong)(iVar8 + 1U);
    }
    iVar15 = (int)local_78 - iVar8;
    if ((bVar5 & 1) == 0) {
      if (iVar9 != iVar8) {
        memmove((void *)((longlong)iVar9 * 0x58 + lVar1),(void *)((longlong)iVar8 * 0x58 + lVar1),
                (longlong)iVar15 * 0x58);
      }
      iVar9 = iVar9 + iVar15;
      bVar5 = 1;
    }
    else {
      FUN_14028f43e((longlong)iVar8 * 0x58 + lVar1,iVar15);
      bVar5 = 0;
    }
    local_70 = local_78;
    if (!bVar3) {
LAB_1409e4131:
      *(int *)(param_2 + 1) = iVar9;
      return;
    }
  } while( true );
}



// FUNCTION 1409e41d4 FUN_1409e41d4 body=766 status=ok
// SIG undefined FUN_1409e41d4(void)

void FUN_1409e41d4(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 ***local_90 [3];
  ushort local_78;
  byte local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 1;
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  local_b0 = uVar9;
  uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0x90));
  uVar8 = FUN_14477b664(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  local_98 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  local_a8 = uVar8;
  uStack_a0 = uVar7;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_14095139e(param_2,iVar3);
  }
  puVar1 = (undefined1 *)(*param_2 + (longlong)iVar3 * 0x58);
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  uVar9 = FUN_14477b664(uVar8);
  uVar9 = FUN_14477b664(uVar9);
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  FUN_140382e86(puVar1 + 0x20,&local_98);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar10 = (undefined8 ****)local_90[0];
    if (local_78 < 0x19) {
      ppppuVar10 = local_90;
    }
    (*pcVar5)(ppppuVar10);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(local_90[0]);
  }
  uVar2 = *(uint *)(param_1 + 0xa8);
  if (uVar2 != 0) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar2) {
      FUN_14095139e(param_2,iVar3);
    }
    FUN_1409e44d3((longlong)iVar3 * 0x58 + *param_2,*(undefined8 *)(param_1 + 0xa0),uVar2);
  }
  iVar3 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x68);
    lVar11 = 0;
    do {
      uVar9 = *(undefined8 *)(lVar6 + 8 + lVar11);
      uVar7 = FUN_14477b664(*(undefined8 *)(lVar6 + 0x10 + lVar11));
      uVar8 = FUN_14477b664(uVar7);
      uVar7 = *(undefined8 *)(lVar6 + 0x18 + lVar11);
      local_b8 = 1;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b0 = uVar9;
      uVar9 = FUN_14477b664(uVar8);
      local_a8 = FUN_14477b664(uVar9);
      local_98 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      uStack_a0 = uVar7;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_14095139e(param_2,iVar4);
      }
      puVar1 = (undefined1 *)(*param_2 + (longlong)iVar4 * 0x58);
      *puVar1 = local_b8;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x18) = 0;
      *(undefined8 *)(puVar1 + 8) = local_b0;
      uVar9 = FUN_14477b664(local_a8);
      uVar9 = FUN_14477b664(uVar9);
      *(undefined8 *)(puVar1 + 0x10) = uVar9;
      *(undefined8 *)(puVar1 + 0x18) = uStack_a0;
      FUN_140382e86(puVar1 + 0x20,&local_98);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar10 = local_90;
        if (0x18 < local_78) {
          ppppuVar10 = (undefined8 ****)local_90[0];
        }
        (*pcVar5)(ppppuVar10);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(local_90[0]);
      }
      lVar11 = lVar11 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar11 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e44d3 FUN_1409e44d3 body=121 status=ok
// SIG undefined FUN_1409e44d3(void)

void FUN_1409e44d3(undefined1 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  
  do {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = *param_2;
    uVar1 = FUN_14477b664(param_2[1]);
    uVar1 = FUN_14477b664(uVar1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = param_2[2];
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    param_1[0x48] = 0;
    param_1[0x50] = 0;
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 3;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1409e454c FUN_1409e454c body=750 status=ok
// SIG undefined FUN_1409e454c(void)

void FUN_1409e454c(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_60;
  int local_58;
  code *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141045d23(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_148e6621a(param_2);
  }
  *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
  FUN_141045d23(param_2[3],*(undefined4 *)(param_2 + 4));
  *(undefined4 *)(param_2 + 4) = 0;
  if (*(int *)((longlong)param_2 + 0x24) != 0) {
    FUN_148e6621a(param_2 + 3);
  }
  *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + 1;
  lVar5 = FUN_141356c7a(param_1 + 6);
  if (lVar5 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_80 = &local_50;
      local_50 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464f5fc4;
      local_88 = &LAB_148c3dd26;
      local_90 = &LAB_1459673ba;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if (((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
       (lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 != 0)) {
      lVar8 = param_2[8];
      if (lVar8 == 0) {
        uVar7 = FUN_141218768();
        lVar8 = FUN_14477b664(uVar7);
        param_2[8] = lVar8;
      }
      if (((param_2[9] == 0) && (lVar8 != 0)) && (param_2[7] != 0)) {
        plVar2 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar7 = FUN_144aff482(uVar7,param_2 + 7);
        }
        param_2[9] = uVar7;
      }
      lVar8 = FUN_146649676(param_1);
      if (lVar8 != 0) {
        uVar1 = *(undefined4 *)(lVar5 + 0x394);
        FUN_145cc55d4(lVar8,&local_50);
        pcVar3 = local_50;
        if ((longlong)local_48 != 0) {
          lVar5 = 0;
          do {
            FUN_148e1e9fa(param_2,*(undefined8 *)(pcVar3 + lVar5),uVar1,lVar6);
            lVar5 = lVar5 + 8;
          } while ((longlong)local_48 * 8 != lVar5);
        }
        FUN_145df1230(lVar8,&local_60);
        lVar5 = local_60;
        if ((longlong)local_58 != 0) {
          lVar8 = 0;
          do {
            FUN_148e1ea2a(param_2,*(undefined8 *)(lVar5 + lVar8),uVar1,lVar6);
            lVar8 = lVar8 + 8;
          } while ((longlong)local_58 * 8 != lVar8);
        }
        if (local_60 != 0) {
          FUN_1400020a8(local_60);
        }
        if (local_50 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e483c FUN_1409e483c body=16 status=ok
// SIG undefined FUN_1409e483c(void)

undefined4 FUN_1409e483c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1409e484c();
  return *puVar1;
}



// FUNCTION 1409e484c FUN_1409e484c body=293 status=ok
// SIG undefined FUN_1409e484c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1409e484c(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined *puVar2;
  
  if ((param_2 == 0) && (DAT_14cb79120 == 0)) {
    if (DAT_14cb758b8 == 0) {
      DAT_14cb79120 = 0;
    }
    else {
      DAT_14cb79120 = FUN_144837462(DAT_14cb758b8,&DAT_14cb790d0);
    }
  }
  uVar1 = FUN_1441fe358(param_1);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x6d0) <= (int)uVar1)) {
    puVar2 = &DAT_14cbd0760;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbd07c0) && (FUN_144b3d300(&DAT_14cbd07c0), DAT_14cbd07c0 == -1)) {
      uRam000000014cbd079c = 0;
      _DAT_14cbd0760 = 1;
      DAT_14cbd07a0 = 0;
      _DAT_14cbd07a8 = 0;
      _DAT_14cbd0764 = 0;
      uRam000000014cbd076c = 0;
      _DAT_14cbd0774 = 0;
      uRam000000014cbd077c = 0;
      _DAT_14cbd0784 = 0;
      uRam000000014cbd078c = 0;
      _DAT_14cbd0794 = 0;
      _DAT_14cbd0798 = 0;
      _DAT_14cbd07b0 = 1;
      _DAT_14cbd07b8 = 0;
      atexit((_func_5014 *)&LAB_1441fe420);
      _Init_thread_footer(&DAT_14cbd07c0);
    }
  }
  else {
    puVar2 = (undefined *)((ulonglong)uVar1 * 0x60 + *(longlong *)(param_1 + 0x6c8));
  }
  return puVar2;
}



// FUNCTION 1409e4972 FUN_1409e4972 body=27 status=ok
// SIG undefined FUN_1409e4972(void)

undefined8 FUN_1409e4972(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1409e484c();
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}



// FUNCTION 1409e498e FUN_1409e498e body=27 status=ok
// SIG undefined FUN_1409e498e(void)

undefined8 FUN_1409e498e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1409e484c();
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
  }
  return uVar2;
}



// FUNCTION 1409e49aa FUN_1409e49aa body=1486 status=ok
// SIG undefined FUN_1409e49aa(void)

void FUN_1409e49aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined **ppuVar13;
  bool bVar14;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  code *local_98;
  int local_90;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = FUN_1400d7050(param_1 + 0x30);
  if (lVar7 == 0) goto LAB_1409e4a11;
  if (DAT_14cbadd90 == 0) {
    local_d0 = &local_98;
    local_98 = FUN_141030f22;
    local_c0 = FUN_14081d0ea;
    local_c8 = &LAB_1459f2e4c;
    local_d8 = &LAB_148c39de3;
    local_e0 = &LAB_1457a9eb2;
    local_e8 = &DAT_149e063b2;
    local_f0 = 0;
    local_f8 = 0x10000004;
    local_100 = 0x10;
    local_108 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
       (lVar7 = *(longlong *)(lVar7 + 0x3db8), lVar7 == 0)) ||
      (((*(uint *)(lVar7 + 8) & 0x10) != 0 || (*(longlong *)(lVar7 + 0x20) == 0)))) ||
     (lVar8 = FUN_145ca578a(), lVar8 == 0)) goto LAB_1409e4a11;
  lVar10 = *(longlong *)(param_2 + 0x40);
  if (lVar10 == 0) {
    uVar9 = FUN_141218768();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(param_2 + 0x40) = lVar10;
  }
  lVar11 = *(longlong *)(param_2 + 0x48);
  if (lVar11 == 0) {
    if ((lVar10 == 0) || (*(longlong *)(param_2 + 0x38) == 0)) goto LAB_1409e4a11;
    plVar2 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      *(undefined8 *)(param_2 + 0x48) = 0;
      goto LAB_1409e4a11;
    }
    uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar11 = FUN_144aff482(uVar9,(longlong *)(param_2 + 0x38));
    *(longlong *)(param_2 + 0x48) = lVar11;
    if (lVar11 == 0) goto LAB_1409e4a11;
  }
  lVar10 = FUN_1457b1050(lVar11);
  if (lVar10 == 0) goto LAB_1409e4a11;
  piVar12 = &DAT_14c9485f0;
  if (*(int **)(lVar10 + 8) != (int *)0x0) {
    piVar12 = *(int **)(lVar10 + 8);
  }
  if (((*piVar12 == 0) || (iVar5 = piVar12[1], iVar5 == 0)) || (*piVar12 == DAT_14c948000)) {
LAB_1409e4e5a:
    local_90 = DAT_14c948620;
    local_98 = DAT_14c948618;
  }
  else {
    if ((iVar5 < 2) && (piVar12[9] < 1)) {
      piVar12 = piVar12 + 2;
    }
    else {
      piVar12 = *(int **)(piVar12 + 6);
    }
    if (iVar5 < 1) goto LAB_1409e4e5a;
    local_90 = piVar12[2];
    local_98 = *(code **)piVar12;
  }
  local_b8 = FUN_140b4e694(lVar8,&local_98);
  lVar8 = FUN_1466496d4(lVar10);
  if (lVar8 != 0) {
    FUN_140390f7a(lVar8 + 8,param_2 + 0xb0);
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    uVar9 = FUN_141218768();
    uVar9 = FUN_14477b664(uVar9);
    *(undefined8 *)(param_2 + 0x40) = uVar9;
  }
  lVar8 = *(longlong *)(lVar7 + 0x90);
  if (lVar8 == 0) {
    lVar8 = FUN_141218768();
  }
  local_b0 = *(longlong *)(lVar7 + 0x88);
  lVar7 = FUN_14477b664(lVar8);
  iVar6 = 0;
  iVar5 = 0;
  if ((lVar7 != 0) && (plVar2 = *(longlong **)(lVar7 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar8 = *plVar2;
    pcVar3 = *(code **)(lVar8 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar4 = (*pcVar3)(plVar2);
      iVar5 = 0;
      if (cVar4 == '\0') goto LAB_1409e4c4d;
      lVar8 = *plVar2;
    }
    pcVar3 = *(code **)(lVar8 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar13 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar13 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar13 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar5 = FUN_144aff48c(ppuVar13);
  }
LAB_1409e4c4d:
  lVar8 = *(longlong *)(param_2 + 0x38);
  lVar10 = *(longlong *)(param_2 + 0x40);
  if ((lVar10 != 0) && (plVar2 = *(longlong **)(lVar10 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar11 = *plVar2;
    pcVar3 = *(code **)(lVar11 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar4 = (*pcVar3)(plVar2);
      if (cVar4 == '\0') goto LAB_1409e4cba;
      lVar11 = *plVar2;
    }
    pcVar3 = *(code **)(lVar11 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar13 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar13 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar13 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar6 = FUN_144aff48c(ppuVar13);
  }
LAB_1409e4cba:
  if ((iVar6 == iVar5) && (lVar8 == local_b0)) {
    bVar14 = true;
    if (lVar10 != lVar7) {
      if ((lVar7 == 0) || (lVar10 == 0)) goto LAB_1409e4cca;
      iVar5 = *(int *)(lVar7 + 0x38);
      iVar6 = *(int *)(lVar10 + 0x38);
      if ((iVar6 < iVar5) ||
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar5 * 8) != lVar7 + 0x30)) {
        if (iVar5 < iVar6) goto LAB_1409e4cca;
        bVar14 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar6 * 8) == lVar10 + 0x30;
      }
    }
    if ((bVar14) && (*(ulonglong *)(param_2 + 0x98) < local_b8)) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"tickets",0);
      local_80 = 0;
      FUN_14052b5e0(local_84,"vaultcards",0);
      FUN_1466495a8(param_1,local_84,&local_78,1);
    }
  }
LAB_1409e4cca:
  *(ulonglong *)(param_2 + 0x98) = local_b8;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_140e6da68(&local_98,local_b8,0);
  FUN_140008f88(param_2 + 0xa0,&local_98);
  if (local_98 != (code *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  plVar2 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar12 = (int *)((longlong)plVar2 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_1409e4a11:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e4f7a FUN_1409e4f7a body=363 status=ok
// SIG undefined FUN_1409e4f7a(void)

void FUN_1409e4f7a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409e5010;
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
LAB_1409e5010:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1409e50e6 FUN_1409e50e6 body=197 status=ok
// SIG undefined FUN_1409e50e6(void)

void FUN_1409e50e6(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_1409e5164:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    (**(code **)(*param_2 + 8))(param_2);
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1409e5164;
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
    uVar4 = *param_1;
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
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_38 = uVar4;
    plStack_30 = plVar3;
    (**(code **)(*param_2 + 8))(param_2);
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
  return;
}



// FUNCTION 1409e51ac FUN_1409e51ac body=155 status=ok
// SIG undefined FUN_1409e51ac(void)

void FUN_1409e51ac(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 0x24) != 0) {
    uVar3 = *(uint *)(lVar4 + 0x20);
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1409e5201;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(lVar4 + 0x24) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_1409e5201;
    }
  }
  uVar6 = 0;
LAB_1409e5201:
  FUN_1409e5248(param_1,uVar6,lVar4 + 0x30,DAT_14cab2cd4);
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
                    /* WARNING: Could not recover jumptable at 0x0001409e5243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409e5248 FUN_1409e5248 body=1274 status=ok
// SIG undefined FUN_1409e5248(void)

void FUN_1409e5248(longlong param_1,longlong param_2,undefined4 *param_3,uint param_4)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_208 [44];
  uint local_1dc;
  uint *local_1d8;
  longlong **local_1d0;
  int local_1c4;
  longlong *local_1c0;
  int local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_16c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined8 local_11c;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 local_cc;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 local_7c;
  undefined4 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar1 = (longlong *)(param_1 + 0xa8);
  iVar4 = *(int *)(param_1 + 0xb0);
  iVar5 = *(int *)(param_1 + 0xdc);
  local_1dc = param_4;
  if (iVar4 != iVar5) {
    lVar8 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe8);
    }
    iVar12 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_4) * 4);
    if (iVar12 != -1) {
      do {
        lVar8 = *plVar1 + (longlong)iVar12 * 400;
        if (*(uint *)(*plVar1 + (longlong)iVar12 * 400) == param_4) {
          if (lVar8 != 0) goto LAB_1409e5379;
          break;
        }
        iVar12 = *(int *)(lVar8 + 0x188);
      } while (iVar12 != -1);
    }
  }
  memset(&local_1c0,0,0x180);
  local_1b0 = 2;
  local_1a0 = 0xffffffff;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_128 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_d8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_58 = 0;
  local_1d8 = &local_1dc;
  local_1d0 = &local_1c0;
  FUN_1409e5d90(plVar1,&local_1c4);
  lVar8 = *(longlong *)(param_1 + 0xa8) + (longlong)local_1c4 * 400;
  FUN_1409e579e(&local_1c0);
  iVar4 = *(int *)(param_1 + 0xb0);
  iVar5 = *(int *)(param_1 + 0xdc);
LAB_1409e5379:
  plVar11 = (longlong *)(lVar8 + 8);
  if (iVar4 == iVar5) {
LAB_1409e569b:
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xe8);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & local_1dc) * 4);
    if (iVar4 == -1) goto LAB_1409e569b;
    do {
      lVar6 = *plVar1 + (longlong)iVar4 * 400;
      if (*(uint *)(*plVar1 + (longlong)iVar4 * 400) == local_1dc) break;
      iVar4 = *(int *)(lVar6 + 0x188);
      lVar6 = 0;
    } while (iVar4 != -1);
  }
  local_1c0 = (longlong *)0x0;
  local_1b8 = 0;
  FUN_1446efa72(&local_1c0,0,3,0x10);
  plVar1 = local_1c0;
  local_1b8 = 3;
  *local_1c0 = (longlong)&PTR_LAB_14a480df0;
  *(undefined4 *)(local_1c0 + 1) = *param_3;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_1c0[2] = lVar7;
  *local_1c0 = (longlong)&PTR_FUN_14a480d80;
  local_1c0[3] = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(local_1c0 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar4 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar9 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar9 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x1c) = iVar4;
  plVar1[4] = (longlong)FUN_140874b82;
  if (((local_1b8 == 0) || (local_1c0 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_1c0 + 0x30))(), cVar3 == '\0')) {
    if (local_1b8 != 0) {
      if (local_1c0 == (longlong *)0x0) {
        puVar10 = (uint *)0x0;
        goto LAB_1409e554d;
      }
      puVar10 = (uint *)0x0;
      (**(code **)*local_1c0)(local_1c0,0);
      FUN_1446efa72(&local_1c0,0,0,0x10);
      goto LAB_1409e5537;
    }
    puVar10 = (uint *)0x0;
  }
  else {
    if (*(int *)(lVar8 + 0x1c) < 1) {
      iVar4 = *(int *)(lVar8 + 0x10);
      iVar5 = *(int *)(lVar8 + 0x18) + -1;
      *(int *)(lVar8 + 0x18) = iVar5;
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
        if (0 < iVar4) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar1 = *(longlong **)(*plVar11 + (longlong)iVar12 * 0x10),
                plVar1 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar11,iVar12);
              FUN_14005b248(plVar11);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar5 = *(int *)(lVar8 + 0x10);
          } while (iVar12 < iVar5);
        }
        iVar12 = 2;
        if (2 < iVar5 * 2) {
          iVar12 = iVar5 * 2;
        }
        *(int *)(lVar8 + 0x18) = iVar12;
        if ((iVar12 < iVar4) && (*(int *)(lVar8 + 0x14) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    puVar10 = (uint *)0x0;
    if ((local_1b8 != 0) && (local_1c0 != (longlong *)0x0)) {
      (**(code **)(*local_1c0 + 0x38))(local_1c0,&local_1d8);
      puVar10 = local_1d8;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    *(uint *)(lVar8 + 0x10) = iVar4 + 1U;
    if (*(uint *)(lVar8 + 0x14) < iVar4 + 1U) {
      FUN_1447a71f6(plVar11,iVar4);
    }
    lVar8 = *plVar11;
    lVar9 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar8 + lVar9) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
    *(longlong **)(lVar8 + lVar9) = local_1c0;
    local_1c0 = (longlong *)0x0;
    *(int *)(lVar8 + 8 + lVar9) = local_1b8;
LAB_1409e5537:
    local_1b8 = 0;
  }
  if (local_1c0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1409e554d:
  *(uint **)(lVar6 + 0x178) = puVar10;
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e579e FUN_1409e579e body=217 status=ok
// SIG undefined FUN_1409e579e(void)

void FUN_1409e579e(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1409e5878(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1409e58b0(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1409e58e8(param_1 + 5);
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409e5878 FUN_1409e5878 body=55 status=ok
// SIG undefined FUN_1409e5878(void)

void FUN_1409e5878(longlong *param_1)

{
  FUN_1409e5c14(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409e58b0 FUN_1409e58b0 body=55 status=ok
// SIG undefined FUN_1409e58b0(void)

void FUN_1409e58b0(longlong *param_1)

{
  FUN_1409e5920(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409e58e8 FUN_1409e58e8 body=55 status=ok
// SIG undefined FUN_1409e58e8(void)

void FUN_1409e58e8(longlong *param_1)

{
  FUN_1409e5a9a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409e5920 FUN_1409e5920 body=376 status=ok
// SIG undefined FUN_1409e5920(void)

void FUN_1409e5920(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x50 + (longlong)iStack_54 * 0x68) != 0) {
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
    FUN_14059f004(param_1,param_2);
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



// FUNCTION 1409e5a9a FUN_1409e5a9a body=376 status=ok
// SIG undefined FUN_1409e5a9a(void)

void FUN_1409e5a9a(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
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
    FUN_144748838(param_1,param_2);
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



// FUNCTION 1409e5c14 FUN_1409e5c14 body=377 status=ok
// SIG undefined FUN_1409e5c14(void)

void FUN_1409e5c14(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x58 + (longlong)iStack_54 * 0x70) != 0) {
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
    FUN_140875b54(param_1,param_2);
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



// FUNCTION 1409e5d90 FUN_1409e5d90 body=2580 status=ok
// SIG undefined FUN_1409e5d90(void)

void FUN_1409e5d90(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1409e68b8(param_1,iVar17);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar8 = iVar20 + 1;
    iVar12 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar12 = iVar20;
    }
    if (iVar12 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar4 = iVar20;
        }
        else {
          uVar5 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar5) {
              uVar18 = uVar5;
            }
          }
          else {
            uVar18 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar18 << 2,0);
          iVar4 = (int)(uVar15 >> 2);
          iVar8 = -0x20;
          if ((int)uVar5 <= iVar4) {
            iVar8 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar10,iVar4);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar10;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar6 = (longlong)iVar17;
    iVar20 = *(int *)(*param_1 + 4 + lVar6 * 400);
    *(int *)(param_1 + 6) = iVar20;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 400) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar20 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar20 = iVar17;
  }
  puVar9[iVar20 >> 5] = puVar9[iVar20 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  lVar19 = *param_1;
  lVar6 = lVar6 * 400;
  puVar9 = (uint *)(lVar6 + lVar19);
  lVar3 = param_3[1];
  puVar2 = (undefined8 *)(lVar19 + 8 + lVar6);
  *(undefined4 *)(puVar2 + -1) = *(undefined4 *)*param_3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 2;
  FUN_14019d794(puVar2);
  puVar2[3] = *(undefined8 *)(lVar3 + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar3 + 0x20);
  lVar6 = lVar6 + lVar19;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(undefined4 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)(lVar6 + 100) = 0;
  *(undefined8 *)(lVar6 + 0x70) = 0;
  *(undefined4 *)(lVar6 + 0x78) = 0;
  if ((undefined8 *)(lVar6 + 0x30) != (undefined8 *)(lVar3 + 0x28)) {
    *(undefined8 *)(puVar9 + 0xc) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    puVar9[0xe] = *(uint *)(lVar3 + 0x30);
    puVar9[0xf] = *(uint *)(lVar3 + 0x34);
    *(undefined8 *)(lVar3 + 0x30) = 0;
    if (*(longlong *)(lVar3 + 0x48) == 0) {
      uVar5 = *(uint *)(lVar3 + 0x3c);
      uVar18 = *(uint *)(lVar3 + 0x40);
      uVar11 = *(uint *)(lVar3 + 0x44);
      puVar9[0x10] = *(uint *)(lVar3 + 0x38);
      puVar9[0x11] = uVar5;
      puVar9[0x12] = uVar18;
      puVar9[0x13] = uVar11;
    }
    if (*(longlong *)(puVar9 + 0x14) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(puVar9 + 0x14) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar3 + 0x48) = 0;
    puVar9[0x16] = *(uint *)(lVar3 + 0x50);
    puVar9[0x17] = *(uint *)(lVar3 + 0x54);
    *(undefined8 *)(lVar3 + 0x50) = 0;
    puVar9[0x18] = *(uint *)(lVar3 + 0x58);
    puVar9[0x19] = *(uint *)(lVar3 + 0x5c);
    *(undefined8 *)(lVar3 + 0x58) = 0xffffffff;
  }
  if (*(longlong *)(lVar3 + 0x68) == 0) {
    puVar9[0x1a] = *(uint *)(lVar3 + 0x60);
  }
  if (*(longlong *)(puVar9 + 0x1c) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(puVar9 + 0x1c) = *(undefined8 *)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x68) = 0;
  puVar9[0x1e] = *(uint *)(lVar3 + 0x70);
  *(undefined4 *)(lVar3 + 0x70) = 0;
  puVar9[0x28] = 0;
  puVar9[0x29] = 0;
  puVar9[0x2a] = 0;
  puVar9[0x20] = 0;
  puVar9[0x21] = 0;
  puVar9[0x22] = 0;
  puVar9[0x23] = 0;
  puVar9[0x2b] = 0x80;
  puVar9[0x2c] = 0xffffffff;
  puVar9[0x2d] = 0;
  puVar9[0x30] = 0;
  puVar9[0x31] = 0;
  puVar9[0x32] = 0;
  if (puVar9 + 0x20 != (uint *)(lVar3 + 0x78)) {
    *(undefined8 *)(puVar9 + 0x20) = *(undefined8 *)(lVar3 + 0x78);
    *(undefined8 *)(lVar3 + 0x78) = 0;
    puVar9[0x22] = *(uint *)(lVar3 + 0x80);
    puVar9[0x23] = *(uint *)(lVar3 + 0x84);
    *(undefined8 *)(lVar3 + 0x80) = 0;
    if (*(longlong *)(lVar3 + 0x98) == 0) {
      uVar5 = *(uint *)(lVar3 + 0x8c);
      uVar18 = *(uint *)(lVar3 + 0x90);
      uVar11 = *(uint *)(lVar3 + 0x94);
      puVar9[0x24] = *(uint *)(lVar3 + 0x88);
      puVar9[0x25] = uVar5;
      puVar9[0x26] = uVar18;
      puVar9[0x27] = uVar11;
    }
    if (*(longlong *)(puVar9 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(puVar9 + 0x28) = *(undefined8 *)(lVar3 + 0x98);
    *(undefined8 *)(lVar3 + 0x98) = 0;
    puVar9[0x2a] = *(uint *)(lVar3 + 0xa0);
    puVar9[0x2b] = *(uint *)(lVar3 + 0xa4);
    *(undefined8 *)(lVar3 + 0xa0) = 0;
    puVar9[0x2c] = *(uint *)(lVar3 + 0xa8);
    puVar9[0x2d] = *(uint *)(lVar3 + 0xac);
    *(undefined8 *)(lVar3 + 0xa8) = 0xffffffff;
  }
  if (*(longlong *)(lVar3 + 0xb8) == 0) {
    puVar9[0x2e] = *(uint *)(lVar3 + 0xb0);
  }
  if (*(longlong *)(puVar9 + 0x30) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(puVar9 + 0x30) = *(undefined8 *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  puVar9[0x32] = *(uint *)(lVar3 + 0xc0);
  *(undefined4 *)(lVar3 + 0xc0) = 0;
  puVar9[0x3c] = 0;
  puVar9[0x3d] = 0;
  puVar9[0x3e] = 0;
  puVar9[0x34] = 0;
  puVar9[0x35] = 0;
  puVar9[0x36] = 0;
  puVar9[0x37] = 0;
  puVar9[0x3f] = 0x80;
  puVar9[0x40] = 0xffffffff;
  puVar9[0x41] = 0;
  puVar9[0x44] = 0;
  puVar9[0x45] = 0;
  puVar9[0x46] = 0;
  if (puVar9 + 0x34 != (uint *)(lVar3 + 200)) {
    *(undefined8 *)(puVar9 + 0x34) = *(undefined8 *)(lVar3 + 200);
    *(undefined8 *)(lVar3 + 200) = 0;
    puVar9[0x36] = *(uint *)(lVar3 + 0xd0);
    puVar9[0x37] = *(uint *)(lVar3 + 0xd4);
    *(undefined8 *)(lVar3 + 0xd0) = 0;
    if (*(longlong *)(lVar3 + 0xe8) == 0) {
      uVar5 = *(uint *)(lVar3 + 0xdc);
      uVar18 = *(uint *)(lVar3 + 0xe0);
      uVar11 = *(uint *)(lVar3 + 0xe4);
      puVar9[0x38] = *(uint *)(lVar3 + 0xd8);
      puVar9[0x39] = uVar5;
      puVar9[0x3a] = uVar18;
      puVar9[0x3b] = uVar11;
    }
    if (*(longlong *)(puVar9 + 0x3c) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(puVar9 + 0x3c) = *(undefined8 *)(lVar3 + 0xe8);
    *(undefined8 *)(lVar3 + 0xe8) = 0;
    puVar9[0x3e] = *(uint *)(lVar3 + 0xf0);
    puVar9[0x3f] = *(uint *)(lVar3 + 0xf4);
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    puVar9[0x40] = *(uint *)(lVar3 + 0xf8);
    puVar9[0x41] = *(uint *)(lVar3 + 0xfc);
    *(undefined8 *)(lVar3 + 0xf8) = 0xffffffff;
  }
  if (*(longlong *)(lVar3 + 0x108) == 0) {
    puVar9[0x42] = *(uint *)(lVar3 + 0x100);
  }
  if (*(longlong *)(puVar9 + 0x44) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(puVar9 + 0x44) = *(undefined8 *)(lVar3 + 0x108);
  *(undefined8 *)(lVar3 + 0x108) = 0;
  puVar9[0x46] = *(uint *)(lVar3 + 0x110);
  *(undefined4 *)(lVar3 + 0x110) = 0;
  FUN_1409e67a4(puVar9 + 0x48,lVar3 + 0x118);
  puVar9[0x5c] = *(uint *)(lVar3 + 0x168);
  *(undefined1 *)(puVar9 + 0x5d) = *(undefined1 *)(lVar3 + 0x16c);
  *(undefined8 *)(puVar9 + 0x5e) = *(undefined8 *)(lVar3 + 0x170);
  puVar9[0x60] = *(uint *)(lVar3 + 0x178);
  puVar9[0x62] = 0xffffffff;
  uVar5 = *puVar9;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar18 = 1;
  if (uVar11 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar10 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[8];
      }
      iVar20 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
      if (iVar20 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar20 * 400);
          if (*(uint *)(*param_1 + (longlong)iVar20 * 400) == uVar5) {
            FUN_1409e579e((longlong)_Dst + 8);
            memmove(_Dst,puVar9,0x188);
            FUN_147561a7e(param_1,iVar17);
            iVar17 = iVar20;
            goto LAB_1409e64c0;
          }
          iVar20 = *(int *)((longlong)_Dst + 0x188);
        } while (iVar20 != -1);
      }
    }
    if (3 < uVar11) {
      uVar15 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar18 = 1 << ((byte)lVar6 & 0x1f);
    }
  }
  if (((int)uVar11 < 1) || ((int)uVar18 <= (int)param_1[9])) {
    uVar5 = (int)param_1[9] - 1U & uVar5;
    puVar9[99] = uVar5;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar9[0x62] = *(uint *)((longlong)plVar10 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         iVar17;
    goto LAB_1409e64c0;
  }
  *(uint *)(param_1 + 9) = uVar18;
  plVar10 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar10,0,0,4);
    uVar18 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar18 == 1) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
LAB_1409e6309:
    uVar5 = 0;
    do {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar18 != uVar5);
  }
  else {
    if (uVar18 == 0) goto LAB_1409e64c0;
    FUN_1446efa72(plVar10,0,uVar18,4);
    if (0 < (int)uVar18) goto LAB_1409e6309;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar16 = 0;
    uVar15 = 1;
    iVar4 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = *puVar9;
    if (uVar5 == 0) {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      uVar16 = 0;
      uVar18 = iVar4 >> 5;
      if (iVar4 >> 5 < 1) {
        uVar18 = 0;
      }
      iVar8 = 0;
      do {
        if (uVar18 == uVar16) goto LAB_1409e64c0;
        iVar8 = iVar8 + 0x20;
        uVar5 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar16 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5);
    uVar21 = uVar15 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar4 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar4) {
      iVar4 = iVar20;
    }
  }
  if (iVar4 < iVar20) {
    uVar5 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar19 = (longlong)iVar4 * 400;
      uVar21 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar19);
      iVar20 = (int)uVar21;
      *(int *)(lVar6 + 0x18c + lVar19) = iVar20;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(undefined4 *)(lVar6 + 0x188 + lVar19) =
           *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(int *)((longlong)plVar10 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar5 = ~(uint)uVar15 & uVar5;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar4 = (int)uVar16;
      lVar6 = (longlong)iVar4;
      uVar18 = puVar9[lVar6] & uVar5;
      if (uVar18 == 0) {
        iVar12 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar12 = iVar20 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar4) {
          iVar13 = iVar4;
        }
        if (iVar12 <= iVar4) break;
        lVar19 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar18 = puVar9[lVar6 + lVar19 + 1];
          if (uVar18 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar13 - lVar6 == lVar19) goto LAB_1409e64c0;
        }
        uVar16 = (ulonglong)(iVar4 + (int)lVar19 + 1);
        uVar5 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar18 & uVar18);
      uVar21 = uVar15 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar4 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar20);
  }
LAB_1409e64c0:
  *param_2 = iVar17;
  return;
}



// FUNCTION 1409e67a4 FUN_1409e67a4 body=125 status=ok
// SIG undefined FUN_1409e67a4(void)

undefined8 * FUN_1409e67a4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1409e6822();
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



// FUNCTION 1409e6822 FUN_1409e6822 body=150 status=ok
// SIG undefined FUN_1409e6822(void)

longlong * FUN_1409e6822(longlong *param_1,longlong *param_2)

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



// FUNCTION 1409e68b8 FUN_1409e68b8 body=274 status=ok
// SIG undefined FUN_1409e68b8(void)

void FUN_1409e68b8(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
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
    uVar5 = lVar4 * 400;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xa3d70a3d70a3d71),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,400,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1409e69cc FUN_1409e69cc body=269 status=ok
// SIG undefined FUN_1409e69cc(void)

void FUN_1409e69cc(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1409e6ae2 FUN_1409e6ae2 body=277 status=ok
// SIG undefined FUN_1409e6ae2(void)

undefined8 * FUN_1409e6ae2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  memset(param_1,0,0x348);
  FUN_1409e6bf8(param_1);
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined2 *)(param_1 + 0x69) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x34a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  param_1[0x6e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x361) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0x10;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x7c] = DAT_14c8464e0;
  param_1[0x7d] = uVar1;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ba) = 1;
  return param_1;
}



// FUNCTION 1409e6bf8 FUN_1409e6bf8 body=902 status=ok
// SIG undefined FUN_1409e6bf8(void)

undefined8 * FUN_1409e6bf8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ab51200;
  param_1[3] = 0x4461000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_1 + 5,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
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
  *param_1 = &PTR_FUN_14b0238d0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x80 | 8;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xb38ec55900000000;
  param_1[0x37] = 0;
  param_1[0x38] = 0x4348000000000000;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = &PTR_FUN_14b023840;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = &PTR_FUN_14b023870;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x222) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x47] = &PTR_FUN_14b023870;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x272) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x51] = &PTR_FUN_14b0238b0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0x43b4000000000000;
  param_1[0x56] = &PTR_FUN_14affd590;
  *(undefined4 *)(param_1 + 0x57) = 1;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xf00d1e03;
  param_1[0x5c] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xaaad1010;
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xf;
  *(undefined4 *)((longlong)param_1 + 0x317) = 0;
  param_1[0x62] = 0;
  *(undefined1 *)((longlong)param_1 + 0x31b) = 1;
  *(undefined2 *)(param_1 + 0x68) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)((longlong)param_1 + 0x342) = 1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e6f80 FUN_1409e6f80 body=71 status=ok
// SIG undefined FUN_1409e6f80(void)

void FUN_1409e6f80(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_3;
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e6fc8 FUN_1409e6fc8 body=98 status=ok
// SIG undefined FUN_1409e6fc8(void)

void FUN_1409e6fc8(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  undefined4 *local_20;
  undefined1 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_21 = 1;
  local_28 = *param_3;
  local_20 = &local_28;
  FUN_1409e7090(*param_1 + 0x138,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e702c FUN_1409e702c body=98 status=ok
// SIG undefined FUN_1409e702c(void)

void FUN_1409e702c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  undefined4 *local_20;
  undefined1 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_21 = 0;
  local_28 = *param_3;
  local_20 = &local_28;
  FUN_1409e7090(*param_1 + 0x138,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e7090 FUN_1409e7090 body=297 status=ok
// SIG undefined FUN_1409e7090(void)

undefined4 * FUN_1409e7090(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409e7252(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_1409e71ba(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145cff422(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e71ba FUN_1409e71ba body=152 status=ok
// SIG undefined FUN_1409e71ba(void)

void FUN_1409e71ba(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_145a27ae0(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_1409e7228;
    }
  }
  uVar2 = 0;
LAB_1409e7228:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1409e7252 FUN_1409e7252 body=485 status=ok
// SIG undefined FUN_1409e7252(void)

int * FUN_1409e7252(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar11);
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



// FUNCTION 1409e7438 FUN_1409e7438 body=335 status=ok
// SIG undefined FUN_1409e7438(void)

void FUN_1409e7438(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 == DVar3) goto LAB_1409e74e0;
      }
      FUN_1446ddc76(&local_28,"CommonInput",1);
      uVar5 = FUN_144a52528();
      plVar6 = (longlong *)FUN_1401e3324(uVar5,local_28);
      goto LAB_1409e74a9;
    }
  }
LAB_1409e74e0:
  local_20 = "CommonInput";
  local_18 = 0xb;
  local_14 = 0;
  uVar4 = FUN_14001a6c0(&local_20,1);
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
  plVar6 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_20,1);
LAB_1409e74a9:
  (**(code **)(*plVar6 + 0x40))(plVar6);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e759c FUN_1409e759c body=40 status=ok
// SIG undefined FUN_1409e759c(void)

undefined8 FUN_1409e759c(undefined8 param_1,int param_2)

{
  FUN_1409e75c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409e75c4 FUN_1409e75c4 body=511 status=ok
// SIG undefined FUN_1409e75c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409e75c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b1a4590;
  plVar3 = (longlong *)param_1[0x30];
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
  FUN_1447cd778(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x29] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)((longlong)param_1 + 0x164) != 0) {
    FUN_140115c12(param_1 + 0x2b,0);
  }
  param_1[0x2a] = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x22] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) != 0) {
    FUN_140115c12(param_1 + 0x24,0);
  }
  param_1[0x23] = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0001409e7759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1409e77c4 FUN_1409e77c4 body=2972 status=ok
// SIG undefined FUN_1409e77c4(void)

longlong *
FUN_1409e77c4(longlong *param_1,longlong param_2,longlong param_3,int param_4,code **param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  longlong *plVar13;
  uint *puVar14;
  code **ppcVar15;
  longlong *plVar16;
  code *pcVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_168 [32];
  code **local_148;
  undefined1 local_140;
  int local_12c;
  longlong *local_128;
  longlong local_120;
  code *local_118;
  longlong *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  longlong *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_148 = param_5;
  local_12c = param_4;
  FUN_1436bfd3e(param_1);
  *param_1 = (longlong)&PTR_FUN_14aa92ae0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  param_1[0x29] = (longlong)&PTR_FUN_14a3d4720;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = (longlong)&PTR_FUN_14a3d4750;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = -1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x196) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19e) = 1;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1af) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 0xff;
  param_1[0x3d] = -0x100000000;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x245) = 0;
  bVar23 = true;
  local_120 = 0;
  if (*(longlong **)(param_2 + 0x8c0) == (longlong *)0x0) goto LAB_1409e7914;
  cVar5 = (**(code **)(**(longlong **)(param_2 + 0x8c0) + 0x48))();
  if ((cVar5 == '\0') ||
     (lVar20 = *(longlong *)(param_2 + 0x8c0), *(longlong *)(lVar20 + 0x40) != param_3)) {
    local_120 = 0;
    goto LAB_1409e7914;
  }
  local_120 = 0;
  if ((lVar20 == 0) || (*(int *)(lVar20 + 0x60) != local_12c)) goto LAB_1409e7914;
  local_108 = (longlong *)0x0;
  local_f8 = &PTR_LAB_14aa98780;
  uStack_f0 = param_1;
  local_e8 = lVar20;
  local_118 = (code *)&LAB_1436f26f8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar23 = DAT_14cb00c10 == '\0';
    if (bVar23) {
      DAT_14cb00c10 = '\x01';
    }
    UNLOCK();
    if (!bVar23) {
      FUN_1447d2058(&DAT_14cb00c10);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cb00c08) {
      local_98[0] = local_118;
      local_88 = local_108;
      local_108 = (longlong *)0x0;
      local_78 = (undefined4)local_f8;
      uStack_74 = local_f8._4_4_;
      uStack_70 = (undefined4)uStack_f0;
      uStack_6c = uStack_f0._4_4_;
      local_68 = (undefined4)local_e8;
      uStack_64 = local_e8._4_4_;
      uStack_60 = uStack_e0;
      uStack_5c = uStack_dc;
      if (local_118 != (code *)0x0) {
        local_118 = (code *)0x0;
      }
      local_58 = 1;
      FUN_1401a96bc(&DAT_14cb00c08,local_98,L"ReleaseSkeletalMeshSkinCacheResources",&DAT_14cb08338)
      ;
LAB_1409e7cd5:
      (*(code *)(&PTR_LAB_14a3931f0)[local_58])();
      bVar23 = false;
    }
    else {
      if (DAT_14cb00c18 != 0) {
        local_98[0] = local_118;
        local_88 = local_108;
        local_108 = (longlong *)0x0;
        local_78 = (undefined4)local_f8;
        uStack_74 = local_f8._4_4_;
        uStack_70 = (undefined4)uStack_f0;
        uStack_6c = uStack_f0._4_4_;
        local_68 = (undefined4)local_e8;
        uStack_64 = local_e8._4_4_;
        uStack_60 = uStack_e0;
        uStack_5c = uStack_dc;
        if (local_118 != (code *)0x0) {
          local_118 = (code *)0x0;
        }
        local_58 = 1;
        FUN_1401a98c8(&DAT_14cb00c08,local_98,L"ReleaseSkeletalMeshSkinCacheResources",
                      &DAT_14cb08338);
        goto LAB_1409e7cd5;
      }
      bVar23 = true;
    }
    LOCK();
    bVar24 = DAT_14cb00c10 == '\x01';
    if (bVar24) {
      DAT_14cb00c10 = '\0';
    }
    UNLOCK();
    if (!bVar24) {
      FUN_14008cdb0(&DAT_14cb00c10);
    }
    if (bVar23) {
      local_d8 = local_118;
      local_c8 = local_108;
      uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
      local_b8 = local_f8;
      uStack_b0 = uStack_f0;
      local_a8 = local_e8;
      if (local_118 != (code *)0x0) goto LAB_1409e7d51;
      pcVar17 = (code *)0x0;
      goto LAB_1409e7d5d;
    }
  }
  else {
    local_d8 = (code *)&LAB_1436f26f8;
    local_c8 = (longlong *)0x0;
    uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
    local_b8 = &PTR_LAB_14aa98780;
    uStack_b0 = param_1;
    local_a8 = lVar20;
LAB_1409e7d51:
    local_118 = (code *)0x0;
    pcVar17 = local_d8;
LAB_1409e7d5d:
    local_108 = (longlong *)0x0;
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar19 = *(int *)(lVar9 + 0xc60);
    local_f8 = local_b8;
    uStack_f0 = uStack_b0;
    local_e8 = local_a8;
    if (DAT_14c86a9fc == 0) {
      if (iVar19 != 2) {
        if (iVar19 != 1) goto LAB_1409e7d7f;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        pcVar17 = local_d8;
        if (DVar7 == DVar8) goto LAB_1409e7d84;
        goto LAB_1409e7de2;
      }
LAB_1409e7d84:
      plVar13 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar13 = &local_b8;
      }
      uVar10 = (**(code **)(*plVar13 + 8))();
      (*pcVar17)(uVar10,&DAT_14ca85100);
    }
    else {
LAB_1409e7d7f:
      if (iVar19 == 0x10) goto LAB_1409e7d84;
LAB_1409e7de2:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (iVar19 = *(int *)(lVar9 + 0xc60), iVar19 != 2)) {
          if (iVar19 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            if (DVar7 == DVar8) goto LAB_1409e8315;
          }
          goto LAB_1409e7e13;
        }
LAB_1409e8315:
        pcVar17 = local_d8;
        plVar13 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar13 = &local_b8;
        }
        uVar10 = (**(code **)(*plVar13 + 8))();
        (*pcVar17)(uVar10,&DAT_14ca85100);
      }
      else {
LAB_1409e7e13:
        if (DAT_14ca9a43c == 0) {
          puVar1 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar12 = (uint *)*puVar1;
          if (puVar12 != (uint *)0x0) goto LAB_1409e7fe4;
          while( true ) {
            uVar6 = *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318);
            if ((uVar6 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar6 | 1;
              __tlregdtor(&LAB_1436ef87f);
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
            *puVar1 = puVar11;
            FUN_140217a48(puVar1);
            puVar12 = (uint *)*puVar1;
LAB_1409e7fe4:
            puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
            puVar14 = (uint *)(puVar18 + 0x1e);
            uVar6 = puVar12[0x12];
            if (puVar14 <= puVar12 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar3 = *puVar12;
              *puVar12 = *puVar12 + uVar6 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar6) != 0xffffffff) break;
              puVar12 = (uint *)*puVar1;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *puVar1 = puVar12;
              puVar18 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
              puVar14 = (uint *)(puVar18 + 0x1e);
              uVar6 = 0;
              if (puVar14 <= puVar12 + 0x4000) {
                uVar6 = 1;
                goto LAB_1409e8068;
              }
            }
          }
          uVar6 = uVar6 + 1;
LAB_1409e8068:
          *(uint **)(puVar12 + 0x10) = puVar14;
          puVar12[0x12] = uVar6;
          FUN_1447247dc(puVar18,0);
          *puVar18 = &PTR_FUN_14aa98770;
          puVar18[0x16] = local_d8;
          puVar18[0x18] = local_c8;
          local_c8 = (longlong *)0x0;
          *(undefined4 *)(puVar18 + 0x1c) = (undefined4)local_a8;
          *(undefined4 *)((longlong)puVar18 + 0xe4) = local_a8._4_4_;
          *(undefined4 *)(puVar18 + 0x1d) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_a0._4_4_;
          *(undefined4 *)(puVar18 + 0x1a) = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar18 + 0xd4) = local_b8._4_4_;
          *(undefined4 *)(puVar18 + 0x1b) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_b0._4_4_;
          if (local_d8 != (code *)0x0) {
            local_d8 = (code *)0x0;
          }
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar6 = DAT_14c7585c8 >> 10 & 3;
            iVar19 = 0;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
              uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
              iVar19 = 0;
            }
            else {
              uVar21 = 2;
            }
          }
          else {
            iVar19 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar21 = 5;
          }
          if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
          }
          puVar18[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar18[9] = puVar18;
          puVar18[10] = puVar18;
          lVar9 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar9 == 0) {
            uVar4 = 1;
            if ((char)uVar21 != '\x06') {
              uVar4 = uVar21;
            }
            uVar21 = uVar4;
            uVar10 = 0;
          }
          else {
            if ((char)uVar21 == '\x06') {
              uVar21 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
            }
            uVar10 = *(undefined8 *)(lVar9 + 0x30);
          }
          puVar18[0xf] = uVar10;
          puVar18[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar18 + 0x1c) = iVar19;
          if (puVar18 == (undefined8 *)0x0) {
            local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
            UNLOCK();
            local_98[0] = (code *)CONCAT71(local_98[0]._1_7_,1);
            FUN_1447439e4(puVar18);
            LOCK();
            piVar2 = (int *)(puVar18 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar18)(puVar18,1);
            }
          }
        }
        else {
          local_98[0] = (code *)0x0;
          local_88 = (longlong *)FUN_14001cc68(0x50,0x10);
          *local_88 = (longlong)&PTR_LAB_14aa98750;
          local_88[2] = (longlong)local_d8;
          local_88[4] = (longlong)local_c8;
          local_c8 = (longlong *)0x0;
          *(undefined4 *)(local_88 + 8) = (undefined4)local_a8;
          *(undefined4 *)((longlong)local_88 + 0x44) = local_a8._4_4_;
          *(undefined4 *)(local_88 + 9) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)local_88 + 0x4c) = uStack_a0._4_4_;
          *(undefined4 *)(local_88 + 6) = (undefined4)local_b8;
          *(undefined4 *)((longlong)local_88 + 0x34) = local_b8._4_4_;
          *(undefined4 *)(local_88 + 7) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)local_88 + 0x3c) = uStack_b0._4_4_;
          if (local_d8 != (code *)0x0) {
            local_d8 = (code *)0x0;
          }
          if (local_88 != (longlong *)&DAT_fffffffffffffff0) {
            local_98[0] = FUN_1436f24a6;
          }
          local_148 = local_98;
          FUN_14005a792(&DAT_14ca9a440,L"ReleaseSkeletalMeshSkinCacheResources",&DAT_14cb08338);
          if (local_98[0] != (code *)0x0) {
            plVar13 = local_88;
            if (local_88 == (longlong *)0x0) {
              plVar13 = (longlong *)&local_78;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
        }
      }
    }
    if (local_d8 != (code *)0x0) {
      plVar13 = &local_b8;
      if (local_c8 != (longlong *)0x0) {
        plVar13 = local_c8;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (local_118 != (code *)0x0) {
    plVar13 = &local_f8;
    if (local_108 != (longlong *)0x0) {
      plVar13 = local_108;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  bVar23 = false;
  local_120 = lVar20;
LAB_1409e7914:
  iVar19 = *(int *)(param_1[8] + 8);
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar19);
  }
  plVar13 = param_1 + 0x46;
  FUN_1402c6b3e(param_1[0x46],(int)param_1[0x47]);
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (*(int *)((longlong)param_1 + 0x23c) != iVar19) {
    FUN_1417f0cc2(plVar13,iVar19);
  }
  plVar16 = (longlong *)param_1[8];
  local_128 = plVar13;
  if (0 < (int)plVar16[1]) {
    lVar20 = 2;
    uVar21 = 0;
    do {
      if (bVar23) {
        ppcVar15 = (code **)0x0;
      }
      else {
        ppcVar15 = *(code ***)(*(longlong *)(local_120 + 0x230) + lVar20 * 8);
      }
      if (param_2 == 0) {
LAB_1409e79cd:
        uVar22 = 0;
      }
      else if (((*(int *)(param_2 + 0x6b8) <= (int)uVar21) ||
               (lVar9 = (longlong)*(char *)(*(longlong *)(param_2 + 0x6b0) + uVar21), lVar9 == -1))
              || (uVar22 = 2, *(longlong *)(*(longlong *)(param_2 + 0x6a0) + lVar9 * 8) == 0)) {
        if ((DAT_14c761560 == 0) ||
           (cVar5 = FUN_1401d3bb0(param_2,uVar21 & 0xffffffff), cVar5 == '\0')) goto LAB_1409e79cd;
        uVar22 = 1;
        if (local_12c == 1) {
          uVar22 = (uint)(*(int *)(*(longlong *)(*plVar16 + uVar21 * 8) + 0xec) * 3) < 0x10000;
        }
      }
      iVar19 = (int)param_1[0x47];
      *(uint *)(param_1 + 0x47) = iVar19 + 1U;
      if (*(uint *)((longlong)param_1 + 0x23c) < iVar19 + 1U) {
        FUN_147d2e304(local_128,iVar19);
      }
      local_148 = ppcVar15;
      local_140 = uVar22;
      FUN_1448d269e((longlong)iVar19 * 0xa0 + param_1[0x46],param_1[8],uVar21 & 0xffffffff,local_12c
                   );
      uVar21 = uVar21 + 1;
      plVar16 = (longlong *)param_1[8];
      lVar20 = lVar20 + 0x14;
    } while ((longlong)uVar21 < (longlong)(int)plVar16[1]);
  }
  (**(code **)(*param_1 + 8))(param_1,param_2);
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0x218);
  }
  lVar20 = (**(code **)(*plVar13 + 0x4b0))();
  param_1[0x45] = lVar20;
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e8362 FUN_1409e8362 body=187 status=ok
// SIG undefined FUN_1409e8362(void)

void FUN_1409e8362(longlong *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (((param_2 == '\x03') && ((char)param_1[0x2a7] == '\x03')) &&
     ((bVar1 = *(byte *)(param_1 + 0x220), bVar1 - 1 < 2 || (bVar1 == 5)))) {
    *(byte *)(param_1 + 0x2a7) = bVar1;
    FUN_14035beba(param_1);
  }
  FUN_1409e8446(param_1);
  param_1[0x2e5] = DAT_14c872be0;
  uVar3 = (**(code **)(*param_1 + 0xbf0))(param_1);
  (**(code **)(*param_1 + 0x7c0))(param_1,uVar3);
  if ((((char)param_1[0x359] != '\0') ||
      (bVar1 = *(char *)((longlong)param_1 + 0x1539) - 1, 3 < bVar1)) ||
     (cVar2 = (**(code **)(param_1[0x2f] + *(longlong *)(&DAT_14aba0d38 + (ulonglong)bVar1 * 8)))
                        (param_1 + 0x2f), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0x33d) = 0;
  }
  return;
}



// FUNCTION 1409e8446 FUN_1409e8446 body=235 status=ok
// SIG undefined FUN_1409e8446(void)

void FUN_1409e8446(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined7 uVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb1ccc4) && (FUN_144b3d300(&DAT_14cb1ccc4), DAT_14cb1ccc4 == -1)) {
    FUN_1446f470e(&DAT_14cb1ccbc,L"Navigation",1);
    _Init_thread_footer(&DAT_14cb1ccc4);
  }
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if ((char)param_1[0x359] == '\0') {
    plVar1 = param_1 + 0x2f;
    cVar2 = (**(code **)(param_1[0x2f] + 0xe0))(plVar1);
    if ((cVar2 != '\0') || (cVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1), cVar2 != '\0')) {
      uVar3 = CONCAT71(uVar4,*(char *)((longlong)param_1 + 0x1539) == '\0');
    }
  }
  (**(code **)(*param_1 + 0x3b0))(param_1,uVar3 & 0xffffffff);
  if (param_1[0x29d] == 0) {
    return;
  }
  FUN_1409e8532(param_1[0x29d],&DAT_14cb1ccbc,(uint)uVar3 ^ 1);
  return;
}



// FUNCTION 1409e8532 FUN_1409e8532 body=88 status=ok
// SIG undefined FUN_1409e8532(void)

void FUN_1409e8532(longlong *param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0xec);
  if (param_3 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c(param_1 + 0xec);
  }
  bVar2 = *(byte *)(param_1 + 0xec);
  if (bVar1 == bVar2) {
    return;
  }
  FUN_1409e8a6c(param_1,bVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x0001409e857c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8e0))(param_1);
  return;
}



// FUNCTION 1409e858a FUN_1409e858a body=319 status=ok
// SIG undefined FUN_1409e858a(void)

void FUN_1409e858a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x14e8);
  if (lVar1 == 0) goto LAB_1409e85e3;
  cVar2 = (char)param_2;
  if (((longlong)DAT_14cb1ccb8 < 0) || (*(int *)(lVar1 + 0x7b8) <= DAT_14cb1ccb8)) {
    if (cVar2 == '\0') goto LAB_1409e85e3;
LAB_1409e860d:
    local_50 = &local_38;
    local_38 = 0x500000000;
    local_3c = 1;
    local_48 = 2;
    local_68 = 0;
    FUN_1409e86ca(lVar1 + 0x788,&DAT_14cb1ccb0,*(undefined8 *)(param_1 + 0x118));
    local_58 = 1;
    local_68 = 1;
    local_60 = &local_3c;
    FUN_1409e86ca(*(longlong *)(param_1 + 0x14e8) + 0x788,&DAT_14cb1ccb0,
                  *(undefined8 *)(param_1 + 0x118));
    FUN_1409e8b8e(param_1);
    lVar1 = *(longlong *)(param_1 + 0x14e8);
  }
  else {
    if ((*(longlong *)(*(longlong *)(lVar1 + 0x7b0) + (longlong)DAT_14cb1ccb8 * 8) != 0) ==
        (bool)cVar2) goto LAB_1409e85e3;
    if (cVar2 != '\0') goto LAB_1409e860d;
  }
  FUN_1409e8d8c(lVar1 + 0x788,&DAT_14cb1ccb0,param_2,&DAT_14c9a8414);
LAB_1409e85e3:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e86ca FUN_1409e86ca body=158 status=ok
// SIG undefined FUN_1409e86ca(void)

void FUN_1409e86ca(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_1409e8768(param_1,param_3);
    iVar3 = *(int *)(param_2 + 8);
    lVar4 = (longlong)iVar3 * 0x24 + *(longlong *)(lVar2 + 0x28);
    lVar2 = param_4[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_4;
      lVar5 = 0;
      do {
        uVar6 = (ulonglong)*(uint *)(lVar1 + lVar5);
        if ((uVar6 < 0x20) && (*(byte *)(lVar4 + 4 + uVar6) != param_5)) {
          *(char *)(lVar4 + 4 + uVar6) = (char)param_5;
        }
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar5);
      iVar3 = *(int *)(param_2 + 8);
    }
    if (*(int *)(param_1 + 0x38) == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001409e8765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x948))(param_3,lVar4 + 4);
      return;
    }
  }
  return;
}



// FUNCTION 1409e8768 FUN_1409e8768 body=480 status=ok
// SIG undefined FUN_1409e8768(void)

undefined4 * FUN_1409e8768(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_68 [32];
  uint local_48;
  uint uStack_44;
  uint *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_44 = 0;
  if (param_2 == (longlong *)0x0) {
    local_48 = 0;
    uVar11 = 0;
  }
  else {
    local_48 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((local_48 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    uVar11 = *(uint *)(lVar19 + 0x10);
    if (*(uint *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
      }
      LOCK();
      uVar11 = *(uint *)(lVar19 + 0x10);
      bVar20 = uVar11 == 0;
      if (bVar20) {
        *(uint *)(lVar19 + 0x10) = uVar17;
        uVar11 = 0;
      }
      UNLOCK();
      if (bVar20) {
        uVar11 = uVar17;
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  local_40 = (uint *)CONCAT44(uVar11,local_48);
  uStack_44 = uVar11;
  iVar12 = FUN_1409e894a(plVar1,uVar11 ^ local_48);
  if (iVar12 != -1) {
    if (*plVar1 + (longlong)iVar12 * 0x48 != 0) {
      puVar18 = (undefined4 *)(*plVar1 + (longlong)iVar12 * 0x48 + 8);
      goto LAB_1409e8816;
    }
  }
  local_40 = &local_48;
  FUN_1409e925a(plVar1,&local_34,&local_40,0);
  lVar14 = (longlong)local_34;
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar19 = lVar3 + lVar14 * 0x48;
  puVar18 = (undefined4 *)(lVar19 + 8);
  uVar13 = (**(code **)(*param_2 + 0x570))(param_2);
  *puVar18 = uVar13;
  puVar15 = (undefined4 *)(**(code **)(*param_2 + 0x558))(param_2);
  uVar13 = puVar15[1];
  uVar4 = puVar15[2];
  uVar5 = puVar15[3];
  uVar6 = puVar15[4];
  uVar7 = puVar15[5];
  uVar8 = puVar15[6];
  uVar9 = puVar15[7];
  *(undefined4 *)(lVar19 + 0xc) = *puVar15;
  *(undefined4 *)(lVar19 + 0x10) = uVar13;
  *(undefined4 *)(lVar19 + 0x14) = uVar4;
  *(undefined4 *)(lVar19 + 0x18) = uVar5;
  *(undefined4 *)(lVar19 + 0x1c) = uVar6;
  *(undefined4 *)(lVar19 + 0x20) = uVar7;
  *(undefined4 *)(lVar19 + 0x24) = uVar8;
  *(undefined4 *)(lVar19 + 0x28) = uVar9;
  lVar16 = lVar3 + lVar14 * 0x48;
  FUN_1409e8a00(lVar16 + 0x30);
  lVar16 = (longlong)*(int *)(lVar16 + 0x38);
  if (lVar16 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x30 + lVar14 * 0x48);
    lVar14 = 0;
    do {
      *(undefined4 *)(lVar3 + 0x20 + lVar14) = *(undefined4 *)(lVar19 + 0x28);
      uVar13 = *puVar18;
      uVar4 = *(undefined4 *)(lVar19 + 0xc);
      uVar5 = *(undefined4 *)(lVar19 + 0x10);
      uVar6 = *(undefined4 *)(lVar19 + 0x14);
      uVar10 = *(undefined8 *)(lVar19 + 0x20);
      puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar14);
      *puVar2 = *(undefined8 *)(lVar19 + 0x18);
      puVar2[1] = uVar10;
      puVar15 = (undefined4 *)(lVar3 + lVar14);
      *puVar15 = uVar13;
      puVar15[1] = uVar4;
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      lVar14 = lVar14 + 0x24;
    } while (lVar16 * 0x24 != lVar14);
  }
LAB_1409e8816:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar18;
}



// FUNCTION 1409e894a FUN_1409e894a body=180 status=ok
// SIG undefined FUN_1409e894a(void)

int FUN_1409e894a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x48);
        cVar1 = FUN_140206d5c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1409e89d8;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x40 + (longlong)iVar4 * 0x48);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1409e89d8:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e8a00 FUN_1409e8a00 body=69 status=ok
// SIG undefined FUN_1409e8a00(void)

int FUN_1409e8a00(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1409e8c1a(param_1,iVar1);
  }
  FUN_1409e8a45((longlong)iVar1 * 0x24 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1409e8a45 FUN_1409e8a45 body=38 status=ok
// SIG undefined FUN_1409e8a45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409e8a45(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 4);
    do {
      uVar1 = uRam000000014cad0ee8;
      puVar2[2] = _DAT_14cad0ee0;
      puVar2[3] = uVar1;
      uVar1 = _DAT_14cad0ed8;
      *puVar2 = _DAT_14cad0ed0;
      puVar2[1] = uVar1;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0x24);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409e8a6c FUN_1409e8a6c body=118 status=ok
// SIG undefined FUN_1409e8a6c(void)

void FUN_1409e8a6c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1409e8ae2();
  lVar2 = *(longlong *)(param_1 + 0x430);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x1e8) + 0x40))(lVar2 + 0x1e8);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x430) + 0x1e8) + 0x30))
                        (*(longlong *)(param_1 + 0x430) + 0x1e8);
      if (lVar2 != 0) {
        lVar3 = FUN_1447210f0(param_1);
        *(float *)(lVar2 + 8) = (float)*(double *)(lVar3 + 0x6d0);
      }
    }
  }
  return;
}



// FUNCTION 1409e8ae2 FUN_1409e8ae2 body=171 status=ok
// SIG undefined FUN_1409e8ae2(void)

void FUN_1409e8ae2(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xef | param_2 << 4;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (0xfffffffeffffffff < uVar1) {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 1;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
    return;
  }
  plVar5 = (longlong *)0x0;
  if (DAT_14c9980d8 != 0) {
    plVar5 = DAT_14c9980d0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001409e8b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0);
  return;
}



// FUNCTION 1409e8b8e FUN_1409e8b8e body=139 status=ok
// SIG undefined FUN_1409e8b8e(void)

void FUN_1409e8b8e(longlong param_1)

{
  undefined1 auStack_48 [32];
  uint local_28;
  undefined4 *local_20;
  undefined4 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x14e8) != 0) {
    local_c = 7;
    if (*(longlong *)(param_1 + 0x13c8) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = (uint)*(byte *)(*(longlong *)(param_1 + 0x13c8) + 0x56);
    }
    local_20 = &local_c;
    local_18 = 1;
    FUN_1409e86ca(*(longlong *)(param_1 + 0x14e8) + 0x788,&DAT_14cb1ccb0,
                  *(undefined8 *)(param_1 + 0x118));
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e8c1a FUN_1409e8c1a body=370 status=ok
// SIG undefined FUN_1409e8c1a(void)

void FUN_1409e8c1a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x24;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409e8ca3;
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
LAB_1409e8ca3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x24)) {
    uVar7 = uVar5 / 0x24 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x24,4);
  return;
}



// FUNCTION 1409e8d8c FUN_1409e8d8c body=1228 status=ok
// SIG undefined FUN_1409e8d8c(void)

void FUN_1409e8d8c(char *param_1,longlong param_2,char param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  undefined1 auStack_398 [40];
  int *local_370;
  int local_364;
  char *local_360;
  uint *local_358;
  ulonglong local_350;
  ulonglong local_348;
  ulonglong local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined1 local_318 [704];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  lVar27 = *param_4;
  if (lVar27 != 0 && *param_1 == '\0') {
    lVar19 = (longlong)*(int *)(param_2 + 8);
    if ((-1 < lVar19) && (*(int *)(param_2 + 8) < *(int *)(param_1 + 0x30))) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar5 = *(longlong *)(lVar4 + lVar19 * 8);
      if ((lVar5 == 0) == (bool)param_3) {
        if (param_3 == '\0') {
          if (lVar5 != lVar27) goto LAB_1409e8de6;
          *(undefined8 *)(lVar4 + lVar19 * 8) = 0;
          uVar26 = *(uint *)(param_1 + 0x38);
          if (*(int *)(param_2 + 8) < (int)uVar26) goto LAB_1409e8de6;
          if (-1 < (int)uVar26) {
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar26 * 8) != 0) break;
              *(uint *)(param_1 + 0x38) = uVar26 - 1;
              bVar7 = 0 < (int)uVar26;
              uVar26 = uVar26 - 1;
            } while (bVar7);
          }
        }
        else {
          *(longlong *)(lVar4 + lVar19 * 8) = lVar27;
          if (*(int *)(param_2 + 8) < *(int *)(param_1 + 0x38)) goto LAB_1409e8de6;
          *(int *)(param_1 + 0x38) = *(int *)(param_2 + 8);
        }
        local_370 = (int *)(param_1 + 0x38);
        local_58 = (undefined1 *)0x0;
        local_50 = 0x1000000000;
        puVar21 = (uint *)(param_1 + 0x50);
        uVar26 = *(uint *)(param_1 + 0x68);
        uVar29 = (ulonglong)uVar26;
        if (uVar26 == 0) {
          uVar23 = 1;
          uVar25 = 0;
          iVar28 = 0;
          uVar14 = 0;
        }
        else {
          puVar15 = *(uint **)(param_1 + 0x60);
          if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
            puVar15 = puVar21;
          }
          uVar14 = *puVar15;
          if (uVar14 == 0) {
            iVar28 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar28 = uVar26 - 1;
            }
            uVar25 = 0;
            uVar23 = (ulonglong)(uint)(iVar28 >> 5);
            if (iVar28 >> 5 < 1) {
              uVar23 = uVar25;
            }
            iVar28 = 0;
            do {
              if (uVar23 == uVar25) goto LAB_1409e8de6;
              iVar28 = iVar28 + 0x20;
              uVar14 = puVar15[uVar25 + 1];
              uVar25 = uVar25 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar25 = 0;
            iVar28 = 0;
          }
          uVar23 = (ulonglong)(-uVar14 & uVar14);
          uVar1 = uVar23 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          uVar14 = (iVar28 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if ((int)uVar26 <= (int)uVar14) {
            uVar14 = uVar26;
          }
        }
        if (uVar14 != uVar26) {
          uVar26 = 0xffffffff;
          local_360 = param_1;
          local_358 = puVar21;
          local_348 = uVar29;
          do {
            uVar1 = local_50;
            puVar15 = (uint *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)uVar14 * 0x48);
            lVar27 = *(longlong *)(param_1 + 0x40) + (longlong)(int)uVar14 * 0x48;
            local_340 = uVar25;
            if ((((*(int *)(lVar27 + 4) != 0) && (uVar14 = *puVar15, -1 < (int)uVar14)) &&
                ((int)uVar14 < DAT_14c9647dc)) &&
               (((plVar20 = (longlong *)
                            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
                 plVar20 != (longlong *)0x0 && ((int)plVar20[2] == *(int *)(lVar27 + 4))) &&
                (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && (*plVar20 != 0)))))) {
              puVar16 = (undefined4 *)(lVar27 + 8);
              if ((longlong)*local_370 != -1) {
                puVar16 = (undefined4 *)((longlong)*local_370 * 0x24 + *(longlong *)(puVar15 + 0xc))
                ;
              }
              uVar6 = *(undefined8 *)puVar15;
              uVar2 = *puVar16;
              local_328 = *(undefined8 *)(puVar16 + 5);
              uStack_320 = *(undefined8 *)(puVar16 + 7);
              local_338 = puVar16[1];
              uStack_334 = puVar16[2];
              uStack_330 = puVar16[3];
              uStack_32c = puVar16[4];
              lVar19 = (longlong)(int)local_50;
              uVar14 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar14);
              local_364 = iVar28;
              if (local_50._4_4_ < uVar14) {
                local_350 = uVar23;
                FUN_142b44d30(local_318,uVar1 & 0xffffffff);
                uVar23 = local_350;
                param_1 = local_360;
              }
              puVar22 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar22 = local_318;
              }
              lVar19 = lVar19 * 0x2c;
              *(undefined8 *)(puVar22 + lVar19) = uVar6;
              *(undefined4 *)(puVar22 + lVar19 + 8) = uVar2;
              puVar16 = (undefined4 *)(puVar22 + lVar19 + 0xc);
              *puVar16 = local_338;
              puVar16[1] = uStack_334;
              puVar16[2] = uStack_330;
              puVar16[3] = uStack_32c;
              puVar16 = (undefined4 *)(puVar22 + lVar19 + 0x1c);
              *puVar16 = (undefined4)local_328;
              puVar16[1] = local_328._4_4_;
              puVar16[2] = (undefined4)uStack_320;
              puVar16[3] = uStack_320._4_4_;
              puVar21 = local_358;
              uVar29 = local_348;
              iVar28 = local_364;
            }
            if (param_3 == '\0') {
              lVar19 = (longlong)*(int *)(param_2 + 8);
              if ((-1 < lVar19) && (*(int *)(param_2 + 8) < (int)puVar15[0xe])) {
                lVar4 = *(longlong *)(puVar15 + 0xc);
                *(undefined4 *)(lVar4 + 0x20 + lVar19 * 0x24) = *(undefined4 *)(lVar27 + 0x28);
                uVar2 = *(undefined4 *)(lVar27 + 8);
                uVar8 = *(undefined4 *)(lVar27 + 0xc);
                uVar9 = *(undefined4 *)(lVar27 + 0x10);
                uVar10 = *(undefined4 *)(lVar27 + 0x14);
                uVar11 = *(undefined4 *)(lVar27 + 0x1c);
                uVar12 = *(undefined4 *)(lVar27 + 0x20);
                uVar13 = *(undefined4 *)(lVar27 + 0x24);
                puVar16 = (undefined4 *)(lVar4 + 0x10 + lVar19 * 0x24);
                *puVar16 = *(undefined4 *)(lVar27 + 0x18);
                puVar16[1] = uVar11;
                puVar16[2] = uVar12;
                puVar16[3] = uVar13;
                puVar16 = (undefined4 *)(lVar4 + lVar19 * 0x24);
                *puVar16 = uVar2;
                puVar16[1] = uVar8;
                puVar16[2] = uVar9;
                puVar16[3] = uVar10;
              }
            }
            uVar26 = uVar26 & ~(uint)uVar23;
            puVar15 = *(uint **)(param_1 + 0x60);
            if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
              puVar15 = puVar21;
            }
            uVar3 = *(uint *)(param_1 + 0x68);
            iVar24 = (int)local_340;
            lVar27 = (longlong)iVar24;
            uVar14 = puVar15[lVar27] & uVar26;
            uVar25 = local_340;
            if (uVar14 == 0) {
              iVar17 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar17 = uVar3 - 1;
              }
              iVar17 = iVar17 >> 5;
              iVar28 = iVar28 + 0x20;
              iVar18 = iVar17;
              if (iVar17 < iVar24) {
                iVar18 = iVar24;
              }
              if (iVar24 < iVar17) {
                lVar19 = 0;
                do {
                  uVar14 = puVar15[lVar27 + lVar19 + 1];
                  if (uVar14 != 0) {
                    uVar25 = (ulonglong)(iVar24 + (int)lVar19 + 1);
                    uVar26 = 0xffffffff;
                    goto LAB_1409e9156;
                  }
                  iVar28 = iVar28 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar18 - lVar27 != lVar19);
                uVar26 = 0xffffffff;
                iVar24 = iVar18;
              }
              uVar25 = (ulonglong)(iVar24 + 1);
              puVar21 = local_358;
              param_1 = local_360;
              uVar14 = uVar3;
            }
            else {
LAB_1409e9156:
              uVar23 = (ulonglong)(-uVar14 & uVar14);
              uVar1 = uVar23 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              uVar14 = (iVar28 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar14) {
                uVar14 = uVar3;
              }
            }
          } while (uVar14 != (uint)uVar29);
          puVar22 = local_318;
          if (local_58 != (undefined1 *)0x0) {
            puVar22 = local_58;
          }
          if ((longlong)(int)local_50 != 0) {
            puVar22 = puVar22 + 0xc;
            lVar27 = (longlong)(int)local_50 * 0x2c;
            do {
              if (((((*(int *)(puVar22 + -8) != 0) &&
                    (uVar26 = *(uint *)(puVar22 + -0xc), -1 < (int)uVar26)) &&
                   ((int)uVar26 < DAT_14c9647dc)) &&
                  ((plVar20 = (longlong *)
                              ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8)),
                   plVar20 != (longlong *)0x0 && ((int)plVar20[2] == *(int *)(puVar22 + -8))))) &&
                 (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 &&
                  (plVar20 = (longlong *)*plVar20, plVar20 != (longlong *)0x0)))) {
                (**(code **)(*plVar20 + 0x720))(plVar20,*(undefined4 *)(puVar22 + -4));
                (**(code **)(*plVar20 + 0x948))(plVar20,puVar22);
              }
              puVar22 = puVar22 + 0x2c;
              lVar27 = lVar27 + -0x2c;
            } while (lVar27 != 0);
          }
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_1409e8de6:
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409e925a FUN_1409e925a body=931 status=ok
// SIG undefined FUN_1409e925a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1409e925a(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  char cVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  byte bVar25;
  int iVar26;
  longlong *plVar27;
  ulonglong uVar28;
  int iVar29;
  longlong *plVar30;
  int iVar31;
  uint uVar32;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar29 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar29 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar29) {
      FUN_14021b4e8(param_1,iVar29);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar21 = -1;
    }
    else {
      iVar21 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar21 = iVar22 + -1;
      }
      iVar21 = iVar21 >> 5;
    }
    plVar27 = param_1 + 2;
    iVar26 = iVar22 + 1;
    iVar31 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar31 = iVar22;
    }
    if (iVar31 >> 5 == iVar21) {
      *(int *)(param_1 + 5) = iVar26;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        if (iVar22 + 0x20U < 0xa0) {
          iVar26 = 0x80;
          iVar21 = iVar22;
        }
        else {
          uVar32 = iVar22 + 0x20U >> 5;
          local_90 = (ulonglong)uVar32;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar32) {
              uVar23 = uVar32;
            }
          }
          else {
            uVar23 = (uVar32 * 3 >> 3) + uVar32 + 0x10;
          }
          uVar28 = FUN_144a3809e(uVar23 << 2,0);
          iVar21 = (int)(uVar28 >> 2);
          iVar26 = -0x20;
          if ((int)local_90 <= iVar21) {
            iVar26 = iVar21 << 5;
          }
          iVar21 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar26;
        FUN_1446efbd8(plVar27,iVar21);
        iVar26 = (int)param_1[5] + 1;
      }
      iVar21 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar21 = iVar26;
      }
      *(int *)(param_1 + 5) = iVar26;
      if (iVar26 % 0x20 != 0) {
        plVar30 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar30 = plVar27;
        }
        bVar25 = -(char)(iVar26 % 0x20);
        *(uint *)((longlong)plVar30 + (longlong)(iVar21 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar30 + (longlong)(iVar21 >> 5) * 4) << (bVar25 & 0x1f)) >>
             (bVar25 & 0x1f);
      }
    }
    lVar24 = (longlong)iVar29;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[4];
    }
    bVar25 = (byte)iVar22 & 0x1f;
    puVar3 = (uint *)((longlong)plVar27 + (longlong)(iVar31 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar25 | 0xfffffffeU >> 0x20 - bVar25);
  }
  else {
    iVar29 = (int)param_1[6];
    lVar24 = (longlong)iVar29;
    iVar22 = *(int *)(*param_1 + 4 + lVar24 * 0x48);
    *(int *)(param_1 + 6) = iVar22;
    iVar21 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar21;
    if (iVar21 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x48) = 0xffffffff;
    }
  }
  plVar27 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar27 = (longlong *)param_1[4];
  }
  iVar22 = iVar29 + 0x1f;
  if (-1 < iVar29) {
    iVar22 = iVar29;
  }
  puVar3 = (uint *)((longlong)plVar27 + (longlong)(iVar22 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar29 & 0x1f);
  puVar1 = (undefined8 *)(*param_1 + lVar24 * 0x48);
  local_88 = 0;
  uStack_64 = 0;
  uStack_84 = (uint)_DAT_14cad0ed0;
  uStack_80 = (undefined4)((ulonglong)_DAT_14cad0ed0 >> 0x20);
  uStack_7c = (undefined4)_DAT_14cad0ed8;
  local_78 = (undefined4)((ulonglong)_DAT_14cad0ed8 >> 0x20);
  uStack_74 = (undefined4)_DAT_14cad0ee0;
  uStack_70 = (undefined4)((ulonglong)_DAT_14cad0ee0 >> 0x20);
  uStack_6c = (undefined4)uRam000000014cad0ee8;
  local_68 = (undefined4)((ulonglong)uRam000000014cad0ee8 >> 0x20);
  uVar4 = *(undefined8 *)*param_3;
  *puVar1 = uVar4;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(uint *)((longlong)puVar1 + 0xc) = uStack_84;
  *(undefined4 *)(puVar1 + 2) = uStack_80;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_7c;
  *(undefined4 *)(puVar1 + 3) = local_78;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_74;
  *(undefined4 *)(puVar1 + 4) = uStack_70;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_6c;
  *(undefined4 *)(puVar1 + 5) = local_68;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  uVar23 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar32 = uVar23 ^ (uint)uVar4;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_88 = (uint)uVar4;
    uStack_84 = uVar23;
    iVar22 = FUN_1409e894a(param_1,uVar32);
    if (iVar22 != -1) {
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar22 * 0x48);
      if (*(longlong *)(puVar2 + 0xc) != 0) {
        FUN_1400020a8();
      }
      uVar5 = *(undefined4 *)puVar1;
      uVar6 = *(undefined4 *)((longlong)puVar1 + 4);
      uVar7 = *(undefined4 *)(puVar1 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar9 = *(undefined4 *)(puVar1 + 2);
      uVar10 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar11 = *(undefined4 *)(puVar1 + 3);
      uVar12 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      uVar13 = *(undefined4 *)(puVar1 + 4);
      uVar14 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar15 = *(undefined4 *)(puVar1 + 5);
      uVar16 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar17 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar18 = *(undefined4 *)(puVar1 + 7);
      uVar19 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      puVar2[0xc] = *(undefined4 *)(puVar1 + 6);
      puVar2[0xd] = uVar17;
      puVar2[0xe] = uVar18;
      puVar2[0xf] = uVar19;
      puVar2[8] = uVar13;
      puVar2[9] = uVar14;
      puVar2[10] = uVar15;
      puVar2[0xb] = uVar16;
      puVar2[4] = uVar9;
      puVar2[5] = uVar10;
      puVar2[6] = uVar11;
      puVar2[7] = uVar12;
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      FUN_1470e9e7e(param_1,iVar29);
      cVar20 = '\x01';
      goto LAB_1409e93dd;
    }
  }
  cVar20 = '\0';
  iVar22 = iVar29;
LAB_1409e93dd:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar20;
  }
  if (cVar20 == '\0') {
    uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar29 = 1;
    if (3 < uVar23) {
      uVar28 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
      lVar24 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar29 = 1 << ((byte)lVar24 & 0x1f);
    }
    if (((int)uVar23 < 1) || (iVar29 <= (int)param_1[9])) {
      uVar32 = (int)param_1[9] - 1U & uVar32;
      *(uint *)((longlong)puVar1 + 0x44) = uVar32;
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = param_1 + 7;
      }
      *(undefined4 *)(puVar1 + 8) =
           *(undefined4 *)
            ((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar32) * 4);
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = param_1 + 7;
      }
      *(int *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar32) * 4) =
           iVar22;
    }
    else {
      *(int *)(param_1 + 9) = iVar29;
      FUN_1409e95fe(param_1);
    }
  }
  *param_2 = iVar22;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


