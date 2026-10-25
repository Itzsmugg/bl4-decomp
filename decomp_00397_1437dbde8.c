// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437dbde8 FUN_1437dbde8 body=59 status=ok
// SIG undefined FUN_1437dbde8(void)

void FUN_1437dbde8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb12d18;
  if (DAT_14cb12d18 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb12d18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437dbe18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1437dbe24 FUN_1437dbe24 body=96 status=ok
// SIG undefined FUN_1437dbe24(void)

void FUN_1437dbe24(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x10) + 0xb8))
              (param_1 + -0x10,param_3,1,L"FMixerPlatformXAudio2::OnDefaultRenderDeviceChanged");
  }
  lVar1 = FUN_1477c967c(DAT_14cb0d2b0);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437dbe79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x20))(lVar1 + 0x30,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1437dbe84 FUN_1437dbe84 body=375 status=ok
// SIG undefined FUN_1437dbe84(void)

void FUN_1437dbe84(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  if (param_3 == '\0') {
    return;
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x220));
  if (BVar3 == 0) goto LAB_1437dbfc6;
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x250);
  if (iVar1 == iVar2) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x20) + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(*(longlong *)(param_1 + 0x248) + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_1437dbfbd;
LAB_1437dbefc:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1437dbefc;
      }
      if (uVar5 != uVar7) goto LAB_1437dbf37;
    }
  }
  else if (iVar1 + iVar2 != 1) {
LAB_1437dbf37:
    if ((int)param_2[1] == iVar2) {
      if (1 < iVar2) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*param_2 + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(*(longlong *)(param_1 + 0x248) + lVar4);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_1437dbfa3;
LAB_1437dbf6f:
          lVar4 = lVar4 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1437dbf6f;
        }
        if (uVar5 != uVar7) goto LAB_1437dbfbd;
      }
    }
    else if ((int)param_2[1] + iVar2 != 1) goto LAB_1437dbfbd;
LAB_1437dbfa3:
    (**(code **)(*(longlong *)(param_1 + -0x10) + 0xb8))
              ((longlong *)(param_1 + -0x10),(longlong *)(param_1 + 0x248),1,
               L"FMixerPlatformXAudio2::OnDeviceAdded");
  }
LAB_1437dbfbd:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x220));
LAB_1437dbfc6:
  lVar4 = FUN_1477c967c(DAT_14cb0d2b0);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001437dbff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x28))(lVar4 + 0x30,param_2,1);
  return;
}



// FUNCTION 1437dbffc FUN_1437dbffc body=313 status=ok
// SIG undefined FUN_1437dbffc(void)

void FUN_1437dbffc(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_1437dc019;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x220));
  if (BVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == (int)param_2[1]) {
      if (1 < iVar1) {
        lVar3 = 0;
        while( true ) {
          uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x20) + lVar3);
          uVar5 = (ulonglong)uVar4;
          uVar6 = *(ushort *)(*param_2 + lVar3);
          if (uVar4 != uVar6) break;
          if (uVar4 == 0) goto LAB_1437dc0c1;
LAB_1437dc08c:
          lVar3 = lVar3 + 2;
        }
        if ((uVar6 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1437dc08c;
        }
        if (uVar4 != uVar6) goto LAB_1437dc0ff;
      }
LAB_1437dc0c1:
      FUN_140056680(local_38,&DAT_149dfb77a);
      (**(code **)(*(longlong *)(param_1 + -0x10) + 0xb8))
                ((longlong *)(param_1 + -0x10),local_38,1,L"FMixerPlatformXAudio2::OnDeviceRemoved")
      ;
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
    else if ((int)param_2[1] + iVar1 == 1) goto LAB_1437dc0c1;
LAB_1437dc0ff:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x220));
  }
  lVar3 = FUN_1477c967c(DAT_14cb0d2b0);
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x30))(lVar3 + 0x30,param_2,1);
  }
LAB_1437dc019:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437dc150 FUN_1437dc150 body=69 status=ok
// SIG undefined FUN_1437dc150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437dc150(void)

{
  _DAT_14cb12d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437dc192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12d40,1);
  return;
}



// FUNCTION 1437dc196 FUN_1437dc196 body=643 status=ok
// SIG undefined FUN_1437dc196(void)

undefined8 FUN_1437dc196(longlong param_1)

{
  int iVar1;
  HMODULE pHVar2;
  undefined8 uVar3;
  LPCWSTR lpLibFileName;
  longlong *plVar4;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  LPCWSTR local_78;
  int local_70;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  undefined *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1 + 0x2a0) & 1) == 0) {
    FUN_147e13ba9();
    FUN_1401aea18(&local_78,&DAT_14cb12d20);
    lpLibFileName = local_78;
    if (local_70 == 0) {
      lpLibFileName = L"";
    }
    pHVar2 = LoadLibraryW(lpLibFileName);
    *(HMODULE *)(param_1 + 0x1e0) = pHVar2;
    if (local_78 != (LPCWSTR)0x0) {
      FUN_1400020a8();
      pHVar2 = *(HMODULE *)(param_1 + 0x1e0);
    }
    if (pHVar2 != (HMODULE)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x210);
      if (plVar4 == (longlong *)0x0) {
        iVar1 = Ordinal_1((longlong *)(param_1 + 0x210),0,0);
        if (iVar1 < 0) {
          local_78 = L"XAudio2Error";
          local_70 = 0xc;
          FUN_1446e940c(local_8c,&local_78);
          local_78 = L"Audio";
          local_70 = 5;
          FUN_1446e940c(local_90,&local_78);
          local_78 = 
          L"Failed to initialize audio. This may be an issue with your installation of XAudio 2.7. XAudio2 is available in the DirectX End-User Runtime (June 2010)."
          ;
          local_70 = 0x98;
          goto LAB_1437dc32c;
        }
        plVar4 = *(longlong **)(param_1 + 0x210);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,param_1 + 0x1c8);
      if (DAT_14c75f59c != 0) {
        local_58 = 0;
        local_48 = &PTR_LAB_149e01e20;
        local_40 = &DAT_1437df2b6;
        local_68[0] = FUN_140d11fbe;
        FUN_147041b12(param_1,local_68,0x3f800000,1);
      }
      *(byte *)(param_1 + 0x2a0) = *(byte *)(param_1 + 0x2a0) | 1;
      uVar3 = 1;
      goto LAB_1437dc1fe;
    }
    local_78 = L"XAudio2Missing";
    local_70 = 0xe;
    FUN_1446e940c(local_8c,&local_78);
    local_78 = L"Audio";
    local_70 = 5;
    FUN_1446e940c(local_90,&local_78);
    local_78 = 
    L"XAudio2.7 is not installed. Make sure you have XAudio 2.7 installed. XAudio 2.7 is available in the DirectX End-User Runtime (June 2010)."
    ;
    local_70 = 0x89;
LAB_1437dc32c:
    FUN_140208c1e(local_88,local_90,local_8c,&local_78);
    FUN_1427863e0();
    FUN_1427864dc(0,0,local_88,&DAT_14c873210);
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
  }
  else {
    FUN_1400b22c2(&local_78,
                  ".\\Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2.cpp");
    FUN_140056680(local_88,L"XAudio2 already initialized.");
    if (local_88[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (LPCWSTR)0x0) {
      FUN_1400020a8();
    }
  }
  uVar3 = 0;
LAB_1437dc1fe:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1437dc41a FUN_1437dc41a body=237 status=ok
// SIG undefined FUN_1437dc41a(void)

uint FUN_1437dc41a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x2a0);
  if ((uVar1 & 1) == 0) {
    FUN_1400b22c2(local_28,
                  ".\\Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2.cpp");
    FUN_140056680(local_38,L"XAudio2 was already tore down.");
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x210);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1 + 0x1c8);
      if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x210) + 0x10))();
        *(undefined8 *)(param_1 + 0x210) = 0;
      }
    }
    if ((*(HMODULE *)(param_1 + 0x1e0) != (HMODULE)0x0) && (DAT_14c872bd8 == '\x01')) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x1e0));
      *(undefined8 *)(param_1 + 0x1e0) = 0;
    }
    *(byte *)(param_1 + 0x2a0) = *(byte *)(param_1 + 0x2a0) & 0xfe;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437dc508 FUN_1437dc508 body=592 status=ok
// SIG undefined FUN_1437dc508(void)

ulonglong FUN_1437dc508(longlong *param_1,undefined4 *param_2)

{
  HRESULT HVar1;
  longlong *plVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  undefined1 auStackY_88 [32];
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [2];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x118))();
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_28);
    *param_2 = local_20;
    FUN_1477ccce6(local_28);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    uVar3 = CONCAT71(uVar4,1);
    goto LAB_1437dc62e;
  }
  *param_2 = 0;
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    FUN_1400b22c2(&local_28,
                  ".\\Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2.cpp");
    FUN_140056680(local_38,L"XAudio2 was not initialized.");
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
    goto LAB_1437dc62e;
  }
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_14ab423d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_14ab423c0,&local_40);
  if (HVar1 < 0) {
    FUN_147e13e34(local_38,HVar1);
LAB_1437dc719:
    FUN_140002266(&local_28,L"%s -> 0x%X: %s (line: %d)",L"Result",HVar1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
  }
  else {
    HVar1 = (**(code **)(*local_40 + 0x18))(local_40,0,1,&local_48);
    if (HVar1 < 0) {
      FUN_147e13e34(local_38,HVar1);
      goto LAB_1437dc719;
    }
    HVar1 = (**(code **)(*local_48 + 0x18))(local_48,&local_4c);
    if (HVar1 < 0) {
      FUN_147e13e34(local_38,HVar1);
      goto LAB_1437dc719;
    }
    *param_2 = local_4c;
    uVar3 = CONCAT71(uVar4,1);
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
LAB_1437dc62e:
  if ((local_18 ^ (ulonglong)auStackY_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1437dc75a FUN_1437dc75a body=1249 status=ok
// SIG undefined FUN_1437dc75a(void)

undefined8 FUN_1437dc75a(longlong *param_1,uint param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStackY_e8 [32];
  uint local_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88 [2];
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_e8;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x118))();
  if (plVar5 != (longlong *)0x0) {
    if (param_2 == 0xffffffff) {
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_78);
      if (local_30 != '\x01') goto LAB_1437dc7b3;
      FUN_147e10c34(param_3,&local_78);
      if (local_30 == '\x01') {
        FUN_147041ad4(&local_78);
      }
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_78);
      if ((int)uStack_70 <= (int)param_2 || (int)param_2 < 0) {
        FUN_1477ccce6();
        goto LAB_1437dc819;
      }
      FUN_147e10c34(param_3,local_78 + (ulonglong)param_2 * 0x48);
      FUN_1477ccce6(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    uVar8 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
    goto LAB_1437dc7b5;
  }
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    FUN_1400b22c2(&local_78,
                  ".\\Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2.cpp");
    FUN_140056680(local_88,L"XAudio2 was not initialized.");
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
LAB_1437dc819:
    if (local_78 != 0) {
      FUN_1400020a8();
    }
LAB_1437dc7b3:
    uVar8 = 0;
    goto LAB_1437dc7b5;
  }
  local_90 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  iVar3 = CoCreateInstance((IID *)&DAT_14ab423d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_14ab423c0,&local_90);
  if (iVar3 < 0) {
    FUN_147e13e34(local_88,iVar3);
LAB_1437dcb8e:
    FUN_140002266(&local_78,L"%s -> 0x%X: %s (line: %d)",L"Result",iVar3);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
LAB_1437dcbc7:
    uVar7 = 0;
LAB_1437dcbc9:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
      local_a8 = (longlong *)0x0;
    }
  }
  else {
    iVar3 = (**(code **)(*local_90 + 0x18))(local_90,0,1,&local_98);
    if (iVar3 < 0) {
      FUN_147e13e34(local_88,iVar3);
      goto LAB_1437dcb8e;
    }
    iVar3 = (**(code **)(*local_98 + 0x18))(local_98,&local_ac);
    if (iVar3 < 0) {
      FUN_147e13e34(local_88,iVar3);
      goto LAB_1437dcb8e;
    }
    if (local_ac == 0) {
LAB_1437dc9c3:
      iVar3 = 1;
      goto LAB_1437dcbc7;
    }
    iVar3 = (**(code **)(*local_90 + 0x20))(local_90,0,1,&local_a0);
    if (iVar3 < 0) {
      FUN_147e13e34(local_88,iVar3);
      goto LAB_1437dcb8e;
    }
    if (param_2 == 0xffffffff) {
      local_a8 = local_a0;
      if (local_a0 == (longlong *)0x0) goto LAB_1437dca6d;
      uVar4 = FUN_1437dcc3c(local_a0,param_3);
      uVar7 = (ulonglong)uVar4;
      *(byte *)(param_3 + 0x40) = *(byte *)(param_3 + 0x40) | 1;
      goto LAB_1437dcbc9;
    }
    if (local_ac <= param_2) goto LAB_1437dc9c3;
    iVar3 = (**(code **)(*local_98 + 0x20))(local_98,param_2);
    if (iVar3 < 0) {
      FUN_147e13e34(local_88,iVar3);
      goto LAB_1437dcb8e;
    }
    if (local_a8 != (longlong *)0x0) {
      uVar4 = FUN_1437dcc3c(local_a8,param_3);
      uVar7 = (ulonglong)uVar4;
      if (local_a0 != (longlong *)0x0) {
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_48 = 0;
        uStack_40 = 0;
        FUN_147042096(&local_78);
        FUN_1437dcc3c(local_a0,&local_78);
        iVar6 = *(int *)(param_3 + 0x18);
        if (iVar6 == (int)uStack_60) {
          bVar11 = true;
          if (1 < iVar6) {
            lVar9 = 0;
            while( true ) {
              uVar1 = *(ushort *)(*(longlong *)(param_3 + 0x10) + lVar9);
              uVar4 = (uint)uVar1;
              uVar2 = *(ushort *)(local_68 + lVar9);
              uVar10 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1437dc997;
                }
                iVar6 = uVar4 - uVar10;
                goto LAB_1437dcc20;
              }
              if (uVar1 == 0) break;
LAB_1437dc997:
              lVar9 = lVar9 + 2;
            }
            iVar6 = 0;
LAB_1437dcc20:
            bVar11 = iVar6 == 0;
          }
        }
        else {
          bVar11 = (int)uStack_60 + iVar6 == 1;
        }
        *(byte *)(param_3 + 0x40) = *(byte *)(param_3 + 0x40) & 0xfe | bVar11;
        FUN_147041ad4(&local_78);
      }
      goto LAB_1437dcbc9;
    }
LAB_1437dca6d:
    uVar7 = 0;
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
  }
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
  uVar8 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & -1 < iVar3);
LAB_1437dc7b5:
  if ((local_28 ^ (ulonglong)auStackY_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1437dcc3c FUN_1437dcc3c body=1421 status=ok
// SIG undefined FUN_1437dcc3c(void)

ulonglong FUN_1437dcc3c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined4 local_c0;
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  short *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147042096(param_2);
  local_50 = (longlong *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (short *)0x0;
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1,&local_90);
  if (iVar4 < 0) {
    FUN_147e13e34(&local_b0,iVar4);
    local_c8 = local_b0;
    if (local_a8 == 0) {
      local_c8 = &DAT_149dfb77a;
    }
    local_c0 = 0x352;
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1,0,&local_50);
    if (iVar4 < 0) {
      FUN_147e13e34(&local_b0,iVar4);
      local_c8 = local_b0;
      if (local_a8 == 0) {
        local_c8 = &DAT_149dfb77a;
      }
      local_c0 = 0x356;
    }
    else {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      iVar4 = (**(code **)(*local_50 + 0x28))(local_50,&DAT_14ab42320);
      if (iVar4 < 0) {
        FUN_147e13e34(&local_b0,iVar4);
        local_c8 = local_b0;
        if (local_a8 == 0) {
          local_c8 = &DAT_149dfb77a;
        }
        local_c0 = 0x35c;
      }
      else {
        FUN_140056680(&local_a0,uStack_60);
        if (&local_a0 == param_2) {
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != 0) {
            FUN_1400020a8();
          }
          *param_2 = local_a0;
          local_a0 = 0;
          *(undefined4 *)(param_2 + 1) = local_98;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_94;
        }
        iVar4 = (**(code **)(*local_50 + 0x28))(local_50,&DAT_14ab422c0,&local_88);
        if (iVar4 < 0) {
          FUN_147e13e34(&local_b0,iVar4);
          local_c8 = local_b0;
          if (local_a8 == 0) {
            local_c8 = &DAT_149dfb77a;
          }
          local_c0 = 0x362;
        }
        else {
          if (local_78 != (short *)0x0) {
LAB_1437dcdae:
            psVar2 = local_78;
            FUN_140056680(&local_a0,local_90);
            if (param_2 + 2 == &local_a0) {
              if (local_a0 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (param_2[2] != 0) {
                FUN_1400020a8();
              }
              param_2[2] = local_a0;
              local_a0 = 0;
              *(undefined4 *)(param_2 + 3) = local_98;
              *(undefined4 *)((longlong)param_2 + 0x1c) = local_94;
            }
            uVar6 = 8;
            if ((ushort)psVar2[1] < 8) {
              uVar6 = psVar2[1];
            }
            uVar3 = 2;
            if (2 < uVar6) {
              uVar3 = uVar6;
            }
            *(uint *)(param_2 + 4) = (uint)uVar3;
            *(undefined4 *)(param_2 + 5) = *(undefined4 *)(psVar2 + 2);
            *(undefined4 *)((longlong)param_2 + 0x2c) = 1;
            plVar1 = param_2 + 6;
            *(undefined4 *)(param_2 + 7) = 0;
            if (*(int *)((longlong)param_2 + 0x3c) < 0) {
              FUN_1470420ee(plVar1,0);
            }
            if (*psVar2 == -2) {
              uVar5 = *(uint *)(param_2 + 4);
              uVar9 = CONCAT71((int7)((ulonglong)&local_a0 >> 8),1);
              if (uVar5 != 0) {
                uVar10 = 0;
                puVar12 = &DAT_14ab43a30;
                uVar8 = 0;
                do {
                  if ((*(uint *)(psVar2 + 10) & *puVar12) != 0) {
                    iVar4 = (int)param_2[7];
                    *(uint *)(param_2 + 7) = iVar4 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x3c) < iVar4 + 1U) {
                      FUN_1477b22f8(plVar1,iVar4);
                    }
                    *(int *)(param_2[6] + (longlong)iVar4 * 4) = (int)uVar10;
                    uVar8 = uVar8 + 1;
                    uVar5 = *(uint *)(param_2 + 4);
                  }
                  if (0x11 < uVar10) break;
                  uVar10 = uVar10 + 1;
                  puVar12 = puVar12 + 1;
                } while (uVar8 < uVar5);
                if (uVar8 < uVar5) {
                  *(undefined4 *)(param_2 + 7) = 0;
                  if (*(int *)((longlong)param_2 + 0x3c) < 0) {
                    FUN_1470420ee(plVar1,0);
                    uVar5 = *(uint *)(param_2 + 4);
                  }
                  puVar7 = &DAT_14ab43a80;
                  if (uVar5 == 6) {
                    puVar7 = &DAT_14ab43ab0;
                  }
                  puVar13 = &DAT_14ab43aa0;
                  if (uVar5 != 4) {
                    puVar13 = puVar7;
                  }
                  if (0 < (int)uVar5) {
                    lVar11 = 0;
                    do {
                      iVar4 = (int)param_2[7];
                      *(uint *)(param_2 + 7) = iVar4 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x3c) < iVar4 + 1U) {
                        FUN_1477b22f8(plVar1,iVar4);
                      }
                      *(undefined4 *)(param_2[6] + (longlong)iVar4 * 4) = puVar13[lVar11];
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < (int)param_2[4]);
                  }
                }
              }
            }
            else {
              iVar4 = (int)param_2[7];
              *(uint *)(param_2 + 7) = iVar4 + 1U;
              if (*(uint *)((longlong)param_2 + 0x3c) < iVar4 + 1U) {
                FUN_1477b22f8(plVar1,iVar4);
              }
              *(undefined4 *)(param_2[6] + (longlong)iVar4 * 4) = 0;
              uVar9 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),1);
              if ((int)param_2[4] == 2) {
                iVar4 = (int)param_2[7];
                *(uint *)(param_2 + 7) = iVar4 + 1U;
                if (*(uint *)((longlong)param_2 + 0x3c) < iVar4 + 1U) {
                  FUN_1477b22f8(plVar1,iVar4);
                }
                *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = 1;
              }
            }
            goto LAB_1437dd12b;
          }
          iVar4 = (**(code **)(*local_50 + 0x28))(local_50,&DAT_14ab422d4,&local_88);
          if (iVar4 < 0) {
            FUN_147e13e34(&local_b0,iVar4);
            local_c8 = local_b0;
            if (local_a8 == 0) {
              local_c8 = &DAT_149dfb77a;
            }
            local_c0 = 0x36a;
          }
          else {
            if (local_78 != (short *)0x0) goto LAB_1437dcdae;
            FUN_147e13e34(&local_b0,0x80004005);
            local_c8 = local_b0;
            if (local_a8 == 0) {
              local_c8 = &DAT_149dfb77a;
            }
            local_c0 = 0x371;
            iVar4 = -0x7fffbffb;
          }
        }
      }
    }
  }
  FUN_140002266(&local_a0,L"%s -> 0x%X: %s (line: %d)",L"Result",iVar4);
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  uVar9 = 0;
LAB_1437dd12b:
  PropVariantClear((PROPVARIANT *)&local_68);
  PropVariantClear((PROPVARIANT *)&local_88);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1437dd1ca FUN_1437dd1ca body=1011 status=ok
// SIG undefined FUN_1437dd1ca(void)

undefined8 FUN_1437dd1ca(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_80;
  undefined1 *local_78;
  undefined2 *local_70;
  int local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(uint *)(param_1 + 0x54) & 1) == 0) {
    FUN_1400b22c2(&local_58,
                  ".\\Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2.cpp");
    pwVar13 = L"XAudio2 was not initialized.";
LAB_1437dd227:
    FUN_140056680(&local_38,pwVar13);
    lVar12 = local_58;
    if (local_38 != 0) {
      FUN_1400020a8();
      lVar12 = local_58;
    }
LAB_1437dd249:
    if (lVar12 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x54) & 2) != 0) {
      FUN_1400b22c2(&local_58,
                    ".\\Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2.cpp");
      pwVar13 = L"XAudio2 audio stream already opened.";
      goto LAB_1437dd227;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    param_1[0x14] = *(longlong *)(param_2 + 8);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    *(undefined4 *)(param_1 + 0x12) = param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
    *(undefined4 *)(param_1 + 0x13) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar7;
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x11) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_147042096(param_1 + 4);
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(int *)(param_1 + 3) = (int)param_1[0x10];
    param_1[0xf] = *(ulonglong *)((longlong)param_1 + 0x84) << 0x20 |
                   *(ulonglong *)((longlong)param_1 + 0x84) >> 0x20;
    param_1[0xe] = param_1[0x12];
    local_5c = 0;
    cVar8 = (**(code **)(*param_1 + 0x60))(param_1);
    if ((cVar8 == '\0') || (local_5c == 0)) goto LAB_1437dd422;
    cVar8 = (**(code **)(*param_1 + 0x68))(param_1,(int)param_1[3],param_1 + 4);
    if (cVar8 != '\0') {
      if (*(char *)(param_2 + 7) == '\x01') {
        iVar9 = (int)param_1[7] + -1;
        if ((int)param_1[7] == 0) {
          iVar9 = 0;
        }
        FUN_1402980a2(param_1 + 0x4b,param_1[6],iVar9);
      }
      if ((int)param_1[7] == 0) {
        local_a0 = (longlong *)&DAT_149dfb77a;
      }
      else {
        local_a0 = (longlong *)param_1[6];
      }
      uStack_90 = CONCAT44(uStack_90._4_4_,6);
      local_98 = 0;
      local_a8 = (undefined2 *)((ulonglong)local_a8 & 0xffffffff00000000);
      iVar9 = (**(code **)(*(longlong *)param_1[0x42] + 0x38))
                        ((longlong *)param_1[0x42],param_1 + 0x43,(int)param_1[8],(int)param_1[9]);
      if (iVar9 < 0) {
        FUN_147e13e34(&local_70,iVar9);
        local_a8 = local_70;
        if (local_68 == 0) {
          local_a8 = &DAT_149dfb77a;
        }
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0x48f);
        FUN_140002266(&local_38,L"%s -> 0x%X: %s (line: %d)",L"Result",iVar9);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_38 != 0) {
          FUN_1400020a8();
        }
LAB_1437dd422:
        if ((longlong *)param_1[0x44] == (longlong *)0x0) {
LAB_1437dd461:
          if ((longlong *)param_1[0x43] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x43] + 0x90))();
            param_1[0x43] = 0;
          }
          *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_1 + 0x84);
          local_80 = &local_38;
          local_38 = 0x100000000;
          local_78 = local_30;
          FUN_147e14256(param_1 + 10);
          *(undefined4 *)(param_1 + 8) = 2;
          *(int *)(param_1 + 9) = (int)param_1[0x13];
          *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
        }
        else if (param_1[0x43] == 0) {
          (**(code **)(*(longlong *)param_1[0x44] + 0x90))();
          param_1[0x44] = 0;
          goto LAB_1437dd461;
        }
        *(undefined4 *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 2;
        uVar11 = 1;
        goto LAB_1437dd255;
      }
      (**(code **)(*(longlong *)param_1[0x42] + 0x40))();
      local_58 = CONCAT44(param_2[6],(int)param_1[8] << 0x10);
      local_58 = CONCAT62(local_58._2_6_,3);
      uVar10 = (int)param_1[8] << 2;
      uStack_50 = CONCAT26(0x20,CONCAT24((short)uVar10,(uVar10 & 0x3fffc) * param_2[6]));
      local_a0 = param_1 + 0x45;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (undefined2 *)CONCAT44(local_a8._4_4_,0x40000000);
      iVar9 = (**(code **)(*(longlong *)param_1[0x42] + 0x28))
                        ((longlong *)param_1[0x42],param_1 + 0x44,&local_58,2);
      if (-1 < iVar9) goto LAB_1437dd422;
      FUN_147e13e34(&local_70,iVar9);
      local_a8 = local_70;
      if (local_68 == 0) {
        local_a8 = &DAT_149dfb77a;
      }
      local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0x49e);
      FUN_140002266(&local_38,L"%s -> 0x%X: %s (line: %d)",L"Result",iVar9);
      lVar12 = local_38;
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
        lVar12 = local_38;
      }
      goto LAB_1437dd249;
    }
  }
  uVar11 = 0;
LAB_1437dd255:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1437dd5be FUN_1437dd5be body=64 status=ok
// SIG undefined FUN_1437dd5be(void)

undefined8 FUN_1437dd5be(longlong param_1)

{
  longlong *plVar1;
  
  FUN_142af76d4();
  plVar1 = *(longlong **)(param_1 + 0x220);
  if (plVar1 == (longlong *)0x0) {
    FUN_142af70cc(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 4;
    (**(code **)(*plVar1 + 0x98))(plVar1,0,0);
  }
  return 1;
}



// FUNCTION 1437dd5fe FUN_1437dd5fe body=189 status=ok
// SIG undefined FUN_1437dd5fe(void)

uint FUN_1437dd5fe(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x2a0);
  if ((uVar1 & 1) == 0) {
    FUN_1400b22c2(local_28,
                  ".\\Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2.cpp");
    FUN_140056680(local_38,L"XAudio2 was not initialized.");
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x68);
    if ((iVar2 != 0) && (iVar2 != 2)) {
      if (iVar2 == 4) {
        FUN_142af7820(param_1);
      }
      plVar3 = *(longlong **)(param_1 + 0x220);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xa0))(plVar3,0,0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437dd6bc FUN_1437dd6bc body=3234 status=ok
// SIG undefined FUN_1437dd6bc(void)

ulonglong FUN_1437dd6bc(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  undefined1 auStack_258 [32];
  code *local_238;
  undefined4 local_230;
  undefined8 local_228;
  longlong *local_220;
  code *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  undefined1 local_1b8;
  code *local_1a8;
  longlong lStack_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  byte local_150;
  undefined5 local_148;
  undefined3 uStack_143;
  undefined4 local_140;
  undefined1 local_13c;
  void *local_138;
  undefined8 local_130;
  code *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((DAT_14c75f594 == 0) || (DAT_14c75f598 == 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x46));
    uVar17 = 0;
    if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
      UNLOCK();
      uVar14 = (**(code **)(*param_1 + 0xb0))(param_1,param_1 + 0x4d);
      uVar17 = (ulonglong)uVar14;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x46));
    goto LAB_1437dd7b1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb12d48) && (FUN_144b3d300(&DAT_14cb12d48), DAT_14cb12d48 == -1)) {
    local_238 = (code *)((ulonglong)local_238 & 0xffffffff00000000);
    FUN_1415c789c(&DAT_14cb12d38,L"au.ThreadedSwapDebugExtraTime",&DAT_14cb12d34,
                  L"Simulate a slow device swap by adding addional time to the swap task");
    atexit(FUN_1437dc150);
    _Init_thread_footer(&DAT_14cb12d48);
  }
  plVar18 = param_1 + 0x3a;
  lVar3 = param_1[0x3a];
  if (*(int *)((longlong)param_1 + 0x1ac) == 0) {
    if (lVar3 != 0) goto LAB_1437dd7a8;
  }
  else if (lVar3 == 0) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
    UNLOCK();
    if ((int)param_1[0x4e] == 0) {
      puVar15 = &DAT_149dfb77a;
    }
    else {
      puVar15 = (undefined2 *)param_1[0x4d];
    }
    FUN_1446f470e(&local_1d0,puVar15,1);
    local_208 = 0;
    uStack_200 = 0;
    local_218 = (code *)0x0;
    uStack_210 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    FUN_147042096();
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
    (**(code **)(*plVar9 + 8))(plVar9,&local_1a8,local_1d0);
    if ((((char)local_160 == '\x01') && ((int)local_188 < 0x41)) &&
       ((int)uStack_180 - 1000U < 0x30959)) {
      FUN_147e10c34(&local_218,&local_1a8);
      uVar19 = 1;
    }
    else {
      FUN_147042096(&local_218);
      uVar19 = 0;
    }
    if ((char)local_160 == '\x01') {
      FUN_147041ad4(&local_1a8);
    }
    local_e8 = (code *)0x0;
    local_d8 = (longlong *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x46));
    local_1a8 = (code *)param_1[0x42];
    lStack_1a0 = param_1[0x44];
    local_198 = (longlong *)param_1[0x43];
    FUN_1477b1d4c(&local_190,&local_218);
    local_148 = SUB85(param_1 + 0x45,0);
    uStack_143 = (undefined3)((ulonglong)(param_1 + 0x45) >> 0x28);
    local_140 = (undefined4)param_1[0x13];
    local_138 = (void *)0x0;
    uVar14 = *(uint *)(param_1 + 0x51);
    _Src = (void *)param_1[0x50];
    local_130 = CONCAT44(local_130._4_4_,uVar14);
    local_13c = uVar19;
    if ((longlong)(int)uVar14 == 0) {
      local_130 = (ulonglong)uVar14;
    }
    else {
      FUN_1446dd670(&local_138,uVar14,0);
      memcpy(local_138,_Src,(longlong)(int)uVar14 * 2);
    }
    local_128 = (code *)0x0;
    puVar10 = (undefined8 *)FUN_14001cc68(0x88,8);
    local_118 = local_d8;
    pcVar7 = local_e8;
    *puVar10 = &PTR_FUN_14ab43af0;
    puVar10[3] = local_198;
    puVar10[1] = local_1a8;
    puVar10[2] = lStack_1a0;
    puVar10[4] = local_190;
    local_190 = 0;
    *(int *)(puVar10 + 5) = (int)local_188;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = local_188._4_4_;
    local_188 = 0;
    puVar10[6] = uStack_180;
    uStack_180 = 0;
    *(undefined4 *)(puVar10 + 7) = (undefined4)local_178;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = local_178._4_4_;
    local_178 = 0;
    puVar10[8] = CONCAT44(uStack_16c,uStack_170);
    puVar10[9] = uStack_168;
    puVar10[10] = local_160;
    local_160 = 0;
    *(undefined4 *)(puVar10 + 0xb) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar10 + 0x5c) = local_158._4_4_;
    local_158 = 0;
    *(byte *)(puVar10 + 0xc) = *(byte *)(puVar10 + 0xc) & 0xfe | local_150 & 1;
    *(ulonglong *)((longlong)puVar10 + 0x6d) = CONCAT17(local_13c,CONCAT43(local_140,uStack_143));
    puVar10[0xd] = CONCAT35(uStack_143,local_148);
    puVar10[0xf] = local_138;
    local_138 = (void *)0x0;
    *(undefined4 *)(puVar10 + 0x10) = (undefined4)local_130;
    *(undefined4 *)((longlong)puVar10 + 0x84) = local_130._4_4_;
    local_130 = 0;
    if (puVar10 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_128 = FUN_1437deaa0;
    }
    lVar3 = CONCAT44(uStack_104,local_108);
    uVar4 = CONCAT44(uStack_fc,uStack_100);
    uVar13 = CONCAT44(uStack_f4,local_f8);
    uVar5 = CONCAT44(uStack_ec,uStack_f0);
    local_e8 = local_128;
    local_d8 = puVar10;
    local_128 = pcVar7;
    iStack_120 = iStack_e0;
    uStack_11c = uStack_dc;
    uStack_110 = uStack_d0;
    uStack_10c = uStack_cc;
    local_108 = (undefined4)local_c8;
    uStack_104 = local_c8._4_4_;
    uStack_100 = (undefined4)uStack_c0;
    uStack_fc = uStack_c0._4_4_;
    local_f8 = (undefined4)local_b8;
    uStack_f4 = local_b8._4_4_;
    uStack_f0 = (undefined4)uStack_b0;
    uStack_ec = uStack_b0._4_4_;
    local_c8 = lVar3;
    uStack_c0 = uVar4;
    local_b8 = uVar13;
    uStack_b0 = uVar5;
    if (pcVar7 != (code *)0x0) {
      plVar9 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_108;
      }
      (**(code **)(*plVar9 + 0x10))();
      if (local_138 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_147041ad4(&local_190);
    LOCK();
    *(undefined4 *)(param_1 + 0x29) = 1;
    UNLOCK();
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x46));
    plVar9 = (longlong *)param_1[0x44];
    if ((plVar9 != (longlong *)0x0) &&
       (iVar8 = (**(code **)(*plVar9 + 0xa0))(plVar9,0,0), iVar8 < 0)) {
      FUN_147e13e34(&local_128,iVar8);
      local_238 = local_128;
      if (iStack_120 == 0) {
        local_238 = (code *)&DAT_149dfb77a;
      }
      local_230 = 0x19c;
      FUN_140002266(&local_1a8,L"%s -> 0x%X: %s (line: %d)",L"OutputAudioStreamSourceVoice->Stop()",
                    iVar8);
      if (local_128 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_1a8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    local_128 = (code *)0x0;
    local_118 = (longlong *)0x0;
    local_1a8 = local_e8;
    local_198 = local_d8;
    local_d8 = (longlong *)0x0;
    local_188 = local_c8;
    uStack_180 = uStack_c0;
    local_178 = local_b8;
    uStack_170 = (undefined4)uStack_b0;
    uStack_16c = uStack_b0._4_4_;
    if (local_e8 != (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    FUN_147e1475c(&local_1c8,&local_128);
    plVar9 = plStack_1c0;
    uVar4 = local_1c8;
    local_1b8 = 1;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
      UNLOCK();
    }
    puVar10 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar12 = (uint *)*puVar10;
    if (puVar12 != (uint *)0x0) goto LAB_1437ddf25;
    while( true ) {
      uVar14 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar14 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar14 | 1;
        __tlregdtor(&LAB_1437df174);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar10 = puVar11;
      FUN_140217a48(puVar10);
      puVar12 = (uint *)*puVar10;
LAB_1437ddf25:
      puVar20 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar16 = (uint *)(puVar20 + 0x22);
      uVar14 = puVar12[0x12];
      if (puVar16 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar2 = *puVar12;
        *puVar12 = *puVar12 + uVar14 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar14) != 0xffffffff) break;
        puVar12 = (uint *)*puVar10;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar10 = puVar12;
        puVar20 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
        puVar16 = (uint *)(puVar20 + 0x22);
        uVar14 = 0;
        if (puVar16 <= puVar12 + 0x4000) {
          uVar14 = 1;
          goto LAB_1437ddfa7;
        }
      }
    }
    uVar14 = uVar14 + 1;
LAB_1437ddfa7:
    *(uint **)(puVar12 + 0x10) = puVar16;
    puVar12[0x12] = uVar14;
    FUN_1447247dc(puVar20,0);
    *puVar20 = &PTR_FUN_14ab43b88;
    puVar20[0x16] = local_1a8;
    puVar20[0x18] = local_198;
    local_198 = (longlong *)0x0;
    *(undefined4 *)(puVar20 + 0x1c) = (undefined4)local_178;
    *(undefined4 *)((longlong)puVar20 + 0xe4) = local_178._4_4_;
    *(undefined4 *)(puVar20 + 0x1d) = uStack_170;
    *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_16c;
    puVar20[0x1a] = local_188;
    puVar20[0x1b] = uStack_180;
    if (local_1a8 != (code *)0x0) {
      local_1a8 = (code *)0x0;
    }
    puVar20[0x1e] = local_1c8;
    puVar20[0x1f] = plStack_1c0;
    local_1c8 = 0;
    plStack_1c0 = (longlong *)0x0;
    *(undefined1 *)(puVar20 + 0x20) = local_1b8;
    *(undefined4 *)(puVar20 + 0x21) = 0xff;
    if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
    }
    puVar20[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar20[9] = puVar20;
    puVar20[10] = puVar20;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar20[0xf] = uVar13;
    puVar20[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar20 + 0x1c) = 0;
    if (puVar20 == (undefined8 *)0x0) {
      local_228 = CONCAT71(local_228._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
      local_228 = CONCAT71(local_228._1_7_,1);
      FUN_1447439e4(puVar20);
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
    plVar6 = plStack_1c0;
    local_228 = uVar4;
    local_220 = plVar9;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_1c0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_1c0)(plStack_1c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_1a8 != (code *)0x0) {
      plVar9 = &local_188;
      if (local_198 != (longlong *)0x0) {
        plVar9 = local_198;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (local_128 != (code *)0x0) {
      plVar9 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_108;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    FUN_147e14594(plVar18,&local_228);
    plVar18 = local_220;
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_220 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    if ((int)param_1[0x36] == 0) {
      FUN_142af70cc(param_1);
    }
    if (local_e8 != (code *)0x0) {
      plVar18 = &local_c8;
      if (local_d8 != (longlong *)0x0) {
        plVar18 = local_d8;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    FUN_147041ad4(&local_218);
  }
  else {
LAB_1437dd7a8:
    if ((*(byte *)(lVar3 + 0x78) & 1) != 0) {
      lVar3 = *plVar18;
      while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff)
        ;
      }
      param_1[0x42] = *(longlong *)(lVar3 + 0x80);
      lVar3 = param_1[0x3a];
      while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff)
        ;
      }
      param_1[0x43] = *(longlong *)(lVar3 + 0x88);
      lVar3 = param_1[0x3a];
      while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff)
        ;
      }
      lVar3 = *(longlong *)(lVar3 + 0x90);
      param_1[0x44] = lVar3;
      uVar17 = 0;
      if (lVar3 != 0 && (longlong *)param_1[0x42] != (longlong *)0x0) {
        if (param_1[0x43] != 0) {
          iVar8 = (**(code **)(*(longlong *)param_1[0x42] + 0x40))();
          if (-1 < iVar8) {
            if ((int)param_1[0x36] != 0) {
              FUN_142af7238(param_1);
            }
            FUN_142af7820(param_1);
            lVar3 = param_1[0x3a];
            while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
              (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))
                        (*(longlong **)(lVar3 + 0x70),0xffffffff,0);
            }
            FUN_147e10c34(param_1 + 4,lVar3 + 0x98);
            iVar8 = (int)param_1[8] * *(int *)((longlong)param_1 + 0x7c);
            uVar17 = CONCAT71((int7)((ulonglong)(lVar3 + 0x98) >> 8),1);
            if (0 < iVar8) {
              local_238 = (code *)CONCAT44(local_238._4_4_,*(undefined4 *)((longlong)param_1 + 0x4c)
                                          );
              FUN_142af6ce4(param_1 + 0x15,param_1[0xe],iVar8,(int)param_1[0x2b]);
            }
            goto LAB_1437dd8a3;
          }
          FUN_147e13e34(&local_218,iVar8);
          local_238 = local_218;
          if ((int)uStack_210 == 0) {
            local_238 = (code *)&DAT_149dfb77a;
          }
          local_230 = 0x1dc;
          FUN_140002266(&local_1a8,L"%s -> 0x%X: %s (line: %d)",L"StartEngine",iVar8);
          if (local_218 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_1a8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar17 = 0;
      }
LAB_1437dd8a3:
      LOCK();
      *(undefined4 *)(param_1 + 0x29) = 0;
      UNLOCK();
      FUN_147e14196(plVar18);
      goto LAB_1437dd7b1;
    }
  }
  uVar17 = 0;
LAB_1437dd7b1:
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437de360 FUN_1437de360 body=317 status=ok
// SIG undefined FUN_1437de360(void)

undefined8 FUN_1437de360(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  BOOL BVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  QueryPerformanceCounter(&local_40);
  dVar5 = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (dVar5 - *(double *)(param_1 + 0x278) <= 0.01) goto LAB_1437de3df;
    *(double *)(param_1 + 0x278) = dVar5;
LAB_1437de3e3:
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x230));
    if (BVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x268);
      if (puVar1 != param_2) {
        iVar2 = *(int *)(param_2 + 1);
        _Src = (void *)*param_2;
        *(int *)(param_1 + 0x270) = iVar2;
        if (iVar2 == 0 && *(int *)(param_1 + 0x274) == 0) {
          *(undefined4 *)(param_1 + 0x274) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x1ac) = 1;
      UNLOCK();
      FUN_14020fad6(param_1 + 0x280,param_4);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x230));
      uVar4 = 1;
      goto LAB_1437de479;
    }
  }
  else {
    *(double *)(param_1 + 0x278) = dVar5;
LAB_1437de3df:
    if (param_3 != '\0') goto LAB_1437de3e3;
  }
  uVar4 = 0;
LAB_1437de479:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437de49e FUN_1437de49e body=1195 status=ok
// SIG undefined FUN_1437de49e(void)

ulonglong FUN_1437de49e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ulonglong uVar6;
  LPCRITICAL_SECTION unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_44 = 0;
  cVar2 = (**(code **)(*param_1 + 0x60))();
  uVar4 = local_44;
  if ((cVar2 == '\0') || ((int)param_1[0x36] != 0 && local_44 == 0)) {
    uVar7 = 0;
  }
  else {
    FUN_142af7820(param_1);
    if ((int)param_1[0x36] == 0) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((*(byte *)(param_1 + 0x54) & 1) == 0) goto LAB_1437de524;
      unaff_RDI = (LPCRITICAL_SECTION)(param_1 + 0x24);
      EnterCriticalSection(unaff_RDI);
      LOCK();
      *(undefined4 *)(param_1 + 0x29) = 1;
      UNLOCK();
      if ((longlong *)param_1[0x44] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x44] + 0xb0))();
        if ((longlong *)param_1[0x44] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x44] + 0x90))();
          param_1[0x44] = 0;
        }
      }
      if ((longlong *)param_1[0x43] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x43] + 0x90))();
        param_1[0x43] = 0;
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x29) = 0;
      UNLOCK();
      LeaveCriticalSection(unaff_RDI);
    }
    else {
      FUN_142af7238(param_1);
    }
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (uVar4 != 0) {
      plVar1 = param_1 + 0x42;
      if ((longlong *)param_1[0x42] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x42] + 0x10))();
        *plVar1 = 0;
      }
      iVar3 = Ordinal_1(plVar1,0,0);
      if (iVar3 < 0) {
        *plVar1 = 0;
      }
      else {
        iVar3 = (**(code **)(*(longlong *)param_1[0x42] + 0x18))
                          ((longlong *)param_1[0x42],param_1 + 0x39);
        if (-1 < iVar3) {
          uVar4 = 0xffffffff;
          if (1 < (int)param_2[1]) {
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_68 = 0;
            uStack_60 = 0;
            FUN_147042096();
            uVar4 = 0xffffffff;
            if (local_44 != 0) {
              uVar11 = 0;
LAB_1437de7b1:
              uVar4 = uVar11;
              (**(code **)(*param_1 + 0x68))(param_1,uVar4);
              if ((int)uStack_80 == (int)param_2[1]) {
                if (1 < (int)uStack_80) {
                  lVar8 = 0;
                  do {
                    uVar5 = *(ushort *)(local_88 + lVar8);
                    uVar6 = (ulonglong)uVar5;
                    uVar9 = *(ushort *)(*param_2 + lVar8);
                    if (uVar5 == uVar9) {
                      if (uVar5 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar9 | uVar5)) goto LAB_1437de81b;
                      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                      uVar10 = (ulonglong)uVar9;
                      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                      if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar10]) goto LAB_1437de81b;
                    }
                    lVar8 = lVar8 + 2;
                  } while( true );
                }
              }
              else if ((int)param_2[1] + (int)uStack_80 != 1) goto LAB_1437de832;
            }
LAB_1437de93b:
            FUN_147041ad4(&local_98);
          }
          *(uint *)(param_1 + 3) = uVar4;
          (**(code **)(*param_1 + 0x68))(param_1,uVar4,param_1 + 4);
          if ((int)param_1[7] == 0) {
            local_d0 = (longlong *)&DAT_149dfb77a;
          }
          else {
            local_d0 = (longlong *)param_1[6];
          }
          uStack_c0 = CONCAT44(uStack_c0._4_4_,6);
          local_c8 = 0;
          local_d8 = (undefined2 *)((ulonglong)local_d8._4_4_ << 0x20);
          iVar3 = (**(code **)(*(longlong *)param_1[0x42] + 0x38))
                            ((longlong *)param_1[0x42],param_1 + 0x43,(int)param_1[8],
                             (int)param_1[9]);
          if (iVar3 < 0) {
            FUN_147e13e34(&local_a8,iVar3);
            local_d8 = local_a8;
            if (local_a0 == 0) {
              local_d8 = &DAT_149dfb77a;
            }
            local_d0 = (longlong *)CONCAT44(local_d0._4_4_,0x5f8);
            FUN_140002266(&local_98,L"%s -> 0x%X: %s (line: %d)",
                          L"XAudio2System->CreateMasteringVoice",iVar3);
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            param_1[0x43] = 0;
          }
          local_88 = local_88 & 0xffffffffffff0000;
          local_98 = CONCAT44((int)param_1[0x13],(int)param_1[8] << 0x10);
          local_98 = CONCAT62(local_98._2_6_,3);
          uVar4 = (int)param_1[8] << 2;
          uStack_90 = CONCAT26(0x20,CONCAT24((short)uVar4,(uVar4 & 0x3fffc) * (int)param_1[0x13]));
          local_d0 = param_1 + 0x45;
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = (undefined2 *)CONCAT44(local_d8._4_4_,0x40000000);
          iVar3 = (**(code **)(*(longlong *)param_1[0x42] + 0x28))
                            ((longlong *)param_1[0x42],param_1 + 0x44,&local_98,2);
          if (iVar3 < 0) {
            FUN_147e13e34(&local_b8,iVar3);
            local_d8 = local_b8;
            if (local_b0 == 0) {
              local_d8 = &DAT_149dfb77a;
            }
            local_d0 = (longlong *)CONCAT44(local_d0._4_4_,0x612);
            FUN_140002266(&local_a8,L"%s -> 0x%X: %s (line: %d)",L"XAudio2System->CreateSourceVoice"
                          ,iVar3);
            if (local_b8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            param_1[0x44] = 0;
          }
          iVar3 = (int)param_1[8] * *(int *)((longlong)param_1 + 0x7c);
          if (0 < iVar3) {
            local_d8 = (undefined2 *)
                       CONCAT44(local_d8._4_4_,*(undefined4 *)((longlong)param_1 + 0x4c));
            FUN_142af6ce4(param_1 + 0x15,param_1[0xe],iVar3,(int)param_1[0x2b]);
          }
        }
      }
    }
  }
LAB_1437de524:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
LAB_1437de81b:
  if (uVar5 == uVar9) goto LAB_1437de93b;
LAB_1437de832:
  uVar11 = uVar4 + 1;
  uVar4 = 0xffffffff;
  if (local_44 <= uVar11) goto LAB_1437de93b;
  goto LAB_1437de7b1;
}



// FUNCTION 1437de94a FUN_1437de94a body=155 status=ok
// SIG undefined FUN_1437de94a(void)

void FUN_1437de94a(longlong *param_1)

{
  longlong *plVar1;
  
  memset((void *)param_1[0x1c],0,(longlong)(int)param_1[0x1d]);
  FUN_147034fe4(param_1 + 0x16,param_1[0x1c],(int)param_1[0x1d]);
  (**(code **)(*param_1 + 200))(param_1,param_1[0x1c]);
  plVar1 = (longlong *)param_1[0x23];
  if (plVar1 == (longlong *)0x0) {
    FUN_142af76d4(param_1);
    plVar1 = (longlong *)param_1[0x23];
  }
  (**(code **)(*plVar1 + 0x10))();
  plVar1 = (longlong *)param_1[0x44];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437de9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x98))(plVar1,0,0);
    return;
  }
  FUN_142af70cc(param_1);
  return;
}



// FUNCTION 1437de9e6 FUN_1437de9e6 body=145 status=ok
// SIG undefined FUN_1437de9e6(void)

void FUN_1437de9e6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_24;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x220);
  if (plVar1 != (longlong *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_48 = (ulonglong)(uint)(*(int *)(param_1 + 0x84) * *(int *)(param_1 + 0x40) * 4) << 0x20;
    uStack_40 = param_2;
    local_24 = param_1;
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_48,0);
    if (*(char *)(param_1 + 0x294) == '\0') {
      *(undefined1 *)(param_1 + 0x294) = 1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437dea78 FUN_1437dea78 body=9 status=ok
// SIG undefined FUN_1437dea78(void)

void FUN_1437dea78(longlong param_1)

{
  FUN_147e12098(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1437dea82 FUN_1437dea82 body=29 status=ok
// SIG undefined FUN_1437dea82(void)

undefined8 FUN_1437dea82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437deaa0 FUN_1437deaa0 body=1459 status=ok
// SIG undefined FUN_1437deaa0(void)

LARGE_INTEGER * FUN_1437deaa0(LARGE_INTEGER *param_1,longlong *param_2)

{
  LARGE_INTEGER LVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  undefined2 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 *local_100;
  int local_f8;
  LARGE_INTEGER local_f0;
  int local_e8;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 *local_d8;
  int local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER LStack_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER LStack_b0;
  undefined8 local_a8;
  LARGE_INTEGER LStack_a0;
  undefined8 local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER LStack_88;
  LARGE_INTEGER local_80;
  undefined8 uStack_78;
  byte local_70;
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  float local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  QueryPerformanceCounter(&local_c8);
  LVar1 = local_c8;
  CoInitializeEx((LPVOID)0x0,2);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x48))();
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    iVar2 = (**(code **)(*(longlong *)param_2[1] + 0xb0))();
    if (iVar2 < 0) {
      FUN_147e13e34(&local_f0,iVar2);
      if (local_e8 == 0) {
        local_128 = &DAT_149dfb77a;
      }
      else {
        local_128 = (undefined2 *)
                    CONCAT44(local_f0.s.HighPart,
                             CONCAT22(local_f0.s.LowPart._2_2_,local_f0.s.LowPart._0_2_));
      }
      local_120 = (undefined2 *)CONCAT44(local_120._4_4_,0x111);
      FUN_140002266(&local_c8,L"%s -> 0x%X: %s (line: %d)",L"SourceVoice->FlushSourceBuffers",iVar2)
      ;
      if (CONCAT44(local_f0.s.HighPart,CONCAT22(local_f0.s.LowPart._2_2_,local_f0.s.LowPart._0_2_))
          != 0) {
        FUN_1400020a8();
      }
      if (local_c8.QuadPart != 0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*(longlong *)param_2[1] + 0x90))();
    param_2[1] = 0;
  }
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x90))();
    param_2[2] = 0;
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    *param_2 = 0;
  }
  local_a8 = 0;
  LStack_a0.QuadPart = 0;
  local_b8.QuadPart = 0;
  LStack_b0.QuadPart = 0;
  local_c8.QuadPart = 0;
  LStack_c0.QuadPart = 0;
  local_98 = 0;
  local_80.QuadPart = 0;
  uStack_78 = 0;
  FUN_147042096(&LStack_b0);
  local_58 = 0.0;
  local_68.QuadPart = 0;
  uStack_60 = 0;
  iVar2 = (int)param_2[0xf] + -1;
  if ((int)param_2[0xf] == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(&local_68,param_2[0xe],iVar2);
  if (*(char *)((longlong)param_2 + 0x6c) != '\0') {
    iVar2 = Ordinal_1(&local_c8,0,0);
    if (iVar2 < 0) {
      FUN_147e13e34(&local_d8,iVar2);
      local_128 = local_d8;
      if (local_d0 == 0) {
        local_128 = &DAT_149dfb77a;
      }
      local_120 = (undefined2 *)CONCAT44(local_120._4_4_,0x138);
      FUN_140002266(&local_f0,L"%s -> 0x%X: %s (line: %d)",L"XAudio2Create",iVar2);
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT44(local_f0.s.HighPart,CONCAT22(local_f0.s.LowPart._2_2_,local_f0.s.LowPart._0_2_))
          != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((int)param_2[6] == 0) {
        local_120 = &DAT_149dfb77a;
      }
      else {
        local_120 = (undefined2 *)param_2[5];
      }
      uStack_110 = CONCAT44(uStack_110._4_4_,6);
      local_118 = 0;
      local_128 = (undefined2 *)((ulonglong)local_128 & 0xffffffff00000000);
      iVar2 = (**(code **)(*(longlong *)local_c8 + 0x38))
                        (local_c8.QuadPart,&LStack_c0,(int)param_2[7],(int)param_2[8]);
      if (-1 < iVar2) {
        local_e0 = 0;
        local_f0.s.LowPart._2_2_ = (undefined2)(int)param_2[7];
        local_f0.s.HighPart = (LONG)param_2[0xd];
        local_f0.s.LowPart._0_2_ = 3;
        uVar3 = (int)param_2[7] << 2;
        local_e8 = (uVar3 & 0x3fffc) * local_f0.s.HighPart;
        local_e4 = (undefined2)uVar3;
        local_e2 = 0x20;
        local_120 = (undefined2 *)param_2[0xc];
        local_118 = 0;
        uStack_110 = 0;
        local_128 = (undefined2 *)CONCAT44(local_128._4_4_,0x40000000);
        iVar2 = (**(code **)(*(longlong *)local_c8 + 0x28))(local_c8.QuadPart,&local_b8,&local_f0,2)
        ;
        if (-1 < iVar2) {
          if (0.0 < DAT_14cb12d34) {
            FUN_14000f986(DAT_14cb12d34 / 1000.0);
          }
          if (DAT_14cb12d10 != 0) {
            FUN_147e11de0(DAT_14cb12d10,param_2 + 5);
          }
          CoUninitialize();
          QueryPerformanceCounter(&local_f0);
          lVar4 = CONCAT44(local_f0.s.HighPart,
                           CONCAT22(local_f0.s.LowPart._2_2_,local_f0.s.LowPart._0_2_)) -
                  (longlong)LVar1;
          auVar5._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
          auVar5._0_8_ = lVar4;
          auVar5._12_4_ = 0x45300000;
          local_58 = (float)((((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
                             (auVar5._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
          FUN_147e10c34(&LStack_b0,param_2 + 3);
          *param_1 = local_c8;
          param_1[1] = LStack_c0;
          param_1[2] = local_b8;
          param_1[3] = LStack_b0;
          LStack_b0.QuadPart = 0;
          param_1[4].s.LowPart = (DWORD)local_a8;
          *(undefined4 *)((longlong)param_1 + 0x24) = local_a8._4_4_;
          local_a8 = 0;
          param_1[5] = LStack_a0;
          LStack_a0.QuadPart = 0;
          param_1[6].s.LowPart = (DWORD)local_98;
          *(undefined4 *)((longlong)param_1 + 0x34) = local_98._4_4_;
          local_98 = 0;
          param_1[7] = local_90;
          param_1[8] = LStack_88;
          param_1[9] = local_80;
          local_80.QuadPart = 0;
          param_1[10].s.LowPart = (DWORD)uStack_78;
          *(undefined4 *)((longlong)param_1 + 0x54) = uStack_78._4_4_;
          uStack_78 = 0;
          *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe | local_70 & 1;
          param_1[0xc] = local_68;
          local_68.QuadPart = 0;
          param_1[0xd].s.LowPart = (DWORD)uStack_60;
          *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_60._4_4_;
          uStack_60 = 0;
          *(float *)(param_1 + 0xe) = local_58;
          goto LAB_1437df005;
        }
        FUN_147e13e34(&local_100,iVar2);
        local_128 = local_100;
        if (local_f8 == 0) {
          local_128 = &DAT_149dfb77a;
        }
        local_120 = (undefined2 *)CONCAT44(local_120._4_4_,0x171);
        FUN_140002266(&local_d8,L"%s -> 0x%X: %s (line: %d)",L"XAudio2System->CreateSourceVoice",
                      iVar2);
        if (local_100 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(*(longlong *)LStack_c0 + 0x90))();
        LStack_c0.QuadPart = 0;
      }
      if ((longlong *)local_c8.QuadPart != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_c8 + 0x10))();
        local_c8.QuadPart = 0;
      }
    }
  }
  param_1[4].QuadPart = 0;
  param_1[5].QuadPart = 0;
  param_1[2].QuadPart = 0;
  param_1[3].QuadPart = 0;
  param_1->QuadPart = 0;
  param_1[1].QuadPart = 0;
  param_1[6].QuadPart = 0;
  param_1[9].QuadPart = 0;
  param_1[10].QuadPart = 0;
  FUN_147042096(param_1 + 3);
  param_1[0xc].QuadPart = 0;
  param_1[0xd].QuadPart = 0;
  param_1[0xe].s.LowPart = 0;
LAB_1437df005:
  if (local_68.QuadPart != 0) {
    FUN_1400020a8();
  }
  FUN_147041ad4(&LStack_b0);
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1437df054 FUN_1437df054 body=185 status=ok
// SIG undefined FUN_1437df054(void)

undefined8 * FUN_1437df054(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x88,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14ab43af0;
  puVar6[3] = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
  *(undefined4 *)(puVar6 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar5;
  FUN_1477b1d4c(puVar6 + 4,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x6d);
  puVar6[0xd] = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)((longlong)puVar6 + 0x6d) = uVar2;
  puVar6[0xf] = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  _Src = *(void **)(param_1 + 0x78);
  *(int *)(puVar6 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 0xf,iVar1,0);
    memcpy((void *)puVar6[0xf],_Src,(longlong)iVar1 * 2);
  }
  return puVar6 + 1;
}



// FUNCTION 1437df114 FUN_1437df114 body=29 status=ok
// SIG undefined FUN_1437df114(void)

void FUN_1437df114(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437df132 FUN_1437df132 body=66 status=ok
// SIG undefined FUN_1437df132(void)

undefined8 * FUN_1437df132(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab43af0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_147041ad4(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437df19c FUN_1437df19c body=282 status=ok
// SIG undefined FUN_1437df19c(void)

undefined8 * FUN_1437df19c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437df174);
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



// FUNCTION 1437df2b7 FUN_1437df2b7 body=124 status=ok
// SIG undefined FUN_1437df2b7(void)

void FUN_1437df2b7(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cb12d10 = 0;
  DAT_14cb12d18 = 0;
  atexit(FUN_1437dbde8);
  local_28 = 0x800000014ab43046;
  local_14 = 0x11;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464167c6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437df334 FUN_1437df334 body=85 status=ok
// SIG undefined FUN_1437df334(void)

undefined4 * FUN_1437df334(undefined4 *param_1)

{
  undefined1 uVar1;
  
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *param_1 = 0x2fffe;
  *(undefined8 *)(param_1 + 1) = 0x2b1100000ac44;
  *(undefined8 *)(param_1 + 3) = 0x10001600100004;
  param_1[6] = 1;
  param_1[7] = 0x100000;
  param_1[8] = 0xaa000080;
  param_1[9] = 0x719b3800;
  uVar1 = FUN_147e14bc0();
  *(undefined1 *)(param_1 + 10) = uVar1;
  return param_1;
}



// FUNCTION 1437df389 FUN_1437df389 body=102 status=ok
// SIG undefined FUN_1437df389(void)

void FUN_1437df389(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ab43d60;
  local_14 = 0x1a;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1464168e6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437df3f0 FUN_1437df3f0 body=447 status=ok
// SIG undefined FUN_1437df3f0(void)

undefined4 FUN_1437df3f0(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(param_1[2] + 8))(param_1 + 2);
  (**(code **)(*param_1 + 0x80))(param_1,&local_34);
  lVar4 = FUN_14001cc68(200,0x10);
  FUN_147e15522(lVar4);
  puVar1 = (undefined8 *)param_1[0x41];
  param_1[0x41] = lVar4;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    lVar4 = param_1[0x41];
  }
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(lVar4 + 0x10) != 3) {
      FUN_1446efa72((longlong *)(lVar4 + 8),0,3,0x10);
      *(undefined4 *)(lVar4 + 0x10) = 3;
    }
    puVar1 = *(undefined8 **)(lVar4 + 8);
    *puVar1 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    puVar1[2] = lVar5;
    *puVar1 = &PTR_FUN_14ab44270;
    puVar1[3] = param_1;
    puVar1[4] = FUN_142af7532;
    *(undefined4 *)(puVar1 + 5) = 0;
    uVar3 = 0;
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_147042096(&uStack_90);
    local_48 = 0;
    local_a8 = &local_98;
    cVar2 = FUN_1437df5b0(param_1,0xffffffff,local_30,local_34);
    if (cVar2 != '\0') {
      if (param_1[0x41] == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1437df91e(param_1[0x41],&local_98);
      }
    }
    FUN_147041ad4(&uStack_90);
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437df5b0 FUN_1437df5b0 body=291 status=ok
// SIG undefined FUN_1437df5b0(void)

ulonglong FUN_1437df5b0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined8 param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined1 local_d0 [72];
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_147042096(&local_78);
  cVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_78);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_147e15090(&local_80,&local_68);
    uVar2 = CONCAT71((int7)((ulonglong)&local_80 >> 8),local_80 != (longlong *)0x0);
    if (local_80 != (longlong *)0x0) {
      local_d8 = local_80;
      (**(code **)(*local_80 + 8))();
      FUN_1477b1d4c(local_d0,&local_78);
      local_88 = param_3;
      local_84 = param_4;
      FUN_147e1513e(param_5,&local_d8);
      FUN_147041ad4(local_d0);
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))();
      }
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
  }
  FUN_147041ad4(&local_78);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437df6d4 FUN_1437df6d4 body=123 status=ok
// SIG undefined FUN_1437df6d4(void)

void FUN_1437df6d4(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x51) == '\x01') {
    if (*(int *)(param_1 + 0x10) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72((longlong *)(param_1 + 8),0,0,0x10);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  return;
}



// FUNCTION 1437df750 FUN_1437df750 body=184 status=ok
// SIG undefined FUN_1437df750(void)

bool FUN_1437df750(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x118))();
  if (plVar1 == (longlong *)0x0) {
    FUN_1400b22c2(&local_30,".\\Runtime/Windows/AudioMixerWasapi/Private/AudioMixerWasapi.cpp");
    FUN_140056680(local_40,L"FAudioMixerWasapi device cache not initialized");
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_30);
    *param_2 = local_28;
    FUN_1477ccce6(local_30);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1 != (longlong *)0x0;
}



// FUNCTION 1437df80a FUN_1437df80a body=275 status=ok
// SIG undefined FUN_1437df80a(void)

undefined8 FUN_1437df80a(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x118))();
  if (plVar1 != (longlong *)0x0) {
    if (param_2 == 0xffffffff) {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_70);
      if (local_28 == '\x01') {
        FUN_147e10c34(param_3,&local_70);
        if (local_28 == '\x01') {
          FUN_147041ad4(&local_70);
        }
LAB_1437df8ee:
        uVar2 = 1;
        goto LAB_1437df859;
      }
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_70);
      if ((int)param_2 < local_68 && -1 < (int)param_2) {
        FUN_147e10c34(param_3,local_70 + (ulonglong)param_2 * 0x48);
        FUN_1477ccce6(local_70,local_68);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1437df8ee;
      }
      FUN_1477ccce6();
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar2 = 0;
LAB_1437df859:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437df91e FUN_1437df91e body=687 status=ok
// SIG undefined FUN_1437df91e(void)

undefined8 FUN_1437df91e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  double dVar2;
  LPVOID pv;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  longlong local_88;
  LPVOID local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong *local_68;
  undefined4 local_5a;
  int iStack_56;
  int iStack_52;
  ushort uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined4 uStack_42;
  undefined4 uStack_3e;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  undefined1 uStack_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &local_68;
  local_68 = (longlong *)0x0;
  uVar7 = 0;
  iVar3 = (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&DAT_14ab44250,1,0);
  if (iVar3 < 0) goto LAB_1437df9cb;
  local_74 = 0xc;
  local_6c = 0xb;
  iVar3 = (**(code **)(*local_68 + 0x80))();
  if (-1 < iVar3) {
    local_80 = (LPVOID)0x0;
    iVar3 = (**(code **)(*local_68 + 0x40))(local_68,&local_80);
    pv = local_80;
    if (local_80 != (LPVOID)0x0 && -1 < iVar3) {
      iStack_56 = *(int *)((longlong)param_2 + 0x54);
      uStack_4e = 8;
      if (*(ushort *)((longlong)local_80 + 2) < 8) {
        uStack_4e = *(ushort *)((longlong)local_80 + 2);
      }
      uVar7 = 0;
      uStack_32 = 0;
      uStack_46 = 0;
      local_5a = CONCAT22(uStack_4e,0xfffe);
      uStack_4c = 0x20;
      uStack_4a = 0x16;
      uStack_4e = uStack_4e << 2;
      iStack_52 = (uint)uStack_4e * iStack_56;
      uStack_48 = 0x20;
      uStack_42 = 3;
      uStack_3e = 0x100000;
      uStack_3a = 0xaa000080;
      uStack_36 = 0x719b3800;
      uStack_32 = FUN_147e14bc0(&local_5a);
      CoTaskMemFree(pv);
      local_80 = (LPVOID)0x0;
      local_88 = 0;
      iVar3 = (**(code **)(*local_68 + 0x48))(local_68,&local_88,0);
      if (iVar3 < 0) goto LAB_1437df9cb;
      dVar2 = (double)(longlong)((ulonglong)*(uint *)((longlong)param_2 + 0x54) * local_88) /
              10000000.0;
      uVar5 = (ulonglong)(longlong)ROUND(dVar2 + dVar2 + 0.5) >> 1;
      uVar4 = (uint)uVar5;
      *(uint *)(param_1 + 0xb0) = uVar4;
      uVar6 = (ulonglong)*(uint *)(param_2 + 10);
      if (*(uint *)(param_2 + 10) < uVar4) {
        uVar6 = uVar5 & 0xffffffff;
      }
      dVar2 = (double)(uVar6 * 10000000) / (double)*(uint *)((longlong)param_2 + 0x54);
      uVar8 = 0x80040000;
      if (*(uint *)((longlong)param_2 + 0x54) == *(uint *)(param_2 + 6)) {
        uVar8 = 0x40000;
      }
      uVar7 = 0;
      local_98 = 0;
      local_a8 = (longlong **)0x0;
      local_a0 = &local_5a;
      iVar3 = (**(code **)(*local_68 + 0x18))
                        (local_68,0,uVar8,((longlong)ROUND(dVar2 + dVar2 + 0.5) >> 1) + local_88 * 2
                        );
      if (iVar3 < 0) goto LAB_1437df9cb;
      iVar3 = (**(code **)(*local_68 + 0x20))(local_68,param_1 + 0xb4);
      if (-1 < iVar3) {
        plVar1 = *(longlong **)(param_1 + 0x18);
        if (plVar1 != local_68) {
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))();
          }
          *(longlong **)(param_1 + 0x18) = local_68;
          local_68 = (longlong *)0x0;
        }
        *(ulonglong *)(param_1 + 0x41) =
             CONCAT17((undefined1)uStack_3a,CONCAT43(uStack_3e,uStack_42._1_3_));
        *(ulonglong *)(param_1 + 0x49) = CONCAT17(uStack_32,CONCAT43(uStack_36,uStack_3a._1_3_));
        *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_46,CONCAT22(uStack_48,uStack_4a));
        *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_3e,uStack_42);
        *(undefined4 *)(param_1 + 0x28) = local_5a;
        *(int *)(param_1 + 0x2c) = iStack_56;
        *(int *)(param_1 + 0x30) = iStack_52;
        *(uint *)(param_1 + 0x34) = CONCAT22(uStack_4c,uStack_4e);
        FUN_147e155f0(param_1 + 0x58,param_2);
        *(undefined1 *)(param_1 + 0x51) = 1;
        uVar7 = 1;
        goto LAB_1437df9cb;
      }
    }
  }
  uVar7 = 0;
LAB_1437df9cb:
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437dfbce FUN_1437dfbce body=845 status=ok
// SIG undefined FUN_1437dfbce(void)

ulonglong FUN_1437dfbce(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  HANDLE pvVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  ushort uVar20;
  ulonglong uVar21;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  longlong *local_90;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 8);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  *(undefined4 *)(param_1 + 0x90) = param_2[4];
  *(undefined4 *)(param_1 + 0x94) = uVar8;
  *(undefined4 *)(param_1 + 0x98) = uVar9;
  *(undefined4 *)(param_1 + 0x9c) = uVar10;
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  uVar19 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_147042096(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x80);
  *(ulonglong *)(param_1 + 0x78) =
       *(ulonglong *)(param_1 + 0x84) << 0x20 | *(ulonglong *)(param_1 + 0x84) >> 0x20;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x90);
  local_c8 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_147042096(&uStack_e0);
  local_98 = 0;
  local_f8 = &local_e8;
  cVar11 = FUN_1437df5b0(param_1,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                         *(undefined4 *)(param_1 + 0x98));
  if (cVar11 == '\0') goto LAB_1437dfed3;
  FUN_147e10c34(param_1 + 0x20,&uStack_e0);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_FUN_14ab442e0;
  local_88 = FUN_1437e0140;
  local_60 = param_1;
  puVar13 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar13 = 0;
  puVar14 = (undefined8 *)FUN_14001cc68(0x60);
  *puVar14 = &PTR_FUN_14ab441c0;
  *(undefined1 *)(puVar14 + 1) = 0;
  puVar14[2] = 0;
  *(undefined4 *)(puVar14 + 3) = 0;
  puVar14[4] = local_88;
  puVar14[6] = 0;
  if (local_88 != (code *)0x0) {
    pppuVar16 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar16 = &local_68;
    }
    (*(code *)**pppuVar16)();
  }
  uVar19 = 0;
  pvVar15 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  puVar14[2] = pvVar15;
  puVar13[1] = puVar14;
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 **)(param_1 + 0x218) = puVar13;
  FUN_147e1575c(uVar1);
  FUN_147e1575c(0);
  if (pvVar15 != (HANDLE)0x0 && *(longlong *)(param_1 + 0x218) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x208);
    if ((int)local_c8 == *(int *)(lVar2 + 0x78)) {
      if (1 < (int)local_c8) {
        lVar17 = 0;
        while( true ) {
          uVar18 = *(ushort *)(lStack_d0 + lVar17);
          uVar19 = (ulonglong)uVar18;
          uVar20 = *(ushort *)(*(longlong *)(lVar2 + 0x70) + lVar17);
          if (uVar18 != uVar20) break;
          if (uVar18 == 0) goto LAB_1437dfe1f;
LAB_1437dfdd5:
          lVar17 = lVar17 + 2;
        }
        if ((uVar20 | uVar18) < 0x80) {
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
          uVar21 = (ulonglong)uVar20;
          uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
          if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar21]) goto LAB_1437dfdd5;
        }
        if (uVar18 != uVar20) goto LAB_1437dfe0a;
      }
LAB_1437dfe1f:
      iVar12 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x68))
                         (*(longlong **)(lVar2 + 0x18),pvVar15);
      if (-1 < iVar12) {
        local_90 = (longlong *)0x0;
        iVar12 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x70))
                           (*(longlong **)(lVar2 + 0x18),&DAT_14ab44260,&local_90);
        if (-1 < iVar12) {
          plVar3 = *(longlong **)(lVar2 + 0x20);
          if (plVar3 != local_90) {
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
            *(longlong **)(lVar2 + 0x20) = local_90;
            local_90 = (longlong *)0x0;
          }
          *(undefined1 *)(lVar2 + 0x51) = 1;
        }
        if (local_90 != (longlong *)0x0) {
          (**(code **)(*local_90 + 0x10))();
        }
        if (-1 < iVar12) {
          *(undefined1 *)(param_1 + 0x210) = 1;
          uVar19 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          goto LAB_1437dfeb0;
        }
      }
    }
    else {
      if (*(int *)(lVar2 + 0x78) + (int)local_c8 == 1) goto LAB_1437dfe1f;
LAB_1437dfe0a:
      cVar11 = FUN_1437df91e(lVar2,&local_e8);
      if (cVar11 != '\0') goto LAB_1437dfe1f;
    }
    uVar19 = 0;
  }
LAB_1437dfeb0:
  if (local_88 != (code *)0x0) {
    pppuVar16 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar16 = local_78;
    }
    (*(code *)(*pppuVar16)[2])(pppuVar16);
  }
LAB_1437dfed3:
  FUN_147041ad4(&uStack_e0);
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}



// FUNCTION 1437dff52 FUN_1437dff52 body=76 status=ok
// SIG undefined FUN_1437dff52(void)

void FUN_1437dff52(longlong param_1)

{
  char cVar1;
  
  if ((((*(char *)(param_1 + 0x51) == '\x01') &&
       (*(undefined4 *)(param_1 + 0x54) = 4, *(longlong *)(param_1 + 0x18) != 0)) &&
      (*(int *)(param_1 + 0x10) != 0)) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001437dff93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
      return;
    }
  }
  return;
}



// FUNCTION 1437dff9e FUN_1437dff9e body=85 status=ok
// SIG undefined FUN_1437dff9e(void)

void FUN_1437dff9e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1411b1052(param_1[1],L"Audio Render Device Thread",0,6,0xffffffffffffffff,0);
  plVar1 = (longlong *)*param_1;
  *param_1 = lVar2;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437dffe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1437dfff4 FUN_1437dfff4 body=265 status=ok
// SIG undefined FUN_1437dfff4(void)

ulonglong FUN_1437dfff4(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = *(char *)(param_1 + 0x210);
  if (cVar1 == '\0') {
    FUN_1400b22c2(local_28,".\\Runtime/Windows/AudioMixerWasapi/Private/AudioMixerWasapi.cpp");
    FUN_140056680(local_38,L"FAudioMixerWasapi::StopAudioStream() not initialized.");
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x68);
    if ((iVar2 != 0) && (iVar2 != 2)) {
      if (iVar2 == 4) {
        FUN_142af7820(param_1);
      }
      if ((*(longlong **)(param_1 + 0x218) != (longlong *)0x0) &&
         (plVar3 = (longlong *)**(longlong **)(param_1 + 0x218), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,1);
      }
      lVar4 = *(longlong *)(param_1 + 0x208);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x51) == '\x01')) {
        if ((*(uint *)(lVar4 + 0x54) & 0xfffffffd) != 0) {
          if (*(longlong **)(lVar4 + 0x18) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x58))();
          }
          *(undefined4 *)(lVar4 + 0x54) = 2;
        }
        if (*(int *)(lVar4 + 0xb8) != 0) {
          *(undefined4 *)(lVar4 + 0xb8) = 0;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e00fe FUN_1437e00fe body=59 status=ok
// SIG undefined FUN_1437e00fe(void)

void FUN_1437e00fe(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb12d60;
  if (DAT_14cb12d60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb12d60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e012e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1437e0140 FUN_1437e0140 body=200 status=ok
// SIG undefined FUN_1437e0140(void)

void FUN_1437e0140(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*param_1 + 0x208);
  if (*(char *)(lVar1 + 0x51) == '\x01') {
    local_1c = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x30))(*(longlong **)(lVar1 + 0x18),&local_1c);
    if (*(int *)(lVar1 + 0xa8) <= *(int *)(lVar1 + 0xb4) - local_1c) {
      iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x18))
                        (*(longlong **)(lVar1 + 0x20),*(int *)(lVar1 + 0xa8),
                         (undefined8 *)(lVar1 + 0xc0));
      if (iVar2 < 0) {
        *(int *)(lVar1 + 0xb8) = *(int *)(lVar1 + 0xb8) + 1;
      }
      else {
        if (*(int *)(lVar1 + 0x10) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(lVar1 + 8);
        }
        (**(code **)(*plVar3 + 0x58))();
        iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x20))
                          (*(longlong **)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0xa8),0);
        if (iVar2 < 0) {
          *(int *)(lVar1 + 0xb8) = *(int *)(lVar1 + 0xb8) + 1;
        }
        *(undefined8 *)(lVar1 + 0xc0) = 0;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e020a FUN_1437e020a body=24 status=ok
// SIG undefined FUN_1437e020a(void)

longlong FUN_1437e020a(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ab442e0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 1437e0228 FUN_1437e0228 body=12 status=ok
// SIG undefined FUN_1437e0228(void)

void FUN_1437e0228(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437e0231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437e0234 FUN_1437e0234 body=29 status=ok
// SIG undefined FUN_1437e0234(void)

undefined8 FUN_1437e0234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e0252 FUN_1437e0252 body=9 status=ok
// SIG undefined FUN_1437e0252(void)

void FUN_1437e0252(longlong param_1)

{
  FUN_147e12098(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1437e025c FUN_1437e025c body=29 status=ok
// SIG undefined FUN_1437e025c(void)

undefined8 FUN_1437e025c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e0279 FUN_1437e0279 body=124 status=ok
// SIG undefined FUN_1437e0279(void)

void FUN_1437e0279(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cb12d58 = 0;
  DAT_14cb12d60 = 0;
  atexit(FUN_1437e00fe);
  local_28 = 0x800000014ab44226;
  local_14 = 0x10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146416a06(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e0304 FUN_1437e0304 body=3402 status=ok
// SIG undefined FUN_1437e0304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437e0304(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  LARGE_INTEGER LVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  LARGE_INTEGER local_88 [2];
  longlong *local_78;
  char local_4c;
  ulonglong local_28;
  
  uVar9 = DAT_14c872be8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
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
  plVar11 = DAT_14c844840;
  local_98.QuadPart = (LONGLONG)DAT_14c844840;
  if (DAT_14c844840 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
    LOCK();
    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  uStack_90 = (longlong *)((ulonglong)uStack_90._4_4_ << 0x20);
  local_a8 = (undefined8 *)uVar9;
  FUN_140997f46(local_88,0x42c80000,&local_98,1);
  FUN_140997a0e(local_88);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
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
  local_98.QuadPart = (LONGLONG)DAT_14c844840;
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
  uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
  FUN_140997b30(local_88,0x41200000,&local_98);
  if ((longlong *)local_98.QuadPart != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  local_98.QuadPart = 0;
  uStack_90 = (longlong *)0x0;
  local_a8 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/Engine.Engine",L"GameEngine",&local_98);
  LVar12 = local_98;
  if ((int)uStack_90 == 0) {
    LVar12.QuadPart = (LONGLONG)&DAT_149dfb77a;
  }
  uVar9 = FUN_1413f862e();
  local_a0 = 0;
  local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
  lVar10 = FUN_141433b6f(uVar9,0,LVar12.QuadPart,0);
  if (lVar10 == 0) {
    LVar12 = local_98;
    if ((int)uStack_90 == 0) {
      LVar12.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Launch/Private/LaunchEngineLoop.cpp",0x13ea,
                  L"Failed to load UnrealEd Engine class \'%s\'.",LVar12.QuadPart);
  }
  DAT_14cb0d2b0 = (longlong *)FUN_146416b4b(DAT_14c951640,lVar10);
  if ((undefined2 *)local_98.QuadPart != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((DAT_14c872bf0 == '\0') && ((DAT_14ca9a35c & 1) != 0)) {
    plVar11 = DAT_14cabd158;
    if ((DAT_14c846b14 == '\x01') &&
       ((DAT_14ca84e78 != '\x01' &&
        (plVar11 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x18))();
  }
  if (DAT_14ca77900 != 0) {
    FUN_14318ca76();
  }
  FUN_14375863c(DAT_14cb0d2b0);
  QueryPerformanceCounter(&local_98);
  DAT_14c866ff8 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  QueryPerformanceCounter(&local_98);
  *(DWORD *)(param_1 + 0x30) = local_98.s.LowPart;
  *(longlong *)(param_1 + 0x28) = (longlong)(*(double *)(param_1 + 0x20) / _DAT_14c759070);
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
  local_98.QuadPart = (LONGLONG)DAT_14c844840;
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
  uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
  FUN_140997b30(local_88,0x42700000,&local_98);
  if ((longlong *)local_98.QuadPart != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  (**(code **)(*DAT_14cb0d2b0 + 0x2c0))(DAT_14cb0d2b0,param_1);
  FUN_1447f69b6(&DAT_14c872cf8);
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
  local_98.QuadPart = (LONGLONG)DAT_14c844840;
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
  uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
  FUN_140997b30(local_88,0x41f00000,&local_98);
  if ((longlong *)local_98.QuadPart != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar6 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 1) goto LAB_1437e0814;
  }
  else {
LAB_1437e0814:
    if (DAT_14c872bf0 == '\0') {
      local_98.QuadPart = 0x14ab45620;
      uStack_90 = (longlong *)CONCAT35(uStack_90._5_3_,0xf);
      uVar8 = FUN_14001a6c0(&local_98,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar11 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar8,&local_98,1);
      (**(code **)(*plVar11 + 0x48))(plVar11,&local_98);
      plVar11 = uStack_90;
      if ((LARGE_INTEGER *)(param_1 + 0x50) != &local_98) {
        *(LARGE_INTEGER *)(param_1 + 0x50) = local_98;
        local_98.QuadPart = 0;
        plVar3 = *(longlong **)(param_1 + 0x58);
        if (uStack_90 != plVar3) {
          uStack_90 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x58) = plVar11;
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
        }
      }
      plVar11 = uStack_90;
      if (uStack_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = uStack_90 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*uStack_90)(uStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      plVar11 = (longlong *)((LARGE_INTEGER *)(param_1 + 0x50))->QuadPart;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    uVar9 = FUN_14001cc68(0x10,0x10);
    FUN_1458bf54c(uVar9);
    *(undefined8 *)(param_1 + 0x40) = uVar9;
    uVar9 = FUN_14001cc68(8,0x10);
    FUN_145bde376(uVar9);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
  }
  plVar11 = (longlong *)FUN_1427a267a();
  cVar5 = (**(code **)(*plVar11 + 0x18))(plVar11,8);
  if (cVar5 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    cVar5 = (**(code **)(DAT_14c926ca8 + 0x20))(&DAT_14c926ca8,8);
    if (cVar5 != '\0') {
      FUN_142780947();
      (**(code **)(*DAT_14cb0d2b0 + 0x2c8))();
      if (DAT_14ca77900 == 0) {
LAB_1437e0992:
        if ((DAT_14c872bf0 == '\0') && ((DAT_14ca9a35c & 1) != 0)) {
          DAT_14cabd130 = 1;
          plVar11 = DAT_14cabd158;
          if ((DAT_14c846b14 == '\x01') &&
             ((DAT_14ca84e78 != '\x01' &&
              (plVar11 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
            plVar11 = (longlong *)0x0;
          }
          (**(code **)(*plVar11 + 0x58))(plVar11,1);
        }
      }
      else {
        iVar2 = *(int *)(DAT_14ca77900 + 0x40);
        if (((((longlong)iVar2 < 0) || (*(int *)(DAT_14ca77900 + 0x38) <= iVar2)) ||
            (plVar11 = *(longlong **)(*(longlong *)(DAT_14ca77900 + 0x30) + (longlong)iVar2 * 0x10),
            plVar11 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar11 + 0x50))(), cVar5 != '\x02')) goto LAB_1437e0992;
        FUN_14738e292(DAT_14ca77900,1);
        FUN_14738e104(DAT_14ca77900);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb12f38) && (FUN_144b3d300(&DAT_14cb12f38), DAT_14cb12f38 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb12f30 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"rhi.gbxSyncIntervalOverride",1);
        _Init_thread_footer(&DAT_14cb12f38);
      }
      plVar11 = DAT_14cb12f30;
      if (DAT_14cb12f30 != (longlong *)0x0) {
        uVar7 = (**(code **)(*DAT_14cb12f30 + 0x18))(DAT_14cb12f30);
        FUN_140635eb8(plVar11,0xffffffff,uVar7 & 0xff000000,0);
      }
      local_98.QuadPart = 0x14a589870;
      uStack_90 = (longlong *)CONCAT35(uStack_90._5_3_,5);
      uVar8 = FUN_14001a6c0(&local_98,1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      plVar11 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar8,&local_98,0);
      if (plVar11 != (longlong *)0x0) {
        LVar12.QuadPart = FUN_14001cc68(8,0x10);
        *(undefined ***)LVar12 = &PTR_LAB_14ab460f8;
        local_98.QuadPart = LVar12.QuadPart;
        uStack_90 = (longlong *)FUN_14001cc68(0x18,0x10);
        uStack_90[1] = (longlong)&DAT_100000001;
        *uStack_90 = (longlong)&PTR_FUN_14ab46640;
        ((LARGE_INTEGER *)(uStack_90 + 2))->QuadPart = (LONGLONG)LVar12;
        (**(code **)(*plVar11 + 0xd0))(plVar11,&local_98);
        plVar11 = uStack_90;
        if (uStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = uStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*uStack_90)(uStack_90);
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
      DAT_14c868883 = 1;
      DAT_14c761e04 = 1;
      DAT_14cb0bec4 = 3;
      if (DAT_14c8674e0 != 2) {
        FUN_1446efa72(&DAT_14c8674d8,0,2,0x10);
        DAT_14c8674e0 = 2;
      }
      puVar4 = DAT_14c8674d8;
      *DAT_14c8674d8 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      puVar4[2] = lVar13;
      *puVar4 = &PTR_FUN_149e062c0;
      puVar4[3] = FUN_147e15eee;
      lVar10 = FUN_141552594();
      LOCK();
      *(undefined4 *)(lVar10 + 0x1b8) = 1;
      lVar10 = DAT_14ca9f278;
      UNLOCK();
      if ((DAT_14ca9f278 != 0) &&
         (iVar2 = *(int *)(DAT_14ca9f278 + 0x14), *(int *)(DAT_14ca9f278 + 0x14) = iVar2 + 1,
         -1 < iVar2)) {
        *(undefined1 *)(lVar10 + 0x10) = 1;
      }
      FUN_1447f69b6(&DAT_14c872c40);
      lVar10 = DAT_14ca9f278;
      if (DAT_14ca9f278 != 0) {
        iVar2 = *(int *)(DAT_14ca9f278 + 0x14);
        *(int *)(DAT_14ca9f278 + 0x14) = iVar2 + -1;
        if (iVar2 < 2) {
          *(undefined4 *)(lVar10 + 0x14) = 0;
          *(undefined1 *)(lVar10 + 0x10) = 0;
        }
      }
      FUN_1459694e6(10);
      uVar9 = 0;
      goto LAB_1437e07a8;
    }
  }
  DAT_14c83bd06 = DAT_14c872bd8;
  DAT_14c872bd8 = 1;
  uVar9 = 1;
LAB_1437e07a8:
  FUN_140997a5c(local_88);
  if (local_4c == '\x01') {
    local_4c = '\0';
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if ((longlong *)local_88[0].QuadPart != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_88[0] + 0x10))();
  }
  QueryPerformanceCounter(local_88);
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1437e1050 FUN_1437e1050 body=14196 status=ok
// SIG undefined FUN_1437e1050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e1050(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined4 *puVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined ***pppuVar23;
  longlong lVar24;
  undefined7 uVar27;
  longlong *plVar25;
  uint *puVar26;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong unaff_RBP;
  code *pcVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  int iVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  code *pcVar38;
  longlong *plVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_458 [32];
  code **local_438;
  undefined4 local_430;
  undefined4 local_428;
  undefined8 local_420;
  wchar_t *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  code **local_400;
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  ulonglong local_3e0;
  int *local_3d8;
  code *local_3d0;
  undefined8 *local_3c8;
  ulonglong local_3c0;
  longlong *local_3b8;
  longlong local_3b0;
  uint *local_3a8;
  longlong local_3a0;
  undefined1 local_398 [16];
  longlong local_388;
  longlong *local_380;
  longlong local_378;
  longlong *local_370;
  undefined1 local_368 [24];
  undefined1 local_350 [16];
  code *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_320;
  undefined1 local_318 [136];
  undefined4 local_290;
  undefined1 local_28c;
  code *local_288;
  ulonglong uStack_280;
  longlong local_278;
  undefined8 local_270;
  char local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4;
  code *local_1c8;
  undefined4 local_1c0 [2];
  undefined ***local_1b8;
  undefined **local_1a8;
  code *local_1a0;
  float local_198;
  undefined4 *local_a0;
  ulonglong local_98;
  undefined1 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  uVar13 = FUN_141552594();
  FUN_14275a71e(uVar13,1);
  FUN_1402cfa70();
  FUN_143220e76();
  if (DAT_14ca9a35c == 0) {
    FUN_14013e875();
  }
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)(*DAT_14c99f930 + 0x10))();
  }
  if ((DAT_14c872bf0 == '\0') && ((DAT_14ca9a35c & 1) != 0)) {
    plVar14 = DAT_14cabd158;
    if ((DAT_14c846b14 == '\x01') &&
       ((DAT_14ca84e78 != '\x01' &&
        (plVar14 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
      plVar14 = (longlong *)0x0;
    }
    cVar6 = (**(code **)(*plVar14 + 0x60))();
    if (cVar6 != '\0') {
      plVar14 = DAT_14cabd158;
      if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
         ((DAT_14ca84e78 != '\x01' &&
          (plVar14 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
        plVar14 = (longlong *)0x0;
      }
      (**(code **)(*plVar14 + 0x68))();
    }
  }
  pcVar31 = DAT_14c872be0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  FUN_1447f69b6(&DAT_14c867408);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  FUN_1400e4168(&DAT_14c872ee0,1);
  if (((DAT_14c866ff0 == '\x01') && (*(code **)(param_1 + 0x28) != (code *)0x0)) &&
     (*(code **)(param_1 + 0x28) < DAT_14c872be0)) {
LAB_1437e11d3:
    FUN_142797bc0(0,0);
  }
  else {
    dVar3 = *(double *)(param_1 + 0x20);
    if (((dVar3 != 0.0) || (NAN(dVar3))) && (dVar3 < *(double *)(param_1 + 0x18)))
    goto LAB_1437e11d3;
  }
  (**(code **)(*DAT_14cb0d2b0 + 0x2e8))();
  FUN_1417f59d4(pcVar31);
  local_288 = pcVar31;
  local_3d8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  iVar35 = *local_3d8;
  local_3d0 = pcVar31;
  local_3a0 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar35 != 2) {
      if (iVar35 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        bVar40 = DVar11 == DVar12;
      }
      else {
        bVar40 = iVar35 == 0x10;
      }
      if (!bVar40) goto LAB_1437e1295;
    }
LAB_1437e123e:
    FUN_1437e5b9a(&local_288,&DAT_14ca85100);
  }
  else {
    if (iVar35 == 0x10) goto LAB_1437e123e;
LAB_1437e1295:
    pcVar31 = local_3d0;
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*local_3d8 == 2)) goto LAB_1437e123e;
      if (*local_3d8 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1437e123e;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar16 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar16;
      if (puVar19 != (uint *)0x0) goto LAB_1437e1bbe;
      do {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_1437e54fa);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar18 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar18 == (undefined4 *)0x0) {
          puVar18 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar18 = 0xffffffff;
        *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
        puVar18[0x12] = 0;
        *puVar16 = puVar18;
        FUN_140217a48(puVar16);
        puVar19 = (uint *)*puVar16;
LAB_1437e1bbe:
        uVar36 = *(longlong *)(puVar19 + 0x10) + 7;
        uVar22 = puVar19[0x12];
        while( true ) {
          puVar33 = (undefined8 *)(uVar36 & 0xfffffffffffffff8);
          if (puVar33 + 0x16 <= puVar19 + 0x4000) {
            *(undefined8 **)(puVar19 + 0x10) = puVar33 + 0x16;
            puVar19[0x12] = uVar22 + 1;
            iVar35 = 0;
            FUN_1447247dc(puVar33,0);
            *puVar33 = &PTR_FUN_14ab46680;
            puVar33[0x15] = local_288;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar22 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                uVar36 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
                iVar35 = 0;
              }
              else {
                uVar36 = 2;
              }
            }
            else {
              iVar35 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar36 = 5;
            }
            if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
            }
            puVar33[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar33[9] = puVar33;
            puVar33[10] = puVar33;
            lVar15 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar15 == 0) {
              uVar32 = 1;
              if ((char)uVar36 != '\x06') {
                uVar32 = uVar36;
              }
              uVar36 = uVar32;
              uVar13 = 0;
            }
            else {
              if ((char)uVar36 == '\x06') {
                uVar36 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
              }
              uVar13 = *(undefined8 *)(lVar15 + 0x30);
            }
            puVar33[0xf] = uVar13;
            puVar33[0x10] = uVar36 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar33 + 0x1c) = iVar35;
            if (puVar33 == (undefined8 *)0x0) {
              local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
              UNLOCK();
              local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
              FUN_1447439e4(puVar33);
              LOCK();
              piVar2 = (int *)(puVar33 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)*puVar33)(puVar33,1);
              }
            }
            goto LAB_1437e1333;
          }
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar9 = *puVar19;
          *puVar19 = *puVar19 + uVar22 + 1;
          UNLOCK();
          if ((uVar9 ^ uVar22) != 0xffffffff) break;
          puVar19 = (uint *)*puVar16;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar16 = puVar19;
          uVar36 = (longlong)puVar19 + 0x5f;
          uVar22 = 0;
        }
      } while( true );
    }
    local_438 = &local_1c8;
    local_1b8 = (undefined ***)0x0;
    local_1a8 = &PTR_LAB_14ab46660;
    local_1c8 = (code *)&LAB_1437e5d90;
    local_1a0 = pcVar31;
    FUN_14005a792(&DAT_14ca9a440,L"BeginFrame",&DAT_14cb12fdc);
    if (local_1c8 != (code *)0x0) {
      pppuVar23 = local_1b8;
      if (local_1b8 == (undefined ***)0x0) {
        pppuVar23 = &local_1a8;
      }
      (*(code *)(*pppuVar23)[2])();
    }
  }
LAB_1437e1333:
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_1c8,L"Renderer",1);
    pcVar31 = local_1c8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,pcVar31,&local_288,1);
  }
  plVar14 = (longlong *)(**(code **)(*DAT_14cad8310 + 0xb0))();
  uVar22 = *(uint *)(plVar14 + 5);
  if (uVar22 == 0) {
    unaff_RBP = 1;
    iVar35 = 0;
    uVar36 = 0;
    uVar9 = 0;
  }
  else {
    puVar19 = (uint *)plVar14[4];
    if ((uint *)plVar14[4] == (uint *)0x0) {
      puVar19 = (uint *)(plVar14 + 2);
    }
    uVar9 = *puVar19;
    if (uVar9 == 0) {
      iVar35 = uVar22 + 0x1e;
      if (-1 < (int)(uVar22 - 1)) {
        iVar35 = uVar22 - 1;
      }
      uVar36 = 0;
      uVar32 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar32 = uVar36;
      }
      iVar35 = 0;
      do {
        if (uVar32 == uVar36) goto LAB_1437e13da;
        iVar35 = iVar35 + 0x20;
        uVar9 = puVar19[uVar36 + 1];
        uVar36 = uVar36 + 1;
      } while (uVar9 == 0);
    }
    else {
      iVar35 = 0;
      uVar36 = 0;
    }
    unaff_RBP = (ulonglong)(-uVar9 & uVar9);
    uVar32 = unaff_RBP * 2 + 1;
    lVar15 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar9 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar22 <= (int)uVar9) {
      uVar9 = uVar22;
    }
  }
  if (uVar9 != uVar22) {
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar16 = (undefined8 *)(lVar15 + 0x308);
    local_3c8 = (undefined8 *)(lVar15 + 0x310);
    local_3b0 = 0x527800b400;
    local_3b8 = (longlong *)(lVar15 + 0x2b8);
    uVar30 = 0xffffffff;
    local_3e0 = (ulonglong)uVar22;
    local_3a8 = (uint *)(plVar14 + 2);
    do {
      pcVar31 = *(code **)(*plVar14 + (longlong)(int)uVar9 * 0x10);
      iVar28 = *local_3d8;
      if (DAT_14c86a9fc == 0) {
        if (iVar28 != 2) {
          if (iVar28 != 1) goto LAB_1437e1619;
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_1437e161e;
          goto LAB_1437e164c;
        }
LAB_1437e161e:
        (**(code **)(*(longlong *)pcVar31 + 0x480))(pcVar31);
      }
      else {
LAB_1437e1619:
        if (iVar28 == 0x10) goto LAB_1437e161e;
LAB_1437e164c:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*local_3d8 == 2)) goto LAB_1437e161e;
          if (*local_3d8 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_1437e161e;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar19 = (uint *)*puVar16;
          if (puVar19 != (uint *)0x0) goto LAB_1437e1831;
          do {
            uVar22 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar22 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar22 | 1;
              __tlregdtor(&LAB_1437e54fa);
            }
            puVar18 = (undefined4 *)*local_3c8;
            *local_3c8 = 0;
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar18 = 0xffffffff;
            *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar16 = puVar18;
            FUN_140217a48(puVar16);
            puVar19 = (uint *)*puVar16;
LAB_1437e1831:
            uVar32 = *(longlong *)(puVar19 + 0x10) + 7;
            uVar22 = puVar19[0x12];
            while( true ) {
              puVar33 = (undefined8 *)(uVar32 & 0xfffffffffffffff8);
              if (puVar33 + 0x16 <= puVar19 + 0x4000) {
                *(undefined8 **)(puVar19 + 0x10) = puVar33 + 0x16;
                puVar19[0x12] = uVar22 + 1;
                uVar13 = 0;
                FUN_1447247dc(puVar33,0);
                *puVar33 = &PTR_FUN_14ab466d8;
                puVar33[0x15] = pcVar31;
                uVar27 = (undefined7)((ulonglong)uVar13 >> 8);
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar22 = DAT_14c7585c8 >> 10 & 3;
                  iVar28 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                    uVar32 = CONCAT71(uVar27,(&DAT_149e38edc)[uVar22]);
                    iVar28 = 0;
                  }
                  else {
                    uVar32 = CONCAT71(uVar27,2);
                  }
                }
                else {
                  iVar28 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar32 = CONCAT71(uVar27,5);
                }
                if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
                  local_3c0 = uVar32;
                  (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
                  uVar32 = local_3c0;
                }
                puVar33[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar33[9] = puVar33;
                puVar33[10] = puVar33;
                lVar15 = *local_3b8;
                cVar6 = (char)uVar32;
                if (lVar15 == 0) {
                  uVar32 = uVar32 & 0xff;
                  if (cVar6 == '\x06') {
                    uVar32 = 1;
                  }
                  uVar13 = 0;
                }
                else {
                  if (cVar6 == '\x06') {
                    uVar32 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
                  }
                  uVar13 = *(undefined8 *)(lVar15 + 0x30);
                }
                puVar33[0xf] = uVar13;
                puVar33[0x10] = (uVar32 << 0x3b) + local_3b0 | 0xc000000000000000;
                *(int *)((longlong)puVar33 + 0x1c) = iVar28;
                if (puVar33 == (undefined8 *)0x0) {
                  local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
                  FUN_1447439e4(0,&local_1c8);
                  goto LAB_1437e1704;
                }
                LOCK();
                *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
                UNLOCK();
                uVar22 = (uint)local_3e0;
                local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
                FUN_1447439e4(puVar33,&local_1c8);
                LOCK();
                piVar2 = (int *)(puVar33 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar33)(puVar33,1);
                }
                goto LAB_1437e1709;
              }
              *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
              LOCK();
              uVar9 = *puVar19;
              *puVar19 = *puVar19 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) break;
              puVar19 = (uint *)*puVar16;
              *puVar19 = 0xffffffff;
              *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
              puVar19[0x12] = 0;
              *puVar16 = puVar19;
              uVar32 = (longlong)puVar19 + 0x5f;
              uVar22 = 0;
            }
          } while( true );
        }
        local_1b8 = (undefined ***)0x0;
        local_1a8 = &PTR_LAB_14ab46690;
        local_1c8 = (code *)&LAB_1437e5f4e;
        local_438 = &local_1c8;
        local_1a0 = pcVar31;
        FUN_14005a792(&DAT_14ca9a440,L"FScene_StartFrame",&DAT_14cb12fe0);
        if (local_1c8 != (code *)0x0) {
          pppuVar23 = local_1b8;
          if (local_1b8 == (undefined ***)0x0) {
            pppuVar23 = &local_1a8;
          }
          (*(code *)(*pppuVar23)[2])();
        }
      }
LAB_1437e1704:
      uVar22 = (uint)local_3e0;
LAB_1437e1709:
      uVar30 = uVar30 & ~(uint)unaff_RBP;
      puVar19 = (uint *)plVar14[4];
      if ((uint *)plVar14[4] == (uint *)0x0) {
        puVar19 = local_3a8;
      }
      uVar4 = *(uint *)(plVar14 + 5);
      iVar28 = (int)uVar36;
      lVar15 = (longlong)iVar28;
      uVar9 = puVar19[lVar15] & uVar30;
      if (uVar9 == 0) {
        iVar21 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar21 = uVar4 - 1;
        }
        iVar21 = iVar21 >> 5;
        iVar35 = iVar35 + 0x20;
        iVar20 = iVar21;
        if (iVar21 < iVar28) {
          iVar20 = iVar28;
        }
        if (iVar28 < iVar21) {
          lVar24 = 0;
          do {
            uVar9 = puVar19[lVar15 + lVar24 + 1];
            if (uVar9 != 0) {
              uVar36 = (ulonglong)(iVar28 + (int)lVar24 + 1);
              uVar30 = 0xffffffff;
              goto LAB_1437e178d;
            }
            iVar35 = iVar35 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar20 - lVar15 != lVar24);
          uVar30 = 0xffffffff;
          iVar28 = iVar20;
        }
        uVar36 = (ulonglong)(iVar28 + 1);
        uVar22 = (uint)local_3e0;
        uVar9 = uVar4;
      }
      else {
LAB_1437e178d:
        unaff_RBP = (ulonglong)(-uVar9 & uVar9);
        uVar32 = unaff_RBP * 2 + 1;
        lVar15 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar9 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar9) {
          uVar9 = uVar4;
        }
      }
    } while (uVar9 != uVar22);
  }
LAB_1437e13da:
  FUN_1405edfde(&DAT_14ca966d0);
  plVar14 = (longlong *)DAT_14cb0d2b0[0x184];
  if ((plVar14 != (longlong *)0x0) &&
     (lVar15 = (**(code **)(*plVar14 + 0x180))(plVar14), lVar15 != 0)) {
    uVar13 = (**(code **)(*(longlong *)DAT_14cb0d2b0[0x184] + 0x180))();
    cVar6 = FUN_1417de354(uVar13);
    if (cVar6 != '\0') {
      FUN_14375de4c(DAT_14cb0d2b0,0);
    }
  }
  FUN_143421f62(DAT_14cb0d2b0);
  DAT_14c948b40 = 0;
  DAT_14c948b48 = 0;
  DAT_14c948ab8 = 0;
  (**(code **)(*DAT_14c872d28 + 0xa0))();
  local_1c8 = (code *)0x0;
  local_1c0[0] = 0;
  FUN_1446efa72(&local_1c8,0,2,0x10);
  pcVar31 = local_3d0;
  local_1c0[0] = 2;
  *(undefined ***)local_1c8 = &PTR_LAB_14ab465d0;
  LOCK();
  UNLOCK();
  lVar24 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar24 == 0) {
    LOCK();
    UNLOCK();
    lVar24 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  *(longlong *)(local_1c8 + 0x10) = lVar24;
  *(undefined ***)local_1c8 = &PTR_FUN_14ab46560;
  *(code **)(local_1c8 + 0x18) = FUN_14051d743;
  if (local_1c8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_1c8)(local_1c8,0);
    FUN_1446efa72(&local_1c8,0,0,0x10);
    local_1c0[0] = 0;
    if (local_1c8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1417f55ff();
  iVar35 = *local_3d8;
  if (DAT_14c86a9fc == 0) {
    if (iVar35 != 2) {
      if (iVar35 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        bVar40 = DVar11 == DVar12;
      }
      else {
        bVar40 = iVar35 == 0x10;
      }
      pcVar31 = local_3d0;
      if (!bVar40) goto LAB_1437e1e55;
    }
LAB_1437e1562:
    DAT_14c761df4 = 1;
    if (DAT_14c842750 == '\0') {
      FUN_144ad9cc6(&DAT_14ca85100,3,0);
    }
  }
  else {
    if (iVar35 == 0x10) goto LAB_1437e1562;
LAB_1437e1e55:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*local_3d8 == 2)) goto LAB_1437e1562;
      if (*local_3d8 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1437e1562;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar16 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar16;
      if (puVar19 != (uint *)0x0) goto LAB_1437e31f8;
      do {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_1437e54fa);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar18 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar18 == (undefined4 *)0x0) {
          puVar18 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar18 = 0xffffffff;
        *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
        puVar18[0x12] = 0;
        *puVar16 = puVar18;
        FUN_140217a48(puVar16);
        puVar19 = (uint *)*puVar16;
LAB_1437e31f8:
        uVar36 = *(longlong *)(puVar19 + 0x10) + 7;
        uVar22 = puVar19[0x12];
        while( true ) {
          puVar33 = (undefined8 *)(uVar36 & 0xfffffffffffffff8);
          if (puVar33 + 0x16 <= puVar19 + 0x4000) {
            *(undefined8 **)(puVar19 + 0x10) = puVar33 + 0x16;
            puVar19[0x12] = uVar22 + 1;
            iVar35 = 0;
            FUN_1447247dc(puVar33,0);
            *puVar33 = &PTR_FUN_14ab46718;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar22 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                uVar36 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
              }
              else {
                uVar36 = 2;
              }
            }
            else {
              iVar35 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar36 = 5;
            }
            if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
            }
            puVar33[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar33[9] = puVar33;
            puVar33[10] = puVar33;
            lVar15 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar15 == 0) {
              uVar32 = 1;
              if ((char)uVar36 != '\x06') {
                uVar32 = uVar36;
              }
              uVar36 = uVar32;
              uVar13 = 0;
            }
            else {
              if ((char)uVar36 == '\x06') {
                uVar36 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
              }
              uVar13 = *(undefined8 *)(lVar15 + 0x30);
            }
            puVar33[0xf] = uVar13;
            puVar33[0x10] = uVar36 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar33 + 0x1c) = iVar35;
            if (puVar33 == (undefined8 *)0x0) {
              local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
              UNLOCK();
              local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
              FUN_1447439e4(puVar33);
              LOCK();
              piVar2 = (int *)(puVar33 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)*puVar33)(puVar33,1);
              }
            }
            goto LAB_1437e1f18;
          }
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar9 = *puVar19;
          *puVar19 = *puVar19 + uVar22 + 1;
          UNLOCK();
          if ((uVar9 ^ uVar22) != 0xffffffff) break;
          puVar19 = (uint *)*puVar16;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar16 = puVar19;
          uVar36 = (longlong)puVar19 + 0x5f;
          uVar22 = 0;
        }
      } while( true );
    }
    local_1b8 = (undefined ***)0x0;
    local_1a8 = &PTR_LAB_14a2f19c0;
    local_1a0 = (code *)&LAB_1437e6112;
    local_1c8 = (code *)&LAB_1448467b2;
    local_438 = &local_1c8;
    FUN_14005a792(&DAT_14ca9a440,L"ResetDeferredUpdates",&DAT_14cb12fe4);
    if (local_1c8 != (code *)0x0) {
      pppuVar23 = local_1b8;
      if (local_1b8 == (undefined ***)0x0) {
        pppuVar23 = &local_1a8;
      }
      (*(code *)(*pppuVar23)[2])();
    }
  }
LAB_1437e1f18:
  if (DAT_14c867cd8 == '\0') {
    FUN_1417f57f6(pcVar31);
    FUN_1400e427a(1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb12f48) && (FUN_144b3d300(&DAT_14cb12f48), DAT_14cb12f48 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"t.IdleWhenNotForeground",1);
    if (plVar14 == (longlong *)0x0) {
      DAT_14cb12f40 = (int *)0x0;
    }
    else {
      DAT_14cb12f40 = (int *)(**(code **)(*plVar14 + 0x68))(plVar14);
    }
    _Init_thread_footer(&DAT_14cb12f48);
  }
  if ((((*DAT_14cb12f40 == 0) || (DAT_14c866ff0 != '\0')) || (DAT_14c846570 == (code *)0x0)) ||
     (cVar6 = (*DAT_14c846570)(), cVar6 != '\0')) {
LAB_1437e1f65:
    uVar10 = 0;
  }
  else {
    lVar15 = DAT_14cb0d2b0[0x22a];
    if ((longlong)(int)lVar15 != 0) {
      lVar24 = DAT_14cb0d2b0[0x229];
      lVar17 = 0;
      do {
        cVar6 = FUN_144b2c3bc(*(undefined8 *)(*(longlong *)(lVar24 + lVar17) + 0x360));
        if (cVar6 == '\0') goto LAB_1437e1f65;
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar15 * 8 != lVar17);
    }
    FUN_14000f986(0x3dcccccd);
    uVar10 = (undefined4)CONCAT71((int7)(unaff_RBP >> 8),1);
  }
  if ((DAT_14cb12220 != 0.0) || (NAN(DAT_14cb12220))) {
    if (DAT_14cb10918 != 0) {
      if (*(longlong *)(DAT_14cb10918 + 0x30) == 0) {
        if ((DAT_14cb12220 != _DAT_00000408) || (NAN(DAT_14cb12220) || NAN(_DAT_00000408))) {
          lVar15 = 0;
          goto LAB_1437e1fa4;
        }
      }
      else {
        lVar15 = *(longlong *)(*(longlong *)(DAT_14cb10918 + 0x30) + 0x2b0);
        if ((DAT_14cb12220 != *(float *)(lVar15 + 0x408)) ||
           (NAN(DAT_14cb12220) || NAN(*(float *)(lVar15 + 0x408)))) {
LAB_1437e1fa4:
          *(float *)(lVar15 + 0x408) = DAT_14cb12220;
        }
      }
    }
    DAT_14cb12220 = 0.0;
  }
  puVar16 = (undefined8 *)FUN_1400dbadc();
  for (plVar14 = (longlong *)*puVar16; plVar14 != (longlong *)0x0;
      plVar14 = (longlong *)(**(code **)(*plVar14 + 0x60))(plVar14)) {
    (**(code **)(*plVar14 + 0x58))(plVar14);
  }
  FUN_1447f69b6(&DAT_14c867420);
  lVar15 = DAT_14c98e618;
  cVar6 = (char)uVar10;
  if (DAT_14c98e618 != 0 && cVar6 == '\0') {
    FUN_1428f37b6(DAT_14c98e618);
    FUN_1449ad830(lVar15);
  }
  uVar36 = (ulonglong)(uint)(float)DAT_14c759090;
  (**(code **)(*DAT_14cb0d2b0 + 0x2e0))(DAT_14cb0d2b0,uVar36,uVar10);
  if (DAT_14ca77900 == 0) {
    if ((DAT_14c872bf0 == '\0') && ((DAT_14ca9a35c & 1) != 0)) {
      plVar14 = DAT_14cabd158;
      if ((DAT_14c846b14 == '\x01') &&
         ((DAT_14ca84e78 != '\x01' &&
          (plVar14 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
        plVar14 = (longlong *)0x0;
      }
      (**(code **)(*plVar14 + 0x58))(plVar14,1);
    }
  }
  else {
    iVar35 = *(int *)(DAT_14ca77900 + 0x38);
    if ((longlong)iVar35 != 0) {
      lVar15 = *(longlong *)(DAT_14ca77900 + 0x30);
      lVar24 = 0;
      bVar40 = false;
      do {
        plVar14 = *(longlong **)(lVar15 + lVar24);
        if (plVar14 != (longlong *)0x0) {
          cVar7 = (**(code **)(*plVar14 + 0x50))();
          bVar40 = (bool)(bVar40 | cVar7 == '\x02');
        }
        lVar24 = lVar24 + 0x10;
      } while ((longlong)iVar35 * 0x10 != lVar24);
      if (bVar40) {
        iVar35 = *(int *)(DAT_14ca77900 + 0x40);
        if ((((-1 < (longlong)iVar35) && (iVar35 < *(int *)(DAT_14ca77900 + 0x38))) &&
            (plVar14 = *(longlong **)(*(longlong *)(DAT_14ca77900 + 0x30) + (longlong)iVar35 * 0x10)
            , plVar14 != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(*plVar14 + 0x50))(), cVar7 == '\x02')) {
          FUN_14738e104(DAT_14ca77900);
        }
        plVar14 = DAT_14cb0d2b0;
        if (DAT_14cb0d2b0 != (longlong *)0x0) {
          lVar24 = FUN_1413f862e();
          lVar15 = plVar14[2];
          if ((*(int *)(lVar24 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8) ==
              lVar24 + 0x30)) {
            FUN_1434e4d8a(plVar14);
          }
        }
      }
    }
    if ((DAT_14c872bf0 == '\0') && ((DAT_14ca9a35c & 1) != 0)) {
      plVar14 = DAT_14cabd158;
      if ((DAT_14c846b14 == '\x01') &&
         ((DAT_14ca84e78 != '\x01' &&
          (plVar14 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
        plVar14 = (longlong *)0x0;
      }
      cVar7 = (**(code **)(*plVar14 + 0x68))();
      if ((cVar7 == '\0') && (lVar15 = *(longlong *)(DAT_14c98e618 + 0x20), lVar15 != 0)) {
        plVar14 = DAT_14cabd158;
        if (((DAT_14c846b14 == '\x01') &&
            (((DAT_14c872bf0 == '\0' && ((DAT_14ca9a35c & 1) != 0)) && (DAT_14ca84e78 != '\x01'))))
           && (plVar14 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)) {
          plVar14 = (longlong *)0x0;
        }
        FUN_14738e0aa(DAT_14ca77900,local_398);
        (**(code **)(*plVar14 + 8))(plVar14,lVar15,local_398);
      }
    }
    FUN_1456f2cd2();
  }
  uVar13 = FUN_141589436();
  FUN_1403a2d98(uVar13,1);
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)(*DAT_14c99f930 + 0x10))();
  }
  lVar15 = DAT_14c98e618;
  if (DAT_14c98e618 != 0 && cVar6 == '\0') {
    if ((longlong)(int)DAT_14cb0d2b0[0x22a] != 0) {
      plVar14 = (longlong *)DAT_14cb0d2b0[0x229];
      plVar39 = plVar14 + (int)DAT_14cb0d2b0[0x22a];
      do {
        lVar24 = *(longlong *)(*plVar14 + 0x360);
        if (((lVar24 != 0) &&
            ((bVar8 = *(byte *)(lVar24 + 0x152), bVar8 == 1 ||
             ((bVar8 < 7 && ((0x68U >> (bVar8 & 0x1f) & 1) != 0)))))) &&
           (lVar17 = FUN_1449baec6(lVar24), lVar17 != 0)) {
          FUN_140761b7a(lVar17,&local_378);
          plVar25 = local_370;
          if (local_378 != 0) {
            local_1c8 = (code *)CONCAT71(local_1c8._1_7_,DAT_14c96b238);
            local_a0 = (undefined4 *)0x0;
            local_98 = 0x400000000;
            local_90 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_88 = 0;
            plStack_80 = (longlong *)0x0;
            if (local_370 == (longlong *)0x0) {
              local_388 = local_378;
              local_380 = (longlong *)0x0;
              FUN_1407c4cd2(lVar15,&local_388,&local_1c8);
            }
            else {
              LOCK();
              *(int *)(local_370 + 1) = (int)local_370[1] + 1;
              UNLOCK();
              local_388 = local_378;
              local_380 = local_370;
              LOCK();
              *(int *)(local_370 + 1) = (int)local_370[1] + 1;
              UNLOCK();
              FUN_1407c4cd2(lVar15,&local_388,&local_1c8);
              LOCK();
              plVar1 = plVar25 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar25)(plVar25);
                LOCK();
                piVar2 = (int *)((longlong)plVar25 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                }
              }
            }
            if ((0 < (int)local_98) && (0 < *(int *)(lVar24 + 0x238))) {
              lVar17 = 0;
              do {
                iVar35 = *(int *)(*(longlong *)(lVar24 + 0x230) + 4 + lVar17 * 8);
                if ((((iVar35 != 0) &&
                     (uVar22 = *(uint *)(*(longlong *)(lVar24 + 0x230) + lVar17 * 8),
                     -1 < (int)uVar22)) && ((int)uVar22 < DAT_14c9647dc)) &&
                   (((plVar25 = (longlong *)
                                ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                     plVar25 != (longlong *)0x0 && ((int)plVar25[2] == iVar35)) &&
                    (((*(uint *)(plVar25 + 1) & 0x10200000) == 0 &&
                     ((lVar5 = *plVar25, lVar5 != 0 &&
                      (lVar29 = *(longlong *)(lVar5 + 0x430), lVar29 != 0)))))))) {
                  if (DAT_14cae9568 == 0) {
                    local_340 = FUN_1417de738;
                    local_3f0 = &LAB_145893408;
                    local_3f8 = &LAB_1458cbbd2;
                    local_400 = &local_340;
                    local_408 = &LAB_147ba21f1;
                    local_410 = &LAB_1463e9233;
                    local_418 = L"Engine";
                    local_420 = 0;
                    local_428 = 0x1000000c;
                    local_430 = 8;
                    local_438 = (code **)CONCAT44(local_438._4_4_,0x2b8);
                    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
                    lVar29 = *(longlong *)(lVar5 + 0x430);
                    if (lVar29 == 0) goto LAB_1437e24f6;
                  }
                  if ((((DAT_14cae9568 != 0) && (lVar5 = *(longlong *)(lVar29 + 0x10), lVar5 != 0))
                      && (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
                      == DAT_14cae9568 + 0x30)) {
                    uVar10 = (**(code **)(**(longlong **)(lVar15 + 0x720) + 0x38))
                                       (*(longlong **)(lVar15 + 0x720),
                                        *(undefined4 *)(lVar29 + 0xe0));
                    local_288 = (code *)CONCAT71(local_288._1_7_,*(undefined1 *)(lVar29 + 0x1f8));
                    uStack_280 = *(undefined8 *)(lVar29 + 0x200);
                    local_278 = *(longlong *)(lVar29 + 0x208);
                    if (local_278 != 0) {
                      LOCK();
                      *(int *)(local_278 + 8) = *(int *)(local_278 + 8) + 1;
                      UNLOCK();
                    }
                    local_268 = *(char *)(lVar29 + 0x218);
                    if (local_268 == '\x01') {
                      local_270 = *(undefined8 *)(lVar29 + 0x210);
                    }
                    local_260 = *(undefined8 *)(lVar29 + 0x220);
                    local_258 = *(longlong *)(lVar29 + 0x228);
                    if (local_258 != 0) {
                      LOCK();
                      *(int *)(local_258 + 0xc) = *(int *)(local_258 + 0xc) + 1;
                      UNLOCK();
                    }
                    local_250 = *(undefined8 *)(lVar29 + 0x230);
                    local_248 = *(longlong *)(lVar29 + 0x238);
                    if (local_248 != 0) {
                      LOCK();
                      *(int *)(local_248 + 0xc) = *(int *)(local_248 + 0xc) + 1;
                      UNLOCK();
                    }
                    local_240 = *(undefined8 *)(lVar29 + 0x240);
                    local_238 = *(longlong *)(lVar29 + 0x248);
                    if (local_238 != 0) {
                      LOCK();
                      *(int *)(local_238 + 0xc) = *(int *)(local_238 + 0xc) + 1;
                      UNLOCK();
                    }
                    local_230 = *(undefined8 *)(lVar29 + 0x250);
                    local_228 = *(longlong *)(lVar29 + 600);
                    if (local_228 != 0) {
                      LOCK();
                      *(int *)(local_228 + 0xc) = *(int *)(local_228 + 0xc) + 1;
                      UNLOCK();
                    }
                    local_220 = *(undefined8 *)(lVar29 + 0x260);
                    local_218 = *(longlong *)(lVar29 + 0x268);
                    if (local_218 != 0) {
                      LOCK();
                      *(int *)(local_218 + 0xc) = *(int *)(local_218 + 0xc) + 1;
                      UNLOCK();
                    }
                    local_210 = *(undefined8 *)(lVar29 + 0x270);
                    local_208 = *(longlong *)(lVar29 + 0x278);
                    if (local_208 != 0) {
                      LOCK();
                      *(int *)(local_208 + 0xc) = *(int *)(local_208 + 0xc) + 1;
                      UNLOCK();
                    }
                    local_200 = *(undefined8 *)(lVar29 + 0x280);
                    local_1f8 = *(undefined8 *)(lVar29 + 0x288);
                    local_1f0 = *(longlong *)(lVar29 + 0x290);
                    if (local_1f0 != 0) {
                      LOCK();
                      *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
                      UNLOCK();
                    }
                    local_1e8 = *(undefined8 *)(lVar29 + 0x298);
                    local_1e0 = *(longlong *)(lVar29 + 0x2a0);
                    if (local_1e0 != 0) {
                      LOCK();
                      *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
                      UNLOCK();
                    }
                    local_1d4 = *(undefined1 *)(lVar29 + 0x2ac);
                    local_1d8 = *(undefined4 *)(lVar29 + 0x2a8);
                    local_438 = (code **)CONCAT44(local_438._4_4_,10);
                    FUN_1402d7e2c(lVar15,&local_1c8,&local_288,uVar10);
                    local_340 = (code *)((ulonglong)local_340 & 0xffffffffffffff00);
                    local_320 = 0;
                    local_338 = 0;
                    uStack_330 = 0;
                    memset(local_318,0,0x88);
                    local_290 = 0x20702;
                    local_28c = 0;
                    FUN_1403d4924(lVar29 + 0x1f8,&local_340);
                    FUN_14493db24(&local_340);
                  }
                }
LAB_1437e24f6:
                lVar17 = lVar17 + 1;
              } while ((int)lVar17 < *(int *)(lVar24 + 0x238));
            }
            FUN_1447fa2ac(local_78,uStack_70 & 0xffffffff);
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            plVar25 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_80)(plStack_80);
                LOCK();
                piVar2 = (int *)((longlong)plVar25 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                }
              }
            }
            puVar18 = local_a0;
            if (local_a0 == (undefined4 *)0x0) {
              puVar18 = local_1c0;
            }
            FUN_1447157bd(puVar18,local_98 & 0xffffffff);
            if (local_a0 != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar25 = local_370;
          if (local_370 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_370 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_370)(local_370);
              LOCK();
              piVar2 = (int *)((longlong)plVar25 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
              }
            }
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar39);
    }
    FUN_1405d28f8(DAT_14c98e618,2);
  }
  cVar7 = (**(code **)(*DAT_14cb0d2b0 + 0x538))();
  if ((((longlong *)DAT_14cb0d2b0[0x184] == (longlong *)0x0) ||
      (lVar15 = (**(code **)(*(longlong *)DAT_14cb0d2b0[0x184] + 0x180))(), lVar15 == 0)) ||
     (pcVar31 = *(code **)(lVar15 + 0x108), pcVar31 == (code *)0x0)) {
    local_288 = (code *)0x0;
    uStack_280 = 0;
    bVar40 = false;
    pcVar31 = (code *)0x0;
  }
  else {
    iVar35 = *DAT_14cb12e60;
    if (cVar7 != '\0') {
      fVar41 = (float)DAT_14c759090;
      cVar7 = FUN_147a60e8a(pcVar31);
      if (cVar7 != '\0') {
        plVar14 = (longlong *)FUN_1405d8a54(0);
        puVar16 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar19 = (uint *)*puVar16;
        if (puVar19 != (uint *)0x0) goto LAB_1437e3396;
        do {
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_1437e54fa);
          }
          lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar18 = *(undefined4 **)(lVar15 + 0x310);
          *(undefined8 *)(lVar15 + 0x310) = 0;
          if (puVar18 == (undefined4 *)0x0) {
            puVar18 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar18 = 0xffffffff;
          *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
          puVar18[0x12] = 0;
          *puVar16 = puVar18;
          FUN_140217a48(puVar16);
          puVar19 = (uint *)*puVar16;
LAB_1437e3396:
          uVar32 = *(longlong *)(puVar19 + 0x10) + 0xf;
          uVar22 = puVar19[0x12];
          while( true ) {
            puVar33 = (undefined8 *)(uVar32 & 0xfffffffffffffff0);
            if (puVar33 + 0x20 <= puVar19 + 0x4000) {
              *(undefined8 **)(puVar19 + 0x10) = puVar33 + 0x20;
              puVar19[0x12] = uVar22 + 1;
              FUN_1447247dc(puVar33,0);
              *puVar33 = &PTR_FUN_14ab46728;
              local_1b8 = (undefined ***)0x0;
              local_1a8 = &PTR_LAB_14ab46740;
              local_1c8 = FUN_1437e63fa;
              local_1a0 = pcVar31;
              local_198 = fVar41;
              FUN_147e17fec(puVar33 + 0x16,&local_1c8,plVar14);
              uVar22 = DAT_14cb12ea0;
              if (((DAT_14cb12e98 != 0x400) || (DAT_14c7585d8 != 0)) &&
                 ((DAT_14cb12e98 != 0x800 || (DAT_14c7585dc != 0)))) {
                uVar22 = DAT_14cb12e98 | _DAT_14cb12e9c;
              }
              uVar9 = uVar22 >> 10 & 3;
              if ((uVar22 >> 9 & 1) == 0 || uVar9 < 2) {
                uVar32 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
              }
              else {
                uVar32 = 2;
              }
              if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
              }
              puVar33[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar33[9] = puVar33;
              puVar33[10] = puVar33;
              lVar15 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar15 == 0) {
                uVar37 = 1;
                if ((char)uVar32 != '\x06') {
                  uVar37 = uVar32;
                }
                uVar32 = uVar37;
                uVar13 = 0;
              }
              else {
                if ((char)uVar32 == '\x06') {
                  uVar32 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
                }
                uVar13 = *(undefined8 *)(lVar15 + 0x30);
              }
              puVar33[0xf] = uVar13;
              puVar33[0x10] = uVar32 << 0x3b | 0xc00000527800b400;
              *(undefined4 *)((longlong)puVar33 + 0x1c) = 0;
              if (puVar33 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
                UNLOCK();
              }
              local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
              FUN_1447439e4(puVar33);
              if (iVar35 == 0) {
                local_288 = (code *)0x0;
                uStack_280 = 0;
                bVar40 = false;
                goto LAB_1437e27f5;
              }
              (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0);
              FUN_14018802a(plVar14);
              if (puVar33 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(puVar33 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar33)(puVar33,1);
                }
              }
              goto LAB_1437e41a2;
            }
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
            LOCK();
            uVar9 = *puVar19;
            *puVar19 = *puVar19 + uVar22 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar22) != 0xffffffff) break;
            puVar19 = (uint *)*puVar16;
            *puVar19 = 0xffffffff;
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
            puVar19[0x12] = 0;
            *puVar16 = puVar19;
            uVar32 = (longlong)puVar19 + 0x67;
            uVar22 = 0;
          }
        } while( true );
      }
    }
    local_288 = (code *)0x0;
    uStack_280 = 0;
    if (iVar35 == 0) {
      bVar40 = false;
    }
    else {
LAB_1437e41a2:
      uStack_280 = 0;
      local_288 = (code *)0x0;
      FUN_147a6244a(pcVar31,&local_1c8);
      FUN_147e15fae(&local_288,&local_1c8);
      FUN_1437e649d(local_1c8,local_1c0[0]);
      if (local_1c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      bVar40 = true;
    }
  }
  plVar14 = (longlong *)0x0;
  puVar33 = (undefined8 *)0x0;
LAB_1437e27f5:
  if (cVar6 == '\0' && DAT_14c98e618 != 0) {
    bVar8 = (**(code **)(*DAT_14cb0d2b0 + 800))();
    if (DAT_14c99f930 != (longlong *)0x0) {
      (**(code **)(*DAT_14c99f930 + 0x18))(DAT_14c99f930,0);
    }
    FUN_1405d28f8(DAT_14c98e618,(bVar8 ^ 1) * '\x04' + '\x01');
    if (DAT_14c99f930 != (longlong *)0x0) {
      (**(code **)(*DAT_14c99f930 + 0x18))(DAT_14c99f930,1);
    }
  }
  if (bVar40) {
    FUN_1434c8d9a(pcVar31,&local_288);
  }
  if (puVar33 != (undefined8 *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,0xffffffff,0);
    FUN_14018802a(plVar14);
    LOCK();
    piVar2 = (int *)(puVar33 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar33)(puVar33,1);
    }
  }
  FUN_1403abd4e(&DAT_14ca966d0,local_368);
  FUN_14004710c(local_350);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_1c8,L"Renderer",1);
    pcVar31 = local_1c8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,pcVar31,&local_340,1);
  }
  plVar14 = (longlong *)(**(code **)(*DAT_14cad8310 + 0xb0))();
  uVar10 = (undefined4)(uVar36 >> 0x20);
  uVar22 = *(uint *)(plVar14 + 5);
  if (uVar22 == 0) {
    uVar32 = 1;
    uVar37 = 0;
    iVar35 = 0;
    uVar9 = 0;
  }
  else {
    puVar19 = (uint *)plVar14[4];
    if ((uint *)plVar14[4] == (uint *)0x0) {
      puVar19 = (uint *)(plVar14 + 2);
    }
    uVar9 = *puVar19;
    if (uVar9 == 0) {
      iVar35 = uVar22 + 0x1e;
      if (-1 < (int)(uVar22 - 1)) {
        iVar35 = uVar22 - 1;
      }
      uVar37 = 0;
      uVar32 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar32 = uVar37;
      }
      iVar35 = 0;
      do {
        if (uVar32 == uVar37) goto LAB_1437e295c;
        iVar35 = iVar35 + 0x20;
        uVar9 = puVar19[uVar37 + 1];
        uVar37 = uVar37 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar37 = 0;
      iVar35 = 0;
    }
    uVar32 = (ulonglong)(-uVar9 & uVar9);
    uVar34 = uVar32 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar9 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar22 <= (int)uVar9) {
      uVar9 = uVar22;
    }
  }
  if (uVar9 != uVar22) {
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar16 = (undefined8 *)(lVar15 + 0x308);
    local_3c8 = (undefined8 *)(lVar15 + 0x310);
    local_3b0 = 0x527800b400;
    local_3b8 = (longlong *)(lVar15 + 0x2b8);
    uVar30 = 0xffffffff;
    local_3e0 = (ulonglong)uVar22;
    local_3a8 = (uint *)(plVar14 + 2);
    do {
      pcVar31 = *(code **)(*plVar14 + (longlong)(int)uVar9 * 0x10);
      iVar28 = *local_3d8;
      if (DAT_14c86a9fc == 0) {
        if (iVar28 != 2) {
          if (iVar28 != 1) goto LAB_1437e2bf3;
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_1437e2bf8;
          goto LAB_1437e2c2b;
        }
LAB_1437e2bf8:
        (**(code **)(*(longlong *)pcVar31 + 0x488))(pcVar31,&DAT_14ca85100);
      }
      else {
LAB_1437e2bf3:
        if (iVar28 == 0x10) goto LAB_1437e2bf8;
LAB_1437e2c2b:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*local_3d8 == 2)) goto LAB_1437e2bf8;
          if (*local_3d8 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_1437e2bf8;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar19 = (uint *)*puVar16;
          if (puVar19 != (uint *)0x0) goto LAB_1437e2e11;
          do {
            uVar22 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar22 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar22 | 1;
              __tlregdtor(&LAB_1437e54fa);
            }
            puVar18 = (undefined4 *)*local_3c8;
            *local_3c8 = 0;
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar18 = 0xffffffff;
            *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar16 = puVar18;
            FUN_140217a48(puVar16);
            puVar19 = (uint *)*puVar16;
LAB_1437e2e11:
            uVar34 = *(longlong *)(puVar19 + 0x10) + 7;
            uVar22 = puVar19[0x12];
            while( true ) {
              puVar33 = (undefined8 *)(uVar34 & 0xfffffffffffffff8);
              if (puVar33 + 0x16 <= puVar19 + 0x4000) {
                *(undefined8 **)(puVar19 + 0x10) = puVar33 + 0x16;
                puVar19[0x12] = uVar22 + 1;
                uVar13 = 0;
                FUN_1447247dc(puVar33,0);
                *puVar33 = &PTR_FUN_14ab467a0;
                puVar33[0x15] = pcVar31;
                uVar27 = (undefined7)((ulonglong)uVar13 >> 8);
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar22 = DAT_14c7585c8 >> 10 & 3;
                  iVar28 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                    uVar34 = CONCAT71(uVar27,(&DAT_149e38edc)[uVar22]);
                    iVar28 = 0;
                  }
                  else {
                    uVar34 = CONCAT71(uVar27,2);
                  }
                }
                else {
                  iVar28 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar34 = CONCAT71(uVar27,5);
                }
                if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
                  local_3c0 = uVar34;
                  (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
                  uVar34 = local_3c0;
                }
                puVar33[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar33[9] = puVar33;
                puVar33[10] = puVar33;
                lVar15 = *local_3b8;
                cVar6 = (char)uVar34;
                if (lVar15 == 0) {
                  uVar34 = uVar34 & 0xff;
                  if (cVar6 == '\x06') {
                    uVar34 = 1;
                  }
                  uVar13 = 0;
                }
                else {
                  if (cVar6 == '\x06') {
                    uVar34 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
                  }
                  uVar13 = *(undefined8 *)(lVar15 + 0x30);
                }
                puVar33[0xf] = uVar13;
                puVar33[0x10] = (uVar34 << 0x3b) + local_3b0 | 0xc000000000000000;
                *(int *)((longlong)puVar33 + 0x1c) = iVar28;
                if (puVar33 == (undefined8 *)0x0) {
                  local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
                  FUN_1447439e4(0,&local_1c8);
                  goto LAB_1437e2ce3;
                }
                LOCK();
                *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
                UNLOCK();
                uVar22 = (uint)local_3e0;
                local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
                FUN_1447439e4(puVar33,&local_1c8);
                LOCK();
                piVar2 = (int *)(puVar33 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar33)(puVar33,1);
                }
                goto LAB_1437e2ce8;
              }
              *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
              LOCK();
              uVar9 = *puVar19;
              *puVar19 = *puVar19 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) break;
              puVar19 = (uint *)*puVar16;
              *puVar19 = 0xffffffff;
              *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
              puVar19[0x12] = 0;
              *puVar16 = puVar19;
              uVar34 = (longlong)puVar19 + 0x5f;
              uVar22 = 0;
            }
          } while( true );
        }
        local_1b8 = (undefined ***)0x0;
        local_1a8 = &PTR_LAB_14ab46760;
        local_1c8 = (code *)&LAB_1437e64c6;
        local_438 = &local_1c8;
        local_1a0 = pcVar31;
        FUN_14005a792(&DAT_14ca9a440,L"FScene_EndFrame",&DAT_14cb12fe8);
        if (local_1c8 != (code *)0x0) {
          pppuVar23 = local_1b8;
          if (local_1b8 == (undefined ***)0x0) {
            pppuVar23 = &local_1a8;
          }
          (*(code *)(*pppuVar23)[2])();
        }
      }
LAB_1437e2ce3:
      uVar22 = (uint)local_3e0;
LAB_1437e2ce8:
      uVar10 = (undefined4)(uVar36 >> 0x20);
      uVar30 = uVar30 & ~(uint)uVar32;
      puVar19 = (uint *)plVar14[4];
      if ((uint *)plVar14[4] == (uint *)0x0) {
        puVar19 = local_3a8;
      }
      uVar4 = *(uint *)(plVar14 + 5);
      iVar28 = (int)uVar37;
      lVar15 = (longlong)iVar28;
      uVar9 = puVar19[lVar15] & uVar30;
      if (uVar9 == 0) {
        iVar21 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar21 = uVar4 - 1;
        }
        iVar21 = iVar21 >> 5;
        iVar35 = iVar35 + 0x20;
        iVar20 = iVar21;
        if (iVar21 < iVar28) {
          iVar20 = iVar28;
        }
        if (iVar28 < iVar21) {
          lVar24 = 0;
          do {
            uVar9 = puVar19[lVar15 + lVar24 + 1];
            if (uVar9 != 0) {
              uVar37 = (ulonglong)(iVar28 + (int)lVar24 + 1);
              uVar30 = 0xffffffff;
              goto LAB_1437e2d6d;
            }
            iVar35 = iVar35 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar20 - lVar15 != lVar24);
          uVar30 = 0xffffffff;
          iVar28 = iVar20;
        }
        uVar37 = (ulonglong)(iVar28 + 1);
        uVar22 = (uint)local_3e0;
        uVar9 = uVar4;
      }
      else {
LAB_1437e2d6d:
        uVar32 = (ulonglong)(-uVar9 & uVar9);
        uVar34 = uVar32 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar9 = (iVar35 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar9) {
          uVar9 = uVar4;
        }
      }
    } while (uVar9 != uVar22);
  }
LAB_1437e295c:
  (**(code **)(*DAT_14ca83900 + 0x368))(DAT_14ca83900,CONCAT44(uVar10,(float)DAT_14c759090));
  pcVar31 = local_3d0;
  FUN_1417f5bb2(local_3d0);
  lVar15 = local_3a0;
  if ((code *)0x5 < DAT_14c872be0) {
    *(double *)(local_3a0 + 0x18) = DAT_14c759090 + *(double *)(local_3a0 + 0x18);
  }
  lVar24 = *(longlong *)(local_3a0 + 0x38);
  puVar16 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar16 = 0;
  puVar16[1] = 0;
  FUN_14493e3c6(&DAT_14ca96680,puVar16);
  *(undefined8 **)(lVar15 + 0x38) = puVar16;
  iVar35 = *DAT_14cb12ed0;
  if (0 < iVar35) {
    uVar13 = FUN_1401cb356();
    FUN_142746dae(uVar13,(float)DAT_14c759090);
  }
  FUN_14108e1f3(0);
  if (lVar24 != 0) {
    FUN_141551d78(lVar24);
    FUN_1400020a8(lVar24);
  }
  uVar13 = FUN_1402a3fee();
  FUN_1402a4072(uVar13);
  if (iVar35 < 1) {
    uVar13 = FUN_1401cb356();
    FUN_142746dae(uVar13,(float)DAT_14c759090);
  }
  uVar13 = FUN_141033dca();
  FUN_14275b75e(uVar13);
  FUN_14375756c(DAT_14cb0d2b0);
  plVar14 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     ((DAT_14ca84e78 != '\x01' && (plVar14 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)
      ))) {
    plVar14 = (longlong *)0x0;
  }
  (**(code **)(*plVar14 + 0x58))(plVar14,1);
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)(*DAT_14c99f930 + 0x10))();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb12f58) && (FUN_144b3d300(&DAT_14cb12f58), DAT_14cb12f58 == -1)) {
    FUN_1446f470e(&DAT_14cb12f50,L"Media",1);
    _Init_thread_footer(&DAT_14cb12f58);
  }
  uVar13 = DAT_14cb12f50;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar14 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar13,&local_1c8,0);
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0xe8))(plVar14);
  }
  FUN_1447f69b6(&DAT_14c867438);
  pcVar38 = DAT_14c872be0 + 1;
  iVar35 = *local_3d8;
  DAT_14c872be0 = pcVar38;
  if (DAT_14c86a9fc == 0) {
    if (iVar35 != 2) {
      if (iVar35 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        bVar40 = DVar11 == DVar12;
      }
      else {
        bVar40 = iVar35 == 0x10;
      }
      pcVar31 = local_3d0;
      if (!bVar40) goto LAB_1437e36f2;
    }
  }
  else if (iVar35 != 0x10) {
LAB_1437e36f2:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*local_3d8 == 2)) goto LAB_1437e37a6;
      if (*local_3d8 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1437e37a6;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar16 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar16;
      if (puVar19 != (uint *)0x0) goto LAB_1437e3895;
      do {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_1437e54fa);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar18 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar18 == (undefined4 *)0x0) {
          puVar18 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar18 = 0xffffffff;
        *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
        puVar18[0x12] = 0;
        *puVar16 = puVar18;
        FUN_140217a48(puVar16);
        puVar19 = (uint *)*puVar16;
LAB_1437e3895:
        uVar36 = *(longlong *)(puVar19 + 0x10) + 7;
        uVar22 = puVar19[0x12];
        while( true ) {
          puVar33 = (undefined8 *)(uVar36 & 0xfffffffffffffff8);
          if (puVar33 + 0x16 <= puVar19 + 0x4000) {
            *(undefined8 **)(puVar19 + 0x10) = puVar33 + 0x16;
            puVar19[0x12] = uVar22 + 1;
            iVar35 = 0;
            FUN_1447247dc(puVar33,0);
            *puVar33 = &PTR_FUN_14ab467d0;
            puVar33[0x15] = pcVar38;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar22 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                uVar36 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
                iVar35 = 0;
              }
              else {
                uVar36 = 2;
              }
            }
            else {
              iVar35 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar36 = 5;
            }
            if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
            }
            puVar33[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar33[9] = puVar33;
            puVar33[10] = puVar33;
            lVar15 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar15 == 0) {
              uVar32 = 1;
              if ((char)uVar36 != '\x06') {
                uVar32 = uVar36;
              }
              uVar36 = uVar32;
              uVar13 = 0;
            }
            else {
              if ((char)uVar36 == '\x06') {
                uVar36 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
              }
              uVar13 = *(undefined8 *)(lVar15 + 0x30);
            }
            puVar33[0xf] = uVar13;
            puVar33[0x10] = uVar36 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar33 + 0x1c) = iVar35;
            if (puVar33 == (undefined8 *)0x0) {
              local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
              FUN_1447439e4(0);
              pcVar38 = DAT_14c867d10;
            }
            else {
              LOCK();
              *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
              UNLOCK();
              local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
              FUN_1447439e4(puVar33);
              LOCK();
              piVar2 = (int *)(puVar33 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              pcVar38 = DAT_14c867d10;
              if (*piVar2 == 0) {
                (**(code **)*puVar33)(puVar33,1);
                pcVar38 = DAT_14c867d10;
              }
            }
            goto LAB_1437e37a6;
          }
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar9 = *puVar19;
          *puVar19 = *puVar19 + uVar22 + 1;
          UNLOCK();
          if ((uVar9 ^ uVar22) != 0xffffffff) break;
          puVar19 = (uint *)*puVar16;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar16 = puVar19;
          uVar36 = (longlong)puVar19 + 0x5f;
          uVar22 = 0;
        }
      } while( true );
    }
    local_1b8 = (undefined ***)0x0;
    local_1a8 = &PTR_LAB_14ab467b0;
    local_1c8 = (code *)&LAB_1437e669c;
    local_438 = &local_1c8;
    local_1a0 = pcVar38;
    FUN_14005a792(&DAT_14ca9a440,L"FrameCounter",&DAT_14cb12fec);
    pcVar38 = DAT_14c867d10;
    if (local_1c8 != (code *)0x0) {
      pppuVar23 = local_1b8;
      if (local_1b8 == (undefined ***)0x0) {
        pppuVar23 = &local_1a8;
      }
      (*(code *)(*pppuVar23)[2])();
      pcVar38 = DAT_14c867d10;
    }
  }
LAB_1437e37a6:
  DAT_14c867d10 = pcVar38;
  FUN_14375de4c(DAT_14cb0d2b0,3);
  iVar35 = *local_3d8;
  local_340 = pcVar31;
  if (DAT_14c86a9fc == 0) {
    if (iVar35 != 2) {
      if (iVar35 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        bVar40 = DVar11 == DVar12;
      }
      else {
        bVar40 = iVar35 == 0x10;
      }
      pcVar31 = local_3d0;
      if (!bVar40) goto LAB_1437e3b2c;
    }
  }
  else if (iVar35 != 0x10) {
LAB_1437e3b2c:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*local_3d8 == 2)) goto LAB_1437e37dc;
      if (*local_3d8 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1437e37dc;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar16 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar16;
      if (puVar19 != (uint *)0x0) goto LAB_1437e3ce9;
      while( true ) {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_1437e54fa);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar18 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar18 == (undefined4 *)0x0) {
          puVar18 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar18 = 0xffffffff;
        *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
        puVar18[0x12] = 0;
        *puVar16 = puVar18;
        FUN_140217a48(puVar16);
        puVar19 = (uint *)*puVar16;
LAB_1437e3ce9:
        puVar33 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar26 = (uint *)(puVar33 + 0x16);
        uVar22 = puVar19[0x12];
        if (puVar26 <= puVar19 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar9 = *puVar19;
          *puVar19 = *puVar19 + uVar22 + 1;
          UNLOCK();
          if ((uVar9 ^ uVar22) != 0xffffffff) break;
          puVar19 = (uint *)*puVar16;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar16 = puVar19;
          puVar33 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
          puVar26 = (uint *)(puVar33 + 0x16);
          uVar22 = 0;
          if (puVar26 <= puVar19 + 0x4000) {
            uVar22 = 1;
            goto LAB_1437e3d69;
          }
        }
      }
      uVar22 = uVar22 + 1;
LAB_1437e3d69:
      *(uint **)(puVar19 + 0x10) = puVar26;
      puVar19[0x12] = uVar22;
      iVar35 = 0;
      FUN_1447247dc(puVar33,0);
      *puVar33 = &PTR_FUN_14ab46810;
      puVar33[0x15] = local_340;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar22 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
          uVar36 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
          iVar35 = 0;
        }
        else {
          uVar36 = 2;
        }
      }
      else {
        iVar35 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar36 = 5;
      }
      if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
      }
      puVar33[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar33[9] = puVar33;
      puVar33[10] = puVar33;
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar32 = 1;
        if ((char)uVar36 != '\x06') {
          uVar32 = uVar36;
        }
        uVar36 = uVar32;
        uVar13 = 0;
      }
      else {
        if ((char)uVar36 == '\x06') {
          uVar36 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar33[0xf] = uVar13;
      puVar33[0x10] = uVar36 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar33 + 0x1c) = iVar35;
      if (puVar33 == (undefined8 *)0x0) {
        local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
        UNLOCK();
        local_1c8 = (code *)CONCAT71(local_1c8._1_7_,1);
        FUN_1447439e4(puVar33);
        LOCK();
        piVar2 = (int *)(puVar33 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar33)(puVar33,1);
        }
      }
    }
    else {
      local_1b8 = (undefined ***)0x0;
      local_1a8 = &PTR_LAB_14ab467f0;
      local_1c8 = (code *)&LAB_1437e699e;
      local_438 = &local_1c8;
      local_1a0 = pcVar31;
      FUN_14005a792(&DAT_14ca9a440,L"EndFrame",&DAT_14cb12ff0);
      if (local_1c8 != (code *)0x0) {
        pppuVar23 = local_1b8;
        if (local_1b8 == (undefined ***)0x0) {
          pppuVar23 = &local_1a8;
        }
        (*(code *)(*pppuVar23)[2])();
      }
    }
    goto LAB_1437e3be0;
  }
LAB_1437e37dc:
  FUN_1437e683e(&local_340,&DAT_14ca85100);
LAB_1437e3be0:
  FUN_14279de7c(&local_1c8);
  FUN_1437e649d(local_288,uStack_280 & 0xffffffff);
  if (local_288 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437e47c5 FUN_1437e47c5 body=69 status=ok
// SIG undefined FUN_1437e47c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e47c5(void)

{
  _DAT_14cb12e38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e4807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12e40,1);
  return;
}



// FUNCTION 1437e480a FUN_1437e480a body=69 status=ok
// SIG undefined FUN_1437e480a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e480a(void)

{
  _DAT_14cb12e50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e484c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12e58,1);
  return;
}



// FUNCTION 1437e484f FUN_1437e484f body=106 status=ok
// SIG undefined FUN_1437e484f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e484f(void)

{
  _DAT_14cb12e88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12e90,1);
  if (DAT_14cb12e78 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb12e68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437e48b9 FUN_1437e48b9 body=69 status=ok
// SIG undefined FUN_1437e48b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e48b9(void)

{
  _DAT_14cb12ea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e48fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12eb0,1);
  return;
}



// FUNCTION 1437e48fe FUN_1437e48fe body=69 status=ok
// SIG undefined FUN_1437e48fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e48fe(void)

{
  _DAT_14cb12ec0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e4940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12ec8,1);
  return;
}



// FUNCTION 1437e4943 FUN_1437e4943 body=69 status=ok
// SIG undefined FUN_1437e4943(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e4943(void)

{
  _DAT_14cb12ed8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e4985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12ee0,1);
  return;
}



// FUNCTION 1437e49b4 FUN_1437e49b4 body=96 status=ok
// SIG undefined FUN_1437e49b4(void)

longlong * FUN_1437e49b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = FUN_1400dbadc();
  plVar3 = (longlong *)FUN_142758dea(uVar2,param_1);
  if ((plVar3 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3), cVar1 == '\0')) {
    plVar4 = (longlong *)0x0;
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    plVar4 = (longlong *)0x0;
    if (cVar1 != '\0') {
      plVar4 = plVar3;
    }
  }
  return plVar4;
}



// FUNCTION 1437e4a36 FUN_1437e4a36 body=57 status=ok
// SIG undefined FUN_1437e4a36(void)

void FUN_1437e4a36(void)

{
  undefined1 auStack_38 [40];
  LARGE_INTEGER local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e4a70 FUN_1437e4a70 body=504 status=ok
// SIG undefined FUN_1437e4a70(void)

longlong * FUN_1437e4a70(longlong *param_1,wint_t *param_2,char param_3)

{
  wint_t *pwVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  wint_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  wint_t *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = param_2;
  if (*param_2 == 0) {
    uStack_70._4_4_ = 0;
    uStack_70._0_4_ = 0;
    local_78 = 0;
  }
  else {
    do {
      pwVar1 = local_80;
      local_98 = 0;
      uStack_90 = 0;
      iVar3 = iswspace(*local_80);
      pwVar5 = local_80;
      while (iVar3 != 0) {
        pwVar5 = pwVar1 + 1;
        iVar3 = iswspace(pwVar1[1]);
        pwVar1 = pwVar5;
      }
      local_80 = pwVar5;
      if ((param_3 == '\0') || (*pwVar1 != 0x22)) {
        FUN_140ffc744(&local_80,&local_98,0,0);
        FUN_140ded26a(&local_98);
        FUN_140ded312(&local_98);
        iVar3 = (int)uStack_90;
      }
      else {
        FUN_140ffc744(&local_80,&local_98,0,0);
        FUN_140002266(&local_a8,L"\"%s\"");
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        local_98 = local_a8;
        uStack_90 = CONCAT44(local_9c,local_a0);
        iVar3 = local_a0;
      }
      uVar2 = uStack_70;
      if (1 < iVar3) {
        lVar6 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_1447a1bd6(&local_78,uVar2 & 0xffffffff);
        }
        lVar6 = lVar6 * 0x10;
        *(undefined8 *)(local_78 + lVar6) = 0;
        *(longlong *)(local_78 + lVar6) = local_98;
        local_98 = 0;
        *(int *)(local_78 + 8 + lVar6) = (int)uStack_90;
        *(undefined4 *)(local_78 + 0xc + lVar6) = uStack_90._4_4_;
        uStack_90 = 0;
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    } while (*local_80 != 0);
  }
  *param_1 = local_78;
  local_78 = 0;
  *(int *)(param_1 + 1) = (int)uStack_70;
  *(uint *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  uStack_70 = 0;
  FUN_1447a1747(0,0);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e4c6a FUN_1437e4c6a body=412 status=ok
// SIG undefined FUN_1437e4c6a(void)

void FUN_1437e4c6a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = 1;
  *(undefined1 *)param_1[2] = 1;
  FUN_1402980a2(param_1[7],*param_2,*(undefined4 *)(param_2 + 1));
  DAT_14c86a9f0 = 1;
  DAT_14c8687b8 = 1;
  local_58 = 0;
  uStack_50 = 0;
  lVar6 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar6 != 0) {
    lVar2 = *(longlong *)param_1[1];
    lVar5 = 0;
    do {
      if ((char)iVar3 == '\0') {
        FUN_1400020e8(&local_58,&DAT_149e001d8,1);
      }
      iVar1 = *(int *)(lVar2 + 8 + lVar5);
      iVar3 = 0;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = iVar3;
      }
      FUN_1400020e8(&local_58,*(undefined8 *)(lVar2 + lVar5),iVar4);
      lVar5 = lVar5 + 0x10;
    } while (lVar6 * 0x10 != lVar5);
  }
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
  }
  DAT_14c872bf0 = 1;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  DAT_14c872bf1 = FUN_14054d46e(&DAT_14c846b20,L"AllowCommandletRendering");
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  DAT_14c872bc0 = FUN_14054d46e(&DAT_14c846b20,L"AllowCommandletAudio");
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e4e07 FUN_1437e4e07 body=246 status=ok
// SIG undefined FUN_1437e4e07(void)

void FUN_1437e4e07(char param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == '\0') {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  FUN_14626bd28(&DAT_14c872ee0);
  lVar3 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    plVar1 = (longlong *)(DAT_14cb0d2b0 + 0xc28);
    iVar2 = *(int *)(DAT_14cb0d2b0 + 0xc30);
    *(uint *)(DAT_14cb0d2b0 + 0xc30) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0xc34) < iVar2 + 1U) {
      FUN_1447a1bd6(plVar1,iVar2);
    }
    FUN_140056680((longlong)iVar2 * 0x10 + *plVar1,L"Quit force");
    return;
  }
  FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
  return;
}



// FUNCTION 1437e4efe FUN_1437e4efe body=460 status=ok
// SIG undefined FUN_1437e4efe(void)

void FUN_1437e4efe(void)

{
  uint uVar1;
  ushort *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  ushort *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447f69b6(&DAT_14c8673d8);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(&local_40,&DAT_14c846b20);
  uVar1 = local_38 - 1;
  if (local_38 == 0) {
    uVar1 = 0;
  }
  if ((int)uVar1 < 9) {
LAB_1437e500f:
    if (local_40 != (ushort *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447f69b6(&DAT_14c8687e8);
    DAT_14c7590b0 = 0xffffffff;
    if (DAT_14c844288 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844288 + 0x10))();
    }
    if (DAT_14cb05368 != (longlong *)0x0) {
      (**(code **)(*DAT_14cb05368 + 0x48))(DAT_14cb05368,1);
      DAT_14cb05368 = (longlong *)0x0;
    }
    lVar6 = DAT_14cb05d30;
    if (DAT_14cb05d30 != 0) {
      FUN_147cf2bbe(DAT_14cb05d30);
      FUN_1400020a8(lVar6);
      DAT_14cb05d30 = 0;
    }
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  puVar8 = puVar2 + ((ulonglong)uVar1 - 9);
LAB_1437e4f8a:
  if ((ushort)((ushort)(0x19 < *puVar2 - 0x61) * 0x20 + *puVar2) == 99) {
    lVar6 = 8;
    lVar7 = 2;
    do {
      uVar3 = *(ushort *)((longlong)puVar2 + lVar7);
      uVar4 = (ulonglong)uVar3;
      uVar5 = *(ushort *)((longlong)L"CreatePak" + lVar7);
      if (uVar3 == uVar5) {
        if (uVar3 == 0) goto LAB_1437e500f;
      }
      else {
        if (0x7f < (uVar5 | uVar3)) goto LAB_1437e4ff3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar9 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar9]) goto LAB_1437e4ff3;
      }
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) goto LAB_1437e500f;
      lVar7 = lVar7 + 2;
    } while( true );
  }
  goto LAB_1437e4fa3;
LAB_1437e4ff3:
  if (uVar3 == uVar5) goto LAB_1437e500f;
LAB_1437e4fa3:
  puVar2 = puVar2 + 1;
  if (puVar8 < puVar2) goto LAB_1437e500f;
  goto LAB_1437e4f8a;
}



// FUNCTION 1437e50cb FUN_1437e50cb body=69 status=ok
// SIG undefined FUN_1437e50cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e50cb(void)

{
  _DAT_14cb12f60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e510d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12f68,1);
  return;
}



// FUNCTION 1437e5110 FUN_1437e5110 body=69 status=ok
// SIG undefined FUN_1437e5110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e5110(void)

{
  _DAT_14cb12f78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e5152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb12f80,1);
  return;
}



// FUNCTION 1437e5181 FUN_1437e5181 body=16 status=ok
// SIG undefined FUN_1437e5181(void)

undefined8 FUN_1437e5181(void)

{
  FUN_14682ea22();
  return 0;
}



// FUNCTION 1437e51b6 FUN_1437e51b6 body=835 status=ok
// SIG undefined FUN_1437e51b6(void)

void FUN_1437e51b6(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar9 = (uint *)*puVar2;
  if (puVar9 != (uint *)0x0) goto LAB_1437e527e;
  do {
    uVar3 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar3 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar3 | 1;
      __tlregdtor(&LAB_1437e54fa);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar8 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar8 = 0xffffffff;
    *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
    puVar8[0x12] = 0;
    *puVar2 = puVar8;
    FUN_140217a48(puVar2);
    puVar9 = (uint *)*puVar2;
LAB_1437e527e:
    uVar12 = *(longlong *)(puVar9 + 0x10) + 7;
    while( true ) {
      puVar13 = (undefined8 *)(uVar12 & 0xfffffffffffffff8);
      if (puVar13 + 10 <= puVar9 + 0x4000) {
        *(undefined8 **)(puVar9 + 0x10) = puVar13 + 10;
        puVar9[0x12] = puVar9[0x12] + 1;
        puVar13[9] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = &PTR_FUN_149e002e8;
        *(undefined4 *)(puVar13 + 1) = 0;
        *puVar13 = &PTR_FUN_14ab46068;
        puVar13[7] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
        puVar13[8] = 0;
        puVar13[9] = 0xe800000000000020;
        puVar2 = (undefined8 *)param_2[1];
        if (puVar2 != puVar13) {
          param_2[1] = (longlong)puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
            UNLOCK();
          }
          if (puVar2 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar2 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
        }
        pcVar5 = *(code **)(param_1 + 0x6c90);
        plVar11 = (longlong *)(param_1 + 0x6cb0);
        if (*(longlong **)(param_1 + 0x6ca0) != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 0x6ca0);
        }
        local_49 = param_3;
        uVar10 = (**(code **)(*plVar11 + 8))();
        bVar6 = (*pcVar5)(uVar10,&local_49);
        local_58 = (ulonglong)bVar6;
        bVar6 = (&DAT_14ab46020)[local_58];
        bVar7 = (**(code **)(*param_2 + 0x10))(param_2);
        lVar4 = param_2[1];
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(puVar13[7] + 0x18))(puVar13 + 7,puVar13 + 2);
        puVar13[7] = &PTR_FUN_14ab46080;
        puVar13[2] = param_2;
        puVar13[3] = lVar4;
        puVar13[4] = param_1;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar13[8] = uVar10;
        puVar13[9] = (ulonglong)(bVar7 & 1 ^ 3) << 0x3e |
                     (ulonglong)(bVar6 & 7) << 0x3b | 0x52ad180980;
        if (((&DAT_00006cd5)[param_1] & 1) == 0) {
          LOCK();
          *(int *)(param_1 + 0x6cd0) = *(int *)(param_1 + 0x6cd0) + 1;
          UNLOCK();
          puVar14 = puVar13 + 9;
          uVar10 = *(undefined8 *)(param_1 + 0x6c80);
          LOCK();
          uVar12 = *puVar14;
          *puVar14 = *puVar14 | 2;
          UNLOCK();
          if ((uVar12 >> 1 & 1) == 0) {
            FUN_144713628(uVar10,puVar13 + 2,0,1);
          }
        }
        else {
          FUN_147e16296(param_1 + (ulonglong)(uint)((int)local_58 * 0x1200) + 0x80,puVar13);
        }
        if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
      LOCK();
      uVar3 = *puVar9;
      *puVar9 = *puVar9 + puVar9[0x12] + 1;
      UNLOCK();
      if ((uVar3 ^ puVar9[0x12]) != 0xffffffff) break;
      puVar9 = (uint *)*puVar2;
      *puVar9 = 0xffffffff;
      *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      uVar12 = (longlong)puVar9 + 0x5f;
    }
  } while( true );
}



// FUNCTION 1437e5522 FUN_1437e5522 body=374 status=ok
// SIG undefined FUN_1437e5522(void)

undefined8 * FUN_1437e5522(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_14ab460c0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_1437e55de;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_1437e54fa);
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
LAB_1437e55de:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 3 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 3;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        puVar7[1] = param_2[1];
        param_2[1] = 0;
        puVar7[2] = param_2[2];
        param_2[2] = 0;
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 1437e5698 FUN_1437e5698 body=210 status=ok
// SIG undefined FUN_1437e5698(void)

void FUN_1437e5698(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int *_Memory;
  int *piVar5;
  
  uVar2 = *param_2;
  if (*(longlong *)(uVar2 + 0x10) != 0) {
    FUN_1401530ba();
  }
  puVar3 = *(undefined8 **)(uVar2 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(puVar3 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (uVar2 != 0) {
    piVar5 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1437e54fa);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar4 + 0x310);
        *(int **)(lVar4 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001437e5732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1437e5772 FUN_1437e5772 body=195 status=ok
// SIG undefined FUN_1437e5772(void)

void FUN_1437e5772(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14001cc68(0xc0,0x10);
  FUN_1458ce8fa(uVar2);
  local_38 = uVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_FUN_14ab46360;
  puVar3[2] = uVar2;
  local_30 = puVar3;
  FUN_1461b7ca8(param_1,&local_38);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e584a FUN_1437e584a body=29 status=ok
// SIG undefined FUN_1437e584a(void)

undefined8 FUN_1437e584a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e587c FUN_1437e587c body=93 status=ok
// SIG undefined FUN_1437e587c(void)

void FUN_1437e587c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab46480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1437e58da FUN_1437e58da body=93 status=ok
// SIG undefined FUN_1437e58da(void)

void FUN_1437e58da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab46480;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1437e5938 FUN_1437e5938 body=126 status=ok
// SIG undefined FUN_1437e5938(void)

void FUN_1437e5938(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab46480;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e59a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437e59b6 FUN_1437e59b6 body=52 status=ok
// SIG undefined FUN_1437e59b6(void)

void FUN_1437e59b6(void)

{
  char cVar1;
  
  cVar1 = FUN_146320b8a();
  if (cVar1 != '\0') {
    FUN_1436a7430(*(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2),0);
    return;
  }
  return;
}



// FUNCTION 1437e59ea FUN_1437e59ea body=49 status=ok
// SIG undefined FUN_1437e59ea(void)

undefined8 FUN_1437e59ea(void)

{
  char cVar1;
  
  cVar1 = FUN_146320b8a();
  if (cVar1 != '\0') {
    FUN_1436a7430(*(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2),0);
  }
  return 1;
}



// FUNCTION 1437e5a1c FUN_1437e5a1c body=29 status=ok
// SIG undefined FUN_1437e5a1c(void)

undefined8 FUN_1437e5a1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e5a4e FUN_1437e5a4e body=85 status=ok
// SIG undefined FUN_1437e5a4e(void)

void FUN_1437e5a4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab464f0;
  return;
}



// FUNCTION 1437e5aa4 FUN_1437e5aa4 body=85 status=ok
// SIG undefined FUN_1437e5aa4(void)

void FUN_1437e5aa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab464f0;
  return;
}



// FUNCTION 1437e5afa FUN_1437e5afa body=118 status=ok
// SIG undefined FUN_1437e5afa(void)

void FUN_1437e5afa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab464f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e5b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437e5b76 FUN_1437e5b76 body=31 status=ok
// SIG undefined FUN_1437e5b76(void)

undefined8 FUN_1437e5b76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e5b9a FUN_1437e5b9a body=492 status=ok
// SIG undefined FUN_1437e5b9a(void)

void FUN_1437e5b9a(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) {
LAB_1437e5c11:
      DAT_14c7590b0 = DAT_14c7590b0 + 1;
      return;
    }
  }
  else if (DAT_14c8442b8 == 1) goto LAB_1437e5c11;
  DAT_14c7590b0 = DAT_14c7590b0 + 1;
  FUN_1447f69b6(&DAT_14c86a918);
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    FUN_1417f6324(uVar1);
  }
  else {
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 3;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x20);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_14ab46658;
    puVar4[2] = uVar1;
  }
  dwTlsIndex = DAT_14c758730;
  if (DAT_14c758730 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar3 = 0xffffffff;
    LOCK();
    bVar6 = DAT_14c758730 != 0xffffffff;
    DVar2 = dwTlsIndex;
    if (bVar6) {
      DVar3 = DAT_14c758730;
      DVar2 = DAT_14c758730;
    }
    DAT_14c758730 = DVar2;
    UNLOCK();
    if (bVar6) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar3;
    }
  }
  puVar5 = TlsGetValue(dwTlsIndex);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    DVar3 = GetCurrentThreadId();
    *(DWORD *)(puVar5 + 1) = DVar3;
    *puVar5 = &PTR_FUN_149e06328;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 1;
    *(undefined1 *)((longlong)puVar5 + 0x1c) = 0;
    FUN_140fddf04(puVar5);
    TlsSetValue(dwTlsIndex,puVar5);
  }
  *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + -1;
  return;
}



// FUNCTION 1437e5da0 FUN_1437e5da0 body=12 status=ok
// SIG undefined FUN_1437e5da0(void)

void FUN_1437e5da0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437e5da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437e5dac FUN_1437e5dac body=29 status=ok
// SIG undefined FUN_1437e5dac(void)

undefined8 FUN_1437e5dac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e5dca FUN_1437e5dca body=282 status=ok
// SIG undefined FUN_1437e5dca(void)

undefined8 * FUN_1437e5dca(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437e54fa);
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



// FUNCTION 1437e5ee4 FUN_1437e5ee4 body=105 status=ok
// SIG undefined FUN_1437e5ee4(void)

void FUN_1437e5ee4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1437e5b9a(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1437e5b9a(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e5f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1437e5f66 FUN_1437e5f66 body=12 status=ok
// SIG undefined FUN_1437e5f66(void)

void FUN_1437e5f66(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437e5f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437e5f72 FUN_1437e5f72 body=29 status=ok
// SIG undefined FUN_1437e5f72(void)

undefined8 FUN_1437e5f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e5f90 FUN_1437e5f90 body=282 status=ok
// SIG undefined FUN_1437e5f90(void)

undefined8 * FUN_1437e5f90(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437e54fa);
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



// FUNCTION 1437e60aa FUN_1437e60aa body=103 status=ok
// SIG undefined FUN_1437e60aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e60aa(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e6103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 0x480))();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 0x480))();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e60ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1437e6138 FUN_1437e6138 body=282 status=ok
// SIG undefined FUN_1437e6138(void)

undefined8 * FUN_1437e6138(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437e54fa);
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



// FUNCTION 1437e6252 FUN_1437e6252 body=142 status=ok
// SIG undefined FUN_1437e6252(void)

ulonglong FUN_1437e6252(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = (ulonglong)DAT_14c7585c8;
    DAT_14c761df4 = 1;
    if (DAT_14c842750 == '\0') {
      uVar2 = FUN_144ad9cc6(&DAT_14ca85100,3,0);
      return uVar2;
    }
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    uVar2 = (ulonglong)DAT_14c7585c8;
    DAT_14c761df4 = 1;
    if (DAT_14c842750 == '\0') {
      uVar2 = FUN_144ad9cc6(&DAT_14ca85100,3,0);
    }
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e6292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*param_1)(param_1,1);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1437e62e0 FUN_1437e62e0 body=282 status=ok
// SIG undefined FUN_1437e62e0(void)

undefined8 * FUN_1437e62e0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437e54fa);
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



// FUNCTION 1437e63fa FUN_1437e63fa body=92 status=ok
// SIG undefined FUN_1437e63fa(void)

void FUN_1437e63fa(longlong *param_1)

{
  uint uVar1;
  
  if (0 < *DAT_14cb12e48) {
    uVar1 = rand();
    FUN_14000f986(((float)(uVar1 & 0x7fff) / 32767.0) * 0.003 + 0.0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_147a6101a(*param_1,(int)param_1[1]);
  return;
}



// FUNCTION 1437e6480 FUN_1437e6480 body=29 status=ok
// SIG undefined FUN_1437e6480(void)

undefined8 FUN_1437e6480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e649d FUN_1437e649d body=40 status=ok
// SIG undefined FUN_1437e649d(void)

void FUN_1437e649d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a62406(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1437e64e0 FUN_1437e64e0 body=12 status=ok
// SIG undefined FUN_1437e64e0(void)

void FUN_1437e64e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437e64e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437e64ec FUN_1437e64ec body=29 status=ok
// SIG undefined FUN_1437e64ec(void)

undefined8 FUN_1437e64ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e650a FUN_1437e650a body=282 status=ok
// SIG undefined FUN_1437e650a(void)

undefined8 * FUN_1437e650a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437e54fa);
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



// FUNCTION 1437e6624 FUN_1437e6624 body=120 status=ok
// SIG undefined FUN_1437e6624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e6624(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e6692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 0x488))(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 0x488))((longlong *)param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e666b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1437e66b2 FUN_1437e66b2 body=12 status=ok
// SIG undefined FUN_1437e66b2(void)

void FUN_1437e66b2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437e66bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437e66be FUN_1437e66be body=29 status=ok
// SIG undefined FUN_1437e66be(void)

undefined8 FUN_1437e66be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e66dc FUN_1437e66dc body=282 status=ok
// SIG undefined FUN_1437e66dc(void)

undefined8 * FUN_1437e66dc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437e54fa);
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



// FUNCTION 1437e683e FUN_1437e683e body=342 status=ok
// SIG undefined FUN_1437e683e(void)

void FUN_1437e683e(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1437e6914;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 == 0) {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      FUN_1417f65ee(uVar1);
    }
    else {
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 3;
      if ((undefined8 *)param_2[1] < puVar4) {
        FUN_140023dd8(param_2,0x20);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar3 + 3;
      }
      *param_2 = (ulonglong)puVar4;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      puVar3[1] = 0;
      *puVar3 = &PTR_LAB_14ab467e0;
      puVar3[2] = uVar1;
    }
    FUN_1447f69b6(&DAT_14c867450);
  }
LAB_1437e6914:
                    /* WARNING: Could not recover jumptable at 0x0001437e692b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,param_2);
  return;
}



// FUNCTION 1437e69ae FUN_1437e69ae body=12 status=ok
// SIG undefined FUN_1437e69ae(void)

void FUN_1437e69ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437e69b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437e69ba FUN_1437e69ba body=29 status=ok
// SIG undefined FUN_1437e69ba(void)

undefined8 FUN_1437e69ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e69d8 FUN_1437e69d8 body=282 status=ok
// SIG undefined FUN_1437e69d8(void)

undefined8 * FUN_1437e69d8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1437e54fa);
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



// FUNCTION 1437e6af2 FUN_1437e6af2 body=105 status=ok
// SIG undefined FUN_1437e6af2(void)

void FUN_1437e6af2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1437e683e(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1437e683e(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e6b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1437e6b5b FUN_1437e6b5b body=1023 status=ok
// SIG undefined FUN_1437e6b5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e6b5b(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined8 *)0x8000000149e3f28a;
  local_34 = 6;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14171c728(&DAT_14cb12d6c,&local_48);
  DAT_14cb12d70 = &PTR_FUN_14ab44de0;
  DAT_14cb12db0 = 0;
  _DAT_14cb12d78 = 0;
  uRam000000014cb12d80 = 0;
  DAT_14cb12dc0 = 0;
  DAT_14cb12dc8._0_1_ = 0;
  DAT_14cb12dc8._1_7_ = 0;
  DAT_14cb12dd0 = 0;
  _DAT_14cb12dd1 = 0;
  DAT_14cb12de0 = 0;
  _DAT_14cb12de8 = 0;
  DAT_14cb12df0 = 0;
  _DAT_14cb12df8 = 0;
  DAT_14cb12e00 = 0;
  DAT_14cb12e08 = 0;
  DAT_14cb12e10 = 0;
  DAT_14cb12e18 = 0;
  atexit((_func_5014 *)&LAB_1437e02f8);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_48,&DAT_14cb12e20);
  if (cVar2 == '\0') {
    _DAT_14cb12e20 = 0;
    uRam000000014cb12e28 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb12e38,L"tick.DoAsyncEndOfFrameTasks.Randomize",&local_48,
                L"Used to add random sleeps to tick.DoAsyncEndOfFrameTasks to shake loose bugs on either thread. Also does random render thread flushes from the game thread."
               );
  atexit(FUN_1437e47c5);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb12e50,L"tick.DoAsyncEndOfFrameTasks.ValidateReplicatedProperties",&local_48
                ,
                L"If true, validates that replicated properties haven\'t changed during the Slate tick. Results will not be valid if demo.ClientRecordAsyncEndOfFrame is also enabled."
               );
  atexit(FUN_1437e480a);
  local_58 = 0;
  local_50 = 0x200;
  FUN_1412c7f16(&DAT_14cb12e68,L"TaskGraph.TaskPriorities.AsyncEndOfFrameGameTasks",
                L"Task and thread priority for the experiemntal async end of frame tasks.",0x400);
  atexit(FUN_1437e484f);
  local_48._0_4_ = 0x3f800000;
  local_58 = 0;
  FUN_140a6b41e(&DAT_14cb12ea8,L"tick.SecondsBeforeEmbeddedAppSleeps",&local_48,
                L"When built as embedded, how many ticks to perform before sleeping");
  atexit(FUN_1437e48b9);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,1);
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb12ec0,L"tick.gbx.RunCoreTickerBeforeSync",&local_48,
                L"When true, the core ticker is executed before the frame sync");
  atexit(FUN_1437e48fe);
  local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb12ed8,L"r.Gbx.PrecacheComputePSOForGlobalShadersAfterStartupMovies",
                &local_48,
                L"If there are any startup movies, call PrecacheComputePipelineStatesForGlobalShaders AFTER they have ALL played."
               );
  atexit(FUN_1437e4943);
  DAT_14cb12ef0 = 0;
  atexit((_func_5014 *)&LAB_1437e4988);
  DAT_14cb12ef8 = 0;
  atexit((_func_5014 *)&LAB_1437e49a3);
  DAT_14cb12f00 = 0;
  uRam000000014cb12f08 = 0;
  atexit((_func_5014 *)&LAB_1437e4a14);
  DAT_14cb12f10 = 0;
  _DAT_14cb12f18 = 0;
  atexit((_func_5014 *)&LAB_1437e4a25);
  local_48._0_4_ = 1;
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb12f60,L"log.Timestamp",&local_48,
                L"Defines if time is included in each line in the log file and in what form. Layout: [time][frame mod 1000]\n  0 = Do not display log timestamps\n  1 = Log time stamps in UTC and frame time (default) e.g. [2015.11.25-21.28.50:803][376]\n  2 = Log timestamps in seconds elapsed since GStartTime e.g. [0130.29][420]  3 = Log timestamps in local time and frame time e.g. [2017.08.04-17.59.50:803][420]  4 = Log timestamps with the engine\'s timecode and frame time e.g. [17:59:50:18][420]"
               );
  atexit(FUN_1437e50cb);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,1);
  local_58 = 0;
  FUN_14078dbce(&DAT_14cb12f78,L"log.Category",&local_48,
                L"Defines if the categoy is included in each line in the log file and in what form.\n  0 = Do not log category\n  2 = Log the category (default)"
               );
  atexit(FUN_1437e5110);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_149e062c0;
  local_48[3] = &LAB_1437e5155;
  FUN_141253d16(&DAT_14cb12f90,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1437e6f06;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437e6f06:
  DAT_14cb12fb0 = 0;
  _DAT_14cb12fb8 = 0;
  atexit((_func_5014 *)&LAB_1437e5191);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e6f5c FUN_1437e6f5c body=66 status=ok
// SIG undefined FUN_1437e6f5c(void)

void FUN_1437e6f5c(void)

{
  undefined *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_14cb1a240;
  lVar2 = -0x7260;
  do {
    *(undefined4 *)(puVar1 + 0x48) = 0;
    if (*(longlong *)(puVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(puVar1);
    puVar1 = puVar1 + -0x60;
    lVar2 = lVar2 + 0x60;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1437e6f9e FUN_1437e6f9e body=47 status=ok
// SIG undefined FUN_1437e6f9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e6f9e(void)

{
  _DAT_14cb1a2e0 = 0;
  if (DAT_14cb1a2d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&DAT_14cb1a298);
  return;
}



// FUNCTION 1437e6fcd FUN_1437e6fcd body=56 status=ok
// SIG undefined FUN_1437e6fcd(void)

void FUN_1437e6fcd(void)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140ed8b54(local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e7006 FUN_1437e7006 body=69 status=ok
// SIG undefined FUN_1437e7006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e7006(void)

{
  _DAT_14cb1a2f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e7048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1a2f8,1);
  return;
}



// FUNCTION 1437e704b FUN_1437e704b body=309 status=ok
// SIG undefined FUN_1437e704b(void)

void FUN_1437e704b(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_a8 [36];
  undefined1 local_84 [4];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  FUN_140ed8b54(&local_80);
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  iVar3 = 0x131;
  do {
    if (local_80 == 0) {
      local_80 = 0;
    }
    else {
      FUN_144980568(&local_78,local_84,local_80 + 8,0);
    }
    local_80 = local_80 + 0x60;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = 0xffffffff;
  do {
    if ((int)uStack_70 != local_44) {
      puVar2 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar2 = local_40;
      }
      for (iVar3 = *(int *)(puVar2 + (ulonglong)(local_30 - 1U & uVar1) * 4); iVar3 != -1;
          iVar3 = *(int *)(local_78 + (longlong)iVar3 * 0xc + 4)) {
        if (*(uint *)(local_78 + (longlong)iVar3 * 0xc) == uVar1) goto LAB_1437e7137;
      }
    }
    if (uVar1 != 0xffffffff) {
      local_30 = 0;
      if (local_38 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1401bc218(&local_78);
      if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
LAB_1437e7137:
    uVar1 = rand();
  } while( true );
}



// FUNCTION 1437e7181 FUN_1437e7181 body=69 status=ok
// SIG undefined FUN_1437e7181(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e7181(void)

{
  _DAT_14cb1a300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e71c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1a308,1);
  return;
}



// FUNCTION 1437e71c6 FUN_1437e71c6 body=57 status=ok
// SIG undefined FUN_1437e71c6(void)

undefined8 FUN_1437e71c6(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147e183fe(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 1437e722a FUN_1437e722a body=29 status=ok
// SIG undefined FUN_1437e722a(void)

undefined8 FUN_1437e722a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e7290 FUN_1437e7290 body=29 status=ok
// SIG undefined FUN_1437e7290(void)

undefined8 FUN_1437e7290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e72f4 FUN_1437e72f4 body=29 status=ok
// SIG undefined FUN_1437e72f4(void)

undefined8 FUN_1437e72f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e7312 FUN_1437e7312 body=49 status=ok
// SIG undefined FUN_1437e7312(void)

bool FUN_1437e7312(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = wcscmp((wchar_t *)param_1[1],(wchar_t *)*param_2);
  if (iVar1 == 0) {
    *(undefined4 *)*param_1 = *(undefined4 *)(param_2 + 1);
  }
  return iVar1 != 0;
}



// FUNCTION 1437e736e FUN_1437e736e body=29 status=ok
// SIG undefined FUN_1437e736e(void)

undefined8 FUN_1437e736e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e738f FUN_1437e738f body=663 status=ok
// SIG undefined FUN_1437e738f(void)

void FUN_1437e738f(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_38;
  int local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GbxGameDataCategory",&PTR_FUN_14ab46bc0,1,0);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149e062c0;
  local_38[3] = FUN_1437e6fcd;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb1a2f0,L"gbx.nexus.GetAllGameDataCategoryInfo",
                L"Dumps information that the build has regarding game-data-category declarations.",
                &local_38);
  if (local_30 == 0) {
LAB_1437e749e:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_1437e749e;
  }
  atexit(FUN_1437e7006);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149e062c0;
  local_38[3] = FUN_1437e704b;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb1a300,L"gbx.nexus.GetNewGameDataCategoryId",
                L"Gets a currently unused identifier value for a game-data-category declaration.",
                &local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1437e758a;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437e758a:
  atexit(FUN_1437e7181);
  local_38 = (undefined8 *)0x800000014ab49f7c;
  local_24 = 0x13;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_1464170cc(&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e7628 FUN_1437e7628 body=55 status=ok
// SIG undefined FUN_1437e7628(void)

void FUN_1437e7628(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a4e0 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a4e0 = FUN_14171c317(FUN_146417c82,uVar1,L"ESetNextSpawnOutputState");
  }
  return;
}



// FUNCTION 1437e765f FUN_1437e765f body=55 status=ok
// SIG undefined FUN_1437e765f(void)

void FUN_1437e765f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a4f8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a4f8 = FUN_14171c317(FUN_146417cb1,uVar1,L"ESetNextSpawnInternalState");
  }
  return;
}



// FUNCTION 1437e7696 FUN_1437e7696 body=55 status=ok
// SIG undefined FUN_1437e7696(void)

void FUN_1437e7696(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a528 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a528 = FUN_14171c317(FUN_146417d0f,uVar1,L"ESpawnAnimStretch");
  }
  return;
}



// FUNCTION 1437e76cd FUN_1437e76cd body=55 status=ok
// SIG undefined FUN_1437e76cd(void)

void FUN_1437e76cd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a5c0 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a5c0 = FUN_14171c317(FUN_146418017,uVar1,L"ESpawnEncounterResetStyle");
  }
  return;
}



// FUNCTION 1437e7712 FUN_1437e7712 body=155 status=ok
// SIG undefined FUN_1437e7712(void)

void FUN_1437e7712(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x108);
  *(undefined4 *)((longlong)param_2 + 0x10) = 2;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000000;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x100) = 1;
  return;
}



// FUNCTION 1437e783e FUN_1437e783e body=539 status=ok
// SIG undefined FUN_1437e783e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e783e(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab4ab40,1,&PTR_FUN_14ab4ab10);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  lVar2 = 0;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab4b070);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb1a398 = (ulonglong)uVar1;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab4c2c0,1,&PTR_FUN_14ab4c290);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab4cc60,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab4d150,2,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab4d860,2,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14ab4d9c0 + lVar2),L"/Script/GbxSpawn",
                  *(undefined8 *)((longlong)&PTR_u_ESetNextSpawnOutputState_14ab4d9c8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14ab4d9d0 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab4daa0,1,0);
  FUN_14098d3d2(FUN_1437e7696,L"/Script/GbxSpawn",L"ESpawnAnimStretch",&DAT_14cb1a520);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab4f210,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14ab500c0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab50110,1,&PTR_FUN_14ab500e0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e7a5c FUN_1437e7a5c body=55 status=ok
// SIG undefined FUN_1437e7a5c(void)

void FUN_1437e7a5c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a650 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a650 = FUN_14171c317(FUN_14641859c,uVar1,L"ESpawnEncounterCompoundOperator");
  }
  return;
}



// FUNCTION 1437e7a93 FUN_1437e7a93 body=102 status=ok
// SIG undefined FUN_1437e7a93(void)

void FUN_1437e7a93(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14ab523c0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1437e7af9 FUN_1437e7af9 body=109 status=ok
// SIG undefined FUN_1437e7af9(void)

void FUN_1437e7af9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14ab52860;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 1;
  return;
}



// FUNCTION 1437e7b66 FUN_1437e7b66 body=98 status=ok
// SIG undefined FUN_1437e7b66(void)

void FUN_1437e7b66(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14ab52c10;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  return;
}



// FUNCTION 1437e7bc8 FUN_1437e7bc8 body=106 status=ok
// SIG undefined FUN_1437e7bc8(void)

void FUN_1437e7bc8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14ab52fc0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1437e7c32 FUN_1437e7c32 body=113 status=ok
// SIG undefined FUN_1437e7c32(void)

void FUN_1437e7c32(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14ab53820;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0xff00ff00;
  return;
}



// FUNCTION 1437e7ca3 FUN_1437e7ca3 body=55 status=ok
// SIG undefined FUN_1437e7ca3(void)

void FUN_1437e7ca3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a6f8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a6f8 = FUN_14171c317(FUN_146418748,uVar1,L"ESpawnEncounterEventEnableMode");
  }
  return;
}



// FUNCTION 1437e7cda FUN_1437e7cda body=158 status=ok
// SIG undefined FUN_1437e7cda(void)

void FUN_1437e7cda(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14ab53e30;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[9] = 0;
  *(undefined2 *)(puVar1 + 0xd) = 4;
  *(undefined4 *)(puVar1 + 10) = 1;
  *(undefined1 *)(puVar1 + 0xe) = 2;
  *(byte *)(puVar1 + 0xf) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  return;
}



// FUNCTION 1437e7d78 FUN_1437e7d78 body=165 status=ok
// SIG undefined FUN_1437e7d78(void)

void FUN_1437e7d78(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14ab54520;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[9] = 0;
  *(undefined2 *)(puVar1 + 0xd) = 4;
  *(undefined4 *)(puVar1 + 10) = 1;
  *(undefined1 *)(puVar1 + 0xe) = 2;
  *(byte *)(puVar1 + 0xf) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 1437e7e1d FUN_1437e7e1d body=55 status=ok
// SIG undefined FUN_1437e7e1d(void)

void FUN_1437e7e1d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a880 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a880 = FUN_14171c317(FUN_146418e20,uVar1,L"ESpawnerGroupingMode");
  }
  return;
}



// FUNCTION 1437e7e54 FUN_1437e7e54 body=55 status=ok
// SIG undefined FUN_1437e7e54(void)

void FUN_1437e7e54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a978 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a978 = FUN_14171c317(FUN_1464192a1,uVar1,L"EGbxSpawnerStyleType");
  }
  return;
}



// FUNCTION 1437e7e90 FUN_1437e7e90 body=48 status=ok
// SIG undefined FUN_1437e7e90(void)

longlong FUN_1437e7e90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14061144a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e7ec0 FUN_1437e7ec0 body=48 status=ok
// SIG undefined FUN_1437e7ec0(void)

longlong FUN_1437e7ec0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14061144a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e7ef8 FUN_1437e7ef8 body=48 status=ok
// SIG undefined FUN_1437e7ef8(void)

longlong FUN_1437e7ef8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_1408102c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e7f30 FUN_1437e7f30 body=48 status=ok
// SIG undefined FUN_1437e7f30(void)

longlong FUN_1437e7f30(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_1408102c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e8006 FUN_1437e8006 body=57 status=ok
// SIG undefined FUN_1437e8006(void)

void FUN_1437e8006(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a9f0 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a9f0 = FUN_140002ddd(FUN_14641941c,uVar1,L"SpawnerStyleDef_Bunch");
  }
  return;
}



// FUNCTION 1437e8052 FUN_1437e8052 body=57 status=ok
// SIG undefined FUN_1437e8052(void)

void FUN_1437e8052(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aa20 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aa20 = FUN_140002ddd(FUN_1464194ab,uVar1,L"SpawnerStyleDef_Single");
  }
  return;
}



// FUNCTION 1437e809a FUN_1437e809a body=57 status=ok
// SIG undefined FUN_1437e809a(void)

void FUN_1437e809a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aa50 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aa50 = FUN_140002ddd(FUN_14641955c,uVar1,L"SpawnerStyleDef_Waves");
  }
  return;
}



// FUNCTION 1437e80d3 FUN_1437e80d3 body=570 status=ok
// SIG undefined FUN_1437e80d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e80d3(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14ab53280;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab532a0,5,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14ab552d0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab55370,6,&PTR_FUN_14ab552f0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab55670);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab56b00,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb1a870 = (ulonglong)uVar1;
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14ab580e0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab58100,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab58ad0,3,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14ab590a0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab590f0,1,&PTR_FUN_14ab590c0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab59250,1,&PTR_FUN_14ab59220);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab59bf0,1,&PTR_FUN_14ab59bc0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab5a020,1,&PTR_FUN_14ab59ff0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab5ac20,1,&PTR_FUN_14ab5abf0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e8310 FUN_1437e8310 body=55 status=ok
// SIG undefined FUN_1437e8310(void)

void FUN_1437e8310(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ab70 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ab70 = FUN_14171c317(FUN_146419dc4,uVar1,L"ESpawnAutoStretchType");
  }
  return;
}



// FUNCTION 1437e8347 FUN_1437e8347 body=55 status=ok
// SIG undefined FUN_1437e8347(void)

void FUN_1437e8347(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ac18 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ac18 = FUN_14171c317(FUN_14641a000,uVar1,L"ESpawnPointSource");
  }
  return;
}



// FUNCTION 1437e837e FUN_1437e837e body=55 status=ok
// SIG undefined FUN_1437e837e(void)

void FUN_1437e837e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ac48 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ac48 = FUN_14171c317(FUN_14641a144,uVar1,L"ESpawnedActorType");
  }
  return;
}



// FUNCTION 1437e83b5 FUN_1437e83b5 body=55 status=ok
// SIG undefined FUN_1437e83b5(void)

void FUN_1437e83b5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1ac78 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1ac78 = FUN_14171c317(FUN_14641a20c,uVar1,L"ERespawnStyle");
  }
  return;
}



// FUNCTION 1437e83ec FUN_1437e83ec body=55 status=ok
// SIG undefined FUN_1437e83ec(void)

void FUN_1437e83ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aca8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aca8 = FUN_14171c317(FUN_14641a2d4,uVar1,L"ESpawnerActivationType");
  }
  return;
}



// FUNCTION 1437e8423 FUN_1437e8423 body=55 status=ok
// SIG undefined FUN_1437e8423(void)

void FUN_1437e8423(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1acd8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1acd8 = FUN_14171c317(FUN_14641a39c,uVar1,L"ESpawnFilterType");
  }
  return;
}



// FUNCTION 1437e846c FUN_1437e846c body=32 status=ok
// SIG undefined FUN_1437e846c(void)

bool FUN_1437e846c(longlong param_1)

{
  FUN_1405f85e0();
  return (byte)(*(char *)(param_1 + 0x101) - 3U) < 2;
}



// FUNCTION 1437e848c FUN_1437e848c body=245 status=ok
// SIG undefined FUN_1437e848c(void)

ulonglong FUN_1437e848c(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar2 = *(uint *)(param_1 + 0x70);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x74))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar4, lVar3 != 0)) {
      bVar1 = *(byte *)(param_1 + 0x101);
      if ((ulonglong)bVar1 < 6) {
        switch(bVar1) {
        case 0:
          return (ulonglong)
                 CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),(*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)
          ;
        case 1:
          uVar6 = FUN_1417fef9a();
          return uVar6;
        case 2:
          uVar5 = FUN_1401b0f18();
          plVar4 = (longlong *)FUN_144718840(lVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001437e8545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*plVar4 + 0x40))(plVar4);
          return uVar6;
        case 4:
          return CONCAT71((int7)((ulonglong)
                                 ((longlong)&switchD_1437e850f::switchdataD_14ab65388 +
                                 (longlong)(int)(&switchD_1437e850f::switchdataD_14ab65388)[bVar1])
                                >> 8),*(longlong *)(param_1 + 0xd8) != 0);
        case 5:
          uVar6 = FUN_1417ff2b0();
          return uVar6 ^ 1;
        }
        lVar3 = *(longlong *)(param_1 + 0xf0);
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0x68) == '\x01')) &&
           (*(char *)(lVar3 + 0x69) == '\x01')) {
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x6a));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437e85b4 FUN_1437e85b4 body=69 status=ok
// SIG undefined FUN_1437e85b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e85b4(void)

{
  _DAT_14cb1ae18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e85f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1ae20,1);
  return;
}



// FUNCTION 1437e85f9 FUN_1437e85f9 body=69 status=ok
// SIG undefined FUN_1437e85f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e85f9(void)

{
  _DAT_14cb1ae28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437e863b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1ae30,1);
  return;
}



// FUNCTION 1437e863e FUN_1437e863e body=1414 status=ok
// SIG undefined FUN_1437e863e(void)

longlong FUN_1437e863e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0xc))) &&
      (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))))) {
    if (((*(int *)(param_1 + 0x1c) == 0) || (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        (((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0 ||
          (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x1c))) ||
         ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      lVar4 = FUN_140fb058a(lVar3);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        *(uint *)(param_1 + 0x18) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar2 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar2 = *(int *)(lVar4 + 0x10);
          bVar7 = iVar2 == 0;
          if (bVar7) {
            *(int *)(lVar4 + 0x10) = iVar5;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar2 = iVar5;
          }
        }
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if ((((*(int *)(param_1 + 0x24) == 0) || (uVar1 = *(uint *)(param_1 + 0x20), (int)uVar1 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar1 ||
         ((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0 ||
          (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x24))))))) ||
       ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) {
      lVar3 = FUN_1417ff688(lVar3);
      if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0xc);
        *(uint *)(param_1 + 0x20) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
        if (*(int *)(lVar3 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar2 = *(int *)(lVar3 + 0x10);
          bVar7 = iVar2 == 0;
          if (bVar7) {
            *(int *)(lVar3 + 0x10) = iVar5;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar2 = iVar5;
          }
        }
      }
      *(int *)(param_1 + 0x24) = iVar2;
    }
  }
  if ((((((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar6 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x14))))) &&
      ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar6, lVar3 != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1478c0a72;
      local_60 = &LAB_1417b2375;
      local_68 = L"Engine";
      local_70 = 0x1000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      if (((*(int *)(param_1 + 0x1c) == 0) ||
          (((uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
           (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)))) ||
         ((*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
        lVar4 = FUN_140fb058a(lVar3);
        if (lVar4 == 0) {
          *(undefined4 *)(param_1 + 0x18) = 0;
          iVar2 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar4 + 0xc);
          *(uint *)(param_1 + 0x18) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          iVar2 = *(int *)(lVar4 + 0x10);
          if (*(int *)(lVar4 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar5 = DAT_14c964868 + 1;
            bVar7 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar7) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar2 = *(int *)(lVar4 + 0x10);
            bVar7 = iVar2 == 0;
            if (bVar7) {
              *(int *)(lVar4 + 0x10) = iVar5;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar7) {
              iVar2 = iVar5;
            }
          }
        }
        *(int *)(param_1 + 0x1c) = iVar2;
      }
      if (((*(int *)(param_1 + 0x24) == 0) || (uVar1 = *(uint *)(param_1 + 0x20), (int)uVar1 < 0))
         || ((DAT_14c9647dc <= (int)uVar1 ||
             (((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0 ||
               (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x24))) ||
              ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
        lVar3 = FUN_1417ff688(lVar3);
        if (lVar3 == 0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          iVar2 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar3 + 0xc);
          *(uint *)(param_1 + 0x20) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar3 = 0;
          }
          iVar2 = *(int *)(lVar3 + 0x10);
          if (*(int *)(lVar3 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar5 = DAT_14c964868 + 1;
            bVar7 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar7) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar2 = *(int *)(lVar3 + 0x10);
            bVar7 = iVar2 == 0;
            if (bVar7) {
              *(int *)(lVar3 + 0x10) = iVar5;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar7) {
              iVar2 = iVar5;
            }
          }
        }
        *(int *)(param_1 + 0x24) = iVar2;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1437e8bc6 FUN_1437e8bc6 body=7 status=ok
// SIG undefined FUN_1437e8bc6(void)

longlong FUN_1437e8bc6(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x29) = param_2;
  return param_1;
}



// FUNCTION 1437e8bcd FUN_1437e8bcd body=91 status=ok
// SIG undefined FUN_1437e8bcd(void)

void FUN_1437e8bcd(void)

{
  if (DAT_14cb1ae60 != 0) {
    if (DAT_14cb1ae58 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb1ae58)(DAT_14cb1ae58,0);
    FUN_1446efa72(&DAT_14cb1ae58,0,0,0x10);
    DAT_14cb1ae60 = 0;
  }
  if (DAT_14cb1ae58 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1437e8c40 FUN_1437e8c40 body=48 status=ok
// SIG undefined FUN_1437e8c40(void)

longlong FUN_1437e8c40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e8cac FUN_1437e8cac body=57 status=ok
// SIG undefined FUN_1437e8cac(void)

void FUN_1437e8cac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aab8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aab8 = FUN_140002ddd(FUN_146419a56,uVar1,L"SpawnGroupDef");
  }
  return;
}



// FUNCTION 1437e8d80 FUN_1437e8d80 body=156 status=ok
// SIG undefined FUN_1437e8d80(void)

void FUN_1437e8d80(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  *(undefined4 *)((longlong)param_2 + 8) = 0x4000;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa0) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0xd8) = 4;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 1;
  *(undefined1 *)((longlong)param_2 + 0xe0) = 1;
  *(bool *)((longlong)param_2 + 0xe8) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined4 *)((longlong)param_2 + 0xf0) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0xf4) = 0;
  return;
}



// FUNCTION 1437e8e50 FUN_1437e8e50 body=173 status=ok
// SIG undefined FUN_1437e8e50(void)

void FUN_1437e8e50(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1437e8ee7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1437e8ee7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1437e8efe FUN_1437e8efe body=29 status=ok
// SIG undefined FUN_1437e8efe(void)

undefined8 FUN_1437e8efe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e909a FUN_1437e909a body=93 status=ok
// SIG undefined FUN_1437e909a(void)

void FUN_1437e909a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab633f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1437e90f8 FUN_1437e90f8 body=93 status=ok
// SIG undefined FUN_1437e90f8(void)

void FUN_1437e90f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab633f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1437e9156 FUN_1437e9156 body=126 status=ok
// SIG undefined FUN_1437e9156(void)

void FUN_1437e9156(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab633f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437e91c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437e91e6 FUN_1437e91e6 body=275 status=ok
// SIG undefined FUN_1437e91e6(void)

undefined8 FUN_1437e91e6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1437e92f3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1437e92f3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1437e92f3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1437e9291;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x101) == '\x03') {
        FUN_1405f85e0();
      }
      goto LAB_1437e9291;
    }
  }
  uVar6 = 0;
LAB_1437e9291:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e92fa FUN_1437e92fa body=199 status=ok
// SIG undefined FUN_1437e92fa(void)

void FUN_1437e92fa(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    uVar7 = *param_1;
    uVar3 = FUN_1401b0f18();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1401b0f18();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
        lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (lVar6 != 0) {
          FUN_1417ff120(lVar6,uVar7);
        }
      }
    }
  }
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    local_30 = param_2;
    uVar7 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar7,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e93e0 FUN_1437e93e0 body=12 status=ok
// SIG undefined FUN_1437e93e0(void)

void FUN_1437e93e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437e93e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437e93ec FUN_1437e93ec body=29 status=ok
// SIG undefined FUN_1437e93ec(void)

undefined8 FUN_1437e93ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437e940a FUN_1437e940a body=123 status=ok
// SIG undefined FUN_1437e940a(void)

void FUN_1437e940a(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(*param_2 + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(*param_2 + 8);
  }
  uVar1 = *param_1;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1400b2348(puVar2,local_28,1);
  FUN_1405e9454(uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e9486 FUN_1437e9486 body=186 status=ok
// SIG undefined FUN_1437e9486(void)

void FUN_1437e9486(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  if (*param_2 == 0) {
    local_38 = 0;
  }
  else {
    puVar2 = *(undefined4 **)(*param_2 + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2;
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar4,1);
  }
  local_30 = 0x4000;
  local_28 = 0;
  FUN_147e217cc(uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e9542 FUN_1437e9542 body=287 status=ok
// SIG undefined FUN_1437e9542(void)

uint FUN_1437e9542(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1400d690e(param_2);
  puVar4 = *(undefined4 **)(lVar3 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_14c9485f0;
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1400b2348(puVar4,&local_48,1);
  lVar3 = FUN_1400d690e(param_1);
  puVar4 = *(undefined4 **)(lVar3 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_14c9485f0;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_1400b2348(puVar4,&local_58,1);
  puVar7 = local_48;
  if ((int)uStack_40 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar5 = local_58;
  }
  lVar3 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar5 + lVar3);
    uVar6 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar7 + lVar3);
    uVar8 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1437e95f4;
      }
      uVar6 = uVar6 - uVar8;
      goto LAB_1437e961d;
    }
    if (uVar1 == 0) break;
LAB_1437e95f4:
    lVar3 = lVar3 + 2;
  }
  uVar6 = 0;
LAB_1437e961d:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e9662 FUN_1437e9662 body=1463 status=ok
// SIG undefined FUN_1437e9662(void)

void FUN_1437e9662(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [2];
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  uint *local_68;
  undefined8 *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_2 = (longlong *)*param_2;
  local_70 = param_2;
  if (1 < *(uint *)(*param_1 + 8)) {
    puVar7 = &DAT_14c9485f0;
    if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)param_2[1];
    }
    local_c8 = (undefined2 *)0x0;
    uStack_c0 = 0;
    FUN_1400b2348(puVar7,&local_c8,1);
    puVar3 = local_c8;
    iVar10 = *(int *)((undefined8 *)*param_1 + 1);
    iVar1 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar1 = 0;
    }
    puVar14 = &DAT_149dfb77a;
    if (iVar10 != 0) {
      puVar14 = *(undefined2 **)*param_1;
    }
    iVar10 = (int)uStack_c0 + -1;
    puVar2 = local_c8;
    if ((int)uStack_c0 == 0) {
      iVar10 = 0;
      puVar2 = &DAT_149dfb77a;
    }
    cVar4 = FUN_14038a9c4(puVar2,iVar10,puVar14,iVar1);
    if (puVar3 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar3);
    }
    if (cVar4 == '\0') goto LAB_1437e971e;
  }
  FUN_147e2197e(param_1[1],&local_c8,&local_70,param_1[2]);
  if ((((*(char *)param_1[2] != '\0') ||
       (fVar17 = (float)(**(code **)(*param_2 + 0xb0))(param_2), fVar17 <= 0.0)) ||
      (DAT_14cb1aeb8 == 0)) ||
     (plVar5 = (longlong *)FUN_14030fc70(DAT_14cb1aeb8,param_2), plVar5 == (longlong *)0x0))
  goto LAB_1437e971e;
  fVar18 = (float)(**(code **)(*plVar5 + 0xb0))(plVar5);
  if ((fVar18 != 0.0) || (NAN(fVar18))) goto LAB_1437e971e;
  if (*(char *)((longlong)param_2 + 0x4e) == '\0') {
    *(undefined1 *)((longlong)param_2 + 0x4e) = 1;
    *(undefined4 *)(param_2 + 0xb) = 0;
    if (*(int *)((longlong)param_2 + 0x5c) < 0) {
      FUN_1403de8ba(param_2 + 10,0);
    }
    *(undefined4 *)(param_2 + 0xd) = 0;
    if (*(int *)((longlong)param_2 + 0x6c) < 0) {
      FUN_1403de8ba(param_2 + 0xc,0);
    }
    (**(code **)(*param_2 + 0x110))(param_2,param_2 + 10);
  }
  lVar8 = (longlong)(int)((longlong *)param_1[3])[1];
  if (lVar8 != 0) {
    plVar6 = *(longlong **)param_1[3];
    plVar5 = plVar6 + lVar8;
    do {
      if ((int)param_2[0xb] != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(param_2[10] + lVar8) == *plVar6) goto LAB_1437e9876;
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)param_2[0xb] << 3 != lVar8);
      }
      if ((longlong)(int)param_2[0xd] != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(param_2[0xc] + lVar8) == *plVar6) goto LAB_1437e9876;
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)param_2[0xd] * 8 != lVar8);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar5);
  }
  uVar11 = 0;
  goto LAB_1437e9879;
LAB_1437e9876:
  uVar11 = 1;
LAB_1437e9879:
  local_78 = 0;
  local_80 = 0;
  (**(code **)(*param_2 + 200))(param_2);
  if (*(char *)param_1[4] == '\x01') {
    uVar13 = (uint)((ulonglong)local_80 >> 0x10);
    uVar15 = (uint)local_80 & 0xffff;
    uVar15 = ((uint)local_80 << 0x10 | uVar15) + (int)((ulonglong)local_80 >> 0x20) +
             (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar15 >> 4);
    uVar13 = (uint)((ulonglong)local_78 >> 0x10);
    uVar12 = (uint)local_78 & 0xffff;
    uVar13 = uVar15 >> 0xd ^
             (((uint)local_78 << 0x10 | uVar12) + (int)((ulonglong)local_78 >> 0x20) +
              (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar12 >> 4)) - uVar15;
    uVar12 = uVar13 << 8 ^ (-0x61c88647 - uVar15) - uVar13;
    uVar16 = uVar12 >> 0xd ^ (uVar15 - uVar13) - uVar12;
    uVar13 = uVar16 >> 0xc ^ (uVar13 - uVar12) - uVar16;
    uVar15 = uVar13 << 0x10 ^ (uVar12 - uVar16) - uVar13;
    uVar12 = uVar15 >> 5 ^ (uVar16 - uVar13) - uVar15;
    uVar16 = uVar12 >> 3 ^ (uVar13 - uVar15) - uVar12;
    uVar13 = uVar16 << 10 ^ (uVar15 - uVar12) - uVar16;
    local_84 = uVar13 >> 0xf ^ uVar12 - (uVar16 + uVar13);
    plVar5 = (longlong *)param_1[5];
    if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
      plVar6 = plVar5 + 7;
      if ((longlong *)plVar5[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar5[8];
      }
      iVar10 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar5[9] - 1U & local_84) * 4);
      if (iVar10 != -1) {
        do {
          if (*(uint *)(*plVar5 + (longlong)iVar10 * 0x48) == local_84) goto LAB_1437e971e;
          iVar10 = *(int *)(*plVar5 + (longlong)iVar10 * 0x48 + 0x40);
        } while (iVar10 != -1);
      }
    }
    local_c8._0_5_ = CONCAT14((char)param_2[3],fVar17);
    local_c8._0_6_ = CONCAT15(uVar11,(undefined5)local_c8);
    if (param_2 == (longlong *)0x0) {
      uStack_c0 = 0;
    }
    else {
      puVar7 = &DAT_14c9485f0;
      if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)param_2[1];
      }
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&uStack_c0,puVar7,1);
    }
    local_b8 = 0x4000;
    local_b0 = 0;
    local_a8 = local_78;
    uStack_a0 = local_80;
    (**(code **)(*param_2 + 0x70))(param_2);
    local_68 = &local_84;
    local_60 = &local_c8;
    FUN_147e21e86(plVar5,local_54);
  }
  else {
    plVar5 = (longlong *)param_1[6];
    local_c8._0_5_ = CONCAT14((char)param_2[3],fVar17);
    local_c8._0_6_ = CONCAT15(uVar11,(undefined5)local_c8);
    if (param_2 == (longlong *)0x0) {
      uStack_c0 = 0;
    }
    else {
      puVar7 = &DAT_14c9485f0;
      if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)param_2[1];
      }
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&uStack_c0,puVar7,1);
    }
    local_b8 = 0x4000;
    local_b0 = 0;
    local_a8 = local_78;
    uStack_a0 = local_80;
    (**(code **)(*param_2 + 0x70))(param_2,local_98);
    iVar10 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar10 + 1U) {
      FUN_147e2236c(plVar5,iVar10);
    }
    lVar8 = *plVar5;
    lVar9 = (longlong)iVar10 * 0x38;
    *(undefined2 *)(lVar8 + 4 + lVar9) = local_c8._4_2_;
    *(undefined4 *)(lVar8 + lVar9) = (undefined4)local_c8;
    *(undefined8 *)(lVar8 + 8 + lVar9) = uStack_c0;
    *(undefined4 *)(lVar8 + 0x10 + lVar9) = local_b8;
    *(undefined8 *)(lVar8 + 0x18 + lVar9) = 0;
    puVar7 = (undefined4 *)(lVar8 + 0x20 + lVar9);
    *puVar7 = (undefined4)local_a8;
    puVar7[1] = local_a8._4_4_;
    puVar7[2] = (undefined4)uStack_a0;
    puVar7[3] = uStack_a0._4_4_;
    *(undefined8 *)(lVar8 + 0x30 + lVar9) = local_98[0];
  }
LAB_1437e971e:
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e9c1a FUN_1437e9c1a body=345 status=ok
// SIG undefined FUN_1437e9c1a(void)

ulonglong FUN_1437e9c1a(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(byte *)((longlong)param_1 + 5) == *(byte *)((longlong)param_2 + 5)) {
    fVar1 = *param_1;
    fVar2 = *param_2;
    if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
      uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),fVar1 < fVar2);
    }
    else {
      lVar5 = FUN_1400d690e(param_2 + 2);
      puVar6 = *(undefined4 **)(lVar5 + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      local_48 = (undefined2 *)0x0;
      uStack_40 = 0;
      FUN_1400b2348(puVar6,&local_48,1);
      lVar5 = FUN_1400d690e(param_1 + 2);
      puVar6 = *(undefined4 **)(lVar5 + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      FUN_1400b2348(puVar6,&local_58,1);
      puVar10 = local_48;
      if ((int)uStack_40 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      puVar7 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar7 = local_58;
      }
      lVar5 = 0;
      while( true ) {
        uVar3 = *(ushort *)((longlong)puVar7 + lVar5);
        uVar8 = (uint)uVar3;
        uVar4 = *(ushort *)((longlong)puVar10 + lVar5);
        uVar11 = (uint)uVar4;
        if (uVar3 != uVar4) {
          if ((uVar4 | uVar3) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1437e9cf7;
          }
          uVar8 = uVar8 - uVar11;
          goto LAB_1437e9d26;
        }
        if (uVar3 == 0) break;
LAB_1437e9cf7:
        lVar5 = lVar5 + 2;
      }
      uVar8 = 0;
LAB_1437e9d26:
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8(local_58);
      }
      uVar9 = (ulonglong)(uVar8 >> 0x1f);
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                     *(byte *)((longlong)param_1 + 5) < *(byte *)((longlong)param_2 + 5));
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437e9d90 FUN_1437e9d90 body=1281 status=ok
// SIG undefined FUN_1437e9d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e9d90(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = "AssetRegistry";
  uStack_50 = 0xd;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb1aa78 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab5daf0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab5e1d0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab5e2f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab5e380);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab5e6d0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab5e760);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab5f400,2,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14ab603e0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab60430,1,&PTR_FUN_14ab60400);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab604f0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab60840,1,0);
  FUN_14098d3d2(FUN_1437e8347,L"/Script/GbxSpawn",L"ESpawnPointSource",&DAT_14cb1ac10);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab60c20,1,0);
  ppuStack_70 = &PTR_FUN_14ab617e0;
  uStack_68 = 4;
  local_78 = 5;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab61860);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",&PTR_FUN_14ab61a60,1,&PTR_FUN_14ab61a30);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxSpawn",0,0,&PTR_FUN_14ab61b10);
  local_58 = "nexus";
  uStack_50 = 5;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cb1ad60 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb1ad68);
  if (cVar1 == '\0') {
    _DAT_14cb1ad68 = 0;
    uRam000000014cb1ad70 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&DAT_14cb1ad78,L"HideOnSpawn",1);
  local_58 = (char *)0xa2114de93789227d;
  uStack_50 = 0x4d78e3ff;
  uStack_4c = 0x4af2386f;
  _DAT_14cb1ad80 = 0x3789227d;
  uRam000000014cb1ad84 = 0xa2114de9;
  uRam000000014cb1ad88 = 0x4d78e3ff;
  uRam000000014cb1ad8c = 0x4af2386f;
  FUN_141005458(&local_58,0,L"GbxActorData",0);
  atexit((_func_5014 *)&LAB_1437e845a);
  _DAT_14cb1ad98 = 0;
  LOCK();
  DAT_14cb1ad90 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1437e8466);
  FUN_1446f470e(&DAT_14cb1ada0,L"bCanAdjustSpawnLocation",1);
  FUN_1446f470e(&DAT_14cb1ada8,L"can_adjust_spawn_location",1);
  FUN_1446f470e(&local_58,L"SpawnCostMs",1);
  FUN_1446dcdd4(&DAT_14cb1adb0,&local_58);
  atexit((_func_5014 *)&LAB_1437e8581);
  FUN_1446f470e(&local_58,L"bHasCustomSpawnCostMs",1);
  FUN_1446dcdd4(&DAT_14cb1add8,&local_58);
  atexit((_func_5014 *)&LAB_1437e8592);
  ram0x00014cb1ae04 = 0;
  FUN_14052b5e0(&DAT_14cb1ae00,&DAT_14ab63540,0);
  _DAT_14cb1ae10 = &DAT_14ab63540;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb1ae18,L"gbx.Spawn.PhasedSpawn",&DAT_14c761fc8,
                L"When enabled, the GbxActors will be spawned over multiple frames to spread out the cost."
               );
  atexit(FUN_1437e85b4);
  FUN_140056680(&local_58,&DAT_149dfb77a);
  local_78 = CONCAT44(local_78._4_4_,0x40);
  FUN_140f510cc(&DAT_14cb1ae28,L"gbx.perfcapture.EnemyPerf.filter",&local_58,
                L"Wildcard filter enemies tested by the EnemyPerf test.");
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1437e85f9);
  FUN_1446f470e(&DAT_14cb1ae48,L"GbxActorLoader",1);
  FUN_1446f470e(&DAT_14cb1ae50,L"AdditionalObjects",1);
  local_58 = "bone";
  uStack_50 = 4;
  uStack_4c = uStack_4c & 0xffffff00;
  FUN_14001a6c0(&local_58,1);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ea294 FUN_1437ea294 body=47 status=ok
// SIG undefined FUN_1437ea294(void)

void FUN_1437ea294(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140927942();
  FUN_1470d7162(uVar1);
  uVar1 = FUN_145c9194d();
  FUN_145e0385c(uVar1);
  uVar1 = FUN_145c9194d();
  FUN_145e039cc(uVar1);
  return;
}



// FUNCTION 1437ea2c4 FUN_1437ea2c4 body=126 status=ok
// SIG undefined FUN_1437ea2c4(void)

ulonglong FUN_1437ea2c4(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x410), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0xab8))(plVar1,&local_20);
    if (local_20 == 0) {
      uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),1);
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x410) != 0) {
        uVar2 = FUN_147e23bc0();
        uVar2 = uVar2 ^ 1;
      }
      goto LAB_1437ea30a;
    }
  }
  uVar2 = 0;
LAB_1437ea30a:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ea344 FUN_1437ea344 body=294 status=ok
// SIG undefined FUN_1437ea344(void)

void FUN_1437ea344(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = FUN_1437ea2c4();
  if (((cVar5 != '\0') && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x410), lVar3 != 0)) {
    FUN_1448c1924(lVar3,&local_38);
    if (((*(longlong *)(lVar3 + 0x9d8) == *(longlong *)(param_1 + 0x28)) &&
        (*(int *)(lVar3 + 0x9e0) == *(int *)(param_1 + 0x30))) ||
       ((local_38 == 0 ||
        ((*(longlong *)(local_38 + 0x1b8) == *(longlong *)(param_1 + 0x28) &&
         (*(int *)(local_38 + 0x1c0) == *(int *)(param_1 + 0x30))))))) {
LAB_1437ea3c6:
      bVar4 = false;
    }
    else {
      cVar5 = FUN_147e22866((longlong *)(param_1 + 0x28));
      if (cVar5 == '\0') goto LAB_1437ea3c6;
      lVar3 = *(longlong *)(param_1 + 0x28);
      if ((*(longlong *)(local_38 + 0x1b8) != lVar3) ||
         (bVar4 = true, *(int *)(local_38 + 0x1c0) != *(int *)(param_1 + 0x30))) {
        *(longlong *)(local_38 + 0x1b8) = lVar3;
        *(undefined4 *)(local_38 + 0x1c0) = *(undefined4 *)(param_1 + 0x30);
        *(undefined8 *)(local_38 + 0x1c8) = 0;
        bVar4 = true;
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
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x48) = 3;
      goto LAB_1437ea3fd;
    }
  }
  *(undefined1 *)(param_1 + 0x48) = 2;
LAB_1437ea3fd:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ea46b FUN_1437ea46b body=69 status=ok
// SIG undefined FUN_1437ea46b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437ea46b(void)

{
  _DAT_14cb1ae88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437ea4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1ae90,1);
  return;
}



// FUNCTION 1437ea4fa FUN_1437ea4fa body=176 status=ok
// SIG undefined FUN_1437ea4fa(void)

void FUN_1437ea4fa(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x308))();
  if (cVar1 != '\0') {
    local_38 = &local_48;
    local_30 = &local_40;
    local_40 = FUN_1437ed730;
    local_20 = &local_30;
    local_28 = FUN_14037e3dc;
    local_48 = param_1;
    FUN_14037dfa8(param_1);
    FUN_14114d3d8(param_1);
    FUN_14641b2ba(param_1 + 0x72);
    FUN_147e27ae6(param_1 + 0x72,(int)param_1[0x73] - *(int *)((longlong)param_1 + 0x3c4));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ea5f0 FUN_1437ea5f0 body=809 status=ok
// SIG undefined FUN_1437ea5f0(void)

void FUN_1437ea5f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  byte *local_128;
  longlong *plStack_120;
  undefined8 ***local_118 [5];
  longlong local_f0;
  undefined8 local_e0 [5];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar5 = FUN_144837462(param_1,param_3);
  if (lVar5 != 0) {
    uVar6 = FUN_1417fec38();
    cVar4 = FUN_1448093f4(lVar5,uVar6);
    bVar3 = true;
    if (cVar4 != '\0') goto LAB_1437ea668;
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xfcc);
  *piVar1 = *piVar1 + 1;
  bVar3 = false;
LAB_1437ea668:
  local_128 = (byte *)0x0;
  plStack_120 = (longlong *)0x0;
  cVar4 = (**(code **)(*param_1 + 0x360))(param_1,&local_128,param_3);
  if (cVar4 != '\0') {
    ppppuVar2 = local_118 + 2;
    FUN_1447a97f4(ppppuVar2,&DAT_14cb1aee8);
    FUN_1447a97f4(local_e0,&DAT_14cb1af10);
    local_118[1] = (undefined8 ***)&local_b8;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_118[0] = ppppuVar2;
    FUN_140128eb8(&local_b8);
    FUN_14475b384(param_1,param_2,&local_128,&local_b8);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1402d9776(&local_b8);
    lVar5 = 0x50;
    do {
      if (*(longlong *)((longlong)local_118 + lVar5) != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    if (local_128 != (byte *)0x0) {
      if ((*local_128 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(local_128 + 8) + 0x18);
      }
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar9 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar7[9];
        }
        iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar7[10] - 1U & DAT_14cb1af10) * 4);
        if (iVar8 != -1) {
          do {
            lVar5 = *plVar7 + (longlong)iVar8 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar8 * 0x40) == DAT_14cb1af10) {
              if ((((lVar5 != 0) &&
                   (puVar10 = (undefined8 *)(lVar5 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_1437ea7de;
              break;
            }
            iVar8 = *(int *)(lVar5 + 0x38);
          } while (iVar8 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_1437ea7de:
    if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 0x6b) == 3)) {
      FUN_1447a97f4(ppppuVar2,&DAT_14cb1af38);
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_118[0] = ppppuVar2;
      local_118[1] = (undefined8 ***)local_e0;
      FUN_140128eb8(&local_b8);
      FUN_14475b384(param_1,param_2,puVar10,&local_b8);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1402d9776(&local_b8);
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar7 = plStack_120;
  if (!bVar3) {
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xfcc);
    *piVar1 = *piVar1 + -1;
  }
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_120 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ea93c FUN_1437ea93c body=7 status=ok
// SIG undefined FUN_1437ea93c(void)

undefined1 FUN_1437ea93c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x409);
}



// FUNCTION 1437ea946 FUN_1437ea946 body=72 status=ok
// SIG undefined FUN_1437ea946(void)

bool FUN_1437ea946(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0xab8))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_18 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ea990 FUN_1437ea990 body=52 status=ok
// SIG undefined FUN_1437ea990(void)

bool FUN_1437ea990(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == '\x02') {
    if (*(int *)(param_1 + 500) != 5) {
      return false;
    }
  }
  else if (param_2 != '\x01') {
    iVar1 = 5;
    lVar2 = 500;
    goto LAB_1437ea9b3;
  }
  iVar1 = 0;
  lVar2 = 0x18c;
LAB_1437ea9b3:
  return *(int *)(param_1 + lVar2) == iVar1;
}



// FUNCTION 1437ea9f8 FUN_1437ea9f8 body=28 status=ok
// SIG undefined FUN_1437ea9f8(void)

void FUN_1437ea9f8(longlong *param_1,char param_2)

{
  if ((char)param_1[0x109] == param_2) {
    return;
  }
  *(char *)(param_1 + 0x109) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001437eaa11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa98))();
  return;
}



// FUNCTION 1437eaa28 FUN_1437eaa28 body=32 status=ok
// SIG undefined FUN_1437eaa28(void)

void FUN_1437eaa28(undefined8 param_1,undefined4 param_2)

{
  FUN_1401c30c4();
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 1437eaa58 FUN_1437eaa58 body=689 status=ok
// SIG undefined FUN_1437eaa58(void)

void FUN_1437eaa58(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if ((longlong)*(int *)(param_1 + 0xb60) < 1) {
    plVar13 = (longlong *)(param_1 + 0xa98);
  }
  else {
    lVar10 = param_1 + 0xab8;
    if (*(longlong *)(param_1 + 0xb58) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xb58);
    }
    plVar13 = (longlong *)(lVar10 + (longlong)*(int *)(param_1 + 0xb60) * 0x28 + -0x28);
  }
  if ((int)plVar13[1] != 0) {
    iVar2 = *(int *)(param_2 + 0xf88);
    uVar8 = (ulonglong)iVar2;
    if (uVar8 != 0) {
      lVar10 = *(longlong *)(param_2 + 0xf80);
      if (*(longlong *)(param_2 + 0xf80) == 0) {
        lVar10 = param_2;
      }
      lVar6 = FUN_1400d690e(lVar10);
      if (lVar6 == 0) {
LAB_1437eab5b:
        bVar4 = true;
      }
      else {
        plVar7 = (longlong *)FUN_140edfc58(lVar6);
        if ((longlong)(int)plVar13[1] == 0) {
          bVar4 = false;
        }
        else {
          plVar9 = (longlong *)*plVar13;
          plVar1 = plVar9 + (int)plVar13[1];
          do {
            if ((int)plVar7[1] != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*plVar7 + lVar6) == *plVar9) goto LAB_1437eab5b;
                lVar6 = lVar6 + 8;
              } while ((longlong)(int)plVar7[1] << 3 != lVar6);
            }
            if ((int)plVar7[3] != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(plVar7[2] + lVar6) == *plVar9) goto LAB_1437eab5b;
                lVar6 = lVar6 + 8;
              } while ((longlong)(int)plVar7[3] << 3 != lVar6);
            }
            plVar9 = plVar9 + 1;
            bVar4 = false;
          } while (plVar9 != plVar1);
        }
      }
      iVar12 = 0;
      uVar14 = 0;
LAB_1437eab71:
      do {
        iVar5 = (int)uVar14;
        if ((int)(iVar5 + 1U) < iVar2) {
          uVar14 = (longlong)iVar5 + 1;
          bVar3 = true;
          do {
            lVar6 = FUN_1400d690e(uVar14 * 0xf8 + lVar10);
            if (lVar6 == 0) {
LAB_1437eac21:
              if (!bVar4) {
                iVar11 = (int)uVar14 - iVar5;
                goto LAB_1437eaca1;
              }
            }
            else {
              plVar7 = (longlong *)FUN_140edfc58(lVar6);
              if ((longlong)(int)plVar13[1] != 0) {
                plVar9 = (longlong *)*plVar13;
                plVar1 = plVar9 + (int)plVar13[1];
                do {
                  if ((int)plVar7[1] != 0) {
                    lVar6 = 0;
                    do {
                      if (*(longlong *)(*plVar7 + lVar6) == *plVar9) goto LAB_1437eac21;
                      lVar6 = lVar6 + 8;
                    } while ((longlong)(int)plVar7[1] << 3 != lVar6);
                  }
                  if ((int)plVar7[3] != 0) {
                    lVar6 = 0;
                    do {
                      if (*(longlong *)(plVar7[2] + lVar6) == *plVar9) goto LAB_1437eac21;
                      lVar6 = lVar6 + 8;
                    } while ((longlong)(int)plVar7[3] << 3 != lVar6);
                  }
                  plVar9 = plVar9 + 1;
                } while (plVar9 != plVar1);
              }
              if (bVar4) {
                FUN_14034c5df((longlong)iVar5 * 0xf8 + lVar10,(int)uVar14 - iVar5);
                uVar15 = uVar14;
                goto joined_r0x0001437eac93;
              }
            }
            uVar14 = uVar14 + 1;
            bVar3 = (longlong)uVar14 < (longlong)uVar8;
            uVar15 = uVar8;
          } while (uVar14 != uVar8);
        }
        else {
          bVar3 = false;
          uVar15 = (ulonglong)(iVar5 + 1U);
        }
        iVar11 = (int)uVar15 - iVar5;
        uVar14 = uVar15;
        if (bVar4) {
          FUN_14034c5df((longlong)iVar5 * 0xf8 + lVar10,iVar11);
joined_r0x0001437eac93:
          bVar4 = false;
          uVar14 = uVar15;
          if (!bVar3) break;
          goto LAB_1437eab71;
        }
LAB_1437eaca1:
        if (iVar12 != iVar5) {
          memmove((void *)((longlong)iVar12 * 0xf8 + lVar10),
                  (void *)((longlong)iVar5 * 0xf8 + lVar10),(longlong)iVar11 * 0xf8);
        }
        iVar12 = iVar12 + iVar11;
        bVar4 = true;
      } while (bVar3);
      *(int *)(param_2 + 0xf88) = iVar12;
    }
  }
  return;
}



// FUNCTION 1437ead26 FUN_1437ead26 body=69 status=ok
// SIG undefined FUN_1437ead26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437ead26(void)

{
  _DAT_14cb1b000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437ead68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1b008,1);
  return;
}



// FUNCTION 1437ead6c FUN_1437ead6c body=458 status=ok
// SIG undefined FUN_1437ead6c(void)

void FUN_1437ead6c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40 [2];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10c);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 != (longlong *)0x0) &&
         ((((int)plVar3[2] == *(int *)(param_1 + 0x110) &&
           ((*(uint *)(plVar3 + 1) >> 0x1c & 1) == 0)) && (lVar2 = *plVar3, lVar2 != 0)))) {
        if (*(char *)(lVar2 + 0x849) == '\x02') {
          if ((*(char *)(param_1 + 0x196) == '\x01') ||
             (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*(longlong *)(lVar2 + 0xbe8) != 0)))) {
            FUN_140af9cbe(param_1);
            FUN_140929af0(param_1);
          }
          else if ((*(longlong *)(param_1 + 0x150) != 0) && (*(int *)(param_1 + 500) != 5)) {
            FUN_1437eaf38(param_1);
          }
          goto LAB_1437eae4f;
        }
        if (*(char *)(lVar2 + 0x849) == '\x01') {
          FUN_147e24700(param_1);
          goto LAB_1437eae4f;
        }
      }
    }
  }
  FUN_14641adae(param_1);
LAB_1437eae4f:
  FUN_140af9cbe(param_1);
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  local_30 = 0xff;
  FUN_140513334(local_40);
  local_40[0] = 0;
  local_30 = 0;
  FUN_140513298(param_1 + 0x210,local_40);
  FUN_140513334(local_40);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0x90),param_1 + 0x78);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xb0),param_1 + 0x98);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xf0),param_1 + 0xd8);
  }
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x68))();
  }
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437eaf38 FUN_1437eaf38 body=1405 status=ok
// SIG undefined FUN_1437eaf38(void)

void FUN_1437eaf38(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(**(longlong **)(param_1 + 0x150) + 0x18))();
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x30))();
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 500) = 0;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14092b234(local_98,param_1 + 0x28);
  FUN_14092b08e(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xd0),param_1 + 0xb8);
  }
  FUN_14092a154(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  if (((*(int *)(param_1 + 0x110) != 0) && (-1 < *(int *)(param_1 + 0x10c))) &&
     (*(int *)(param_1 + 0x10c) < DAT_14c9647dc)) {
    param_3 = DAT_14c9647c8;
  }
  local_b0 = *(longlong **)(param_1 + 0x120);
  local_cc = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  uVar17 = 0;
  if (local_b0 == (longlong *)0x0) {
    local_b0 = (longlong *)0x0;
    local_d8 = 0;
  }
  else {
    iVar18 = (int)local_b0[1];
    local_d8 = 0;
    do {
      if (iVar18 == 0) {
        local_b0 = (longlong *)0x0;
        goto LAB_1437eb085;
      }
      LOCK();
      iVar16 = (int)local_b0[1];
      bVar19 = iVar18 == iVar16;
      if (bVar19) {
        *(int *)(local_b0 + 1) = iVar18 + 1;
        iVar16 = iVar18;
      }
      iVar18 = iVar16;
      UNLOCK();
    } while (!bVar19);
    local_d8 = *(longlong *)(param_1 + 0x118);
    local_cc = 0;
  }
LAB_1437eb085:
  local_e0 = param_1;
  if (local_70 == 0) {
    uVar12 = 1;
    iVar18 = 0;
    uVar6 = 0;
  }
  else {
    puVar7 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar7 = local_88;
    }
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      iVar18 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar18 = local_70 - 1;
      }
      uVar17 = 0;
      uVar12 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar12 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar12 == uVar17) goto LAB_1437eb124;
        iVar18 = iVar18 + 0x20;
        uVar6 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar12 = (ulonglong)(-uVar6 & uVar6);
    uVar3 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar6 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar6) {
      uVar6 = local_70;
    }
  }
  if (uVar6 != local_70) {
    local_b8 = local_d8 + 0x28;
    local_c8 = (longlong *)(param_1 + 0x1a0);
    uVar13 = 0xffffffff;
    local_c0 = (ulonglong)local_70;
    do {
      lVar15 = local_98[0];
      lVar11 = (longlong)(int)uVar6 * 0x58;
      lVar14 = lVar11 + local_98[0];
      if (((*(char *)(local_98[0] + 0x40 + lVar11) == '\0') &&
          (*(longlong **)(lVar14 + 0x38) != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar14 + 0x38) + 0x140))(), cVar5 != '\0')) {
        fVar20 = *(float *)(*(longlong *)(local_e0 + 0x10) + 0x664) - *(float *)(lVar14 + 0x44);
        fVar21 = 0.0;
        if (0.0 <= fVar20) {
          fVar21 = fVar20;
        }
        *(float *)(*(longlong *)(local_e0 + 0x10) + 0x664) = fVar21;
        if (local_d8 != 0) {
          FUN_141800148(local_b8,lVar14 + 0x38);
        }
        if (((*(char *)(lVar14 + 0x2c) == '\0') && (*(int *)(lVar14 + 0x34) != 0)) &&
           (((uVar6 = *(uint *)(lVar14 + 0x30), -1 < (int)uVar6 &&
             ((((int)uVar6 < DAT_14c9647dc &&
               (plVar10 = (longlong *)
                          ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0)) && ((int)plVar10[2] == *(int *)(lVar14 + 0x34))))) &&
            (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar4 = *plVar10, lVar4 != 0)))))) {
          (**(code **)(**(longlong **)(local_e0 + 0x10) + 0xa8))
                    (*(longlong **)(local_e0 + 0x10),&local_a8);
          (**(code **)(*local_a8 + 0x18))(local_a8,lVar4);
          iVar16 = *(int *)(local_e0 + 0x1a8);
          *(uint *)(local_e0 + 0x1a8) = iVar16 + 1U;
          if (*(uint *)(local_e0 + 0x1ac) < iVar16 + 1U) {
            FUN_14180163c(local_c8,iVar16);
          }
          plVar10 = local_a0;
          lVar4 = *local_c8;
          *(longlong **)(lVar4 + (longlong)iVar16 * 0x10) = local_a8;
          *(longlong **)(lVar4 + 8 + (longlong)iVar16 * 0x10) = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
            UNLOCK();
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_a0)(local_a0);
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
        }
      }
      lVar4 = local_e0;
      if (((*(int *)(lVar14 + 0x34) != 0) && (uVar6 = *(uint *)(lVar14 + 0x30), -1 < (int)uVar6)) &&
         (((int)uVar6 < DAT_14c9647dc &&
          ((((plVar10 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(lVar14 + 0x34))) &&
            ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
           (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))))) {
        (**(code **)(**(longlong **)(local_e0 + 0x10) + 0x98))
                  (*(longlong **)(local_e0 + 0x10),plVar10);
        (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x68))
                  (*(longlong **)(lVar4 + 0x10),lVar15 + lVar11 + 0x18);
        (**(code **)(*plVar10 + 0x5c8))(plVar10,0);
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar7 = local_88;
      }
      iVar16 = (int)uVar17;
      lVar14 = (longlong)iVar16;
      uVar6 = puVar7[lVar14] & uVar13;
      if (uVar6 == 0) {
        iVar8 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar8 = local_70 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar16) {
          iVar9 = iVar16;
        }
        if (iVar16 < iVar8) {
          lVar15 = 0;
          do {
            uVar6 = puVar7[lVar14 + lVar15 + 1];
            if (uVar6 != 0) {
              uVar17 = (ulonglong)(iVar16 + (int)lVar15 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1437eb348;
            }
            iVar18 = iVar18 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar14 != lVar15);
          uVar13 = 0xffffffff;
          iVar16 = iVar9;
        }
        uVar17 = (ulonglong)(iVar16 + 1);
        uVar6 = local_70;
      }
      else {
LAB_1437eb348:
        uVar12 = (ulonglong)(-uVar6 & uVar6);
        uVar3 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar6 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)local_70 <= (int)uVar6) {
          uVar6 = local_70;
        }
      }
    } while (uVar6 != (uint)local_c0);
  }
LAB_1437eb124:
  plVar10 = local_b0;
  if ((char)local_cc == '\0') {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14092b056(local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437eb4b6 FUN_1437eb4b6 body=59 status=ok
// SIG undefined FUN_1437eb4b6(void)

void FUN_1437eb4b6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb1afd0;
  if (DAT_14cb1afd0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb1afd0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437eb4e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1437eb54c FUN_1437eb54c body=41 status=ok
// SIG undefined FUN_1437eb54c(void)

void FUN_1437eb54c(void)

{
  DAT_14cb1b0f0 = 0;
  if (DAT_14cb1b0e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6376c();
  return;
}



// FUNCTION 1437eb57a FUN_1437eb57a body=294 status=ok
// SIG undefined FUN_1437eb57a(void)

void FUN_1437eb57a(longlong param_1,undefined4 *param_2)

{
  undefined8 *_Dst;
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_28 = 4;
  local_20 = 3;
  _Dst = (undefined8 *)(param_1 + 8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      puVar2 = (undefined8 *)*_Dst;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20)) {
    FUN_1400020a8(*_Dst);
  }
  *(undefined2 *)(param_1 + 0x20) = 4;
  pcVar1 = DAT_14c9a8918;
  if ((DAT_14c9a8918 == (code *)0x0) && (pcVar1 = DAT_14c9a8910, DAT_14c9a8910 == (code *)0x0)) {
    memcpy(_Dst,&local_40,(longlong)DAT_14c9a8870);
  }
  else {
    (*pcVar1)(_Dst,&local_40);
  }
  *(undefined1 *)(param_1 + 0x28) = local_20;
  local_20 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    if (local_28 < 0x19) {
      puVar3 = &local_40;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*DAT_14c9a85d0)(puVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437eb6a2 FUN_1437eb6a2 body=90 status=ok
// SIG undefined FUN_1437eb6a2(void)

void FUN_1437eb6a2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437eb6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1437eb71c FUN_1437eb71c body=90 status=ok
// SIG undefined FUN_1437eb71c(void)

void FUN_1437eb71c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437eb772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1437eb7b5 FUN_1437eb7b5 body=59 status=ok
// SIG undefined FUN_1437eb7b5(void)

void FUN_1437eb7b5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb1b1e0;
  if (DAT_14cb1b1e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb1b1e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437eb7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1437eb802 FUN_1437eb802 body=152 status=ok
// SIG undefined FUN_1437eb802(void)

undefined8 * FUN_1437eb802(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &DAT_14cb1b1f8;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = DAT_14cb1b220;
  lVar3 = (longlong)(int)DAT_14cb1b220;
  if (0 < lVar3) {
    puVar2 = DAT_14cb1b218;
    if (DAT_14cb1b218 == (undefined8 *)0x0) {
      puVar2 = &DAT_14cb1b1f8;
    }
    lVar4 = 0;
    do {
      if (*(longlong *)((longlong)puVar2 + lVar4) == *param_2) {
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 - lVar4 != 0);
  }
  DAT_14cb1b220 = DAT_14cb1b220 + 1;
  if (DAT_14cb1b224 < DAT_14cb1b220) {
    FUN_147e28bbc(iVar1);
  }
  puVar2 = &DAT_14cb1b1f8;
  if (DAT_14cb1b218 != (undefined8 *)0x0) {
    puVar2 = DAT_14cb1b218;
  }
  puVar2[lVar3] = *param_2;
  return param_1;
}



// FUNCTION 1437eb89a FUN_1437eb89a body=85 status=ok
// SIG undefined FUN_1437eb89a(void)

undefined8 FUN_1437eb89a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    if ((int)plVar3[2] != *(int *)(param_1 + 0x10)) {
      return 0;
    }
    if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if (*plVar3 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(*plVar3 + 0x408);
  }
  return uVar2;
}



// FUNCTION 1437eb8ef FUN_1437eb8ef body=69 status=ok
// SIG undefined FUN_1437eb8ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437eb8ef(void)

{
  _DAT_14cb1b228 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437eb931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1b230,1);
  return;
}



// FUNCTION 1437eb934 FUN_1437eb934 body=69 status=ok
// SIG undefined FUN_1437eb934(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437eb934(void)

{
  _DAT_14cb1b238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437eb976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1b240,1);
  return;
}



// FUNCTION 1437eb979 FUN_1437eb979 body=49 status=ok
// SIG undefined FUN_1437eb979(void)

void FUN_1437eb979(void)

{
  FUN_144760e21(DAT_14cb1b248,DAT_14cb1b250);
  if (DAT_14cb1b248 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437eb9aa FUN_1437eb9aa body=69 status=ok
// SIG undefined FUN_1437eb9aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437eb9aa(void)

{
  _DAT_14cb1b268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437eb9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1b270,1);
  return;
}



// FUNCTION 1437eb9ef FUN_1437eb9ef body=69 status=ok
// SIG undefined FUN_1437eb9ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437eb9ef(void)

{
  _DAT_14cb1b278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437eba31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb1b280,1);
  return;
}



// FUNCTION 1437eba82 FUN_1437eba82 body=2071 status=ok
// SIG undefined FUN_1437eba82(void)

void FUN_1437eba82(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  undefined1 auStack_158 [32];
  longlong *local_138;
  int local_12c;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  uint *local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined4 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  DWORD local_b4;
  LARGE_INTEGER local_b0;
  int *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (0 < *(int *)(param_1 + 0x518)) {
    QueryPerformanceCounter(&local_b0);
    puVar21 = *(undefined8 **)(param_1 + 0x508);
    if (puVar21 != (undefined8 *)0x0) {
      dVar3 = (double)CONCAT44(local_b0.s.HighPart,local_b0.s.LowPart) * DAT_14c83f420;
      plVar18 = (longlong *)(param_1 + 0x520);
      local_100 = (uint *)(param_1 + 0x530);
      local_f8 = param_1 + 0x558;
      local_128 = plVar18;
      local_120 = param_1;
      do {
        lVar25 = puVar21[2];
        puVar21 = (undefined8 *)*puVar21;
        if (((((*(int *)(lVar25 + 0x110) != 0) &&
              (uVar20 = *(uint *)(lVar25 + 0x10c), -1 < (int)uVar20)) &&
             ((int)uVar20 < DAT_14c9647dc)) &&
            ((plVar17 = (longlong *)
                        ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
             plVar17 != (longlong *)0x0 && ((int)plVar17[2] == *(int *)(lVar25 + 0x110))))) &&
           (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (local_110 = *plVar17, local_110 != 0))))
        {
          iVar24 = *(int *)(param_1 + 0x548);
          local_108 = lVar25;
          if (iVar24 == 0) {
            uVar11 = 1;
            uVar26 = 0;
            iVar22 = 0;
            iVar28 = 0;
          }
          else {
            puVar15 = *(uint **)(param_1 + 0x540);
            if (*(uint **)(param_1 + 0x540) == (uint *)0x0) {
              puVar15 = local_100;
            }
            uVar20 = *puVar15;
            if (uVar20 == 0) {
              iVar22 = iVar24 + 0x1e;
              if (-1 < iVar24 + -1) {
                iVar22 = iVar24 + -1;
              }
              uVar26 = 0;
              uVar11 = (ulonglong)(uint)(iVar22 >> 5);
              if (iVar22 >> 5 < 1) {
                uVar11 = uVar26;
              }
              iVar22 = 0;
              do {
                if (uVar11 == uVar26) goto LAB_1437ebee7;
                iVar22 = iVar22 + 0x20;
                uVar20 = puVar15[uVar26 + 1];
                uVar26 = uVar26 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar26 = 0;
              iVar22 = 0;
            }
            uVar11 = (ulonglong)(-uVar20 & uVar20);
            uVar2 = uVar11 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar28 = (iVar22 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if (iVar24 <= iVar28) {
              iVar28 = iVar24;
            }
          }
          if (iVar28 < iVar24) {
            local_e8 = (undefined4 *)(local_110 + 0x834);
            uVar20 = 0xffffffff;
            local_118 = 0;
            local_138 = (longlong *)0x0;
            local_f0 = puVar21;
            do {
              local_12c = iVar22;
              lVar8 = local_110;
              lVar25 = *plVar18;
              lVar27 = (longlong)iVar28 * 0x30;
              lVar19 = *(longlong *)(lVar25 + 0x18 + lVar27);
              if (lVar19 == 0) {
                FUN_140b77e40(plVar18,iVar28);
                iVar22 = local_12c;
                plVar17 = local_138;
              }
              else {
                plVar10 = *(longlong **)(lVar19 + 0x4a8);
                plVar18 = local_128;
                param_1 = local_120;
                iVar22 = local_12c;
                plVar17 = local_138;
                if (plVar10 != (longlong *)0x0) {
                  local_e0 = (longlong *)(lVar27 + lVar25 + 0x18);
                  do {
                    iVar24 = *(int *)(plVar10[2] + 0x110);
                    if ((((iVar24 != 0) &&
                         (uVar12 = *(uint *)(plVar10[2] + 0x10c), -1 < (int)uVar12)) &&
                        (((int)uVar12 < DAT_14c9647dc &&
                         (((plVar18 = (longlong *)
                                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)
                                      ), plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar24))
                          && ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) &&
                       ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
                        (cVar9 = (**(code **)(*plVar18 + 0xac0))(plVar18,lVar8,0),
                        plVar18 = local_e0, cVar9 != '\0')))) {
                      lVar19 = *local_e0;
                      if (local_118 == 0) {
                        local_e8[4] = *(undefined4 *)(lVar19 + 0x20);
                        uVar5 = *(undefined4 *)(lVar19 + 0x14);
                        uVar6 = *(undefined4 *)(lVar19 + 0x18);
                        uVar7 = *(undefined4 *)(lVar19 + 0x1c);
                        *local_e8 = *(undefined4 *)(lVar19 + 0x10);
                        local_e8[1] = uVar5;
                        local_e8[2] = uVar6;
                        local_e8[3] = uVar7;
                        FUN_140929e44(local_108,lVar19);
                        FUN_14092a2ac(lVar19 + 0x28,lVar8);
                        param_1 = local_120;
                        iVar22 = local_12c;
                        local_118 = *plVar18;
                        plVar17 = *(longlong **)(lVar25 + 0x20 + lVar27);
                        if (plVar17 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                          UNLOCK();
                        }
                        plVar18 = local_128;
                        if (local_138 != (longlong *)0x0) {
                          LOCK();
                          plVar10 = local_138 + 1;
                          *(int *)plVar10 = (int)*plVar10 + -1;
                          UNLOCK();
                          if ((int)*plVar10 == 0) {
                            (**(code **)*local_138)(local_138);
                            LOCK();
                            piVar1 = (int *)((longlong)local_138 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            plVar18 = local_128;
                            if (*piVar1 == 0) {
                              (**(code **)(*local_138 + 0x10))();
                              plVar18 = local_128;
                            }
                          }
                        }
                      }
                      else {
                        FUN_1457e1264(local_118,lVar19);
                        plVar18 = local_128;
                        FUN_140b77e40(local_128,iVar28);
                        param_1 = local_120;
                        iVar22 = local_12c;
                        plVar17 = local_138;
                      }
                      break;
                    }
                    plVar10 = (longlong *)*plVar10;
                    plVar18 = local_128;
                    param_1 = local_120;
                    iVar22 = local_12c;
                    plVar17 = local_138;
                  } while (plVar10 != (longlong *)0x0);
                }
              }
              local_138 = plVar17;
              uVar20 = uVar20 & ~(uint)uVar11;
              puVar15 = *(uint **)(param_1 + 0x540);
              if (*(uint **)(param_1 + 0x540) == (uint *)0x0) {
                puVar15 = local_100;
              }
              iVar24 = *(int *)(param_1 + 0x548);
              iVar28 = (int)uVar26;
              lVar25 = (longlong)iVar28;
              uVar12 = puVar15[lVar25] & uVar20;
              if (uVar12 == 0) {
                iVar13 = iVar24 + 0x1e;
                if (-1 < iVar24 + -1) {
                  iVar13 = iVar24 + -1;
                }
                iVar13 = iVar13 >> 5;
                iVar14 = iVar13;
                if (iVar13 < iVar28) {
                  iVar14 = iVar28;
                }
                if (iVar13 <= iVar28) break;
                lVar19 = 0;
                while( true ) {
                  iVar22 = iVar22 + 0x20;
                  uVar12 = puVar15[lVar25 + lVar19 + 1];
                  if (uVar12 != 0) break;
                  lVar19 = lVar19 + 1;
                  if (iVar14 - lVar25 == lVar19) goto LAB_1437ebef2;
                }
                uVar26 = (ulonglong)(iVar28 + (int)lVar19 + 1);
                uVar20 = 0xffffffff;
              }
              uVar11 = (ulonglong)(-uVar12 & uVar12);
              uVar2 = uVar11 * 2 + 1;
              lVar25 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                }
              }
              iVar28 = (iVar22 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            } while (iVar28 < iVar24);
LAB_1437ebef2:
            puVar21 = local_f0;
            if (local_118 == 0) goto LAB_1437ebf03;
          }
          else {
LAB_1437ebee7:
            local_138 = (longlong *)0x0;
LAB_1437ebf03:
            iVar24 = *(int *)(param_1 + 0x500);
            *(int *)(param_1 + 0x500) = iVar24 + 1;
            local_c8 = 0;
            uStack_c0 = 0;
            plVar10 = (longlong *)FUN_14001cc68(0x4d0,0x10);
            plVar10[1] = (longlong)&DAT_100000001;
            *plVar10 = (longlong)&PTR_FUN_14ab67000;
            plVar17 = plVar10 + 2;
            plVar10[2] = 0;
            plVar10[3] = 0;
            *(int *)(plVar10 + 4) = iVar24;
            *(undefined8 *)((longlong)plVar10 + 0x24) = 0;
            *(undefined8 *)((longlong)plVar10 + 0x2c) = 0;
            plVar10[0x87] = 0;
            plVar10[0x88] = 0x2000000000;
            plVar10[0x8a] = 0;
            plVar10[0x8b] = 0x2000000000;
            plVar10[0x8c] = 0xffffffff;
            plVar10[0x95] = 0;
            *(undefined4 *)(plVar10 + 0x96) = 0;
            plVar10[0x97] = 0;
            plVar10[0x98] = 0;
            *(undefined4 *)(plVar10 + 0x99) = 0;
            local_d8 = plVar17;
            local_d0 = plVar10;
            FUN_14092a5f8(&local_d8,plVar17);
            lVar19 = local_110;
            *(int *)(local_110 + 0x844) = (int)plVar10[6];
            uVar5 = *(undefined4 *)((longlong)plVar10 + 0x24);
            lVar25 = plVar10[5];
            uVar6 = *(undefined4 *)((longlong)plVar10 + 0x2c);
            *(int *)(local_110 + 0x834) = (int)plVar10[4];
            *(undefined4 *)(local_110 + 0x838) = uVar5;
            *(int *)(local_110 + 0x83c) = (int)lVar25;
            *(undefined4 *)(local_110 + 0x840) = uVar6;
            FUN_140929e44(local_108,plVar17);
            FUN_14092a2ac(plVar10 + 7,lVar19);
            plVar18 = local_128;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            FUN_14092b610(local_128,&local_b0);
            piVar1 = local_a8;
            *local_a8 = iVar24;
            local_a8[1] = (int)local_c8;
            local_a8[2] = local_c8._4_4_;
            local_a8[3] = (int)uStack_c0;
            local_a8[4] = uStack_c0._4_4_;
            *(longlong **)(local_a8 + 6) = plVar17;
            *(longlong **)(local_a8 + 8) = plVar10;
            local_a8[10] = -1;
            local_b4 = local_b0.s.LowPart;
            uVar20 = local_a8[2] ^ local_a8[1];
            uVar12 = uVar20 >> 0xd ^ iVar24 - uVar20;
            uVar16 = uVar12 << 8 ^ (-0x61c88647 - uVar20) - uVar12;
            uVar23 = uVar16 >> 0xd ^ (uVar20 - uVar12) - uVar16;
            uVar20 = uVar23 >> 0xc ^ (uVar12 - uVar16) - uVar23;
            uVar12 = uVar20 << 0x10 ^ (uVar16 - uVar23) - uVar20;
            uVar16 = uVar12 >> 5 ^ (uVar23 - uVar20) - uVar12;
            uVar23 = uVar16 >> 3 ^ (uVar20 - uVar12) - uVar16;
            uVar20 = uVar23 << 10 ^ (uVar12 - uVar16) - uVar23;
            uVar20 = uVar20 >> 0xf ^ uVar16 - (uVar23 + uVar20);
            cVar9 = FUN_14092a55a(plVar18,uVar20,local_a8,&local_b4);
            if (cVar9 == '\0') {
              uVar12 = *(int *)(local_120 + 0x528) - *(int *)(local_120 + 0x554);
              if (uVar12 < 4) {
                iVar24 = 1;
              }
              else {
                uVar11 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
                lVar25 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                  }
                }
                iVar24 = 1 << ((byte)lVar25 & 0x1f);
              }
              if (((int)uVar12 < 1) || (iVar24 <= *(int *)(local_120 + 0x568))) {
                uVar20 = *(int *)(local_120 + 0x568) - 1U & uVar20;
                piVar1[0xb] = uVar20;
                lVar25 = *(longlong *)(local_120 + 0x560);
                if (*(longlong *)(local_120 + 0x560) == 0) {
                  lVar25 = local_f8;
                }
                piVar1[10] = *(int *)(lVar25 + ((longlong)*(int *)(local_120 + 0x568) - 1U &
                                               (longlong)(int)uVar20) * 4);
                lVar25 = *(longlong *)(local_120 + 0x560);
                if (*(longlong *)(local_120 + 0x560) == 0) {
                  lVar25 = local_f8;
                }
                *(DWORD *)(lVar25 + ((longlong)*(int *)(local_120 + 0x568) - 1U &
                                    (longlong)(int)uVar20) * 4) = local_b4;
              }
              else {
                *(int *)(local_120 + 0x568) = iVar24;
                FUN_14092d0bc(plVar18);
              }
            }
            plVar17 = local_d0;
            param_1 = local_120;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_d0 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                param_1 = local_120;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                  param_1 = local_120;
                }
              }
            }
          }
          QueryPerformanceCounter(&local_b0);
          dVar4 = (double)CONCAT44(local_b0.s.HighPart,local_b0.s.LowPart) * DAT_14c83f420;
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_138 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar1 = (int *)((longlong)local_138 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_138 + 0x10))();
              }
            }
          }
          if (dVar3 + 16777216.0 + 0.0005 <= dVar4 + 16777216.0) break;
        }
      } while (puVar21 != (undefined8 *)0x0);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ec29a FUN_1437ec29a body=4111 status=ok
// SIG undefined FUN_1437ec29a(void)

void FUN_1437ec29a(longlong *param_1)

{
  ulonglong uVar1;
  double dVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  byte *pbVar12;
  double *pdVar13;
  uint *puVar14;
  double *pdVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  double *pdVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  int iVar32;
  longlong *plVar33;
  longlong *plVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auStack_298 [40];
  longlong *local_270;
  ulonglong local_268;
  longlong local_260;
  uint *local_258;
  longlong *local_250;
  longlong *local_248;
  double local_240;
  double local_238;
  double local_230;
  uint local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  float local_204;
  undefined1 local_200 [256];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  plVar22 = (longlong *)param_1[7];
  local_270 = param_1;
  if (plVar22 != (longlong *)0x0) {
    local_258 = (uint *)CONCAT44(local_258._4_4_,*(undefined4 *)(param_1[6] + 0x48));
    plVar19 = param_1 + 10;
    local_248 = param_1 + 0x10;
    uVar23 = 0;
    local_250 = plVar19;
    do {
      lVar27 = plVar22[2];
      if (*(char *)(lVar27 + 0xf8) == '\x01') {
        if (DAT_14c761fe8 <= (int)uVar23) {
          if (((param_1[7] != 0) && (param_1[7] != lVar27 + 0x78)) &&
             ((param_1[8] != 0 &&
              (puVar18 = *(undefined8 **)(lVar27 + 0x80), puVar18 != (undefined8 *)0x0)))) {
            *puVar18 = 0;
            *(undefined8 *)(lVar27 + 0x80) = 0;
            lVar31 = param_1[7];
            *(longlong *)param_1[8] = lVar31;
            *(longlong *)(lVar31 + 8) = param_1[8];
            param_1[7] = lVar27 + 0x78;
            param_1[8] = (longlong)puVar18;
          }
          break;
        }
        iVar36 = *(int *)(lVar27 + 400);
        *(undefined4 *)(lVar27 + 400) = 0;
        *(undefined8 *)(lVar27 + 0x170) = 0x7f7fffff7f7fffff;
        iVar32 = 0;
        iVar26 = 0;
        if ((((*(int *)(lVar27 + 0x110) != 0) &&
             (uVar28 = *(uint *)(lVar27 + 0x10c), iVar26 = iVar32, -1 < (int)uVar28)) &&
            ((int)uVar28 < DAT_14c9647dc)) &&
           (((plVar33 = (longlong *)
                        ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
             plVar33 != (longlong *)0x0 && ((int)plVar33[2] == *(int *)(lVar27 + 0x110))) &&
            (((*(uint *)(plVar33 + 1) & 0x10200000) == 0 && (*plVar33 != 0)))))) {
          pbVar12 = (byte *)FUN_1405126a6(*plVar33,&local_240);
          dVar44 = local_230;
          dVar43 = local_238;
          dVar6 = local_240;
          plVar33 = *(longlong **)(lVar27 + 0x10);
          if (*pbVar12 == 2) {
            uVar10 = (**(code **)(*plVar33 + 0x18))();
            *(undefined4 *)(lVar27 + 400) = uVar10;
            lVar31 = (longlong)*(int *)(*(longlong *)(lVar27 + 0x10) + 0x1b8);
            fVar37 = INFINITY;
            if (lVar31 != 0) {
              pdVar13 = *(double **)(*(longlong *)(lVar27 + 0x10) + 0x1b0);
              pdVar20 = pdVar13 + lVar31 * 3;
              dVar6 = 1.79769313486232e+308;
              do {
                dVar43 = (pdVar13[2] - local_230) * (pdVar13[2] - local_230) +
                         (pdVar13[1] - local_238) * (pdVar13[1] - local_238) +
                         (*pdVar13 - local_240) * (*pdVar13 - local_240);
                if (dVar6 <= dVar43) {
                  dVar43 = dVar6;
                }
                pdVar13 = pdVar13 + 3;
                dVar6 = dVar43;
              } while (pdVar13 != pdVar20);
              fVar37 = INFINITY;
              if ((dVar43 != 1.79769313486232e+308) || (NAN(dVar43))) {
                if (dVar43 < 0.0) {
                  dVar43 = sqrt(dVar43);
                }
                else {
                  dVar43 = SQRT(dVar43);
                }
                fVar37 = (float)dVar43;
              }
            }
            *(float *)(lVar27 + 0x170) = fVar37;
            *(undefined4 *)(lVar27 + 0x174) = 0;
          }
          else if ((longlong)(int)plVar33[0x37] != 0) {
            pdVar13 = (double *)plVar33[0x36];
            pdVar20 = pdVar13 + (longlong)(int)plVar33[0x37] * 3;
            fVar37 = 3.4028235e+38;
            dVar8 = 1.79769313486232e+308;
            local_268 = uVar23;
            do {
              dVar2 = *pdVar13;
              dVar41 = pdVar13[1];
              dVar5 = dVar44 - pdVar13[2];
              bVar3 = *pbVar12;
              if ((bVar3 == 0) || (bVar3 == 3)) {
                dVar4 = dVar2 - dVar6;
                dVar40 = dVar41 - dVar43;
                dVar4 = SQRT(dVar40 * dVar40 + dVar4 * dVar4) - (double)*(float *)(pbVar12 + 4);
                dVar40 = dVar4;
                if ((pbVar12[8] == 1) &&
                   (dVar40 = ABS(dVar5) - (double)*(float *)(pbVar12 + 0xc),
                   ABS(dVar5) - (double)*(float *)(pbVar12 + 0xc) <= dVar4)) {
                  dVar40 = dVar4;
                }
                dVar4 = 0.0;
                if (0.0 < dVar40) goto LAB_1437ec4e4;
              }
              else {
                dVar40 = 1.79769313486232e+308;
                if (bVar3 == 2) {
                  dVar4 = 0.0;
                }
                else {
LAB_1437ec4e4:
                  dVar4 = dVar40;
                  if (((bVar3 | 2) == 3) &&
                     (iVar26 = *(int *)(pbVar12 + 0x18), plVar19 = local_250, param_1 = local_270,
                     (longlong)iVar26 != 0)) {
                    lVar31 = *(longlong *)(pbVar12 + 0x10);
                    lVar24 = 0;
                    do {
                      dVar4 = dVar40;
                      if (*(longlong *)(lVar31 + lVar24) != 0) {
                        local_218 = pdVar13[2];
                        local_228 = *(uint *)pdVar13;
                        uStack_224 = *(undefined4 *)((longlong)pdVar13 + 4);
                        uStack_220 = *(undefined4 *)(pdVar13 + 1);
                        uStack_21c = *(undefined4 *)((longlong)pdVar13 + 0xc);
                        plVar19 = *(longlong **)(*(longlong *)(lVar31 + lVar24) + 0x3a8);
                        if (plVar19 == (longlong *)0x0) {
                          fVar37 = 0.0;
                        }
                        else {
                          local_260 = lVar31;
                          cVar9 = (**(code **)(*plVar19 + 0x7c0))
                                            (plVar19,&local_228,&local_204,local_200);
                          fVar37 = -1.0;
                          lVar31 = local_260;
                          if (cVar9 != '\0') {
                            if (local_204 < 0.0) {
                              fVar37 = sqrtf(local_204);
                            }
                            else {
                              fVar37 = SQRT(local_204);
                            }
                            lVar31 = local_260;
                            if ((0.0 <= local_204) && (local_204 <= 0.0)) {
                              dVar4 = 0.0;
                              break;
                            }
                          }
                        }
                        dVar4 = (double)fVar37;
                        if (dVar40 <= (double)fVar37) {
                          dVar4 = dVar40;
                        }
                      }
                      lVar24 = lVar24 + 8;
                      dVar40 = dVar4;
                    } while ((longlong)iVar26 * 8 != lVar24);
                    fVar37 = *(float *)(lVar27 + 0x174);
                    plVar19 = local_250;
                    param_1 = local_270;
                  }
                }
              }
              if (dVar4 < (double)fVar37) {
                fVar37 = (float)dVar4;
                *(float *)(lVar27 + 0x174) = fVar37;
              }
              if (dVar4 <= 0.0) {
                *(int *)(lVar27 + 400) = *(int *)(lVar27 + 400) + 1;
              }
              dVar2 = dVar6 - dVar2;
              dVar41 = dVar43 - dVar41;
              dVar2 = dVar5 * dVar5 + dVar41 * dVar41 + dVar2 * dVar2;
              if (dVar8 <= dVar2) {
                dVar2 = dVar8;
              }
              pdVar13 = pdVar13 + 3;
              dVar8 = dVar2;
            } while (pdVar13 != pdVar20);
            if (dVar2 < 0.0) {
              dVar2 = sqrt(dVar2);
            }
            else {
              dVar2 = SQRT(dVar2);
            }
            *(float *)(lVar27 + 0x170) = (float)dVar2;
            uVar23 = local_268;
          }
          iVar26 = *(int *)(lVar27 + 400);
        }
        if (((iVar26 != iVar36) && (lVar31 = FUN_14092c0b8(), *(char *)(lVar31 + 0xb0) == '\x01'))
           && (plVar33 = *(longlong **)(lVar27 + 0x150), plVar33 != (longlong *)0x0)) {
          (**(code **)(*plVar33 + 0x80))(plVar33,*(undefined4 *)(lVar27 + 400));
        }
        if (*(char *)(lVar27 + 0x196) == '\0') {
          fVar37 = local_258._0_4_;
          if (*(char *)(lVar27 + 0x19c) == '\x01') {
            fVar37 = *(float *)(lVar27 + 0x198);
          }
          fVar39 = 0.0;
          if (*(int *)(lVar27 + 500) == 5) {
            fVar39 = *(float *)(*(longlong *)(lVar27 + 0x10) + 0x1d0) - *(float *)(lVar27 + 0x16c);
          }
          if (fVar39 < fVar37) goto LAB_1437ec736;
          FUN_140929af0(lVar27);
        }
        else {
LAB_1437ec736:
          if (*(longlong **)(lVar27 + 0x150) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar27 + 0x150) + 8))();
          }
        }
        uVar23 = (ulonglong)((int)uVar23 + 1);
        local_228 = local_228 & 0xffffff00;
        FUN_14051243c(lVar27,local_200,&local_228);
        if ((char)local_228 == '\x01') {
          if (*(longlong *)(lVar27 + 0xb0) == 0) {
            lVar31 = lVar27 + 0x98;
            *(undefined8 *)(lVar27 + 0x98) = 0;
            *(longlong *)(lVar27 + 0xa0) = param_1[0xb];
            *(longlong *)(lVar27 + 0xa8) = lVar27;
            *(longlong **)(lVar27 + 0xb0) = plVar19;
            if (param_1[10] == 0) {
              *plVar19 = lVar31;
            }
            if ((longlong *)param_1[0xb] != (longlong *)0x0) {
              *(longlong *)param_1[0xb] = lVar31;
            }
            param_1[0xb] = lVar31;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          }
        }
        else {
          if (*(longlong *)(lVar27 + 0xb0) != 0) {
            FUN_140929f1a(plVar19);
          }
          if (*(longlong *)(lVar27 + 0xf0) != 0) {
            FUN_140929f1a(local_248);
          }
        }
      }
      plVar22 = (longlong *)*plVar22;
    } while (plVar22 != (longlong *)0x0);
  }
  if ((0 < (int)param_1[0xc]) && (puVar18 = (undefined8 *)param_1[10], puVar18 != (undefined8 *)0x0)
     ) {
    plVar22 = param_1 + 10;
LAB_1437ec976:
    if (puVar18[2] == 0) goto code_r0x0001437ec981;
    plVar19 = (longlong *)*puVar18;
    while (plVar19 != (longlong *)0x0) {
      if (plVar19[2] == 0) {
        plVar19 = (longlong *)FUN_140929f1a(plVar22,plVar19);
      }
      else {
        plVar33 = (longlong *)plVar19[1];
        if (plVar33 != (longlong *)0x0) {
          plVar21 = plVar19;
          plVar34 = plVar33;
          fVar37 = *(float *)(plVar33[2] + 0x170);
          if (*(float *)(plVar19[2] + 0x170) <= *(float *)(plVar33[2] + 0x170)) {
            do {
              plVar21 = plVar34;
              plVar34 = (longlong *)plVar21[1];
              if (plVar34 == (longlong *)0x0) break;
              bVar7 = fVar37 <= *(float *)(plVar34[2] + 0x170);
              fVar37 = *(float *)(plVar34[2] + 0x170);
            } while (bVar7);
          }
          if (plVar21 != plVar19) {
            lVar27 = *plVar19;
            *plVar33 = lVar27;
            if (lVar27 == 0) {
              param_1[0xb] = (longlong)plVar33;
            }
            else {
              *(longlong *)(lVar27 + 8) = plVar19[1];
            }
            plVar34 = (longlong *)plVar21[1];
            if ((longlong *)plVar21[1] == (longlong *)0x0) {
              plVar34 = plVar22;
            }
            *plVar34 = (longlong)plVar19;
            plVar19[1] = plVar21[1];
            *plVar19 = (longlong)plVar21;
            plVar21[1] = (longlong)plVar19;
            plVar19 = plVar33;
          }
        }
        plVar19 = (longlong *)*plVar19;
      }
    }
  }
LAB_1437ec991:
  if ((0 < (int)param_1[0xf]) && ((int)param_1[0x37] != 0)) {
    local_100 = (undefined1 *)0x0;
    local_f8 = 0x2000000000;
    plVar22 = (longlong *)param_1[0xd];
    if (plVar22 != (longlong *)0x0) {
      fVar37 = *(float *)(param_1[6] + 0x34);
      dVar6 = (double)*(float *)(param_1[6] + 0x38);
      do {
        lVar27 = plVar22[2];
        iVar36 = *(int *)(lVar27 + 0x110);
        if (((((((iVar36 == 0) || (uVar28 = *(uint *)(lVar27 + 0x10c), (int)uVar28 < 0)) ||
               (DAT_14c9647dc <= (int)uVar28)) ||
              ((plVar19 = (longlong *)
                          ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
               plVar19 == (longlong *)0x0 || ((int)plVar19[2] != iVar36)))) ||
             ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) ||
            ((*plVar19 == 0 || (*(longlong *)(*plVar19 + 0xbe8) == 0)))) &&
           (*(char *)(lVar27 + 0x1f0) == '\0')) {
          if (*(char *)(lVar27 + 0x194) == '\0') {
            if ((((iVar36 != 0) && (uVar28 = *(uint *)(lVar27 + 0x10c), -1 < (int)uVar28)) &&
                ((int)uVar28 < DAT_14c9647dc)) &&
               (((plVar19 = (longlong *)
                            ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
                 plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar36)) &&
                (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
                 (((longlong *)*plVar19 != (longlong *)0x0 &&
                  (cVar9 = (**(code **)(*(longlong *)*plVar19 + 0xad8))(), cVar9 != '\0')))))))) {
              iVar36 = *(int *)(lVar27 + 0x110);
              goto LAB_1437ecadd;
            }
          }
          else {
LAB_1437ecadd:
            if ((((iVar36 != 0) && (uVar28 = *(uint *)(lVar27 + 0x10c), -1 < (int)uVar28)) &&
                ((int)uVar28 < DAT_14c9647dc)) &&
               (((plVar19 = (longlong *)
                            ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
                 plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar36)) &&
                (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
                 ((plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0 &&
                  ((**(code **)(*plVar19 + 0xab8))(plVar19,&local_228),
                  CONCAT44(uStack_224,local_228) == 0)))))))) goto LAB_1437ecbd4;
          }
          if (fVar37 < *(float *)(lVar27 + 0x174)) {
            puVar17 = (uint *)(lVar27 + 0x38);
            uVar28 = *(uint *)(lVar27 + 0x50);
            if (uVar28 == 0) {
              uVar23 = 1;
              uVar30 = 0;
              iVar36 = 0;
              uVar11 = 0;
            }
            else {
              puVar14 = *(uint **)(lVar27 + 0x48);
              if (*(uint **)(lVar27 + 0x48) == (uint *)0x0) {
                puVar14 = puVar17;
              }
              uVar11 = *puVar14;
              if (uVar11 == 0) {
                iVar36 = uVar28 + 0x1e;
                if (-1 < (int)(uVar28 - 1)) {
                  iVar36 = uVar28 - 1;
                }
                uVar30 = 0;
                uVar23 = (ulonglong)(uint)(iVar36 >> 5);
                if (iVar36 >> 5 < 1) {
                  uVar23 = uVar30;
                }
                iVar36 = 0;
                do {
                  if (uVar23 == uVar30) goto LAB_1437ecbd4;
                  iVar36 = iVar36 + 0x20;
                  uVar11 = puVar14[uVar30 + 1];
                  uVar30 = uVar30 + 1;
                } while (uVar11 == 0);
              }
              else {
                uVar30 = 0;
                iVar36 = 0;
              }
              uVar23 = (ulonglong)(-uVar11 & uVar11);
              uVar1 = uVar23 * 2 + 1;
              lVar31 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              uVar11 = (iVar36 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
              if ((int)uVar28 <= (int)uVar11) {
                uVar11 = uVar28;
              }
            }
            if (uVar11 != uVar28) {
              uVar25 = 0xffffffff;
              local_268 = (ulonglong)uVar28;
              do {
                if (*(char *)(*(longlong *)(lVar27 + 0x28) + 0x40 + (longlong)(int)uVar11 * 0x58) ==
                    '\0') {
                  lVar31 = *(longlong *)(lVar27 + 0x28) + (longlong)(int)uVar11 * 0x58;
                  if ((((((*(int *)(lVar31 + 0x34) != 0) &&
                         (uVar28 = *(uint *)(lVar31 + 0x30), -1 < (int)uVar28)) &&
                        ((int)uVar28 < DAT_14c9647dc)) &&
                       ((plVar19 = (longlong *)
                                   ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
                        plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)(lVar31 + 0x34))))
                       ) && (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
                             (lVar24 = *plVar19, lVar24 != 0)))) &&
                     ((((*(int *)(lVar31 + 0x4c) == 0 ||
                        (uVar28 = *(uint *)(lVar31 + 0x48), (int)uVar28 < 0)) ||
                       (DAT_14c9647dc <= (int)uVar28)) ||
                      (((((plVar19 = (longlong *)
                                     ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8))
                          , plVar19 == (longlong *)0x0 ||
                          ((int)plVar19[2] != *(int *)(lVar31 + 0x4c))) ||
                         ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) ||
                        ((*plVar19 == 0 || (*(longlong *)(lVar24 + 0x1c8) == 0)))) ||
                       ((*(longlong *)(*plVar19 + 0x1c8) == 0 ||
                        (cVar9 = FUN_1414a8c54(), param_1 = local_270, cVar9 == '\0')))))))) {
                    uVar1 = local_f8;
                    lVar31 = *(longlong *)(lVar24 + 0x1c8);
                    if (lVar31 == 0) {
                      uVar10 = (undefined4)DAT_14c8464f0;
                      uVar38 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                      pdVar20 = (double *)&DAT_14c8464e0;
                    }
                    else {
                      uVar10 = (undefined4)*(undefined8 *)(lVar31 + 0x270);
                      uVar38 = (undefined4)((ulonglong)*(undefined8 *)(lVar31 + 0x270) >> 0x20);
                      pdVar20 = (double *)(lVar31 + 0x260);
                    }
                    dVar43 = 1.79769313486232e+308;
                    if ((longlong)(int)param_1[0x37] != 0) {
                      pdVar15 = (double *)param_1[0x36];
                      pdVar13 = pdVar15 + (longlong)(int)param_1[0x37] * 3;
                      dVar43 = 1.79769313486232e+308;
                      do {
                        dVar44 = pdVar15[2] - (double)CONCAT44(uVar38,uVar10);
                        dVar44 = dVar44 * dVar44 +
                                 (pdVar15[1] - pdVar20[1]) * (pdVar15[1] - pdVar20[1]) +
                                 (*pdVar15 - *pdVar20) * (*pdVar15 - *pdVar20);
                        if (dVar43 <= dVar44) {
                          dVar44 = dVar43;
                        }
                        dVar43 = dVar44;
                        pdVar15 = pdVar15 + 3;
                      } while (pdVar15 != pdVar13);
                    }
                    if (dVar6 * dVar6 < dVar43) {
                      lVar31 = (longlong)(int)local_f8;
                      uVar28 = (int)local_f8 + 1;
                      local_f8 = CONCAT44(local_f8._4_4_,uVar28);
                      if (local_f8._4_4_ < uVar28) {
                        local_258 = puVar17;
                        FUN_1478dc29e(local_200,uVar1 & 0xffffffff);
                        puVar17 = local_258;
                      }
                      puVar16 = local_100;
                      if (local_100 == (undefined1 *)0x0) {
                        puVar16 = local_200;
                      }
                      *(longlong *)(puVar16 + lVar31 * 8) = lVar24;
                      param_1 = local_270;
                    }
                  }
                }
                uVar25 = uVar25 & ~(uint)uVar23;
                puVar14 = *(uint **)(lVar27 + 0x48);
                if (*(uint **)(lVar27 + 0x48) == (uint *)0x0) {
                  puVar14 = puVar17;
                }
                uVar28 = *(uint *)(lVar27 + 0x50);
                iVar26 = (int)uVar30;
                lVar31 = (longlong)iVar26;
                uVar11 = puVar14[lVar31] & uVar25;
                if (uVar11 == 0) {
                  iVar32 = uVar28 + 0x1e;
                  if (-1 < (int)(uVar28 - 1)) {
                    iVar32 = uVar28 - 1;
                  }
                  iVar32 = iVar32 >> 5;
                  iVar36 = iVar36 + 0x20;
                  iVar35 = iVar32;
                  if (iVar32 < iVar26) {
                    iVar35 = iVar26;
                  }
                  if (iVar26 < iVar32) {
                    lVar24 = 0;
                    do {
                      uVar11 = puVar14[lVar31 + lVar24 + 1];
                      if (uVar11 != 0) {
                        uVar30 = (ulonglong)(iVar26 + (int)lVar24 + 1);
                        uVar25 = 0xffffffff;
                        goto LAB_1437ece3d;
                      }
                      iVar36 = iVar36 + 0x20;
                      lVar24 = lVar24 + 1;
                    } while (iVar35 - lVar31 != lVar24);
                    uVar25 = 0xffffffff;
                    iVar26 = iVar35;
                  }
                  uVar30 = (ulonglong)(iVar26 + 1);
                  param_1 = local_270;
                  uVar11 = uVar28;
                }
                else {
LAB_1437ece3d:
                  uVar23 = (ulonglong)(-uVar11 & uVar11);
                  uVar1 = uVar23 * 2 + 1;
                  lVar31 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                    }
                  }
                  uVar11 = (iVar36 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                  if ((int)uVar28 <= (int)uVar11) {
                    uVar11 = uVar28;
                  }
                }
              } while (uVar11 != (uint)local_268);
            }
          }
        }
LAB_1437ecbd4:
        plVar22 = (longlong *)*plVar22;
      } while (plVar22 != (longlong *)0x0);
      lVar27 = (longlong)(int)local_f8;
      puVar16 = local_200;
      if (local_100 != (undefined1 *)0x0) {
        puVar16 = local_100;
      }
      if (lVar27 != 0) {
        lVar31 = 0;
        do {
          (**(code **)(*param_1 + 0xa0))(param_1,*(undefined8 *)(puVar16 + lVar31),1);
          lVar31 = lVar31 + 8;
        } while (lVar27 * 8 != lVar31);
      }
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (0 < (int)param_1[0x12]) {
    fVar37 = 0.0;
    uVar10 = 0;
    uVar38 = 0;
    for (puVar18 = (undefined8 *)param_1[0xd]; puVar18 != (undefined8 *)0x0;
        puVar18 = (undefined8 *)*puVar18) {
      lVar27 = puVar18[2];
      if (((*(int *)(lVar27 + 0x110) != 0) && (uVar28 = *(uint *)(lVar27 + 0x10c), -1 < (int)uVar28)
          ) && (((((int)uVar28 < DAT_14c9647dc &&
                  (((plVar22 = (longlong *)
                               ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
                    plVar22 != (longlong *)0x0 && ((int)plVar22[2] == *(int *)(lVar27 + 0x110))) &&
                   ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)))) &&
                 ((lVar31 = *plVar22, lVar31 != 0 && (*(longlong *)(lVar31 + 0xa8) != 0)))) &&
                ((*(longlong *)(lVar31 + 0xbe8) != 0 || (lVar31 = FUN_14092a406(), lVar31 != 0))))))
      {
        iVar36 = *(int *)(lVar27 + 0x50);
        if (iVar36 == 0) {
          uVar30 = 1;
          uVar23 = 0;
          iVar26 = 0;
          iVar32 = 0;
        }
        else {
          puVar17 = *(uint **)(lVar27 + 0x48);
          if (*(uint **)(lVar27 + 0x48) == (uint *)0x0) {
            puVar17 = (uint *)(lVar27 + 0x38);
          }
          uVar28 = *puVar17;
          if (uVar28 == 0) {
            iVar26 = iVar36 + 0x1e;
            if (-1 < iVar36 + -1) {
              iVar26 = iVar36 + -1;
            }
            uVar23 = 0;
            uVar30 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar30 = uVar23;
            }
            iVar32 = 0;
            do {
              if (uVar30 == uVar23) goto LAB_1437ed1e4;
              iVar32 = iVar32 + 0x20;
              uVar28 = puVar17[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar28 == 0);
          }
          else {
            uVar23 = 0;
            iVar32 = 0;
          }
          uVar30 = (ulonglong)(-uVar28 & uVar28);
          uVar1 = uVar30 * 2 + 1;
          lVar31 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar31 == 0; lVar31 = lVar31 + -1) {
            }
          }
          iVar26 = (iVar32 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
          if (iVar36 <= iVar26) {
            iVar26 = iVar36;
          }
        }
        if (iVar26 == iVar36) {
LAB_1437ed1e4:
          fVar39 = 0.0;
        }
        else {
          puVar17 = (uint *)(lVar27 + 0x38);
          if (*(uint **)(lVar27 + 0x48) != (uint *)0x0) {
            puVar17 = *(uint **)(lVar27 + 0x48);
          }
          iVar35 = iVar36 + 0x1e;
          if (-1 < iVar36 + -1) {
            iVar35 = iVar36 + -1;
          }
          iVar35 = iVar35 >> 5;
          uVar28 = 0xffffffff;
          fVar39 = 0.0;
          do {
            if (*(char *)(*(longlong *)(lVar27 + 0x28) + 0x40 + (longlong)iVar26 * 0x58) == '\0') {
              fVar39 = fVar39 + *(float *)(*(longlong *)(lVar27 + 0x28) + 0x44 +
                                          (longlong)iVar26 * 0x58);
            }
            uVar28 = uVar28 & ~(uint)uVar30;
            iVar26 = (int)uVar23;
            lVar31 = (longlong)iVar26;
            uVar11 = puVar17[lVar31] & uVar28;
            if (uVar11 == 0) {
              iVar29 = iVar35;
              if (iVar35 < iVar26) {
                iVar29 = iVar26;
              }
              if (iVar35 <= iVar26) break;
              lVar24 = 0;
              while( true ) {
                iVar32 = iVar32 + 0x20;
                uVar11 = puVar17[lVar31 + lVar24 + 1];
                if (uVar11 != 0) break;
                lVar24 = lVar24 + 1;
                if (iVar29 - lVar31 == lVar24) goto LAB_1437ed1b0;
              }
              uVar23 = (ulonglong)(iVar26 + (int)lVar24 + 1);
              uVar28 = 0xffffffff;
            }
            uVar30 = (ulonglong)(-uVar11 & uVar11);
            uVar1 = uVar30 * 2 + 1;
            lVar31 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            iVar26 = (iVar32 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
          } while (iVar26 < iVar36);
        }
LAB_1437ed1b0:
        auVar42._0_4_ = ~-(uint)(0.0 < fVar39) & (uint)fVar37;
        auVar42._4_4_ = 0;
        auVar42._8_4_ = uVar10;
        auVar42._12_4_ = uVar38;
        auVar42 = auVar42 | ZEXT416((uint)(fVar37 + fVar39) & -(uint)(0.0 < fVar39));
        fVar37 = auVar42._0_4_;
        uVar10 = auVar42._8_4_;
        uVar38 = auVar42._12_4_;
        param_1 = local_270;
      }
    }
    if (0.01 < ABS(*(float *)((longlong)param_1 + 0x664) - fVar37)) {
      *(float *)((longlong)param_1 + 0x664) = fVar37;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001437ec981:
  FUN_140929f1a(plVar22);
  puVar18 = (undefined8 *)*plVar22;
  if (puVar18 == (undefined8 *)0x0) goto LAB_1437ec991;
  goto LAB_1437ec976;
}



// FUNCTION 1437ed2aa FUN_1437ed2aa body=79 status=ok
// SIG undefined FUN_1437ed2aa(void)

void FUN_1437ed2aa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 400);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1437ed2fa FUN_1437ed2fa body=136 status=ok
// SIG undefined FUN_1437ed2fa(void)

void FUN_1437ed2fa(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 == 0) {
    uVar4 = FUN_140927942();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x38) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x30));
    }
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    return;
  }
  return;
}



// FUNCTION 1437ed382 FUN_1437ed382 body=7 status=ok
// SIG undefined FUN_1437ed382(void)

undefined1 FUN_1437ed382(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x668);
}



// FUNCTION 1437ed3a0 FUN_1437ed3a0 body=11 status=ok
// SIG undefined FUN_1437ed3a0(void)

bool FUN_1437ed3a0(longlong param_1)

{
  return *(int *)(param_1 + 0x7b8) != 0;
}



// FUNCTION 1437ed3ac FUN_1437ed3ac body=721 status=ok
// SIG undefined FUN_1437ed3ac(void)

ulonglong FUN_1437ed3ac(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    uVar6 = FUN_1407be81e();
    plVar7 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_1407be81e();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
        param_1 = (undefined8 *)*param_1;
        (**(code **)(*plVar8 + 0x10))(plVar8,&local_58);
        lVar16 = local_58;
        if ((longlong)local_50 == 0) {
          uVar17 = 0;
        }
        else {
          lVar14 = (longlong)local_50 * 8;
          lVar19 = 0;
          do {
            plVar7 = *(longlong **)(lVar16 + lVar19);
            if ((plVar7 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*plVar7 + 0xa10))(plVar7,*param_1), cVar4 != '\0')) {
              uVar17 = CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
              goto LAB_1437ed64e;
            }
            lVar19 = lVar19 + 8;
          } while (lVar14 != lVar19);
          uVar17 = 0;
        }
LAB_1437ed64e:
        if (local_58 != 0) {
          FUN_1400020a8(local_58);
        }
        goto LAB_1437ed4fb;
      }
    }
    iVar2 = (int)param_2[0x4d];
    if (iVar2 == 0) {
      uVar17 = 0;
      uVar18 = 1;
      iVar5 = 0;
      iVar12 = 0;
    }
    else {
      puVar9 = (uint *)param_2[0x4c];
      if ((uint *)param_2[0x4c] == (uint *)0x0) {
        puVar9 = (uint *)(param_2 + 0x4a);
      }
      uVar13 = *puVar9;
      if (uVar13 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iVar12 = 0;
        do {
          if (uVar18 == uVar17) goto LAB_1437ed4f9;
          iVar12 = iVar12 + 0x20;
          uVar13 = puVar9[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar17 = 0;
        iVar12 = 0;
      }
      uVar18 = (ulonglong)(-uVar13 & uVar13);
      uVar15 = uVar18 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar15 = 0xffffffff;
      local_60 = param_1;
      do {
        lVar16 = *(longlong *)(param_2[0x48] + (longlong)iVar5 * 0x10);
        if (lVar16 != 0) {
          lVar14 = FUN_1407be990();
          if (((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) &&
             (cVar4 = (**(code **)local_60[1])(((undefined8 *)local_60[1])[1],lVar16), cVar4 != '\0'
             )) {
            uVar17 = CONCAT71((int7)(uVar15 >> 8),1);
            goto LAB_1437ed4fb;
          }
        }
        uVar13 = (uint)uVar15 & ~(uint)uVar18;
        uVar15 = (ulonglong)uVar13;
        puVar9 = (uint *)param_2[0x4c];
        if ((uint *)param_2[0x4c] == (uint *)0x0) {
          puVar9 = (uint *)(param_2 + 0x4a);
        }
        iVar3 = (int)param_2[0x4d];
        iVar5 = (int)uVar17;
        lVar16 = (longlong)iVar5;
        uVar13 = puVar9[lVar16] & uVar13;
        if (uVar13 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar5) {
            iVar11 = iVar5;
          }
          if (iVar5 < iVar10) {
            lVar14 = 0;
            do {
              uVar13 = puVar9[lVar16 + lVar14 + 1];
              if (uVar13 != 0) {
                uVar17 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                uVar15 = 0xffffffff;
                goto LAB_1437ed5f9;
              }
              iVar12 = iVar12 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar11 - lVar16 != lVar14);
            uVar15 = 0xffffffff;
            iVar5 = iVar11;
          }
          uVar17 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_1437ed5f9:
          uVar18 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar18 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
  }
LAB_1437ed4f9:
  uVar17 = 0;
LAB_1437ed4fb:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 1437ed6cc FUN_1437ed6cc body=32 status=ok
// SIG undefined FUN_1437ed6cc(void)

undefined8 FUN_1437ed6cc(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0xf8))(param_2,param_1);
  return param_1;
}



// FUNCTION 1437ed6fa FUN_1437ed6fa body=53 status=ok
// SIG undefined FUN_1437ed6fa(void)

void FUN_1437ed6fa(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141801206(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1437ed730 FUN_1437ed730 body=1425 status=ok
// SIG undefined FUN_1437ed730(void)

void FUN_1437ed730(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar14 = *param_2;
  if (lVar14 == 0) goto LAB_1437ed989;
  lVar3 = *param_1;
  uVar11 = FUN_14030fc70(lVar3,lVar14);
  piVar12 = &DAT_14c9485f0;
  if (*(int **)(lVar14 + 8) != (int *)0x0) {
    piVar12 = *(int **)(lVar14 + 8);
  }
  if (((*piVar12 == 0) || (iVar23 = piVar12[1], iVar23 == 0)) || (*piVar12 == DAT_14c948000)) {
LAB_1437edaa3:
    local_50 = DAT_14c948620;
    local_58 = DAT_14c948618;
  }
  else {
    if ((iVar23 < 2) && (piVar12[9] < 1)) {
      puVar13 = (ulonglong *)(piVar12 + 2);
    }
    else {
      puVar13 = *(ulonglong **)(piVar12 + 6);
    }
    if (iVar23 < 1) goto LAB_1437edaa3;
    local_50 = (uint)puVar13[1];
    local_58 = *puVar13;
  }
  plVar1 = (longlong *)(lVar3 + 0x390);
  if (*(int *)(lVar3 + 0x3c4) == 0) {
    iVar23 = *(int *)(lVar3 + 0x398);
    *(int *)(lVar3 + 0x398) = iVar23 + 1;
    if (*(int *)(lVar3 + 0x39c) == iVar23) {
      FUN_1447711aa(plVar1,iVar23);
    }
    iVar22 = *(int *)(lVar3 + 0x3b8);
    if (iVar22 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar8 = iVar22 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    lVar18 = lVar3 + 0x3a0;
    iVar17 = iVar22 + 1;
    iVar21 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar21 = iVar22;
    }
    if (iVar21 >> 5 == iVar8) {
      *(int *)(lVar3 + 0x3b8) = iVar17;
    }
    else {
      if (*(int *)(lVar3 + 0x3bc) <= iVar22) {
        iVar8 = iVar22;
        if (iVar22 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar9 = iVar22 + 0x20U >> 5;
          if (*(int *)(lVar3 + 0x3bc) + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar9) {
              uVar24 = uVar9;
            }
          }
          else {
            uVar24 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar24 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar26 = (uint)(uVar15 + 0xf);
              if (uVar24 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar19 = (ulonglong)(uVar26 & 0xfffffff0);
                if (uVar19 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar26 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar16) {
                    uVar20 = (ulonglong)bVar16;
                  }
                  uVar25 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_1437edb64;
                    lVar14 = uVar20 + 1 + uVar25;
                    uVar25 = uVar25 - 1;
                  } while (lVar14 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar19 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar8 = *(int *)(lVar3 + 0x3b8);
            }
          }
LAB_1437edb64:
          iVar10 = (int)(uVar15 >> 2);
          iVar17 = -0x20;
          if ((int)uVar9 <= iVar10) {
            iVar17 = iVar10 << 5;
          }
        }
        *(int *)(lVar3 + 0x3bc) = iVar17;
        FUN_1446efbd8(lVar18,iVar8);
        iVar17 = *(int *)(lVar3 + 0x3b8) + 1;
      }
      iVar8 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar8 = iVar17;
      }
      *(int *)(lVar3 + 0x3b8) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar14 = *(longlong *)(lVar3 + 0x3b0);
        if (*(longlong *)(lVar3 + 0x3b0) == 0) {
          lVar14 = lVar18;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar8 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar23;
    if (*(longlong *)(lVar3 + 0x3b0) != 0) {
      lVar18 = *(longlong *)(lVar3 + 0x3b0);
    }
    bVar16 = (byte)iVar22 & 0x1f;
    puVar2 = (uint *)(lVar18 + (longlong)(iVar21 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar23 = *(int *)(lVar3 + 0x3c0);
    lVar14 = (longlong)iVar23;
    iVar22 = *(int *)(*(longlong *)(lVar3 + 0x390) + 4 + lVar14 * 0x20);
    *(int *)(lVar3 + 0x3c0) = iVar22;
    iVar8 = *(int *)(lVar3 + 0x3c4) + -1;
    *(int *)(lVar3 + 0x3c4) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*(longlong *)(lVar3 + 0x390) + (longlong)iVar22 * 0x20) = 0xffffffff;
    }
  }
  iVar22 = 1;
  lVar18 = lVar3 + 0x3a0;
  if (*(longlong *)(lVar3 + 0x3b0) != 0) {
    lVar18 = *(longlong *)(lVar3 + 0x3b0);
  }
  iVar8 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar8 = iVar23;
  }
  puVar2 = (uint *)(lVar18 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar23 & 0x1f);
  lVar18 = *(longlong *)(lVar3 + 0x390);
  lVar14 = lVar14 * 0x20;
  *(uint *)(lVar18 + 8 + lVar14) = local_50;
  *(ulonglong *)(lVar18 + lVar14) = local_58;
  *(undefined8 *)(lVar18 + 0x10 + lVar14) = uVar11;
  *(undefined4 *)(lVar18 + 0x18 + lVar14) = 0xffffffff;
  uVar15 = local_58;
  if (local_50 != 0) {
    uVar9 = local_50 >> 0xd ^ (int)local_58 - local_50;
    uVar24 = uVar9 << 8 ^ (-0x61c88647 - local_50) - uVar9;
    uVar26 = uVar24 >> 0xd ^ (local_50 - uVar9) - uVar24;
    uVar9 = uVar26 >> 0xc ^ (uVar9 - uVar24) - uVar26;
    uVar24 = uVar9 << 0x10 ^ (uVar24 - uVar26) - uVar9;
    uVar26 = uVar24 >> 5 ^ (uVar26 - uVar9) - uVar24;
    uVar9 = uVar26 >> 3 ^ (uVar9 - uVar24) - uVar26;
    uVar24 = uVar9 << 10 ^ (uVar24 - uVar26) - uVar9;
    uVar15 = (ulonglong)(uVar24 >> 0xf ^ uVar26 - (uVar9 + uVar24));
  }
  puVar27 = (undefined4 *)(lVar18 + lVar14);
  if (*(int *)(lVar3 + 0x398) - *(int *)(lVar3 + 0x3c4) == 1) {
    uVar9 = 1;
  }
  else {
    iVar8 = FUN_14030fec8(plVar1,uVar15 & 0xffffffff,puVar27);
    if (iVar8 != -1) {
      lVar14 = *plVar1;
      uVar4 = *puVar27;
      uVar5 = puVar27[1];
      uVar6 = puVar27[2];
      uVar7 = puVar27[3];
      *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar8 * 0x20) = *(undefined8 *)(puVar27 + 4);
      puVar27 = (undefined4 *)(lVar14 + (longlong)iVar8 * 0x20);
      *puVar27 = uVar4;
      puVar27[1] = uVar5;
      puVar27[2] = uVar6;
      puVar27[3] = uVar7;
      FUN_147e27a74(plVar1,iVar23);
      goto LAB_1437ed989;
    }
    uVar9 = *(int *)(lVar3 + 0x398) - *(int *)(lVar3 + 0x3c4);
    if (3 < uVar9) {
      uVar19 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar22 = 1 << ((byte)lVar14 & 0x1f);
    }
  }
  if (((int)uVar9 < 1) || (iVar22 <= *(int *)(lVar3 + 0x3d8))) {
    uVar9 = *(int *)(lVar3 + 0x3d8) - 1U & (uint)uVar15;
    puVar27[7] = uVar9;
    lVar14 = *(longlong *)(lVar3 + 0x3d0);
    if (*(longlong *)(lVar3 + 0x3d0) == 0) {
      lVar14 = lVar3 + 0x3c8;
    }
    puVar27[6] = *(undefined4 *)
                  (lVar14 + ((longlong)*(int *)(lVar3 + 0x3d8) - 1U & (longlong)(int)uVar9) * 4);
    lVar14 = *(longlong *)(lVar3 + 0x3d0);
    if (*(longlong *)(lVar3 + 0x3d0) == 0) {
      lVar14 = lVar3 + 0x3c8;
    }
    *(int *)(lVar14 + ((longlong)*(int *)(lVar3 + 0x3d8) - 1U & (longlong)(int)uVar9) * 4) = iVar23;
  }
  else {
    *(int *)(lVar3 + 0x3d8) = iVar22;
    FUN_141801368(plVar1);
  }
LAB_1437ed989:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437edccc FUN_1437edccc body=116 status=ok
// SIG undefined FUN_1437edccc(void)

void FUN_1437edccc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 1437edd40 FUN_1437edd40 body=291 status=ok
// SIG undefined FUN_1437edd40(void)

undefined8 FUN_1437edd40(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    return 1;
  }
  lVar2 = *param_1;
  uVar5 = FUN_1401b0f18();
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 1;
  }
  uVar5 = FUN_1401b0f18();
  plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
  if (plVar6 == plVar7) {
    return 1;
  }
  if (plVar7 == (longlong *)0x0) {
    return 1;
  }
  lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7);
  if (lVar8 == 0) {
    return 1;
  }
  plVar6 = (longlong *)(lVar2 + 0x28);
  uVar3 = FUN_140b95084(lVar8 + 0xb8);
  iVar4 = FUN_140b95012(plVar6,uVar3,lVar8 + 0xb8);
  if (iVar4 == -1) {
    return 1;
  }
  lVar8 = (longlong)iVar4 * 0x58 + *plVar6;
  if (lVar8 == -0x18 || lVar8 == 0) {
    return 1;
  }
  if (*(int *)(lVar8 + 0x4c) != 0) {
    uVar1 = *(uint *)(lVar8 + 0x48);
    lVar9 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1437ede35;
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == *(int *)(lVar8 + 0x4c) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))))
    {
      lVar9 = *plVar6;
      goto LAB_1437ede35;
    }
  }
  lVar9 = 0;
LAB_1437ede35:
  if (lVar9 == *(longlong *)param_1[1]) {
    plVar6 = *(longlong **)(lVar2 + 0x10);
    (**(code **)(*plVar6 + 0xa0))(plVar6,param_2,1);
  }
  return 1;
}



// FUNCTION 1437ede70 FUN_1437ede70 body=29 status=ok
// SIG undefined FUN_1437ede70(void)

undefined8 FUN_1437ede70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437ede94 FUN_1437ede94 body=561 status=ok
// SIG undefined FUN_1437ede94(void)

void FUN_1437ede94(longlong *param_1,ulonglong param_2,int *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  int local_58 [2];
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *param_3;
  lVar7 = *param_1;
  uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_60 = param_2;
  lVar5 = FUN_141015e02(lVar7,uVar3);
  if (lVar5 == 0) {
    FUN_141016232(lVar7,local_58);
    *local_50 = param_2;
    local_50[1] = 0;
    local_50[2] = 0;
    *(undefined4 *)(local_50 + 3) = 0xffffffff;
    cVar2 = FUN_14101618c(lVar7,uVar3,local_50,local_58);
    if ((cVar2 == '\0') &&
       (cVar2 = FUN_141015e74(lVar7,*(int *)(lVar7 + 0x408) - *(int *)(lVar7 + 0x42c)),
       cVar2 == '\0')) {
      uVar6 = (longlong)(int)uVar3 & (longlong)*(int *)(lVar7 + 0x478) - 1U;
      iVar8 = (int)uVar6;
      *(int *)((longlong)local_50 + 0x1c) = iVar8;
      lVar5 = *(longlong *)(lVar7 + 0x470);
      if (*(longlong *)(lVar7 + 0x470) == 0) {
        lVar5 = lVar7 + 0x430;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)(lVar5 + ((longlong)*(int *)(lVar7 + 0x478) - 1U & uVar6) * 4);
      lVar5 = *(longlong *)(lVar7 + 0x470);
      if (*(longlong *)(lVar7 + 0x470) == 0) {
        lVar5 = lVar7 + 0x430;
      }
      *(int *)(lVar5 + ((longlong)iVar8 & (longlong)*(int *)(lVar7 + 0x478) - 1U) * 4) = local_58[0]
      ;
    }
    lVar5 = *(longlong *)(lVar7 + 0x400);
    if (*(longlong *)(lVar7 + 0x400) == 0) {
      lVar5 = lVar7;
    }
    lVar5 = lVar5 + (longlong)local_58[0] * 0x20;
  }
  piVar9 = (int *)(lVar5 + 8);
  puVar1 = (uint *)(lVar5 + 0x10);
  cVar2 = FUN_141015dbc(puVar1);
  if (cVar2 == '\0') {
    if (*(int *)(lVar5 + 0xc) <= iVar4) goto LAB_1437ee044;
    iVar8 = *piVar9;
    if (iVar4 <= *piVar9) {
      iVar8 = iVar4;
    }
    *piVar9 = iVar8;
  }
  else {
    *piVar9 = 0;
  }
  *(int *)(lVar5 + 0xc) = iVar4;
  if (*(longlong *)param_1[1] == 0) {
    *puVar1 = 0;
    iVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)param_1[1] + 0xc);
    *puVar1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar8;
      }
    }
  }
  *(int *)(lVar5 + 0x14) = iVar4;
LAB_1437ee044:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437ee0c6 FUN_1437ee0c6 body=271 status=ok
// SIG undefined FUN_1437ee0c6(void)

void FUN_1437ee0c6(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  plVar1 = DAT_14cb1b240;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e170a0;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14ab66e00;
  (**(code **)(*plVar1 + 200))(plVar1,&local_28);
  if (local_20 != 0) {
    if (local_28 == (undefined8 *)0x0) goto LAB_1437ee19d;
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1437ee19d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ee1d6 FUN_1437ee1d6 body=29 status=ok
// SIG undefined FUN_1437ee1d6(void)

undefined8 FUN_1437ee1d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437ee208 FUN_1437ee208 body=85 status=ok
// SIG undefined FUN_1437ee208(void)

void FUN_1437ee208(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab66e00;
  return;
}



// FUNCTION 1437ee25e FUN_1437ee25e body=85 status=ok
// SIG undefined FUN_1437ee25e(void)

void FUN_1437ee25e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab66e00;
  return;
}



// FUNCTION 1437ee2b4 FUN_1437ee2b4 body=118 status=ok
// SIG undefined FUN_1437ee2b4(void)

void FUN_1437ee2b4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab66e00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437ee31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437ee336 FUN_1437ee336 body=23 status=ok
// SIG undefined FUN_1437ee336(void)

undefined1 FUN_1437ee336(void)

{
  FUN_1447f69b6(&DAT_14cb1b248);
  return 1;
}



// FUNCTION 1437ee34e FUN_1437ee34e body=68 status=ok
// SIG undefined FUN_1437ee34e(void)

undefined8 * FUN_1437ee34e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab67020;
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



// FUNCTION 1437ee392 FUN_1437ee392 body=91 status=ok
// SIG undefined FUN_1437ee392(void)

bool FUN_1437ee392(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1437ee3c2;
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
LAB_1437ee3c2:
  return lVar6 == param_2;
}



// FUNCTION 1437ee40e FUN_1437ee40e body=83 status=ok
// SIG undefined FUN_1437ee40e(void)

undefined8 FUN_1437ee40e(longlong param_1)

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



// FUNCTION 1437ee4be FUN_1437ee4be body=12 status=ok
// SIG undefined FUN_1437ee4be(void)

void FUN_1437ee4be(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437ee4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437ee4ca FUN_1437ee4ca body=29 status=ok
// SIG undefined FUN_1437ee4ca(void)

undefined8 FUN_1437ee4ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437ee50a FUN_1437ee50a body=12 status=ok
// SIG undefined FUN_1437ee50a(void)

void FUN_1437ee50a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437ee513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437ee516 FUN_1437ee516 body=29 status=ok
// SIG undefined FUN_1437ee516(void)

undefined8 FUN_1437ee516(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437ee533 FUN_1437ee533 body=2848 status=ok
// SIG undefined FUN_1437ee533(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437ee533(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_9c;
  code *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (code *)0x149fca2ba;
  uStack_90 = 0xd;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb1ae70 = (ulonglong)uVar3;
  local_98 = (code *)0x800000014ab653b0;
  local_9c = 8;
  uStack_90 = FUN_14577453c();
  uStack_8c._0_1_ = 1;
  FUN_14641a8e8(&local_98);
  local_98 = (code *)0x14a171d3e;
  uStack_90 = 5;
  uStack_8c = (uint)uStack_8c._1_3_ << 8;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb1ae80 = (ulonglong)uVar3;
  local_98 = (code *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_a8 = 0;
  FUN_140bd5914(&DAT_14cb1ae88,L"gbx.Actor.LimitAccumulation",&local_98,
                L"Whether to always accumulate GbxActors or limit it to only when done via the GbxActor system.  1 = limit, 0 = always"
               );
  atexit(FUN_1437ea46b);
  _DAT_14cb1aea8 = &LAB_1437ea4b0;
  _DAT_14cb1aeb0 = 0x447a003b;
  DAT_14cb1aeb4 = 1;
  DAT_14cb1aea0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb1aea0;
  atexit((_func_5014 *)&LAB_1437ea4b5);
  _DAT_14cb1aec0 = 0;
  uRam000000014cb1aec8 = 0;
  _DAT_14cb1aed0 = 0;
  DAT_14cb1aed8 = 0;
  uRam000000014cb1aee0 = 0;
  FUN_1446ddda2(&DAT_14cb1aec0,"gbxactor",0);
  atexit((_func_5014 *)&LAB_1437ea4e9);
  _DAT_14cb1aee8 = 0;
  uRam000000014cb1aef0 = 0;
  _DAT_14cb1aef8 = 0;
  DAT_14cb1af00 = 0;
  uRam000000014cb1af08 = 0;
  FUN_1446ddda2(&DAT_14cb1aee8,"parent",0);
  atexit((_func_5014 *)&LAB_1437ea5ab);
  _DAT_14cb1af10 = 0;
  uRam000000014cb1af18 = 0;
  _DAT_14cb1af20 = 0;
  DAT_14cb1af28 = 0;
  uRam000000014cb1af30 = 0;
  FUN_1446ddda2(&DAT_14cb1af10,"actorstateschema",0);
  atexit((_func_5014 *)&LAB_1437ea5bc);
  _DAT_14cb1af38 = 0;
  uRam000000014cb1af40 = 0;
  _DAT_14cb1af48 = 0;
  DAT_14cb1af50 = 0;
  uRam000000014cb1af58 = 0;
  FUN_1446ddda2(&DAT_14cb1af38,"source",0);
  atexit((_func_5014 *)&LAB_1437ea5cd);
  _DAT_14cb1af60 = 0;
  uRam000000014cb1af68 = 0;
  _DAT_14cb1af70 = 0;
  DAT_14cb1af78 = 0;
  uRam000000014cb1af80 = 0;
  FUN_1446ddda2(&DAT_14cb1af60,"NexusConfigStore_GbxActor",0);
  atexit((_func_5014 *)&LAB_1437ea5de);
  _DAT_14cb1af90 = 0;
  LOCK();
  DAT_14cb1af88 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1437ea92a);
  local_98 = (code *)0x25244f8adc384b6;
  uStack_90 = 0xae0f301c;
  uStack_8c = 0xf683fcf;
  _DAT_14cb1af98 = 0xadc384b6;
  uRam000000014cb1af9c = 0x25244f8;
  uRam000000014cb1afa0 = 0xae0f301c;
  uRam000000014cb1afa4 = 0xf683fcf;
  FUN_141005458(&local_98,0,L"SpawnEncounter",0);
  atexit((_func_5014 *)&LAB_1437ea92f);
  FUN_1446f470e(&DAT_14cb1afa8,L"Encounter",1);
  FUN_1446f470e(&DAT_14cb1afb0,L"GlobalSpawner",1);
  _DAT_14cb1afc0 = 0;
  LOCK();
  DAT_14cb1afb8 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1437eaa14);
  local_98 = (code *)0x7aa241036ed614a0;
  uStack_90 = 0xbfbfdc74;
  uStack_8c = 0x48a3d66;
  _DAT_14cb1afd8 = 0x6ed614a0;
  uRam000000014cb1afdc = 0x7aa24103;
  uRam000000014cb1afe0 = 0xbfbfdc74;
  uRam000000014cb1afe4 = 0x48a3d66;
  FUN_141005458(&local_98,0,L"SpawnerComponent",0);
  atexit((_func_5014 *)&LAB_1437eaa19);
  local_98 = (code *)0x14a18e448;
  uStack_90 = 9;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb1afe8 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab5ce70;
  uStack_90 = 9;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1aff0 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab6727f;
  uStack_90 = 0x16;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1aff8 = (ulonglong)uVar3;
  local_98 = (code *)CONCAT71(local_98._1_7_,1);
  local_a8 = 0;
  FUN_140bd5914(&DAT_14cb1b000,L"gbx.Spawn.PreloadActorDefs",&local_98,
                L"If true, Spawners will automatically begin streaming their ActorDefs when loaded. Otherwise, they\'ll begin streaming their ActorDefs as soon as they are ready to spawn."
               );
  atexit(FUN_1437ead26);
  local_98 = (code *)0x14ab663a4;
  uStack_90 = 10;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b018 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab663af;
  uStack_90 = 9;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b020 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab663b9;
  uStack_90 = 10;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb1b028 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab663c4;
  uStack_90 = 7;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b030 = (ulonglong)uVar3;
  local_98 = (code *)0x14a544a8a;
  uStack_90 = 5;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cb1b038 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab663cc;
  uStack_90 = 0xb;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b040 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab663d8;
  uStack_90 = 0x11;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b048 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab663ea;
  uStack_90 = 0xf;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b050 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab663fa;
  uStack_90 = 0x12;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b058 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb1b060,L"OnePlayer",1);
  FUN_1446f470e(&DAT_14cb1b068,L"TwoPlayers",1);
  FUN_1446f470e(&DAT_14cb1b070,L"ThreePlayers",1);
  FUN_1446f470e(&DAT_14cb1b078,L"FourPlayers",1);
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ab66ce0;
  DAT_14cb1afc8 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14ab5d2e0;
  DAT_14cb1afd0 = plVar4;
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
  atexit(FUN_1437eb4b6);
  _DAT_14cb1b088 = &LAB_1437eb513;
  _DAT_14cb1b090 = 0x4426dccd;
  DAT_14cb1b094 = 1;
  DAT_14cb1b080 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb1b080;
  atexit((_func_5014 *)&LAB_1437eb518);
  DAT_14cb1b100 = 0;
  uRam000000014cb1b108 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = (code *)&LAB_1437ede8e;
  local_98 = (code *)&DAT_14011fc1e;
  FUN_1460e04d4(&local_98);
  atexit((_func_5014 *)&LAB_1437eb575);
  local_98 = (code *)0x14ab5d2c0;
  uStack_90 = 10;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b190 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab67346;
  uStack_90 = 10;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b198 = (ulonglong)uVar3;
  local_98 = (code *)0x14a4f4b94;
  uStack_90 = 8;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b1a0 = (ulonglong)uVar3;
  local_98 = (code *)0x149ef4366;
  uStack_90 = 7;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b1a8 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab5d2c0;
  uStack_90 = 10;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b1b0 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab5d2cb;
  uStack_90 = 9;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b1b8 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab66640;
  uStack_90 = 0xc;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b1c0 = (ulonglong)uVar3;
  local_98 = (code *)0x14ab6664d;
  uStack_90 = 0xe;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b1c8 = (ulonglong)uVar3;
  local_98 = (code *)0x14a4f4b94;
  uStack_90 = 8;
  uStack_8c = uStack_8c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cb1b1d0 = (ulonglong)uVar3;
  DAT_14cb1b1d8 = 0;
  DAT_14cb1b1e0 = 0;
  atexit(FUN_1437eb7b5);
  FUN_1446f470e(&DAT_14cb1b1e8,L"GbxAffectsSpawnCost",1);
  FUN_1446f470e(&DAT_14cb1b1f0,L"def_globals_spawn",1);
  DAT_14cb1b218 = 0;
  _DAT_14cb1b220 = 0x400000000;
  atexit((_func_5014 *)&LAB_1437eb7f0);
  local_a8 = 0;
  FUN_141471170(&DAT_14cb1b228,L"gbx.Spawn.MaxAvailabilityChecks",&DAT_14c761fe8,
                L"The maximum number of availability checks to run each frame.");
  atexit(FUN_1437eb8ef);
  local_a8 = 0;
  FUN_1415c789c(&DAT_14cb1b238,L"gbx.Spawn.BudgetScale",&DAT_14c761fec,
                L"Scale for spawn budget to allow for platform-specific configuration and dynamic adjustment based on device profiles."
               );
  atexit(FUN_1437eb934);
  DAT_14cb1b248 = 0;
  _DAT_14cb1b250 = 0;
  _DAT_14cb1b258 = 2;
  atexit(FUN_1437eb979);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_1437ee0c6;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb1b260,10,&local_98);
  local_a8 = 0;
  FUN_14153156c(&DAT_14cb1b268,L"gbx.Spawn.EarlyOutWhenOverBudget",&DAT_14c761ff0,
                L"When enabled, ignore SpawnerStates for spawning when our available SpawnBudget is lower than its minimum SpawnCost."
               );
  atexit(FUN_1437eb9aa);
  local_a8 = 0;
  FUN_1415c789c(&DAT_14cb1b278,L"gbx.Spawn.LongDistanceSpawningCombatCooldown",&DAT_14c761ff4,
                L"Specifies how long after combat before we allow long-distance spawning to resume."
               );
  atexit(FUN_1437eb9ef);
  local_a8 = 0;
  FUN_1412cc41e(&DAT_14cb1b288,L"FSpawnManager",2,0);
  FUN_1446f470e(&DAT_14cb1b298,L"RootComponent",1);
  FUN_1446f470e(&DAT_14cb1b2a0,L"SpawnComponent",1);
  DAT_14cb1b2c8 = 0;
  _DAT_14cb1b2d0 = 0x400000000;
  atexit((_func_5014 *)&LAB_1437ed389);
  _DAT_14cb1b2e0 = 0;
  LOCK();
  DAT_14cb1b2d8 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_1437ed39a);
  DAT_14cb1b308 = 0;
  _DAT_14cb1b310 = 0x400000000;
  atexit((_func_5014 *)&LAB_1437ed67e);
  DAT_14cb1b318 = 0;
  _DAT_14cb1b320 = 0;
  atexit((_func_5014 *)&LAB_1437ed68f);
  DAT_14cb1b348 = 0;
  _DAT_14cb1b350 = 0x400000000;
  atexit((_func_5014 *)&LAB_1437ed6a0);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437ef08d FUN_1437ef08d body=164 status=ok
// SIG undefined FUN_1437ef08d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437ef08d(void)

{
  uint uVar1;
  undefined1 auStack_38 [32];
  char *local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = "AssetRegistry";
  local_10 = 0xd;
  local_c = 0;
  uVar1 = FUN_14001a6c0(&local_18,1);
  _DAT_14cb1b358 = (ulonglong)uVar1;
  _DAT_14cb1b368 = &LAB_1437ef054;
  _DAT_14cb1b370 = 0x44341148;
  DAT_14cb1b374 = 1;
  DAT_14cb1b360 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb1b360;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    atexit((_func_5014 *)&LAB_1437ef059);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1437ef134 FUN_1437ef134 body=83 status=ok
// SIG undefined FUN_1437ef134(void)

undefined8 FUN_1437ef134(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar4 = FUN_14001cc68(*param_2,0x10);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + *param_2;
    UNLOCK();
    lVar3 = *param_2;
    lVar5 = *(longlong *)(param_1 + 0x30);
    do {
      if (lVar2 + lVar3 <= lVar5) break;
      LOCK();
      lVar6 = *(longlong *)(param_1 + 0x30);
      bVar7 = lVar5 == lVar6;
      if (bVar7) {
        *(longlong *)(param_1 + 0x30) = lVar2 + lVar3;
        lVar6 = lVar5;
      }
      UNLOCK();
      lVar5 = lVar6;
    } while (!bVar7);
    LOCK();
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    UNLOCK();
    LOCK();
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 1437ef187 FUN_1437ef187 body=59 status=ok
// SIG undefined FUN_1437ef187(void)

void FUN_1437ef187(void)

{
  FUN_144760e21(DAT_14cb1b3a8,DAT_14cb1b3b0);
  if (DAT_14cb1b3a8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437ef1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb1b380);
  return;
}



// FUNCTION 1437ef1c2 FUN_1437ef1c2 body=59 status=ok
// SIG undefined FUN_1437ef1c2(void)

void FUN_1437ef1c2(void)

{
  FUN_144760e21(DAT_14cb1b3e8,DAT_14cb1b3f0);
  if (DAT_14cb1b3e8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437ef1ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb1b3c0);
  return;
}



// FUNCTION 1437ef1fe FUN_1437ef1fe body=233 status=ok
// SIG undefined FUN_1437ef1fe(void)

undefined8 FUN_1437ef1fe(longlong param_1)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  char *_Str;
  uint uVar6;
  undefined1 auStack_168 [40];
  undefined1 local_140 [256];
  undefined1 *local_40;
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (1 < *(ulonglong *)(param_1 + 0x28)) {
    local_40 = (undefined1 *)0x0;
    _Str = (char *)(*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe);
    if (_Str != (char *)0x0) {
      sVar1 = strlen(_Str);
      iVar5 = (int)sVar1;
      uVar6 = iVar5 + 1;
      local_30 = iVar5;
      if (uVar6 < 0x81) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        FUN_1446efa72(&local_40,0,uVar6,2);
        puVar3 = local_40;
      }
      puVar2 = puVar3;
      if (puVar3 == (undefined1 *)0x0) {
        puVar2 = local_140;
      }
      local_38 = puVar2;
      if (-1 < iVar5) {
        uVar4 = 0;
        do {
          *(short *)(puVar2 + uVar4 * 2) = (short)_Str[uVar4];
          uVar4 = uVar4 + 1;
          puVar3 = local_40;
        } while (uVar6 != uVar4);
      }
      if (puVar3 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1437ef2f4 FUN_1437ef2f4 body=62 status=ok
// SIG undefined FUN_1437ef2f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437ef2f4(void)

{
  _DAT_14cb1b430 = &PTR_FUN_14ab678f0;
  if (DAT_14cb1b448 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb1b438 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437ef332 FUN_1437ef332 body=475 status=ok
// SIG undefined FUN_1437ef332(void)

void FUN_1437ef332(longlong param_1,int param_2,int param_3,char *param_4)

{
  size_t sVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  longlong local_168 [2];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_58 = (undefined1 *)0x0;
  if (param_4 == (char *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  else {
    sVar1 = strlen(param_4);
    iVar6 = (int)sVar1;
    uVar4 = iVar6 + 1;
    local_48 = iVar6;
    if (uVar4 < 0x81) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      FUN_1446efa72(&local_58,0,uVar4,2);
      puVar2 = local_58;
    }
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = local_158;
    }
    local_50 = puVar2;
    if (-1 < iVar6) {
      uVar3 = 0;
      do {
        *(short *)(puVar2 + uVar3 * 2) = (short)param_4[uVar3];
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    switch(param_2) {
    case 0:
      pwVar5 = L"Report";
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x79) = 1;
      pwVar5 = L"Warning";
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x7a) = 1;
      pwVar5 = L"Assert";
      break;
    case 3:
      *(undefined1 *)(param_1 + 0x7b) = 1;
      pwVar5 = L"Error";
      break;
    default:
      goto switchD_1437ef3e6_default;
    }
    FUN_140002266(local_168,L"[Silenced %s] %s",pwVar5,local_50);
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (param_2 == 3) {
    if (param_3 == 0) {
      FUN_140033559(".\\../Plugins/Havok/HavokCore/Source/HavokCore/Private/HavokError.cpp",0x9f,
                    &DAT_149e0625e);
    }
    else {
      local_178 = local_50;
      FUN_140033559(".\\../Plugins/Havok/HavokCore/Source/HavokCore/Private/HavokError.cpp",0x9f,
                    L"[0x%08X] %s",param_3);
    }
  }
switchD_1437ef3e6_default:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437ef51a FUN_1437ef51a body=14 status=ok
// SIG undefined FUN_1437ef51a(void)

undefined4 *
FUN_1437ef51a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 1437ef528 FUN_1437ef528 body=3177 status=ok
// SIG undefined FUN_1437ef528(void)

void FUN_1437ef528(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  uVar13 = param_1[0xe];
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13);
  }
  if (4 < uVar13) {
    FUN_14473dbc4(local_78);
    uVar13 = param_1[0xe];
  }
  puVar8 = param_1 + 8;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(param_1 + 0xc);
  }
  if (uVar13 == 0) {
    local_c0 = 0;
  }
  else {
    lVar20 = 0;
    local_c0 = 0;
    do {
      lVar16 = *(longlong *)((longlong)puVar8 + lVar20);
      lVar7 = *(longlong *)(lVar16 + 0x48);
      if (lVar7 == 0) {
        FUN_1437ef528(lVar16);
        lVar7 = *(longlong *)(lVar16 + 0x48);
        if (lVar7 != 0) goto LAB_1437ef5d9;
      }
      else {
LAB_1437ef5d9:
        uVar18 = local_50;
        lVar19 = (longlong)(int)local_50;
        uVar12 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar12);
        if (local_50._4_4_ < uVar12) {
          FUN_14476a5c8(local_78,uVar18 & 0xffffffff);
          lVar7 = *(longlong *)(lVar16 + 0x48);
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_78;
          }
          *(longlong *)(puVar11 + lVar19 * 8) = lVar7;
          lVar16 = local_c0;
          if (lVar7 == 0) goto LAB_1437ef635;
        }
        else {
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_78;
          }
          *(longlong *)(puVar11 + lVar19 * 8) = lVar7;
        }
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
        lVar16 = local_c0;
      }
LAB_1437ef635:
      local_c0 = lVar16;
      lVar20 = lVar20 + 8;
    } while ((longlong)(int)uVar13 * 8 != lVar20);
  }
  if (*(ushort *)((longlong)param_1 + 0x1e) < 2) {
    if (*(char *)(param_1 + 0x14) != '\x01') goto LAB_1437ef667;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      puVar17 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar10 = (uint *)*puVar17;
      if (puVar10 != (uint *)0x0) goto LAB_1437ef926;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1437f08bb);
        }
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar20 + 0x310);
        *(undefined8 *)(lVar20 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar17 = puVar8;
        FUN_140217a48(puVar17);
        puVar10 = (uint *)*puVar17;
LAB_1437ef926:
        puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x17);
        uVar13 = puVar10[0x12];
        if (puVar14 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar12 = *puVar10;
          *puVar10 = *puVar10 + uVar13 + 1;
          UNLOCK();
          if ((uVar12 ^ uVar13) != 0xffffffff) break;
          puVar10 = (uint *)*puVar17;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar17 = puVar10;
          puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x17);
          uVar13 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar13 = 1;
            goto LAB_1437ef9a6;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1437ef9a6:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar13;
      FUN_1447247dc(puVar15,local_78);
      *puVar15 = &PTR_FUN_14ab67c28;
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      puVar15[0x15] = &PTR_FUN_14ab67c40;
      puVar15[0x16] = uVar9;
      if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
      }
      puVar15[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar15[9] = puVar15;
      puVar15[10] = puVar15;
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar20 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar20 + 0x30);
      }
      puVar15[0xf] = uVar9;
      puVar15[0x10] = 0xc80000527800b400;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
      }
      local_a8[0] = 1;
      FUN_1447439e4(puVar15);
      puVar17 = *(undefined8 **)(param_1 + 0x12);
      *(undefined8 **)(param_1 + 0x12) = puVar15;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
      goto LAB_1437ef667;
    }
    puVar17 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar10 = (uint *)*puVar17;
    if (puVar10 != (uint *)0x0) goto LAB_1437ef765;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1437f08bb);
      }
      lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar8 = *(undefined4 **)(lVar20 + 0x310);
      *(undefined8 *)(lVar20 + 0x310) = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar8 = 0xffffffff;
      *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar17 = puVar8;
      FUN_140217a48(puVar17);
      puVar10 = (uint *)*puVar17;
LAB_1437ef765:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x1a);
      uVar13 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar12 = *puVar10;
        *puVar10 = *puVar10 + uVar13 + 1;
        UNLOCK();
        if ((uVar12 ^ uVar13) != 0xffffffff) break;
        puVar10 = (uint *)*puVar17;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar17 = puVar10;
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x1a);
        uVar13 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar13 = 1;
          goto LAB_1437ef7e5;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1437ef7e5:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar13;
    FUN_1447247dc(puVar15,local_78);
    *puVar15 = &PTR_FUN_14ab67bf8;
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    puVar15[0x15] = &PTR_FUN_14ab67c10;
    *(undefined4 *)(puVar15 + 0x16) = uVar3;
    *(undefined4 *)((longlong)puVar15 + 0xb4) = uVar4;
    *(undefined4 *)(puVar15 + 0x17) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0xbc) = uVar6;
    puVar15[0x18] = *(undefined8 *)(param_1 + 5);
    *(undefined2 *)(puVar15 + 0x19) = 0;
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar20 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar20 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar20 + 0x30);
    }
    puVar15[0xf] = uVar9;
    puVar15[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
  }
  else {
    local_88 = (undefined1 *)0x0;
    local_80 = 0x400000000;
    if ((*(ushort *)((longlong)param_1 + 0x1e) < 5) ||
       (FUN_14473dbc4(local_a8), *(short *)((longlong)param_1 + 0x1e) != 0)) {
      lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar17 = (undefined8 *)(lVar20 + 0x308);
      local_b8 = (longlong *)(lVar20 + 0x2b8);
      uVar13 = 0;
LAB_1437efc5d:
      puVar10 = (uint *)*puVar17;
      if (puVar10 != (uint *)0x0) goto LAB_1437efcc8;
      do {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_1437f08bb);
        }
        puVar8 = *(undefined4 **)(lVar20 + 0x310);
        *(undefined8 *)(lVar20 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar17 = puVar8;
        FUN_140217a48(puVar17);
        puVar10 = (uint *)*puVar17;
LAB_1437efcc8:
        uVar18 = *(longlong *)(puVar10 + 0x10) + 7;
        uVar12 = puVar10[0x12];
        while( true ) {
          puVar15 = (undefined8 *)(uVar18 & 0xfffffffffffffff8);
          if (puVar15 + 0x1a <= puVar10 + 0x4000) {
            *(undefined8 **)(puVar10 + 0x10) = puVar15 + 0x1a;
            puVar10[0x12] = uVar12 + 1;
            FUN_1447247dc(puVar15,local_78);
            *puVar15 = &PTR_FUN_14ab67bf8;
            uVar3 = *param_1;
            uVar4 = param_1[1];
            uVar5 = param_1[2];
            uVar6 = param_1[3];
            puVar15[0x15] = &PTR_FUN_14ab67c10;
            *(undefined4 *)(puVar15 + 0x16) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0xb4) = uVar4;
            *(undefined4 *)(puVar15 + 0x17) = uVar5;
            *(undefined4 *)((longlong)puVar15 + 0xbc) = uVar6;
            puVar15[0x18] = *(undefined8 *)(param_1 + 5);
            *(short *)(puVar15 + 0x19) = (short)uVar13;
            if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
            }
            puVar15[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar15[9] = puVar15;
            puVar15[10] = puVar15;
            if (*local_b8 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(*local_b8 + 0x30);
            }
            puVar15[0xf] = uVar9;
            puVar15[0x10] = 0xc80000527800b400;
            *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
            if (puVar15 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
              UNLOCK();
            }
            local_a9 = 1;
            FUN_1447439e4(puVar15,&local_a9);
            uVar18 = local_80;
            lVar16 = (longlong)(int)local_80;
            uVar12 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,uVar12);
            if (local_80._4_4_ < uVar12) {
              FUN_14476a5c8(local_a8,uVar18 & 0xffffffff);
            }
            puVar11 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar11 = local_a8;
            }
            *(undefined8 **)(puVar11 + lVar16 * 8) = puVar15;
            uVar13 = uVar13 + 1;
            if (uVar13 < *(ushort *)((longlong)param_1 + 0x1e)) goto LAB_1437efc5d;
            goto LAB_1437efebf;
          }
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar2 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar17;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar17 = puVar10;
          uVar18 = (longlong)puVar10 + 0x5f;
          uVar12 = 0;
        }
      } while( true );
    }
    puVar17 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
LAB_1437efebf:
    puVar10 = (uint *)*puVar17;
    if (puVar10 != (uint *)0x0) goto LAB_1437eff45;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1437f08bb);
      }
      lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar8 = *(undefined4 **)(lVar20 + 0x310);
      *(undefined8 *)(lVar20 + 0x310) = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar8 = 0xffffffff;
      *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar17 = puVar8;
      FUN_140217a48(puVar17);
      puVar10 = (uint *)*puVar17;
LAB_1437eff45:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x1a);
      uVar13 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar12 = *puVar10;
        *puVar10 = *puVar10 + uVar13 + 1;
        UNLOCK();
        if ((uVar12 ^ uVar13) != 0xffffffff) break;
        puVar10 = (uint *)*puVar17;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar17 = puVar10;
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x1a);
        uVar13 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar13 = 1;
          goto LAB_1437effc5;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1437effc5:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar13;
    FUN_1447247dc(puVar15,local_a8);
    *puVar15 = &PTR_FUN_14ab67bf8;
    puVar15[0x15] = &PTR_FUN_14ab67c10;
    puVar15[0x16] = 0;
    puVar15[0x17] = 0;
    puVar15[0x18] = *(undefined8 *)(param_1 + 5);
    *(undefined2 *)(puVar15 + 0x19) = 0;
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar20 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar20 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar20 + 0x30);
    }
    puVar15[0xf] = uVar9;
    puVar15[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
    puVar11 = local_a8;
    if (local_88 != (undefined1 *)0x0) {
      puVar11 = local_88;
    }
    FUN_144717c65(puVar11,local_80 & 0xffffffff);
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (puVar15 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
    UNLOCK();
    puVar17 = *(undefined8 **)(param_1 + 0x12);
    *(undefined8 **)(param_1 + 0x12) = puVar15;
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
    if (local_c0 == 0) {
      local_a8[0] = 1;
      FUN_1447439e4(puVar15);
    }
    else {
      *(undefined8 **)(local_c0 + 0x40) = puVar15;
    }
  }
LAB_1437ef667:
  puVar11 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar11 = local_78;
  }
  FUN_144717c65(puVar11,local_50 & 0xffffffff);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f01aa FUN_1437f01aa body=29 status=ok
// SIG undefined FUN_1437f01aa(void)

undefined8 FUN_1437f01aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f01dc FUN_1437f01dc body=85 status=ok
// SIG undefined FUN_1437f01dc(void)

void FUN_1437f01dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab67960;
  return;
}



// FUNCTION 1437f0232 FUN_1437f0232 body=85 status=ok
// SIG undefined FUN_1437f0232(void)

void FUN_1437f0232(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab67960;
  return;
}



// FUNCTION 1437f0288 FUN_1437f0288 body=118 status=ok
// SIG undefined FUN_1437f0288(void)

void FUN_1437f0288(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab67960;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437f02ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437f0304 FUN_1437f0304 body=16 status=ok
// SIG undefined FUN_1437f0304(void)

undefined1 FUN_1437f0304(void)

{
  FUN_1437f0314();
  return 1;
}



// FUNCTION 1437f0314 FUN_1437f0314 body=1070 status=ok
// SIG undefined FUN_1437f0314(void)

void FUN_1437f0314(void)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  local_20 = "HavokAI";
  local_18 = 7;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  iVar2 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,uVar1);
  if (0 < iVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    local_20 = "HavokAI";
    local_18 = 7;
    local_14 = 0;
    uVar1 = FUN_14001a6c0(&local_20,1);
    lVar3 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,0);
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x20))(lVar3 + -8,local_38);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  local_20 = "HavokCloth";
  local_18 = 10;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  iVar2 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,uVar1);
  if (0 < iVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    local_20 = "HavokCloth";
    local_18 = 10;
    local_14 = 0;
    uVar1 = FUN_14001a6c0(&local_20,1);
    lVar3 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,0);
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x20))(lVar3 + -8,local_38);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  local_20 = "HavokPhysics";
  local_18 = 0xc;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  iVar2 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,uVar1);
  if (0 < iVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    local_20 = "HavokPhysics";
    local_18 = 0xc;
    local_14 = 0;
    uVar1 = FUN_14001a6c0(&local_20,1);
    lVar3 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,uVar1,0);
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x20))(lVar3 + -8,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437f0744 FUN_1437f0744 body=29 status=ok
// SIG undefined FUN_1437f0744(void)

undefined8 FUN_1437f0744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437f0776 FUN_1437f0776 body=85 status=ok
// SIG undefined FUN_1437f0776(void)

void FUN_1437f0776(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab67a60;
  return;
}



// FUNCTION 1437f07cc FUN_1437f07cc body=85 status=ok
// SIG undefined FUN_1437f07cc(void)

void FUN_1437f07cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab67a60;
  return;
}



// FUNCTION 1437f0822 FUN_1437f0822 body=118 status=ok
// SIG undefined FUN_1437f0822(void)

void FUN_1437f0822(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab67a60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437f0889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


