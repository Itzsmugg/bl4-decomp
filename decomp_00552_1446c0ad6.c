// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1446c0ad6 FUN_1446c0ad6 body=920 status=ok
// SIG undefined FUN_1446c0ad6(void)

void FUN_1446c0ad6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  undefined **local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined1 *puStack_180;
  undefined8 local_178;
  undefined1 *local_168;
  undefined1 *puStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined1 *puStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_78;
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_100 = 0x2000040000;
  local_78 = 0x1100000002;
  local_f8 = 0x2001021000;
  lVar5 = FUN_14486d71a();
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != lVar5) {
    *(longlong *)(param_1 + 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
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
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  local_1a8 = &local_188;
  local_188 = 0x3f800000bf800000;
  puStack_180 = &DAT_3f8000003f800000;
  local_178 = 0;
  local_168 = &DAT_3f8000003f800000;
  puStack_160 = &DAT_3f8000003f800000;
  local_158 = 0x3f800000;
  local_148 = 0xbf800000bf800000;
  puStack_140 = &DAT_3f8000003f800000;
  local_138 = 0x3f80000000000000;
  local_128 = 0xbf8000003f800000;
  puStack_120 = &DAT_3f8000003f800000;
  local_118 = &DAT_3f8000003f800000;
  local_68 = &local_1b0;
  local_1b0 = &PTR_FUN_14a249130;
  local_1a0 = 0x80;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FMoviePlaybackResources";
  local_38 = 0;
  uStack_30 = 0;
  local_194 = 0x80;
  local_18c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,(longlong)L"LightFunctionParameters" + 9);
    local_1c0 = &local_70;
    local_1c8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1b8,param_2,&local_194);
    *(undefined4 *)(local_1b8 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_1c0 = &local_70;
    local_1c8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1b8,param_2,&local_194);
    *(undefined4 *)(local_1b8 + 0x18) = 0x78;
  }
  plVar8 = (longlong *)(param_1 + 0x18);
  if (plVar8 != &local_1b8) {
    lVar4 = *plVar8;
    *plVar8 = local_1b8;
    local_1b8 = 0;
    if (lVar4 == 0) goto LAB_1446c0dfe;
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = local_1b8;
  if (local_1b8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_1b8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_1b8 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_1b8 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_1446c0dfe:
  if ((local_28 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446c0e70 FUN_1446c0e70 body=269 status=ok
// SIG undefined FUN_1446c0e70(void)

void FUN_1446c0e70(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
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



// FUNCTION 1446c0f7e FUN_1446c0f7e body=38 status=ok
// SIG undefined FUN_1446c0f7e(void)

undefined8 FUN_1446c0f7e(undefined8 param_1,int param_2)

{
  FUN_1446c0fa4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446c0fa4 FUN_1446c0fa4 body=318 status=ok
// SIG undefined FUN_1446c0fa4(void)

void FUN_1446c0fa4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14bf07830;
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
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1446c1108 FUN_1446c1108 body=69 status=ok
// SIG undefined FUN_1446c1108(void)

undefined8 * FUN_1446c1108(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bf07890;
  FUN_14991678f(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446c1168 FUN_1446c1168 body=12 status=ok
// SIG undefined FUN_1446c1168(void)

void FUN_1446c1168(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c1171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446c1174 FUN_1446c1174 body=29 status=ok
// SIG undefined FUN_1446c1174(void)

undefined8 FUN_1446c1174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446c1192 FUN_1446c1192 body=282 status=ok
// SIG undefined FUN_1446c1192(void)

undefined8 * FUN_1446c1192(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446c09a6);
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



// FUNCTION 1446c12ac FUN_1446c12ac body=109 status=ok
// SIG undefined FUN_1446c12ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c12ac(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1446bf2ea(_DAT_000000a8,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1446bf2ea(param_1[0x15],param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446c12ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1446c1334 FUN_1446c1334 body=29 status=ok
// SIG undefined FUN_1446c1334(void)

void FUN_1446c1334(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446c1352 FUN_1446c1352 body=83 status=ok
// SIG undefined FUN_1446c1352(void)

undefined8 * FUN_1446c1352(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bf07940;
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



// FUNCTION 1446c13a6 FUN_1446c13a6 body=282 status=ok
// SIG undefined FUN_1446c13a6(void)

undefined8 * FUN_1446c13a6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446c09a6);
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



// FUNCTION 1446c14c0 FUN_1446c14c0 body=126 status=ok
// SIG undefined FUN_1446c14c0(void)

void FUN_1446c14c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1446bf99c(param_1[0x15],param_1 + 0x16);
  plVar3 = (longlong *)param_1[0x17];
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
                    /* WARNING: Could not recover jumptable at 0x0001446c1533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1446c153e FUN_1446c153e body=272 status=ok
// SIG undefined FUN_1446c153e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c153e(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cc32928 = 0xffffffff;
  _DAT_14cc3292c = 0x105;
  DAT_14cc3292e = 0;
  DAT_14cc32930 = 0;
  DAT_14cc32938 = 0;
  DAT_14cc32920 = &PTR_FUN_14bf07800;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_1446c15a6;
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 == DVar3) goto LAB_1446c15ab;
      goto LAB_1446c15e2;
    }
  }
  else {
LAB_1446c15a6:
    if (iVar1 != 0x10) {
LAB_1446c15e2:
      FUN_140308182(&DAT_14cc32920,0);
      goto LAB_1446c15f0;
    }
  }
LAB_1446c15ab:
  (*(code *)DAT_14cc32920[3])(&DAT_14cc32920,&DAT_14ca85100);
LAB_1446c15f0:
  atexit(FUN_1446be732);
  local_28 = 0x800000014bf07692;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146772caa(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446c1650 FUN_1446c1650 body=102 status=ok
// SIG undefined FUN_1446c1650(void)

void FUN_1446c1650(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bf07a88;
  local_14 = 0x10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146772de8(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c16b8 FUN_1446c16b8 body=102 status=ok
// SIG undefined FUN_1446c16b8(void)

void FUN_1446c16b8(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bf07c1a;
  local_14 = 0xf;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146772f7a(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c1720 FUN_1446c1720 body=102 status=ok
// SIG undefined FUN_1446c1720(void)

void FUN_1446c1720(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014bf07cf0;
  local_14 = 0x1c;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1467730bc(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c1788 FUN_1446c1788 body=59 status=ok
// SIG undefined FUN_1446c1788(void)

void FUN_1446c1788(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cc32978;
  if (DAT_14cc32978 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cc32978 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446c17b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1446c17c4 FUN_1446c17c4 body=3322 status=ok
// SIG undefined FUN_1446c17c4(void)

ulonglong FUN_1446c17c4(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint uVar19;
  undefined ***pppuVar20;
  int iVar21;
  wchar_t *pwVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined8 unaff_RBP;
  undefined8 *puVar25;
  longlong *plVar26;
  undefined *puVar27;
  ulonglong uVar28;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong **local_f0;
  undefined1 local_e8;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  int local_a0;
  int local_9c;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  int iStack_80;
  int iStack_7c;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar24 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x20));
  FUN_1410f2562(&local_b8);
  iVar9 = (int)local_b0;
  iVar8 = ((int)local_b0 == 0) + 7;
  local_88 = local_b8;
  local_b8 = (longlong *)0x0;
  iStack_80 = (int)local_b0;
  iVar6 = local_b0._4_4_;
  iStack_7c = local_b0._4_4_;
  local_b0 = 0;
  iVar21 = iVar8 + iVar9;
  if (iVar21 < iVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar21);
  }
  if (iVar6 < iVar21) {
    FUN_1446f8c06(&local_88);
  }
  FUN_1400020e8(&local_88,L"Movies/",7);
  iVar6 = iStack_7c;
  iVar9 = iStack_80;
  if (iStack_80 < 2) {
    local_a8 = (longlong *)0x0;
    local_a0 = *(int *)(puVar24 + 1);
    lVar13 = (longlong)local_a0;
    _Src = (void *)*puVar24;
    if (lVar13 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,local_a0,0);
      memcpy(local_a8,_Src,lVar13 * 2);
    }
  }
  else {
    iVar8 = *(int *)(puVar24 + 1) + -1;
    if (*(int *)(puVar24 + 1) == 0) {
      iVar8 = 0;
    }
    local_a8 = local_88;
    local_88 = (longlong *)0x0;
    local_a0 = iStack_80;
    local_9c = iStack_7c;
    iStack_80 = 0;
    iStack_7c = 0;
    iVar21 = iVar8 + iVar9;
    if (iVar21 < iVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar8);
    }
    if (iVar6 < iVar21) {
      FUN_1446f8c06(&local_a8);
    }
    FUN_1400020e8(&local_a8,*puVar24,iVar8);
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  puVar24 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar24 = &PTR_LAB_14bf07fc0;
  *(undefined4 *)(puVar24 + 1) = 1;
  *(undefined4 *)((longlong)puVar24 + 0xc) = 0;
  puVar24[2] = param_1 + 0x38;
  *(undefined8 **)(param_1 + 0x88) = puVar24;
  puVar12 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  *puVar12 = &PTR_LAB_14bf08020;
  *(undefined4 *)(puVar12 + 1) = 1;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x41) = 0;
  *(undefined8 *)((longlong)puVar12 + 0x49) = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  *(undefined8 **)(param_1 + 0x80) = puVar12;
  uVar3 = *(undefined1 *)(param_1 + 0x90);
  local_c0 = CONCAT44(DAT_14c967818._4_4_,(int)DAT_14c967818);
  MFCreateMediaSession(0,puVar12 + 2);
  (**(code **)(*(longlong *)puVar12[2] + 0x20))((longlong *)puVar12[2],puVar12,0);
  local_b8 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  MFCreateSourceResolver();
  plVar26 = (longlong *)&DAT_149dfb77a;
  if (local_a0 != 0) {
    plVar26 = local_a8;
  }
  FUN_140002266(&local_88,L"%s.%s",plVar26,&DAT_14a598f60);
  local_94 = 2;
  plVar26 = (longlong *)&DAT_149dfb77a;
  if (iStack_80 != 0) {
    plVar26 = local_88;
  }
  local_f0 = &local_90;
  local_f8 = (longlong **)&local_94;
  iVar9 = (**(code **)(*local_b8 + 0x18))(local_b8,plVar26,1,0);
  (**(code **)(*local_b8 + 0x10))();
  if (iVar9 < 0) {
    LOCK();
    *(undefined4 *)(puVar12 + 4) = 1;
    UNLOCK();
  }
  else {
    (**(code **)*local_90)(local_90,&DAT_14bef5ff8,puVar12 + 3);
    (**(code **)(*local_90 + 0x10))();
    FUN_1499181de(puVar12,&local_c0,puVar24,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff);
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar28 = local_c0;
  iVar9 = local_c0._4_4_;
  bVar4 = DAT_14c967818._4_4_ == local_c0._4_4_;
  bVar5 = (int)DAT_14c967818 == (int)local_c0;
  if (bVar4 && bVar5) goto LAB_1446c1e3f;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_144893a1c(param_1 + 0x38,0);
  }
  if ((longlong)*(int *)(param_1 + 0x70) < 1) {
    lVar13 = FUN_14001cc68(0x58,0x10);
    local_f8 = &local_d8;
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    local_e8 = 1;
    local_f0 = (longlong **)&DAT_00000001;
    FUN_1415e0d68(lVar13,uVar28 & 0xffffffff,iVar9,2);
    plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar14[1] = (longlong)&DAT_100000001;
    *plVar14 = (longlong)&PTR_FUN_14b5a8e30;
    plVar14[2] = lVar13;
    *(longlong *)(param_1 + 0x58) = lVar13;
    plVar26 = *(longlong **)(param_1 + 0x60);
    if (plVar14 == plVar26) {
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar26 = plVar14 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
          plVar26 = plVar14;
          goto joined_r0x0001446c1b91;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x60) = plVar14;
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar26 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar1 = (int *)((longlong)plVar26 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
joined_r0x0001446c1b91:
          if (iVar9 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
          }
        }
      }
    }
    lVar13 = *(longlong *)(param_1 + 0x58);
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar9 = *(int *)(lVar15 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar9 != 2) {
        if (iVar9 != 1) goto LAB_1446c1bc7;
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_1446c1bd0;
        goto LAB_1446c1d52;
      }
    }
    else {
LAB_1446c1bc7:
      if (iVar9 != 0x10) {
LAB_1446c1d52:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar15 + 0xc60), iVar9 == 2))
          goto LAB_1446c1bd0;
          if (iVar9 == 1) {
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            if (DVar10 == DVar11) goto LAB_1446c1bd0;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar12 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar18 = (uint *)*puVar12;
          if (puVar18 != (uint *)0x0) goto LAB_1446c1f1c;
          while( true ) {
            uVar19 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar19 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar19 | 1;
              __tlregdtor(&LAB_1446c3af5);
            }
            lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar16 = *(undefined4 **)(lVar15 + 0x310);
            *(undefined8 *)(lVar15 + 0x310) = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar12 = puVar16;
            FUN_140217a48(puVar12);
            puVar18 = (uint *)*puVar12;
LAB_1446c1f1c:
            puVar25 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar23 = (uint *)(puVar25 + 0x16);
            uVar19 = puVar18[0x12];
            if (puVar23 <= puVar18 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar2 = *puVar18;
              *puVar18 = *puVar18 + uVar19 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar19) != 0xffffffff) break;
              puVar18 = (uint *)*puVar12;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar12 = puVar18;
              puVar25 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
              puVar23 = (uint *)(puVar25 + 0x16);
              uVar19 = 0;
              if (puVar23 <= puVar18 + 0x4000) {
                uVar19 = 1;
                goto LAB_1446c1f9c;
              }
            }
          }
          uVar19 = uVar19 + 1;
LAB_1446c1f9c:
          *(uint **)(puVar18 + 0x10) = puVar23;
          puVar18[0x12] = uVar19;
          FUN_1447247dc(puVar25,0);
          *puVar25 = &PTR_FUN_14bf08170;
          puVar25[0x15] = lVar13;
LAB_1446c1fc1:
          iVar9 = 0;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar19 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
              uVar28 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
            }
            else {
              uVar28 = 2;
            }
          }
          else {
            iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar28 = 5;
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
          lVar13 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar13 == 0) {
            uVar7 = 1;
            if ((char)uVar28 != '\x06') {
              uVar7 = uVar28;
            }
            uVar28 = uVar7;
            uVar17 = 0;
          }
          else {
            if ((char)uVar28 == '\x06') {
              uVar28 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
            }
            uVar17 = *(undefined8 *)(lVar13 + 0x30);
          }
          puVar25[0xf] = uVar17;
          puVar25[0x10] = uVar28 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar25 + 0x1c) = iVar9;
          if (puVar25 == (undefined8 *)0x0) {
            local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
            UNLOCK();
            local_88 = (longlong *)CONCAT71(local_88._1_7_,1);
            FUN_1447439e4(puVar25);
            LOCK();
            piVar1 = (int *)(puVar25 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar25)(puVar25,1);
            }
          }
        }
        else {
          local_68 = &PTR_LAB_14bf08150;
          local_88 = (longlong *)&LAB_1446c3cca;
          pwVar22 = L"InitMovieTexture";
          puVar27 = &DAT_14cc32988;
          local_60 = lVar13;
LAB_1446c1ddc:
          local_78 = (undefined ***)0x0;
          local_f8 = &local_88;
          FUN_14005a792(&DAT_14ca9a440,pwVar22,puVar27);
          if (local_88 != (longlong *)0x0) {
            pppuVar20 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar20 = &local_68;
            }
            (*(code *)(*pppuVar20)[2])();
          }
        }
        goto LAB_1446c1e05;
      }
    }
LAB_1446c1bd0:
    (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x18))(lVar13 + 0x20,&DAT_14ca85100);
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x68);
    lVar15 = (longlong)*(int *)(param_1 + 0x70) * 0x10;
    uVar17 = *(undefined8 *)(lVar13 + -0x10 + lVar15);
    plVar26 = *(longlong **)(lVar13 + -8 + lVar15);
    puVar12 = (undefined8 *)(lVar13 + -0x10 + lVar15);
    *puVar12 = 0;
    puVar12[1] = 0;
    FUN_148b73a6e(param_1 + 0x68,*(int *)(param_1 + 0x70) + -1);
    FUN_145a25576(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x58) = uVar17;
    plVar14 = *(longlong **)(param_1 + 0x60);
    if (plVar26 == plVar14) {
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar26 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar1 = (int *)((longlong)plVar26 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
          plVar14 = plVar26;
          goto joined_r0x0001446c1ca8;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x60) = plVar26;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar26 = plVar14 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
joined_r0x0001446c1ca8:
          if (iVar9 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
    iVar9 = (**(code **)**(undefined8 **)(param_1 + 0x58))();
    if (iVar9 == (int)local_c0) {
      iVar9 = (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
      if (iVar9 != local_c0._4_4_) goto LAB_1446c1cd6;
    }
    else {
LAB_1446c1cd6:
      uVar28 = local_c0;
      lVar13 = *(longlong *)(param_1 + 0x58);
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = *(int *)(lVar15 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar9 != 2) {
          if (iVar9 != 1) goto LAB_1446c1d06;
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_1446c1d0f;
          goto LAB_1446c21f6;
        }
      }
      else {
LAB_1446c1d06:
        if (iVar9 != 0x10) {
LAB_1446c21f6:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar15 + 0xc60), iVar9 == 2))
            goto LAB_1446c1d0f;
            if (iVar9 == 1) {
              DVar10 = FUN_140ad26c0();
              DVar11 = GetCurrentThreadId();
              if (DVar10 == DVar11) goto LAB_1446c1d0f;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar12 = (undefined8 *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
            puVar18 = (uint *)*puVar12;
            if (puVar18 != (uint *)0x0) goto LAB_1446c2329;
            while( true ) {
              uVar19 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar19 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar19 | 1;
                __tlregdtor(&LAB_1446c3af5);
              }
              lVar15 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar16 = *(undefined4 **)(lVar15 + 0x310);
              *(undefined8 *)(lVar15 + 0x310) = 0;
              if (puVar16 == (undefined4 *)0x0) {
                puVar16 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar16 = 0xffffffff;
              *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar12 = puVar16;
              FUN_140217a48(puVar12);
              puVar18 = (uint *)*puVar12;
LAB_1446c2329:
              puVar25 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar23 = (uint *)(puVar25 + 0x17);
              uVar19 = puVar18[0x12];
              if (puVar23 <= puVar18 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
                LOCK();
                uVar2 = *puVar18;
                *puVar18 = *puVar18 + uVar19 + 1;
                UNLOCK();
                if ((uVar2 ^ uVar19) != 0xffffffff) break;
                puVar18 = (uint *)*puVar12;
                *puVar18 = 0xffffffff;
                *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
                puVar18[0x12] = 0;
                *puVar12 = puVar18;
                puVar25 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
                puVar23 = (uint *)(puVar25 + 0x17);
                uVar19 = 0;
                if (puVar23 <= puVar18 + 0x4000) {
                  uVar19 = 1;
                  goto LAB_1446c23a9;
                }
              }
            }
            uVar19 = uVar19 + 1;
LAB_1446c23a9:
            *(uint **)(puVar18 + 0x10) = puVar23;
            puVar18[0x12] = uVar19;
            FUN_1447247dc(puVar25,0);
            *puVar25 = &PTR_FUN_14bf08140;
            puVar25[0x15] = lVar13;
            puVar25[0x16] = uVar28;
            goto LAB_1446c1fc1;
          }
          local_68 = &PTR_LAB_14bf08120;
          local_88 = (longlong *)&LAB_1446c3aa4;
          pwVar22 = L"UpdateMovieTexture";
          puVar27 = &DAT_14cc32984;
          local_60 = lVar13;
          local_58 = uVar28;
          goto LAB_1446c1ddc;
        }
      }
LAB_1446c1d0f:
      *(ulonglong *)(lVar13 + 0x30) = uVar28;
      FUN_1447fd100(lVar13 + 0x20,&DAT_14ca85100);
    }
  }
LAB_1446c1e05:
  local_88 = (longlong *)0x0;
  iStack_80 = 0;
  iStack_7c = 0;
  local_78 = (undefined ***)0x0;
  plVar26 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x10);
  (**(code **)(*plVar26 + 0x48))(plVar26,&DAT_1499d7700,(PROPVARIANT *)&local_88);
  PropVariantClear((PROPVARIANT *)&local_88);
LAB_1446c1e3f:
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)puVar24 >> 8),!bVar4 || !bVar5) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c24c0 FUN_1446c24c0 body=4979 status=ok
// SIG undefined FUN_1446c24c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1446c24c0(longlong param_1)

{
  undefined8 **ppuVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  char cVar10;
  void *_Dst;
  longlong lVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 auVar20 [4];
  wchar_t *_Dest;
  byte bVar21;
  undefined8 *puVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_3d8 [32];
  undefined8 *local_3b8;
  undefined8 *local_3b0;
  ulonglong local_3a8;
  undefined1 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong local_368;
  undefined1 local_359;
  undefined8 local_358;
  undefined1 auStack_34d [8];
  undefined1 auStack_345 [5];
  undefined1 local_340 [8];
  undefined8 *local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined2 local_324;
  undefined1 local_278 [16];
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_250 [7];
  undefined1 auStack_249 [5];
  undefined1 auStack_244 [3];
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  ulonglong local_208;
  undefined8 uStack_200;
  wchar_t *local_1f8;
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined5 uStack_1a4;
  undefined3 uStack_19f;
  undefined5 uStack_19c;
  undefined8 uStack_197;
  undefined1 local_188 [8];
  undefined1 auStack_180 [8];
  undefined1 local_178 [4];
  byte bStack_174;
  undefined3 uStack_173;
  uint local_170;
  undefined8 uStack_168;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lVar11 = *(longlong *)(param_1 + 0x58);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x28) == -1) {
      (**(code **)(*(longlong *)(lVar11 + 0x20) + 0x18))(lVar11 + 0x20,&DAT_14ca85100);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x88) + 0xc) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x80);
      if (((*(int *)(lVar7 + 0x3c) == 2) && (*(int *)(lVar7 + 0x28) == *(int *)(lVar7 + 0x34))) &&
         (*(int *)(lVar7 + 0x2c) == *(int *)(lVar7 + 0x38))) {
        local_3a0 = 1;
        local_3a8 = local_3a8 & 0xffffffffffffff00;
        local_3b0 = &local_238;
        local_398 = 0;
        local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,1);
        _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x430))
                                 (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar11 + 8),0);
        memcpy(_Dst,*(void **)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x40));
        local_3b0 = (undefined8 *)CONCAT71(local_3b0._1_7_,1);
        local_3b8 = (undefined8 *)((ulonglong)local_3b8 & 0xffffffffffffff00);
        (**(code **)(*DAT_14ca83900 + 0x438))
                  (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar11 + 8),0);
      }
      else {
        auStack_34d[4] = 0;
        ppuVar1 = (undefined8 **)(param_1 + 0x78);
        plVar18 = *(longlong **)(param_1 + 0x78);
        if (plVar18 == (longlong *)0x0) {
LAB_1446c26cc:
          uStack_21c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_238 = 0x109;
          uStack_214 = (undefined4)*(undefined8 *)(lVar7 + 0x28);
          uStack_210 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x28) >> 0x20);
          local_20c = 0x10001;
          uStack_230 = 1;
          uStack_218 = 0;
          uStack_22c = 0;
          uStack_228 = 0;
          uStack_224 = 0;
          uStack_220 = 0;
          local_208 = CONCAT26(local_208._6_2_,0xff0002000101);
          uStack_200 = CONCAT44(uStack_200._4_4_,0x70);
          local_1f8 = L"FMediaFoundationMovieStreamer";
          auStack_1f0 = (undefined1  [16])0x0;
          local_1e0 = 0;
          uStack_1dc = 0;
          (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_338,&DAT_14ca85100);
          if (ppuVar1 != &local_338) {
            puVar22 = *ppuVar1;
            *ppuVar1 = local_338;
            local_338 = (undefined8 *)0x0;
            if (puVar22 == (undefined8 *)0x0) goto LAB_1446c288a;
            LOCK();
            puVar2 = (uint *)(puVar22 + 1);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(puVar22 + 1);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)((longlong)puVar22 + 0xd);
                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                plVar12[1] = (longlong)puVar22;
                plVar18 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar12 = (longlong)plVar18;
                    LOCK();
                    bVar23 = plVar18 != DAT_14ca843c0;
                    plVar17 = plVar12;
                    if (bVar23) {
                      plVar18 = DAT_14ca843c0;
                      plVar17 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar17;
                    UNLOCK();
                  } while (bVar23);
                }
                else {
                  do {
                    *plVar12 = (longlong)plVar17;
                    LOCK();
                    bVar23 = plVar17 != DAT_14ca843c8;
                    plVar18 = plVar12;
                    if (bVar23) {
                      plVar17 = DAT_14ca843c8;
                      plVar18 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar18;
                    UNLOCK();
                  } while (bVar23);
                }
              }
            }
          }
          puVar22 = local_338;
          if (local_338 != (undefined8 *)0x0) {
            LOCK();
            puVar2 = (uint *)(local_338 + 1);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(local_338 + 1);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)((longlong)local_338 + 0xd);
                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                plVar12[1] = (longlong)puVar22;
                plVar18 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar12 = (longlong)plVar18;
                    LOCK();
                    bVar23 = plVar18 != DAT_14ca843c0;
                    plVar17 = plVar12;
                    if (bVar23) {
                      plVar18 = DAT_14ca843c0;
                      plVar17 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar17;
                    UNLOCK();
                  } while (bVar23);
                }
                else {
                  do {
                    *plVar12 = (longlong)plVar17;
                    LOCK();
                    bVar23 = plVar17 != DAT_14ca843c8;
                    plVar18 = plVar12;
                    if (bVar23) {
                      plVar17 = DAT_14ca843c8;
                      plVar18 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar18;
                    UNLOCK();
                  } while (bVar23);
                }
              }
            }
          }
        }
        else {
          lVar11 = (**(code **)(*plVar18 + 8))(plVar18);
          iVar5 = *(int *)(lVar11 + 0x28);
          lVar11 = (**(code **)(*plVar18 + 8))(plVar18);
          if (((*(int *)(lVar11 + 0x24) != *(int *)(lVar7 + 0x28)) ||
              (iVar5 != *(int *)(lVar7 + 0x2c))) ||
             (lVar11 = (**(code **)(**ppuVar1 + 8))(), *(char *)(lVar11 + 0x33) != '\x02'))
          goto LAB_1446c26cc;
          lVar11 = (**(code **)(**ppuVar1 + 8))();
          if ((*(byte *)(lVar11 + 1) & 1) == 0) goto LAB_1446c26cc;
        }
LAB_1446c288a:
        local_238 = 0;
        uStack_230 = 0;
        uStack_22c = 0;
        uStack_228 = (undefined4)*(undefined8 *)(lVar7 + 0x28);
        uStack_224 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x28) >> 0x20);
        local_3a8 = *(ulonglong *)(param_1 + 0x38);
        uVar15 = *(undefined8 *)(param_1 + 0x78);
        uVar6 = *(undefined4 *)(lVar7 + 0x30);
        if (DAT_14ca85169 == '\0') {
          FUN_14002049c(&DAT_14ca85100,1);
          local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,uVar6);
          local_3b8 = &local_238;
          (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,&DAT_14ca85100,uVar15,0);
          FUN_14002049c(&DAT_14ca85100,0);
        }
        else {
          local_3b0 = (undefined8 *)CONCAT44(local_3b0._4_4_,uVar6);
          local_3b8 = &local_238;
          (**(code **)(*DAT_14ca83900 + 0x210))(DAT_14ca83900,&DAT_14ca85100,uVar15,0);
        }
        local_358 = *(undefined8 *)(lVar7 + 0x34);
        puVar22 = *(undefined8 **)(*(longlong *)(param_1 + 0x58) + 8);
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          LOCK();
          puVar2 = (uint *)(puVar22 + 1);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(puVar22 + 1);
            LOCK();
            uVar3 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)((longlong)puVar22 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = (longlong)puVar22;
              plVar18 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar18;
                  LOCK();
                  bVar23 = plVar18 != DAT_14ca843c0;
                  plVar17 = plVar12;
                  if (bVar23) {
                    plVar18 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar23);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar17;
                  LOCK();
                  bVar23 = plVar17 != DAT_14ca843c8;
                  plVar18 = plVar12;
                  if (bVar23) {
                    plVar17 = DAT_14ca843c8;
                    plVar18 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar18;
                  UNLOCK();
                } while (bVar23);
              }
            }
          }
        }
        local_338 = &local_238;
        local_238 = 0xffffffffffffffff;
        uStack_230 = 0xffffffff;
        uStack_228 = SUB84(puVar22,0);
        uVar6 = uStack_228;
        uStack_224 = (undefined4)((ulonglong)puVar22 >> 0x20);
        uVar9 = uStack_224;
        uStack_220 = CONCAT31(uStack_220._1_3_,1);
        uStack_21c = 0;
        uStack_218 = 0x1000;
        uStack_214 = 0;
        local_208 = local_208 & 0xffffffffffffff00;
        local_330 = CONCAT44(local_330._4_4_,1);
        FUN_144760590(&DAT_14ca85100,&local_338,0);
        lVar11 = 0x15;
        do {
          *(undefined1 (*) [16])(auStack_34d + lVar11) = (undefined1  [16])0x0;
          *(undefined4 *)(local_340 + lVar11 + 3) = 0xffffffff;
          *(undefined2 *)(local_340 + lVar11 + 7) = 0;
          lVar11 = lVar11 + 0x18;
        } while (lVar11 != 0xd5);
        local_264 = 0;
        local_278 = (undefined1  [16])0x0;
        local_268 = 0;
        local_260 = 0xffffffff;
        uStack_25c = 0xffffffff;
        uStack_258 = 0xffffffff;
        uStack_254 = 0xffffffff;
        _local_250 = 0;
        auStack_249._1_4_ = auStack_249._1_4_ & 0xffffff00;
        _auStack_244 = 0;
        auStack_241._1_3_ = 0;
        local_330 = 0;
        local_328 = 0xffffffff;
        local_324 = 0x500;
        _Dest = (wchar_t *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
        pwVar13 = _Dest + 0x1a;
        local_338 = puVar22;
        if (DAT_14ca85108 < pwVar13) {
          FUN_140023dd8(&DAT_14ca85100,0x36);
          _Dest = (wchar_t *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
          pwVar13 = _Dest + 0x1a;
        }
        DAT_14ca85100 = pwVar13;
        wcscpy(_Dest,L"WindowsMovieConvertSample");
        puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        pwVar13 = (wchar_t *)(puVar22 + 0x23);
        if (DAT_14ca85108 < pwVar13) {
          FUN_140023dd8(&DAT_14ca85100,0x120);
          puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          pwVar13 = (wchar_t *)(puVar22 + 0x23);
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = pwVar13;
        *DAT_14ca85130 = puVar22;
        DAT_14ca85130 = puVar22 + 1;
        puVar22[1] = 0;
        *puVar22 = &PTR_FUN_14a217b50;
        memcpy(puVar22 + 2,&local_338,0xe8);
        puVar22[0x1f] = 0;
        puVar22[0x20] = CONCAT44(_auStack_244,auStack_249._1_4_);
        *(uint *)((longlong)puVar22 + 0x107) = CONCAT31(auStack_241._1_3_,auStack_241[0]);
        puVar22[0x22] = _Dest;
        lVar11 = 0x11;
        do {
          *(undefined8 *)(local_250 + lVar11 + 7) = 0;
          *(undefined8 *)(auStack_244 + lVar11 + 3) = 0xffffffff00000000;
          *(undefined2 *)(&uStack_239 + lVar11) = 0;
          lVar11 = lVar11 + 0x18;
        } while (lVar11 != 0xd1);
        _local_178 = _local_178 & 0xffffff0000000000;
        lVar11 = 0xd9;
        do {
          *(undefined8 *)(local_250 + lVar11 + 7) = 0;
          *(undefined8 *)(auStack_244 + lVar11 + 3) = 0xffffffff00000000;
          *(undefined2 *)(&uStack_239 + lVar11) = 0;
          lVar11 = lVar11 + 0x18;
        } while (lVar11 != 0x199);
        local_b0 = 0;
        local_80 = 0;
        local_78 = local_78 & 0xff;
        local_a8 = (undefined1  [16])0x0;
        local_98 = (undefined1  [16])0x0;
        local_88 = local_88 & 0xff00;
        lVar11 = 0x15;
        do {
          if (*(longlong *)(auStack_34d + lVar11) == 0) {
            auVar20 = local_178;
            break;
          }
          *(longlong *)(local_250 + lVar11 + 3) = *(longlong *)(auStack_34d + lVar11);
          bVar4 = *(byte *)((longlong)&local_338 + lVar11);
          bVar21 = bVar4 >> 2;
          auStack_241[lVar11 + 4] = bVar21;
          abStack_23c[lVar11] = bVar4 & 3;
          *(undefined4 *)(auStack_244 + lVar11 + 3) = *(undefined4 *)(local_340 + lVar11 + 3);
          *(uint *)(auStack_249 + lVar11 + 4) = (uint)(byte)local_340[lVar11 + 7];
          auVar20 = (undefined1  [4])((int)local_178 + 1);
          bVar4 = bStack_174 | bVar21 == 2;
          _local_178 = CONCAT14(bVar4,auVar20);
          lVar8 = *(longlong *)(auStack_345 + lVar11);
          if (lVar8 != 0) {
            local_b0 = 1;
            uVar15 = *(undefined8 *)(auStack_249 + lVar11 + 4);
            *(undefined8 *)(local_188 + lVar11 + 3) = *(undefined8 *)(local_250 + lVar11 + 3);
            *(undefined8 *)(auStack_180 + lVar11 + 3) = uVar15;
            *(undefined8 *)(local_178 + lVar11 + 3) = *(undefined8 *)(auStack_241 + lVar11 + 4);
            *(longlong *)(local_188 + lVar11 + 3) = lVar8;
          }
          lVar11 = lVar11 + 0x18;
        } while (lVar11 != 0xd5);
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_a8 = ZEXT816(0);
        if (0 < (int)auVar20) {
          memcpy(&DAT_14ca851a8,&local_238,(ulonglong)(uint)auVar20 * 0x18);
        }
        _DAT_14ca85268 = 0;
        uRam000000014ca85270 = 0;
        DAT_14ca8527a = 0;
        _DAT_14ca85278 = 0;
        DAT_14ca8527b = DAT_14ca8527b & 0xfc | 2;
        local_1f8 = (wchar_t *)0x0;
        auStack_1f0 = ZEXT816(0);
        local_208 = 0;
        uStack_200 = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        local_20c = 0;
        uStack_228 = 0;
        uStack_224 = 0;
        uStack_220 = 0;
        uStack_21c = 0;
        local_238 = 0;
        uStack_230 = 0;
        uStack_22c = 0;
        uStack_1dc = 0;
        uStack_1d8 = 0;
        uStack_1d4 = 0;
        local_1cc = 0;
        uStack_1c4 = 0;
        local_1bc = 0;
        uStack_1b4 = 0;
        local_1ac = 0;
        uStack_1a4 = 0;
        uStack_19f = 0;
        uStack_19c = 0;
        uStack_197 = 0;
        local_188 = (undefined1  [8])0x0;
        auStack_180 = (undefined1  [8])0x0;
        _local_178 = 0;
        local_170 = 1;
        uStack_168 = 0;
        _DAT_14ca851a0 = (uint)auVar20;
        FUN_144b0e33a(&DAT_14ca85100,&local_238);
        fVar24 = (float)local_358._4_4_;
        fVar25 = (float)(int)local_358;
        puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        pwVar13 = (wchar_t *)(puVar22 + 5);
        if (DAT_14ca85108 < pwVar13) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          pwVar13 = (wchar_t *)(puVar22 + 5);
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = pwVar13;
        *DAT_14ca85130 = puVar22;
        DAT_14ca85130 = puVar22 + 1;
        *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
        *puVar22 = &PTR_LAB_14a1e7fc8;
        *(undefined4 *)(puVar22 + 3) = 0;
        *(float *)((longlong)puVar22 + 0x1c) = fVar25;
        *(float *)(puVar22 + 4) = fVar24;
        *(undefined4 *)((longlong)puVar22 + 0x24) = 0x3f800000;
        local_1f8 = DAT_14c9c0d98;
        uStack_200 = DAT_14c9c0db0;
        local_208 = DAT_14ca111f0;
        local_1e0 = 1;
        uVar15 = *(undefined8 *)
                  (&DAT_14ca8c1f0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
        uVar14 = FUN_1460ae50e();
        lVar11 = 0;
        FUN_1448e935e(uVar15,auStack_34d + 5,uVar14,0);
        FUN_1460ae50e();
        local_238 = DAT_14ca8cdd0;
        if (stack0xfffffffffffffcb8 != (undefined8 *)0x0) {
          lVar11 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)local_340 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4) * 8);
          if (lVar11 == 0) {
            lVar11 = FUN_1400bafc2(*(longlong *)((longlong)local_340 + 8),
                                   (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4),1);
          }
        }
        uStack_230 = (undefined4)lVar11;
        uStack_22c = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (*(int *)(lVar7 + 0x3c) == 9) {
          uVar14 = FUN_1460affde();
          lVar11 = 0;
          FUN_1448e935e(uVar15,auStack_34d + 5,uVar14,0);
          FUN_1460affde();
          if (stack0xfffffffffffffcb8 != (undefined8 *)0x0) {
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)local_340 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(*(longlong *)((longlong)local_340 + 8),
                                     (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4),1)
              ;
            }
          }
          uStack_228 = (undefined4)lVar11;
          uStack_224 = (undefined4)((ulonglong)lVar11 >> 0x20);
          lVar11 = FUN_140028f18(&DAT_14ca85100);
          if ((lVar11 != 0) && ((local_170 & 0x10000000) == 0)) {
            DAT_14ca85290 = CONCAT44(uStack_22c,uStack_230);
            _DAT_14ca852a8 = uStack_218;
            uRam000000014ca852ac = uStack_214;
            uRam000000014ca852b0 = uStack_210;
            uRam000000014ca852b4 = local_20c;
            DAT_14ca85298._0_4_ = uStack_228;
            DAT_14ca85298._4_4_ = uStack_224;
            uRam000000014ca852a0 = uStack_220;
            uRam000000014ca852a4 = uStack_21c;
            _DAT_14ca85288 = local_238;
            puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            pwVar13 = (wchar_t *)(puVar22 + 4);
            if (DAT_14ca85108 < pwVar13) {
              FUN_140023dd8(&DAT_14ca85100,0x28);
              puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
              pwVar13 = (wchar_t *)(puVar22 + 4);
            }
            DAT_14ca85160 = DAT_14ca85160 + 1;
            DAT_14ca85100 = pwVar13;
            *DAT_14ca85130 = puVar22;
            DAT_14ca85130 = puVar22 + 1;
            puVar22[1] = 0;
            *puVar22 = &PTR_LAB_14a37d348;
            puVar22[2] = lVar11;
            *(undefined4 *)(puVar22 + 3) = 0;
            *(undefined1 *)((longlong)puVar22 + 0x1c) = 1;
          }
          if (stack0xfffffffffffffcb8 == (undefined8 *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)local_340 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(*(longlong *)((longlong)local_340 + 8),
                                     *(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4),1);
            }
          }
          local_3b8 = (undefined8 *)(auStack_34d + 4);
          FUN_149919011(auStack_34d + 5,lVar11,ppuVar1,&local_358);
LAB_1446c33fc:
          local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,0x3f800000);
          FUN_147815ced(auStack_34d + 5,0,0x3f800000,0);
          puVar22 = stack0xfffffffffffffcb8;
          puVar16 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          pwVar13 = (wchar_t *)(puVar16 + 5);
          if (DAT_14ca85108 < pwVar13) {
            FUN_140023dd8(&DAT_14ca85100,0x30);
            puVar16 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            pwVar13 = (wchar_t *)(puVar16 + 5);
          }
          DAT_14ca85160 = DAT_14ca85160 + 1;
          DAT_14ca85100 = pwVar13;
          *DAT_14ca85130 = puVar16;
          DAT_14ca85130 = puVar16 + 1;
          puVar16[1] = 0;
          *puVar16 = &PTR_LAB_14a1fb5a8;
          *(undefined4 *)(puVar16 + 2) = 0;
          puVar16[3] = puVar22;
          *(undefined4 *)(puVar16 + 4) = 0;
          fVar24 = (float)local_358._4_4_;
          fVar25 = (float)(int)local_358;
          puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          pwVar13 = (wchar_t *)(puVar22 + 5);
          if (DAT_14ca85108 < pwVar13) {
            FUN_140023dd8(&DAT_14ca85100,0x30);
            puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            pwVar13 = (wchar_t *)(puVar22 + 5);
          }
          DAT_14ca85160 = DAT_14ca85160 + 1;
          DAT_14ca85100 = pwVar13;
          *DAT_14ca85130 = puVar22;
          DAT_14ca85130 = puVar22 + 1;
          *(undefined1 (*) [16])(puVar22 + 1) = (undefined1  [16])0x0;
          *puVar22 = &PTR_LAB_14a1e7fc8;
          *(undefined4 *)(puVar22 + 3) = 0;
          *(float *)((longlong)puVar22 + 0x1c) = fVar25;
          *(float *)(puVar22 + 4) = fVar24;
          *(undefined4 *)((longlong)puVar22 + 0x24) = 0x3f800000;
          puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          pwVar13 = (wchar_t *)(puVar22 + 4);
          if (DAT_14ca85108 < pwVar13) {
            FUN_140023dd8(&DAT_14ca85100,0x28);
            puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            pwVar13 = (wchar_t *)(puVar22 + 4);
          }
          DAT_14ca85160 = DAT_14ca85160 + 1;
          DAT_14ca85100 = pwVar13;
          *DAT_14ca85130 = puVar22;
          DAT_14ca85130 = puVar22 + 1;
          puVar22[1] = 0;
          *puVar22 = &PTR_LAB_14a1fc200;
          puVar22[2] = 0x200000000;
          *(undefined4 *)(puVar22 + 3) = 1;
          if (stack0xfffffffffffffcb8 != (undefined8 *)0x0) {
            LOCK();
            puVar2 = (uint *)(stack0xfffffffffffffcb8 + 1);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar2 = (uint *)(stack0xfffffffffffffcb8 + 1);
              LOCK();
              uVar3 = *puVar2;
              *puVar2 = *puVar2 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)((longlong)stack0xfffffffffffffcb8 + 0xd);
                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                plVar12[1] = (longlong)stack0xfffffffffffffcb8;
                plVar18 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar12 = (longlong)plVar18;
                    LOCK();
                    bVar23 = plVar18 != DAT_14ca843c0;
                    plVar17 = plVar12;
                    if (bVar23) {
                      plVar18 = DAT_14ca843c0;
                      plVar17 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar17;
                    UNLOCK();
                  } while (bVar23);
                }
                else {
                  do {
                    *plVar12 = (longlong)plVar17;
                    LOCK();
                    bVar23 = plVar17 != DAT_14ca843c8;
                    plVar18 = plVar12;
                    if (bVar23) {
                      plVar17 = DAT_14ca843c8;
                      plVar18 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar18;
                    UNLOCK();
                  } while (bVar23);
                }
              }
            }
          }
          if ((DAT_14ca8527b & 8) != 0) {
            (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,&DAT_14ca85100,1);
            DAT_14ca8527b = DAT_14ca8527b & 0xf7;
          }
          puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          pwVar13 = (wchar_t *)(puVar22 + 2);
          if (DAT_14ca85108 < pwVar13) {
            FUN_140023dd8(&DAT_14ca85100,0x18);
            puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            pwVar13 = (wchar_t *)(puVar22 + 2);
          }
          DAT_14ca85160 = DAT_14ca85160 + 1;
          DAT_14ca85100 = pwVar13;
          *DAT_14ca85130 = puVar22;
          DAT_14ca85130 = puVar22 + 1;
          puVar22[1] = 0;
          *puVar22 = &PTR_LAB_14a217b58;
          DAT_14ca8527b = DAT_14ca8527b & 0xfd;
          _DAT_14ca85278 = 0;
          local_238 = 0xffffffffffffffff;
          uStack_230 = 0xffffffff;
          uStack_220 = CONCAT31(uStack_220._1_3_,1);
          uStack_21c = 0;
          uStack_218 = 0x60;
          uStack_214 = 0;
          local_208 = local_208 & 0xffffffffffffff00;
          local_340._0_4_ = 1;
          unique0x10001894 = &local_238;
          uStack_228 = uVar6;
          uStack_224 = uVar9;
          FUN_144760590(&DAT_14ca85100,auStack_34d + 5,0);
        }
        else if (*(int *)(lVar7 + 0x3c) == 5) {
          uVar14 = FUN_1460ae77e();
          lVar11 = 0;
          FUN_1448e935e(uVar15,auStack_34d + 5,uVar14,0);
          FUN_1460ae77e();
          if (stack0xfffffffffffffcb8 != (undefined8 *)0x0) {
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)local_340 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(*(longlong *)((longlong)local_340 + 8),
                                     (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4),1)
              ;
            }
          }
          uStack_228 = (undefined4)lVar11;
          uStack_224 = (undefined4)((ulonglong)lVar11 >> 0x20);
          lVar11 = FUN_140028f18(&DAT_14ca85100);
          if ((lVar11 != 0) && ((local_170 & 0x10000000) == 0)) {
            DAT_14ca85290 = CONCAT44(uStack_22c,uStack_230);
            _DAT_14ca852a8 = uStack_218;
            uRam000000014ca852ac = uStack_214;
            uRam000000014ca852b0 = uStack_210;
            uRam000000014ca852b4 = local_20c;
            DAT_14ca85298._0_4_ = uStack_228;
            DAT_14ca85298._4_4_ = uStack_224;
            uRam000000014ca852a0 = uStack_220;
            uRam000000014ca852a4 = uStack_21c;
            _DAT_14ca85288 = local_238;
            puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            pwVar13 = (wchar_t *)(puVar22 + 4);
            if (DAT_14ca85108 < pwVar13) {
              FUN_140023dd8(&DAT_14ca85100,0x28);
              puVar22 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
              pwVar13 = (wchar_t *)(puVar22 + 4);
            }
            DAT_14ca85160 = DAT_14ca85160 + 1;
            DAT_14ca85100 = pwVar13;
            *DAT_14ca85130 = puVar22;
            DAT_14ca85130 = puVar22 + 1;
            puVar22[1] = 0;
            *puVar22 = &PTR_LAB_14a37d348;
            puVar22[2] = lVar11;
            *(undefined4 *)(puVar22 + 3) = 0;
            *(undefined1 *)((longlong)puVar22 + 0x1c) = 1;
          }
          local_359 = 0;
          if (stack0xfffffffffffffcb8 == (undefined8 *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)local_340 + 8) + 0x50) +
                      (longlong)*(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(*(longlong *)((longlong)local_340 + 8),
                                     *(int *)((longlong)stack0xfffffffffffffcb8 + 0xd4),1);
            }
          }
          local_3b8 = (undefined8 *)&local_359;
          FUN_149918e9d(auStack_34d + 5,lVar11,ppuVar1,&local_358);
          goto LAB_1446c33fc;
        }
        lVar11 = _local_250;
        if (_local_250 != 0) {
          LOCK();
          puVar2 = (uint *)(_local_250 + 8);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar2 = (uint *)(_local_250 + 8);
            LOCK();
            uVar3 = *puVar2;
            *puVar2 = *puVar2 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(_local_250 + 0xd);
              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
              plVar12[1] = lVar11;
              plVar18 = DAT_14ca843c0;
              plVar17 = DAT_14ca843c8;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar12 = (longlong)plVar18;
                  LOCK();
                  bVar23 = plVar18 != DAT_14ca843c0;
                  plVar17 = plVar12;
                  if (bVar23) {
                    plVar18 = DAT_14ca843c0;
                    plVar17 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar17;
                  UNLOCK();
                } while (bVar23);
              }
              else {
                do {
                  *plVar12 = (longlong)plVar17;
                  LOCK();
                  bVar23 = plVar17 != DAT_14ca843c8;
                  plVar18 = plVar12;
                  if (bVar23) {
                    plVar17 = DAT_14ca843c8;
                    plVar18 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar18;
                  UNLOCK();
                } while (bVar23);
              }
            }
          }
        }
      }
      lVar11 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
      if (lVar11 == 0) {
        uVar15 = *(undefined8 *)(param_1 + 0x48);
        local_370 = *(undefined8 *)(param_1 + 0x58);
        local_368 = *(longlong *)(param_1 + 0x60);
        if (local_368 != 0) {
          LOCK();
          *(int *)(local_368 + 0xc) = *(int *)(local_368 + 0xc) + 1;
          UNLOCK();
        }
        FUN_143feb9fc(uVar15,&local_370);
      }
      LOCK();
      *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xc) = 0;
      UNLOCK();
    }
  }
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x20) != 0) {
    if ((*(char *)(*(longlong *)(param_1 + 0x80) + 0x50) == '\x01') &&
       (*(char *)(param_1 + 0x90) == '\x01')) {
      *(undefined1 *)(param_1 + 0x90) = 0;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    }
    FUN_145da8db4(param_1);
    iVar5 = *(int *)(param_1 + 0x28);
    iVar19 = *(int *)(param_1 + 0x34) + 1;
    if (iVar19 < iVar5) {
      *(int *)(param_1 + 0x34) = iVar19;
      cVar10 = FUN_1446c17c4(param_1);
      if (cVar10 != '\0') {
        uVar15 = *(undefined8 *)(param_1 + 0x48);
        local_380 = *(undefined8 *)(param_1 + 0x58);
        local_378 = *(longlong *)(param_1 + 0x60);
        if (local_378 != 0) {
          LOCK();
          *(int *)(local_378 + 0xc) = *(int *)(local_378 + 0xc) + 1;
          UNLOCK();
        }
        puVar22 = &local_380;
LAB_1446c304d:
        FUN_143feb9fc(uVar15,puVar22);
      }
    }
    else {
      if (*(char *)(param_1 + 0x30) == '\0') {
        uVar15 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
        goto LAB_1446c2633;
      }
      iVar19 = 0;
      if (*(char *)(param_1 + 0x30) == '\x02') {
        iVar19 = iVar5 + -1;
      }
      *(int *)(param_1 + 0x34) = iVar19;
      cVar10 = FUN_1446c17c4(param_1);
      if (cVar10 != '\0') {
        uVar15 = *(undefined8 *)(param_1 + 0x48);
        local_390 = *(undefined8 *)(param_1 + 0x58);
        local_388 = *(longlong *)(param_1 + 0x60);
        if (local_388 != 0) {
          LOCK();
          *(int *)(local_388 + 0xc) = *(int *)(local_388 + 0xc) + 1;
          UNLOCK();
        }
        puVar22 = &local_390;
        goto LAB_1446c304d;
      }
    }
  }
  uVar15 = 0;
LAB_1446c2633:
  if ((local_70 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 1446c3834 FUN_1446c3834 body=622 status=ok
// SIG undefined FUN_1446c3834(void)

void FUN_1446c3834(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  HMODULE pHVar6;
  HMODULE pHVar7;
  HMODULE pHVar8;
  HMODULE pHVar9;
  longlong lVar10;
  longlong *plVar11;
  LPCWSTR pWVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  LPCWSTR local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_38,L"shlwapi.dll");
  pWVar12 = local_38;
  if (local_30 == 0) {
    pWVar12 = L"";
  }
  pHVar6 = LoadLibraryW(pWVar12);
  if (pHVar6 == (HMODULE)0x0) {
    GetLastError();
  }
  if (local_38 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_38,L"mf.dll");
  pWVar12 = local_38;
  if (local_30 == 0) {
    pWVar12 = L"";
  }
  pHVar7 = LoadLibraryW(pWVar12);
  if (pHVar7 == (HMODULE)0x0) {
    GetLastError();
  }
  if (local_38 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_38,L"mfplat.dll");
  pWVar12 = local_38;
  if (local_30 == 0) {
    pWVar12 = L"";
  }
  pHVar8 = LoadLibraryW(pWVar12);
  if (pHVar8 == (HMODULE)0x0) {
    GetLastError();
  }
  if (local_38 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_38);
  pWVar12 = local_38;
  if (local_30 == 0) {
    pWVar12 = L"";
  }
  pHVar9 = LoadLibraryW(pWVar12);
  if (pHVar9 == (HMODULE)0x0) {
    GetLastError();
  }
  if (local_38 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if (((pHVar6 == (HMODULE)0x0 || pHVar7 == (HMODULE)0x0) || pHVar8 == (HMODULE)0x0) ||
      pHVar9 == (HMODULE)0x0) goto LAB_1446c399e;
  MFStartup(0x20070,0);
  lVar10 = FUN_14001cc68(0x98,0x10);
  FUN_1467732c0(lVar10);
  plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14bf08100;
  plVar11[2] = lVar10;
  plVar1 = DAT_14cc32978;
  DAT_14cc32970 = lVar10;
  if (plVar11 == DAT_14cc32978) {
    plVar5 = DAT_14cc32978;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar5 = DAT_14cc32978;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
joined_r0x0001446c3a61:
        plVar5 = DAT_14cc32978;
        if (iVar4 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          plVar5 = DAT_14cc32978;
        }
      }
    }
  }
  else {
    plVar5 = plVar11;
    if (DAT_14cc32978 != (longlong *)0x0) {
      LOCK();
      plVar3 = DAT_14cc32978 + 1;
      DAT_14cc32978 = plVar11;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar5 = DAT_14cc32978;
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar11 = plVar1;
        goto joined_r0x0001446c3a61;
      }
    }
  }
  DAT_14cc32978 = plVar5;
  local_48 = DAT_14cc32970;
  local_40 = DAT_14cc32978;
  if (DAT_14cc32978 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14cc32978 + 1) = (int)DAT_14cc32978[1] + 1;
    UNLOCK();
  }
  FUN_145da8a2a(&DAT_14c8672f8,&local_48);
LAB_1446c399e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c3acc FUN_1446c3acc body=12 status=ok
// SIG undefined FUN_1446c3acc(void)

void FUN_1446c3acc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c3ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446c3ad8 FUN_1446c3ad8 body=29 status=ok
// SIG undefined FUN_1446c3ad8(void)

undefined8 FUN_1446c3ad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446c3b1c FUN_1446c3b1c body=282 status=ok
// SIG undefined FUN_1446c3b1c(void)

undefined8 * FUN_1446c3b1c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446c3af5);
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



// FUNCTION 1446c3c36 FUN_1446c3c36 body=147 status=ok
// SIG undefined FUN_1446c3c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c3c36(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = _DAT_000000b4;
  lVar2 = _DAT_000000a8;
  if (param_1 == (undefined8 *)0x0) {
    *(undefined4 *)(_DAT_000000a8 + 0x30) = _DAT_000000b0;
    *(undefined4 *)(lVar2 + 0x34) = uVar3;
    FUN_1447fd100(lVar2 + 0x20,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  lVar2 = param_1[0x15];
  *(undefined8 *)(lVar2 + 0x30) = param_1[0x16];
  FUN_1447fd100(lVar2 + 0x20,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446c3c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1446c3ce6 FUN_1446c3ce6 body=12 status=ok
// SIG undefined FUN_1446c3ce6(void)

void FUN_1446c3ce6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c3cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446c3cf2 FUN_1446c3cf2 body=29 status=ok
// SIG undefined FUN_1446c3cf2(void)

undefined8 FUN_1446c3cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446c3d10 FUN_1446c3d10 body=282 status=ok
// SIG undefined FUN_1446c3d10(void)

undefined8 * FUN_1446c3d10(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1446c3af5);
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



// FUNCTION 1446c3e2a FUN_1446c3e2a body=124 status=ok
// SIG undefined FUN_1446c3e2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c3e2a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446c3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(_DAT_000000a8 + 0x20) + 0x18))(_DAT_000000a8 + 0x20,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)(param_1[0x15] + 0x20) + 0x18))(param_1[0x15] + 0x20,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001446c3e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1446c3ea6 FUN_1446c3ea6 body=124 status=ok
// SIG undefined FUN_1446c3ea6(void)

void FUN_1446c3ea6(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14cc32970 = 0;
  DAT_14cc32978 = 0;
  atexit(FUN_1446c1788);
  local_28 = 0x800000014bf07e38;
  local_14 = 0x12;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1467731fe(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c3f24 FUN_1446c3f24 body=735 status=ok
// SIG undefined FUN_1446c3f24(void)

void FUN_1446c3f24(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140dafe7a;
      local_50 = 0;
      local_58 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_38);
            goto LAB_1446c40f5;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
LAB_1446c40f5:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c4204 FUN_1446c4204 body=1336 status=ok
// SIG undefined FUN_1446c4204(void)

void FUN_1446c4204(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined4 *puVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined4 local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_38);
            goto LAB_1446c43d5;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
LAB_1446c43d5:
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_3c);
            goto LAB_1446c4579;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if ((puVar9 != &local_3c) && ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar4 + 0x100))(plVar4,&local_3c,puVar9,(int)plVar4[6]);
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_3c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_3c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
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
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
LAB_1446c4579:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c473e FUN_1446c473e body=725 status=ok
// SIG undefined FUN_1446c473e(void)

void FUN_1446c473e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140dafe7a;
      local_50 = 0;
      local_58 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_38);
            goto LAB_1446c490a;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
LAB_1446c490a:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c4a14 FUN_1446c4a14 body=725 status=ok
// SIG undefined FUN_1446c4a14(void)

void FUN_1446c4a14(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140dafe7a;
      local_50 = 0;
      local_58 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_38);
            goto LAB_1446c4be0;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(local_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
LAB_1446c4be0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c4cea FUN_1446c4cea body=154 status=ok
// SIG undefined FUN_1446c4cea(void)

void FUN_1446c4cea(void)

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
  FUN_14282b410(L"/Script/TraceUtilities",&PTR_FUN_14bf09240,1,0);
  local_28 = 0x800000014bf09268;
  local_14 = 0xe;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14cc32a30,&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446c5050 FUN_1446c5050 body=59 status=ok
// SIG undefined FUN_1446c5050(void)

void FUN_1446c5050(void)

{
  FUN_144bfaba0(&DAT_14c783aa0,"Register hkLog Sources",FUN_144bdc910,FUN_144bdc950,&DAT_14c783a98,1
               );
  return;
}



// FUNCTION 1446c5090 FUN_1446c5090 body=32 status=ok
// SIG undefined FUN_1446c5090(void)

void FUN_1446c5090(void)

{
  FUN_144bdde80(&DAT_14c783ac8);
  atexit((_func_5014 *)&LAB_149926d30);
  return;
}



// FUNCTION 1446c50b0 FUN_1446c50b0 body=34 status=ok
// SIG undefined FUN_1446c50b0(void)

void FUN_1446c50b0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144be5720("hkLog_threadLocalOutput");
  FUN_144be57a0(&DAT_14c783af0,uVar1);
  return;
}



// FUNCTION 1446c50e0 FUN_1446c50e0 body=42 status=ok
// SIG undefined FUN_1446c50e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c50e0(void)

{
  DAT_14c6da218 = FUN_144b3d480();
  _DAT_14c6da220 = 0;
  atexit(FUN_149926d40);
  return;
}



// FUNCTION 1446c5120 FUN_1446c5120 body=59 status=ok
// SIG undefined FUN_1446c5120(void)

void FUN_1446c5120(void)

{
  FUN_144bfaba0(&DAT_14c783b08,"$Registry",FUN_144bdd3c0,FUN_144bdd320,&DAT_14c783b00,1);
  return;
}



// FUNCTION 1446c5160 FUN_1446c5160 body=34 status=ok
// SIG undefined FUN_1446c5160(void)

void FUN_1446c5160(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144be5720("hkLog::Detail::AutoScope::s_currentLogAuto");
  FUN_144be57a0(&DAT_14c783b30,uVar1);
  return;
}



// FUNCTION 1446c5190 FUN_1446c5190 body=56 status=ok
// SIG undefined FUN_1446c5190(void)

void FUN_1446c5190(void)

{
  FUN_144bfaba0(&DAT_14c783b50,"Register Types",FUN_144bdddb0,FUN_144bdde20,0,1);
  return;
}



// FUNCTION 1446c51d0 FUN_1446c51d0 body=39 status=ok
// SIG undefined FUN_1446c51d0(void)

void FUN_1446c51d0(void)

{
  FUN_144bdc590(&DAT_14c783b78,"hkDefaultError");
  atexit(FUN_149926de0);
  return;
}



// FUNCTION 1446c5210 FUN_1446c5210 body=59 status=ok
// SIG undefined FUN_1446c5210(void)

void FUN_1446c5210(void)

{
  FUN_144bfaba0(&DAT_14c783c78,"$hkError",FUN_144bde770,FUN_144bde820,&DAT_14c783c70,1);
  return;
}



// FUNCTION 1446c5250 FUN_1446c5250 body=39 status=ok
// SIG undefined FUN_1446c5250(void)

void FUN_1446c5250(void)

{
  FUN_144bdc590(&DAT_14c783ca0,"base_StringBuf");
  atexit(FUN_149926e10);
  return;
}



// FUNCTION 1446c5280 FUN_1446c5280 body=46 status=ok
// SIG undefined FUN_1446c5280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5280(void)

{
  FUN_144be6ac0(&DAT_14c783d98);
  _DAT_14c783d98 = hkStringBuf::StringImpl::vftable;
  atexit((_func_5014 *)&LAB_149926e30);
  return;
}



// FUNCTION 1446c52c0 FUN_1446c52c0 body=46 status=ok
// SIG undefined FUN_1446c52c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c52c0(void)

{
  FUN_144be6ac0(&DAT_14c783db0);
  _DAT_14c783db0 = hkStringPtr::StringImpl::vftable;
  atexit((_func_5014 *)&LAB_149926e60);
  return;
}



// FUNCTION 1446c5310 FUN_1446c5310 body=51 status=ok
// SIG undefined FUN_1446c5310(void)

void FUN_1446c5310(void)

{
  FUN_144bfaba0(&DAT_14c783ec0,"$hkMonitorStreamStatics",0,0,&PTR_PTR_14c6da300,1);
  return;
}



// FUNCTION 1446c5350 FUN_1446c5350 body=34 status=ok
// SIG undefined FUN_1446c5350(void)

void FUN_1446c5350(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144be5720("hkMonitorStream__m_lockCount");
  FUN_144be57a0(&DAT_14c783ee8,uVar1);
  return;
}



// FUNCTION 1446c5380 FUN_1446c5380 body=52 status=ok
// SIG undefined FUN_1446c5380(void)

void FUN_1446c5380(void)

{
  FUN_144bfaba0(&DAT_14c783ef8,"Check support for _mm_popcnt_u32",FUN_144beae50,0,0,1);
  return;
}



// FUNCTION 1446c53c0 FUN_1446c53c0 body=39 status=ok
// SIG undefined FUN_1446c53c0(void)

void FUN_1446c53c0(void)

{
  FUN_144bdc590(&DAT_14c783f20,"base_s11n_writeBuffer");
  atexit(FUN_149926e90);
  return;
}



// FUNCTION 1446c53f0 FUN_1446c53f0 body=39 status=ok
// SIG undefined FUN_1446c53f0(void)

void FUN_1446c53f0(void)

{
  FUN_144bdc590(&DAT_14c784018,"base_reflect_2");
  atexit(FUN_149926eb0);
  return;
}



// FUNCTION 1446c5420 FUN_1446c5420 body=46 status=ok
// SIG undefined FUN_1446c5420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5420(void)

{
  FUN_144be6ac0(&DAT_14c784110);
  _DAT_14c784110 = hkReflect::Var::VarImpl::vftable;
  atexit((_func_5014 *)&LAB_149926ed0);
  return;
}



// FUNCTION 1446c5450 FUN_1446c5450 body=39 status=ok
// SIG undefined FUN_1446c5450(void)

void FUN_1446c5450(void)

{
  FUN_144bdc590(&DAT_14c784120,"base_reflect_1");
  atexit(FUN_149926ee0);
  return;
}



// FUNCTION 1446c5480 FUN_1446c5480 body=39 status=ok
// SIG undefined FUN_1446c5480(void)

void FUN_1446c5480(void)

{
  FUN_144bdc590(&DAT_14c784218,"base.reflect");
  atexit(FUN_149926f00);
  return;
}



// FUNCTION 1446c5710 FUN_1446c5710 body=39 status=ok
// SIG undefined FUN_1446c5710(void)

void FUN_1446c5710(void)

{
  FUN_144bdc590(&DAT_14c784570,"base_reflect_impl");
  atexit(FUN_149926f20);
  return;
}



// FUNCTION 1446c5740 FUN_1446c5740 body=60 status=ok
// SIG undefined FUN_1446c5740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5740(void)

{
  FUN_144be6ac0(&DAT_14c784668);
  _DAT_14c784678 = &PTR_vftable_14c6e47a0;
  _DAT_14c784668 = hkReflect::Detail::HomogeneousArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149926f40);
  return;
}



// FUNCTION 1446c5780 FUN_1446c5780 body=46 status=ok
// SIG undefined FUN_1446c5780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5780(void)

{
  FUN_144be7ee0(&DAT_14c784680);
  _DAT_14c784680 = hkReflect::Detail::ReferencedObjectAllocImpl::vftable;
  atexit((_func_5014 *)&LAB_149926f60);
  return;
}



// FUNCTION 1446c57b0 FUN_1446c57b0 body=46 status=ok
// SIG undefined FUN_1446c57b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c57b0(void)

{
  FUN_144be6ac0(&DAT_14c784688);
  _DAT_14c784688 = hkReflect::Detail::HavokRecordImpl::vftable;
  atexit((_func_5014 *)&LAB_149926f80);
  return;
}



// FUNCTION 1446c57e0 FUN_1446c57e0 body=60 status=ok
// SIG undefined FUN_1446c57e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c57e0(void)

{
  FUN_144be6ac0(&DAT_14c784698);
  _DAT_14c784698 = hkReflect::Detail::HavokStringImpl::vftable;
  _DAT_14c7846a8 = &PTR_vftable_14c6e47a0;
  atexit((_func_5014 *)&LAB_149926fa0);
  return;
}



// FUNCTION 1446c5820 FUN_1446c5820 body=46 status=ok
// SIG undefined FUN_1446c5820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5820(void)

{
  FUN_144bf4980(&DAT_14c7846b0);
  _DAT_14c7846b0 = hkReflect::Detail::ViewPointerImpl::vftable;
  atexit((_func_5014 *)&LAB_149926fc0);
  return;
}



// FUNCTION 1446c5850 FUN_1446c5850 body=46 status=ok
// SIG undefined FUN_1446c5850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5850(void)

{
  FUN_144be6ac0(&DAT_14c7846c0);
  _DAT_14c7846c0 = hkReflect::Detail::StaticArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149926fe0);
  return;
}



// FUNCTION 1446c5880 FUN_1446c5880 body=60 status=ok
// SIG undefined FUN_1446c5880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5880(void)

{
  FUN_144be6ac0(&DAT_14c7846d0);
  _DAT_14c7846d0 = hkReflect::Detail::hkArrayImpl::vftable;
  _DAT_14c7846e0 = &PTR_vftable_14c6e47a0;
  atexit((_func_5014 *)&LAB_149927000);
  return;
}



// FUNCTION 1446c58c0 FUN_1446c58c0 body=60 status=ok
// SIG undefined FUN_1446c58c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c58c0(void)

{
  FUN_144be6ac0(&DAT_14c7846e8);
  _DAT_14c7846f8 = &PTR_vftable_14c6e47a0;
  _DAT_14c7846e8 = hkReflect::Detail::hkInplaceArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927020);
  return;
}



// FUNCTION 1446c5900 FUN_1446c5900 body=46 status=ok
// SIG undefined FUN_1446c5900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5900(void)

{
  FUN_144be6ac0(&DAT_14c784700);
  _DAT_14c784700 = hkRelArray_ArrayImpl<__int64>::vftable;
  atexit((_func_5014 *)&LAB_149927040);
  return;
}



// FUNCTION 1446c5970 FUN_1446c5970 body=46 status=ok
// SIG undefined FUN_1446c5970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5970(void)

{
  FUN_144be6ac0(&DAT_14c784750);
  _DAT_14c784750 = hkRelArray_ArrayImpl<int>::vftable;
  atexit((_func_5014 *)&LAB_149927050);
  return;
}



// FUNCTION 1446c59a0 FUN_1446c59a0 body=46 status=ok
// SIG undefined FUN_1446c59a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c59a0(void)

{
  FUN_144be7ee0(&DAT_14c784760);
  _DAT_14c784760 = hkReflect::Detail::HeapAllocImpl::vftable;
  atexit((_func_5014 *)&LAB_149927060);
  return;
}



// FUNCTION 1446c59d0 FUN_1446c59d0 body=46 status=ok
// SIG undefined FUN_1446c59d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c59d0(void)

{
  FUN_144be6ac0(&DAT_14c784768);
  _DAT_14c784768 = hkReflect::Detail::RepeatImpl::vftable;
  atexit((_func_5014 *)&LAB_149927080);
  return;
}



// FUNCTION 1446c5a00 FUN_1446c5a00 body=46 status=ok
// SIG undefined FUN_1446c5a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5a00(void)

{
  FUN_144be6ac0(&DAT_14c784778);
  _DAT_14c784778 = hkReflect::Detail::StaticStringImpl::vftable;
  atexit((_func_5014 *)&LAB_1499270a0);
  return;
}



// FUNCTION 1446c5a30 FUN_1446c5a30 body=46 status=ok
// SIG undefined FUN_1446c5a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5a30(void)

{
  FUN_144be6ac0(&DAT_14c784788);
  _DAT_14c784788 = hkReflect::Detail::CharBufferImpl::vftable;
  atexit((_func_5014 *)&LAB_1499270c0);
  return;
}



// FUNCTION 1446c5a60 FUN_1446c5a60 body=46 status=ok
// SIG undefined FUN_1446c5a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5a60(void)

{
  FUN_144be6ac0(&DAT_14c784798);
  _DAT_14c784798 = hkReflect::Detail::RawPointerImpl::vftable;
  atexit((_func_5014 *)&LAB_1499270e0);
  return;
}



// FUNCTION 1446c5a90 FUN_1446c5a90 body=46 status=ok
// SIG undefined FUN_1446c5a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5a90(void)

{
  FUN_144be6ac0(&DAT_14c7847a8);
  _DAT_14c7847a8 = hkReflect::Detail::NullptrImpl::vftable;
  atexit((_func_5014 *)&LAB_149927100);
  return;
}



// FUNCTION 1446c5ac0 FUN_1446c5ac0 body=46 status=ok
// SIG undefined FUN_1446c5ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5ac0(void)

{
  FUN_144be6ac0(&DAT_14c7847b8);
  _DAT_14c7847b8 = hkReflect::Detail::IntImplN<char>::vftable;
  atexit((_func_5014 *)&LAB_149927120);
  return;
}



// FUNCTION 1446c5af0 FUN_1446c5af0 body=46 status=ok
// SIG undefined FUN_1446c5af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5af0(void)

{
  FUN_144be6ac0(&DAT_14c7847c8);
  _DAT_14c7847c8 = hkReflect::Detail::FloatImplN<hkHalf16>::vftable;
  atexit((_func_5014 *)&LAB_149927140);
  return;
}



// FUNCTION 1446c5b20 FUN_1446c5b20 body=46 status=ok
// SIG undefined FUN_1446c5b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5b20(void)

{
  FUN_144be6ac0(&DAT_14c7847d8);
  _DAT_14c7847d8 = hkReflect::Detail::ReferencedObjectPointerImpl::vftable;
  atexit((_func_5014 *)&LAB_149927160);
  return;
}



// FUNCTION 1446c5b50 FUN_1446c5b50 body=46 status=ok
// SIG undefined FUN_1446c5b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5b50(void)

{
  FUN_144be6ac0(&DAT_14c7847e8);
  _DAT_14c7847e8 = hkReflect::Detail::ReferenceImpl::vftable;
  atexit((_func_5014 *)&LAB_149927180);
  return;
}



// FUNCTION 1446c5ba0 FUN_1446c5ba0 body=46 status=ok
// SIG undefined FUN_1446c5ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5ba0(void)

{
  FUN_144be6ac0(&DAT_14c784818);
  _DAT_14c784818 = hkReflect::Detail::BoolImplN<bool>::vftable;
  atexit((_func_5014 *)&LAB_1499271a0);
  return;
}



// FUNCTION 1446c5bd0 FUN_1446c5bd0 body=46 status=ok
// SIG undefined FUN_1446c5bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5bd0(void)

{
  FUN_144be6ac0(&DAT_14c784828);
  _DAT_14c784828 = hkReflect::Detail::BoolImplN<unsigned_char>::vftable;
  atexit((_func_5014 *)&LAB_1499271c0);
  return;
}



// FUNCTION 1446c5c00 FUN_1446c5c00 body=46 status=ok
// SIG undefined FUN_1446c5c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5c00(void)

{
  FUN_144be6ac0(&DAT_14c784838);
  _DAT_14c784838 = hkReflect::Detail::IntImplN<signed_char>::vftable;
  atexit((_func_5014 *)&LAB_1499271e0);
  return;
}



// FUNCTION 1446c5c30 FUN_1446c5c30 body=46 status=ok
// SIG undefined FUN_1446c5c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5c30(void)

{
  FUN_144be6ac0(&DAT_14c784848);
  _DAT_14c784848 = hkReflect::Detail::IntImplN<unsigned_char>::vftable;
  atexit((_func_5014 *)&LAB_149927200);
  return;
}



// FUNCTION 1446c5c60 FUN_1446c5c60 body=46 status=ok
// SIG undefined FUN_1446c5c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5c60(void)

{
  FUN_144be6ac0(&DAT_14c784858);
  _DAT_14c784858 = hkReflect::Detail::IntImplN<short>::vftable;
  atexit((_func_5014 *)&LAB_149927220);
  return;
}



// FUNCTION 1446c5c90 FUN_1446c5c90 body=46 status=ok
// SIG undefined FUN_1446c5c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5c90(void)

{
  FUN_144be6ac0(&DAT_14c784868);
  _DAT_14c784868 = hkReflect::Detail::IntImplN<unsigned_short>::vftable;
  atexit((_func_5014 *)&LAB_149927240);
  return;
}



// FUNCTION 1446c5cc0 FUN_1446c5cc0 body=46 status=ok
// SIG undefined FUN_1446c5cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5cc0(void)

{
  FUN_144be6ac0(&DAT_14c784878);
  _DAT_14c784878 = hkReflect::Detail::IntImplN<int>::vftable;
  atexit((_func_5014 *)&LAB_149927260);
  return;
}



// FUNCTION 1446c5cf0 FUN_1446c5cf0 body=46 status=ok
// SIG undefined FUN_1446c5cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5cf0(void)

{
  FUN_144be6ac0(&DAT_14c784888);
  _DAT_14c784888 = hkReflect::Detail::IntImplN<unsigned_int>::vftable;
  atexit((_func_5014 *)&LAB_149927280);
  return;
}



// FUNCTION 1446c5d20 FUN_1446c5d20 body=46 status=ok
// SIG undefined FUN_1446c5d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5d20(void)

{
  FUN_144be6ac0(&DAT_14c784898);
  _DAT_14c784898 = hkReflect::Detail::IntImplN<long>::vftable;
  atexit((_func_5014 *)&LAB_1499272a0);
  return;
}



// FUNCTION 1446c5d50 FUN_1446c5d50 body=46 status=ok
// SIG undefined FUN_1446c5d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5d50(void)

{
  FUN_144be6ac0(&DAT_14c7848a8);
  _DAT_14c7848a8 = hkReflect::Detail::IntImplN<unsigned_long>::vftable;
  atexit((_func_5014 *)&LAB_1499272c0);
  return;
}



// FUNCTION 1446c5d80 FUN_1446c5d80 body=46 status=ok
// SIG undefined FUN_1446c5d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5d80(void)

{
  FUN_144be6ac0(&DAT_14c7848b8);
  _DAT_14c7848b8 = hkReflect::Detail::IntImplN<__int64>::vftable;
  atexit((_func_5014 *)&LAB_1499272e0);
  return;
}



// FUNCTION 1446c5db0 FUN_1446c5db0 body=46 status=ok
// SIG undefined FUN_1446c5db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5db0(void)

{
  FUN_144be6ac0(&DAT_14c7848c8);
  _DAT_14c7848c8 = hkReflect::Detail::IntImplN<unsigned___int64>::vftable;
  atexit((_func_5014 *)&LAB_149927300);
  return;
}



// FUNCTION 1446c5de0 FUN_1446c5de0 body=46 status=ok
// SIG undefined FUN_1446c5de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5de0(void)

{
  FUN_144be6ac0(&DAT_14c7848d8);
  _DAT_14c7848d8 = hkReflect::Detail::FloatImplN<float>::vftable;
  atexit((_func_5014 *)&LAB_149927320);
  return;
}



// FUNCTION 1446c5e10 FUN_1446c5e10 body=46 status=ok
// SIG undefined FUN_1446c5e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5e10(void)

{
  FUN_144be6ac0(&DAT_14c7848e8);
  _DAT_14c7848e8 = hkReflect::Detail::FloatImplN<double>::vftable;
  atexit((_func_5014 *)&LAB_149927340);
  return;
}



// FUNCTION 1446c5e40 FUN_1446c5e40 body=46 status=ok
// SIG undefined FUN_1446c5e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5e40(void)

{
  FUN_144be6ac0(&DAT_14c7848f8);
  _DAT_14c7848f8 = hkReflect::Detail::BoolImplN<unsigned_short>::vftable;
  atexit((_func_5014 *)&LAB_149927360);
  return;
}



// FUNCTION 1446c5e70 FUN_1446c5e70 body=46 status=ok
// SIG undefined FUN_1446c5e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5e70(void)

{
  FUN_144be6ac0(&DAT_14c784908);
  _DAT_14c784908 = hkReflect::Detail::BoolImplN<unsigned_int>::vftable;
  atexit((_func_5014 *)&LAB_149927380);
  return;
}



// FUNCTION 1446c5ea0 FUN_1446c5ea0 body=1130 status=ok
// SIG undefined FUN_1446c5ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c5ea0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined1 auVar5 [16];
  
  fVar6 = (float)DAT_1499314a0;
  _DAT_14c6dada0 = divps(_DAT_1499314a0,_DAT_149931ef0);
  _DAT_14c6dad90 = divps(_DAT_1499314a0,_DAT_1499314b0);
  fVar1 = (float)DAT_149983f30;
  _DAT_14c6dadb0 = divps(_DAT_1499314a0,_DAT_149983f30);
  _DAT_14c6dadc0 = divps(_DAT_1499314a0,_DAT_149983f40);
  _DAT_14c6dadd0 = divps(_DAT_1499314a0,_DAT_149983f50);
  _DAT_14c6daeb4 = 0x28800000;
  auVar5 = divps(_DAT_1499314a0,_DAT_149983fd0);
  _DAT_14c6dade0 = divps(_DAT_1499314a0,_DAT_149983f60);
  _DAT_14c6dadf0 = divps(_DAT_1499314a0,_DAT_149983f70);
  _DAT_14c6daf70 = auVar5._0_4_ + fVar6;
  fRam000000014c6daf74 = auVar5._4_4_ + DAT_1499314a0._4_4_;
  fRam000000014c6daf78 = auVar5._8_4_ + DAT_1499314a0._8_4_;
  fRam000000014c6daf7c = auVar5._12_4_ + DAT_1499314a0._12_4_;
  _DAT_14c6dae00 = divps(_DAT_1499314a0,_DAT_149983f80);
  _DAT_14c6dae10 = divps(_DAT_1499314a0,_DAT_149983f90);
  _DAT_14c6dae20 = divps(_DAT_1499314a0,_DAT_149983fb0);
  _DAT_14c6dae30 = divps(_DAT_1499314a0,_DAT_149983fc0);
  _DAT_14c6daeb0 = 0x28800000;
  _DAT_14c6daeb8 = 0x28800000;
  _DAT_14c6daebc = 0x28800000;
  _DAT_14c6daf80 = 0x4eea6000;
  uRam000000014c6daf84 = 0x4eea6000;
  uRam000000014c6daf88 = 0x4eea6000;
  uRam000000014c6daf8c = 0x4eea6000;
  _DAT_14c6daf90 = fVar6 / 1.96608e+09;
  _DAT_14c6daf94 = fVar6 / 1.96608e+09;
  fVar2 = (float)DAT_1499319b0;
  fVar3 = DAT_1499319b0._4_4_;
  fVar4 = DAT_1499319b0._12_4_;
  _DAT_14c6daf9c = fVar6 / 1.96608e+09;
  _DAT_14c6daf98 = fVar6 / 1.96608e+09;
  fVar6 = DAT_1499319b0._8_4_;
  _DAT_14c6dafb0 = fVar2 * 0.5;
  fRam000000014c6dafb4 = fVar3 * 0.5;
  fRam000000014c6dafb8 = fVar6 * 0.5;
  fRam000000014c6dafbc = fVar4 * 0.5;
  _DAT_14c6dafc0 = fVar2 * 0.25;
  fRam000000014c6dafc4 = fVar3 * 0.25;
  fRam000000014c6dafc8 = fVar6 * 0.25;
  fRam000000014c6dafcc = fVar4 * 0.25;
  auVar5._0_4_ = fVar2 * fVar1;
  auVar5._4_4_ = fVar3 * DAT_149983f30._4_4_;
  auVar5._8_4_ = fVar6 * DAT_149983f30._8_4_;
  auVar5._12_4_ = fVar4 * DAT_149983f30._12_4_;
  _DAT_14c6dafe0 = fVar2 * 2.0;
  fRam000000014c6dafe4 = fVar3 * 2.0;
  fRam000000014c6dafe8 = fVar6 * 2.0;
  fRam000000014c6dafec = fVar4 * 2.0;
  _DAT_14c6dafd0 = divps(auVar5,_DAT_149931ef0);
  _DAT_14c6daff0 = fVar2 * fVar1;
  fRam000000014c6daff4 = fVar3 * DAT_149983f30._4_4_;
  fRam000000014c6daff8 = fVar6 * DAT_149983f30._8_4_;
  fRam000000014c6daffc = fVar4 * DAT_149983f30._12_4_;
  _DAT_14c6db000 = divps(_DAT_1499319b0,_DAT_149983fa0);
  _DAT_14c6db010 = divps(_DAT_149983fa0,_DAT_1499319b0);
  _DAT_14c6db020 = (fVar1 / (fVar2 * fVar2)) * -0.822948;
  _DAT_14c6db024 = (fVar1 / (fVar2 * fVar2)) * -0.822948;
  _DAT_14c6db028 = (fVar1 / (fVar2 * fVar2)) * -0.822948;
  _DAT_14c6db02c = (fVar1 / (fVar2 * fVar2)) * -0.822948;
  _DAT_14c6db030 = (fVar1 / (fVar2 * fVar2)) * -0.130529 * (fVar1 / (fVar2 * fVar2));
  _DAT_14c6db034 = (fVar1 / (fVar2 * fVar2)) * -0.130529 * (fVar1 / (fVar2 * fVar2));
  _DAT_14c6db038 = (fVar1 / (fVar2 * fVar2)) * -0.130529 * (fVar1 / (fVar2 * fVar2));
  _DAT_14c6db03c = (fVar1 / (fVar2 * fVar2)) * -0.130529 * (fVar1 / (fVar2 * fVar2));
  _DAT_14c6db040 =
       (fVar1 / (fVar2 * fVar2)) * -0.044408 * (fVar1 / (fVar2 * fVar2)) * (fVar1 / (fVar2 * fVar2))
  ;
  _DAT_14c6db044 =
       (fVar1 / (fVar2 * fVar2)) * -0.044408 * (fVar1 / (fVar2 * fVar2)) * (fVar1 / (fVar2 * fVar2))
  ;
  _DAT_14c6db048 =
       (fVar1 / (fVar2 * fVar2)) * -0.044408 * (fVar1 / (fVar2 * fVar2)) * (fVar1 / (fVar2 * fVar2))
  ;
  _DAT_14c6db04c =
       (fVar1 / (fVar2 * fVar2)) * -0.044408 * (fVar1 / (fVar2 * fVar2)) * (fVar1 / (fVar2 * fVar2))
  ;
  return;
}



// FUNCTION 1446c6310 FUN_1446c6310 body=1525 status=ok
// SIG undefined FUN_1446c6310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c6310(void)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  dVar6 = (double)DAT_149934d80;
  _DAT_14c6db310 = divpd(_DAT_149934d80,_DAT_149931ec0);
  _DAT_14c6db320 = divpd(_DAT_149934d80,_DAT_149983e70);
  _DAT_14c6db330 = divpd(_DAT_149934d80,_DAT_149983e70);
  _DAT_14c6db340 = divpd(_DAT_149934d80,_DAT_149983e80);
  _DAT_14c6db300 = divpd(_DAT_149934d80,_DAT_149931ec0);
  _DAT_14c6db350 = divpd(_DAT_149934d80,_DAT_149983e80);
  _DAT_14c6db360 = divpd(_DAT_149934d80,_DAT_149983e90);
  _DAT_14c6db370 = divpd(_DAT_149934d80,_DAT_149983e90);
  _DAT_14c6db380 = divpd(_DAT_149934d80,_DAT_149983ea0);
  _DAT_14c6db390 = divpd(_DAT_149934d80,_DAT_149983ea0);
  _DAT_14c6db3a0 = divpd(_DAT_149934d80,_DAT_149983eb0);
  _DAT_14c6db3b0 = divpd(_DAT_149934d80,_DAT_149983eb0);
  _DAT_14c6db3c0 = divpd(_DAT_149934d80,_DAT_149983ec0);
  _DAT_14c6db3d0 = divpd(_DAT_149934d80,_DAT_149983ec0);
  _DAT_14c6db3e0 = divpd(_DAT_149934d80,_DAT_149983ed0);
  _DAT_14c6db3f0 = divpd(_DAT_149934d80,_DAT_149983ed0);
  _DAT_14c6db400 = divpd(_DAT_149934d80,_DAT_149983ee0);
  _DAT_14c6db410 = divpd(_DAT_149934d80,_DAT_149983ee0);
  _DAT_14c6db420 = divpd(_DAT_149934d80,_DAT_149983f00);
  _DAT_14c6db430 = divpd(_DAT_149934d80,_DAT_149983f00);
  _DAT_14c6db440 = divpd(_DAT_149934d80,_DAT_149983f10);
  _DAT_14c6db450 = divpd(_DAT_149934d80,_DAT_149983f10);
  _DAT_14c6db540 = 0x3970000000000000;
  uRam000000014c6db548 = 0x3970000000000000;
  _DAT_14c6db550 = 0x3970000000000000;
  auVar2 = divpd(_DAT_149934d80,_DAT_149983f20);
  _DAT_14c6db558 = 0x3970000000000000;
  auVar4 = divpd(_DAT_149934d80,_DAT_149983f20);
  _DAT_14c6db6d0 = auVar4._0_8_ + dVar6;
  dRam000000014c6db6d8 = auVar4._8_8_ + DAT_149934d80._8_8_;
  _DAT_14c6db6c0 = auVar2._0_8_ + dVar6;
  dRam000000014c6db6c8 = auVar2._8_8_ + DAT_149934d80._8_8_;
  _DAT_14c6db6e0 = 0x41dd4c0000000000;
  _DAT_14c6db6e8 = 0x41dd4c0000000000;
  _DAT_14c6db6f0 = 0x41dd4c0000000000;
  _DAT_14c6db6f8 = 0x41dd4c0000000000;
  _DAT_14c6db700 = dVar6 / 1966080000.0;
  _DAT_14c6db708 = dVar6 / 1966080000.0;
  _DAT_14c6db710 = dVar6 / 1966080000.0;
  dVar3 = (double)DAT_149938830;
  dVar5 = DAT_149938830._8_8_;
  _DAT_14c6db750 = dVar3 * 0.5;
  dRam000000014c6db758 = dVar5 * 0.5;
  _DAT_14c6db718 = dVar6 / 1966080000.0;
  _DAT_14c6db740 = dVar3 * 0.5;
  dRam000000014c6db748 = dVar5 * 0.5;
  _DAT_14c6db760 = dVar3 * 0.25;
  dRam000000014c6db768 = dVar5 * 0.25;
  _DAT_14c6db770 = dVar3 * 0.25;
  dRam000000014c6db778 = dVar5 * 0.25;
  dVar6 = (double)DAT_149983e80;
  auVar2._0_8_ = dVar3 * dVar6;
  dVar1 = DAT_149983e80._8_8_;
  auVar2._8_8_ = dVar5 * dVar1;
  _DAT_14c6db7a0 = dVar3 * (double)DAT_149931ec0;
  dRam000000014c6db7a8 = dVar5 * DAT_149931ec0._8_8_;
  _DAT_14c6db780 = divpd(auVar2,_DAT_149983e70);
  auVar4._0_8_ = dVar3 * dVar6;
  auVar4._8_8_ = dVar5 * dVar1;
  _DAT_14c6db7b0 = dVar3 * (double)DAT_149931ec0;
  dRam000000014c6db7b8 = dVar5 * DAT_149931ec0._8_8_;
  _DAT_14c6db790 = divpd(auVar4,_DAT_149983e70);
  _DAT_14c6db7c0 = dVar3 * dVar6;
  dRam000000014c6db7c8 = dVar5 * dVar1;
  _DAT_14c6db7f0 = divpd(_DAT_149938830,_DAT_149983ef0);
  _DAT_14c6db7d0 = dVar3 * dVar6;
  dRam000000014c6db7d8 = dVar5 * dVar1;
  _DAT_14c6db7e0 = divpd(_DAT_149938830,_DAT_149983ef0);
  _DAT_14c6db800 = divpd(_DAT_149983ef0,_DAT_149938830);
  _DAT_14c6db810 = divpd(_DAT_149983ef0,_DAT_149938830);
  _DAT_14c6db820 = (dVar6 / (dVar3 * dVar3)) * -0.822948;
  _DAT_14c6db828 = (dVar6 / (dVar3 * dVar3)) * -0.822948;
  _DAT_14c6db830 = (dVar6 / (dVar3 * dVar3)) * -0.822948;
  _DAT_14c6db838 = (dVar6 / (dVar3 * dVar3)) * -0.822948;
  _DAT_14c6db840 = (dVar6 / (dVar3 * dVar3)) * -0.130529 * (dVar6 / (dVar3 * dVar3));
  _DAT_14c6db848 = (dVar6 / (dVar3 * dVar3)) * -0.130529 * (dVar6 / (dVar3 * dVar3));
  _DAT_14c6db850 = (dVar6 / (dVar3 * dVar3)) * -0.130529 * (dVar6 / (dVar3 * dVar3));
  _DAT_14c6db858 = (dVar6 / (dVar3 * dVar3)) * -0.130529 * (dVar6 / (dVar3 * dVar3));
  _DAT_14c6db860 =
       (dVar6 / (dVar3 * dVar3)) * -0.044408 * (dVar6 / (dVar3 * dVar3)) * (dVar6 / (dVar3 * dVar3))
  ;
  _DAT_14c6db868 =
       (dVar6 / (dVar3 * dVar3)) * -0.044408 * (dVar6 / (dVar3 * dVar3)) * (dVar6 / (dVar3 * dVar3))
  ;
  _DAT_14c6db870 =
       (dVar6 / (dVar3 * dVar3)) * -0.044408 * (dVar6 / (dVar3 * dVar3)) * (dVar6 / (dVar3 * dVar3))
  ;
  _DAT_14c6db878 =
       (dVar6 / (dVar3 * dVar3)) * -0.044408 * (dVar6 / (dVar3 * dVar3)) * (dVar6 / (dVar3 * dVar3))
  ;
  return;
}



// FUNCTION 1446c95d0 FUN_1446c95d0 body=52 status=ok
// SIG undefined FUN_1446c95d0(void)

void FUN_1446c95d0(void)

{
  FUN_144bfaba0(&DAT_14c7875d8,"Flush Denormals",&LAB_144bf9580,0,0,1);
  return;
}



// FUNCTION 1446c9620 FUN_1446c9620 body=31 status=ok
// SIG undefined FUN_1446c9620(void)

void FUN_1446c9620(void)

{
  DAT_14c787688 = _create_locale(0,"C");
  return;
}



// FUNCTION 1446c9680 FUN_1446c9680 body=59 status=ok
// SIG undefined FUN_1446c9680(void)

void FUN_1446c9680(void)

{
  FUN_144bfaba0(&DAT_14c7876a0,"$hkHardwareInfo",FUN_144bfcfd0,FUN_144bfd080,&DAT_14c787698,1);
  return;
}



// FUNCTION 1446c96c0 FUN_1446c96c0 body=39 status=ok
// SIG undefined FUN_1446c96c0(void)

void FUN_1446c96c0(void)

{
  FUN_144bdc590(&DAT_14c7876e0,"base_s11n_3");
  atexit(FUN_149927410);
  return;
}



// FUNCTION 1446c9730 FUN_1446c9730 body=39 status=ok
// SIG undefined FUN_1446c9730(void)

void FUN_1446c9730(void)

{
  FUN_144bdc590(&DAT_14c787820,"base_s11n_tagfile_read");
  atexit(FUN_149927430);
  return;
}



// FUNCTION 1446c9760 FUN_1446c9760 body=46 status=ok
// SIG undefined FUN_1446c9760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c9760(void)

{
  FUN_144be6ac0(&DAT_14c787918);
  _DAT_14c787918 = hkReflect::Detail::VoidImpl::vftable;
  atexit((_func_5014 *)&LAB_149927450);
  return;
}



// FUNCTION 1446c9790 FUN_1446c9790 body=46 status=ok
// SIG undefined FUN_1446c9790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c9790(void)

{
  FUN_144be6ac0(&DAT_14c787928);
  _DAT_14c787928 = hkReflect::Detail::OpaqueImpl::vftable;
  atexit((_func_5014 *)&LAB_149927460);
  return;
}



// FUNCTION 1446c97d0 FUN_1446c97d0 body=39 status=ok
// SIG undefined FUN_1446c97d0(void)

void FUN_1446c97d0(void)

{
  FUN_144bdc590(&DAT_14c787938,"base_s11n_xml_read");
  atexit(FUN_149927470);
  return;
}



// FUNCTION 1446c9800 FUN_1446c9800 body=46 status=ok
// SIG undefined FUN_1446c9800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c9800(void)

{
  FUN_144be6ac0(&DAT_14c787a30);
  _DAT_14c787a30 = hkReflect::Detail::VoidImpl::vftable;
  atexit((_func_5014 *)&LAB_149927490);
  return;
}



// FUNCTION 1446c9830 FUN_1446c9830 body=46 status=ok
// SIG undefined FUN_1446c9830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446c9830(void)

{
  FUN_144be6ac0(&DAT_14c787a40);
  _DAT_14c787a40 = hkReflect::Detail::OpaqueImpl::vftable;
  atexit((_func_5014 *)&LAB_1499274a0);
  return;
}



// FUNCTION 1446c9870 FUN_1446c9870 body=39 status=ok
// SIG undefined FUN_1446c9870(void)

void FUN_1446c9870(void)

{
  FUN_144bdc590(&DAT_14c787a50,"base_s11n_tagfile_write");
  atexit(FUN_1499274b0);
  return;
}



// FUNCTION 1446c98a0 FUN_1446c98a0 body=39 status=ok
// SIG undefined FUN_1446c98a0(void)

void FUN_1446c98a0(void)

{
  FUN_144bdc590(&DAT_14c787b48,"base.s11n.tagfile.write.compendium");
  atexit(FUN_1499274d0);
  return;
}



// FUNCTION 1446c98e0 FUN_1446c98e0 body=39 status=ok
// SIG undefined FUN_1446c98e0(void)

void FUN_1446c98e0(void)

{
  FUN_144bdc590(&DAT_14c787c40,"base_s11n_xml_write");
  atexit(FUN_1499274f0);
  return;
}



// FUNCTION 1446c9930 FUN_1446c9930 body=59 status=ok
// SIG undefined FUN_1446c9930(void)

void FUN_1446c9930(void)

{
  FUN_144bfaba0(&DAT_14c787d40,"$hkProcessFactory",FUN_144c27900,FUN_144c27a60,&DAT_14c787d38,1);
  return;
}



// FUNCTION 1446c9bf0 FUN_1446c9bf0 body=39 status=ok
// SIG undefined FUN_1446c9bf0(void)

void FUN_1446c9bf0(void)

{
  FUN_144bdc590(&DAT_14c787fe8,"ai_NavMesh");
  atexit(FUN_149927520);
  return;
}



// FUNCTION 1446ca490 FUN_1446ca490 body=33 status=ok
// SIG undefined FUN_1446ca490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446ca490(void)

{
  undefined2 local_rese;
  undefined2 local_e;
  
  _DAT_14c6ef3f6 = local_rese;
  _DAT_14c6ef3fa = local_e;
  return;
}



// FUNCTION 1446d04f0 FUN_1446d04f0 body=69 status=ok
// SIG undefined FUN_1446d04f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d04f0(void)

{
  FUN_144be6ac0(&DAT_14c78e8e0);
  _DAT_14c78e8f0 = FUN_144c9f580;
  _DAT_14c78e8f8 = 0;
  _DAT_14c78e8e0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927710);
  return;
}



// FUNCTION 1446d0540 FUN_1446d0540 body=69 status=ok
// SIG undefined FUN_1446d0540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0540(void)

{
  FUN_144be6ac0(&DAT_14c78e940);
  _DAT_14c78e950 = FUN_144c9f630;
  _DAT_14c78e958 = 0;
  _DAT_14c78e940 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927720);
  return;
}



// FUNCTION 1446d0590 FUN_1446d0590 body=69 status=ok
// SIG undefined FUN_1446d0590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0590(void)

{
  FUN_144be6ac0(&DAT_14c78e840);
  _DAT_14c78e850 = FUN_144c9f6d0;
  _DAT_14c78e858 = 0;
  _DAT_14c78e840 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927730);
  return;
}



// FUNCTION 1446d05e0 FUN_1446d05e0 body=69 status=ok
// SIG undefined FUN_1446d05e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d05e0(void)

{
  FUN_144be6ac0(&DAT_14c78e9e0);
  _DAT_14c78e9f0 = FUN_144c9f870;
  _DAT_14c78e9f8 = 0;
  _DAT_14c78e9e0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927740);
  return;
}



// FUNCTION 1446d0630 FUN_1446d0630 body=69 status=ok
// SIG undefined FUN_1446d0630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0630(void)

{
  FUN_144be6ac0(&DAT_14c78e7e0);
  _DAT_14c78e7f0 = FUN_144c9f920;
  _DAT_14c78e7f8 = 0;
  _DAT_14c78e7e0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927750);
  return;
}



// FUNCTION 1446d0680 FUN_1446d0680 body=69 status=ok
// SIG undefined FUN_1446d0680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0680(void)

{
  FUN_144be6ac0(&DAT_14c78e6a0);
  _DAT_14c78e6b0 = FUN_144c9f9d0;
  _DAT_14c78e6b8 = 0;
  _DAT_14c78e6a0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927760);
  return;
}



// FUNCTION 1446d06d0 FUN_1446d06d0 body=69 status=ok
// SIG undefined FUN_1446d06d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d06d0(void)

{
  FUN_144be6ac0(&DAT_14c78e6e0);
  _DAT_14c78e6f0 = FUN_144c9fa70;
  _DAT_14c78e6f8 = 0;
  _DAT_14c78e6e0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927770);
  return;
}



// FUNCTION 1446d0720 FUN_1446d0720 body=69 status=ok
// SIG undefined FUN_1446d0720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0720(void)

{
  FUN_144be6ac0(&DAT_14c78e720);
  _DAT_14c78e730 = FUN_144c9fc30;
  _DAT_14c78e738 = 0;
  _DAT_14c78e720 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927780);
  return;
}



// FUNCTION 1446d0770 FUN_1446d0770 body=69 status=ok
// SIG undefined FUN_1446d0770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0770(void)

{
  FUN_144be6ac0(&DAT_14c78e760);
  _DAT_14c78e770 = FUN_144c9fd80;
  _DAT_14c78e778 = 0;
  _DAT_14c78e760 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927790);
  return;
}



// FUNCTION 1446d07c0 FUN_1446d07c0 body=69 status=ok
// SIG undefined FUN_1446d07c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d07c0(void)

{
  FUN_144be6ac0(&DAT_14c78e7a0);
  _DAT_14c78e7b0 = FUN_144c9ff20;
  _DAT_14c78e7b8 = 0;
  _DAT_14c78e7a0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499277a0);
  return;
}



// FUNCTION 1446d0810 FUN_1446d0810 body=69 status=ok
// SIG undefined FUN_1446d0810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0810(void)

{
  FUN_144be6ac0(&DAT_14c78e800);
  _DAT_14c78e810 = FUN_144c9ffc0;
  _DAT_14c78e818 = 0;
  _DAT_14c78e800 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499277b0);
  return;
}



// FUNCTION 1446d0860 FUN_1446d0860 body=69 status=ok
// SIG undefined FUN_1446d0860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0860(void)

{
  FUN_144be6ac0(&DAT_14c78e860);
  _DAT_14c78e870 = FUN_144ca0060;
  _DAT_14c78e878 = 0;
  _DAT_14c78e860 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499277c0);
  return;
}



// FUNCTION 1446d08b0 FUN_1446d08b0 body=69 status=ok
// SIG undefined FUN_1446d08b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d08b0(void)

{
  FUN_144be6ac0(&DAT_14c78e8a0);
  _DAT_14c78e8b0 = FUN_144ca01b0;
  _DAT_14c78e8b8 = 0;
  _DAT_14c78e8a0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499277d0);
  return;
}



// FUNCTION 1446d0900 FUN_1446d0900 body=69 status=ok
// SIG undefined FUN_1446d0900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0900(void)

{
  FUN_144be6ac0(&DAT_14c78e900);
  _DAT_14c78e910 = FUN_144ca0290;
  _DAT_14c78e918 = 0;
  _DAT_14c78e900 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499277e0);
  return;
}



// FUNCTION 1446d0950 FUN_1446d0950 body=69 status=ok
// SIG undefined FUN_1446d0950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0950(void)

{
  FUN_144be6ac0(&DAT_14c78e960);
  _DAT_14c78e970 = FUN_144ca0430;
  _DAT_14c78e978 = 0;
  _DAT_14c78e960 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499277f0);
  return;
}



// FUNCTION 1446d09a0 FUN_1446d09a0 body=69 status=ok
// SIG undefined FUN_1446d09a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d09a0(void)

{
  FUN_144be6ac0(&DAT_14c78e9a0);
  _DAT_14c78e9b0 = FUN_144ca05c0;
  _DAT_14c78e9b8 = 0;
  _DAT_14c78e9a0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927800);
  return;
}



// FUNCTION 1446d0e30 FUN_1446d0e30 body=69 status=ok
// SIG undefined FUN_1446d0e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0e30(void)

{
  FUN_144be6ac0(&DAT_14c78e780);
  _DAT_14c78e790 = FUN_144c9fd80;
  _DAT_14c78e798 = 0;
  _DAT_14c78e780 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927810);
  return;
}



// FUNCTION 1446d0e80 FUN_1446d0e80 body=69 status=ok
// SIG undefined FUN_1446d0e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0e80(void)

{
  FUN_144be6ac0(&DAT_14c78e9c0);
  _DAT_14c78e9d0 = FUN_144ca05c0;
  _DAT_14c78e9d8 = 0;
  _DAT_14c78e9c0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927820);
  return;
}



// FUNCTION 1446d0ed0 FUN_1446d0ed0 body=69 status=ok
// SIG undefined FUN_1446d0ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0ed0(void)

{
  FUN_144be6ac0(&DAT_14c78e980);
  _DAT_14c78e990 = FUN_144ca0430;
  _DAT_14c78e998 = 0;
  _DAT_14c78e980 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927830);
  return;
}



// FUNCTION 1446d0f20 FUN_1446d0f20 body=69 status=ok
// SIG undefined FUN_1446d0f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0f20(void)

{
  FUN_144be6ac0(&DAT_14c78e920);
  _DAT_14c78e930 = FUN_144ca0290;
  _DAT_14c78e938 = 0;
  _DAT_14c78e920 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927840);
  return;
}



// FUNCTION 1446d0f70 FUN_1446d0f70 body=69 status=ok
// SIG undefined FUN_1446d0f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0f70(void)

{
  FUN_144be6ac0(&DAT_14c78e8c0);
  _DAT_14c78e8d0 = FUN_144ca01b0;
  _DAT_14c78e8d8 = 0;
  _DAT_14c78e8c0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927850);
  return;
}



// FUNCTION 1446d0fc0 FUN_1446d0fc0 body=69 status=ok
// SIG undefined FUN_1446d0fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d0fc0(void)

{
  FUN_144be6ac0(&DAT_14c78e880);
  _DAT_14c78e890 = FUN_144ca0060;
  _DAT_14c78e898 = 0;
  _DAT_14c78e880 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927860);
  return;
}



// FUNCTION 1446d1010 FUN_1446d1010 body=69 status=ok
// SIG undefined FUN_1446d1010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d1010(void)

{
  FUN_144be6ac0(&DAT_14c78e820);
  _DAT_14c78e830 = FUN_144c9ffc0;
  _DAT_14c78e838 = 0;
  _DAT_14c78e820 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927870);
  return;
}



// FUNCTION 1446d1060 FUN_1446d1060 body=69 status=ok
// SIG undefined FUN_1446d1060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d1060(void)

{
  FUN_144be6ac0(&DAT_14c78e7c0);
  _DAT_14c78e7d0 = FUN_144c9ff20;
  _DAT_14c78e7d8 = 0;
  _DAT_14c78e7c0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927880);
  return;
}



// FUNCTION 1446d10b0 FUN_1446d10b0 body=69 status=ok
// SIG undefined FUN_1446d10b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d10b0(void)

{
  FUN_144be6ac0(&DAT_14c78e740);
  _DAT_14c78e750 = FUN_144c9fc30;
  _DAT_14c78e758 = 0;
  _DAT_14c78e740 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927890);
  return;
}



// FUNCTION 1446d1100 FUN_1446d1100 body=69 status=ok
// SIG undefined FUN_1446d1100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d1100(void)

{
  FUN_144be6ac0(&DAT_14c78e700);
  _DAT_14c78e710 = FUN_144c9fa70;
  _DAT_14c78e718 = 0;
  _DAT_14c78e700 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499278a0);
  return;
}



// FUNCTION 1446d1150 FUN_1446d1150 body=69 status=ok
// SIG undefined FUN_1446d1150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d1150(void)

{
  FUN_144be6ac0(&DAT_14c78e6c0);
  _DAT_14c78e6d0 = FUN_144c9f9d0;
  _DAT_14c78e6d8 = 0;
  _DAT_14c78e6c0 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499278b0);
  return;
}



// FUNCTION 1446d1740 FUN_1446d1740 body=39 status=ok
// SIG undefined FUN_1446d1740(void)

void FUN_1446d1740(void)

{
  FUN_144bdc590(&DAT_14c78f540,"hkai_navmeshgeneration_canonicalization");
  atexit(FUN_1499278c0);
  return;
}



// FUNCTION 1446d29a0 FUN_1446d29a0 body=69 status=ok
// SIG undefined FUN_1446d29a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d29a0(void)

{
  FUN_144be6ac0(&DAT_14c790768);
  _DAT_14c790778 = FUN_144d10eb0;
  _DAT_14c790780 = 0;
  _DAT_14c790768 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499278e0);
  return;
}



// FUNCTION 1446d2af0 FUN_1446d2af0 body=69 status=ok
// SIG undefined FUN_1446d2af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d2af0(void)

{
  FUN_144be6ac0(&DAT_14c790788);
  _DAT_14c790798 = FUN_144d10eb0;
  _DAT_14c7907a0 = 0;
  _DAT_14c790788 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499278f0);
  return;
}



// FUNCTION 1446d3310 FUN_1446d3310 body=69 status=ok
// SIG undefined FUN_1446d3310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d3310(void)

{
  FUN_144be6ac0(&DAT_14c790f58);
  _DAT_14c790f68 = FUN_144d3e8c0;
  _DAT_14c790f70 = 0;
  _DAT_14c790f58 = hkReflect::Detail::SetterArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_149927900);
  return;
}



// FUNCTION 1446d3460 FUN_1446d3460 body=57 status=ok
// SIG undefined FUN_1446d3460(void)

void FUN_1446d3460(void)

{
  DAT_14c791478 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCWSTR)0x0);
  LOCK();
  DAT_14c791470 = 0xffffffff;
  UNLOCK();
  atexit((_func_5014 *)&LAB_149927990);
  return;
}



// FUNCTION 1446d34d0 FUN_1446d34d0 body=32 status=ok
// SIG undefined FUN_1446d34d0(void)

void FUN_1446d34d0(void)

{
  FUN_1450f36f0(&DAT_14c7915f8);
  atexit((_func_5014 *)&LAB_1499279d0);
  return;
}



// FUNCTION 1446d3930 FUN_1446d3930 body=33 status=ok
// SIG undefined FUN_1446d3930(void)

void FUN_1446d3930(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c791678);
  atexit((_func_5014 *)&LAB_149927a20);
  return;
}



// FUNCTION 1446d3a20 FUN_1446d3a20 body=33 status=ok
// SIG undefined FUN_1446d3a20(void)

void FUN_1446d3a20(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7916f8);
  atexit((_func_5014 *)&LAB_149927a30);
  return;
}



// FUNCTION 1446d3a50 FUN_1446d3a50 body=33 status=ok
// SIG undefined FUN_1446d3a50(void)

void FUN_1446d3a50(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7917a0);
  atexit((_func_5014 *)&LAB_149927a40);
  return;
}



// FUNCTION 1446d3a80 FUN_1446d3a80 body=33 status=ok
// SIG undefined FUN_1446d3a80(void)

void FUN_1446d3a80(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c791b38);
  atexit((_func_5014 *)&LAB_149927a50);
  return;
}



// FUNCTION 1446d3ff0 FUN_1446d3ff0 body=34 status=ok
// SIG undefined FUN_1446d3ff0(void)

void FUN_1446d3ff0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144be5720("hkDefaultTaskQueueThreadContext");
  FUN_144be57a0(&DAT_14c797a88,uVar1);
  return;
}



// FUNCTION 1446d4020 FUN_1446d4020 body=39 status=ok
// SIG undefined FUN_1446d4020(void)

void FUN_1446d4020(void)

{
  FUN_144bdc590(&DAT_14c797a98,"default");
  atexit(FUN_149928790);
  return;
}



// FUNCTION 1446d4050 FUN_1446d4050 body=39 status=ok
// SIG undefined FUN_1446d4050(void)

void FUN_1446d4050(void)

{
  FUN_144bdc590(&DAT_14c797b90,"common");
  atexit(FUN_1499287b0);
  return;
}



// FUNCTION 1446d4080 FUN_1446d4080 body=39 status=ok
// SIG undefined FUN_1446d4080(void)

void FUN_1446d4080(void)

{
  FUN_144bdc590(&DAT_14c797c90,"sys_io_filesys_1");
  atexit(FUN_1499287d0);
  return;
}



// FUNCTION 1446d40c0 FUN_1446d40c0 body=59 status=ok
// SIG undefined FUN_1446d40c0(void)

void FUN_1446d40c0(void)

{
  FUN_144bfaba0(&DAT_14c797d90,"$hkFileSystem",FUN_144f599b0,FUN_144f59aa0,&DAT_14c797d88,1);
  return;
}



// FUNCTION 1446d4100 FUN_1446d4100 body=134 status=ok
// SIG undefined FUN_1446d4100(void)

void FUN_1446d4100(void)

{
  HMODULE hModule;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c797dc0);
  DAT_14c797de8 = 1;
  hModule = LoadLibraryA("kernel32.dll");
  if (hModule == (HMODULE)0x0) {
    OutputDebugStringA(
                      "Havok StackTracer: hkStackTracer: Unable to load dll for RtlCaptureContext.\r\n"
                      );
    DAT_14c797e50 = (FARPROC)0x0;
    DAT_14c797e48 = (FARPROC)0x0;
  }
  else {
    DAT_14c797e48 = GetProcAddress(hModule,"RtlCaptureContext");
    DAT_14c797e50 = GetProcAddress(hModule,"RtlCaptureStackBackTrace");
  }
  atexit((_func_5014 *)&LAB_149928800);
  return;
}



// FUNCTION 1446d4190 FUN_1446d4190 body=46 status=ok
// SIG undefined FUN_1446d4190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d4190(void)

{
  FUN_144be6ac0(&DAT_14c797e60);
  _DAT_14c797e60 = hkStringView::StringImpl::vftable;
  atexit((_func_5014 *)&LAB_149928820);
  return;
}



// FUNCTION 1446d41c0 FUN_1446d41c0 body=39 status=ok
// SIG undefined FUN_1446d41c0(void)

void FUN_1446d41c0(void)

{
  FUN_144bdc590(&DAT_14c797e70,"base_reflect_typeRegistration");
  atexit(FUN_149928830);
  return;
}



// FUNCTION 1446d4200 FUN_1446d4200 body=59 status=ok
// SIG undefined FUN_1446d4200(void)

void FUN_1446d4200(void)

{
  FUN_144bfaba0(&DAT_14c797f70,"$BuiltinTypeReg",FUN_144f5ebc0,FUN_144f5ec70,&DAT_14c797f68,1);
  return;
}



// FUNCTION 1446d4240 FUN_1446d4240 body=39 status=ok
// SIG undefined FUN_1446d4240(void)

void FUN_1446d4240(void)

{
  FUN_144bdc590(&DAT_14c797fa0,"common.base.memory");
  atexit(FUN_149928860);
  return;
}



// FUNCTION 1446d42c0 FUN_1446d42c0 body=34 status=ok
// SIG undefined FUN_1446d42c0(void)

void FUN_1446d42c0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144be5720("hkCheckDeterminismUtil_ThreadData");
  FUN_144be57a0(&DAT_14c798100,uVar1);
  return;
}



// FUNCTION 1446d4310 FUN_1446d4310 body=39 status=ok
// SIG undefined FUN_1446d4310(void)

void FUN_1446d4310(void)

{
  FUN_144bdc590(&DAT_14c798960,"base_reflect_attributes");
  atexit(FUN_1499288e0);
  return;
}



// FUNCTION 1446d4340 FUN_1446d4340 body=46 status=ok
// SIG undefined FUN_1446d4340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d4340(void)

{
  FUN_144be6ac0(&DAT_14c798a58);
  _DAT_14c798a58 = hk::IsValueArray::Impl::vftable;
  atexit((_func_5014 *)&LAB_149928900);
  return;
}



// FUNCTION 1446d4370 FUN_1446d4370 body=60 status=ok
// SIG undefined FUN_1446d4370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d4370(void)

{
  FUN_144be7ee0(&DAT_14c798a68);
  _DAT_14c798a68 = hkReflect::Detail::AttributeAllocImpl::vftable;
  _DAT_14c798a70 = &PTR_vftable_14c6e47a0;
  atexit((_func_5014 *)&LAB_149928910);
  return;
}



// FUNCTION 1446d43b0 FUN_1446d43b0 body=39 status=ok
// SIG undefined FUN_1446d43b0(void)

void FUN_1446d43b0(void)

{
  FUN_144bdc590(&DAT_14c798a80,"reflect_Type");
  atexit(FUN_149928920);
  return;
}



// FUNCTION 1446d43f0 FUN_1446d43f0 body=59 status=ok
// SIG undefined FUN_1446d43f0(void)

void FUN_1446d43f0(void)

{
  FUN_144bfaba0(&DAT_14c798b80,"$hkReflect::Detail::DerivedDataCache",FUN_144f6b3d0,FUN_144f6b520,
                &DAT_14c798b78,1);
  return;
}



// FUNCTION 1446d4470 FUN_1446d4470 body=46 status=ok
// SIG undefined FUN_1446d4470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d4470(void)

{
  FUN_144be6ac0(&DAT_14c798be8);
  _DAT_14c798be8 = hkReflect::Detail::StringOut::StringOutImpl::vftable;
  atexit((_func_5014 *)&LAB_149928950);
  return;
}



// FUNCTION 1446d44a0 FUN_1446d44a0 body=46 status=ok
// SIG undefined FUN_1446d44a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d44a0(void)

{
  FUN_144be6ac0(&DAT_14c798bf8);
  _DAT_14c798bf8 = hkRelPtr_PointerImpl::vftable;
  atexit((_func_5014 *)&LAB_149928960);
  return;
}



// FUNCTION 1446d44e0 FUN_1446d44e0 body=46 status=ok
// SIG undefined FUN_1446d44e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d44e0(void)

{
  FUN_144be6ac0(&DAT_14c798c08);
  _DAT_14c798c08 = hkScalarF_FloatImpl::vftable;
  atexit((_func_5014 *)&LAB_149928980);
  return;
}



// FUNCTION 1446d4510 FUN_1446d4510 body=46 status=ok
// SIG undefined FUN_1446d4510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d4510(void)

{
  FUN_144be6ac0(&DAT_14c798c18);
  _DAT_14c798c18 = hkSimdDouble64_FloatImpl::vftable;
  atexit((_func_5014 *)&LAB_1499289a0);
  return;
}



// FUNCTION 1446d4540 FUN_1446d4540 body=46 status=ok
// SIG undefined FUN_1446d4540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d4540(void)

{
  FUN_144be6ac0(&DAT_14c798c28);
  _DAT_14c798c28 = hkReflect::Any::ArrayImpl::vftable;
  atexit((_func_5014 *)&LAB_1499289c0);
  return;
}



// FUNCTION 1446d4580 FUN_1446d4580 body=59 status=ok
// SIG undefined FUN_1446d4580(void)

void FUN_1446d4580(void)

{
  FUN_144bfaba0(&DAT_14c798c40,"$hkUuidPseudoRandomGenerator",FUN_144f6f570,FUN_144f6f680,
                &DAT_14c798c38,1);
  return;
}



// FUNCTION 1446d45c0 FUN_1446d45c0 body=39 status=ok
// SIG undefined FUN_1446d45c0(void)

void FUN_1446d45c0(void)

{
  FUN_144bdc590(&DAT_14c798c78,"base_reflect_cloner_2");
  atexit(FUN_1499289e0);
  return;
}



// FUNCTION 1446d45f0 FUN_1446d45f0 body=46 status=ok
// SIG undefined FUN_1446d45f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d45f0(void)

{
  FUN_144be7ee0(&DAT_14c798d70);
  _DAT_14c798d70 = hkReflect::AttributeArrayWithOwnership::AllocImpl::vftable;
  atexit((_func_5014 *)&LAB_149928a00);
  return;
}



// FUNCTION 1446d4620 FUN_1446d4620 body=39 status=ok
// SIG undefined FUN_1446d4620(void)

void FUN_1446d4620(void)

{
  FUN_144bdc590(&DAT_14c798d78,"common_monitor_2");
  atexit(FUN_149928a10);
  return;
}



// FUNCTION 1446d4650 FUN_1446d4650 body=39 status=ok
// SIG undefined FUN_1446d4650(void)

void FUN_1446d4650(void)

{
  FUN_144bdc590(&DAT_14c798e70,"common_monitor_1");
  atexit(FUN_149928a30);
  return;
}



// FUNCTION 1446d4690 FUN_1446d4690 body=59 status=ok
// SIG undefined FUN_1446d4690(void)

void FUN_1446d4690(void)

{
  FUN_144bfaba0(&DAT_14c798f70,"$hkErrorRouter",FUN_144f73a50,FUN_144f73b30,&DAT_14c798f68,1);
  return;
}



// FUNCTION 1446d46d0 FUN_1446d46d0 body=39 status=ok
// SIG undefined FUN_1446d46d0(void)

void FUN_1446d46d0(void)

{
  FUN_144bdc590(&DAT_14c798fa0,"sys_net_bsdsocket");
  atexit(FUN_149928a60);
  return;
}



// FUNCTION 1446d4700 FUN_1446d4700 body=39 status=ok
// SIG undefined FUN_1446d4700(void)

void FUN_1446d4700(void)

{
  FUN_144bdc590(&DAT_14c799098,"base_reflect_cloner_3");
  atexit(FUN_149928a80);
  return;
}



// FUNCTION 1446d4740 FUN_1446d4740 body=59 status=ok
// SIG undefined FUN_1446d4740(void)

void FUN_1446d4740(void)

{
  FUN_144bfaba0(&DAT_14c799198,"$AfterReflectNewLock",FUN_144f7f6d0,FUN_144f7f7c0,&DAT_14c799190,1);
  return;
}



// FUNCTION 1446d4be0 FUN_1446d4be0 body=39 status=ok
// SIG undefined FUN_1446d4be0(void)

void FUN_1446d4be0(void)

{
  FUN_144bdc590(&DAT_14c799658,"base_s11n_2");
  atexit(FUN_149928ab0);
  return;
}



// FUNCTION 1446d4cb0 FUN_1446d4cb0 body=39 status=ok
// SIG undefined FUN_1446d4cb0(void)

void FUN_1446d4cb0(void)

{
  FUN_144bdc590(&DAT_14c799750,"base_s11n_1");
  atexit(FUN_149928b70);
  return;
}



// FUNCTION 1446d4cf0 FUN_1446d4cf0 body=39 status=ok
// SIG undefined FUN_1446d4cf0(void)

void FUN_1446d4cf0(void)

{
  FUN_144bdc590(&DAT_14c799868,"sys_io_loadutil");
  atexit(FUN_149928bb0);
  return;
}



// FUNCTION 1446d4d20 FUN_1446d4d20 body=39 status=ok
// SIG undefined FUN_1446d4d20(void)

void FUN_1446d4d20(void)

{
  FUN_144bdc590(&DAT_14c799960,"base_s11n_readBuffer");
  atexit(FUN_149928bd0);
  return;
}



// FUNCTION 1446d4d50 FUN_1446d4d50 body=39 status=ok
// SIG undefined FUN_1446d4d50(void)

void FUN_1446d4d50(void)

{
  FUN_144bdc590(&DAT_14c799a60,"base_s11n_typeHasher");
  atexit(FUN_149928bf0);
  return;
}



// FUNCTION 1446d4d80 FUN_1446d4d80 body=39 status=ok
// SIG undefined FUN_1446d4d80(void)

void FUN_1446d4d80(void)

{
  FUN_144bdc590(&DAT_14c799b58,"base_reflect_cloner_1");
  atexit(FUN_149928c10);
  return;
}



// FUNCTION 1446d4db0 FUN_1446d4db0 body=39 status=ok
// SIG undefined FUN_1446d4db0(void)

void FUN_1446d4db0(void)

{
  FUN_144bdc590(&DAT_14c799c50,"base_s11n_indexedBundle");
  atexit(FUN_149928c30);
  return;
}



// FUNCTION 1446d4de0 FUN_1446d4de0 body=39 status=ok
// SIG undefined FUN_1446d4de0(void)

void FUN_1446d4de0(void)

{
  FUN_144bdc590(&DAT_14c799d48,"base_reflect_5");
  atexit(FUN_149928c50);
  return;
}



// FUNCTION 1446d4e20 FUN_1446d4e20 body=59 status=ok
// SIG undefined FUN_1446d4e20(void)

void FUN_1446d4e20(void)

{
  FUN_144bfaba0(&DAT_14c799e48,"$ReflectStrings",FUN_144f967a0,FUN_144f96890,&DAT_14c799e40,1);
  return;
}



// FUNCTION 1446d4ea0 FUN_1446d4ea0 body=39 status=ok
// SIG undefined FUN_1446d4ea0(void)

void FUN_1446d4ea0(void)

{
  FUN_144bdc590(&DAT_14c799eb0,"base_reflect_copier");
  atexit(FUN_149928c80);
  return;
}



// FUNCTION 1446d4ed0 FUN_1446d4ed0 body=39 status=ok
// SIG undefined FUN_1446d4ed0(void)

void FUN_1446d4ed0(void)

{
  FUN_144bdc590(&DAT_14c799fa8,"hkTypeVm_origin");
  atexit(FUN_149928ca0);
  return;
}



// FUNCTION 1446d4f00 FUN_1446d4f00 body=39 status=ok
// SIG undefined FUN_1446d4f00(void)

void FUN_1446d4f00(void)

{
  FUN_144bdc590(&DAT_14c79a0a0,"base.reflect.typeVm");
  atexit(FUN_149928cc0);
  return;
}



// FUNCTION 1446d63c0 FUN_1446d63c0 body=32 status=ok
// SIG undefined FUN_1446d63c0(void)

void FUN_1446d63c0(void)

{
  FUN_144bdde80(&DAT_14c79b620);
  atexit((_func_5014 *)&LAB_149928ce0);
  return;
}



// FUNCTION 1446d6430 FUN_1446d6430 body=39 status=ok
// SIG undefined FUN_1446d6430(void)

void FUN_1446d6430(void)

{
  FUN_144bdc590(&DAT_14c79b680,"ai_NavMesh_Compact");
  atexit(FUN_149928cf0);
  return;
}



// FUNCTION 1446d6700 FUN_1446d6700 body=39 status=ok
// SIG undefined FUN_1446d6700(void)

void FUN_1446d6700(void)

{
  FUN_144bdc590(&DAT_14c79b8b8,"ai_navvolume_generation");
  atexit(FUN_149928d10);
  return;
}



// FUNCTION 1446d6730 FUN_1446d6730 body=46 status=ok
// SIG undefined FUN_1446d6730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d6730(void)

{
  FUN_144be6ac0(&DAT_14c79b9b0);
  _DAT_14c79b9b0 = hkReflect::Detail::ScopedPtrImpl::vftable;
  atexit((_func_5014 *)&LAB_149928d30);
  return;
}



// FUNCTION 1446d6980 FUN_1446d6980 body=56 status=ok
// SIG undefined FUN_1446d6980(void)

void FUN_1446d6980(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bc80);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c79bca8);
  DAT_14c79bcd0 = 0;
  atexit(FUN_149928d40);
  return;
}



// FUNCTION 1446d6a00 FUN_1446d6a00 body=32 status=ok
// SIG undefined FUN_1446d6a00(void)

void FUN_1446d6a00(void)

{
  FUN_1453515c0(&DAT_14c79bd60);
  atexit((_func_5014 *)&LAB_149928dd0);
  return;
}



// FUNCTION 1446d6a80 FUN_1446d6a80 body=33 status=ok
// SIG undefined FUN_1446d6a80(void)

void FUN_1446d6a80(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  atexit((_func_5014 *)&LAB_149928e80);
  return;
}



// FUNCTION 1446d6af0 FUN_1446d6af0 body=32 status=ok
// SIG undefined FUN_1446d6af0(void)

void FUN_1446d6af0(void)

{
  FUN_14538c8f0(&DAT_14c79c060);
  atexit((_func_5014 *)&LAB_149928ed0);
  return;
}



// FUNCTION 1446d6b10 FUN_1446d6b10 body=33 status=ok
// SIG undefined FUN_1446d6b10(void)

void FUN_1446d6b10(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c070);
  atexit((_func_5014 *)&LAB_149928ee0);
  return;
}



// FUNCTION 1446d6bc0 FUN_1446d6bc0 body=33 status=ok
// SIG undefined FUN_1446d6bc0(void)

void FUN_1446d6bc0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c3f8);
  atexit((_func_5014 *)&LAB_149928f80);
  return;
}



// FUNCTION 1446d6c00 FUN_1446d6c00 body=44 status=ok
// SIG undefined FUN_1446d6c00(void)

void FUN_1446d6c00(void)

{
  FUN_1450d3c30(&DAT_14c79c430,0x100,1);
  atexit((_func_5014 *)&DAT_149928fa0);
  return;
}



// FUNCTION 1446d6c30 FUN_1446d6c30 body=33 status=ok
// SIG undefined FUN_1446d6c30(void)

void FUN_1446d6c30(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  atexit((_func_5014 *)&LAB_149928fb0);
  return;
}



// FUNCTION 1446d6cb0 FUN_1446d6cb0 body=46 status=ok
// SIG undefined FUN_1446d6cb0(void)

void FUN_1446d6cb0(void)

{
  DAT_14c79d208 = powf(2.0,DAT_14c72f61c * -4.0);
  return;
}



// FUNCTION 1446d6ce0 FUN_1446d6ce0 body=46 status=ok
// SIG undefined FUN_1446d6ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d6ce0(void)

{
  _DAT_14c79d20c = powf(2.0,DAT_14c72f620 * -4.0);
  return;
}



// FUNCTION 1446d6d10 FUN_1446d6d10 body=46 status=ok
// SIG undefined FUN_1446d6d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d6d10(void)

{
  _DAT_14c79d218 = powf(2.0,DAT_14c72f638 * -4.0);
  return;
}



// FUNCTION 1446d6d40 FUN_1446d6d40 body=33 status=ok
// SIG undefined FUN_1446d6d40(void)

void FUN_1446d6d40(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7ada90);
  atexit((_func_5014 *)&LAB_1499290c0);
  return;
}



// FUNCTION 1446d6f80 FUN_1446d6f80 body=39 status=ok
// SIG undefined FUN_1446d6f80(void)

void FUN_1446d6f80(void)

{
  FUN_144bdc590(&DAT_14c7fc6d0,"sys_io_filesys_win32");
  atexit(FUN_1499295a0);
  return;
}



// FUNCTION 1446d7270 FUN_1446d7270 body=46 status=ok
// SIG undefined FUN_1446d7270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7270(void)

{
  FUN_144be6ac0(&DAT_14c7fca88);
  _DAT_14c7fca88 =
       hkReflect::Detail::EndianIntImplN<signed_char,hkEndian::EndianType<signed_char,1>_>::vftable;
  atexit((_func_5014 *)&LAB_1499295c0);
  return;
}



// FUNCTION 1446d72a0 FUN_1446d72a0 body=46 status=ok
// SIG undefined FUN_1446d72a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d72a0(void)

{
  FUN_144be6ac0(&DAT_14c7fca98);
  _DAT_14c7fca98 =
       hkReflect::Detail::EndianIntImplN<signed_char,hkEndian::EndianType<signed_char,0>_>::vftable;
  atexit((_func_5014 *)&LAB_1499295d0);
  return;
}



// FUNCTION 1446d72d0 FUN_1446d72d0 body=46 status=ok
// SIG undefined FUN_1446d72d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d72d0(void)

{
  FUN_144be6ac0(&DAT_14c7fcaa8);
  _DAT_14c7fcaa8 = hkReflect::Detail::EndianIntImplN<short,hkEndian::EndianType<short,1>_>::vftable;
  atexit((_func_5014 *)&LAB_1499295e0);
  return;
}



// FUNCTION 1446d7300 FUN_1446d7300 body=46 status=ok
// SIG undefined FUN_1446d7300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7300(void)

{
  FUN_144be6ac0(&DAT_14c7fcab8);
  _DAT_14c7fcab8 = hkReflect::Detail::EndianIntImplN<short,hkEndian::EndianType<short,0>_>::vftable;
  atexit((_func_5014 *)&LAB_1499295f0);
  return;
}



// FUNCTION 1446d7330 FUN_1446d7330 body=46 status=ok
// SIG undefined FUN_1446d7330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7330(void)

{
  FUN_144be6ac0(&DAT_14c7fcac8);
  _DAT_14c7fcac8 = hkReflect::Detail::EndianIntImplN<int,hkEndian::EndianType<int,1>_>::vftable;
  atexit((_func_5014 *)&LAB_149929600);
  return;
}



// FUNCTION 1446d7360 FUN_1446d7360 body=46 status=ok
// SIG undefined FUN_1446d7360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7360(void)

{
  FUN_144be6ac0(&DAT_14c7fcad8);
  _DAT_14c7fcad8 = hkReflect::Detail::EndianIntImplN<int,hkEndian::EndianType<int,0>_>::vftable;
  atexit((_func_5014 *)&LAB_149929610);
  return;
}



// FUNCTION 1446d7390 FUN_1446d7390 body=46 status=ok
// SIG undefined FUN_1446d7390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7390(void)

{
  FUN_144be6ac0(&DAT_14c7fcae8);
  _DAT_14c7fcae8 =
       hkReflect::Detail::EndianIntImplN<__int64,hkEndian::EndianType<__int64,1>_>::vftable;
  atexit((_func_5014 *)&LAB_149929620);
  return;
}



// FUNCTION 1446d73c0 FUN_1446d73c0 body=46 status=ok
// SIG undefined FUN_1446d73c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d73c0(void)

{
  FUN_144be6ac0(&DAT_14c7fcaf8);
  _DAT_14c7fcaf8 =
       hkReflect::Detail::EndianIntImplN<__int64,hkEndian::EndianType<__int64,0>_>::vftable;
  atexit((_func_5014 *)&LAB_149929630);
  return;
}



// FUNCTION 1446d73f0 FUN_1446d73f0 body=46 status=ok
// SIG undefined FUN_1446d73f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d73f0(void)

{
  FUN_144be6ac0(&DAT_14c7fcb08);
  _DAT_14c7fcb08 =
       hkReflect::Detail::EndianIntImplN<unsigned_char,hkEndian::EndianType<unsigned_char,1>_>::
       vftable;
  atexit((_func_5014 *)&LAB_149929640);
  return;
}



// FUNCTION 1446d7420 FUN_1446d7420 body=46 status=ok
// SIG undefined FUN_1446d7420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7420(void)

{
  FUN_144be6ac0(&DAT_14c7fcb18);
  _DAT_14c7fcb18 =
       hkReflect::Detail::EndianIntImplN<unsigned_char,hkEndian::EndianType<unsigned_char,0>_>::
       vftable;
  atexit((_func_5014 *)&LAB_149929650);
  return;
}



// FUNCTION 1446d7450 FUN_1446d7450 body=46 status=ok
// SIG undefined FUN_1446d7450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7450(void)

{
  FUN_144be6ac0(&DAT_14c7fcb28);
  _DAT_14c7fcb28 =
       hkReflect::Detail::EndianIntImplN<unsigned_short,hkEndian::EndianType<unsigned_short,1>_>::
       vftable;
  atexit((_func_5014 *)&LAB_149929660);
  return;
}



// FUNCTION 1446d7480 FUN_1446d7480 body=46 status=ok
// SIG undefined FUN_1446d7480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7480(void)

{
  FUN_144be6ac0(&DAT_14c7fcb38);
  _DAT_14c7fcb38 =
       hkReflect::Detail::EndianIntImplN<unsigned_short,hkEndian::EndianType<unsigned_short,0>_>::
       vftable;
  atexit((_func_5014 *)&LAB_149929670);
  return;
}



// FUNCTION 1446d74b0 FUN_1446d74b0 body=46 status=ok
// SIG undefined FUN_1446d74b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d74b0(void)

{
  FUN_144be6ac0(&DAT_14c7fcb48);
  _DAT_14c7fcb48 =
       hkReflect::Detail::EndianIntImplN<unsigned_int,hkEndian::EndianType<unsigned_int,1>_>::
       vftable;
  atexit((_func_5014 *)&LAB_149929680);
  return;
}



// FUNCTION 1446d74e0 FUN_1446d74e0 body=46 status=ok
// SIG undefined FUN_1446d74e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d74e0(void)

{
  FUN_144be6ac0(&DAT_14c7fcb58);
  _DAT_14c7fcb58 =
       hkReflect::Detail::EndianIntImplN<unsigned_int,hkEndian::EndianType<unsigned_int,0>_>::
       vftable;
  atexit((_func_5014 *)&LAB_149929690);
  return;
}



// FUNCTION 1446d7510 FUN_1446d7510 body=46 status=ok
// SIG undefined FUN_1446d7510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7510(void)

{
  FUN_144be6ac0(&DAT_14c7fcb68);
  _DAT_14c7fcb68 =
       hkReflect::Detail::EndianIntImplN<unsigned___int64,hkEndian::EndianType<unsigned___int64,1>_>
       ::vftable;
  atexit((_func_5014 *)&LAB_1499296a0);
  return;
}



// FUNCTION 1446d7540 FUN_1446d7540 body=46 status=ok
// SIG undefined FUN_1446d7540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7540(void)

{
  FUN_144be6ac0(&DAT_14c7fcb78);
  _DAT_14c7fcb78 =
       hkReflect::Detail::EndianIntImplN<unsigned___int64,hkEndian::EndianType<unsigned___int64,0>_>
       ::vftable;
  atexit((_func_5014 *)&LAB_1499296b0);
  return;
}



// FUNCTION 1446d7570 FUN_1446d7570 body=46 status=ok
// SIG undefined FUN_1446d7570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7570(void)

{
  FUN_144be6ac0(&DAT_14c7fcb88);
  _DAT_14c7fcb88 =
       hkReflect::Detail::EndianFloatImplN<hkHalf16,hkEndian::EndianType<hkHalf16,1>_>::vftable;
  atexit((_func_5014 *)&LAB_1499296c0);
  return;
}



// FUNCTION 1446d75a0 FUN_1446d75a0 body=46 status=ok
// SIG undefined FUN_1446d75a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d75a0(void)

{
  FUN_144be6ac0(&DAT_14c7fcb98);
  _DAT_14c7fcb98 =
       hkReflect::Detail::EndianFloatImplN<hkHalf16,hkEndian::EndianType<hkHalf16,0>_>::vftable;
  atexit((_func_5014 *)&LAB_1499296e0);
  return;
}



// FUNCTION 1446d75d0 FUN_1446d75d0 body=46 status=ok
// SIG undefined FUN_1446d75d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d75d0(void)

{
  FUN_144be6ac0(&DAT_14c7fcba8);
  _DAT_14c7fcba8 =
       hkReflect::Detail::EndianFloatImplN<float,hkEndian::EndianType<float,1>_>::vftable;
  atexit((_func_5014 *)&LAB_149929700);
  return;
}



// FUNCTION 1446d7600 FUN_1446d7600 body=46 status=ok
// SIG undefined FUN_1446d7600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7600(void)

{
  FUN_144be6ac0(&DAT_14c7fcbb8);
  _DAT_14c7fcbb8 =
       hkReflect::Detail::EndianFloatImplN<float,hkEndian::EndianType<float,0>_>::vftable;
  atexit((_func_5014 *)&LAB_149929720);
  return;
}



// FUNCTION 1446d7630 FUN_1446d7630 body=46 status=ok
// SIG undefined FUN_1446d7630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7630(void)

{
  FUN_144be6ac0(&DAT_14c7fcbc8);
  _DAT_14c7fcbc8 =
       hkReflect::Detail::EndianFloatImplN<double,hkEndian::EndianType<double,1>_>::vftable;
  atexit((_func_5014 *)&LAB_149929740);
  return;
}



// FUNCTION 1446d7660 FUN_1446d7660 body=46 status=ok
// SIG undefined FUN_1446d7660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7660(void)

{
  FUN_144be6ac0(&DAT_14c7fcbd8);
  _DAT_14c7fcbd8 =
       hkReflect::Detail::EndianFloatImplN<double,hkEndian::EndianType<double,0>_>::vftable;
  atexit((_func_5014 *)&LAB_149929760);
  return;
}



// FUNCTION 1446d7690 FUN_1446d7690 body=57 status=ok
// SIG undefined FUN_1446d7690(void)

void FUN_1446d7690(void)

{
  FUN_144f50de0(&DAT_14c7fcbf0,0,1,FUN_1453041f0,&LAB_145304330);
  atexit((_func_5014 *)&LAB_149929780);
  return;
}



// FUNCTION 1446d76d0 FUN_1446d76d0 body=57 status=ok
// SIG undefined FUN_1446d76d0(void)

void FUN_1446d76d0(void)

{
  FUN_144f50de0(&DAT_14c7fcc40,0,1,&LAB_145304340,&LAB_145304350);
  atexit((_func_5014 *)&LAB_149929790);
  return;
}



// FUNCTION 1446d7710 FUN_1446d7710 body=57 status=ok
// SIG undefined FUN_1446d7710(void)

void FUN_1446d7710(void)

{
  FUN_144f50de0(&DAT_14c7fcc90,0,1,&LAB_145304360,&LAB_145304380);
  atexit((_func_5014 *)&LAB_1499297a0);
  return;
}



// FUNCTION 1446d7750 FUN_1446d7750 body=57 status=ok
// SIG undefined FUN_1446d7750(void)

void FUN_1446d7750(void)

{
  FUN_144f50de0(&DAT_14c7fcce0,0,1,&LAB_145304390,&LAB_1453043a0);
  atexit((_func_5014 *)&LAB_1499297b0);
  return;
}



// FUNCTION 1446d7790 FUN_1446d7790 body=39 status=ok
// SIG undefined FUN_1446d7790(void)

void FUN_1446d7790(void)

{
  FUN_144bdc590(&DAT_14c7fcd38,"geo_collide_planargeometry");
  atexit(FUN_1499297c0);
  return;
}



// FUNCTION 1446d77c0 FUN_1446d77c0 body=39 status=ok
// SIG undefined FUN_1446d77c0(void)

void FUN_1446d77c0(void)

{
  FUN_144bdc590(&DAT_14c7fce30,"geo_collide_planarsolid");
  atexit(FUN_1499297e0);
  return;
}



// FUNCTION 1446d7800 FUN_1446d7800 body=59 status=ok
// SIG undefined FUN_1446d7800(void)

void FUN_1446d7800(void)

{
  FUN_144bfaba0(&DAT_14c7fcf30,"$hkaiHeatMapParams",FUN_145318cb0,FUN_145318d90,&DAT_14c7fcf28,1);
  return;
}



// FUNCTION 1446d7850 FUN_1446d7850 body=46 status=ok
// SIG undefined FUN_1446d7850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d7850(void)

{
  FUN_145302f90(&DAT_14c7fcfb8);
  _DAT_14c7fcfb8 = _anon_D8CB3618::DefaultTypeCallbackType::vftable;
  atexit((_func_5014 *)&LAB_149929810);
  return;
}



// FUNCTION 1446d78c0 FUN_1446d78c0 body=39 status=ok
// SIG undefined FUN_1446d78c0(void)

void FUN_1446d78c0(void)

{
  FUN_144bdc590(&DAT_14c7fcfe0,"ai_navvolume_merger");
  atexit(FUN_149929820);
  return;
}



// FUNCTION 1446d81f0 FUN_1446d81f0 body=46 status=ok
// SIG undefined FUN_1446d81f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d81f0(void)

{
  FUN_144be7ee0(&DAT_14c7fd990);
  _DAT_14c7fd990 = _anon_E2EC24F6::VdbObjectAllocImpl::vftable;
  atexit((_func_5014 *)&LAB_149929840);
  return;
}



// FUNCTION 1446d8220 FUN_1446d8220 body=46 status=ok
// SIG undefined FUN_1446d8220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d8220(void)

{
  FUN_144be6ac0(&DAT_14c7fd998);
  _DAT_14c7fd998 = _anon_E2EC24F6::VdbObjectCompoundImpl::vftable;
  atexit((_func_5014 *)&LAB_149929850);
  return;
}



// FUNCTION 1446d8250 FUN_1446d8250 body=46 status=ok
// SIG undefined FUN_1446d8250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d8250(void)

{
  FUN_144be6ac0(&DAT_14c7fd9a8);
  _DAT_14c7fd9a8 = _anon_E2EC24F6::VdbObjectStringImpl::vftable;
  atexit((_func_5014 *)&LAB_149929860);
  return;
}



// FUNCTION 1446d8280 FUN_1446d8280 body=46 status=ok
// SIG undefined FUN_1446d8280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d8280(void)

{
  FUN_144be6ac0(&DAT_14c7fd9b8);
  _DAT_14c7fd9b8 = _anon_E2EC24F6::VdbObjectPointerImpl::vftable;
  atexit((_func_5014 *)&LAB_149929870);
  return;
}



// FUNCTION 1446d82b0 FUN_1446d82b0 body=39 status=ok
// SIG undefined FUN_1446d82b0(void)

void FUN_1446d82b0(void)

{
  FUN_144bdc590(&DAT_14c7fd9c8,"ai_debug_navmesh");
  atexit(FUN_149929880);
  return;
}



// FUNCTION 1446d82e0 FUN_1446d82e0 body=39 status=ok
// SIG undefined FUN_1446d82e0(void)

void FUN_1446d82e0(void)

{
  FUN_144bdc590(&DAT_14c7fdac0,"ai_debug_navvolume");
  atexit(FUN_1499298a0);
  return;
}



// FUNCTION 1446d8310 FUN_1446d8310 body=39 status=ok
// SIG undefined FUN_1446d8310(void)

void FUN_1446d8310(void)

{
  FUN_144bdc590(&DAT_14c7fdbb8,"common_visualize_displayhandler");
  atexit(FUN_1499298c0);
  return;
}



// FUNCTION 1446d8460 FUN_1446d8460 body=33 status=ok
// SIG undefined FUN_1446d8460(void)

void FUN_1446d8460(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  atexit((_func_5014 *)&LAB_149929930);
  return;
}



// FUNCTION 1446d84b0 FUN_1446d84b0 body=33 status=ok
// SIG undefined FUN_1446d84b0(void)

void FUN_1446d84b0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdfb8);
  atexit((_func_5014 *)&LAB_149929960);
  return;
}



// FUNCTION 1446d86b0 FUN_1446d86b0 body=46 status=ok
// SIG undefined FUN_1446d86b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446d86b0(void)

{
  _DAT_14c7fe150 = powf(2.0,DAT_14c73e880 * -4.0);
  return;
}



// FUNCTION 1446d86e0 FUN_1446d86e0 body=39 status=ok
// SIG undefined FUN_1446d86e0(void)

void FUN_1446d86e0(void)

{
  FUN_144bdc590(&DAT_14c7ff028,"sys_io_stream_win32");
  atexit(FUN_149929970);
  return;
}



// FUNCTION 1446d8710 FUN_1446d8710 body=39 status=ok
// SIG undefined FUN_1446d8710(void)

void FUN_1446d8710(void)

{
  FUN_144bdc590(&DAT_14c7ff120,"geo_collide_convexcelltree3d");
  atexit(FUN_149929990);
  return;
}



// FUNCTION 1446d8750 FUN_1446d8750 body=59 status=ok
// SIG undefined FUN_1446d8750(void)

void FUN_1446d8750(void)

{
  FUN_144bfaba0(&DAT_14c7ff220,"$hkConcurrency",FUN_145520ea0,FUN_145520ec0,&DAT_14c7ff218,1);
  return;
}


