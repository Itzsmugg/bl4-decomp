// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14118fde8 FUN_14118fde8 body=99 status=ok
// SIG undefined FUN_14118fde8(void)

void FUN_14118fde8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b49d2d0;
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14118fe4c FUN_14118fe4c body=404 status=ok
// SIG undefined FUN_14118fe4c(void)

void FUN_14118fe4c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar5 == 1) {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    if ((int)param_2[1] == 0) {
      if ((longlong *)(lVar4 + 0x10) != param_2) {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = *(longlong *)(lVar4 + 0x10);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x18);
        *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar4 + 0x1c);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      goto LAB_14118ff1e;
    }
    lVar2 = lVar4 + 0x20;
LAB_14118fe90:
    iVar5 = 0;
    do {
      iVar5 = iVar5 + *(int *)(lVar4 + 0x18);
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    if (iVar5 != 0) {
      lVar2 = (longlong)iVar5 * 0x20 + lVar4;
      goto LAB_14118fe90;
    }
    iVar5 = 0;
  }
  iVar3 = (int)param_2[1] + iVar5;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    FUN_14481578e(param_2);
  }
  if (0 < iVar5) {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    iVar5 = *(int *)(param_1 + 0x408);
    if ((longlong)iVar5 != 0) {
      lVar2 = 0;
      do {
        uVar1 = *(uint *)(lVar4 + 0x18 + lVar2);
        if ((longlong)(int)uVar1 != 0) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + uVar1;
          if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
            FUN_1446f48e2(param_2,iVar3);
          }
          memcpy((void *)((longlong)iVar3 * 4 + *param_2),*(void **)(lVar4 + 0x10 + lVar2),
                 (longlong)(int)uVar1 << 2);
        }
        lVar2 = lVar2 + 0x20;
      } while ((longlong)iVar5 * 0x20 != lVar2);
    }
  }
LAB_14118ff1e:
  if (*(int *)(param_1 + 0x40c) < 0) {
    FUN_1468b427a(param_1);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x400);
    if (*(longlong *)(param_1 + 0x400) == 0) {
      lVar4 = param_1;
    }
    FUN_14118ffe0(lVar4,*(undefined4 *)(param_1 + 0x408));
    *(undefined4 *)(param_1 + 0x408) = 0;
  }
  *(undefined1 *)(param_1 + 0x410) = 0;
  return;
}



// FUNCTION 14118ffe0 FUN_14118ffe0 body=47 status=ok
// SIG undefined FUN_14118ffe0(void)

void FUN_14118ffe0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 141190010 FUN_141190010 body=251 status=ok
// SIG undefined FUN_141190010(void)

void FUN_141190010(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14119010c();
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar5 = **(longlong **)(param_1 + 0x168);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) {
      return;
    }
    lVar3 = FUN_141190202();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar3 = FUN_1476d46fb(param_1);
      lVar4 = FUN_1433335b4(param_1);
      lVar5 = *(longlong *)(lVar4 + 0x30);
      if (DAT_14c950c29 == 1) {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_1456cec3c(lVar5);
          lVar5 = *(longlong *)(lVar4 + 0x30);
        }
      }
      bVar2 = DAT_14c950c29;
      *(longlong *)(lVar3 + 0x30) = lVar5;
      if (lVar3 != 0 && (~bVar2 & 1) == 0) {
        FUN_1456cec3c(lVar3);
        bVar2 = DAT_14c950c29;
      }
      *(longlong *)(lVar5 + 0x30) = lVar3;
      plVar1 = *(longlong **)(param_1 + 0x168);
      if ((lVar3 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(lVar3);
      }
      *plVar1 = lVar3;
    }
  }
  return;
}



// FUNCTION 14119010c FUN_14119010c body=244 status=ok
// SIG undefined FUN_14119010c(void)

void FUN_14119010c(longlong *param_1)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_21);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  iVar4 = (int)param_1[0x2e];
  if (0 < iVar4) {
    uVar5 = 0;
    do {
      lVar1 = param_1[0x2d];
      lVar2 = *(longlong *)(lVar1 + (longlong)(int)uVar5 * 8);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) {
        if (~uVar5 + iVar4 != 0) {
          _Dst = (void *)(lVar1 + (longlong)(int)uVar5 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar5 + iVar4) << 3);
          iVar4 = (int)param_1[0x2e];
        }
        *(int *)(param_1 + 0x2e) = iVar4 + -1;
        FUN_147771f88(param_1 + 0x2d);
        uVar5 = uVar5 - 1;
        iVar4 = (int)param_1[0x2e];
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141190202 FUN_141190202 body=228 status=ok
// SIG undefined FUN_141190202(void)

longlong FUN_141190202(void)

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
  if (DAT_14cab7268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_1476d4b8a;
    local_40 = FUN_140f051e7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/UMG",L"ButtonSlot",&DAT_14cab7268,FUN_1463517f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411902e8 FUN_1411902e8 body=638 status=ok
// SIG undefined FUN_1411902e8(void)

longlong FUN_1411902e8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (uint *)(param_1 + 0x318);
  if (*(int *)(param_1 + 0x31c) == 0) {
LAB_141190354:
    if (*(longlong *)(param_1 + 800) != 0) {
      plVar7 = (longlong *)FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((plVar7 == (longlong *)0x0) || (cVar3 == '\0')) {
        FUN_14485c47a(puVar1,plVar7);
        if (plVar7 == (longlong *)0x0) goto LAB_14119035e;
      }
      else {
        uVar2 = *(uint *)((longlong)plVar7 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar1,plVar7);
        }
      }
      if ((*(uint *)(plVar7 + 1) >> 0x1e & 1) == 0) goto LAB_1411903bc;
    }
  }
  else {
    uVar2 = *puVar1;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141190354;
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar7 == (longlong *)0x0) ||
       ((((int)plVar7[2] != *(int *)(param_1 + 0x31c) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
         ) || (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))) goto LAB_141190354;
LAB_1411903bc:
    if (DAT_14c949118 == 0) {
      local_38 = FUN_140631fbe;
      lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar4;
      FUN_1446f470e(local_30,L"Class",1);
      local_48 = &LAB_146891e90;
      local_50 = &LAB_146273097;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x20;
      local_70 = 0x10000000;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar4);
      DAT_14c949118 = lVar4;
      uVar5 = FUN_144a7a812();
      lVar4 = DAT_14c949118;
      uVar6 = FUN_1449e2fb2();
      local_78 = L"Class";
      FUN_14574b446(uVar6,lVar4,uVar5,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
        DAT_14c949118 + 0x30)) {
      lVar4 = FUN_141190568();
      if ((lVar4 != 0) &&
         ((*(int *)(lVar4 + 0x38) <= (int)plVar7[7] &&
          (*(longlong *)(plVar7[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)))) {
        lVar4 = plVar7[0x22];
        if (lVar4 == 0) {
          (**(code **)(*plVar7 + 1000))(plVar7);
          lVar4 = plVar7[0x22];
        }
        goto LAB_141190360;
      }
    }
  }
LAB_14119035e:
  lVar4 = 0;
LAB_141190360:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141190568 FUN_141190568 body=221 status=ok
// SIG undefined FUN_141190568(void)

longlong FUN_141190568(void)

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
  if (DAT_14cb569d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14863873f;
    local_40 = FUN_143c3af08;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageScript",&DAT_14cb569d8,&DAT_14863873e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb569d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141190646 FUN_141190646 body=723 status=ok
// SIG undefined FUN_141190646(void)

void FUN_141190646(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0.0 < *(float *)(param_1 + 0x3b4)) {
    FUN_1411909b8((longlong)param_2 + 0x14,
                  *(float *)(param_1 + 0x3b4) * *(float *)(param_2 + 5) *
                  *(float *)((longlong)param_2 + 0x18c) + *(float *)(param_2 + 5));
  }
  *(float *)(param_2 + 7) =
       *(float *)(param_1 + 0x3b8) * *(float *)(param_2 + 7) * *(float *)((longlong)param_2 + 0x18c)
       + *(float *)(param_2 + 7);
  *(float *)(param_2 + 0x31) =
       *(float *)((longlong)param_2 + 0x18c) * *(float *)(param_1 + 0x3bc) +
       *(float *)(param_2 + 0x31);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
LAB_14119082b:
    iVar2 = FUN_14119091a(param_1);
    iVar3 = iVar2;
  }
  else {
    lVar4 = FUN_140086990();
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if ((((lVar6 == 0) || (lVar4 == 0)) || (lVar1 = *(longlong *)(lVar6 + 0x10), lVar1 == 0)) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)))) goto LAB_14119082b;
    iVar2 = FUN_14119091a(param_1);
    iVar3 = *(int *)(lVar6 + 0xbc);
  }
  fVar8 = (float)iVar2 / (float)iVar3;
  fVar7 = 1.0;
  if ((1.0 <= fVar8) && (lVar6 = *(longlong *)(param_1 + 0x398), *(char *)(lVar6 + 0x3f2) != '\0'))
  {
    lVar4 = *(longlong *)(param_1 + 0x3e0);
    if ((lVar4 == 0) || (0xfffffffd < *(int *)(param_1 + 1000) - 1U)) {
      if ((*(longlong *)(lVar6 + 0x408) == 0) || (0xfffffffd < *(int *)(lVar6 + 0x410) - 1U)) {
        uVar5 = FUN_140f9199a(lVar6 + 0x420);
        param_2[1] = uVar5;
LAB_14119086d:
        *param_2 = 0;
      }
      else {
        uVar5 = FUN_1403d77ae(lVar6 + 0x408);
        *param_2 = uVar5;
      }
    }
    else {
      local_70 = lVar4;
      if (*(int *)(param_1 + 1000) != 0x34001) {
        FUN_1446dcdd4(local_68);
        uVar5 = FUN_140a4bd48(local_68);
        param_2[1] = uVar5;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        goto LAB_14119086d;
      }
      FUN_1446dcdd4(local_68);
      if (DAT_14cb853e8 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_144837462(DAT_14cb853e8,local_68);
      }
      *param_2 = uVar5;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      param_2[1] = 0;
    }
    fVar7 = *(float *)(*(longlong *)(param_1 + 0x398) + 0x438);
  }
  *(int *)(param_2 + 9) =
       (int)((float)*(int *)(param_2 + 9) + (float)(iVar2 * *(int *)(param_1 + 0x3d0)) * fVar7);
  if (1.0 <= fVar8) {
    lVar6 = 0x440;
  }
  else if ((*(float *)(param_1 + 0x3d8) <= 0.0) ||
          (lVar6 = 0x460, *(float *)(param_1 + 0x3d8) < fVar8)) goto LAB_141190805;
  FUN_1405dc634(param_2 + 0x18,lVar6 + *(longlong *)(param_1 + 0x398));
LAB_141190805:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119091a FUN_14119091a body=158 status=ok
// SIG undefined FUN_14119091a(void)

int FUN_14119091a(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = FUN_140ced466();
  if (*(char *)(*(longlong *)(param_1 + 0x398) + 0x3f1) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x3ac);
    if (iVar4 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      bVar1 = *(byte *)(lVar5 + 0xbd8);
      iVar4 = 0;
      if ((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) {
        plVar2 = *(longlong **)
                  (*(longlong *)(lVar5 + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
        if (plVar2 != (longlong *)0x0) {
          iVar4 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
          lVar5 = 0x2d8;
          if (0 < iVar4) {
            lVar5 = 0x2c0;
          }
          iVar4 = (**(code **)(*plVar2 + lVar5))(plVar2);
        }
      }
    }
    if (iVar4 <= iVar3) {
      iVar3 = 1;
      if (1 < iVar4) {
        iVar3 = iVar4;
      }
      iVar3 = iVar3 + -1;
    }
  }
  return iVar3;
}



// FUNCTION 1411909b8 FUN_1411909b8 body=14 status=ok
// SIG undefined FUN_1411909b8(void)

void FUN_1411909b8(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 1411909c6 FUN_1411909c6 body=425 status=ok
// SIG undefined FUN_1411909c6(void)

void FUN_1411909c6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
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
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_141190b70(local_20);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141190b70 FUN_141190b70 body=381 status=ok
// SIG undefined FUN_141190b70(void)

undefined8 FUN_141190b70(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30 &&
          (param_1 = *(longlong *)(param_1 + 0xa08), param_1 != 0)))) {
        lVar2 = FUN_144a2f878();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_141190bc2;
      }
    }
    else {
LAB_141190bc2:
      lVar2 = *(longlong *)(&DAT_00006850 + param_1);
      if (lVar2 != 0) {
        uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x422c));
        goto LAB_141190bd8;
      }
    }
  }
  uVar1 = 0;
LAB_141190bd8:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 141190cee FUN_141190cee body=811 status=ok
// SIG undefined FUN_141190cee(void)

void FUN_141190cee(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  char local_78;
  undefined7 uStack_77;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = FUN_1405f939e();
  FUN_140a702f6(&local_78,uVar6);
  if (local_70 == (longlong *)0x0) goto LAB_141190ec4;
  iVar5 = (int)local_70[1];
  do {
    if (iVar5 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar7 = (int)local_70[1];
    bVar12 = iVar5 == iVar7;
    if (bVar12) {
      *(int *)(local_70 + 1) = iVar5 + 1;
      iVar7 = iVar5;
    }
    iVar5 = iVar7;
    UNLOCK();
    plVar8 = local_70;
  } while (!bVar12);
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_141190ec4;
  lVar4 = CONCAT71(uStack_77,local_78);
  if (lVar4 != 0) {
    lVar11 = param_1[8];
    if (lVar11 == 0) {
      lVar10 = 0;
      local_70 = (longlong *)0x0;
LAB_141190f41:
      local_68 = (longlong *)0x0;
      bVar12 = true;
    }
    else {
      if (*(int *)(lVar11 + 0x4c) == 0) {
LAB_141190f0b:
        lVar10 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar11 + 0x48);
        lVar10 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(lVar11 + 0x4c) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_141190f0b;
          lVar10 = *plVar9;
        }
      }
      plVar9 = *(longlong **)(lVar11 + 0x118);
      local_70 = param_1;
      if (plVar9 == (longlong *)0x0) goto LAB_141190f41;
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar12 = false;
      local_68 = plVar9;
    }
    plVar9 = local_68;
    local_50[0] = 0;
    local_78 = '\x03';
    local_60._0_4_ = 0;
    if (lVar10 == 0) {
      iVar5 = 0;
      uVar3 = (uint)local_60;
    }
    else {
      uVar3 = *(uint *)(lVar10 + 0xc);
      local_60 = (ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar5 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar11 + 0x10);
        bVar13 = iVar5 == 0;
        if (bVar13) {
          *(int *)(lVar11 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_60;
        if (bVar13) {
          iVar5 = iVar7;
        }
      }
    }
    local_60._0_4_ = uVar3;
    local_60 = CONCAT44(iVar5,(uint)local_60);
    local_58 = 2;
    if (local_50[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_50[0] + -1,1);
      local_50[0] = 0;
    }
    if (!bVar12) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    uVar6 = FUN_140343d7a(param_1);
    FUN_14119101a(lVar4,param_1[9] + 0x80,uVar6,&local_78);
    FUN_1448173f8(local_50);
    if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
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
LAB_141190ec4:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119101a FUN_14119101a body=1076 status=ok
// SIG undefined FUN_14119101a(void)

/* WARNING: Removing unreachable block (ram,0x0001411913e2) */

ulonglong FUN_14119101a(longlong param_1,undefined8 *param_2,longlong param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_a0 [8];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  char local_80;
  undefined4 local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *param_2;
  if (*(char *)((longlong)param_2 + 0x7a) == '\x01') {
    if (param_4 == (char *)0x0) {
      local_a0[0] = '\0';
      local_78[0] = 0;
      FUN_1456bb102(local_a0,param_3);
    }
    else {
      local_a0[0] = *param_4;
      if (local_a0[0] == '\x01') {
        local_a0[0] = '\x02';
        if (*(longlong *)(param_4 + 8) == 0) {
          local_98._0_4_ = 0;
          iVar6 = 0;
          uVar7 = (uint)local_98;
        }
        else {
          uVar7 = *(uint *)(*(longlong *)(param_4 + 8) + 0xc);
          local_98 = (ulonglong)uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar6 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar6 = *(int *)(lVar11 + 0x10);
            bVar15 = iVar6 == 0;
            if (bVar15) {
              *(int *)(lVar11 + 0x10) = iVar9;
              iVar6 = 0;
            }
            UNLOCK();
            uVar7 = (uint)local_98;
            if (bVar15) {
              iVar6 = iVar9;
            }
          }
        }
        local_98._0_4_ = uVar7;
        local_98 = CONCAT44(iVar6,(uint)local_98);
      }
      else if (local_a0[0] == '\x02') {
        local_98 = *(ulonglong *)(param_4 + 8);
      }
      else if (local_a0[0] == '\x03') {
        local_98 = *(undefined8 *)(param_4 + 8);
        local_90 = *(longlong **)(param_4 + 0x10);
        if (local_90 == (longlong *)0x0) {
          local_88 = *(undefined8 *)(param_4 + 0x18);
          local_80 = param_4[0x20];
        }
        else {
          LOCK();
          *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
          UNLOCK();
          local_88 = *(undefined8 *)(param_4 + 0x18);
          local_80 = param_4[0x20];
        }
      }
      local_78[0] = 0;
      if (*(int *)(param_4 + 0x28) != 0) {
        uVar8 = FUN_1448174c4(local_78);
        FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
      }
    }
    FUN_1447c3578(param_2 + 0x10,local_70,local_a0);
    uVar8 = FUN_14030a32e(local_70);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar14 = local_70;
      if (0x18 < local_58) {
        ppppuVar14 = (undefined8 ****)local_70[0];
      }
      (*pcVar4)(ppppuVar14);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  else {
    uVar8 = 0;
  }
  FUN_140a70e7e(param_1,local_a0,param_3);
  local_a8 = uVar8;
  lVar11 = FUN_140a71094(param_1,uVar3,param_3,local_a0);
  uVar12 = 0;
  if (lVar11 != 0) {
    uVar7 = 0;
    if (param_3 != 0) {
      uVar7 = *(uint *)(param_3 + 0xc);
      uVar12 = (ulonglong)uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      uVar7 = *(uint *)(lVar13 + 0x10);
      if (*(uint *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar10 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar10);
        }
        LOCK();
        uVar7 = *(uint *)(lVar13 + 0x10);
        bVar15 = uVar7 == 0;
        if (bVar15) {
          *(uint *)(lVar13 + 0x10) = uVar10;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar15) {
          uVar7 = uVar10;
        }
      }
    }
    plVar1 = (longlong *)(lVar11 + 0x30);
    ppppuVar14 = (undefined8 ****)(uVar12 | (ulonglong)uVar7 << 0x20);
    local_70[0] = ppppuVar14;
    iVar6 = FUN_14105fa9c(plVar1,uVar7 ^ (uint)uVar12);
    if ((iVar6 == -1) || (lVar13 = (longlong)iVar6 * 0x1c + *plVar1, lVar13 == 0)) {
      uVar12 = 0;
    }
    else {
      if (0.0 < *(float *)(lVar13 + 0xc)) {
        iVar6 = *(int *)(lVar11 + 0x18);
        uVar12 = (ulonglong)iVar6;
        *(uint *)(lVar11 + 0x18) = iVar6 + 1U;
        if (*(uint *)(lVar11 + 0x1c) < iVar6 + 1U) {
          FUN_1418184f4((longlong *)(lVar11 + 0x10),iVar6);
        }
        lVar5 = *(longlong *)(lVar11 + 0x10);
        *(undefined8 *)(lVar5 + uVar12 * 8) = 0;
        *(undefined4 *)(lVar5 + uVar12 * 8) = *(undefined4 *)(lVar13 + 8);
        *(float *)(lVar5 + 4 + uVar12 * 8) = *(float *)(param_1 + 0x28) + *(float *)(lVar13 + 0xc);
      }
      FUN_140e1bd9a(plVar1,ppppuVar14);
      FUN_14105fde8(param_1,lVar11);
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141191450 FUN_141191450 body=25 status=ok
// SIG undefined FUN_141191450(void)

void FUN_141191450(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141191465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14119146a FUN_14119146a body=796 status=ok
// SIG undefined FUN_14119146a(void)

undefined8 * FUN_14119146a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  *param_1 = &PTR_FUN_149f27ef0;
  if (param_1[0x4f] != 0) {
    FUN_144b47270();
    param_1[0x4f] = 0;
  }
  if (param_1[0x50] != 0) {
    FUN_144b472a0();
    param_1[0x50] = 0;
  }
  FUN_1447a1747(param_1 + 0x71,*(undefined4 *)(param_1 + 0xd5));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6c));
  puVar3 = (undefined8 *)param_1[0x62];
  puVar6 = (undefined8 *)param_1[100];
  do {
    puVar4 = (undefined8 *)*puVar6;
    FUN_1400020a8(puVar6);
    bVar7 = puVar6 != puVar3;
    puVar6 = puVar4;
  } while (bVar7);
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    if (puVar4[1] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar4);
    puVar4 = puVar3;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x57);
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149f28bb0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_141191868(param_1 + 0x44);
  puVar3 = (undefined8 *)param_1[0x43];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  plVar5 = (longlong *)param_1[0x3c];
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
  plVar5 = (longlong *)param_1[0x3a];
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
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  plVar5 = (longlong *)param_1[0x2f];
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
  plVar5 = (longlong *)param_1[0x2d];
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
  if (*(char *)((longlong)param_1 + 0x144) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x13c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  }
  *param_1 = &PTR__purecall_149f2a170;
  FUN_1401cb1ee(param_1 + 0x1f);
  FUN_1401cb1ee(param_1 + 0x18);
  FUN_1401cb1ee(param_1 + 0x11);
  FUN_1401cb1ee(param_1 + 10);
  FUN_1401cb1ee(param_1 + 3);
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141191786 FUN_141191786 body=59 status=ok
// SIG undefined FUN_141191786(void)

undefined8 * FUN_141191786(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f28db0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411917c2 FUN_1411917c2 body=165 status=ok
// SIG undefined FUN_1411917c2(void)

void FUN_1411917c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f28210;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x68);
  plVar3 = *(longlong **)(param_1 + 0x60);
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
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f28df0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141191868 FUN_141191868 body=394 status=ok
// SIG undefined FUN_141191868(void)

void FUN_141191868(longlong *param_1)

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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141191a02 FUN_141191a02 body=43 status=ok
// SIG undefined FUN_141191a02(void)

void FUN_141191a02(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 141191a2e FUN_141191a2e body=285 status=ok
// SIG undefined FUN_141191a2e(void)

undefined8 FUN_141191a2e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141191b45;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141191b45;
    }
    FUN_140192332(param_1 + 0x20,&local_30,0);
  }
  else {
LAB_141191b45:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141191af2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x24) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x28))
                (*plVar5,param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      uVar6 = 1;
      goto LAB_141191af2;
    }
  }
  uVar6 = 0;
LAB_141191af2:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141191b4c FUN_141191b4c body=574 status=ok
// SIG undefined FUN_141191b4c(void)

void FUN_141191b4c(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
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
  undefined8 local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = param_4;
  if (((((param_3 >> 0x20 != 0) && (uVar3 = (uint)param_3, -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8))),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == (int)(param_3 >> 0x20))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
      (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)))) {
    FUN_1407ab600(param_1,plVar2,0,&local_20);
    if (DAT_14cb94538 == 0) {
      local_40 = &local_18;
      local_18 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148a18249;
      local_50 = FUN_14657713c;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb94538);
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cb94538 == 0) {
        local_40 = &local_18;
        local_18 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148a18249;
        local_50 = FUN_14657713c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar1 = (longlong *)FUN_144718840(plVar2,DAT_14cb94538);
      if ((plVar2 != plVar1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x80))(plVar1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141191d9a FUN_141191d9a body=1633 status=ok
// SIG undefined FUN_141191d9a(void)

undefined8 FUN_141191d9a(longlong param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0x30);
  local_58 = param_1;
  if ((((*(byte *)(lVar5 + 0x65) & 2) == 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
     (lVar8 = *(longlong *)(lVar5 + 0x430), lVar8 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1417de738;
      local_60 = (code *)&LAB_145893408;
      local_68 = &LAB_1458cbbd2;
      local_78 = &LAB_147ba21f1;
      local_80 = &LAB_1463e9233;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x1000000c;
      local_a0 = 8;
      local_a8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar8 = *(longlong *)(lVar5 + 0x430);
      if (lVar8 == 0) goto LAB_141191e49;
    }
    if (((DAT_14cae9568 != 0) && (lVar5 = *(longlong *)(lVar8 + 0x10), lVar5 != 0)) &&
       ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar5 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30)))) {
      lVar5 = FUN_14030d4a0();
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
         (*(char *)(param_1 + 0x41) != '\x01')) {
        if (((((param_2 < 0.0) || (*(int *)(param_1 + 0x3c) == 0)) ||
             (uVar2 = *(uint *)(param_1 + 0x38), (int)uVar2 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar2 ||
             (puVar9 = (undefined8 *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             puVar9 == (undefined8 *)0x0)))) ||
           ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x3c) ||
            ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) {
LAB_141191f20:
          FUN_1441ec37a(&local_58);
          uVar6 = 1;
          goto LAB_141191eaa;
        }
        if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
          plVar7 = (longlong *)*puVar9;
        }
        else {
          plVar7 = (longlong *)0x0;
        }
        bVar3 = (**(code **)(*plVar7 + 0x498))();
        if (bVar3 < 5) goto LAB_141191e49;
        if (bVar3 == 6) goto LAB_141191f20;
        if (bVar3 == 5) {
          if (*(char *)(lVar8 + 0x3de) == '\x01') {
            cVar4 = FUN_140426394(*(longlong *)(param_1 + 0x30) + 0xd98,&DAT_14cbd9308);
            if (cVar4 != '\0') goto LAB_141191f8c;
          }
        }
        else {
LAB_141191f8c:
          if (*(int *)(param_1 + 0x3c) == 0) {
LAB_1411921a7:
            lVar5 = 0;
          }
          else {
            uVar2 = *(uint *)(param_1 + 0x38);
            lVar5 = 0;
            if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
              plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if ((plVar7 == (longlong *)0x0) ||
                 (((int)plVar7[2] != *(int *)(param_1 + 0x3c) ||
                  ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_1411921a7;
              lVar5 = *plVar7;
            }
          }
          if (*(char *)(lVar5 + 0x4d9) == '\0') {
            plVar7 = DAT_14cabd158;
            if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) &&
                ((DAT_14ca9a35c & 1) != 0)) && (DAT_14ca84e78 != '\x01')) {
              if (DAT_14cabd108 != 0) {
                plVar7 = (longlong *)(DAT_14cabd108 + 0x10);
                goto LAB_141192018;
              }
            }
            else {
LAB_141192018:
              if ((plVar7 != (longlong *)0x0) &&
                 ((cVar4 = (**(code **)(*plVar7 + 0x100))(plVar7), cVar4 != '\0' ||
                  (cVar4 = (**(code **)(*plVar7 + 0x68))(plVar7), cVar4 != '\0'))))
              goto LAB_141191f20;
            }
            lVar5 = *(longlong *)(param_1 + 0x30);
            if ((*(int *)(lVar5 + 0xd98) == 0) ||
               (((*(longlong *)(lVar5 + 0xda0) == 0 ||
                 ((*(longlong *)(lVar5 + 0xb10) != 0 &&
                  (*(char *)(*(longlong *)(lVar5 + 0xb10) + 0x18) == '\x01')))) ||
                (*(char *)(lVar5 + 0x23b8) == '\x01')))) goto LAB_141191f20;
            if (*(int *)(param_1 + 0x3c) == 0) {
LAB_141192259:
              lVar5 = 0;
            }
            else {
              uVar2 = *(uint *)(param_1 + 0x38);
              lVar5 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                plVar7 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((plVar7 == (longlong *)0x0) ||
                   (((int)plVar7[2] != *(int *)(param_1 + 0x3c) ||
                    ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_141192259;
                lVar5 = *plVar7;
              }
            }
            if ((((*(longlong *)(lVar5 + 0x30) != 0) &&
                 (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360), lVar5 != 0)) &&
                (*(longlong *)(lVar5 + 0x1f0) != 0)) && (lVar5 = FUN_141028a6c(), lVar5 != 0)) {
              cVar4 = FUN_148a7dda4(lVar5,*(undefined4 *)(lVar8 + 0xe0));
              if (cVar4 == '\0') goto LAB_141191f20;
            }
            if (*(int *)(param_1 + 0x3c) == 0) {
LAB_141192260:
              uVar6 = 0;
            }
            else {
              uVar2 = *(uint *)(param_1 + 0x38);
              uVar6 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                puVar9 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar9 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x3c) ||
                    ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_141192260;
                uVar6 = *puVar9;
              }
            }
            lVar5 = FUN_140d27a2a(uVar6);
            if (bVar3 < 7) {
LAB_1411921ae:
              bVar3 = *(byte *)(param_1 + 0x40);
              if ((bVar3 & 1) == 0) {
                lVar5 = *(longlong *)(param_1 + 0x30);
                lVar8 = *(longlong *)(lVar5 + 0x398);
                if (lVar8 != 0) {
                  if (DAT_14cbae3d8 == 0) {
                    local_70 = &local_50;
                    local_50 = FUN_141030f22;
                    local_60 = FUN_14081d0ea;
                    local_68 = &LAB_1464f5fc4;
                    local_78 = &LAB_148c3dd26;
                    local_80 = &LAB_1459673ba;
                    local_88 = L"Engine";
                    local_90 = 0;
                    local_98 = 0x10000004;
                    local_a0 = 0x10;
                    local_a8 = 0x1360;
                    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604)
                    ;
                    lVar8 = *(longlong *)(lVar5 + 0x398);
                    if (lVar8 != 0) goto LAB_1411921e1;
                  }
                  else {
LAB_1411921e1:
                    if ((((DAT_14cbae3d8 != 0) && (lVar5 = *(longlong *)(lVar8 + 0x10), lVar5 != 0))
                        && (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8
                         ) == DAT_14cbae3d8 + 0x30)) {
                      if ((*(byte *)(lVar8 + 0x39a) & 2) != 0) goto LAB_141191e49;
                      if (*(char *)(lVar8 + 0x4dd) == '\0') goto LAB_141191f20;
                      bVar3 = FUN_140d35d4c();
                      *(byte *)(param_1 + 0x40) = bVar3;
                      goto LAB_1411923c8;
                    }
                  }
                  bVar3 = *(byte *)(param_1 + 0x40);
                }
              }
LAB_1411923c8:
              if ((bVar3 & 1) != 0) goto LAB_1411923cc;
LAB_1411923dc:
              if ((bVar3 & 1) != 0) {
                FUN_1460716e2(param_1);
                goto LAB_141191e49;
              }
            }
            else {
              bVar3 = *(char *)(lVar5 + 0xb0) - 1;
              if (7 < bVar3) goto LAB_1411921ae;
              if (bVar3 < 4) goto LAB_141191f20;
              if ((byte)(*(char *)(lVar5 + 0xb0) - 7U) < 2) goto LAB_141191e49;
              *(undefined1 *)(param_1 + 0x40) = 1;
LAB_1411923cc:
              cVar4 = FUN_140b3f358();
              if (cVar4 == '\0') {
                bVar3 = *(byte *)(param_1 + 0x40);
                goto LAB_1411923dc;
              }
              *(byte *)(param_1 + 0x40) = 0;
            }
            FUN_145cb003e(param_1,1);
          }
        }
      }
    }
  }
LAB_141191e49:
  if (((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x78) + 8))) {
    FUN_1401cb356();
    local_50 = *(code **)(param_1 + 0x70);
    local_48 = *(longlong *)(param_1 + 0x78);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_50);
    plVar7 = *(longlong **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  uVar6 = 0;
LAB_141191eaa:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1411923fc FUN_1411923fc body=3460 status=ok
// SIG undefined FUN_1411923fc(void)

void FUN_1411923fc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_328 [32];
  longlong local_308;
  short local_300;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  int local_2bc [3];
  undefined8 local_2b0;
  undefined4 local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  char local_288;
  undefined1 local_280;
  undefined1 local_27f [7];
  longlong local_278;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_14082167c();
  local_2a8 = *(undefined4 *)(param_1 + 0x80);
  local_2b0 = *(undefined8 *)(param_1 + 0x78);
  if ((int)local_2b0 == 0) goto LAB_141192e56;
  plVar11 = (longlong *)FUN_141193194(param_1,param_2,param_1 + 0x78);
  local_308 = CONCAT71(local_308._1_7_,2);
  FUN_1408234aa(extraout_XMM0_Da,&local_2a0,param_2,&DAT_14cb86eb8);
  FUN_14082207e(&local_80,&local_2a0,0);
  FUN_140822770(param_2 + 0x2c0,&local_80,1);
  FUN_1447cd778(CONCAT44(uStack_7c,local_80),local_78);
  if (CONCAT44(uStack_7c,local_80) != 0) {
    FUN_1400020a8();
  }
  local_2f0 = plVar11;
  local_2e0 = param_2;
  lVar12 = FUN_140823ef2(param_1,param_2,&local_2b0);
  pbVar5 = (byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc80);
  if ((*pbVar5 & 1) == 0) {
    plVar11 = (longlong *)FUN_148d8a891();
  }
  else {
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar9 = *(undefined4 *)(lVar13 + 0xc7c);
    *pbVar5 = 0;
    *(undefined4 *)(lVar13 + 0xc7c) = 0xffffffff;
    plVar11 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b97e0a0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[0xb] = 0;
    plVar11[2] = (longlong)&PTR_FUN_14b5c7400;
    *(undefined1 *)((longlong)plVar11 + 0x59) = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    *(undefined4 *)(plVar11 + 10) = 0;
    *(undefined4 *)(lVar13 + 0xc7c) = uVar9;
    *pbVar5 = 1;
  }
  lVar13 = local_2e0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  iVar15 = *(int *)(lVar12 + 0x50);
  *(uint *)(lVar12 + 0x50) = iVar15 + 1U;
  if (*(uint *)(lVar12 + 0x54) < iVar15 + 1U) {
    FUN_140822376((longlong *)(lVar12 + 0x48),iVar15);
  }
  lVar12 = *(longlong *)(lVar12 + 0x48);
  *(longlong **)(lVar12 + (longlong)iVar15 * 0x10) = plVar11 + 2;
  *(longlong **)(lVar12 + 8 + (longlong)iVar15 * 0x10) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar11 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar4 = (int *)((longlong)plVar11 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  *(undefined1 *)(plVar11 + 5) = *(undefined1 *)(param_1 + 0xa0);
  if (plVar11[6] == *(longlong *)(param_1 + 0xa8)) {
    iVar15 = *(int *)(param_1 + 0xb0);
    if ((int)plVar11[7] != iVar15) goto LAB_141192620;
  }
  else {
    iVar15 = *(int *)(param_1 + 0xb0);
LAB_141192620:
    plVar11[6] = *(longlong *)(param_1 + 0xa8);
    *(int *)(plVar11 + 7) = iVar15;
    plVar11[8] = 0;
  }
  *(undefined4 *)(plVar11 + 10) = *(undefined4 *)(param_1 + 200);
  plVar11[9] = *(longlong *)(param_1 + 0xc0);
  *(undefined1 *)(plVar11 + 0xb) = *(undefined1 *)(param_1 + 0x84);
  *(undefined1 *)((longlong)plVar11 + 0x59) = *(undefined1 *)(param_1 + 0x85);
  iVar15 = (int)plVar11[4];
  *(uint *)(plVar11 + 4) = iVar15 + 1U;
  if (*(uint *)((longlong)plVar11 + 0x24) < iVar15 + 1U) {
    FUN_140823334(plVar11 + 3,iVar15);
  }
  puVar7 = (undefined8 *)(plVar11[3] + (longlong)iVar15 * 0x28);
  *puVar7 = DAT_14cbcd4e0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  local_80 = CONCAT31(local_80._1_3_,1);
  local_74 = 1;
  uStack_7c = (undefined4)DAT_14cb7c588;
  local_78 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar7,&local_2a0,&local_80,0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar11 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar4 = (int *)((longlong)plVar11 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  plVar11 = *(longlong **)(param_1 + 0x88);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar13,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),local_2bc);
    if (local_2bc[0] != 0) {
      plVar11 = (longlong *)(param_1 + 0xc0);
      if (*(char *)(param_1 + 0xa0) == '\0') {
        if ((*(longlong *)(param_1 + 0xa8) == 0) || (0xfffffffd < *(int *)(param_1 + 0xb0) - 1U))
        goto LAB_141192e56;
      }
      else if (*(int *)plVar11 == 0) goto LAB_141192e56;
      local_2a0 = (longlong *)0x14b97bd0e;
      local_298 = (longlong *)CONCAT35(local_298._5_3_,0x12);
      local_80 = FUN_14001a6c0(&local_2a0,1);
      uStack_7c = 0;
      FUN_1401533ba(&local_2a0,&local_80,1);
      local_308 = CONCAT71(local_308._1_7_,2);
      FUN_1408234aa(param_1,&local_80,lVar13,&local_2a0);
      puVar6 = (undefined4 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc7c);
      uVar9 = *puVar6;
      bVar8 = *pbVar5;
      if ((bVar8 & 1) != 0) {
        *pbVar5 = 0;
        *puVar6 = 0xffffffff;
      }
      local_2e8 = (longlong *)FUN_14001cc68(0x48,0x10);
      local_2e8[1] = (longlong)&DAT_100000001;
      *local_2e8 = (longlong)&PTR_FUN_14b97e0c0;
      local_2e8[5] = 0;
      local_2e8[6] = 0;
      local_2e8[3] = 0;
      local_2e8[4] = 0;
      local_2e8[7] = 0;
      local_2e8[8] = 0;
      local_2e8[2] = (longlong)&PTR_FUN_14b5f8ce0;
      local_2e8[6] = 0;
      if ((bVar8 & 1) != 0) {
        *puVar6 = uVar9;
        *pbVar5 = 1;
      }
      *(undefined1 *)(local_2e8 + 3) = *(undefined1 *)(param_1 + 0xa0);
      iVar15 = *(int *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xa8) != 0 || iVar15 != 0) {
        local_2e8[4] = *(longlong *)(param_1 + 0xa8);
        *(int *)(local_2e8 + 5) = iVar15;
        local_2e8[6] = 0;
      }
      *(undefined4 *)(local_2e8 + 8) = *(undefined4 *)(param_1 + 200);
      local_2e8[7] = *plVar11;
      local_2d8 = plVar11;
      lVar12 = FUN_140823ef2(param_1,lVar13,&DAT_14c948618);
      if ((*pbVar5 & 1) == 0) {
        plVar11 = (longlong *)FUN_14001cc68(0x98,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14b41bb70;
        plVar11[0xf] = 0;
        plVar11[0x10] = 0;
        plVar11[5] = 0;
        plVar11[6] = 0;
        plVar11[7] = 0;
        plVar11[8] = 0;
        plVar11[9] = 0;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        plVar11[0xc] = 0;
        plVar11[0x11] = 0;
        plVar11[0x12] = 0;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[2] = (longlong)&PTR_FUN_14b00bf40;
        plVar11[0xd] = 0;
        plVar11[0xe] = 0;
        *(undefined4 *)(plVar11 + 0xf) = 0;
        *(undefined8 *)((longlong)plVar11 + 0x2c) = 0;
        *(undefined8 *)((longlong)plVar11 + 0x31) = 0;
        plVar11[8] = 0;
        plVar11[9] = 0;
        *(undefined8 *)((longlong)plVar11 + 0x4a) = 0;
        *(undefined8 *)((longlong)plVar11 + 0x52) = 0;
        plVar11[0x10] = 0;
        plVar11[0x11] = 0;
        *(undefined1 *)(plVar11 + 0x12) = 0;
      }
      else {
        uVar9 = *puVar6;
        *pbVar5 = 0;
        *puVar6 = 0xffffffff;
        plVar11 = (longlong *)FUN_14001cc68(0x98,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14b41bb70;
        plVar11[0xf] = 0;
        plVar11[0x10] = 0;
        plVar11[5] = 0;
        plVar11[6] = 0;
        plVar11[7] = 0;
        plVar11[8] = 0;
        plVar11[9] = 0;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        plVar11[0xc] = 0;
        plVar11[0x11] = 0;
        plVar11[0x12] = 0;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[2] = (longlong)&PTR_FUN_14b00bf40;
        plVar11[0xd] = 0;
        plVar11[0xe] = 0;
        *(undefined4 *)(plVar11 + 0xf) = 0;
        *(undefined8 *)((longlong)plVar11 + 0x2c) = 0;
        *(undefined8 *)((longlong)plVar11 + 0x31) = 0;
        plVar11[8] = 0;
        plVar11[9] = 0;
        *(undefined8 *)((longlong)plVar11 + 0x4a) = 0;
        *(undefined8 *)((longlong)plVar11 + 0x52) = 0;
        plVar11[0x10] = 0;
        plVar11[0x11] = 0;
        *(undefined1 *)(plVar11 + 0x12) = 0;
        *puVar6 = uVar9;
        *pbVar5 = 1;
      }
      local_2a0 = local_2e8 + 2;
      *(undefined1 *)(plVar11 + 5) = 3;
      if (local_2e8 == (longlong *)0x0) {
        local_298 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
        UNLOCK();
        local_298 = local_2e8;
        LOCK();
        *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
        UNLOCK();
      }
      if ((local_2a0 == (longlong *)0x0) || (lVar13 = (**(code **)(*local_2a0 + 8))(), lVar13 == 0))
      {
        local_290._0_4_ = 0;
        iVar15 = 0;
        uVar10 = (uint)local_290;
      }
      else {
        uVar10 = *(uint *)(lVar13 + 0xc);
        local_290 = (undefined4 *)(ulonglong)uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar15 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar16);
          }
          LOCK();
          iVar15 = *(int *)(lVar13 + 0x10);
          bVar17 = iVar15 == 0;
          if (bVar17) {
            *(int *)(lVar13 + 0x10) = iVar16;
            iVar15 = 0;
          }
          UNLOCK();
          uVar10 = (uint)local_290;
          if (bVar17) {
            iVar15 = iVar16;
          }
        }
      }
      local_290._0_4_ = uVar10;
      plVar14 = local_2e8;
      local_290 = (undefined4 *)CONCAT44(iVar15,(uint)local_290);
      if (local_2e8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_2e8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_2e8)(local_2e8);
          LOCK();
          piVar4 = (int *)((longlong)plVar14 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      FUN_14029d0b6(plVar11 + 8,&local_2a0);
      plVar14 = local_298;
      if (local_298 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_298 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_298)(local_298);
          LOCK();
          piVar4 = (int *)((longlong)plVar14 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      *(undefined4 *)(plVar11 + 0xc) = local_78;
      plVar11[0xb] = CONCAT44(uStack_7c,local_80);
      FUN_1447715ec(plVar11 + 0xd);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      iVar15 = *(int *)(lVar12 + 0x50);
      *(uint *)(lVar12 + 0x50) = iVar15 + 1U;
      if (*(uint *)(lVar12 + 0x54) < iVar15 + 1U) {
        FUN_140822376((longlong *)(lVar12 + 0x48),iVar15);
      }
      lVar12 = *(longlong *)(lVar12 + 0x48);
      *(longlong **)(lVar12 + (longlong)iVar15 * 0x10) = plVar11 + 2;
      *(longlong **)(lVar12 + 8 + (longlong)iVar15 * 0x10) = plVar11;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar14 = plVar11 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar4 = (int *)((longlong)plVar11 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      plVar14 = local_2f0;
      if (local_2f0 != (longlong *)0x0) {
        local_2a0 = (longlong *)&local_280;
        local_288 = '\0';
        local_290 = &local_80;
        local_298 = local_2a0;
        FUN_14014e8d0(local_290,&local_2a0);
        if (local_290 <= (undefined4 *)((longlong)local_298 + 1)) {
          FUN_145753a78(&local_2a0,1);
        }
        *(undefined1 *)local_298 = 0;
        local_298 = (longlong *)((longlong)local_298 + 1);
        FUN_140822110(&local_2d0,&local_2a0,0);
        iVar15 = (int)plVar14[7];
        *(uint *)(plVar14 + 7) = iVar15 + 1U;
        if (*(uint *)((longlong)plVar14 + 0x3c) < iVar15 + 1U) {
          FUN_1410f5714(plVar14 + 6,iVar15);
        }
        lVar12 = plVar14[6];
        lVar13 = (longlong)iVar15 * 0x10;
        *(undefined8 *)(lVar12 + lVar13) = 0;
        *(longlong *)(lVar12 + lVar13) = local_2d0;
        local_2d0 = 0;
        *(undefined4 *)(lVar12 + 8 + lVar13) = (undefined4)local_2c8;
        *(undefined4 *)(lVar12 + 0xc + lVar13) = local_2c8._4_4_;
        local_2c8 = 0;
        FUN_1447cd778(0,0);
        if (local_2d0 != 0) {
          FUN_1400020a8();
        }
        if (local_288 == '\x01') {
          FUN_1400020a8(local_2a0);
        }
      }
      uVar9 = *puVar6;
      bVar8 = *pbVar5;
      if ((bVar8 & 1) != 0) {
        *pbVar5 = 0;
        *puVar6 = 0xffffffff;
      }
      plVar14 = (longlong *)FUN_14001cc68(0x48,0x10);
      lVar12 = local_2e0;
      plVar14[1] = (longlong)&DAT_100000001;
      *plVar14 = (longlong)&PTR_FUN_14b97e0e0;
      plVar14[5] = 0;
      plVar14[6] = 0;
      plVar14[3] = 0;
      plVar14[4] = 0;
      plVar14[7] = 0;
      plVar14[8] = 0;
      plVar14[2] = (longlong)&PTR_FUN_14b945d40;
      plVar14[6] = 0;
      if ((bVar8 & 1) != 0) {
        *puVar6 = uVar9;
        *pbVar5 = 1;
      }
      local_2f0 = plVar14 + 2;
      *(undefined1 *)(plVar14 + 3) = *(undefined1 *)(param_1 + 0xa0);
      iVar15 = *(int *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xa8) != 0 || iVar15 != 0) {
        plVar14[4] = *(longlong *)(param_1 + 0xa8);
        *(int *)(plVar14 + 5) = iVar15;
        plVar14[6] = 0;
      }
      *(int *)(plVar14 + 8) = (int)local_2d8[1];
      plVar14[7] = *local_2d8;
      bVar8 = *(byte *)(param_1 + 8);
      local_298 = (longlong *)((ulonglong)local_298 & 0xffffffff00000000);
      local_2a0 = (longlong *)0x0;
      FUN_14089cb6a(param_1,&local_2d0,0,local_2e0);
      local_308 = param_1 + 0x10;
      local_300 = (ushort)bVar8 * 2;
      lVar12 = FUN_1408236ae(param_1,lVar12,&local_2d0,&local_2a0);
      local_2a0 = local_2f0;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_298 = plVar14;
      FUN_1403d9ddf(*(undefined8 *)(lVar12 + 0x20),*(undefined4 *)(lVar12 + 0x28));
      *(undefined4 *)(lVar12 + 0x28) = 1;
      FUN_140823b50(lVar12 + 0x20,1,*(undefined4 *)(lVar12 + 0x2c));
      FUN_140823a3c(*(undefined8 *)(lVar12 + 0x20),&local_2a0,1);
      plVar3 = local_298;
      plVar1 = local_2e8;
      if (local_298 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_298 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_298)(local_298);
          LOCK();
          piVar4 = (int *)((longlong)plVar3 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      local_2a0 = (longlong *)&local_280;
      local_288 = '\0';
      local_290 = &local_80;
      local_280 = 0x21;
      local_298 = (longlong *)local_27f;
      FUN_14014e8d0(local_290,&local_2a0);
      if (local_290 <= (undefined4 *)((longlong)local_298 + 1)) {
        FUN_145753a78(&local_2a0,1);
      }
      *(undefined1 *)local_298 = 0;
      local_298 = (longlong *)((longlong)local_298 + 1);
      FUN_140822110(&local_2d0,&local_2a0,0);
      iVar15 = *(int *)(lVar12 + 0x38);
      *(uint *)(lVar12 + 0x38) = iVar15 + 1U;
      if (*(uint *)(lVar12 + 0x3c) < iVar15 + 1U) {
        FUN_1410f5714((longlong *)(lVar12 + 0x30),iVar15);
      }
      lVar12 = *(longlong *)(lVar12 + 0x30);
      lVar13 = (longlong)iVar15 * 0x10;
      *(undefined8 *)(lVar12 + lVar13) = 0;
      *(longlong *)(lVar12 + lVar13) = local_2d0;
      local_2d0 = 0;
      *(undefined4 *)(lVar12 + 8 + lVar13) = (undefined4)local_2c8;
      *(undefined4 *)(lVar12 + 0xc + lVar13) = local_2c8._4_4_;
      local_2c8 = 0;
      FUN_1447cd778(0,0);
      if (local_2d0 != 0) {
        FUN_1400020a8();
      }
      if (local_288 == '\x01') {
        FUN_1400020a8(local_2a0);
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar4 = (int *)((longlong)plVar14 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar11 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar4 = (int *)((longlong)plVar11 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar1 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_141192e56:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141193194 FUN_141193194 body=117 status=ok
// SIG undefined FUN_141193194(void)

void FUN_141193194(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  short local_50;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_1 + 8);
  FUN_140822484(param_1,local_3c,param_2);
  local_58 = param_1 + 0x10;
  local_50 = (ushort)bVar1 * 2;
  FUN_1408236ae();
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119320a FUN_14119320a body=545 status=ok
// SIG undefined FUN_14119320a(void)

void FUN_14119320a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined4 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 8);
  lVar6 = FUN_140823ef2(param_3);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar5 + 0xc80) & 1) == 0) {
    plVar7 = (longlong *)FUN_1458275ce();
  }
  else {
    puVar3 = (undefined1 *)(lVar5 + 0xc80);
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar4 = *(undefined4 *)(lVar5 + 0xc7c);
    *puVar3 = 0;
    *(undefined4 *)(lVar5 + 0xc7c) = 0xffffffff;
    plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b97e060;
    plVar7[7] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[10] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[0xb] = 0;
    plVar7[2] = (longlong)&PTR_FUN_14b5c7380;
    *(undefined1 *)((longlong)plVar7 + 0x59) = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    *(undefined4 *)(plVar7 + 10) = 0;
    *(undefined4 *)(lVar5 + 0xc7c) = uVar4;
    *puVar3 = 1;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar8 = *(int *)(lVar6 + 0x50);
  *(uint *)(lVar6 + 0x50) = iVar8 + 1U;
  if (*(uint *)(lVar6 + 0x54) < iVar8 + 1U) {
    FUN_140822376((longlong *)(lVar6 + 0x48),iVar8);
  }
  lVar5 = *(longlong *)(lVar6 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar8 * 0x10) = plVar7 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
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
  }
  *(undefined1 *)(plVar7 + 5) = *(undefined1 *)(param_3 + 0xa0);
  if (plVar7[6] == *(longlong *)(param_3 + 0xa8)) {
    iVar8 = *(int *)(param_3 + 0xb0);
    if ((int)plVar7[7] == iVar8) goto LAB_141193399;
  }
  else {
    iVar8 = *(int *)(param_3 + 0xb0);
  }
  plVar7[6] = *(longlong *)(param_3 + 0xa8);
  *(int *)(plVar7 + 7) = iVar8;
  plVar7[8] = 0;
LAB_141193399:
  *(undefined4 *)(plVar7 + 10) = *(undefined4 *)(param_3 + 200);
  plVar7[9] = *(longlong *)(param_3 + 0xc0);
  *(undefined1 *)(plVar7 + 0xb) = *(undefined1 *)(param_1 + 0x14);
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
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119342c FUN_14119342c body=160 status=ok
// SIG undefined FUN_14119342c(void)

undefined8 * FUN_14119342c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14107dcc2(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141193445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)(**(code **)(lVar1 + 0x38))();
    return puVar2;
  }
  puVar2 = (undefined8 *)FUN_141193556(&DAT_14cb8d840);
  memset(puVar2 + 1,0,0xb8);
  *puVar2 = &PTR_FUN_14b023840;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[4] = &PTR_FUN_14b023870;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5a) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x62) = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0xe] = &PTR_FUN_14b023870;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xaa) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xb2) = 0;
  return puVar2;
}



// FUNCTION 1411934cc FUN_1411934cc body=138 status=ok
// SIG undefined FUN_1411934cc(void)

undefined8 * FUN_1411934cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_141193556(&DAT_14cb8d840);
  memset(puVar1 + 2,0,0xb0);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b023840;
  *(undefined1 *)((longlong)puVar1 + 0x19) = 0;
  puVar1[5] = 0;
  puVar1[4] = &PTR_FUN_14b023870;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5a) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x62) = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = &PTR_FUN_14b023870;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xaa) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb2) = 0;
  return puVar1;
}



// FUNCTION 141193556 FUN_141193556 body=96 status=ok
// SIG undefined FUN_141193556(void)

void FUN_141193556(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xc00,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x18;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1411935ec FUN_1411935ec body=7099 status=ok
// SIG undefined FUN_1411935ec(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1411935ec(longlong *param_1)

{
  ushort uVar1;
  longlong ***ppplVar2;
  void *pvVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *******ppppppplVar10;
  longlong *plVar11;
  uint *puVar12;
  uint *puVar13;
  longlong *******ppppppplVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  longlong ******pppppplVar17;
  longlong ******pppppplVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong ****pppplVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong ****pppplVar28;
  longlong *****ppppplVar29;
  int iVar30;
  bool bVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong *******ppppppplVar34;
  uint uVar35;
  longlong *****ppppplVar36;
  int iVar37;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined8 local_210;
  longlong *******local_208;
  undefined8 local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong ****local_1e8;
  uint local_1dc;
  longlong *****local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  uint *local_190;
  longlong local_188;
  longlong *******local_180;
  longlong *******ppppppplStack_178;
  undefined4 local_16c;
  longlong *******local_168;
  longlong *******ppppppplStack_160;
  longlong *******local_158;
  longlong *******ppppppplStack_150;
  uint local_148;
  float local_144;
  uint *local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong *******local_108;
  longlong *******ppppppplStack_100;
  undefined1 local_f8 [4];
  undefined4 local_f4;
  uint *local_e8;
  uint local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  if ((((((char)param_1[10] != '\x01') || (*(int *)((longlong)param_1 + 100) == 0)) ||
       (uVar20 = *(uint *)(param_1 + 0xc), (int)uVar20 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar20 ||
       (plVar24 = (longlong *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
       plVar24 == (longlong *)0x0)))) ||
     (((int)plVar24[2] != *(int *)((longlong)param_1 + 100) ||
      ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)))) goto LAB_141193788;
  if ((*(uint *)(plVar24 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar24;
  }
  else {
    lVar9 = 0;
  }
  if ((*(char *)(lVar9 + 0xcd) != '\0') || (*(char *)(lVar9 + 0xce) != '\0')) goto LAB_141193788;
  local_218 = param_1;
  plVar24 = (longlong *)FUN_14142a730();
  lVar9 = plVar24[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar24 + 1000))(plVar24);
    lVar9 = plVar24[0x22];
    if (lVar9 == 0) goto LAB_141193788;
  }
  if (*(int *)((longlong)local_218 + 100) == 0) {
LAB_14119391b:
    lVar27 = 0;
  }
  else {
    uVar20 = *(uint *)(local_218 + 0xc);
    lVar27 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      plVar24 = (longlong *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((plVar24 == (longlong *)0x0) ||
         (((int)plVar24[2] != *(int *)((longlong)local_218 + 100) ||
          ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)))) goto LAB_14119391b;
      lVar27 = *plVar24;
    }
  }
  if (((((*(int *)(lVar27 + 0x374) != 0) && (uVar20 = *(uint *)(lVar27 + 0x370), -1 < (int)uVar20))
       && ((int)uVar20 < DAT_14c9647dc)) &&
      (((plVar24 = (longlong *)
                   ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
        plVar24 != (longlong *)0x0 && ((int)plVar24[2] == *(int *)(lVar27 + 0x374))) &&
       (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 &&
        (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 && (*plVar24 != 0)))))))) &&
     (local_1c0 = lVar9, lVar9 = FUN_1400b6e86(), lVar9 != 0)) {
    plVar24 = (longlong *)(lVar9 + 0x30);
    local_1b8 = (longlong *)(**(code **)(*(longlong *)(lVar9 + 0x30) + 0x18))(plVar24);
    if ((local_1b8 != (longlong *)0x0) &&
       (lVar9 = (**(code **)(*plVar24 + 0x10))(plVar24), lVar9 != 0)) {
      local_1d0 = lVar9;
      lVar9 = FUN_140dd10c4();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(local_1d0 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_1d0 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
        uVar32 = 0;
        local_98 = (uint *)0x0;
        local_90 = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_190 = (uint *)(local_1c0 + 0x58);
        uVar20 = *(uint *)(local_1c0 + 0x70);
        if (uVar20 == 0) {
          local_1c8 = 1;
          uVar33 = 0;
          uVar19 = 0;
        }
        else {
          puVar13 = *(uint **)(local_1c0 + 0x68);
          if (*(uint **)(local_1c0 + 0x68) == (uint *)0x0) {
            puVar13 = local_190;
          }
          uVar19 = *puVar13;
          if (uVar19 == 0) {
            iVar37 = uVar20 + 0x1e;
            if (-1 < (int)(uVar20 - 1)) {
              iVar37 = uVar20 - 1;
            }
            uVar33 = 0;
            uVar26 = (ulonglong)(uint)(iVar37 >> 5);
            if (iVar37 >> 5 < 1) {
              uVar26 = uVar33;
            }
            uVar32 = 0;
            do {
              if (uVar26 == uVar33) goto LAB_141193939;
              uVar32 = (ulonglong)((int)uVar32 + 0x20);
              uVar19 = puVar13[uVar33 + 1];
              uVar33 = uVar33 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar32 = 0;
            uVar33 = 0;
          }
          local_1c8 = (ulonglong)(-uVar19 & uVar19);
          uVar26 = local_1c8 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar19 = ((int)uVar32 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if ((int)uVar20 <= (int)uVar19) {
            uVar19 = uVar20;
          }
        }
        if (uVar19 != uVar20) {
          local_1dc = 0xffffffff;
          lVar9 = local_1c0;
          local_1b0 = (ulonglong)uVar20;
          do {
            if (*(char *)(*(longlong *)(lVar9 + 0x48) + 0x1d + (longlong)(int)uVar19 * 0x28) ==
                '\x01') {
              lVar27 = *(longlong *)(lVar9 + 0x48) + (longlong)(int)uVar19 * 0x28;
              lVar25 = (longlong)*(int *)(lVar27 + 0x10);
              if (lVar25 != 0) {
                lVar9 = *(longlong *)(lVar27 + 8);
                local_188 = lVar9 + lVar25 * 0x28;
                local_1a0 = uVar33;
                local_198 = uVar32;
                do {
                  local_1a8 = lVar9;
                  lVar9 = FUN_1409f0d56();
                  if (lVar9 != 0) {
                    lVar9 = FUN_1409f0d56(local_1a8);
                    if ((longlong)*(int *)(lVar9 + 0x38) != 0) {
                      plVar24 = *(longlong **)(lVar9 + 0x30);
                      plVar11 = plVar24 + (longlong)*(int *)(lVar9 + 0x38) * 10;
                      local_210 = plVar11;
                      do {
                        FUN_14022188c(plVar24,&local_180);
                        if ((local_180 != (longlong *******)0x0) && (plVar24[4] != 0)) {
                          lVar27 = FUN_1407f5004();
                          lVar9 = plVar24[4];
                          bVar31 = true;
                          if (((lVar9 == 0) ||
                              (((lVar27 == 0 || (lVar25 = *(longlong *)(lVar9 + 0x10), lVar25 == 0))
                               || (*(int *)(lVar25 + 0x38) < *(int *)(lVar27 + 0x38))))) ||
                             (*(longlong *)
                               (*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(lVar27 + 0x38) * 8
                               ) != lVar27 + 0x30)) {
                            lVar27 = 0;
                          }
                          else {
                            if (*(char *)(lVar9 + 0x84) != '\x01') goto LAB_141193df8;
                            bVar31 = false;
                            lVar27 = lVar9;
                          }
                          local_168 = *(longlong ********)(lVar9 + 0x18);
                          FUN_1400021e4(&local_168,&local_108);
                          ppppppplVar34 = ppppppplStack_100;
                          iVar37 = (int)ppppppplStack_100;
                          uVar20 = (int)ppppppplStack_100 - 1;
                          if ((int)ppppppplStack_100 == 0) {
                            uVar20 = 0;
                          }
                          if (0 < (int)uVar20) {
                            uVar32 = 0;
                            do {
                              uVar1 = *(ushort *)((longlong)local_108 + uVar32 * 2);
                              *(ushort *)((longlong)local_108 + uVar32 * 2) =
                                   (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                              uVar32 = uVar32 + 1;
                            } while (uVar20 != uVar32);
                            uVar20 = (int)ppppppplStack_100 - 1;
                            if ((int)ppppppplStack_100 == 0) {
                              uVar20 = 0;
                            }
                          }
                          local_158 = local_108;
                          ppppppplStack_150 = ppppppplStack_100;
                          local_208 = local_108;
                          if ((int)uVar20 < 1) {
                            uVar32 = 0;
                          }
                          else {
                            ppppppplVar10 = local_108;
                            if ((int)ppppppplStack_100 == 0) {
                              ppppppplVar10 = (longlong *******)&DAT_149dfb77a;
                            }
                            lVar9 = 0;
                            uVar32 = 0;
                            do {
                              uVar1 = *(ushort *)((longlong)ppppppplVar10 + lVar9 * 2);
                              uVar19 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
                              uVar35 = (uint)(uVar32 >> 8) ^
                                       *(uint *)(&DAT_14c75d150 +
                                                (ulonglong)(((uint)uVar32 ^ uVar19) & 0xff) * 4);
                              uVar32 = (ulonglong)
                                       (uVar35 >> 8 ^
                                       *(uint *)(&DAT_14c75d150 +
                                                (ulonglong)(uVar35 & 0xff ^ uVar19 >> 8 & 0xff) * 4)
                                       );
                              lVar9 = lVar9 + 1;
                            } while (uVar20 != (uint)lVar9);
                          }
                          puVar15 = (undefined8 *)FUN_1403e7354(local_b8,uVar32,&local_158);
                          if (*(int *)(puVar15 + 1) < 2) {
                            *(int *)(puVar15 + 1) = iVar37;
                            if (iVar37 == 0 && *(int *)((longlong)puVar15 + 0xc) == 0) {
                              *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
                            }
                            else {
                              FUN_1446dd670(puVar15,(ulonglong)ppppppplVar34 & 0xffffffff);
                              if (iVar37 != 0) {
                                memcpy((void *)*puVar15,local_208,(longlong)iVar37 * 2);
                              }
                            }
                            if (!bVar31) {
                              *(undefined4 *)(puVar15 + 7) = *(undefined4 *)(lVar27 + 0x80);
                            }
                          }
                          local_200 = (undefined4 *)((longlong)puVar15 + 0x34);
                          local_1e8 = (longlong ****)(puVar15 + 6);
                          FUN_1401d6d70(plVar24[4] + 0x50);
                          plVar11 = (longlong *)
                                    (**(code **)(*local_1b8 + 0x2f8))(local_1b8,local_180);
                          uVar20 = *(uint *)(plVar11 + 5);
                          ppppplVar36 = (longlong *****)(ulonglong)uVar20;
                          puVar13 = (uint *)(plVar11 + 2);
                          local_1f8 = plVar24;
                          if (uVar20 == 0) {
                            uVar32 = 1;
                            uVar33 = 0;
                            iVar37 = 0;
                            uVar19 = 0;
                          }
                          else {
                            puVar12 = (uint *)plVar11[4];
                            if ((uint *)plVar11[4] == (uint *)0x0) {
                              puVar12 = puVar13;
                            }
                            uVar19 = *puVar12;
                            if (uVar19 == 0) {
                              iVar37 = uVar20 + 0x1e;
                              if (-1 < (int)(uVar20 - 1)) {
                                iVar37 = uVar20 - 1;
                              }
                              uVar33 = 0;
                              uVar32 = (ulonglong)(uint)(iVar37 >> 5);
                              if (iVar37 >> 5 < 1) {
                                uVar32 = uVar33;
                              }
                              iVar37 = 0;
                              do {
                                if (uVar32 == uVar33) goto LAB_141193dca;
                                iVar37 = iVar37 + 0x20;
                                uVar19 = puVar12[uVar33 + 1];
                                uVar33 = uVar33 + 1;
                              } while (uVar19 == 0);
                            }
                            else {
                              uVar33 = 0;
                              iVar37 = 0;
                            }
                            uVar32 = (ulonglong)(-uVar19 & uVar19);
                            uVar26 = uVar32 * 2 + 1;
                            lVar9 = 0x3f;
                            if (uVar26 != 0) {
                              for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                              }
                            }
                            uVar19 = (iVar37 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                            if ((int)uVar20 <= (int)uVar19) {
                              uVar19 = uVar20;
                            }
                          }
                          if (uVar19 != uVar20) {
                            uVar35 = 0xffffffff;
                            local_1f0 = plVar11;
                            local_1d8 = ppppplVar36;
                            do {
                              if (*(char *)(*plVar11 + 0x28 + (longlong)(int)uVar19 * 0x90) == '\0')
                              {
                                lVar27 = *plVar11 + (longlong)(int)uVar19 * 0x90;
                                lVar9 = lVar27 + 0x48;
                                if (*(longlong *)(lVar27 + 0x48) == *(longlong *)(lVar27 + 0x30)) {
                                  lVar9 = lVar27 + 0x30;
                                }
                                uVar19 = FUN_140230656(lVar9);
                                FUN_1400021e4(lVar9,&local_168);
                                ppppppplStack_100 = ppppppplStack_160;
                                uVar20 = (int)ppppppplStack_160 - 1;
                                if ((int)ppppppplStack_160 == 0) {
                                  uVar20 = 0;
                                }
                                if (0 < (int)uVar20) {
                                  uVar26 = 0;
                                  do {
                                    uVar1 = *(ushort *)((longlong)local_168 + uVar26 * 2);
                                    *(ushort *)((longlong)local_168 + uVar26 * 2) =
                                         (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                                    uVar26 = uVar26 + 1;
                                  } while (uVar20 != uVar26);
                                }
                                local_108 = local_168;
                                local_168 = (longlong *******)0x0;
                                ppppppplStack_160 = (longlong *******)0x0;
                                local_f8[0] = *(undefined1 *)local_1e8;
                                local_f4 = *local_200;
                                FUN_14041b13e((longlong)puVar15 +
                                              (ulonglong)((uVar19 & 0xff) << 4) + 0x10,&local_108);
                                plVar11 = local_1f0;
                                if (local_108 != (longlong *******)0x0) {
                                  FUN_1400020a8();
                                }
                                if (local_168 != (longlong *******)0x0) {
                                  FUN_1400020a8();
                                }
                                uVar20 = *(uint *)(plVar11 + 5);
                                ppppplVar36 = local_1d8;
                              }
                              uVar35 = uVar35 & ~(uint)uVar32;
                              puVar12 = (uint *)plVar11[4];
                              if ((uint *)plVar11[4] == (uint *)0x0) {
                                puVar12 = puVar13;
                              }
                              iVar8 = (int)uVar33;
                              lVar9 = (longlong)iVar8;
                              uVar19 = puVar12[lVar9] & uVar35;
                              if (uVar19 == 0) {
                                iVar30 = uVar20 + 0x1e;
                                if (-1 < (int)(uVar20 - 1)) {
                                  iVar30 = uVar20 - 1;
                                }
                                iVar30 = iVar30 >> 5;
                                iVar37 = iVar37 + 0x20;
                                iVar21 = iVar30;
                                if (iVar30 < iVar8) {
                                  iVar21 = iVar8;
                                }
                                if (iVar8 < iVar30) {
                                  lVar27 = 0;
                                  do {
                                    uVar19 = puVar12[lVar9 + lVar27 + 1];
                                    if (uVar19 != 0) {
                                      uVar33 = (ulonglong)(iVar8 + (int)lVar27 + 1);
                                      uVar35 = 0xffffffff;
                                      goto LAB_141193fcc;
                                    }
                                    iVar37 = iVar37 + 0x20;
                                    lVar27 = lVar27 + 1;
                                  } while (iVar21 - lVar9 != lVar27);
                                  uVar35 = 0xffffffff;
                                  iVar8 = iVar21;
                                }
                                uVar33 = (ulonglong)(iVar8 + 1);
                                uVar19 = uVar20;
                              }
                              else {
LAB_141193fcc:
                                uVar32 = (ulonglong)(-uVar19 & uVar19);
                                uVar26 = uVar32 * 2 + 1;
                                lVar9 = 0x3f;
                                if (uVar26 != 0) {
                                  for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                                  }
                                }
                                uVar19 = (iVar37 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                                if ((int)uVar20 <= (int)uVar19) {
                                  uVar19 = uVar20;
                                }
                              }
                            } while (uVar19 != (uint)ppppplVar36);
                          }
LAB_141193dca:
                          plVar11 = local_210;
                          plVar24 = local_1f8;
                          if (local_208 != (longlong *******)0x0) {
                            FUN_1400020a8();
                            plVar11 = local_210;
                            plVar24 = local_1f8;
                          }
                        }
LAB_141193df8:
                        plVar24 = plVar24 + 10;
                      } while (plVar24 != plVar11);
                    }
                  }
                  lVar9 = local_1a8 + 0x28;
                } while (lVar9 != local_188);
                uVar20 = *(uint *)(local_1c0 + 0x70);
                uVar33 = local_1a0;
                uVar32 = local_198;
                lVar9 = local_1c0;
              }
            }
            local_1dc = local_1dc & ~(uint)local_1c8;
            puVar13 = *(uint **)(lVar9 + 0x68);
            if (*(uint **)(lVar9 + 0x68) == (uint *)0x0) {
              puVar13 = local_190;
            }
            iVar37 = (int)uVar33;
            lVar27 = (longlong)iVar37;
            uVar19 = puVar13[lVar27] & local_1dc;
            if (uVar19 == 0) {
              iVar8 = uVar20 + 0x1e;
              if (-1 < (int)(uVar20 - 1)) {
                iVar8 = uVar20 - 1;
              }
              iVar8 = iVar8 >> 5;
              uVar32 = (ulonglong)((int)uVar32 + 0x20);
              iVar30 = iVar8;
              if (iVar8 < iVar37) {
                iVar30 = iVar37;
              }
              if (iVar37 < iVar8) {
                lVar25 = 0;
                do {
                  uVar19 = puVar13[lVar27 + lVar25 + 1];
                  if (uVar19 != 0) {
                    uVar33 = (ulonglong)(iVar37 + (int)lVar25 + 1);
                    local_1dc = 0xffffffff;
                    goto LAB_1411940eb;
                  }
                  uVar32 = (ulonglong)((int)uVar32 + 0x20);
                  lVar25 = lVar25 + 1;
                } while (iVar30 - lVar27 != lVar25);
                local_1dc = 0xffffffff;
                iVar37 = iVar30;
              }
              uVar33 = (ulonglong)(iVar37 + 1);
              lVar9 = local_1c0;
              uVar19 = uVar20;
            }
            else {
LAB_1411940eb:
              local_1c8 = (ulonglong)(-uVar19 & uVar19);
              uVar26 = local_1c8 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              uVar19 = ((int)uVar32 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if ((int)uVar20 <= (int)uVar19) {
                uVar19 = uVar20;
              }
            }
          } while (uVar19 != (uint)local_1b0);
        }
LAB_141193939:
        uVar32 = 0;
        local_e8 = (uint *)0x0;
        local_e0 = 0;
        local_108 = (longlong *******)0x0;
        ppppppplStack_100 = (longlong *******)0x0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_140d2530e(&local_108,local_1d0 + 0x4f0);
        lVar9 = FUN_140c7d608();
        if (lVar9 != 0) {
          local_180 = (longlong *******)&local_158;
          local_138 = (uint *)0x0;
          local_130 = 0;
          local_158 = (longlong *******)0x0;
          ppppppplStack_150 = (longlong *******)0x0;
          local_12c = 0xffffffff00000080;
          local_124 = 0;
          local_118 = 0;
          local_110 = 0;
          ppppppplStack_160 = (longlong *******)&local_180;
          local_168 = (longlong *******)&LAB_1438bb542;
          FUN_140ca888a(lVar9);
          iVar37 = local_130;
          if (local_130 == 0) {
            uVar33 = 1;
            iVar30 = 0;
            iVar8 = 0;
          }
          else {
            puVar13 = local_138;
            if (local_138 == (uint *)0x0) {
              puVar13 = &local_148;
            }
            uVar20 = *puVar13;
            if (uVar20 == 0) {
              iVar8 = local_130 + 0x1e;
              if (-1 < local_130 + -1) {
                iVar8 = local_130 + -1;
              }
              uVar32 = 0;
              uVar33 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar33 = uVar32;
              }
              iVar30 = 0;
              do {
                if (uVar33 == uVar32) goto LAB_141194180;
                iVar30 = iVar30 + 0x20;
                uVar20 = puVar13[uVar32 + 1];
                uVar32 = uVar32 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar32 = 0;
              iVar30 = 0;
            }
            uVar33 = (ulonglong)(-uVar20 & uVar20);
            uVar26 = uVar33 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar8 = (iVar30 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (local_130 <= iVar8) {
              iVar8 = local_130;
            }
          }
          if (iVar8 != local_130) {
            uVar20 = 0xffffffff;
            do {
              ppppppplVar34 = (longlong *******)local_158[(longlong)iVar8 * 3];
              if ((ppppppplVar34 != (longlong *******)0x0) &&
                 (ppppppplVar10 = local_158 + (longlong)iVar8 * 3,
                 ppppppplVar10[1] != (longlong ******)0x0)) {
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(ppppppplVar34);
                }
                local_168 = ppppppplVar34;
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(ppppppplVar34);
                }
                ppppppplVar34 = local_168;
                if (((DAT_14c950c29 & 1) != 0) && (local_168 != (longlong *******)0x0)) {
                  FUN_1456cec3c(local_168);
                }
                uVar19 = ((uint)((ulonglong)ppppppplVar34 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)ppppppplVar34 >> 4)) * -0x7a143595;
                uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                iVar8 = FUN_140cdd232(&local_108,uVar19 >> 0x10 ^ uVar19,&local_168);
                if (local_108 + (longlong)iVar8 * 3 != (longlong *******)0x0 && iVar8 != -1) {
                  local_16c = *(undefined4 *)(local_108 + (longlong)iVar8 * 3 + 1);
                  pppppplVar18 = *ppppppplVar10;
                  if ((DAT_14c950c29 == 1) && (pppppplVar18 != (longlong ******)0x0)) {
                    FUN_1456cec3c(pppppplVar18);
                  }
                  local_168 = (longlong *******)pppppplVar18;
                  if (((DAT_14c950c29 & 1) != 0) && (pppppplVar18 != (longlong ******)0x0)) {
                    FUN_1456cec3c(pppppplVar18);
                  }
                  FUN_140334d8a(&local_108,&local_168);
                  ppppppplStack_160 = (longlong *******)&local_16c;
                  local_168 = ppppppplVar10 + 1;
                  FUN_147f9ad56(&local_108,&local_180,&local_168,0);
                }
              }
              uVar20 = uVar20 & ~(uint)uVar33;
              puVar13 = local_138;
              if (local_138 == (uint *)0x0) {
                puVar13 = &local_148;
              }
              iVar8 = (int)uVar32;
              lVar9 = (longlong)iVar8;
              uVar19 = puVar13[lVar9] & uVar20;
              if (uVar19 == 0) {
                iVar21 = local_130 + 0x1e;
                if (-1 < local_130 + -1) {
                  iVar21 = local_130 + -1;
                }
                iVar21 = iVar21 >> 5;
                iVar30 = iVar30 + 0x20;
                iVar22 = iVar21;
                if (iVar21 < iVar8) {
                  iVar22 = iVar8;
                }
                if (iVar8 < iVar21) {
                  lVar27 = 0;
                  do {
                    uVar19 = puVar13[lVar9 + lVar27 + 1];
                    if (uVar19 != 0) {
                      uVar32 = (ulonglong)(iVar8 + (int)lVar27 + 1);
                      uVar20 = 0xffffffff;
                      goto LAB_141195061;
                    }
                    iVar30 = iVar30 + 0x20;
                    lVar27 = lVar27 + 1;
                  } while (iVar22 - lVar9 != lVar27);
                  uVar20 = 0xffffffff;
                  iVar8 = iVar22;
                }
                uVar32 = (ulonglong)(iVar8 + 1);
                iVar8 = local_130;
              }
              else {
LAB_141195061:
                uVar33 = (ulonglong)(-uVar19 & uVar19);
                uVar26 = uVar33 * 2 + 1;
                lVar9 = 0x3f;
                if (uVar26 != 0) {
                  for (; uVar26 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                iVar8 = (iVar30 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                if (local_130 <= iVar8) {
                  iVar8 = local_130;
                }
              }
            } while (iVar8 != iVar37);
          }
LAB_141194180:
          local_110 = 0;
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          FUN_140f0c3ca();
        }
        plVar24 = (longlong *)(ulonglong)local_e0;
        plVar11 = local_218;
        if (local_e0 == 0) {
          local_1f8 = (longlong *)&DAT_00000001;
          local_208 = (longlong *******)0x0;
          local_210 = (longlong *)((ulonglong)local_210._4_4_ << 0x20);
          uVar20 = 0;
        }
        else {
          puVar13 = local_e8;
          if (local_e8 == (uint *)0x0) {
            puVar13 = (uint *)local_f8;
          }
          uVar20 = *puVar13;
          if (uVar20 == 0) {
            iVar37 = local_e0 + 0x1e;
            if (-1 < (int)(local_e0 - 1)) {
              iVar37 = local_e0 - 1;
            }
            ppppppplVar34 = (longlong *******)0x0;
            ppppppplVar10 = (longlong *******)(ulonglong)(uint)(iVar37 >> 5);
            if (iVar37 >> 5 < 1) {
              ppppppplVar10 = ppppppplVar34;
            }
            local_210 = (longlong *)((ulonglong)local_210 & 0xffffffff00000000);
            do {
              if (ppppppplVar10 == ppppppplVar34) goto LAB_14119426b;
              local_210 = (longlong *)CONCAT44(local_210._4_4_,(int)local_210 + 0x20);
              uVar20 = puVar13[(longlong)((longlong)ppppppplVar34 + 1)];
              ppppppplVar34 = (longlong *******)((longlong)ppppppplVar34 + 1);
            } while (uVar20 == 0);
          }
          else {
            ppppppplVar34 = (longlong *******)0x0;
            local_210 = (longlong *)((ulonglong)local_210._4_4_ << 0x20);
          }
          local_1f8 = (longlong *)(ulonglong)(-uVar20 & uVar20);
          uVar32 = (longlong)local_1f8 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar20 = ((int)local_210 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          local_208 = ppppppplVar34;
          if ((int)local_e0 <= (int)uVar20) {
            uVar20 = local_e0;
          }
        }
        if (uVar20 != local_e0) {
          local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,0xffffffff);
          local_1b8 = plVar24;
          uVar19 = local_e0;
          do {
            pppppplVar18 = local_108[(longlong)(int)uVar20 * 3];
            if ((pppppplVar18 != (longlong ******)0x0) &&
               ((longlong)*(int *)(pppppplVar18 + 7) != 0)) {
              ppppplVar36 = pppppplVar18[6];
              ppppplVar29 = ppppplVar36 + (longlong)*(int *)(pppppplVar18 + 7) * 10;
              local_1d8 = ppppplVar29;
              do {
                pppplVar28 = ppppplVar36[4];
                if ((DAT_14c950c29 == 1) && (pppplVar28 != (longlong ****)0x0)) {
                  FUN_1456cec3c(pppplVar28);
LAB_141194375:
                  plVar24 = (longlong *)FUN_1407f5004();
                  if ((((plVar24 == (longlong *)0x0) ||
                       (ppplVar2 = pppplVar28[2], ppplVar2 == (longlong ***)0x0)) ||
                      (plVar11 = plVar24 + 7, *(int *)(ppplVar2 + 7) < (int)*plVar11)) ||
                     (plVar24 = plVar24 + 6, ppplVar2[6][(int)*plVar11] != plVar24)) {
                    local_200 = (undefined4 *)
                                CONCAT44(local_200._4_4_,
                                         (int)CONCAT71((int7)((ulonglong)plVar24 >> 8),1));
                    local_1e8 = (longlong ****)0x0;
                  }
                  else {
                    plVar11 = local_218;
                    if (*(char *)((longlong)pppplVar28 + 0x84) != '\x01') goto LAB_141194722;
                    local_200 = (undefined4 *)((ulonglong)local_200._4_4_ << 0x20);
                    local_1e8 = pppplVar28;
                  }
                  local_180 = (longlong *******)pppplVar28[3];
                  FUN_1400021e4(&local_180,&local_158);
                  ppppppplVar10 = ppppppplStack_150;
                  ppppppplVar34 = local_158;
                  iVar37 = (int)ppppppplStack_150;
                  uVar20 = (int)ppppppplStack_150 - 1;
                  if ((int)ppppppplStack_150 == 0) {
                    uVar20 = 0;
                  }
                  if (0 < (int)uVar20) {
                    uVar32 = 0;
                    do {
                      uVar1 = *(ushort *)((longlong)local_158 + uVar32 * 2);
                      *(ushort *)((longlong)local_158 + uVar32 * 2) =
                           (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                      uVar32 = uVar32 + 1;
                    } while (uVar20 != uVar32);
                    uVar20 = (int)ppppppplStack_150 - 1;
                    if ((int)ppppppplStack_150 == 0) {
                      uVar20 = 0;
                    }
                  }
                  local_168 = local_158;
                  ppppppplStack_160 = ppppppplStack_150;
                  if ((int)uVar20 < 1) {
                    uVar32 = 0;
                  }
                  else {
                    ppppppplVar14 = local_158;
                    if ((int)ppppppplStack_150 == 0) {
                      ppppppplVar14 = (longlong *******)&DAT_149dfb77a;
                    }
                    lVar9 = 0;
                    uVar32 = 0;
                    do {
                      uVar1 = *(ushort *)((longlong)ppppppplVar14 + lVar9 * 2);
                      uVar19 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
                      uVar35 = (uint)(uVar32 >> 8) ^
                               *(uint *)(&DAT_14c75d150 +
                                        (ulonglong)(((uint)uVar32 ^ uVar19) & 0xff) * 4);
                      uVar32 = (ulonglong)
                               (uVar35 >> 8 ^
                               *(uint *)(&DAT_14c75d150 +
                                        (ulonglong)(uVar35 & 0xff ^ uVar19 >> 8 & 0xff) * 4));
                      lVar9 = lVar9 + 1;
                    } while (uVar20 != (uint)lVar9);
                  }
                  puVar15 = (undefined8 *)FUN_1403e7354(local_b8,uVar32,&local_168);
                  if (*(int *)(puVar15 + 1) < 2) {
                    *(int *)(puVar15 + 1) = iVar37;
                    if (iVar37 == 0 && *(int *)((longlong)puVar15 + 0xc) == 0) {
                      *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
                    }
                    else {
                      FUN_1446dd670(puVar15,(ulonglong)ppppppplVar10 & 0xffffffff);
                      if (iVar37 != 0) {
                        memcpy((void *)*puVar15,ppppppplVar34,(longlong)iVar37 * 2);
                      }
                    }
                    if ((char)local_200 == '\0') {
                      *(undefined4 *)(puVar15 + 7) = *(undefined4 *)(local_1e8 + 0x10);
                    }
                  }
                  FUN_1401d6d70(pppplVar28 + 10,puVar15 + 6);
                  ppppplVar29 = ppppplVar36 + 5;
                  cVar7 = FUN_140230656(ppppplVar29);
                  if (((cVar7 != '\0') || (*(int *)(puVar15 + 3) < 1)) &&
                     ((cVar7 = FUN_140230656(ppppplVar29), cVar7 == '\0' ||
                      (*(int *)(puVar15 + 5) < 1)))) {
                    FUN_140056680(&local_158,&DAT_149dfb77a);
                    local_148._0_1_ = 0;
                    local_144 = 0.0;
                    FUN_1400021e4(ppppplVar29,&local_180);
                    ppppppplVar10 = ppppppplStack_178;
                    ppppppplVar34 = local_180;
                    uVar20 = (int)ppppppplStack_178 - 1;
                    if ((int)ppppppplStack_178 == 0) {
                      uVar20 = 0;
                    }
                    if (0 < (int)uVar20) {
                      uVar32 = 0;
                      do {
                        uVar1 = *(ushort *)((longlong)local_180 + uVar32 * 2);
                        *(ushort *)((longlong)local_180 + uVar32 * 2) =
                             (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                        uVar32 = uVar32 + 1;
                      } while (uVar20 != uVar32);
                    }
                    local_180 = (longlong *******)0x0;
                    ppppppplStack_178 = (longlong *******)0x0;
                    if (local_158 == (longlong *******)0x0) {
                      local_158 = ppppppplVar34;
                      ppppppplStack_150 = ppppppplVar10;
                    }
                    else {
                      FUN_1400020a8();
                      local_158 = ppppppplVar34;
                      ppppppplStack_150 = ppppppplVar10;
                      if (local_180 != (longlong *******)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    FUN_1401d6d70(ppppplVar36,&local_148);
                    if (local_144 <= *(float *)((longlong)puVar15 + 0x34)) {
                      local_144 = *(float *)((longlong)puVar15 + 0x34);
                    }
                    local_148._0_1_ = (byte)local_148 | *(byte *)(puVar15 + 6);
                    bVar5 = FUN_140230656(ppppplVar29);
                    FUN_14041b13e(puVar15 + (ulonglong)bVar5 * 2 + 2,&local_158);
                    if (local_158 != (longlong *******)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  ppppplVar29 = local_1d8;
                  plVar11 = local_218;
                  if (local_168 != (longlong *******)0x0) {
                    FUN_1400020a8();
                    plVar11 = local_218;
                  }
                }
                else if (pppplVar28 != (longlong ****)0x0) goto LAB_141194375;
LAB_141194722:
                ppppplVar36 = ppppplVar36 + 10;
                plVar24 = local_1b8;
                uVar19 = local_e0;
              } while (ppppplVar36 != ppppplVar29);
            }
            uVar20 = (uint)local_1f0 & ~(uint)local_1f8;
            puVar13 = local_e8;
            if (local_e8 == (uint *)0x0) {
              puVar13 = (uint *)local_f8;
            }
            iVar37 = (int)local_208;
            lVar9 = (longlong)iVar37;
            uVar35 = puVar13[lVar9] & uVar20;
            local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,uVar20);
            if (uVar35 == 0) {
              iVar8 = uVar19 + 0x1e;
              if (-1 < (int)(uVar19 - 1)) {
                iVar8 = uVar19 - 1;
              }
              iVar8 = iVar8 >> 5;
              local_210 = (longlong *)CONCAT44(local_210._4_4_,(int)local_210 + 0x20);
              iVar30 = iVar8;
              if (iVar8 < iVar37) {
                iVar30 = iVar37;
              }
              if (iVar37 < iVar8) {
                lVar27 = 0;
                do {
                  uVar35 = puVar13[lVar9 + lVar27 + 1];
                  if (uVar35 != 0) {
                    local_208 = (longlong *******)(ulonglong)(iVar37 + (int)lVar27 + 1);
                    local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,0xffffffff);
                    goto LAB_1411947ea;
                  }
                  local_210 = (longlong *)CONCAT44(local_210._4_4_,(int)local_210 + 0x20);
                  lVar27 = lVar27 + 1;
                } while (iVar30 - lVar9 != lVar27);
                local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,0xffffffff);
                lVar9 = (longlong)iVar30;
              }
              local_208 = (longlong *******)(lVar9 + 1);
              plVar11 = local_218;
              uVar20 = uVar19;
            }
            else {
LAB_1411947ea:
              local_1f8 = (longlong *)(ulonglong)(-uVar35 & uVar35);
              uVar32 = (longlong)local_1f8 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              uVar20 = ((int)local_210 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
              if ((int)uVar19 <= (int)uVar20) {
                uVar20 = uVar19;
              }
            }
          } while (uVar20 != (uint)plVar24);
        }
LAB_14119426b:
        if (local_90 == 0) {
          ppppplVar36 = (longlong *****)0x1;
          pppplVar28 = (longlong ****)0x0;
          iVar37 = 0;
          uVar20 = 0;
        }
        else {
          puVar13 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar13 = local_a8;
          }
          uVar20 = *puVar13;
          if (uVar20 == 0) {
            iVar37 = local_90 + 0x1e;
            if (-1 < (int)(local_90 - 1)) {
              iVar37 = local_90 - 1;
            }
            pppplVar28 = (longlong ****)0x0;
            pppplVar23 = (longlong ****)(ulonglong)(uint)(iVar37 >> 5);
            if (iVar37 >> 5 < 1) {
              pppplVar23 = pppplVar28;
            }
            iVar37 = 0;
            do {
              if (pppplVar23 == pppplVar28) goto LAB_141194845;
              iVar37 = iVar37 + 0x20;
              uVar20 = puVar13[(longlong)((longlong)pppplVar28 + 1)];
              pppplVar28 = (longlong ****)((longlong)pppplVar28 + 1);
            } while (uVar20 == 0);
          }
          else {
            pppplVar28 = (longlong ****)0x0;
            iVar37 = 0;
          }
          ppppplVar36 = (longlong *****)(ulonglong)(-uVar20 & uVar20);
          uVar32 = (longlong)ppppplVar36 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar20 = (iVar37 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if ((int)local_90 <= (int)uVar20) {
            uVar20 = local_90;
          }
        }
        if (uVar20 != local_90) {
          local_208 = (longlong *******)(plVar11 + 0xd);
          local_210 = plVar11 + 7;
          local_200 = (undefined4 *)CONCAT44(local_200._4_4_,0xffffffff);
          uVar19 = local_90;
          local_1f8 = (longlong *)(ulonglong)local_90;
          do {
            plVar24 = local_218;
            local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,iVar37);
            puVar15 = (undefined8 *)(local_b8[0] + (longlong)(int)uVar20 * 0x58);
            iVar37 = *(int *)(local_b8[0] + 8 + (longlong)(int)uVar20 * 0x58);
            iVar8 = iVar37 + -1;
            if (iVar37 == 0) {
              iVar8 = 0;
            }
            uVar32 = 0;
            if (0 < iVar8) {
              puVar16 = &DAT_149dfb77a;
              if (iVar37 != 0) {
                puVar16 = (undefined2 *)*puVar15;
              }
              lVar9 = 0;
              uVar32 = 0;
              do {
                uVar20 = ((uint)(0x19 < (ushort)puVar16[lVar9] - 0x61) * 0x20 +
                         (uint)(ushort)puVar16[lVar9]) - 0x20;
                uVar35 = (uint)(uVar32 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar32 ^ uVar20) & 0xff) * 4)
                ;
                uVar32 = (ulonglong)
                         (uVar35 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar35 & 0xff ^ uVar20 >> 8 & 0xff) * 4));
                lVar9 = lVar9 + 1;
              } while (iVar8 != (int)lVar9);
            }
            local_1e8 = pppplVar28;
            local_1d8 = ppppplVar36;
            iVar37 = FUN_1449870e2(local_218,uVar32,puVar15);
            if (iVar37 == -1) {
LAB_1411949f7:
              ppppppplVar34 = local_208;
              pppppplVar18 = (longlong ******)plVar24[0xd];
              uVar20 = *(uint *)(plVar24 + 0xe);
              uVar32 = (ulonglong)uVar20;
              pppppplVar17 = pppppplVar18 + uVar32 * 8 + -1;
              do {
                uVar19 = (uint)uVar32;
                if ((int)uVar19 < 1) {
                  uVar19 = 0;
                  break;
                }
                iVar37 = *(int *)pppppplVar17;
                pppppplVar17 = pppppplVar17 + -8;
                uVar32 = (ulonglong)(uVar19 - 1);
              } while (*(int *)(puVar15 + 9) < iVar37);
              *(uint *)(plVar24 + 0xe) = uVar20 + 1;
              if (*(uint *)((longlong)plVar24 + 0x74) < uVar20 + 1) {
                FUN_1418b886c(local_208,uVar20);
                pppppplVar18 = *ppppppplVar34;
              }
              uVar32 = (ulonglong)uVar19;
              memmove(pppppplVar18 + uVar32 * 8 + 8,pppppplVar18 + uVar32 * 8,
                      (ulonglong)(uVar20 - uVar19) << 6);
              pppppplVar17 = *local_208;
              pppppplVar18 = pppppplVar17 + uVar32 * 8;
              pppppplVar17[uVar32 * 8] = (longlong *****)0x0;
              iVar37 = *(int *)(puVar15 + 3);
              pvVar3 = (void *)puVar15[2];
              *(int *)(pppppplVar17 + uVar32 * 8 + 1) = iVar37;
              if ((longlong)iVar37 == 0) {
                *(undefined4 *)((longlong)pppppplVar18 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(pppppplVar18,iVar37,0);
                memcpy(*pppppplVar18,pvVar3,(longlong)iVar37 * 2);
              }
              pppppplVar18[2] = (longlong *****)0x0;
              iVar37 = *(int *)(puVar15 + 5);
              uVar4 = puVar15[4];
              *(int *)(pppppplVar18 + 3) = iVar37;
              if (iVar37 == 0) {
                *(undefined4 *)((longlong)pppppplVar18 + 0x1c) = 0;
              }
              else {
                FUN_140af8e78(pppppplVar18 + 2,iVar37);
                FUN_140af8e00(pppppplVar18[2],uVar4,iVar37);
              }
              pppppplVar18[4] = (longlong *****)0x0;
              iVar37 = *(int *)(puVar15 + 7);
              uVar4 = puVar15[6];
              *(int *)(pppppplVar18 + 5) = iVar37;
              if (iVar37 == 0) {
                *(undefined4 *)((longlong)pppppplVar18 + 0x2c) = 0;
              }
              else {
                FUN_140af8e78(pppppplVar18 + 4,iVar37);
                FUN_140af8e00(pppppplVar18[4],uVar4,iVar37);
              }
              *(undefined4 *)(pppppplVar18 + 7) = *(undefined4 *)(puVar15 + 9);
              pppppplVar18[6] = (longlong *****)puVar15[8];
              FUN_1403e7758(local_218,&local_158);
              ppppppplVar34 = ppppppplStack_150;
              *ppppppplStack_150 = (longlong ******)0x0;
              iVar37 = *(int *)(puVar15 + 1);
              pvVar3 = (void *)*puVar15;
              *(int *)(ppppppplStack_150 + 1) = iVar37;
              if ((longlong)iVar37 == 0) {
                *(undefined4 *)((longlong)ppppppplStack_150 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(ppppppplStack_150,iVar37,0);
                memcpy(*ppppppplVar34,pvVar3,(longlong)iVar37 * 2);
              }
              ppppppplVar34[2] = (longlong ******)0x0;
              iVar37 = *(int *)(puVar15 + 3);
              pvVar3 = (void *)puVar15[2];
              *(int *)(ppppppplVar34 + 3) = iVar37;
              if ((longlong)iVar37 == 0) {
                *(undefined4 *)((longlong)ppppppplVar34 + 0x1c) = 0;
              }
              else {
                FUN_1446dd670(ppppppplVar34 + 2,iVar37,0);
                memcpy(ppppppplVar34[2],pvVar3,(longlong)iVar37 * 2);
              }
              ppppppplVar34[4] = (longlong ******)0x0;
              iVar37 = *(int *)(puVar15 + 5);
              uVar4 = puVar15[4];
              *(int *)(ppppppplVar34 + 5) = iVar37;
              if (iVar37 == 0) {
                *(undefined4 *)((longlong)ppppppplVar34 + 0x2c) = 0;
              }
              else {
                FUN_140af8e78(ppppppplVar34 + 4,iVar37);
                FUN_140af8e00(ppppppplVar34[4],uVar4,iVar37);
              }
              ppppppplVar34[6] = (longlong ******)0x0;
              iVar37 = *(int *)(puVar15 + 7);
              uVar4 = puVar15[6];
              *(int *)(ppppppplVar34 + 7) = iVar37;
              if (iVar37 == 0) {
                *(undefined4 *)((longlong)ppppppplVar34 + 0x3c) = 0;
              }
              else {
                FUN_140af8e78(ppppppplVar34 + 6,iVar37);
                FUN_140af8e00(ppppppplVar34[6],uVar4,iVar37);
              }
              *(undefined4 *)(ppppppplVar34 + 9) = *(undefined4 *)(puVar15 + 9);
              ppppppplVar34[8] = (longlong ******)puVar15[8];
              *(undefined4 *)(ppppppplVar34 + 10) = 0xffffffff;
              local_168 = (longlong *******)CONCAT44(local_168._4_4_,local_158._0_4_);
              iVar37 = *(int *)(ppppppplVar34 + 1);
              uVar20 = 0;
              iVar8 = iVar37 + -1;
              if (iVar37 == 0) {
                iVar8 = 0;
              }
              if (0 < iVar8) {
                pppppplVar18 = (longlong ******)&DAT_149dfb77a;
                if (iVar37 != 0) {
                  pppppplVar18 = *ppppppplVar34;
                }
                lVar9 = 0;
                uVar20 = 0;
                do {
                  uVar1 = *(ushort *)((longlong)pppppplVar18 + lVar9 * 2);
                  uVar19 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
                  uVar20 = uVar20 >> 8 ^
                           *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar20 ^ uVar19) & 0xff) * 4);
                  uVar20 = uVar20 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar20 & 0xff ^ uVar19 >> 8 & 0xff) * 4);
                  lVar9 = lVar9 + 1;
                } while (iVar8 != (int)lVar9);
              }
              cVar7 = FUN_1403e7624(local_218,uVar20,ppppppplVar34,&local_168);
              uVar19 = local_90;
              if (cVar7 == '\0') {
                uVar35 = (int)local_218[1] - *(int *)((longlong)local_218 + 0x34);
                if (uVar35 < 4) {
                  iVar37 = 1;
                }
                else {
                  uVar32 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
                  lVar9 = 0x3f;
                  if (uVar32 != 0) {
                    for (; uVar32 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                    }
                  }
                  iVar37 = 1 << ((byte)lVar9 & 0x1f);
                }
                if (((int)uVar35 < 1) || (iVar37 <= (int)local_218[9])) {
                  uVar20 = (int)local_218[9] - 1U & uVar20;
                  *(uint *)((longlong)ppppppplVar34 + 0x54) = uVar20;
                  plVar24 = (longlong *)local_218[8];
                  if ((longlong *)local_218[8] == (longlong *)0x0) {
                    plVar24 = local_210;
                  }
                  *(undefined4 *)(ppppppplVar34 + 10) =
                       *(undefined4 *)
                        ((longlong)plVar24 +
                        ((longlong)(int)local_218[9] - 1U & (longlong)(int)uVar20) * 4);
                  plVar24 = (longlong *)local_218[8];
                  if ((longlong *)local_218[8] == (longlong *)0x0) {
                    plVar24 = local_210;
                  }
                  *(undefined4 *)
                   ((longlong)plVar24 +
                   ((longlong)(int)local_218[9] - 1U & (longlong)(int)uVar20) * 4) = local_168._0_4_
                  ;
                }
                else {
                  *(int *)(local_218 + 9) = iVar37;
                  FUN_1403e7b96(local_218);
                  uVar19 = local_90;
                }
              }
            }
            else {
              if ((*plVar24 + (longlong)iVar37 * 0x58 + 0x10U & 0xffffffffffffffef) == 0)
              goto LAB_1411949f7;
              lVar9 = *plVar24 + (longlong)iVar37 * 0x58;
              if (*(int *)(lVar9 + 0x38) == *(int *)(puVar15 + 7)) {
                bVar5 = FUN_1401c35ce(*(undefined8 *)(lVar9 + 0x30),puVar15[6]);
                plVar24 = local_218;
              }
              else {
                bVar5 = 0;
              }
              if ((*(int *)(lVar9 + 0x28) != *(int *)(puVar15 + 5)) ||
                 (bVar6 = FUN_1401c35ce(*(undefined8 *)(lVar9 + 0x20),puVar15[4]),
                 plVar24 = local_218, (bVar5 & bVar6) == 0)) goto LAB_1411949f7;
            }
            uVar35 = (uint)local_200 & ~(uint)local_1d8;
            puVar13 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar13 = local_a8;
            }
            iVar8 = (int)local_1e8;
            lVar9 = (longlong)iVar8;
            uVar20 = puVar13[lVar9] & uVar35;
            pppplVar28 = local_1e8;
            iVar37 = (uint)local_1f0;
            if (uVar20 == 0) {
              iVar30 = uVar19 + 0x1e;
              if (-1 < (int)(uVar19 - 1)) {
                iVar30 = uVar19 - 1;
              }
              iVar30 = iVar30 >> 5;
              iVar37 = (uint)local_1f0 + 0x20;
              iVar21 = iVar30;
              if (iVar30 < iVar8) {
                iVar21 = iVar8;
              }
              if (iVar8 < iVar30) {
                lVar27 = 0;
                do {
                  uVar20 = puVar13[lVar9 + lVar27 + 1];
                  if (uVar20 != 0) {
                    uVar35 = 0xffffffff;
                    pppplVar28 = (longlong ****)(ulonglong)(iVar8 + (int)lVar27 + 1);
                    goto LAB_141194e40;
                  }
                  iVar37 = iVar37 + 0x20;
                  lVar27 = lVar27 + 1;
                } while (iVar21 - lVar9 != lVar27);
                uVar35 = 0xffffffff;
                iVar8 = iVar21;
              }
              pppplVar28 = (longlong ****)(ulonglong)(iVar8 + 1);
              ppppplVar36 = local_1d8;
              uVar20 = uVar19;
            }
            else {
LAB_141194e40:
              ppppplVar36 = (longlong *****)(ulonglong)(-uVar20 & uVar20);
              uVar32 = (longlong)ppppplVar36 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              uVar20 = (iVar37 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
              if ((int)uVar19 <= (int)uVar20) {
                uVar20 = uVar19;
              }
            }
            local_200 = (undefined4 *)CONCAT44(local_200._4_4_,uVar35);
            plVar11 = local_218;
          } while (uVar20 != (uint)local_1f8);
        }
LAB_141194845:
        *(undefined1 *)((longlong)plVar11 + 0x51) = 0;
        FUN_143eb152c(plVar11);
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_141078e0c(&local_108);
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_140e916c2(local_b8);
      }
    }
  }
LAB_141193788:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411951a8 FUN_1411951a8 body=465 status=ok
// SIG undefined FUN_1411951a8(void)

void FUN_1411951a8(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_14018ffce();
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x8394) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
  }
  lVar2 = FUN_14011c349();
  fVar5 = *(float *)(param_1 + 0x8394) + 0.2;
  *(float *)(param_1 + 0x8394) = fVar5;
  if (*(longlong *)(param_1 + 0x3f70) == 0) {
    fVar6 = 0.6;
  }
  else {
    fVar6 = *(float *)(lVar2 + 0x678);
  }
  if (fVar6 < fVar5) {
    *(undefined4 *)(param_1 + 0x8394) = 0;
  }
  else {
    local_88 = 0;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar1 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14b95c5a0;
    *(undefined1 *)(local_98 + 1) = param_2;
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
    local_98[2] = lVar4;
    *local_98 = &PTR_FUN_14b95c530;
    local_98[3] = 0;
    FUN_14485c47a(local_98 + 3,param_1);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_1411951a8;
    uVar3 = FUN_1401b4c98(param_1);
    local_78 = 0;
    local_70 = 0;
    FUN_14487d8d8(&local_78,&local_98);
    local_38 = 1;
    local_a8 = local_80;
    local_80[0] = 0;
    local_7c = 0xbf800000;
    FUN_1406f4044(uVar3,&local_88,&local_78,0x3e4ccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
    FUN_1449db362(&local_98);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411955f4 FUN_1411955f4 body=511 status=ok
// SIG undefined FUN_1411955f4(void)

void FUN_1411955f4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) goto LAB_1411956d2;
  local_40 = param_2[1];
  plVar3 = (longlong *)param_2[2];
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_38 = plVar3;
  }
  FUN_1411957f4(param_1 + 0x310,local_44,&local_40,0);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if (*(char *)(param_1 + 0x304) != '\x01') goto LAB_1411956d2;
  if (*(int *)(param_1 + 0x30c) != 0) {
    puVar8 = (uint *)(param_1 + 0x308);
    uVar2 = *puVar8;
    if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
        (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0)) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x30c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      lVar5 = FUN_14479d2ce(puVar8);
      lVar7 = *(longlong *)(lVar5 + 0x708);
      if (lVar7 == 0) {
        uVar6 = FUN_1405b1a32();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(lVar5 + 0x708) = lVar7;
      }
      if (*(longlong *)(lVar5 + 0x710) != 0) {
LAB_141195716:
        lVar7 = FUN_14479d2ce(puVar8);
        (**(code **)(*param_2 + 0x58))(param_2,lVar7 + 0x700,0);
        goto LAB_1411956d2;
      }
      if ((lVar7 != 0) && (*(longlong *)(lVar5 + 0x700) != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(lVar5 + 0x710) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x700));
          *(longlong *)(lVar5 + 0x710) = lVar7;
          if (lVar7 != 0) goto LAB_141195716;
        }
      }
    }
  }
  (**(code **)(*param_2 + 0x68))(param_2);
LAB_1411956d2:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411957f4 FUN_1411957f4 body=2343 status=ok
// SIG undefined FUN_1411957f4(void)

int * FUN_1411957f4(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  ulonglong uVar28;
  bool bVar29;
  bool bVar30;
  longlong local_48;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_14482b872(param_1,iVar21);
    }
    iVar26 = (int)param_1[5];
    if (iVar26 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar8 = iVar26 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar25 = iVar26 + 1;
    iVar18 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar18 = iVar26;
    }
    if (iVar18 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar25;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar26) {
        if (iVar26 + 0x20U < 0xa0) {
          iVar25 = 0x80;
          iVar8 = iVar26;
        }
        else {
          uVar9 = iVar26 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar9) {
              uVar17 = uVar9;
            }
          }
          else {
            uVar17 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar24 = FUN_144a3809e(uVar17 << 2,0);
          iVar8 = (int)(uVar24 >> 2);
          iVar25 = -0x20;
          if ((int)uVar9 <= iVar8) {
            iVar25 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar25;
        FUN_1446efbd8(plVar13,iVar8);
        iVar25 = (int)param_1[5] + 1;
      }
      iVar8 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar8 = iVar25;
      }
      *(int *)(param_1 + 5) = iVar25;
      if (iVar25 % 0x20 != 0) {
        plVar23 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar23 = plVar13;
        }
        bVar16 = -(char)(iVar25 % 0x20);
        *(uint *)((longlong)plVar23 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar23 + (longlong)(iVar8 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar26 & 0x1f;
    puVar4 = (uint *)((longlong)plVar13 + (longlong)(iVar18 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar11 = (longlong)iVar21;
    iVar26 = *(int *)(*param_1 + 4 + lVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar26;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar26 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = (uint *)(param_1 + 2);
  puVar20 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar20 = puVar4;
  }
  iVar26 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar26 = iVar21;
  }
  puVar20[iVar26 >> 5] = puVar20[iVar26 >> 5] | 1 << ((byte)iVar21 & 0x1f);
  lVar12 = *param_1;
  *(undefined8 *)(lVar12 + lVar11 * 0x18) = *param_3;
  *(undefined8 *)(lVar12 + 8 + lVar11 * 0x18) = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(lVar12 + 0x10 + lVar11 * 0x18) = 0xffffffff;
  uVar24 = *(ulonglong *)(lVar12 + lVar11 * 0x18);
  plVar13 = *(longlong **)(lVar12 + 8 + lVar11 * 0x18);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  plVar13 = (longlong *)(lVar12 + lVar11 * 0x18);
  uVar9 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  iVar8 = (int)param_1[1];
  iVar26 = *(int *)((longlong)param_1 + 0x34);
  if (iVar8 - iVar26 == 1) {
LAB_141195953:
    cVar7 = '\0';
    iVar26 = iVar21;
  }
  else {
    lVar11 = *plVar13;
    plVar23 = (longlong *)plVar13[1];
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar23 + 0xc) = *(int *)((longlong)plVar23 + 0xc) + 1;
      UNLOCK();
      iVar8 = (int)param_1[1];
      iVar26 = *(int *)((longlong)param_1 + 0x34);
    }
    if (iVar8 != iVar26) {
      plVar14 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar14 = (longlong *)param_1[8];
      }
      iVar26 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
      while (iVar26 != -1) {
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar23 + 0xc) = *(int *)((longlong)plVar23 + 0xc) + 1;
          UNLOCK();
        }
        lVar12 = (longlong)iVar26;
        local_48 = *(longlong *)(*param_1 + lVar12 * 0x18);
        plVar14 = *(longlong **)(*param_1 + 8 + lVar12 * 0x18);
        if (plVar14 == (longlong *)0x0) {
LAB_141195f4b:
          plVar27 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
          UNLOCK();
          iVar8 = (int)plVar14[1];
          do {
            if (iVar8 == 0) goto LAB_141195f4b;
            LOCK();
            iVar25 = (int)plVar14[1];
            bVar29 = iVar8 == iVar25;
            if (bVar29) {
              *(int *)(plVar14 + 1) = iVar8 + 1;
              iVar25 = iVar8;
            }
            iVar8 = iVar25;
            UNLOCK();
            plVar27 = plVar14;
          } while (!bVar29);
        }
        bVar29 = true;
        if (plVar23 != (longlong *)0x0) {
          iVar8 = (int)plVar23[1];
          do {
            if (iVar8 == 0) goto LAB_141195d0c;
            LOCK();
            iVar25 = (int)plVar23[1];
            bVar30 = iVar8 == iVar25;
            if (bVar30) {
              *(int *)(plVar23 + 1) = iVar8 + 1;
              iVar25 = iVar8;
            }
            iVar8 = iVar25;
            UNLOCK();
          } while (!bVar30);
          LOCK();
          plVar2 = plVar23 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
            bVar29 = false;
          }
          else {
            bVar29 = false;
          }
        }
LAB_141195d0c:
        if (plVar27 == (longlong *)0x0) {
          local_48 = 0;
        }
        else {
          LOCK();
          plVar2 = plVar27 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar27)(plVar27);
            LOCK();
            piVar1 = (int *)((longlong)plVar27 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
            }
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
        lVar15 = lVar11;
        if (bVar29) {
          lVar15 = 0;
        }
        if (local_48 == lVar15) goto LAB_141195d6e;
        iVar26 = *(int *)(*param_1 + 0x10 + lVar12 * 0x18);
      }
    }
    iVar26 = -1;
LAB_141195d6e:
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
    if (iVar26 == -1) goto LAB_141195953;
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar26 * 0x18);
    plVar23 = *(longlong **)(puVar3 + 2);
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))();
      }
    }
    uVar5 = *(undefined4 *)((longlong)plVar13 + 4);
    lVar11 = plVar13[1];
    uVar6 = *(undefined4 *)((longlong)plVar13 + 0xc);
    *puVar3 = (int)*plVar13;
    puVar3[1] = uVar5;
    puVar3[2] = (int)lVar11;
    puVar3[3] = uVar6;
    FUN_140fe1e56(param_1,iVar21);
    cVar7 = '\x01';
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 != '\0') goto LAB_141195c09;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar17 = 1;
  if (3 < uVar10) {
    uVar24 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
    lVar11 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || ((int)uVar17 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)plVar13 + 0x14) = uVar9;
    plVar23 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar23 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 2) =
         *(undefined4 *)
          ((longlong)plVar23 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar26;
    goto LAB_141195c09;
  }
  *(uint *)(param_1 + 9) = uVar17;
  plVar13 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar13,0,0,4);
    uVar17 = *(uint *)(param_1 + 9);
  }
  plVar23 = param_1 + 7;
  if (uVar17 == 1) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
LAB_1411959b9:
    uVar9 = 0;
    do {
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar23;
      }
      *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
           0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar17 != uVar9);
  }
  else {
    if (uVar17 == 0) goto LAB_141195c09;
    FUN_1446efa72(plVar13,0,uVar17,4);
    if (0 < (int)uVar17) goto LAB_1411959b9;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar24 = 0;
    uVar28 = 1;
    iVar8 = 0;
    iVar25 = 0;
  }
  else {
    puVar20 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar20 = puVar4;
    }
    uVar9 = *puVar20;
    if (uVar9 == 0) {
      iVar8 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar8 = iVar21 + -1;
      }
      uVar24 = 0;
      uVar28 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar28 = uVar24;
      }
      iVar25 = 0;
      do {
        if (uVar28 == uVar24) goto LAB_141195c09;
        iVar25 = iVar25 + 0x20;
        uVar9 = puVar20[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar24 = 0;
      iVar25 = 0;
    }
    uVar28 = (ulonglong)(-uVar9 & uVar9);
    uVar22 = uVar28 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (iVar25 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar8) {
      iVar8 = iVar21;
    }
  }
  if (iVar8 < iVar21) {
    uVar9 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar12 = (longlong)iVar8;
      uVar22 = *(ulonglong *)(lVar11 + lVar12 * 0x18);
      plVar13 = *(longlong **)(lVar11 + 8 + lVar12 * 0x18);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      lVar11 = lVar11 + lVar12 * 0x18;
      uVar17 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar22 = (longlong)(int)(uVar17 >> 0x10 ^ uVar17) & (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar11 + 0x14) = iVar21;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar23;
      }
      *(undefined4 *)(lVar11 + 0x10) =
           *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar23;
      }
      *(int *)((longlong)plVar13 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
      uVar9 = uVar9 & ~(uint)uVar28;
      puVar20 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar20 = puVar4;
      }
      iVar21 = (int)param_1[5];
      iVar8 = (int)uVar24;
      lVar11 = (longlong)iVar8;
      uVar17 = puVar20[lVar11] & uVar9;
      if (uVar17 == 0) {
        iVar18 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar18 = iVar21 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar8) {
          iVar19 = iVar8;
        }
        if (iVar18 <= iVar8) break;
        lVar12 = 0;
        while( true ) {
          iVar25 = iVar25 + 0x20;
          uVar17 = puVar20[lVar11 + lVar12 + 1];
          if (uVar17 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar19 - lVar11 == lVar12) goto LAB_141195c09;
        }
        uVar24 = (ulonglong)(iVar8 + (int)lVar12 + 1);
        uVar9 = 0xffffffff;
      }
      uVar28 = (ulonglong)(-uVar17 & uVar17);
      uVar22 = uVar28 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar25 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar21);
  }
LAB_141195c09:
  *param_2 = iVar26;
  return param_2;
}



// FUNCTION 14119611c FUN_14119611c body=1909 status=ok
// SIG undefined FUN_14119611c(void)

void FUN_14119611c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  code *local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_3c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1468d96f0;
      local_140 = 0;
      local_148 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_b0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_b0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_b0 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_b0);
    }
  }
  local_b8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_1468d96f0;
      local_140 = 0;
      local_148 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_b8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_b8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_b8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_b8);
    }
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  local_40 = 0;
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_a8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_a8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_a8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_a8);
    }
  }
  puVar6 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_e8 = local_e8 & 0xffffff00;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  *(longlong *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_e8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_e8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_e8 = (uint)uVar4;
      uStack_e4 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_e8);
    }
  }
  puVar3 = *(uint **)(param_2 + 0x38);
  puVar5 = &local_e8;
  if (puVar3 != (uint *)0x0) {
    puVar5 = puVar3;
  }
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_138 = FUN_1446ddbd2();
      local_130 = FUN_141710108;
      local_140 = 0x1000000000000000;
      local_148 = (undefined8 *)0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_108);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_108);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_108 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_108);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_120 = local_108;
  uVar4 = FUN_14477b664(uStack_100);
  local_118 = FUN_14477b664(uVar4);
  local_110 = local_f8;
  local_148 = &local_120;
  FUN_141196892(local_b0,local_b8,puVar6,puVar5);
  if ((lStack_c0 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_c0 + 0x50));
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141196892 FUN_141196892 body=660 status=ok
// SIG undefined FUN_141196892(void)

void FUN_141196892(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined ***local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 == (longlong *)0x0) goto LAB_1411969aa;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x178) == 0)) goto LAB_1411969aa;
  lVar4 = FUN_14041aabe();
  lVar3 = *(longlong *)(lVar3 + 0x178);
  if ((lVar3 == 0) ||
     ((((lVar4 == 0 || (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 == 0)) ||
       (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) goto LAB_1411969aa;
  lVar4 = param_5[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1405b1a32();
    lVar4 = FUN_14477b664(uVar5);
    param_5[1] = lVar4;
  }
  lVar6 = param_5[2];
  if (lVar6 == 0) {
    if ((*param_5 != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar5,param_5);
          param_5[2] = lVar6;
          if (lVar6 != 0) {
            lVar4 = param_5[1];
            goto LAB_141196a45;
          }
          goto LAB_14119695b;
        }
      }
      param_5[2] = 0;
    }
LAB_14119695b:
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_40 = 0;
    uStack_48 = 0;
  }
  else {
LAB_141196a45:
    if (lVar4 == 0) {
      uVar5 = FUN_1405b1a32();
      lVar4 = FUN_14477b664(uVar5);
      param_5[1] = lVar4;
      lVar6 = param_5[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_5 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_141196b22:
          lVar6 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_141196b22;
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar5,param_5);
        }
        param_5[2] = lVar6;
      }
    }
    local_88 = &PTR_FUN_14a171dc0;
    FUN_142b15db4(&local_80,lVar6 + 8);
    local_70 = *(undefined8 *)(lVar6 + 0x18);
    uStack_68 = *(undefined8 *)(lVar6 + 0x20);
    local_60 = *(undefined8 *)(lVar6 + 0x28);
    uStack_58 = *(undefined8 *)(lVar6 + 0x30);
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar6 + 0x38));
    uStack_48 = *(undefined8 *)(lVar6 + 0x40);
    local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(lVar6 + 0x48));
  }
  local_88 = &PTR_FUN_14acb7da0;
  local_98 = &local_88;
  FUN_141196b28(lVar3,param_2,param_3,param_4);
LAB_1411969aa:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141196b28 FUN_141196b28 body=662 status=ok
// SIG undefined FUN_141196b28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141196b28(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148 [2];
  undefined8 local_138 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined **local_88;
  longlong *local_80;
  char local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_80 = (longlong *)0x0;
  local_78 = '\0';
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_88 = &PTR_FUN_14acb7da0;
  local_48 = 0;
  local_40 = 0;
  puVar4 = local_138;
  for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = *(undefined4 *)(param_4 + 1);
  local_b8 = *param_4;
  local_a8 = param_4[2];
  local_148[0] = param_2;
  uVar2 = FUN_14477b664(param_4[3]);
  local_a0 = FUN_14477b664(uVar2);
  local_98 = param_4[4];
  local_90 = param_4[5];
  if ((local_90 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(local_90 + 0x50));
  }
  if (*(char *)(param_5 + 2) == '\0') {
    local_78 = '\0';
    local_80 = (longlong *)param_5[1];
  }
  local_50 = *(undefined4 *)(param_5 + 7);
  local_70 = param_5[3];
  uStack_68 = param_5[4];
  local_60 = param_5[5];
  uStack_58 = param_5[6];
  local_40 = *(undefined4 *)(param_5 + 9);
  local_48 = param_5[8];
  uVar2 = FUN_14477b072(param_1,DAT_14cb5ef70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,local_148);
  plVar1 = local_80;
  local_88 = &PTR_FUN_14a171dc0;
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    if (local_80[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if ((local_90 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_90 + 0x50));
  }
  *param_5 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_5 + 2) != '\0') &&
     (plVar1 = (longlong *)param_5[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141196dc0 FUN_141196dc0 body=48 status=ok
// SIG undefined FUN_141196dc0(void)

void FUN_141196dc0(longlong param_1)

{
  FUN_141196df0();
  FUN_141197056(param_1,1);
  if (*(longlong *)(param_1 + 0x288) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x288) + 0x19a) = 0;
  }
  return;
}



// FUNCTION 141196df0 FUN_141196df0 body=613 status=ok
// SIG undefined FUN_141196df0(void)

void FUN_141196df0(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  wchar_t *_Str;
  size_t sVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_228 [32];
  undefined1 local_208 [16];
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [256];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  iVar3 = DAT_14c9647dc;
  lVar2 = DAT_14c9647c8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  iVar4 = *(int *)((longlong)param_1 + 0x34);
  if (((iVar4 == 0) || (uVar7 = *(uint *)(param_1 + 6), (int)uVar7 < 0)) ||
     (DAT_14c9647dc <= (int)uVar7)) goto LAB_141196ff8;
  lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
  if (((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != iVar4)) ||
     ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_141196ff8;
  if (param_1[0x51] == 0) {
    *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0x7f;
LAB_141196ea3:
    uVar7 = *(uint *)(param_1 + 6);
    uVar8 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < iVar3)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(lVar2 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != iVar4 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_141196e98;
      uVar8 = *puVar6;
    }
  }
  else {
    pbVar1 = (byte *)(param_1[0x51] + 0x4c);
    *pbVar1 = *pbVar1 & 0xfd;
    iVar4 = *(int *)((longlong)param_1 + 0x34);
    *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0x7f;
    if (iVar4 != 0) goto LAB_141196ea3;
LAB_141196e98:
    uVar8 = 0;
  }
  local_1f8 = local_1d8;
  local_1e0 = '\0';
  local_1e8 = local_d8;
  local_1f0 = local_1f8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"Deactivate",&local_1f8);
  local_58 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    local_48 = FUN_14475aa65(0,_Str,sVar5 & 0xffffffff);
    uVar7 = local_48 + 1;
    local_50 = (undefined1 *)0x0;
    if (0x80 < uVar7) {
      FUN_1446efa72(&local_58,0,uVar7,1);
      local_50 = local_58;
    }
    if (local_50 == (undefined1 *)0x0) {
      local_50 = local_d8;
    }
    FUN_14475a98a(local_50,uVar7,_Str,(int)sVar5 + 1);
  }
  FUN_1412a486e(uVar8,local_50);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e0 == '\x01') {
    FUN_1400020a8(local_1f8);
  }
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xfffd6bff;
  (**(code **)(*param_1 + 0x78))(param_1);
  FUN_140056680(local_208,&DAT_149dfb77a);
  FUN_143eb4cda(param_1,0,local_208);
LAB_141196ff8:
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141197056 FUN_141197056 body=2226 status=ok
// SIG undefined FUN_141197056(void)

void FUN_141197056(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) & 0xef;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1411979f6(*(longlong *)(param_1 + 0x288),param_1 + 0xd8);
  }
  FUN_141197922(param_1);
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x1ec) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0xb0) = 0xffffffff;
    FUN_14020fad6(lVar1 + 0x188,&DAT_149dfb77a);
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 0xb8);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 0xb8) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0xc0) = DAT_14c844848;
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 200);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 200) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0xd0) = DAT_14c844848;
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 0xd8);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 0xd8) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0xe0) = DAT_14c844848;
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 0xe8);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 0xe8) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0xf0) = DAT_14c844848;
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 0x158);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 0x158) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0x160) = DAT_14c844848;
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 0xf8);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 0xf8) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0x100) = DAT_14c844848;
    FUN_1446f470e(&local_40,&DAT_149dfb77a,1);
    *(undefined8 *)(lVar1 + 0x108) = local_40;
    FUN_14020fad6(lVar1 + 0x110,&DAT_149dfb77a);
    *(undefined8 *)(lVar1 + 0x120) = 0;
    FUN_14020fad6(lVar1 + 0x138,0);
    FUN_14020fad6(lVar1 + 0x128,&DAT_149dfb77a);
    FUN_1446f470e(&local_40,&DAT_149dfb77a,1);
    *(undefined8 *)(lVar1 + 0x148) = local_40;
    *(undefined4 *)(lVar1 + 0x1f0) = 0;
    *(undefined4 *)(lVar1 + 0x150) = 0;
    *(byte *)(lVar1 + 0x1ea) = *(byte *)(lVar1 + 0x1ea) & 0xfe;
    *(undefined1 *)(lVar1 + 0x19a) = 0;
    *(byte *)(lVar1 + 0x19b) = *(byte *)(lVar1 + 0x19b) & 0xf8;
    *(undefined4 *)(lVar1 + 0x19c) = 0;
    FUN_141197972(*(undefined8 *)(lVar1 + 0x1a0),*(undefined4 *)(lVar1 + 0x1a8));
    *(undefined4 *)(lVar1 + 0x1a8) = 0;
    if (*(int *)(lVar1 + 0x1ac) != 0) {
      FUN_145827952(lVar1 + 0x1a0);
    }
    *(byte *)(lVar1 + 0x1b0) = *(byte *)(lVar1 + 0x1b0) & 0xfe;
    *(byte *)(lVar1 + 0x198) = *(byte *)(lVar1 + 0x198) | 1;
    FUN_14020fad6(lVar1 + 0x1c8,&DAT_149dfb77a);
    FUN_14020fad6(lVar1 + 0x1b8,&DAT_149dfb77a);
    *(undefined2 *)(lVar1 + 0x1e8) = 0;
    FUN_14020fad6(lVar1 + 0x178,&DAT_149dfb77a);
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
    plVar4 = DAT_14c844840;
    plVar2 = *(longlong **)(lVar1 + 0x168);
    if (plVar2 != DAT_14c844840) {
      *(longlong **)(lVar1 + 0x168) = DAT_14c844840;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(lVar1 + 0x170) = DAT_14c844848;
    puVar3 = *(ushort **)(lVar1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  *(byte *)(param_1 + 0x298) = (param_2 ^ 1) * '\x02';
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x2b0 + (ulonglong)param_2 * 4);
  if (*(int *)(param_1 + 0x2a8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141197922 FUN_141197922 body=80 status=ok
// SIG undefined FUN_141197922(void)

void FUN_141197922(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *puVar3 = &PTR_FUN_14b477910;
    puVar3[1] = uVar1;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 141197972 FUN_141197972 body=132 status=ok
// SIG undefined FUN_141197972(void)

void FUN_141197972(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b473650;
    plVar2 = (longlong *)param_1[0xd];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x17;
  }
  return;
}



// FUNCTION 1411979f6 FUN_1411979f6 body=739 status=ok
// SIG undefined FUN_1411979f6(void)

void FUN_1411979f6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x68);
  if (plVar2 == (longlong *)0x0) goto LAB_141197a51;
  iVar6 = (int)plVar2[1];
  do {
    if (iVar6 == 0) goto LAB_141197a51;
    LOCK();
    iVar12 = (int)plVar2[1];
    bVar14 = iVar6 == iVar12;
    if (bVar14) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar12 = iVar6;
    }
    iVar6 = iVar12;
    UNLOCK();
  } while (!bVar14);
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (((lVar3 != 0) && (lVar13 = *(longlong *)(param_1 + 0x108), lVar13 != 0)) &&
     (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c))) {
    uVar8 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar10 = (uint)lVar13 & 0xffff;
    uVar8 = (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar10) +
            (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4);
    lVar11 = *(longlong *)(param_1 + 0x238);
    if (*(longlong *)(param_1 + 0x238) == 0) {
      lVar11 = param_1 + 0x230;
    }
    iVar6 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x240) - 1U & uVar8) * 4);
    if (iVar6 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x1f8);
      iVar12 = iVar6;
      do {
        if (*(longlong *)(lVar11 + (longlong)iVar12 * 0x14) == lVar13) goto LAB_141197b3d;
        iVar12 = *(int *)(lVar11 + (longlong)iVar12 * 0x14 + 0xc);
      } while (iVar12 != -1);
    }
  }
  goto LAB_141197a47;
  while (iVar6 = *(int *)((longlong)plVar9 + 0xc), iVar6 != -1) {
LAB_141197b3d:
    plVar9 = (longlong *)(lVar11 + (longlong)iVar6 * 0x14);
    if (*plVar9 == lVar13) goto LAB_141197b52;
  }
  plVar9 = (longlong *)0x0;
LAB_141197b52:
  if (((char)plVar9[1] == '\x01') && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
    plVar9 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[8];
    }
    iVar6 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_2[9] - 1U & uVar8) * 4);
    if (iVar6 != -1) {
      do {
        plVar9 = (longlong *)(*param_2 + (longlong)iVar6 * 0x18);
        if (*plVar9 == lVar13) {
          if (plVar9 + 1 != (longlong *)0x0 && plVar9 != (longlong *)0x0) {
            puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
            local_58 = 0;
            FUN_14485c47a(&local_58,plVar9[1]);
            uVar5 = local_58;
            uVar4 = *(undefined8 *)(param_1 + 0x54);
            *puVar7 = &PTR_FUN_14b9bf560;
            FUN_1446ddc76(&local_50,"RemoveInputMappingContext",1);
            FUN_14039176c(puVar7,uVar4,local_50,1);
            *puVar7 = &PTR_FUN_14b9bf560;
            puVar7[7] = uVar5;
            FUN_140391314(lVar3,puVar7);
            if (*(int *)(param_1 + 0x200) == *(int *)(param_1 + 0x22c)) goto LAB_141197c55;
            lVar3 = *(longlong *)(param_1 + 0x108);
            uVar8 = (uint)((ulonglong)lVar3 >> 0x10);
            uVar10 = (uint)lVar3 & 0xffff;
            lVar13 = param_1 + 0x230;
            if (*(longlong *)(param_1 + 0x238) != 0) {
              lVar13 = *(longlong *)(param_1 + 0x238);
            }
            iVar6 = *(int *)(lVar13 + (ulonglong)
                                      (*(int *)(param_1 + 0x240) - 1U &
                                      (int)((ulonglong)lVar3 >> 0x20) +
                                      ((uint)lVar3 << 0x10 | uVar10) +
                                      (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar6 == -1) goto LAB_141197c55;
            goto LAB_141197cbd;
          }
          break;
        }
        iVar6 = (int)plVar9[2];
      } while (iVar6 != -1);
    }
  }
  goto LAB_141197a47;
  while (iVar6 = *(int *)((longlong)plVar9 + 0xc), iVar6 != -1) {
LAB_141197cbd:
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar6 * 0x14);
    if (*plVar9 == lVar3) goto LAB_141197c57;
  }
LAB_141197c55:
  plVar9 = (longlong *)0x0;
LAB_141197c57:
  *(undefined1 *)(plVar9 + 1) = 0;
LAB_141197a47:
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
LAB_141197a51:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141197d16 FUN_141197d16 body=32 status=ok
// SIG undefined FUN_141197d16(void)

undefined8 FUN_141197d16(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1,param_3);
  }
  return 1;
}



// FUNCTION 141197d36 FUN_141197d36 body=884 status=ok
// SIG undefined FUN_141197d36(void)

void FUN_141197d36(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  void *pvVar3;
  ushort *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ushort *local_60;
  int local_58;
  undefined4 local_54;
  ushort local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_2 + 1);
  lVar10 = (longlong)local_68;
  pvVar3 = (void *)*param_2;
  if (lVar10 == 0) {
    local_64 = 0;
  }
  else {
    iVar9 = 0;
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,pvVar3,lVar10 * 2);
    if (local_68 - 2U < 0x7fffffff) {
      do {
        FUN_14006620a(&local_60,local_70,1);
        puVar4 = local_60;
        if (local_58 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        uVar2 = *puVar4;
        if (local_60 != (ushort *)0x0) {
          FUN_1400020a8();
        }
        iVar12 = local_68 + -1;
        if (local_68 == 0) {
          iVar12 = iVar9;
        }
        if (0 < iVar12) {
          iVar11 = local_68 - (uint)(0 < iVar12);
          if (iVar11 != 0) {
            memmove(local_70,(void *)((longlong)local_70 + 2),(longlong)iVar11 * 2);
          }
          local_68 = local_68 - (uint)(0 < iVar12);
        }
        if (0x1f < uVar2) {
          local_4c[1] = 0;
          iVar12 = (int)param_1[0x10];
          iVar11 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar11 = iVar9;
          }
          puVar6 = &DAT_149dfb77a;
          if (iVar12 != 0) {
            puVar6 = (undefined2 *)param_1[0xf];
          }
          iVar12 = iVar11 - (int)param_1[0x11];
          if (iVar11 <= iVar12) {
            iVar12 = iVar11;
          }
          if (iVar12 < 1) {
            iVar12 = 0;
          }
          local_4c[0] = uVar2;
          FUN_140056680(&local_80,
                        (longlong)puVar6 + ((longlong)iVar11 * 2 - (ulonglong)(uint)(iVar12 * 2)));
          puVar6 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar6 = local_80;
          }
          puVar8 = &DAT_149dfb77a;
          iVar12 = iVar9;
          if ((int)param_1[0x10] != 0) {
            puVar8 = (undefined2 *)param_1[0xf];
            iVar12 = (int)param_1[0x10] + -1;
          }
          if ((int)param_1[0x11] < iVar12) {
            iVar12 = (int)param_1[0x11];
          }
          if (iVar12 < 1) {
            iVar12 = 0;
          }
          FUN_14006620a(&local_90,puVar8,iVar12);
          puVar8 = &DAT_149dfb77a;
          if (local_88 != 0) {
            puVar8 = local_90;
          }
          local_98 = puVar6;
          FUN_140002266(&local_60,L"%s%s%s",puVar8,local_4c);
          (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
          if (local_60 != (ushort *)0x0) {
            FUN_1400020a8();
          }
          if (local_90 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_80 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          (**(code **)(*param_1 + 0x2a8))(param_1,(int)param_1[0x11] + 1);
        }
      } while (local_68 - 2U < 0x7fffffff);
    }
  }
  (**(code **)(*param_1 + 0x300))();
  if ((int)param_1[0x22] < 1) {
    FUN_140056680(&local_60,&DAT_149dfb77a);
    if ((ushort **)(param_1 + 0x12) == &local_60) {
      if (local_60 != (ushort *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x12] != 0) {
        FUN_1400020a8();
      }
      param_1[0x12] = (longlong)local_60;
      *(int *)(param_1 + 0x13) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x9c) = local_54;
    }
  }
  else {
    uVar7 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x1a)) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x1a);
    }
    plVar5 = (longlong *)
             ((uVar7 + (longlong)*(int *)((longlong)param_1 + 0xcc)) * 0x28 + param_1[0x21]);
    plVar1 = param_1 + 0x12;
    if (plVar1 != plVar5) {
      iVar9 = (int)plVar5[1];
      pvVar3 = (void *)*plVar5;
      *(int *)(param_1 + 0x13) = iVar9;
      if (iVar9 == 0 && *(int *)((longlong)param_1 + 0x9c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
      }
      else {
        FUN_1446dd670(plVar1,iVar9);
        if (iVar9 != 0) {
          memcpy((void *)*plVar1,pvVar3,(longlong)iVar9 * 2);
        }
      }
    }
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411980b4 FUN_1411980b4 body=99 status=ok
// SIG undefined FUN_1411980b4(void)

void FUN_1411980b4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x78);
  if (puVar1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x80) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x84) == 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141198118 FUN_141198118 body=6841 status=ok
// SIG undefined FUN_141198118(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141198118(longlong *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  longlong **pplVar21;
  ulonglong uVar22;
  longlong **pplVar23;
  longlong *plVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  uint *puVar33;
  uint *puVar34;
  longlong *plVar35;
  longlong *plVar36;
  longlong *plVar37;
  ulonglong uVar38;
  undefined2 *puVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  longlong lVar42;
  bool bVar43;
  float fVar44;
  undefined1 auStack_3f8 [36];
  uint local_3d4;
  undefined8 local_3d0;
  longlong *local_3c8;
  longlong **local_3c0;
  int local_3b4;
  longlong local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  longlong *local_398;
  int local_38c;
  undefined8 *local_388;
  undefined4 local_380;
  longlong *local_378;
  longlong *local_370;
  undefined4 local_368 [188];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if ((((int)param_1[0x29] == 0) || ((longlong *)param_1[0x28] == (longlong *)0x0)) ||
     (cVar12 = (**(code **)(*(longlong *)param_1[0x28] + 0x30))(), cVar12 == '\0')) {
    cVar12 = '\0';
  }
  else {
    if ((int)param_1[0x29] == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = (longlong *)param_1[0x28];
    }
    cVar12 = (**(code **)(*plVar18 + 0x58))();
  }
  if ((cVar12 != '\0') || ((*(uint *)((longlong)param_1 + 0xd4) & 1) == 0)) {
    (**(code **)(*param_1 + 0x2f0))(param_1,1);
  }
  plVar18 = param_1 + 0x21;
  FUN_14148f26f(param_1[0x21],(int)param_1[0x22]);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    FUN_140d6767a(plVar18);
  }
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  lVar26 = DAT_14cb0ddd0;
  iVar28 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar28 == 0x40000002) {
    uVar38 = 0;
  }
  else {
    bVar43 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar28 != 2)) {
      if (iVar28 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        bVar43 = DVar14 == DVar15;
      }
      else {
        bVar43 = false;
      }
    }
    uVar38 = (ulonglong)(bVar43 ^ 1);
  }
  local_3d0 = plVar18;
  local_3c8 = param_1;
  if (*(char *)(lVar26 + uVar38) == '\x01') {
    FUN_144a2b0a4(param_1 + 0xf,&local_378);
    uVar19 = (int)param_1[0x10] - 1;
    if ((int)param_1[0x10] == 0) {
      uVar19 = 0;
    }
    if (0 < (int)uVar19) {
      uVar38 = 0;
      puVar33 = (uint *)(param_1 + 0x1c);
      do {
        if ((longlong)(int)puVar33[8] < 1) {
LAB_141198430:
          puVar34 = puVar33;
          if (*(short *)(param_1[0xf] + uVar38 * 2) == 0x20) goto LAB_14119843b;
          goto LAB_141198444;
        }
        lVar26 = 0;
        iVar28 = 0;
        while (puVar34 = *(uint **)(*(longlong *)(puVar33 + 6) + lVar26 * 8),
              *puVar34 != (uint)*(ushort *)((longlong)local_378 + uVar38 * 2)) {
          iVar28 = iVar28 + puVar34[8];
          lVar26 = lVar26 + 1;
          if ((int)puVar33[8] == lVar26) {
            if (((*(byte *)(param_1 + 0x19) & 1) != 0) || (iVar28 < 1)) goto LAB_141198430;
            goto LAB_141198444;
          }
        }
        uVar38 = uVar38 + 1;
        puVar33 = puVar34;
      } while (uVar38 != uVar19);
      uVar38 = 0xffffffff;
LAB_14119843b:
      if (puVar34 != (uint *)(param_1 + 0x1c)) {
        local_3d4 = puVar34[4];
        if (local_3d4 != 0) {
          uVar19 = 0;
          do {
            lVar42 = (longlong)*(int *)(*(longlong *)(puVar34 + 2) + (longlong)(int)uVar19 * 4);
            lVar26 = param_1[0x17];
            if ((int)uVar38 < 0) {
LAB_1411999c6:
              iVar28 = (int)param_1[0x22];
              *(uint *)(param_1 + 0x22) = iVar28 + 1U;
              if (*(uint *)((longlong)param_1 + 0x114) < iVar28 + 1U) {
                FUN_140789234(local_3d0,iVar28);
              }
              puVar41 = (undefined8 *)(lVar26 + lVar42 * 0x28);
              puVar1 = (undefined8 *)(*local_3d0 + (longlong)iVar28 * 0x28);
              *puVar1 = 0;
              iVar28 = *(int *)(puVar41 + 1);
              pvVar4 = (void *)*puVar41;
              *(int *)(puVar1 + 1) = iVar28;
              if ((longlong)iVar28 == 0) {
                *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar1,iVar28,0);
                memcpy((void *)*puVar1,pvVar4,(longlong)iVar28 * 2);
              }
              puVar1[2] = 0;
              iVar28 = *(int *)(puVar41 + 3);
              pvVar4 = (void *)puVar41[2];
              *(int *)(puVar1 + 3) = iVar28;
              if ((longlong)iVar28 == 0) {
                *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
              }
              else {
                FUN_1446dd670(puVar1 + 2,iVar28,0);
                memcpy((void *)puVar1[2],pvVar4,(longlong)iVar28 * 2);
              }
              *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar41 + 4);
              param_1 = local_3c8;
            }
            else {
              iVar28 = *(int *)(lVar26 + 8 + lVar42 * 0x28);
              iVar13 = iVar28 + -1;
              if (iVar28 == 0) {
                iVar13 = 0;
              }
              if (iVar13 == (int)uVar38) goto LAB_1411999c6;
            }
            uVar19 = uVar19 + 1;
          } while (local_3d4 != uVar19);
        }
        FUN_147d9fbcd(param_1[0x21],(int)param_1[0x22]);
      }
    }
LAB_141198444:
    if (local_378 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (1 < (int)param_1[0x10]) {
    plVar18 = param_1 + 0xf;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0e220) && (FUN_144b3d300(&DAT_14cb0e220), DAT_14cb0e220 == -1)) {
      local_388 = (undefined8 *)0x0;
      local_380 = 0;
      FUN_1446efa72(&local_388,0,2,0x10);
      local_380 = 2;
      *local_388 = &PTR_LAB_14aaf9460;
      LOCK();
      UNLOCK();
      lVar42 = DAT_14c758608 + 1;
      lVar26 = DAT_14c758608 + 1;
      if (lVar42 == 0) {
        LOCK();
        UNLOCK();
        lVar42 = DAT_14c758608 + 2;
        lVar26 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar26;
      local_388[2] = lVar42;
      *local_388 = &PTR_FUN_14aaf93f0;
      local_388[3] = FUN_14007d91b;
      FUN_145e2d3f6(&local_388);
      atexit((_func_5014 *)&LAB_1437745a9);
      _Init_thread_footer(&DAT_14cb0e220);
      param_1 = local_3c8;
    }
    FUN_140009b9a(&local_378,plVar18);
    cVar12 = FUN_14115046c(&DAT_14cb0de90);
    plVar18 = local_3d0;
    if (cVar12 != '\0') {
      uVar38 = (ulonglong)DAT_14cb0e210;
      if (0 < (longlong)uVar38) {
        bVar43 = false;
        DAT_14cb0e21c = DAT_14cb0e21c + 1;
        do {
          lVar26 = uVar38 * 0x10 + -8;
          uVar40 = uVar38;
          while (((*(int *)(DAT_14cb0e208 + lVar26) != 0 &&
                  (plVar18 = *(longlong **)(DAT_14cb0e208 + -8 + lVar26), plVar18 != (longlong *)0x0
                  )) && (cVar12 = (**(code **)(*plVar18 + 0x60))(), cVar12 != '\0'))) {
            lVar26 = lVar26 + -0x10;
            bVar5 = uVar40 < 2;
            uVar40 = uVar40 - 1;
            if (bVar5) {
              DAT_14cb0e21c = DAT_14cb0e21c + -1;
              plVar18 = local_3d0;
              if (!bVar43) goto LAB_141198474;
              goto LAB_1411983b2;
            }
          }
          uVar38 = uVar40 - 1;
          bVar43 = true;
        } while (1 < uVar40);
        DAT_14cb0e21c = DAT_14cb0e21c + -1;
LAB_1411983b2:
        plVar18 = local_3d0;
        iVar28 = DAT_14cb0e210;
        if (DAT_14cb0e21c < 1) {
          if (0 < DAT_14cb0e210) {
            iVar13 = 0;
            do {
              if (((*(int *)(DAT_14cb0e208 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar37 = *(longlong **)(DAT_14cb0e208 + (longlong)iVar13 * 0x10),
                  plVar37 == (longlong *)0x0)) ||
                 (cVar12 = (**(code **)(*plVar37 + 0x28))(), cVar12 != '\0')) {
                FUN_14005b288(&DAT_14cb0e208,iVar13);
                FUN_14005b248(&DAT_14cb0e208);
              }
              else {
                iVar13 = iVar13 + 1;
              }
            } while (iVar13 < DAT_14cb0e210);
          }
          param_1 = local_3c8;
          _DAT_14cb0e218 = 2;
          if (2 < DAT_14cb0e210 * 2) {
            _DAT_14cb0e218 = DAT_14cb0e210 * 2;
          }
          if ((_DAT_14cb0e218 < iVar28) && (DAT_14cb0e214 != DAT_14cb0e210)) {
            FUN_14045812c(&DAT_14cb0e208);
          }
        }
      }
    }
LAB_141198474:
    if (local_378 != (longlong *)0x0) {
      (**(code **)(*local_378 + 0x10))();
    }
    if ((longlong)(int)param_1[0x18] != 0) {
      puVar41 = (undefined8 *)param_1[0x17];
      lVar26 = (longlong)(int)param_1[0x18] * 0x28;
      do {
        cVar12 = FUN_14007d868(&DAT_14cb0de38);
        if (cVar12 != '\0') {
          lVar42 = param_1[0x22];
          uVar19 = (int)lVar42 + 1;
          *(uint *)(param_1 + 0x22) = uVar19;
          if (*(uint *)((longlong)param_1 + 0x114) < uVar19) {
            FUN_140789234(plVar18);
          }
          puVar1 = (undefined8 *)(*plVar18 + (longlong)(int)lVar42 * 0x28);
          *puVar1 = 0;
          iVar28 = *(int *)(puVar41 + 1);
          pvVar4 = (void *)*puVar41;
          *(int *)(puVar1 + 1) = iVar28;
          if ((longlong)iVar28 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar28,0);
            memcpy((void *)*puVar1,pvVar4,(longlong)iVar28 * 2);
          }
          puVar1[2] = 0;
          iVar28 = *(int *)(puVar41 + 3);
          pvVar4 = (void *)puVar41[2];
          *(int *)(puVar1 + 3) = iVar28;
          if ((longlong)iVar28 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
          }
          else {
            FUN_1446dd670(puVar1 + 2,iVar28,0);
            memcpy((void *)puVar1[2],pvVar4,(longlong)iVar28 * 2);
          }
          *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar41 + 4);
          param_1 = local_3c8;
        }
        puVar41 = puVar41 + 5;
        lVar26 = lVar26 + -0x28;
      } while (lVar26 != 0);
    }
    iVar28 = (int)param_1[0x22];
    if (1 < (longlong)iVar28) {
      local_3d4 = CONCAT31(local_3d4._1_3_,*DAT_14cb0dde8);
      plVar18 = (longlong *)*local_3d0;
      memset(local_368,0,0x2f0);
      local_370 = plVar18 + (longlong)iVar28 * 5 + -5;
      local_378 = plVar18;
      fVar44 = logf((float)iVar28);
      local_368[0] = (int)(longlong)(fVar44 + fVar44);
      pplVar21 = &local_378;
      do {
        plVar18 = *pplVar21;
        iVar28 = *(int *)(pplVar21 + 2);
        iVar13 = (int)((ulonglong)((longlong)pplVar21[1] - (longlong)plVar18) >> 3);
        plVar37 = pplVar21[1];
joined_r0x00014119863b:
        plVar36 = plVar37;
        iVar13 = iVar13 * -0x33333333;
        uVar19 = iVar13 + 1;
        pplVar23 = pplVar21;
        if (iVar28 != 0) {
          if (8 < (int)uVar19) {
            uVar38 = (ulonglong)local_3d0 >> 0x20;
            local_3d0 = (longlong *)CONCAT44((int)uVar38,iVar28);
            uVar38 = (ulonglong)(uVar19 >> 1);
            lVar26 = plVar18[uVar38 * 5 + 4];
            lVar42 = plVar18[uVar38 * 5];
            lVar32 = (plVar18 + uVar38 * 5)[1];
            lVar6 = plVar18[uVar38 * 5 + 2];
            lVar7 = (plVar18 + uVar38 * 5 + 2)[1];
            plVar18[uVar38 * 5 + 4] = plVar18[4];
            lVar8 = *plVar18;
            lVar9 = plVar18[1];
            lVar10 = plVar18[3];
            plVar18[uVar38 * 5 + 2] = plVar18[2];
            (plVar18 + uVar38 * 5 + 2)[1] = lVar10;
            plVar18[uVar38 * 5] = lVar8;
            (plVar18 + uVar38 * 5)[1] = lVar9;
            plVar18[4] = lVar26;
            plVar18[2] = lVar6;
            plVar18[3] = lVar7;
            *plVar18 = lVar42;
            plVar18[1] = lVar32;
            plVar24 = plVar36 + 5;
            plVar11 = plVar18;
LAB_1411986d5:
            do {
              plVar35 = plVar11;
              plVar11 = plVar35 + 5;
              if (plVar36 < plVar11) {
joined_r0x0001411988b0:
                plVar37 = plVar24;
                plVar24 = plVar37 + -5;
                if (plVar24 <= plVar18) goto LAB_141198a85;
                if ((char)local_3d4 != '\0') {
                  iVar13 = (int)param_1[0x10];
                  uVar19 = iVar13 - 1;
                  if (iVar13 == 0) {
                    uVar19 = 0;
                  }
                  puVar39 = &DAT_149dfb77a;
                  if (iVar13 != 0) {
                    puVar39 = (undefined2 *)param_1[0xf];
                  }
                  if (0 < (int)uVar19) {
                    puVar16 = &DAT_149dfb77a;
                    if ((int)plVar24[1] != 0) {
                      puVar16 = (undefined2 *)*plVar24;
                    }
                    uVar40 = (ulonglong)uVar19;
                    lVar26 = 0;
                    uVar38 = uVar40;
LAB_141198906:
                    uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
                    uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
                    if (uVar2 == uVar3) {
                      iVar13 = 0;
                      if ((uVar2 == 0) || (uVar38 == 1)) goto LAB_14119896a;
LAB_141198921:
                      uVar38 = uVar38 - 1;
                      lVar26 = lVar26 + 2;
                      goto LAB_141198906;
                    }
                    if ((uVar3 | uVar2) < 0x80) {
                      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                        iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                                 (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                        goto LAB_14119896a;
                      }
                      if (uVar38 == 1) {
                        iVar13 = 0;
                        goto LAB_14119896a;
                      }
                      goto LAB_141198921;
                    }
                    iVar13 = (uint)uVar2 - (uint)uVar3;
LAB_14119896a:
                    puVar16 = &DAT_149dfb77a;
                    if ((int)plVar18[1] != 0) {
                      puVar16 = (undefined2 *)*plVar18;
                    }
                    lVar26 = 0;
LAB_14119897a:
                    uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
                    uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
                    if (uVar2 == uVar3) {
                      iVar25 = 0;
                      if ((uVar2 == 0) || (uVar40 == 1)) goto LAB_1411989d8;
LAB_141198994:
                      uVar40 = uVar40 - 1;
                      lVar26 = lVar26 + 2;
                      goto LAB_14119897a;
                    }
                    if ((uVar3 | uVar2) < 0x80) {
                      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                        iVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                                 (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                        goto LAB_1411989d8;
                      }
                      if (uVar40 == 1) {
                        iVar25 = 0;
                        goto LAB_1411989d8;
                      }
                      goto LAB_141198994;
                    }
                    iVar25 = (uint)uVar2 - (uint)uVar3;
LAB_1411989d8:
                    if (iVar13 == 0) {
                      if (iVar25 != 0) goto LAB_141198a85;
                    }
                    else if (iVar25 == 0) goto joined_r0x0001411988b0;
                  }
                }
                puVar39 = &DAT_149dfb77a;
                if ((int)plVar18[1] != 0) {
                  puVar39 = (undefined2 *)*plVar18;
                }
                puVar16 = &DAT_149dfb77a;
                if ((int)plVar37[-4] != 0) {
                  puVar16 = (undefined2 *)*plVar24;
                }
                lVar26 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
                  uVar20 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
                  uVar19 = (uint)uVar3;
                  if (uVar2 != uVar3) break;
                  if (uVar2 == 0) goto joined_r0x0001411988b0;
LAB_141198a22:
                  lVar26 = lVar26 + 2;
                }
                if ((uVar3 | uVar2) < 0x80) {
                  uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141198a22;
                }
                if ((int)(uVar20 - uVar19) < 0) goto LAB_141198a85;
                goto joined_r0x0001411988b0;
              }
              if ((char)local_3d4 == '\0') {
                iVar13 = (int)plVar18[1];
                goto LAB_141198837;
              }
              iVar13 = (int)param_1[0x10];
              uVar19 = iVar13 - 1;
              if (iVar13 == 0) {
                uVar19 = 0;
              }
              uVar38 = (ulonglong)uVar19;
              puVar39 = &DAT_149dfb77a;
              if (iVar13 != 0) {
                puVar39 = (undefined2 *)param_1[0xf];
              }
              iVar13 = (int)plVar18[1];
              if ((int)uVar19 < 1) goto LAB_141198837;
              puVar16 = &DAT_149dfb77a;
              if (iVar13 != 0) {
                puVar16 = (undefined2 *)*plVar18;
              }
              lVar26 = 0;
              uVar40 = uVar38;
LAB_141198736:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar25 = 0;
                if ((uVar2 == 0) || (uVar40 == 1)) goto LAB_1411987a4;
LAB_141198752:
                uVar40 = uVar40 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_141198736;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_1411987a4;
                }
                if (uVar40 == 1) {
                  iVar25 = 0;
                  goto LAB_1411987a4;
                }
                goto LAB_141198752;
              }
              iVar25 = (uint)uVar2 - (uint)uVar3;
LAB_1411987a4:
              puVar16 = &DAT_149dfb77a;
              if ((int)plVar35[6] != 0) {
                puVar16 = (undefined2 *)*plVar11;
              }
              lVar26 = 0;
LAB_1411987b6:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar27 = 0;
                if ((uVar2 == 0) || (iVar27 = 0, uVar38 == 1)) goto LAB_141198815;
LAB_1411987d1:
                uVar38 = uVar38 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_1411987b6;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_141198815;
                }
                if (uVar38 == 1) {
                  iVar27 = 0;
                  goto LAB_141198815;
                }
                goto LAB_1411987d1;
              }
              iVar27 = (uint)uVar2 - (uint)uVar3;
LAB_141198815:
              if (iVar25 == 0) {
                param_1 = local_3c8;
                if (iVar27 != 0) goto joined_r0x0001411988b0;
                goto LAB_141198837;
              }
              param_1 = local_3c8;
              if (iVar27 != 0) {
LAB_141198837:
                puVar39 = &DAT_149dfb77a;
                if ((int)plVar35[6] != 0) {
                  puVar39 = (undefined2 *)*plVar11;
                }
                puVar16 = &DAT_149dfb77a;
                if (iVar13 != 0) {
                  puVar16 = (undefined2 *)*plVar18;
                }
                lVar26 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
                  uVar20 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
                  uVar19 = (uint)uVar3;
                  if (uVar2 != uVar3) break;
                  if (uVar2 == 0) goto LAB_1411986d5;
LAB_14119886b:
                  lVar26 = lVar26 + 2;
                }
                if ((uVar3 | uVar2) < 0x80) {
                  uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14119886b;
                }
                if ((int)(uVar20 - uVar19) < 0) goto joined_r0x0001411988b0;
              }
            } while( true );
          }
          for (; plVar24 = plVar18, plVar37 = plVar18, plVar18 < plVar36; plVar36 = plVar36 + -5) {
joined_r0x0001411996ca:
            plVar11 = plVar37;
            plVar37 = plVar11 + 5;
            if (plVar37 <= plVar36) {
              if ((char)local_3d4 == '\0') goto LAB_141199894;
              iVar28 = (int)param_1[0x10];
              uVar19 = iVar28 - 1;
              if (iVar28 == 0) {
                uVar19 = 0;
              }
              puVar39 = &DAT_149dfb77a;
              if (iVar28 != 0) {
                puVar39 = (undefined2 *)param_1[0xf];
              }
              if ((int)uVar19 < 1) goto LAB_141199894;
              puVar16 = &DAT_149dfb77a;
              if ((int)plVar24[1] != 0) {
                puVar16 = (undefined2 *)*plVar24;
              }
              uVar40 = (ulonglong)uVar19;
              lVar26 = 0;
              uVar38 = uVar40;
LAB_1411997a0:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar28 = 0;
                if ((uVar2 == 0) || (uVar38 == 1)) goto LAB_1411997ee;
LAB_1411997ba:
                uVar38 = uVar38 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_1411997a0;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_1411997ee;
                }
                if (uVar38 == 1) {
                  iVar28 = 0;
                  goto LAB_1411997ee;
                }
                goto LAB_1411997ba;
              }
              iVar28 = (uint)uVar2 - (uint)uVar3;
LAB_1411997ee:
              puVar16 = &DAT_149dfb77a;
              if ((int)plVar37[1] != 0) {
                puVar16 = (undefined2 *)*plVar37;
              }
              lVar26 = 0;
LAB_141199801:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar13 = 0;
                if ((uVar2 == 0) || (uVar40 == 1)) goto LAB_141199853;
LAB_14119981d:
                uVar40 = uVar40 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_141199801;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_141199853;
                }
                if (uVar40 == 1) {
                  iVar13 = 0;
                  goto LAB_141199853;
                }
                goto LAB_14119981d;
              }
              iVar13 = (uint)uVar2 - (uint)uVar3;
LAB_141199853:
              if (iVar28 != 0) goto code_r0x000141199857;
              param_1 = local_3c8;
              if (iVar13 == 0) goto LAB_141199894;
LAB_14119987f:
              plVar24 = plVar37;
              goto joined_r0x0001411996ca;
            }
            local_58 = plVar24[4];
            local_78 = *plVar24;
            lStack_70 = plVar24[1];
            local_68 = plVar24[2];
            lStack_60 = plVar24[3];
            plVar24[4] = plVar36[4];
            lVar26 = *plVar36;
            lVar42 = plVar36[1];
            lVar32 = plVar36[3];
            plVar24[2] = plVar36[2];
            plVar24[3] = lVar32;
            *plVar24 = lVar26;
            plVar24[1] = lVar42;
            plVar36[4] = local_58;
            plVar36[2] = local_68;
            plVar36[3] = lStack_60;
            *plVar36 = local_78;
            plVar36[1] = lStack_70;
          }
          goto LAB_141199914;
        }
        if (uVar19 != 0) {
          iVar28 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
          do {
            iVar13 = iVar28 * 2 + 1;
            iVar25 = iVar28;
            if (iVar13 < (int)uVar19) {
LAB_141198c50:
              iVar27 = iVar25 * 2 + 2;
              lVar26 = (longlong)iVar25;
              if (iVar27 < (int)uVar19) {
                lVar42 = (longlong)iVar27;
                plVar37 = plVar18 + lVar42 * 5;
                local_3a8 = (longlong *)(longlong)iVar13;
                local_3d0 = plVar18 + (longlong)local_3a8 * 5;
                if ((char)local_3d4 == '\0') {
LAB_141198e0d:
                  puVar39 = &DAT_149dfb77a;
                  if ((int)local_3d0[1] != 0) {
                    puVar39 = (undefined2 *)*local_3d0;
                  }
                  puVar16 = &DAT_149dfb77a;
                  if ((int)plVar37[1] != 0) {
                    puVar16 = (undefined2 *)*plVar37;
                  }
                  lVar32 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar16 + lVar32);
                    uVar31 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar39 + lVar32);
                    uVar20 = (uint)uVar3;
                    if (uVar2 != uVar3) break;
                    if (uVar2 == 0) goto LAB_141198e90;
LAB_141198e50:
                    lVar32 = lVar32 + 2;
                  }
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar31 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141198e50;
                  }
                  if ((int)(uVar31 - uVar20) < 0) goto LAB_141198d43;
                  goto LAB_141198e90;
                }
                iVar25 = (int)local_3c8[0x10];
                uVar20 = iVar25 - 1;
                if (iVar25 == 0) {
                  uVar20 = 0;
                }
                puVar39 = (undefined2 *)local_3c8[0xf];
                puVar16 = puVar39;
                if (iVar25 == 0) {
                  puVar16 = &DAT_149dfb77a;
                }
                local_38c = iVar25;
                if ((int)uVar20 < 1) goto LAB_141198e0d;
                puVar17 = &DAT_149dfb77a;
                if ((int)plVar37[1] != 0) {
                  puVar17 = (undefined2 *)*plVar37;
                }
                uVar40 = (ulonglong)uVar20;
                lVar32 = 0;
                uVar38 = uVar40;
LAB_141198ce9:
                uVar2 = *(ushort *)((longlong)puVar17 + lVar32);
                uVar3 = *(ushort *)((longlong)puVar16 + lVar32);
                if (uVar2 == uVar3) {
                  iVar29 = 0;
                  if ((uVar2 == 0) || (uVar38 == 1)) goto LAB_141198d51;
LAB_141198d04:
                  uVar38 = uVar38 - 1;
                  lVar32 = lVar32 + 2;
                  goto LAB_141198ce9;
                }
                local_3b4 = iVar27;
                if ((uVar3 | uVar2) < 0x80) {
                  if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                    iVar29 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                    goto LAB_141198d51;
                  }
                  if (uVar38 == 1) {
                    iVar29 = 0;
                    goto LAB_141198d51;
                  }
                  goto LAB_141198d04;
                }
                iVar29 = (uint)uVar2 - (uint)uVar3;
LAB_141198d51:
                puVar17 = &DAT_149dfb77a;
                if ((int)local_3d0[1] != 0) {
                  puVar17 = (undefined2 *)*local_3d0;
                }
                lVar32 = 0;
LAB_141198d69:
                uVar2 = *(ushort *)((longlong)puVar17 + lVar32);
                uVar3 = *(ushort *)((longlong)puVar16 + lVar32);
                if (uVar2 == uVar3) {
                  iVar30 = 0;
                  if ((uVar2 == 0) || (iVar30 = 0, uVar40 == 1)) goto LAB_141198dc5;
LAB_141198d84:
                  uVar40 = uVar40 - 1;
                  lVar32 = lVar32 + 2;
                  goto LAB_141198d69;
                }
                if ((uVar3 | uVar2) < 0x80) {
                  if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                    iVar30 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                    goto LAB_141198dc5;
                  }
                  if (uVar40 == 1) {
                    iVar30 = 0;
                    goto LAB_141198dc5;
                  }
                  goto LAB_141198d84;
                }
                iVar30 = (uint)uVar2 - (uint)uVar3;
LAB_141198dc5:
                local_3b0 = lVar26;
                local_3a0 = lVar42;
                local_398 = plVar37;
                if (iVar29 == 0) {
                  if (iVar30 != 0) goto LAB_141198d43;
                  goto LAB_141198e0d;
                }
                if (iVar30 != 0) goto LAB_141198e0d;
                plVar36 = plVar18 + lVar26 * 5;
              }
              else {
LAB_141198d43:
                lVar42 = (longlong)iVar13;
                iVar27 = iVar13;
LAB_141198e90:
                plVar36 = plVar18 + lVar26 * 5;
                plVar37 = plVar18 + lVar42 * 5;
                if ((char)local_3d4 == '\0') goto LAB_141198fc7;
                iVar25 = (int)local_3c8[0x10];
                puVar39 = (undefined2 *)local_3c8[0xf];
                uVar20 = iVar25 - 1;
                if (iVar25 == 0) {
                  uVar20 = 0;
                }
              }
              puVar16 = &DAT_149dfb77a;
              if (iVar25 == 0) {
                puVar39 = &DAT_149dfb77a;
              }
              if ((int)uVar20 < 1) goto LAB_141198fc7;
              if ((int)plVar36[1] != 0) {
                puVar16 = (undefined2 *)*plVar36;
              }
              uVar40 = (ulonglong)uVar20;
              lVar26 = 0;
              uVar38 = uVar40;
LAB_141198ef3:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar13 = 0;
                if ((uVar2 == 0) || (iVar13 = 0, uVar38 == 1)) goto LAB_141198f4e;
LAB_141198f0e:
                uVar38 = uVar38 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_141198ef3;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_141198f4e;
                }
                if (uVar38 == 1) {
                  iVar13 = 0;
                  goto LAB_141198f4e;
                }
                goto LAB_141198f0e;
              }
              iVar13 = (uint)uVar2 - (uint)uVar3;
LAB_141198f4e:
              puVar16 = &DAT_149dfb77a;
              if ((int)plVar37[1] != 0) {
                puVar16 = (undefined2 *)*plVar37;
              }
              lVar26 = 0;
LAB_141198f63:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar25 = 0;
                if ((uVar2 == 0) || (uVar40 == 1)) goto LAB_141198fb7;
LAB_141198f7d:
                uVar40 = uVar40 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_141198f63;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_141198fb7;
                }
                if (uVar40 == 1) {
                  iVar25 = 0;
                  goto LAB_141198fb7;
                }
                goto LAB_141198f7d;
              }
              iVar25 = (uint)uVar2 - (uint)uVar3;
LAB_141198fb7:
              if (iVar13 == 0) {
                if (iVar25 == 0) goto LAB_141198fc7;
                goto LAB_14119903e;
              }
              if (iVar25 != 0) {
LAB_141198fc7:
                puVar39 = &DAT_149dfb77a;
                if ((int)plVar37[1] != 0) {
                  puVar39 = (undefined2 *)*plVar37;
                }
                puVar16 = &DAT_149dfb77a;
                if ((int)plVar36[1] != 0) {
                  puVar16 = (undefined2 *)*plVar36;
                }
                lVar26 = 0;
                do {
                  uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
                  uVar31 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
                  uVar20 = (uint)uVar3;
                  if (uVar2 == uVar3) {
                    if (uVar2 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar3 | uVar2)) goto LAB_14119902d;
                    uVar31 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_14119902d;
                  }
                  lVar26 = lVar26 + 2;
                } while( true );
              }
            }
LAB_1411990e2:
            bVar43 = iVar28 != 0;
            iVar28 = iVar28 + -1;
          } while (bVar43);
          param_1 = local_3c8;
          if (1 < (int)uVar19) {
            uVar38 = (ulonglong)uVar19 - 1;
            local_58 = plVar18[4];
            local_78 = *plVar18;
            lStack_70 = plVar18[1];
            local_68 = plVar18[2];
            lStack_60 = plVar18[3];
            plVar18[4] = plVar18[uVar38 * 5 + 4];
            lVar26 = plVar18[uVar38 * 5];
            lVar42 = (plVar18 + uVar38 * 5)[1];
            lVar32 = (plVar18 + uVar38 * 5 + 2)[1];
            plVar18[2] = plVar18[uVar38 * 5 + 2];
            plVar18[3] = lVar32;
            *plVar18 = lVar26;
            plVar18[1] = lVar42;
            plVar18[uVar38 * 5 + 4] = local_58;
            plVar18[uVar38 * 5 + 2] = local_68;
            (plVar18 + uVar38 * 5 + 2)[1] = lStack_60;
            plVar18[uVar38 * 5] = local_78;
            (plVar18 + uVar38 * 5)[1] = lStack_70;
            if (uVar19 != 2) {
LAB_14119918b:
              iVar13 = 0;
              iVar28 = 1;
              iVar25 = 0;
LAB_141199194:
              iVar13 = iVar13 + 2;
              plVar37 = (longlong *)(longlong)iVar13;
              lVar26 = (longlong)iVar25;
              if ((longlong)plVar37 < (longlong)uVar38) {
                plVar24 = plVar18 + (longlong)plVar37 * 5;
                local_3a8 = (longlong *)CONCAT44(local_3a8._4_4_,iVar28);
                local_398 = (longlong *)(longlong)iVar28;
                plVar36 = plVar18 + (longlong)local_398 * 5;
                iVar25 = iVar13;
                if ((char)local_3d4 == '\0') {
LAB_14119958c:
                  puVar16 = &DAT_149dfb77a;
                  puVar39 = &DAT_149dfb77a;
                  if ((int)plVar36[1] != 0) {
                    puVar39 = (undefined2 *)*plVar36;
                  }
                  if ((int)plVar24[1] != 0) {
                    puVar16 = (undefined2 *)*plVar24;
                  }
                  lVar42 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar16 + lVar42);
                    uVar20 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar39 + lVar42);
                    uVar19 = (uint)uVar3;
                    if (uVar2 != uVar3) break;
                    if (uVar2 == 0) goto LAB_141199296;
LAB_1411995bf:
                    lVar42 = lVar42 + 2;
                  }
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1411995bf;
                  }
                  if ((int)(uVar20 - uVar19) < 0) goto LAB_14119957e;
                  goto LAB_141199296;
                }
                iVar13 = (int)local_3c8[0x10];
                uVar19 = iVar13 - 1;
                if (iVar13 == 0) {
                  uVar19 = 0;
                }
                uVar40 = (ulonglong)uVar19;
                local_3a0 = CONCAT44(local_3a0._4_4_,iVar13);
                puVar39 = (undefined2 *)local_3c8[0xf];
                puVar16 = puVar39;
                if (iVar13 == 0) {
                  puVar16 = &DAT_149dfb77a;
                }
                if ((int)uVar19 < 1) goto LAB_14119958c;
                puVar17 = &DAT_149dfb77a;
                if ((int)plVar24[1] != 0) {
                  puVar17 = (undefined2 *)*plVar24;
                }
                lVar42 = 0;
                uVar22 = uVar40;
LAB_141199223:
                uVar2 = *(ushort *)((longlong)puVar17 + lVar42);
                uVar3 = *(ushort *)((longlong)puVar16 + lVar42);
                if (uVar2 == uVar3) {
                  iVar27 = 0;
                  if ((uVar2 == 0) || (uVar22 == 1)) goto LAB_1411994c0;
LAB_141199245:
                  uVar22 = uVar22 - 1;
                  lVar42 = lVar42 + 2;
                  goto LAB_141199223;
                }
                if ((uVar3 | uVar2) < 0x80) {
                  if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                    iVar27 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                    goto LAB_1411994c0;
                  }
                  if (uVar22 == 1) {
                    iVar27 = 0;
                    goto LAB_1411994c0;
                  }
                  goto LAB_141199245;
                }
                iVar27 = (uint)uVar2 - (uint)uVar3;
LAB_1411994c0:
                puVar17 = &DAT_149dfb77a;
                if ((int)plVar36[1] != 0) {
                  puVar17 = (undefined2 *)*plVar36;
                }
                lVar42 = 0;
LAB_1411994d7:
                uVar2 = *(ushort *)((longlong)puVar17 + lVar42);
                uVar3 = *(ushort *)((longlong)puVar16 + lVar42);
                if (uVar2 == uVar3) {
                  iVar29 = 0;
                  if ((uVar2 == 0) || (iVar29 = 0, uVar40 == 1)) goto LAB_141199532;
LAB_1411994f1:
                  uVar40 = uVar40 - 1;
                  lVar42 = lVar42 + 2;
                  goto LAB_1411994d7;
                }
                if ((uVar3 | uVar2) < 0x80) {
                  if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                    iVar29 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                             (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                    goto LAB_141199532;
                  }
                  if (uVar40 == 1) {
                    iVar29 = 0;
                    goto LAB_141199532;
                  }
                  goto LAB_1411994f1;
                }
                iVar29 = (uint)uVar2 - (uint)uVar3;
LAB_141199532:
                local_3d0 = plVar36;
                local_3b0 = lVar26;
                if (iVar27 == 0) {
                  if (iVar29 != 0) {
LAB_14119957e:
                    plVar37 = local_398;
                    iVar25 = iVar28;
                    goto LAB_141199296;
                  }
                  goto LAB_14119958c;
                }
                if (iVar29 != 0) goto LAB_14119958c;
                plVar36 = plVar18 + lVar26 * 5;
              }
              else {
                plVar37 = (longlong *)(longlong)iVar28;
                iVar25 = iVar28;
LAB_141199296:
                plVar36 = plVar18 + lVar26 * 5;
                plVar24 = plVar18 + (longlong)plVar37 * 5;
                if ((char)local_3d4 == '\0') goto LAB_1411993ca;
                iVar13 = (int)local_3c8[0x10];
                puVar39 = (undefined2 *)local_3c8[0xf];
                uVar19 = iVar13 - 1;
                if (iVar13 == 0) {
                  uVar19 = 0;
                }
              }
              if (iVar13 == 0) {
                puVar39 = &DAT_149dfb77a;
              }
              if ((int)uVar19 < 1) goto LAB_1411993ca;
              puVar16 = &DAT_149dfb77a;
              if ((int)plVar36[1] != 0) {
                puVar16 = (undefined2 *)*plVar36;
              }
              uVar22 = (ulonglong)uVar19;
              lVar26 = 0;
              uVar40 = uVar22;
LAB_1411992f0:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar28 = 0;
                if ((uVar2 == 0) || (uVar40 == 1)) goto LAB_14119934e;
LAB_14119930b:
                uVar40 = uVar40 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_1411992f0;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_14119934e;
                }
                if (uVar40 == 1) {
                  iVar28 = 0;
                  goto LAB_14119934e;
                }
                goto LAB_14119930b;
              }
              iVar28 = (uint)uVar2 - (uint)uVar3;
LAB_14119934e:
              puVar16 = &DAT_149dfb77a;
              if ((int)plVar24[1] != 0) {
                puVar16 = (undefined2 *)*plVar24;
              }
              lVar26 = 0;
LAB_141199362:
              uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
              uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
              if (uVar2 == uVar3) {
                iVar13 = 0;
                if ((uVar2 == 0) || (uVar22 == 1)) goto LAB_1411993bd;
LAB_14119937e:
                uVar22 = uVar22 - 1;
                lVar26 = lVar26 + 2;
                goto LAB_141199362;
              }
              if ((uVar3 | uVar2) < 0x80) {
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_1411993bd;
                }
                if (uVar22 == 1) {
                  iVar13 = 0;
                  goto LAB_1411993bd;
                }
                goto LAB_14119937e;
              }
              iVar13 = (uint)uVar2 - (uint)uVar3;
LAB_1411993bd:
              if (iVar28 == 0) {
                if (iVar13 == 0) goto LAB_1411993ca;
                goto LAB_14119943c;
              }
              if (iVar13 != 0) {
LAB_1411993ca:
                puVar16 = &DAT_149dfb77a;
                puVar39 = &DAT_149dfb77a;
                if ((int)plVar24[1] != 0) {
                  puVar39 = (undefined2 *)*plVar24;
                }
                if ((int)plVar36[1] != 0) {
                  puVar16 = (undefined2 *)*plVar36;
                }
                lVar26 = 0;
                do {
                  uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
                  uVar20 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
                  uVar19 = (uint)uVar3;
                  if (uVar2 == uVar3) {
                    if (uVar2 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar3 | uVar2)) goto LAB_14119942b;
                    uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_14119942b;
                  }
                  lVar26 = lVar26 + 2;
                } while( true );
              }
              goto LAB_141199627;
            }
          }
        }
LAB_141199914:
        local_3c0 = pplVar21;
        pplVar21 = pplVar23 + -3;
      } while (&local_378 <= pplVar21);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_141198a85:
  if (plVar11 <= plVar24) {
    lVar26 = plVar35[9];
    lVar42 = *plVar11;
    lVar32 = plVar35[6];
    lVar6 = plVar35[7];
    lVar7 = plVar35[8];
    plVar35[9] = plVar24[4];
    lVar8 = *plVar24;
    lVar9 = plVar24[1];
    lVar10 = plVar24[3];
    plVar35[7] = plVar24[2];
    plVar35[8] = lVar10;
    *plVar11 = lVar8;
    plVar35[6] = lVar9;
    plVar24[4] = lVar26;
    plVar24[2] = lVar6;
    plVar24[3] = lVar7;
    *plVar24 = lVar42;
    plVar24[1] = lVar32;
    goto LAB_1411986d5;
  }
  local_58 = plVar18[4];
  local_78 = *plVar18;
  lStack_70 = plVar18[1];
  local_68 = plVar18[2];
  lStack_60 = plVar18[3];
  plVar18[4] = plVar24[4];
  lVar26 = *plVar24;
  lVar42 = plVar24[1];
  lVar32 = plVar24[3];
  plVar18[2] = plVar24[2];
  plVar18[3] = lVar32;
  *plVar18 = lVar26;
  plVar18[1] = lVar42;
  plVar24[4] = local_58;
  plVar24[2] = local_68;
  plVar24[3] = lStack_60;
  *plVar24 = local_78;
  plVar24[1] = lStack_70;
  iVar28 = iVar28 + -1;
  plVar37 = plVar37 + -10;
  local_3c0 = pplVar21;
  local_3a8 = plVar36;
  if ((longlong)plVar37 - (longlong)plVar18 < (longlong)plVar36 - (longlong)plVar11) {
    if (plVar11 < plVar36) {
      *pplVar21 = plVar11;
      pplVar21[1] = plVar36;
      *(int *)(pplVar21 + 2) = iVar28;
      local_3c0 = pplVar21 + 3;
    }
    pplVar23 = local_3c0;
    pplVar21 = local_3c0;
    if (plVar24 <= plVar18 + 5) goto LAB_141199914;
  }
  else {
    if (plVar18 + 5 < plVar24) {
      *pplVar21 = plVar18;
      pplVar21[1] = plVar37;
      *(int *)(pplVar21 + 2) = iVar28;
      local_3c0 = pplVar21 + 3;
    }
    pplVar23 = local_3c0;
    plVar18 = plVar11;
    plVar37 = plVar36;
    if (plVar36 <= plVar11) goto LAB_141199914;
  }
  iVar13 = (int)((ulonglong)((longlong)plVar37 - (longlong)plVar18) >> 3);
  pplVar21 = local_3c0;
  goto joined_r0x00014119863b;
code_r0x000141199857:
  param_1 = local_3c8;
  if (iVar13 != 0) {
LAB_141199894:
    puVar39 = &DAT_149dfb77a;
    if ((int)plVar11[6] != 0) {
      puVar39 = (undefined2 *)*plVar37;
    }
    puVar16 = &DAT_149dfb77a;
    if ((int)plVar24[1] != 0) {
      puVar16 = (undefined2 *)*plVar24;
    }
    lVar26 = 0;
    while( true ) {
      uVar2 = *(ushort *)((longlong)puVar16 + lVar26);
      uVar20 = (uint)uVar2;
      uVar3 = *(ushort *)((longlong)puVar39 + lVar26);
      uVar19 = (uint)uVar3;
      if (uVar2 != uVar3) break;
      if (uVar2 == 0) goto joined_r0x0001411996ca;
LAB_1411998c3:
      lVar26 = lVar26 + 2;
    }
    if ((uVar3 | uVar2) < 0x80) {
      uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1411998c3;
    }
    if ((int)(uVar20 - uVar19) < 0) goto LAB_14119987f;
  }
  goto joined_r0x0001411996ca;
LAB_14119902d:
  if (-1 < (int)(uVar31 - uVar20)) goto LAB_1411990e2;
LAB_14119903e:
  local_58 = plVar36[4];
  local_78 = *plVar36;
  lStack_70 = plVar36[1];
  local_68 = plVar36[2];
  lStack_60 = plVar36[3];
  plVar36[4] = plVar37[4];
  lVar26 = *plVar37;
  lVar42 = plVar37[1];
  lVar32 = plVar37[3];
  plVar36[2] = plVar37[2];
  plVar36[3] = lVar32;
  *plVar36 = lVar26;
  plVar36[1] = lVar42;
  plVar37[4] = local_58;
  plVar37[2] = local_68;
  plVar37[3] = lStack_60;
  *plVar37 = local_78;
  plVar37[1] = lStack_70;
  iVar13 = iVar27 * 2 + 1;
  iVar25 = iVar27;
  if ((int)uVar19 <= iVar13) goto LAB_1411990e2;
  goto LAB_141198c50;
LAB_14119942b:
  if (-1 < (int)(uVar20 - uVar19)) goto LAB_141199627;
LAB_14119943c:
  lVar26 = plVar36[4];
  lVar42 = *plVar36;
  lVar32 = plVar36[1];
  lVar6 = plVar36[2];
  lVar7 = plVar36[3];
  plVar36[4] = plVar24[4];
  lVar8 = *plVar24;
  lVar9 = plVar24[1];
  lVar10 = plVar24[3];
  plVar36[2] = plVar24[2];
  plVar36[3] = lVar10;
  *plVar36 = lVar8;
  plVar36[1] = lVar9;
  plVar24[4] = lVar26;
  plVar24[2] = lVar6;
  plVar24[3] = lVar7;
  *plVar24 = lVar42;
  plVar24[1] = lVar32;
  iVar13 = iVar25 * 2;
  iVar28 = iVar25 * 2 + 1;
  if ((longlong)uVar38 <= (longlong)iVar28) goto LAB_141199627;
  goto LAB_141199194;
LAB_141199627:
  uVar40 = uVar38 - 1;
  local_58 = plVar18[4];
  local_78 = *plVar18;
  lStack_70 = plVar18[1];
  local_68 = plVar18[2];
  lStack_60 = plVar18[3];
  plVar18[4] = plVar18[uVar40 * 5 + 4];
  lVar26 = plVar18[uVar40 * 5];
  lVar42 = (plVar18 + uVar40 * 5)[1];
  lVar32 = (plVar18 + uVar40 * 5 + 2)[1];
  plVar18[2] = plVar18[uVar40 * 5 + 2];
  plVar18[3] = lVar32;
  *plVar18 = lVar26;
  plVar18[1] = lVar42;
  plVar18[uVar40 * 5 + 4] = local_58;
  plVar18[uVar40 * 5 + 2] = local_68;
  (plVar18 + uVar40 * 5 + 2)[1] = lStack_60;
  plVar18[uVar40 * 5] = local_78;
  (plVar18 + uVar40 * 5)[1] = lStack_70;
  bVar43 = uVar38 < 3;
  uVar38 = uVar40;
  if (bVar43) goto LAB_141199914;
  goto LAB_14119918b;
}



// FUNCTION 141199bd2 FUN_141199bd2 body=110 status=ok
// SIG undefined FUN_141199bd2(void)

void FUN_141199bd2(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x4dfb) = 1;
  cVar1 = FUN_1403ae2fa(param_1 + 0x4b1,1,0);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141199c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1,0,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141199c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 141199c40 FUN_141199c40 body=21 status=ok
// SIG undefined FUN_141199c40(void)

bool FUN_141199c40(longlong *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x18))();
  return *pcVar1 != '\0';
}



// FUNCTION 141199c56 FUN_141199c56 body=445 status=ok
// SIG undefined FUN_141199c56(void)

void FUN_141199c56(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong *)param_1[-0x736] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[-0x736] + 0x700))();
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x4dfa) = 1;
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*param_1 + 0x48))(param_1,0);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*param_1 + 0x48))(param_1,1);
            if (cVar1 == '\0') {
              uVar5 = *(undefined4 *)((longlong)param_1 + 0x4e04);
              fVar3 = (float)(**(code **)(*plVar2 + 0x10))(plVar2,0);
              fVar4 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
              uVar5 = FUN_14114c86e(param_1,fVar3 * fVar4,uVar5);
              *(undefined4 *)((longlong)param_1 + 0x4e04) = uVar5;
            }
            FUN_140efe504(param_1 + -0x76c,1,0);
            if ((param_1[-0x6f4] != 0) && (DAT_14cbadd90 == 0)) {
              local_60 = &local_48;
              local_48 = FUN_141030f22;
              local_50 = FUN_14081d0ea;
              local_58 = &LAB_1459f2e4c;
              local_68 = &LAB_148c39de3;
              local_70 = &LAB_1457a9eb2;
              local_78 = &DAT_149e063b2;
              local_80 = 0;
              local_88 = 0x10000004;
              local_90 = 0x10;
              local_98 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141199e14 FUN_141199e14 body=182 status=ok
// SIG undefined FUN_141199e14(void)

uint FUN_141199e14(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint unaff_EBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141199ee6(param_1,&local_48,param_2 + 0x10);
  if (local_48 != (longlong *)0x0) {
    unaff_EBP = (**(code **)(*local_48 + 0x18))(local_48,param_2,param_3);
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
  if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_EBP & 0xffffff01;
}



// FUNCTION 141199ee6 FUN_141199ee6 body=110 status=ok
// SIG undefined FUN_141199ee6(void)

void FUN_141199ee6(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x50);
    lVar3 = (longlong)*(int *)(param_1 + 0x58) << 4;
    do {
      lVar1 = *plVar2;
      if ((((*(int *)(lVar1 + 0x30) == *param_3) && (*(int *)(lVar1 + 0x34) == param_3[1])) &&
          (*(int *)(lVar1 + 0x38) == param_3[2])) && (*(int *)(lVar1 + 0x3c) == param_3[3])) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = lVar1;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 141199f54 FUN_141199f54 body=57 status=ok
// SIG undefined FUN_141199f54(void)

void FUN_141199f54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53e80 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53e80 = FUN_140002ddd(FUN_1464abe94,uVar1,L"TimeOfDayEventKey");
  }
  return;
}



// FUNCTION 141199f8e FUN_141199f8e body=444 status=ok
// SIG undefined FUN_141199f8e(void)

ulonglong FUN_141199f8e(longlong *param_1,int param_2,undefined8 param_3,longlong *param_4,
                       char param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar8;
  
  iVar10 = *(int *)((longlong)param_1 + 0x2c);
  iVar2 = (**(code **)(*param_1 + 0xd8))();
  if (iVar2 < param_2 - iVar10) {
LAB_14119a0e1:
    uVar5 = 0;
  }
  else {
    uVar7 = *(uint *)((longlong)param_1 + 0x2c);
    uVar3 = -(int)((longlong)param_2 % (longlong)(int)uVar7);
    uVar5 = (ulonglong)uVar3;
    if ((int)uVar3 < 0) {
      uVar5 = (longlong)param_2 % (longlong)(int)uVar7 & 0xffffffff;
    }
    lVar1 = param_1[2];
    lVar11 = uVar5 * 0xb0;
    if (*(int *)(lVar1 + 0xc + lVar11) == param_2) {
      *(int *)((longlong)param_1 + 0x24) = param_2;
      *(int *)(param_1 + 5) = (int)uVar5;
      plVar8 = param_4;
      FUN_14098bcca(param_4,lVar1 + lVar11);
      *(undefined2 *)(param_4 + 0x15) = *(undefined2 *)(lVar1 + 0xa8 + lVar11);
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < 1 || param_5 != '\0') goto LAB_141199ff2;
      iVar10 = 0;
      do {
        uVar6 = (ulonglong)(uint)(param_2 + iVar10);
        if (param_2 + iVar10 < 1) {
          uVar6 = uVar5;
        }
        uVar9 = uVar6 % (ulonglong)uVar7;
        if (*(int *)(lVar1 + 0xc + uVar9 * 0xb0) == (int)uVar6) goto LAB_14119a03b;
        iVar10 = iVar10 + -1;
      } while (uVar7 + iVar10 != 0);
      uVar9 = 0xffffffff;
LAB_14119a03b:
      uVar3 = 0;
      do {
        uVar5 = (longlong)(int)(param_2 + uVar3) % (longlong)(int)uVar7;
        uVar4 = -(int)uVar5;
        uVar6 = (ulonglong)uVar4;
        if ((int)uVar4 < 0) {
          uVar6 = uVar5 & 0xffffffff;
        }
        if (param_2 + uVar3 == *(int *)(lVar1 + 0xc + uVar6 * 0xb0)) {
          if ((int)uVar9 == -1) goto LAB_14119a0e1;
          lVar11 = uVar9 * 0xb0;
          FUN_14098bcca(param_4,lVar1 + lVar11);
          *(undefined2 *)(param_4 + 0x15) = *(undefined2 *)(lVar1 + 0xa8 + lVar11);
          (**(code **)(*param_4 + 0x50))(param_4,param_1[2] + lVar11,uVar6 * 0xb0 + param_1[2]);
          iVar2 = param_2 - *(int *)(param_1[2] + 0xc + lVar11);
          iVar10 = -iVar2;
          if (iVar10 < 0) {
            iVar10 = iVar2;
          }
          *(int *)((longlong)param_4 + 0xc) = param_2;
          plVar8 = (longlong *)param_1[2];
          *(int *)(param_4 + 1) = iVar10 + (int)plVar8[uVar9 * 0x16 + 1];
          goto LAB_14119a0a9;
        }
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
      if ((int)uVar9 == -1) goto LAB_14119a0e1;
      lVar11 = uVar9 * 0xb0;
      FUN_14098bcca(param_4,lVar1 + lVar11);
      *(undefined2 *)(param_4 + 0x15) = *(undefined2 *)(lVar1 + 0xa8 + lVar11);
      param_2 = param_2 - *(int *)(param_1[2] + 0xc + lVar11);
      iVar10 = -param_2;
      if (iVar10 < 0) {
        iVar10 = param_2;
      }
      uVar7 = iVar10 + *(int *)(param_1[2] + 8 + lVar11);
      plVar8 = (longlong *)(ulonglong)uVar7;
      *(uint *)(param_4 + 1) = uVar7;
LAB_14119a0a9:
      *(undefined4 *)(param_4 + 2) = 0xffffffff;
    }
    uVar5 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
  }
LAB_141199ff2:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14119a14e FUN_14119a14e body=3390 status=ok
// SIG undefined FUN_14119a14e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14119a14e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  longlong *plVar25;
  uint *puVar26;
  undefined1 auStack_238 [36];
  uint local_214;
  ulonglong local_210;
  longlong local_208;
  uint *local_200;
  int local_1f8;
  int local_1f4;
  longlong *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  int local_1c4;
  longlong local_1c0;
  longlong *local_1b8;
  undefined8 *local_1b0;
  uint *local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined1 local_148;
  byte local_147;
  undefined1 local_146;
  undefined4 local_144;
  longlong *local_140;
  undefined4 local_138;
  uint uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  uint *local_b0;
  int local_a8;
  uint local_a4;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1c0 = param_1;
  if (((*(char *)(param_1 + 0x110) == '\0') && (lVar10 = FUN_140059518(param_1 + 0x44), lVar10 != 0)
      ) && (local_178 = FUN_14120f7e6(lVar10), local_178 != 0)) {
    plVar11 = (longlong *)FUN_140e82300();
    local_c8 = (longlong *)*plVar11;
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 8))();
    }
    local_c0 = (undefined4)plVar11[1];
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    FUN_1446ddda2(&local_98,"MouseAndKeyboardCollection_Name",0);
    FUN_140ac6c96(&local_98,&local_c8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    lVar12 = FUN_145827b5d(DAT_14c951640);
    FUN_1446f470e(&local_98,L"controls_mouse_keyboard",1);
    *(undefined8 *)(lVar12 + 0x70) = local_98;
    plVar11 = *(longlong **)(lVar12 + 0x78);
    local_208 = lVar12;
    if (plVar11 != local_c8) {
      *(longlong **)(lVar12 + 0x78) = local_c8;
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 8))();
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    *(undefined4 *)(local_208 + 0x80) = local_c0;
    FUN_14101dd24(local_208,lVar10);
    uStack_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbd7f60) && (FUN_144b3d300(&DAT_14cbd7f60), DAT_14cbd7f60 == -1)) {
      DAT_14cbd7f30 = 0;
      _DAT_14cbd7f38 = 0;
      DAT_14cbd7f10 = 0;
      _DAT_14cbd7f18 = 0;
      _DAT_14cbd7f3c = 0xffffffff00000080;
      _DAT_14cbd7f44 = 0;
      DAT_14cbd7f50 = 0;
      _DAT_14cbd7f58 = 0;
      atexit(FUN_144287713);
      _Init_thread_footer(&DAT_14cbd7f60);
    }
    FUN_1449ad616(&DAT_14cbd7f10);
    FUN_1446ddc76(&local_d0,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_d8,"CategoryTitle_Movement",1);
    lVar12 = local_208;
    FUN_14119b1f2(&local_98,local_208,local_d8,local_d0);
    FUN_1446ddc76(&local_e0,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_e8,"CategoryTitle_Combat",1);
    FUN_14119b1f2(&local_98,lVar12,local_e8,local_e0);
    FUN_1446ddc76(&local_f0,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_f8,"CategoryTitle_Communication",1);
    FUN_14119b1f2(&local_98,lVar12,local_f8,local_f0);
    FUN_1446ddc76(&local_100,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_108,"CategoryTitle_Common",1);
    FUN_14119b1f2(&local_98,lVar12,local_108,local_100);
    FUN_1446ddc76(local_110,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_118,"CategoryTitle_Vehicle",1);
    FUN_14119b1f2(&local_98,lVar12,local_118);
    lVar10 = FUN_1400b6e86(lVar10);
    if ((lVar10 != 0) &&
       (lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x30) + 0x18))(lVar10 + 0x30), lVar10 != 0)) {
      local_180 = (longlong *)FUN_145827b52(lVar10);
      local_188 = local_180 + 2;
      local_168 = 0x100000000;
      local_158 = 0xffffffff;
      plStack_150 = (longlong *)((ulonglong)plStack_150 & 0xffffffff00000000);
      uStack_160 = local_188;
      if ((int)local_180[5] == 0) {
        local_1c4 = 0;
      }
      else {
        FUN_1449c0562(&local_168);
        local_1c4 = (int)local_180[5];
      }
      local_128 = local_158;
      uVar5 = local_128;
      plStack_120 = plStack_150;
      local_138 = (undefined4)local_168;
      uStack_134 = local_168._4_4_;
      uStack_130 = (undefined4)uStack_160;
      uStack_12c = uStack_160._4_4_;
      local_128._4_4_ = (int)((ulonglong)local_158 >> 0x20);
      iVar15 = local_128._4_4_;
      local_140 = local_180;
      if ((local_128._4_4_ != local_1c4) || (local_128 = uVar5, uStack_160 != local_188)) {
        do {
          local_128 = uVar5;
          lVar10 = *local_140;
          plVar11 = (longlong *)FUN_145827b58(*(undefined8 *)(lVar10 + 8 + (longlong)iVar15 * 0x18))
          ;
          local_1f0 = plVar11 + 2;
          local_168 = 0x100000000;
          local_158 = 0xffffffff;
          plStack_150 = (longlong *)((ulonglong)plStack_150 & 0xffffffff00000000);
          uStack_160 = local_1f0;
          if ((int)plVar11[5] == 0) {
            uVar19 = 1;
            local_214 = 0xffffffff;
            iVar23 = 0;
            iVar7 = 0;
            local_158._4_4_ = 0;
            local_1e0 = 0;
          }
          else {
            FUN_1449c0562(&local_168);
            local_1e0 = local_168 & 0xffffffff;
            uVar19 = local_168 >> 0x20;
            local_214 = (uint)local_158;
            iVar23 = (int)plVar11[5];
            iVar7 = (int)plStack_150;
          }
          if (local_158._4_4_ != iVar23 || uStack_160 != local_1f0) {
            local_1b0 = (undefined8 *)(lVar10 + (longlong)iVar15 * 0x18 + 8);
            plVar25 = uStack_160;
            iVar15 = local_158._4_4_;
            local_1f8 = iVar23;
            local_1e8 = uStack_160;
            local_1b8 = plVar11;
            do {
              plVar22 = DAT_14c966e90;
              lVar10 = *plVar11;
              lVar12 = (longlong)iVar15 * 0x60;
              local_1a0 = uVar19;
              if (*(int *)(lVar10 + 0x10 + lVar12) != *(int *)(lVar10 + 0x3c + lVar12)) {
                local_168 = 0;
                if (DAT_14c966e90 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
                  UNLOCK();
                }
                plStack_150 = DAT_14c966fe0;
                local_158 = DAT_14c966fd8;
                local_148 = 7;
                local_147 = (local_147 & 0xfc) + 1;
                local_146 = 0;
                local_144 = 0;
                uStack_160 = DAT_14c966fd0;
                if (DAT_14c966fe0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c966fe0 + 1) = (int)DAT_14c966fe0[1] + 1;
                  UNLOCK();
                }
                local_1f4 = iVar7;
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = plVar22 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*plVar22)();
                    LOCK();
                    piVar2 = (int *)((longlong)plVar22 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar22 + 0x10))();
                    }
                  }
                }
                lVar14 = lVar10 + lVar12;
                local_147 = local_147 | 1;
                puVar26 = (uint *)(lVar14 + 0x18);
                local_a4 = *(uint *)(lVar14 + 0x30);
                if (local_a4 == 0) {
                  local_210 = 0;
                  uVar19 = 1;
                  iVar15 = 0;
                  uVar20 = 0;
                }
                else {
                  puVar18 = *(uint **)(lVar14 + 0x28);
                  if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
                    puVar18 = puVar26;
                  }
                  uVar20 = *puVar18;
                  if (uVar20 == 0) {
                    iVar15 = local_a4 + 0x1e;
                    if (-1 < (int)(local_a4 - 1)) {
                      iVar15 = local_a4 - 1;
                    }
                    local_210 = 0;
                    uVar21 = (ulonglong)(uint)(iVar15 >> 5);
                    if (iVar15 >> 5 < 1) {
                      uVar21 = local_210;
                    }
                    iVar15 = 0;
                    do {
                      if (uVar21 == local_210) {
                        uVar19 = 1;
                        local_210 = (ulonglong)((int)uVar21 + 1);
                        iVar15 = (int)uVar21 * 0x20 + 0x20;
                        uVar20 = local_a4;
                        goto LAB_14119a80f;
                      }
                      iVar15 = iVar15 + 0x20;
                      uVar20 = puVar18[local_210 + 1];
                      local_210 = local_210 + 1;
                    } while (uVar20 == 0);
                  }
                  else {
                    local_210 = 0;
                    iVar15 = 0;
                  }
                  uVar19 = (ulonglong)(-uVar20 & uVar20);
                  uVar21 = uVar19 * 2 + 1;
                  lVar13 = 0x3f;
                  if (uVar21 != 0) {
                    for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                    }
                  }
                  uVar20 = (iVar15 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                  if ((int)local_a4 <= (int)uVar20) {
                    uVar20 = local_a4;
                  }
                }
LAB_14119a80f:
                local_b8 = (char *)CONCAT44(1 << ((byte)local_a4 & 0x1f),(int)local_a4 >> 5);
                local_a8 = -1 << ((byte)local_a4 & 0x1f);
                local_a0 = local_a4 & 0xffffffe0;
                local_b0 = puVar26;
                if (*(uint *)(lVar14 + 0x30) != local_a4) {
                  FUN_1449c0562(&local_b8);
                }
                uVar4 = local_a4;
                if ((uVar20 != local_a4) || (puVar26 != local_b0)) {
                  local_1d8 = (longlong *)(lVar10 + lVar12 + 8);
                  uVar24 = 0xffffffff;
                  local_190 = 0;
                  local_198 = 0;
                  local_200 = puVar26;
                  local_1d0 = lVar14;
                  local_1a8 = local_b0;
                  do {
                    lVar10 = *local_1d8;
                    lVar12 = *(longlong *)(lVar10 + 0x80 + (longlong)(int)uVar20 * 0x90);
                    if (lVar12 == 0) {
LAB_14119a93d:
                      puVar26 = local_200;
                      lVar10 = lVar10 + (longlong)(int)uVar20 * 0x90;
                      cVar6 = (**(code **)(*(longlong *)*local_1b0 + 0x2e8))
                                        ((longlong *)*local_1b0,lVar10,&local_168);
                      if ((cVar6 != '\0') && (*(longlong *)(lVar10 + 0x30) != DAT_14c964dd0)) {
                        local_b8 = "CategoryTitle_Misc";
                        local_b0 = (uint *)CONCAT35(local_b0._5_3_,0x12);
                        uVar9 = FUN_14001a6c0(&local_b8,1);
                        lVar10 = FUN_14119b1f2(&local_98,local_208,local_198,uVar9);
                        if (lVar10 != 0) {
                          lVar12 = FUN_14119b059(DAT_14c951640);
                          FUN_14119b5a0(lVar12,*local_1b0,local_1d8,&local_168);
                          FUN_140608954(lVar12 + 0xb0,&DAT_14cb9a828);
                          *(char *)(lVar12 + 0x1d8) = (char)local_190;
                          FUN_14101d6ec(lVar10,lVar12);
                          FUN_144a13f80(&DAT_14cbd7f10,&local_b8,lVar14,0);
                        }
                        plVar22 = plStack_150;
                        plVar11 = local_1b8;
                        plVar25 = local_1e8;
                        iVar7 = local_1f4;
                        iVar23 = local_1f8;
                        if (plStack_150 != (longlong *)0x0) {
                          LOCK();
                          plVar1 = plStack_150 + 1;
                          *(int *)plVar1 = (int)*plVar1 + -1;
                          UNLOCK();
                          if ((int)*plVar1 == 0) {
                            (**(code **)*plStack_150)(plStack_150);
                            LOCK();
                            piVar2 = (int *)((longlong)plVar22 + 0xc);
                            *piVar2 = *piVar2 + -1;
                            UNLOCK();
                            iVar7 = local_1f4;
                            iVar23 = local_1f8;
                            if (*piVar2 == 0) {
                              (**(code **)(*plVar22 + 0x10))(plVar22);
                              iVar7 = local_1f4;
                              iVar23 = local_1f8;
                            }
                          }
                        }
                        goto LAB_14119ab48;
                      }
                    }
                    else {
                      lVar13 = FUN_14119ae8e();
                      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38))
                         || (lVar14 = local_1d0,
                            *(longlong *)
                             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                             (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30))
                      goto LAB_14119a93d;
                      cVar6 = *(char *)(lVar12 + 0x30);
                      lVar14 = FUN_14119af74();
                      if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38))
                         && (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
                        local_198 = *(undefined8 *)(lVar12 + 0x48);
                        local_190 = CONCAT71((int7)((ulonglong)local_198 >> 8),
                                             *(undefined1 *)(lVar12 + 0x50));
                      }
                      lVar14 = local_1d0;
                      puVar26 = local_200;
                      if (cVar6 != '\0') goto LAB_14119a93d;
                    }
                    uVar24 = uVar24 & ~(uint)uVar19;
                    puVar18 = *(uint **)(lVar14 + 0x28);
                    if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
                      puVar18 = puVar26;
                    }
                    uVar3 = *(uint *)(lVar14 + 0x30);
                    iVar23 = (int)local_210;
                    lVar10 = (longlong)iVar23;
                    uVar20 = puVar18[lVar10] & uVar24;
                    if (uVar20 == 0) {
                      iVar7 = uVar3 + 0x1e;
                      if (-1 < (int)(uVar3 - 1)) {
                        iVar7 = uVar3 - 1;
                      }
                      iVar7 = iVar7 >> 5;
                      iVar15 = iVar15 + 0x20;
                      iVar8 = iVar7;
                      if (iVar7 < iVar23) {
                        iVar8 = iVar23;
                      }
                      if (iVar23 < iVar7) {
                        lVar12 = 0;
                        do {
                          uVar20 = puVar18[lVar10 + lVar12 + 1];
                          if (uVar20 != 0) {
                            local_210 = (ulonglong)(iVar23 + (int)lVar12 + 1);
                            uVar24 = 0xffffffff;
                            goto LAB_14119a9e4;
                          }
                          iVar15 = iVar15 + 0x20;
                          lVar12 = lVar12 + 1;
                        } while (iVar8 - lVar10 != lVar12);
                        uVar24 = 0xffffffff;
                        lVar10 = (longlong)iVar8;
                      }
                      local_210 = lVar10 + 1;
                      lVar14 = local_1d0;
                      puVar26 = local_200;
                      uVar20 = uVar3;
                    }
                    else {
LAB_14119a9e4:
                      uVar19 = (ulonglong)(-uVar20 & uVar20);
                      uVar21 = uVar19 * 2 + 1;
                      lVar10 = 0x3f;
                      if (uVar21 != 0) {
                        for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                        }
                      }
                      uVar20 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                      if ((int)uVar3 <= (int)uVar20) {
                        uVar20 = uVar3;
                      }
                    }
                  } while ((uVar20 != uVar4) || (puVar26 != local_1a8));
                }
                plVar22 = plStack_150;
                plVar25 = local_1e8;
                plVar11 = local_1b8;
                iVar7 = local_1f4;
                iVar23 = local_1f8;
                if (plStack_150 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_150 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_150)(plStack_150);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar22 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    plVar25 = local_1e8;
                    plVar11 = local_1b8;
                    iVar7 = local_1f4;
                    iVar23 = local_1f8;
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar22 + 0x10))(plVar22);
                      plVar25 = local_1e8;
                      plVar11 = local_1b8;
                      iVar7 = local_1f4;
                      iVar23 = local_1f8;
                    }
                  }
                }
              }
LAB_14119ab48:
              local_214 = local_214 & ~(uint)local_1a0;
              plVar22 = (longlong *)plVar25[2];
              if ((longlong *)plVar25[2] == (longlong *)0x0) {
                plVar22 = plVar25;
              }
              iVar8 = (int)plVar25[3];
              iVar15 = (int)local_1e0;
              lVar10 = (longlong)iVar15;
              uVar20 = *(uint *)((longlong)plVar22 + lVar10 * 4) & local_214;
              if (uVar20 == 0) {
                iVar16 = iVar8 + 0x1e;
                if (-1 < iVar8 + -1) {
                  iVar16 = iVar8 + -1;
                }
                iVar16 = iVar16 >> 5;
                iVar7 = iVar7 + 0x20;
                iVar17 = iVar16;
                if (iVar16 < iVar15) {
                  iVar17 = iVar15;
                }
                if (iVar15 < iVar16) {
                  lVar12 = 0;
                  do {
                    uVar20 = *(uint *)((longlong)plVar22 + lVar12 * 4 + lVar10 * 4 + 4);
                    if (uVar20 != 0) {
                      local_1e0 = (ulonglong)(iVar15 + (int)lVar12 + 1);
                      local_214 = 0xffffffff;
                      goto LAB_14119abc2;
                    }
                    iVar7 = iVar7 + 0x20;
                    lVar12 = lVar12 + 1;
                  } while (iVar17 - lVar10 != lVar12);
                  local_214 = 0xffffffff;
                  iVar15 = iVar17;
                }
                local_1e0 = (ulonglong)(iVar15 + 1);
                uVar19 = local_1a0;
                plVar25 = local_1e8;
                iVar15 = iVar8;
              }
              else {
LAB_14119abc2:
                uVar19 = (ulonglong)(-uVar20 & uVar20);
                uVar21 = uVar19 * 2 + 1;
                lVar10 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                  }
                }
                iVar15 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                if (iVar8 <= iVar15) {
                  iVar15 = iVar8;
                }
              }
            } while ((iVar15 != iVar23) || (plVar25 != local_1f0));
          }
          local_128 = CONCAT44(local_128._4_4_,(uint)local_128 & ~uStack_134);
          FUN_1449c0562(&local_138);
          iVar15 = local_128._4_4_;
          uVar5 = local_128;
        } while ((local_128._4_4_ != local_1c4) ||
                (((longlong *)CONCAT44(uStack_12c,uStack_130) != local_188 ||
                 (local_140 != local_180))));
      }
      FUN_1446ddc76(&local_170,"controls_mouse_keyboard",1);
      FUN_145827f2e(local_178,local_170,local_208);
      *(undefined1 *)(local_1c0 + 0x110) = 1;
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145827ea0(&local_98);
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119ae8e FUN_14119ae8e body=228 status=ok
// SIG undefined FUN_14119ae8e(void)

longlong FUN_14119ae8e(void)

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
  if (DAT_14cb9ab08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148b0779f;
    local_40 = FUN_146595488;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxUISettings",L"GbxUISettingsMappingData",&DAT_14cb9ab08,&DAT_148b0779e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ab08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119af74 FUN_14119af74 body=228 status=ok
// SIG undefined FUN_14119af74(void)

longlong FUN_14119af74(void)

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
  if (DAT_14cbb59d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465954b6;
    local_38 = &LAB_148c636e7;
    local_40 = FUN_1418d159a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUISettingsMappingData",&DAT_14cbb59d0,&DAT_148c636e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb59d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119b059 FUN_14119b059 body=177 status=ok
// SIG undefined FUN_14119b059(void)

undefined8 FUN_14119b059(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14119b10c();
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
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119b10c FUN_14119b10c body=228 status=ok
// SIG undefined FUN_14119b10c(void)

longlong FUN_14119b10c(void)

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
  if (DAT_14cbb59a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a87640;
    local_38 = &LAB_148c636e3;
    local_40 = FUN_140e42c68;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1e0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUISettingKeyboardInput",&DAT_14cbb59a0,&DAT_148c636e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb59a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119b1f2 FUN_14119b1f2 body=940 status=ok
// SIG undefined FUN_14119b1f2(void)

longlong FUN_14119b1f2(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_7c [4];
  longlong *local_78;
  longlong *local_70;
  longlong local_60;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_4;
  local_88 = param_3;
  FUN_1446dcdd4(local_50,&local_88);
  lVar4 = local_88;
  local_98 = local_88;
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
  local_a8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  local_a0 = DAT_14c844848;
  if (lVar4 == 0) {
    FUN_1446dcdd4(&local_78,&local_90);
    FUN_1404e49fa(local_50,&local_78);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_98 = local_90;
    lVar4 = local_90;
  }
  FUN_140ac6c96(local_50,&local_a8);
  plVar3 = local_a8;
  plVar5 = local_a8;
  if (*(code **)(*local_a8 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_a8 + 0x50))(local_a8);
  }
  FUN_1447a1fc0(plVar5);
  pcVar1 = *(code **)(*plVar3 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar5 = plVar3 + 3;
    if (plVar3[5] != 0) {
      plVar5 = (longlong *)(plVar3[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar5 = plVar3 + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar1)(plVar3);
  }
  if ((int)plVar5[1] < 2) {
    FUN_1400021e4(&local_98,local_b8);
    FUN_140233b1a(&local_78,local_b8);
    FUN_140008f88(&local_a8,&local_78);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    lVar4 = local_98;
    if (local_b8[0] != 0) {
      FUN_1400020a8();
      lVar4 = local_98;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar3 == lVar4) {
          if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            lVar4 = plVar3[1];
            goto LAB_14119b3fd;
          }
          break;
        }
        iVar7 = (int)plVar3[2];
      } while (iVar7 != -1);
    }
  }
  lVar4 = FUN_145827b5d(DAT_14c951640);
  *(longlong *)(lVar4 + 0x70) = local_98;
  plVar3 = *(longlong **)(lVar4 + 0x78);
  local_b8[0] = lVar4;
  if (plVar3 != local_a8) {
    *(longlong **)(lVar4 + 0x78) = local_a8;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(lVar4 + 0x80) = local_a0;
  FUN_14101d6ec(param_2,lVar4);
  local_78 = &local_98;
  local_70 = local_b8;
  FUN_145827bf4(param_1,local_7c);
  lVar4 = local_b8[0];
LAB_14119b3fd:
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14119b5a0 FUN_14119b5a0 body=1388 status=ok
// SIG undefined FUN_14119b5a0(void)

void FUN_14119b5a0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStack_d8 [44];
  uint local_ac;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  uint *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
    *(longlong *)(param_1 + 0x168) = param_2[5];
    *(undefined8 *)(param_1 + 0x140) = *param_4;
    *(undefined8 *)(param_1 + 0x148) = param_4[1];
    uVar5 = param_4[2];
    lVar18 = param_4[3];
    if (lVar18 != 0) {
      LOCK();
      *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
      UNLOCK();
    }
    plVar11 = *(longlong **)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x150) = uVar5;
    *(longlong *)(param_1 + 0x158) = lVar18;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    *(undefined8 *)(param_1 + 0x160) = param_4[4];
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar21 = 0;
      iVar8 = 0;
      iVar20 = 0;
    }
    else {
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 2);
      }
      uVar19 = *puVar9;
      if (uVar19 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        uVar21 = 0;
        uVar16 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar16 = uVar21;
        }
        iVar20 = 0;
        do {
          if (uVar16 == uVar21) goto LAB_14119b90c;
          iVar20 = iVar20 + 0x20;
          uVar19 = puVar9[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar21 = 0;
        iVar20 = 0;
      }
      uVar16 = (ulonglong)(-uVar19 & uVar19);
      uVar2 = uVar16 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar8 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
    }
    if (iVar8 != iVar3) {
      local_88 = param_1 + 0x140;
      local_90 = param_1 + 0x1c0;
      local_a8 = (undefined8 *)(param_1 + 0x138);
      local_98 = param_1 + 0x170;
      uVar19 = 0xffffffff;
      local_a0 = param_2;
      local_80 = (uint *)(param_3 + 2);
      do {
        puVar17 = (undefined8 *)((longlong)iVar8 * 0x90 + *param_3);
        local_ac = uVar19;
        cVar7 = (**(code **)(*local_a0 + 0x2e8))(local_a0,puVar17,local_88);
        if (cVar7 != '\0') {
          lVar18 = puVar17[0x10];
          if (lVar18 != 0) {
            lVar10 = FUN_14119ae8e();
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              if (*(char *)(lVar18 + 0x30) != '\x01') goto LAB_14119b863;
              FUN_1406fa324(local_90,lVar18 + 0x38);
            }
          }
          *local_a8 = *puVar17;
          local_50 = puVar17 + 9;
          if (puVar17[9] == puVar17[6]) {
            local_50 = puVar17 + 6;
          }
          local_78[0]._0_1_ = *(undefined1 *)(puVar17 + 5);
          local_58 = local_78;
          FUN_14119bb0e(local_98,local_68,&local_58);
          plVar11 = (longlong *)puVar17[1];
          if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
            plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
          }
          FUN_1447a1fc0(plVar11);
          plVar11 = (longlong *)puVar17[1];
          pcVar6 = *(code **)(*plVar11 + 0x28);
          if (pcVar6 == FUN_14482841c) {
            plVar12 = plVar11 + 3;
            if (plVar11[5] != 0) {
              plVar12 = (longlong *)(plVar11[5] + 8);
            }
          }
          else if (pcVar6 == (code *)&LAB_14010c34c) {
            plVar12 = plVar11 + 2;
          }
          else {
            plVar12 = (longlong *)(*pcVar6)(plVar11);
          }
          if ((int)plVar12[1] < 2) {
            FUN_1400021e4(local_a8,local_78);
            FUN_140ba7826(local_68,&DAT_149e05ec0,local_78);
            FUN_140233b1a(&local_58,local_68);
            plVar11 = *(longlong **)(param_1 + 0x78);
            if (plVar11 != local_58) {
              *(longlong **)(param_1 + 0x78) = local_58;
              if (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 8))();
              }
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            *(int *)(param_1 + 0x80) = (int)local_50;
            if (local_58 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x10))();
            }
            if (local_68[0] != 0) {
              FUN_1400020a8();
            }
            if (CONCAT71(local_78[0]._1_7_,(undefined1)local_78[0]) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            plVar11 = (longlong *)puVar17[1];
            plVar12 = *(longlong **)(param_1 + 0x78);
            if (plVar12 != plVar11) {
              *(longlong **)(param_1 + 0x78) = plVar11;
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
              }
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(puVar17 + 2);
          }
        }
LAB_14119b863:
        uVar19 = local_ac & ~(uint)uVar16;
        puVar9 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar9 = local_80;
        }
        iVar4 = (int)param_3[5];
        iVar8 = (int)uVar21;
        lVar18 = (longlong)iVar8;
        uVar15 = puVar9[lVar18] & uVar19;
        if (uVar15 == 0) {
          iVar13 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar13 = iVar4 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar8) {
            iVar14 = iVar8;
          }
          if (iVar8 < iVar13) {
            lVar10 = 0;
            do {
              uVar15 = puVar9[lVar18 + lVar10 + 1];
              if (uVar15 != 0) {
                uVar21 = (ulonglong)(iVar8 + (int)lVar10 + 1);
                uVar19 = 0xffffffff;
                goto LAB_14119b8da;
              }
              iVar20 = iVar20 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar14 - lVar18 != lVar10);
            uVar19 = 0xffffffff;
            iVar8 = iVar14;
          }
          uVar21 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar4;
        }
        else {
LAB_14119b8da:
          uVar16 = (ulonglong)(-uVar15 & uVar15);
          uVar2 = uVar16 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar8 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar8) {
            iVar8 = iVar4;
          }
        }
      } while (iVar8 != iVar3);
    }
LAB_14119b90c:
    FUN_1400021e4(param_1 + 0x138,local_68);
    FUN_140ba7826(&local_58,L"KBM_Input_",local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    plVar11 = local_58;
    if ((int)local_50 == 0) {
      plVar11 = (longlong *)&DAT_149dfb77a;
    }
    FUN_1446f470e(local_68,plVar11,1);
    *(longlong *)(param_1 + 0x70) = local_68[0];
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119bb0e FUN_14119bb0e body=1692 status=ok
// SIG undefined FUN_14119bb0e(void)

int * FUN_14119bb0e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  uint *puVar26;
  uint uVar27;
  int iVar28;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar28 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar28 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar28) {
      FUN_140549c28(param_1,iVar28);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar10 = iVar17 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar14 = iVar17 + 1;
    iVar19 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar19 = iVar17;
    }
    if (iVar19 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar10 = iVar17;
        }
        else {
          uVar27 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar27) {
              uVar24 = uVar27;
            }
          }
          else {
            uVar24 = (uVar27 * 3 >> 3) + uVar27 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar24 << 2,0);
          iVar10 = (int)(uVar12 >> 2);
          iVar14 = -0x20;
          if ((int)uVar27 <= iVar10) {
            iVar14 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar21,iVar10);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar10 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar10 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar21;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar10 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar28;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar13 = (byte)iVar17 & 0x1f;
    puVar26 = (uint *)((longlong)plVar21 + (longlong)(iVar19 >> 5) * 4);
    *puVar26 = *puVar26 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar28 = (int)param_1[6];
    lVar11 = (longlong)iVar28;
    iVar17 = *(int *)(*param_1 + 4 + lVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar17;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x28) = 0xffffffff;
    }
  }
  puVar26 = (uint *)(param_1 + 2);
  uVar27 = 1 << ((byte)iVar28 & 0x1f);
  puVar16 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar16 = puVar26;
  }
  iVar17 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar17 = iVar28;
  }
  puVar16[iVar17 >> 5] = puVar16[iVar17 >> 5] | uVar27;
  uVar24 = 1;
  pbVar2 = (byte *)(*param_1 + lVar11 * 0x28);
  puVar6 = (undefined8 *)param_3[1];
  bVar13 = *(byte *)*param_3;
  *pbVar2 = bVar13;
  *(undefined8 *)(pbVar2 + 8) = *puVar6;
  *(undefined8 *)(pbVar2 + 0x10) = puVar6[1];
  lVar11 = puVar6[2];
  *(longlong *)(pbVar2 + 0x18) = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
    bVar13 = *pbVar2;
  }
  pbVar2[0x20] = 0xff;
  pbVar2[0x21] = 0xff;
  pbVar2[0x22] = 0xff;
  pbVar2[0x23] = 0xff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar18 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar21 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar21 = (longlong *)param_1[8];
      }
      iVar10 = *(int *)((longlong)plVar21 + (ulonglong)((int)param_1[9] - 1U & (uint)bVar13) * 4);
      if (iVar10 != -1) {
        do {
          pbVar3 = (byte *)(*param_1 + (longlong)iVar10 * 0x28);
          if (*pbVar3 == bVar13) {
            plVar21 = *(longlong **)(pbVar3 + 0x18);
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar22 = plVar21 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            uVar7 = *(undefined8 *)pbVar2;
            uVar8 = *(undefined8 *)(pbVar2 + 8);
            uVar9 = *(undefined8 *)(pbVar2 + 0x18);
            *(undefined8 *)(pbVar3 + 0x10) = *(undefined8 *)(pbVar2 + 0x10);
            *(undefined8 *)(pbVar3 + 0x18) = uVar9;
            *(undefined8 *)pbVar3 = uVar7;
            *(undefined8 *)(pbVar3 + 8) = uVar8;
            lVar11 = *param_1;
            if (*(int *)((longlong)param_1 + 0x34) != 0) {
              *(int *)(lVar11 + (longlong)(int)param_1[6] * 0x28) = iVar28;
            }
            puVar4 = (undefined4 *)(lVar11 + (longlong)iVar28 * 0x28);
            *puVar4 = 0xffffffff;
            uVar15 = 0xffffffff;
            if (0 < *(int *)((longlong)param_1 + 0x34)) {
              uVar15 = (undefined4)param_1[6];
            }
            puVar4[1] = uVar15;
            *(int *)(param_1 + 6) = iVar28;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
            if ((uint *)param_1[4] != (uint *)0x0) {
              puVar26 = (uint *)param_1[4];
            }
            puVar26[iVar17 >> 5] = puVar26[iVar17 >> 5] & ~uVar27;
            iVar28 = iVar10;
            goto LAB_14119bf02;
          }
          iVar10 = *(int *)(pbVar3 + 0x20);
        } while (iVar10 != -1);
      }
    }
    if (3 < uVar18) {
      uVar12 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar24 = 1 << ((byte)lVar11 & 0x1f);
    }
  }
  if (((int)uVar18 < 1) || ((int)uVar24 <= (int)param_1[9])) {
    uVar27 = (int)param_1[9] - 1U & (uint)bVar13;
    *(uint *)(pbVar2 + 0x24) = uVar27;
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(undefined4 *)(pbVar2 + 0x20) =
         *(undefined4 *)((longlong)plVar21 + (ulonglong)((int)param_1[9] - 1U & uVar27) * 4);
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + (ulonglong)((int)param_1[9] - 1U & uVar27) * 4) = iVar28;
    goto LAB_14119bf02;
  }
  *(uint *)(param_1 + 9) = uVar24;
  plVar21 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar21,0,0,4);
    uVar24 = *(uint *)(param_1 + 9);
  }
  plVar22 = param_1 + 7;
  if (uVar24 == 1) {
    if (*plVar21 != 0) {
      FUN_1446efa72(plVar21,0,0,4);
    }
LAB_14119bc82:
    uVar27 = 0;
    do {
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar22;
      }
      *(undefined4 *)((longlong)plVar21 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar27) * 4) =
           0xffffffff;
      uVar27 = uVar27 + 1;
    } while (uVar24 != uVar27);
  }
  else {
    if (uVar24 == 0) goto LAB_14119bf02;
    FUN_1446efa72(plVar21,0,uVar24,4);
    if (0 < (int)uVar24) goto LAB_14119bc82;
  }
  iVar17 = (int)param_1[5];
  if (iVar17 == 0) {
    uVar12 = 0;
    uVar23 = 1;
    iVar10 = 0;
    iVar14 = 0;
  }
  else {
    puVar16 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar16 = puVar26;
    }
    uVar27 = *puVar16;
    if (uVar27 == 0) {
      iVar10 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar10 = iVar17 + -1;
      }
      uVar12 = 0;
      uVar23 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar23 = uVar12;
      }
      iVar14 = 0;
      do {
        if (uVar23 == uVar12) goto LAB_14119bf02;
        iVar14 = iVar14 + 0x20;
        uVar27 = puVar16[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar12 = 0;
      iVar14 = 0;
    }
    uVar23 = (ulonglong)(-uVar27 & uVar27);
    uVar5 = uVar23 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar10) {
      iVar10 = iVar17;
    }
  }
  if (iVar10 < iVar17) {
    uVar27 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar25 = (longlong)iVar10;
      uVar24 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar11 + lVar25 * 0x28);
      *(uint *)(lVar11 + 0x24 + lVar25 * 0x28) = uVar24;
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar22;
      }
      *(undefined4 *)(lVar11 + 0x20 + lVar25 * 0x28) =
           *(undefined4 *)((longlong)plVar21 + (ulonglong)((int)param_1[9] - 1U & uVar24) * 4);
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar22;
      }
      *(int *)((longlong)plVar21 + (ulonglong)((int)param_1[9] - 1U & uVar24) * 4) = iVar10;
      uVar27 = ~(uint)uVar23 & uVar27;
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puVar26;
      }
      iVar17 = (int)param_1[5];
      iVar10 = (int)uVar12;
      lVar11 = (longlong)iVar10;
      uVar24 = puVar16[lVar11] & uVar27;
      if (uVar24 == 0) {
        iVar19 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar19 = iVar17 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar20 = iVar19;
        if (iVar19 < iVar10) {
          iVar20 = iVar10;
        }
        if (iVar19 <= iVar10) break;
        lVar25 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar24 = puVar16[lVar11 + lVar25 + 1];
          if (uVar24 != 0) break;
          lVar25 = lVar25 + 1;
          if (iVar20 - lVar11 == lVar25) goto LAB_14119bf02;
        }
        uVar12 = (ulonglong)(iVar10 + (int)lVar25 + 1);
        uVar27 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar24 & uVar24);
      uVar5 = uVar23 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar17);
  }
LAB_14119bf02:
  *param_2 = iVar28;
  return param_2;
}



// FUNCTION 14119c1aa FUN_14119c1aa body=482 status=ok
// SIG undefined FUN_14119c1aa(void)

void FUN_14119c1aa(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14119c38e FUN_14119c38e body=84 status=ok
// SIG undefined FUN_14119c38e(void)

void FUN_14119c38e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x280,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 5;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14119c3e2 FUN_14119c3e2 body=98 status=ok
// SIG undefined FUN_14119c3e2(void)

void FUN_14119c3e2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 200);
    do {
      puVar1[-10] = 0;
      puVar1[-0x17] = 0;
      puVar1[-0x16] = 0;
      puVar1[-0x15] = 0;
      puVar1[-0x14] = 0;
      puVar1[-0x13] = 0;
      puVar1[-0x12] = 0;
      puVar1[-0x11] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-7] = 0;
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1 = puVar1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14119c450 FUN_14119c450 body=318 status=ok
// SIG undefined FUN_14119c450(void)

undefined8 * FUN_14119c450(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_30,L"NewLocalFogVolumeComponent",1);
  uVar2 = FUN_14119c590();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14a6538a0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_38,L"LocalFogVolumeComponent",1);
  uVar2 = FUN_14119c590();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,local_38,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  FUN_1405bab3a(param_1,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119c590 FUN_14119c590 body=228 status=ok
// SIG undefined FUN_14119c590(void)

longlong FUN_14119c590(void)

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
  if (DAT_14cad17a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1479e4d7c;
    local_40 = FUN_1417bddde;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/Engine",L"LocalFogVolumeComponent",&DAT_14cad17a8,FUN_1463b88b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad17a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119c676 FUN_14119c676 body=792 status=ok
// SIG undefined FUN_14119c676(void)

void FUN_14119c676(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
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
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
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
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14119c990(local_20,local_28);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119c990 FUN_14119c990 body=1031 status=ok
// SIG undefined FUN_14119c990(void)

undefined4 FUN_14119c990(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = 1;
  if (param_1 == (longlong *)0x0) goto LAB_14119cad5;
  if (DAT_14cb223d8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_1427b09ee;
    local_58 = &LAB_147f29feb;
    local_60 = FUN_1464384fe;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10004001;
    local_80 = 8;
    local_88 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,DAT_14cb223d8);
  if (plVar2 == (longlong *)0x0) goto LAB_14119cad5;
  if (DAT_14cb223d8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_1427b09ee;
    local_58 = &LAB_147f29feb;
    local_60 = FUN_1464384fe;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10004001;
    local_80 = 8;
    local_88 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb223d8);
  if ((plVar2 == plVar3) || (plVar3 == (longlong *)0x0)) goto LAB_14119cad5;
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  if (lVar4 == 0) goto LAB_14119cad5;
  if (*(longlong **)(lVar4 + 0x18) == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x180))();
  }
  if (param_2 == (longlong *)0x0) {
LAB_14119cafc:
    local_38 = (code *)0x0;
    uStack_30 = 0xffff;
    local_28 = 0;
  }
  else {
    if (DAT_14cb223d8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f29feb;
      local_60 = FUN_1464384fe;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb223d8);
    if (plVar2 == (longlong *)0x0) goto LAB_14119cafc;
    if (DAT_14cb223d8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f29feb;
      local_60 = FUN_1464384fe;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb223d8);
    if ((plVar2 == plVar3) || (plVar3 == (longlong *)0x0)) goto LAB_14119cafc;
    lVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (lVar6 == 0) goto LAB_14119cafc;
    local_38 = *(code **)(lVar6 + 0x20);
    uStack_30 = CONCAT62(uStack_30._2_6_,*(undefined2 *)(lVar6 + 0x28));
    local_28 = *(undefined8 *)(lVar6 + 0x30);
  }
  uVar1 = FUN_1448618b0(lVar4 + 0x20,&local_38,uVar5);
LAB_14119cad5:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119cd9e FUN_14119cd9e body=228 status=ok
// SIG undefined FUN_14119cd9e(void)

longlong FUN_14119cd9e(void)

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
  if (DAT_14caa8b98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14748a18b;
    local_40 = &LAB_145dee93e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x578;
    FUN_14081cfa3(L"/Script/ChaosSolverEngine",L"ChaosSolverActor",&DAT_14caa8b98,FUN_14632a82e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8b98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119ce8a FUN_14119ce8a body=228 status=ok
// SIG undefined FUN_14119ce8a(void)

longlong FUN_14119ce8a(void)

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
  if (DAT_14cc0c188 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1419073aa;
    local_38 = &LAB_1492f5c15;
    local_40 = &LAB_14671dc1e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeFactoryBaseNode",&DAT_14cc0c188,
                  FUN_14671dbfc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0c188;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119cf70 FUN_14119cf70 body=78 status=ok
// SIG undefined FUN_14119cf70(void)

void FUN_14119cf70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1410dec34();
  if (lVar1 != 0) {
    lVar2 = FUN_14119cfbe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140b4b2ee(lVar1,*(undefined4 *)(param_1 + 0x7c));
      return;
    }
  }
  return;
}



// FUNCTION 14119cfbe FUN_14119cfbe body=228 status=ok
// SIG undefined FUN_14119cfbe(void)

longlong FUN_14119cfbe(void)

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
  if (DAT_14cb26dd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b7c3e;
    local_38 = &LAB_147f8e74c;
    local_40 = FUN_14644b409;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedInputComponent",&DAT_14cb26dd0,FUN_14644b3e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb26dd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119d0a4 FUN_14119d0a4 body=30 status=ok
// SIG undefined FUN_14119d0a4(void)

longlong FUN_14119d0a4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    return *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0xf8);
  }
  return param_1 + 0x460;
}



// FUNCTION 14119d0c2 FUN_14119d0c2 body=157 status=ok
// SIG undefined FUN_14119d0c2(void)

void FUN_14119d0c2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  FUN_140861e20(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14119d0f2;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14119d0f2:
  plVar1 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014119d14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14119d160 FUN_14119d160 body=185 status=ok
// SIG undefined FUN_14119d160(void)

void FUN_14119d160(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + 0x130);
  if (*(int *)(param_1 + 0x138) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14119d185;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_14119d185:
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    plVar4 = (longlong *)(param_1 + 0x110);
    if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x100);
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 200);
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
                    /* WARNING: Could not recover jumptable at 0x00014119d20b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14119d219 FUN_14119d219 body=49 status=ok
// SIG undefined FUN_14119d219(void)

void FUN_14119d219(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14119d24a FUN_14119d24a body=40 status=ok
// SIG undefined FUN_14119d24a(void)

undefined8 FUN_14119d24a(undefined8 param_1,int param_2)

{
  FUN_14119d272();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14119d272 FUN_14119d272 body=293 status=ok
// SIG undefined FUN_14119d272(void)

void FUN_14119d272(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7d49d0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x20);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_141027bfe(param_1);
  return;
}



// FUNCTION 14119d3a0 FUN_14119d3a0 body=248 status=ok
// SIG undefined FUN_14119d3a0(void)

undefined8 * FUN_14119d3a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b603bc0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb1) = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe7) = 1;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x10001003dcccccd;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 14119d498 FUN_14119d498 body=61 status=ok
// SIG undefined FUN_14119d498(void)

void FUN_14119d498(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14119d4d6 FUN_14119d4d6 body=57 status=ok
// SIG undefined FUN_14119d4d6(void)

longlong FUN_14119d4d6(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x40) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 14119d510 FUN_14119d510 body=84 status=ok
// SIG undefined FUN_14119d510(void)

undefined8 FUN_14119d510(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_140773fe2();
  if (plVar2 != (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x360);
    }
                    /* WARNING: Could not recover jumptable at 0x00014119d553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2,uVar3,*(code **)(*plVar2 + 0x2d0));
    return uVar3;
  }
  return 0;
}



// FUNCTION 14119d564 FUN_14119d564 body=139 status=ok
// SIG undefined FUN_14119d564(void)

undefined4 FUN_14119d564(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar1 = 0;
    if ((*(int *)(param_1 + 0x54) != 2) || (*(char *)(param_1 + 0x340) != '\x01'))
    goto LAB_14119d5a9;
    FUN_141551f14(param_1 + 0x1d0,local_28);
  }
  else {
    FUN_14119d664(*(longlong *)(param_1 + 0x60),local_28);
  }
  uVar1 = FUN_14119d5f0(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_14119d5a9:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119d5f0 FUN_14119d5f0 body=115 status=ok
// SIG undefined FUN_14119d5f0(void)

RoomId FUN_14119d5f0(undefined8 param_1)

{
  RoomId RVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  int local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401e7e86(local_48,param_1);
  FUN_14482e566(local_48);
  local_20 = local_30 + local_38;
  local_28 = local_38;
  RVar1 = bifrost::messaging::getRoomID();
  FUN_1401e7e48(local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return RVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119d664 FUN_14119d664 body=201 status=ok
// SIG undefined FUN_14119d664(void)

undefined8 * FUN_14119d664(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      lVar4 = (**(code **)(*local_38 + 0x20))(local_38,param_1[2]);
      if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x100) != (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar4 + 0x100) + 0x38))();
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
        goto LAB_14119d6d3;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14119d6d3:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119d736 FUN_14119d736 body=82 status=ok
// SIG undefined FUN_14119d736(void)

void FUN_14119d736(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(local_18,L"SHIFT",1);
  FUN_1401e3228(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119d789 FUN_14119d789 body=335 status=ok
// SIG undefined FUN_14119d789(void)

void FUN_14119d789(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_14119d88b;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_90 = *param_4;
    *param_4 = 0;
    local_88 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_50 = &LAB_143efd1c8;
    local_48 = &LAB_143efd1ea;
    local_40 = &LAB_143efd1fe;
    local_38 = FUN_143efd228;
    FUN_1401e7e86(local_c0,param_3);
    FUN_14482e566(local_c0);
    local_98 = local_a8 + local_b0;
    local_a0 = local_b0;
    bifrost::messaging::sendMessageToRoom
              (*(undefined8 *)(param_1 + 0x2b8),param_2,&local_a0,&local_90);
    FUN_1401e7e48(local_c0);
  }
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_14119d88b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14119d88b:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119d8d9 FUN_14119d8d9 body=332 status=ok
// SIG undefined FUN_14119d8d9(void)

void FUN_14119d8d9(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_14119d9db;
      (**(code **)(*plVar1 + 0x60))(plVar1,3);
    }
  }
  else {
    local_90 = *param_4;
    *param_4 = 0;
    local_88 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_50 = &LAB_143efd114;
    local_48 = &LAB_143efd13a;
    local_40 = &LAB_143efd14e;
    local_38 = FUN_143efd178;
    FUN_1401e7e86(local_c0,param_3);
    FUN_14482e566(local_c0);
    local_98 = local_a8 + local_b0;
    local_a0 = local_b0;
    bifrost::messaging::sendMessage(*(undefined8 *)(param_1 + 0x2b8),param_2,&local_a0,&local_90);
    FUN_1401e7e48(local_c0);
  }
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_14119d9db;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14119d9db:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119da26 FUN_14119da26 body=127 status=ok
// SIG undefined FUN_14119da26(void)

undefined8 * FUN_14119da26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14affe560;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14119daa6 FUN_14119daa6 body=2233 status=ok
// SIG undefined FUN_14119daa6(void)

void FUN_14119daa6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14119db91;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14119db91:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14119dc5e;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14119dc5e:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_14119dd2b;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14119dd2b:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_14119ddf7;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_14119ddf7:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(local_68._4_4_,local_44);
  (**(code **)(*param_1 + 0x40))(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119e360 FUN_14119e360 body=40 status=ok
// SIG undefined FUN_14119e360(void)

void FUN_14119e360(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14119e388(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14119e388 FUN_14119e388 body=613 status=ok
// SIG undefined FUN_14119e388(void)

void FUN_14119e388(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(ulonglong *)(param_1 + 0x5a8) == param_3) ||
     ((*(byte *)(*(ulonglong *)(param_1 + 0x5a8) + 0x65) & 2) != 0)) goto LAB_14119e3fd;
  local_40 = param_3;
  if ((param_3 == 0) || (DAT_14c950c29 == 0)) {
    if (param_3 != 0) goto LAB_14119e3d1;
    local_38 = 0;
  }
  else {
    FUN_1456cec3c(param_3);
LAB_14119e3d1:
    uVar8 = FUN_1405fa766();
    local_38 = FUN_144718840(param_3,uVar8);
  }
  cVar5 = FUN_143d913d8(param_1,&local_40,param_4);
  if (cVar5 != '\0') {
    if (DAT_14c950c29 == 1 && param_3 != 0) {
      FUN_1456cec3c(param_3);
    }
    local_30 = param_3;
    if ((~DAT_14c950c29 & 1) == 0 && param_3 != 0) {
      FUN_1456cec3c(param_3);
    }
    plVar2 = (longlong *)(param_1 + 0x160);
    if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    uVar6 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    iVar7 = FUN_1488c0218(plVar2,uVar6 >> 0x10 ^ uVar6,&local_30);
    uVar3 = local_40;
    if (iVar7 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)iVar7 * 0x18 + *plVar2;
    }
    piVar10 = (int *)(lVar9 + 8);
    if (lVar9 == 0) {
      piVar10 = (int *)0x0;
    }
    *piVar10 = *piVar10 + -1;
    if (*piVar10 == 0) {
      if (local_40 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(local_40);
      }
      local_30 = uVar3;
      if ((uVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(uVar3);
      }
      FUN_1457c10f0(plVar2,&local_30);
      plVar2 = *(longlong **)(param_1 + 0x5e0);
      if (plVar2 != (longlong *)0x0) {
        iVar7 = (int)plVar2[1];
        do {
          if (iVar7 == 0) goto LAB_14119e53c;
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar11 = iVar7 == iVar4;
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar11);
        if (*(longlong *)(param_1 + 0x5d8) != 0) {
          FUN_1405fac16(*(longlong *)(param_1 + 0x5d8),param_1 + 0x598);
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar10 = (int *)((longlong)plVar2 + 0xc);
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_14119e53c:
      uVar3 = local_40;
      if ((local_40 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_40);
      }
      uVar8 = local_38;
      local_30 = uVar3;
      if ((uVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(uVar3);
      }
      local_28 = uVar8;
      FUN_1488c0514(param_1 + 0x38);
    }
  }
LAB_14119e3fd:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119e5ee FUN_14119e5ee body=227 status=ok
// SIG undefined FUN_14119e5ee(void)

void FUN_14119e5ee(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (param_2 != '\0') {
        FUN_14119f9c2(param_1);
      }
      lVar3 = FUN_14011c349();
      iVar1 = *(int *)(lVar3 + 0x40);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x38);
        lVar5 = 0;
        do {
          local_48 = *(undefined8 *)(lVar3 + lVar5);
          lVar4 = FUN_140255092(param_1,&local_48);
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0x146) != param_2)) {
            FUN_14119e6d2(lVar4,lVar2 + 0xe18);
          }
          lVar5 = lVar5 + 0x18;
        } while ((longlong)iVar1 * 0x18 != lVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119e6d2 FUN_14119e6d2 body=249 status=ok
// SIG undefined FUN_14119e6d2(void)

void FUN_14119e6d2(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if ((ulonglong)uVar1 != 0) {
    if (0 < (int)uVar1) {
      uVar6 = (ulonglong)uVar1;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
        lVar5 = (uVar6 - 1) * 0x150;
        iVar2 = *(int *)(lVar4 + 0x108 + lVar5);
        if ((iVar2 != -1) && (lVar4 = lVar4 + lVar5, *(longlong *)(lVar4 + 0x18) != 0)) {
          if ((longlong)*(int *)(lVar4 + 0x30) != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x28) + lVar5) == 0) goto LAB_14119e73e;
              lVar5 = lVar5 + 8;
            } while ((longlong)*(int *)(lVar4 + 0x30) * 8 != lVar5);
          }
          local_34 = iVar2;
          FUN_14119e7cc(param_1,&local_34,param_2);
        }
LAB_14119e73e:
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar3);
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined1 *)(param_1 + 0x145) = *(undefined1 *)(param_1 + 0x144);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119e7cc FUN_14119e7cc body=863 status=ok
// SIG undefined FUN_14119e7cc(void)

ulonglong FUN_14119e7cc(longlong param_1,int *param_2,longlong *param_3,uint param_4)

{
  ulonglong uVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_178 [40];
  int local_150;
  int local_14c;
  undefined1 local_148 [8];
  undefined1 local_140 [216];
  undefined8 *local_68;
  int local_50;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (0 < lVar10) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    iVar11 = 1;
    lVar9 = 0;
    do {
      if (*(int *)(lVar4 + 0x108 + lVar9) == *param_2) {
        if (param_3 != (longlong *)0x0) {
          uVar7 = *(uint *)(lVar4 + 0xf8 + lVar9);
          uVar12 = 0;
          if (param_4 <= uVar7) {
            local_150 = iVar11 + -1;
            FUN_140e30dbe(local_148,lVar4 + lVar9 + 0x10);
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
            uVar1 = lVar10 + lVar9;
            if (param_4 != 0) {
              uVar7 = param_4;
            }
            uVar2 = *(uint *)(lVar10 + 0xf8 + lVar9);
            iVar5 = uVar2 - uVar7;
            if (uVar2 < uVar7) {
              iVar5 = 0;
            }
            *(int *)(lVar10 + 0xf8 + lVar9) = iVar5;
            if (uVar2 < uVar7 || uVar2 - uVar7 == 0) {
              iVar5 = *(int *)(param_1 + 0x94);
              iVar3 = *(int *)(param_1 + 0x9c);
              if ((*(char *)(param_1 + 0x147) != '\x01') ||
                 (iVar6 = iVar3, *(char *)(lVar10 + 0x10d + lVar9) == -1)) {
                lVar4 = *(longlong *)(lVar10 + 0x18 + lVar9);
                if (lVar4 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (uint)*(byte *)(lVar4 + 0x239);
                }
                iVar6 = iVar3 - uVar7;
                *(int *)(param_1 + 0x9c) = iVar6;
              }
              if (iVar6 < 0) {
                FUN_141069c5a(param_1);
              }
              iVar6 = local_150;
              if ((iVar3 <= iVar5 + 1) || (local_150 < *(int *)(param_1 + 0x94))) {
                lVar4 = lVar10 + lVar9;
                *(undefined4 *)(lVar4 + 0x10) = 0;
                FUN_140b96410(lVar10 + lVar9 + 0x18);
                *(undefined8 *)(lVar4 + 0xf8) = 0;
                *(undefined8 *)(lVar4 + 0x100) = 0;
                *(undefined4 *)(lVar4 + 0x108) = 0xffffffff;
                *(undefined2 *)(lVar4 + 0x10c) = 0xff00;
                *(undefined4 *)(lVar4 + 0x138) = 1;
                FUN_140705884(*(undefined8 *)(param_1 + 0xa0),uVar1);
                iVar11 = *(int *)(param_1 + 0x140);
                uVar12 = uVar1;
                goto joined_r0x00014119e9c5;
              }
              uVar12 = *(ulonglong *)(param_1 + 0xa0);
              lVar10 = *(longlong *)(uVar12 + 0x118);
              _Dst = (void *)(lVar10 + lVar9);
              FUN_14106822e(_Dst,1);
              iVar5 = *(int *)(uVar12 + 0x120);
              if (iVar5 - iVar11 != 0) {
                memmove(_Dst,(void *)(lVar10 + lVar9 + 0x150),(longlong)(iVar5 - iVar11) * 0x150);
                iVar5 = *(int *)(uVar12 + 0x120);
              }
              *(int *)(uVar12 + 0x120) = iVar5 + -1;
              FUN_14119f28e(param_1,1);
              if (*(longlong *)(param_1 + 0xa0) != 0) goto LAB_14119eaf8;
            }
            else {
              FUN_140705884(*(undefined8 *)(param_1 + 0xa0),uVar1);
              iVar11 = *(int *)(param_1 + 0x140);
              iVar6 = local_150;
joined_r0x00014119e9c5:
              if ((((iVar11 != 0) && (uVar7 = *(uint *)(param_1 + 0x13c), -1 < (int)uVar7)) &&
                  ((int)uVar7 < DAT_14c9647dc)) &&
                 (((plVar8 = (longlong *)
                             ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                   plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar11)) &&
                  (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
                   ((longlong *)*plVar8 != (longlong *)0x0)))))) {
                (**(code **)(*(longlong *)*plVar8 + 0x578))();
              }
              lVar10 = *(longlong *)(param_1 + 0xa0);
              if (lVar10 != 0) {
                if (iVar6 < *(int *)(lVar10 + 0x120)) {
                  FUN_141069ce4(param_1,lVar9 + *(longlong *)(lVar10 + 0x118));
                }
                else {
LAB_14119eaf8:
                  if (local_50 != -1) {
                    local_14c = local_50;
                    FUN_141069e76(param_1 + 0x30,&local_14c,local_4b);
                  }
                }
                (**(code **)(*param_3 + 0x78))(param_3,local_148,param_1);
                FUN_1413590b2(param_3 + 1,param_1);
              }
            }
            if (local_68 != (undefined8 *)0x0) {
              (**(code **)*local_68)(local_68,1);
            }
            FUN_140368b56(local_140);
            uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
          }
          goto LAB_14119e8cc;
        }
        break;
      }
      lVar9 = lVar9 + 0x150;
      iVar11 = iVar11 + 1;
    } while (lVar10 * 0x150 - lVar9 != 0);
  }
  uVar12 = 0;
LAB_14119e8cc:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119eb2c FUN_14119eb2c body=1864 status=ok
// SIG undefined FUN_14119eb2c(void)

void FUN_14119eb2c(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong local_100;
  char local_f8;
  byte local_e4;
  char local_e3;
  byte local_e2;
  char local_e1;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  uint *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0xce8 + (ulonglong)param_2) != '\0') goto LAB_14119efd5;
  *(undefined1 *)(param_1 + ((ulonglong)param_2 | 0xce8)) = 1;
  plVar20 = *(longlong **)(param_1 + 0x168);
  if (plVar20 == (longlong *)0x0) {
LAB_14119f00b:
    plVar20 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(plVar20[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_14119f00b;
  }
  lVar7 = *(longlong *)(param_1 + 0x168);
  local_a8 = lVar7;
  if ((lVar7 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar7 != 0) goto LAB_14119ebdc;
    local_a0 = 0;
  }
  else {
    FUN_1456cec3c(lVar7);
LAB_14119ebdc:
    uVar8 = FUN_14119f41e();
    local_a0 = FUN_144718840(lVar7,uVar8);
  }
  lVar7 = FUN_14011c349();
  if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
    local_e3 = *(char *)(param_1 + 0x178);
    plVar23 = *(longlong **)(lVar7 + 0x38);
    local_b0 = plVar23 + (longlong)*(int *)(lVar7 + 0x40) * 3;
    local_e2 = param_2 ^ 1;
    local_e4 = param_2;
    local_e0 = lVar7;
    local_d8 = plVar20;
    local_d0 = param_1;
    do {
      lVar22 = plVar23[1];
      if (lVar22 == 0) {
        uVar8 = FUN_145d85ea2();
        lVar22 = FUN_14477b664(uVar8);
        plVar23[1] = lVar22;
      }
      lVar19 = plVar23[2];
      if (lVar19 == 0) {
        if ((lVar22 != 0) && (*plVar23 != 0)) {
          plVar4 = *(longlong **)(lVar22 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar13 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar13 == '\0')) {
            plVar23[2] = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar19 = FUN_144aff482(uVar8,plVar23);
            plVar23[2] = lVar19;
            if (lVar19 != 0) goto LAB_14119ec5e;
          }
        }
      }
      else {
LAB_14119ec5e:
        if (*(byte *)(lVar19 + 0x78) == param_2) {
          lVar22 = *(longlong *)(lVar7 + 0x68);
          if (lVar22 == 0) {
            uVar8 = FUN_145d85ea2();
            lVar22 = FUN_14477b664(uVar8);
            *(longlong *)(lVar7 + 0x68) = lVar22;
          }
          lVar10 = *(longlong *)(lVar7 + 0x70);
          if (((lVar10 == 0) &&
              (lVar10 = 0, param_1 = local_d0, lVar7 = local_e0, plVar20 = local_d8,
              param_2 = local_e4, lVar22 != 0)) && (*(longlong *)(local_e0 + 0x60) != 0)) {
            plVar20 = *(longlong **)(lVar22 + 0xb8);
            if ((plVar20 == (longlong *)0x0) ||
               (cVar13 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar13 == '\0')) {
              lVar10 = 0;
            }
            else {
              lVar7 = local_e0 + 0x60;
              uVar8 = (**(code **)(*plVar20 + 0x110))(plVar20);
              lVar10 = FUN_144aff482(uVar8,lVar7);
            }
            *(longlong *)(local_e0 + 0x70) = lVar10;
            param_1 = local_d0;
            lVar7 = local_e0;
            plVar20 = local_d8;
            param_2 = local_e4;
          }
          cVar13 = lVar19 != lVar10 && local_e3 == '\x03';
          if ((plVar20 != (longlong *)0x0) && (lVar19 == lVar10)) {
            cVar13 = (**(code **)(*plVar20 + 0x6c8))(plVar20);
          }
          local_e1 = cVar13;
          puVar21 = *(undefined4 **)(lVar19 + 8);
          if (puVar21 == (undefined4 *)0x0) {
            puVar21 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar22 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar22);
            DAT_14c947fe0 = lVar22;
          }
          FUN_140045924(DAT_14c947fe0,local_88,puVar21,1);
          local_c8 = FUN_140255092(param_1,local_88);
          if (local_c8 != 0) {
            local_98 = 0;
            uStack_90 = 0;
            iVar14 = *(int *)(lVar19 + 0x30) - *(int *)(lVar19 + 0x5c);
            if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar14);
            }
            if (iVar14 != 0) {
              FUN_14119f652(&local_98);
            }
            uVar6 = *(uint *)(lVar19 + 0x50);
            if (uVar6 == 0) {
              uVar17 = 1;
              uVar16 = 0;
              uVar5 = 0;
              iVar14 = 0;
            }
            else {
              puVar9 = *(uint **)(lVar19 + 0x48);
              if (*(uint **)(lVar19 + 0x48) == (uint *)0x0) {
                puVar9 = (uint *)(lVar19 + 0x38);
              }
              uVar5 = *puVar9;
              if (uVar5 == 0) {
                iVar14 = uVar6 + 0x1e;
                if (-1 < (int)(uVar6 - 1)) {
                  iVar14 = uVar6 - 1;
                }
                uVar16 = 0;
                uVar17 = (ulonglong)(uint)(iVar14 >> 5);
                if (iVar14 >> 5 < 1) {
                  uVar17 = uVar16;
                }
                iVar14 = 0;
                do {
                  if (uVar17 == uVar16) goto LAB_14119eea4;
                  iVar14 = iVar14 + 0x20;
                  uVar5 = puVar9[uVar16 + 1];
                  uVar16 = uVar16 + 1;
                } while (uVar5 == 0);
              }
              else {
                uVar16 = 0;
                iVar14 = 0;
              }
              uVar17 = (ulonglong)(-uVar5 & uVar5);
              uVar1 = uVar17 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              uVar5 = (iVar14 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              if ((int)uVar6 <= (int)uVar5) {
                uVar5 = uVar6;
              }
            }
            if (uVar5 != uVar6) {
              uVar18 = 0xffffffff;
              local_c0 = (ulonglong)uVar6;
              local_b8 = (uint *)(lVar19 + 0x38);
              do {
                uVar1 = uStack_90;
                lVar7 = (longlong)(int)uVar5 * 0x14 + *(longlong *)(lVar19 + 0x28);
                lVar22 = (longlong)(int)uStack_90;
                uVar6 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
                if (uStack_90._4_4_ < uVar6) {
                  FUN_148dc288a(&local_98,uVar1 & 0xffffffff);
                }
                FUN_14119f276(lVar22 * 0xc + local_98,lVar7,*(undefined4 *)(lVar7 + 8));
                uVar18 = uVar18 & ~(uint)uVar17;
                puVar9 = *(uint **)(lVar19 + 0x48);
                if (*(uint **)(lVar19 + 0x48) == (uint *)0x0) {
                  puVar9 = local_b8;
                }
                uVar6 = *(uint *)(lVar19 + 0x50);
                iVar15 = (int)uVar16;
                lVar7 = (longlong)iVar15;
                uVar5 = puVar9[lVar7] & uVar18;
                if (uVar5 == 0) {
                  iVar11 = uVar6 + 0x1e;
                  if (-1 < (int)(uVar6 - 1)) {
                    iVar11 = uVar6 - 1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar14 = iVar14 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar15) {
                    iVar12 = iVar15;
                  }
                  if (iVar15 < iVar11) {
                    lVar22 = 0;
                    do {
                      uVar5 = (puVar9 + lVar7 + 1)[lVar22];
                      if (uVar5 != 0) {
                        uVar16 = (ulonglong)(iVar15 + (int)lVar22 + 1);
                        uVar18 = 0xffffffff;
                        goto LAB_14119ee72;
                      }
                      iVar14 = iVar14 + 0x20;
                      lVar22 = lVar22 + 1;
                    } while (iVar12 - lVar7 != lVar22);
                    uVar18 = 0xffffffff;
                    iVar15 = iVar12;
                  }
                  uVar16 = (ulonglong)(iVar15 + 1);
                  uVar5 = uVar6;
                }
                else {
LAB_14119ee72:
                  uVar17 = (ulonglong)(-uVar5 & uVar5);
                  uVar1 = uVar17 * 2 + 1;
                  lVar7 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  uVar5 = (iVar14 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                  if ((int)uVar6 <= (int)uVar5) {
                    uVar5 = uVar6;
                  }
                }
              } while (uVar5 != (uint)local_c0);
            }
LAB_14119eea4:
            lVar7 = *(longlong *)(lVar19 + 0x88);
            if (lVar7 == 0) {
              uVar8 = FUN_145c6907a();
              lVar7 = FUN_14477b664(uVar8);
              *(longlong *)(lVar19 + 0x88) = lVar7;
            }
            lVar22 = *(longlong *)(lVar19 + 0x90);
            if (lVar22 == 0) {
              if (*(longlong *)(lVar19 + 0x80) == 0) {
                lVar22 = 0;
              }
              else if (lVar7 == 0) {
                lVar22 = 0;
              }
              else {
                plVar20 = *(longlong **)(lVar7 + 0xb8);
                if ((plVar20 == (longlong *)0x0) ||
                   (cVar13 = (**(code **)(*plVar20 + 0x108))(plVar20), cVar13 == '\0')) {
                  lVar22 = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar20 + 0x110))(plVar20);
                  lVar22 = FUN_144aff482(uVar8,(longlong *)(lVar19 + 0x80));
                }
                *(longlong *)(lVar19 + 0x90) = lVar22;
              }
            }
            lVar7 = local_e0;
            cVar13 = local_e1;
            param_2 = local_e4;
            bVar24 = local_e3 == '\x03';
            local_f8 = local_e1;
            local_108 = CONCAT31(local_108._1_3_,*(undefined1 *)(lVar19 + 0x79));
            local_100 = lVar22;
            FUN_14119f328(local_c8,&local_a8,&local_98,local_e2);
            param_1 = local_d0;
            if (bVar24 || cVar13 != '\0') {
              FUN_145829994(local_c8);
              if ((longlong)*(int *)(lVar19 + 0x20) != 0) {
                lVar22 = *(longlong *)(lVar19 + 0x18);
                lVar19 = (longlong)*(int *)(lVar19 + 0x20) << 4;
                do {
                  uVar2 = *(undefined4 *)(lVar22 + 8);
                  uVar3 = *(undefined4 *)(lVar22 + 0xc);
                  FUN_1446dcdd4(local_88,lVar22);
                  local_108 = 1;
                  FUN_14119f7a4(local_c8,local_88,uVar2,uVar3);
                  if (local_70 != 0) {
                    FUN_1400020a8();
                  }
                  lVar22 = lVar22 + 0x10;
                  lVar19 = lVar19 + -0x10;
                  lVar7 = local_e0;
                } while (lVar19 != 0);
              }
            }
            plVar20 = local_d8;
            if (local_98 != 0) {
              FUN_1400020a8();
              plVar20 = local_d8;
            }
          }
        }
      }
      plVar23 = plVar23 + 3;
    } while (plVar23 != local_b0);
  }
  if (param_2 != 0) {
    FUN_14119f9c2(param_1);
  }
LAB_14119efd5:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14119f276 FUN_14119f276 body=14 status=ok
// SIG undefined FUN_14119f276(void)

void FUN_14119f276(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}



// FUNCTION 14119f284 FUN_14119f284 body=10 status=ok
// SIG undefined FUN_14119f284(void)

void FUN_14119f284(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_140841e14(param_1,1);
  return;
}



// FUNCTION 14119f28e FUN_14119f28e body=153 status=ok
// SIG undefined FUN_14119f28e(void)

void FUN_14119f28e(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  FUN_1407058ce(lVar2);
  FUN_140705914(lVar2);
  *(undefined8 *)(lVar2 + 0x104) = 0xffffffffffffffff;
  if ((((param_2 != '\0') && (*(int *)(param_1 + 0x140) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x13c), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x140))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x00014119f317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*plVar3 + 0x578))();
      return;
    }
  }
  return;
}



// FUNCTION 14119f328 FUN_14119f328 body=156 status=ok
// SIG undefined FUN_14119f328(void)

void FUN_14119f328(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0xa8) = lVar1;
  *(longlong *)(param_1 + 0xb0) = param_2[1];
  FUN_14119f3c4(param_1 + 0xc0,param_3);
  *(undefined1 *)(param_1 + 0x146) = param_4;
  *(undefined1 *)(param_1 + 0x147) = param_5;
  *(undefined8 *)(param_1 + 0x150) = param_6;
  *(undefined1 *)(param_1 + 0x148) = param_7;
  return;
}



// FUNCTION 14119f3c4 FUN_14119f3c4 body=89 status=ok
// SIG undefined FUN_14119f3c4(void)

undefined8 * FUN_14119f3c4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14119f504(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14119f41e FUN_14119f41e body=228 status=ok
// SIG undefined FUN_14119f41e(void)

longlong FUN_14119f41e(void)

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
  if (DAT_14cb5fda8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486c0e89;
    local_40 = FUN_1464e9fac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxItemContainerOwner",&DAT_14cb5fda8,&DAT_1486c0e88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5fda8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14119f504 FUN_14119f504 body=334 status=ok
// SIG undefined FUN_14119f504(void)

void FUN_14119f504(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0xc;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14119f576;
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
LAB_14119f576:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14119f652 FUN_14119f652 body=337 status=ok
// SIG undefined FUN_14119f652(void)

void FUN_14119f652(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14119f6bf;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14119f6bf:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 14119f7a4 FUN_14119f7a4 body=274 status=ok
// SIG undefined FUN_14119f7a4(void)

void FUN_14119f7a4(longlong param_1,undefined8 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    iVar1 = FUN_145829a38(param_1 + 0x90);
    FUN_14119f284(param_1 + 0x90,iVar1 + param_3);
    if (*(char *)(param_1 + 0x148) == '\x01') {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
      FUN_145829a3c(*(longlong *)(param_1 + 0xa0) + 0x118,iVar1 + param_3,1);
      uVar3 = 0;
      uVar4 = param_3 - param_4;
      if (param_3 < param_4) {
        uVar4 = 0;
      }
      do {
        lVar2 = (longlong)(int)(iVar1 + uVar3) * 0x150;
        FUN_1447715ec(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) + lVar2 + 0x110,param_2);
        *(bool *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) + 0x13c + lVar2) =
             uVar4 <= uVar3;
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) + 0x138 + lVar2) =
             param_5;
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
      FUN_14119f28e(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14119f8b6 FUN_14119f8b6 body=41 status=ok
// SIG undefined FUN_14119f8b6(void)

void FUN_14119f8b6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14119f8e0(param_1);
    param_1 = param_1 + 0x150;
  }
  return;
}



// FUNCTION 14119f8e0 FUN_14119f8e0 body=226 status=ok
// SIG undefined FUN_14119f8e0(void)

void FUN_14119f8e0(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf;
  *(undefined2 *)(param_1 + 0x1b) = 1;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0xff00;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 1;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0xff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  return;
}



// FUNCTION 14119f9c2 FUN_14119f9c2 body=341 status=ok
// SIG undefined FUN_14119f9c2(void)

void FUN_14119f9c2(longlong param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  lVar8 = FUN_14011c349();
  *(undefined4 *)(param_1 + 0xd08) = 0;
  lVar10 = *(longlong *)(lVar8 + 0x28);
  if (lVar10 == 0) {
    uVar9 = FUN_145d8612a();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(lVar8 + 0x28) = lVar10;
  }
  lVar11 = *(longlong *)(lVar8 + 0x30);
  if (lVar11 == 0) {
    if (lVar10 == 0) {
      return;
    }
    if (*(longlong *)(lVar8 + 0x20) == 0) {
      return;
    }
    plVar4 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(lVar8 + 0x30) = 0;
      return;
    }
    uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x20));
    *(longlong *)(lVar8 + 0x30) = lVar11;
    if (lVar11 == 0) {
      return;
    }
  }
  lVar10 = param_1 + 0xcf0;
  iVar6 = FUN_14119fb18(lVar11);
  if (-1 < iVar6) {
    uVar7 = FUN_144a54ea4(lVar10,iVar6);
    FUN_1447c6044(lVar10,uVar7,iVar6,0);
  }
  if ((longlong)*(int *)(lVar11 + 0x20) != 0) {
    lVar8 = *(longlong *)(lVar11 + 0x18);
    lVar11 = (longlong)*(int *)(lVar11 + 0x20) * 0x38 + lVar8;
    iVar6 = 0;
    do {
      iVar1 = *(int *)(lVar8 + 8) + iVar6;
      if (0 < *(int *)(lVar8 + 8)) {
        iVar3 = *(int *)(lVar8 + 0xc);
        do {
          if (iVar1 - iVar3 <= iVar6) {
            lVar13 = *(longlong *)(param_1 + 0xd00);
            if (*(longlong *)(param_1 + 0xd00) == 0) {
              lVar13 = lVar10;
            }
            iVar12 = iVar6 + 0x1f;
            if (-1 < iVar6) {
              iVar12 = iVar6;
            }
            puVar2 = (uint *)(lVar13 + (longlong)(iVar12 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      lVar8 = lVar8 + 0x38;
      iVar6 = iVar1;
    } while (lVar8 != lVar11);
  }
  return;
}



// FUNCTION 14119fb18 FUN_14119fb18 body=41 status=ok
// SIG undefined FUN_14119fb18(void)

int FUN_14119fb18(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar2);
      lVar2 = lVar2 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x20) * 0x38 - lVar2 != 0);
  }
  return iVar1;
}



// FUNCTION 14119fb42 FUN_14119fb42 body=192 status=ok
// SIG undefined FUN_14119fb42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14119fb42(longlong param_1,undefined8 *param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar9._0_8_ = DAT_14cb262c8;
  auVar9._12_4_ = 0x45300000;
  dVar8 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
          (auVar9._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  iVar3 = *(int *)(param_1 + 0x58);
  lVar7 = (longlong)iVar3;
  *(uint *)(param_1 + 0x58) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
    FUN_14119fc02((longlong *)(param_1 + 0x50),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  *(double *)(lVar4 + lVar7 * 0x18) = dVar8 + param_3;
  *(undefined8 *)(lVar4 + 8 + lVar7 * 0x18) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 0x10 + lVar7 * 0x18) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
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
                    /* WARNING: Could not recover jumptable at 0x00014119fbfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14119fc02 FUN_14119fc02 body=373 status=ok
// SIG undefined FUN_14119fc02(void)

void FUN_14119fc02(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14119fc8b;
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
LAB_14119fc8b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14119fd78 FUN_14119fd78 body=2823 status=ok
// SIG undefined FUN_14119fd78(void)

ulonglong FUN_14119fd78(longlong param_1,byte *param_2,longlong *param_3,longlong *param_4,
                       undefined8 param_5)

{
  int *piVar1;
  float *pfVar2;
  byte *pbVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  char *pcVar18;
  longlong lVar19;
  byte bVar20;
  undefined7 uVar22;
  ulonglong uVar21;
  longlong *plVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  longlong unaff_R14;
  longlong *plVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  float local_e0;
  undefined8 local_d8;
  longlong *local_c8;
  byte *local_c0;
  longlong *local_b8;
  int local_ac;
  byte *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 != (longlong *)0x0) {
    unaff_R14 = (**(code **)(*param_3 + 8))(param_3);
    lVar15 = FUN_1411a0880();
    if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(unaff_R14 + 0x38))) &&
       (local_c0 = param_2,
       *(longlong *)(*(longlong *)(unaff_R14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
       lVar15 + 0x30)) {
      plVar23 = param_4 + 9;
      FUN_1411a0b3a(&local_88,plVar23);
      plVar17 = (longlong *)0x0;
      if ((char)local_80 != '\0') {
        plVar17 = local_88;
      }
      FUN_1411a08ba(&local_88,plVar23);
      plVar26 = (longlong *)0x0;
      if ((char)local_80 != '\0') {
        plVar26 = local_88;
      }
      FUN_1411a0942(&local_88,plVar23);
      if (local_88._4_1_ == '\0') {
        fVar31 = 0.0;
      }
      else {
        fVar31 = (float)local_88;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x70) + 0xa0) != '\0') {
        fVar31 = fVar31 * *(float *)(param_4 + 0xc);
      }
      uVar22 = (undefined7)((ulonglong)plVar23 >> 8);
      bVar20 = 1;
      local_c8 = plVar23;
      bVar12 = 0;
      if ((plVar26 == (longlong *)0x0) || ((fVar31 == 0.0 && (!NAN(fVar31))))) goto LAB_14119ff0b;
      lVar15 = param_3[6];
      local_b8 = param_4;
      if (lVar15 == 0) {
        uVar16 = FUN_145c6ef2e();
        lVar15 = FUN_14477b664(uVar16);
        param_3[6] = lVar15;
      }
      lVar27 = param_3[7];
      if (lVar27 == 0) {
        bVar12 = 0;
        if ((lVar15 == 0) || (bVar12 = 0, param_3[5] == 0)) goto LAB_14119ff0b;
        plVar23 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar23 == (longlong *)0x0) ||
           (cVar11 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar11 == '\0')) {
          param_3[7] = 0;
        }
        else {
          uVar16 = (**(code **)(*plVar23 + 0x110))(plVar23);
          lVar27 = FUN_144aff482(uVar16,param_3 + 5);
          param_3[7] = lVar27;
          if (lVar27 != 0) goto LAB_14119fec0;
        }
LAB_14119ff08:
        bVar12 = 0;
        goto LAB_14119ff0b;
      }
LAB_14119fec0:
      plVar23 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x88);
      if (plVar23 != (longlong *)0x0) {
        local_d8 = param_5;
        local_e8 = param_3;
        local_e0 = fVar31;
        cVar11 = (**(code **)(*plVar23 + 0x10))(plVar23,param_1,local_c0,local_b8);
        if (cVar11 == '\0') goto LAB_14119ff08;
      }
      local_a0 = plVar26;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(plVar26);
      }
      local_98 = plVar17;
      if ((plVar17 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(plVar17);
      }
      FUN_1411a1032(&local_88,&local_a0);
      if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
        plVar23 = *(longlong **)(param_1 + 0xa0);
        lVar15 = (longlong)*(int *)(param_1 + 0xa8) * 0x48;
        do {
          cVar11 = FUN_1410b0572((longlong)plVar23 + 0x14,&local_80);
          if (((cVar11 != '\0') &&
              (cVar11 = FUN_140383372((longlong)plVar23 + 0xc,&local_88), cVar11 != '\0')) &&
             (*plVar23 == lVar27)) {
            plVar17 = local_c8;
            pbVar24 = local_c0;
            if (plVar23 != (longlong *)0x0) goto LAB_1411a019f;
            break;
          }
          plVar23 = plVar23 + 9;
          lVar15 = lVar15 + -0x48;
        } while (lVar15 != 0);
      }
      plVar17 = local_c8;
      iVar5 = *(int *)(param_1 + 0xb0) + 1;
      do {
        iVar13 = iVar5;
        iVar5 = 1;
      } while (iVar13 == 0);
      *(int *)(param_1 + 0xb0) = iVar13;
      iVar5 = *(int *)(param_1 + 0xa8);
      lVar15 = (longlong)iVar5;
      *(uint *)(param_1 + 0xa8) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar5 + 1U) {
        FUN_1411a11e4(param_1 + 0xa0,iVar5);
      }
      lVar19 = *(longlong *)(param_1 + 0xa0);
      plVar23 = (longlong *)(lVar19 + lVar15 * 0x48);
      *plVar23 = lVar27;
      *(int *)(plVar23 + 1) = iVar13;
      FUN_1411a1032(lVar19 + lVar15 * 0x48 + 0xc,&local_a0);
      lVar19 = lVar19 + lVar15 * 0x48;
      *(undefined1 *)(lVar19 + 0x44) = 0;
      *(undefined8 *)(lVar19 + 0x1c) = 0;
      *(undefined8 *)(lVar19 + 0x24) = 0;
      *(undefined8 *)(lVar19 + 0x2c) = 0;
      *(undefined8 *)(lVar19 + 0x34) = 0;
      *(undefined4 *)(lVar19 + 0x3c) = 0;
      FUN_1405fab15(&local_88);
      (**(code **)(*local_88 + 8))(local_88,param_1 + 200);
      plVar26 = local_80;
      if ((undefined8 *)(lVar19 + 0x20) != &local_88) {
        plVar23[4] = (longlong)local_88;
        local_88 = (longlong *)0x0;
        plVar8 = (longlong *)plVar23[5];
        if (local_80 != plVar8) {
          local_80 = (longlong *)0x0;
          plVar23[5] = (longlong)plVar26;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar26 = plVar8 + 1;
            *(int *)plVar26 = (int)*plVar26 + -1;
            UNLOCK();
            if ((int)*plVar26 == 0) {
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
      }
      plVar26 = local_80;
      pbVar24 = local_c0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_80 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar26 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
          }
        }
      }
LAB_1411a019f:
      FUN_1411a0d08(&local_88,plVar17);
      local_98 = (longlong *)0x0;
      plStack_90 = (longlong *)0x0;
      plVar26 = (longlong *)0x0;
      plVar17 = local_80;
      local_a0 = local_88;
      if (local_70 == '\0') {
        plVar17 = plVar26;
        local_a0 = plVar26;
      }
      uVar16 = FUN_14477b664(plVar17);
      local_98 = (longlong *)FUN_14477b664(uVar16);
      if (local_70 != '\0') {
        plVar26 = local_78;
      }
      plStack_90 = plVar26;
      if (local_98 == (longlong *)0x0) {
        uVar16 = FUN_140b473a6();
        local_98 = (longlong *)FUN_14477b664(uVar16);
      }
      if (plVar26 == (longlong *)0x0) {
        plStack_90 = (longlong *)0x0;
        if (((local_98 != (longlong *)0x0) && (local_a0 != (longlong *)0x0)) &&
           ((plVar17 = *(longlong **)((longlong)local_98 + 0xb8), plVar17 != (longlong *)0x0 &&
            (cVar11 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar11 != '\0')))) {
          uVar16 = (**(code **)(*plVar17 + 0x110))(plVar17);
          plStack_90 = (longlong *)FUN_144aff482(uVar16,&local_a0);
          if (plStack_90 != (longlong *)0x0) goto LAB_1411a0283;
        }
      }
      else {
LAB_1411a0283:
        lVar15 = plVar23[4];
        if (lVar15 + 0x18 != lVar27 + 0x38) {
          lVar19 = lVar27 + 0x38;
          if (*(longlong *)(lVar27 + 0x68) != 0) {
            lVar19 = *(longlong *)(lVar27 + 0x68);
          }
          FUN_1400709d4(lVar15 + 0x18,lVar19,*(undefined4 *)(lVar27 + 0x70),
                        *(undefined4 *)(lVar15 + 0x54));
          lVar15 = plVar23[4];
        }
        if (local_98 == (longlong *)0x0) {
          uVar16 = FUN_140b473a6();
          local_98 = (longlong *)FUN_14477b664(uVar16);
        }
        if (plStack_90 == (longlong *)0x0) {
          if ((local_98 != (longlong *)0x0) && (local_a0 != (longlong *)0x0)) {
            plVar17 = *(longlong **)((longlong)local_98 + 0xb8);
            if ((plVar17 == (longlong *)0x0) ||
               (cVar11 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar11 == '\0')) {
              plStack_90 = (longlong *)0x0;
            }
            else {
              uVar16 = (**(code **)(*plVar17 + 0x110))(plVar17);
              plStack_90 = (longlong *)FUN_144aff482(uVar16,&local_a0);
              if (plStack_90 != (longlong *)0x0) goto LAB_1411a0342;
            }
          }
          local_88 = (longlong *)0x0;
        }
        else {
LAB_1411a0342:
          puVar25 = &DAT_14c9485f0;
          if ((undefined4 *)plStack_90[1] != (undefined4 *)0x0) {
            puVar25 = (undefined4 *)plStack_90[1];
          }
          if (DAT_14c947fe0 == 0) {
            lVar27 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar27);
            DAT_14c947fe0 = lVar27;
          }
          FUN_140045924(DAT_14c947fe0,&local_88,puVar25,1);
        }
        local_80 = (longlong *)CONCAT44(local_80._4_4_,0x3003);
        local_78 = (longlong *)0x0;
        FUN_140a6f4d0(lVar15 + 0x18);
      }
      pfVar2 = (float *)(pbVar24 + 0xc);
      uVar14 = *(uint *)(param_1 + 0x98);
      uVar21 = 0;
      if ((0 < (int)uVar14 & pbVar24[0x10]) == 1) {
        pcVar18 = (char *)(*(longlong *)(param_1 + 0x90) + (ulonglong)uVar14 * 0x48 + -0x34);
        uVar28 = (ulonglong)uVar14;
        do {
          if (*pcVar18 == '\0') {
LAB_1411a0414:
            uVar21 = (ulonglong)((int)uVar28 - 1);
            break;
          }
          fVar4 = *(float *)(pcVar18 + -4);
          fVar30 = fVar4 - (*(float *)(*(longlong *)(param_1 + 0x38) + 0x14c) -
                           *(float *)(pcVar18 + -8));
          if (fVar4 <= fVar30) {
            fVar30 = fVar4;
          }
          if (fVar30 <= 0.0) {
            fVar30 = 0.0;
          }
          if (*pfVar2 < fVar30) goto LAB_1411a0414;
          pcVar18 = pcVar18 + -0x48;
          bVar9 = 1 < uVar28;
          uVar28 = uVar28 - 1;
        } while (bVar9);
      }
      plVar17 = (longlong *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x98) = uVar14 + 1;
      if (*(uint *)(param_1 + 0x9c) == uVar14) {
        FUN_1411a1356(plVar17,uVar14);
      }
      lVar27 = (longlong)(int)uVar21 * 0x48;
      memmove((void *)(*plVar17 + lVar27 + 0x48),(void *)(*plVar17 + lVar27),
              (ulonglong)(uVar14 - (int)uVar21) * 0x48);
      lVar15 = *plVar17;
      pbVar3 = (byte *)(lVar15 + lVar27);
      FUN_1411a0caf(pbVar3);
      *(int *)(lVar15 + lVar27) = (int)local_b8[4];
      *(byte *)(lVar15 + 0x1c + lVar27) = *(byte *)(lVar15 + 0x1c + lVar27) & 0xfe | *pbVar24;
      if (pbVar3 != pbVar24) {
        if (*(int *)(pbVar24 + 4) == -1) {
          if (*(int *)(pbVar3 + 4) == -1) goto LAB_1411a04b5;
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(undefined8 *)(pbVar24 + 4);
        }
        *(undefined8 *)(pbVar3 + 4) = uVar16;
      }
LAB_1411a04b5:
      if (pfVar2 != (float *)(pbVar3 + 0x10)) {
        if (pbVar24[0x10] == 1) {
          *(float *)(pbVar3 + 0x10) = *pfVar2;
          bVar12 = 1;
        }
        else {
          if (pbVar3[0x14] != 1) goto LAB_1411a04d6;
          bVar12 = 0;
        }
        pbVar3[0x14] = bVar12;
      }
LAB_1411a04d6:
      *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(*local_b8 + 0x14c);
      iVar5 = *(int *)(param_1 + 0x8c);
      *(int *)(param_1 + 0x8c) = iVar5 + 1;
      *(int *)(pbVar3 + 0x18) = iVar5;
      if ((pbVar3[0x1c] & 1) != 0) {
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
      }
      if (*(int *)(pbVar3 + 4) != -1) {
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      }
      if (pbVar3[0x14] == 1) {
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      }
      *(float *)(pbVar3 + 0x24) = fVar31;
      *(int *)(pbVar3 + 0x20) = (int)plVar23[1];
      FUN_1411a0f6a(&local_88);
      if (local_68 == '\x01') {
        (**(code **)(*(longlong *)(pbVar3 + 0x28) + 0x20))(pbVar3 + 0x28,0);
        *(longlong **)(pbVar3 + 0x30) = local_80;
        FUN_1406022fe(pbVar3 + 0x38);
      }
      uVar14 = *(uint *)((longlong)plVar23 + 0x1c);
      plVar17 = (longlong *)(ulonglong)uVar14;
      *(uint *)((longlong)plVar23 + 0x1c) = uVar14 + 1;
      lVar15 = plVar23[4];
      fVar31 = 0.0;
      if (*(char *)(lVar15 + 0xc) == '\x01') {
        fVar31 = *(float *)(lVar15 + 8);
      }
      *(float *)(lVar15 + 8) = fVar31 + *(float *)(pbVar3 + 0x24);
      *(undefined1 *)(lVar15 + 0xc) = 1;
      if (*(longlong *)(pbVar3 + 0x30) != 0) {
        uVar6 = *(uint *)(pbVar3 + 0x40);
        if ((longlong)(int)uVar6 != 0) {
          pbVar24 = pbVar3 + 0x38;
          lVar27 = *(longlong *)(pbVar3 + 0x38);
          lVar15 = (longlong)(int)uVar6 * 8;
          lVar19 = 0;
          do {
            if (*(longlong *)(lVar27 + lVar19) != 0) {
              local_c0 = (byte *)plVar23[6];
              lVar19 = (longlong)(int)plVar23[7];
              local_c8 = (longlong *)(lVar19 * 5);
              local_b8 = plVar17;
              local_a8 = pbVar24;
              if (lVar19 == 0) goto LAB_1411a0648;
              local_ac = -uVar6;
              pbVar24 = local_c0;
              goto LAB_1411a0727;
            }
            lVar19 = lVar19 + 8;
          } while (lVar15 - lVar19 != 0);
        }
      }
      goto LAB_1411a05dd;
    }
  }
  bVar12 = (byte)unaff_R14;
  bVar20 = 0;
  uVar22 = 0;
  goto LAB_14119ff0b;
LAB_1411a0727:
  do {
    if (*(longlong *)(pbVar24 + 8) == *(longlong *)(pbVar3 + 0x30)) {
      uVar7 = *(uint *)(pbVar24 + 0x18);
      uVar21 = (ulonglong)(int)uVar7;
      uVar10 = uVar6;
      if ((int)uVar7 < (int)uVar6) {
        uVar10 = uVar7;
      }
      if (0 < (int)uVar10) {
        uVar28 = 0;
        do {
          if (*(longlong *)(*(longlong *)(pbVar24 + 0x10) + uVar28 * 8) !=
              *(longlong *)(lVar27 + uVar28 * 8)) goto LAB_1411a0780;
          uVar28 = uVar28 + 1;
        } while (uVar10 != uVar28);
      }
      if ((int)uVar6 < (int)uVar7) {
        uVar21 = (ulonglong)(uVar7 + local_ac);
        lVar29 = 0;
        while (*(longlong *)(*(longlong *)(pbVar24 + 0x10) + lVar15 + lVar29 * 8) == 0) {
          lVar29 = lVar29 + 1;
          if (uVar7 + local_ac == (uint)lVar29) goto LAB_1411a07ab;
        }
      }
      else {
        if ((int)uVar6 <= (int)uVar7) {
LAB_1411a07ab:
          if (pbVar24 != (byte *)0x0) {
            *(int *)(pbVar24 + 0x20) = *(int *)(pbVar24 + 0x20) + 1;
            goto LAB_1411a05dd;
          }
          break;
        }
        lVar29 = 0;
        while (*(longlong *)(lVar27 + uVar21 * 8 + lVar29 * 8) == 0) {
          lVar29 = lVar29 + 1;
          if (uVar6 - uVar7 == (int)lVar29) goto LAB_1411a07ab;
        }
      }
    }
LAB_1411a0780:
    pbVar24 = pbVar24 + 0x28;
  } while (pbVar24 != local_c0 + lVar19 * 0x28);
LAB_1411a0648:
  uVar14 = (int)plVar23[7] + 1;
  *(uint *)(plVar23 + 7) = uVar14;
  if (*(uint *)((longlong)plVar23 + 0x3c) < uVar14) {
    FUN_1411a14cc(plVar23 + 6);
    local_c0 = (byte *)plVar23[6];
  }
  pbVar24 = local_c0 + (longlong)local_c8 * 8;
  *(undefined2 **)pbVar24 = &DAT_14a171d50;
  pbVar24[8] = 0;
  pbVar24[9] = 0;
  pbVar24[10] = 0;
  pbVar24[0xb] = 0;
  pbVar24[0xc] = 0;
  pbVar24[0xd] = 0;
  pbVar24[0xe] = 0;
  pbVar24[0xf] = 0;
  pbVar24[0x10] = 0;
  pbVar24[0x11] = 0;
  pbVar24[0x12] = 0;
  pbVar24[0x13] = 0;
  pbVar24[0x14] = 0;
  pbVar24[0x15] = 0;
  pbVar24[0x16] = 0;
  pbVar24[0x17] = 0;
  pbVar24[0x18] = 0;
  pbVar24[0x19] = 0;
  pbVar24[0x1a] = 0;
  pbVar24[0x1b] = 0;
  pbVar24[0x1c] = 0;
  pbVar24[0x1d] = 0;
  pbVar24[0x1e] = 0;
  pbVar24[0x1f] = 0;
  *(undefined8 *)(pbVar24 + 8) = *(undefined8 *)(pbVar3 + 0x30);
  FUN_1406022fe(pbVar24 + 0x10,local_a8);
  *(undefined ***)pbVar24 = &PTR_FUN_14b0394b0;
  pbVar24[0x20] = 1;
  pbVar24[0x21] = 0;
  pbVar24[0x22] = 0;
  pbVar24[0x23] = 0;
  lVar15 = plVar23[4];
  (**(code **)(*(longlong *)(lVar15 + 0x58) + 0x20))(lVar15 + 0x58,*(undefined8 *)(lVar15 + 0x60));
  uVar14 = (uint)local_b8;
  if ((longlong)(int)plVar23[7] != 0) {
    lVar15 = plVar23[6];
    lVar27 = (longlong)(int)plVar23[7] * 0x28;
    do {
      FUN_1405dc634(plVar23[4] + 0x58,lVar15);
      lVar15 = lVar15 + 0x28;
      lVar27 = lVar27 + -0x28;
    } while (lVar27 != 0);
  }
LAB_1411a05dd:
  *(float *)(param_1 + 0xb4) = *(float *)(pbVar3 + 0x24) + *(float *)(param_1 + 0xb4);
  if (uVar14 == 0) {
    FUN_14092557a(param_1,plVar23,1);
  }
  FUN_145829d56(&local_88);
  uVar22 = (undefined7)(uVar21 >> 8);
  bVar20 = 1;
  bVar12 = 1;
LAB_14119ff0b:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return CONCAT71(uVar22,bVar20 & bVar12) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a0880 FUN_1411a0880 body=57 status=ok
// SIG undefined FUN_1411a0880(void)

void FUN_1411a0880(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb668e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb668e0 =
         FUN_140002ddd(FUN_14651030c,uVar1,L"GbxStatusEffectAspectData_DamageOverTimeItem");
  }
  return;
}



// FUNCTION 1411a08ba FUN_1411a08ba body=135 status=ok
// SIG undefined FUN_1411a08ba(void)

undefined8 * FUN_1411a08ba(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = FUN_14095c602();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  lVar1 = FUN_140528a12(param_2,&local_20);
  if (lVar1 != 0) {
    uVar2 = FUN_14030a32e(lVar1 + 8);
    *param_1 = uVar2;
  }
  *(bool *)(param_1 + 1) = lVar1 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1411a0942 FUN_1411a0942 body=272 status=ok
// SIG undefined FUN_1411a0942(void)

undefined4 * FUN_1411a0942(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = FUN_1411a0a54();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  lVar3 = FUN_140528a12(param_2,&local_60);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x28) == '\x03') {
      uVar5 = *(undefined4 *)(lVar3 + 8);
    }
    else {
      puVar4 = &local_58;
      FUN_1400b56fe(puVar4,(undefined4 *)(lVar3 + 8),3);
      uVar5 = 0;
      if (local_38 != 0) {
        uVar5 = local_58;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar4 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar4);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
    *param_1 = uVar5;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a0a54 FUN_1411a0a54 body=228 status=ok
// SIG undefined FUN_1411a0a54(void)

longlong FUN_1411a0a54(void)

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
  if (DAT_14cb676d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458993da;
    local_38 = &LAB_14873bef9;
    local_40 = &LAB_145beb037;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_DPS",&DAT_14cb676d0,
                  FUN_146516bf0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb676d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a0b3a FUN_1411a0b3a body=372 status=ok
// SIG undefined FUN_1411a0b3a(void)

longlong * FUN_1411a0b3a(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = (code *)FUN_140c70810();
  if ((local_28 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  lVar2 = FUN_140528a12(param_2,&local_28);
  if (lVar2 == 0) {
    uVar1 = 0;
    goto LAB_1411a0bce;
  }
  lVar2 = FUN_14030a32e(lVar2 + 8);
  if (lVar2 == 0) {
LAB_1411a0bf6:
    lVar2 = 0;
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147c45ce0;
      local_50 = &LAB_1463f1ff4;
      local_58 = &DAT_149e063b2;
      local_60 = 0x4000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x428;
      local_40 = &local_28;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) goto LAB_1411a0bf6;
  }
  *param_1 = lVar2;
  uVar1 = 1;
LAB_1411a0bce:
  *(undefined1 *)(param_1 + 1) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a0caf FUN_1411a0caf body=89 status=ok
// SIG undefined FUN_1411a0caf(void)

void FUN_1411a0caf(undefined4 *param_1)

{
  *param_1 = DAT_14cb8c3a0;
  *(undefined8 *)(param_1 + 1) = 0xffffffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1405c5fa2();
  *(undefined **)(param_1 + 0xc) = &DAT_14cb769e8;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined ***)(param_1 + 10) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1411a0d08 FUN_1411a0d08 body=189 status=ok
// SIG undefined FUN_1411a0d08(void)

undefined8 * FUN_1411a0d08(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = FUN_140b473e0();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  FUN_1411a0dc6(param_2,&local_40,&local_48);
  if (local_28 == '\x01') {
    uVar1 = FUN_14477b664(local_38);
    uVar1 = FUN_14477b664(uVar1);
    *param_1 = local_40;
    uVar1 = FUN_14477b664(uVar1);
    uVar1 = FUN_14477b664(uVar1);
    param_1[1] = uVar1;
    param_1[2] = local_30;
  }
  *(bool *)(param_1 + 3) = local_28 == '\x01';
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1411a0dc6 FUN_1411a0dc6 body=133 status=ok
// SIG undefined FUN_1411a0dc6(void)

undefined8 * FUN_1411a0dc6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140528a12(param_1,param_3);
  if (lVar1 != 0) {
    FUN_1411a0e4c(lVar1 + 8,&local_30);
    *param_2 = local_30;
    uVar2 = FUN_14477b664(local_28);
    uVar2 = FUN_14477b664(uVar2);
    param_2[1] = uVar2;
    param_2[2] = local_20;
  }
  *(bool *)(param_2 + 3) = lVar1 != 0;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411a0e4c FUN_1411a0e4c body=285 status=ok
// SIG undefined FUN_1411a0e4c(void)

undefined8 * FUN_1411a0e4c(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 4) == '\x1d') {
    *param_2 = *param_1;
    uVar2 = FUN_14477b664(param_1[1]);
    uVar2 = FUN_14477b664(uVar2);
    param_2[1] = uVar2;
    param_2[2] = param_1[2];
  }
  else {
    FUN_1400b56fe(&local_58,param_1,0x1d);
    bVar6 = local_38 != 0;
    pppuVar3 = (undefined8 ***)&DAT_14c9ab250;
    if (bVar6) {
      pppuVar3 = &local_58;
    }
    *param_2 = *pppuVar3;
    puVar4 = &DAT_14c9ab258;
    if (bVar6) {
      puVar4 = &local_50;
    }
    puVar5 = &DAT_14c9ab260;
    if (bVar6) {
      puVar5 = &local_48;
    }
    uVar2 = FUN_14477b664(*puVar4);
    uVar2 = FUN_14477b664(uVar2);
    param_2[1] = uVar2;
    param_2[2] = *puVar5;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = &local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58;
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a0f6a FUN_1411a0f6a body=199 status=ok
// SIG undefined FUN_1411a0f6a(void)

undefined8 * FUN_1411a0f6a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = FUN_140941f82();
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  FUN_143e479ac(param_2,local_48,&local_50);
  if (local_28 == '\x01') {
    *param_1 = &DAT_14a171d50;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[1] = local_40;
    FUN_1406022fe(param_1 + 2);
    *param_1 = &PTR_FUN_14b0394b0;
    *(undefined1 *)(param_1 + 4) = 1;
    FUN_145829d56(local_48);
  }
  else {
    FUN_145829d56(local_48);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a1032 FUN_1411a1032 body=434 status=ok
// SIG undefined FUN_1411a1032(void)

uint * FUN_1411a1032(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *param_2;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    param_1[0] = 0;
    param_1[1] = 0;
LAB_1411a106e:
    uVar2 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar2;
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
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar4 != 0) goto LAB_1411a106e;
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar4 = param_2[1];
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    if (lVar4 == 0) {
      uVar2 = 0;
      goto LAB_1411a10fe;
    }
  }
  uVar2 = *(uint *)(lVar4 + 0xc);
  param_1[2] = uVar2;
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
LAB_1411a10fe:
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 1411a11e4 FUN_1411a11e4 body=370 status=ok
// SIG undefined FUN_1411a11e4(void)

void FUN_1411a11e4(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411a126d;
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
LAB_1411a126d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1411a1356 FUN_1411a1356 body=373 status=ok
// SIG undefined FUN_1411a1356(void)

void FUN_1411a1356(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411a13df;
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
LAB_1411a13df:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1411a14cc FUN_1411a14cc body=363 status=ok
// SIG undefined FUN_1411a14cc(void)

void FUN_1411a14cc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411a1562;
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
LAB_1411a1562:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1411a1637 FUN_1411a1637 body=125 status=ok
// SIG undefined FUN_1411a1637(void)

void FUN_1411a1637(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = *param_2;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = local_19;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a16b6 FUN_1411a16b6 body=406 status=ok
// SIG undefined FUN_1411a16b6(void)

longlong * FUN_1411a16b6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14582a16c(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1411a184d(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_14582a16c(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147d4b622(param_2,iVar2);
        }
        FUN_1411a184d(param_1,(longlong)iVar2 * 8 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1411a184d FUN_1411a184d body=168 status=ok
// SIG undefined FUN_1411a184d(void)

longlong * FUN_1411a184d(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1411a18f5 FUN_1411a18f5 body=23 status=ok
// SIG undefined FUN_1411a18f5(void)

undefined8 FUN_1411a18f5(ushort param_1)

{
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)param_1 * 0x3c >> 8),
                   *(undefined1 *)((longlong)&DAT_14ca814c8 + (ulonglong)param_1 * 0x3c + 1)) &
          0xffffffffffffff02;
  return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 1);
}



// FUNCTION 1411a1912 FUN_1411a1912 body=221 status=ok
// SIG undefined FUN_1411a1912(void)

longlong FUN_1411a1912(void)

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
  if (DAT_14caa9ae8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1474b3dc1;
    local_40 = FUN_140b1c5f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x240;
    FUN_14081cfa3(L"/Script/GeometryCollectionEngine",L"GeometryCollection",&DAT_14caa9ae8,
                  FUN_14632ee86);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa9ae8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a19f0 FUN_1411a19f0 body=221 status=ok
// SIG undefined FUN_1411a19f0(void)

longlong FUN_1411a19f0(void)

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
  if (DAT_14cb207d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f018ab;
    local_40 = &LAB_14588725d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/AIModule",L"AISense",&DAT_14cb207d8,&DAT_147f018aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb207d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a1ace FUN_1411a1ace body=200 status=ok
// SIG undefined FUN_1411a1ace(void)

longlong FUN_1411a1ace(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  FUN_1411a1ca6();
  uVar1 = *(undefined4 *)(param_2 + 0x8ac);
  uVar2 = *(undefined4 *)(param_2 + 0x8b0);
  uVar3 = *(undefined4 *)(param_2 + 0x8b4);
  *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_2 + 0x8a8);
  *(undefined4 *)(param_1 + 0x8ac) = uVar1;
  *(undefined4 *)(param_1 + 0x8b0) = uVar2;
  *(undefined4 *)(param_1 + 0x8b4) = uVar3;
  FUN_1411a1bee(param_1 + 0x8b8,param_2 + 0x8b8);
  uVar1 = *(undefined4 *)(param_2 + 0x8cc);
  uVar2 = *(undefined4 *)(param_2 + 0x8d0);
  uVar3 = *(undefined4 *)(param_2 + 0x8d4);
  uVar4 = *(undefined4 *)(param_2 + 0x8d8);
  uVar5 = *(undefined4 *)(param_2 + 0x8dc);
  uVar6 = *(undefined4 *)(param_2 + 0x8e0);
  uVar7 = *(undefined4 *)(param_2 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_2 + 0x8c8);
  *(undefined4 *)(param_1 + 0x8cc) = uVar1;
  *(undefined4 *)(param_1 + 0x8d0) = uVar2;
  *(undefined4 *)(param_1 + 0x8d4) = uVar3;
  *(undefined4 *)(param_1 + 0x8d8) = uVar4;
  *(undefined4 *)(param_1 + 0x8dc) = uVar5;
  *(undefined4 *)(param_1 + 0x8e0) = uVar6;
  *(undefined4 *)(param_1 + 0x8e4) = uVar7;
  FUN_1405ea0f6(param_1 + 0x8e8,param_2 + 0x8e8);
  FUN_1411a1b96(param_1 + 0x938,param_2 + 0x938);
  *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(param_2 + 0x948);
  lVar8 = *(longlong *)(param_2 + 0x950);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x950);
    }
  }
  *(longlong *)(param_1 + 0x950) = lVar8;
  FUN_1411a1c48(param_1 + 0x958,param_2 + 0x958);
  return param_1;
}



// FUNCTION 1411a1b96 FUN_1411a1b96 body=88 status=ok
// SIG undefined FUN_1411a1b96(void)

undefined8 * FUN_1411a1b96(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470c03e4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1411a1bee FUN_1411a1bee body=89 status=ok
// SIG undefined FUN_1411a1bee(void)

undefined8 * FUN_1411a1bee(undefined8 *param_1,undefined8 *param_2)

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
      FUN_141066d1e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1411a1c48 FUN_1411a1c48 body=93 status=ok
// SIG undefined FUN_1411a1c48(void)

undefined8 * FUN_1411a1c48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a87f4b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470cbf5e(param_1,iVar1);
      FUN_1470cbfd1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1411a1ca6 FUN_1411a1ca6 body=3788 status=ok
// SIG undefined FUN_1411a1ca6(void)

longlong FUN_1411a1ca6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 uVar12;
  uint uVar13;
  longlong *plVar14;
  void *pvVar15;
  uint uVar16;
  longlong *plVar17;
  void *pvVar18;
  bool bVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  
  memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 0x10),0x150);
  if (param_1 == param_2) {
    uVar5 = *(undefined8 *)(param_2 + 0x178);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
    *(undefined8 *)(param_1 + 0x178) = uVar5;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x168);
    pvVar15 = *(void **)(param_2 + 0x160);
    *(int *)(param_1 + 0x168) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x16c) == 0) {
      *(undefined4 *)(param_1 + 0x16c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x160),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0x160),pvVar15,(longlong)iVar3 * 2);
      }
    }
    uVar8 = *(undefined4 *)(param_2 + 0x174);
    uVar9 = *(undefined4 *)(param_2 + 0x178);
    uVar10 = *(undefined4 *)(param_2 + 0x17c);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x174) = uVar8;
    *(undefined4 *)(param_1 + 0x178) = uVar9;
    *(undefined4 *)(param_1 + 0x17c) = uVar10;
    puVar21 = (undefined8 *)(param_1 + 0x180);
    iVar3 = *(int *)(param_2 + 0x1c8);
    plVar14 = (longlong *)(param_1 + 0x1c0);
    if ((ulonglong)(longlong)iVar3 < 2) {
      if (*plVar14 != 0) {
        FUN_1446efa72(plVar14,0,0,4);
      }
      if (iVar3 != 0) goto LAB_1411a265c;
    }
    else {
      FUN_1446efa72(plVar14,0,iVar3,4);
LAB_1411a265c:
      pvVar15 = (void *)(param_1 + 0x1b8);
      if ((void *)*plVar14 != (void *)0x0) {
        pvVar15 = (void *)*plVar14;
      }
      pvVar18 = (void *)(param_2 + 0x1b8);
      if (*(void **)(param_2 + 0x1c0) != (void *)0x0) {
        pvVar18 = *(void **)(param_2 + 0x1c0);
      }
      memcpy(pvVar15,pvVar18,(longlong)iVar3 << 2);
    }
    *(int *)(param_1 + 0x1c8) = iVar3;
    uVar4 = *(uint *)(param_2 + 0x188);
    FUN_14064ec02(puVar21,(ulonglong)uVar4);
    iVar3 = *(int *)(param_1 + 0x188);
    *(uint *)(param_1 + 0x188) = iVar3 + uVar4;
    if ((uint)(*(int *)(param_1 + 0x18c) - iVar3) < uVar4) {
      FUN_1447711aa(puVar21);
    }
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
    uVar13 = *(int *)(param_2 + 0x1a8) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    if ((*(int *)(param_1 + 0x1ac) < (int)uVar13) || (0x80 < *(int *)(param_1 + 0x1ac))) {
      uVar16 = 0x80;
      if (0x80 < (int)uVar13) {
        uVar16 = uVar13;
      }
      *(uint *)(param_1 + 0x1ac) = uVar16;
      FUN_1446efbd8((void *)(param_1 + 400),0);
    }
    iVar3 = *(int *)(param_2 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3;
    if (iVar3 != 0) {
      pvVar15 = *(void **)(param_2 + 0x1a0);
      if (*(void **)(param_2 + 0x1a0) == (void *)0x0) {
        pvVar15 = (void *)(param_2 + 400);
      }
      pvVar18 = (void *)(param_1 + 400);
      if (*(void **)(param_1 + 0x1a0) != (void *)0x0) {
        pvVar18 = *(void **)(param_1 + 0x1a0);
      }
      memcpy(pvVar18,pvVar15,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar4) {
      puVar23 = (undefined4 *)*puVar21;
      puVar27 = *(undefined4 **)(param_2 + 0x180);
      uVar26 = 0;
      do {
        pvVar15 = *(void **)(param_2 + 0x1a0);
        if (*(void **)(param_2 + 0x1a0) == (void *)0x0) {
          pvVar15 = (void *)(param_2 + 400);
        }
        if ((*(uint *)((longlong)pvVar15 + (uVar26 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar26 & 0x1f) &
            1) == 0) {
          *puVar23 = *puVar27;
          puVar23[1] = puVar27[1];
        }
        else {
          FUN_147913f24(puVar23,puVar27);
        }
        uVar26 = uVar26 + 1;
        puVar27 = puVar27 + 8;
        puVar23 = puVar23 + 8;
      } while (uVar4 != uVar26);
    }
  }
  lVar20 = 0x1d0;
  do {
    FUN_1411a2b72(param_1 + lVar20,param_2 + lVar20);
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x1f0);
  lVar20 = 0;
  do {
    if (param_1 != param_2) {
      plVar2 = (longlong *)(param_1 + 0x1f0 + lVar20 * 0x50);
      plVar25 = (longlong *)(lVar20 * 0x50 + param_2 + 0x1f0);
      iVar3 = (int)plVar25[9];
      plVar14 = plVar2 + 8;
      if ((ulonglong)(longlong)iVar3 < 2) {
        if (*plVar14 != 0) {
          FUN_1446efa72(plVar14,0,0,4);
        }
        if (iVar3 != 0) goto LAB_1411a1f2c;
      }
      else {
        FUN_1446efa72(plVar14,0,iVar3,4);
LAB_1411a1f2c:
        plVar17 = plVar2 + 7;
        if ((longlong *)*plVar14 != (longlong *)0x0) {
          plVar17 = (longlong *)*plVar14;
        }
        plVar14 = plVar25 + 7;
        if ((longlong *)plVar25[8] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar25[8];
        }
        memcpy(plVar17,plVar14,(longlong)iVar3 << 2);
      }
      *(int *)(plVar2 + 9) = iVar3;
      uVar4 = *(uint *)(plVar25 + 1);
      FUN_14064e9a0(plVar2,(ulonglong)uVar4);
      lVar11 = plVar2[1];
      *(uint *)(plVar2 + 1) = (int)lVar11 + uVar4;
      if ((uint)(*(int *)((longlong)plVar2 + 0xc) - (int)lVar11) < uVar4) {
        FUN_1401600aa(plVar2);
      }
      *(int *)(plVar2 + 6) = (int)plVar25[6];
      *(undefined4 *)((longlong)plVar2 + 0x34) = *(undefined4 *)((longlong)plVar25 + 0x34);
      uVar13 = (int)plVar25[5] + 0x1fU & 0xffffffe0;
      *(undefined4 *)(plVar2 + 5) = 0;
      if ((*(int *)((longlong)plVar2 + 0x2c) < (int)uVar13) ||
         (0x80 < *(int *)((longlong)plVar2 + 0x2c))) {
        uVar16 = 0x80;
        if (0x80 < (int)uVar13) {
          uVar16 = uVar13;
        }
        *(uint *)((longlong)plVar2 + 0x2c) = uVar16;
        FUN_1446efbd8(plVar2 + 2);
      }
      iVar3 = (int)plVar25[5];
      *(int *)(plVar2 + 5) = iVar3;
      if (iVar3 != 0) {
        plVar14 = (longlong *)plVar25[4];
        if ((longlong *)plVar25[4] == (longlong *)0x0) {
          plVar14 = plVar25 + 2;
        }
        plVar17 = plVar2 + 2;
        if ((longlong *)plVar2[4] != (longlong *)0x0) {
          plVar17 = (longlong *)plVar2[4];
        }
        memcpy(plVar17,plVar14,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
      }
      if (0 < (int)uVar4) {
        lVar11 = *plVar2;
        lVar6 = *plVar25;
        lVar22 = 0;
        uVar26 = 0;
        do {
          plVar14 = (longlong *)plVar25[4];
          if ((longlong *)plVar25[4] == (longlong *)0x0) {
            plVar14 = plVar25 + 2;
          }
          if ((*(uint *)((longlong)plVar14 + (uVar26 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar26 & 0x1f)
              & 1) == 0) {
            *(undefined4 *)(lVar11 + lVar22) = *(undefined4 *)(lVar6 + lVar22);
            *(undefined4 *)(lVar11 + 4 + lVar22) = *(undefined4 *)(lVar6 + 4 + lVar22);
          }
          else {
            *(undefined8 *)(lVar11 + lVar22) = *(undefined8 *)(lVar6 + lVar22);
            FUN_147913fee(lVar11 + 8 + lVar22);
            *(undefined8 *)(lVar11 + 0x80 + lVar22) = *(undefined8 *)(lVar6 + 0x80 + lVar22);
          }
          uVar26 = uVar26 + 1;
          lVar22 = lVar22 + 0x88;
        } while (uVar4 != uVar26);
      }
    }
    lVar20 = lVar20 + 1;
  } while (lVar20 != 2);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  bVar19 = false;
  lVar20 = 0;
  do {
    if (param_1 != param_2) {
      lVar20 = lVar20 * 0x10;
      puVar21 = (undefined8 *)(lVar20 + param_1 + 0x2a0);
      iVar3 = *(int *)(param_2 + 0x2a8 + lVar20);
      pvVar15 = *(void **)(param_2 + 0x2a0 + lVar20);
      *(int *)(puVar21 + 1) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)puVar21 + 0xc) == 0) {
        *(undefined4 *)((longlong)puVar21 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(puVar21,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar21,pvVar15,(longlong)iVar3 << 2);
        }
      }
    }
    lVar20 = 1;
    bVar7 = !bVar19;
    bVar19 = true;
  } while (bVar7);
  bVar19 = false;
  lVar20 = 0;
  do {
    if (param_1 != param_2) {
      lVar20 = lVar20 * 0x10;
      puVar21 = (undefined8 *)(lVar20 + param_1 + 0x2c0);
      iVar3 = *(int *)(param_2 + 0x2c8 + lVar20);
      pvVar15 = *(void **)(param_2 + 0x2c0 + lVar20);
      *(int *)(puVar21 + 1) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)puVar21 + 0xc) == 0) {
        *(undefined4 *)((longlong)puVar21 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(puVar21,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar21,pvVar15,(longlong)iVar3 << 2);
        }
      }
    }
    lVar20 = 1;
    bVar7 = !bVar19;
    bVar19 = true;
  } while (bVar7);
  FUN_140cae46a(param_1 + 0x2e0,param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x338);
  FUN_140dc6b1e(param_1 + 0x348,param_2 + 0x348);
  FUN_140dc6b7c(param_1 + 0x358,param_2 + 0x358);
  FUN_140dc6c16(param_1 + 0x3a8,param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
  FUN_140816cc4(param_1 + 0x400,param_2 + 0x400);
  lVar20 = 0x450;
  do {
    if (param_1 != param_2) {
      iVar3 = *(int *)(param_2 + 8 + lVar20);
      pvVar15 = *(void **)(param_2 + lVar20);
      *(int *)(param_1 + 8 + lVar20) = iVar3;
      if (iVar3 == 0 && *(int *)(param_1 + 0xc + lVar20) == 0) {
        *(undefined4 *)(param_1 + 0xc + lVar20) = 0;
      }
      else {
        FUN_14791b36a((undefined8 *)(param_1 + lVar20),iVar3);
        if (iVar3 != 0) {
          memcpy(*(void **)(param_1 + lVar20),pvVar15,(longlong)iVar3 * 0xc);
        }
      }
    }
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x470);
  lVar20 = 0x470;
  do {
    FUN_140d188f2(param_1 + lVar20,param_2 + lVar20);
    lVar20 = lVar20 + 0x50;
  } while (lVar20 != 0x560);
  FUN_144881636(param_1 + 0x560,param_2 + 0x560);
  FUN_140dc6b1e(param_1 + 0x5b0,param_2 + 0x5b0);
  puVar21 = (undefined8 *)(param_2 + 0x5c0);
  puVar24 = (undefined8 *)(param_1 + 0x5c0);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar24 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar24 = puVar24 + 1;
  }
  if (param_1 != param_2) {
    if (*(char *)(param_2 + 0x621) == '\x01') {
      *(undefined1 *)(param_1 + 0x620) = *(undefined1 *)(param_2 + 0x620);
      uVar12 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x621) != '\x01') goto LAB_1411a21c8;
      uVar12 = 0;
    }
    *(undefined1 *)(param_1 + 0x621) = uVar12;
  }
LAB_1411a21c8:
  *(undefined1 *)(param_1 + 0x630) = *(undefined1 *)(param_2 + 0x630);
  *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(param_2 + 0x634);
  puVar21 = (undefined8 *)(param_2 + 0x640);
  puVar24 = (undefined8 *)(param_1 + 0x640);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar24 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar24 = puVar24 + 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x6a0);
  lVar20 = *(longlong *)(param_2 + 0x6a8);
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x6a8);
  *(undefined8 *)(param_1 + 0x6a0) = uVar5;
  *(longlong *)(param_1 + 0x6a8) = lVar20;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined8 *)(param_1 + 0x6b0) = *(undefined8 *)(param_2 + 0x6b0);
  if (param_1 != param_2) {
    iVar3 = *(int *)(param_2 + 0x6c8);
    uVar5 = *(undefined8 *)(param_2 + 0x6c0);
    *(int *)(param_1 + 0x6c8) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x6cc) == 0) {
      *(undefined4 *)(param_1 + 0x6cc) = 0;
    }
    else {
      FUN_14791b3de((undefined8 *)(param_1 + 0x6c0),iVar3);
      FUN_14791b44d(*(undefined8 *)(param_1 + 0x6c0),uVar5,iVar3);
    }
    puVar21 = (undefined8 *)(param_1 + 0x6d0);
    iVar3 = *(int *)(param_2 + 0x718);
    plVar14 = (longlong *)(param_1 + 0x710);
    if ((ulonglong)(longlong)iVar3 < 2) {
      if (*plVar14 != 0) {
        FUN_1446efa72(plVar14,0,0,4);
      }
      if (iVar3 != 0) goto LAB_1411a26a6;
    }
    else {
      FUN_1446efa72(plVar14,0,iVar3,4);
LAB_1411a26a6:
      pvVar15 = (void *)(param_1 + 0x708);
      if ((void *)*plVar14 != (void *)0x0) {
        pvVar15 = (void *)*plVar14;
      }
      pvVar18 = (void *)(param_2 + 0x708);
      if (*(void **)(param_2 + 0x710) != (void *)0x0) {
        pvVar18 = *(void **)(param_2 + 0x710);
      }
      memcpy(pvVar15,pvVar18,(longlong)iVar3 << 2);
    }
    *(int *)(param_1 + 0x718) = iVar3;
    uVar4 = *(uint *)(param_2 + 0x6d8);
    FUN_14064f50e(puVar21,uVar4);
    iVar3 = *(int *)(param_1 + 0x6d8);
    *(uint *)(param_1 + 0x6d8) = iVar3 + uVar4;
    if ((uint)(*(int *)(param_1 + 0x6dc) - iVar3) < uVar4) {
      FUN_1447711aa(puVar21);
    }
    *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
    *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x704);
    uVar13 = *(int *)(param_2 + 0x6f8) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    if ((*(int *)(param_1 + 0x6fc) < (int)uVar13) || (0x80 < *(int *)(param_1 + 0x6fc))) {
      uVar16 = 0x80;
      if (0x80 < (int)uVar13) {
        uVar16 = uVar13;
      }
      *(uint *)(param_1 + 0x6fc) = uVar16;
      FUN_1446efbd8((void *)(param_1 + 0x6e0),0);
    }
    iVar3 = *(int *)(param_2 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar3;
    if (iVar3 != 0) {
      pvVar15 = (void *)(param_2 + 0x6e0);
      if (*(void **)(param_2 + 0x6f0) != (void *)0x0) {
        pvVar15 = *(void **)(param_2 + 0x6f0);
      }
      pvVar18 = (void *)(param_1 + 0x6e0);
      if (*(void **)(param_1 + 0x6f0) != (void *)0x0) {
        pvVar18 = *(void **)(param_1 + 0x6f0);
      }
      memcpy(pvVar18,pvVar15,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar4 != 0) {
      memcpy((void *)*puVar21,*(void **)(param_2 + 0x6d0),(longlong)(int)uVar4 << 5);
    }
  }
  FUN_144a79f32(param_1 + 0x720,param_2 + 0x720);
  FUN_140bc92ea(param_1 + 0x770,param_2 + 0x770);
  FUN_140bc92ea(param_1 + 0x780,param_2 + 0x780);
  FUN_140bc92ea(param_1 + 0x790,param_2 + 0x790);
  if (param_1 != param_2) {
    FUN_14064e8ba(*(undefined8 *)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0x7a8));
    iVar3 = *(int *)(param_2 + 0x7a8);
    uVar5 = *(undefined8 *)(param_2 + 0x7a0);
    *(int *)(param_1 + 0x7a8) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x7ac) == 0) {
      *(undefined4 *)(param_1 + 0x7ac) = 0;
    }
    else {
      FUN_14791b4da((undefined8 *)(param_1 + 0x7a0),iVar3);
      FUN_14791b54d(*(undefined8 *)(param_1 + 0x7a0),uVar5,iVar3);
    }
  }
  FUN_1411a2bd0(param_1 + 0x7b0,param_2 + 0x7b0);
  FUN_1411a2bd0(param_1 + 0x7c0,param_2 + 0x7c0);
  if (param_1 == param_2) {
    *(undefined2 *)(param_1 + 0x7e0) = *(undefined2 *)(param_2 + 0x7e0);
    goto LAB_1411a25dd;
  }
  FUN_14064e8e6(*(undefined8 *)(param_1 + 2000),*(undefined4 *)(param_1 + 0x7d8));
  iVar3 = *(int *)(param_2 + 0x7d8);
  uVar5 = *(undefined8 *)(param_2 + 2000);
  *(int *)(param_1 + 0x7d8) = iVar3;
  if (iVar3 == 0 && *(int *)(param_1 + 0x7dc) == 0) {
    *(undefined4 *)(param_1 + 0x7dc) = 0;
  }
  else {
    FUN_14791b660((undefined8 *)(param_1 + 2000),iVar3);
    FUN_14791b6cf(*(undefined8 *)(param_1 + 2000),uVar5,iVar3);
  }
  *(undefined2 *)(param_1 + 0x7e0) = *(undefined2 *)(param_2 + 0x7e0);
  FUN_144959a9a(*(undefined8 *)(param_1 + 0x7e8),*(undefined4 *)(param_1 + 0x7f0));
  iVar3 = *(int *)(param_2 + 0x7f0);
  uVar5 = *(undefined8 *)(param_2 + 0x7e8);
  *(int *)(param_1 + 0x7f0) = iVar3;
  if (iVar3 == 0 && *(int *)(param_1 + 0x7f4) == 0) {
    *(undefined4 *)(param_1 + 0x7f4) = 0;
  }
  else {
    FUN_14791b7b8((undefined8 *)(param_1 + 0x7e8),iVar3);
    FUN_14791b827(*(undefined8 *)(param_1 + 0x7e8),uVar5,iVar3);
  }
  puVar21 = (undefined8 *)(param_1 + 0x7f8);
  iVar3 = *(int *)(param_2 + 0x840);
  plVar14 = (longlong *)(param_1 + 0x838);
  if ((ulonglong)(longlong)iVar3 < 2) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
    if (iVar3 != 0) goto LAB_1411a26f0;
  }
  else {
    FUN_1446efa72(plVar14,0,iVar3,4);
LAB_1411a26f0:
    pvVar15 = (void *)(param_1 + 0x830);
    if ((void *)*plVar14 != (void *)0x0) {
      pvVar15 = (void *)*plVar14;
    }
    pvVar18 = (void *)(param_2 + 0x830);
    if (*(void **)(param_2 + 0x838) != (void *)0x0) {
      pvVar18 = *(void **)(param_2 + 0x838);
    }
    memcpy(pvVar15,pvVar18,(longlong)iVar3 << 2);
  }
  *(int *)(param_1 + 0x840) = iVar3;
  uVar4 = *(uint *)(param_2 + 0x800);
  FUN_14064e926(puVar21,uVar4);
  iVar3 = *(int *)(param_1 + 0x800);
  *(uint *)(param_1 + 0x800) = iVar3 + uVar4;
  if ((uint)(*(int *)(param_1 + 0x804) - iVar3) < uVar4) {
    FUN_14482b872(puVar21);
  }
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_2 + 0x828);
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_2 + 0x82c);
  uVar13 = *(int *)(param_2 + 0x820) + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x820) = 0;
  if ((*(int *)(param_1 + 0x824) < (int)uVar13) || (0x80 < *(int *)(param_1 + 0x824))) {
    uVar16 = 0x80;
    if (0x80 < (int)uVar13) {
      uVar16 = uVar13;
    }
    *(uint *)(param_1 + 0x824) = uVar16;
    FUN_1446efbd8((void *)(param_1 + 0x808),0);
  }
  iVar3 = *(int *)(param_2 + 0x820);
  *(int *)(param_1 + 0x820) = iVar3;
  if (iVar3 != 0) {
    pvVar15 = (void *)(param_2 + 0x808);
    if (*(void **)(param_2 + 0x818) != (void *)0x0) {
      pvVar15 = *(void **)(param_2 + 0x818);
    }
    pvVar18 = (void *)(param_1 + 0x808);
    if (*(void **)(param_1 + 0x818) != (void *)0x0) {
      pvVar18 = *(void **)(param_1 + 0x818);
    }
    memcpy(pvVar18,pvVar15,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar4 != 0) {
    memcpy((void *)*puVar21,*(void **)(param_2 + 0x7f8),(longlong)(int)uVar4 * 0x18);
  }
  FUN_144922684(*(undefined8 *)(param_1 + 0x848),*(undefined4 *)(param_1 + 0x850));
  iVar3 = *(int *)(param_2 + 0x850);
  uVar5 = *(undefined8 *)(param_2 + 0x848);
  *(int *)(param_1 + 0x850) = iVar3;
  if (iVar3 == 0 && *(int *)(param_1 + 0x854) == 0) {
    *(undefined4 *)(param_1 + 0x854) = 0;
  }
  else {
    FUN_14791b890((undefined8 *)(param_1 + 0x848),iVar3);
    FUN_14791b903(*(undefined8 *)(param_1 + 0x848),uVar5,iVar3);
  }
LAB_1411a25dd:
  FUN_140472df2(param_1 + 0x858,param_2 + 0x858);
  FUN_140472d9a(param_1 + 0x868,param_2 + 0x868);
  FUN_140bc92ea(param_1 + 0x878,param_2 + 0x878);
  FUN_140bc92ea(param_1 + 0x888,param_2 + 0x888);
  FUN_140bc92ea(param_1 + 0x898,param_2 + 0x898);
  return param_1;
}



// FUNCTION 1411a2b72 FUN_1411a2b72 body=93 status=ok
// SIG undefined FUN_1411a2b72(void)

undefined8 * FUN_1411a2b72(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144803279(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478da716(param_1,iVar1);
      FUN_1478da78c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1411a2bd0 FUN_1411a2bd0 body=93 status=ok
// SIG undefined FUN_1411a2bd0(void)

undefined8 * FUN_1411a2bd0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14064e88e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14791b5aa(param_1,iVar1);
      FUN_14791b60c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1411a2c2e FUN_1411a2c2e body=270 status=ok
// SIG undefined FUN_1411a2c2e(void)

undefined8 FUN_1411a2c2e(longlong *param_1)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [44];
  float local_4c;
  undefined1 local_48 [16];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_1411a2d3e();
  uVar3 = 1;
  if ((cVar2 == '\0') && ((char)param_1[0x8b2] == '\0')) {
    if ((longlong *)param_1[0x3d7] != (longlong *)0x0) {
      cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0xb0))();
      if (cVar2 == '\x04') {
        cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x58))();
        if (cVar2 == '\0') {
          lVar4 = (**(code **)(*param_1 + 0xdc0))(param_1);
          if (lVar4 != 0) {
            FUN_1489a0214(param_1[0x3d7],local_48);
            local_4c = 0.0;
            (**(code **)(*(longlong *)param_1[0x3d7] + 0xd8))((longlong *)param_1[0x3d7],&local_4c);
            if ((local_4c != 0.0) || (NAN(local_4c))) {
              dVar1 = (double)local_4c;
              lVar4 = (**(code **)(*param_1 + 0xdc0))(param_1);
              if (ABS(dVar1 - local_38) <= (double)*(float *)(lVar4 + 0x18)) {
                uVar3 = 1;
                goto LAB_1411a2c7d;
              }
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
LAB_1411a2c7d:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a2d3e FUN_1411a2d3e body=69 status=ok
// SIG undefined FUN_1411a2d3e(void)

ulonglong FUN_1411a2d3e(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_1411a2d84();
  if ((((cVar1 != '\0') && (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x50))(), cVar1 == '\0')) &&
     (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0)) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x58))();
    return uVar2 ^ 1;
  }
  return 0;
}



// FUNCTION 1411a2d84 FUN_1411a2d84 body=158 status=ok
// SIG undefined FUN_1411a2d84(void)

uint FUN_1411a2d84(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(&DAT_00001ce8 + param_1);
  if ((lVar4 == 0) || (*(byte *)(lVar4 + 0x178) < 2)) {
    if (*(char *)(param_1 + 0x1ee0) == '\0') {
      return 0;
    }
  }
  else {
    if (*(longlong **)(param_1 + 0x1eb8) == (longlong *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x40))();
    if (cVar2 == '\0') {
      return 0;
    }
    lVar4 = *(longlong *)(&DAT_00001ce8 + param_1);
  }
  if ((lVar4 == 0) || (*(byte *)(lVar4 + 0x178) < 2)) {
    if (*(char *)(param_1 + 0x1ee9) != '\0') {
      return 0;
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x1eb8);
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,0), cVar2 != '\0')) {
      return 0;
    }
  }
  if (*(longlong **)(param_1 + 0x1eb8) == (longlong *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x48))();
  return uVar3 ^ 1;
}



// FUNCTION 1411a2e22 FUN_1411a2e22 body=43 status=ok
// SIG undefined FUN_1411a2e22(void)

void FUN_1411a2e22(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1411a2e4e FUN_1411a2e4e body=43 status=ok
// SIG undefined FUN_1411a2e4e(void)

void FUN_1411a2e4e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1411a2e7a FUN_1411a2e7a body=91 status=ok
// SIG undefined FUN_1411a2e7a(void)

void FUN_1411a2e7a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x721) == '\x01') && (*param_2 != 0)) {
    lVar3 = FUN_140083894();
    if (0 < *(int *)(param_1 + 0x10)) {
      plVar1 = *(longlong **)(lVar3 + 0x30);
      iVar4 = 0;
      do {
        uVar2 = (**(code **)(*(longlong *)*param_2 + 0x2b0))((longlong *)*param_2,iVar4);
        (**(code **)(*plVar1 + 0x118))(plVar1,uVar2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}



// FUNCTION 1411a2ed6 FUN_1411a2ed6 body=102 status=ok
// SIG undefined FUN_1411a2ed6(void)

void FUN_1411a2ed6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_14003821a(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_144893a1c(param_1 + 0xd0,0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  return;
}



// FUNCTION 1411a2f3c FUN_1411a2f3c body=156 status=ok
// SIG undefined FUN_1411a2f3c(void)

void FUN_1411a2f3c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar5 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x118;
    do {
      if ((*(int *)(lVar5 + 0x8c) == 0) || (uVar1 = *(uint *)(lVar5 + 0x88), (int)uVar1 < 0)) {
LAB_1411a2fc8:
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar3 == (longlong *)0x0) || ((int)plVar3[2] != *(int *)(lVar5 + 0x8c))) ||
             ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_1411a2fc8;
          lVar2 = *plVar3;
        }
      }
      if (lVar2 == param_2) {
        FUN_1411a2fd8(lVar5);
      }
      lVar5 = lVar5 + 0x118;
      lVar4 = lVar4 + -0x118;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1411a2fd8 FUN_1411a2fd8 body=234 status=ok
// SIG undefined FUN_1411a2fd8(void)

void FUN_1411a2fd8(char *param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if (*param_1 != '\x03') {
    cVar3 = '\x02';
    goto LAB_1411a3048;
  }
  if (((((*(longlong **)(param_1 + 0x18) == (longlong *)0x0) || (*(int *)(param_1 + 0x14) == 0)) ||
       (uVar1 = *(uint *)(param_1 + 0x10), (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0)))) ||
     ((*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x14) ||
      (((*(uint *)(lVar5 + 8) & 0x10200000) != 0 ||
       (plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(),
       plVar2 == (longlong *)0x0)))))) {
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  uVar6 = DAT_14c763924;
  if (param_1[0xe0] == '\0') {
    cVar3 = '\x05';
    if (iVar4 == 0) goto LAB_1411a3048;
LAB_1411a3078:
    if (param_2 != 1) {
      uVar6 = 0;
    }
LAB_1411a30aa:
    (**(code **)(*plVar2 + 0x2a0))(plVar2,iVar4,uVar6);
  }
  else {
    if (iVar4 != 0) goto LAB_1411a3078;
    if (param_2 != 1) {
      uVar6 = 0;
    }
    iVar4 = *(int *)(param_1 + 4);
    if (param_1[0xc1] != '\0') goto LAB_1411a30aa;
    FUN_1464d89ec(plVar2);
  }
  param_1[0xe0] = '\0';
  cVar3 = '\x05';
LAB_1411a3048:
  *param_1 = cVar3;
  FUN_1456fc776(param_1);
  return;
}



// FUNCTION 1411a30d0 FUN_1411a30d0 body=157 status=ok
// SIG undefined FUN_1411a30d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411a30d0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
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



// FUNCTION 1411a316e FUN_1411a316e body=508 status=ok
// SIG undefined FUN_1411a316e(void)

void FUN_1411a316e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar3 = FUN_1407f4df8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      if (DAT_14c872bf2 == '\0') {
        local_58 = &local_48;
        local_48 = FUN_148e731e6;
        local_40 = 0;
        FUN_1411a38be(param_1,param_2,&DAT_14cb92b08,param_1);
      }
      local_58 = &local_48;
      local_48 = (code *)&LAB_148e7344a;
      local_40 = 0;
      FUN_1411a38be(param_1,param_2,&DAT_14cb92b20,param_1);
      lVar3 = param_1 + 0x138;
      local_48 = FUN_140de0f20;
      local_40 = 0;
      uVar2 = FUN_1411a357c(param_2,2,param_1,&local_48);
      iVar1 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
        FUN_1447808da(lVar3,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar2;
      local_48 = FUN_140de0f20;
      local_40 = 0;
      uVar2 = FUN_1411a357c(param_2,8,param_1);
      iVar1 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
        FUN_1447808da(lVar3,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar2;
      local_48 = FUN_140de0f20;
      local_40 = 0;
      uVar2 = FUN_1411a357c(param_2,0x10,param_1);
      iVar1 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
        FUN_1447808da(lVar3,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a3386 FUN_1411a3386 body=90 status=ok
// SIG undefined FUN_1411a3386(void)

void FUN_1411a3386(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  lVar1 = FUN_14063edce(&DAT_14cb91658);
  if (lVar1 != 0) {
    FUN_1411a33e2(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a33e2 FUN_1411a33e2 body=409 status=ok
// SIG undefined FUN_1411a33e2(void)

void FUN_1411a33e2(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar4;
      }
      else {
        lVar2 = 0;
      }
      if (((*(int *)(lVar2 + 0x374) != 0) && (uVar1 = *(uint *)(lVar2 + 0x370), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar2 + 0x374))) &&
            ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
          lVar2 = FUN_1400b6e86();
          if (lVar2 != 0) {
            lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x10))(lVar2 + 0x30);
            if (lVar2 != 0) {
              lVar3 = FUN_140dd10c4();
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                local_28 = param_3;
                if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(param_3);
                }
                lVar2 = FUN_144a7a2cc(lVar2,&local_28);
                if (lVar2 != 0) {
                  FUN_140de0f20(param_1,lVar2);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a357c FUN_1411a357c body=832 status=ok
// SIG undefined FUN_1411a357c(void)

undefined4 FUN_1411a357c(longlong param_1,undefined1 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = param_4[1];
  lVar4 = *param_4;
  local_50 = DAT_14cb92b20;
  lVar9 = FUN_14063edce(&DAT_14cb91658);
  if (lVar9 == 0) {
    uVar14 = 0;
  }
  else {
    lVar12 = 0;
    uVar14 = (int)lVar7;
    if (lVar4 == 0) {
      uVar14 = 0;
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar8 = DAT_14c762760 + 1;
    *(int *)(puVar10 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar8;
    *puVar10 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(puVar10 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar8 = iVar13;
      }
    }
    *(int *)((longlong)puVar10 + 0x14) = iVar8;
    *(undefined1 *)(puVar10 + 3) = param_2;
    *puVar10 = &PTR_FUN_14b47b110;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 6) = 0;
    plVar11 = (longlong *)FUN_14063f168(puVar10 + 4);
    if ((int)plVar11[1] != 4) {
      FUN_1446efa72(plVar11,0,4,0x10);
      *(undefined4 *)(plVar11 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar11;
    plVar11 = *(longlong **)(param_3 + 0x10);
    if (plVar11 == (longlong *)0x0) {
LAB_1411a37ba:
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c0cf0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = lVar4;
      *(undefined4 *)(puVar5 + 6) = uVar14;
    }
    else {
      iVar8 = (int)plVar11[1];
      do {
        if (iVar8 == 0) goto LAB_1411a37ba;
        LOCK();
        iVar13 = (int)plVar11[1];
        bVar15 = iVar8 == iVar13;
        if (bVar15) {
          *(int *)(plVar11 + 1) = iVar8 + 1;
          iVar13 = iVar8;
        }
        iVar8 = iVar13;
        UNLOCK();
      } while (!bVar15);
      uVar6 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c0cf0;
      puVar5[3] = uVar6;
      puVar5[4] = plVar11;
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar14;
      puVar5[5] = lVar4;
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
    iVar8 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
      FUN_141053524((longlong *)(param_1 + 0x198),iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar10;
    uVar14 = *(undefined4 *)(puVar10 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 1411a38be FUN_1411a38be body=1072 status=ok
// SIG undefined FUN_1411a38be(void)

void FUN_1411a38be(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  code **local_68;
  int local_5c;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = *(undefined4 *)(param_5 + 1);
  uVar4 = *param_5;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar7 = DAT_14c762760 + 1;
    *(int *)(puVar9 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar7;
    *puVar9 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
    uVar3 = *(uint *)(lVar8 + 0xc);
    *(uint *)(puVar9 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        local_5c = iVar13;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
        iVar13 = local_5c;
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar13;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar13;
      }
    }
    *(int *)((longlong)puVar9 + 0x14) = iVar7;
    *(undefined1 *)(puVar9 + 3) = 1;
    *puVar9 = &PTR_FUN_14b47b0e0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined1 *)(puVar9 + 6) = 0;
    plVar10 = (longlong *)FUN_14063ee94(puVar9 + 4);
    if ((int)plVar10[1] != 4) {
      FUN_1446efa72(plVar10,0,4,0x10);
      *(undefined4 *)(plVar10 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar10;
    plVar10 = *(longlong **)(param_4 + 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_1411a3bc0:
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9c0c80;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = uVar4;
      *(undefined4 *)(puVar5 + 6) = uVar11;
    }
    else {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_1411a3bc0;
        LOCK();
        iVar13 = (int)plVar10[1];
        bVar14 = iVar7 == iVar13;
        if (bVar14) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar13 = iVar7;
        }
        iVar7 = iVar13;
        UNLOCK();
      } while (!bVar14);
      uVar6 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b9c0c80;
      puVar5[3] = uVar6;
      puVar5[4] = plVar10;
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar11;
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
    iVar7 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar7 + 1U) {
      FUN_141053524((longlong *)(param_2 + 0x198),iVar7);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar7 * 8) = puVar9;
    uVar11 = *(undefined4 *)(puVar9 + 1);
  }
  plVar10 = (longlong *)(param_1 + 0x138);
  iVar7 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
    FUN_1447808da(plVar10,iVar7);
  }
  *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658,&local_58);
  if (lVar8 != 0) {
    local_58 = FUN_140ed4b7e;
    local_50 = 0;
    local_68 = &local_58;
    lVar8 = FUN_14063efbe(param_2,lVar8,1,param_1);
    uVar11 = *(undefined4 *)(lVar8 + 8);
    iVar7 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
      FUN_1447808da(plVar10,iVar7);
    }
    *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411a3cf0 FUN_1411a3cf0 body=1575 status=ok
// SIG undefined FUN_1411a3cf0(void)

void FUN_1411a3cf0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1401c3ca6();
  lVar3 = *(longlong *)(param_1 + 0x420);
  if (lVar3 == 0) goto LAB_1411a3d21;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar1 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_58[2] = lVar7;
  *local_58 = (longlong)&PTR_FUN_14a861880;
  local_58[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar9 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar9 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar9 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar6;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar9 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x1c) = iVar9;
  plVar1[4] = (longlong)FUN_14347e318;
  *(undefined4 *)(plVar1 + 5) = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_58 + 0x30))(), cVar5 == '\0')) {
    if (local_50 == 0) goto LAB_1411a3ed7;
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1411a3eca;
    }
  }
  else {
    plVar1 = (longlong *)(lVar3 + 0x2b8);
    if (*(int *)(lVar3 + 0x2cc) < 1) {
      iVar9 = *(int *)(lVar3 + 0x2c0);
      iVar6 = *(int *)(lVar3 + 0x2c8) + -1;
      *(int *)(lVar3 + 0x2c8) = iVar6;
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
        if (0 < iVar9) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar6 = *(int *)(lVar3 + 0x2c0);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(lVar3 + 0x2c8) = iVar8;
        if ((iVar8 < iVar9) && (*(int *)(lVar3 + 0x2c4) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar9 = *(int *)(lVar3 + 0x2c0);
    *(uint *)(lVar3 + 0x2c0) = iVar9 + 1U;
    if (*(uint *)(lVar3 + 0x2c4) < iVar9 + 1U) {
      FUN_1447a71f6(plVar1,iVar9);
    }
    lVar3 = *plVar1;
    lVar10 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar3 + lVar10) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar10) = 0;
    *(longlong **)(lVar3 + lVar10) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar10) = local_50;
LAB_1411a3eca:
    local_50 = 0;
LAB_1411a3ed7:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x420);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar1 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14a861960;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_58[2] = lVar7;
  *local_58 = (longlong)&PTR_FUN_14a8618f0;
  local_58[3] = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar9 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar9 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar9 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar6;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar9 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x1c) = iVar9;
  plVar1[4] = (longlong)&LAB_14583ab2a;
  *(undefined4 *)(plVar1 + 5) = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_58 + 0x30))(), cVar5 == '\0')) {
    if (local_50 == 0) goto LAB_1411a407d;
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1411a4070;
    }
  }
  else {
    plVar1 = (longlong *)(lVar3 + 0x3a0);
    if (*(int *)(lVar3 + 0x3b4) < 1) {
      iVar9 = *(int *)(lVar3 + 0x3a8);
      iVar6 = *(int *)(lVar3 + 0x3b0) + -1;
      *(int *)(lVar3 + 0x3b0) = iVar6;
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
        if (0 < iVar9) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar6 = *(int *)(lVar3 + 0x3a8);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(lVar3 + 0x3b0) = iVar8;
        if ((iVar8 < iVar9) && (*(int *)(lVar3 + 0x3ac) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar9 = *(int *)(lVar3 + 0x3a8);
    *(uint *)(lVar3 + 0x3a8) = iVar9 + 1U;
    if (*(uint *)(lVar3 + 0x3ac) < iVar9 + 1U) {
      FUN_1447a71f6(plVar1,iVar9);
    }
    lVar3 = *plVar1;
    lVar10 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar3 + lVar10) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar10) = 0;
    *(longlong **)(lVar3 + lVar10) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar10) = local_50;
LAB_1411a4070:
    local_50 = 0;
LAB_1411a407d:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1411a4372(param_1);
LAB_1411a3d21:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411a4372 FUN_1411a4372 body=1464 status=ok
// SIG undefined FUN_1411a4372(void)

void FUN_1411a4372(longlong param_1)

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
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_138 [32];
  code **local_118;
  longlong local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((param_1 == 0) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) ||
     (lVar13 = *(longlong *)(param_1 + 0x398), lVar13 == 0)) goto LAB_1411a456b;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x420) + 0x390);
  local_f8 = *(undefined4 *)(lVar4 + 0x240);
  uStack_f4 = *(undefined4 *)(lVar4 + 0x244);
  uStack_f0 = *(undefined4 *)(lVar4 + 0x248);
  uStack_ec = *(undefined4 *)(lVar4 + 0x24c);
  local_e8 = *(undefined4 *)(lVar4 + 0x250);
  uStack_e4 = *(undefined4 *)(lVar4 + 0x254);
  uStack_e0 = *(undefined4 *)(lVar4 + 600);
  uStack_dc = *(undefined4 *)(lVar4 + 0x25c);
  local_d8 = *(undefined4 *)(lVar4 + 0x260);
  uStack_d4 = *(undefined4 *)(lVar4 + 0x264);
  uStack_d0 = *(undefined4 *)(lVar4 + 0x268);
  uStack_cc = *(undefined4 *)(lVar4 + 0x26c);
  local_c8 = *(undefined8 *)(lVar4 + 0x270);
  local_b0 = *(undefined8 *)(lVar4 + 0x2b8);
  local_c0 = *(undefined8 *)(lVar4 + 0x2a8);
  uStack_b8 = *(undefined8 *)(lVar4 + 0x2b0);
  local_a8 = *(code **)(lVar4 + 0x2c0);
  uStack_a0 = *(undefined8 *)(lVar4 + 0x2c8);
  local_98 = *(undefined8 *)(lVar4 + 0x2d0);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_108[0] = lVar13;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1411a4461;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1411a4466;
      goto LAB_1411a449c;
    }
  }
  else {
LAB_1411a4461:
    if (iVar6 != 0x10) {
LAB_1411a449c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1411a4466;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1411a4466;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1411a4637;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14348442c);
          }
          lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar13 + 0x310);
          *(undefined8 *)(lVar13 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1411a4637:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar16 + 0x26);
          uVar12 = puVar10[0x12];
          if (puVar15 <= puVar10 + 0x4000) break;
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
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x67U & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar16 + 0x26);
            uVar12 = 0;
            if (puVar15 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1411a46b7;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1411a46b7:
        *(uint **)(puVar10 + 0x10) = puVar15;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a861810;
        plVar14 = local_108;
        plVar18 = puVar16 + 0x16;
        for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
          *plVar18 = *plVar14;
          plVar14 = plVar14 + 1;
          plVar18 = plVar18 + 1;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
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
        lVar13 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar13 == 0) {
          uVar5 = 1;
          if ((char)uVar17 != '\x06') {
            uVar5 = uVar17;
          }
          uVar17 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar13 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x90,0x10);
        *local_78 = (longlong)&PTR_LAB_14a8617d0;
        plVar14 = local_108;
        plVar18 = local_78 + 2;
        for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
          *plVar18 = *plVar14;
          plVar14 = plVar14 + 1;
          plVar18 = plVar18 + 1;
        }
        if (local_78 + 2 != (longlong *)0x0) {
          local_88[0] = FUN_1434878ca;
        }
        local_118 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"SetOrientedBox",&DAT_14cad1e3c);
        if (local_88[0] != (code *)0x0) {
          plVar14 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar14 = local_68;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_1411a456b;
    }
  }
LAB_1411a4466:
  local_118 = &local_a8;
  FUN_143563226(lVar13,&local_f8,&local_d8,&local_c0);
LAB_1411a456b:
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a492c FUN_1411a492c body=182 status=ok
// SIG undefined FUN_1411a492c(void)

void FUN_1411a492c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x168))(param_1,&local_30);
  FUN_140a6c050(param_2,CONCAT44(uStack_2c,local_30));
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  FUN_140a6c1c4(param_2,param_1[0xf]);
  local_30 = (undefined4)param_1[0xe];
  uStack_2c = 0;
  uStack_28 = 0;
  local_24 = 0;
  FUN_1411a49e4(param_2,&local_30);
  lVar1 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar1 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar1 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a49e4 FUN_1411a49e4 body=179 status=ok
// SIG undefined FUN_1411a49e4(void)

void FUN_1411a49e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  ulonglong *local_90;
  char local_88;
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_80;
  local_88 = '\0';
  local_90 = &local_20;
  local_98 = local_a0;
  FUN_1411a4a98(param_2,&local_a0,3);
  FUN_1446f82e2(&local_a8,(ulonglong)((longlong)local_98 - (longlong)local_a0) >> 1,local_a0,1);
  FUN_140a6c050(param_1,local_a8);
  if (local_88 == '\x01') {
    FUN_1400020a8(local_a0);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a4a98 FUN_1411a4a98 body=216 status=ok
// SIG undefined FUN_1411a4a98(void)

void FUN_1411a4a98(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  char local_78;
  undefined1 local_70 [70];
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = local_70;
  local_78 = '\0';
  local_80 = local_2a;
  local_88 = local_90;
  FUN_1411a4b72(param_1,&local_90);
  puVar2 = local_90;
  uVar5 = (int)local_88 - (int)local_90;
  lVar4 = (longlong)(int)uVar5;
  if (*(ulonglong *)(param_2 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_2 + 8))) {
    FUN_140213274(param_2,lVar4);
  }
  if (uVar5 != 0) {
    lVar1 = *(longlong *)(param_2 + 8);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        *(short *)(lVar1 + uVar3 * 2) = (short)(char)puVar2[uVar3];
        uVar3 = uVar3 + 1;
      } while ((uVar5 & 0x7fffffff) != uVar3);
    }
    *(longlong *)(param_2 + 8) = lVar1 + lVar4 * 2;
  }
  if (local_78 == '\x01') {
    FUN_1400020a8(local_90);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a4b72 FUN_1411a4b72 body=1025 status=ok
// SIG undefined FUN_1411a4b72(void)

void FUN_1411a4b72(uint *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_90;
  uint local_88;
  uint local_80;
  uint local_78;
  uint local_70;
  uint local_68;
  uint local_60;
  uint local_58;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == 3) {
    local_80 = param_1[3];
    local_88 = param_1[2] & 0xffff;
    local_90 = param_1[2] >> 0x10;
    uVar13 = *param_1;
    local_98 = param_1[1] & 0xffff;
    uVar14 = param_1[1] >> 0x10;
    pcVar6 = "%08x-%04x-%04x-%04x-%04x%08x";
    goto LAB_1411a4bd8;
  }
  switch(param_3) {
  case 1:
    local_90 = param_1[3];
    local_98 = param_1[2];
    uVar13 = *param_1;
    uVar14 = param_1[1];
    pcVar6 = "%08x%08x%08x%08x";
    break;
  case 2:
    local_80 = param_1[3];
    local_88 = param_1[2] & 0xffff;
    local_90 = param_1[2] >> 0x10;
    uVar13 = *param_1;
    local_98 = param_1[1] & 0xffff;
    uVar14 = param_1[1] >> 0x10;
    pcVar6 = "%08X-%04X-%04X-%04X-%04X%08X";
    break;
  default:
    local_90 = param_1[3];
    local_98 = param_1[2];
    uVar13 = *param_1;
    uVar14 = param_1[1];
    pcVar6 = "%08X%08X%08X%08X";
    break;
  case 4:
    local_80 = param_1[3];
    local_88 = param_1[2] & 0xffff;
    local_90 = param_1[2] >> 0x10;
    uVar13 = *param_1;
    local_98 = param_1[1] & 0xffff;
    uVar14 = param_1[1] >> 0x10;
    pcVar6 = "{%08X-%04X-%04X-%04X-%04X%08X}";
    break;
  case 5:
    local_80 = param_1[3];
    local_88 = param_1[2] & 0xffff;
    local_90 = param_1[2] >> 0x10;
    uVar13 = *param_1;
    local_98 = param_1[1] & 0xffff;
    uVar14 = param_1[1] >> 0x10;
    pcVar6 = "(%08X-%04X-%04X-%04X-%04X%08X)";
    break;
  case 6:
    local_70 = param_1[3];
    local_58 = local_70 & 0xff;
    local_60 = local_70 >> 8 & 0xff;
    local_68 = local_70 >> 0x10 & 0xff;
    local_70 = local_70 >> 0x18;
    local_90 = param_1[2];
    local_78 = local_90 & 0xff;
    local_80 = local_90 >> 8 & 0xff;
    local_88 = local_90 >> 0x10 & 0xff;
    local_90 = local_90 >> 0x18;
    uVar13 = *param_1;
    local_98 = param_1[1] & 0xffff;
    uVar14 = param_1[1] >> 0x10;
    pcVar6 = "{0x%08X,0x%04X,0x%04X,{0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X}}";
    break;
  case 7:
    local_90 = param_1[3];
    local_98 = param_1[2];
    uVar13 = *param_1;
    uVar14 = param_1[1];
    pcVar6 = "%08X-%08X-%08X-%08X";
    break;
  case 8:
    uVar13 = *param_1;
    local_48 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    uVar13 = param_1[1];
    local_44 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    uVar13 = param_1[2];
    local_40 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    uVar13 = param_1[3];
    local_3c = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
    lVar8 = param_2[1];
    if ((ulonglong)param_2[2] <= lVar8 + 0x18U) {
      FUN_145753a78(param_2,0x18);
      lVar8 = param_2[1];
    }
    param_2[1] = lVar8 + 0x18;
    lVar10 = (longlong)((int)lVar8 - (int)*param_2) + *param_2;
    lVar8 = 0;
    FUN_1410fe63e(&local_48,0x10,lVar10,0);
    do {
      if (*(char *)(lVar10 + lVar8) == '+') {
        *(undefined1 *)(lVar10 + lVar8) = 0x2d;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x18);
    lVar8 = 0;
    do {
      if (*(char *)(lVar10 + lVar8) == '/') {
        *(undefined1 *)(lVar10 + lVar8) = 0x5f;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x18);
    param_2[1] = param_2[1] + -2;
    goto LAB_1411a4f56;
  case 9:
    uVar13 = param_1[3];
    uVar14 = *param_1;
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    lVar8 = param_2[1];
    if ((ulonglong)param_2[2] <= lVar8 + 0x19U) {
      FUN_145753a78(param_2,0x19);
      lVar8 = param_2[1];
    }
    uVar11 = CONCAT44(uVar14,uVar1);
    uVar9 = CONCAT44(uVar2,uVar13);
    lVar10 = *param_2;
    param_2[1] = lVar8 + 0x19;
    lVar15 = 0x19;
    do {
      uVar7 = uVar11 / 0x2400000000;
      uVar12 = uVar11 - ((uVar7 << 0x22) + (uVar7 << 0x25));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar12;
      uVar11 = (uVar7 << 0x20) + SUB168(auVar3 * ZEXT816(0x71c71c71c71c71d),8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulonglong)
                     (uint)((int)uVar12 + SUB164(auVar3 * ZEXT816(0x71c71c71c71c71d),8) * -0x24) <<
                     0x20 | uVar9 >> 0x20;
      uVar7 = uVar9 & 0xffffffff |
              (ulonglong)
              (uint)((int)(uVar9 >> 0x20) + SUB164(auVar4 * ZEXT816(0x71c71c71c71c71d),8) * -0x24)
              << 0x20;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar7;
      uVar9 = (ulonglong)SUB164(auVar5 * ZEXT816(0x71c71c71c71c71d),8) |
              SUB168(auVar4 * ZEXT816(0x71c71c71c71c71d),8) << 0x20;
      *(char *)(((int)lVar8 - (int)lVar10) + lVar10 + -1 + lVar15) =
           "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ%08x%08x%08x%08x"
           [uVar7 + SUB168(auVar5 * ZEXT816(0x71c71c71c71c71d),8) * -0x24];
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
LAB_1411a4f56:
    if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_1411a4bd8:
  FUN_14089c9ba(param_2,pcVar6,uVar13,uVar14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1411a4f74 FUN_1411a4f74 body=311 status=ok
// SIG undefined FUN_1411a4f74(void)

undefined8 FUN_1411a4f74(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1411a50a4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411a50a4;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1411a50a4:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411a504d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1411a504d;
    }
  }
  uVar6 = 0;
LAB_1411a504d:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a50ac FUN_1411a50ac body=1252 status=ok
// SIG undefined FUN_1411a50ac(void)

void FUN_1411a50ac(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  char *pcVar10;
  longlong **pplVar11;
  longlong *plVar12;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  longlong *local_1a8 [2];
  longlong *local_198 [2];
  longlong *local_188 [2];
  longlong *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 local_15c;
  longlong *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined1 local_148 [32];
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_dc;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_3 != 2) goto LAB_1411a50d7;
  cVar4 = FUN_1411a5592(param_2);
  if (cVar4 == '\0') goto LAB_1411a50d7;
  lVar5 = FUN_1411a568a(param_2);
  if (lVar5 == 0) goto LAB_1411a50d7;
  lVar5 = FUN_1411a568a(param_2);
  if (*(char *)(lVar5 + 0xc0) != '\x01') goto LAB_1411a50d7;
  lVar5 = FUN_14582aac0(param_2);
  if (lVar5 == 0) {
LAB_1411a5442:
    plVar12 = (longlong *)FUN_140e82300();
  }
  else {
    lVar5 = FUN_14582aac0(param_2);
    uVar6 = FUN_14125b292();
    cVar4 = FUN_1448093f4(lVar5,uVar6);
    if ((cVar4 == '\0') || (lVar5 == 0)) goto LAB_1411a5442;
    plVar12 = (longlong *)(lVar5 + 0x18);
  }
  plVar1 = (longlong *)*plVar12;
  local_178 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  lVar5 = plVar12[1];
  local_170 = (int)lVar5;
  cVar4 = FUN_144a7c5f6();
  if (cVar4 == '\0') {
    lVar7 = FUN_141356c7a(param_1 + 0x30);
    if (lVar7 == param_4) {
      lVar7 = FUN_140279ac4(param_2);
      if (lVar7 != 0) {
        FUN_14125b2cc(param_1);
        puVar9 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
          puVar9 = *(undefined4 **)(lVar7 + 8);
        }
        FUN_1447325ac(puVar9,local_188,1);
        local_168 = SUB84(local_188[0],0);
        uStack_164 = (undefined4)((ulonglong)local_188[0] >> 0x20);
        FUN_14125b594(param_1);
      }
      pcVar10 = "location_discovered";
      pplVar11 = local_188;
    }
    else {
      pcVar10 = "location_discovered_by_other_player";
      pplVar11 = local_198;
    }
    FUN_1446ddc76(pplVar11,pcVar10,1);
    FUN_1446dcdd4(&local_168,pplVar11);
    lVar7 = FUN_1412095fe(&local_168);
    if (CONCAT44(uStack_14c,local_150) != 0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      FUN_1412099d2(param_1,&DAT_14cbd5aa8);
      FUN_14125b7f0(&local_168);
      uStack_164 = (undefined4)*(undefined8 *)(lVar7 + 100);
      uStack_160 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 100) >> 0x20);
      if (param_4 == 0) {
        FUN_140056680(local_188,&DAT_149dfb77a);
      }
      else {
        FUN_141220240(param_4,local_188);
      }
      plVar12 = local_158;
      if (local_158 != plVar1) {
        local_158 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1);
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      local_150 = (int)lVar5;
      FUN_140009b9a(local_1a8,local_188);
      FUN_14023409e(local_1b8,lVar7 + 0x18,1);
      FUN_14582ac20(local_198,local_1b8,local_1a8);
      FUN_140008f88(local_148,local_198);
      if (local_198[0] != (longlong *)0x0) {
        (**(code **)(*local_198[0] + 0x10))();
      }
      if (local_1a8[0] != (longlong *)0x0) {
        (**(code **)(*local_1a8[0] + 0x10))();
      }
      local_dc = *(undefined8 *)(lVar7 + 0xe4);
      local_128 = *(undefined8 *)(lVar7 + 0x98);
      FUN_144a787a6(local_110,lVar7 + 0xb8);
      lVar5 = *(longlong *)(lVar7 + 0xa8);
      if (lVar5 == 0) {
        uVar6 = FUN_14036a63e();
        lVar5 = FUN_14477b664(uVar6);
        *(longlong *)(lVar7 + 0xa8) = lVar5;
      }
      plVar12 = (longlong *)(lVar7 + 0xa0);
      lVar8 = *(longlong *)(lVar7 + 0xb0);
      if (lVar8 == 0) {
        if ((*plVar12 != 0) && (lVar5 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if (plVar2 != (longlong *)0x0) {
            cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
            if (cVar4 != '\0') {
              uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar8 = FUN_144aff482(uVar6,plVar12);
              *(longlong *)(lVar7 + 0xb0) = lVar8;
              if (lVar8 != 0) {
                lVar5 = *(longlong *)(lVar7 + 0xa8);
                goto LAB_1411a54d4;
              }
              goto LAB_1411a5387;
            }
          }
          *(undefined8 *)(lVar7 + 0xb0) = 0;
        }
LAB_1411a5387:
        plVar12 = (longlong *)FUN_140e82300();
      }
      else {
LAB_1411a54d4:
        if (lVar5 == 0) {
          uVar6 = FUN_14036a63e();
          lVar5 = FUN_14477b664(uVar6);
          *(longlong *)(lVar7 + 0xa8) = lVar5;
          lVar8 = *(longlong *)(lVar7 + 0xb0);
          if (((lVar8 == 0) && (lVar8 = 0, lVar5 != 0)) && (*plVar12 != 0)) {
            plVar2 = *(longlong **)(lVar5 + 0xb8);
            if (plVar2 == (longlong *)0x0) {
LAB_1411a558c:
              lVar8 = 0;
            }
            else {
              cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
              if (cVar4 == '\0') goto LAB_1411a558c;
              uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar8 = FUN_144aff482(uVar6,plVar12);
            }
            *(longlong *)(lVar7 + 0xb0) = lVar8;
          }
        }
        plVar12 = (longlong *)(lVar8 + 0x18);
      }
      plVar3 = local_120;
      plVar2 = (longlong *)*plVar12;
      if (local_120 != plVar2) {
        local_120 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      local_118 = (undefined4)plVar12[1];
      local_ec = *(undefined1 *)(lVar7 + 0xd8);
      local_f0 = *(undefined4 *)(lVar7 + 0xdc);
      local_15c = *(undefined1 *)(lVar7 + 0x60);
      FUN_144a787a6(local_100,lVar7 + 200);
      FUN_14120969a(param_1,local_198,&local_168);
      if (local_188[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_140989dc4(&local_168);
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1411a50d7:
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a5592 FUN_1411a5592 body=248 status=ok
// SIG undefined FUN_1411a5592(void)

ulonglong FUN_1411a5592(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined7 uVar9;
  
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar4 = FUN_14073f72a();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
  }
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if (param_1[2] != 0) goto LAB_1411a5627;
  if ((*param_1 != 0) && (lVar5 != 0)) {
    plVar6 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 == '\0')) {
      param_1[2] = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar5 = FUN_144aff482(uVar4,param_1);
      param_1[2] = lVar5;
      if (lVar5 != 0) goto LAB_1411a5627;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
LAB_1411a5631:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0x2c) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1411a5631;
      uVar4 = *puVar7;
    }
  }
  plVar6 = (longlong *)FUN_14054e771(uVar4);
  if (plVar6 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  uVar8 = CONCAT71(uVar9,plVar6 != (longlong *)0x0 & bVar2);
LAB_1411a5627:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1411a568a FUN_1411a568a body=553 status=ok
// SIG undefined FUN_1411a568a(void)

longlong FUN_1411a568a(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar4 = FUN_14073f72a();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
  }
  lVar6 = param_1[2];
  if (lVar6 != 0) {
LAB_1411a5794:
    if (lVar5 == 0) {
      uVar4 = FUN_14073f72a();
      lVar5 = FUN_14477b664(uVar4);
      param_1[1] = lVar5;
      lVar6 = param_1[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_1 != 0)) {
        plVar3 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar6 = FUN_144aff482(uVar4,param_1);
        }
        param_1[2] = lVar6;
      }
    }
    lVar5 = *(longlong *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      uVar4 = FUN_14050c9fe();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x38) = lVar5;
    }
    if (*(longlong *)(lVar6 + 0x40) != 0) {
      return *(longlong *)(lVar6 + 0x40);
    }
    if (lVar5 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 0x30) != 0) {
      plVar3 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x30));
      }
      *(longlong *)(lVar6 + 0x40) = lVar5;
      return lVar5;
    }
    return 0;
  }
  if ((*param_1 != 0) && (lVar5 != 0)) {
    plVar3 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
      param_1[2] = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar6 = FUN_144aff482(uVar4,param_1);
      param_1[2] = lVar6;
      if (lVar6 != 0) {
        lVar5 = param_1[1];
        goto LAB_1411a5794;
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 5);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411a56fc;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)((longlong)param_1 + 0x2c) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar7;
      goto LAB_1411a56fc;
    }
  }
  uVar4 = 0;
LAB_1411a56fc:
  plVar3 = (longlong *)FUN_14054e771(uVar4);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
  lVar5 = FUN_14061177a(uVar4);
  return lVar5;
}



// FUNCTION 1411a58b4 FUN_1411a58b4 body=360 status=ok
// SIG undefined FUN_1411a58b4(void)

undefined8 FUN_1411a58b4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = (int)param_2[1];
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    uVar10 = 0;
    if (0 < iVar2) {
      if (iVar1 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_2;
      }
      lVar7 = 0;
      uVar10 = 0;
      do {
        uVar4 = ((uint)(ushort)puVar8[lVar7] + (uint)(0x19 < (ushort)puVar8[lVar7] - 0x61) * 0x20) -
                0x20;
        uVar10 = uVar10 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar4) & 0xff) * 4);
        uVar10 = uVar10 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
        lVar7 = lVar7 + 1;
      } while (iVar2 != (int)lVar7);
    }
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar9 + ((longlong)(int)uVar10 & (longlong)(int)param_1[9] - 1U) * 4
                    );
    if (iVar2 != -1) {
LAB_1411a5986:
      plVar9 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
      if ((int)plVar9[1] == iVar1) {
        if (1 < iVar1) {
          lVar7 = 0;
          do {
            uVar3 = *(ushort *)(*plVar9 + lVar7);
            uVar5 = (ulonglong)uVar3;
            uVar6 = *(ushort *)(*param_2 + lVar7);
            if (uVar3 == uVar6) {
              if (uVar3 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar3)) goto LAB_1411a5a04;
              uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar11 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar11]) goto LAB_1411a5a04;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        goto LAB_1411a59ea;
      }
      if ((int)plVar9[1] + iVar1 == 1) goto LAB_1411a59ea;
      goto LAB_1411a5a0a;
    }
  }
  return 0;
LAB_1411a5a04:
  if (uVar3 == uVar6) {
LAB_1411a59ea:
    FUN_1411a5a1c(param_1,iVar2);
    return 1;
  }
LAB_1411a5a0a:
  iVar2 = (int)plVar9[2];
  if (iVar2 == -1) {
    return 0;
  }
  goto LAB_1411a5986;
}



// FUNCTION 1411a5a1c FUN_1411a5a1c body=91 status=ok
// SIG undefined FUN_1411a5a1c(void)

void FUN_1411a5a1c(longlong *param_1,int param_2)

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
  FUN_1411a5a78(param_1,param_2,1);
  return;
}



// FUNCTION 1411a5a78 FUN_1411a5a78 body=83 status=ok
// SIG undefined FUN_1411a5a78(void)

void FUN_1411a5a78(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x18);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140e83386(param_1,param_2,param_3);
  return;
}



// FUNCTION 1411a5acc FUN_1411a5acc body=116 status=ok
// SIG undefined FUN_1411a5acc(void)

undefined8 FUN_1411a5acc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(char *)(param_1 + 0x1988) != '\x01') || (*(longlong *)(param_1 + 0x1990) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1990) + 0x428), lVar1 == 0)) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x658) == 0) {
    if ((DAT_14c950c29 != '\x01') || (*(longlong *)(lVar1 + 0x660) == 0)) {
      if (*(longlong *)(lVar1 + 0x660) == 0) {
        return 0;
      }
      goto LAB_1411a5b0a;
    }
  }
  else if (DAT_14c950c29 != '\x01') goto LAB_1411a5b0a;
  FUN_1456cec3c();
LAB_1411a5b0a:
  uVar2 = FUN_1411a5b40(param_1);
  return uVar2;
}



// FUNCTION 1411a5b40 FUN_1411a5b40 body=237 status=ok
// SIG undefined FUN_1411a5b40(void)

ulonglong FUN_1411a5b40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = FUN_143f7e672();
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  else {
    local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x18);
    FUN_1400021e4(&local_40,local_50);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < *(int *)(param_1 + 0x9d0)) {
      lVar5 = 0;
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x9c8);
        lVar2 = *(longlong *)(lVar1 + lVar5);
        if ((((lVar2 == 0) || (lVar4 = FUN_1411f69f0(), lVar4 == 0)) ||
            (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30 || (*(longlong *)(lVar1 + lVar5) == 0)) ||
            (*(longlong *)(lVar1 + 8 + lVar5) == 0)))) {
          uVar6 = 0;
          break;
        }
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x28;
      } while (lVar7 < *(int *)(param_1 + 0x9d0));
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1411a5c2e FUN_1411a5c2e body=316 status=ok
// SIG undefined FUN_1411a5c2e(void)

longlong FUN_1411a5c2e(longlong param_1)

{
  longlong lVar1;
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
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 != 0) {
    if (DAT_14cad2858 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146395584;
      local_38 = &LAB_147a0ba80;
      local_40 = &LAB_14575ccce;
      local_48 = L"Engine";
      local_50 = 0x40000000000;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      lVar3 = *(longlong *)(param_1 + 0x110);
      if (lVar3 == 0) goto LAB_1411a5d64;
    }
    lVar2 = 0;
    if ((DAT_14cad2858 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_1411a5c94;
    if (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
          == DAT_14cad2858 + 0x30) {
        lVar2 = lVar3;
      }
      goto LAB_1411a5c94;
    }
  }
LAB_1411a5d64:
  lVar2 = 0;
LAB_1411a5c94:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1411a5d6c FUN_1411a5d6c body=228 status=ok
// SIG undefined FUN_1411a5d6c(void)

longlong FUN_1411a5d6c(void)

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
  if (DAT_14cb99540 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1462ac436;
    local_38 = &LAB_148ad2960;
    local_40 = &LAB_145d18d72;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0xd30;
    FUN_14081cfa3(L"/Script/ChaosVehicles",L"VehicleAnimationInstance",&DAT_14cb99540,FUN_14658d82c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99540;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a5e52 FUN_1411a5e52 body=187 status=ok
// SIG undefined FUN_1411a5e52(void)

void FUN_1411a5e52(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1411a5ef5;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1411a5ef5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1411a5f0e FUN_1411a5f0e body=149 status=ok
// SIG undefined FUN_1411a5f0e(void)

void FUN_1411a5f0e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*plVar1 == param_2) {
          iVar3 = *(int *)((longlong)plVar4 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4);
          if (iVar3 == iVar2) {
            piVar5 = (int *)((longlong)plVar4 + (longlong)*(int *)((longlong)plVar1 + 0x14) * 4);
          }
          else {
            do {
              piVar5 = (int *)(*param_1 + (longlong)iVar3 * 0x18 + 0x10);
              iVar3 = *piVar5;
            } while (iVar3 != iVar2);
          }
          *piVar5 = (int)plVar1[2];
          FUN_1411a5fa4(param_1,iVar2);
          return;
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1411a5fa4 FUN_1411a5fa4 body=116 status=ok
// SIG undefined FUN_1411a5fa4(void)

void FUN_1411a5fa4(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1411a6018 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1411a601e FUN_1411a601e body=237 status=ok
// SIG undefined FUN_1411a601e(void)

undefined8 FUN_1411a601e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    FUN_1411a6440(*(longlong *)(param_1 + 0xd60),param_3);
  }
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FUN_1411a610c(*(longlong *)(param_1 + 0xc30),param_2,param_3,0);
  }
  pbVar1 = (byte *)*param_3;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = &DAT_14cb71598;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)((longlong)local_24 * 0x40 + *(longlong *)(lVar2 + 0x18) + 0x28);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 1) & 2) == 0)) {
      pcVar3 = "false";
      if (*(char *)(param_1 + 0xd68) != '\0') {
        pcVar3 = "true";
      }
      FUN_140126aca(lVar2,pcVar3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a610c FUN_1411a610c body=818 status=ok
// SIG undefined FUN_1411a610c(void)

undefined8 FUN_1411a610c(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    FUN_14009b010(&local_88,3,0);
    FUN_1446dcc2e(param_3,&local_88);
    plVar6 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
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
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  local_d0 = param_3;
  FUN_14009b010(&local_98,3,0);
  iVar4 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
    lVar8 = 0;
    do {
      local_a8 = *(undefined8 *)(lVar5 + lVar8);
      local_a0 = *(undefined4 *)(lVar5 + 8 + lVar8);
      FUN_1448075d0(&local_88,&local_a8);
      if (DAT_14cb758b8 == 0) {
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar7 = FUN_144837462(DAT_14cb758b8,&local_88);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x41) == param_4)) {
          puVar3 = (undefined8 *)(lVar5 + lVar8);
          local_b8 = 0;
          plStack_b0 = (longlong *)0x0;
          FUN_14009b010(&local_b8,1,0);
          if (*(char *)(lVar7 + 0x48) == '\x01') {
            if ((local_b8 != 0) && ((*(byte *)(local_b8 + 1) & 2) == 0)) {
              FUN_140126aca(local_b8,"shift");
            }
          }
          else if (local_b8 != 0) {
            FUN_140bc3dfa(local_b8,puVar3[2]);
          }
          local_c8 = *puVar3;
          local_c0 = *(undefined4 *)(puVar3 + 1);
          FUN_1448075d0(&local_88,&local_c8);
          if (local_98 != 0) {
            local_d8 = 0;
            FUN_14014191c(local_98,&local_88,&local_b8,0);
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          plVar6 = plStack_b0;
          if (plStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_b0)(plStack_b0);
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
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar8);
  }
  plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cb76468);
  local_b8 = DAT_14cb76460;
  FUN_1448075d0(&local_88);
  if (*local_d0 != 0) {
    local_d8 = 0;
    FUN_14014191c(*local_d0,&local_88,&local_98,0);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  plVar6 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1411a6440 FUN_1411a6440 body=2216 status=ok
// SIG undefined FUN_1411a6440(void)

byte FUN_1411a6440(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  byte *local_b8;
  longlong *plStack_b0;
  byte *local_a8;
  longlong *plStack_a0;
  byte *local_98;
  longlong *plStack_90;
  undefined4 local_80;
  int local_7c;
  byte *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) == 0)) {
    FUN_14009b010(param_2,3,0);
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar4 = 0;
  }
  else {
    local_98 = (byte *)0x0;
    plStack_90 = (longlong *)0x0;
    FUN_14009b010(&local_98,2,0);
    puVar7 = &DAT_14c9a1270;
    if ((local_98 != (byte *)0x0) && ((*local_98 & 2) != 0)) {
      puVar7 = *(undefined8 **)(local_98 + 8);
    }
    iVar5 = *(int *)(param_1 + 0x80);
    if (iVar5 < 0) {
LAB_1411a6cba:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (*(int *)((longlong)puVar7 + 0x14) < iVar5) {
      FUN_14009b4be();
      iVar5 = *(int *)(param_1 + 0x80);
    }
    if (iVar5 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x78);
      lVar11 = (longlong)iVar5 << 3;
      do {
        local_78 = (byte *)0x0;
        plStack_70 = (longlong *)0x0;
        FUN_14009b010(&local_78,1,0);
        if (local_78 != (byte *)0x0) {
          FUN_1401269d0(local_78,lVar10);
        }
        if (local_98 != (byte *)0x0) {
          local_f8 = local_f8 & 0xffffff00;
          FUN_140141db6(local_98,&local_78,0,0);
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
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    if (*param_2 == 0) {
      uVar4 = 0;
    }
    else {
      local_f8 = local_f8 & 0xffffff00;
      uVar4 = FUN_14014191c(*param_2,&DAT_14cb8a360,&local_98,0);
    }
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
  local_a8 = (byte *)0x0;
  plStack_a0 = (longlong *)0x0;
  FUN_14009b010(&local_a8,2,0);
  puVar7 = &DAT_14c9a1270;
  if ((local_a8 != (byte *)0x0) && ((*local_a8 & 2) != 0)) {
    puVar7 = *(undefined8 **)(local_a8 + 8);
  }
  iVar5 = *(int *)(param_1 + 0x90);
  iVar8 = *(int *)(param_1 + 0xa0) + iVar5;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  local_d4 = uVar4;
  local_c8 = param_2;
  if (*(int *)((longlong)puVar7 + 0x14) < iVar8) {
    FUN_14009b4be();
    iVar5 = *(int *)(param_1 + 0x90);
  }
  local_d0 = param_1;
  if (iVar5 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x88);
    local_c0 = (longlong)iVar5 * 0x50 + lVar10;
    do {
      local_b8 = (byte *)0x0;
      plStack_b0 = (longlong *)0x0;
      FUN_14009b010(&local_b8,3,0);
      if ((local_b8 == (byte *)0x0) || ((~*local_b8 & 3) != 0)) {
        FUN_14009b010(&local_b8,3,0);
      }
      lVar11 = *(longlong *)(lVar10 + 8);
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      FUN_14021300e(&local_78,0x7b2,1,1);
      lVar11 = lVar11 - (longlong)local_78;
      if (local_b8 != (byte *)0x0) {
        bVar6 = *local_b8;
        if ((~bVar6 & 3) == 0) {
          lVar12 = *(longlong *)(local_b8 + 8);
          local_7c = 1;
          local_78 = &DAT_14cb8a130;
          plStack_70 = (longlong *)&local_7c;
          FUN_14049fede(lVar12 + 0x18,&local_98,&local_78,0);
          lVar12 = *(longlong *)
                    (*(longlong *)(lVar12 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
          if (lVar12 != 0) {
            FUN_14061dc9e(lVar12,lVar11 / 10000000);
          }
          if (local_b8 == (byte *)0x0) goto LAB_1411a69f7;
          bVar6 = *local_b8;
        }
        if ((~bVar6 & 3) == 0) {
          lVar11 = *(longlong *)(local_b8 + 8);
          local_7c = 1;
          local_78 = &DAT_14cb8a158;
          plStack_70 = (longlong *)&local_7c;
          FUN_14049fede(lVar11 + 0x18,&local_98,&local_78,0);
          lVar11 = *(longlong *)
                    (*(longlong *)(lVar11 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
          if (lVar11 != 0) {
            FUN_1404a8912(lVar11,*(undefined4 *)(lVar10 + 0x10));
          }
          if (local_b8 == (byte *)0x0) goto LAB_1411a69f7;
          bVar6 = *local_b8;
        }
        if ((~bVar6 & 3) == 0) {
          lVar11 = *(longlong *)(local_b8 + 8);
          local_7c = 1;
          local_78 = &DAT_14cb8a180;
          plStack_70 = (longlong *)&local_7c;
          FUN_14049fede(lVar11 + 0x18,&local_98,&local_78,0);
          lVar11 = *(longlong *)
                    (*(longlong *)(lVar11 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
          if (lVar11 != 0) {
            FUN_1406111c2(lVar11,*(undefined4 *)(lVar10 + 0x14));
          }
          local_98 = *(byte **)(lVar10 + 0x18);
          if (local_b8 == (byte *)0x0) goto LAB_1411a69f7;
        }
        else {
          local_98 = *(byte **)(lVar10 + 0x18);
        }
        if ((~*local_b8 & 3) == 0) {
          lVar11 = *(longlong *)(local_b8 + 8);
          local_80 = 1;
          local_78 = &DAT_14cb8a1a8;
          plStack_70 = (longlong *)&local_80;
          FUN_14049fede(lVar11 + 0x18,&local_7c,&local_78,0);
          lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x28 + (longlong)local_7c * 0x40);
          if (lVar11 != 0) {
            FUN_1401269d0(lVar11,&local_98);
          }
          if (local_b8 == (byte *)0x0) goto LAB_1411a69f7;
        }
        bVar6 = *local_b8;
        if ((~bVar6 & 3) == 0) {
          lVar11 = *(longlong *)(local_b8 + 8);
          local_7c = 1;
          local_78 = &DAT_14cb8a1f8;
          plStack_70 = (longlong *)&local_7c;
          FUN_14049fede(lVar11 + 0x18,&local_98,&local_78,0);
          lVar11 = *(longlong *)
                    (*(longlong *)(lVar11 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
          if (lVar11 != 0) {
            FUN_1401269d0(lVar11,lVar10 + 0x40);
          }
          if (local_b8 == (byte *)0x0) goto LAB_1411a69f7;
          bVar6 = *local_b8;
        }
        if ((~bVar6 & 3) == 0) {
          lVar11 = *(longlong *)(local_b8 + 8);
          local_7c = 1;
          local_78 = &DAT_14cb8a220;
          plStack_70 = (longlong *)&local_7c;
          FUN_14049fede(lVar11 + 0x18,&local_98,&local_78,0);
          lVar11 = *(longlong *)
                    (*(longlong *)(lVar11 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
          if ((lVar11 != 0) && ((*(byte *)(lVar11 + 1) & 2) == 0)) {
            pcVar9 = "false";
            if (*(char *)(lVar10 + 0x48) != '\0') {
              pcVar9 = "true";
            }
            FUN_140126aca(lVar11,pcVar9);
          }
        }
      }
LAB_1411a69f7:
      if (*(int *)(lVar10 + 0x38) != 0) {
        local_78 = (byte *)0x0;
        plStack_70 = (longlong *)0x0;
        FUN_14009b010(&local_78,2,0);
        puVar7 = &DAT_14c9a1270;
        if ((local_78 != (byte *)0x0) && (puVar7 = &DAT_14c9a1270, (*local_78 & 2) != 0)) {
          puVar7 = *(undefined8 **)(local_78 + 8);
        }
        iVar5 = *(int *)(lVar10 + 0x38);
        if (iVar5 < 0) goto LAB_1411a6cba;
        if (*(int *)((longlong)puVar7 + 0x14) < iVar5) {
          FUN_14009b4be();
          iVar5 = *(int *)(lVar10 + 0x38);
        }
        if (iVar5 != 0) {
          lVar11 = *(longlong *)(lVar10 + 0x30);
          lVar12 = (longlong)iVar5 * 0x18;
          do {
            local_98 = (byte *)0x0;
            plStack_90 = (longlong *)0x0;
            FUN_14009b010(&local_98,3,0);
            FUN_1418a5cba(lVar11,&local_98);
            if (local_78 != (byte *)0x0) {
              local_f8 = local_f8 & 0xffffff00;
              FUN_140141db6(local_78,&local_98,0,0);
            }
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
            lVar11 = lVar11 + 0x18;
            lVar12 = lVar12 + -0x18;
          } while (lVar12 != 0);
        }
        if (local_b8 != (byte *)0x0) {
          local_f8 = local_f8 & 0xffffff00;
          FUN_14014191c(local_b8,&DAT_14cb8a1d0,&local_78,0);
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
      }
      if (local_a8 != (byte *)0x0) {
        local_f8 = local_f8 & 0xffffff00;
        FUN_140141db6(local_a8,&local_b8,0,0);
      }
      plVar3 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar10 = lVar10 + 0x50;
    } while (lVar10 != local_c0);
  }
  plVar3 = local_c8;
  if ((longlong)*(int *)(local_d0 + 0xa0) != 0) {
    lVar10 = *(longlong *)(local_d0 + 0x98);
    lVar11 = (longlong)*(int *)(local_d0 + 0xa0) << 4;
    do {
      if (local_a8 != (byte *)0x0) {
        local_f8 = local_f8 & 0xffffff00;
        FUN_140141db6(local_a8,lVar10,0,0);
      }
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  puVar7 = &DAT_14c9a1270;
  if ((local_a8 != (byte *)0x0) && ((*local_a8 & 2) != 0)) {
    puVar7 = *(undefined8 **)(local_a8 + 8);
  }
  iVar5 = *(int *)(puVar7 + 2);
  if ((iVar5 != 0) && (*plVar3 != 0)) {
    local_f8 = local_f8 & 0xffffff00;
    FUN_14014191c(*plVar3,&DAT_14cb8a388,&local_a8,0);
  }
  plVar3 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (byte)local_d4 | iVar5 != 0;
}



// FUNCTION 1411a6cea FUN_1411a6cea body=433 status=ok
// SIG undefined FUN_1411a6cea(void)

void FUN_1411a6cea(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
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
      local_1c = (undefined4)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411a6e9c(param_1,local_1c);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a6e9c FUN_1411a6e9c body=309 status=ok
// SIG undefined FUN_1411a6e9c(void)

void FUN_1411a6e9c(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  double dVar6;
  
  if ((*(float *)(param_1 + 0x1158) != param_2) ||
     (NAN(*(float *)(param_1 + 0x1158)) || NAN(param_2))) {
    if (*(char *)(param_1 + 0x1160) != '\0') {
      dVar6 = (double)param_2;
      *(double *)(param_1 + 0x1168) = *(double *)(param_1 + 0x1168) * dVar6;
      *(double *)(param_1 + 0x1170) = *(double *)(param_1 + 0x1170) * dVar6;
      *(double *)(param_1 + 0x1178) = dVar6 * *(double *)(param_1 + 0x1178);
      bVar3 = *(char *)(param_1 + 0x1160) + 1;
      bVar5 = 1;
      if (1 < bVar3) {
        bVar5 = bVar3;
      }
      *(byte *)(param_1 + 0x1160) = bVar5;
    }
    *(float *)(param_1 + 0x1158) = param_2;
    lVar1 = *(longlong *)(param_1 + 0xe38);
    if (lVar1 != 0) {
      *(float *)(lVar1 + 0x178) = param_2 * *(float *)(lVar1 + 0x178);
      *(float *)(*(longlong *)(param_1 + 0xe38) + 0x17c) =
           *(float *)(param_1 + 0x1158) * *(float *)(*(longlong *)(param_1 + 0xe38) + 0x17c);
      FUN_1411a6fd2(*(undefined8 *)(param_1 + 0xe38),*(undefined4 *)(param_1 + 0x1158));
      if (*(longlong *)(param_1 + 0xe38) != 0) {
        lVar4 = FUN_140b3d448();
        lVar1 = *(longlong *)(param_1 + 0xe38);
        if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
           ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)))) {
          *(float *)(lVar1 + 0x524) = *(float *)(lVar1 + 0x524) * *(float *)(param_1 + 0x1158);
        }
      }
    }
  }
  return;
}



// FUNCTION 1411a6fd2 FUN_1411a6fd2 body=199 status=ok
// SIG undefined FUN_1411a6fd2(void)

void FUN_1411a6fd2(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar3 = (double)param_2;
  param_1[0x25] = (longlong)((double)param_1[0x25] * dVar3);
  param_1[0x26] = (longlong)((double)param_1[0x26] * dVar3);
  param_1[0x27] = (longlong)(dVar3 * (double)param_1[0x27]);
  (**(code **)(*param_1 + 0x4d0))();
  plVar1 = (longlong *)param_1[0x23];
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
    if (cVar2 != '\0') {
      local_18 = param_1[0x27];
      local_28 = param_1[0x25];
      lStack_20 = param_1[0x26];
      (**(code **)(*(longlong *)param_1[0x23] + 0x6f8))((longlong *)param_1[0x23],&local_28,0,0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a709a FUN_1411a709a body=93 status=ok
// SIG undefined FUN_1411a709a(void)

undefined8 * FUN_1411a709a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140946c22(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1411a7228(param_1,iVar1);
      FUN_1411a70f7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1411a70f7 FUN_1411a70f7 body=304 status=ok
// SIG undefined FUN_1411a70f7(void)

void FUN_1411a70f7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      *(undefined8 *)(param_1 + lVar10) = *(undefined8 *)(param_2 + lVar10);
      puVar2 = (undefined4 *)(param_2 + 8 + lVar10);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(param_1 + 8 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(undefined8 *)(param_1 + 0x18 + lVar10) = 0;
      iVar5 = *(int *)(param_2 + 0x20 + lVar10);
      _Src = *(void **)(param_2 + 0x18 + lVar10);
      *(int *)(param_1 + 0x20 + lVar10) = iVar5;
      if ((longlong)iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x24 + lVar10) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 0x18 + lVar10,iVar5,0);
        memcpy(*(void **)(param_1 + 0x18 + lVar10),_Src,(longlong)iVar5 * 2);
      }
      lVar1 = param_2 + lVar10;
      *(undefined4 *)(param_1 + 0x28 + lVar10) = *(undefined4 *)(lVar1 + 0x28);
      puVar4 = (undefined8 *)(param_1 + 0x30 + lVar10);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)(param_1 + 0x40 + lVar10) = 0;
      *(undefined8 *)(param_1 + 0x30 + lVar10) = *(undefined8 *)(lVar1 + 0x30);
      uVar9 = FUN_14477b664(*(undefined8 *)(lVar1 + 0x38));
      uVar9 = FUN_14477b664(uVar9);
      *(undefined8 *)(param_1 + 0x38 + lVar10) = uVar9;
      *(undefined8 *)(param_1 + 0x40 + lVar10) = *(undefined8 *)(lVar1 + 0x40);
      uVar9 = *(undefined8 *)(lVar1 + 0x50);
      puVar4 = (undefined8 *)(param_1 + 0x48 + lVar10);
      *puVar4 = *(undefined8 *)(lVar1 + 0x48);
      puVar4[1] = uVar9;
      *(undefined8 *)(param_1 + 0x58 + lVar10) = *(undefined8 *)(lVar1 + 0x58);
      *(undefined4 *)(param_1 + 0x60 + lVar10) = *(undefined4 *)(lVar1 + 0x60);
      *(undefined8 *)(param_1 + 0x68 + lVar10) = 0;
      *(undefined4 *)(param_1 + 0x70 + lVar10) = *(undefined4 *)(lVar1 + 0x70);
      lVar10 = lVar10 + 0x78;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1411a7228 FUN_1411a7228 body=330 status=ok
// SIG undefined FUN_1411a7228(void)

void FUN_1411a7228(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x78;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411a7296;
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
LAB_1411a7296:
    iVar5 = (int)(uVar4 / 0x78);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x78,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1411a7372 FUN_1411a7372 body=515 status=ok
// SIG undefined FUN_1411a7372(void)

longlong * FUN_1411a7372(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x1b8);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x1b0);
    if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x1a0);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar6 = 0;
      do {
        if (uVar12 == uVar14) {
          return param_2;
        }
        iVar6 = iVar6 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar6 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 400) + 8 + (longlong)iVar7 * 0x20);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x10 + (longlong)iVar7 * 0x20);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1411a7576(param_2,iVar2);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + (longlong)iVar2 * 0x10) = uVar3;
      *(longlong *)(lVar5 + 8 + (longlong)iVar2 * 0x10) = lVar8;
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar4 = *(uint **)(param_1 + 0x1b0);
      if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x1a0);
      }
      iVar2 = *(int *)(param_1 + 0x1b8);
      iVar7 = (int)uVar14;
      lVar8 = (longlong)iVar7;
      uVar11 = puVar4[lVar8] & uVar13;
      if (uVar11 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) {
          return param_2;
        }
        lVar5 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar11 = puVar4[lVar8 + lVar5 + 1];
          if (uVar11 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar10 - lVar8 == lVar5) {
            return param_2;
          }
        }
        uVar14 = (ulonglong)(iVar7 + (int)lVar5 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar12 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
  return param_2;
}



// FUNCTION 1411a7576 FUN_1411a7576 body=269 status=ok
// SIG undefined FUN_1411a7576(void)

void FUN_1411a7576(longlong param_1,int param_2)

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



// FUNCTION 1411a7684 FUN_1411a7684 body=2944 status=ok
// SIG undefined FUN_1411a7684(void)

void FUN_1411a7684(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined2 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined2 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStack_228 [32];
  undefined2 *local_208;
  undefined2 *local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  uint *local_1e0;
  undefined8 *local_1d8;
  longlong *local_1d0;
  longlong local_1c8 [2];
  undefined8 *local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined2 *local_198;
  int local_190;
  undefined2 *local_188;
  int local_180;
  longlong local_178;
  void *local_170;
  int local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined8 *local_108;
  int local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong uStack_e0;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar10 = FUN_141424e9e(*(undefined8 *)(param_1 + 0x38));
  if (lVar10 == 0) {
    if (*param_4 != 0 && (int)param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_228);
    }
    goto LAB_1411a80cb;
  }
  uVar5 = *(undefined1 *)(param_1 + 0xe0);
  local_1f0 = lVar10;
  FUN_1408f45ee(&local_1a8,param_2);
  local_1e8 = *(longlong *)(param_1 + 0x38);
  local_170 = (void *)0x0;
  local_168 = *(int *)(param_3 + 1);
  lVar10 = (longlong)local_168;
  pvVar7 = (void *)*param_3;
  local_178 = param_1;
  if (lVar10 == 0) {
    local_164 = 0;
  }
  else {
    FUN_1446dd670(&local_170,local_168,0);
    memcpy(local_170,pvVar7,lVar10 * 2);
  }
  local_160 = *(undefined1 *)(param_3 + 2);
  local_1d0 = param_3 + 3;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_140c39ec6();
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  FUN_141532ff6(&local_108,param_4);
  local_f8 = local_1a8;
  local_f0 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
    UNLOCK();
  }
  local_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  FUN_1446efa72(&local_1b8,0,0xb,0x10);
  pvVar7 = local_170;
  puVar22 = local_1b8;
  local_1b0 = 0xb;
  *local_1b8 = &PTR_LAB_14b507400;
  LOCK();
  UNLOCK();
  lVar15 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar15 == 0) {
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_1b8[2] = lVar15;
  *local_1b8 = &PTR_FUN_14ba3ec40;
  local_1b8[3] = local_178;
  local_1b8[4] = 0;
  lVar10 = (longlong)local_168;
  *(int *)(local_1b8 + 5) = local_168;
  if (lVar10 == 0) {
    *(undefined4 *)((longlong)local_1b8 + 0x2c) = 0;
  }
  else {
    puVar4 = local_1b8 + 4;
    FUN_1446dd670(puVar4,local_168,0);
    memcpy((void *)*puVar4,pvVar7,lVar10 * 2);
  }
  *(undefined1 *)(puVar22 + 6) = local_160;
  puVar22[0xb] = 0;
  *(undefined4 *)(puVar22 + 0xc) = 0;
  puVar22[7] = 0;
  puVar22[8] = 0;
  *(undefined8 *)((longlong)puVar22 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar22 + 0x6c) = 0;
  puVar22[0xf] = 0;
  *(undefined4 *)(puVar22 + 0x10) = 0;
  FUN_140c39ec6(puVar22 + 7,&local_158);
  puVar22[0x11] = 0;
  *(undefined4 *)(puVar22 + 0x12) = 0;
  FUN_141532ff6(puVar22 + 0x11,&local_108);
  puVar22[0x13] = local_f8;
  puVar22[0x14] = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  puVar20 = &DAT_149dfb77a;
  FUN_140056680(&local_a8,&DAT_149dfb77a);
  FUN_140002266(&local_e8,L"state:%u,",*(undefined1 *)(param_3 + 2));
  iVar21 = (int)uStack_e0 + -1;
  if ((int)uStack_e0 == 0) {
    iVar21 = 0;
  }
  FUN_1400020e8(local_1c8,local_e8,iVar21);
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar20 = (undefined2 *)*param_3;
  }
  FUN_140002266(&local_e8,L"status_str:%s,",puVar20);
  iVar21 = (int)uStack_e0 + -1;
  if ((int)uStack_e0 == 0) {
    iVar21 = 0;
  }
  FUN_1400020e8(local_1c8,local_e8,iVar21);
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_e8,L"joinable:%u,",uVar5);
  iVar21 = (int)uStack_e0 + -1;
  if ((int)uStack_e0 == 0) {
    iVar21 = 0;
  }
  FUN_1400020e8(local_1c8,local_e8,iVar21);
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = *(uint *)(param_3 + 8);
  if (uVar6 == 0) {
    uVar25 = 1;
    uVar18 = 0;
    uVar9 = 0;
    iVar21 = 0;
  }
  else {
    puVar11 = (uint *)param_3[7];
    if ((uint *)param_3[7] == (uint *)0x0) {
      puVar11 = (uint *)(param_3 + 5);
    }
    uVar9 = *puVar11;
    if (uVar9 == 0) {
      iVar21 = uVar6 + 0x1e;
      if (-1 < (int)(uVar6 - 1)) {
        iVar21 = uVar6 - 1;
      }
      uVar18 = 0;
      uVar25 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar25 = uVar18;
      }
      iVar21 = 0;
      do {
        if (uVar25 == uVar18) goto LAB_1411a7c8c;
        iVar21 = iVar21 + 0x20;
        uVar9 = puVar11[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar18 = 0;
      iVar21 = 0;
    }
    uVar25 = (ulonglong)(-uVar9 & uVar9);
    uVar3 = uVar25 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar9 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)uVar6 <= (int)uVar9) {
      uVar9 = uVar6;
    }
  }
  if (uVar9 != uVar6) {
    uVar19 = 0xffffffff;
    local_1f8 = (ulonglong)uVar6;
    local_1e0 = (uint *)(param_3 + 5);
    local_1d8 = param_3;
    do {
      lVar10 = *local_1d0;
      lVar15 = (longlong)(int)uVar9 * 0x38;
      lVar24 = lVar10 + lVar15 + 0x10;
      FUN_1418b4f8a(lVar24,&local_188);
      puVar20 = &DAT_149dfb77a;
      if (local_180 != 0) {
        puVar20 = local_188;
      }
      FUN_140b74056(lVar24,&local_198);
      local_208 = &DAT_149dfb77a;
      if (local_190 != 0) {
        local_208 = local_198;
      }
      puVar23 = &DAT_149dfb77a;
      if (*(int *)(lVar10 + 8 + lVar15) != 0) {
        puVar23 = *(undefined2 **)(lVar10 + lVar15);
      }
      puVar22 = (undefined8 *)&DAT_149dfb77a;
      if ((int)local_a0 != 0) {
        puVar22 = local_a8;
      }
      local_200 = puVar20;
      FUN_140002266(&local_e8,L"%sproperty.%s:%s%s",puVar22,puVar23);
      iVar17 = (int)uStack_e0 + -1;
      if ((int)uStack_e0 == 0) {
        iVar17 = 0;
      }
      FUN_1400020e8(local_1c8,local_e8,iVar17);
      puVar22 = local_1d8;
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_198 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_188 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14020fad6(&local_a8,&DAT_149e06196);
      uVar19 = uVar19 & ~(uint)uVar25;
      puVar11 = (uint *)puVar22[7];
      if (puVar11 == (uint *)0x0) {
        puVar11 = local_1e0;
      }
      uVar6 = *(uint *)(puVar22 + 8);
      iVar17 = (int)uVar18;
      lVar10 = (longlong)iVar17;
      uVar9 = puVar11[lVar10] & uVar19;
      if (uVar9 == 0) {
        iVar13 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar13 = uVar6 - 1;
        }
        iVar13 = iVar13 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar17) {
          iVar14 = iVar17;
        }
        if (iVar17 < iVar13) {
          lVar15 = 0;
          do {
            uVar9 = puVar11[lVar10 + lVar15 + 1];
            if (uVar9 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar15 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1411a7c40;
            }
            iVar21 = iVar21 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar14 - lVar10 != lVar15);
          uVar19 = 0xffffffff;
          iVar17 = iVar14;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar9 = uVar6;
      }
      else {
LAB_1411a7c40:
        uVar25 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar25 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar9 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar6 <= (int)uVar9) {
          uVar9 = uVar6;
        }
      }
    } while (uVar9 != (uint)local_1f8);
  }
LAB_1411a7c8c:
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar12 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14ba3ecb0;
  plVar1 = plVar12 + 2;
  FUN_140056680(&local_188,L"ShiftSDK::Rooms::SetPresence");
  puVar20 = local_188;
  lVar10 = local_1f0;
  *(undefined4 *)(plVar12 + 3) = *(undefined4 *)(local_1f0 + 0x38);
  *(undefined1 *)((longlong)plVar12 + 0x1c) = 0;
  plVar12[2] = (longlong)&PTR_FUN_14ba3ed18;
  plVar12[4] = 0;
  *(int *)(plVar12 + 5) = local_180;
  if ((longlong)local_180 == 0) {
    *(undefined4 *)((longlong)plVar12 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(plVar12 + 4,local_180,0);
    memcpy((void *)plVar12[4],puVar20,(longlong)local_180 * 2);
  }
  plVar12[6] = 0;
  *(undefined4 *)(plVar12 + 7) = 0;
  FUN_1418bf9e8(plVar12 + 6,&local_1b8);
  plVar12[8] = 0;
  plVar12[10] = 0;
  local_e8 = (undefined8 *)plVar12[8];
  local_a0 = plVar12[9];
  local_d8 = (longlong *)plVar12[10];
  uStack_90 = plVar12[0xb];
  local_88 = plVar12[0xc];
  lStack_80 = plVar12[0xd];
  local_78 = plVar12[0xe];
  uStack_70 = plVar12[0xf];
  lVar24 = local_78;
  lVar8 = uStack_70;
  local_98 = local_d8;
  lVar15 = uStack_90;
  local_a8 = local_e8;
  *(undefined4 *)(plVar12 + 0xe) = 4;
  *(ulonglong *)((longlong)plVar12 + 0x74) = CONCAT44(uStack_b0,uStack_b4);
  *(undefined4 *)((longlong)plVar12 + 0x7c) = uStack_ac;
  plVar12[0xc] = (longlong)&PTR_LAB_14ba3ed30;
  plVar12[0xd] = (longlong)plVar1;
  plVar12[10] = 0;
  plVar12[0xb] = CONCAT44(uStack_cc,uStack_d0);
  plVar12[8] = (longlong)FUN_148fa2d56;
  plVar12[9] = uStack_e0;
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = local_88;
  lStack_c0 = lStack_80;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_e0 = local_a0;
  uStack_90 = lVar15;
  local_78 = lVar24;
  uStack_70 = lVar8;
  if (local_e8 != (undefined8 *)0x0) {
    plVar16 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar16 = &local_c8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *plVar1 = (longlong)&PTR_FUN_14ba3ed08;
  local_a8 = (undefined8 *)0x0;
  local_a0 = local_a0 & 0xffffffff00000000;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = CONCAT44(local_a0._4_4_,2);
  *local_a8 = &PTR_LAB_14b507400;
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
  local_a8[2] = lVar24;
  *local_a8 = &PTR_FUN_14ba3ed50;
  local_a8[3] = plVar1;
  FUN_143ef09a6(lVar10,local_1c8,&local_a8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  plVar16 = (longlong *)(local_1e8 + 0x130);
  iVar21 = *(int *)(local_1e8 + 0x138);
  *(uint *)(local_1e8 + 0x138) = iVar21 + 1U;
  if (*(uint *)(local_1e8 + 0x13c) < iVar21 + 1U) {
    FUN_145c3a3e2(plVar16,iVar21);
  }
  lVar10 = *plVar16;
  *(longlong **)(lVar10 + (longlong)iVar21 * 0x10) = plVar1;
  *(longlong **)(lVar10 + 8 + (longlong)iVar21 * 0x10) = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
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
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1b0 == 0) {
LAB_1411a7fc5:
    if (local_1b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1b8 != (undefined8 *)0x0) {
    (**(code **)*local_1b8)(local_1b8,0);
    FUN_1446efa72(&local_1b8,0,0,0x10);
    local_1b0 = 0;
    goto LAB_1411a7fc5;
  }
  plVar1 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_f0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_100 == 0) {
LAB_1411a803e:
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_108 != (undefined8 *)0x0) {
    (**(code **)*local_108)(local_108,0);
    FUN_1446efa72(&local_108,0,0,0x10);
    local_100 = 0;
    goto LAB_1411a803e;
  }
  local_110 = 0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(&local_158);
  if (local_170 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar2 = (int *)((longlong)local_1a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1a0 + 0x10))(local_1a0);
      }
    }
  }
LAB_1411a80cb:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411a8230 FUN_1411a8230 body=83 status=ok
// SIG undefined FUN_1411a8230(void)

void FUN_1411a8230(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5847c0;
  if (*(char *)(param_1 + 8) == '\x01') {
    plVar3 = (longlong *)param_1[6];
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
    *(undefined1 *)(param_1 + 8) = 0;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1411a8284 FUN_1411a8284 body=22 status=ok
// SIG undefined FUN_1411a8284(void)

undefined8 FUN_1411a8284(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb77ec0;
  if (DAT_14cb77ec0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb77ec0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb77ec0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb77ec0[0x3a] <= *(int *)((longlong)DAT_14cb77ec0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb77ec0 + 0x300))(DAT_14cb77ec0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1411a829a FUN_1411a829a body=499 status=ok
// SIG undefined FUN_1411a829a(void)

void FUN_1411a829a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_141710108;
      local_70 = 0x1000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
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
  local_50 = local_38;
  uVar3 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar3);
  local_40 = local_28;
  FUN_1411a848e(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411a848e FUN_1411a848e body=199 status=ok
// SIG undefined FUN_1411a848e(void)

void FUN_1411a848e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x88) != 0)) &&
     (*(longlong **)(lVar3 + 0x90) != (longlong *)0x0)) {
    lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x90) + 0x10))();
    if (lVar3 != 0) {
      lVar5 = param_2[1];
      if (lVar5 == 0) {
        uVar4 = FUN_145c05732();
        lVar5 = FUN_14477b664(uVar4);
        param_2[1] = lVar5;
      }
      if (((param_2[2] == 0) && (lVar5 != 0)) && (*param_2 != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,param_2);
        }
        param_2[2] = lVar5;
      }
      FUN_14114f37e(lVar3);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 1411a8578 FUN_1411a8578 body=428 status=ok
// SIG undefined FUN_1411a8578(void)

undefined8 * FUN_1411a8578(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b600050;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = DAT_14c844848;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1411a8724 FUN_1411a8724 body=82 status=ok
// SIG undefined FUN_1411a8724(void)

void FUN_1411a8724(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1411a8776(puVar1);
  *puVar1 = &PTR_FUN_14b79b220;
  puVar1[5] = &PTR_FUN_14b79b650;
  puVar1[6] = &PTR_FUN_14b79b680;
  puVar1[0xf6] = 0;
  puVar1[0xf7] = 0;
  puVar1[0xf8] = 0;
  *(byte *)(puVar1 + 0xf9) = *(byte *)(puVar1 + 0xf9) & 0xfe;
  return;
}



// FUNCTION 1411a8776 FUN_1411a8776 body=972 status=ok
// SIG undefined FUN_1411a8776(void)

undefined8 * FUN_1411a8776(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b32afe0;
  param_1[5] = &PTR_FUN_14b32b410;
  param_1[6] = &PTR_FUN_14b32b440;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  param_1[10] = 0;
  param_1[0x12] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x200000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x4fc71eb4;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x34001;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x300200000000;
  param_1[0x3f] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x200000000;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x4fc71eb4;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x274) = 0xff00;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x57] = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x55) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar2;
  *(undefined4 *)(param_1 + 0x56) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar4;
  param_1[0x58] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x68] = 0x6bf800000;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0x400000000;
  param_1[0x73] = 0;
  param_1[0x74] = 0x400000000;
  *(undefined2 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_1405c5fa2();
  param_1[0x79] = &DAT_14cb769e8;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0x7f7fffff;
  uVar1 = DAT_14c8464e8;
  param_1[0xa7] = DAT_14c8464e0;
  param_1[0xa8] = uVar1;
  param_1[0xa9] = DAT_14c8464f0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xc0 | 4;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5af) = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  uVar1 = DAT_14c8463d8;
  param_1[0xb8] = DAT_14c8463d0;
  param_1[0xb9] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0xba] = DAT_14c8463e0;
  param_1[0xbb] = uVar1;
  param_1[0xbf] = 0xbf800000bf800000;
  uVar1 = DAT_14c8463f8;
  param_1[0xc0] = DAT_14c8463f0;
  param_1[0xc1] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0xc2] = DAT_14c8463f0;
  param_1[0xc3] = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0xc5] = DAT_14c8463f0;
  param_1[0xc6] = uVar1;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xde] = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  param_1[0xdc] = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  param_1[0xdd] = uVar1;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x794) = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xc] = 0xc2c80000ffffffff;
  *(undefined4 *)(param_1 + 0xe1) = 0x3f800000;
  param_1[0xeb] = 0;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0x943fff9f | 0x40;
  return param_1;
}



// FUNCTION 1411a8b42 FUN_1411a8b42 body=1687 status=ok
// SIG undefined FUN_1411a8b42(void)

longlong * FUN_1411a8b42(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_1;
  local_c0 = param_2;
  if (DAT_14c98e778 != DAT_14c98e7a4) {
    uVar17 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    puVar10 = &DAT_14c98e7a8;
    if (DAT_14c98e7b0 != (undefined *)0x0) {
      puVar10 = DAT_14c98e7b0;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (DAT_14c98e7b8 - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                    (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar7 >> 4)) * 4);
    while (iVar6 != -1) {
      lVar20 = DAT_14c98e770 + (longlong)iVar6 * 0x80;
      if (*(longlong *)(DAT_14c98e770 + (longlong)iVar6 * 0x80) == param_2) {
        if (lVar20 != 0) {
          local_98 = (uint *)0x0;
          local_90 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_8c = 0xffffffff00000080;
          local_84 = 0;
          local_78 = (undefined1 *)0x0;
          local_70 = 0;
          FUN_1411a9a20(&local_b8,lVar20 + 8);
          local_68 = 0;
          iVar6 = *(int *)(lVar20 + 0x60);
          uVar3 = *(undefined8 *)(lVar20 + 0x58);
          local_60 = iVar6;
          if (iVar6 == 0) {
            local_5c = 0;
          }
          else {
            FUN_1411a9520(&local_68,iVar6);
            FUN_1411a9287(local_68,uVar3,iVar6);
          }
          local_58 = *(undefined8 *)(lVar20 + 0x68);
          local_50 = *(longlong **)(lVar20 + 0x70);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          goto LAB_1411a8ca7;
        }
        break;
      }
      iVar6 = *(int *)(lVar20 + 0x78);
    }
  }
  FUN_145cfde1a();
LAB_1411a8ca7:
  lVar20 = local_68;
  if (param_4 == '\0') {
    lVar25 = *param_3;
    uVar7 = (uint)((ulonglong)lVar25 >> 0x10);
    uVar18 = (uint)lVar25 & 0xffff;
    uVar17 = *(uint *)(param_3 + 3);
    bVar16 = 1;
    lVar22 = 0;
    do {
      plVar24 = (longlong *)(lVar22 * 0x50 + lVar20);
      iVar6 = FUN_14141fe50(plVar24,uVar17 & 0xf ^
                                    ((uint)lVar25 << 0x10 | uVar18) +
                                    (int)((ulonglong)lVar25 >> 0x20) +
                                    (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4),param_3);
      if ((iVar6 == -1) || (lVar22 = (longlong)iVar6 * 0x30 + *plVar24, lVar22 == 0)) {
        uVar15 = 0;
        uVar12 = 0;
      }
      else {
        uVar15 = *(ulonglong *)(lVar22 + 0x20);
        uVar12 = uVar15 & 0xffffffff00000000;
      }
      uVar5 = uVar15 & 0xffffffff | uVar12;
      lVar22 = 1;
      bVar26 = (bool)(bVar16 & uVar5 == 0);
      bVar16 = 0;
    } while (bVar26);
    if (uVar5 == 0) goto LAB_1411a90d4;
    if ((int)uStack_b0 != local_84) {
      uVar17 = (uint)(uVar15 >> 0x10);
      uVar7 = (uint)uVar15 & 0xffff;
      puVar19 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar19 = local_80;
      }
      iVar6 = *(int *)(puVar19 +
                      (ulonglong)
                      (local_70 - 1U &
                      (int)(uVar12 >> 0x20) +
                      ((uint)uVar15 << 0x10 | uVar7) + (uVar7 >> 4) +
                      (uVar17 << 0x13 | uVar17 & 0xffff)) * 4);
      while (iVar6 != -1) {
        lVar20 = local_b8 + (longlong)iVar6 * 0x20;
        if (*(ulonglong *)(local_b8 + (longlong)iVar6 * 0x20) == uVar5) goto LAB_1411a90b7;
        iVar6 = *(int *)(lVar20 + 0x18);
      }
    }
    lVar20 = 0;
LAB_1411a90b7:
    lVar25 = *(longlong *)(lVar20 + 8);
    plVar24 = *(longlong **)(lVar20 + 0x10);
    if (plVar24 == (longlong *)0x0) {
      plVar24 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
LAB_1411a8e35:
    if (lVar25 == 0) goto LAB_1411a8e3e;
    cVar4 = FUN_1469b9bdc(local_c0,*(undefined8 *)(lVar25 + 0x68));
    plVar23 = local_d0;
    if (cVar4 == '\0') {
      *local_d0 = 0;
      local_d0[1] = 0;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar24 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      goto LAB_1411a8e4d;
    }
  }
  else {
    if (local_90 == 0) {
      uVar15 = 1;
      plVar23 = (longlong *)0x0;
      iVar6 = 0;
      iVar14 = 0;
    }
    else {
      puVar11 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar11 = local_a8;
      }
      uVar17 = *puVar11;
      if (uVar17 == 0) {
        iVar6 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar6 = local_90 + -1;
        }
        plVar24 = (longlong *)0x0;
        plVar13 = (longlong *)(ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          plVar13 = plVar24;
        }
        plVar23 = (longlong *)0x0;
        iVar14 = 0;
        do {
          if (plVar13 == plVar23) goto LAB_1411a8e3e;
          iVar14 = iVar14 + 0x20;
          uVar17 = puVar11[(longlong)plVar23 + 1];
          plVar23 = (longlong *)((longlong)plVar23 + 1);
        } while (uVar17 == 0);
      }
      else {
        plVar23 = (longlong *)0x0;
        iVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar17 & uVar17);
      uVar12 = uVar15 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (local_90 <= iVar6) {
        iVar6 = local_90;
      }
    }
    if (iVar6 < local_90) {
      uVar17 = 0xffffffff;
      plVar24 = (longlong *)0x0;
      do {
        lVar22 = (longlong)iVar6 * 0x20;
        lVar20 = *(longlong *)(local_b8 + 8 + lVar22);
        lVar25 = *param_3;
        plVar13 = (longlong *)param_3[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        plVar21 = *(longlong **)(lVar20 + 0x30);
        if ((*plVar21 == lVar25) &&
           (((*(uint *)(plVar21 + 3) ^ (uint)*(byte *)(param_3 + 3)) & 0xf) == 0)) {
          bVar26 = true;
        }
        else if ((plVar21[4] == lVar25) &&
                (uVar7 = (uint)*(byte *)(param_3 + 3) ^ *(uint *)(plVar21 + 7), (uVar7 & 7) == 0)) {
          bVar26 = (uVar7 & 8) == 0;
        }
        else {
          bVar26 = false;
        }
        plVar21 = plVar24;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar13 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            local_c8 = plVar24;
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar21 = local_c8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              plVar21 = local_c8;
            }
          }
        }
        if (bVar26) {
          lVar25 = *(longlong *)(local_b8 + 8 + lVar22);
          plVar24 = *(longlong **)(local_b8 + 0x10 + lVar22);
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
            UNLOCK();
          }
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar21 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              local_c8 = plVar21;
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar2 = (int *)((longlong)local_c8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
        }
        else {
          lVar25 = 0;
          plVar24 = plVar21;
        }
        uVar17 = uVar17 & ~(uint)uVar15;
        puVar11 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar11 = local_a8;
        }
        iVar6 = (int)plVar23;
        lVar20 = (longlong)iVar6;
        uVar7 = puVar11[lVar20] & uVar17;
        if (uVar7 == 0) {
          iVar8 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar8 = local_90 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar8 <= iVar6) goto LAB_1411a8e35;
          lVar22 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar7 = puVar11[lVar20 + lVar22 + 1];
            if (uVar7 != 0) break;
            lVar22 = lVar22 + 1;
            if (iVar9 - lVar20 == lVar22) goto LAB_1411a8e35;
          }
          plVar23 = (longlong *)(ulonglong)(iVar6 + (int)lVar22 + 1);
          uVar17 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar12 = uVar15 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar6 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((local_90 <= iVar6) || (lVar25 != 0)) goto LAB_1411a8e35;
      } while( true );
    }
LAB_1411a90d4:
    plVar24 = (longlong *)0x0;
LAB_1411a8e3e:
    lVar25 = 0;
  }
  *local_d0 = lVar25;
  local_d0[1] = (longlong)plVar24;
  plVar23 = local_d0;
LAB_1411a8e4d:
  plVar24 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_50 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  FUN_1411a9211(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1411a91da(&local_b8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar23;
}



// FUNCTION 1411a91da FUN_1411a91da body=55 status=ok
// SIG undefined FUN_1411a91da(void)

void FUN_1411a91da(longlong *param_1)

{
  FUN_1411a97f8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411a9211 FUN_1411a9211 body=63 status=ok
// SIG undefined FUN_1411a9211(void)

void FUN_1411a9211(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1411a9250(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1411a9250 FUN_1411a9250 body=55 status=ok
// SIG undefined FUN_1411a9250(void)

void FUN_1411a9250(longlong *param_1)

{
  FUN_1411a92f4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411a9287 FUN_1411a9287 body=108 status=ok
// SIG undefined FUN_1411a9287(void)

void FUN_1411a9287(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_1411a95fa(param_1,param_2);
    param_1 = param_1 + 10;
    param_2 = param_2 + 0x50;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1411a92f4 FUN_1411a92f4 body=555 status=ok
// SIG undefined FUN_1411a92f4(void)

void FUN_1411a92f4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_1411a93e5;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x30);
      if (plVar5 != (longlong *)0x0) {
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
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_1411a93e5;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_1411a93e5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1411a9520 FUN_1411a9520 body=218 status=ok
// SIG undefined FUN_1411a9520(void)

undefined8 FUN_1411a9520(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = (longlong)param_2 * 0x50;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      }
      else {
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar5 & (uVar3 + uVar5) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 / 0x50)) {
    uVar5 = uVar3 / 0x50 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_1446f8d3c(param_1,0,uVar5,0x50,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar2;
}



// FUNCTION 1411a95fa FUN_1411a95fa body=510 status=ok
// SIG undefined FUN_1411a95fa(void)

longlong * FUN_1411a95fa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[9];
  plVar10 = param_1 + 8;
  if ((ulonglong)(longlong)iVar1 < 2) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
    if (iVar1 == 0) goto LAB_1411a966e;
  }
  else {
    FUN_1446efa72(plVar10,0,iVar1,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar10 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar10;
  }
  plVar10 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar10,(longlong)iVar1 << 2);
LAB_1411a966e:
  *(int *)(param_1 + 9) = iVar1;
  uVar2 = *(uint *)(param_2 + 1);
  FUN_1411a92f4(param_1,(ulonglong)uVar2);
  lVar5 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
    FUN_140044672(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar7 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(param_1 + 2);
  }
  iVar1 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 != 0) {
    plVar10 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar10 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar10,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar2) {
    lVar5 = *param_1;
    lVar3 = *param_2;
    lVar9 = 0;
    uVar11 = 0;
    do {
      plVar10 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar10 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar10 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) & 1
          ) == 0) {
        *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
        *(undefined4 *)(lVar5 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
      }
      else {
        *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        *(undefined8 *)(lVar5 + 8 + lVar9) = *(undefined8 *)(lVar3 + 8 + lVar9);
        lVar4 = *(longlong *)(lVar3 + 0x10 + lVar9);
        *(longlong *)(lVar5 + 0x10 + lVar9) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        *(undefined1 *)(lVar5 + 0x18 + lVar9) = *(undefined1 *)(lVar3 + 0x18 + lVar9);
        *(undefined8 *)(lVar5 + 0x20 + lVar9) = *(undefined8 *)(lVar3 + 0x20 + lVar9);
        *(undefined8 *)(lVar5 + 0x28 + lVar9) = *(undefined8 *)(lVar3 + 0x28 + lVar9);
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 0x30;
    } while (uVar2 != uVar11);
  }
  return param_1;
}



// FUNCTION 1411a97f8 FUN_1411a97f8 body=551 status=ok
// SIG undefined FUN_1411a97f8(void)

void FUN_1411a97f8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_1411a98e5;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar5 != (longlong *)0x0) {
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
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_1411a98e5;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_1411a98e5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1411a9a20 FUN_1411a9a20 body=497 status=ok
// SIG undefined FUN_1411a9a20(void)

longlong * FUN_1411a9a20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[9];
  plVar10 = param_1 + 8;
  if ((ulonglong)(longlong)iVar1 < 2) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
    if (iVar1 == 0) goto LAB_1411a9a83;
  }
  else {
    FUN_1446efa72(plVar10,0,iVar1,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar10 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar10;
  }
  plVar10 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar10,(longlong)iVar1 << 2);
LAB_1411a9a83:
  *(int *)(param_1 + 9) = iVar1;
  uVar2 = *(uint *)(param_2 + 1);
  FUN_1411a97f8(param_1,(ulonglong)uVar2);
  lVar5 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
    FUN_1447711aa(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar7 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(param_1 + 2);
  }
  iVar1 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 != 0) {
    plVar10 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar10 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar10,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar2) {
    lVar5 = *param_1;
    lVar3 = *param_2;
    lVar9 = 0;
    uVar11 = 0;
    do {
      plVar10 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar10 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar10 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) & 1
          ) == 0) {
        *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
        *(undefined4 *)(lVar5 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
      }
      else {
        *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        *(undefined8 *)(lVar5 + 8 + lVar9) = *(undefined8 *)(lVar3 + 8 + lVar9);
        lVar4 = *(longlong *)(lVar3 + 0x10 + lVar9);
        *(longlong *)(lVar5 + 0x10 + lVar9) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)(lVar5 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar2 != uVar11);
  }
  return param_1;
}



// FUNCTION 1411a9c12 FUN_1411a9c12 body=2992 status=ok
// SIG undefined FUN_1411a9c12(void)

undefined8 * FUN_1411a9c12(code *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  code *pcVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  undefined8 *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  ulonglong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = param_3[1];
  local_e8 = param_2;
  if (lVar6 == 0) {
    uVar12 = FUN_14043db3a();
    lVar6 = FUN_14477b664(uVar12);
    param_3[1] = lVar6;
  }
  if (param_3[2] == 0) {
    if ((lVar6 == 0) || (*param_3 == 0)) {
LAB_1411aa652:
      *local_e8 = 0;
      local_e8[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
    }
    plVar7 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
      param_3[2] = 0;
      goto LAB_1411aa652;
    }
    uVar12 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar12,param_3);
    param_3[2] = lVar6;
    if (lVar6 == 0) goto LAB_1411aa652;
  }
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_d8 = (code *)FUN_140317d24();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_d0 = param_1;
  lVar6 = FUN_1402710dd();
  if (lStack_98 != 0) {
    plVar7 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar7 = local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar6 == 0) {
      *local_e8 = 0;
      local_e8[1] = 0;
      puVar21 = local_e8;
      goto LAB_1411aa11b;
    }
  }
  else {
    FUN_1456cec3c();
  }
  iVar4 = *(int *)(param_1 + 0x3b0);
  *(uint *)(param_1 + 0x3b0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x3b4) < iVar4 + 1U) {
    FUN_14582c57a(param_1 + 0x3a8,iVar4);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar4 * 8) = lVar6;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c();
  }
  if (param_4 == (longlong *)0x0) {
    pcVar9 = param_1 + 0x390;
  }
  else {
    local_b0 = local_b0 & 0xffffffff00000000;
    local_d8 = (code *)CONCAT71(local_d8._1_7_,1);
    local_d0 = (code *)(**(code **)(*param_4 + 8))(param_4);
    if ((int)local_b0 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,(int)local_b0 + -1,1);
      local_b0 = local_b0 & 0xffffffff00000000;
    }
    plVar7 = (longlong *)FUN_1447262c2();
    if (plVar7 == (longlong *)0x0) {
LAB_1411aa5e1:
      pcVar9 = (code *)0x0;
    }
    else {
      if (DAT_14cb252d8 == 0) {
        local_100 = &local_e0;
        local_e0 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_1427b09ee;
        local_108 = &LAB_147f6f07f;
        local_110 = FUN_1464465e2;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10004001;
        local_130 = 8;
        local_138 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
      }
      pcVar8 = (code *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb252d8);
      if (pcVar8 == (code *)0x0) goto LAB_1411aa5e1;
      if (DAT_14cb252d8 == 0) {
        local_100 = &local_e0;
        local_e0 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_1427b09ee;
        local_108 = &LAB_147f6f07f;
        local_110 = FUN_1464465e2;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10004001;
        local_130 = 8;
        local_138 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
      }
      pcVar9 = (code *)FUN_144718840(pcVar8,DAT_14cb252d8);
      if (pcVar8 == pcVar9) goto LAB_1411aa5e1;
    }
    lVar10 = DAT_14c9a3da0;
    if ((longlong)(int)local_b0 != 0) {
      lVar19 = (longlong)(int)local_b0 + -1;
      lVar20 = lVar19 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
      if (*(longlong *)(lVar10 + lVar20) != 0) {
        FUN_1400020a8();
      }
      lVar10 = DAT_14c9a3da0;
      iVar4 = (int)lVar19;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
      }
      *(undefined4 *)(lVar10 + lVar20) = 0xffffffff;
      iVar15 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar15 = DAT_14c9a3dd0;
      }
      *(int *)(lVar10 + 4 + lVar20) = iVar15;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar13 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar13 = DAT_14c9a3dc0;
      }
      iVar15 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar15 = iVar4;
      }
      bVar2 = (byte)lVar19 & 0x1f;
      DAT_14c9a3dd0 = iVar4;
      *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) =
           *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_b0 = local_b0 & 0xffffffff00000000;
    }
    if (((char)local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
  }
  if ((pcVar9 == (code *)0x0) || (lVar10 = (**(code **)(*(longlong *)pcVar9 + 8))(), lVar10 == 0)) {
LAB_1411aa5d9:
    lVar10 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_d8 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = FUN_14081d0ea;
      local_108 = &LAB_1478c0a72;
      local_110 = (code *)&LAB_1417b2375;
      local_118 = L"Engine";
      local_120 = 0x1000000000;
      local_128 = 0x10000004;
      local_130 = 8;
      local_138 = 0x390;
      local_100 = &local_d8;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_1411aa5d9;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
  }
  *(longlong *)(lVar6 + 0x48) = lVar10;
  uVar18 = *(ulonglong *)(lVar6 + 0x30);
  if (uVar18 < 0xffffffff00000000) {
    plVar7 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar7 = (longlong *)0x0;
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,lVar6,uVar18,1);
  }
  else {
    uVar16 = (uint)uVar18;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
      puVar13 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar13 = DAT_14c998080;
      }
      if ((*(uint *)(puVar13 + ((uint)(uVar18 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
        lVar10 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
        puVar14 = *(uint **)(lVar10 + 0x18);
        if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
          puVar14 = (uint *)(lVar10 + 8);
        }
        *puVar14 = *puVar14 | 2;
        *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
      }
    }
  }
  lVar10 = FUN_1411aa7cb(*(undefined8 *)(lVar6 + 0x20));
  if ((lVar10 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(lVar6 + 0x40) = lVar10;
    if (lVar10 != 0) goto LAB_1411a9e88;
  }
  else {
    FUN_1456cec3c(lVar10);
    *(longlong *)(lVar6 + 0x40) = lVar10;
LAB_1411a9e88:
    if (*(longlong *)(lVar6 + 0x48) == 0) {
      bVar22 = true;
    }
    else {
      if ((*(uint *)(lVar6 + 8) & 0x10) == 0) {
        lVar20 = *(longlong *)(lVar6 + 0x20);
      }
      else {
        lVar20 = 0;
      }
      bVar22 = *(longlong *)(lVar6 + 0x48) == lVar20;
    }
    *(bool *)(lVar10 + 400) = bVar22;
    FUN_1411aa87e(*(undefined8 *)(lVar6 + 0x40),lVar6 + 0x28);
    lVar10 = *(longlong *)(lVar6 + 0x40);
    FUN_140bcbf1e(&local_e0);
    pcVar9 = local_e0;
    uVar16 = *(uint *)(lVar6 + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    uVar5 = *(uint *)(lVar20 + 0x10);
    if (*(uint *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d);
      }
      LOCK();
      uVar5 = *(uint *)(lVar20 + 0x10);
      bVar22 = uVar5 == 0;
      if (bVar22) {
        *(uint *)(lVar20 + 0x10) = uVar17;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar22) {
        uVar5 = uVar17;
      }
    }
    uVar18 = (ulonglong)uVar5;
    plVar7 = (longlong *)(lVar10 + 0x58);
    if (pcVar9 != (code *)0x0) {
      if (uVar5 == 0) {
        uVar18 = 0;
      }
      else if ((((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) &&
               (plVar11 = (longlong *)
                          ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
               plVar11 != (longlong *)0x0)) &&
              (((*(uint *)(plVar11 + 2) == uVar5 && ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) &&
               (*plVar11 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar11 + 0x10),pcVar9);
      }
    }
    local_d8 = (code *)(uVar18 << 0x20 | (ulonglong)uVar16);
    local_d0 = pcVar9;
    FUN_1403350f6(plVar7);
    iVar4 = *(int *)(lVar10 + 0x60);
    if (0 < iVar4) {
      lVar20 = 0;
      bVar22 = false;
      do {
        while( true ) {
          lVar19 = *plVar7;
          puVar14 = (uint *)(lVar19 + lVar20 * 0x10);
          if (((*(longlong *)(lVar19 + 8 + lVar20 * 0x10) != 0) && (puVar14[1] != 0)) &&
             ((uVar16 = *puVar14, -1 < (int)uVar16 &&
              (((((int)uVar16 < DAT_14c9647dc &&
                 (plVar11 = (longlong *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
                 plVar11 != (longlong *)0x0)) && (*(uint *)(plVar11 + 2) == puVar14[1])) &&
               (((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0 && (*plVar11 != 0)))))))) break;
          iVar15 = ~(uint)lVar20 + iVar4;
          if (iVar15 != 0) {
            if (0 < iVar15) {
              iVar15 = 1;
            }
            memmove(puVar14,(void *)(lVar19 + (longlong)(iVar4 - iVar15) * 0x10),
                    (longlong)iVar15 << 4);
            iVar4 = *(int *)(lVar10 + 0x60);
          }
          iVar4 = iVar4 + -1;
          *(int *)(lVar10 + 0x60) = iVar4;
          bVar22 = true;
          if (iVar4 <= lVar20) goto LAB_1411aa1b9;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar4);
      if (bVar22) {
LAB_1411aa1b9:
        FUN_1400bbcfc(plVar7);
      }
    }
  }
  FUN_140b3e45e(lVar6);
  lVar10 = (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28);
  if (lVar10 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar10);
    }
    iVar4 = *(int *)(param_1 + 0x3c0);
    *(uint *)(param_1 + 0x3c0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x3c4) < iVar4 + 1U) {
      FUN_14582c600(param_1 + 0x3b8,iVar4);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar4 * 8) = lVar10;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar10);
    }
  }
  puVar21 = local_e8;
  *local_e8 = 0;
  local_e8[1] = 0;
  if (lVar6 != 0) {
    if (DAT_14cb5cdc8 == 0) {
      local_d8 = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = FUN_1427b09ee;
      local_108 = &LAB_148692775;
      local_110 = FUN_1464d923a;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 0x10004001;
      local_130 = 8;
      local_138 = 0x28;
      local_100 = &local_d8;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogSpeaker",&DAT_14cb5cdc8,&DAT_148692774);
    }
    lVar10 = FUN_144718840(lVar6,DAT_14cb5cdc8);
    puVar21[1] = lVar10;
    if (lVar10 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar6);
      }
      uVar16 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar4 = *(int *)(lVar6 + 0x10);
        bVar22 = iVar4 == 0;
        if (bVar22) {
          *(int *)(lVar6 + 0x10) = iVar15;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar22) {
          iVar4 = iVar15;
        }
      }
      *puVar21 = CONCAT44(iVar4,uVar16);
    }
  }
LAB_1411aa11b:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar21;
}



// FUNCTION 1411aa7cb FUN_1411aa7cb body=177 status=ok
// SIG undefined FUN_1411aa7cb(void)

undefined8 FUN_1411aa7cb(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140d53794();
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
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411aa87e FUN_1411aa87e body=113 status=ok
// SIG undefined FUN_1411aa87e(void)

void FUN_1411aa87e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407abeca(&local_30);
  *(undefined4 *)(param_1 + 0x178) = local_30;
  *(undefined4 *)(param_1 + 0x17c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x180) = uStack_28;
  *(undefined4 *)(param_1 + 0x184) = uStack_24;
  FUN_140316e34(param_1,1);
  FUN_140d53d1a(param_1,param_3,0);
  FUN_140d53872(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411aa8f0 FUN_1411aa8f0 body=1167 status=ok
// SIG undefined FUN_1411aa8f0(void)

void FUN_1411aa8f0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_144729dda(param_1 + 0x238);
  if (cVar6 != '\0') {
    uVar7 = FUN_14479d2ce(param_1 + 0x238);
    FUN_140fa3838(uVar7,0);
    FUN_140fa3796(uVar7);
  }
  local_70 = param_1 + 0x40;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar18 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar12 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar18 = local_68 >> 0x20;
    iVar12 = *(int *)(param_1 + 0x58);
  }
  lVar13 = local_60;
  iVar9 = (int)local_68;
  uVar19 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar17 = local_50;
  if (local_58._4_4_ != iVar12 || local_60 != local_70) {
    do {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar8 * 0x20);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)iVar8 * 0x20);
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar14 + 0xa8))();
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(*plVar14 + 0xa8))();
        LOCK();
        plVar14 = plVar4 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      uVar19 = uVar19 & ~(uint)uVar18;
      lVar11 = *(longlong *)(lVar13 + 0x10);
      if (*(longlong *)(lVar13 + 0x10) == 0) {
        lVar11 = lVar13;
      }
      iVar3 = *(int *)(lVar13 + 0x18);
      lVar15 = (longlong)iVar9;
      uVar10 = *(uint *)(lVar11 + lVar15 * 4) & uVar19;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar5 = iVar8;
        if (iVar8 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar16 = 0;
          do {
            uVar10 = *(uint *)(lVar11 + lVar15 * 4 + 4 + lVar16 * 4);
            if (uVar10 != 0) {
              iVar9 = iVar9 + (int)lVar16 + 1;
              uVar19 = 0xffffffff;
              goto LAB_1411aaa5b;
            }
            iVar17 = iVar17 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar5 - lVar15 != lVar16);
          uVar19 = 0xffffffff;
          iVar9 = iVar5;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar3;
      }
      else {
LAB_1411aaa5b:
        uVar18 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar18 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar12 || lVar13 != local_70);
  }
  local_70 = param_1 + 0x90;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar18 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar12 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar18 = local_68 >> 0x20;
    iVar12 = *(int *)(param_1 + 0xa8);
  }
  lVar13 = local_60;
  iVar9 = (int)local_68;
  uVar19 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar17 = local_50;
  if (local_58._4_4_ != iVar12 || local_60 != local_70) {
    do {
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 8 + (longlong)iVar8 * 0x20);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x10 + (longlong)iVar8 * 0x20);
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar14 + 0xb8))();
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(*plVar14 + 0xb8))();
        LOCK();
        plVar14 = plVar4 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      uVar19 = uVar19 & ~(uint)uVar18;
      lVar11 = *(longlong *)(lVar13 + 0x10);
      if (*(longlong *)(lVar13 + 0x10) == 0) {
        lVar11 = lVar13;
      }
      iVar3 = *(int *)(lVar13 + 0x18);
      lVar15 = (longlong)iVar9;
      uVar10 = *(uint *)(lVar11 + lVar15 * 4) & uVar19;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar5 = iVar8;
        if (iVar8 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar16 = 0;
          do {
            uVar10 = *(uint *)(lVar11 + lVar15 * 4 + 4 + lVar16 * 4);
            if (uVar10 != 0) {
              iVar9 = iVar9 + (int)lVar16 + 1;
              uVar19 = 0xffffffff;
              goto LAB_1411aabc3;
            }
            iVar17 = iVar17 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar5 - lVar15 != lVar16);
          uVar19 = 0xffffffff;
          iVar9 = iVar5;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar3;
      }
      else {
LAB_1411aabc3:
        uVar18 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar18 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar12 || lVar13 != local_70);
  }
  if ((longlong)*(int *)(param_1 + 0x440) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x438);
    lVar11 = (longlong)*(int *)(param_1 + 0x440) << 4;
    do {
      if ((*(longlong *)(lVar13 + 8) != 0) && (cVar6 = FUN_144729dda(lVar13), cVar6 != '\0')) {
        if ((*(longlong *)(lVar13 + 8) == 0) || (cVar6 = FUN_144729dda(lVar13), cVar6 == '\0')) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = *(longlong **)(lVar13 + 8);
        }
        cVar6 = (**(code **)(*plVar14 + 0x10))(plVar14);
        if (cVar6 != '\0') {
          (**(code **)(*plVar14 + 0x28))(plVar14);
        }
      }
      lVar13 = lVar13 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411aad80 FUN_1411aad80 body=269 status=ok
// SIG undefined FUN_1411aad80(void)

void FUN_1411aad80(longlong param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar2 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x130);
    lVar10 = 0;
    do {
      pfVar9 = *(float **)(lVar5 + lVar10);
      if ((((pfVar9 != (float *)0x0) &&
           (plVar6 = *(longlong **)(lVar5 + 0x10 + lVar10), plVar6 != (longlong *)0x0)) &&
          (iVar3 = *(int *)(lVar5 + 0xc + lVar10), iVar3 != 0)) &&
         ((uVar4 = *(uint *)(lVar5 + 8 + lVar10), -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc))))
      {
        lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        if ((lVar11 != 0) &&
           ((*(int *)(lVar11 + 0x10) == iVar3 &&
            (fVar1 = *(float *)(lVar5 + 0x28 + lVar10), (*(uint *)(lVar11 + 8) & 0x10200000) == 0)))
           ) {
          pcVar7 = *(code **)(*plVar6 + 0x10);
          if (pcVar7 != (code *)&LAB_14473dda0) {
            cVar8 = (*pcVar7)();
            if (cVar8 == '\0') goto LAB_1411aae39;
            pfVar9 = *(float **)(lVar5 + lVar10);
          }
          if ((*pfVar9 != fVar1) || (NAN(*pfVar9) || NAN(fVar1))) {
            *pfVar9 = fVar1;
            plVar6 = *(longlong **)(lVar5 + 0x10 + lVar10);
            pcVar7 = *(code **)(*plVar6 + 0x20);
            if (pcVar7 == FUN_1404fd1c4) {
              FUN_1404fd1c4();
            }
            else {
              (*pcVar7)(plVar6,*(undefined8 *)(lVar5 + 0x20 + lVar10),
                        *(undefined8 *)(lVar5 + 0x18 + lVar10));
            }
          }
        }
      }
LAB_1411aae39:
      lVar10 = lVar10 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar10);
  }
  return;
}



// FUNCTION 1411aae8e FUN_1411aae8e body=198 status=ok
// SIG undefined FUN_1411aae8e(void)

void FUN_1411aae8e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x24))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_14490d20c(uVar2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x48));
      uVar4 = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      goto LAB_1411aaf15;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x48);
LAB_1411aaf15:
  local_28 = *(undefined4 *)(param_1 + 0x10);
  uStack_24 = *(undefined4 *)(param_1 + 0x14);
  uStack_20 = *(undefined4 *)(param_1 + 0x18);
  uStack_1c = *(undefined4 *)(param_1 + 0x1c);
  FUN_1404fd03e(param_1 + 0x28,&local_28,uVar4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411aaf56 FUN_1411aaf56 body=375 status=ok
// SIG undefined FUN_1411aaf56(void)

void FUN_1411aaf56(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  char cVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar5 = *(int *)(param_1 + 0x450);
  if ((longlong)iVar5 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x448);
    lVar13 = 0;
    do {
      pfVar12 = *(float **)(lVar8 + lVar13);
      if ((((pfVar12 != (float *)0x0) &&
           (plVar9 = *(longlong **)(lVar8 + 0x10 + lVar13), plVar9 != (longlong *)0x0)) &&
          (iVar6 = *(int *)(lVar8 + 0xc + lVar13), iVar6 != 0)) &&
         ((uVar7 = *(uint *)(lVar8 + 8 + lVar13), -1 < (int)uVar7 && ((int)uVar7 < DAT_14c9647dc))))
      {
        lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x10) == iVar6)) {
          fVar1 = *(float *)(lVar8 + 0x28 + lVar13);
          fVar2 = *(float *)(lVar8 + 0x2c + lVar13);
          fVar3 = *(float *)(lVar8 + 0x30 + lVar13);
          fVar4 = *(float *)(lVar8 + 0x34 + lVar13);
          if ((*(uint *)(lVar14 + 8) & 0x10200000) == 0) {
            pcVar10 = *(code **)(*plVar9 + 0x10);
            if (pcVar10 != (code *)&LAB_14473dda0) {
              cVar11 = (*pcVar10)();
              if (cVar11 == '\0') goto LAB_1411ab065;
              pfVar12 = *(float **)(lVar8 + lVar13);
            }
            if ((*pfVar12 == fVar1) && (!NAN(*pfVar12) && !NAN(fVar1))) {
              if ((pfVar12[1] == fVar2) && (!NAN(pfVar12[1]) && !NAN(fVar2))) {
                if ((pfVar12[2] == fVar3) && (!NAN(pfVar12[2]) && !NAN(fVar3))) {
                  if ((pfVar12[3] == fVar4) && (!NAN(pfVar12[3]) && !NAN(fVar4)))
                  goto LAB_1411ab065;
                }
              }
            }
            *pfVar12 = fVar1;
            pfVar12[1] = fVar2;
            pfVar12[2] = fVar3;
            pfVar12[3] = fVar4;
            plVar9 = *(longlong **)(lVar8 + 0x10 + lVar13);
            (**(code **)(*plVar9 + 0x20))
                      (plVar9,*(undefined8 *)(lVar8 + 0x20 + lVar13),
                       *(undefined8 *)(lVar8 + 0x18 + lVar13));
          }
        }
      }
LAB_1411ab065:
      lVar13 = lVar13 + 0x38;
    } while ((longlong)iVar5 * 0x38 - lVar13 != 0);
  }
  return;
}



// FUNCTION 1411ab0ce FUN_1411ab0ce body=625 status=ok
// SIG undefined FUN_1411ab0ce(void)

void FUN_1411ab0ce(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  if ((longlong)*(int *)(param_1 + 0x138) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x130);
    plVar10 = plVar11 + (longlong)*(int *)(param_1 + 0x138) * 6;
    do {
      if ((((((longlong *)plVar11[2] != (longlong *)0x0) && (*(int *)((longlong)plVar11 + 0xc) != 0)
            ) && (uVar2 = *(uint *)(plVar11 + 1), -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           (lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 != 0)))) &&
         (((*(int *)(lVar8 + 0x10) == *(int *)((longlong)plVar11 + 0xc) &&
           (lVar4 = plVar11[5], (*(uint *)(lVar8 + 8) & 0x10200000) == 0)) &&
          (((pcVar3 = *(code **)(*(longlong *)plVar11[2] + 0x10), pcVar3 == (code *)&LAB_14473dda0
            || (cVar5 = (*pcVar3)(), cVar5 != '\0')) && (lVar8 = plVar11[3], lVar8 != 0)))))) {
        puVar7 = *(undefined8 **)(lVar8 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d20) &&
           (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
          uVar6 = FUN_1446ddbd2();
          FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar6,FUN_14067a048);
          atexit(FUN_142811fe5);
          _Init_thread_footer(&DAT_14c951d20);
        }
        if (DAT_14c951cd8 == 0) {
          bVar12 = puVar7 != (undefined8 *)0x0;
          if (puVar7 != &DAT_14c951cd0 && bVar12) {
            do {
              puVar7 = (undefined8 *)puVar7[6];
              bVar12 = puVar7 != (undefined8 *)0x0;
              if (puVar7 == &DAT_14c951cd0) break;
            } while (puVar7 != (undefined8 *)0x0);
          }
          if (bVar12) goto LAB_1411ab1e5;
        }
        else if ((puVar7[3] & DAT_14c951cd8) != 0) {
LAB_1411ab1e5:
          bVar1 = *(byte *)(*plVar11 + (ulonglong)*(byte *)(lVar8 + 0x71));
          if ((bool)(char)lVar4 != ((*(byte *)(lVar8 + 0x73) & bVar1) != 0)) {
            if ((char)lVar4 == '\0') {
              bVar9 = 0;
            }
            else {
              bVar9 = *(byte *)(lVar8 + 0x72);
            }
            *(byte *)(*plVar11 + (ulonglong)*(byte *)(lVar8 + 0x71)) =
                 bVar1 & ~*(byte *)(lVar8 + 0x73) | bVar9;
            (**(code **)(*(longlong *)plVar11[2] + 0x20))
                      ((longlong *)plVar11[2],plVar11[4],plVar11[3]);
          }
        }
      }
      plVar11 = plVar11 + 6;
    } while (plVar11 != plVar10);
  }
  return;
}



// FUNCTION 1411ab340 FUN_1411ab340 body=73 status=ok
// SIG undefined FUN_1411ab340(void)

undefined8 FUN_1411ab340(float *param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"(R=%f,G=%f,B=%f,A=%f)",(double)*param_1,(double)param_1[1],
                (double)param_1[2],(double)param_1[3]);
  return param_2;
}



// FUNCTION 1411ab38a FUN_1411ab38a body=157 status=ok
// SIG undefined FUN_1411ab38a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411ab38a(undefined1 (*param_1) [16],undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar6 = maxps(*param_1,_DAT_149e1a200);
  auVar6 = minps(auVar6,_DAT_149e1a210);
  fVar5 = auVar6._0_4_;
  fVar8 = auVar6._4_4_;
  fVar9 = auVar6._8_4_;
  auVar11._4_4_ =
       *(undefined4 *)
        (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar8 + -0x39000000) >> 0x14) * 4);
  auVar11._0_4_ =
       *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar5 + 0xc7000000U >> 0x14) * 4);
  auVar10._0_4_ = (uint)fVar5 >> 0xc;
  auVar10._4_4_ = (uint)fVar8 >> 0xc;
  auVar10._8_4_ = (uint)fVar9 >> 0xc;
  auVar10._12_4_ = (uint)auVar6._12_4_ >> 0xc;
  auVar11._8_4_ =
       *(undefined4 *)
        (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar9 + -0x39000000) >> 0x14) * 4);
  auVar11._12_4_ = 0;
  auVar11 = pmaddwd(auVar10 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar11);
  auVar7._4_4_ = (int)(fVar8 * 0.0 + 0.5) | auVar11._4_4_ >> 0x10;
  auVar7._12_4_ = (int)(auVar6._12_4_ * 255.0 + 0.5) | auVar11._12_4_ >> 0x10;
  auVar7._0_4_ = (int)(fVar9 * 0.0 + 0.5) | auVar11._8_4_ >> 0x10;
  auVar7._8_4_ = (int)(fVar5 * 0.0 + 0.5) | auVar11._0_4_ >> 0x10;
  auVar6 = packssdw(auVar7,auVar7);
  sVar1 = auVar6._0_2_;
  sVar2 = auVar6._2_2_;
  sVar3 = auVar6._4_2_;
  sVar4 = auVar6._6_2_;
  *param_2 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar6[6] - (0xff < sVar4),
                      CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar6[4] - (0xff < sVar3),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar6[2] - (0xff < sVar2),
                                        (0 < sVar1) * (sVar1 < 0x100) * auVar6[0] - (0xff < sVar1)))
                     );
  return;
}



// FUNCTION 1411ab428 FUN_1411ab428 body=882 status=ok
// SIG undefined FUN_1411ab428(void)

void FUN_1411ab428(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
  if (param_1 == 0) {
    uVar8 = 0;
    iVar5 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar5 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar5 = iVar4;
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if (lVar9 == 0) {
    lVar9 = FUN_1448abda6(param_1);
    uVar7 = 0;
    uVar2 = 0;
    if (lVar9 == 0) goto LAB_1411ab4e2;
  }
  uVar7 = *(uint *)(lVar9 + 0xc);
  if ((int)uVar7 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  uVar2 = *(uint *)(lVar9 + 0x10);
  if (*(uint *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    uVar3 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar3);
    }
    LOCK();
    uVar2 = *(uint *)(lVar9 + 0x10);
    bVar10 = uVar2 == 0;
    if (bVar10) {
      *(uint *)(lVar9 + 0x10) = uVar3;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar10) {
      uVar2 = uVar3;
    }
  }
LAB_1411ab4e2:
  local_58 = CONCAT44(iVar5,uVar8);
  if (DAT_14cad22c0 != 0) {
    puVar6 = &DAT_14cad22b0;
    if (DAT_14cad22b8 != (undefined *)0x0) {
      puVar6 = DAT_14cad22b8;
    }
    iVar5 = *(int *)(puVar6 + (longlong)(int)(DAT_14cad22c0 - 1U & (uVar2 ^ uVar7)) * 4);
    while (iVar4 = iVar5, iVar4 != -1) {
      iVar5 = *(int *)(DAT_14cad2278 + 0x10 + (longlong)iVar4 * 0x18);
      local_48 = *(undefined8 *)(DAT_14cad2278 + (longlong)iVar4 * 0x18);
      local_50 = CONCAT44(uVar2,uVar7);
      cVar1 = FUN_140bf1e82(&local_48,&local_50);
      if (cVar1 != '\0') {
        do {
          cVar1 = FUN_14582c8d6(DAT_14cad2278 + (longlong)iVar4 * 0x18 + 8,&local_58);
          if (cVar1 != '\0') {
            FUN_140bf1f26(iVar4);
          }
          do {
            iVar4 = iVar5;
            if (iVar4 == -1) goto LAB_1411ab4ff;
            iVar5 = *(int *)(DAT_14cad2278 + 0x10 + (longlong)iVar4 * 0x18);
            local_48 = *(undefined8 *)(DAT_14cad2278 + (longlong)iVar4 * 0x18);
            local_50 = CONCAT44(uVar2,uVar7);
            cVar1 = FUN_140bf1e82();
          } while (cVar1 == '\0');
        } while( true );
      }
    }
  }
LAB_1411ab4ff:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
  if (0 < *(int *)(param_1 + 0x370)) {
    lVar9 = 0;
    do {
      FUN_1411ab7fc(*(undefined8 *)(*(longlong *)(param_1 + 0x368) + lVar9 * 8));
      lVar9 = lVar9 + 1;
      iVar5 = *(int *)(param_1 + 0x370);
    } while (lVar9 < iVar5);
    if (1 < iVar5) {
      FUN_147a02938(param_1 + 0x368,iVar5 + -1);
    }
  }
  FUN_1411ab79c(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfe;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (((*(byte *)(param_1 + 0xb8) & 6) != 0) &&
     ((lVar9 = *(longlong *)(param_1 + 0xb0), lVar9 != 0 ||
      (lVar9 = FUN_1448abda6(param_1), lVar9 != 0)))) {
    FUN_1401b4182(lVar9,param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411ab79c FUN_1411ab79c body=96 status=ok
// SIG undefined FUN_1411ab79c(void)

void FUN_1411ab79c(longlong *param_1)

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
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1411ab7fc FUN_1411ab7fc body=80 status=ok
// SIG undefined FUN_1411ab7fc(void)

void FUN_1411ab7fc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1411ab84c FUN_1411ab84c body=7 status=ok
// SIG undefined FUN_1411ab84c(void)

undefined1 * FUN_1411ab84c(undefined1 *param_1)

{
  *param_1 = 0x1f;
  return param_1;
}



// FUNCTION 1411ab854 FUN_1411ab854 body=60 status=ok
// SIG undefined FUN_1411ab854(void)

undefined8 * FUN_1411ab854(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14a4e96c0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x11;
  return param_1;
}



// FUNCTION 1411ab890 FUN_1411ab890 body=115 status=ok
// SIG undefined FUN_1411ab890(void)

void FUN_1411ab890(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x2618) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x2618) + 0x5d8))();
    if (lVar2 == 0) {
      FUN_1412f7e04(param_1);
      FUN_1412f7efc(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x2618) + 0x5e8))();
      if (((*(longlong *)(param_1 + 0x2640) != 0) &&
          (iVar1 = *(int *)(*(longlong *)(param_1 + 0x2640) + 0x46c), 0 < iVar1)) &&
         (iVar1 <= *(int *)(param_1 + 0x2680))) {
        FUN_148cf721c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411ab904 FUN_1411ab904 body=1152 status=ok
// SIG undefined FUN_1411ab904(void)

void FUN_1411ab904(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
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
  uStack_1c = 0;
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
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
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
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1411abd86(local_18,CONCAT44(uStack_1c,uStack_20),local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411abd86 FUN_1411abd86 body=159 status=ok
// SIG undefined FUN_1411abd86(void)

void FUN_1411abd86(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140a2a00c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140a2a00c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          if (param_3 == '\0') {
            FUN_1400bc8c2(lVar4,&local_20);
          }
          else {
            FUN_1400bc96c();
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411abe26 FUN_1411abe26 body=219 status=ok
// SIG undefined FUN_1411abe26(void)

undefined8 FUN_1411abe26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined4 *)(param_2 + -0x50) = *(undefined4 *)(param_3 + -0x50);
      lVar8 = *(longlong *)(param_3 + -0x48);
      if (DAT_14c950c29 == '\x01') {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_14689c22e();
          lVar8 = *(longlong *)(param_3 + -0x48);
        }
      }
      *(longlong *)(param_2 + -0x48) = lVar8;
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0x40);
      uVar2 = *(undefined4 *)(param_3 + -0x3c);
      uVar3 = *(undefined4 *)(param_3 + -0x38);
      uVar4 = *(undefined4 *)(param_3 + -0x34);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x40) = uVar1;
      *(undefined4 *)(param_2 + -0x3c) = uVar2;
      *(undefined4 *)(param_2 + -0x38) = uVar3;
      *(undefined4 *)(param_2 + -0x34) = uVar4;
      if ((*(longlong *)(param_2 + -0x18) != *(longlong *)(param_3 + -0x18)) ||
         (*(int *)(param_2 + -0x10) != *(int *)(param_3 + -0x10))) {
        *(longlong *)(param_2 + -0x18) = *(longlong *)(param_3 + -0x18);
        *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
        *(undefined8 *)(param_2 + -8) = 0;
      }
      FUN_1411abf02(param_2,param_3);
      puVar9 = (undefined8 *)(param_3 + 0x10);
      puVar10 = (undefined8 *)(param_2 + 0x10);
      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_3 = param_3 + 0xd0;
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1411abf02 FUN_1411abf02 body=93 status=ok
// SIG undefined FUN_1411abf02(void)

undefined8 * FUN_1411abf02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e457df(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14582cad2(param_1,iVar1);
      FUN_14582ca9e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1411abf60 FUN_1411abf60 body=1377 status=ok
// SIG undefined FUN_1411abf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1411abf60(longlong param_1,char *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  undefined8 **ppuVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined2 *local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  char local_d8;
  undefined8 **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  longlong local_70;
  ulonglong uStack_68;
  undefined1 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    plVar1 = (longlong *)(param_1 + 0x3b8);
    if (*param_2 == '\x01') {
      FUN_1447a97f4(&local_e8,param_2 + 0x10);
      if (0 < local_e8._4_4_) {
        lVar15 = 0;
        uVar17 = 0;
        iVar5 = local_e8._4_4_;
        iVar8 = DAT_14c948000;
        do {
          bVar18 = (int)local_e8 != 0;
          bVar19 = (int)local_e8 != iVar8;
          piVar11 = &DAT_14c948620;
          piVar12 = (int *)&DAT_14c948618;
          if (bVar19 && bVar18) {
            ppuVar13 = &local_e0;
            if (0 < uStack_c8._4_4_) {
              ppuVar13 = local_d0;
            }
            if (1 < iVar5) {
              ppuVar13 = local_d0;
            }
            piVar11 = (int *)((longlong)ppuVar13 + lVar15 + 8);
            piVar12 = (int *)((longlong)ppuVar13 + lVar15);
          }
          if ((*piVar12 == DAT_14cb7beb0) && (*piVar11 == DAT_14cb7beb8)) {
LAB_1411ac16c:
            FUN_1402b5374(&local_e8,uVar17 & 0xffffffff,0);
            iVar5 = local_e8._4_4_;
            iVar8 = DAT_14c948000;
          }
          else {
            piVar11 = &DAT_14c948620;
            piVar12 = (int *)&DAT_14c948618;
            if (bVar19 && bVar18) {
              ppuVar13 = &local_e0;
              if (0 < uStack_c8._4_4_) {
                ppuVar13 = local_d0;
              }
              if (1 < iVar5) {
                ppuVar13 = local_d0;
              }
              piVar11 = (int *)((longlong)ppuVar13 + lVar15 + 8);
              piVar12 = (int *)((longlong)ppuVar13 + lVar15);
            }
            if ((*piVar12 == DAT_14cb7bec8) && (*piVar11 == DAT_14cb7bed0)) goto LAB_1411ac16c;
            piVar11 = &DAT_14c948620;
            piVar12 = (int *)&DAT_14c948618;
            if (bVar19 && bVar18) {
              ppuVar13 = &local_e0;
              if (0 < uStack_c8._4_4_) {
                ppuVar13 = local_d0;
              }
              if (1 < iVar5) {
                ppuVar13 = local_d0;
              }
              piVar11 = (int *)((longlong)ppuVar13 + lVar15 + 8);
              piVar12 = (int *)((longlong)ppuVar13 + lVar15);
            }
            if ((*piVar12 == DAT_14cb7bee0) && (*piVar11 == DAT_14cb7bee8)) goto LAB_1411ac16c;
            piVar11 = &DAT_14c948620;
            piVar12 = (int *)&DAT_14c948618;
            if (bVar19 && bVar18) {
              ppuVar13 = &local_e0;
              if (0 < uStack_c8._4_4_) {
                ppuVar13 = local_d0;
              }
              if (1 < iVar5) {
                ppuVar13 = local_d0;
              }
              piVar11 = (int *)((longlong)ppuVar13 + lVar15 + 8);
              piVar12 = (int *)((longlong)ppuVar13 + lVar15);
            }
            if ((*piVar12 == DAT_14cb7bef8) && (*piVar11 == DAT_14cb7bf00)) goto LAB_1411ac16c;
            piVar11 = &DAT_14c948620;
            piVar12 = (int *)&DAT_14c948618;
            if (bVar19 && bVar18) {
              ppuVar13 = &local_e0;
              if (0 < uStack_c8._4_4_) {
                ppuVar13 = local_d0;
              }
              if (1 < iVar5) {
                ppuVar13 = local_d0;
              }
              piVar11 = (int *)((longlong)ppuVar13 + lVar15 + 8);
              piVar12 = (int *)((longlong)ppuVar13 + lVar15);
            }
            if ((*piVar12 == DAT_14cb7bf10) && (*piVar11 == DAT_14cb7bf18)) goto LAB_1411ac16c;
          }
          uVar17 = uVar17 + 1;
          lVar15 = lVar15 + 0xc;
        } while ((longlong)uVar17 < (longlong)iVar5);
      }
      if (local_d0 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_e8._0_4_ = *(int *)(param_2 + 0x10);
    }
    iVar5 = FUN_1411ac576(plVar1,(int)local_e8,param_2);
    bVar16 = 0;
    if (iVar5 != -1) {
      bVar16 = 0;
      lVar15 = *plVar1 + (longlong)iVar5 * 0x50;
      if ((lVar15 != 0) && (*plVar1 + (longlong)iVar5 * 0x50 != -0x38)) {
        if ((longlong)*(int *)(lVar15 + 0x40) == 0) {
          bVar16 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar15 + 0x38);
          lVar15 = (longlong)*(int *)(lVar15 + 0x40) * 0x58;
          bVar16 = 0;
          do {
            bVar4 = FUN_1411ade9c(param_1,lVar14);
            bVar16 = bVar16 | bVar4;
            lVar14 = lVar14 + 0x58;
            lVar15 = lVar15 + -0x58;
          } while (lVar15 != 0);
        }
        FUN_14582d472(plVar1,param_2);
      }
    }
    uVar6 = FUN_1447210f0(param_1);
    uVar6 = FUN_1406f625c(uVar6);
    local_e0 = (undefined8 *)0x0;
    local_d8 = '\0';
    local_e8 = &PTR_FUN_14b19cd90;
    local_d0 = DAT_14c8464e0;
    uStack_c8 = DAT_14c8464e8;
    local_c0 = DAT_14c8464f0;
    local_b8 = 0;
    local_b0[0] = 0;
    local_ac = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_60 = 1;
    local_58 = 0;
    uStack_50 = 0;
    if ((DAT_14cb84f20 != 0) &&
       (cVar3 = FUN_1411ad2c6(DAT_14cb84f20,param_2,uVar6,&local_e8), cVar3 != '\0')) {
      FUN_14493b798(local_b0,param_2);
      if (((int)uStack_68 != 0) && (lVar15 = FUN_1411ac4c2(param_1), lVar15 != 0)) {
        FUN_140b126e4(param_2,&local_100);
        puVar9 = local_100;
        if (local_f8 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_f0,puVar9,1);
        if (local_100 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong)(int)uStack_68 != 0) {
          lVar14 = (longlong)(int)uStack_68 * 0x28;
          lVar10 = local_70;
          do {
            uVar6 = local_f0;
            uVar7 = FUN_1411acd1a(lVar10);
            local_108 = 0;
            FUN_1411ac4f8(lVar15,uVar7,0,uVar6);
            lVar10 = lVar10 + 0x28;
            lVar14 = lVar14 + -0x28;
          } while (lVar14 != 0);
        }
      }
    }
    local_e8 = &PTR_FUN_14b19cd90;
    FUN_1405d7ab2(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14092228b(local_70,uStack_68 & 0xffffffff);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    puVar2 = local_e0;
    local_e8 = &PTR_FUN_14a171dc0;
    if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
      if (local_e0[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *puVar2 = DAT_14c9a0ea0;
      DAT_14c9a0ea0 = puVar2;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
  }
  else {
    bVar16 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar16 & 1;
}



// FUNCTION 1411ac4c2 FUN_1411ac4c2 body=53 status=ok
// SIG undefined FUN_1411ac4c2(void)

undefined8 FUN_1411ac4c2(longlong param_1)

{
  longlong lVar1;
  
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) && (lVar1 = FUN_14043f728(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xd0);
  }
  return 0;
}



// FUNCTION 1411ac4f8 FUN_1411ac4f8 body=125 status=ok
// SIG undefined FUN_1411ac4f8(void)

undefined8
FUN_1411ac4f8(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = param_1;
  if (param_2 != 0) {
    local_28 = param_2;
    lVar2 = FUN_1411ac5e8(param_1,&local_28);
    if (lVar2 != 0) {
      local_38 = param_5;
      uVar3 = FUN_1411ac9e8(param_1,lVar2,param_3,param_4);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_1411ac551;
    }
  }
  bVar5 = (byte)uVar3;
  bVar1 = 0;
  uVar4 = 0;
LAB_1411ac551:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar4,bVar1 & bVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411ac576 FUN_1411ac576 body=114 status=ok
// SIG undefined FUN_1411ac576(void)

int FUN_1411ac576(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_14493b798(lVar4 + (longlong)iVar1 * 0x50,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x48 + (longlong)iVar1 * 0x50);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1411ac5e8 FUN_1411ac5e8 body=508 status=ok
// SIG undefined FUN_1411ac5e8(void)

undefined8 FUN_1411ac5e8(longlong param_1)

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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb10130 == 0) {
    local_40 = &local_28;
    local_28 = FUN_140754f84;
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
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
  }
  if ((*(longlong *)(lVar4 + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411ac7fa FUN_1411ac7fa body=292 status=ok
// SIG undefined FUN_1411ac7fa(void)

ulonglong FUN_1411ac7fa(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = 0;
  if (param_2 != 0) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_1401031ac(param_2,0,&local_38);
    iVar2 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      puVar1 = local_38;
      if ((int)uStack_30 == 0) {
        puVar1 = &DAT_149dfb77a;
      }
      lVar3 = 0;
      uVar6 = 0;
      do {
        uVar4 = ((uint)(0x19 < (ushort)puVar1[lVar3] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar3]) -
                0x20;
        uVar7 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar4) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar7 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
        lVar3 = lVar3 + 1;
      } while (iVar2 != (int)lVar3);
    }
    iVar2 = FUN_1411ac920((longlong *)(param_1 + 1000),uVar6,&local_38);
    if (iVar2 == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 1000);
    }
    puVar5 = (ulonglong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar5 = (ulonglong *)0x0;
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar5 == (ulonglong *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar5;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1411ac920 FUN_1411ac920 body=199 status=ok
// SIG undefined FUN_1411ac920(void)

int FUN_1411ac920(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1411ac966:
      lVar10 = (longlong)iVar1 * 0x20;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1411ac9d3;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1411ac9d3;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1411ac980;
    }
  }
  return -1;
LAB_1411ac9d3:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1411ac980:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1411ac966;
}



// FUNCTION 1411ac9e8 FUN_1411ac9e8 body=531 status=ok
// SIG undefined FUN_1411ac9e8(void)

undefined4
FUN_1411ac9e8(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong unaff_RBP;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    plVar1 = (longlong *)(param_1 + 0x120);
    uVar6 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      unaff_RBP = (ulonglong)uVar8;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      unaff_RBP);
      }
      LOCK();
      uVar5 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar5 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar8;
        uVar5 = 0;
      }
      UNLOCK();
      uVar6 = (ulonglong)uVar5;
      if (bVar10) {
        uVar6 = unaff_RBP;
      }
    }
    local_58 = (undefined8 *)(uVar6 << 0x20 | (ulonglong)uVar2);
    iVar3 = FUN_1411acbfc(plVar1,uVar2 ^ (uint)uVar6);
    if (iVar3 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)iVar3 * 0x20 + *plVar1;
    }
    uVar6 = CONCAT71((int7)(unaff_RBP >> 8),param_5);
    if (((char)param_3 == '\0') && (lVar9 == 0)) {
      lVar9 = (**(code **)(*param_2 + 0x2a0))(param_2);
      if (*(longlong *)(lVar9 + 0x30) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar9 + 0x30) + 0x2b8);
      }
      uVar4 = FUN_1411ada6c(uVar7,param_2,0,uVar6 & 0xffffffff);
    }
    else {
      if (lVar9 == 0) {
        local_60 = 0;
        FUN_14485c47a(&local_60,param_2);
        local_58 = &local_60;
        FUN_14582cdc0(plVar1,&local_4c,&local_58,0);
        lVar9 = *plVar1 + (longlong)local_4c * 0x20;
      }
      local_78 = param_1;
      local_70 = param_2;
      uVar4 = FUN_1411acf82(lVar9 + 8,param_4,param_3,uVar6 & 0xffffffff);
      if (*(int *)(lVar9 + 0x10) == 0) {
        local_68 = 0;
        FUN_14485c47a(&local_68,param_2);
        FUN_14582d0a2(plVar1,local_68);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1411acbfc FUN_1411acbfc body=180 status=ok
// SIG undefined FUN_1411acbfc(void)

int FUN_1411acbfc(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_1411accb2(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1411acc8a;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1411acc8a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411accb2 FUN_1411accb2 body=104 status=ok
// SIG undefined FUN_1411accb2(void)

ulonglong FUN_1411accb2(uint *param_1,uint *param_2)

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



// FUNCTION 1411acd1a FUN_1411acd1a body=386 status=ok
// SIG undefined FUN_1411acd1a(void)

longlong FUN_1411acd1a(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_1411ace9c();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1411ace9c FUN_1411ace9c body=228 status=ok
// SIG undefined FUN_1411ace9c(void)

longlong FUN_1411ace9c(void)

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
  if (DAT_14cb10ed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147db4217;
    local_40 = FUN_1417fad3a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"DataLayerAsset",&DAT_14cb10ed0,FUN_14640f708);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10ed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411acf82 FUN_1411acf82 body=592 status=ok
// SIG undefined FUN_1411acf82(void)

void FUN_1411acf82(longlong *param_1,longlong param_2,byte param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 unaff_RBP;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  uVar9 = param_4 & 0xffffffff;
  uVar8 = (uint)param_4;
  plVar4 = (longlong *)*param_1;
  uVar11 = *(uint *)(param_1 + 1);
  uVar14 = (ulonglong)uVar11;
  lVar15 = (longlong)(int)uVar11;
  if (param_3 == 0) {
    if (uVar11 != 0) {
      lVar12 = 0;
      do {
        if (*(longlong *)((longlong)plVar4 + lVar12) == param_2) {
          uVar5 = (int)(lVar12 >> 2) * -0x55555555;
          if (uVar5 != 0xffffffff) {
            uVar8 = (uint)CONCAT71((int7)(uVar9 >> 8),
                                   *(undefined1 *)
                                    ((longlong)plVar4 + (longlong)(int)uVar5 * 0xc + 8));
            iVar6 = ~uVar5 + uVar11;
            if (iVar6 != 0) {
              iVar13 = 1;
              if (iVar6 < 1) {
                iVar13 = iVar6;
              }
              memmove((void *)((longlong)plVar4 + (longlong)(int)uVar5 * 0xc),
                      (void *)((longlong)plVar4 + (longlong)(int)(uVar11 - iVar13) * 0xc),
                      (longlong)iVar13 * 0xc);
              uVar11 = *(uint *)(param_1 + 1);
            }
            *(uint *)(param_1 + 1) = uVar11 - 1;
            FUN_1411ad226(param_1);
            uVar14 = (ulonglong)*(uint *)(param_1 + 1);
          }
          break;
        }
        lVar12 = lVar12 + 0xc;
      } while (lVar15 * 0xc != lVar12);
      if ((int)uVar14 != 0) {
        lVar15 = *param_1;
        uVar16 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(lVar15 + 8));
        uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(lVar15 + 9));
        uVar11 = (uint)uVar9;
        if (1 < (int)uVar14) {
          lVar12 = 0;
          do {
            uVar2 = uVar16 & 1;
            uVar16 = 1;
            if (uVar2 == 0) {
              uVar16 = (ulonglong)*(uint *)(lVar15 + 0x14 + lVar12);
            }
            bVar3 = *(byte *)(lVar15 + 0x15 + lVar12);
            bVar10 = (byte)uVar9;
            uVar9 = uVar9 & 0xff;
            if (bVar10 < bVar3) {
              uVar9 = (ulonglong)bVar3;
            }
            uVar11 = (uint)uVar9;
            lVar12 = lVar12 + 0xc;
          } while (uVar14 * 0xc + -0xc != lVar12);
        }
        if (((char)uVar8 != '\0') &&
           (uVar14 = uVar16 & 1, uVar16 = CONCAT71((int7)(uVar16 >> 8),1), uVar14 == 0)) {
          uVar16 = 0;
          FUN_1411ad1d2(param_5,param_6,0,1);
        }
        uVar16 = uVar16 & 0xffffff01;
        goto LAB_1411ad085;
      }
    }
    uVar11 = 0;
    uVar16 = (ulonglong)uVar8;
  }
  else {
    if (uVar11 != 0) {
      lVar12 = lVar15 * 0xc;
      plVar7 = plVar4;
      do {
        if (*plVar7 == param_2) {
          if (plVar7 != (longlong *)0x0) {
            bVar3 = *(byte *)(plVar7 + 1);
            goto LAB_1411ad00f;
          }
          break;
        }
        plVar7 = (longlong *)((longlong)plVar7 + 0xc);
        lVar12 = lVar12 + -0xc;
      } while (lVar12 != 0);
    }
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar11 + 1) {
      FUN_14582cd2c(param_1);
      plVar4 = (longlong *)*param_1;
    }
    plVar7 = (longlong *)((longlong)plVar4 + lVar15 * 0xc);
    *plVar7 = param_2;
    *(undefined2 *)(plVar7 + 1) = 0;
    bVar3 = 0;
LAB_1411ad00f:
    *(byte *)((longlong)plVar7 + 9) = param_3;
    bVar3 = bVar3 | (byte)uVar9;
    *(byte *)(plVar7 + 1) = bVar3 & 1;
    lVar15 = *param_1;
    uVar14 = CONCAT71((int7)(param_4 >> 8),*(undefined1 *)(lVar15 + 8));
    bVar10 = *(byte *)(lVar15 + 9);
    if (1 < (longlong)(int)param_1[1]) {
      lVar12 = 0;
      do {
        uVar9 = uVar14 & 1;
        uVar14 = 1;
        if (uVar9 == 0) {
          uVar14 = (ulonglong)*(uint *)(lVar15 + 0x14 + lVar12);
        }
        bVar1 = *(byte *)(lVar15 + 0x15 + lVar12);
        if (bVar10 < bVar1) {
          bVar10 = bVar1;
        }
        lVar12 = lVar12 + 0xc;
      } while ((longlong)(int)param_1[1] * 0xc + -0xc != lVar12);
    }
    if (param_3 <= bVar10) {
      param_3 = bVar10;
    }
    uVar11 = (uint)param_3;
    uVar16 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 | bVar3) & 0xffffffffffffff01;
  }
LAB_1411ad085:
  FUN_1411ad1d2(param_5,param_6,uVar11,uVar16);
  return;
}



// FUNCTION 1411ad1d2 FUN_1411ad1d2 body=84 status=ok
// SIG undefined FUN_1411ad1d2(void)

undefined8 FUN_1411ad1d2(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x2a0))(param_2);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x2b8);
    }
    uVar2 = FUN_1411ada6c(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1411ad226 FUN_1411ad226 body=159 status=ok
// SIG undefined FUN_1411ad226(void)

void FUN_1411ad226(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xc)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xc,4);
      uVar3 = uVar3 / 0xc;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
    }
  }
  return;
}



// FUNCTION 1411ad2c6 FUN_1411ad2c6 body=1957 status=ok
// SIG undefined FUN_1411ad2c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1411ad2c6(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_190 [4];
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  int local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  longlong local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 uStack_128;
  int local_f8;
  ulonglong local_f4;
  int local_ec;
  ulonglong local_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_b8;
  ulonglong local_a8;
  undefined8 uStack_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  cVar3 = FUN_1401144ce(param_2);
  if (cVar3 == '\0') {
    uVar16 = 0;
    goto LAB_1411ad6c3;
  }
  uVar17 = ram0x00014c94861c;
  iVar11 = (int)DAT_14c948618;
  if (*(int *)(param_2 + 0x10) == 0) {
LAB_1411ad4c0:
    puVar4 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    local_1b8 = (int)DAT_14c948618;
  }
  else {
    iVar14 = *(int *)(param_2 + 0x14);
    if ((iVar14 == 0) || (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
      piVar12 = (int *)&DAT_14c948618;
      puVar4 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    }
    else {
      if (iVar14 < 2) goto LAB_1411ad4c0;
      iVar11 = *(int *)(*(longlong *)(param_2 + 0x28) + 0xc);
      uVar17 = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + 0x10);
      if (iVar14 == 2) {
        puVar4 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
        piVar12 = (int *)&DAT_14c948618;
      }
      else {
        piVar12 = (int *)(*(longlong *)(param_2 + 0x28) + 0x18);
        puVar4 = (ulonglong *)(*(longlong *)(param_2 + 0x28) + 0x1c);
      }
    }
    local_1b8 = *piVar12;
  }
  uVar15 = *puVar4;
  uStack_16c = (undefined4)uVar17;
  uStack_168 = (undefined4)(uVar17 >> 0x20);
  local_1b4 = iVar11;
  local_170 = iVar11;
  if (local_1b8 != 0) {
    if ((uVar17 == DAT_14c948034) && (iVar11 != DAT_14c948030)) {
      FUN_14011791e(&local_158,iVar11,uVar17 >> 0x20);
      uVar17 = local_158;
    }
    iVar14 = local_1b8;
    if (*(int *)(param_1 + 0x490) != *(int *)(param_1 + 0x4bc)) {
      uVar1 = (uint)(uVar17 >> 0x10);
      uVar9 = (uint)uVar17 & 0xffff;
      lVar7 = param_1 + 0x4c0;
      if (*(longlong *)(param_1 + 0x4c8) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x4c8);
      }
      iVar10 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(param_1 + 0x4d0) - 1U &
                                (int)(uVar17 >> 0x20) + ((uint)uVar17 << 0x10 | uVar9) +
                                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar10 != -1) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x488) + (longlong)iVar10 * 0x60;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x488) + (longlong)iVar10 * 0x60) == uVar17) {
            if ((longlong *)(lVar7 + 8) != (longlong *)0x0 && lVar7 != 0) {
              if ((uVar15 == DAT_14c948034) && (iVar11 = local_1b4, local_1b8 != DAT_14c948030)) {
                FUN_14011791e(&local_158,local_1b8,uVar15 >> 0x20);
                uVar15 = local_158;
                iVar11 = local_1b4;
              }
              if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
                uVar1 = (uint)(uVar15 >> 0x10);
                uVar9 = (uint)uVar15 & 0xffff;
                lVar5 = lVar7 + 0x40;
                if (*(longlong *)(lVar7 + 0x48) != 0) {
                  lVar5 = *(longlong *)(lVar7 + 0x48);
                }
                iVar10 = *(int *)(lVar5 + (ulonglong)
                                          (*(int *)(lVar7 + 0x50) - 1U &
                                          (int)(uVar15 >> 0x20) + ((uint)uVar15 << 0x10 | uVar9) +
                                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
                if (iVar10 != -1) {
                  goto LAB_1411ad4a6;
                }
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar7 + 0x58);
        } while (iVar10 != -1);
      }
    }
LAB_1411ad4f2:
    if (param_3 != (longlong *)0x0) {
      if ((uVar17 == DAT_14c948034) && (iVar14 = local_1b8, iVar11 != DAT_14c948030)) {
        FUN_14011791e(&local_158,local_1b4,uVar17 >> 0x20);
        uVar17 = local_158;
        iVar14 = local_1b8;
      }
      if (*(int *)(param_1 + 0x4e0) != *(int *)(param_1 + 0x50c)) {
        uVar1 = (uint)(uVar17 >> 0x10);
        uVar9 = (uint)uVar17 & 0xffff;
        lVar7 = param_1 + 0x510;
        if (*(longlong *)(param_1 + 0x518) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x518);
        }
        iVar11 = *(int *)(lVar7 + (ulonglong)
                                  (*(int *)(param_1 + 0x520) - 1U &
                                  (int)(uVar17 >> 0x20) + ((uint)uVar17 << 0x10 | uVar9) +
                                  (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar11 != -1) {
          do {
            lVar7 = *(longlong *)(param_1 + 0x4d8) + (longlong)iVar11 * 0x60;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x4d8) + (longlong)iVar11 * 0x60) == uVar17)
            {
              if ((longlong *)(lVar7 + 8) != (longlong *)0x0 && lVar7 != 0) {
                if ((uVar15 == DAT_14c948034) && (iVar14 != DAT_14c948030)) {
                  FUN_14011791e(&local_158,local_1b8,uVar15 >> 0x20);
                  uVar15 = local_158;
                }
                if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
                  uVar1 = (uint)(uVar15 >> 0x10);
                  uVar9 = (uint)uVar15 & 0xffff;
                  lVar5 = lVar7 + 0x40;
                  if (*(longlong *)(lVar7 + 0x48) != 0) {
                    lVar5 = *(longlong *)(lVar7 + 0x48);
                  }
                  iVar11 = *(int *)(lVar5 + (ulonglong)
                                            (*(int *)(lVar7 + 0x50) - 1U &
                                            (int)(uVar15 >> 0x20) + ((uint)uVar15 << 0x10 | uVar9) +
                                            (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
                  if (iVar11 != -1) {
                    goto LAB_1411ad619;
                  }
                }
              }
              break;
            }
            iVar11 = *(int *)(lVar7 + 0x58);
          } while (iVar11 != -1);
        }
      }
    }
  }
  bVar2 = false;
  goto LAB_1411ad63b;
LAB_1411ad4a6:
  puVar4 = (ulonglong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar10 * 0x18);
  if (*puVar4 != uVar15) goto code_r0x0001411ad4b6;
  if (puVar4 + 1 != (ulonglong *)0x0 && puVar4 != (ulonglong *)0x0) {
    uVar16 = puVar4[1];
    uStack_168 = *(undefined4 *)(uVar16 + 0x30);
    local_170 = (int)*(undefined8 *)(uVar16 + 0x28);
    uStack_16c = (undefined4)((ulonglong)*(undefined8 *)(uVar16 + 0x28) >> 0x20);
    puVar4 = (ulonglong *)(uVar16 + 0x40);
    puVar13 = &local_a8;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar13 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar13 = puVar13 + 1;
    }
    bVar2 = true;
    goto LAB_1411ad63b;
  }
  goto LAB_1411ad4f2;
code_r0x0001411ad4b6:
  iVar10 = (int)puVar4[2];
  if (iVar10 == -1) goto LAB_1411ad4f2;
  goto LAB_1411ad4a6;
  while( true ) {
    iVar11 = (int)puVar4[2];
    bVar2 = false;
    if (iVar11 == -1) break;
LAB_1411ad619:
    puVar4 = (ulonglong *)(*(longlong *)(lVar7 + 8) + (longlong)iVar11 * 0x18);
    if (*puVar4 == uVar15) {
      puVar13 = puVar4 + 1;
      bVar2 = false;
      if (puVar13 != (ulonglong *)0x0 && puVar4 != (ulonglong *)0x0) {
        uVar16 = *puVar13;
        local_138 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_158 = *(ulonglong *)(uVar16 + 0x18);
        local_150 = *(undefined4 *)(uVar16 + 0x20);
        FUN_1447715ec(&local_148,uVar16 + 0x28);
        local_180 = DAT_14cb70c20;
        local_178 = DAT_14cb70c28;
        FUN_144928d62(&local_148,5);
        local_190[0] = 0;
        local_18c = 0;
        local_184 = 0;
        lVar7 = (**(code **)(*param_3 + 0x2b0))(param_3);
        if (lVar7 != 0) {
          bVar2 = false;
          pcVar8 = (char *)FUN_14039fc7b(&local_158,local_190,lVar7,0);
          if (*pcVar8 != '\0') {
            FUN_1403a0728(local_190,&local_a8);
            FUN_1446dcdd4(&local_d0,&local_a8);
            if ((DAT_14cb704c8 == 0) || (lVar7 = FUN_144815d88(), lVar7 == 0)) {
              bVar2 = false;
            }
            else {
              local_160 = *(longlong *)(lVar7 + 0x38);
              if (local_160 == 0) {
                local_a8 = 0;
                uStack_a0 = 0;
                uStack_a0._0_4_ = 0;
              }
              else {
                FUN_1400021e4(&local_160,&local_a8);
              }
              iVar11 = (int)uStack_a0 + -1;
              if ((int)uStack_a0 == 0) {
                iVar11 = 0;
              }
              FUN_1446f82e2(&local_160,iVar11,local_a8,1);
              lVar7 = local_160;
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              FUN_1405f0c40(param_1,&local_a8,lVar7);
              bVar2 = true;
              FUN_1401533ba(&local_170,&local_a8,1);
              puVar4 = (ulonglong *)(*puVar13 + 0x60);
              puVar13 = &local_a8;
              for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar13 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar13 = puVar13 + 1;
              }
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        if (local_130 != 0) {
          FUN_1400020a8();
        }
      }
      break;
    }
  }
LAB_1411ad63b:
  FUN_140cdff3b(&local_158,param_2);
  FUN_1401533ba(&local_d0,&local_158,1);
  uVar6 = (**(code **)(*param_4 + 8))(param_4);
  local_1a0 = local_d0;
  local_198 = local_c8;
  local_1b0 = CONCAT44(uStack_16c,local_170);
  local_1a8 = uStack_168;
  lVar7 = FUN_14050b224(param_1,&local_1b0,&local_1a0,uVar6);
  uVar16 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar7 != 0);
  if ((lVar7 != 0) && (FUN_1449b16b6(uVar6,param_4,lVar7,1), bVar2)) {
    puVar4 = &local_a8;
    puVar13 = &local_158;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar13 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar13 = puVar13 + 1;
    }
    local_f8 = local_1b4;
    local_ec = local_1b8;
    local_f4 = uVar17;
    local_e8 = uVar15;
    FUN_1488de66a(&local_158,param_4);
  }
LAB_1411ad6c3:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 1411ada6c FUN_1411ada6c body=1071 status=ok
// SIG undefined FUN_1411ada6c(void)

undefined4 FUN_1411ada6c(longlong param_1,longlong *param_2,uint param_3,char param_4)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  uint *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_b8 [35];
  char local_95;
  int local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == (longlong *)0x0) {
    uVar4 = 0;
    goto LAB_1411add62;
  }
  (**(code **)(*param_2 + 0x310))(param_2,&local_50);
  cVar2 = FUN_143797fc8(param_1,local_50);
  uVar4 = FUN_140aece94(param_1,param_2,local_54);
  if ((char)uVar4 == '\0') goto LAB_1411add62;
  if (cVar2 != (char)param_3) {
    local_95 = param_4;
    local_94 = FUN_14487fd02(param_1);
    cVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
    cVar3 = (**(code **)(*param_2 + 0x2c0))(param_2);
    local_88 = param_1 + 0x610;
    lVar6 = param_1 + 0x660;
    lVar5 = param_1 + 0x6b0;
    if (cVar3 == '\0' && cVar2 == '\0') {
      lVar6 = param_1 + 0x5c0;
      lVar5 = local_88;
    }
    local_90 = param_1 + 0x5c0;
    (**(code **)(*param_2 + 0x310))(param_2,&local_60);
    FUN_144a8b5fe(lVar5,local_60);
    (**(code **)(*param_2 + 0x310))(param_2,&local_68);
    FUN_144a8b5fe(lVar6,local_68);
    if ((char)param_3 == '\x02') {
      (**(code **)(*param_2 + 0x310))(param_2,&local_80);
LAB_1411adbda:
      FUN_144869592(lVar6,local_6c,&local_80,0);
    }
    else if ((param_3 & 0xff) == 1) {
      (**(code **)(*param_2 + 0x310))(param_2,&local_80);
      lVar6 = lVar5;
      goto LAB_1411adbda;
    }
    if (0xfffffffd < local_94 - 3U && (cVar3 == '\0' && cVar2 == '\0')) {
      FUN_14103d96c();
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (uVar1 < 0xffffffff00000000) {
        plVar9 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar9 = (longlong *)0x0;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,param_1,uVar1,0xb);
      }
      else {
        uVar10 = (uint)uVar1;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
          puVar7 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar7 = DAT_14c998080;
          }
          if ((*(uint *)(puVar7 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
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
      FUN_144aa2048(local_90,&local_80);
      if ((longlong *)(param_1 + 0x5a0) == &local_80) {
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x5a0) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x5a0) = local_80;
        local_80 = 0;
        *(undefined4 *)(param_1 + 0x5a8) = local_78;
        *(undefined4 *)(param_1 + 0x5ac) = local_74;
      }
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (uVar1 < 0xffffffff00000000) {
        plVar9 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar9 = (longlong *)0x0;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,param_1,uVar1,0xc);
      }
      else {
        uVar10 = (uint)uVar1;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
          puVar7 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar7 = DAT_14c998080;
          }
          if ((*(uint *)(puVar7 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
            puVar8 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar8 = (uint *)(lVar5 + 8);
            }
            *puVar8 = *puVar8 | 0x1000;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
      FUN_144aa2048(local_88,&local_80);
      if ((longlong *)(param_1 + 0x5b0) == &local_80) {
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x5b0) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x5b0) = local_80;
        local_80 = 0;
        *(undefined4 *)(param_1 + 0x5b8) = local_78;
        *(undefined4 *)(param_1 + 0x5bc) = local_74;
      }
    }
    *(int *)(param_1 + 0x910) = *(int *)(param_1 + 0x910) + 1;
    FUN_14379c834(param_1,param_2,1);
    param_4 = local_95;
  }
  if ((param_4 != '\0') && (lVar5 = param_2[8], (longlong)(int)lVar5 != 0)) {
    lVar6 = param_2[7];
    lVar11 = 0;
    do {
      FUN_1411ada6c(param_1,*(undefined8 *)(lVar6 + lVar11),param_3,1);
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar11);
  }
LAB_1411add62:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411ade9c FUN_1411ade9c body=706 status=ok
// SIG undefined FUN_1411ade9c(void)

undefined4 FUN_1411ade9c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  bool bVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_2 != 0 && *(char *)(param_1 + 0x178) == '\x03') &&
     ((longlong)*(int *)(param_1 + 0x3a8) != 0)) {
    plVar7 = *(longlong **)(param_1 + 0x3a0);
    lVar12 = (longlong)*(int *)(param_1 + 0x3a8) << 4;
    do {
      lVar4 = *plVar7;
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) == *param_2)) {
        if ((*(double *)(lVar4 + 0x10) == (double)param_2[1]) &&
           (!NAN(*(double *)(lVar4 + 0x10)) && !NAN((double)param_2[1]))) {
          if ((*(double *)(lVar4 + 0x18) == (double)param_2[2]) &&
             (!NAN(*(double *)(lVar4 + 0x18)) && !NAN((double)param_2[2]))) {
            if ((*(double *)(lVar4 + 0x20) == (double)param_2[3]) &&
               (!NAN(*(double *)(lVar4 + 0x20)) && !NAN((double)param_2[3]))) {
              if (plVar7 != (longlong *)0x0) {
                local_50 = (longlong *)plVar7[1];
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                  UNLOCK();
                }
                iVar3 = *(int *)(param_1 + 0x398);
                lVar12 = (longlong)iVar3;
                local_58 = lVar4;
                if (lVar12 != 0) {
                  local_68 = *(longlong **)(param_1 + 0x390);
                  local_6c = 0;
                  bVar15 = false;
                  if (*local_68 == *(longlong *)(lVar4 + 8)) {
                    if (((double)local_68[1] == *(double *)(lVar4 + 0x10)) &&
                       (!NAN((double)local_68[1]) && !NAN(*(double *)(lVar4 + 0x10)))) {
                      if (((double)local_68[2] == *(double *)(lVar4 + 0x18)) &&
                         (!NAN((double)local_68[2]) && !NAN(*(double *)(lVar4 + 0x18)))) {
                        bVar15 = *(double *)(lVar4 + 0x20) == (double)local_68[3];
                        goto LAB_1411adff0;
                      }
                    }
                    bVar15 = false;
                  }
LAB_1411adff0:
                  local_60 = local_68 + 0xe;
                  iVar5 = 0;
                  do {
                    lVar8 = (longlong)iVar5;
                    iVar9 = iVar5 + 1;
                    iVar11 = iVar9;
                    if (iVar9 < iVar3) {
                      iVar11 = iVar3;
                    }
                    if (lVar8 + 1 < lVar12) {
                      pdVar14 = (double *)(local_60 + lVar8 * 0xb);
                      bVar10 = true;
                      lVar13 = lVar8 + 2;
                      do {
                        iVar16 = iVar9;
                        if ((((pdVar14[-3] != *(double *)(lVar4 + 8)) ||
                             (pdVar14[-2] != *(double *)(lVar4 + 0x10))) ||
                            (NAN(pdVar14[-2]) || NAN(*(double *)(lVar4 + 0x10)))) ||
                           ((pdVar14[-1] != *(double *)(lVar4 + 0x18) ||
                            (NAN(pdVar14[-1]) || NAN(*(double *)(lVar4 + 0x18)))))) {
                          if (bVar15 != false) break;
                        }
                        else if ((*pdVar14 == *(double *)(lVar4 + 0x20)) != bVar15) break;
                        bVar10 = lVar13 < lVar12;
                        iVar9 = iVar9 + 1;
                        pdVar14 = pdVar14 + 0xb;
                        bVar17 = lVar13 != lVar12;
                        lVar13 = lVar13 + 1;
                        iVar16 = iVar11;
                      } while (bVar17);
                    }
                    else {
                      bVar10 = false;
                      iVar16 = iVar11;
                    }
                    iVar11 = iVar16 - iVar5;
                    if (bVar15 == false) {
                      if (local_6c != iVar5) {
                        memmove(local_68 + (longlong)local_6c * 0xb,local_68 + lVar8 * 0xb,
                                (longlong)iVar11 * 0x58);
                      }
                      local_6c = local_6c + iVar11;
                    }
                    else {
                      FUN_14121cc12(local_68 + lVar8 * 0xb,iVar11);
                    }
                    bVar15 = (bool)(bVar15 ^ 1);
                    iVar5 = iVar16;
                  } while (bVar10);
                  *(int *)(param_1 + 0x398) = local_6c;
                }
                uVar6 = FUN_14619e128(param_1,&local_58);
                plVar7 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_50 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_50)(local_50);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar7 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                }
                goto LAB_1411adf42;
              }
              break;
            }
          }
        }
      }
      plVar7 = plVar7 + 2;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
  }
  uVar6 = 0;
LAB_1411adf42:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1411ae168 FUN_1411ae168 body=307 status=ok
// SIG undefined FUN_1411ae168(void)

longlong * FUN_1411ae168(longlong *param_1)

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
  *param_1 = (longlong)&PTR_FUN_14ac47ab0;
  FUN_14044066a(param_1 + 0x10,10,1);
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_140440628(param_1 + 0x18,&DAT_14cb23ee0,0);
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x25) = 4;
  *(undefined4 *)(param_1 + 0x22) = 3;
  *(undefined1 *)(param_1 + 0x26) = 2;
  *(byte *)(param_1 + 0x27) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 4;
  *(undefined4 *)(param_1 + 0x2a) = 0x40400000;
  *(undefined1 *)(param_1 + 0x2e) = 3;
  *(char *)(param_1 + 0x2f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x182) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



// FUNCTION 1411ae29c FUN_1411ae29c body=20 status=ok
// SIG undefined FUN_1411ae29c(void)

void FUN_1411ae29c(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = *(undefined1 *)(param_1 + 0x181);
  *(undefined2 *)(param_1 + 0x7b) = 0;
  return;
}



// FUNCTION 1411ae2b0 FUN_1411ae2b0 body=224 status=ok
// SIG undefined FUN_1411ae2b0(void)

ulonglong FUN_1411ae2b0(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte unaff_BPL;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  
  if (((*(longlong *)(param_1 + 0x2d8) == 0) || (*(longlong *)(param_1 + 0x2f0) == 0)) ||
     (lVar4 = FUN_1411ae398(), lVar4 == 0)) {
    uVar8 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x2f0);
    lVar7 = *(longlong *)(lVar4 + 0x38);
    lVar5 = FUN_14582d86a(param_1);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (lVar7 == lVar5) {
      uVar6 = FUN_1411ae398(lVar4,param_2);
      lVar4 = *(longlong *)(param_1 + 0x2d8);
      lVar7 = FUN_1411ae390(uVar6);
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x28);
        if (lVar7 != 0) {
          uVar9 = 0;
          do {
            bVar2 = *(char *)(lVar4 + 0x34) - 2;
            uVar8 = 1;
            if (bVar2 < 4) {
              uVar8 = *(ulonglong *)(&DAT_14a8798e8 + (ulonglong)bVar2 * 8);
            }
            unaff_BPL = uVar9 < uVar8;
            uVar8 = uVar9;
            if (!(bool)unaff_BPL) break;
            cVar3 = FUN_1412d295c(lVar4,uVar9 & 0xffffffff);
            uVar8 = uVar9 + 1;
            pcVar1 = (char *)(lVar7 + 0x20 + uVar9);
            uVar9 = uVar8;
          } while (*pcVar1 == cVar3);
        }
        uVar8 = CONCAT71((int7)(uVar8 >> 8),lVar7 == 0 | unaff_BPL);
      }
    }
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 1411ae390 FUN_1411ae390 body=8 status=ok
// SIG undefined FUN_1411ae390(void)

undefined8 FUN_1411ae390(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



// FUNCTION 1411ae398 FUN_1411ae398 body=27 status=ok
// SIG undefined FUN_1411ae398(void)

undefined8 FUN_1411ae398(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) || (lVar1 = 0x30, *(char *)(param_1 + 0x40) == '\0')) {
    lVar1 = 0x28;
  }
  return *(undefined8 *)(param_1 + lVar1);
}



// FUNCTION 1411ae3b8 FUN_1411ae3b8 body=228 status=ok
// SIG undefined FUN_1411ae3b8(void)

longlong FUN_1411ae3b8(void)

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
  if (DAT_14cacd1b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1434b5846;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463aa280;
    local_38 = &LAB_14793b35d;
    local_40 = &LAB_1463aa285;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x240;
    FUN_14081cfa3(L"/Script/Engine",L"MirrorDataTable",&DAT_14cacd1b8,&DAT_14793b35c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacd1b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411ae49e FUN_1411ae49e body=228 status=ok
// SIG undefined FUN_1411ae49e(void)

longlong FUN_1411ae49e(void)

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
  if (DAT_14cb46fd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1483e57ad;
    local_40 = &LAB_146486f2f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x19b0;
    FUN_14081cfa3(L"/Script/Water",L"WaterBodyComponent",&DAT_14cb46fd8,FUN_146486f08);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46fd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


