// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142aedb70 FUN_142aedb70 body=105 status=ok
// SIG undefined FUN_142aedb70(void)

void FUN_142aedb70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),0,0);
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x28) * 0x58;
    lVar2 = *(longlong *)(param_1 + 0x20) + 0x28;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
      lVar2 = lVar2 + 0x58;
      lVar1 = lVar1 + -0x58;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 142aedc30 FUN_142aedc30 body=65 status=ok
// SIG undefined FUN_142aedc30(void)

void FUN_142aedc30(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142aec8c8(*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aedc7c FUN_142aedc7c body=12 status=ok
// SIG undefined FUN_142aedc7c(void)

void FUN_142aedc7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aedc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aedc88 FUN_142aedc88 body=83 status=ok
// SIG undefined FUN_142aedc88(void)

undefined8 * FUN_142aedc88(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149fcd850;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aedcdc FUN_142aedcdc body=137 status=ok
// SIG undefined FUN_142aedcdc(void)

void FUN_142aedcdc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (*(code *)(&PTR_FUN_149fcd7f0)[*(byte *)(param_1 + 0x60)])(param_1 + 0x50);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x38);
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
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  FUN_140843826(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142aedd59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 142aedd66 FUN_142aedd66 body=29 status=ok
// SIG undefined FUN_142aedd66(void)

undefined8 FUN_142aedd66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aedd83 FUN_142aedd83 body=296 status=ok
// SIG undefined FUN_142aedd83(void)

void FUN_142aedd83(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UniversalObjectLocator",0,0,&PTR_FUN_149fcc5d0);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UniversalObjectLocator",0,0,&PTR_FUN_149fcc700);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UniversalObjectLocator",0,0,&PTR_FUN_149fcc830);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/UniversalObjectLocator",0,0,&PTR_FUN_149fcc9e0);
  FUN_14098d3d2(FUN_142aec884,L"/Script/UniversalObjectLocator",L"ELocatorResolveFlags",
                &DAT_14c99e118);
  DAT_14c99e130 = 0xff;
  DAT_14c99e131 = 0xff;
  local_48 = 0x8000000149fcc728;
  local_34 = 0x16;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1462956f4(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aedeac FUN_142aedeac body=4079 status=ok
// SIG undefined FUN_142aedeac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142aedeac(undefined8 param_1,ulonglong param_2,int param_3,longlong *param_4,
                       longlong *param_5)

{
  undefined4 *puVar1;
  void *_Src;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *param_4 + (longlong)param_3 * 0x20;
  uVar4 = *(uint *)(*param_4 + 8 + (longlong)param_3 * 0x20);
  uVar11 = 0;
  if (uVar4 != 0xffffffff) {
    uVar11 = uVar4;
  }
  if (param_3 == 0) {
    param_4[4] = param_2;
    *(undefined1 *)((longlong)param_4 + 0x34) = 1;
  }
  FUN_14105c69e(lVar6,&local_50,param_1);
  if (local_50 < 2) goto LAB_142aee79f;
  lVar5 = param_4[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_a8 = (undefined *)FUN_140342cba();
    local_a0 = FUN_1468c7f1e;
    local_b0 = 0;
    local_b8 = (longlong *)0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  iVar10 = (int)lVar5 + -1;
  cVar2 = FUN_1400164de(&local_50,&DAT_14c951a38);
  if (cVar2 == '\0') {
    if (iVar10 != param_3) {
      local_58 = 0;
      local_60 = 0;
      FUN_147029e18(&local_98,lVar6);
      bVar3 = FUN_14702bf2f(param_2,&local_98,&local_60,&local_58);
      bVar3 = local_58 != 0 & bVar3;
      if (bVar3 == 1) {
        *(undefined1 *)((longlong)param_4 + 0x34) = 0;
        param_4[5] = local_58;
        *(int *)(param_4 + 6) = param_3;
        local_b8 = param_5;
        uVar4 = FUN_1411bde97(*(undefined8 *)(local_58 + 0x10),local_58,param_3 + 1,param_4);
        param_2 = (ulonglong)uVar4;
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (bVar3 != 0) goto LAB_142aee7a2;
      goto LAB_142aee79f;
    }
LAB_142aedfb5:
    uVar4 = (**(code **)(*param_5 + 0x10))(param_5,param_2,param_4);
  }
  else {
    if (iVar10 == param_3) goto LAB_142aedfb5;
    puVar13 = *(undefined **)(local_50 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
      FUN_1446f4b16();
      local_a0 = FUN_1403a5f94;
      local_a8 = &DAT_14c951c78;
      local_b0 = 0;
      local_b8 = (longlong *)0x4018001;
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
    if (DAT_14c952430 == 0) {
      bVar16 = puVar13 != (undefined *)0x0;
      if (puVar13 != &DAT_14c952428 && bVar16) {
        do {
          puVar13 = *(undefined **)(puVar13 + 0x30);
          bVar16 = puVar13 != (undefined *)0x0;
          if (puVar13 == &DAT_14c952428) break;
        } while (puVar13 != (undefined *)0x0);
      }
      if (bVar16) goto LAB_142aee006;
LAB_142aee029:
      lVar6 = *(longlong *)(local_50 + 8);
      lVar5 = FUN_14010a2ea();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar16 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar16) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar16 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (!bVar16) goto LAB_142aee12d;
LAB_142aee049:
        *(undefined1 *)((longlong)param_4 + 0x34) = 0;
        uVar14 = *(ulonglong *)
                  ((longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34) +
                  param_2 + (longlong)*(int *)(local_50 + 0x44));
        if (uVar14 >> 0x20 != 0) {
          param_2 = 0;
          uVar4 = (uint)uVar14;
          if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_142aee7a2;
          plVar8 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8)));
          if ((plVar8 != (longlong *)0x0) &&
             ((((int)plVar8[2] == (int)(uVar14 >> 0x20) &&
               ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (lVar6 = *plVar8, lVar6 != 0)))) {
            *(undefined1 *)((longlong)param_4 + 0x34) = 0;
            goto LAB_142aee0d2;
          }
        }
      }
      else {
        if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_142aee049;
LAB_142aee12d:
        puVar13 = *(undefined **)(local_50 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9529b0) &&
           (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
          FUN_1446f4b16();
          local_a0 = FUN_140f17fc6;
          local_a8 = &DAT_14c951c78;
          local_b0 = 0;
          local_b8 = (longlong *)0x24008001;
          FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
          atexit(FUN_142818859);
          _Init_thread_footer(&DAT_14c9529b0);
        }
        if (DAT_14c952968 == 0) {
          bVar16 = puVar13 != (undefined *)0x0;
          if (puVar13 != &DAT_14c952960 && bVar16) {
            do {
              puVar13 = *(undefined **)(puVar13 + 0x30);
              bVar16 = puVar13 != (undefined *)0x0;
              if (puVar13 == &DAT_14c952960) break;
            } while (puVar13 != (undefined *)0x0);
          }
          if (!bVar16) goto LAB_142aee2b3;
LAB_142aee171:
          *(undefined1 *)((longlong)param_4 + 0x34) = 0;
          lVar5 = param_2 + (longlong)*(int *)(local_50 + 0x44);
          lVar6 = (longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34);
          local_98 = *(longlong *)(lVar6 + lVar5);
          puVar1 = (undefined4 *)(lVar6 + 8 + lVar5);
          local_90 = *puVar1;
          uStack_8c = puVar1[1];
          uStack_88 = puVar1[2];
          uStack_84 = puVar1[3];
          local_80 = (void *)0x0;
          local_78 = *(int *)(lVar6 + 0x20 + lVar5);
          lVar15 = (longlong)local_78;
          _Src = *(void **)(lVar6 + 0x18 + lVar5);
          if (lVar15 == 0) {
            iVar10 = (int)((ulonglong)local_98 >> 0x20);
            local_74 = 0;
          }
          else {
            FUN_1446dd670(&local_80,local_78,0);
            memcpy(local_80,_Src,lVar15 * 2);
            iVar10 = local_98._4_4_;
          }
          if (iVar10 == 0) {
LAB_142aee7d7:
            param_2 = 0;
          }
          else {
            param_2 = 0;
            if ((-1 < (int)(uint)local_98) && ((int)(uint)local_98 < DAT_14c9647dc)) {
              puVar9 = (ulonglong *)
                       ((ulonglong)(((uint)local_98 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_98 >> 0x10) * 8));
              if ((puVar9 == (ulonglong *)0x0) ||
                 (((int)puVar9[2] != iVar10 || ((puVar9[1] & 0x10200000) != 0))))
              goto LAB_142aee7d7;
              param_2 = *puVar9;
            }
          }
          if ((param_2 == 0) && (CONCAT44(uStack_8c,local_90) != 0)) {
            param_2 = FUN_140007850(&local_90);
            cVar2 = (*(code *)PTR_FUN_14c758760)();
            if ((param_2 == 0) || (cVar2 == '\0')) {
              if (param_2 != 0) {
                uVar4 = *(uint *)(param_2 + 0xc);
                local_98 = CONCAT44(local_98._4_4_,uVar4);
                if (DAT_14c9647dc <= (int)uVar4) goto LAB_142aee70a;
                lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                goto LAB_142aee523;
              }
              local_98 = 0;
            }
            else {
              uVar4 = *(uint *)(param_2 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8) + 8 +
                              (ulonglong)(uVar4 & 0xffff) * 0x18) & 0x8400000) == 0) {
                  local_98 = CONCAT44(local_98._4_4_,uVar4);
                  lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
LAB_142aee523:
                  iVar10 = *(int *)(lVar6 + 0x10);
                  if (*(int *)(lVar6 + 0x10) == 0) {
                    LOCK();
                    iVar10 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar16 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar10;
                    if (bVar16) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                    }
                    LOCK();
                    iVar10 = *(int *)(lVar6 + 0x10);
                    bVar16 = iVar10 == 0;
                    if (bVar16) {
                      *(int *)(lVar6 + 0x10) = iVar12;
                      iVar10 = 0;
                    }
                    UNLOCK();
                    if (bVar16) {
                      iVar10 = iVar12;
                    }
                  }
                  local_98 = CONCAT44(iVar10,(uint)local_98);
                }
              }
              else if ((_DAT_00000008 & 0x8400000) == 0) {
                local_98 = CONCAT44(local_98._4_4_,uVar4);
LAB_142aee70a:
                lVar6 = 0;
                goto LAB_142aee523;
              }
              if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) goto LAB_142aee555;
            }
LAB_142aee788:
            bVar16 = true;
          }
          else {
            if (param_2 == 0) {
              param_2 = 0;
              goto LAB_142aee788;
            }
LAB_142aee555:
            *(undefined1 *)((longlong)param_4 + 0x34) = 0;
            param_4[5] = param_2;
            *(int *)(param_4 + 6) = param_3;
            local_b8 = param_5;
            uVar4 = FUN_1411bde97(*(undefined8 *)(param_2 + 0x10),param_2,param_3 + 1,param_4);
            param_2 = (ulonglong)uVar4;
            bVar16 = false;
          }
          if (local_80 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (!bVar16) goto LAB_142aee7a2;
        }
        else {
          if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952968) != 0) goto LAB_142aee171;
LAB_142aee2b3:
          puVar13 = *(undefined **)(local_50 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_a8 = (undefined *)FUN_140342cba();
              local_a0 = FUN_1468c7f1e;
              local_b0 = 0;
              local_b8 = (longlong *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_a0 = FUN_1403a682c;
            local_a8 = &DAT_14c951a38;
            local_b0 = 0;
            local_b8 = (longlong *)0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer(&DAT_14c952a58);
          }
          if (DAT_14c952a10 != 0) {
            if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952a10) == 0) goto LAB_142aee450;
LAB_142aee2f7:
            lVar6 = (longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34) +
                    param_2 + (longlong)*(int *)(local_50 + 0x44);
            uVar7 = *(undefined8 *)(local_50 + 0x70);
LAB_142aee312:
            local_b8 = param_5;
            uVar4 = FUN_142aedeac(uVar7,lVar6,param_3 + 1,param_4);
            goto LAB_142aedfc9;
          }
          bVar16 = puVar13 != (undefined *)0x0;
          if (puVar13 != &DAT_14c952a08 && bVar16) {
            do {
              puVar13 = *(undefined **)(puVar13 + 0x30);
              bVar16 = puVar13 != (undefined *)0x0;
              if (puVar13 == &DAT_14c952a08) break;
            } while (puVar13 != (undefined *)0x0);
          }
          if (bVar16) goto LAB_142aee2f7;
LAB_142aee450:
          puVar13 = *(undefined **)(local_50 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_a8 = (undefined *)FUN_140342cba();
              local_a0 = FUN_1468c7f1e;
              local_b0 = 0;
              local_b8 = (longlong *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_a0 = FUN_140b31576;
            local_a8 = &DAT_14c951a38;
            local_b0 = 0;
            local_b8 = (longlong *)0x208001;
            FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
            atexit(FUN_14280cbf7);
            _Init_thread_footer(&DAT_14c951ae0);
          }
          if (DAT_14c951a98 == 0) {
            bVar16 = puVar13 != (undefined *)0x0;
            if (puVar13 != &DAT_14c951a90 && bVar16) {
              do {
                puVar13 = *(undefined **)(puVar13 + 0x30);
                bVar16 = puVar13 != (undefined *)0x0;
                if (puVar13 == &DAT_14c951a90) break;
              } while (puVar13 != (undefined *)0x0);
            }
            if (!bVar16) goto LAB_142aee5c4;
LAB_142aee494:
            *(undefined1 *)((longlong)param_4 + 0x34) = 0;
            lVar5 = *(longlong *)(local_50 + 0x78);
            if (lVar5 != 0) {
              puVar13 = *(undefined **)(lVar5 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952a58) &&
                 (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_a8 = (undefined *)FUN_140342cba();
                  local_a0 = FUN_1468c7f1e;
                  local_b0 = 0;
                  local_b8 = (longlong *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_a0 = FUN_1403a682c;
                local_a8 = &DAT_14c951a38;
                local_b0 = 0;
                local_b8 = (longlong *)0x108001;
                FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                atexit(FUN_142818c9e);
                _Init_thread_footer(&DAT_14c952a58);
              }
              if (DAT_14c952a10 == 0) {
                bVar16 = puVar13 != (undefined *)0x0;
                if (puVar13 != &DAT_14c952a08 && bVar16) {
                  do {
                    puVar13 = *(undefined **)(puVar13 + 0x30);
                    bVar16 = puVar13 != (undefined *)0x0;
                    if (puVar13 == &DAT_14c952a08) break;
                  } while (puVar13 != (undefined *)0x0);
                }
                if (bVar16) goto LAB_142aee746;
              }
              else if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952a10) != 0) {
LAB_142aee746:
                iVar10 = *(int *)(local_50 + 0x44);
                bVar3 = *(byte *)(local_50 + 0x70);
                (**(code **)(**(longlong **)(local_50 + 0x78) + 0x178))();
                if ((-1 < (int)uVar11) &&
                   (puVar9 = (ulonglong *)(param_2 + (longlong)iVar10), (int)uVar11 < (int)puVar9[1]
                   )) {
                  if ((bVar3 & 1) == 0) {
                    uVar14 = *puVar9;
                  }
                  else {
                    uVar14 = *puVar9;
                    if ((uVar14 & 1) != 0) {
                      uVar14 = (longlong)puVar9 + ((longlong)uVar14 >> 0x18);
                    }
                  }
                  lVar6 = (longlong)*(int *)(*(longlong *)(local_50 + 0x78) + 0x34) *
                          (ulonglong)uVar11 + uVar14;
                  uVar7 = *(undefined8 *)(lVar5 + 0x70);
                  goto LAB_142aee312;
                }
              }
            }
          }
          else {
            if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c951a98) != 0) goto LAB_142aee494;
LAB_142aee5c4:
            puVar13 = *(undefined **)(local_50 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_a8 = (undefined *)FUN_140342cba();
                local_a0 = FUN_1468c7f1e;
                local_b0 = 0;
                local_b8 = (longlong *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_a0 = FUN_1468e4cee;
              local_a8 = &DAT_14c951a38;
              local_b8 = (longlong *)0x800000008001;
              local_b0 = 0;
              FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
              atexit(FUN_142817fb7);
              _Init_thread_footer(&DAT_14c952900);
            }
            if (DAT_14c9528b8 == 0) {
              bVar16 = puVar13 != (undefined *)0x0;
              if (puVar13 != &DAT_14c9528b0 && bVar16) {
                do {
                  puVar13 = *(undefined **)(puVar13 + 0x30);
                  bVar16 = puVar13 != (undefined *)0x0;
                  if (puVar13 == &DAT_14c9528b0) break;
                } while (puVar13 != (undefined *)0x0);
              }
              if (!bVar16) goto LAB_142aee63d;
            }
            else if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c9528b8) == 0) {
LAB_142aee63d:
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951f40) &&
                 (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_a8 = (undefined *)FUN_140342cba();
                  local_a0 = FUN_1468c7f1e;
                  local_b0 = 0;
                  local_b8 = (longlong *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_a0 = FUN_140eb3340;
                local_a8 = &DAT_14c951a38;
                local_b8 = (longlong *)0x400000008001;
                local_b0 = 0;
                param_2 = 0;
                FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
                atexit(FUN_142815b60);
                _Init_thread_footer(&DAT_14c951f40);
                goto LAB_142aee7a2;
              }
            }
          }
        }
      }
LAB_142aee79f:
      param_2 = 0;
      goto LAB_142aee7a2;
    }
    if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952430) == 0) goto LAB_142aee029;
LAB_142aee006:
    *(undefined1 *)((longlong)param_4 + 0x34) = 0;
    lVar6 = *(longlong *)
             ((longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34) +
             (longlong)*(int *)(local_50 + 0x44) + param_2);
    if (lVar6 == 0) goto LAB_142aee029;
LAB_142aee0d2:
    param_4[5] = lVar6;
    *(int *)(param_4 + 6) = param_3;
    local_b8 = param_5;
    uVar4 = FUN_1411bde97(*(undefined8 *)(lVar6 + 0x10),lVar6,param_3 + 1,param_4);
  }
LAB_142aedfc9:
  param_2 = (ulonglong)uVar4;
LAB_142aee7a2:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 & 0xffffff01;
}



// FUNCTION 142aeee9c FUN_142aeee9c body=563 status=ok
// SIG undefined FUN_142aeee9c(void)

void FUN_142aeee9c(void *param_1,longlong *param_2,void *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)(*param_2 + 0x18 + (longlong)((int)param_2[1] + -1) * 0x20);
  if (((ulonglong)plVar1 & 1) != 0) {
    if (((ulonglong)plVar1 & 0xfffffffffffffffe) == 0) {
      return;
    }
    if (DAT_14c950c29 != '\x01') {
      return;
    }
    FUN_1456cec3c((ulonglong)plVar1 & 0xfffffffffffffffe);
    return;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)plVar1[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar2 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar2,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,&DAT_14c951a38,FUN_14067a048);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  if (DAT_14c951cd8 == 0) {
    bVar4 = puVar3 != (undefined8 *)0x0;
    if (puVar3 != &DAT_14c951cd0 && bVar4) {
      do {
        puVar3 = (undefined8 *)puVar3[6];
        bVar4 = puVar3 != (undefined8 *)0x0;
        if (puVar3 == &DAT_14c951cd0) break;
      } while (puVar3 != (undefined8 *)0x0);
    }
    if (!bVar4) goto LAB_142aeef63;
  }
  else if ((puVar3[3] & DAT_14c951cd8) == 0) {
LAB_142aeef63:
    if (param_1 == param_3) {
      return;
    }
    if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) != 0) {
      memcpy(param_1,param_3,(longlong)*(int *)((longlong)plVar1 + 0x34));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142aeef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x100))(plVar1,param_1,param_3,1);
    return;
  }
  *(bool *)param_1 =
       (*(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)plVar1 + 0x71)) &
       *(byte *)((longlong)plVar1 + 0x73)) != 0;
  return;
}



// FUNCTION 142aef0cf FUN_142aef0cf body=57 status=ok
// SIG undefined FUN_142aef0cf(void)

void FUN_142aef0cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e1d8 == 0) {
    uVar1 = FUN_145883891();
    DAT_14c99e1d8 = FUN_14171c317(FUN_146295b67,uVar1,L"EPropertyPathTestEnum");
  }
  return;
}



// FUNCTION 142aef15c FUN_142aef15c body=206 status=ok
// SIG undefined FUN_142aef15c(void)

void FUN_142aef15c(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  local_48 = 2;
  FUN_14282b410(L"/Script/PropertyPath",0,0,&PTR_FUN_149fcdd00);
  local_30 = 0x8000000149fcdd50;
  local_1c = 0xc;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_146295aa6(&local_30);
  local_40 = &PTR_FUN_149fcf330;
  uStack_38 = 1;
  local_48 = 4;
  FUN_14282b410(L"/Script/PropertyPath",&PTR_FUN_149fcf3f0,1,&PTR_FUN_149fcf350);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aef22c FUN_142aef22c body=1147 status=ok
// SIG undefined FUN_142aef22c(void)

undefined8 FUN_142aef22c(double *param_1,longlong *param_2)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  
  iVar4 = (int)param_2[2];
  if (0 < iVar4) {
    dVar2 = param_1[4];
    if (dVar2 == 0.0) {
      return 5;
    }
    if (*(int *)((longlong)dVar2 + 4) == 0) {
      if (0 < *(int *)((longlong)param_1 + 0x14)) {
        lVar7 = 0;
        do {
          *(undefined4 *)((longlong)dVar2 + 0x18 + lVar7 * 4) =
               *(undefined4 *)(*param_2 + lVar7 * 4);
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)((longlong)param_1 + 0x14));
      }
      *(undefined4 *)((longlong)dVar2 + 4) = 1;
      iVar4 = (int)param_2[2];
    }
    *(int *)((longlong)dVar2 + 8) = iVar4 * *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)dVar2 + 0x10) =
         *(int *)((longlong)param_1 + 0x14) * *(int *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)dVar2 + 0x14) = 0;
    *(undefined4 *)((longlong)dVar2 + 0xc) = 0;
    dVar13 = *param_1;
    if (dVar13 < 0.00390625) {
      return 0x16;
    }
    if (256.0 < dVar13) {
      return 0x16;
    }
    dVar12 = param_1[1];
    if (dVar12 < 1.0) {
      iVar4 = 0;
      do {
        iVar5 = *(int *)((longlong)dVar2 + 0x10);
        if ((iVar5 <= iVar4) ||
           ((double)*(int *)((longlong)dVar2 + 8) <
            (dVar12 + 1.0) * (double)*(int *)((longlong)param_1 + 0x14) +
            (double)*(int *)((longlong)dVar2 + 0xc))) break;
        if (0 < iVar5) {
          dVar11 = *param_1;
          if (1e-20 < ABS(dVar11 - (double)param_2[5])) {
            dVar13 = (((double)param_2[5] - dVar11) * (double)iVar4) / (double)iVar5 + dVar11;
          }
        }
        if (0 < *(int *)((longlong)param_1 + 0x14)) {
          lVar7 = 0;
          do {
            fVar1 = *(float *)((longlong)dVar2 + 0x18 + lVar7 * 4);
            *(float *)(param_2[1] + (longlong)iVar4 * 4) =
                 (float)((double)(*(float *)(*param_2 + lVar7 * 4) - fVar1) * dVar12 + (double)fVar1
                        );
            iVar4 = *(int *)((longlong)dVar2 + 0x14) + 1;
            *(int *)((longlong)dVar2 + 0x14) = iVar4;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)((longlong)param_1 + 0x14));
        }
        dVar12 = dVar12 + 1.0 / dVar13;
      } while (dVar12 < 1.0);
    }
    iVar4 = lrint(SUB84(dVar12,0));
    dVar11 = dVar12 - (double)iVar4;
    dVar11 = (double)(~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11 |
                     (ulonglong)(dVar11 + 1.0) & -(ulonglong)(dVar11 < 0.0));
    uVar16 = 0;
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    iVar5 = lrint(SUB84(dVar12 - dVar11,0));
    iVar6 = iVar5 * iVar4 + *(int *)((longlong)dVar2 + 0xc);
    *(int *)((longlong)dVar2 + 0xc) = iVar6;
    iVar4 = *(int *)((longlong)dVar2 + 0x10);
    iVar5 = *(int *)((longlong)dVar2 + 0x14);
    if (iVar5 < iVar4) {
      do {
        iVar10 = *(int *)((longlong)param_1 + 0x14);
        if ((double)*(int *)((longlong)dVar2 + 8) <= (double)iVar10 * dVar11 + (double)iVar6) break;
        if (0 < iVar4) {
          dVar12 = *param_1;
          if (1e-20 < ABS(dVar12 - (double)param_2[5])) {
            dVar13 = (((double)param_2[5] - dVar12) * (double)iVar5) / (double)iVar4 + dVar12;
          }
        }
        if (0 < iVar10) {
          lVar7 = 0;
          do {
            fVar1 = *(float *)(*param_2 +
                              (longlong)((*(int *)((longlong)dVar2 + 0xc) - iVar10) + (int)lVar7) *
                              4);
            *(float *)(param_2[1] + (longlong)iVar5 * 4) =
                 (float)((double)(*(float *)(*param_2 +
                                            (*(int *)((longlong)dVar2 + 0xc) + lVar7) * 4) - fVar1)
                         * dVar11 + (double)fVar1);
            iVar5 = *(int *)((longlong)dVar2 + 0x14) + 1;
            *(int *)((longlong)dVar2 + 0x14) = iVar5;
            iVar10 = *(int *)((longlong)param_1 + 0x14);
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < iVar10);
        }
        dVar14 = dVar11 + 1.0 / dVar13;
        iVar4 = lrint(SUB84(dVar14,0));
        dVar12 = dVar14 - (double)iVar4;
        auVar15._0_8_ = ~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12;
        auVar15._8_8_ = 0;
        auVar3._8_4_ = (int)uVar16;
        auVar3._0_8_ = (ulonglong)(dVar12 + 1.0) & -(ulonglong)(dVar12 < 0.0);
        auVar3._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
        iVar4 = *(int *)((longlong)param_1 + 0x14);
        dVar11 = SUB168(auVar15 | auVar3,0);
        iVar5 = lrint(SUB84(dVar14 - dVar11,0));
        iVar6 = iVar5 * iVar4 + *(int *)((longlong)dVar2 + 0xc);
        *(int *)((longlong)dVar2 + 0xc) = iVar6;
        iVar4 = *(int *)((longlong)dVar2 + 0x10);
        iVar5 = *(int *)((longlong)dVar2 + 0x14);
        uVar16 = SUB168(auVar15 | auVar3,8);
      } while (iVar5 < iVar4);
    }
    iVar4 = *(int *)((longlong)dVar2 + 8);
    uVar8 = *(uint *)((longlong)param_1 + 0x14);
    if (iVar6 - iVar4 != 0 && iVar4 <= iVar6) {
      dVar11 = dVar11 + (double)((iVar6 - iVar4) / (int)uVar8);
      *(int *)((longlong)dVar2 + 0xc) = iVar4;
      uVar8 = *(uint *)((longlong)param_1 + 0x14);
    }
    uVar9 = (ulonglong)uVar8;
    param_1[1] = dVar11;
    iVar4 = *(int *)((longlong)dVar2 + 0xc);
    if (0 < (int)uVar8 && 0 < iVar4) {
      lVar7 = 0;
      do {
        *(undefined4 *)((longlong)dVar2 + 0x18 + lVar7 * 4) =
             *(undefined4 *)(*param_2 + (longlong)((iVar4 + (int)lVar7) - (int)uVar9) * 4);
        lVar7 = lVar7 + 1;
        uVar8 = *(uint *)((longlong)param_1 + 0x14);
        uVar9 = (ulonglong)(int)uVar8;
      } while (lVar7 < (longlong)uVar9);
    }
    *param_1 = dVar13;
    *(int *)(param_2 + 3) = *(int *)((longlong)dVar2 + 0xc) / (int)uVar8;
    *(int *)((longlong)param_2 + 0x1c) =
         *(int *)((longlong)dVar2 + 0x14) / *(int *)((longlong)param_1 + 0x14);
  }
  return 0;
}



// FUNCTION 142aef6ce FUN_142aef6ce body=101 status=ok
// SIG undefined FUN_142aef6ce(void)

undefined8 FUN_142aef6ce(longlong param_1,longlong param_2)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  undefined8 uVar1;
  
  _Src = *(void **)(param_1 + 0x20);
  if (_Src == (void *)0x0) {
    uVar1 = 5;
  }
  else {
    _Size = (longlong)*(int *)(param_1 + 0x14) * 4 + 0x18;
    uVar1 = 0;
    _Dst = (void *)FUN_14001cc68(_Size,0);
    if (_Dst == (void *)0x0) {
      uVar1 = 1;
    }
    else {
      memcpy(_Dst,_Src,_Size);
      *(void **)(param_2 + 0x20) = _Dst;
    }
  }
  return uVar1;
}



// FUNCTION 142aef733 FUN_142aef733 body=1317 status=ok
// SIG undefined FUN_142aef733(void)

undefined8 FUN_142aef733(double *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar2 = param_1[4];
  if (dVar2 == 0.0) {
    uVar10 = 5;
  }
  else {
    *(int *)((longlong)dVar2 + 4) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x10);
    *(int *)((longlong)dVar2 + 0xc) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x14);
    *(undefined4 *)((longlong)dVar2 + 0x10) = 0;
    *(undefined4 *)((longlong)dVar2 + 8) = 0;
    dVar18 = *param_1;
    uVar10 = 0x16;
    if ((0.00390625 <= dVar18) && (dVar18 <= 256.0)) {
      dVar17 = ((double)*(int *)((longlong)dVar2 + 0x14) + 2.0) /
               (double)*(int *)((longlong)dVar2 + 0x18);
      dVar15 = dVar18;
      if (*(double *)(param_2 + 0x28) <= dVar18) {
        dVar15 = *(double *)(param_2 + 0x28);
      }
      iVar14 = *(int *)((longlong)param_1 + 0x14);
      iVar4 = lrint(-(ulonglong)(dVar15 < 1.0) & (ulonglong)(dVar17 / dVar15) |
                    ~-(ulonglong)(dVar15 < 1.0) & (ulonglong)dVar17);
      dVar15 = param_1[1];
      iVar5 = lrint(dVar15);
      dVar17 = dVar15 - (double)iVar5;
      dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                       (ulonglong)(dVar17 + 1.0) & -(ulonglong)(dVar17 < 0.0));
      iVar5 = *(int *)((longlong)dVar2 + 0x38);
      iVar7 = *(int *)((longlong)param_1 + 0x14);
      iVar6 = lrint(dVar15 - dVar17);
      iVar8 = *(int *)((longlong)dVar2 + 0x44);
      lVar3 = (longlong)(iVar6 * iVar7 + iVar5) % (longlong)iVar8;
      *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
      if (*(int *)((longlong)dVar2 + 0x10) < *(int *)((longlong)dVar2 + 0xc)) {
        iVar14 = (iVar4 + 1) * iVar14;
        dVar15 = 1.0 / dVar18;
        do {
          iVar5 = (int)lVar3;
          if (((iVar8 - iVar5) + *(int *)((longlong)dVar2 + 0x3c)) % iVar8 <= iVar14) {
            uVar10 = FUN_142af19b8(dVar2,*(undefined4 *)((longlong)param_1 + 0x14),param_2,iVar14);
            *(int *)(param_1 + 2) = (int)uVar10;
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            iVar5 = *(int *)((longlong)dVar2 + 0x38);
            if (((*(int *)((longlong)dVar2 + 0x3c) - iVar5) + *(int *)((longlong)dVar2 + 0x44)) %
                *(int *)((longlong)dVar2 + 0x44) <= iVar14) break;
          }
          if ((-1 < *(int *)((longlong)dVar2 + 0x40)) &&
             ((double)*(int *)((longlong)dVar2 + 0x40) < (double)iVar5 + dVar17 + dVar15 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar2 + 0xc)) {
            dVar20 = *param_1;
            if (1e-10 < ABS(dVar20 - *(double *)(param_2 + 0x28))) {
              dVar18 = ((*(double *)(param_2 + 0x28) - dVar20) *
                       (double)*(int *)((longlong)dVar2 + 0x10)) /
                       (double)*(int *)((longlong)dVar2 + 0xc) + dVar20;
            }
          }
          dVar20 = dVar18;
          if (1.0 <= dVar18) {
            dVar20 = 1.0;
          }
          dVar20 = dVar20 * (double)*(int *)((longlong)dVar2 + 0x18);
          iVar5 = lrint(dVar20 * 4096.0);
          iVar7 = lrint(dVar17 * dVar20 * 4096.0);
          iVar4 = *(int *)((longlong)dVar2 + 0x14) * 0x1000;
          iVar8 = (iVar4 - iVar7) / iVar5;
          uVar12 = *(int *)((longlong)dVar2 + 0x38) - iVar8;
          uVar9 = ((int)uVar12 >> 0x1f & uVar12 * iVar5) + iVar8 * iVar5 + iVar7;
          lVar3 = *(longlong *)((longlong)dVar2 + 0x30);
          dVar16 = 0.0;
          dVar19 = 0.0;
          if (-1 < (int)uVar9) {
            uVar13 = (ulonglong)uVar12;
            if ((int)uVar12 < 1) {
              uVar13 = 0;
            }
            pfVar11 = (float *)((longlong)dVar2 + 0x848 + uVar13 * 4);
            do {
              fVar1 = *(float *)(lVar3 + (ulonglong)(uVar9 >> 0xc) * 4);
              dVar19 = dVar19 + (double)*pfVar11 *
                                ((double)(*(float *)(lVar3 + 4 + (ulonglong)(uVar9 >> 0xc) * 4) -
                                         fVar1) * (double)(uVar9 & 0xfff) * 0.000244140625 +
                                (double)fVar1);
              pfVar11 = pfVar11 + 1;
              uVar9 = uVar9 - iVar5;
            } while (-1 < (int)uVar9);
          }
          iVar8 = (iVar4 - (iVar5 - iVar7)) / iVar5;
          uVar9 = iVar8 * iVar5 + (iVar5 - iVar7);
          pfVar11 = (float *)((longlong)dVar2 + 0x848 +
                             (longlong)(*(int *)((longlong)dVar2 + 0x38) + iVar8 + 1) * 4);
          do {
            fVar1 = *(float *)(lVar3 + (longlong)((int)uVar9 >> 0xc) * 4);
            dVar16 = dVar16 + (double)*pfVar11 *
                              ((double)(*(float *)(lVar3 + 4 + (longlong)((int)uVar9 >> 0xc) * 4) -
                                       fVar1) * (double)(uVar9 & 0xfff) * 0.000244140625 +
                              (double)fVar1);
            uVar9 = uVar9 - iVar5;
            pfVar11 = pfVar11 + -1;
          } while (0 < (int)uVar9);
          *(float *)(*(longlong *)(param_2 + 8) + (longlong)*(int *)((longlong)dVar2 + 0x10) * 4) =
               (float)((dVar20 / (double)*(int *)((longlong)dVar2 + 0x18)) * (dVar19 + dVar16));
          *(int *)((longlong)dVar2 + 0x10) = *(int *)((longlong)dVar2 + 0x10) + 1;
          dVar20 = dVar17 + 1.0 / dVar18;
          iVar5 = lrint(dVar20);
          dVar17 = dVar20 - (double)iVar5;
          dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                           (ulonglong)(dVar17 + 1.0) & -(ulonglong)(dVar17 < 0.0));
          iVar5 = *(int *)((longlong)dVar2 + 0x38);
          iVar7 = *(int *)((longlong)param_1 + 0x14);
          iVar4 = lrint(dVar20 - dVar17);
          iVar8 = *(int *)((longlong)dVar2 + 0x44);
          lVar3 = (longlong)(iVar4 * iVar7 + iVar5) % (longlong)iVar8;
          *(int *)((longlong)dVar2 + 0x38) = (int)lVar3;
        } while (*(int *)((longlong)dVar2 + 0x10) < *(int *)((longlong)dVar2 + 0xc));
      }
      param_1[1] = dVar17;
      *param_1 = dVar18;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar2 + 8) / *(int *)((longlong)param_1 + 0x14);
      *(int *)(param_2 + 0x1c) =
           *(int *)((longlong)dVar2 + 0x10) / *(int *)((longlong)param_1 + 0x14);
      uVar10 = 0;
    }
  }
  return uVar10;
}



// FUNCTION 142aefc58 FUN_142aefc58 body=1432 status=ok
// SIG undefined FUN_142aefc58(void)

undefined8 FUN_142aefc58(double *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  dVar2 = param_1[4];
  if (dVar2 == 0.0) {
    uVar10 = 5;
  }
  else {
    *(int *)((longlong)dVar2 + 4) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x10);
    *(int *)((longlong)dVar2 + 0xc) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x14);
    *(undefined4 *)((longlong)dVar2 + 0x10) = 0;
    *(undefined4 *)((longlong)dVar2 + 8) = 0;
    dVar17 = *param_1;
    uVar10 = 0x16;
    if ((0.00390625 <= dVar17) && (dVar17 <= 256.0)) {
      dVar16 = ((double)*(int *)((longlong)dVar2 + 0x14) + 2.0) /
               (double)*(int *)((longlong)dVar2 + 0x18);
      dVar14 = dVar17;
      if (*(double *)(param_2 + 0x28) <= dVar17) {
        dVar14 = *(double *)(param_2 + 0x28);
      }
      iVar13 = *(int *)((longlong)param_1 + 0x14);
      iVar5 = lrint(-(ulonglong)(dVar14 < 1.0) & (ulonglong)(dVar16 / dVar14) |
                    ~-(ulonglong)(dVar14 < 1.0) & (ulonglong)dVar16);
      dVar14 = param_1[1];
      iVar6 = lrint(dVar14);
      dVar16 = dVar14 - (double)iVar6;
      dVar16 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                       (ulonglong)(dVar16 + 1.0) & -(ulonglong)(dVar16 < 0.0));
      iVar6 = *(int *)((longlong)dVar2 + 0x38);
      iVar8 = *(int *)((longlong)param_1 + 0x14);
      iVar7 = lrint(dVar14 - dVar16);
      iVar9 = *(int *)((longlong)dVar2 + 0x44);
      lVar4 = (longlong)(iVar7 * iVar8 + iVar6) % (longlong)iVar9;
      *(int *)((longlong)dVar2 + 0x38) = (int)lVar4;
      if (*(int *)((longlong)dVar2 + 0x10) < *(int *)((longlong)dVar2 + 0xc)) {
        iVar13 = (iVar5 + 1) * iVar13;
        dVar14 = 1.0 / dVar17;
        do {
          iVar6 = (int)lVar4;
          if (((iVar9 - iVar6) + *(int *)((longlong)dVar2 + 0x3c)) % iVar9 <= iVar13) {
            uVar10 = FUN_142af19b8(dVar2,*(undefined4 *)((longlong)param_1 + 0x14),param_2,iVar13);
            *(int *)(param_1 + 2) = (int)uVar10;
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            iVar6 = *(int *)((longlong)dVar2 + 0x38);
            if (((*(int *)((longlong)dVar2 + 0x3c) - iVar6) + *(int *)((longlong)dVar2 + 0x44)) %
                *(int *)((longlong)dVar2 + 0x44) <= iVar13) break;
          }
          if ((-1 < *(int *)((longlong)dVar2 + 0x40)) &&
             ((double)*(int *)((longlong)dVar2 + 0x40) <= (double)iVar6 + dVar16 + dVar14 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar2 + 0xc)) {
            dVar22 = *param_1;
            if (1e-10 < ABS(dVar22 - *(double *)(param_2 + 0x28))) {
              dVar17 = ((*(double *)(param_2 + 0x28) - dVar22) *
                       (double)*(int *)((longlong)dVar2 + 0x10)) /
                       (double)*(int *)((longlong)dVar2 + 0xc) + dVar22;
            }
          }
          dVar22 = dVar17;
          if (1.0 <= dVar17) {
            dVar22 = 1.0;
          }
          dVar22 = dVar22 * (double)*(int *)((longlong)dVar2 + 0x18);
          iVar6 = lrint(dVar22 * 4096.0);
          iVar8 = lrint(dVar16 * dVar22 * 4096.0);
          iVar5 = *(int *)((longlong)dVar2 + 0x14) * 0x1000;
          iVar9 = (iVar5 - iVar8) / iVar6;
          uVar12 = iVar9 * iVar6 + iVar8;
          iVar9 = *(int *)((longlong)dVar2 + 0x38) - iVar9 * *(int *)((longlong)param_1 + 0x14);
          if (iVar9 < 0) {
            iVar7 = 1 - iVar9;
            uVar12 = uVar12 - (iVar7 / 2) * iVar6;
            iVar9 = iVar9 + (iVar7 - (iVar7 >> 0x1f) & 0xfffffffeU);
          }
          lVar4 = *(longlong *)(param_2 + 8);
          iVar7 = *(int *)((longlong)dVar2 + 0x10);
          lVar3 = *(longlong *)((longlong)dVar2 + 0x30);
          dVar18 = 0.0;
          dVar19 = 0.0;
          dVar15 = 0.0;
          if (-1 < (int)uVar12) {
            pfVar11 = (float *)((longlong)dVar2 + 0x84c + (longlong)iVar9 * 4);
            do {
              fVar1 = *(float *)(lVar3 + (ulonglong)(uVar12 >> 0xc) * 4);
              dVar20 = (double)(*(float *)(lVar3 + 4 + (ulonglong)(uVar12 >> 0xc) * 4) - fVar1) *
                       (double)(uVar12 & 0xfff) * 0.000244140625 + (double)fVar1;
              dVar19 = dVar19 + (double)pfVar11[-1] * dVar20;
              dVar15 = dVar15 + (double)*pfVar11 * dVar20;
              pfVar11 = pfVar11 + 2;
              uVar12 = uVar12 - iVar6;
            } while (-1 < (int)uVar12);
          }
          dVar22 = dVar22 / (double)*(int *)((longlong)dVar2 + 0x18);
          iVar9 = (iVar5 - (iVar6 - iVar8)) / iVar6;
          uVar12 = iVar9 * iVar6 + (iVar6 - iVar8);
          pfVar11 = (float *)((longlong)dVar2 + 0x84c +
                             (longlong)
                             ((iVar9 + 1) * *(int *)((longlong)param_1 + 0x14) +
                             *(int *)((longlong)dVar2 + 0x38)) * 4);
          dVar20 = 0.0;
          do {
            fVar1 = *(float *)(lVar3 + (longlong)((int)uVar12 >> 0xc) * 4);
            dVar21 = (double)(*(float *)(lVar3 + 4 + (longlong)((int)uVar12 >> 0xc) * 4) - fVar1) *
                     (double)(uVar12 & 0xfff) * 0.000244140625 + (double)fVar1;
            dVar18 = dVar18 + (double)pfVar11[-1] * dVar21;
            dVar20 = dVar20 + (double)*pfVar11 * dVar21;
            uVar12 = uVar12 - iVar6;
            pfVar11 = pfVar11 + -2;
          } while (0 < (int)uVar12);
          *(float *)(lVar4 + (longlong)iVar7 * 4) = (float)((dVar19 + dVar18) * dVar22);
          *(float *)(lVar4 + 4 + (longlong)iVar7 * 4) = (float)((dVar15 + dVar20) * dVar22);
          *(int *)((longlong)dVar2 + 0x10) = *(int *)((longlong)dVar2 + 0x10) + 2;
          dVar22 = dVar16 + 1.0 / dVar17;
          iVar6 = lrint(dVar22);
          dVar16 = dVar22 - (double)iVar6;
          dVar16 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                           (ulonglong)(dVar16 + 1.0) & -(ulonglong)(dVar16 < 0.0));
          iVar6 = *(int *)((longlong)dVar2 + 0x38);
          iVar8 = *(int *)((longlong)param_1 + 0x14);
          iVar5 = lrint(dVar22 - dVar16);
          iVar9 = *(int *)((longlong)dVar2 + 0x44);
          lVar4 = (longlong)(iVar5 * iVar8 + iVar6) % (longlong)iVar9;
          *(int *)((longlong)dVar2 + 0x38) = (int)lVar4;
        } while (*(int *)((longlong)dVar2 + 0x10) < *(int *)((longlong)dVar2 + 0xc));
      }
      param_1[1] = dVar16;
      *param_1 = dVar17;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar2 + 8) / *(int *)((longlong)param_1 + 0x14);
      *(int *)(param_2 + 0x1c) =
           *(int *)((longlong)dVar2 + 0x10) / *(int *)((longlong)param_1 + 0x14);
      uVar10 = 0;
    }
  }
  return uVar10;
}



// FUNCTION 142af01f0 FUN_142af01f0 body=1519 status=ok
// SIG undefined FUN_142af01f0(void)

undefined8 FUN_142af01f0(double *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_168 [40];
  longlong local_140;
  double local_138 [4];
  double local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar6 = param_1[4];
  if (dVar6 == 0.0) {
    uVar17 = 5;
  }
  else {
    *(int *)((longlong)dVar6 + 4) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x10);
    *(int *)((longlong)dVar6 + 0xc) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x14);
    *(undefined4 *)((longlong)dVar6 + 0x10) = 0;
    *(undefined4 *)((longlong)dVar6 + 8) = 0;
    dVar2 = *param_1;
    uVar17 = 0x16;
    if ((0.00390625 <= dVar2) && (dVar2 <= 256.0)) {
      dVar10 = ((double)*(int *)((longlong)dVar6 + 0x14) + 2.0) /
               (double)*(int *)((longlong)dVar6 + 0x18);
      dVar25 = dVar2;
      if (*(double *)(param_2 + 0x28) <= dVar2) {
        dVar25 = *(double *)(param_2 + 0x28);
      }
      iVar23 = *(int *)((longlong)param_1 + 0x14);
      iVar13 = lrint(-(ulonglong)(dVar25 < 1.0) & (ulonglong)(dVar10 / dVar25) |
                     ~-(ulonglong)(dVar25 < 1.0) & (ulonglong)dVar10);
      dVar10 = param_1[1];
      iVar14 = lrint(dVar10);
      dVar25 = dVar10 - (double)iVar14;
      dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                       (ulonglong)(dVar25 + 1.0) & -(ulonglong)(dVar25 < 0.0));
      iVar14 = *(int *)((longlong)dVar6 + 0x38);
      iVar3 = *(int *)((longlong)param_1 + 0x14);
      iVar15 = lrint(dVar10 - dVar25);
      iVar16 = *(int *)((longlong)dVar6 + 0x44);
      lVar8 = (longlong)(iVar15 * iVar3 + iVar14) % (longlong)iVar16;
      *(int *)((longlong)dVar6 + 0x38) = (int)lVar8;
      if (*(int *)((longlong)dVar6 + 0x10) < *(int *)((longlong)dVar6 + 0xc)) {
        iVar23 = (iVar13 + 1) * iVar23;
        dVar10 = 1.0 / dVar2;
        local_140 = (longlong)dVar6 + 0x848;
        do {
          iVar14 = (int)lVar8;
          if (((iVar16 - iVar14) + *(int *)((longlong)dVar6 + 0x3c)) % iVar16 <= iVar23) {
            uVar17 = FUN_142af19b8(dVar6,*(undefined4 *)((longlong)param_1 + 0x14),param_2,iVar23);
            *(int *)(param_1 + 2) = (int)uVar17;
            if ((int)uVar17 != 0) goto LAB_142af075d;
            iVar14 = *(int *)((longlong)dVar6 + 0x38);
            if (((*(int *)((longlong)dVar6 + 0x3c) - iVar14) + *(int *)((longlong)dVar6 + 0x44)) %
                *(int *)((longlong)dVar6 + 0x44) <= iVar23) break;
          }
          if ((-1 < *(int *)((longlong)dVar6 + 0x40)) &&
             ((double)*(int *)((longlong)dVar6 + 0x40) <= (double)iVar14 + dVar25 + dVar10 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar6 + 0xc)) {
            dVar27 = *param_1;
            if (1e-10 < ABS(dVar27 - *(double *)(param_2 + 0x28))) {
              dVar2 = ((*(double *)(param_2 + 0x28) - dVar27) *
                      (double)*(int *)((longlong)dVar6 + 0x10)) /
                      (double)*(int *)((longlong)dVar6 + 0xc) + dVar27;
            }
          }
          dVar27 = dVar2;
          if (1.0 <= dVar2) {
            dVar27 = 1.0;
          }
          dVar27 = dVar27 * (double)*(int *)((longlong)dVar6 + 0x18);
          iVar16 = lrint(dVar27 * 4096.0);
          iVar13 = lrint(dVar25 * dVar27 * 4096.0);
          iVar14 = *(int *)((longlong)param_1 + 0x14);
          iVar3 = *(int *)((longlong)dVar6 + 0x38);
          iVar20 = *(int *)((longlong)dVar6 + 0x14) * 0x1000;
          iVar15 = (iVar20 - iVar13) / iVar16;
          uVar22 = iVar15 * iVar16 + iVar13;
          iVar15 = iVar3 - iVar15 * iVar14;
          if (iVar15 < 0) {
            uVar21 = 6 - iVar15;
            if (-1 < (int)(3U - iVar15)) {
              uVar21 = 3U - iVar15;
            }
            uVar22 = uVar22 - ((int)uVar21 >> 2) * iVar16;
            iVar15 = iVar15 + (uVar21 & 0xfffffffc);
          }
          iVar4 = *(int *)((longlong)dVar6 + 0x10);
          lVar8 = *(longlong *)(param_2 + 8);
          iVar5 = *(int *)((longlong)dVar6 + 0x18);
          local_118[2] = 0.0;
          local_118[3] = 0.0;
          local_118[0] = 0.0;
          local_118[1] = 0.0;
          lVar19 = *(longlong *)((longlong)dVar6 + 0x30);
          if (-1 < (int)uVar22) {
            lVar18 = local_140 + (longlong)iVar15 * 4;
            do {
              fVar1 = *(float *)(lVar19 + (ulonglong)(uVar22 >> 0xc) * 4);
              dVar26 = (double)fVar1 +
                       (double)(*(float *)(lVar19 + 4 + (ulonglong)(uVar22 >> 0xc) * 4) - fVar1) *
                       (double)(uVar22 & 0xfff) * 0.000244140625;
              lVar24 = 0;
              do {
                uVar17 = *(undefined8 *)(lVar18 + lVar24 * 4);
                dVar12 = (double)(float)((ulonglong)uVar17 >> 0x20) * dVar26 + local_118[lVar24 + 1]
                ;
                auVar11._8_4_ = SUB84(dVar12,0);
                auVar11._0_8_ = (double)(float)uVar17 * dVar26 + local_118[lVar24];
                auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                *(undefined1 (*) [16])(local_118 + lVar24) = auVar11;
                lVar24 = lVar24 + 2;
              } while (lVar24 != 4);
              lVar18 = lVar18 + 0x10;
              uVar22 = uVar22 - iVar16;
            } while (-1 < (int)uVar22);
          }
          dVar27 = dVar27 / (double)iVar5;
          iVar15 = (iVar20 - (iVar16 - iVar13)) / iVar16;
          local_138[2] = 0.0;
          local_138[3] = 0.0;
          local_138[0] = 0.0;
          local_138[1] = 0.0;
          lVar18 = local_140 + (longlong)((iVar15 + 1) * iVar14 + iVar3) * 4;
          uVar22 = iVar15 * iVar16 + (iVar16 - iVar13);
          do {
            fVar1 = *(float *)(lVar19 + (longlong)((int)uVar22 >> 0xc) * 4);
            dVar26 = (double)fVar1 +
                     (double)(*(float *)(lVar19 + 4 + (longlong)((int)uVar22 >> 0xc) * 4) - fVar1) *
                     (double)(uVar22 & 0xfff) * 0.000244140625;
            lVar24 = 0;
            do {
              uVar17 = *(undefined8 *)(lVar18 + lVar24 * 4);
              dVar12 = (double)(float)((ulonglong)uVar17 >> 0x20) * dVar26 + local_138[lVar24 + 1];
              auVar9._8_4_ = SUB84(dVar12,0);
              auVar9._0_8_ = (double)(float)uVar17 * dVar26 + local_138[lVar24];
              auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
              *(undefined1 (*) [16])(local_138 + lVar24) = auVar9;
              lVar24 = lVar24 + 2;
            } while (lVar24 != 4);
            lVar18 = lVar18 + -0x10;
            uVar21 = uVar22 - iVar16;
            bVar7 = iVar16 <= (int)uVar22;
            uVar22 = uVar21;
          } while (uVar21 != 0 && bVar7);
          lVar19 = 0;
          do {
            *(ulonglong *)((longlong)iVar4 * 4 + lVar8 + lVar19 * 4) =
                 CONCAT44((float)((local_118[lVar19 + 1] + local_138[lVar19 + 1]) * dVar27),
                          (float)((local_118[lVar19] + local_138[lVar19]) * dVar27));
            lVar19 = lVar19 + 2;
          } while (lVar19 != 4);
          *(int *)((longlong)dVar6 + 0x10) = *(int *)((longlong)dVar6 + 0x10) + 4;
          dVar27 = dVar25 + 1.0 / dVar2;
          iVar14 = lrint(dVar27);
          dVar25 = dVar27 - (double)iVar14;
          dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                           (ulonglong)(dVar25 + 1.0) & -(ulonglong)(dVar25 < 0.0));
          iVar14 = *(int *)((longlong)dVar6 + 0x38);
          iVar3 = *(int *)((longlong)param_1 + 0x14);
          iVar13 = lrint(dVar27 - dVar25);
          iVar16 = *(int *)((longlong)dVar6 + 0x44);
          lVar8 = (longlong)(iVar13 * iVar3 + iVar14) % (longlong)iVar16;
          *(int *)((longlong)dVar6 + 0x38) = (int)lVar8;
        } while (*(int *)((longlong)dVar6 + 0x10) < *(int *)((longlong)dVar6 + 0xc));
      }
      param_1[1] = dVar25;
      *param_1 = dVar2;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar6 + 8) / *(int *)((longlong)param_1 + 0x14);
      *(int *)(param_2 + 0x1c) =
           *(int *)((longlong)dVar6 + 0x10) / *(int *)((longlong)param_1 + 0x14);
      uVar17 = 0;
    }
  }
LAB_142af075d:
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 142af07e0 FUN_142af07e0 body=1543 status=ok
// SIG undefined FUN_142af07e0(void)

undefined8 FUN_142af07e0(double *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_188 [40];
  longlong local_160;
  double local_158 [6];
  double local_128 [7];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar7 = param_1[4];
  if (dVar7 == 0.0) {
    uVar17 = 5;
  }
  else {
    *(int *)((longlong)dVar7 + 4) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x10);
    *(int *)((longlong)dVar7 + 0xc) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x14);
    *(undefined4 *)((longlong)dVar7 + 0x10) = 0;
    *(undefined4 *)((longlong)dVar7 + 8) = 0;
    dVar2 = *param_1;
    uVar17 = 0x16;
    if ((0.00390625 <= dVar2) && (dVar2 <= 256.0)) {
      dVar11 = ((double)*(int *)((longlong)dVar7 + 0x14) + 2.0) /
               (double)*(int *)((longlong)dVar7 + 0x18);
      dVar25 = dVar2;
      if (*(double *)(param_2 + 0x28) <= dVar2) {
        dVar25 = *(double *)(param_2 + 0x28);
      }
      iVar23 = *(int *)((longlong)param_1 + 0x14);
      iVar14 = lrint(-(ulonglong)(dVar25 < 1.0) & (ulonglong)(dVar11 / dVar25) |
                     ~-(ulonglong)(dVar25 < 1.0) & (ulonglong)dVar11);
      dVar11 = param_1[1];
      iVar15 = lrint(dVar11);
      dVar25 = dVar11 - (double)iVar15;
      dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                       (ulonglong)(dVar25 + 1.0) & -(ulonglong)(dVar25 < 0.0));
      iVar15 = *(int *)((longlong)dVar7 + 0x38);
      iVar3 = *(int *)((longlong)param_1 + 0x14);
      iVar16 = lrint(dVar11 - dVar25);
      iVar4 = *(int *)((longlong)dVar7 + 0x44);
      lVar9 = (longlong)(iVar16 * iVar3 + iVar15) % (longlong)iVar4;
      *(int *)((longlong)dVar7 + 0x38) = (int)lVar9;
      if (*(int *)((longlong)dVar7 + 0x10) < *(int *)((longlong)dVar7 + 0xc)) {
        iVar23 = (iVar14 + 1) * iVar23;
        dVar11 = 1.0 / dVar2;
        local_160 = (longlong)dVar7 + 0x848;
        do {
          iVar15 = (int)lVar9;
          if (((iVar4 - iVar15) + *(int *)((longlong)dVar7 + 0x3c)) % iVar4 <= iVar23) {
            uVar17 = FUN_142af19b8(dVar7,*(undefined4 *)((longlong)param_1 + 0x14),param_2,iVar23);
            *(int *)(param_1 + 2) = (int)uVar17;
            if ((int)uVar17 != 0) goto LAB_142af0d62;
            iVar15 = *(int *)((longlong)dVar7 + 0x38);
            if (((*(int *)((longlong)dVar7 + 0x3c) - iVar15) + *(int *)((longlong)dVar7 + 0x44)) %
                *(int *)((longlong)dVar7 + 0x44) <= iVar23) break;
          }
          if ((-1 < *(int *)((longlong)dVar7 + 0x40)) &&
             ((double)*(int *)((longlong)dVar7 + 0x40) <= (double)iVar15 + dVar25 + dVar11 + 1e-20))
          break;
          if (0 < *(int *)((longlong)dVar7 + 0xc)) {
            dVar27 = *param_1;
            if (1e-10 < ABS(dVar27 - *(double *)(param_2 + 0x28))) {
              dVar2 = ((*(double *)(param_2 + 0x28) - dVar27) *
                      (double)*(int *)((longlong)dVar7 + 0x10)) /
                      (double)*(int *)((longlong)dVar7 + 0xc) + dVar27;
            }
          }
          dVar27 = dVar2;
          if (1.0 <= dVar2) {
            dVar27 = 1.0;
          }
          dVar27 = dVar27 * (double)*(int *)((longlong)dVar7 + 0x18);
          iVar14 = lrint(dVar27 * 4096.0);
          iVar16 = lrint(dVar25 * dVar27 * 4096.0);
          iVar3 = *(int *)((longlong)param_1 + 0x14);
          iVar4 = *(int *)((longlong)dVar7 + 0x38);
          iVar20 = *(int *)((longlong)dVar7 + 0x14) * 0x1000;
          iVar15 = (iVar20 - iVar16) / iVar14;
          uVar22 = iVar15 * iVar14 + iVar16;
          iVar15 = iVar4 - iVar15 * iVar3;
          if (iVar15 < 0) {
            iVar5 = (5 - iVar15) / 6;
            uVar22 = uVar22 - iVar5 * iVar14;
            iVar15 = iVar15 + iVar5 * 6;
          }
          iVar5 = *(int *)((longlong)dVar7 + 0x10);
          lVar9 = *(longlong *)(param_2 + 8);
          iVar6 = *(int *)((longlong)dVar7 + 0x18);
          local_128[4] = 0.0;
          local_128[5] = 0.0;
          local_128[2] = 0.0;
          local_128[3] = 0.0;
          local_128[0] = 0.0;
          local_128[1] = 0.0;
          lVar19 = *(longlong *)((longlong)dVar7 + 0x30);
          if (-1 < (int)uVar22) {
            lVar18 = local_160 + (longlong)iVar15 * 4;
            do {
              fVar1 = *(float *)(lVar19 + (ulonglong)(uVar22 >> 0xc) * 4);
              dVar26 = (double)fVar1 +
                       (double)(*(float *)(lVar19 + 4 + (ulonglong)(uVar22 >> 0xc) * 4) - fVar1) *
                       (double)(uVar22 & 0xfff) * 0.000244140625;
              lVar24 = 0;
              do {
                uVar17 = *(undefined8 *)(lVar18 + lVar24 * 4);
                dVar13 = (double)(float)((ulonglong)uVar17 >> 0x20) * dVar26 + local_128[lVar24 + 1]
                ;
                auVar12._8_4_ = SUB84(dVar13,0);
                auVar12._0_8_ = (double)(float)uVar17 * dVar26 + local_128[lVar24];
                auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                *(undefined1 (*) [16])(local_128 + lVar24) = auVar12;
                lVar24 = lVar24 + 2;
              } while (lVar24 != 6);
              lVar18 = lVar18 + 0x18;
              uVar22 = uVar22 - iVar14;
            } while (-1 < (int)uVar22);
          }
          dVar27 = dVar27 / (double)iVar6;
          iVar15 = (iVar20 - (iVar14 - iVar16)) / iVar14;
          local_158[4] = 0.0;
          local_158[5] = 0.0;
          local_158[2] = 0.0;
          local_158[3] = 0.0;
          local_158[0] = 0.0;
          local_158[1] = 0.0;
          lVar18 = local_160 + (longlong)((iVar15 + 1) * iVar3 + iVar4) * 4;
          uVar22 = iVar15 * iVar14 + (iVar14 - iVar16);
          do {
            fVar1 = *(float *)(lVar19 + (longlong)((int)uVar22 >> 0xc) * 4);
            dVar26 = (double)fVar1 +
                     (double)(*(float *)(lVar19 + 4 + (longlong)((int)uVar22 >> 0xc) * 4) - fVar1) *
                     (double)(uVar22 & 0xfff) * 0.000244140625;
            lVar24 = 0;
            do {
              uVar17 = *(undefined8 *)(lVar18 + lVar24 * 4);
              dVar13 = (double)(float)((ulonglong)uVar17 >> 0x20) * dVar26 + local_158[lVar24 + 1];
              auVar10._8_4_ = SUB84(dVar13,0);
              auVar10._0_8_ = (double)(float)uVar17 * dVar26 + local_158[lVar24];
              auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              *(undefined1 (*) [16])(local_158 + lVar24) = auVar10;
              lVar24 = lVar24 + 2;
            } while (lVar24 != 6);
            lVar18 = lVar18 + -0x18;
            uVar21 = uVar22 - iVar14;
            bVar8 = iVar14 <= (int)uVar22;
            uVar22 = uVar21;
          } while (uVar21 != 0 && bVar8);
          lVar19 = 0;
          do {
            *(ulonglong *)((longlong)iVar5 * 4 + lVar9 + lVar19 * 4) =
                 CONCAT44((float)((local_128[lVar19 + 1] + local_158[lVar19 + 1]) * dVar27),
                          (float)((local_128[lVar19] + local_158[lVar19]) * dVar27));
            lVar19 = lVar19 + 2;
          } while (lVar19 != 6);
          *(int *)((longlong)dVar7 + 0x10) = *(int *)((longlong)dVar7 + 0x10) + 6;
          dVar27 = dVar25 + 1.0 / dVar2;
          iVar15 = lrint(dVar27);
          dVar25 = dVar27 - (double)iVar15;
          dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                           (ulonglong)(dVar25 + 1.0) & -(ulonglong)(dVar25 < 0.0));
          iVar15 = *(int *)((longlong)dVar7 + 0x38);
          iVar3 = *(int *)((longlong)param_1 + 0x14);
          iVar14 = lrint(dVar27 - dVar25);
          iVar4 = *(int *)((longlong)dVar7 + 0x44);
          lVar9 = (longlong)(iVar14 * iVar3 + iVar15) % (longlong)iVar4;
          *(int *)((longlong)dVar7 + 0x38) = (int)lVar9;
        } while (*(int *)((longlong)dVar7 + 0x10) < *(int *)((longlong)dVar7 + 0xc));
      }
      param_1[1] = dVar25;
      *param_1 = dVar2;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar7 + 8) / *(int *)((longlong)param_1 + 0x14);
      *(int *)(param_2 + 0x1c) =
           *(int *)((longlong)dVar7 + 0x10) / *(int *)((longlong)param_1 + 0x14);
      uVar17 = 0;
    }
  }
LAB_142af0d62:
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 142af0de8 FUN_142af0de8 body=1620 status=ok
// SIG undefined FUN_142af0de8(void)

undefined8 FUN_142af0de8(double *param_1,longlong param_2)

{
  void *_Dst;
  void *_Dst_00;
  float fVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  dVar4 = param_1[4];
  if (dVar4 == 0.0) {
    uVar14 = 5;
  }
  else {
    *(int *)((longlong)dVar4 + 4) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x10);
    *(int *)((longlong)dVar4 + 0xc) = *(int *)((longlong)param_1 + 0x14) * *(int *)(param_2 + 0x14);
    *(undefined4 *)((longlong)dVar4 + 0x10) = 0;
    *(undefined4 *)((longlong)dVar4 + 8) = 0;
    dVar24 = *param_1;
    uVar14 = 0x16;
    if ((0.00390625 <= dVar24) && (dVar24 <= 256.0)) {
      dVar23 = ((double)*(int *)((longlong)dVar4 + 0x14) + 2.0) /
               (double)*(int *)((longlong)dVar4 + 0x18);
      dVar22 = dVar24;
      if (*(double *)(param_2 + 0x28) <= dVar24) {
        dVar22 = *(double *)(param_2 + 0x28);
      }
      iVar20 = *(int *)((longlong)param_1 + 0x14);
      iVar8 = lrint(-(ulonglong)(dVar22 < 1.0) & (ulonglong)(dVar23 / dVar22) |
                    ~-(ulonglong)(dVar22 < 1.0) & (ulonglong)dVar23);
      dVar22 = param_1[1];
      iVar9 = lrint(dVar22);
      dVar23 = dVar22 - (double)iVar9;
      dVar23 = (double)(~-(ulonglong)(dVar23 < 0.0) & (ulonglong)dVar23 |
                       (ulonglong)(dVar23 + 1.0) & -(ulonglong)(dVar23 < 0.0));
      iVar9 = *(int *)((longlong)dVar4 + 0x38);
      iVar19 = *(int *)((longlong)param_1 + 0x14);
      iVar10 = lrint(dVar22 - dVar23);
      iVar13 = *(int *)((longlong)dVar4 + 0x44);
      lVar7 = (longlong)(iVar10 * iVar19 + iVar9) % (longlong)iVar13;
      *(int *)((longlong)dVar4 + 0x38) = (int)lVar7;
      if (*(int *)((longlong)dVar4 + 0x10) < *(int *)((longlong)dVar4 + 0xc)) {
        dVar22 = 1.0 / dVar24;
        iVar20 = (iVar8 + 1) * iVar20;
        _Dst = (void *)((longlong)dVar4 + 0x48);
        _Dst_00 = (void *)((longlong)dVar4 + 0x448);
LAB_142af0fe4:
        iVar9 = (int)lVar7;
        if (((iVar13 - iVar9) + *(int *)((longlong)dVar4 + 0x3c)) % iVar13 <= iVar20) {
          uVar14 = FUN_142af19b8(dVar4,*(undefined4 *)((longlong)param_1 + 0x14),param_2,iVar20);
          *(int *)(param_1 + 2) = (int)uVar14;
          if ((int)uVar14 != 0) {
            return uVar14;
          }
          iVar9 = *(int *)((longlong)dVar4 + 0x38);
          if (((*(int *)((longlong)dVar4 + 0x3c) - iVar9) + *(int *)((longlong)dVar4 + 0x44)) %
              *(int *)((longlong)dVar4 + 0x44) <= iVar20) goto LAB_142af13af;
        }
        if ((*(int *)((longlong)dVar4 + 0x40) < 0) ||
           ((double)iVar9 + dVar23 + dVar22 + 1e-20 < (double)*(int *)((longlong)dVar4 + 0x40))) {
          if (0 < *(int *)((longlong)dVar4 + 0xc)) {
            dVar25 = *param_1;
            if (1e-10 < ABS(dVar25 - *(double *)(param_2 + 0x28))) {
              dVar24 = ((*(double *)(param_2 + 0x28) - dVar25) *
                       (double)*(int *)((longlong)dVar4 + 0x10)) /
                       (double)*(int *)((longlong)dVar4 + 0xc) + dVar25;
            }
          }
          dVar25 = dVar24;
          if (1.0 <= dVar24) {
            dVar25 = 1.0;
          }
          dVar25 = dVar25 * (double)*(int *)((longlong)dVar4 + 0x18);
          iVar8 = lrint(dVar25 * 4096.0);
          iVar10 = lrint(dVar23 * dVar25 * 4096.0);
          iVar13 = *(int *)((longlong)dVar4 + 0x10);
          lVar7 = *(longlong *)(param_2 + 8);
          iVar9 = *(int *)((longlong)dVar4 + 0x18);
          uVar3 = *(uint *)((longlong)param_1 + 0x14);
          uVar17 = (ulonglong)(int)uVar3;
          iVar19 = *(int *)((longlong)dVar4 + 0x38);
          iVar11 = *(int *)((longlong)dVar4 + 0x14) * 0x1000;
          iVar12 = (iVar11 - iVar10) / iVar8;
          uVar21 = iVar12 * iVar8 + iVar10;
          uVar18 = iVar19 - iVar12 * uVar3;
          if ((int)uVar18 < 0) {
            iVar12 = (int)(~uVar18 + uVar3) / (int)uVar3;
            uVar21 = uVar21 - iVar12 * iVar8;
            uVar18 = uVar18 + iVar12 * uVar3;
          }
          memset(_Dst,0,uVar17 * 8);
          lVar5 = *(longlong *)((longlong)dVar4 + 0x30);
          uVar16 = uVar17;
          if (-1 < (int)uVar21) {
            lVar15 = (longlong)dVar4 + 0x848 + (longlong)(int)uVar18 * 4;
            do {
              if (0 < (int)uVar3) {
                fVar1 = *(float *)(lVar5 + (ulonglong)(uVar21 >> 0xc) * 4);
                fVar2 = *(float *)(lVar5 + 4 + (ulonglong)(uVar21 >> 0xc) * 4);
                uVar16 = 0;
                do {
                  *(double *)((longlong)_Dst + uVar16 * 8) =
                       (double)*(float *)(lVar15 + uVar16 * 4) *
                       ((double)(uVar21 & 0xfff) * 0.000244140625 * (double)(fVar2 - fVar1) +
                       (double)fVar1) + *(double *)((longlong)_Dst + uVar16 * 8);
                  uVar16 = uVar16 + 1;
                } while (uVar3 != uVar16);
              }
              lVar15 = lVar15 + uVar17 * 4;
              uVar21 = uVar21 - iVar8;
              uVar16 = (ulonglong)uVar3;
            } while (-1 < (int)uVar21);
          }
          iVar11 = (iVar11 - (iVar8 - iVar10)) / iVar8;
          uVar18 = iVar11 * iVar8 + (iVar8 - iVar10);
          iVar19 = (iVar11 + 1) * uVar3 + iVar19;
          memset(_Dst_00,0,uVar17 * 8);
          do {
            if ((int)uVar3 < 1) {
              uVar21 = uVar18 - iVar8;
              bVar6 = (int)uVar18 < iVar8;
              uVar18 = uVar21;
              if (uVar21 == 0 || bVar6) goto LAB_142af130c;
            }
            else {
              fVar1 = *(float *)(lVar5 + (longlong)((int)uVar18 >> 0xc) * 4);
              fVar2 = *(float *)(lVar5 + 4 + (longlong)((int)uVar18 >> 0xc) * 4);
              uVar17 = 0;
              do {
                *(double *)((longlong)_Dst_00 + uVar17 * 8) =
                     (double)*(float *)((longlong)_Dst_00 +
                                       uVar17 * 4 + (longlong)iVar19 * 4 + 0x400) *
                     ((double)(uVar18 & 0xfff) * 0.000244140625 * (double)(fVar2 - fVar1) +
                     (double)fVar1) + *(double *)((longlong)_Dst_00 + uVar17 * 8);
                uVar17 = uVar17 + 1;
              } while (uVar16 != uVar17);
              uVar21 = uVar18 - iVar8;
              bVar6 = (int)uVar18 < iVar8;
              uVar18 = uVar21;
              if (uVar21 == 0 || bVar6) goto LAB_142af12c1;
            }
            iVar19 = iVar19 - uVar3;
          } while( true );
        }
      }
LAB_142af13af:
      param_1[1] = dVar23;
      *param_1 = dVar24;
      *(int *)(param_2 + 0x18) = *(int *)((longlong)dVar4 + 8) / *(int *)((longlong)param_1 + 0x14);
      *(int *)(param_2 + 0x1c) =
           *(int *)((longlong)dVar4 + 0x10) / *(int *)((longlong)param_1 + 0x14);
      uVar14 = 0;
    }
  }
  return uVar14;
LAB_142af12c1:
  uVar17 = 0;
  do {
    *(float *)((longlong)iVar13 * 4 + lVar7 + uVar17 * 4) =
         (float)((*(double *)((longlong)dVar4 + 0x48 + uVar17 * 8) +
                 *(double *)((longlong)_Dst_00 + uVar17 * 8)) * (dVar25 / (double)iVar9));
    uVar17 = uVar17 + 1;
  } while (uVar16 != uVar17);
  iVar13 = *(int *)((longlong)dVar4 + 0x10);
LAB_142af130c:
  *(int *)((longlong)dVar4 + 0x10) = iVar13 + *(int *)((longlong)param_1 + 0x14);
  dVar25 = dVar23 + 1.0 / dVar24;
  iVar9 = lrint(dVar25);
  dVar23 = dVar25 - (double)iVar9;
  dVar23 = (double)(~-(ulonglong)(dVar23 < 0.0) & (ulonglong)dVar23 |
                   (ulonglong)(dVar23 + 1.0) & -(ulonglong)(dVar23 < 0.0));
  iVar9 = *(int *)((longlong)dVar4 + 0x38);
  iVar19 = *(int *)((longlong)param_1 + 0x14);
  iVar8 = lrint(dVar25 - dVar23);
  iVar13 = *(int *)((longlong)dVar4 + 0x44);
  lVar7 = (longlong)(iVar8 * iVar19 + iVar9) % (longlong)iVar13;
  *(int *)((longlong)dVar4 + 0x38) = (int)lVar7;
  if (*(int *)((longlong)dVar4 + 0xc) <= *(int *)((longlong)dVar4 + 0x10)) goto LAB_142af13af;
  goto LAB_142af0fe4;
}



// FUNCTION 142af143c FUN_142af143c body=109 status=ok
// SIG undefined FUN_142af143c(void)

void FUN_142af143c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    iVar1 = *(int *)(lVar2 + 0x44);
    uVar3 = 0;
    memset((void *)(lVar2 + 0x848),0,(longlong)iVar1 * 4);
    memset((void *)(lVar2 + (longlong)iVar1 * 4 + 0x848),
           (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),0xaa),(longlong)*(int *)(param_1 + 0x14) << 2
          );
    return;
  }
  return;
}



// FUNCTION 142af14a9 FUN_142af14a9 body=108 status=ok
// SIG undefined FUN_142af14a9(void)

undefined8 FUN_142af14a9(longlong param_1,longlong param_2)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  undefined8 uVar1;
  
  _Src = *(void **)(param_1 + 0x20);
  if (_Src == (void *)0x0) {
    uVar1 = 5;
  }
  else {
    _Size = ((longlong)*(int *)(param_1 + 0x14) + (longlong)*(int *)((longlong)_Src + 0x44)) * 4 +
            0x850;
    uVar1 = 0;
    _Dst = (void *)FUN_14001cc68(_Size,0);
    if (_Dst == (void *)0x0) {
      uVar1 = 1;
    }
    else {
      memcpy(_Dst,_Src,_Size);
      *(void **)(param_2 + 0x20) = _Dst;
    }
  }
  return uVar1;
}



// FUNCTION 142af1515 FUN_142af1515 body=1050 status=ok
// SIG undefined FUN_142af1515(void)

undefined8 FUN_142af1515(double *param_1,longlong *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  
  iVar3 = (int)param_2[2];
  if (0 < iVar3) {
    dVar1 = param_1[4];
    if (dVar1 == 0.0) {
      return 5;
    }
    if (*(char *)((longlong)dVar1 + 4) == '\0') {
      if (0 < *(int *)((longlong)param_1 + 0x14)) {
        lVar6 = 0;
        do {
          *(undefined4 *)((longlong)dVar1 + 0x18 + lVar6 * 4) =
               *(undefined4 *)(*param_2 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)((longlong)param_1 + 0x14));
      }
      *(undefined1 *)((longlong)dVar1 + 4) = 1;
      iVar3 = (int)param_2[2];
    }
    *(int *)((longlong)dVar1 + 8) = iVar3 * *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)dVar1 + 0x10) =
         *(int *)((longlong)param_1 + 0x14) * *(int *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)dVar1 + 0x14) = 0;
    *(undefined4 *)((longlong)dVar1 + 0xc) = 0;
    dVar12 = *param_1;
    if (dVar12 < 0.00390625) {
      return 0x16;
    }
    if (256.0 < dVar12) {
      return 0x16;
    }
    dVar11 = param_1[1];
    if (dVar11 < 1.0) {
      iVar3 = 0;
      do {
        iVar4 = *(int *)((longlong)dVar1 + 0x10);
        if ((iVar4 <= iVar3) ||
           ((double)*(int *)((longlong)dVar1 + 8) <=
            (double)*(int *)((longlong)param_1 + 0x14) * dVar11 +
            (double)*(int *)((longlong)dVar1 + 0xc))) break;
        if (0 < iVar4) {
          dVar10 = *param_1;
          if (1e-20 < ABS(dVar10 - (double)param_2[5])) {
            dVar12 = (((double)param_2[5] - dVar10) * (double)iVar3) / (double)iVar4 + dVar10;
          }
        }
        if (0 < *(int *)((longlong)param_1 + 0x14)) {
          lVar6 = 0;
          do {
            *(undefined4 *)(param_2[1] + (longlong)iVar3 * 4) =
                 *(undefined4 *)((longlong)dVar1 + 0x18 + lVar6 * 4);
            iVar3 = *(int *)((longlong)dVar1 + 0x14) + 1;
            *(int *)((longlong)dVar1 + 0x14) = iVar3;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)((longlong)param_1 + 0x14));
        }
        dVar11 = dVar11 + 1.0 / dVar12;
      } while (dVar11 < 1.0);
    }
    iVar3 = lrint(SUB84(dVar11,0));
    dVar10 = dVar11 - (double)iVar3;
    dVar10 = (double)(~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10 |
                     (ulonglong)(dVar10 + 1.0) & -(ulonglong)(dVar10 < 0.0));
    uVar15 = 0;
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    iVar4 = lrint(SUB84(dVar11 - dVar10,0));
    iVar5 = iVar4 * iVar3 + *(int *)((longlong)dVar1 + 0xc);
    *(int *)((longlong)dVar1 + 0xc) = iVar5;
    iVar3 = *(int *)((longlong)dVar1 + 0x10);
    iVar4 = *(int *)((longlong)dVar1 + 0x14);
    if (iVar4 < iVar3) {
      do {
        iVar9 = *(int *)((longlong)param_1 + 0x14);
        if ((double)*(int *)((longlong)dVar1 + 8) < (double)iVar9 * dVar10 + (double)iVar5) break;
        if (0 < iVar3) {
          dVar11 = *param_1;
          if (1e-20 < ABS(dVar11 - (double)param_2[5])) {
            dVar12 = (((double)param_2[5] - dVar11) * (double)iVar4) / (double)iVar3 + dVar11;
          }
        }
        if (0 < iVar9) {
          iVar3 = 0;
          do {
            *(undefined4 *)(param_2[1] + (longlong)iVar4 * 4) =
                 *(undefined4 *)
                  (*param_2 + (longlong)((*(int *)((longlong)dVar1 + 0xc) - iVar9) + iVar3) * 4);
            iVar4 = *(int *)((longlong)dVar1 + 0x14) + 1;
            *(int *)((longlong)dVar1 + 0x14) = iVar4;
            iVar3 = iVar3 + 1;
            iVar9 = *(int *)((longlong)param_1 + 0x14);
          } while (iVar3 < iVar9);
        }
        dVar13 = dVar10 + 1.0 / dVar12;
        iVar3 = lrint(SUB84(dVar13,0));
        dVar11 = dVar13 - (double)iVar3;
        auVar14._0_8_ = ~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11;
        auVar14._8_8_ = 0;
        auVar2._8_4_ = (int)uVar15;
        auVar2._0_8_ = (ulonglong)(dVar11 + 1.0) & -(ulonglong)(dVar11 < 0.0);
        auVar2._12_4_ = (int)((ulonglong)uVar15 >> 0x20);
        iVar3 = *(int *)((longlong)param_1 + 0x14);
        dVar10 = SUB168(auVar14 | auVar2,0);
        iVar4 = lrint(SUB84(dVar13 - dVar10,0));
        iVar5 = iVar4 * iVar3 + *(int *)((longlong)dVar1 + 0xc);
        *(int *)((longlong)dVar1 + 0xc) = iVar5;
        iVar3 = *(int *)((longlong)dVar1 + 0x10);
        iVar4 = *(int *)((longlong)dVar1 + 0x14);
        uVar15 = SUB168(auVar14 | auVar2,8);
      } while (iVar4 < iVar3);
    }
    iVar3 = *(int *)((longlong)dVar1 + 8);
    uVar7 = *(uint *)((longlong)param_1 + 0x14);
    if (iVar5 - iVar3 != 0 && iVar3 <= iVar5) {
      dVar10 = dVar10 + (double)((iVar5 - iVar3) / (int)uVar7);
      *(int *)((longlong)dVar1 + 0xc) = iVar3;
      uVar7 = *(uint *)((longlong)param_1 + 0x14);
    }
    uVar8 = (ulonglong)uVar7;
    param_1[1] = dVar10;
    iVar3 = *(int *)((longlong)dVar1 + 0xc);
    if (0 < (int)uVar7 && 0 < iVar3) {
      lVar6 = 0;
      do {
        *(undefined4 *)((longlong)dVar1 + 0x18 + lVar6 * 4) =
             *(undefined4 *)(*param_2 + (longlong)((iVar3 + (int)lVar6) - (int)uVar8) * 4);
        lVar6 = lVar6 + 1;
        uVar7 = *(uint *)((longlong)param_1 + 0x14);
        uVar8 = (ulonglong)(int)uVar7;
      } while (lVar6 < (longlong)uVar8);
    }
    *param_1 = dVar12;
    *(int *)(param_2 + 3) = *(int *)((longlong)dVar1 + 0xc) / (int)uVar7;
    *(int *)((longlong)param_2 + 0x1c) =
         *(int *)((longlong)dVar1 + 0x14) / *(int *)((longlong)param_1 + 0x14);
  }
  return 0;
}



// FUNCTION 142af1953 FUN_142af1953 body=101 status=ok
// SIG undefined FUN_142af1953(void)

undefined8 FUN_142af1953(longlong param_1,longlong param_2)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  undefined8 uVar1;
  
  _Src = *(void **)(param_1 + 0x20);
  if (_Src == (void *)0x0) {
    uVar1 = 5;
  }
  else {
    _Size = (longlong)*(int *)(param_1 + 0x14) * 4 + 0x18;
    uVar1 = 0;
    _Dst = (void *)FUN_14001cc68(_Size,0);
    if (_Dst == (void *)0x0) {
      uVar1 = 1;
    }
    else {
      memcpy(_Dst,_Src,_Size);
      *(void **)(param_2 + 0x20) = _Dst;
    }
  }
  return uVar1;
}



// FUNCTION 142af19b8 FUN_142af19b8 body=478 status=ok
// SIG undefined FUN_142af19b8(void)

undefined8 FUN_142af19b8(longlong param_1,int param_2,longlong *param_3,int param_4)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x40) < 0) && (*param_3 != 0)) {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x44);
      iVar1 = iVar3 + param_4 * -2;
      *(int *)(param_1 + 0x3c) = param_4;
      *(int *)(param_1 + 0x38) = param_4;
      iVar7 = param_4;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x3c);
      iVar3 = *(int *)(param_1 + 0x44);
      if (param_4 + param_2 + iVar7 < iVar3) {
        iVar5 = -(iVar1 + param_4);
      }
      else {
        iVar7 = (iVar7 - iVar1) + param_4;
        memmove((void *)(param_1 + 0x848),
                (void *)(param_1 + (longlong)iVar1 * 4 + 0x848 + (longlong)param_4 * -4),
                (longlong)iVar7 * 4);
        *(int *)(param_1 + 0x38) = param_4;
        *(int *)(param_1 + 0x3c) = iVar7;
        iVar5 = param_4 * -2;
      }
      iVar1 = 0;
      if (0 < iVar3 + iVar5) {
        iVar1 = iVar3 + iVar5;
      }
    }
    iVar5 = *(int *)(param_1 + 4) - *(int *)(param_1 + 8);
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
    uVar6 = iVar5 - iVar5 % param_2;
    if ((int)uVar6 < 0) {
      return 0x15;
    }
    if (iVar3 < (int)(uVar6 + iVar7)) {
      return 0x15;
    }
    memcpy((void *)(param_1 + (longlong)iVar7 * 4 + 0x848),
           (void *)((longlong)*(int *)(param_1 + 8) * 4 + *param_3),(ulonglong)uVar6 << 2);
    lVar4 = (longlong)*(int *)(param_1 + 0x3c) + (longlong)(int)uVar6;
    iVar7 = (int)lVar4;
    *(int *)(param_1 + 0x3c) = iVar7;
    iVar1 = uVar6 + *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == *(int *)(param_1 + 4)) {
      iVar1 = iVar7 - *(int *)(param_1 + 0x38);
      if (iVar1 < param_4 * 2) {
        if ((int)param_3[4] == 0) {
          return 0;
        }
        _Dst = (void *)(param_1 + 0x848);
        iVar5 = *(int *)(param_1 + 0x44);
        iVar2 = iVar5 - iVar7;
        iVar3 = param_4 + 5;
        if (iVar2 < iVar3) {
          iVar7 = iVar1 + param_4;
          lVar4 = (longlong)iVar7;
          memmove(_Dst,(void *)((longlong)_Dst +
                               (longlong)param_4 * -4 + (longlong)*(int *)(param_1 + 0x38) * 4),
                  lVar4 * 4);
          *(int *)(param_1 + 0x38) = param_4;
          *(int *)(param_1 + 0x3c) = iVar7;
          iVar2 = iVar5 - iVar7;
        }
        *(int *)(param_1 + 0x40) = iVar7;
        if (iVar5 < iVar7 + iVar3) {
          iVar3 = iVar2;
        }
        if (param_4 < -5) {
          iVar3 = iVar2;
        }
        memset((void *)((longlong)_Dst + lVar4 * 4),0,(longlong)iVar3 * 4);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar3;
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 142af1b96 FUN_142af1b96 body=102 status=ok
// SIG undefined FUN_142af1b96(void)

void FUN_142af1b96(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149fcfe38;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1462960ac(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af1c00 FUN_142af1c00 body=274 status=ok
// SIG undefined FUN_142af1c00(void)

undefined4 *
FUN_142af1c00(undefined4 *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  void *_Dst;
  
  *param_1 = param_5;
  param_1[1] = param_4;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_4 = param_4 >> 2;
  param_1[2] = param_4;
  if (param_2 % param_4 != 0) {
    do {
      param_2 = param_2 + 1;
    } while (param_2 % param_4 != 0);
    param_1[0xc] = param_2;
  }
  if (0x1fffffff < (int)param_3) {
    param_1[0xd] = 0x1fffffff;
    param_3 = 0x1fffffff;
  }
  uVar1 = 0x1fffffff;
  if ((int)param_2 < 0x1fffffff) {
    uVar1 = param_2;
  }
  if (0x1fffffff < (int)param_2 || (int)uVar1 < (int)param_3) {
    if ((int)uVar1 < (int)param_3) {
      uVar1 = param_3;
    }
    param_1[0xc] = uVar1;
  }
  uVar2 = FUN_14001cc68((longlong)(int)(param_3 << 2),param_5);
  *(undefined8 *)(param_1 + 6) = uVar2;
  _Dst = (void *)FUN_14001cc68((longlong)(int)(param_1[0xc] << 2),*param_1);
  *(void **)(param_1 + 4) = _Dst;
  if (0 < (int)param_1[0xd]) {
    memset(*(void **)(param_1 + 6),0,(longlong)(int)(param_1[0xd] << 2));
    _Dst = *(void **)(param_1 + 4);
  }
  if (0 < (int)param_1[0xc]) {
    memset(_Dst,0,(longlong)(int)(param_1[0xc] << 2));
    _Dst = *(void **)(param_1 + 4);
  }
  *(void **)(param_1 + 10) = _Dst;
  *(void **)(param_1 + 8) = _Dst;
  return param_1;
}



// FUNCTION 142af1d12 FUN_142af1d12 body=80 status=ok
// SIG undefined FUN_142af1d12(void)

void FUN_142af1d12(undefined8 *param_1,float param_2,float param_3)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = *(int *)(param_1 + 1);
  _Dst = (void *)*param_1;
  if (1e-08 < ABS(param_2 - param_3)) {
    FUN_1421c4270(_Dst,iVar1,param_2);
    return;
  }
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    memset(_Dst,0,(longlong)iVar1 << 2);
    return;
  }
  FUN_1421c4f70(_Dst,iVar1,param_2,param_3);
  return;
}



// FUNCTION 142af1d62 FUN_142af1d62 body=69 status=ok
// SIG undefined FUN_142af1d62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af1d62(void)

{
  _DAT_14c99e2a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af1da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e2b0,1);
  return;
}



// FUNCTION 142af1da7 FUN_142af1da7 body=15 status=ok
// SIG undefined FUN_142af1da7(void)

void FUN_142af1da7(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1421c4ff0(*param_1,*param_2,*(undefined4 *)(param_2 + 1));
  return;
}



// FUNCTION 142af1db6 FUN_142af1db6 body=14 status=ok
// SIG undefined FUN_142af1db6(void)

void FUN_142af1db6(undefined8 *param_1,undefined4 param_2)

{
  FUN_1421c4f70(*param_1,*(undefined4 *)(param_1 + 1),param_2);
  return;
}



// FUNCTION 142af1dc4 FUN_142af1dc4 body=156 status=ok
// SIG undefined FUN_142af1dc4(void)

longlong * FUN_142af1dc4(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_142af3157(&local_40);
  lVar1 = local_40;
  if ((longlong)local_38 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar2) + 0x28))
                (*(longlong **)(lVar1 + lVar2),param_1,param_2);
      if (*param_1 != 0) goto LAB_142af1e2c;
      lVar2 = lVar2 + 8;
    } while ((longlong)local_38 * 8 != lVar2);
  }
  *param_1 = 0;
LAB_142af1e2c:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af1e6f FUN_142af1e6f body=2220 status=ok
// SIG undefined FUN_142af1e6f(void)

void FUN_142af1e6f(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  uint local_94;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [3];
  int local_5c;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14702e5d9(&local_58,L"-Help",param_1);
  if (uStack_50._4_4_ != -1) {
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400d7a00();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_14702e5d9(&local_58,L"-Filter=",param_1);
  plVar1 = local_58;
  if (uStack_50._4_4_ != -1) {
    iVar12 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar12 = 0;
    }
    FUN_1402980a2(local_78,local_58,iVar12);
    if (plVar1 != (longlong *)0x0) {
      FUN_1400020a8(plVar1);
    }
  }
  FUN_14702e5d9(&local_58,L"-Behavior=",param_1);
  uVar5 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (uStack_50._4_4_ == -1) goto LAB_142af2025;
  plVar1 = (longlong *)&DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    plVar1 = local_58;
  }
  for (pwVar6 = L"ufferCheckBehavior::Nothing"; pwVar6[-2] != L'\0'; pwVar6 = pwVar6 + 1) {
    if (pwVar6[-2] == L':') goto LAB_142af1fc2;
  }
  pwVar6 = L"EBufferCheckBehavior::Nothing";
LAB_142af1fc2:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)plVar1 + lVar8);
    uVar4 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_142af2010;
LAB_142af1fe1:
    lVar8 = lVar8 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar2 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar2]) goto LAB_142af1fe1;
  }
  if (uVar9 != uVar10) {
    pwVar6 = L"ufferCheckBehavior::Ensure";
    goto LAB_142af25e4;
  }
LAB_142af2010:
  uVar4 = 0;
  goto LAB_142af2012;
LAB_142af25e4:
  if (pwVar6[-2] == L'\0') goto LAB_142af25fa;
  if (pwVar6[-2] == L':') goto LAB_142af2601;
  pwVar6 = pwVar6 + 1;
  goto LAB_142af25e4;
LAB_142af25fa:
  pwVar6 = L"EBufferCheckBehavior::Ensure";
LAB_142af2601:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)plVar1 + lVar8);
    uVar4 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_142af2644;
LAB_142af2619:
    lVar8 = lVar8 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar2 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar2]) goto LAB_142af2619;
  }
  if (uVar9 != uVar10) {
    pwVar6 = L"ufferCheckBehavior::Log";
    goto LAB_142af2653;
  }
LAB_142af2644:
  uVar4 = CONCAT71(uVar5,1);
  goto LAB_142af2012;
LAB_142af2653:
  if (pwVar6[-2] == L'\0') goto LAB_142af2669;
  if (pwVar6[-2] == L':') goto LAB_142af2670;
  pwVar6 = pwVar6 + 1;
  goto LAB_142af2653;
LAB_142af2669:
  pwVar6 = L"EBufferCheckBehavior::Log";
LAB_142af2670:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)plVar1 + lVar8);
    uVar4 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) {
      if ((uVar10 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar2 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar2]) goto LAB_142af2688;
      }
      uVar4 = CONCAT71(uVar5,2);
      if (uVar9 == uVar10) goto LAB_142af2012;
      pwVar6 = L"ufferCheckBehavior::Break";
      goto LAB_142af26c4;
    }
    if (uVar9 == 0) break;
LAB_142af2688:
    lVar8 = lVar8 + 2;
  }
  uVar4 = CONCAT71(uVar5,2);
  goto LAB_142af2012;
LAB_142af26c4:
  if (pwVar6[-2] == L'\0') goto LAB_142af26e2;
  if (pwVar6[-2] == L':') goto LAB_142af26e9;
  pwVar6 = pwVar6 + 1;
  goto LAB_142af26c4;
LAB_142af220c:
  if (pwVar6[-2] == L'\0') goto LAB_142af2237;
  if (pwVar6[-2] == L':') goto LAB_142af223e;
  pwVar6 = pwVar6 + 1;
  goto LAB_142af220c;
LAB_142af2237:
  pwVar6 = L"ECheckBufferFlags::Infinity";
LAB_142af223e:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_142af229c;
LAB_142af2254:
    lVar8 = lVar8 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[(uint)uVar10]) goto LAB_142af2254;
    iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar9] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar10];
  }
  else {
    iVar12 = (uint)uVar9 - (uint)uVar10;
  }
  if (iVar12 != 0) {
    pwVar6 = L"heckBufferFlags::Nan";
    goto LAB_142af2289;
  }
LAB_142af229c:
  uVar14 = 2;
  goto LAB_142af2222;
LAB_142af2289:
  if (pwVar6[-2] == L'\0') goto LAB_142af22a7;
  if (pwVar6[-2] == L':') goto LAB_142af22ae;
  pwVar6 = pwVar6 + 1;
  goto LAB_142af2289;
LAB_142af22a7:
  pwVar6 = L"ECheckBufferFlags::Nan";
LAB_142af22ae:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar4 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_142af2308;
LAB_142af22c4:
    lVar8 = lVar8 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar2 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar2]) goto LAB_142af22c4;
  }
  if (uVar9 != uVar10) {
    pwVar6 = L"heckBufferFlags::Denormalized";
    goto LAB_142af22f5;
  }
LAB_142af2308:
  uVar14 = 4;
  goto LAB_142af2222;
LAB_142af22f5:
  if (pwVar6[-2] == L'\0') goto LAB_142af2313;
  if (pwVar6[-2] == L':') goto LAB_142af231a;
  pwVar6 = pwVar6 + 1;
  goto LAB_142af22f5;
LAB_142af2313:
  pwVar6 = L"ECheckBufferFlags::Denormalized";
LAB_142af231a:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar4 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_142af2374;
LAB_142af2330:
    lVar8 = lVar8 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar2 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar2]) goto LAB_142af2330;
  }
  if (uVar9 != uVar10) {
    pwVar6 = L"heckBufferFlags::All";
    goto LAB_142af2361;
  }
LAB_142af2374:
  uVar14 = 8;
  goto LAB_142af2222;
LAB_142af2361:
  if (pwVar6[-2] == L'\0') goto LAB_142af237f;
  if (pwVar6[-2] == L':') goto LAB_142af2386;
  pwVar6 = pwVar6 + 1;
  goto LAB_142af2361;
LAB_142af237f:
  pwVar6 = L"ECheckBufferFlags::All";
LAB_142af2386:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar7 + lVar8);
    uVar4 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_142af23cb;
LAB_142af239d:
    lVar8 = lVar8 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar2 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar2]) goto LAB_142af239d;
  }
  if (uVar9 != uVar10) goto LAB_142af2222;
LAB_142af23cb:
  uVar14 = 0xe;
LAB_142af2222:
  uVar13 = uVar13 | uVar14;
  plVar1 = plVar1 + 2;
  if (plVar1 == local_58 + local_90 * 2) goto LAB_142af209c;
  goto LAB_142af21a1;
LAB_142af26e2:
  pwVar6 = L"EBufferCheckBehavior::Break";
LAB_142af26e9:
  lVar8 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)plVar1 + lVar8);
    uVar2 = (ulonglong)uVar9;
    uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
    if (uVar9 != uVar10) break;
    if (uVar9 == 0) goto LAB_142af2739;
LAB_142af2704:
    lVar8 = lVar8 + 2;
  }
  if ((uVar10 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar11]) goto LAB_142af2704;
  }
  uVar4 = CONCAT71(uVar5,1);
  if (uVar9 != uVar10) goto LAB_142af2012;
LAB_142af2739:
  uVar4 = CONCAT71((int7)(uVar4 >> 8),3);
LAB_142af2012:
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (longlong *)0x0;
LAB_142af2025:
  FUN_14702e5d9(local_78 + 2,L"-Checks=",param_1);
  uVar13 = 0xe;
  if (local_5c != -1) {
    local_94 = (uint)uVar4;
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_a8 = 1;
    local_80 = param_2;
    FUN_144a38a52(local_78 + 2,&local_58,&PTR_DAT_14c75f570,3);
    local_88 = local_58;
    local_90 = (longlong)(int)uStack_50;
    uVar13 = 0;
    if (local_90 != 0) {
      uVar13 = 0;
      plVar1 = local_58;
LAB_142af21a1:
      puVar7 = &DAT_149dfb77a;
      if ((int)plVar1[1] != 0) {
        puVar7 = (undefined2 *)*plVar1;
      }
      for (pwVar6 = L"heckBufferFlags::None"; pwVar6[-2] != L'\0'; pwVar6 = pwVar6 + 1) {
        if (pwVar6[-2] == L':') goto LAB_142af21c7;
      }
      pwVar6 = L"ECheckBufferFlags::None";
LAB_142af21c7:
      lVar8 = 0;
      while( true ) {
        uVar9 = *(ushort *)((longlong)puVar7 + lVar8);
        uVar4 = (ulonglong)uVar9;
        uVar10 = *(ushort *)((longlong)pwVar6 + lVar8);
        if (uVar9 != uVar10) {
          if ((uVar10 | uVar9) < 0x80) {
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
            uVar2 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar2]) goto LAB_142af21dd;
          }
          uVar14 = 0;
          if (uVar9 == uVar10) goto LAB_142af2222;
          pwVar6 = L"heckBufferFlags::Infinity";
          goto LAB_142af220c;
        }
        if (uVar9 == 0) break;
LAB_142af21dd:
        lVar8 = lVar8 + 2;
      }
      uVar14 = 0;
      goto LAB_142af2222;
    }
LAB_142af209c:
    FUN_1447a1747(local_58,local_90);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    param_2 = local_80;
    uVar4 = (ulonglong)local_94;
    if ((local_5c != -1) && (local_78[2] != 0)) {
      FUN_1400020a8();
    }
  }
  FUN_14702e5d9(&local_58,L"-Verbose",param_1);
  if ((uStack_50._4_4_ != -1) && (local_58 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  FUN_14702e5d9(&local_58,L"-Reset",param_1);
  if ((uStack_50._4_4_ != -1) && (local_58 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  switch(uVar4 & 0xff) {
  case 0:
    for (pwVar6 = L"ufferCheckBehavior::Nothing"; pwVar6[-2] != L'\0'; pwVar6 = pwVar6 + 1) {
      if (pwVar6[-2] == L':') goto LAB_142af2457;
    }
    pwVar6 = L"EBufferCheckBehavior::Nothing";
    break;
  case 1:
    for (pwVar6 = L"ufferCheckBehavior::Ensure"; pwVar6[-2] != L'\0'; pwVar6 = pwVar6 + 1) {
      if (pwVar6[-2] == L':') goto LAB_142af2457;
    }
    pwVar6 = L"EBufferCheckBehavior::Ensure";
    break;
  case 2:
    for (pwVar6 = L"ufferCheckBehavior::Log"; pwVar6[-2] != L'\0'; pwVar6 = pwVar6 + 1) {
      if (pwVar6[-2] == L':') goto LAB_142af2457;
    }
    pwVar6 = L"EBufferCheckBehavior::Log";
    break;
  case 3:
    for (pwVar6 = L"ufferCheckBehavior::Break"; pwVar6[-2] != L'\0'; pwVar6 = pwVar6 + 1) {
      if (pwVar6[-2] == L':') goto LAB_142af2457;
    }
    pwVar6 = L"EBufferCheckBehavior::Break";
    break;
  default:
    pwVar6 = L"Unknown EBufferCheckBehavior";
  }
LAB_142af2457:
  pwVar3 = L"Unknown ECheckBufferFlags";
  switch(uVar13 >> 1) {
  case 0:
    for (pwVar3 = L"heckBufferFlags::None"; pwVar3[-2] != L'\0'; pwVar3 = pwVar3 + 1) {
      if (pwVar3[-2] == L':') goto switchD_142af2479_caseD_3;
    }
    pwVar3 = L"ECheckBufferFlags::None";
    break;
  case 1:
    for (pwVar3 = L"heckBufferFlags::Infinity"; pwVar3[-2] != L'\0'; pwVar3 = pwVar3 + 1) {
      if (pwVar3[-2] == L':') goto switchD_142af2479_caseD_3;
    }
    pwVar3 = L"ECheckBufferFlags::Infinity";
    break;
  case 2:
    for (pwVar3 = L"heckBufferFlags::Nan"; pwVar3[-2] != L'\0'; pwVar3 = pwVar3 + 1) {
      if (pwVar3[-2] == L':') goto switchD_142af2479_caseD_3;
    }
    pwVar3 = L"ECheckBufferFlags::Nan";
    break;
  case 4:
    for (pwVar3 = L"heckBufferFlags::Denormalized"; pwVar3[-2] != L'\0'; pwVar3 = pwVar3 + 1) {
      if (pwVar3[-2] == L':') goto switchD_142af2479_caseD_3;
    }
    pwVar3 = L"ECheckBufferFlags::Denormalized";
    break;
  case 7:
    for (pwVar3 = L"heckBufferFlags::All"; pwVar3[-2] != L'\0'; pwVar3 = pwVar3 + 1) {
      if (pwVar3[-2] == L':') goto switchD_142af2479_caseD_3;
    }
    pwVar3 = L"ECheckBufferFlags::All";
  }
switchD_142af2479_caseD_3:
  FUN_140056680(&local_58,pwVar3);
  plVar1 = local_58;
  if ((int)uStack_50 == 0) {
    plVar1 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140047918(param_2,L"Submix Buffer Diagnostics. UsingFlags=\'%s\', Behavior=\'%s\'",plVar1,
                pwVar6);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e2c8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e2c8);
  FUN_140047918(param_2,L"TotalChecks=%d, Filtered=%d",0,0);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af2741 FUN_142af2741 body=69 status=ok
// SIG undefined FUN_142af2741(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af2741(void)

{
  _DAT_14c99e2f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af2783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e2f8,1);
  return;
}



// FUNCTION 142af2786 FUN_142af2786 body=15 status=ok
// SIG undefined FUN_142af2786(void)

void FUN_142af2786(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1421c4bc0(*param_1,*param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af2795 FUN_142af2795 body=18 status=ok
// SIG undefined FUN_142af2795(void)

void FUN_142af2795(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  FUN_1421c4d00(*param_1,*param_2,*(undefined4 *)(param_1 + 1),param_3);
  return;
}



// FUNCTION 142af27a7 FUN_142af27a7 body=18 status=ok
// SIG undefined FUN_142af27a7(void)

void FUN_142af27a7(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = 0;
  FUN_1421c56b0(*param_1,param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af27b9 FUN_142af27b9 body=69 status=ok
// SIG undefined FUN_142af27b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af27b9(void)

{
  _DAT_14c99e318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af27fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e320,1);
  return;
}



// FUNCTION 142af27fe FUN_142af27fe body=69 status=ok
// SIG undefined FUN_142af27fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af27fe(void)

{
  _DAT_14c99e328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af2840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e330,1);
  return;
}



// FUNCTION 142af2843 FUN_142af2843 body=18 status=ok
// SIG undefined FUN_142af2843(void)

void FUN_142af2843(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1421c5730(*param_1,*param_2,*param_3,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af2856 FUN_142af2856 body=1148 status=ok
// SIG undefined FUN_142af2856(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af2856(longlong param_1,undefined4 *param_2,int param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  ulonglong uVar23;
  undefined1 auStack_1218 [32];
  longlong *local_11f8;
  longlong *local_11f0;
  uint local_11dc;
  ulonglong local_11d8;
  undefined4 *local_11d0;
  uint local_11c8;
  uint local_11c4;
  longlong local_11c0;
  undefined4 *local_11b8;
  longlong local_11b0;
  longlong local_11a8;
  ulonglong local_11a0;
  longlong local_1198;
  ulonglong local_1190;
  undefined1 local_1188 [1024];
  longlong local_d88 [8];
  undefined1 auStack_d48 [1024];
  longlong local_948 [8];
  undefined1 local_908 [1024];
  ulonglong local_508 [8];
  undefined1 local_4c8 [1024];
  longlong local_c8 [9];
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x142af286c;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1218;
  uVar1 = *(uint *)(param_1 + 0xa8);
  lVar19 = (longlong)(int)uVar1;
  uVar10 = *(uint *)(param_1 + 0x88);
  local_11d8 = (ulonglong)uVar10;
  local_11dc = param_3 / (int)uVar1;
  uVar4 = uVar1;
  if ((int)uVar1 < (int)uVar10) {
    uVar4 = uVar10;
  }
  uVar6 = 1;
  if (1 < (int)uVar4) {
    uVar6 = (ulonglong)uVar4;
  }
  uVar2 = 0x100 / uVar6;
  puVar11 = (undefined1 *)(0x100 % uVar6);
  if (0 < lVar19) {
    lVar8 = uVar2 * 4;
    puVar7 = local_1188;
    puVar11 = local_908;
    puVar14 = local_4c8;
    lVar17 = 0;
    do {
      local_c8[lVar17] = (longlong)puVar14;
      local_508[lVar17] = (ulonglong)puVar11;
      local_d88[lVar17] = (longlong)puVar7;
      lVar17 = lVar17 + 1;
      puVar7 = puVar7 + lVar8;
      puVar11 = puVar11 + lVar8;
      puVar14 = puVar14 + lVar8;
    } while (lVar19 != lVar17);
  }
  uVar4 = (uint)uVar2;
  if (0 < (int)uVar10) {
    lVar8 = local_11d8 - 1;
    auVar20._8_4_ = (int)lVar8;
    auVar20._0_8_ = lVar8;
    auVar20._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    auVar21 = pmovsxbq(in_XMM2,0x100);
    lVar8 = 0;
    auVar22 = pmovsxbq(in_XMM5,0x202);
    do {
      uVar6 = auVar21._8_8_;
      if ((bool)(~(SUB168(auVar20 ^ _DAT_149931e80,0) < SUB168(auVar21 ^ _DAT_149931e80,0)) & 1)) {
        *(undefined1 **)((longlong)local_948 + lVar8) =
             auStack_d48 + (((auVar21._0_8_ >> 0x20) * uVar2 << 0x20) + auVar21._0_4_ * uVar2) * 4;
      }
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      uVar23 = -(ulonglong)(SUB168(auVar20 ^ _DAT_149931e80,8) < SUB168(auVar21 ^ _DAT_149931e80,8))
               ^ auVar3._8_8_;
      puVar11 = (undefined1 *)(uVar23 & 0xff);
      if ((uVar23 & 1) != 0) {
        puVar11 = auStack_d48 +
                  (((uVar6 >> 0x20) * uVar2 << 0x20) + (uVar6 & 0xffffffff) * uVar2) * 4;
        *(undefined1 **)((longlong)local_948 + lVar8 + 8) = puVar11;
      }
      auVar21._0_8_ = auVar21._0_8_ + auVar22._0_8_;
      auVar21._8_8_ = uVar6 + auVar22._8_8_;
      lVar8 = lVar8 + 0x10;
    } while ((ulonglong)(uVar10 + 1 >> 1) << 4 != lVar8);
  }
  local_11c0 = param_1;
  if (0 < (int)local_11dc) {
    lVar8 = (longlong)(int)uVar10;
    local_11a0 = (ulonglong)local_11dc;
    local_11a8 = uVar2 * lVar19 * 4;
    local_11b0 = uVar2 * lVar8 * 4;
    uVar23 = 0;
    local_11b8 = param_6;
    local_11d0 = param_5;
    puVar11 = (undefined1 *)(ulonglong)local_11dc;
    uVar6 = uVar2;
    local_11c8 = uVar4;
    local_1198 = lVar8;
    do {
      iVar18 = local_11dc - (int)uVar23;
      if ((int)uVar6 < iVar18) {
        iVar18 = (int)uVar6;
      }
      uVar10 = (uint)puVar11;
      lVar17 = (longlong)(int)uVar10;
      if (0 < (int)uVar1) {
        lVar9 = 0;
        puVar5 = param_2;
        do {
          if (0 < iVar18) {
            lVar13 = local_c8[lVar9];
            lVar12 = 0;
            puVar15 = puVar5;
            do {
              uVar16 = uVar10;
              if ((longlong)uVar2 < lVar17) {
                uVar16 = uVar4;
              }
              *(undefined4 *)(lVar13 + lVar12 * 4) = *puVar15;
              lVar12 = lVar12 + 1;
              puVar15 = puVar15 + lVar19;
            } while (uVar16 != (uint)lVar12);
          }
          lVar9 = lVar9 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar9 != lVar19);
      }
      if (param_5 == (undefined4 *)0x0) {
        local_11f8 = (longlong *)0x0;
      }
      else {
        if (0 < (int)local_11d8) {
          lVar9 = 0;
          puVar5 = local_11d0;
          do {
            if (0 < iVar18) {
              lVar13 = local_948[lVar9];
              lVar12 = 0;
              puVar15 = puVar5;
              do {
                uVar16 = uVar10;
                if ((longlong)uVar2 < lVar17) {
                  uVar16 = uVar4;
                }
                *(undefined4 *)(lVar13 + lVar12 * 4) = *puVar15;
                lVar12 = lVar12 + 1;
                puVar15 = puVar15 + lVar8;
              } while (uVar16 != (uint)lVar12);
            }
            lVar9 = lVar9 + 1;
            puVar5 = puVar5 + 1;
          } while (lVar9 != local_1198);
        }
        local_11f8 = local_948;
      }
      local_11f0 = local_d88;
      local_11c4 = uVar10;
      local_1190 = uVar23;
      FUN_142af2cd4(local_11c0,local_c8,iVar18,local_508);
      if (param_6 == (undefined4 *)0x0) {
LAB_142af2c06:
        if (0 < (int)uVar1) {
          lVar9 = 0;
          puVar5 = param_4;
          do {
            if (0 < iVar18) {
              uVar6 = local_508[lVar9];
              lVar13 = 0;
              puVar15 = puVar5;
              do {
                uVar16 = uVar10;
                if ((longlong)uVar2 < lVar17) {
                  uVar16 = uVar4;
                }
                *puVar15 = *(undefined4 *)(uVar6 + lVar13 * 4);
                lVar13 = lVar13 + 1;
                puVar15 = puVar15 + lVar19;
              } while (uVar16 != (uint)lVar13);
            }
            lVar9 = lVar9 + 1;
            puVar5 = puVar5 + 1;
          } while (lVar9 != lVar19);
        }
      }
      else if (0 < (int)uVar1) {
        lVar9 = 0;
        puVar5 = local_11b8;
        do {
          if (0 < iVar18) {
            lVar13 = local_d88[lVar9];
            lVar12 = 0;
            puVar15 = puVar5;
            do {
              uVar16 = uVar10;
              if ((longlong)uVar2 < lVar17) {
                uVar16 = uVar4;
              }
              *puVar15 = *(undefined4 *)(lVar13 + lVar12 * 4);
              lVar12 = lVar12 + 1;
              puVar15 = puVar15 + lVar19;
            } while (uVar16 != (uint)lVar12);
          }
          lVar9 = lVar9 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar9 != lVar19);
        goto LAB_142af2c06;
      }
      uVar23 = local_1190 + uVar2;
      uVar6 = (ulonglong)local_11c8;
      puVar11 = (undefined1 *)(ulonglong)(local_11c4 - local_11c8);
      param_2 = (undefined4 *)((longlong)param_2 + local_11a8);
      local_11d0 = (undefined4 *)((longlong)local_11d0 + local_11b0);
      local_11b8 = (undefined4 *)((longlong)local_11b8 + local_11a8);
      param_4 = (undefined4 *)((longlong)param_4 + local_11a8);
    } while (uVar23 < local_11a0);
  }
  if ((local_80 ^ (ulonglong)auStack_1218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_1218,puVar11);
}



// FUNCTION 142af2cd4 FUN_142af2cd4 body=1128 status=ok
// SIG undefined FUN_142af2cd4(void)

void FUN_142af2cd4(longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
                  undefined8 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  uint local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = *(uint *)(param_1 + 0x88);
  uVar5 = (ulonglong)uVar9;
  iVar1 = *(int *)(param_1 + 0xa8);
  uVar8 = (ulonglong)iVar1;
  lVar10 = param_5;
  if (param_5 == 0) {
    lVar10 = param_2;
  }
  if (*(char *)(param_1 + 0xdc) == '\x01') {
    FUN_147031c62(param_1,lVar10,param_3,param_4);
    lVar10 = param_4;
  }
  if (*(char *)(param_1 + 0xdb) == '\x01') {
    FUN_147031c62(param_1 + 0x30,lVar10,param_3,param_4);
    lVar10 = param_4;
  }
  fVar14 = *(float *)(param_1 + 200);
  if (param_5 != param_2 && param_5 != 0) {
    fVar14 = fVar14 * *(float *)(param_1 + 0xd0);
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    if (0 < (int)uVar9 && lVar10 != param_4) {
      uVar7 = 0;
      do {
        memcpy(*(void **)(param_4 + uVar7 * 8),*(void **)(lVar10 + uVar7 * 8),
               (longlong)(int)param_3 * 4);
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
    }
    if ((int)uVar9 < iVar1) {
      uVar5 = (ulonglong)(int)uVar9;
      do {
        memset(*(void **)(param_4 + uVar5 * 8),0,(longlong)(int)param_3 << 2);
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
    goto LAB_142af3023;
  }
  local_a8 = uVar8;
  local_a0 = param_1;
  local_98 = param_2;
  if (0 < (int)uVar9) {
    uVar7 = (ulonglong)param_3;
    uVar8 = 0;
    do {
      FUN_1421c4ed0(*(undefined8 *)(lVar10 + uVar8 * 8),fVar14,*(undefined8 *)(param_4 + uVar8 * 8),
                    param_3);
      lVar6 = *(longlong *)(local_a0 + 0x80) + uVar8 * 0x30;
      lVar2 = param_6[uVar8];
      uVar11 = *(undefined8 *)(param_4 + uVar8 * 8);
      iVar1 = *(int *)(*(longlong *)(local_a0 + 0x80) + 0x1c + uVar8 * 0x30);
      if (iVar1 == 0) {
        FUN_1421c53a0(uVar11,lVar2,param_3);
        if (0 < (int)param_3) {
          uVar4 = 0;
          do {
            fVar13 = *(float *)(lVar6 + 0x2c) * *(float *)(lVar2 + uVar4 * 4) +
                     *(float *)(lVar6 + 0x28) * *(float *)(lVar6 + 0x20);
            *(float *)(lVar6 + 0x20) = fVar13;
            *(float *)(lVar2 + uVar4 * 4) = fVar13;
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
          goto LAB_142af2ee1;
        }
      }
      else {
        if (iVar1 == 1) {
          FUN_1421c53a0(uVar11,lVar2,param_3);
          if (0 < (int)param_3) {
            uVar4 = 0;
            do {
              fVar13 = *(float *)(lVar6 + 0x2c) * *(float *)(lVar2 + uVar4 * 4) +
                       *(float *)(lVar6 + 0x28) * *(float *)(lVar6 + 0x20);
              *(float *)(lVar6 + 0x20) = fVar13;
              *(float *)(lVar2 + uVar4 * 4) = fVar13;
              uVar4 = uVar4 + 1;
            } while (uVar7 != uVar4);
          }
          FUN_1421c5330(lVar2,param_3);
        }
        else if (iVar1 == 2) {
          FUN_1421c3b30(uVar11,lVar2,param_3);
        }
LAB_142af2ee1:
        if (0 < (int)param_3) {
          uVar4 = 0;
          do {
            fVar13 = *(float *)(lVar2 + uVar4 * 4);
            fVar12 = *(float *)(lVar6 + 0x18) - fVar13;
            fVar13 = fVar12 * *(float *)(lVar6 + 4 + (ulonglong)(0.0 < fVar12) * 8) + fVar13;
            *(float *)(lVar6 + 0x18) = fVar13;
            *(float *)(lVar2 + uVar4 * 4) = fVar13;
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
  }
  lVar10 = local_a0;
  iVar1 = (int)local_a8;
  if (*(char *)(local_a0 + 0xd8) == '\x01') {
    uVar11 = *param_6;
    if (1 < (int)uVar9) {
      uVar8 = 1;
      do {
        FUN_1421c5730(param_6[uVar8],uVar11,uVar11,param_3);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    FUN_1421c4ed0(uVar11,1.0 / (float)(int)uVar9,uVar11,param_3);
LAB_142af3110:
    FUN_1421c47e0(uVar11,0xc2c00000,param_3);
    FUN_147031d46(lVar10,*param_6,param_3);
    uVar9 = 1;
  }
  else {
    if (*(char *)(local_a0 + 0xd8) == '\x02') {
      uVar11 = *param_6;
      if (1 < (int)uVar9) {
        uVar8 = 1;
        do {
          FUN_1421c4870(param_6[uVar8],uVar11,uVar11,param_3);
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
      goto LAB_142af3110;
    }
    if (0 < (int)uVar9) {
      uVar8 = 0;
      do {
        FUN_1421c47e0(param_6[uVar8],0xc2c00000,param_3);
        FUN_147031d46(lVar10,param_6[uVar8],param_3);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
  }
  lVar10 = local_a0;
  if (0 < iVar1) {
    fVar14 = *(float *)(local_a0 + 0xcc);
    fVar13 = *(float *)(local_a0 + 200);
    lVar6 = 0;
    uVar8 = 0;
    do {
      local_90 = *(undefined8 *)(local_98 + uVar8 * 8);
      uVar11 = *(undefined8 *)(param_4 + uVar8 * 8);
      uVar3 = param_6[(longlong)((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff)
                      % (longlong)(int)uVar9 & 0xffffffff];
      local_88 = param_3;
      local_80 = uVar11;
      local_78 = param_3;
      FUN_147035330(*(longlong *)(lVar10 + 0x70) + lVar6,&local_90,&local_80);
      FUN_1421c4ff0(uVar3,uVar11,param_3);
      FUN_1421c4f70(uVar11,param_3,fVar14 * fVar13);
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x20;
    } while (local_a8 != uVar8);
  }
LAB_142af3023:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142af313d FUN_142af313d body=15 status=ok
// SIG undefined FUN_142af313d(void)

void FUN_142af313d(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_1421c4ed0(*param_1,param_2,*param_3,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af314c FUN_142af314c body=11 status=ok
// SIG undefined FUN_142af314c(void)

void FUN_142af314c(undefined8 *param_1)

{
  FUN_1421c5330(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af3157 FUN_142af3157 body=4048 status=ok
// SIG undefined FUN_142af3157(void)

longlong * FUN_142af3157(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_398 [32];
  longlong *local_378;
  undefined8 local_370;
  longlong *local_368;
  undefined8 *local_360;
  undefined8 local_358;
  longlong local_350;
  longlong local_348;
  undefined8 uStack_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_145c24f04(&local_358);
  FUN_1470341a6(&DAT_14c8337f0,param_1,local_358);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  local_348 = 0;
  uStack_340 = 0;
  lVar13 = param_1[1];
  local_368 = param_1;
  if ((longlong)(int)lVar13 != 0) {
    lVar3 = *param_1;
    lVar14 = 0;
    do {
      uVar11 = uStack_340;
      lVar21 = *(longlong *)(lVar3 + lVar14);
      if (lVar21 != 0) {
        lVar20 = (longlong)(int)uStack_340;
        uVar4 = (int)uStack_340 + 1;
        uStack_340 = CONCAT44(uStack_340._4_4_,uVar4);
        if (uStack_340._4_4_ < uVar4) {
          FUN_147034230(&local_348,uVar11 & 0xffffffff);
          lVar21 = *(longlong *)(lVar3 + lVar14);
        }
        *(longlong *)(local_348 + lVar20 * 8) = lVar21;
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar14);
  }
  plVar17 = local_368;
  if (&local_348 == local_368) {
    if (local_348 != 0) {
      FUN_1400020a8();
    }
    iVar5 = (int)plVar17[1];
  }
  else {
    if (*local_368 != 0) {
      FUN_1400020a8();
    }
    *plVar17 = local_348;
    local_348 = 0;
    *(int *)(plVar17 + 1) = (int)uStack_340;
    *(uint *)((longlong)plVar17 + 0xc) = uStack_340._4_4_;
    iVar5 = (int)uStack_340;
  }
  if (iVar5 != 0) {
    lVar13 = *param_3;
    lVar3 = *plVar17;
    if (DAT_14c99e378 != lVar13) {
      local_348 = 0;
      uStack_340 = 0;
      lVar14 = 0;
      do {
        (**(code **)(**(longlong **)(lVar3 + lVar14) + 8))
                  (*(longlong **)(lVar3 + lVar14),&local_350);
        uVar11 = uStack_340;
        if (local_350 == lVar13) {
          lVar21 = (longlong)(int)uStack_340;
          uVar4 = (int)uStack_340 + 1;
          uStack_340 = CONCAT44(uStack_340._4_4_,uVar4);
          if (uStack_340._4_4_ < uVar4) {
            FUN_147034230(&local_348,uVar11 & 0xffffffff);
          }
          *(undefined8 *)(local_348 + lVar21 * 8) = *(undefined8 *)(lVar3 + lVar14);
        }
        plVar17 = local_368;
        lVar14 = lVar14 + 8;
      } while ((longlong)iVar5 * 8 != lVar14);
      if (&local_348 == local_368) {
        if (local_348 != 0) {
          FUN_1400020a8();
        }
        iVar5 = (int)plVar17[1];
      }
      else {
        if (*local_368 != 0) {
          FUN_1400020a8();
        }
        *plVar17 = local_348;
        local_348 = 0;
        *(int *)(plVar17 + 1) = (int)uStack_340;
        *(uint *)((longlong)plVar17 + 0xc) = uStack_340._4_4_;
        iVar5 = (int)uStack_340;
      }
      if (iVar5 == 0) goto LAB_142af3f93;
      lVar3 = *plVar17;
    }
    if (*(char *)((longlong)param_2 + 5) == '\0') {
      local_348 = 0;
      uStack_340 = 0;
      lVar13 = 0;
      do {
        cVar2 = (**(code **)(**(longlong **)(lVar3 + lVar13) + 0x10))();
        uVar11 = uStack_340;
        if (cVar2 == '\0') {
          lVar14 = (longlong)(int)uStack_340;
          uVar4 = (int)uStack_340 + 1;
          uStack_340 = CONCAT44(uStack_340._4_4_,uVar4);
          if (uStack_340._4_4_ < uVar4) {
            FUN_147034230(&local_348,uVar11 & 0xffffffff);
          }
          *(undefined8 *)(local_348 + lVar14 * 8) = *(undefined8 *)(lVar3 + lVar13);
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar5 * 8 != lVar13);
      if (&local_348 == plVar17) {
        if (local_348 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar17 != 0) {
          FUN_1400020a8();
        }
        *plVar17 = local_348;
        *(int *)(plVar17 + 1) = (int)uStack_340;
        *(uint *)((longlong)plVar17 + 0xc) = uStack_340._4_4_;
      }
      lVar3 = *plVar17;
      iVar5 = (int)plVar17[1];
    }
    if (*(char *)((longlong)param_2 + 4) == '\0') {
      local_348 = 0;
      uStack_340 = 0;
      if (iVar5 != 0) {
        lVar13 = 0;
        do {
          cVar2 = (**(code **)(**(longlong **)(lVar3 + lVar13) + 0x18))();
          uVar11 = uStack_340;
          if (cVar2 == '\0') {
            lVar14 = (longlong)(int)uStack_340;
            uVar4 = (int)uStack_340 + 1;
            uStack_340 = CONCAT44(uStack_340._4_4_,uVar4);
            if (uStack_340._4_4_ < uVar4) {
              FUN_147034230(&local_348,uVar11 & 0xffffffff);
            }
            *(undefined8 *)(local_348 + lVar14 * 8) = *(undefined8 *)(lVar3 + lVar13);
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar5 * 8 != lVar13);
      }
      if (&local_348 == plVar17) {
        if (local_348 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar17 != 0) {
          FUN_1400020a8();
        }
        *plVar17 = local_348;
        *(int *)(plVar17 + 1) = (int)uStack_340;
        *(uint *)((longlong)plVar17 + 0xc) = uStack_340._4_4_;
      }
      lVar3 = *plVar17;
      iVar5 = (int)plVar17[1];
    }
    local_350 = *param_2;
    local_348 = 0;
    uStack_340 = 0;
    if (iVar5 != 0) {
      lVar13 = 0;
      do {
        cVar2 = (**(code **)(**(longlong **)(lVar3 + lVar13) + 0x20))
                          (*(longlong **)(lVar3 + lVar13),&local_350);
        uVar11 = uStack_340;
        if (cVar2 != '\0') {
          lVar14 = (longlong)(int)uStack_340;
          uVar4 = (int)uStack_340 + 1;
          uStack_340 = CONCAT44(uStack_340._4_4_,uVar4);
          if (uStack_340._4_4_ < uVar4) {
            FUN_147034230(&local_348,uVar11 & 0xffffffff);
          }
          *(undefined8 *)(local_348 + lVar14 * 8) = *(undefined8 *)(lVar3 + lVar13);
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar5 * 8 != lVar13);
    }
    if (&local_348 == plVar17) {
      if (local_348 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar17 != 0) {
        FUN_1400020a8();
      }
      *plVar17 = local_348;
      local_348 = 0;
      *(int *)(plVar17 + 1) = (int)uStack_340;
      *(uint *)((longlong)plVar17 + 0xc) = uStack_340._4_4_;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c99e360) && (FUN_144b3d300(&DAT_14c99e360), DAT_14c99e360 == -1)) {
      FUN_1446f470e(&local_348,L"FVectorFFTFactory",1);
      FUN_1446f470e(&uStack_340,L"OriginalFFT_Deprecated",1);
      DAT_14c99e350 = (longlong *)0x0;
      DAT_14c99e358 = 2;
      FUN_1401b309e(&DAT_14c99e350,2,0);
      plVar6 = DAT_14c99e350;
      *DAT_14c99e350 = local_348;
      plVar6[1] = uStack_340;
      atexit((_func_5014 *)&LAB_142af431c);
      _Init_thread_footer(&DAT_14c99e360);
    }
    iVar5 = (int)plVar17[1];
    if (1 < (longlong)iVar5) {
      lVar13 = *plVar17;
      memset(local_338,0,0x2f0);
      uStack_340 = (lVar13 + (longlong)iVar5 * 8) - 8;
      local_348 = lVar13;
      fVar23 = logf((float)iVar5);
      local_338[0] = (int)(longlong)(fVar23 + fVar23);
      plVar6 = &local_348;
LAB_142af3676:
      puVar16 = (undefined8 *)*plVar6;
      iVar5 = (int)plVar6[2];
      iVar18 = (int)((ulonglong)(plVar6[1] - (longlong)puVar16) >> 3);
      puVar10 = (undefined8 *)plVar6[1];
      local_378 = plVar6;
      while (uVar4 = iVar18 + 1, iVar5 != 0) {
        if ((int)uVar4 < 9) goto joined_r0x000142af3e4c;
        local_370._4_4_ = (undefined4)((ulonglong)local_370 >> 0x20);
        local_370 = CONCAT44(local_370._4_4_,iVar5);
        uVar1 = puVar16[uVar4 >> 1];
        puVar16[uVar4 >> 1] = *puVar16;
        *puVar16 = uVar1;
        puVar9 = puVar10 + 1;
        puVar15 = puVar16;
        local_360 = puVar10;
LAB_142af36cb:
        do {
          puVar15 = puVar15 + 1;
          if (puVar10 < puVar15) break;
          plVar17 = (longlong *)*puVar15;
          plVar6 = (longlong *)*puVar16;
          cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
          if (((cVar2 != '\0') && (cVar2 = (**(code **)(*plVar17 + 0x10))(plVar17), cVar2 == '\0'))
             || ((cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), cVar2 != '\0' &&
                 (cVar2 = (**(code **)(*plVar17 + 0x18))(plVar17), cVar2 == '\0')))) break;
          (**(code **)(*plVar6 + 8))(plVar6,&local_350);
          iVar5 = -1;
          lVar13 = 0xffffffff;
          if ((longlong)DAT_14c99e358 != 0) {
            lVar3 = (longlong)DAT_14c99e358 << 3;
            lVar13 = 0;
            do {
              if (DAT_14c99e350[lVar13] == local_350) goto LAB_142af376a;
              lVar13 = lVar13 + 1;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
            lVar13 = 0xffffffff;
          }
LAB_142af376a:
          (**(code **)(*plVar17 + 8))(plVar17,&local_350);
          if ((longlong)DAT_14c99e358 != 0) {
            lVar3 = (longlong)DAT_14c99e358 << 3;
            lVar14 = 0;
            do {
              if (DAT_14c99e350[lVar14] == local_350) {
                iVar5 = (int)lVar14;
                break;
              }
              lVar14 = lVar14 + 1;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
        } while (((iVar5 <= (int)lVar13) || ((int)lVar13 == -1)) || (iVar5 == -1));
        while (puVar8 = puVar9, puVar9 = puVar8 + -1, puVar16 < puVar9) {
          plVar17 = (longlong *)*puVar16;
          plVar6 = (longlong *)*puVar9;
          cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
          if (((cVar2 != '\0') && (cVar2 = (**(code **)(*plVar17 + 0x10))(plVar17), cVar2 == '\0'))
             || ((cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), cVar2 != '\0' &&
                 (cVar2 = (**(code **)(*plVar17 + 0x18))(plVar17), cVar2 == '\0')))) break;
          (**(code **)(*plVar6 + 8))(plVar6,&local_350);
          iVar5 = -1;
          lVar13 = 0xffffffff;
          if ((longlong)DAT_14c99e358 != 0) {
            lVar3 = (longlong)DAT_14c99e358 << 3;
            lVar13 = 0;
            do {
              if (DAT_14c99e350[lVar13] == local_350) goto LAB_142af3866;
              lVar13 = lVar13 + 1;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
            lVar13 = 0xffffffff;
          }
LAB_142af3866:
          (**(code **)(*plVar17 + 8))(plVar17,&local_350);
          if ((longlong)DAT_14c99e358 != 0) {
            lVar3 = (longlong)DAT_14c99e358 << 3;
            lVar14 = 0;
            do {
              if (DAT_14c99e350[lVar14] == local_350) {
                iVar5 = (int)lVar14;
                break;
              }
              lVar14 = lVar14 + 1;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
          if ((((int)lVar13 < iVar5) && ((int)lVar13 != -1)) && (iVar5 != -1)) break;
        }
        if (puVar15 <= puVar9) {
          uVar1 = *puVar15;
          *puVar15 = *puVar9;
          *puVar9 = uVar1;
          goto LAB_142af36cb;
        }
        uVar1 = *puVar16;
        *puVar16 = *puVar9;
        puVar8[-1] = uVar1;
        iVar5 = (int)local_370 + -1;
        puVar8 = puVar8 + -2;
        if ((longlong)puVar8 - (longlong)puVar16 < (longlong)local_360 - (longlong)puVar15) {
          if (puVar15 < puVar10) {
            *local_378 = (longlong)puVar15;
            local_378[1] = (longlong)puVar10;
            *(int *)(local_378 + 2) = iVar5;
            local_378 = local_378 + 3;
          }
          plVar6 = local_378;
          if (puVar9 <= puVar16 + 1) goto LAB_142af3f7c;
        }
        else {
          plVar6 = local_378;
          if (puVar16 + 1 < puVar9) {
            *local_378 = (longlong)puVar16;
            local_378[1] = (longlong)puVar8;
            *(int *)(local_378 + 2) = iVar5;
            plVar6 = local_378 + 3;
          }
          puVar8 = puVar10;
          puVar16 = puVar15;
          if (puVar10 <= puVar15) goto LAB_142af3f7c;
        }
        local_378 = plVar6;
        iVar18 = (int)((ulonglong)((longlong)puVar8 - (longlong)puVar16) >> 3);
        puVar10 = puVar8;
      }
      plVar6 = local_378;
      if (uVar4 != 0) {
        iVar5 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
        iVar18 = iVar5;
joined_r0x000142af39a8:
        do {
          iVar7 = iVar5 * 2 + 1;
          if (iVar7 < (int)uVar4) {
            local_370._4_4_ = (undefined4)((ulonglong)local_370 >> 0x20);
            local_370 = CONCAT44(local_370._4_4_,iVar5);
            iVar5 = iVar5 * 2 + 2;
            if (iVar5 < (int)uVar4) {
              puVar9 = (undefined8 *)(longlong)iVar5;
              local_360 = (undefined8 *)(longlong)iVar7;
              plVar17 = (longlong *)puVar16[(longlong)local_360];
              plVar6 = (longlong *)puVar16[(longlong)puVar9];
              cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
              if (((cVar2 != '\0') &&
                  (cVar2 = (**(code **)(*plVar17 + 0x10))(plVar17), puVar10 = local_360,
                  cVar2 == '\0')) ||
                 ((cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), cVar2 != '\0' &&
                  (cVar2 = (**(code **)(*plVar17 + 0x18))(plVar17), puVar10 = local_360,
                  cVar2 == '\0')))) goto LAB_142af3ac1;
              (**(code **)(*plVar6 + 8))(plVar6,&local_350);
              iVar19 = -1;
              if ((longlong)DAT_14c99e358 != 0) {
                lVar13 = (longlong)DAT_14c99e358 << 3;
                lVar3 = 0;
                do {
                  if (DAT_14c99e350[lVar3] == local_350) {
                    iVar19 = (int)lVar3;
                    break;
                  }
                  lVar3 = lVar3 + 1;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
              (**(code **)(*plVar17 + 8))(plVar17,&local_350);
              if ((longlong)DAT_14c99e358 != 0) {
                lVar13 = (longlong)DAT_14c99e358 << 3;
                lVar3 = 0;
                do {
                  if (DAT_14c99e350[lVar3] == local_350) {
                    puVar10 = local_360;
                    if (iVar19 < (int)lVar3 && ((int)lVar3 != -1 && iVar19 != -1))
                    goto LAB_142af3ac1;
                    break;
                  }
                  lVar3 = lVar3 + 1;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
            else {
              puVar10 = (undefined8 *)(longlong)iVar7;
LAB_142af3ac1:
              puVar9 = puVar10;
              iVar5 = iVar7;
            }
            lVar13 = (longlong)(int)local_370;
            plVar17 = (longlong *)puVar16[(longlong)puVar9];
            plVar6 = (longlong *)puVar16[lVar13];
            cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
            if (((cVar2 != '\0') && (cVar2 = (**(code **)(*plVar17 + 0x10))(plVar17), cVar2 == '\0')
                ) || ((cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), cVar2 != '\0' &&
                      (cVar2 = (**(code **)(*plVar17 + 0x18))(plVar17), cVar2 == '\0')))) {
LAB_142af3ba3:
              uVar1 = puVar16[lVar13];
              puVar16[lVar13] = puVar16[(longlong)puVar9];
              puVar16[(longlong)puVar9] = uVar1;
              goto joined_r0x000142af39a8;
            }
            (**(code **)(*plVar6 + 8))(plVar6,&local_350);
            iVar7 = -1;
            if ((longlong)DAT_14c99e358 != 0) {
              lVar3 = (longlong)DAT_14c99e358 << 3;
              lVar14 = 0;
              do {
                if (DAT_14c99e350[lVar14] == local_350) {
                  iVar7 = (int)lVar14;
                  break;
                }
                lVar14 = lVar14 + 1;
                lVar3 = lVar3 + -8;
              } while (lVar3 != 0);
            }
            (**(code **)(*plVar17 + 8))(plVar17,&local_350);
            if ((longlong)DAT_14c99e358 != 0) {
              lVar3 = (longlong)DAT_14c99e358 << 3;
              lVar14 = 0;
              do {
                if (DAT_14c99e350[lVar14] == local_350) {
                  if (((iVar7 < (int)lVar14) && (iVar7 != -1)) && ((int)lVar14 != -1))
                  goto LAB_142af3ba3;
                  break;
                }
                lVar14 = lVar14 + 1;
                lVar3 = lVar3 + -8;
              } while (lVar3 != 0);
            }
          }
          bVar22 = iVar18 != 0;
          iVar5 = iVar18 + -1;
          iVar18 = iVar5;
        } while (bVar22);
        plVar6 = local_378;
        if (1 < (int)uVar4) {
          uVar11 = (ulonglong)uVar4;
          uVar1 = *puVar16;
          *puVar16 = puVar16[uVar11 - 1];
          puVar16[uVar11 - 1] = uVar1;
          if (uVar4 != 2) {
            do {
              uVar12 = uVar11 - 1;
              iVar5 = 0;
              iVar7 = 1;
              iVar18 = 0;
              do {
                iVar19 = iVar5 + 2;
                lVar13 = (longlong)iVar19;
                if (lVar13 < (longlong)uVar12) {
                  local_370 = (longlong)iVar7;
                  plVar17 = (longlong *)puVar16[local_370];
                  plVar6 = (longlong *)puVar16[lVar13];
                  cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
                  if (((cVar2 != '\0') &&
                      (cVar2 = (**(code **)(*plVar17 + 0x10))(plVar17), lVar3 = local_370,
                      cVar2 == '\0')) ||
                     ((cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), cVar2 != '\0' &&
                      (cVar2 = (**(code **)(*plVar17 + 0x18))(plVar17), lVar3 = local_370,
                      cVar2 == '\0')))) goto LAB_142af3d15;
                  (**(code **)(*plVar6 + 8))(plVar6,&local_350);
                  iVar5 = -1;
                  if ((longlong)DAT_14c99e358 != 0) {
                    lVar3 = (longlong)DAT_14c99e358 << 3;
                    lVar14 = 0;
                    do {
                      if (DAT_14c99e350[lVar14] == local_350) {
                        iVar5 = (int)lVar14;
                        break;
                      }
                      lVar14 = lVar14 + 1;
                      lVar3 = lVar3 + -8;
                    } while (lVar3 != 0);
                  }
                  (**(code **)(*plVar17 + 8))(plVar17,&local_350);
                  if ((longlong)DAT_14c99e358 != 0) {
                    lVar3 = (longlong)DAT_14c99e358 << 3;
                    lVar14 = 0;
                    do {
                      if (DAT_14c99e350[lVar14] == local_350) {
                        lVar3 = local_370;
                        if (iVar5 < (int)lVar14 && ((int)lVar14 != -1 && iVar5 != -1))
                        goto LAB_142af3d15;
                        break;
                      }
                      lVar14 = lVar14 + 1;
                      lVar3 = lVar3 + -8;
                    } while (lVar3 != 0);
                  }
                }
                else {
                  lVar3 = (longlong)iVar7;
LAB_142af3d15:
                  lVar13 = lVar3;
                  iVar19 = iVar7;
                }
                plVar17 = (longlong *)puVar16[lVar13];
                plVar6 = (longlong *)puVar16[iVar18];
                cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
                if (((cVar2 == '\0') ||
                    (cVar2 = (**(code **)(*plVar17 + 0x10))(plVar17), cVar2 != '\0')) &&
                   ((cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), cVar2 == '\0' ||
                    (cVar2 = (**(code **)(*plVar17 + 0x18))(plVar17), cVar2 != '\0')))) {
                  (**(code **)(*plVar6 + 8))(plVar6,&local_350);
                  iVar5 = -1;
                  if ((longlong)DAT_14c99e358 != 0) {
                    lVar3 = (longlong)DAT_14c99e358 << 3;
                    lVar14 = 0;
                    do {
                      if (DAT_14c99e350[lVar14] == local_350) {
                        iVar5 = (int)lVar14;
                        break;
                      }
                      lVar14 = lVar14 + 1;
                      lVar3 = lVar3 + -8;
                    } while (lVar3 != 0);
                  }
                  (**(code **)(*plVar17 + 8))(plVar17,&local_350);
                  if ((longlong)DAT_14c99e358 == 0) break;
                  lVar3 = (longlong)DAT_14c99e358 << 3;
                  lVar14 = 0;
                  while (DAT_14c99e350[lVar14] != local_350) {
                    lVar14 = lVar14 + 1;
                    lVar3 = lVar3 + -8;
                    if (lVar3 == 0) goto LAB_142af3e21;
                  }
                  if ((((int)lVar14 <= iVar5) || (iVar5 == -1)) || ((int)lVar14 == -1)) break;
                }
                uVar1 = puVar16[iVar18];
                puVar16[iVar18] = puVar16[lVar13];
                puVar16[lVar13] = uVar1;
                iVar5 = iVar19 * 2;
                iVar7 = iVar19 * 2 + 1;
                iVar18 = iVar19;
              } while ((longlong)iVar7 < (longlong)uVar12);
LAB_142af3e21:
              uVar1 = *puVar16;
              *puVar16 = puVar16[uVar11 - 2];
              puVar16[uVar11 - 2] = uVar1;
              plVar6 = local_378;
              uVar11 = uVar12;
            } while (2 < uVar12);
          }
        }
      }
      goto LAB_142af3f7c;
    }
  }
LAB_142af3f93:
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar17;
joined_r0x000142af3e4c:
  for (; plVar6 = local_378, puVar15 = puVar16, puVar9 = puVar16, puVar16 < puVar10;
      puVar10 = puVar10 + -1) {
joined_r0x000142af3e5d:
    puVar9 = puVar9 + 1;
    if (puVar9 <= puVar10) {
      plVar17 = (longlong *)*puVar9;
      plVar6 = (longlong *)*puVar15;
      cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if (((cVar2 == '\0') || (cVar2 = (**(code **)(*plVar17 + 0x10))(plVar17), cVar2 != '\0')) &&
         ((cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6), cVar2 == '\0' ||
          (cVar2 = (**(code **)(*plVar17 + 0x18))(plVar17), cVar2 != '\0')))) {
        (**(code **)(*plVar6 + 8))(plVar6,&local_350);
        iVar5 = -1;
        if ((longlong)DAT_14c99e358 != 0) {
          lVar13 = (longlong)DAT_14c99e358 << 3;
          lVar3 = 0;
          do {
            if (DAT_14c99e350[lVar3] == local_350) {
              iVar5 = (int)lVar3;
              break;
            }
            lVar3 = lVar3 + 1;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
        (**(code **)(*plVar17 + 8))(plVar17,&local_350);
        if ((longlong)DAT_14c99e358 != 0) {
          lVar13 = (longlong)DAT_14c99e358 << 3;
          lVar3 = 0;
          do {
            if (DAT_14c99e350[lVar3] == local_350) {
              if (iVar5 < (int)lVar3 && ((int)lVar3 != -1 && iVar5 != -1)) goto LAB_142af3f49;
              break;
            }
            lVar3 = lVar3 + 1;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      else {
LAB_142af3f49:
        puVar15 = puVar9;
      }
      goto joined_r0x000142af3e5d;
    }
    uVar1 = *puVar15;
    *puVar15 = *puVar10;
    *puVar10 = uVar1;
  }
LAB_142af3f7c:
  plVar6 = plVar6 + -3;
  plVar17 = local_368;
  if (plVar6 < &local_348) goto LAB_142af3f93;
  goto LAB_142af3676;
}



// FUNCTION 142af4128 FUN_142af4128 body=12 status=ok
// SIG undefined FUN_142af4128(void)

void FUN_142af4128(undefined8 *param_1,undefined8 param_2)

{
  FUN_1421c3e50(*param_1,param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af4134 FUN_142af4134 body=12 status=ok
// SIG undefined FUN_142af4134(void)

void FUN_142af4134(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1421c3d20(*param_1,param_2,param_3,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af4140 FUN_142af4140 body=18 status=ok
// SIG undefined FUN_142af4140(void)

void FUN_142af4140(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1421c3fd0(*param_1,*param_2,*param_3,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af4152 FUN_142af4152 body=15 status=ok
// SIG undefined FUN_142af4152(void)

void FUN_142af4152(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1421c3ca0(*param_1,*param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af4161 FUN_142af4161 body=15 status=ok
// SIG undefined FUN_142af4161(void)

void FUN_142af4161(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1421c5630(*param_1,*param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af4170 FUN_142af4170 body=12 status=ok
// SIG undefined FUN_142af4170(void)

void FUN_142af4170(undefined8 *param_1,undefined8 param_2)

{
  FUN_1421c5520(*param_1,param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af417c FUN_142af417c body=12 status=ok
// SIG undefined FUN_142af417c(void)

void FUN_142af417c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1421c50f0(*param_1,param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af4188 FUN_142af4188 body=15 status=ok
// SIG undefined FUN_142af4188(void)

void FUN_142af4188(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1421c4170(*param_1,*param_2,*(undefined4 *)(param_2 + 1));
  return;
}



// FUNCTION 142af4197 FUN_142af4197 body=14 status=ok
// SIG undefined FUN_142af4197(void)

void FUN_142af4197(undefined8 *param_1,undefined4 param_2)

{
  FUN_1421c52b0(*param_1,*(undefined4 *)(param_1 + 1),param_2);
  return;
}



// FUNCTION 142af41a5 FUN_142af41a5 body=31 status=ok
// SIG undefined FUN_142af41a5(void)

void FUN_142af41a5(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_1421c5830(*param_1,param_2,*param_3,*param_4,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af41c4 FUN_142af41c4 body=90 status=ok
// SIG undefined FUN_142af41c4(void)

void FUN_142af41c4(undefined8 *param_1,undefined8 *param_2,float param_3,float param_4)

{
  if (ABS(param_3 - param_4) <= 1e-08) {
    if ((param_3 != 0.0) || (NAN(param_3))) {
      FUN_1421c4d00(*param_1,*param_2,*(undefined4 *)(param_1 + 1),param_3);
      return;
    }
  }
  else {
    FUN_1421c4c40(*param_1,*param_2,*(undefined4 *)(param_1 + 1),param_3,param_4);
  }
  return;
}



// FUNCTION 142af421e FUN_142af421e body=15 status=ok
// SIG undefined FUN_142af421e(void)

void FUN_142af421e(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1421c43d0(*param_1,*param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af422d FUN_142af422d body=15 status=ok
// SIG undefined FUN_142af422d(void)

void FUN_142af422d(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1421c5070(*param_1,*param_2,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 142af423c thunk_FUN_1421c3a50 body=5 status=ok
// SIG undefined thunk_FUN_1421c3a50(void)

void thunk_FUN_1421c3a50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined4 param_6)

{
  FUN_1421c3a20();
  if (DAT_14c6d8058 < 7) {
    if (DAT_14c6d8058 < 4) {
      if (DAT_14c6d8058 < 3) {
        if (DAT_14c6d8058 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        FUN_1421c3020(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        FUN_1421b58f0(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      FUN_1421ac480(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    FUN_1421a45e0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 142af4241 FUN_142af4241 body=48 status=ok
// SIG undefined FUN_142af4241(void)

void FUN_142af4241(void)

{
  FUN_1421c46e0();
  return;
}



// FUNCTION 142af4271 thunk_FUN_1421c5220 body=5 status=ok
// SIG undefined thunk_FUN_1421c5220(void)

void thunk_FUN_1421c5220(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4
                        )

{
  FUN_1421c3a20();
  if (DAT_14c6d8058 < 7) {
    if (DAT_14c6d8058 < 4) {
      if (DAT_14c6d8058 < 3) {
        if (DAT_14c6d8058 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        FUN_1421c3730(param_1,param_2,param_3,param_4);
      }
      else {
        FUN_1421b5e10(param_1,param_2,param_3,param_4);
      }
    }
    else {
      FUN_1421ac740(param_1,param_2,param_3,param_4);
    }
  }
  else {
    FUN_1421a4850(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 142af4276 FUN_142af4276 body=166 status=ok
// SIG undefined FUN_142af4276(void)

void FUN_142af4276(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  FUN_14702dc6a(param_3);
  uVar1 = *(uint *)(param_1 + 0xc);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)(param_3 + 1);
    *(uint *)(param_3 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar2) < uVar1) {
      FUN_145ca0cd4(param_3);
    }
  }
  _Dst = (void *)*param_3;
  lVar3 = *param_2;
  memset(_Dst,0,(longlong)*(int *)(param_1 + 0xc) << 2);
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10);
    uVar4 = 0;
    do {
      FUN_1421c59c0(lVar3 + (longlong)(int)puVar5[-4] * 4,*(undefined8 *)(puVar5 + -2),_Dst,
                    uVar4 & 0xffffffff,*puVar5);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 6;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 142af432d FUN_142af432d body=588 status=ok
// SIG undefined FUN_142af432d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af432d(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14078dbce(&DAT_14c99e2a8,L"au.dsp.FFTMethod",&DAT_14c99e2c0,
                L"Determines whether we use an iterative FFT method or the DFT.\n0: Use Iterative FFT, 1:: Use DFT"
               );
  atexit(FUN_142af1d62);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e2c8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c99e2c8,4000);
  atexit((_func_5014 *)&LAB_142af1e61);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_14a1361f0;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14a136180;
  local_28[3] = FUN_142af1e6f;
  local_38 = 0;
  FUN_1462961cc(&DAT_14c99e2f0,L"au.debug.bufferdiagnostics",
                L"Enables per buffer sample diagnostics (Nans/denorms/Infs)",&local_28);
  if (local_20 != 0) {
    if (local_28 == (undefined8 *)0x0) goto LAB_142af447b;
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142af447b:
  atexit(FUN_142af2741);
  FUN_1446f470e(&DAT_14c99e30c,L"AnyAlgorithmFactory",1);
  local_38 = 0;
  FUN_1415c789c(&DAT_14c99e318,L"au.DSP.InitialFDelayAllocationSeconds",&DAT_14c75f560,
                L"Override the inital delay line allocation in seconds, it will grow up to InBufferLengthSec.\n"
               );
  atexit(FUN_142af27b9);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e328,L"au.DSP.DelayResetFadeLengthSamples",&DAT_14c75f564,
                L"Controls fade length (in samples) when clearing internal memory with ResetWithFade().\n"
               );
  atexit(FUN_142af27fe);
  _DAT_14c99e364 = 0x3f800000;
  uRam000000014c99e368 = 0;
  uRam000000014c99e36c = 0x3f4ccccd;
  uRam000000014c99e370 = 0x3f000000;
  _DAT_14c99e374 = 0x3f333333;
  FUN_1446f470e(&DAT_14c99e378,L"AnyAlgorithmFactory",1);
  _DAT_14c99e34c = 0x40135d8e;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af457c FUN_142af457c body=41 status=ok
// SIG undefined FUN_142af457c(void)

void FUN_142af457c(void)

{
  DAT_14c99e3e8 = 0;
  if (DAT_14c99e3e0 != 0) {
    FUN_1400020a8();
  }
  FUN_1461bc684();
  return;
}



// FUNCTION 142af45a5 FUN_142af45a5 body=69 status=ok
// SIG undefined FUN_142af45a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af45a5(void)

{
  _DAT_14c99e3f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af45e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e3f8,1);
  return;
}



// FUNCTION 142af45ea FUN_142af45ea body=672 status=ok
// SIG undefined FUN_142af45ea(void)

void FUN_142af45ea(longlong param_1)

{
  longlong lVar1;
  longlong **pplVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  longlong *plVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined2 local_44;
  longlong local_40;
  undefined8 uStack_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xd8) != 0) goto LAB_142af460c;
  local_48 = CONCAT31(local_48._1_3_,*(undefined1 *)(param_1 + 8));
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (uint)*(ushort *)(param_1 + 10);
  FUN_14702e078(&local_48,*(ushort *)(param_1 + 10),1,0);
  *(undefined1 *)(param_1 + 0x18) = (undefined1)local_48;
  if ((int *)(param_1 + 0x18) == &local_48) {
    *(uint *)(param_1 + 0x30) = local_30;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x20) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_38;
    *(undefined4 *)(param_1 + 0x2c) = uStack_38._4_4_;
    uStack_38 = 0;
    *(uint *)(param_1 + 0x30) = local_30;
  }
  uVar3 = *(ushort *)(param_1 + 10);
  *(uint *)(param_1 + 0x38) = (uint)uVar3;
  iVar7 = 0x20;
  if ((uVar3 != 0) && (iVar7 = 0, uVar3 != 0)) {
    for (; (uVar3 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
    }
  }
  iVar10 = 9;
  if (uVar3 != 0) {
    iVar10 = iVar7;
  }
  lVar1 = param_1 + 0x48;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_1470345fa(lVar1,0);
    uVar3 = *(ushort *)(param_1 + 10);
  }
  uVar6 = (uint)uVar3;
  fVar11 = *(float *)(param_1 + 0xc);
  if (1e-08 < ABS(fVar11)) {
LAB_142af4729:
    uVar6 = (int)ROUND((float)uVar6 * fVar11 + (float)uVar6 * fVar11 + -0.5) >> 1;
  }
  else {
    bVar8 = *(char *)(param_1 + 8) - 1;
    if (bVar8 < 3) {
      fVar11 = *(float *)(&DAT_14a136df8 + (ulonglong)bVar8 * 4);
      goto LAB_142af4729;
    }
  }
  *(uint *)(param_1 + 0x3c) = uVar6;
  local_44 = 0x101;
  local_48 = iVar10;
  FUN_142af1dc4(&local_50,&local_48,&DAT_14c99e378);
  plVar9 = local_50;
  pplVar2 = (longlong **)(param_1 + 0xe0);
  if (pplVar2 == &local_50) {
LAB_142af47a5:
    if (local_50 != (longlong *)0x0) {
      (**(code **)*local_50)(local_50,1);
    }
    plVar9 = *pplVar2;
  }
  else {
    plVar4 = *pplVar2;
    *pplVar2 = local_50;
    local_50 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)*plVar4)(plVar4,1);
      goto LAB_142af47a5;
    }
  }
  if (plVar9 == (longlong *)0x0) {
    FUN_147033900(&local_48);
    *(undefined1 *)(param_1 + 0x40) = 0;
    uVar6 = *(uint *)(param_1 + 0x38);
    if (0 < (longlong)(int)uVar6) {
      iVar7 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar7 + uVar6;
      if ((uint)(*(int *)(param_1 + 0x54) - iVar7) < uVar6) {
        FUN_145ca0cd4(lVar1);
      }
      memset((void *)((longlong)iVar7 * 4 + *(longlong *)(param_1 + 0x48)),0,
             (longlong)(int)uVar6 << 2);
      iVar7 = *(int *)(param_1 + 0x38);
      goto LAB_142af487d;
    }
  }
  else {
    uVar6 = (**(code **)(*plVar9 + 8))();
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 8))();
    iVar7 = iVar7 + 2;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
    *(undefined1 *)(param_1 + 0x40) = uVar5;
    if ((0 < (int)uVar6) &&
       (iVar10 = *(int *)(param_1 + 0x50), *(uint *)(param_1 + 0x50) = iVar10 + uVar6,
       (uint)(*(int *)(param_1 + 0x54) - iVar10) < uVar6)) {
      FUN_145ca0cd4(lVar1);
    }
LAB_142af487d:
    FUN_147039c9c(param_1 + 0x80,iVar7);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
LAB_142af460c:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142af488c FUN_142af488c body=214 status=ok
// SIG undefined FUN_142af488c(void)

void FUN_142af488c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14a136970;
  lVar5 = param_1[3];
  if (lVar5 == 0) goto LAB_142af492d;
  if (*(int *)(lVar5 + 0x10) == 0) {
    if (*(longlong *)(lVar5 + 0x20) != 0) {
      (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x20))(*(longlong **)(lVar5 + 0x18),0xffffffff,0)
      ;
LAB_142af48fe:
      *(undefined8 *)(lVar5 + 0x20) = 0;
    }
  }
  else {
    lVar5 = param_1[3];
    plVar3 = *(longlong **)(lVar5 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar5);
      if (cVar4 != '\0') {
        LOCK();
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
        UNLOCK();
        if (*(longlong **)(lVar5 + 0x18) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x10))();
        }
        goto LAB_142af48fe;
      }
      lVar5 = param_1[3];
    }
    FUN_140187fa0(lVar5,1,0);
  }
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
LAB_142af492d:
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
                    /* WARNING: Could not recover jumptable at 0x000142af4956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142af4962 FUN_142af4962 body=295 status=ok
// SIG undefined FUN_142af4962(void)

ulonglong FUN_142af4962(longlong param_1,undefined1 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 0x11);
  local_29 = param_2;
  if ((bVar1 & 1) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 == 0) {
      plVar4 = (longlong *)FUN_14001cc68(0x88,0x10);
      FUN_142af4a8a(plVar4,param_1 + 8,&local_29);
      plVar3 = *(longlong **)(param_1 + 0x18);
      plVar5 = plVar3;
      if ((plVar3 != plVar4) &&
         (*(longlong **)(param_1 + 0x18) = plVar4, plVar5 = plVar4, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,1);
        plVar5 = *(longlong **)(param_1 + 0x18);
      }
    }
    else {
      if (*(int *)(lVar2 + 0x10) != 0) goto LAB_142af4a64;
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x20))
                  (*(longlong **)(lVar2 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar2 + 0x20) = 0;
      }
      plVar5 = *(longlong **)(param_1 + 0x18);
    }
    local_38 = 0;
    local_40 = 0xffffffffffffffff;
    local_48 = 0;
    FUN_1402a8900(plVar5,0,DAT_14c8442c0,3);
  }
LAB_142af4a64:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar1) & 0xffffff01;
}



// FUNCTION 142af4a8a FUN_142af4a8a body=155 status=ok
// SIG undefined FUN_142af4a8a(void)

undefined8 * FUN_142af4a8a(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e06640;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 3;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a136da0;
  uVar1 = *param_3;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1470408b0(param_1 + 9,&local_20,uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af4b26 FUN_142af4b26 body=244 status=ok
// SIG undefined FUN_142af4b26(void)

void FUN_142af4b26(int *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = param_1[1];
  iVar4 = iVar2 * *param_1;
  if (param_3 <= iVar4) {
    iVar4 = param_3;
  }
  param_1[8] = iVar4;
  if (0 < *param_1) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      memset(*(void **)(*(longlong *)(param_1 + 0xe) + lVar5),0,(longlong)param_1[6] << 2);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < *param_1);
    iVar2 = param_1[1];
  }
  uVar1 = (uint)(iVar4 % iVar2 != 0);
  iVar3 = uVar1 + iVar4 / iVar2;
  param_1[7] = iVar3;
  if (iVar3 != 0 && SCARRY4(uVar1,iVar4 / iVar2) == iVar3 < 0) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      iVar2 = param_1[1];
      iVar3 = iVar2 * (int)lVar6;
      iVar4 = param_1[8] - iVar3;
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      memcpy(*(void **)(param_1 + 10),(void *)(param_2 + (longlong)iVar3 * 4),(longlong)iVar4 * 4);
      if (iVar2 - iVar4 != 0 && iVar4 <= iVar2) {
        memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 10)),0,
               (ulonglong)(uint)(iVar2 - iVar4) << 2);
      }
      (**(code **)(**(longlong **)(param_1 + 2) + 0x20))
                (*(longlong **)(param_1 + 2),*(undefined8 *)(param_1 + 10),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xe) + lVar5));
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < param_1[7]);
  }
  return;
}



// FUNCTION 142af4c1a FUN_142af4c1a body=371 status=ok
// SIG undefined FUN_142af4c1a(void)

undefined8 * FUN_142af4c1a(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  ulonglong local_40;
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  int iVar8;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_3 + 4);
  if (uVar3 == 0) {
    iVar8 = 0x20;
  }
  else {
    iVar8 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar8 & 1) == 0; iVar8 = iVar8 + 1) {
      }
    }
  }
  uVar7 = iVar8 + 1;
  if (uVar3 == 0) {
    uVar7 = 0;
  }
  local_40 = (ulonglong)*param_3 << 0x28 | (ulonglong)uVar7 | 0x100000000;
  FUN_142af1dc4(&local_48,&local_40,&DAT_14c99e378);
  puVar4 = local_48;
  if (local_48 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else {
    local_48 = (undefined8 *)0x0;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a136de0;
    plVar5[2] = (longlong)puVar4;
    local_58 = *(undefined4 *)(param_3 + 8);
    local_54 = *(undefined4 *)(param_3 + 0xc);
    local_50 = *(undefined4 *)(param_3 + 0x10);
    local_4c = *(undefined4 *)(param_3 + 0x14);
    uVar6 = FUN_14001cc68(0xd8,0x10);
    local_38 = puVar4;
    local_30 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      FUN_14703a7fa(uVar6,&local_58,&local_38);
      *param_2 = uVar6;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_14703a7fa(uVar6,&local_58,&local_38);
      *param_2 = uVar6;
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
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142af4d8e FUN_142af4d8e body=7190 status=ok
// SIG undefined FUN_142af4d8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af4d8e(void)

{
  undefined4 uVar1;
  undefined1 auStack_b48 [32];
  undefined4 local_b28;
  undefined8 *local_b20;
  undefined4 local_b18;
  undefined4 *local_b10;
  undefined4 local_b08;
  longlong local_b00 [2];
  longlong local_af0;
  undefined4 local_adc;
  undefined8 *local_ad8;
  undefined4 local_ad0;
  undefined4 *local_ac8;
  undefined4 local_ac0;
  longlong local_ab8 [2];
  longlong local_aa8;
  undefined4 local_a94;
  undefined8 *local_a90;
  undefined4 local_a88;
  undefined4 *local_a80;
  undefined4 local_a78;
  longlong local_a70 [2];
  longlong local_a60;
  undefined4 local_a4c;
  undefined4 *local_a48;
  undefined4 local_a40;
  undefined8 *local_a38;
  undefined4 local_a30;
  longlong local_a28 [2];
  longlong local_a18;
  undefined4 local_a04;
  undefined8 *local_a00;
  undefined4 local_9f8;
  undefined4 *local_9f0;
  undefined4 local_9e8;
  longlong local_9e0 [2];
  longlong local_9d0;
  undefined4 local_9bc;
  undefined8 *local_9b8;
  undefined4 local_9b0;
  undefined8 *local_9a8;
  undefined4 local_9a0;
  longlong local_998 [2];
  longlong local_988;
  undefined4 local_974;
  undefined8 *local_970;
  undefined4 local_968;
  undefined4 *local_960;
  undefined4 local_958;
  longlong local_950 [2];
  longlong local_940;
  undefined4 local_92c;
  undefined8 *local_928;
  undefined4 local_920;
  undefined8 *local_918;
  undefined4 local_910;
  longlong local_908 [2];
  longlong local_8f8;
  undefined4 local_8e4;
  undefined8 *local_8e0;
  undefined4 local_8d8;
  undefined4 *local_8d0;
  undefined4 local_8c8;
  longlong local_8c0 [2];
  longlong local_8b0;
  undefined4 local_89c;
  undefined8 *local_898;
  undefined4 local_890;
  undefined4 *local_888;
  undefined4 local_880;
  longlong local_878 [2];
  longlong local_868;
  undefined4 local_854;
  undefined8 *local_850;
  undefined4 local_848;
  undefined4 *local_840;
  undefined4 local_838;
  longlong local_830 [2];
  longlong local_820;
  undefined4 local_80c;
  undefined4 *local_808;
  undefined4 local_800;
  undefined8 *local_7f8;
  undefined4 local_7f0;
  longlong local_7e8 [2];
  longlong local_7d8;
  undefined4 local_7c4;
  undefined8 *local_7c0;
  undefined4 local_7b8;
  undefined4 *local_7b0;
  undefined4 local_7a8;
  longlong local_7a0 [2];
  longlong local_790;
  undefined4 local_77c;
  undefined8 *local_778;
  undefined4 local_770;
  undefined4 *local_768;
  undefined4 local_760;
  longlong local_758 [2];
  longlong local_748;
  undefined4 local_734;
  undefined8 *local_730;
  undefined4 local_728;
  undefined4 *local_720;
  undefined4 local_718;
  longlong local_710 [2];
  longlong local_700;
  undefined4 local_6ec;
  undefined8 *local_6e8;
  undefined4 local_6e0;
  undefined4 *local_6d8;
  undefined4 local_6d0;
  longlong local_6c8 [2];
  longlong local_6b8;
  undefined4 local_6a4;
  undefined8 *local_6a0;
  undefined4 local_698;
  undefined4 *local_690;
  undefined4 local_688;
  longlong local_680 [2];
  longlong local_670;
  undefined4 local_65c;
  undefined8 *local_658;
  undefined4 local_650;
  undefined4 *local_648;
  undefined4 local_640;
  longlong local_638 [2];
  longlong local_628;
  undefined4 local_614;
  undefined8 *local_610;
  undefined4 local_608;
  undefined4 *local_600;
  undefined4 local_5f8;
  longlong local_5f0 [2];
  longlong local_5e0;
  undefined4 local_5cc;
  undefined8 *local_5c8;
  undefined4 local_5c0;
  undefined4 *local_5b8;
  undefined4 local_5b0;
  longlong local_5a8 [2];
  longlong local_598;
  undefined4 local_584;
  undefined8 *local_580;
  undefined4 local_578;
  undefined4 *local_570;
  undefined4 local_568;
  longlong local_560 [2];
  longlong local_550;
  undefined4 local_53c;
  undefined8 *local_538;
  undefined4 local_530;
  undefined4 *local_528;
  undefined4 local_520;
  longlong local_518 [2];
  longlong local_508;
  undefined4 local_4f4;
  undefined8 *local_4f0;
  undefined4 local_4e8;
  undefined4 *local_4e0;
  undefined4 local_4d8;
  longlong local_4d0 [2];
  longlong local_4c0;
  undefined4 local_4ac;
  undefined8 *local_4a8;
  undefined4 local_4a0;
  undefined4 *local_498;
  undefined4 local_490;
  longlong local_488 [2];
  longlong local_478;
  undefined4 local_464;
  undefined8 *local_460;
  undefined4 local_458;
  undefined4 *local_450;
  undefined4 local_448;
  longlong local_440 [2];
  longlong local_430;
  undefined4 local_41c;
  undefined4 *local_418;
  undefined4 local_410;
  undefined8 *local_408;
  undefined4 local_400;
  longlong local_3f8 [2];
  longlong local_3e8;
  undefined4 local_3d4;
  undefined8 *local_3d0;
  undefined4 local_3c8;
  undefined4 *local_3c0;
  undefined4 local_3b8;
  longlong local_3b0 [2];
  longlong local_3a0;
  undefined4 local_38c;
  undefined8 *local_388;
  undefined4 local_380;
  undefined4 *local_378;
  undefined4 local_370;
  longlong local_368 [2];
  longlong local_358;
  undefined4 local_344;
  undefined8 *local_340;
  undefined4 local_338;
  undefined4 *local_330;
  undefined4 local_328;
  longlong local_320 [2];
  longlong local_310;
  undefined4 local_2fc;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  undefined4 *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  longlong local_2c8;
  undefined4 local_2b4;
  undefined4 **local_2b0;
  ulonglong *local_2a8;
  undefined4 *local_2a0;
  undefined8 local_298;
  undefined4 *local_290;
  longlong *local_288;
  undefined4 *local_280;
  longlong *local_278;
  undefined4 *local_270;
  longlong *local_268;
  undefined4 *local_260;
  longlong *local_258;
  undefined4 *local_250;
  longlong *local_248;
  undefined4 *local_240;
  longlong *local_238;
  undefined4 *local_230;
  longlong *local_228;
  undefined4 *local_220;
  longlong *local_218;
  undefined4 *local_210;
  longlong *local_208;
  undefined4 *local_200;
  longlong *local_1f8;
  undefined4 *local_1f0;
  longlong *local_1e8;
  undefined4 *local_1e0;
  longlong *local_1d8;
  undefined4 *local_1d0;
  longlong *local_1c8;
  undefined4 *local_1c0;
  longlong *local_1b8;
  undefined4 *local_1b0;
  longlong *local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  undefined4 *local_190;
  longlong *local_188;
  undefined4 *local_180;
  longlong *local_178;
  undefined4 *local_170;
  longlong *local_168;
  undefined4 *local_160;
  longlong *local_158;
  undefined4 *local_150;
  longlong *local_148;
  undefined4 *local_140;
  longlong *local_138;
  undefined4 *local_130;
  longlong *local_128;
  undefined4 *local_120;
  longlong *local_118;
  undefined4 *local_110;
  longlong *local_108;
  undefined4 *local_100;
  longlong *local_f8;
  undefined4 *local_f0;
  longlong *local_e8;
  undefined4 *local_e0;
  longlong *local_d8;
  undefined4 *local_d0;
  longlong *local_c8;
  ulonglong local_c0 [16];
  
  local_c0[0] = DAT_14c707940 ^ (ulonglong)auStack_b48;
  _DAT_14c99e380 = 0;
  uRam000000014c99e384 = 0;
  uRam000000014c99e388 = 0x3f000000;
  uRam000000014c99e38c = 0x3f000000;
  _DAT_14c99e390 = 0x3f0000003f000000;
  _DAT_14c99e398 = 0x3f000000;
  local_2b4 = 0;
  local_2e8 = (undefined4 *)0x0;
  local_2e0 = 7;
  FUN_1447c510a(&local_2e8,7,0);
  *(undefined8 *)(local_2e8 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_2e8 + 5) = 0x4130000041100000;
  *local_2e8 = 0;
  local_2e8[1] = 0x40000000;
  local_2e8[2] = 0x40800000;
  local_2e8[3] = 0x40a00000;
  local_2f8 = (undefined8 *)0x0;
  local_2f0 = 4;
  FUN_1447c510a(&local_2f8,4,0);
  *local_2f8 = 0x4080000000000000;
  local_2f8[1] = 0x4130000040e00000;
  FUN_141735ea2(&local_2d8,&local_2e8,&local_2f8);
  local_2fc = 4;
  local_330 = (undefined4 *)0x0;
  local_328 = 7;
  local_2a0 = &local_2b4;
  local_298 = &local_2d8;
  FUN_1447c510a(&local_330,7,0);
  *(undefined8 *)(local_330 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_330 + 5) = 0x4120000041100000;
  *local_330 = 0;
  local_330[1] = 0x40000000;
  local_330[2] = 0x40800000;
  local_330[3] = 0x40a00000;
  local_340 = (undefined8 *)0x0;
  local_338 = 4;
  FUN_1447c510a(&local_340,4,0);
  *local_340 = 0x4080000000000000;
  local_340[1] = 0x4120000040e00000;
  FUN_141735ea2(local_320,&local_330,&local_340);
  local_344 = 1;
  local_378 = (undefined4 *)0x0;
  local_370 = 7;
  local_290 = &local_2fc;
  local_288 = local_320;
  FUN_1447c510a(&local_378,7,0);
  *(undefined8 *)(local_378 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_378 + 5) = 0x4120000041100000;
  *local_378 = 0;
  local_378[1] = 0x40000000;
  local_378[2] = 0x40400000;
  local_378[3] = 0x40a00000;
  local_388 = (undefined8 *)0x0;
  local_380 = 4;
  FUN_1447c510a(&local_388,4,0);
  *local_388 = 0x4040000000000000;
  local_388[1] = 0x4120000040e00000;
  FUN_141735ea2(local_368,&local_378,&local_388);
  local_38c = 6;
  local_3c0 = (undefined4 *)0x0;
  local_3b8 = 7;
  local_280 = &local_344;
  local_278 = local_368;
  FUN_1447c510a(&local_3c0,7,0);
  *(undefined8 *)(local_3c0 + 3) = 0x40c0000040a00000;
  *(undefined8 *)(local_3c0 + 5) = 0x4120000041000000;
  *local_3c0 = 0;
  local_3c0[1] = 0x3f800000;
  local_3c0[2] = 0x40400000;
  local_3c0[3] = 0x40a00000;
  local_3d0 = (undefined8 *)0x0;
  local_3c8 = 4;
  FUN_1447c510a(&local_3d0,4,0);
  *local_3d0 = 0x4040000000000000;
  local_3d0[1] = 0x4120000040c00000;
  FUN_141735ea2(local_3b0,&local_3c0,&local_3d0);
  local_3d4 = 0x18;
  local_408 = (undefined8 *)0x0;
  local_400 = 8;
  local_270 = &local_38c;
  local_268 = local_3b0;
  FUN_1447c510a(&local_408,8,0);
  local_408[2] = 0x4100000040c00000;
  local_408[3] = 0x4130000041100000;
  *local_408 = 0x4000000000000000;
  local_408[1] = 0x40a0000040400000;
  local_418 = (undefined4 *)0x0;
  local_410 = 4;
  FUN_1447c510a(&local_418,4,0);
  *local_418 = 0;
  local_418[1] = 0x40400000;
  local_418[2] = 0x40c00000;
  local_418[3] = 0x41100000;
  FUN_141735ea2(local_3f8,&local_408,&local_418);
  local_41c = 10;
  local_450 = (undefined4 *)0x0;
  local_448 = 5;
  local_260 = &local_3d4;
  local_258 = local_3f8;
  FUN_1447c510a(&local_450,5,0);
  *local_450 = 0;
  local_450[1] = 0x40000000;
  local_450[2] = 0x40800000;
  local_450[3] = 0x40e00000;
  local_450[4] = 0x41100000;
  local_460 = (undefined8 *)0x0;
  local_458 = 3;
  FUN_1447c510a(&local_460,3,0);
  *local_460 = 0x4080000000000000;
  *(undefined4 *)(local_460 + 1) = 0x40e00000;
  FUN_141735ea2(local_440,&local_450);
  local_464 = 3;
  local_498 = (undefined4 *)0x0;
  local_490 = 7;
  local_250 = &local_41c;
  local_248 = local_440;
  FUN_1447c510a(&local_498,7,0);
  *(undefined8 *)(local_498 + 3) = 0x40e0000040c00000;
  *(undefined8 *)(local_498 + 5) = 0x4130000041100000;
  *local_498 = 0;
  local_498[1] = 0x40000000;
  local_498[2] = 0x40800000;
  local_498[3] = 0x40c00000;
  local_4a8 = (undefined8 *)0x0;
  local_4a0 = 4;
  FUN_1447c510a(&local_4a8,4,0);
  *local_4a8 = 0x4080000000000000;
  local_4a8[1] = 0x4130000040e00000;
  FUN_141735ea2(local_488,&local_498);
  local_4ac = 0xd;
  local_4e0 = (undefined4 *)0x0;
  local_4d8 = 8;
  local_240 = &local_464;
  local_238 = local_488;
  FUN_1447c510a(&local_4e0,8,0);
  *(undefined8 *)(local_4e0 + 4) = 0x4100000040e00000;
  *(undefined8 *)(local_4e0 + 6) = 0x4130000041100000;
  *local_4e0 = 0;
  local_4e0[1] = 0x40000000;
  local_4e0[2] = 0x40800000;
  local_4e0[3] = 0x40c00000;
  local_4f0 = (undefined8 *)0x0;
  local_4e8 = 4;
  FUN_1447c510a(&local_4f0,4,0);
  *local_4f0 = 0x4080000000000000;
  local_4f0[1] = 0x4130000040e00000;
  FUN_141735ea2(local_4d0,&local_4e0,&local_4f0);
  local_4f4 = 0x11;
  local_528 = (undefined4 *)0x0;
  local_520 = 7;
  local_230 = &local_4ac;
  local_228 = local_4d0;
  FUN_1447c510a(&local_528,7,0);
  *(undefined8 *)(local_528 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_528 + 5) = 0x4130000041000000;
  *local_528 = 0;
  local_528[1] = 0x40000000;
  local_528[2] = 0x40800000;
  local_528[3] = 0x40a00000;
  local_538 = (undefined8 *)0x0;
  local_530 = 4;
  FUN_1447c510a(&local_538,4,0);
  *local_538 = 0x4080000000000000;
  local_538[1] = 0x4130000040e00000;
  FUN_141735ea2(local_518,&local_528);
  local_53c = 0x15;
  local_570 = (undefined4 *)0x0;
  local_568 = 7;
  local_220 = &local_4f4;
  local_218 = local_518;
  FUN_1447c510a(&local_570,7,0);
  *(undefined8 *)(local_570 + 3) = 0x4100000040c00000;
  *(undefined8 *)(local_570 + 5) = 0x4130000041100000;
  *local_570 = 0;
  local_570[1] = 0x40000000;
  local_570[2] = 0x40800000;
  local_570[3] = 0x40c00000;
  local_580 = (undefined8 *)0x0;
  local_578 = 4;
  FUN_1447c510a(&local_580,4,0);
  *local_580 = 0x4080000000000000;
  local_580[1] = 0x4130000041000000;
  FUN_141735ea2(local_560,&local_570);
  local_584 = 0x17;
  local_5b8 = (undefined4 *)0x0;
  local_5b0 = 6;
  local_210 = &local_53c;
  local_208 = local_560;
  FUN_1447c510a(&local_5b8,6,0);
  *local_5b8 = 0;
  local_5b8[1] = 0x40400000;
  local_5b8[2] = 0x40800000;
  local_5b8[3] = 0x40e00000;
  *(undefined8 *)(local_5b8 + 4) = 0x4130000041000000;
  local_5c8 = (undefined8 *)0x0;
  local_5c0 = 4;
  FUN_1447c510a(&local_5c8,4,0);
  *local_5c8 = 0x4080000000000000;
  local_5c8[1] = 0x4130000041000000;
  FUN_141735ea2(local_5a8,&local_5b8,&local_5c8);
  local_5cc = 0x14;
  local_600 = (undefined4 *)0x0;
  local_5f8 = 7;
  local_200 = &local_584;
  local_1f8 = local_5a8;
  FUN_1447c510a(&local_600,7,0);
  *(undefined8 *)(local_600 + 3) = 0x40e0000040c00000;
  *(undefined8 *)(local_600 + 5) = 0x4130000041100000;
  *local_600 = 0;
  local_600[1] = 0x40400000;
  local_600[2] = 0x40800000;
  local_600[3] = 0x40c00000;
  local_610 = (undefined8 *)0x0;
  local_608 = 4;
  FUN_1447c510a(&local_610,4,0);
  *local_610 = 0x4080000000000000;
  local_610[1] = 0x4130000040e00000;
  FUN_141735ea2(local_5f0,&local_600);
  local_614 = 0x19;
  local_648 = (undefined4 *)0x0;
  local_640 = 8;
  local_1f0 = &local_5cc;
  local_1e8 = local_5f0;
  FUN_1447c510a(&local_648,8,0);
  *(undefined8 *)(local_648 + 4) = 0x40e0000040c00000;
  *(undefined8 *)(local_648 + 6) = 0x4120000041100000;
  *local_648 = 0;
  local_648[1] = 0x3f800000;
  local_648[2] = 0x40400000;
  local_648[3] = 0x40800000;
  local_658 = (undefined8 *)0x0;
  local_650 = 4;
  FUN_1447c510a(&local_658,4,0);
  *local_658 = 0x4080000000000000;
  local_658[1] = 0x4120000040e00000;
  FUN_141735ea2(local_638,&local_648);
  local_65c = 0xc;
  local_690 = (undefined4 *)0x0;
  local_688 = 6;
  local_1e0 = &local_614;
  local_1d8 = local_638;
  FUN_1447c510a(&local_690,6,0);
  *local_690 = 0;
  local_690[1] = 0x40400000;
  local_690[2] = 0x40a00000;
  local_690[3] = 0x40c00000;
  *(undefined8 *)(local_690 + 4) = 0x4120000040e00000;
  local_6a0 = (undefined8 *)0x0;
  local_698 = 4;
  FUN_1447c510a(&local_6a0,4,0);
  *local_6a0 = 0x4040000000000000;
  local_6a0[1] = 0x4120000040e00000;
  FUN_141735ea2(local_680,&local_690);
  local_6a4 = 0x10;
  local_6d8 = (undefined4 *)0x0;
  local_6d0 = 8;
  local_1d0 = &local_65c;
  local_1c8 = local_680;
  FUN_1447c510a(&local_6d8,8,0);
  *(undefined8 *)(local_6d8 + 4) = 0x4110000040e00000;
  *(undefined8 *)(local_6d8 + 6) = 0x4130000041200000;
  *local_6d8 = 0;
  local_6d8[1] = 0x40000000;
  local_6d8[2] = 0x40800000;
  local_6d8[3] = 0x40a00000;
  local_6e8 = (undefined8 *)0x0;
  local_6e0 = 4;
  FUN_1447c510a(&local_6e8,4,0);
  *local_6e8 = 0x4080000000000000;
  local_6e8[1] = 0x4130000040e00000;
  FUN_141735ea2(local_6c8,&local_6d8);
  local_6ec = 0x1c;
  local_720 = (undefined4 *)0x0;
  local_718 = 7;
  local_1c0 = &local_6a4;
  local_1b8 = local_6c8;
  FUN_1447c510a(&local_720,7,0);
  *(undefined8 *)(local_720 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_720 + 5) = 0x4120000041000000;
  *local_720 = 0;
  local_720[1] = 0x3f800000;
  local_720[2] = 0x40800000;
  local_720[3] = 0x40a00000;
  local_730 = (undefined8 *)0x0;
  local_728 = 4;
  FUN_1447c510a(&local_730,4,0);
  *local_730 = 0x4080000000000000;
  local_730[1] = 0x4120000040e00000;
  FUN_141735ea2(local_710,&local_720);
  local_734 = 0x16;
  local_768 = (undefined4 *)0x0;
  local_760 = 7;
  local_1b0 = &local_6ec;
  local_1a8 = local_710;
  FUN_1447c510a(&local_768,7,0);
  *(undefined8 *)(local_768 + 3) = 0x40e0000040c00000;
  *(undefined8 *)(local_768 + 5) = 0x4120000041100000;
  *local_768 = 0;
  local_768[1] = 0x40000000;
  local_768[2] = 0x40800000;
  local_768[3] = 0x40c00000;
  local_778 = (undefined8 *)0x0;
  local_770 = 4;
  FUN_1447c510a(&local_778,4,0);
  *local_778 = 0x4080000000000000;
  local_778[1] = 0x4120000040e00000;
  FUN_141735ea2(local_758,&local_768);
  local_77c = 0x1d;
  local_7b0 = (undefined4 *)0x0;
  local_7a8 = 7;
  local_1a0 = &local_734;
  local_198 = local_758;
  FUN_1447c510a(&local_7b0,7,0);
  *(undefined8 *)(local_7b0 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_7b0 + 5) = 0x4120000041000000;
  *local_7b0 = 0;
  local_7b0[1] = 0x40000000;
  local_7b0[2] = 0x40800000;
  local_7b0[3] = 0x40a00000;
  local_7c0 = (undefined8 *)0x0;
  local_7b8 = 4;
  FUN_1447c510a(&local_7c0,4,0);
  *local_7c0 = 0x4080000000000000;
  local_7c0[1] = 0x4120000040e00000;
  FUN_141735ea2(local_7a0,&local_7b0,&local_7c0);
  local_7c4 = 8;
  local_7f8 = (undefined8 *)0x0;
  local_7f0 = 6;
  local_190 = &local_77c;
  local_188 = local_7a0;
  FUN_1447c510a(&local_7f8,6,0);
  *local_7f8 = 0x4000000000000000;
  local_7f8[1] = 0x40c0000040800000;
  local_7f8[2] = 0x4120000041000000;
  local_808 = (undefined4 *)0x0;
  local_800 = 4;
  FUN_1447c510a(&local_808,4,0);
  *local_808 = 0;
  local_808[1] = 0x40800000;
  local_808[2] = 0x40c00000;
  local_808[3] = 0x41200000;
  FUN_141735ea2(local_7e8,&local_7f8);
  local_80c = 7;
  local_840 = (undefined4 *)0x0;
  local_838 = 0xc;
  local_180 = &local_7c4;
  local_178 = local_7e8;
  FUN_1447c510a(&local_840,0xc,0);
  *(undefined8 *)(local_840 + 8) = 0x4110000041000000;
  *(undefined8 *)(local_840 + 10) = 0x4130000041200000;
  *(undefined8 *)(local_840 + 4) = 0x40a0000040800000;
  *(undefined8 *)(local_840 + 6) = 0x40e0000040c00000;
  *local_840 = 0;
  local_840[1] = 0x3f800000;
  local_840[2] = 0x40000000;
  local_840[3] = 0x40400000;
  local_850 = (undefined8 *)0x0;
  local_848 = 6;
  FUN_1447c510a(&local_850,6,0);
  *local_850 = 0x4000000000000000;
  local_850[1] = 0x40c0000040800000;
  local_850[2] = 0x4120000041000000;
  FUN_141735ea2(local_830,&local_840);
  local_854 = 9;
  local_888 = (undefined4 *)0x0;
  local_880 = 7;
  local_170 = &local_80c;
  local_168 = local_830;
  FUN_1447c510a(&local_888,7,0);
  *(undefined8 *)(local_888 + 3) = 0x40c0000040800000;
  *(undefined8 *)(local_888 + 5) = 0x4120000041000000;
  *local_888 = 0;
  local_888[1] = 0x3f800000;
  local_888[2] = 0x40400000;
  local_888[3] = 0x40800000;
  local_898 = (undefined8 *)0x0;
  local_890 = 4;
  FUN_1447c510a(&local_898,4,0);
  *local_898 = 0x4040000000000000;
  local_898[1] = 0x4120000040c00000;
  FUN_141735ea2(local_878,&local_888);
  local_89c = 0xb;
  local_8d0 = (undefined4 *)0x0;
  local_8c8 = 5;
  local_160 = &local_854;
  local_158 = local_878;
  FUN_1447c510a(&local_8d0,5,0);
  *local_8d0 = 0;
  local_8d0[1] = 0x40400000;
  local_8d0[2] = 0x40a00000;
  local_8d0[3] = 0x40e00000;
  local_8d0[4] = 0x41200000;
  local_8e0 = (undefined8 *)0x0;
  local_8d8 = 4;
  FUN_1447c510a(&local_8e0,4,0);
  *local_8e0 = 0x4040000000000000;
  local_8e0[1] = 0x4120000040e00000;
  FUN_141735ea2(local_8c0,&local_8d0);
  local_8e4 = 0xe;
  local_918 = (undefined8 *)0x0;
  local_910 = 8;
  local_150 = &local_89c;
  local_148 = local_8c0;
  FUN_1447c510a(&local_918,8,0);
  local_918[2] = 0x4100000040e00000;
  local_918[3] = 0x4130000041100000;
  *local_918 = 0x4000000000000000;
  local_918[1] = 0x40a0000040400000;
  local_928 = (undefined8 *)0x0;
  local_920 = 4;
  FUN_1447c510a(&local_928,4,0);
  *local_928 = 0x4040000000000000;
  local_928[1] = 0x4120000040e00000;
  FUN_141735ea2(local_908,&local_918);
  local_92c = 0x13;
  local_960 = (undefined4 *)0x0;
  local_958 = 7;
  local_140 = &local_8e4;
  local_138 = local_908;
  FUN_1447c510a(&local_960,7,0);
  *(undefined8 *)(local_960 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_960 + 5) = 0x4130000041100000;
  *local_960 = 0;
  local_960[1] = 0x40000000;
  local_960[2] = 0x40400000;
  local_960[3] = 0x40a00000;
  local_970 = (undefined8 *)0x0;
  local_968 = 4;
  FUN_1447c510a(&local_970,4,0);
  *local_970 = 0x4040000000000000;
  local_970[1] = 0x4130000040e00000;
  FUN_141735ea2(local_950,&local_960,&local_970);
  local_974 = 0xf;
  local_9a8 = (undefined8 *)0x0;
  local_9a0 = 8;
  local_130 = &local_92c;
  local_128 = local_950;
  FUN_1447c510a(&local_9a8,8,0);
  local_9a8[2] = 0x4100000040e00000;
  local_9a8[3] = 0x4130000041100000;
  *local_9a8 = 0x4000000000000000;
  local_9a8[1] = 0x40a0000040400000;
  local_9b8 = (undefined8 *)0x0;
  local_9b0 = 4;
  FUN_1447c510a(&local_9b8,4,0);
  *local_9b8 = 0x4040000000000000;
  local_9b8[1] = 0x4130000040e00000;
  FUN_141735ea2(local_998,&local_9a8);
  local_9bc = 0x12;
  local_9f0 = (undefined4 *)0x0;
  local_9e8 = 7;
  local_120 = &local_974;
  local_118 = local_998;
  FUN_1447c510a(&local_9f0,7,0);
  *(undefined8 *)(local_9f0 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_9f0 + 5) = 0x4130000041000000;
  *local_9f0 = 0;
  local_9f0[1] = 0x40000000;
  local_9f0[2] = 0x40400000;
  local_9f0[3] = 0x40a00000;
  local_a00 = (undefined8 *)0x0;
  local_9f8 = 4;
  FUN_1447c510a(&local_a00,4,0);
  *local_a00 = 0x4040000000000000;
  local_a00[1] = 0x4130000040e00000;
  FUN_141735ea2(local_9e0,&local_9f0);
  local_a04 = 0x1a;
  local_a38 = (undefined8 *)0x0;
  local_a30 = 8;
  local_110 = &local_9bc;
  local_108 = local_9e0;
  FUN_1447c510a(&local_a38,8,0);
  local_a38[2] = 0x4100000040c00000;
  local_a38[3] = 0x4130000041100000;
  *local_a38 = 0x4000000000000000;
  local_a38[1] = 0x40a0000040400000;
  local_a48 = (undefined4 *)0x0;
  local_a40 = 4;
  FUN_1447c510a(&local_a48,4,0);
  *local_a48 = 0;
  local_a48[1] = 0x40400000;
  local_a48[2] = 0x40c00000;
  local_a48[3] = 0x41300000;
  FUN_141735ea2(local_a28,&local_a38);
  local_a4c = 2;
  local_a80 = (undefined4 *)0x0;
  local_a78 = 7;
  local_100 = &local_a04;
  local_f8 = local_a28;
  FUN_1447c510a(&local_a80,7,0);
  *(undefined8 *)(local_a80 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_a80 + 5) = 0x4120000041000000;
  *local_a80 = 0;
  local_a80[1] = 0x3f800000;
  local_a80[2] = 0x40400000;
  local_a80[3] = 0x40a00000;
  local_a90 = (undefined8 *)0x0;
  local_a88 = 4;
  FUN_1447c510a(&local_a90,4,0);
  *local_a90 = 0x4040000000000000;
  local_a90[1] = 0x4120000040e00000;
  FUN_141735ea2(local_a70,&local_a80);
  local_a94 = 5;
  local_ac8 = (undefined4 *)0x0;
  local_ac0 = 7;
  local_f0 = &local_a4c;
  local_e8 = local_a70;
  FUN_1447c510a(&local_ac8,7,0);
  *(undefined8 *)(local_ac8 + 3) = 0x40e0000040a00000;
  *(undefined8 *)(local_ac8 + 5) = 0x4120000041000000;
  *local_ac8 = 0;
  local_ac8[1] = 0x40000000;
  local_ac8[2] = 0x40400000;
  local_ac8[3] = 0x40a00000;
  local_ad8 = (undefined8 *)0x0;
  local_ad0 = 4;
  FUN_1447c510a(&local_ad8,4,0);
  *local_ad8 = 0x4040000000000000;
  local_ad8[1] = 0x4120000040e00000;
  FUN_141735ea2(local_ab8,&local_ac8);
  local_adc = 0x1b;
  local_b10 = (undefined4 *)0x0;
  local_b08 = 7;
  local_e0 = &local_a94;
  local_d8 = local_ab8;
  FUN_1447c510a(&local_b10,7,0);
  *(undefined8 *)(local_b10 + 3) = 0x40c0000040a00000;
  *(undefined8 *)(local_b10 + 5) = 0x4120000041000000;
  *local_b10 = 0;
  local_b10[1] = 0x40000000;
  local_b10[2] = 0x40400000;
  local_b10[3] = 0x40a00000;
  local_b20 = (undefined8 *)0x0;
  local_b18 = 4;
  FUN_1447c510a(&local_b20,4,0);
  *local_b20 = 0x4040000000000000;
  local_b20[1] = 0x4120000040c00000;
  FUN_141735ea2(local_b00,&local_b10,&local_b20);
  local_2a8 = local_c0;
  local_2b0 = &local_2a0;
  local_d0 = &local_adc;
  local_c8 = local_b00;
  FUN_14165f8ba();
  if (local_af0 != 0) {
    FUN_1400020a8();
  }
  if (local_b00[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b20 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b10 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_aa8 != 0) {
    FUN_1400020a8();
  }
  if (local_ab8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_ad8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_ac8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a60 != 0) {
    FUN_1400020a8();
  }
  if (local_a70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a80 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a18 != 0) {
    FUN_1400020a8();
  }
  if (local_a28[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a48 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_9d0 != 0) {
    FUN_1400020a8();
  }
  if (local_9e0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a00 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_9f0 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_988 != 0) {
    FUN_1400020a8();
  }
  if (local_998[0] != 0) {
    FUN_1400020a8();
  }
  if (local_9b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_9a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_940 != 0) {
    FUN_1400020a8();
  }
  if (local_950[0] != 0) {
    FUN_1400020a8();
  }
  if (local_970 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_960 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_8f8 != 0) {
    FUN_1400020a8();
  }
  if (local_908[0] != 0) {
    FUN_1400020a8();
  }
  if (local_928 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_918 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_8b0 != 0) {
    FUN_1400020a8();
  }
  if (local_8c0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_8e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_8d0 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_868 != 0) {
    FUN_1400020a8();
  }
  if (local_878[0] != 0) {
    FUN_1400020a8();
  }
  if (local_898 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_888 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_820 != 0) {
    FUN_1400020a8();
  }
  if (local_830[0] != 0) {
    FUN_1400020a8();
  }
  if (local_850 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_840 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_7d8 != 0) {
    FUN_1400020a8();
  }
  if (local_7e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_808 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_7f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_790 != 0) {
    FUN_1400020a8();
  }
  if (local_7a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_7c0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_7b0 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_748 != 0) {
    FUN_1400020a8();
  }
  if (local_758[0] != 0) {
    FUN_1400020a8();
  }
  if (local_778 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_768 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_700 != 0) {
    FUN_1400020a8();
  }
  if (local_710[0] != 0) {
    FUN_1400020a8();
  }
  if (local_730 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_720 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_6b8 != 0) {
    FUN_1400020a8();
  }
  if (local_6c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_6e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_6d8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_670 != 0) {
    FUN_1400020a8();
  }
  if (local_680[0] != 0) {
    FUN_1400020a8();
  }
  if (local_6a0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_690 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_628 != 0) {
    FUN_1400020a8();
  }
  if (local_638[0] != 0) {
    FUN_1400020a8();
  }
  if (local_658 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_648 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_5e0 != 0) {
    FUN_1400020a8();
  }
  if (local_5f0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_610 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_600 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_598 != 0) {
    FUN_1400020a8();
  }
  if (local_5a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_5b8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_550 != 0) {
    FUN_1400020a8();
  }
  if (local_560[0] != 0) {
    FUN_1400020a8();
  }
  if (local_580 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_570 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_508 != 0) {
    FUN_1400020a8();
  }
  if (local_518[0] != 0) {
    FUN_1400020a8();
  }
  if (local_538 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_528 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4c0 != 0) {
    FUN_1400020a8();
  }
  if (local_4d0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_4f0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4e0 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_478 != 0) {
    FUN_1400020a8();
  }
  if (local_488[0] != 0) {
    FUN_1400020a8();
  }
  if (local_4a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_498 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_430 != 0) {
    FUN_1400020a8();
  }
  if (local_440[0] != 0) {
    FUN_1400020a8();
  }
  if (local_460 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_450 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  if (local_3f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_418 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_408 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3a0 != 0) {
    FUN_1400020a8();
  }
  if (local_3b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_3d0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3c0 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  if (local_368[0] != 0) {
    FUN_1400020a8();
  }
  if (local_388 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_378 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_310 != 0) {
    FUN_1400020a8();
  }
  if (local_320[0] != 0) {
    FUN_1400020a8();
  }
  if (local_340 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_330 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_2d4,local_2d8) != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2e8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_142af457c);
  local_b28 = 0;
  FUN_141471170(&DAT_14c99e3f0,L"au.MultithreadedPatching.PushCallsPerOutputCleanupCheck",
                &DAT_14c75f588,
                L"Number of push calls (usually corrisponding to audio block updates)\nbefore checking if an output is ready to be destroyed. Default = 256"
               );
  atexit(FUN_142af45a5);
  _DAT_14c99e444 = 0x3f800000;
  uRam000000014c99e44c = 0x3f0000003f4ccccd;
  _DAT_14c99e454 = 0x3f333333;
  uRam000000014c99e45c = 0x3f00000000000000;
  _DAT_14c99e464 = 0x3f000000;
  uRam000000014c99e468 = 0x3f000000;
  uRam000000014c99e46c = 0x3f000000;
  uRam000000014c99e470 = 0x3f000000;
  _DAT_14c99e474 = 0x101;
  DAT_14c99e476 = 0;
  local_2a0 = (undefined4 *)0x800000014a136938;
  local_2d8 = 0x10;
  uVar1 = FUN_14577453c();
  local_298._0_5_ = CONCAT14(1,uVar1);
  FUN_146296362(&local_2a0);
  _DAT_14c99e47c = 0x40135d8e;
  if ((local_c0[0] ^ (ulonglong)auStack_b48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af69a8 FUN_142af69a8 body=69 status=ok
// SIG undefined FUN_142af69a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af69a8(void)

{
  _DAT_14c99e4a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af69ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e4a8,1);
  return;
}



// FUNCTION 142af69ed FUN_142af69ed body=69 status=ok
// SIG undefined FUN_142af69ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af69ed(void)

{
  _DAT_14c99e4b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e4c0,1);
  return;
}



// FUNCTION 142af6a32 FUN_142af6a32 body=69 status=ok
// SIG undefined FUN_142af6a32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6a32(void)

{
  _DAT_14c99e4c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e4d0,1);
  return;
}



// FUNCTION 142af6a77 FUN_142af6a77 body=69 status=ok
// SIG undefined FUN_142af6a77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6a77(void)

{
  _DAT_14c99e4d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e4e0,1);
  return;
}



// FUNCTION 142af6abc FUN_142af6abc body=69 status=ok
// SIG undefined FUN_142af6abc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6abc(void)

{
  _DAT_14c99e4f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e4f8,1);
  return;
}



// FUNCTION 142af6b01 FUN_142af6b01 body=69 status=ok
// SIG undefined FUN_142af6b01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6b01(void)

{
  _DAT_14c99e500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e508,1);
  return;
}



// FUNCTION 142af6b46 FUN_142af6b46 body=69 status=ok
// SIG undefined FUN_142af6b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6b46(void)

{
  _DAT_14c99e510 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e518,1);
  return;
}



// FUNCTION 142af6b8b FUN_142af6b8b body=69 status=ok
// SIG undefined FUN_142af6b8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6b8b(void)

{
  _DAT_14c99e520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e528,1);
  return;
}



// FUNCTION 142af6bd0 FUN_142af6bd0 body=69 status=ok
// SIG undefined FUN_142af6bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6bd0(void)

{
  _DAT_14c99e530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6c12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e538,1);
  return;
}



// FUNCTION 142af6c15 FUN_142af6c15 body=69 status=ok
// SIG undefined FUN_142af6c15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6c15(void)

{
  _DAT_14c99e540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e548,1);
  return;
}



// FUNCTION 142af6c5a FUN_142af6c5a body=69 status=ok
// SIG undefined FUN_142af6c5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6c5a(void)

{
  _DAT_14c99e550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e558,1);
  return;
}



// FUNCTION 142af6c9f FUN_142af6c9f body=69 status=ok
// SIG undefined FUN_142af6c9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af6c9f(void)

{
  _DAT_14c99e560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af6ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99e568,1);
  return;
}



// FUNCTION 142af6ce4 FUN_142af6ce4 body=276 status=ok
// SIG undefined FUN_142af6ce4(void)

void FUN_142af6ce4(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  iVar3 = 0;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN_1470345fa(param_1 + 5,0);
    iVar3 = *(int *)(param_1 + 6);
    iVar1 = *(int *)((longlong)param_1 + 0x34);
  }
  *(uint *)(param_1 + 6) = iVar3 + param_3;
  if ((uint)(iVar1 - iVar3) < param_3) {
    FUN_145ca0cd4(param_1 + 5);
  }
  *(undefined4 *)(param_1 + 0xb) = param_5;
  *param_1 = param_2;
  FUN_14703e85e(param_1 + 1);
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  iVar3 = 0;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_140389cc2(param_1 + 7,0);
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = *(int *)((longlong)param_1 + 0x44);
  }
  iVar2 = *(int *)(param_1 + 0xb);
  iVar4 = (uint)(iVar2 == 2) * 2;
  if (iVar2 == 1) {
    iVar4 = 4;
  }
  *(uint *)(param_1 + 8) = iVar4 * param_3 + iVar3;
  if ((uint)(iVar1 - iVar3) < iVar4 * param_3) {
    FUN_1400ef140(param_1 + 7);
    iVar2 = *(int *)(param_1 + 0xb);
  }
  if (iVar2 == 1) {
    return;
  }
  FUN_140a02ca4(param_1 + 9,(iVar2 == 2) * param_3 * 2,1);
  return;
}



// FUNCTION 142af6df8 FUN_142af6df8 body=463 status=ok
// SIG undefined FUN_142af6df8(void)

undefined8 FUN_142af6df8(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  void *_Src;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  
  uVar1 = *(uint *)(param_1 + 3);
  uVar5 = *(int *)((longlong)param_1 + 0x1c) + uVar1 + ~*(uint *)(param_1 + 4);
  uVar6 = (ulonglong)uVar5 / (ulonglong)uVar1;
  uVar5 = uVar5 % uVar1;
  uVar1 = *(uint *)(param_1 + 6);
  if (uVar5 < uVar1) goto LAB_142af6fab;
  plVar10 = param_1 + 5;
  memset((void *)param_1[5],0,(longlong)(int)uVar1 * 4);
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
  }
  uVar11 = *(uint *)(param_1 + 0xb);
  uVar6 = (ulonglong)uVar11;
  if (uVar11 == 2) {
    lVar4 = param_1[9];
    iVar9 = (int)param_1[6];
    FUN_1421c4f70(param_1[5],iVar9,DAT_14c75f5ac * 32767.0);
    FUN_1421c5180(param_1[5],(int)param_1[6],0xc6fffe00,0x46fffe00);
    if (0 < (longlong)iVar9) {
      lVar7 = 0;
      do {
        *(short *)(lVar4 + lVar7 * 2) = (short)(int)*(float *)(*plVar10 + lVar7 * 4);
        lVar7 = lVar7 + 1;
      } while (iVar9 != lVar7);
    }
    plVar10 = param_1 + 9;
    uVar11 = *(uint *)(param_1 + 10);
LAB_142af6f27:
    _Src = (void *)*plVar10;
    _Dst = (void *)param_1[1];
    uVar2 = *(uint *)(param_1 + 4);
    uVar3 = *(uint *)(param_1 + 3);
    uVar8 = (*(int *)((longlong)param_1 + 0x1c) + uVar3 + ~*(uint *)(param_1 + 4)) % uVar3;
    if ((int)uVar8 <= (int)uVar11) {
      uVar11 = uVar8;
    }
    uVar8 = uVar3 - uVar2;
    if ((int)uVar11 < (int)(uVar3 - uVar2)) {
      uVar8 = uVar11;
    }
    memcpy((void *)((longlong)_Dst + (ulonglong)uVar2),_Src,(longlong)(int)uVar8);
    memcpy(_Dst,(void *)((longlong)_Src + (longlong)(int)uVar8),(longlong)(int)(uVar11 - uVar8));
    uVar6 = (ulonglong)(uVar11 + uVar2) / (ulonglong)*(uint *)(param_1 + 3);
    LOCK();
    *(uint *)(param_1 + 4) = (uVar11 + uVar2) % *(uint *)(param_1 + 3);
    UNLOCK();
  }
  else if (uVar11 == 1) {
    if (1e-08 < ABS(DAT_14c75f5ac + -1.0)) {
      FUN_1421c4f70(param_1[5],(int)param_1[6]);
    }
    FUN_1421c5180(param_1[5],(int)param_1[6],0xbf800000,0x3f800000);
    uVar11 = (int)param_1[6] << 2;
    goto LAB_142af6f27;
  }
  if (0 < DAT_14c99e570) {
    uVar11 = *(uint *)((longlong)param_1 + 0x5c);
    uVar6 = (ulonglong)uVar11;
    iVar9 = 0;
    if ((int)uVar11 < 500) {
      iVar9 = uVar11 + 1;
    }
    *(int *)((longlong)param_1 + 0x5c) = iVar9;
  }
LAB_142af6fab:
  return CONCAT71((int7)(uVar6 >> 8),uVar1 <= uVar5);
}



// FUNCTION 142af6fc8 FUN_142af6fc8 body=259 status=ok
// SIG undefined FUN_142af6fc8(void)

ulonglong FUN_142af6fc8(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar6 = FUN_14118da1c();
      bVar4 = FUN_14054d46e(uVar6,L"nothreading");
      DAT_14c83f0f8 = bVar4 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 1) goto LAB_142af7008;
  }
  else {
LAB_142af7008:
    cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar3 == '\0') {
      if (*(uint *)((longlong)param_1 + 0x1a4) != 0) {
        return (ulonglong)*(uint *)((longlong)param_1 + 0x1a4);
      }
      if ((*(float *)((longlong)param_1 + 0x15c) == 0.0) &&
         (!NAN(*(float *)((longlong)param_1 + 0x15c)))) {
        return 0;
      }
      LOCK();
      uVar1 = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x34) = 1;
      uVar5 = (ulonglong)uVar1;
      UNLOCK();
      plVar2 = (longlong *)param_1[0x2a];
      if (plVar2 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14c75f5a8,0);
      }
      goto LAB_142af702d;
    }
  }
  LOCK();
  uVar1 = *(uint *)((longlong)param_1 + 0x1a4);
  *(uint *)((longlong)param_1 + 0x1a4) = 1;
  uVar5 = (ulonglong)uVar1;
  UNLOCK();
LAB_142af702d:
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  return uVar5;
}



// FUNCTION 142af70cc FUN_142af70cc body=362 status=ok
// SIG undefined FUN_142af70cc(void)

undefined4 FUN_142af70cc(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  float fVar5;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *(uint *)(param_1 + 0x84);
  if (*(uint *)(param_1 + 0x98) == 0) {
    fVar5 = 48000.0;
  }
  else {
    fVar5 = (float)*(uint *)(param_1 + 0x98);
  }
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))();
  }
  fVar5 = (float)uVar2 / fVar5;
  lVar3 = *(longlong *)(param_1 + 0x1c0);
  if (lVar3 == 0) {
    local_78 = 0;
    local_68 = &PTR_LAB_14a137f20;
    local_88[0] = &LAB_142af7de4;
    local_60 = param_1;
    FUN_147041b12(param_1,local_88,fVar5,0);
  }
  else {
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_LAB_14a137f20;
    local_a0 = param_1;
    local_c8[0] = &LAB_142af7de4;
    if (*(longlong *)(lVar3 + 0x60) != 0) {
      FUN_140759336(lVar3 + 0x10,local_c8);
      *(float *)(lVar3 + 0x50) = fVar5;
      LOCK();
      *(undefined1 *)(lVar3 + 0x55) = 0;
      UNLOCK();
      (**(code **)(**(longlong **)(lVar3 + 0x60) + 0x10))();
      if (local_c8[0] == (undefined1 *)0x0) goto LAB_142af71c1;
    }
    pppuVar4 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar4 = local_b8;
    }
    (*(code *)(*pppuVar4)[2])();
  }
LAB_142af71c1:
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  UNLOCK();
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 142af7238 FUN_142af7238 body=87 status=ok
// SIG undefined FUN_142af7238(void)

void FUN_142af7238(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14c75f59c == 0) {
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    else {
      LOCK();
      *(undefined1 *)((longlong)plVar1 + 0x55) = 1;
      UNLOCK();
      if ((longlong *)plVar1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[0xb] + 0x10))();
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 142af7290 FUN_142af7290 body=332 status=ok
// SIG undefined FUN_142af7290(void)

void FUN_142af7290(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < DAT_14c99e570) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x198) < 500) {
      iVar2 = *(int *)(param_1 + 0x198) + 1;
    }
    *(int *)(param_1 + 0x198) = iVar2;
  }
  if (*(int *)(param_1 + 0x1a0) == 0) {
    if (*(int *)(param_1 + 0x1a4) != 0) {
      memset((void *)*param_2,0,(longlong)(int)param_2[1] << 2);
    }
  }
  else {
    lVar1 = param_2[1];
    fVar4 = *(float *)(param_1 + 0x15c);
    *(float *)(param_1 + 0x168) = fVar4;
    if (((int)lVar1 == 0) || (*(char *)(param_1 + 0x170) != '\0')) {
      *(undefined1 *)(param_1 + 0x170) = 0;
      *(float *)(param_1 + 0x160) = fVar4;
      fVar5 = 0.0;
      fVar3 = fVar4;
    }
    else {
      fVar5 = (fVar4 - *(float *)(param_1 + 0x160)) / (float)(int)lVar1;
      fVar3 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar3;
    *(float *)(param_1 + 0x16c) = fVar5;
    if (0 < (int)param_2[1]) {
      lVar1 = 0;
      do {
        fVar3 = *(float *)(param_1 + 0x16c) + *(float *)(param_1 + 0x160);
        fVar4 = *(float *)(*param_2 + lVar1 * 4);
        *(float *)(param_1 + 0x160) = fVar3;
        *(float *)(*param_2 + lVar1 * 4) = fVar4 * fVar3;
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)param_2[1]);
      fVar4 = *(float *)(param_1 + 0x15c);
    }
    LOCK();
    *(uint *)(param_1 + 0x1a4) = -(uint)(fVar4 == 0.0) & 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x168);
  return;
}



// FUNCTION 142af73dc FUN_142af73dc body=341 status=ok
// SIG undefined FUN_142af73dc(void)

void FUN_142af73dc(longlong param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < DAT_14c99e570) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x198) < 500) {
      iVar3 = *(int *)(param_1 + 0x198) + 1;
    }
    *(int *)(param_1 + 0x198) = iVar3;
  }
  if (*(int *)(param_1 + 0x1a0) == 0) {
    if (*(int *)(param_1 + 0x1a4) != 0) {
      memset((void *)*param_2,0,(longlong)(int)param_2[1] * 2);
    }
  }
  else {
    lVar2 = param_2[1];
    fVar5 = *(float *)(param_1 + 0x15c);
    *(float *)(param_1 + 0x168) = fVar5;
    if (((int)lVar2 == 0) || (*(char *)(param_1 + 0x170) != '\0')) {
      *(undefined1 *)(param_1 + 0x170) = 0;
      *(float *)(param_1 + 0x160) = fVar5;
      fVar4 = 0.0;
      fVar6 = fVar5;
    }
    else {
      fVar4 = (fVar5 - *(float *)(param_1 + 0x160)) / (float)(int)lVar2;
      fVar6 = *(float *)(param_1 + 0x160);
    }
    *(float *)(param_1 + 0x164) = fVar6;
    *(float *)(param_1 + 0x16c) = fVar4;
    if (0 < (int)param_2[1]) {
      lVar2 = 0;
      do {
        sVar1 = *(short *)(*param_2 + lVar2 * 2);
        fVar5 = *(float *)(param_1 + 0x16c) + *(float *)(param_1 + 0x160);
        *(float *)(param_1 + 0x160) = fVar5;
        *(short *)(*param_2 + lVar2 * 2) = (short)(int)(fVar5 * (float)(int)sVar1);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_2[1]);
      fVar5 = *(float *)(param_1 + 0x15c);
    }
    LOCK();
    *(uint *)(param_1 + 0x1a4) = -(uint)(fVar5 == 0.0) & 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x168);
  return;
}



// FUNCTION 142af7532 FUN_142af7532 body=397 status=ok
// SIG undefined FUN_142af7532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af7532(longlong *param_1)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[0x29] == 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
    if (BVar2 != 0) {
      if ((int)param_1[0xd] != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
      memset((void *)param_1[0x1c],0,(longlong)(int)param_1[0x1d]);
      iVar3 = FUN_147034fe4(param_1 + 0x16,param_1[0x1c],(int)param_1[0x1d]);
      lVar1 = param_1[0x1c];
      local_38 = (int)param_1[0x1d];
      local_40 = lVar1;
      if (iVar3 == local_38) {
        _DAT_14c99e580 = 0;
        *(undefined1 *)(param_1 + 0x21) = 0;
      }
      else {
        _DAT_14c99e57c = _DAT_14c99e57c + 1;
        _DAT_14c99e580 = _DAT_14c99e580 + 1;
        if ((char)param_1[0x21] == '\0') {
          QueryPerformanceCounter(&local_30);
          lVar4 = local_30.QuadPart - (longlong)_DAT_14c99e588;
          auVar5._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
          auVar5._0_8_ = lVar4;
          auVar5._12_4_ = 0x45300000;
          if (_DAT_14c75f58c <
              (float)((((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
                      (auVar5._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0)) {
            *(undefined1 *)(param_1 + 0x21) = 1;
            QueryPerformanceCounter(&local_30);
            _DAT_14c99e588 = local_30.s;
          }
        }
      }
      FUN_147041d20(param_1,&local_40);
      (**(code **)(*param_1 + 200))(param_1,lVar1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
      if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x23] + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af76d4 FUN_142af76d4 body=330 status=ok
// SIG undefined FUN_142af76d4(void)

void FUN_142af76d4(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  *(undefined4 *)(param_1 + 0x1b4) = 1;
  UNLOCK();
  iVar6 = 2;
  if (2 < *(int *)(param_1 + 0x88)) {
    iVar6 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x158) = iVar6;
  local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x4c));
  FUN_142af6ce4(param_1 + 0xa8,*(undefined8 *)(param_1 + 0x70),
                *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x68) = 4;
  uVar3 = FUN_1405d8a54(0);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  uVar3 = FUN_1405d8a54(0);
  *(undefined8 *)(param_1 + 0x150) = uVar3;
  uVar2 = DAT_14c75f590;
  lVar7 = -1;
  if (0 < (longlong)DAT_14c99e4e8) {
    lVar7 = (longlong)DAT_14c99e4e8;
  }
  LOCK();
  UNLOCK();
  iVar6 = DAT_14c99e574 + 1;
  DAT_14c99e574 = DAT_14c99e574 + 1;
  FUN_140002266(&local_40,L"AudioMixerRenderThread(%d)",iVar6);
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_50 = 0;
  local_58 = lVar7;
  plVar4 = (longlong *)FUN_1411b1052(param_1,puVar5,0,uVar2);
  plVar1 = *(longlong **)(param_1 + 0x110);
  if ((plVar1 != plVar4) && (*(longlong **)(param_1 + 0x110) = plVar4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142af7820 FUN_142af7820 body=291 status=ok
// SIG undefined FUN_142af7820(void)

undefined4 FUN_142af7820(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x68) != 2) {
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))();
  }
  plVar2 = *(longlong **)(param_1 + 0x110);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    if (DAT_14c846b14 == '\x01') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c83f0fc) {
        FUN_144b3d300(&DAT_14c83f0fc);
        if (DAT_14c83f0fc == -1) {
          uVar4 = FUN_14118da1c();
          bVar3 = FUN_14054d46e(uVar4,L"nothreading");
          DAT_14c83f0f8 = bVar3 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
        }
      }
      if (DAT_14c83f0f8 == 0) {
        *(undefined4 *)(param_1 + 0x68) = 2;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x110);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_14018802a();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_14018802a();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 142af7944 FUN_142af7944 body=49 status=ok
// SIG undefined FUN_142af7944(void)

void FUN_142af7944(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x60) == 4) && (*(int *)(param_1 + 0x1a0) != 0)) {
    do {
      cVar1 = FUN_142af6df8(param_1 + 0xa0);
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION 142af7976 FUN_142af7976 body=371 status=ok
// SIG undefined FUN_142af7976(void)

undefined8 FUN_142af7976(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  memset((void *)param_1[0x1c],0,(longlong)(int)param_1[0x1d]);
  FUN_147034fe4(param_1 + 0x16,param_1[0x1c],(int)param_1[0x1d]);
  (**(code **)(*param_1 + 200))(param_1,param_1[0x1c]);
  FUN_142af6df8(param_1 + 0x15);
  if ((int)param_1[0xd] != 3) {
LAB_142af7a18:
    do {
      if ((int)param_1[0x35] != 0) {
        cVar2 = FUN_142af6df8(param_1 + 0x15);
        if (cVar2 != '\0') goto LAB_142af7a18;
      }
      if (4999 < DAT_14c75f5a0) {
        DAT_14c75f5a0 = 5000;
      }
      if (DAT_14c75f5a0 < 0x1f5) {
        DAT_14c75f5a0 = 500;
      }
      QueryPerformanceCounter(local_58);
      plVar1 = (longlong *)param_1[0x23];
      if (plVar1 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,DAT_14c75f5a0,0);
        if (cVar2 == '\0') {
          FUN_140056680(local_58,&DAT_149dfb77a);
          (**(code **)(*param_1 + 0xb8))
                    (param_1,local_58,1,L"AudioMixerPlatformInterface. Timeout waiting for h/w.");
          if (local_58[0].QuadPart != 0) {
            FUN_1400020a8();
          }
          QueryPerformanceCounter(local_58);
        }
      }
    } while ((int)param_1[0xd] != 3);
  }
  (**(code **)(*(longlong *)param_1[0x12] + 8))();
  *(undefined4 *)(param_1 + 0xd) = 2;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af7aea FUN_142af7aea body=156 status=ok
// SIG undefined FUN_142af7aea(void)

undefined4 FUN_142af7aea(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  
  uVar1 = MXCSR;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = MXCSR;
  MXCSR = MXCSR | 0x8000;
  local_20 = MXCSR;
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
  }
  (**(code **)(*DAT_14c872d28 + 0x78))();
  uVar2 = (**(code **)(*param_1 + 0x130))(param_1);
  if (DAT_14c872d28 != (longlong *)0x0) {
    (**(code **)(*DAT_14c872d28 + 0x90))();
  }
  local_1c = uVar1;
  MXCSR = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af7b88 FUN_142af7b88 body=499 status=ok
// SIG undefined FUN_142af7b88(void)

undefined8 FUN_142af7b88(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  QueryPerformanceCounter(&local_98);
  fVar5 = *(float *)(param_1 + 0x50);
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    dVar2 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
    do {
      plVar4 = *(longlong **)(param_1 + 0x60);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff,0);
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
        QueryPerformanceCounter(&local_98);
        dVar2 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
        fVar5 = *(float *)(param_1 + 0x50);
      }
      while (((*(byte *)(param_1 + 0x55) & 1) == 0 && ((*(byte *)(param_1 + 0x54) & 1) == 0))) {
        pcVar1 = *(code **)(param_1 + 0x10);
        plVar4 = *(longlong **)(param_1 + 0x20);
        if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
          plVar4 = (longlong *)(param_1 + 0x30);
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3);
        fVar5 = fVar5 * 1000.0;
        if (200.0 <= fVar5) {
          fVar5 = 200.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                  (*(longlong **)(param_1 + 0x58),(int)fVar5);
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))();
        dVar2 = dVar2 + (double)*(float *)(param_1 + 0x50);
        QueryPerformanceCounter(&local_98);
        fVar5 = (float)((double)*(float *)(param_1 + 0x50) -
                       (((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) - dVar2));
      }
    } while ((*(byte *)(param_1 + 0x54) & 1) == 0);
  }
  if ((local_90 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af7d7c FUN_142af7d7c body=103 status=ok
// SIG undefined FUN_142af7d7c(void)

undefined1 FUN_142af7d7c(longlong param_1)

{
  undefined1 uVar1;
  
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x54) = 1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))();
    }
    uVar1 = FUN_14018802a(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_14018802a();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return uVar1;
}



// FUNCTION 142af7e0a FUN_142af7e0a body=12 status=ok
// SIG undefined FUN_142af7e0a(void)

void FUN_142af7e0a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142af7e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142af7e16 FUN_142af7e16 body=29 status=ok
// SIG undefined FUN_142af7e16(void)

undefined8 FUN_142af7e16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142af7e33 FUN_142af7e33 body=712 status=ok
// SIG undefined FUN_142af7e33(void)

void FUN_142af7e33(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_141471170(&DAT_14c99e4a0,L"au.LogRenderTimes",&DAT_14c99e4b0,
                L"Logs Audio Render Times.\n0: Not Log, 1: Log");
  atexit(FUN_142af69a8);
  local_38 = 0;
  FUN_1415c789c(&DAT_14c99e4b8,L"au.MinLogTimeBetweenUnderrunWarnings",&DAT_14c75f58c,
                L"Min time between underrun warnings (globally) in MS\nSet the time between each subsequent underrun log warning globaly (defaults to 10secs)"
               );
  atexit(FUN_142af69ed);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e4c8,L"au.RenderThreadPriority",&DAT_14c75f590,
                L"Sets audio render thread priority. Defaults to 3.\n0: Normal, 1: Above Normal, 2: Below Normal, 3: Highest, 4: Lowest, 5: Slightly Below Normal, 6: Time Critical"
               );
  atexit(FUN_142af6a32);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e4d8,L"au.RenderThreadAffinity",&DAT_14c99e4e8,
                L"Override audio render thread affinity.\n0: Disabled (Default), otherwise overriden thread affinity."
               );
  atexit(FUN_142af6a77);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e4f0,L"au.UseThreadedDeviceSwap",&DAT_14c75f594,
                L"Lets Device Swap go wide.0 off, 1 on");
  atexit(FUN_142af6abc);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e500,L"au.UseCachedDeviceInfoCache",&DAT_14c75f598,
                L"Uses a Cache of the DeviceCache instead of asking the OS0 off, 1 on");
  atexit(FUN_142af6b01);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e510,L"au.RecycleThreads",&DAT_14c75f59c,
                L"Keeps threads to reuse instead of create/destroying them0 off, 1 on");
  atexit(FUN_142af6b46);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e520,L"au.OverrunTimeoutMSec",&DAT_14c75f5a0,
                L"Amount of time to wait for the render thread to time out before swapping to the null device. \n"
               );
  atexit(FUN_142af6b8b);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e530,L"au.UnderrunTimeoutMSec",&DAT_14c75f5a4,
                L"Amount of time to wait for the render thread to generate the next buffer before submitting an underrun buffer. \n"
               );
  atexit(FUN_142af6bd0);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e540,L"au.FadeOutTimeoutMSec",&DAT_14c75f5a8,
                L"Amount of time to wait for the FadeOut Event to fire. \n");
  atexit(FUN_142af6c15);
  local_38 = 0;
  FUN_1415c789c(&DAT_14c99e550,L"au.LinearGainScalarForFinalOutut",&DAT_14c75f5ac,
                L"Linear gain scalar applied to the final float buffer to allow for hotfixable mitigation of clipping \nDefault is 1.0f \n"
               );
  atexit(FUN_142af6c5a);
  local_38 = 0;
  FUN_141471170(&DAT_14c99e560,L"au.ExtraAudioMixerDeviceLogging",&DAT_14c99e570,
                L"Enables extra logging for audio mixer device running \n0: no logging, 1: logging every 500 callbacks \n"
               );
  atexit(FUN_142af6c9f);
  DAT_14c99e574 = 0;
  DAT_14c99e578 = 0;
  local_28 = 0x800000014a137cb4;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629650e(&local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af80fc FUN_142af80fc body=55 status=ok
// SIG undefined FUN_142af80fc(void)

void FUN_142af80fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e648 == 0) {
    uVar1 = FUN_14132552c();
    DAT_14c99e648 =
         FUN_14171c317(FUN_14629682d,uVar1,L"ESoundWaveCloudStreamingPlatformProjectEnableType");
  }
  return;
}



// FUNCTION 142af8133 FUN_142af8133 body=55 status=ok
// SIG undefined FUN_142af8133(void)

void FUN_142af8133(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e678 == 0) {
    uVar1 = FUN_14132552c();
    DAT_14c99e678 = FUN_14171c317(FUN_1462968b7,uVar1,L"ESoundWaveCloudStreamingPlatformEnableType")
    ;
  }
  return;
}



// FUNCTION 142af816a FUN_142af816a body=55 status=ok
// SIG undefined FUN_142af816a(void)

void FUN_142af816a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e6c8 == 0) {
    uVar1 = FUN_14132552c();
    DAT_14c99e6c8 = FUN_14171c317(FUN_146296acb,uVar1,L"EAudioParameterType");
  }
  return;
}



// FUNCTION 142af81b2 FUN_142af81b2 body=589 status=ok
// SIG undefined FUN_142af81b2(void)

undefined ** FUN_142af81b2(longlong *param_1)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145cbb262(&local_40);
  if (*param_1 == 0 || *param_1 == local_40) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    FUN_145a31ff8(&local_58);
    FUN_147043f60(&DAT_14c8337f0,&local_50,local_58);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
    lVar1 = local_50;
    if ((longlong)local_48 != 0) {
      lVar3 = 0;
      do {
        ppuVar2 = *(undefined ***)(lVar1 + lVar3);
        if ((ppuVar2 != (undefined **)0x0) && (*(char *)(ppuVar2 + 1) == '\x01')) {
          (**(code **)(*ppuVar2 + 8))(ppuVar2,&local_60);
          if (*param_1 == local_60) goto LAB_142af8322;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)local_48 * 8 != lVar3);
    }
    FUN_147043fea();
    ppuVar2 = &PTR_PTR_14c75f5b0;
LAB_142af8322:
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return ppuVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af84da FUN_142af84da body=112 status=ok
// SIG undefined FUN_142af84da(void)

void FUN_142af84da(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  plVar2 = *(longlong **)(param_1 + 0x10);
  local_24 = (**(code **)(*plVar2 + 0x18))(plVar2);
  cVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1,&local_24,uVar1);
  if (cVar3 == '\0') {
    FUN_147038a24(plVar2 + 10);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af855a FUN_142af855a body=166 status=ok
// SIG undefined FUN_142af855a(void)

ulonglong FUN_142af855a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *param_2;
  param_1 = (longlong *)*param_1;
  while( true ) {
    iVar4 = (int)param_1[4];
    uVar1 = *(uint *)((longlong)param_1 + 0x24);
    uVar6 = uVar1 - iVar4;
    if ((int)uVar1 < iVar4) {
      uVar6 = (uVar1 - iVar4) + (int)param_1[3];
      uVar1 = uVar6;
    }
    uVar5 = (ulonglong)uVar1;
    if ((int)uVar6 < 1) break;
    iVar2 = (int)param_1[4];
    local_28 = *(undefined8 **)(param_1[2] + (longlong)iVar2 * 8);
    *(undefined8 *)(param_1[2] + (longlong)iVar2 * 8) = 0;
    uVar5 = (longlong)(iVar2 + 1) / (longlong)(int)param_1[3] & 0xffffffff;
    LOCK();
    iVar4 = (int)param_1[4];
    *(int *)(param_1 + 4) = (iVar2 + 1) % (int)param_1[3];
    UNLOCK();
    if (local_28 == (undefined8 *)0x0) break;
    (**(code **)(*param_1 + 0x18))(param_1,&local_28,uVar3);
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48,iVar4);
}



// FUNCTION 142af8601 FUN_142af8601 body=759 status=ok
// SIG undefined FUN_142af8601(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af8601(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined4 local_54;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a138430,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a1391a0,4,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a139590,1,0);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14a139990;
  local_78 = 2;
  FUN_14282b410(L"/Script/AudioExtensions",0,0,&PTR_FUN_14a1399d0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AudioExtensions",0,0,&PTR_FUN_14a139ae0);
  local_50 = (char *)0x800000014a139b08;
  local_54 = 0xf;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_146296a0a(&local_50);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a13a280;
  local_78 = 1;
  FUN_14282b410(L"/Script/AudioExtensions",0,0,&PTR_FUN_14a13a2a0);
  FUN_140056680(&DAT_14c99e6f0,&DAT_149e0635c);
  atexit((_func_5014 *)&LAB_142af81a1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a13b390,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a13ba40,2,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a13be60,1,0);
  DAT_14c99e808 = 0;
  DAT_14c99e810 = 0;
  DAT_14c99e7e8 = 0;
  _DAT_14c99e7f0 = 0;
  _DAT_14c99e814 = 0xffffffff00000080;
  DAT_14c99e81c = 0;
  DAT_14c99e828 = 0;
  DAT_14c99e830 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c99e838);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c99e838,4000);
  atexit((_func_5014 *)&LAB_142af8400);
  DAT_14c99e948 = 0;
  atexit((_func_5014 *)&LAB_142af847a);
  local_50 = "ParameterTransmitter";
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c99e950 = (ulonglong)uVar1;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a13c240,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a13ccd0,3,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioExtensions",&PTR_FUN_14a13d4e0,2,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af88fc FUN_142af88fc body=55 status=ok
// SIG undefined FUN_142af88fc(void)

void FUN_142af88fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99eb40 == 0) {
    uVar1 = FUN_140cd1756();
    DAT_14c99eb40 = FUN_14171c317(FUN_1462974d9,uVar1,L"FTypedElementAlertColumnType");
  }
  return;
}



// FUNCTION 142af8933 FUN_142af8933 body=55 status=ok
// SIG undefined FUN_142af8933(void)

void FUN_142af8933(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99f0c8 == 0) {
    uVar1 = FUN_140cd1756();
    DAT_14c99f0c8 = FUN_14171c317(FUN_1462993c1,uVar1,L"ESCCModification");
  }
  return;
}



// FUNCTION 142af8c88 FUN_142af8c88 body=803 status=ok
// SIG undefined FUN_142af8c88(void)

void FUN_142af8c88(void)

{
  FUN_1446f470e(&DAT_14c99eb24,L"IsEditable",1);
  FUN_1446f470e(&DAT_14c99eb2c,L"IsConst",1);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a13e6b0,3,&PTR_FUN_14a13e690,1);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a13e820,2,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a13ee60,9,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",&PTR_FUN_14a13f360,1,0,0,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",&PTR_FUN_14a13f9c0,1,&PTR_FUN_14a13f940,3,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a13fb00,2,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a13fbb0,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",&PTR_FUN_14a140470,1,&PTR_FUN_14a140440,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a140550,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a1406e0,2,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a140810,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a1409e0,2,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",&PTR_FUN_14a142520,1,0,0,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a1425e0,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a142920,5,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a142a60,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a142de0,5,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a142f70,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a143750,0xb,&PTR_FUN_14a143730,1);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a1439f0,1,0,0);
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a143dc0,5,0,0);
  return;
}



// FUNCTION 142af8fac FUN_142af8fac body=139 status=ok
// SIG undefined FUN_142af8fac(void)

void FUN_142af8fac(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  lVar3 = 0x30;
  do {
    lVar2 = *(longlong *)(param_1 + lVar3);
    if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x20) != 0)) {
      lVar1 = (longlong)*(int *)(lVar2 + 0x20) << 4;
      lVar2 = *(longlong *)(lVar2 + 0x18) + 8;
      do {
        (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
        lVar2 = lVar2 + 0x10;
        lVar1 = lVar1 + -0x10;
      } while (lVar1 != 0);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x820);
                    /* WARNING: Could not recover jumptable at 0x000142af9030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return;
}



// FUNCTION 142af9037 FUN_142af9037 body=46 status=ok
// SIG undefined FUN_142af9037(void)

void FUN_142af9037(void)

{
  if (DAT_14c99f510 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    DAT_14c99f510 = 0;
  }
  return;
}



// FUNCTION 142af9074 FUN_142af9074 body=198 status=ok
// SIG undefined FUN_142af9074(void)

undefined8 FUN_142af9074(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  uVar1 = *(uint *)(param_1 + 0x828);
  uVar9 = (ulonglong)uVar1;
  lVar2 = *(longlong *)(param_1 + 0x820);
  uVar10 = 0;
  iVar5 = (int)((ulonglong)*param_2 >> 0x20);
  iVar3 = (int)*param_2;
  if (0 < (int)uVar1) {
    do {
      uVar6 = (int)(uVar9 >> 1) + (int)uVar10;
      iVar7 = *(int *)(lVar2 + (ulonglong)uVar6 * 0xc) - iVar3;
      if (iVar7 == 0) {
        iVar7 = *(int *)(lVar2 + 4 + (ulonglong)uVar6 * 0xc) - iVar5;
      }
      uVar11 = (uint)uVar9;
      if (iVar7 < 0) {
        uVar10 = (ulonglong)(uVar6 + (uVar11 & 1));
      }
      uVar9 = uVar9 >> 1;
    } while (1 < uVar11);
  }
  if ((int)uVar10 < (int)uVar1) {
    iVar3 = iVar3 - *(int *)(lVar2 + uVar10 * 0xc);
    if (iVar3 == 0) {
      iVar3 = iVar5 - *(int *)(lVar2 + 4 + uVar10 * 0xc);
    }
    if ((-1 < iVar3) && (pbVar4 = (byte *)(lVar2 + uVar10 * 0xc + 8), pbVar4 != (byte *)0x0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x28 + (ulonglong)*pbVar4 * 8);
      goto LAB_142af911f;
    }
  }
  uVar8 = 0;
LAB_142af911f:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
  return uVar8;
}



// FUNCTION 142af913a FUN_142af913a body=69 status=ok
// SIG undefined FUN_142af913a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af913a(void)

{
  _DAT_14c99f610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af917c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99f618,1);
  return;
}



// FUNCTION 142af917f FUN_142af917f body=69 status=ok
// SIG undefined FUN_142af917f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142af917f(void)

{
  _DAT_14c99f620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142af91c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99f628,1);
  return;
}



// FUNCTION 142af934c FUN_142af934c body=44 status=ok
// SIG undefined FUN_142af934c(void)

void FUN_142af934c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  (*(code *)(&PTR_FUN_14a14f670)[(byte)puVar1[8]])(puVar1);
  *puVar1 = *param_2;
  puVar1[8] = 1;
  return;
}



// FUNCTION 142af9378 FUN_142af9378 body=46 status=ok
// SIG undefined FUN_142af9378(void)

void FUN_142af9378(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  (*(code *)(&PTR_FUN_14a14f670)[*(byte *)(puVar1 + 1)])(puVar1);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = 2;
  return;
}



// FUNCTION 142af93a6 FUN_142af93a6 body=46 status=ok
// SIG undefined FUN_142af93a6(void)

void FUN_142af93a6(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  (*(code *)(&PTR_FUN_14a14f670)[*(byte *)(puVar1 + 1)])(puVar1);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = 3;
  return;
}



// FUNCTION 142af93d4 FUN_142af93d4 body=48 status=ok
// SIG undefined FUN_142af93d4(void)

void FUN_142af93d4(undefined8 *param_1,undefined8 *param_2)

{
  param_1 = (undefined8 *)*param_1;
  (*(code *)(&PTR_FUN_14a14f670)[*(byte *)(param_1 + 1)])(param_1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 4;
  return;
}



// FUNCTION 142af9404 FUN_142af9404 body=44 status=ok
// SIG undefined FUN_142af9404(void)

void FUN_142af9404(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  (*(code *)(&PTR_FUN_14a14f670)[*(byte *)(puVar1 + 1)])(puVar1);
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 5;
  return;
}



// FUNCTION 142af9430 FUN_142af9430 body=116 status=ok
// SIG undefined FUN_142af9430(void)

undefined8 FUN_142af9430(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((longlong *)*param_2 != (longlong *)0x0) &&
     (plVar1 = *(longlong **)*param_2, plVar1 != (longlong *)0x0)) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
    uVar2 = *(undefined8 *)*param_1;
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
    local_20 = plVar1;
    FUN_14704fd42(uVar2,&local_20);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + -1;
      UNLOCK();
    }
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + -1;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af94a6 FUN_142af94a6 body=275 status=ok
// SIG undefined FUN_142af94a6(void)

undefined8 FUN_142af94a6(undefined8 *param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar6 = &DAT_14c99f64c;
  if (*param_2 != 0) {
    puVar6 = (uint *)(*param_2 + 8);
  }
  uVar3 = *(undefined8 *)*param_1;
  uVar2 = *puVar6;
  if (uVar2 != DAT_14c99f64c) {
    lVar4 = *(longlong *)param_1[1];
    SRWLock = (PSRWLOCK)(lVar4 + 0x28);
    AcquireSRWLockShared(SRWLock);
    if (uVar2 < 0x1000000) {
      ReleaseSRWLockShared(SRWLock);
    }
    else {
      plVar5 = *(longlong **)(lVar4 + 0x30 + (ulonglong)((uVar2 >> 0x18) - 1) * 8);
      ReleaseSRWLockShared(SRWLock);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_38,*puVar6 & 0xffffff);
        local_40 = local_38;
        if ((local_38 != 0) && (*(int *)(local_38 + 8) == 0)) {
          FUN_1400020a8();
        }
        goto LAB_142af953f;
      }
    }
    FUN_1415b7ec4(L"Element type ID has not been registered to this registry!",2,0);
  }
  local_40 = 0;
LAB_142af953f:
  FUN_147050a0c(uVar3,&local_40);
  if (local_40 != 0) {
    piVar1 = (int *)(local_40 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af965a FUN_142af965a body=156 status=ok
// SIG undefined FUN_142af965a(void)

undefined8 FUN_142af965a(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar4 = &DAT_14c99f64c;
  if (*param_2 != 0) {
    puVar4 = (undefined4 *)(*param_2 + 8);
  }
  local_21 = (undefined1)((uint)*puVar4 >> 0x18);
  plVar5 = (longlong *)FUN_1470594f6(*param_1);
  iVar1 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
    FUN_1470578aa(plVar5,iVar1);
  }
  lVar2 = *plVar5;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = 0;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    *(longlong *)(lVar2 + (longlong)iVar1 * 8) = lVar3;
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af96f8 FUN_142af96f8 body=29 status=ok
// SIG undefined FUN_142af96f8(void)

undefined8 FUN_142af96f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142af972a FUN_142af972a body=85 status=ok
// SIG undefined FUN_142af972a(void)

void FUN_142af972a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a14f9c0;
  return;
}



// FUNCTION 142af9780 FUN_142af9780 body=85 status=ok
// SIG undefined FUN_142af9780(void)

void FUN_142af9780(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a14f9c0;
  return;
}



// FUNCTION 142af97d6 FUN_142af97d6 body=118 status=ok
// SIG undefined FUN_142af97d6(void)

void FUN_142af97d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a14f9c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142af983d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142af9854 FUN_142af9854 body=19 status=ok
// SIG undefined FUN_142af9854(void)

undefined1 FUN_142af9854(undefined8 param_1,undefined8 param_2)

{
  FUN_142af9868(param_2);
  return 1;
}



// FUNCTION 142af9868 FUN_142af9868 body=144 status=ok
// SIG undefined FUN_142af9868(void)

void FUN_142af9868(longlong *param_1)

{
  int iVar1;
  wchar_t *_Str;
  undefined1 auStack_48 [32];
  longlong *local_28;
  code *local_20;
  longlong **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    local_28 = (longlong *)FUN_14704ed5b(DAT_14c99f498);
    local_18 = &local_28;
    local_20 = FUN_142af98fa;
    (**(code **)(*local_28 + 0x60))(local_28,DAT_14c75f5c8,iVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af98fa FUN_142af98fa body=50 status=ok
// SIG undefined FUN_142af98fa(void)

void FUN_142af98fa(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = *param_2;
  plVar2 = (longlong *)*param_1;
  uVar3 = FUN_146297cfa();
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0xd0))(plVar2,uVar1,uVar3);
  *puVar4 = 0;
  return;
}



// FUNCTION 142af992c FUN_142af992c body=29 status=ok
// SIG undefined FUN_142af992c(void)

undefined8 FUN_142af992c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142af995e FUN_142af995e body=85 status=ok
// SIG undefined FUN_142af995e(void)

void FUN_142af995e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a14fa30;
  return;
}



// FUNCTION 142af99b4 FUN_142af99b4 body=85 status=ok
// SIG undefined FUN_142af99b4(void)

void FUN_142af99b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a14fa30;
  return;
}



// FUNCTION 142af9a0a FUN_142af9a0a body=118 status=ok
// SIG undefined FUN_142af9a0a(void)

void FUN_142af9a0a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a14fa30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142af9a71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142af9a86 FUN_142af9a86 body=16 status=ok
// SIG undefined FUN_142af9a86(void)

undefined1 FUN_142af9a86(void)

{
  FUN_142af9a96();
  return 1;
}



// FUNCTION 142af9a96 FUN_142af9a96 body=749 status=ok
// SIG undefined FUN_142af9a96(void)

void FUN_142af9a96(void)

{
  code **ppcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_aa8 [40];
  undefined1 local_a80 [8];
  code *local_a78;
  code **local_a70;
  code **local_a68;
  undefined8 uStack_a60;
  code *local_a58 [2];
  undefined ***local_a48;
  undefined8 local_a40;
  undefined **local_a38;
  code ***local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a08;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined4 local_9b8;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_aa8;
  plVar2 = (longlong *)FUN_14704ed5b(DAT_14c99f498);
  local_a48 = (undefined ***)0x0;
  local_a40 = 0x200000000;
  local_a28 = 0;
  local_a20 = 0x200000000;
  local_a18 = 0;
  local_a08 = 0;
  local_9d8 = 0;
  uStack_9d0 = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9b8 = 0xff0300;
  local_968 = 0;
  local_960 = 0x800000000;
  local_950 = 0;
  local_948 = 0x800000000;
  local_380 = 0;
  local_378 = 0x800000000;
  local_360 = 0;
  local_358 = 0x800000000;
  local_310 = 0;
  local_308 = 0x800000000;
  local_280 = 0;
  local_278 = 0x800000000;
  local_268 = 0;
  local_260 = 0x800000000;
  local_238 = 0;
  local_230 = 0x800000000;
  local_218 = 0;
  local_210 = 0x800000000;
  local_188 = 0;
  local_180 = 0x800000000;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 2;
  local_140 = 0;
  local_138 = 0x200000000;
  local_120 = 0;
  local_118 = 0x200000000;
  local_110 = 0;
  uStack_108 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_100 = &PTR_FUN_14a14f6a0;
  local_58 = 1;
  local_a68 = local_a58;
  uVar3 = FUN_146297cfa();
  FUN_14705141a(&local_a68,uVar3);
  uVar3 = FUN_1470514de(&local_a68);
  uVar3 = (**(code **)(*plVar2 + 0x118))(plVar2,uVar3);
  FUN_147056720(local_a58);
  local_a68 = (code **)0x0;
  uStack_a60 = 0;
  local_a48 = (undefined ***)0x0;
  local_a38 = &PTR_LAB_14a14faa0;
  local_a58[0] = FUN_142af9d84;
  local_a78 = FUN_147059ea2;
  local_a70 = local_a58;
  local_a30 = &local_a68;
  (**(code **)(*plVar2 + 0x140))(plVar2,local_a80,uVar3);
  if (local_a58[0] != (code *)0x0) {
    pppuVar4 = local_a48;
    if (local_a48 == (undefined ***)0x0) {
      pppuVar4 = &local_a38;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  ppcVar1 = local_a68;
  lVar5 = (longlong)(int)uStack_a60;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      (**(code **)(*plVar2 + 0x68))(plVar2,*(undefined8 *)((longlong)ppcVar1 + lVar6));
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  (**(code **)(*plVar2 + 0x120))(plVar2,uVar3);
  if (local_a68 != (code **)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_aa8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af9d84 FUN_142af9d84 body=112 status=ok
// SIG undefined FUN_142af9d84(void)

void FUN_142af9d84(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_3 + 0x10))(param_3,local_38);
  lVar2 = *param_1;
  uVar1 = *(undefined4 *)(lVar2 + 8);
  uVar3 = (**(code **)(*param_3 + 8))(param_3);
  FUN_14705138a(lVar2,local_38[0],uVar3,uVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af9e14 FUN_142af9e14 body=12 status=ok
// SIG undefined FUN_142af9e14(void)

void FUN_142af9e14(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142af9e1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142af9e20 FUN_142af9e20 body=29 status=ok
// SIG undefined FUN_142af9e20(void)

undefined8 FUN_142af9e20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142af9e3e FUN_142af9e3e body=308 status=ok
// SIG undefined FUN_142af9e3e(void)

void FUN_142af9e3e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2 + 0x100;
  if (*(longlong *)(param_2 + 0x108) != 0) {
    local_78 = *(longlong *)(param_2 + 0x108);
  }
  lVar8 = param_2 + 0xb0;
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    lVar8 = *(longlong *)(param_2 + 0xf0);
  }
  (**(code **)(*param_3 + 0x30))(param_3,1,&local_58,lVar8);
  puVar2 = local_58;
  (**(code **)(*param_3 + 0x10))(param_3,local_70);
  (**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_3 + 8))(param_3);
  uVar4 = FUN_146297cfa();
  uVar3 = (**(code **)(*param_3 + 8))(param_3);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      lVar8 = puVar2[uVar7];
      uVar1 = *(undefined8 *)(local_70[0] + uVar7 * 8);
      uVar5 = FUN_146297d8c();
      plVar6 = (longlong *)(**(code **)(*param_3 + 0xb0))(param_3,uVar1,uVar5,&LAB_147059fa0);
      *plVar6 = lVar8 + 1;
      local_58 = &local_60;
      local_50 = 1;
      local_60 = uVar4;
      (**(code **)(*param_3 + 200))(param_3,*(undefined8 *)(local_70[0] + uVar7 * 8),&local_58);
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142af9f9c FUN_142af9f9c body=29 status=ok
// SIG undefined FUN_142af9f9c(void)

undefined8 FUN_142af9f9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142af9fba FUN_142af9fba body=308 status=ok
// SIG undefined FUN_142af9fba(void)

void FUN_142af9fba(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2 + 0x100;
  if (*(longlong *)(param_2 + 0x108) != 0) {
    local_78 = *(longlong *)(param_2 + 0x108);
  }
  lVar8 = param_2 + 0xb0;
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    lVar8 = *(longlong *)(param_2 + 0xf0);
  }
  (**(code **)(*param_3 + 0x30))(param_3,1,&local_58,lVar8);
  puVar2 = local_58;
  (**(code **)(*param_3 + 0x10))(param_3,local_70);
  (**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_3 + 8))(param_3);
  uVar4 = FUN_146297d8c();
  uVar3 = (**(code **)(*param_3 + 8))(param_3);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      lVar8 = puVar2[uVar7];
      uVar1 = *(undefined8 *)(local_70[0] + uVar7 * 8);
      uVar5 = FUN_146297e1e();
      plVar6 = (longlong *)(**(code **)(*param_3 + 0xb0))(param_3,uVar1,uVar5,&LAB_147059fa8);
      *plVar6 = lVar8 + 1;
      local_58 = &local_60;
      local_50 = 1;
      local_60 = uVar4;
      (**(code **)(*param_3 + 200))(param_3,*(undefined8 *)(local_70[0] + uVar7 * 8),&local_58);
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afa118 FUN_142afa118 body=29 status=ok
// SIG undefined FUN_142afa118(void)

undefined8 FUN_142afa118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142afa136 FUN_142afa136 body=308 status=ok
// SIG undefined FUN_142afa136(void)

void FUN_142afa136(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2 + 0x100;
  if (*(longlong *)(param_2 + 0x108) != 0) {
    local_78 = *(longlong *)(param_2 + 0x108);
  }
  lVar8 = param_2 + 0xb0;
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    lVar8 = *(longlong *)(param_2 + 0xf0);
  }
  (**(code **)(*param_3 + 0x30))(param_3,1,&local_58,lVar8);
  puVar2 = local_58;
  (**(code **)(*param_3 + 0x10))(param_3,local_70);
  (**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_3 + 8))(param_3);
  uVar4 = FUN_146297e1e();
  uVar3 = (**(code **)(*param_3 + 8))(param_3);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    do {
      lVar8 = puVar2[uVar7];
      uVar1 = *(undefined8 *)(local_70[0] + uVar7 * 8);
      uVar5 = FUN_146297cfa();
      plVar6 = (longlong *)(**(code **)(*param_3 + 0xb0))(param_3,uVar1,uVar5,&LAB_147059fb0);
      *plVar6 = lVar8 + 1;
      local_58 = &local_60;
      local_50 = 1;
      local_60 = uVar4;
      (**(code **)(*param_3 + 200))(param_3,*(undefined8 *)(local_70[0] + uVar7 * 8),&local_58);
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afa294 FUN_142afa294 body=29 status=ok
// SIG undefined FUN_142afa294(void)

undefined8 FUN_142afa294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142afa2b1 FUN_142afa2b1 body=1049 status=ok
// SIG undefined FUN_142afa2b1(void)

void FUN_142afa2b1(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *local_58;
  int local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 0x11;
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a149810);
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a149bb0);
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a149d20);
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a149de0);
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a14a290);
  uStack_70 = 0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/TypedElementFramework",0,0,&PTR_FUN_14a14a580);
  FUN_1446f470e(&DAT_14c99f498,L"EditorDataStorage",1);
  FUN_1446f470e(&DAT_14c99f4a0,L"EditorDataStorageCompatibility",1);
  FUN_1446f470e(&DAT_14c99f4a8,L"EditorDataStorageUi",1);
  FUN_1446f470e(&DAT_14c99f4b0,L"IsEditable",1);
  FUN_1446f470e(&DAT_14c99f4b8,L"IsConst",1);
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/TypedElementFramework",&PTR_FUN_14a14a9a0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/TypedElementFramework",&PTR_FUN_14a14b1c0,1,0);
  DAT_14c99f64c = 0;
  local_58 = (undefined8 *)0x800000014a14b29c;
  local_44 = 0x15;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14629b5ba(&local_58);
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/TypedElementFramework",&PTR_FUN_14a14cbf0,6,0);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_149e001f0;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14a14f9c0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14c99f610,L"Teds.Debug.PerformanceTest.AddRows",
                L"Teds.Debug.PerformanceTest.AddRows <NumRows>;  NumRows = number of rows to add",
                &local_58);
  if (local_50 == 0) {
LAB_142afa57c:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_142afa57c;
  }
  atexit(FUN_142af913a);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_149e001f0;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14a14fa30;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14c99f620,L"Teds.Debug.PerformanceTest.RemoveAllRows",
                L"Removes all added rows for the performance test",&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142afa660;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142afa660:
  atexit(FUN_142af917f);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afa6cc FUN_142afa6cc body=55 status=ok
// SIG undefined FUN_142afa6cc(void)

void FUN_142afa6cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99f880 == 0) {
    uVar1 = FUN_1412da464();
    DAT_14c99f880 = FUN_14171c317(FUN_14629c505,uVar1,L"ETypedElementSelectionMethod");
  }
  return;
}



// FUNCTION 142afa703 FUN_142afa703 body=55 status=ok
// SIG undefined FUN_142afa703(void)

void FUN_142afa703(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99f898 == 0) {
    uVar1 = FUN_1412da464();
    DAT_14c99f898 = FUN_14171c317(FUN_14629cc28,uVar1,L"ETypedElementChildInclusionMethod");
  }
  return;
}



// FUNCTION 142afa792 FUN_142afa792 body=107 status=ok
// SIG undefined FUN_142afa792(void)

ulonglong FUN_142afa792(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14705b06a(param_2,param_1[1]);
  bVar3 = (byte)param_2;
  uVar2 = 0;
  if (lVar1 != 0) {
    local_20 = lVar1;
    uVar2 = (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
    bVar3 = (byte)uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),lVar1 == 0 | bVar3) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afa7fe FUN_142afa7fe body=55 status=ok
// SIG undefined FUN_142afa7fe(void)

undefined8 FUN_142afa7fe(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142afa836 FUN_142afa836 body=83 status=ok
// SIG undefined FUN_142afa836(void)

undefined8 FUN_142afa836(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)param_1[2];
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  bVar2 = FUN_14705e816(*param_1);
  *(byte *)param_1[1] = *(byte *)param_1[1] | bVar2;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afa88a FUN_142afa88a body=83 status=ok
// SIG undefined FUN_142afa88a(void)

undefined8 FUN_142afa88a(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)param_1[2];
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  bVar2 = FUN_14705ed88(*param_1);
  *(byte *)param_1[1] = *(byte *)param_1[1] | bVar2;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afa8de FUN_142afa8de body=335 status=ok
// SIG undefined FUN_142afa8de(void)

undefined8 FUN_142afa8de(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_2;
  puVar4 = &DAT_14c99f64c;
  if (local_40 != 0) {
    puVar4 = (undefined4 *)(local_40 + 8);
  }
  local_20 = *(longlong *)(*param_1 + 0x30 + (ulonglong)*(byte *)((longlong)puVar4 + 3) * 8);
  if (local_20 == 0) {
    local_20 = *(longlong *)(*param_1 + 0x30);
  }
  local_30 = param_1[1];
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_40 = *param_2;
  }
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
    UNLOCK();
  }
  local_38 = param_2[1];
  local_28 = plVar3;
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
  local_50 = param_1[4];
  local_48 = param_1[5];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_14706430e(&local_40,param_1[3],&local_50);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + -1;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 142afaa2e FUN_142afaa2e body=181 status=ok
// SIG undefined FUN_142afaa2e(void)

undefined8 FUN_142afaa2e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)param_2[1] + 0x88))((longlong *)param_2[1],&local_28);
  if (local_28 != (longlong *)0x0) {
    puVar3 = &DAT_14c99f64c;
    if (*param_2 != 0) {
      puVar3 = (undefined4 *)(*param_2 + 8);
    }
    *(undefined1 *)(local_28 + 1) = *(undefined1 *)((longlong)puVar3 + 3);
    (**(code **)(*local_28 + 0x18))(local_28,param_2);
    if (local_28 != (longlong *)0x0) {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x10);
      *(uint *)(lVar2 + 0x10) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x14) < iVar1 + 1U) {
        FUN_147062e7c((longlong *)(lVar2 + 8),iVar1);
      }
      *(longlong **)(*(longlong *)(lVar2 + 8) + (longlong)iVar1 * 8) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afaae4 FUN_142afaae4 body=449 status=ok
// SIG undefined FUN_142afaae4(void)

void FUN_142afaae4(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TypedElementRuntime",&PTR_FUN_14a150730,1,0);
  FUN_1446f470e(&DAT_14c99f6a8,L"IsEditable",1);
  FUN_1446f470e(&DAT_14c99f6b0,L"IsConst",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/TypedElementRuntime",&PTR_FUN_14a152a50,1,&PTR_FUN_14a152a00);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/TypedElementRuntime",&PTR_FUN_14a1531a0,1,&PTR_FUN_14a153170);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TypedElementRuntime",&PTR_FUN_14a153820,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TypedElementRuntime",&PTR_FUN_14a153da0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/TypedElementRuntime",&PTR_FUN_14a154490,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14a155750;
  local_68 = 2;
  FUN_14282b410(L"/Script/TypedElementRuntime",&PTR_FUN_14a1557e0,1,&PTR_FUN_14a155790);
  local_48 = 0x800000014a1558a8;
  local_34 = 0x13;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14629cee4(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afaca8 FUN_142afaca8 body=109 status=ok
// SIG undefined FUN_142afaca8(void)

void FUN_142afaca8(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a156566;
  local_14 = 0x10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c99f92c,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afad18 FUN_142afad18 body=57 status=ok
// SIG undefined FUN_142afad18(void)

void FUN_142afad18(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99f958 == 0) {
    uVar1 = FUN_145c5ac3f();
    DAT_14c99f958 = FUN_14171c317(FUN_14629d208,uVar1,L"ESoundwaveSampleRateSettings");
  }
  return;
}



// FUNCTION 142afad51 FUN_142afad51 body=349 status=ok
// SIG undefined FUN_142afad51(void)

bool FUN_142afad51(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  double local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != 0) {
    bVar4 = false;
    if ((*(float *)(param_1 + 8) <= 0.0) || (*(float *)(param_1 + 0xc) <= 0.0)) goto LAB_142afade1;
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    fVar5 = (float)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) / iVar3) *
            (*(float *)(param_1 + 0xc) / *(float *)(param_1 + 8));
    if (-(((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1) * iVar3) <= *(int *)(*param_2 + 8)) {
      local_2c = 0;
      lVar2 = src_new(0,iVar1);
      bVar4 = false;
      if ((lVar2 != 0) && (bVar4 = false, local_2c == 0)) {
        local_60 = **(undefined8 **)(param_1 + 0x10);
        local_58 = *(undefined8 *)*param_2;
        local_50 = *(int *)(*(undefined8 **)(param_1 + 0x10) + 1) / *(int *)(param_1 + 4);
        local_4c = *(int *)((undefined8 *)*param_2 + 1) / *(int *)(param_1 + 4);
        local_38 = (double)(*(float *)(param_1 + 0xc) / *(float *)(param_1 + 8));
        local_40 = 1;
        local_2c = src_process(lVar2,&local_60);
        bVar4 = local_2c == 0;
        if (bVar4) {
          *(undefined4 *)((longlong)param_2 + 0xc) = local_48;
          *(undefined4 *)(param_2 + 2) = local_44;
          src_delete(lVar2);
        }
      }
      goto LAB_142afade1;
    }
  }
  bVar4 = false;
LAB_142afade1:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afaeb0 FUN_142afaeb0 body=263 status=ok
// SIG undefined FUN_142afaeb0(void)

void FUN_142afaeb0(float *param_1,undefined1 param_2,float param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  double *pdVar3;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 == (undefined8 *)0x0) {
LAB_142afaf8d:
    pdVar3 = (double *)src_new(param_2,param_4,local_44);
    *(double **)(param_1 + 2) = pdVar3;
    if (pdVar3 == (double *)0x0) goto LAB_142afaf63;
  }
  else {
    iVar2 = -7;
    if ((puVar1[5] != 0) && (puVar1[6] != 0)) {
      iVar2 = *(int *)((longlong)puVar1 + 0x14);
    }
    if (iVar2 == param_4) {
      if ((code *)puVar1[7] != (code *)0x0) {
        (*(code *)puVar1[7])(puVar1);
      }
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      pdVar3 = *(double **)(param_1 + 2);
    }
    else {
      pdVar3 = (double *)src_delete(puVar1);
      *(double **)(param_1 + 2) = pdVar3;
    }
    if (pdVar3 == (double *)0x0) goto LAB_142afaf8d;
  }
  if ((((pdVar3[5] != 0.0) && (pdVar3[6] != 0.0)) && (0.00390625 <= param_3)) && (param_3 <= 256.0))
  {
    *pdVar3 = (double)param_3;
  }
LAB_142afaf63:
  *param_1 = param_3;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142afafb8 FUN_142afafb8 body=92 status=ok
// SIG undefined FUN_142afafb8(void)

undefined8
FUN_142afafb8(float *param_1,undefined8 param_2,float param_3,byte param_4,undefined8 param_5,
             float param_6,float *param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    *(undefined8 *)(param_1 + 4) = param_2;
    param_1[8] = param_3;
    *(undefined8 *)(param_1 + 6) = param_5;
    param_1[9] = param_6;
    *(double *)(param_1 + 0xe) = (double)*param_1;
    param_1[0xc] = (float)(uint)param_4;
    uVar1 = src_process(*(longlong *)(param_1 + 2),param_1 + 4);
    if ((int)uVar1 == 0) {
      *param_7 = param_1[0xb];
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 142afb022 FUN_142afb022 body=153 status=ok
// SIG undefined FUN_142afb022(void)

void FUN_142afb022(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 1;
  local_40 = &PTR_FUN_14a1568e0;
  local_48 = 1;
  FUN_14282b410(L"/Script/AudioPlatformConfiguration",0,0,&PTR_FUN_14a156900);
  local_28 = 0x800000014a1569a6;
  local_14 = 0x1a;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629d292(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afb0bc FUN_142afb0bc body=55 status=ok
// SIG undefined FUN_142afb0bc(void)

void FUN_142afb0bc(void)

{
  FUN_14282b410(L"/Script/AudioLinkCore",&PTR_FUN_14a1570c0,1,0,0,0,0);
  return;
}



// FUNCTION 142afb0f4 FUN_142afb0f4 body=252 status=ok
// SIG undefined FUN_142afb0f4(void)

undefined8 FUN_142afb0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_3;
  cVar1 = FUN_140988638(&local_60,L"Icmp",1);
  if (cVar1 != '\0') {
    cVar1 = FUN_140988638(&local_60,L"Ping",1);
    if (cVar1 != '\0') {
      local_78 = 0;
      uStack_70 = 0;
      FUN_140ffc744(&local_60,&local_78,1,0);
      if ((int)uStack_70 < 2) {
        FUN_14020fad6(&local_78,L"127.0.0.1");
      }
      local_48 = 0;
      local_38 = &PTR_LAB_14a157540;
      local_30 = FUN_142afd6aa;
      local_58 = FUN_147068e42;
      FUN_147065308(&local_78,0x3f800000);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      uVar2 = 1;
      goto LAB_142afb143;
    }
  }
  uVar2 = 0;
LAB_142afb143:
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afb1f2 FUN_142afb1f2 body=6534 status=ok
// SIG undefined FUN_142afb1f2(void)

undefined8 FUN_142afb1f2(longlong param_1)

{
  LARGE_INTEGER *pLVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  LARGE_INTEGER LVar5;
  bool bVar6;
  DWORD DVar7;
  undefined1 uVar8;
  char cVar9;
  undefined2 uVar10;
  ushort uVar11;
  uint *puVar12;
  longlong *plVar13;
  uint *puVar14;
  byte bVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  LARGE_INTEGER LVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  undefined2 *puVar27;
  DWORD *pDVar28;
  undefined8 uVar29;
  longlong *plVar30;
  void *pvVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  ushort *puVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  longlong lVar43;
  float fVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  undefined4 local_2a0;
  uint local_290;
  int local_28c;
  longlong local_288;
  uint local_27c;
  ulonglong local_278;
  longlong *local_270;
  longlong *local_268;
  uint *local_260;
  uint local_254;
  int local_250;
  int local_24c;
  LARGE_INTEGER *local_248;
  ulonglong local_240;
  LARGE_INTEGER local_238;
  longlong *local_230;
  longlong *local_228;
  uint *local_220;
  longlong *local_218;
  longlong local_210;
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [72];
  longlong *local_1a0;
  longlong *local_198;
  int local_190;
  undefined4 uStack_18c;
  int local_188;
  LARGE_INTEGER local_180;
  int local_178;
  undefined4 local_174;
  uint local_170;
  ushort local_168 [4];
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  DWORD local_148;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  LARGE_INTEGER local_128;
  LARGE_INTEGER LStack_120;
  undefined8 uStack_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar29 = 2;
  if ((((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x30) != 0)) &&
      (cVar9 = FUN_147065a84(param_1,param_1 + 0x28), cVar9 != '\0')) &&
     ((*(char *)(param_1 + 0x14) == '\0' &&
      (uVar29 = 2, *(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c))))) {
    local_230 = *(longlong **)(param_1 + 0x20);
    local_260 = (uint *)(param_1 + 0x48);
    uVar41 = *(uint *)(param_1 + 0x60);
    local_278 = 0;
    local_240 = 1;
    uVar33 = 0;
    local_28c = 0;
    if (uVar41 != 0) {
      puVar12 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar12 = local_260;
      }
      uVar32 = *puVar12;
      if (uVar32 == 0) {
        iVar16 = uVar41 + 0x1e;
        if (-1 < (int)(uVar41 - 1)) {
          iVar16 = uVar41 - 1;
        }
        local_278 = 0;
        uVar42 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar42 = local_278;
        }
        local_28c = (int)uVar42 * 0x20 + 0x20;
        iVar16 = 0;
        do {
          if (uVar42 == local_278) {
            local_240 = 1;
            uVar33 = (ulonglong)uVar41;
            local_278 = (ulonglong)((int)uVar42 + 1);
            goto LAB_142afb430;
          }
          iVar16 = iVar16 + 0x20;
          uVar32 = puVar12[local_278 + 1];
          local_278 = local_278 + 1;
        } while (uVar32 == 0);
      }
      else {
        local_278 = 0;
        iVar16 = 0;
      }
      local_240 = (ulonglong)(-uVar32 & uVar32);
      uVar33 = local_240 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      uVar32 = (iVar16 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
      if ((int)uVar41 <= (int)uVar32) {
        uVar32 = uVar41;
      }
      uVar33 = (ulonglong)uVar32;
      local_28c = iVar16;
    }
LAB_142afb430:
    local_218 = (longlong *)(param_1 + 0x38);
    local_148 = 0;
    uStack_144 = 0;
    uStack_142 = 0;
    uStack_140 = 0;
    uStack_13a = 0;
    uStack_138 = 0;
    uStack_158 = 0;
    local_168[0] = 0;
    local_168[1] = 0;
    local_168[2] = 0;
    local_168[3] = 0;
    uStack_160 = 0;
    uStack_15a = 0;
    (**(code **)(*local_230 + 0x90))(local_230,&local_1a0);
    *(undefined8 *)(param_1 + 0xc) = 0;
    QueryPerformanceCounter(&local_128);
    local_208 = local_128;
    local_228 = (longlong *)(param_1 + 0x88);
    local_220 = (uint *)(param_1 + 0x98);
    local_210 = param_1 + 0xd8;
    iVar16 = -1;
    local_27c = 0;
    local_290 = 0xffffffff;
    local_288 = param_1;
LAB_142afb523:
    local_254 = ~(uint)local_240;
LAB_142afb531:
    local_1f8 = (longlong)(int)uVar33 * 0x98;
    local_1f0 = uVar33;
LAB_142afb550:
    local_250 = iVar16;
    iVar16 = local_250;
    if (*(char *)(param_1 + 0x14) == '\0') {
      do {
        bVar15 = 0;
        uVar41 = *(uint *)(param_1 + 0xb0);
        plVar30 = (longlong *)(ulonglong)uVar41;
        local_24c = iVar16;
        if (uVar41 == 0) {
          uVar42 = 1;
          uVar33 = 0;
          iVar16 = 0;
          uVar32 = 0;
        }
        else {
          puVar12 = *(uint **)(param_1 + 0xa8);
          if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
            puVar12 = local_220;
          }
          uVar32 = *puVar12;
          if (uVar32 == 0) {
            iVar16 = uVar41 + 0x1e;
            if (-1 < (int)(uVar41 - 1)) {
              iVar16 = uVar41 - 1;
            }
            uVar33 = 0;
            uVar42 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar42 = uVar33;
            }
            iVar16 = 0;
            do {
              if (uVar42 == uVar33) goto LAB_142afbdb9;
              iVar16 = iVar16 + 0x20;
              uVar32 = puVar12[uVar33 + 1];
              uVar33 = uVar33 + 1;
            } while (uVar32 == 0);
          }
          else {
            uVar33 = 0;
            iVar16 = 0;
          }
          uVar42 = (ulonglong)(-uVar32 & uVar32);
          uVar26 = uVar42 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          uVar32 = (iVar16 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if ((int)uVar41 <= (int)uVar32) {
            uVar32 = uVar41;
          }
        }
        if (uVar32 != uVar41) {
          uVar41 = 0xffffffff;
          local_268 = plVar30;
          do {
            bVar15 = *(byte *)(param_1 + 0x14);
            if (bVar15 != 0) goto LAB_142afbdb9;
            plVar4 = *(longlong **)(*local_228 + 8 + (longlong)(int)uVar32 * 0x18);
            if (((plVar4 != (longlong *)0x0) &&
                (cVar9 = (**(code **)(*plVar4 + 0x78))(plVar4,0,DAT_14c99f9c0), cVar9 != '\0')) &&
               (*(char *)(param_1 + 0x14) == '\0')) {
              local_128.QuadPart = local_128.QuadPart & 0xffffffff00000000;
              cVar9 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_128);
              if ((cVar9 != '\0') && (0x15 < local_128.s.LowPart)) {
                while( true ) {
                  local_168[0] = 0;
                  local_168[1] = 0;
                  local_168[2] = 0;
                  local_168[3] = 0;
                  uStack_160 = 0;
                  uStack_15a = 0;
                  uStack_158 = 0;
                  local_180.QuadPart = local_180.QuadPart & 0xffffffff00000000;
                  local_2a0 = 0;
                  local_2a8 = local_1a0;
                  cVar9 = (**(code **)(*plVar4 + 0x60))(plVar4,local_168,0x16,&local_180);
                  if (cVar9 == '\0') break;
                  QueryPerformanceCounter(&local_128);
                  uVar22 = local_168[1];
                  if (local_180.s.LowPart != 0x16) break;
                  local_238.s = local_128.s;
                  local_270 = local_1a0;
                  local_128.QuadPart = (ulonglong)local_168[2] << 0x20;
                  LStack_120.QuadPart._2_6_ = uStack_160;
                  LStack_120.s.LowPart._0_2_ = local_168[3];
                  uStack_118 = CONCAT62(uStack_158,uStack_15a);
                  uVar10 = Ordinal_15(local_168[0]);
                  local_128.s.LowPart._0_2_ = uVar10;
                  uVar10 = Ordinal_15(uVar22);
                  local_128.s.LowPart._2_2_ = uVar10;
                  FUN_1470668ba(&LStack_120);
                  uVar11 = Ordinal_15(local_128.s.HighPart._0_2_);
                  uVar22 = local_168[2];
                  local_168[2] = 0;
                  uVar32 = 0;
                  uVar34 = 0x18;
                  puVar37 = local_168;
                  do {
                    uVar3 = *puVar37;
                    puVar37 = puVar37 + 1;
                    uVar32 = uVar32 + uVar3;
                    uVar34 = uVar34 - 2;
                  } while (3 < uVar34);
                  iVar23 = (uVar32 & 0xffff) + (uVar32 >> 0x10);
                  plVar30 = local_268;
                  local_168[2] = uVar22;
                  if ((ushort)(uVar11 ^ (short)((uint)iVar23 >> 0x10) + (short)iVar23) == 0xffff) {
                    uVar10 = local_128.s.LowPart._0_2_;
                    (**(code **)(*local_270 + 0x80))(local_270,&local_190,0);
                    local_180.QuadPart = 0;
                    lVar39 = (longlong)local_188;
                    pvVar31 = (void *)CONCAT44(uStack_18c,local_190);
                    local_178 = local_188;
                    if (lVar39 == 0) {
                      local_174 = 0;
                    }
                    else {
                      FUN_1446dd670(&local_180,local_188,0);
                      memcpy((void *)local_180,pvVar31,lVar39 * 2);
                      pvVar31 = (void *)CONCAT44(uStack_18c,local_190);
                    }
                    local_170 = (uint)(ushort)uVar10;
                    local_248 = (LARGE_INTEGER *)CONCAT44(local_248._4_4_,local_170);
                    if (pvVar31 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                    plVar13 = local_218;
                    uVar32 = 0;
                    local_270 = (longlong *)CONCAT44(local_270._4_4_,local_178);
                    iVar23 = local_178 + -1;
                    if (local_178 == 0) {
                      iVar23 = 0;
                    }
                    if (0 < iVar23) {
                      LVar21.QuadPart = (LONGLONG)&DAT_149dfb77a;
                      if (local_178 != 0) {
                        LVar21 = local_180;
                      }
                      lVar39 = 0;
                      do {
                        uVar22 = *(ushort *)(LVar21.QuadPart + lVar39 * 2);
                        uVar34 = ((uint)uVar22 + (uint)(0x19 < uVar22 - 0x61) * 0x20) - 0x20;
                        uVar32 = uVar32 >> 8 ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)((uVar32 ^ uVar34) & 0xff) * 4);
                        uVar32 = uVar32 >> 8 ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(uVar32 & 0xff ^ uVar34 >> 8 & 0xff) * 4);
                        lVar39 = lVar39 + 1;
                      } while (iVar23 != (int)lVar39);
                    }
                    uVar32 = local_170 >> 0xd ^ uVar32 - local_170;
                    uVar34 = uVar32 << 8 ^ (-0x61c88647 - local_170) - uVar32;
                    uVar24 = uVar34 >> 0xd ^ (local_170 - uVar32) - uVar34;
                    uVar35 = uVar24 >> 0xc ^ (uVar32 - uVar34) - uVar24;
                    uVar32 = uVar35 << 0x10 ^ (uVar34 - uVar24) - uVar35;
                    uVar34 = uVar32 >> 5 ^ (uVar24 - uVar35) - uVar32;
                    uVar24 = uVar34 >> 3 ^ (uVar35 - uVar32) - uVar34;
                    uVar32 = uVar24 << 10 ^ (uVar32 - uVar34) - uVar24;
                    iVar23 = FUN_147069bce(local_218,uVar32 >> 0xf ^ uVar34 - (uVar24 + uVar32));
                    plVar30 = local_268;
                    param_1 = local_288;
                    lVar39 = (longlong)iVar23 * 0x98 + *plVar13;
                    if (iVar23 == -1) {
                      lVar39 = 0;
                    }
                    plVar13 = (longlong *)0x0;
                    if (lVar39 != 0) {
                      if ((uint)local_270 == *(int *)(lVar39 + 0x58)) {
                        if (1 < (int)(uint)local_270) {
                          lVar36 = 0;
                          while( true ) {
                            uVar22 = *(ushort *)(local_180.QuadPart + lVar36);
                            uVar26 = (ulonglong)uVar22;
                            uVar11 = *(ushort *)(*(longlong *)(lVar39 + 0x50) + lVar36);
                            if (uVar22 != uVar11) break;
                            if (uVar22 == 0) goto LAB_142afba9d;
LAB_142afba50:
                            lVar36 = lVar36 + 2;
                          }
                          if ((uVar11 | uVar22) < 0x80) {
                            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                            uVar38 = (ulonglong)uVar11;
                            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar38];
                            if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar38])
                            goto LAB_142afba50;
                          }
                          if (uVar22 != uVar11) goto LAB_142afbb74;
                        }
LAB_142afba9d:
                        if ((((*(int *)(lVar39 + 0x48) == 4) &&
                             ((short)local_248 == *(short *)(lVar39 + 0x40))) &&
                            (local_128.s.LowPart._2_2_ == *(short *)(lVar39 + 0x42))) &&
                           (((int)uStack_118 == -0x55555556 && (uStack_118._4_4_ == -0x44444445))))
                        {
                          plVar13 = (longlong *)0x0;
                          if ((longlong *)LStack_120.QuadPart != (longlong *)0x0) {
                            pLVar1 = (LARGE_INTEGER *)(lVar39 + 0x60);
                            if (pLVar1 != &local_180) {
                              *(uint *)(lVar39 + 0x68) = (uint)local_270;
                              if (*(int *)(lVar39 + 0x6c) == 0 && (uint)local_270 == 0) {
                                *(undefined4 *)(lVar39 + 0x6c) = 0;
                              }
                              else {
                                local_200.s = local_180.s;
                                local_248 = pLVar1;
                                FUN_1446dd670(pLVar1);
                                if ((uint)local_270 != 0) {
                                  memcpy((void *)*local_248,(void *)local_200,
                                         (longlong)(int)(uint)local_270 * 2);
                                }
                              }
                            }
                            lVar36 = local_238.QuadPart - (longlong)LStack_120;
                            auVar46._8_4_ = (int)((ulonglong)lVar36 >> 0x20);
                            auVar46._0_8_ = lVar36;
                            auVar46._12_4_ = 0x45300000;
                            dVar45 = (((double)CONCAT44(0x43300000,(int)lVar36) - 4503599627370496.0
                                      ) + (auVar46._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
                            bVar6 = 0.0 < dVar45 && dVar45 < 60000.0;
                            if (bVar6) {
                              fVar44 = (float)dVar45;
                            }
                            else {
                              fVar44 = -1.0;
                            }
                            plVar13 = (longlong *)(lVar39 + 0x18);
                            *(float *)(lVar39 + 0x70) = fVar44;
                            *(uint *)(lVar39 + 0x48) = ((byte)~bVar6 & 1) << 2;
                          }
                          goto LAB_142afbbec;
                        }
                      }
                      else if (*(int *)(lVar39 + 0x58) + (uint)local_270 == 1) goto LAB_142afba9d;
LAB_142afbb74:
                      plVar13 = (longlong *)0x0;
                    }
LAB_142afbbec:
                    if ((undefined2 *)local_180.QuadPart != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    if (plVar13 != (longlong *)0x0) {
                      plVar13[0xc] = 0;
                      local_128.QuadPart = 0;
                      uVar32 = *(uint *)(plVar13 + 1);
                      LStack_120.s.LowPart = uVar32;
                      if ((longlong)(int)uVar32 == 0) {
                        LStack_120.s.HighPart = 0;
                        uVar17 = *(DWORD *)(plVar13 + 2);
                      }
                      else {
                        local_238.s.LowPart = *(DWORD *)(plVar13 + 2);
                        local_270 = plVar13;
                        local_248 = (LARGE_INTEGER *)*plVar13;
                        FUN_1446dd670(&local_128,uVar32,0);
                        memcpy((void *)local_128,local_248,(longlong)(int)uVar32 * 2);
                        plVar13 = local_270;
                        uVar17 = local_238._0_4_;
                      }
                      uStack_118 = CONCAT44(uStack_118._4_4_,uVar17);
                      FUN_147065f9e(local_1e8,plVar13 + 6,&local_128);
                      FUN_147065eca(local_210,local_1e8);
                      param_1 = local_288;
                      *(int *)(local_288 + 0x10) = *(int *)(local_288 + 0x10) + 1;
                      if ((void *)local_128.QuadPart != (void *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  local_128.QuadPart = local_128.QuadPart & 0xffffffff00000000;
                  cVar9 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_128);
                  if ((cVar9 == '\0') || (local_128.s.LowPart < 0x16)) break;
                }
              }
              (**(code **)(*local_230 + 0xb8))();
            }
            uVar41 = uVar41 & ~(uint)uVar42;
            puVar12 = *(uint **)(param_1 + 0xa8);
            if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
              puVar12 = local_220;
            }
            uVar34 = *(uint *)(param_1 + 0xb0);
            iVar23 = (int)uVar33;
            lVar39 = (longlong)iVar23;
            uVar32 = puVar12[lVar39] & uVar41;
            if (uVar32 == 0) {
              iVar18 = uVar34 + 0x1e;
              if (-1 < (int)(uVar34 - 1)) {
                iVar18 = uVar34 - 1;
              }
              iVar18 = iVar18 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar19 = iVar18;
              if (iVar18 < iVar23) {
                iVar19 = iVar23;
              }
              if (iVar23 < iVar18) {
                lVar36 = 0;
                do {
                  uVar32 = puVar12[lVar39 + lVar36 + 1];
                  if (uVar32 != 0) {
                    uVar33 = (ulonglong)(iVar23 + (int)lVar36 + 1);
                    uVar41 = 0xffffffff;
                    goto LAB_142afbd79;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar36 = lVar36 + 1;
                } while (iVar19 - lVar39 != lVar36);
                uVar41 = 0xffffffff;
                iVar23 = iVar19;
              }
              uVar33 = (ulonglong)(iVar23 + 1);
              param_1 = local_288;
              uVar32 = uVar34;
            }
            else {
LAB_142afbd79:
              uVar42 = (ulonglong)(-uVar32 & uVar32);
              uVar26 = uVar42 * 2 + 1;
              lVar39 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                }
              }
              uVar32 = (iVar16 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
              if ((int)uVar34 <= (int)uVar32) {
                uVar32 = uVar34;
              }
            }
          } while (uVar32 != (uint)plVar30);
          bVar15 = *(byte *)(param_1 + 0x14);
        }
LAB_142afbdb9:
        iVar16 = local_24c;
        if ((bVar15 & 1) != 0) goto LAB_142afb550;
        uVar41 = *(uint *)(param_1 + 0x60);
        plVar30 = (longlong *)(ulonglong)uVar41;
        iVar23 = 0;
        if (uVar41 == 0) {
          uVar42 = 1;
          uVar33 = 0;
          iVar16 = 0;
          uVar32 = 0;
        }
        else {
          puVar12 = *(uint **)(param_1 + 0x58);
          if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
            puVar12 = local_260;
          }
          uVar32 = *puVar12;
          if (uVar32 == 0) {
            iVar16 = uVar41 + 0x1e;
            if (-1 < (int)(uVar41 - 1)) {
              iVar16 = uVar41 - 1;
            }
            uVar33 = 0;
            uVar42 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar42 = uVar33;
            }
            iVar16 = 0;
            do {
              if (uVar42 == uVar33) {
                iVar23 = 0;
                goto LAB_142afbe4f;
              }
              iVar16 = iVar16 + 0x20;
              uVar32 = puVar12[uVar33 + 1];
              uVar33 = uVar33 + 1;
            } while (uVar32 == 0);
          }
          else {
            uVar33 = 0;
            iVar16 = 0;
          }
          uVar42 = (ulonglong)(-uVar32 & uVar32);
          uVar26 = uVar42 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          uVar32 = (iVar16 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if ((int)uVar41 <= (int)uVar32) {
            uVar32 = uVar41;
          }
        }
        if (uVar32 != uVar41) {
          uVar34 = 0xffffffff;
          iVar23 = 0;
          local_268 = plVar30;
          do {
            lVar39 = *local_218;
            lVar36 = (longlong)(int)uVar32 * 0x98;
            if ((*(int *)(lVar39 + 0x48 + lVar36) == 4) &&
               (lVar40 = lVar39 + lVar36, param_1 = local_288, 0.0 < *(double *)(lVar40 + 0x30))) {
              QueryPerformanceCounter(&local_180);
              if (*(double *)(lVar40 + 0x38) <=
                  ((double)local_180.QuadPart * DAT_14c83f420 + 16777216.0) -
                  *(double *)(lVar40 + 0x30)) {
                *(float *)(lVar40 + 0x70) = (float)*(double *)(lVar40 + 0x38);
                *(undefined4 *)(lVar40 + 0x48) = 1;
                *(undefined4 *)(lVar40 + 0x68) = 0;
                if (*(int *)(lVar40 + 0x6c) != 0) {
                  FUN_1446f8c06(lVar40 + 0x60,0);
                }
                *(undefined8 *)(lVar40 + 0x78) = 0;
                local_180.QuadPart = 0;
                local_178 = *(int *)(lVar40 + 0x20);
                lVar43 = (longlong)local_178;
                if (lVar43 == 0) {
                  local_174 = 0;
                  local_170 = *(uint *)(lVar40 + 0x28);
                }
                else {
                  local_270 = (longlong *)CONCAT44(local_270._4_4_,*(uint *)(lVar40 + 0x28));
                  local_238 = *(LARGE_INTEGER *)(lVar40 + 0x18);
                  FUN_1446dd670(&local_180,local_178,0);
                  memcpy((void *)local_180,(void *)local_238,lVar43 * 2);
                  local_170 = (uint)local_270;
                }
                param_1 = local_288;
                FUN_147065f9e(&local_128,lVar39 + lVar36 + 0x48,&local_180);
                FUN_147065eca(local_210,&local_128);
                plVar30 = local_268;
                if ((undefined2 *)local_180.QuadPart != (undefined2 *)0x0) {
                  FUN_1400020a8();
                  plVar30 = local_268;
                }
              }
              else {
                iVar23 = iVar23 + 1;
                plVar30 = local_268;
                param_1 = local_288;
              }
            }
            uVar41 = (uint)plVar30;
            uVar34 = uVar34 & ~(uint)uVar42;
            puVar12 = *(uint **)(param_1 + 0x58);
            if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
              puVar12 = local_260;
            }
            uVar24 = *(uint *)(param_1 + 0x60);
            iVar18 = (int)uVar33;
            lVar39 = (longlong)iVar18;
            uVar32 = puVar12[lVar39] & uVar34;
            if (uVar32 == 0) {
              iVar19 = uVar24 + 0x1e;
              if (-1 < (int)(uVar24 - 1)) {
                iVar19 = uVar24 - 1;
              }
              iVar19 = iVar19 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar20 = iVar19;
              if (iVar19 < iVar18) {
                iVar20 = iVar18;
              }
              if (iVar18 < iVar19) {
                lVar36 = 0;
                do {
                  uVar32 = puVar12[lVar39 + lVar36 + 1];
                  if (uVar32 != 0) {
                    uVar33 = (ulonglong)(iVar18 + (int)lVar36 + 1);
                    uVar34 = 0xffffffff;
                    goto LAB_142afc029;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar36 = lVar36 + 1;
                } while (iVar20 - lVar39 != lVar36);
                uVar34 = 0xffffffff;
                iVar18 = iVar20;
              }
              uVar33 = (ulonglong)(iVar18 + 1);
              param_1 = local_288;
              uVar32 = uVar24;
            }
            else {
LAB_142afc029:
              uVar42 = (ulonglong)(-uVar32 & uVar32);
              uVar26 = uVar42 * 2 + 1;
              lVar39 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                }
              }
              uVar32 = (iVar16 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
              if ((int)uVar24 <= (int)uVar32) {
                uVar32 = uVar24;
              }
            }
          } while (uVar32 != uVar41);
        }
LAB_142afbe4f:
        *(int *)(param_1 + 0xc) = iVar23;
        if ((int)uVar41 <= (int)local_1f0) {
          local_250 = local_24c;
          iVar16 = local_250;
          if (iVar23 != 0) goto LAB_142afb550;
          break;
        }
        QueryPerformanceCounter(&local_128);
        iVar16 = local_24c;
        lVar39 = local_128.QuadPart - (longlong)local_208;
        auVar47._8_4_ = (int)((ulonglong)lVar39 >> 0x20);
        auVar47._0_8_ = lVar39;
        auVar47._12_4_ = 0x45300000;
        if (600.0 < (((double)CONCAT44(0x43300000,(int)lVar39) - 4503599627370496.0) +
                    (auVar47._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) {
          *(undefined1 *)(param_1 + 0x14) = 1;
          break;
        }
        QueryPerformanceCounter(&local_128);
        if ((((local_27c & 1) == 0) ||
            (lVar39 = local_128.QuadPart - (longlong)local_208,
            auVar48._8_4_ = (int)((ulonglong)lVar39 >> 0x20), auVar48._0_8_ = lVar39,
            auVar48._12_4_ = 0x45300000,
            *(double *)(param_1 + 0x18) <=
            (((double)CONCAT44(0x43300000,(int)lVar39) - 4503599627370496.0) +
            (auVar48._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0)) || (local_250 < 0))
        goto LAB_142afc1aa;
        iVar16 = iVar16 + 1;
        if (*(char *)(param_1 + 0x14) != '\0') break;
      } while( true );
    }
    FUN_1470658d4(param_1);
    FUN_14706912a();
    uVar41 = *(uint *)(param_1 + 0x60);
    puVar12 = (uint *)(ulonglong)uVar41;
    if (uVar41 == 0) {
      uVar42 = 1;
      uVar33 = 0;
      iVar16 = 0;
      uVar32 = 0;
      goto LAB_142afc90b;
    }
    puVar14 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar14 = local_260;
    }
    uVar32 = *puVar14;
    if (uVar32 != 0) {
      uVar33 = 0;
      iVar16 = 0;
      goto LAB_142afc8d7;
    }
    iVar16 = uVar41 + 0x1e;
    if (-1 < (int)(uVar41 - 1)) {
      iVar16 = uVar41 - 1;
    }
    uVar33 = 0;
    uVar42 = (ulonglong)(uint)(iVar16 >> 5);
    if (iVar16 >> 5 < 1) {
      uVar42 = uVar33;
    }
    iVar16 = 0;
    goto LAB_142afc8c4;
  }
  goto LAB_142afb283;
LAB_142afc1aa:
  if (*(int *)(*local_218 + 0x48 + local_1f8) != 3) {
    lVar39 = *local_218 + local_1f8;
    plVar30 = *(longlong **)(lVar39 + 0x80);
    if (plVar30 == (longlong *)0x0) {
      (**(code **)(*local_230 + 0x90))(local_230,&local_128);
      local_180.QuadPart = local_180.QuadPart & 0xffffffffffffff00;
      puVar27 = &DAT_149dfb77a;
      if (*(int *)(lVar39 + 0x58) != 0) {
        puVar27 = *(undefined2 **)(lVar39 + 0x50);
      }
      (**(code **)(*(longlong *)local_128 + 0x10))(local_128.QuadPart,puVar27);
      uVar8 = local_180.s.LowPart._0_1_;
      if (local_180.s.LowPart._0_1_ == '\0') {
        *(undefined4 *)(lVar39 + 0x48) = 3;
      }
      else {
        (**(code **)(*(longlong *)local_128 + 0x28))
                  (local_128.QuadPart,*(undefined4 *)(lVar39 + 0x28));
        LVar21 = LStack_120;
        if ((longlong *)LStack_120.QuadPart == (longlong *)0x0) {
          ((LARGE_INTEGER *)(lVar39 + 0x80))->QuadPart = (LONGLONG)local_128;
          LVar21 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar39 + 0x88))->QuadPart;
          if ((longlong *)LVar21.QuadPart != (longlong *)0x0) {
            *(undefined8 *)(lVar39 + 0x88) = 0;
LAB_142afc396:
            LOCK();
            plVar30 = (longlong *)(LVar21.QuadPart + 8);
            *(int *)plVar30 = *(int *)plVar30 + -1;
            UNLOCK();
            if (*(int *)plVar30 == 0) {
              (*(code *)**(undefined8 **)LVar21)(LVar21.QuadPart);
              LOCK();
              piVar2 = (int *)(LVar21.QuadPart + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                lVar36 = *(longlong *)LVar21;
LAB_142afc58b:
                (**(code **)(lVar36 + 0x10))(LVar21.QuadPart);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(LStack_120.QuadPart + 8) = *(int *)(LStack_120.QuadPart + 8) + 1;
          UNLOCK();
          ((LARGE_INTEGER *)(lVar39 + 0x80))->QuadPart = (LONGLONG)local_128;
          LVar5 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar39 + 0x88))->QuadPart;
          if (LStack_120.QuadPart == LVar5.QuadPart) {
            LOCK();
            plVar30 = (longlong *)(LStack_120.QuadPart + 8);
            *(int *)plVar30 = *(int *)plVar30 + -1;
            UNLOCK();
            if (*(int *)plVar30 == 0) {
              (*(code *)**(undefined8 **)LStack_120)(LStack_120.QuadPart);
              LOCK();
              piVar2 = (int *)(LVar21.QuadPart + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                lVar36 = *(longlong *)LVar21;
                goto LAB_142afc58b;
              }
            }
          }
          else {
            ((LARGE_INTEGER *)(lVar39 + 0x88))->QuadPart = (LONGLONG)LStack_120;
            LVar21 = LVar5;
            if ((longlong *)LVar5.QuadPart != (longlong *)0x0) goto LAB_142afc396;
          }
        }
      }
      LVar21 = LStack_120;
      if ((longlong *)LStack_120.QuadPart != (longlong *)0x0) {
        LOCK();
        plVar30 = (longlong *)(LStack_120.QuadPart + 8);
        *(int *)plVar30 = *(int *)plVar30 + -1;
        UNLOCK();
        if (*(int *)plVar30 == 0) {
          (*(code *)**(undefined8 **)LStack_120)(LStack_120.QuadPart);
          LOCK();
          piVar2 = (int *)(LVar21.QuadPart + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*(longlong *)LVar21 + 0x10))(LVar21.QuadPart);
          }
        }
      }
      if (uVar8 == '\0') goto LAB_142afc5af;
      plVar30 = *(longlong **)(lVar39 + 0x80);
    }
    plVar4 = *(longlong **)(lVar39 + 0x88);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar13 = *(longlong **)(lVar39 + 0x78);
    if (plVar13 == (longlong *)0x0) {
      (**(code **)(*plVar30 + 0xa8))(plVar30,&local_128);
      plVar13 = (longlong *)FUN_147065d2c(param_1);
      if (plVar13 != (longlong *)0x0) {
        *(longlong **)(lVar39 + 0x78) = plVar13;
        goto LAB_142afc2ec;
      }
      iVar16 = 5;
    }
    else {
LAB_142afc2ec:
      cVar9 = (**(code **)(*plVar13 + 0x78))(plVar13);
      iVar16 = 2;
      if (cVar9 != '\0') {
        local_128.s.LowPart._2_2_ = (undefined2)DAT_14c99f9d0;
        DAT_14c99f9d0 = DAT_14c99f9d0 + 1;
        *(undefined2 *)(lVar39 + 0x42) = local_128.s.LowPart._2_2_;
        LStack_120.QuadPart = 0;
        local_128.s.LowPart._0_2_ = *(undefined2 *)(lVar39 + 0x40);
        local_128.s.HighPart = 0;
        uStack_118 = 0xbbbbbbbbaaaaaaaa;
        local_268 = plVar30;
        QueryPerformanceCounter(&LStack_120);
        uVar10 = Ordinal_9(local_128.QuadPart & 0xffff);
        LVar21 = local_128;
        local_128.s.LowPart._0_2_ = uVar10;
        LVar5 = local_128;
        local_128.s.LowPart._2_2_ = LVar21.s.LowPart._2_2_;
        uVar10 = local_128.s.LowPart._2_2_;
        local_128 = LVar5;
        uVar10 = Ordinal_9(uVar10);
        local_128.s.LowPart._2_2_ = uVar10;
        FUN_147066802(&LStack_120);
        local_148 = local_128.s.LowPart;
        uStack_142 = (undefined2)LStack_120.s.LowPart;
        uStack_140 = (undefined6)((ulonglong)LStack_120 >> 0x10);
        uStack_13a = (undefined2)uStack_118;
        uStack_138 = (undefined6)((ulonglong)uStack_118 >> 0x10);
        uStack_144 = 0;
        uVar41 = 0;
        uVar32 = 0x18;
        pDVar28 = &local_148;
        do {
          DVar7 = *pDVar28;
          pDVar28 = (DWORD *)((longlong)pDVar28 + 2);
          uVar41 = uVar41 + (ushort)DVar7;
          uVar32 = uVar32 - 2;
        } while (3 < uVar32);
        uVar41 = (uVar41 & 0xffff) + (uVar41 >> 0x10);
        uStack_144 = Ordinal_9(~((uVar41 >> 0x10) + uVar41));
        local_190 = 0;
        QueryPerformanceCounter(&local_180);
        *(double *)(lVar39 + 0x30) = (double)local_180.QuadPart * DAT_14c83f420 + 16777216.0;
        local_2a8 = local_268;
        cVar9 = (**(code **)(*plVar13 + 0x50))(plVar13,&local_148,0x16,&local_190);
        iVar16 = 8;
        if (local_190 == 0x16) {
          iVar16 = 1;
        }
        if (cVar9 == '\0') {
          iVar16 = 7;
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar30 = plVar4 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
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
    if (iVar16 == 2) {
      uVar41 = (**(code **)(*local_230 + 0xb8))();
      if ((8 < uVar41) || (local_27c = 0, iVar16 = 0, (0x181U >> (uVar41 & 0x1f) & 1) == 0))
      goto LAB_142afc646;
      goto LAB_142afb550;
    }
    if (iVar16 != 3) {
      if (iVar16 != 1) {
LAB_142afc5af:
        *(undefined4 *)(lVar39 + 0x48) = 3;
        local_290 = local_290 & local_254;
        puVar12 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar12 = local_260;
        }
        uVar32 = *(uint *)(param_1 + 0x60);
        uVar42 = (ulonglong)uVar32;
        iVar16 = (int)local_278;
        lVar39 = (longlong)iVar16;
        uVar41 = puVar12[lVar39] & local_290;
        if (uVar41 != 0) goto LAB_142afc81b;
        iVar23 = uVar32 + 0x1e;
        if (-1 < (int)(uVar32 - 1)) {
          iVar23 = uVar32 - 1;
        }
        iVar23 = iVar23 >> 5;
        local_28c = local_28c + 0x20;
        iVar18 = iVar23;
        if (iVar23 < iVar16) {
          iVar18 = iVar16;
        }
        uVar33 = uVar42;
        if (iVar23 <= iVar16) goto LAB_142afc6d4;
        lVar40 = (longlong)iVar18;
        lVar36 = 0;
        goto LAB_142afc620;
      }
      QueryPerformanceCounter(&local_128);
      local_208.s = local_128.s;
      local_27c = (uint)CONCAT71((int7)((ulonglong)local_128 >> 8),1);
      goto LAB_142afc72e;
    }
  }
  local_27c = 0;
LAB_142afc72e:
  local_290 = local_290 & local_254;
  puVar12 = *(uint **)(param_1 + 0x58);
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    puVar12 = local_260;
  }
  uVar41 = *(uint *)(param_1 + 0x60);
  uVar33 = (ulonglong)uVar41;
  iVar16 = (int)local_278;
  lVar39 = (longlong)iVar16;
  uVar32 = puVar12[lVar39] & local_290;
  if (uVar32 != 0) goto LAB_142afc7c6;
  iVar23 = uVar41 + 0x1e;
  if (-1 < (int)(uVar41 - 1)) {
    iVar23 = uVar41 - 1;
  }
  iVar23 = iVar23 >> 5;
  local_28c = local_28c + 0x20;
  iVar18 = iVar23;
  if (iVar23 < iVar16) {
    iVar18 = iVar16;
  }
  if (iVar23 <= iVar16) goto LAB_142afc860;
  lVar36 = 0;
  goto LAB_142afc78e;
LAB_142afc646:
  *(undefined4 *)(lVar39 + 0x48) = 3;
  local_290 = local_290 & local_254;
  puVar12 = *(uint **)(param_1 + 0x58);
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    puVar12 = local_260;
  }
  uVar32 = *(uint *)(param_1 + 0x60);
  uVar42 = (ulonglong)uVar32;
  iVar16 = (int)local_278;
  lVar39 = (longlong)iVar16;
  uVar41 = puVar12[lVar39] & local_290;
  param_1 = local_288;
  if (uVar41 != 0) goto LAB_142afc81b;
  iVar23 = uVar32 + 0x1e;
  if (-1 < (int)(uVar32 - 1)) {
    iVar23 = uVar32 - 1;
  }
  iVar23 = iVar23 >> 5;
  local_28c = local_28c + 0x20;
  iVar18 = iVar23;
  if (iVar23 < iVar16) {
    iVar18 = iVar16;
  }
  uVar33 = uVar42;
  if (iVar23 <= iVar16) goto LAB_142afc6d4;
  lVar40 = (longlong)iVar18;
  lVar36 = 0;
  do {
    uVar41 = puVar12[lVar39 + lVar36 + 1];
    if (uVar41 != 0) {
      local_278 = (ulonglong)(iVar16 + (int)lVar36 + 1);
      local_290 = 0xffffffff;
      goto LAB_142afc81b;
    }
    local_28c = local_28c + 0x20;
    lVar36 = lVar36 + 1;
  } while (lVar40 - lVar39 != lVar36);
LAB_142afc639:
  local_290 = 0xffffffff;
  uVar33 = uVar42;
  lVar39 = lVar40;
LAB_142afc6d4:
  local_278 = lVar39 + 1;
  local_27c = 0;
  iVar16 = 0;
  param_1 = local_288;
  goto LAB_142afb531;
  while( true ) {
    local_28c = local_28c + 0x20;
    lVar36 = lVar36 + 1;
    if (lVar40 - lVar39 == lVar36) break;
LAB_142afc620:
    uVar41 = puVar12[lVar39 + lVar36 + 1];
    if (uVar41 != 0) {
      local_278 = (ulonglong)(iVar16 + (int)lVar36 + 1);
      local_290 = 0xffffffff;
      goto LAB_142afc81b;
    }
  }
  goto LAB_142afc639;
LAB_142afc81b:
  local_240 = (ulonglong)(-uVar41 & uVar41);
  uVar33 = local_240 * 2 + 1;
  lVar39 = 0x3f;
  if (uVar33 != 0) {
    for (; uVar33 >> lVar39 == 0; lVar39 = lVar39 + -1) {
    }
  }
  uVar41 = (local_28c - ((uint)lVar39 ^ 0x3f)) + 0x3e;
  uVar33 = (ulonglong)uVar41;
  if ((int)uVar42 <= (int)uVar41) {
    uVar33 = uVar42;
  }
  local_27c = 0;
  iVar16 = 0;
  goto LAB_142afb523;
LAB_142afc78e:
  uVar32 = puVar12[lVar39 + lVar36 + 1];
  if (uVar32 == 0) {
    local_28c = local_28c + 0x20;
    lVar36 = lVar36 + 1;
    if (iVar18 - lVar39 == lVar36) goto code_r0x000142afc7a3;
    goto LAB_142afc78e;
  }
  local_278 = (ulonglong)(iVar16 + (int)lVar36 + 1);
  local_290 = 0xffffffff;
LAB_142afc7c6:
  local_240 = (ulonglong)(-uVar32 & uVar32);
  uVar33 = local_240 * 2 + 1;
  lVar39 = 0x3f;
  if (uVar33 != 0) {
    for (; uVar33 >> lVar39 == 0; lVar39 = lVar39 + -1) {
    }
  }
  uVar32 = (local_28c - ((uint)lVar39 ^ 0x3f)) + 0x3e;
  if ((int)uVar41 <= (int)uVar32) {
    uVar32 = uVar41;
  }
  iVar16 = 0;
  uVar33 = (ulonglong)uVar32;
  goto LAB_142afb523;
code_r0x000142afc7a3:
  local_290 = 0xffffffff;
  lVar39 = (longlong)iVar18;
LAB_142afc860:
  local_278 = lVar39 + 1;
  iVar16 = 0;
  param_1 = local_288;
  goto LAB_142afb523;
  while( true ) {
    iVar16 = iVar16 + 0x20;
    uVar32 = puVar14[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar32 != 0) break;
LAB_142afc8c4:
    if (uVar42 == uVar33) goto LAB_142afc910;
  }
LAB_142afc8d7:
  uVar42 = (ulonglong)(-uVar32 & uVar32);
  uVar26 = uVar42 * 2 + 1;
  lVar39 = 0x3f;
  if (uVar26 != 0) {
    for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
    }
  }
  uVar32 = (iVar16 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
  if ((int)uVar41 <= (int)uVar32) {
    uVar32 = uVar41;
  }
LAB_142afc90b:
  if (uVar32 != uVar41) {
    uVar34 = 0xffffffff;
    local_220 = puVar12;
    do {
      lVar39 = *local_218;
      lVar36 = (longlong)(int)uVar32 * 0x98;
      if (1 < *(uint *)(lVar39 + 0x48 + lVar36)) {
        lVar40 = lVar39 + lVar36;
        *(float *)(lVar40 + 0x70) = (float)*(double *)(lVar40 + 0x38);
        *(undefined4 *)(lVar40 + 0x68) = 0;
        if (*(int *)(lVar40 + 0x6c) != 0) {
          FUN_1446f8c06(lVar40 + 0x60,0);
        }
        local_180.QuadPart = 0;
        local_178 = *(int *)(lVar40 + 0x20);
        lVar43 = (longlong)local_178;
        pvVar31 = *(void **)(lVar40 + 0x18);
        if (lVar43 == 0) {
          local_174 = 0;
          local_170 = *(uint *)(lVar40 + 0x28);
        }
        else {
          local_228 = (longlong *)CONCAT44(local_228._4_4_,*(uint *)(lVar40 + 0x28));
          FUN_1446dd670(&local_180,local_178,0);
          memcpy((void *)local_180,pvVar31,lVar43 * 2);
          local_170 = (uint)local_228;
        }
        param_1 = local_288;
        FUN_147065f9e(&local_128,lVar39 + lVar36 + 0x48,&local_180);
        FUN_147065eca(local_210,&local_128);
        puVar12 = local_220;
        if ((undefined2 *)local_180.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar41 = *(uint *)(param_1 + 0x60);
      }
      uVar34 = uVar34 & ~(uint)uVar42;
      puVar14 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar14 = local_260;
      }
      iVar23 = (int)uVar33;
      lVar39 = (longlong)iVar23;
      uVar32 = puVar14[lVar39] & uVar34;
      if (uVar32 == 0) {
        iVar18 = uVar41 + 0x1e;
        if (-1 < (int)(uVar41 - 1)) {
          iVar18 = uVar41 - 1;
        }
        iVar18 = iVar18 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar19 = iVar18;
        if (iVar18 < iVar23) {
          iVar19 = iVar23;
        }
        if (iVar23 < iVar18) {
          lVar36 = 0;
          do {
            uVar32 = puVar14[lVar39 + lVar36 + 1];
            if (uVar32 != 0) {
              uVar33 = (ulonglong)(iVar23 + (int)lVar36 + 1);
              uVar34 = 0xffffffff;
              goto LAB_142afc9f6;
            }
            iVar16 = iVar16 + 0x20;
            lVar36 = lVar36 + 1;
          } while (iVar19 - lVar39 != lVar36);
          uVar34 = 0xffffffff;
          iVar23 = iVar19;
        }
        uVar33 = (ulonglong)(iVar23 + 1);
        param_1 = local_288;
        uVar32 = uVar41;
      }
      else {
LAB_142afc9f6:
        uVar42 = (ulonglong)(-uVar32 & uVar32);
        uVar26 = uVar42 * 2 + 1;
        lVar39 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar39 == 0; lVar39 = lVar39 + -1) {
          }
        }
        uVar32 = (iVar16 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
        if ((int)uVar41 <= (int)uVar32) {
          uVar32 = uVar41;
        }
      }
    } while (uVar32 != (uint)puVar12);
  }
LAB_142afc910:
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar30 = local_198 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar2 = (int *)((longlong)local_198 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_198 + 0x10))(local_198);
      }
    }
  }
  uVar29 = 1;
LAB_142afb283:
  uVar25 = 3;
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar25 = uVar29;
  }
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (plVar30 = *(longlong **)(param_1 + 0xe8), plVar30 != (longlong *)0x0)) {
    (**(code **)(*plVar30 + 0x60))(plVar30,uVar25);
  }
  if ((local_e0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 142afcb7a FUN_142afcb7a body=236 status=ok
// SIG undefined FUN_142afcb7a(void)

bool FUN_142afcb7a(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 6);
  if (iVar1 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    lVar2 = param_1[7];
    if (lVar2 != 0) {
      while ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))
                  (*(longlong **)(lVar2 + 0x70),0xffffffff,0);
      }
      FUN_1470687a8(&local_48,lVar2 + 0x80);
      local_38 = *(undefined1 *)(lVar2 + 0x90);
    }
    FUN_147066648(local_60,&local_48);
    FUN_1470665be(param_1 + 4,local_60);
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1,1);
    }
    FUN_147068807(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afcc68 FUN_142afcc68 body=478 status=ok
// SIG undefined FUN_142afcc68(void)

bool FUN_142afcc68(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [48];
  undefined4 local_70 [2];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_70[0] = 4;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0xbf800000;
    lVar3 = param_1[0xd];
    if (lVar3 != 0) {
      while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))
                  (*(longlong **)(lVar3 + 0x70),0xffffffff,0);
      }
      local_70[0] = *(undefined4 *)(lVar3 + 0x80);
      if (&local_68 != (void **)(lVar3 + 0x88)) {
        uVar2 = *(uint *)(lVar3 + 0x90);
        pvVar4 = *(void **)(lVar3 + 0x88);
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
        if (uVar2 == 0 && uStack_60._4_4_ == 0) {
          uStack_60 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_68,uVar2);
          if (uVar2 != 0) {
            memcpy(local_68,pvVar4,(longlong)(int)uVar2 * 2);
          }
        }
      }
      if (&local_58 != (void **)(lVar3 + 0x98)) {
        uVar2 = *(uint *)(lVar3 + 0xa0);
        pvVar4 = *(void **)(lVar3 + 0x98);
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if (uVar2 == 0 && uStack_50._4_4_ == 0) {
          uStack_50 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_58,uVar2);
          if (uVar2 != 0) {
            memcpy(local_58,pvVar4,(longlong)(int)uVar2 * 2);
          }
        }
      }
      local_48 = *(undefined4 *)(lVar3 + 0xa8);
    }
    FUN_147068482(local_a0,local_70);
    FUN_14706842e(param_1 + 4,local_a0);
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1,1);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afce47 FUN_142afce47 body=1056 status=ok
// SIG undefined FUN_142afce47(void)

undefined8 * FUN_142afce47(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  undefined1 local_89;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a1573b0;
  uStack_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  local_88 = FUN_147068234;
  FUN_14170b918(&local_a8,param_3);
  plVar13 = plStack_a0;
  uVar5 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_a0 + 8) = *(int *)((longlong)plStack_a0 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar8 = (uint *)*puVar2;
  if (puVar8 != (uint *)0x0) goto LAB_142afcf64;
  while( true ) {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_142afd268);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar7 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar7 = 0xffffffff;
    *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *puVar2 = puVar7;
    FUN_140217a48(puVar2);
    puVar8 = (uint *)*puVar2;
LAB_142afcf64:
    puVar14 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (uint *)(puVar14 + 0x22);
    uVar10 = puVar8[0x12];
    if (puVar11 <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar3 = *puVar8;
      *puVar8 = *puVar8 + uVar10 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar10) != 0xffffffff) break;
      puVar8 = (uint *)*puVar2;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar2 = puVar8;
      puVar14 = (undefined8 *)((longlong)puVar8 + 0x67U & 0xfffffffffffffff0);
      puVar11 = (uint *)(puVar14 + 0x22);
      uVar10 = 0;
      if (puVar11 <= puVar8 + 0x4000) {
        uVar10 = 1;
        goto LAB_142afcfe4;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_142afcfe4:
  *(uint **)(puVar8 + 0x10) = puVar11;
  puVar8[0x12] = uVar10;
  FUN_1447247dc(puVar14,0);
  *puVar14 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
  puVar14[0x16] = local_88;
  puVar14[0x18] = local_78;
  local_78 = (undefined ***)0x0;
  *(undefined4 *)(puVar14 + 0x1c) = uStack_58;
  *(undefined4 *)((longlong)puVar14 + 0xe4) = uStack_54;
  *(undefined4 *)(puVar14 + 0x1d) = uStack_50;
  *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_4c;
  puVar14[0x1a] = local_68;
  puVar14[0x1b] = CONCAT44(uStack_5c,uStack_60);
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar14[0x1e] = local_a8;
  puVar14[0x1f] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar14 + 0x20) = 0;
  *(undefined4 *)(puVar14 + 0x21) = 0xff;
  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
  }
  puVar14[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar14[9] = puVar14;
  puVar14[10] = puVar14;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar14[0xf] = uVar9;
  puVar14[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
  if (puVar14 == (undefined8 *)0x0) {
    local_89 = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
    local_89 = 1;
    FUN_1447439e4(puVar14);
    LOCK();
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
  plVar6 = plStack_a0;
  *param_1 = uVar5;
  param_1[1] = plVar13;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_a0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar12 = local_78;
    }
    (*(code *)(*pppuVar12)[2])(pppuVar12);
  }
  if (*param_3 != 0) {
    plVar13 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afd28f FUN_142afd28f body=569 status=ok
// SIG undefined FUN_142afd28f(void)

undefined8 * FUN_142afd28f(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = *param_2;
  local_68[0] = (longlong *)0x0;
  if (local_78[0] != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,local_68);
  }
  FUN_147068062(&local_98,param_3);
  plVar7 = plStack_90;
  uVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar6 = FUN_14118da1c();
        bVar4 = FUN_14054d46e(uVar6,L"nothreading");
        DAT_14c83f0f8 = bVar4 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 != 1) {
      FUN_147067f7f(&local_98,local_78);
      goto LAB_142afd3d9;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_14a157430;
  puVar5[2] = local_78[0];
  puVar5[4] = local_68[0];
  local_68[0] = (longlong *)0x0;
  *(undefined4 *)(puVar5 + 8) = local_48;
  *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_44;
  *(undefined4 *)(puVar5 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_3c;
  puVar5[6] = local_58;
  puVar5[7] = uStack_50;
  if (local_78[0] != 0) {
    local_78[0] = 0;
  }
  puVar5[10] = local_98;
  puVar5[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar5 + 0xc) = local_88;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar5,3);
LAB_142afd3d9:
  plVar2 = plStack_90;
  *param_1 = uVar3;
  param_1[1] = plVar7;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78[0] != 0) {
    plVar7 = local_68[0];
    if (local_68[0] == (longlong *)0x0) {
      plVar7 = &local_58;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afd4ca FUN_142afd4ca body=478 status=ok
// SIG undefined FUN_142afd4ca(void)

bool FUN_142afd4ca(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [48];
  undefined4 local_70 [2];
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_70[0] = 4;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0xbf800000;
    lVar3 = param_1[0xd];
    if (lVar3 != 0) {
      while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))
                  (*(longlong **)(lVar3 + 0x70),0xffffffff,0);
      }
      local_70[0] = *(undefined4 *)(lVar3 + 0x80);
      if (&local_68 != (void **)(lVar3 + 0x88)) {
        uVar2 = *(uint *)(lVar3 + 0x90);
        pvVar4 = *(void **)(lVar3 + 0x88);
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
        if (uVar2 == 0 && uStack_60._4_4_ == 0) {
          uStack_60 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_68,uVar2);
          if (uVar2 != 0) {
            memcpy(local_68,pvVar4,(longlong)(int)uVar2 * 2);
          }
        }
      }
      if (&local_58 != (void **)(lVar3 + 0x98)) {
        uVar2 = *(uint *)(lVar3 + 0xa0);
        pvVar4 = *(void **)(lVar3 + 0x98);
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if (uVar2 == 0 && uStack_50._4_4_ == 0) {
          uStack_50 = (ulonglong)uVar2;
        }
        else {
          FUN_1446dd670(&local_58,uVar2);
          if (uVar2 != 0) {
            memcpy(local_58,pvVar4,(longlong)(int)uVar2 * 2);
          }
        }
      }
      local_48 = *(undefined4 *)(lVar3 + 0xa8);
    }
    FUN_147068482(local_a0,local_70);
    FUN_14706842e(param_1 + 4,local_a0);
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)*param_1)(param_1,1);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afd6aa FUN_142afd6aa body=48 status=ok
// SIG undefined FUN_142afd6aa(void)

void FUN_142afd6aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142afd6da FUN_142afd6da body=48 status=ok
// SIG undefined FUN_142afd6da(void)

undefined8 FUN_142afd6da(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  FUN_1470666a2(param_1,*(undefined8 *)(lVar1 + 0x18),param_2 + 1,(int)param_2[3]);
  LOCK();
  *(undefined4 *)(lVar1 + 0x30) = 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 142afd70a FUN_142afd70a body=149 status=ok
// SIG undefined FUN_142afd70a(void)

undefined8 * FUN_142afd70a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a157560;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_147068f16(puVar3 + 2,iVar1);
    FUN_147068f80(puVar3[2],uVar2,iVar1);
  }
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
  return puVar3 + 1;
}



// FUNCTION 142afd7a6 FUN_142afd7a6 body=29 status=ok
// SIG undefined FUN_142afd7a6(void)

void FUN_142afd7a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142afd7c4 FUN_142afd7c4 body=69 status=ok
// SIG undefined FUN_142afd7c4(void)

undefined8 * FUN_142afd7c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a157560;
  FUN_1470690ff(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142afd809 FUN_142afd809 body=1056 status=ok
// SIG undefined FUN_142afd809(void)

undefined8 * FUN_142afd809(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  undefined1 local_89;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14a1575d0;
  uStack_60 = *param_2;
  uStack_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  local_88 = FUN_14706a2ca;
  FUN_14170b918(&local_a8,param_3);
  plVar13 = plStack_a0;
  uVar5 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_a0 + 8) = *(int *)((longlong)plStack_a0 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar8 = (uint *)*puVar2;
  if (puVar8 != (uint *)0x0) goto LAB_142afd926;
  while( true ) {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_142afd268);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar7 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar7 = 0xffffffff;
    *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *puVar2 = puVar7;
    FUN_140217a48(puVar2);
    puVar8 = (uint *)*puVar2;
LAB_142afd926:
    puVar14 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (uint *)(puVar14 + 0x22);
    uVar10 = puVar8[0x12];
    if (puVar11 <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar3 = *puVar8;
      *puVar8 = *puVar8 + uVar10 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar10) != 0xffffffff) break;
      puVar8 = (uint *)*puVar2;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar2 = puVar8;
      puVar14 = (undefined8 *)((longlong)puVar8 + 0x67U & 0xfffffffffffffff0);
      puVar11 = (uint *)(puVar14 + 0x22);
      uVar10 = 0;
      if (puVar11 <= puVar8 + 0x4000) {
        uVar10 = 1;
        goto LAB_142afd9a6;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_142afd9a6:
  *(uint **)(puVar8 + 0x10) = puVar11;
  puVar8[0x12] = uVar10;
  FUN_1447247dc(puVar14,0);
  *puVar14 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
  puVar14[0x16] = local_88;
  puVar14[0x18] = local_78;
  local_78 = (undefined ***)0x0;
  *(undefined4 *)(puVar14 + 0x1c) = uStack_58;
  *(undefined4 *)((longlong)puVar14 + 0xe4) = uStack_54;
  *(undefined4 *)(puVar14 + 0x1d) = uStack_50;
  *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_4c;
  puVar14[0x1a] = local_68;
  puVar14[0x1b] = CONCAT44(uStack_5c,uStack_60);
  if (local_88 != (code *)0x0) {
    local_88 = (code *)0x0;
  }
  puVar14[0x1e] = local_a8;
  puVar14[0x1f] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined1 *)(puVar14 + 0x20) = 0;
  *(undefined4 *)(puVar14 + 0x21) = 0xff;
  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
  }
  puVar14[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar14[9] = puVar14;
  puVar14[10] = puVar14;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar14[0xf] = uVar9;
  puVar14[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
  if (puVar14 == (undefined8 *)0x0) {
    local_89 = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
    local_89 = 1;
    FUN_1447439e4(puVar14);
    LOCK();
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
  plVar6 = plStack_a0;
  *param_1 = uVar5;
  param_1[1] = plVar13;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_a0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar12 = local_78;
    }
    (*(code *)(*pppuVar12)[2])(pppuVar12);
  }
  if (*param_3 != 0) {
    plVar13 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afdc2a FUN_142afdc2a body=29 status=ok
// SIG undefined FUN_142afdc2a(void)

undefined8 FUN_142afdc2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142afdc5c FUN_142afdc5c body=93 status=ok
// SIG undefined FUN_142afdc5c(void)

void FUN_142afdc5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1575f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142afdcba FUN_142afdcba body=93 status=ok
// SIG undefined FUN_142afdcba(void)

void FUN_142afdcba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1575f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142afdd18 FUN_142afdd18 body=126 status=ok
// SIG undefined FUN_142afdd18(void)

void FUN_142afdd18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a157660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1575f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142afdd87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142afdd96 FUN_142afdd96 body=30 status=ok
// SIG undefined FUN_142afdd96(void)

void FUN_142afdd96(longlong param_1,undefined8 param_2)

{
  FUN_142afddd6(param_1 + 0x18);
  FUN_14706882e(param_2);
  return;
}



// FUNCTION 142afddb4 FUN_142afddb4 body=33 status=ok
// SIG undefined FUN_142afddb4(void)

undefined1 FUN_142afddb4(longlong param_1,undefined8 param_2)

{
  FUN_142afddd6(param_1 + 0x18);
  FUN_14706882e(param_2);
  return 1;
}



// FUNCTION 142afddd6 FUN_142afddd6 body=241 status=ok
// SIG undefined FUN_142afddd6(void)

void FUN_142afddd6(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = *param_2;
  local_58 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  local_50 = param_2[4];
  local_4c = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  local_48 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_40 = param_2[8];
  local_3c = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  local_38 = param_2[10];
  local_30 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  local_28 = param_2[0xe];
  local_24 = param_2[0xf];
  *(undefined8 *)(param_2 + 0xe) = 0;
  local_20 = param_2[0x10];
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14706a3dc(param_1,iVar1);
  }
  FUN_147068914((longlong)iVar1 * 0x48 + *param_1,local_60);
  FUN_14706882e(local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afdec8 FUN_142afdec8 body=29 status=ok
// SIG undefined FUN_142afdec8(void)

undefined8 FUN_142afdec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142afdefa FUN_142afdefa body=93 status=ok
// SIG undefined FUN_142afdefa(void)

void FUN_142afdefa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157740;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1576d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142afdf58 FUN_142afdf58 body=93 status=ok
// SIG undefined FUN_142afdf58(void)

void FUN_142afdf58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a157740;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1576d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142afdfb6 FUN_142afdfb6 body=126 status=ok
// SIG undefined FUN_142afdfb6(void)

void FUN_142afdfb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a157740;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1576d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142afe025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142afe046 FUN_142afe046 body=135 status=ok
// SIG undefined FUN_142afe046(void)

void FUN_142afe046(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a1571f6;
  local_14 = 4;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14629d460(&local_28);
  auVar1 = roundpd(ZEXT816(0x40a3890000000000),ZEXT816(0x40a3890000000000),1);
  DAT_14c99f9c0 = (longlong)auVar1._0_8_;
  DAT_14c99f9c8 = DAT_14c99f9c0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afe0d0 FUN_142afe0d0 body=1193 status=ok
// SIG undefined FUN_142afe0d0(void)

ulonglong FUN_142afe0d0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  char cVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int local_88;
  undefined1 local_84 [4];
  longlong *local_80 [2];
  undefined1 local_6c [4];
  longlong *local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_3;
  FUN_14706a48c();
  local_58 = L"LoadSuccess";
  local_50._0_4_ = 0xb;
  FUN_1446e940c(local_80,&local_58);
  local_58 = L"XmlParser";
  local_50._0_4_ = 9;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"XmlFile was loaded successfully";
  local_50 = (longlong **)CONCAT44(local_50._4_4_,0x1f);
  FUN_140208c1e(&local_68,local_6c,local_80,&local_58);
  plVar6 = local_68;
  if (*(code **)(*local_68 + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*local_68 + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  pcVar3 = *(code **)(*local_68 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar6 = local_68 + 3;
    if (local_68[5] != 0) {
      plVar6 = (longlong *)(local_68[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar6 = local_68 + 2;
  }
  else {
    plVar6 = (longlong *)(*pcVar3)(local_68);
  }
  plVar1 = param_1 + 2;
  if (plVar1 != plVar6) {
    iVar2 = (int)plVar6[1];
    pvVar4 = (void *)*plVar6;
    *(int *)(param_1 + 3) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,pvVar4,(longlong)iVar2 * 2);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  iVar2 = local_88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  if (local_88 == 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    local_58 = (wchar_t *)&LAB_142784330;
    local_50 = local_80;
    cVar5 = FUN_1427819a4(&local_68,puVar7);
    if (cVar5 == '\0') {
      local_58 = L"FileLoadFail";
      local_50._0_4_ = 0xc;
      FUN_1446e940c(local_6c,&local_58);
      local_58 = L"XmlParser";
      local_50._0_4_ = 9;
      FUN_1446e940c(local_84,&local_58);
      local_58 = L"Failed to load the file";
      local_50 = (longlong **)CONCAT44(local_50._4_4_,0x17);
      FUN_140208c1e(local_80,local_84,local_6c,&local_58);
      plVar6 = local_80[0];
      if (*(code **)(*local_80[0] + 0x50) != FUN_144828418) {
        plVar6 = (longlong *)(**(code **)(*local_80[0] + 0x50))();
      }
      FUN_1447a1fc0(plVar6);
      pcVar3 = *(code **)(*local_80[0] + 0x28);
      if (pcVar3 == FUN_14482841c) {
        plVar6 = local_80[0] + 3;
        if (local_80[0][5] != 0) {
          plVar6 = (longlong *)(local_80[0][5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar6 = local_80[0] + 2;
      }
      else {
        plVar6 = (longlong *)(*pcVar3)(local_80[0]);
      }
      if (plVar1 != plVar6) {
        iVar2 = (int)plVar6[1];
        pvVar4 = (void *)*plVar6;
        *(int *)(param_1 + 3) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
        }
        else {
          FUN_1446dd670(plVar1,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*plVar1,pvVar4,(longlong)iVar2 * 2);
          }
        }
      }
      if (local_80[0] != (longlong *)0x0) {
        (**(code **)(*local_80[0] + 0x10))();
      }
      FUN_1400020e8(plVar1,&DAT_149e01f5a,1);
      uVar8 = 0;
      uVar9 = (ulonglong)(*(int *)(param_2 + 1) - 1);
      if (*(int *)(param_2 + 1) == 0) {
        uVar9 = uVar8;
      }
      FUN_1400020e8(plVar1,*param_2,uVar9);
      FUN_1400020e8(plVar1,&DAT_149e01f5a,1);
      goto LAB_142afe3ec;
    }
  }
  else {
    local_98 = 0;
    FUN_144a38a52(param_2,&local_68,&PTR_DAT_14c7585f0,3);
  }
  FUN_14706a5a6(&local_68);
  if (*(char *)((longlong)param_1 + 0x2a) == '\x01') {
    if ((longlong)(int)uStack_60 != 0) {
      lVar10 = (longlong)(int)uStack_60 << 4;
      plVar6 = local_68;
      do {
        FUN_140002184(plVar6,10);
        plVar6 = plVar6 + 2;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
  }
  FUN_14706a824(param_1,&local_58,&local_68);
  FUN_14706a8de(param_1,&local_58);
  if (*(char *)(param_1 + 5) == '\x01') {
    if (param_1 != param_2 && iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 1);
      pvVar4 = (void *)*param_2;
      *(int *)(param_1 + 1) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*param_1,pvVar4,(longlong)iVar2 * 2);
        }
      }
    }
  }
  else {
    FUN_14020fad6(param_1,&DAT_149dfb77a);
    param_1[4] = 0;
  }
  if (*(char *)((longlong)param_1 + 0x29) == '\x01') {
    FUN_14706a48c(param_1);
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 5));
  FUN_1447a1747(local_58,(ulonglong)local_50 & 0xffffffff);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_142afe3ec:
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 142afe57a FUN_142afe57a body=109 status=ok
// SIG undefined FUN_142afe57a(void)

void FUN_142afe57a(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a157870;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c99f9e8,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afe5e8 FUN_142afe5e8 body=197 status=ok
// SIG undefined FUN_142afe5e8(void)

void FUN_142afe5e8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xa0) != '\x01') goto LAB_142afe64b;
  local_38 = 0;
  uStack_30 = 0;
  lVar1 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  if (*(int *)(lVar1 + 8) < 1) {
LAB_142afe626:
    (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
              (*(longlong **)(param_1 + 200),param_2,&local_38);
  }
  else {
    uVar2 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    FUN_14706c928(param_1 + 0x38,&local_48,uVar2);
    local_38 = local_48;
    uStack_30 = CONCAT44(local_3c,local_40);
    if (local_40 != 0) goto LAB_142afe626;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_142afe64b:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142afe6ae FUN_142afe6ae body=608 status=ok
// SIG undefined FUN_142afe6ae(void)

void FUN_142afe6ae(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x90) == '\x01') && (*(longlong *)(param_1 + 0x80) != 0)) {
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))();
    FUN_140212f8e(&local_58);
    if (local_58 <= *plVar8) {
      uVar9 = (**(code **)(*(longlong *)*param_2 + 0x48))();
      cVar6 = FUN_14706cd5a(param_1 + 0x28,uVar9);
      if (cVar6 == '\0') {
        uVar9 = (**(code **)(*(longlong *)*param_2 + 0x48))();
        FUN_14706cdb2(param_1 + 0x28,uVar9,param_3);
        plVar8 = *(longlong **)(param_1 + 0x80);
        plStack_50 = *(longlong **)(param_1 + 0x10);
        if (plStack_50 == (longlong *)0x0) {
LAB_142afe885:
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
          bVar10 = true;
        }
        else {
          iVar7 = (int)plStack_50[1];
          do {
            if (iVar7 == 0) goto LAB_142afe885;
            LOCK();
            iVar5 = (int)plStack_50[1];
            bVar10 = iVar7 == iVar5;
            if (bVar10) {
              *(int *)(plStack_50 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar10);
          local_58 = *(longlong *)(param_1 + 8) + 8;
          if (*(longlong *)(param_1 + 8) == 0) {
            local_58 = 0;
          }
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
          bVar10 = false;
        }
        plVar3 = plStack_50;
        uVar9 = (**(code **)(*(longlong *)*param_2 + 0x48))();
        (**(code **)(*plVar8 + 0x28))(plVar8,uVar9,&local_58);
        plVar8 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (!bVar10) {
          LOCK();
          plVar8 = plVar3 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
      }
      puVar4 = *(undefined8 **)(param_1 + 0x80);
      plStack_50 = *(longlong **)(param_1 + 0x10);
      if (plStack_50 == (longlong *)0x0) {
LAB_142afe793:
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        bVar10 = true;
      }
      else {
        iVar7 = (int)plStack_50[1];
        do {
          if (iVar7 == 0) goto LAB_142afe793;
          LOCK();
          iVar5 = (int)plStack_50[1];
          bVar10 = iVar7 == iVar5;
          if (bVar10) {
            *(int *)(plStack_50 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar10);
        local_58 = *(longlong *)(param_1 + 8) + 0x10;
        if (*(longlong *)(param_1 + 8) == 0) {
          local_58 = 0;
        }
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        bVar10 = false;
      }
      plVar8 = plStack_50;
      local_60 = 0;
      uVar9 = (**(code **)(*(longlong *)*param_2 + 0x30))();
      local_68 = &local_58;
      (**(code **)*puVar4)(puVar4,param_2,uVar9,&local_60);
      plVar3 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (!bVar10) {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142afe910 FUN_142afe910 body=496 status=ok
// SIG undefined FUN_142afe910(void)

void FUN_142afe910(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar7 = FUN_14001cc68(200,0x10);
  uVar6 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
  FUN_140212f8e(&local_88);
  local_80 = *param_4 + local_88;
  (*(code *)**(undefined8 **)*param_5)((undefined8 *)*param_5,local_98);
  local_a8 = &local_80;
  local_a0 = uVar6;
  FUN_14706ce1a(lVar7,param_2,local_98,param_3);
  local_78 = lVar7;
  local_70 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_70[1] = (longlong)&DAT_100000001;
  *local_70 = (longlong)&PTR_FUN_14a158470;
  local_70[2] = lVar7;
  FUN_14706ec5a(*(undefined8 *)(lVar4 + 0x148),&local_78);
  local_68 = FUN_142b00ee6;
  local_60 = 0;
  FUN_147070088(&local_58,lVar4,&local_68,&local_78);
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
  FUN_14009d848(puVar8 + 1,&local_58);
  LOCK();
  puVar3 = *(undefined8 **)(lVar4 + 0x110);
  *(undefined8 **)(lVar4 + 0x110) = puVar8;
  UNLOCK();
  *puVar3 = puVar8;
  (**(code **)(**(longlong **)(lVar4 + 0x158) + 0x10))();
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142afeaa5;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142afeaa5:
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afeb02 FUN_142afeb02 body=288 status=ok
// SIG undefined FUN_142afeb02(void)

void FUN_142afeb02(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      cVar3 = (**(code **)*puVar1)(puVar1,param_2,param_3);
      if (cVar3 == '\0') goto LAB_142afeb40;
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    local_48 = FUN_142b000ec;
    local_40 = 0;
    local_58 = param_3;
    FUN_14707048e(&local_38,lVar2,&local_48,param_2);
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,8);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    FUN_14009d848(puVar4 + 1,&local_38);
    LOCK();
    puVar1 = *(undefined8 **)(lVar2 + 0x110);
    *(undefined8 **)(lVar2 + 0x110) = puVar4;
    UNLOCK();
    *puVar1 = puVar4;
    (**(code **)(**(longlong **)(lVar2 + 0x158) + 0x10))();
    if (local_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_142afeb40;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_142afeb40:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afec24 FUN_142afec24 body=683 status=ok
// SIG undefined FUN_142afec24(void)

void FUN_142afec24(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7,undefined8 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [32];
  undefined8 **local_118;
  undefined1 *local_110;
  longlong *local_108;
  undefined1 local_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  longlong local_b8 [3];
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  code *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar5 = *(longlong *)(param_1 + 0x28);
  local_d8 = param_2;
  local_d0 = param_3;
  uVar6 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
  FUN_140212f8e(local_b8 + 2);
  local_a0 = *param_6 + local_b8[2];
  local_b8[0] = 0;
  local_b8[1] = 0;
  (*(code *)**(undefined8 **)*param_8)((undefined8 *)*param_8,local_c8);
  plVar7 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a158490;
  local_118 = &local_78;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_e8 = param_7;
  local_f8 = 0;
  local_110 = local_c8;
  local_108 = local_b8;
  local_100 = param_4;
  local_f0 = &local_a0;
  local_e0 = uVar6;
  FUN_147071670(plVar7 + 2,local_d8,local_d0,param_5);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_98 = plVar7 + 2;
  local_90 = plVar7;
  FUN_14706ec5a(*(undefined8 *)(lVar5 + 0x148),&local_98);
  local_88 = FUN_142b00ee6;
  local_80 = 0;
  FUN_147070088(&local_78,lVar5,&local_88,&local_98);
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
  FUN_14009d848(puVar8 + 1,&local_78);
  LOCK();
  puVar4 = *(undefined8 **)(lVar5 + 0x110);
  *(undefined8 **)(lVar5 + 0x110) = puVar8;
  UNLOCK();
  *puVar4 = puVar8;
  (**(code **)(**(longlong **)(lVar5 + 0x158) + 0x10))();
  if ((int)uStack_70 != 0) {
    if (local_78 == (undefined8 *)0x0) goto LAB_142afee32;
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70 = uStack_70 & 0xffffffff00000000;
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142afee32:
  plVar3 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142afeed0 FUN_142afeed0 body=384 status=ok
// SIG undefined FUN_142afeed0(void)

void FUN_142afeed0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,5,0x10);
  local_40 = 5;
  *local_48 = &PTR_LAB_14a157fd0;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(local_48 + 1) = *param_2;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar5;
  *(undefined4 *)(local_48 + 2) = uVar6;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar7;
  local_48[3] = uVar3;
  local_48[4] = lVar4;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[5] = lVar9;
  *local_48 = &PTR_FUN_14a157f60;
  local_48[6] = lVar2;
  local_48[7] = FUN_140853cb0;
  *(undefined4 *)(local_48 + 8) = 0;
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
  FUN_14009d848(puVar8 + 1,&local_48);
  LOCK();
  puVar1 = *(undefined8 **)(lVar2 + 0x110);
  *(undefined8 **)(lVar2 + 0x110) = puVar8;
  UNLOCK();
  *puVar1 = puVar8;
  (**(code **)(**(longlong **)(lVar2 + 0x158) + 0x10))();
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_142aff012;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142aff012:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aff052 FUN_142aff052 body=631 status=ok
// SIG undefined FUN_142aff052(void)

void FUN_142aff052(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = *(longlong *)(param_1 + 0x28);
  local_a0 = param_3;
  uVar6 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
  FUN_140212f8e(&local_88);
  local_80 = *param_8 + local_88;
  (*(code *)**(undefined8 **)*param_10)((undefined8 *)*param_10,local_98);
  plVar7 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a158490;
  local_b8 = param_9;
  local_d8 = param_7;
  local_e8 = param_6;
  local_d0 = 2;
  local_e0 = local_98;
  local_c8 = param_4;
  local_c0 = &local_80;
  local_b0 = uVar6;
  FUN_147071670(plVar7 + 2,param_2,local_a0,param_5);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_78 = plVar7 + 2;
  local_70 = plVar7;
  FUN_14706ec5a(*(undefined8 *)(lVar5 + 0x148),&local_78);
  local_68 = FUN_142b00ee6;
  local_60 = 0;
  FUN_147070088(&local_58,lVar5,&local_68,&local_78);
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
  FUN_14009d848(puVar8 + 1,&local_58);
  LOCK();
  puVar4 = *(undefined8 **)(lVar5 + 0x110);
  *(undefined8 **)(lVar5 + 0x110) = puVar8;
  UNLOCK();
  *puVar4 = puVar8;
  (**(code **)(**(longlong **)(lVar5 + 0x158) + 0x10))();
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142aff246;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142aff246:
  plVar3 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aff2ca FUN_142aff2ca body=622 status=ok
// SIG undefined FUN_142aff2ca(void)

undefined8 *
FUN_142aff2ca(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_4 == 0) {
LAB_142aff4f6:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  plVar10 = *(longlong **)(param_1 + 0x38);
  if (plVar10 != (longlong *)0x0) {
    cVar8 = (**(code **)(*plVar10 + 0x18))(plVar10,param_3,param_4);
    if (cVar8 == '\0') goto LAB_142aff4f6;
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar9 = &PTR_LAB_14a158040;
  *(undefined1 *)(puVar9 + 1) = 1;
  uVar5 = *(undefined4 *)((longlong)param_4 + 4);
  lVar4 = param_4[1];
  uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(int *)((longlong)puVar9 + 0xc) = (int)*param_4;
  *(undefined4 *)(puVar9 + 2) = uVar5;
  *(int *)((longlong)puVar9 + 0x14) = (int)lVar4;
  *(undefined4 *)(puVar9 + 3) = uVar6;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = *param_5;
  puVar9[4] = *param_3;
  lVar4 = param_3[1];
  puVar9[5] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14a1584b0;
  plVar10[2] = (longlong)puVar9;
  lVar4 = *(longlong *)(param_1 + 0x28);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  *local_50 = &PTR_LAB_14a1580f0;
  local_50[1] = puVar9;
  local_50[2] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_50[3] = lVar12;
  *local_50 = &PTR_FUN_14a158080;
  local_50[4] = lVar4;
  local_50[5] = FUN_1408539f2;
  *(undefined4 *)(local_50 + 6) = 0;
  puVar11 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar11 = 0;
  puVar11[1] = 0;
  *(undefined4 *)(puVar11 + 2) = 0;
  FUN_14009d848(puVar11 + 1,&local_50);
  LOCK();
  puVar3 = *(undefined8 **)(lVar4 + 0x110);
  *(undefined8 **)(lVar4 + 0x110) = puVar11;
  UNLOCK();
  *puVar3 = puVar11;
  (**(code **)(**(longlong **)(lVar4 + 0x158) + 0x10))();
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_142aff4b2;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142aff4b2:
  *param_2 = puVar9;
  param_2[1] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142aff53a FUN_142aff53a body=257 status=ok
// SIG undefined FUN_142aff53a(void)

void FUN_142aff53a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    local_48 = FUN_142b00710;
    local_40 = 0;
    local_58 = param_3;
    FUN_14707048e(&local_38,lVar2,&local_48,param_2);
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    FUN_14009d848(puVar3 + 1,&local_38);
    LOCK();
    puVar1 = *(undefined8 **)(lVar2 + 0x110);
    *(undefined8 **)(lVar2 + 0x110) = puVar3;
    UNLOCK();
    *puVar1 = puVar3;
    (**(code **)(**(longlong **)(lVar2 + 0x158) + 0x10))();
    if (local_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_142aff557;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_142aff557:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aff63c FUN_142aff63c body=382 status=ok
// SIG undefined FUN_142aff63c(void)

void FUN_142aff63c(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    cVar8 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
    if (cVar8 == '\0') goto LAB_142aff77f;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  local_30 = 4;
  *local_38 = &PTR_LAB_14a1581d0;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(local_38 + 1) = *param_2;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar4;
  *(undefined4 *)(local_38 + 2) = uVar5;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar6;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_38[3] = lVar10;
  *local_38 = &PTR_FUN_14a158160;
  local_38[4] = lVar3;
  local_38[5] = FUN_140853e16;
  *(undefined4 *)(local_38 + 6) = 0;
  puVar9 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)(puVar9 + 2) = 0;
  FUN_14009d848(puVar9 + 1,&local_38);
  LOCK();
  puVar1 = *(undefined8 **)(lVar3 + 0x110);
  *(undefined8 **)(lVar3 + 0x110) = puVar9;
  UNLOCK();
  *puVar1 = puVar9;
  (**(code **)(**(longlong **)(lVar3 + 0x158) + 0x10))();
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_142aff77f;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142aff77f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aff7bc FUN_142aff7bc body=429 status=ok
// SIG undefined FUN_142aff7bc(void)

void FUN_142aff7bc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    if (plVar2 != (longlong *)0x0) {
      cVar8 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
      if (cVar8 == '\0') goto LAB_142aff92b;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      UNLOCK();
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,5,0x10);
    local_40 = 5;
    *local_48 = &PTR_LAB_14a1582b0;
    local_48[1] = uVar4;
    local_48[2] = lVar5;
    uVar6 = *(undefined4 *)((longlong)param_3 + 4);
    lVar5 = param_3[1];
    uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(int *)(local_48 + 3) = (int)*param_3;
    *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
    *(int *)(local_48 + 4) = (int)lVar5;
    *(undefined4 *)((longlong)local_48 + 0x24) = uVar7;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_48[5] = lVar10;
    *local_48 = &PTR_FUN_14a158240;
    local_48[6] = lVar3;
    local_48[7] = FUN_142b00a6e;
    *(undefined4 *)(local_48 + 8) = 0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x18,8);
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    FUN_14009d848(puVar9 + 1,&local_48);
    LOCK();
    puVar1 = *(undefined8 **)(lVar3 + 0x110);
    *(undefined8 **)(lVar3 + 0x110) = puVar9;
    UNLOCK();
    *puVar1 = puVar9;
    (**(code **)(**(longlong **)(lVar3 + 0x158) + 0x10))();
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_142aff92b;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_142aff92b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aff96a FUN_142aff96a body=1921 status=ok
// SIG undefined FUN_142aff96a(void)

void FUN_142aff96a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)*param_2;
  lVar8 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (lVar8 != 0) {
    puVar9 = (uint *)(**(code **)(*plVar4 + 0x20))(plVar4);
    if ((((puVar9[1] != 0) && (uVar12 = *puVar9, -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)
        ) && ((lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8), lVar8 != 0 &&
              (*(uint *)(lVar8 + 0x10) == puVar9[1])))) {
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      lVar8 = (**(code **)(*(longlong *)*param_2 + 0x30))();
      if (*(int *)(lVar8 + 8) < 1) {
        FUN_14706e08c(*param_2,&local_58);
        uVar12 = (uint)((ulonglong)local_50 >> 0x10);
        uVar13 = (uint)local_50 & 0xffff;
        uVar7 = (uint)((ulonglong)local_58 >> 0x10);
        uVar18 = (uint)local_58 & 0xffff;
        uVar7 = ((uint)local_58 << 0x10 | uVar18) + (int)((ulonglong)local_58 >> 0x20) +
                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4);
        uVar10 = FUN_141323356(param_1 + 0xb0,
                               (uVar7 >> 2) + 0x9e3779b9 +
                               ((uint)local_50 << 0x10 | uVar13) +
                               (int)((ulonglong)local_50 >> 0x20) +
                               (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar13 >> 4) + uVar7 * 0x40 ^
                               uVar7,&local_58);
        FUN_14706dec8(uVar10,param_2,&local_88);
        uVar12 = (uint)((ulonglong)DAT_14c99f9f8 >> 0x10);
        uVar13 = (uint)DAT_14c99f9f8 & 0xffff;
        uVar7 = (uint)((ulonglong)DAT_14c99f9f0 >> 0x10);
        uVar18 = (uint)DAT_14c99f9f0 & 0xffff;
        uVar7 = ((uint)DAT_14c99f9f0 << 0x10 | uVar18) + (int)((ulonglong)DAT_14c99f9f0 >> 0x20) +
                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4);
        uVar10 = FUN_1460183e6(param_1 + 0xb0,
                               (uVar7 >> 2) + 0x9e3779b9 +
                               ((uint)DAT_14c99f9f8 << 0x10 | uVar13) +
                               (int)((ulonglong)DAT_14c99f9f8 >> 0x20) +
                               (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar13 >> 4) + uVar7 * 0x40 ^
                               uVar7);
        FUN_14706dec8(uVar10,param_2,&local_88);
      }
      else {
        FUN_14706dd22(param_1,param_2,&local_88);
      }
      uVar16 = 0;
      if ((longlong)(int)uStack_80 != 0) {
        puVar15 = local_88 + (longlong)(int)uStack_80 * 2;
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar1 = (undefined8 *)(lVar8 + 0x308);
        local_90 = 0x527800b400;
        local_98 = (longlong *)(lVar8 + 0x2b8);
        puVar14 = local_88;
        local_a0 = puVar15;
        do {
          iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
          if (iVar6 != 0xff) {
            puVar9 = (uint *)*puVar1;
            if (puVar9 != (uint *)0x0) goto LAB_142affca2;
            do {
              uVar12 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar12 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar12 | 1;
                __tlregdtor(&LAB_142b012af);
              }
              puVar11 = *(undefined4 **)(lVar8 + 0x310);
              *(undefined8 *)(lVar8 + 0x310) = 0;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar11 = 0xffffffff;
              *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
              puVar11[0x12] = 0;
              *puVar1 = puVar11;
              FUN_140217a48(puVar1);
              puVar9 = (uint *)*puVar1;
LAB_142affca2:
              uVar16 = *(longlong *)(puVar9 + 0x10) + 7;
              uVar12 = puVar9[0x12];
              while( true ) {
                puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
                if (puVar17 + 0x1c <= puVar9 + 0x4000) {
                  *(undefined8 **)(puVar9 + 0x10) = puVar17 + 0x1c;
                  puVar9[0x12] = uVar12 + 1;
                  FUN_1447247dc(puVar17,0);
                  *puVar17 = &PTR_FUN_14a1584e8;
                  local_58 = *(undefined8 *)(param_1 + 0x148);
                  local_50 = *(longlong **)(param_1 + 0x150);
                  if (local_50 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                    UNLOCK();
                  }
                  local_68 = *puVar14;
                  local_60 = puVar14[1];
                  if (local_60 != 0) {
                    LOCK();
                    *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
                    UNLOCK();
                  }
                  local_78 = *param_2;
                  local_70 = param_2[1];
                  if (local_70 != 0) {
                    LOCK();
                    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
                    UNLOCK();
                  }
                  local_a8 = &local_58;
                  FUN_14706d642(puVar17 + 0x15,iVar6,&local_78,&local_68);
                  uVar12 = *(uint *)(puVar17 + 0x19);
                  if (((ulonglong)uVar12 & 0xff) == 0xff) {
                    uVar7 = uVar12 >> 10 & 3;
                    iVar6 = 0;
                    if ((uVar12 >> 9 & 1) == 0 || uVar7 < 2) {
                      uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
                      iVar6 = 0;
                    }
                    else {
                      uVar16 = 2;
                    }
                  }
                  else {
                    iVar6 = (uVar12 >> 7 & 2 | uVar12 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar12 & 0xff) * 4);
                    uVar16 = 5;
                  }
                  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
                  }
                  puVar15 = local_a0;
                  puVar17[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar17[9] = puVar17;
                  puVar17[10] = puVar17;
                  lVar5 = *local_98;
                  if (lVar5 == 0) {
                    if ((char)uVar16 == '\x06') {
                      uVar16 = 1;
                    }
                    uVar10 = 0;
                  }
                  else {
                    if ((char)uVar16 == '\x06') {
                      uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
                    }
                    uVar10 = *(undefined8 *)(lVar5 + 0x30);
                  }
                  puVar17[0xf] = uVar10;
                  puVar17[0x10] = (uVar16 << 0x3b) + local_90 | 0xc000000000000000;
                  *(int *)((longlong)puVar17 + 0x1c) = iVar6;
                  if (puVar17 == (undefined8 *)0x0) {
                    local_58 = CONCAT71(local_58._1_7_,1);
                    FUN_1447439e4(0,&local_58);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                    UNLOCK();
                    local_58 = CONCAT71(local_58._1_7_,1);
                    FUN_1447439e4(puVar17,&local_58);
                    LOCK();
                    piVar3 = (int *)(puVar17 + 1);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)*puVar17)(puVar17,1);
                    }
                  }
                  goto LAB_142b0003c;
                }
                *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
                LOCK();
                uVar7 = *puVar9;
                *puVar9 = *puVar9 + uVar12 + 1;
                UNLOCK();
                if ((uVar7 ^ uVar12) != 0xffffffff) break;
                puVar9 = (uint *)*puVar1;
                *puVar9 = 0xffffffff;
                *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
                puVar9[0x12] = 0;
                *puVar1 = puVar9;
                uVar16 = (longlong)puVar9 + 0x5f;
                uVar12 = 0;
              }
            } while( true );
          }
          uVar10 = *(undefined8 *)(param_1 + 0x148);
          local_58 = *puVar14;
          plVar4 = (longlong *)puVar14[1];
          local_50 = plVar4;
          if (plVar4 == (longlong *)0x0) {
            FUN_14706d8f4(uVar10,param_2,&local_58,0);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            FUN_14706d8f4(uVar10,param_2,&local_58,0);
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
          }
          (**(code **)(*(longlong *)*puVar14 + 0x20))((longlong *)*puVar14,param_2);
          uVar10 = *(undefined8 *)(param_1 + 0x148);
          local_58 = *puVar14;
          plVar4 = (longlong *)puVar14[1];
          local_50 = plVar4;
          if (plVar4 == (longlong *)0x0) {
            FUN_14706dadc(uVar10,param_2,&local_58);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            FUN_14706dadc(uVar10,param_2,&local_58);
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
          }
LAB_142b0003c:
          puVar14 = puVar14 + 2;
        } while (puVar14 != puVar15);
        uVar16 = uStack_80 & 0xffffffff;
      }
      FUN_14707188c(local_88,uVar16);
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b000ec FUN_142b000ec body=345 status=ok
// SIG undefined FUN_142b000ec(void)

void FUN_142b000ec(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = *param_3;
  uVar3 = param_3[1];
  uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar9 = (uint)uVar3 & 0xffff;
  uVar7 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar10 = (uint)uVar8 & 0xffff;
  uVar7 = ((uint)uVar8 << 0x10 | uVar10) + (int)((ulonglong)uVar8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar10 >> 4);
  uVar8 = FUN_147072048(param_1 + 0x10,
                        ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4) + uVar7 * 0x40 +
                        (uVar7 >> 2) + 0x9e3779b9 ^ uVar7);
  local_48 = *param_2;
  local_40 = (longlong *)param_2[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_147072688(uVar8,&local_48);
  plVar6 = local_40;
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
  FUN_14706e1d6(*(undefined8 *)(param_1 + 0x148),param_2);
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b0025c FUN_142b0025c body=1203 status=ok
// SIG undefined FUN_142b0025c(void)

void FUN_142b0025c(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  param_3 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar2 = (undefined8 *)(lVar4 + 0x308);
  local_70 = (undefined8 *)(lVar4 + 0x310);
  local_60 = 0x527800b400;
  local_68 = (longlong *)(lVar4 + 0x2b8);
  uVar17 = 0;
  local_78 = param_2;
  do {
    if (*(int *)(param_1 + 0x108) <= (int)uVar17) break;
    lVar4 = *plVar1;
    plVar16 = *(longlong **)(lVar4 + 8 + (ulonglong)uVar17 * 0x10);
    bVar6 = true;
    if (plVar16 == (longlong *)0x0) {
LAB_142b00369:
      plVar16 = (longlong *)0x0;
LAB_142b00370:
      FUN_147072ff6(plVar1,uVar17);
      FUN_147073056(plVar1);
      uVar17 = uVar17 - 1;
      uVar18 = uVar17;
      if (!bVar6) goto LAB_142b00344;
    }
    else {
      iVar9 = (int)plVar16[1];
      do {
        if (iVar9 == 0) goto LAB_142b00369;
        LOCK();
        iVar8 = (int)plVar16[1];
        bVar19 = iVar9 == iVar8;
        if (bVar19) {
          *(int *)(plVar16 + 1) = iVar9 + 1;
          iVar8 = iVar9;
        }
        iVar9 = iVar8;
        UNLOCK();
      } while (!bVar19);
      plVar5 = *(longlong **)(lVar4 + (ulonglong)uVar17 * 0x10);
      if (plVar5 == (longlong *)0x0) {
        bVar6 = false;
        goto LAB_142b00370;
      }
      iVar9 = (**(code **)(*plVar5 + 8))(plVar5);
      if (iVar9 != 0xff) {
        local_79 = (undefined1)param_3;
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_142b0041a;
        do {
          puVar15 = local_70;
          uVar18 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar18 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar18 | 1;
            __tlregdtor(&LAB_142b012af);
          }
          puVar11 = (undefined4 *)*puVar15;
          *puVar15 = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_142b0041a:
          uVar14 = *(longlong *)(puVar12 + 0x10) + 7;
          uVar18 = puVar12[0x12];
          while( true ) {
            puVar15 = (undefined8 *)(uVar14 & 0xfffffffffffffff8);
            if (puVar15 + 0x1b <= puVar12 + 0x4000) {
              *(undefined8 **)(puVar12 + 0x10) = puVar15 + 0x1b;
              puVar12[0x12] = uVar18 + 1;
              FUN_1447247dc(puVar15,0);
              *puVar15 = &PTR_FUN_14a1584f8;
              uVar13 = *local_78;
              uVar7 = local_78[1];
              LOCK();
              *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
              UNLOCK();
              *(int *)(puVar15 + 0x15) = iVar9;
              puVar15[0x16] = plVar5;
              puVar15[0x17] = plVar16;
              LOCK();
              *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
              UNLOCK();
              local_58._0_4_ = (undefined4)uVar13;
              local_58._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
              uStack_50._0_4_ = (undefined4)uVar7;
              uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
              *(undefined4 *)(puVar15 + 0x18) = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar15 + 0xc4) = local_58._4_4_;
              *(undefined4 *)(puVar15 + 0x19) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar15 + 0xcc) = uStack_50._4_4_;
              *(undefined1 *)(puVar15 + 0x1a) = local_79;
              LOCK();
              piVar3 = (int *)((longlong)plVar16 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              local_58 = uVar13;
              uStack_50 = uVar7;
              if (*piVar3 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
              uVar18 = *(uint *)(puVar15 + 0x15);
              if (((ulonglong)uVar18 & 0xff) == 0xff) {
                uVar10 = uVar18 >> 10 & 3;
                iVar9 = 0;
                if ((uVar18 >> 9 & 1) == 0 || uVar10 < 2) {
                  uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
                  iVar9 = 0;
                }
                else {
                  uVar14 = 2;
                }
              }
              else {
                iVar9 = (uVar18 >> 7 & 2 | uVar18 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar18 & 0xff) * 4);
                uVar14 = 5;
              }
              if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
              }
              puVar15[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar15[9] = puVar15;
              puVar15[10] = puVar15;
              lVar4 = *local_68;
              if (lVar4 == 0) {
                if ((char)uVar14 == '\x06') {
                  uVar14 = 1;
                }
                uVar13 = 0;
              }
              else {
                if ((char)uVar14 == '\x06') {
                  uVar14 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                }
                uVar13 = *(undefined8 *)(lVar4 + 0x30);
              }
              puVar15[0xf] = uVar13;
              puVar15[0x10] = (uVar14 << 0x3b) + local_60 | 0xc000000000000000;
              *(int *)((longlong)puVar15 + 0x1c) = iVar9;
              if (puVar15 == (undefined8 *)0x0) {
                local_58 = CONCAT71(local_58._1_7_,1);
                FUN_1447439e4(0,&local_58);
              }
              else {
                LOCK();
                *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
                UNLOCK();
                local_58 = CONCAT71(local_58._1_7_,1);
                FUN_1447439e4(puVar15,&local_58);
                LOCK();
                piVar3 = (int *)(puVar15 + 1);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)*puVar15)(puVar15,1);
                }
              }
              param_3 = CONCAT71((int7)((ulonglong)puVar15 >> 8),local_79);
              goto LAB_142b00344;
            }
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar10 = *puVar12;
            *puVar12 = *puVar12 + uVar18 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar18) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            uVar14 = (longlong)puVar12 + 0x5f;
            uVar18 = 0;
          }
        } while( true );
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,local_78,param_3 & 0xffffffff);
LAB_142b00344:
      LOCK();
      plVar5 = plVar16 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      uVar18 = uVar17;
      if ((int)*plVar5 == 0) {
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
    uVar17 = uVar18 + 1;
  } while (-2 < (int)uVar18);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b00710 FUN_142b00710 body=861 status=ok
// SIG undefined FUN_142b00710(void)

void FUN_142b00710(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar16 = *param_3;
  local_70 = param_2;
  local_68 = param_3;
  if (lVar16 == DAT_14c99f9f0) {
    lVar17 = param_3[1];
    if (lVar17 == DAT_14c99f9f8) {
      iVar3 = *(int *)(param_1 + 0x38);
      if (iVar3 == 0) {
        uVar15 = 1;
        uVar21 = 0;
        iVar14 = 0;
        iVar13 = 0;
      }
      else {
        puVar8 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x20);
        }
        uVar20 = *puVar8;
        if (uVar20 == 0) {
          iVar14 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar14 = iVar3 + -1;
          }
          uVar21 = 0;
          uVar11 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar11 = uVar21;
          }
          iVar14 = 0;
          do {
            if (uVar11 == uVar21) goto LAB_142b008ce;
            iVar14 = iVar14 + 0x20;
            uVar20 = puVar8[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar20 == 0);
        }
        else {
          uVar21 = 0;
          iVar14 = 0;
        }
        uVar15 = (ulonglong)(-uVar20 & uVar20);
        uVar11 = uVar15 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar13 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar13) {
          iVar13 = iVar3;
        }
      }
      if (iVar13 != iVar3) {
        uVar20 = 0xffffffff;
        do {
          lVar16 = *(longlong *)(param_1 + 0x10);
          local_60 = *local_70;
          local_58 = (longlong *)local_70[1];
          if (local_58 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
          }
          local_50 = &local_60;
          FUN_14707278c(lVar16 + (longlong)iVar13 * 0x28 + 0x10,&local_50);
          plVar5 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          uVar20 = uVar20 & ~(uint)uVar15;
          puVar8 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar8 = (uint *)(param_1 + 0x20);
          }
          iVar4 = *(int *)(param_1 + 0x38);
          iVar13 = (int)uVar21;
          lVar16 = (longlong)iVar13;
          uVar12 = puVar8[lVar16] & uVar20;
          if (uVar12 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar13 < iVar9) {
              lVar17 = 0;
              do {
                uVar12 = puVar8[lVar16 + lVar17 + 1];
                if (uVar12 != 0) {
                  uVar21 = (ulonglong)(iVar13 + (int)lVar17 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_142b00a26;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar16 != lVar17);
              uVar20 = 0xffffffff;
              iVar13 = iVar10;
            }
            uVar21 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar4;
          }
          else {
LAB_142b00a26:
            uVar15 = (ulonglong)(-uVar12 & uVar12);
            uVar11 = uVar15 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar13 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar13) {
              iVar13 = iVar4;
            }
          }
        } while (iVar13 != iVar3);
      }
      goto LAB_142b008ce;
    }
  }
  else {
    lVar17 = param_3[1];
  }
  uVar20 = (uint)((ulonglong)lVar17 >> 0x10);
  uVar19 = (uint)lVar17 & 0xffff;
  uVar12 = (uint)((ulonglong)lVar16 >> 0x10);
  uVar18 = (uint)lVar16 & 0xffff;
  uVar12 = ((uint)lVar16 << 0x10 | uVar18) + (int)((ulonglong)lVar16 >> 0x20) +
           (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar18 >> 4);
  uVar7 = FUN_147072048(param_1 + 0x10,
                        (uint)lVar17 * 0x10000 + uVar19 + (int)((ulonglong)lVar17 >> 0x20) +
                        (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar12 >> 2) + uVar12 * 0x40 +
                        (uVar19 >> 4) + 0x9e3779b9 ^ uVar12,param_3);
  local_60 = *local_70;
  local_58 = (longlong *)local_70[1];
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_50 = &local_60;
  FUN_14707278c(uVar7);
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_142b008ce:
  puVar6 = local_70;
  FUN_14706e354(*(undefined8 *)(param_1 + 0x148),local_70,local_68);
  plVar5 = (longlong *)puVar6[1];
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
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b00a6e FUN_142b00a6e body=1113 status=ok
// SIG undefined FUN_142b00a6e(void)

void FUN_142b00a6e(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  int local_9c;
  longlong local_98;
  uint local_8c;
  ulonglong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  uint *local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar12 = (longlong *)param_2[1];
  local_a8 = param_3;
  if (plVar12 != (longlong *)0x0) {
    iVar13 = (int)plVar12[1];
    do {
      if (iVar13 == 0) goto LAB_142b00b9e;
      LOCK();
      iVar14 = (int)plVar12[1];
      bVar22 = iVar13 == iVar14;
      if (bVar22) {
        *(int *)(plVar12 + 1) = iVar13 + 1;
        iVar14 = iVar13;
      }
      iVar13 = iVar14;
      UNLOCK();
    } while (!bVar22);
    local_80 = *param_2;
    local_78 = plVar12;
    local_70 = param_2;
    if (local_80 != 0) {
      local_68 = (uint *)(param_1 + 0xc0);
      uVar4 = *(uint *)(param_1 + 0xd8);
      if (uVar4 == 0) {
        uVar21 = 1;
        uVar15 = 0;
        iVar13 = 0;
        uVar9 = 0;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0xd0);
        if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
          puVar10 = local_68;
        }
        uVar9 = *puVar10;
        if (uVar9 == 0) {
          iVar13 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar13 = uVar4 - 1;
          }
          uVar15 = 0;
          uVar21 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar21 = uVar15;
          }
          iVar13 = 0;
          do {
            if (uVar21 == uVar15) goto LAB_142b00b77;
            iVar13 = iVar13 + 0x20;
            uVar9 = puVar10[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar15 = 0;
          iVar13 = 0;
        }
        uVar21 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar21 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar9 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar9) {
          uVar9 = uVar4;
        }
      }
      if (uVar9 != uVar4) {
        uVar20 = 0xffffffff;
        local_98 = param_1;
        local_88 = (ulonglong)uVar4;
        do {
          plVar12 = (longlong *)((longlong)(int)uVar9 * 0x28 + *(longlong *)(local_98 + 0xb0));
          local_9c = iVar13;
          local_8c = uVar20;
          local_60 = uVar15;
          if ((((*local_a8 == DAT_14c99f9f0) && (local_a8[1] == DAT_14c99f9f8)) ||
              ((*local_a8 == *plVar12 && (local_a8[1] == plVar12[1])))) && (0 < (int)plVar12[3])) {
            plVar2 = plVar12 + 2;
            uVar15 = 0;
            do {
              plVar5 = *(longlong **)(*plVar2 + uVar15 * 0x10);
              plVar6 = *(longlong **)(*plVar2 + 8 + uVar15 * 0x10);
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
              plVar11 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
              plVar7 = (longlong *)plVar11[1];
              if (plVar7 != (longlong *)0x0) {
                iVar13 = (int)plVar7[1];
                do {
                  if (iVar13 == 0) goto LAB_142b00cf9;
                  LOCK();
                  iVar14 = (int)plVar7[1];
                  bVar22 = iVar13 == iVar14;
                  if (bVar22) {
                    *(int *)(plVar7 + 1) = iVar13 + 1;
                    iVar14 = iVar13;
                  }
                  iVar13 = iVar14;
                  UNLOCK();
                } while (!bVar22);
                lVar16 = *plVar11;
                LOCK();
                plVar11 = plVar7 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*plVar7)(plVar7);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
                if (lVar16 == local_80) {
                  FUN_147071aae(plVar2,uVar15 & 0xffffffff);
                  FUN_147071b36(plVar2);
                  uVar8 = *(undefined8 *)(local_98 + 0x148);
                  local_58 = plVar5;
                  local_50 = plVar6;
                  if (plVar6 == (longlong *)0x0) {
                    FUN_14706e63a(uVar8,&local_58,local_a8);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                    UNLOCK();
                    FUN_14706e63a(uVar8,&local_58,local_a8);
                    if (plVar6 != (longlong *)0x0) {
                      LOCK();
                      plVar12 = plVar6 + 1;
                      *(int *)plVar12 = (int)*plVar12 + -1;
                      UNLOCK();
                      if ((int)*plVar12 == 0) {
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
                    LOCK();
                    plVar12 = plVar6 + 1;
                    *(int *)plVar12 = (int)*plVar12 + -1;
                    UNLOCK();
                    if ((int)*plVar12 == 0) {
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
                  break;
                }
              }
LAB_142b00cf9:
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
              uVar15 = uVar15 + 1;
            } while ((longlong)uVar15 < (longlong)(int)plVar12[3]);
          }
          uVar20 = local_8c & ~(uint)uVar21;
          puVar10 = *(uint **)(local_98 + 0xd0);
          if (*(uint **)(local_98 + 0xd0) == (uint *)0x0) {
            puVar10 = local_68;
          }
          uVar4 = *(uint *)(local_98 + 0xd8);
          iVar14 = (int)local_60;
          lVar16 = (longlong)iVar14;
          uVar9 = puVar10[lVar16] & uVar20;
          uVar15 = local_60;
          iVar13 = local_9c;
          if (uVar9 == 0) {
            iVar18 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar18 = uVar4 - 1;
            }
            iVar18 = iVar18 >> 5;
            iVar13 = local_9c + 0x20;
            iVar19 = iVar18;
            if (iVar18 < iVar14) {
              iVar19 = iVar14;
            }
            if (iVar14 < iVar18) {
              lVar17 = 0;
              do {
                uVar9 = puVar10[lVar16 + lVar17 + 1];
                if (uVar9 != 0) {
                  uVar20 = 0xffffffff;
                  uVar15 = (ulonglong)(iVar14 + (int)lVar17 + 1);
                  goto LAB_142b00dd0;
                }
                iVar13 = iVar13 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar19 - lVar16 != lVar17);
              uVar20 = 0xffffffff;
              lVar16 = (longlong)iVar19;
            }
            uVar15 = lVar16 + 1U & 0xffffffff;
            uVar9 = uVar4;
          }
          else {
LAB_142b00dd0:
            uVar21 = (ulonglong)(-uVar9 & uVar9);
            uVar3 = uVar21 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar9 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar4 <= (int)uVar9) {
              uVar9 = uVar4;
            }
          }
        } while (uVar9 != (uint)local_88);
      }
    }
LAB_142b00b77:
    param_2 = local_70;
    plVar2 = local_78;
    LOCK();
    plVar12 = local_78 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
LAB_142b00b9e:
    if (param_2[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_2[1] + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b00ee6 FUN_142b00ee6 body=568 status=ok
// SIG undefined FUN_142b00ee6(void)

void FUN_142b00ee6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14706e7ac(*(undefined8 *)(param_1 + 0x148));
  FUN_14706e08c(*param_2,&local_50);
  uVar5 = (uint)((ulonglong)local_48 >> 0x10);
  uVar11 = (uint)local_48 & 0xffff;
  uVar8 = (uint)((ulonglong)local_50 >> 0x10);
  uVar10 = (uint)local_50 & 0xffff;
  uVar8 = ((uint)local_50 << 0x10 | uVar10) + (int)((ulonglong)local_50 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4);
  plVar9 = (longlong *)
           FUN_147072894(param_1 + 0x10,
                         (uVar8 >> 2) +
                         ((uint)local_48 << 0x10 | uVar11) + (int)((ulonglong)local_48 >> 0x20) +
                         (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4) + uVar8 * 0x40 +
                         0x9e3779b9 ^ uVar8,&local_50);
  lVar6 = plVar9[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *plVar9;
    lVar12 = 0;
    do {
      cVar7 = (**(code **)(**(longlong **)(lVar3 + lVar12) + 0x10))
                        (*(longlong **)(lVar3 + lVar12),param_2);
      if (cVar7 != '\0') {
        uVar4 = *(undefined8 *)(param_1 + 0x148);
        local_50 = *(undefined8 *)(lVar3 + lVar12);
        plVar9 = *(longlong **)(lVar3 + 8 + lVar12);
        local_48 = plVar9;
        if (plVar9 == (longlong *)0x0) {
          FUN_14706e964(uVar4,param_2,&local_50);
          goto LAB_142b01016;
        }
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        FUN_14706e964(uVar4,param_2);
        goto LAB_142b010ec;
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar12);
  }
  if (*(char *)(param_1 + 0x160) == '\x01') {
    plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x68))();
    if (*(longlong *)(param_1 + 0x120) < *plVar9) {
      local_40 = *(longlong *)(param_1 + 0x138) + 1;
      *(longlong *)(param_1 + 0x138) = local_40;
      local_50 = *param_2;
      local_48 = (longlong *)param_2[1];
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      FUN_147072a2e(param_1 + 0x128,&local_50);
      plVar9 = local_48;
LAB_142b010ec:
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
      goto LAB_142b01016;
    }
  }
  FUN_142aff96a(param_1,param_2);
LAB_142b01016:
  plVar9 = (longlong *)param_2[1];
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b01120 FUN_142b01120 body=100 status=ok
// SIG undefined FUN_142b01120(void)

void FUN_142b01120(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000142b01178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b01184 FUN_142b01184 body=100 status=ok
// SIG undefined FUN_142b01184(void)

void FUN_142b01184(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000142b011dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b011e8 FUN_142b011e8 body=100 status=ok
// SIG undefined FUN_142b011e8(void)

void FUN_142b011e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000142b01240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b01258 FUN_142b01258 body=87 status=ok
// SIG undefined FUN_142b01258(void)

undefined8 * FUN_142b01258(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a1580f0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b012d6 FUN_142b012d6 body=282 status=ok
// SIG undefined FUN_142b012d6(void)

undefined8 * FUN_142b012d6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b012af);
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



// FUNCTION 142b013f0 FUN_142b013f0 body=282 status=ok
// SIG undefined FUN_142b013f0(void)

undefined8 * FUN_142b013f0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_142b012af);
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



// FUNCTION 142b0150e FUN_142b0150e body=357 status=ok
// SIG undefined FUN_142b0150e(void)

void FUN_142b0150e(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  uVar6 = (**(code **)(*(longlong *)param_1[1] + 8))();
  uVar5 = FUN_1447addd0(uVar6,0x10);
  plVar7 = (longlong *)FUN_14707321c(lVar3 + 0x78,uVar5,uVar6);
  if (*plVar7 != 0) goto LAB_142b01560;
  puVar8 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a1585a0;
  plVar9[2] = (longlong)puVar8;
  *plVar7 = (longlong)puVar8;
  plVar4 = (longlong *)plVar7[1];
  if (plVar9 == plVar4) {
    if (plVar9 == (longlong *)0x0) goto LAB_142b01560;
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_142b01560;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar9;
  }
  else {
    plVar7[1] = (longlong)plVar9;
    if (plVar4 == (longlong *)0x0) goto LAB_142b01560;
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_142b01560;
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
LAB_142b01560:
  (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],&local_30);
  *(undefined8 *)*plVar7 = local_30;
  *(longlong *)(*plVar7 + 0x18) = param_1[3];
  *(undefined8 *)(*plVar7 + 0x20) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b01674 FUN_142b01674 body=97 status=ok
// SIG undefined FUN_142b01674(void)

undefined8 * FUN_142b01674(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a158580;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 142b016dc FUN_142b016dc body=29 status=ok
// SIG undefined FUN_142b016dc(void)

void FUN_142b016dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b016fa FUN_142b016fa body=83 status=ok
// SIG undefined FUN_142b016fa(void)

undefined8 * FUN_142b016fa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a158580;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b0174e FUN_142b0174e body=618 status=ok
// SIG undefined FUN_142b0174e(void)

void FUN_142b0174e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  longlong *local_48;
  longlong **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_1;
  uVar8 = (**(code **)(*(longlong *)param_1[3] + 8))();
  uVar7 = FUN_1447addd0(uVar8,0x10);
  plVar9 = (longlong *)FUN_145955542(lVar4 + 200,uVar7,uVar8);
  if (*plVar9 != 0) goto LAB_142b01877;
  puVar10 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  *(undefined4 *)((longlong)puVar10 + 0x2c) = 0x80;
  *(undefined4 *)(puVar10 + 6) = 0xffffffff;
  puVar10[0xc] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = 0;
  plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a1585e0;
  plVar11[2] = (longlong)puVar10;
  *plVar9 = (longlong)puVar10;
  plVar12 = (longlong *)plVar9[1];
  if (plVar11 == plVar12) {
    if (plVar11 == (longlong *)0x0) goto LAB_142b01877;
    LOCK();
    plVar12 = plVar11 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_142b01877;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    plVar9[1] = (longlong)plVar11;
    if (plVar12 == (longlong *)0x0) goto LAB_142b01877;
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 != 0) goto LAB_142b01877;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar11 = plVar12;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
LAB_142b01877:
  plVar12 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14a158600;
  plVar11[2] = (longlong)plVar12;
  lVar5 = param_1[2];
  *plVar12 = param_1[1];
  plVar12[1] = lVar5;
  plVar12[2] = param_1[5];
  plVar12[3] = 0;
  lVar5 = *plVar9;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_40 = &local_60;
  local_60 = plVar12;
  local_58 = plVar11;
  local_48 = param_1 + 1;
  FUN_145a09680(lVar5,local_4c);
  plVar12 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  (*(code *)**(undefined8 **)param_1[3])((undefined8 *)param_1[3],&local_48);
  *(longlong **)(*plVar9 + 0x50) = local_48;
  bVar6 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
  *(byte *)(*plVar9 + 0x68) = bVar6 ^ 1;
  local_48 = param_1 + 1;
  local_40 = (longlong **)plVar9;
  FUN_145a20858(lVar4 + 8,&local_60,&local_48);
  if (plVar11 != (longlong *)0x0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b019ba FUN_142b019ba body=105 status=ok
// SIG undefined FUN_142b019ba(void)

undefined8 * FUN_142b019ba(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a1585c0;
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar3[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  return puVar3 + 1;
}



// FUNCTION 142b01a2a FUN_142b01a2a body=29 status=ok
// SIG undefined FUN_142b01a2a(void)

void FUN_142b01a2a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b01a48 FUN_142b01a48 body=83 status=ok
// SIG undefined FUN_142b01a48(void)

undefined8 * FUN_142b01a48(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1585c0;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 142b01ab4 FUN_142b01ab4 body=12 status=ok
// SIG undefined FUN_142b01ab4(void)

void FUN_142b01ab4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b01abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b01ac0 FUN_142b01ac0 body=29 status=ok
// SIG undefined FUN_142b01ac0(void)

undefined8 FUN_142b01ac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b01ade FUN_142b01ade body=924 status=ok
// SIG undefined FUN_142b01ade(void)

void FUN_142b01ade(longlong *param_1)

{
  double **ppdVar1;
  double **ppdVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  double **ppdVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  double *pdVar14;
  double *pdVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_98 [40];
  double *local_70;
  longlong *local_68;
  double *local_60;
  double **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_1;
  pdVar14 = (double *)param_1[1];
  plVar17 = (longlong *)(lVar5 + 0x118);
  ppdVar6 = (double **)param_1[2];
  local_60 = pdVar14;
  if (ppdVar6 == (double **)0x0) {
    local_58 = (double **)0x0;
  }
  else {
    LOCK();
    *(int *)(ppdVar6 + 1) = *(int *)(ppdVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(ppdVar6 + 1) = *(int *)(ppdVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(ppdVar6 + 1) = *(int *)(ppdVar6 + 1) + 1;
    UNLOCK();
    local_58 = ppdVar6;
    if (ppdVar6 != (double **)0x0) {
      LOCK();
      *(int *)(ppdVar6 + 1) = *(int *)(ppdVar6 + 1) + 1;
      UNLOCK();
      LOCK();
      ppdVar1 = ppdVar6 + 1;
      *(int *)ppdVar1 = *(int *)ppdVar1 + -1;
      UNLOCK();
      if (*(int *)ppdVar1 == 0) {
        (*(code *)**ppdVar6)(ppdVar6);
        LOCK();
        piVar3 = (int *)((longlong)ppdVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (*(code *)(*ppdVar6)[2])(ppdVar6);
        }
      }
    }
  }
  uVar10 = ((uint)((ulonglong)pdVar14 >> 0x14) & 0xffff ^ (uint)((ulonglong)pdVar14 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  iVar11 = FUN_147073a00(plVar17,uVar10 >> 0x10 ^ uVar10,&local_60);
  ppdVar1 = local_58;
  if (iVar11 == -1) {
    lVar19 = 0;
  }
  else {
    lVar19 = (longlong)iVar11 * 0x28 + *plVar17;
  }
  if (local_58 != (double **)0x0) {
    LOCK();
    ppdVar2 = local_58 + 1;
    *(int *)ppdVar2 = *(int *)ppdVar2 + -1;
    UNLOCK();
    if (*(int *)ppdVar2 == 0) {
      (*(code *)**local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)ppdVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*ppdVar1)[2])(ppdVar1);
      }
    }
  }
  if (ppdVar6 != (double **)0x0) {
    LOCK();
    ppdVar1 = ppdVar6 + 1;
    *(int *)ppdVar1 = *(int *)ppdVar1 + -1;
    UNLOCK();
    if (*(int *)ppdVar1 == 0) {
      (*(code *)**ppdVar6)(ppdVar6);
      LOCK();
      piVar3 = (int *)((longlong)ppdVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*ppdVar6)[2])(ppdVar6);
      }
    }
  }
  if (lVar19 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(longlong *)(lVar19 + 0x10);
    plVar17 = *(longlong **)(lVar19 + 0x18);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      goto LAB_142b01c26;
    }
  }
  plVar17 = (longlong *)0x0;
LAB_142b01c26:
  if (ppdVar6 != (double **)0x0) {
    LOCK();
    ppdVar1 = ppdVar6 + 1;
    *(int *)ppdVar1 = *(int *)ppdVar1 + -1;
    UNLOCK();
    if (*(int *)ppdVar1 == 0) {
      (*(code *)**ppdVar6)(ppdVar6);
      LOCK();
      piVar3 = (int *)((longlong)ppdVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*ppdVar6)[2])(ppdVar6);
      }
    }
  }
  if (lVar18 != 0) {
    uVar13 = (**(code **)(*(longlong *)param_1[3] + 8))();
    uVar12 = FUN_1447addd0(uVar13,0x10);
    pdVar14 = (double *)FUN_145955542(lVar5 + 200,uVar12,uVar13);
    dVar7 = *pdVar14;
    if (dVar7 != 0.0) {
      pdVar15 = (double *)FUN_14001cc68(0x38,0x10);
      *pdVar15 = 0.0;
      pdVar15[1] = 0.0;
      pdVar15[2] = 0.0;
      pdVar15[3] = 0.0;
      pdVar15[4] = 0.0;
      pdVar15[5] = 0.0;
      pdVar15[6] = 0.0;
      plVar16 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar16[1] = (longlong)&DAT_100000001;
      *plVar16 = (longlong)&PTR_FUN_14a158660;
      plVar16[2] = (longlong)pdVar15;
      *pdVar15 = (double)param_1[6] - *(double *)(lVar18 + 0x80);
      *(uint *)(pdVar15 + 1) = (uint)*(byte *)(param_1 + 5) * 2;
      dVar8 = pdVar14[1];
      if (dVar8 == 0.0) {
        pdVar15[2] = dVar7;
        pdVar15[3] = 0.0;
      }
      else {
        LOCK();
        *(int *)((longlong)dVar8 + 8) = *(int *)((longlong)dVar8 + 8) + 1;
        UNLOCK();
        plVar9 = (longlong *)pdVar15[3];
        pdVar15[2] = dVar7;
        pdVar15[3] = dVar8;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar9 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      uVar12 = (**(code **)(*(longlong *)param_1[3] + 0x10))();
      *(undefined4 *)(pdVar15 + 4) = uVar12;
      pdVar15[5] = (double)param_1[6];
      pdVar15[6] = 0.0;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_58 = &local_70;
      local_70 = pdVar15;
      local_68 = plVar16;
      local_60 = pdVar14;
      FUN_147073b56(lVar18 + 0x10,local_4c);
      plVar9 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_68 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      dVar7 = *pdVar14;
      iVar11 = *(int *)((longlong)dVar7 + 0x60);
      *(uint *)((longlong)dVar7 + 0x60) = iVar11 + 1U;
      if (*(uint *)((longlong)dVar7 + 100) < iVar11 + 1U) {
        FUN_147074292((longlong *)((longlong)dVar7 + 0x58),iVar11);
      }
      lVar5 = *(longlong *)((longlong)dVar7 + 0x58);
      *(longlong *)(lVar5 + (longlong)iVar11 * 0x10) = lVar18;
      *(longlong **)(lVar5 + 8 + (longlong)iVar11 * 0x10) = plVar17;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar16 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar3 = (int *)((longlong)plVar17 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b01e7c FUN_142b01e7c body=120 status=ok
// SIG undefined FUN_142b01e7c(void)

undefined8 * FUN_142b01e7c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a158640;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar3[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  puVar3[7] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 142b01efa FUN_142b01efa body=29 status=ok
// SIG undefined FUN_142b01efa(void)

void FUN_142b01efa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b01f18 FUN_142b01f18 body=121 status=ok
// SIG undefined FUN_142b01f18(void)

undefined8 * FUN_142b01f18(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a158640;
  plVar3 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b01f92 FUN_142b01f92 body=962 status=ok
// SIG undefined FUN_142b01f92(void)

void FUN_142b01f92(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *param_1;
  uVar3 = param_1[1];
  plVar9 = (longlong *)(lVar8 + 0x118);
  plVar12 = (longlong *)param_1[2];
  local_48 = uVar3;
  if (plVar12 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    local_40 = plVar12;
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
    }
  }
  uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_147073a00(plVar9,uVar4 >> 0x10 ^ uVar4,&local_48);
  plVar1 = local_40;
  if (iVar5 == -1) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)iVar5 * 0x28 + *plVar9;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if (plVar12 != (longlong *)0x0) {
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
  if (lVar11 == 0) {
    lVar13 = 0;
LAB_142b020d7:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    lVar13 = *(longlong *)(lVar11 + 0x10);
    puVar10 = *(undefined8 **)(lVar11 + 0x18);
    if (puVar10 == (undefined8 *)0x0) goto LAB_142b020d7;
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
  }
  if (plVar12 != (longlong *)0x0) {
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
  if (lVar13 == 0) goto LAB_142b0218a;
  plVar9 = (longlong *)(lVar8 + 200);
  uVar7 = (**(code **)(*(longlong *)param_1[3] + 8))();
  uVar6 = FUN_1447addd0(uVar7,0x10);
  iVar5 = FUN_1459555ca(plVar9,uVar6,uVar7);
  if ((iVar5 == -1) || (lVar8 = (longlong)iVar5 * 0x28 + *plVar9, lVar8 == 0)) goto LAB_142b0218a;
  uVar3 = *(ulonglong *)(lVar8 + 0x10);
  plVar9 = *(longlong **)(lVar8 + 0x18);
  if (plVar9 == (longlong *)0x0) {
    if (uVar3 == 0) goto LAB_142b0218a;
    local_40 = (longlong *)0x0;
    local_48 = uVar3;
LAB_142b02248:
    uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    iVar5 = FUN_147073ec8((longlong *)(lVar13 + 0x10),uVar4 >> 0x10 ^ uVar4,&local_48);
    plVar12 = local_40;
    if (iVar5 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)iVar5 * 0x28 + *(longlong *)(lVar13 + 0x10);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    if (lVar8 == 0) {
      plVar12 = (longlong *)0x0;
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)(lVar8 + 0x10);
      plVar12 = *(longlong **)(lVar8 + 0x18);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
    }
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
    if (lVar11 != 0) {
      *(longlong *)(lVar11 + 0x30) = param_1[5];
    }
    if (plVar12 != (longlong *)0x0) {
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
    if (plVar9 == (longlong *)0x0) goto LAB_142b0218a;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (uVar3 != 0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      local_48 = uVar3;
      local_40 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      goto LAB_142b02248;
    }
  }
  LOCK();
  plVar12 = plVar9 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_142b0218a:
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar10 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar2 = (int *)((longlong)puVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b0236c FUN_142b0236c body=122 status=ok
// SIG undefined FUN_142b0236c(void)

undefined8 * FUN_142b0236c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a158680;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  return puVar2 + 1;
}



// FUNCTION 142b023ec FUN_142b023ec body=29 status=ok
// SIG undefined FUN_142b023ec(void)

void FUN_142b023ec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b0240a FUN_142b0240a body=121 status=ok
// SIG undefined FUN_142b0240a(void)

undefined8 * FUN_142b0240a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a158680;
  plVar3 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b02484 FUN_142b02484 body=650 status=ok
// SIG undefined FUN_142b02484(void)

void FUN_142b02484(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = *param_1;
  uVar3 = param_1[1];
  plVar10 = (longlong *)(lVar9 + 0x118);
  plVar4 = (longlong *)param_1[2];
  local_48 = uVar3;
  if (plVar4 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_40 = plVar4;
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
  }
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar6 = FUN_147073a00(plVar10,uVar5 >> 0x10 ^ uVar5,&local_48);
  plVar1 = local_40;
  if (iVar6 == -1) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)iVar6 * 0x28 + *plVar10;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_40 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)(lVar11 + 0x10);
    puVar12 = *(undefined8 **)(lVar11 + 0x18);
    if (puVar12 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
      goto LAB_142b025ca;
    }
  }
  puVar12 = (undefined8 *)0x0;
LAB_142b025ca:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (lVar13 != 0) {
    *(undefined1 *)(lVar13 + 0x60) = 1;
    plVar10 = (longlong *)(lVar9 + 0x78);
    uVar8 = (**(code **)(*(longlong *)param_1[3] + 8))();
    uVar7 = FUN_1447addd0(uVar8,0x10);
    iVar6 = FUN_1470732a4(plVar10,uVar7,uVar8);
    if ((iVar6 != -1) && (lVar9 = (longlong)iVar6 * 0x28 + *plVar10, lVar9 != 0)) {
      lVar11 = *(longlong *)(lVar9 + 0x10);
      plVar10 = *(longlong **)(lVar9 + 0x18);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (lVar11 != 0) {
        iVar6 = *(int *)(lVar11 + 0x10);
        *(uint *)(lVar11 + 0x10) = iVar6 + 1U;
        if (*(uint *)(lVar11 + 0x14) < iVar6 + 1U) {
          FUN_147074292((longlong *)(lVar11 + 8),iVar6);
        }
        lVar9 = *(longlong *)(lVar11 + 8);
        *(longlong *)(lVar9 + (longlong)iVar6 * 0x10) = lVar13;
        *(undefined8 **)(lVar9 + 8 + (longlong)iVar6 * 0x10) = puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          UNLOCK();
        }
      }
      if (plVar10 != (longlong *)0x0) {
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
  }
  if (puVar12 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar12 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar12)(puVar12);
      LOCK();
      piVar2 = (int *)((longlong)puVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b02726 FUN_142b02726 body=122 status=ok
// SIG undefined FUN_142b02726(void)

undefined8 * FUN_142b02726(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a1586a0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  return puVar2 + 1;
}



// FUNCTION 142b027a6 FUN_142b027a6 body=29 status=ok
// SIG undefined FUN_142b027a6(void)

void FUN_142b027a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b027c4 FUN_142b027c4 body=121 status=ok
// SIG undefined FUN_142b027c4(void)

undefined8 * FUN_142b027c4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1586a0;
  plVar3 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b0283e FUN_142b0283e body=159 status=ok
// SIG undefined FUN_142b0283e(void)

void FUN_142b0283e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar8 = *param_1;
  uVar7 = (**(code **)(*(longlong *)param_1[1] + 8))();
  uVar5 = FUN_1447addd0(uVar7,0x10);
  iVar6 = FUN_1470732a4((longlong *)(lVar8 + 0x78),uVar5,uVar7);
  if ((iVar6 != -1) && (lVar8 = (longlong)iVar6 * 0x28 + *(longlong *)(lVar8 + 0x78), lVar8 != 0)) {
    lVar3 = *(longlong *)(lVar8 + 0x10);
    plVar4 = *(longlong **)(lVar8 + 0x18);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      *(longlong *)(lVar3 + 0x20) = param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x000142b028d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142b028de FUN_142b028de body=103 status=ok
// SIG undefined FUN_142b028de(void)

undefined8 * FUN_142b028de(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a1586c0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 142b0294c FUN_142b0294c body=29 status=ok
// SIG undefined FUN_142b0294c(void)

void FUN_142b0294c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b0296a FUN_142b0296a body=83 status=ok
// SIG undefined FUN_142b0296a(void)

undefined8 * FUN_142b0296a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1586c0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b029be FUN_142b029be body=281 status=ok
// SIG undefined FUN_142b029be(void)

void FUN_142b029be(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = *param_1;
  plVar5 = param_1 + 1;
  uVar6 = FUN_1448eb174(plVar5,0x10,0);
  iVar7 = FUN_145a20a2c((longlong *)(lVar8 + 8),uVar6,plVar5);
  if ((iVar7 != -1) && (lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(lVar8 + 8), lVar8 != 0)) {
    plVar2 = *(longlong **)(lVar8 + 0x10);
    plVar3 = *(longlong **)(lVar8 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      uVar6 = FUN_1448eb174(plVar5,0x10,0);
      iVar7 = FUN_1470738a8(plVar2,uVar6,plVar5);
      if ((iVar7 != -1) && (lVar8 = (longlong)iVar7 * 0x28 + *plVar2, lVar8 != 0)) {
        lVar4 = *(longlong *)(lVar8 + 0x10);
        plVar5 = *(longlong **)(lVar8 + 0x18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (lVar4 != 0) {
          *(longlong *)(lVar4 + 0x18) = param_1[3];
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
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x000142b02a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142b02ad8 FUN_142b02ad8 body=70 status=ok
// SIG undefined FUN_142b02ad8(void)

undefined8 * FUN_142b02ad8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a1586e0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142b02b24 FUN_142b02b24 body=29 status=ok
// SIG undefined FUN_142b02b24(void)

void FUN_142b02b24(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b02b42 FUN_142b02b42 body=29 status=ok
// SIG undefined FUN_142b02b42(void)

undefined8 FUN_142b02b42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b02b62 FUN_142b02b62 body=95 status=ok
// SIG undefined FUN_142b02b62(void)

undefined8 * FUN_142b02b62(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a158700;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar3[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 142b02bc8 FUN_142b02bc8 body=29 status=ok
// SIG undefined FUN_142b02bc8(void)

void FUN_142b02bc8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b02be6 FUN_142b02be6 body=83 status=ok
// SIG undefined FUN_142b02be6(void)

undefined8 * FUN_142b02be6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a158700;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b02c3a FUN_142b02c3a body=441 status=ok
// SIG undefined FUN_142b02c3a(void)

void FUN_142b02c3a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = *param_1;
  uVar4 = param_1[1];
  plVar5 = (longlong *)param_1[2];
  local_40 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_38 = plVar5;
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
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_147073a00((longlong *)(lVar9 + 0x118),uVar6 >> 0x10 ^ uVar6,&local_40);
  plVar1 = local_38;
  if (iVar7 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar7 * 0x28 + *(longlong *)(lVar9 + 0x118);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar9 + 0x10);
    puVar8 = *(undefined8 **)(lVar9 + 0x18);
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
      goto LAB_142b02d76;
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_142b02d76:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (lVar10 != 0) {
    *(longlong *)(lVar10 + 0x78) = param_1[3];
  }
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(puVar8 + 1);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar3 = (int *)((longlong)puVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b02e0a FUN_142b02e0a body=97 status=ok
// SIG undefined FUN_142b02e0a(void)

undefined8 * FUN_142b02e0a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a158720;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 142b02e72 FUN_142b02e72 body=29 status=ok
// SIG undefined FUN_142b02e72(void)

void FUN_142b02e72(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b02e90 FUN_142b02e90 body=83 status=ok
// SIG undefined FUN_142b02e90(void)

undefined8 * FUN_142b02e90(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a158720;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b02ee4 FUN_142b02ee4 body=1467 status=ok
// SIG undefined FUN_142b02ee4(void)

void FUN_142b02ee4(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  uVar9 = (**(code **)(*(longlong *)param_1[1] + 0x48))();
  uVar6 = FUN_1448eb174(uVar9,0x10,0);
  iVar7 = FUN_145a20a2c((longlong *)(lVar2 + 8),uVar6,uVar9);
  if ((iVar7 == -1) || (lVar10 = (longlong)iVar7 * 0x28 + *(longlong *)(lVar2 + 8), lVar10 == 0))
  goto LAB_142b02f83;
  lVar3 = *(longlong *)(lVar10 + 0x10);
  plVar4 = *(longlong **)(lVar10 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    plVar11 = (longlong *)FUN_14001cc68(0x98);
    memset(plVar11,0,0x88);
    *(undefined8 *)((longlong)plVar11 + 0x3c) = 0xffffffff00000080;
    plVar11[0xd] = 0;
    plVar11[0xe] = 0;
    plVar11[0x11] = 0;
    plVar11[0x12] = 0;
    plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14a158760;
    plVar12[2] = (longlong)plVar11;
    lVar10 = param_1[1];
    plVar17 = (longlong *)param_1[2];
    if (plVar17 == (longlong *)0x0) {
      *plVar11 = lVar10;
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      plVar14 = (longlong *)plVar11[1];
      *plVar11 = lVar10;
      if (plVar17 == plVar14) {
        LOCK();
        plVar14 = plVar17 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar10 = *plVar17;
            plVar14 = plVar17;
LAB_142b03498:
            (**(code **)(lVar10 + 0x10))(plVar14);
          }
        }
      }
      else {
        plVar11[1] = (longlong)plVar17;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar10 = *plVar14;
              goto LAB_142b03498;
            }
          }
        }
      }
    }
    *(undefined1 *)(plVar11 + 0xc) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar17 = (longlong *)plVar11[0xe];
    plVar11[0xd] = lVar3;
    plVar11[0xe] = (longlong)plVar4;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar17 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    plVar11[0xf] = 0;
    plVar11[0x10] = param_1[3];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_80 = param_1[1];
    local_78 = (longlong *)param_1[2];
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    local_60 = &local_80;
    uStack_58 = &local_70;
    local_70 = plVar11;
    local_68 = plVar12;
    FUN_1470746a6(lVar2 + 0x118,local_4c);
    plVar17 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_78 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    plVar17 = local_68;
    local_90 = plVar11;
    local_88 = plVar12;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_68 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    FUN_14706e08c(param_1[1],&local_60);
    uVar5 = (uint)((ulonglong)uStack_58 >> 0x10);
    uVar16 = (uint)uStack_58 & 0xffff;
    uVar8 = (uint)((ulonglong)local_60 >> 0x10);
    uVar15 = (uint)local_60 & 0xffff;
    uVar8 = ((uint)local_60 << 0x10 | uVar15) + (int)((ulonglong)local_60 >> 0x20) +
            (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar15 >> 4);
    plVar12 = (longlong *)
              FUN_147074c94(lVar2 + 0x168,
                            (uVar8 >> 2) +
                            ((uint)uStack_58 << 0x10 | uVar16) + (int)((ulonglong)uStack_58 >> 0x20)
                            + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar16 >> 4) + uVar8 * 0x40 +
                            0x9e3779b9 ^ uVar8,&local_60);
    plVar11 = local_88;
    plVar17 = (longlong *)*plVar12;
    if (plVar17 == (longlong *)0x0) {
      puVar13 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar14[1] = (longlong)&DAT_100000001;
      *plVar14 = (longlong)&PTR_FUN_14a158780;
      plVar14[2] = (longlong)puVar13;
      *plVar12 = (longlong)puVar13;
      plVar17 = (longlong *)plVar12[1];
      if (plVar14 == plVar17) {
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar17 = plVar14 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
joined_r0x000142b032e6:
            if (iVar7 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        plVar12[1] = (longlong)plVar14;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar17 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            plVar14 = plVar17;
            goto joined_r0x000142b032e6;
          }
        }
      }
      FUN_14706e08c(param_1[1],&local_60);
      lVar10 = *plVar12;
      *(undefined4 *)(lVar10 + 0x18) = (undefined4)local_60;
      *(undefined4 *)(lVar10 + 0x1c) = local_60._4_4_;
      *(undefined4 *)(lVar10 + 0x20) = (undefined4)uStack_58;
      *(undefined4 *)(lVar10 + 0x24) = uStack_58._4_4_;
      local_60 = (longlong *)*plVar12;
      uStack_58 = (longlong **)plVar12[1];
      if (uStack_58 != (longlong **)0x0) {
        LOCK();
        *(int *)(uStack_58 + 1) = *(int *)(uStack_58 + 1) + 1;
        UNLOCK();
      }
      FUN_147074318(lVar2 + 0x210,&local_60);
      plVar17 = (longlong *)*plVar12;
    }
    plVar14 = local_90;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    iVar7 = (int)plVar17[1];
    *(uint *)(plVar17 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar17 + 0xc) < iVar7 + 1U) {
      FUN_147074292(plVar17,iVar7);
    }
    lVar10 = *plVar17;
    *(longlong **)(lVar10 + (longlong)iVar7 * 0x10) = plVar14;
    *(longlong **)(lVar10 + 8 + (longlong)iVar7 * 0x10) = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    iVar7 = *(int *)(lVar3 + 0x78);
    *(uint *)(lVar3 + 0x78) = iVar7 + 1U;
    if (*(uint *)(lVar3 + 0x7c) < iVar7 + 1U) {
      FUN_147074292((longlong *)(lVar3 + 0x70),iVar7);
    }
    lVar10 = *(longlong *)(lVar3 + 0x70);
    *(longlong **)(lVar10 + (longlong)iVar7 * 0x10) = plVar14;
    *(longlong **)(lVar10 + 8 + (longlong)iVar7 * 0x10) = plVar11;
    lVar10 = *plVar12;
    lVar3 = plVar12[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar17 = (longlong *)plVar14[0x12];
    plVar14[0x11] = lVar10;
    plVar14[0x12] = lVar3;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar17 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    local_70 = plVar14;
    local_68 = plVar11;
    if (plVar11 == (longlong *)0x0) {
      FUN_1470743b0(lVar2 + 0x1e0,&local_70);
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      FUN_1470743b0(lVar2 + 0x1e0,&local_70);
      LOCK();
      plVar17 = plVar11 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar4 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
LAB_142b02f83:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


