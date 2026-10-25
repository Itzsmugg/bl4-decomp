// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1417ab765 FUN_1417ab765 body=49 status=ok
// SIG undefined FUN_1417ab765(void)

longlong FUN_1417ab765(void)

{
  if (DAT_14cabcb98 == 0) {
    FUN_14073dd9a(&DAT_14cabcb98,&PTR_LAB_14a59cc50);
  }
  return DAT_14cabcb98;
}



// FUNCTION 1417ab7a0 FUN_1417ab7a0 body=1681 status=ok
// SIG undefined FUN_1417ab7a0(void)

void FUN_1417ab7a0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  code *local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140a01d60();
  local_38 = 0;
  uStack_30 = 0;
  if (DAT_14cae8b20 == 0) {
    local_a0 = &local_48;
    local_48 = (code *)&LAB_14355090c;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_147b8e16d;
    local_b0 = (code *)&LAB_140810a38;
    local_b8 = L"Engine";
    local_c0 = 0x800000000;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar12 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_a0 = &local_48;
    local_48 = FUN_1449e2820;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_14081d0ea;
    local_a8 = &LAB_1468c5283;
    local_b0 = FUN_142809da0;
    local_b8 = L"Engine";
    local_c0 = 0x400000000;
    local_c8 = 0x10000000;
    local_d0 = 8;
    local_d8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  if (uVar4 != 0) {
    iVar13 = *(int *)(lVar12 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < iVar13) ||
         (uVar10 = uVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
         lVar12 + 0x30)) {
        uVar10 = 0;
      }
    } while ((uVar10 == 0) && (uVar4 = *(ulonglong *)(uVar4 + 0x20), uVar4 != 0));
    if ((uVar10 != 0) && (lVar12 = *(longlong *)(uVar10 + 0xc0), lVar12 != 0)) {
      if (*(ulonglong *)(lVar12 + 0x30) == uVar10) goto LAB_1417ab84d;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
      if (DAT_14cae90b8 == uVar10) {
LAB_1417ab93e:
        plVar7 = DAT_14cae90c0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
        if (plVar7 == (longlong *)0x0) goto LAB_1417ab84d;
        if (*(longlong *)(uVar10 + 0x2c8) == 0) {
          uVar5 = FUN_144a7757c();
          lVar12 = FUN_144a78ede(uVar10,uVar5);
        }
        else {
          lVar12 = (**(code **)(*plVar7 + 0x2f8))(plVar7);
          uVar4 = *(ulonglong *)(lVar12 + 0x30);
          if (((uVar4 == 0) || (*(longlong *)(uVar4 + 0xc0) == 0)) ||
             (*(ulonglong *)(*(longlong *)(uVar4 + 0xc0) + 0x30) == uVar4)) goto LAB_1417ab84d;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
          if (DAT_14cae90b8 != uVar4) {
            DAT_14cae90b8 = uVar4;
            if (DAT_14cae9048 != DAT_14cae9074) {
              uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
              uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
              puVar8 = &DAT_14cae9078;
              if (DAT_14cae9080 != (undefined *)0x0) {
                puVar8 = DAT_14cae9080;
              }
              iVar13 = *(int *)(puVar8 + (ulonglong)(DAT_14cae9088 - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                                         4);
              while (iVar13 != -1) {
                puVar1 = (ulonglong *)(DAT_14cae9040 + (longlong)iVar13 * 0x18);
                if (*puVar1 == uVar4) {
                  if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                    DAT_14cae90c0 = (longlong *)puVar1[1];
                    goto LAB_1417ab9b9;
                  }
                  break;
                }
                iVar13 = (int)puVar1[2];
              }
            }
            goto LAB_1417abd78;
          }
LAB_1417ab9b9:
          plVar7 = DAT_14cae90c0;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
          if (plVar7 == (longlong *)0x0) goto LAB_1417ab84d;
        }
        lVar6 = *(longlong *)((longlong)plVar7 + 0x54);
        if (*(longlong *)((longlong)plVar7 + 0x54) == 0) {
          (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_58);
          lVar6 = local_58;
        }
        local_58 = lVar6;
        FUN_1400021e4(&local_58,&local_48);
        lVar6 = (longlong)local_40 << 0x20;
        uVar4 = (longlong)local_40 * 2;
        do {
          if (uVar4 == 0) goto LAB_1417abe1f;
          lVar6 = lVar6 + -0x100000000;
          uVar10 = uVar4 - 2;
          lVar2 = uVar4 - 2;
          uVar4 = uVar10;
        } while (*(short *)(local_48 + lVar2) != 0x2f);
        iVar13 = (int)(uVar10 >> 1);
        if (iVar13 != -1) {
          iVar11 = local_40 + -1;
          if (local_40 == 0) {
            iVar11 = 0;
          }
          if (iVar13 < iVar11 + -1) {
            FUN_1446f470e(&local_60,local_48 + (lVar6 >> 0x20) * 2 + 2,1);
            pcVar9 = local_48;
            if (local_40 == 0) {
              pcVar9 = (code *)&DAT_149dfb77a;
            }
            FUN_1446f470e(&local_68,pcVar9,1);
            local_58 = 0;
            uStack_50 = 0;
            FUN_1411652ee(&local_58,local_68,local_60);
            local_38 = local_58;
            uStack_30 = uStack_50;
          }
        }
LAB_1417abe1f:
        if (local_48 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        DAT_14cae90b8 = uVar10;
        if (DAT_14cae9048 != DAT_14cae9074) {
          uVar3 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          puVar8 = &DAT_14cae9078;
          if (DAT_14cae9080 != (undefined *)0x0) {
            puVar8 = DAT_14cae9080;
          }
          iVar13 = *(int *)(puVar8 + (ulonglong)(DAT_14cae9088 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          while (iVar13 != -1) {
            puVar1 = (ulonglong *)(DAT_14cae9040 + (longlong)iVar13 * 0x18);
            if (*puVar1 == uVar10) {
              if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                DAT_14cae90c0 = (longlong *)puVar1[1];
                goto LAB_1417ab93e;
              }
              break;
            }
            iVar13 = (int)puVar1[2];
          }
        }
LAB_1417abd78:
        DAT_14cae90c0 = (longlong *)0x0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
      }
      goto LAB_1417ab84d;
    }
  }
  lVar12 = 0;
LAB_1417ab84d:
  lVar6 = *(longlong *)(param_1 + 0x3d0);
  plVar7 = &local_38;
  if (*(longlong *)(param_1 + 0x424) != 0) {
    plVar7 = (longlong *)(param_1 + 0x424);
  }
  local_78 = *plVar7;
  uStack_70 = plVar7[1];
  local_88 = *(undefined4 *)(param_1 + 0x414);
  uStack_84 = *(undefined4 *)(param_1 + 0x418);
  uStack_80 = *(undefined4 *)(param_1 + 0x41c);
  uStack_7c = *(undefined4 *)(param_1 + 0x420);
  if (lVar12 == 0) {
    *(undefined4 *)(lVar6 + 0x590) = 0;
    iVar13 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0xc);
    *(uint *)(lVar6 + 0x590) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar13 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar13 = *(int *)(lVar12 + 0x10);
      bVar14 = iVar13 == 0;
      if (bVar14) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar13 = iVar11;
      }
    }
  }
  *(int *)(lVar6 + 0x594) = iVar13;
  *(ulonglong *)(lVar6 + 0x5a8) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(lVar6 + 0x5b0) = CONCAT44(uStack_7c,uStack_80);
  *(undefined4 *)(lVar6 + 0x598) = (undefined4)local_78;
  *(undefined4 *)(lVar6 + 0x59c) = local_78._4_4_;
  *(undefined4 *)(lVar6 + 0x5a0) = (undefined4)uStack_70;
  *(undefined4 *)(lVar6 + 0x5a4) = uStack_70._4_4_;
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417abe32 FUN_1417abe32 body=26 status=ok
// SIG undefined FUN_1417abe32(void)

void FUN_1417abe32(undefined8 param_1)

{
  FUN_140500a24();
  FUN_140d641a2(param_1);
  return;
}



// FUNCTION 1417abe4c FUN_1417abe4c body=1359 status=ok
// SIG undefined FUN_1417abe4c(void)

ulonglong FUN_1417abe4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 unaff_RBX;
  uint *puVar7;
  ulonglong uVar8;
  wchar_t *_Str;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [44];
  uint local_dc;
  wchar_t *local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  int local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = param_3;
  cVar2 = FUN_140988638(&local_d0,L"Sequencer",1);
  if (cVar2 != '\0') {
    cVar2 = FUN_140988638(&local_d0,L"Play",1);
    if (cVar2 == '\0') {
      cVar2 = FUN_140988638(&local_d0,L"Pause",1);
      if (cVar2 != '\0') {
        FUN_143378fba(&local_c8,param_2,&local_d0);
        iVar3 = local_c0;
        lVar10 = (longlong)local_c0;
        if (lVar10 == 0) goto LAB_1417ac06c;
        puVar7 = (uint *)CONCAT44(uStack_c4,local_c8);
        lVar9 = 0;
        do {
          local_70 = *(longlong *)((longlong)puVar7 + lVar9);
          lVar4 = FUN_14479d2ce(&local_70);
          if (lVar4 != 0) {
            uVar5 = FUN_14479d2ce(&local_70);
            FUN_140b8aeaa(uVar5);
          }
          lVar9 = lVar9 + 8;
        } while (lVar10 * 8 - lVar9 != 0);
        goto LAB_1417ac088;
      }
      cVar2 = FUN_140988638(&local_d0,L"Stop",1);
      if (cVar2 != '\0') {
        FUN_143378fba(&local_c8,param_2,&local_d0);
        iVar3 = local_c0;
        lVar10 = (longlong)local_c0;
        if (lVar10 == 0) goto LAB_1417ac06c;
        puVar7 = (uint *)CONCAT44(uStack_c4,local_c8);
        lVar9 = 0;
        do {
          local_70 = *(longlong *)((longlong)puVar7 + lVar9);
          lVar4 = FUN_14479d2ce(&local_70);
          if (lVar4 != 0) {
            uVar5 = FUN_14479d2ce(&local_70);
            FUN_140c7df0a(uVar5);
          }
          lVar9 = lVar9 + 8;
        } while (lVar10 * 8 - lVar9 != 0);
        goto LAB_1417ac088;
      }
      cVar2 = FUN_140988638(&local_d0,L"SetPlaybackPosition",1);
      if (cVar2 == '\0') {
        cVar2 = FUN_140988638(&local_d0,L"PlayTo",1);
        if (cVar2 == '\0') {
          cVar2 = FUN_140988638(&local_d0,L"SetClockSource",1);
          if (cVar2 == '\0') goto LAB_1417ac0a2;
          cVar2 = FUN_143378229(param_2,&local_d0,param_4);
        }
        else {
          cVar2 = FUN_143378031(param_2,&local_d0,param_4);
        }
        uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if (cVar2 != '\0') goto LAB_1417abe9c;
      }
      else {
        _Str = (wchar_t *)&local_70;
        FUN_143378fba(_Str,param_2,&local_d0);
        if (local_68 == 0) {
          puVar6 = (undefined1 *)FUN_1400d7a00();
          (**(code **)(*param_4 + 0x10))(param_4,L"No level sequences found.",*puVar6,puVar6 + 4);
          bVar1 = false;
        }
        else {
          FUN_14619c2be(&local_80,&local_d0,0);
          local_d8 = local_80;
          _Str = L"";
          if (local_78 != 0) {
            _Str = local_80;
          }
          iVar3 = iswdigit(*_Str);
          bVar1 = iVar3 != 0;
          if (iVar3 == 0) {
            FUN_140047918(param_4,L"Invalid frame number to set playback position to: %s",_Str);
          }
          else {
            local_dc = _wtoi(_Str);
            FUN_140047918(param_4,L"Setting playback position to: %d",local_dc);
            lVar10 = local_70;
            if ((longlong)local_68 != 0) {
              _Str = (wchar_t *)0x0;
              do {
                local_88 = *(undefined8 *)(lVar10 + (longlong)_Str);
                lVar9 = FUN_14479d2ce(&local_88);
                if (lVar9 != 0) {
                  uVar5 = FUN_14479d2ce(&local_88);
                  local_c8 = local_dc;
                  uStack_c4 = 0;
                  local_c0 = 0;
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  uStack_9b = 0;
                  uStack_98 = 0;
                  local_90 = 0x1000000;
                  FUN_1405244c0(uVar5,&local_c8);
                }
                _Str = _Str + 4;
              } while ((wchar_t *)((longlong)local_68 * 8) != _Str);
            }
          }
          if (local_d8 != (wchar_t *)0x0) {
            FUN_1400020a8(local_d8);
          }
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        uVar8 = CONCAT71((int7)((ulonglong)_Str >> 8),1);
        if (bVar1) goto LAB_1417abe9c;
      }
    }
    else {
      FUN_143378fba(&local_c8,param_2,&local_d0);
      iVar3 = local_c0;
      lVar10 = (longlong)local_c0;
      if (lVar10 == 0) {
LAB_1417ac06c:
        iVar3 = local_c0;
        puVar7 = &local_c8;
        puVar6 = (undefined1 *)FUN_1400d7a00();
        (**(code **)(*param_4 + 0x10))(param_4,L"No level sequences found.",*puVar6,puVar6 + 4);
      }
      else {
        puVar7 = (uint *)CONCAT44(uStack_c4,local_c8);
        lVar9 = 0;
        do {
          local_70 = *(longlong *)((longlong)puVar7 + lVar9);
          lVar4 = FUN_14479d2ce(&local_70);
          if (lVar4 != 0) {
            uVar5 = FUN_14479d2ce(&local_70);
            FUN_140ef5ee2(uVar5);
          }
          lVar9 = lVar9 + 8;
        } while (lVar10 * 8 - lVar9 != 0);
      }
LAB_1417ac088:
      if (CONCAT44(uStack_c4,local_c8) != 0) {
        FUN_1400020a8();
      }
      uVar8 = CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
      if (iVar3 != 0) goto LAB_1417abe9c;
    }
LAB_1417ac0a2:
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))(param_4,L"Usage: Sequencer <Command>",*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))(param_4,&DAT_149dfb77a,*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))(param_4,L"Command",*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))
              (param_4,
               L"    Play <SequenceName> = Start playback forwards from the current time cursor position, using the current play rate"
               ,*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))
              (param_4,L"    Pause <SequenceName> = Pause playback",*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))
              (param_4,
               L"    Stop <SequenceName> = Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence"
               ,*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))
              (param_4,
               L"    SetPlaybackPosition <SequenceName> <FrameNumber> = Set the current time of the player by evaluating from the current time to the specified time"
               ,*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))
              (param_4,
               L"    PlayTo <SequenceName> <FrameNumber> = Play from the current position to the requested position and pause"
               ,*puVar6,puVar6 + 4);
    puVar6 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))
              (param_4,
               L"    SetClockSource <SequenceName> <ClockSource, ie. Tick, Audio, PlayEveryFrame> = Set the clock source"
               ,*puVar6,puVar6 + 4);
  }
  uVar8 = 0;
LAB_1417abe9c:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1417ac3a4 FUN_1417ac3a4 body=287 status=ok
// SIG undefined FUN_1417ac3a4(void)

longlong * FUN_1417ac3a4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(int *)(param_1 + 0x494) != 0) && (uVar1 = *(uint *)(param_1 + 0x490), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x494))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar5;
      }
      else {
        lVar6 = 0;
      }
      lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0xf0);
      if (lVar7 != 0) {
        *(undefined4 *)(param_2 + 1) = 1;
        FUN_1447f76d2(param_2,0);
        *(longlong *)*param_2 = lVar7;
      }
      iVar2 = *(int *)(lVar6 + 0x90);
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x88);
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(lVar6 + lVar7);
          if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x178), lVar4 != 0)) &&
             (lVar4 = *(longlong *)(lVar4 + 0xf0), lVar4 != 0)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_1447f76d2(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar2 * 8 != lVar7);
      }
    }
  }
  return param_2;
}



// FUNCTION 1417ac4c4 FUN_1417ac4c4 body=40 status=ok
// SIG undefined FUN_1417ac4c4(void)

undefined8 FUN_1417ac4c4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ac4ec FUN_1417ac4ec body=69 status=ok
// SIG undefined FUN_1417ac4ec(void)

undefined8 * FUN_1417ac4ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a59b510;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ac532 FUN_1417ac532 body=40 status=ok
// SIG undefined FUN_1417ac532(void)

undefined8 FUN_1417ac532(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ac55a FUN_1417ac55a body=29 status=ok
// SIG undefined FUN_1417ac55a(void)

undefined8 FUN_1417ac55a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ac578 FUN_1417ac578 body=29 status=ok
// SIG undefined FUN_1417ac578(void)

undefined8 FUN_1417ac578(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ac596 FUN_1417ac596 body=68 status=ok
// SIG undefined FUN_1417ac596(void)

longlong FUN_1417ac596(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aa71480;
  FUN_144725486(param_1 + 0x18);
  FUN_14006f2ae(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ac5da FUN_1417ac5da body=134 status=ok
// SIG undefined FUN_1417ac5da(void)

void FUN_1417ac5da(void)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,7);
  local_30 = 0;
  local_28 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_30,5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ac662 FUN_1417ac662 body=430 status=ok
// SIG undefined FUN_1417ac662(void)

void FUN_1417ac662(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x160) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x158);
    lVar5 = (longlong)*(int *)(param_1 + 0x160) << 4;
    do {
      FUN_14688f79a(lVar4,param_2);
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    lVar5 = (longlong)*(int *)(param_1 + 0x1c0) << 4;
    do {
      FUN_14688f84e(lVar4,param_2);
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if (DAT_14cabd868 == 0) {
    uVar2 = FUN_140f5467b();
    DAT_14cabd868 = FUN_140002ddd(FUN_14636ae7a,uVar2,L"MassObserverManager");
    if (DAT_14cabd868 == 0) {
      local_30 = 0;
      iVar1 = 0;
      goto LAB_1417ac6ec;
    }
  }
  local_2c = 0;
  local_30 = *(uint *)(DAT_14cabd868 + 0xc);
  if ((int)local_30 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((local_30 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  iVar1 = *(int *)(lVar4 + 0x10);
  if (*(int *)(lVar4 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    iVar3 = DAT_14c964868 + 1;
    bVar6 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar3);
    }
    LOCK();
    iVar1 = *(int *)(lVar4 + 0x10);
    bVar6 = iVar1 == 0;
    if (bVar6) {
      *(int *)(lVar4 + 0x10) = iVar3;
      iVar1 = 0;
    }
    UNLOCK();
    if (bVar6) {
      iVar1 = iVar3;
    }
  }
LAB_1417ac6ec:
  local_38 = 0;
  local_2c = iVar1;
  FUN_140de7278(param_2,&local_30,param_1 + 0x268,0);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417ac811 FUN_1417ac811 body=49 status=ok
// SIG undefined FUN_1417ac811(void)

longlong FUN_1417ac811(void)

{
  if (DAT_14cabe860 == 0) {
    FUN_14086a14e(&DAT_14cabe860,&PTR_FUN_14a5b7558);
  }
  return DAT_14cabe860;
}



// FUNCTION 1417ac842 FUN_1417ac842 body=113 status=ok
// SIG undefined FUN_1417ac842(void)

void FUN_1417ac842(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b9c90;
  puVar1[5] = &PTR_FUN_14a5b9f50;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 2;
  *(undefined2 *)(puVar1 + 0x13) = 0;
  return;
}



// FUNCTION 1417ac8b8 FUN_1417ac8b8 body=57 status=ok
// SIG undefined FUN_1417ac8b8(void)

void FUN_1417ac8b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabee10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabee10 = FUN_140002ddd(FUN_14636d620,uVar1,L"AnimSubsystem");
  }
  return;
}



// FUNCTION 1417ac8f2 FUN_1417ac8f2 body=57 status=ok
// SIG undefined FUN_1417ac8f2(void)

void FUN_1417ac8f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabee28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabee28 = FUN_140002ddd(FUN_14636d682,uVar1,L"AnimSubsystemInstance");
  }
  return;
}



// FUNCTION 1417ac92b FUN_1417ac92b body=49 status=ok
// SIG undefined FUN_1417ac92b(void)

longlong FUN_1417ac92b(void)

{
  if (DAT_14cabee68 == 0) {
    FUN_1409ce572(&DAT_14cabee68,&PTR_FUN_14a5bd8e0);
  }
  return DAT_14cabee68;
}



// FUNCTION 1417ac96f FUN_1417ac96f body=49 status=ok
// SIG undefined FUN_1417ac96f(void)

longlong FUN_1417ac96f(void)

{
  if (DAT_14cabf7d0 == 0) {
    FUN_14086a14e(&DAT_14cabf7d0,&PTR_FUN_14a5d1bd0);
  }
  return DAT_14cabf7d0;
}



// FUNCTION 1417ac9a0 FUN_1417ac9a0 body=72 status=ok
// SIG undefined FUN_1417ac9a0(void)

void FUN_1417ac9a0(longlong param_1)

{
  FUN_1448d844e(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140280a77(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1417ac9e8 FUN_1417ac9e8 body=49 status=ok
// SIG undefined FUN_1417ac9e8(void)

longlong FUN_1417ac9e8(void)

{
  if (DAT_14cabf820 == 0) {
    FUN_14073dd9a(&DAT_14cabf820,&PTR_LAB_14a5d7928);
  }
  return DAT_14cabf820;
}



// FUNCTION 1417aca19 FUN_1417aca19 body=49 status=ok
// SIG undefined FUN_1417aca19(void)

longlong FUN_1417aca19(void)

{
  if (DAT_14cabfc40 == 0) {
    FUN_14086a14e(&DAT_14cabfc40,&PTR_FUN_14a5dede8);
  }
  return DAT_14cabfc40;
}



// FUNCTION 1417aca4a FUN_1417aca4a body=49 status=ok
// SIG undefined FUN_1417aca4a(void)

longlong FUN_1417aca4a(void)

{
  if (DAT_14cabfd40 == 0) {
    FUN_14086a14e(&DAT_14cabfd40,&PTR_FUN_14a5e1358);
  }
  return DAT_14cabfd40;
}



// FUNCTION 1417aca7c FUN_1417aca7c body=93 status=ok
// SIG undefined FUN_1417aca7c(void)

void FUN_1417aca7c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417acada FUN_1417acada body=201 status=ok
// SIG undefined FUN_1417acada(void)

undefined8 FUN_1417acada(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      lVar1 = param_3 + lVar5;
      lVar2 = param_2 + lVar5;
      if (param_2 != param_3) {
        FUN_1401609a2(lVar2,lVar1);
        lVar3 = *(longlong *)(param_3 + 0xb0 + lVar5);
        lVar4 = lVar1 + 0x90;
        if (lVar3 != 0) {
          lVar4 = lVar3;
        }
        FUN_1401607c4(lVar2 + 0x90,lVar4,*(undefined4 *)(param_3 + 0xb8 + lVar5),
                      *(undefined4 *)(param_2 + 0xbc + lVar5));
      }
      FUN_14016081a(lVar2 + 0xc0,lVar1 + 0xc0);
      FUN_1400e9192(lVar2 + 0xf0,lVar1 + 0xf0);
      *(undefined8 *)(param_2 + 0x110 + lVar5) = *(undefined8 *)(param_3 + 0x110 + lVar5);
      lVar5 = lVar5 + 0x118;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417acba4 FUN_1417acba4 body=93 status=ok
// SIG undefined FUN_1417acba4(void)

void FUN_1417acba4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417acc0c FUN_1417acc0c body=201 status=ok
// SIG undefined FUN_1417acc0c(void)

undefined8 FUN_1417acc0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      lVar1 = param_3 + lVar5;
      lVar2 = param_2 + lVar5;
      if (param_2 != param_3) {
        FUN_1401609a2(lVar2,lVar1);
        lVar3 = *(longlong *)(param_3 + 0xb0 + lVar5);
        lVar4 = lVar1 + 0x90;
        if (lVar3 != 0) {
          lVar4 = lVar3;
        }
        FUN_1401607c4(lVar2 + 0x90,lVar4,*(undefined4 *)(param_3 + 0xb8 + lVar5),
                      *(undefined4 *)(param_2 + 0xbc + lVar5));
      }
      FUN_14016081a(lVar2 + 0xc0,lVar1 + 0xc0);
      FUN_1400e9192(lVar2 + 0xf0,lVar1 + 0xf0);
      *(undefined8 *)(param_2 + 0x110 + lVar5) = *(undefined8 *)(param_3 + 0x110 + lVar5);
      lVar5 = lVar5 + 0x118;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417accd6 FUN_1417accd6 body=93 status=ok
// SIG undefined FUN_1417accd6(void)

void FUN_1417accd6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417acd33 FUN_1417acd33 body=49 status=ok
// SIG undefined FUN_1417acd33(void)

longlong FUN_1417acd33(void)

{
  if (DAT_14cac01f0 == 0) {
    FUN_14086a14e(&DAT_14cac01f0,&PTR_FUN_14a5f4388);
  }
  return DAT_14cac01f0;
}



// FUNCTION 1417acd64 FUN_1417acd64 body=49 status=ok
// SIG undefined FUN_1417acd64(void)

longlong FUN_1417acd64(void)

{
  if (DAT_14cac0348 == 0) {
    FUN_1409ce572(&DAT_14cac0348,&PTR_FUN_14a5f85e0);
  }
  return DAT_14cac0348;
}



// FUNCTION 1417acd95 FUN_1417acd95 body=49 status=ok
// SIG undefined FUN_1417acd95(void)

longlong FUN_1417acd95(void)

{
  if (DAT_14cac0378 == 0) {
    FUN_1409ce572(&DAT_14cac0378,&PTR_FUN_14a5f86e0);
  }
  return DAT_14cac0378;
}



// FUNCTION 1417acdc6 FUN_1417acdc6 body=49 status=ok
// SIG undefined FUN_1417acdc6(void)

longlong FUN_1417acdc6(void)

{
  if (DAT_14cac0570 == 0) {
    FUN_14086a14e(&DAT_14cac0570,&PTR_FUN_14a5f93e8);
  }
  return DAT_14cac0570;
}



// FUNCTION 1417acdf7 FUN_1417acdf7 body=49 status=ok
// SIG undefined FUN_1417acdf7(void)

longlong FUN_1417acdf7(void)

{
  if (DAT_14cac06a8 == 0) {
    FUN_1409ce572(&DAT_14cac06a8,&PTR_FUN_14a5f9fb0);
  }
  return DAT_14cac06a8;
}



// FUNCTION 1417ace28 FUN_1417ace28 body=49 status=ok
// SIG undefined FUN_1417ace28(void)

longlong FUN_1417ace28(void)

{
  if (DAT_14cac06d8 == 0) {
    FUN_1409ce572(&DAT_14cac06d8,&PTR_FUN_14a5fa290);
  }
  return DAT_14cac06d8;
}



// FUNCTION 1417ace59 FUN_1417ace59 body=49 status=ok
// SIG undefined FUN_1417ace59(void)

longlong FUN_1417ace59(void)

{
  if (DAT_14cac0708 == 0) {
    FUN_1409ce572(&DAT_14cac0708,&PTR_FUN_14a5fa570);
  }
  return DAT_14cac0708;
}



// FUNCTION 1417ace8a FUN_1417ace8a body=49 status=ok
// SIG undefined FUN_1417ace8a(void)

longlong FUN_1417ace8a(void)

{
  if (DAT_14cac0a98 == 0) {
    FUN_1409ce572(&DAT_14cac0a98,&PTR_FUN_14a5ff8b0);
  }
  return DAT_14cac0a98;
}



// FUNCTION 1417acebc FUN_1417acebc body=183 status=ok
// SIG undefined FUN_1417acebc(void)

undefined2 * FUN_1417acebc(undefined2 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xe0;
  *(undefined1 **)(param_1 + 2) = &DAT_100000001;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0x400000000;
  *(undefined4 *)(param_1 + 0xe) = 4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_14475e4ac(param_1 + 0x10,0);
  **(undefined4 **)(param_1 + 0x10) = 0x3e75c28f;
  iVar1 = *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x16) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 0x3df5c28f;
  return param_1;
}



// FUNCTION 1417acf74 FUN_1417acf74 body=164 status=ok
// SIG undefined FUN_1417acf74(void)

void FUN_1417acf74(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x30),0);
  }
  *(undefined8 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (0x80 < *(uint *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    FUN_1446efbd8(param_1 + 0x40,0);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1417ad018 FUN_1417ad018 body=49 status=ok
// SIG undefined FUN_1417ad018(void)

longlong FUN_1417ad018(void)

{
  if (DAT_14cac0dd8 == 0) {
    FUN_14073dd9a(&DAT_14cac0dd8,&PTR_LAB_14a60a640);
  }
  return DAT_14cac0dd8;
}



// FUNCTION 1417ad04f FUN_1417ad04f body=49 status=ok
// SIG undefined FUN_1417ad04f(void)

longlong FUN_1417ad04f(void)

{
  if (DAT_14cac1080 == 0) {
    FUN_14086a14e(&DAT_14cac1080,&PTR_FUN_14a611040);
  }
  return DAT_14cac1080;
}



// FUNCTION 1417ad080 FUN_1417ad080 body=107 status=ok
// SIG undefined FUN_1417ad080(void)

undefined8 FUN_1417ad080(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[9] == 0) {
    (**(code **)(*param_1 + 0x310))(param_1,&local_20);
  }
  else {
    local_20 = *(undefined8 *)(param_1[9] + 0x18);
  }
  FUN_1400021e4(&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ad0ec FUN_1417ad0ec body=125 status=ok
// SIG undefined FUN_1417ad0ec(void)

undefined8 * FUN_1417ad0ec(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1401031ac(lVar1,0,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  (**(code **)(*param_1 + 0x310))(param_1,local_20);
  FUN_1400021e4(local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417ad16f FUN_1417ad16f body=122 status=ok
// SIG undefined FUN_1417ad16f(void)

void FUN_1417ad16f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bbc2e6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a6325c0;
  puVar1[0x19] = &PTR_LAB_14a632a98;
  puVar1[0x1a] = &PTR_LAB_14a632ab0;
  puVar1[0x1b] = &PTR_LAB_14a632af0;
  puVar1[0x1c] = &PTR_LAB_14a632b30;
  puVar1[0xb1] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb3] = 0;
  puVar1[0xb4] = 0;
  puVar1[0xb5] = 0;
  puVar1[0xb6] = 0;
  puVar1[0xb7] = 0;
  puVar1[0xb8] = 0;
  return;
}



// FUNCTION 1417ad1f4 FUN_1417ad1f4 body=49 status=ok
// SIG undefined FUN_1417ad1f4(void)

longlong FUN_1417ad1f4(void)

{
  if (DAT_14cac1ae0 == 0) {
    FUN_14073dd9a(&DAT_14cac1ae0,&PTR_LAB_14a62e6f0);
  }
  return DAT_14cac1ae0;
}



// FUNCTION 1417ad225 FUN_1417ad225 body=49 status=ok
// SIG undefined FUN_1417ad225(void)

longlong FUN_1417ad225(void)

{
  if (DAT_14cac1bc0 == 0) {
    FUN_14073dd9a(&DAT_14cac1bc0,&PTR_LAB_14a62fc00);
  }
  return DAT_14cac1bc0;
}



// FUNCTION 1417ad256 FUN_1417ad256 body=40 status=ok
// SIG undefined FUN_1417ad256(void)

undefined8 FUN_1417ad256(undefined8 param_1,int param_2)

{
  FUN_140899bb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ad27e FUN_1417ad27e body=61 status=ok
// SIG undefined FUN_1417ad27e(void)

void FUN_1417ad27e(longlong param_1)

{
  if (*(char *)(param_1 + 0x41) == '\x01') {
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417ad2bc FUN_1417ad2bc body=156 status=ok
// SIG undefined FUN_1417ad2bc(void)

undefined4 * FUN_1417ad2bc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x11);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 9) = *(undefined4 *)((longlong)param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0xd) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x11) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x15) = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_140e012e4(param_1 + 8,param_2 + 8);
  if (param_1 != param_2) {
    iVar1 = param_2[0xe];
    _Src = *(void **)(param_2 + 0xc);
    param_1[0xe] = iVar1;
    if (iVar1 == 0 && param_1[0xf] == 0) {
      param_1[0xf] = 0;
    }
    else {
      FUN_1447cd5fa(param_1 + 0xc,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0xc),_Src,(longlong)iVar1);
      }
    }
    if (*(char *)((longlong)param_2 + 0x41) == '\x01') {
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      uVar9 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x41) != '\x01') {
        return param_1;
      }
      uVar9 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = uVar9;
  }
  return param_1;
}



// FUNCTION 1417ad358 FUN_1417ad358 body=49 status=ok
// SIG undefined FUN_1417ad358(void)

longlong FUN_1417ad358(void)

{
  if (DAT_14cac1c40 == 0) {
    FUN_14086a14e(&DAT_14cac1c40,&PTR_FUN_14a636610);
  }
  return DAT_14cac1c40;
}



// FUNCTION 1417ad389 FUN_1417ad389 body=49 status=ok
// SIG undefined FUN_1417ad389(void)

longlong FUN_1417ad389(void)

{
  if (DAT_14cac1d78 == 0) {
    FUN_14073dd9a(&DAT_14cac1d78,&PTR_LAB_14a638f30);
  }
  return DAT_14cac1d78;
}



// FUNCTION 1417ad3c5 FUN_1417ad3c5 body=49 status=ok
// SIG undefined FUN_1417ad3c5(void)

longlong FUN_1417ad3c5(void)

{
  if (DAT_14cac21a0 == 0) {
    FUN_14073dd9a(&DAT_14cac21a0,&PTR_LAB_14a640ac0);
  }
  return DAT_14cac21a0;
}



// FUNCTION 1417ad3f6 FUN_1417ad3f6 body=55 status=ok
// SIG undefined FUN_1417ad3f6(void)

void FUN_1417ad3f6(longlong param_1,longlong *param_2)

{
  FUN_144a63cd0();
                    /* WARNING: Could not recover jumptable at 0x0001417ad42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x160,0,0);
  return;
}



// FUNCTION 1417ad42d FUN_1417ad42d body=49 status=ok
// SIG undefined FUN_1417ad42d(void)

longlong FUN_1417ad42d(void)

{
  if (DAT_14cac24a8 == 0) {
    FUN_14086a14e(&DAT_14cac24a8,&PTR_FUN_14a647c90);
  }
  return DAT_14cac24a8;
}



// FUNCTION 1417ad45e FUN_1417ad45e body=49 status=ok
// SIG undefined FUN_1417ad45e(void)

longlong FUN_1417ad45e(void)

{
  if (DAT_14cac24c0 == 0) {
    FUN_14086a14e(&DAT_14cac24c0,&PTR_FUN_14a647fd0);
  }
  return DAT_14cac24c0;
}



// FUNCTION 1417ad48f FUN_1417ad48f body=49 status=ok
// SIG undefined FUN_1417ad48f(void)

longlong FUN_1417ad48f(void)

{
  if (DAT_14cac24f8 == 0) {
    FUN_14073dd9a(&DAT_14cac24f8,&PTR_LAB_14a648a98);
  }
  return DAT_14cac24f8;
}



// FUNCTION 1417ad4c0 FUN_1417ad4c0 body=40 status=ok
// SIG undefined FUN_1417ad4c0(void)

undefined8 FUN_1417ad4c0(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ad4e8 FUN_1417ad4e8 body=228 status=ok
// SIG undefined FUN_1417ad4e8(void)

longlong FUN_1417ad4e8(void)

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
  if (DAT_14cac3ed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_147881b4d;
    local_40 = &LAB_1459be5f6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000011;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpressionSubstrateBSDF",&DAT_14cac3ed0,&DAT_147881b4c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac3ed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ad5cd FUN_1417ad5cd body=49 status=ok
// SIG undefined FUN_1417ad5cd(void)

longlong FUN_1417ad5cd(void)

{
  if (DAT_14cac3ed8 == 0) {
    FUN_14073dd9a(&DAT_14cac3ed8,&PTR_FUN_14a693558);
  }
  return DAT_14cac3ed8;
}



// FUNCTION 1417ad5fe FUN_1417ad5fe body=40 status=ok
// SIG undefined FUN_1417ad5fe(void)

undefined8 FUN_1417ad5fe(undefined8 param_1,int param_2)

{
  FUN_1408bd894();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ad626 FUN_1417ad626 body=40 status=ok
// SIG undefined FUN_1417ad626(void)

undefined8 FUN_1417ad626(undefined8 param_1,int param_2)

{
  FUN_1408bd894();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ad653 FUN_1417ad653 body=49 status=ok
// SIG undefined FUN_1417ad653(void)

longlong FUN_1417ad653(void)

{
  if (DAT_14cac4968 == 0) {
    FUN_14086a14e(&DAT_14cac4968,&PTR_FUN_14a6b1240);
  }
  return DAT_14cac4968;
}



// FUNCTION 1417ad684 FUN_1417ad684 body=49 status=ok
// SIG undefined FUN_1417ad684(void)

longlong FUN_1417ad684(void)

{
  if (DAT_14cac4f48 == 0) {
    FUN_14086a14e(&DAT_14cac4f48,&PTR_FUN_14a6bfd88);
  }
  return DAT_14cac4f48;
}



// FUNCTION 1417ad6b5 FUN_1417ad6b5 body=49 status=ok
// SIG undefined FUN_1417ad6b5(void)

longlong FUN_1417ad6b5(void)

{
  if (DAT_14cac4f60 == 0) {
    FUN_14086a14e(&DAT_14cac4f60,&PTR_FUN_14a6bfdf0);
  }
  return DAT_14cac4f60;
}



// FUNCTION 1417ad6e6 FUN_1417ad6e6 body=49 status=ok
// SIG undefined FUN_1417ad6e6(void)

longlong FUN_1417ad6e6(void)

{
  if (DAT_14cac4f78 == 0) {
    FUN_14086a14e(&DAT_14cac4f78,&PTR_FUN_14a6bfe58);
  }
  return DAT_14cac4f78;
}



// FUNCTION 1417ad717 FUN_1417ad717 body=49 status=ok
// SIG undefined FUN_1417ad717(void)

longlong FUN_1417ad717(void)

{
  if (DAT_14cac4f90 == 0) {
    FUN_14086a14e(&DAT_14cac4f90,&PTR_FUN_14a6bfec8);
  }
  return DAT_14cac4f90;
}



// FUNCTION 1417ad748 FUN_1417ad748 body=49 status=ok
// SIG undefined FUN_1417ad748(void)

longlong FUN_1417ad748(void)

{
  if (DAT_14cac51b0 == 0) {
    FUN_14086a14e(&DAT_14cac51b0,&PTR_FUN_14a6c4db0);
  }
  return DAT_14cac51b0;
}



// FUNCTION 1417ad77f FUN_1417ad77f body=49 status=ok
// SIG undefined FUN_1417ad77f(void)

longlong FUN_1417ad77f(void)

{
  if (DAT_14cac51d0 == 0) {
    FUN_14073dd9a(&DAT_14cac51d0,&PTR_LAB_14a6c52c8);
  }
  return DAT_14cac51d0;
}



// FUNCTION 1417ad7b0 FUN_1417ad7b0 body=28 status=ok
// SIG undefined FUN_1417ad7b0(void)

undefined1 FUN_1417ad7b0(void)

{
  undefined1 uVar1;
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_1401fde76(in_stack_00000028);
  *in_R9 = uVar1;
  return 1;
}



// FUNCTION 1417ad7cc FUN_1417ad7cc body=28 status=ok
// SIG undefined FUN_1417ad7cc(void)

undefined1 FUN_1417ad7cc(void)

{
  undefined1 uVar1;
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_1401fdd6d(in_stack_00000028);
  *in_R9 = uVar1;
  return 1;
}



// FUNCTION 1417ad7f2 FUN_1417ad7f2 body=808 status=ok
// SIG undefined FUN_1417ad7f2(void)

void FUN_1417ad7f2(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
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
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1408a629c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa08))(param_1,CONCAT44(uStack_1c,uStack_20),local_24);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417adb1c FUN_1417adb1c body=807 status=ok
// SIG undefined FUN_1417adb1c(void)

void FUN_1417adb1c(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
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
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa00))(param_1,CONCAT44(uStack_1c,uStack_20),local_24);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ade49 FUN_1417ade49 body=49 status=ok
// SIG undefined FUN_1417ade49(void)

longlong FUN_1417ade49(void)

{
  if (DAT_14cac62d8 == 0) {
    FUN_14073dd9a(&DAT_14cac62d8,&PTR_LAB_14a6fc5e0);
  }
  return DAT_14cac62d8;
}



// FUNCTION 1417ade7a FUN_1417ade7a body=49 status=ok
// SIG undefined FUN_1417ade7a(void)

longlong FUN_1417ade7a(void)

{
  if (DAT_14cac6738 == 0) {
    FUN_14073dd9a(&DAT_14cac6738,&PTR_LAB_14a708970);
  }
  return DAT_14cac6738;
}



// FUNCTION 1417adeac FUN_1417adeac body=40 status=ok
// SIG undefined FUN_1417adeac(void)

undefined8 FUN_1417adeac(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417aded4 FUN_1417aded4 body=139 status=ok
// SIG undefined FUN_1417aded4(void)

void FUN_1417aded4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,void *param_6)

{
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110 [256];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = *param_5;
  uStack_120 = param_5[1];
  local_118 = param_5[2];
  local_140 = param_2;
  local_138 = param_3;
  local_130 = param_4;
  memcpy(local_110,param_6,0x100);
  FUN_1447cd2ec(param_1,&local_140);
  if ((local_10 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417adf60 FUN_1417adf60 body=66 status=ok
// SIG undefined FUN_1417adf60(void)

void FUN_1417adf60(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417adfa3 FUN_1417adfa3 body=49 status=ok
// SIG undefined FUN_1417adfa3(void)

longlong FUN_1417adfa3(void)

{
  if (DAT_14cac6e68 == 0) {
    FUN_14073dd9a(&DAT_14cac6e68,&PTR_FUN_14a71d2a0);
  }
  return DAT_14cac6e68;
}



// FUNCTION 1417adfd4 FUN_1417adfd4 body=1187 status=ok
// SIG undefined FUN_1417adfd4(void)

void FUN_1417adfd4(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
  uStack_38 = 0;
  uStack_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (int)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_30;
  uStack_54 = local_30._4_4_;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  (**(code **)(*param_1 + 0x6a8))(param_1,&local_58,CONCAT44(uStack_34,uStack_38),local_3c != 0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ae478 FUN_1417ae478 body=1174 status=ok
// SIG undefined FUN_1417ae478(void)

void FUN_1417ae478(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_24);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_24);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar3;
      uStack_20 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_24);
    }
  }
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_30);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_30);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_30);
    }
  }
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (**(code **)(*param_1 + 0x678))(param_1,local_24,local_30,local_38);
  *param_3 = uVar3;
  if ((CONCAT44(uStack_1c,uStack_20) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ae910 FUN_1417ae910 body=668 status=ok
// SIG undefined FUN_1417ae910(void)

void FUN_1417ae910(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1417ae9fa;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
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
LAB_1417ae9fa:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(byte *)(param_1 + 0x2d6) & 2) == 0) == (local_2c != 0)) {
    *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfd | (local_2c != 0) * '\x02';
    FUN_1448215fa(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417aebae FUN_1417aebae body=624 status=ok
// SIG undefined FUN_1417aebae(void)

void FUN_1417aebae(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
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
            goto LAB_1417aec95;
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
LAB_1417aec95:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x720))(param_1,local_29);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417aee20 FUN_1417aee20 body=619 status=ok
// SIG undefined FUN_1417aee20(void)

void FUN_1417aee20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1417aef0a;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
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
LAB_1417aef0a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140c0573e(param_1,local_2c != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417af08c FUN_1417af08c body=619 status=ok
// SIG undefined FUN_1417af08c(void)

void FUN_1417af08c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1417af176;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
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
LAB_1417af176:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140b3c4ca(param_1,local_2c != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417af2f8 FUN_1417af2f8 body=432 status=ok
// SIG undefined FUN_1417af2f8(void)

void FUN_1417af2f8(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x690))(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417af4b6 FUN_1417af4b6 body=49 status=ok
// SIG undefined FUN_1417af4b6(void)

longlong FUN_1417af4b6(void)

{
  if (DAT_14cac6ee0 == 0) {
    FUN_1409ce572(&DAT_14cac6ee0,&PTR_FUN_14a71ec00);
  }
  return DAT_14cac6ee0;
}



// FUNCTION 1417af4e7 FUN_1417af4e7 body=49 status=ok
// SIG undefined FUN_1417af4e7(void)

longlong FUN_1417af4e7(void)

{
  if (DAT_14cac7018 == 0) {
    FUN_14086a14e(&DAT_14cac7018,&PTR_FUN_14a7207c0);
  }
  return DAT_14cac7018;
}



// FUNCTION 1417af518 FUN_1417af518 body=49 status=ok
// SIG undefined FUN_1417af518(void)

longlong FUN_1417af518(void)

{
  if (DAT_14cac7348 == 0) {
    FUN_14086a14e(&DAT_14cac7348,&PTR_FUN_14a72ffd8);
  }
  return DAT_14cac7348;
}



// FUNCTION 1417af54a FUN_1417af54a body=63 status=ok
// SIG undefined FUN_1417af54a(void)

undefined1 FUN_1417af54a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14477b16e(param_2,param_3);
    param_3 = param_3 + 0x8c0;
    param_2 = param_2 + 0x8c0;
  }
  return 1;
}



// FUNCTION 1417af589 FUN_1417af589 body=49 status=ok
// SIG undefined FUN_1417af589(void)

longlong FUN_1417af589(void)

{
  if (DAT_14cac7650 == 0) {
    FUN_14073dd9a(&DAT_14cac7650,&PTR_FUN_14a73a390);
  }
  return DAT_14cac7650;
}



// FUNCTION 1417af5ba FUN_1417af5ba body=457 status=ok
// SIG undefined FUN_1417af5ba(void)

void FUN_1417af5ba(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4b0))(param_1,&local_40,local_28);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417af784 FUN_1417af784 body=1502 status=ok
// SIG undefined FUN_1417af784(void)

void FUN_1417af784(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  code *local_180;
  int local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_c4;
  undefined4 local_98;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1403a682c;
      local_190 = 0;
      local_198 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_60 = (undefined4)uVar2;
      uStack_5c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_60);
    }
  }
  local_64 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_14067a048;
      local_190 = 0;
      local_198 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_64);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_64);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_64 = (int)uVar2;
      uStack_60 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_64);
    }
  }
  iVar4 = local_64;
  memset(&uStack_168,0,0x100);
  local_98 = 0xffffffff;
  local_164 = 0x3f800000;
  local_c4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_168);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_168);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_168);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_168 = (undefined4)uVar2;
      local_164 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_168);
    }
  }
  puVar6 = *(undefined4 **)(param_2 + 0x38);
  local_16c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_14067a048;
      local_190 = 0;
      local_198 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_16c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_16c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_16c = (int)uVar2;
      uStack_168 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_16c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_50;
  local_48 = uStack_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_198 = CONCAT71(local_198._1_7_,local_16c != 0);
  puVar5 = &uStack_168;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = puVar6;
  }
  puVar6 = (undefined4 *)0x0;
  if (iVar4 != 0) {
    puVar6 = puVar5;
  }
  FUN_14020f75c(param_1,&local_48,iVar4 != 0,puVar6);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417afd64 FUN_1417afd64 body=810 status=ok
// SIG undefined FUN_1417afd64(void)

void FUN_1417afd64(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_24 = (int)uVar2;
      local_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_24);
    }
  }
  iVar4 = iStack_24;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (int)uVar2;
      iStack_24 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14045627c(param_1,iVar4 != 0,'\x02' - (local_28 == 0));
  if ((CONCAT44(uStack_1c,local_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b009a FUN_1417b009a body=1568 status=ok
// SIG undefined FUN_1417b009a(void)

void FUN_1417b009a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac7668) {
    FUN_144b3d300(&DAT_14cac7668);
    if (DAT_14cac7668 == -1) {
      FUN_1446f470e(&DAT_14cac7660,L"AttachParent",1);
      _Init_thread_footer(&DAT_14cac7668);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac7674) {
    FUN_144b3d300(&DAT_14cac7674);
    if (DAT_14cac7674 == -1) {
      FUN_1446f470e(&DAT_14cac766c,L"AttachSocketName",1);
      _Init_thread_footer(&DAT_14cac7674);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac7680) {
    FUN_144b3d300(&DAT_14cac7680);
    if (DAT_14cac7680 == -1) {
      FUN_1446f470e(&DAT_14cac7678,L"AttachChildren",1);
      _Init_thread_footer(&DAT_14cac7680);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac768c) {
    FUN_144b3d300(&DAT_14cac768c);
    if (DAT_14cac768c == -1) {
      FUN_1446f470e(&DAT_14cac7684,L"RelativeLocation",1);
      _Init_thread_footer(&DAT_14cac768c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac7698) {
    FUN_144b3d300(&DAT_14cac7698);
    if (DAT_14cac7698 == -1) {
      FUN_1446f470e(&DAT_14cac7690,L"RelativeRotation",1);
      _Init_thread_footer(&DAT_14cac7698);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76a4) {
    FUN_144b3d300(&DAT_14cac76a4);
    if (DAT_14cac76a4 == -1) {
      FUN_1446f470e(&DAT_14cac769c,L"RelativeScale3D",1);
      _Init_thread_footer(&DAT_14cac76a4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76b0) {
    FUN_144b3d300(&DAT_14cac76b0);
    if (DAT_14cac76b0 == -1) {
      FUN_1446f470e(&DAT_14cac76a8,L"bAbsoluteLocation",1);
      _Init_thread_footer(&DAT_14cac76b0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76bc) {
    FUN_144b3d300(&DAT_14cac76bc);
    if (DAT_14cac76bc == -1) {
      FUN_1446f470e(&DAT_14cac76b4,L"bAbsoluteRotation",1);
      _Init_thread_footer(&DAT_14cac76bc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76c8) {
    FUN_144b3d300(&DAT_14cac76c8);
    if (DAT_14cac76c8 == -1) {
      FUN_1446f470e(&DAT_14cac76c0,L"bAbsoluteScale",1);
      _Init_thread_footer(&DAT_14cac76c8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76d4) {
    FUN_144b3d300(&DAT_14cac76d4);
    if (DAT_14cac76d4 == -1) {
      FUN_1446f470e(&DAT_14cac76cc,L"bVisible",1);
      _Init_thread_footer(&DAT_14cac76d4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76e0) {
    FUN_144b3d300(&DAT_14cac76e0);
    if (DAT_14cac76e0 == -1) {
      FUN_1446f470e(&DAT_14cac76d8,L"bShouldBeAttached",1);
      _Init_thread_footer(&DAT_14cac76e0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76ec) {
    FUN_144b3d300(&DAT_14cac76ec);
    if (DAT_14cac76ec == -1) {
      FUN_1446f470e(&DAT_14cac76e4,L"bShouldSnapLocationWhenAttached",1);
      _Init_thread_footer(&DAT_14cac76ec);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac76f8) {
    FUN_144b3d300(&DAT_14cac76f8);
    if (DAT_14cac76f8 == -1) {
      FUN_1446f470e(&DAT_14cac76f0,L"bShouldSnapRotationWhenAttached",1);
      _Init_thread_footer(&DAT_14cac76f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac7704) {
    FUN_144b3d300(&DAT_14cac7704);
    if (DAT_14cac7704 == -1) {
      FUN_1446f470e(&DAT_14cac76fc,L"bShouldSnapScaleWhenAttached",1);
      _Init_thread_footer(&DAT_14cac7704);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac7710) {
    FUN_144b3d300(&DAT_14cac7710);
    if (DAT_14cac7710 == -1) {
      FUN_1446f470e(&DAT_14cac7708,L"Mobility",1);
      _Init_thread_footer(&DAT_14cac7710);
      return;
    }
  }
  return;
}



// FUNCTION 1417b06ba FUN_1417b06ba body=40 status=ok
// SIG undefined FUN_1417b06ba(void)

undefined8 FUN_1417b06ba(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b06e2 FUN_1417b06e2 body=124 status=ok
// SIG undefined FUN_1417b06e2(void)

undefined8 FUN_1417b06e2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(param_2,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar1 << 2);
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1417b075e FUN_1417b075e body=49 status=ok
// SIG undefined FUN_1417b075e(void)

longlong FUN_1417b075e(void)

{
  if (DAT_14cac7890 == 0) {
    FUN_14086a14e(&DAT_14cac7890,&PTR_FUN_14a7408f0);
  }
  return DAT_14cac7890;
}



// FUNCTION 1417b078f FUN_1417b078f body=45 status=ok
// SIG undefined FUN_1417b078f(void)

void FUN_1417b078f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140190b70(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a740bf0;
  puVar1[99] = 0;
  puVar1[100] = 0;
  return;
}



// FUNCTION 1417b07bc FUN_1417b07bc body=49 status=ok
// SIG undefined FUN_1417b07bc(void)

longlong FUN_1417b07bc(void)

{
  if (DAT_14cac7cc0 == 0) {
    FUN_14073dd9a(&DAT_14cac7cc0,&PTR_LAB_14a747e90);
  }
  return DAT_14cac7cc0;
}



// FUNCTION 1417b07ee FUN_1417b07ee body=72 status=ok
// SIG undefined FUN_1417b07ee(void)

undefined8 * FUN_1417b07ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a740bf0;
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7a78(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b0836 FUN_1417b0836 body=40 status=ok
// SIG undefined FUN_1417b0836(void)

undefined8 FUN_1417b0836(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b087a FUN_1417b087a body=228 status=ok
// SIG undefined FUN_1417b087a(void)

void FUN_1417b087a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1417b095e FUN_1417b095e body=228 status=ok
// SIG undefined FUN_1417b095e(void)

void FUN_1417b095e(longlong param_1,int param_2,int param_3)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1417b0a42 FUN_1417b0a42 body=386 status=ok
// SIG undefined FUN_1417b0a42(void)

void FUN_1417b0a42(ulonglong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar8 = 0;
    goto LAB_1417b0ad3;
  }
  uVar8 = (ulonglong)param_2;
  uVar3 = (longlong)(int)param_2 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar4 = uVar5 & 0xfffffffffffffff0;
        if (uVar4 < 0x7ff1) goto LAB_1417b0b5b;
        goto LAB_1417b0b27;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_1417b0ab8:
  do {
    iVar6 = (int)uVar8;
    uVar8 = 0x7fffffff;
    if (iVar6 <= (int)(uVar3 / 0x14)) {
      uVar8 = uVar3 / 0x14 & 0xffffffff;
    }
LAB_1417b0ad3:
    iVar7 = (int)uVar8;
    iVar6 = param_3;
    if (iVar7 <= param_3) goto LAB_1417b0b0c;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      iVar6 = iVar7;
      if (iVar7 < 1 && uVar3 == 0) goto LAB_1417b0b0c;
      if (-1 < iVar7) {
        uVar8 = FUN_14001fdce(uVar3,uVar8 * 0x14,4);
        *param_1 = uVar8;
LAB_1417b0b0c:
        *(int *)((longlong)param_1 + 0xc) = iVar6;
        return;
      }
    }
    else {
      param_3 = 0;
      iVar6 = param_3;
      if (iVar7 == 0) goto LAB_1417b0b0c;
    }
    uVar5 = 0x14;
    uVar4 = uVar8;
    FUN_1467ac767();
LAB_1417b0b5b:
    bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
    uVar5 = 0x32;
    if (0x32 < bVar2) {
      uVar5 = (ulonglong)bVar2;
    }
    uVar9 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1417b0ab8;
      lVar1 = uVar5 + 1 + uVar9;
      uVar9 = uVar9 - 1;
    } while (lVar1 != 0x33);
LAB_1417b0b27:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar4 + uVar3) - 1;
  } while( true );
}



// FUNCTION 1417b0bc4 FUN_1417b0bc4 body=49 status=ok
// SIG undefined FUN_1417b0bc4(void)

longlong FUN_1417b0bc4(void)

{
  if (DAT_14cac8080 == 0) {
    FUN_14086a14e(&DAT_14cac8080,&PTR_FUN_14a74ea58);
  }
  return DAT_14cac8080;
}



// FUNCTION 1417b0bf6 FUN_1417b0bf6 body=68 status=ok
// SIG undefined FUN_1417b0bf6(void)

undefined4 FUN_1417b0bf6(longlong *param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2d0))(param_1,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b0c3c FUN_1417b0c3c body=68 status=ok
// SIG undefined FUN_1417b0c3c(void)

undefined4 FUN_1417b0c3c(longlong *param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [8];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2d0))(param_1,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b0c81 FUN_1417b0c81 body=49 status=ok
// SIG undefined FUN_1417b0c81(void)

longlong FUN_1417b0c81(void)

{
  if (DAT_14cac8b00 == 0) {
    FUN_1409ce572(&DAT_14cac8b00,&PTR_FUN_14a7624b0);
  }
  return DAT_14cac8b00;
}



// FUNCTION 1417b0cb2 FUN_1417b0cb2 body=119 status=ok
// SIG undefined FUN_1417b0cb2(void)

void FUN_1417b0cb2(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    plVar3 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1417b0cfe;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      plVar3 = (longlong *)*puVar4;
      goto LAB_1417b0cfe;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1417b0cfe:
  uVar2 = FUN_14477b072(plVar3,*(undefined8 *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x0001417b0d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x248))(plVar3,uVar2,0,*(code **)(*plVar3 + 0x248));
  return;
}



// FUNCTION 1417b0d29 FUN_1417b0d29 body=49 status=ok
// SIG undefined FUN_1417b0d29(void)

longlong FUN_1417b0d29(void)

{
  if (DAT_14cac8d68 == 0) {
    FUN_14073dd9a(&DAT_14cac8d68,&PTR_LAB_14a765ee0);
  }
  return DAT_14cac8d68;
}



// FUNCTION 1417b0d5a FUN_1417b0d5a body=69 status=ok
// SIG undefined FUN_1417b0d5a(void)

undefined8 * FUN_1417b0d5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a76b2c0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b0da0 FUN_1417b0da0 body=135 status=ok
// SIG undefined FUN_1417b0da0(void)

undefined8 * FUN_1417b0da0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a76a4b0;
  param_1[5] = &PTR_LAB_14a76aeb0;
  param_1[6] = &PTR_LAB_14a76aef0;
  param_1[0x55] = &PTR_LAB_14a76af40;
  param_1[0x56] = &PTR_LAB_14a76afc0;
  param_1[0x57] = &PTR_LAB_14a76afd0;
  if ((longlong *)param_1[0xc4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc4] + 0x10))();
  }
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b0e28 FUN_1417b0e28 body=121 status=ok
// SIG undefined FUN_1417b0e28(void)

longlong * FUN_1417b0e28(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar1 = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(int *)(param_1 + 4) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  param_1[5] = param_2[5];
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_140328a42(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1417b0ea1 FUN_1417b0ea1 body=74 status=ok
// SIG undefined FUN_1417b0ea1(void)

void FUN_1417b0ea1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140307c5a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a77b8f0;
  puVar1[0x19] = &PTR_FUN_14a77bc90;
  puVar1[0x1a] = &PTR_FUN_14a77bcd0;
  puVar1[0x27] = 0;
  return;
}



// FUNCTION 1417b0ef7 FUN_1417b0ef7 body=49 status=ok
// SIG undefined FUN_1417b0ef7(void)

longlong FUN_1417b0ef7(void)

{
  if (DAT_14cac94a0 == 0) {
    FUN_14086a14e(&DAT_14cac94a0,&PTR_FUN_14a77d3a8);
  }
  return DAT_14cac94a0;
}



// FUNCTION 1417b0f28 FUN_1417b0f28 body=389 status=ok
// SIG undefined FUN_1417b0f28(void)

void FUN_1417b0f28(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong **local_60;
  undefined8 *local_58;
  byte *local_50;
  longlong *local_48;
  byte local_39;
  undefined8 local_38;
  code *local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8442bc) {
    FUN_144b3d300(&DAT_14c8442bc);
    if (DAT_14c8442bc == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
  }
  if ((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) {
    local_39 = 0;
  }
  else {
    local_39 = DAT_14c8442b8 ^ 1;
  }
  iVar1 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(*param_1 + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  local_60 = &local_48;
  local_28 = &local_60;
  local_58 = &local_38;
  local_50 = &local_39;
  local_68 = &local_20;
  local_20 = 0;
  local_18 = 0;
  local_30 = FUN_1433bc44e;
  local_70 = 0;
  local_48 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b10ae FUN_1417b10ae body=695 status=ok
// SIG undefined FUN_1417b10ae(void)

void FUN_1417b10ae(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x700);
  if (lVar6 != 0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_144775d28(&local_68,1);
    uVar2 = uStack_60;
    lVar5 = (longlong)(int)uStack_60;
    uVar4 = (int)uStack_60 + 1;
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
    if (uStack_60._4_4_ < uVar4) {
      FUN_14741464c(&local_68,uVar2 & 0xffffffff);
    }
    local_68[lVar5] = lVar6;
    local_50 = local_68;
    local_48 = (int)uStack_60;
    FUN_14007658c(&DAT_14ca850c8,&local_50,0);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  if ((DAT_14ca96da8 != '\0') &&
     (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x358))(), cVar3 != '\0')) {
    local_68 = &DAT_14ca85100;
    uStack_60 = 0;
    local_58 = 0;
    FUN_1417b3222(&uStack_60,0x70);
    lVar6 = (longlong)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
      lVar5 = lVar6 * 0x60 + param_1 + 0x400;
      do {
        lVar1 = *(longlong *)(param_2[2] + lVar6 * 8);
        cVar3 = FUN_144a7ebcb();
        if ((((cVar3 != '\0') && (*(int *)(lVar1 + 0xec) != 0)) &&
            (*(char *)(lVar1 + 0x548) == '\x01')) &&
           (((*(byte *)(lVar1 + 0x5f0) & 8) == 0 && (*(longlong *)(lVar5 + 0x50) != 0)))) {
          FUN_147427f7e(lVar1 + 0x550,*(longlong *)(lVar5 + 0x50),&local_68);
          *(uint *)(lVar1 + 0x5f0) =
               *(uint *)(lVar1 + 0x5f0) & 0xfffffffe | (uint)*(byte *)(lVar5 + 0x58);
        }
        FUN_1478b2716(lVar5);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x60;
      } while (lVar6 < *(int *)(param_1 + 0x10));
    }
    if ((int)local_58 != 0) {
      (**(code **)(*DAT_14ca83900 + 0x148))(DAT_14ca83900,local_68,&uStack_60);
    }
    if (uStack_60 != 0) {
      FUN_1400020a8();
    }
    lVar6 = (longlong)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
      do {
        lVar5 = *(longlong *)(param_2[2] + lVar6 * 8);
        if (((*(int *)(lVar5 + 0xec) != 0) && (*(char *)(lVar5 + 0x548) == '\x01')) &&
           (cVar3 = FUN_144a7ebcb(), cVar3 != '\0')) {
          cVar3 = FUN_1474283cc(lVar5 + 0x550);
          if ((cVar3 != '\0') && ((*(byte *)(lVar5 + 0x5f0) & 8) == 0)) {
            FUN_147428096(lVar5 + 0x550,&DAT_14ca85100,2);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x10));
    }
  }
  cVar3 = (*(char *)(param_1 + 0xc) - *(char *)(param_1 + 0xe)) + *(char *)(param_1 + 0xb);
  *(char *)(param_2[1] + 0x1b) = cVar3;
  *(char *)(param_2[1] + 0x1c) = cVar3;
  if ((DAT_14ca96da8 != '\0') && (lVar6 = param_2[1], *(char *)(lVar6 + 0x1e) == '\x01')) {
    FUN_1436743ea(DAT_14ca964f8,&DAT_14ca85100,*(undefined4 *)(lVar6 + 0x20),
                  *(undefined1 *)(lVar6 + 0x1b));
  }
  *(undefined1 *)(param_1 + 0x5e) = 1;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417b1366 thunk_FUN_1401b21c4 body=5 status=ok
// SIG undefined thunk_FUN_1401b21c4(void)

void thunk_FUN_1401b21c4(longlong *param_1)

{
  longlong *plVar1;
  
  if (((char)param_1[0xc] < '\0') && (plVar1 = param_1, (char)param_1[0x6d] == '\0')) {
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
      if ((*(uint *)(plVar1 + 1) & 0x30) != 0) {
        return;
      }
    }
    FUN_1400bc96c(param_1 + 0x6d,&DAT_14cac9d44);
    if (-1 < (char)param_1[0xc] == (bool)(char)param_1[0x6d]) {
                    /* WARNING: Could not recover jumptable at 0x0001401b2230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x608))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1417b136c FUN_1417b136c body=225 status=ok
// SIG undefined FUN_1417b136c(void)

void FUN_1417b136c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1800000000;
    FUN_140a44582(param_1,local_100,0);
    puVar3 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar3 = local_100;
    }
    lVar2 = (longlong)(int)local_38;
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(puVar3 + lVar4);
        if (plVar1[0x24] == param_2) {
          (**(code **)(*plVar1 + 0x4a0))(plVar1,param_3);
        }
        lVar4 = lVar4 + 8;
      } while (lVar2 * 8 != lVar4);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417b144e FUN_1417b144e body=565 status=ok
// SIG undefined FUN_1417b144e(void)

void FUN_1417b144e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  undefined1 local_1e8 [192];
  undefined1 *local_128;
  undefined8 local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0x1800000001;
    local_128 = (undefined1 *)0x0;
    local_120 = 0x1800000000;
    local_118[0] = *(longlong *)(param_1 + 0x1c8);
    local_50._0_4_ = 1;
    do {
      plVar6 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar6 = local_118;
      }
      lVar1 = plVar6[(ulonglong)(uint)local_50 - 1];
      local_50 = CONCAT44(local_50._4_4_,(uint)local_50 - 1);
      lVar8 = (longlong)(int)local_120;
      uVar3 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar3);
      if (local_120._4_4_ < uVar3) {
        FUN_14024d3e4(local_1e8);
      }
      puVar4 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar4 = local_1e8;
      }
      *(longlong *)(puVar4 + lVar8 * 8) = lVar1;
      lVar8 = *(longlong *)(lVar1 + 0xa8);
      if (lVar8 != 0) {
        if (lVar8 == param_1) {
          if ((longlong)*(int *)(lVar1 + 0x140) != 0) {
            plVar6 = *(longlong **)(lVar1 + 0x138);
            plVar7 = plVar6 + *(int *)(lVar1 + 0x140);
            do {
              lVar1 = *plVar6;
              if (lVar1 != 0) {
                puVar4 = local_128;
                if (local_128 == (undefined1 *)0x0) {
                  puVar4 = local_1e8;
                }
                if ((longlong)(int)local_120 != 0) {
                  lVar8 = 0;
                  do {
                    if (*(longlong *)(puVar4 + lVar8) == lVar1) goto LAB_1417b15d1;
                    lVar8 = lVar8 + 8;
                  } while ((longlong)(int)local_120 * 8 != lVar8);
                }
                lVar8 = (longlong)(int)(uint)local_50;
                uVar3 = (uint)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,uVar3);
                if (local_50._4_4_ < uVar3) {
                  FUN_14024d3e4(local_118);
                }
                plVar5 = local_58;
                if (local_58 == (longlong *)0x0) {
                  plVar5 = local_118;
                }
                plVar5[lVar8] = lVar1;
              }
LAB_1417b15d1:
              plVar6 = plVar6 + 1;
            } while (plVar6 != plVar7);
          }
        }
        else {
          local_1f0 = lVar8;
          cVar2 = (*(code *)*param_2)(param_2[1],&local_1f0);
          if (cVar2 == '\0') break;
        }
      }
    } while (0 < (int)(uint)local_50);
    if (local_128 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417b1684 FUN_1417b1684 body=66 status=ok
// SIG undefined FUN_1417b1684(void)

void FUN_1417b1684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b16c7 FUN_1417b16c7 body=49 status=ok
// SIG undefined FUN_1417b16c7(void)

longlong FUN_1417b16c7(void)

{
  if (DAT_14cac9cb0 == 0) {
    FUN_14073dd9a(&DAT_14cac9cb0,&PTR_FUN_14a78b7c0);
  }
  return DAT_14cac9cb0;
}



// FUNCTION 1417b170e FUN_1417b170e body=432 status=ok
// SIG undefined FUN_1417b170e(void)

void FUN_1417b170e(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5c8))(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b18c0 FUN_1417b18c0 body=607 status=ok
// SIG undefined FUN_1417b18c0(void)

void FUN_1417b18c0(longlong param_1,longlong param_2,float *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
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
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar7 = 0.0;
  if (local_28 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1c8);
    if (lVar4 == 0) {
      pdVar6 = (double *)&DAT_14c8464e0;
      dVar8 = DAT_14c8464f0;
    }
    else {
      pdVar6 = (double *)(lVar4 + 0x260);
      dVar8 = *(double *)(lVar4 + 0x270);
    }
    lVar4 = *(longlong *)(local_28 + 0x1c8);
    if (lVar4 == 0) {
      pdVar5 = (double *)&DAT_14c8464e0;
      dVar9 = DAT_14c8464f0;
    }
    else {
      pdVar5 = (double *)(lVar4 + 0x260);
      dVar9 = *(double *)(lVar4 + 0x270);
    }
    fVar7 = (float)SQRT((dVar8 - dVar9) * (dVar8 - dVar9) +
                        (*pdVar6 - *pdVar5) * (*pdVar6 - *pdVar5) +
                        (pdVar6[1] - pdVar5[1]) * (pdVar6[1] - pdVar5[1]));
  }
  *param_3 = fVar7;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b1b20 FUN_1417b1b20 body=364 status=ok
// SIG undefined FUN_1417b1b20(void)

void FUN_1417b1b20(longlong param_1,longlong param_2,undefined4 *param_3)

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
  uint uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar9 = (double)((*(longlong *)(param_2 + 0x20) + 1) -
                  (ulonglong)(*(longlong *)(param_2 + 0x20) == 0));
  *(double *)(param_2 + 0x20) = dVar9;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    local_48 = DAT_14c846508;
    local_58 = (undefined4)DAT_14c8464f8;
    uStack_54 = DAT_14c8464f8._4_4_;
    uStack_50 = (undefined4)DAT_14c846500;
    uStack_4c = DAT_14c846500._4_4_;
  }
  else {
    dVar4 = *(double *)(lVar1 + 0x240);
    dVar5 = *(double *)(lVar1 + 0x248);
    dVar6 = *(double *)(lVar1 + 0x250);
    dVar7 = *(double *)(lVar1 + 600);
    pdVar10 = *(double **)(lVar1 + 0x228);
    local_78 = dVar4;
    uStack_70 = dVar5;
    local_68 = dVar6;
    uStack_60 = dVar7;
    if (pdVar10 == (double *)0x0) {
      param_1 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar10[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
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
    uVar11 = movmskpd((int)param_1,auVar3);
    if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar10 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)pdVar10 + 0x14) = local_68._4_4_;
      *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_60._4_4_;
      *(undefined4 *)pdVar10 = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_78._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_70._4_4_;
      FUN_1448052ee(&local_78,&local_58);
      pdVar10[6] = local_48;
      pdVar10[4] = (double)CONCAT44(uStack_54,local_58);
      pdVar10[5] = (double)CONCAT44(uStack_4c,uStack_50);
    }
    local_48 = pdVar10[6];
    local_58 = *(undefined4 *)(pdVar10 + 4);
    uStack_54 = *(undefined4 *)((longlong)pdVar10 + 0x24);
    uStack_50 = *(undefined4 *)(pdVar10 + 5);
    uStack_4c = *(undefined4 *)((longlong)pdVar10 + 0x2c);
  }
  *(double *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b1c8e FUN_1417b1c8e body=876 status=ok
// SIG undefined FUN_1417b1c8e(void)

void FUN_1417b1c8e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  code *local_60;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_50 = (undefined4)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_50);
    }
  }
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_54 = (int)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_54);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_40;
  local_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar4 = 0;
  }
  else {
    local_68 = CONCAT71(local_68._1_7_,local_54 != 0);
    local_70 = local_70 & 0xffffffff00000000;
    local_78 = 0;
    uVar4 = FUN_1407fd932(*(longlong *)(param_1 + 0x1c8),&DAT_14c8464e0,&local_38,1);
  }
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b2016 FUN_1417b2016 body=428 status=ok
// SIG undefined FUN_1417b2016(void)

void FUN_1417b2016(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1405e47c6(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b21c4 FUN_1417b21c4 body=432 status=ok
// SIG undefined FUN_1417b21c4(void)

void FUN_1417b21c4(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x330))(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b237e FUN_1417b237e body=1152 status=ok
// SIG undefined FUN_1417b237e(void)

void FUN_1417b237e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9cc8) {
    FUN_144b3d300(&DAT_14cac9cc8);
    if (DAT_14cac9cc8 == -1) {
      FUN_1446f470e(&DAT_14cac9cc0,L"bReplicateMovement",1);
      _Init_thread_footer(&DAT_14cac9cc8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9cd4) {
    FUN_144b3d300(&DAT_14cac9cd4);
    if (DAT_14cac9cd4 == -1) {
      FUN_1446f470e(&DAT_14cac9ccc,L"bHidden",1);
      _Init_thread_footer(&DAT_14cac9cd4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9ce0) {
    FUN_144b3d300(&DAT_14cac9ce0);
    if (DAT_14cac9ce0 == -1) {
      FUN_1446f470e(&DAT_14cac9cd8,L"bTearOff",1);
      _Init_thread_footer(&DAT_14cac9ce0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9cec) {
    FUN_144b3d300(&DAT_14cac9cec);
    if (DAT_14cac9cec == -1) {
      FUN_1446f470e(&DAT_14cac9ce4,L"bCanBeDamaged",1);
      _Init_thread_footer(&DAT_14cac9cec);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9cf8) {
    FUN_144b3d300(&DAT_14cac9cf8);
    if (DAT_14cac9cf8 == -1) {
      FUN_1446f470e(&DAT_14cac9cf0,L"RemoteRole",1);
      _Init_thread_footer(&DAT_14cac9cf8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9d04) {
    FUN_144b3d300(&DAT_14cac9d04);
    if (DAT_14cac9d04 == -1) {
      FUN_1446f470e(&DAT_14cac9cfc,L"CustomTimeDilation",1);
      _Init_thread_footer(&DAT_14cac9d04);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9d10) {
    FUN_144b3d300(&DAT_14cac9d10);
    if (DAT_14cac9d10 == -1) {
      FUN_1446f470e(&DAT_14cac9d08,L"AttachmentReplication",1);
      _Init_thread_footer(&DAT_14cac9d10);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9d1c) {
    FUN_144b3d300(&DAT_14cac9d1c);
    if (DAT_14cac9d1c == -1) {
      FUN_1446f470e(&DAT_14cac9d14,L"ReplicatedMovement",1);
      _Init_thread_footer(&DAT_14cac9d1c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9d28) {
    FUN_144b3d300(&DAT_14cac9d28);
    if (DAT_14cac9d28 == -1) {
      FUN_1446f470e(&DAT_14cac9d20,L"Owner",1);
      _Init_thread_footer(&DAT_14cac9d28);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9d34) {
    FUN_144b3d300(&DAT_14cac9d34);
    if (DAT_14cac9d34 == -1) {
      FUN_1446f470e(&DAT_14cac9d2c,L"Role",1);
      _Init_thread_footer(&DAT_14cac9d34);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9d40) {
    FUN_144b3d300(&DAT_14cac9d40);
    if (DAT_14cac9d40 == -1) {
      FUN_1446f470e(&DAT_14cac9d38,L"Instigator",1);
      _Init_thread_footer(&DAT_14cac9d40);
      return;
    }
  }
  return;
}



// FUNCTION 1417b27fe FUN_1417b27fe body=69 status=ok
// SIG undefined FUN_1417b27fe(void)

undefined8 FUN_1417b27fe(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1407fd932(*(longlong *)(param_1 + 0x1c8),&DAT_14c8464e0,param_2,1,0,0,param_3);
  }
  return uVar1;
}



// FUNCTION 1417b2844 FUN_1417b2844 body=271 status=ok
// SIG undefined FUN_1417b2844(void)

ulonglong FUN_1417b2844(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_118 [40];
  longlong local_f0 [24];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = (longlong *)0x0;
  uVar5 = 0x1800000000;
  local_28 = 0x1800000000;
  if (param_1 != 0) {
    FUN_1448c0c58(param_1,local_f0,0);
    plVar7 = local_f0;
    if (local_30 != (longlong *)0x0) {
      plVar7 = local_30;
    }
    uVar5 = 0;
    if ((longlong)(int)local_28 != 0) {
      plVar1 = plVar7 + (int)local_28;
      do {
        plVar4 = (longlong *)*plVar7;
        (**(code **)(*plVar4 + 0x430))(plVar4,1);
        FUN_144757f48(plVar4,0x40000000);
        uVar3 = *(uint *)((longlong)plVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        do {
          uVar3 = *(uint *)(lVar6 + 8);
          uVar5 = (ulonglong)uVar3;
          if ((uVar3 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar2 = *(uint *)(lVar6 + 8);
          if (uVar3 == uVar2) {
            *(uint *)(lVar6 + 8) = uVar3 | 0x200000;
          }
          else {
            uVar5 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar3 != uVar2);
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
    if (local_30 != (longlong *)0x0) {
      uVar5 = FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1417b2960 FUN_1417b2960 body=832 status=ok
// SIG undefined FUN_1417b2960(void)

void FUN_1417b2960(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) | 0x20;
  uVar6 = FUN_14477b072(param_1,DAT_14cac9c90);
  uVar17 = 0;
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,0);
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) & 0xdf;
  iVar2 = (int)param_1[0x4d];
  if (iVar2 == 0) {
    uVar15 = 1;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x4c];
    if ((uint *)param_1[0x4c] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x4a);
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_1417b2b4b;
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar16 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(param_1[0x48] + (longlong)iVar5 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        if (DAT_14cac7648 == 0) {
          local_70 = &local_50;
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_143242436;
          local_78 = &LAB_14789ef1f;
          local_80 = &LAB_1417b008f;
          local_88 = L"Engine";
          local_90 = 0x8000000000;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
        }
        if ((((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
              DAT_14cac7648 + 0x30)) && ((longlong *)param_1[0x39] != plVar4)) &&
           ((plVar4[0x24] != 0 &&
            (*(byte *)((longlong)plVar4 + 0x1fb) < *(byte *)(plVar4[0x24] + 0x1fb))))) {
          lVar13 = FUN_144a7a726();
          if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar13 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
              != lVar13 + 0x30)) {
            uVar10 = *(undefined1 *)(plVar4[0x24] + 0x1fb);
          }
          else {
            uVar10 = 2;
          }
          (**(code **)(*plVar4 + 0x588))(plVar4,uVar10);
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar7 = (uint *)param_1[0x4c];
      if ((uint *)param_1[0x4c] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x4a);
      }
      iVar3 = (int)param_1[0x4d];
      iVar5 = (int)uVar17;
      lVar13 = (longlong)iVar5;
      uVar11 = puVar7[lVar13] & uVar16;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar14 = 0;
          do {
            uVar11 = puVar7[lVar13 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar17 = (ulonglong)(iVar5 + (int)lVar14 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1417b2b1d;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar13 != lVar14);
          uVar16 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar17 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1417b2b1d:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_1417b2b4b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417b2ca2 FUN_1417b2ca2 body=926 status=ok
// SIG undefined FUN_1417b2ca2(void)

void FUN_1417b2ca2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a0;
  longlong local_98 [3];
  wchar_t *local_80;
  undefined8 uStack_78;
  code *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    if (DAT_14c927740 == 0) {
      local_c0 = &local_70;
      local_70 = FUN_1449e2820;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_146856450;
      local_d0 = FUN_1427b121c;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000021;
      local_f0 = 8;
      local_f8 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_f0 = 0;
    local_f8 = 0;
    plVar4 = (longlong *)FUN_140be85e0(DAT_14c927740,param_1,param_2,0);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_144a78d6a();
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) && (*(char *)((longlong)plVar4 + 0xb9) == '\x03')) {
        local_80 = (wchar_t *)plVar4[3];
        FUN_1400021e4(&local_80,&local_70);
        uVar9 = local_68 - 1;
        if (local_68 == 0) {
          uVar9 = 0;
        }
        uVar8 = (ulonglong)uVar9;
        uVar9 = uVar9 + 1;
        do {
          if ((int)uVar8 < 1) goto LAB_1417b3026;
          lVar5 = uVar8 * 2;
          uVar8 = uVar8 - 1;
          iVar2 = iswdigit(*(wint_t *)(local_70 + lVar5 + -2));
          uVar9 = uVar9 - 1;
        } while (iVar2 != 0);
        iVar2 = local_68 + -1;
        if (local_68 == 0) {
          iVar2 = 0;
        }
        iVar3 = 0;
        if ((int)uVar9 < iVar2) {
          FUN_144a49bb4(&local_70,&local_80,uVar9);
          pwVar7 = local_80;
          if ((int)uStack_78 == 0) {
            pwVar7 = L"";
          }
          iVar3 = _wtoi(pwVar7);
          if (local_80 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar11 = local_68 - 1;
          if (local_68 == 0) {
            uVar11 = 0;
          }
          if ((int)uVar11 <= (int)uVar9) {
            uVar9 = uVar11;
          }
          uVar8 = (ulonglong)uVar9;
          if ((int)uVar9 < 1) {
            uVar8 = 0;
          }
          uVar11 = uVar11 - (int)uVar8;
          if (0 < (int)uVar11) {
            iVar2 = local_68 - (uVar11 + (int)uVar8);
            if (iVar2 != 0) {
              memmove(local_70 + uVar8 * 2,local_70 + uVar8 * 2 + (ulonglong)uVar11 * 2,
                      (longlong)iVar2 * 2);
            }
            local_68 = local_68 - uVar11;
          }
        }
        pwVar7 = (wchar_t *)0x0;
        do {
          iVar3 = iVar3 + 1;
          local_98[0] = 0;
          local_98[1] = 0;
          FUN_144a83b10(local_98,iVar3);
          FUN_1407ec8fc(&local_80,&local_70,local_98);
          if (pwVar7 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar7);
          }
          pwVar7 = local_80;
          iVar2 = (int)uStack_78;
          local_80 = (wchar_t *)0x0;
          uStack_78 = 0;
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          pwVar10 = pwVar7;
          if (iVar2 == 0) {
            pwVar10 = L"";
          }
          FUN_1446f470e(&local_a0,pwVar10,1);
          uVar1 = local_a0;
          uVar6 = FUN_1446f8646();
          local_f0 = 0;
          local_f8 = 0;
          lVar5 = FUN_140be85e0(uVar6,param_1,uVar1,0);
        } while (lVar5 != 0);
        (**(code **)(*plVar4 + 0x170))(plVar4,pwVar10,param_1,0);
        if (pwVar7 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar7);
        }
LAB_1417b3026:
        if (local_70 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b3041 FUN_1417b3041 body=262 status=ok
// SIG undefined FUN_1417b3041(void)

undefined8
FUN_1417b3041(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
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



// FUNCTION 1417b3148 FUN_1417b3148 body=40 status=ok
// SIG undefined FUN_1417b3148(void)

undefined8 FUN_1417b3148(undefined8 param_1,int param_2)

{
  FUN_140216160();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b3170 FUN_1417b3170 body=138 status=ok
// SIG undefined FUN_1417b3170(void)

undefined8 * FUN_1417b3170(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a77db50;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b31fa FUN_1417b31fa body=40 status=ok
// SIG undefined FUN_1417b31fa(void)

undefined8 FUN_1417b31fa(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b3222 FUN_1417b3222 body=332 status=ok
// SIG undefined FUN_1417b3222(void)

void FUN_1417b3222(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417b3290;
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
LAB_1417b3290:
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



// FUNCTION 1417b336e FUN_1417b336e body=590 status=ok
// SIG undefined FUN_1417b336e(void)

void FUN_1417b336e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined4 *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cac9650 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cac9650,0,0,4);
  }
  uVar4 = DAT_14cac9658;
  if (DAT_14cac9658 != 0) {
    FUN_144a1cbf0(&DAT_14cac9648,0,DAT_14cac9658,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14cac9650;
        if (DAT_14cac9650 == (undefined *)0x0) {
          puVar6 = &DAT_14cac9648;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cac9658 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cac9620;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cac9638 == 0) {
      uVar7 = 1;
      local_40._0_4_ = 0xffffffff;
      local_40._4_4_ = 0;
      local_50._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      uVar7 = local_50 >> 0x20;
    }
    iVar3 = (int)local_50;
    uVar4 = (uint)local_40;
    iVar5 = local_40._4_4_;
    iVar8 = local_38;
    if (local_40._4_4_ < (int)local_48[6]) {
      do {
        lVar11 = DAT_14cac9610;
        lVar10 = (longlong)iVar5 * 0x80;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(DAT_14cac9610 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(DAT_14cac9610 + lVar10)) &
                 (longlong)(int)DAT_14cac9658 - 1U;
        iVar12 = (int)uVar13;
        *(int *)(DAT_14cac9610 + 0x74 + lVar10) = iVar12;
        puVar6 = DAT_14cac9650;
        if (DAT_14cac9650 == (undefined *)0x0) {
          puVar6 = &DAT_14cac9648;
        }
        *(undefined4 *)(lVar11 + 0x70 + lVar10) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cac9658 - 1U & uVar13) * 4);
        puVar6 = DAT_14cac9650;
        if (DAT_14cac9650 == (undefined *)0x0) {
          puVar6 = &DAT_14cac9648;
        }
        *(int *)(puVar6 + ((longlong)iVar12 & (longlong)(int)DAT_14cac9658 - 1U) * 4) = iVar5;
        uVar4 = ~(uint)uVar7 & uVar4;
        puVar9 = *(undefined4 **)(local_48 + 4);
        if (*(undefined4 **)(local_48 + 4) == (undefined4 *)0x0) {
          puVar9 = local_48;
        }
        iVar12 = local_48[6];
        lVar11 = (longlong)iVar3;
        uVar2 = puVar9[lVar11] & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar5 = iVar12 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar5 <= iVar3) break;
          lVar10 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = puVar9[lVar11 + lVar10 + 1];
            if (uVar2 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar1 - lVar11 == lVar10) goto LAB_1417b3578;
          }
          iVar3 = iVar3 + (int)lVar10 + 1;
          uVar4 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2);
        uVar13 = uVar7 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar12);
    }
  }
LAB_1417b3578:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b35be FUN_1417b35be body=173 status=ok
// SIG undefined FUN_1417b35be(void)

void FUN_1417b35be(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1417b3655;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1417b3655:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1417b366c FUN_1417b366c body=196 status=ok
// SIG undefined FUN_1417b366c(void)

int FUN_1417b366c(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cac9618 != DAT_14cac9644) {
    puVar2 = &DAT_14cac9648;
    if (DAT_14cac9650 != (undefined *)0x0) {
      puVar2 = DAT_14cac9650;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cac9658 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cac9610 + (longlong)iVar3 * 0x80);
        cVar1 = FUN_14472d054(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_1417b370c;
        iVar3 = *(int *)(DAT_14cac9610 + 0x70 + (longlong)iVar3 * 0x80);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1417b370c:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b3732 FUN_1417b3732 body=93 status=ok
// SIG undefined FUN_1417b3732(void)

void FUN_1417b3732(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a78db60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1417b379a FUN_1417b379a body=49 status=ok
// SIG undefined FUN_1417b379a(void)

longlong FUN_1417b379a(void)

{
  if (DAT_14caca5f0 == 0) {
    FUN_1409ce572(&DAT_14caca5f0,&PTR_FUN_14a791d70);
  }
  return DAT_14caca5f0;
}



// FUNCTION 1417b37cb FUN_1417b37cb body=49 status=ok
// SIG undefined FUN_1417b37cb(void)

longlong FUN_1417b37cb(void)

{
  if (DAT_14caca620 == 0) {
    FUN_14086a14e(&DAT_14caca620,&PTR_FUN_14a792060);
  }
  return DAT_14caca620;
}



// FUNCTION 1417b37fc FUN_1417b37fc body=80 status=ok
// SIG undefined FUN_1417b37fc(void)

void FUN_1417b37fc(undefined8 *param_1,float param_2)

{
  float fVar1;
  
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)((longlong)param_1 + 0xc) = param_2;
  fVar1 = (float)FUN_14002c5a6(param_2,*(undefined1 *)((longlong)param_1 + 0x24),*param_1);
  *(float *)(param_1 + 2) = fVar1;
  *(float *)(param_1 + 3) =
       (*(float *)(param_1 + 4) - *(float *)((longlong)param_1 + 0x1c)) * fVar1 +
       *(float *)((longlong)param_1 + 0x1c);
  return;
}



// FUNCTION 1417b384c FUN_1417b384c body=110 status=ok
// SIG undefined FUN_1417b384c(void)

byte FUN_1417b384c(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)((longlong)param_1 + 0x27) == '\0') {
    fVar3 = *(float *)(param_1 + 5);
  }
  else {
    fVar3 = *(float *)((longlong)param_1 + 0x1c);
    fVar1 = *(float *)(param_1 + 4);
    fVar2 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)((longlong)param_1 + 0x24),*param_1);
    fVar3 = fVar2 * (fVar1 - fVar3) + fVar3;
    *(float *)(param_1 + 5) = fVar3;
    *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  }
  return -(fVar3 == *(float *)(param_1 + 3)) & 1;
}



// FUNCTION 1417b38c0 FUN_1417b38c0 body=227 status=ok
// SIG undefined FUN_1417b38c0(void)

void FUN_1417b38c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a79c8c0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      goto LAB_1417b391e;
    }
    *(longlong **)(param_1 + 0x38) = plVar3;
    if (plVar4 == (longlong *)0x0) goto LAB_1417b391e;
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
  if (plVar3 == (longlong *)0x0) {
    return;
  }
LAB_1417b391e:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1417b39a3 FUN_1417b39a3 body=82 status=ok
// SIG undefined FUN_1417b39a3(void)

void FUN_1417b39a3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140aecc84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a794a20;
  puVar1[5] = &PTR_FUN_14a794d00;
  puVar1[6] = &PTR_FUN_14a794d40;
  puVar1[7] = &PTR_FUN_14a794d70;
  puVar1[0x11] = &PTR_FUN_14a794da0;
  return;
}



// FUNCTION 1417b3a00 FUN_1417b3a00 body=307 status=ok
// SIG undefined FUN_1417b3a00(void)

void FUN_1417b3a00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < (int)param_1[1]) {
    fVar1 = *(float *)*param_2;
    plVar2 = *(longlong **)*param_1;
    if (plVar2 != param_3) {
      iVar4 = (int)plVar2[1];
      _Src = (void *)*plVar2;
      *(int *)(param_3 + 1) = iVar4;
      if (iVar4 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_14471726c(param_3);
        if (iVar4 != 0) {
          memcpy((void *)*param_3,_Src,(longlong)iVar4 << 4);
        }
      }
    }
    *(char *)(param_3 + 2) = (char)plVar2[2];
    if ((1e-08 < ABS(fVar1 + -1.0)) && (lVar6 = param_3[1], (longlong)(int)lVar6 != 0)) {
      lVar3 = *param_3;
      lVar5 = 0;
      do {
        *(float *)(lVar3 + 8 + lVar5) = *(float *)(lVar3 + 8 + lVar5) * fVar1;
        lVar5 = lVar5 + 0x10;
      } while ((longlong)(int)lVar6 * 0x10 != lVar5);
    }
    iVar4 = (int)param_1[1];
    if (1 < iVar4) {
      lVar6 = 1;
      do {
        fVar1 = *(float *)(*param_2 + lVar6 * 4);
        if (1e-05 < fVar1) {
          FUN_144716836(param_3,*(undefined8 *)(*param_1 + lVar6 * 8),fVar1);
          iVar4 = (int)param_1[1];
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
  }
  return;
}



// FUNCTION 1417b3b33 FUN_1417b3b33 body=339 status=ok
// SIG undefined FUN_1417b3b33(void)

void FUN_1417b3b33(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14094d83e(puVar1);
  *puVar1 = &PTR_FUN_14a797be0;
  puVar1[0x4a] = &PTR_FUN_14a797fe0;
  puVar1[0x76] = &PTR_FUN_14a798000;
  puVar1[0x80] = 0;
  *(undefined4 *)(puVar1 + 0x81) = 0;
  puVar1[0x77] = 0;
  puVar1[0x78] = 0;
  puVar1[0x79] = 0;
  puVar1[0x7a] = 0;
  puVar1[0x7b] = 0;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x40c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x414) = 0;
  puVar1[0x84] = 0;
  *(undefined4 *)(puVar1 + 0x85) = 0;
  puVar1[0x9c] = 0;
  *(undefined4 *)(puVar1 + 0x9d) = 0;
  memset(puVar1 + 0x86,0,0xa0);
  *(undefined8 *)((longlong)puVar1 + 0x4ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x4f4) = 0;
  puVar1[0xa0] = 0;
  *(undefined4 *)(puVar1 + 0xa1) = 0;
  puVar1[0xa6] = 0;
  *(undefined4 *)(puVar1 + 0xa7) = 0;
  puVar1[0xa2] = 0;
  puVar1[0xa3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x53c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x544) = 0;
  puVar1[0xaa] = 0;
  *(undefined4 *)(puVar1 + 0xab) = 0;
  puVar1[0xb2] = 0;
  *(undefined4 *)(puVar1 + 0xb3) = 0;
  puVar1[0xac] = 0;
  puVar1[0xad] = 0;
  puVar1[0xae] = 0;
  puVar1[0xaf] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x59c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5a4) = 0;
  puVar1[0xb6] = 0;
  *(undefined4 *)(puVar1 + 0xb7) = 0;
  memset(puVar1 + 0xb8,0,0x88);
  return;
}



// FUNCTION 1417b3c86 FUN_1417b3c86 body=67 status=ok
// SIG undefined FUN_1417b3c86(void)

void FUN_1417b3c86(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  FUN_140958b58(param_1,param_2);
  return;
}



// FUNCTION 1417b3cca FUN_1417b3cca body=69 status=ok
// SIG undefined FUN_1417b3cca(void)

undefined8 * FUN_1417b3cca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a78f560;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b3d10 FUN_1417b3d10 body=59 status=ok
// SIG undefined FUN_1417b3d10(void)

undefined8 * FUN_1417b3d10(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a794948;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b3d4c FUN_1417b3d4c body=40 status=ok
// SIG undefined FUN_1417b3d4c(void)

undefined8 FUN_1417b3d4c(undefined8 param_1,int param_2)

{
  FUN_140b35bde();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b3d74 FUN_1417b3d74 body=75 status=ok
// SIG undefined FUN_1417b3d74(void)

void FUN_1417b3d74(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144803279(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417b3dc0 FUN_1417b3dc0 body=46 status=ok
// SIG undefined FUN_1417b3dc0(void)

void FUN_1417b3dc0(longlong param_1)

{
  FUN_1447aae31(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1417b3dee FUN_1417b3dee body=168 status=ok
// SIG undefined FUN_1417b3dee(void)

undefined8 * FUN_1417b3dee(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a79bfa8;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a79bfb0;
  puVar1 = TlsGetValue(DAT_14c761244);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c761244,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b3e96 FUN_1417b3e96 body=353 status=ok
// SIG undefined FUN_1417b3e96(void)

void FUN_1417b3e96(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b3f1d;
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
LAB_1417b3f1d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1417b3ff8 FUN_1417b3ff8 body=216 status=ok
// SIG undefined FUN_1417b3ff8(void)

undefined8 * FUN_1417b3ff8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a79bfb8;
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
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a79bfc0;
  puVar1 = TlsGetValue(DAT_14c761248);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c761248,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b40d0 FUN_1417b40d0 body=353 status=ok
// SIG undefined FUN_1417b40d0(void)

void FUN_1417b40d0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b4155;
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
LAB_1417b4155:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417b4232 FUN_1417b4232 body=334 status=ok
// SIG undefined FUN_1417b4232(void)

void FUN_1417b4232(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0xb8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417b429f;
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
LAB_1417b429f:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xb8)) {
      uVar5 = uVar3 / 0xb8 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xb8,8);
  }
  return;
}



// FUNCTION 1417b4380 FUN_1417b4380 body=353 status=ok
// SIG undefined FUN_1417b4380(void)

void FUN_1417b4380(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b4405;
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
LAB_1417b4405:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417b44e1 FUN_1417b44e1 body=126 status=ok
// SIG undefined FUN_1417b44e1(void)

void FUN_1417b44e1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14061ea1a(puVar1,param_1);
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0xb4) = 0;
  puVar1[0x17] = 0x10000ea60;
  *puVar1 = &PTR_FUN_14a79e7a0;
  puVar1[5] = &PTR_FUN_14a79eba0;
  puVar1[6] = &PTR_FUN_14a79ebe0;
  puVar1[7] = &PTR_FUN_14a79ec10;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  return;
}



// FUNCTION 1417b455f FUN_1417b455f body=49 status=ok
// SIG undefined FUN_1417b455f(void)

longlong FUN_1417b455f(void)

{
  if (DAT_14cacb418 == 0) {
    FUN_14086a14e(&DAT_14cacb418,&PTR_FUN_14a7a4b60);
  }
  return DAT_14cacb418;
}



// FUNCTION 1417b4590 FUN_1417b4590 body=49 status=ok
// SIG undefined FUN_1417b4590(void)

longlong FUN_1417b4590(void)

{
  if (DAT_14cacb448 == 0) {
    FUN_14086a14e(&DAT_14cacb448,&PTR_FUN_14a7a4c58);
  }
  return DAT_14cacb448;
}



// FUNCTION 1417b45c6 FUN_1417b45c6 body=49 status=ok
// SIG undefined FUN_1417b45c6(void)

longlong FUN_1417b45c6(void)

{
  if (DAT_14cacb8c0 == 0) {
    FUN_14073dd9a(&DAT_14cacb8c0,&PTR_LAB_14a7adff0);
  }
  return DAT_14cacb8c0;
}



// FUNCTION 1417b45f8 FUN_1417b45f8 body=47 status=ok
// SIG undefined FUN_1417b45f8(void)

void FUN_1417b45f8(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cacb518);
                    /* WARNING: Could not recover jumptable at 0x0001417b4624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1417b4632 FUN_1417b4632 body=539 status=ok
// SIG undefined FUN_1417b4632(void)

undefined8 FUN_1417b4632(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
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
  lVar7 = param_1[4];
  if (lVar7 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 == 1) {
            DVar3 = FUN_140ad26c0();
            DVar4 = GetCurrentThreadId();
            if (DVar3 == DVar4) goto LAB_1417b483b;
          }
          goto LAB_1417b46bd;
        }
      }
LAB_1417b483b:
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_1417b46bd:
  lVar7 = param_1[0x7c];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar7;
  }
  lVar7 = *(longlong *)(lVar7 + 0x6a0);
  if (*(int *)(lVar7 + 0x34) != 0) {
    uVar2 = *(uint *)(lVar7 + 0x30);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1417b4740;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) &&
        ((((int)plVar5[2] == *(int *)(lVar7 + 0x34) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
         && (*(longlong *)(lVar7 + 0x48) != 0)))) && (0 < *(int *)(lVar7 + 8))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar5;
      }
      else {
        lVar7 = 0;
      }
      uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 == param_2);
      goto LAB_1417b4740;
    }
  }
  uVar6 = 0;
LAB_1417b4740:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b484e FUN_1417b484e body=262 status=ok
// SIG undefined FUN_1417b484e(void)

undefined8
FUN_1417b484e(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
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



// FUNCTION 1417b4956 FUN_1417b4956 body=39 status=ok
// SIG undefined FUN_1417b4956(void)

void FUN_1417b4956(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x8b0,0x10);
  FUN_140e14124(uVar1,param_1);
  return;
}



// FUNCTION 1417b497e FUN_1417b497e body=337 status=ok
// SIG undefined FUN_1417b497e(void)

longlong FUN_1417b497e(longlong *param_1)

{
  int iVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(DAT_14cad2858 + 0x38);
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30)) {
      FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
    }
  }
  lVar2 = param_1[0x7c];
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2 + 0x5e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b4ad0 FUN_1417b4ad0 body=40 status=ok
// SIG undefined FUN_1417b4ad0(void)

undefined8 FUN_1417b4ad0(undefined8 param_1,int param_2)

{
  FUN_14064ee12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b4af8 FUN_1417b4af8 body=353 status=ok
// SIG undefined FUN_1417b4af8(void)

void FUN_1417b4af8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b4b7d;
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
LAB_1417b4b7d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417b4c5a FUN_1417b4c5a body=159 status=ok
// SIG undefined FUN_1417b4c5a(void)

void FUN_1417b4c5a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
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
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_14064cf78(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_1417b4ca5;
    }
  }
  uVar2 = 0;
LAB_1417b4ca5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1417b4cfa FUN_1417b4cfa body=353 status=ok
// SIG undefined FUN_1417b4cfa(void)

void FUN_1417b4cfa(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b4d7f;
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
LAB_1417b4d7f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417b4e5c FUN_1417b4e5c body=57 status=ok
// SIG undefined FUN_1417b4e5c(void)

void FUN_1417b4e5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbf18 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar1,L"AnimNode_StateMachine");
  }
  return;
}



// FUNCTION 1417b4e96 FUN_1417b4e96 body=78 status=ok
// SIG undefined FUN_1417b4e96(void)

void FUN_1417b4e96(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe50 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe50 = FUN_140002ddd(FUN_1463a521a,uVar1,L"AnimNode_AssetPlayerRelevancyBase");
  }
  FUN_1401837d0(param_1,param_2,DAT_14cacbe50);
  return;
}



// FUNCTION 1417b4ee4 FUN_1417b4ee4 body=57 status=ok
// SIG undefined FUN_1417b4ee4(void)

void FUN_1417b4ee4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbb80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbb80 = FUN_140002ddd(FUN_1417b4f1d,uVar1,L"PoseLink");
  }
  return;
}



// FUNCTION 1417b4f1d FUN_1417b4f1d body=49 status=ok
// SIG undefined FUN_1417b4f1d(void)

longlong FUN_1417b4f1d(void)

{
  if (DAT_14cacbb78 == 0) {
    FUN_14086a14e(&DAT_14cacbb78,&PTR_FUN_14a7b4010);
  }
  return DAT_14cacbb78;
}



// FUNCTION 1417b4f4e FUN_1417b4f4e body=49 status=ok
// SIG undefined FUN_1417b4f4e(void)

longlong FUN_1417b4f4e(void)

{
  if (DAT_14cacbba8 == 0) {
    FUN_14086a14e(&DAT_14cacbba8,&PTR_FUN_14a7b40f8);
  }
  return DAT_14cacbba8;
}



// FUNCTION 1417b4f80 FUN_1417b4f80 body=57 status=ok
// SIG undefined FUN_1417b4f80(void)

void FUN_1417b4f80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbc10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbc10 = FUN_140002ddd(FUN_1463a4ef6,uVar1,L"AnimNodeFunctionRef");
  }
  return;
}



// FUNCTION 1417b4fba FUN_1417b4fba body=20 status=ok
// SIG undefined FUN_1417b4fba(void)

void FUN_1417b4fba(longlong *param_1)

{
  FUN_1447d2706(*param_1 + 0x148,param_1[1]);
  return;
}



// FUNCTION 1417b4fce FUN_1417b4fce body=49 status=ok
// SIG undefined FUN_1417b4fce(void)

longlong FUN_1417b4fce(void)

{
  if (DAT_14cacbc48 == 0) {
    FUN_14086a14e(&DAT_14cacbc48,&PTR_FUN_14a7b48f8);
  }
  return DAT_14cacbc48;
}



// FUNCTION 1417b500a FUN_1417b500a body=179 status=ok
// SIG undefined FUN_1417b500a(void)

void FUN_1417b500a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_30 = param_2[5];
    uStack_2c = param_2[7];
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    uStack_20 = param_2[10];
    uStack_1c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_48,plVar1);
      FUN_144b1fd46(&local_48,*(undefined8 *)(param_1 + 0x18));
      FUN_144b1fe18(&local_48,*(undefined8 *)(param_1 + 0x18));
      plVar1 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b50be FUN_1417b50be body=66 status=ok
// SIG undefined FUN_1417b50be(void)

void FUN_1417b50be(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417b50f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1417b5100 FUN_1417b5100 body=894 status=ok
// SIG undefined FUN_1417b5100(void)

void FUN_1417b5100(longlong param_1,longlong *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  longlong local_90;
  longlong lStack_88;
  ulonglong local_80;
  longlong lStack_78;
  ulonglong local_70;
  longlong lStack_68;
  ulonglong local_60;
  longlong lStack_58;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (1e-05 < *(float *)(param_1 + 0xd4)) {
    local_e0 = *param_2;
    local_d8 = 0;
    local_d0 = 1;
    local_cc = 0xffffffffffffffff;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_a7 = 0;
    uStack_a0 = 0;
    uStack_9f = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    lStack_78 = 0;
    local_70 = 0;
    lStack_68 = 0;
    local_60 = 0;
    lStack_58 = 0;
    local_50 = 0;
    local_48 = '\x01';
    lVar4 = *(longlong *)(local_e0 + 0x6a0);
    uVar2 = *(uint *)(lVar4 + 8);
    local_b0 = lVar4;
    if (-1 < (int)uVar2) {
      iVar6 = 0;
      iVar5 = 0;
      if (uVar2 != 0) {
        FUN_144717690(&local_c0,uVar2);
        iVar6 = (int)uStack_b8;
        iVar5 = uStack_b8._4_4_;
      }
      uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar6 + uVar2);
      if ((uint)(iVar5 - iVar6) < uVar2) {
        FUN_1406600da(&local_c0);
      }
      local_90 = lVar4 + 0xb0;
      local_cc = *(undefined8 *)((longlong)param_2 + 0x14);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        if ((char)param_2[0x13] == '\x01') {
          FUN_142400d60(param_2[4],(int)param_2[5]);
        }
        else {
          FUN_1448859f0(param_2 + 4,param_2[6]);
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                  (*(longlong **)(param_1 + 0x18),param_2);
      }
      if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
        if (local_48 == '\x01') {
          FUN_142400d60(local_c0,uStack_b8 & 0xffffffff);
        }
        else {
          FUN_1448859f0(&local_c0,local_b0);
        }
      }
      else {
        local_cc = CONCAT44((int)local_cc,*(undefined4 *)(param_1 + 0x30));
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
      }
      fVar1 = *(float *)(param_1 + 0xd4);
      FUN_140035f34(param_2 + 4,&local_c0,fVar1);
      if (1e-05 < fVar1) {
        FUN_144716836(param_2 + 7,&uStack_a8,fVar1);
      }
      FUN_140035fa4(&lStack_88,param_2 + 0xb,fVar1,2);
      FUN_142400cf0(param_2[4],(int)param_2[5]);
      FUN_142400cf0(param_2[4],(int)param_2[5]);
      if (lStack_58 != 0) {
        FUN_1400020a8();
      }
      FUN_144716785(lStack_68,local_60 & 0xffffffff);
      if (lStack_68 != 0) {
        FUN_1400020a8();
      }
      FUN_144716758(lStack_78,local_70 & 0xffffffff);
      if (lStack_78 != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(lStack_88,local_80 & 0xffffffff);
      if (lStack_88 != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
  }
  if ((char)param_2[0x13] != '\x01') {
    if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
      FUN_1448859f0(param_2 + 4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108,param_2[6]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 1417b54d8 FUN_1417b54d8 body=57 status=ok
// SIG undefined FUN_1417b54d8(void)

void FUN_1417b54d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe08 = FUN_140002ddd(FUN_1463a568e,uVar1,L"AnimNode_LinkedAnimGraph");
  }
  return;
}



// FUNCTION 1417b5512 FUN_1417b5512 body=57 status=ok
// SIG undefined FUN_1417b5512(void)

void FUN_1417b5512(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe20 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe20 = FUN_140002ddd(FUN_1463a56ee,uVar1,L"AnimNode_LinkedAnimLayer");
  }
  return;
}



// FUNCTION 1417b55f2 FUN_1417b55f2 body=1076 status=ok
// SIG undefined FUN_1417b55f2(void)

void FUN_1417b55f2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_168 [40];
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  undefined1 *local_98;
  wchar_t *local_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60 [2];
  undefined1 local_50;
  char local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if ((plVar4 != (longlong *)0x0) && (plVar4[8] != 0)) {
    lVar5 = param_2[0x13];
    cVar3 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
    if ((cVar3 == '\0') && ((char)lVar5 != '\0')) {
      FUN_140009b9a(local_d0,*param_2 + 0x160);
      local_90 = (wchar_t *)plVar4[3];
      FUN_1400021e4(&local_90,local_f0);
      FUN_140233b1a(local_e0,local_f0);
      local_90 = L"AdditiveMismatchWarning";
      local_88 = 0x17;
      FUN_1446e940c(local_114,&local_90);
      local_90 = L"AnimNode_SequencePlayer";
      local_88 = 0x17;
      FUN_1446e940c(local_118,&local_90);
      FUN_140208bae(local_110,local_118,local_114,
                    L"Trying to play a non-additive animation \'{0}\' into a pose that is expected to be additive in anim instance \'{1}\'"
                   );
      FUN_14023409e(&local_100,local_110,1);
      local_90 = (wchar_t *)CONCAT44(local_90._4_4_,4);
      FUN_14023423e((longlong)&local_84 + 4,local_e0);
      local_70 = CONCAT44(local_70._4_4_,4);
      FUN_14023423e(local_60,local_d0);
      local_98 = &local_50;
      local_a0 = &local_90;
      FUN_14010d304(&local_140);
      local_b0 = local_100;
      local_a8 = local_f8;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_c0,&local_b0,&local_140);
      FUN_14007f2db(local_140,(ulonglong)local_138 & 0xffffffff);
      if (local_140 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_90 + lVar5) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_90 + lVar5) + 0x10))();
          *(undefined8 *)((longlong)&local_90 + lVar5) = 0;
          *(undefined4 *)((longlong)&local_88 + lVar5) = 0;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != -0x10);
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
      if (local_e0[0] != (longlong *)0x0) {
        (**(code **)(*local_e0[0] + 0x10))();
      }
      if (local_d0[0] != (longlong *)0x0) {
        (**(code **)(*local_d0[0] + 0x10))();
      }
      if (local_110[0] != (longlong *)0x0) {
        (**(code **)(*local_110[0] + 0x10))();
      }
      if (local_f0[0] != 0) {
        FUN_1400020a8();
      }
      local_128 = local_c0;
      if (local_c0 == (longlong *)0x0) {
        local_120 = local_b8;
        FUN_1474c7e4c(param_2,3);
      }
      else {
        (**(code **)(*local_c0 + 8))(local_c0);
        local_120 = local_b8;
        FUN_1474c7e4c(param_2,3);
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
    local_140 = param_2 + 4;
    local_138 = param_2 + 7;
    local_130 = param_2 + 0xb;
    local_78 = (**(code **)(*param_1 + 0x120))(param_1);
    local_84 = param_1[6];
    local_7c = (undefined4)param_1[7];
    local_90 = (wchar_t *)(double)*(float *)((longlong)param_1 + 0x2c);
    local_88 = CONCAT31(local_88._1_3_,*(byte *)(*param_2 + 0x7e1) >> 1) & 0xffffff01;
    local_4f = '\0';
    local_70 = 0;
    uStack_68 = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    (**(code **)(*plVar4 + 0x328))(plVar4,&local_140,&local_90);
    if (local_4f == '\x01') {
      local_4f = '\0';
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    FUN_1448859f0(param_2 + 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168,param_2[6]);
}



// FUNCTION 1417b5a68 FUN_1417b5a68 body=38 status=ok
// SIG undefined FUN_1417b5a68(void)

undefined8 FUN_1417b5a68(undefined8 param_1,int param_2)

{
  FUN_14064e066();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b5a8e FUN_1417b5a8e body=93 status=ok
// SIG undefined FUN_1417b5a8e(void)

undefined8 * FUN_1417b5a8e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14499183d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1479155e2(param_1,iVar1);
      FUN_140ed4074(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1417b5aec FUN_1417b5aec body=205 status=ok
// SIG undefined FUN_1417b5aec(void)

undefined8 FUN_1417b5aec(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  if (param_4 != 0) {
    puVar14 = (undefined8 *)(param_2 + 0x38);
    do {
      *(undefined2 *)(puVar14 + -5) = *(undefined2 *)(param_3 + 2);
      puVar14[-6] = param_3[1];
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar5 = *(undefined4 *)(param_3 + 4);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar8 = *(undefined4 *)(param_3 + 5);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
      uVar10 = *(undefined4 *)(param_3 + 6);
      *(undefined4 *)(puVar14 + -4) = *(undefined4 *)(param_3 + 3);
      *(undefined4 *)((longlong)puVar14 + -0x1c) = uVar4;
      *(undefined4 *)(puVar14 + -3) = uVar5;
      *(undefined4 *)((longlong)puVar14 + -0x14) = uVar6;
      *(undefined4 *)((longlong)puVar14 + -0x14) = uVar7;
      *(undefined4 *)(puVar14 + -2) = uVar8;
      *(undefined4 *)((longlong)puVar14 + -0xc) = uVar9;
      *(undefined4 *)(puVar14 + -1) = uVar10;
      if (puVar14 + -7 != param_3) {
        FUN_144728aa2(*puVar14,*(undefined4 *)(puVar14 + 1));
        iVar2 = *(int *)(param_3 + 8);
        uVar3 = param_3[7];
        *(int *)(puVar14 + 1) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)puVar14 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
        }
        else {
          FUN_147918af4(puVar14,iVar2);
          FUN_147918b56(*puVar14,uVar3,iVar2);
        }
      }
      uVar3 = param_3[9];
      uVar11 = param_3[10];
      uVar12 = param_3[0xb];
      uVar13 = param_3[0xc];
      uVar4 = *(undefined4 *)(param_3 + 0xd);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x6c);
      uVar6 = *(undefined4 *)(param_3 + 0xe);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x74);
      puVar1 = param_3 + 0xf;
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x7c);
      uVar9 = *(undefined4 *)(param_3 + 0x10);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x84);
      param_3 = param_3 + 0x11;
      *(undefined4 *)(puVar14 + 8) = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar14 + 0x44) = uVar8;
      *(undefined4 *)(puVar14 + 9) = uVar9;
      *(undefined4 *)((longlong)puVar14 + 0x4c) = uVar10;
      *(undefined4 *)(puVar14 + 6) = uVar4;
      *(undefined4 *)((longlong)puVar14 + 0x34) = uVar5;
      *(undefined4 *)(puVar14 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar7;
      puVar14[4] = uVar12;
      puVar14[5] = uVar13;
      puVar14[2] = uVar3;
      puVar14[3] = uVar11;
      puVar14 = puVar14 + 0x11;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1417b5bba FUN_1417b5bba body=29 status=ok
// SIG undefined FUN_1417b5bba(void)

undefined8 FUN_1417b5bba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b5bd8 FUN_1417b5bd8 body=373 status=ok
// SIG undefined FUN_1417b5bd8(void)

void FUN_1417b5bd8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b5c61;
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
LAB_1417b5c61:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1417b5d4e FUN_1417b5d4e body=189 status=ok
// SIG undefined FUN_1417b5d4e(void)

undefined8 * FUN_1417b5d4e(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x1c0);
  memset(_Dst,0,0x1b0);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 1) = DVar1;
  *_Dst = &PTR_FUN_14a7be070;
  _Dst[0xf] = 0;
  _Dst[0x10] = 0x800000000;
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0x800000000;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0x800000000;
  _Dst[0x22] = 0;
  _Dst[0x23] = 0x800000000;
  _Dst[0x2c] = 0;
  _Dst[0x2d] = 0x800000000;
  _Dst[0x36] = 0;
  _Dst[0x37] = 0x800000000;
  return _Dst;
}



// FUNCTION 1417b5e0c FUN_1417b5e0c body=29 status=ok
// SIG undefined FUN_1417b5e0c(void)

undefined8 FUN_1417b5e0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b5e2a FUN_1417b5e2a body=29 status=ok
// SIG undefined FUN_1417b5e2a(void)

undefined8 FUN_1417b5e2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b5e48 FUN_1417b5e48 body=29 status=ok
// SIG undefined FUN_1417b5e48(void)

undefined8 FUN_1417b5e48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b5e66 FUN_1417b5e66 body=1547 status=ok
// SIG undefined FUN_1417b5e66(void)

void FUN_1417b5e66(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_b8 [32];
  uint *local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0xc68) = 0;
  if (*(longlong *)(param_1 + 0xc60) != 0) {
    FUN_1400020a8();
  }
  lVar11 = param_1 + 0xaa8;
  lVar9 = param_1 + 0xc38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar9;
  if (*(int *)(param_1 + 0xc48) != 0) {
    FUN_144a81a4c(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = lVar11;
  if (iStack_54 < *(int *)(local_60 + 0x10)) {
    do {
      lVar8 = *(longlong *)(local_90 + 0x180);
      if (*(longlong *)(local_90 + 0x180) == 0) {
        lVar8 = local_90;
      }
      if (*(longlong *)(lVar8 + 0x48 + (longlong)iStack_74 * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_144a81a4c(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x10));
  }
  *(undefined4 *)(param_1 + 0xc30) = 0;
  if (*(int *)(param_1 + 0xc34) != 0) {
    FUN_144729344(lVar11,0);
  }
  *(undefined8 *)(param_1 + 0xc50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc48) = 0;
  if (0x20 < *(uint *)(param_1 + 0xc4c)) {
    *(undefined4 *)(param_1 + 0xc4c) = 0x20;
    FUN_14008f53c(lVar9,0);
  }
  if (*(longlong *)(param_1 + 0xc40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc28) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  if (*(longlong *)(param_1 + 0xa98) != 0) {
    FUN_1400020a8();
  }
  local_98 = (uint *)(param_1 + 0xa68);
  iVar2 = *(int *)(param_1 + 0xa78);
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0xa70);
    if (*(uint **)(param_1 + 0xa70) == (uint *)0x0) {
      puVar7 = local_98;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_1417b6006;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0xa58);
      if (*(longlong *)(param_1 + 0xa58) == 0) {
        lVar11 = param_1 + 0x158;
      }
      lVar11 = lVar11 + (longlong)iVar3 * 0x120;
      lVar9 = *(longlong *)(lVar11 + 0x108);
      if (*(longlong *)(lVar11 + 0x108) == 0) {
        lVar9 = lVar11 + 8;
      }
      FUN_14474a06b(lVar9,*(undefined4 *)(lVar11 + 0x110));
      if (*(longlong *)(lVar11 + 0x108) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = *(uint **)(param_1 + 0xa70);
      if (*(uint **)(param_1 + 0xa70) == (uint *)0x0) {
        puVar7 = local_98;
      }
      iVar2 = *(int *)(param_1 + 0xa78);
      iVar3 = (int)uVar14;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar11 == lVar9) goto LAB_1417b6006;
        }
        uVar14 = (ulonglong)(iVar3 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1417b6006:
  *(undefined4 *)(param_1 + 0xa60) = 0;
  if (*(int *)(param_1 + 0xa64) != 0) {
    FUN_14472925c(param_1 + 0x158,0);
  }
  *(undefined8 *)(param_1 + 0xa80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa78) = 0;
  if (0x20 < *(uint *)(param_1 + 0xa7c)) {
    *(undefined4 *)(param_1 + 0xa7c) = 0x20;
    FUN_14008f53c(local_98,0);
  }
  if (*(longlong *)(param_1 + 0xa70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  lVar11 = param_1 + 0x10;
  lVar9 = param_1 + 0x120;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar9;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_144a81a4c(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = lVar11;
  if (iStack_54 < *(int *)(local_60 + 0x10)) {
    do {
      lVar8 = *(longlong *)(local_90 + 0x100);
      if (*(longlong *)(local_90 + 0x100) == 0) {
        lVar8 = local_90;
      }
      if (*(longlong *)(lVar8 + 0x28 + (longlong)iStack_74 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_144a81a4c(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_144729186(lVar11,0);
  }
  *(undefined8 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (0x20 < *(uint *)(param_1 + 0x134)) {
    *(undefined4 *)(param_1 + 0x134) = 0x20;
    FUN_14008f53c(lVar9,0);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b6472 FUN_1417b6472 body=160 status=ok
// SIG undefined FUN_1417b6472(void)

void FUN_1417b6472(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 200)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 200,8);
      uVar3 = uVar3 / 200;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,200,8);
    }
  }
  return;
}



// FUNCTION 1417b6512 FUN_1417b6512 body=353 status=ok
// SIG undefined FUN_1417b6512(void)

void FUN_1417b6512(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b6597;
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
LAB_1417b6597:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417b66a4 FUN_1417b66a4 body=49 status=ok
// SIG undefined FUN_1417b66a4(void)

longlong FUN_1417b66a4(void)

{
  if (DAT_14cacc3d8 == 0) {
    FUN_14073dd9a(&DAT_14cacc3d8,&PTR_LAB_14a7be980);
  }
  return DAT_14cacc3d8;
}



// FUNCTION 1417b66d5 FUN_1417b66d5 body=49 status=ok
// SIG undefined FUN_1417b66d5(void)

longlong FUN_1417b66d5(void)

{
  if (DAT_14cacc460 == 0) {
    FUN_14086a14e(&DAT_14cacc460,&PTR_FUN_14a7bfd60);
  }
  return DAT_14cacc460;
}



// FUNCTION 1417b6706 FUN_1417b6706 body=49 status=ok
// SIG undefined FUN_1417b6706(void)

longlong FUN_1417b6706(void)

{
  if (DAT_14cacc518 == 0) {
    FUN_14073dd9a(&DAT_14cacc518,&PTR_LAB_14a7c0990);
  }
  return DAT_14cacc518;
}



// FUNCTION 1417b673c FUN_1417b673c body=1640 status=ok
// SIG undefined FUN_1417b673c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1417b673c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float extraout_XMM0_Da;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_1f8 [32];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((param_5 != 0) && (*(char *)(param_5 + 0x524) == '\x01')) &&
     (*(float *)(param_5 + 0x52c) < 0.0)) {
    uVar5 = FUN_140dbaa93(param_5);
    *(undefined4 *)(param_5 + 0x52c) = uVar5;
  }
  FUN_144943c1c(param_1,&local_178);
  fVar13 = (float)FUN_140167f2b(param_1);
  dVar14 = (double)fVar13;
  local_158 = dVar14 * local_158;
  dStack_150 = dVar14 * dStack_150;
  local_148 = dVar14 * local_148;
  dStack_140 = dStack_140 * 0.0;
  FUN_144943c1c(param_1,&local_1d8,param_4,0);
  plVar9 = param_1;
  uVar5 = FUN_140167f2b();
  uVar8 = SUB84(plVar9,0);
  dVar14 = (double)extraout_XMM0_Da;
  local_1b8 = dVar14 * local_1b8;
  dStack_1b0 = dVar14 * dStack_1b0;
  local_1a8 = dVar14 * local_1a8;
  dStack_1a0 = dStack_1a0 * 0.0;
  if (*(char *)((longlong)param_1 + 0x17c) == '\x01') {
    local_198 = 1.0;
    dStack_190 = 1.0;
    local_138 = 1.0;
    dStack_130 = 1.0;
    local_188 = 1.0;
    local_128 = 1.0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x2c0))();
    uVar8 = SUB84(param_1,0);
    if ((char)uVar5 == '\0') goto LAB_1417b68b9;
    local_128 = local_128 + 1.0;
    dStack_130 = dStack_130 + 1.0;
    local_138 = local_138 + 1.0;
    local_188 = local_188 + 1.0;
    dStack_190 = dStack_190 + 1.0;
    local_198 = local_198 + 1.0;
  }
  uStack_120 = 0;
  dStack_180 = 0.0;
LAB_1417b68b9:
  auVar28 = _DAT_149934d80;
  local_118 = ZEXT816(0);
  local_108 = 0.0;
  dStack_100 = 1.0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = ZEXT816(0);
  local_d8 = _DAT_149934d80;
  local_c8._0_16_ = ZEXT816(0x3ff0000000000000);
  dVar14 = local_168 * local_168 + local_178 * local_178;
  dVar23 = dStack_160 * dStack_160 + dStack_170 * dStack_170;
  auVar18._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar14 + dVar23)));
  auVar18._0_8_ =
       -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar14 + dVar23)));
  iVar6 = movmskpd(uVar5,auVar18);
  if (iVar6 == 0) {
    auVar21._8_8_ = dStack_190;
    auVar21._0_8_ = local_198;
    auVar1._8_8_ = dStack_180;
    auVar1._0_8_ = local_188;
    auVar2._8_8_ = dStack_130;
    auVar2._0_8_ = local_138;
    auVar18 = minpd(auVar21,auVar2);
    auVar4._8_8_ = uStack_120;
    auVar4._0_8_ = local_128;
    auVar21 = minpd(auVar1,auVar4);
    auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
    auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
    iVar6 = movmskpd(0,auVar19);
    auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
    uVar7 = movmskpd(uVar8,auVar22);
    if ((uVar7 & 0x3fffffff) == 0 && iVar6 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
      {
        DAT_14c8460a0 = 0x322bcc77322bcc77;
        DAT_14c8460a8 = 0x322bcc77322bcc77;
        _Init_thread_footer(&DAT_14c8460b0);
      }
      auVar3._8_8_ = dStack_130;
      auVar3._0_8_ = local_138;
      auVar18 = divpd(auVar28,auVar3);
      auVar28._8_8_ = uStack_120;
      auVar28._0_8_ = local_128;
      auVar28 = divpd(ZEXT816(0x3ff0000000000000),auVar28);
      dVar20 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(local_138)) & auVar18._0_8_)
      ;
      dVar24 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(dStack_130)) &
                       auVar18._8_8_);
      dVar15 = (double)(-(ulonglong)((double)(float)DAT_14c8460a8 < ABS(local_128)) & auVar28._0_8_)
      ;
      dVar25 = local_1b8 - local_158;
      dVar26 = dStack_1b0 - dStack_150;
      dVar30 = local_1a8 - local_148;
      dVar27 = -local_178;
      dVar29 = -dStack_170;
      local_168 = local_168 * -1.0;
      dStack_160 = dStack_160 * 1.0;
      dVar16 = dVar26 * dVar27 - dVar25 * dVar29;
      dVar17 = dVar30 * dVar29 - dVar26 * local_168;
      dVar31 = dVar25 * local_168 - dVar30 * dVar27;
      dVar14 = dStack_160 * 0.0 - dStack_160 * 0.0;
      dVar17 = dVar17 + dVar17;
      dVar31 = dVar31 + dVar31;
      dVar16 = dVar16 + dVar16;
      dVar14 = dVar14 + dVar14;
      dVar14 = ((dVar14 * dStack_160 - dVar14 * dStack_160) + dStack_160 * dVar14 + 0.0) * 0.0;
      dVar23 = local_1d8 * local_168 * 1.0 +
               ((dStack_1d0 * dStack_160 - local_178 * local_1c8 * -1.0) - dStack_1c0 * dStack_170);
      local_d8._8_8_ = dStack_190 * dVar24;
      local_d8._0_8_ = local_198 * dVar20;
      local_c8._8_8_ = dStack_180 * 0.0;
      local_c8._0_8_ = local_188 * dVar15;
      local_f8 = ((dVar16 * dVar29 - local_168 * dVar31) + dStack_160 * dVar17 + dVar25) * dVar20;
      dStack_f0 = ((dVar17 * local_168 - dVar16 * dVar27) + dStack_160 * dVar31 + dVar26) * dVar24;
      local_e8._8_4_ = SUB84(dVar14,0);
      local_e8._0_8_ = ((dVar31 * dVar27 - dVar29 * dVar17) + dStack_160 * dVar16 + dVar30) * dVar15
      ;
      local_e8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      local_118._8_4_ = SUB84(dVar23,0);
      local_118._0_8_ =
           dStack_1d0 * local_168 * -1.0 +
           ((local_1d8 * dStack_160 - local_178 * dStack_1c0 * 1.0) - local_1c8 * dStack_170);
      local_118._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      local_108 = dStack_1c0 * local_168 * 1.0 +
                  dStack_170 * local_1d8 + (dStack_160 * local_1c8 - local_178 * dStack_1d0 * 1.0);
      dStack_100 = local_1c8 * local_168 * -1.0 +
                   dStack_170 * dStack_1d0 +
                   (dStack_160 * dStack_1c0 - local_178 * local_1d8 * -1.0);
    }
    else {
      FUN_1402db8fa(local_118,&local_1d8,&local_178);
    }
    puVar11 = (undefined8 *)local_118;
  }
  else {
    puVar11 = &DAT_14c846480;
  }
  puVar12 = param_2;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  if ((local_b0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417b6da5 FUN_1417b6da5 body=56 status=ok
// SIG undefined FUN_1417b6da5(void)

void FUN_1417b6da5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4820a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7c7640;
  puVar1[0x87] = 0;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  return;
}



// FUNCTION 1417b6dde FUN_1417b6dde body=186 status=ok
// SIG undefined FUN_1417b6dde(void)

void FUN_1417b6dde(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x448) != 0) && (*(int *)(param_1 + 0x444) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x440);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x444))) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_1 + 0x448),1);
        if (lVar2 != 0) {
          plVar4 = (longlong *)FUN_14479d2ce((uint *)(param_1 + 0x440));
          uVar3 = FUN_14477b072(plVar4,*(undefined8 *)(param_1 + 0x448));
                    /* WARNING: Could not recover jumptable at 0x0001417b6e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x248))(plVar4,uVar3,0,*(code **)(*plVar4 + 0x248));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1417b6e98 FUN_1417b6e98 body=96 status=ok
// SIG undefined FUN_1417b6e98(void)

void FUN_1417b6e98(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_14005d520();
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x5e8) = 0xffff;
  *(undefined8 *)(param_1 + 0x5e0) = 0xffffffffffffffff;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x940) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x948) = uVar1;
  *(undefined8 *)(param_1 + 0x950) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x984) = 0;
  *(undefined8 *)(param_1 + 0x98c) = 0;
  *(byte *)(param_1 + 0x918) = *(byte *)(param_1 + 0x918) & 0xfe;
  return;
}



// FUNCTION 1417b6ef8 FUN_1417b6ef8 body=116 status=ok
// SIG undefined FUN_1417b6ef8(void)

void FUN_1417b6ef8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x778);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x770);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      pcVar4 = *(code **)(*plVar3 + 0x50);
      if (pcVar4 != (code *)&LAB_144b0893a) {
        if (pcVar4 == FUN_14007c12c) {
          FUN_14007c12c(plVar3,param_2);
        }
        else {
          (*pcVar4)();
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1417b6f6c FUN_1417b6f6c body=29 status=ok
// SIG undefined FUN_1417b6f6c(void)

undefined8 FUN_1417b6f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b6f8a FUN_1417b6f8a body=40 status=ok
// SIG undefined FUN_1417b6f8a(void)

undefined8 FUN_1417b6f8a(undefined8 param_1,int param_2)

{
  FUN_14064ee12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b6fb2 FUN_1417b6fb2 body=60 status=ok
// SIG undefined FUN_1417b6fb2(void)

void FUN_1417b6fb2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_140e6d428(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1417b6fee FUN_1417b6fee body=49 status=ok
// SIG undefined FUN_1417b6fee(void)

longlong FUN_1417b6fee(void)

{
  if (DAT_14caccb10 == 0) {
    FUN_14086a14e(&DAT_14caccb10,&PTR_FUN_14a7ce648);
  }
  return DAT_14caccb10;
}



// FUNCTION 1417b701f FUN_1417b701f body=49 status=ok
// SIG undefined FUN_1417b701f(void)

longlong FUN_1417b701f(void)

{
  if (DAT_14caccdd0 == 0) {
    FUN_14086a14e(&DAT_14caccdd0,&PTR_FUN_14a7cfd18);
  }
  return DAT_14caccdd0;
}



// FUNCTION 1417b7050 FUN_1417b7050 body=289 status=ok
// SIG undefined FUN_1417b7050(void)

void FUN_1417b7050(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  FUN_1446e0b6e();
  if ((*(longlong *)(param_1 + 0x30) != 0) && ((longlong)*(int *)(param_1 + 0x40) != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x38);
    plVar1 = (longlong *)((longlong)plVar6 + (longlong)*(int *)(param_1 + 0x40) * 0x14);
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      if ((lVar3 == 0) || (lVar4 = *plVar6, lVar4 == 0)) {
        *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) | 0x7fffffff;
      }
      else {
        uVar7 = 0xffffffff;
        if (*(int *)(lVar3 + 0xe8) != *(int *)(lVar3 + 0x114)) {
          uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
          uVar10 = (uint)lVar4 & 0xffff;
          lVar9 = lVar3 + 0x118;
          if (*(longlong *)(lVar3 + 0x120) != 0) {
            lVar9 = *(longlong *)(lVar3 + 0x120);
          }
          iVar8 = *(int *)(lVar9 + (ulonglong)
                                   (*(int *)(lVar3 + 0x128) - 1U &
                                   (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar10)
                                   + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              plVar2 = (longlong *)(*(longlong *)(lVar3 + 0xe0) + (longlong)iVar8 * 0x14);
              if (*plVar2 == lVar4) {
                if ((plVar2 != (longlong *)0x0) && ((uint *)(plVar2 + 1) != (uint *)0x0)) {
                  uVar7 = *(uint *)(plVar2 + 1);
                }
                break;
              }
              iVar8 = *(int *)((longlong)plVar2 + 0xc);
            } while (iVar8 != -1);
          }
        }
        *(uint *)(plVar6 + 1) = uVar7 | 0x80000000;
      }
      *(undefined4 *)((longlong)plVar6 + 0xc) = 0xffffffff;
      plVar6 = (longlong *)((longlong)plVar6 + 0x14);
    } while (plVar6 != plVar1);
  }
  return;
}



// FUNCTION 1417b7172 FUN_1417b7172 body=67 status=ok
// SIG undefined FUN_1417b7172(void)

void FUN_1417b7172(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  FUN_140191baa(param_1,param_2);
  return;
}



// FUNCTION 1417b71b5 FUN_1417b71b5 body=162 status=ok
// SIG undefined FUN_1417b71b5(void)

void FUN_1417b71b5(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  ulonglong *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_140aecc84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7cf2e0;
  puVar1[5] = &PTR_FUN_14a7cf5c0;
  puVar1[6] = &PTR_FUN_14a7cf600;
  puVar1[7] = &PTR_FUN_14a7cf630;
  puVar1[0x11] = &PTR_FUN_14a7cf660;
  local_28 = &local_14;
  local_14 = 0;
  local_20 = &local_10;
  FUN_140aece26(puVar1 + 0x37);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b7258 FUN_1417b7258 body=49 status=ok
// SIG undefined FUN_1417b7258(void)

longlong FUN_1417b7258(void)

{
  if (DAT_14cacce00 == 0) {
    FUN_14086a14e(&DAT_14cacce00,&PTR_FUN_14a7cff40);
  }
  return DAT_14cacce00;
}



// FUNCTION 1417b7289 FUN_1417b7289 body=49 status=ok
// SIG undefined FUN_1417b7289(void)

longlong FUN_1417b7289(void)

{
  if (DAT_14caccf38 == 0) {
    FUN_14086a14e(&DAT_14caccf38,&PTR_FUN_14a7d1d48);
  }
  return DAT_14caccf38;
}



// FUNCTION 1417b72ba FUN_1417b72ba body=57 status=ok
// SIG undefined FUN_1417b72ba(void)

void FUN_1417b72ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd030 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd030 = FUN_140002ddd(FUN_1463a9b3e,uVar1,L"AnimNodeExposedValueHandler");
  }
  return;
}



// FUNCTION 1417b72f3 FUN_1417b72f3 body=49 status=ok
// SIG undefined FUN_1417b72f3(void)

longlong FUN_1417b72f3(void)

{
  if (DAT_14cacd080 == 0) {
    FUN_14086a14e(&DAT_14cacd080,&PTR_FUN_14a7d3390);
  }
  return DAT_14cacd080;
}



// FUNCTION 1417b7324 FUN_1417b7324 body=49 status=ok
// SIG undefined FUN_1417b7324(void)

longlong FUN_1417b7324(void)

{
  if (DAT_14cacd098 == 0) {
    FUN_14086a14e(&DAT_14cacd098,&PTR_FUN_14a7d3470);
  }
  return DAT_14cacd098;
}



// FUNCTION 1417b7355 FUN_1417b7355 body=49 status=ok
// SIG undefined FUN_1417b7355(void)

longlong FUN_1417b7355(void)

{
  if (DAT_14cacd0b0 == 0) {
    FUN_14086a14e(&DAT_14cacd0b0,&PTR_FUN_14a7d3860);
  }
  return DAT_14cacd0b0;
}



// FUNCTION 1417b7386 FUN_1417b7386 body=49 status=ok
// SIG undefined FUN_1417b7386(void)

longlong FUN_1417b7386(void)

{
  if (DAT_14cacd140 == 0) {
    FUN_14086a14e(&DAT_14cacd140,&PTR_FUN_14a7d41c0);
  }
  return DAT_14cacd140;
}



// FUNCTION 1417b73b7 FUN_1417b73b7 body=155 status=ok
// SIG undefined FUN_1417b73b7(void)

void FUN_1417b73b7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14061ea1a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a7d65d0;
  puVar1[5] = &PTR_FUN_14a7d68a0;
  puVar1[6] = &PTR_FUN_14a7d68e0;
  puVar1[7] = &PTR_FUN_14a7d6910;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xfc) = 0xffffffff;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  return;
}



// FUNCTION 1417b7452 FUN_1417b7452 body=105 status=ok
// SIG undefined FUN_1417b7452(void)

void FUN_1417b7452(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  FUN_140191baa(param_1,param_2);
  return;
}



// FUNCTION 1417b74bc FUN_1417b74bc body=454 status=ok
// SIG undefined FUN_1417b74bc(void)

void FUN_1417b74bc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  
  FUN_140d77aa8();
  lVar3 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) < 0) {
    FUN_14481578e();
  }
  if (lVar3 != 0) {
    iVar10 = *(int *)(param_1 + 0xb0);
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 < iVar10) {
      *(int *)(param_1 + 0xc0) = iVar10;
      if ((uint)(*(int *)(param_1 + 0xc4) - iVar2) < (uint)(iVar10 - iVar2)) {
        FUN_1446f48e2((longlong *)(param_1 + 0xb8));
      }
      memset((void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0xb8)),0,
             (longlong)(iVar10 - iVar2) << 2);
    }
    else {
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if (iVar10 < iVar2) {
        *(int *)(param_1 + 0xc0) = iVar10;
        FUN_14479f406();
      }
    }
    if (0 < *(int *)(param_1 + 0xb0)) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar6 * 8);
        uVar7 = 0xffffffff;
        if ((lVar4 != 0) && (*(int *)(lVar3 + 0xe8) != *(int *)(lVar3 + 0x114))) {
          uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
          uVar9 = (uint)lVar4 & 0xffff;
          lVar8 = *(longlong *)(lVar3 + 0x120);
          if (*(longlong *)(lVar3 + 0x120) == 0) {
            lVar8 = lVar3 + 0x118;
          }
          iVar10 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(lVar3 + 0x128) - 1U &
                                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9)
                                    + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              plVar1 = (longlong *)(*(longlong *)(lVar3 + 0xe0) + (longlong)iVar10 * 0x14);
              if (*plVar1 == lVar4) {
                if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                  uVar7 = (undefined4)plVar1[1];
                }
                break;
              }
              iVar10 = *(int *)((longlong)plVar1 + 0xc);
            } while (iVar10 != -1);
          }
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + lVar6 * 4) = uVar7;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0xb0));
    }
  }
  return;
}



// FUNCTION 1417b7684 FUN_1417b7684 body=453 status=ok
// SIG undefined FUN_1417b7684(void)

void FUN_1417b7684(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  if ((*(char *)(param_1 + 0x178) != '\x03') || (lVar1 = *(longlong *)(param_1 + 0x398), lVar1 == 0)
     ) goto LAB_1417b772c;
  lVar3 = *(longlong *)(lVar1 + 0x658);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(lVar1 + 0x660);
    if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_1417b7830;
    if (lVar3 != 0) goto LAB_1417b76e9;
LAB_1417b778e:
    lVar3 = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1417b7830:
      FUN_1456cec3c(lVar3);
    }
LAB_1417b76e9:
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
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
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_1417b778e;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
  }
  *(longlong *)(param_1 + 0x3a0) = lVar3;
LAB_1417b772c:
  if (*(longlong **)(param_1 + 0x398) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0xb98))();
    *(undefined8 *)(param_1 + 0x3a8) = uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b784a FUN_1417b784a body=46 status=ok
// SIG undefined FUN_1417b784a(void)

void FUN_1417b784a(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    return;
  }
  FUN_140457ffc(&DAT_14c964770,param_1);
  return;
}



// FUNCTION 1417b7878 FUN_1417b7878 body=1591 status=ok
// SIG undefined FUN_1417b7878(void)

void FUN_1417b7878(void)

{
  PSRWLOCK pRVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  PVOID pvVar7;
  byte bVar8;
  PSRWLOCK SRWLock;
  PSRWLOCK pRVar9;
  uint *puVar10;
  PSRWLOCK pRVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  PSRWLOCK pRVar16;
  PSRWLOCK pRVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar27;
  
  SRWLock = DAT_14cacd528;
  if (DAT_14cacd528 == (PSRWLOCK)0x0) {
    return;
  }
  AcquireSRWLockExclusive(DAT_14cacd528);
  pRVar9 = DAT_14cacd528;
  pRVar1 = DAT_14cacd528 + 3;
  uVar20 = *(uint *)&DAT_14cacd528[6].Ptr;
  if (uVar20 == 0) {
    uVar25 = 1;
    uVar26 = 0;
    uVar19 = 0;
    iVar27 = 0;
  }
  else {
    pRVar16 = DAT_14cacd528[5].Ptr;
    if (DAT_14cacd528[5].Ptr == (PSRWLOCK)0x0) {
      pRVar16 = pRVar1;
    }
    uVar19 = *(uint *)&pRVar16->Ptr;
    if (uVar19 == 0) {
      iVar27 = uVar20 + 0x1e;
      if (-1 < (int)(uVar20 - 1)) {
        iVar27 = uVar20 - 1;
      }
      uVar26 = 0;
      uVar25 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar25 = uVar26;
      }
      iVar27 = 0;
      do {
        if (uVar25 == uVar26) goto LAB_1417b7b80;
        iVar27 = iVar27 + 0x20;
        uVar19 = *(uint *)((longlong)&pRVar16->Ptr + uVar26 * 4 + 4);
        uVar26 = uVar26 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar26 = 0;
      iVar27 = 0;
    }
    uVar25 = (ulonglong)(-uVar19 & uVar19);
    uVar5 = uVar25 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar19 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar20 <= (int)uVar19) {
      uVar19 = uVar20;
    }
  }
  if ((int)uVar19 < (int)uVar20) {
    pRVar16 = DAT_14cacd528 + 1;
    pRVar11 = DAT_14cacd528 + 8;
    uVar24 = 0xffffffff;
    do {
      puVar4 = (uint *)((longlong)pRVar16->Ptr + (longlong)(int)uVar19 * 0x28);
      if (((((puVar4[1] == 0) || (uVar6 = *puVar4, (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6)
           ) || (((plVar22 = (longlong *)
                             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                  plVar22 == (longlong *)0x0 || (*(uint *)(plVar22 + 2) != puVar4[1])) ||
                 (((*(uint *)(plVar22 + 1) & 0x10200000) != 0 ||
                  ((*plVar22 == 0 || (puVar4[3] == 0)))))))) ||
         ((uVar6 = puVar4[2], (int)uVar6 < 0 ||
          ((((DAT_14c9647dc <= (int)uVar6 ||
             (plVar22 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             plVar22 == (longlong *)0x0)) || (*(uint *)(plVar22 + 2) != puVar4[3])) ||
           (((*(uint *)(plVar22 + 1) & 0x10200000) != 0 || (*plVar22 == 0)))))))) {
        pRVar17 = pRVar9[9].Ptr;
        if (pRVar9[9].Ptr == (PSRWLOCK)0x0) {
          pRVar17 = pRVar11;
        }
        uVar20 = *(uint *)((longlong)&pRVar17->Ptr + (longlong)(int)puVar4[9] * 4);
        if (uVar20 == uVar19) {
          puVar10 = (uint *)((longlong)&pRVar17->Ptr + (longlong)(int)puVar4[9] * 4);
        }
        else {
          do {
            puVar10 = (uint *)((longlong)pRVar16->Ptr + (longlong)(int)uVar20 * 0x28 + 0x20);
            uVar20 = *puVar10;
          } while (uVar20 != uVar19);
        }
        *puVar10 = puVar4[8];
        plVar22 = *(longlong **)((longlong)pRVar16->Ptr + (longlong)(int)uVar19 * 0x28 + 0x18);
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar22 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar3 = (int *)((longlong)plVar22 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
        FUN_1401047ee(pRVar16,uVar19);
        uVar20 = *(uint *)&pRVar9[6].Ptr;
      }
      uVar24 = uVar24 & ~(uint)uVar25;
      pRVar17 = pRVar9[5].Ptr;
      if (pRVar9[5].Ptr == (PSRWLOCK)0x0) {
        pRVar17 = pRVar1;
      }
      iVar21 = (int)uVar26;
      lVar23 = (longlong)iVar21;
      uVar19 = *(uint *)((longlong)&pRVar17->Ptr + lVar23 * 4) & uVar24;
      if (uVar19 == 0) {
        iVar12 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar12 = uVar20 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar21) {
          iVar13 = iVar21;
        }
        if (iVar12 <= iVar21) break;
        lVar18 = 0;
        while( true ) {
          iVar27 = iVar27 + 0x20;
          uVar19 = *(uint *)((longlong)&pRVar17->Ptr + lVar18 * 4 + lVar23 * 4 + 4);
          if (uVar19 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar13 - lVar23 == lVar18) goto LAB_1417b7b80;
        }
        uVar26 = (ulonglong)(iVar21 + (int)lVar18 + 1);
        uVar24 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar19 & uVar19);
      uVar5 = uVar25 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar19 = (iVar27 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while ((int)uVar19 < (int)uVar20);
  }
LAB_1417b7b80:
  pRVar9 = DAT_14cacd528;
  pRVar1 = DAT_14cacd528 + 0xd;
  iVar27 = *(int *)&DAT_14cacd528[0x10].Ptr;
  if (iVar27 == 0) {
    uVar26 = 1;
    uVar25 = 0;
    iVar21 = 0;
    iVar12 = 0;
  }
  else {
    pRVar16 = DAT_14cacd528[0xf].Ptr;
    if (DAT_14cacd528[0xf].Ptr == (PSRWLOCK)0x0) {
      pRVar16 = pRVar1;
    }
    uVar20 = *(uint *)&pRVar16->Ptr;
    if (uVar20 == 0) {
      iVar21 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar21 = iVar27 + -1;
      }
      uVar25 = 0;
      uVar26 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar26 = uVar25;
      }
      iVar12 = 0;
      do {
        if (uVar26 == uVar25) goto LAB_1417b7e60;
        iVar12 = iVar12 + 0x20;
        uVar20 = *(uint *)((longlong)&pRVar16->Ptr + uVar25 * 4 + 4);
        uVar25 = uVar25 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar25 = 0;
      iVar12 = 0;
    }
    uVar26 = (ulonglong)(-uVar20 & uVar20);
    uVar5 = uVar26 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar21 = (iVar12 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar27 <= iVar21) {
      iVar21 = iVar27;
    }
  }
  if (iVar21 < iVar27) {
    pRVar16 = DAT_14cacd528 + 0x12;
    uVar20 = 0xffffffff;
    do {
      pvVar7 = pRVar9[0xb].Ptr;
      lVar23 = (longlong)iVar21 * 0x20;
      puVar4 = (uint *)((longlong)pvVar7 + lVar23);
      iVar13 = *(int *)((longlong)pvVar7 + lVar23 + 4);
      if (((iVar13 == 0) || (uVar19 = *puVar4, (int)uVar19 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar19 ||
          ((((plVar22 = (longlong *)
                        ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
             plVar22 == (longlong *)0x0 || ((int)plVar22[2] != iVar13)) ||
            ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) || (*plVar22 == 0)))))) {
        pRVar11 = pRVar9[0x13].Ptr;
        if (pRVar9[0x13].Ptr == (PSRWLOCK)0x0) {
          pRVar11 = pRVar16;
        }
        iVar27 = *(int *)((longlong)&pRVar11->Ptr + (longlong)(int)puVar4[7] * 4);
        if (iVar27 == iVar21) {
          puVar10 = (uint *)((longlong)&pRVar11->Ptr + (longlong)(int)puVar4[7] * 4);
        }
        else {
          do {
            lVar18 = (longlong)iVar27;
            iVar27 = *(int *)((longlong)pvVar7 + lVar18 * 0x20 + 0x18);
          } while (iVar27 != iVar21);
          puVar10 = (uint *)((longlong)pvVar7 + lVar18 * 0x20 + 0x18);
        }
        *puVar10 = puVar4[6];
        plVar22 = *(longlong **)((longlong)pRVar9[0xb].Ptr + lVar23 + 0x10);
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar22 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar3 = (int *)((longlong)plVar22 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar22 + 0x10))();
            }
          }
        }
        pvVar7 = pRVar9[0xb].Ptr;
        if (*(int *)((longlong)&pRVar9[0x11].Ptr + 4) != 0) {
          *(int *)((longlong)pvVar7 + (longlong)*(int *)&pRVar9[0x11].Ptr * 0x20) = iVar21;
        }
        *(undefined4 *)((longlong)pvVar7 + lVar23) = 0xffffffff;
        if (*(int *)((longlong)&pRVar9[0x11].Ptr + 4) < 1) {
          uVar15 = 0xffffffff;
        }
        else {
          uVar15 = *(undefined4 *)&pRVar9[0x11].Ptr;
        }
        *(undefined4 *)((longlong)pvVar7 + lVar23 + 4) = uVar15;
        *(int *)&pRVar9[0x11].Ptr = iVar21;
        piVar3 = (int *)((longlong)&pRVar9[0x11].Ptr + 4);
        *piVar3 = *piVar3 + 1;
        pRVar11 = pRVar9[0xf].Ptr;
        if (pRVar9[0xf].Ptr == (PSRWLOCK)0x0) {
          pRVar11 = pRVar1;
        }
        iVar27 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar27 = iVar21;
        }
        bVar8 = (byte)iVar21 & 0x1f;
        puVar4 = (uint *)((longlong)&pRVar11->Ptr + (longlong)(iVar27 >> 5) * 4);
        *puVar4 = *puVar4 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
        iVar27 = *(int *)&pRVar9[0x10].Ptr;
      }
      uVar20 = uVar20 & ~(uint)uVar26;
      pRVar11 = pRVar9[0xf].Ptr;
      if (pRVar9[0xf].Ptr == (PSRWLOCK)0x0) {
        pRVar11 = pRVar1;
      }
      iVar21 = (int)uVar25;
      lVar23 = (longlong)iVar21;
      uVar19 = *(uint *)((longlong)&pRVar11->Ptr + lVar23 * 4) & uVar20;
      if (uVar19 == 0) {
        iVar13 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar13 = iVar27 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar21) {
          iVar14 = iVar21;
        }
        if (iVar13 <= iVar21) break;
        lVar18 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar19 = *(uint *)((longlong)&pRVar11->Ptr + lVar18 * 4 + lVar23 * 4 + 4);
          if (uVar19 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar14 - lVar23 == lVar18) goto LAB_1417b7e60;
        }
        uVar25 = (ulonglong)(iVar21 + (int)lVar18 + 1);
        uVar20 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar19 & uVar19);
      uVar5 = uVar26 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar21 = (iVar12 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    } while (iVar21 < iVar27);
  }
LAB_1417b7e60:
                    /* WARNING: Could not recover jumptable at 0x0001417b7e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 1417b7eb0 FUN_1417b7eb0 body=40 status=ok
// SIG undefined FUN_1417b7eb0(void)

undefined8 FUN_1417b7eb0(undefined8 param_1,int param_2)

{
  FUN_140b35bde();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b7ed8 FUN_1417b7ed8 body=1317 status=ok
// SIG undefined FUN_1417b7ed8(void)

void FUN_1417b7ed8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  plVar5 = (longlong *)(param_3 + 0x10);
  iVar14 = *(int *)(param_3 + 0x18);
  iVar9 = *(int *)(param_3 + 0x68);
  if (iVar14 < iVar9) {
    *(int *)(param_3 + 0x18) = iVar9;
    if ((uint)(iVar9 - iVar14) <= (uint)(*(int *)(param_3 + 0x1c) - iVar14)) goto LAB_1417b7f21;
    FUN_1446f48e2(plVar5);
  }
  else {
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
    if (iVar9 < iVar14) {
      *(int *)(param_3 + 0x18) = iVar9;
      FUN_14479f406(plVar5);
    }
  }
  iVar9 = *(int *)(param_3 + 0x18);
LAB_1417b7f21:
  if (0 < iVar9) {
    lVar4 = 0;
    do {
      *(int *)(*(longlong *)(param_3 + 0x10) + lVar4 * 4) = (int)lVar4;
      lVar4 = lVar4 + 1;
      iVar14 = *(int *)(param_3 + 0x18);
    } while (lVar4 < iVar14);
    if (1 < iVar14) {
      lVar4 = *plVar5;
      memset(local_338,0,0x2f0);
      local_340 = lVar4 + (longlong)iVar14 * 4 + -4;
      local_348 = lVar4;
      fVar25 = logf((float)iVar14);
      local_338[0] = (int)(longlong)(fVar25 + fVar25);
      plVar5 = &local_348;
      do {
        piVar6 = (int *)*plVar5;
        piVar8 = (int *)plVar5[1];
        iVar14 = (int)plVar5[2];
        iVar9 = (int)((ulonglong)((longlong)piVar8 - (longlong)piVar6) >> 2);
        uVar18 = (ulonglong)(iVar9 + 1);
        piVar12 = piVar8;
        piVar22 = piVar6;
        if (iVar14 != 0) {
LAB_1417b7ffe:
          piVar10 = piVar6;
          if (8 < (int)(uint)uVar18) {
            uVar17 = (uint)uVar18 >> 1;
            iVar9 = piVar10[uVar17];
            piVar10[uVar17] = *piVar10;
            *piVar10 = iVar9;
            piVar19 = piVar12 + 1;
            piVar6 = piVar10;
            do {
              piVar3 = piVar6 + 1;
              piVar13 = piVar6 + 1;
              do {
                piVar23 = piVar13;
                piVar6 = piVar3;
                if (piVar12 < piVar6) break;
                uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar10 * 0xc);
                uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar6 * 0xc);
                iVar9 = (int)uVar1 - (int)uVar2;
                if (iVar9 == 0) {
                  iVar9 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
                }
                piVar3 = piVar6 + 1;
                piVar13 = piVar23 + 1;
              } while (-1 < iVar9);
              piVar3 = piVar19 + -2;
              do {
                piVar13 = piVar19;
                piVar20 = piVar3;
                piVar19 = piVar13 + -1;
                if (piVar19 <= piVar10) break;
                uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar19 * 0xc);
                uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar10 * 0xc);
                iVar9 = (int)uVar1 - (int)uVar2;
                if (iVar9 == 0) {
                  iVar9 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
                }
                piVar3 = piVar20 + -1;
              } while (-1 < iVar9);
              if (piVar19 < piVar6) goto LAB_1417b80e0;
              iVar9 = *piVar6;
              *piVar6 = *piVar19;
              *piVar19 = iVar9;
            } while( true );
          }
          if (piVar10 < piVar12) {
            do {
              piVar6 = piVar10;
              if (piVar10 + 1 <= piVar12) {
                iVar14 = *piVar10;
                piVar8 = piVar10 + 1;
                do {
                  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + (longlong)iVar14 * 0xc);
                  uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + (longlong)*piVar8 * 0xc);
                  iVar9 = (int)uVar1 - (int)uVar2;
                  if (iVar9 == 0) {
                    iVar9 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
                  }
                  piVar22 = piVar8;
                  iVar7 = *piVar8;
                  if (-1 < iVar9) {
                    piVar22 = piVar6;
                    iVar7 = iVar14;
                  }
                  iVar14 = iVar7;
                  piVar6 = piVar22;
                  piVar8 = piVar8 + 1;
                } while (piVar8 <= piVar12);
              }
              iVar14 = *piVar6;
              *piVar6 = *piVar12;
              *piVar12 = iVar14;
              piVar12 = piVar12 + -1;
            } while (piVar10 < piVar12);
          }
          goto LAB_1417b83e2;
        }
LAB_1417b8174:
        iVar14 = (int)uVar18;
        if (iVar14 != 0) {
          iVar9 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
          iVar7 = iVar9;
joined_r0x0001417b819b:
          do {
            iVar16 = iVar9 * 2 + 1;
            if (iVar16 < iVar14) {
              iVar15 = iVar9 * 2 + 2;
              lVar4 = *(longlong *)(param_3 + 0x60);
              if (iVar15 < iVar14) {
                uVar1 = *(undefined8 *)(lVar4 + (longlong)piVar6[iVar15] * 0xc);
                uVar2 = *(undefined8 *)(lVar4 + (longlong)piVar6[iVar16] * 0xc);
                iVar21 = (int)uVar1 - (int)uVar2;
                if (iVar21 == 0) {
                  iVar21 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
                }
                if (-1 < iVar21) {
                  iVar16 = iVar15;
                }
              }
              iVar15 = piVar6[iVar9];
              uVar1 = *(undefined8 *)(lVar4 + (longlong)iVar15 * 0xc);
              uVar2 = *(undefined8 *)(lVar4 + (longlong)piVar6[iVar16] * 0xc);
              iVar21 = (int)uVar1 - (int)uVar2;
              if (iVar21 == 0) {
                iVar21 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
              }
              if (iVar21 < 0) {
                piVar6[iVar9] = piVar6[iVar16];
                piVar6[iVar16] = iVar15;
                iVar9 = iVar16;
                goto joined_r0x0001417b819b;
              }
            }
            bVar24 = iVar7 != 0;
            iVar9 = iVar7 + -1;
            iVar7 = iVar9;
          } while (bVar24);
          if (1 < iVar14) {
            iVar9 = *piVar6;
            *piVar6 = piVar6[uVar18 - 1];
            piVar6[uVar18 - 1] = iVar9;
            if (iVar14 != 2) {
              do {
                uVar11 = uVar18 - 1;
                iVar14 = 0;
                iVar7 = 1;
                iVar9 = 0;
                do {
                  iVar14 = iVar14 + 2;
                  lVar4 = *(longlong *)(param_3 + 0x60);
                  iVar16 = iVar7;
                  if ((longlong)iVar14 < (longlong)uVar11) {
                    uVar1 = *(undefined8 *)(lVar4 + (longlong)piVar6[iVar14] * 0xc);
                    uVar2 = *(undefined8 *)(lVar4 + (longlong)piVar6[iVar7] * 0xc);
                    iVar7 = (int)uVar1 - (int)uVar2;
                    if (iVar7 == 0) {
                      iVar7 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
                    }
                    if (-1 < iVar7) {
                      iVar16 = iVar14;
                    }
                  }
                  iVar14 = piVar6[iVar9];
                  uVar1 = *(undefined8 *)(lVar4 + (longlong)iVar14 * 0xc);
                  uVar2 = *(undefined8 *)(lVar4 + (longlong)piVar6[iVar16] * 0xc);
                  iVar7 = (int)uVar1 - (int)uVar2;
                  if (iVar7 == 0) {
                    iVar7 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
                  }
                  if (-1 < iVar7) break;
                  piVar6[iVar9] = piVar6[iVar16];
                  piVar6[iVar16] = iVar14;
                  iVar14 = iVar16 * 2;
                  iVar7 = iVar16 * 2 + 1;
                  iVar9 = iVar16;
                } while ((longlong)iVar7 < (longlong)uVar11);
                iVar14 = *piVar6;
                *piVar6 = piVar6[uVar18 - 2];
                piVar6[uVar18 - 2] = iVar14;
                uVar18 = uVar11;
              } while (2 < uVar11);
            }
          }
        }
LAB_1417b83e2:
        plVar5 = plVar5 + -3;
      } while (&local_348 <= plVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1417b80e0:
  iVar9 = *piVar10;
  *piVar10 = *piVar19;
  *piVar19 = iVar9;
  iVar14 = iVar14 + -1;
  piVar13 = piVar13 + -2;
  if ((longlong)piVar20 - (longlong)piVar22 < (longlong)piVar8 - (longlong)piVar23) {
    if (piVar6 < piVar12) {
      *plVar5 = (longlong)piVar6;
      plVar5[1] = (longlong)piVar12;
      *(int *)(plVar5 + 2) = iVar14;
      plVar5 = plVar5 + 3;
    }
    piVar6 = piVar10;
    piVar8 = piVar20;
    if (piVar19 <= piVar10 + 1) goto LAB_1417b83e2;
  }
  else {
    if (piVar10 + 1 < piVar19) {
      *plVar5 = (longlong)piVar10;
      plVar5[1] = (longlong)piVar13;
      *(int *)(plVar5 + 2) = iVar14;
      plVar5 = plVar5 + 3;
    }
    piVar10 = piVar23;
    piVar13 = piVar12;
    piVar8 = piVar12;
    if (piVar12 <= piVar6) goto LAB_1417b83e2;
  }
  iVar9 = (int)((ulonglong)((longlong)piVar8 - (longlong)piVar10) >> 2);
  uVar18 = (ulonglong)(iVar9 + 1);
  piVar12 = piVar13;
  piVar22 = piVar10;
  if (iVar14 == 0) goto LAB_1417b8174;
  goto LAB_1417b7ffe;
}



// FUNCTION 1417b8400 FUN_1417b8400 body=353 status=ok
// SIG undefined FUN_1417b8400(void)

void FUN_1417b8400(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b8485;
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
LAB_1417b8485:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417b8562 FUN_1417b8562 body=155 status=ok
// SIG undefined FUN_1417b8562(void)

undefined8 * FUN_1417b8562(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7df7e8;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1448d844e(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1448d844e(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a7df7f0;
  puVar1 = TlsGetValue(DAT_14c7612e8);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612e8,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b85fe FUN_1417b85fe body=29 status=ok
// SIG undefined FUN_1417b85fe(void)

undefined8 FUN_1417b85fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b861c FUN_1417b861c body=140 status=ok
// SIG undefined FUN_1417b861c(void)

undefined8 * FUN_1417b861c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7df828;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a7df830;
  puVar1 = TlsGetValue(DAT_14c7612ec);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612ec,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b86a8 FUN_1417b86a8 body=353 status=ok
// SIG undefined FUN_1417b86a8(void)

void FUN_1417b86a8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b872d;
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
LAB_1417b872d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1417b880a FUN_1417b880a body=71 status=ok
// SIG undefined FUN_1417b880a(void)

undefined8 * FUN_1417b880a(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_14a7df838;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return puVar2;
}



// FUNCTION 1417b8852 FUN_1417b8852 body=98 status=ok
// SIG undefined FUN_1417b8852(void)

undefined8 * FUN_1417b8852(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7df838;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a7df840;
  puVar1 = TlsGetValue(DAT_14c7612f0);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7612f0,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b88b4 FUN_1417b88b4 body=373 status=ok
// SIG undefined FUN_1417b88b4(void)

void FUN_1417b88b4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b893f;
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
LAB_1417b893f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1417b8a2a FUN_1417b8a2a body=29 status=ok
// SIG undefined FUN_1417b8a2a(void)

undefined8 FUN_1417b8a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b8a48 FUN_1417b8a48 body=668 status=ok
// SIG undefined FUN_1417b8a48(void)

longlong * FUN_1417b8a48(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    lVar3 = *param_3;
    lVar2 = param_3[1];
    uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar9 = (uint)lVar3 & 0xffff;
    uVar6 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
            (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4);
    uVar9 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4);
    uVar7 = uVar9 >> 0xd ^ -uVar9;
    uVar5 = uVar7 << 8 ^ (-0x61c88647 - uVar9) - uVar7;
    uVar10 = uVar5 >> 0xd ^ (uVar9 - uVar7) - uVar5;
    uVar9 = uVar10 >> 0xc ^ (uVar7 - uVar5) - uVar10;
    uVar7 = uVar9 << 0x10 ^ (uVar5 - uVar10) - uVar9;
    uVar5 = uVar7 >> 5 ^ (uVar10 - uVar9) - uVar7;
    uVar9 = uVar5 >> 3 ^ (uVar9 - uVar7) - uVar5;
    uVar7 = uVar9 << 10 ^ (uVar7 - uVar5) - uVar9;
    uVar5 = uVar6 >> 0xd ^ (uVar7 >> 0xf ^ uVar5 - (uVar9 + uVar7)) - uVar6;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar6) - uVar5;
    uVar6 = uVar9 >> 0xd ^ (uVar6 - uVar5) - uVar9;
    uVar7 = uVar6 >> 0xc ^ (uVar5 - uVar9) - uVar6;
    uVar5 = uVar7 << 0x10 ^ (uVar9 - uVar6) - uVar7;
    uVar6 = uVar5 >> 5 ^ (uVar6 - uVar7) - uVar5;
    uVar7 = uVar6 >> 3 ^ (uVar7 - uVar5) - uVar6;
    uVar5 = uVar7 << 10 ^ (uVar5 - uVar6) - uVar7;
    lVar4 = param_1 + 0x150;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x158);
    }
    iVar8 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x160) - 1U &
                             (uVar5 >> 0xf ^ uVar6 - (uVar7 + uVar5))) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar8 * 0x28);
        if ((*plVar1 == lVar3) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x118) + 8 + (longlong)iVar8 * 0x28) == lVar2)) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 2 != (longlong *)0x0)) {
            plVar1 = (longlong *)plVar1[2];
            lVar3 = (longlong)(int)plVar1[1];
            if (lVar3 != 0) {
              lVar2 = *plVar1;
              lVar4 = 0;
              do {
                if (*(longlong *)(lVar2 + lVar4) == param_4) {
                  *param_2 = param_4;
                  param_2[1] = 0;
                  iVar8 = *(int *)(lVar2 + 0x10 + lVar4);
                  _Src = *(void **)(lVar2 + 8 + lVar4);
                  *(int *)(param_2 + 2) = iVar8;
                  if ((longlong)iVar8 != 0) {
                    FUN_1401b3898(param_2 + 1,iVar8,0);
                    memcpy((void *)param_2[1],_Src,(longlong)iVar8 << 4);
                    return param_2;
                  }
                  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
                  return param_2;
                }
                lVar4 = lVar4 + 0x18;
              } while (lVar3 * 0x18 != lVar4);
            }
          }
          break;
        }
        iVar8 = (int)plVar1[4];
      } while (iVar8 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1417b8ce4 FUN_1417b8ce4 body=29 status=ok
// SIG undefined FUN_1417b8ce4(void)

undefined8 FUN_1417b8ce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417b8d02 FUN_1417b8d02 body=482 status=ok
// SIG undefined FUN_1417b8d02(void)

int * FUN_1417b8d02(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1417b8ee4 FUN_1417b8ee4 body=968 status=ok
// SIG undefined FUN_1417b8ee4(void)

void FUN_1417b8ee4(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar6 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar11 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    iVar7 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_6c = iVar10;
        lVar9 = *param_1;
        lVar14 = (longlong)iVar12;
        uVar3 = *(undefined8 *)(lVar9 + lVar14 * 0x28);
        uVar4 = *(undefined8 *)(lVar9 + 8 + lVar14 * 0x28);
        uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar15 = (uint)uVar3 & 0xffff;
        uVar17 = ((uint)uVar3 << 0x10 | uVar15) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4);
        uVar15 = uVar17 >> 0xd ^ -uVar17;
        uVar6 = uVar15 << 8 ^ (-0x61c88647 - uVar17) - uVar15;
        uVar17 = uVar6 >> 0xd ^ (uVar17 - uVar15) - uVar6;
        uVar18 = uVar17 >> 0xc ^ (uVar15 - uVar6) - uVar17;
        uVar6 = uVar18 << 0x10 ^ (uVar6 - uVar17) - uVar18;
        uVar15 = uVar6 >> 5 ^ (uVar17 - uVar18) - uVar6;
        uVar18 = uVar15 >> 3 ^ (uVar18 - uVar6) - uVar15;
        uVar19 = uVar18 << 10 ^ (uVar6 - uVar15) - uVar18;
        uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar17 = (uint)uVar4 & 0xffff;
        uVar17 = ((uint)uVar4 << 0x10 | uVar17) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar17 >> 4);
        uVar6 = uVar17 >> 0xd ^ (uVar19 >> 0xf ^ uVar15 - (uVar18 + uVar19)) - uVar17;
        uVar18 = uVar6 << 8 ^ (-0x61c88647 - uVar17) - uVar6;
        uVar15 = uVar18 >> 0xd ^ (uVar17 - uVar6) - uVar18;
        uVar17 = uVar15 >> 0xc ^ (uVar6 - uVar18) - uVar15;
        uVar6 = uVar17 << 0x10 ^ (uVar18 - uVar15) - uVar17;
        uVar18 = uVar6 >> 5 ^ (uVar15 - uVar17) - uVar6;
        uVar15 = uVar18 >> 3 ^ (uVar17 - uVar6) - uVar18;
        uVar6 = uVar15 << 10 ^ (uVar6 - uVar18) - uVar15;
        uVar16 = (longlong)(int)(uVar6 >> 0xf ^ uVar18 - (uVar15 + uVar6)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar16;
        *(int *)(lVar9 + 0x24 + lVar14 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x20 + lVar14 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        uVar11 = ~(uint)uVar13 & uVar11;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        lVar9 = (longlong)iVar7;
        uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4) & uVar11;
        iVar10 = local_6c;
        if (uVar6 == 0) {
          iVar12 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar12 = iVar2 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar5 = iVar12;
          if (iVar12 < iVar7) {
            iVar5 = iVar7;
          }
          if (iVar12 <= iVar7) break;
          lVar14 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar6 = *(uint *)((longlong)plVar8 + lVar14 * 4 + lVar9 * 4 + 4);
            if (uVar6 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar5 - lVar9 == lVar14) goto LAB_1417b926f;
          }
          iVar7 = iVar7 + (int)lVar14 + 1;
          uVar11 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar16 = uVar13 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar2);
    }
  }
LAB_1417b926f:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417b92ae FUN_1417b92ae body=269 status=ok
// SIG undefined FUN_1417b92ae(void)

void FUN_1417b92ae(longlong param_1,int param_2)

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



// FUNCTION 1417b93bc FUN_1417b93bc body=269 status=ok
// SIG undefined FUN_1417b93bc(void)

void FUN_1417b93bc(longlong param_1,int param_2)

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



// FUNCTION 1417b94ca FUN_1417b94ca body=155 status=ok
// SIG undefined FUN_1417b94ca(void)

undefined8 * FUN_1417b94ca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_LAB_14a7ec3e0;
  plVar3 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1417b94f2;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1417b94f2:
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



// FUNCTION 1417b9565 FUN_1417b9565 body=49 status=ok
// SIG undefined FUN_1417b9565(void)

longlong FUN_1417b9565(void)

{
  if (DAT_14cace848 == 0) {
    FUN_14073dd9a(&DAT_14cace848,&PTR_LAB_14a7f6a78);
  }
  return DAT_14cace848;
}



// FUNCTION 1417b9596 FUN_1417b9596 body=153 status=ok
// SIG undefined FUN_1417b9596(void)

void FUN_1417b9596(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2;
  if (param_2 != 0) {
    do {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) {
        return;
      }
      plVar1 = (longlong *)(lVar3 + 0x20);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
    if ((param_1 != 0) && ((*(uint *)(param_2 + 8) & 0x40000000) == 0)) {
      lVar3 = FUN_14043ab18();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
          (iVar2 = *(int *)(param_1 + 0x288), (longlong)iVar2 != 0)))) {
        lVar3 = *(longlong *)(param_1 + 0x280);
        lVar4 = 0;
        do {
          if (*(longlong *)(lVar3 + lVar4) != 0) {
            FUN_14797ddc8(param_2);
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar2 * 8 != lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1417b9630 FUN_1417b9630 body=2201 status=ok
// SIG undefined FUN_1417b9630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417b9630(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  size_t sVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 *apuStack_b8 [3];
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  byte local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
    uVar7 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0,0x400000008001,0,uVar7,
                  FUN_140eb3340);
    atexit(FUN_142815b60);
    _Init_thread_footer(&DAT_14c951f40);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar7,param_2,0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar7,param_2,0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      _DAT_00000000 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar7,param_2,0);
    }
  }
  ppuVar10 = apuStack_b8;
  lVar3 = *(longlong *)(param_2 + 0x30);
  if (lVar3 == 0) {
LAB_1417b9d4a:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    lVar8 = *(longlong *)(param_2 + 0x38);
    puVar9 = *(undefined **)(lVar3 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
      uVar7 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0,0x400000008001,0,uVar7,
                    FUN_140eb3340);
      atexit(FUN_142815b60);
      _Init_thread_footer(&DAT_14c951f40);
    }
    if (DAT_14c951ef8 == 0) {
      bVar14 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c951ef0 && bVar14) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar14 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c951ef0) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (!bVar14) goto LAB_1417b9d4a;
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951ef8) == 0) goto LAB_1417b9d4a;
    plVar4 = *(longlong **)(lVar3 + 0x70);
    sVar12 = (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34);
    if ((int)sVar12 == 0) {
      puVar13 = (undefined8 *)0x0;
      ppuVar10 = apuStack_b8;
    }
    else {
      lVar6 = -(sVar12 + 0x1e & 0xfffffffffffffff0);
      puVar13 = (undefined8 *)((longlong)apuStack_b8 + lVar6);
      ppuVar10 = (undefined8 **)((longlong)apuStack_b8 + lVar6);
    }
    if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
      pcVar2 = *(code **)(*plVar4 + 0x160);
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9d71;
      (*pcVar2)(plVar4,puVar13);
    }
    else {
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9794;
      memset(puVar13,0,sVar12);
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951a88) {
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9bd9;
      FUN_144b3d300(&DAT_14c951a88);
      if (DAT_14c951a88 == -1) {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9bf3;
        uVar7 = FUN_140342cba();
        *(code **)((longlong)ppuVar10 + -8) = FUN_1468c7f1e;
        *(undefined8 *)((longlong)ppuVar10 + -0x10) = uVar7;
        *(undefined8 *)((longlong)ppuVar10 + -0x18) = 0;
        *(undefined8 *)((longlong)ppuVar10 + -0x20) = 0x8001;
        *(undefined8 *)((longlong)ppuVar10 + -0x48) = 0x1417b9c36;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9c46;
        atexit(FUN_14280c819);
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9c52;
        _Init_thread_footer(&DAT_14c951a88);
      }
    }
    pbVar1 = *(byte **)(param_2 + 0x20);
    apuStack_b8[1] = puVar13;
    if (pbVar1 == (byte *)0x0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9d97;
      FUN_144a5ded6(param_2);
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      *(byte **)(param_2 + 0x20) = pbVar1 + 1;
      pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
      if (pcVar2 == FUN_14002ddda) {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9839;
        FUN_14002ddda(uVar7,param_2,puVar13);
      }
      else if (pcVar2 == FUN_14002dfbe) {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9a2c;
        FUN_14002dfbe(uVar7,param_2,puVar13);
      }
      else if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar7 = *(undefined8 *)(pbVar1 + 1);
        *(byte **)(param_2 + 0x20) = pbVar1 + 9;
        *puVar13 = uVar7;
      }
      else {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9828;
        (*pcVar2)(uVar7,param_2,puVar13);
      }
    }
    plVar5 = *(longlong **)(lVar3 + 0x78);
    sVar12 = (longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34);
    if ((int)sVar12 == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      *(undefined8 *)((longlong)ppuVar10 + -8) = 0x1417b9863;
      lVar6 = -(sVar12 + 0x1e & 0xfffffffffffffff0);
      puVar13 = (undefined8 *)((longlong)ppuVar10 + lVar6);
      ppuVar10 = (undefined8 **)((longlong)ppuVar10 + lVar6);
    }
    if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
      pcVar2 = *(code **)(*plVar5 + 0x160);
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9db7;
      (*pcVar2)(plVar5,puVar13);
    }
    else {
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9882;
      memset(puVar13,0,sVar12);
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951a88) {
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9c6b;
      FUN_144b3d300(&DAT_14c951a88);
      if (DAT_14c951a88 == -1) {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9c85;
        uVar7 = FUN_140342cba();
        *(code **)((longlong)ppuVar10 + -8) = FUN_1468c7f1e;
        *(undefined8 *)((longlong)ppuVar10 + -0x10) = uVar7;
        *(undefined8 *)((longlong)ppuVar10 + -0x18) = 0;
        *(undefined8 *)((longlong)ppuVar10 + -0x20) = 0x8001;
        *(undefined8 *)((longlong)ppuVar10 + -0x48) = 0x1417b9cc8;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9cd8;
        atexit(FUN_14280c819);
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9ce4;
        _Init_thread_footer(&DAT_14c951a88);
      }
    }
    pbVar1 = *(byte **)(param_2 + 0x20);
    if (pbVar1 == (byte *)0x0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9ddd;
      FUN_144a5ded6(param_2,puVar13);
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      *(byte **)(param_2 + 0x20) = pbVar1 + 1;
      pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
      if (pcVar2 == FUN_14002ddda) {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9923;
        FUN_14002ddda(uVar7,param_2,puVar13);
      }
      else if (pcVar2 == FUN_14002dfbe) {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9a40;
        FUN_14002dfbe(uVar7,param_2,puVar13);
      }
      else if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar7 = *(undefined8 *)(pbVar1 + 1);
        *(byte **)(param_2 + 0x20) = pbVar1 + 9;
        *puVar13 = uVar7;
      }
      else {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9912;
        (*pcVar2)(uVar7,param_2,puVar13);
      }
    }
    puVar11 = apuStack_b8[1];
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (lVar8 != 0) {
      local_68 = *(byte *)(lVar3 + 0x98);
      local_98 = *(undefined8 *)(lVar3 + 0x70);
      local_90 = *(undefined8 *)(lVar3 + 0x78);
      local_80 = *(undefined4 *)(lVar3 + 0x80);
      uStack_7c = *(undefined4 *)(lVar3 + 0x84);
      uStack_78 = *(undefined4 *)(lVar3 + 0x88);
      uStack_74 = *(undefined4 *)(lVar3 + 0x8c);
      local_70 = *(undefined8 *)(lVar3 + 0x90);
      local_88 = lVar8;
      if (*(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x24 + (ulonglong)((local_68 & 1) == 0) * 0x10) ==
          0x7fffffff) {
        local_60 = &local_98;
        local_58 = apuStack_b8[1];
        local_50 = local_98;
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9e02;
        lVar8 = FUN_145c51146();
        uVar7 = DAT_14cae7098;
        if (lVar8 == 0) {
          *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9e2d;
          FUN_1400021e4(lVar3 + 0x20,apuStack_b8 + 2);
          puVar11 = (undefined8 *)&DAT_149dfb77a;
          if (local_a0 != 0) {
            puVar11 = apuStack_b8[2];
          }
          *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9e5d;
          FUN_140002266(&local_60,
                        L"Attempted add to map \'%s\' beyond the maximum supported capacity!",
                        puVar11);
          puVar11 = (undefined8 *)&DAT_149dfb77a;
          if ((int)local_58 != 0) {
            puVar11 = local_60;
          }
          *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9e7d;
          FUN_1415b7ec4(puVar11,3,uVar7);
          if (local_60 != (undefined8 *)0x0) {
            *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9e93;
            FUN_1400020a8();
          }
          if (apuStack_b8[2] != (undefined8 *)0x0) {
            *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9ead;
            FUN_1400020a8();
          }
        }
      }
      else {
        *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b99a3;
        FUN_140bb828e(&local_98,puVar11,puVar13);
      }
    }
    if ((*(byte *)((longlong)plVar5 + 0x3c) & 0x10) == 0) {
      pcVar2 = *(code **)(*plVar5 + 0x148);
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b9ec5;
      (*pcVar2)(plVar5,puVar13);
    }
    puVar13 = apuStack_b8[1];
    if ((plVar4[7] & 0x1000000000U) == 0) {
      pcVar2 = *(code **)(*plVar4 + 0x148);
      *(undefined8 *)((longlong)ppuVar10 + -0x28) = 0x1417b99d6;
      (*pcVar2)(plVar4,puVar13);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)ppuVar10 + -0x28) = &UNK_1417b9a04;
    FUN_144d8e3a0();
  }
  return;
}


