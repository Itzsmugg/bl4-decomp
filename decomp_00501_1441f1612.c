// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441f1612 FUN_1441f1612 body=581 status=ok
// SIG undefined FUN_1441f1612(void)

void FUN_1441f1612(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (((*(longlong *)(lVar3 + 0xe78) == 0) || (*(longlong *)(lVar3 + 0xe80) == 0)) ||
     (*(int *)(*(longlong *)(lVar3 + 0xe80) + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar5 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
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
    *local_58 = &PTR_FUN_14b995700;
    local_58[3] = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0xc);
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
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar9;
    puVar5[4] = FUN_14624fc66;
    *(undefined4 *)(puVar5 + 5) = 0;
    local_68 = 0;
    FUN_1405f67fc(uVar6,&local_48,&local_58,L"AOakPlayerController.NotifyNewGameFlowEnd");
    *(undefined8 *)(lVar3 + 0xe78) = local_48;
    local_48 = 0;
    plVar4 = *(longlong **)(lVar3 + 0xe80);
    *(longlong **)(lVar3 + 0xe80) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_1441f17c9;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441f17c9:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f1858 FUN_1441f1858 body=166 status=ok
// SIG undefined FUN_1441f1858(void)

void FUN_1441f1858(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  code **local_28;
  code *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145b005e2();
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    lVar4 = FUN_1410decb6();
    lVar2 = *(longlong *)(param_1 + 0xbe0);
    if (((lVar2 != 0) && (lVar4 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) {
      iVar1 = *(int *)(lVar4 + 0x38);
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar4 + 0x30)) {
        local_28 = &local_20;
        local_20 = FUN_148dbb170;
        local_18 = 0;
        FUN_1441f11e2(lVar2,&DAT_14cbc9be8,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),param_1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f1900 FUN_1441f1900 body=1006 status=ok
// SIG undefined FUN_1441f1900(void)

void FUN_1441f1900(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong *local_98;
  ulonglong uStack_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1409d33a4();
  uVar4 = FUN_14497e828(param_1);
  lVar5 = FUN_14021f720(uVar4);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0xec) != 0)) {
    lVar5 = param_1[0x49d];
    if (lVar5 == 0) {
      FUN_1446f470e(&local_80,L"PausedInputComponent",1);
      local_b0 = 0;
      local_b8 = 0;
      lVar5 = FUN_145a32d77(param_1,CONCAT44(uStack_7c,local_80),0,0);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      param_1[0x49d] = lVar5;
      *(undefined4 *)(lVar5 + 400) = 999;
      *(byte *)(param_1[0x49d] + 0x194) = *(byte *)(param_1[0x49d] + 0x194) | 1;
      lVar5 = param_1[0x49d];
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14575f3fc(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
  }
  uVar4 = FUN_14497e828(param_1);
  lVar5 = FUN_140b64196(uVar4);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x3c) == 0)) {
    uVar4 = FUN_1415336fa(param_1);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14575f3fc(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
  }
  if (((*(byte *)(param_1 + 0xb4) & 2) == 0) ||
     (lVar5 = (**(code **)(*param_1 + 0x6b8))(param_1), lVar5 == param_1[0x7a])) goto LAB_1441f1a03;
  lVar5 = param_1[0x49f];
  if (lVar5 == 0) {
    local_98 = (ulonglong *)0x0;
    uStack_90 = 0;
    lVar5 = FUN_145bc56c6();
    if (lVar5 == 0) {
      local_a8 = 0;
      uStack_a0 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      FUN_1400bbfae(&local_80,lVar5);
      local_a8 = CONCAT44(uStack_7c,local_80);
      uStack_a0 = CONCAT44(uStack_74,uStack_78);
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      uVar8 = *(uint *)(lVar5 + 0xc);
      uVar11 = local_70;
      uVar9 = local_68;
      uVar10 = local_64;
      if (cVar2 != '\0') {
        uVar7 = 0;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
          uVar8 = 0;
          goto LAB_1441f1b5e;
        }
      }
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar7 = (ulonglong)*(uint *)(lVar5 + 0x10);
      if (*(uint *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar5 + 0x10);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(lVar5 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar3 = uVar6;
        }
        uVar7 = (ulonglong)uVar3;
      }
    }
LAB_1441f1b5e:
    uStack_90 = CONCAT44(uStack_90._4_4_,1);
    FUN_146631bea(&local_98);
    *local_98 = (ulonglong)uVar8 | uVar7 << 0x20;
    *(undefined4 *)(local_98 + 1) = (undefined4)local_a8;
    *(undefined4 *)((longlong)local_98 + 0xc) = local_a8._4_4_;
    *(undefined4 *)(local_98 + 2) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)local_98 + 0x14) = uStack_a0._4_4_;
    local_98[3] = uVar11;
    *(undefined4 *)(local_98 + 4) = uVar9;
    *(undefined4 *)((longlong)local_98 + 0x24) = uVar10;
    FUN_1446f470e(&local_80,L"CinematicInputComponent",1);
    lVar5 = FUN_145d1614e(param_1,CONCAT44(uStack_7c,local_80));
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    param_1[0x49f] = lVar5;
    FUN_140375764(lVar5,&local_98);
    *(undefined4 *)(param_1[0x49f] + 400) = 1000;
    *(byte *)(param_1[0x49f] + 0x194) = *(byte *)(param_1[0x49f] + 0x194) & 0xfe;
    FUN_14096d148(local_98,uStack_90 & 0xffffffff);
    if (local_98 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    lVar5 = param_1[0x49f];
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14575f3fc(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
LAB_1441f1a03:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f1d34 FUN_1441f1d34 body=311 status=ok
// SIG undefined FUN_1441f1d34(void)

void FUN_1441f1d34(longlong param_1)

{
  longlong lVar1;
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
  lVar1 = *(longlong *)(param_1 + 0x398);
  if (lVar1 != 0) {
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
      lVar1 = *(longlong *)(param_1 + 0x398);
      if (lVar1 == 0) goto LAB_1441f1d8c;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_1441f1d8c:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f1e80 FUN_1441f1e80 body=1539 status=ok
// SIG undefined FUN_1441f1e80(void)

ulonglong FUN_1441f1e80(code *param_1,longlong param_2,code *param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined7 uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined8 *local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_80 = param_2;
  lVar6 = FUN_1447210f0();
  if ((lVar6 == 0) || (cVar3 = (**(code **)(*(longlong *)param_1 + 0x6c8))(param_1), cVar3 == '\0'))
  {
LAB_1441f23c8:
    puVar11 = (undefined8 *)0x0;
  }
  else {
    if (param_2 == 0) {
      local_80 = DAT_14cb71810;
      param_2 = DAT_14cb71810;
    }
    lVar14 = *(longlong *)(param_1 + 0x398);
    if (lVar14 == 0) goto LAB_1441f23c8;
    if (DAT_14cbae3d8 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1464f5fc4;
      local_b8 = &LAB_148c3dd26;
      local_c0 = &LAB_1459673ba;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar14 = *(longlong *)(param_1 + 0x398);
      if (lVar14 == 0) goto LAB_1441f23c8;
    }
    puVar11 = (undefined8 *)0x0;
    if ((DAT_14cbae3d8 != 0) && (lVar7 = *(longlong *)(lVar14 + 0x10), lVar7 != 0)) {
      if ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          != DAT_14cbae3d8 + 0x30)) goto LAB_1441f23c8;
      lVar7 = FUN_1400f6f32(lVar6);
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(lVar7 + 0x68);
      }
      lVar6 = FUN_1400f6f32(lVar6);
      if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 == 0)) {
LAB_1441f1f8b:
        cVar3 = FUN_14625962a(lVar14,param_1);
        if (cVar3 == '\0') goto LAB_1441f23c8;
        cVar3 = FUN_146022fd6(lVar14,&local_80,0);
        if (cVar3 == '\0') {
          uVar9 = FUN_1403b0700(lVar14);
          FUN_145d0a0b4(uVar9,&local_80,1);
        }
        lVar6 = FUN_1403b0700(lVar14);
        if ((*(longlong *)(lVar6 + 0x38) == 0) || (*(longlong *)(lVar6 + 0x38) == DAT_14cb71810))
        goto LAB_1441f223a;
        uStack_70 = local_80;
        local_58 = (undefined8 *)*param_4;
        *param_4 = 0;
        local_50 = (int)param_4[1];
        *(undefined4 *)(param_4 + 1) = 0;
        local_90 = (undefined8 *)0x0;
        local_88 = 0;
        local_78 = param_1;
        local_68 = param_1;
        FUN_1446efa72(&local_90,0,5,0x10);
        puVar2 = local_90;
        local_88 = 5;
        *local_90 = &PTR_LAB_14b96eac0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_90[2] = lVar7;
        *local_90 = &PTR_FUN_14b995430;
        local_90[3] = 0;
        iVar5 = 0;
        if (param_1 != (code *)0x0) {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_90 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          }
          else {
            puVar11 = (undefined8 *)0x0;
          }
          iVar5 = *(int *)(puVar11 + 2);
          if (*(int *)(puVar11 + 2) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar13 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            iVar5 = *(int *)(puVar11 + 2);
            bVar15 = iVar5 == 0;
            if (bVar15) {
              *(int *)(puVar11 + 2) = iVar13;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar5 = iVar13;
            }
          }
        }
        *(int *)((longlong)puVar2 + 0x1c) = iVar5;
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_78._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_70._4_4_;
        puVar2[6] = local_68;
        puVar2[8] = 0;
        *(undefined4 *)(puVar2 + 9) = 0;
        FUN_14114e6dc(puVar2 + 8,&local_58);
        cVar3 = FUN_14625acde(lVar14,&local_90);
        if (cVar3 == '\0') {
          FUN_1441f2484(&local_78,7);
          plVar10 = (longlong *)FUN_14497e828(param_1);
          uVar12 = (undefined7)((ulonglong)puVar11 >> 8);
          puVar11 = (undefined8 *)CONCAT71(uVar12,1);
          if (DAT_14cb80ee0 == '\0') {
            if (plVar10 != (longlong *)0x0) {
              lVar6 = FUN_1403ca142();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                  lVar6 + 0x30)) {
                bVar4 = (**(code **)(*plVar10 + 0x498))(plVar10);
                puVar11 = (undefined8 *)CONCAT71(uVar12,5 < bVar4);
                goto LAB_1441f2182;
              }
            }
            puVar11 = (undefined8 *)0x0;
          }
        }
LAB_1441f2182:
        if (local_50 == 0) {
LAB_1441f21be:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_1441f21be;
        }
        if (cVar3 == '\0') goto LAB_1441f23ca;
      }
      else {
        lVar8 = FUN_14130c5c8();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           ((puVar11 = (undefined8 *)0x0, lVar7 == 0 ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)))) goto LAB_1441f1f8b;
        puVar11 = &local_78;
        FUN_140d27df6(lVar7,puVar11,param_1);
        if (((short)local_78 < 0) ||
           ((cVar3 = FUN_14625f6ba(lVar6,&local_78), cVar3 == '\0' || (param_2 != DAT_14cb71810))))
        goto LAB_1441f1f8b;
      }
LAB_1441f223a:
      local_78 = param_3;
      if (param_3 == (code *)0x0) {
        lVar6 = FUN_14497e828(param_1);
        if (lVar6 != 0) {
          lVar7 = FUN_1403ca142();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            lVar6 = FUN_140d27a2a(lVar6);
            local_78 = *(code **)(lVar6 + 0xb8);
            if (local_78 != (code *)0x0) goto LAB_1441f2293;
          }
        }
      }
      else {
LAB_1441f2293:
        uVar9 = FUN_1405c673d();
        cVar3 = FUN_148cef184(uVar9,&local_78,0,0);
        if (cVar3 != -1) {
          *(char *)(lVar14 + 0x710) = cVar3;
          FUN_145be8d80(lVar14);
        }
      }
      puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
    }
  }
LAB_1441f23ca:
  if ((int)param_4[1] != 0) {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441f2401;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_1441f2401:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar11 & 0xffffff01;
}



// FUNCTION 1441f2484 FUN_1441f2484 body=1005 status=ok
// SIG undefined FUN_1441f2484(void)

void FUN_1441f2484(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 unaff_RBX;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined7 uVar8;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *param_1;
  plVar3 = (longlong *)FUN_14497e828(lVar1);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar7 = (undefined4)CONCAT71(uVar8,1);
  if ((param_2 != 0) && (DAT_14cb80ee0 == '\0')) {
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_1403ca142();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        bVar2 = (**(code **)(*plVar3 + 0x498))(plVar3);
        uVar7 = (undefined4)CONCAT71(uVar8,5 < bVar2);
        goto LAB_1441f24f4;
      }
    }
    uVar7 = 0;
  }
LAB_1441f24f4:
  lVar4 = *(longlong *)(lVar1 + 0x398);
  if (lVar4 == 0) goto LAB_1441f2535;
  if (DAT_14cbae3d8 == 0) {
    local_90 = &local_58;
    local_58 = FUN_141030f22;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464f5fc4;
    local_98 = &LAB_148c3dd26;
    local_a0 = &LAB_1459673ba;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x1360;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    lVar4 = *(longlong *)(lVar1 + 0x398);
    if (lVar4 == 0) goto LAB_1441f2535;
  }
  if ((((DAT_14cbae3d8 == 0) || (lVar6 = *(longlong *)(lVar4 + 0x10), lVar6 == 0)) ||
      (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) !=
      DAT_14cbae3d8 + 0x30)) goto LAB_1441f2535;
  local_58 = (code *)0x0;
  uVar5 = FUN_1403b0700(lVar4);
  FUN_145d0a0b4(uVar5,&local_58,1);
  if ((char)uVar7 == '\0') {
    lVar4 = param_1[2];
    uVar5 = FUN_140d27aa0(lVar4);
    FUN_145cb003e(uVar5,0);
    lVar6 = FUN_140d27aa0(lVar4);
    *(undefined2 *)(lVar6 + 0x45) = 0x100;
    lVar6 = *(longlong *)(lVar4 + 0x398);
    if (lVar6 != 0) {
      if (DAT_14cbae3d8 == 0) {
        local_58 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1464f5fc4;
        local_98 = &LAB_148c3dd26;
        local_a0 = &LAB_1459673ba;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x1360;
        local_90 = &local_58;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar6 = *(longlong *)(lVar4 + 0x398);
        if (lVar6 == 0) goto LAB_1441f2678;
      }
      if (((DAT_14cbae3d8 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x10), lVar4 != 0)) &&
         ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar4 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
           == DAT_14cbae3d8 + 0x30)))) {
        FUN_148dc09d8();
      }
    }
  }
  else {
    FUN_145d09f9e(lVar4,param_1 + 1,0);
    uVar5 = FUN_140d27aa0(lVar1);
    FUN_145cb003e(uVar5,1);
    lVar4 = FUN_140d27aa0(lVar1);
    *(undefined2 *)(lVar4 + 0x45) = 0x101;
    uVar5 = FUN_1447210f0(lVar1);
    local_48 = 0;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_1460028be(uVar5,lVar1);
  }
LAB_1441f2678:
  lVar4 = FUN_1447210f0(lVar1);
  if (lVar4 != 0) {
    lVar6 = FUN_1400f6f32(lVar4);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(lVar6 + 0x68);
    }
    lVar4 = FUN_1400f6f32(lVar4);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0 && lVar6 != 0)) {
      FUN_140d27df6(lVar6,&local_58,lVar1);
      FUN_146563380(lVar4,&local_58,uVar7);
    }
  }
  if (((int)param_1[5] != 0) && (plVar3 = (longlong *)param_1[4], plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar7);
  }
LAB_1441f2535:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f2872 FUN_1441f2872 body=888 status=ok
// SIG undefined FUN_1441f2872(void)

void FUN_1441f2872(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_3f8 [40];
  undefined4 local_3d0 [2];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined8 uStack_394;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined2 local_354;
  undefined1 local_352;
  undefined4 local_351;
  undefined4 local_344;
  undefined8 local_340;
  uint local_338;
  uint uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined1 local_320 [8];
  longlong local_318 [87];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_340 = param_2;
  cVar3 = FUN_14662fce8(param_1 + 0x34f0);
  if (cVar3 != '\0') {
    local_344 = *(undefined4 *)(*(longlong *)(param_1 + 0x398) + 0x394);
    local_338 = 0;
    uStack_334 = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
    local_328 = SUB84(puVar4,0);
    uStack_324 = (undefined4)((ulonglong)puVar4 >> 0x20);
    *puVar4 = &PTR_FUN_14b995510;
    puVar4[1] = &local_340;
    puVar4[2] = &local_344;
    puVar4[3] = param_3;
    puVar4[4] = param_4;
    if (puVar4 + 1 != (longlong *)0x0) {
      local_338 = 0x441f779e;
      uStack_334 = 1;
    }
    FUN_141499582(param_1,&local_338);
    if (CONCAT44(uStack_334,local_338) != 0) {
      plVar8 = (longlong *)CONCAT44(uStack_324,local_328);
      if ((longlong *)CONCAT44(uStack_324,local_328) == (longlong *)0x0) {
        plVar8 = local_318;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if ((((*param_4 != 0) && (param_4[1] != 0)) && (*param_4 != DAT_14c948000)) &&
       ((DAT_14cb88fb8 != 0 && (lVar5 = FUN_144815d88(DAT_14cb88fb8,param_4), lVar5 != 0)))) {
      lVar7 = *(longlong *)(lVar5 + 0xd0);
      if (lVar7 == 0) {
        uVar6 = FUN_1407ad36c();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(lVar5 + 0xd0) = lVar7;
      }
      plVar8 = (longlong *)(lVar5 + 200);
      if (*(longlong *)(lVar5 + 0xd8) == 0) {
        if ((lVar7 == 0) || (*plVar8 == 0)) goto LAB_1441f2afe;
        plVar1 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
          *(undefined8 *)(lVar5 + 0xd8) = 0;
          goto LAB_1441f2afe;
        }
        uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar6,plVar8);
        *(longlong *)(lVar5 + 0xd8) = lVar7;
        if (lVar7 == 0) goto LAB_1441f2afe;
      }
      lVar7 = FUN_1447210f0(param_1);
      uVar10 = 0;
      iStack_330 = 0;
      if (lVar7 != 0) {
        uVar10 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iStack_330 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iStack_330 = *(int *)(lVar7 + 0x10);
          bVar11 = iStack_330 == 0;
          if (bVar11) {
            *(int *)(lVar7 + 0x10) = iVar9;
            iStack_330 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iStack_330 = iVar9;
          }
        }
      }
      local_338 = local_338 & 0xffffff00;
      uStack_32c = 0;
      local_328 = 0;
      local_60 = 0;
      local_58 = 0x800000000;
      uStack_334 = uVar10;
      FUN_1407ae7e8(lVar5 + 0xe0,&local_338,*(undefined8 *)(param_1 + 0x3d0),local_340);
      local_3d0[0] = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      uStack_39c = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_358 = 0xffffffff;
      local_354 = 0;
      local_352 = 1;
      local_351 = 0;
      uVar6 = FUN_1447210f0(param_1);
      uVar6 = FUN_140115346(uVar6);
      FUN_1407ae347(uVar6,plVar8,&local_338,local_3d0);
      FUN_1407acd04(local_320);
    }
  }
LAB_1441f2afe:
  if (*(longlong *)(param_4 + 6) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f2bec FUN_1441f2bec body=159 status=ok
// SIG undefined FUN_1441f2bec(void)

void FUN_1441f2bec(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x3d38);
  FUN_1441f2c8c(param_1,puVar1);
  iVar2 = *(int *)(param_1 + 0x3d28);
  _Src = *(void **)(param_1 + 0x3d20);
  *(int *)(param_1 + 0x3d40) = iVar2;
  if (iVar2 == 0 && *(int *)(param_1 + 0x3d44) == 0) {
    *(undefined4 *)(param_1 + 0x3d44) = 0;
  }
  else {
    FUN_140bf0c0e(puVar1,iVar2);
    if (iVar2 != 0) {
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 3);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x3d30);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0x3d30);
    }
  }
  *(longlong *)(param_1 + 0x3d48) = lVar3;
  return;
}



// FUNCTION 1441f2c8c FUN_1441f2c8c body=436 status=ok
// SIG undefined FUN_1441f2c8c(void)

void FUN_1441f2c8c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[0x7ab] != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(param_1[0x7aa] + 8 + lVar5) != 0) &&
         (*(longlong *)(param_1[0x7aa] + lVar5) != 0)) {
        FUN_148dbffe8(param_1 + 0x7aa,param_2);
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)param_1[0x7ab] * 0x10 != lVar5);
  }
  if ((*(byte *)(param_1 + 0x84) & 2) != 0) {
    cVar3 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (((cVar3 != '\0') && ((char)param_1[0x2f] != '\x03')) && (param_1[0x7a6] != 0)) {
      iVar4 = (int)param_1[0x7a5];
      if (0 < iVar4) {
        lVar5 = param_2[2];
        lVar7 = 0;
        do {
          iVar1 = *(int *)(param_1[0x7a4] + 4 + lVar7 * 8);
          if ((iVar1 != 0) && (uVar2 = *(uint *)(param_1[0x7a4] + lVar7 * 8), -1 < (int)uVar2)) {
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar1)) &&
                 (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
                  ((*plVar6 != 0 && ((*(uint *)(*plVar6 + 8) >> 0x1e & 1) == 0)))))) {
                if ((lVar5 != 0) && (lVar7 < (int)param_2[1])) {
                  iVar1 = *(int *)(*param_2 + 4 + lVar7 * 8);
                  if (((((iVar1 != 0) && (uVar2 = *(uint *)(*param_2 + lVar7 * 8), -1 < (int)uVar2))
                       && ((int)uVar2 < DAT_14c9647dc)) &&
                      ((plVar6 = (longlong *)
                                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
                     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0))))
                  goto LAB_1441f2e18;
                }
                FUN_148bf1e78(param_1[0x7a6] + 0x730);
                iVar4 = (int)param_1[0x7a5];
              }
            }
          }
LAB_1441f2e18:
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar4);
      }
    }
  }
  return;
}



// FUNCTION 1441f2e40 FUN_1441f2e40 body=69 status=ok
// SIG undefined FUN_1441f2e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441f2e40(void)

{
  _DAT_14cbcfb88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441f2e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbcfb90,1);
  return;
}



// FUNCTION 1441f2e8e FUN_1441f2e8e body=185 status=ok
// SIG undefined FUN_1441f2e8e(void)

void FUN_1441f2e8e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x3c50) != 0) {
    cVar1 = FUN_14030d2b6(*(longlong *)(param_1 + 0x3c50) + 0xd98,&DAT_14cbd96c0);
    if ((cVar1 != '\0') && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
      local_30 = *param_2;
      local_28 = param_2[1];
      local_20 = param_2[2];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      FUN_1418e2520(param_1 + 0x3d68,&local_30);
    }
  }
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    FUN_1411c648e(*(undefined8 *)(lVar2 + 0x1f0));
  }
  FUN_140389334(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f2f48 FUN_1441f2f48 body=559 status=ok
// SIG undefined FUN_1441f2f48(void)

void FUN_1441f2f48(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_1441f30b0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e6310;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b995690;
  local_48[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_48 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  iVar7 = local_40;
  puVar4 = local_48;
  *(int *)((longlong)puVar3 + 0x1c) = iVar6;
  puVar3[4] = FUN_145838d4a;
  *(undefined4 *)(puVar3 + 5) = 0;
  plVar1 = (longlong *)(param_2 + 0x20);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  if (*(int *)(param_2 + 0x28) == 0) {
LAB_1441f305a:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_2 + 0x28) = 0;
      goto LAB_1441f305a;
    }
  }
  *(undefined8 **)(param_2 + 0x20) = puVar4;
  *(int *)(param_2 + 0x28) = iVar7;
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1441f30b0;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441f30b0:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f3178 FUN_1441f3178 body=991 status=ok
// SIG undefined FUN_1441f3178(void)

void FUN_1441f3178(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  int local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = *(longlong *)(param_1 + 0x430);
  local_60 = param_2;
  if (lVar4 != 0) {
    if (DAT_14cae9568 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_1417de738;
      local_90 = &LAB_145893408;
      local_98 = &LAB_1458cbbd2;
      local_a8 = &LAB_147ba21f1;
      local_b0 = &LAB_1463e9233;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x1000000c;
      local_d0 = 8;
      local_d8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar4 = *(longlong *)(param_1 + 0x430);
      if (lVar4 == 0) goto LAB_1441f33f6;
    }
    if ((((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30 && (lVar4 = FUN_145da44aa(), lVar4 != 0)))) {
      FUN_1446dcdd4(&local_58,&local_60);
      if (DAT_14cbc8bb8 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_144815d88(DAT_14cbc8bb8,&local_58);
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if ((lVar5 != 0) && (FUN_14410be10(&local_68,lVar5), local_68 != 0)) {
        local_58 = (code *)0x0;
        local_50 = 0;
        local_78._0_4_ = 0;
        lStack_70 = 0;
        if (param_1 == 0) {
          iVar3 = 0;
          uVar1 = (uint)local_78;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0xc);
          local_78 = (ulonglong)uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar3 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar3 = *(int *)(lVar8 + 0x10);
            bVar9 = iVar3 == 0;
            if (bVar9) {
              *(int *)(lVar8 + 0x10) = iVar7;
              iVar3 = 0;
            }
            UNLOCK();
            uVar1 = (uint)local_78;
            if (bVar9) {
              iVar3 = iVar7;
            }
          }
        }
        local_78._0_4_ = uVar1;
        local_78 = CONCAT44(iVar3,(uint)local_78);
        cVar2 = FUN_14493c216(&local_78,0);
        if (cVar2 == '\0') {
          lStack_70 = param_1;
        }
        local_88 = local_78;
        uStack_80 = lStack_70;
        if (local_50 != 3) {
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
        }
        *(undefined ***)local_58 = &PTR_LAB_14b972ed0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        *(longlong *)(local_58 + 0x10) = lVar6;
        *(undefined ***)local_58 = &PTR_FUN_14b995530;
        *(undefined4 *)(local_58 + 0x18) = (undefined4)local_88;
        *(undefined4 *)(local_58 + 0x1c) = local_88._4_4_;
        *(undefined4 *)(local_58 + 0x20) = (undefined4)uStack_80;
        *(undefined4 *)(local_58 + 0x24) = uStack_80._4_4_;
        *(longlong *)(local_58 + 0x28) = lVar5;
        FUN_144268f62(lVar4,&local_68,&local_58,1);
        if (local_50 != 0) {
          if (local_58 == (code *)0x0) goto LAB_1441f33f6;
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
        }
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1441f33f6:
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f3558 FUN_1441f3558 body=233 status=ok
// SIG undefined FUN_1441f3558(void)

void FUN_1441f3558(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1447210f0();
  if (lVar5 != 0) {
    param_1[0x7ba] = *(longlong *)(param_2 + 4);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x7b8) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x3dc4) = uVar1;
    *(undefined4 *)(param_1 + 0x7b9) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x3dcc) = uVar3;
    lVar5 = *(longlong *)(lVar5 + 0x18);
    FUN_1405f0c40(DAT_14cb84f20,&local_48,lVar5);
    lVar6 = CONCAT44(uStack_44,local_48);
    if (CONCAT44(uStack_44,local_48) == 0) {
      lVar6 = lVar5;
    }
    param_1[0x7bb] = lVar6;
    cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar4 != '\0') {
      FUN_140f6472c(param_1);
    }
    if (((char)param_1[0x2f] == '\x03') && ((char)param_1[0xd] == '\x02')) {
      local_38 = *(undefined8 *)(param_2 + 4);
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      uVar7 = FUN_14477b072(param_1,DAT_14cbad770);
      (**(code **)(*param_1 + 0x248))(param_1,uVar7,&local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f3650 FUN_1441f3650 body=91 status=ok
// SIG undefined FUN_1441f3650(void)

void FUN_1441f3650(void)

{
  if (DAT_14cbcfba8 != 0) {
    if (DAT_14cbcfba0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbcfba0)(DAT_14cbcfba0,0);
    FUN_1446efa72(&DAT_14cbcfba0,0,0,0x10);
    DAT_14cbcfba8 = 0;
  }
  if (DAT_14cbcfba0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1441f36b0 FUN_1441f36b0 body=48 status=ok
// SIG undefined FUN_1441f36b0(void)

longlong FUN_1441f36b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f36e0 FUN_1441f36e0 body=48 status=ok
// SIG undefined FUN_1441f36e0(void)

longlong FUN_1441f36e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x958;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3710 FUN_1441f3710 body=48 status=ok
// SIG undefined FUN_1441f3710(void)

longlong FUN_1441f3710(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x960;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3740 FUN_1441f3740 body=48 status=ok
// SIG undefined FUN_1441f3740(void)

longlong FUN_1441f3740(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x990;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3770 FUN_1441f3770 body=48 status=ok
// SIG undefined FUN_1441f3770(void)

longlong FUN_1441f3770(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x998;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f37a0 FUN_1441f37a0 body=48 status=ok
// SIG undefined FUN_1441f37a0(void)

longlong FUN_1441f37a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xda8;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f37e8 FUN_1441f37e8 body=48 status=ok
// SIG undefined FUN_1441f37e8(void)

longlong FUN_1441f37e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe18;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3818 FUN_1441f3818 body=48 status=ok
// SIG undefined FUN_1441f3818(void)

longlong FUN_1441f3818(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe38;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3848 FUN_1441f3848 body=48 status=ok
// SIG undefined FUN_1441f3848(void)

longlong FUN_1441f3848(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe40;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3880 FUN_1441f3880 body=48 status=ok
// SIG undefined FUN_1441f3880(void)

longlong FUN_1441f3880(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe68;
  FUN_14164ae34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f38c2 FUN_1441f38c2 body=31 status=ok
// SIG undefined FUN_1441f38c2(void)

undefined8 FUN_1441f38c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3930 FUN_1441f3930 body=57 status=ok
// SIG undefined FUN_1441f3930(void)

undefined8 * FUN_1441f3930(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b994260;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3ae8 FUN_1441f3ae8 body=197 status=ok
// SIG undefined FUN_1441f3ae8(void)

void FUN_1441f3ae8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4388e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b994260;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1441f3bae FUN_1441f3bae body=197 status=ok
// SIG undefined FUN_1441f3bae(void)

void FUN_1441f3bae(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4388e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b994260;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
  }
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1441f3c74 FUN_1441f3c74 body=254 status=ok
// SIG undefined FUN_1441f3c74(void)

void FUN_1441f3c74(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4388e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b994260;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined2 *)&p_Var2->Flags = *(undefined2 *)(param_1 + 0x28);
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  p_Var2[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f3d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f3d7e FUN_1441f3d7e body=278 status=ok
// SIG undefined FUN_1441f3d7e(void)

undefined8 FUN_1441f3d7e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441f3e8e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f3e8e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441f3e8e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f3e41;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441f3e96(param_1 + 0x20,param_3);
      uVar6 = 1;
      goto LAB_1441f3e41;
    }
  }
  uVar6 = 0;
LAB_1441f3e41:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f3e96 FUN_1441f3e96 body=51 status=ok
// SIG undefined FUN_1441f3e96(void)

void FUN_1441f3e96(longlong param_1,char *param_2)

{
  if ((*param_2 == '\0') && (param_2[0x38] != '\0')) {
    return;
  }
  if (*(char *)(param_1 + 8) != '\x01') {
    FUN_1441eb4bc(*(undefined8 *)(param_1 + 0x20),param_1 + 0x10,*(undefined1 *)(param_1 + 9));
    return;
  }
  FUN_148db66d0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x10);
  return;
}



// FUNCTION 1441f3eca FUN_1441f3eca body=29 status=ok
// SIG undefined FUN_1441f3eca(void)

undefined8 FUN_1441f3eca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f3efc FUN_1441f3efc body=85 status=ok
// SIG undefined FUN_1441f3efc(void)

void FUN_1441f3efc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b994340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9942d0;
  return;
}



// FUNCTION 1441f3f52 FUN_1441f3f52 body=85 status=ok
// SIG undefined FUN_1441f3f52(void)

void FUN_1441f3f52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b994340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9942d0;
  return;
}



// FUNCTION 1441f3fa8 FUN_1441f3fa8 body=118 status=ok
// SIG undefined FUN_1441f3fa8(void)

void FUN_1441f3fa8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b994340;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9942d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f400f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f4024 FUN_1441f4024 body=57 status=ok
// SIG undefined FUN_1441f4024(void)

undefined8 * FUN_1441f4024(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9943b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f41dc FUN_1441f41dc body=181 status=ok
// SIG undefined FUN_1441f41dc(void)

void FUN_1441f41dc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b994420;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9943b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1441f4292 FUN_1441f4292 body=181 status=ok
// SIG undefined FUN_1441f4292(void)

void FUN_1441f4292(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b994420;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9943b0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  return;
}



// FUNCTION 1441f4348 FUN_1441f4348 body=220 status=ok
// SIG undefined FUN_1441f4348(void)

void FUN_1441f4348(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b994420;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b9943b0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined1 *)&p_Var2->Flags = *(undefined1 *)(param_1 + 0x28);
  p_Var2[1].Type = 0;
  p_Var2[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)&p_Var2[1].CriticalSection = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = 0;
  }
  else {
    FUN_1446dd670(p_Var2 + 1,iVar1,0);
    memcpy(*(void **)(p_Var2 + 1),_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f4412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f4424 FUN_1441f4424 body=83 status=ok
// SIG undefined FUN_1441f4424(void)

void FUN_1441f4424(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    local_10 = 0;
    FUN_1441eb4bc(*(undefined8 *)(param_1 + 0x20),param_1 + 0x30,1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f4478 FUN_1441f4478 body=296 status=ok
// SIG undefined FUN_1441f4478(void)

undefined8 FUN_1441f4478(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441f459a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f459a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_1441f459a:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f4523;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(char *)(param_1 + 0x28) == '\x01') {
        local_28 = 0;
        uVar6 = 1;
        FUN_1441eb4bc(*(undefined8 *)(param_1 + 0x20),param_1 + 0x30,1);
      }
      goto LAB_1441f4523;
    }
  }
  uVar6 = 0;
LAB_1441f4523:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f45a2 FUN_1441f45a2 body=57 status=ok
// SIG undefined FUN_1441f45a2(void)

undefined8 * FUN_1441f45a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b994490;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f475a FUN_1441f475a body=180 status=ok
// SIG undefined FUN_1441f475a(void)

void FUN_1441f475a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4388e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b994490;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1441f480e FUN_1441f480e body=180 status=ok
// SIG undefined FUN_1441f480e(void)

void FUN_1441f480e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b4388e0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b994490;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1441f48c2 FUN_1441f48c2 body=235 status=ok
// SIG undefined FUN_1441f48c2(void)

void FUN_1441f48c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b4388e0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b994490;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f4997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f49cc FUN_1441f49cc body=292 status=ok
// SIG undefined FUN_1441f49cc(void)

undefined8 FUN_1441f49cc(longlong param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441f4aea;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f4aea;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441f4aea:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f4a8b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*param_3 != '\0') || (param_3[0x38] == '\0')) {
        FUN_148db66d0(*(undefined8 *)(param_1 + 0x30),param_1 + 0x20);
      }
      goto LAB_1441f4a8b;
    }
  }
  uVar6 = 0;
LAB_1441f4a8b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f4af2 FUN_1441f4af2 body=29 status=ok
// SIG undefined FUN_1441f4af2(void)

undefined8 FUN_1441f4af2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f4b24 FUN_1441f4b24 body=93 status=ok
// SIG undefined FUN_1441f4b24(void)

void FUN_1441f4b24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f4b82 FUN_1441f4b82 body=93 status=ok
// SIG undefined FUN_1441f4b82(void)

void FUN_1441f4b82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b994570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f4be0 FUN_1441f4be0 body=126 status=ok
// SIG undefined FUN_1441f4be0(void)

void FUN_1441f4be0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994570;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f4c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f4c5e FUN_1441f4c5e body=30 status=ok
// SIG undefined FUN_1441f4c5e(void)

undefined8 FUN_1441f4c5e(longlong param_1)

{
  FUN_148db7782(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,1);
  return 0;
}



// FUNCTION 1441f4c7c FUN_1441f4c7c body=30 status=ok
// SIG undefined FUN_1441f4c7c(void)

undefined8 FUN_1441f4c7c(longlong param_1)

{
  FUN_148db7782(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,1);
  return 1;
}



// FUNCTION 1441f4c9a FUN_1441f4c9a body=89 status=ok
// SIG undefined FUN_1441f4c9a(void)

void FUN_1441f4c9a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1402269ac();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) &&
       ((*(char *)(lVar1 + 0xbc0) != '\0' || (*(char *)(lVar1 + 0xbc1) == '\x01')))) {
      *(undefined2 *)(lVar1 + 0xbc0) = 0;
      *(undefined1 *)*param_1 = 1;
    }
  }
  return;
}



// FUNCTION 1441f4cf4 FUN_1441f4cf4 body=29 status=ok
// SIG undefined FUN_1441f4cf4(void)

undefined8 FUN_1441f4cf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f4d26 FUN_1441f4d26 body=93 status=ok
// SIG undefined FUN_1441f4d26(void)

void FUN_1441f4d26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9945e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441f4d84 FUN_1441f4d84 body=93 status=ok
// SIG undefined FUN_1441f4d84(void)

void FUN_1441f4d84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9945e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441f4de2 FUN_1441f4de2 body=126 status=ok
// SIG undefined FUN_1441f4de2(void)

void FUN_1441f4de2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9945e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f4e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f4e60 FUN_1441f4e60 body=20 status=ok
// SIG undefined FUN_1441f4e60(void)

undefined8 FUN_1441f4e60(longlong param_1)

{
  FUN_1441f4e88(param_1 + 0x18);
  return 0;
}



// FUNCTION 1441f4e74 FUN_1441f4e74 body=20 status=ok
// SIG undefined FUN_1441f4e74(void)

undefined1 FUN_1441f4e74(longlong param_1)

{
  FUN_1441f4e88(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441f4e88 FUN_1441f4e88 body=287 status=ok
// SIG undefined FUN_1441f4e88(void)

void FUN_1441f4e88(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  plVar6 = *(longlong **)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x68) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(undefined1 *)(lVar3 + 0x41) = 1;
  bVar10 = false;
  FUN_145a08e78(lVar3,1,0);
  if (*(int *)(lVar3 + 0x3c) != 0) {
    uVar2 = *(uint *)(lVar3 + 0x38);
    bVar10 = false;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(lVar3 + 0x3c) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) {
        bVar10 = false;
      }
      else {
        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
          plVar6 = (longlong *)*puVar7;
        }
        else {
          plVar6 = (longlong *)0x0;
        }
        bVar4 = (**(code **)(*plVar6 + 0x498))();
        bVar10 = bVar4 < 6;
      }
    }
  }
  FUN_140c125e6(*(longlong *)(lVar3 + 0x30) + 0xd98,&DAT_14cbd9308);
  cVar5 = FUN_1460719fc(lVar3);
  lVar9 = *(longlong *)(lVar3 + 0x30) + 0xd98;
  if (cVar5 == '\0') {
    cVar5 = FUN_140426394(lVar9,&DAT_14cbd9480);
    if (cVar5 != '\0') {
      return;
    }
    lVar9 = *(longlong *)(lVar3 + 0x30) + 0xd98;
    puVar8 = &DAT_14cbd9480;
  }
  else if (bVar10) {
    puVar8 = &DAT_14cbd9460;
  }
  else {
    puVar8 = &DAT_14cbd9470;
  }
  FUN_1403ca8ec(lVar9,puVar8);
  return;
}



// FUNCTION 1441f5048 FUN_1441f5048 body=31 status=ok
// SIG undefined FUN_1441f5048(void)

undefined8 FUN_1441f5048(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f5156 FUN_1441f5156 body=29 status=ok
// SIG undefined FUN_1441f5156(void)

undefined8 FUN_1441f5156(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f52f2 FUN_1441f52f2 body=93 status=ok
// SIG undefined FUN_1441f52f2(void)

void FUN_1441f52f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b994ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f5350 FUN_1441f5350 body=93 status=ok
// SIG undefined FUN_1441f5350(void)

void FUN_1441f5350(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b994ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f53ae FUN_1441f53ae body=126 status=ok
// SIG undefined FUN_1441f53ae(void)

void FUN_1441f53ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994ca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f541d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f5436 FUN_1441f5436 body=266 status=ok
// SIG undefined FUN_1441f5436(void)

undefined8 FUN_1441f5436(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441f553a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f553a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441f553a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f54ee;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441ecf52(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1441f54ee;
    }
  }
  uVar6 = 0;
LAB_1441f54ee:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f5542 FUN_1441f5542 body=29 status=ok
// SIG undefined FUN_1441f5542(void)

undefined8 FUN_1441f5542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f56de FUN_1441f56de body=93 status=ok
// SIG undefined FUN_1441f56de(void)

void FUN_1441f56de(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b994d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f573c FUN_1441f573c body=93 status=ok
// SIG undefined FUN_1441f573c(void)

void FUN_1441f573c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b994d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f579a FUN_1441f579a body=126 status=ok
// SIG undefined FUN_1441f579a(void)

void FUN_1441f579a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b994d10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f5809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f582c FUN_1441f582c body=277 status=ok
// SIG undefined FUN_1441f582c(void)

undefined8 FUN_1441f582c(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441f593b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f593b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441f593b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f58ef;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x3248) = 0;
      FUN_14410a716();
      uVar6 = 1;
      goto LAB_1441f58ef;
    }
  }
  uVar6 = 0;
LAB_1441f58ef:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f5942 FUN_1441f5942 body=31 status=ok
// SIG undefined FUN_1441f5942(void)

undefined8 FUN_1441f5942(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f5962 FUN_1441f5962 body=31 status=ok
// SIG undefined FUN_1441f5962(void)

undefined8 FUN_1441f5962(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f5a6e FUN_1441f5a6e body=53 status=ok
// SIG undefined FUN_1441f5a6e(void)

void FUN_1441f5a6e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x38))(lVar1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001441f5a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x30))(lVar1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 1441f5b08 FUN_1441f5b08 body=29 status=ok
// SIG undefined FUN_1441f5b08(void)

undefined8 FUN_1441f5b08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f5b3a FUN_1441f5b3a body=85 status=ok
// SIG undefined FUN_1441f5b3a(void)

void FUN_1441f5b3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9821b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995090;
  return;
}



// FUNCTION 1441f5b90 FUN_1441f5b90 body=85 status=ok
// SIG undefined FUN_1441f5b90(void)

void FUN_1441f5b90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9821b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995090;
  return;
}



// FUNCTION 1441f5be6 FUN_1441f5be6 body=118 status=ok
// SIG undefined FUN_1441f5be6(void)

void FUN_1441f5be6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9821b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995090;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f5c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f5c5c FUN_1441f5c5c body=62 status=ok
// SIG undefined FUN_1441f5c5c(void)

void FUN_1441f5c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441f5cde(&local_10,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f5c9c FUN_1441f5c9c body=64 status=ok
// SIG undefined FUN_1441f5c9c(void)

undefined8 FUN_1441f5c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441f5cde(&local_10,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f5cde FUN_1441f5cde body=341 status=ok
// SIG undefined FUN_1441f5cde(void)

ulonglong FUN_1441f5cde(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
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
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*param_1 != 0) {
    plVar2 = (longlong *)FUN_140d1732e();
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cbadd90 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1459f2e4c;
        local_48 = &LAB_148c39de3;
        local_50 = &LAB_1457a9eb2;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
          DAT_14cbadd90 + 0x30)) {
        cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
        if ((cVar1 != '\0') && (*(char *)((longlong)plVar2 + 0x32b9) == '\0')) {
          if (plVar2[0x73] == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = CONCAT71(uVar4,*(undefined1 *)(plVar2[0x73] + 0x39a)) & 0xffffffffffffff08;
            uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 3);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f5e34 FUN_1441f5e34 body=29 status=ok
// SIG undefined FUN_1441f5e34(void)

undefined8 FUN_1441f5e34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f5fd0 FUN_1441f5fd0 body=93 status=ok
// SIG undefined FUN_1441f5fd0(void)

void FUN_1441f5fd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f602e FUN_1441f602e body=93 status=ok
// SIG undefined FUN_1441f602e(void)

void FUN_1441f602e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f608c FUN_1441f608c body=126 status=ok
// SIG undefined FUN_1441f608c(void)

void FUN_1441f608c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995100;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f60fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f610a FUN_1441f610a body=28 status=ok
// SIG undefined FUN_1441f610a(void)

undefined8 FUN_1441f610a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d27aa0(*(undefined8 *)(param_1 + 0x20));
  FUN_1441ebbce(uVar1);
  return 0;
}



// FUNCTION 1441f6126 FUN_1441f6126 body=274 status=ok
// SIG undefined FUN_1441f6126(void)

undefined8 FUN_1441f6126(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441f6232;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f6232;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441f6232:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f61e6;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar5 = FUN_140d27aa0(*(undefined8 *)(param_1 + 0x20));
      FUN_1441ebbce(uVar5);
      uVar5 = 1;
      goto LAB_1441f61e6;
    }
  }
  uVar5 = 0;
LAB_1441f61e6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f623a FUN_1441f623a body=29 status=ok
// SIG undefined FUN_1441f623a(void)

undefined8 FUN_1441f623a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f63d6 FUN_1441f63d6 body=93 status=ok
// SIG undefined FUN_1441f63d6(void)

void FUN_1441f63d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f6434 FUN_1441f6434 body=93 status=ok
// SIG undefined FUN_1441f6434(void)

void FUN_1441f6434(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995170;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f6492 FUN_1441f6492 body=126 status=ok
// SIG undefined FUN_1441f6492(void)

void FUN_1441f6492(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995170;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f6501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f651a FUN_1441f651a body=269 status=ok
// SIG undefined FUN_1441f651a(void)

undefined8 FUN_1441f651a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1441f6621;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f6621;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441f6621:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f65d5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441f6628(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1441f65d5;
    }
  }
  uVar6 = 0;
LAB_1441f65d5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f6628 FUN_1441f6628 body=316 status=ok
// SIG undefined FUN_1441f6628(void)

ulonglong FUN_1441f6628(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
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
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x398);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar2 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
      lVar2 = *(longlong *)(lVar1 + 0x398);
      if (lVar2 == 0) goto LAB_1441f6691;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      FUN_140b9fa66(lVar2,0);
      uVar3 = 0;
    }
  }
LAB_1441f6691:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1441f67a8 FUN_1441f67a8 body=12 status=ok
// SIG undefined FUN_1441f67a8(void)

void FUN_1441f67a8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441f67b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441f67b4 FUN_1441f67b4 body=29 status=ok
// SIG undefined FUN_1441f67b4(void)

undefined8 FUN_1441f67b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f67d2 FUN_1441f67d2 body=184 status=ok
// SIG undefined FUN_1441f67d2(void)

void FUN_1441f67d2(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_2[0x2f] == '\x03') {
    cVar3 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar3 != '\0') {
      FUN_1407934de(&local_30,param_2);
      if (local_30 != 0) {
        cVar3 = FUN_1402799c0();
        if (cVar3 != '\0') {
          FUN_148827f24(local_30,*param_1,*(undefined4 *)param_1[1],*(undefined8 *)param_1[2]);
        }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f68b2 FUN_1441f68b2 body=12 status=ok
// SIG undefined FUN_1441f68b2(void)

void FUN_1441f68b2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441f68bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441f68be FUN_1441f68be body=29 status=ok
// SIG undefined FUN_1441f68be(void)

undefined8 FUN_1441f68be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f68dc FUN_1441f68dc body=187 status=ok
// SIG undefined FUN_1441f68dc(void)

void FUN_1441f68dc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
        goto LAB_1441f697f;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1441f697f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1441f6998 FUN_1441f6998 body=173 status=ok
// SIG undefined FUN_1441f6998(void)

void FUN_1441f6998(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1441f6a2f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1441f6a2f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1441f6a84 FUN_1441f6a84 body=29 status=ok
// SIG undefined FUN_1441f6a84(void)

undefined8 FUN_1441f6a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f6ae0 FUN_1441f6ae0 body=29 status=ok
// SIG undefined FUN_1441f6ae0(void)

undefined8 FUN_1441f6ae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f6afe FUN_1441f6afe body=80 status=ok
// SIG undefined FUN_1441f6afe(void)

void FUN_1441f6afe(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_2 + 0xec) & 8) != 0) {
    cVar1 = *(char *)(param_2 + 0xfd);
    param_1 = (longlong *)*param_1;
    uVar2 = *(undefined4 *)(param_2 + 0xf8);
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1441f6b96(param_1,iVar3);
    }
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + (longlong)iVar3 * 8) = uVar2;
    *(bool *)(lVar4 + 4 + (longlong)iVar3 * 8) = cVar1 != -1;
  }
  return;
}



// FUNCTION 1441f6b78 FUN_1441f6b78 body=29 status=ok
// SIG undefined FUN_1441f6b78(void)

undefined8 FUN_1441f6b78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f6b96 FUN_1441f6b96 body=346 status=ok
// SIG undefined FUN_1441f6b96(void)

void FUN_1441f6b96(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1441f6c28;
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
LAB_1441f6c28:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1441f6cf0 FUN_1441f6cf0 body=221 status=ok
// SIG undefined FUN_1441f6cf0(void)

void FUN_1441f6cf0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_2 + 0xfc) & 1) != 0) && (*(char *)(param_2 + 0xfd) != -1)) {
    lVar1 = *param_1;
    cVar2 = FUN_1402556d4(*(undefined8 *)(lVar1 + 0xf48),param_2 + 8,&local_29);
    if (cVar2 == '\0') {
      local_30 = *(undefined4 *)(param_2 + 0xf8);
      FUN_141069b66(param_1[1],&local_30,0xffffffff);
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0xf48);
      local_30 = *(undefined4 *)(param_2 + 0xf8);
      local_38 = 1;
      local_40 = 0;
      local_48 = 0;
      (**(code **)(*(longlong *)(lVar1 + 0x3be8) + 0xa8))
                (lVar1 + 0x3be8,&local_30,param_2 + 8,(int)*(char *)(param_2 + 0xfd));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f6df8 FUN_1441f6df8 body=29 status=ok
// SIG undefined FUN_1441f6df8(void)

undefined8 FUN_1441f6df8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f6eb6 FUN_1441f6eb6 body=111 status=ok
// SIG undefined FUN_1441f6eb6(void)

undefined8 * FUN_1441f6eb6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b995430;
  plVar1 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441f6f07;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441f6f07:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f70a4 FUN_1441f70a4 body=139 status=ok
// SIG undefined FUN_1441f70a4(void)

void FUN_1441f70a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar4;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  FUN_14114e6dc(puVar1 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1441f7130 FUN_1441f7130 body=139 status=ok
// SIG undefined FUN_1441f7130(void)

void FUN_1441f7130(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eac0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar2;
  *(undefined4 *)(puVar1 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar4;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  FUN_14114e6dc(puVar1 + 8,param_1 + 0x40);
  return;
}



// FUNCTION 1441f71bc FUN_1441f71bc body=173 status=ok
// SIG undefined FUN_1441f71bc(void)

void FUN_1441f71bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96eac0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995430;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  DVar3 = *(DWORD *)(param_1 + 0x24);
  DVar4 = *(DWORD *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar3;
  p_Var1->Flags = DVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar5;
  p_Var1->SpareWORD = (short)((uint)uVar5 >> 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Blink = 0;
  FUN_14114e6dc(&p_Var1[1].ProcessLocksList,param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f725a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f7274 FUN_1441f7274 body=276 status=ok
// SIG undefined FUN_1441f7274(void)

undefined8 FUN_1441f7274(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441f7382;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441f7382;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441f7382:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441f7335;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441f2484(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_1441f7335;
    }
  }
  uVar6 = 0;
LAB_1441f7335:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f738a FUN_1441f738a body=29 status=ok
// SIG undefined FUN_1441f738a(void)

undefined8 FUN_1441f738a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f7526 FUN_1441f7526 body=93 status=ok
// SIG undefined FUN_1441f7526(void)

void FUN_1441f7526(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9954a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f7584 FUN_1441f7584 body=93 status=ok
// SIG undefined FUN_1441f7584(void)

void FUN_1441f7584(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9954a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441f75e2 FUN_1441f75e2 body=126 status=ok
// SIG undefined FUN_1441f75e2(void)

void FUN_1441f75e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9954a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f7651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f767e FUN_1441f767e body=286 status=ok
// SIG undefined FUN_1441f767e(void)

undefined8 FUN_1441f767e(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_1441f7796;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1441f7796;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1441f7796:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1441f774e;
    lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      lVar7 = *(longlong *)(param_1 + 0x20);
      pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x2500) + 0x2ef4);
      *pbVar1 = *pbVar1 & 0xbf;
      *(undefined8 *)(lVar7 + 0x3b30) = 0;
      uVar6 = 1;
      goto LAB_1441f774e;
    }
  }
  uVar6 = 0;
LAB_1441f774e:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f779e FUN_1441f779e body=641 status=ok
// SIG undefined FUN_1441f779e(void)

void FUN_1441f779e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  code *local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)*param_1;
  if (lVar2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_80 = local_48;
      local_48[0] = FUN_141864c34;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464cee30;
      local_88 = &LAB_148bfac22;
      local_90 = &LAB_140f21842;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = (code **)CONCAT44(local_b8._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(DAT_14cba8288 + 0x38);
    if (((((iVar1 <= *(int *)(lVar2 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cba8288 + 0x30)
          ) && (lVar2 = *(longlong *)*param_1, lVar2 != 0)) &&
        ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          DAT_14cba8288 + 0x30)))) && (lVar4 = *(longlong *)(lVar2 + 0x3c0), lVar4 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_80 = local_48;
        local_48[0] = FUN_141030f22;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_1459f2e4c;
        local_88 = &LAB_148c39de3;
        local_90 = &LAB_1457a9eb2;
        local_98 = &DAT_149e063b2;
        local_a0 = 0;
        local_a8 = 0x10000004;
        local_b0 = 0x10;
        local_b8 = (code **)CONCAT44(local_b8._4_4_,0x3de0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        lVar4 = *(longlong *)(lVar2 + 0x3c0);
        if (lVar4 == 0) goto LAB_1441f7864;
      }
      if (((DAT_14cbadd90 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
         ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          ((lVar4 == param_2 &&
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)))))) goto LAB_1441f78a9;
    }
  }
LAB_1441f7864:
  FUN_1447a97f4(local_48,param_1[3]);
  puVar3 = (undefined4 *)param_1[2];
  local_68 = *puVar3;
  uStack_64 = puVar3[1];
  uStack_60 = puVar3[2];
  uStack_5c = puVar3[3];
  local_58 = *(undefined8 *)(puVar3 + 4);
  local_b8 = local_48;
  FUN_1465e6f94(param_2,*(undefined4 *)param_1[1],*(undefined8 *)*param_1);
LAB_1441f78a9:
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f7a20 FUN_1441f7a20 body=70 status=ok
// SIG undefined FUN_1441f7a20(void)

undefined8 * FUN_1441f7a20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b995510;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1441f7a6c FUN_1441f7a6c body=29 status=ok
// SIG undefined FUN_1441f7a6c(void)

void FUN_1441f7a6c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1441f7a8a FUN_1441f7a8a body=29 status=ok
// SIG undefined FUN_1441f7a8a(void)

undefined8 FUN_1441f7a8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f7aa8 FUN_1441f7aa8 body=31 status=ok
// SIG undefined FUN_1441f7aa8(void)

undefined8 FUN_1441f7aa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f7b16 FUN_1441f7b16 body=29 status=ok
// SIG undefined FUN_1441f7b16(void)

undefined8 FUN_1441f7b16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441f7b48 FUN_1441f7b48 body=101 status=ok
// SIG undefined FUN_1441f7b48(void)

void FUN_1441f7b48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441f7bae FUN_1441f7bae body=101 status=ok
// SIG undefined FUN_1441f7bae(void)

void FUN_1441f7bae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b995530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441f7c14 FUN_1441f7c14 body=134 status=ok
// SIG undefined FUN_1441f7c14(void)

void FUN_1441f7c14(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b995530;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441f7c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441f7ca4 FUN_1441f7ca4 body=20 status=ok
// SIG undefined FUN_1441f7ca4(void)

undefined1 FUN_1441f7ca4(longlong param_1)

{
  FUN_1441f7cb8(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441f7cb8 FUN_1441f7cb8 body=283 status=ok
// SIG undefined FUN_1441f7cb8(void)

void FUN_1441f7cb8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((((*(longlong *)(param_1 + 2) == 0) || (param_1[1] == 0)) ||
       (uVar1 = *param_1, (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)))) ||
     ((*(uint *)(lVar4 + 0x10) != param_1[1] || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
    return;
  }
  lVar3 = 0;
  if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
    lVar3 = *(longlong *)(param_1 + 2);
  }
  FUN_1410ef130(lVar3 + 0xe50);
  cVar2 = FUN_14002b5e0(*param_2,"store",5);
  if (cVar2 == '\0') {
    return;
  }
  if ((*(longlong *)(param_1 + 2) != 0) && (param_1[1] != 0)) {
    uVar1 = *param_1;
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1441f7dc8;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) {
      lVar4 = 0;
      if ((*(uint *)(lVar3 + 8) & 0x10200000) == 0) {
        lVar4 = *(longlong *)(param_1 + 2);
      }
      goto LAB_1441f7dc8;
    }
  }
  lVar4 = 0;
LAB_1441f7dc8:
  FUN_14410af30(lVar4,*(undefined8 *)(param_1 + 4));
  return;
}



// FUNCTION 1441f7dd3 FUN_1441f7dd3 body=3849 status=ok
// SIG undefined FUN_1441f7dd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441f7dd3(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446f470e(&DAT_14cbcf4b8,L"UNSET",1);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf4c0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcf4c8,"Activity_Campaign");
  atexit((_func_5014 *)&LAB_1441eb2b8);
  _DAT_14cbcf4d8 = 0x47efffffe0000000;
  _DAT_14cbcf4e0 = 0x47efffffe0000000;
  _DAT_14cbcf4e8 = 0x47efffffe0000000;
  _DAT_14cbcf4f0 = 0x47efffffe0000000;
  _DAT_14cbcf4f8 = 0x47efffffe0000000;
  _DAT_14cbcf500 = 0x47efffffe0000000;
  _DAT_14cbcf508 = 0x47efffffe0000000;
  _DAT_14cbcf510 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbcf518);
  if (cVar1 == '\0') {
    _DAT_14cbcf518 = 0;
    uRam000000014cbcf520 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbcf52c = 0;
  FUN_14052b5e0(&DAT_14cbcf528,"PlayerAwareness",0);
  _DAT_14cbcf538 = "PlayerAwareness";
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "Use";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf540 = (ulonglong)uVar2;
  local_70 = "Sight";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf548 = (ulonglong)uVar2;
  local_70 = "TargetLock";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf550 = (ulonglong)uVar2;
  local_70 = "basic";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf558 = (ulonglong)uVar2;
  local_70 = "challenge";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf560 = (ulonglong)uVar2;
  local_70 = "online";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf568 = (ulonglong)uVar2;
  local_70 = "social";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf570 = (ulonglong)uVar2;
  local_70 = "alert";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf578 = (ulonglong)uVar2;
  local_70 = "photo_mode";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf580 = (ulonglong)uVar2;
  local_70 = "generic_task";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf588 = (ulonglong)uVar2;
  local_70 = "mission";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf590 = (ulonglong)uVar2;
  local_70 = "mail";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf598 = (ulonglong)uVar2;
  local_70 = "respawn";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5a0 = (ulonglong)uVar2;
  local_70 = "tutorial";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5a8 = (ulonglong)uVar2;
  local_70 = "special_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5b0 = (ulonglong)uVar2;
  local_70 = "generic_notification";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5b8 = (ulonglong)uVar2;
  local_70 = "vault_card";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5c0 = (ulonglong)uVar2;
  local_70 = "ONLINE_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5c8 = (ulonglong)uVar2;
  local_70 = "INGAME_MESSAGE";
  local_68 = 0xe;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5d0 = (ulonglong)uVar2;
  local_70 = "NOTIFICATION_MESSAGE";
  local_68 = 0x14;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5d8 = (ulonglong)uVar2;
  local_70 = "MENU_TUTORIAL_MESSAGE";
  local_68 = 0x15;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5e0 = (ulonglong)uVar2;
  local_70 = "collectible";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf5e8 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcf5f0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1441eb943);
  FUN_140056680(&DAT_14cbcf600,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1441eb954);
  FUN_140056680(&DAT_14cbcf610,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1441eb965);
  FUN_140056680(&DAT_14cbcf620,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1441eb976);
  FUN_1446f470e(&DAT_14cbcf630,L"LIMB_GORED",1);
  _DAT_14cbcf638 = 0x4072c00000000000;
  _DAT_14cbcf640 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbcf648,L"body",1);
  FUN_1446f470e(&DAT_14cbcf650,L"title_card",1);
  local_70 = "Cash";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf658 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcf660,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1441eb987);
  local_70 = "init";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "update";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "config_update";
  local_68 = 0xd;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_70 = "deinit";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&DAT_14cbcf670,L"Party",1);
  FUN_1446f470e(&DAT_14cbcf678,&DAT_149e063b2,1);
  ram0x00014cbcf684 = 0;
  FUN_14052b5e0(&DAT_14cbcf680,"GbxActorParts",0);
  _DAT_14cbcf690 = "GbxActorParts";
  local_70 = "Customizations";
  local_68 = 0xe;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  FUN_14147d486(&DAT_14cbcf698,uVar3,3);
  _DAT_14cbcf698 = &PTR_FUN_14b993e00;
  atexit((_func_5014 *)&LAB_1441eb998);
  local_70 = "customization_slot";
  local_68 = 0x12;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&local_70,L"Customizations",1);
  _DAT_14cbcf858 = 0;
  local_70 = "customization_item_name";
  local_68 = 0x17;
  local_64 = 0;
  _DAT_14cbcf850 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_1446f470e(&local_70,L"Customizations",1);
  _DAT_14cbcf868 = 0;
  _DAT_14cbcf860 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbcfbd8,L"Character",1);
  FUN_1446f470e(&DAT_14cbcfbe0,L"Echo4",1);
  FUN_1446f470e(&DAT_14cbcfbe8,L"Vehicle",1);
  FUN_1446f470e(&DAT_14cbcf86c,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbcf874,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbcf87c,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbcf884,L"TimeOfDayForecastEvents");
  local_70 = "Standard";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf890 = (ulonglong)uVar2;
  local_70 = "PrologueSkip";
  local_68 = 0xc;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf898 = (ulonglong)uVar2;
  local_70 = "UltimateVaultHunterSkip";
  local_68 = 0x17;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf8a0 = (ulonglong)uVar2;
  local_70 = "SkipToDLC_Cowbell";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf8a8 = (ulonglong)uVar2;
  local_70 = "SkipToDLC_Harmonica";
  local_68 = 0x13;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf8b0 = (ulonglong)uVar2;
  _DAT_14cbcf8b8 = 0;
  uRam000000014cbcf8c0 = 0;
  _DAT_14cbcf8c8 = 0;
  DAT_14cbcf8d0 = 0;
  uRam000000014cbcf8d8 = 0;
  FUN_1446ddda2(&DAT_14cbcf8b8,"WaitingOnOthersTitleText",0);
  atexit((_func_5014 *)&LAB_1441ebbab);
  _DAT_14cbcf8e0 = 0;
  uRam000000014cbcf8e8 = 0;
  _DAT_14cbcf8f0 = 0;
  DAT_14cbcf8f8 = 0;
  uRam000000014cbcf900 = 0;
  FUN_1446ddda2(&DAT_14cbcf8e0,"WaitingOnOthersDescText",0);
  atexit((_func_5014 *)&LAB_1441ebbbc);
  FUN_1446f470e(&DAT_14cbcf908,L"BossFightState");
  local_70 = "Complete";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf910 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcf918,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1441ec6b0);
  local_70 = "lostloot";
  local_68 = 8;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14cbcf928 = 0;
  uRam000000014cbcf930 = 0;
  _DAT_14cbcf938 = 0;
  DAT_14cbcf940 = 0;
  uRam000000014cbcf948 = 0;
  FUN_1446ddda2(&DAT_14cbcf928,"lostloot",0);
  atexit((_func_5014 *)&LAB_1441ec6c1);
  _DAT_14cbcf950 = 0;
  uRam000000014cbcf958 = 0;
  _DAT_14cbcf960 = 0;
  DAT_14cbcf968 = 0;
  uRam000000014cbcf970 = 0;
  FUN_1446ddda2(&DAT_14cbcf950,"oak.lostloot");
  atexit((_func_5014 *)&LAB_1441ec6d2);
  _DAT_14cbcf97c = 0;
  _DAT_14cbcf980 = 0;
  FUN_14052b5e0(&DAT_14cbcf978,"VendingMachineState",0);
  _DAT_14cbcf988 = "VendingMachineState";
  _DAT_14cbcf994 = 0;
  _DAT_14cbcf998 = 0;
  FUN_14052b5e0(&DAT_14cbcf990,"InUseState",0);
  _DAT_14cbcf9a0 = "InUseState";
  _DAT_14cbcf9ac = 0;
  _DAT_14cbcf9b0 = 0;
  FUN_14052b5e0(&DAT_14cbcf9a8,"state",0);
  _DAT_14cbcf9b8 = "state";
  _DAT_14cbcf9c4 = 0;
  _DAT_14cbcf9c8 = 0;
  FUN_14052b5e0(&DAT_14cbcf9c0,"shuffle_timestamp",0);
  _DAT_14cbcf9d0 = "shuffle_timestamp";
  _DAT_14cbcf9dc = 0;
  _DAT_14cbcf9e0 = 0;
  FUN_14052b5e0(&DAT_14cbcf9d8,"iotd_timestamp",0);
  _DAT_14cbcf9e8 = "iotd_timestamp";
  _DAT_14cbcf9f4 = 0;
  _DAT_14cbcf9f8 = 0;
  FUN_14052b5e0(&DAT_14cbcf9f0,"items",0);
  _DAT_14cbcfa00 = "items";
  _DAT_14cbcfa0c = 0;
  _DAT_14cbcfa10 = 0;
  FUN_14052b5e0(&DAT_14cbcfa08,&DAT_14b3fc248,0);
  _DAT_14cbcfa18 = &DAT_14b3fc248;
  FUN_140056680(&DAT_14cbcfa20,L"DualShock4");
  atexit((_func_5014 *)&LAB_1441ec6e3);
  FUN_140056680(&DAT_14cbcfa30,L"DualSense");
  atexit((_func_5014 *)&LAB_1441ec6f4);
  FUN_140056680(&DAT_14cbcfa40,L"Guitar");
  atexit((_func_5014 *)&LAB_1441ec705);
  FUN_140056680(&DAT_14cbcfa50,L"Drums");
  atexit((_func_5014 *)&LAB_1441ec716);
  FUN_140056680(&DAT_14cbcfa60,&DAT_149e01fe8);
  atexit((_func_5014 *)&LAB_1441ec727);
  local_70 = (char *)CONCAT71(local_70._1_7_,1);
  local_78 = 0;
  FUN_140bd5914(&DAT_14cbcfa70,L"oak.SupportPauseMenuWhileTeleporting",&local_70,
                L"Whether or not we support opening the pause menu while teleporting.");
  atexit(FUN_1441ec738);
  FUN_1446f470e(&DAT_14cbcfa88,L"OakPlayerControllerAutoFade",1);
  FUN_1446f470e(&DAT_14cbcfa90,L"OakPlayerController",1);
  FUN_1446f470e(&DAT_14cbcfa98,L"OakPlayerControllerUncapVTStreaming");
  DAT_14cbcfaa0._4_4_ = 0;
  DAT_14cbcfaa8 = 0;
  FUN_14052b5e0(&DAT_14cbcfaa0,"last_death_location_x",0);
  _DAT_14cbcfab0 = "last_death_location_x";
  DAT_14cbcfab8._4_4_ = 0;
  DAT_14cbcfac0 = 0;
  FUN_14052b5e0(&DAT_14cbcfab8,"last_death_location_y",0);
  _DAT_14cbcfac8 = "last_death_location_y";
  DAT_14cbcfad0._4_4_ = 0;
  DAT_14cbcfad8 = 0;
  FUN_14052b5e0(&DAT_14cbcfad0,"last_death_location_z",0);
  _DAT_14cbcfae0 = "last_death_location_z";
  DAT_14cbcfae8._4_4_ = 0;
  DAT_14cbcfaf0 = 0;
  FUN_14052b5e0(&DAT_14cbcfae8,"last_death_discovery_world",0);
  _DAT_14cbcfaf8 = "last_death_discovery_world";
  FUN_1446f470e(&DAT_14cbcfb40,L"OakPCStatusMenu",1);
  FUN_1446f470e(&DAT_14cbcfbd0,L"tunnel_effect",1);
  FUN_1446f470e(&DAT_14cbcfb48,L"cinematic_mode",1);
  FUN_1446f470e(&DAT_14cbcfb50,L"bolting_sequence",1);
  local_70 = (char *)CONCAT44(local_70._4_4_,0x3e99999a);
  local_78 = 0;
  FUN_140a6b41e(&DAT_14cbcfb88,L"oak.PS5_Digital_Trigger_Default_Activation_Ratio",&local_70,
                L"The normalized pull distance required for the DualSense triggers to activate the digital input"
               );
  atexit(FUN_1441f2e40);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f8d35 FUN_1441f8d35 body=69 status=ok
// SIG undefined FUN_1441f8d35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441f8d35(void)

{
  _DAT_14cbcfda8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441f8d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbcfdb0,1);
  return;
}



// FUNCTION 1441f8d86 FUN_1441f8d86 body=38 status=ok
// SIG undefined FUN_1441f8d86(void)

longlong FUN_1441f8d86(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[0x43b];
  }
  return lVar2;
}



// FUNCTION 1441f8dad FUN_1441f8dad body=41 status=ok
// SIG undefined FUN_1441f8dad(void)

void FUN_1441f8dad(void)

{
  DAT_14cbd0048 = 0;
  if (DAT_14cbd0040 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6969e();
  return;
}



// FUNCTION 1441f8e36 FUN_1441f8e36 body=355 status=ok
// SIG undefined FUN_1441f8e36(void)

void FUN_1441f8e36(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
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
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_2 + 0x398), lVar4 != 0)) {
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
      lVar4 = *(longlong *)(param_2 + 0x398);
      if (lVar4 == 0) goto LAB_1441f8ec1;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      if (*(int *)(param_1 + 1) == 0) {
        uVar2 = 1;
      }
      else {
        if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        else {
          puVar3 = *(undefined2 **)*param_1;
        }
        uVar2 = FUN_14052c20c(puVar3);
      }
      if (DAT_14c872bf2 == '\0') {
        *(undefined1 *)(lVar4 + 0x6b5) = uVar2;
      }
    }
  }
LAB_1441f8ec1:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f8f9a FUN_1441f8f9a body=69 status=ok
// SIG undefined FUN_1441f8f9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441f8f9a(void)

{
  _DAT_14cbd06c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441f8fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd06c8,1);
  return;
}



// FUNCTION 1441f8fdf FUN_1441f8fdf body=49 status=ok
// SIG undefined FUN_1441f8fdf(void)

void FUN_1441f8fdf(void)

{
  FUN_144760e21(DAT_14cbd0b00,DAT_14cbd0b08);
  if (DAT_14cbd0b00 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f9010 FUN_1441f9010 body=49 status=ok
// SIG undefined FUN_1441f9010(void)

void FUN_1441f9010(void)

{
  FUN_144760e21(DAT_14cbd0a20,DAT_14cbd0a28);
  if (DAT_14cbd0a20 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f9041 FUN_1441f9041 body=49 status=ok
// SIG undefined FUN_1441f9041(void)

void FUN_1441f9041(void)

{
  FUN_144760e21(DAT_14cbd0a38,DAT_14cbd0a40);
  if (DAT_14cbd0a38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f9072 FUN_1441f9072 body=49 status=ok
// SIG undefined FUN_1441f9072(void)

void FUN_1441f9072(void)

{
  FUN_144760e21(DAT_14cbd0b78,DAT_14cbd0b80);
  if (DAT_14cbd0b78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f90a3 FUN_1441f90a3 body=49 status=ok
// SIG undefined FUN_1441f90a3(void)

void FUN_1441f90a3(void)

{
  FUN_144760e21(DAT_14cbd0a50,DAT_14cbd0a58);
  if (DAT_14cbd0a50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f90d4 FUN_1441f90d4 body=49 status=ok
// SIG undefined FUN_1441f90d4(void)

void FUN_1441f90d4(void)

{
  FUN_144760e21(DAT_14cbd0b90,DAT_14cbd0b98);
  if (DAT_14cbd0b90 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f9105 FUN_1441f9105 body=49 status=ok
// SIG undefined FUN_1441f9105(void)

void FUN_1441f9105(void)

{
  FUN_144760e21(DAT_14cbd06d0,DAT_14cbd06d8);
  if (DAT_14cbd06d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f9136 FUN_1441f9136 body=49 status=ok
// SIG undefined FUN_1441f9136(void)

void FUN_1441f9136(void)

{
  FUN_144760e21(DAT_14cbd0b48,DAT_14cbd0b50);
  if (DAT_14cbd0b48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f9167 FUN_1441f9167 body=49 status=ok
// SIG undefined FUN_1441f9167(void)

void FUN_1441f9167(void)

{
  FUN_144760e21(DAT_14cbd0ae8,DAT_14cbd0af0);
  if (DAT_14cbd0ae8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f9198 FUN_1441f9198 body=49 status=ok
// SIG undefined FUN_1441f9198(void)

void FUN_1441f9198(void)

{
  FUN_144760e21(DAT_14cbd0b60,DAT_14cbd0b68);
  if (DAT_14cbd0b60 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f91c9 FUN_1441f91c9 body=49 status=ok
// SIG undefined FUN_1441f91c9(void)

void FUN_1441f91c9(void)

{
  FUN_144760e21(DAT_14cbd0a68,DAT_14cbd0a70);
  if (DAT_14cbd0a68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f91fa FUN_1441f91fa body=49 status=ok
// SIG undefined FUN_1441f91fa(void)

void FUN_1441f91fa(void)

{
  FUN_144760e21(DAT_14cbd0b30,DAT_14cbd0b38);
  if (DAT_14cbd0b30 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f922b FUN_1441f922b body=49 status=ok
// SIG undefined FUN_1441f922b(void)

void FUN_1441f922b(void)

{
  FUN_144760e21(DAT_14cbd0a88,DAT_14cbd0a90);
  if (DAT_14cbd0a88 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441f925c FUN_1441f925c body=738 status=ok
// SIG undefined FUN_1441f925c(void)

void FUN_1441f925c(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  int *piVar8;
  float fVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1405f1eac();
  *(undefined8 *)(param_1 + 0x530) = 0;
  lVar4 = FUN_1447210f0(param_1);
  if (lVar4 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)FUN_1403ca102(param_1);
  }
  if (*(char *)(param_1 + 0x488) == '\0') {
    FUN_14119eb2c(param_1,0);
    FUN_14119eb2c(param_1,1);
  }
  if (plVar5 == (longlong *)0x0 || lVar4 == 0) goto LAB_1441f92d3;
  cVar1 = (**(code **)(*plVar5 + 0x498))(plVar5);
  if (cVar1 == '\b') {
    lVar6 = FUN_1402ad3be(DAT_14cb0d2b0,lVar4,1);
    if (lVar6 == 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)*(double *)(lVar6 + 0x6d0);
    }
    *(float *)(param_1 + 0xef4) = fVar9;
    if ((*(char *)(param_1 + 0x518) == '\0') &&
       (*(undefined1 *)(param_1 + 0x518) = 1, *(char *)(param_1 + 0x178) != '\x03')) {
      FUN_1486e051e(param_1,1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xef4) = 0;
    if (*(longlong *)(param_1 + 0xf00) == 0) {
      local_40 = FUN_1461dfb52;
      local_38 = 0;
      FUN_146631e3a(&DAT_14cb7df68,&local_30,param_1);
      *(undefined8 *)(param_1 + 0xf00) = local_30;
    }
  }
  if (*(longlong *)(param_1 + 0xf08) == 0) {
    local_40 = FUN_148dc0838;
    local_38 = 0;
    FUN_146631e3a(&DAT_14cb7df80,&local_30,param_1);
    *(undefined8 *)(param_1 + 0xf08) = local_30;
  }
  FUN_146631fb8(&local_48);
  FUN_146631f3a(param_1 + 0x3f8,param_1,local_48);
  FUN_1412d3168(param_1,param_1,*(undefined8 *)(param_1 + 0x408));
  cVar1 = FUN_145989536();
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x178) == '\x03')) &&
     (*(longlong *)(param_1 + 0xf88) == 0)) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xf78) + 0x30);
    if (iVar3 == 0) {
      piVar8 = (int *)(*(longlong *)(param_1 + 0xf78) + 0x30);
      FUN_1402a453c(piVar8);
      iVar3 = *piVar8;
    }
    local_40 = (code *)&LAB_14599e4ba;
    local_38 = 0;
    FUN_14663206a(DAT_14c9a3d60 + (longlong)iVar3 * 0x88 + -0x18,&local_30,param_1);
    *(undefined8 *)(param_1 + 0xf88) = local_30;
  }
  if ((*(longlong *)(lVar4 + 0x30) == 0) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar4 == 0)) {
LAB_1441f9471:
    *(undefined1 *)(param_1 + 0x743) = 0;
    bVar2 = *(byte *)(param_1 + 0x74c) & 0xfd;
    bVar7 = 0;
  }
  else {
    lVar6 = FUN_140a99ecc();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1441f9471;
    *(undefined1 *)(param_1 + 0x743) = *(undefined1 *)(lVar4 + 0x6a2);
    bVar2 = *(byte *)(param_1 + 0x74c) & 0xfd | *(char *)(lVar4 + 0x6a3) * '\x02';
    *(byte *)(param_1 + 0x74c) = bVar2;
    bVar7 = *(char *)(lVar4 + 0x6a4) << 3;
  }
  *(byte *)(param_1 + 0x74c) = bVar2 & 0xf7 | bVar7;
LAB_1441f92d3:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f9540 FUN_1441f9540 body=336 status=ok
// SIG undefined FUN_1441f9540(void)

void FUN_1441f9540(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  uint local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14655b0de();
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    local_48 = DAT_14cbd05d8;
    local_50 = DAT_14cbd05d0;
    FUN_1448075d0(local_40);
    pbVar2 = (byte *)*param_2;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar4 = &DAT_14c9a1288;
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
        plVar6 = plVar4 + 8;
        if ((longlong *)plVar4[9] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar4[9];
        }
        iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_40[0]) * 4);
        if (iVar7 != -1) {
          do {
            lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
            if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_40[0]) {
              if ((((lVar1 != 0) &&
                   (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
              goto LAB_1441f9624;
              break;
            }
            iVar7 = *(int *)(lVar1 + 0x38);
          } while (iVar7 != -1);
        }
      }
    }
    puVar5 = &DAT_14c9a1308;
LAB_1441f9624:
    uVar3 = FUN_140d7984c(puVar5,0);
    *(undefined8 *)(param_1 + 0xf68) = uVar3;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1441f9692(param_1,param_2,1);
  FUN_145eef600(param_1,param_2);
  FUN_145e120a0(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441f9692 FUN_1441f9692 body=1895 status=ok
// SIG undefined FUN_1441f9692(void)

void FUN_1441f9692(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  uint local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  code *local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1409da3ac(param_1,param_3);
  local_78 = DAT_14cbd0aa8;
  local_80 = DAT_14cbd0aa0;
  FUN_1448075d0(local_70);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar7 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar10[9];
      }
      iVar14 = *(int *)((longlong)plVar7 +
                       (ulonglong)((int)plVar10[10] - 1U & (uint)local_70[0]) * 4);
      if (iVar14 != -1) {
        do {
          lVar15 = *plVar10 + (longlong)iVar14 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar14 * 0x40) == (uint)local_70[0]) {
            if ((((lVar15 != 0) &&
                 (puVar12 = (undefined8 *)(lVar15 + 0x28), puVar12 != (undefined8 *)0x0)) &&
                ((byte *)*puVar12 != (byte *)0x0)) && ((*(byte *)*puVar12 & 0x40) == 0))
            goto LAB_1441f977a;
            break;
          }
          iVar14 = *(int *)(lVar15 + 0x38);
        } while (iVar14 != -1);
      }
    }
  }
  puVar12 = &DAT_14c9a1308;
LAB_1441f977a:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (((DAT_14cb758b8 != 0) && (pbVar2 = (byte *)*puVar12, pbVar2 != (byte *)0x0)) &&
     ((*pbVar2 & 3) == 2)) {
    lVar15 = (longlong)*(int *)(*(undefined8 **)(pbVar2 + 8) + 2);
    local_98 = param_1;
    if (lVar15 != 0) {
      puVar12 = (undefined8 *)**(undefined8 **)(pbVar2 + 8);
      puVar16 = puVar12 + lVar15 * 2;
      local_90 = DAT_14cb758b8;
      lVar15 = DAT_14cb758b8;
      do {
        if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 3) != 0)) {
          local_78 = DAT_14cbd0ac0;
          local_80 = DAT_14cbd0ab8;
          FUN_1448075d0(local_70,&local_80);
          pbVar2 = (byte *)*puVar12;
          plVar10 = &DAT_14c9a1308;
          if (pbVar2 != (byte *)0x0) {
            plVar7 = &DAT_14c9a1288;
            if ((*pbVar2 & 2) != 0) {
              plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
            }
            plVar10 = &DAT_14c9a1308;
            if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
              plVar10 = plVar7 + 8;
              if ((longlong *)plVar7[9] != (longlong *)0x0) {
                plVar10 = (longlong *)plVar7[9];
              }
              iVar14 = *(int *)((longlong)plVar10 +
                               (ulonglong)((int)plVar7[10] - 1U & (uint)local_70[0]) * 4);
              plVar10 = &DAT_14c9a1308;
              if (iVar14 != -1) {
                do {
                  lVar1 = *plVar7 + (longlong)iVar14 * 0x40;
                  if (*(uint *)(*plVar7 + (longlong)iVar14 * 0x40) == (uint)local_70[0]) {
                    plVar10 = &DAT_14c9a1308;
                    if (lVar1 == 0) goto LAB_1441f98d0;
                    plVar7 = (longlong *)(lVar1 + 0x28);
                    plVar10 = &DAT_14c9a1308;
                    if ((plVar7 == (longlong *)0x0) ||
                       (((byte *)*plVar7 != (byte *)0x0 &&
                        (plVar10 = plVar7, (*(byte *)*plVar7 & 0x40) == 0)))) goto LAB_1441f98d0;
                    break;
                  }
                  iVar14 = *(int *)(lVar1 + 0x38);
                } while (iVar14 != -1);
                plVar10 = &DAT_14c9a1308;
              }
            }
          }
LAB_1441f98d0:
          piVar13 = &DAT_14c9a12e0;
          if (*plVar10 != 0) {
            piVar13 = (int *)FUN_140625092();
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if ((((*piVar13 != 0) && (piVar13[1] != 0)) && (*piVar13 != DAT_14c948000)) &&
             (plVar10 = (longlong *)FUN_144837462(lVar15,piVar13), plVar10 != (longlong *)0x0)) {
            local_78 = DAT_14cbd0ad8;
            local_80 = DAT_14cbd0ad0;
            FUN_1448075d0(local_70,&local_80);
            pbVar2 = (byte *)*puVar12;
            puVar8 = &DAT_14c9a1308;
            if (pbVar2 != (byte *)0x0) {
              plVar7 = &DAT_14c9a1288;
              if ((*pbVar2 & 2) != 0) {
                plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
              }
              puVar8 = &DAT_14c9a1308;
              if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
                plVar9 = plVar7 + 8;
                if ((longlong *)plVar7[9] != (longlong *)0x0) {
                  plVar9 = (longlong *)plVar7[9];
                }
                iVar14 = *(int *)((longlong)plVar9 +
                                 (ulonglong)((int)plVar7[10] - 1U & (uint)local_70[0]) * 4);
                puVar8 = &DAT_14c9a1308;
                if (iVar14 != -1) {
                  do {
                    lVar15 = *plVar7 + (longlong)iVar14 * 0x40;
                    if (*(uint *)(*plVar7 + (longlong)iVar14 * 0x40) == (uint)local_70[0]) {
                      puVar8 = &DAT_14c9a1308;
                      if (lVar15 == 0) goto LAB_1441f99f6;
                      puVar11 = (undefined8 *)(lVar15 + 0x28);
                      puVar8 = &DAT_14c9a1308;
                      if ((puVar11 == (undefined8 *)0x0) ||
                         (((byte *)*puVar11 != (byte *)0x0 &&
                          (puVar8 = puVar11, (*(byte *)*puVar11 & 0x40) == 0)))) goto LAB_1441f99f6;
                      break;
                    }
                    iVar14 = *(int *)(lVar15 + 0x38);
                  } while (iVar14 != -1);
                  puVar8 = &DAT_14c9a1308;
                }
              }
            }
LAB_1441f99f6:
            local_88 = FUN_140dddb1a(puVar8,0);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            local_78 = DAT_14cbd02c0;
            local_80 = DAT_14cbd02b8;
            FUN_1448075d0(local_70,&local_80);
            pbVar2 = (byte *)*puVar12;
            puVar8 = &DAT_14c9a1308;
            if (pbVar2 != (byte *)0x0) {
              plVar7 = &DAT_14c9a1288;
              if ((*pbVar2 & 2) != 0) {
                plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
              }
              puVar8 = &DAT_14c9a1308;
              if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
                plVar9 = plVar7 + 8;
                if ((longlong *)plVar7[9] != (longlong *)0x0) {
                  plVar9 = (longlong *)plVar7[9];
                }
                iVar14 = *(int *)((longlong)plVar9 +
                                 (ulonglong)((int)plVar7[10] - 1U & (uint)local_70[0]) * 4);
                puVar8 = &DAT_14c9a1308;
                if (iVar14 != -1) {
                  do {
                    lVar15 = *plVar7 + (longlong)iVar14 * 0x40;
                    if (*(uint *)(*plVar7 + (longlong)iVar14 * 0x40) == (uint)local_70[0]) {
                      puVar8 = &DAT_14c9a1308;
                      if (lVar15 == 0) goto LAB_1441f9ae1;
                      puVar11 = (undefined8 *)(lVar15 + 0x28);
                      puVar8 = &DAT_14c9a1308;
                      if ((puVar11 == (undefined8 *)0x0) ||
                         (((byte *)*puVar11 != (byte *)0x0 &&
                          (puVar8 = puVar11, (*(byte *)*puVar11 & 0x40) == 0)))) goto LAB_1441f9ae1;
                      break;
                    }
                    iVar14 = *(int *)(lVar15 + 0x38);
                  } while (iVar14 != -1);
                  puVar8 = &DAT_14c9a1308;
                }
              }
            }
LAB_1441f9ae1:
            uVar5 = FUN_140e1edd4(puVar8,0);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            pbVar2 = (byte *)*puVar12;
            plVar7 = &DAT_14c9a1288;
            if ((pbVar2 != (byte *)0x0) && (plVar7 = &DAT_14c9a1288, (*pbVar2 & 2) != 0)) {
              plVar7 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
            }
            local_78 = DAT_14cbd02d8;
            local_80 = DAT_14cbd02d0;
            FUN_1448075d0(local_70,&local_80);
            if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
              plVar9 = plVar7 + 8;
              if ((longlong *)plVar7[9] != (longlong *)0x0) {
                plVar9 = (longlong *)plVar7[9];
              }
              iVar14 = *(int *)((longlong)plVar9 +
                               (ulonglong)((int)plVar7[10] - 1U & (uint)local_70[0]) * 4);
              if (iVar14 != -1) {
                do {
                  lVar15 = *plVar7 + (longlong)iVar14 * 0x40;
                  if (*(uint *)(*plVar7 + (longlong)iVar14 * 0x40) == (uint)local_70[0]) {
                    if (local_58 != 0) {
                      FUN_1400020a8();
                    }
                    uVar4 = 2;
                    if ((lVar15 != 0) &&
                       (cVar3 = (**(code **)(*plVar10 + 0x30))(plVar10), cVar3 != '\0')) {
                      if (*(longlong *)(lVar15 + 0x28) == 0) {
                        uVar4 = 0;
                      }
                      else {
                        uVar4 = FUN_14000584e(*(longlong *)(lVar15 + 0x28),0);
                      }
                    }
                    goto LAB_1441f9baa;
                  }
                  iVar14 = *(int *)(lVar15 + 0x38);
                } while (iVar14 != -1);
              }
            }
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            uVar4 = 2;
LAB_1441f9baa:
            param_1 = local_98;
            local_e8 = CONCAT31(local_e8._1_3_,uVar4);
            local_e0 = local_e0 & 0xffffff00;
            FUN_140d72784(local_98,plVar10,local_88,uVar5);
            lVar15 = local_90;
          }
        }
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar16);
    }
    lVar15 = *(longlong *)(param_1 + 0x408);
    if (lVar15 != 0) {
      if (DAT_14cba8288 == 0) {
        local_70[0] = FUN_141864c34;
        local_a0 = FUN_14081d0ea;
        local_a8 = &LAB_1464cee30;
        local_b8 = &LAB_148bfac22;
        local_c0 = &LAB_140f21842;
        local_c8 = &DAT_149e063b2;
        local_d0 = 0;
        local_d8 = 0x10000004;
        local_e0 = 0x10;
        local_e8 = 0x9cd0;
        local_b0 = local_70;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        lVar15 = *(longlong *)(param_1 + 0x408);
        if (lVar15 == 0) goto LAB_1441f9cc2;
      }
      if ((((DAT_14cba8288 != 0) && (lVar1 = *(longlong *)(lVar15 + 0x10), lVar1 != 0)) &&
          (*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
          == DAT_14cba8288 + 0x30)) {
        if (DAT_14cb79120 == 0) {
          if (DAT_14cb758b8 == 0) {
            DAT_14cb79120 = 0;
            param_1 = local_98;
          }
          else {
            DAT_14cb79120 = FUN_144837462(DAT_14cb758b8,&DAT_14cb790d0);
            param_1 = local_98;
          }
        }
        puVar6 = (undefined4 *)FUN_1409e484c(param_1);
        (**(code **)(*(longlong *)(lVar15 + 0x10c0) + 0x20))((longlong *)(lVar15 + 0x10c0),*puVar6);
      }
    }
  }
LAB_1441f9cc2:
  FUN_14036c744(&DAT_14cbd0a20,param_1);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441f9dfa FUN_1441f9dfa body=42 status=ok
// SIG undefined FUN_1441f9dfa(void)

void FUN_1441f9dfa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x7a0))();
  (**(code **)(*param_1 + 0x7a8))(param_1);
  FUN_1441f9e24(param_1);
  return;
}



// FUNCTION 1441f9e24 FUN_1441f9e24 body=749 status=ok
// SIG undefined FUN_1441f9e24(void)

void FUN_1441f9e24(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  byte *local_88;
  longlong *local_80;
  undefined1 local_74 [4];
  undefined8 *local_70;
  code **local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_1447210f0();
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1400f6f32(lVar3);
    if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 == 0)) {
LAB_1441f9e8e:
      lVar4 = 0;
    }
    else {
      lVar5 = FUN_14130c5c8();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) goto LAB_1441f9e8e;
    }
    lVar3 = FUN_1400f6f32(lVar3);
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x68);
      goto LAB_1441f9ea5;
    }
  }
  lVar3 = 0;
LAB_1441f9ea5:
  lVar5 = *(longlong *)(param_1 + 0x168);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1459f2e4c;
      local_a8 = &LAB_148c39de3;
      local_b0 = &LAB_1457a9eb2;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) && (lVar4 != 0))
       && (lVar3 != 0)) {
      FUN_14042af24(lVar3,local_74,param_1);
      FUN_1443446e6(lVar4,&local_88,local_74);
      plVar8 = &DAT_14c9a1288;
      if ((local_88 != (byte *)0x0) && ((*local_88 & 2) != 0)) {
        plVar8 = (longlong *)(*(longlong *)(local_88 + 8) + 0x18);
      }
      local_68 = &local_58;
      local_60 = DAT_14cb895d0;
      local_58 = (code *)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_70 = &local_60;
      FUN_14581cf4c(&local_58,&local_70,0);
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar6 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar8[9];
        }
        iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_58) * 4);
        if (iVar7 != -1) {
          do {
            lVar3 = *plVar8 + (longlong)iVar7 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar7 * 0x40) == (uint)local_58) {
              if (local_40 != 0) {
                FUN_1400020a8();
              }
              if (lVar3 != 0) {
                uVar2 = FUN_143ca043c(lVar3 + 0x28,*(undefined1 *)(lVar5 + 0xd68));
                *(undefined1 *)(lVar5 + 0xd68) = uVar2;
              }
              goto LAB_1441f9ff4;
            }
            iVar7 = *(int *)(lVar3 + 0x38);
          } while (iVar7 != -1);
        }
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_1441f9ff4:
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_80 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441fa112 FUN_1441fa112 body=3692 status=ok
// SIG undefined FUN_1441fa112(void)

void FUN_1441fa112(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *_Str;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  char *pcVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  int local_a8;
  undefined1 local_a4;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_145caa67e();
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_b8 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,DAT_14cbd0290);
  local_58 = DAT_14cbd0288;
  FUN_1448075d0(&local_b0);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_b0) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_b0) {
            if ((((lVar8 != 0) &&
                 (puVar13 = (undefined8 *)(lVar8 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                ((byte *)*puVar13 != (byte *)0x0)) && ((*(byte *)*puVar13 & 0x40) == 0))
            goto LAB_1441fa21c;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar13 = &DAT_14c9a1308;
LAB_1441fa21c:
  pbVar1 = (byte *)*puVar13;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(pbVar1 + 8);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,uVar5,0);
  FUN_1404e49fa(&local_88,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1418eeb7b(&local_b8,param_2);
  FUN_1418eed7d(&local_58,param_2);
  if ((code **)(param_1 + 0x728) == &local_58) {
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x728) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_1 + 0x728) = local_58;
    local_58 = (code *)0x0;
    *(undefined4 *)(param_1 + 0x730) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0x734) = uStack_50._4_4_;
  }
  if (DAT_14cbd06b8 == '\0') {
    local_a8 = DAT_14cbd0590;
    local_b0 = DAT_14cbd0588;
    FUN_1448075d0(&local_58);
    pbVar1 = (byte *)*param_2;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 2) == 0) {
        plVar12 = &DAT_14c9a1288;
      }
      else {
        plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
      }
      if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
        plVar15 = plVar12 + 8;
        if ((longlong *)plVar12[9] != (longlong *)0x0) {
          plVar15 = (longlong *)plVar12[9];
        }
        iVar11 = *(int *)((longlong)plVar15 +
                         (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4);
        if (iVar11 != -1) {
          do {
            lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
              if (((lVar8 != 0) &&
                  (plVar12 = (longlong *)(lVar8 + 0x28), plVar12 != (longlong *)0x0)) &&
                 (((byte *)*plVar12 != (byte *)0x0 && ((*(byte *)*plVar12 & 0x40) == 0))))
              goto LAB_1441fa3cb;
              break;
            }
            iVar11 = *(int *)(lVar8 + 0x38);
          } while (iVar11 != -1);
        }
      }
    }
    plVar12 = &DAT_14c9a1308;
LAB_1441fa3cb:
    local_b0 = (char *)0x0;
    if (*plVar12 == 0) {
      local_c0 = 0;
    }
    else {
      FUN_1400bc2ec(*plVar12,&local_c0,&local_b0);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    cVar2 = FUN_1402ca054(local_c0,L"pending",7);
    if (cVar2 == '\0') {
      cVar2 = FUN_1402ca054(local_c0,&DAT_149e06346,4);
      if (cVar2 == '\0') {
        *(undefined2 *)(param_1 + 0x6b2) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x6b2) = 0x100;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x6b2) = 1;
    }
    local_a8 = DAT_14cbd05a8;
    local_b0 = DAT_14cbd05a0;
    FUN_1448075d0(&local_58);
    pbVar1 = (byte *)*param_2;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 2) == 0) {
        plVar12 = &DAT_14c9a1288;
      }
      else {
        plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
      }
      if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
        plVar15 = plVar12 + 8;
        if ((longlong *)plVar12[9] != (longlong *)0x0) {
          plVar15 = (longlong *)plVar12[9];
        }
        iVar11 = *(int *)((longlong)plVar15 +
                         (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4);
        if (iVar11 != -1) {
          do {
            lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
              if ((((lVar8 != 0) &&
                   (plVar12 = (longlong *)(lVar8 + 0x28), plVar12 != (longlong *)0x0)) &&
                  ((byte *)*plVar12 != (byte *)0x0)) && ((*(byte *)*plVar12 & 0x40) == 0))
              goto LAB_1441fa510;
              break;
            }
            iVar11 = *(int *)(lVar8 + 0x38);
          } while (iVar11 != -1);
        }
      }
    }
    plVar12 = &DAT_14c9a1308;
LAB_1441fa510:
    if (*plVar12 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_14000584e(*plVar12,0);
    }
    *(undefined1 *)(param_1 + 0x6b4) = uVar3;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  local_a8 = DAT_14cbd05c0;
  local_b0 = DAT_14cbd05b8;
  FUN_1448075d0(&local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
            if (((lVar8 != 0) && (plVar12 = (longlong *)(lVar8 + 0x28), plVar12 != (longlong *)0x0))
               && (((byte *)*plVar12 != (byte *)0x0 && ((*(byte *)*plVar12 & 0x40) == 0))))
            goto LAB_1441fa5ef;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  plVar12 = &DAT_14c9a1308;
LAB_1441fa5ef:
  if (*plVar12 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14000584e(*plVar12,0);
  }
  *(undefined1 *)(param_1 + 0x6b5) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar5 = FUN_1405c673d();
  local_a8 = DAT_14cbd03f8;
  local_b0 = DAT_14cbd03f0;
  FUN_1448075d0(&local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
            if (((lVar8 != 0) &&
                (puVar13 = (undefined8 *)(lVar8 + 0x28), puVar13 != (undefined8 *)0x0)) &&
               (((byte *)*puVar13 != (byte *)0x0 && ((*(byte *)*puVar13 & 0x40) == 0))))
            goto LAB_1441fa6d6;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar13 = &DAT_14c9a1308;
LAB_1441fa6d6:
  pbVar1 = (byte *)*puVar13;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) &&
     (_Str = *(char **)(pbVar1 + 8), _Str != (char *)0x0)) {
    sVar7 = strlen(_Str);
    iVar11 = (int)sVar7;
    if (iVar11 != 0) {
      lVar8 = (longlong)iVar11;
      pcVar14 = _Str + lVar8 + -1;
      uVar10 = 0;
      if (pcVar14 < _Str) {
        lVar9 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar14 - 0x30U)) break;
          uVar10 = uVar10 + 1;
          pcVar14 = pcVar14 + -1;
        } while (_Str <= pcVar14);
        lVar9 = 0;
        if (((uVar10 != 0) && ((int)uVar10 < iVar11)) &&
           ((lVar9 = 0, uVar10 < 0xb &&
            (lVar16 = -(ulonglong)uVar10, _Str[lVar16 + lVar8 + -1] == '_')))) {
          if ((uVar10 == 1) || (_Str[lVar16 + lVar8] != '0')) {
            lVar18 = 0;
            do {
              lVar9 = (longlong)_Str[lVar16 + lVar8] + lVar18 * 10;
              lVar18 = lVar9 + -0x30;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0);
            if (lVar18 < 0x7fffffff) {
              iVar11 = ~uVar10 + iVar11;
              lVar9 = lVar9 + -0x2f;
              goto LAB_1441fa745;
            }
          }
          lVar9 = 0;
        }
LAB_1441fa745:
        if (iVar11 == 0) goto LAB_1441fa6de;
      }
      local_a4 = 0;
      local_b0 = _Str;
      local_a8 = iVar11;
      uVar10 = FUN_14001a6c0(&local_b0,1);
      uVar17 = lVar9 << 0x20;
      uVar6 = (ulonglong)uVar10;
      goto LAB_1441fa76b;
    }
  }
LAB_1441fa6de:
  uVar6 = 0;
  uVar17 = 0;
LAB_1441fa76b:
  local_b0 = (char *)(uVar6 | uVar17);
  uVar3 = FUN_148cef184(uVar5,&local_b0,1,0);
  *(undefined1 *)(param_1 + 0x710) = uVar3;
  FUN_145be8d80(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbd0410;
  local_b0 = DAT_14cbd0408;
  FUN_1448075d0(&local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
            if ((((lVar8 != 0) && (plVar12 = (longlong *)(lVar8 + 0x28), plVar12 != (longlong *)0x0)
                 ) && ((byte *)*plVar12 != (byte *)0x0)) && ((*(byte *)*plVar12 & 0x40) == 0))
            goto LAB_1441fa85b;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  plVar12 = &DAT_14c9a1308;
LAB_1441fa85b:
  if (*plVar12 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14000584e(*plVar12,0);
  }
  *(undefined1 *)(param_1 + 0xdc8) = uVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar5 = FUN_1447210f0(param_1);
  FUN_148d1c51c(*(undefined1 *)(param_1 + 0xdc8),uVar5);
  local_a8 = DAT_14cbd0458;
  local_b0 = DAT_14cbd0450;
  FUN_1448075d0(&local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
            if (((lVar8 != 0) &&
                (puVar13 = (undefined8 *)(lVar8 + 0x28), puVar13 != (undefined8 *)0x0)) &&
               (((byte *)*puVar13 != (byte *)0x0 && ((*(byte *)*puVar13 & 0x40) == 0))))
            goto LAB_1441fa950;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar13 = &DAT_14c9a1308;
LAB_1441fa950:
  uVar4 = FUN_140e1edd4(puVar13,0);
  *(undefined4 *)(param_1 + 0xdb0) = uVar4;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbd0440;
  local_b0 = DAT_14cbd0438;
  FUN_1448075d0(&local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
            if (((lVar8 != 0) &&
                (puVar13 = (undefined8 *)(lVar8 + 0x28), puVar13 != (undefined8 *)0x0)) &&
               (((byte *)*puVar13 != (byte *)0x0 && ((*(byte *)*puVar13 & 0x40) == 0))))
            goto LAB_1441faa23;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar13 = &DAT_14c9a1308;
LAB_1441faa23:
  uVar4 = FUN_140e1edd4(puVar13,0);
  *(undefined4 *)(param_1 + 0xdb4) = uVar4;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbd0470;
  local_b0 = DAT_14cbd0468;
  FUN_1448075d0(&local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
            if ((((lVar8 != 0) &&
                 (puVar13 = (undefined8 *)(lVar8 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                ((byte *)*puVar13 != (byte *)0x0)) && ((*(byte *)*puVar13 & 0x40) == 0))
            goto LAB_1441faaf6;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar13 = &DAT_14c9a1308;
LAB_1441faaf6:
  uVar4 = FUN_140e1edd4(puVar13,0);
  *(undefined4 *)(param_1 + 0xdcc) = uVar4;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1441f9692(param_1,param_2,0);
  FUN_1461b7f5c(param_1,param_2);
  FUN_146549754(param_1 + 0xd28,param_2);
  FUN_145d1620a(param_1,param_2);
  FUN_1462529f2(param_1,param_2);
  FUN_146630474(param_1 + 0xd50,param_2);
  if (*(longlong *)(param_1 + 0xf78) != 0) {
    FUN_1412fb156(*(longlong *)(param_1 + 0xf78),param_2);
  }
  FUN_1447a97f4(&local_58,&local_88);
  uVar5 = FUN_146625f4e(&local_58);
  *(undefined8 *)(param_1 + 0x738) = uVar5;
  FUN_145d09f9e(param_1,&local_b8,0);
  plVar12 = *(longlong **)(param_1 + 0x168);
  if (plVar12 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_58 = FUN_141030f22;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_1459f2e4c;
      local_e8 = &LAB_148c39de3;
      local_f0 = &LAB_1457a9eb2;
      local_f8 = &DAT_149e063b2;
      local_100 = 0;
      local_108 = 0x10000004;
      local_110 = 0x10;
      local_118 = 0x3de0;
      local_e0 = &local_58;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      (**(code **)(*plVar12 + 0x10a0))(plVar12,param_2);
      lVar8 = FUN_1447210f0(param_1);
      if (lVar8 != 0) {
        lVar8 = FUN_1447210f0(param_1);
        lVar8 = *(longlong *)(lVar8 + 0x170);
        if (lVar8 != 0) {
          lVar9 = FUN_140425b9a();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            FUN_145979794(lVar8,plVar12);
          }
        }
      }
    }
  }
  FUN_1412d33aa(param_1);
  uVar4 = FUN_140b962c6(param_2);
  *(undefined4 *)(param_1 + 0xef8) = uVar4;
  local_a8 = DAT_14cbd04d0;
  local_b0 = DAT_14cbd04c8;
  FUN_1448075d0(&local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_58) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_58) {
            if ((((lVar8 != 0) &&
                 (puVar13 = (undefined8 *)(lVar8 + 0x28), puVar13 != (undefined8 *)0x0)) &&
                ((byte *)*puVar13 != (byte *)0x0)) && ((*(byte *)*puVar13 & 0x40) == 0))
            goto LAB_1441facb7;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar13 = &DAT_14c9a1308;
LAB_1441facb7:
  FUN_140d7984c(puVar13,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441fb050 FUN_1441fb050 body=898 status=ok
// SIG undefined FUN_1441fb050(void)

void FUN_1441fb050(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong local_70 [2];
  undefined8 local_60;
  code *local_58;
  int local_50;
  short local_44 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = FUN_1401b2ade();
  if (lVar4 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_90 = &local_58;
      local_58 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1459f2e4c;
      local_98 = &LAB_148c39de3;
      local_a0 = &LAB_1457a9eb2;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
        (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) &&
       (((lVar5 = FUN_1400f6f32(lVar5), lVar5 != 0 &&
         (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)) &&
        (FUN_140d27df6(lVar5,local_44,lVar4), -1 < local_44[0])))) {
      uVar3 = FUN_1402d8968(lVar5,local_44);
      if (uVar3 < 0xb) {
        uVar1 = *param_2;
        local_58 = (code *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        pcVar2 = local_58;
        local_50 = 3;
        *(undefined ***)local_58 = &PTR_LAB_14b3e9ca0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        *(longlong *)(local_58 + 0x10) = lVar6;
        *(undefined ***)local_58 = &PTR_FUN_14b996a20;
        *(undefined8 *)(local_58 + 0x18) = 0;
        iVar7 = 0;
        if (param_1 != 0) {
          uVar3 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_58 + 0x18) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          iVar7 = *(int *)(lVar4 + 0x10);
          if (*(int *)(lVar4 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar7 = *(int *)(lVar4 + 0x10);
            bVar9 = iVar7 == 0;
            if (bVar9) {
              *(int *)(lVar4 + 0x10) = iVar8;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar9) {
              iVar7 = iVar8;
            }
          }
        }
        *(int *)(pcVar2 + 0x1c) = iVar7;
        *(longlong *)(pcVar2 + 0x20) = param_1;
        *(undefined8 *)(pcVar2 + 0x28) = uVar1;
        FUN_140056680(local_70,L"GrantNewCharacterSkipMissionRewards");
        local_b8 = CONCAT31(local_b8._1_3_,1);
        local_c0 = 0x8000000;
        local_c8 = local_70;
        FUN_1413d987a(lVar5,&local_60,local_44,&local_58);
        *(undefined8 *)(param_1 + 0x6a8) = local_60;
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
        if (local_50 != 0) {
          if (local_58 == (code *)0x0) goto LAB_1441fb0b1;
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
        }
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_1441fb3d4(param_1,param_2);
      }
    }
  }
LAB_1441fb0b1:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441fb3d4 FUN_1441fb3d4 body=1198 status=ok
// SIG undefined FUN_1441fb3d4(void)

void FUN_1441fb3d4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = FUN_1401b2ade();
  if (lVar4 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_f0 = &local_88;
      local_88 = FUN_141030f22;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_1459f2e4c;
      local_f8 = &LAB_148c39de3;
      local_100 = &LAB_1457a9eb2;
      local_108 = &DAT_149e063b2;
      local_110 = 0;
      local_118 = 0x10000004;
      local_120 = 0x10;
      local_128 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      FUN_1446dcdd4(&local_88,param_2);
      if (DAT_14cbcdcf0 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_144837462(DAT_14cbcdcf0,&local_88);
      }
      local_d8 = lVar4;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (lVar5 != 0) {
        iVar6 = *(int *)(lVar5 + 0x20);
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6);
        }
        local_d0 = param_1;
        if ((int)uStack_90._4_4_ < iVar6) {
          FUN_1446dda88(&local_98);
          iVar6 = *(int *)(lVar5 + 0x20);
        }
        if (iVar6 != 0) {
          lVar4 = *(longlong *)(lVar5 + 0x18);
          lVar7 = 0;
          do {
            local_c0 = *(longlong *)(lVar4 + lVar7);
            FUN_1401533ba(&local_88,&local_c0,1);
            uVar2 = uStack_90;
            lVar8 = (longlong)(int)uStack_90;
            uVar3 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
            if (uStack_90._4_4_ < uVar3) {
              FUN_1446dd912(&local_98,uVar2 & 0xffffffff);
            }
            *(undefined4 *)((longlong)local_98 + lVar8 * 0xc + 8) = local_80;
            *(code **)((longlong)local_98 + lVar8 * 0xc) = local_88;
            lVar7 = lVar7 + 0x18;
          } while ((longlong)iVar6 * 0x18 != lVar7);
        }
        uVar1 = *(undefined4 *)(lVar5 + 0x28);
        lVar4 = (**(code **)(*(longlong *)(local_d8 + 0x9a8) + 0x10))(local_d8 + 0x9a8);
        if (lVar4 != 0) {
          if ((longlong)(int)uStack_90 != 0) {
            local_c8 = (undefined8 *)((longlong)local_98 + (longlong)(int)uStack_90 * 0xc);
            puVar9 = local_98;
            do {
              local_a8 = *puVar9;
              local_a0 = *(undefined4 *)(puVar9 + 1);
              FUN_1448075d0(&local_88,&local_a8);
              lVar5 = FUN_140fa5e12(&local_88);
              if (local_70 != 0) {
                FUN_1400020a8();
              }
              if ((((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x78))) &&
                  (lVar5 = *(longlong *)(lVar5 + 0x70), lVar5 != 0)) &&
                 ((longlong)*(int *)(lVar5 + 0x58) != 0)) {
                lVar7 = (longlong)*(int *)(lVar5 + 0x58) * 0x58;
                lVar5 = *(longlong *)(lVar5 + 0x50) + 8;
                do {
                  lVar8 = FUN_1418a5c14(lVar5);
                  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x50) == '\x01')) {
                    local_88 = (code *)0x0;
                    local_7c = 0x3f800000;
                    local_78 = 0;
                    local_70 = 0;
                    uStack_68 = 0;
                    local_c0 = lVar8 + 0x18;
                    local_b0 = 0;
                    local_b8 = lVar8;
                    local_80 = uVar1;
                    FUN_14164c0ba(lVar4,&local_c0,&local_88);
                    FUN_140de863f(local_70,uStack_68 & 0xffffffff);
                    if (local_70 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  lVar5 = lVar5 + 0x58;
                  lVar7 = lVar7 + -0x58;
                } while (lVar7 != 0);
              }
              puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
            } while (puVar9 != local_c8);
          }
        }
        lVar4 = local_d0;
        if (((*(longlong *)(local_d0 + 0x6a8) != 0) && (lVar5 = FUN_1447210f0(local_d0), lVar5 != 0)
            ) && ((lVar5 = FUN_1400f6f32(lVar5), lVar5 != 0 &&
                  (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)))) {
          FUN_140d27df6(lVar5,&local_88,local_d8);
          if (-1 < (short)local_88) {
            FUN_145bd9d12(lVar5,*(undefined8 *)(lVar4 + 0x6a8),0xffffffff);
          }
        }
      }
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441fb884 FUN_1441fb884 body=252 status=ok
// SIG undefined FUN_1441fb884(void)

undefined8 FUN_1441fb884(longlong param_1,undefined8 *param_2,byte param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [44];
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    lVar4 = FUN_1400f6f32(lVar3);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x68);
    }
    lVar3 = FUN_1400f6f32(lVar3);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0 && lVar4 != 0)) {
      lVar5 = FUN_1403b0700(param_1);
      lVar1 = DAT_14cb71810;
      lVar5 = *(longlong *)(lVar5 + 0x38);
      FUN_14042af24(lVar4,local_4c,param_1);
      if (-1 < local_4c[0]) {
        cVar2 = FUN_146242444(lVar3,local_4c,*param_2,(lVar5 == lVar1 || lVar5 == 0) | param_3);
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x6b0) = 0;
          uVar6 = 1;
          goto LAB_1441fb91f;
        }
      }
    }
  }
  uVar6 = 0;
LAB_1441fb91f:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441fb982 FUN_1441fb982 body=10135 status=ok
// SIG undefined FUN_1441fb982(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1441fb982(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  code *****pppppcVar1;
  int *piVar2;
  ulonglong uVar3;
  wchar_t wVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  code ****ppppcVar7;
  DWORD DVar8;
  char cVar9;
  uint uVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  longlong lVar12;
  size_t sVar13;
  longlong lVar14;
  LPVOID lpTlsValue;
  uint *puVar15;
  code ***pppcVar16;
  undefined8 uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  char *pcVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  code *****pppppcVar29;
  undefined4 *puVar30;
  wchar_t *_Str;
  wchar_t *pwVar31;
  wchar_t *pwVar32;
  longlong *plVar33;
  ulonglong uVar34;
  uint uVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  bool bVar39;
  float fVar40;
  undefined1 auStack_278 [32];
  uint local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined2 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  code ***local_220;
  undefined1 *local_218;
  code *local_210;
  longlong local_208;
  undefined8 *local_200;
  longlong *local_1f8;
  code ***local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong *plStack_1d0;
  longlong local_1c0 [2];
  longlong *plStack_1b0;
  longlong local_1a8;
  longlong *plStack_1a0;
  longlong local_198;
  longlong *plStack_190;
  code ***local_188;
  code *****pppppcStack_180;
  code **local_178;
  char local_170;
  code **local_168;
  undefined1 local_15c [4];
  code ****local_158;
  longlong *plStack_150;
  longlong local_148;
  longlong *plStack_140;
  code *****local_138;
  longlong *plStack_130;
  code ***local_128;
  longlong *plStack_120;
  uint local_118 [2];
  longlong local_110;
  uint *local_108;
  uint local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  code ****local_a8;
  code ****local_a0;
  int local_98;
  code ****local_88;
  longlong *plStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if ((*(char *)(param_1 + 0x4dd) != '\x01') || (cVar9 = FUN_143e0929a(), cVar9 == '\0')) {
    uVar17 = 0;
    goto LAB_1441fda7f;
  }
  local_208 = param_1;
  if (*(char *)(param_1 + 0x6b2) == '\x01') {
    if ((*(byte *)(param_1 + 0x6b3) & 1) != 0) goto LAB_1441fbade;
    cVar9 = FUN_14625992e();
    if (cVar9 != '\0') {
      local_188 = (code ***)0x0;
      pppppcStack_180 = (code *****)0x0;
      FUN_14009b010(&local_188,1,0);
      if ((local_188 != (code ***)0x0) && (((ulonglong)*local_188 & 0x200) == 0)) {
        FUN_140126aca(local_188,"pending");
      }
      plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0590);
      local_88 = DAT_14cbd0588;
      FUN_1448075d0(&local_128);
      if (*param_3 != 0) {
        local_258 = local_258 & 0xffffff00;
        FUN_14014191c(*param_3,&local_128,&local_188,0);
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      pppppcVar29 = pppppcStack_180;
      if (pppppcStack_180 == (code *****)0x0) goto LAB_1441fbc7f;
      LOCK();
      pppppcVar1 = pppppcStack_180 + 1;
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 != 0) goto LAB_1441fbc7f;
      (*(code *)**pppppcStack_180)(pppppcStack_180);
      LOCK();
      piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_1441fbc7f;
LAB_1441fbc71:
      (*(code *)(*pppppcVar29)[2])(pppppcVar29);
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x6b3) & 1) == 0) goto LAB_1441fbc7f;
LAB_1441fbade:
    local_188 = (code ***)0x0;
    pppppcStack_180 = (code *****)0x0;
    FUN_14009b010(&local_188,1,0);
    if ((local_188 != (code ***)0x0) && (((ulonglong)*local_188 & 0x200) == 0)) {
      FUN_140126aca(local_188,&DAT_149dfbe6e);
    }
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0590);
    local_88 = DAT_14cbd0588;
    FUN_1448075d0(&local_128);
    if (*param_3 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(*param_3,&local_128,&local_188,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(local_208 + 0x6b4) == '\x01') {
      local_88 = (code ****)0x0;
      plStack_80 = (longlong *)0x0;
      FUN_14009b010(&local_88,1,0);
      if ((local_88 != (code ****)0x0) && (((ulonglong)*local_88 & 0x200) == 0)) {
        FUN_140126aca(local_88,&DAT_149dfbe6e);
      }
      plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,DAT_14cbd05a8);
      local_138 = DAT_14cbd05a0;
      FUN_1448075d0(&local_128);
      if (*param_3 != 0) {
        local_258 = local_258 & 0xffffff00;
        FUN_14014191c(*param_3,&local_128,&local_88,0);
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      plVar21 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar23 = plStack_80 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
    }
    pppppcVar29 = pppppcStack_180;
    if (pppppcStack_180 != (code *****)0x0) {
      LOCK();
      pppppcVar1 = pppppcStack_180 + 1;
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 == 0) {
        (*(code *)**pppppcStack_180)(pppppcStack_180);
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) goto LAB_1441fbc71;
      }
    }
  }
LAB_1441fbc7f:
  if (*(char *)(local_208 + 0x6b5) == '\x01') {
    pppppcStack_180 = (code *****)CONCAT44(pppppcStack_180._4_4_,DAT_14cbd05c0);
    local_188 = DAT_14cbd05b8;
    FUN_1448075d0(&local_128);
    pbVar5 = (byte *)*param_3;
    if ((pbVar5 != (byte *)0x0) && ((~*pbVar5 & 3) == 0)) {
      lVar12 = *(longlong *)(pbVar5 + 8);
      pppppcStack_180 = (code *****)&local_138;
      local_138 = (code *****)CONCAT44(local_138._4_4_,1);
      local_188 = (code ***)&local_128;
      FUN_14049fede(lVar12 + 0x18,&local_88,&local_188,0);
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x28 + (longlong)(int)local_88 * 0x40);
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 1) & 2) == 0)) {
        pcVar25 = "false";
        if (*(char *)(local_208 + 0x6b5) != '\0') {
          pcVar25 = "true";
        }
        FUN_140126aca(lVar12,pcVar25);
      }
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(local_208 + 0x738) != 0) {
    puVar6 = *(undefined4 **)(*(longlong *)(local_208 + 0x738) + 8);
    puVar30 = &DAT_14c9485f0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar30 = puVar6;
    }
    if (DAT_14c947fe0 == 0) {
      lVar12 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar12);
      DAT_14c947fe0 = lVar12;
    }
    FUN_140045924(DAT_14c947fe0,&local_138,puVar30,1);
    if (local_138 != (code *****)0x0) {
      local_188 = (code ***)0x0;
      pppppcStack_180 = (code *****)0x0;
      FUN_14009b010(&local_188,1,0);
      if (local_188 != (code ***)0x0) {
        FUN_1401269d0(local_188,&local_138);
      }
      plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0290);
      local_88 = DAT_14cbd0288;
      FUN_1448075d0(&local_128);
      if (*param_3 != 0) {
        local_258 = local_258 & 0xffffff00;
        FUN_14014191c(*param_3,&local_128,&local_188,0);
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      pppppcVar29 = pppppcStack_180;
      if (pppppcStack_180 != (code *****)0x0) {
        LOCK();
        pppppcVar1 = pppppcStack_180 + 1;
        *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
        UNLOCK();
        if (*(int *)pppppcVar1 == 0) {
          (*(code *)**pppppcStack_180)(pppppcStack_180);
          LOCK();
          piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppppcVar29)[2])(pppppcVar29);
          }
        }
      }
    }
  }
  lVar12 = FUN_1403b0700(local_208);
  local_1c0[0] = *(longlong *)(lVar12 + 0x38);
  if (local_1c0[0] != 0) {
    local_188 = (code ***)0x0;
    pppppcStack_180 = (code *****)0x0;
    FUN_14009b010(&local_188,1,0);
    if (local_188 != (code ***)0x0) {
      FUN_1401269d0(local_188,local_1c0);
    }
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd02a8);
    local_88 = DAT_14cbd02a0;
    FUN_1448075d0(&local_128);
    if (*param_3 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(*param_3,&local_128,&local_188,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    pppppcVar29 = pppppcStack_180;
    if (pppppcStack_180 != (code *****)0x0) {
      LOCK();
      pppppcVar1 = pppppcStack_180 + 1;
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 == 0) {
        (*(code *)**pppppcStack_180)(pppppcStack_180);
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppcVar29)[2])(pppppcVar29);
        }
      }
    }
  }
  lVar12 = local_208;
  local_200 = param_2;
  local_1f8 = param_3;
  if (1 < *(int *)(local_208 + 0x730)) {
    local_188 = (code ***)0x0;
    pppppcStack_180 = (code *****)0x0;
    FUN_14009b010(&local_188,1,0);
    if (*(int *)(lVar12 + 0x730) == 0) {
      _Str = L"";
LAB_1441fbfc2:
      local_a8 = (code ****)0x0;
      sVar13 = wcslen(_Str);
      local_138 = (code *****)((ulonglong)local_138 & 0xffffffff00000000);
      local_88 = (code ****)CONCAT44(local_88._4_4_,0x7fffffff);
      uVar37 = sVar13 & 0xffffffff;
      pwVar32 = _Str;
      do {
        iVar27 = (int)uVar37;
        if (iVar27 < 1) {
LAB_1441fc0e7:
          local_98 = (int)local_138;
          uVar10 = (int)local_138 + 1;
          if (uVar10 < 0x81) goto LAB_1441fc107;
          FUN_1446efa72(&local_a8,0,uVar10,1);
          local_a0 = local_a8;
          goto LAB_1441fc109;
        }
        wVar4 = *pwVar32;
        uVar10 = (uint)(ushort)wVar4;
        pwVar31 = pwVar32 + 1;
        uVar37 = (ulonglong)(iVar27 - 1);
        if ((wVar4 & 0xfc00U) == 0xd800) {
          if (iVar27 == 1) {
            cVar9 = FUN_140024707(uVar10,&local_138,&local_88);
            if (cVar9 != '\0') goto LAB_1441fc0e7;
            break;
          }
          if (((ushort)*pwVar31 & 0xfc00) == 0xdc00) {
            uVar10 = (uint)(ushort)wVar4 * 0x400 + (uint)(ushort)*pwVar31 + 0xfca02400;
            pwVar31 = pwVar32 + 2;
            uVar37 = (ulonglong)(iVar27 - 2);
          }
        }
        cVar9 = FUN_140024707(uVar10,&local_138,&local_88);
        pwVar32 = pwVar31;
      } while (cVar9 != '\0');
      local_98 = -1;
      uVar10 = 0;
LAB_1441fc107:
      local_a0 = (code ****)0x0;
LAB_1441fc109:
      if (local_a0 == (code ****)0x0) {
        local_a0 = &local_128;
      }
      iVar27 = (int)sVar13 + 1;
      local_138 = (code *****)CONCAT44(local_138._4_4_,uVar10);
      local_88 = local_a0;
      do {
        param_2 = local_200;
        param_3 = local_1f8;
        if (iVar27 < 1) break;
        wVar4 = *_Str;
        uVar10 = (uint)(ushort)wVar4;
        pwVar32 = _Str + 1;
        iVar36 = iVar27 + -1;
        if ((wVar4 & 0xfc00U) == 0xd800) {
          if (iVar27 == 1) {
            FUN_1400247af(uVar10,&local_88,&local_138);
            param_2 = local_200;
            param_3 = local_1f8;
            break;
          }
          if (((ushort)*pwVar32 & 0xfc00) == 0xdc00) {
            uVar10 = (uint)(ushort)wVar4 * 0x400 + (uint)(ushort)*pwVar32 + 0xfca02400;
            pwVar32 = _Str + 2;
            iVar36 = iVar27 + -2;
          }
        }
        iVar27 = iVar36;
        _Str = pwVar32;
        cVar9 = FUN_1400247af(uVar10,&local_88,&local_138);
        param_2 = local_200;
        param_3 = local_1f8;
      } while (cVar9 != '\0');
    }
    else {
      _Str = *(wchar_t **)(lVar12 + 0x728);
      local_a8 = (code ****)0x0;
      if (_Str != (wchar_t *)0x0) goto LAB_1441fbfc2;
      local_a0 = (code ****)0x0;
      local_98 = 0;
    }
    if ((local_188 != (code ***)0x0) && (((ulonglong)*local_188 & 0x200) == 0)) {
      FUN_140126aca(local_188,local_a0);
    }
    if (local_a8 != (code ****)0x0) {
      FUN_1400020a8();
    }
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0278);
    local_88 = DAT_14cbd0270;
    FUN_1448075d0(&local_128);
    if (*param_3 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(*param_3,&local_128,&local_188,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    pppppcVar29 = pppppcStack_180;
    if (pppppcStack_180 != (code *****)0x0) {
      LOCK();
      pppppcVar1 = pppppcStack_180 + 1;
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 == 0) {
        (*(code *)**pppppcStack_180)(pppppcStack_180);
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppcVar29)[2])(pppppcVar29);
        }
      }
    }
  }
  lVar12 = local_208;
  local_1d8 = 0;
  plStack_1d0 = (longlong *)0x0;
  FUN_14009b010(&local_1d8,1,0);
  lVar14 = FUN_1405c673d();
  if ((int)(uint)*(byte *)(lVar12 + 0x710) < *(int *)(lVar14 + 0x30)) {
    plVar21 = (longlong *)
              ((ulonglong)*(byte *)(lVar12 + 0x710) * 0x170 + *(longlong *)(lVar14 + 0x28));
  }
  else {
    plVar21 = (longlong *)(lVar14 + 0x38);
  }
  local_128 = (code ***)*plVar21;
  if (local_1d8 != 0) {
    FUN_1401269d0(local_1d8,&local_128);
  }
  pppppcStack_180 = (code *****)CONCAT44(pppppcStack_180._4_4_,DAT_14cbd03f8);
  local_188 = DAT_14cbd03f0;
  FUN_1448075d0(&local_128);
  if (*param_3 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(*param_3,&local_128,&local_1d8,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  cVar9 = *(char *)(local_208 + 0xdc8);
  pppppcStack_180 = (code *****)CONCAT44(pppppcStack_180._4_4_,DAT_14cbd0410);
  local_188 = DAT_14cbd0408;
  FUN_1448075d0(&local_128,&local_188);
  pbVar5 = (byte *)*param_3;
  if ((pbVar5 != (byte *)0x0) && ((~*pbVar5 & 3) == 0)) {
    lVar12 = *(longlong *)(pbVar5 + 8);
    pppppcStack_180 = (code *****)&local_138;
    local_138 = (code *****)CONCAT44(local_138._4_4_,1);
    local_188 = (code ***)&local_128;
    FUN_14049fede(lVar12 + 0x18,&local_88,&local_188,0);
    lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x28 + (longlong)(int)local_88 * 0x40);
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 1) & 2) == 0)) {
      pcVar25 = "false";
      if (cVar9 != '\0') {
        pcVar25 = "true";
      }
      FUN_140126aca(lVar12,pcVar25);
    }
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(local_208 + 0xdb0)) {
    local_188 = (code ***)0x0;
    pppppcStack_180 = (code *****)0x0;
    FUN_14009b010(&local_188,1,0);
    if (local_188 != (code ***)0x0) {
      FUN_1404a8912(local_188,*(undefined4 *)(local_208 + 0xdb0));
    }
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0458);
    local_88 = DAT_14cbd0450;
    FUN_1448075d0(&local_128);
    if (*param_3 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(*param_3,&local_128,&local_188,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    pppppcVar29 = pppppcStack_180;
    if (pppppcStack_180 != (code *****)0x0) {
      LOCK();
      pppppcVar1 = pppppcStack_180 + 1;
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 == 0) {
        (*(code *)**pppppcStack_180)(pppppcStack_180);
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppcVar29)[2])(pppppcVar29);
        }
      }
    }
  }
  if (0 < *(int *)(local_208 + 0xdb4)) {
    local_188 = (code ***)0x0;
    pppppcStack_180 = (code *****)0x0;
    FUN_14009b010(&local_188,1,0);
    if (local_188 != (code ***)0x0) {
      FUN_1404a8912(local_188,*(undefined4 *)(local_208 + 0xdb4));
    }
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0440);
    local_88 = DAT_14cbd0438;
    FUN_1448075d0(&local_128);
    if (*param_3 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(*param_3,&local_128,&local_188,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    pppppcVar29 = pppppcStack_180;
    if (pppppcStack_180 != (code *****)0x0) {
      LOCK();
      pppppcVar1 = pppppcStack_180 + 1;
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 == 0) {
        (*(code *)**pppppcStack_180)(pppppcStack_180);
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppcVar29)[2])(pppppcVar29);
        }
      }
    }
  }
  if (0 < *(int *)(local_208 + 0xdcc)) {
    local_188 = (code ***)0x0;
    pppppcStack_180 = (code *****)0x0;
    FUN_14009b010(&local_188,1,0);
    if (local_188 != (code ***)0x0) {
      FUN_1404a8912(local_188,*(undefined4 *)(local_208 + 0xdcc));
    }
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0470);
    local_88 = DAT_14cbd0468;
    FUN_1448075d0(&local_128);
    if (*param_3 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(*param_3,&local_128,&local_188,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    pppppcVar29 = pppppcStack_180;
    if (pppppcStack_180 != (code *****)0x0) {
      LOCK();
      pppppcVar1 = pppppcStack_180 + 1;
      *(int *)pppppcVar1 = *(int *)pppppcVar1 + -1;
      UNLOCK();
      if (*(int *)pppppcVar1 == 0) {
        (*(code *)**pppppcStack_180)(pppppcStack_180);
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppcVar29)[2])(pppppcVar29);
        }
      }
    }
  }
  FUN_14123b3a4(local_208,param_2,param_3,0);
  local_148 = 0;
  plStack_140 = (longlong *)0x0;
  FUN_14009b010(&local_148,3,0);
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar11 = 0xffffffff;
    LOCK();
    bVar39 = DAT_14c7585d0 != 0xffffffff;
    DVar8 = dwTlsIndex;
    if (bVar39) {
      DVar11 = DAT_14c7585d0;
      DVar8 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar8;
    UNLOCK();
    param_2 = local_200;
    if (bVar39) {
      TlsFree(dwTlsIndex);
      param_2 = local_200;
      dwTlsIndex = DVar11;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_128);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_188 = (code ***)((longlong)lpTlsValue + 0x10);
  pppppcStack_180 = *(code ******)((longlong)lpTlsValue + 0x10);
  local_178 = *(code ***)((longlong)lpTlsValue + 0x20);
  local_170 = '\0';
  local_168 = *(code ***)((longlong)lpTlsValue + 0x28);
  *(code *****)((longlong)lpTlsValue + 0x28) = &local_188;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  lVar12 = FUN_14011c349();
  FUN_14123abf2(local_208,param_2,&local_148,1);
  local_158 = (code ****)0x0;
  plStack_150 = (longlong *)0x0;
  FUN_14009b010(&local_158,3,0);
  local_1f0 = (code ***)&DAT_14c9a1288;
  if ((local_158 != (code ****)0x0) && (((ulonglong)*local_158 & 2) != 0)) {
    local_1f0 = local_158[1] + 3;
  }
  local_198 = 0;
  plStack_190 = (longlong *)0x0;
  uVar37 = 0;
  FUN_14009b010(&local_198,3,0);
  if ((*(char *)(local_208 + 0x178) == '\x03') ||
     (*(char *)(local_208 + 0x9e5) != *(char *)(local_208 + 0x9e4))) {
    local_108 = (uint *)0x0;
    local_100 = 0;
    local_128 = (code ***)0x0;
    plStack_120 = (longlong *)0x0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_140e308fe(local_208 + 0x8a0);
    local_1e0 = lVar12;
    if (local_100 == 0) {
      uVar34 = 1;
      iVar27 = 0;
      uVar10 = 0;
    }
    else {
      puVar15 = local_108;
      if (local_108 == (uint *)0x0) {
        puVar15 = local_118;
      }
      uVar10 = *puVar15;
      if (uVar10 == 0) {
        iVar27 = local_100 + 0x1e;
        if (-1 < (int)(local_100 - 1)) {
          iVar27 = local_100 - 1;
        }
        uVar37 = 0;
        uVar34 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar34 = uVar37;
        }
        iVar27 = 0;
        do {
          if (uVar34 == uVar37) goto LAB_1441fc954;
          iVar27 = iVar27 + 0x20;
          uVar10 = puVar15[uVar37 + 1];
          uVar37 = uVar37 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar37 = 0;
        iVar27 = 0;
      }
      uVar34 = (ulonglong)(-uVar10 & uVar10);
      uVar3 = uVar34 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar10 = (iVar27 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)local_100 <= (int)uVar10) {
        uVar10 = local_100;
      }
    }
    if (uVar10 != local_100) {
      uVar35 = 0xffffffff;
      local_1e8 = (ulonglong)local_100;
      do {
        pppcVar16 = local_128;
        local_1a8 = 0;
        plStack_1a0 = (longlong *)0x0;
        FUN_14009b010(&local_1a8,2,0);
        local_1c0[1] = 0;
        plStack_1b0 = (longlong *)0x0;
        FUN_14009b010(local_1c0 + 1,3,0);
        cVar9 = FUN_1441fe5fe(local_1c0 + 1,pppcVar16 + (longlong)(int)uVar10 * 0x22 + 1);
        if ((cVar9 != '\0') && (local_1a8 != 0)) {
          local_258 = local_258 & 0xffffff00;
          FUN_140141db6(local_1a8,local_1c0 + 1,0,0);
        }
        local_88 = (code ****)0x0;
        plStack_80 = (longlong *)0x0;
        local_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_138 = (code *****)0x14b995fa4;
        plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,4);
        FUN_14097ba34(&local_88,&local_138,*(int *)(pppcVar16 + (longlong)(int)uVar10 * 0x22) + 1);
        plStack_130 = &local_1a8;
        local_138 = &local_88;
        FUN_140744482(local_1f0,local_15c,&local_138,0);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        plVar21 = plStack_1b0;
        if (plStack_1b0 != (longlong *)0x0) {
          LOCK();
          plVar23 = plStack_1b0 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plStack_1b0)(plStack_1b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        plVar21 = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          plVar23 = plStack_1a0 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*plStack_1a0)(plStack_1a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        uVar35 = uVar35 & ~(uint)uVar34;
        puVar15 = local_108;
        if (local_108 == (uint *)0x0) {
          puVar15 = local_118;
        }
        iVar36 = (int)uVar37;
        lVar12 = (longlong)iVar36;
        uVar10 = puVar15[lVar12] & uVar35;
        if (uVar10 == 0) {
          iVar19 = local_100 + 0x1e;
          if (-1 < (int)(local_100 - 1)) {
            iVar19 = local_100 - 1;
          }
          iVar19 = iVar19 >> 5;
          iVar27 = iVar27 + 0x20;
          iVar20 = iVar19;
          if (iVar19 < iVar36) {
            iVar20 = iVar36;
          }
          if (iVar36 < iVar19) {
            lVar14 = 0;
            do {
              uVar10 = puVar15[lVar12 + lVar14 + 1];
              if (uVar10 != 0) {
                uVar37 = (ulonglong)(iVar36 + (int)lVar14 + 1);
                uVar35 = 0xffffffff;
                goto LAB_1441fced1;
              }
              iVar27 = iVar27 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar20 - lVar12 != lVar14);
            uVar35 = 0xffffffff;
            iVar36 = iVar20;
          }
          uVar37 = (ulonglong)(iVar36 + 1);
          uVar10 = local_100;
        }
        else {
LAB_1441fced1:
          uVar34 = (ulonglong)(-uVar10 & uVar10);
          uVar3 = uVar34 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar10 = (iVar27 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)local_100 <= (int)uVar10) {
            uVar10 = local_100;
          }
        }
      } while (uVar10 != (uint)local_1e8);
    }
LAB_1441fc954:
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_140e3131e(&local_128,0);
    lVar12 = local_1e0;
    if (local_108 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != (code ***)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd02f0);
    local_88 = DAT_14cbd02e8;
    FUN_1448075d0(&local_128);
    pbVar5 = (byte *)*param_2;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar21 = &DAT_14c9a1288;
      }
      else {
        plVar21 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar21[2] != *(int *)((longlong)plVar21 + 0x3c)) {
        plVar23 = plVar21 + 8;
        if ((longlong *)plVar21[9] != (longlong *)0x0) {
          plVar23 = (longlong *)plVar21[9];
        }
        iVar27 = *(int *)((longlong)plVar23 +
                         (ulonglong)((int)plVar21[10] - 1U & (uint)local_128) * 4);
        if (iVar27 != -1) {
          do {
            lVar14 = *plVar21 + (longlong)iVar27 * 0x40;
            if (*(uint *)(*plVar21 + (longlong)iVar27 * 0x40) == (uint)local_128) {
              if ((((lVar14 != 0) &&
                   (puVar22 = (undefined8 *)(lVar14 + 0x28), puVar22 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar22 != (byte *)0x0)) && ((*(byte *)*puVar22 & 0x40) == 0))
              goto LAB_1441fdadd;
              break;
            }
            iVar27 = *(int *)(lVar14 + 0x38);
          } while (iVar27 != -1);
        }
      }
    }
    puVar22 = &DAT_14c9a1308;
LAB_1441fdadd:
    pbVar5 = (byte *)*puVar22;
    plVar21 = (longlong *)puVar22[1];
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 0x6b) == 3)) {
      plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd03b0);
      local_88 = DAT_14cbd03a8;
      FUN_1448075d0(&local_128);
      if ((*pbVar5 & 2) == 0) {
        plVar23 = &DAT_14c9a1288;
      }
      else {
        plVar23 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar23[2] != *(int *)((longlong)plVar23 + 0x3c)) {
        plVar24 = plVar23 + 8;
        if ((longlong *)plVar23[9] != (longlong *)0x0) {
          plVar24 = (longlong *)plVar23[9];
        }
        iVar27 = *(int *)((longlong)plVar24 +
                         (ulonglong)((int)plVar23[10] - 1U & (uint)local_128) * 4);
        if (iVar27 != -1) {
          do {
            lVar14 = *plVar23 + (longlong)iVar27 * 0x40;
            if (*(uint *)(*plVar23 + (longlong)iVar27 * 0x40) == (uint)local_128) {
              if (((lVar14 != 0) &&
                  (puVar22 = (undefined8 *)(lVar14 + 0x28), puVar22 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar22 != (byte *)0x0 && ((*(byte *)*puVar22 & 0x40) == 0))))
              goto LAB_1441fdbcc;
              break;
            }
            iVar27 = *(int *)(lVar14 + 0x38);
          } while (iVar27 != -1);
        }
      }
      puVar22 = &DAT_14c9a1308;
LAB_1441fdbcc:
      pbVar5 = (byte *)*puVar22;
      plVar23 = (longlong *)puVar22[1];
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 0x6b) == 3)) {
        plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd03c8);
        local_88 = DAT_14cbd03c0;
        FUN_1448075d0(&local_128);
        if ((*pbVar5 & 2) == 0) {
          plVar24 = &DAT_14c9a1288;
        }
        else {
          plVar24 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
        }
        if ((int)plVar24[2] != *(int *)((longlong)plVar24 + 0x3c)) {
          plVar33 = plVar24 + 8;
          if ((longlong *)plVar24[9] != (longlong *)0x0) {
            plVar33 = (longlong *)plVar24[9];
          }
          iVar27 = *(int *)((longlong)plVar33 +
                           (ulonglong)((int)plVar24[10] - 1U & (uint)local_128) * 4);
          if (iVar27 != -1) {
            do {
              lVar14 = *plVar24 + (longlong)iVar27 * 0x40;
              if (*(uint *)(*plVar24 + (longlong)iVar27 * 0x40) == (uint)local_128) {
                if ((((lVar14 != 0) &&
                     (puVar22 = (undefined8 *)(lVar14 + 0x28), puVar22 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar22 != (byte *)0x0)) && ((*(byte *)*puVar22 & 0x40) == 0))
                goto LAB_1441fdd79;
                break;
              }
              iVar27 = *(int *)(lVar14 + 0x38);
            } while (iVar27 != -1);
          }
        }
        puVar22 = &DAT_14c9a1308;
LAB_1441fdd79:
        if ((byte *)*puVar22 == (byte *)0x0) {
          bVar39 = false;
        }
        else {
          bVar39 = (*(byte *)*puVar22 & 0x6b) == 3;
        }
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        if (bVar39) {
          plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd03c8);
          local_88 = DAT_14cbd03c0;
          FUN_1448075d0(&local_128);
          if ((*pbVar5 & 2) == 0) {
            plVar24 = &DAT_14c9a1288;
          }
          else {
            plVar24 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
          }
          if ((int)plVar24[2] != *(int *)((longlong)plVar24 + 0x3c)) {
            plVar33 = plVar24 + 8;
            if ((longlong *)plVar24[9] != (longlong *)0x0) {
              plVar33 = (longlong *)plVar24[9];
            }
            iVar27 = *(int *)((longlong)plVar33 +
                             (ulonglong)((int)plVar24[10] - 1U & (uint)local_128) * 4);
            if (iVar27 != -1) {
              do {
                lVar14 = *plVar24 + (longlong)iVar27 * 0x40;
                if (*(uint *)(*plVar24 + (longlong)iVar27 * 0x40) == (uint)local_128) {
                  if (((lVar14 != 0) &&
                      (puVar22 = (undefined8 *)(lVar14 + 0x28), puVar22 != (undefined8 *)0x0)) &&
                     (((byte *)*puVar22 != (byte *)0x0 && ((*(byte *)*puVar22 & 0x40) == 0))))
                  goto LAB_1441fde6a;
                  break;
                }
                iVar27 = *(int *)(lVar14 + 0x38);
              } while (iVar27 != -1);
            }
          }
          puVar22 = &DAT_14c9a1308;
LAB_1441fde6a:
          local_258 = local_258 & 0xffffff00;
          FUN_1401412e0(puVar22,&local_88,1,0);
          plVar24 = plStack_150;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_158 = local_88;
          plStack_150 = plStack_80;
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            plVar33 = plVar24 + 1;
            *(int *)plVar33 = (int)*plVar33 + -1;
            UNLOCK();
            if ((int)*plVar33 == 0) {
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
          plVar24 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar33 = plStack_80 + 1;
            *(int *)plVar33 = (int)*plVar33 + -1;
            UNLOCK();
            if ((int)*plVar33 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar24 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
          if (local_110 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar23 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar2 = (int *)((longlong)plVar23 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar23 = plVar21 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
  }
  plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd03c8);
  local_88 = DAT_14cbd03c0;
  FUN_1448075d0(&local_128);
  if (local_198 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(local_198,&local_128,&local_158,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd03b0);
  local_88 = DAT_14cbd03a8;
  FUN_1448075d0(&local_128);
  if (local_148 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(local_148,&local_128,&local_198,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  plVar21 = plStack_190;
  if (plStack_190 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_190 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plStack_190)(plStack_190);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  plVar21 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_150 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  local_88 = (code ****)0x0;
  plStack_80 = (longlong *)0x0;
  FUN_14009b010(&local_88,2,0);
  lVar14 = *(longlong *)(lVar12 + 0x28);
  if (lVar14 == 0) {
    uVar17 = FUN_145d8612a();
    lVar14 = FUN_14477b664(uVar17);
    *(longlong *)(lVar12 + 0x28) = lVar14;
  }
  lVar18 = *(longlong *)(lVar12 + 0x30);
  if (lVar18 == 0) {
    if ((lVar14 != 0) && (*(longlong *)(lVar12 + 0x20) != 0)) {
      plVar21 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar21 == (longlong *)0x0) ||
         (cVar9 = (**(code **)(*plVar21 + 0x108))(plVar21), cVar9 == '\0')) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      else {
        uVar17 = (**(code **)(*plVar21 + 0x110))(plVar21);
        lVar18 = FUN_144aff482(uVar17,(longlong *)(lVar12 + 0x20));
        *(longlong *)(lVar12 + 0x30) = lVar18;
        if (lVar18 != 0) goto LAB_1441fcafd;
      }
    }
  }
  else {
LAB_1441fcafd:
    if ((longlong)*(int *)(lVar18 + 0x20) != 0) {
      lVar14 = *(longlong *)(lVar18 + 0x18);
      lVar38 = (longlong)*(int *)(lVar18 + 0x20) * 0x38 + lVar14;
      lVar12 = local_208 + 0xcf0;
      iVar27 = 0;
      lVar18 = local_208;
      do {
        uVar10 = *(uint *)(lVar14 + 8);
        if (uVar10 != 0) {
          iVar36 = *(int *)(lVar14 + 0xc);
          uVar35 = 0;
          do {
            uVar28 = iVar27 + uVar35;
            if ((-1 < (int)uVar28) && ((int)uVar28 < *(int *)(lVar18 + 0xd08))) {
              lVar26 = *(longlong *)(lVar18 + 0xd00);
              if (*(longlong *)(lVar18 + 0xd00) == 0) {
                lVar26 = lVar12;
              }
              if (uVar35 < uVar10 - iVar36 ==
                  ((*(uint *)(lVar26 + (ulonglong)(uVar28 >> 5) * 4) >> (uVar28 & 0x1f) & 1) != 0))
              {
                local_128 = (code ***)0x0;
                plStack_120 = (longlong *)0x0;
                FUN_14009b010(&local_128,1,0);
                if (local_128 != (code ***)0x0) {
                  FUN_1404a8912(local_128,uVar28);
                }
                if (local_88 != (code ****)0x0) {
                  local_258 = local_258 & 0xffffff00;
                  FUN_140141db6(local_88,&local_128,0,0);
                }
                plVar21 = plStack_120;
                if (plStack_120 != (longlong *)0x0) {
                  LOCK();
                  plVar23 = plStack_120 + 1;
                  *(int *)plVar23 = (int)*plVar23 + -1;
                  UNLOCK();
                  if ((int)*plVar23 == 0) {
                    (**(code **)*plStack_120)(plStack_120);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar21 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar21 + 0x10))(plVar21);
                    }
                  }
                }
                uVar10 = *(uint *)(lVar14 + 8);
                lVar18 = local_208;
              }
            }
            uVar35 = uVar35 + 1;
          } while (uVar35 < uVar10);
          iVar27 = iVar27 + uVar35;
        }
        lVar14 = lVar14 + 0x38;
      } while (lVar14 != lVar38);
    }
  }
  plVar21 = local_1f8;
  puVar22 = local_200;
  pppcVar16 = (code ***)&DAT_14c9a1270;
  if ((local_88 != (code ****)0x0) && (((ulonglong)*local_88 & 2) != 0)) {
    pppcVar16 = local_88[1];
  }
  if (0 < *(int *)(pppcVar16 + 2)) {
    plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,DAT_14cbd0398);
    local_138 = (code *****)DAT_14cbd0390;
    FUN_1448075d0(&local_128);
    if (local_148 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(local_148,&local_128,&local_88,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
  local_138 = (code *****)0x0;
  plStack_130 = (longlong *)0x0;
  FUN_14009b010(&local_138,1,0);
  if (*(uint *)(local_208 + 0xce4) == 0) {
    iVar27 = *(int *)(local_208 + 0xce0);
  }
  else {
    iVar27 = (*(uint *)(local_208 + 0xce4) & 0xff) - 1;
  }
  if (local_138 != (code *****)0x0) {
    FUN_1404a8912(local_138,iVar27);
  }
  plStack_150 = (longlong *)CONCAT44(plStack_150._4_4_,DAT_14cbd03e0);
  local_158 = DAT_14cbd03d8;
  FUN_1448075d0(&local_128);
  if (local_148 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(local_148,&local_128,&local_138,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  plStack_150 = (longlong *)CONCAT44(plStack_150._4_4_,DAT_14cbd02f0);
  local_158 = DAT_14cbd02e8;
  FUN_1448075d0(&local_128);
  if (*plVar21 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(*plVar21,&local_128,&local_148,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  plVar23 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar24 = plStack_130 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  plVar23 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar24 = plStack_80 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  if (local_170 == '\0') {
    local_170 = '\x01';
    *(int *)(local_188 + 4) = *(int *)(local_188 + 4) + -1;
    if (local_178 != local_188[2]) {
      FUN_14004673c();
    }
    *local_188 = (code **)pppppcStack_180;
    local_188[3] = local_168;
  }
  plVar23 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar24 = plStack_140 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  lVar12 = local_208;
  FUN_1418772c6(local_208 + 0xd28,puVar22,plVar21);
  local_188 = (code ***)0x0;
  pppppcStack_180 = (code *****)0x0;
  FUN_14009b010(&local_188,1,0);
  if (local_188 != (code ***)0x0) {
    FUN_140bc3dfa(local_188,*(undefined8 *)(lVar12 + 0xf20));
  }
  plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd04e8);
  local_88 = DAT_14cbd04e0;
  FUN_1448075d0(&local_128);
  if (*plVar21 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(*plVar21,&local_128,&local_188,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  pppppcVar29 = pppppcStack_180;
  if (pppppcStack_180 != (code *****)0x0) {
    LOCK();
    plVar21 = (longlong *)(pppppcStack_180 + 1);
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (*(code *)**pppppcStack_180)(pppppcStack_180);
      LOCK();
      piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)((longlong)*pppppcVar29 + 0x10))(pppppcVar29);
      }
    }
  }
  local_188 = (code ***)0x0;
  pppppcStack_180 = (code *****)0x0;
  FUN_14009b010(&local_188,2,0);
  if ((longlong)*(int *)(local_208 + 0x1308) != 0) {
    pppcVar16 = *(code ****)(local_208 + 0x1300);
    local_1f0 = pppcVar16 + (longlong)*(int *)(local_208 + 0x1308) * 3;
    do {
      local_88 = (code ****)0x0;
      plStack_80 = (longlong *)0x0;
      FUN_14009b010(&local_88,3,0);
      local_138 = (code *****)0x0;
      plStack_130 = (longlong *)0x0;
      FUN_14009b010(&local_138,1);
      FUN_1401269d0(local_138,pppcVar16);
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      FUN_14009b010(&local_148,2);
      local_158 = (code ****)0x0;
      plStack_150 = (longlong *)0x0;
      FUN_143d88016(pppcVar16 + 1,&local_158);
      ppppcVar7 = local_158;
      lVar12 = (longlong)(int)plStack_150;
      if (lVar12 != 0) {
        lVar14 = 0;
        do {
          local_128 = (code ***)0x0;
          plStack_120 = (longlong *)0x0;
          FUN_14009b010(&local_128,1,0);
          FUN_1406114f4(local_128,*(undefined4 *)((longlong)ppppcVar7 + lVar14));
          if (local_148 != 0) {
            local_258 = local_258 & 0xffffff00;
            FUN_140141db6(local_148,&local_128,0,0);
          }
          plVar21 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar23 = plStack_120 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar2 = (int *)((longlong)plVar21 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          lVar14 = lVar14 + 4;
        } while (lVar12 * 4 != lVar14);
      }
      plStack_190 = (longlong *)CONCAT44(plStack_190._4_4_,DAT_14cbd0638);
      local_198 = DAT_14cbd0630;
      FUN_1448075d0(&local_128,&local_198);
      if (local_88 != (code ****)0x0) {
        local_258 = local_258 & 0xffffff00;
        FUN_14014191c(local_88,&local_128);
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      plStack_190 = (longlong *)CONCAT44(plStack_190._4_4_,DAT_14cbd0650);
      local_198 = DAT_14cbd0648;
      FUN_1448075d0(&local_128,&local_198);
      if (local_88 != (code ****)0x0) {
        local_258 = local_258 & 0xffffff00;
        FUN_14014191c(local_88,&local_128);
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (local_188 != (code ***)0x0) {
        local_258 = local_258 & 0xffffff00;
        FUN_140141db6(local_188,&local_88,0,0);
      }
      if (local_158 != (code ****)0x0) {
        FUN_1400020a8();
      }
      plVar21 = plStack_140;
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        plVar23 = plStack_140 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plStack_140)(plStack_140);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      plVar21 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar23 = plStack_130 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      plVar21 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar23 = plStack_80 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      pppcVar16 = pppcVar16 + 3;
    } while (pppcVar16 != local_1f0);
  }
  plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd0620);
  local_88 = DAT_14cbd0618;
  FUN_1448075d0(&local_128);
  plVar21 = local_1f8;
  if (*local_1f8 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(*local_1f8,&local_128,&local_188,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  pppppcVar29 = pppppcStack_180;
  if (pppppcStack_180 != (code *****)0x0) {
    LOCK();
    plVar23 = (longlong *)(pppppcStack_180 + 1);
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (*(code *)**pppppcStack_180)(pppppcStack_180);
      LOCK();
      piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)((longlong)*pppppcVar29 + 0x10))(pppppcVar29);
      }
    }
  }
  lVar12 = local_208;
  FUN_1412e157a(local_208 + 0xd50,plVar21);
  fVar40 = (float)FUN_140ebe5be(lVar12);
  puVar22 = local_200;
  if (0.0 < fVar40) {
    local_188 = (code ***)0x0;
    pppppcStack_180 = (code *****)0x0;
    FUN_14009b010(&local_188,1,0);
    if (local_188 != (code ***)0x0) {
      FUN_1406111c2(local_188,fVar40);
    }
    plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14cbd04a0);
    local_88 = DAT_14cbd0498;
    FUN_1448075d0(&local_128);
    if (*plVar21 != 0) {
      local_258 = local_258 & 0xffffff00;
      FUN_14014191c(*plVar21,&local_128,&local_188,0);
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    pppppcVar29 = pppppcStack_180;
    if (pppppcStack_180 != (code *****)0x0) {
      LOCK();
      plVar23 = (longlong *)(pppppcStack_180 + 1);
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (*(code *)**pppppcStack_180)(pppppcStack_180);
        LOCK();
        piVar2 = (int *)((longlong)pppppcVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*pppppcVar29 + 0x10))(pppppcVar29);
        }
      }
    }
  }
  local_88 = (code ****)0x0;
  plStack_80 = (longlong *)0x0;
  FUN_14009b010(&local_88,1,0);
  FUN_140212f8e(&local_188);
  pppcVar16 = local_188;
  local_240 = (ulonglong)local_240._4_4_ << 0x20;
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  FUN_14021300e(&local_128,0x7b2,1,1);
  if (local_88 != (code ****)0x0) {
    FUN_14061dc9e(local_88,((longlong)pppcVar16 - (longlong)local_128) / 10000000);
  }
  pppppcStack_180 = (code *****)CONCAT44(pppppcStack_180._4_4_,DAT_14cbd04b8);
  local_188 = DAT_14cbd04b0;
  FUN_1448075d0(&local_128);
  if (*plVar21 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(*plVar21,&local_128,&local_88,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  local_138 = (code *****)0x0;
  plStack_130 = (longlong *)0x0;
  FUN_14009b010(&local_138,1,0);
  pppppcStack_180 = (code *****)CONCAT44(pppppcStack_180._4_4_,DAT_14cbd04d0);
  local_188 = DAT_14cbd04c8;
  FUN_1448075d0(&local_128);
  if (*plVar21 != 0) {
    local_258 = local_258 & 0xffffff00;
    FUN_14014191c(*plVar21,&local_128,&local_138,0);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  plVar23 = *(longlong **)(local_208 + 0x168);
  if (plVar23 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_128 = (code ***)FUN_141030f22;
      local_210 = FUN_14081d0ea;
      local_218 = &LAB_1459f2e4c;
      local_228 = &LAB_148c39de3;
      local_230 = &LAB_1457a9eb2;
      local_238 = &DAT_149e063b2;
      local_240 = 0;
      local_248 = 0x10000004;
      local_250 = 0x10;
      local_258 = 0x3de0;
      local_220 = (code ***)&local_128;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar23[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar23[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      (**(code **)(*plVar23 + 0x10a8))(plVar23,puVar22,plVar21);
    }
  }
  if (*(longlong *)(local_208 + 0xf78) != 0) {
    FUN_14434b87c(*(longlong *)(local_208 + 0xf78),puVar22,plVar21);
  }
  if (*(char *)(local_208 + 0x6b0) == '\x01') {
    pppppcStack_180 = (code *****)CONCAT44(pppppcStack_180._4_4_,DAT_14cbe7070);
    local_188 = DAT_14cbe7068;
    FUN_1448075d0(&local_128);
    pbVar5 = (byte *)*plVar21;
    if ((pbVar5 != (byte *)0x0) && ((~*pbVar5 & 3) == 0)) {
      lVar12 = *(longlong *)(pbVar5 + 8);
      local_158 = (code ****)CONCAT44(local_158._4_4_,1);
      pppppcStack_180 = &local_158;
      local_188 = (code ***)&local_128;
      FUN_14049fede(lVar12 + 0x18,&local_148,&local_188,0);
      lVar12 = *(longlong *)((longlong)(int)local_148 * 0x40 + *(longlong *)(lVar12 + 0x18) + 0x28);
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 1) & 2) == 0)) {
        FUN_140126aca(lVar12,&DAT_149dfbe6e);
      }
    }
  }
  else {
    pbVar5 = (byte *)*plVar21;
    puVar22 = &DAT_14c9a1288;
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
      puVar22 = (undefined8 *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    pppppcStack_180 = (code *****)CONCAT44(pppppcStack_180._4_4_,DAT_14cbe7070);
    local_188 = DAT_14cbe7068;
    FUN_1448075d0(&local_128);
    FUN_14045886c(puVar22,&local_128);
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  plVar21 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_130 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  plVar21 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_80 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  plVar21 = plStack_1d0;
  if (plStack_1d0 != (longlong *)0x0) {
    LOCK();
    plVar23 = plStack_1d0 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plStack_1d0)(plStack_1d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  uVar17 = 1;
LAB_1441fda7f:
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 1441fe11a FUN_1441fe11a body=572 status=ok
// SIG undefined FUN_1441fe11a(void)

int FUN_1441fe11a(undefined8 *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  uint local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = DAT_14cbd02f0;
  local_68 = DAT_14cbd02e8;
  FUN_1448075d0(local_40);
  pbVar1 = (byte *)*param_1;
  puVar7 = &DAT_14c9a1308;
  puVar8 = &DAT_14c9a1308;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    puVar8 = &DAT_14c9a1308;
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar2 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_40[0]) * 4);
      puVar8 = &DAT_14c9a1308;
      if (iVar2 != -1) {
        do {
          lVar3 = *plVar4 + (longlong)iVar2 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar2 * 0x40) == local_40[0]) {
            puVar8 = &DAT_14c9a1308;
            if (lVar3 == 0) goto LAB_1441fe1fa;
            puVar5 = (undefined8 *)(lVar3 + 0x28);
            puVar8 = &DAT_14c9a1308;
            if ((puVar5 == (undefined8 *)0x0) ||
               (((byte *)*puVar5 != (byte *)0x0 && (puVar8 = puVar5, (*(byte *)*puVar5 & 0x40) == 0)
                ))) goto LAB_1441fe1fa;
            break;
          }
          iVar2 = *(int *)(lVar3 + 0x38);
        } while (iVar2 != -1);
        puVar8 = &DAT_14c9a1308;
      }
    }
  }
LAB_1441fe1fa:
  local_70 = DAT_14cbd0308;
  local_78 = DAT_14cbd0300;
  FUN_1448075d0(&local_68);
  pbVar1 = (byte *)*puVar8;
  plVar4 = &DAT_14c9a1308;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    plVar4 = &DAT_14c9a1308;
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar4 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar6[9];
      }
      iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar6[10] - 1U & (uint)local_68) * 4);
      plVar4 = &DAT_14c9a1308;
      if (iVar2 != -1) {
        do {
          lVar3 = *plVar6 + (longlong)iVar2 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar2 * 0x40) == (uint)local_68) {
            plVar4 = &DAT_14c9a1308;
            if (lVar3 == 0) goto LAB_1441fe2b5;
            plVar6 = (longlong *)(lVar3 + 0x28);
            plVar4 = &DAT_14c9a1308;
            if ((plVar6 == (longlong *)0x0) ||
               (((byte *)*plVar6 != (byte *)0x0 && (plVar4 = plVar6, (*(byte *)*plVar6 & 0x40) == 0)
                ))) goto LAB_1441fe2b5;
            break;
          }
          iVar2 = *(int *)(lVar3 + 0x38);
        } while (iVar2 != -1);
        plVar4 = &DAT_14c9a1308;
      }
    }
  }
LAB_1441fe2b5:
  lVar3 = FUN_14011c349();
  local_78 = *(undefined8 *)(lVar3 + 0x60);
  if (*plVar4 != 0) {
    puVar7 = (undefined8 *)FUN_1446e60f4(*plVar4,&local_78);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  pbVar1 = (byte *)*puVar7;
  iVar2 = -1;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 3)) {
    iVar2 = *(int *)(*(longlong *)(pbVar1 + 8) + 0x28) - *(int *)(*(longlong *)(pbVar1 + 8) + 0x54);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441fe358 FUN_1441fe358 body=183 status=ok
// SIG undefined FUN_1441fe358(void)

void FUN_1441fe358(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  
  if ((param_2 == 0) && (param_2 = DAT_14cb79120, DAT_14cb79120 == 0)) {
    if (DAT_14cb758b8 == 0) {
      param_2 = 0;
      DAT_14cb79120 = param_2;
    }
    else {
      param_2 = FUN_144837462(DAT_14cb758b8,&DAT_14cb790d0);
      DAT_14cb79120 = param_2;
    }
  }
  iVar1 = -1;
  if ((longlong)*(int *)(param_1 + 0x6d0) != 0) {
    piVar3 = &DAT_14c9485f0;
    if (*(int **)(param_2 + 8) != (int *)0x0) {
      piVar3 = *(int **)(param_2 + 8);
    }
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x6c8) + 0x28 + uVar2) == *piVar3) {
        iVar1 = (int)(uVar2 >> 5) * -0x55555555;
        break;
      }
      uVar2 = uVar2 + 0x60;
    } while ((longlong)*(int *)(param_1 + 0x6d0) * 0x60 != uVar2);
  }
  if ((param_2 != 0) && (iVar1 == -1)) {
    FUN_140d723fe(param_1);
    return;
  }
  return;
}



// FUNCTION 1441fe432 FUN_1441fe432 body=308 status=ok
// SIG undefined FUN_1441fe432(void)

void FUN_1441fe432(longlong param_1,longlong param_2,int param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  if (param_4 == '\0') {
    if (param_2 == 0) {
      return;
    }
    lVar6 = FUN_1409e484c(param_1,param_2);
    if (*(char *)(lVar6 + 0x50) == '\0') {
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (lVar6 == 0) {
    uVar4 = FUN_145d10d9a();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x50) = lVar6;
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(param_2 + 0x48) == 0)) goto LAB_1441fe4a1;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_2 + 0x58) = 0;
      goto LAB_1441fe4a1;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar4,(longlong *)(param_2 + 0x48));
    *(longlong *)(param_2 + 0x58) = lVar6;
    if (lVar6 == 0) goto LAB_1441fe4a1;
  }
  uVar4 = FUN_140d72879();
  iVar3 = FUN_140b0af60(uVar4,param_2);
  if (iVar3 <= param_3) {
    param_3 = iVar3;
  }
LAB_1441fe4a1:
  if ((0 < param_3) && (piVar5 = (int *)FUN_1409e484c(param_1,param_2), *piVar5 != param_3)) {
    uVar4 = FUN_140d72879();
    uVar4 = FUN_140d72a52(uVar4,param_2,param_3);
    FUN_140d72784(param_1,param_2,uVar4,param_3,2,1);
  }
  return;
}



// FUNCTION 1441fe566 FUN_1441fe566 body=128 status=ok
// SIG undefined FUN_1441fe566(void)

byte FUN_1441fe566(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((DAT_14cb8d3c0 != 0) && (lVar2 = FUN_1407d7c9c(DAT_14cb8d3c0,&DAT_14cbca838), lVar2 != 0))
      && (DAT_14cb8d3c0 != 0)) && (lVar3 = FUN_1409503e6(DAT_14cb8d3c0,lVar2), lVar3 != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x7e0))(param_1,lVar3 + 0x1c);
    bVar1 = (byte)param_1;
    if (lVar3 != 0) {
      bVar1 = FUN_14095026a(lVar3,lVar2);
    }
    return lVar3 != 0 & bVar1;
  }
  return 0;
}



// FUNCTION 1441fe5fe FUN_1441fe5fe body=975 status=ok
// SIG undefined FUN_1441fe5fe(void)

ulonglong FUN_1441fe5fe(longlong *param_1,longlong param_2)

{
  undefined1 **ppuVar1;
  int *piVar2;
  undefined1 **ppuVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 **unaff_RBX;
  undefined8 ****ppppuVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  undefined1 **ppuStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined1 *local_a8;
  longlong *plStack_a0;
  undefined1 local_94 [4];
  undefined1 local_90 [24];
  longlong local_78;
  undefined8 ***local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  FUN_140cd1ba8(param_2 + 8,&local_68,0);
  lVar10 = local_58;
  if (local_58 != 0) {
    pbVar8 = (byte *)*param_1;
    unaff_RBX = (undefined1 **)&DAT_14c9a1288;
    if ((pbVar8 != (byte *)0x0) && ((*pbVar8 & 2) != 0)) {
      unaff_RBX = (undefined1 **)(*(longlong *)(pbVar8 + 8) + 0x18);
    }
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    FUN_14009b010(&local_b8,1,0);
    ppppuVar11 = &local_68;
    if (0xf < local_50) {
      ppppuVar11 = (undefined8 ****)local_68;
    }
    if ((local_b8 != 0) && ((*(byte *)(local_b8 + 1) & 2) == 0)) {
      FUN_140126aca(local_b8,ppppuVar11);
    }
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cbd0320);
    local_a8 = DAT_14cbd0318;
    FUN_1448075d0(local_90,&local_a8);
    local_a8 = local_90;
    plStack_a0 = &local_b8;
    FUN_140744482(unaff_RBX,&local_c8,&local_a8,0);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    cVar5 = *(char *)(param_2 + 0xfc);
    if (cVar5 != '\0') {
      local_c8 = 0;
      ppuStack_c0 = (undefined1 **)0x0;
      FUN_14009b010(&local_c8,1,0);
      if (local_c8 != 0) {
        FUN_1406114f4(local_c8,cVar5);
      }
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cbd0338);
      local_a8 = DAT_14cbd0330;
      FUN_1448075d0(local_90,&local_a8);
      local_a8 = local_90;
      plStack_a0 = &local_c8;
      FUN_140744482(unaff_RBX,local_94,&local_a8,0);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      ppuVar3 = ppuStack_c0;
      if (ppuStack_c0 != (undefined1 **)0x0) {
        LOCK();
        ppuVar1 = ppuStack_c0 + 1;
        *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
        UNLOCK();
        if (*(int *)ppuVar1 == 0) {
          (**(code **)*ppuStack_c0)(ppuStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
          }
        }
      }
    }
    uVar6 = *(uint *)(param_2 + 0xe8);
    if (1 < uVar6) {
      local_c8 = 0;
      ppuStack_c0 = (undefined1 **)0x0;
      FUN_14009b010(&local_c8,1,0);
      if (local_c8 != 0) {
        FUN_1406114f4(local_c8,uVar6);
      }
      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,DAT_14cbd0368);
      local_a8 = DAT_14cbd0360;
      FUN_1448075d0(local_90,&local_a8);
      local_a8 = local_90;
      plStack_a0 = &local_c8;
      FUN_140744482(unaff_RBX,local_94,&local_a8,0);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      unaff_RBX = ppuStack_c0;
      if (ppuStack_c0 != (undefined1 **)0x0) {
        LOCK();
        ppuVar3 = ppuStack_c0 + 1;
        *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
        UNLOCK();
        if (*(int *)ppuVar3 == 0) {
          (**(code **)*ppuStack_c0)(ppuStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)unaff_RBX + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
          }
        }
      }
    }
    iVar7 = *(int *)(param_2 + 0xec);
    if (iVar7 != 0) {
      unaff_RBX = &local_a8;
      local_a8 = (undefined1 *)0x0;
      plStack_a0 = (longlong *)0x0;
      FUN_14009b010(unaff_RBX,1,0);
      if (local_a8 != (undefined1 *)0x0) {
        FUN_1406114f4(local_a8,iVar7);
      }
      ppuStack_c0 = (undefined1 **)CONCAT44(ppuStack_c0._4_4_,DAT_14cbd0350);
      local_c8 = DAT_14cbd0348;
      FUN_1448075d0(local_90);
      if (*param_1 != 0) {
        local_d8 = 0;
        FUN_14014191c(*param_1,local_90,&local_a8,0);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar9 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_a0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
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
    plVar9 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_b0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
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
  FUN_1401d9a90(&local_68);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar10 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441fe9ce FUN_1441fe9ce body=322 status=ok
// SIG undefined FUN_1441fe9ce(void)

undefined8 FUN_1441fe9ce(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_14088c018();
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xf70);
  if (*(uint *)(param_1 + 0xf70) == 0xffffffff) {
    if (*(longlong *)(param_1 + 0xf68) == 0) {
      uVar6 = 0xffffffff;
      goto LAB_1441fe9ff;
    }
    FUN_140212f8e(&local_48);
    uVar4 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_14021300e(&local_40,0x7b2,1,1);
    if (0x93a7f < (local_48 - local_40) / 10000000 -
                  (*(longlong *)(lVar3 + 0x78) + *(longlong *)(param_1 + 0xf68))) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0xf70);
      goto LAB_1441fe9ff;
    }
    iVar7 = -1;
  }
  else {
LAB_1441fe9ff:
    uVar4 = FUN_1447210f0(param_1);
    iVar1 = FUN_144349c64(lVar3,uVar4,uVar6);
    iVar7 = *(int *)(param_1 + 0xf70);
    uVar4 = CONCAT71((int7)(uVar6 >> 8),1);
    if (iVar1 == iVar7) {
      uVar4 = 0;
      goto LAB_1441fead6;
    }
  }
  uVar5 = FUN_1447210f0(param_1);
  uVar2 = FUN_144349c64(lVar3,uVar5,iVar7);
  *(undefined4 *)(param_1 + 0xf70) = uVar2;
LAB_1441fead6:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441feb12 FUN_1441feb12 body=3189 status=ok
// SIG undefined FUN_1441feb12(void)

void FUN_1441feb12(longlong param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  code **ppcVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong local_d8;
  uint local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  code *local_80 [2];
  code **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*(char *)(param_1 + 0x178) == '\x03') && (lVar9 = FUN_1447210f0(), lVar9 != 0)) &&
     (*(longlong *)(lVar9 + 0x1f0) != 0)) {
    lVar10 = FUN_1403ca142();
    lVar13 = *(longlong *)(lVar9 + 0x1f0);
    if ((((lVar13 != 0) && (lVar10 != 0)) &&
        ((lVar11 = *(longlong *)(lVar13 + 0x10), lVar11 != 0 &&
         ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar11 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
           lVar10 + 0x30)))))) && (lVar10 = *(longlong *)(param_1 + 0x168), lVar10 != 0)) {
      if (DAT_14cbadd90 == 0) {
        local_f0 = local_80;
        local_80[0] = FUN_141030f22;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_1459f2e4c;
        local_f8 = &LAB_148c39de3;
        local_100 = &LAB_1457a9eb2;
        local_108 = &DAT_149e063b2;
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar11 = FUN_14088c018();
        local_88 = FUN_140704886(lVar13);
        if (local_88 != 0) {
          uVar4 = FUN_144349c64(lVar11,lVar9,*(undefined4 *)(param_1 + 0xf70));
          *(undefined4 *)(param_1 + 0xf70) = uVar4;
          local_a0 = param_1 + 0xf30;
          FUN_14036924e(*(undefined8 *)(param_1 + 0xf30));
          *(undefined4 *)(param_1 + 0xf38) = 0;
          if (*(int *)(param_1 + 0xf3c) != 0) {
            FUN_1457048a4(local_a0);
          }
          local_70 = (code **)0x0;
          local_68 = 0x8000000000;
          if (*(int *)(lVar11 + 0x58) != 0) {
            local_d8 = param_1 + 0xf48;
            uVar18 = 0;
            local_98 = lVar11;
            local_90 = lVar10;
            lVar9 = local_d8;
            do {
              while( true ) {
                local_d0 = uVar18;
                lVar10 = FUN_14088c018();
                uVar18 = *(uint *)(param_1 + 0xf60);
                lVar13 = *(longlong *)(param_1 + 0xf58);
                if (*(longlong *)(param_1 + 0xf58) == 0) {
                  lVar13 = lVar9;
                }
                uVar8 = 0xffffffff >> (-(char)((int)uVar18 % 0x20) & 0x1fU);
                if ((int)uVar18 % 0x20 < 1) {
                  uVar8 = 0xffffffff;
                }
                uVar20 = *(uint *)(lVar10 + 0x50);
                if ((int)uVar18 < 1) {
                  uVar18 = 0;
                }
                else {
                  uVar12 = (ulonglong)uVar18 + 0x1f >> 5;
                  uVar27 = 0xffffffff;
                  if (uVar18 < 0x21) {
                    uVar27 = uVar8;
                  }
                  uVar16 = 0;
                  uVar18 = 0;
                  do {
                    uVar27 = uVar27 & *(uint *)(lVar13 + uVar16 * 4);
                    uVar28 = (ulonglong)uVar27 - (ulonglong)(uVar27 >> 1 & 0x55555555);
                    uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333);
                    uVar18 = uVar18 + (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) *
                                             0x101010101010101 >> 0x38);
                    bVar29 = uVar12 - 2 == uVar16;
                    uVar16 = uVar16 + 1;
                    uVar27 = 0xffffffff;
                    if (bVar29) {
                      uVar27 = uVar8;
                    }
                  } while (uVar12 != uVar16);
                }
                if (uVar20 != uVar18) break;
                *(undefined4 *)(param_1 + 0xf60) = 0;
                uVar18 = local_d0;
              }
              iVar24 = uVar20 - uVar18;
              local_cc = 0;
              if (-1 < iVar24) {
                uVar18 = rand();
                iVar5 = (int)((float)(iVar24 + 1) * ((float)(uVar18 & 0x7fff) / 32767.0));
                local_cc = iVar24;
                if (iVar5 < iVar24) {
                  local_cc = iVar5;
                }
              }
              uVar18 = 0;
              if (0 < (int)uVar20) {
                local_bc = uVar20 - 1;
                local_c8 = local_bc >> 5;
                local_a8 = (ulonglong)uVar20 + 0x1f >> 5;
                local_b0 = ((uint)local_a8 * 3 >> 3) + local_a8 + 0x10;
                local_b8 = 4;
                if (4 < (uint)local_a8) {
                  local_b8 = local_a8;
                }
                local_c4 = uVar20 * 2;
                if ((int)(uVar20 * 2) < 2) {
                  local_c4 = 1;
                }
                uVar27 = 0;
                iVar24 = 0;
                uVar8 = local_c4;
                do {
                  uVar12 = (ulonglong)uVar27 % (ulonglong)uVar20;
                  uVar18 = (uint)uVar12;
                  iVar5 = *(int *)(param_1 + 0xf60);
                  if ((iVar5 <= (int)uVar18) &&
                     (iVar22 = uVar20 - iVar5, iVar22 != 0 && iVar5 <= (int)uVar20)) {
                    if (iVar5 == 0) {
LAB_1441fefb6:
                      uVar8 = uVar20;
                      if (*(int *)(param_1 + 0xf64) < (int)uVar20) {
                        iVar23 = iVar5;
                        if (uVar20 < 0x81) {
                          iVar19 = 0x80;
                        }
                        else {
                          uVar16 = local_b0;
                          if (*(int *)(param_1 + 0xf64) + 0x1fU < 0xa0) {
                            uVar16 = local_b8;
                          }
                          uVar28 = uVar16 * 4;
                          if (DAT_14c872d28 != (longlong *)0x0) {
                            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                              uVar21 = uVar28 + 0xf;
                              if ((uint)uVar16 < 0x1ffd) {
                                uVar28 = (ulonglong)
                                         (ushort)(&DAT_14c841d90)
                                                 [0x32 - (byte)(&DAT_14c841e00)[uVar21 >> 4]];
                              }
                              else {
                                lVar9 = local_d8;
                                if ((uVar21 & 0xfffffffffffffff0) < 0x7ff1) {
                                  bVar17 = (&DAT_14c841e00)[uVar21 >> 4];
                                  uVar16 = 0x32;
                                  if (0x32 < bVar17) {
                                    uVar16 = (ulonglong)bVar17;
                                  }
                                  uVar26 = 0x32 - (ulonglong)bVar17;
                                  do {
                                    uVar28 = (ulonglong)
                                             (ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                                    if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0)
                                    goto LAB_1441ff0f9;
                                    lVar13 = uVar16 + 1 + uVar26;
                                    uVar26 = uVar26 - 1;
                                  } while (lVar13 != 0x33);
                                }
                                uVar16 = (ulonglong)DAT_14c841df8;
                                if (DAT_14c841df8 < 0x11) {
                                  uVar16 = 0x10;
                                }
                                uVar28 = -uVar16 & ((uVar21 & 0xfffffffffffffff0) + uVar16) - 1;
                              }
                            }
                            else {
                              uVar28 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar28,0);
                              iVar23 = *(int *)(param_1 + 0xf60);
                            }
                          }
LAB_1441ff0f9:
                          iVar7 = (int)(uVar28 >> 2);
                          iVar19 = iVar7 << 5;
                          if (iVar7 < (int)local_a8) {
                            iVar19 = -0x20;
                          }
                        }
                        *(int *)(param_1 + 0xf64) = iVar19;
                        FUN_1446efbd8(lVar9,iVar23);
                        uVar8 = *(int *)(param_1 + 0xf60) + iVar22;
                      }
                      uVar6 = uVar8 + 0x1f;
                      if (-1 < (int)uVar8) {
                        uVar6 = uVar8;
                      }
                      *(uint *)(param_1 + 0xf60) = uVar8;
                      if ((int)uVar8 % 0x20 != 0) {
                        lVar13 = *(longlong *)(param_1 + 0xf58);
                        if (*(longlong *)(param_1 + 0xf58) == 0) {
                          lVar13 = lVar9;
                        }
                        bVar17 = -(char)((int)uVar8 % 0x20);
                        *(uint *)(lVar13 + (longlong)((int)uVar6 >> 5) * 4) =
                             (uint)(*(int *)(lVar13 + (longlong)((int)uVar6 >> 5) * 4) <<
                                   (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
                      }
                    }
                    else {
                      iVar23 = iVar5 + 0x1e;
                      if (-1 < iVar5 + -1) {
                        iVar23 = iVar5 + -1;
                      }
                      if (local_c8 != iVar23 >> 5) goto LAB_1441fefb6;
                      *(uint *)(param_1 + 0xf60) = uVar20;
                    }
                    FUN_1447c6044(lVar9,iVar5,iVar22,0);
                    uVar8 = local_c4;
                  }
                  uVar16 = local_68;
                  lVar13 = *(longlong *)(param_1 + 0xf58);
                  if (*(longlong *)(param_1 + 0xf58) == 0) {
                    lVar13 = lVar9;
                  }
                  if ((*(uint *)(lVar13 + (uVar12 >> 5) * 4) >> (uVar18 & 0x1f) & 1) == 0) {
                    if (((int)local_68 <= (int)uVar18) &&
                       (iVar5 = uVar20 - (int)local_68, iVar5 != 0 && (int)local_68 <= (int)uVar20))
                    {
                      if ((int)local_68 == 0) {
LAB_1441ff00e:
                        uVar8 = uVar20;
                        if (local_68._4_4_ < (int)uVar20) {
                          local_c0 = iVar24;
                          if (uVar20 < 0x81) {
                            iVar22 = 0x80;
                            iVar24 = (int)local_68;
                          }
                          else {
                            uVar28 = local_b0;
                            if (local_68._4_4_ + 0x1fU < 0xa0) {
                              uVar28 = local_b8;
                            }
                            uVar21 = uVar28 * 4;
                            if (DAT_14c872d28 != (longlong *)0x0) {
                              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                uVar26 = uVar21 + 0xf;
                                if ((uint)uVar28 < 0x1ffd) {
                                  uVar21 = (ulonglong)
                                           (ushort)(&DAT_14c841d90)
                                                   [0x32 - (byte)(&DAT_14c841e00)[uVar26 >> 4]];
                                }
                                else {
                                  if ((uVar26 & 0xfffffffffffffff0) < 0x7ff1) {
                                    bVar17 = (&DAT_14c841e00)[uVar26 >> 4];
                                    uVar28 = 0x32;
                                    if (0x32 < bVar17) {
                                      uVar28 = (ulonglong)bVar17;
                                    }
                                    uVar25 = 0x32 - (ulonglong)bVar17;
                                    do {
                                      uVar21 = (ulonglong)
                                               (ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                                      if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0)
                                      goto LAB_1441ff1c6;
                                      lVar9 = uVar28 + 1 + uVar25;
                                      uVar25 = uVar25 - 1;
                                    } while (lVar9 != 0x33);
                                  }
                                  uVar28 = (ulonglong)DAT_14c841df8;
                                  if (DAT_14c841df8 < 0x11) {
                                    uVar28 = 0x10;
                                  }
                                  uVar21 = -uVar28 & ((uVar26 & 0xfffffffffffffff0) + uVar28) - 1;
                                }
                              }
                              else {
                                uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                   (DAT_14c872d28,uVar21,0);
                              }
                            }
LAB_1441ff1c6:
                            iVar23 = (int)(uVar21 >> 2);
                            iVar22 = iVar23 << 5;
                            iVar24 = (int)local_68;
                            if (iVar23 < (int)local_a8) {
                              iVar22 = -0x20;
                            }
                          }
                          local_68 = CONCAT44(iVar22,(int)local_68);
                          FUN_1446efbd8(local_80,iVar24);
                          uVar8 = (int)local_68 + iVar5;
                          iVar24 = local_c0;
                        }
                        uVar6 = uVar8 + 0x1f;
                        if (-1 < (int)uVar8) {
                          uVar6 = uVar8;
                        }
                        local_68 = CONCAT44(local_68._4_4_,uVar8);
                        if ((int)uVar8 % 0x20 != 0) {
                          ppcVar14 = local_70;
                          if (local_70 == (code **)0x0) {
                            ppcVar14 = local_80;
                          }
                          bVar17 = -(char)((int)uVar8 % 0x20);
                          *(uint *)((longlong)ppcVar14 + (longlong)((int)uVar6 >> 5) * 4) =
                               (uint)(*(int *)((longlong)ppcVar14 + (longlong)((int)uVar6 >> 5) * 4)
                                     << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
                        }
                      }
                      else {
                        iVar22 = (int)local_68 + 0x1e;
                        if (-1 < (int)local_68 + -1) {
                          iVar22 = (int)local_68 + -1;
                        }
                        if (local_c8 != iVar22 >> 5) goto LAB_1441ff00e;
                        local_68 = CONCAT44(local_68._4_4_,uVar20);
                      }
                      FUN_1447c6044(local_80,uVar16 & 0xffffffff,iVar5,0);
                      lVar9 = local_d8;
                      uVar8 = local_c4;
                    }
                    ppcVar14 = local_70;
                    if (local_70 == (code **)0x0) {
                      ppcVar14 = local_80;
                    }
                    if ((*(uint *)((longlong)ppcVar14 + (uVar12 >> 5) * 4) &
                        1 << ((byte)uVar12 & 0x1f)) == 0) {
                      if (iVar24 == local_cc) goto LAB_1441ff387;
                      iVar24 = iVar24 + 1;
                    }
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 != uVar8);
                uVar18 = rand();
                uVar8 = (uint)((float)(int)uVar20 * ((float)(uVar18 & 0x7fff) / 32767.0));
                uVar18 = local_bc;
                if ((int)uVar8 < (int)local_bc) {
                  uVar18 = uVar8;
                }
              }
LAB_1441ff387:
              auVar2._8_8_ = 0;
              auVar2._0_8_ = (longlong)*(int *)(local_98 + 0x50);
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (longlong)(int)uVar18;
              auVar3 = auVar3 % auVar2;
              if (DAT_14cb79120 == 0) {
                if (DAT_14cb758b8 == 0) {
                  DAT_14cb79120 = 0;
                  lVar9 = local_d8;
                }
                else {
                  DAT_14cb79120 = FUN_144837462(DAT_14cb758b8,&DAT_14cb790d0);
                  lVar9 = local_d8;
                }
              }
              puVar15 = (undefined4 *)FUN_1409e484c(param_1);
              local_128 = *puVar15;
              iVar24 = auVar3._0_4_;
              FUN_14434aa46(local_88,local_90,local_a0,auVar3._0_8_ & 0xffffffff);
              uVar12 = local_68;
              uVar18 = 1 << (auVar3[0] & 0x1f);
              lVar13 = *(longlong *)(param_1 + 0xf58);
              if (*(longlong *)(param_1 + 0xf58) == 0) {
                lVar13 = lVar9;
              }
              iVar5 = iVar24 + 0x1f;
              if (-1 < iVar24) {
                iVar5 = iVar24;
              }
              iVar5 = iVar5 >> 5;
              puVar1 = (uint *)(lVar13 + (longlong)iVar5 * 4);
              *puVar1 = *puVar1 | uVar18;
              iVar22 = iVar24 + 1;
              iVar23 = iVar22 - (int)local_68;
              if (iVar23 != 0 && (int)local_68 <= iVar22) {
                if ((int)local_68 == 0) {
                  iVar19 = -1;
                }
                else {
                  iVar19 = (int)local_68 + 0x1e;
                  if (-1 < (int)local_68 + -1) {
                    iVar19 = (int)local_68 + -1;
                  }
                  iVar19 = iVar19 >> 5;
                }
                if (iVar5 == iVar19) {
                  local_68 = CONCAT44(local_68._4_4_,iVar22);
                }
                else {
                  if (local_68._4_4_ < iVar22) {
                    if (iVar24 + 0x20U < 0xa0) {
                      iVar22 = 0x80;
                      iVar24 = (int)local_68;
                    }
                    else {
                      uVar8 = iVar24 + 0x20U >> 5;
                      if (local_68._4_4_ + 0x1fU < 0xa0) {
                        uVar20 = 4;
                        if (4 < uVar8) {
                          uVar20 = uVar8;
                        }
                      }
                      else {
                        uVar20 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
                      }
                      uVar16 = (ulonglong)(uVar20 * 4);
                      if (DAT_14c872d28 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                          uVar27 = (uint)(uVar16 + 0xf);
                          if (uVar20 < 0x1ffd) {
                            uVar16 = (ulonglong)
                                     (ushort)(&DAT_14c841d90)
                                             [0x32 - (byte)(&DAT_14c841e00)[uVar27 >> 4]];
                          }
                          else {
                            uVar28 = uVar16 + 0xf & 0xfffffffffffffff0;
                            if (uVar28 < 0x7ff1) {
                              bVar17 = (&DAT_14c841e00)[uVar27 >> 4];
                              uVar21 = 0x32;
                              if (0x32 < bVar17) {
                                uVar21 = (ulonglong)bVar17;
                              }
                              uVar26 = 0x32 - (ulonglong)bVar17;
                              do {
                                uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                                if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0)
                                goto LAB_1441ff594;
                                lVar9 = uVar21 + 1 + uVar26;
                                uVar26 = uVar26 - 1;
                              } while (lVar9 != 0x33);
                            }
                            uVar16 = (ulonglong)DAT_14c841df8;
                            if (DAT_14c841df8 < 0x11) {
                              uVar16 = 0x10;
                            }
                            uVar16 = -uVar16 & (uVar28 + uVar16) - 1;
                          }
                        }
                        else {
                          uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
                        }
                      }
LAB_1441ff594:
                      iVar19 = (int)(uVar16 >> 2);
                      iVar22 = iVar19 << 5;
                      iVar24 = (int)local_68;
                      if (iVar19 < (int)uVar8) {
                        iVar22 = -0x20;
                      }
                    }
                    local_68 = CONCAT44(iVar22,(int)local_68);
                    FUN_1446efbd8(local_80,iVar24);
                    iVar22 = (int)local_68 + iVar23;
                    lVar9 = local_d8;
                  }
                  iVar24 = iVar22 + 0x1f;
                  if (-1 < iVar22) {
                    iVar24 = iVar22;
                  }
                  local_68 = CONCAT44(local_68._4_4_,iVar22);
                  if (iVar22 % 0x20 != 0) {
                    ppcVar14 = local_70;
                    if (local_70 == (code **)0x0) {
                      ppcVar14 = local_80;
                    }
                    bVar17 = -(char)(iVar22 % 0x20);
                    *(uint *)((longlong)ppcVar14 + (longlong)(iVar24 >> 5) * 4) =
                         (uint)(*(int *)((longlong)ppcVar14 + (longlong)(iVar24 >> 5) * 4) <<
                               (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
                  }
                }
                FUN_1447c6044(local_80,uVar12 & 0xffffffff,iVar23,0);
              }
              ppcVar14 = local_70;
              if (local_70 == (code **)0x0) {
                ppcVar14 = local_80;
              }
              puVar1 = (uint *)((longlong)ppcVar14 + (longlong)iVar5 * 4);
              *puVar1 = *puVar1 | uVar18;
              uVar18 = local_d0 + 1;
            } while (local_d0 + 1 < *(uint *)(local_98 + 0x58));
            if (local_70 != (code **)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ff788 FUN_1441ff788 body=358 status=ok
// SIG undefined FUN_1441ff788(void)

void FUN_1441ff788(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)(lVar2 + 0x20) = 1;
  if (((((param_2[1] != 0) && (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((plVar3 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar3 != (longlong *)0x0 && (*(uint *)(plVar3 + 2) == param_2[1])))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ff914 FUN_1441ff914 body=69 status=ok
// SIG undefined FUN_1441ff914(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441ff914(void)

{
  _DAT_14cbd07d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ff956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd07e0,1);
  return;
}



// FUNCTION 1441ff959 FUN_1441ff959 body=69 status=ok
// SIG undefined FUN_1441ff959(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441ff959(void)

{
  _DAT_14cbd07f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ff99b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd07f8,1);
  return;
}



// FUNCTION 1441ff99e FUN_1441ff99e body=49 status=ok
// SIG undefined FUN_1441ff99e(void)

void FUN_1441ff99e(void)

{
  FUN_144760e21(DAT_14cbd0b18,DAT_14cbd0b20);
  if (DAT_14cbd0b18 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441ff9d0 FUN_1441ff9d0 body=527 status=ok
// SIG undefined FUN_1441ff9d0(void)

undefined8 FUN_1441ff9d0(longlong *param_1,longlong *param_2,byte param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == 0) {
    FUN_145ac041a(param_1);
  }
  else {
    local_40 = *param_2;
    lVar6 = FUN_14050aea0();
    if (((lVar6 != 0) && (lVar6 = FUN_1407c8d60(lVar6), lVar6 != 0)) &&
       ((*(char *)(lVar6 + 0x2e) != '\0' || ((param_3 & *(byte *)(lVar6 + 0x2f)) == 1)))) {
      lVar6 = *param_2;
      if ((param_1[0x478] != lVar6) || (iVar8 = (int)param_1[0x479], iVar8 != (int)param_2[1])) {
        param_1[0x478] = lVar6;
        iVar8 = (int)param_2[1];
        *(int *)(param_1 + 0x479) = iVar8;
        param_1[0x47a] = 0;
      }
      if (iVar8 - 1U < 0xfffffffe && lVar6 != 0) {
        uVar7 = FUN_1447210f0(param_1);
        FUN_1410d53f0(&local_40,uVar7);
        plVar9 = (longlong *)CONCAT44(uStack_34,local_38);
        if (plVar9 != (longlong *)0x0) {
          iVar8 = (int)plVar9[1];
          do {
            if (iVar8 == 0) {
              plVar9 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar4 = (int)plVar9[1];
            bVar10 = iVar8 == iVar4;
            if (bVar10) {
              *(int *)(plVar9 + 1) = iVar8 + 1;
              iVar4 = iVar8;
            }
            iVar8 = iVar4;
            UNLOCK();
          } while (!bVar10);
          LOCK();
          piVar1 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
          }
          lVar6 = local_40;
          if (plVar9 != (longlong *)0x0) {
            if (local_40 != 0) {
              if (((((char)param_1[0x2f] == '\x03') &&
                   (cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar5 != '\0')) &&
                  ((cVar5 = FUN_14016169c(param_1,&local_40), cVar5 == '\0' || ((int)local_40 == 0))
                  )) && ((lVar3 = param_1[0x478], *(longlong *)(lVar6 + 0xd0) != lVar3 ||
                         (*(int *)(lVar6 + 0xd8) != (int)param_1[0x479])))) {
                *(longlong *)(lVar6 + 0xd0) = lVar3;
                *(int *)(lVar6 + 0xd8) = (int)param_1[0x479];
                *(undefined8 *)(lVar6 + 0xe0) = 0;
              }
              FUN_145a05fbc(lVar6,param_1,param_1 + 0x478,1);
            }
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
          }
        }
      }
      local_40 = param_1[0x478];
      local_38 = (undefined4)param_1[0x479];
      local_30 = 0;
      FUN_145a06040(param_1 + 0x44a);
      uVar7 = 1;
      goto LAB_1441ffb2b;
    }
  }
  uVar7 = 0;
LAB_1441ffb2b:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1441ffbe0 FUN_1441ffbe0 body=566 status=ok
// SIG undefined FUN_1441ffbe0(void)

void FUN_1441ffbe0(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x178) != '\x03') ||
     ((((cVar3 = FUN_14016169c(param_1,&local_50), cVar3 != '\0' && ((int)local_50 != 0)) ||
       (*(undefined2 **)(param_1 + 0x23d8) == (undefined2 *)0x0)) ||
      (0xfffffffd < *(int *)(param_1 + 0x23e0) - 1U)))) goto LAB_1441ffc30;
  local_50 = *(undefined2 **)(param_1 + 0x23d8);
  FUN_1400021e4(&local_50,&local_38);
  FUN_145ad105e(&local_50);
  uVar7 = 0;
  uVar8 = (ulonglong)(local_48 - 1);
  if (local_48 == 0) {
    uVar8 = uVar7;
  }
  if (0 < (int)uVar8) {
    puVar4 = local_50;
    if (local_48 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    lVar9 = 0;
LAB_1441ffcaf:
    uVar1 = *(ushort *)((longlong)puVar6 + lVar9);
    uVar2 = *(ushort *)((longlong)puVar4 + lVar9);
    if (uVar1 == uVar2) {
      iVar10 = 0;
      if ((uVar1 == 0) || (uVar8 == 1)) goto LAB_1441ffcfe;
LAB_1441ffcca:
      uVar8 = uVar8 - 1;
      lVar9 = lVar9 + 2;
      goto LAB_1441ffcaf;
    }
    if ((uVar2 | uVar1) < 0x80) {
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_1441ffcfe;
      }
      if (uVar8 == 1) {
        iVar10 = 0;
        goto LAB_1441ffcfe;
      }
      goto LAB_1441ffcca;
    }
    iVar10 = (uint)uVar1 - (uint)uVar2;
LAB_1441ffcfe:
    uVar7 = (ulonglong)(iVar10 == 0);
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (((char)uVar7 == '\0') || (lVar9 = FUN_1403ca102(param_1), lVar9 == 0)) {
LAB_1441ffd1f:
    uVar5 = FUN_1447210f0(param_1);
    FUN_143dbe108(&local_50,param_1 + 0x23d8,uVar5);
    if ((local_48 - 1U < 0xfffffffe && local_50 != (undefined2 *)0x0) &&
       ((local_50 != *(undefined2 **)(param_1 + 0x23d8) || (local_48 != *(int *)(param_1 + 0x23e0)))
       )) goto LAB_1441ffd78;
  }
  else {
    uVar5 = FUN_140d27a2a(lVar9);
    cVar3 = FUN_14577a842(uVar5);
    if (cVar3 != '\0') goto LAB_1441ffd1f;
    FUN_148d31e60(&local_50);
    iVar10 = local_48 + -1;
    if (local_48 == 0) {
      iVar10 = 0;
    }
    FUN_1446f82e2(&local_28,iVar10,local_50,1);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = 0x6000;
    local_40 = 0;
    local_50 = local_28;
LAB_1441ffd78:
    FUN_141166838(param_1,&local_50,0);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441ffc30:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ffe17 FUN_1441ffe17 body=69 status=ok
// SIG undefined FUN_1441ffe17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441ffe17(void)

{
  _DAT_14cbd0848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ffe59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd0850,1);
  return;
}



// FUNCTION 1441ffe5c FUN_1441ffe5c body=69 status=ok
// SIG undefined FUN_1441ffe5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441ffe5c(void)

{
  _DAT_14cbd0860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ffe9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd0868,1);
  return;
}



// FUNCTION 1441ffea2 FUN_1441ffea2 body=3206 status=ok
// SIG undefined FUN_1441ffea2(void)

void FUN_1441ffea2(longlong *param_1,ulonglong param_2,longlong *param_3,undefined8 *param_4,
                  char param_5,undefined1 param_6,char param_7,char param_8,undefined1 param_9)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 unaff_RBP;
  longlong *plVar22;
  longlong *plVar23;
  undefined8 ****ppppuVar24;
  longlong *plVar25;
  undefined7 uVar26;
  byte bVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  char local_180;
  char local_178;
  char local_166;
  char local_165;
  undefined4 local_164;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  int local_148;
  int local_144;
  longlong *local_140;
  undefined8 ***local_138;
  undefined8 *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined1 *puStack_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 ***local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined8 ***local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 ***local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined4 local_a0;
  char local_99;
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  param_2 = param_2 & 0xffffffff;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_99 = param_7;
  plVar13 = (longlong *)FUN_14497e828(param_1);
  if (plVar13 == (longlong *)0x0) {
LAB_1441fff1d:
    local_150 = param_1 + 0x477;
    cVar8 = (char)param_1[0x477];
    bVar28 = false;
    local_164 = 0;
  }
  else {
    lVar14 = FUN_1403ca142();
    if ((*(int *)(plVar13[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
        lVar14 + 0x30)) goto LAB_1441fff1d;
    local_150 = param_1 + 0x477;
    cVar8 = (char)param_1[0x477];
    unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar8);
    lVar14 = FUN_140d27a2a(plVar13);
    bVar28 = (byte)(*(char *)(lVar14 + 0xb0) - 1U) < 8;
    uVar15 = (**(code **)(*plVar13 + 0x498))(plVar13);
    local_164 = (undefined4)CONCAT71((int7)((ulonglong)uVar15 >> 8),(byte)((char)uVar15 - 6U) < 3);
  }
  cVar7 = (**(code **)(*param_1 + 0x6c8))(param_1);
  uVar9 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar7 != '\0') {
    uVar9 = FUN_140128af0(param_1);
  }
  local_a0 = 0;
  local_128._0_4_ = CONCAT13((char)local_164,CONCAT12(bVar28,CONCAT11((char)uVar9,cVar8)));
  local_120 = (longlong *)&local_99;
  puStack_118 = (undefined1 *)CONCAT71(puStack_118._1_7_,(char)param_2);
  local_110 = *param_4;
  uStack_108 = *(undefined4 *)(param_4 + 1);
  uStack_104 = *(undefined4 *)((longlong)param_4 + 0xc);
  local_100 = param_4[2];
  local_165 = cVar8;
  local_130 = param_4;
  uVar15 = FUN_1447210f0(param_1);
  ppppuVar3 = (undefined8 ****)*param_3;
  iVar10 = (int)param_3[1];
  local_e0 = 0;
  ppppuVar24 = (undefined8 ****)param_1[0x471];
  local_d0 = (int)param_1[0x472];
  local_c8 = 0;
  local_140 = param_1 + 0x46e;
  ppppuVar4 = (undefined8 ****)param_1[0x46e];
  iVar6 = (int)param_1[0x46f];
  local_b0 = 0;
  local_160 = param_1;
  local_158 = param_3;
  uStack_f8 = uVar15;
  local_f0 = ppppuVar3;
  local_e8 = iVar10;
  local_d8 = ppppuVar24;
  local_c0 = ppppuVar4;
  local_b8 = iVar6;
  local_a8 = &local_a0;
  if (bVar28 == false) {
    local_148 = iVar6;
    ppppuVar5 = ppppuVar4;
    if (ppppuVar3 != (undefined8 ****)0x0) {
      local_148 = iVar10;
      ppppuVar5 = ppppuVar3;
    }
    local_166 = (char)param_2;
    local_144 = local_d0;
    local_138 = ppppuVar24;
    pppuStack_98 = ppppuVar5;
    lVar14 = FUN_14050aea0();
    if (local_99 == '\x01') {
      puVar21 = (undefined8 *)(lVar14 + 0x68);
      if (lVar14 == 0) {
        puVar21 = &local_110;
      }
      ppppuVar24 = (undefined8 ****)(ulonglong)uVar9;
      cVar8 = FUN_145cb8bb4(uVar15,puVar21,ppppuVar24);
      param_2 = CONCAT71((int7)((ulonglong)puVar21 >> 8),local_166);
      if (cVar8 != '\0') goto LAB_14420006a;
      local_99 = '\0';
    }
    if ((lVar14 != 0) &&
       ((((lVar17 = FUN_1407c8d60(lVar14), lVar17 != 0 && ((byte)local_164 == '\0')) &&
         (*(char *)(lVar17 + 0x2a) != '\0')) ||
        ((lVar14 = FUN_1407c8d60(lVar14), lVar14 != 0 && (*(char *)(lVar14 + 0x2b) != '\0')))))) {
      param_2 = CONCAT71((int7)(param_2 >> 8),local_166);
      if ((local_166 != '\0') && ((undefined8 ****)local_138 != ppppuVar5 || local_144 != local_148)
         ) {
        local_a0 = *DAT_14cbd0870;
        goto LAB_144200292;
      }
      goto LAB_14420006a;
    }
    uVar26 = (undefined7)(param_2 >> 8);
    if ((ppppuVar3 == (undefined8 ****)0x0 || 0xfffffffd < iVar10 - 1U) ||
       (iVar10 != iVar6 || ppppuVar3 != ppppuVar4)) {
      param_2 = CONCAT71(uVar26,local_166);
      if (local_166 != '\0') goto LAB_144200292;
      *(undefined1 *)(local_160 + 0x46d) = 0;
      *(undefined1 *)((longlong)local_160 + 0x23b9) = param_6;
      *(undefined1 *)((longlong)local_160 + 0x23ba) = param_9;
      plVar13 = (longlong *)(param_2 & 0xffffffff);
      goto LAB_1442001b9;
    }
    param_2 = CONCAT71(uVar26,local_166);
    if (local_166 == '\0' || local_165 != '\0') goto LAB_14420006a;
LAB_144200292:
    *(char *)(local_160 + 0x46d) = (char)param_2;
    *(undefined1 *)((longlong)local_160 + 0x23b9) = param_6;
    *(undefined1 *)((longlong)local_160 + 0x23ba) = param_9;
    bVar28 = true;
    plVar13 = (longlong *)(param_2 & 0xffffffff);
LAB_1442002c1:
    lVar14 = *local_140;
    plVar25 = (longlong *)CONCAT71((uint7)(uint3)((uint)iVar10 >> 8),1);
    bVar27 = 0;
    plVar22 = local_160;
    plVar23 = local_158;
  }
  else {
LAB_14420006a:
    *(char *)(local_160 + 0x46d) = (char)param_2;
    *(undefined1 *)((longlong)local_160 + 0x23b9) = param_6;
    *(undefined1 *)((longlong)local_160 + 0x23ba) = param_9;
    plVar13 = (longlong *)(param_2 & 0xffffffff);
    if ((char)param_2 != '\0') {
      bVar28 = false;
      goto LAB_1442002c1;
    }
LAB_1442001b9:
    plVar23 = local_158;
    plVar22 = local_160;
    if (DAT_14cadba60 == '\x01') {
      lVar14 = FUN_1408ed0b0();
      *(undefined1 *)(lVar14 + 0xb0) = 0;
    }
    uVar15 = FUN_140d27aa0(plVar22);
    bVar27 = 1;
    ppppuVar24 = (undefined8 ****)CONCAT71((int7)((ulonglong)ppppuVar24 >> 8),1);
    FUN_140d27c2e(uVar15,0,ppppuVar24);
    lVar14 = plVar22[0x46e];
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else if ((plVar22[0x471] != lVar14) || ((int)plVar22[0x472] != (int)plVar22[0x46f])) {
      plVar22[0x471] = lVar14;
      *(int *)(plVar22 + 0x472) = (int)plVar22[0x46f];
      plVar22[0x473] = 0;
    }
    plVar25 = (longlong *)0x0;
    bVar28 = false;
  }
  if ((lVar14 != *plVar23) || ((int)plVar22[0x46f] != (int)plVar23[1])) {
    plVar22[0x46e] = *plVar23;
    *(int *)(plVar22 + 0x46f) = (int)plVar23[1];
    plVar22[0x470] = 0;
  }
  if (bVar28) {
    plVar16 = (longlong *)FUN_14497e828(plVar22);
    if (plVar16 != (longlong *)0x0) {
      lVar14 = FUN_1403ca142();
      if (((*(int *)(lVar14 + 0x38) <= *(int *)(plVar16[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
           == lVar14 + 0x30)) &&
         ((((char)plVar16[0x89] != '\0' ||
           (cVar8 = (**(code **)(*plVar16 + 0x498))(plVar16), (byte)(cVar8 - 9U) < 0xfe)) ||
          ((lVar14 = FUN_14021f720(plVar16), lVar14 != 0 && (*(char *)(lVar14 + 0xa1) != '\0'))))))
      {
        lVar14 = DAT_14cbd0858;
        iVar10 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
        if (iVar10 == 0x40000002) {
          uVar19 = 0;
        }
        else {
          bVar29 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar10 != 2)) {
            if (iVar10 == 1) {
              DVar11 = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              bVar29 = DVar11 == DVar12;
            }
            else {
              bVar29 = false;
            }
          }
          uVar19 = (ulonglong)(bVar29 ^ 1);
        }
        plVar22 = local_160;
        FUN_145ac4942(local_160,*(undefined4 *)(lVar14 + uVar19 * 4),local_a0);
        goto LAB_144200382;
      }
    }
    FUN_144200b2a(plVar22,0);
  }
LAB_144200382:
  if ((((((char)local_164 != '\x01' || bVar27 != 0) || param_5 != '\0') ||
       (FUN_1410ef0a8(plVar22), bVar28)) || (local_99 != '\x01' || param_8 != '\0')) ||
     ((char)*local_150 != '\0')) goto LAB_14420089a;
  if ((plVar22[0x474] != 0) && ((int)plVar22[0x475] - 1U < 0xfffffffe)) {
    if ((plVar22[0x474] != plVar22[0x46e]) || ((int)plVar22[0x475] != (int)plVar22[0x46f])) {
      FUN_140e1a75c(plVar22);
      if (plVar22[0x1d7] != 0) {
        lVar17 = FUN_1401b4c98(plVar22);
        lVar14 = plVar22[0x1d7];
        if (lVar14 != 0) {
          uVar9 = (uint)lVar14;
          if ((int)(uVar9 & 0xffffff) < *(int *)(lVar17 + 0x10)) {
            ppppuVar24 = (undefined8 ****)(lVar17 + 0x18);
            if (*(undefined8 *****)(lVar17 + 0x28) != (undefined8 ****)0x0) {
              ppppuVar24 = *(undefined8 *****)(lVar17 + 0x28);
            }
            if ((*(uint *)((longlong)ppppuVar24 + (ulonglong)((uVar9 & 0xffffff) >> 5) * 4) >>
                 (uVar9 & 0x1f) & 1) != 0) {
              lVar18 = *(longlong *)(lVar17 + 8);
              ppppuVar24 = (undefined8 ****)((ulonglong)(uVar9 & 0xffffff) * 0x70);
              if (((lVar18 + (longlong)ppppuVar24 != 0) &&
                  (*(longlong *)(lVar18 + 0x60 + (longlong)ppppuVar24) == lVar14)) &&
                 (*(char *)(lVar18 + 1 + (longlong)ppppuVar24) != '\x04')) {
                FUN_1405a424c(lVar17);
              }
            }
          }
        }
        plVar22[0x1d7] = 0;
        FUN_141427fe4(plVar22);
      }
      if (plVar22[0x1d8] != 0) {
        lVar17 = FUN_1401b4c98(plVar22);
        lVar14 = plVar22[0x1d8];
        if (lVar14 != 0) {
          uVar9 = (uint)lVar14;
          if ((int)(uVar9 & 0xffffff) < *(int *)(lVar17 + 0x10)) {
            ppppuVar24 = (undefined8 ****)(lVar17 + 0x18);
            if (*(undefined8 *****)(lVar17 + 0x28) != (undefined8 ****)0x0) {
              ppppuVar24 = *(undefined8 *****)(lVar17 + 0x28);
            }
            if ((*(uint *)((longlong)ppppuVar24 + (ulonglong)((uVar9 & 0xffffff) >> 5) * 4) >>
                 (uVar9 & 0x1f) & 1) != 0) {
              lVar18 = *(longlong *)(lVar17 + 8);
              ppppuVar24 = (undefined8 ****)((ulonglong)(uVar9 & 0xffffff) * 0x70);
              if (((lVar18 + (longlong)ppppuVar24 != 0) &&
                  (*(longlong *)(lVar18 + 0x60 + (longlong)ppppuVar24) == lVar14)) &&
                 (*(char *)(lVar18 + 1 + (longlong)ppppuVar24) != '\x04')) {
                FUN_1405a424c(lVar17);
              }
            }
          }
        }
        plVar22[0x1d8] = 0;
        FUN_14420171c(plVar22);
      }
    }
    goto LAB_14420089a;
  }
  local_166 = (char)plVar13;
  local_160 = plVar25;
  lVar14 = FUN_140cb9f34();
  lVar17 = FUN_1414adc80(lVar14,local_140);
  cVar8 = FUN_144904448(plVar22 + 0x45e);
  if (cVar8 != '\0') {
    FUN_14072d42a(plVar22 + 0x45e,0);
  }
  cVar8 = FUN_144904448(plVar22 + 0x461);
  if (cVar8 != '\0') {
    FUN_14072d42a(plVar22 + 0x461,0);
  }
  lVar18 = DAT_14cb259f8;
  if ((DAT_14cb259f8 != 0) && (*(longlong *)(DAT_14cb259f8 + 0xa0) != 0)) {
    lVar20 = *(longlong *)(lVar17 + 0x168);
    if (lVar20 == 0) {
      uVar15 = FUN_140067708();
      lVar20 = FUN_14477b664(uVar15);
      *(longlong *)(lVar17 + 0x168) = lVar20;
    }
    if (*(longlong *)(lVar17 + 0x170) == 0) {
      if ((lVar20 != 0) && (*(longlong *)(lVar17 + 0x160) != 0)) {
        plVar13 = *(longlong **)(lVar20 + 0xb8);
        if ((plVar13 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar8 == '\0')) {
          *(undefined8 *)(lVar17 + 0x170) = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar13 + 0x110))(plVar13);
          lVar20 = FUN_144aff482(uVar15,(longlong *)(lVar17 + 0x160));
          *(longlong *)(lVar17 + 0x170) = lVar20;
          if (lVar20 != 0) goto LAB_1442005cc;
        }
      }
      if ((*(char *)(lVar17 + 0x150) != '\x01') || (*(longlong *)(lVar17 + 0x154) == 0))
      goto LAB_144200630;
    }
LAB_1442005cc:
    uVar15 = *(undefined8 *)(lVar18 + 0xa0);
    local_78 = 0;
    uStack_70 = 0;
    ppppuVar24 = (undefined8 ****)FUN_140206ee8(lVar17 + 0x150);
    local_188 = (undefined8 *)((ulonglong)local_188._4_4_ << 0x20);
    FUN_14084a448(uVar15,&local_128,ppppuVar24,plVar22);
    plVar22[0x45e] = local_128;
    plVar22[0x45f] = (longlong)local_120;
    plVar22[0x460] = (longlong)puStack_118;
  }
LAB_144200630:
  lVar17 = FUN_1402d1dc0(lVar17 + 0x78);
  if (lVar17 != 0) {
    puStack_118 = &DAT_4030000000000000;
    local_110 = 0x4022000000000000;
    uStack_104 = CONCAT31(uStack_104._1_3_,4);
    local_100 = 0;
    uStack_f8 = 0;
    FUN_140691b73();
    FUN_140691bc1();
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar17);
    }
    local_120 = (longlong *)CONCAT62(local_120._2_6_,0xce);
    uStack_108 = *(undefined4 *)(lVar14 + 0x60);
    ppppuVar24 = &pppuStack_98;
    pppuStack_98 = (undefined8 ****)0x0;
    uStack_90 = 0;
    local_128 = lVar17;
    (**(code **)(plVar22[300] + 0x90))(plVar22 + 300,&local_128,ppppuVar24);
    if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  plVar23 = local_158;
  plVar25 = local_160;
  uVar26 = (undefined7)((ulonglong)plVar13 >> 8);
  plVar13 = (longlong *)CONCAT71(uVar26,local_166);
  if (plVar22[0x1e9] == 0) goto LAB_14420089a;
  lVar17 = *(longlong *)(lVar14 + 0x70);
  if (lVar17 == 0) {
    uVar15 = FUN_1407f787c();
    lVar17 = FUN_14477b664(uVar15);
    *(longlong *)(lVar14 + 0x70) = lVar17;
  }
  lVar18 = *(longlong *)(lVar14 + 0x68);
  if (*(longlong *)(lVar14 + 0x78) == 0) {
    if (lVar17 == 0 || lVar18 == 0) goto LAB_14420089a;
    plVar13 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar13 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar8 == '\0')) {
      *(undefined8 *)(lVar14 + 0x78) = 0;
      plVar13 = (longlong *)CONCAT71(uVar26,local_166);
      plVar23 = local_158;
      plVar25 = local_160;
      goto LAB_14420089a;
    }
    uVar15 = (**(code **)(*plVar13 + 0x110))(plVar13);
    lVar17 = FUN_144aff482(uVar15,lVar14 + 0x68);
    *(longlong *)(lVar14 + 0x78) = lVar17;
    plVar13 = (longlong *)CONCAT71(uVar26,local_166);
    plVar23 = local_158;
    plVar25 = local_160;
    if (lVar17 == 0) goto LAB_14420089a;
    lVar18 = *(longlong *)(lVar14 + 0x68);
    lVar17 = *(longlong *)(lVar14 + 0x70);
  }
  local_120 = (longlong *)0x0;
  puStack_118 = (undefined1 *)0x0;
  local_128 = lVar18;
  uVar15 = FUN_14477b664(lVar17);
  local_120 = (longlong *)FUN_14477b664(uVar15);
  puStack_118 = *(undefined1 **)(lVar14 + 0x78);
  local_188 = (undefined8 *)((ulonglong)local_188 & 0xffffffff00000000);
  FUN_1414c1656(plVar22[0x1e9],plVar22[0x1e9],&local_128,0x3f800000);
  uVar2 = *(undefined4 *)(lVar14 + 0x80);
  pppuStack_98 = *(undefined8 ****)(lVar14 + 0x68);
  ppppuVar24 = &pppuStack_98;
  uVar15 = FUN_14477b664(*(undefined8 *)(lVar14 + 0x70));
  uStack_90 = FUN_14477b664(uVar15);
  local_88 = *(undefined8 *)(lVar14 + 0x78);
  local_188 = (undefined8 *)CONCAT44(local_188._4_4_,uVar2);
  FUN_1414c1656(plVar22[0x1e9],plVar22[0x1e9],ppppuVar24,0);
  plVar13 = (longlong *)CONCAT71((int7)((ulonglong)plVar13 >> 8),local_166);
  plVar23 = local_158;
  plVar25 = local_160;
LAB_14420089a:
  if (((byte)local_164 & bVar27) == 0) {
    if (param_5 == '\0') {
      FUN_14144f864(plVar22,(ulonglong)plVar25 & 0xffffffff,
                    CONCAT71((int7)((ulonglong)ppppuVar24 >> 8),local_99) ^ 1);
    }
    uVar15 = FUN_1447210f0(plVar22);
    FUN_1410d53f0(&local_128,uVar15);
    if (local_120 != (longlong *)0x0) {
      iVar10 = (int)local_120[1];
      do {
        if (iVar10 == 0) {
          plVar25 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)local_120[1];
        bVar28 = iVar10 == iVar6;
        if (bVar28) {
          *(int *)(local_120 + 1) = iVar10 + 1;
          iVar6 = iVar10;
        }
        iVar10 = iVar6;
        UNLOCK();
        plVar25 = local_120;
      } while (!bVar28);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_120 + 0x10))();
      }
      if (plVar25 != (longlong *)0x0) {
        if (local_128 != 0) {
          local_178 = local_99;
          local_180 = param_5;
          local_188 = local_130;
          FUN_14144f16e(local_128,plVar22,(ulonglong)plVar13 & 0xffffffff,plVar23);
        }
        LOCK();
        plVar13 = plVar25 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
        }
      }
    }
  }
  else if ((char)*local_150 == '\x01') {
    *(undefined1 *)((longlong)plVar22 + 0x23bc) = 1;
  }
  else {
    FUN_145a12416(plVar22);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144200b2a FUN_144200b2a body=3056 status=ok
// SIG undefined FUN_144200b2a(void)

void FUN_144200b2a(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  LARGE_INTEGER LVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8 [2];
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  LARGE_INTEGER local_88;
  byte local_80;
  byte bStack_7f;
  undefined6 uStack_7e;
  undefined1 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == '\0') {
    FUN_145ac4942(param_1,0,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbd0880) && (FUN_144b3d300(&DAT_14cbd0880), DAT_14cbd0880 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbd0878 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Water.GbxSuspendWaterRendering",1);
    _Init_thread_footer(&DAT_14cbd0880);
  }
  if (DAT_14cbd0878 != (longlong *)0x0) {
    (**(code **)(*DAT_14cbd0878 + 0x98))(DAT_14cbd0878,&DAT_149e0209e,0xd000000,0);
  }
  cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar4 == '\0') goto LAB_1442016b8;
  lVar6 = FUN_140083894();
  *(undefined1 *)(lVar6 + 0x58) = 1;
  if ((char)param_1[0x477] == '\x01') {
    if (param_1[0x1d7] == 0) goto LAB_1442016b8;
    lVar7 = FUN_1401b4c98(param_1);
    lVar6 = param_1[0x1d7];
    if (lVar6 != 0) {
      uVar13 = (uint)lVar6;
      if ((int)(uVar13 & 0xffffff) < *(int *)(lVar7 + 0x10)) {
        lVar10 = lVar7 + 0x18;
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          lVar10 = *(longlong *)(lVar7 + 0x28);
        }
        if ((*(uint *)(lVar10 + (ulonglong)((uVar13 & 0xffffff) >> 5) * 4) >> (uVar13 & 0x1f) & 1)
            != 0) {
          lVar10 = *(longlong *)(lVar7 + 8);
          lVar15 = (ulonglong)(uVar13 & 0xffffff) * 0x70;
          if (((lVar10 + lVar15 != 0) && (*(longlong *)(lVar10 + 0x60 + lVar15) == lVar6)) &&
             (*(char *)(lVar10 + 1 + lVar15) != '\x04')) {
            FUN_1405a424c(lVar7);
          }
        }
      }
    }
    param_1[0x1d7] = 0;
    FUN_141427fe4(param_1);
  }
  QueryPerformanceCounter(&local_88);
  param_1[0x1e4] = (longlong)((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0);
  cVar4 = FUN_14350bf76(1);
  if (cVar4 != '\0') {
    FUN_140635c46(1);
  }
  iVar5 = 0;
  if ((DAT_14c760d84 != 0) && (iVar5 = 0, (DAT_14ca84f5a & 1) != 0)) {
    iVar5 = *(int *)(DAT_14ca811d0 + 0x90) + *(int *)(DAT_14ca811c8 + 0x90);
  }
  *(int *)(param_1 + 0x1e6) = iVar5;
  if ((char)param_1[0x2f] == '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x23bb) = 0;
  }
  plVar8 = (longlong *)FUN_14497e828(param_1);
  if (plVar8 != (longlong *)0x0) {
    lVar6 = FUN_1403ca142();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      if (*(code **)(*plVar8 + 0x498) == (code *)&LAB_14015c36e) {
        cVar4 = (char)plVar8[0x42];
      }
      else {
        cVar4 = (**(code **)(*plVar8 + 0x498))(plVar8);
      }
      if ((cVar4 != '\b') ||
         ((lVar6 = FUN_14021f720(plVar8), lVar6 != 0 && (*(int *)(lVar6 + 0xec) != 0)))) {
        *(undefined1 *)((longlong)param_1 + 0x23b9) = 1;
      }
      lVar6 = FUN_14021f720(plVar8);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0xec) != 0)) {
        FUN_145a12516(plVar8);
      }
    }
  }
  cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar4 == '\0') goto LAB_1442016b8;
  *(undefined1 *)(param_1 + 0x477) = 1;
  *(undefined1 *)((longlong)param_1 + 0x23bd) = 1;
  if ((char)param_1[0x2f] != '\x03') {
    FUN_1465e8a56(param_1,1);
  }
  FUN_140898514(param_1 + 0x46a,1);
  FUN_1400bc96c(param_1 + 0x149,&DAT_14cbd0840);
  FUN_1400bc96c(param_1 + 0x144,&DAT_14cbd0840);
  if (((int)param_1[0x1b3] != 0) && (param_1[0x1b4] != 0)) {
    local_e8 = CONCAT31(local_e8._1_3_,1);
    FUN_146630da4(param_1 + 0x1d1,&DAT_14cbcfbd0,param_1 + 0x1b3,0);
  }
  lVar6 = FUN_140cb9f34();
  if (((param_1[0x474] != 0) && ((int)param_1[0x475] - 1U < 0xfffffffe)) &&
     ((param_1[0x474] != param_1[0x46e] || ((int)param_1[0x475] != (int)param_1[0x46f])))) {
    lVar7 = FUN_1414adc80(lVar6,param_1 + 0x474);
    lVar7 = FUN_1402d1dc0(lVar7 + 0x50);
    if (lVar7 != 0) {
      (**(code **)(param_1[300] + 0x98))(param_1 + 300,lVar7,0,0);
    }
  }
  if (param_1[0x474] == param_1[0x46e]) {
    iVar5 = (int)param_1[0x46f];
    if ((int)param_1[0x475] != iVar5) goto LAB_144200e8f;
  }
  else {
    iVar5 = (int)param_1[0x46f];
LAB_144200e8f:
    param_1[0x474] = param_1[0x46e];
    *(int *)(param_1 + 0x475) = iVar5;
    param_1[0x476] = 0;
  }
  lVar7 = FUN_1414adc80(lVar6,param_1 + 0x474);
  LVar9.QuadPart = FUN_1402d1dc0(lVar7 + 0x50);
  if (LVar9.QuadPart != 0) {
    local_88.QuadPart = 0;
    local_80 = 0xce;
    bStack_7f = bStack_7f & 0xe1 | 4;
    local_78 = &DAT_4030000000000000;
    local_70 = 0x4022000000000000;
    local_68 = 0x42c80000;
    local_64 = 4;
    local_60 = 0;
    uStack_58 = 0;
    cVar4 = FUN_140691b73();
    bStack_7f = bStack_7f & 0xfb | cVar4 << 2;
    cVar4 = FUN_140691bc1();
    bStack_7f = bStack_7f & 0xf7 | cVar4 << 3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(LVar9.QuadPart);
    }
    local_80 = local_80 | 4;
    bStack_7f = (bStack_7f & 0xf2) + 1;
    local_68 = *(undefined4 *)(lVar6 + 0x60);
    local_98[0] = 0;
    local_98[1] = 0;
    local_88.QuadPart = LVar9.QuadPart;
    if (*(longlong *)(lVar7 + 0xb0) != 0) {
      iVar5 = FUN_145818308(local_98);
      lVar10 = (longlong)iVar5 * 0x58;
      *(undefined8 *)(local_98[0] + lVar10) = *(undefined8 *)(lVar7 + 0xb0);
      *(undefined1 *)(local_98[0] + 8 + lVar10) = 1;
      uVar17 = 0;
      if (*(char *)((longlong)param_1 + 0x23b9) == '\0') {
        uVar17 = *(undefined4 *)(lVar7 + 0xa4);
      }
      *(undefined4 *)(local_98[0] + 0x10 + lVar10) = uVar17;
      *(float *)(param_1 + 0x1e2) =
           *(float *)(local_98[0] + 0x10 + lVar10) + *(float *)(param_1 + 0x1e2);
    }
    if (*(longlong *)(lVar7 + 0xb8) != 0) {
      iVar5 = FUN_145818308(local_98);
      lVar10 = (longlong)iVar5 * 0x58;
      *(undefined8 *)(local_98[0] + lVar10) = *(undefined8 *)(lVar7 + 0xb8);
      *(undefined1 *)(local_98[0] + 8 + lVar10) = 4;
      uVar12 = FUN_1447210f0(param_1);
      iVar5 = FUN_1463ccf40(uVar12);
      *(bool *)(local_98[0] + 9 + lVar10) = 1 < iVar5;
    }
    (**(code **)(param_1[300] + 0x90))(param_1 + 300,&local_88,local_98);
    *(float *)(param_1 + 0x1e2) = *(float *)(lVar7 + 0xa0) + *(float *)(param_1 + 0x1e2);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x1e3) = 1;
  lVar10 = *(longlong *)(lVar7 + 0x138);
  if (lVar10 == 0) {
    uVar12 = FUN_140067708();
    lVar10 = FUN_14477b664(uVar12);
    *(longlong *)(lVar7 + 0x138) = lVar10;
  }
  if (*(longlong *)(lVar7 + 0x140) == 0) {
    if ((lVar10 != 0) && (*(longlong *)(lVar7 + 0x130) != 0)) {
      plVar8 = *(longlong **)(lVar10 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
        *(undefined8 *)(lVar7 + 0x140) = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar10 = FUN_144aff482(uVar12,(longlong *)(lVar7 + 0x130));
        *(longlong *)(lVar7 + 0x140) = lVar10;
        if (lVar10 != 0) goto LAB_14420102e;
      }
    }
    if ((*(char *)(lVar7 + 0x120) == '\x01') && (*(longlong *)(lVar7 + 0x124) != 0))
    goto LAB_14420102e;
  }
  else {
LAB_14420102e:
    local_a8 = 0;
    uStack_a0 = 0;
    lVar10 = FUN_140206ee8(lVar7 + 0x120);
    if (lVar10 != 0) {
      *(undefined4 *)((longlong)param_1 + 0xf14) = *(undefined4 *)(lVar10 + 0x44);
      *(undefined1 *)(param_1 + 0x1e3) = 0;
    }
  }
  cVar4 = FUN_144904448(param_1 + 0x45e);
  if (cVar4 != '\0') {
    FUN_14072d42a(param_1 + 0x45e,0);
  }
  cVar4 = FUN_144904448(param_1 + 0x461);
  if (cVar4 != '\0') {
    FUN_14072d42a(param_1 + 0x461,0);
  }
  lVar10 = DAT_14cb259f8;
  if ((DAT_14cb259f8 != 0) && (*(longlong *)(DAT_14cb259f8 + 0xa0) != 0)) {
    if (*(char *)((longlong)param_1 + 0x23b9) == '\x01') {
      lVar15 = *(longlong *)(lVar7 + 0x108);
      if (lVar15 == 0) {
        uVar12 = FUN_140067708();
        lVar15 = FUN_14477b664(uVar12);
        *(longlong *)(lVar7 + 0x108) = lVar15;
      }
      if (*(longlong *)(lVar7 + 0x110) == 0) {
        if ((lVar15 != 0) && (*(longlong *)(lVar7 + 0x100) != 0)) {
          plVar8 = *(longlong **)(lVar15 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
            *(undefined8 *)(lVar7 + 0x110) = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar15 = FUN_144aff482(uVar12,(longlong *)(lVar7 + 0x100));
            *(longlong *)(lVar7 + 0x110) = lVar15;
            if (lVar15 != 0) goto LAB_1442010e6;
          }
        }
        if ((*(char *)(lVar7 + 0xf0) != '\x01') || (*(longlong *)(lVar7 + 0xf4) == 0))
        goto LAB_144201276;
      }
LAB_1442010e6:
      lVar7 = lVar7 + 0xf0;
      uVar12 = *(undefined8 *)(lVar10 + 0xa0);
      puVar14 = local_b8;
    }
    else {
LAB_144201276:
      lVar15 = *(longlong *)(lVar7 + 0xd8);
      if (lVar15 == 0) {
        uVar12 = FUN_140067708();
        lVar15 = FUN_14477b664(uVar12);
        *(longlong *)(lVar7 + 0xd8) = lVar15;
      }
      if (*(longlong *)(lVar7 + 0xe0) == 0) {
        if ((lVar15 != 0) && (*(longlong *)(lVar7 + 0xd0) != 0)) {
          plVar8 = *(longlong **)(lVar15 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
            *(undefined8 *)(lVar7 + 0xe0) = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar15 = FUN_144aff482(uVar12,(longlong *)(lVar7 + 0xd0));
            *(longlong *)(lVar7 + 0xe0) = lVar15;
            if (lVar15 != 0) goto LAB_144201294;
          }
        }
        if ((*(char *)(lVar7 + 0xc0) != '\x01') || (*(longlong *)(lVar7 + 0xc4) == 0))
        goto LAB_1442012f9;
      }
LAB_144201294:
      lVar7 = lVar7 + 0xc0;
      uVar12 = *(undefined8 *)(lVar10 + 0xa0);
      puVar14 = local_c8;
    }
    *puVar14 = 0;
    puVar14[1] = 0;
    uVar11 = FUN_140206ee8(lVar7);
    local_e8 = 0;
    FUN_14084a448(uVar12,&local_88,uVar11,param_1);
    *(LARGE_INTEGER *)(param_1 + 0x45e) = local_88;
    param_1[0x45f] = CONCAT62(uStack_7e,CONCAT11(bStack_7f,local_80));
    param_1[0x460] = (longlong)local_78;
  }
LAB_1442012f9:
  if (param_1[0x1e9] != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x70);
    if (lVar7 == 0) {
      uVar12 = FUN_1407f787c();
      lVar7 = FUN_14477b664(uVar12);
      *(longlong *)(lVar6 + 0x70) = lVar7;
    }
    lVar10 = *(longlong *)(lVar6 + 0x68);
    if (*(longlong *)(lVar6 + 0x78) == 0) {
      if (lVar7 != 0 && lVar10 != 0) {
        plVar8 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
          *(undefined8 *)(lVar6 + 0x78) = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar7 = FUN_144aff482(uVar12,lVar6 + 0x68);
          *(longlong *)(lVar6 + 0x78) = lVar7;
          if (lVar7 != 0) {
            lVar10 = *(longlong *)(lVar6 + 0x68);
            lVar7 = *(longlong *)(lVar6 + 0x70);
            goto LAB_14420132f;
          }
        }
      }
    }
    else {
LAB_14420132f:
      uVar17 = *(undefined4 *)(lVar6 + 0x80);
      local_d8 = 0;
      uStack_d0 = 0;
      local_e0 = lVar10;
      uVar12 = FUN_14477b664(lVar7);
      local_d8 = FUN_14477b664(uVar12);
      uStack_d0 = *(undefined8 *)(lVar6 + 0x78);
      local_e8 = uVar17;
      FUN_1414c1656(param_1[0x1e9],param_1[0x1e9],&local_e0,0x3f800000);
    }
    if (*(char *)(param_1[0x1e9] + 0x73eb) == '\x02') {
      uVar12 = FUN_1447210f0(param_1);
      FUN_1410d53f0(&local_88,uVar12);
      plVar8 = (longlong *)CONCAT62(uStack_7e,CONCAT11(bStack_7f,local_80));
      if (plVar8 == (longlong *)0x0) {
LAB_144201669:
        LVar9.QuadPart = 0;
      }
      else {
        iVar5 = (int)plVar8[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)plVar8[1];
          bVar16 = iVar5 == iVar3;
          if (bVar16) {
            *(int *)(plVar8 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar16);
        plVar2 = (longlong *)CONCAT62(uStack_7e,CONCAT11(bStack_7f,local_80));
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
        if (plVar8 == (longlong *)0x0) goto LAB_144201669;
        if (local_88.QuadPart == 0) {
          LVar9.QuadPart = 0;
        }
        else {
          LVar9.QuadPart = FUN_141446784(local_88.QuadPart,param_1 + 0x46e);
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
      local_88 = LVar9;
      FUN_1447cd2ec(param_1[0x1e9] + 0x7310);
    }
  }
  FUN_140e19a28(param_1,0xbf800000);
LAB_1442016b8:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14420171c FUN_14420171c body=144 status=ok
// SIG undefined FUN_14420171c(void)

void FUN_14420171c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xf40);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1 + 0x6e;
    if ((longlong *)plVar1[0x70] != (longlong *)0x0) {
      plVar2 = (longlong *)plVar1[0x70];
    }
    if ((longlong)(int)plVar1[0x71] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)((longlong)plVar2 + lVar3) == DAT_14cbd0838) {
          FUN_1400bc8c2(plVar1 + 0x6d,&DAT_14cbd0838);
          if (-1 < (char)plVar1[0xc] != (bool)(char)plVar1[0x6d]) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001442017a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x608))(plVar1);
          return;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)plVar1[0x71] * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 1442017ac FUN_1442017ac body=621 status=ok
// SIG undefined FUN_1442017ac(void)

double * FUN_1442017ac(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double _X;
  double _X_00;
  double _X_01;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
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
  code *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(longlong *)(param_1 + 0xf40) == 0) {
    if (((*(longlong *)(param_1 + 0x2370) == 0) || (0xfffffffd < *(int *)(param_1 + 0x2378) - 1U))
       && (*(char *)(param_1 + 0x2368) == '\0')) {
      pcVar7 = (char *)(param_1 + 0x23b8);
      goto LAB_1442017fc;
    }
  }
  else {
    pcVar7 = (char *)(*(longlong *)(param_1 + 0xf40) + 0x1990);
LAB_1442017fc:
    if (*pcVar7 != '\x01') goto LAB_144201869;
  }
  lVar8 = *(longlong *)(param_1 + 0x398);
  if (lVar8 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_80 = &local_60;
      local_60 = FUN_141030f22;
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
      lVar8 = *(longlong *)(param_1 + 0x398);
      if (lVar8 == 0) goto LAB_144201869;
    }
    if (((DAT_14cbae3d8 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x10), lVar3 != 0)) &&
       ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         == DAT_14cbae3d8 + 0x30)))) {
      FUN_1405a77a8(lVar8,&local_60);
      pcVar4 = local_60;
      if (((local_60 != (code *)0x0) &&
          (cVar5 = (**(code **)(*(longlong *)local_60 + 0x58))(local_60), cVar5 != '\0')) &&
         ((lVar8 = *(longlong *)(pcVar4 + 0x78), lVar8 != 0 && (*(char *)(lVar8 + 0x28) == '\x01')))
         ) {
        _X = *(double *)(lVar8 + 0x10);
        _X_00 = *(double *)(lVar8 + 0x18);
        _X_01 = *(double *)(lVar8 + 0x20);
        iVar6 = _finite(_X);
        if (((iVar6 != 0) && (iVar6 = _finite(_X_00), iVar6 != 0)) &&
           (iVar6 = _finite(_X_01), iVar6 != 0)) {
          *param_2 = _X;
          param_2[1] = _X_00;
          param_2[2] = _X_01;
          *(undefined1 *)(param_2 + 3) = 1;
        }
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
  }
LAB_144201869:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144201a1a FUN_144201a1a body=65 status=ok
// SIG undefined FUN_144201a1a(void)

ulonglong FUN_144201a1a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xf40);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x1990));
  }
  if ((*(longlong *)(param_1 + 0x2370) == 0) ||
     (uVar2 = 1, 0xfffffffd < *(int *)(param_1 + 0x2378) - 1U)) {
    if (*(char *)(param_1 + 0x2368) != '\0') {
      return 1;
    }
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x23b8);
  }
  return uVar2;
}



// FUNCTION 144201a5c FUN_144201a5c body=592 status=ok
// SIG undefined FUN_144201a5c(void)

void FUN_144201a5c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  int local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + 0xec8) != 0) && (*(longlong *)(param_1 + 0xed0) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0xed0) + 8))) goto LAB_144201c1b;
  uVar5 = FUN_1401cb356();
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar4 = local_70;
  local_68 = 3;
  *local_70 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_70[2] = lVar6;
  *local_70 = &PTR_FUN_14b996f20;
  local_70[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_70 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar7;
  puVar4[4] = param_1;
  local_78 = param_2;
  FUN_1405f67fc(uVar5,&local_60,&local_70,L"AOakPlayerController.StartFakeTeleportScreenEffect");
  *(undefined8 *)(param_1 + 0xec8) = local_60;
  local_60 = 0;
  plVar3 = *(longlong **)(param_1 + 0xed0);
  *(longlong **)(param_1 + 0xed0) = local_58;
  local_58 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if (local_68 == 0) {
LAB_144201c07:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_144201c07;
  }
  FUN_144200b2a(param_1,1);
LAB_144201c1b:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144201cae FUN_144201cae body=2107 status=ok
// SIG undefined FUN_144201cae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144201cae(code **param_1,double *param_2,double *param_3,longlong param_4,
                       undefined1 param_5)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double *pdVar6;
  code *pcVar7;
  char cVar8;
  uint uVar9;
  DWORD DVar10;
  double *pdVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  code **ppcVar20;
  ulonglong unaff_RBP;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  double local_b0;
  double dStack_a8;
  double *local_a0;
  code *local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  pcVar1 = param_1[0x7a];
  if (pcVar1 != (code *)0x0) {
    lVar14 = *(longlong *)(pcVar1 + 0x1c8);
    if (lVar14 == 0) {
      pdVar11 = (double *)&DAT_14c8464e0;
      dVar34 = DAT_14c8464f0;
    }
    else {
      pdVar11 = (double *)(lVar14 + 0x260);
      dVar34 = *(double *)(lVar14 + 0x270);
    }
    if ((9.999999747378752e-05 < ABS(*param_2 - *pdVar11)) ||
       (9.999999747378752e-05 < ABS(param_2[1] - pdVar11[1]))) {
      unaff_RBP = 0;
    }
    else {
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),ABS(param_2[2] - dVar34) <= 9.999999747378752e-05)
      ;
    }
    ppcVar20 = param_1;
    pdVar6 = DAT_14c846508;
    dVar34 = DAT_14c8464f8;
    dVar35 = DAT_14c846500;
    if (lVar14 != 0) {
      pcVar7 = *(code **)(lVar14 + 0x240);
      dVar34 = *(double *)(lVar14 + 0x248);
      dVar35 = *(double *)(lVar14 + 0x250);
      dVar2 = *(double *)(lVar14 + 600);
      pdVar16 = *(double **)(lVar14 + 0x228);
      local_98 = pcVar7;
      dStack_90 = dVar34;
      local_88 = dVar35;
      dStack_80 = dVar2;
      if (pdVar16 == (double *)0x0) {
        ppcVar20 = (code **)&DAT_00000040;
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar3 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar3;
        dVar3 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar3;
        dVar3 = DAT_14c846500;
        pdVar16[4] = DAT_14c8464f8;
        pdVar16[5] = dVar3;
        pdVar11 = DAT_14c846508;
        pdVar16[6] = (double)DAT_14c846508;
        *(double **)(lVar14 + 0x228) = pdVar16;
      }
      auVar23._8_4_ = (int)-(ulonglong)(dVar34 != pdVar16[1]);
      auVar23._0_8_ = -(ulonglong)((double)pcVar7 != *pdVar16);
      auVar23._12_4_ = (int)(-(ulonglong)(dVar34 != pdVar16[1]) >> 0x20);
      uVar9 = movmskpd((int)pdVar11,auVar23);
      auVar30._8_4_ = (int)-(ulonglong)(dVar2 != pdVar16[3]);
      auVar30._0_8_ = -(ulonglong)(dVar35 != pdVar16[2]);
      auVar30._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar16[3]) >> 0x20);
      iVar17 = movmskpd((int)ppcVar20,auVar30);
      uVar18 = iVar17 << 2 | uVar9;
      ppcVar20 = (code **)(ulonglong)uVar18;
      pdVar11 = (double *)(ulonglong)uVar9;
      if (uVar18 != 0) {
        ppcVar20 = &local_98;
        pdVar16[2] = local_88;
        pdVar16[3] = dStack_80;
        *pdVar16 = (double)local_98;
        pdVar16[1] = dStack_90;
        FUN_1448052ee(ppcVar20,&local_b0);
        pdVar16[6] = (double)local_a0;
        pdVar16[4] = local_b0;
        pdVar16[5] = dStack_a8;
        pdVar11 = local_a0;
      }
      pdVar6 = (double *)pdVar16[6];
      dVar34 = pdVar16[4];
      dVar35 = pdVar16[5];
    }
    dVar2 = (double)DAT_1499387d0;
    dVar3 = DAT_1499387d0._8_8_;
    auVar22._8_8_ = param_3[1] - dVar35;
    auVar22._0_8_ = *param_3 - dVar34;
    auVar23 = divpd(auVar22,_DAT_1499387d0);
    auVar29._0_8_ = (param_3[2] - (double)pdVar6) / 360.0;
    auVar29._8_8_ = 0;
    auVar23 = roundpd(auVar23,auVar23,3);
    auVar30 = roundpd(auVar29,auVar29,3);
    auVar36._0_8_ = (param_3[2] - (double)pdVar6) - auVar30._0_8_ * dVar2;
    auVar36._8_8_ = 0.0 - auVar30._8_8_ * dVar3;
    dVar34 = (*param_3 - dVar34) - auVar23._0_8_ * dVar2;
    dVar35 = (param_3[1] - dVar35) - auVar23._8_8_ * dVar3;
    auVar33._0_8_ = dVar34 + dVar2;
    auVar33._8_8_ = dVar35 + dVar3;
    auVar32._0_8_ = dVar2 + auVar36._0_8_;
    auVar32._8_8_ = dVar3 + auVar36._8_8_;
    auVar24._8_8_ = -(ulonglong)(0.0 <= dVar35);
    auVar24._0_8_ = -(ulonglong)(0.0 <= dVar34);
    auVar4._8_8_ = dVar35;
    auVar4._0_8_ = dVar34;
    auVar30 = blendvpd(auVar33,auVar4,auVar24);
    auVar25._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
    auVar25._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
    auVar23 = blendvpd(auVar32,auVar36,auVar25);
    auVar37._0_8_ = auVar30._0_8_ + -360.0;
    auVar37._8_8_ = auVar30._8_8_ + -360.0;
    auVar26._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
    auVar26._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
    auVar30 = blendvpd(auVar30,auVar37,auVar26);
    auVar27._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
    auVar27._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
    auVar5._8_8_ = auVar23._8_8_ + -360.0;
    auVar5._0_8_ = auVar23._0_8_ + -360.0;
    auVar23 = blendvpd(auVar23,auVar5,auVar27);
    auVar31._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._8_8_));
    auVar31._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._0_8_));
    iVar17 = movmskpd((int)pdVar11,auVar31);
    auVar28._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._8_8_));
    auVar28._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._0_8_));
    uVar9 = movmskpd((int)ppcVar20,auVar28);
    if (((byte)unaff_RBP & ((uVar9 & 0x3fffffff) == 0 && iVar17 == 0)) == 0) {
      local_118 = CONCAT31(local_118._1_3_,param_5);
      unaff_RBP = 0;
      cVar8 = (**(code **)(*(longlong *)pcVar1 + 0x4d0))(pcVar1,param_2,param_3,0);
      if (cVar8 == '\0') goto LAB_1442022cc;
    }
  }
  lVar15 = DAT_14cbd07e8;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar14 + 0xc60);
  if (iVar17 == 0x40000002) {
    uVar19 = 0;
  }
  else {
    bVar21 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar17 != 2)) {
      if (iVar17 == 1) {
        uVar9 = FUN_140ad26c0();
        unaff_RBP = (ulonglong)uVar9;
        DVar10 = GetCurrentThreadId();
        bVar21 = uVar9 == DVar10;
      }
      else {
        bVar21 = false;
      }
    }
    uVar19 = (ulonglong)(bVar21 ^ 1);
  }
  if (*(int *)(lVar15 + uVar19 * 4) != 0) {
    pcVar1 = param_1[0x141];
    if (pcVar1 == (code *)0x0) {
LAB_144201ff9:
      lVar15 = 0;
    }
    else {
      if (DAT_14cba8288 == 0) {
        local_e0 = &local_98;
        local_98 = FUN_141864c34;
        local_d0 = FUN_14081d0ea;
        local_d8 = &LAB_1464cee30;
        local_e8 = &LAB_148bfac22;
        local_f0 = &LAB_140f21842;
        local_f8 = &DAT_149e063b2;
        local_100 = 0;
        local_108 = 0x10000004;
        local_110 = 0x10;
        local_118 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(*(longlong *)(pcVar1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
      goto LAB_144201ff9;
      lVar15 = FUN_1447210f0(pcVar1);
    }
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar12 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VolumetricCloud",1);
    if (plVar12 != (longlong *)0x0) {
      if (lVar15 == 0) {
        unaff_RBP = 1;
      }
      else {
        local_b0 = *(double *)(lVar15 + 0x18);
        FUN_1400021e4(&local_b0,&local_98);
        local_110 = 0xffffffff;
        local_118 = 0;
        iVar17 = FUN_1447ee042(&local_98,L"World_P",7,1);
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
        unaff_RBP = (ulonglong)(iVar17 == -1);
      }
      uVar9 = (**(code **)(*plVar12 + 0x18))(plVar12);
      FUN_140635eb8(plVar12,unaff_RBP,uVar9 & 0xff000000,0);
    }
  }
  lVar15 = DAT_14cbd0800;
  iVar17 = *(int *)(lVar14 + 0xc60);
  if (((iVar17 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar17 == 2)) {
    uVar19 = 0;
  }
  else if (iVar17 == 1) {
    uVar9 = FUN_140ad26c0();
    unaff_RBP = (ulonglong)uVar9;
    DVar10 = GetCurrentThreadId();
    uVar19 = (ulonglong)(uVar9 != DVar10);
  }
  else {
    uVar19 = 1;
  }
  if (*(int *)(lVar15 + uVar19 * 4) != 0) {
    pcVar1 = param_1[0x141];
    if (pcVar1 == (code *)0x0) {
LAB_14420213a:
      lVar14 = 0;
    }
    else {
      if (DAT_14cba8288 == 0) {
        local_e0 = &local_98;
        local_98 = FUN_141864c34;
        local_d0 = FUN_14081d0ea;
        local_d8 = &LAB_1464cee30;
        local_e8 = &LAB_148bfac22;
        local_f0 = &LAB_140f21842;
        local_f8 = &DAT_149e063b2;
        local_100 = 0;
        local_108 = 0x10000004;
        local_110 = 0x10;
        local_118 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(*(longlong *)(pcVar1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
      goto LAB_14420213a;
      lVar14 = FUN_1447210f0(pcVar1);
    }
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar12 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VolumetricFog",1);
    if (plVar12 != (longlong *)0x0) {
      if (lVar14 == 0) {
        unaff_RBP = 1;
      }
      else {
        local_b0 = *(double *)(lVar14 + 0x18);
        FUN_1400021e4(&local_b0,&local_98);
        local_110 = 0xffffffff;
        local_118 = 0;
        iVar17 = FUN_1447ee042(&local_98,L"World_P",7,1);
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
        unaff_RBP = (ulonglong)(iVar17 == -1);
      }
      uVar9 = (**(code **)(*plVar12 + 0x18))(plVar12);
      FUN_140635eb8(plVar12,unaff_RBP,uVar9 & 0xff000000,0);
    }
  }
  local_88 = param_3[2];
  local_98 = (code *)*param_3;
  dStack_90 = param_3[1];
  dStack_80 = (double)CONCAT71(dStack_80._1_7_,1);
  uVar13 = FUN_14477b072(param_1,DAT_14cad39e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar13,&local_98);
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  (**(code **)(*param_1 + 0x688))(param_1,param_3,1);
  if ((param_4 != 0) && (lVar14 = (**(code **)(*param_1 + 0x6b8))(param_1), lVar14 != param_4)) {
    if ((*(char *)(param_1 + 0x477) != '\0') ||
       (local_c0 = 0, *(char *)((longlong)param_1 + 0x23bd) == '\x01')) {
      lVar14 = FUN_140cb9f34();
      local_c0 = *(undefined4 *)(lVar14 + 0x130);
    }
    local_bc = 1;
    local_b8 = 0x40000000;
    (**(code **)(*param_1 + 0xe38))(param_1,param_4);
  }
  if (*(char *)(param_1 + 0x477) == '\x01') {
    FUN_140e19a28(param_1,0);
  }
LAB_1442022cc:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1442024fb FUN_1442024fb body=49 status=ok
// SIG undefined FUN_1442024fb(void)

void FUN_1442024fb(void)

{
  FUN_144760e21(DAT_14cbd08e0,DAT_14cbd08e8);
  if (DAT_14cbd08e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14420252c FUN_14420252c body=59 status=ok
// SIG undefined FUN_14420252c(void)

void FUN_14420252c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbd0900;
  if (DAT_14cbd0900 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbd0900 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014420255c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14420256c FUN_14420256c body=29 status=ok
// SIG undefined FUN_14420256c(void)

undefined8 FUN_14420256c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14420259e FUN_14420259e body=101 status=ok
// SIG undefined FUN_14420259e(void)

void FUN_14420259e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b996870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144202604 FUN_144202604 body=101 status=ok
// SIG undefined FUN_144202604(void)

void FUN_144202604(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b996870;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14420266a FUN_14420266a body=134 status=ok
// SIG undefined FUN_14420266a(void)

void FUN_14420266a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996870;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442026e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144202752 FUN_144202752 body=108 status=ok
// SIG undefined FUN_144202752(void)

undefined8 FUN_144202752(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1442027a7;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_1442027a7;
    }
  }
  uVar2 = 0;
LAB_1442027a7:
  FUN_145c34e64(*(undefined8 *)(param_1 + 0x18),uVar2,2,param_1 + 0x20);
  return 1;
}



// FUNCTION 144202864 FUN_144202864 body=255 status=ok
// SIG undefined FUN_144202864(void)

void FUN_144202864(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_1403ca102(*param_1);
  if (plVar2 != (longlong *)0x0) {
    local_78 = (void *)0x0;
    local_70 = *(int *)((undefined8 *)param_1[2] + 1);
    lVar3 = (longlong)local_70;
    _Src = *(void **)param_1[2];
    if (lVar3 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar3 * 2);
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"character",0);
    uVar1 = (**(code **)(*plVar2 + 0x4b0))(plVar2,&local_68,param_2,&local_78);
    *(undefined1 *)param_1[1] = uVar1;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144202996 FUN_144202996 body=29 status=ok
// SIG undefined FUN_144202996(void)

undefined8 FUN_144202996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442029b4 FUN_1442029b4 body=41 status=ok
// SIG undefined FUN_1442029b4(void)

void FUN_1442029b4(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x750))(plVar1);
  FUN_1461a6882(plVar1,param_2);
  return;
}



// FUNCTION 144202a08 FUN_144202a08 body=29 status=ok
// SIG undefined FUN_144202a08(void)

undefined8 FUN_144202a08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144202a26 FUN_144202a26 body=29 status=ok
// SIG undefined FUN_144202a26(void)

undefined8 FUN_144202a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144202bc2 FUN_144202bc2 body=101 status=ok
// SIG undefined FUN_144202bc2(void)

void FUN_144202bc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144202c28 FUN_144202c28 body=101 status=ok
// SIG undefined FUN_144202c28(void)

void FUN_144202c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996a20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144202c8e FUN_144202c8e body=134 status=ok
// SIG undefined FUN_144202c8e(void)

void FUN_144202c8e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996a20;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144202d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144202d24 FUN_144202d24 body=273 status=ok
// SIG undefined FUN_144202d24(void)

undefined8 FUN_144202d24(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144202e2f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144202e2f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144202e2f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144202de3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441fb3d4(*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
      uVar6 = 1;
      goto LAB_144202de3;
    }
  }
  uVar6 = 0;
LAB_144202de3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144202e58 FUN_144202e58 body=12 status=ok
// SIG undefined FUN_144202e58(void)

void FUN_144202e58(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144202e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144202e64 FUN_144202e64 body=29 status=ok
// SIG undefined FUN_144202e64(void)

undefined8 FUN_144202e64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144202e82 FUN_144202e82 body=29 status=ok
// SIG undefined FUN_144202e82(void)

undefined8 FUN_144202e82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14420301e FUN_14420301e body=93 status=ok
// SIG undefined FUN_14420301e(void)

void FUN_14420301e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14420307c FUN_14420307c body=93 status=ok
// SIG undefined FUN_14420307c(void)

void FUN_14420307c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996b20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442030da FUN_1442030da body=126 status=ok
// SIG undefined FUN_1442030da(void)

void FUN_1442030da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996b20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144203149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144203166 FUN_144203166 body=281 status=ok
// SIG undefined FUN_144203166(void)

bool FUN_144203166(longlong param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144203279;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144203279;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144203279:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14420322c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      bVar6 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
      if ((param_2 & bVar6) == 1) {
        FUN_14579c844(*(undefined8 *)(param_1 + 0x20));
        bVar6 = true;
      }
      goto LAB_14420322c;
    }
  }
  bVar6 = false;
LAB_14420322c:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144203280 FUN_144203280 body=31 status=ok
// SIG undefined FUN_144203280(void)

undefined8 FUN_144203280(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442032ee FUN_1442032ee body=355 status=ok
// SIG undefined FUN_1442032ee(void)

void FUN_1442032ee(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_7c [4];
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_2 + 0xf8) != -1) && (*(longlong *)(param_2 + 8) != 0)) {
    if ((longlong)*(int *)(param_2 + 0x20) != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar7) == 0) goto LAB_14420341a;
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar7);
    }
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    FUN_14009b010(&local_98,3,0);
    cVar6 = FUN_1441fe5fe(&local_98,param_2);
    if (cVar6 != '\0') {
      uVar3 = *param_1;
      puVar4 = (undefined8 *)param_1[2];
      local_a8 = *(undefined4 *)puVar4;
      uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
      local_78 = (undefined8 *)*puVar4;
      uStack_a0 = *(undefined4 *)(puVar4 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
      puStack_70 = (undefined8 *)puVar4[1];
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_14097ba34(&local_68,&local_78,*(int *)param_1[1] + 1);
      local_78 = &local_68;
      puStack_70 = &local_98;
      FUN_140744482(uVar3,local_7c,&local_78,0);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      *(int *)param_1[1] = *(int *)param_1[1] + 1;
    }
    plVar5 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
LAB_14420341a:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144203484 FUN_144203484 body=29 status=ok
// SIG undefined FUN_144203484(void)

undefined8 FUN_144203484(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442034a2 FUN_1442034a2 body=67 status=ok
// SIG undefined FUN_1442034a2(void)

void FUN_1442034a2(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x12f8);
  *(uint *)(lVar3 + 0x12f8) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x12fc) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 0x12f0),iVar2);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0x12f0) + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 144203510 FUN_144203510 body=29 status=ok
// SIG undefined FUN_144203510(void)

undefined8 FUN_144203510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14420352e FUN_14420352e body=29 status=ok
// SIG undefined FUN_14420352e(void)

undefined8 FUN_14420352e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144203560 FUN_144203560 body=85 status=ok
// SIG undefined FUN_144203560(void)

void FUN_144203560(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996d90;
  return;
}



// FUNCTION 1442035b6 FUN_1442035b6 body=85 status=ok
// SIG undefined FUN_1442035b6(void)

void FUN_1442035b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996d90;
  return;
}



// FUNCTION 14420360c FUN_14420360c body=118 status=ok
// SIG undefined FUN_14420360c(void)

void FUN_14420360c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b996d90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144203673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144203682 FUN_144203682 body=105 status=ok
// SIG undefined FUN_144203682(void)

void FUN_144203682(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined4 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (**(code **)(*param_2 + 0xb0))(param_2);
  local_38 = 0;
  local_28 = &PTR_LAB_14b996e00;
  local_48 = FUN_144203758;
  FUN_1407461b0(1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442036ec FUN_1442036ec body=107 status=ok
// SIG undefined FUN_1442036ec(void)

undefined8 FUN_1442036ec(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined4 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (**(code **)(*param_2 + 0xb0))(param_2);
  local_38 = 0;
  local_28 = &PTR_LAB_14b996e00;
  local_48 = FUN_144203758;
  FUN_1407461b0(1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144203758 FUN_144203758 body=336 status=ok
// SIG undefined FUN_144203758(void)

void FUN_144203758(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
    puVar4 = *(undefined8 **)(DAT_14cb0d2b0 + 0x1148);
    puVar1 = puVar4 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    lVar6 = 0;
LAB_14420379e:
    do {
      if (lVar6 == 0) {
        if (*(char *)*puVar4 != '\x01') {
          puVar4 = puVar4 + 1;
          lVar6 = 0;
          if (puVar4 == puVar1) goto LAB_14420388a;
          goto LAB_14420379e;
        }
        lVar6 = *(longlong *)((char *)*puVar4 + 0x360);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
    if (lVar6 != 0) {
      local_28 = *(undefined8 *)(lVar6 + 0x18);
      FUN_1400021e4(&local_28,local_38);
      local_40 = 0xffffffff;
      local_48 = 0;
      iVar2 = FUN_1447ee042(local_38,L"World_P",7,1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if (iVar2 != -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar5 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VolumetricCloud",1);
        if (plVar5 != (longlong *)0x0) {
          iVar2 = *param_1;
          uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
          FUN_140635eb8(plVar5,iVar2 == 0,uVar3 & 0xff000000,0);
        }
      }
    }
  }
LAB_14420388a:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442038c0 FUN_1442038c0 body=29 status=ok
// SIG undefined FUN_1442038c0(void)

undefined8 FUN_1442038c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442038de FUN_1442038de body=29 status=ok
// SIG undefined FUN_1442038de(void)

undefined8 FUN_1442038de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144203910 FUN_144203910 body=85 status=ok
// SIG undefined FUN_144203910(void)

void FUN_144203910(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996e20;
  return;
}



// FUNCTION 144203966 FUN_144203966 body=85 status=ok
// SIG undefined FUN_144203966(void)

void FUN_144203966(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996e20;
  return;
}



// FUNCTION 1442039bc FUN_1442039bc body=118 status=ok
// SIG undefined FUN_1442039bc(void)

void FUN_1442039bc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b996e20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144203a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144203a32 FUN_144203a32 body=105 status=ok
// SIG undefined FUN_144203a32(void)

void FUN_144203a32(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined4 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (**(code **)(*param_2 + 0xb0))(param_2);
  local_38 = 0;
  local_28 = &PTR_LAB_14b996e90;
  local_48 = FUN_144203b08;
  FUN_1407461b0(1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144203a9c FUN_144203a9c body=107 status=ok
// SIG undefined FUN_144203a9c(void)

undefined8 FUN_144203a9c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined4 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = (**(code **)(*param_2 + 0xb0))(param_2);
  local_38 = 0;
  local_28 = &PTR_LAB_14b996e90;
  local_48 = FUN_144203b08;
  FUN_1407461b0(1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144203b08 FUN_144203b08 body=336 status=ok
// SIG undefined FUN_144203b08(void)

void FUN_144203b08(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
    puVar4 = *(undefined8 **)(DAT_14cb0d2b0 + 0x1148);
    puVar1 = puVar4 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    lVar6 = 0;
LAB_144203b4e:
    do {
      if (lVar6 == 0) {
        if (*(char *)*puVar4 != '\x01') {
          puVar4 = puVar4 + 1;
          lVar6 = 0;
          if (puVar4 == puVar1) goto LAB_144203c3a;
          goto LAB_144203b4e;
        }
        lVar6 = *(longlong *)((char *)*puVar4 + 0x360);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
    if (lVar6 != 0) {
      local_28 = *(undefined8 *)(lVar6 + 0x18);
      FUN_1400021e4(&local_28,local_38);
      local_40 = 0xffffffff;
      local_48 = 0;
      iVar2 = FUN_1447ee042(local_38,L"World_P",7,1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if (iVar2 != -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VolumetricFog",1)
        ;
        if (plVar5 != (longlong *)0x0) {
          iVar2 = *param_1;
          uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
          FUN_140635eb8(plVar5,iVar2 == 0,uVar3 & 0xff000000,0);
        }
      }
    }
  }
LAB_144203c3a:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144203c70 FUN_144203c70 body=29 status=ok
// SIG undefined FUN_144203c70(void)

undefined8 FUN_144203c70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144203c8e FUN_144203c8e body=162 status=ok
// SIG undefined FUN_144203c8e(void)

void FUN_144203c8e(longlong *param_1,undefined8 param_2)

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
        goto LAB_144203d1b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_144203d1b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 144203d7e FUN_144203d7e body=29 status=ok
// SIG undefined FUN_144203d7e(void)

undefined8 FUN_144203d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144203f1a FUN_144203f1a body=93 status=ok
// SIG undefined FUN_144203f1a(void)

void FUN_144203f1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996f20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144203f78 FUN_144203f78 body=93 status=ok
// SIG undefined FUN_144203f78(void)

void FUN_144203f78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996f20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144203fd6 FUN_144203fd6 body=126 status=ok
// SIG undefined FUN_144203fd6(void)

void FUN_144203fd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996f20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144204045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144204054 FUN_144204054 body=20 status=ok
// SIG undefined FUN_144204054(void)

undefined8 FUN_144204054(longlong param_1)

{
  FUN_144204176(param_1 + 0x20);
  return 0;
}



// FUNCTION 144204068 FUN_144204068 body=269 status=ok
// SIG undefined FUN_144204068(void)

undefined8 FUN_144204068(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14420416f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14420416f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14420416f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144204123;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144204176(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144204123;
    }
  }
  uVar6 = 0;
LAB_144204123:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144204176 FUN_144204176 body=212 status=ok
// SIG undefined FUN_144204176(void)

void FUN_144204176(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0xec8) = 0;
  plVar3 = *(longlong **)(lVar2 + 0xed0);
  *(undefined8 *)(lVar2 + 0xed0) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  cVar4 = FUN_140e19c60(lVar2);
  if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_1446f470e(&local_20,&DAT_149e01fe8,1);
  if ((*(longlong *)(lVar2 + 0x2370) != local_20) || (*(int *)(lVar2 + 0x2378) != 0x6000)) {
    *(longlong *)(lVar2 + 0x2370) = local_20;
    *(undefined4 *)(lVar2 + 0x2378) = 0x6000;
    *(undefined8 *)(lVar2 + 0x2380) = 0;
  }
  FUN_140e19a28(lVar2,0x3f800000);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14420425a FUN_14420425a body=29 status=ok
// SIG undefined FUN_14420425a(void)

undefined8 FUN_14420425a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442043f6 FUN_1442043f6 body=93 status=ok
// SIG undefined FUN_1442043f6(void)

void FUN_1442043f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144204454 FUN_144204454 body=93 status=ok
// SIG undefined FUN_144204454(void)

void FUN_144204454(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b996f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442044b2 FUN_1442044b2 body=126 status=ok
// SIG undefined FUN_1442044b2(void)

void FUN_1442044b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b996f90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144204521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144204540 FUN_144204540 body=286 status=ok
// SIG undefined FUN_144204540(void)

bool FUN_144204540(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144204658;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144204658;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144204658:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14420460b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar2 = *(uint *)(lVar5 + 8) & 0x10200000;
      bVar6 = uVar2 == 0;
      if ((param_2 != 0) && (uVar2 == 0)) {
        FUN_140ce0a68(*(undefined8 *)(param_1 + 0x20),param_2);
        bVar6 = true;
      }
      goto LAB_14420460b;
    }
  }
  bVar6 = false;
LAB_14420460b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144204660 FUN_144204660 body=29 status=ok
// SIG undefined FUN_144204660(void)

undefined8 FUN_144204660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442047fc FUN_1442047fc body=93 status=ok
// SIG undefined FUN_1442047fc(void)

void FUN_1442047fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b997000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14420485a FUN_14420485a body=93 status=ok
// SIG undefined FUN_14420485a(void)

void FUN_14420485a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b997000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442048b8 FUN_1442048b8 body=126 status=ok
// SIG undefined FUN_1442048b8(void)

void FUN_1442048b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b997000;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144204927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144204946 FUN_144204946 body=286 status=ok
// SIG undefined FUN_144204946(void)

bool FUN_144204946(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144204a5e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144204a5e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144204a5e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144204a11;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar2 = *(uint *)(lVar5 + 8) & 0x10200000;
      bVar6 = uVar2 == 0;
      if ((param_2 != 0) && (uVar2 == 0)) {
        FUN_14118c510(*(undefined8 *)(param_1 + 0x20),param_2);
        bVar6 = true;
      }
      goto LAB_144204a11;
    }
  }
  bVar6 = false;
LAB_144204a11:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144204a66 FUN_144204a66 body=29 status=ok
// SIG undefined FUN_144204a66(void)

undefined8 FUN_144204a66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144204c02 FUN_144204c02 body=93 status=ok
// SIG undefined FUN_144204c02(void)

void FUN_144204c02(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b997070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144204c60 FUN_144204c60 body=93 status=ok
// SIG undefined FUN_144204c60(void)

void FUN_144204c60(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b997070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144204cbe FUN_144204cbe body=126 status=ok
// SIG undefined FUN_144204cbe(void)

void FUN_144204cbe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b997070;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144204d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144204d46 FUN_144204d46 body=266 status=ok
// SIG undefined FUN_144204d46(void)

undefined8 FUN_144204d46(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144204e4a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144204e4a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144204e4a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144204dfe;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140585aac(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144204dfe;
    }
  }
  uVar6 = 0;
LAB_144204dfe:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144204e52 FUN_144204e52 body=29 status=ok
// SIG undefined FUN_144204e52(void)

undefined8 FUN_144204e52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144204fee FUN_144204fee body=93 status=ok
// SIG undefined FUN_144204fee(void)

void FUN_144204fee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9970e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14420504c FUN_14420504c body=93 status=ok
// SIG undefined FUN_14420504c(void)

void FUN_14420504c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9970e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


