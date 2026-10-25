// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14467b848 FUN_14467b848 body=1469 status=ok
// SIG undefined FUN_14467b848(void)

void FUN_14467b848(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 *local_98;
  longlong *local_90;
  undefined1 local_88 [16];
  undefined8 *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_14467b876;
  lVar10 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar10 + 0x250);
  plVar6 = *(longlong **)(lVar10 + 600);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    lVar10 = *(longlong *)(param_1 + 8);
  }
  lVar7 = *(longlong *)(lVar10 + 0x240);
  plVar9 = *(longlong **)(lVar10 + 0x248);
  if (plVar9 == (longlong *)0x0) {
    if (lVar5 != 0 && lVar7 != 0) {
LAB_14467b929:
      if (**(char **)(param_1 + 8) == '\x01') {
        FUN_140056680(local_60,L"FOodleNetAnalyticsData");
        FUN_1446f470e(local_68,L"Oodle.Stats",1);
        puVar8 = (undefined8 *)FUN_14001cc68(200);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        memset(puVar8 + 5,0,0xa0);
        *puVar8 = &PTR_FUN_14bed35d0;
        puVar8[4] = &PTR_FUN_14bed35f8;
        local_78 = puVar8;
        plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14bed3650;
        plVar9[2] = (longlong)puVar8;
        local_70 = plVar9;
        if ((puVar8 != (undefined8 *)0x0) &&
           (((puVar8[1] == 0 || (puVar8[2] == 0)) || (*(int *)(puVar8[2] + 8) < 1)))) {
          if (plVar9 == (longlong *)0x0) {
            puVar8[1] = puVar8;
            plVar11 = (longlong *)puVar8[2];
            if (plVar11 != (longlong *)0x0) {
LAB_14467bb70:
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))();
              }
              puVar8[2] = plVar9;
              if (plVar9 != (longlong *)0x0) goto LAB_14467bb84;
            }
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            puVar8[1] = puVar8;
            if ((longlong *)puVar8[2] != plVar9) {
              LOCK();
              *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
              UNLOCK();
              plVar11 = (longlong *)puVar8[2];
              if (plVar11 != (longlong *)0x0) goto LAB_14467bb70;
              puVar8[2] = plVar9;
            }
LAB_14467bb84:
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
        local_a8 = local_60;
        FUN_142a62264(lVar5,&local_50,&local_78,local_68);
        plVar11 = local_48;
        if (local_48 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x30) = local_50;
          plVar9 = *(longlong **)(param_1 + 0x38);
          if (plVar9 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0x38) = 0;
            goto LAB_14467bd01;
          }
        }
        else {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          *(undefined8 *)(param_1 + 0x30) = local_50;
          plVar9 = *(longlong **)(param_1 + 0x38);
          if (local_48 == plVar9) {
            LOCK();
            plVar9 = local_48 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar3 = *piVar1;
              UNLOCK();
              plVar9 = plVar11;
              goto joined_r0x00014467bc26;
            }
          }
          else {
            *(longlong **)(param_1 + 0x38) = local_48;
LAB_14467bcfc:
            if (plVar9 != (longlong *)0x0) goto LAB_14467bd01;
          }
        }
      }
      else {
        FUN_140056680(local_88,L"FClientOodleNetAnalyticsData");
        FUN_1446f470e(local_68,L"Oodle.ClientStats",1);
        puVar8 = (undefined8 *)FUN_14001cc68(200);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        memset(puVar8 + 5,0,0xa0);
        *puVar8 = &PTR_FUN_14bed3600;
        puVar8[4] = &PTR_FUN_14bed3628;
        local_98 = puVar8;
        plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14bed3670;
        plVar9[2] = (longlong)puVar8;
        local_90 = plVar9;
        if ((puVar8 != (undefined8 *)0x0) &&
           (((puVar8[1] == 0 || (puVar8[2] == 0)) || (*(int *)(puVar8[2] + 8) < 1)))) {
          if (plVar9 == (longlong *)0x0) {
            puVar8[1] = puVar8;
            plVar11 = (longlong *)puVar8[2];
            if (plVar11 != (longlong *)0x0) {
LAB_14467bc42:
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))();
              }
              puVar8[2] = plVar9;
              if (plVar9 != (longlong *)0x0) goto LAB_14467bc56;
            }
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            puVar8[1] = puVar8;
            if ((longlong *)puVar8[2] != plVar9) {
              LOCK();
              *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
              UNLOCK();
              plVar11 = (longlong *)puVar8[2];
              if (plVar11 != (longlong *)0x0) goto LAB_14467bc42;
              puVar8[2] = plVar9;
            }
LAB_14467bc56:
            LOCK();
            plVar11 = plVar9 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
        local_a8 = local_88;
        FUN_142a62264(lVar5,&local_50,&local_98,local_68);
        plVar9 = local_48;
        if (local_48 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x30) = local_50;
          plVar11 = *(longlong **)(param_1 + 0x38);
          if (plVar11 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0x38) = 0;
LAB_14467bcdd:
            LOCK();
            plVar2 = plVar11 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            goto LAB_14467bcfc;
          }
        }
        else {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          *(undefined8 *)(param_1 + 0x30) = local_50;
          plVar11 = *(longlong **)(param_1 + 0x38);
          if (local_48 == plVar11) {
            LOCK();
            plVar11 = local_48 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          else {
            *(longlong **)(param_1 + 0x38) = local_48;
            if (plVar11 != (longlong *)0x0) goto LAB_14467bcdd;
          }
LAB_14467bd01:
          LOCK();
          plVar11 = plVar9 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
joined_r0x00014467bc26:
            if (iVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_48 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar10 = *local_48;
            plVar9 = local_48;
            goto LAB_14467bd45;
          }
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (lVar7 == 0) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar10 = *plVar9;
LAB_14467bd45:
          (**(code **)(lVar10 + 0x10))(plVar9);
        }
      }
    }
    else {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (lVar5 != 0) goto LAB_14467b929;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x30);
  if (((lVar10 != 0) &&
      (*(int *)(lVar10 + 0xc0) = *(int *)(lVar10 + 0xc0) + 1, *(char *)(param_1 + 0x28) == '\x01'))
     && (*(char **)(param_1 + 8) != (char *)0x0)) {
    cVar4 = **(char **)(param_1 + 8);
    bVar12 = true;
    if (*(char *)(param_1 + 0x68) == '\0') {
      bVar12 = *(char *)((param_1 - (ulonglong)(cVar4 == '\x01')) + 0x2a) != '\x01';
    }
    if ((*(longlong *)(param_1 + 0x48 + (ulonglong)(cVar4 != '\x01') * 0x10) != 0) && (bVar12)) {
      *(int *)(lVar10 + 0xc4) = *(int *)(lVar10 + 0xc4) + 1;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14467b876:
  *(bool *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x30) != 0;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467be17 FUN_14467be17 body=172 status=ok
// SIG undefined FUN_14467be17(void)

void FUN_14467be17(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (*param_1 != 0) {
    FUN_146efe122(*param_1,param_2);
    return;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar5 = FUN_146efe1bf;
  puVar5[1] = FUN_14467bec3;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar5 + 2) = *param_2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  puVar5[4] = *(undefined8 *)(param_2 + 4);
  puVar5[5] = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined4 *)(puVar5 + 6) = param_2[8];
  *(undefined4 *)((longlong)puVar5 + 0x34) = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  puVar5[7] = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  lVar1 = *param_1;
  *param_1 = (longlong)(puVar5 + 2);
  if (lVar1 != 0) {
                    /* WARNING: Jumptable with 0 entries at 0x00014467bea9 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 14467bec3 FUN_14467bec3 body=61 status=ok
// SIG undefined FUN_14467bec3(void)

void FUN_14467bec3(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = FUN_146efe1bf;
  puVar1[1] = FUN_14467bec3;
  FUN_146efe1f2(puVar1 + 2,param_1);
  return;
}



// FUNCTION 14467bf00 FUN_14467bf00 body=557 status=ok
// SIG undefined FUN_14467bf00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467bf00(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14098d3d2(FUN_1446773d8,L"/Script/OodleNetworkHandlerComponent",L"EOodleNetworkEnableMode",
                &DAT_14cc2dff8);
  FUN_14098d3d2(FUN_14467a045,L"/Script/OodleNetworkHandlerComponent",L"EOodleNetResult",
                &DAT_14cc2e388);
  FUN_140056680(&DAT_14cc2e3a0,&DAT_149dfb77a);
  atexit((_func_5014 *)&LAB_14467a07e);
  FUN_140056680(&DAT_14cc2e3b0,&DAT_149dfb77a);
  atexit((_func_5014 *)&LAB_14467a08f);
  DAT_14cc2e3e0 = 0;
  DAT_14cc2e3e8 = 0;
  DAT_14cc2e3c0 = 0;
  _DAT_14cc2e3c8 = 0;
  _DAT_14cc2e3ec = 0xffffffff00000080;
  DAT_14cc2e3f4 = 0;
  DAT_14cc2e400 = 0;
  DAT_14cc2e408 = 0;
  atexit(FUN_14467a0a0);
  local_48._0_4_ = 0;
  FUN_141471170(&DAT_14cc2e410,L"net.OodleMinSizeForCompression",&DAT_14cc2e420,
                L"The minimum size an outgoing packet must be, for it to be considered for compression (does not count overhead of handler components which process packets after Oodle)."
               );
  atexit(FUN_14467a0c9);
  FUN_1400b22c2(&local_30,&DAT_149e02088);
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  FUN_140f510cc(&DAT_14cc2e428,L"net.OodleServerEnableMode",&local_30,
                L"When to enable compression on the server (overrides the \'ServerEnableMode\' .ini setting)."
               );
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_14467a10e);
  FUN_1400b22c2(&local_30,&DAT_149e02088);
  local_48 = local_48 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14cc2e440,L"net.OodleClientEnableMode",&local_30,
                L"When to enable compression on the client (overrides the \'ClientEnableMode\' .ini setting)."
               );
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_14467a153);
  local_30 = -0x7ffffffeb412d8c8;
  local_1c = 0x1c;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_14676bf30(&local_30);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/OodleNetworkHandlerComponent",&PTR_FUN_14bed3180,1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467c130 FUN_14467c130 body=55 status=ok
// SIG undefined FUN_14467c130(void)

void FUN_14467c130(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc304b8 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc304b8 = FUN_14171c317(FUN_14676c121,uVar1,L"EDatasmithAreaLightActorShape");
  }
  return;
}



// FUNCTION 14467c167 FUN_14467c167 body=55 status=ok
// SIG undefined FUN_14467c167(void)

void FUN_14467c167(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc304d0 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc304d0 = FUN_14171c317(FUN_14676c150,uVar1,L"EDatasmithAreaLightActorType");
  }
  return;
}



// FUNCTION 14467c19e FUN_14467c19e body=55 status=ok
// SIG undefined FUN_14467c19e(void)

void FUN_14467c19e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc307e0 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc307e0 = FUN_14171c317(FUN_14676cd3a,uVar1,L"EDatasmithImportSearchPackagePolicy");
  }
  return;
}



// FUNCTION 14467c1d5 FUN_14467c1d5 body=55 status=ok
// SIG undefined FUN_14467c1d5(void)

void FUN_14467c1d5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc307f8 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc307f8 = FUN_14171c317(FUN_14676cd69,uVar1,L"EDatasmithImportAssetConflictPolicy");
  }
  return;
}



// FUNCTION 14467c20c FUN_14467c20c body=55 status=ok
// SIG undefined FUN_14467c20c(void)

void FUN_14467c20c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30810 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30810 = FUN_14171c317(FUN_14676cd98,uVar1,L"EDatasmithImportActorPolicy");
  }
  return;
}



// FUNCTION 14467c243 FUN_14467c243 body=55 status=ok
// SIG undefined FUN_14467c243(void)

void FUN_14467c243(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30828 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30828 = FUN_14171c317(FUN_14676cdc9,uVar1,L"EDatasmithImportMaterialQuality");
  }
  return;
}



// FUNCTION 14467c27a FUN_14467c27a body=55 status=ok
// SIG undefined FUN_14467c27a(void)

void FUN_14467c27a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30840 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30840 = FUN_14171c317(FUN_14676cdf8,uVar1,L"EDatasmithImportLightmapMin");
  }
  return;
}



// FUNCTION 14467c2b1 FUN_14467c2b1 body=55 status=ok
// SIG undefined FUN_14467c2b1(void)

void FUN_14467c2b1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30858 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30858 = FUN_14171c317(FUN_14676ce27,uVar1,L"EDatasmithImportLightmapMax");
  }
  return;
}



// FUNCTION 14467c2e8 FUN_14467c2e8 body=55 status=ok
// SIG undefined FUN_14467c2e8(void)

void FUN_14467c2e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30870 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30870 = FUN_14171c317(FUN_14676ce56,uVar1,L"EDatasmithImportScene");
  }
  return;
}



// FUNCTION 14467c31f FUN_14467c31f body=55 status=ok
// SIG undefined FUN_14467c31f(void)

void FUN_14467c31f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30888 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30888 = FUN_14171c317(FUN_14676ce85,uVar1,L"EDatasmithCADStitchingTechnique");
  }
  return;
}



// FUNCTION 14467c356 FUN_14467c356 body=55 status=ok
// SIG undefined FUN_14467c356(void)

void FUN_14467c356(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc308a0 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc308a0 = FUN_14171c317(FUN_14676ceb4,uVar1,L"EDatasmithCADRetessellationRule");
  }
  return;
}



// FUNCTION 14467c436 FUN_14467c436 body=540 status=ok
// SIG undefined FUN_14467c436(void)

void FUN_14467c436(void)

{
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed3be0,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed3ca0,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed4490,1,0,0,&PTR_FUN_14bed4450,2);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed4a00,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed8270,0xe,&PTR_FUN_14bed8240,1,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed88c0,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed8e80,1,&PTR_FUN_14bed8e50,1,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bed9c80,1,&PTR_FUN_14bed9be0,4,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14beda700,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bedaaa0,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bedac50,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bedae90,1,0,0,0,0);
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bedd040,3,&PTR_FUN_14bedcf50,6,
                &PTR_FUN_14bedce30,9);
  return;
}



// FUNCTION 14467c654 FUN_14467c654 body=1 status=ok
// SIG undefined FUN_14467c654(void)

void FUN_14467c654(void)

{
  return;
}



// FUNCTION 14467c69c FUN_14467c69c body=665 status=ok
// SIG undefined FUN_14467c69c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467c69c(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee0710,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee0d70,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee1620,1,&PTR_FUN_14bee15f0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee19b0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee1eb0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee2330,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee26d0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee2f00,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee3490,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee3910,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee3d40,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee41c0,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/DatasmithContent",&PTR_FUN_14bee4ee0,1,&PTR_FUN_14bee4e40);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cc30b38);
  if (cVar1 == '\0') {
    _DAT_14cc30b38 = 0;
    uRam000000014cc30b40 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_48 = -0x7ffffffeb411b0f8;
  local_34 = 0x10;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14676e006(&local_48);
  _DAT_14cc30b4c = 0xffffffff;
  _DAT_14cc30b50 = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467c938 FUN_14467c938 body=69 status=ok
// SIG undefined FUN_14467c938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467c938(void)

{
  _DAT_14cc30b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014467c97a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc30b60,1);
  return;
}



// FUNCTION 14467c97d FUN_14467c97d body=69 status=ok
// SIG undefined FUN_14467c97d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14467c97d(void)

{
  _DAT_14cc30b68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014467c9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc30b70,1);
  return;
}



// FUNCTION 14467c9c2 FUN_14467c9c2 body=148 status=ok
// SIG undefined FUN_14467c9c2(void)

void FUN_14467c9c2(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    FUN_1446f470e(local_28,L"WINDOWS",1);
    plVar1 = (longlong *)FUN_140272950(local_28);
    (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467ca58 FUN_14467ca58 body=237 status=ok
// SIG undefined FUN_14467ca58(void)

void FUN_14467ca58(longlong *param_1,longlong param_2)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_38,L"WINDOWS",1);
  uVar1 = FUN_140272950(&local_38);
  FUN_146b11fe0(uVar1,0x38);
  if ((param_2 == 0) && (param_2 = param_1[9], param_2 == 0)) {
    FUN_140056680(&local_38,L"(No Socket)");
  }
  else {
    local_38 = (void *)0x0;
    local_30 = *(int *)(param_2 + 0x18);
    lVar2 = (longlong)local_30;
    _Src = *(void **)(param_2 + 0x10);
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467cb46 FUN_14467cb46 body=639 status=ok
// SIG undefined FUN_14467cb46(void)

bool FUN_14467cb46(longlong *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(lpCriticalSection);
  cVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  LOCK();
  *(undefined4 *)(param_1 + 3) = 1;
  UNLOCK();
  FUN_140056680(local_48,param_2);
  FUN_1446f470e(&local_50,L"WINDOWS",1);
  plVar5 = (longlong *)FUN_140272950(&local_50);
  FUN_140056680(&local_60,L"FBackChannelConnection Client Socket");
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_68 = (ulonglong)DAT_14c892fa4;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5,&local_68,&local_60,0);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar5 == (longlong *)0x0) goto LAB_14467cc28;
  (**(code **)(*plVar5 + 0x98))(plVar5,1);
  FUN_14467cdc6(plVar5,DAT_14c767a48,DAT_14c767a4c);
  cVar3 = FUN_146b137c6(local_48,&local_50);
  if (cVar3 == '\0') {
LAB_14467cd12:
    FUN_1446f470e(&local_60,L"WINDOWS",1);
    plVar6 = (longlong *)FUN_140272950(&local_60);
    iVar4 = (**(code **)(*plVar6 + 0xb8))(plVar6);
    if (1 < iVar4 - 7U) {
      FUN_140002266(&local_60,L"Failed to open connection to %s.",param_2);
      FUN_14467ca58(param_1,plVar5);
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_1446f470e(&local_60,L"WINDOWS",1);
      plVar6 = (longlong *)FUN_140272950(&local_60);
      (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
      goto LAB_14467cc28;
    }
  }
  else {
    (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_60);
    (**(code **)(*local_60 + 0x18))(local_60,local_50);
    (**(code **)(*local_60 + 0x28))(local_60,local_4c);
    cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,local_60);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    if (cVar3 == '\0') goto LAB_14467cd12;
  }
  EnterCriticalSection(lpCriticalSection);
  param_1[9] = (longlong)plVar5;
  LeaveCriticalSection(lpCriticalSection);
LAB_14467cc28:
  lVar2 = param_1[9];
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467cdc6 FUN_14467cdc6 body=182 status=ok
// SIG undefined FUN_14467cdc6(void)

void FUN_14467cdc6(longlong *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  local_30 = 0;
  if (0 < (int)param_2) {
    do {
      bVar1 = (**(code **)(*param_1 + 0x100))(param_1,param_2,&local_2c);
      param_2 = param_2 >> (local_2c < (int)param_2 & ~bVar1);
      if (bVar1 != 0) break;
    } while (local_2c < (int)param_2);
  }
  if (0 < (int)param_3) {
    do {
      bVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_3,&local_30);
      param_3 = param_3 >> (local_30 < (int)param_3 & ~bVar1);
      if (bVar1 != 0) break;
    } while (local_30 < (int)param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467ce7e FUN_14467ce7e body=758 status=ok
// SIG undefined FUN_14467ce7e(void)

ulonglong FUN_14467ce7e(longlong param_1,short param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  FUN_1446f470e(&local_50,L"WINDOWS",1);
  plVar5 = (longlong *)FUN_140272950(&local_50);
  FUN_140056680(&local_50,L"FBackChannelConnection Client Socket");
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_58 = (ulonglong)DAT_14c892fa4;
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5,&local_58,&local_50,0);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = DAT_14c990940;
  if (plVar6 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar6 + 0xe8))(plVar6,1);
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6,1);
      if (cVar4 != '\0') {
        cVar4 = (**(code **)(*plVar6 + 0x98))(plVar6,1);
        if (cVar4 != '\0') {
          (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_50);
          (**(code **)(*local_50 + 0x18))(local_50,uVar3);
          (**(code **)(*local_50 + 0x28))(local_50,param_2);
          cVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,local_50);
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
          if (cVar4 != '\0') {
            cVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,8);
            if (cVar4 != '\0') {
              EnterCriticalSection(lpCriticalSection);
              *(longlong **)(param_1 + 0x48) = plVar6;
              LeaveCriticalSection(lpCriticalSection);
              *(undefined1 *)(param_1 + 0x50) = 1;
              uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
              goto LAB_14467d102;
            }
          }
        }
      }
    }
    FUN_1446f470e(&local_50,L"WINDOWS",1);
    uVar7 = FUN_140272950(&local_50);
    uVar7 = FUN_146b11fe0(uVar7,0x38);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
    FUN_140047918(&DAT_14c872ee0,L"Failed to create the listen socket as configured. %s",uVar7);
    (**(code **)(*plVar5 + 0x38))(plVar5,plVar6);
  }
  FUN_1446f470e(&local_50,L"WINDOWS",1);
  uVar7 = FUN_140272950(&local_50);
  FUN_146b11fe0(uVar7,0x38);
  FUN_140002266(&local_50,L"Failed to start listening on port %d",(int)param_2);
  FUN_14467ca58(param_1,0);
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = 0;
LAB_14467d102:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467d176 FUN_14467d176 body=1106 status=ok
// SIG undefined FUN_14467d176(void)

ulonglong FUN_14467d176(longlong param_1,double param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  char local_69;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  plVar6 = *(longlong **)(param_1 + 0x48);
  if (plVar6 == (longlong *)0x0) {
    uVar12 = 0;
    goto LAB_14467d36f;
  }
  puVar11 = (undefined8 *)((longlong)(int)param_2 * 10000000);
  local_69 = '\0';
  local_68 = puVar11;
  if (*(char *)(param_1 + 0x50) == '\0') {
    iVar4 = (**(code **)(*plVar6 + 0x80))();
    if (iVar4 == 2) {
      puVar11 = &local_98;
      FUN_1446f470e(puVar11,L"WINDOWS",1);
      plVar6 = (longlong *)FUN_140272950(puVar11);
      iVar4 = (**(code **)(*plVar6 + 0xb8))(plVar6);
      if (iVar4 != 0) {
        FUN_1446f470e(&local_98,L"WINDOWS",1);
        uVar5 = FUN_140272950(&local_98);
        FUN_146b11fe0(uVar5,iVar4);
        goto LAB_14467d1f6;
      }
    }
    else {
      local_69 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))
                           (*(longlong **)(param_1 + 0x48),1,puVar11);
    }
  }
  else {
    cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_69,&local_68);
    if (cVar3 == '\0') {
LAB_14467d1f6:
      uVar12 = 0;
      FUN_14467ca58(param_1,0);
      goto LAB_14467d36f;
    }
  }
  uVar12 = CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
  if (local_69 != '\x01') goto LAB_14467d36f;
  if (*(char *)(param_1 + 0x50) == '\0') {
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_14467d35c:
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_1498a451a(param_3);
      goto LAB_14467d36f;
    }
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_14467d35c;
      LOCK();
      iVar2 = (int)plVar6[1];
      bVar13 = iVar4 == iVar2;
      if (bVar13) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar13);
    local_88 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plStack_80 = plVar6;
    FUN_1498a451a(param_3);
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14467d36f;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14467d36f;
    lVar7 = *plVar6;
  }
  else {
    FUN_1446f470e(local_a8,L"WINDOWS",1);
    plVar6 = (longlong *)FUN_140272950(local_a8);
    (**(code **)(*plVar6 + 0x90))(plVar6,&local_98);
    plVar6 = *(longlong **)(param_1 + 0x48);
    FUN_140056680(local_a8,L"RemoteConnection");
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6,local_98,local_a8);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x98))(plVar6,1);
      FUN_14467cdc6(plVar6,DAT_14c767a48,DAT_14c767a4c);
      plVar8 = (longlong *)FUN_14001cc68(0xd0,0x10);
      FUN_1498a4254(plVar8);
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14bee5a20;
      plVar9[2] = (longlong)plVar8;
      if ((plVar8 != (longlong *)0x0) &&
         (((plVar8[1] == 0 || (plVar8[2] == 0)) || (*(int *)(plVar8[2] + 8) < 1)))) {
        if (plVar9 == (longlong *)0x0) {
          plVar8[1] = (longlong)plVar8;
          plVar10 = (longlong *)plVar8[2];
          if (plVar10 != (longlong *)0x0) {
LAB_14467d584:
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            plVar8[2] = (longlong)plVar9;
            if (plVar9 != (longlong *)0x0) goto LAB_14467d59d;
          }
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          plVar8[1] = (longlong)plVar8;
          if ((longlong *)plVar8[2] != plVar9) {
            LOCK();
            *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
            UNLOCK();
            plVar10 = (longlong *)plVar8[2];
            if (plVar10 != (longlong *)0x0) goto LAB_14467d584;
            plVar8[2] = (longlong)plVar9;
          }
LAB_14467d59d:
          LOCK();
          plVar10 = plVar9 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar8 + 4));
      plVar8[9] = (longlong)plVar6;
      if ((LPCRITICAL_SECTION)(plVar8 + 4) != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar8 + 4));
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_b8 = plVar8;
      local_b0 = plVar9;
      cVar3 = FUN_1498a451a(param_3,&local_b8);
      if (cVar3 == '\0') {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar9 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    if (local_90 == (longlong *)0x0) goto LAB_14467d36f;
    LOCK();
    plVar6 = local_90 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14467d36f;
    (**(code **)*local_90)(local_90);
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14467d36f;
    lVar7 = *local_90;
    plVar6 = local_90;
  }
  (**(code **)(lVar7 + 0x10))(plVar6);
LAB_14467d36f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14467d5ca FUN_14467d5ca body=465 status=ok
// SIG undefined FUN_14467d5ca(void)

int FUN_14467d5ca(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  double dVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_68 [44];
  int local_3c;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 == (longlong *)0x0) {
    iVar6 = -1;
  }
  else {
    local_3c = 0;
    (**(code **)(*plVar4 + 0x58))(plVar4,param_2,param_3);
    QueryPerformanceCounter(&local_38);
    if (1.0 <= ((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 200)
       ) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 100);
    }
    if (local_3c == -1) {
      if (DAT_14c767a50 != 0) {
        FUN_1446f470e(&local_38,L"WINDOWS",1);
        plVar4 = (longlong *)FUN_140272950(&local_38);
        uVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4);
        FUN_1446f470e(&local_38,L"WINDOWS",1);
        uVar5 = FUN_140272950(&local_38);
        FUN_146b11fe0(uVar5,uVar2);
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      QueryPerformanceCounter(&local_38);
      dVar1 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
      lVar3 = 0x80;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + local_3c;
      QueryPerformanceCounter(&local_38);
      dVar1 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
      *(double *)(param_1 + 0x88) = dVar1;
      lVar3 = 0x70;
    }
    *(double *)(param_1 + lVar3) = dVar1;
    iVar6 = local_3c;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467d79c FUN_14467d79c body=304 status=ok
// SIG undefined FUN_14467d79c(void)

int FUN_14467d79c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_34;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    iVar3 = 0;
  }
  else {
    local_34 = 0;
    local_48 = 0;
    (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_3);
    QueryPerformanceCounter(&local_30);
    if (1.0 <= ((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 200)
       ) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 100);
    }
    iVar3 = local_34;
    if (0 < local_34) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + local_34;
      QueryPerformanceCounter(&local_30);
      dVar2 = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
      *(double *)(param_1 + 0x88) = dVar2;
      *(double *)(param_1 + 0x78) = dVar2;
      iVar3 = local_34;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467d8cd FUN_14467d8cd body=202 status=ok
// SIG undefined FUN_14467d8cd(void)

void FUN_14467d8cd(void)

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
  FUN_141471170(&DAT_14cc30b58,L"backchannel.logpackets",&DAT_14cc30b54,L"Logs incoming packets");
  atexit(FUN_14467c938);
  local_38 = 0;
  FUN_141471170(&DAT_14cc30b68,L"backchannel.logerrors",&DAT_14c767a50,L"Logs packet errors");
  atexit(FUN_14467c97d);
  local_28 = 0x800000014bee584e;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14676e4dc(&local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467d998 FUN_14467d998 body=55 status=ok
// SIG undefined FUN_14467d998(void)

void FUN_14467d998(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30bd0 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30bd0 = FUN_14171c317(FUN_14676e868,uVar1,L"EDataSortTypeEnum");
  }
  return;
}



// FUNCTION 14467d9cf FUN_14467d9cf body=55 status=ok
// SIG undefined FUN_14467d9cf(void)

void FUN_14467d9cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30be8 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30be8 = FUN_14171c317(FUN_14676e897,uVar1,L"ERandomVelocityGenerationTypeEnum");
  }
  return;
}



// FUNCTION 14467da06 FUN_14467da06 body=55 status=ok
// SIG undefined FUN_14467da06(void)

void FUN_14467da06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30c00 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30c00 = FUN_14171c317(FUN_14676e8c6,uVar1,L"EDebugTypeEnum");
  }
  return;
}



// FUNCTION 14467da3d FUN_14467da3d body=55 status=ok
// SIG undefined FUN_14467da3d(void)

void FUN_14467da3d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30c18 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30c18 = FUN_14171c317(FUN_14676e8f5,uVar1,L"EDataSourceTypeEnum");
  }
  return;
}



// FUNCTION 14467da74 FUN_14467da74 body=55 status=ok
// SIG undefined FUN_14467da74(void)

void FUN_14467da74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30c30 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30c30 = FUN_14171c317(FUN_14676e924,uVar1,L"ELocationFilteringModeEnum");
  }
  return;
}



// FUNCTION 14467daab FUN_14467daab body=55 status=ok
// SIG undefined FUN_14467daab(void)

void FUN_14467daab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30c48 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30c48 = FUN_14171c317(FUN_14676e953,uVar1,L"ELocationXToSpawnEnum");
  }
  return;
}



// FUNCTION 14467dae2 FUN_14467dae2 body=55 status=ok
// SIG undefined FUN_14467dae2(void)

void FUN_14467dae2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30c60 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30c60 = FUN_14171c317(FUN_14676e982,uVar1,L"ELocationYToSpawnEnum");
  }
  return;
}



// FUNCTION 14467db19 FUN_14467db19 body=55 status=ok
// SIG undefined FUN_14467db19(void)

void FUN_14467db19(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30c78 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30c78 = FUN_14171c317(FUN_14676e9b1,uVar1,L"ELocationZToSpawnEnum");
  }
  return;
}



// FUNCTION 14467db56 FUN_14467db56 body=2471 status=ok
// SIG undefined FUN_14467db56(void)

undefined8 FUN_14467db56(longlong *param_1,void *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined ***pppuVar19;
  undefined8 *puVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  bool bVar29;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  undefined8 *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  uint *local_d0;
  longlong local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = param_2;
  memset(param_2,0,400);
  param_1[0x52] = -0x407fffff00000001;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xbf800000;
  lVar10 = (**(code **)(*param_1 + 0x180))();
  if ((lVar10 != 0) &&
     ((bVar4 = *(byte *)(lVar10 + 0x152), bVar4 == 1 ||
      ((bVar4 < 7 && ((0x68U >> (bVar4 & 0x1f) & 1) != 0)))))) {
    if ((param_3 != 0) &&
       (((int)param_1[8] == *(int *)((longlong)param_1 + 0x6c) &&
        (lVar10 = *(longlong *)(param_3 + 0x30), lVar10 != 0)))) {
      plVar5 = param_1 + 0x57;
      iVar21 = (int)param_1[0x58];
      *(uint *)(param_1 + 0x58) = iVar21 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2c4) < iVar21 + 1U) {
        FUN_1498b3632(plVar5,iVar21);
      }
      lVar7 = (longlong)iVar21 * 0x18;
      puVar20 = (undefined8 *)(*plVar5 + 8 + lVar7);
      *puVar20 = 0;
      puVar20[1] = 0;
      lVar26 = *plVar5;
      lVar6 = *(longlong *)(lVar10 + 0x260);
      *(longlong *)(lVar26 + lVar7) = lVar6;
      *(undefined8 *)(lVar26 + 8 + lVar7) = *(undefined8 *)(lVar6 + 0x38);
      uVar18 = *(uint *)(lVar10 + 0xc);
      *(uint *)(lVar26 + 0x10 + lVar7) = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar21 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar21 = DAT_14c964868 + 1;
        UNLOCK();
        iVar23 = DAT_14c964868 + 1;
        bVar29 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar21;
        if (bVar29) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar23);
        }
        LOCK();
        iVar21 = *(int *)(lVar10 + 0x10);
        bVar29 = iVar21 == 0;
        if (bVar29) {
          *(int *)(lVar10 + 0x10) = iVar23;
          iVar21 = 0;
        }
        UNLOCK();
        if (bVar29) {
          iVar21 = iVar23;
        }
      }
      *(int *)(lVar26 + lVar7 + 0x14) = iVar21;
      FUN_1498a58a6(param_1,*(undefined8 *)(lVar26 + lVar7 + 8));
    }
    puVar13 = (uint *)(param_1 + 9);
    uVar18 = *(uint *)(param_1 + 0xc);
    uVar22 = (ulonglong)uVar18;
    if (uVar18 == 0) {
      uVar27 = 1;
      uVar24 = 0;
      iVar21 = 0;
      uVar15 = 0;
    }
    else {
      puVar11 = (uint *)param_1[0xb];
      if ((uint *)param_1[0xb] == (uint *)0x0) {
        puVar11 = puVar13;
      }
      uVar15 = *puVar11;
      if (uVar15 == 0) {
        iVar21 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar21 = uVar18 - 1;
        }
        uVar24 = 0;
        uVar27 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar27 = uVar24;
        }
        iVar21 = 0;
        do {
          if (uVar27 == uVar24) goto LAB_14467dc83;
          iVar21 = iVar21 + 0x20;
          uVar15 = puVar11[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar24 = 0;
        iVar21 = 0;
      }
      uVar27 = (ulonglong)(-uVar15 & uVar15);
      uVar3 = uVar27 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar15 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar18 <= (int)uVar15) {
        uVar15 = uVar18;
      }
    }
    if (uVar15 != uVar18) {
      local_d8 = param_1 + 0x57;
      uVar28 = 0xffffffff;
      local_e0 = uVar22;
      local_d0 = puVar13;
      local_c8 = param_3;
      do {
        lVar10 = *(longlong *)(param_1[7] + (longlong)(int)uVar15 * 0x10);
        if ((lVar10 != 0) && (lVar26 = *(longlong *)(lVar10 + 0x550), lVar26 != 0)) {
          iVar23 = (int)param_1[0x58];
          *(uint *)(param_1 + 0x58) = iVar23 + 1U;
          if (*(uint *)((longlong)param_1 + 0x2c4) < iVar23 + 1U) {
            FUN_1498b3632(local_d8,iVar23);
          }
          puVar20 = (undefined8 *)(*local_d8 + 8 + (longlong)iVar23 * 0x18);
          *puVar20 = 0;
          puVar20[1] = 0;
          puVar20 = (undefined8 *)((longlong)iVar23 * 0x18 + *local_d8);
          uVar14 = *(undefined8 *)(lVar10 + 0x4c8);
          plVar5 = *(longlong **)(lVar10 + 0x4d0);
          if (plVar5 == (longlong *)0x0) {
            *puVar20 = uVar14;
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            *puVar20 = uVar14;
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              local_e8 = puVar20;
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              puVar20 = local_e8;
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                puVar20 = local_e8;
              }
            }
          }
          puVar20[1] = lVar26;
          lVar10 = FUN_1447210f0(lVar10);
          if (lVar10 == 0) {
            *(undefined4 *)(puVar20 + 2) = 0;
            iVar23 = 0;
          }
          else {
            uVar18 = *(uint *)(lVar10 + 0xc);
            *(uint *)(puVar20 + 2) = uVar18;
            if ((int)uVar18 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar23 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar23 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar29 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar23;
              if (bVar29) {
                local_e8 = puVar20;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
                puVar20 = local_e8;
              }
              LOCK();
              iVar23 = *(int *)(lVar10 + 0x10);
              bVar29 = iVar23 == 0;
              if (bVar29) {
                *(int *)(lVar10 + 0x10) = iVar16;
                iVar23 = 0;
              }
              UNLOCK();
              if (bVar29) {
                iVar23 = iVar16;
              }
            }
          }
          *(int *)((longlong)puVar20 + 0x14) = iVar23;
          FUN_1498a58a6(param_1,lVar26);
          uVar18 = *(uint *)(param_1 + 0xc);
          uVar22 = local_e0;
          puVar13 = local_d0;
          param_3 = local_c8;
        }
        uVar28 = uVar28 & ~(uint)uVar27;
        puVar11 = (uint *)param_1[0xb];
        if ((uint *)param_1[0xb] == (uint *)0x0) {
          puVar11 = puVar13;
        }
        iVar23 = (int)uVar24;
        lVar10 = (longlong)iVar23;
        uVar15 = puVar11[lVar10] & uVar28;
        if (uVar15 == 0) {
          iVar16 = uVar18 + 0x1e;
          if (-1 < (int)(uVar18 - 1)) {
            iVar16 = uVar18 - 1;
          }
          iVar16 = iVar16 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar17 = iVar16;
          if (iVar16 < iVar23) {
            iVar17 = iVar23;
          }
          uVar22 = local_e0;
          if (iVar23 < iVar16) {
            lVar26 = 0;
            do {
              uVar15 = puVar11[lVar10 + lVar26 + 1];
              if (uVar15 != 0) {
                uVar24 = (ulonglong)(iVar23 + (int)lVar26 + 1);
                uVar28 = 0xffffffff;
                goto LAB_14467de85;
              }
              iVar21 = iVar21 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar17 - lVar10 != lVar26);
            uVar28 = 0xffffffff;
            iVar23 = iVar17;
          }
          uVar24 = (ulonglong)(iVar23 + 1);
          uVar15 = uVar18;
        }
        else {
LAB_14467de85:
          uVar27 = (ulonglong)(-uVar15 & uVar15);
          uVar3 = uVar27 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar15 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar18 <= (int)uVar15) {
            uVar15 = uVar18;
          }
        }
      } while (uVar15 != (uint)uVar22);
    }
  }
LAB_14467dc83:
  FUN_14467e4fe(local_c0);
  if (param_3 == 0) goto LAB_14467dd84;
  lVar10 = param_1[5];
  uStack_b0 = *(undefined8 *)(param_3 + 0x100);
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar21 = *(int *)(lVar26 + 0xc60);
  local_b8 = lVar10;
  if (DAT_14c86a9fc == 0) {
    if (iVar21 != 2) {
      if (iVar21 != 1) goto LAB_14467dcd4;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14467e409;
      goto LAB_14467dcdd;
    }
  }
  else {
LAB_14467dcd4:
    if (iVar21 != 0x10) {
LAB_14467dcdd:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar21 = *(int *)(lVar26 + 0xc60), iVar21 == 2))
        goto LAB_14467e409;
        if (iVar21 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14467e409;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar20 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar20;
        if (puVar13 != (uint *)0x0) goto LAB_14467e0d0;
        while( true ) {
          uVar18 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar18 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar18 | 1;
            __tlregdtor(&LAB_14468683d);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar20 = puVar12;
          FUN_140217a48(puVar20);
          puVar13 = (uint *)*puVar20;
LAB_14467e0d0:
          puVar25 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar11 = (uint *)(puVar25 + 0x17);
          uVar18 = puVar13[0x12];
          if (puVar11 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar15 = *puVar13;
            *puVar13 = *puVar13 + uVar18 + 1;
            UNLOCK();
            if ((uVar15 ^ uVar18) != 0xffffffff) break;
            puVar13 = (uint *)*puVar20;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar20 = puVar13;
            puVar25 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar11 = (uint *)(puVar25 + 0x17);
            uVar18 = 0;
            if (puVar11 <= puVar13 + 0x4000) {
              uVar18 = 1;
              goto LAB_14467e150;
            }
          }
        }
        uVar18 = uVar18 + 1;
LAB_14467e150:
        *(uint **)(puVar13 + 0x10) = puVar11;
        puVar13[0x12] = uVar18;
        iVar21 = 0;
        FUN_1447247dc(puVar25,0);
        *puVar25 = &PTR_FUN_14beea508;
        *(undefined4 *)(puVar25 + 0x15) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar25 + 0xac) = local_b8._4_4_;
        *(undefined4 *)(puVar25 + 0x16) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar25 + 0xb4) = uStack_b0._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar18 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
            iVar21 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar21 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
        }
        puVar25[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar25[9] = puVar25;
        puVar25[10] = puVar25;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar24 = 1;
          if ((char)uVar22 != '\x06') {
            uVar24 = uVar22;
          }
          uVar22 = uVar24;
          uVar14 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar25[0xf] = uVar14;
        puVar25[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar25 + 0x1c) = iVar21;
        if (puVar25 == (undefined8 *)0x0) {
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
          UNLOCK();
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar25);
          LOCK();
          piVar2 = (int *)(puVar25 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar25)(puVar25,1);
          }
        }
      }
      else {
        local_f8 = local_a8;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14beea490;
        local_80 = (undefined4)local_b8;
        uStack_7c = local_b8._4_4_;
        uStack_78 = (undefined4)uStack_b0;
        uStack_74 = uStack_b0._4_4_;
        local_a8[0] = &LAB_1446867fa;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraChaosDestructionDICreateRTInstance",&DAT_14cc30e00);
        if (local_a8[0] != (undefined1 *)0x0) {
          pppuVar19 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar19 = &local_88;
          }
          (*(code *)(*pppuVar19)[2])();
        }
      }
      goto LAB_14467dd84;
    }
  }
LAB_14467e409:
  FUN_145cabe24(lVar10,&uStack_b0);
LAB_14467dd84:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467e4fe FUN_14467e4fe body=1213 status=ok
// SIG undefined FUN_14467e4fe(void)

void FUN_14467e4fe(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1447a8aa0(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1447a8aa0(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_14482f6fa(param_1 + 0x20,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_14482f6fa(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_14482f6fa(param_1 + 0x40,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_14481578e(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_14482f6fa(param_1 + 0x60,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14482f6fa(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x8c) < 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_14482f6fa(param_1 + 0x80,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_14481578e(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0xac) < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_144750f90(param_1 + 0xa0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_1447a8aa0(param_1 + 0xb0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int *)(param_1 + 0xcc) < 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_1447a8aa0(param_1 + 0xc0,0);
  }
  else {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    FUN_1447a8aa0(param_1 + 0xd0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xec) < 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    FUN_1447a8aa0(param_1 + 0xe0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0xfc) < 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    FUN_1447a8aa0(param_1 + 0xf0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0x10c) < 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_1447a8aa0(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x11c) < 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_1447a8aa0(param_1 + 0x110,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_14482f6fa(param_1 + 0x120,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0x13c) < 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    FUN_14482f6fa(param_1 + 0x130,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if (*(int *)(param_1 + 0x14c) < 0) {
    *(undefined4 *)(param_1 + 0x148) = 0;
    FUN_14482f6fa(param_1 + 0x140,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  if (*(int *)(param_1 + 0x15c) < 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    FUN_1447a8aa0(param_1 + 0x150,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  if (*(int *)(param_1 + 0x16c) < 0) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_1401017f4(param_1 + 0x160,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  if (*(int *)(param_1 + 0x17c) < 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    FUN_1447a8aa0(param_1 + 0x170,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x18c)) {
    *(undefined4 *)(param_1 + 0x188) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  FUN_1447a8aa0(param_1 + 0x180,0);
  return;
}



// FUNCTION 14467e9bc FUN_14467e9bc body=1262 status=ok
// SIG undefined FUN_14467e9bc(void)

void FUN_14467e9bc(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1498a7796(param_2);
  if (param_3 == 0) goto LAB_14467eac9;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14467ee05;
    if (iVar7 != 1) goto LAB_14467ea1d;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14467ee05;
  }
  else {
LAB_14467ea1d:
    if (iVar7 == 0x10) goto LAB_14467ee05;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14467ee05:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14467ee05;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14467eb8a;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14468683d);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_14467eb8a:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_14467ec0a;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14467ec0a:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14beea5a0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_48 = &PTR_LAB_14beea520;
    local_68[0] = &LAB_1446869e8;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIChaosDestructionDestroyInstanceData",&DAT_14cc30e04);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14467eac9:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14467eec0 FUN_14467eec0 body=406 status=ok
// SIG undefined FUN_14467eec0(void)

undefined8 FUN_14467eec0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  
  uVar4 = 0;
  if ((uint)*(ushort *)((longlong)param_2 + 2) < DAT_14c87eb08 + 1U) {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x1e8);
    if (iVar2 == 0) {
      uVar11 = 1;
      iVar12 = 0;
      iVar7 = 0;
    }
    else {
      puVar13 = *(uint **)(lVar3 + 0x1e0);
      if (*(uint **)(lVar3 + 0x1e0) == (uint *)0x0) {
        puVar13 = (uint *)(lVar3 + 0x1d0);
      }
      uVar5 = *puVar13;
      if (uVar5 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar4 = 0;
        uVar11 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar11 = uVar4;
        }
        iVar12 = 0;
        do {
          if (uVar11 == uVar4) {
            return 0;
          }
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar13[uVar4 + 1];
          uVar4 = uVar4 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar4 = 0;
        iVar12 = 0;
      }
      uVar11 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar11 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar7) {
        iVar7 = iVar2;
      }
    }
    if (iVar7 != iVar2) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      iVar9 = iVar9 >> 5;
      uVar5 = 0xffffffff;
      do {
        lVar14 = *(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (longlong)iVar7 * 0x10);
        if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x18) == *param_2)) {
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
        uVar5 = uVar5 & ~(uint)uVar11;
        puVar13 = *(uint **)(lVar3 + 0x1e0);
        if (*(uint **)(lVar3 + 0x1e0) == (uint *)0x0) {
          puVar13 = (uint *)(lVar3 + 0x1d0);
        }
        iVar7 = (int)uVar4;
        lVar14 = (longlong)iVar7;
        uVar8 = puVar13[lVar14] & uVar5;
        if (uVar8 == 0) {
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar9 <= iVar7) {
            return 0;
          }
          lVar6 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar8 = puVar13[lVar14 + lVar6 + 1];
            if (uVar8 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar10 - lVar14 == lVar6) {
              return 0;
            }
          }
          uVar4 = (ulonglong)(iVar7 + (int)lVar6 + 1);
          uVar5 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar11 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
  return 0;
}



// FUNCTION 14467f056 FUN_14467f056 body=17297 status=ok
// SIG undefined FUN_14467f056(void)

undefined8 FUN_14467f056(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  double *pdVar16;
  double *pdVar17;
  longlong lVar18;
  double *pdVar19;
  int iVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  void *pvVar23;
  void *pvVar24;
  undefined8 *puVar25;
  code *pcVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  longlong *plVar48;
  longlong *plVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStack_368 [32];
  float local_348;
  uint local_340;
  double **local_338;
  undefined8 *local_328;
  double *local_320;
  longlong *local_318;
  double *local_310;
  longlong local_308;
  longlong *local_300;
  longlong *local_2f8;
  uint *local_2f0;
  longlong *local_2e8;
  double *local_2e0;
  double *local_2d8;
  longlong *local_2d0;
  double *local_2c8;
  double *local_2c0;
  double *local_2b8;
  longlong *local_2b0;
  double *local_2a8;
  double *local_2a0;
  double *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  double *local_270;
  double *local_268;
  double *local_260;
  longlong local_258;
  longlong local_250;
  double local_248;
  longlong *local_240;
  ulonglong local_238;
  longlong local_230;
  longlong *local_228;
  longlong local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong lStack_1d0;
  longlong *local_1c8;
  void *local_1b8;
  undefined8 uStack_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  double dStack_180;
  double local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double local_160;
  undefined1 local_158;
  double *local_148;
  double dStack_140;
  double *local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  dVar45 = (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (*(int *)(param_1 + 0x58) == 0) {
    fVar34 = *(float *)(param_1 + 0x55);
  }
  else {
    fVar34 = (float)*(double *)(*(longlong *)(param_1[0x57] + 8) + 0x1f8);
    *(float *)(param_1 + 0x55) = fVar34;
  }
  *(undefined1 *)(param_1 + 0x56) = 0;
  fVar55 = *(float *)((longlong)param_1 + 0x294);
  if (((fVar34 != fVar55) || (NAN(fVar34) || NAN(fVar55))) &&
     (1.0 / (float)*(int *)((longlong)param_1 + 0x8c) <= fVar34 - fVar55)) {
    *(float *)((longlong)param_1 + 0x294) = fVar34;
    *(int *)(param_1 + 0x52) = *(int *)(param_1 + 0x52) + (int)param_2[1];
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  FUN_14467e4fe(param_2);
  if ((*(char *)(param_1 + 0x56) == '\x01') && (*(char *)((longlong)param_1 + 0x94) == '\x01')) {
    cVar4 = *(char *)(param_1 + 0x11);
    local_328 = param_1;
    if (cVar4 == '\x02') {
      if ((longlong)*(int *)(param_1 + 0x58) != 0) {
        pdVar19 = (double *)param_1[0x57];
        pdVar16 = pdVar19 + (longlong)*(int *)(param_1 + 0x58) * 3;
        pdVar17 = (double *)(param_1 + 0x5d);
        local_310 = (double *)(param_2 + 0x12);
        local_2f8 = param_2 + 0x14;
        local_2e8 = param_2 + 0xe;
        local_318 = param_2 + 0x10;
        local_2f0 = (uint *)(param_2 + 0xc);
        uVar5 = 0;
        do {
          dVar45 = pdVar19[1];
          if (((*(char *)(*(longlong *)((longlong)dVar45 + 0x9d8) + 0x22) == '\x01') &&
              (0 < *(int *)(param_1 + 0x5e))) &&
             ((dVar46 = *(double *)((longlong)dVar45 + 0x1f8), 0.0 < dVar46 &&
              (0 < *(int *)(param_1 + 0x12))))) {
            local_2b8 = (double *)*pdVar19;
            local_2c0 = (double *)pdVar19[2];
            local_2c8 = pdVar16;
            if ((((((0.0 < (double)param_1[0x18]) || (0.0 < (double)param_1[0x19])) ||
                  (0.0 < (double)param_1[0x1a])) ||
                 ((0.0 < (double)param_1[0x1b] || (0.0 < (double)param_1[0x1c])))) ||
                ((0.0 < (double)param_1[0x1d] ||
                 ((0.0 < (double)param_1[0x1e] || (0.0 < (double)param_1[0x1f])))))) ||
               ((((0.0 < (double)param_1[0x20] ||
                  (((0.0 < (double)param_1[0x21] || (0.0 < (double)param_1[0x22])) ||
                   (0.0 < (double)param_1[0x23])))) ||
                 (((*(int *)(param_1 + 0x24) != -1 || (*(char *)((longlong)param_1 + 0x125) != '\0')
                   ) || (*(char *)(param_1 + 0x27) != '\0')))) ||
                (*(char *)(param_1 + 0x2a) != '\0')))) {
              local_188 = (undefined8 *)0x0;
              dStack_180 = 0.0;
              FUN_1498a94b2(&local_188);
              iVar31 = *(int *)(param_1 + 0x5e);
              if (0 < iVar31) {
                fVar34 = (float)((double)param_1[0x18] * (double)param_1[0x18]);
                fVar55 = (float)((double)param_1[0x19] * (double)param_1[0x19]);
                lVar29 = 0;
                lVar27 = 0;
                iVar32 = 0;
                do {
                  lVar30 = param_1[0x5d];
                  dVar41 = *(double *)(lVar30 + 0x18 + lVar29);
                  dVar44 = *(double *)(lVar30 + 0x20 + lVar29);
                  dVar47 = *(double *)(lVar30 + 0x28 + lVar29);
                  fVar60 = (float)(dVar47 * dVar47 + dVar41 * dVar41 + dVar44 * dVar44);
                  dVar41 = (double)param_1[0x18];
                  if (((((((0.0 < dVar41) &&
                          ((double)param_1[0x19] <= 0.0 && (double)param_1[0x19] != 0.0)) &&
                         (fVar60 < fVar34)) ||
                        (((dVar41 < 0.0 && (0.0 < (double)param_1[0x19])) && (fVar55 < fVar60)))) ||
                       (((0.0 < dVar41 && (0.0 < (double)param_1[0x19])) &&
                        ((fVar60 < fVar34 || (fVar55 < fVar60)))))) ||
                      (((((dVar41 = (double)param_1[0x1a], 0.0 < dVar41 &&
                          ((double)param_1[0x1b] <= 0.0 && (double)param_1[0x1b] != 0.0)) &&
                         (pdVar16 = (double *)(lVar30 + 0x48 + lVar29),
                         *pdVar16 <= dVar41 && dVar41 != *pdVar16)) ||
                        (((dVar41 < 0.0 && (0.0 < (double)param_1[0x1b])) &&
                         ((double)param_1[0x1b] < *(double *)(lVar30 + 0x48 + lVar29))))) ||
                       (((0.0 < dVar41 && (0.0 < (double)param_1[0x1b])) &&
                        ((dVar44 = *(double *)(lVar30 + 0x48 + lVar29), dVar44 < dVar41 ||
                         ((double)param_1[0x1b] < dVar44)))))))) ||
                     ((((((dVar41 = (double)param_1[0x1c], 0.0 < dVar41 &&
                          ((double)param_1[0x1d] <= 0.0 && (double)param_1[0x1d] != 0.0)) &&
                         (pdVar16 = (double *)(lVar30 + 0x58 + lVar29),
                         *pdVar16 <= dVar41 && dVar41 != *pdVar16)) ||
                        (((((dVar41 < 0.0 && (0.0 < (double)param_1[0x1d])) &&
                           ((double)param_1[0x1d] < *(double *)(lVar30 + 0x58 + lVar29))) ||
                          (((0.0 < dVar41 && (0.0 < (double)param_1[0x1d])) &&
                           ((dVar44 = *(double *)(lVar30 + 0x58 + lVar29), dVar44 < dVar41 ||
                            ((double)param_1[0x1d] < dVar44)))))) ||
                         (((dVar41 = (double)param_1[0x1e], 0.0 < dVar41 &&
                           ((double)param_1[0x1f] <= 0.0 && (double)param_1[0x1f] != 0.0)) &&
                          (pdVar16 = (double *)(lVar30 + 0x60 + lVar29),
                          *pdVar16 <= dVar41 && dVar41 != *pdVar16)))))) ||
                       (((((dVar41 < 0.0 && (0.0 < (double)param_1[0x1f])) &&
                          ((double)param_1[0x1f] < *(double *)(lVar30 + 0x60 + lVar29))) ||
                         (((0.0 < dVar41 && (0.0 < (double)param_1[0x1f])) &&
                          ((dVar44 = *(double *)(lVar30 + 0x60 + lVar29), dVar44 < dVar41 ||
                           ((double)param_1[0x1f] < dVar44)))))) ||
                        (((dVar41 = (double)param_1[0x20], 0.0 < dVar41 &&
                          ((double)param_1[0x21] <= 0.0 && (double)param_1[0x21] != 0.0)) &&
                         (pdVar16 = (double *)(lVar30 + 0x50 + lVar29),
                         *pdVar16 <= dVar41 && dVar41 != *pdVar16)))))) ||
                      (((((((dVar41 < 0.0 && (0.0 < (double)param_1[0x21])) &&
                           ((double)param_1[0x21] < *(double *)(lVar30 + 0x50 + lVar29))) ||
                          (((0.0 < dVar41 && (0.0 < (double)param_1[0x21])) &&
                           ((dVar44 = *(double *)(lVar30 + 0x50 + lVar29), dVar44 < dVar41 ||
                            ((double)param_1[0x21] < dVar44)))))) ||
                         (((dVar41 = (double)param_1[0x22], 0.0 < dVar41 &&
                           ((double)param_1[0x23] <= 0.0 && (double)param_1[0x23] != 0.0)) &&
                          ((double)*(float *)(param_1 + 0x55) < dVar41)))) ||
                        (((dVar41 < 0.0 && (0.0 < (double)param_1[0x23])) &&
                         ((double)param_1[0x23] < (double)*(float *)(param_1 + 0x55))))) ||
                       ((((0.0 < dVar41 && (0.0 < (double)param_1[0x23])) &&
                         (((double)*(float *)(param_1 + 0x55) < dVar41 ||
                          ((double)param_1[0x23] < (double)*(float *)(param_1 + 0x55))))) ||
                        ((*(int *)(param_1 + 0x24) != -1 &&
                         (*(int *)(lVar30 + 0x68 + lVar29) != *(int *)(param_1 + 0x24)))))))))))
                  goto LAB_144682fc3;
                  if (*(char *)((longlong)param_1 + 0x124) == '\x01') {
                    cVar4 = *(char *)((longlong)param_1 + 0x125);
                    if (cVar4 == '\x03') {
                      if ((*(double *)(lVar30 + lVar29) <= (double)param_1[0x25]) ||
                         ((double)param_1[0x26] <= *(double *)(lVar30 + lVar29)))
                      goto LAB_144682e54;
                    }
                    else if (cVar4 == '\x02') {
                      if ((double)param_1[0x26] < *(double *)(lVar30 + lVar29) ||
                          (double)param_1[0x26] == *(double *)(lVar30 + lVar29)) goto LAB_144682e54;
                    }
                    else {
                      if ((cVar4 == '\x01') &&
                         ((double)param_1[0x25] <= *(double *)(lVar30 + lVar29) &&
                          *(double *)(lVar30 + lVar29) != (double)param_1[0x25]))
                      goto LAB_144682fc3;
LAB_144682e54:
                      cVar4 = *(char *)(param_1 + 0x27);
                      if (cVar4 == '\x03') {
                        dVar41 = *(double *)(lVar30 + 8 + lVar29);
                        if ((dVar41 <= (double)param_1[0x28]) || ((double)param_1[0x29] <= dVar41))
                        goto LAB_144682eb9;
                        goto LAB_144682fc3;
                      }
                      if (cVar4 == '\x02') {
                        pdVar16 = (double *)(lVar30 + 8 + lVar29);
                        if ((double)param_1[0x29] < *pdVar16 || (double)param_1[0x29] == *pdVar16)
                        goto LAB_144682eb9;
                        goto LAB_144682fc3;
                      }
                      if ((cVar4 == '\x01') &&
                         (dVar41 = *(double *)(lVar30 + 8 + lVar29),
                         (double)param_1[0x28] <= dVar41 && dVar41 != (double)param_1[0x28]))
                      goto LAB_144682fc3;
LAB_144682eb9:
                      cVar4 = *(char *)(param_1 + 0x2a);
                      if (cVar4 == '\x03') {
                        dVar41 = *(double *)(lVar30 + 0x10 + lVar29);
                        if ((dVar41 <= (double)param_1[0x2b]) || ((double)param_1[0x2c] <= dVar41))
                        goto LAB_144682fa6;
                        goto LAB_144682fc3;
                      }
                      if (cVar4 == '\x02') {
                        pdVar16 = (double *)(lVar30 + 0x10 + lVar29);
                        if ((double)param_1[0x2c] < *pdVar16 || (double)param_1[0x2c] == *pdVar16)
                        goto LAB_144682fa6;
                        goto LAB_144682fc3;
                      }
                      if ((cVar4 == '\x01') &&
                         (dVar41 = *(double *)(lVar30 + 0x10 + lVar29),
                         (double)param_1[0x2b] <= dVar41 && dVar41 != (double)param_1[0x2b]))
                      goto LAB_144682fc3;
LAB_144682fa6:
                      puVar14 = (undefined8 *)(lVar30 + lVar29);
                      puVar22 = local_188 + (longlong)iVar32 * 0xe;
                      for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
                        *puVar22 = *puVar14;
                        puVar14 = puVar14 + 1;
                        puVar22 = puVar22 + 1;
                      }
                      iVar32 = iVar32 + 1;
                      iVar31 = *(int *)(param_1 + 0x5e);
                    }
                  }
                  else {
                    if (*(char *)((longlong)param_1 + 0x124) != '\0') goto LAB_144682fa6;
                    cVar4 = *(char *)((longlong)param_1 + 0x125);
                    if (cVar4 == '\x03') {
                      dVar41 = *(double *)(lVar30 + lVar29);
                      if (dVar41 <= (double)param_1[0x25]) goto LAB_144682fc3;
LAB_144682de8:
                      if ((double)param_1[0x26] <= dVar41) goto LAB_144682fc3;
                    }
                    else {
                      if (cVar4 == '\x02') {
                        dVar41 = *(double *)(lVar30 + lVar29);
                        goto LAB_144682de8;
                      }
                      if ((cVar4 == '\x01') &&
                         (*(double *)(lVar30 + lVar29) <= (double)param_1[0x25]))
                      goto LAB_144682fc3;
                    }
                    cVar4 = *(char *)(param_1 + 0x27);
                    if (cVar4 == '\x03') {
                      dVar41 = *(double *)(lVar30 + 8 + lVar29);
                      if (dVar41 <= (double)param_1[0x28]) goto LAB_144682fc3;
LAB_144682f13:
                      if ((double)param_1[0x29] <= dVar41) goto LAB_144682fc3;
                    }
                    else {
                      if (cVar4 == '\x02') {
                        dVar41 = *(double *)(lVar30 + 8 + lVar29);
                        goto LAB_144682f13;
                      }
                      if ((cVar4 == '\x01') &&
                         (*(double *)(lVar30 + 8 + lVar29) <= (double)param_1[0x28]))
                      goto LAB_144682fc3;
                    }
                    cVar4 = *(char *)(param_1 + 0x2a);
                    if (cVar4 == '\x03') {
                      dVar41 = *(double *)(lVar30 + 0x10 + lVar29);
                      if ((double)param_1[0x2b] < dVar41) goto LAB_144682f9c;
                    }
                    else if (cVar4 == '\x02') {
                      dVar41 = *(double *)(lVar30 + 0x10 + lVar29);
LAB_144682f9c:
                      if (dVar41 < (double)param_1[0x2c]) goto LAB_144682fa6;
                    }
                    else if ((cVar4 != '\x01') ||
                            ((double)param_1[0x2b] < *(double *)(lVar30 + 0x10 + lVar29)))
                    goto LAB_144682fa6;
                  }
LAB_144682fc3:
                  lVar27 = lVar27 + 1;
                  lVar29 = lVar29 + 0x70;
                } while (lVar27 < iVar31);
              }
              FUN_1498a94fa(&local_188);
              if (dStack_180._0_4_ != *(int *)(param_1 + 0x5e)) {
                FUN_1498a94b2(pdVar17);
              }
              if (0 < SUB84(dStack_180,0)) {
                lVar29 = 0;
                do {
                  puVar14 = (undefined8 *)((longlong)local_188 + lVar29);
                  puVar22 = (undefined8 *)((longlong)*pdVar17 + lVar29);
                  for (lVar27 = 0xe; lVar27 != 0; lVar27 = lVar27 + -1) {
                    *puVar22 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  lVar29 = lVar29 + 0x70;
                } while (((ulonglong)dStack_180 & 0xffffffff) * 0x70 - lVar29 != 0);
              }
              if (local_188 != (undefined8 *)0x0) {
                FUN_1400020a8(local_188);
              }
            }
            cVar4 = *(char *)((longlong)param_1 + 0x16c);
            if (((cVar4 == '\x01') || (cVar4 == '\x02')) || (cVar4 == '\x03')) {
              FUN_1498b5208(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
            }
            local_188 = (undefined8 *)0x0;
            dStack_180 = 0.0;
            iVar31 = *(int *)(param_1 + 0x5e);
            iVar32 = *(int *)(param_1 + 0x12);
            local_320 = pdVar17;
            if (iVar32 < iVar31) {
              FUN_1498a94b2();
              if (0 < *(int *)(param_1 + 0x12)) {
                lVar29 = 0;
                puVar14 = local_188;
                do {
                  fVar34 = (float)(int)lVar29 * ((float)iVar31 / (float)iVar32);
                  puVar22 = (undefined8 *)
                            ((longlong)((int)ROUND(fVar34 + fVar34 + -0.5) >> 1) * 0x70 +
                            param_1[0x5d]);
                  puVar25 = puVar14;
                  for (lVar27 = 0xe; lVar27 != 0; lVar27 = lVar27 + -1) {
                    *puVar25 = *puVar22;
                    puVar22 = puVar22 + 1;
                    puVar25 = puVar25 + 1;
                  }
                  lVar29 = lVar29 + 1;
                  puVar14 = puVar14 + 0xe;
                } while (lVar29 < *(int *)(param_1 + 0x12));
              }
            }
            else {
              FUN_1498a94b2();
              if (0 < *(int *)(param_1 + 0x5e)) {
                lVar29 = 0;
                lVar27 = 0;
                do {
                  puVar14 = (undefined8 *)(param_1[0x5d] + lVar29);
                  puVar22 = (undefined8 *)((longlong)local_188 + lVar29);
                  for (lVar30 = 0xe; lVar30 != 0; lVar30 = lVar30 + -1) {
                    *puVar22 = *puVar14;
                    puVar14 = puVar14 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  lVar27 = lVar27 + 1;
                  lVar29 = lVar29 + 0x70;
                } while (lVar27 < *(int *)(param_1 + 0x5e));
              }
            }
            if (0 < dStack_180._0_4_) {
              pdVar17 = (double *)0x0;
              do {
                local_148 = local_2b8;
                local_138 = local_2c0;
                local_348 = (float)dVar46;
                local_340 = uVar5;
                local_2d8 = pdVar17;
                dStack_140 = dVar45;
                iVar31 = FUN_1498a95b0(param_1,&local_148,local_188 + (longlong)pdVar17 * 0xe,
                                       param_2);
                if (0 < iVar31) {
                  do {
                    puVar14 = local_188;
                    iVar32 = (int)param_2[0x13];
                    *(uint *)(param_2 + 0x13) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x9c) < iVar32 + 1U) {
                      FUN_1446f48e2(local_310,iVar32);
                    }
                    *(undefined4 *)(param_2[0x12] + (longlong)iVar32 * 4) =
                         *(undefined4 *)(puVar14 + (longlong)pdVar17 * 0xe + 0xd);
                    iVar32 = (int)param_2[0x15];
                    *(uint *)(param_2 + 0x15) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0xac) < iVar32 + 1U) {
                      FUN_1467ff840(local_2f8,iVar32);
                    }
                    param_1 = local_328;
                    puVar1 = (undefined4 *)(param_2[0x14] + (longlong)iVar32 * 0x10);
                    *puVar1 = 0x3f800000;
                    puVar1[1] = 0x3f800000;
                    puVar1[2] = 0x3f800000;
                    puVar1[3] = 0x3f800000;
                    iVar32 = (int)param_2[0xf];
                    *(uint *)(param_2 + 0xf) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x7c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2e8,iVar32);
                    }
                    *(undefined4 *)(param_2[0xe] + (longlong)iVar32 * 4) = 0x3f333333;
                    iVar32 = (int)param_2[0x11];
                    *(uint *)(param_2 + 0x11) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x8c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_318,iVar32);
                    }
                    *(undefined4 *)(param_2[0x10] + (longlong)iVar32 * 4) = 0x3e99999a;
                    iVar32 = (int)param_2[0xd];
                    *(uint *)(param_2 + 0xd) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x6c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2f0,iVar32);
                    }
                    *(undefined4 *)(*(longlong *)local_2f0 + (longlong)iVar32 * 4) = 0x3f800000;
                    iVar31 = iVar31 + -1;
                  } while (iVar31 != 0);
                }
                pdVar17 = (double *)((longlong)local_2d8 + 1);
              } while ((longlong)pdVar17 < (longlong)dStack_180._0_4_);
            }
            pdVar16 = local_2c8;
            pdVar17 = local_320;
            if (local_188 != (undefined8 *)0x0) {
              FUN_1400020a8();
              pdVar16 = local_2c8;
              pdVar17 = local_320;
            }
          }
          uVar5 = uVar5 + 1;
          pdVar19 = pdVar19 + 3;
        } while (pdVar19 != pdVar16);
      }
    }
    else if (cVar4 == '\x01') {
      if ((longlong)*(int *)(param_1 + 0x58) != 0) {
        plVar15 = (longlong *)param_1[0x57];
        plVar49 = plVar15 + (longlong)*(int *)(param_1 + 0x58) * 3;
        plVar48 = param_1 + 0x5b;
        local_318 = param_2 + 0x12;
        local_2f8 = param_2 + 0x2a;
        local_2d8 = (double *)(param_2 + 0x2c);
        local_2b8 = (double *)(param_2 + 0x2e);
        local_270 = (double *)(param_2 + 0x14);
        local_2c0 = (double *)(param_2 + 0xe);
        local_2c8 = (double *)(param_2 + 0x10);
        local_2e8 = param_2 + 0xc;
        local_2f0 = (uint *)(param_1 + 0x3a);
        local_2a8 = (double *)(param_1 + 0x31);
        local_2a0 = (double *)(param_1 + 0x2e);
        local_2b0 = param_1 + 0x34;
        uVar5 = 0;
        do {
          lVar29 = plVar15[1];
          if (((*(char *)(*(longlong *)(lVar29 + 0x9d8) + 0x21) == '\x01') &&
              (0 < *(int *)(param_1 + 0x5c))) &&
             ((dVar45 = *(double *)(lVar29 + 0x1f8), 0.0 < dVar45 && (0 < *(int *)(param_1 + 0x12)))
             )) {
            local_300 = (longlong *)CONCAT44(local_300._4_4_,uVar5);
            local_278 = (longlong *)*plVar15;
            local_280 = (longlong *)plVar15[2];
            local_308 = lVar29;
            local_2d0 = plVar48;
            local_290 = plVar49;
            local_288 = plVar15;
            if (((*(char *)((longlong)param_1 + 0x1bc) != '\0') || (0.0 < (double)param_1[0x18])) ||
               ((0.0 < (double)param_1[0x19] ||
                (((((((0.0 < (double)param_1[0x1a] || (0.0 < (double)param_1[0x1b])) ||
                     (0.0 < (double)param_1[0x1c])) ||
                    ((0.0 < (double)param_1[0x1d] || (0.0 < (double)param_1[0x1e])))) ||
                   ((0.0 < (double)param_1[0x1f] ||
                    ((0.0 < (double)param_1[0x20] || (0.0 < (double)param_1[0x21])))))) ||
                  (0.0 < (double)param_1[0x22])) ||
                 ((((0.0 < (double)param_1[0x23] || (*(int *)(param_1 + 0x24) != -1)) ||
                   (*(char *)((longlong)param_1 + 0x125) != '\0')) ||
                  ((*(char *)(param_1 + 0x27) != '\0' || (*(char *)(param_1 + 0x2a) != '\0')))))))))
               ) {
              local_148 = (double *)0x0;
              dStack_140 = 0.0;
              FUN_1498a81c4(&local_148);
              local_320 = (double *)0x0;
              local_310 = (double *)CONCAT44(local_310._4_4_,*(int *)(param_1 + 0x5c));
              if (0 < *(int *)(param_1 + 0x5c)) {
                fVar55 = (float)((double)param_1[0x18] * (double)param_1[0x18]);
                fVar34 = (float)((double)param_1[0x19] * (double)param_1[0x19]);
                lVar29 = 0;
                local_2e0 = local_148;
                local_320 = (double *)0x0;
                do {
                  lVar27 = param_1[0x5b];
                  lVar30 = lVar29 * 0x110;
                  pdVar17 = (double *)(lVar27 + lVar30);
                  dVar46 = *(double *)(lVar27 + 0x18 + lVar30);
                  dVar41 = *(double *)(lVar27 + 0x20 + lVar30);
                  dVar44 = *(double *)(lVar27 + 0x28 + lVar30);
                  if (*(char *)((longlong)param_1 + 0x1bc) == '\x01') {
                    if ((uint)*(ushort *)((longlong)pdVar17 + 0x102) < DAT_14c87eb08 + 1U) {
                      iVar31 = *(int *)(param_1 + 0x3d);
                      if (iVar31 == 0) {
                        uVar21 = 1;
                        uVar28 = 0;
                        iVar20 = 0;
                        iVar32 = 0;
                      }
                      else {
                        puVar13 = (uint *)param_1[0x3c];
                        if ((uint *)param_1[0x3c] == (uint *)0x0) {
                          puVar13 = local_2f0;
                        }
                        uVar5 = *puVar13;
                        if (uVar5 == 0) {
                          iVar32 = iVar31 + 0x1e;
                          if (-1 < iVar31 + -1) {
                            iVar32 = iVar31 + -1;
                          }
                          uVar28 = 0;
                          uVar21 = (ulonglong)(uint)(iVar32 >> 5);
                          if (iVar32 >> 5 < 1) {
                            uVar21 = uVar28;
                          }
                          iVar20 = 0;
                          do {
                            if (uVar21 == uVar28) goto LAB_144681d6a;
                            iVar20 = iVar20 + 0x20;
                            uVar5 = puVar13[uVar28 + 1];
                            uVar28 = uVar28 + 1;
                          } while (uVar5 == 0);
                        }
                        else {
                          uVar28 = 0;
                          iVar20 = 0;
                        }
                        uVar21 = (ulonglong)(-uVar5 & uVar5);
                        uVar2 = uVar21 * 2 + 1;
                        lVar18 = 0x3f;
                        if (uVar2 != 0) {
                          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                          }
                        }
                        iVar32 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                        if (iVar31 <= iVar32) {
                          iVar32 = iVar31;
                        }
                      }
                      if (iVar32 != iVar31) {
                        plVar48 = param_1 + 0x38;
                        iVar6 = iVar31 + 0x1e;
                        if (-1 < iVar31 + -1) {
                          iVar6 = iVar31 + -1;
                        }
                        iVar6 = iVar6 >> 5;
                        uVar5 = 0xffffffff;
                        do {
                          lVar18 = *(longlong *)(*plVar48 + (longlong)iVar32 * 0x10);
                          param_1 = local_328;
                          if ((lVar18 != 0) && (*(double *)(lVar18 + 0x18) == pdVar17[0x20]))
                          goto LAB_1446817b7;
                          uVar5 = uVar5 & ~(uint)uVar21;
                          puVar13 = (uint *)local_328[0x3c];
                          if ((uint *)local_328[0x3c] == (uint *)0x0) {
                            puVar13 = local_2f0;
                          }
                          iVar32 = (int)uVar28;
                          lVar18 = (longlong)iVar32;
                          uVar7 = puVar13[lVar18] & uVar5;
                          if (uVar7 == 0) {
                            iVar12 = iVar6;
                            if (iVar6 < iVar32) {
                              iVar12 = iVar32;
                            }
                            if (iVar6 <= iVar32) break;
                            lVar33 = 0;
                            while( true ) {
                              iVar20 = iVar20 + 0x20;
                              uVar7 = puVar13[lVar18 + lVar33 + 1];
                              if (uVar7 != 0) break;
                              lVar33 = lVar33 + 1;
                              if (iVar12 - lVar18 == lVar33) goto LAB_144681d6a;
                            }
                            uVar28 = (ulonglong)(iVar32 + (int)lVar33 + 1);
                            uVar5 = 0xffffffff;
                          }
                          uVar21 = (ulonglong)(-uVar7 & uVar7);
                          uVar2 = uVar21 * 2 + 1;
                          lVar18 = 0x3f;
                          if (uVar2 != 0) {
                            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                            }
                          }
                          iVar32 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                        } while (iVar32 < iVar31);
                      }
                    }
                  }
                  else {
LAB_1446817b7:
                    fVar60 = (float)(dVar44 * dVar44 + dVar46 * dVar46 + dVar41 * dVar41);
                    dVar46 = (double)param_1[0x18];
                    if ((((((dVar46 <= 0.0) ||
                           ((0.0 < (double)param_1[0x19] || (double)param_1[0x19] == 0.0 ||
                            (fVar55 <= fVar60)))) &&
                          ((0.0 <= dVar46 || (((double)param_1[0x19] <= 0.0 || (fVar60 <= fVar34))))
                          )) && (((((dVar46 <= 0.0 || ((double)param_1[0x19] <= 0.0)) ||
                                   ((fVar55 <= fVar60 && (fVar60 <= fVar34)))) &&
                                  ((dVar46 = (double)param_1[0x1a], dVar46 <= 0.0 ||
                                   ((0.0 < (double)param_1[0x1b] || (double)param_1[0x1b] == 0.0 ||
                                    (pdVar19 = (double *)(lVar27 + 0x48 + lVar30),
                                    dVar46 < *pdVar19 || dVar46 == *pdVar19)))))) &&
                                 (((0.0 <= dVar46 ||
                                   (((double)param_1[0x1b] <= 0.0 ||
                                    (*(double *)(lVar27 + 0x48 + lVar30) <= (double)param_1[0x1b])))
                                   ) && ((dVar46 <= 0.0 ||
                                         (((double)param_1[0x1b] <= 0.0 ||
                                          ((dVar41 = *(double *)(lVar27 + 0x48 + lVar30),
                                           dVar46 <= dVar41 && (dVar41 <= (double)param_1[0x1b])))))
                                         ))))))) &&
                        (((dVar46 = (double)param_1[0x1c], dVar46 <= 0.0 ||
                          ((0.0 < (double)param_1[0x1d] || (double)param_1[0x1d] == 0.0 ||
                           (pdVar19 = (double *)(lVar27 + 0x58 + lVar30),
                           dVar46 < *pdVar19 || dVar46 == *pdVar19)))) &&
                         ((((((0.0 <= dVar46 ||
                              (((double)param_1[0x1d] <= 0.0 ||
                               (*(double *)(lVar27 + 0x58 + lVar30) <= (double)param_1[0x1d])))) &&
                             ((dVar46 <= 0.0 ||
                              (((double)param_1[0x1d] <= 0.0 ||
                               ((dVar41 = *(double *)(lVar27 + 0x58 + lVar30), dVar46 <= dVar41 &&
                                (dVar41 <= (double)param_1[0x1d])))))))) &&
                            ((dVar46 = (double)param_1[0x1e], dVar46 <= 0.0 ||
                             ((0.0 < (double)param_1[0x1f] || (double)param_1[0x1f] == 0.0 ||
                              (pdVar19 = (double *)(lVar27 + 0x60 + lVar30),
                              dVar46 < *pdVar19 || dVar46 == *pdVar19)))))) &&
                           ((0.0 <= dVar46 ||
                            (((double)param_1[0x1f] <= 0.0 ||
                             (*(double *)(lVar27 + 0x60 + lVar30) <= (double)param_1[0x1f])))))) &&
                          ((dVar46 <= 0.0 ||
                           (((double)param_1[0x1f] <= 0.0 ||
                            ((dVar41 = *(double *)(lVar27 + 0x60 + lVar30), dVar46 <= dVar41 &&
                             (dVar41 <= (double)param_1[0x1f])))))))))))) &&
                       (((dVar46 = (double)param_1[0x20], dVar46 <= 0.0 ||
                         ((0.0 < (double)param_1[0x21] || (double)param_1[0x21] == 0.0 ||
                          (pdVar19 = (double *)(lVar27 + 0x50 + lVar30),
                          dVar46 < *pdVar19 || dVar46 == *pdVar19)))) &&
                        ((((0.0 <= dVar46 ||
                           (((double)param_1[0x21] <= 0.0 ||
                            (*(double *)(lVar27 + 0x50 + lVar30) <= (double)param_1[0x21])))) &&
                          ((dVar46 <= 0.0 ||
                           (((double)param_1[0x21] <= 0.0 ||
                            ((dVar41 = *(double *)(lVar27 + 0x50 + lVar30), dVar46 <= dVar41 &&
                             (dVar41 <= (double)param_1[0x21])))))))) &&
                         ((((dVar46 = (double)param_1[0x22], dVar46 <= 0.0 ||
                            ((0.0 < (double)param_1[0x23] || (double)param_1[0x23] == 0.0 ||
                             (dVar46 <= (double)*(float *)(param_1 + 0x55))))) &&
                           (((0.0 <= dVar46 ||
                             (((double)param_1[0x23] <= 0.0 ||
                              ((double)*(float *)(param_1 + 0x55) <= (double)param_1[0x23])))) &&
                            ((dVar46 <= 0.0 ||
                             (((double)param_1[0x23] <= 0.0 ||
                              ((dVar46 <= (double)*(float *)(param_1 + 0x55) &&
                               ((double)*(float *)(param_1 + 0x55) <= (double)param_1[0x23])))))))))
                           ) && ((*(int *)(param_1 + 0x24) == -1 ||
                                 (*(int *)(lVar27 + 0x68 + lVar30) == *(int *)(param_1 + 0x24)))))))
                        )))) {
                      if (*(char *)((longlong)param_1 + 0x124) == '\x01') {
                        cVar4 = *(char *)((longlong)param_1 + 0x125);
                        if (cVar4 == '\x03') {
                          if ((*pdVar17 <= (double)param_1[0x25]) ||
                             ((double)param_1[0x26] <= *pdVar17)) goto LAB_144681be2;
                        }
                        else if (cVar4 == '\x02') {
                          if ((double)param_1[0x26] < *pdVar17 || (double)param_1[0x26] == *pdVar17)
                          goto LAB_144681be2;
                        }
                        else {
                          if ((cVar4 == '\x01') &&
                             ((double)param_1[0x25] <= *pdVar17 && *pdVar17 != (double)param_1[0x25]
                             )) goto LAB_144681d6a;
LAB_144681be2:
                          cVar4 = *(char *)(param_1 + 0x27);
                          if (cVar4 == '\x03') {
                            dVar46 = *(double *)(lVar27 + 8 + lVar30);
                            if ((dVar46 <= (double)param_1[0x28]) ||
                               ((double)param_1[0x29] <= dVar46)) goto LAB_144681c47;
                            goto LAB_144681d6a;
                          }
                          if (cVar4 == '\x02') {
                            pdVar19 = (double *)(lVar27 + 8 + lVar30);
                            if ((double)param_1[0x29] < *pdVar19 ||
                                (double)param_1[0x29] == *pdVar19) goto LAB_144681c47;
                            goto LAB_144681d6a;
                          }
                          if ((cVar4 == '\x01') &&
                             (dVar46 = *(double *)(lVar27 + 8 + lVar30),
                             (double)param_1[0x28] <= dVar46 && dVar46 != (double)param_1[0x28]))
                          goto LAB_144681d6a;
LAB_144681c47:
                          cVar4 = *(char *)(param_1 + 0x2a);
                          if (cVar4 == '\x03') {
                            dVar46 = *(double *)(lVar27 + 0x10 + lVar30);
                            if ((dVar46 <= (double)param_1[0x2b]) ||
                               ((double)param_1[0x2c] <= dVar46)) goto LAB_144681d37;
                            goto LAB_144681d6a;
                          }
                          if (cVar4 == '\x02') {
                            pdVar19 = (double *)(lVar27 + 0x10 + lVar30);
                            if ((double)param_1[0x2c] < *pdVar19 ||
                                (double)param_1[0x2c] == *pdVar19) goto LAB_144681d37;
                            goto LAB_144681d6a;
                          }
                          if ((cVar4 == '\x01') &&
                             (dVar46 = *(double *)(lVar27 + 0x10 + lVar30),
                             (double)param_1[0x2b] <= dVar46 && dVar46 != (double)param_1[0x2b]))
                          goto LAB_144681d6a;
LAB_144681d37:
                          iVar31 = (int)local_320;
                          memcpy(local_2e0 + (longlong)iVar31 * 0x22,pdVar17,0x108);
                          local_320 = (double *)(ulonglong)(iVar31 + 1);
                          local_310 = (double *)
                                      CONCAT44(local_310._4_4_,*(undefined4 *)(param_1 + 0x5c));
                        }
                      }
                      else {
                        if (*(char *)((longlong)param_1 + 0x124) != '\0') goto LAB_144681d37;
                        cVar4 = *(char *)((longlong)param_1 + 0x125);
                        if (cVar4 == '\x03') {
                          dVar46 = *pdVar17;
                          uVar37 = SUB84(dVar46,0);
                          uVar36 = (undefined4)((ulonglong)dVar46 >> 0x20);
                          if (dVar46 <= (double)param_1[0x25]) goto LAB_144681d6a;
LAB_144681b78:
                          if ((double)param_1[0x26] <= (double)CONCAT44(uVar36,uVar37))
                          goto LAB_144681d6a;
                        }
                        else {
                          if (cVar4 == '\x02') {
                            uVar37 = SUB84(*pdVar17,0);
                            uVar36 = (undefined4)((ulonglong)*pdVar17 >> 0x20);
                            goto LAB_144681b78;
                          }
                          if ((cVar4 == '\x01') && (*pdVar17 <= (double)param_1[0x25]))
                          goto LAB_144681d6a;
                        }
                        cVar4 = *(char *)(param_1 + 0x27);
                        if (cVar4 == '\x03') {
                          dVar46 = *(double *)(lVar27 + 8 + lVar30);
                          uVar37 = SUB84(dVar46,0);
                          uVar36 = (undefined4)((ulonglong)dVar46 >> 0x20);
                          if (dVar46 <= (double)param_1[0x28]) goto LAB_144681d6a;
LAB_144681ca1:
                          if ((double)param_1[0x29] <= (double)CONCAT44(uVar36,uVar37))
                          goto LAB_144681d6a;
                        }
                        else {
                          if (cVar4 == '\x02') {
                            uVar3 = *(undefined8 *)(lVar27 + 8 + lVar30);
                            uVar37 = (undefined4)uVar3;
                            uVar36 = (undefined4)((ulonglong)uVar3 >> 0x20);
                            goto LAB_144681ca1;
                          }
                          if ((cVar4 == '\x01') &&
                             (*(double *)(lVar27 + 8 + lVar30) <= (double)param_1[0x28]))
                          goto LAB_144681d6a;
                        }
                        cVar4 = *(char *)(param_1 + 0x2a);
                        if (cVar4 == '\x03') {
                          dVar46 = *(double *)(lVar27 + 0x10 + lVar30);
                          uVar37 = SUB84(dVar46,0);
                          uVar36 = (undefined4)((ulonglong)dVar46 >> 0x20);
                          if ((double)param_1[0x2b] < dVar46) goto LAB_144681d2d;
                        }
                        else if (cVar4 == '\x02') {
                          uVar3 = *(undefined8 *)(lVar27 + 0x10 + lVar30);
                          uVar37 = (undefined4)uVar3;
                          uVar36 = (undefined4)((ulonglong)uVar3 >> 0x20);
LAB_144681d2d:
                          if ((double)CONCAT44(uVar36,uVar37) < (double)param_1[0x2c])
                          goto LAB_144681d37;
                        }
                        else if ((cVar4 != '\x01') ||
                                ((double)param_1[0x2b] < *(double *)(lVar27 + 0x10 + lVar30)))
                        goto LAB_144681d37;
                      }
                    }
                  }
LAB_144681d6a:
                  lVar29 = lVar29 + 1;
                } while (lVar29 < (int)local_310);
              }
              FUN_1498a820c(&local_148,local_320);
              plVar48 = local_2d0;
              if (dStack_140._0_4_ != *(uint *)(param_1 + 0x5c)) {
                FUN_1498a81c4(local_2d0);
              }
              pdVar17 = local_148;
              if (0 < (int)dStack_140._0_4_) {
                uVar21 = (ulonglong)dStack_140._0_4_;
                lVar29 = 0;
                do {
                  memcpy((void *)(*plVar48 + lVar29),(void *)((longlong)pdVar17 + lVar29),0x108);
                  lVar29 = lVar29 + 0x110;
                } while (uVar21 * 0x110 - lVar29 != 0);
              }
              if (pdVar17 != (double *)0x0) {
                FUN_1400020a8(pdVar17);
              }
            }
            cVar4 = *(char *)((longlong)param_1 + 0x16c);
            if (cVar4 == '\x01') {
              pcVar26 = FUN_1498a8296;
LAB_144681e30:
              FUN_1498b48e7(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c),pcVar26);
            }
            else {
              pcVar26 = (code *)&LAB_1498a827a;
              if (cVar4 == '\x02') goto LAB_144681e30;
              if (cVar4 == '\x03') {
                pcVar26 = (code *)&LAB_1498a8288;
                goto LAB_144681e30;
              }
            }
            local_1b8 = (void *)0x0;
            uStack_1b0 = 0;
            if (*(char *)((longlong)param_1 + 0x16e) == '\x01') {
              dVar46 = *local_2a8;
              dVar41 = dVar46 - *local_2a0;
              if (dVar41 <= 100.0) goto LAB_144681f12;
              dVar44 = (double)param_1[0x32] - (double)param_1[0x2f];
              if (dVar44 <= 100.0) goto LAB_144681f12;
              dVar47 = (double)param_1[0x33] - (double)param_1[0x30];
              if ((((100000000.0 <= dVar47) || (100000000.0 <= dVar44)) || (100000000.0 <= dVar41))
                 || (((dVar47 <= 100.0 ||
                      (local_310 = (double *)*local_2b0, (double)local_310 < 1.0)) ||
                     ((local_320 = (double *)param_1[0x35], (double)local_320 < 1.0 ||
                      ((local_2e0 = (double *)param_1[0x36], (double)local_2e0 < 1.0 ||
                       (*(int *)(param_1 + 0x5c) < 2)))))))) goto LAB_144681f12;
              dVar41 = (double)(float)(((double)(uint)-(int)((ulonglong)
                                                             (longlong)
                                                             ROUND(-0.5 - (dVar41 / (double)
                                                  local_310 + dVar41 / (double)local_310)) >> 1) *
                                        (double)local_310 - dVar41) * 0.5);
              param_1[0x2e] = *local_2a0 - dVar41;
              local_348 = (float)-(int)((ulonglong)
                                        (longlong)
                                        ROUND(-0.5 - (dVar44 / (double)local_320 +
                                                     dVar44 / (double)local_320)) >> 1);
              param_1[0x31] = dVar46 + dVar41;
              dVar46 = (double)(float)(((double)(uint)local_348 * (double)local_320 - dVar44) * 0.5)
              ;
              param_1[0x2f] = (double)param_1[0x2f] - dVar46;
              local_340 = -(int)((ulonglong)
                                 (longlong)
                                 ROUND(-0.5 - (dVar47 / (double)local_2e0 +
                                              dVar47 / (double)local_2e0)) >> 1);
              param_1[0x32] = (double)param_1[0x32] + dVar46;
              dVar46 = (double)(float)(((double)local_340 * (double)local_2e0 - dVar47) * 0.5);
              param_1[0x30] = (double)param_1[0x30] - dVar46;
              param_1[0x33] = (double)param_1[0x33] + dVar46;
              local_178 = local_2a0[2];
              local_188 = (undefined8 *)*local_2a0;
              dStack_180 = local_2a0[1];
              local_160 = local_2a8[2];
              local_170 = *(undefined4 *)local_2a8;
              uStack_16c = *(undefined4 *)((longlong)local_2a8 + 4);
              uStack_168 = *(undefined4 *)(local_2a8 + 1);
              uStack_164 = *(undefined4 *)((longlong)local_2a8 + 0xc);
              local_158 = 1;
              local_128 = 0;
              local_120 = 0;
              local_148 = (double *)0x0;
              dStack_140 = 0.0;
              local_11c = 0xffffffff00000080;
              local_114 = 0;
              local_108 = 0;
              local_100 = 0;
              local_338 = &local_148;
              FUN_1498a82c4(plVar48,&local_188,local_2b0);
              local_198 = (void *)0x0;
              uStack_190 = 0;
              FUN_1498a7e68(&local_148,&local_198);
              if (0 < (int)(uint)uStack_190) {
                lVar29 = 0;
                do {
                  local_1a8 = (void *)0x0;
                  uStack_1a0 = 0;
                  FUN_1498a810a(&local_148,*(undefined4 *)((longlong)local_198 + lVar29 * 4),
                                &local_1a8);
                  uVar5 = (uint)uStack_1a0;
                  if ((int)*(uint *)(param_1 + 0x37) < (int)(uint)uStack_1a0) {
                    uVar5 = *(uint *)(param_1 + 0x37);
                  }
                  if (0 < (int)uVar5) {
                    uVar21 = 0;
                    do {
                      uVar28 = uStack_1b0;
                      iVar31 = *(int *)((longlong)local_1a8 + uVar21 * 4);
                      lVar27 = *plVar48;
                      lVar30 = (longlong)(int)uStack_1b0;
                      uVar7 = (int)uStack_1b0 + 1;
                      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar7);
                      if (uStack_1b0._4_4_ < uVar7) {
                        FUN_1498b41b2(&local_1b8,uVar28 & 0xffffffff);
                      }
                      memcpy((void *)(lVar30 * 0x110 + (longlong)local_1b8),
                             (void *)((longlong)iVar31 * 0x110 + lVar27),0x110);
                      uVar21 = uVar21 + 1;
                    } while (uVar5 != uVar21);
                  }
                  if (local_1a8 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar29 = lVar29 + 1;
                } while (lVar29 < (int)(uint)uStack_190);
              }
              iVar32 = (int)uStack_1b0;
              iVar31 = *(int *)(param_1 + 0x12);
              if (iVar31 < (int)uStack_1b0) {
                local_1a8 = (void *)0x0;
                uStack_1a0 = 0;
                FUN_1498a81c4(&local_1a8,iVar31);
                pvVar23 = local_1b8;
                puVar14 = local_328;
                if (0 < *(int *)(local_328 + 0x12)) {
                  lVar29 = 0;
                  pvVar24 = local_1a8;
                  do {
                    fVar34 = (float)(int)lVar29 * ((float)iVar32 / (float)iVar31);
                    memcpy(pvVar24,(void *)((longlong)((int)ROUND(fVar34 + fVar34 + -0.5) >> 1) *
                                            0x110 + (longlong)pvVar23),0x108);
                    lVar29 = lVar29 + 1;
                    pvVar24 = (void *)((longlong)pvVar24 + 0x110);
                  } while (lVar29 < *(int *)(puVar14 + 0x12));
                }
                FUN_1498a81c4(&local_1b8);
                pvVar24 = local_1a8;
                pvVar23 = local_1b8;
                puVar14 = local_328;
                if (0 < *(int *)(local_328 + 0x12)) {
                  lVar29 = 0;
                  lVar27 = 0;
                  do {
                    memcpy((void *)((longlong)pvVar23 + lVar29),(void *)((longlong)pvVar24 + lVar29)
                           ,0x108);
                    lVar27 = lVar27 + 1;
                    lVar29 = lVar29 + 0x110;
                  } while (lVar27 < *(int *)(puVar14 + 0x12));
                }
                if (pvVar24 != (void *)0x0) {
                  FUN_1400020a8(pvVar24);
                }
              }
              if (local_198 != (void *)0x0) {
                FUN_1400020a8();
              }
              local_100 = 0;
              if (local_108 != 0) {
                FUN_1400020a8();
              }
              FUN_1409da246();
              param_1 = local_328;
            }
            else {
LAB_144681f12:
              iVar31 = *(int *)(param_1 + 0x5c);
              iVar32 = *(int *)(param_1 + 0x12);
              if (iVar32 < iVar31) {
                FUN_1498a81c4(&local_1b8,iVar32);
                if (0 < *(int *)(param_1 + 0x12)) {
                  lVar29 = 0;
                  pvVar23 = local_1b8;
                  do {
                    fVar34 = (float)(int)lVar29 * ((float)iVar31 / (float)iVar32);
                    memcpy(pvVar23,(void *)((longlong)((int)ROUND(fVar34 + fVar34 + -0.5) >> 1) *
                                            0x110 + param_1[0x5b]),0x108);
                    lVar29 = lVar29 + 1;
                    pvVar23 = (void *)((longlong)pvVar23 + 0x110);
                  } while (lVar29 < *(int *)(param_1 + 0x12));
                }
              }
              else {
                FUN_1498a81c4(&local_1b8,iVar31);
                pvVar23 = local_1b8;
                if (0 < *(int *)(param_1 + 0x5c)) {
                  lVar29 = 0;
                  lVar27 = 0;
                  do {
                    memcpy((void *)((longlong)pvVar23 + lVar29),(void *)(param_1[0x5b] + lVar29),
                           0x108);
                    lVar27 = lVar27 + 1;
                    lVar29 = lVar29 + 0x110;
                  } while (lVar27 < *(int *)(param_1 + 0x5c));
                }
              }
            }
            if (0 < (int)uStack_1b0) {
              lVar29 = 0;
              uVar5 = (uint)local_300;
              do {
                local_340 = uVar5;
                lVar27 = lVar29 * 0x110;
                local_1d8 = local_278;
                lStack_1d0 = local_308;
                local_1c8 = local_280;
                local_348 = (float)dVar45;
                iVar31 = FUN_1498a84a2(param_1,&local_1d8,(void *)((longlong)local_1b8 + lVar27),
                                       param_2);
                if (0 < iVar31) {
                  do {
                    pvVar23 = local_1b8;
                    iVar32 = (int)param_2[0x13];
                    *(uint *)(param_2 + 0x13) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x9c) < iVar32 + 1U) {
                      FUN_1446f48e2(local_318,iVar32);
                    }
                    pvVar24 = local_1b8;
                    *(undefined4 *)(param_2[0x12] + (longlong)iVar32 * 4) =
                         *(undefined4 *)((longlong)pvVar23 + lVar27 + 0x68);
                    iVar32 = (int)param_2[0x2b];
                    *(uint *)(param_2 + 0x2b) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x15c) < iVar32 + 1U) {
                      FUN_1403e3958(local_2f8,iVar32);
                    }
                    pvVar23 = local_1b8;
                    lVar30 = param_2[0x2a];
                    *(undefined8 *)(lVar30 + 0x10 + (longlong)iVar32 * 0x18) =
                         *(undefined8 *)((longlong)pvVar24 + lVar27 + 0x80);
                    uVar37 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0x74);
                    uVar36 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0x78);
                    uVar38 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0x7c);
                    puVar1 = (undefined4 *)(lVar30 + (longlong)iVar32 * 0x18);
                    *puVar1 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0x70);
                    puVar1[1] = uVar37;
                    puVar1[2] = uVar36;
                    puVar1[3] = uVar38;
                    iVar32 = (int)param_2[0x2d];
                    *(uint *)(param_2 + 0x2d) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x16c) < iVar32 + 1U) {
                      FUN_140e16be0(local_2d8,iVar32);
                    }
                    pvVar24 = local_1b8;
                    lVar30 = param_2[0x2c];
                    uVar37 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0x90);
                    uVar36 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0x94);
                    uVar38 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0x98);
                    uVar39 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0x9c);
                    uVar58 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0xa4);
                    uVar40 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0xa8);
                    uVar59 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0xac);
                    puVar1 = (undefined4 *)(lVar30 + 0x10 + (longlong)iVar32 * 0x20);
                    *puVar1 = *(undefined4 *)((longlong)pvVar23 + lVar27 + 0xa0);
                    puVar1[1] = uVar58;
                    puVar1[2] = uVar40;
                    puVar1[3] = uVar59;
                    puVar1 = (undefined4 *)(lVar30 + (longlong)iVar32 * 0x20);
                    *puVar1 = uVar37;
                    puVar1[1] = uVar36;
                    puVar1[2] = uVar38;
                    puVar1[3] = uVar39;
                    iVar32 = (int)param_2[0x2f];
                    *(uint *)(param_2 + 0x2f) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x17c) < iVar32 + 1U) {
                      FUN_1403e3958(local_2b8,iVar32);
                    }
                    lVar30 = param_2[0x2e];
                    *(undefined8 *)(lVar30 + 0x10 + (longlong)iVar32 * 0x18) =
                         *(undefined8 *)((longlong)pvVar24 + lVar27 + 0xc0);
                    uVar37 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0xb4);
                    uVar36 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0xb8);
                    uVar38 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0xbc);
                    puVar1 = (undefined4 *)(lVar30 + (longlong)iVar32 * 0x18);
                    *puVar1 = *(undefined4 *)((longlong)pvVar24 + lVar27 + 0xb0);
                    puVar1[1] = uVar37;
                    puVar1[2] = uVar36;
                    puVar1[3] = uVar38;
                    iVar32 = (int)param_2[0x15];
                    *(uint *)(param_2 + 0x15) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0xac) < iVar32 + 1U) {
                      FUN_1467ff840(local_270,iVar32);
                    }
                    puVar1 = (undefined4 *)(param_2[0x14] + (longlong)iVar32 * 0x10);
                    *puVar1 = 0x3f800000;
                    puVar1[1] = 0x3f800000;
                    puVar1[2] = 0x3f800000;
                    puVar1[3] = 0x3f800000;
                    iVar32 = (int)param_2[0xf];
                    *(uint *)(param_2 + 0xf) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x7c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2c0,iVar32);
                    }
                    *(undefined4 *)(param_2[0xe] + (longlong)iVar32 * 4) = 0x3f333333;
                    iVar32 = (int)param_2[0x11];
                    *(uint *)(param_2 + 0x11) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x8c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2c8,iVar32);
                    }
                    *(undefined4 *)(param_2[0x10] + (longlong)iVar32 * 4) = 0x3e99999a;
                    iVar32 = (int)param_2[0xd];
                    *(uint *)(param_2 + 0xd) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x6c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2e8,iVar32);
                    }
                    *(undefined4 *)(*local_2e8 + (longlong)iVar32 * 4) = 0x3f800000;
                    iVar31 = iVar31 + -1;
                  } while (iVar31 != 0);
                }
                lVar29 = lVar29 + 1;
                uVar5 = (uint)local_300;
              } while (lVar29 < (int)uStack_1b0);
            }
            plVar15 = local_288;
            plVar49 = local_290;
            plVar48 = local_2d0;
            uVar5 = (uint)local_300;
            if (local_1b8 != (void *)0x0) {
              FUN_1400020a8();
              plVar15 = local_288;
              plVar49 = local_290;
              plVar48 = local_2d0;
              uVar5 = (uint)local_300;
            }
          }
          uVar5 = uVar5 + 1;
          plVar15 = plVar15 + 3;
        } while (plVar15 != plVar49);
      }
      if (*(int *)((longlong)param_1 + 0x2e4) < 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        FUN_1498b4f52(param_1 + 0x5b);
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    else if ((cVar4 == '\0') && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
      lVar27 = param_1[0x57];
      lVar29 = lVar27 + (longlong)*(int *)(param_1 + 0x58) * 0x18;
      plVar48 = param_1 + 0x59;
      local_240 = param_2 + 0x12;
      local_228 = param_2 + 0x14;
      local_2a0 = (double *)(param_2 + 0xe);
      local_2a8 = (double *)(param_2 + 0x10);
      local_2f0 = (uint *)(param_2 + 0xc);
      pdVar17 = (double *)(param_1 + 0x31);
      local_260 = (double *)(param_1 + 0x2e);
      local_268 = (double *)(param_1 + 0x34);
      local_2b0 = param_2 + 2;
      local_2d0 = param_2 + 10;
      local_278 = param_2 + 0x16;
      local_280 = param_2 + 0x18;
      local_288 = param_2 + 0x1a;
      local_290 = param_2 + 0x1c;
      local_1e0 = param_2 + 0x1e;
      local_1e8 = param_2 + 0x20;
      local_1f0 = param_2 + 0x22;
      local_1f8 = param_2 + 0x24;
      local_200 = param_2 + 0x26;
      local_208 = param_2 + 0x28;
      local_210 = param_2 + 4;
      local_218 = param_2 + 6;
      local_2e8 = param_2 + 8;
      iVar31 = 0;
      local_300 = plVar48;
      do {
        uVar37 = (undefined4)((ulonglong)dVar45 >> 0x20);
        fVar34 = SUB84(dVar45,0);
        lVar30 = *(longlong *)(lVar27 + 8);
        if ((((*(char *)(*(longlong *)(lVar30 + 0x9d8) + 0x20) == '\x01') &&
             (0 < *(int *)(param_1 + 0x5a))) &&
            (plVar49 = *(longlong **)(lVar30 + 0x1f8), 0.0 < (double)plVar49)) &&
           (0 < *(int *)(param_1 + 0x12))) {
          local_318 = plVar49;
          local_298 = pdVar17;
          local_258 = lVar27;
          local_250 = lVar29;
          local_220 = lVar30;
          if ((((((*(char *)((longlong)param_1 + 0x1bc) != '\0') || (0.0 < (double)param_1[0x16]))
                || ((0.0 < (double)param_1[0x17] ||
                    ((0.0 < (double)param_1[0x18] || (0.0 < (double)param_1[0x19])))))) ||
               (0.0 < (double)param_1[0x1a])) ||
              (((0.0 < (double)param_1[0x1b] || (0.0 < (double)param_1[0x1c])) ||
               (0.0 < (double)param_1[0x1d])))) ||
             (((0.0 < (double)param_1[0x1e] || (0.0 < (double)param_1[0x1f])) ||
              ((((0.0 < (double)param_1[0x20] ||
                 ((0.0 < (double)param_1[0x21] || (0.0 < (double)param_1[0x22])))) ||
                (0.0 < (double)param_1[0x23])) ||
               ((((*(int *)(param_1 + 0x24) != -1 || (*(char *)((longlong)param_1 + 0x125) != '\0'))
                 || (*(char *)(param_1 + 0x27) != '\0')) || (*(char *)(param_1 + 0x2a) != '\0'))))))
             )) {
            local_148 = (double *)0x0;
            dStack_140 = 0.0;
            FUN_1498a7b56(&local_148);
            iVar32 = *(int *)(param_1 + 0x5a);
            iVar20 = 0;
            local_188 = param_1;
            if (0 < iVar32) {
              fVar55 = (float)((double)param_1[0x16] * (double)param_1[0x16]);
              fVar61 = (float)((double)param_1[0x17] * (double)param_1[0x17]);
              fVar34 = (float)((double)param_1[0x18] * (double)param_1[0x18]);
              fVar60 = (float)((double)param_1[0x19] * (double)param_1[0x19]);
              lVar27 = 0;
              lVar29 = 0xe0;
              local_310 = local_148;
              iVar20 = 0;
              do {
                lVar30 = param_1[0x59];
                dVar45 = *(double *)(lVar30 + -200 + lVar29);
                dVar46 = *(double *)(lVar30 + -0xc0 + lVar29);
                dVar41 = *(double *)(lVar30 + -0xb8 + lVar29);
                dVar44 = *(double *)(lVar30 + -0x98 + lVar29);
                dVar47 = *(double *)(lVar30 + -0x90 + lVar29);
                dVar43 = *(double *)(lVar30 + -0x88 + lVar29);
                if (((*(char *)((longlong)param_1 + 0x1bc) != '\x01') ||
                    (cVar4 = FUN_14467eec0(&local_188,lVar30 + lVar29 + -8), cVar4 != '\0')) ||
                   (cVar4 = FUN_14467eec0(&local_188,lVar30 + lVar29), cVar4 != '\0')) {
                  fVar35 = (float)(dVar41 * dVar41 + dVar45 * dVar45 + dVar46 * dVar46);
                  dVar45 = (double)param_1[0x16];
                  if ((((dVar45 <= 0.0) ||
                       (0.0 < (double)param_1[0x17] || (double)param_1[0x17] == 0.0)) ||
                      (fVar55 <= fVar35)) &&
                     ((((0.0 <= dVar45 || ((double)param_1[0x17] <= 0.0)) || (fVar35 <= fVar61)) &&
                      (((dVar45 <= 0.0 || ((double)param_1[0x17] <= 0.0)) ||
                       ((fVar55 <= fVar35 && (fVar35 <= fVar61)))))))) {
                    fVar35 = (float)(dVar43 * dVar43 + dVar44 * dVar44 + dVar47 * dVar47);
                    dVar45 = (double)param_1[0x18];
                    if ((((((((dVar45 <= 0.0) ||
                             (0.0 < (double)param_1[0x19] || (double)param_1[0x19] == 0.0)) ||
                            (fVar34 <= fVar35)) &&
                           (((0.0 <= dVar45 || ((double)param_1[0x19] <= 0.0)) || (fVar35 <= fVar60)
                            ))) && (((dVar45 <= 0.0 || ((double)param_1[0x19] <= 0.0)) ||
                                    ((fVar34 <= fVar35 && (fVar35 <= fVar60)))))) &&
                         ((((dVar45 = (double)param_1[0x1a], dVar45 <= 0.0 ||
                            (0.0 < (double)param_1[0x1b] || (double)param_1[0x1b] == 0.0)) ||
                           (pdVar17 = (double *)(lVar30 + -0x38 + lVar29),
                           dVar45 < *pdVar17 || dVar45 == *pdVar17)) &&
                          ((((0.0 <= dVar45 || ((double)param_1[0x1b] <= 0.0)) ||
                            (*(double *)(lVar30 + -0x38 + lVar29) <= (double)param_1[0x1b])) &&
                           (((dVar45 <= 0.0 || ((double)param_1[0x1b] <= 0.0)) ||
                            ((dVar46 = *(double *)(lVar30 + -0x38 + lVar29), dVar45 <= dVar46 &&
                             (dVar46 <= (double)param_1[0x1b])))))))))) &&
                        (((dVar45 = (double)param_1[0x1c], dVar45 <= 0.0 ||
                          (0.0 < (double)param_1[0x1d] || (double)param_1[0x1d] == 0.0)) ||
                         (pdVar17 = (double *)(lVar30 + -0x20 + lVar29),
                         dVar45 < *pdVar17 || dVar45 == *pdVar17)))) &&
                       ((((((0.0 <= dVar45 || ((double)param_1[0x1d] <= 0.0)) ||
                           (*(double *)(lVar30 + -0x20 + lVar29) <= (double)param_1[0x1d])) &&
                          (((dVar45 <= 0.0 || ((double)param_1[0x1d] <= 0.0)) ||
                           ((dVar46 = *(double *)(lVar30 + -0x20 + lVar29), dVar45 <= dVar46 &&
                            (dVar46 <= (double)param_1[0x1d])))))) &&
                         (((dVar45 = (double)param_1[0x1e], dVar45 <= 0.0 ||
                           (0.0 < (double)param_1[0x1f] || (double)param_1[0x1f] == 0.0)) ||
                          (pdVar17 = (double *)(lVar30 + -0x18 + lVar29),
                          dVar45 < *pdVar17 || dVar45 == *pdVar17)))) &&
                        (((((((((0.0 <= dVar45 || ((double)param_1[0x1f] <= 0.0)) ||
                               (*(double *)(lVar30 + -0x18 + lVar29) <= (double)param_1[0x1f])) &&
                              (((dVar45 <= 0.0 || ((double)param_1[0x1f] <= 0.0)) ||
                               ((dVar46 = *(double *)(lVar30 + -0x18 + lVar29), dVar45 <= dVar46 &&
                                (dVar46 <= (double)param_1[0x1f])))))) &&
                             (((dVar45 = (double)param_1[0x20], dVar45 <= 0.0 ||
                               (0.0 < (double)param_1[0x21] || (double)param_1[0x21] == 0.0)) ||
                              (pdVar17 = (double *)(lVar30 + -0x28 + lVar29),
                              dVar45 < *pdVar17 || dVar45 == *pdVar17)))) &&
                            ((((0.0 <= dVar45 || ((double)param_1[0x21] <= 0.0)) ||
                              (*(double *)(lVar30 + -0x28 + lVar29) <= (double)param_1[0x21])) &&
                             (((dVar45 <= 0.0 || ((double)param_1[0x21] <= 0.0)) ||
                              ((dVar46 = *(double *)(lVar30 + -0x28 + lVar29), dVar45 <= dVar46 &&
                               (dVar46 <= (double)param_1[0x21])))))))) &&
                           (((dVar45 = (double)param_1[0x22], dVar45 <= 0.0 ||
                             (0.0 < (double)param_1[0x23] || (double)param_1[0x23] == 0.0)) ||
                            (dVar45 <= (double)*(float *)(param_1 + 0x55))))) &&
                          ((((0.0 <= dVar45 || ((double)param_1[0x23] <= 0.0)) ||
                            ((double)*(float *)(param_1 + 0x55) <= (double)param_1[0x23])) &&
                           (((dVar45 <= 0.0 || ((double)param_1[0x23] <= 0.0)) ||
                            ((dVar45 <= (double)*(float *)(param_1 + 0x55) &&
                             ((double)*(float *)(param_1 + 0x55) <= (double)param_1[0x23])))))))) &&
                         (((iVar6 = *(int *)(param_1 + 0x24), iVar6 == -1 ||
                           (*(int *)(lVar30 + -0x10 + lVar29) == iVar6)) ||
                          (*(int *)(lVar30 + -0xc + lVar29) == iVar6)))))))) {
                      pdVar17 = (double *)(lVar30 + lVar29 + -0xe0);
                      if (*(char *)((longlong)param_1 + 0x124) == '\x01') {
                        cVar4 = *(char *)((longlong)param_1 + 0x125);
                        if (cVar4 == '\x03') {
                          if ((*pdVar17 <= (double)param_1[0x25]) ||
                             ((double)param_1[0x26] <= *pdVar17)) goto LAB_14467fa76;
                        }
                        else if (cVar4 == '\x02') {
                          if ((double)param_1[0x26] < *pdVar17 || (double)param_1[0x26] == *pdVar17)
                          goto LAB_14467fa76;
                        }
                        else {
                          if ((cVar4 == '\x01') &&
                             ((double)param_1[0x25] <= *pdVar17 && *pdVar17 != (double)param_1[0x25]
                             )) goto LAB_14467fc16;
LAB_14467fa76:
                          cVar4 = *(char *)(param_1 + 0x27);
                          if (cVar4 == '\x03') {
                            dVar45 = *(double *)(lVar30 + -0xd8 + lVar29);
                            if ((dVar45 <= (double)param_1[0x28]) ||
                               ((double)param_1[0x29] <= dVar45)) goto LAB_14467fae4;
                            goto LAB_14467fc16;
                          }
                          if (cVar4 == '\x02') {
                            pdVar19 = (double *)(lVar30 + -0xd8 + lVar29);
                            if ((double)param_1[0x29] < *pdVar19 ||
                                (double)param_1[0x29] == *pdVar19) goto LAB_14467fae4;
                            goto LAB_14467fc16;
                          }
                          if ((cVar4 == '\x01') &&
                             (dVar45 = *(double *)(lVar30 + -0xd8 + lVar29),
                             (double)param_1[0x28] <= dVar45 && dVar45 != (double)param_1[0x28]))
                          goto LAB_14467fc16;
LAB_14467fae4:
                          cVar4 = *(char *)(param_1 + 0x2a);
                          if (cVar4 == '\x03') {
                            dVar45 = *(double *)(lVar30 + -0xd0 + lVar29);
                            if ((dVar45 <= (double)param_1[0x2b]) ||
                               ((double)param_1[0x2c] <= dVar45)) goto LAB_14467fbf4;
                            goto LAB_14467fc16;
                          }
                          if (cVar4 == '\x02') {
                            pdVar19 = (double *)(lVar30 + -0xd0 + lVar29);
                            if ((double)param_1[0x2c] < *pdVar19 ||
                                (double)param_1[0x2c] == *pdVar19) goto LAB_14467fbf4;
                            goto LAB_14467fc16;
                          }
                          if ((cVar4 == '\x01') &&
                             (dVar45 = *(double *)(lVar30 + -0xd0 + lVar29),
                             (double)param_1[0x2b] <= dVar45 && dVar45 != (double)param_1[0x2b]))
                          goto LAB_14467fc16;
LAB_14467fbf4:
                          memcpy(local_310 + (longlong)iVar20 * 0x1d,pdVar17,0xe8);
                          iVar20 = iVar20 + 1;
                          iVar32 = *(int *)(param_1 + 0x5a);
                        }
                      }
                      else {
                        if (*(char *)((longlong)param_1 + 0x124) != '\0') goto LAB_14467fbf4;
                        cVar4 = *(char *)((longlong)param_1 + 0x125);
                        if (cVar4 == '\x03') {
                          dVar45 = *pdVar17;
                          uVar36 = SUB84(dVar45,0);
                          uVar38 = (undefined4)((ulonglong)dVar45 >> 0x20);
                          if (dVar45 <= (double)param_1[0x25]) goto LAB_14467fc16;
LAB_14467fa09:
                          if ((double)param_1[0x26] <= (double)CONCAT44(uVar38,uVar36))
                          goto LAB_14467fc16;
                        }
                        else {
                          if (cVar4 == '\x02') {
                            uVar36 = SUB84(*pdVar17,0);
                            uVar38 = (undefined4)((ulonglong)*pdVar17 >> 0x20);
                            goto LAB_14467fa09;
                          }
                          if ((cVar4 == '\x01') && (*pdVar17 <= (double)param_1[0x25]))
                          goto LAB_14467fc16;
                        }
                        cVar4 = *(char *)(param_1 + 0x27);
                        if (cVar4 == '\x03') {
                          dVar45 = *(double *)(lVar30 + -0xd8 + lVar29);
                          uVar36 = SUB84(dVar45,0);
                          uVar38 = (undefined4)((ulonglong)dVar45 >> 0x20);
                          if (dVar45 <= (double)param_1[0x28]) goto LAB_14467fc16;
LAB_14467fb4b:
                          if ((double)param_1[0x29] <= (double)CONCAT44(uVar38,uVar36))
                          goto LAB_14467fc16;
                        }
                        else {
                          if (cVar4 == '\x02') {
                            uVar3 = *(undefined8 *)(lVar30 + -0xd8 + lVar29);
                            uVar36 = (undefined4)uVar3;
                            uVar38 = (undefined4)((ulonglong)uVar3 >> 0x20);
                            goto LAB_14467fb4b;
                          }
                          if ((cVar4 == '\x01') &&
                             (*(double *)(lVar30 + -0xd8 + lVar29) <= (double)param_1[0x28]))
                          goto LAB_14467fc16;
                        }
                        cVar4 = *(char *)(param_1 + 0x2a);
                        if (cVar4 == '\x03') {
                          dVar45 = *(double *)(lVar30 + -0xd0 + lVar29);
                          uVar36 = SUB84(dVar45,0);
                          uVar38 = (undefined4)((ulonglong)dVar45 >> 0x20);
                          if ((double)param_1[0x2b] < dVar45) goto LAB_14467fbea;
                        }
                        else if (cVar4 == '\x02') {
                          uVar3 = *(undefined8 *)(lVar30 + -0xd0 + lVar29);
                          uVar36 = (undefined4)uVar3;
                          uVar38 = (undefined4)((ulonglong)uVar3 >> 0x20);
LAB_14467fbea:
                          if ((double)CONCAT44(uVar38,uVar36) < (double)param_1[0x2c])
                          goto LAB_14467fbf4;
                        }
                        else if ((cVar4 != '\x01') ||
                                ((double)param_1[0x2b] < *(double *)(lVar30 + -0xd0 + lVar29)))
                        goto LAB_14467fbf4;
                      }
                    }
                  }
                }
LAB_14467fc16:
                lVar27 = lVar27 + 1;
                lVar29 = lVar29 + 0xe8;
              } while (lVar27 < iVar32);
            }
            FUN_1498a7b9e(&local_148,iVar20);
            plVar48 = local_300;
            if (dStack_140._0_4_ != *(uint *)(param_1 + 0x5a)) {
              FUN_1498a7b56(local_300);
            }
            pdVar17 = local_148;
            if (0 < (int)dStack_140._0_4_) {
              uVar21 = (ulonglong)dStack_140._0_4_;
              lVar29 = 0;
              do {
                memcpy((void *)(*plVar48 + lVar29),(void *)((longlong)pdVar17 + lVar29),0xe8);
                lVar29 = lVar29 + 0xe8;
              } while (uVar21 * 0xe8 - lVar29 != 0);
            }
            if (pdVar17 != (double *)0x0) {
              FUN_1400020a8(pdVar17);
            }
          }
          cVar4 = *(char *)((longlong)param_1 + 0x16c);
          if (cVar4 == '\x01') {
            pcVar26 = FUN_1498a7c5c;
LAB_14467fce4:
            FUN_1498b38a7(param_1[0x59],*(undefined4 *)(param_1 + 0x5a),pcVar26);
          }
          else {
            pcVar26 = (code *)&LAB_1498a7c0c;
            if (cVar4 == '\x02') goto LAB_14467fce4;
            if (cVar4 == '\x03') {
              pcVar26 = (code *)&LAB_1498a7c34;
              goto LAB_14467fce4;
            }
          }
          local_1a8 = (void *)0x0;
          uStack_1a0 = 0;
          if (*(char *)((longlong)param_1 + 0x16e) == '\x01') {
            dVar45 = *local_298;
            dVar46 = dVar45 - *local_260;
            if (dVar46 <= 100.0) goto LAB_14467fde1;
            dVar41 = (double)param_1[0x32] - (double)param_1[0x2f];
            if (dVar41 <= 100.0) goto LAB_14467fde1;
            dVar44 = (double)param_1[0x33] - (double)param_1[0x30];
            if ((((100000000.0 <= dVar44) || (100000000.0 <= dVar41)) || (100000000.0 <= dVar46)) ||
               ((dVar44 <= 100.0 || (dVar47 = *local_268, dVar47 < 1.0)))) goto LAB_14467fde1;
            dVar43 = (double)param_1[0x35];
            fVar34 = SUB84(dVar43,0);
            uVar37 = (undefined4)((ulonglong)dVar43 >> 0x20);
            if ((dVar43 < 1.0) ||
               ((dVar42 = (double)param_1[0x36], dVar42 < 1.0 || (*(int *)(param_1 + 0x5a) < 2))))
            goto LAB_14467fde1;
            local_308 = CONCAT44(local_308._4_4_,iVar31);
            dVar46 = (double)(float)(((double)(uint)-(int)((ulonglong)
                                                           (longlong)
                                                           ROUND(-0.5 - (dVar46 / dVar47 +
                                                                        dVar46 / dVar47)) >> 1) *
                                      dVar47 - dVar46) * 0.5);
            param_1[0x2e] = *local_260 - dVar46;
            local_348 = (float)-(int)((ulonglong)
                                      (longlong)ROUND(-0.5 - (dVar41 / dVar43 + dVar41 / dVar43)) >>
                                     1);
            param_1[0x31] = dVar45 + dVar46;
            dVar45 = (double)(float)(((double)(uint)local_348 * dVar43 - dVar41) * 0.5);
            param_1[0x2f] = (double)param_1[0x2f] - dVar45;
            local_340 = -(int)((ulonglong)
                               (longlong)ROUND(-0.5 - (dVar44 / dVar42 + dVar44 / dVar42)) >> 1);
            param_1[0x32] = (double)param_1[0x32] + dVar45;
            dVar45 = (double)(float)(((double)local_340 * dVar42 - dVar44) * 0.5);
            param_1[0x30] = (double)param_1[0x30] - dVar45;
            param_1[0x33] = (double)param_1[0x33] + dVar45;
            local_178 = local_260[2];
            local_188 = (undefined8 *)*local_260;
            dStack_180 = local_260[1];
            local_160 = local_298[2];
            local_170 = *(undefined4 *)local_298;
            uStack_16c = *(undefined4 *)((longlong)local_298 + 4);
            uStack_168 = *(undefined4 *)(local_298 + 1);
            uStack_164 = *(undefined4 *)((longlong)local_298 + 0xc);
            local_158 = 1;
            local_128 = 0;
            local_120 = 0;
            local_148 = (double *)0x0;
            dStack_140 = 0.0;
            local_11c = 0xffffffff00000080;
            local_114 = 0;
            local_108 = 0;
            local_100 = 0;
            local_338 = &local_148;
            FUN_1498a7c8a(plVar48,&local_188,local_268);
            local_1d8 = (longlong *)0x0;
            lStack_1d0 = 0;
            FUN_1498a7e68(&local_148,&local_1d8);
            if (0 < (int)lStack_1d0) {
              lVar29 = 0;
              do {
                local_198 = (void *)0x0;
                uStack_190 = 0;
                FUN_1498a810a(&local_148,*(undefined4 *)((longlong)local_1d8 + lVar29 * 4),
                              &local_198);
                uVar5 = (uint)uStack_190;
                if ((int)*(uint *)(param_1 + 0x37) < (int)(uint)uStack_190) {
                  uVar5 = *(uint *)(param_1 + 0x37);
                }
                if (0 < (int)uVar5) {
                  uVar21 = 0;
                  do {
                    uVar28 = uStack_1a0;
                    iVar31 = *(int *)((longlong)local_198 + uVar21 * 4);
                    lVar27 = *plVar48;
                    lVar30 = (longlong)(int)(uint)uStack_1a0;
                    uVar7 = (uint)uStack_1a0 + 1;
                    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar7);
                    if (uStack_1a0._4_4_ < uVar7) {
                      FUN_1498b36f6(&local_1a8,uVar28 & 0xffffffff);
                    }
                    memcpy((void *)(lVar30 * 0xe8 + (longlong)local_1a8),
                           (void *)((longlong)iVar31 * 0xe8 + lVar27),0xe8);
                    uVar21 = uVar21 + 1;
                    plVar48 = local_300;
                  } while (uVar5 != uVar21);
                }
                if (local_198 != (void *)0x0) {
                  FUN_1400020a8();
                }
                lVar29 = lVar29 + 1;
              } while (lVar29 < (int)lStack_1d0);
            }
            iVar32 = (uint)uStack_1a0;
            iVar31 = *(int *)(param_1 + 0x12);
            if (iVar31 < (int)(uint)uStack_1a0) {
              local_198 = (void *)0x0;
              uStack_190 = 0;
              FUN_1498a7b56(&local_198,iVar31);
              pvVar23 = local_1a8;
              puVar14 = local_328;
              if (0 < *(int *)(local_328 + 0x12)) {
                lVar29 = 0;
                pvVar24 = local_198;
                do {
                  fVar55 = (float)(int)lVar29 * ((float)iVar32 / (float)iVar31);
                  memcpy(pvVar24,(void *)((longlong)((int)ROUND(fVar55 + fVar55 + -0.5) >> 1) * 0xe8
                                         + (longlong)pvVar23),0xe8);
                  lVar29 = lVar29 + 1;
                  pvVar24 = (void *)((longlong)pvVar24 + 0xe8);
                } while (lVar29 < *(int *)(puVar14 + 0x12));
              }
              FUN_1498a7b56(&local_1a8);
              pvVar24 = local_198;
              pvVar23 = local_1a8;
              puVar14 = local_328;
              if (0 < *(int *)(local_328 + 0x12)) {
                lVar27 = 0;
                lVar29 = 0;
                do {
                  memcpy((void *)((longlong)pvVar23 + lVar27),(void *)((longlong)pvVar24 + lVar27),
                         0xe8);
                  lVar29 = lVar29 + 1;
                  lVar27 = lVar27 + 0xe8;
                } while (lVar29 < *(int *)(puVar14 + 0x12));
              }
              if (pvVar24 != (void *)0x0) {
                FUN_1400020a8(pvVar24);
              }
            }
            if (local_1d8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_100 = 0;
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            FUN_1409da246(&local_148);
            param_1 = local_328;
            iVar31 = (int)local_308;
          }
          else {
LAB_14467fde1:
            iVar32 = *(int *)(param_1 + 0x5a);
            iVar20 = *(int *)(param_1 + 0x12);
            if (iVar20 < iVar32) {
              FUN_1498a7b56(&local_1a8,iVar20);
              if (0 < *(int *)(param_1 + 0x12)) {
                lVar29 = 0;
                pvVar23 = local_1a8;
                do {
                  fVar55 = (float)(int)lVar29 * ((float)iVar32 / (float)iVar20);
                  memcpy(pvVar23,(void *)((longlong)((int)ROUND(fVar55 + fVar55 + -0.5) >> 1) * 0xe8
                                         + param_1[0x59]),0xe8);
                  lVar29 = lVar29 + 1;
                  pvVar23 = (void *)((longlong)pvVar23 + 0xe8);
                } while (lVar29 < *(int *)(param_1 + 0x12));
              }
            }
            else {
              FUN_1498a7b56(&local_1a8,iVar32);
              pvVar23 = local_1a8;
              if (0 < *(int *)(param_1 + 0x5a)) {
                lVar29 = 0;
                lVar27 = 0;
                do {
                  memcpy((void *)((longlong)pvVar23 + lVar29),(void *)(param_1[0x59] + lVar29),0xe8)
                  ;
                  lVar27 = lVar27 + 1;
                  lVar29 = lVar29 + 0xe8;
                } while (lVar27 < *(int *)(param_1 + 0x5a));
              }
            }
          }
          dVar45 = (double)CONCAT44(uVar37,fVar34);
          plVar48 = local_300;
          if (0 < (int)(uint)uStack_1a0) {
            local_2e0 = (double *)CONCAT44(local_2e0._4_4_,(float)(double)local_318);
            dVar46 = (double)(float)(double)local_318;
            lVar29 = 0;
            local_308 = CONCAT44(local_308._4_4_,iVar31);
            local_248 = dVar46;
            do {
              if ((float)(*(double *)(local_220 + 0x1f8) - dVar46) <= *(float *)(param_1 + 0x51)) {
                local_310 = (double *)(lVar29 * 0xe8);
                dVar41 = (double)param_1[0x13];
                uVar37 = SUB84(dVar41,0);
                uVar36 = (undefined4)((ulonglong)dVar41 >> 0x20);
                iVar32 = (int)dVar41;
                dVar44 = (double)param_1[0x14];
                if (dVar41 <= dVar44) {
                  uVar37 = SUB84(dVar44,0);
                  uVar36 = (undefined4)((ulonglong)dVar44 >> 0x20);
                }
                pdVar17 = (double *)((longlong)local_1a8 + (longlong)local_310);
                iVar20 = (int)(double)CONCAT44(uVar36,uVar37) - iVar32;
                if (iVar20 < 0) {
                  iVar20 = 0;
                }
                else {
                  uVar5 = rand();
                  iVar6 = (int)((float)(iVar20 + 1) * ((float)(uVar5 & 0x7fff) / 32767.0));
                  param_1 = local_328;
                  if (iVar6 < iVar20) {
                    iVar20 = iVar6;
                  }
                }
                uVar5 = iVar20 + iVar32;
                if (uVar5 != 0 && SCARRY4(iVar20,iVar32) == (int)uVar5 < 0) {
                  local_2d8 = pdVar17 + 6;
                  local_2b8 = pdVar17 + 9;
                  local_2c0 = pdVar17 + 0xc;
                  local_2c8 = pdVar17 + 3;
                  local_320 = pdVar17 + 0xf;
                  local_270 = pdVar17 + 0x12;
                  local_238 = (ulonglong)uVar5;
                  local_230 = lVar29;
                  do {
                    uVar7 = rand();
                    fVar34 = *(float *)(param_1 + 0x15);
                    if (1.0 <= fVar34) {
                      fVar34 = 1.0;
                    }
                    if (fVar34 <= 0.0) {
                      fVar34 = 0.0;
                    }
                    if ((float)(uVar7 & 0x7fff) / 32767.0 <= fVar34) {
                      uVar7 = rand();
                      fVar34 = (float)(uVar7 & 0x7fff) / 32767.0;
                      iVar31 = (int)(fVar34 + fVar34);
                      if (0 < iVar31) {
                        iVar31 = 1;
                      }
                      fVar34 = *(float *)(&DAT_14bee7e80 + (longlong)iVar31 * 4);
                      dVar46 = (double)param_1[0x43];
                      uVar37 = (undefined4)((ulonglong)dVar46 >> 0x20);
                      dVar41 = (double)param_1[0x44];
                      uVar39 = (undefined4)((ulonglong)dVar41 >> 0x20);
                      uVar36 = SUB84(dVar46,0);
                      uVar38 = uVar37;
                      if (dVar46 <= dVar41) {
                        uVar36 = SUB84(dVar41,0);
                        uVar38 = uVar39;
                      }
                      uVar58 = SUB84(dVar46,0);
                      if (dVar41 <= dVar46) {
                        uVar58 = SUB84(dVar41,0);
                        uVar37 = uVar39;
                      }
                      uVar7 = rand();
                      uVar8 = rand();
                      fVar55 = (float)(uVar8 & 0x7fff) / 32767.0;
                      iVar31 = (int)(fVar55 + fVar55);
                      if (0 < iVar31) {
                        iVar31 = 1;
                      }
                      fVar55 = *(float *)(&DAT_14bee7e80 + (longlong)iVar31 * 4);
                      dVar46 = (double)param_1[0x43];
                      uVar39 = (undefined4)((ulonglong)dVar46 >> 0x20);
                      dVar41 = (double)param_1[0x44];
                      uVar53 = (undefined4)((ulonglong)dVar41 >> 0x20);
                      uVar40 = SUB84(dVar46,0);
                      uVar59 = uVar39;
                      if (dVar46 <= dVar41) {
                        uVar40 = SUB84(dVar41,0);
                        uVar59 = uVar53;
                      }
                      uVar50 = SUB84(dVar46,0);
                      if (dVar41 <= dVar46) {
                        uVar50 = SUB84(dVar41,0);
                        uVar39 = uVar53;
                      }
                      uVar8 = rand();
                      fVar55 = (float)(((double)((float)(uVar8 & 0x7fff) / 32767.0) *
                                        ((double)CONCAT44(uVar59,uVar40) -
                                        (double)CONCAT44(uVar39,uVar50)) +
                                       (double)CONCAT44(uVar39,uVar50)) * (double)fVar55);
                      uVar8 = rand();
                      fVar60 = (float)(uVar8 & 0x7fff) / 32767.0;
                      iVar31 = (int)(fVar60 + fVar60);
                      if (0 < iVar31) {
                        iVar31 = 1;
                      }
                      fVar60 = *(float *)(&DAT_14bee7e80 + (longlong)iVar31 * 4);
                      dVar46 = (double)param_1[0x43];
                      uVar39 = (undefined4)((ulonglong)dVar46 >> 0x20);
                      dVar41 = (double)param_1[0x44];
                      uVar53 = (undefined4)((ulonglong)dVar41 >> 0x20);
                      uVar40 = SUB84(dVar46,0);
                      uVar59 = uVar39;
                      if (dVar46 <= dVar41) {
                        uVar40 = SUB84(dVar41,0);
                        uVar59 = uVar53;
                      }
                      uVar50 = SUB84(dVar46,0);
                      if (dVar41 <= dVar46) {
                        uVar50 = SUB84(dVar41,0);
                        uVar39 = uVar53;
                      }
                      uVar8 = rand();
                      fVar60 = (float)(((double)((float)(uVar8 & 0x7fff) / 32767.0) *
                                        ((double)CONCAT44(uVar59,uVar40) -
                                        (double)CONCAT44(uVar39,uVar50)) +
                                       (double)CONCAT44(uVar39,uVar50)) * (double)fVar60);
                      dVar46 = (double)param_1[0x49];
                      uVar39 = (undefined4)((ulonglong)dVar46 >> 0x20);
                      dVar41 = (double)param_1[0x4c];
                      uVar53 = (undefined4)((ulonglong)dVar41 >> 0x20);
                      uVar40 = SUB84(dVar46,0);
                      uVar59 = uVar39;
                      if (dVar46 <= dVar41) {
                        uVar40 = SUB84(dVar41,0);
                        uVar59 = uVar53;
                      }
                      uVar50 = SUB84(dVar46,0);
                      if (dVar41 <= dVar46) {
                        uVar50 = SUB84(dVar41,0);
                        uVar39 = uVar53;
                      }
                      uVar8 = rand();
                      dVar46 = (double)param_1[0x4a];
                      uVar53 = (undefined4)((ulonglong)dVar46 >> 0x20);
                      dVar41 = (double)param_1[0x4d];
                      uVar52 = (undefined4)((ulonglong)dVar41 >> 0x20);
                      uVar64 = SUB84(dVar46,0);
                      uVar65 = uVar53;
                      if (dVar46 <= dVar41) {
                        uVar64 = SUB84(dVar41,0);
                        uVar65 = uVar52;
                      }
                      uVar51 = SUB84(dVar46,0);
                      if (dVar41 <= dVar46) {
                        uVar51 = SUB84(dVar41,0);
                        uVar53 = uVar52;
                      }
                      uVar9 = rand();
                      dVar46 = (double)param_1[0x4b];
                      uVar63 = (undefined4)((ulonglong)dVar46 >> 0x20);
                      dVar41 = (double)param_1[0x4e];
                      uVar56 = (undefined4)((ulonglong)dVar41 >> 0x20);
                      uVar52 = SUB84(dVar46,0);
                      uVar54 = uVar63;
                      if (dVar46 <= dVar41) {
                        uVar52 = SUB84(dVar41,0);
                        uVar54 = uVar56;
                      }
                      uVar62 = SUB84(dVar46,0);
                      if (dVar41 <= dVar46) {
                        uVar62 = SUB84(dVar41,0);
                        uVar63 = uVar56;
                      }
                      uVar10 = rand();
                      cVar4 = *(char *)((longlong)param_1 + 0x22c);
                      if (cVar4 == '\x02') {
                        FUN_140c84580(&local_148,local_2d8,*(float *)(param_1 + 0x48) * 0.017453292)
                        ;
                        dVar45 = (double)local_138 * (double)local_138 +
                                 (double)local_148 * (double)local_148 + dStack_140 * dStack_140;
                        if (9.99999993922529e-09 < dVar45) {
                          dVar45 = 1.0 / SQRT(dVar45);
                          local_148 = (double *)((double)local_148 * dVar45);
                          dStack_140 = dStack_140 * dVar45;
                          local_138 = (double *)((double)local_138 * dVar45);
                        }
                        dVar45 = (double)param_1[0x46];
                        uVar56 = SUB84(dVar45,0);
                        uVar57 = (undefined4)((ulonglong)dVar45 >> 0x20);
                        dVar46 = (double)param_1[0x47];
                        if (dVar45 <= dVar46) {
                          uVar56 = SUB84(dVar46,0);
                          uVar57 = (undefined4)((ulonglong)dVar46 >> 0x20);
                        }
                        uVar11 = rand();
                        dVar45 = (double)((float)(uVar11 & 0x7fff) / 32767.0) *
                                 ((double)CONCAT44(uVar57,uVar56) - dVar45) + dVar45;
                        plVar48 = (longlong *)((double)local_138 * dVar45);
                        plVar49 = (longlong *)(dStack_140 * dVar45);
                        dVar45 = dVar45 * (double)local_148;
                        iVar31 = (int)local_308;
                      }
                      else {
                        if (cVar4 == '\x01') {
                          local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,fVar60);
                          local_318 = (longlong *)CONCAT44(local_318._4_4_,fVar55);
                          uVar11 = rand();
                          fVar55 = (float)(uVar11 & 0x7fff) / 32767.0;
                          dVar41 = (double)(fVar55 + fVar55 + -1.0);
                          uVar11 = rand();
                          fVar55 = (float)(uVar11 & 0x7fff) / 32767.0;
                          dVar44 = (double)(fVar55 + fVar55 + -1.0);
                          uVar11 = rand();
                          fVar55 = (float)(uVar11 & 0x7fff) / 32767.0;
                          dVar46 = (double)(fVar55 + fVar55 + -1.0);
                          dVar45 = dVar41 * dVar41 + dVar46 * dVar46 + dVar44 * dVar44;
                          if (9.99999993922529e-09 < dVar45) {
                            dVar45 = 1.0 / SQRT(dVar45);
                            dVar46 = dVar46 * dVar45;
                            dVar44 = dVar44 * dVar45;
                            dVar41 = dVar41 * dVar45;
                          }
                          iVar31 = (int)local_308;
                          dVar47 = (double)param_1[0x46];
                          uVar56 = SUB84(dVar47,0);
                          uVar57 = (undefined4)((ulonglong)dVar47 >> 0x20);
                          dVar45 = (double)param_1[0x47];
                          if (dVar47 <= dVar45) {
                            uVar56 = SUB84(dVar45,0);
                            uVar57 = (undefined4)((ulonglong)dVar45 >> 0x20);
                          }
                          uVar11 = rand();
                          dVar47 = (double)((float)(uVar11 & 0x7fff) / 32767.0) *
                                   ((double)CONCAT44(uVar57,uVar56) - dVar47) + dVar47;
                          uVar11 = rand();
                          dVar43 = *(double *)
                                    (&DAT_14bee5b00 +
                                    (ulonglong)((float)(uVar11 & 0x7fff) / 32767.0 < 0.2) * 8);
                          dVar45 = dVar47 * dVar46 * dVar43;
                          plVar49 = (longlong *)(dVar44 * dVar47 * dVar43);
                          plVar48 = (longlong *)(dVar41 * dVar47 * dVar43);
                        }
                        else {
                          iVar31 = (int)local_308;
                          plVar48 = local_318;
                          plVar49 = local_2f8;
                          if (cVar4 != '\0') goto LAB_14468067f;
                          local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,fVar60);
                          local_318 = (longlong *)CONCAT44(local_318._4_4_,fVar55);
                          uVar11 = rand();
                          fVar55 = (float)(uVar11 & 0x7fff) / 32767.0;
                          dVar41 = (double)(fVar55 + fVar55 + -1.0);
                          uVar11 = rand();
                          fVar55 = (float)(uVar11 & 0x7fff) / 32767.0;
                          dVar44 = (double)(fVar55 + fVar55 + -1.0);
                          uVar11 = rand();
                          fVar55 = (float)(uVar11 & 0x7fff) / 32767.0;
                          dVar46 = (double)(fVar55 + fVar55 + -1.0);
                          dVar45 = dVar41 * dVar41 + dVar46 * dVar46 + dVar44 * dVar44;
                          if (9.99999993922529e-09 < dVar45) {
                            dVar45 = 1.0 / SQRT(dVar45);
                            dVar46 = dVar46 * dVar45;
                            dVar44 = dVar44 * dVar45;
                            dVar41 = dVar41 * dVar45;
                          }
                          dVar45 = (double)param_1[0x46];
                          uVar56 = SUB84(dVar45,0);
                          uVar57 = (undefined4)((ulonglong)dVar45 >> 0x20);
                          dVar47 = (double)param_1[0x47];
                          if (dVar45 <= dVar47) {
                            uVar56 = SUB84(dVar47,0);
                            uVar57 = (undefined4)((ulonglong)dVar47 >> 0x20);
                          }
                          uVar11 = rand();
                          dVar45 = (double)((float)(uVar11 & 0x7fff) / 32767.0) *
                                   ((double)CONCAT44(uVar57,uVar56) - dVar45) + dVar45;
                          plVar48 = (longlong *)(dVar41 * dVar45);
                          plVar49 = (longlong *)(dVar44 * dVar45);
                          dVar45 = dVar45 * dVar46;
                        }
                        fVar55 = local_318._0_4_;
                        fVar60 = local_2f8._0_4_;
                      }
LAB_14468067f:
                      dVar46 = (double)*(float *)(param_1 + 0x45);
                      dVar47 = (double)((float)(uVar10 & 0x7fff) / 32767.0) *
                               ((double)CONCAT44(uVar54,uVar52) - (double)CONCAT44(uVar63,uVar62)) +
                               (double)CONCAT44(uVar63,uVar62) +
                               (pdVar17[0xb] - pdVar17[0xe]) * dVar46 + (double)plVar48;
                      dVar41 = (double)((float)(uVar9 & 0x7fff) / 32767.0) *
                               ((double)CONCAT44(uVar65,uVar64) - (double)CONCAT44(uVar53,uVar51)) +
                               (double)CONCAT44(uVar53,uVar51) +
                               (pdVar17[10] - pdVar17[0xd]) * dVar46 + (double)plVar49;
                      dVar44 = (double)((float)(uVar8 & 0x7fff) / 32767.0) *
                               ((double)CONCAT44(uVar59,uVar40) - (double)CONCAT44(uVar39,uVar50)) +
                               (double)CONCAT44(uVar39,uVar50) +
                               (pdVar17[9] - pdVar17[0xc]) * dVar46 + dVar45;
                      dVar46 = (double)param_1[0x4f];
                      if ((dVar46 < 0.0) ||
                         (0.0 < (double)param_1[0x50] || (double)param_1[0x50] == 0.0)) {
                        if (0.0 <= dVar46) {
LAB_144680763:
                          if (0.0 <= dVar46) {
                            dVar43 = (double)param_1[0x50];
                            uVar39 = SUB84(dVar43,0);
                            uVar40 = (undefined4)((ulonglong)dVar43 >> 0x20);
                            if (0.0 <= dVar43) {
                              dVar42 = dVar47 * dVar47 + dVar44 * dVar44 + dVar41 * dVar41;
                              if (dVar42 < dVar46 * dVar46) goto joined_r0x0001446807bf;
                              if (dVar43 * dVar43 < dVar42) goto joined_r0x000144680851;
                            }
                          }
                        }
                        else {
                          dVar43 = (double)param_1[0x50];
                          uVar39 = SUB84(dVar43,0);
                          uVar40 = (undefined4)((ulonglong)dVar43 >> 0x20);
                          if (dVar43 < 0.0) goto LAB_144680763;
                          dVar42 = dVar47 * dVar47 + dVar44 * dVar44 + dVar41 * dVar41;
                          if (dVar42 <= dVar43 * dVar43) goto LAB_144680884;
joined_r0x000144680851:
                          if (9.99999993922529e-09 < dVar42) {
                            dVar46 = 1.0 / SQRT(dVar42);
                            dVar44 = dVar44 * dVar46;
                            dVar41 = dVar41 * dVar46;
                            dVar47 = dVar47 * dVar46;
                          }
                          dVar44 = dVar44 * (double)CONCAT44(uVar40,uVar39);
                          dVar41 = dVar41 * (double)CONCAT44(uVar40,uVar39);
                          dVar47 = dVar47 * (double)CONCAT44(uVar40,uVar39);
                        }
                      }
                      else {
                        dVar42 = dVar47 * dVar47 + dVar44 * dVar44 + dVar41 * dVar41;
                        if (dVar42 < dVar46 * dVar46) {
joined_r0x0001446807bf:
                          if (9.99999993922529e-09 < dVar42) {
                            dVar43 = 1.0 / SQRT(dVar42);
                            dVar44 = dVar44 * dVar43;
                            dVar41 = dVar41 * dVar43;
                            dVar47 = dVar47 * dVar43;
                          }
                          dVar44 = dVar44 * dVar46;
                          dVar41 = dVar41 * dVar46;
                          dVar47 = dVar47 * dVar46;
                        }
                      }
LAB_144680884:
                      dVar46 = pdVar17[2];
                      dVar43 = pdVar17[1];
                      dVar42 = *pdVar17;
                      iVar32 = (int)param_2[1];
                      lVar29 = (longlong)iVar32;
                      *(uint *)(param_2 + 1) = iVar32 + 1U;
                      local_318 = plVar48;
                      local_2f8 = plVar49;
                      if (*(uint *)((longlong)param_2 + 0xc) < iVar32 + 1U) {
                        FUN_1403e3958(param_2,iVar32);
                      }
                      lVar27 = *param_2;
                      *(double *)(lVar27 + lVar29 * 0x18) =
                           (double)(float)(((double)((float)(uVar7 & 0x7fff) / 32767.0) *
                                            ((double)CONCAT44(uVar38,uVar36) -
                                            (double)CONCAT44(uVar37,uVar58)) +
                                           (double)CONCAT44(uVar37,uVar58)) * (double)fVar34) +
                           dVar42;
                      *(double *)(lVar27 + 8 + lVar29 * 0x18) = (double)fVar55 + dVar43;
                      *(double *)(lVar27 + 0x10 + lVar29 * 0x18) = (double)fVar60 + dVar46;
                      iVar32 = (int)param_2[3];
                      lVar29 = (longlong)iVar32;
                      *(uint *)(param_2 + 3) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x1c) < iVar32 + 1U) {
                        FUN_1403e3958(local_2b0,iVar32);
                      }
                      lVar27 = param_2[2];
                      *(double *)(lVar27 + lVar29 * 0x18) = dVar44;
                      *(double *)(lVar27 + 8 + lVar29 * 0x18) = dVar41;
                      *(double *)(lVar27 + 0x10 + lVar29 * 0x18) = dVar47;
                      iVar32 = (int)param_2[0xb];
                      *(uint *)(param_2 + 0xb) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x5c) < iVar32 + 1U) {
                        FUN_1446f48e2(local_2d0,iVar32);
                      }
                      *(int *)(param_2[10] + (longlong)iVar32 * 4) = iVar31;
                      iVar32 = (int)param_2[0x17];
                      *(uint *)(param_2 + 0x17) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0xbc) < iVar32 + 1U) {
                        FUN_1403e3958(local_278,iVar32);
                      }
                      lVar29 = param_2[0x16];
                      *(double *)(lVar29 + 0x10 + (longlong)iVar32 * 0x18) = pdVar17[2];
                      uVar37 = *(undefined4 *)((longlong)pdVar17 + 4);
                      uVar36 = *(undefined4 *)(pdVar17 + 1);
                      uVar38 = *(undefined4 *)((longlong)pdVar17 + 0xc);
                      puVar1 = (undefined4 *)(lVar29 + (longlong)iVar32 * 0x18);
                      *puVar1 = *(undefined4 *)pdVar17;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar36;
                      puVar1[3] = uVar38;
                      iVar32 = (int)param_2[0x19];
                      *(uint *)(param_2 + 0x19) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0xcc) < iVar32 + 1U) {
                        FUN_1403e3958(local_280,iVar32);
                      }
                      lVar29 = param_2[0x18];
                      *(double *)(lVar29 + 0x10 + (longlong)iVar32 * 0x18) = local_2c8[2];
                      uVar37 = *(undefined4 *)((longlong)local_2c8 + 4);
                      uVar36 = *(undefined4 *)(local_2c8 + 1);
                      uVar38 = *(undefined4 *)((longlong)local_2c8 + 0xc);
                      puVar1 = (undefined4 *)(lVar29 + (longlong)iVar32 * 0x18);
                      *puVar1 = *(undefined4 *)local_2c8;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar36;
                      puVar1[3] = uVar38;
                      iVar32 = (int)param_2[0x1b];
                      *(uint *)(param_2 + 0x1b) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0xdc) < iVar32 + 1U) {
                        FUN_1403e3958(local_288,iVar32);
                      }
                      lVar29 = param_2[0x1a];
                      *(double *)(lVar29 + 0x10 + (longlong)iVar32 * 0x18) = local_2d8[2];
                      uVar37 = *(undefined4 *)((longlong)local_2d8 + 4);
                      uVar36 = *(undefined4 *)(local_2d8 + 1);
                      uVar38 = *(undefined4 *)((longlong)local_2d8 + 0xc);
                      puVar1 = (undefined4 *)(lVar29 + (longlong)iVar32 * 0x18);
                      *puVar1 = *(undefined4 *)local_2d8;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar36;
                      puVar1[3] = uVar38;
                      iVar32 = (int)param_2[0x1d];
                      *(uint *)(param_2 + 0x1d) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0xec) < iVar32 + 1U) {
                        FUN_1403e3958(local_290,iVar32);
                      }
                      lVar29 = param_2[0x1c];
                      *(double *)(lVar29 + 0x10 + (longlong)iVar32 * 0x18) = local_2b8[2];
                      uVar37 = *(undefined4 *)((longlong)local_2b8 + 4);
                      uVar36 = *(undefined4 *)(local_2b8 + 1);
                      uVar38 = *(undefined4 *)((longlong)local_2b8 + 0xc);
                      puVar1 = (undefined4 *)(lVar29 + (longlong)iVar32 * 0x18);
                      *puVar1 = *(undefined4 *)local_2b8;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar36;
                      puVar1[3] = uVar38;
                      iVar32 = (int)param_2[0x1f];
                      *(uint *)(param_2 + 0x1f) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0xfc) < iVar32 + 1U) {
                        FUN_1403e3958(local_1e0,iVar32);
                      }
                      lVar29 = param_2[0x1e];
                      *(double *)(lVar29 + 0x10 + (longlong)iVar32 * 0x18) = local_2c0[2];
                      uVar37 = *(undefined4 *)((longlong)local_2c0 + 4);
                      uVar36 = *(undefined4 *)(local_2c0 + 1);
                      uVar38 = *(undefined4 *)((longlong)local_2c0 + 0xc);
                      puVar1 = (undefined4 *)(lVar29 + (longlong)iVar32 * 0x18);
                      *puVar1 = *(undefined4 *)local_2c0;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar36;
                      puVar1[3] = uVar38;
                      iVar32 = (int)param_2[0x21];
                      *(uint *)(param_2 + 0x21) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x10c) < iVar32 + 1U) {
                        FUN_1403e3958(local_1e8,iVar32);
                      }
                      lVar29 = param_2[0x20];
                      *(double *)(lVar29 + 0x10 + (longlong)iVar32 * 0x18) = local_320[2];
                      uVar37 = *(undefined4 *)((longlong)local_320 + 4);
                      uVar36 = *(undefined4 *)(local_320 + 1);
                      uVar38 = *(undefined4 *)((longlong)local_320 + 0xc);
                      puVar1 = (undefined4 *)(lVar29 + (longlong)iVar32 * 0x18);
                      *puVar1 = *(undefined4 *)local_320;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar36;
                      puVar1[3] = uVar38;
                      iVar32 = (int)param_2[0x23];
                      *(uint *)(param_2 + 0x23) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x11c) < iVar32 + 1U) {
                        FUN_1403e3958(local_1f0,iVar32);
                      }
                      lVar29 = param_2[0x22];
                      *(double *)(lVar29 + 0x10 + (longlong)iVar32 * 0x18) = local_270[2];
                      uVar37 = *(undefined4 *)((longlong)local_270 + 4);
                      uVar36 = *(undefined4 *)(local_270 + 1);
                      uVar38 = *(undefined4 *)((longlong)local_270 + 0xc);
                      puVar1 = (undefined4 *)(lVar29 + (longlong)iVar32 * 0x18);
                      *puVar1 = *(undefined4 *)local_270;
                      puVar1[1] = uVar37;
                      puVar1[2] = uVar36;
                      puVar1[3] = uVar38;
                      dVar46 = pdVar17[0x15];
                      iVar32 = (int)param_2[0x25];
                      *(uint *)(param_2 + 0x25) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 300) < iVar32 + 1U) {
                        FUN_14475e4ac(local_1f8,iVar32);
                      }
                      *(float *)(param_2[0x24] + (longlong)iVar32 * 4) = (float)dVar46;
                      dVar46 = pdVar17[0x16];
                      iVar32 = (int)param_2[0x27];
                      *(uint *)(param_2 + 0x27) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x13c) < iVar32 + 1U) {
                        FUN_14475e4ac(local_200,iVar32);
                      }
                      *(float *)(param_2[0x26] + (longlong)iVar32 * 4) = (float)dVar46;
                      iVar32 = (int)param_2[0x29];
                      *(uint *)(param_2 + 0x29) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x14c) < iVar32 + 1U) {
                        FUN_14475e4ac(local_208,iVar32);
                      }
                      *(undefined4 *)(param_2[0x28] + (longlong)iVar32 * 4) = local_2e0._0_4_;
                      dVar46 = pdVar17[0x18];
                      iVar32 = (int)param_2[5];
                      *(uint *)(param_2 + 5) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x2c) < iVar32 + 1U) {
                        FUN_14475e4ac(local_210,iVar32);
                      }
                      *(float *)(param_2[4] + (longlong)iVar32 * 4) = (float)dVar46;
                      dVar46 = pdVar17[0x19];
                      iVar32 = (int)param_2[7];
                      *(uint *)(param_2 + 7) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x3c) < iVar32 + 1U) {
                        FUN_14475e4ac(local_218,iVar32);
                      }
                      *(float *)(param_2[6] + (longlong)iVar32 * 4) = (float)dVar46;
                      dVar46 = pdVar17[0x17];
                      iVar32 = (int)param_2[9];
                      *(uint *)(param_2 + 9) = iVar32 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x4c) < iVar32 + 1U) {
                        FUN_14475e4ac(local_2e8,iVar32);
                      }
                      *(float *)(*local_2e8 + (longlong)iVar32 * 4) = (float)dVar46;
                      plVar48 = local_300;
                    }
                    lVar29 = local_230;
                    plVar49 = local_240;
                    dVar46 = local_248;
                    uVar5 = uVar5 - 1;
                    uVar21 = local_238;
                  } while (uVar5 != 0);
                  do {
                    pvVar23 = local_1a8;
                    iVar32 = (int)param_2[0x13];
                    *(uint *)(param_2 + 0x13) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x9c) < iVar32 + 1U) {
                      FUN_1446f48e2(plVar49,iVar32);
                    }
                    *(undefined4 *)(param_2[0x12] + (longlong)iVar32 * 4) =
                         *(undefined4 *)((longlong)local_310 + (longlong)pvVar23 + 0xd0);
                    iVar32 = (int)param_2[0x15];
                    *(uint *)(param_2 + 0x15) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0xac) < iVar32 + 1U) {
                      FUN_1467ff840(local_228,iVar32);
                    }
                    param_1 = local_328;
                    puVar1 = (undefined4 *)(param_2[0x14] + (longlong)iVar32 * 0x10);
                    *puVar1 = 0x3f800000;
                    puVar1[1] = 0x3f800000;
                    puVar1[2] = 0x3f800000;
                    puVar1[3] = 0x3f800000;
                    iVar32 = (int)param_2[0xf];
                    *(uint *)(param_2 + 0xf) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x7c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2a0,iVar32);
                    }
                    *(undefined4 *)(param_2[0xe] + (longlong)iVar32 * 4) = 0x3f333333;
                    iVar32 = (int)param_2[0x11];
                    *(uint *)(param_2 + 0x11) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x8c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2a8,iVar32);
                    }
                    *(undefined4 *)(param_2[0x10] + (longlong)iVar32 * 4) = 0x3e99999a;
                    iVar32 = (int)param_2[0xd];
                    *(uint *)(param_2 + 0xd) = iVar32 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x6c) < iVar32 + 1U) {
                      FUN_14475e4ac(local_2f0,iVar32);
                    }
                    *(undefined4 *)(*(longlong *)local_2f0 + (longlong)iVar32 * 4) = 0x3f800000;
                    uVar5 = (int)uVar21 - 1;
                    uVar21 = (ulonglong)uVar5;
                  } while (uVar5 != 0);
                }
              }
              lVar29 = lVar29 + 1;
            } while (lVar29 < (int)(uint)uStack_1a0);
          }
          lVar29 = local_250;
          pdVar17 = local_298;
          lVar27 = local_258;
          if (local_1a8 != (void *)0x0) {
            FUN_1400020a8();
            lVar29 = local_250;
            pdVar17 = local_298;
            lVar27 = local_258;
          }
        }
        iVar31 = iVar31 + 1;
        lVar27 = lVar27 + 0x18;
      } while (lVar27 != lVar29);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446833e8 FUN_1446833e8 body=1794 status=ok
// SIG undefined FUN_1446833e8(void)

void FUN_1446833e8(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_2;
  iVar1 = (int)param_2[3];
  iVar2 = (int)param_2[4];
  if (iVar2 == 3 && (iVar1 == 2 && lVar3 == DAT_14cc30ca0)) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b57c4(param_1,param_4);
      return;
    }
    FUN_14676ebde(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30ca8 && iVar1 == 2) && iVar2 == 3) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b5ec2(param_1,param_4);
      return;
    }
    FUN_1498b5f68(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30cb0 && iVar1 == 2) && iVar2 == 3) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b65ec(param_1,param_4);
      return;
    }
    FUN_1498b6692(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30cb8 && iVar1 == 2) && iVar2 == 3) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b6d0a(param_1,param_4);
      return;
    }
    FUN_1498b6db0(param_1,param_4);
    return;
  }
  if (iVar2 == 1 && (lVar3 == DAT_14cc30cc0 && iVar1 == 2)) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b7434(param_1,param_4);
      return;
    }
    FUN_1498b74da(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30cc8 && iVar1 == 2) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_14676ec84(param_1,param_4);
      return;
    }
    FUN_1498b7a4e(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30cd0 && iVar1 == 2) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b7fc4(param_1,param_4);
      return;
    }
    FUN_1498b806a(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30cd8 && iVar1 == 2) && iVar2 == 3) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b85de(param_1,param_4);
      return;
    }
    FUN_14676ed2a(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30ce0 && iVar1 == 2) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b8b0e(param_1,param_4);
      return;
    }
    FUN_1498b8bb4(param_1,param_4);
    return;
  }
  if (iVar2 == 4 && (lVar3 == DAT_14cc30ce8 && iVar1 == 2)) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b90be(param_1,param_4);
      return;
    }
    FUN_1498b9164(param_1,param_4);
    return;
  }
  if ((iVar1 == 1 && lVar3 == DAT_14cc30cf0) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b9836(param_1,param_4);
      return;
    }
    FUN_1498b98dc(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30cf8 && iVar1 == 2) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498b9dde(param_1,param_4);
      return;
    }
    FUN_1498b9e84(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30d00 && iVar1 == 2) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498ba3f8(param_1,param_4);
      return;
    }
    FUN_1498ba49e(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30d08 && iVar1 == 2) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498baa12(param_1,param_4);
      return;
    }
    FUN_1498baab8(param_1,param_4);
    return;
  }
  if (iVar2 == 10 && (lVar3 == DAT_14cc30d18 && iVar1 == 2)) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498bb038(param_1,param_4);
      return;
    }
    FUN_1498bb0de(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30d20 && iVar1 == 2) && iVar2 == 3) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498bbd0a(param_1,param_4);
      return;
    }
    FUN_1498bbdb0(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30d10 && iVar1 == 2) && iVar2 == 1) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498bc434(param_1,param_4);
      return;
    }
    FUN_1498bc4da(param_1,param_4);
    return;
  }
  if (iVar2 == 0x18 && (lVar3 == DAT_14cc30d28 && iVar1 == 2)) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498bca5a(param_1,param_4);
      return;
    }
    FUN_1498bcb00(param_1,param_4);
    return;
  }
  if (iVar2 == 0xb && (lVar3 == DAT_14cc30d30 && iVar1 == 2)) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498bdf2a(param_1,param_4);
      return;
    }
    FUN_1498bdfd0(param_1,param_4);
    return;
  }
  if ((lVar3 == DAT_14cc30d38 && iVar1 == 2) && iVar2 == 0xb) {
    if (*(char *)(param_2[2] + 1) == '\x01') {
      FUN_1498beba6(param_1,param_4);
      return;
    }
    FUN_1498bec4c(param_1,param_4);
    return;
  }
  if ((int)param_4[1] != 0) {
    puVar4 = (undefined8 *)*param_4;
    if (puVar4 == (undefined8 *)0x0) goto LAB_144683751;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_144683751:
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  return;
}



// FUNCTION 144683aea FUN_144683aea body=1231 status=ok
// SIG undefined FUN_144683aea(void)

void FUN_144683aea(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x290);
  uVar3 = *(undefined4 *)(param_1 + 0x2a8);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar7 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_144683b40;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_144683b45;
      goto LAB_144683b6d;
    }
  }
  else {
LAB_144683b40:
    if (iVar9 != 0x10) {
LAB_144683b6d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar7 + 0xc60), iVar9 == 2))
        goto LAB_144683b45;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_144683b45;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_144683cd7;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14468683d);
          }
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar7 + 0x310);
          *(undefined8 *)(lVar7 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_144683cd7:
          puVar19 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar19 + 0x17);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar4 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar19 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar19 + 0x17);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_144683d57;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_144683d57:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar9 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14beebb48;
        puVar19[0x15] = lVar6;
        *(undefined4 *)(puVar19 + 0x16) = uVar5;
        *(undefined4 *)((longlong)puVar19 + 0xb4) = uVar3;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar9 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar8 = 1;
          if ((char)uVar18 != '\x06') {
            uVar8 = uVar18;
          }
          uVar18 = uVar8;
          uVar14 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar19[0xf] = uVar14;
        puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar9;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar1 = (int *)(puVar19 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14beebaf0;
        local_88[0] = &LAB_144686bcc;
        local_60 = lVar6;
        local_58 = uVar5;
        local_54 = uVar3;
        FUN_14005a792(&DAT_14ca9a440,L"FPushDIChaosDestructionToRT",&DAT_14cc30e8c);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar16 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar16 = &local_68;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      goto LAB_144683c0c;
    }
  }
LAB_144683b45:
  *(undefined4 *)(lVar6 + 0x14) = uVar5;
  *(undefined4 *)(lVar6 + 0x10) = uVar3;
LAB_144683c0c:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144683fba FUN_144683fba body=5800 status=ok
// SIG undefined FUN_144683fba(void)

void FUN_144683fba(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = *param_3;
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x270;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0x270) == lVar1) {
          if (lVar4 == 0) {
            return;
          }
          plVar3 = (longlong *)(lVar4 + 8);
          if (plVar3 == (longlong *)0x0) {
            return;
          }
          *(undefined4 *)(lVar4 + 0x10) = 0;
          if (*(int *)(lVar4 + 0x14) < 0) {
            FUN_140678446(plVar3,0);
          }
          if (*(int *)(lVar4 + 0x24) < 0) {
            *(undefined4 *)(lVar4 + 0x20) = 0;
            FUN_140678446(lVar4 + 0x18,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x20) = 0;
          }
          if (*(int *)(lVar4 + 0x34) < 0) {
            *(undefined4 *)(lVar4 + 0x30) = 0;
            FUN_14482f6fa(lVar4 + 0x28,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x30) = 0;
          }
          if (*(int *)(lVar4 + 0x44) < 0) {
            *(undefined4 *)(lVar4 + 0x40) = 0;
            FUN_14482f6fa(lVar4 + 0x38,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x40) = 0;
          }
          if (*(int *)(lVar4 + 0x54) < 0) {
            *(undefined4 *)(lVar4 + 0x50) = 0;
            FUN_14482f6fa(lVar4 + 0x48,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x50) = 0;
          }
          if (*(int *)(lVar4 + 100) < 0) {
            *(undefined4 *)(lVar4 + 0x60) = 0;
            FUN_14481578e(lVar4 + 0x58,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x60) = 0;
          }
          if (*(int *)(lVar4 + 0x74) < 0) {
            *(undefined4 *)(lVar4 + 0x70) = 0;
            FUN_14482f6fa(lVar4 + 0x68,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x70) = 0;
          }
          if (*(int *)(lVar4 + 0x84) < 0) {
            *(undefined4 *)(lVar4 + 0x80) = 0;
            FUN_14482f6fa(lVar4 + 0x78,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x80) = 0;
          }
          if (*(int *)(lVar4 + 0x94) < 0) {
            *(undefined4 *)(lVar4 + 0x90) = 0;
            FUN_14482f6fa(lVar4 + 0x88,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x90) = 0;
          }
          if (*(int *)(lVar4 + 0xa4) < 0) {
            *(undefined4 *)(lVar4 + 0xa0) = 0;
            FUN_14481578e(lVar4 + 0x98,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0xa0) = 0;
          }
          if (*(int *)(lVar4 + 0xb4) < 0) {
            *(undefined4 *)(lVar4 + 0xb0) = 0;
            FUN_144750f90(lVar4 + 0xa8,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0xb0) = 0;
          }
          if (*(int *)(lVar4 + 0xc4) < 0) {
            *(undefined4 *)(lVar4 + 0xc0) = 0;
            FUN_140678446(lVar4 + 0xb8,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0xc0) = 0;
          }
          if (*(int *)(lVar4 + 0xd4) < 0) {
            *(undefined4 *)(lVar4 + 0xd0) = 0;
            FUN_140678446(lVar4 + 200,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0xd0) = 0;
          }
          if (*(int *)(lVar4 + 0xe4) < 0) {
            *(undefined4 *)(lVar4 + 0xe0) = 0;
            FUN_140678446(lVar4 + 0xd8,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0xe0) = 0;
          }
          if (*(int *)(lVar4 + 0xf4) < 0) {
            *(undefined4 *)(lVar4 + 0xf0) = 0;
            FUN_140678446(lVar4 + 0xe8,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0xf0) = 0;
          }
          if (*(int *)(lVar4 + 0x104) < 0) {
            *(undefined4 *)(lVar4 + 0x100) = 0;
            FUN_140678446(lVar4 + 0xf8,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x100) = 0;
          }
          if (*(int *)(lVar4 + 0x114) < 0) {
            *(undefined4 *)(lVar4 + 0x110) = 0;
            FUN_140678446(lVar4 + 0x108,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x110) = 0;
          }
          if (*(int *)(lVar4 + 0x124) < 0) {
            *(undefined4 *)(lVar4 + 0x120) = 0;
            FUN_140678446(lVar4 + 0x118,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x120) = 0;
          }
          if (*(int *)(lVar4 + 0x134) < 0) {
            *(undefined4 *)(lVar4 + 0x130) = 0;
            FUN_14482f6fa(lVar4 + 0x128,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x130) = 0;
          }
          if (*(int *)(lVar4 + 0x144) < 0) {
            *(undefined4 *)(lVar4 + 0x140) = 0;
            FUN_14482f6fa(lVar4 + 0x138,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x140) = 0;
          }
          if (*(int *)(lVar4 + 0x154) < 0) {
            *(undefined4 *)(lVar4 + 0x150) = 0;
            FUN_14482f6fa(lVar4 + 0x148,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x150) = 0;
          }
          if (*(int *)(lVar4 + 0x164) < 0) {
            *(undefined4 *)(lVar4 + 0x160) = 0;
            FUN_140678446(lVar4 + 0x158,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x160) = 0;
          }
          if (*(int *)(lVar4 + 0x174) < 0) {
            *(undefined4 *)(lVar4 + 0x170) = 0;
            FUN_146ed5086(lVar4 + 0x168,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x170) = 0;
          }
          if (*(int *)(lVar4 + 0x184) < 0) {
            *(undefined4 *)(lVar4 + 0x180) = 0;
            FUN_140678446(lVar4 + 0x178,0);
          }
          else {
            *(undefined4 *)(lVar4 + 0x180) = 0;
          }
          if (*(int *)(lVar4 + 0x194) < 0) {
            *(undefined4 *)(lVar4 + 400) = 0;
            FUN_140678446(lVar4 + 0x188,0);
          }
          else {
            *(undefined4 *)(lVar4 + 400) = 0;
          }
          *(int *)(lVar4 + 0x198) = (int)param_2[0x32];
          *(undefined4 *)(lVar4 + 0x19c) = *(undefined4 *)((longlong)param_2 + 0x194);
          if (plVar3 != param_2) {
            if (*plVar3 != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 8) = *param_2;
            *param_2 = 0;
            *(int *)(lVar4 + 0x10) = (int)param_2[1];
            *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
            param_2[1] = 0;
          }
          if ((longlong *)(lVar4 + 0x18) != param_2 + 2) {
            if (*(longlong *)(lVar4 + 0x18) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x18) = param_2[2];
            param_2[2] = 0;
            *(int *)(lVar4 + 0x20) = (int)param_2[3];
            *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
            param_2[3] = 0;
          }
          if ((longlong *)(lVar4 + 0x28) != param_2 + 4) {
            if (*(longlong *)(lVar4 + 0x28) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x28) = param_2[4];
            param_2[4] = 0;
            *(int *)(lVar4 + 0x30) = (int)param_2[5];
            *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x2c);
            param_2[5] = 0;
          }
          if ((longlong *)(lVar4 + 0x38) != param_2 + 6) {
            if (*(longlong *)(lVar4 + 0x38) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x38) = param_2[6];
            param_2[6] = 0;
            *(int *)(lVar4 + 0x40) = (int)param_2[7];
            *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x3c);
            param_2[7] = 0;
          }
          if ((longlong *)(lVar4 + 0x48) != param_2 + 8) {
            if (*(longlong *)(lVar4 + 0x48) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x48) = param_2[8];
            param_2[8] = 0;
            *(int *)(lVar4 + 0x50) = (int)param_2[9];
            *(undefined4 *)(lVar4 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x4c);
            param_2[9] = 0;
          }
          if ((longlong *)(lVar4 + 0x58) != param_2 + 10) {
            if (*(longlong *)(lVar4 + 0x58) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x58) = param_2[10];
            param_2[10] = 0;
            *(int *)(lVar4 + 0x60) = (int)param_2[0xb];
            *(undefined4 *)(lVar4 + 100) = *(undefined4 *)((longlong)param_2 + 0x5c);
            param_2[0xb] = 0;
          }
          if ((longlong *)(lVar4 + 0x68) != param_2 + 0xc) {
            if (*(longlong *)(lVar4 + 0x68) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x68) = param_2[0xc];
            param_2[0xc] = 0;
            *(int *)(lVar4 + 0x70) = (int)param_2[0xd];
            *(undefined4 *)(lVar4 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x6c);
            param_2[0xd] = 0;
          }
          if ((longlong *)(lVar4 + 0x78) != param_2 + 0xe) {
            if (*(longlong *)(lVar4 + 0x78) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x78) = param_2[0xe];
            param_2[0xe] = 0;
            *(int *)(lVar4 + 0x80) = (int)param_2[0xf];
            *(undefined4 *)(lVar4 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x7c);
            param_2[0xf] = 0;
          }
          if ((longlong *)(lVar4 + 0x88) != param_2 + 0x10) {
            if (*(longlong *)(lVar4 + 0x88) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x88) = param_2[0x10];
            param_2[0x10] = 0;
            *(int *)(lVar4 + 0x90) = (int)param_2[0x11];
            *(undefined4 *)(lVar4 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x8c);
            param_2[0x11] = 0;
          }
          if ((longlong *)(lVar4 + 0x158) != param_2 + 0x2a) {
            if (*(longlong *)(lVar4 + 0x158) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x158) = param_2[0x2a];
            param_2[0x2a] = 0;
            *(int *)(lVar4 + 0x160) = (int)param_2[0x2b];
            *(undefined4 *)(lVar4 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x15c);
            param_2[0x2b] = 0;
          }
          if ((longlong *)(lVar4 + 0x168) != param_2 + 0x2c) {
            if (*(longlong *)(lVar4 + 0x168) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x168) = param_2[0x2c];
            param_2[0x2c] = 0;
            *(int *)(lVar4 + 0x170) = (int)param_2[0x2d];
            *(undefined4 *)(lVar4 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x16c);
            param_2[0x2d] = 0;
          }
          if ((longlong *)(lVar4 + 0x178) != param_2 + 0x2e) {
            if (*(longlong *)(lVar4 + 0x178) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x178) = param_2[0x2e];
            param_2[0x2e] = 0;
            *(int *)(lVar4 + 0x180) = (int)param_2[0x2f];
            *(undefined4 *)(lVar4 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x17c);
            param_2[0x2f] = 0;
          }
          if ((longlong *)(lVar4 + 0x188) != param_2 + 0x30) {
            if (*(longlong *)(lVar4 + 0x188) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x188) = param_2[0x30];
            param_2[0x30] = 0;
            *(int *)(lVar4 + 400) = (int)param_2[0x31];
            *(undefined4 *)(lVar4 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x18c);
            param_2[0x31] = 0;
          }
          if ((longlong *)(lVar4 + 0x98) != param_2 + 0x12) {
            if (*(longlong *)(lVar4 + 0x98) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x98) = param_2[0x12];
            param_2[0x12] = 0;
            *(int *)(lVar4 + 0xa0) = (int)param_2[0x13];
            *(undefined4 *)(lVar4 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x9c);
            param_2[0x13] = 0;
          }
          if ((longlong *)(lVar4 + 0xa8) != param_2 + 0x14) {
            if (*(longlong *)(lVar4 + 0xa8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0xa8) = param_2[0x14];
            param_2[0x14] = 0;
            *(int *)(lVar4 + 0xb0) = (int)param_2[0x15];
            *(undefined4 *)(lVar4 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xac);
            param_2[0x15] = 0;
          }
          if ((longlong *)(lVar4 + 0xb8) != param_2 + 0x16) {
            if (*(longlong *)(lVar4 + 0xb8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0xb8) = param_2[0x16];
            param_2[0x16] = 0;
            *(int *)(lVar4 + 0xc0) = (int)param_2[0x17];
            *(undefined4 *)(lVar4 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xbc);
            param_2[0x17] = 0;
          }
          if ((longlong *)(lVar4 + 200) != param_2 + 0x18) {
            if (*(longlong *)(lVar4 + 200) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 200) = param_2[0x18];
            param_2[0x18] = 0;
            *(int *)(lVar4 + 0xd0) = (int)param_2[0x19];
            *(undefined4 *)(lVar4 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xcc);
            param_2[0x19] = 0;
          }
          if ((longlong *)(lVar4 + 0xd8) != param_2 + 0x1a) {
            if (*(longlong *)(lVar4 + 0xd8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0xd8) = param_2[0x1a];
            param_2[0x1a] = 0;
            *(int *)(lVar4 + 0xe0) = (int)param_2[0x1b];
            *(undefined4 *)(lVar4 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xdc);
            param_2[0x1b] = 0;
          }
          if ((longlong *)(lVar4 + 0xe8) != param_2 + 0x1c) {
            if (*(longlong *)(lVar4 + 0xe8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0xe8) = param_2[0x1c];
            param_2[0x1c] = 0;
            *(int *)(lVar4 + 0xf0) = (int)param_2[0x1d];
            *(undefined4 *)(lVar4 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xec);
            param_2[0x1d] = 0;
          }
          if ((longlong *)(lVar4 + 0xf8) != param_2 + 0x1e) {
            if (*(longlong *)(lVar4 + 0xf8) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0xf8) = param_2[0x1e];
            param_2[0x1e] = 0;
            *(int *)(lVar4 + 0x100) = (int)param_2[0x1f];
            *(undefined4 *)(lVar4 + 0x104) = *(undefined4 *)((longlong)param_2 + 0xfc);
            param_2[0x1f] = 0;
          }
          if ((longlong *)(lVar4 + 0x108) != param_2 + 0x20) {
            if (*(longlong *)(lVar4 + 0x108) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x108) = param_2[0x20];
            param_2[0x20] = 0;
            *(int *)(lVar4 + 0x110) = (int)param_2[0x21];
            *(undefined4 *)(lVar4 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x10c);
            param_2[0x21] = 0;
          }
          if ((longlong *)(lVar4 + 0x118) != param_2 + 0x22) {
            if (*(longlong *)(lVar4 + 0x118) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x118) = param_2[0x22];
            param_2[0x22] = 0;
            *(int *)(lVar4 + 0x120) = (int)param_2[0x23];
            *(undefined4 *)(lVar4 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x11c);
            param_2[0x23] = 0;
          }
          if ((longlong *)(lVar4 + 0x128) != param_2 + 0x24) {
            if (*(longlong *)(lVar4 + 0x128) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x128) = param_2[0x24];
            param_2[0x24] = 0;
            *(int *)(lVar4 + 0x130) = (int)param_2[0x25];
            *(undefined4 *)(lVar4 + 0x134) = *(undefined4 *)((longlong)param_2 + 300);
            param_2[0x25] = 0;
          }
          if ((longlong *)(lVar4 + 0x138) != param_2 + 0x26) {
            if (*(longlong *)(lVar4 + 0x138) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x138) = param_2[0x26];
            param_2[0x26] = 0;
            *(int *)(lVar4 + 0x140) = (int)param_2[0x27];
            *(undefined4 *)(lVar4 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x13c);
            param_2[0x27] = 0;
          }
          if ((longlong *)(lVar4 + 0x148) != param_2 + 0x28) {
            if (*(longlong *)(lVar4 + 0x148) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar4 + 0x148) = param_2[0x28];
            param_2[0x28] = 0;
            *(int *)(lVar4 + 0x150) = (int)param_2[0x29];
            *(undefined4 *)(lVar4 + 0x154) = *(undefined4 *)((longlong)param_2 + 0x14c);
            param_2[0x29] = 0;
          }
          if (param_2[0x30] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x2e] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x2c] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x2a] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x28] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x26] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x24] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x22] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x20] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x1e] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x1c] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x1a] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x18] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x16] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x14] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x12] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0x10] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0xe] != 0) {
            FUN_1400020a8();
          }
          if (param_2[0xc] != 0) {
            FUN_1400020a8();
          }
          if (param_2[10] != 0) {
            FUN_1400020a8();
          }
          if (param_2[8] != 0) {
            FUN_1400020a8();
          }
          if (param_2[6] != 0) {
            FUN_1400020a8();
          }
          if (param_2[4] != 0) {
            FUN_1400020a8();
          }
          if (param_2[2] != 0) {
            FUN_1400020a8();
          }
          if (*param_2 == 0) {
            return;
          }
          FUN_1400020a8();
          return;
        }
        iVar2 = *(int *)(lVar4 + 0x268);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 144685662 FUN_144685662 body=388 status=ok
// SIG undefined FUN_144685662(void)

void FUN_144685662(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar9 = 0;
      iVar3 = 0;
      iVar10 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x28);
      }
      uVar12 = *puVar7;
      if (uVar12 == 0) {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        uVar9 = 0;
        uVar13 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar13 = uVar9;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar9) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar12 = puVar7[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar9 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar13 * 2 + 1;
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
      uVar12 = 0xffffffff;
      do {
        uVar12 = ~(uint)uVar13 & uVar12;
        memset((void *)((longlong)iVar3 * 0x270 + *(longlong *)(param_1 + 0x18) + 0x1a0),0,200);
        puVar7 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x28);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        iVar3 = (int)uVar9;
        lVar11 = (longlong)iVar3;
        uVar4 = puVar7[lVar11] & uVar12;
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
          if (iVar5 <= iVar3) {
            return;
          }
          lVar8 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = puVar7[lVar11 + lVar8 + 1];
            if (uVar4 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar6 - lVar11 == lVar8) {
              return;
            }
          }
          uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar3 < iVar2);
    }
  }
  return;
}



// FUNCTION 1446857e6 FUN_1446857e6 body=55 status=ok
// SIG undefined FUN_1446857e6(void)

void FUN_1446857e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30d48 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30d48 = FUN_14171c317(FUN_14676ea0f,uVar1,L"ENDIGeometryCollection_SourceMode");
  }
  return;
}



// FUNCTION 14468581e FUN_14468581e body=2710 status=ok
// SIG undefined FUN_14468581e(void)

void FUN_14468581e(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_2 + 0x88);
  if (plVar2 == (longlong *)0x0) {
    piVar19 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  else {
    piVar19 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar5 = *piVar19;
    if (DAT_14c86a9fc == 0) {
      if (iVar5 != 2) {
        if (iVar5 != 1) goto LAB_144685879;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14468587e;
        goto LAB_1446858d3;
      }
LAB_14468587e:
      (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar8 = (undefined8 *)*plVar2;
      plVar20 = plVar2;
LAB_14468588d:
      (*(code *)*puVar8)(plVar20,1);
    }
    else {
LAB_144685879:
      if (iVar5 == 0x10) goto LAB_14468587e;
LAB_1446858d3:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar19 == 2)) goto LAB_14468587e;
        if (*piVar19 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_14468587e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar8 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar8;
        if (puVar11 != (uint *)0x0) goto LAB_144685aab;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14468683d);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar8 = puVar10;
          FUN_140217a48(puVar8);
          puVar11 = (uint *)*puVar8;
LAB_144685aab:
          plVar20 = (longlong *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(plVar20 + 0x16);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar1 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar1 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar8;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar8 = puVar11;
            plVar20 = (longlong *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(plVar20 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_144685b2d;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_144685b2d:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar5 = 0;
        FUN_1447247dc(plVar20,0);
        *plVar20 = (longlong)&PTR_FUN_14beebb80;
        plVar20[0x15] = (longlong)plVar2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar5 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
        }
        if (*(code **)(plVar20[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar20[0xe] + 0x18))(plVar20 + 0xe,plVar20 + 9);
        }
        plVar20[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar20[9] = (longlong)plVar20;
        plVar20[10] = (longlong)plVar20;
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar4 = 1;
          if ((char)uVar18 != '\x06') {
            uVar4 = uVar18;
          }
          uVar18 = uVar4;
          lVar9 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          lVar9 = *(longlong *)(lVar9 + 0x30);
        }
        plVar20[0xf] = lVar9;
        plVar20[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)plVar20 + 0x1c) = iVar5;
        if (plVar20 == (longlong *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
          goto LAB_144685965;
        }
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(plVar20);
        LOCK();
        plVar2 = plVar20 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 != 0) goto LAB_144685965;
        puVar8 = (undefined8 *)*plVar20;
        goto LAB_14468588d;
      }
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14beebb60;
      local_88[0] = FUN_144686d80;
      local_60 = plVar2;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cc30e90);
      if (local_88[0] != (code *)0x0) {
        pppuVar14 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar14 = &local_68;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
LAB_144685965:
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  lVar9 = *(longlong *)(param_3 + 0x100);
  iVar5 = *piVar19;
  iVar3 = (int)((ulonglong)lVar9 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_14468598c;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144685995;
      goto LAB_144685d41;
    }
  }
  else {
LAB_14468598c:
    if (iVar5 != 0x10) {
LAB_144685d41:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar19 == 2)) {
LAB_1446861aa:
          if ((int)plVar2[3] != *(int *)((longlong)plVar2 + 0x44)) {
            plVar20 = plVar2 + 9;
            if ((longlong *)plVar2[10] != (longlong *)0x0) {
              plVar20 = (longlong *)plVar2[10];
            }
            iVar5 = *(int *)((longlong)plVar20 +
                            (ulonglong)((int)plVar2[0xb] - 1U & (int)lVar9 + iVar3 * 0x17) * 4);
            if (iVar5 != -1) {
              do {
                lVar17 = plVar2[2] + (longlong)iVar5 * 0xd0;
                if (*(longlong *)(plVar2[2] + (longlong)iVar5 * 0xd0) == lVar9) goto LAB_144686215;
                iVar5 = *(int *)(lVar17 + 0xc0);
              } while (iVar5 != -1);
            }
          }
          goto LAB_144685ddf;
        }
        if (*piVar19 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_1446861aa;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar8 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar8;
        if (puVar11 != (uint *)0x0) goto LAB_144685ea7;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14468683d);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar8 = puVar10;
          FUN_140217a48(puVar8);
          puVar11 = (uint *)*puVar8;
LAB_144685ea7:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar1 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar1 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar8;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar8 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_144685f27;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_144685f27:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar5 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14beebbb0;
        puVar16[0x15] = plVar2;
        puVar16[0x16] = lVar9;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar5 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
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
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar4 = 1;
          if ((char)uVar18 != '\x06') {
            uVar4 = uVar18;
          }
          uVar18 = uVar4;
          uVar12 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar5;
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
          piVar19 = (int *)(puVar16 + 1);
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (*piVar19 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14beebb90;
        local_88[0] = FUN_144686f64;
        local_60 = plVar2;
        local_58 = lVar9;
        FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cc30e94);
        if (local_88[0] != (code *)0x0) {
          pppuVar14 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar14 = &local_68;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_144685ddf;
    }
  }
LAB_144685995:
  if ((int)plVar2[3] != *(int *)((longlong)plVar2 + 0x44)) {
    plVar20 = plVar2 + 9;
    if ((longlong *)plVar2[10] != (longlong *)0x0) {
      plVar20 = (longlong *)plVar2[10];
    }
    iVar5 = *(int *)((longlong)plVar20 +
                    (ulonglong)((int)plVar2[0xb] - 1U & (int)lVar9 + iVar3 * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar17 = plVar2[2] + (longlong)iVar5 * 0xd0;
        if (*(longlong *)(plVar2[2] + (longlong)iVar5 * 0xd0) == lVar9) goto LAB_144686215;
        iVar5 = *(int *)(lVar17 + 0xc0);
      } while (iVar5 != -1);
    }
  }
LAB_144685ddf:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144686215:
  if (((lVar17 + 0x10U & 0xffffffffffffffef) != 0) && (*(longlong *)(lVar17 + 0xa0) != 0)) {
    FUN_1498c0966(plVar2 + 2,lVar9);
    if (*(longlong *)(lVar17 + 0xa0) != 0) {
      FUN_1498c0a3a(*(longlong *)(lVar17 + 0xa0));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  goto LAB_144685ddf;
}



// FUNCTION 1446862ce FUN_1446862ce body=1282 status=ok
// SIG undefined FUN_1446862ce(void)

void FUN_1446862ce(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1498b093e(param_2);
  FUN_1408bc7be(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14468672b;
    if (iVar7 != 1) goto LAB_144686343;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14468672b;
  }
  else {
LAB_144686343:
    if (iVar7 == 0x10) goto LAB_14468672b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14468672b:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14468672b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_1446864b0;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14468683d);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_1446864b0:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_144686530;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_144686530:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14beebdc0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_48 = &PTR_LAB_14beebda0;
    local_68[0] = &LAB_144687272;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cc30f1c);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144686814 FUN_144686814 body=12 status=ok
// SIG undefined FUN_144686814(void)

void FUN_144686814(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014468681d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144686820 FUN_144686820 body=29 status=ok
// SIG undefined FUN_144686820(void)

undefined8 FUN_144686820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144686864 FUN_144686864 body=282 status=ok
// SIG undefined FUN_144686864(void)

undefined8 * FUN_144686864(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14468683d);
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



// FUNCTION 14468697e FUN_14468697e body=106 status=ok
// SIG undefined FUN_14468697e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14468697e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145cabe24(_DAT_000000a8,0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145cabe24(param_1[0x15],param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446869de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144686a06 FUN_144686a06 body=12 status=ok
// SIG undefined FUN_144686a06(void)

void FUN_144686a06(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144686a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144686a12 FUN_144686a12 body=29 status=ok
// SIG undefined FUN_144686a12(void)

undefined8 FUN_144686a12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144686a30 FUN_144686a30 body=282 status=ok
// SIG undefined FUN_144686a30(void)

undefined8 * FUN_144686a30(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14468683d);
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



// FUNCTION 144686b4a FUN_144686b4a body=117 status=ok
// SIG undefined FUN_144686b4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144686b4a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145a10120(_DAT_000000a8 + 0x18,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145a10120(param_1[0x15] + 0x18,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144686bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144686bee FUN_144686bee body=12 status=ok
// SIG undefined FUN_144686bee(void)

void FUN_144686bee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144686bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144686bfa FUN_144686bfa body=29 status=ok
// SIG undefined FUN_144686bfa(void)

undefined8 FUN_144686bfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144686c18 FUN_144686c18 body=282 status=ok
// SIG undefined FUN_144686c18(void)

undefined8 * FUN_144686c18(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14468683d);
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



// FUNCTION 144686d80 FUN_144686d80 body=51 status=ok
// SIG undefined FUN_144686d80(void)

void FUN_144686d80(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144686da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 144686dbe FUN_144686dbe body=12 status=ok
// SIG undefined FUN_144686dbe(void)

void FUN_144686dbe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144686dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144686dca FUN_144686dca body=29 status=ok
// SIG undefined FUN_144686dca(void)

undefined8 FUN_144686dca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144686de8 FUN_144686de8 body=282 status=ok
// SIG undefined FUN_144686de8(void)

undefined8 * FUN_144686de8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14468683d);
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



// FUNCTION 144686f02 FUN_144686f02 body=98 status=ok
// SIG undefined FUN_144686f02(void)

void FUN_144686f02(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144686f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144686f64 FUN_144686f64 body=188 status=ok
// SIG undefined FUN_144686f64(void)

void FUN_144686f64(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = param_1[1];
    lVar4 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0x58) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0xd0) == lVar2) {
          if ((lVar4 + 0x10U & 0xffffffffffffffef) == 0) {
            return;
          }
          if (*(longlong *)(lVar4 + 0xa0) == 0) {
            return;
          }
          FUN_1498c0966();
          lVar1 = *(longlong *)(lVar4 + 0xa0);
          if (lVar1 == 0) {
            return;
          }
          FUN_1498c0a3a(lVar1);
          FUN_1400020a8(lVar1);
          return;
        }
        iVar3 = *(int *)(lVar4 + 0xc0);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14468702a FUN_14468702a body=12 status=ok
// SIG undefined FUN_14468702a(void)

void FUN_14468702a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144687033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144687036 FUN_144687036 body=29 status=ok
// SIG undefined FUN_144687036(void)

undefined8 FUN_144687036(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144687054 FUN_144687054 body=282 status=ok
// SIG undefined FUN_144687054(void)

undefined8 * FUN_144687054(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14468683d);
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



// FUNCTION 14468716e FUN_14468716e body=248 status=ok
// SIG undefined FUN_14468716e(void)

void FUN_14468716e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar3 = param_1[0x16];
    lVar5 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xd0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0xd0) == lVar3) {
          if (((lVar5 + 0x10U & 0xffffffffffffffef) != 0) && (*(longlong *)(lVar5 + 0xa0) != 0)) {
            FUN_1498c0966();
            lVar2 = *(longlong *)(lVar5 + 0xa0);
            if (lVar2 != 0) {
              FUN_1498c0a3a(lVar2);
              FUN_1400020a8(lVar2);
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0xc0);
      } while (iVar4 != -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144687238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144687290 FUN_144687290 body=12 status=ok
// SIG undefined FUN_144687290(void)

void FUN_144687290(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144687299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14468729c FUN_14468729c body=29 status=ok
// SIG undefined FUN_14468729c(void)

undefined8 FUN_14468729c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446872ba FUN_1446872ba body=282 status=ok
// SIG undefined FUN_1446872ba(void)

undefined8 * FUN_1446872ba(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14468683d);
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



// FUNCTION 1446873d4 FUN_1446873d4 body=117 status=ok
// SIG undefined FUN_1446873d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446873d4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1498c1b78(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1498c1b78(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014468743f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144687461 FUN_144687461 body=1796 status=ok
// SIG undefined FUN_144687461(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144687461(void)

{
  char cVar1;
  uint uVar2;
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
  local_50 = (char *)0x800000014bee5b70;
  local_54 = 0xc;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_14676e748(&local_50);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cc30b9c);
  if (cVar1 == '\0') {
    _DAT_14cc30b9c = 0;
    uRam000000014cc30ba4 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_70 = &PTR_FUN_14bee7c80;
  local_78 = 1;
  local_68 = 8;
  FUN_14282b410(L"/Script/ChaosNiagara",&PTR_FUN_14bee7db0,1,&PTR_FUN_14bee7d80);
  local_50 = "GetPosition";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30ca0 = (ulonglong)uVar2;
  local_50 = "GetNormal";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30ca8 = (ulonglong)uVar2;
  local_50 = "GetVelocity";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cb0 = (ulonglong)uVar2;
  local_50 = "GetAngularVelocity";
  local_48 = 0x12;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cb8 = (ulonglong)uVar2;
  local_50 = "GetExtentMin";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cc0 = (ulonglong)uVar2;
  local_50 = "GetExtentMax";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cc8 = (ulonglong)uVar2;
  local_50 = "GetVolume";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cd0 = (ulonglong)uVar2;
  local_50 = "GetParticleIdsToSpawnAtTime";
  local_48 = 0x1b;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cd8 = (ulonglong)uVar2;
  local_50 = "GetPointType";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30ce0 = (ulonglong)uVar2;
  local_50 = "GetColor";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30ce8 = (ulonglong)uVar2;
  local_50 = "GetSolverTime";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cf0 = (ulonglong)uVar2;
  local_50 = "GetDensity";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30cf8 = (ulonglong)uVar2;
  local_50 = "GetFriction";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d00 = (ulonglong)uVar2;
  local_50 = "GetRestitution";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d08 = (ulonglong)uVar2;
  local_50 = "GetSurfaceType";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d10 = (ulonglong)uVar2;
  local_50 = "GetTransform";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d18 = (ulonglong)uVar2;
  local_50 = "GetSize";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d20 = (ulonglong)uVar2;
  local_50 = "GetCollisionData";
  local_48 = 0x10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d28 = (ulonglong)uVar2;
  local_50 = "GetBreakingData";
  local_48 = 0xf;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d30 = (ulonglong)uVar2;
  local_50 = "GetTrailingData";
  local_48 = 0xf;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30d38 = (ulonglong)uVar2;
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14bee8c50;
  local_78 = 0;
  FUN_14282b410(L"/Script/ChaosNiagara",&PTR_FUN_14bee8c70,1,0);
  FUN_1446f470e(&DAT_14cc30d70,L"GetClosestPointNoNormal",1);
  FUN_1446f470e(&DAT_14cc30d78,L"GetNumElements",1);
  FUN_1446f470e(&DAT_14cc30d80,L"GetElementBounds",1);
  FUN_1446f470e(&DAT_14cc30d88,L"GetElementTransform",1);
  FUN_1446f470e(&DAT_14cc30d90,L"SetElementTransform",1);
  FUN_1446f470e(&DAT_14cc30d98,L"SetElementTransformWS",1);
  FUN_1446f470e(&DAT_14cc30da0,L"GetGeometryComponentTransform",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosNiagara",&PTR_FUN_14bee92c0,1,0);
  local_50 = "SamplePhysicsVectorField";
  local_48 = 0x18;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30dc0 = (ulonglong)uVar2;
  local_50 = "SamplePhysicsScalarField";
  local_48 = 0x18;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30dc8 = (ulonglong)uVar2;
  local_50 = "SamplePhysicsIntegerField";
  local_48 = 0x19;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30dd0 = (ulonglong)uVar2;
  local_50 = "EvalPhysicsVectorField";
  local_48 = 0x16;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30dd8 = (ulonglong)uVar2;
  local_50 = "EvalPhysicsScalarField";
  local_48 = 0x16;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30de0 = (ulonglong)uVar2;
  local_50 = "EvalPhysicsIntegerField";
  local_48 = 0x17;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30de8 = (ulonglong)uVar2;
  local_50 = "GetPhysicsFieldResolution";
  local_48 = 0x19;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30df0 = (ulonglong)uVar2;
  local_50 = "GetPhysicsFieldBounds";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cc30df8 = (ulonglong)uVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144687b68 FUN_144687b68 body=102 status=ok
// SIG undefined FUN_144687b68(void)

void FUN_144687b68(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014beebebc;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14676ef68(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144687bd0 FUN_144687bd0 body=57 status=ok
// SIG undefined FUN_144687bd0(void)

void FUN_144687bd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc31050 == 0) {
    uVar1 = FUN_14596ef09();
    DAT_14cc31050 = FUN_14171c317(FUN_14676f0aa,uVar1,L"ENiagaraSimCacheSectionPlayMode");
  }
  return;
}



// FUNCTION 144687c09 FUN_144687c09 body=57 status=ok
// SIG undefined FUN_144687c09(void)

void FUN_144687c09(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc31068 == 0) {
    uVar1 = FUN_14596ef09();
    DAT_14cc31068 = FUN_14171c317(FUN_14676f0d9,uVar1,L"ENiagaraSimCacheSectionStretchMode");
  }
  return;
}



// FUNCTION 144687c6c FUN_144687c6c body=506 status=ok
// SIG undefined FUN_144687c6c(void)

void FUN_144687c6c(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    FUN_1401abe9c(param_5,&local_60,param_3,param_3 + 4);
    if ((longlong)local_58 != 0) {
      lVar5 = 0;
      do {
        uVar1 = *(ulonglong *)(local_60 + lVar5);
        if (((((uVar1 >> 0x20 != 0) && (uVar3 = (uint)uVar1, -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar4 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8))),
             plVar4 != (longlong *)0x0 && ((int)plVar4[2] == (int)(uVar1 >> 0x20))))) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
          if (DAT_14cb39ca0 == 0) {
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_14638c6c0;
            local_80 = &local_50;
            local_88 = &LAB_14811044c;
            local_90 = &LAB_1407f5cf8;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000004;
            local_b0 = 0x10;
            local_b8 = 0x8e0;
            FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
          }
          if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) {
            FUN_14810eaba(lVar2,0,0);
            break;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)local_58 * 8 != lVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144687e68 FUN_144687e68 body=889 status=ok
// SIG undefined FUN_144687e68(void)

void FUN_144687e68(longlong param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined ***local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined **local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    FUN_1401abe9c(param_5,&local_98,param_3,param_3 + 4);
    if ((longlong)local_90 != 0) {
      lVar7 = 0;
      do {
        uVar6 = *(ulonglong *)(local_98 + lVar7);
        if (((((uVar6 >> 0x20 != 0) && (uVar3 = (uint)uVar6, -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar4 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8))),
             plVar4 != (longlong *)0x0 && ((int)plVar4[2] == (int)(uVar6 >> 0x20))))) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
            (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
          if (DAT_14cb39ca0 == 0) {
            local_a0 = (undefined **)FUN_144a7958c;
            local_b0 = FUN_14081d0ea;
            local_b8 = &LAB_14638c6c0;
            local_c0 = &local_a0;
            local_c8 = &LAB_14811044c;
            local_d0 = &LAB_1407f5cf8;
            local_d8 = L"Engine";
            local_e0 = 0;
            local_e8 = 0x10000004;
            local_f0 = 0x10;
            local_f8 = CONCAT44(local_f8._4_4_,0x8e0);
            FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
          }
          if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) ==
              DAT_14cb39ca0 + 0x30)) {
            if (*(char *)(param_1 + 0xa0) == '\0') {
              if (*(char *)(param_1 + 0xa8) == '\x01') {
                (**(code **)(*plVar4 + 0xa68))(plVar4);
              }
              else if (*(char *)(param_1 + 0xa8) == '\0') {
                FUN_14810eaba(plVar4,0,0);
              }
            }
            else {
              if (*(longlong *)(param_1 + 0x90) != plVar4[0x117]) {
                FUN_14810eaba(plVar4,*(longlong *)(param_1 + 0x90),0);
              }
              local_f8 = param_1 + 8;
              uVar3 = *(uint *)(param_2 + 0x24);
              if (SBORROW4(0,uVar3)) {
                puVar5 = (uint *)(param_2 + 4);
                if (*(int *)(param_2 + 0x20) == 0) {
                  puVar5 = (uint *)(param_2 + 0x10);
                }
                uVar3 = *puVar5;
                uVar6 = (ulonglong)puVar5[1] << 0x20;
              }
              else {
                uVar6 = 0;
              }
              fVar8 = (float)FUN_1498c49f4(param_1 + 0x18,
                                           *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 100),
                                           uVar3 | uVar6,*(undefined8 *)(param_2 + 0x18));
              fVar1 = *(float *)(*(longlong *)(param_1 + 0x90) + 0x60);
              FUN_140388fde(&local_98,param_5 + 0x110,param_4 + 0x24,1);
              local_a0 = &PTR_FUN_14beed900;
              lVar7 = DAT_14cc31110;
              if (DAT_14cc31110 == 0) {
                lVar7 = FUN_14570767c(&DAT_14cc31110,0);
              }
              lVar2 = FUN_14027385c(param_5 + 0x110);
              if (lVar2 != 0) {
                FUN_14027378e(lVar2,plVar4,lVar7,&local_a0);
              }
              *(float *)((longlong)plVar4 + 0x774) = fVar8 + fVar1;
              *(undefined1 *)((longlong)plVar4 + 0x78c) = 0;
              *(undefined1 *)(plVar4 + 0xee) = 1;
              if ((*(byte *)((longlong)plVar4 + 0x9e) & 0x10) == 0) {
                (**(code **)(*plVar4 + 0x2a8))(plVar4,1);
              }
              *(undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xec8) = local_70;
            }
            break;
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)local_90 * 8 != lVar7);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446881e2 FUN_1446881e2 body=335 status=ok
// SIG undefined FUN_1446881e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446881e2(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cc31030);
  if (cVar1 == '\0') {
    _DAT_14cc31030 = 0;
    uRam000000014cc31038 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cc31040 = 0xffffffff;
  _DAT_14cc31044 = 0;
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14beec920;
  local_68 = 1;
  FUN_14282b410(L"/Script/NiagaraSimCaching",&PTR_FUN_14beec990,1,&PTR_FUN_14beec960);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/NiagaraSimCaching",0,0,&PTR_FUN_14beecc80);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/NiagaraSimCaching",&PTR_FUN_14beed280,1,0);
  local_48 = -0x7ffffffeb4112d1e;
  local_34 = 0x11;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14676f2e6(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144688334 FUN_144688334 body=147 status=ok
// SIG undefined FUN_144688334(void)

void FUN_144688334(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/AvfMediaFactory",&PTR_FUN_14beeddd0,1,0);
  local_28 = 0x800000014beeddf8;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14676f5c4(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446883c8 FUN_1446883c8 body=211 status=ok
// SIG undefined FUN_1446883c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446883c8(void)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = -0x7ffffffeb4111df2;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14677050e(&local_28);
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cc3117c);
  if (cVar1 == '\0') {
    _DAT_14cc3117c = 0;
    uRam000000014cc31184 = 0;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/ImgMediaEngine",&PTR_FUN_14beee830,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468849c FUN_14468849c body=138 status=ok
// SIG undefined FUN_14468849c(void)

undefined8 * FUN_14468849c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  local_38 = FUN_14001cc68(0x40,0x10);
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_1498c6576(local_d0,puVar2);
  uVar1 = local_38;
  FUN_144b70560(local_38,local_48,param_3);
  *local_30 = uVar1;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  return local_30;
}



// FUNCTION 144688526 Unwind@144688526 body=42 status=ok
// SIG undefined Unwind@144688526(void)

void Unwind_144688526(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 144688550 Unwind@144688550 body=37 status=ok
// SIG undefined Unwind@144688550(void)

void Unwind_144688550(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0xc0));
  return;
}



// FUNCTION 144688576 Catch@144688576 body=45 status=ok
// SIG undefined Catch@144688576(void)

undefined8 Catch_144688576(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 200) = 0;
  return 0x144688517;
}



// FUNCTION 1446885a4 FUN_1446885a4 body=67 status=ok
// SIG undefined FUN_1446885a4(void)

void FUN_1446885a4(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144b70e30(*param_1);
  FUN_144b70c30(*param_1,param_2 + *(int *)(lVar1 + 4),param_3 + *(int *)(lVar1 + 4));
  return;
}



// FUNCTION 1446885e8 Catch@1446885e8 body=33 status=ok
// SIG undefined Catch@1446885e8(void)

undefined8 Catch_1446885e8(void)

{
  return 0x1446885dd;
}



// FUNCTION 14468860a FUN_14468860a body=346 status=ok
// SIG undefined FUN_14468860a(void)

undefined8 * FUN_14468860a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar5 = 0;
  *param_1 = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = SharedPointerInternals::
            TReferenceControllerWithDeleter<_priv_exr_context_t*___ptr64,SharedPointerInternals::DefaultDeleter<_priv_exr_context_t*___ptr64>,1>
            ::vftable;
  puVar6[2] = puVar5;
  param_1[1] = puVar6;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0x68;
  local_40 = 0xbf800000fffffffe;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  FUN_1498c6576(&local_138,puVar7);
  puVar5 = local_30;
  iVar4 = FUN_144b73bb0(*local_30,local_b0,&local_98);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (iVar4 != 0) {
    local_138 = 0;
    uStack_130 = 0;
    *puVar5 = 0;
    plVar3 = (longlong *)puVar5[1];
    if (plVar3 != (longlong *)0x0) {
      local_30[1] = 0;
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
    FUN_1498c61e8(&local_138);
    puVar5 = local_30;
  }
  return puVar5;
}



// FUNCTION 144688764 Unwind@144688764 body=42 status=ok
// SIG undefined Unwind@144688764(void)

void Unwind_144688764(undefined8 param_1,longlong param_2)

{
  FUN_1498c61e8(*(undefined8 *)(param_2 + 0x128));
  return;
}



// FUNCTION 14468878e Unwind@14468878e body=39 status=ok
// SIG undefined Unwind@14468878e(void)

void Unwind_14468878e(undefined8 param_1,longlong param_2)

{
  FUN_1498c61e8(param_2 + 0x20);
  return;
}



// FUNCTION 1446887b6 FUN_1446887b6 body=115 status=ok
// SIG undefined FUN_1446887b6(void)

void FUN_1446887b6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_144b73980(*param_1);
  local_38 = 0;
  uStack_30 = 0;
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
  FUN_1498c61e8(&local_38);
  FUN_1498c61e8(param_1);
  return;
}



// FUNCTION 14468882a Unwind@14468882a body=30 status=ok
// SIG undefined Unwind@14468882a(void)

void Unwind_14468882a(undefined8 param_1,longlong param_2)

{
  FUN_1498c61e8(param_2 + 0x20);
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14468884a FUN_14468884a body=129 status=ok
// SIG undefined FUN_14468884a(void)

wchar_t * FUN_14468884a(undefined8 *param_1)

{
  wchar_t *pwVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144b747e0(*(undefined8 *)*param_1,0,"compression",&local_18);
  if (local_18 == 0) {
    pwVar1 = L"";
  }
  else if ((ulonglong)*(uint *)(local_18 + 0x18) < 8) {
    pwVar1 = (wchar_t *)(&PTR_u_Uncompressed_14beeed40)[*(uint *)(local_18 + 0x18)];
  }
  else {
    pwVar1 = L"Unknown";
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return pwVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446888cc FUN_1446888cc body=118 status=ok
// SIG undefined FUN_1446888cc(void)

int * FUN_1446888cc(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144b747e0(*(undefined8 *)*param_1,0,"dataWindow",&local_20);
  piVar3 = *(int **)(local_20 + 0x18);
  iVar1 = piVar3[3];
  iVar2 = piVar3[1];
  *param_2 = (piVar3[2] - *piVar3) + 1;
  param_2[1] = (iVar1 - iVar2) + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144688944 FUN_144688944 body=147 status=ok
// SIG undefined FUN_144688944(void)

int FUN_144688944(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  iVar3 = 0;
  FUN_144b747e0(*(undefined8 *)*param_1,0,"channels",&local_20);
  lVar1 = (longlong)**(int **)(local_20 + 0x18);
  if (0 < lVar1) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + (uint)((*(uint *)(*(longlong *)(*(int **)(local_20 + 0x18) + 2) + 0x10 + lVar2
                                       ) & 0xfffffffd) == 0) * 2 + 2;
      lVar2 = lVar2 + 0x20;
    } while (lVar1 * 0x20 != lVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446889d8 FUN_1446889d8 body=92 status=ok
// SIG undefined FUN_1446889d8(void)

undefined4 FUN_1446889d8(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144b747e0(*(undefined8 *)*param_1,0,"channels",&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return **(undefined4 **)(local_18 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144688a36 FUN_144688a36 body=139 status=ok
// SIG undefined FUN_144688a36(void)

undefined8 FUN_144688a36(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_144b747e0(*(undefined8 *)*param_1,0,"channels",&local_18);
  iVar1 = **(int **)(local_18 + 0x18);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(*(int **)(local_18 + 0x18) + 2) + 0x10 + lVar3) != 1) {
        uVar2 = 0;
        goto LAB_144688aa5;
      }
      lVar3 = lVar3 + 0x20;
    } while ((longlong)iVar1 << 5 != lVar3);
  }
  uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),iVar1 < 5);
LAB_144688aa5:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144688ac2 FUN_144688ac2 body=109 status=ok
// SIG undefined FUN_144688ac2(void)

void FUN_144688ac2(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014beee98a;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14cc311a8,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144688b3c FUN_144688b3c body=145 status=ok
// SIG undefined FUN_144688b3c(void)

bool FUN_144688b3c(FILE *param_1)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  sVar2 = fread(&local_1c,1,4,param_1);
  uVar1 = local_1c;
  if ((int)sVar2 == 4) {
    fread(&local_1c,1,4,param_1);
    bVar3 = false;
    if ((uVar1 == 0x1312f76) && ((local_1c & 0xff) == 2)) {
      bVar3 = (local_1c & 0xffffe100) == 0;
    }
  }
  else {
    bVar3 = false;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144688bce FUN_144688bce body=382 status=ok
// SIG undefined FUN_144688bce(void)

undefined8 FUN_144688bce(FILE *param_1)

{
  size_t sVar1;
  undefined7 uVar3;
  size_t sVar2;
  ulonglong unaff_RBX;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  char acStack_268 [256];
  char local_168 [256];
  ulonglong local_68 [2];
  char local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  do {
    sVar2 = 0;
    do {
      sVar1 = fread(local_168 + sVar2,1,1,param_1);
      if (((int)sVar1 != 1) || (local_168[sVar2] == '\0')) break;
      sVar1 = sVar2 + 1;
      iVar5 = (int)sVar2;
      sVar2 = sVar1;
    } while (iVar5 != 0xff);
    uVar3 = (undefined7)(sVar1 >> 8);
    if (local_168[0] == '\0') goto LAB_144688d2e;
    local_51 = local_168[0];
    lVar6 = 0;
    do {
      sVar2 = fread(acStack_268 + lVar6,1,1,param_1);
      if (((int)sVar2 != 1) || (acStack_268[lVar6] == '\0')) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar5 != 0xff);
    sVar2 = fread(local_68,1,4,param_1);
    if ((int)sVar2 == 4) {
      unaff_RBX = local_68[0] & 0xffffffff;
    }
    if ((int)unaff_RBX < 0) {
      uVar3 = (undefined7)(sVar2 >> 8);
      local_168[0] = local_51;
LAB_144688d2e:
      return CONCAT71(uVar3,local_168[0] == '\0');
    }
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_14626819e(local_68,unaff_RBX & 0xffffffff,1);
    if ((int)unaff_RBX != 0) {
      uVar4 = 1;
      do {
        sVar2 = fread((void *)(local_68[0] + uVar4 + -1),1,1,param_1);
        if ((int)sVar2 != 1) break;
        bVar7 = uVar4 < (unaff_RBX & 0xffffffff);
        uVar4 = uVar4 + 1;
      } while (bVar7);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  } while( true );
}



// FUNCTION 144688d4c Unwind@144688d4c body=68 status=ok
// SIG undefined Unwind@144688d4c(void)

void Unwind_144688d4c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x220) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 144688d90 Catch_All@144688d90 body=58 status=ok
// SIG undefined Catch_All@144688d90(void)

undefined8 Catch_All_144688d90(void)

{
  return 0x144688d28;
}



// FUNCTION 144688dca FUN_144688dca body=157 status=ok
// SIG undefined FUN_144688dca(void)

undefined8 FUN_144688dca(FILE *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = uVar2;
  if ((param_2 == 0) && (0 < (int)param_3[1])) {
    lVar4 = 0;
    do {
      lVar1 = *param_3;
      sVar3 = fread(&local_48,1,8,param_1);
      if ((int)sVar3 == 8) {
        *(undefined8 *)(lVar1 + lVar4 * 8) = local_48;
      }
      lVar4 = lVar4 + 1;
      uVar2 = (ulonglong)(int)param_3[1];
    } while (lVar4 < (longlong)uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),param_2 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144688e68 FUN_144688e68 body=783 status=ok
// SIG undefined FUN_144688e68(void)

ulonglong FUN_144688e68(longlong *param_1,longlong *param_2,ulonglong *param_3,int *param_4,
                       uint param_5,int param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  
  uVar9 = (ulonglong)param_5;
  if (0 < (int)param_5) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar23 = 0;
    iVar6 = 0;
    do {
      iVar15 = 1 << ((byte)uVar23 & 0x1f);
      uVar9 = *param_3;
      iVar17 = *param_4;
      iVar19 = param_4[1];
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_1,iVar2);
      }
      iVar12 = (int)((longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff)
                    / (longlong)iVar15);
      iVar15 = (int)((longlong)((ulonglong)(uint)((longlong)uVar9 >> 0x3f) << 0x20 | uVar9 >> 0x20)
                    / (longlong)iVar15);
      fVar26 = (float)iVar15 / (float)iVar19;
      fVar26 = fVar26 + fVar26;
      iVar18 = (int)ROUND(-0.5 - fVar26) >> 1;
      fVar25 = (float)iVar12 / (float)iVar17 + (float)iVar12 / (float)iVar17;
      iVar19 = (int)ROUND(-0.5 - fVar25) >> 1;
      uVar20 = iVar19 * iVar18;
      iVar18 = -iVar18;
      iVar19 = -iVar19;
      iVar22 = (int)ROUND(fVar26 + -0.5) >> 1;
      iVar13 = (int)ROUND(fVar25 + -0.5) >> 1;
      *(uint *)(*param_1 + (longlong)iVar2 * 4) = uVar20;
      lVar21 = DAT_14cc311c0;
      iVar17 = iVar6;
      if ((iVar13 == iVar19) && (iVar22 == iVar18)) {
        iVar2 = *(int *)(lVar4 + 0xc60);
        if (iVar2 == 0x40000002) {
          uVar9 = 0;
        }
        else {
          bVar24 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
            if (iVar2 == 1) {
              DVar7 = FUN_140ad26c0();
              DVar8 = GetCurrentThreadId();
              bVar24 = DVar7 == DVar8;
            }
            else {
              bVar24 = false;
            }
          }
          uVar9 = (ulonglong)(bVar24 ^ 1);
        }
        if (*(char *)(lVar21 + uVar9) == '\x01') goto LAB_14468902c;
      }
      else {
LAB_14468902c:
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1498c6c1a(param_2,iVar2);
        }
        puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        plVar11 = (longlong *)(uVar23 * 0x10 + *param_2);
        FUN_1498c67aa(plVar11,uVar20);
        iVar2 = param_4[1];
        iVar3 = *param_4;
        uVar9 = (longlong)iVar12 / (longlong)iVar3 & 0xffffffff;
        if (0 < (int)uVar20) {
          lVar21 = 0xc;
          uVar14 = 0;
          do {
            iVar16 = *param_4;
            if ((iVar13 != iVar19) && (iVar16 = iVar12 % iVar3, ((int)uVar14 + 1) % iVar19 != 0)) {
              iVar16 = *param_4;
            }
            uVar9 = uVar14 + 1;
            iVar10 = iVar15 % iVar2;
            if ((longlong)uVar14 < (longlong)(iVar22 * iVar19)) {
              iVar10 = param_4[1];
            }
            if (iVar22 == iVar18) {
              iVar10 = param_4[1];
            }
            lVar5 = *plVar11;
            *(int *)(lVar5 + -0xc + lVar21) = iVar16;
            *(int *)(lVar5 + -8 + lVar21) = iVar10;
            *(int *)(lVar5 + -4 + lVar21) = iVar17 - iVar6;
            *(undefined4 *)(lVar5 + lVar21) = 0;
            iVar17 = iVar17 + iVar10 * iVar16 * param_6 + 0x14;
            lVar21 = lVar21 + 0x10;
            uVar14 = uVar9;
          } while (uVar20 != uVar9);
        }
      }
      uVar23 = uVar23 + 1;
      iVar6 = iVar17;
    } while (uVar23 != param_5);
  }
  return uVar9;
}



// FUNCTION 144689178 FUN_144689178 body=328 status=ok
// SIG undefined FUN_144689178(void)

ulonglong FUN_144689178(FILE **param_1,longlong *param_2,longlong *param_3)

{
  FILE **ppFVar1;
  FILE *pFVar2;
  char cVar3;
  errno_t eVar4;
  long lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 local_d8 [128];
  longlong local_58;
  char *local_50;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_1 == (FILE *)0x0) {
    if ((int)param_2[1] == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    local_40 = param_2;
    FUN_1498c6576(local_d8,puVar6);
    eVar4 = fopen_s(param_1,local_50,"rb");
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar7 = 0;
    param_2 = local_40;
    if ((*param_1 != (FILE *)0x0) && (eVar4 == 0)) {
      FUN_144688b3c();
      cVar3 = FUN_144688bce(*param_1);
      if (cVar3 == '\0') {
        uVar7 = 0;
        param_2 = local_40;
      }
      else {
        ppFVar1 = param_1 + 2;
        FUN_1498c67f2(ppFVar1,(int)param_3[1],1);
        for (uVar8 = 0; (int)uVar8 < *(int *)(param_1 + 3); uVar8 = uVar8 + 1) {
          pFVar2 = *ppFVar1;
          FUN_1406b6038(&pFVar2->_ptr + (ulonglong)uVar8 * 2,
                        *(undefined4 *)(*param_3 + (ulonglong)uVar8 * 4),1);
          FUN_144688dca(*param_1,0,&pFVar2->_ptr + (ulonglong)uVar8 * 2);
        }
        fseek(*param_1,0,2);
        lVar5 = ftell(*param_1);
        param_1[1] = (FILE *)(longlong)lVar5;
        fseek(*param_1,*(long *)param_1[2]->_ptr,0);
        uVar7 = CONCAT71((int7)((ulonglong)ppFVar1 >> 8),1);
        param_2 = local_40;
      }
    }
  }
  else {
    uVar7 = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1446892c0 Unwind@1446892c0 body=55 status=ok
// SIG undefined Unwind@1446892c0(void)

void Unwind_1446892c0(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1446892f8 FUN_1446892f8 body=70 status=ok
// SIG undefined FUN_1446892f8(void)

undefined8 FUN_1446892f8(undefined8 *param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  
  if (param_2 < *(int *)(param_1[2] + 8 + (longlong)param_3 * 0x10)) {
    plVar1 = *(longlong **)(param_1[2] + (longlong)param_3 * 0x10);
    lVar2 = plVar1[param_2];
    *param_4 = lVar2 - *plVar1;
    iVar3 = fseek((FILE *)*param_1,(long)lVar2,0);
    uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 == 0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14468933e FUN_14468933e body=80 status=ok
// SIG undefined FUN_14468933e(void)

bool FUN_14468933e(undefined8 *param_1)

{
  FILE *_File;
  
  _File = (FILE *)*param_1;
  if (_File != (FILE *)0x0) {
    fclose(_File);
    FUN_1498c6ee6(param_1[2],*(undefined4 *)(param_1 + 3));
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_1498c6f70(param_1 + 2,0);
    }
  }
  return _File != (FILE *)0x0;
}



// FUNCTION 1446893b2 FUN_1446893b2 body=235 status=ok
// SIG undefined FUN_1446893b2(void)

void FUN_1446893b2(void)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined *)CONCAT71(local_38._1_7_,1);
  local_48 = 0;
  FUN_140bd5914(&DAT_14cc311b0,L"r.ExrReaderGPU.ForceTileDescBuffer",&local_38,
                L"Calculates tile description and offsets on CPU and provides a Structured buffer.\nto be used to access tile description on GPU\n"
               );
  atexit((_func_5014 *)&LAB_144688b30);
  local_38 = (undefined *)0x800000014beeef08;
  local_24 = 0xc;
  uVar1 = FUN_14577453c();
  local_30._0_5_ = CONCAT14(1,uVar1);
  FUN_1460162a6(&local_38);
  local_30 = FUN_145fdfe3c;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc312e8,&local_38);
  local_30 = FUN_1461168e4;
  local_38 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cc31410,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446894a0 FUN_1446894a0 body=69 status=ok
// SIG undefined FUN_1446894a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446894a0(void)

{
  _DAT_14cc31570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001446894e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc31578,1);
  return;
}



// FUNCTION 1446894e5 FUN_1446894e5 body=69 status=ok
// SIG undefined FUN_1446894e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446894e5(void)

{
  _DAT_14cc31588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144689527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc31590,1);
  return;
}



// FUNCTION 14468952a FUN_14468952a body=1431 status=ok
// SIG undefined FUN_14468952a(void)

void FUN_14468952a(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  code *local_88;
  undefined4 local_80;
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 == (longlong *)0x0) goto LAB_1446897b4;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_14468979f;
    LOCK();
    iVar10 = (int)plVar3[1];
    bVar15 = iVar6 == iVar10;
    if (bVar15) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar10 = iVar6;
    }
    iVar6 = iVar10;
    UNLOCK();
  } while (!bVar15);
  lVar13 = *param_3;
  if (lVar13 != 0 && param_2 != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
    local_90 = FUN_14081cebe();
    if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_90);
    }
    lVar7 = (**(code **)(*param_2 + 0x598))(param_2,&local_90);
    if (lVar7 != 0) {
      lVar8 = FUN_14081cebe();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        cVar5 = *(char *)(lVar13 + 0xc);
        local_a0 = (longlong *)(param_1 + 0x20);
        if (cVar5 == '\x02') {
          puVar9 = (undefined8 *)FUN_14001cc68(0x28,0x10);
          lVar13 = *param_3;
          lVar8 = param_3[1];
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
            UNLOCK();
          }
          *puVar9 = &PTR_FUN_14beef5d0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          uVar2 = *(uint *)(lVar7 + 0xc);
          *(uint *)(puVar9 + 1) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar6 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            local_a8 = CONCAT44(local_a8._4_4_,iVar10);
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar6 = *(int *)(lVar7 + 0x10);
            bVar15 = iVar6 == 0;
            if (bVar15) {
              *(int *)(lVar7 + 0x10) = (int)local_a8;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar6 = (int)local_a8;
            }
          }
          *(int *)((longlong)puVar9 + 0xc) = iVar6;
          puVar9[2] = lVar13;
          puVar9[3] = lVar8;
          *puVar9 = &PTR_FUN_14bef11f0;
          puVar9[4] = 0xffffffff42480000;
LAB_14468974c:
          iVar6 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar6 + 1U;
          plVar14 = local_a0;
          if (*(uint *)(param_1 + 0x2c) < iVar6 + 1U) {
LAB_14468998e:
            FUN_1498d11f4(plVar14,iVar6);
          }
        }
        else {
          if (cVar5 != '\x01') {
            puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
            lVar13 = *param_3;
            lVar8 = param_3[1];
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
              UNLOCK();
            }
            *puVar9 = &PTR_FUN_14beef5d0;
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            uVar2 = *(uint *)(lVar7 + 0xc);
            *(uint *)(puVar9 + 1) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            iVar6 = *(int *)(lVar7 + 0x10);
            if (*(int *)(lVar7 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar10 = DAT_14c964868 + 1;
              local_a8 = CONCAT44(local_a8._4_4_,iVar10);
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar15) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar6 = *(int *)(lVar7 + 0x10);
              bVar15 = iVar6 == 0;
              if (bVar15) {
                *(int *)(lVar7 + 0x10) = (int)local_a8;
                iVar6 = 0;
              }
              UNLOCK();
              if (bVar15) {
                iVar6 = (int)local_a8;
              }
            }
            *(int *)((longlong)puVar9 + 0xc) = iVar6;
            puVar9[2] = lVar13;
            puVar9[3] = lVar8;
            goto LAB_14468974c;
          }
          puVar9 = (undefined8 *)FUN_14001cc68(0x48,0x10);
          lVar13 = *param_3;
          lVar8 = param_3[1];
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
            UNLOCK();
          }
          *puVar9 = &PTR_FUN_14beef5d0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          uVar2 = *(uint *)(lVar7 + 0xc);
          *(uint *)(puVar9 + 1) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar6 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            local_a8 = lVar13;
            local_98 = lVar8;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar6 = *(int *)(lVar7 + 0x10);
            bVar15 = iVar6 == 0;
            if (bVar15) {
              *(int *)(lVar7 + 0x10) = iVar10;
              iVar6 = 0;
            }
            UNLOCK();
            lVar13 = local_a8;
            lVar8 = local_98;
            if (bVar15) {
              iVar6 = iVar10;
            }
          }
          *(int *)((longlong)puVar9 + 0xc) = iVar6;
          puVar9[2] = lVar13;
          puVar9[3] = lVar8;
          *puVar9 = &PTR_FUN_14bef11d0;
          uVar4 = DAT_14c8464e8;
          puVar9[4] = DAT_14c8464e0;
          puVar9[5] = uVar4;
          puVar9[6] = DAT_14c8464f0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          cVar5 = FUN_1498cf050();
          plVar14 = local_a0;
          if (cVar5 == '\0') {
            if (iVar6 == 0) {
LAB_144689a02:
              plVar11 = (longlong *)0x0;
            }
            else {
              uVar2 = *(uint *)(puVar9 + 1);
              plVar11 = (longlong *)0x0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                puVar12 = (undefined8 *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar12 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar12 + 2) != iVar6 || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))
                   )) goto LAB_144689a02;
                plVar11 = (longlong *)*puVar12;
              }
            }
            (**(code **)(*plVar11 + 0x530))(plVar11,&local_88);
            puVar9[4] = local_70 + local_70;
            puVar9[5] = local_68 + local_68;
            puVar9[6] = local_60 + local_60;
          }
          iVar6 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar6 + 1U) goto LAB_14468998e;
        }
        *(undefined8 **)(*plVar14 + (longlong)iVar6 * 8) = puVar9;
      }
    }
    if (*(longlong *)(param_1 + 0x120) == 0) {
      local_88 = FUN_14468a472;
      local_80 = 0;
      FUN_1498c7e76(&local_50,param_1);
      *(undefined8 *)(param_1 + 0x120) = local_50;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  }
  LOCK();
  plVar14 = plVar3 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14468979f:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
LAB_1446897b4:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144689ac2 FUN_144689ac2 body=344 status=ok
// SIG undefined FUN_144689ac2(void)

void FUN_144689ac2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  if (param_2 == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  uVar4 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar4) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    uVar5 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + uVar5 * 8);
      if (((((*(int *)((longlong)puVar3 + 0xc) != 0) &&
            (uVar1 = *(uint *)(puVar3 + 1), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)puVar3 + 0xc))))) &&
         (((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0 &&
          ((*plVar8 != 0 && (*(longlong *)(*plVar8 + 0x20) == param_2)))))) {
        if (uVar4 - 1 != (int)uVar5) {
          iVar6 = (uVar4 - 1) - (int)uVar5;
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + (longlong)(int)(uVar4 - iVar7) * 8),
                  (longlong)iVar7 << 3);
          uVar4 = *(uint *)(param_1 + 0x28);
        }
        *(uint *)(param_1 + 0x28) = uVar4 - 1;
        FUN_1498d127a((longlong *)(param_1 + 0x20));
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        if ((*(int *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x120) != 0)) {
          FUN_14480f766(&DAT_14c867438);
          *(undefined8 *)(param_1 + 0x120) = 0;
          *(undefined1 *)(param_1 + 0x118) = 0;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000144689b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 144689c1a FUN_144689c1a body=585 status=ok
// SIG undefined FUN_144689c1a(void)

undefined8 * FUN_144689c1a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong local_d8;
  LPCRITICAL_SECTION local_d0;
  LPCRITICAL_SECTION local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a4;
  int *local_a0;
  undefined1 *local_98;
  undefined1 local_8c [4];
  undefined1 local_88 [16];
  longlong local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar3 = FUN_1498c7dec();
  iVar5 = *(int *)(param_1 + 0x60) + -1;
  if (iVar3 < iVar5) {
    iVar5 = iVar3;
  }
  if (*(int *)(param_1 + 0x60) < 2) {
    iVar5 = iVar3;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)(param_1 + 0x118) == '\0') {
    lVar1 = param_1 + 200;
    local_d8 = lVar1;
    local_c8 = lpCriticalSection;
    if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
      FUN_1498d1346(lVar1);
      FUN_1498d148e(lVar1);
    }
    local_c0 = param_2;
    if ((-1 < iVar5) && (local_a4 = iVar5, iVar5 < *(int *)(param_1 + 0x60))) {
      do {
        local_e8 = 1;
        local_a4 = iVar5;
        FUN_1498c72e4(local_88,param_1 + 0x58,param_1 + 0x6c,iVar5);
        local_a0 = &local_a4;
        local_98 = local_88;
        FUN_1498d0f50(local_d8,local_8c,&local_a0);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        iVar5 = local_a4 + 1;
        local_a4 = iVar5;
      } while (iVar5 < *(int *)(param_1 + 0x60));
    }
    local_d0 = (LPCRITICAL_SECTION)(param_1 + 0xa0);
    EnterCriticalSection(local_d0);
    iVar5 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar5 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      local_b0 = param_1 + 0x40;
      local_b8 = param_1 + 0x30;
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        uVar4 = FUN_1498c7a76(plVar2);
        iVar3 = *(int *)(param_1 + 0x48);
        if ((uVar4 & 1) != 0 || iVar3 == 0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_b8,param_1 + 0x50,local_d8);
        }
        if ((uVar4 & 2) != 0 && iVar3 != 0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_b0,param_1 + 0x50,local_d8);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar5 * 8 != lVar6);
    }
    *(undefined1 *)(param_1 + 0x118) = 1;
    LeaveCriticalSection(local_d0);
    lpCriticalSection = local_c8;
    param_2 = local_c0;
  }
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_1498cf060(param_2,param_1 + 200);
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144689e64 FUN_144689e64 body=1549 status=ok
// SIG undefined FUN_144689e64(void)

void FUN_144689e64(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160;
  undefined8 *local_158;
  longlong *local_148;
  LPCRITICAL_SECTION local_140;
  undefined2 *local_138;
  int local_130;
  undefined2 *local_128;
  undefined8 uStack_120;
  longlong local_110;
  int local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  iVar16 = *(int *)(param_1 + 0x10);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if (((0 < iVar16) && (*DAT_14cc31580 == '\x01')) && (DAT_14cb0d2b0 != 0)) {
    local_140 = (LPCRITICAL_SECTION)(param_1 + 0x60);
    EnterCriticalSection(local_140);
    iVar8 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_148 = (longlong *)(param_1 + 0xb0);
    puVar1 = (undefined1 *)(param_1 + 0xc0);
    local_d8 = (undefined2 *)0x100000000;
    local_c8 = 0xffffffff;
    uStack_c0 = 0;
    iVar16 = 0;
    puStack_d0 = puVar1;
    if (*(int *)(param_1 + 0xd8) != 0) {
      FUN_1449c0562(&local_d8);
      iVar16 = *(int *)(param_1 + 0xd8);
    }
    local_e8 = local_c8;
    uVar5 = local_e8;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    local_f8 = local_d8;
    puStack_f0 = puStack_d0;
    local_100 = local_148;
    local_e8._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
    if ((local_e8._4_4_ != iVar16) || (puStack_d0 != puVar1)) {
      iVar8 = 0;
      iVar6 = local_e8._4_4_;
      local_e8 = uVar5;
      do {
        lVar4 = *local_100;
        lVar15 = (longlong)iVar6 * 0x50;
        lVar2 = lVar4 + lVar15;
        FUN_1447cbafe(&local_b8,&local_d8,lVar2,0);
        iVar6 = *(int *)(lVar4 + 0x2c + lVar15);
        iVar7 = 0;
        if (0 < iVar6) {
          iVar3 = *(int *)(lVar2 + 0x28);
          uVar12 = 0;
          iVar13 = 0;
          iVar7 = 0;
          do {
            iVar17 = (int)uVar12;
            if (0 < iVar3) {
              iVar10 = iVar3;
              lVar14 = *(longlong *)(lVar2 + 0x18);
              if (*(longlong *)(lVar2 + 0x18) == 0) {
                lVar14 = lVar4 + lVar15 + 8;
              }
              do {
                iVar7 = iVar7 + (uint)((*(uint *)(lVar14 + (uVar12 >> 5) * 4) >>
                                        ((uint)uVar12 & 0x1f) & 1) != 0);
                uVar12 = (ulonglong)((uint)uVar12 + 1);
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            iVar13 = iVar13 + 1;
            uVar12 = (ulonglong)(uint)(iVar17 + iVar3);
          } while (iVar13 != iVar6);
        }
        iVar8 = iVar8 + iVar7;
        local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
        FUN_1449c0562(&local_f8);
        iVar6 = local_e8._4_4_;
        uVar5 = local_e8;
      } while (local_100 != local_148 || (puStack_f0 != puVar1 || local_e8._4_4_ != iVar16));
    }
    local_e8 = uVar5;
    if (local_84 < (int)uStack_b0) {
      puStack_d0 = local_a8;
      local_d8 = (undefined2 *)0x100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = 0;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
      }
      local_e8._0_4_ = (uint)local_c8;
      local_e8._4_4_ = local_c8._4_4_;
      uStack_e0 = uStack_c0;
      uStack_dc = uStack_bc;
      local_f8 = local_d8;
      puStack_f0 = puStack_d0;
      local_100 = &local_b8;
      local_d8 = (undefined2 *)0x0;
      puStack_d0 = (undefined1 *)0x0;
      FUN_144a83b10(&local_d8,*(undefined4 *)(local_b8 + (longlong)local_c8._4_4_ * 0xc));
      local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
      FUN_1449c0562(&local_f8);
      if (local_e8._4_4_ < *(int *)(puStack_f0 + 0x18)) {
        do {
          local_128 = (undefined2 *)0x0;
          uStack_120 = 0;
          FUN_144a83b10(&local_128,*(undefined4 *)(*local_100 + (longlong)local_e8._4_4_ * 0xc));
          FUN_140056680(&local_138,&DAT_149e19f34);
          FUN_1401c7f3e(&local_110,&local_138,&local_128);
          iVar16 = local_108 + -1;
          if (local_108 == 0) {
            iVar16 = 0;
          }
          FUN_1400020e8(&local_d8,local_110,iVar16);
          if (local_110 != 0) {
            FUN_1400020a8();
          }
          if (local_138 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_128 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
          FUN_1449c0562(&local_f8);
        } while (local_e8._4_4_ < *(int *)(puStack_f0 + 0x18));
      }
      lVar2 = DAT_14cb0d2b0;
      puVar9 = &DAT_149dfb77a;
      if ((int)puStack_d0 != 0) {
        puVar9 = local_d8;
      }
      FUN_1400021e4(param_1 + 0x38,&local_138);
      puVar11 = &DAT_149dfb77a;
      if (local_130 != 0) {
        puVar11 = local_138;
      }
      FUN_140002266(&local_128,L"%s Mip Level(s): [%s]",puVar11,puVar9);
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_120 != 0) {
        puVar9 = local_128;
      }
      FUN_140056680(&local_110,puVar9);
      local_158 = &DAT_14c846320;
      local_160 = 1;
      local_168 = &local_110;
      FUN_147d8078a(lVar2,0xffffffff,0,0xffffff00);
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar2 = DAT_14cb0d2b0;
      FUN_1400021e4(param_1 + 0x38,&local_138);
      puVar9 = &DAT_149dfb77a;
      if (local_130 != 0) {
        puVar9 = local_138;
      }
      FUN_140002266(&local_128,L"%s Num Tile(s): %d",puVar9,iVar8);
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_120 != 0) {
        puVar9 = local_128;
      }
      FUN_140056680(&local_110,puVar9);
      local_158 = &DAT_14c846320;
      local_160 = 1;
      local_168 = &local_110;
      FUN_147d8078a(lVar2,0xffffffff,0,0xffffff00);
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_b8);
    LeaveCriticalSection(local_140);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14468a472 FUN_14468a472 body=145 status=ok
// SIG undefined FUN_14468a472(void)

void FUN_14468a472(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  *(undefined1 *)(param_1 + 0x118) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0x28);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (0 < iVar1) {
    plVar2 = (longlong *)FUN_1498c7f3c();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
    if (*plVar2 != 0) {
      FUN_1498c7fb0(param_1 + 0x30,*plVar2 + 0x28);
      FUN_1498c7fb0(param_1 + 0x40,*plVar2 + 0x38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014468a4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 14468a503 FUN_14468a503 body=59 status=ok
// SIG undefined FUN_14468a503(void)

void FUN_14468a503(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cc31618;
  if (DAT_14cc31618 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cc31618 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014468a533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14468a53e FUN_14468a53e body=69 status=ok
// SIG undefined FUN_14468a53e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14468a53e(void)

{
  _DAT_14cc31628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014468a580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc31630,1);
  return;
}



// FUNCTION 14468a583 FUN_14468a583 body=69 status=ok
// SIG undefined FUN_14468a583(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14468a583(void)

{
  _DAT_14cc31640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014468a5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc31648,1);
  return;
}



// FUNCTION 14468a5c8 FUN_14468a5c8 body=3069 status=ok
// SIG undefined FUN_14468a5c8(void)

void FUN_14468a5c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  longlong *plVar10;
  size_t sVar11;
  longlong lVar12;
  wchar_t **ppwVar13;
  undefined8 *puVar14;
  wchar_t *pwVar15;
  wchar_t ***pppwVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_558 [32];
  undefined4 local_538;
  undefined4 local_530;
  longlong *local_528;
  longlong local_520;
  longlong local_518;
  longlong *local_510;
  longlong *local_508;
  longlong local_500;
  double local_4f8;
  double local_4f0;
  undefined1 *local_4e8;
  undefined1 *local_4e0;
  float *local_4d8;
  float *local_4d0;
  longlong *local_4c8;
  longlong local_4c0;
  wchar_t *local_4b8;
  int local_4b0;
  double local_490;
  ulonglong local_388;
  longlong lStack_380;
  float local_378 [2];
  longlong local_370;
  undefined4 uStack_368;
  int iStack_364;
  undefined1 local_360 [16];
  longlong local_350;
  undefined4 local_348;
  uint local_344;
  undefined4 uStack_340;
  undefined4 local_33c;
  longlong local_330;
  undefined4 local_328;
  undefined8 local_318 [16];
  wchar_t *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  wchar_t **local_268 [16];
  undefined8 local_1e8 [16];
  ulonglong local_168;
  longlong lStack_160;
  float local_158;
  undefined1 local_154;
  longlong local_150;
  undefined4 uStack_148;
  int iStack_144;
  undefined1 auStack_140 [16];
  longlong local_130;
  undefined4 local_128;
  uint local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  longlong local_110;
  undefined4 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_500 = (longlong)*(int *)(param_2 + 0x10);
  local_520 = param_1;
  if (local_500 != 0) {
    local_4c0 = *(longlong *)(param_2 + 8);
    local_518 = param_2 + 0x120;
    local_528 = &local_150;
    pfVar19 = &local_158;
    local_4d0 = local_378;
    local_4c8 = &local_370;
    local_510 = (longlong *)(param_1 + 0x38);
    local_4e8 = local_360;
    local_508 = (longlong *)(param_1 + 0x28);
    local_4e0 = auStack_140;
    local_500 = local_500 << 3;
    lVar18 = 0;
    local_4d8 = pfVar19;
    do {
      lVar1 = *(longlong *)(local_4c0 + lVar18);
      if (lVar1 != 0) {
        if (*DAT_14cc31650 == '\x01') {
          FUN_1400b22c2(&local_298,"_icvfx_");
          pwVar15 = local_298;
          if ((int)uStack_290 == 0) {
            pwVar15 = L"";
          }
          if (pwVar15 == (wchar_t *)0x0) {
            bVar20 = true;
          }
          else {
            sVar11 = wcslen(pwVar15);
            local_530 = 0xffffffff;
            local_538 = 0;
            iVar9 = FUN_1447ee042(local_518,pwVar15,sVar11 & 0xffffffff,1);
            if (iVar9 == -1) {
              bVar20 = true;
            }
            else {
              FUN_1400b22c2(&local_4b8,"_incamera");
              pwVar15 = local_4b8;
              if (local_4b0 == 0) {
                pwVar15 = L"";
              }
              if (pwVar15 == (wchar_t *)0x0) {
                bVar20 = false;
              }
              else {
                sVar11 = wcslen(pwVar15);
                local_530 = 0xffffffff;
                local_538 = 0;
                iVar9 = FUN_1447ee042(local_518,pwVar15,sVar11 & 0xffffffff,1);
                bVar20 = iVar9 != -1;
              }
              if (local_4b8 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              bVar20 = (bool)(bVar20 ^ 1);
            }
          }
          if (local_298 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (bVar20) goto LAB_14468ad75;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cc31660) &&
           (FUN_144b3d300(&DAT_14cc31660), DAT_14cc31660 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar10 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))
                              (DAT_14c8407a8,L"r.ViewTextureMipBias.Offset",1);
          if (plVar10 == (longlong *)0x0) {
            DAT_14cc31658 = (float *)0x0;
          }
          else {
            DAT_14cc31658 = (float *)(**(code **)(*plVar10 + 0x70))(plVar10);
          }
          _Init_thread_footer(&DAT_14cc31660);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cc31670) &&
           (FUN_144b3d300(&DAT_14cc31670), DAT_14cc31670 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar10 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ViewTextureMipBias.Min",1)
          ;
          if (plVar10 == (longlong *)0x0) {
            DAT_14cc31668 = (float *)0x0;
          }
          else {
            DAT_14cc31668 = (float *)(**(code **)(*plVar10 + 0x70))(plVar10);
          }
          _Init_thread_footer(&DAT_14cc31670);
        }
        fVar21 = *DAT_14cc31638;
        fVar22 = *(float *)(param_2 + 0x110);
        plVar10 = *(longlong **)(param_2 + 0x180);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 8))(plVar10,&local_298);
          ppwVar13 = local_268[2];
          if (local_268[2] == (wchar_t **)0x0) {
            ppwVar13 = &local_298;
          }
          fVar22 = fVar22 * *(float *)((longlong)ppwVar13 + (longlong)DAT_14cad82fc * 4);
          if (local_268[2] != (wchar_t **)0x0) {
            FUN_1400020a8();
          }
        }
        local_130 = 0;
        local_128 = 0;
        *local_528 = 0;
        local_528[1] = 0;
        local_124 = 0x80;
        uStack_120 = 0xffffffff;
        local_11c = 0;
        local_110 = 0;
        local_108 = 0;
        local_298 = *(wchar_t **)(lVar1 + 0x1048);
        uStack_290 = *(undefined8 *)(lVar1 + 0x1050);
        local_288 = *(undefined8 *)(lVar1 + 0x1058);
        local_280 = *(undefined8 *)(lVar1 + 0x9c0);
        local_278 = *(undefined8 *)(lVar1 + 0x9e0);
        local_270 = *(undefined8 *)(lVar1 + 0xa00);
        puVar14 = (undefined8 *)(lVar1 + 0xab0);
        pppwVar16 = local_268;
        for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pppwVar16 = (wchar_t **)*puVar14;
          puVar14 = puVar14 + 1;
          pppwVar16 = pppwVar16 + 1;
        }
        fVar4 = (float)*(int *)(lVar1 + 0x4ec) * fVar22;
        fVar5 = (float)*(int *)(lVar1 + 0x4e8) * fVar22;
        fVar6 = (float)*(int *)(lVar1 + 0x4f4) * fVar22;
        fVar7 = (float)*(int *)(lVar1 + 0x4f0) * fVar22;
        local_168 = ((longlong)ROUND(fVar4 + fVar4 + -0.5) & 0x1fffffffeU) << 0x1f |
                    (ulonglong)(longlong)ROUND(fVar5 + fVar5 + -0.5) >> 1 & 0xffffffff;
        lStack_160 = (ulonglong)
                     (uint)-(int)((ulonglong)(longlong)ROUND(-0.5 - (fVar7 + fVar7)) >> 1) +
                     ((longlong)ROUND(-0.5 - (fVar6 + fVar6)) & 0x1fffffffeU) * -0x80000000;
        if (1e-08 < ABS(fVar21 + -1.0)) {
          puVar14 = (undefined8 *)(lVar1 + 0x830);
          ppwVar13 = &local_4b8;
          for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
            *ppwVar13 = (wchar_t *)*puVar14;
            puVar14 = puVar14 + 1;
            ppwVar13 = ppwVar13 + 1;
          }
          local_4f8 = atan(1.0 / (double)local_4b8);
          local_4f0 = atan(1.0 / local_490);
          dVar3 = (double)fVar21;
          dVar2 = tan(local_4f8 * dVar3);
          local_4b8 = (wchar_t *)(1.0 / dVar2);
          local_490 = tan(local_4f0 * dVar3);
          local_490 = 1.0 / local_490;
          puVar14 = local_318;
          FUN_1447fea8d(puVar14,lVar1 + 0x9b0,&local_4b8);
          lVar12 = 0x10;
          puVar17 = local_1e8;
        }
        else {
          lVar12 = 0x10;
          puVar14 = (undefined8 *)(lVar1 + 0xab0);
          puVar17 = local_1e8;
        }
        for (; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar17 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar17 = puVar17 + 1;
        }
        local_154 = *(int *)(lVar1 + 0x1ef4) == -1;
        lVar12 = lVar1 + 0x1ee8;
        if ((bool)local_154) {
          lVar12 = lVar1 + 0x1e98;
        }
        FUN_144899d7a(local_528,lVar12);
        if (*(int *)(lVar1 + 0x3024) == 1) {
          fVar21 = logf((float)((int)lStack_160 - (int)local_168) /
                        ((float)(*(int *)(lVar1 + 0x4e0) - *(int *)(lVar1 + 0x4d8)) *
                        *(float *)(param_2 + 0x110)));
          fVar21 = fVar21 * -1.442695;
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          local_158 = *DAT_14cc31658 - fVar21;
          if (*DAT_14cc31658 - fVar21 <= *DAT_14cc31668) {
            local_158 = *DAT_14cc31668;
          }
          iVar9 = _isnan((double)local_158);
          if ((iVar9 != 0) || (iVar9 = _finite((double)local_158), iVar9 == 0)) goto LAB_14468ad89;
        }
        else {
LAB_14468ad89:
          local_158 = 0.0;
        }
        if (1e-08 < ABS(fVar22 - *(float *)(param_2 + 0x110))) {
          memcpy(&local_4b8,&local_298,0x130);
          plVar10 = local_4c8;
          pfVar8 = local_4d0;
          local_388 = local_168;
          lStack_380 = lStack_160;
          *(undefined1 *)(local_4d0 + 1) = *(undefined1 *)(pfVar19 + 1);
          *local_4d0 = *pfVar19;
          local_350 = 0;
          local_348 = 0;
          *local_4c8 = 0;
          local_4c8[1] = 0;
          local_344 = 0x80;
          uStack_340 = 0xffffffff;
          local_33c = 0;
          local_330 = 0;
          local_328 = 0;
          FUN_144899d7a(local_4c8,local_528);
          local_378[0] = 0.0;
          fVar21 = (float)(*(int *)(lVar1 + 0x4f4) - *(int *)(lVar1 + 0x4ec)) *
                   *(float *)(param_2 + 0x110);
          fVar22 = (float)(*(int *)(lVar1 + 0x4f0) - *(int *)(lVar1 + 0x4e8)) *
                   *(float *)(param_2 + 0x110);
          lStack_380 = CONCAT44(-((int)ROUND(-0.5 - (fVar21 + fVar21)) >> 1),
                                -((int)ROUND(-0.5 - (fVar22 + fVar22)) >> 1));
          local_388 = 0;
          iVar9 = *(int *)(local_520 + 0x40);
          *(uint *)(local_520 + 0x40) = iVar9 + 1U;
          if (*(uint *)(local_520 + 0x44) < iVar9 + 1U) {
            FUN_146770b08(local_510,iVar9);
          }
          lVar1 = *local_510;
          memcpy((void *)(lVar1 + (longlong)iVar9 * 0x1a0),&local_4b8,0x130);
          lVar1 = lVar1 + (longlong)iVar9 * 0x1a0;
          *(ulonglong *)(lVar1 + 0x130) = local_388;
          *(longlong *)(lVar1 + 0x138) = lStack_380;
          *(undefined1 *)(lVar1 + 0x144) = *(undefined1 *)(pfVar8 + 1);
          *(float *)(lVar1 + 0x140) = *pfVar8;
          FUN_14018a936(lVar1 + 0x148,plVar10);
          local_328 = 0;
          if (local_330 != 0) {
            FUN_1400020a8();
          }
          pfVar19 = local_4d8;
          uStack_368 = 0;
          if (iStack_364 != 0) {
            FUN_1447a08a2(plVar10,0);
          }
          uStack_340 = 0xffffffff;
          local_33c = 0;
          local_348 = 0;
          if (0x80 < local_344) {
            local_344 = 0x80;
            FUN_1446efbd8(local_4e8,0);
          }
          if (local_350 != 0) {
            FUN_1400020a8();
          }
          if (local_370 != 0) {
            FUN_1400020a8();
          }
        }
        iVar9 = *(int *)(local_520 + 0x30);
        *(uint *)(local_520 + 0x30) = iVar9 + 1U;
        if (*(uint *)(local_520 + 0x34) < iVar9 + 1U) {
          FUN_146770b08(local_508,iVar9);
        }
        lVar1 = *local_508;
        memcpy((void *)(lVar1 + (longlong)iVar9 * 0x1a0),&local_298,0x130);
        lVar1 = lVar1 + (longlong)iVar9 * 0x1a0;
        *(ulonglong *)(lVar1 + 0x130) = local_168;
        *(longlong *)(lVar1 + 0x138) = lStack_160;
        *(undefined1 *)(lVar1 + 0x144) = *(undefined1 *)(pfVar19 + 1);
        *(float *)(lVar1 + 0x140) = *pfVar19;
        FUN_14018a936(lVar1 + 0x148,local_528);
        local_108 = 0;
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        uStack_148 = 0;
        if (iStack_144 != 0) {
          FUN_1447a08a2(local_528,0);
        }
        uStack_120 = 0xffffffff;
        local_11c = 0;
        local_128 = 0;
        if (0x80 < local_124) {
          local_124 = 0x80;
          FUN_1446efbd8(local_4e0,0);
        }
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        if (local_150 != 0) {
          FUN_1400020a8();
        }
      }
LAB_14468ad75:
      lVar18 = lVar18 + 8;
    } while (local_500 != lVar18);
  }
  if ((local_f0 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14468b1c6 FUN_14468b1c6 body=69 status=ok
// SIG undefined FUN_14468b1c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14468b1c6(void)

{
  _DAT_14cc31678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014468b208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc31680,1);
  return;
}



// FUNCTION 14468b20c FUN_14468b20c body=738 status=ok
// SIG undefined FUN_14468b20c(void)

undefined8 *
FUN_14468b20c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bef0890;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_1498c9a82(param_1 + 8,1);
  local_60 = "ImageWrapper";
  local_58 = 0xc;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
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
  uVar3 = FUN_1402c9134(&DAT_14c874628,uVar2,&local_60,1);
  param_1[0x15] = uVar3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1) = param_5;
  uVar3 = DAT_14c967818;
  *(undefined8 *)((longlong)param_1 + 0xd4) = DAT_14c967818;
  *(undefined8 *)((longlong)param_1 + 0xdc) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = *param_2;
  lVar1 = param_2[1];
  param_1[0x23] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x24] = *param_3;
  lVar1 = param_3[1];
  param_1[0x25] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x26] = *param_4;
  lVar1 = param_4[1];
  param_1[0x27] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x28] = DAT_14c967818;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0x8000000000000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = *param_6;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0x50000000a;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468b4f0 FUN_14468b4f0 body=480 status=ok
// SIG undefined FUN_14468b4f0(void)

void FUN_14468b4f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14bef0890;
  iVar3 = *(int *)(param_1 + 0x33);
  if ((longlong)iVar3 != 0) {
    lVar4 = param_1[0x32];
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (*(int *)((longlong)param_1 + 0x19c) != 0) {
    FUN_1498d3de4(param_1 + 0x32);
  }
  FUN_1498c9a82(param_1 + 8,0);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (*(int *)((longlong)param_1 + 0x174) != 0) {
    FUN_14481578e(param_1 + 0x2d,0);
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x27];
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
  plVar5 = (longlong *)param_1[0x25];
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
  plVar5 = (longlong *)param_1[0x23];
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
  plVar5 = (longlong *)param_1[0x21];
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
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1417024e3(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1498c9bde(param_1 + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014468b6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14468b6d0 FUN_14468b6d0 body=175 status=ok
// SIG undefined FUN_14468b6d0(void)

undefined8 * FUN_14468b6d0(longlong param_1,uint param_2,uint param_3)

{
  if (((-1 < (int)param_3) && (-1 < (int)param_2)) && ((int)param_3 < *(int *)(param_1 + 0xb8))) {
    if ((int)param_2 < *(int *)(*(longlong *)(param_1 + 0xb0) + 8 + (ulonglong)param_3 * 0x10)) {
      return (undefined8 *)
             ((ulonglong)param_2 * 0x10 +
             *(longlong *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)param_3 * 0x10));
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc316a0) && (FUN_144b3d300(&DAT_14cc316a0), DAT_14cc316a0 == -1)) {
    FUN_140056680(&DAT_14cc31690,&DAT_149dfb77a);
    atexit((_func_5014 *)&LAB_14468b77f);
    _Init_thread_footer(&DAT_14cc316a0);
  }
  return &DAT_14cc31690;
}



// FUNCTION 14468b790 FUN_14468b790 body=1645 status=ok
// SIG undefined FUN_14468b790(void)

undefined8
FUN_14468b790(longlong param_1,char *param_2,longlong *param_3,undefined4 param_4,float param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  char cVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar14 = 1;
  if (((*(char *)(param_1 + 0xd0) != '\x01') || (*param_2 == '\x02')) || (param_2[0x18] == '\x02'))
  goto LAB_14468b8c4;
  lVar16 = *(longlong *)(param_2 + 8);
  lVar10 = *(longlong *)(param_2 + 0x20);
  cVar13 = (char)param_4;
  lVar15 = lVar10;
  lVar5 = lVar16;
  if (cVar13 == '\0') {
    lVar15 = *(longlong *)(param_1 + 0x148);
    lVar5 = lVar15;
    if (lVar16 < lVar15) {
      lVar5 = lVar16;
    }
    if (lVar5 < 1) {
      lVar5 = 0;
    }
    if (lVar10 < lVar15) {
      lVar15 = lVar10;
    }
    if (lVar15 < 1) {
      lVar15 = 0;
    }
  }
  lVar12 = *(longlong *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x28);
  lVar17 = *(longlong *)(param_1 + 0x1b0);
  lVar9 = lVar3;
  lVar19 = lVar12;
  if (param_5 < 0.0) {
    auVar24._0_8_ =
         ((double)*(int *)(param_1 + 0x154) / (double)*(int *)(param_1 + 0x150)) * 10000000.0 + 0.5;
    auVar24._8_8_ = 0;
    auVar24 = roundpd(auVar24,auVar24,1);
    lVar10 = (longlong)auVar24._0_8_ +
             (*(longlong *)(param_1 + 0x1a8) - *(longlong *)(param_1 + 0x1b8));
    if ((lVar17 < lVar12) || ((lVar17 == lVar12 && (lVar10 < lVar5)))) goto LAB_14468b8c4;
    lVar9 = lVar17;
    if ((lVar3 <= lVar17) && ((lVar3 != lVar17 || (lVar15 <= lVar10)))) goto LAB_14468b902;
  }
  else {
    lVar16 = *(longlong *)(param_1 + 0x1b8) + *(longlong *)(param_1 + 0x1a8);
    if ((lVar3 < lVar17) || ((lVar17 == lVar3 && (lVar15 <= lVar16)))) goto LAB_14468b8c4;
    lVar19 = lVar17;
    if ((lVar17 <= lVar12) && ((lVar12 != lVar17 || (lVar16 <= lVar5)))) {
LAB_14468b902:
      lVar10 = lVar15;
      lVar9 = lVar3;
      lVar16 = lVar5;
      lVar19 = lVar12;
    }
  }
  iVar8 = (int)lVar9;
  if (lVar10 < 1) {
    lVar10 = *(longlong *)(param_1 + 0x148);
    iVar8 = iVar8 + -1;
  }
  iVar20 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    iVar20 = *(int *)(*(longlong *)(param_1 + 0xb0) + 8);
  }
  auVar23._0_8_ =
       ((double)*(int *)(param_1 + 0x154) / (double)*(int *)(param_1 + 0x150)) * 10000000.0 + 0.5;
  auVar23._8_8_ = 0;
  auVar24 = roundpd(auVar23,auVar23,1);
  lVar12 = (longlong)auVar24._0_8_;
  dVar22 = (double)lVar12;
  iVar18 = (int)lVar19;
  lVar16 = lVar16 + (longlong)((double)iVar18 * (double)(longlong)((double)iVar20 * dVar22));
  lVar5 = lVar10 + -1 + (longlong)((double)iVar8 * (double)(longlong)((double)iVar20 * dVar22));
  dVar27 = (double)*(int *)(param_1 + 0x150) / (double)*(int *)(param_1 + 0x154);
  dVar28 = ((double)lVar16 / 10000000.0) * dVar27;
  lVar10 = (longlong)ROUND(dVar28 + dVar28 + -0.5) >> 1;
  dVar27 = ((double)lVar5 / 10000000.0) * dVar27;
  lVar15 = (longlong)ROUND(dVar27 + dVar27 + -0.5) >> 1;
  if (param_5 < 0.0) {
    if (lVar15 != lVar10) {
      lVar5 = lVar5 - (longlong)((double)lVar15 * dVar22);
      if (1 < lVar15 - lVar10) {
        lVar5 = lVar12;
        lVar15 = lVar10 + 1;
      }
      if (((longlong)((double)lVar10 * dVar22) + lVar12) - lVar16 < lVar5) {
        lVar10 = lVar15;
      }
    }
  }
  else if (lVar15 != lVar10) {
    lVar3 = lVar15 + -1;
    lVar17 = 0;
    if (lVar15 - lVar10 < 2) {
      lVar17 = (longlong)((double)lVar10 * dVar22) - lVar16;
      lVar3 = lVar10;
    }
    lVar10 = lVar3;
    if (lVar17 + lVar12 <= lVar5 - (longlong)((double)lVar15 * dVar22)) {
      lVar10 = lVar15;
    }
  }
  if (cVar13 == '\0') {
    iVar8 = iVar18 * iVar20;
    lVar16 = (longlong)(iVar20 + iVar8 + -1);
    if (lVar10 < lVar16) {
      lVar16 = lVar10;
    }
    if (lVar16 < iVar8) {
      lVar16 = (longlong)iVar8;
    }
    uVar4 = 0;
    uVar21 = (int)lVar16 - iVar8;
  }
  else {
    uVar4 = (undefined4)(lVar10 / (longlong)iVar20);
    lVar16 = -lVar10;
    if (-lVar10 < 0) {
      lVar16 = lVar10;
    }
    uVar11 = (uint)(lVar16 % (longlong)iVar20);
    uVar21 = (iVar20 + -1) - uVar11;
    if (-1 < lVar10) {
      uVar21 = uVar11;
    }
  }
  if ((uVar21 == 0xffffffff) || (*(uint *)(param_1 + 0x160) == uVar21)) {
    (**(code **)(**(longlong **)(param_1 + 0x100) + 0x28))();
  }
  else {
    FUN_14468c25e(param_1,uVar21,param_5,param_4);
    *(uint *)(param_1 + 0x160) = uVar21;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  local_64 = uVar21;
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    plVar6 = (longlong *)FUN_1498c95cc(*(undefined8 *)(param_1 + 0x120),param_1 + 0x158,uVar21);
  }
  else {
    plVar6 = (longlong *)FUN_1498cb066(param_1 + 0x40,&local_64);
  }
  if (plVar6 == (longlong *)0x0) {
    uVar14 = 1;
    if ((((*(char *)(param_1 + 0x1a0) == '\x01') && (*(int *)(param_1 + 0x160) != -1)) &&
        (*(int *)(param_1 + 0x170) == 0)) &&
       ((*(int *)(param_1 + 0x180) == 0 &&
        (iVar8 = *(int *)(param_1 + 0x164), *(int *)(param_1 + 0x164) = iVar8 + 1, 0 < iVar8)))) {
      *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x164) = 0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ =
         ((double)*(int *)(param_1 + 0x154) / (double)*(int *)(param_1 + 0x150)) * (double)uVar21 *
         10000000.0 + 0.5;
    auVar24 = roundpd(auVar25,auVar25,1);
    if ((cVar13 != '\0') && (*(longlong *)(param_1 + 0x1b8) != 0)) {
      *(undefined4 *)(param_1 + 0x1c0) = uVar4;
    }
    *(longlong *)(param_1 + 0x1a8) = (longlong)auVar24._0_8_;
    *(ulonglong *)(param_1 + 0x1b0) =
         (lVar19 - iVar18 & 0xffffffff00000000U) + (longlong)*(int *)(param_1 + 0x1c0);
    lVar16 = *plVar6;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar16 + 0x98));
    uVar14 = *(undefined8 *)(lVar16 + 0xe8);
    if ((LPCRITICAL_SECTION)(lVar16 + 0x98) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar16 + 0x98));
    }
    auVar26._0_8_ =
         ((double)(int)((ulonglong)uVar14 >> 0x20) / (double)(int)uVar14) * 10000000.0 + 0.5;
    auVar26._8_8_ = 0;
    auVar24 = roundpd(auVar26,auVar26,1);
    *(longlong *)(param_1 + 0x1b8) = (longlong)auVar24._0_8_;
    plVar7 = (longlong *)FUN_1498d4172();
    lVar16 = *plVar6;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar16 + 0x98));
    uVar14 = *(undefined8 *)(lVar16 + 0xd0);
    if ((LPCRITICAL_SECTION)(lVar16 + 0x98) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar16 + 0x98));
    }
    if ((*(int *)(param_1 + 0x140) != (int)uVar14) ||
       (*(int *)(param_1 + 0x144) != (int)((ulonglong)uVar14 >> 0x20))) {
      *(undefined8 *)(param_1 + 0x140) = uVar14;
    }
    local_68 = *(undefined4 *)(param_1 + 0xe4);
    local_98 = &local_78;
    local_78 = *(undefined8 *)(param_1 + 0xd4);
    uStack_70 = *(undefined8 *)(param_1 + 0xdc);
    local_a0 = *(undefined1 *)(param_1 + 0xf4);
    local_a8 = *(undefined8 *)(param_1 + 0x1b8);
    local_88 = *(undefined8 *)(param_1 + 0x1a8);
    uStack_80 = *(undefined8 *)(param_1 + 0x1b0);
    FUN_1498ca080(plVar7 + 2,*plVar6);
    if (plVar7 == (longlong *)0x0) {
      *param_3 = 0x10;
      plVar6 = (longlong *)param_3[1];
      if (plVar6 != (longlong *)0x0) {
        param_3[1] = 0;
LAB_14468bd8e:
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
        if (plVar7 != (longlong *)0x0) goto LAB_14468bdd1;
      }
      uVar14 = 0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *param_3 = (longlong)(plVar7 + 2);
      plVar6 = (longlong *)param_3[1];
      if (plVar7 == plVar6) {
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
      else {
        param_3[1] = (longlong)plVar7;
        if (plVar6 != (longlong *)0x0) goto LAB_14468bd8e;
      }
LAB_14468bdd1:
      uVar14 = 0;
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
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
LAB_14468b8c4:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468bdfe FUN_14468bdfe body=1119 status=ok
// SIG undefined FUN_14468bdfe(void)

undefined8 FUN_14468bdfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined4 local_11c;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *plStack_100;
  void *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  iVar7 = *(int *)(param_1 + 0x170);
  uVar8 = 0;
  if ((longlong)iVar7 == 0) goto LAB_14468be42;
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x168) + -4 + (longlong)iVar7 * 4);
  *(int *)(param_1 + 0x170) = iVar7 + -1;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1498ca384(param_1,&local_98);
  if ((int)uStack_90 == local_64) {
    FUN_1498ca4f0(param_1,uVar3);
    uVar8 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    if ((*(longlong *)(param_1 + 0x130) != 0) &&
       (((1 < *(int *)(param_1 + 0xf4) || (1 < *(int *)(param_1 + 0xd4))) ||
        (1 < *(int *)(param_1 + 0xd8))))) {
      uVar6 = FUN_1498c7dec();
    }
    LOCK();
    *(undefined4 *)(param_1 + 0xf8) = uVar6;
    UNLOCK();
    if (((-1 < *(int *)(param_1 + 0xf8)) && (*(int *)(param_1 + 0xf4) < 2)) &&
       ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc316a4 && (FUN_144b3d300(&DAT_14cc316a4), DAT_14cc316a4 == -1)))) {
      puVar9 = (undefined8 *)FUN_14468b6d0(param_1,0,0);
      local_f8 = (void *)0x0;
      iVar7 = *(int *)(puVar9 + 1);
      _Src = (void *)*puVar9;
      local_f0 = (longlong *)CONCAT44(local_f0._4_4_,iVar7);
      if ((longlong)iVar7 != 0) {
        FUN_1446dd670(&local_f8,iVar7,0);
        memcpy(local_f8,_Src,(longlong)iVar7 * 2);
        if (local_f8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      _Init_thread_footer(&DAT_14cc316a4);
    }
    iVar7 = *(int *)(param_1 + 0x198);
    if ((longlong)iVar7 < 1) {
      uVar8 = FUN_14001cc68(0x98,0x10);
      local_f8 = *(void **)(param_1 + 0x100);
      local_f0 = *(longlong **)(param_1 + 0x108);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x10);
      if (plVar10 == (longlong *)0x0) {
        local_108 = 0;
        plStack_100 = (longlong *)0x0;
        FUN_1498ca73e(uVar8,&local_108,&local_f8);
      }
      else {
        iVar7 = (int)plVar10[1];
        local_108 = 0;
        do {
          if (iVar7 == 0) {
            plVar10 = (longlong *)0x0;
            goto LAB_14468bffe;
          }
          LOCK();
          iVar4 = (int)plVar10[1];
          bVar11 = iVar7 == iVar4;
          if (bVar11) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar11);
        local_108 = *(undefined8 *)(param_1 + 8);
LAB_14468bffe:
        plStack_100 = plVar10;
        FUN_1498ca73e(uVar8,&local_108,&local_f8);
        if (plVar10 != (longlong *)0x0) {
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
      }
      plVar10 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f0)(local_f0);
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
    else {
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 400) + -8 + (longlong)iVar7 * 8);
      *(int *)(param_1 + 0x198) = iVar7 + -1;
      FUN_1498d460c(param_1 + 400);
    }
    local_f8 = (void *)CONCAT44(local_f8._4_4_,uVar3);
    if (*(char *)(param_1 + 0x1a0) == '\x01') {
      puVar9 = (undefined8 *)FUN_1498c95cc(*(undefined8 *)(param_1 + 0x120),param_1 + 0x158,uVar3);
    }
    else {
      puVar9 = (undefined8 *)FUN_1498cb066(param_1 + 0x40,&local_f8);
    }
    if (puVar9 == (undefined8 *)0x0) {
      local_118 = 0;
LAB_14468c0ac:
      local_110 = (longlong *)0x0;
      local_11c = (undefined4)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
    }
    else {
      local_118 = *puVar9;
      local_110 = (longlong *)puVar9[1];
      if (local_110 == (longlong *)0x0) goto LAB_14468c0ac;
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_110 + 1) = (int)local_110[1] + 1;
      UNLOCK();
      local_11c = 0;
    }
    plVar10 = local_110;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_1498cf060(&local_e8,&local_98);
    local_128 = &local_118;
    FUN_1498ca7bc(uVar8,*(undefined4 *)(param_1 + 0x188),uVar3,&local_e8);
    iVar7 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar7 + 1;
    iVar4 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar4 + 1U) {
      FUN_1498d46a8((longlong *)(param_1 + 0x178),iVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x178);
    *(undefined4 *)(lVar5 + (longlong)iVar4 * 8) = uVar3;
    *(int *)(lVar5 + 4 + (longlong)iVar4 * 8) = iVar7;
    if ((char)local_11c == '\0') {
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
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_145a36c6e(&local_98);
LAB_14468be42:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14468c25e FUN_14468c25e body=1891 status=ok
// SIG undefined FUN_14468c25e(void)

void FUN_14468c25e(longlong param_1,uint param_2,float param_3,undefined1 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  byte bVar12;
  ulonglong uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_128 [36];
  uint local_104;
  LPCRITICAL_SECTION local_100;
  ulonglong local_f8;
  longlong local_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_100 = (LPCRITICAL_SECTION)CONCAT71(local_100._1_7_,param_4);
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_104 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x100) + 0x28))();
  if (*(int *)(param_1 + 0xb8) < 1) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(uint *)(*(longlong *)(param_1 + 0xb0) + 8);
  }
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  iVar22 = *(int *)(param_1 + 0xf0);
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar22);
  }
  if (iVar22 != 0) {
    FUN_14481578e(&local_e8);
  }
  iVar22 = 0;
  uVar16 = -(uint)(param_3 < 0.0) | 1;
  uVar21 = local_104 - uVar16;
  uVar17 = local_104;
  if (0 < *(int *)(param_1 + 0x1d8)) {
    if (0 < *(int *)(param_1 + 0xb8)) {
      iVar22 = *(int *)(*(longlong *)(param_1 + 0xb0) + 8);
    }
    bVar12 = (byte)*(int *)(param_1 + 0x1d8);
    uVar6 = -1 << (bVar12 & 0x1f);
    uVar19 = (uVar6 & local_104) + ~uVar6;
    uVar17 = iVar22 - 1;
    if ((int)uVar19 < iVar22) {
      uVar17 = uVar19;
    }
    if (*(int *)(param_1 + 0xb8) < 1) {
      iVar22 = 0;
    }
    else {
      iVar22 = *(int *)(*(longlong *)(param_1 + 0xb0) + 8);
    }
    uVar6 = (uVar6 & uVar21) + ~uVar6;
    uVar21 = iVar22 - 1;
    if ((int)uVar6 < iVar22) {
      uVar21 = uVar6;
    }
    uVar16 = uVar16 << (bVar12 & 0x1f);
  }
  if ((int)uStack_e0 < *(int *)(param_1 + 0xf0)) {
    iVar22 = *(int *)(param_1 + 0xe8);
    iVar14 = *(int *)(param_1 + 0xec);
    uVar13 = (ulonglong)local_100 & 0xff ^ 1;
    local_f8 = CONCAT71(local_f8._1_7_,(char)uVar13);
    iVar23 = (int)uStack_e0;
    do {
      if (iVar14 < 1 && iVar22 < 1) break;
      if (0 < iVar22) {
        if ((int)uVar17 < 0) {
          if ((char)local_100 != '\0') {
            if (*(int *)(param_1 + 0xb8) < 1) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(*(longlong *)(param_1 + 0xb0) + 8);
            }
            uVar6 = -1 << ((byte)*(undefined4 *)(param_1 + 0x1d8) & 0x1f);
            uVar6 = ~uVar6 + (uVar17 + uVar20 & uVar6);
            uVar17 = iVar7 - 1;
            if ((int)uVar6 < iVar7) {
              uVar17 = uVar6;
            }
            goto LAB_14468c459;
          }
LAB_14468c40e:
          iVar22 = 0;
        }
        else {
          if ((int)uVar17 < (int)uVar20 || (char)uVar13 != '\0') {
            if ((int)uVar20 <= (int)uVar17) goto LAB_14468c40e;
          }
          else {
            if (*(int *)(param_1 + 0xb8) < 1) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(*(longlong *)(param_1 + 0xb0) + 8);
            }
            uVar6 = -1 << ((byte)*(undefined4 *)(param_1 + 0x1d8) & 0x1f);
            uVar6 = ~uVar6 + (uVar17 - uVar20 & uVar6);
            uVar17 = iVar7 - 1;
            if ((int)uVar6 < iVar7) {
              uVar17 = uVar6;
            }
          }
LAB_14468c459:
          uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar23 + 1U);
          if (uStack_e0._4_4_ < iVar23 + 1U) {
            FUN_1446f48e2(&local_e8);
            uVar13 = local_f8 & 0xff;
          }
          local_e8[iVar23] = uVar17;
        }
        uVar17 = uVar17 + uVar16;
        iVar22 = iVar22 + -1;
      }
      if (0 < iVar14) {
        if ((int)uVar21 < 0) {
          if ((char)local_100 != '\0') {
            if (*(int *)(param_1 + 0xb8) < 1) {
              iVar23 = 0;
            }
            else {
              iVar23 = *(int *)(*(longlong *)(param_1 + 0xb0) + 8);
            }
            uVar6 = -1 << ((byte)*(undefined4 *)(param_1 + 0x1d8) & 0x1f);
            uVar6 = ~uVar6 + (uVar21 + uVar20 & uVar6);
            uVar21 = iVar23 - 1;
            if ((int)uVar6 < iVar23) {
              uVar21 = uVar6;
            }
            goto LAB_14468c529;
          }
LAB_14468c4da:
          iVar14 = 0;
        }
        else {
          if ((int)uVar21 < (int)uVar20 || (char)uVar13 != '\0') {
            if ((int)uVar20 <= (int)uVar21) goto LAB_14468c4da;
          }
          else {
            if (*(int *)(param_1 + 0xb8) < 1) {
              iVar23 = 0;
            }
            else {
              iVar23 = *(int *)(*(longlong *)(param_1 + 0xb0) + 8);
            }
            uVar6 = -1 << ((byte)*(undefined4 *)(param_1 + 0x1d8) & 0x1f);
            uVar6 = ~uVar6 + (uVar21 - uVar20 & uVar6);
            uVar21 = iVar23 - 1;
            if ((int)uVar6 < iVar23) {
              uVar21 = uVar6;
            }
          }
LAB_14468c529:
          lVar24 = (longlong)(int)uStack_e0;
          uVar6 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
          if (uStack_e0._4_4_ < uVar6) {
            FUN_1446f48e2(&local_e8);
            uVar13 = local_f8 & 0xff;
          }
          local_e8[lVar24] = uVar21;
        }
        uVar21 = uVar21 - uVar16;
        iVar14 = iVar14 + -1;
      }
      iVar23 = (int)uStack_e0;
    } while ((int)uStack_e0 < *(int *)(param_1 + 0xf0));
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  if (0 < (longlong)*(int *)(param_1 + 0x180)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x180);
    do {
      lVar24 = *(longlong *)(param_1 + 0x178);
      iVar22 = *(int *)(lVar24 + -8 + uVar13 * 8);
      if ((longlong)(int)uStack_e0 != 0) {
        lVar18 = 0;
        do {
          if (*(int *)((longlong)local_e8 + lVar18) == iVar22) goto LAB_14468c654;
          lVar18 = lVar18 + 4;
        } while ((longlong)(int)uStack_e0 * 4 != lVar18);
      }
      uVar17 = *(uint *)(param_1 + 0x180);
      if (uVar13 != uVar17) {
        iVar14 = uVar17 - (int)uVar13;
        if (0 < iVar14) {
          iVar14 = 1;
        }
        memmove((void *)(lVar24 + uVar13 * 8 + -8),
                (void *)(lVar24 + (longlong)(int)(uVar17 - iVar14) * 8),(longlong)iVar14 << 3);
        uVar17 = *(uint *)(param_1 + 0x180);
      }
      *(uint *)(param_1 + 0x180) = uVar17 - 1;
      FUN_1498d498c((longlong *)(param_1 + 0x178));
      (**(code **)(**(longlong **)(param_1 + 0x100) + 0x10))(*(longlong **)(param_1 + 0x100),iVar22)
      ;
      if ((*(char *)(param_1 + 0x1d2) == '\x01') &&
         (iVar22 = *(int *)(param_1 + 0x1d4), *(int *)(param_1 + 0x1d4) = iVar22 + 1,
         *(int *)(param_1 + 0x1dc) <= iVar22)) {
        *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
        *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1e0);
      }
LAB_14468c654:
      bVar25 = 1 < (longlong)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar25);
  }
  plVar1 = (longlong *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_14481578e(plVar1,0);
  }
  lVar24 = DAT_14cc31688;
  iVar22 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_100 = lpCriticalSection;
  if (((iVar22 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar22 == 2)) {
    uVar13 = 0;
  }
  else if (iVar22 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar13 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar13 = 1;
  }
  if ((longlong)(int)uStack_e0 != 0) {
    puVar2 = local_e8 + (int)uStack_e0;
    iVar22 = *(int *)(lVar24 + uVar13 * 4);
    local_f8 = param_1 + 0x40;
    local_f0 = param_1 + 0x158;
    puVar15 = local_e8;
    do {
      uVar17 = *puVar15;
      local_d8 = CONCAT44(local_d8._4_4_,uVar17);
      if (*(char *)(param_1 + 0x1a0) == '\x01') {
        plVar10 = (longlong *)FUN_1498c95cc(*(undefined8 *)(param_1 + 0x120),local_f0,uVar17);
      }
      else {
        plVar10 = (longlong *)FUN_1498cb066(local_f8);
      }
      if ((plVar10 == (longlong *)0x0) || (*plVar10 == 0)) {
LAB_14468c82e:
        if ((longlong)*(int *)(param_1 + 0x180) != 0) {
          lVar24 = 0;
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x178) + lVar24) == uVar17) goto LAB_14468c898;
            lVar24 = lVar24 + 8;
          } while ((longlong)*(int *)(param_1 + 0x180) * 8 != lVar24);
        }
        if (*(uint *)(**(longlong **)(param_1 + 0xb0) + 8 + (longlong)(int)uVar17 * 0x10) < 2) {
          FUN_1498ca4f0(param_1,uVar17);
        }
        else {
          iVar14 = *(int *)(param_1 + 0x170);
          *(uint *)(param_1 + 0x170) = iVar14 + 1U;
          if (*(uint *)(param_1 + 0x174) < iVar14 + 1U) {
            FUN_1446f48e2(plVar1,iVar14);
          }
          *(uint *)(*plVar1 + (longlong)iVar14 * 4) = uVar17;
        }
      }
      else if (0 < iVar22) {
        iVar14 = 1;
        do {
          iVar23 = -iVar14;
          if (0.0 <= param_3) {
            iVar23 = iVar14;
          }
          if (uVar20 == 0) {
            uVar21 = 0;
          }
          else {
            uVar16 = iVar23 + local_104;
            if ((int)uVar16 < 0) {
              uVar21 = uVar20 - -uVar16 % uVar20;
              if (-uVar16 % uVar20 == 0) {
                uVar21 = 0;
              }
            }
            else {
              uVar21 = uVar16 % uVar20;
            }
          }
          if (uVar21 == uVar17) {
            local_b8 = 0;
            local_b0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_ac = 0xffffffff00000080;
            local_a4 = 0;
            local_98 = 0;
            local_90 = 0;
            FUN_1498ca384(param_1,&local_d8);
            cVar5 = FUN_1498caab8(*plVar10 + 0x18);
            local_90 = 0;
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            FUN_145a36c6e(&local_d8);
            if (cVar5 == '\0') goto LAB_14468c82e;
            break;
          }
          bVar25 = iVar14 != iVar22;
          iVar14 = iVar14 + 1;
        } while (bVar25);
      }
LAB_14468c898:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
  }
  uVar20 = *(uint *)(param_1 + 0x170);
  lVar24 = (longlong)(int)uVar20;
  if (1 < lVar24) {
    puVar4 = *(undefined4 **)(param_1 + 0x168);
    lVar18 = 0;
    puVar11 = puVar4;
    do {
      uVar3 = *puVar11;
      *puVar11 = puVar4[lVar24 + lVar18 + -1];
      puVar4[lVar24 + lVar18 + -1] = uVar3;
      lVar18 = lVar18 + -1;
      puVar11 = puVar11 + 1;
    } while (-lVar18 != (ulonglong)(uVar20 >> 1));
  }
  if (((*(char *)(param_1 + 0x1d2) != '\0') && (*(int *)(param_1 + 0x170) == 0)) &&
     ((iVar22 = *(int *)(param_1 + 0x1d4), 0 < iVar22 &&
      ((*(int *)(param_1 + 0x1d4) = iVar22 + -1, iVar22 == 1 && (0 < *(int *)(param_1 + 0x1d8)))))))
  {
    *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + -1;
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1e0);
  }
  LeaveCriticalSection(local_100);
  if (local_e8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14468c9c2 FUN_14468c9c2 body=1805 status=ok
// SIG undefined FUN_14468c9c2(void)

/* WARNING: Removing unreachable block (ram,0x00014468cc75) */
/* WARNING: Removing unreachable block (ram,0x00014468cd64) */

void FUN_14468c9c2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  int *piVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined2 **ppuVar20;
  undefined8 *puVar21;
  int *piVar22;
  undefined2 **ppuVar23;
  int iVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined1 auStack_188 [32];
  int *local_168;
  undefined8 *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_13c [4];
  int *local_138;
  ulonglong uStack_130;
  undefined8 *local_128;
  ulonglong uStack_120;
  undefined2 **local_118;
  undefined8 uStack_110;
  undefined2 *local_108;
  int local_100;
  longlong local_f8;
  int local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_128 = (undefined8 *)0x0;
  uStack_120 = 0;
  local_158 = param_1;
  plVar12 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_2 + 1) == 0) {
    puVar18 = &DAT_149dfb77a;
  }
  else {
    puVar18 = (undefined2 *)*param_2;
  }
  (**(code **)(*plVar12 + 0x70))(plVar12,&local_128,puVar18,&DAT_149e060b2);
  FUN_140056680(&local_108,&DAT_149ef80de);
  FUN_140056680(&local_f8,&DAT_149ef62fc);
  FUN_140056680(local_e8,&DAT_149ef62f2);
  FUN_140056680(local_d8,&DAT_149ef80e6);
  FUN_140056680(local_c8,&DAT_149e31260);
  uStack_110 = &local_b8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_118 = &local_108;
  FUN_1415d42fa();
  lVar16 = 0x50;
  do {
    if (*(longlong *)((longlong)&local_118 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar16 = lVar16 + -0x10;
  } while (lVar16 != 0);
  local_118 = (undefined2 **)0x0;
  uStack_110 = (longlong *)0x0;
  local_138 = (int *)0x0;
  uStack_130 = 0;
  if ((int)uStack_120 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_120 & 0xffffffff);
  }
  if ((uStack_120 & 0xffffffff) != 0) {
    FUN_1498d4766(&local_138);
    if ((longlong)(int)uStack_120 != 0) {
      puVar21 = local_128 + (longlong)(int)uStack_120 * 2;
      puVar25 = local_128;
      local_160 = puVar21;
      do {
        FUN_144a06df0(&local_108,puVar25,0);
        puVar18 = local_108;
        uVar9 = local_100 - 1;
        if (local_100 == 0) {
          uVar9 = 0;
        }
        if ((int)uVar9 < 1) {
          uVar9 = 0;
        }
        else {
          uVar14 = 0;
          do {
            local_108[uVar14] =
                 (ushort)((ushort)local_108[uVar14] - 0x41 < 0x1a) * 0x20 + local_108[uVar14];
            uVar14 = uVar14 + 1;
          } while (uVar9 != uVar14);
          uVar9 = 0;
          iVar10 = local_100 + -1;
          if (local_100 == 0) {
            iVar10 = 0;
          }
          if (0 < iVar10) {
            puVar15 = local_108;
            if (local_100 == 0) {
              puVar15 = &DAT_149dfb77a;
            }
            lVar16 = 0;
            uVar9 = 0;
            do {
              uVar11 = ((uint)(ushort)puVar15[lVar16] +
                       (uint)(0x19 < (ushort)puVar15[lVar16] - 0x61) * 0x20) - 0x20;
              uVar9 = uVar9 >> 8 ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar9 ^ uVar11) & 0xff) * 4);
              uVar9 = uVar9 >> 8 ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar11 >> 8 & 0xff) * 4)
              ;
              lVar16 = lVar16 + 1;
            } while (iVar10 != (int)lVar16);
          }
        }
        if ((int)uStack_b0 != local_84) {
          puVar13 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar13 = local_80;
          }
          iVar10 = *(int *)(puVar13 + (ulonglong)(local_70 - 1U & uVar9) * 4);
          if (iVar10 != -1) {
LAB_14468cf76:
            lVar16 = (longlong)iVar10;
            iVar10 = *(int *)(local_b8 + 8 + lVar16 * 0x18);
            if (iVar10 == local_100) {
              if (1 < local_100) {
                lVar19 = 0;
                do {
                  uVar1 = *(ushort *)(*(longlong *)(local_b8 + lVar16 * 0x18) + lVar19);
                  uVar2 = *(ushort *)((longlong)local_108 + lVar19);
                  if (uVar1 == uVar2) {
                    if (uVar1 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar2 | uVar1)) {
                      iVar10 = (uint)uVar1 - (uint)uVar2;
                      goto LAB_14468cff4;
                    }
                    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                    goto code_r0x00014468cff1;
                  }
                  lVar19 = lVar19 + 2;
                } while( true );
              }
              goto LAB_14468d000;
            }
            if (iVar10 + local_100 == 1) goto LAB_14468d000;
            goto LAB_14468cf8c;
          }
        }
LAB_14468d08e:
        if (puVar18 != (undefined2 *)0x0) {
          FUN_1400020a8(puVar18);
        }
        puVar25 = puVar25 + 2;
      } while (puVar25 != puVar21);
    }
  }
  if ((longlong)(int)uStack_130 != 0) {
    piVar22 = local_138 + (longlong)(int)uStack_130 * 6;
    iVar10 = -1;
    piVar17 = local_138;
    local_168 = piVar22;
    uVar6 = local_150;
    uVar7 = local_148;
    do {
      local_148 = uVar7;
      local_150 = uVar6;
      if (*(char *)(local_158 + 0xd1) == '\x01') {
        iVar3 = *piVar17;
        bVar26 = iVar10 != -1;
        bVar5 = iVar10 < iVar3 + -1;
        iVar24 = iVar10 + 1;
        piVar22 = local_168;
        iVar10 = iVar3;
        if ((iVar24 < iVar3 && bVar26) && bVar5) {
          do {
            iVar4 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
              FUN_1447a1bd6(param_3,iVar4);
            }
            iVar24 = iVar24 + 1;
            puVar21 = (undefined8 *)(*param_3 + (longlong)iVar4 * 0x10);
            *puVar21 = 0;
            puVar21[1] = 0;
            piVar22 = local_168;
          } while (iVar3 != iVar24);
        }
      }
      local_108 = (undefined2 *)*param_2;
      local_100 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        local_100 = 0;
      }
      local_f8 = *(longlong *)(piVar17 + 2);
      local_f0 = piVar17[4] + -1;
      if (piVar17[4] == 0) {
        local_f0 = 0;
      }
      FUN_140bee87a(&local_150,&local_108,2);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_3,iVar3);
      }
      lVar16 = *param_3;
      lVar19 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar16 + lVar19) = 0;
      *(undefined8 *)(lVar16 + lVar19) = local_150;
      local_150 = 0;
      uVar6 = local_150;
      *(undefined4 *)(lVar16 + 8 + lVar19) = (undefined4)local_148;
      *(undefined4 *)(lVar16 + 0xc + lVar19) = local_148._4_4_;
      local_148 = 0;
      uVar7 = local_148;
      local_148 = 0;
      local_150 = 0;
      piVar17 = piVar17 + 6;
    } while (piVar17 != piVar22);
  }
  FUN_140e836da(local_118,(ulonglong)uStack_110 & 0xffffffff);
  if ((longlong)(int)uStack_110 != 0) {
    ppuVar20 = local_118 + (longlong)(int)uStack_110 * 2;
    ppuVar23 = local_118;
    uVar6 = local_150;
    uVar7 = local_148;
    do {
      local_148 = uVar7;
      local_150 = uVar6;
      local_108 = (undefined2 *)*param_2;
      local_100 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        local_100 = 0;
      }
      local_f8 = (longlong)*ppuVar23;
      local_f0 = *(int *)(ppuVar23 + 1) + -1;
      if (*(int *)(ppuVar23 + 1) == 0) {
        local_f0 = 0;
      }
      FUN_140bee87a(&local_150,&local_108,2);
      iVar10 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
        FUN_1447a1bd6(param_3,iVar10);
      }
      lVar16 = *param_3;
      lVar19 = (longlong)iVar10 * 0x10;
      *(undefined8 *)(lVar16 + lVar19) = 0;
      *(undefined8 *)(lVar16 + lVar19) = local_150;
      local_150 = 0;
      uVar6 = local_150;
      *(undefined4 *)(lVar16 + 8 + lVar19) = (undefined4)local_148;
      *(undefined4 *)(lVar16 + 0xc + lVar19) = local_148._4_4_;
      local_148 = 0;
      uVar7 = local_148;
      local_148 = 0;
      local_150 = 0;
      ppuVar23 = ppuVar23 + 2;
    } while (ppuVar23 != ppuVar20);
  }
  FUN_1498cf832(local_138,uStack_130 & 0xffffffff);
  if (local_138 != (int *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_118,(ulonglong)uStack_110 & 0xffffffff);
  if (local_118 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_b8);
  FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
  if (local_128 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014468cff1:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_14468cff4:
  if (iVar10 == 0) {
LAB_14468d000:
    cVar8 = FUN_1498ca9be(local_13c,puVar25);
    uVar14 = (ulonglong)uStack_110;
    if (cVar8 == '\0') {
      lVar16 = (longlong)(int)uStack_110;
      uVar9 = (int)uStack_110 + 1;
      uStack_110 = (longlong *)CONCAT44(uStack_110._4_4_,uVar9);
      if (uStack_110._4_4_ < uVar9) {
        FUN_1447a1bd6(&local_118,uVar14 & 0xffffffff);
      }
      ppuVar23 = local_118 + lVar16 * 2;
      local_118[lVar16 * 2] = (undefined2 *)0x0;
      iVar10 = *(int *)(puVar25 + 1);
      piVar22 = (int *)*puVar25;
      *(int *)(local_118 + lVar16 * 2 + 1) = iVar10;
      if ((longlong)iVar10 == 0) {
        *(undefined4 *)((longlong)ppuVar23 + 0xc) = 0;
        puVar21 = local_160;
      }
      else {
        local_168 = piVar22;
        FUN_1446dd670(ppuVar23,iVar10,0);
        memcpy(*ppuVar23,local_168,(longlong)iVar10 * 2);
        puVar21 = local_160;
      }
    }
    else {
      FUN_1498d47ce(&local_138,local_13c);
    }
    goto LAB_14468d08e;
  }
LAB_14468cf8c:
  iVar10 = *(int *)(local_b8 + 0x10 + lVar16 * 0x18);
  if (iVar10 == -1) goto LAB_14468d08e;
  goto LAB_14468cf76;
}



// FUNCTION 14468d0d2 FUN_14468d0d2 body=435 status=ok
// SIG undefined FUN_14468d0d2(void)

void FUN_14468d0d2(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  LPCRITICAL_SECTION local_88;
  int local_7c;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_7c = param_2;
  if (*param_3 != 0) {
    if (*(char *)(param_1 + 0x1a0) == '\x01') {
      puVar1 = (undefined8 *)(param_1 + 0x158);
      lVar5 = FUN_1498c95cc(*(undefined8 *)(param_1 + 0x120),puVar1,param_2);
      if (lVar5 == 0) {
        iVar2 = *(int *)(param_1 + 0xb8);
        lVar5 = *(longlong *)(param_1 + 0x120);
        lVar3 = **(longlong **)(param_1 + 0xb0);
        local_88 = (LPCRITICAL_SECTION)(lVar5 + 0x120);
        EnterCriticalSection(local_88);
        lVar4 = *param_3;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x98));
        uVar7 = *(ulonglong *)(lVar4 + 0xf8);
        if ((LPCRITICAL_SECTION)(lVar4 + 0x98) != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x98));
        }
        if (1 < iVar2) {
          uVar7 = (uVar7 << 2) / 3;
        }
        if (uVar7 <= *(ulonglong *)(lVar5 + 0x118)) {
          FUN_1498c9200(lVar5,uVar7);
          uVar6 = FUN_14001cc68(0x50,0x10);
          local_98 = param_3;
          FUN_1498c931c(uVar6,(longlong)param_2 * 0x10 + lVar3,uVar7,param_2);
          local_58 = &local_68;
          local_78 = *puVar1;
          local_60 = &local_78;
          local_70 = param_2;
          local_68 = uVar6;
          FUN_1498d18da(lVar5 + 0xc0,local_4c);
          FUN_1498c93b6(lVar5,puVar1,local_68);
          *(longlong *)(lVar5 + 0x110) = *(longlong *)(lVar5 + 0x110) + uVar7;
        }
        LeaveCriticalSection(local_88);
      }
    }
    else {
      FUN_1498cae38(param_1 + 0x40,&local_7c,param_3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468d286 FUN_14468d286 body=62 status=ok
// SIG undefined FUN_14468d286(void)

void FUN_14468d286(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1498cb11e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468d2c6 FUN_14468d2c6 body=408 status=ok
// SIG undefined FUN_14468d2c6(void)

void FUN_14468d2c6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  void *_Dst;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  longlong *plStack_40;
  void *local_38;
  longlong *local_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x14) == -1) {
LAB_14468d2e5:
    local_48 = (void *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    _Dst = *(void **)(param_1 + 0x68);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)FUN_14001cc68(0x160);
      memset(_Dst,0,0x160);
      FUN_1498cb28e(_Dst);
      plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_FUN_14bef1890;
      plVar4[2] = (longlong)_Dst;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x70);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      LOCK();
      *(undefined4 *)((longlong)_Dst + 0x90) = 0;
      UNLOCK();
    }
    QueryPerformanceCounter(&local_28);
    plVar2 = *(longlong **)(param_1 + 0x88);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = _Dst;
    local_30 = plVar4;
    cVar3 = (**(code **)(*plVar2 + 8))
                      (plVar2,*(undefined4 *)(param_1 + 0x14),param_1 + 0x18,&local_38);
    if (cVar3 == '\0') {
      bVar5 = *(longlong *)(param_1 + 0x68) == 0;
      if (bVar5) {
        _Dst = (void *)0x0;
      }
      if (bVar5 && plVar4 != (longlong *)0x0) {
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
        goto LAB_14468d2e5;
      }
    }
    else {
      QueryPerformanceCounter(&local_28);
    }
    local_48 = _Dst;
    plStack_40 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_1498cb11e(param_1,&local_48);
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
      goto LAB_14468d3e6;
    }
  }
  FUN_1498cb11e(param_1,&local_48);
LAB_14468d3e6:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468d460 FUN_14468d460 body=474 status=ok
// SIG undefined FUN_14468d460(void)

void FUN_14468d460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong *)(param_1 + 0x80);
  if (local_28 != 0) {
    if ((((*(longlong *)(local_28 + 0x130) != 0) && (*(int *)(param_1 + 200) != 0)) &&
        (uVar3 = *(uint *)(param_1 + 0xc4), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 200))) &&
         ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
          uVar5 = *puVar6;
        }
        else {
          uVar5 = 0;
        }
        FUN_1498c7cf0(*(longlong *)(local_28 + 0x130),uVar5);
        local_28 = *(longlong *)(param_1 + 0x80);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    plVar4 = *(longlong **)(param_1 + 0x88);
    local_20 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_1498cb536(uVar5,&local_28);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_1498cb536(uVar5);
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
    *(undefined8 *)(param_1 + 0x80) = 0;
    plVar4 = *(longlong **)(param_1 + 0x88);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
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
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      FUN_1446f8c06(param_1 + 0x58,0);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0x8000000000000000;
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc1) = 0;
    (**(code **)**(undefined8 **)(param_1 + 0x70))(*(undefined8 **)(param_1 + 0x70),9);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468d650 FUN_14468d650 body=212 status=ok
// SIG undefined FUN_14468d650(void)

undefined4 FUN_14468d650(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_78 [2] [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a4 = 0xffffffff;
  uStack_a0 = 0xffffffff;
  uStack_9c = 0xffffffff;
  uStack_98 = 0xffffffff;
  local_94 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  local_78[0] = (undefined1  [16])0x0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 0x8000000000000000;
  local_8c = 0;
  local_80 = 0;
  local_7e = 0;
  uVar1 = (**(code **)(*param_1 + 0x50))();
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(local_78);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468d726 FUN_14468d726 body=70 status=ok
// SIG undefined FUN_14468d726(void)

void FUN_14468d726(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014468d761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14468d76c FUN_14468d76c body=173 status=ok
// SIG undefined FUN_14468d76c(void)

void FUN_14468d76c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((lVar1 != 0) && (*(int *)(param_1 + 0x40) != 1)) {
    if ((*(int *)(param_1 + 0x40) == 4) && (*(char *)(lVar1 + 0xd0) == '\x01')) {
      iVar2 = *(int *)(lVar1 + 0x144);
      if (*(int *)(lVar1 + 0x140) < *(int *)(lVar1 + 0x144)) {
        iVar2 = *(int *)(lVar1 + 0x140);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 1;
        uVar3 = 4;
      }
      else {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x148);
        *(undefined4 *)(param_1 + 0x40) = 5;
        (**(code **)**(undefined8 **)(param_1 + 0x70))(*(undefined8 **)(param_1 + 0x70),9);
        uVar3 = 3;
      }
      (**(code **)**(undefined8 **)(param_1 + 0x70))(*(undefined8 **)(param_1 + 0x70),uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00014468d816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x98) + 8))
              (*(longlong **)(param_1 + 0x98),0,0x8000000000000000);
    return;
  }
  return;
}



// FUNCTION 14468d81a FUN_14468d81a body=396 status=ok
// SIG undefined FUN_14468d81a(void)

undefined8 FUN_14468d81a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((((uVar3 < 5) && ((0x13U >> (uVar3 & 0x1f) & 1) != 0)) || (lVar6 = *param_2, lVar6 < 0)) ||
     (*(longlong *)(param_1 + 0x20) <= lVar6)) {
    uVar5 = 0;
  }
  else {
    if (uVar3 == 5) {
      *(undefined4 *)(param_1 + 0x30) = 2;
      lVar6 = *param_2;
      uVar3 = 2;
    }
    *(longlong *)(param_1 + 0x38) = lVar6;
    lVar7 = (-(ulonglong)(*(float *)(param_1 + 0x28) < 0.0) | 1) +
            (longlong)*(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = (int)lVar7;
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (lVar6 != 0) {
      lVar7 = lVar7 << 0x20;
      *(undefined4 *)(lVar6 + 0x1c0) = 0;
      *(undefined8 *)(lVar6 + 0x1d4) = 0;
      uVar3 = FUN_1498ca01e(lVar6);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ((double)*(int *)(lVar6 + 0x154) / (double)*(int *)(lVar6 + 0x150)) *
                     (double)uVar3 * 10000000.0 + 0.5;
      auVar8 = roundpd(auVar8,auVar8,1);
      *(longlong *)(lVar6 + 0x1a8) = (longlong)auVar8._0_8_;
      *(longlong *)(lVar6 + 0x1b0) = lVar7;
      *(undefined8 *)(lVar6 + 0x1b8) = 0;
      uVar3 = *(uint *)(param_1 + 0x30);
    }
    if (uVar3 == 2) {
      lVar6 = *(longlong *)(param_1 + 0x70);
      uVar2 = *(undefined1 *)(param_1 + 0x9c);
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      iVar4 = FUN_1498ca01e(lVar6,*(undefined8 *)(param_1 + 0x38));
      if ((iVar4 == -1) || (*(int *)(lVar6 + 0x160) == iVar4)) {
        (**(code **)(**(longlong **)(lVar6 + 0x100) + 0x28))();
      }
      else {
        FUN_14468c25e(lVar6,iVar4,uVar1,CONCAT71((int7)((ulonglong)lVar7 >> 8),uVar2) & 0xffffffff);
        *(int *)(lVar6 + 0x160) = iVar4;
      }
    }
    *(undefined8 *)(param_1 + 0x68) = 0x8000000000000000;
    (**(code **)**(undefined8 **)(param_1 + 0x60))(*(undefined8 **)(param_1 + 0x60),8);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 14468d9a6 FUN_14468d9a6 body=190 status=ok
// SIG undefined FUN_14468d9a6(void)

ulonglong FUN_14468d9a6(longlong param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if ((4 < uVar2) || ((0x13U >> (uVar2 & 0x1f) & 1) == 0)) {
    fVar1 = *(float *)(param_1 + 0x28);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((fVar1 == param_2) && (!NAN(fVar1) && !NAN(param_2))) goto LAB_14468d9bf;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      if ((((param_2 == 0.0) && (!NAN(param_2))) || (fVar1 != 0.0)) || (NAN(fVar1))) {
        if (((param_2 != 0.0) || (NAN(param_2))) || ((fVar1 == 0.0 && (!NAN(fVar1))))) {
          if ((param_2 != 0.0) || (NAN(param_2))) {
            *(float *)(param_1 + 0x2c) = param_2;
          }
          *(float *)(param_1 + 0x28) = param_2;
          goto LAB_14468d9bf;
        }
        *(float *)(param_1 + 0x2c) = fVar1;
        *(float *)(param_1 + 0x28) = param_2;
        *(undefined4 *)(param_1 + 0x30) = 2;
        puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x60);
        uVar4 = 7;
      }
      else {
        if (uVar2 == 5) {
          *(undefined1 *)(param_1 + 0x80) = 1;
        }
        *(float *)(param_1 + 0x28) = param_2;
        *(float *)(param_1 + 0x2c) = param_2;
        *(undefined4 *)(param_1 + 0x30) = 3;
        puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x60);
        uVar4 = 6;
      }
      (*(code *)*puVar3)(fVar1,uVar4);
      goto LAB_14468d9bf;
    }
  }
  uVar5 = 0;
LAB_14468d9bf:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14468da64 FUN_14468da64 body=69 status=ok
// SIG undefined FUN_14468da64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14468da64(void)

{
  _DAT_14cc316b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014468daa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc316b8,1);
  return;
}



// FUNCTION 14468daaa FUN_14468daaa body=1300 status=ok
// SIG undefined FUN_14468daaa(void)

ulonglong FUN_14468daaa(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_178 [36];
  int local_154;
  uint local_150;
  undefined4 local_14c;
  longlong local_148;
  longlong *local_140;
  void *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  void *local_120;
  int local_118;
  undefined4 local_114;
  longlong local_108;
  longlong local_b8;
  undefined8 uStack_b0;
  int local_a8;
  int iStack_a4;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 == (longlong *)0x0) {
LAB_14468db22:
    uVar16 = 0;
    goto LAB_14468db25;
  }
  iVar15 = (int)plVar2[1];
  do {
    if (iVar15 == 0) goto LAB_14468db22;
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar19 = iVar15 == iVar5;
    if (bVar19) {
      *(int *)(plVar2 + 1) = iVar15 + 1;
      iVar5 = iVar15;
    }
    iVar15 = iVar5;
    UNLOCK();
  } while (!bVar19);
  lVar17 = *(longlong *)(param_1 + 0xd0);
  if (lVar17 == 0) {
    uVar16 = 0;
  }
  else {
    iVar15 = *(int *)(lVar17 + 0xd8) * *(int *)(lVar17 + 0xd4);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0x10000ea60;
    if (*(longlong *)*param_4 == 0) {
      uVar16 = 0;
      uVar6 = FUN_14468b6d0(lVar17,param_2,0);
      cVar3 = FUN_1498cd26a(uVar6,&local_b8,param_4);
      if (cVar3 != '\0') {
        iVar5 = iStack_a4;
        if (local_a8 < iStack_a4) {
          iVar5 = local_a8;
        }
        if (0 < iVar5) {
          if (*(int *)(lVar17 + 0xf4) < 2) {
            iVar5 = local_a8 * iStack_a4;
          }
          else {
            iVar5 = (local_a8 * iStack_a4 * 4) / 3;
          }
          lVar18 = (longlong)iVar5 << 3;
          local_154 = iVar15;
          local_14c = param_2;
          local_148 = lVar17;
          local_80 = lVar18;
          lVar9 = FUN_14001cc68(lVar18,0x40);
          LOCK();
          *(undefined4 *)(*param_4 + 0x10) = 0xd;
          UNLOCK();
          plVar13 = (longlong *)*param_4;
          plVar10 = (longlong *)FUN_14001cc68(0x20,0x10);
          lVar17 = local_148;
          plVar10[2] = lVar18;
          plVar10[1] = (longlong)&DAT_100000001;
          *plVar10 = (longlong)&PTR_FUN_14bef18f0;
          plVar10[3] = lVar9;
          *plVar13 = lVar9;
          plVar7 = (longlong *)plVar13[1];
          if (plVar10 == plVar7) {
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar10 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar15 = *piVar1;
                UNLOCK();
joined_r0x00014468df90:
                if (iVar15 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          else {
            plVar13[1] = (longlong)plVar10;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar7 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar15 = *piVar1;
                UNLOCK();
                plVar10 = plVar7;
                goto joined_r0x00014468df90;
              }
            }
          }
          FUN_1498cd600(*param_4 + 0x18);
          LOCK();
          *(int *)(*param_4 + 0x94) = local_a8 << 3;
          UNLOCK();
          goto LAB_14468dc4c;
        }
        uVar16 = 0;
      }
    }
    else {
      FUN_1498c9a3e((longlong *)*param_4,&local_120);
      FUN_1498ca918(&local_b8,&local_120);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      local_154 = iVar15;
      local_14c = param_2;
      if (local_120 != (void *)0x0) {
        FUN_1400020a8();
      }
LAB_14468dc4c:
      lVar9 = *(longlong *)*param_4;
      uVar16 = CONCAT44(iStack_a4,local_a8);
      uVar12 = *(uint *)(lVar17 + 0xf4);
      local_148 = lVar17;
      local_128 = uVar16;
      if (0 < (int)uVar12) {
        plVar13 = param_3 + 7;
        uVar14 = 0;
        iVar15 = iStack_a4;
LAB_14468dc89:
        if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
          plVar7 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar7 = plVar13;
          }
          iVar5 = *(int *)((longlong)plVar7 +
                          (ulonglong)((int)param_3[9] + 0x7fffffffU & uVar14) * 4);
          if (iVar5 != -1) {
            lVar17 = *param_3;
            iVar11 = iVar5;
            do {
              if (*(uint *)(lVar17 + (longlong)iVar11 * 0x50) == uVar14) goto LAB_14468dd15;
              iVar11 = *(int *)((longlong)iVar11 * 0x50 + lVar17 + 0x48);
            } while (iVar11 != -1);
          }
        }
        goto LAB_14468dcce;
      }
LAB_14468de64:
      uVar16 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  plVar13 = plVar2 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_14468db25:
  plVar2 = (longlong *)param_4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar2 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar5 = *(int *)(lVar18 + 0x48), iVar5 != -1) {
LAB_14468dd15:
    lVar18 = lVar17 + (longlong)iVar5 * 0x50;
    if (*(uint *)(lVar17 + (longlong)iVar5 * 0x50) == uVar14) goto LAB_14468dd36;
  }
  lVar18 = 0;
LAB_14468dd36:
  local_150 = uVar12;
  local_140 = plVar13;
  cVar3 = FUN_1498cd64a(*param_4 + 0x18,uVar14,lVar18 + 8);
  plVar13 = local_140;
  uVar12 = local_150;
  if (cVar3 == '\0') {
    puVar8 = (undefined8 *)FUN_14468b6d0(local_148,local_14c,uVar14);
    local_120 = (void *)0x0;
    local_118 = *(int *)(puVar8 + 1);
    lVar17 = (longlong)local_118;
    if (lVar17 == 0) {
      local_114 = 0;
    }
    else {
      local_138 = (void *)*puVar8;
      FUN_1446dd670(&local_120,local_118,0);
      memcpy(local_120,local_138,lVar17 * 2);
    }
    iVar5 = local_154;
    if ((local_154 < 2) && (FUN_14468849c(&local_130,&local_120,2), local_130 != (undefined8 *)0x0))
    {
      FUN_1498c619c(&local_130,lVar9,&local_128);
      FUN_1446885a4(&local_130,0,iVar15 + -1);
      FUN_1498cd6e8(*param_4 + 0x18,uVar14,lVar18 + 8);
      LOCK();
      *(int *)(*param_4 + 0x90) = *(int *)(*param_4 + 0x90) + 1;
      UNLOCK();
      if (local_130 != (undefined8 *)0x0) {
        (**(code **)*local_130)(local_130,1);
      }
    }
    local_154 = iVar5;
    if (local_120 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar16 = local_128 & 0xffffffff;
    plVar13 = local_140;
    uVar12 = local_150;
    iVar15 = local_128._4_4_;
  }
LAB_14468dcce:
  lVar9 = lVar9 + (int)uVar16 * iVar15 * 8;
  uVar4 = (int)(((uint)(uVar16 >> 0x1f) & 1) + (int)uVar16) >> 1;
  iVar15 = iVar15 / 2;
  local_128 = CONCAT44(iVar15,uVar4);
  uVar14 = uVar14 + 1;
  uVar16 = (ulonglong)uVar4;
  if (uVar14 == uVar12) goto LAB_14468de64;
  goto LAB_14468dc89;
}



// FUNCTION 14468dfc0 FUN_14468dfc0 body=107 status=ok
// SIG undefined FUN_14468dfc0(void)

void FUN_14468dfc0(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_1447cbafe(param_1 + 8,local_28,&local_24,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468e02c FUN_14468e02c body=69 status=ok
// SIG undefined FUN_14468e02c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14468e02c(void)

{
  _DAT_14cc316c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014468e06e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc316d0,1);
  return;
}



// FUNCTION 14468e072 FUN_14468e072 body=1534 status=ok
// SIG undefined FUN_14468e072(void)

void FUN_14468e072(undefined8 *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_14bef1080;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1e);
  EnterCriticalSection(lpCriticalSection);
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_1498cffdc(&local_d8,param_1 + 0x23);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14468e118;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14468e121;
      goto LAB_14468e1f4;
    }
  }
  else {
LAB_14468e118:
    if (iVar6 != 0x10) {
LAB_14468e1f4:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14468e121;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14468e121;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14468e2d2;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_144696270);
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
LAB_14468e2d2:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x1f);
          uVar13 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x1f);
            uVar13 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar13 = 1;
              goto LAB_14468e352;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14468e352:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14bef1998;
        FUN_1498d609c(puVar16 + 0x15,&local_d8);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
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
          uVar12 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
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
        local_88[0] = (undefined1 *)0x0;
        plVar11 = (longlong *)FUN_14001cc68(0x58,8);
        *plVar11 = (longlong)&PTR_LAB_14bef1950;
        local_78 = plVar11;
        FUN_1498d609c(plVar11 + 1,&local_d8);
        if (plVar11 != (longlong *)&DAT_fffffffffffffff8) {
          local_88[0] = &LAB_1446963b2;
        }
        local_e8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"DeletePooledBuffers",&DAT_14cc31710);
        if (local_88[0] != (undefined1 *)0x0) {
          plVar11 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar11 = local_68;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      goto LAB_14468e12b;
    }
  }
LAB_14468e121:
  FUN_1446962c0(&local_d8);
LAB_14468e12b:
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1498d0152(&local_d8);
  LeaveCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1498d0152(param_1 + 0x23);
  DeleteCriticalSection(lpCriticalSection);
  plVar11 = (longlong *)param_1[0x1d];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  FUN_1498cd176(param_1);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14468e672 FUN_14468e672 body=8521 status=ok
// SIG undefined FUN_14468e672(void)

ulonglong FUN_14468e672(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  uint uVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  size_t sVar15;
  undefined4 *puVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  FILE *pFVar23;
  FILE **ppFVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined2 *puVar27;
  int *piVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  int iVar32;
  size_t sVar33;
  int *piVar34;
  longlong lVar35;
  undefined4 uVar36;
  LPCRITICAL_SECTION p_Var37;
  longlong lVar38;
  FILE *pFVar39;
  undefined4 uVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  ulonglong uVar44;
  FILE **_Dst;
  ulonglong uVar45;
  bool bVar46;
  bool bVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_4d8 [32];
  FILE **local_4b8;
  longlong local_4b0;
  FILE *local_4a8;
  int local_49c;
  LPCRITICAL_SECTION local_498;
  ulonglong local_490;
  LPCRITICAL_SECTION local_488;
  ulonglong local_480;
  uint *local_478;
  undefined4 local_46c;
  longlong *local_468;
  longlong local_460;
  uint *local_458;
  longlong local_450;
  ulonglong local_448;
  ulonglong local_440;
  FILE *local_438;
  undefined8 *local_430;
  longlong local_428;
  longlong local_420;
  undefined4 local_418;
  uint local_414;
  int local_410;
  int local_40c;
  int *local_408;
  ulonglong local_400;
  ulonglong local_3f8;
  longlong *local_3f0;
  longlong local_3e8;
  undefined8 *local_3e0;
  longlong *local_3d8;
  char **local_3d0;
  FILE *local_3c8;
  longlong local_3c0;
  FILE *local_3b8;
  longlong *local_3b0;
  ulonglong local_3a8;
  FILE *local_3a0;
  FILE *local_398;
  undefined2 *local_380;
  int local_378;
  undefined4 local_374;
  uint local_36c;
  void *local_368;
  int local_360;
  int local_35c;
  ulonglong local_358;
  void *local_350;
  int local_348;
  int local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  int iStack_30c;
  undefined4 uStack_308;
  int local_300;
  ulonglong local_2fc;
  undefined8 local_2f4;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  int local_2c8;
  int local_2c4;
  char local_2c0;
  uint local_2bc;
  FILE *local_2b8;
  FILE *local_2b0;
  void *local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  void *local_290;
  ulonglong uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  undefined4 uStack_248;
  longlong local_238;
  longlong local_230;
  FILE *local_228;
  FILE *pFStack_220;
  FILE *local_218;
  FILE *pFStack_210;
  FILE *local_208;
  undefined8 local_200;
  int local_1f8;
  FILE *local_1e8;
  char *pcStack_1e0;
  void *local_1d8;
  undefined8 uStack_1d0;
  FILE *local_1c0;
  FILE *local_1b8;
  longlong local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  FILE *local_198;
  undefined1 auStack_190 [8];
  FILE **local_188;
  char *pcStack_180;
  FILE *local_178 [2];
  char *local_168;
  undefined1 local_160;
  longlong local_128;
  undefined8 uStack_120;
  uint local_118 [4];
  uint *local_108;
  uint local_100;
  undefined8 local_fc;
  int local_f4;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  int local_e0;
  code *local_d8;
  FILE **local_d0;
  undefined8 local_c8;
  undefined **local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if (*(char *)(param_1 + 0x171) == '\x01') {
    local_238 = *param_4;
    local_230 = param_4[1];
    if (local_230 != 0) {
      LOCK();
      *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
      UNLOCK();
    }
    uVar8 = FUN_14468daaa(param_1,param_2,param_3,&local_238);
    uVar44 = (ulonglong)uVar8;
    goto LAB_14468e756;
  }
  plVar18 = *(longlong **)(param_1 + 0xd8);
  if (plVar18 == (longlong *)0x0) {
LAB_14468e754:
    uVar44 = 0;
    goto LAB_14468e756;
  }
  iVar32 = (int)plVar18[1];
  do {
    if (iVar32 == 0) goto LAB_14468e754;
    LOCK();
    iVar42 = (int)plVar18[1];
    bVar46 = iVar32 == iVar42;
    if (bVar46) {
      *(int *)(plVar18 + 1) = iVar32 + 1;
      iVar42 = iVar32;
    }
    iVar32 = iVar42;
    UNLOCK();
  } while (!bVar46);
  lVar43 = *(longlong *)(param_1 + 0xd0);
  uVar44 = 0;
  if (lVar43 != 0) {
    uVar12 = FUN_14468b6d0(lVar43,param_2,0);
    local_2a8 = (void *)0x0;
    uStack_2a0 = 0;
    local_290 = (void *)0x0;
    uStack_288 = 0;
    local_280 = 0x10000ea60;
    cVar7 = FUN_1498cd26a(uVar12,&local_2a8,param_4);
    if (cVar7 != '\0') {
      FUN_1498cdb78(*param_4,&local_2b8);
      FUN_1498cdce6(local_2b8,&local_368);
      pvVar5 = local_2a8;
      local_2fc = local_298;
      iVar32 = (int)(local_298 >> 0x20);
      if ((int)local_298 < iVar32) {
        iVar32 = (int)local_298;
      }
      local_300 = param_2;
      if (0 < iVar32) {
        iVar32 = (int)uStack_2a0;
        lVar31 = (longlong)(int)uStack_2a0;
        local_360 = (int)uStack_2a0;
        local_3d8 = plVar18;
        if ((int)uStack_2a0 == 0 && local_35c == 0) {
          local_35c = 0;
        }
        else {
          FUN_1446dd670(&local_368,uStack_2a0 & 0xffffffff);
          if (iVar32 != 0) {
            memcpy(local_368,pvVar5,lVar31 * 2);
          }
        }
        pvVar5 = local_290;
        local_358 = local_298;
        iVar32 = (int)uStack_288;
        lVar31 = (longlong)(int)uStack_288;
        local_348 = (int)uStack_288;
        if ((int)uStack_288 == 0 && local_344 == 0) {
          local_344 = 0;
        }
        else {
          FUN_1446dd670(&local_350,uStack_288 & 0xffffffff);
          if (iVar32 != 0) {
            memcpy(local_350,pvVar5,lVar31 * 2);
          }
        }
        uVar40 = SUB84(&local_2fc,0);
        local_330 = local_270;
        uStack_32c = uStack_26c;
        iStack_328 = iStack_268;
        uStack_324 = uStack_264;
        iStack_310 = iStack_250;
        iStack_30c = iStack_24c;
        uStack_308 = uStack_248;
        local_320 = local_260;
        iStack_31c = iStack_25c;
        iStack_318 = iStack_258;
        iStack_314 = iStack_254;
        local_340 = local_280;
        uStack_338 = uStack_278;
        local_2c4 = iStack_268 * 2;
        local_2f4 = CONCAT44(iStack_250 + iStack_24c * 2,iStack_254 + iStack_24c * 2);
        local_2c8 = *(int *)(lVar43 + 0xf4);
        local_2c0 = 1 < *(int *)(lVar43 + 0xb8);
        local_108 = (uint *)0x0;
        local_100 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_fc = 0xffffffff00000080;
        local_f4 = 0;
        local_e8 = (undefined1 *)0x0;
        local_e0 = 0;
        FUN_1498cf060(&local_128,param_3);
        local_36c = local_2c8 - 1U;
        if ((int)*(uint *)(lVar43 + 0xf8) < (int)(local_2c8 - 1U)) {
          local_36c = *(uint *)(lVar43 + 0xf8);
        }
        local_468 = param_4;
        uVar8 = 0xffffffff;
        if ((-1 < (int)local_36c) && (uVar8 = local_36c, 1 < local_2c8)) {
          local_4b8 = (FILE **)CONCAT71(local_4b8._1_7_,1);
          ppFVar24 = &local_198;
          local_2bc = local_36c;
          FUN_1498c72e4(ppFVar24,&local_2fc,&iStack_254);
          if ((int)uStack_120 != local_f4) {
            puVar26 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar26 = local_f0;
            }
            iVar42 = *(int *)(puVar26 + (ulonglong)(local_e0 - 1U & local_36c) * 4);
            for (iVar32 = iVar42; iVar32 != -1;
                iVar32 = *(int *)((longlong)iVar32 * 0x50 + local_128 + 0x48)) {
              if (*(uint *)(local_128 + (longlong)iVar32 * 0x50) == local_36c) goto LAB_1446907f8;
            }
          }
          local_d8 = (code *)&local_36c;
          local_d0 = ppFVar24;
          FUN_1498cfad8(&local_128,&local_228);
          goto LAB_14468eaf7;
        }
        goto LAB_14468eb09;
      }
      uVar44 = 0;
      goto LAB_14468ecff;
    }
    goto LAB_14468e80d;
  }
  goto LAB_14468e735;
code_r0x00014468ee51:
  lVar38 = lVar38 + -0x20;
  puVar17 = puVar17 + 1;
  if ((ulonglong)(uVar8 & 0xffffffe0) + lVar38 == 0) goto LAB_14468ee85;
  goto LAB_14468ee49;
LAB_14468f691:
  local_4a8 = (FILE *)(ulonglong)uVar8;
  iVar42 = 16000000;
  if (uVar8 == (uint)local_448) {
    iVar42 = (uint)local_478;
  }
  if (iVar42 == 0) goto LAB_14468f4ff;
  EnterCriticalSection(local_498);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar43 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar43 = local_460;
    }
    piVar28 = (int *)(lVar43 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (ulonglong)p_Var37) * 4);
    iVar22 = 0;
    do {
      iVar20 = *piVar28;
      lVar43 = (longlong)iVar20;
      if (lVar43 == -1) break;
      piVar3 = (int *)(*(longlong *)(param_1 + 8) + lVar43 * 0xc);
      iVar4 = *piVar3;
      if (iVar4 == (int)p_Var37) {
        lVar31 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar31 = local_460;
        }
        iVar41 = *(int *)(lVar31 + (longlong)piVar3[2] * 4);
        if (iVar41 == iVar20) {
          piVar34 = (int *)(lVar31 + (longlong)piVar3[2] * 4);
        }
        else {
          do {
            piVar34 = (int *)(*(longlong *)(param_1 + 8) + (longlong)iVar41 * 0xc + 4);
            iVar41 = *piVar34;
          } while (iVar41 != iVar20);
        }
        *piVar34 = piVar3[1];
        lVar31 = *(longlong *)(param_1 + 8);
        if (*(int *)(param_1 + 0x3c) != 0) {
          *(int *)(lVar31 + (longlong)*(int *)(param_1 + 0x38) * 0xc) = iVar20;
        }
        *(undefined4 *)(lVar31 + lVar43 * 0xc) = 0xffffffff;
        uVar40 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x3c)) {
          uVar40 = *(undefined4 *)(param_1 + 0x38);
        }
        *(undefined4 *)(lVar31 + lVar43 * 0xc + 4) = uVar40;
        *(int *)(param_1 + 0x38) = iVar20;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        lVar43 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar43 = local_450;
        }
        iVar41 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar41 = iVar20;
        }
        bVar6 = (byte)iVar20 & 0x1f;
        puVar17 = (uint *)(lVar43 + (longlong)(iVar41 >> 5) * 4);
        *puVar17 = *puVar17 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        iVar22 = iVar22 + 1;
      }
      else {
        piVar28 = piVar3 + 1;
      }
      p_Var37 = local_488;
    } while (iVar4 != (int)local_488);
    LeaveCriticalSection(local_498);
    if (iVar22 < 1) goto LAB_14468f7f2;
    uVar40 = 2;
    goto LAB_14468f504;
  }
  LeaveCriticalSection(local_498);
LAB_14468f7f2:
  uVar40 = 0;
  if ((((void *)((longlong)iVar32 + local_440) == (void *)0x0) || (local_198 == (FILE *)0x0)) ||
     (sVar33 = fread((void *)((longlong)iVar32 + local_440),(longlong)iVar42,1,local_198),
     sVar33 != 1)) goto LAB_14468f504;
  iVar32 = iVar32 + iVar42;
  uVar8 = (int)local_4a8 + 1;
  if ((int)local_4a8 == (int)local_448) goto LAB_14468f4ff;
  goto LAB_14468f691;
LAB_14468f4ff:
  uVar40 = 1;
LAB_14468f504:
  cVar7 = FUN_14468933e(&local_198);
  if (cVar7 == '\0') {
    uVar40 = 0;
  }
  local_4a8 = (FILE *)CONCAT44(local_4a8._4_4_,uVar40);
LAB_14468f51f:
  if (local_228 != (FILE *)0x0) {
    FUN_1400020a8();
  }
  FUN_1498c6ee6(local_188,(ulonglong)pcStack_180 & 0xffffffff);
  if (local_188 != (FILE **)0x0) {
    FUN_1400020a8();
  }
  LOCK();
  *(int *)(local_428 + 0x90) = *(int *)(local_428 + 0x90) + 1;
  UNLOCK();
LAB_14468f566:
  pvVar5 = local_1d8;
  if (((int)local_4a8 == 1) && (DAT_14cc316e0 == '\x01')) {
    local_228 = local_3c8;
    pFStack_220 = local_438;
    if (local_438 != (FILE *)0x0) {
      LOCK();
      local_438->_cnt = local_438->_cnt + 1;
      UNLOCK();
    }
    local_218 = local_1c0;
    pFStack_210 = local_1b8;
    if (local_1b8 != (FILE *)0x0) {
      LOCK();
      local_1b8->_cnt = local_1b8->_cnt + 1;
      UNLOCK();
    }
    local_208 = (FILE *)0x0;
    lVar43 = (longlong)(int)uStack_1d0;
    local_200 = CONCAT44(local_200._4_4_,(int)uStack_1d0);
    if (lVar43 == 0) {
      local_200 = uStack_1d0 & 0xffffffff;
    }
    else {
      FUN_1498d61aa(&local_208,uStack_1d0 & 0xffffffff);
      memcpy(local_208,pvVar5,lVar43 << 4);
    }
    local_1f8 = local_300;
    iVar32 = *local_408;
    if (DAT_14c86a9fc == 0) {
      if (iVar32 != 2) {
        if (iVar32 != 1) goto LAB_14468f635;
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14468f63e;
        goto LAB_14468ff1e;
      }
LAB_14468f63e:
      FUN_144696622(&local_228,&DAT_14ca85100);
    }
    else {
LAB_14468f635:
      if (iVar32 == 0x10) goto LAB_14468f63e;
LAB_14468ff1e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*local_408 == 2)) goto LAB_14468f63e;
        if (*local_408 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_14468f63e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar17 = (uint *)*local_430;
        if (puVar17 != (uint *)0x0) goto LAB_144690188;
        do {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_144696270);
          }
          puVar16 = (undefined4 *)*local_3e0;
          *local_3e0 = 0;
          if (puVar16 == (undefined4 *)0x0) {
            puVar16 = _aligned_malloc(0x10000,0x10000);
          }
          puVar14 = local_430;
          *puVar16 = 0xffffffff;
          *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *local_430 = puVar16;
          FUN_140217a48(local_430);
          puVar17 = (uint *)*puVar14;
LAB_144690188:
          uVar44 = *(longlong *)(puVar17 + 0x10) + 7;
          uVar8 = puVar17[0x12];
          while( true ) {
            puVar14 = (undefined8 *)(uVar44 & 0xfffffffffffffff8);
            if (puVar14 + 0x1c <= puVar17 + 0x4000) {
              *(undefined8 **)(puVar17 + 0x10) = puVar14 + 0x1c;
              puVar17[0x12] = uVar8 + 1;
              FUN_1447247dc(puVar14,0);
              *puVar14 = &PTR_FUN_14bef1a20;
              puVar14[0x15] = local_228;
              puVar14[0x16] = pFStack_220;
              local_228 = (FILE *)0x0;
              pFStack_220 = (FILE *)0x0;
              puVar14[0x17] = local_218;
              puVar14[0x18] = pFStack_210;
              local_218 = (FILE *)0x0;
              pFStack_210 = (FILE *)0x0;
              puVar14[0x19] = local_208;
              local_208 = (FILE *)0x0;
              *(undefined4 *)(puVar14 + 0x1a) = (undefined4)local_200;
              *(undefined4 *)((longlong)puVar14 + 0xd4) = local_200._4_4_;
              local_200 = 0;
              *(int *)(puVar14 + 0x1b) = local_1f8;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar8 = DAT_14c7585c8 >> 10 & 3;
                iVar32 = 0;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar44 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
                  iVar32 = 0;
                }
                else {
                  uVar44 = 2;
                }
              }
              else {
                iVar32 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar44 = 5;
              }
              if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
              }
              puVar14[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar14[9] = puVar14;
              puVar14[10] = puVar14;
              lVar43 = *local_3f0;
              if (lVar43 == 0) {
                if ((char)uVar44 == '\x06') {
                  uVar44 = 1;
                }
                uVar12 = 0;
              }
              else {
                if ((char)uVar44 == '\x06') {
                  uVar44 = *(ulonglong *)(lVar43 + 0x38) >> 0x3b;
                }
                uVar12 = *(undefined8 *)(lVar43 + 0x30);
              }
              puVar14[0xf] = uVar12;
              puVar14[0x10] = (uVar44 << 0x3b) + local_3e8 | 0xc000000000000000;
              *(int *)((longlong)puVar14 + 0x1c) = iVar32;
              if (puVar14 == (undefined8 *)0x0) {
                local_198 = (FILE *)CONCAT71(local_198._1_7_,1);
                FUN_1447439e4(0,&local_198);
              }
              else {
                LOCK();
                *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
                UNLOCK();
                local_198 = (FILE *)CONCAT71(local_198._1_7_,1);
                FUN_1447439e4(puVar14,&local_198);
                LOCK();
                piVar28 = (int *)(puVar14 + 1);
                *piVar28 = *piVar28 + -1;
                UNLOCK();
                if (*piVar28 == 0) {
                  (**(code **)*puVar14)(puVar14,1);
                }
              }
              goto LAB_14469006b;
            }
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
            LOCK();
            uVar21 = *puVar17;
            *puVar17 = *puVar17 + uVar8 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar8) != 0xffffffff) break;
            puVar17 = (uint *)*local_430;
            *puVar17 = 0xffffffff;
            *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *local_430 = puVar17;
            uVar44 = (longlong)puVar17 + 0x5f;
            uVar8 = 0;
          }
        } while( true );
      }
      local_198 = (FILE *)0x0;
      local_188 = (FILE **)FUN_14001cc68(0x40,8);
      *local_188 = (FILE *)&PTR_LAB_14bef19d0;
      local_188[1] = local_228;
      local_188[2] = pFStack_220;
      local_228 = (FILE *)0x0;
      pFStack_220 = (FILE *)0x0;
      local_188[3] = local_218;
      local_188[4] = pFStack_210;
      local_218 = (FILE *)0x0;
      pFStack_210 = (FILE *)0x0;
      local_188[5] = local_208;
      local_208 = (FILE *)0x0;
      *(undefined4 *)(local_188 + 6) = (undefined4)local_200;
      *(undefined4 *)((longlong)local_188 + 0x34) = local_200._4_4_;
      local_200 = 0;
      *(int *)(local_188 + 7) = local_1f8;
      if (local_188 + 1 != (FILE **)0x0) {
        local_198 = (FILE *)&LAB_144696778;
      }
      local_4b8 = &local_198;
      FUN_14005a792(&DAT_14ca9a440,L"CopyFromUploadBuffer",&DAT_14cc31714);
      if (local_198 != (FILE *)0x0) {
        ppFVar24 = local_188;
        if (local_188 == (FILE **)0x0) {
          ppFVar24 = local_178;
        }
        (*(code *)(*ppFVar24)->_base)();
      }
    }
LAB_14469006b:
    if (local_208 != (FILE *)0x0) {
      FUN_1400020a8();
    }
    pFVar23 = pFStack_210;
    if (pFStack_210 != (FILE *)0x0) {
      LOCK();
      piVar28 = &pFStack_210->_cnt;
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)pFStack_210->_ptr)(pFStack_210);
        LOCK();
        puVar26 = &pFVar23->field_0xc;
        *(int *)puVar26 = *(int *)puVar26 + -1;
        UNLOCK();
        if (*(int *)puVar26 == 0) {
          (**(code **)(pFVar23->_ptr + 0x10))(pFVar23);
        }
      }
    }
    pFVar23 = pFStack_220;
    if (pFStack_220 != (FILE *)0x0) {
      LOCK();
      piVar28 = &pFStack_220->_cnt;
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)pFStack_220->_ptr)(pFStack_220);
        LOCK();
        puVar26 = &pFVar23->field_0xc;
        *(int *)puVar26 = *(int *)puVar26 + -1;
        UNLOCK();
        if (*(int *)puVar26 == 0) {
          (**(code **)(pFVar23->_ptr + 0x10))(pFVar23);
        }
      }
    }
  }
  pFVar23 = local_438;
  if (local_1d8 != (void *)0x0) {
    FUN_1400020a8();
    pFVar23 = local_438;
  }
LAB_14468f14b:
  if (local_1b8 != (FILE *)0x0) {
    LOCK();
    piVar28 = &local_1b8->_cnt;
    *piVar28 = *piVar28 + -1;
    UNLOCK();
    if (*piVar28 == 0) {
      (**(code **)local_1b8->_ptr)(local_1b8);
      LOCK();
      puVar26 = &local_1b8->field_0xc;
      *(int *)puVar26 = *(int *)puVar26 + -1;
      UNLOCK();
      if (*(int *)puVar26 == 0) {
        (**(code **)(local_1b8->_ptr + 0x10))(local_1b8);
      }
    }
  }
  plVar18 = local_3b0;
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar28 = (int *)((longlong)plVar18 + 0xc);
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (pFVar23 != (FILE *)0x0) {
    LOCK();
    piVar28 = &pFVar23->_cnt;
    *piVar28 = *piVar28 + -1;
    UNLOCK();
    if (*piVar28 == 0) {
      (**(code **)pFVar23->_ptr)(pFVar23);
      LOCK();
      puVar26 = &pFVar23->field_0xc;
      *(int *)puVar26 = *(int *)puVar26 + -1;
      UNLOCK();
      if (*(int *)puVar26 == 0) {
        (**(code **)(pFVar23->_ptr + 0x10))(pFVar23);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014468f1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar44 = (*(code *)(&DAT_14bef1d70 +
                     *(int *)(&DAT_14bef1d70 + ((ulonglong)local_4a8 & 0xffffffff) * 4)))();
  return uVar44;
  while (iVar42 = *(int *)(lVar31 + 0x48), iVar42 != -1) {
LAB_1446907f8:
    lVar31 = local_128 + (longlong)iVar42 * 0x50;
    if (*(uint *)(local_128 + (longlong)iVar42 * 0x50) == local_36c) goto LAB_144690816;
  }
  lVar31 = 0;
LAB_144690816:
  _Dst = (FILE **)(lVar31 + 8);
  if (_Dst != ppFVar24) {
    uVar8 = (int)pcStack_180 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(lVar31 + 0x20) = 0;
    if ((*(int *)(lVar31 + 0x24) < (int)uVar8) || (0x80 < *(int *)(lVar31 + 0x24))) {
      uVar21 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar21 = uVar8;
      }
      *(uint *)(lVar31 + 0x24) = uVar21;
      FUN_1446efbd8(_Dst,0);
    }
    *(int *)(lVar31 + 0x20) = (int)pcStack_180;
    if ((int)pcStack_180 != 0) {
      if (local_188 != (FILE **)0x0) {
        ppFVar24 = local_188;
      }
      if (*(FILE ***)(lVar31 + 0x18) != (FILE **)0x0) {
        _Dst = *(FILE ***)(lVar31 + 0x18);
      }
      memcpy(_Dst,ppFVar24,(ulonglong)((int)pcStack_180 + 0x1fU >> 3 & 0xfffffffc));
    }
  }
  *(FILE **)(lVar31 + 0x28) = local_178[0];
  *(FILE **)(lVar31 + 0x30) = local_178[1];
  *(char **)(lVar31 + 0x38) = local_168;
  *(undefined1 *)(lVar31 + 0x40) = local_160;
  param_4 = local_468;
LAB_14468eaf7:
  uVar40 = SUB84(ppFVar24,0);
  uVar8 = local_36c;
  if (local_188 != (FILE **)0x0) {
    FUN_1400020a8();
    uVar8 = local_36c;
  }
LAB_14468eb09:
  local_36c = uVar8;
  local_3f8 = 0;
  uVar44 = 1;
  iVar32 = 0;
  uVar8 = 0;
  local_3c0 = lVar43;
  if (local_100 != 0) {
    puVar17 = local_108;
    if (local_108 == (uint *)0x0) {
      puVar17 = local_118;
    }
    uVar8 = *puVar17;
    if (uVar8 == 0) {
      iVar32 = local_100 + 0x1e;
      if (-1 < (int)(local_100 - 1)) {
        iVar32 = local_100 - 1;
      }
      local_3f8 = 0;
      uVar44 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar44 = local_3f8;
      }
      iVar32 = 0;
      do {
        if (uVar44 == local_3f8) goto LAB_14468eba3;
        iVar32 = iVar32 + 0x20;
        uVar8 = puVar17[local_3f8 + 1];
        local_3f8 = local_3f8 + 1;
      } while (uVar8 == 0);
    }
    else {
      local_3f8 = 0;
    }
    uVar44 = (ulonglong)(-uVar8 & uVar8);
    uVar45 = uVar44 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar45 != 0) {
      for (; uVar45 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar8 = (iVar32 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
    if ((int)local_100 <= (int)uVar8) {
      uVar8 = local_100;
    }
  }
  if (uVar8 != local_100) {
    local_498 = (LPCRITICAL_SECTION)(param_1 + 0x58);
    local_460 = param_1 + 0x40;
    local_450 = param_1 + 0x18;
    lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_408 = (int *)(lVar31 + 0xc60);
    local_430 = (undefined8 *)(lVar31 + 0x308);
    local_3e8 = 0x527800b400;
    local_3e0 = (undefined8 *)(lVar31 + 0x310);
    local_3f0 = (longlong *)(lVar31 + 0x2b8);
    uVar21 = 0xffffffff;
    do {
      local_490 = CONCAT44(local_490._4_4_,uVar21);
      lVar35 = (longlong)(int)uVar8 * 0x50;
      lVar31 = local_128 + lVar35;
      local_458 = (uint *)(lVar31 + 8);
      puVar17 = *(uint **)(lVar31 + 0x18);
      if (*(uint **)(lVar31 + 0x18) == (uint *)0x0) {
        puVar17 = local_458;
      }
      uVar8 = *(int *)(lVar31 + 0x20) + 0x1f;
      local_400 = (ulonglong)local_100;
      if (0x1f < uVar8) {
        lVar2 = local_128 + lVar35;
        local_480 = CONCAT44(local_480._4_4_,*(undefined4 *)(local_128 + lVar35));
        lVar38 = 0;
LAB_14468ee49:
        uVar30 = *puVar17;
        local_49c = iVar32;
        if (uVar30 == 0) goto code_r0x00014468ee51;
        iVar42 = 0;
        if (uVar30 != 0) {
          for (; (uVar30 >> iVar42 & 1) == 0; iVar42 = iVar42 + 1) {
          }
        }
        if (iVar42 + 1 == (int)lVar38 || *(int *)(lVar31 + 0x20) <= iVar42 - (int)lVar38)
        goto LAB_14468ee85;
        uVar36 = 0;
        if (local_2c0 != '\0') {
          uVar36 = *(undefined4 *)(local_128 + lVar35);
        }
        puVar14 = (undefined8 *)FUN_14468b6d0(lVar43,local_300,uVar36);
        local_380 = (undefined2 *)0x0;
        local_378 = *(int *)(puVar14 + 1);
        lVar43 = (longlong)local_378;
        pvVar5 = (void *)*puVar14;
        if (lVar43 == 0) {
          local_374 = 0;
        }
        else {
          FUN_1446dd670(&local_380,local_378,0);
          memcpy(local_380,pvVar5,lVar43 * 2);
        }
        if (local_2b0 != (FILE *)0x0) {
          LOCK();
          local_2b0->_cnt = local_2b0->_cnt + 1;
          UNLOCK();
        }
        local_428 = *param_4;
        local_3b0 = (longlong *)param_4[1];
        if (local_3b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
          UNLOCK();
        }
        iVar22 = 1 << ((byte)local_480 & 0x1f);
        uVar44 = (longlong)
                 ((ulonglong)(uint)((longlong)local_2fc >> 0x3f) << 0x20 | local_2fc >> 0x20) /
                 (longlong)iVar22;
        local_478 = (uint *)(uVar44 & 0xffffffff);
        iVar42 = (int)((longlong)
                       ((ulonglong)(uint)((int)local_2fc >> 0x1f) << 0x20 | local_2fc & 0xffffffff)
                      / (longlong)iVar22);
        iVar32 = (int)uVar44;
        if ((char)local_320 == '\0') {
          lVar43 = (longlong)iStack_328 * (longlong)(iVar42 * iVar32);
          iVar32 = iVar32 * 8;
        }
        else {
          local_4a8 = (FILE *)CONCAT44(local_4a8._4_4_,iStack_31c / iVar22);
          lVar43 = (longlong)iStack_328 * (longlong)(iVar42 * iVar32);
          iVar32 = (iStack_318 / iVar22) * (iStack_31c / iVar22) * 0x14;
        }
        local_420 = (longlong)iVar32 + lVar43 * 2;
        local_c8 = 0;
        local_b8 = &PTR_LAB_14bef19b0;
        local_d8 = FUN_1446965b8;
        local_3c8 = local_2b8;
        local_b0 = param_1;
        local_a8 = local_420;
        FUN_1498cd832(local_2b8,&local_1c0,local_480 & 0xffffffff,&local_d8);
        local_440 = *(ulonglong *)&local_1c0->_cnt;
        plVar18 = (longlong *)FUN_14054d1d4();
        puVar27 = &DAT_149dfb77a;
        if (local_378 != 0) {
          puVar27 = local_380;
        }
        cVar7 = (**(code **)(*plVar18 + 0x48))(plVar18,puVar27);
        local_4a8 = (FILE *)((ulonglong)local_4a8 & 0xffffffff00000000);
        pFVar23 = local_2b0;
        if (cVar7 == '\0') goto LAB_14468f14b;
        local_438 = local_2b0;
        local_1d8 = (void *)0x0;
        uStack_1d0 = 0;
        if ((char)local_320 == '\x01') {
          local_1e8 = (FILE *)0x0;
          pcStack_1e0 = (char *)0x0;
          local_46c = uVar40;
          cVar7 = FUN_1498cda56(local_428 + 0x18,local_480 & 0xffffffff,local_458,&local_1e8);
          if (cVar7 == '\0') {
            FUN_1498c7598(local_458,&local_198,0);
            if (local_1e8 != (FILE *)0x0) {
              FUN_1400020a8();
            }
            local_1e8 = local_198;
            pcStack_1e0 = (char *)auStack_190;
            iVar32 = auStack_190._0_4_;
          }
          else {
            iVar32 = (int)pcStack_1e0;
          }
          if (iVar32 == 0) {
            puVar17 = *(uint **)(lVar2 + 0x18);
            if (puVar17 == (uint *)0x0) {
              puVar17 = local_458;
            }
            iVar32 = *(int *)(lVar2 + 0x20);
            uVar8 = iVar32 + 0x1f;
            if (uVar8 < 0x20) goto LAB_14468f85c;
            lVar43 = 0;
            while (uVar21 = *puVar17, uVar21 == 0) {
              lVar43 = lVar43 + -0x20;
              puVar17 = puVar17 + 1;
              if ((ulonglong)(uVar8 & 0xffffffe0) + lVar43 == 0) goto LAB_14468f85c;
            }
            iVar42 = 0;
            if (uVar21 != 0) {
              for (; (uVar21 >> iVar42 & 1) == 0; iVar42 = iVar42 + 1) {
              }
            }
            if (iVar32 <= iVar42 - (int)lVar43) goto LAB_14468f85c;
            local_4a8 = (FILE *)CONCAT44(local_4a8._4_4_,3);
            if (iVar42 + 1 == (int)lVar43) goto LAB_14468f85c;
          }
          else {
LAB_14468f85c:
            local_188 = (FILE **)0x0;
            pcStack_180 = (char *)0x0;
            local_198 = (FILE *)0x0;
            auStack_190 = (undefined1  [8])0x0;
            uVar45 = local_2fc >> 0x20;
            iVar42 = (int)local_2fc;
            uVar44 = local_2fc & 0xffffffff;
            lVar43 = (longlong)local_2fc >> 0x3f;
            fVar49 = (float)local_2f4._4_4_;
            fVar48 = (float)(int)local_2f4;
            local_228 = (FILE *)0x0;
            pFStack_220 = (FILE *)0x0;
            iVar32 = 1;
            if (local_2c0 == '\0') {
              iVar32 = local_2c8;
            }
            local_4b0 = (longlong)local_2c4;
            local_4b8 = (FILE **)CONCAT44(local_4b8._4_4_,iVar32);
            FUN_144688e68(&local_228,local_2d8,&local_2fc,&local_2f4);
            puVar27 = local_380;
            local_1a8 = (void *)0x0;
            lVar31 = (longlong)local_378;
            local_1a0 = local_378;
            if (lVar31 == 0) {
              local_19c = 0;
            }
            else {
              FUN_1446dd670(&local_1a8,local_378,0);
              memcpy(local_1a8,puVar27,lVar31 * 2);
            }
            cVar7 = FUN_144689178(&local_198,&local_1a8,&local_228);
            local_4a8 = (FILE *)((ulonglong)local_4a8 & 0xffffffff00000000);
            if (cVar7 != '\0') {
              local_1b0 = 0;
              uVar40 = 1;
              if ((longlong)(int)pcStack_1e0 != 0) {
                fVar49 = (float)(int)((longlong)((ulonglong)(uint)lVar43 << 0x20 | uVar45) /
                                     (longlong)iVar22) / fVar49;
                local_488 = (LPCRITICAL_SECTION)
                            CONCAT44(local_488._4_4_,-((int)ROUND(-0.5 - (fVar49 + fVar49)) >> 1));
                fVar48 = (float)(int)((longlong)((ulonglong)(uint)(iVar42 >> 0x1f) << 0x20 | uVar44)
                                     / (longlong)iVar22) / fVar48;
                local_448 = CONCAT44(local_448._4_4_,-((int)ROUND(-0.5 - (fVar48 + fVar48)) >> 1));
                local_3d0 = &local_1e8->_ptr + (longlong)(int)pcStack_1e0 * 2;
                pFVar23 = local_1e8;
                uVar40 = 1;
                do {
                  local_414 = *(uint *)&pFVar23->field_0xc;
                  if ((int)(uint)local_488 <= (int)*(uint *)&pFVar23->field_0xc) {
                    local_414 = (uint)local_488;
                  }
                  local_40c = pFVar23->_cnt;
                  local_410 = (int)local_448;
                  if (local_40c < (int)local_448) {
                    local_410 = local_40c;
                  }
                  uVar8 = *(uint *)((longlong)&pFVar23->_ptr + 4);
                  if ((int)uVar8 < 1) {
                    uVar8 = 0;
                  }
                  uVar21 = *(uint *)&pFVar23->_ptr;
                  if ((int)*(uint *)&pFVar23->_ptr < 1) {
                    uVar21 = 0;
                  }
                  local_3a8 = (ulonglong)uVar21;
                  local_3b8 = pFVar23;
                  if ((int)uVar8 < (int)local_414) {
                    do {
                      local_418 = uVar40;
                      EnterCriticalSection(local_498);
                      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
                        LeaveCriticalSection(local_498);
                      }
                      else {
                        lVar43 = *(longlong *)(param_1 + 0x48);
                        if (*(longlong *)(param_1 + 0x48) == 0) {
                          lVar43 = local_460;
                        }
                        piVar28 = (int *)(lVar43 + ((longlong)*(int *)(param_1 + 0x50) - 1U &
                                                   (longlong)local_300) * 4);
                        iVar32 = 0;
                        do {
                          iVar42 = *piVar28;
                          lVar43 = (longlong)iVar42;
                          if (lVar43 == -1) break;
                          piVar3 = (int *)(*(longlong *)(param_1 + 8) + lVar43 * 0xc);
                          iVar22 = *piVar3;
                          if (iVar22 == local_300) {
                            lVar31 = *(longlong *)(param_1 + 0x48);
                            if (*(longlong *)(param_1 + 0x48) == 0) {
                              lVar31 = local_460;
                            }
                            iVar20 = *(int *)(lVar31 + (longlong)piVar3[2] * 4);
                            if (iVar20 == iVar42) {
                              piVar34 = (int *)(lVar31 + (longlong)piVar3[2] * 4);
                            }
                            else {
                              do {
                                piVar34 = (int *)(*(longlong *)(param_1 + 8) +
                                                  (longlong)iVar20 * 0xc + 4);
                                iVar20 = *piVar34;
                              } while (iVar20 != iVar42);
                            }
                            *piVar34 = piVar3[1];
                            lVar31 = *(longlong *)(param_1 + 8);
                            if (*(int *)(param_1 + 0x3c) != 0) {
                              *(int *)(lVar31 + (longlong)*(int *)(param_1 + 0x38) * 0xc) = iVar42;
                            }
                            *(undefined4 *)(lVar31 + lVar43 * 0xc) = 0xffffffff;
                            uVar40 = 0xffffffff;
                            if (0 < *(int *)(param_1 + 0x3c)) {
                              uVar40 = *(undefined4 *)(param_1 + 0x38);
                            }
                            *(undefined4 *)(lVar31 + lVar43 * 0xc + 4) = uVar40;
                            *(int *)(param_1 + 0x38) = iVar42;
                            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
                            lVar43 = *(longlong *)(param_1 + 0x28);
                            if (*(longlong *)(param_1 + 0x28) == 0) {
                              lVar43 = local_450;
                            }
                            iVar20 = iVar42 + 0x1f;
                            if (-1 < iVar42) {
                              iVar20 = iVar42;
                            }
                            bVar6 = (byte)iVar42 & 0x1f;
                            puVar17 = (uint *)(lVar43 + (longlong)(iVar20 >> 5) * 4);
                            *puVar17 = *puVar17 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
                            iVar32 = iVar32 + 1;
                          }
                          else {
                            piVar28 = piVar3 + 1;
                          }
                        } while (iVar22 != local_300);
                        LeaveCriticalSection(local_498);
                        if (0 < iVar32) {
                          local_4a8 = (FILE *)CONCAT44(local_4a8._4_4_,2);
                          goto LAB_14468fe85;
                        }
                      }
                      bVar46 = (int)local_448 <= local_40c;
                      iVar32 = uVar8 * (int)local_448;
                      local_478 = (uint *)CONCAT44(local_478._4_4_,uVar8 + 1);
                      bVar47 = uVar8 + 1 == (uint)local_488;
                      iVar42 = iVar32 + (int)local_3a8;
                      local_4a8 = (FILE *)((ulonglong)local_4a8 & 0xffffffff00000000);
                      uVar44 = local_480 & 0xffffffff;
                      if (local_2c0 != '\0') {
                        uVar44 = 0;
                      }
                      iVar22 = (int)uVar44;
                      FUN_1446892f8(&local_198,iVar42,uVar44,&local_1b0);
                      lVar43 = local_1b0;
                      if ((int)pcStack_180 <= iVar22) goto LAB_14468fe85;
                      iVar20 = *(int *)(local_188 + (longlong)iVar22 * 2 + 1);
                      if (iVar20 < iVar42) goto LAB_14468fe85;
                      if (iVar20 == iVar42) {
                        pFVar23 = (FILE *)auStack_190;
                        if (iVar22 + 1 < (int)pcStack_180) {
                          pFVar23 = local_188[(longlong)(iVar22 + 1) * 2];
                        }
                      }
                      else {
                        pFVar23 = (FILE *)(&local_188[(longlong)iVar22 * 2]->_ptr + iVar42);
                      }
                      iVar32 = iVar32 + local_410;
                      if (iVar20 < iVar32) goto LAB_14468fe85;
                      if (iVar20 == iVar32) {
                        pFVar39 = (FILE *)auStack_190;
                        if (iVar22 + 1 < (int)pcStack_180) {
                          pFVar39 = local_188[(longlong)(iVar22 + 1) * 2];
                        }
                      }
                      else {
                        pFVar39 = (FILE *)(&local_188[(longlong)iVar22 * 2]->_ptr + iVar32);
                      }
                      if (bVar47 && bVar46) {
                        sVar33 = (longlong)pFVar39->_ptr - (longlong)pFVar23->_ptr;
                        if (local_420 - local_1b0 <= (longlong)sVar33) {
                          sVar33 = local_420 - local_1b0;
                        }
                      }
                      else {
                        sVar33 = (longlong)pFVar39->_ptr - (longlong)pFVar23->_ptr;
                      }
                      if ((((void *)(local_440 + local_1b0) == (void *)0x0) ||
                          (local_198 == (FILE *)0x0)) ||
                         (sVar15 = fread((void *)(local_440 + local_1b0),sVar33,1,local_198),
                         uVar44 = uStack_1d0, sVar15 != 1)) goto LAB_14468fe85;
                      lVar31 = (longlong)(int)uStack_1d0;
                      uVar8 = (int)uStack_1d0 + 1;
                      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar8);
                      if (uStack_1d0._4_4_ < uVar8) {
                        FUN_1498d5b02(&local_1d8,uVar44 & 0xffffffff);
                      }
                      *(longlong *)((longlong)local_1d8 + lVar31 * 0x10) = lVar43;
                      *(size_t *)((longlong)local_1d8 + lVar31 * 0x10 + 8) = sVar33;
                      uVar8 = (uint)local_478;
                      uVar40 = local_418;
                    } while ((uint)local_478 != local_414);
                    local_4a8 = (FILE *)CONCAT44(local_4a8._4_4_,local_418);
                  }
                  else {
                    local_4a8 = (FILE *)CONCAT44(local_4a8._4_4_,uVar40);
                  }
LAB_14468fe85:
                  pFVar23 = (FILE *)&local_3b8->_base;
                  uVar40 = (int)local_4a8;
                } while (pFVar23 != (FILE *)local_3d0);
              }
              cVar7 = FUN_14468933e(&local_198);
              if (cVar7 == '\0') {
                uVar40 = 0;
              }
              local_4a8 = (FILE *)CONCAT44(local_4a8._4_4_,uVar40);
            }
            if (local_228 != (FILE *)0x0) {
              FUN_1400020a8();
            }
            FUN_1498c6ee6(local_188);
            if (local_188 != (FILE **)0x0) {
              FUN_1400020a8();
            }
            if ((longlong)(int)pcStack_1e0 != 0) {
              lVar43 = 0;
              do {
                LOCK();
                *(int *)(local_428 + 0x90) =
                     *(int *)(local_428 + 0x90) +
                     (*(int *)(&local_1e8->field_0xc + lVar43) -
                     *(int *)((longlong)&local_1e8->_ptr + lVar43 + 4)) *
                     (*(int *)((longlong)&local_1e8->_cnt + lVar43) -
                     *(int *)((longlong)&local_1e8->_ptr + lVar43));
                UNLOCK();
                lVar43 = lVar43 + 0x10;
              } while ((longlong)(int)pcStack_1e0 * 0x10 != lVar43);
            }
          }
          if (local_1e8 != (FILE *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_14468f566;
        }
        local_488 = (LPCRITICAL_SECTION)(longlong)local_300;
        local_188 = (FILE **)0x0;
        pcStack_180 = (char *)0x0;
        local_198 = (FILE *)0x0;
        auStack_190 = (undefined1  [8])0x0;
        local_228 = (FILE *)0x0;
        pFStack_220 = (FILE *)&DAT_00000001;
        local_46c = uVar40;
        FUN_1446f48e2(&local_228,0);
        puVar27 = local_380;
        *(int *)&local_228->_ptr = (int)local_478;
        local_1a8 = (void *)0x0;
        lVar43 = (longlong)local_378;
        local_1a0 = local_378;
        if (lVar43 == 0) {
          local_19c = 0;
        }
        else {
          FUN_1446dd670(&local_1a8,local_378,0);
          memcpy(local_1a8,puVar27,lVar43 * 2);
        }
        cVar7 = FUN_144689178(&local_198,&local_1a8,&local_228);
        local_4a8 = (FILE *)((ulonglong)local_4a8 & 0xffffffff00000000);
        if (cVar7 == '\0') goto LAB_14468f51f;
        if ((int)local_420 < -15999999) goto LAB_14468f4ff;
        local_448 = (ulonglong)(uint)((int)local_420 / 16000000);
        local_478 = (uint *)(ulonglong)(uint)((int)local_420 % 16000000);
        uVar8 = 0;
        iVar32 = 0;
        p_Var37 = local_488;
        goto LAB_14468f691;
      }
LAB_14468ee85:
      uVar21 = uVar21 & ~(uint)uVar44;
      puVar17 = local_108;
      if (local_108 == (uint *)0x0) {
        puVar17 = local_118;
      }
      iVar42 = (int)local_3f8;
      lVar31 = (longlong)iVar42;
      uVar8 = puVar17[lVar31] & uVar21;
      if (uVar8 == 0) {
        iVar22 = local_100 + 0x1e;
        if (-1 < (int)(local_100 - 1)) {
          iVar22 = local_100 - 1;
        }
        iVar22 = iVar22 >> 5;
        iVar32 = iVar32 + 0x20;
        iVar20 = iVar22;
        if (iVar22 < iVar42) {
          iVar20 = iVar42;
        }
        if (iVar42 < iVar22) {
          lVar35 = 0;
          do {
            uVar8 = puVar17[lVar31 + lVar35 + 1];
            if (uVar8 != 0) {
              local_3f8 = (ulonglong)(iVar42 + (int)lVar35 + 1);
              uVar21 = 0xffffffff;
              goto LAB_14468ef0a;
            }
            iVar32 = iVar32 + 0x20;
            lVar35 = lVar35 + 1;
          } while (iVar20 - lVar31 != lVar35);
          uVar21 = 0xffffffff;
          iVar42 = iVar20;
        }
        local_3f8 = (ulonglong)(iVar42 + 1);
        param_4 = local_468;
        uVar8 = local_100;
      }
      else {
LAB_14468ef0a:
        uVar44 = (ulonglong)(-uVar8 & uVar8);
        uVar45 = uVar44 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar45 != 0) {
          for (; uVar45 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        uVar8 = (iVar32 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if ((int)local_100 <= (int)uVar8) {
          uVar8 = local_100;
        }
      }
    } while (uVar8 != local_100);
  }
LAB_14468eba3:
  local_488 = (LPCRITICAL_SECTION)(*param_4 + 0x18);
  EnterCriticalSection(local_488);
  lVar43 = *param_4;
  puVar17 = (uint *)(lVar43 + 0x50);
  uVar8 = *(uint *)(lVar43 + 0x68);
  uVar44 = (ulonglong)uVar8;
  if (uVar8 == 0) {
    p_Var37 = (LPCRITICAL_SECTION)&DAT_00000001;
    uVar45 = 0;
    iVar32 = 0;
    uVar21 = 0;
  }
  else {
    puVar13 = *(uint **)(lVar43 + 0x60);
    if (*(uint **)(lVar43 + 0x60) == (uint *)0x0) {
      puVar13 = puVar17;
    }
    uVar21 = *puVar13;
    if (uVar21 == 0) {
      iVar32 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar32 = uVar8 - 1;
      }
      uVar45 = 0;
      uVar29 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar29 = uVar45;
      }
      iVar32 = 0;
      do {
        if (uVar29 == uVar45) goto LAB_14468ec47;
        iVar32 = iVar32 + 0x20;
        uVar21 = puVar13[uVar45 + 1];
        uVar45 = uVar45 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar45 = 0;
      iVar32 = 0;
    }
    p_Var37 = (LPCRITICAL_SECTION)(ulonglong)(-uVar21 & uVar21);
    uVar29 = (longlong)p_Var37 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar21 = (iVar32 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar21) {
      uVar21 = uVar8;
    }
  }
  if (uVar21 != uVar8) {
    uVar8 = 0xffffffff;
    local_4a8 = local_2b8;
    local_478 = puVar17;
    local_46c = uVar40;
    local_450 = lVar43;
    local_440 = uVar44;
    do {
      local_460 = CONCAT44(local_460._4_4_,uVar8);
      lVar31 = *(longlong *)(lVar43 + 0x40);
      uVar40 = *(undefined4 *)(lVar31 + (longlong)(int)uVar21 * 0x50);
      local_d8 = (code *)CONCAT44(local_d8._4_4_,uVar40);
      local_49c = iVar32;
      local_498 = p_Var37;
      local_480 = uVar45;
      cVar7 = FUN_1498cde00(local_4a8,uVar40);
      if (cVar7 != '\0') {
        iVar32 = 1 << ((byte)uVar40 & 0x1f);
        uVar44 = (longlong)
                 ((ulonglong)(uint)((int)local_2fc >> 0x1f) << 0x20 | local_2fc & 0xffffffff) /
                 (longlong)iVar32 & 0xffffffff;
        lVar35 = (longlong)
                 ((ulonglong)(uint)((longlong)local_2fc >> 0x3f) << 0x20 | local_2fc >> 0x20) /
                 (longlong)iVar32;
        uVar8 = (uint)lVar35;
        plVar18 = (longlong *)FUN_1498d6460(local_2e8,&local_d8);
        FUN_1498c7598(lVar31 + (longlong)(int)uVar21 * 0x50 + 8,&local_198,0);
        pFVar23 = local_198;
        lVar31 = (longlong)(int)auStack_190._0_4_;
        if (lVar31 != 0) {
          puVar17 = (uint *)(uVar44 + (lVar35 << 0x20));
          lVar35 = 0;
          local_490 = uVar44;
          local_458 = puVar17;
          do {
            if ((char)local_320 == '\x01') {
              uVar21 = *(int *)((longlong)&pFVar23->_ptr + lVar35 + 4) * local_2f4._4_4_;
              uVar25 = *(int *)((longlong)&pFVar23->_ptr + lVar35) * (int)local_2f4;
              uVar30 = local_2f4._4_4_ * *(int *)(&pFVar23->field_0xc + lVar35);
              uVar11 = (int)local_2f4 * *(int *)((longlong)&pFVar23->_cnt + lVar35);
              uVar29 = (ulonglong)uVar25;
              if ((int)uVar25 < (int)DAT_14c967818) {
                uVar29 = DAT_14c967818 & 0xffffffff;
              }
              uVar25 = (uint)(DAT_14c967818 >> 0x20);
              if ((int)uVar21 < (int)uVar25) {
                uVar21 = uVar25;
              }
              uVar45 = (ulonglong)uVar21 << 0x20 | uVar29;
              if ((int)(uint)uVar44 <= (int)uVar11) {
                uVar11 = (uint)uVar44;
              }
              if ((int)uVar8 <= (int)uVar30) {
                uVar30 = uVar8;
              }
              uVar19 = (ulonglong)uVar11;
              if ((int)uVar11 <= (int)uVar29) {
                uVar19 = uVar29;
              }
              if ((int)uVar30 <= (int)uVar21) {
                uVar30 = uVar21;
              }
              puVar13 = (uint *)((ulonglong)uVar30 << 0x20 | uVar19);
            }
            else {
              uVar45 = 0;
              puVar13 = puVar17;
            }
            iVar32 = (int)plVar18[1];
            *(uint *)(plVar18 + 1) = iVar32 + 1U;
            if (*(uint *)((longlong)plVar18 + 0xc) < iVar32 + 1U) {
              FUN_145a1a3ae(plVar18,iVar32);
              uVar44 = local_490;
              puVar17 = local_458;
            }
            lVar43 = *plVar18;
            *(ulonglong *)(lVar43 + (longlong)iVar32 * 0x10) = uVar45;
            *(uint **)(lVar43 + 8 + (longlong)iVar32 * 0x10) = puVar13;
            lVar35 = lVar35 + 0x10;
            param_4 = local_468;
            lVar43 = local_450;
          } while (lVar31 * 0x10 != lVar35);
        }
        uVar44 = local_440;
        puVar17 = local_478;
        if (local_198 != (FILE *)0x0) {
          FUN_1400020a8(local_198);
        }
      }
      uVar8 = (uint)local_460 & ~(uint)local_498;
      puVar13 = *(uint **)(lVar43 + 0x60);
      if (*(uint **)(lVar43 + 0x60) == (uint *)0x0) {
        puVar13 = puVar17;
      }
      uVar30 = *(uint *)(lVar43 + 0x68);
      iVar42 = (int)local_480;
      lVar31 = (longlong)iVar42;
      uVar21 = puVar13[lVar31] & uVar8;
      uVar45 = local_480;
      iVar32 = local_49c;
      if (uVar21 == 0) {
        iVar22 = uVar30 + 0x1e;
        if (-1 < (int)(uVar30 - 1)) {
          iVar22 = uVar30 - 1;
        }
        iVar22 = iVar22 >> 5;
        iVar32 = local_49c + 0x20;
        iVar20 = iVar22;
        if (iVar22 < iVar42) {
          iVar20 = iVar42;
        }
        if (iVar42 < iVar22) {
          lVar35 = 0;
          do {
            uVar21 = puVar13[lVar31 + lVar35 + 1];
            if (uVar21 != 0) {
              uVar45 = (ulonglong)(iVar42 + (int)lVar35 + 1);
              uVar8 = 0xffffffff;
              goto LAB_144690790;
            }
            iVar32 = iVar32 + 0x20;
            lVar35 = lVar35 + 1;
          } while (iVar20 - lVar31 != lVar35);
          uVar8 = 0xffffffff;
          iVar42 = iVar20;
        }
        uVar45 = (ulonglong)(iVar42 + 1);
        param_4 = local_468;
        p_Var37 = local_498;
        lVar43 = local_450;
        uVar21 = uVar30;
      }
      else {
LAB_144690790:
        p_Var37 = (LPCRITICAL_SECTION)(ulonglong)(-uVar21 & uVar21);
        uVar29 = (longlong)p_Var37 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        uVar21 = (iVar32 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if ((int)uVar30 <= (int)uVar21) {
          uVar21 = uVar30;
        }
      }
    } while (uVar21 != (uint)uVar44);
  }
LAB_14468ec47:
  if (local_488 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_488);
  }
  local_e0 = 0;
  if (local_e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145a36c6e(&local_128);
  plVar18 = local_3d8;
  LOCK();
  *(uint *)(*param_4 + 0x10) = 0xd - (uint)(CONCAT44(uStack_324,iStack_328) < 4);
  UNLOCK();
  LOCK();
  *(int *)(*param_4 + 0x94) = local_2c4 * (int)local_2fc;
  UNLOCK();
  FUN_1498cde8a(local_2b8);
  local_3a0 = local_2b8;
  local_398 = local_2b0;
  if (local_2b0 != (FILE *)0x0) {
    LOCK();
    local_2b0->_cnt = local_2b0->_cnt + 1;
    UNLOCK();
  }
  FUN_1498cdec4(&local_3a0);
  uVar44 = CONCAT71((int7)((ulonglong)local_2b8 >> 8),1);
LAB_14468ecff:
  FUN_1498cdf8c(&local_368);
  if (local_2b0 != (FILE *)0x0) {
    LOCK();
    piVar28 = &local_2b0->_cnt;
    *piVar28 = *piVar28 + -1;
    UNLOCK();
    if (*piVar28 == 0) {
      (**(code **)local_2b0->_ptr)(local_2b0);
      LOCK();
      puVar26 = &local_2b0->field_0xc;
      *(int *)puVar26 = *(int *)puVar26 + -1;
      UNLOCK();
      if (*(int *)puVar26 == 0) {
        (**(code **)(local_2b0->_ptr + 0x10))(local_2b0);
      }
    }
  }
LAB_14468e80d:
  if (local_290 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_2a8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14468e735:
  LOCK();
  plVar1 = plVar18 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar18)(plVar18);
    LOCK();
    piVar28 = (int *)((longlong)plVar18 + 0xc);
    *piVar28 = *piVar28 + -1;
    UNLOCK();
    if (*piVar28 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
LAB_14468e756:
  plVar18 = (longlong *)param_4[1];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar28 = (int *)((longlong)plVar18 + 0xc);
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return uVar44 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446908f4 FUN_1446908f4 body=205 status=ok
// SIG undefined FUN_1446908f4(void)

void FUN_1446908f4(longlong *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  if (*(char *)(param_3 + 0x48) == '\0') {
    iVar5 = *(int *)(param_3 + 0x10) * *(int *)(param_3 + 0x14);
    iVar6 = *(int *)(param_3 + 0x14) << 3;
  }
  else {
    iVar5 = *(int *)(param_3 + 0x14) * *(int *)(param_3 + 0x10);
    iVar6 = *(int *)(param_3 + 0x4c) * *(int *)(param_3 + 0x50) * 0x14;
  }
  if (0 < param_2) {
    do {
      (**(code **)(*param_1 + 0x38))(param_1,local_40,iVar6 + (int)uVar3 * iVar5 * 2);
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
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446909c2 FUN_1446909c2 body=1911 status=ok
// SIG undefined FUN_1446909c2(void)

longlong * FUN_1446909c2(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  longlong local_a8;
  undefined8 *local_a0;
  longlong *plStack_98;
  uint local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  longlong *plStack_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar18 = *(longlong *)(param_1 + 0xe0);
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf0);
  *param_2 = 0;
  param_2[1] = 0;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    lVar8 = param_1 + 0x150;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x158);
    }
    uVar14 = *(uint *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x160) - 1U & param_3) * 4);
    if (uVar14 != 0xffffffff) {
      do {
        puVar13 = (uint *)(*(longlong *)(param_1 + 0x118) + (longlong)(int)uVar14 * 0x18);
        if (*puVar13 == param_3) {
          puVar16 = puVar13 + 2;
          if (puVar16 != (uint *)0x0 && puVar13 != (uint *)0x0) {
            local_a8 = *(longlong *)puVar16;
            plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
            lVar8 = local_a8;
            plVar11[2] = lVar18;
            plVar11[3] = (longlong)plVar3;
            *(uint *)(plVar11 + 4) = param_3;
            plVar11[1] = (longlong)&DAT_100000001;
            *plVar11 = (longlong)&PTR_FUN_14bef1bb0;
            plVar11[5] = local_a8;
            *param_2 = local_a8;
            if (plVar11 != (longlong *)0x0) {
              param_2[1] = (longlong)plVar11;
            }
            FUN_1498ce076((longlong *)(param_1 + 0x118),param_3,*(undefined8 *)puVar16);
            LeaveCriticalSection(lpCriticalSection);
            if (lVar8 != 0) goto LAB_144690d4f;
            plVar19 = (longlong *)0x0;
            lVar18 = 0;
            goto LAB_144690aa3;
          }
          break;
        }
        uVar14 = puVar13[4];
      } while (uVar14 != 0xffffffff);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  plVar11 = (longlong *)0x0;
  plVar19 = plVar3;
LAB_144690aa3:
  puVar9 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar9 = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  uVar10 = FUN_1405d8a54(1);
  puVar9[4] = uVar10;
  plStack_98 = (longlong *)FUN_14001cc68(0x30,0x10);
  plStack_98[2] = lVar18;
  plStack_98[3] = (longlong)plVar19;
  *(uint *)(plStack_98 + 4) = param_3;
  plStack_98[1] = (longlong)&DAT_100000001;
  *plStack_98 = (longlong)&PTR_FUN_14bef1bb0;
  plStack_98[5] = (longlong)puVar9;
  *param_2 = (longlong)puVar9;
  if (plStack_98 == plVar11) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_98 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_98)(plStack_98);
        LOCK();
        piVar1 = (int *)((longlong)plStack_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
        plVar11 = plStack_98;
        goto joined_r0x000144690b52;
      }
      goto LAB_144690b5d;
    }
    plStack_98 = (longlong *)0x0;
    local_a0 = puVar9;
  }
  else {
    param_2[1] = (longlong)plStack_98;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar11 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
        UNLOCK();
joined_r0x000144690b52:
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
LAB_144690b5d:
      puVar9 = (undefined8 *)*param_2;
      plStack_98 = (longlong *)param_2[1];
    }
    local_a0 = puVar9;
    if (plStack_98 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_98 + 1) = (int)plStack_98[1] + 1;
      UNLOCK();
    }
  }
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar18 + 0xc60);
  local_90 = param_3;
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_144690bb4;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144690bbd;
      goto LAB_144690c77;
    }
  }
  else {
LAB_144690bb4:
    if (iVar5 != 0x10) {
LAB_144690c77:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar18 + 0xc60), iVar5 == 2))
        goto LAB_144690bbd;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_144690bbd;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar9 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar9;
        if (puVar13 != (uint *)0x0) goto LAB_144690e34;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_144696270);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar9 = puVar12;
          FUN_140217a48(puVar9);
          puVar13 = (uint *)*puVar9;
LAB_144690e34:
          puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x18);
          uVar14 = puVar13[0x12];
          if (puVar16 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar14 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar14) != 0xffffffff) break;
            puVar13 = (uint *)*puVar9;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar9 = puVar13;
            puVar17 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x18);
            uVar14 = 0;
            if (puVar16 <= puVar13 + 0x4000) {
              uVar14 = 1;
              goto LAB_144690eb4;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_144690eb4:
        *(uint **)(puVar13 + 0x10) = puVar16;
        puVar13[0x12] = uVar14;
        iVar5 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14bef1cb8;
        puVar17[0x15] = local_a0;
        puVar17[0x16] = plStack_98;
        local_a0 = (undefined8 *)0x0;
        plStack_98 = (longlong *)0x0;
        *(uint *)(puVar17 + 0x17) = local_90;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar5 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
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
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar4 = 1;
          if ((char)uVar20 != '\x06') {
            uVar4 = uVar20;
          }
          uVar20 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar17[0xf] = uVar10;
        puVar17[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar5;
        if (puVar17 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
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
        local_b8 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14bef1c70;
        local_60 = local_a0;
        plStack_58 = plStack_98;
        local_a0 = (undefined8 *)0x0;
        plStack_98 = (longlong *)0x0;
        local_88[0] = &LAB_144698ef8;
        local_50 = param_3;
        FUN_14005a792(&DAT_14ca9a440,L"CreatePooledBuffer",&DAT_14cc3171c);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_144690d28;
    }
  }
LAB_144690bbd:
  FUN_1446986b8(&local_a0,&DAT_14ca85100);
LAB_144690d28:
  plVar11 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_98 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_144690d4f:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14469113a FUN_14469113a body=479 status=ok
// SIG undefined FUN_14469113a(void)

void FUN_14469113a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *param_1;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
  }
  param_1[1] = 0;
  FUN_14018802a(param_1[4]);
  lVar4 = param_1[3];
  if (lVar4 != 0) {
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
  lVar4 = param_1[2];
  if (lVar4 != 0) {
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
  lVar4 = *param_1;
  if (lVar4 != 0) {
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



// FUNCTION 14469131a FUN_14469131a body=939 status=ok
// SIG undefined FUN_14469131a(void)

undefined8 *
FUN_14469131a(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_3 + 1) == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  uVar13 = 0;
  cVar5 = FUN_142781902(param_4,puVar11);
  if (cVar5 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  FUN_144a06df0(&local_50,param_3);
  plVar4 = local_50;
  uVar9 = local_48 - 1;
  if (local_48 == 0) {
    uVar9 = 0;
  }
  if (0 < (int)uVar9) {
    uVar10 = 0;
    do {
      uVar15 = *(ushort *)((longlong)local_50 + uVar10 * 2);
      *(ushort *)((longlong)local_50 + uVar10 * 2) = (ushort)(uVar15 - 0x41 < 0x1a) * 0x20 + uVar15;
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  plVar8 = (longlong *)&DAT_149dfb77a;
  if (local_48 != 0) {
    plVar8 = local_50;
  }
  lVar14 = 0;
  pwVar12 = L"BMP";
  while( true ) {
    uVar15 = *(ushort *)((longlong)plVar8 + lVar14);
    uVar10 = (ulonglong)uVar15;
    uVar16 = *(ushort *)((longlong)&DAT_149e31260 + lVar14);
    if (uVar15 != uVar16) break;
    if (uVar15 == 0) goto LAB_144691561;
LAB_14469140b:
    lVar14 = lVar14 + 2;
  }
  uVar13 = (ulonglong)(uint)(uVar16 | uVar15);
  if ((uVar16 | uVar15) < 0x80) {
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar17 = (ulonglong)uVar16;
    uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar17]) goto LAB_14469140b;
  }
  if (uVar15 != uVar16) {
    lVar14 = 0;
    pwVar12 = L"JPEG";
    goto LAB_14469144b;
  }
LAB_144691561:
  uVar6 = (undefined4)CONCAT71((int7)(uVar13 >> 8),3);
  goto LAB_144691564;
LAB_14469144b:
  uVar15 = *(ushort *)((longlong)plVar8 + lVar14);
  uVar10 = (ulonglong)uVar15;
  uVar16 = *(ushort *)((longlong)&DAT_149ef62fc + lVar14);
  if (uVar15 != uVar16) {
    uVar3 = uVar16 | uVar15;
    uVar13 = (ulonglong)(uint)uVar3;
    if (uVar3 < 0x80) {
      uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar17 = (ulonglong)uVar16;
      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar17]) goto LAB_144691464;
    }
    uVar6 = (undefined4)CONCAT71((uint7)(byte)(uVar3 >> 8),1);
    if (uVar15 == uVar16) goto LAB_144691564;
    lVar14 = 0;
    goto LAB_1446914a0;
  }
  if (uVar15 == 0) goto LAB_1446916bc;
LAB_144691464:
  lVar14 = lVar14 + 2;
  goto LAB_14469144b;
LAB_1446914a0:
  uVar15 = *(ushort *)((longlong)plVar8 + lVar14);
  uVar13 = (ulonglong)uVar15;
  uVar16 = *(ushort *)((longlong)&DAT_149ef62f2 + lVar14);
  if (uVar15 != uVar16) {
    if ((uVar16 | uVar15) < 0x80) {
      uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar10 = (ulonglong)uVar16;
      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar10]) goto LAB_1446914b9;
    }
    if (uVar15 != uVar16) {
      lVar14 = 0;
      pwVar12 = L"PNG";
      goto LAB_1446914f6;
    }
    goto LAB_144691564;
  }
  if (uVar15 == 0) goto LAB_144691564;
LAB_1446914b9:
  lVar14 = lVar14 + 2;
  goto LAB_1446914a0;
LAB_1446916bc:
  uVar6 = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
  goto LAB_144691564;
LAB_1446914f6:
  uVar15 = *(ushort *)((longlong)plVar8 + lVar14);
  uVar13 = (ulonglong)uVar15;
  uVar16 = *(ushort *)((longlong)&DAT_149ef80e6 + lVar14);
  if (uVar15 == uVar16) {
    if (uVar15 == 0) goto LAB_1446916c4;
LAB_14469150f:
    lVar14 = lVar14 + 2;
    goto LAB_1446914f6;
  }
  if ((uVar16 | uVar15) < 0x80) {
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    uVar10 = (ulonglong)uVar16;
    uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar10]) goto LAB_14469150f;
  }
  if (uVar15 != uVar16) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_1446915ca;
  }
LAB_1446916c4:
  uVar6 = 0;
LAB_144691564:
  FUN_14020fad6(param_5 + 0x18,pwVar12);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),&local_50,uVar6,0);
  if ((local_50 == (longlong *)0x0) ||
     (cVar5 = (**(code **)*local_50)(local_50,*param_4,param_4[1]), cVar5 == '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
    plVar8 = (longlong *)CONCAT44(uStack_44,local_48);
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
  }
  else {
    plVar8 = (longlong *)FUN_145b15610();
    lVar14 = plVar8[0x22];
    if (lVar14 == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      lVar14 = plVar8[0x22];
    }
    FUN_14020fad6(param_5,&DAT_149dfb77a);
    uVar6 = (**(code **)(*local_50 + 0x40))();
    *(undefined4 *)(param_5 + 0x10) = uVar6;
    iVar7 = (**(code **)(*local_50 + 0x48))();
    *(int *)(param_5 + 0x14) = iVar7;
    *(longlong *)(param_5 + 0x38) = (longlong)iVar7 * (longlong)*(int *)(param_5 + 0x10) * 4;
    *(undefined4 *)(param_5 + 0x60) = 1;
    *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
    *(undefined1 *)(param_5 + 0x30) = 1;
    *(undefined8 *)(param_5 + 0x40) = 4;
    *(undefined1 *)(param_5 + 0x48) = 0;
    *(undefined8 *)(param_5 + 0x54) = *(undefined8 *)(param_5 + 0x10);
    *(undefined1 **)(param_5 + 0x4c) = &DAT_100000001;
    *(undefined4 *)(param_5 + 0x5c) = 0;
    *param_2 = local_50;
    param_2[1] = CONCAT44(uStack_44,local_48);
  }
LAB_1446915ca:
  if (plVar4 != (longlong *)0x0) {
    FUN_1400020a8(plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1446916cc FUN_1446916cc body=1783 status=ok
// SIG undefined FUN_1446916cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1446916cc(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int iVar21;
  undefined7 uVar23;
  ulonglong uVar22;
  uint uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_268 [32];
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 *local_228;
  int local_21c;
  int local_218;
  undefined4 local_214;
  ulonglong local_210;
  ulonglong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined1 local_1f0 [104];
  void *local_188;
  size_t sStack_180;
  undefined8 local_178;
  longlong *local_168;
  longlong *local_160;
  longlong local_158 [2];
  int local_148;
  int local_144;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_120;
  uint local_f8;
  longlong local_e8 [12];
  
  local_e8[3] = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 == (longlong *)0x0) {
LAB_14469177c:
    uVar22 = 0;
    goto LAB_14469177e;
  }
  iVar9 = (int)plVar4[1];
  do {
    if (iVar9 == 0) goto LAB_14469177c;
    LOCK();
    iVar15 = (int)plVar4[1];
    bVar25 = iVar9 == iVar15;
    if (bVar25) {
      *(int *)(plVar4 + 1) = iVar9 + 1;
      iVar15 = iVar9;
    }
    iVar9 = iVar15;
    auVar7 = _DAT_149931e80;
    UNLOCK();
  } while (!bVar25);
  lVar12 = *(longlong *)(param_1 + 0x10);
  if ((lVar12 == 0) || ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34))) {
    uVar22 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar12 + 0xf4);
    uVar23 = (undefined7)((ulonglong)param_3 >> 8);
    if (0 < (longlong)(int)uVar3) {
      iVar9 = *(int *)(lVar12 + 0x140);
      iVar15 = *(int *)(lVar12 + 0x144);
      lVar18 = (longlong)iVar15 * (longlong)iVar9;
      plVar20 = param_3 + 7;
      local_208 = (ulonglong)(lVar18 * 0x10) / 3;
      local_210 = (ulonglong)(uVar3 & 0x7ffffffe);
      lVar10 = (longlong)(int)uVar3 + -2;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = lVar18 * 4;
      auVar36._8_4_ = (int)lVar10;
      auVar36._0_8_ = lVar10;
      auVar36._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      uVar22 = lVar18 * 4;
      uVar37 = (undefined4)(lVar18 * 4);
      uVar38 = (undefined4)((ulonglong)(lVar18 * 4) >> 0x20);
      lVar10 = 0;
      auVar39 = pmovsxbq(unaff_XMM10,0x201);
      auVar40 = pmovsxbq(unaff_XMM11,0x202);
      auVar41 = pmovsxbq(unaff_XMM12,0x100);
      auVar36 = auVar36 ^ _DAT_149931e80;
      uVar24 = 0;
      local_240 = param_4;
      local_230 = plVar20;
      local_21c = iVar15;
      local_218 = iVar9;
      local_214 = param_2;
      local_200 = lVar12;
      local_1f8 = param_1;
LAB_1446918fa:
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar13 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar13 = plVar20;
        }
        iVar16 = *(int *)((longlong)plVar13 +
                         (ulonglong)((int)param_3[9] + 0x7fffffffU & uVar24) * 4);
        if (iVar16 != -1) {
          lVar12 = *param_3;
          iVar21 = iVar16;
          do {
            if (*(uint *)(lVar12 + (longlong)iVar21 * 0x50) == uVar24) goto LAB_144691973;
            iVar21 = *(int *)((longlong)iVar21 * 0x50 + lVar12 + 0x48);
          } while (iVar21 != -1);
        }
      }
      goto LAB_14469193f;
    }
    uVar22 = CONCAT71(uVar23,1);
  }
  goto LAB_144691d96;
  while (iVar16 = *(int *)(lVar18 + 0x48), iVar16 != -1) {
LAB_144691973:
    lVar18 = lVar12 + (longlong)iVar16 * 0x50;
    if (*(uint *)(lVar12 + (longlong)iVar16 * 0x50) == uVar24) goto LAB_144691995;
  }
  lVar18 = 0;
LAB_144691995:
  cVar8 = FUN_1498ce320(*local_240 + 0x18,uVar24);
  plVar20 = local_230;
  if (cVar8 != '\0') goto LAB_14469193f;
  uVar11 = FUN_14468b6d0(local_200,local_214,uVar24);
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0x10000ea60;
  local_248 = local_158;
  FUN_14469131a(local_1f8,&local_168,uVar11,local_e8);
  if (local_168 == (longlong *)0x0) {
    local_238 = (longlong *)CONCAT44(local_238._4_4_,1);
  }
  else {
    local_188 = (void *)0x0;
    sStack_180 = 0;
    local_178 = 0;
    cVar8 = (**(code **)(*local_168 + 0x38))(local_168,1,8,&local_188);
    uVar17 = 1;
    if (cVar8 != '\0') {
      lVar12 = *(longlong *)*local_240;
      if (lVar12 == 0) {
        if (uVar3 == 1) {
          uVar19 = (longlong)local_144 * (longlong)local_148 * 4;
        }
        else {
          local_148 = local_218;
          local_144 = local_21c;
          lVar12 = 2;
          auVar27 = auVar39;
          auVar32 = auVar35;
          do {
            auVar29 = auVar32;
            lVar33 = auVar27._8_8_;
            lVar2 = auVar27._0_8_ * 2;
            lVar6 = lVar33 * 2;
            auVar31._8_4_ = uVar37;
            auVar31._0_8_ = uVar22;
            auVar31._12_4_ = uVar38;
            auVar34._0_8_ = uVar22 >> lVar2;
            auVar34._8_8_ = auVar31._8_8_ >> lVar2;
            auVar5._8_4_ = uVar37;
            auVar5._0_8_ = uVar22;
            auVar5._12_4_ = uVar38;
            auVar30._0_8_ = uVar22 >> lVar6;
            auVar30._8_8_ = auVar5._8_8_ >> lVar6;
            auVar31 = pblendw(auVar30,auVar34,0xf);
            auVar32._0_8_ = auVar31._0_8_ + auVar29._0_8_;
            auVar32._8_8_ = auVar31._8_8_ + auVar29._8_8_;
            auVar27._0_8_ = auVar27._0_8_ + auVar40._0_8_;
            auVar27._8_8_ = lVar33 + auVar40._8_8_;
            lVar2 = local_210 + lVar12;
            lVar12 = lVar12 + -2;
          } while (lVar2 != 4);
          lVar12 = -lVar12;
          auVar26._8_4_ = (int)lVar12;
          auVar26._0_8_ = lVar12;
          auVar26._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
          auVar27 = (auVar26 | auVar41) ^ auVar7;
          auVar28._0_8_ = -(ulonglong)(auVar36._0_8_ < auVar27._0_8_);
          auVar28._8_8_ = -(ulonglong)(auVar36._8_8_ < auVar27._8_8_);
          auVar27 = blendvpd(auVar32,auVar29,auVar28);
          local_120 = auVar27._8_8_ + auVar27._0_8_;
          uVar19 = local_208;
          local_f8 = uVar3;
        }
        local_238 = (longlong *)FUN_14001cc68(uVar19,0x40);
        local_228 = (undefined8 *)*local_240;
        FUN_1498cac6c(local_1f0,local_158);
        FUN_1498cabc4(local_228,local_1f0);
        local_228 = (undefined8 *)*local_240;
        plVar13 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar13[1] = (longlong)&DAT_100000001;
        *plVar13 = (longlong)&PTR_FUN_14bef1cd0;
        plVar13[2] = (longlong)local_238;
        *local_228 = local_238;
        plVar20 = (longlong *)local_228[1];
        if (plVar13 == plVar20) {
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar20 = plVar13 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              puVar14 = (undefined8 *)*plVar13;
              plVar20 = plVar13;
LAB_144691cf5:
              local_238 = plVar20;
              (*(code *)*puVar14)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)local_238 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_238 + 0x10))();
              }
            }
          }
        }
        else {
          local_228[1] = plVar13;
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar20 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              puVar14 = (undefined8 *)*plVar20;
              goto LAB_144691cf5;
            }
          }
        }
        FUN_1498cd600(*local_240 + 0x18);
        LOCK();
        *(undefined4 *)(*local_240 + 0x10) = 2;
        UNLOCK();
        LOCK();
        *(int *)(*local_240 + 0x94) = local_148 << 2;
        UNLOCK();
        lVar12 = *(longlong *)*local_240;
      }
      memcpy((void *)(lVar12 + lVar10),local_188,sStack_180);
      FUN_1498cd6e8(*local_240 + 0x18,uVar24,lVar18 + 8);
      LOCK();
      *(int *)(*local_240 + 0x90) = *(int *)(*local_240 + 0x90) + 1;
      UNLOCK();
      uVar17 = 0;
    }
    local_238 = (longlong *)CONCAT44(local_238._4_4_,uVar17);
    if (local_188 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar20 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_160 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  plVar20 = local_230;
  if ((int)local_238 != 0) {
    uVar22 = 0;
    param_4 = local_240;
    goto LAB_144691d96;
  }
LAB_14469193f:
  lVar10 = lVar10 + iVar9 * iVar15 * 4;
  iVar9 = iVar9 / 2;
  iVar15 = iVar15 / 2;
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar3) goto LAB_144691d8b;
  goto LAB_1446918fa;
LAB_144691d8b:
  uVar22 = CONCAT71(uVar23,1);
  param_4 = local_240;
LAB_144691d96:
  LOCK();
  plVar20 = plVar4 + 1;
  *(int *)plVar20 = (int)*plVar20 + -1;
  UNLOCK();
  if ((int)*plVar20 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14469177e:
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar4 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  if ((local_e8[3] ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 144691dcc FUN_144691dcc body=88 status=ok
// SIG undefined FUN_144691dcc(void)

undefined8 * FUN_144691dcc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bef11d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14beef5d0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144691e24 FUN_144691e24 body=5650 status=ok
// SIG undefined FUN_144691e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144691e24(longlong param_1,double *param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong *plVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double *pdVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  double *pdVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  longlong *plVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar51;
  undefined1 auVar50 [16];
  float fVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar58;
  double dVar59;
  undefined1 auVar57 [16];
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  double dVar72;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  double dVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  double dVar78;
  undefined1 auStack_578 [32];
  float *local_558;
  longlong local_550;
  uint local_548;
  float local_544;
  longlong *local_540;
  undefined1 local_538 [16];
  longlong *local_528;
  double dStack_520;
  longlong *local_518;
  longlong *local_508;
  double dStack_500;
  longlong local_4f8;
  uint local_4f0;
  float local_4ec;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [16];
  longlong *local_4b8;
  longlong *local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [24];
  longlong *local_3e0;
  double local_3d8;
  longlong local_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_370;
  double local_368;
  double local_360;
  uint *local_358;
  double *local_350;
  double local_348;
  float local_340;
  uint local_33c;
  double local_338;
  double local_330;
  double local_328;
  undefined1 local_2f8 [192];
  longlong local_238;
  undefined8 local_228;
  double local_218 [32];
  double *local_118;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_578;
  if ((((((*(int *)(param_1 + 0xc) != 0) && (uVar31 = *(uint *)(param_1 + 8), -1 < (int)uVar31)) &&
        ((int)uVar31 < DAT_14c9647dc)) &&
       ((plVar21 = (longlong *)
                   ((ulonglong)((uVar31 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8)),
        plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(param_1 + 0xc))))) &&
      (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 &&
       ((lVar35 = *plVar21, lVar35 != 0 && (cVar10 = FUN_140041326(lVar35), cVar10 != '\0')))))) &&
     (plVar21 = *(longlong **)(param_1 + 0x18), plVar21 != (longlong *)0x0)) {
    iVar24 = (int)plVar21[1];
    do {
      if (iVar24 == 0) goto LAB_14469332e;
      LOCK();
      iVar28 = (int)plVar21[1];
      bVar37 = iVar24 == iVar28;
      if (bVar37) {
        *(int *)(plVar21 + 1) = iVar24 + 1;
        iVar28 = iVar24;
      }
      iVar24 = iVar28;
      lVar30 = DAT_14cc31598;
      UNLOCK();
    } while (!bVar37);
    local_4b0 = plVar21;
    if ((*(longlong *)(param_1 + 0x10) != 0) && (*(int *)(param_2 + 1) != 0)) {
      local_4ec = *(float *)(*(longlong *)(param_1 + 0x10) + 8);
      iVar24 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      local_550 = param_1;
      if ((iVar24 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar24 == 2)))) {
        uVar16 = 0;
      }
      else if (iVar24 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        uVar16 = (ulonglong)(DVar12 != DVar13);
      }
      else {
        uVar16 = 1;
      }
      fVar38 = *(float *)(lVar30 + uVar16 * 4);
      local_540 = (longlong *)(local_550 + 0x38);
      iVar28 = (*(int *)(param_3 + 0x18) + 1) * (*(int *)(param_3 + 0x14) + 1);
      iVar24 = *(int *)(local_550 + 0x40);
      if (iVar24 < iVar28) {
        *(int *)(local_550 + 0x40) = iVar28;
        if ((uint)(*(int *)(local_550 + 0x44) - iVar24) < (uint)(iVar28 - iVar24)) {
          FUN_14475e4ac(local_540);
        }
        memset((void *)((longlong)iVar24 * 4 + *local_540),0,(longlong)(iVar28 - iVar24) << 2);
      }
      else {
        if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar28);
        }
        if (iVar28 < iVar24) {
          *(int *)(local_550 + 0x40) = iVar28;
          FUN_1401fef06(local_540);
        }
      }
      auVar9 = _DAT_149931e80;
      if ((longlong)*(int *)(param_2 + 1) != 0) {
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        dVar7 = *(double *)(lVar35 + 0x240);
        dVar8 = *(double *)(lVar35 + 0x248);
        auVar66 = *(undefined1 (*) [16])(lVar35 + 0x250);
        dVar56 = auVar66._0_8_;
        dVar4 = auVar66._8_8_;
        dVar75 = *(double *)(lVar35 + 0x280);
        dStack_4a0 = *(double *)(lVar35 + 0x288);
        local_3c8 = *(double *)(lVar35 + 0x290);
        dStack_3c0 = *(double *)(lVar35 + 0x298);
        dVar59 = *(double *)(local_550 + 0x28);
        dVar53 = dVar75 * 0.0;
        dStack_500 = dVar59 * -0.5 * dStack_4a0;
        dVar41 = *(double *)(local_550 + 0x30) * 0.5 * local_3c8;
        dVar49 = *(double *)(lVar35 + 600);
        dStack_430 = *(double *)(lVar35 + 600);
        uVar73 = SUB84(dStack_430,0);
        uVar74 = (undefined4)((ulonglong)dStack_430 >> 0x20);
        local_4c8._8_4_ = uVar73;
        local_4c8._0_8_ = dVar49;
        local_4c8._12_4_ = uVar74;
        local_4d8 = dStack_500 * dVar7 - dVar8 * dVar53;
        dVar69 = dVar41 * dVar8 - dVar56 * dStack_500;
        dVar46 = dVar53 * dVar56 - dVar7 * dVar41;
        dStack_4d0 = dStack_3c0 * 0.0 * dVar4 - dVar4 * dStack_3c0 * 0.0;
        dVar69 = dVar69 + dVar69;
        dVar46 = dVar46 + dVar46;
        auVar50._8_4_ = SUB84(dVar46,0);
        auVar50._0_8_ = dVar69;
        auVar50._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        local_4d8 = local_4d8 + local_4d8;
        dStack_4d0 = dStack_4d0 + dStack_4d0;
        dVar54 = dVar75 * 0.0;
        dVar58 = dVar59 * dStack_4a0;
        dVar47 = local_3c8 * 0.0;
        dVar60 = dVar58 * dVar7 - dVar8 * dVar54;
        dVar3 = dVar47 * dVar8 - dVar56 * dVar58;
        local_538._8_4_ = auVar66._8_4_;
        local_538._0_8_ = dVar7;
        local_538._12_4_ = auVar66._12_4_;
        dVar42 = dVar54 * dVar56 - dVar7 * dVar47;
        dStack_520 = dStack_3c0 * 0.0 * dVar4 - dVar4 * dStack_3c0 * 0.0;
        dVar3 = dVar3 + dVar3;
        dVar42 = dVar42 + dVar42;
        dVar60 = dVar60 + dVar60;
        dStack_520 = dStack_520 + dStack_520;
        uVar16 = DAT_149931e80;
        dVar64 = (double)((ulonglong)*(double *)(local_550 + 0x30) ^ uVar16);
        dVar68 = dVar75 * 0.0;
        dVar72 = dStack_4a0 * 0.0;
        dVar43 = dVar64 * local_3c8;
        dVar61 = dVar68 * dVar56 - dVar7 * dVar43;
        dStack_4e0 = dStack_3c0 * 0.0 * dVar4 - dVar4 * dStack_3c0 * 0.0;
        local_498 = dVar8 * dVar68;
        dStack_490 = dVar56 * dVar72;
        local_4e8 = dVar72 * dVar7 - local_498;
        dVar5 = dVar43 * dVar8 - dStack_490;
        dVar5 = dVar5 + dVar5;
        dVar61 = dVar61 + dVar61;
        local_4e8 = local_4e8 + local_4e8;
        dStack_4e0 = dStack_4e0 + dStack_4e0;
        dStack_460 = local_4c8._8_8_;
        dVar55 = dVar75 * 0.0;
        dVar59 = (dVar59 / (double)*(int *)(param_3 + 8)) * dStack_4a0;
        dVar44 = dVar59 * dVar7 - dVar8 * dVar55;
        dVar6 = dVar47 * dVar8 - dVar56 * dVar59;
        dVar62 = dVar55 * dVar56 - dVar7 * dVar47;
        dVar6 = dVar6 + dVar6;
        dVar62 = dVar62 + dVar62;
        dVar44 = dVar44 + dVar44;
        dVar78 = (dVar64 / (double)*(int *)(param_3 + 0xc)) * local_3c8;
        dVar63 = dVar68 * dVar56 - dVar7 * dVar78;
        dVar64 = dStack_3c0 * 0.0 * dVar4 - (double)local_538._8_8_ * dStack_3c0 * 0.0;
        dVar48 = dVar72 * dVar7 - local_498;
        dVar51 = dVar78 * dVar8 - dStack_490;
        dVar51 = dVar51 + dVar51;
        dVar63 = dVar63 + dVar63;
        dVar48 = dVar48 + dVar48;
        auVar70._0_8_ = dVar48 * dVar7;
        auVar70._8_8_ = (dVar64 + dVar64) * (double)local_538._8_8_;
        local_398._8_4_ = uVar73;
        local_398._0_8_ = dVar49 * dVar48 + dVar78 + (dVar63 * dVar7 - dVar8 * dVar51);
        local_398._12_4_ = uVar74;
        local_3a8._8_8_ = (dVar51 * dVar56 - auVar70._0_8_) + dStack_460 * dVar63 + dVar72;
        local_388 = dVar49 * dVar44 + dVar47 + (dVar62 * dVar7 - dVar8 * dVar6);
        dVar78 = (dVar6 * dVar56 - dVar44 * dVar7) + dStack_460 * dVar62 + dVar59;
        uVar77 = (undefined4)((ulonglong)dVar78 >> 0x20);
        local_468 = dVar49 * local_4e8 + dVar43 + (dVar61 * dVar7 - dVar8 * dVar5);
        dVar64 = (dVar5 * dVar56 - local_4e8 * dVar7) + dStack_460 * dVar61 + dVar72;
        uVar76 = (undefined4)((ulonglong)dVar64 >> 0x20);
        local_458._8_4_ = uVar73;
        local_458._0_8_ = dVar49 * dVar60 + dVar47 + (dVar42 * dVar7 - dVar8 * dVar3);
        local_458._12_4_ = uVar74;
        dVar43 = (dVar3 * dVar56 - dVar60 * dVar7) + dStack_460 * dVar42 + dVar58;
        local_478._8_8_ = auVar50._8_8_;
        local_438 = dVar49 * local_4d8 + dVar41 + (dVar46 * dVar7 - dVar8 * dVar69) +
                    *(double *)(lVar35 + 0x270);
        dVar59 = *param_2;
        dVar41 = (double)((longlong)*(int *)(param_2 + 1) * 0x1a0 + (longlong)dVar59);
        auVar65._0_8_ = dVar69 * dVar56 - local_4d8 * dVar7;
        auVar65._8_8_ = (double)local_478._8_8_ * dVar4 - dStack_4d0 * (double)local_538._8_8_;
        dVar4 = auVar65._0_8_ + dStack_460 * (double)local_478._8_8_ + dStack_500 +
                *(double *)(lVar35 + 0x268);
        local_448._8_4_ = SUB84(dVar43,0);
        local_448._0_8_ = (dVar60 * dVar8 - dVar56 * dVar42) + dVar49 * dVar3 + dVar54;
        local_448._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        local_478._8_4_ = SUB84(dVar64,0);
        local_478._0_8_ = (local_4e8 * dVar8 - dVar56 * dVar61) + dVar49 * dVar5 + dVar68;
        local_478._12_4_ = uVar76;
        local_488._8_4_ = SUB84(dVar64,0);
        local_488._0_8_ = dVar64;
        local_488._12_4_ = uVar76;
        local_428._8_4_ = SUB84(dVar4,0);
        local_428._0_8_ =
             (local_4d8 * dVar8 - dVar56 * dVar46) + dVar49 * dVar69 + dVar53 +
             *(double *)(lVar35 + 0x260);
        local_428._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_3f8._8_8_ = dStack_4a0;
        local_3f8._0_8_ = dStack_4a0;
        local_418._8_8_ = local_3a8._8_8_;
        local_418._0_8_ = (dVar48 * dVar8 - dVar56 * dVar63) + dVar49 * dVar51 + dVar68;
        local_3a8._0_8_ = local_3a8._8_8_;
        local_408._8_4_ = SUB84(dVar78,0);
        local_408._0_8_ = (dVar44 * dVar8 - dVar56 * dVar62) + dVar49 * dVar6 + dVar55;
        local_408._12_4_ = uVar77;
        local_3b8._8_4_ = SUB84(dVar78,0);
        local_3b8._0_8_ = dVar78;
        local_3b8._12_4_ = uVar77;
        local_528 = param_4 + 7;
        auVar66 = pmovsxbq(auVar65,0x302);
        auVar71 = pmovsxbq(auVar70,0x100);
        lVar30 = local_550;
        local_544 = fVar38;
        local_508 = local_528;
        local_4b8 = local_528;
        local_4a8 = dVar75;
        local_3d8 = dVar41;
        local_3d0 = lVar35;
        dStack_380 = dStack_460;
        do {
          if (*(int *)((longlong)dVar59 + 0x150) != *(int *)((longlong)dVar59 + 0x17c)) {
            lVar17 = (longlong)dVar59 + 0x180;
            if (*(longlong *)((longlong)dVar59 + 0x188) != 0) {
              lVar17 = *(longlong *)((longlong)dVar59 + 0x188);
            }
            iVar24 = *(int *)(lVar17 + (ulonglong)
                                       (*(int *)((longlong)dVar59 + 400) - 1U &
                                       *(uint *)(lVar35 + 0x3d0)) * 4);
            if (iVar24 != -1) {
              do {
                if (*(uint *)(*(longlong *)((longlong)dVar59 + 0x148) + (longlong)iVar24 * 0xc) ==
                    *(uint *)(lVar35 + 0x3d0)) {
                  if (*(char *)((longlong)dVar59 + 0x144) != '\0') goto LAB_1446932e6;
                  goto LAB_144692735;
                }
                iVar24 = *(int *)(*(longlong *)((longlong)dVar59 + 0x148) + (longlong)iVar24 * 0xc +
                                 4);
              } while (iVar24 != -1);
            }
          }
          if (*(char *)((longlong)dVar59 + 0x144) != '\0') {
LAB_144692735:
            if ((longlong)*(int *)(lVar30 + 0x40) != 0) {
              lVar35 = *(longlong *)(lVar30 + 0x38);
              uVar18 = (longlong)*(int *)(lVar30 + 0x40) + 0x3fffffffffffffff;
              uVar22 = uVar18 & 0x3fffffffffffffff;
              auVar45._8_4_ = (int)uVar22;
              auVar45._0_8_ = uVar22;
              auVar45._12_4_ = (int)(uVar22 >> 0x20);
              uVar23 = 0;
              do {
                auVar50 = auVar45 | auVar9;
                lVar30 = auVar50._0_8_;
                if ((bool)(~(lVar30 < (longlong)(uVar23 ^ uVar16)) & 1)) {
                  *(undefined4 *)(lVar35 + uVar23 * 4) = 0xbf800000;
                }
                auVar57._8_4_ = (int)uVar23;
                auVar57._0_8_ = uVar23;
                auVar57._12_4_ = (int)(uVar23 >> 0x20);
                if ((longlong)((auVar57._8_8_ | auVar71._8_8_) ^ auVar9._8_8_) <= auVar50._8_8_) {
                  *(undefined4 *)(lVar35 + 4 + uVar23 * 4) = 0xbf800000;
                }
                if ((longlong)((uVar23 | auVar66._0_8_) ^ uVar16) <= lVar30) {
                  *(undefined4 *)(lVar35 + 8 + uVar23 * 4) = 0xbf800000;
                  *(undefined4 *)(lVar35 + 0xc + uVar23 * 4) = 0xbf800000;
                }
                uVar23 = uVar23 + 4;
              } while ((uVar22 - ((uint)uVar18 & 3)) + 4 != uVar23);
            }
            local_238 = 0;
            local_228 = 0x600000000;
            local_118 = (double *)0x0;
            local_108 = 0x800000000;
            local_558 = (float *)0x0;
            pdVar32 = (double *)0x0;
            uVar18 = 0;
            local_498 = dVar59;
            FUN_1407300cb(local_2f8,(longlong)dVar59 + 0xb0);
            iVar24 = *(int *)(param_3 + 0x10) + -1;
            if (*(int *)(param_3 + 0x14) < 2) {
              iVar28 = 1;
              local_538._0_4_ = 1;
              if (1 < *(int *)(param_3 + 0x18)) goto LAB_14469289d;
            }
            else {
LAB_14469289d:
              uVar31 = 1 << ((byte)iVar24 & 0x1f);
              pdVar32 = (double *)(ulonglong)uVar31;
              fVar38 = (float)(*(int *)(param_3 + 8) / (int)uVar31) /
                       (float)*(int *)(param_3 + 0x1c);
              iVar28 = -((int)ROUND(-0.5 - (fVar38 + fVar38)) >> 1);
              fVar38 = (float)(*(int *)(param_3 + 0xc) / (int)uVar31) /
                       (float)*(int *)(param_3 + 0x20);
              local_538._0_4_ = -((int)ROUND(-0.5 - (fVar38 + fVar38)) >> 1);
            }
            plVar21 = (longlong *)FUN_14001cc68(0x18,0x10);
            *plVar21 = 0;
            local_518 = plVar21;
            if (0 < (int)local_538._0_4_) {
              iVar25 = 0;
              do {
                if (0 < iVar28) {
                  iVar29 = 0;
                  do {
                    plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
                    *plVar14 = 0;
                    *(int *)(plVar14 + 1) = iVar29;
                    *(int *)((longlong)plVar14 + 0xc) = iVar25;
                    *(int *)(plVar14 + 2) = iVar24;
                    if (plVar14 != (longlong *)0x0) {
                      *local_518 = (longlong)plVar14;
                      local_518 = plVar14;
                    }
                    iVar29 = iVar29 + 1;
                  } while (iVar28 != iVar29);
                }
                iVar25 = iVar25 + 1;
              } while (iVar25 != local_538._0_4_);
            }
            lVar17 = *plVar21;
            lVar30 = local_550;
            while (dVar59 = local_498, lVar35 = local_3d0, lVar17 != 0) {
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
              plVar14 = (longlong *)*plVar21;
              plVar36 = plVar21;
              if (plVar14 != (longlong *)0x0) {
                local_528 = (longlong *)(ulonglong)*(uint *)(plVar14 + 1);
                local_508 = (longlong *)(ulonglong)*(uint *)((longlong)plVar14 + 0xc);
                local_4c8._0_4_ = (int)plVar14[2];
                plVar14[1] = 0;
                *(undefined4 *)(plVar14 + 2) = 0;
                plVar36 = plVar14;
                if (plVar21 != (longlong *)0x0) {
                  FUN_1400020a8(plVar21);
                }
              }
              local_33c = local_4c8._0_4_;
              if ((1 < *(int *)(param_3 + 0x14)) ||
                 (fVar38 = (float)DAT_14c8461b4, fVar39 = DAT_14c8461b4._4_4_,
                 1 < *(int *)(param_3 + 0x18))) {
                fVar39 = (float)(1 << (local_4c8[0] & 0x1f));
                fVar38 = ((float)*(int *)(param_3 + 8) / fVar39) / (float)*(int *)(param_3 + 0x1c);
                iVar28 = -((int)ROUND(-0.5 - (fVar38 + fVar38)) >> 1);
                if (iVar28 < 2) {
                  iVar28 = 1;
                }
                fVar38 = ((float)*(int *)(param_3 + 0xc) / fVar39) / (float)*(int *)(param_3 + 0x20)
                ;
                iVar25 = -((int)ROUND(-0.5 - (fVar38 + fVar38)) >> 1);
                if (iVar25 < 2) {
                  iVar25 = 1;
                }
                local_538._0_4_ = iVar25;
                fVar38 = (1.0 / fVar39) *
                         ((float)(int)*(undefined8 *)(param_3 + 8) /
                         (float)(int)*(undefined8 *)(param_3 + 0x1c));
                fVar39 = ((float)(int)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x20) /
                         (float)(int)((ulonglong)*(undefined8 *)(param_3 + 0x1c) >> 0x20)) *
                         (1.0 / fVar39);
              }
              if ((int)local_528 < iVar28) {
                if ((int)local_508 < (int)local_538._0_4_) {
                  auVar66._0_8_ = (double)fVar38;
                  auVar66._8_8_ = 0;
                  uVar22 = DAT_149931180;
                  dVar49 = (double)((ulonglong)
                                    ((*(double *)(lVar30 + 0x30) * local_3c8) / (double)fVar39) &
                                   uVar22);
                  dVar56 = (double)((ulonglong)
                                    ((*(double *)(lVar30 + 0x28) * (double)local_3f8._0_8_) /
                                    auVar66._0_8_) & uVar22);
                  dVar59 = (double)((ulonglong)(*(double *)(lVar30 + 0x20) * dVar75) & uVar22);
                  if (dVar59 <= dVar56) {
                    dVar59 = dVar56;
                  }
                  if (dVar59 <= dVar49) {
                    dVar59 = dVar49;
                  }
                  dVar59 = dVar59 * dVar59 + dVar59 * dVar59;
                  if (dVar59 < 0.0) {
                    dVar59 = sqrt(dVar59);
                  }
                  else {
                    dVar59 = SQRT(dVar59);
                  }
                  if (0 < (int)local_108) {
                    dVar49 = (double)(((float)(int)local_528 + 0.5) / fVar38);
                    dVar56 = (double)(((float)(int)local_508 + 0.5) / fVar39);
                    dVar69 = local_468 * dVar56 + (double)local_458._0_8_ * dVar49 + local_438;
                    dVar64 = (double)local_488._0_8_ * dVar56 + dVar43 * dVar49 + dVar4;
                    dVar56 = dVar56 * (double)local_478._0_8_ + dVar49 * (double)local_448._0_8_ +
                             (double)local_428._0_8_;
                    dVar49 = (double)((float)dVar59 * 0.5);
                    dVar59 = (double)((float)dVar59 * 0.5);
                    pdVar19 = local_118;
                    if (local_118 == (double *)0x0) {
                      pdVar19 = local_218;
                    }
                    iVar25 = 0;
                    do {
                      auVar71._0_8_ =
                           (pdVar19[8] * dVar69 + pdVar19[4] * dVar64 + *pdVar19 * dVar56) -
                           pdVar19[0xc];
                      auVar71._8_8_ =
                           (pdVar19[9] * dVar69 + pdVar19[5] * dVar64 + pdVar19[1] * dVar56) -
                           pdVar19[0xd];
                      auVar67._8_8_ = -(ulonglong)(dVar59 < auVar71._8_8_);
                      auVar67._0_8_ = -(ulonglong)(dVar49 < auVar71._0_8_);
                      uVar31 = movmskpd((int)pdVar32,auVar67);
                      pdVar32 = (double *)(ulonglong)uVar31;
                      auVar66._8_8_ =
                           -(ulonglong)
                            (dVar59 < (pdVar19[0xb] * dVar69 +
                                      pdVar19[7] * dVar64 + pdVar19[3] * dVar56) - pdVar19[0xf]);
                      auVar66._0_8_ =
                           (double)-(ulonglong)
                                    (dVar49 < (pdVar19[10] * dVar69 +
                                              pdVar19[6] * dVar64 + pdVar19[2] * dVar56) -
                                              pdVar19[0xe]);
                      iVar29 = movmskpd((int)uVar18,auVar66);
                      uVar31 = iVar29 << 2 | uVar31;
                      uVar18 = (ulonglong)uVar31;
                      if (uVar31 != 0) goto LAB_144693274;
                      pdVar19 = pdVar19 + 0x10;
                      iVar25 = iVar25 + 4;
                    } while (iVar25 < (int)local_108);
                  }
                  iVar25 = 0x7fffffff;
                  uVar15 = CONCAT71((uint7)(uint3)((ulonglong)local_108 >> 8),1);
                  iVar26 = 0;
                  uVar18 = 0;
                  iVar29 = 0;
                  local_4f8 = param_3;
                  local_3e0 = param_4;
                  fVar52 = local_544;
                  do {
                    local_548 = (uint)uVar15;
                    iVar33 = (int)uVar18 + (int)local_508;
                    dVar49 = (double)((float)iVar33 / fVar39);
                    dVar59 = local_468 * dVar49;
                    dVar56 = (double)local_488._0_8_ * dVar49;
                    dVar49 = dVar49 * (double)local_478._0_8_;
                    iVar11 = 0;
                    bVar37 = true;
                    do {
                      bVar27 = bVar37;
                      dVar64 = local_498;
                      uVar20 = iVar11 + (int)local_528 << ((byte)local_33c & 0x1f);
                      uVar31 = *(uint *)(local_4f8 + 0x14);
                      pdVar32 = (double *)(ulonglong)uVar31;
                      if ((int)uVar31 <= (int)uVar20) {
                        uVar20 = uVar31;
                      }
                      if ((int)uVar20 < 1) {
                        uVar20 = 0;
                      }
                      iVar34 = iVar33 << ((byte)local_33c & 0x1f);
                      if (*(int *)(local_4f8 + 0x18) <= iVar34) {
                        iVar34 = *(int *)(local_4f8 + 0x18);
                      }
                      if (iVar34 < 1) {
                        iVar34 = 0;
                      }
                      lVar35 = (longlong)(int)(iVar34 * (uVar31 + 1) + uVar20);
                      fVar40 = *(float *)(*local_540 + lVar35 * 4);
                      if (0.0 <= fVar40) {
LAB_144692f2e:
                        iVar11 = (int)ROUND((fVar40 - fVar52) + (fVar40 - fVar52) + -0.5) >> 1;
                        if (iVar24 <= iVar11) {
                          iVar11 = iVar24;
                        }
                        if (iVar11 < 1) {
                          iVar11 = 0;
                        }
                        if (iVar11 <= iVar25) {
                          iVar25 = iVar11;
                        }
                        iVar11 = -((int)ROUND(-0.5 - (fVar40 + fVar52 + fVar40 + fVar52)) >> 1);
                        if (iVar24 <= iVar11) {
                          iVar11 = iVar24;
                        }
                        if (iVar29 < iVar11) {
                          iVar29 = iVar11;
                        }
                        if (iVar29 < 1) {
                          iVar29 = 0;
                        }
                        iVar26 = iVar26 + 1;
                        local_340 = fVar40;
                      }
                      else {
                        local_4e8 = (double)CONCAT44(local_4e8._4_4_,iVar26);
                        local_4d8 = (double)CONCAT44(local_4d8._4_4_,iVar29);
                        dVar69 = (double)((float)(iVar11 + (int)local_528) / fVar38);
                        local_328 = (double)local_458._0_8_ * dVar69 + dVar59 + local_438;
                        local_330 = dVar43 * dVar69 + dVar56 + dVar4;
                        local_338 = dVar69 * (double)local_448._0_8_ + dVar49 +
                                    (double)local_428._0_8_;
                        local_358 = (uint *)((double)local_418._0_8_ + local_338);
                        local_350 = (double *)((double)local_3a8._0_8_ + local_330);
                        local_348 = (double)local_398._0_8_ + local_328;
                        local_370 = local_338 + (double)local_408._0_8_;
                        local_368 = local_330 + (double)local_3b8._0_8_;
                        local_360 = local_328 + local_388;
                        local_558 = &local_340;
                        pdVar32 = &local_370;
                        cVar10 = FUN_144693437(local_498,&local_338,pdVar32,&local_358);
                        iVar26 = local_4e8._0_4_;
                        iVar29 = local_4d8._0_4_;
                        fVar52 = local_544;
                        if (cVar10 != '\0') {
                          fVar40 = *(float *)((longlong)dVar64 + 0x140) + local_4ec + local_340;
                          *(float *)(*local_540 + lVar35 * 4) = fVar40;
                          goto LAB_144692f2e;
                        }
                      }
                      dVar75 = local_4a8;
                      iVar11 = 1;
                      bVar37 = false;
                    } while (bVar27);
                    uVar18 = 1;
                    uVar15 = 0;
                  } while ((local_548 & 1) != 0);
                  if (iVar26 - 1U < 3) {
                    iVar25 = 0;
                  }
                  lVar30 = local_550;
                  param_3 = local_4f8;
                  if ((iVar25 < (int)local_33c) && (iVar25 = *(int *)(local_4f8 + 0x18), 0 < iVar25)
                     ) {
                    local_4f0 = (int)local_508 * 2;
                    local_4e8 = (double)CONCAT44(local_4e8._4_4_,(int)local_528 * 2);
                    iVar26 = *(int *)(local_4f8 + 0x14);
                    uVar31 = 0;
                    do {
                      uVar20 = uVar31;
                      if (0 < iVar26) {
                        local_4d8 = (double)CONCAT44(local_4d8._4_4_,uVar31 | local_4f0);
                        uVar20 = 0;
                        local_548 = uVar31;
                        do {
                          iVar25 = local_33c - 1;
                          uVar31 = uVar20 | local_4e8._0_4_;
                          plVar21 = (longlong *)FUN_14001cc68(0x18,0x10);
                          *plVar21 = 0;
                          *(uint *)(plVar21 + 1) = uVar31;
                          *(int *)((longlong)plVar21 + 0xc) = local_4d8._0_4_;
                          *(int *)(plVar21 + 2) = iVar25;
                          if (plVar21 != (longlong *)0x0) {
                            *local_518 = (longlong)plVar21;
                            iVar26 = *(int *)(local_4f8 + 0x14);
                            local_518 = plVar21;
                          }
                          iVar11 = uVar20 + 1;
                          iVar25 = 2;
                          if (iVar26 < 2) {
                            iVar25 = iVar26;
                          }
                          uVar20 = 1;
                        } while (iVar11 < iVar25);
                        iVar25 = *(int *)(local_4f8 + 0x18);
                        lVar30 = local_550;
                        param_3 = local_4f8;
                        uVar20 = local_548;
                      }
                      iVar11 = 2;
                      if (iVar25 < 2) {
                        iVar11 = iVar25;
                      }
                      uVar31 = 1;
                    } while ((int)(uVar20 + 1) < iVar11);
                  }
                  param_4 = local_3e0;
                  if ((int)local_33c <= iVar29) {
                    iVar25 = (int)local_3e0[1];
                    iVar29 = *(int *)((longlong)local_3e0 + 0x34);
                    if (iVar25 != iVar29) {
                      plVar21 = (longlong *)local_3e0[8];
                      if ((longlong *)local_3e0[8] == (longlong *)0x0) {
                        plVar21 = local_4b8;
                      }
                      iVar26 = *(int *)((longlong)plVar21 +
                                       (ulonglong)((int)local_3e0[9] - 1U & local_33c) * 4);
                      if (iVar26 != -1) {
                        do {
                          if (*(uint *)(*local_3e0 + (longlong)iVar26 * 0x50) == local_33c)
                          goto LAB_1446931d6;
                          iVar26 = *(int *)((longlong)iVar26 * 0x50 + *local_3e0 + 0x48);
                        } while (iVar26 != -1);
                      }
                    }
                    FUN_1498c7112(&local_338,iVar28,local_538._0_4_,0);
                    local_358 = &local_33c;
                    local_350 = &local_338;
                    FUN_1498d10d0(param_4,&local_370,&local_358);
                    if (local_328 != 0.0) {
                      FUN_1400020a8();
                    }
                    iVar25 = (int)param_4[1];
                    iVar29 = *(int *)((longlong)param_4 + 0x34);
LAB_1446931d6:
                    if (iVar25 != iVar29) {
                      plVar21 = (longlong *)param_4[8];
                      if ((longlong *)param_4[8] == (longlong *)0x0) {
                        plVar21 = local_4b8;
                      }
                      iVar25 = *(int *)((longlong)plVar21 +
                                       (ulonglong)((int)param_4[9] - 1U & local_33c) * 4);
                      if (iVar25 != -1) {
                        do {
                          lVar35 = *param_4 + (longlong)iVar25 * 0x50;
                          if (*(uint *)(*param_4 + (longlong)iVar25 * 0x50) == local_33c)
                          goto LAB_14469321b;
                          iVar25 = *(int *)(lVar35 + 0x48);
                        } while (iVar25 != -1);
                      }
                    }
                    lVar35 = 0;
LAB_14469321b:
                    iVar25 = *(int *)(lVar35 + 0x2c) + -1;
                    if ((int)local_508 < iVar25) {
                      iVar25 = (int)local_508;
                    }
                    uVar31 = *(int *)(lVar35 + 0x28) - 1;
                    pdVar32 = (double *)(ulonglong)uVar31;
                    if ((int)local_528 < (int)uVar31) {
                      pdVar32 = (double *)((ulonglong)local_528 & 0xffffffff);
                    }
                    iVar25 = iVar25 * *(int *)(lVar35 + 0x28);
                    iVar29 = iVar25 + (int)pdVar32;
                    uVar31 = 1 << ((byte)iVar29 & 0x1f);
                    uVar18 = (ulonglong)uVar31;
                    lVar17 = lVar35 + 8;
                    if (*(longlong *)(lVar35 + 0x18) != 0) {
                      lVar17 = *(longlong *)(lVar35 + 0x18);
                    }
                    iVar25 = iVar25 + (int)pdVar32 + 0x1f;
                    if (-1 < iVar29) {
                      iVar25 = iVar29;
                    }
                    puVar2 = (uint *)(lVar17 + (longlong)(iVar25 >> 5) * 4);
                    *puVar2 = *puVar2 | uVar31;
                    *(undefined1 *)(lVar35 + 0x40) = 1;
                  }
                }
              }
LAB_144693274:
              plVar21 = plVar36;
              lVar17 = *plVar36;
            }
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
            while (local_498 = dVar59, local_3d0 = lVar35, plVar21 != (longlong *)0x0) {
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
              plVar14 = (longlong *)*plVar21;
              FUN_1400020a8(plVar21);
              dVar59 = local_498;
              lVar35 = local_3d0;
              plVar21 = plVar14;
            }
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
            if (local_118 != (double *)0x0) {
              FUN_1400020a8();
            }
            if (local_238 != 0) {
              FUN_1400020a8();
            }
            auVar66 = pmovsxbq(auVar66,0x302);
            auVar71 = pmovsxbq(auVar71,0x100);
            dVar41 = local_3d8;
          }
LAB_1446932e6:
          dVar59 = (double)((longlong)dVar59 + 0x1a0);
        } while (dVar59 != dVar41);
      }
    }
    LOCK();
    plVar21 = local_4b0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_4b0)();
      LOCK();
      piVar1 = (int *)((longlong)local_4b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4b0 + 0x10))();
      }
    }
  }
LAB_14469332e:
  if ((local_f0 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144693437 FUN_144693437 body=1295 status=ok
// SIG undefined FUN_144693437(void)

undefined4
FUN_144693437(longlong param_1,double *param_2,double *param_3,double *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong *plVar12;
  byte bVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc316ec) {
    FUN_144b3d300(&DAT_14cc316ec);
    if (DAT_14cc316ec == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar12 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MaxAnisotropy",1);
      iVar11 = (**(code **)(*plVar12 + 0xb0))(plVar12);
      iVar20 = 0x10;
      if (iVar11 < 0x10) {
        iVar20 = iVar11;
      }
      iVar11 = 1;
      if (1 < iVar20) {
        iVar11 = iVar20;
      }
      fVar14 = logf((float)iVar11);
      DAT_14cc316e8 = fVar14 * 1.442695;
      _Init_thread_footer(&DAT_14cc316ec);
    }
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar15 = *(double *)(param_1 + 0xa8);
  dVar4 = *(double *)(param_1 + 0x88);
  dVar16 = dVar3 * dVar4;
  dVar5 = *(double *)(param_1 + 0x48);
  dVar6 = *(double *)(param_1 + 0x68);
  dVar17 = dVar2 * dVar6;
  dVar7 = dVar1 * dVar5 + dVar17 + dVar16 + dVar15;
  dVar8 = 0.0;
  if (0.0 < dVar7) {
    dVar16 = (double)((float)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134)) *
                     (float)((1.0 - (dVar1 * *(double *)(param_1 + 0x38) +
                                     dVar2 * *(double *)(param_1 + 0x58) +
                                     dVar3 * *(double *)(param_1 + 0x78) +
                                    *(double *)(param_1 + 0x98)) / (dVar7 + dVar7)) + -0.5));
    dVar17 = (double)((float)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x130)) *
                     (float)((dVar1 * *(double *)(param_1 + 0x30) +
                              dVar2 * *(double *)(param_1 + 0x50) +
                              dVar3 * *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x90)) /
                             (dVar7 + dVar7) + 0.5));
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar9 = dVar4 * dVar3;
  dVar10 = dVar5 * dVar1 + dVar6 * dVar2 + dVar9 + dVar15;
  if (0.0 < dVar10) {
    dVar8 = (double)((float)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134)) *
                    (float)((1.0 - (dVar1 * *(double *)(param_1 + 0x38) +
                                    dVar2 * *(double *)(param_1 + 0x58) +
                                    dVar3 * *(double *)(param_1 + 0x78) +
                                   *(double *)(param_1 + 0x98)) / (dVar10 + dVar10)) + -0.5));
    dVar9 = (double)((float)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x130)) *
                    (float)((dVar1 * *(double *)(param_1 + 0x30) +
                             dVar2 * *(double *)(param_1 + 0x50) +
                             dVar3 * *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x90)) /
                            (dVar10 + dVar10) + 0.5));
  }
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar15 = dVar15 + dVar5 * dVar1 + dVar6 * dVar2 + dVar4 * dVar3;
  iVar20 = -(uint)(0.0 < dVar15 && 0.0 < dVar10);
  bVar13 = (byte)iVar20 & 0.0 < dVar7;
  if (bVar13 == 1) {
    fVar18 = (float)(1.0 / ((dVar8 - dVar16) * (dVar8 - dVar16) +
                           (dVar9 - dVar17) * (dVar9 - dVar17)));
    dVar17 = (double)((float)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x130)) *
                     (float)((dVar1 * *(double *)(param_1 + 0x30) +
                              dVar2 * *(double *)(param_1 + 0x50) +
                              dVar3 * *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x90)) /
                             (dVar15 + dVar15) + 0.5)) - dVar17;
    dVar16 = (double)((float)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134)) *
                     (float)((1.0 - (dVar1 * *(double *)(param_1 + 0x38) +
                                     dVar2 * *(double *)(param_1 + 0x58) +
                                     dVar3 * *(double *)(param_1 + 0x78) +
                                    *(double *)(param_1 + 0x98)) / (dVar15 + dVar15)) + -0.5)) -
             dVar16;
    fVar19 = (float)(1.0 / (dVar16 * dVar16 + dVar17 * dVar17));
    fVar14 = fVar18;
    if (fVar19 <= fVar18) {
      fVar14 = fVar19;
    }
    fVar14 = logf(fVar14);
    if (fVar18 <= fVar19) {
      fVar18 = fVar19;
    }
    fVar18 = logf(fVar18);
    fVar18 = fVar18 * 1.442695 * 0.5;
    fVar14 = fVar18 - fVar14 * 1.442695 * 0.5;
    if (DAT_14cc316e8 <= fVar14) {
      fVar14 = DAT_14cc316e8;
    }
    *param_5 = fVar18 - fVar14;
  }
  return CONCAT31((int3)((uint)iVar20 >> 8),bVar13);
}



// FUNCTION 144693946 FUN_144693946 body=64 status=ok
// SIG undefined FUN_144693946(void)

undefined8 * FUN_144693946(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14beef5d0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144693986 FUN_144693986 body=2664 status=ok
// SIG undefined FUN_144693986(void)

void FUN_144693986(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  double *pdVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined4 local_48c;
  longlong local_488;
  longlong *local_480;
  int local_474;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  char *local_458;
  undefined8 *local_450;
  longlong local_448;
  float *local_440;
  float *local_438;
  longlong local_430;
  float *local_428;
  double *local_420;
  undefined1 *local_418;
  undefined4 *local_410;
  undefined1 *local_408;
  int *local_400;
  undefined4 *local_3f8;
  float *local_3f0;
  float *local_3e8;
  longlong local_3e0;
  undefined4 *local_3d8;
  float *local_3d0;
  int *local_3c8;
  undefined4 *local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  undefined1 local_3a1;
  undefined4 local_3a0;
  undefined4 local_39c;
  int local_398;
  float local_394;
  float local_390;
  char local_389;
  undefined4 local_388;
  float local_384;
  float local_380;
  float local_37c;
  undefined8 local_378;
  int local_36c;
  double local_368 [8];
  double local_328;
  double local_320;
  double local_318;
  float local_308;
  undefined4 local_304;
  float local_300;
  float local_2fc;
  undefined1 local_2f8 [192];
  longlong local_238;
  undefined8 local_228;
  longlong local_118;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar7 = *(uint *)(param_1 + 8), -1 < (int)uVar7)) &&
       ((int)uVar7 < DAT_14c9647dc)) &&
      (((plVar13 = (longlong *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
        plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
        ((lVar19 = *plVar13, lVar19 != 0 && (cVar6 = FUN_140041326(lVar19), cVar6 != '\0')))))))) &&
     (plVar13 = *(longlong **)(param_1 + 0x18), plVar13 != (longlong *)0x0)) {
    iVar15 = (int)plVar13[1];
    do {
      if (iVar15 == 0) goto LAB_144694350;
      LOCK();
      iVar14 = (int)plVar13[1];
      bVar20 = iVar15 == iVar14;
      if (bVar20) {
        *(int *)(plVar13 + 1) = iVar15 + 1;
        iVar14 = iVar15;
      }
      iVar15 = iVar14;
      lVar11 = DAT_14cc31598;
      UNLOCK();
    } while (!bVar20);
    lVar18 = *(longlong *)(param_1 + 0x10);
    if ((lVar18 != 0) && ((int)param_2[1] != 0)) {
      local_2fc = (float)*(double *)(lVar18 + 0x18);
      local_300 = (float)*(double *)(lVar18 + 0x10);
      local_304 = *(undefined4 *)(lVar18 + 8);
      iVar15 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      local_488 = param_3;
      if ((iVar15 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar15 == 2)))) {
        uVar10 = 0;
      }
      else if (iVar15 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar10 = 1;
      }
      local_308 = *(float *)(lVar11 + uVar10 * 4);
      if (local_308 <= 0.0) {
        local_308 = 0.0;
      }
      pdVar16 = (double *)(lVar19 + 0x240);
      pdVar17 = local_368;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar17 = *pdVar16;
        pdVar16 = pdVar16 + 1;
        pdVar17 = pdVar17 + 1;
      }
      local_36c = *(int *)(local_488 + 0x10) + -1;
      if ((*(int *)(local_488 + 0x14) < 2) && (*(int *)(local_488 + 0x18) < 2)) {
        local_378 = DAT_14c8461b4;
        fVar21 = (float)DAT_14c8461b4;
        local_37c = (float)*(int *)(local_488 + 8);
        fVar23 = (float)((ulonglong)DAT_14c8461b4 >> 0x20);
        local_380 = (float)*(int *)(local_488 + 0xc);
      }
      else {
        local_37c = (float)(int)*(undefined8 *)(local_488 + 8);
        local_380 = (float)(int)((ulonglong)*(undefined8 *)(local_488 + 8) >> 0x20);
        fVar23 = local_380 / (float)(int)((ulonglong)*(undefined8 *)(local_488 + 0x1c) >> 0x20);
        fVar21 = local_37c / (float)(int)*(undefined8 *)(local_488 + 0x1c);
        local_378 = CONCAT44(fVar23,fVar21);
      }
      local_37c = 1.0 / local_37c;
      local_380 = 1.0 / local_380;
      dVar22 = (double)(*(float *)(param_1 + 0x20) * 6.2831855);
      fVar30 = fVar21;
      if (fVar21 <= fVar23) {
        fVar30 = fVar23;
      }
      dVar24 = 1.0 / (double)fVar30;
      dVar25 = ABS(local_318 * dVar22 * dVar24);
      dVar28 = ABS(local_320 * dVar22 * dVar24);
      dVar22 = ABS(dVar24 * dVar22 * local_328);
      if (dVar22 <= dVar28) {
        dVar22 = dVar28;
      }
      if (dVar22 <= dVar25) {
        dVar22 = dVar25;
      }
      local_384 = (float)(dVar22 * 0.7071067690849304);
      uVar10 = 0xffffffff;
      local_388 = 0xffffffff;
      local_389 = '\0';
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      local_480 = *(longlong **)(param_1 + 0x18);
      if (local_480 == (longlong *)0x0) {
LAB_144693d08:
        local_48c = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        local_480 = (longlong *)0x0;
      }
      else {
        uVar10 = (ulonglong)*(uint *)(local_480 + 1);
        do {
          uVar7 = (uint)uVar10;
          if (uVar7 == 0) goto LAB_144693d08;
          LOCK();
          uVar4 = *(uint *)(local_480 + 1);
          if (uVar7 == uVar4) {
            *(uint *)(local_480 + 1) = uVar7 + 1;
          }
          else {
            uVar10 = (ulonglong)uVar4;
          }
          UNLOCK();
        } while (uVar7 != uVar4);
        lVar11 = *(longlong *)(param_1 + 0x10);
        if (lVar11 != 0) {
          local_388 = *(undefined4 *)(lVar11 + 0x20);
          local_389 = *(char *)(lVar11 + 0x24);
          *(undefined4 *)(param_1 + 0x24) = local_388;
        }
        local_48c = 0;
      }
      if ((longlong)(int)param_2[1] != 0) {
        local_460 = local_488 + 0x14;
        local_474 = (int)ROUND(-0.5 - (fVar21 * fVar23 + fVar21 * fVar23)) >> 1;
        lVar11 = *param_2;
        lVar18 = (longlong)(int)param_2[1] * 0x1a0 + lVar11;
        local_470 = lVar19;
        local_468 = lVar18;
        do {
          if (*(int *)(lVar11 + 0x150) != *(int *)(lVar11 + 0x17c)) {
            lVar12 = lVar11 + 0x180;
            if (*(longlong *)(lVar11 + 0x188) != 0) {
              lVar12 = *(longlong *)(lVar11 + 0x188);
            }
            iVar15 = *(int *)(lVar12 + (ulonglong)
                                       (*(int *)(lVar11 + 400) - 1U & *(uint *)(lVar19 + 0x3d0)) * 4
                             );
            if (iVar15 != -1) {
              do {
                if (*(uint *)(*(longlong *)(lVar11 + 0x148) + (longlong)iVar15 * 0xc) ==
                    *(uint *)(lVar19 + 0x3d0)) {
                  if (*(char *)(lVar11 + 0x144) != '\0') goto LAB_1446942e3;
                  goto LAB_144693e09;
                }
                iVar15 = *(int *)(*(longlong *)(lVar11 + 0x148) + (longlong)iVar15 * 0xc + 4);
              } while (iVar15 != -1);
            }
          }
          if (*(char *)(lVar11 + 0x144) != '\0') {
LAB_144693e09:
            local_238 = 0;
            local_228 = 0x600000000;
            local_118 = 0;
            local_108 = 0x800000000;
            local_498 = 0;
            FUN_1407300cb(local_2f8,lVar11 + 0xb0,0,0);
            dVar25 = *(double *)(lVar11 + 0x18);
            dVar5 = *(double *)(lVar11 + 0x20);
            dVar26 = -local_368[0];
            dVar27 = -local_368[1];
            dVar22 = local_368[2] * -1.0;
            dVar24 = local_368[3] * 1.0;
            dVar28 = dVar5 * dVar26 - dVar25 * dVar27;
            dVar29 = *(double *)(lVar11 + 0x28) * dVar27 - dVar5 * dVar22;
            dVar31 = dVar25 * dVar22 - dVar26 * *(double *)(lVar11 + 0x28);
            dVar29 = dVar29 + dVar29;
            dVar31 = dVar31 + dVar31;
            dVar28 = dVar28 + dVar28;
            dVar26 = dVar24 * dVar28 + *(double *)(lVar11 + 0x28) +
                     (dVar31 * dVar26 - dVar29 * dVar27);
            dVar25 = (dVar28 * dVar27 - dVar31 * dVar22) + dVar24 * dVar29 + dVar25;
            dVar22 = local_368[0] * dVar28 + dVar22 * dVar29 + dVar24 * dVar31 + dVar5;
            dVar24 = dVar26 * dVar26 + dVar25 * dVar25 + dVar22 * dVar22;
            if (9.99999993922529e-09 < dVar24) {
              dVar24 = 1.0 / SQRT(dVar24);
              dVar25 = dVar25 * dVar24;
              dVar22 = dVar22 * dVar24;
              dVar26 = dVar26 * dVar24;
              dVar24 = dVar26 * dVar26 + dVar25 * dVar25 + dVar22 * dVar22;
            }
            dVar26 = dVar26 / SQRT(dVar24);
            dVar24 = dVar26;
            if (1.0 <= dVar26) {
              dVar24 = 1.0;
            }
            dVar24 = acos((double)(-(ulonglong)(dVar26 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar26 < -1.0) & (ulonglong)dVar24));
            dVar28 = 0.0;
            if ((((dVar22 != 0.0) || (NAN(dVar22))) || (dVar25 != 0.0)) || (NAN(dVar25))) {
              dVar28 = atan2(dVar22,dVar25);
            }
            dVar22 = (double)FUN_144719204(dVar28 + 6.2831854820251465,0x401921fb60000000);
            local_394 = (float)(dVar22 / 6.2831854820251465) / (local_300 / 360.0);
            local_390 = ((float)(dVar24 / 3.1415927410125732) + -0.5) / (local_2fc / 180.0) + 0.5;
            local_398 = -1;
            if (local_389 == '\x01') {
              fVar21 = ((local_378._4_4_ * 20.0) / 180.0) * (float)local_378;
              dVar22 = log((double)-(local_474 /
                                    (int)((float)-((int)ROUND(-0.5 - (fVar21 + fVar21)) >> 1) * 0.5)
                                    ));
              local_398 = -((int)ROUND(-0.5 - (dVar22 / 1.3862943611198906 +
                                              dVar22 / 1.3862943611198906)) >> 1);
            }
            local_39c = 0x3f471c72;
            local_3a0 = 0x3f638e39;
            local_3a1 = 0;
            local_458 = &local_389;
            local_450 = &local_378;
            local_448 = local_460;
            local_440 = &local_384;
            local_438 = &local_394;
            local_428 = &local_300;
            local_420 = local_368;
            local_410 = &local_3a0;
            local_408 = &local_3a1;
            local_400 = &local_398;
            local_3f8 = &local_388;
            local_3f0 = &local_37c;
            local_3e8 = &local_380;
            local_3d8 = &local_304;
            local_3d0 = &local_308;
            local_3c8 = &local_36c;
            local_3c0 = &local_39c;
            local_3b0 = local_488;
            iVar15 = *(int *)(local_488 + 0x18);
            iVar14 = (int)ROUND((double)iVar15 * 0.5 + (double)iVar15 * 0.5 + -0.5) >> 1;
            local_430 = param_1;
            local_418 = local_2f8;
            local_3e0 = lVar11;
            local_3b8 = param_4;
            if (0 < iVar14) {
              iVar15 = 0;
              do {
                FUN_1446943f4(&local_458,iVar15);
                iVar15 = iVar15 + 1;
              } while (iVar14 != iVar15);
              iVar15 = *(int *)(local_488 + 0x18);
            }
            while (iVar14 < iVar15) {
              iVar15 = iVar15 + -1;
              FUN_1446943f4(&local_458,iVar15);
            }
            if (local_118 != 0) {
              FUN_1400020a8();
            }
            lVar18 = local_468;
            lVar19 = local_470;
            if (local_238 != 0) {
              FUN_1400020a8();
              lVar18 = local_468;
              lVar19 = local_470;
            }
          }
LAB_1446942e3:
          lVar11 = lVar11 + 0x1a0;
        } while (lVar11 != lVar18);
      }
      plVar3 = local_480;
      if ((char)local_48c == '\0') {
        LOCK();
        plVar1 = local_480 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_480)(local_480);
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
    LOCK();
    plVar3 = plVar13 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_144694350:
  if ((local_f0 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446943f4 FUN_1446943f4 body=1775 status=ok
// SIG undefined FUN_1446943f4(void)

void FUN_1446943f4(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  double *pdVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1d8 [32];
  float *local_1b8;
  uint local_1a8;
  uint local_1a4;
  undefined1 local_1a0 [24];
  undefined1 local_188 [28];
  float local_16c;
  double local_168;
  double local_160;
  double local_158;
  uint *local_148;
  undefined1 *local_140;
  undefined1 local_134 [4];
  undefined1 local_130 [16];
  longlong local_120;
  ulonglong local_f0;
  ulonglong uVar14;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  fVar26 = 0.0;
  fVar24 = (float)param_2;
  fVar25 = 0.0;
  if (*(char *)*param_1 == '\x01') {
    fVar25 = fVar24 / *(float *)(param_1[1] + 4) + -0.5;
    fVar25 = fVar25 + fVar25;
    fVar26 = ((float)param_2 + 1.0) / *(float *)(param_1[1] + 4) + -0.5;
    fVar26 = fVar26 + fVar26;
  }
  if (0 < *(int *)param_1[2]) {
    lVar3 = param_1[5];
    uVar18 = 0;
    do {
      fVar21 = *(float *)param_1[1];
      fVar23 = ((float *)param_1[1])[1];
      fVar22 = fVar24 / fVar23;
      fVar28 = (float)(int)uVar18 / fVar21;
      fVar23 = (fVar24 + 1.0) / fVar23;
      fVar21 = ((float)(int)uVar18 + 1.0) / fVar21;
      fVar2 = *(float *)param_1[4];
      fVar30 = (fVar22 + fVar23) * 0.5;
      fVar29 = (fVar28 + fVar21) * 0.5;
      fVar27 = *(float *)param_1[3];
      if ((((fVar28 <= fVar2) && (fVar2 < fVar21)) &&
          (fVar21 = ((float *)param_1[4])[1], fVar22 <= fVar21)) && (fVar21 < fVar23)) {
        fVar27 = 0.0;
        fVar29 = fVar2;
        fVar30 = fVar21;
      }
      local_1b8 = (float *)CONCAT44(fVar30,fVar29);
      uVar14 = param_1[6];
      uVar16 = param_1[7];
      FUN_144694ae4(lVar3,&local_168);
      lVar17 = param_1[8];
      if (0 < *(int *)(lVar17 + 0x1f0)) {
        pdVar8 = (double *)(lVar17 + 0xe0);
        if (*(double **)(lVar17 + 0x1e0) != (double *)0x0) {
          pdVar8 = *(double **)(lVar17 + 0x1e0);
        }
        iVar10 = 0;
        do {
          lVar20 = -(ulonglong)
                    ((double)fVar27 <
                    (pdVar8[9] * local_158 + pdVar8[5] * local_160 + pdVar8[1] * local_168) -
                    pdVar8[0xd]);
          auVar4._8_4_ = (int)lVar20;
          auVar4._0_8_ = -(ulonglong)
                          ((double)fVar27 <
                          (pdVar8[8] * local_158 + pdVar8[4] * local_160 + *pdVar8 * local_168) -
                          pdVar8[0xc]);
          auVar4._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
          uVar12 = movmskpd((int)uVar14,auVar4);
          uVar14 = (ulonglong)uVar12;
          lVar20 = -(ulonglong)
                    ((double)fVar27 <
                    (pdVar8[0xb] * local_158 + pdVar8[7] * local_160 + pdVar8[3] * local_168) -
                    pdVar8[0xf]);
          auVar5._8_4_ = (int)lVar20;
          auVar5._0_8_ = -(ulonglong)
                          ((double)fVar27 <
                          (pdVar8[10] * local_158 + pdVar8[6] * local_160 + pdVar8[2] * local_168) -
                          pdVar8[0xe]);
          auVar5._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
          uVar15 = movmskpd((int)uVar16,auVar5);
          if ((uVar15 & 0x3fffffff) != 0 || uVar12 != 0) goto LAB_144694a4e;
          pdVar8 = pdVar8 + 0x10;
          iVar10 = iVar10 + 4;
          uVar16 = 0;
        } while (iVar10 < *(int *)(lVar17 + 0x1f0));
      }
      if ((*(char *)*param_1 == '\x01') &&
         ((fVar25 < -*(float *)param_1[9] || (*(float *)param_1[9] < fVar26)))) {
        *(undefined1 *)param_1[10] = 1;
        iVar10 = *(int *)param_1[0xb];
        if (*(int *)param_1[0xb] < *(int *)param_1[0xc]) {
          iVar10 = *(int *)param_1[0xc];
        }
        *(int *)(lVar3 + 0x24) = iVar10;
      }
      local_1b8 = (float *)CONCAT44(fVar30 + 0.0,*(float *)param_1[0xd] + fVar29);
      FUN_144694ae4(lVar3,local_188,param_1[6],param_1[7]);
      local_1b8 = (float *)CONCAT44(fVar30 + *(float *)param_1[0xe],fVar29 + 0.0);
      FUN_144694ae4(lVar3,local_1a0,param_1[6],param_1[7]);
      local_1b8 = &local_16c;
      cVar6 = FUN_144693437(param_1[0xf],&local_168,local_188,local_1a0);
      if (cVar6 != '\0') {
        local_16c = *(float *)param_1[0x10] + *(float *)(param_1[0xf] + 0x140) + local_16c;
        if (param_2 == 0) {
          bVar19 = true;
        }
        else {
          bVar19 = *(int *)(param_1[2] + 4) + -1 == param_2;
        }
        fVar23 = local_16c - *(float *)param_1[0x11];
        fVar21 = local_16c + *(float *)param_1[0x11];
        local_1a8 = (uint)((*(byte *)*param_1 ^ 1) & bVar19);
        uVar15 = ((int)ROUND(fVar23 + fVar23 + -0.5) >> 1) - local_1a8;
        local_1a8 = local_1a8 - ((int)ROUND(-0.5 - (fVar21 + fVar21)) >> 1);
        uVar12 = *(uint *)param_1[0x12];
        if ((int)uVar12 <= (int)uVar15) {
          uVar15 = uVar12;
        }
        local_1a4 = 0;
        if (0 < (int)uVar15) {
          local_1a4 = uVar15;
        }
        if ((int)uVar12 <= (int)local_1a8) {
          local_1a8 = uVar12;
        }
        if ((int)local_1a8 < 1) {
          local_1a8 = 0;
        }
        if ((int)uVar15 <= (int)local_1a8) {
          do {
            if (((*(char *)*param_1 != '\x01') || (*(int *)param_1[0xb] <= (int)local_1a4)) ||
               ((*(char *)param_1[10] != '\x01' ||
                ((uVar12 = local_1a4, -*(float *)param_1[0x13] <= fVar25 &&
                 (fVar26 <= *(float *)param_1[0x13])))))) {
              plVar11 = (longlong *)param_1[0x14];
              iVar10 = (int)plVar11[1];
              iVar7 = *(int *)((longlong)plVar11 + 0x34);
              if (iVar10 != iVar7) {
                plVar9 = plVar11 + 7;
                if ((longlong *)plVar11[8] != (longlong *)0x0) {
                  plVar9 = (longlong *)plVar11[8];
                }
                iVar13 = *(int *)((longlong)plVar9 +
                                 (ulonglong)((int)plVar11[9] - 1U & local_1a4) * 4);
                if (iVar13 != -1) {
                  do {
                    if (*(uint *)(*plVar11 + (longlong)iVar13 * 0x50) == local_1a4)
                    goto LAB_14469496a;
                    iVar13 = *(int *)((longlong)iVar13 * 0x50 + *plVar11 + 0x48);
                  } while (iVar13 != -1);
                }
              }
              local_1b8 = (float *)((ulonglong)local_1b8 & 0xffffffffffffff00);
              FUN_1498c72e4(local_130,param_1[0x15] + 8,param_1[0x15] + 0x1c);
              local_148 = &local_1a4;
              local_140 = local_130;
              FUN_1498d10d0(plVar11,local_134,&local_148);
              if (local_120 != 0) {
                FUN_1400020a8();
              }
              plVar11 = (longlong *)param_1[0x14];
              iVar10 = (int)plVar11[1];
              iVar7 = *(int *)((longlong)plVar11 + 0x34);
LAB_14469496a:
              if (iVar10 == iVar7) {
LAB_1446949c6:
                lVar17 = 0;
              }
              else {
                plVar9 = plVar11 + 7;
                if ((longlong *)plVar11[8] != (longlong *)0x0) {
                  plVar9 = (longlong *)plVar11[8];
                }
                iVar10 = *(int *)((longlong)plVar9 +
                                 (ulonglong)((int)plVar11[9] - 1U & local_1a4) * 4);
                if (iVar10 == -1) goto LAB_1446949c6;
                do {
                  lVar17 = *plVar11 + (longlong)iVar10 * 0x50;
                  if (*(uint *)(*plVar11 + (longlong)iVar10 * 0x50) == local_1a4)
                  goto LAB_1446949cf;
                  iVar10 = *(int *)(lVar17 + 0x48);
                } while (iVar10 != -1);
                lVar17 = 0;
              }
LAB_1446949cf:
              uVar12 = uVar18 >> ((byte)local_1a4 & 0x1f);
              iVar7 = param_2 / (1 << ((byte)local_1a4 & 0x1f));
              iVar10 = *(int *)(lVar17 + 0x2c) + -1;
              if (iVar7 < iVar10) {
                iVar10 = iVar7;
              }
              uVar15 = *(int *)(lVar17 + 0x28) - 1;
              if ((int)uVar15 <= (int)uVar12) {
                uVar12 = uVar15;
              }
              iVar10 = iVar10 * *(int *)(lVar17 + 0x28);
              iVar7 = iVar10 + uVar12;
              lVar20 = lVar17 + 8;
              if (*(longlong *)(lVar17 + 0x18) != 0) {
                lVar20 = *(longlong *)(lVar17 + 0x18);
              }
              iVar10 = iVar10 + uVar12 + 0x1f;
              if (-1 < iVar7) {
                iVar10 = iVar7;
              }
              puVar1 = (uint *)(lVar20 + (longlong)(iVar10 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
              *(undefined1 *)(lVar17 + 0x40) = 1;
              uVar12 = local_1a4;
            }
            local_1a4 = uVar12 + 1;
          } while ((int)uVar12 < (int)local_1a8);
        }
      }
LAB_144694a4e:
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < *(int *)param_1[2]);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144694ae4 FUN_144694ae4 body=455 status=ok
// SIG undefined FUN_144694ae4(void)

undefined1 (*) [16]
FUN_144694ae4(longlong param_1,undefined1 (*param_2) [16],float *param_3,double *param_4,
             undefined8 param_5)

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
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar7 = (double)((*param_3 / 360.0) * (float)param_5 * 6.2831855);
  dVar5 = (double)(((param_3[1] / 180.0) * (param_5._4_4_ + -0.5) + 0.5) * 3.1415927);
  dVar4 = sin(dVar5);
  dVar5 = cos(dVar5);
  dVar6 = sin(dVar7);
  dVar7 = cos(dVar7);
  dVar10 = (double)*(float *)(param_1 + 0x20);
  dVar8 = dVar7 * dVar4 * dVar10 * param_4[8];
  dVar9 = dVar6 * dVar4 * dVar10 * param_4[9];
  dVar11 = dVar5 * dVar10 * param_4[10];
  dVar10 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar7 = param_4[3];
  dVar4 = dVar9 * dVar10 - dVar8 * dVar2;
  dVar12 = dVar11 * dVar2 - dVar9 * dVar3;
  dVar6 = dVar8 * dVar3 - dVar10 * dVar11;
  dVar12 = dVar12 + dVar12;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  dVar9 = (dVar3 * dVar12 - dVar10 * dVar4) + param_4[3] * dVar6 + dVar9 + param_4[5];
  dVar5 = param_4[6];
  auVar1._8_4_ = SUB84(dVar9,0);
  auVar1._0_8_ = (dVar4 * dVar2 - dVar6 * dVar3) + dVar7 * dVar12 + dVar8 + param_4[4];
  auVar1._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *param_2 = auVar1;
  *(double *)param_2[1] = dVar4 * dVar7 + dVar11 + (dVar6 * dVar10 - dVar12 * dVar2) + dVar5;
  return param_2;
}



// FUNCTION 144694cbe FUN_144694cbe body=5421 status=ok
// SIG undefined FUN_144694cbe(void)

void FUN_144694cbe(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  wchar_t wVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  DWORD DVar16;
  DWORD DVar17;
  longlong *plVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  ushort uVar25;
  uint uVar26;
  undefined4 uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  wchar_t *pwVar32;
  ushort uVar33;
  uint uVar34;
  ulonglong uVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auStack_238 [32];
  int local_218;
  longlong local_210;
  undefined1 local_201;
  longlong *local_200;
  int *local_1f8;
  int *local_1f0;
  undefined2 *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined2 *local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  int iStack_1c4;
  undefined2 *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0 [2];
  ulonglong local_1a0;
  char local_190;
  undefined8 local_18c;
  undefined8 local_184;
  undefined4 local_17c;
  int local_178;
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  longlong local_158;
  ulonglong uStack_150;
  wchar_t *local_148;
  int local_140;
  undefined4 local_13c;
  wchar_t *local_138;
  int local_130;
  undefined4 local_12c;
  wchar_t *local_128;
  int local_120;
  longlong local_118;
  longlong *local_110;
  undefined2 *local_108;
  int local_100;
  wchar_t *local_f8;
  longlong *plStack_f0;
  wchar_t *local_e8;
  ulonglong uStack_e0;
  wchar_t *local_d8;
  wchar_t *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  plVar3 = *(longlong **)(param_1 + 4);
  if (plVar3 == (longlong *)0x0) goto LAB_1446956df;
  iVar12 = (int)plVar3[1];
  do {
    if (iVar12 == 0) goto LAB_1446956df;
    LOCK();
    iVar15 = (int)plVar3[1];
    bVar36 = iVar12 == iVar15;
    if (bVar36) {
      *(int *)(plVar3 + 1) = iVar12 + 1;
      iVar15 = iVar12;
    }
    iVar12 = iVar15;
    UNLOCK();
  } while (!bVar36);
  lVar29 = *(longlong *)(param_1 + 2);
  if (lVar29 != 0) {
    local_e8 = *(wchar_t **)(param_1 + 10);
    iVar12 = param_1[0xc] + -1;
    if (param_1[0xc] == 0) {
      iVar12 = 0;
    }
    uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar12);
    local_d8 = *(wchar_t **)(param_1 + 6);
    iVar12 = param_1[8] + -1;
    if (param_1[8] == 0) {
      iVar12 = 0;
    }
    local_d0 = (wchar_t *)CONCAT44(local_d0._4_4_,iVar12);
    FUN_140bee87a(&local_1e8,&local_e8,2);
    plVar18 = (longlong *)FUN_14054d1d4();
    puVar19 = local_1e8;
    if (local_1e0 == 0) {
      puVar19 = &DAT_149dfb77a;
    }
    cVar10 = (**(code **)(*plVar18 + 0x50))(plVar18,puVar19);
    if ((&local_1e8 != (undefined2 **)(param_1 + 10)) && (cVar10 == '\0')) {
      iVar12 = param_1[0xc];
      pvVar4 = *(void **)(param_1 + 10);
      local_1e0 = iVar12;
      if (iVar12 == 0 && local_1dc == 0) {
        local_1dc = 0;
      }
      else {
        FUN_1446dd670(&local_1e8,iVar12);
        if (iVar12 != 0) {
          memcpy(local_1e8,pvVar4,(longlong)iVar12 * 2);
        }
      }
    }
    local_1d8 = (undefined2 *)0x0;
    uStack_1d0 = 0;
    local_1c0 = (undefined2 *)0x0;
    uStack_1b8 = 0;
    local_1b0[0] = 0x10000ea60;
    if (1 < local_1e0) {
      local_158 = 0;
      uStack_150 = 0;
      local_201 = (char)param_1[0xe];
      FUN_14468c9c2(lVar29,&local_1e8,&local_158);
      if ((int)uStack_150 != 0) {
        plVar18 = (longlong *)(lVar29 + 0xb0);
        iVar12 = *(int *)(lVar29 + 0xb8);
        *(uint *)(lVar29 + 0xb8) = iVar12 + 1U;
        local_1f0 = param_1;
        if (*(uint *)(lVar29 + 0xbc) < iVar12 + 1U) {
          FUN_14626976c(plVar18,iVar12);
        }
        uVar35 = uStack_150;
        lVar8 = local_158;
        lVar30 = *plVar18;
        lVar28 = (longlong)iVar12 * 0x10;
        puVar20 = (undefined8 *)(lVar30 + lVar28);
        *(undefined8 *)(lVar30 + lVar28) = 0;
        *(int *)(lVar30 + 8 + lVar28) = (int)uStack_150;
        local_200 = plVar18;
        if ((int)uStack_150 == 0) {
          *(undefined4 *)((longlong)puVar20 + 0xc) = 0;
        }
        else {
          FUN_140b856de(puVar20,uStack_150 & 0xffffffff,0);
          FUN_140b8566a(*puVar20,lVar8,uVar35 & 0xffffffff);
        }
        FUN_140bee914(&local_f8,&local_1e8);
        FUN_144a06ecc(&local_108,&local_f8);
        FUN_140bee914(&local_118,&local_f8);
        uVar35 = (longlong)(int)plStack_f0 * 2;
        do {
          plVar18 = local_200;
          local_210 = lVar29;
          if (uVar35 == 0) goto LAB_144695372;
          uVar24 = uVar35 - 2;
          lVar30 = uVar35 - 2;
          uVar35 = uVar24;
        } while (*(short *)((longlong)local_f8 + lVar30) != 0x78);
        uVar13 = (uint)(uVar24 >> 1);
        if (uVar13 != 0xffffffff) {
          FUN_140bee914(&local_128,&local_f8);
          pwVar32 = L"";
          if ((int)plStack_f0 != 0) {
            pwVar32 = local_f8;
          }
          uVar31 = 0;
          uVar26 = (int)plStack_f0 - 1;
          if ((int)plStack_f0 == 0) {
            uVar26 = uVar31;
          }
          uVar34 = uVar13 + 1;
          if ((int)uVar26 <= (int)(uVar13 + 1)) {
            uVar34 = uVar26;
          }
          if ((int)uVar34 < 1) {
            uVar34 = uVar31;
          }
          FUN_14006620a(&local_e8,pwVar32 + uVar34,uVar26 - uVar34);
          uVar26 = (int)plStack_f0 - 1;
          if ((int)plStack_f0 == 0) {
            uVar26 = uVar31;
          }
          pwVar32 = L"";
          if ((int)plStack_f0 != 0) {
            pwVar32 = local_f8;
          }
          if ((int)uVar13 < (int)uVar26) {
            uVar26 = uVar13;
          }
          if ((int)uVar26 < 1) {
            uVar26 = uVar31;
          }
          FUN_14006620a(&local_138,pwVar32,uVar26);
          pwVar32 = L"";
          if ((int)uStack_e0 != 0) {
            pwVar32 = local_e8;
          }
          uVar13 = _wtoi(pwVar32);
          uVar26 = local_130 - 1;
          if (local_130 == 0) {
            uVar26 = uVar31;
          }
          do {
            uVar31 = uVar26;
            if ((int)uVar31 < 2) break;
            pwVar32 = L"";
            if (local_130 != 0) {
              pwVar32 = local_138;
            }
            uVar26 = uVar31 - 1;
            uVar34 = local_130 - 1;
            if (local_130 == 0) {
              uVar34 = 0;
            }
            uVar23 = uVar34;
            if ((int)uVar26 < (int)uVar34) {
              uVar23 = uVar26;
            }
            if ((int)uVar23 < 1) {
              uVar23 = 0;
            }
            FUN_14006620a(&local_148,pwVar32 + uVar23,uVar34 - uVar23);
            pwVar32 = local_148;
            if (local_140 == 0) {
              pwVar32 = L"";
            }
            wVar2 = *pwVar32;
            if ((wVar2 == L'-') || (wVar2 == L'+')) {
              wVar2 = pwVar32[1];
              pwVar32 = pwVar32 + 1;
            }
            if (wVar2 == L'\0') {
              bVar36 = true;
            }
            else {
              bVar36 = false;
              do {
                pwVar32 = pwVar32 + 1;
                if (wVar2 == L'.') {
                  bVar9 = true;
                  if (bVar36) {
LAB_1446950ac:
                    bVar36 = false;
                    goto LAB_1446950b6;
                  }
                }
                else {
                  iVar12 = iswdigit(wVar2);
                  bVar9 = bVar36;
                  if (iVar12 == 0) goto LAB_1446950ac;
                }
                bVar36 = bVar9;
                wVar2 = *pwVar32;
              } while (wVar2 != L'\0');
              bVar36 = true;
            }
LAB_1446950b6:
            if (local_148 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          } while (bVar36);
          lVar29 = local_210;
          uVar26 = local_130 - 1;
          pwVar32 = local_138;
          if (local_130 == 0) {
            uVar26 = 0;
            pwVar32 = L"";
          }
          if ((int)uVar26 <= (int)uVar31) {
            uVar31 = uVar26;
          }
          uVar35 = (ulonglong)uVar31;
          if ((int)uVar31 < 1) {
            uVar35 = 0;
          }
          FUN_14006620a(&local_148,pwVar32 + uVar35,uVar26 - (int)uVar35);
          if (local_138 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_138 = local_148;
          local_130 = local_140;
          local_12c = local_13c;
          pwVar32 = L"";
          if (local_140 != 0) {
            pwVar32 = local_148;
          }
          uVar26 = _wtoi(pwVar32);
          plVar18 = local_200;
          if (local_138 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_e8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          do {
            if (((int)uVar26 < 2) || ((int)uVar13 < 2)) break;
            uVar26 = uVar26 >> 1;
            uVar13 = uVar13 >> 1;
            FUN_140002266(&local_148,L"%dx%d",uVar26,uVar13);
            local_e8 = local_128;
            iVar12 = local_120 + -1;
            if (local_120 == 0) {
              iVar12 = 0;
            }
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar12);
            local_d8 = local_148;
            iVar12 = local_140 + -1;
            if (local_140 == 0) {
              iVar12 = 0;
            }
            local_d0 = (wchar_t *)CONCAT44(local_d0._4_4_,iVar12);
            FUN_140bee87a(&local_138,&local_e8,2);
            if (local_148 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            local_e8 = (wchar_t *)0x0;
            uStack_e0 = 0;
            FUN_14468c9c2(lVar29,&local_138,&local_e8);
            if ((int)uStack_e0 == 0) {
LAB_1446952e7:
              bVar36 = false;
            }
            else {
              uVar31 = *(uint *)(lVar29 + 0xb8);
              if ((longlong)(int)uVar31 < 1) goto LAB_1446952e7;
              bVar36 = false;
              if ((uVar31 < 0x20) &&
                 (lVar30 = *plVar18, bVar36 = false, (int)uStack_e0 == *(int *)(lVar30 + 8))) {
                *(uint *)(lVar29 + 0xb8) = uVar31 + 1;
                if (*(uint *)(lVar29 + 0xbc) <= uVar31) {
                  FUN_14626976c(plVar18,uVar31);
                  lVar30 = *plVar18;
                }
                uVar35 = uStack_e0;
                pwVar32 = local_e8;
                lVar29 = (longlong)(int)uVar31 * 0x10;
                puVar20 = (undefined8 *)(lVar30 + lVar29);
                *(undefined8 *)(lVar30 + lVar29) = 0;
                *(int *)(lVar30 + 8 + lVar29) = (int)uStack_e0;
                if ((int)uStack_e0 == 0) {
                  *(undefined4 *)((longlong)puVar20 + 0xc) = 0;
                }
                else {
                  FUN_140b856de(puVar20,uStack_e0 & 0xffffffff,0);
                  FUN_140b8566a(*puVar20,pwVar32,uVar35 & 0xffffffff);
                }
                bVar36 = true;
                lVar29 = local_210;
                plVar18 = local_200;
              }
            }
            FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
            if (local_e8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_138 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          } while (bVar36);
          if (local_128 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_144695372:
        if (local_118 != 0) {
          FUN_1400020a8();
        }
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_f8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        *(undefined1 **)(lVar29 + 0xd4) = &DAT_100000001;
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar29 + 0x18);
        EnterCriticalSection(lpCriticalSection);
        lVar30 = 0;
        FUN_144a06df0(&local_108,**(undefined8 **)(lVar29 + 0xb0),0);
        puVar19 = local_108;
        if (local_100 == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        local_1f8 = (int *)(lVar29 + 0xd4);
        while( true ) {
          uVar25 = *(ushort *)((longlong)puVar19 + lVar30);
          uVar35 = (ulonglong)uVar25;
          uVar33 = *(ushort *)((longlong)&DAT_149ef80de + lVar30);
          if (uVar25 != uVar33) break;
          if (uVar25 == 0) goto LAB_1446954be;
LAB_14469542d:
          lVar30 = lVar30 + 2;
        }
        if ((uVar33 | uVar25) < 0x80) {
          uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar35];
          uVar24 = (ulonglong)uVar33;
          uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
          if ((&DAT_149e05da0)[uVar35] == (&DAT_149e05da0)[uVar24]) goto LAB_14469542d;
        }
        if (uVar25 != uVar33) {
          puVar20 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          lVar29 = local_210;
          plVar18 = *(longlong **)(local_210 + 0x10);
          if (plVar18 == (longlong *)0x0) goto LAB_144695bd2;
          iVar12 = (int)plVar18[1];
          goto LAB_14469547f;
        }
LAB_1446954be:
        local_168 = (undefined2 *)0x0;
        local_160 = *(int *)(*(undefined8 **)*plVar18 + 1);
        lVar29 = (longlong)local_160;
        pvVar4 = (void *)**(undefined8 **)*plVar18;
        if (lVar29 == 0) {
          local_15c = 0;
        }
        else {
          FUN_1446dd670(&local_168,local_160,0);
          memcpy(local_168,pvVar4,lVar29 * 2);
        }
        local_110 = *(longlong **)(local_210 + 0x10);
        if (local_110 == (longlong *)0x0) {
          local_110 = (longlong *)0x0;
          local_118 = 0;
        }
        else {
          iVar12 = (int)local_110[1];
          local_118 = 0;
          do {
            if (iVar12 == 0) {
              local_110 = (longlong *)0x0;
              goto LAB_14469554c;
            }
            LOCK();
            iVar15 = (int)local_110[1];
            bVar36 = iVar12 == iVar15;
            if (bVar36) {
              *(int *)(local_110 + 1) = iVar12 + 1;
              iVar15 = iVar12;
            }
            iVar12 = iVar15;
            UNLOCK();
          } while (!bVar36);
          local_118 = *(longlong *)(local_210 + 8);
        }
LAB_14469554c:
        plVar18 = (longlong *)FUN_14054d1d4();
        puVar19 = local_168;
        if (local_160 == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        cVar10 = (**(code **)(*plVar18 + 0x48))(plVar18,puVar19);
        if (cVar10 != '\0') {
          local_e8 = (wchar_t *)0x0;
          uStack_e0 = 0;
          local_d0 = (wchar_t *)0x0;
          uStack_c8 = 0;
          local_c0 = 0x10000ea60;
          local_f8 = (wchar_t *)0x0;
          plStack_f0 = (longlong *)0x0;
          cVar10 = FUN_1498cd26a(&local_168);
          if (cVar10 != '\0') {
            FUN_140056680(&local_f8,L"EXR CUSTOM");
            pwVar32 = local_f8;
            if ((int)uStack_c8 == (int)plStack_f0) {
              bVar36 = true;
              if (1 < (int)uStack_c8) {
                iVar12 = wcscmp(local_d0,local_f8);
                bVar36 = iVar12 == 0;
              }
            }
            else {
              bVar36 = (int)plStack_f0 + (int)uStack_c8 == 1;
            }
            if (pwVar32 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar32);
            }
            if (bVar36) {
              pwVar32 = (wchar_t *)0x0;
              plVar18 = (longlong *)0x0;
              goto LAB_144695ba0;
            }
            FUN_140056680(&local_f8,L"EXR GPU");
            pwVar32 = local_f8;
            if ((int)uStack_c8 == (int)plStack_f0) {
              bVar36 = true;
              if (1 < (int)uStack_c8) {
                iVar12 = wcscmp(local_d0,local_f8);
                bVar36 = iVar12 == 0;
              }
            }
            else {
              bVar36 = (int)plStack_f0 + (int)uStack_c8 == 1;
            }
            if (pwVar32 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar32);
            }
            if ((DAT_14ca83900 != (longlong *)0x0) &&
               (iVar12 = (**(code **)(*DAT_14ca83900 + 0x28))(), lVar29 = DAT_14cc316c0, iVar12 == 3
               )) {
              pwVar32 = local_e8;
              if ((int)uStack_e0 == 0) {
                pwVar32 = L"";
              }
              lVar30 = 0;
              do {
                wVar2 = pwVar32[lVar30];
                bVar1 = "Uncompressed"[lVar30];
                iVar12 = (uint)(ushort)wVar2 - (uint)bVar1;
                if (iVar12 == 0) {
                  if (wVar2 == L'\0') goto LAB_14469609b;
                }
                else {
                  if (0x7f < ((uint)bVar1 | (uint)(ushort)wVar2)) goto LAB_144696092;
                  if ((&DAT_149e05da0)[(ushort)wVar2] != (&DAT_149e05da0)[bVar1])
                  goto LAB_14469608f;
                }
                lVar30 = lVar30 + 1;
              } while( true );
            }
          }
          goto LAB_144696188;
        }
        pwVar32 = (wchar_t *)0x0;
        plVar18 = (longlong *)0x0;
        lVar29 = local_210;
        goto LAB_144695598;
      }
      uVar35 = 0;
      bVar36 = false;
      goto LAB_144695662;
    }
    goto code_r0x00014469568d;
  }
  goto LAB_1446956c2;
LAB_144695bd2:
  uVar7 = *(undefined8 *)(local_210 + 0xa8);
  *puVar20 = &PTR_FUN_14bef10d0;
  puVar20[1] = uVar7;
  puVar20[2] = 0;
  puVar20[3] = 0;
  bVar36 = true;
  plVar18 = (longlong *)0x0;
  goto LAB_144695bf6;
LAB_14469608f:
  iVar12 = (uint)(byte)(&DAT_149e05da0)[(ushort)wVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_144696092:
  if (iVar12 == 0) {
LAB_14469609b:
    iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
      uVar35 = 0;
    }
    else if (iVar12 == 1) {
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      uVar35 = (ulonglong)(DVar16 != DVar17);
    }
    else {
      uVar35 = 1;
    }
    if ((bVar36 & *(byte *)(lVar29 + uVar35)) != 1) goto LAB_144696188;
    plVar18 = (longlong *)FUN_14001cc68(0x188,0x10);
    plVar18[1] = (longlong)&DAT_100000001;
    *plVar18 = (longlong)&PTR_FUN_14bef1930;
    pwVar32 = (wchar_t *)(plVar18 + 2);
    FUN_1498cd790(pwVar32,&local_118);
    local_f8 = pwVar32;
    plStack_f0 = plVar18;
    FUN_1498d5be8(&local_f8,pwVar32);
    plVar6 = plStack_f0;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar22 = plStack_f0 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar21 = (int *)((longlong)plVar6 + 0xc);
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (*piVar21 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  else {
LAB_144696188:
    pwVar32 = (wchar_t *)FUN_14001cc68(0xe0,0x10);
    FUN_1498cd072(pwVar32,&local_118);
    plVar18 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar18[1] = (longlong)&DAT_100000001;
    *plVar18 = (longlong)&PTR_LAB_14bef1910;
    plVar18[2] = (longlong)pwVar32;
  }
LAB_144695ba0:
  lVar29 = local_210;
  if (local_d0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_144695598:
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(wchar_t **)(lVar29 + 0x100) = pwVar32;
  plVar6 = *(longlong **)(lVar29 + 0x108);
  if (plVar18 == plVar6) {
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar18 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar21 = (int *)((longlong)plVar18 + 0xc);
        *piVar21 = *piVar21 + -1;
        iVar12 = *piVar21;
        UNLOCK();
        plVar6 = plVar18;
        goto joined_r0x0001446955fb;
      }
    }
  }
  else {
    *(longlong **)(lVar29 + 0x108) = plVar18;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar6 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar21 = (int *)((longlong)plVar6 + 0xc);
        *piVar21 = *piVar21 + -1;
        iVar12 = *piVar21;
        UNLOCK();
joined_r0x0001446955fb:
        if (iVar12 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  plVar18 = local_110;
  if (local_110 != (longlong *)0x0) goto LAB_144695613;
  goto LAB_144695630;
  while( true ) {
    LOCK();
    iVar15 = (int)plVar18[1];
    bVar36 = iVar12 == iVar15;
    if (bVar36) {
      *(int *)(plVar18 + 1) = iVar12 + 1;
      iVar15 = iVar12;
    }
    iVar12 = iVar15;
    UNLOCK();
    if (bVar36) break;
LAB_14469547f:
    if (iVar12 == 0) goto LAB_144695bd2;
  }
  uVar7 = *(undefined8 *)(local_210 + 8);
  uVar5 = *(undefined8 *)(local_210 + 0xa8);
  *puVar20 = &PTR_FUN_14bef10d0;
  puVar20[1] = uVar5;
  puVar20[2] = uVar7;
  puVar20[3] = plVar18;
  LOCK();
  *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
  UNLOCK();
  bVar36 = false;
LAB_144695bf6:
  plVar22 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar22[1] = (longlong)&DAT_100000001;
  *plVar22 = (longlong)&PTR_FUN_14bef1850;
  plVar22[2] = (longlong)puVar20;
  *(undefined8 **)(lVar29 + 0x100) = puVar20;
  plVar6 = *(longlong **)(lVar29 + 0x108);
  if (plVar22 == plVar6) {
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar22 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar21 = (int *)((longlong)plVar22 + 0xc);
        *piVar21 = *piVar21 + -1;
        iVar12 = *piVar21;
        UNLOCK();
        plVar6 = plVar22;
        goto joined_r0x000144695c6f;
      }
    }
  }
  else {
    *(longlong **)(lVar29 + 0x108) = plVar22;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar6 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar21 = (int *)((longlong)plVar6 + 0xc);
        *piVar21 = *piVar21 + -1;
        iVar12 = *piVar21;
        UNLOCK();
joined_r0x000144695c6f:
        if (iVar12 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  lVar29 = local_210;
  if (!bVar36) {
LAB_144695613:
    LOCK();
    plVar6 = plVar18 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar21 = (int *)((longlong)plVar18 + 0xc);
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (*piVar21 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
LAB_144695630:
  if (*(longlong *)(lVar29 + 0x100) == 0) {
LAB_14469563e:
    bVar36 = false;
  }
  else {
    plVar18 = (longlong *)FUN_145b15610();
    lVar30 = plVar18[0x22];
    if (lVar30 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar30 = plVar18[0x22];
    }
    cVar10 = *(char *)(lVar30 + 0x30);
    *(char *)(lVar29 + 0x1d1) = cVar10;
    if (cVar10 == '\x01') {
      *(byte *)(lVar29 + 0x1d2) = *(byte *)(lVar29 + 0x1d0) ^ 1;
      if (*(byte *)(lVar29 + 0x1d0) != 0) goto LAB_14469583b;
    }
    else {
      *(undefined1 *)(lVar29 + 0x1d2) = 0;
LAB_14469583b:
      *(undefined8 *)(lVar29 + 0x1d4) = 0;
    }
    uVar11 = 0;
    if (*(char *)(lVar29 + 0x1c8) == '\0') {
      uVar11 = (undefined1)*(undefined4 *)(lVar30 + 0x48);
    }
    *(undefined1 *)(lVar29 + 0x1a0) = uVar11;
    puVar19 = local_1e8;
    if (local_1e0 == 0) {
      puVar19 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_e8,puVar19,1);
    *(wchar_t **)(lVar29 + 0x158) = local_e8;
    local_e8 = (wchar_t *)((ulonglong)local_e8 & 0xffffffff00000000);
    if (*(char *)(lVar29 + 0x1a0) == '\x01') {
      plVar18 = (longlong *)FUN_1498c95cc(*(undefined8 *)(lVar29 + 0x120),lVar29 + 0x158,0);
    }
    else {
      plVar18 = (longlong *)FUN_1498cb066(lVar29 + 0x40,&local_e8);
    }
    if (plVar18 == (longlong *)0x0) {
LAB_144695904:
      cVar10 = (**(code **)**(undefined8 **)(lVar29 + 0x100))
                         (*(undefined8 **)(lVar29 + 0x100),**(undefined8 **)(lVar29 + 0xb0),
                          &local_1d8);
      if (cVar10 == '\0') goto LAB_14469563e;
    }
    else {
      lVar29 = *plVar18;
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar29 + 0x18));
      iVar12 = *(int *)(lVar29 + 0x48);
      iVar15 = *(int *)(lVar29 + 0x74);
      if ((LPCRITICAL_SECTION)(lVar29 + 0x18) != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar29 + 0x18));
      }
      lVar29 = local_210;
      if (iVar12 == iVar15) goto LAB_144695904;
      FUN_1498c9a3e(*plVar18,&local_e8);
      FUN_1498ca918(&local_1d8,&local_e8);
      if (local_d0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar8 = local_210;
    if (local_1a0 == 0) goto LAB_14469563e;
    iVar12 = iStack_1c4;
    if (local_1c8 < iStack_1c4) {
      iVar12 = local_1c8;
    }
    bVar36 = false;
    uVar13 = 0;
    if (0 < iVar12) {
      if (local_178 < *(int *)(lVar29 + 0xb8)) {
        local_178 = *(int *)(lVar29 + 0xb8);
      }
      *(int *)(lVar29 + 0xf4) = local_178;
      LOCK();
      *(undefined4 *)(lVar29 + 0xf8) = 0xffffffff;
      UNLOCK();
      *(ulonglong *)(lVar29 + 0x140) = CONCAT44(iStack_1c4,local_1c8);
      piVar21 = (int *)local_1b0;
      if (0 < *local_1f0) {
        piVar21 = local_1f0;
      }
      if (local_1f0[1] < 1) {
        piVar21 = (int *)local_1b0;
      }
      uVar7 = *(undefined8 *)piVar21;
      *(undefined8 *)(lVar29 + 0x150) = uVar7;
      if (0 < *(int *)(lVar29 + 0xb8)) {
        uVar13 = *(uint *)(*local_200 + 8);
      }
      auVar37._8_8_ = 0;
      auVar37._0_8_ =
           ((double)(int)((ulonglong)uVar7 >> 0x20) / (double)(int)uVar7) * (double)uVar13 *
           10000000.0 + 0.5;
      auVar37 = roundpd(auVar37,auVar37,1);
      *(longlong *)(lVar29 + 0x148) = (longlong)auVar37._0_8_;
      uVar35 = local_1a0;
      if (1 < *(int *)(lVar29 + 0xb8)) {
        uVar35 = (local_1a0 << 2) / 3;
      }
      if (local_190 == '\x01') {
        *(undefined4 *)(local_210 + 0xe4) = local_17c;
        *(undefined8 *)(local_210 + 0xd4) = local_18c;
        *(undefined8 *)(local_210 + 0xdc) = local_184;
      }
      lVar29 = *(longlong *)(local_210 + 0x130);
      if ((lVar29 != 0) &&
         (((iVar12 = *(int *)(local_210 + 0xf4), 1 < iVar12 || (1 < *local_1f8)) ||
          (1 < *(int *)(local_210 + 0xd8))))) {
        *(undefined8 *)(lVar29 + 0x50) = *(undefined8 *)(local_210 + 0x158);
        *(undefined8 *)(lVar29 + 0x58) = *(undefined8 *)(local_210 + 0x140);
        uVar7 = *(undefined8 *)(local_1f8 + 2);
        *(undefined8 *)(lVar29 + 100) = *(undefined8 *)local_1f8;
        *(undefined8 *)(lVar29 + 0x6c) = uVar7;
        if (iVar12 < 2) {
          iVar12 = 1;
        }
        *(int *)(lVar29 + 0x74) = local_1f8[4];
        *(int *)(lVar29 + 0x60) = iVar12;
        iVar12 = *(int *)(lVar29 + 100);
        if (iVar12 < 2) {
          iVar12 = 1;
        }
        *(int *)(lVar29 + 100) = iVar12;
        iVar12 = 1;
        if (1 < *(int *)(lVar29 + 0x68)) {
          iVar12 = *(int *)(lVar29 + 0x68);
        }
        *(int *)(lVar29 + 0x68) = iVar12;
      }
      FUN_1405d5a96(&local_e8);
      lVar29 = local_210;
      if (*(char *)(lVar8 + 0x1c8) == '\x01') {
        iVar12 = (int)(*(float *)(lVar8 + 0x1cc) /
                      ((float)*(int *)(lVar8 + 0x154) / (float)*(int *)(lVar8 + 0x150)));
        *(int *)(lVar8 + 0xf0) = iVar12;
        iVar15 = 0;
        if (0 < *(int *)(lVar8 + 0xb8)) {
          iVar15 = *(int *)(*local_200 + 8);
        }
        iVar14 = 2;
        if (iVar15 < 2) {
          iVar14 = iVar15;
        }
        if (iVar12 < iVar15) {
          iVar15 = iVar12;
        }
        if (iVar15 < iVar14) {
          iVar15 = iVar14;
        }
        *(int *)(local_210 + 0xf0) = iVar15;
        *(undefined4 *)(local_210 + 0xec) = 0;
        iVar12 = iVar15;
      }
      else {
        fVar38 = *(float *)(lVar30 + 0x38) * 1024.0 * 1024.0 * 1024.0;
        uVar24 = (ulonglong)fVar38;
        uVar24 = (longlong)(fVar38 - 9.223372e+18) & (longlong)uVar24 >> 0x3f | uVar24;
        if (local_a0 <= uVar24) {
          uVar24 = local_a0;
        }
        iVar12 = 0;
        if (0 < *(int *)(lVar8 + 0xb8)) {
          iVar12 = *(int *)(*local_200 + 8);
        }
        iVar15 = 2;
        if (iVar12 < 2) {
          iVar15 = iVar12;
        }
        iVar14 = (int)(uVar24 / uVar35);
        if (iVar14 < iVar12) {
          iVar12 = iVar14;
        }
        if (iVar12 < iVar15) {
          iVar12 = iVar15;
        }
        *(int *)(local_210 + 0xf0) = iVar12;
        fVar38 = *(float *)(lVar30 + 0x34);
        if (100.0 <= fVar38) {
          fVar38 = 100.0;
        }
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        *(int *)(local_210 + 0xec) = (int)((fVar38 / 100.0) * (float)iVar12);
        fVar38 = (1.0 - fVar38 / 100.0) * (float)iVar12;
        iVar15 = -((int)ROUND(-0.5 - (fVar38 + fVar38)) >> 1);
      }
      *(int *)(local_210 + 0xe8) = iVar15;
      FUN_1498c9a82(local_210 + 0x40,iVar12);
      lVar30 = lVar29 + 0xc0;
      FUN_14020fad6(lVar30,L"Image Sequence\n");
      FUN_140002266(&local_f8,L"    Dimension: %i x %i\n",*(undefined4 *)(lVar29 + 0x140),
                    *(undefined4 *)(lVar29 + 0x144));
      iVar12 = (int)plStack_f0 + -1;
      if ((int)plStack_f0 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(lVar30,local_f8,iVar12);
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      puVar19 = local_1c0;
      if ((int)uStack_1b8 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_f8,L"    Format: %s\n",puVar19);
      iVar12 = (int)plStack_f0 + -1;
      if ((int)plStack_f0 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(lVar30,local_f8,iVar12);
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      puVar19 = local_1d8;
      if ((int)uStack_1d0 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_f8,L"    Compression: %s\n",puVar19);
      uVar27 = 0;
      iVar12 = (int)plStack_f0 + -1;
      if ((int)plStack_f0 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(lVar30,local_f8,iVar12);
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (0 < *(int *)(local_210 + 0xb8)) {
        uVar27 = *(undefined4 *)(*local_200 + 8);
      }
      FUN_140002266(&local_f8,L"    Frames: %i\n",uVar27);
      iVar12 = (int)plStack_f0 + -1;
      if ((int)plStack_f0 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(lVar30,local_f8,iVar12);
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar29 = local_210;
      local_218 = *(int *)(local_210 + 0x154);
      FUN_140002266(&local_f8,L"    Frame Rate: %.2f (%i/%i)\n",
                    (double)*(int *)(local_210 + 0x150) / (double)local_218);
      iVar12 = (int)plStack_f0 + -1;
      if ((int)plStack_f0 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(lVar30,local_f8,iVar12);
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      bVar36 = true;
    }
  }
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar35 = uStack_150 & 0xffffffff;
LAB_144695662:
  FUN_1447a1747(local_158,uVar35);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (bVar36) {
    FUN_1498ca8c6(lVar29,&local_1d8,local_201);
  }
code_r0x00014469568d:
  *(undefined1 *)(lVar29 + 0xd0) = 1;
  if (local_1c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1446956c2:
  LOCK();
  plVar18 = plVar3 + 1;
  *(int *)plVar18 = (int)*plVar18 + -1;
  UNLOCK();
  if ((int)*plVar18 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar21 = (int *)((longlong)plVar3 + 0xc);
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (*piVar21 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1446956df:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446961f0 FUN_1446961f0 body=5 status=ok
// SIG undefined FUN_1446961f0(void)

longlong FUN_1446961f0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1446961f6 FUN_1446961f6 body=29 status=ok
// SIG undefined FUN_1446961f6(void)

void FUN_1446961f6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144696214 FUN_144696214 body=92 status=ok
// SIG undefined FUN_144696214(void)

undefined8 * FUN_144696214(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14bef18d0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144696298 FUN_144696298 body=9 status=ok
// SIG undefined FUN_144696298(void)

void FUN_144696298(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1446962a2 FUN_1446962a2 body=29 status=ok
// SIG undefined FUN_1446962a2(void)

undefined8 FUN_1446962a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446962c0 FUN_1446962c0 body=241 status=ok
// SIG undefined FUN_1446962c0(void)

void FUN_1446962c0(undefined8 param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_1498d5cac(param_1,&local_78);
  if ((longlong)(int)uStack_70 != 0) {
    puVar1 = local_78 + (int)uStack_70;
    puVar5 = local_78;
    do {
      local_88 = 0;
      uStack_80 = 0;
      FUN_1498d5f58(param_1,*puVar5,&local_88);
      lVar3 = local_88;
      lVar6 = (longlong)(int)uStack_80;
      if (lVar6 != 0) {
        lVar4 = 0;
        do {
          lVar2 = *(longlong *)(lVar3 + lVar4);
          if (lVar2 != 0) {
            FUN_14469113a(lVar2);
            FUN_1400020a8(lVar2);
          }
          lVar4 = lVar4 + 8;
        } while (lVar6 * 8 != lVar4);
      }
      if (local_88 != 0) {
        FUN_1400020a8(local_88);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  if (local_78 != (undefined4 *)0x0) {
    FUN_1400020a8(local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446963c2 FUN_1446963c2 body=29 status=ok
// SIG undefined FUN_1446963c2(void)

void FUN_1446963c2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446963e0 FUN_1446963e0 body=73 status=ok
// SIG undefined FUN_1446963e0(void)

undefined8 * FUN_1446963e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef1950;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1498d0152(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14469642a FUN_14469642a body=282 status=ok
// SIG undefined FUN_14469642a(void)

undefined8 * FUN_14469642a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144696270);
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



// FUNCTION 144696544 FUN_144696544 body=116 status=ok
// SIG undefined FUN_144696544(void)

void FUN_144696544(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1446962c0(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1498d0152(param_1 + 0x15);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446965ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1446965b8 FUN_1446965b8 body=33 status=ok
// SIG undefined FUN_1446965b8(void)

undefined8 FUN_1446965b8(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(longlong *)*param_2 + 0x38))
            ((longlong *)*param_2,param_1,*(undefined4 *)(param_2 + 1));
  return param_1;
}



// FUNCTION 144696604 FUN_144696604 body=29 status=ok
// SIG undefined FUN_144696604(void)

undefined8 FUN_144696604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144696622 FUN_144696622 body=341 status=ok
// SIG undefined FUN_144696622(void)

void FUN_144696622(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    uVar2 = **(undefined8 **)(param_1 + 0x10);
    lVar6 = (*(undefined8 **)(param_1 + 0x10))[2];
    uVar1 = *(uint *)(lVar6 + 0x20);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar8 + 7;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2,0x40);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar8 + 7;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a38bd48;
    puVar8[2] = lVar6;
    puVar8[3] = 0;
    puVar8[4] = uVar2;
    puVar8[5] = 0;
    puVar8[6] = (ulonglong)uVar1;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0x20);
    puVar8 = puVar10 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = **(undefined8 **)(param_1 + 0x10);
      uVar5 = (*(undefined8 **)(param_1 + 0x10))[2];
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar7 + 7;
      if ((undefined8 *)param_2[1] < puVar9) {
        FUN_140023dd8(param_2,0x40);
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar7 + 7;
      }
      *param_2 = (ulonglong)puVar9;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar7;
      param_2[6] = (ulonglong)(puVar7 + 1);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a38bd48;
      puVar7[2] = uVar5;
      puVar7[3] = uVar2;
      puVar7[4] = uVar4;
      puVar7[5] = uVar2;
      puVar7[6] = uVar3;
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar8);
  }
  return;
}



// FUNCTION 144696788 FUN_144696788 body=29 status=ok
// SIG undefined FUN_144696788(void)

void FUN_144696788(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446967a6 FUN_1446967a6 body=135 status=ok
// SIG undefined FUN_1446967a6(void)

undefined8 * FUN_1446967a6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bef19d0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14469682e FUN_14469682e body=282 status=ok
// SIG undefined FUN_14469682e(void)

undefined8 * FUN_14469682e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144696270);
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



// FUNCTION 144696948 FUN_144696948 body=184 status=ok
// SIG undefined FUN_144696948(void)

void FUN_144696948(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_144696622(param_1 + 0x15,&DAT_14ca85100);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x18];
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
  plVar3 = (longlong *)param_1[0x16];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446969f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144696a00 FUN_144696a00 body=29 status=ok
// SIG undefined FUN_144696a00(void)

undefined8 FUN_144696a00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144696a32 FUN_144696a32 body=85 status=ok
// SIG undefined FUN_144696a32(void)

void FUN_144696a32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bef1ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bef1a70;
  return;
}



// FUNCTION 144696a88 FUN_144696a88 body=85 status=ok
// SIG undefined FUN_144696a88(void)

void FUN_144696a88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bef1ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bef1a70;
  return;
}



// FUNCTION 144696ade FUN_144696ade body=118 status=ok
// SIG undefined FUN_144696ade(void)

void FUN_144696ade(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bef1ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bef1a70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144696b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144696b54 FUN_144696b54 body=163 status=ok
// SIG undefined FUN_144696b54(void)

undefined8
FUN_144696b54(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_144696c9c(param_2,param_3,param_4,param_5);
  lVar4 = *param_3;
  if (lVar4 != 0) {
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
  FUN_1498cdf8c(param_5);
  return 0;
}



// FUNCTION 144696bf8 FUN_144696bf8 body=163 status=ok
// SIG undefined FUN_144696bf8(void)

undefined8
FUN_144696bf8(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_144696c9c(param_2,param_3,param_4,param_5);
  lVar4 = *param_3;
  if (lVar4 != 0) {
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
  FUN_1498cdf8c(param_5);
  return 1;
}



// FUNCTION 144696c9c FUN_144696c9c body=1502 status=ok
// SIG undefined FUN_144696c9c(void)

void FUN_144696c9c(undefined8 param_1,ulonglong *param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStack_1b8 [32];
  uint local_198;
  longlong **local_190;
  ulonglong *local_188;
  ulonglong *local_180;
  longlong **local_178;
  ulonglong local_168;
  int local_15c;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  uint *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  ulonglong local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_148 = *param_4;
  *param_4 = 0;
  local_140 = *(undefined4 *)(param_4 + 1);
  local_13c = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_138 = param_4[2];
  local_130 = param_4[3];
  param_4[3] = 0;
  local_128 = *(undefined4 *)(param_4 + 4);
  local_124 = *(undefined4 *)((longlong)param_4 + 0x24);
  param_4[4] = 0;
  local_120 = param_4[5];
  uStack_118 = param_4[6];
  local_110 = param_4[7];
  uStack_108 = param_4[8];
  uStack_100 = param_4[9];
  uStack_ec = *(undefined8 *)((longlong)param_4 + 0x5c);
  uStack_f0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_4 + 0x54) >> 0x20);
  uStack_f8 = (undefined4)param_4[10];
  local_f4 = (undefined4)((ulonglong)param_4[10] >> 0x20);
  local_e0 = (undefined4)param_4[0xd];
  iStack_dc = (int)((ulonglong)param_4[0xd] >> 0x20);
  iStack_d8 = (int)param_4[0xe];
  uStack_d4 = (undefined4)((ulonglong)param_4[0xe] >> 0x20);
  local_d0 = *(undefined4 *)(param_4 + 0xf);
  local_c8 = (uint *)param_4[0x10];
  param_4[0x10] = 0;
  local_c0 = *(int *)(param_4 + 0x11);
  local_bc = *(undefined4 *)((longlong)param_4 + 0x8c);
  param_4[0x11] = 0;
  local_b8 = param_4[0x12];
  param_4[0x12] = 0;
  local_b0 = *(undefined4 *)(param_4 + 0x13);
  local_ac = *(undefined4 *)((longlong)param_4 + 0x9c);
  param_4[0x13] = 0;
  local_a8 = *(undefined4 *)(param_4 + 0x14);
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0xa4);
  uStack_a0 = *(undefined4 *)(param_4 + 0x15);
  uVar2 = *(uint *)((longlong)param_4 + 0xac);
  local_168 = *param_2;
  *param_2 = 0;
  local_158 = param_1;
  uStack_9c = uVar2;
  if (-1 < (int)uVar2) {
    local_150 = param_3 + 7;
    local_15c = 1 << ((byte)uVar2 & 0x1f);
    uVar14 = 0;
    do {
      iVar9 = iStack_d8;
      iVar12 = iStack_dc;
      iVar11 = 1 << ((byte)uVar14 & 0x1f);
      uVar10 = (longlong)iStack_dc / (longlong)iVar11 & 0xffffffffU |
               (longlong)iStack_d8 / (longlong)iVar11 << 0x20;
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar6 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar6 = local_150;
        }
        iVar11 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_3[9] + 0x7fffffffU & uVar2) * 4)
        ;
        if (iVar11 != -1) {
          do {
            lVar7 = *param_3 + (longlong)iVar11 * 0x20;
            if (*(uint *)(*param_3 + (longlong)iVar11 * 0x20) == uVar2) goto LAB_144696ea9;
            iVar11 = *(int *)(lVar7 + 0x18);
          } while (iVar11 != -1);
        }
      }
      lVar7 = 0;
LAB_144696ea9:
      plVar6 = *(longlong **)(lVar7 + 8);
      plVar5 = *(longlong **)(lVar7 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_78 = (longlong *)0x0;
      plStack_70 = (longlong *)&DAT_00000001;
      local_68 = uVar10;
      FUN_145a1a3ae(&local_78,0);
      local_80 = (longlong)iVar12 / (longlong)local_15c & 0xffffffffU |
                 (longlong)iVar9 / (longlong)local_15c << 0x20;
      *local_78 = 0;
      local_78[1] = uVar10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_98 = local_168;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
        UNLOCK();
      }
      local_178 = &local_78;
      local_180 = &local_68;
      local_188 = &local_80;
      local_190 = &local_90;
      local_198 = uVar14;
      local_90 = plVar6;
      local_88 = plVar5;
      FUN_14469727c(local_158,&local_98,&local_148,uVar2);
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
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
      bVar16 = uVar14 != uVar2;
      uVar14 = uVar14 + 1;
    } while (bVar16);
  }
  if (local_c0 == 0) {
LAB_1446971c5:
    uVar10 = local_168;
    if (local_168 != 0) {
      LOCK();
      puVar13 = (uint *)(local_168 + 8);
      uVar2 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(local_168 + 8);
        LOCK();
        uVar2 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_168 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = uVar10;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar16 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar16) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar16) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
    FUN_1498cdf8c(&local_148);
    if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar15 = local_c8 + (longlong)local_c0 * 6;
  puVar13 = local_c8;
LAB_144697032:
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    uVar14 = *puVar13;
    plVar6 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar6 = param_3 + 7;
    }
    iVar12 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_3[9] - 1U & uVar14) * 4);
    if (iVar12 != -1) {
      lVar7 = *param_3;
      iVar9 = iVar12;
      do {
        if (*(uint *)(lVar7 + (longlong)iVar9 * 0x20) == uVar14) goto LAB_144697083;
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar7 + 0x18);
      } while (iVar9 != -1);
    }
  }
  goto LAB_1446971b8;
  while (iVar12 = *(int *)(lVar8 + 0x18), iVar12 != -1) {
LAB_144697083:
    lVar8 = lVar7 + (longlong)iVar12 * 0x20;
    if (*(uint *)(lVar7 + (longlong)iVar12 * 0x20) == uVar14) goto LAB_14469709e;
  }
  lVar8 = 0;
LAB_14469709e:
  plVar6 = *(longlong **)(lVar8 + 8);
  plVar5 = *(longlong **)(lVar8 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar12 = 1 << ((byte)uVar14 & 0x1f);
  local_68 = (longlong)iStack_dc / (longlong)iVar12 & 0xffffffffU |
             (longlong)iStack_d8 / (longlong)iVar12 << 0x20;
  if ((((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) &&
      ((DAT_14cc316e0 != '\x01' ||
       ((*(uint *)(plVar6[2] + 8) & 0x3fffffff) != 0 &&
        ((byte)(*(uint *)(plVar6[2] + 8) >> 0x1e) & 1) == 0)))) && (*puVar13 != uVar2)) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_80 = local_168;
    if (local_168 != 0) {
      LOCK();
      *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
      UNLOCK();
    }
    local_178 = (longlong **)(puVar13 + 2);
    local_190 = &local_78;
    local_198 = uVar14;
    local_188 = &local_68;
    local_180 = &local_68;
    local_78 = plVar6;
    plStack_70 = plVar5;
    FUN_14469727c(local_158,&local_80,&local_148);
  }
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
LAB_1446971b8:
  puVar13 = puVar13 + 6;
  if (puVar13 == puVar15) goto LAB_1446971c5;
  goto LAB_144697032;
}



// FUNCTION 14469727c FUN_14469727c body=3251 status=ok
// SIG undefined FUN_14469727c(void)

void FUN_14469727c(ulonglong *param_1,longlong *param_2,longlong param_3,int param_4,
                  undefined1 param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [4];
  int iVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 uVar17;
  void *_Dst;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  wchar_t *_Dest;
  longlong lVar24;
  byte bVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_428 [32];
  undefined8 *local_408;
  longlong *local_400;
  float local_3f8;
  float local_3f0;
  float local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  longlong *local_3d0;
  undefined4 local_3c8;
  undefined1 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  longlong lStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 local_370 [8];
  undefined2 local_368;
  char cStack_366;
  undefined1 uStack_365;
  undefined4 uStack_364;
  undefined1 auStack_360 [4];
  undefined1 auStack_35c [4];
  longlong local_358 [2];
  undefined4 local_348;
  undefined1 local_344;
  undefined1 local_343;
  undefined1 local_298 [16];
  undefined1 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 local_270 [7];
  undefined1 auStack_269 [5];
  undefined1 auStack_264 [3];
  undefined1 auStack_261 [5];
  byte abStack_25c [3];
  undefined1 uStack_259;
  longlong local_258;
  longlong lStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  uint uStack_234;
  ulonglong local_230;
  wchar_t *local_228;
  ulonglong local_220;
  undefined8 uStack_218;
  longlong lStack_1a5;
  undefined1 local_198 [4];
  byte local_194;
  undefined1 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ushort local_a8;
  undefined8 local_a0;
  ushort local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_428;
  lVar21 = *param_2;
  lVar22 = 0x15;
  do {
    *(undefined1 (*) [16])(local_370 + lVar22 + 3) = (undefined1  [16])0x0;
    *(undefined4 *)(auStack_360 + lVar22 + 3) = 0xffffffff;
    *(undefined2 *)(auStack_35c + lVar22 + 3) = 0;
    lVar22 = lVar22 + 0x18;
  } while (lVar22 != 0xd5);
  local_284 = 0;
  local_298 = (undefined1  [16])0x0;
  local_288 = 0;
  local_280 = 0xffffffff;
  uStack_27c = 0xffffffff;
  uStack_278 = 0xffffffff;
  uStack_274 = 0xffffffff;
  _local_270 = 0;
  auStack_269._1_4_ = auStack_269._1_4_ & 0xffffff00;
  _auStack_264 = 0;
  auStack_261._1_3_ = 0;
  local_358[1] = 0;
  local_348 = 0xffffffff;
  local_344 = param_5;
  local_343 = 1;
  _Dest = (wchar_t *)(*param_1 + 1 & 0xfffffffffffffffe);
  pwVar13 = _Dest + 0x12;
  local_3a8 = param_2;
  local_358[0] = lVar21;
  if ((wchar_t *)param_1[1] < pwVar13) {
    FUN_140023dd8(param_1,0x26);
    _Dest = (wchar_t *)(*param_1 + 1 & 0xfffffffffffffffe);
    pwVar13 = _Dest + 0x12;
  }
  *param_1 = (ulonglong)pwVar13;
  wcscpy(_Dest,L"ExrTextureSwizzle");
  puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar26 + 0x23;
  if ((undefined8 *)param_1[1] < puVar14) {
    FUN_140023dd8(param_1,0x120);
    puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar26 + 0x23;
  }
  *param_1 = (ulonglong)puVar14;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar26;
  param_1[6] = (ulonglong)(puVar26 + 1);
  puVar26[1] = 0;
  *puVar26 = &PTR_FUN_14a217b50;
  memcpy(puVar26 + 2,local_358,0xe8);
  puVar26[0x1f] = 0;
  puVar26[0x20] = CONCAT44(_auStack_264,auStack_269._1_4_);
  *(uint *)((longlong)puVar26 + 0x107) = CONCAT31(auStack_261._1_3_,auStack_261[0]);
  puVar26[0x22] = _Dest;
  lVar21 = 0x11;
  do {
    *(undefined8 *)(local_270 + lVar21 + 7) = 0;
    *(undefined8 *)(auStack_264 + lVar21 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_259 + lVar21) = 0;
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0xd1);
  local_198 = (undefined1  [4])0x0;
  local_194 = 0;
  lVar21 = 0xd9;
  do {
    *(undefined8 *)(local_270 + lVar21 + 7) = 0;
    *(undefined8 *)(auStack_264 + lVar21 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_259 + lVar21) = 0;
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x199);
  local_d0 = 0;
  local_a0 = 0;
  local_98 = local_98 & 0xff;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = local_a8 & 0xff00;
  lVar21 = 0x15;
  do {
    if (*(longlong *)(local_370 + lVar21 + 3) == 0) break;
    *(longlong *)(local_270 + lVar21 + 3) = *(longlong *)(local_370 + lVar21 + 3);
    bVar3 = *(byte *)((longlong)local_358 + lVar21);
    bVar25 = bVar3 >> 2;
    auStack_261[lVar21 + 4] = bVar25;
    abStack_25c[lVar21] = bVar3 & 3;
    *(undefined4 *)(auStack_264 + lVar21 + 3) = *(undefined4 *)(auStack_360 + lVar21 + 3);
    *(uint *)(auStack_269 + lVar21 + 4) = (uint)(byte)auStack_35c[lVar21 + 3];
    local_198 = (undefined1  [4])((int)local_198 + 1);
    local_194 = local_194 | bVar25 == 2;
    lVar22 = *(longlong *)(&uStack_365 + lVar21);
    if (lVar22 != 0) {
      local_d0 = 1;
      uVar17 = *(undefined8 *)(auStack_269 + lVar21 + 4);
      *(undefined8 *)((longlong)&lStack_1a5 + lVar21) = *(undefined8 *)(local_270 + lVar21 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe63 + lVar21) = uVar17;
      *(undefined8 *)(local_198 + lVar21 + 3) = *(undefined8 *)(auStack_261 + lVar21 + 4);
      *(longlong *)((longlong)&lStack_1a5 + lVar21) = lVar22;
    }
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0xd5);
  auVar11 = local_198;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_c8 = ZEXT816(0);
  if (0 < (longlong)(int)local_198) {
    memcpy(param_1 + 0x15,&local_258,(longlong)(int)local_198 * 0x18);
  }
  *(undefined1 (*) [4])(param_1 + 0x14) = auVar11;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xfc | 2;
  bVar3 = *(byte *)(param_3 + 0x48);
  local_388 = *param_7;
  local_380 = *(undefined8 *)(param_3 + 0x74);
  local_370._0_4_ = *(int *)(param_3 + 0x40);
  local_398 = 0;
  lStack_390 = 0;
  iVar23 = local_370._0_4_ + -1;
  if (((bVar3 & 1) != 0) &&
     (fVar28 = (float)(int)((ulonglong)local_388 >> 0x20) /
               (float)(int)((ulonglong)local_380 >> 0x20),
     fVar29 = (float)(int)local_388 / (float)(int)local_380,
     local_378 = CONCAT44(-((int)ROUND(-0.5 - (fVar28 + fVar28)) >> 1),
                          -((int)ROUND(-0.5 - (fVar29 + fVar29)) >> 1)),
     param_4 < *(int *)(param_3 + 0x98))) {
    lVar21 = (longlong)param_4 * 0x10;
    if (0 < *(int *)(*(longlong *)(param_3 + 0x90) + 8 + lVar21)) {
      local_258 = 0;
      lStack_250 = 0;
      local_248 = 1;
      uStack_244 = 0;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_234 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_230 = (local_230 >> 8 & 0xffffff) << 8;
      local_228 = L"FExrImgMediaReaderGpu_TileDesc";
      local_220 = 0;
      uStack_218 = 0;
      iVar6 = *(int *)(*(longlong *)(param_3 + 0x90) + lVar21 + 8);
      iVar12 = iVar6 << 4;
      local_368 = (undefined2)iVar12;
      cStack_366 = (char)((uint)iVar12 >> 0x10);
      uStack_365 = (undefined1)((uint)iVar12 >> 0x18);
      uStack_364 = 0x10;
      auStack_360 = (undefined1  [4])0x10502;
      if (iVar12 == 0) {
        FUN_14570b4be(param_1,&local_258,0x10502,0x10);
      }
      if (*(char *)((longlong)param_1 + 0x69) == '\0') {
        FUN_14002049c(param_1,1);
        local_400 = &local_258;
        local_408 = (undefined8 *)CONCAT44(local_408._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_3a0,param_1,&local_368);
        *(undefined4 *)(local_3a0 + 0x18) = 0x70;
        FUN_14002049c(param_1,0);
      }
      else {
        local_400 = &local_258;
        local_408 = (undefined8 *)CONCAT44(local_408._4_4_,0x70);
        (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_3a0,param_1,&local_368);
        *(undefined4 *)(local_3a0 + 0x18) = 0x70;
      }
      lVar22 = local_3a0;
      cVar4 = *(char *)((longlong)param_1 + 0x69);
      if (cVar4 == '\0') {
        FUN_14002049c(param_1,1);
      }
      local_408 = (undefined8 *)CONCAT44(local_408._4_4_,iVar6);
      local_400 = (longlong *)CONCAT44(local_400._4_4_,1);
      _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,lVar22,0);
      if (cVar4 == '\0') {
        FUN_14002049c(param_1,0);
      }
      memcpy(_Dst,*(void **)(*(longlong *)(param_3 + 0x90) + lVar21),
             (longlong)*(int *)(*(longlong *)(param_3 + 0x90) + 8 + lVar21) << 4);
      if (*(char *)((longlong)param_1 + 0x69) == '\0') {
        FUN_14002049c(param_1,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar22);
        FUN_14002049c(param_1,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,lVar22);
      }
      local_368 = 0;
      uStack_365 = 0;
      uStack_364 = 0;
      auStack_360 = (undefined1  [4])0x0;
      auStack_35c = (undefined1  [4])0x0;
      uVar8 = *(uint *)(lVar22 + 0x28);
      cStack_366 = '\x04';
      if (((uVar8 & 0x10) == 0) && (cStack_366 = '\x02', (uVar8 >> 0x10 & 1) == 0)) {
        cStack_366 = ((byte)(uVar8 >> 0xd) & 1) * '\x02' + '\x01';
      }
      local_408 = (undefined8 *)&local_368;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_3a0,param_1,lVar22);
      lStack_390 = local_3a0;
      if (local_3a0 != 0) {
        LOCK();
        puVar2 = (uint *)(local_3a0 + 8);
        uVar8 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(local_3a0 + 8);
          LOCK();
          uVar8 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar25 = *(byte *)(local_3a0 + 0xd);
            plVar18 = (longlong *)FUN_14001cc68(0x10,8);
            plVar18[1] = local_3a0;
            plVar20 = DAT_14ca843c0;
            plVar19 = DAT_14ca843c8;
            if ((bVar25 & 2) == 0) {
              do {
                *plVar18 = (longlong)plVar20;
                LOCK();
                bVar27 = plVar20 != DAT_14ca843c0;
                plVar19 = plVar18;
                if (bVar27) {
                  plVar20 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar19;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar18 = (longlong)plVar19;
                LOCK();
                bVar27 = plVar19 != DAT_14ca843c8;
                plVar20 = plVar18;
                if (bVar27) {
                  plVar19 = DAT_14ca843c8;
                  plVar20 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar20;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
      bVar25 = 8;
      if (lVar22 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar22 + 8);
        uVar8 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar22 + 8);
          LOCK();
          uVar8 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar5 = *(byte *)(lVar22 + 0xd);
            plVar18 = (longlong *)FUN_14001cc68(0x10,8);
            plVar18[1] = lVar22;
            plVar20 = DAT_14ca843c0;
            plVar19 = DAT_14ca843c8;
            if ((bVar5 & 2) == 0) {
              do {
                *plVar18 = (longlong)plVar20;
                LOCK();
                bVar27 = plVar20 != DAT_14ca843c0;
                plVar19 = plVar18;
                if (bVar27) {
                  plVar20 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar19;
                UNLOCK();
              } while (bVar27);
            }
            else {
              do {
                *plVar18 = (longlong)plVar19;
                LOCK();
                bVar27 = plVar19 != DAT_14ca843c8;
                plVar20 = plVar18;
                if (bVar27) {
                  plVar19 = DAT_14ca843c8;
                  plVar20 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar20;
                UNLOCK();
              } while (bVar27);
            }
          }
        }
      }
      goto LAB_144697835;
    }
  }
  bVar25 = 0;
LAB_144697835:
  local_398 = *(undefined8 *)(*param_6 + 0x18);
  uVar17 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  uVar15 = FUN_1461168e4();
  FUN_1448e935e(uVar17,&local_258,uVar15,0);
  FUN_1461168e4();
  lVar24 = lStack_250;
  lVar22 = local_258;
  uVar15 = FUN_145fdfe3c();
  FUN_1448e935e(uVar17,&local_258,uVar15,iVar23 + (uint)(byte)(bVar3 << 2 | bVar25));
  FUN_145fdfe3c();
  lVar10 = lStack_250;
  lVar9 = local_258;
  local_248 = (undefined4)local_258;
  uStack_244 = (undefined4)((ulonglong)local_258 >> 0x20);
  uStack_240 = (undefined4)lStack_250;
  uStack_23c = (undefined4)((ulonglong)lStack_250 >> 0x20);
  uStack_238 = (undefined4)DAT_14c9c0d50;
  uStack_234 = (uint)((ulonglong)DAT_14c9c0d50 >> 0x20);
  local_230 = DAT_14c9c0d98;
  local_228 = (wchar_t *)DAT_14ca94df8;
  local_220 = local_220 & 0xffffffffffffff00;
  lVar21 = param_9[1];
  local_258 = lVar22;
  lStack_250 = lVar24;
  if ((longlong)(int)lVar21 != 0) {
    lVar22 = *param_9;
    lVar24 = 0;
    do {
      iVar23 = *(int *)(lVar22 + 0xc + lVar24);
      iVar6 = *(int *)(lVar22 + 8 + lVar24);
      iVar12 = *(int *)(lVar22 + 4 + lVar24);
      iVar7 = *(int *)(lVar22 + lVar24);
      puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar26 + 5;
      if ((undefined8 *)param_1[1] < puVar14) {
        FUN_140023dd8(param_1,0x30);
        puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar26 + 5;
      }
      *param_1 = (ulonglong)puVar14;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar26;
      param_1[6] = (ulonglong)(puVar26 + 1);
      puVar26[1] = 0;
      *puVar26 = &PTR_LAB_14a1e7fc8;
      *(float *)(puVar26 + 2) = (float)iVar7;
      *(float *)((longlong)puVar26 + 0x14) = (float)iVar12;
      *(undefined4 *)(puVar26 + 3) = 0;
      *(float *)((longlong)puVar26 + 0x1c) = (float)iVar6;
      *(float *)(puVar26 + 4) = (float)iVar23;
      *(undefined4 *)((longlong)puVar26 + 0x24) = 0x3f800000;
      FUN_1404e1f8e(param_1,&local_258);
      if (lVar9 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar10 + 8) + 0x50) +
                  (longlong)*(int *)(lVar9 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(lVar10 + 8),(longlong)*(int *)(lVar9 + 0xd4),1);
        }
      }
      uVar17 = FUN_145fe00e6();
      local_408 = &local_398;
      FUN_1449cc26b(param_1,lVar16,lVar9,uVar17);
      iVar23 = *(int *)(lVar22 + 4 + lVar24);
      local_3e8 = (float)(*(int *)(lVar22 + 0xc + lVar24) - iVar23);
      local_3f0 = (float)(*(int *)(lVar22 + 8 + lVar24) - *(int *)(lVar22 + lVar24));
      local_3e0 = *param_8;
      local_3f8 = (float)iVar23;
      local_3b0 = 1;
      local_3b8 = 1;
      local_400 = (longlong *)CONCAT44(local_400._4_4_,(float)*(int *)(lVar22 + lVar24));
      local_408 = (undefined8 *)CONCAT44(local_408._4_4_,(float)(int)((ulonglong)local_3e0 >> 0x20))
      ;
      local_3c0 = 0;
      local_3c8 = 0xffffffff;
      local_3d8 = local_3e0;
      local_3d0 = &local_258;
      FUN_14177476d(param_1,0,0,(float)(int)local_3e0);
      lVar24 = lVar24 + 0x10;
    } while ((longlong)(int)lVar21 * 0x10 != lVar24);
  }
  if ((*(byte *)((longlong)param_1 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_1,1);
    *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xf7;
  }
  puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar26 + 2;
  if ((undefined8 *)param_1[1] < puVar14) {
    FUN_140023dd8(param_1,0x18);
    puVar26 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar26 + 2;
  }
  lVar21 = _local_270;
  *param_1 = (ulonglong)puVar14;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar26;
  param_1[6] = (ulonglong)(puVar26 + 1);
  puVar26[1] = 0;
  *puVar26 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xfd;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  if (_local_270 != 0) {
    LOCK();
    puVar2 = (uint *)(_local_270 + 8);
    uVar8 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(_local_270 + 8);
      LOCK();
      uVar8 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar8 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(_local_270 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar21;
        plVar20 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar20;
            LOCK();
            bVar27 = plVar20 != DAT_14ca843c0;
            plVar19 = plVar18;
            if (bVar27) {
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar27);
        }
        else {
          do {
            *plVar18 = (longlong)plVar19;
            LOCK();
            bVar27 = plVar19 != DAT_14ca843c8;
            plVar20 = plVar18;
            if (bVar27) {
              plVar19 = DAT_14ca843c8;
              plVar20 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar20;
            UNLOCK();
          } while (bVar27);
        }
      }
    }
  }
  lVar21 = *local_3a8;
  if (lVar21 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar21 + 8);
    uVar8 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar21 + 8);
      LOCK();
      uVar8 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar8 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar21 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar21;
        plVar20 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar20;
            LOCK();
            bVar27 = plVar20 != DAT_14ca843c0;
            plVar19 = plVar18;
            if (bVar27) {
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar27);
        }
        else {
          do {
            *plVar18 = (longlong)plVar19;
            LOCK();
            bVar27 = plVar19 != DAT_14ca843c8;
            plVar20 = plVar18;
            if (bVar27) {
              plVar19 = DAT_14ca843c8;
              plVar20 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar20;
            UNLOCK();
          } while (bVar27);
        }
      }
    }
  }
  plVar20 = (longlong *)param_6[1];
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar20 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144697f30 FUN_144697f30 body=1402 status=ok
// SIG undefined FUN_144697f30(void)

void FUN_144697f30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined4 local_8c;
  longlong local_88;
  undefined1 local_7c [4];
  code *local_78;
  longlong *local_70;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar20 = *(longlong **)(param_1 + 0x18);
  lVar5 = *(longlong *)(param_1 + 0x28);
  bVar7 = true;
  if (plVar20 == (longlong *)0x0) {
LAB_144697f7f:
    plVar20 = (longlong *)0x0;
LAB_144697f81:
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar6 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 != 1) goto LAB_144697fa4;
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_144697fad;
        goto LAB_14469803f;
      }
LAB_144697fad:
      if (lVar5 != 0) {
        FUN_14469113a(lVar5);
        FUN_1400020a8(lVar5);
      }
    }
    else {
LAB_144697fa4:
      if (iVar10 == 0x10) goto LAB_144697fad;
LAB_14469803f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar6 + 0xc60), iVar10 == 2))
        goto LAB_144697fad;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_144697fad;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar3 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar3;
        if (puVar14 != (uint *)0x0) goto LAB_1446981ca;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_144696270);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar3 = puVar13;
          FUN_140217a48(puVar3);
          puVar14 = (uint *)*puVar3;
LAB_1446981ca:
          puVar19 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x16);
          uVar16 = puVar14[0x12];
          if (puVar18 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar4 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar3;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            puVar19 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x16);
            uVar16 = 0;
            if (puVar18 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_14469824a;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_14469824a:
        *(uint **)(puVar14 + 0x10) = puVar18;
        puVar14[0x12] = uVar16;
        iVar10 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14bef1bf0;
        puVar19[0x15] = lVar5;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar10 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar8 = 1;
          if ((char)uVar21 != '\x06') {
            uVar8 = uVar21;
          }
          uVar21 = uVar8;
          uVar15 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar19[0xf] = uVar15;
        puVar19[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar10;
        if (puVar19 == (undefined8 *)0x0) {
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar2 = (int *)(puVar19 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = &local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14bef1bd0;
        local_78 = FUN_1446984e2;
        local_50 = lVar5;
        FUN_14005a792(&DAT_14ca9a440,L"DeletePooledBuffers",&DAT_14cc31718);
        if (local_78 != (code *)0x0) {
          pppuVar17 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar17 = &local_58;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
    }
    if (bVar7) goto LAB_144698100;
  }
  else {
    iVar10 = (int)plVar20[1];
    do {
      if (iVar10 == 0) goto LAB_144697f7f;
      LOCK();
      iVar9 = (int)plVar20[1];
      bVar22 = iVar10 == iVar9;
      if (bVar22) {
        *(int *)(plVar20 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar22);
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (lVar6 == 0) {
      bVar7 = false;
      goto LAB_144697f81;
    }
    local_8c = *(undefined4 *)(param_1 + 0x20);
    local_88 = lVar5;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0xf0));
    local_78 = (code *)&local_8c;
    local_70 = &local_88;
    FUN_1498d66a2(lVar6 + 0x118,local_7c);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0xf0));
  }
  LOCK();
  plVar1 = plVar20 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar20)(plVar20);
    LOCK();
    piVar2 = (int *)((longlong)plVar20 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
LAB_144698100:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446984ac FUN_1446984ac body=54 status=ok
// SIG undefined FUN_1446984ac(void)

longlong FUN_1446984ac(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 1446984e2 FUN_1446984e2 body=41 status=ok
// SIG undefined FUN_1446984e2(void)

void FUN_1446984e2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14469113a(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 144698516 FUN_144698516 body=12 status=ok
// SIG undefined FUN_144698516(void)

void FUN_144698516(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014469851f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144698522 FUN_144698522 body=29 status=ok
// SIG undefined FUN_144698522(void)

undefined8 FUN_144698522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144698540 FUN_144698540 body=282 status=ok
// SIG undefined FUN_144698540(void)

undefined8 * FUN_144698540(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144696270);
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



// FUNCTION 14469865a FUN_14469865a body=94 status=ok
// SIG undefined FUN_14469865a(void)

ulonglong FUN_14469865a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_14469113a(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446986ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1446986b8 FUN_1446986b8 body=2111 status=ok
// SIG undefined FUN_1446986b8(void)

void FUN_1446986b8(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined2 local_98;
  char cStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  char local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = '\0';
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = L"ExrReaderGpu.UploadBuffer";
  iVar5 = (int)param_1[2];
  local_98 = (undefined2)iVar5;
  cStack_96 = (char)((uint)iVar5 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_94 = 4;
  uStack_90 = 0x10502;
  if (iVar5 == 0) {
    FUN_14570b4be(param_2,&local_88,0x10502,4);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined2 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined2 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar12 = (longlong *)*param_1;
  if (plVar12 == &local_a0) {
LAB_14469885a:
    lVar6 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar12 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c0;
              plVar13 = plVar9;
              if (bVar14) {
                plVar12 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar14) {
                plVar13 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar12;
    *plVar12 = local_a0;
    local_a0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar12 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c0;
              plVar13 = plVar9;
              if (bVar14) {
                plVar12 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar14) {
                plVar13 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_14469885a;
    }
  }
  lVar6 = param_1[2];
  uVar10 = *(undefined8 *)*param_1;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b8 = (undefined2 *)CONCAT44(local_b8._4_4_,(int)lVar6);
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  uVar10 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar10,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *(undefined8 *)(*param_1 + 8) = uVar10;
  lVar6 = DAT_14cc316d8;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar5 == 0x40000002) {
    uVar11 = 0;
  }
  else {
    bVar14 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar14 = DVar7 == DVar8;
      }
      else {
        bVar14 = false;
      }
    }
    uVar11 = (ulonglong)(bVar14 ^ 1);
  }
  if (*(char *)(lVar6 + uVar11) != '\x01') {
    local_98 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uVar2 = *(uint *)(*(longlong *)*param_1 + 0x28);
    cStack_96 = '\x04';
    if (((uVar2 & 0x10) == 0) && (cStack_96 = '\x02', (uVar2 >> 0x10 & 1) == 0)) {
      cStack_96 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + '\x01';
    }
    local_b8 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
    plVar12 = (longlong *)(*param_1 + 0x18);
    if (plVar12 != &local_a0) {
      lVar6 = *plVar12;
      *plVar12 = local_a0;
      local_a0 = 0;
      if (lVar6 == 0) goto LAB_144698d9e;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar12 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c0;
              plVar13 = plVar9;
              if (bVar14) {
                plVar12 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar14) {
                plVar13 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    lVar6 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar12 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c0;
              plVar13 = plVar9;
              if (bVar14) {
                plVar12 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar14) {
                plVar13 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    goto LAB_144698d9e;
  }
  local_58 = L"ExrReaderGpu.DestBuffer";
  if (local_60 == '\x01') {
    local_98 = 0;
    cStack_96 = 0;
    uStack_95 = 0;
    uStack_94 = 0;
    uStack_90 = 0x100000;
  }
  else {
    iVar5 = (int)param_1[2];
    local_98 = (undefined2)iVar5;
    cStack_96 = (char)((uint)iVar5 >> 0x10);
    uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
    uStack_94 = 4;
    uStack_90 = 0x10500;
    if (iVar5 == 0) {
      FUN_14570b4be(param_2,&local_88,0x10500,4);
    }
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined2 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined2 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar12 = (longlong *)(*param_1 + 0x10);
  if (plVar12 == &local_a0) {
LAB_144698c0b:
    lVar6 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar12 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c0;
              plVar13 = plVar9;
              if (bVar14) {
                plVar12 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar14) {
                plVar13 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar12;
    *plVar12 = local_a0;
    local_a0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar12 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c0;
              plVar13 = plVar9;
              if (bVar14) {
                plVar12 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar9 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar14) {
                plVar13 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_144698c0b;
    }
  }
  local_98 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uVar2 = *(uint *)(*(longlong *)(*param_1 + 0x10) + 0x28);
  cStack_96 = '\x04';
  if (((uVar2 & 0x10) == 0) && (cStack_96 = '\x02', (uVar2 >> 0x10 & 1) == 0)) {
    cStack_96 = ((byte)(uVar2 >> 0xd) & 1) * '\x02' + '\x01';
  }
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar12 = (longlong *)(*param_1 + 0x18);
  if (plVar12 != &local_a0) {
    lVar6 = *plVar12;
    *plVar12 = local_a0;
    local_a0 = 0;
    if (lVar6 == 0) goto LAB_144698d9e;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar6 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar6;
        plVar12 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar12;
            LOCK();
            bVar14 = plVar12 != DAT_14ca843c0;
            plVar13 = plVar9;
            if (bVar14) {
              plVar12 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar9 = (longlong)plVar13;
            LOCK();
            bVar14 = plVar13 != DAT_14ca843c8;
            plVar12 = plVar9;
            if (bVar14) {
              plVar13 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  lVar6 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar6;
        plVar12 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar12;
            LOCK();
            bVar14 = plVar12 != DAT_14ca843c0;
            plVar13 = plVar9;
            if (bVar14) {
              plVar12 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar9 = (longlong)plVar13;
            LOCK();
            bVar14 = plVar13 != DAT_14ca843c8;
            plVar12 = plVar9;
            if (bVar14) {
              plVar13 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
LAB_144698d9e:
  (**(code **)(**(longlong **)(*param_1 + 0x20) + 0x10))();
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144698f08 FUN_144698f08 body=12 status=ok
// SIG undefined FUN_144698f08(void)

void FUN_144698f08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144698f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144698f14 FUN_144698f14 body=83 status=ok
// SIG undefined FUN_144698f14(void)

undefined8 * FUN_144698f14(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bef1c70;
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



// FUNCTION 144698f68 FUN_144698f68 body=282 status=ok
// SIG undefined FUN_144698f68(void)

undefined8 * FUN_144698f68(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144696270);
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



// FUNCTION 144699082 FUN_144699082 body=126 status=ok
// SIG undefined FUN_144699082(void)

void FUN_144699082(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1446986b8(param_1 + 0x15,&DAT_14ca85100);
  plVar3 = (longlong *)param_1[0x16];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446990f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144699100 FUN_144699100 body=9 status=ok
// SIG undefined FUN_144699100(void)

void FUN_144699100(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14469910a FUN_14469910a body=29 status=ok
// SIG undefined FUN_14469910a(void)

undefined8 FUN_14469910a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144699127 FUN_144699127 body=1213 status=ok
// SIG undefined FUN_144699127(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144699127(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_58,&DAT_14cc31520);
  if (cVar3 == '\0') {
    _DAT_14cc31520 = 0;
    uRam000000014cc31528 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cc31530 = &DAT_100000018;
  local_58 = "FillGapsInSequence";
  local_50 = 0x12;
  uVar7 = 0;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  DAT_14cc31538 = (ulonglong)uVar4;
  local_58 = "FrameRateOverrideDenonimator";
  local_50 = 0x1c;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  DAT_14cc31540 = (ulonglong)uVar4;
  local_58 = "FrameRateOverrideNumerator";
  local_50 = 0x1a;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  DAT_14cc31548 = (ulonglong)uVar4;
  local_58 = "ProxyOverride";
  local_50 = 0xd;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  DAT_14cc31550 = (ulonglong)uVar4;
  local_58 = "ImgMipMapInfo";
  local_50 = 0xd;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  DAT_14cc31558 = (ulonglong)uVar4;
  local_58 = "ImgNumTilesX";
  local_50 = 0xc;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  _DAT_14cc31560 = (ulonglong)uVar4;
  local_58 = "ImgNumTilesY";
  local_50 = 0xc;
  local_4c = 0;
  uVar4 = FUN_14001a6c0(&local_58,1);
  _DAT_14cc31568 = (ulonglong)uVar4;
  local_58 = (char *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78._0_4_ = 0;
  FUN_140bd5914(&DAT_14cc31570,L"ImgMedia.MipMapDebug",&local_58,
                L"Display debug on mipmaps and tiles used by the ImgMedia plugin.\n   0: off (default)\n   1: on\n"
               );
  atexit(FUN_1446894a0);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffff00000000);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_140a6b41e(&DAT_14cc31588,L"ImgMedia.MipMapLevelPadding",&local_58,
                L"Value padded onto the estimated (minimum and maximum) mipmap levels used by the loader.\n"
               );
  atexit(FUN_1446894e5);
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/ImgMedia",&PTR_FUN_14bef01b0,1,&PTR_FUN_14bef0180);
  _DAT_14cc31600 = 0x800000014bef021c;
  local_58._0_4_ = 0x15;
  _DAT_14cc31608 = FUN_14577453c(L"EpicGamesCustomFormat",&local_58);
  DAT_14cc3160c = 1;
  local_58._0_4_ = 0x12;
  FUN_14577453c(L"EpicGamesTileWidth",&local_58);
  local_58._0_4_ = 0x13;
  FUN_14577453c(L"EpicGamesTileHeight",&local_58);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x13);
  FUN_14577453c(L"EpicGamesTileBorder",&local_58);
  DAT_14cc31610 = 0;
  DAT_14cc31618 = 0;
  atexit(FUN_14468a503);
  local_58 = (char *)0x800000014beeeec4;
  local_44 = 8;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14677098e(&local_58);
  local_58 = (char *)CONCAT44(local_58._4_4_,0x3f800000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cc31628,L"ImgMedia.FieldOfViewMultiplier",&local_58,
                L"Multiply the field of view for active cameras by this value, generally to increase the frustum overall sizes to mitigate missing tile artifacts.\n"
               );
  atexit(FUN_14468a53e);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc31640,L"ImgMedia.ICVFX.InnerOnlyTiles",&local_58,
                L"This CVar will ignore tile calculation for all viewports except for Display Cluster inner viewports. User should enable upscaling on Media plate to display lower quality mips instead, otherwise other viewports will only display tiles loaded specifically for inner viewport and nothing else. \n"
               );
  atexit(FUN_14468a583);
  local_58 = (char *)CONCAT44(local_58._4_4_,2);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc31678,L"ImgMedia.FrameInvalidationMaxCount",&local_58,
                L"Maximum number of cached frames that can be invalidated when missing the latest mips/tiles."
               );
  atexit(FUN_14468b1c6);
  _DAT_14cc316a8 = 1;
  local_58._0_1_ = 1;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc316b0,L"r.ExrReadAndProcessOnGPU",&local_58,
                L"Allows reading of Large Uncompressed EXR files directly into Structured Buffer.\nand be processed on GPU\n"
               );
  atexit(FUN_14468da64);
  local_58 = (char *)CONCAT71(local_58._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc316c8,L"r.ExrReaderGPU.UseUploadHeap",&local_58,
                L"Utilizes upload heap and copies raw exr buffer asynchronously.\n\t\t\tRequires a restart of the engine."
               );
  atexit(FUN_14468e02c);
  lVar2 = DAT_14cc316d8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar1 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar1 != 2)) {
      if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  DAT_14cc316e0 = *(undefined1 *)(lVar2 + uVar7);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446995e8 FUN_1446995e8 body=147 status=ok
// SIG undefined FUN_1446995e8(void)

void FUN_1446995e8(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0x800000014bef1e08;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146770bca(&local_28);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/ImgMediaFactory",&PTR_FUN_14bef2510,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446996a6 FUN_1446996a6 body=73 status=ok
// SIG undefined FUN_1446996a6(void)

undefined8 FUN_1446996a6(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]));
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1446996f0 FUN_1446996f0 body=194 status=ok
// SIG undefined FUN_1446996f0(void)

undefined8 * FUN_1446996f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  FUN_14179e7e8(puVar1);
  *puVar1 = &PTR_FUN_14bef2750;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0x8000000000000000;
  local_30 = &local_40;
  local_40 = puVar1;
  local_38 = param_2;
  FUN_1401ac3b6(*(undefined8 *)(param_1 + 8),local_24,&local_38,0);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446997b3 FUN_1446997b3 body=357 status=ok
// SIG undefined FUN_1446997b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446997b3(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x800000014bef272c;
  local_34 = 0x10;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14171c728(&DAT_14cc31780,&local_48);
  _DAT_14cc31784 = 0xffffffff;
  DAT_14cc31788 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/MediaCompositing",&PTR_FUN_14bef2c10,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MediaCompositing",0,0,&PTR_FUN_14bef2df0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/MediaCompositing",&PTR_FUN_14bef32b0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/MediaCompositing",&PTR_FUN_14bef3b30,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/MediaCompositing",0,0,&PTR_FUN_14bef40d0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/MediaCompositing",&PTR_FUN_14bef4650,1,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14469991c FUN_14469991c body=283 status=ok
// SIG undefined FUN_14469991c(void)

undefined8 * FUN_14469991c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14bef5920;
  param_1[1] = &PTR_FUN_14bef5950;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[9] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0xb] = puVar1;
  param_1[10] = puVar1;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  uVar2 = FUN_1405d8a54(0);
  param_1[0xd] = uVar2;
  return param_1;
}



// FUNCTION 144699a38 FUN_144699a38 body=419 status=ok
// SIG undefined FUN_144699a38(void)

void FUN_144699a38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
    EnterCriticalSection(lpCriticalSection);
    FUN_1498e3cf2(param_1);
    *(undefined1 *)(param_1 + 0xc4) = 1;
    lpCriticalSection_00 = lpCriticalSection;
    LeaveCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0xb8) != 1) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x60))();
      if (iVar1 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))
                  (*(longlong **)(param_1 + 0x68),0xffffffff,0,param_4,lpCriticalSection_00,uVar2);
      }
    }
    EnterCriticalSection(lpCriticalSection);
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x68))();
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0xbf800000;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (*(char *)(param_1 + 0x98) == '\x01') {
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (*(int *)(param_1 + 0xd4) != 0) {
      FUN_1498eb242(param_1 + 200);
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0xe4) != 0) {
      FUN_1498eb242(param_1 + 0xd8);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
    *(undefined1 *)(param_1 + 0xc4) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144699bcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection_00);
    return;
  }
  return;
}



// FUNCTION 144699bdc Unwind@144699bdc body=35 status=ok
// SIG undefined Unwind@144699bdc(void)

void Unwind_144699bdc(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 144699c00 Unwind@144699c00 body=35 status=ok
// SIG undefined Unwind@144699c00(void)

void Unwind_144699c00(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 144699c24 FUN_144699c24 body=484 status=ok
// SIG undefined FUN_144699c24(void)

void FUN_144699c24(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  FUN_1498e711a(**(undefined8 **)(param_1 + 0x10));
  if (*(undefined8 **)(param_1 + 0x200) != (undefined8 *)0x0) {
    FUN_1498e7784(**(undefined8 **)(param_1 + 0x200));
  }
  if (*(undefined8 **)(param_1 + 0x208) != (undefined8 *)0x0) {
    FUN_1498e8ecc(**(undefined8 **)(param_1 + 0x208));
  }
  if (*(longlong **)(param_1 + 0x158) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x10))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 500) = 0xffffffff;
  FUN_1498e8da2(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_1498e9240(param_1 + 0x80);
  }
  FUN_1498e8da2(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d8));
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_1498e9240(param_1 + 0x1d0);
  }
  FUN_1498e8da2(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_1498e9240(param_1 + 0xf8);
  }
  FUN_1498e8da2(*(undefined8 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x288));
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0x28c) != 0) {
    FUN_1498e9240(param_1 + 0x280);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_1446f8c06(param_1 + 0x130,0);
  }
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x60))();
    if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))();
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
  }
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144699dee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  return;
}



// FUNCTION 144699e08 Unwind@144699e08 body=33 status=ok
// SIG undefined Unwind@144699e08(void)

void Unwind_144699e08(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x28));
  return;
}



// FUNCTION 144699e2a FUN_144699e2a body=1809 status=ok
// SIG undefined FUN_144699e2a(void)

undefined4
FUN_144699e2a(longlong param_1,longlong *param_2,undefined8 *param_3,char param_4,longlong *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong local_288;
  longlong lStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined2 uStack_26b;
  uint uStack_269;
  undefined4 uStack_265;
  undefined1 uStack_261;
  undefined2 local_260;
  undefined1 local_25e;
  undefined1 local_258 [2] [16];
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_218;
  undefined4 local_210;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0 [2];
  char local_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined3 uStack_1b8;
  undefined8 uStack_1b5;
  undefined1 local_1a8 [80];
  undefined1 local_158 [16];
  undefined2 *local_148;
  longlong lStack_140;
  longlong local_138 [2];
  longlong *local_128;
  longlong local_118 [4];
  code *local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [5];
  longlong *local_b0;
  undefined2 *local_a8;
  longlong lStack_a0;
  undefined2 *local_98;
  longlong local_90;
  undefined1 local_88;
  undefined2 *local_80;
  longlong local_78;
  undefined1 local_70;
  undefined2 *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar10 = (longlong *)FUN_145b156f4();
  lVar11 = plVar10[0x22];
  if (lVar11 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar11 = plVar10[0x22];
  }
  uVar8 = FUN_14469a952(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar11 + 0x29));
  if ((char)uVar8 == '\0') {
    return uVar8;
  }
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (puVar1 != param_3) {
    iVar3 = *(int *)(param_3 + 1);
    pvVar4 = (void *)*param_3;
    *(int *)(param_1 + 0x30) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x34) == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      local_58 = pvVar4;
      FUN_1446dd670(puVar1,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*puVar1,local_58,(longlong)iVar3 * 2);
      }
    }
  }
  local_288 = -0x100000000;
  lStack_280 = -1;
  uStack_278 = 0xffffffff;
  uStack_274 = 0xffffffff;
  uStack_270 = 0;
  uStack_26c = 1;
  uStack_269 = (uint)(byte)uStack_269;
  uStack_265 = 0;
  uStack_261 = 0;
  local_260 = 1;
  local_25e = 0;
  local_238 = 0;
  local_230 = 0;
  local_258[0] = (undefined1  [16])0x0;
  local_22c = 0xffffffff00000080;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  if (param_5 != (longlong *)0x0) {
    local_288 = *param_5;
    lStack_280 = param_5[1];
    uStack_278 = (undefined4)param_5[2];
    uStack_274 = *(undefined4 *)((longlong)param_5 + 0x14);
    uStack_270 = (undefined4)param_5[3];
    uVar9 = *(undefined4 *)((longlong)param_5 + 0x1c);
    uStack_265 = *(undefined4 *)((longlong)param_5 + 0x23);
    uVar5 = *(undefined4 *)((longlong)param_5 + 0x27);
    uStack_261 = (undefined1)uVar5;
    local_260 = (undefined2)((uint)uVar5 >> 8);
    local_25e = (undefined1)((uint)uVar5 >> 0x18);
    uStack_26c = (undefined1)uVar9;
    uStack_26b = (undefined2)((uint)uVar9 >> 8);
    uStack_269._1_3_ = (undefined3)((uint)*(undefined4 *)((longlong)param_5 + 0x1f) >> 8);
    uStack_269._0_1_ = (byte)((uint)uVar9 >> 0x18);
    FUN_147807ed0(local_258,param_5 + 6);
  }
  local_138[0] = 0;
  local_128 = (longlong *)0x0;
  local_200 = *param_2;
  local_1f8 = param_2[1];
  if (local_1f8 != 0) {
    LOCK();
    *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
    UNLOCK();
  }
  FUN_14698a6cc(local_1f0,param_3);
  local_1d8 = local_288;
  lStack_1d0 = lStack_280;
  local_1c8 = uStack_278;
  uStack_1c4 = uStack_274;
  uStack_1b5 = CONCAT17(local_25e,CONCAT25(local_260,CONCAT14(uStack_261,uStack_265)));
  uStack_1c0 = uStack_270;
  uStack_1bc = (undefined4)CONCAT43(uStack_269,CONCAT21(uStack_26b,uStack_26c));
  uStack_1b8 = (undefined3)(uStack_269 >> 8);
  local_1e0 = param_4;
  FUN_1498e6e72(local_1a8,local_258);
  local_158._0_8_ = *(longlong *)(param_1 + 0x40);
  local_158._8_8_ = *(longlong *)(param_1 + 0x48);
  if (local_158._8_8_ != 0) {
    LOCK();
    *(int *)(local_158._8_8_ + 0xc) = *(int *)(local_158._8_8_ + 0xc) + 1;
    UNLOCK();
  }
  local_f8[0] = (code *)0x0;
  local_e8 = (longlong *)0x0;
  plVar10 = (longlong *)FUN_14001cc68(0xc0,8);
  *plVar10 = (longlong)&PTR_LAB_14bef85e0;
  plVar10[1] = local_200;
  plVar10[2] = local_1f8;
  if (local_1f8 != 0) {
    LOCK();
    *(int *)(local_1f8 + 8) = *(int *)(local_1f8 + 8) + 1;
    UNLOCK();
  }
  local_58 = plVar10 + 1;
  local_b0 = plVar10 + 3;
  local_e8 = plVar10;
  FUN_14698a6cc(local_b0,local_1f0);
  *(char *)(plVar10 + 5) = local_1e0;
  plVar10[6] = local_1d8;
  plVar10[7] = lStack_1d0;
  *(undefined4 *)(plVar10 + 8) = local_1c8;
  *(undefined4 *)((longlong)plVar10 + 0x44) = uStack_1c4;
  *(undefined4 *)(plVar10 + 9) = uStack_1c0;
  *(undefined4 *)((longlong)plVar10 + 0x4c) = uStack_1bc;
  *(uint *)((longlong)plVar10 + 0x4b) = CONCAT31((undefined3)uStack_1bc,uStack_1c0._3_1_);
  *(uint *)((longlong)plVar10 + 0x4f) = CONCAT31(uStack_1b8,uStack_1bc._3_1_);
  *(undefined4 *)((longlong)plVar10 + 0x53) = (undefined4)uStack_1b5;
  *(undefined4 *)((longlong)plVar10 + 0x57) = uStack_1b5._4_4_;
  FUN_1498e84f0(plVar10 + 0xc,local_1a8);
  plVar10[0x16] = local_158._0_8_;
  plVar10[0x17] = local_158._8_8_;
  local_158 = (undefined1  [16])0x0;
  if (local_58 != (longlong *)0x0) {
    local_f8[0] = FUN_1446a78ea;
  }
  local_90 = FUN_1498e876d(local_138);
  local_a8 = (undefined2 *)(local_90 + 0x10);
  if (local_90 == 0) {
    lVar11 = 0;
  }
  else {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
    lVar11 = local_90;
  }
  local_98 = local_a8;
  local_80 = local_a8;
  local_78 = local_90;
  FUN_1498e8716(&local_80);
  local_88 = 1;
  lStack_a0 = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  if (param_4 == '\0') {
    if (DAT_14c846b14 != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar7 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      pcVar6 = local_f8[0];
      if (DAT_14c83f0f8 != 1) {
        plVar10 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar10 = local_d8;
        }
        uVar12 = (**(code **)(*plVar10 + 8))();
        (*pcVar6)(uVar12);
        *(undefined4 *)(local_98 + 0x40) = 0;
        FUN_140b576f0();
        goto LAB_14469a3a7;
      }
    }
    plVar10 = DAT_14c8442c0;
    uVar12 = FUN_14001cc68(0x70,0x10);
    FUN_1498e8472(uVar12,local_f8,&local_98);
    (**(code **)(*plVar10 + 0x18))(plVar10,uVar12,3);
  }
  else {
    if (DAT_14c846b14 != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar7 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      pcVar6 = local_f8[0];
      if (DAT_14c83f0f8 != 1) {
        plVar10 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar10 = local_d8;
        }
        uVar12 = (**(code **)(*plVar10 + 8))();
        (*pcVar6)(uVar12);
        *(undefined4 *)(local_98 + 0x40) = 0;
        FUN_140b576f0();
        goto LAB_14469a3a7;
      }
    }
    local_78 = FUN_1498e883d();
    puVar13 = (undefined2 *)(local_78 + 0x10);
    if (local_78 == 0) {
      lVar11 = 0;
    }
    else {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
      lVar11 = local_78;
    }
    local_80 = puVar13;
    local_68 = puVar13;
    local_60 = local_78;
    FUN_1498e87e6(&local_68);
    uVar12 = FUN_14001cc68(0x80,0x10);
    local_70 = 1;
    puVar14 = puVar13;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
      puVar14 = local_80;
    }
    local_68 = puVar13;
    local_60 = lVar11;
    FUN_1498e83d4(uVar12,local_f8,&local_98,&local_68);
    FUN_1498e88bc(&local_68);
    uVar9 = FUN_146268020();
    FUN_140002266(&local_68,L"TAsync %d",uVar9);
    puVar13 = local_68;
    if ((int)local_60 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    uVar12 = FUN_1411b1052(uVar12,puVar13,0,0,0xffffffffffffffff,0);
    *(undefined8 *)(puVar14 + 0x40) = uVar12;
    FUN_140b576f0(puVar14);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1498e88bc(&local_80);
  }
LAB_14469a3a7:
  local_148 = local_a8;
  lStack_140 = lStack_a0;
  local_a8 = (undefined2 *)0x0;
  lStack_a0 = 0;
  FUN_1498e6f1e();
  FUN_1498e6f1e(&local_98);
  if (local_f8[0] != (code *)0x0) {
    plVar10 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar10 = local_d8;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_138[0] != 0) {
    plVar10 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar10 = local_118;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  FUN_1498e6f1e(&local_148);
  if ((longlong *)local_158._8_8_ != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)(local_158._8_8_ + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*(longlong *)local_158._8_8_ + 0x10))();
    }
  }
  FUN_1498e6ef4(local_1a8);
  if (local_1f0[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1498dc056(&local_200);
  FUN_1498e6ef4(local_258);
  return uVar8;
}



// FUNCTION 14469a53c Unwind@14469a53c body=66 status=ok
// SIG undefined Unwind@14469a53c(void)

void Unwind_14469a53c(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x208) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14469a57e Unwind@14469a57e body=58 status=ok
// SIG undefined Unwind@14469a57e(void)

void Unwind_14469a57e(undefined8 param_1,longlong param_2)

{
  FUN_1498dc056(*(undefined8 *)(param_2 + 0x260));
  return;
}



// FUNCTION 14469a5b8 Unwind@14469a5b8 body=75 status=ok
// SIG undefined Unwind@14469a5b8(void)

void Unwind_14469a5b8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x250) != 0) {
    FUN_1400020a8();
  }
  FUN_1498e88bc(param_2 + 0x238);
  return;
}



// FUNCTION 14469a604 Unwind@14469a604 body=33 status=ok
// SIG undefined Unwind@14469a604(void)

void Unwind_14469a604(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469a626 Unwind@14469a626 body=70 status=ok
// SIG undefined Unwind@14469a626(void)

void Unwind_14469a626(undefined8 param_1,longlong param_2)

{
  FUN_1498e6f1e(param_2 + 0x210);
  FUN_1498e6f1e(param_2 + 0x220);
  return;
}



// FUNCTION 14469a66c Unwind@14469a66c body=80 status=ok
// SIG undefined Unwind@14469a66c(void)

void Unwind_14469a66c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x1c0) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x1d0);
    if (*(longlong **)(param_2 + 0x1d0) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_2 + 0x1e0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 14469a6bc Unwind@14469a6bc body=145 status=ok
// SIG undefined Unwind@14469a6bc(void)

void Unwind_14469a6bc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_2 + 0x180) != 0) {
    plVar2 = *(longlong **)(param_2 + 400);
    if (*(longlong **)(param_2 + 400) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_2 + 0x1a0);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = *(longlong **)(param_2 + 0x168);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1498e6ef4(param_2 + 0x110);
  if (*(longlong *)(param_2 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_1498dc056(param_2 + 0xb8);
  *(undefined1 *)(param_2 + 0x26f) = 1;
  return;
}



// FUNCTION 14469a74e Unwind@14469a74e body=33 status=ok
// SIG undefined Unwind@14469a74e(void)

void Unwind_14469a74e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469a770 Unwind@14469a770 body=60 status=ok
// SIG undefined Unwind@14469a770(void)

void Unwind_14469a770(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 200) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14469a7ac Unwind@14469a7ac body=61 status=ok
// SIG undefined Unwind@14469a7ac(void)

void Unwind_14469a7ac(undefined8 param_1,longlong param_2)

{
  FUN_1498dc056(param_2 + 0xb8);
  *(undefined1 *)(param_2 + 0x26f) = 0;
  return;
}



// FUNCTION 14469a7ea Unwind@14469a7ea body=89 status=ok
// SIG undefined Unwind@14469a7ea(void)

void Unwind_14469a7ea(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_2 + 0x26f) == '\0') && (*(longlong *)(param_2 + 0x180) != 0)) {
    plVar1 = *(longlong **)(param_2 + 400);
    if (*(longlong **)(param_2 + 400) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_2 + 0x1a0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 14469a844 Unwind@14469a844 body=55 status=ok
// SIG undefined Unwind@14469a844(void)

void Unwind_14469a844(undefined8 param_1,longlong param_2)

{
  FUN_1498e6ef4(param_2 + 0x60);
  return;
}



// FUNCTION 14469a87c Unwind@14469a87c body=33 status=ok
// SIG undefined Unwind@14469a87c(void)

void Unwind_14469a87c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469a89e FUN_14469a89e body=139 status=ok
// SIG undefined FUN_14469a89e(void)

undefined4 FUN_14469a89e(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  (**(code **)*param_1)();
  lVar2 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  uVar1 = 0;
  if ((lVar2 != 0) && (1 < *(int *)(param_3 + 8))) {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    uVar1 = FUN_144699e2a(param_1,&local_40,param_3,0,0);
    FUN_1498dc056(&local_40);
  }
  return uVar1;
}



// FUNCTION 14469a92a Unwind@14469a92a body=40 status=ok
// SIG undefined Unwind@14469a92a(void)

void Unwind_14469a92a(undefined8 param_1,longlong param_2)

{
  FUN_1498dc056(param_2 + 0x28);
  return;
}



// FUNCTION 14469a952 FUN_14469a952 body=235 status=ok
// SIG undefined FUN_14469a952(void)

ulonglong FUN_14469a952(longlong param_1,char param_2)

{
  char cVar1;
  HRESULT HVar2;
  int iVar3;
  ulonglong uVar4;
  IMFAttributes *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_144699a38();
  local_30 = (IMFAttributes *)0x0;
  HVar2 = MFCreateAttributes(&local_30,2);
  if (HVar2 < 0) {
    uVar4 = 0;
  }
  else {
    if ((param_2 != '\0') && (cVar1 = FUN_145db1694(6,2,0), cVar1 != '\0')) {
      (*local_30->lpVtbl->SetUINT32)(local_30,(GUID *)&DAT_14bef59c8,1);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    iVar3 = MFCreateMediaSession(local_30,param_1 + 0x60);
    if (iVar3 < 0) {
      uVar4 = 0;
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))
                        (*(longlong **)(param_1 + 0x60),param_1,0);
      if (iVar3 < 0) {
        uVar4 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xb8) = 4;
        uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  if (local_30 != (IMFAttributes *)0x0) {
    (*local_30->lpVtbl->Release)(local_30);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14469aa3e Unwind@14469aa3e body=42 status=ok
// SIG undefined Unwind@14469aa3e(void)

void Unwind_14469aa3e(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))();
  }
  return;
}



// FUNCTION 14469aa68 Unwind@14469aa68 body=37 status=ok
// SIG undefined Unwind@14469aa68(void)

void Unwind_14469aa68(undefined8 param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  return;
}



// FUNCTION 14469aa8e Unwind@14469aa8e body=22 status=ok
// SIG undefined Unwind@14469aa8e(void)

void Unwind_14469aa8e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469aaa6 FUN_14469aaa6 body=1096 status=ok
// SIG undefined FUN_14469aaa6(void)

undefined8 * FUN_14469aaa6(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined2 *puVar9;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  int local_80;
  LPCRITICAL_SECTION local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  ushort local_56;
  undefined4 local_54;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x108);
  EnterCriticalSection(lpCriticalSection);
  if ((*(longlong *)(param_1 + 0x150) == 0) ||
     ((((*(int *)(param_1 + 0x1e8) == -1 && (*(int *)(param_1 + 0x1ec) == -1)) &&
       (*(int *)(param_1 + 0x1f0) == -1)) && (*(int *)(param_1 + 500) == -1)))) {
    *param_2 = 0;
  }
  else {
    local_50 = (longlong *)0x0;
    iVar5 = MFCreateTopology();
    if (-1 < iVar5) {
      *(undefined1 *)(param_1 + 0x1f9) = 0;
      iVar5 = *(int *)(param_1 + 0x1e8);
      local_78 = lpCriticalSection;
      if (((longlong)iVar5 < 0) || (*(int *)(param_1 + 0x88) <= iVar5)) {
        bVar2 = 0;
      }
      else {
        bVar2 = FUN_14469b31c(param_1,(longlong)iVar5 * 0x60 + *(longlong *)(param_1 + 0x80),
                              local_50);
      }
      iVar5 = *(int *)(param_1 + 0x1ec);
      if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(param_1 + 0x100))) {
        bVar3 = FUN_14469b31c(param_1,(longlong)iVar5 * 0x60 + *(longlong *)(param_1 + 0xf8),
                              local_50);
        bVar2 = bVar2 | bVar3;
      }
      iVar5 = *(int *)(param_1 + 0x1f0);
      if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(param_1 + 0x1d8))) {
        bVar3 = FUN_14469b31c(param_1,(longlong)iVar5 * 0x60 + *(longlong *)(param_1 + 0x1d0),
                              local_50);
        bVar2 = bVar2 | bVar3;
      }
      iVar5 = *(int *)(param_1 + 500);
      if ((-1 < (longlong)iVar5) && (iVar5 < *(int *)(param_1 + 0x288))) {
        bVar3 = FUN_14469b31c(param_1,(longlong)iVar5 * 0x60 + *(longlong *)(param_1 + 0x280),
                              local_50);
        bVar2 = bVar2 | bVar3;
      }
      lpCriticalSection = local_78;
      if (bVar2 != 0) {
        plVar6 = (longlong *)FUN_145b156f4();
        lVar7 = plVar6[0x22];
        if (lVar7 == 0) {
          (**(code **)(*plVar6 + 1000))(plVar6);
          lVar7 = plVar6[0x22];
        }
        if ((*(char *)(lVar7 + 0x2b) != '\0') || (*(char *)(lVar7 + 0x2c) == '\x01')) {
          local_56 = 0;
          (**(code **)(*local_50 + 0x120))();
          for (uVar8 = 0; uVar8 < local_56; uVar8 = uVar8 + 1) {
            local_88 = (longlong *)0x0;
            (**(code **)(*local_50 + 0x128))(local_50,uVar8,&local_88);
            (**(code **)(*local_88 + 0x118))(local_88,&local_9c);
            bVar1 = false;
            if (local_9c == 0) {
              local_70 = (longlong *)0x0;
              (**(code **)(*local_88 + 0x110))(local_88,&local_70);
              local_98 = (longlong *)0x0;
              (**(code **)*local_70)(local_70,&DAT_14bef5d50,&local_98);
              if (local_98 == (longlong *)0x0) {
                local_90 = (longlong *)0x0;
                (**(code **)*local_70)(local_70,&DAT_14bef5d70,&local_90);
                if (local_90 == (longlong *)0x0) {
                  bVar1 = true;
                }
                else {
                  local_68 = (longlong *)0x0;
                  (**(code **)(*local_90 + 0x108))(local_90,&DAT_1499d7850,&local_68);
                  if (local_68 == (longlong *)0x0) {
                    bVar1 = false;
                  }
                  else {
                    iVar5 = (**(code **)(*local_88 + 0x38))(local_88,&DAT_14ab40800,&local_54);
                    if (iVar5 != 0) {
                      local_54 = 0;
                    }
                    local_60 = (longlong *)0x0;
                    (**(code **)(*local_68 + 0x40))(local_68,local_54,&local_60);
                    if (local_60 == (longlong *)0x0) {
                      (**(code **)(*local_68 + 0x20))(local_68,local_54,0,&local_60);
                      if (local_60 != (longlong *)0x0) {
                        (**(code **)(*local_88 + 0x108))();
                        goto LAB_14469adfd;
                      }
                      bVar1 = true;
                    }
                    else {
                      (**(code **)(*local_88 + 0x108))();
LAB_14469adfd:
                      if (local_60 != (longlong *)0x0) {
                        (**(code **)(*local_60 + 0x10))();
                      }
                      bVar1 = false;
                    }
                    if (local_68 != (longlong *)0x0) {
                      (**(code **)(*local_68 + 0x10))();
                    }
                  }
                  if (local_90 != (longlong *)0x0) {
                    (**(code **)(*local_90 + 0x10))();
                  }
                }
                if (local_98 != (longlong *)0x0) goto LAB_14469ae36;
              }
              else {
LAB_14469ae36:
                (**(code **)(*local_98 + 0x10))();
              }
              if (local_70 != (longlong *)0x0) {
                (**(code **)(*local_70 + 0x10))();
              }
            }
            if (local_88 != (longlong *)0x0) {
              (**(code **)(*local_88 + 0x10))();
            }
            if (bVar1) goto LAB_14469ae85;
          }
          cVar4 = FUN_1498e5a34(&local_50);
          if (cVar4 == '\0') {
LAB_14469ae85:
            puVar9 = &DAT_14a819e16;
            if (*(char *)(param_1 + 0x1f9) != '\0') {
              puVar9 = &DAT_14a915eb6;
            }
          }
          else {
            puVar9 = &DAT_14a915eb6;
          }
          FUN_140002266(&local_88,L"Video decoded on %s\n",puVar9);
          iVar5 = local_80 + -1;
          if (local_80 == 0) {
            iVar5 = 0;
          }
          FUN_1400020e8(param_1 + 0x130,local_88,iVar5);
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        *param_2 = local_50;
        lpCriticalSection = local_78;
        goto LAB_14469ac24;
      }
    }
    *param_2 = 0;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
LAB_14469ac24:
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 14469aeee Unwind@14469aeee body=61 status=ok
// SIG undefined Unwind@14469aeee(void)

void Unwind_14469aeee(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x68) + 0x10))();
  }
  return;
}



// FUNCTION 14469af2c Unwind@14469af2c body=33 status=ok
// SIG undefined Unwind@14469af2c(void)

void Unwind_14469af2c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469af4e Unwind@14469af4e body=61 status=ok
// SIG undefined Unwind@14469af4e(void)

void Unwind_14469af4e(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x60) + 0x10))();
  }
  return;
}



// FUNCTION 14469af8c Unwind@14469af8c body=33 status=ok
// SIG undefined Unwind@14469af8c(void)

void Unwind_14469af8c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469afae Unwind@14469afae body=33 status=ok
// SIG undefined Unwind@14469afae(void)

void Unwind_14469afae(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469afd0 Unwind@14469afd0 body=33 status=ok
// SIG undefined Unwind@14469afd0(void)

void Unwind_14469afd0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469aff2 Unwind@14469aff2 body=33 status=ok
// SIG undefined Unwind@14469aff2(void)

void Unwind_14469aff2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469b014 Unwind@14469b014 body=61 status=ok
// SIG undefined Unwind@14469b014(void)

void Unwind_14469b014(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  return;
}



// FUNCTION 14469b052 Unwind@14469b052 body=61 status=ok
// SIG undefined Unwind@14469b052(void)

void Unwind_14469b052(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  return;
}



// FUNCTION 14469b090 Unwind@14469b090 body=61 status=ok
// SIG undefined Unwind@14469b090(void)

void Unwind_14469b090(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x10))();
  }
  return;
}



// FUNCTION 14469b0ce Unwind@14469b0ce body=61 status=ok
// SIG undefined Unwind@14469b0ce(void)

void Unwind_14469b0ce(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x40) + 0x10))();
  }
  return;
}



// FUNCTION 14469b10c Unwind@14469b10c body=71 status=ok
// SIG undefined Unwind@14469b10c(void)

void Unwind_14469b10c(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + 0x10))();
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x50));
  return;
}



// FUNCTION 14469b154 Unwind@14469b154 body=33 status=ok
// SIG undefined Unwind@14469b154(void)

void Unwind_14469b154(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469b176 Unwind@14469b176 body=33 status=ok
// SIG undefined Unwind@14469b176(void)

void Unwind_14469b176(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14469b198 FUN_14469b198 body=348 status=ok
// SIG undefined FUN_14469b198(void)

void FUN_14469b198(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0xf8) != '\x01') goto LAB_14469b1be;
  local_40 = (longlong *)0x0;
  local_38 = *(longlong *)(param_1 + 0xf0);
  if (local_38 != 0) {
    iVar7 = *(int *)(local_38 + 8);
    do {
      if (iVar7 == 0) {
        local_38 = 0;
        goto LAB_14469b261;
      }
      LOCK();
      iVar1 = *(int *)(local_38 + 8);
      bVar10 = iVar7 == iVar1;
      if (bVar10) {
        *(int *)(local_38 + 8) = iVar7 + 1;
        iVar1 = iVar7;
      }
      iVar7 = iVar1;
      UNLOCK();
    } while (!bVar10);
    if (local_38 != 0) {
      local_40 = *(longlong **)(param_1 + 0xe8);
    }
  }
LAB_14469b261:
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0xf8) = 0;
LAB_14469b2b6:
    puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 1) = 5;
    if (puVar9 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x50) = puVar9;
      *puVar4 = puVar9;
    }
  }
  else {
    cVar6 = (**(code **)(*local_40 + 0x68))(local_40);
    if (cVar6 == '\0') {
      *(undefined1 *)(param_1 + 0xf8) = 0;
      uVar8 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1 + 8);
      *(undefined4 *)(plVar5 + 0x53) = uVar8;
    }
    if (*(char *)(param_1 + 0xf8) == '\0') goto LAB_14469b2b6;
  }
  FUN_1498dbb36(&local_40);
LAB_14469b1be:
  while (lVar2 = **(longlong **)(param_1 + 0x58), lVar2 != 0) {
    uVar8 = *(undefined4 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_1 + 0x58);
    *(longlong *)(param_1 + 0x58) = lVar2;
    *(undefined4 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
    iVar7 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
      FUN_1498eb00c(param_2,iVar7);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = uVar8;
  }
  return;
}



// FUNCTION 14469b2f4 Unwind@14469b2f4 body=40 status=ok
// SIG undefined Unwind@14469b2f4(void)

void Unwind_14469b2f4(undefined8 param_1,longlong param_2)

{
  FUN_1498dbb36(param_2 + 0x38);
  return;
}



// FUNCTION 14469b31c FUN_14469b31c body=2545 status=ok
// SIG undefined FUN_14469b31c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14469b31c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  UINT UVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  longlong lVar12;
  bool bVar13;
  code *local_d8;
  undefined8 local_d0;
  undefined ***local_c8;
  undefined **local_b8;
  longlong local_b0;
  undefined1 local_90 [16];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar4 = *(int *)((longlong)param_2 + 0x54);
  if ((longlong)iVar4 < 0) {
    return false;
  }
  if (*(int *)(param_2 + 4) <= iVar4) {
    return false;
  }
  lVar9 = param_2[3];
  lVar12 = (longlong)iVar4 * 0x70;
  plVar6 = *(longlong **)(lVar9 + 8 + lVar12);
  (**(code **)(*plVar6 + 0x50))(plVar6,&DAT_1499d7cc0,local_90);
  if (_DAT_1499d7dc0 == local_90) {
    UVar5 = waveOutGetNumDevs();
    if (UVar5 == 0) {
      return false;
    }
    if (DAT_14cb0d2b0 != (longlong *)0x0) {
      cVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
      if (cVar3 == '\0') {
        return false;
      }
      if (DAT_14cb0d2b0 != (longlong *)0x0) goto LAB_14469b39e;
    }
    plVar6 = (longlong *)FUN_145b156f4();
    lVar7 = plVar6[0x22];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar7 = plVar6[0x22];
    }
    if (*(char *)(lVar7 + 0x2a) != '\x01') {
      return false;
    }
  }
LAB_14469b39e:
  puVar11 = (undefined8 *)(lVar9 + lVar12);
  iVar4 = (**(code **)(*(longlong *)param_2[5] + 0x30))((longlong *)param_2[5],*puVar11);
  if (iVar4 < 0) {
    return false;
  }
  local_78 = (longlong *)0x0;
  if (_DAT_1499d7dc0 == local_90) {
    plVar6 = (longlong *)FUN_145b156f4();
    lVar9 = plVar6[0x22];
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar9 = plVar6[0x22];
    }
    if (*(char *)(lVar9 + 0x2a) != '\x01') goto LAB_14469b3db;
    iVar4 = MFCreateAudioRendererActivate(&local_78);
    if (iVar4 < 0) {
LAB_14469bb04:
      bVar13 = false;
      goto LAB_14469b625;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
    FUN_145af9b74(&local_d8);
    iVar4 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_d8);
    if (0 < iVar4) {
      plVar6 = (longlong *)FUN_147364b50();
      (**(code **)(*plVar6 + 0x70))(plVar6,&local_d8);
      if ((1 < (int)local_d0) &&
         (iVar4 = (**(code **)(*local_78 + 200))(local_78,&DAT_14ab40860,local_d8), iVar4 < 0)) {
        if (local_d8 != (code *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14469bb04;
      }
      if (local_d8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_78 == (longlong *)0x0) {
                    /* WARNING: Read-only address (ram,0x0001499d7dc0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7dd0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7df0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e30) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7dc0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7dd0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7df0) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7e30) is written */
      return false;
    }
  }
  else {
LAB_14469b3db:
    plVar6 = (longlong *)FUN_14001cc68(0x40,0x10);
    *plVar6 = (longlong)&PTR_LAB_14bef8130;
    *(undefined1 (*) [16])(plVar6 + 1) = (undefined1  [16])0x0;
    plVar6[3] = 2;
    *(undefined4 *)(plVar6 + 4) = 0;
    *(undefined1 (*) [16])(plVar6 + 5) = (undefined1  [16])0x0;
    plVar6[7] = 2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 4) = (int)plVar6[4] + 1;
      UNLOCK();
    }
    plVar2 = plVar6 + 5;
    if (_DAT_1499d7dc0 == local_90) {
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      local_d8 = (code *)&DAT_1498de850;
      local_d0 = (longlong *)((ulonglong)local_d0._4_4_ << 0x20);
      local_58 = plVar6;
      FUN_1498de7c2(plVar6 + 1,&local_70,param_1,&local_d8,&local_50);
      local_d8 = FUN_1498de8d8;
      local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
      FUN_1498de852(plVar2,&local_70,param_1);
      plVar6 = local_58;
    }
    else if (_DAT_1499d7df0 == local_90) {
      local_d8 = FUN_1498deb26;
      local_d0 = (longlong *)((ulonglong)local_d0._4_4_ << 0x20);
      local_58 = plVar6;
      FUN_1498de852(plVar2,&local_70,param_1);
      plVar6 = local_58;
    }
    else if (_DAT_1499d7e30 == local_90) {
      local_d8 = FUN_1498decdc;
      local_d0 = (longlong *)((ulonglong)local_d0._4_4_ << 0x20);
      local_58 = plVar6;
      FUN_1498de852(plVar2,&local_70,param_1);
      plVar6 = local_58;
    }
    else if (_DAT_1499d7dd0 == local_90) {
      local_d8 = FUN_1498deeb0;
      local_d0 = (longlong *)((ulonglong)local_d0._4_4_ << 0x20);
      local_58 = plVar6;
      FUN_1498de852(plVar2,&local_70,param_1);
      plVar6 = local_58;
    }
    iVar4 = MFCreateSampleGrabberSinkActivate(puVar11[1],plVar6,&local_78);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if (iVar4 < 0 || local_78 == (longlong *)0x0) {
      bVar13 = false;
      goto LAB_14469b625;
    }
  }
  local_50 = (longlong *)0x0;
  plVar6 = (longlong *)FUN_145b156f4();
  lVar9 = plVar6[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar9 = plVar6[0x22];
  }
  lVar12 = *(longlong *)(param_1 + 0x200);
  if (lVar12 != 0) {
    FUN_1498e72e4(lVar12);
    FUN_1400020a8(lVar12);
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  if ((DAT_14cb0d2b0 == (longlong *)0x0) ||
     ((((*(char *)(lVar9 + 0x2b) == '\0' && (*(char *)(lVar9 + 0x2c) != '\x01')) ||
       (_DAT_1499d7dd0 != local_90)) || (cVar3 = FUN_145db1694(6,2,0), cVar3 == '\0')))) {
LAB_14469b802:
    pauVar8 = (undefined1 (*) [16])FUN_14001cc68(0x10,0x10);
    *pauVar8 = (undefined1  [16])0x0;
    FUN_1498e75dc(pauVar8);
    *(undefined1 (**) [16])(param_1 + 0x200) = pauVar8;
    if (pauVar8 != (undefined1 (*) [16])0x0) {
      bVar13 = false;
      iVar4 = MFCreateTopologyNode(0,&local_50);
      if (iVar4 < 0) goto LAB_14469bc66;
      iVar4 = (**(code **)(*local_50 + 0x108))(local_50,local_78);
      if (((-1 < iVar4) &&
          (iVar4 = (**(code **)(*local_50 + 0xa8))(local_50,&DAT_14ab40800,0), -1 < iVar4)) &&
         (iVar4 = (**(code **)(*param_3 + 0x110))(param_3,local_50), -1 < iVar4))
      goto LAB_14469b89a;
    }
LAB_14469bc63:
    bVar13 = false;
  }
  else {
    cVar3 = FUN_1498df12a((longlong *)(param_1 + 0x158));
    if (cVar3 == '\0') goto LAB_14469b802;
    local_68 = (longlong *)FUN_1498e9a30();
    local_70 = local_68 + 2;
    if (local_68 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    *(longlong **)(param_1 + 0x208) = local_70;
    local_d8 = (code *)0x0;
    plVar2 = *(longlong **)(param_1 + 0x210);
    local_d0 = local_68;
    if (plVar6 != plVar2) {
      local_d0 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x210) = plVar6;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    FUN_1498dcc3e(&local_d8);
    FUN_1498df2fe(&local_70);
    local_c8 = (undefined ***)0x0;
    local_b8 = &PTR_LAB_14bef89f0;
    local_d8 = FUN_1446a7c2e;
    local_b0 = param_1;
    FUN_1498df356(*(undefined8 *)(param_1 + 0x158),param_1 + 0x208,param_1 + 0x218,&local_d8);
    if (local_d8 != (code *)0x0) {
      pppuVar10 = local_c8;
      if (local_c8 == (undefined ***)0x0) {
        pppuVar10 = &local_b8;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    bVar13 = false;
    iVar4 = MFCreateTopologyNode(0,&local_50);
    if (iVar4 < 0) goto LAB_14469bc66;
    lVar12 = *(longlong *)(param_1 + 0x158);
    lVar9 = lVar12 + 0x10;
    if (lVar12 == 0) {
      lVar9 = 0;
    }
    iVar4 = (**(code **)(*local_50 + 0x108))(local_50,lVar9);
    if (((iVar4 < 0) ||
        (iVar4 = (**(code **)(*local_50 + 0xa8))(local_50,&DAT_14ab40800,0), iVar4 < 0)) ||
       ((iVar4 = (**(code **)(*local_50 + 0xa8))(local_50,&DAT_14ab40810,0), iVar4 < 0 ||
        (iVar4 = (**(code **)(*param_3 + 0x110))(param_3,local_50), iVar4 < 0))))
    goto LAB_14469bc63;
    *(undefined1 *)(param_1 + 0x1f9) = 1;
LAB_14469b89a:
    local_70 = (longlong *)0x0;
    iVar4 = MFCreateTopologyNode(1);
    if (((((iVar4 < 0) ||
          (iVar4 = (**(code **)(*local_70 + 0xd8))
                             (local_70,&DAT_14ab407d0,*(undefined8 *)(param_1 + 0x150)), iVar4 < 0))
         || (iVar4 = (**(code **)(*local_70 + 0xd8))
                               (local_70,&DAT_14ab407e0,*(undefined8 *)(param_1 + 0x1e0)), iVar4 < 0
            )) || ((iVar4 = (**(code **)(*local_70 + 0xd8))(local_70,&DAT_14ab407f0,*param_2),
                   iVar4 < 0 ||
                   (iVar4 = (**(code **)(*param_3 + 0x110))(param_3,local_70), iVar4 < 0)))) ||
       (iVar4 = (**(code **)(*(longlong *)*puVar11 + 0x50))
                          ((longlong *)*puVar11,&DAT_1499d7cd0,&local_d8), iVar4 < 0)) {
      bVar13 = false;
    }
    else {
      local_60 = (longlong *)0x0;
      local_80 = (longlong *)0x0;
      lVar9 = FUN_1498df452();
      if (((lVar9 == 0) ||
          (cVar3 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x18))
                             (*(longlong **)(lVar9 + 8),local_90,&local_d8,&local_60,&local_80),
          cVar3 == '\0')) || ((local_60 == (longlong *)0x0 || (local_80 == (longlong *)0x0)))) {
        iVar4 = (**(code **)(*local_70 + 0x140))(local_70,0,local_50,0);
        bVar13 = -1 < iVar4;
LAB_14469bc9a:
        if (local_80 != (longlong *)0x0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      else {
        iVar4 = (**(code **)(*local_60 + 0x108))();
        if (((((iVar4 < 0) ||
              (iVar4 = (**(code **)(*local_60 + 0xa8))(local_60,&DAT_14ab40800,0), iVar4 < 0)) ||
             (iVar4 = (**(code **)(*param_3 + 0x110))(param_3,local_60), iVar4 < 0)) ||
            ((iVar4 = (**(code **)(*local_70 + 0x140))(local_70,0,local_60,0), iVar4 < 0 ||
             (iVar4 = (**(code **)(*local_60 + 0x140))(local_60,0,local_50,0), iVar4 < 0)))) ||
           ((iVar4 = (**(code **)(*local_60 + 0xa8))(local_60,&DAT_14ab407c0,1), iVar4 < 0 ||
            (iVar4 = (**(code **)(*local_50 + 0xa8))(local_50,&DAT_14ab407c0,1), plVar6 = local_80,
            iVar4 < 0)))) {
          bVar13 = false;
          goto LAB_14469bc9a;
        }
        if (local_80 != (longlong *)0x0) {
          cVar3 = (**(code **)(*local_80 + 0xf0))(local_80);
          bVar13 = true;
          if (cVar3 != '\0') {
            *(undefined1 *)(plVar6 + 0x16) = 1;
            lVar9 = *(longlong *)(param_1 + 0x158);
            if ((lVar9 != 0) && (*(longlong **)(lVar9 + 0x58) != plVar6)) {
              (**(code **)(*plVar6 + 8))(plVar6);
              if (*(longlong **)(lVar9 + 0x58) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar9 + 0x58) + 0x10))();
              }
              *(longlong **)(lVar9 + 0x58) = plVar6;
            }
          }
          goto LAB_14469bc9a;
        }
        bVar13 = true;
      }
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
LAB_14469bc66:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
LAB_14469b625:
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
    return bVar13;
  }
  return bVar13;
}



// FUNCTION 14469bd0e Unwind@14469bd0e body=60 status=ok
// SIG undefined Unwind@14469bd0e(void)

void Unwind_14469bd0e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14469bd4a Unwind@14469bd4a body=63 status=ok
// SIG undefined Unwind@14469bd4a(void)

void Unwind_14469bd4a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x10))();
  }
  return;
}



// FUNCTION 14469bd8a Unwind@14469bd8a body=76 status=ok
// SIG undefined Unwind@14469bd8a(void)

void Unwind_14469bd8a(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x88) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0xa8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xa8) + 0x10))();
  }
  return;
}



// FUNCTION 14469bdd6 Unwind@14469bdd6 body=33 status=ok
// SIG undefined Unwind@14469bdd6(void)

void Unwind_14469bdd6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}


