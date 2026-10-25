// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1401c0198 FUN_1401c0198 body=689 status=ok
// SIG undefined FUN_1401c0198(void)

void FUN_1401c0198(char *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  
  if (*param_1 != '\x01') {
    return;
  }
  lVar10 = *(longlong *)(param_1 + 8);
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar10);
  }
  else if (lVar10 == 0) {
    return;
  }
  if ((param_3 == '\0') || (param_1[0x30] != '\x01')) goto LAB_1401c01e7;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
    uVar5 = FUN_140927942();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x20) = lVar6;
  }
  plVar9 = (longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if ((lVar6 == 0) || (*plVar9 == 0)) goto LAB_1401c01e7;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      goto LAB_1401c01e7;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar5,plVar9);
    *(longlong *)(param_1 + 0x28) = lVar6;
    if (lVar6 == 0) goto LAB_1401c01e7;
  }
  FUN_1417ffa7c(lVar10,&DAT_14cb1afa8,plVar9,1);
LAB_1401c01e7:
  if (((((*(int *)(param_2 + 0x1c) != 0) && (uVar8 = *(uint *)(param_2 + 0x18), -1 < (int)uVar8)) &&
       ((int)uVar8 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_2 + 0x1c))))) &&
     (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
      ((lVar6 = *plVar9, lVar6 != 0 && ((longlong)*(int *)(lVar6 + 0x498) != 0)))))) {
    iVar7 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar6 + 0x490) + lVar3) == lVar10) {
        uVar8 = -iVar7;
        if ((int)uVar8 < 0) {
          return;
        }
        if (*(int *)(param_2 + 0x40) <= (int)uVar8) {
          return;
        }
        uVar11 = 1 << ((byte)uVar8 & 0x1f);
        lVar10 = param_2 + 0x28;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          lVar10 = *(longlong *)(param_2 + 0x38);
        }
        uVar4 = (ulonglong)((uint)((ulonglong)lVar3 >> 8) & 0x7ffffff);
        if (param_3 == '\0') {
          uVar11 = ~uVar11 & *(uint *)(lVar10 + uVar4 * 4);
        }
        else {
          uVar11 = uVar11 | *(uint *)(lVar10 + uVar4 * 4);
        }
        *(uint *)(lVar10 + uVar4 * 4) = uVar11;
        if (*(int *)(param_2 + 0x1c) == 0) {
          return;
        }
        uVar11 = *(uint *)(param_2 + 0x18);
        if ((int)uVar11 < 0) {
          return;
        }
        if (DAT_14c9647dc <= (int)uVar11) {
          return;
        }
        plVar9 = (longlong *)
                 ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if (plVar9 == (longlong *)0x0) {
          return;
        }
        if ((int)plVar9[2] != *(int *)(param_2 + 0x1c)) {
          return;
        }
        if ((*(uint *)(plVar9 + 1) & 0x10200000) != 0) {
          return;
        }
        lVar10 = *plVar9;
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x498) <= (int)uVar8) {
            return;
          }
          plVar9 = *(longlong **)
                    (*(longlong *)(lVar10 + 0x490) + (ulonglong)(uVar8 & 0x7fffffff) * 8);
          if ((DAT_14c950c29 == 1) && (plVar9 != (longlong *)0x0)) {
            FUN_1456cec3c(plVar9);
          }
          else if (plVar9 == (longlong *)0x0) {
            return;
          }
          if ((char)plVar9[0x109] != '\0') {
            return;
          }
          *(undefined1 *)(plVar9 + 0x109) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001401c037a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0xa98))(plVar9,1);
          return;
        }
        return;
      }
      lVar3 = lVar3 + 8;
      iVar7 = iVar7 + -1;
    } while ((longlong)*(int *)(lVar6 + 0x498) * 8 != lVar3);
  }
  return;
}



// FUNCTION 1401c0458 FUN_1401c0458 body=89 status=ok
// SIG undefined FUN_1401c0458(void)

void FUN_1401c0458(longlong param_1,undefined8 param_2,__int64 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1401e7ce8();
  bifrost::telemetry::rowBuilder::vLong((rowBuilder *)**(undefined8 **)(param_1 + 0x38),param_3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c04b2 FUN_1401c04b2 body=38 status=ok
// SIG undefined FUN_1401c04b2(void)

undefined8 FUN_1401c04b2(undefined8 param_1,int param_2)

{
  FUN_1401c04d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401c04d8 FUN_1401c04d8 body=67 status=ok
// SIG undefined FUN_1401c04d8(void)

void FUN_1401c04d8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3cb4f0;
  if (param_1[9] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[9] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c051c(param_1);
  return;
}



// FUNCTION 1401c051c FUN_1401c051c body=190 status=ok
// SIG undefined FUN_1401c051c(void)

void FUN_1401c051c(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a38ce90;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1401c05da FUN_1401c05da body=54 status=ok
// SIG undefined FUN_1401c05da(void)

void FUN_1401c05da(longlong param_1)

{
  FUN_1401c0610();
  if (*(char *)(param_1 + 0xfa2) != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401c060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xaf0) + 0x68))(param_1 + 0xaf0);
  return;
}



// FUNCTION 1401c0610 FUN_1401c0610 body=375 status=ok
// SIG undefined FUN_1401c0610(void)

void FUN_1401c0610(longlong *param_1,float param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [36];
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_44 = param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_44);
    if ((DAT_14c761388 != 0) &&
       ((lVar3 = param_1[0x16], lVar3 != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
      uVar2 = FUN_14119d0a4(lVar3);
      FUN_140e65914(uVar2,param_1,*(undefined4 *)(lVar3 + 0x6f4));
    }
  }
  if (0 < (int)param_1[0x15b]) {
    FUN_14049898e(param_1);
    fVar4 = DAT_14c760f40;
    if (DAT_14c760f40 <= 0.0001) {
      fVar4 = 0.0001;
    }
    FUN_1448c248c(param_1,fVar4 * param_2);
    FUN_1448c1d8e(param_1,fVar4 * param_2);
    if (0 < (int)param_1[0x15b]) goto LAB_1401c0695;
  }
  pbVar1 = (byte *)param_1[0xc];
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 1) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x4b) != '\0') {
      uVar2 = *(undefined8 *)(pbVar1 + 0x28);
      FUN_1402eb48e(uVar2,param_1 + 8);
      *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
      FUN_1402eb97e(uVar2,param_1 + 8);
      if (*(char *)((longlong)param_1 + 0x4b) != '\0') goto LAB_1401c0695;
      pbVar1 = (byte *)param_1[0xc];
    }
    pbVar1[0x24] = 0;
    pbVar1[0x25] = 0;
    pbVar1[0x26] = 0x80;
    pbVar1[0x27] = 0xbf;
  }
LAB_1401c0695:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c0788 FUN_1401c0788 body=122 status=ok
// SIG undefined FUN_1401c0788(void)

undefined8 FUN_1401c0788(longlong param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)param_3 >> 0x20);
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 8) = 1;
  lVar4 = (longlong)param_2;
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) + lVar4 * 4);
  fVar5 = 0.0;
  uVar6 = 0;
  if (0.0 <= fVar1) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    fVar7 = (float)param_3 + *(float *)(lVar3 + lVar4 * 4);
    fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10) + lVar4 * 4);
    *(float *)(lVar3 + lVar4 * 4) = fVar7;
    if (fVar1 <= fVar7) {
      if (fVar2 < 1e-08) {
        return 0x3f800000;
      }
      fVar5 = (fVar7 - fVar1) / fVar2;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      uVar6 = uVar8;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
  }
  return CONCAT44(uVar6,fVar5);
}



// FUNCTION 1401c0802 FUN_1401c0802 body=265 status=ok
// SIG undefined FUN_1401c0802(void)

undefined8 * FUN_1401c0802(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = DAT_14c9968a8;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  uVar2 = FUN_1401c090c(param_2);
  param_1[5] = uVar2;
  param_1[6] = uVar2;
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[9] = DAT_14c9965f0;
  param_1[10] = DAT_14c9974a8;
  param_1[0xb] = 0;
  uVar2 = FUN_1448c2260(param_2);
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  local_30 = "InternalClusterParentTypeArray";
  local_28 = 0x1e;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  param_1[0xe] = param_2;
  param_1[0xf] = param_2;
  param_1[0x10] = (ulonglong)uVar1;
  param_1[0x11] = DAT_14c9974a8;
  param_1[0x12] = 0;
  uVar2 = FUN_1448c2260(param_2);
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar2;
  param_1[0x15] = param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c090c FUN_1401c090c body=265 status=ok
// SIG undefined FUN_1401c090c(void)

longlong FUN_1401c090c(longlong param_1,longlong param_2,longlong param_3)

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
      if (*(char *)(lVar1 + 0x10) == '\x06') {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1401c0a16 FUN_1401c0a16 body=329 status=ok
// SIG undefined FUN_1401c0a16(void)

longlong * FUN_1401c0a16(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  lVar4 = DAT_14caa9958;
  param_1[2] = DAT_14caa9958;
  lVar3 = DAT_14c9974a8;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar10 = (uint)lVar3 & 0xffff;
    uVar11 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    uVar11 = (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar6 >> 4);
    lVar8 = param_2 + 0x40;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      lVar8 = *(longlong *)(param_2 + 0x48);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_2 + 0x50) - 1U &
                             ((uVar11 >> 2) +
                              (int)((ulonglong)lVar3 >> 0x20) + (uint)lVar3 * 0x10000 + uVar10 +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4) + uVar11 * 0x40 +
                              0x9e3779b9 ^ uVar11)) * 4);
    if (iVar7 != -1) {
      lVar8 = *(longlong *)(param_2 + 8);
      lVar5 = 0;
      do {
        lVar9 = (longlong)iVar7 * 0x40;
        lVar1 = lVar8 + lVar9;
        if ((*(longlong *)(lVar8 + lVar9) == lVar4) && (*(longlong *)(lVar8 + 8 + lVar9) == lVar3))
        {
          lVar5 = 0;
          if ((lVar1 != 0) && ((char *)(lVar1 + 0x10) != (char *)0x0)) {
            if (*(char *)(lVar1 + 0x10) != '\t') goto LAB_1401c0b5b;
            FUN_1448c236a();
            lVar5 = *(longlong *)(lVar1 + 0x30);
            *(undefined1 *)(lVar5 + 8) = 1;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x38);
      } while (iVar7 != -1);
      goto LAB_1401c0b46;
    }
  }
LAB_1401c0b5b:
  lVar5 = 0;
LAB_1401c0b46:
  param_1[5] = lVar5;
  param_1[6] = lVar5;
  return param_1;
}



// FUNCTION 1401c0b60 FUN_1401c0b60 body=171 status=ok
// SIG undefined FUN_1401c0b60(void)

undefined8 * FUN_1401c0b60(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c996638) {
    FUN_144b3d300(&DAT_14c996638);
    if (DAT_14c996638 == -1) {
      FUN_1446ddc76(&DAT_14c996630,"Level",1);
      _Init_thread_footer(&DAT_14c996638);
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0xb8);
  param_2[1] = 0;
  param_2[2] = DAT_14c996630;
  param_2[3] = DAT_14c9974a8;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = FUN_1401c0c0c();
  param_2[6] = uVar1;
  return param_2;
}



// FUNCTION 1401c0c0c FUN_1401c0c0c body=248 status=ok
// SIG undefined FUN_1401c0c0c(void)

undefined8 FUN_1401c0c0c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = (uint)param_3;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
            (uVar4 >> 4) + (uVar2 << 0x13 | uVar2 & 0xffff);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar7 = (longlong)iVar6 * 0x40;
        lVar1 = lVar5 + lVar7;
        if ((*(longlong *)(lVar5 + lVar7) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar7) == param_3)) break;
        iVar6 = *(int *)(lVar1 + 0x38);
        if (iVar6 == -1) {
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
        return *(undefined8 *)(lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 1401c0d04 FUN_1401c0d04 body=75 status=ok
// SIG undefined FUN_1401c0d04(void)

void FUN_1401c0d04(undefined8 *param_1,longlong param_2)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_2 + 0xa8) = 1;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_1401c16de(*param_1,param_1 + 5);
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_1401c13dc(*param_1,param_1 + 3);
  return;
}



// FUNCTION 1401c0d50 FUN_1401c0d50 body=1065 status=ok
// SIG undefined FUN_1401c0d50(void)

longlong * FUN_1401c0d50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  lVar3 = DAT_14caa9938;
  param_1[2] = DAT_14caa9938;
  lVar4 = DAT_14c9974a8;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 0x3c)) {
LAB_1401c1167:
    lVar7 = 0;
  }
  else {
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar10 = (uint)lVar4 & 0xffff;
    uVar11 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    uVar11 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar5 >> 4);
    lVar6 = param_2 + 0x40;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x48);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_2 + 0x50) - 1U &
                             ((uVar11 >> 2) +
                              (int)((ulonglong)lVar4 >> 0x20) + (uint)lVar4 * 0x10000 + uVar10 +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4) + uVar11 * 0x40 +
                              0x9e3779b9 ^ uVar11)) * 4);
    if (iVar8 == -1) goto LAB_1401c1167;
    lVar6 = *(longlong *)(param_2 + 8);
    lVar7 = 0;
    do {
      lVar9 = (longlong)iVar8 * 0x40;
      lVar1 = lVar6 + lVar9;
      if ((*(longlong *)(lVar6 + lVar9) == lVar3) && (*(longlong *)(lVar6 + 8 + lVar9) == lVar4)) {
        lVar7 = 0;
        if ((lVar1 != 0) && ((char *)(lVar1 + 0x10) != (char *)0x0)) {
          if (*(char *)(lVar1 + 0x10) != '\t') goto LAB_1401c1167;
          FUN_1448c236a();
          lVar7 = *(longlong *)(lVar1 + 0x30);
          *(undefined1 *)(lVar7 + 8) = 1;
          lVar4 = DAT_14c9974a8;
        }
        break;
      }
      iVar8 = *(int *)(lVar1 + 0x38);
    } while (iVar8 != -1);
  }
  param_1[5] = lVar7;
  param_1[6] = lVar7;
  param_1[7] = param_2;
  param_1[8] = param_2;
  lVar3 = DAT_14caa9940;
  param_1[9] = DAT_14caa9940;
  param_1[10] = lVar4;
  param_1[0xb] = 0;
  if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 0x3c)) {
LAB_1401c116e:
    lVar7 = 0;
  }
  else {
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar10 = (uint)lVar4 & 0xffff;
    uVar11 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    uVar11 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar5 >> 4);
    lVar6 = param_2 + 0x40;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x48);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_2 + 0x50) - 1U &
                             ((uVar11 >> 2) +
                              (int)((ulonglong)lVar4 >> 0x20) + (uint)lVar4 * 0x10000 + uVar10 +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4) + uVar11 * 0x40 +
                              0x9e3779b9 ^ uVar11)) * 4);
    if (iVar8 == -1) goto LAB_1401c116e;
    lVar6 = *(longlong *)(param_2 + 8);
    lVar7 = 0;
    do {
      lVar9 = (longlong)iVar8 * 0x40;
      lVar1 = lVar6 + lVar9;
      if ((*(longlong *)(lVar6 + lVar9) == lVar3) && (*(longlong *)(lVar6 + 8 + lVar9) == lVar4)) {
        lVar7 = 0;
        if ((lVar1 != 0) && ((char *)(lVar1 + 0x10) != (char *)0x0)) {
          if (*(char *)(lVar1 + 0x10) != '\t') goto LAB_1401c116e;
          FUN_1448c236a();
          lVar7 = *(longlong *)(lVar1 + 0x30);
          *(undefined1 *)(lVar7 + 8) = 1;
          lVar4 = DAT_14c9974a8;
        }
        break;
      }
      iVar8 = *(int *)(lVar1 + 0x38);
    } while (iVar8 != -1);
  }
  param_1[0xc] = lVar7;
  param_1[0xd] = lVar7;
  param_1[0xe] = param_2;
  param_1[0xf] = param_2;
  lVar3 = DAT_14caa9948;
  param_1[0x10] = DAT_14caa9948;
  param_1[0x11] = lVar4;
  param_1[0x12] = 0;
  if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar10 = (uint)lVar4 & 0xffff;
    uVar11 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    uVar11 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar5 >> 4);
    lVar6 = param_2 + 0x40;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x48);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_2 + 0x50) - 1U &
                             ((uVar11 >> 2) +
                              (int)((ulonglong)lVar4 >> 0x20) + (uint)lVar4 * 0x10000 + uVar10 +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4) + uVar11 * 0x40 +
                              0x9e3779b9 ^ uVar11)) * 4);
    if (iVar8 != -1) {
      lVar6 = *(longlong *)(param_2 + 8);
      lVar7 = 0;
      do {
        lVar9 = (longlong)iVar8 * 0x40;
        lVar1 = lVar6 + lVar9;
        if ((*(longlong *)(lVar6 + lVar9) == lVar3) && (*(longlong *)(lVar6 + 8 + lVar9) == lVar4))
        {
          lVar7 = 0;
          if ((lVar1 != 0) && ((char *)(lVar1 + 0x10) != (char *)0x0)) {
            if (*(char *)(lVar1 + 0x10) != '\t') goto LAB_1401c1175;
            FUN_1448c236a();
            lVar7 = *(longlong *)(lVar1 + 0x30);
            *(undefined1 *)(lVar7 + 8) = 1;
            lVar4 = DAT_14c9974a8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x38);
      } while (iVar8 != -1);
      goto LAB_1401c1108;
    }
  }
LAB_1401c1175:
  lVar7 = 0;
LAB_1401c1108:
  param_1[0x13] = lVar7;
  param_1[0x14] = lVar7;
  param_1[0x15] = param_2;
  param_1[0x16] = param_2;
  param_1[0x17] = DAT_14caa9950;
  param_1[0x18] = lVar4;
  param_1[0x19] = 0;
  lVar4 = FUN_1401c117a(param_2);
  param_1[0x1a] = lVar4;
  param_1[0x1b] = lVar4;
  return param_1;
}



// FUNCTION 1401c117a FUN_1401c117a body=265 status=ok
// SIG undefined FUN_1401c117a(void)

longlong FUN_1401c117a(longlong param_1,longlong param_2,longlong param_3)

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
      if (*(char *)(lVar1 + 0x10) == '\"') {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1401c1284 FUN_1401c1284 body=101 status=ok
// SIG undefined FUN_1401c1284(void)

void FUN_1401c1284(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1401c17c0(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 1401c12ea FUN_1401c12ea body=241 status=ok
// SIG undefined FUN_1401c12ea(void)

void FUN_1401c12ea(longlong param_1,uint *param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = 0xffffffff;
  if (((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x448))) &&
     (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484))) {
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x440) + (ulonglong)param_3 * 8);
    uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar6 = param_1 + 0x488;
    if (*(longlong *)(param_1 + 0x490) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x490);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x498) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x450) + (longlong)iVar5 * 0x18);
        if (*puVar1 == uVar2) {
          if (((puVar1 != (ulonglong *)0x0) && (puVar1 != (ulonglong *)&DAT_fffffffffffffff8)) &&
             (uVar4 = *(uint *)((longlong)puVar1 + 0xc), uVar4 != 0xffffffff)) {
            uVar3 = 0xffffffff;
            if (-1 < (int)uVar4) {
              uVar3 = uVar4 | 0x80000000;
            }
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 1401c13dc FUN_1401c13dc body=225 status=ok
// SIG undefined FUN_1401c13dc(void)

void FUN_1401c13dc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
    *puVar5 = &PTR_LAB_149f6d4a0;
    puVar5[1] = param_1;
    puVar5[2] = lVar1;
    puVar5[3] = uVar2;
    puVar5[4] = uVar3;
    pcVar6 = FUN_142a25f5e;
    if (puVar5 + 1 == (longlong *)0x0) {
      pcVar6 = (code *)0x0;
    }
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined2 *)(puVar4 + 8) = 1;
    *puVar4 = &PTR_FUN_149f45dc0;
    puVar4[10] = pcVar6;
    puVar4[0xc] = puVar5;
    puVar4[0x12] = 0;
    puVar4[0x14] = 0;
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar4);
    return;
  }
  return;
}



// FUNCTION 1401c14be FUN_1401c14be body=542 status=ok
// SIG undefined FUN_1401c14be(void)

void FUN_1401c14be(longlong param_1,uint param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 4) == '\x01') && ((int)param_3[1] == *(int *)(param_1 + 0x48))) {
    uVar7 = 1 << ((byte)param_2 & 0x1f);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x30;
    }
    uVar6 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar6 = param_2;
    }
    lVar9 = (longlong)((int)uVar6 >> 5);
    if ((*(uint *)(lVar5 + lVar9 * 4) >> (param_2 & 0x1f) & 1) == 0) {
      iVar8 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar8 + 1U) {
        FUN_1446f48e2(param_4,iVar8);
      }
      *(uint *)(*param_4 + (longlong)iVar8 * 4) = param_2;
      *(undefined1 *)(*(longlong *)(param_5 + 0x28) + 8) = 1;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_5 + 0x28) + 0x10) + (longlong)(int)param_2 * 4) =
           0x3f800000;
      lVar5 = param_1 + 0x30;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x40);
      }
      puVar2 = (uint *)(lVar5 + lVar9 * 4);
      *puVar2 = *puVar2 | uVar7;
      lVar5 = param_1 + 0x10;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x20);
      }
      if ((*(uint *)(lVar5 + lVar9 * 4) & uVar7) != 0) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
      }
      lVar5 = (longlong)(int)param_2 * 0x50;
      plVar1 = (longlong *)(*param_3 + lVar5);
      lVar5 = *param_3 + lVar5;
      lVar9 = lVar5 + 0x10;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar8 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar5 + 0x28) != 0) {
        FUN_1449c0562(&local_68);
        iVar8 = (int)plVar1[5];
      }
      local_78 = local_58;
      uVar3 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar4 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar8) || (local_78 = uVar3, local_60 != lVar9)) {
        do {
          do {
            local_78 = uVar3;
            local_98 = param_5;
            FUN_1401c14be(param_1,*(undefined4 *)(*local_90 + (longlong)iVar4 * 0xc),param_3,param_4
                         );
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            iVar4 = local_78._4_4_;
            uVar3 = local_78;
          } while (local_78._4_4_ != iVar8);
        } while ((local_80 != lVar9) || (local_90 != plVar1));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c16de FUN_1401c16de body=225 status=ok
// SIG undefined FUN_1401c16de(void)

void FUN_1401c16de(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
    *puVar5 = &PTR_LAB_149f6d500;
    puVar5[1] = param_1;
    puVar5[2] = lVar1;
    puVar5[3] = uVar2;
    puVar5[4] = uVar3;
    pcVar6 = FUN_142a26c26;
    if (puVar5 + 1 == (longlong *)0x0) {
      pcVar6 = (code *)0x0;
    }
    *(undefined2 *)(puVar4 + 1) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined2 *)(puVar4 + 8) = 1;
    *puVar4 = &PTR_FUN_149f45dc0;
    puVar4[10] = pcVar6;
    puVar4[0xc] = puVar5;
    puVar4[0x12] = 0;
    puVar4[0x14] = 0;
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar4);
    return;
  }
  return;
}



// FUNCTION 1401c17c0 FUN_1401c17c0 body=353 status=ok
// SIG undefined FUN_1401c17c0(void)

void FUN_1401c17c0(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401c1845;
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
LAB_1401c1845:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 1401c1922 FUN_1401c1922 body=1479 status=ok
// SIG undefined FUN_1401c1922(void)

void FUN_1401c1922(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  float *pfVar4;
  longlong *plVar5;
  ulonglong uVar6;
  void *_Src;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  void *local_188;
  undefined8 uStack_180;
  longlong local_148;
  void *local_140;
  int local_138;
  undefined1 local_110 [40];
  longlong local_e8;
  longlong local_e0;
  longlong local_b0;
  longlong local_a8;
  longlong local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *(undefined4 *)(param_1 + -0x338) = 0;
  if (*(int *)(param_1 + -0x334) != 0) {
    FUN_1407d9874(param_1 + -0x340,0);
  }
  if ((((*(longlong *)(param_1 + -0x490) != 0) && (*(longlong *)(param_1 + -0xa48) != 0)) &&
      ((*(byte *)(*(longlong *)(param_1 + -0xa48) + 0x65) & 1) != 0)) &&
     (*(char *)(param_1 + 0x4b3) == '\0')) {
    lVar14 = *(longlong *)(param_1 + -0xb0);
    if (lVar14 == 0) {
      (**(code **)(*(longlong *)(param_1 + -0xaf0) + 0x348))(param_1 + -0xaf0);
      lVar14 = *(longlong *)(param_1 + -0xb0);
    }
    if (((lVar14 != 0) && (lVar15 = *(longlong *)(param_1 + -0xa8), lVar15 != 0)) &&
       ((-1 < *(char *)(param_1 + -0xa54) || (*(char *)(lVar14 + 0x318) != '\x02')))) {
      if ((*(byte *)(lVar14 + 0x319) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x4b2) = 1;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1d8);
      }
      FUN_14049898e(param_1 + -0xaf0);
      FUN_1448a161e(local_110,lVar15);
      if (((local_e0 == 0) || (local_a8 == 0)) || (local_70 == 0)) {
        FUN_1401c0a16(&local_148,lVar15);
        local_188 = (void *)((ulonglong)local_188 & 0xffffffff00000000);
        FUN_1406f094e(&local_148,&local_188,1,0);
        FUN_1449bd3ca(&local_188,lVar15);
        FUN_140569e92(&local_188,&DAT_14c996900,1,0);
        FUN_1401c1f10(local_110);
        FUN_1401c1f4e(local_110,&local_188);
      }
      local_1a0 = *(longlong *)(*(longlong *)(param_1 + -0x490) + 0x218);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + -0x490) + 0x220);
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
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      local_188 = (void *)0x0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      if ((longlong)*(int *)(lVar14 + 0x448) != 0) {
        puVar12 = *(ulonglong **)(lVar14 + 0x440);
        puVar16 = puVar12 + *(int *)(lVar14 + 0x448);
        local_1a8 = param_1;
        do {
          if (((longlong *)*puVar12 != (longlong *)0x0) &&
             (cVar7 = (**(code **)(*(longlong *)*puVar12 + 0x10))(), cVar7 != '\0')) {
            iVar8 = -1;
            if (*(int *)(lVar14 + 0x458) != *(int *)(lVar14 + 0x484)) {
              uVar6 = *puVar12;
              uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              lVar13 = *(longlong *)(lVar14 + 0x490);
              if (*(longlong *)(lVar14 + 0x490) == 0) {
                lVar13 = lVar14 + 0x488;
              }
              iVar10 = *(int *)(lVar13 + (ulonglong)
                                         (*(int *)(lVar14 + 0x498) - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                                         4);
              if (iVar10 != -1) {
                do {
                  puVar3 = (ulonglong *)(*(longlong *)(lVar14 + 0x450) + (longlong)iVar10 * 0x18);
                  if (*puVar3 == uVar6) {
                    if ((((puVar3 != (ulonglong *)0x0) && (puVar3 + 1 != (ulonglong *)0x0)) &&
                        (iVar10 = (int)puVar3[1], iVar10 != -1)) && (iVar8 = iVar10, iVar10 < 0)) {
                      iVar8 = -1;
                    }
                    break;
                  }
                  iVar10 = (int)puVar3[2];
                } while (iVar10 != -1);
              }
            }
            lVar13 = (longlong)iVar8;
            cVar7 = *(char *)(*(longlong *)(lVar15 + 0x160) + lVar13);
            if (cVar7 != '\x03') {
              if (cVar7 == '\x02') {
                local_1b0 = (longlong)(int)uStack_180;
                uVar9 = (int)uStack_180 + 1;
                uStack_180 = CONCAT44(uStack_180._4_4_,uVar9);
                if (uStack_180._4_4_ < uVar9) {
                  FUN_1446f48e2(&local_188,local_1b0);
                }
                *(int *)((longlong)local_188 + local_1b0 * 4) = iVar8;
              }
              if (*(int *)(*(longlong *)(local_1a0 + 0x140) + 0x34 + lVar13 * 0x50) <
                  *(int *)(*(longlong *)(local_1a0 + 0x140) + 8 + lVar13 * 0x50)) {
                lVar11 = (longlong)*(int *)(local_1a8 + 0x4a8);
                uVar9 = *(int *)(local_1a8 + 0x4a8) + 1;
                *(uint *)(local_1a8 + 0x4a8) = uVar9;
                if (*(uint *)(local_1a8 + 0x4ac) < uVar9) {
                  local_1b0 = lVar11;
                  FUN_1446f48e2((longlong *)(param_1 + 0x4a0),lVar11);
                  lVar11 = local_1b0;
                }
                *(int *)(*(longlong *)(param_1 + 0x4a0) + lVar11 * 4) = iVar8;
                lVar11 = (longlong)(int)uStack_190;
                uVar9 = (int)uStack_190 + 1;
                uStack_190 = CONCAT44(uStack_190._4_4_,uVar9);
                if (uStack_190._4_4_ < uVar9) {
                  local_1b0 = lVar11;
                  FUN_1401c17c0(&local_198,lVar11);
                  lVar11 = local_1b0;
                }
                *(int *)(local_198 + lVar11 * 4) = iVar8;
              }
              if (local_a8 != 0) {
                *(undefined1 *)(local_b0 + 8) = 1;
                lVar11 = *(longlong *)(local_b0 + 0x10);
                pfVar4 = (float *)(lVar11 + lVar13 * 4);
                if ((*pfVar4 <= 0.0 && *pfVar4 != 0.0) && (local_e0 != 0)) {
                  *(undefined1 *)(local_e8 + 8) = 1;
                  *(undefined4 *)(*(longlong *)(local_e8 + 0x10) + lVar13 * 4) = 0;
                }
                *(undefined4 *)(lVar11 + lVar13 * 4) = 0;
              }
              if (local_70 != 0) {
                *(undefined1 *)(local_78 + 8) = 1;
                *(undefined4 *)(*(longlong *)(local_78 + 0x10) + lVar13 * 4) = 0x3c23d70a;
              }
            }
          }
          _Src = local_188;
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar16);
        lVar15 = (longlong)(int)uStack_180;
        param_1 = local_1a8;
        if ((0 < lVar15) && (lVar13 = *(longlong *)(lVar14 + 8), lVar13 != 0)) {
          local_140 = (void *)0x0;
          local_138 = (int)uStack_180;
          local_148 = lVar14;
          FUN_144a06ca8(&local_140,uStack_180 & 0xffffffff,0);
          memcpy(local_140,_Src,lVar15 << 2);
          FUN_1438a11a8(lVar13,&local_148);
          param_1 = local_1a8;
          if (local_140 != (void *)0x0) {
            FUN_1400020a8();
            param_1 = local_1a8;
          }
        }
      }
      if (0 < (int)uStack_190) {
        FUN_1401c16de(lVar14,&local_198);
      }
      *(undefined2 *)(param_1 + 0x4b2) = 0x100;
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_188 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c1f10 FUN_1401c1f10 body=62 status=ok
// SIG undefined FUN_1401c1f10(void)

void FUN_1401c1f10(longlong param_1)

{
  FUN_1406f094e(param_1,&DAT_14a4109ec,1,0);
  FUN_140498b54(param_1 + 0x38,1,0);
  FUN_140498b54(param_1 + 0x70,1,0);
  return;
}



// FUNCTION 1401c1f4e FUN_1401c1f4e body=746 status=ok
// SIG undefined FUN_1401c1f4e(void)

void FUN_1401c1f4e(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
     (*(longlong *)(param_1 + 0xa0) != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x28);
    if ((lVar12 != 0) && (0 < *(int *)(lVar12 + 0x18))) {
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar12 + 0x18));
    }
    uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xb8) + 200);
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = 1;
    plVar3 = *(longlong **)(param_1 + 0x60);
    iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3);
    if (0 < iVar6) {
      lVar8 = 0;
      lVar12 = 0;
      do {
        pfVar9 = (float *)&DAT_14c996900;
        pfVar7 = (float *)&DAT_14c996904;
        if (*(longlong *)(param_2 + 0x30) != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10);
          pfVar7 = (float *)(lVar4 + lVar8 + 4);
          pfVar9 = (float *)(lVar4 + lVar8);
        }
        if (0.0 <= *pfVar9) {
          fVar14 = ABS(*pfVar9);
          fVar1 = fVar14;
          if (fVar14 <= ABS(*pfVar7)) {
            fVar1 = ABS(*pfVar7);
          }
          uVar11 = uVar11 * 0xbb38435 + 0x3619636b;
          fVar14 = ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) * (fVar1 - fVar14) + fVar14;
        }
        else {
          fVar14 = -1.0;
        }
        *(float *)(plVar3[2] + lVar12 * 4) = fVar14;
        lVar12 = lVar12 + 1;
        iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3);
        lVar8 = lVar8 + 0x10;
      } while (lVar12 < iVar6);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 8) = 1;
    lVar12 = *(longlong *)(param_1 + 0x98);
    iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3);
    if (0 < iVar6) {
      lVar8 = 0;
      uVar13 = 0;
      do {
        pfVar9 = (float *)&DAT_14c99690c;
        pfVar10 = (float *)&DAT_14c996908;
        pfVar7 = (float *)&DAT_14c996900;
        if (*(longlong *)(param_2 + 0x30) != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10);
          pfVar7 = (float *)(lVar4 + lVar8);
          pfVar10 = (float *)(lVar4 + lVar8 + 8);
          pfVar9 = (float *)(lVar4 + lVar8 + 0xc);
        }
        fVar1 = *pfVar7;
        fVar14 = *pfVar10;
        fVar2 = *pfVar9;
        cVar5 = FUN_1448c2a90(*(undefined8 *)(param_1 + 0xa8),uVar13 & 0xffffffff);
        if (((cVar5 == '\0') || (fVar1 < 0.0)) || (0.0 <= fVar14)) {
          fVar14 = ABS(fVar14);
          fVar1 = fVar14;
          if (fVar14 <= ABS(fVar2)) {
            fVar1 = ABS(fVar2);
          }
          uVar11 = uVar11 * 0xbb38435 + 0x3619636b;
          fVar14 = ((float)(uVar11 >> 9 | 0x3f800000) + -1.0) * (fVar1 - fVar14) + fVar14;
        }
        else {
          fVar14 = -1.0;
        }
        *(float *)(*(longlong *)(lVar12 + 0x10) + uVar13 * 4) = fVar14;
        uVar13 = uVar13 + 1;
        iVar6 = (**(code **)(*plVar3 + 0x60))(plVar3);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)uVar13 < (longlong)iVar6);
    }
  }
  return;
}



// FUNCTION 1401c2238 FUN_1401c2238 body=66 status=ok
// SIG undefined FUN_1401c2238(void)

int FUN_1401c2238(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bb1c1c(param_1,iVar1);
  }
  FUN_1401c227a((longlong)iVar1 * 0x50 + *param_1,1);
  return iVar1;
}



// FUNCTION 1401c227a FUN_1401c227a body=67 status=ok
// SIG undefined FUN_1401c227a(void)

void FUN_1401c227a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1401c22be(param_1);
    *param_1 = &PTR_FUN_14a9c9e70;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 1401c22be FUN_1401c22be body=270 status=ok
// SIG undefined FUN_1401c22be(void)

undefined8 * FUN_1401c22be(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  *param_1 = &PTR_LAB_14a9ceb10;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0xffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined4 *)((longlong)param_1 + 0x24) = 5;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffffc1 | 0x20;
  param_1[6] = 0;
  param_1[7] = 0;
  if (DAT_14caea540 == 0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.StencilForLODDither",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14caea540 = 0;
    }
    else {
      DAT_14caea540 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
  }
  lVar2 = DAT_14caea540;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) & 0xffffffbe | (uint)(*(int *)(lVar2 + uVar6 * 4) != 0);
  return param_1;
}



// FUNCTION 1401c23cc FUN_1401c23cc body=120 status=ok
// SIG undefined FUN_1401c23cc(void)

undefined8 * FUN_1401c23cc(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d29c) {
    FUN_144b3d300(&DAT_14cb0d29c);
    if (DAT_14cb0d29c == -1) {
      FUN_1446f470e(&DAT_14cb0d294,L"MaxTickRateHandler",1);
      _Init_thread_footer(&DAT_14cb0d29c);
    }
  }
  *param_1 = DAT_14cb0d294;
  return param_1;
}



// FUNCTION 1401c2444 FUN_1401c2444 body=133 status=ok
// SIG undefined FUN_1401c2444(void)

longlong * FUN_1401c2444(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1401c24ca(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1401c24ca FUN_1401c24ca body=353 status=ok
// SIG undefined FUN_1401c24ca(void)

void FUN_1401c24ca(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401c254f;
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
LAB_1401c254f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401c262c FUN_1401c262c body=110 status=ok
// SIG undefined FUN_1401c262c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1401c262c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_2668 [32];
  undefined1 local_2648 [9768];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2668;
  cVar1 = FUN_140242cd6();
  if (cVar1 != '\0') {
    FUN_14490a810(local_2648);
    FUN_140242e09(local_2648);
    *(undefined1 *)(param_1 + 0x50) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_2668) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c269b FUN_1401c269b body=356 status=ok
// SIG undefined FUN_1401c269b(void)

bool FUN_1401c269b(longlong *param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ushort local_22;
  ulonglong local_20;
  code *pcVar3;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar3 = *(code **)(*param_1 + 0x270);
  plVar4 = param_1;
  if (pcVar3 == (code *)&LAB_1447f82f4) {
    plVar4 = (longlong *)param_1[9];
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
      pcVar3 = *(code **)(*plVar4 + 0x408);
      if (pcVar3 == (code *)&LAB_14470b702) {
        bVar1 = *(byte *)((longlong)plVar4 + 0x129);
        if (bVar1 == 1) {
          bVar1 = ~*(byte *)((longlong)plVar4 + 0x1d6) & 1;
        }
        uVar2 = (uint)bVar1;
        goto LAB_1401c272b;
      }
    }
    else {
      pcVar3 = *(code **)(*plVar4 + 0x408);
      if (pcVar3 == (code *)&LAB_14497e176) {
        uVar2 = (uint)*(byte *)(plVar4 + 0x2b);
        goto LAB_1401c272b;
      }
    }
  }
  uVar2 = (*pcVar3)(plVar4);
LAB_1401c272b:
  if (param_2 == '\x01' && uVar2 < 2) {
    (**(code **)(*param_1 + 0x288))(param_1,&local_22);
    local_38 = (undefined8 *)0x0;
    local_30 = 2;
    bVar6 = false;
    FUN_14470b5ae(&local_38,2);
    *local_38 = 0x400000001;
    if ((longlong)local_30 != 0) {
      lVar5 = 0;
      do {
        bVar6 = (local_22 >> (*(uint *)((longlong)local_38 + lVar5) & 0x1f) & 1) != 0;
        if (bVar6) break;
        bVar7 = (longlong)local_30 * 4 + -4 != lVar5;
        lVar5 = lVar5 + 4;
      } while (bVar7);
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    bVar6 = false;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1401c2800 FUN_1401c2800 body=300 status=ok
// SIG undefined FUN_1401c2800(void)

void FUN_1401c2800(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d0;
  undefined8 local_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_c8,0,0x90);
  local_d0 = &DAT_14c9ac6b8;
  FUN_1401c292e();
  local_c8[DAT_14c9ac518] = &DAT_14c9ac4d0;
  auStack_68[DAT_14c9ac518] = 0;
  FUN_1401c2a4a();
  local_c8[DAT_14c9ac640] = &DAT_14c9ac5f8;
  auStack_68[DAT_14c9ac640] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  cVar1 = FUN_14007744c(param_1,&local_d0,param_2);
  if (cVar1 != '\0') {
    if (local_138 != 0) {
      *param_3 = local_138;
      param_3[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_4 = lStack_120;
      param_4[1] = local_148;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c292e FUN_1401c292e body=284 status=ok
// SIG undefined FUN_1401c292e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401c292e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ac578) {
    FUN_144b3d300(&DAT_14c9ac578);
    if (DAT_14c9ac578 == -1) {
      FUN_1456d8866();
      FUN_140db5666(&DAT_14c9ac4d0,2,&DAT_14c9ac468,L"FAnisotropyVS",
                    L"/Engine/Private/AnisotropyPassShader.usf",L"MainVertexShader",0,1,
                    FUN_14712ac3c,FUN_14712ac14,&LAB_141746494,&LAB_14712ac10,&LAB_14712ac0c,
                    &LAB_14712ac08,0x108,0);
      _DAT_14c9ac4d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7be36);
      _Init_thread_footer(&DAT_14c9ac578);
    }
  }
  return &DAT_14c9ac4d0;
}



// FUNCTION 1401c2a4a FUN_1401c2a4a body=284 status=ok
// SIG undefined FUN_1401c2a4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401c2a4a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ac6a0) {
    FUN_144b3d300(&DAT_14c9ac6a0);
    if (DAT_14c9ac6a0 == -1) {
      FUN_1456d89b0();
      FUN_140db5666(&DAT_14c9ac5f8,2,&DAT_14c9ac590,L"FAnisotropyPS",
                    L"/Engine/Private/AnisotropyPassShader.usf",L"MainPixelShader",3,1,FUN_14712acee
                    ,FUN_14712acc6,&LAB_1407ee288,&LAB_14712acc2,&LAB_14712ac0c,&LAB_14712ac08,0x108
                    ,0);
      _DAT_14c9ac5f8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7be42);
      _Init_thread_footer(&DAT_14c9ac6a0);
    }
  }
  return &DAT_14c9ac5f8;
}



// FUNCTION 1401c2b66 FUN_1401c2b66 body=171 status=ok
// SIG undefined FUN_1401c2b66(void)

longlong * FUN_1401c2b66(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = param_1[0xf1];
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    iVar4 = *(int *)(lVar2 + 0x300);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar4 != 0) {
      FUN_14071ff8a(param_2);
      if (0 < *(int *)(param_1[0xf1] + 0x300)) {
        iVar4 = 0;
        do {
          uVar3 = (**(code **)(*param_1 + 0x10))(param_1,iVar4);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14075a758(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1[0xf1] + 0x300));
      }
    }
  }
  return param_2;
}



// FUNCTION 1401c2c4c FUN_1401c2c4c body=81 status=ok
// SIG undefined FUN_1401c2c4c(void)

undefined4 * FUN_1401c2c4c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  do {
    puVar2 = (undefined4 *)FUN_1401c2c9e(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      *param_2 = *puVar2;
      return param_2;
    }
    LOCK();
    bVar3 = *(char *)(param_1 + 0x28) == '\0';
    if (bVar3) {
      *(char *)(param_1 + 0x28) = '\x01';
    }
    UNLOCK();
  } while (!bVar3);
  uVar1 = FUN_1401c2e90(param_1,1);
  *param_2 = uVar1;
  do {
    LOCK();
    bVar3 = *(char *)(param_1 + 0x28) == '\x01';
    if (bVar3) {
      *(char *)(param_1 + 0x28) = '\0';
    }
    UNLOCK();
  } while (!bVar3);
  return param_2;
}



// FUNCTION 1401c2c9e FUN_1401c2c9e body=498 status=ok
// SIG undefined FUN_1401c2c9e(void)

undefined8 FUN_1401c2c9e(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  
  do {
    while( true ) {
      do {
        uVar5 = *param_1;
        uVar4 = param_1[1];
        uVar6 = (uint)uVar5;
        puVar8 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar8 = (ulonglong *)
                   ((ulonglong)((uVar6 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar6 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar1 = *puVar8;
      } while (uVar5 != *param_1);
      uVar7 = (uint)uVar1;
      if ((((uint)uVar4 ^ uVar6) & 0x3ffffff) != 0) break;
      if ((uVar1 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar4 == param_1[1]) {
        param_1[1] = uVar5 | uVar7 & 0x3ffffff;
      }
      UNLOCK();
    }
    if ((uVar1 & 0x3ffffff) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)((uVar7 & 0x3fff) * 0x18) +
              *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar7 & 0x3ffffff) >> 0xe) * 8);
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar5 == uVar1) {
      *param_1 = uVar4 | uVar7 & 0x3ffffff;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  FUN_1447d080c(uVar6 & 0x3ffffff);
  return uVar2;
}



// FUNCTION 1401c2e90 FUN_1401c2e90 body=174 status=ok
// SIG undefined FUN_1401c2e90(void)

uint FUN_1401c2e90(longlong param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  uVar4 = 0;
  puVar3 = (uint *)FUN_14001cc68(0x1000,0x10);
  memset(puVar3 + 1,(int)CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff),0xffc);
  uVar5 = *(int *)(param_1 + 0x10) << 10;
  *puVar3 = uVar5;
  uVar6 = (ulonglong)param_2;
  puVar7 = puVar3 + uVar6;
  do {
    *puVar7 = uVar5 | (uint)uVar6;
    FUN_140178320(param_1 + 0x18,puVar7);
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (uVar6 != 0x400);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1456d8afa((longlong *)(param_1 + 8),iVar1);
  }
  *(uint **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = puVar3;
  uVar2 = 0xffffffff;
  if (param_2 != 0) {
    uVar2 = uVar5;
  }
  return uVar2;
}



// FUNCTION 1401c2f3e FUN_1401c2f3e body=156 status=ok
// SIG undefined FUN_1401c2f3e(void)

void FUN_1401c2f3e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(uint *)(param_1 + 8);
  uVar1 = *(undefined4 *)*param_2;
  if ((uVar3 & 3) == 0) {
    local_30 = &local_24;
    local_38 = uVar3 >> 3;
    local_24 = uVar1;
    FUN_1401c2fdc(param_1 + 0x80,CONCAT71((int7)((ulonglong)local_30 >> 8),1),param_1 + 0xc,
                  *(undefined8 *)(param_1 + 0x48));
  }
  else {
    if ((uVar3 & 4) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      if (lVar2 != 0) {
        FUN_144aa4484(lVar2);
        FUN_1400020a8(lVar2);
        uVar3 = *(uint *)(param_1 + 8);
      }
      *(uint *)(param_1 + 8) = uVar3 | 4;
    }
    *(undefined4 *)(param_1 + 0x78) = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c2fdc FUN_1401c2fdc body=199 status=ok
// SIG undefined FUN_1401c2fdc(void)

void FUN_1401c2fdc(longlong *param_1,char param_2,uint *param_3,longlong param_4,undefined4 param_5,
                  undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_14488054e(param_1,1);
    iVar2 = (int)param_1[1];
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
  }
  else {
    iVar2 = 0;
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_1417255d0(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = *param_6;
  if (((param_2 != '\0') && (uVar1 = *param_3, *param_3 = uVar1 | 2, param_4 != 0 && uVar1 == 0)) &&
     (*(longlong *)(param_4 + 8) != 0)) {
    FUN_144821112(*(longlong *)(param_4 + 8) + 0x70,param_4,param_5);
    return;
  }
  return;
}



// FUNCTION 1401c30a4 FUN_1401c30a4 body=32 status=ok
// SIG undefined FUN_1401c30a4(void)

void FUN_1401c30a4(undefined8 param_1,undefined4 param_2)

{
  FUN_1401c30c4();
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 1401c30c4 FUN_1401c30c4 body=338 status=ok
// SIG undefined FUN_1401c30c4(void)

void FUN_1401c30c4(longlong *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[0xf7] != 0) {
    lVar6 = param_1[0x16];
    if ((lVar6 == 0) && (lVar6 = FUN_1448abda6(), lVar6 == 0)) {
      return;
    }
    if ((*(byte *)(lVar6 + 0x155) & 0x20) == 0) {
      lVar6 = param_1[0xf6];
      param_1[0xf6] = 0;
      iVar1 = (int)param_1[0xf7];
      param_1[0xf7] = 0;
      *(undefined1 *)(param_1 + 0xf8) = 0;
      if ((longlong)iVar1 != 0) {
        lVar8 = 0;
        do {
          iVar2 = *(int *)(lVar6 + 4 + lVar8);
          if ((((iVar2 != 0) && (uVar3 = *(uint *)(lVar6 + lVar8), -1 < (int)uVar3)) &&
              ((int)uVar3 < DAT_14c9647dc)) &&
             (((plVar7 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar2)) &&
              (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
            (**(code **)(*param_1 + 0xa40))(param_1);
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)iVar1 << 4 != lVar8);
      }
      (**(code **)(*param_1 + 0xa30))(param_1);
      uVar5 = (**(code **)(*param_1 + 0xa58))(param_1);
      cVar4 = (**(code **)(*param_1 + 0x3b8))(param_1);
      if ((char)uVar5 != cVar4) {
        (**(code **)(*param_1 + 0x3b0))(param_1,uVar5);
      }
      FUN_1447f69b6(param_1 + 0xca);
      FUN_14028f8e1(lVar6,iVar1);
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401c3216 FUN_1401c3216 body=604 status=ok
// SIG undefined FUN_1401c3216(void)

void FUN_1401c3216(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_2 != 2) && (param_2 != 4)) &&
     (iVar6 = DAT_14c999a84 + 1, local_58 = param_1, iVar6 != 0)) {
    lVar9 = 0;
    do {
      if (*(longlong *)((longlong)&DAT_14c999ae0 + lVar9) != 0) {
        local_50 = *(longlong *)((longlong)&DAT_14c999ae0 + lVar9);
        FUN_1435a6ab2(&local_58,&local_50);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar6 * 8 != lVar9);
  }
  if (-1 < (short)(int)param_1[1]) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    if (((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) &&
       ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80)) {
      local_50 = CONCAT71(local_50._1_7_,(char)param_2);
      uVar7 = FUN_14477b072(param_1,DAT_14cad0050);
      (**(code **)(*param_1 + 0x248))(param_1,uVar7,&local_50);
    }
  }
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) & 0xcf;
  iVar6 = *(int *)((longlong)param_1 + 0x104);
  *(int *)((longlong)param_1 + 0x104) = iVar6 + 1;
  uVar8 = (ulonglong)(int)param_1[0x1f];
  if ((longlong)uVar8 < 1) {
    *(int *)((longlong)param_1 + 0x104) = iVar6;
  }
  else {
    plVar1 = param_1 + 0x1e;
    bVar11 = false;
    do {
      lVar9 = uVar8 * 0x10 + -8;
      uVar13 = uVar8;
      while (((*(int *)(*plVar1 + lVar9) != 0 &&
              (plVar3 = *(longlong **)(*plVar1 + -8 + lVar9), plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1), cVar5 != '\0'))) {
        lVar9 = lVar9 + -0x10;
        bVar4 = uVar13 < 2;
        uVar13 = uVar13 - 1;
        if (bVar4) {
          iVar6 = *(int *)((longlong)param_1 + 0x104) + -1;
          *(int *)((longlong)param_1 + 0x104) = iVar6;
          if (bVar11) goto LAB_1401c33d9;
          goto LAB_1401c33b1;
        }
      }
      uVar8 = uVar13 - 1;
      bVar11 = true;
    } while (1 < uVar13);
    iVar6 = *(int *)((longlong)param_1 + 0x104) + -1;
    *(int *)((longlong)param_1 + 0x104) = iVar6;
LAB_1401c33d9:
    if (iVar6 < 1) {
      iVar6 = (int)param_1[0x1f];
      iVar10 = iVar6;
      if (0 < iVar6) {
        iVar12 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar12 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar12 * 0x10), plVar3 == (longlong *)0x0
              )) || (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar1,iVar12);
            FUN_14005b248(plVar1);
          }
          else {
            iVar12 = iVar12 + 1;
          }
          iVar10 = (int)param_1[0x1f];
        } while (iVar12 < iVar10);
      }
      iVar12 = 2;
      if (2 < iVar10 * 2) {
        iVar12 = iVar10 * 2;
      }
      *(int *)(param_1 + 0x20) = iVar12;
      if ((iVar12 < iVar6) && (*(int *)((longlong)param_1 + 0xfc) != iVar10)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_1401c33b1:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c3474 FUN_1401c3474 body=345 status=ok
// SIG undefined FUN_1401c3474(void)

void FUN_1401c3474(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401c34f5;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1401c34f5:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1401c35ce FUN_1401c35ce body=68 status=ok
// SIG undefined FUN_1401c35ce(void)

char FUN_1401c35ce(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_1448c4e4a(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x18;
      param_2 = param_2 + 0x18;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 1401c3612 FUN_1401c3612 body=134 status=ok
// SIG undefined FUN_1401c3612(void)

void FUN_1401c3612(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x1f0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1401c3698(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_140a6c90c(param_1 + 0x1e8,0);
    return;
  }
  return;
}



// FUNCTION 1401c3698 FUN_1401c3698 body=584 status=ok
// SIG undefined FUN_1401c3698(void)

void FUN_1401c3698(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar6 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x80);
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1401c384f;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar11 = 0xffffffff;
    iVar4 = iVar3;
    do {
      lVar12 = *plVar1;
      lVar13 = *(longlong *)(lVar12 + 0x10 + (longlong)iVar6 * 0x20);
      if (lVar13 != 0) {
        if (*(longlong *)(lVar13 + 0x68) == param_1) {
          FUN_1401c38e0(lVar13);
          FUN_1400020a8(lVar13);
        }
        *(undefined8 *)(lVar12 + (longlong)iVar6 * 0x20 + 0x10) = 0;
        iVar4 = *(int *)(param_1 + 0x98);
      }
      uVar11 = uVar11 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x80);
      }
      iVar6 = (int)uVar14;
      lVar12 = (longlong)iVar6;
      uVar7 = puVar5[lVar12] & uVar11;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar13 = 0;
          do {
            uVar7 = puVar5[lVar12 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1401c3814;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar11 = 0xffffffff;
          lVar12 = (longlong)iVar9;
        }
        uVar14 = lVar12 + 1U & 0xffffffff;
        iVar6 = iVar4;
      }
      else {
LAB_1401c3814:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar3);
  }
LAB_1401c384f:
  FUN_1401c3a74(plVar1,0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1401c39c2(plVar1);
  FUN_1401c38e0(param_1);
  return;
}



// FUNCTION 1401c38e0 FUN_1401c38e0 body=150 status=ok
// SIG undefined FUN_1401c38e0(void)

void FUN_1401c38e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  while (lVar3 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    FUN_1401c3976();
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  while (lVar3 != 0) {
    lVar5 = *(longlong *)(lVar3 + 0x40);
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
    lVar3 = lVar5;
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1401c3976 FUN_1401c3976 body=75 status=ok
// SIG undefined FUN_1401c3976(void)

void FUN_1401c3976(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 1401c39c2 FUN_1401c39c2 body=55 status=ok
// SIG undefined FUN_1401c39c2(void)

void FUN_1401c39c2(longlong *param_1)

{
  FUN_1401c39fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401c39fa FUN_1401c39fa body=121 status=ok
// SIG undefined FUN_1401c39fa(void)

void FUN_1401c39fa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1401c3a74 FUN_1401c3a74 body=107 status=ok
// SIG undefined FUN_1401c3a74(void)

void FUN_1401c3a74(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (*(int *)(param_1 + 0x48) <= iVar3) {
LAB_1401c3ac6:
      FUN_1401c3ae0(param_1);
      FUN_1401c39fa(param_1,param_2);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == iVar3) goto LAB_1401c3ac6;
  FUN_1401c39fa(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_140220ed2(param_1);
  return;
}



// FUNCTION 1401c3ae0 FUN_1401c3ae0 body=325 status=ok
// SIG undefined FUN_1401c3ae0(void)

void FUN_1401c3ae0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c3c26 thunk_FUN_1401c3c2c body=5 status=ok
// SIG undefined thunk_FUN_1401c3c2c(void)

void thunk_FUN_1401c3c2c(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1401c3ca6();
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,0,0,0xffffffff);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 8) & 1) != 0)) && (*(longlong *)(lVar2 + 0x108) == 0)) {
    bVar1 = *(byte *)((longlong)param_1 + 0x1fa);
    *(byte *)((longlong)param_1 + 0x1fa) = bVar1 | 4;
    (**(code **)(*param_1 + 0x4a0))(param_1,&DAT_14cadad9c);
    *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) & 0xfb | bVar1 & 4;
  }
  return;
}



// FUNCTION 1401c3c2c FUN_1401c3c2c body=121 status=ok
// SIG undefined FUN_1401c3c2c(void)

void FUN_1401c3c2c(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_1401c3ca6();
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,0,0,0xffffffff);
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 8) & 1) != 0)) && (*(longlong *)(lVar2 + 0x108) == 0)) {
    bVar1 = *(byte *)((longlong)param_1 + 0x1fa);
    *(byte *)((longlong)param_1 + 0x1fa) = bVar1 | 4;
    (**(code **)(*param_1 + 0x4a0))(param_1,&DAT_14cadad9c);
    *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) & 0xfb | bVar1 & 4;
  }
  return;
}



// FUNCTION 1401c3ca6 FUN_1401c3ca6 body=402 status=ok
// SIG undefined FUN_1401c3ca6(void)

void FUN_1401c3ca6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    uVar6 = FUN_14477b072(param_1,DAT_14cad0040);
    (**(code **)(*param_1 + 0x248))(param_1,uVar6,0);
  }
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 0x20;
  iVar5 = *(int *)((longlong)param_1 + 0xec);
  *(int *)((longlong)param_1 + 0xec) = iVar5 + 1;
  uVar7 = (ulonglong)(int)param_1[0x1c];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0xec) = iVar5;
  }
  else {
    plVar1 = param_1 + 0x1b;
    bVar9 = false;
    do {
      lVar11 = uVar7 * 0x10 + -8;
      uVar12 = uVar7;
      while (((*(int *)(*plVar1 + lVar11) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar11), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1), cVar4 != '\0'))) {
        lVar11 = lVar11 + -0x10;
        bVar3 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar3) {
          iVar5 = *(int *)((longlong)param_1 + 0xec) + -1;
          *(int *)((longlong)param_1 + 0xec) = iVar5;
          if (!bVar9) {
            return;
          }
          goto LAB_1401c3d9b;
        }
      }
      uVar7 = uVar12 - 1;
      bVar9 = true;
    } while (1 < uVar12);
    iVar5 = *(int *)((longlong)param_1 + 0xec) + -1;
    *(int *)((longlong)param_1 + 0xec) = iVar5;
LAB_1401c3d9b:
    if (iVar5 < 1) {
      iVar5 = (int)param_1[0x1c];
      iVar8 = iVar5;
      if (0 < iVar5) {
        iVar10 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar10);
            FUN_14005b248(plVar1);
          }
          else {
            iVar10 = iVar10 + 1;
          }
          iVar8 = (int)param_1[0x1c];
        } while (iVar10 < iVar8);
      }
      iVar10 = 2;
      if (2 < iVar8 * 2) {
        iVar10 = iVar8 * 2;
      }
      *(int *)(param_1 + 0x1d) = iVar10;
      if ((iVar10 < iVar5) && (*(int *)((longlong)param_1 + 0xe4) != iVar8)) {
        FUN_14045812c(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401c3e38 FUN_1401c3e38 body=3799 status=ok
// SIG undefined FUN_1401c3e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c3e38(uint *param_1,char *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  double *pdVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double _X;
  double dVar32;
  double _X_00;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double _X_01;
  double dVar35;
  undefined1 auStack_188 [32];
  uint ***local_168;
  uint local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  uint ***local_130;
  code *local_128;
  code *local_120;
  double local_118;
  double dStack_110;
  double local_108;
  uint *local_100;
  double dStack_f8;
  double local_f0;
  uint **local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (param_1 != (uint *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_130 = &local_e8;
        local_e8 = (uint **)FUN_144a7958c;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_142b47bc4;
        local_138 = &LAB_1478989f1;
        local_140 = &LAB_146391124;
        local_148 = L"Engine";
        local_150 = 0x10000000000;
        local_158 = 0x10000005;
        local_160 = 0x10;
        local_168 = (uint ***)CONCAT44(local_168._4_4_,0x620);
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_1 + 4) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 4) + 0x30) +
           (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
        FUN_140156a6a(param_1);
      }
    }
    FUN_1401c4d5c(param_1 + 0x10,*(longlong *)(param_1 + 0x48),*(longlong *)(param_1 + 0x48) + 0x40)
    ;
    lVar12 = *(longlong *)(param_1 + 0x48);
    local_100 = param_1;
    if ((param_1 != (uint *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    local_e8 = &local_100;
    FUN_1448c4ed6(lVar12 + 0x138);
    lVar12 = *(longlong *)(param_1 + 0x48);
    local_100 = param_1;
    if ((param_1 != (uint *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    local_e8 = &local_100;
    FUN_1448c4ed6(lVar12 + 0x148,&local_e8);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x5a8))(*(longlong **)(param_1 + 0x48),param_1);
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x48) + 0x38);
    if (uVar3 < 0xffffffff00000000) {
      puVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        puVar10 = (uint *)0x0;
      }
      (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,*(longlong *)(param_1 + 0x48),uVar3,4);
    }
    else {
      uVar14 = (uint)uVar3;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = (uint *)&DAT_14c998070;
        if (DAT_14c998080 != (uint *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar12 + 8);
          }
          *puVar10 = *puVar10 | 0x10;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0xa8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x5b0))(plVar4,param_1);
    }
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (uVar3 < 0xffffffff00000000) {
      puVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        puVar10 = (uint *)0x0;
      }
      (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,2);
    }
    else {
      uVar14 = (uint)uVar3;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = (uint *)&DAT_14c998070;
        if (DAT_14c998080 != (uint *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar12 + 8);
          }
          *puVar10 = *puVar10 | 4;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (uVar3 < 0xffffffff00000000) {
      puVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        puVar10 = (uint *)0x0;
      }
      (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,3);
    }
    else {
      uVar14 = (uint)uVar3;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = (uint *)&DAT_14c998070;
        if (DAT_14c998080 != (uint *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar12 + 8);
          }
          *puVar10 = *puVar10 | 8;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    *(byte *)(param_1 + 0x7e) = (byte)param_1[0x7e] & 0xbf;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (uVar3 < 0xffffffff00000000) {
      puVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        puVar10 = (uint *)0x0;
      }
      (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,0xc);
    }
    else {
      uVar14 = (uint)uVar3;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = (uint *)&DAT_14c998070;
        if (DAT_14c998080 != (uint *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar12 + 8);
          }
          *puVar10 = *puVar10 | 0x1000;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    *(byte *)(param_1 + 0x7e) = (byte)param_1[0x7e] & 0x7f;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (uVar3 < 0xffffffff00000000) {
      puVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        puVar10 = (uint *)0x0;
      }
      (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,0xd);
    }
    else {
      uVar14 = (uint)uVar3;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = (uint *)&DAT_14c998070;
        if (DAT_14c998080 != (uint *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar12 + 8);
          }
          *puVar10 = *puVar10 | 0x2000;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) & 0xfe;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (uVar3 < 0xffffffff00000000) {
      puVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        puVar10 = (uint *)0x0;
      }
      (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,0xe);
    }
    else {
      uVar14 = (uint)uVar3;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = (uint *)&DAT_14c998070;
        if (DAT_14c998080 != (uint *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar12 + 8);
          }
          *puVar10 = *puVar10 | 0x4000;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) & 0xfd;
    uVar3 = *(ulonglong *)(param_1 + 0xe);
    if (uVar3 < 0xffffffff00000000) {
      puVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        puVar10 = (uint *)0x0;
      }
      (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,0xf);
    }
    else {
      uVar14 = (uint)uVar3;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
        puVar10 = (uint *)&DAT_14c998070;
        if (DAT_14c998080 != (uint *)0x0) {
          puVar10 = DAT_14c998080;
        }
        if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
             (uVar14 & 0x1f) & 1) != 0) {
          lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar12 + 0x18);
          if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar12 + 8);
          }
          *puVar10 = *puVar10 | 0x8000;
          *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
        }
      }
    }
    puVar15 = param_1;
    puVar10 = (uint *)(**(code **)(*(longlong *)param_1 + 0x518))();
    uVar13 = SUB84(puVar15,0);
    if (*param_2 == '\x01') {
      uVar6 = *(undefined8 *)(param_1 + 0x98);
      uVar7 = *(undefined8 *)(param_1 + 0x9a);
      uVar1 = *(undefined8 *)(param_1 + 0x9c);
      uVar3 = *(ulonglong *)(param_1 + 0xe);
      if (uVar3 < 0xffffffff00000000) {
        puVar15 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          puVar15 = (uint *)0x0;
        }
        puVar10 = (uint *)(**(code **)(*(longlong *)puVar15 + 0x58))(puVar15,param_1,uVar3,5);
      }
      else {
        uVar14 = (uint)uVar3;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
          puVar15 = (uint *)&DAT_14c998070;
          if (DAT_14c998080 != (uint *)0x0) {
            puVar15 = DAT_14c998080;
          }
          uVar2 = *(uint *)((longlong)puVar15 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc));
          puVar10 = (uint *)(ulonglong)uVar2;
          if ((uVar2 >> (uVar14 & 0x1f) & 1) != 0) {
            lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
            puVar10 = (uint *)(lVar12 + 8);
            puVar15 = *(uint **)(lVar12 + 0x18);
            if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
              puVar15 = puVar10;
            }
            *puVar15 = *puVar15 | 0x20;
            *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
          }
        }
      }
      uVar13 = SUB84(puVar15,0);
      *(undefined8 *)(param_1 + 0x66) = uVar6;
      *(undefined8 *)(param_1 + 0x68) = uVar7;
      *(undefined8 *)(param_1 + 0x6a) = uVar1;
    }
    if (param_2[1] == '\x01') {
      ppuVar5 = *(uint ***)(param_1 + 0x90);
      dVar32 = *(double *)(param_1 + 0x92);
      dVar28 = *(double *)(param_1 + 0x94);
      dVar35 = *(double *)(param_1 + 0x96);
      pdVar11 = *(double **)(param_1 + 0x8a);
      local_e8 = ppuVar5;
      dStack_e0 = dVar32;
      local_d8 = dVar28;
      dStack_d0 = dVar35;
      if (pdVar11 == (double *)0x0) {
        uVar13 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar16 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar16;
        dVar16 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar16;
        dVar16 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar16;
        puVar10 = DAT_14c846508;
        pdVar11[6] = (double)DAT_14c846508;
        *(double **)(param_1 + 0x8a) = pdVar11;
      }
      auVar18._8_8_ = -(ulonglong)(dVar32 != pdVar11[1]);
      auVar18._0_8_ = -(ulonglong)((double)ppuVar5 != *pdVar11);
      auVar23._8_8_ = -(ulonglong)(dVar35 != pdVar11[3]);
      auVar23._0_8_ = -(ulonglong)(dVar28 != pdVar11[2]);
      iVar9 = movmskpd((int)puVar10,auVar18);
      uVar14 = movmskpd(uVar13,auVar23);
      if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
        pdVar11[2] = local_d8;
        pdVar11[3] = dStack_d0;
        *pdVar11 = (double)local_e8;
        pdVar11[1] = dStack_e0;
        FUN_1448052ee(&local_e8,&local_100);
        pdVar11[6] = local_f0;
        pdVar11[4] = (double)local_100;
        pdVar11[5] = dStack_f8;
      }
      local_108 = pdVar11[6];
      local_118 = pdVar11[4];
      dStack_110 = pdVar11[5];
      uVar3 = *(ulonglong *)(param_1 + 0xe);
      if (uVar3 < 0xffffffff00000000) {
        puVar10 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          puVar10 = (uint *)0x0;
        }
        (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,6);
      }
      else {
        uVar14 = (uint)uVar3;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
          puVar10 = (uint *)&DAT_14c998070;
          if (DAT_14c998080 != (uint *)0x0) {
            puVar10 = DAT_14c998080;
          }
          if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
               (uVar14 & 0x1f) & 1) != 0) {
            lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
            puVar10 = *(uint **)(lVar12 + 0x18);
            if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
              puVar10 = (uint *)(lVar12 + 8);
            }
            *puVar10 = *puVar10 | 0x40;
            *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
          }
        }
      }
      *(double *)(param_1 + 0x70) = local_108;
      *(double *)(param_1 + 0x6c) = local_118;
      *(double *)(param_1 + 0x6e) = dStack_110;
    }
    if (param_2[2] == '\x01') {
      dVar28 = SUB168(*(undefined1 (*) [16])(param_1 + 0xa0),0);
      dVar32 = *(double *)(param_1 + 0xa2);
      if (ABS((float)dVar28) < 0.001) {
        dVar28 = (double)((ulonglong)(SUB164(*(undefined1 (*) [16])(param_1 + 0xa0),4) & 0x80000000)
                          << 0x20 | 0x3f50624de0000000);
      }
      dVar35 = SUB168(*(undefined1 (*) [16])(param_1 + 0xa4),0);
      if (ABS((float)dVar32) < 0.001) {
        dVar32 = (double)((ulonglong)((uint)((ulonglong)dVar32 >> 0x20) & 0x80000000) << 0x20 |
                         0x3f50624de0000000);
      }
      if (ABS((float)dVar35) < 0.001) {
        dVar35 = (double)((ulonglong)(SUB164(*(undefined1 (*) [16])(param_1 + 0xa4),4) & 0x80000000)
                          << 0x20 | 0x3f50624de0000000);
      }
      uVar3 = *(ulonglong *)(param_1 + 0xe);
      if (uVar3 < 0xffffffff00000000) {
        puVar10 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          puVar10 = (uint *)0x0;
        }
        (**(code **)(*(longlong *)puVar10 + 0x58))(puVar10,param_1,uVar3,7);
      }
      else {
        uVar14 = (uint)uVar3;
        if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
          puVar10 = (uint *)&DAT_14c998070;
          if (DAT_14c998080 != (uint *)0x0) {
            puVar10 = DAT_14c998080;
          }
          if ((*(uint *)((longlong)puVar10 + (ulonglong)((uint)(uVar3 >> 3) & 0xffffffc)) >>
               (uVar14 & 0x1f) & 1) != 0) {
            lVar12 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
            puVar10 = *(uint **)(lVar12 + 0x18);
            if (*(uint **)(lVar12 + 0x18) == (uint *)0x0) {
              puVar10 = (uint *)(lVar12 + 8);
            }
            *puVar10 = *puVar10 | 0x80;
            *(byte *)(lVar12 + 0x60) = *(byte *)(lVar12 + 0x60) | 1;
          }
        }
      }
      *(double *)(param_1 + 0x72) = dVar28;
      *(double *)(param_1 + 0x74) = dVar32;
      *(double *)(param_1 + 0x76) = dVar35;
    }
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x6c);
    dVar28 = auVar18._0_8_;
    dVar35 = auVar18._8_8_;
    dVar32 = *(double *)(param_1 + 0x70);
    pdVar11 = *(double **)(param_1 + 0x8c);
    if (pdVar11 == (double *)0x0) {
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar16 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar16;
      dVar16 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar16;
      dVar16 = DAT_14c846500;
      pdVar11[4] = DAT_14c8464f8;
      pdVar11[5] = dVar16;
      pdVar11[6] = (double)DAT_14c846508;
      *(double **)(param_1 + 0x8c) = pdVar11;
    }
    auVar23 = _DAT_1499387d0;
    if (((((pdVar11[4] != dVar28) || (NAN(pdVar11[4]) || NAN(dVar28))) || (pdVar11[5] != dVar35)) ||
        ((NAN(pdVar11[5]) || NAN(dVar35) || (pdVar11[6] != dVar32)))) ||
       (NAN(pdVar11[6]) || NAN(dVar32))) {
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar32;
      dVar16 = (double)DAT_1499387d0;
      dVar17 = DAT_1499387d0._8_8_;
      auVar18 = divpd(auVar18,_DAT_1499387d0);
      auVar22 = divpd(auVar25,_DAT_1499387d0);
      auVar18 = roundpd(auVar18,auVar18,3);
      auVar22 = roundpd(auVar22,auVar22,3);
      auVar33._0_8_ = dVar28 - auVar18._0_8_ * dVar16;
      auVar33._8_8_ = dVar35 - auVar18._8_8_ * dVar17;
      auVar26._0_8_ = dVar32 - auVar22._0_8_ * dVar16;
      auVar26._8_8_ = 0.0 - auVar22._8_8_ * dVar17;
      auVar30._0_8_ = auVar33._0_8_ + dVar16;
      auVar30._8_8_ = auVar33._8_8_ + dVar17;
      auVar24._0_8_ = auVar26._0_8_ + dVar16;
      auVar24._8_8_ = auVar26._8_8_ + dVar17;
      auVar31._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
      auVar31._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
      auVar22 = blendvpd(auVar30,auVar33,auVar31);
      auVar19._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
      auVar19._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
      auVar18 = blendvpd(auVar24,auVar26,auVar19);
      auVar27._0_8_ = auVar22._0_8_ + -360.0;
      auVar27._8_8_ = auVar22._8_8_ + -360.0;
      auVar20._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
      auVar20._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
      auVar31 = blendvpd(auVar22,auVar27,auVar20);
      auVar21._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
      auVar21._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
      auVar22._8_8_ = auVar18._8_8_ + 0.0;
      auVar22._0_8_ = auVar18._0_8_ + -360.0;
      auVar18 = blendvpd(auVar18,auVar22,auVar21);
      *(undefined1 (*) [16])(pdVar11 + 4) = auVar31;
      dVar32 = auVar18._0_8_;
      pdVar11[6] = dVar32;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar32;
      auVar18 = divpd(auVar31,auVar23);
      auVar23 = divpd(auVar34,auVar23);
      auVar18 = roundpd(auVar18,auVar18,3);
      auVar23 = roundpd(auVar23,auVar23,3);
      dVar29 = (auVar31._0_8_ - auVar18._0_8_ * dVar16) * 0.008726646259971648;
      _X = (auVar31._8_8_ - auVar18._8_8_ * dVar17) * 0.008726646259971648;
      _X_00 = (dVar32 - auVar23._0_8_ * dVar16) * 0.008726646259971648;
      _X_01 = (0.0 - auVar23._8_8_ * dVar17) * 0.008726646259971648;
      dVar32 = sin(dVar29);
      dVar28 = sin(_X);
      dVar35 = sin(_X_00);
      sin(_X_01);
      dVar16 = cos(dVar29);
      dVar17 = cos(_X);
      dVar29 = cos(_X_00);
      cos(_X_01);
      *pdVar11 = dVar32 * dVar28 * dVar29 - dVar16 * dVar17 * dVar35;
      pdVar11[1] = -(dVar32 * dVar17 * dVar29) - dVar16 * dVar28 * dVar35;
      pdVar11[2] = -(dVar17 * dVar32 * dVar35) + dVar28 * dVar16 * dVar29;
      pdVar11[3] = dVar28 * dVar32 * dVar35 + dVar17 * dVar16 * dVar29;
    }
    local_e8 = (uint **)*pdVar11;
    dStack_e0 = pdVar11[1];
    local_d8 = pdVar11[2];
    dStack_d0 = pdVar11[3];
    local_160 = local_160 & 0xffffff00;
    local_168 = &local_e8;
    FUN_140092404(param_1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x4a),0);
    if (((param_1[0x27] & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x1fa) & 4) == 0)) {
      if ((longlong)(int)param_1[0x88] < 1) {
        if ((DAT_14c76142c != 1) || ((param_1[0x7e] & 2) == 0)) {
          cVar8 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,0,1,0);
          *(byte *)(param_1 + 0x7e) = (byte)param_1[0x7e] & 0xfd | cVar8 * '\x02';
        }
      }
      else {
        lVar12 = *(longlong *)
                  (*(longlong *)(param_1 + 0x86) + -8 + (longlong)(int)param_1[0x88] * 8);
        *(byte *)(lVar12 + 0x608) = *(byte *)(lVar12 + 0x608) | 2;
        *(undefined4 *)(lVar12 + 0x10) = 3;
        *(undefined4 *)(lVar12 + 200) = 0xffffffff;
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c4d14 FUN_1401c4d14 body=72 status=ok
// SIG undefined FUN_1401c4d14(void)

void FUN_1401c4d14(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_1), lVar2 == 0)) {
    return;
  }
  plVar1 = *(longlong **)(lVar2 + 0x218);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401c4d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x90))(plVar1,param_1);
  return;
}



// FUNCTION 1401c4d5c FUN_1401c4d5c body=236 status=ok
// SIG undefined FUN_1401c4d5c(void)

void FUN_1401c4d5c(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  uint local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  if (param_2 == 0) {
    local_38 = 0;
    iVar1 = 0;
  }
  else {
    local_38 = *(uint *)(param_2 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x10) = iVar2;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar2;
      }
    }
  }
  local_34 = iVar1;
  local_30 = param_3;
  FUN_1401c4e4a(param_1 + 0x10,&local_38,1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c4e4a FUN_1401c4e4a body=208 status=ok
// SIG undefined FUN_1401c4e4a(void)

int FUN_1401c4e4a(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = (int)param_1[1];
  iVar4 = iVar1;
  if (0 < iVar1) {
    uVar6 = 0;
    bVar2 = 0;
    do {
      lVar8 = *param_1 + (longlong)(int)uVar6 * 0x10;
      cVar3 = FUN_1401246e4(lVar8,param_2);
      if (cVar3 == '\0') {
        iVar4 = (int)param_1[1];
      }
      else {
        iVar4 = (int)param_1[1];
        if (*(longlong *)(lVar8 + 8) == *(longlong *)(param_2 + 8)) {
          iVar5 = ~uVar6 + iVar4;
          if (iVar5 != 0) {
            iVar7 = 1;
            if (iVar5 < 1) {
              iVar7 = iVar5;
            }
            memmove((void *)((longlong)(int)uVar6 * 0x10 + *param_1),
                    (void *)((longlong)(iVar4 - iVar7) * 0x10 + *param_1),(longlong)iVar7 << 4);
            iVar4 = (int)param_1[1];
          }
          uVar6 = uVar6 - 1;
          iVar4 = iVar4 + -1;
          *(int *)(param_1 + 1) = iVar4;
          bVar2 = 1;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
    if ((bool)(param_3 == '\x01' & bVar2)) {
      FUN_1401c4f1a(param_1);
      iVar4 = (int)param_1[1];
    }
  }
  return iVar1 - iVar4;
}



// FUNCTION 1401c4f1a FUN_1401c4f1a body=63 status=ok
// SIG undefined FUN_1401c4f1a(void)

void FUN_1401c4f1a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1401c4f5a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1401c4f5a FUN_1401c4f5a body=93 status=ok
// SIG undefined FUN_1401c4f5a(void)

ulonglong FUN_1401c4f5a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1401c4fbe FUN_1401c4fbe body=85 status=ok
// SIG undefined FUN_1401c4fbe(void)

void FUN_1401c4fbe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1401c5014();
  return;
}



// FUNCTION 1401c5014 FUN_1401c5014 body=453 status=ok
// SIG undefined FUN_1401c5014(void)

void FUN_1401c5014(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0xa0);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401c5132:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401c516f:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xa0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401c506d;
LAB_1401c5062:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401c506d:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x199) goto code_r0x0001401c5099;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x28 + 0x1a;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401c50ef:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401c516f;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401c5132;
code_r0x0001401c5099:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401c50ef;
    }
  }
  goto LAB_1401c5062;
}



// FUNCTION 1401c51da FUN_1401c51da body=944 status=ok
// SIG undefined FUN_1401c51da(void)

void FUN_1401c51da(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  puVar2 = (uint *)(param_1 + 0x48);
  iVar13 = *(int *)(param_1 + 0x60);
  iVar4 = iVar13;
  if (iVar13 == 0) {
    uVar11 = 1;
    uVar16 = 0;
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar5 = puVar2;
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar6 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar6 = iVar13 + -1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar8 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_1401c5283;
        iVar8 = iVar8 + 0x20;
        uVar14 = puVar5[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar8 = 0;
    }
    uVar11 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar6) {
      iVar6 = iVar13;
    }
  }
  if (iVar6 != iVar13) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_14108dffa();
        iVar4 = *(int *)(param_1 + 0x60);
      }
      uVar14 = uVar14 & ~(uint)uVar11;
      puVar5 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar5 = puVar2;
      }
      iVar6 = (int)uVar16;
      lVar12 = (longlong)iVar6;
      uVar9 = puVar5[lVar12] & uVar14;
      if (uVar9 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar7 = iVar10;
        if (iVar10 < iVar6) {
          iVar7 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar15 = 0;
          do {
            uVar9 = puVar5[lVar12 + lVar15 + 1];
            if (uVar9 != 0) {
              uVar16 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1401c5406;
            }
            iVar8 = iVar8 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar12 != lVar15);
          uVar14 = 0xffffffff;
          iVar6 = iVar7;
        }
        uVar16 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_1401c5406:
        uVar11 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar11 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar13);
  }
LAB_1401c5283:
  iVar13 = *(int *)(param_1 + 0x80);
  if (1 < iVar13) {
    FUN_143c6174e(plVar1,0);
    *(undefined4 *)(param_1 + 0x80) = 1;
    FUN_143ccde06(plVar1);
    return;
  }
  lVar12 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x78);
  }
  iVar6 = iVar13 + 3;
  if (-1 < iVar13) {
    iVar6 = iVar13;
  }
  if (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x6c) < iVar6 >> 2) {
    if (iVar4 == 0) {
      uVar16 = 1;
      iVar6 = 0;
      uVar11 = 0;
      iVar13 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar5 = puVar2;
      }
      uVar14 = *puVar5;
      if (uVar14 == 0) {
        iVar13 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar13 = iVar4 + -1;
        }
        uVar11 = 0;
        uVar16 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar16 = uVar11;
        }
        iVar6 = 0;
        do {
          if (uVar16 == uVar11) goto LAB_1401c5481;
          iVar6 = iVar6 + 0x20;
          uVar14 = puVar5[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar14 == 0);
      }
      else {
        iVar6 = 0;
        uVar11 = 0;
      }
      uVar16 = (ulonglong)(-uVar14 & uVar14);
      uVar3 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = (iVar6 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar13) {
        iVar13 = iVar4;
      }
    }
    if (iVar13 != iVar4) {
      uVar14 = 0xffffffff;
      do {
        *(undefined4 *)
         (lVar12 + (longlong)
                   *(int *)(*(longlong *)(param_1 + 0x38) + 0x1c + (longlong)iVar13 * 0x20) * 4) =
             0xffffffff;
        uVar14 = ~(uint)uVar16 & uVar14;
        puVar5 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar5 = puVar2;
        }
        iVar8 = *(int *)(param_1 + 0x60);
        iVar13 = (int)uVar11;
        lVar15 = (longlong)iVar13;
        uVar9 = puVar5[lVar15] & uVar14;
        if (uVar9 == 0) {
          iVar10 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar10 = iVar8 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar7 = iVar10;
          if (iVar10 < iVar13) {
            iVar7 = iVar13;
          }
          if (iVar13 < iVar10) {
            lVar17 = 0;
            do {
              uVar9 = puVar5[lVar15 + lVar17 + 1];
              if (uVar9 != 0) {
                uVar11 = (ulonglong)(iVar13 + (int)lVar17 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1401c5536;
              }
              iVar6 = iVar6 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar7 - lVar15 != lVar17);
            uVar14 = 0xffffffff;
            lVar15 = (longlong)iVar7;
          }
          uVar11 = lVar15 + 1U & 0xffffffff;
          iVar13 = iVar8;
        }
        else {
LAB_1401c5536:
          uVar16 = (ulonglong)(-uVar9 & uVar9);
          uVar3 = uVar16 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar13 = (iVar6 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar13) {
            iVar13 = iVar8;
          }
        }
      } while (iVar13 != iVar4);
    }
  }
  else if (iVar13 == 1) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lVar12 + lVar15 * 4) = 0xffffffff;
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x80));
  }
LAB_1401c5481:
  FUN_143c6174e(plVar1,0);
  return;
}



// FUNCTION 1401c558a FUN_1401c558a body=958 status=ok
// SIG undefined FUN_1401c558a(void)

void FUN_1401c558a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1456ef996();
  FUN_1456d9380(param_1 + 0x390);
  if (*(int *)(param_1 + 0x2b8) != *(int *)(param_1 + 0x2e4)) {
    FUN_1401c70ce(param_1 + 0x2b0);
    FUN_1448c5284(param_1 + 0x2b0);
  }
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    FUN_1401c70ce(param_1 + 0x260);
    FUN_1448c5284(param_1 + 0x260);
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_1401c69c2(param_1 + 0x1c0,&local_98);
  lVar7 = local_98;
  lVar12 = (longlong)(int)uStack_90;
  if (lVar12 != 0) {
    lVar17 = 0;
    do {
      if (*(longlong *)(lVar7 + lVar17) != 0) {
        FUN_1401c594a(param_1 + 0x140);
      }
      lVar17 = lVar17 + 8;
    } while (lVar12 * 8 != lVar17);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1407a42da(param_1 + 0xc0,&local_a8);
  lVar7 = local_a8;
  lVar12 = (longlong)(int)uStack_a0;
  if (lVar12 != 0) {
    lVar17 = 0;
    do {
      if (*(longlong *)(lVar7 + lVar17) != 0) {
        FUN_1407a4136(param_1 + 0x40);
      }
      lVar17 = lVar17 + 8;
    } while (lVar12 * 8 != lVar17);
  }
  local_b8 = param_1 + 0x338;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = local_b8;
  if (*(int *)(param_1 + 0x350) == 0) {
    uVar16 = 1;
    local_70._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_70._4_4_ = 0;
    local_80._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    uVar16 = local_80 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x350);
  }
  lVar7 = local_78;
  plVar3 = (longlong *)(param_1 + 0x328);
  local_b0 = param_1;
  if (local_70._4_4_ != iVar11 || local_78 != local_b8) {
    iVar10 = (int)local_80;
    uVar8 = (uint)local_70;
    iVar9 = local_70._4_4_;
    iVar15 = local_68;
    do {
      FUN_1401c5dde(*(undefined8 *)(*plVar3 + 0x18 + (longlong)iVar9 * 0x30),param_1 + 0x380);
      uVar8 = ~(uint)uVar16 & uVar8;
      lVar12 = *(longlong *)(lVar7 + 0x10);
      if (*(longlong *)(lVar7 + 0x10) == 0) {
        lVar12 = lVar7;
      }
      iVar5 = *(int *)(lVar7 + 0x18);
      lVar17 = (longlong)iVar10;
      uVar13 = *(uint *)(lVar12 + lVar17 * 4) & uVar8;
      if (uVar13 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar6 = iVar9;
        if (iVar9 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar10 < iVar9) {
          lVar14 = 0;
          do {
            uVar13 = *(uint *)(lVar12 + lVar17 * 4 + 4 + lVar14 * 4);
            if (uVar13 != 0) {
              iVar10 = iVar10 + (int)lVar14 + 1;
              uVar8 = 0xffffffff;
              goto LAB_1401c5796;
            }
            iVar15 = iVar15 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar6 - lVar17 != lVar14);
          uVar8 = 0xffffffff;
          iVar10 = iVar6;
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar5;
      }
      else {
LAB_1401c5796:
        uVar16 = (ulonglong)(-uVar13 & uVar13);
        uVar4 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar9) {
          iVar9 = iVar5;
        }
      }
    } while (iVar9 != iVar11 || lVar7 != local_b8);
  }
  lVar7 = local_b0;
  if (*(int *)(local_b0 + 0x330) != *(int *)(local_b0 + 0x35c)) {
    FUN_1401c6c12(plVar3);
    FUN_1401c6f16(plVar3);
  }
  if (*(longlong *)(lVar7 + 0x380) != 0) {
    FUN_140521208();
    *(undefined8 *)(lVar7 + 0x380) = 0;
    plVar3 = *(longlong **)(lVar7 + 0x388);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar7 + 0x388) = 0;
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
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c594a FUN_1401c594a body=354 status=ok
// SIG undefined FUN_1401c594a(void)

ulonglong FUN_1401c594a(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1401c5aac(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1401c5aac();
  uVar2 = FUN_14493c560();
  if (uVar2 == 0) {
    uVar3 = 0;
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = (ulonglong)(uVar2 >> 0xe);
    uVar3 = uVar2 & 0x3fff;
    lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
  }
  *(longlong *)(lVar6 + 8) = param_2;
  do {
    uVar1 = *param_1;
    uVar4 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar1 >> 0x1a) {
      FUN_14274643a();
    }
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
    }
    *(uint *)(lVar6 + 0x10) = (uint)uVar1 & 0x3ffffff;
    LOCK();
    uVar5 = *param_1;
    bVar8 = uVar1 == uVar5;
    if (bVar8) {
      *param_1 = uVar4 | uVar2;
      uVar5 = uVar1;
    }
    UNLOCK();
  } while (!bVar8);
  return uVar5;
}



// FUNCTION 1401c5aac FUN_1401c5aac body=55 status=ok
// SIG undefined FUN_1401c5aac(void)

void FUN_1401c5aac(longlong *param_1)

{
  FUN_1448c503e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401c5ae4 FUN_1401c5ae4 body=276 status=ok
// SIG undefined FUN_1401c5ae4(void)

void FUN_1401c5ae4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x18) != -1)) &&
     (*plVar3 == *(longlong *)(param_1 + 0x18))) {
    iVar5 = (int)plVar3[0x21];
    *(int *)(plVar3 + 0x21) = iVar5 + 1;
    if ((int)plVar3[5] != 0) {
      puVar4 = (undefined8 *)plVar3[4];
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(plVar3 + 4,0,0,0x10);
        *(undefined4 *)(plVar3 + 5) = 0;
        iVar5 = (int)plVar3[0x21] + -1;
      }
    }
    *(int *)(plVar3 + 0x21) = iVar5;
    if ((int)plVar3[0x26] < 1) {
      FUN_1400847bc(plVar3 + 0x17,0);
      if ((int)plVar3[0x21] == 0) {
        FUN_140087e46(plVar3);
        if (*plVar3 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1401c5b76;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
        }
      }
    }
  }
LAB_1401c5b76:
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
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  return;
}



// FUNCTION 1401c5bf8 FUN_1401c5bf8 body=486 status=ok
// SIG undefined FUN_1401c5bf8(void)

void FUN_1401c5bf8(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
  plVar1 = *(longlong **)(param_1 + 0x150);
  if (plVar1 == (longlong *)0x0) goto LAB_1401c5c58;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1401c5c4d;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_1401c5c4d:
  *(undefined8 *)(param_1 + 0x150) = 0;
LAB_1401c5c58:
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_1401c6200((longlong *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_1401c61c3(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1407e878c(param_1 + 0xd0);
  FUN_1447cd778(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1401c625a((longlong *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401c5dde FUN_1401c5dde body=976 status=ok
// SIG undefined FUN_1401c5dde(void)

void FUN_1401c5dde(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)(int)param_1[0x1d] != 0) {
    lVar3 = (longlong)(int)param_1[0x1d] * 0x48;
    plVar5 = (longlong *)(param_1[0x1c] + 0x20);
    do {
      if (((longlong *)*plVar5 != (longlong *)0x0) && (*(longlong *)*plVar5 != -1)) {
        if (*param_2 != 0) {
          FUN_1401c6d5c(*param_2 + 0x308);
        }
        FUN_14072d42a(plVar5 + 1,0);
        FUN_140b3e76a(plVar5);
      }
      plVar5 = plVar5 + 9;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  if ((param_1[0x18] != 0) && ((*(byte *)(param_1[0x18] + 0x10) & 1) != 0)) {
    FUN_1408256d2(param_1 + 0x18);
  }
  plVar5 = param_1 + 0x1e;
  iVar6 = (int)param_1[0x27];
  if (iVar6 < 2) {
    plVar7 = param_1 + 0x25;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x26];
    }
    iVar4 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    if ((int)param_1[0x1f] - *(int *)((longlong)param_1 + 0x124) < iVar4 >> 2) {
      plVar1 = param_1 + 0x20;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = plVar1;
      if ((int)param_1[0x23] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar6 = (int)param_1[0x23];
      }
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      local_68 = local_48;
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      iVar4 = local_48._4_4_;
      local_80 = plVar5;
      if ((local_48._4_4_ != iVar6) || (uStack_50 != plVar1)) {
        do {
          *(undefined4 *)
           ((longlong)plVar7 + (longlong)*(int *)(*local_80 + 0xc + (longlong)iVar4 * 0x10) * 4) =
               0xffffffff;
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
        } while (local_80 != plVar5 ||
                 ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar7 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[0x27]);
    }
    FUN_1401c6200(plVar5);
  }
  else {
    FUN_1401c6200(plVar5);
    *(undefined4 *)(param_1 + 0x27) = 1;
    FUN_1401c6718(plVar5);
  }
  FUN_14072d42a(param_1 + 0x29,0);
  FUN_140b3e76a(param_1 + 0x28);
  FUN_1401c61c3(param_1[0x1c],(int)param_1[0x1d]);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) != 0) {
    FUN_1456d92ca(param_1 + 0x1c);
  }
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
      plVar7 = param_1 + 2;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = plVar7;
      if ((int)param_1[5] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar6 = (int)param_1[5];
      }
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar2 = local_68;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar4 = local_68._4_4_;
      local_80 = param_1;
      if ((local_68._4_4_ != iVar6) || (local_68 = local_48, uStack_50 != plVar7)) {
        do {
          local_68 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_80 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
               0xffffffff;
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
          uVar2 = local_68;
        } while (local_80 != param_1 ||
                 ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar7 || local_68._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  FUN_1401c625a(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1401c6486(param_1);
  return;
}



// FUNCTION 1401c61c3 FUN_1401c61c3 body=60 status=ok
// SIG undefined FUN_1401c61c3(void)

void FUN_1401c61c3(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
      FUN_144a61ac8(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401c6200 FUN_1401c6200 body=90 status=ok
// SIG undefined FUN_1401c6200(void)

void FUN_1401c6200(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1401c625a FUN_1401c625a body=478 status=ok
// SIG undefined FUN_1401c625a(void)

void FUN_1401c625a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar10) goto LAB_1401c628c;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar3 = (longlong)iVar7;
      FUN_1401c6438(*(undefined8 *)(lVar12 + 0x10 + lVar3 * 0x28),
                    *(undefined4 *)(lVar12 + 0x18 + lVar3 * 0x28));
      if (*(longlong *)(lVar12 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar7 = (int)uVar10;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar8[lVar12] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar3 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar3 + 1];
          if (uVar4 != 0) break;
          lVar3 = lVar3 + 1;
          if (iVar6 - lVar12 == lVar3) goto LAB_1401c628c;
        }
        uVar10 = (ulonglong)(iVar7 + (int)lVar3 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_1401c628c:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1401c6438 FUN_1401c6438 body=77 status=ok
// SIG undefined FUN_1401c6438(void)

void FUN_1401c6438(longlong param_1,int param_2)

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



// FUNCTION 1401c6486 FUN_1401c6486 body=657 status=ok
// SIG undefined FUN_1401c6486(void)

void FUN_1401c6486(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
  }
  else {
    if (uVar13 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar13,4);
    if ((int)uVar13 < 1) goto LAB_1401c64ec;
  }
  uVar2 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar13 != uVar2);
LAB_1401c64ec:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar15 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar14 == uVar15) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar4 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar12 = *param_1 + (longlong)iVar5 * 0x28;
      iVar3 = FUN_1447addd0(lVar12,0x10);
      uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
      iVar3 = (int)uVar4;
      *(int *)(lVar12 + 0x24) = iVar3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(undefined4 *)(lVar12 + 0x20) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar4) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar2 = puVar8[lVar12] & uVar13;
      if (uVar2 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar6 <= iVar5) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar2 = puVar8[lVar12 + lVar10 + 1];
          if (uVar2 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar12 == lVar10) {
            return;
          }
        }
        uVar15 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar4 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 1401c6718 FUN_1401c6718 body=682 status=ok
// SIG undefined FUN_1401c6718(void)

void FUN_1401c6718(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1401c677c;
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
  } while (uVar7 != uVar2);
LAB_1401c677c:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1401c69c2 FUN_1401c69c2 body=92 status=ok
// SIG undefined FUN_1401c69c2(void)

void FUN_1401c69c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1401c6a1e();
  while (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1456d92fa(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
    lVar2 = FUN_1401c6a1e(param_1);
  }
  return;
}



// FUNCTION 1401c6a1e FUN_1401c6a1e body=499 status=ok
// SIG undefined FUN_1401c6a1e(void)

undefined8 FUN_1401c6a1e(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  
  do {
    while( true ) {
      do {
        uVar5 = *param_1;
        uVar4 = param_1[8];
        uVar6 = (uint)uVar5;
        puVar8 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar8 = (ulonglong *)
                   ((ulonglong)((uVar6 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar6 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar1 = *puVar8;
      } while (uVar5 != *param_1);
      uVar7 = (uint)uVar1;
      if ((((uint)uVar4 ^ uVar6) & 0x3ffffff) != 0) break;
      if ((uVar1 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar4 == param_1[8]) {
        param_1[8] = uVar5 | uVar7 & 0x3ffffff;
      }
      UNLOCK();
    }
    if ((uVar1 & 0x3ffffff) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)((uVar7 & 0x3fff) * 0x18) +
              *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar7 & 0x3ffffff) >> 0xe) * 8);
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar5 == uVar1) {
      *param_1 = uVar4 | uVar7 & 0x3ffffff;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  FUN_1447d080c(uVar6 & 0x3ffffff);
  return uVar2;
}



// FUNCTION 1401c6c12 FUN_1401c6c12 body=329 status=ok
// SIG undefined FUN_1401c6c12(void)

void FUN_1401c6c12(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c6d5c FUN_1401c6d5c body=320 status=ok
// SIG undefined FUN_1401c6d5c(void)

void FUN_1401c6d5c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar7 * 0x50;
        lVar1 = lVar2 + lVar3;
        if (*(longlong *)(lVar2 + lVar3) == param_2) {
          iVar6 = *(int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0x4c) * 4);
          if (iVar6 == iVar7) {
            piVar5 = (int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0x4c) * 4);
          }
          else {
            do {
              piVar5 = (int *)((longlong)iVar6 * 0x50 + lVar2 + 0x48);
              iVar6 = *piVar5;
            } while (iVar6 != iVar7);
          }
          *piVar5 = *(int *)(lVar1 + 0x48);
          lVar2 = *param_1;
          plVar4 = *(longlong **)(lVar2 + 8 + lVar3);
          if (plVar4 == (longlong *)0x0) goto LAB_1401c6e2d;
          *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + -1;
          if (((int)plVar4[0x26] < 1) && (FUN_1400847bc(plVar4 + 0x17,0), (int)plVar4[0x21] == 0)) {
            FUN_140087e46(plVar4);
            if (*plVar4 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_1401c6e26;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
            }
          }
LAB_1401c6e26:
          *(undefined8 *)(lVar2 + lVar3 + 8) = 0;
LAB_1401c6e2d:
          FUN_1401c6e9c(param_1,iVar7);
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x48);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 1401c6e9c FUN_1401c6e9c body=122 status=ok
// SIG undefined FUN_1401c6e9c(void)

void FUN_1401c6e9c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1401c6f16 FUN_1401c6f16 body=438 status=ok
// SIG undefined FUN_1401c6f16(void)

void FUN_1401c6f16(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar6 = local_58;
  iVar14 = (int)local_60;
  uVar15 = (uint)local_50;
  iVar8 = local_50._4_4_;
  iVar11 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar8 * 0x30);
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
      uVar15 = uVar15 & ~(uint)uVar13;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar12 = (longlong)iVar14;
      uVar7 = *(uint *)((longlong)plVar9 + lVar12 * 4) & uVar15;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar14) {
          iVar5 = iVar14;
        }
        if (iVar8 <= iVar14) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar12 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar12 == lVar10) goto LAB_1401c7055;
        }
        iVar14 = iVar14 + (int)lVar10 + 1;
        uVar15 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_1401c7055:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c70ce FUN_1401c70ce body=481 status=ok
// SIG undefined FUN_1401c70ce(void)

void FUN_1401c70ce(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar11 = 0;
      uVar13 = 1;
      iVar8 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar11 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar8 * 0x18) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_1401c7217;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_1401c7217:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 1401c72b0 FUN_1401c72b0 body=2844 status=ok
// SIG undefined FUN_1401c72b0(void)

void FUN_1401c72b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  ulonglong local_60;
  
  iVar4 = DAT_14c9647dc;
  lVar9 = DAT_14c9647c8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((((*(int *)(param_1 + 0xc) == 0) || (uVar1 = *(uint *)(param_1 + 8), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       ((plVar8 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0xc))))) ||
      ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) || (lVar2 = *plVar8, lVar2 == 0)) {
    *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
  }
  uVar1 = *(uint *)(lVar2 + 0xc);
  *(uint *)(param_1 + 0x40) = uVar1;
  if ((int)uVar1 < iVar4) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar4 = *(int *)(lVar9 + 0x10);
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar11 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar11) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar4 = *(int *)(lVar9 + 0x10);
    bVar11 = iVar4 == 0;
    if (bVar11) {
      *(int *)(lVar9 + 0x10) = iVar7;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar11) {
      iVar4 = iVar7;
    }
  }
  *(int *)(param_1 + 0x44) = iVar4;
  lVar9 = FUN_1449e3f1e();
  plVar8 = (longlong *)FUN_14654754e(DAT_14c951640);
  if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(param_1 + 0x48) = plVar8;
    if (plVar8 != (longlong *)0x0) goto LAB_1401c73b9;
  }
  else {
    FUN_1456cec3c(plVar8);
    *(longlong **)(param_1 + 0x48) = plVar8;
LAB_1401c73b9:
    if (lVar9 == 0) {
      uVar12 = 0x3f800000;
    }
    else {
      uVar12 = *(undefined4 *)(lVar9 + 0x21c);
    }
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(plVar8 + 5) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar7;
      }
    }
    *(int *)((longlong)plVar8 + 0x2c) = iVar4;
    *(undefined4 *)(plVar8 + 6) = uVar12;
    (**(code **)(*plVar8 + 0x2a0))(plVar8,lVar2);
  }
  if ((((lVar9 == 0) || (lVar10 = *(longlong *)(lVar9 + 0x1d8), lVar10 == 0)) ||
      (lVar5 = FUN_145a7fd5e(), lVar5 == 0)) ||
     (((*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) || (lVar10 = *(longlong *)(lVar9 + 0x1d8), lVar10 == 0)))) {
    lVar10 = FUN_145a7fd5e();
LAB_1401c7469:
    if (lVar10 != 0) {
      plVar8 = (longlong *)FUN_146547600(DAT_14c951640,lVar10);
      if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
        *(longlong **)(param_1 + 0x50) = plVar8;
        if (plVar8 == (longlong *)0x0) goto LAB_1401c74fc;
      }
      else {
        FUN_1456cec3c(plVar8);
        *(longlong **)(param_1 + 0x50) = plVar8;
      }
      uVar1 = *(uint *)(lVar2 + 0xc);
      *(uint *)(plVar8 + 5) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar7;
        }
      }
      *(int *)((longlong)plVar8 + 0x2c) = iVar4;
      *(undefined4 *)(plVar8 + 6) = 0;
      (**(code **)(*plVar8 + 0x2a0))(plVar8,lVar2);
    }
LAB_1401c74fc:
    if (lVar9 != 0) goto LAB_1401c7501;
LAB_1401c753f:
    lVar10 = FUN_1459f0a3a();
LAB_1401c7544:
    if (lVar10 != 0) {
      plVar8 = (longlong *)FUN_1465476bc(DAT_14c951640,lVar10);
      if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
        *(longlong **)(param_1 + 0x58) = plVar8;
        if (plVar8 == (longlong *)0x0) goto LAB_1401c75ec;
      }
      else {
        FUN_1456cec3c(plVar8);
        *(longlong **)(param_1 + 0x58) = plVar8;
      }
      if (lVar9 == 0) {
        uVar12 = 0x3f800000;
      }
      else {
        uVar12 = *(undefined4 *)(lVar9 + 0x218);
      }
      uVar1 = *(uint *)(lVar2 + 0xc);
      *(uint *)(plVar8 + 5) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar7;
        }
      }
      *(int *)((longlong)plVar8 + 0x2c) = iVar4;
      *(undefined4 *)(plVar8 + 6) = uVar12;
      (**(code **)(*plVar8 + 0x2a0))(plVar8,lVar2);
    }
LAB_1401c75ec:
    if (lVar9 != 0) goto LAB_1401c75f1;
LAB_1401c762f:
    lVar10 = FUN_1459efb74();
LAB_1401c7634:
    if (lVar10 != 0) {
      plVar8 = (longlong *)FUN_146547778(DAT_14c951640,lVar10);
      if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
        *(longlong **)(param_1 + 0x68) = plVar8;
        if (plVar8 == (longlong *)0x0) goto LAB_1401c76d5;
      }
      else {
        FUN_1456cec3c(plVar8);
        *(longlong **)(param_1 + 0x68) = plVar8;
      }
      uVar12 = 0;
      if (lVar9 != 0) {
        uVar12 = *(undefined4 *)(lVar9 + 0x2d8);
      }
      uVar1 = *(uint *)(lVar2 + 0xc);
      *(uint *)(plVar8 + 5) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar7;
        }
      }
      *(int *)((longlong)plVar8 + 0x2c) = iVar4;
      *(undefined4 *)(plVar8 + 6) = uVar12;
      (**(code **)(*plVar8 + 0x2a0))(plVar8,lVar2);
    }
  }
  else {
    lVar5 = FUN_145a7fd5e();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar10 = *(longlong *)(lVar9 + 0x1d8);
      goto LAB_1401c7469;
    }
LAB_1401c7501:
    lVar10 = *(longlong *)(lVar9 + 0x210);
    if ((((lVar10 == 0) || (lVar5 = FUN_1459f0a3a(), lVar5 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30 || (lVar10 = *(longlong *)(lVar9 + 0x210), lVar10 == 0)))) goto LAB_1401c753f;
    lVar5 = FUN_1459f0a3a();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar10 = *(longlong *)(lVar9 + 0x210);
      goto LAB_1401c7544;
    }
LAB_1401c75f1:
    lVar10 = *(longlong *)(lVar9 + 0x2d0);
    if ((((lVar10 == 0) || (lVar5 = FUN_1459efb74(), lVar5 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30 || (lVar10 = *(longlong *)(lVar9 + 0x2d0), lVar10 == 0)))) goto LAB_1401c762f;
    lVar5 = FUN_1459efb74();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar10 = *(longlong *)(lVar9 + 0x2d0);
      goto LAB_1401c7634;
    }
  }
LAB_1401c76d5:
  plVar8 = (longlong *)FUN_146547834(DAT_14c951640);
  if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(param_1 + 0x70) = plVar8;
    if (plVar8 != (longlong *)0x0) goto LAB_1401c7709;
  }
  else {
    FUN_1456cec3c(plVar8);
    *(longlong **)(param_1 + 0x70) = plVar8;
LAB_1401c7709:
    uVar12 = 0;
    if (lVar9 != 0) {
      uVar12 = *(undefined4 *)(lVar9 + 0x3c8);
    }
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(plVar8 + 5) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar7;
      }
    }
    *(int *)((longlong)plVar8 + 0x2c) = iVar4;
    *(undefined4 *)(plVar8 + 6) = uVar12;
    (**(code **)(*plVar8 + 0x2a0))(plVar8,lVar2);
  }
  if ((((lVar9 == 0) || (lVar10 = *(longlong *)(lVar9 + 0x418), lVar10 == 0)) ||
      (lVar5 = FUN_145bba688(), lVar5 == 0)) ||
     (((*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) || (lVar10 = *(longlong *)(lVar9 + 0x418), lVar10 == 0)))) {
    lVar10 = FUN_145bba688();
LAB_1401c77b5:
    uVar3 = DAT_14c951640;
    if (lVar10 != 0) {
      FUN_14058b40c(DAT_14c951640,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
      local_a8 = (longlong *)0x0;
      local_78 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_f0 = uVar3;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      lStack_b8 = 0;
      local_f8 = lVar10;
      plVar8 = (longlong *)FUN_1402710dd(&local_f8);
      if (lStack_b8 != 0) {
        plVar6 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar6 = local_98;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if ((plVar8 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
        *(longlong **)(param_1 + 0x78) = plVar8;
        if (plVar8 == (longlong *)0x0) goto LAB_1401c78c0;
      }
      else {
        FUN_1456cec3c(plVar8);
        *(longlong **)(param_1 + 0x78) = plVar8;
      }
      uVar12 = 0;
      if (lVar9 != 0) {
        uVar12 = *(undefined4 *)(lVar9 + 0x420);
      }
      uVar1 = *(uint *)(lVar2 + 0xc);
      *(uint *)(plVar8 + 5) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar4 = iVar7;
        }
      }
      *(int *)((longlong)plVar8 + 0x2c) = iVar4;
      *(undefined4 *)(plVar8 + 6) = uVar12;
      (**(code **)(*plVar8 + 0x2a0))(plVar8,lVar2);
    }
LAB_1401c78c0:
    if (lVar9 != 0) goto LAB_1401c78c5;
LAB_1401c7903:
    lVar10 = FUN_1459f01e8();
  }
  else {
    lVar5 = FUN_145bba688();
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar10 = *(longlong *)(lVar9 + 0x418);
      goto LAB_1401c77b5;
    }
LAB_1401c78c5:
    lVar10 = *(longlong *)(lVar9 + 0x1c8);
    if ((((lVar10 == 0) || (lVar5 = FUN_1459f01e8(), lVar5 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30 || (lVar10 = *(longlong *)(lVar9 + 0x1c8), lVar10 == 0)))) goto LAB_1401c7903;
    lVar5 = FUN_1459f01e8();
    if (((lVar5 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_1401c790d;
    lVar10 = *(longlong *)(lVar9 + 0x1c8);
  }
  if (lVar10 != 0) {
    lVar10 = FUN_1465478e6(DAT_14c951640,lVar10);
    if ((lVar10 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x60) = lVar10;
      if (lVar10 == 0) goto LAB_1401c790d;
    }
    else {
      FUN_1456cec3c(lVar10);
      *(longlong *)(param_1 + 0x60) = lVar10;
    }
    if (lVar9 == 0) {
      uVar12 = 0x3f800000;
    }
    else {
      uVar12 = *(undefined4 *)(lVar9 + 0x1d0);
    }
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(lVar10 + 0x28) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar4 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar7;
      }
    }
    *(int *)(lVar10 + 0x2c) = iVar4;
    *(undefined4 *)(lVar10 + 0x30) = uVar12;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
  }
LAB_1401c790d:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c7e14 FUN_1401c7e14 body=70 status=ok
// SIG undefined FUN_1401c7e14(void)

longlong FUN_1401c7e14(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147d597be(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1401c7e5a(lVar2,1);
  return lVar2;
}



// FUNCTION 1401c7e5a FUN_1401c7e5a body=27 status=ok
// SIG undefined FUN_1401c7e5a(void)

void FUN_1401c7e5a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1401c7e76 FUN_1401c7e76 body=61 status=ok
// SIG undefined FUN_1401c7e76(void)

undefined8 * FUN_1401c7e76(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e01600;
  lVar1 = FUN_1401c7eb4();
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401c7eb4 FUN_1401c7eb4 body=138 status=ok
// SIG undefined FUN_1401c7eb4(void)

undefined8 FUN_1401c7eb4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    lVar1 = plVar2[1];
    if ((*(byte *)((longlong)plVar2 + 0x53) & lVar1 != 0) == 0) {
      if ((lVar1 != 0) && (*(char *)((longlong)plVar2 + 0x55) == '\0')) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
      }
      plVar2[1] = 0;
      plVar2 = *(longlong **)(param_1 + 0x18);
    }
    else {
      lVar1 = 0;
    }
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1401c7f3e FUN_1401c7f3e body=137 status=ok
// SIG undefined FUN_1401c7f3e(void)

undefined8 * FUN_1401c7f3e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 2) {
    *param_1 = *param_3;
    *param_3 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = iVar1;
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    *(int *)((longlong)param_1 + 0xc) = iVar2;
    param_2[1] = 0;
    if (iVar3 + iVar1 < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar2 < iVar3 + iVar1) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,*param_3,iVar3);
  }
  return param_1;
}



// FUNCTION 1401c7fda FUN_1401c7fda body=221 status=ok
// SIG undefined FUN_1401c7fda(void)

void FUN_1401c7fda(longlong param_1,undefined8 *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  PSRWLOCK SRWLock;
  char *pcVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    pcVar1 = (char *)(param_2 + 1);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar4 = (char *)(lVar3 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar4 = param_3 + 0x10;
      }
      else {
        pcVar4 = (char *)(lVar3 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    if (pcVar1 != pcVar4) {
      iVar2 = *(int *)(pcVar4 + 8);
      _Src = *(void **)pcVar4;
      *(int *)(param_2 + 2) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_2 + 0x14) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      }
      else {
        FUN_14479fa02(pcVar1,iVar2);
        if (iVar2 != 0) {
          memcpy(*(void **)pcVar1,_Src,(longlong)iVar2 << 4);
        }
      }
    }
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401c8098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 1401c80b8 FUN_1401c80b8 body=217 status=ok
// SIG undefined FUN_1401c80b8(void)

void FUN_1401c80b8(longlong param_1,undefined8 *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  PSRWLOCK SRWLock;
  char *pcVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    pcVar1 = (char *)(param_2 + 1);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar4 = (char *)(lVar3 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar4 = param_3 + 0x10;
      }
      else {
        pcVar4 = (char *)(lVar3 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    if (pcVar1 != pcVar4) {
      iVar2 = *(int *)(pcVar4 + 8);
      _Src = *(void **)pcVar4;
      *(int *)(param_2 + 2) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_2 + 0x14) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      }
      else {
        FUN_1447c510a(pcVar1,iVar2);
        if (iVar2 != 0) {
          memcpy(*(void **)pcVar1,_Src,(longlong)iVar2 << 2);
        }
      }
    }
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401c8158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 1401c8192 FUN_1401c8192 body=144 status=ok
// SIG undefined FUN_1401c8192(void)

void FUN_1401c8192(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  char *pcVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar2 = (char *)(lVar1 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar2 = param_3 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar1 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    FUN_140de4b5e(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401c820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 1401c8222 FUN_1401c8222 body=2094 status=ok
// SIG undefined FUN_1401c8222(void)

void FUN_1401c8222(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 *param_6)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  char cVar19;
  bool bVar20;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_80;
  undefined8 local_78;
  uint uStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1448c58dc(param_2,&local_78);
  param_6[4] = local_68;
  param_6[5] = fStack_64;
  param_6[6] = fStack_60;
  param_6[7] = fStack_5c;
  *param_6 = (undefined4)local_78;
  param_6[1] = local_78._4_4_;
  param_6[2] = uStack_70;
  param_6[3] = fStack_6c;
  uVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 8) + 0x178) + 8))();
  uVar8 = FUN_1448c569e(uVar8,param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
    DAT_14ca4b320 = FUN_145900d44();
    _Init_thread_footer(&DAT_14ca4b328);
  }
  cVar6 = '\x02';
  if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
    cVar6 = *(char *)(DAT_14ca4b320 + 0x41);
  }
  *(undefined8 *)(param_6 + 8) = uVar8;
  *(char *)(param_6 + 10) = cVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x3090);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca64244) &&
     (FUN_144b3d300(&DAT_14ca64244), lVar10 = DAT_14ca63d18, DAT_14ca64244 == -1)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar15 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar15 = (ulonglong)(bVar5 ^ 1);
    }
    DAT_14ca64240 = *(int *)(lVar10 + uVar15 * 4) == 0;
    _Init_thread_footer(&DAT_14ca64244);
  }
  uVar7 = FUN_1400b0b91(uVar3,8);
  uStack_70 = 0;
  if ((uVar7 < 2) && ((DAT_14ca64240 & 1) != 0)) {
    if (*(char *)(DAT_14c9b7978 + 1) == '\x01') {
      uStack_70 = (uint)(*(longlong *)(param_2 + 0x13180) != 0);
    }
    else {
      uStack_70 = 0;
    }
  }
  fStack_6c = *(float *)(DAT_14c9b7948 + 4);
  local_68 = *(float *)(DAT_14c9b7960 + 4);
  fStack_64 = local_68 - fStack_6c;
  if (fStack_64 <= 0.0001) {
    fStack_64 = 0.0001;
  }
  fStack_64 = 1.0 / fStack_64;
  if ((char)uStack_70 == '\0') {
    plVar9 = &DAT_14ca63b28;
  }
  else {
    plVar9 = (longlong *)(param_2 + 0x13180);
  }
  local_78 = *(ulonglong *)(*plVar9 + 8);
  fStack_5c = (float)*(double *)(param_2 + 0x13160);
  fStack_60 = (float)*(double *)(param_2 + 0x13158);
  lVar10 = FUN_1401c8a52();
  local_80 = 1;
  local_88 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_50,&local_78,*(undefined8 *)(lVar10 + 0x48));
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
    if (local_50 != 0) {
      LOCK();
      puVar1 = (uint *)(local_50 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar7 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_50 + 8);
        LOCK();
        uVar7 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar7 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(local_50 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = local_50;
          plVar9 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar9;
              LOCK();
              bVar20 = plVar9 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar20) {
                plVar9 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar20);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar20 = plVar12 != DAT_14ca843c8;
              plVar9 = plVar11;
              if (bVar20) {
                plVar12 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar20);
          }
        }
      }
    }
  }
  lVar10 = FUN_1401c8a52();
  cVar6 = *(char *)(lVar10 + 0x41);
  if (cVar6 == '\x03') {
    cVar6 = '\x02';
  }
  *(longlong *)(param_6 + 0xc) = local_50;
  *(char *)(param_6 + 0xe) = cVar6;
  if (local_50 != 0) {
    LOCK();
    puVar1 = (uint *)(local_50 + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_50 + 8);
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar5 = *(byte *)(local_50 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = local_50;
        plVar9 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar5 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar9;
            LOCK();
            bVar20 = plVar9 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar20) {
              plVar9 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar20);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar20 = plVar12 != DAT_14ca843c8;
            plVar9 = plVar11;
            if (bVar20) {
              plVar12 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar20);
        }
      }
    }
  }
  uVar8 = *param_3;
  FUN_140250662();
  cVar6 = DAT_14c9b79c1;
  if (DAT_14c9b79c1 == '\x03') {
    cVar6 = '\x02';
  }
  *(undefined8 *)(param_6 + 0x10) = uVar8;
  *(char *)(param_6 + 0x12) = cVar6;
  *(undefined8 *)(param_6 + 0x2c) = param_3[0xb];
  uVar8 = param_3[1];
  local_88 = local_88 & 0xffffff00;
  uVar13 = FUN_1401c8e48(&DAT_14ca63c98,param_1,param_2,7);
  *(undefined8 *)(param_6 + 0x6c) = uVar13;
  bVar5 = *(byte *)(param_2 + 0x3099) >> 1 & 1;
  if (*(char *)(param_2 + 0x23f5) != '\0') {
    bVar5 = 2;
  }
  *(byte *)((longlong)param_6 + 0x1ad) = bVar5;
  switch(param_5) {
  case 1:
    plVar9 = (longlong *)param_3[10];
    cVar19 = '\x02';
    cVar6 = '\x02';
    if (*plVar9 != 0) {
      cVar6 = ((*(byte *)(*plVar9 + 0x24) & 4) == 0) + '\x01';
    }
    lVar10 = plVar9[4];
    if (lVar10 != 0) {
      cVar19 = ((*(byte *)(lVar10 + 0x24) & 4) == 0) + '\x01';
    }
    if (*(char *)(param_2 + 0x23f5) == '\x01') {
LAB_1401c8866:
      lVar16 = 0x30;
      lVar17 = 0x28;
      cVar6 = cVar19;
    }
    else {
      FUN_1448944a0(&local_78,
                    *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2));
      if ((local_78 & 2) != 0) {
        lVar10 = plVar9[4];
        goto LAB_1401c8866;
      }
      lVar10 = *plVar9;
      lVar16 = 0x10;
      lVar17 = 8;
    }
    *(longlong *)(param_6 + 0x30) = lVar10;
    *(undefined8 *)(param_6 + 0x32) = 0;
    *(char *)(param_6 + 0x34) = cVar6;
    *(undefined1 *)((longlong)param_6 + 0xd1) = 0;
    *(undefined2 *)((longlong)param_6 + 0xd2) = 0xffff;
    *(undefined8 *)(param_6 + 0x36) = *(undefined8 *)((longlong)plVar9 + lVar17);
    *(undefined8 *)(param_6 + 0x38) = 0;
    *(char *)(param_6 + 0x3a) = cVar6;
    *(undefined1 *)((longlong)param_6 + 0xe9) = 0;
    *(undefined2 *)((longlong)param_6 + 0xea) = 0xffff;
    *(undefined8 *)(param_6 + 0x3c) = *(undefined8 *)((longlong)plVar9 + lVar16);
    *(undefined8 *)(param_6 + 0x3e) = 0;
    *(char *)(param_6 + 0x40) = cVar6;
    *(undefined1 *)((longlong)param_6 + 0x101) = 0;
    *(undefined2 *)((longlong)param_6 + 0x102) = 0xffff;
    lVar10 = plVar9[3];
    lVar16 = 3;
    cVar19 = FUN_1401c8c05();
    if (cVar19 != '\0') {
      *(longlong *)(param_6 + 0x42) = lVar10;
      *(undefined8 *)(param_6 + 0x44) = 0;
      *(char *)(param_6 + 0x46) = cVar6;
      *(undefined1 *)((longlong)param_6 + 0x119) = 0;
      *(undefined2 *)((longlong)param_6 + 0x11a) = 0xffff;
      lVar16 = 4;
    }
    if (plVar9[7] != 0) {
      *(longlong *)(param_6 + lVar16 * 6 + 0x30) = plVar9[7];
      *(undefined8 *)(param_6 + lVar16 * 6 + 0x32) = 0;
      *(char *)(param_6 + lVar16 * 6 + 0x34) = cVar6;
      *(undefined1 *)((longlong)param_6 + lVar16 * 0x18 + 0xd1) = 0;
      *(undefined2 *)((longlong)param_6 + lVar16 * 0x18 + 0xd2) = 0xffff;
    }
    uVar8 = param_3[2];
    break;
  case 2:
    *(undefined8 *)(param_6 + 0x30) = param_3[3];
    *(undefined8 *)(param_6 + 0x32) = 0;
    param_6[0x34] = 0xffff0001;
    *(undefined8 *)(param_6 + 0x36) = param_3[5];
    *(undefined8 *)(param_6 + 0x38) = 0;
    param_6[0x3a] = 0xffff0001;
    *(undefined8 *)(param_6 + 0x3c) = param_3[6];
    *(undefined8 *)(param_6 + 0x3e) = 0;
    param_6[0x40] = 0xffff0001;
    *(undefined8 *)(param_6 + 0x42) = param_3[7];
    *(undefined8 *)(param_6 + 0x44) = 0;
    param_6[0x46] = 0xffff0001;
    break;
  case 3:
    *(undefined8 *)(param_6 + 0x30) = param_3[3];
    *(undefined8 *)(param_6 + 0x32) = 0;
    param_6[0x34] = 0xffff0001;
    *(undefined8 *)(param_6 + 0x36) = param_3[6];
    *(undefined8 *)(param_6 + 0x38) = 0;
    param_6[0x3a] = 0xffff0001;
    *(undefined8 *)(param_6 + 0x3c) = param_3[7];
    *(undefined8 *)(param_6 + 0x3e) = 0;
    param_6[0x40] = 0xffff0001;
    break;
  case 4:
    uVar13 = param_3[3];
    goto LAB_1401c89a3;
  case 5:
    uVar13 = param_3[4];
LAB_1401c89a3:
    *(undefined8 *)(param_6 + 0x30) = uVar13;
    *(undefined8 *)(param_6 + 0x32) = 0;
    param_6[0x34] = 0xffff0001;
  }
  cVar6 = FUN_1401c8c05();
  if (cVar6 != '\0') {
    lVar10 = param_3[8];
    uVar2 = *(undefined1 *)(lVar10 + 0x94);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar14 = puVar18 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x50);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = puVar18 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar14;
    puVar18[1] = *(undefined8 *)(lVar10 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 0;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar18 + 5) = 0;
    *puVar18 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar18 + 6) = uVar2;
    *(undefined1 *)(puVar18 + 7) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x35) = 0;
    puVar18[8] = lVar10;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    *(undefined8 **)(param_6 + 0x2e) = puVar18;
  }
  *(undefined8 *)(param_6 + 0x60) = uVar8;
  *(undefined8 *)(param_6 + 0x62) = 0;
  *(undefined2 *)(param_6 + 100) = 0x101;
  param_6[0x65] = 0x21;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c8a52 FUN_1401c8a52 body=434 status=ok
// SIG undefined FUN_1401c8a52(void)

undefined * FUN_1401c8a52(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2090) {
    FUN_144b3d300(&DAT_14c9c2090);
    if (DAT_14c9c2090 == -1) {
      FUN_1456d95ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"DeferredDecals";
      local_70 = L"DeferredDecal";
      local_78 = L"FDeferredDecalUniformParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x3f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c2010,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ba5e5b);
      _Init_thread_footer(&DAT_14c9c2090);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c2010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c8c05 FUN_1401c8c05 body=253 status=ok
// SIG undefined FUN_1401c8c05(void)

undefined8 FUN_1401c8c05(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c25c8) {
    FUN_144b3d300(&DAT_14c9c25c8);
    if (DAT_14c9c25c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.AllowInkMap",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9c25c0 = 0;
      }
      else {
        DAT_14c9c25c0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9c25c8);
    }
  }
  lVar2 = DAT_14c9c25c0;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar7 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar7 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar7 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar7 * 4) != 0);
}



// FUNCTION 1401c8d02 FUN_1401c8d02 body=325 status=ok
// SIG undefined FUN_1401c8d02(void)

undefined8 *
FUN_1401c8d02(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar2 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  lVar4 = DAT_14ca4b320;
  puVar6[3] = uVar2;
  lVar3 = *(longlong *)(lVar4 + 0x48);
  puVar6[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar6[5] = lVar4;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2f97b8;
  puVar6[8] = uVar2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402aa76e(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1401c8e48 FUN_1401c8e48 body=705 status=ok
// SIG undefined FUN_1401c8e48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1401c8e48(longlong param_1,undefined8 param_2,longlong param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  byte local_98;
  byte local_81;
  undefined8 local_80;
  void *local_78;
  int local_70;
  void *local_68;
  undefined8 uStack_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0x50) != '\0') || (*(char *)(param_1 + 0x51) == '\x01')) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca625c0) {
      FUN_144b3d300(&DAT_14ca625c0);
      if (DAT_14ca625c0 == -1) {
        _DAT_14ca62580 = &DAT_14ca62120;
        _DAT_14ca62588 = &DAT_14ca62138;
        _DAT_14ca62590 = &DAT_14ca62150;
        _DAT_14ca62598 = &DAT_14ca62168;
        _DAT_14ca625a0 = &DAT_14ca62180;
        _DAT_14ca625a8 = &DAT_14ca62198;
        _DAT_14ca625b0 = &DAT_14ca621b0;
        _DAT_14ca625b8 = &DAT_14ca621c8;
        _Init_thread_footer(&DAT_14ca625c0);
      }
    }
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(&DAT_14ca62580 + (longlong)param_4 * 8) + 0x10) + 4
                    );
    if (((0xfffffffd < iVar1 - 3U) && (*(char *)(param_3 + 0x23e8) == '\0')) &&
       (*(char *)(*(longlong *)(param_3 + 8) + 0xc9) == '\x01')) {
      FUN_14019a1f8(&local_68);
      uVar8 = 0;
      if ((4 < uStack_60._4_4_) || ((0x19U >> (uStack_60._4_4_ & 0x1f) & 1) == 0))
      goto LAB_1401c8fee;
      if (-1 < *(int *)(param_1 + 0x54)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
      iVar2 = *(int *)(param_1 + 0x30);
      if ((longlong)iVar2 != 0) {
        local_81 = param_5;
        local_68 = (void *)0x0;
        uStack_60 = 0;
        lVar9 = *(longlong *)(param_1 + 0x28);
        lVar10 = 0;
        local_80 = param_2;
        do {
          plVar3 = *(longlong **)(lVar9 + lVar10);
          if (plVar3 != (longlong *)0x0) {
            bVar11 = *(byte *)(param_1 + 0x51) & local_81;
            cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
            if (cVar5 != '\0') {
              local_98 = bVar11;
              lVar7 = (**(code **)(*plVar3 + 8))(plVar3,local_80,param_3,iVar1);
              uVar4 = uStack_60;
              if (lVar7 != 0) {
                lVar12 = (longlong)(int)uStack_60;
                uVar6 = (int)uStack_60 + 1;
                uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
                if (uStack_60._4_4_ < uVar6) {
                  FUN_1401ca97a(&local_68,uVar4 & 0xffffffff);
                }
                *(longlong *)((longlong)local_68 + lVar12 * 8) = lVar7;
              }
            }
          }
          _Src = local_68;
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar2 * 8 != lVar10);
        lVar9 = (longlong)(int)uStack_60;
        if (lVar9 == 0) {
          uVar8 = 0;
        }
        else {
          local_78 = (void *)0x0;
          local_70 = (int)uStack_60;
          FUN_147329b22(&local_78,uStack_60 & 0xffffffff);
          memcpy(local_78,_Src,lVar9 << 3);
          uVar8 = FUN_1430bb08c(local_80,&local_78);
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8(local_68);
        }
        goto LAB_1401c8fee;
      }
    }
  }
  uVar8 = 0;
LAB_1401c8fee:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c912c FUN_1401c912c body=226 status=ok
// SIG undefined FUN_1401c912c(void)

longlong * FUN_1401c912c(longlong *param_1)

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
  pcVar13 = FUN_1463ff246;
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



// FUNCTION 1401c9210 FUN_1401c9210 body=143 status=ok
// SIG undefined FUN_1401c9210(void)

void FUN_1401c9210(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((*(longlong **)(param_1 + 0x988) != (longlong *)0x0) && (*(int *)(param_1 + 0x984) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x980), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x984))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      iVar2 = *(int *)(param_1 + 0x970);
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x988) + 0x10))();
      *(bool *)(lVar3 + 0x148) = 0 < iVar2;
      if (0 < iVar2) {
        *(undefined8 *)(lVar3 + 0x150) = DAT_14c872be0;
      }
    }
  }
  return;
}



// FUNCTION 1401c92a0 FUN_1401c92a0 body=126 status=ok
// SIG undefined FUN_1401c92a0(void)

undefined1 FUN_1401c92a0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_30 = &local_11;
    local_11 = 0;
    local_20 = &local_30;
    local_28 = &LAB_143622136;
    FUN_1448e6002(lVar2 + 0x138);
    uVar1 = local_11;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401c9320 FUN_1401c9320 body=806 status=ok
// SIG undefined FUN_1401c9320(void)

void FUN_1401c9320(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148;
  undefined1 local_138 [24];
  double local_120;
  double dStack_118;
  double local_110;
  double *local_108;
  double **ppdStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double *local_a8;
  double **ppdStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
    lVar10 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x138) != 0)) {
      plVar14 = (longlong *)param_1[0x15];
      if (plVar14 == (longlong *)0x0) {
        if (param_1 == (longlong *)0x0) goto LAB_1401c9552;
      }
      else if ((((*(uint *)(plVar14 + 1) >> 0x1e & 1) != 0) ||
               (cVar7 = (**(code **)(*plVar14 + 0x448))(), param_1 == (longlong *)0x0)) ||
              (cVar7 == '\0')) goto LAB_1401c9552;
      if ((((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) &&
          (cVar7 = (**(code **)(*param_1 + 0x480))(param_1,0), cVar7 != '\0')) &&
         (lVar11 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff), lVar11 != 0)) {
        local_a8 = &local_120;
        local_120 = (double)((ulonglong)local_120 & 0xffffffffffffff00);
        ppdStack_100 = &local_a8;
        local_108 = (double *)&LAB_143622136;
        FUN_1448e6002(lVar11 + 0x138);
        if (local_120._0_1_ == '\x01') {
          plVar14 = param_1;
          uVar8 = (**(code **)(*param_1 + 0x7f0))(param_1,&local_108,lVar10);
          lVar10 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_e0 - (double)param_1[0x4d]));
          auVar4._8_4_ = (int)lVar10;
          auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_e8 - (double)param_1[0x4c]))
          ;
          auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          iVar9 = movmskpd(uVar8,auVar4);
          lVar10 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_d0 - (double)param_1[0x4f]));
          auVar3._8_4_ = (int)lVar10;
          auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_d8 - (double)param_1[0x4e]))
          ;
          auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          uVar12 = movmskpd((int)plVar14,auVar3);
          if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
            lVar10 = -(ulonglong)
                      (9.999999747378752e-05 < ABS((double)ppdStack_100 - (double)param_1[0x49]));
            auVar6._8_4_ = (int)lVar10;
            auVar6._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)local_108 - (double)param_1[0x48]))
            ;
            auVar6._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
            uVar12 = movmskpd(iVar9,auVar6);
            lVar10 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_f0 - (double)param_1[0x4b]));
            auVar5._8_4_ = (int)lVar10;
            auVar5._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS(local_f8 - (double)param_1[0x4a]));
            auVar5._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
            iVar9 = movmskpd(0,auVar5);
            uVar13 = iVar9 << 2 | uVar12;
            if (uVar13 == 0) goto LAB_1401c9552;
            lVar10 = -(ulonglong)
                      (9.999999747378752e-05 < ABS((double)param_1[0x49] + (double)ppdStack_100));
            auVar2._8_4_ = (int)lVar10;
            auVar2._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)param_1[0x48] + (double)local_108))
            ;
            auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
            iVar9 = movmskpd(uVar12,auVar2);
            auVar1._8_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)param_1[0x4b] + dStack_f0));
            auVar1._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)param_1[0x4a] + local_f8));
            uVar12 = movmskpd(uVar13,auVar1);
            if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) goto LAB_1401c9552;
          }
          local_110 = local_d8 - (double)param_1[0x4e];
          local_a8 = local_108;
          ppdStack_a0 = ppdStack_100;
          local_98 = local_f8;
          dStack_90 = dStack_f0;
          local_120 = local_e8 - (double)param_1[0x4c];
          dStack_118 = dStack_e0 - (double)param_1[0x4d];
          FUN_1448052ee(&local_a8,local_138);
          local_148 = 0;
          local_150 = 2;
          local_158 = 0;
          FUN_1407fd932(param_1,&local_120,local_138,0);
        }
      }
    }
  }
LAB_1401c9552:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c9648 FUN_1401c9648 body=965 status=ok
// SIG undefined FUN_1401c9648(void)

void FUN_1401c9648(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = (uint *)(param_1 + 0x570);
  iVar2 = *(int *)(param_1 + 0x588);
  if (iVar2 == 0) {
    uVar15 = 1;
    iVar10 = 0;
    uVar14 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x580);
    if (*(uint **)(param_1 + 0x580) == (uint *)0x0) {
      puVar5 = local_78;
    }
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1401c970a;
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar7 == 0);
    }
    else {
      iVar10 = 0;
      uVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x560) + (longlong)iVar4 * 0x10);
      local_6c = FUN_1433d8eb0(param_2);
      local_60 = &local_68;
      local_58 = &local_6c;
      FUN_144a405ac(param_1 + 0x4c0,local_4c,&local_60,0);
      uVar7 = ~(uint)uVar15 & uVar7;
      puVar5 = *(uint **)(param_1 + 0x580);
      if (*(uint **)(param_1 + 0x580) == (uint *)0x0) {
        puVar5 = local_78;
      }
      iVar3 = *(int *)(param_1 + 0x588);
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar11 = puVar5[lVar12] & uVar7;
      if (uVar11 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar9) {
          lVar13 = 0;
          do {
            uVar11 = puVar5[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_1401c9888;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar7 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1401c9888:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_1401c970a:
  (**(code **)(*param_2 + 0xcd8))(param_2,param_1 + 0x4c0,param_1 + 0x510);
  puVar5 = local_78;
  iVar2 = *(int *)(param_1 + 0x588);
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x580);
    if (*(uint **)(param_1 + 0x580) == (uint *)0x0) {
      puVar6 = local_78;
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_1401c98e9;
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      FUN_14064ce80(param_1 + 0x4c0,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x560) + (longlong)iVar4 * 0x10));
      uVar7 = ~(uint)uVar15 & uVar7;
      puVar6 = *(uint **)(param_1 + 0x580);
      if (*(uint **)(param_1 + 0x580) == (uint *)0x0) {
        puVar6 = puVar5;
      }
      iVar3 = *(int *)(param_1 + 0x588);
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar11 = puVar6[lVar12] & uVar7;
      if (uVar11 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar9) {
          lVar13 = 0;
          do {
            uVar11 = puVar6[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_1401c99b0;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar7 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1401c99b0:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_1401c98e9:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401c9a0e FUN_1401c9a0e body=533 status=ok
// SIG undefined FUN_1401c9a0e(void)

double * FUN_1401c9a0e(double *param_1,double *param_2,double *param_3)

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
  double dVar11;
  
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar1 = param_1[2];
  dVar4 = sin(dVar2 * 0.01745329238474369);
  dVar5 = sin(dVar3 * 0.01745329238474369);
  dVar6 = sin(dVar1 * 0.01745329238474369);
  sin(0.0);
  dVar7 = cos(dVar2 * 0.01745329238474369);
  dVar8 = cos(dVar3 * 0.01745329238474369);
  dVar9 = cos(dVar1 * 0.01745329238474369);
  cos(0.0);
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar10 = DAT_14c8464e8 * 0.0;
  dVar11 = DAT_14c8464f0 * 0.0;
  *param_2 = DAT_14c8464e0 * 0.0 +
             dVar1 * -(dVar4 * dVar9 * dVar8 + dVar5 * dVar6) +
             dVar3 * (dVar4 * dVar6 * dVar8 - dVar5 * dVar9) + dVar2 * dVar7 * dVar8;
  param_2[1] = dVar10 + dVar1 * (dVar8 * dVar6 - dVar5 * dVar4 * dVar9) +
                        dVar3 * (dVar4 * dVar6 * dVar5 + dVar8 * dVar9) + dVar2 * dVar5 * dVar7;
  param_2[2] = (dVar4 * dVar2 - dVar7 * dVar6 * dVar3) + dVar7 * dVar9 * dVar1 + dVar11;
  return param_2;
}



// FUNCTION 1401c9c24 FUN_1401c9c24 body=482 status=ok
// SIG undefined FUN_1401c9c24(void)

void FUN_1401c9c24(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint *_Dst;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  lVar1 = param_1[1];
  iVar5 = (int)param_2[1];
  if (0 < (longlong)iVar5) {
    iVar7 = -iVar5;
    uVar9 = (longlong)iVar5;
    do {
      lVar8 = *param_2;
      lVar4 = lVar8 + uVar9 * 8;
      _Dst = (uint *)(lVar4 + -8);
      iVar5 = *(int *)(lVar4 + -4);
      if ((((iVar5 == 0) || (uVar3 = *_Dst, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
         (((plVar6 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar6 == (longlong *)0x0 || ((int)plVar6[2] != iVar5)) ||
          (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar4 = *plVar6, lVar4 == 0)))))) {
        uVar3 = *(uint *)(param_2 + 1);
        if (uVar9 != uVar3) {
          iVar5 = iVar7 + uVar3;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove(_Dst,(void *)(lVar8 + (longlong)(int)(uVar3 - iVar5) * 8),(longlong)iVar5 << 3);
          uVar3 = *(uint *)(param_2 + 1);
        }
        *(uint *)(param_2 + 1) = uVar3 - 1;
        FUN_148dc2a94(param_2);
      }
      else {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
          lVar4 = 0;
        }
        FUN_1449e3cec(lVar4,CONCAT71((int7)((ulonglong)lVar8 >> 8),1),
                      CONCAT71((int7)((ulonglong)plVar6 >> 8),1));
      }
      iVar7 = iVar7 + 1;
      bVar10 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar10);
    iVar5 = (int)param_2[1];
  }
  if (iVar5 < *(int *)(*param_1 + 8)) {
    do {
      lVar4 = FUN_1418ef8b4(lVar1,param_3);
      if (lVar4 == 0) {
        return;
      }
      iVar5 = (int)param_2[1];
      lVar8 = (longlong)iVar5;
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_14163bfaa(param_2,iVar5);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + lVar8 * 8) = 0;
      uVar3 = *(uint *)(lVar4 + 0xc);
      *(uint *)(lVar2 + lVar8 * 8) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar5 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar4 + 0x10);
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(lVar4 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar5 = iVar7;
        }
      }
      *(int *)(lVar2 + 4 + lVar8 * 8) = iVar5;
    } while ((int)param_2[1] < *(int *)(*param_1 + 8));
  }
  return;
}



// FUNCTION 1401c9e06 FUN_1401c9e06 body=735 status=ok
// SIG undefined FUN_1401c9e06(void)

undefined8 FUN_1401c9e06(longlong *param_1,undefined4 *param_2,double *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_3e8 [32];
  uint local_3c8;
  undefined4 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  wchar_t *local_3a8;
  undefined1 *local_3a0;
  undefined1 *local_398;
  code **local_390;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined1 local_358 [128];
  code *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8 [16];
  undefined8 local_238 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_190;
  undefined1 local_108;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((param_1 == (longlong *)0x0) ||
     (plVar6 = (longlong *)param_1[0x86], plVar6 == (longlong *)0x0)) {
LAB_1401ca0ae:
    uVar4 = DAT_14c8463f8._4_4_;
    uVar3 = (undefined4)DAT_14c8463f8;
    uVar2 = DAT_14c8463f0._4_4_;
    *(undefined4 *)param_3 = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 1) = uVar3;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_390 = &local_2d8;
      local_2d8 = FUN_1417de738;
      local_380 = &LAB_145893408;
      local_388 = &LAB_1458cbbd2;
      local_398 = &LAB_147ba21f1;
      local_3a0 = &LAB_1463e9233;
      local_3a8 = L"Engine";
      local_3b0 = 0;
      local_3b8 = 0x1000000c;
      local_3c0 = 8;
      local_3c8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      plVar6 = (longlong *)param_1[0x86];
      if (plVar6 == (longlong *)0x0) goto LAB_1401ca0ae;
    }
    if ((((DAT_14cae9568 == 0) || (lVar1 = plVar6[2], lVar1 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         != DAT_14cae9568 + 0x30 || (lVar1 = plVar6[0xf], lVar1 == 0)))) goto LAB_1401ca0ae;
    local_2c8 = DAT_14c8464f0;
    local_2d8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_2d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    puVar9 = &DAT_14c846400;
    puVar10 = local_2b8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar9 = &DAT_14c846400;
    puVar10 = local_238;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    local_190 = 0;
    local_108 = 0;
    local_78 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
    local_58 = DAT_14c8464f0;
    local_50 = 0;
    uStack_48 = 0;
    cVar5 = (**(code **)(*plVar6 + 0x358))
                      (plVar6,*(undefined8 *)(lVar1 + 0xf8),&local_2d8,0xffffffff);
    if (cVar5 == '\0') goto LAB_1401ca0ae;
    FUN_14012d55c(&local_2d8,local_358);
    local_3c8 = local_3c8 & 0xffffff00;
    cVar5 = FUN_1401ca69e(param_2,&local_50,local_358,param_3);
    if ((char)param_4 != '\0') {
      *param_3 = *param_3 - (double)(int)local_50;
      param_3[1] = param_3[1] - (double)(int)((ulonglong)local_50 >> 0x20);
    }
    if (cVar5 != '\0') {
      local_368 = *(undefined8 *)(param_2 + 4);
      local_378 = *param_2;
      uStack_374 = param_2[1];
      uStack_370 = param_2[2];
      uStack_36c = param_2[3];
      uVar7 = (**(code **)(*param_1 + 0xb70))(param_1,&local_378,param_3,param_4);
      goto LAB_1401ca0bc;
    }
  }
  uVar7 = 0;
LAB_1401ca0bc:
  if ((local_38 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1401ca0e6 FUN_1401ca0e6 body=1082 status=ok
// SIG undefined FUN_1401ca0e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ca0e6(longlong param_1,double *param_2,undefined1 (*param_3) [16],undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = (double)DAT_1499387d0;
  dVar2 = DAT_1499387d0._8_8_;
  if ((((*param_2 != *(double *)(param_1 + 0x198)) ||
       (NAN(*param_2) || NAN(*(double *)(param_1 + 0x198)))) ||
      (param_2[1] != *(double *)(param_1 + 0x1a0))) ||
     (((NAN(param_2[1]) || NAN(*(double *)(param_1 + 0x1a0)) ||
       (param_2[2] != *(double *)(param_1 + 0x1a8))) ||
      (NAN(param_2[2]) || NAN(*(double *)(param_1 + 0x1a8)))))) {
    pdVar5 = *(double **)(param_1 + 0x230);
    if (pdVar5 == (double *)0x0) {
LAB_1401ca1a0:
      auVar19 = *param_3;
      auVar17 = divpd(auVar19,_DAT_1499387d0);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = *(double *)param_3[1];
      auVar22 = divpd(auVar21,_DAT_1499387d0);
      auVar17 = roundpd(auVar17,auVar17,3);
      auVar22 = roundpd(auVar22,auVar22,3);
      dVar9 = (auVar19._0_8_ - auVar17._0_8_ * dVar1) * 0.008726646259971648;
      dVar10 = (auVar19._8_8_ - auVar17._8_8_ * dVar2) * 0.008726646259971648;
      dVar1 = (*(double *)param_3[1] - auVar22._0_8_ * dVar1) * 0.008726646259971648;
      dVar2 = (0.0 - auVar22._8_8_ * dVar2) * 0.008726646259971648;
      dVar6 = sin(dVar9);
      dVar7 = sin(dVar10);
      dVar8 = sin(dVar1);
      sin(dVar2);
      dVar9 = cos(dVar9);
      dVar10 = cos(dVar10);
      dVar11 = cos(dVar1);
      cos(dVar2);
      dVar1 = dVar7 * dVar6 * dVar8 + dVar10 * dVar9 * dVar11;
      local_e8 = dVar6 * dVar7 * dVar11 - dVar9 * dVar10 * dVar8;
      dStack_e0 = -(dVar6 * dVar10 * dVar11) - dVar9 * dVar7 * dVar8;
      local_d8._8_4_ = SUB84(dVar1,0);
      local_d8._0_8_ = -(dVar10 * dVar6 * dVar8) + dVar7 * dVar9 * dVar11;
      local_d8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    }
    else {
      if (((pdVar5[4] != *(double *)*param_3) || (NAN(pdVar5[4]) || NAN(*(double *)*param_3))) ||
         ((pdVar5[5] != *(double *)(*param_3 + 8) ||
          (((NAN(pdVar5[5]) || NAN(*(double *)(*param_3 + 8)) ||
            (pdVar5[6] != *(double *)param_3[1])) || (NAN(pdVar5[6]) || NAN(*(double *)param_3[1])))
          )))) goto LAB_1401ca1a0;
      local_e8 = *pdVar5;
      dStack_e0 = pdVar5[1];
      local_d8 = *(undefined1 (*) [16])(pdVar5 + 2);
    }
    local_f8 = param_2[2];
    pdVar5 = &local_108;
    local_108 = *param_2;
    dStack_100 = param_2[1];
  }
  else {
    dVar10 = *(double *)*param_3 - *(double *)(param_1 + 0x1b0);
    dVar6 = *(double *)(*param_3 + 8) - *(double *)(param_1 + 0x1b8);
    dVar9 = *(double *)param_3[1] - *(double *)(param_1 + 0x1c0);
    auVar18._8_8_ = dVar6;
    auVar18._0_8_ = dVar10;
    auVar19 = divpd(auVar18,_DAT_1499387d0);
    auVar22._0_8_ = dVar9 / 360.0;
    auVar22._8_8_ = 0;
    auVar17 = roundpd(auVar19,auVar19,3);
    auVar19 = roundpd(auVar22,auVar22,3);
    auVar25._0_8_ = dVar9 - auVar19._0_8_ * dVar1;
    auVar25._8_8_ = 0.0 - auVar19._8_8_ * dVar2;
    dVar10 = dVar10 - auVar17._0_8_ * dVar1;
    dVar6 = dVar6 - auVar17._8_8_ * dVar2;
    auVar24._0_8_ = dVar10 + dVar1;
    auVar24._8_8_ = dVar6 + dVar2;
    auVar23._0_8_ = dVar1 + auVar25._0_8_;
    auVar23._8_8_ = dVar2 + auVar25._8_8_;
    auVar12._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar12._0_8_ = -(ulonglong)(0.0 <= dVar10);
    auVar19._8_8_ = dVar6;
    auVar19._0_8_ = dVar10;
    auVar17 = blendvpd(auVar24,auVar19,auVar12);
    auVar13._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
    auVar13._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
    auVar19 = blendvpd(auVar23,auVar25,auVar13);
    auVar26._0_8_ = auVar17._0_8_ + -360.0;
    auVar26._8_8_ = auVar17._8_8_ + -360.0;
    auVar14._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
    auVar14._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
    auVar22 = blendvpd(auVar17,auVar26,auVar14);
    auVar15._8_8_ = -(ulonglong)(180.0 < auVar19._8_8_);
    auVar15._0_8_ = -(ulonglong)(180.0 < auVar19._0_8_);
    auVar17._8_8_ = auVar19._8_8_ + -360.0;
    auVar17._0_8_ = auVar19._0_8_ + -360.0;
    auVar19 = blendvpd(auVar19,auVar17,auVar15);
    auVar20._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._8_8_));
    auVar20._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._0_8_));
    iVar3 = movmskpd((int)local_c0,auVar20);
    auVar16._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar19._8_8_));
    auVar16._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar19._0_8_));
    uVar4 = movmskpd((int)param_1,auVar16);
    if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) goto LAB_1401ca306;
    FUN_144a7484c(param_3,&local_e8);
    local_118 = param_2[2];
    pdVar5 = &local_128;
    local_128 = *param_2;
    dStack_120 = param_2[1];
  }
  local_130 = param_6;
  local_138 = param_5;
  FUN_144927ad4(param_1,pdVar5,&local_e8,param_4);
LAB_1401ca306:
  if ((local_c0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ca522 FUN_1401ca522 body=380 status=ok
// SIG undefined FUN_1401ca522(void)

longlong FUN_1401ca522(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
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
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1406d0862();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1401ca69e FUN_1401ca69e body=340 status=ok
// SIG undefined FUN_1401ca69e(void)

bool FUN_1401ca69e(double *param_1,int *param_2,double *param_3,double *param_4,byte param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar11 = param_3[3] * dVar1 + param_3[7] * dVar2 + param_3[0xb] * dVar3 + param_3[0xf];
  bVar10 = 0.0 < dVar11;
  if ((bVar10 | param_5) == 1) {
    dVar7 = param_3[9];
    dVar8 = param_3[5];
    dVar9 = param_3[1];
    dVar4 = param_3[0xd];
    if (param_5 != 0) {
      dVar11 = ABS(dVar11);
    }
    iVar5 = param_2[3];
    iVar6 = param_2[1];
    *param_4 = (double)*param_2 +
               (double)((float)(param_2[2] - *param_2) *
                       (float)((dVar1 * *param_3 + dVar2 * param_3[4] + dVar3 * param_3[8] +
                               param_3[0xc]) * (double)(float)(1.0 / dVar11) * 0.5 + 0.5));
    param_4[1] = (double)iVar6 +
                 (double)((float)(iVar5 - iVar6) *
                         (float)((dVar1 * dVar9 + dVar2 * dVar8 + dVar3 * dVar7 + dVar4) *
                                 (double)(float)(1.0 / dVar11) * -0.5 + 1.0 + -0.5));
  }
  else {
    bVar10 = false;
  }
  return bVar10;
}



// FUNCTION 1401ca7f2 FUN_1401ca7f2 body=273 status=ok
// SIG undefined FUN_1401ca7f2(void)

void FUN_1401ca7f2(longlong param_1)

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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9e9b0 == (code *)0x0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_148b767a1;
    local_40 = FUN_1465a0fdc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/PhotoMode",L"KPhotoModeSubsystem",&DAT_14cb9e9b0,FUN_1465a0fba);
  }
  local_18 = DAT_14cb9e9b0;
  if ((DAT_14cb9e9b0 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_14414f124(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401ca904 FUN_1401ca904 body=116 status=ok
// SIG undefined FUN_1401ca904(void)

void FUN_1401ca904(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1401ca97a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1471666da(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1401ca97a FUN_1401ca97a body=353 status=ok
// SIG undefined FUN_1401ca97a(void)

void FUN_1401ca97a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401ca9ff;
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
LAB_1401ca9ff:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401caadc FUN_1401caadc body=141 status=ok
// SIG undefined FUN_1401caadc(void)

void FUN_1401caadc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa08) = 0;
  if (*(int *)(param_1 + 0xa0c) != 0) {
    FUN_1401cab6a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0xa28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa20) = 0;
  if (0x40 < *(uint *)(param_1 + 0xa24)) {
    *(undefined4 *)(param_1 + 0xa24) = 0x40;
    FUN_1401cad60(param_1 + 0xa10,0);
  }
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa00) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401cab6a FUN_1401cab6a body=354 status=ok
// SIG undefined FUN_1401cab6a(void)

void FUN_1401cab6a(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar7 = 0x40;
    }
    else {
      uVar4 = (ulonglong)param_2 * 0x28;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar3 = uVar4 + 0xf;
          if (param_2 < 0x333) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
          }
          else {
            if ((uVar3 & 0x3ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
              uVar6 = 0x32;
              if (0x32 < bVar2) {
                uVar6 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401cac07;
                lVar1 = uVar6 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar4 & ((uVar3 & 0x3ffffffff0) + uVar4) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
LAB_1401cac07:
      iVar5 = (int)(uVar4 / 0x28);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar5) {
        iVar7 = iVar5;
      }
    }
  }
  if (iVar7 == *(int *)(param_1 + 0xa0c)) {
    return;
  }
  *(int *)(param_1 + 0xa0c) = iVar7;
  FUN_1401caccc(param_1,*(undefined4 *)(param_1 + 0xa08));
  return;
}



// FUNCTION 1401caccc FUN_1401caccc body=148 status=ok
// SIG undefined FUN_1401caccc(void)

void FUN_1401caccc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa00);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa00,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0xa00),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa00,param_2,param_3,0x28);
  return;
}



// FUNCTION 1401cad60 FUN_1401cad60 body=97 status=ok
// SIG undefined FUN_1401cad60(void)

void FUN_1401cad60(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_1401cadc2(param_1,param_2 + 0x1fU >> 5,*(int *)(param_1 + 0x14) + 0x1fU >> 5,4);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 1401cadc2 FUN_1401cadc2 body=132 status=ok
// SIG undefined FUN_1401cadc2(void)

void FUN_1401cadc2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1401cae46 FUN_1401cae46 body=394 status=ok
// SIG undefined FUN_1401cae46(void)

longlong FUN_1401cae46(longlong param_1)

{
  FUN_1401cafd0();
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  memset((void *)(param_1 + 0x370),0,0xb8);
  *(undefined8 *)(param_1 + 0x48c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x494) = 0;
  *(undefined8 *)(param_1 + 0x49c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x760) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x828) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x830) = 0;
  *(undefined8 *)(param_1 + 0x838) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x870) = 0;
  *(undefined8 *)(param_1 + 0x878) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x8d0) = 0;
  *(undefined8 *)(param_1 + 0x8d8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  *(undefined8 *)(param_1 + 0x8e8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined8 *)(param_1 + 0x908) = 0;
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  *(undefined8 *)(param_1 + 0xac0) = 0;
  *(undefined8 *)(param_1 + 0xac8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xad0) = 0;
  *(undefined8 *)(param_1 + 0xad8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xae0) = 0;
  *(undefined8 *)(param_1 + 0xae8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xaf0) = 0;
  *(undefined8 *)(param_1 + 0xaf8) = 0x3f80000000000000;
  memset((void *)(param_1 + 0x920),0,0x2b0);
  *(undefined8 *)(param_1 + 0xb98) = DAT_14c9c0d80;
  *(undefined8 *)(param_1 + 0xba0) = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  *(undefined8 *)(param_1 + 0xba8) = DAT_14c9c0de0;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  *(undefined8 *)(param_1 + 0xbf8) = 0;
  return param_1;
}



// FUNCTION 1401cafd0 FUN_1401cafd0 body=158 status=ok
// SIG undefined FUN_1401cafd0(void)

longlong FUN_1401cafd0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 1401cb06e FUN_1401cb06e body=383 status=ok
// SIG undefined FUN_1401cb06e(void)

undefined8 FUN_1401cb06e(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar3 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & (uint)param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x20) == param_2) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
            *param_3 = *(longlong *)(lVar3 + 8);
            lVar3 = *(longlong *)(lVar3 + 0x10);
            *param_4 = lVar3;
            goto LAB_1401cb1ea;
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uint)param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_2) {
          plVar5 = plVar1 + 1;
          if (plVar5 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            uVar2 = FUN_1412252c6();
            FUN_141225340(uVar2,&local_38,*plVar5);
            if (local_38 != 0) {
              FUN_14491a35e(&local_40,&local_38);
              lVar3 = FUN_14707a0f8(param_1 + 0x50,local_40);
              if (lVar3 != 0) {
                lVar3 = *plVar5;
                *param_3 = lVar3;
                *param_4 = local_40;
LAB_1401cb1ea:
                uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
                goto LAB_1401cb1b9;
              }
            }
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_1401cb1b9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1401cb1ee FUN_1401cb1ee body=115 status=ok
// SIG undefined FUN_1401cb1ee(void)

void FUN_1401cb1ee(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_1);
  if ((param_1[1].LockCount != 0) &&
     (p_Var1 = param_1[1].DebugInfo, p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    (*(code *)**(undefined8 **)p_Var1)(p_Var1,0);
    FUN_1446efa72(param_1 + 1,0,0,0x10);
    param_1[1].LockCount = 0;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001401cb223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1401cb262 FUN_1401cb262 body=243 status=ok
// SIG undefined FUN_1401cb262(void)

undefined8 * FUN_1401cb262(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x1a0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e8c010;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,400);
  FUN_142802576(plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
    param_1[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
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
      goto LAB_1401cb32d;
    }
    param_1[1] = plVar3;
    if (plVar4 == (longlong *)0x0) goto LAB_1401cb32d;
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
    return param_1;
  }
LAB_1401cb32d:
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
  return param_1;
}



// FUNCTION 1401cb356 FUN_1401cb356 body=156 status=ok
// SIG undefined FUN_1401cb356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401cb356(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c833770) {
    FUN_144b3d300(&DAT_14c833770);
    if (DAT_14c833770 == -1) {
      _DAT_14c833748 = (undefined8 *)0x0;
      _DAT_14c833748 = (undefined8 *)FUN_14001cc68(0x18,8);
      *_DAT_14c833748 = 0;
      _DAT_14c833768 = 0;
      _DAT_14c833758 = 0;
      DAT_14c833760 = 0;
      _DAT_14c833750 = _DAT_14c833748;
      atexit(FUN_142746d76);
      _Init_thread_footer(&DAT_14c833770);
    }
  }
  return &DAT_14c833748;
}



// FUNCTION 1401cb3f2 FUN_1401cb3f2 body=1967 status=ok
// SIG undefined FUN_1401cb3f2(void)

longlong * FUN_1401cb3f2(undefined8 *param_1,longlong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_f8 [44];
  uint local_cc;
  longlong local_c8;
  uint *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar15 = param_1 + 1;
  iVar14 = *(int *)(param_1 + 2);
  iVar13 = *(int *)((longlong)param_1 + 0x3c);
  uVar5 = (uint)param_2;
  if (iVar14 != iVar13) {
    puVar4 = param_1 + 8;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[9];
    }
    iVar19 = *(int *)((longlong)puVar4 + (ulonglong)(*(int *)(param_1 + 10) - 1U & uVar5) * 4);
    if (iVar19 != -1) {
      do {
        lVar17 = *plVar15 + (longlong)iVar19 * 0x78;
        if (*(longlong *)(*plVar15 + (longlong)iVar19 * 0x78) == param_2) {
          if (lVar17 != 0) goto LAB_1401cb659;
          break;
        }
        iVar19 = *(int *)(lVar17 + 0x70);
      } while (iVar19 != -1);
    }
  }
  if (iVar13 == 0) {
    *(int *)(param_1 + 2) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0x14) == iVar14) {
      FUN_1410fd1ac(plVar15,iVar14);
    }
    lVar17 = (longlong)iVar14;
    iVar13 = FUN_144a54ea4(param_1 + 3,1);
    puVar4 = (undefined8 *)param_1[5];
    if ((undefined8 *)param_1[5] == (undefined8 *)0x0) {
      puVar4 = param_1 + 3;
    }
    iVar19 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar19 = iVar13;
    }
    bVar2 = (byte)iVar13 & 0x1f;
    puVar11 = (uint *)((longlong)puVar4 + (longlong)(iVar19 >> 5) * 4);
    *puVar11 = *puVar11 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar14 = *(int *)(param_1 + 7);
    lVar17 = (longlong)iVar14;
    iVar19 = *(int *)(param_1[1] + 4 + lVar17 * 0x78);
    *(int *)(param_1 + 7) = iVar19;
    *(int *)((longlong)param_1 + 0x3c) = iVar13 + -1;
    if (iVar13 + -1 != 0) {
      *(undefined4 *)(param_1[1] + (longlong)iVar19 * 0x78) = 0xffffffff;
    }
  }
  puVar4 = param_1 + 3;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[5];
  }
  iVar13 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  puVar11 = (uint *)((longlong)puVar4 + (longlong)(iVar13 >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar14 & 0x1f);
  plVar10 = (longlong *)(param_1[1] + lVar17 * 0x78);
  local_98 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_90 = 0x8000000000;
  local_88 = 0xffffffff;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0xffffffff;
  uStack_5c = 0;
  local_58 = 0xffffffff;
  lVar17 = param_1[1] + 8 + lVar17 * 0x78;
  *(longlong *)(lVar17 + -8) = param_2;
  FUN_140135f3c(lVar17,&local_b8);
  *(undefined4 *)(lVar17 + 0x50) = local_68;
  *(undefined4 *)(lVar17 + 0x54) = uStack_64;
  *(undefined4 *)(lVar17 + 0x58) = uStack_60;
  *(undefined4 *)(lVar17 + 0x5c) = uStack_5c;
  *(undefined8 *)(lVar17 + 0x60) = local_58;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140432214(&local_b8);
  *(undefined4 *)(plVar10 + 0xe) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 2) - *(int *)((longlong)param_1 + 0x3c);
  if ((uVar3 != 0) && (uVar3 != 1)) {
    puVar4 = param_1 + 8;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[9];
    }
    iVar13 = *(int *)((longlong)puVar4 + (ulonglong)(*(int *)(param_1 + 10) - 1U & uVar5) * 4);
    if (iVar13 != -1) {
      do {
        _Dst = (void *)(*plVar15 + (longlong)iVar13 * 0x78);
        if (*(longlong *)(*plVar15 + (longlong)iVar13 * 0x78) == *plVar10) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140432214((longlong)_Dst + 8);
          memmove(_Dst,plVar10,0x70);
          FUN_1427d6c42(plVar15);
          goto LAB_1401cb638;
        }
        iVar13 = *(int *)((longlong)_Dst + 0x70);
      } while (iVar13 != -1);
    }
  }
  if (uVar3 < 4) {
    iVar13 = 1;
  }
  else {
    uVar9 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar3 < 1) || (iVar13 <= *(int *)(param_1 + 10))) {
    uVar5 = *(int *)(param_1 + 10) - 1U & uVar5;
    *(uint *)((longlong)plVar10 + 0x74) = uVar5;
    puVar4 = (undefined8 *)param_1[9];
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
      puVar4 = param_1 + 8;
    }
    *(undefined4 *)(plVar10 + 0xe) =
         *(undefined4 *)
          ((longlong)puVar4 + ((longlong)*(int *)(param_1 + 10) - 1U & (longlong)(int)uVar5) * 4);
    puVar4 = (undefined8 *)param_1[9];
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
      puVar4 = param_1 + 8;
    }
    *(int *)((longlong)puVar4 + ((longlong)*(int *)(param_1 + 10) - 1U & (longlong)(int)uVar5) * 4)
         = iVar14;
  }
  else {
    *(int *)(param_1 + 10) = iVar13;
    FUN_141610130(plVar15);
  }
LAB_1401cb638:
  lVar17 = *plVar15 + (longlong)iVar14 * 0x78;
LAB_1401cb659:
  plVar15 = (longlong *)(lVar17 + 8);
  iVar13 = *(int *)(lVar17 + 100);
  if (0 < iVar13) {
    uVar5 = *(uint *)(lVar17 + 0x60);
    if ((int)uVar5 < 0) goto LAB_1401cb6b1;
    if ((int)uVar5 < DAT_14c9647dc) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    }
    else {
      plVar10 = (longlong *)0x0;
    }
    if ((*plVar10 == 0) || (*(longlong *)(lVar17 + 0x58) == *(longlong *)(*plVar10 + 0x18)))
    goto LAB_1401cb6b1;
    FUN_1427d1838(*param_1);
    iVar13 = *(int *)(lVar17 + 100);
  }
  if ((iVar13 == 0) && (uVar5 = *(uint *)(lVar17 + 0x60), -1 < (int)uVar5)) {
    if ((int)uVar5 < DAT_14c9647dc) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    }
    else {
      plVar10 = (longlong *)0x0;
    }
    lVar12 = *plVar10;
    if (lVar12 != 0) {
      uVar3 = *(uint *)(lVar12 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      if (((*(uint *)(lVar16 + 8) >> 0x1c & 1) != 0) ||
         (*(longlong *)(lVar17 + 0x58) != *(longlong *)(lVar12 + 0x18))) {
        FUN_1427d6a64(param_1);
        uVar5 = *(uint *)(lVar17 + 0x60);
        if ((int)uVar5 < 0) goto LAB_1401cb6b1;
      }
    }
    if ((int)uVar5 < DAT_14c9647dc) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    }
    else {
      plVar10 = (longlong *)0x0;
    }
    lVar12 = *plVar10;
    if (lVar12 != 0) {
      uVar3 = *(uint *)(lVar12 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      if (((*(uint *)(lVar16 + 8) >> 0x1c & 1) == 0) &&
         (*(longlong *)(lVar17 + 0x58) == *(longlong *)(lVar12 + 0x18))) {
        local_b8 = 0;
        uStack_b0 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        }
        else {
          plVar10 = (longlong *)0x0;
        }
        lVar12 = *plVar10;
        if (DAT_14c9647bc < *(int *)(lVar12 + 0xc)) {
          iVar13 = *(int *)(lVar17 + 0x30);
          local_c8 = lVar12;
          if (iVar13 == 0) {
            uVar9 = 1;
            iVar14 = 0;
            iVar19 = 0;
            uVar18 = 0;
          }
          else {
            puVar11 = *(uint **)(lVar17 + 0x28);
            if (*(uint **)(lVar17 + 0x28) == (uint *)0x0) {
              puVar11 = (uint *)(lVar17 + 0x18);
            }
            uVar5 = *puVar11;
            if (uVar5 == 0) {
              iVar14 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar14 = iVar13 + -1;
              }
              uVar18 = 0;
              uVar9 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar9 = uVar18;
              }
              iVar19 = 0;
              do {
                if (uVar9 == uVar18) goto LAB_1401cba2f;
                iVar19 = iVar19 + 0x20;
                uVar5 = puVar11[uVar18 + 1];
                uVar18 = uVar18 + 1;
              } while (uVar5 == 0);
            }
            else {
              iVar19 = 0;
              uVar18 = 0;
            }
            uVar9 = (ulonglong)(-uVar5 & uVar5);
            uVar1 = uVar9 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar14 = (iVar19 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar14) {
              iVar14 = iVar13;
            }
          }
          if (iVar14 < iVar13) {
            local_c0 = (uint *)(lVar17 + 0x18);
            uVar5 = 0xffffffff;
            do {
              local_cc = uVar5;
              uVar5 = *(uint *)(*plVar15 + 8 + (longlong)iVar14 * 0x18);
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              if ((*(uint *)(lVar12 + 8) >> 0x1c & 1) == 0) {
                FUN_1447f71cc(lVar12,0x100000);
              }
              else {
                iVar13 = *(int *)(lVar17 + 0x10) - *(int *)(lVar17 + 0x3c);
                if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar13);
                }
                uVar3 = uStack_b0._4_4_;
                if ((int)uStack_b0._4_4_ < iVar13) {
                  FUN_14481578e(&local_b8);
                  uVar5 = *(uint *)(*plVar15 + 8 + (longlong)iVar14 * 0x18);
                  uVar3 = uStack_b0._4_4_;
                }
                uVar1 = uStack_b0;
                lVar12 = (longlong)(int)uStack_b0;
                uVar8 = (int)uStack_b0 + 1;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
                if (uVar3 < uVar8) {
                  FUN_1446f48e2(&local_b8,uVar1 & 0xffffffff);
                }
                *(uint *)(local_b8 + lVar12 * 4) = uVar5;
                FUN_14034636a(plVar15,iVar14);
              }
              uVar5 = local_cc & ~(uint)uVar9;
              puVar11 = *(uint **)(lVar17 + 0x28);
              if (*(uint **)(lVar17 + 0x28) == (uint *)0x0) {
                puVar11 = local_c0;
              }
              iVar13 = *(int *)(lVar17 + 0x30);
              iVar14 = (int)uVar18;
              lVar12 = (longlong)iVar14;
              uVar3 = puVar11[lVar12] & uVar5;
              if (uVar3 == 0) {
                iVar6 = iVar13 + 0x1e;
                if (-1 < iVar13 + -1) {
                  iVar6 = iVar13 + -1;
                }
                iVar6 = iVar6 >> 5;
                iVar7 = iVar6;
                if (iVar6 < iVar14) {
                  iVar7 = iVar14;
                }
                if (iVar6 <= iVar14) break;
                lVar16 = 0;
                while( true ) {
                  iVar19 = iVar19 + 0x20;
                  uVar3 = puVar11[lVar12 + lVar16 + 1];
                  if (uVar3 != 0) break;
                  lVar16 = lVar16 + 1;
                  if (iVar7 - lVar12 == lVar16) goto LAB_1401cba2f;
                }
                uVar18 = (ulonglong)(iVar14 + (int)lVar16 + 1);
                uVar5 = 0xffffffff;
              }
              uVar9 = (ulonglong)(-uVar3 & uVar3);
              uVar1 = uVar9 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              iVar14 = (iVar19 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            } while (iVar14 < iVar13);
          }
LAB_1401cba2f:
          *(bool *)(lVar17 + 0x6c) = (int)uStack_b0 == 0;
          uVar5 = *(uint *)(local_c8 + 0xc);
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          FUN_1447f71cc(lVar12,0x100000);
          lVar12 = local_b8;
          lVar16 = (longlong)(int)uStack_b0;
          if (lVar16 != 0) {
            lVar20 = 0;
            do {
              FUN_1400b4ad0(param_1 + 0x15,*(undefined4 *)(lVar12 + lVar20));
              lVar20 = lVar20 + 4;
            } while (lVar16 * 4 != lVar20);
          }
          if (local_b8 != 0) {
            FUN_1400020a8(local_b8);
          }
        }
      }
      else {
        FUN_1427d6a64(param_1,plVar15);
      }
    }
  }
LAB_1401cb6b1:
  *(int *)(lVar17 + 100) = *(int *)(lVar17 + 100) + 1;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cbba4 FUN_1401cbba4 body=356 status=ok
// SIG undefined FUN_1401cbba4(void)

undefined8 *
FUN_1401cbba4(undefined8 *param_1,undefined8 *param_2,double param_3,float param_4,double *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double *pdVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  
  pdVar12 = (double *)FUN_14001cc68(0x60,0x10);
  *pdVar12 = (double)param_4 + (double)param_1[2];
  *(float *)(pdVar12 + 1) = param_4;
  dVar4 = *param_5;
  pdVar12[2] = dVar4;
  pdVar12[4] = param_5[2];
  param_5[2] = 0.0;
  uVar5 = *(undefined4 *)(param_5 + 4);
  uVar6 = *(undefined4 *)((longlong)param_5 + 0x24);
  uVar7 = *(undefined4 *)(param_5 + 5);
  uVar8 = *(undefined4 *)((longlong)param_5 + 0x2c);
  uVar9 = *(undefined4 *)((longlong)param_5 + 0x34);
  uVar10 = *(undefined4 *)(param_5 + 7);
  uVar11 = *(undefined4 *)((longlong)param_5 + 0x3c);
  *(undefined4 *)(pdVar12 + 8) = *(undefined4 *)(param_5 + 6);
  *(undefined4 *)((longlong)pdVar12 + 0x44) = uVar9;
  *(undefined4 *)(pdVar12 + 9) = uVar10;
  *(undefined4 *)((longlong)pdVar12 + 0x4c) = uVar11;
  *(undefined4 *)(pdVar12 + 6) = uVar5;
  *(undefined4 *)((longlong)pdVar12 + 0x34) = uVar6;
  *(undefined4 *)(pdVar12 + 7) = uVar7;
  *(undefined4 *)((longlong)pdVar12 + 0x3c) = uVar8;
  if (dVar4 != 0.0) {
    *param_5 = 0.0;
  }
  pdVar12[10] = param_3;
  pdVar12[0xb] = 0.0;
  plVar13 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_149e016f0;
  plVar13[2] = (longlong)pdVar12;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  puVar14 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar14 = 0;
  puVar14[1] = pdVar12;
  puVar14[2] = plVar13;
  if (plVar13 == (longlong *)0x0) {
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar14;
    UNLOCK();
    *puVar3 = puVar14;
    *param_2 = pdVar12;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar14;
    UNLOCK();
    *puVar3 = puVar14;
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    *param_2 = pdVar12;
    param_2[1] = plVar13;
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_2;
}



// FUNCTION 1401cbd08 FUN_1401cbd08 body=459 status=ok
// SIG undefined FUN_1401cbd08(void)

void FUN_1401cbd08(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  
  iVar2 = *(int *)(param_5 + 1);
  lVar8 = (longlong)iVar2;
  iVar3 = *(int *)(param_5 + 3);
  uVar7 = (longlong)iVar3 * 0x14 + 7U & 0xfffffffffffffff8;
  lVar13 = 0;
  lVar6 = FUN_14001cc68(lVar8 * 0x10 + uVar7 + 0xc0,0);
  *(longlong *)(param_4 + 0x120) = lVar6;
  *(undefined4 *)(param_4 + 0x170) = 1;
  *(longlong *)(param_4 + 0x150) = lVar6;
  *(undefined4 *)(param_4 + 0x158) = 3;
  lVar4 = *(longlong *)(param_1 + 0x5d0);
  lVar9 = 0;
  do {
    lVar11 = 0;
    lVar12 = lVar13;
    do {
      lVar5 = *(longlong *)(param_4 + 0x150);
      lVar10 = lVar12 >> 0x1a;
      *(longlong *)(lVar5 + lVar10) = lVar4 + 0x60 + lVar11;
      *(longlong *)(lVar5 + 8 + lVar10) = param_4;
      puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar5 + 0x24 + lVar10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(int *)(lVar5 + 0x34 + lVar10) = (int)lVar9;
      *(undefined4 *)(lVar5 + 0x38 + lVar10) = 1;
      *(undefined2 *)(lVar5 + 0x3c + lVar10) = 0;
      *(undefined1 *)(lVar5 + 0x3e + lVar10) = 0;
      lVar11 = lVar11 + 0x20;
      lVar12 = lVar12 + 0x100000000;
    } while (lVar11 != 0x60);
    lVar9 = lVar9 + 1;
    lVar13 = lVar13 + 0x300000000;
  } while (lVar9 < *(int *)(param_4 + 0x170));
  *(void **)(param_4 + 0x160) = (void *)(lVar6 + 0xc0);
  *(int *)(param_4 + 0x168) = iVar3;
  memcpy((void *)(lVar6 + 0xc0),(void *)param_5[2],(longlong)iVar3 * 0x14);
  pvVar14 = (void *)(lVar6 + uVar7 + 0xc0);
  *(void **)(param_4 + 0x140) = pvVar14;
  *(int *)(param_4 + 0x148) = iVar2;
  memset(pvVar14,0,lVar8 * 8);
  pvVar14 = (void *)((longlong)pvVar14 + lVar8 * 8);
  *(void **)(param_4 + 0x250) = pvVar14;
  *(int *)(param_4 + 600) = iVar2;
  memcpy(pvVar14,(void *)*param_5,lVar8 * 8);
  *(undefined4 *)(param_4 + 0x260) = *(undefined4 *)(param_4 + 0x140);
  *(undefined4 *)(param_4 + 0x264) = *(undefined4 *)(param_4 + 0x144);
  *(undefined4 *)(param_4 + 0x268) = *(undefined4 *)(param_4 + 0x148);
  *(undefined4 *)(param_4 + 0x26c) = *(undefined4 *)(param_4 + 0x14c);
  FUN_1448cb086(param_4,param_2,param_3,*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 1401cbed4 FUN_1401cbed4 body=616 status=ok
// SIG undefined FUN_1401cbed4(void)

void FUN_1401cbed4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  LARGE_INTEGER *pLVar8;
  undefined ***pppuVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined ***local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  QueryPerformanceCounter(&local_78);
  *(double *)(param_1 + 0x2d0) = (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
  FUN_1427cf286(param_1,1);
  LOCK();
  *(undefined1 *)(param_1 + 0x2f4) = 1;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x298) + 0x138);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_149e68c10;
  local_b8 = FUN_1427d7ede;
  uVar2 = *(undefined4 *)(param_1 + 0xdc);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  piVar1 = *(int **)(*param_2 + 0x38);
  lStack_90 = param_1;
  local_78.QuadPart = FUN_14005d3a6(piVar1 + 2,piVar1);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(undefined8 *)(local_78.QuadPart + 0x10) = uVar3;
  *(undefined4 *)(local_78.QuadPart + 0x18) = 0x1000000;
  *(undefined8 *)(local_78.QuadPart + 0x20) = 0;
  *(undefined8 *)(local_78.QuadPart + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(local_78.QuadPart + 0x30) = 0;
  *(undefined4 *)(local_78.QuadPart + 0x38) = 0;
  *(undefined4 *)(local_78.QuadPart + 0x40) = uVar2;
  LOCK();
  *(int *)(local_78.QuadPart + 0xb0) = *(int *)(local_78.QuadPart + 0xb0) + 1;
  UNLOCK();
  pLVar8 = (LARGE_INTEGER *)(param_2 + 2);
  if (param_2[1] == 0) {
    pLVar8->QuadPart = (LONGLONG)local_78;
    pLVar8 = (LARGE_INTEGER *)(param_2 + 1);
  }
  else {
    *(LARGE_INTEGER *)*(LONGLONG *)pLVar8 = local_78;
  }
  pLVar8->QuadPart = (LONGLONG)local_78;
  lVar4 = *(longlong *)(local_78.QuadPart + 0x70);
  plVar5 = *(longlong **)(local_78.QuadPart + 0x78);
  local_68 = *(undefined ****)(local_78.QuadPart + 0x80);
  uVar3 = *(undefined8 *)(local_78.QuadPart + 0x88);
  local_58 = *(undefined ***)(local_78.QuadPart + 0x90);
  uStack_50 = *(undefined8 *)(local_78.QuadPart + 0x98);
  uVar6 = *(undefined8 *)(local_78.QuadPart + 0xa0);
  uVar7 = *(undefined8 *)(local_78.QuadPart + 0xa8);
  *(ulonglong *)(local_78.QuadPart + 0xa0) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(local_78.QuadPart + 0xa8) = CONCAT44(uStack_7c,uStack_80);
  *(undefined ***)(local_78.QuadPart + 0x90) = local_98;
  *(longlong *)(local_78.QuadPart + 0x98) = lStack_90;
  *(undefined ****)(local_78.QuadPart + 0x80) = local_a8;
  *(ulonglong *)(local_78.QuadPart + 0x88) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(local_78.QuadPart + 0x70) = local_b8;
  *(ulonglong *)(local_78.QuadPart + 0x78) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._0_4_ = SUB84(plVar5,0);
  uStack_70._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar3;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48._0_4_ = (undefined4)uVar6;
  local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar7;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  if ((code *)local_78.QuadPart != (code *)0x0) {
    LOCK();
    *(int *)(local_78.QuadPart + 0xb0) = *(int *)(local_78.QuadPart + 0xb0) + 1;
    UNLOCK();
  }
  local_b8 = (code *)lVar4;
  local_a8 = local_68;
  local_98 = local_58;
  lStack_90 = uStack_50;
  uStack_70 = plVar5;
  uStack_60 = uVar3;
  local_48 = uVar6;
  uStack_40 = uVar7;
  FUN_1447ef144(param_1 + 0x290,&local_78);
  FUN_1447ef07c(&local_78);
  if (local_b8 != (code *)0x0) {
    pppuVar9 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar9 = &local_98;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    local_c8 = param_1;
    local_c0 = param_2;
    if (DAT_14c868738 != (longlong *)0x0 && DAT_14c868740 != 0) {
      local_78.QuadPart = (LONGLONG)FUN_1427d7fe4;
      uStack_70 = &local_c8;
      local_b8 = *(code **)(param_1 + 0x160);
      uStack_b0 = *(undefined4 *)(param_1 + 0x168);
      uStack_ac = *(undefined4 *)(param_1 + 0x16c);
      (**(code **)(*DAT_14c868738 + 0x60))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cc13e FUN_1401cc13e body=353 status=ok
// SIG undefined FUN_1401cc13e(void)

void FUN_1401cc13e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401cc1c3;
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
LAB_1401cc1c3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401cc2a0 FUN_1401cc2a0 body=3335 status=ok
// SIG undefined FUN_1401cc2a0(void)

undefined8 *
FUN_1401cc2a0(longlong param_1,undefined8 param_2,int *param_3,char *param_4,longlong param_5,
             longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  char *pcVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  void *_Src;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *_Dst;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  
  *param_4 = '\0';
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  plVar1 = (longlong *)(param_1 + 0xd8);
  plVar4 = (longlong *)(param_3 + 8);
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar17 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x118);
    }
    iVar23 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & (uint)*plVar4) * 4);
    if (iVar23 != -1) {
      do {
        plVar2 = (longlong *)(*plVar1 + (longlong)iVar23 * 0x18);
        if (*plVar2 == *plVar4) {
          if ((plVar2 != (longlong *)0x0) &&
             (puVar16 = (undefined8 *)plVar2[1], puVar16 != (undefined8 *)0x0)) {
            if (0 < *param_3) {
              FUN_1403e5fa2(puVar16);
            }
            if (*(int *)((longlong)puVar16 + 0xdc) < param_3[1]) {
              FUN_140f60efc(param_1,param_2,puVar16);
            }
            goto LAB_1401cc8ab;
          }
          break;
        }
        iVar23 = (int)plVar2[2];
      } while (iVar23 != -1);
    }
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0x3e0,0x10);
  lVar17 = *(longlong *)(param_1 + 0x5d0);
  *puVar16 = &PTR_FUN_149e674b8;
  puVar16[0x19] = 0;
  *(undefined4 *)(puVar16 + 0x1a) = 0;
  *(int *)(puVar16 + 0x1c) = param_3[2];
  puVar16[0x1b] = *(undefined8 *)param_3;
  puVar16[0x1d] = *(undefined8 *)(param_3 + 4);
  lVar26 = *(longlong *)(param_3 + 6);
  puVar16[0x1e] = lVar26;
  if (lVar26 != 0) {
    LOCK();
    *(int *)(lVar26 + 8) = *(int *)(lVar26 + 8) + 1;
    UNLOCK();
  }
  puVar16[0x21] = *(undefined8 *)(param_3 + 0xc);
  iVar23 = param_3[9];
  iVar27 = param_3[10];
  iVar13 = param_3[0xb];
  *(int *)(puVar16 + 0x1f) = (int)*plVar4;
  *(int *)((longlong)puVar16 + 0xfc) = iVar23;
  *(int *)(puVar16 + 0x20) = iVar27;
  *(int *)((longlong)puVar16 + 0x104) = iVar13;
  puVar16[0x22] = *(undefined8 *)(param_3 + 0xe);
  *(char *)(puVar16 + 0x23) = (char)param_3[0x10];
  *(undefined1 *)((longlong)puVar16 + 0x11d) = *(undefined1 *)((longlong)param_3 + 0x45);
  lVar26 = 0;
  puVar16[0x28] = 0;
  *(undefined4 *)(puVar16 + 0x29) = 0;
  puVar16[0x2a] = 0;
  *(undefined4 *)(puVar16 + 0x2b) = 0;
  puVar16[0x2c] = 0;
  *(undefined4 *)(puVar16 + 0x2d) = 0;
  *(undefined4 *)(puVar16 + 0x2e) = 0;
  puVar16[0x2f] = 0;
  *(undefined1 *)(puVar16 + 0x34) = 0;
  puVar16[0x35] = 0;
  puVar16[0x36] = 0;
  puVar16[0x24] = 0;
  puVar16[0x25] = 0;
  *(undefined8 *)((longlong)puVar16 + 300) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x134) = 0;
  *(undefined4 *)(puVar16 + 0x37) = 2;
  puVar16[0x3c] = 0;
  *(undefined4 *)(puVar16 + 0x3d) = 0;
  puVar16[0x3e] = 0;
  *(undefined4 *)(puVar16 + 0x3f) = 0;
  puVar16[0x40] = 0;
  *(undefined4 *)(puVar16 + 0x41) = 0;
  puVar16[0x42] = 0;
  *(undefined4 *)(puVar16 + 0x43) = 0;
  puVar16[0x44] = 0;
  *(undefined4 *)(puVar16 + 0x45) = 0;
  puVar16[0x46] = 0;
  *(undefined4 *)(puVar16 + 0x47) = 0;
  puVar16[0x4c] = 0;
  *(undefined4 *)(puVar16 + 0x4d) = 0;
  puVar16[0x4e] = 0;
  *(undefined4 *)(puVar16 + 0x4f) = 0;
  puVar16[0x50] = 0;
  *(undefined4 *)(puVar16 + 0x51) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x1cc) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x1d4) = 0;
  puVar16[0x38] = 0;
  puVar16[0x39] = 0;
  *(undefined8 *)((longlong)puVar16 + 0x24c) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x254) = 0;
  puVar16[0x48] = 0;
  puVar16[0x49] = 0;
  puVar16[0x52] = 0;
  puVar16[0x53] = param_1;
  puVar16[0x54] = param_1 + 0x4b0;
  puVar16[0x55] = param_1 + 0x2a8;
  puVar16[0x56] = 0;
  puVar16[0x57] = 0;
  puVar16[0x58] = 0;
  puVar16[0x59] = 0;
  *(undefined8 *)((longlong)puVar16 + 0x2cd) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x2d5) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x2ee) = 0;
  puVar16[0x5c] = 0;
  puVar16[0x5d] = 0;
  *(undefined8 *)((longlong)puVar16 + 0x314) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x31c) = 0;
  puVar16[0x61] = 0;
  puVar16[0x62] = 0;
  puVar16[0x5f] = 0;
  puVar16[0x60] = 0;
  *(undefined4 *)((longlong)puVar16 + 0x324) = 0xffffffff;
  *(undefined2 *)(puVar16 + 0x65) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x34c) = 0;
  *(undefined8 *)((longlong)puVar16 + 0x354) = 0;
  puVar16[0x68] = 0;
  puVar16[0x69] = 0;
  puVar16[0x66] = 0;
  puVar16[0x67] = 0;
  *(undefined4 *)((longlong)puVar16 + 0x35c) = 0xffffffff;
  *(undefined2 *)(puVar16 + 0x6c) = 0;
  *(undefined2 *)(puVar16 + 0x6d) = 0;
  puVar16[0x76] = 0;
  *(undefined4 *)(puVar16 + 0x77) = 0;
  puVar16[0x72] = 0;
  puVar16[0x73] = 0;
  puVar16[0x70] = 0;
  puVar16[0x71] = 0;
  puVar16[0x6e] = 0;
  puVar16[0x6f] = 0;
  *(undefined4 *)((longlong)puVar16 + 0x3bc) = 2;
  puVar16[0x7a] = 0;
  puVar16[0x7b] = 0x200000000;
  FUN_1403e5fa2(puVar16,*(undefined4 *)(puVar16 + 0x1b));
  do {
    *(longlong *)((longlong)puVar16 + lVar26 * 2 + 8) = lVar17 + lVar26;
    *(undefined8 **)((longlong)puVar16 + lVar26 * 2 + 0x10) = puVar16;
    puVar18 = (undefined8 *)((longlong)puVar16 + lVar26 * 2 + 0x20);
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18 = (undefined8 *)((longlong)puVar16 + lVar26 * 2 + 0x2c);
    *puVar18 = 0;
    puVar18[1] = 0;
    *(undefined8 *)((longlong)puVar16 + lVar26 * 2 + 0x3c) = 0x1ffffffff;
    *(undefined2 *)((longlong)puVar16 + lVar26 * 2 + 0x44) = 0;
    *(undefined1 *)((longlong)puVar16 + lVar26 * 2 + 0x46) = 0;
    lVar26 = lVar26 + 0x20;
  } while (lVar26 != 0x60);
  puVar16[0x19] = puVar16 + 1;
  *(undefined4 *)(puVar16 + 0x1a) = 3;
  if (*(char *)((longlong)puVar16 + 0x11d) == '\x01') {
    lVar17 = FUN_1401cb3f2(puVar16[0x55],puVar16[0x1f]);
    *(undefined2 *)(lVar17 + 0x65) = 0;
  }
  LOCK();
  *(int *)(puVar16 + 0x5b) = *(int *)(puVar16 + 0x5b) + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
  UNLOCK();
  if (*(int *)(param_1 + 0x10c) == 0) {
    iVar23 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar23 + 1;
    if (*(int *)(param_1 + 0xe4) == iVar23) {
      FUN_14482b872(plVar1,iVar23);
    }
    iVar27 = *(int *)(param_1 + 0x100);
    if (iVar27 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar13 = iVar27 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    lVar26 = param_1 + 0xe8;
    iVar19 = iVar27 + 1;
    iVar31 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar31 = iVar27;
    }
    if (iVar31 >> 5 == iVar13) {
      *(int *)(param_1 + 0x100) = iVar19;
    }
    else {
      if (*(int *)(param_1 + 0x104) <= iVar27) {
        iVar13 = iVar27;
        if (iVar27 + 0x20U < 0xa0) {
          iVar19 = 0x80;
        }
        else {
          uVar29 = iVar27 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x104) + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar29) {
              uVar24 = uVar29;
            }
          }
          else {
            uVar24 = uVar29 + (uVar29 * 3 >> 3) + 0x10;
          }
          uVar20 = (ulonglong)(uVar24 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar14 = (uint)(uVar20 + 0xf);
              if (uVar24 < 0x1ffd) {
                uVar20 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar20 + 0xf >> 4]];
              }
              else {
                uVar22 = (ulonglong)(uVar14 & 0xfffffff0);
                if (uVar22 < 0x7ff1) {
                  bVar12 = (&DAT_14c841e00)[uVar14 >> 4];
                  uVar25 = 0x32;
                  if (0x32 < bVar12) {
                    uVar25 = (ulonglong)bVar12;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar12;
                  do {
                    uVar20 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_1401cce73;
                    lVar17 = uVar25 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar17 != 0x33);
                }
                uVar20 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar20 = (ulonglong)DAT_14c841df8;
                }
                uVar20 = -uVar20 & (uVar22 + uVar20) - 1;
              }
            }
            else {
              uVar20 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar20,0);
              iVar13 = *(int *)(param_1 + 0x100);
            }
          }
LAB_1401cce73:
          iVar15 = (int)(uVar20 >> 2);
          iVar19 = -0x20;
          if ((int)uVar29 <= iVar15) {
            iVar19 = iVar15 << 5;
          }
        }
        *(int *)(param_1 + 0x104) = iVar19;
        FUN_1446efbd8(lVar26,iVar13);
        iVar19 = *(int *)(param_1 + 0x100) + 1;
      }
      iVar13 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar13 = iVar19;
      }
      *(int *)(param_1 + 0x100) = iVar19;
      if (iVar19 % 0x20 != 0) {
        lVar17 = *(longlong *)(param_1 + 0xf8);
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          lVar17 = lVar26;
        }
        bVar12 = -(char)(iVar19 % 0x20);
        *(uint *)(lVar17 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)(lVar17 + (longlong)(iVar13 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar23;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar26 = *(longlong *)(param_1 + 0xf8);
    }
    bVar12 = (byte)iVar27 & 0x1f;
    puVar3 = (uint *)(lVar26 + (longlong)(iVar31 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar23 = *(int *)(param_1 + 0x108);
    lVar17 = (longlong)iVar23;
    iVar27 = *(int *)(*(longlong *)(param_1 + 0xd8) + 4 + lVar17 * 0x18);
    *(int *)(param_1 + 0x108) = iVar27;
    iVar13 = *(int *)(param_1 + 0x10c) + -1;
    *(int *)(param_1 + 0x10c) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar27 * 0x18) = 0xffffffff;
    }
  }
  lVar26 = param_1 + 0xe8;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    lVar26 = *(longlong *)(param_1 + 0xf8);
  }
  iVar27 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar27 = iVar23;
  }
  puVar3 = (uint *)(lVar26 + (longlong)(iVar27 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar23 & 0x1f);
  iVar27 = 1;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0xd8) + lVar17 * 0x18);
  lVar17 = *plVar4;
  *plVar2 = lVar17;
  plVar2[1] = (longlong)puVar16;
  *(undefined4 *)(plVar2 + 2) = 0xffffffff;
  uVar29 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0x10c);
  if ((uVar29 != 0) && (uVar29 != 1)) {
    lVar26 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar26 = *(longlong *)(param_1 + 0x118);
    }
    iVar13 = *(int *)(lVar26 + (ulonglong)(*(int *)(param_1 + 0x120) - 1U & (uint)lVar17) * 4);
    if (iVar13 != -1) {
      do {
        plVar4 = (longlong *)(*plVar1 + (longlong)iVar13 * 0x18);
        if (*plVar4 == lVar17) {
          uVar10 = *(undefined4 *)((longlong)plVar2 + 4);
          lVar17 = plVar2[1];
          uVar11 = *(undefined4 *)((longlong)plVar2 + 0xc);
          *(int *)plVar4 = (int)*plVar2;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar10;
          *(int *)(plVar4 + 1) = (int)lVar17;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar11;
          FUN_1427d798c(plVar1);
          goto LAB_1401cc89a;
        }
        iVar13 = (int)plVar4[2];
      } while (iVar13 != -1);
    }
  }
  if (3 < uVar29) {
    uVar20 = (ulonglong)(uVar29 & 0xfffffffe) + 0xf;
    lVar26 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    iVar27 = 1 << ((byte)lVar26 & 0x1f);
  }
  if (((int)uVar29 < 1) || (iVar27 <= *(int *)(param_1 + 0x120))) {
    uVar29 = *(int *)(param_1 + 0x120) - 1U & (uint)lVar17;
    *(uint *)((longlong)plVar2 + 0x14) = uVar29;
    lVar17 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar17 = param_1 + 0x110;
    }
    *(undefined4 *)(plVar2 + 2) =
         *(undefined4 *)
          (lVar17 + ((longlong)*(int *)(param_1 + 0x120) - 1U & (longlong)(int)uVar29) * 4);
    lVar17 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar17 = param_1 + 0x110;
    }
    *(int *)(lVar17 + ((longlong)*(int *)(param_1 + 0x120) - 1U & (longlong)(int)uVar29) * 4) =
         iVar23;
  }
  else {
    *(int *)(param_1 + 0x120) = iVar27;
    FUN_141712380(plVar1);
  }
LAB_1401cc89a:
  *param_4 = '\x01';
LAB_1401cc8ab:
  if (*param_6 != 0) {
    iVar23 = *(int *)(puVar16 + 0x77);
    uVar29 = iVar23 + 1;
    *(uint *)(puVar16 + 0x77) = uVar29;
    if (*(uint *)((longlong)puVar16 + 0x3bc) < uVar29) {
      FUN_140d9475c(puVar16 + 0x74);
    }
    puVar18 = puVar16 + 0x74;
    if ((undefined8 *)puVar16[0x76] != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)puVar16[0x76];
    }
    puVar18[iVar23] = *param_6;
    *param_6 = 0;
  }
  if (*param_7 != 0) {
    iVar23 = *(int *)(puVar16 + 0x7b);
    uVar29 = iVar23 + 1;
    *(uint *)(puVar16 + 0x7b) = uVar29;
    if (*(uint *)((longlong)puVar16 + 0x3dc) < uVar29) {
      FUN_1468881b6(puVar16 + 0x78);
    }
    puVar18 = puVar16 + 0x78;
    if ((undefined8 *)puVar16[0x7a] != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)puVar16[0x7a];
    }
    puVar18[iVar23] = *param_7;
    *param_7 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  bVar12 = param_5 != 0 & *(byte *)(param_1 + 0x21);
  if (*param_4 == '\x01') {
    if (bVar12 == 0) {
      puVar18 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      iVar27 = 1;
      uVar29 = 0;
      iVar23 = 0;
    }
    else {
      puVar18 = *(undefined8 **)(param_5 + 0x2c0);
      iVar23 = *(int *)(puVar18 + 2);
      uVar29 = *(uint *)((longlong)puVar18 + 0x14);
      iVar27 = *(int *)(puVar18 + 3) + 1;
    }
    *(int *)(puVar18 + 3) = iVar27;
    *(uint *)(puVar18 + 2) = iVar23 + 1U;
    if (uVar29 < iVar23 + 1U) {
      FUN_1401cc13e(puVar18 + 1,iVar23);
    }
    *(undefined8 **)(puVar18[1] + (longlong)iVar23 * 8) = puVar16;
    puVar16[0x58] = puVar18;
  }
  else if (bVar12 != 0) {
    puVar6 = (ulonglong *)puVar16[0x58];
    if (puVar6 == (ulonglong *)0x0) {
      iVar23 = *(int *)(param_5 + 0x170);
      if (0 < iVar23) {
        uVar20 = (ulonglong)*(uint *)(puVar16 + 0x2e);
        lVar17 = 0;
        do {
          if (0 < (int)uVar20) {
            lVar26 = 0;
            do {
              lVar30 = *(longlong *)(param_5 + 0x150);
              lVar8 = puVar16[0x2a];
              lVar32 = lVar26 * 0x300000000 + 0x200000000 >> 0x1a;
              do {
                pcVar5 = (char *)(lVar8 + 0x3d + lVar32);
                LOCK();
                bVar33 = *pcVar5 == '\0';
                if (bVar33) {
                  *pcVar5 = '\x01';
                }
                UNLOCK();
              } while (!bVar33);
              if ((*(byte *)(lVar8 + 0x3e + lVar32) & 1) == 0) {
                lVar30 = lVar30 + (lVar17 * 0x300000000 >> 0x1a);
                LOCK();
                *(int *)(lVar30 + 0x38) = *(int *)(lVar30 + 0x38) + 1;
                UNLOCK();
                uVar29 = *(uint *)(lVar8 + 0x28 + lVar32);
                uVar20 = (ulonglong)uVar29;
                if (uVar20 == 1) {
                  uVar9 = *(undefined8 *)(lVar8 + 0x10 + lVar32);
                  *(undefined4 *)(lVar8 + 0x2c + lVar32) = 4;
                  plVar4 = *(longlong **)(*(longlong *)(lVar30 + 8) + 0x2a0);
                  LOCK();
                  *plVar4 = *plVar4 + 4;
                  UNLOCK();
                  LOCK();
                  plVar4[1] = plVar4[1] + 0x20;
                  UNLOCK();
                  puVar18 = (undefined8 *)FUN_14001cc68(0x20,0);
                  *(undefined8 **)(lVar8 + 0x10 + lVar32) = puVar18;
                  *puVar18 = uVar9;
                }
                else {
                  if (uVar29 == 0) {
                    *(longlong *)(lVar8 + 0x10 + lVar32) = lVar30;
                    *(undefined4 *)(lVar8 + 0x28 + lVar32) = 1;
                    goto LAB_1401ccd99;
                  }
                  if (uVar29 == *(uint *)(lVar8 + 0x2c + lVar32)) {
                    _Src = *(void **)(lVar8 + 0x10 + lVar32);
                    uVar29 = uVar29 * 2;
                    *(uint *)(lVar8 + 0x2c + lVar32) = uVar29;
                    plVar4 = *(longlong **)(*(longlong *)(lVar30 + 8) + 0x2a0);
                    LOCK();
                    *plVar4 = *plVar4 + (ulonglong)uVar29;
                    UNLOCK();
                    lVar21 = (ulonglong)uVar29 * 8;
                    LOCK();
                    plVar4[1] = plVar4[1] + lVar21;
                    UNLOCK();
                    _Dst = (void *)FUN_14001cc68(lVar21,0);
                    *(void **)(lVar8 + 0x10 + lVar32) = _Dst;
                    memcpy(_Dst,_Src,uVar20 * 8);
                    plVar4 = *(longlong **)(*(longlong *)(lVar30 + 8) + 0x2a0);
                    FUN_1400020a8(_Src);
                    LOCK();
                    plVar4[1] = plVar4[1] + uVar20 * -8;
                    UNLOCK();
                    LOCK();
                    *plVar4 = *plVar4 - uVar20;
                    UNLOCK();
                  }
                }
                uVar29 = *(uint *)(lVar8 + 0x28 + lVar32);
                *(uint *)(lVar8 + 0x28 + lVar32) = uVar29 + 1;
                *(longlong *)(*(longlong *)(lVar8 + 0x10 + lVar32) + (ulonglong)uVar29 * 8) = lVar30
                ;
              }
LAB_1401ccd99:
              LOCK();
              *(undefined1 *)(lVar8 + 0x3d + lVar32) = 0;
              UNLOCK();
              lVar26 = lVar26 + 1;
              uVar20 = (ulonglong)*(int *)(puVar16 + 0x2e);
            } while (lVar26 < (longlong)uVar20);
            iVar23 = *(int *)(param_5 + 0x170);
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < iVar23);
      }
    }
    else {
      puVar7 = *(ulonglong **)(param_5 + 0x2c0);
      if (puVar7 != puVar6) {
        uVar20 = puVar6[2];
        if ((longlong)(int)uVar20 != 0) {
          uVar22 = puVar6[1];
          lVar17 = 0;
          do {
            *(ulonglong **)(*(longlong *)(uVar22 + lVar17) + 0x2c0) = puVar7;
            lVar17 = lVar17 + 8;
          } while ((longlong)(int)uVar20 * 8 != lVar17);
          uVar29 = (uint)puVar6[2];
          if ((longlong)(int)uVar29 != 0) {
            iVar23 = (int)puVar7[2];
            *(uint *)(puVar7 + 2) = iVar23 + uVar29;
            if ((uint)(*(int *)((longlong)puVar7 + 0x14) - iVar23) < uVar29) {
              FUN_1401cc13e(puVar7 + 1,iVar23);
            }
            memmove((void *)((longlong)iVar23 * 8 + puVar7[1]),(void *)puVar6[1],
                    (longlong)(int)uVar29 << 3);
            *(undefined4 *)(puVar6 + 2) = 0;
          }
        }
        *(int *)(puVar7 + 3) = (int)puVar7[3] + (int)puVar6[3];
        uVar20 = *puVar6;
        if (*puVar6 < *puVar7) {
          uVar20 = *puVar7;
        }
        if (uVar20 != 0) {
          *puVar7 = uVar20;
          uVar22 = puVar7[2];
          if ((longlong)(int)uVar22 != 0) {
            uVar25 = puVar7[1];
            lVar17 = 0;
            do {
              lVar26 = *(longlong *)(uVar25 + lVar17);
              LOCK();
              *(ulonglong *)(lVar26 + 0x2b8) = uVar20;
              UNLOCK();
              if (*(int *)(lVar26 + 0xdc) != 0x7fffffff) {
                *(undefined4 *)(lVar26 + 0xdc) = 0x7fffffff;
                FUN_140f60f94(param_1,param_2);
              }
              lVar17 = lVar17 + 8;
            } while ((longlong)(int)uVar22 * 8 != lVar17);
          }
        }
        if (puVar6[1] != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(puVar6);
      }
    }
  }
  return puVar16;
}



// FUNCTION 1401ccfa8 FUN_1401ccfa8 body=176 status=ok
// SIG undefined FUN_1401ccfa8(void)

longlong * FUN_1401ccfa8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_48,param_2,1);
  plVar3 = (longlong *)0x0;
  if ((param_1 != 0) && (local_48 != 0)) {
    iVar1 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar4);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_40);
          if (local_40 == local_48) goto LAB_1401cd031;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    plVar3 = (longlong *)0x0;
  }
LAB_1401cd031:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cd05a FUN_1401cd05a body=55 status=ok
// SIG undefined FUN_1401cd05a(void)

void FUN_1401cd05a(longlong *param_1)

{
  FUN_1401cd092(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1401cd092 FUN_1401cd092 body=121 status=ok
// SIG undefined FUN_1401cd092(void)

void FUN_1401cd092(longlong param_1,int param_2)

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



// FUNCTION 1401cd118 FUN_1401cd118 body=143 status=ok
// SIG undefined FUN_1401cd118(void)

void FUN_1401cd118(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c);
  if ((ulonglong)uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x3ffffffffffff000U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 2,0);
      uVar4 = (uint)(uVar2 >> 2);
      uVar1 = *(uint *)(param_1 + 0x2c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar4;
  FUN_1470b58cc(param_1,*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1401cd1a8 FUN_1401cd1a8 body=202 status=ok
// SIG undefined FUN_1401cd1a8(void)

int * FUN_1401cd1a8(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = FUN_1447262c2(param_4);
  plVar4 = (longlong *)FUN_1401cd47c(uVar3);
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  lVar5 = FUN_1401cd272(param_1 + 8,uVar3);
  iVar6 = 0;
  if (lVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 2) {
      lVar2 = *(longlong *)(lVar5 + 0x50);
      if (lVar2 == 0) {
        iVar6 = 0;
      }
      else if (*(char *)(lVar2 + 8) == '\x01') {
        iVar6 = *(int *)(lVar2 + 0xc);
      }
      else {
        iVar6 = 0x7fffffff;
      }
      if (*(int *)(lVar5 + 0x98) < iVar6) {
        iVar6 = *(int *)(lVar5 + 0x98);
      }
      iVar6 = iVar6 + *(int *)(lVar5 + 0x94);
    }
    else if (iVar1 == 1) {
      lVar2 = *(longlong *)(lVar5 + 0x50);
      if (lVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x7fffffff;
        if (*(char *)(lVar2 + 8) == '\x01') {
          iVar6 = *(int *)(lVar2 + 0xc);
        }
      }
      if (*(int *)(lVar5 + 0x98) < iVar6) {
        iVar6 = *(int *)(lVar5 + 0x98);
      }
    }
    else {
      iVar6 = 0;
      if (iVar1 == 0) {
        iVar6 = *(int *)(lVar5 + 0x94);
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = iVar6;
  *(undefined1 *)(param_2 + 8) = 2;
  return param_2;
}



// FUNCTION 1401cd272 FUN_1401cd272 body=240 status=ok
// SIG undefined FUN_1401cd272(void)

longlong FUN_1401cd272(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (((param_2 != 0) && (lVar3 = FUN_1401cd3fa(), lVar3 != 0)) &&
     (iVar1 = *(int *)(param_2 + 0xb8), (longlong)iVar1 != 0)) {
    lVar5 = *(longlong *)(param_2 + 0xb0);
    lVar8 = 0;
    while ((lVar2 = *(longlong *)(lVar5 + lVar8), lVar2 == 0 ||
           (lVar4 = FUN_1401cd362(lVar2), lVar4 != lVar3))) {
      lVar8 = lVar8 + 8;
      if ((longlong)iVar1 * 8 == lVar8) {
        return 0;
      }
    }
    if ((longlong)*(int *)(lVar2 + 0x140) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x138);
      lVar5 = (longlong)*(int *)(lVar2 + 0x140) * 0xa8;
      do {
        if (*(ulonglong **)(lVar3 + 0x50) == (ulonglong *)0x0) {
          uVar7 = 0;
          uVar6 = 0;
        }
        else {
          uVar7 = **(ulonglong **)(lVar3 + 0x50);
          uVar6 = uVar7 & 0xffffffff;
          uVar7 = uVar7 & 0xffffffff00000000;
        }
        if (*(ulonglong *)(param_1 + 0x18) == *(ulonglong *)(lVar3 + 0x48)) {
          return lVar3;
        }
        if ((uVar6 | uVar7) != 0 && *(ulonglong *)(param_1 + 0x18) == (uVar6 | uVar7)) {
          return lVar3;
        }
        lVar3 = lVar3 + 0xa8;
        lVar5 = lVar5 + -0xa8;
      } while (lVar5 != 0);
    }
  }
  return 0;
}



// FUNCTION 1401cd362 FUN_1401cd362 body=151 status=ok
// SIG undefined FUN_1401cd362(void)

void FUN_1401cd362(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 == 0) {
    uVar4 = FUN_140e2014e();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x110) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x108));
    }
    *(undefined8 *)(param_1 + 0x118) = uVar4;
    return;
  }
  return;
}



// FUNCTION 1401cd3fa FUN_1401cd3fa body=130 status=ok
// SIG undefined FUN_1401cd3fa(void)

void FUN_1401cd3fa(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 1401cd47c FUN_1401cd47c body=671 status=ok
// SIG undefined FUN_1401cd47c(void)

longlong FUN_1401cd47c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != (longlong *)0x0) {
    do {
      if (DAT_14c951858 == 0) {
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_70 = &local_50;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = 0x400000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) ==
          DAT_14c951858 + 0x30)) break;
      uVar2 = FUN_140f5697c();
      lVar3 = (**(code **)(*param_1 + 0x288))(param_1,uVar2);
      if (lVar3 != 0) {
        uVar2 = FUN_140f5697c();
        lVar4 = FUN_144718840(lVar3,uVar2);
        if (lVar3 != lVar4 && lVar4 != 0) goto LAB_1401cd6ee;
      }
      if (DAT_14cb61cd0 == 0) {
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = (code *)&LAB_1463b31ae;
        local_70 = &local_50;
        local_78 = &LAB_1486dca4f;
        local_80 = (code *)&LAB_1464f50a6;
        local_88 = L"Game";
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if (((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) !=
           DAT_14cb61cd0 + 0x30)) ||
         (plVar1 = (longlong *)param_1[0x141], plVar1 == (longlong *)0x0)) {
LAB_1401cd56e:
        lVar4 = 0;
      }
      else {
        uVar2 = FUN_140f5697c();
        lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
        if (lVar3 == 0) goto LAB_1401cd56e;
        uVar2 = FUN_140f5697c();
        lVar4 = FUN_144718840(lVar3,uVar2);
        if (lVar3 == lVar4) goto LAB_1401cd56e;
      }
      if ((lVar4 != 0) || (param_1 = (longlong *)param_1[4], param_1 == (longlong *)0x0))
      goto LAB_1401cd6ee;
    } while( true );
  }
  lVar4 = 0;
LAB_1401cd6ee:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1401cd71c FUN_1401cd71c body=319 status=ok
// SIG undefined FUN_1401cd71c(void)

void FUN_1401cd71c(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    local_48 = "OnEventTriggered";
    local_40 = 0x10;
    local_3c = 0;
    uVar1 = FUN_14001a6c0(&local_48,1);
    FUN_1401cd85c(lVar2,uVar1,param_1 + 0x230);
    local_48 = "OnAnimationStarted";
    local_40 = 0x12;
    local_3c = 0;
    uVar1 = FUN_14001a6c0(&local_48,1);
    FUN_1401cd85c(lVar2,uVar1,param_1 + 0x238);
    local_48 = "OnAnimationStopped";
    local_40 = 0x12;
    local_3c = 0;
    uVar1 = FUN_14001a6c0(&local_48,1);
    FUN_1401cd85c(lVar2,uVar1,param_1 + 0x240);
    local_48 = "OnAnimationCompleted";
    local_40 = 0x14;
    local_3c = 0;
    uVar1 = FUN_14001a6c0(&local_48,1);
    FUN_1401cd85c(lVar2,uVar1,param_1 + 0x248);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cd85c FUN_1401cd85c body=658 status=ok
// SIG undefined FUN_1401cd85c(void)

void FUN_1401cd85c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  PSRWLOCK SRWLock;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined1 auStack_a8 [38];
  byte local_82;
  byte local_81;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong local_68;
  PSRWLOCK local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_3;
  if (*param_3 != 0) {
    SRWLock = (PSRWLOCK)(param_1 + 0x28);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      uVar2 = (uint)((ulonglong)param_2 >> 0x10);
      uVar6 = (uint)param_2 & 0xffff;
      lVar3 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x80);
      }
      iVar7 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x88) - 1U &
                               (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x40) + (longlong)iVar7 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar7 * 0x20) == param_2) {
            ReleaseSRWLockShared(SRWLock);
            if (lVar3 != 0) {
              AcquireSRWLockExclusive(SRWLock);
              iVar7 = *(int *)(lVar3 + 0x10);
              lVar13 = (longlong)iVar7;
              if (lVar13 != 0) {
                plVar12 = *(longlong **)(lVar3 + 8);
                uVar14 = 0;
                local_68 = lVar3;
                local_60 = SRWLock;
                if ((int)plVar12[1] == 0) {
                  lVar3 = 0;
                }
                else {
                  plVar1 = (longlong *)*plVar12;
                  lVar3 = 0;
                  if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
                    lVar3 = local_50;
                  }
                }
                bVar15 = lVar3 == *local_80;
                local_58 = plVar12 + 3;
                iVar8 = 0;
                local_78 = plVar12;
                do {
                  local_82 = bVar15 ^ 1;
                  lVar3 = (longlong)iVar8;
                  iVar11 = iVar8 + 1;
                  if (iVar8 + 1 < iVar7) {
                    iVar11 = iVar7;
                  }
                  plVar12 = local_58 + lVar3 * 2;
                  iVar9 = iVar8;
                  lVar4 = lVar3;
                  local_81 = bVar15;
                  local_70 = uVar14;
                  do {
                    lVar4 = lVar4 + 1;
                    iVar10 = iVar11;
                    if (lVar13 <= lVar4) break;
                    if ((int)*plVar12 == 0) {
                      lVar5 = 0;
                    }
                    else {
                      plVar1 = (longlong *)plVar12[-1];
                      lVar5 = 0;
                      if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
                        lVar5 = local_50;
                      }
                    }
                    iVar9 = iVar9 + 1;
                    plVar12 = plVar12 + 2;
                    iVar10 = iVar9;
                  } while ((bool)(bVar15 & 1) == (lVar5 == *local_80));
                  bVar15 = local_82;
                  iVar11 = iVar10 - iVar8;
                  if ((local_81 & 1) == 0) {
                    iVar9 = (int)local_70;
                    if (iVar9 != iVar8) {
                      memmove(local_78 + (longlong)iVar9 * 2,local_78 + lVar3 * 2,
                              (longlong)iVar11 << 4);
                    }
                    uVar14 = (ulonglong)(uint)(iVar9 + iVar11);
                  }
                  else {
                    FUN_1447566c6(local_78 + lVar3 * 2,iVar11);
                    uVar14 = local_70;
                    bVar15 = local_82;
                  }
                  iVar8 = iVar10;
                } while (lVar4 < lVar13);
                *(int *)(local_68 + 0x10) = (int)uVar14;
                SRWLock = local_60;
              }
              ReleaseSRWLockExclusive(SRWLock);
            }
            goto LAB_1401cda96;
          }
          iVar7 = *(int *)(lVar3 + 0x18);
        } while (iVar7 != -1);
      }
    }
    ReleaseSRWLockShared(SRWLock);
LAB_1401cda96:
    *local_80 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401cdafb FUN_1401cdafb body=443 status=ok
// SIG undefined FUN_1401cdafb(void)

void FUN_1401cdafb(longlong *param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  if ((param_2 < 0x80) && (param_3 != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb25e50);
    lVar4 = DAT_14cb25e78;
    lVar6 = (longlong)DAT_14cb25e80;
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        plVar2 = *(longlong **)(lVar4 + lVar9);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,param_3);
        }
        lVar9 = lVar9 + 8;
      } while (lVar6 * 8 != lVar9);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb25e50);
    if (DAT_14cb262b8 == '\x01') {
      if (param_1 != (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
        lVar4 = DAT_14cb262d0;
        lVar6 = (longlong)DAT_14cb262d8;
        if (lVar6 != 0) {
          lVar9 = DAT_14cb262d0 + 0xc;
          lVar10 = 0;
          do {
            lVar3 = *(longlong *)(lVar4 + 0x38 + lVar10);
            if (*(char *)(lVar3 + 0x24) == '\x01') {
              uVar13 = *(undefined8 *)(lVar3 + 0x18);
              uVar7 = *(undefined8 *)(lVar4 + lVar10);
              uVar1 = *(undefined4 *)(lVar4 + 8 + lVar10);
              lVar8 = *param_1;
              pcVar12 = FUN_1438aa952;
              uVar11 = 0x10000;
            }
            else {
              uVar7 = *(undefined8 *)(lVar4 + lVar10);
              uVar1 = *(undefined4 *)(lVar4 + 8 + lVar10);
              lVar8 = *param_1;
              pcVar12 = (code *)0x0;
              uVar13 = 0;
              uVar11 = 0;
            }
            iVar5 = (**(code **)(lVar8 + 0xb0))
                              (param_1,uVar1,uVar7,lVar9 + lVar10,2,0,uVar11,pcVar12,uVar13,
                               *(undefined4 *)(lVar3 + 0x20));
            if (iVar5 != 0) {
              *(int *)(*(longlong *)(lVar4 + 0x38 + lVar10) + 0x20) = iVar5;
            }
            lVar10 = lVar10 + 0x48;
          } while (lVar6 * 0x48 != lVar10);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb262e0);
      }
      iVar5 = DAT_14cb262dc;
      FUN_1401cdcb6(DAT_14cb262d0,DAT_14cb262d8);
      DAT_14cb262d8 = 0;
      if ((iVar5 < 0) && (DAT_14cb262dc != 0)) {
        FUN_147f8443c();
      }
      LOCK();
      DAT_14cb262c8 = DAT_14cb262c8 + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1401cdcb6 FUN_1401cdcb6 body=77 status=ok
// SIG undefined FUN_1401cdcb6(void)

void FUN_1401cdcb6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
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
      plVar4 = plVar4 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1401cdd04 FUN_1401cdd04 body=232 status=ok
// SIG undefined FUN_1401cdd04(void)

undefined8 *
FUN_1401cdd04(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar4;
  uVar2 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  lVar5 = FUN_1448cb8bc();
  puVar6[3] = uVar2;
  lVar3 = *(longlong *)(lVar5 + 0x48);
  puVar6[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar6[5] = lVar5;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a29acc8;
  puVar6[8] = uVar2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402aa76e(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1401cddec FUN_1401cddec body=90 status=ok
// SIG undefined FUN_1401cddec(void)

void FUN_1401cddec(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) {
    if (param_2 == '\0') {
      *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 8;
      uVar2 = *(uint *)(lVar1 + 0x1b0) & 0xfffffffd;
    }
    else {
      *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 8;
      uVar2 = *(uint *)(lVar1 + 0x1b0) | 2;
    }
    *(uint *)(lVar1 + 0x1b0) = uVar2;
    if ((*(longlong *)(lVar1 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar1 != 0)) {
      FUN_144a78688(lVar1 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 1401cde46 FUN_1401cde46 body=3913 status=ok
// SIG undefined FUN_1401cde46(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1401cde46(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  int param_9,int param_10,undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  longlong *plVar22;
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong *local_310;
  undefined8 local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined8 *local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  uint local_2ac;
  longlong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  longlong *******local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 local_168;
  longlong *******local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 local_108 [88];
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar5 = 0;
  if (param_4 == (undefined8 *)0x0) {
    local_2a8 = 0;
  }
  else {
    local_2a8 = param_4[0x43];
  }
  local_2c0 = *(longlong **)(param_2 + 0xb8);
  local_170 = (longlong *)0x0;
  local_168 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0x700000000;
  local_160 = (longlong *******)0x0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_98 = 0;
  local_78 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_2d0 = param_2;
  local_2c8 = param_4;
  local_2a0 = param_3;
  if (param_6[3] != 0) {
    if ((*(byte *)(*(longlong *)(param_6[3] + 0x28) + 0x246) & 0x10) == 0) {
      uVar5 = 0;
    }
    else {
      cVar1 = (**(code **)(*param_6 + 0x358))();
      uVar5 = (uint)(byte)(cVar1 * '\x02' + 1);
    }
  }
  local_66 = *(undefined1 *)(param_7 + 7);
  local_19c = *(uint *)(local_2d0 + 0xe4) >> 0xe & 7;
  uVar2 = 0;
  local_218 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_210 = 1;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0xffffffff;
  uStack_1d4 = 0xffffffff;
  uStack_1d0 = 0xffffffff;
  uStack_1cc = 0xffffffff;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  local_19f = 1;
  local_198 = 0;
  local_190 = 0;
  uStack_1b0 = (undefined4)param_5[10];
  uStack_1ac = *(undefined4 *)((longlong)param_5 + 0x54);
  uStack_1a8 = (undefined4)param_5[0xb];
  uStack_1a4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  local_248 = 0;
  uStack_240 = 0;
  local_288 = *param_8;
  local_280 = param_8[1];
  local_278 = param_8[2];
  local_270 = param_8[3];
  local_268 = param_8[4];
  local_260 = param_8[5];
  local_258 = param_8[6];
  local_250 = param_8[7];
  local_238 = param_8[8];
  local_230 = param_8[9];
  local_64 = local_19c;
  FUN_144765e6c(&local_228,local_2c0[0x22],&local_288);
  local_2b8 = local_180;
  FUN_1447662e4(local_180,&local_288);
  puVar10 = &DAT_14c9c0e10;
  if (param_10 == 2) {
    puVar10 = &DAT_14c9c0e28;
  }
  puVar12 = &DAT_14c9c0d68;
  if (param_10 == 2) {
    puVar12 = &DAT_14c9c0df8;
  }
  puVar6 = &DAT_14c9c0e40;
  if (param_10 != 0) {
    puVar6 = puVar10;
  }
  puVar10 = &DAT_14c9c0db0;
  if (param_10 != 0) {
    puVar10 = puVar12;
  }
  if (param_9 == 1) {
    puVar10 = puVar6;
  }
  uStack_1c0 = *puVar10;
  local_1c8 = *param_7;
  local_1b8 = param_7[1];
  if (DAT_14ca84f32 == '\x01') {
    if (*(int *)(DAT_14ca620d8 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_6 + 0x490))(param_6);
      if (uVar3 < 4) {
        uVar2 = (undefined1)(0x5010400 >> ((byte)(uVar3 << 3) & 0x1f));
      }
      else {
        uVar2 = 0;
        if ((uVar3 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar2 = (undefined1)(0xa060900000000 >> ((byte)(uVar3 << 3) & 0x3f));
        }
      }
    }
  }
  local_19f = CONCAT11(uVar2,(undefined1)local_19f);
  cVar1 = (**(code **)(*param_6 + 0x4a0))(param_6);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1449c014c(param_1);
  }
  local_19f = CONCAT11(local_19f._1_1_,uVar2);
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    FUN_144766928(&local_228);
  }
  uVar3 = 0;
  FUN_144765fea(local_2c0,*(undefined4 *)(param_1 + 0x20),0,local_108);
  plVar15 = local_2c0;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = (**(code **)(*local_2c0 + 0x30))(local_2c0);
    puVar10 = local_2c8;
    local_318._0_4_ = uVar4;
    FUN_1456c013a(&local_228,param_6,uVar7,local_2c8);
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar7 = (**(code **)(*plVar15 + 0x30))(plVar15);
    local_318 = (longlong *)CONCAT44(local_318._4_4_,uVar4);
    FUN_1456c0257(&local_228,param_6,uVar7,puVar10);
  }
  local_67 = (char)local_2c0[0x25];
  local_2ac = uVar5 + 4;
  if ((char)local_2c0[0x25] == -1) {
    local_2ac = uVar5;
  }
  local_2ac = local_2ac & 0xff;
  if (*param_8 != 0) {
    if ((local_110 & 1) == 0) {
      local_290 = (longlong *******)0x0;
      local_298 = 0x58;
      uVar3 = 0;
    }
    else {
      plVar15 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar15 = local_180;
      }
      local_298 = *plVar15;
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar11 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar17 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar17 = iVar11 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      uVar3 = iVar18 + (iVar17 >> 3) +
                       (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar11) * 8 + 7U &
              0xfffffff8;
    }
    local_300 = &local_298;
    local_308 = param_12;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(*param_8,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),local_2c8
                 );
  }
  if (param_8[2] != 0) {
    uVar13 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      plVar15 = local_170;
      if (local_170 == (longlong *)0x0) {
        plVar15 = local_180;
      }
      local_298 = plVar15[(uVar13 >> 0x38) - 1];
      uVar13 = *(ulonglong *)(local_298 + 0x30);
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
      }
      iVar11 = *(int *)(local_298 + 0x28);
      iVar18 = 0;
      if ((longlong)*(int *)(local_298 + 0x38) != 0) {
        lVar14 = 0;
        iVar18 = 0;
        do {
          iVar18 = iVar18 + (uint)*(ushort *)(uVar13 + 2 + lVar14);
          lVar14 = lVar14 + 0x18;
        } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar14);
      }
      iVar17 = iVar11 + 0xe;
      if (-1 < iVar11 + 7) {
        iVar17 = iVar11 + 7;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_290 = (longlong *******)((longlong)(int)uVar3 + (longlong)local_290);
      uVar3 = ((iVar17 >> 3) + (*(int *)(local_298 + 0x18) + *(int *)(local_298 + 8) + iVar11) * 8 +
               iVar18 + 7U & 0xfffffff8) + uVar3;
    }
    local_300 = &local_298;
    local_308 = param_12;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(param_8[2],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2c8);
  }
  if (param_8[4] != 0) {
    uVar13 = (ulonglong)(local_110 & 0x1f) - (ulonglong)(local_110 >> 1 & 5);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 < 0x100000000000000) {
      local_298 = 0x58;
      local_290 = (longlong *******)0x0;
    }
    else {
      if (local_170 != (longlong *)0x0) {
        local_2b8 = local_170;
      }
      local_290 = (longlong *******)&local_160;
      if (0x50 < local_110._2_2_) {
        local_290 = local_160;
      }
      local_298 = local_2b8[(uVar13 >> 0x38) - 1];
      local_290 = (longlong *******)((longlong)(int)uVar3 + (longlong)local_290);
    }
    local_300 = &local_298;
    local_308 = param_12;
    local_310 = param_6;
    local_318 = param_5;
    FUN_14474308c(param_8[4],*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                  local_2c8);
  }
  plVar15 = (longlong *)(longlong)*(int *)(local_2d0 + 0xb0);
  if (0 < (longlong)plVar15) {
    plVar22 = (longlong *)0x0;
    local_2b8 = plVar15;
    do {
      if ((local_2a0 >> ((ulonglong)plVar22 & 0x3f) & 1) != 0) {
        lVar14 = *(longlong *)(local_2d0 + 0xa8);
        if (*(longlong *)(local_2d0 + 0xa8) == 0) {
          lVar14 = local_2d0;
        }
        plVar15 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
        uVar5 = *(uint *)(lVar14 + 0x7c + (longlong)plVar22 * 0xa8);
        bVar19 = (byte)(uVar5 >> 8);
        bVar20 = (bVar19 & 8) + (char)local_2ac;
        bVar21 = bVar20;
        if (((uVar5 >> 0xc & 1) != 0) && (bVar21 = bVar20 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
          bVar21 = bVar20;
        }
        lVar14 = lVar14 + (longlong)plVar22 * 0xa8;
        if (*param_8 == 0) {
          uVar5 = 0;
        }
        else {
          if ((*(byte *)(plVar15 + 0xe) & 1) == 0) {
            local_290 = (longlong *******)0x0;
            local_298 = 0x58;
            uVar5 = 0;
          }
          else {
            plVar8 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar8 = plVar15;
            }
            local_298 = *plVar8;
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar11 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar9 = 0;
              iVar11 = 0;
              do {
                iVar11 = iVar11 + (uint)*(ushort *)(uVar13 + 2 + lVar9);
                lVar9 = lVar9 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar9);
            }
            iVar18 = *(int *)(local_298 + 0x28);
            iVar17 = iVar18 + 0xe;
            if (-1 < iVar18 + 7) {
              iVar17 = iVar18 + 7;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              local_290 = (longlong *******)(plVar15 + 4);
            }
            else {
              local_290 = (longlong *******)plVar15[4];
            }
            uVar5 = iVar11 + (iVar17 >> 3) +
                             (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 +
                    7U & 0xfffffff8;
          }
          local_2d8 = plVar15 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_12;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
          FUN_1456bf974(*param_8,*(undefined8 *)(param_8[1] + 0x18),*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[2] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar15 + 0xe) & 0xf) -
                   (ulonglong)(*(ushort *)(plVar15 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar8 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar8 = plVar15;
            }
            local_298 = plVar8[(uVar13 >> 0x38) - 1];
            uVar13 = *(ulonglong *)(local_298 + 0x30);
            if ((uVar13 & 1) != 0) {
              uVar13 = ((longlong)uVar13 >> 0x18) + local_298 + 0x30;
            }
            iVar11 = 0;
            if ((longlong)*(int *)(local_298 + 0x38) != 0) {
              lVar9 = 0;
              iVar11 = 0;
              do {
                iVar11 = iVar11 + (uint)*(ushort *)(uVar13 + 2 + lVar9);
                lVar9 = lVar9 + 0x18;
              } while ((longlong)*(int *)(local_298 + 0x38) * 0x18 != lVar9);
            }
            iVar18 = *(int *)(local_298 + 0x28);
            iVar17 = iVar18 + 0xe;
            if (-1 < iVar18 + 7) {
              iVar17 = iVar18 + 7;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar8 = plVar15 + 4;
            }
            else {
              plVar8 = (longlong *)plVar15[4];
            }
            local_290 = (longlong *******)((longlong)(int)uVar5 + (longlong)plVar8);
            uVar5 = ((iVar17 >> 3) +
                     (*(int *)(local_298 + 8) + *(int *)(local_298 + 0x18) + iVar18) * 8 + iVar11 +
                     7U & 0xfffffff8) + uVar5;
          }
          local_2d8 = plVar15 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_12;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
          FUN_1456bf974(param_8[2],*(undefined8 *)(param_8[3] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        if (param_8[4] != 0) {
          uVar13 = (ulonglong)(*(ushort *)(plVar15 + 0xe) & 0x1f) -
                   (ulonglong)(*(ushort *)(plVar15 + 0xe) >> 1 & 5);
          uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
          uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar13 < 0x100000000000000) {
            local_298 = 0x58;
            local_290 = (longlong *******)0x0;
          }
          else {
            plVar8 = (longlong *)plVar15[2];
            if ((longlong *)plVar15[2] == (longlong *)0x0) {
              plVar8 = plVar15;
            }
            if (*(ushort *)((longlong)plVar15 + 0x72) < 0x51) {
              plVar16 = plVar15 + 4;
            }
            else {
              plVar16 = (longlong *)plVar15[4];
            }
            local_298 = plVar8[(uVar13 >> 0x38) - 1];
            local_290 = (longlong *******)((longlong)(int)uVar5 + (longlong)plVar16);
          }
          local_2d8 = plVar15 + 0xf;
          local_2e0 = &local_298;
          local_2e8 = (longlong *)param_12;
          local_2f8 = (undefined8 *)local_2d0;
          local_300 = local_2c8;
          local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_318 = local_2c0;
          local_310 = (longlong *)((ulonglong)local_310 & 0xffffffffffffff00);
          local_2f0 = (longlong *)lVar14;
          FUN_1456bf974(param_8[4],*(undefined8 *)(param_8[5] + 0x18),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        }
        uVar5 = 0;
        local_290 = (longlong *******)CONCAT44(local_290._4_4_,0x7fffffff);
        bVar20 = DAT_14ca96500;
        if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x0001401cec13:
          if (bVar20 != 0) {
LAB_1401cea94:
            uVar3 = *(uint *)(lVar14 + 0x54) & 7;
            if (uVar3 == 0) {
              uVar5 = *(uint *)(local_2a8 + 0x15c);
              uVar3 = *(uint *)(local_2a8 + 0x204) & 0x7fffffff;
            }
            else {
              if ((uVar3 != 1) || (*(longlong *)(param_1 + 0x28) == 0)) goto LAB_1401ceac3;
              uVar5 = *(uint *)(lVar14 + 0xa0) | 0x80000000;
              uVar3 = *(uint *)(lVar14 + 0xa4) | 0x80000000;
            }
            local_290 = (longlong *******)CONCAT44(local_290._4_4_,uVar3);
          }
        }
        else if (((2 < *(int *)(param_1 + 0x20)) &&
                 (lVar9 = (ulonglong)DAT_14ca85550 * 0x3c,
                 *(longlong *)(&DAT_14ca814b0 + lVar9) != DAT_14ca81490)) && (DAT_14ca85550 != 0xc))
        {
          if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar9 + 3) & 0x10) != 0) {
            bVar20 = *(byte *)((longlong)&DAT_14ca814c8 + lVar9 + 3) & 0x20;
            goto joined_r0x0001401cec13;
          }
          goto LAB_1401cea94;
        }
LAB_1401ceac3:
        if (local_2a8 == 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = *(undefined4 *)(local_2a8 + 0x158);
        }
        local_298 = CONCAT44(uVar4,uVar5);
        local_2f0 = &local_288;
        local_2f8 = &local_228;
        local_300 = (undefined8 *)CONCAT71(local_300._1_7_,bVar21 | bVar19 & 0x20);
        local_308 = param_11;
        local_310 = (longlong *)CONCAT44(local_310._4_4_,param_10);
        local_318 = (longlong *)CONCAT44(local_318._4_4_,param_9);
        local_2e8 = plVar15;
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                  (*(longlong **)(param_1 + 0x30),local_2d0,(ulonglong)plVar22 & 0xffffffff,
                   &local_298);
        plVar15 = local_2b8;
      }
      plVar22 = (longlong *)((longlong)plVar22 + 1);
    } while (plVar22 != plVar15);
  }
  if (lStack_1e0 != 0) {
    FUN_140021284();
  }
  if (local_1e8 != 0) {
    FUN_140021284();
  }
  if (lStack_1f0 != 0) {
    FUN_140021284();
  }
  if (local_1f8 != 0) {
    FUN_140021284();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((0x50 < local_110._2_2_) && (local_160 != (longlong *******)0x0)) {
    FUN_1400020a8();
  }
  local_110 = local_110 & 0xffff;
  local_160 = (longlong *******)0x0;
  if (local_170 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401ced90 FUN_1401ced90 body=629 status=ok
// SIG undefined FUN_1401ced90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ced90(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  undefined1 auStack_1c8 [32];
  wchar_t *local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d0;
  undefined8 local_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  memset(local_c8,0,0x90);
  local_d0 = &DAT_14ca64190;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca63e78) {
    FUN_144b3d300(&DAT_14ca63e78);
    if (DAT_14ca63e78 == -1) {
      FUN_1456da2ee();
      local_160 = &LAB_14712ac08;
      local_168 = &LAB_14712ac0c;
      local_170 = &LAB_14732a4f6;
      local_178 = &LAB_14178444c;
      local_180 = FUN_14732a4fa;
      local_188 = FUN_14732a522;
      local_1a0 = L"MainVertexShader";
      local_1a8 = L"/Engine/Private/VelocityShader.usf";
      local_150 = 0;
      local_158 = 0x108;
      local_190 = 1;
      local_198 = 0;
      FUN_140db5666(&DAT_14ca63dd0,2,&DAT_14ca63d68,L"FVelocityVS");
      _DAT_14ca63dd0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430ca128);
      _Init_thread_footer(&DAT_14ca63e78);
    }
  }
  local_c8[DAT_14ca63e18] = &DAT_14ca63dd0;
  auStack_68[DAT_14ca63e18] = 0;
  FUN_1401cf006();
  local_c8[DAT_14ca64068] = &DAT_14ca64020;
  auStack_68[DAT_14ca64068] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  cVar1 = FUN_14007744c(param_1,&local_d0,param_2);
  if (cVar1 != '\0') {
    if (lStack_140 != 0) {
      *param_5 = lStack_140;
      param_5[1] = local_148;
    }
    if (local_138 != 0) {
      *param_3 = local_138;
      param_3[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_4 = lStack_120;
      param_4[1] = local_148;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cf006 FUN_1401cf006 body=284 status=ok
// SIG undefined FUN_1401cf006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401cf006(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca640c8) {
    FUN_144b3d300(&DAT_14ca640c8);
    if (DAT_14ca640c8 == -1) {
      FUN_1456da582();
      FUN_140db5666(&DAT_14ca64020,2,&DAT_14ca63fb8,L"FMaskedDigistructVelocityPS",
                    L"/Engine/Private/VelocityShader.usf",L"MainPixelShader",3,1,FUN_14732a7a2,
                    FUN_14732a77a,FUN_141784452,&LAB_14732a776,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca64020 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430ca140);
      _Init_thread_footer(&DAT_14ca640c8);
    }
  }
  return &DAT_14ca64020;
}



// FUNCTION 1401cf122 FUN_1401cf122 body=54 status=ok
// SIG undefined FUN_1401cf122(void)

void FUN_1401cf122(longlong *param_1,longlong param_2)

{
  param_1 = (longlong *)*param_1;
  if (param_2 == 0) {
    if (param_1 == (longlong *)0x0) {
      return;
    }
  }
  else {
    if (param_1 == (longlong *)0x0) {
      return;
    }
    if (param_1[1] == param_2) {
      FUN_1401cf158(param_2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001401cf154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}



// FUNCTION 1401cf158 FUN_1401cf158 body=652 status=ok
// SIG undefined FUN_1401cf158(void)

void FUN_1401cf158(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  PSRWLOCK SRWLock;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c992a90 == '\0') {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = *(PSRWLOCK *)(param_1 + 0x218);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    pvVar5 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
    iVar1 = (int)((ulonglong)pvVar5 >> 0x20);
    TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                (LPVOID)((ulonglong)(iVar1 + 1) << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
    if (iVar1 + (int)pvVar5 == 0) {
      AcquireSRWLockExclusive(SRWLock);
    }
  }
  lVar10 = (longlong)(int)(*(longlong **)(param_1 + 0x130))[1];
  if (lVar10 != 0) {
    lVar7 = **(longlong **)(param_1 + 0x130);
    lVar9 = 0;
    do {
      FUN_1401877f0(*(longlong *)(lVar7 + lVar9) + 0x50,param_2);
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  }
  lVar10 = *(longlong *)(param_2 + 0x40);
  if (*(int *)(lVar10 + 0x58) < *(int *)(param_1 + 0x250)) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x248) + (longlong)*(int *)(lVar10 + 0x58) * 8) = 0;
    lVar10 = *(longlong *)(param_2 + 0x40);
  }
  FUN_1448b734e(param_1,lVar10,0);
  FUN_1401aa8ae(param_1 + 0x70,param_2);
  **(undefined1 **)(param_2 + 0x20) = 1;
  lVar10 = *(longlong *)(param_2 + 0x40);
  *(undefined8 *)(lVar10 + 0x10) = 0;
  lVar7 = lVar10 + 0x78;
  if (*(longlong *)(lVar10 + 0x80) != 0) {
    lVar7 = *(longlong *)(lVar10 + 0x80);
  }
  iVar1 = *(int *)(lVar10 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar9 = 0;
    do {
      lVar2 = *(longlong *)(lVar7 + lVar9);
      lVar3 = *(longlong *)(lVar10 + 0x10);
      *(longlong *)(lVar2 + 0x48) = lVar3;
      if (((lVar3 != 0) && (*(int *)(lVar2 + 0xc) != 0)) && (*(longlong *)(lVar3 + 8) != 0)) {
        FUN_144821112(*(longlong *)(lVar3 + 8) + 0x70,lVar3,*(uint *)(lVar2 + 8) >> 3);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  local_4c = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x58);
  lVar10 = *(longlong *)(param_1 + 0x9c8);
  lVar7 = *(longlong *)(lVar10 + 0xea0);
  if (*(int *)(lVar7 + 0xa0) == -1) {
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(param_1 + 0x78);
    lVar7 = *(longlong *)(lVar10 + 0xea0);
  }
  FUN_1402c595a(lVar7 + 0x50,local_50,&local_4c,0);
  uVar4 = local_4c;
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *(undefined2 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined2 *)(puVar6 + 8) = 1;
  *puVar6 = &PTR_FUN_149f45dc0;
  puVar6[10] = FUN_142a10074;
  puVar6[0xc] = 0;
  puVar6[0xe] = &PTR_LAB_149f6aef0;
  puVar6[0xf] = param_2;
  *(undefined4 *)(puVar6 + 0x10) = uVar4;
  puVar6[0x11] = param_1;
  puVar6[0x12] = 0;
  puVar6[0x14] = 0;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar6);
  if (SRWLock != (PSRWLOCK)0x0) {
    pvVar5 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
    uVar8 = (int)((ulonglong)pvVar5 >> 0x20) - 1;
    TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                (LPVOID)((ulonglong)uVar8 << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
    if (uVar8 + (int)pvVar5 == 0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cf3e6 FUN_1401cf3e6 body=172 status=ok
// SIG undefined FUN_1401cf3e6(void)

undefined8 FUN_1401cf3e6(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf67e8) {
    FUN_144b3d300(&DAT_14caf67e8);
    if (DAT_14caf67e8 == -1) {
      FUN_1446ddc76(&DAT_14caf67e0,"Chaos",1);
      _Init_thread_footer(&DAT_14caf67e8);
    }
  }
  FUN_1401cf494(param_1,local_28,DAT_14caf67e0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cf494 FUN_1401cf494 body=217 status=ok
// SIG undefined FUN_1401cf494(void)

longlong * FUN_1401cf494(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar2 = param_1;
    do {
      lVar3 = 0;
      if ((*(uint *)(lVar2 + 8) & 0x30) != 0) goto LAB_1401cf4f9;
      lVar2 = *(longlong *)(lVar2 + 0x20);
    } while (lVar2 != 0);
  }
  if ((*(byte *)(param_1 + 0xb9) & 8) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 == 0) {
      bVar4 = true;
    }
    else {
      uVar1 = FUN_1401cf56e();
      lVar2 = FUN_144718840(lVar2,uVar1);
      bVar4 = lVar2 == 0;
    }
    if (((!bVar4) || (*(int *)(param_1 + 0x70) != 0)) && ((*(byte *)(param_1 + 0xb9) & 4) != 0)) {
      lVar2 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x2d0);
      }
      FUN_1401cf654(lVar2,param_3);
      if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
      }
      lVar2 = FUN_14043030a(lVar2,param_3);
      lVar3 = 0;
      if (*(char *)(lVar2 + 0xc) != '\0' || *(int *)(lVar2 + 8) != 0) {
        lVar3 = lVar2;
      }
      goto LAB_1401cf4f9;
    }
  }
  lVar3 = 0;
LAB_1401cf4f9:
  *param_2 = lVar3;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1401cf56e FUN_1401cf56e body=228 status=ok
// SIG undefined FUN_1401cf56e(void)

longlong FUN_1401cf56e(void)

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
  if (DAT_14cac1e30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147879229;
    local_40 = &LAB_1459be496;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"Interface_CollisionDataProvider",&DAT_14cac1e30,&DAT_147879228
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1e30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cf654 FUN_1401cf654 body=131 status=ok
// SIG undefined FUN_1401cf654(void)

undefined8 FUN_1401cf654(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  uVar6 = 0;
  iVar8 = (int)((ulonglong)param_2 >> 0x20);
  uVar9 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar9 >> 1) + uVar6;
      lVar7 = (ulonglong)uVar1 * 0x10;
      iVar5 = *(int *)(lVar3 + lVar7) - (int)param_2;
      if (iVar5 == 0) {
        iVar5 = *(int *)(lVar3 + 4 + lVar7) - iVar8;
      }
      if (iVar5 < 0) {
        uVar6 = uVar1 + (uVar9 & 1);
      }
      bVar4 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar4);
  }
  if ((int)uVar6 < (int)uVar2) {
    lVar7 = (ulonglong)uVar6 * 0x10;
    iVar5 = (int)param_2 - *(int *)(lVar3 + lVar7);
    if (iVar5 == 0) {
      iVar5 = iVar8 - *(int *)(lVar3 + 4 + lVar7);
    }
    if (-1 < iVar5) {
      return CONCAT71((int7)((ulonglong)(lVar3 + lVar7) >> 8),lVar3 + lVar7 != -8);
    }
  }
  return 0;
}



// FUNCTION 1401cf6d7 FUN_1401cf6d7 body=118 status=ok
// SIG undefined FUN_1401cf6d7(void)

void FUN_1401cf6d7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1401cf74e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9d6e20;
  puVar1[5] = &PTR_FUN_14a9d73d0;
  puVar1[6] = &PTR_FUN_14a9d73f0;
  puVar1[0x60] = 0;
  *(undefined4 *)(puVar1 + 0x61) = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x314) = 0;
  puVar1[100] = 0;
  *(undefined4 *)(puVar1 + 0x65) = 0;
  return;
}



// FUNCTION 1401cf74e FUN_1401cf74e body=440 status=ok
// SIG undefined FUN_1401cf74e(void)

undefined8 * FUN_1401cf74e(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  FUN_1401cf906();
  *param_1 = &PTR_FUN_14a9d2b10;
  param_1[5] = &PTR_FUN_14a9d30c0;
  param_1[6] = &PTR_FUN_14a9d30e0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  bVar1 = *(byte *)(param_1 + 0x2a);
  bVar2 = *(byte *)((longlong)param_1 + 0x151);
  bVar3 = *(byte *)(param_1 + 0x55);
  bVar4 = *(byte *)(param_1 + 0x48);
  uVar6 = *(uint *)(param_1 + 0x44);
  bVar5 = *(byte *)((longlong)param_1 + 0x211);
  param_1[0x2d] = 0x3f00000040800000;
  param_1[0x2e] = 0x3f80000040800000;
  memset(param_1 + 0x30,0,0x91);
  *(byte *)((longlong)param_1 + 0x211) = bVar5 & 0xc0;
  *(undefined8 *)((longlong)param_1 + 0x212) = 0;
  *(undefined4 *)((longlong)param_1 + 0x219) = 0;
  *(uint *)(param_1 + 0x44) = uVar6 & 0xffffffc0;
  *(undefined2 *)((longlong)param_1 + 0x224) = 0x100;
  param_1[0x45] = 0x408000003eaaaa9f;
  param_1[0x46] = 0x408000003f000000;
  param_1[0x47] = 0x3f800000;
  *(byte *)(param_1 + 0x48) = bVar4 & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x241) = 3;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(byte *)(param_1 + 0x55) = bVar3 & 0xfe;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(byte *)(param_1 + 0x2a) = bVar1 & 0xfe;
  *(byte *)((longlong)param_1 + 0x151) = bVar2 & 0xdf;
  *(undefined2 *)(param_1 + 0x2c) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 1401cf906 FUN_1401cf906 body=340 status=ok
// SIG undefined FUN_1401cf906(void)

undefined8 * FUN_1401cf906(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a9d75d0;
  param_1[5] = &PTR_FUN_14a9d7b70;
  param_1[6] = &PTR_FUN_14a9d7b90;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xe0;
  *(undefined1 *)((longlong)param_1 + 0xbd) = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_1401cfa5b(local_28,0);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
    if ((DAT_14c75b114 != '\x01') || (DAT_14c872ba8 == '\0')) {
      FUN_14003fbd6();
    }
    if (DAT_14caec488 == 0) {
      DAT_14caec488 = FUN_1456da704();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401cfa5b FUN_1401cfa5b body=119 status=ok
// SIG undefined FUN_1401cfa5b(void)

undefined8 FUN_1401cfa5b(undefined8 param_1,int param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caea0c8) {
    FUN_144b3d300(&DAT_14caea0c8);
    if (DAT_14caea0c8 == -1) {
      DAT_14caea0c0 = FUN_1456da6cb();
      _Init_thread_footer(&DAT_14caea0c8);
    }
  }
  FUN_1401cfad2(DAT_14caea0c0,param_1,(longlong)param_2);
  return param_1;
}



// FUNCTION 1401cfad2 FUN_1401cfad2 body=74 status=ok
// SIG undefined FUN_1401cfad2(void)

undefined8 FUN_1401cfad2(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar1 = 0xffffffff;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar3 = 0;
    do {
      if (*plVar2 == param_3) {
        uVar1 = uVar3 & 0xffffffff;
        break;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 2;
    } while (*(uint *)(param_1 + 0x48) != uVar3);
  }
  FUN_1401cfb1c(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 1401cfb1c FUN_1401cfb1c body=273 status=ok
// SIG undefined FUN_1401cfb1c(void)

undefined8 * FUN_1401cfb1c(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x48))) {
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)param_3 * 0x10);
    if (*(char *)(param_1 + 0x50) == '\0') {
      FUN_1400021e4(&local_20,param_2);
      goto LAB_1401cfc05;
    }
    FUN_1400021e4(&local_20,&local_30);
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar2 = FUN_1447ee042(&local_30,&DAT_149e5e24e,2,0);
    if (iVar2 != -1) {
      uVar5 = local_28 - 1;
      puVar1 = local_30;
      if (local_28 == 0) {
        uVar5 = 0;
        puVar1 = &DAT_149dfb77a;
      }
      uVar3 = iVar2 + 2U;
      if ((int)uVar5 <= (int)(iVar2 + 2U)) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        uVar4 = 0;
      }
      FUN_14006620a(param_2,puVar1 + uVar4,uVar5 - (int)uVar4);
    }
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar2 != -1) goto LAB_1401cfc05;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1401cfc05:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401cfc2e FUN_1401cfc2e body=89 status=ok
// SIG undefined FUN_1401cfc2e(void)

void FUN_1401cfc2e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[1] = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401cfc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1401cfc88 FUN_1401cfc88 body=72 status=ok
// SIG undefined FUN_1401cfc88(void)

void FUN_1401cfc88(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1401cfcd2();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_142c4fdd8();
      return;
    }
  }
  return;
}



// FUNCTION 1401cfcd2 FUN_1401cfcd2 body=85 status=ok
// SIG undefined FUN_1401cfcd2(void)

void FUN_1401cfcd2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1401d0510();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1401cfd28 FUN_1401cfd28 body=353 status=ok
// SIG undefined FUN_1401cfd28(void)

void FUN_1401cfd28(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401cfdaf;
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
LAB_1401cfdaf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 1401cfe8a FUN_1401cfe8a body=373 status=ok
// SIG undefined FUN_1401cfe8a(void)

void FUN_1401cfe8a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401cff13;
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
LAB_1401cff13:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1401d0000 FUN_1401d0000 body=936 status=ok
// SIG undefined FUN_1401d0000(void)

undefined8 *
FUN_1401d0000(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_b8 [40];
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined8 *local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  uint local_5c;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_3 + 0x18) == '\x01') {
    uVar4 = *(uint *)(param_3 + 0x68) & 0x10;
    iVar8 = uVar4 + 0x10100;
    iVar16 = 4;
    if (uVar4 == 0) {
      iVar16 = 0x10;
    }
    local_90 = (uint)(uVar4 == 0) * 2 + 2;
  }
  else {
    iVar16 = 0x10;
    local_90 = 4;
    iVar8 = 0x10100;
  }
  local_8c = (int)param_4 * 4;
  uVar2 = (ulonglong)((local_8c - 1) + (uint)(local_8c == 0)) * 2 + 1;
  lVar11 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  uVar4 = 1 << ((byte)lVar11 & 0x1f);
  if (0x1fffffff < uVar4) {
    uVar4 = 0x20000000;
  }
  uVar12 = param_5 * (int)param_4;
  uVar2 = (ulonglong)((uVar12 - 1) + (uint)(uVar12 == 0)) * 2 + 1;
  lVar11 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  uVar15 = 1 << ((byte)lVar11 & 0x1f);
  if ((uint)(iVar16 << 0x1b) <= uVar15) {
    uVar15 = iVar16 << 0x1b;
  }
  puVar6 = (undefined8 *)*param_1;
  local_68 = param_4;
  if (puVar6 != (undefined8 *)0x0) {
    local_78 = puVar6[5];
    uVar5 = ((uint)(local_78 >> 0x14) & 0xffff ^ (uint)(local_78 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar7 = uVar5 & 0x7fffffff ^ uVar5 >> 0x10;
    uVar5 = *(uint *)(param_2 + 0x2c0);
    uVar13 = uVar7 & uVar5;
    lVar11 = param_2 + 0x2a8;
    if (*(longlong *)(param_2 + 0x2b0) != 0) {
      lVar11 = *(longlong *)(param_2 + 0x2b0);
    }
    lVar9 = param_2 + 0x290;
    if (*(longlong *)(param_2 + 0x298) != 0) {
      lVar9 = *(longlong *)(param_2 + 0x298);
    }
    do {
      local_88 = iVar16;
      local_84 = iVar8;
      local_80 = puVar6;
      local_70 = param_3;
      if (*(uint *)(lVar11 + (longlong)(int)uVar13 * 4) == uVar7) {
        iVar3 = *(int *)(lVar9 + (longlong)(int)uVar13 * 4);
        lVar17 = (longlong)iVar3 * 0x10;
        if (local_78 == *(ulonglong *)(*(longlong *)(param_2 + 0x250) + lVar17)) {
          if (((iVar3 != -1) &&
              (plVar14 = (longlong *)(*(longlong *)(param_2 + 0x250) + lVar17 + 8),
              plVar14 != (longlong *)0x0)) && (*plVar14 != 0)) {
            *param_1 = 0;
            LOCK();
            piVar1 = (int *)(puVar6 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(puVar6,1);
            }
            puVar6 = (undefined8 *)param_1[1];
            if (puVar6 != (undefined8 *)0x0) {
              param_1[1] = 0;
              LOCK();
              piVar1 = (int *)(puVar6 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar6)(puVar6,1);
              }
            }
          }
          break;
        }
      }
      uVar13 = uVar13 + 1 & uVar5;
    } while (uVar13 != (*(int *)(param_2 + 0x2c4) + uVar7 + 1 & uVar5));
    lVar11 = *param_1;
    param_3 = local_70;
    iVar16 = local_88;
    iVar8 = local_84;
    if (((lVar11 != 0) &&
        (uVar5 = *(int *)(lVar11 + 0x14) * *(int *)(lVar11 + 0x10), local_8c <= uVar5)) &&
       (uVar5 >> 1 <= uVar4)) goto LAB_1401d0262;
  }
  local_5c = uVar4 >> 2;
  local_50 = 0;
  local_60 = 4;
  local_58 = iVar8;
  FUN_1449ed2ff(&local_60,param_1,param_6,0);
LAB_1401d0262:
  lVar11 = param_1[1];
  if (((lVar11 == 0) || (uVar4 = *(int *)(lVar11 + 0x14) * *(int *)(lVar11 + 0x10), uVar4 < uVar12))
     || (uVar15 < uVar4 >> 1)) {
    local_5c = uVar15 >> ((byte)local_90 & 0x1f);
    local_50 = 0;
    local_60 = iVar16;
    local_58 = iVar8;
    FUN_1449ed2ff(&local_60,param_1 + 1,param_6,0);
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar10 + 10;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x60);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar10 + 10;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar6;
  *puVar10 = &PTR_FUN_14a399dd8;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  iVar8 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar8 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar8 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar8 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = (int)local_68;
  *(int *)(puVar10 + 4) = param_5;
  puVar10[5] = param_3;
  puVar10[6] = *(undefined8 *)(*param_1 + 0x28);
  puVar10[7] = *(undefined8 *)(param_1[1] + 0x28);
  *(uint *)(puVar10 + 8) = local_8c;
  *(uint *)((longlong)puVar10 + 0x44) = uVar12;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar10 + 1;
}



// FUNCTION 1401d03aa FUN_1401d03aa body=93 status=ok
// SIG undefined FUN_1401d03aa(void)

void FUN_1401d03aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1401d0408();
  return;
}



// FUNCTION 1401d0408 FUN_1401d0408 body=262 status=ok
// SIG undefined FUN_1401d0408(void)

void FUN_1401d0408(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,param_4);
    }
    _Src = (void *)*param_1;
    iVar3 = (int)param_4 * param_3;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < iVar3) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar5);
    uVar4 = (longlong)_Dst + (longlong)iVar3;
    if (puVar2[1] < uVar4) {
      FUN_140023dd8(puVar2,(uint)(0xf < iVar3) * 8 + 8 + iVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar5);
      uVar4 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar4;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1401d0510 FUN_1401d0510 body=453 status=ok
// SIG undefined FUN_1401d0510(void)

void FUN_1401d0510(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x28);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1401d062e:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1401d066b:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x28;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401d0569;
LAB_1401d055e:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401d0569:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x665) goto code_r0x0001401d0595;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 10 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1401d05eb:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401d066b;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401d062e;
code_r0x0001401d0595:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1401d05eb;
    }
  }
  goto LAB_1401d055e;
}



// FUNCTION 1401d06d5 FUN_1401d06d5 body=1236 status=ok
// SIG undefined FUN_1401d06d5(void)

ulonglong FUN_1401d06d5(longlong param_1,longlong *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 *local_88;
  longlong *local_80;
  uint local_74;
  undefined8 local_70;
  undefined1 local_61;
  uint local_60;
  int local_5c;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *param_2;
  if (lVar5 == 0) {
    local_98 = &local_61;
    local_61 = 0;
    local_60 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      local_60 = DAT_14ca84e48;
    }
    local_60 = local_60 + (local_60 == 0);
    local_58 = 0x10109;
    uVar13 = *param_3 >> 4;
    if (DAT_14ca84e48 <= *param_3 >> 4) {
      uVar13 = DAT_14ca84e48;
    }
    local_50 = 0;
    local_5c = uVar13 + (uVar13 == 0);
    local_70 = param_4;
    uVar7 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70);
    plVar9 = (longlong *)FUN_1449609de(param_1,uVar7);
    puVar10 = (undefined8 *)*plVar9;
    puVar14 = (undefined8 *)*param_2;
    if (puVar14 != puVar10) {
      *param_2 = (longlong)puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
      }
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
  }
  else {
    iVar2 = *(int *)(lVar5 + 0x14);
    iVar3 = *(int *)(lVar5 + 0x10);
    uVar13 = *param_3;
    uVar7 = FUN_144735dd8(param_1,param_2,0);
    if ((uVar13 & 0xfffffff0) != *(int *)(uVar7 + 100) * *(int *)(uVar7 + 0x60)) {
      uVar13 = uVar13 >> 4;
      local_60 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        local_60 = DAT_14ca84e48;
      }
      local_58 = 0x10109;
      local_60 = local_60 + (local_60 == 0);
      local_50 = 0;
      uVar6 = DAT_14ca84e48;
      if (uVar13 < DAT_14ca84e48) {
        uVar6 = uVar13;
      }
      local_5c = uVar6 + (uVar6 == 0);
      plVar9 = (longlong *)(param_1 + 0x70);
      uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar8 = uVar12 + 0x150;
      local_80 = plVar9;
      if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
        FUN_140023dd8(plVar9,0x160);
        uVar12 = *plVar9 + 0xfU & 0xfffffffffffffff0;
        uVar8 = uVar12 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar8;
      FUN_1456bd266(uVar12,param_4,&local_60,0);
      iVar4 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar4 + 1U) {
        FUN_144737178(param_1 + 0x188,iVar4);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 8) = uVar12;
      *(int *)(uVar12 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uVar8 = uVar12;
      plVar9 = (longlong *)FUN_1449609de(param_1);
      puVar10 = (undefined8 *)*plVar9;
      puVar14 = (undefined8 *)*param_2;
      if (puVar14 != puVar10) {
        *param_2 = (longlong)puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
          UNLOCK();
        }
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            uVar8 = 0;
            (**(code **)*puVar14)();
          }
        }
      }
      plVar9 = local_80;
      if ((*(byte *)(uVar12 + 0x68) & 0x80) == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0x1c;
      }
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar14 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        uVar8 = 0;
        FUN_140023dd8(local_80);
        puVar14 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar14 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar10;
      puVar14[1] = *(undefined8 *)(uVar12 + 8);
      puVar14[2] = 0;
      *(undefined1 *)(puVar14 + 3) = 2;
      *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar14 + 5) = 1;
      *puVar14 = &PTR_FUN_14a1fb3e8;
      *(undefined1 *)(puVar14 + 6) = uVar15;
      *(undefined2 *)((longlong)puVar14 + 0x31) = 0;
      puVar14[7] = uVar12;
      uVar6 = *(uint *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = uVar6 + 1;
      if (*(uint *)(param_1 + 0x1a4) < uVar6 + 1) {
        uVar8 = (ulonglong)uVar6;
        local_88 = puVar14;
        FUN_1447568fc();
        puVar14 = local_88;
      }
      plVar9 = local_80;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)(int)uVar6 * 8) = puVar14;
      *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      if ((*(byte *)(uVar7 + 0x68) & 0x80) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = CONCAT71((int7)(uVar8 >> 8),0x1c);
      }
      puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar16 + 9;
      puVar11 = (undefined8 *)(param_1 + 0x198);
      if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
        local_74 = (uint)uVar8;
        local_88 = (undefined8 *)(param_1 + 0x198);
        FUN_140023dd8(local_80,0x50);
        uVar8 = (ulonglong)local_74;
        puVar16 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar16 + 9;
        puVar11 = local_88;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar10;
      puVar16[1] = *(undefined8 *)(uVar7 + 8);
      uVar17 = 0;
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 3;
      *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
      *puVar16 = &PTR_FUN_14a1fb168;
      *(char *)(puVar16 + 5) = (char)uVar8;
      *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
      puVar16[7] = 0;
      puVar16[8] = uVar7;
      iVar4 = *(int *)(param_1 + 0x1a0);
      uVar6 = iVar4 + 1;
      *(uint *)(param_1 + 0x1a0) = uVar6;
      if (*(uint *)(param_1 + 0x1a4) < uVar6) {
        local_88 = puVar14;
        FUN_1447568fc(puVar11);
        puVar14 = local_88;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      uVar6 = ((uint)(iVar2 * iVar3) >> 4) / param_3[1];
      uVar13 = uVar13 / param_3[1];
      local_60 = uVar6;
      if (uVar13 < uVar6) {
        local_60 = uVar13;
      }
      do {
        local_5c = uVar17 * uVar6;
        local_58 = uVar17 * uVar13;
        FUN_1400da22d(param_1,puVar14,puVar16,&local_60);
        uVar17 = uVar17 + 1;
        uVar7 = uVar12;
      } while (uVar17 < param_3[1]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1401d0baa FUN_1401d0baa body=76 status=ok
// SIG undefined FUN_1401d0baa(void)

void FUN_1401d0baa(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x24);
  if (uVar1 != 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x2c);
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1447be372(param_1,iVar3);
    }
    *(uint *)(*param_1 + (longlong)iVar3 * 4) = uVar1 & 0x7f | iVar2 << 7;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1401d0bf6 FUN_1401d0bf6 body=289 status=ok
// SIG undefined FUN_1401d0bf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401d0bf6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0120) {
    FUN_144b3d300(&DAT_14c9d0120);
    if (DAT_14c9d0120 == -1) {
      FUN_1401d0eb4();
      FUN_1456da7ca();
      FUN_140db5666(&DAT_14c9d0078,0,&DAT_14c9d0010,L"FGPUSceneSetInstancePrimitiveIdCS",
                    L"/Engine/Private/GPUScene/GPUSceneDataManagement.usf",
                    L"GPUSceneSetInstancePrimitiveIdCS",5,1,FUN_147169ff0,FUN_147169f90,
                    &LAB_1462c5c0c,&LAB_147169f8c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9d38c0)
      ;
      _DAT_14c9d0078 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c32926);
      _Init_thread_footer(&DAT_14c9d0120);
    }
  }
  return &DAT_14c9d0078;
}



// FUNCTION 1401d0d18 FUN_1401d0d18 body=112 status=ok
// SIG undefined FUN_1401d0d18(void)

void FUN_1401d0d18(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1401d0d88 FUN_1401d0d88 body=299 status=ok
// SIG undefined FUN_1401d0d88(void)

void FUN_1401d0d88(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  uint3 local_50 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_39;
  ulonglong local_38;
  int iVar7;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    iVar7 = 0x39;
    bVar5 = false;
    do {
      bVar6 = (byte)iVar7;
      uVar8 = *(uint *)((longlong)&DAT_14c873430 + (ulonglong)(uint)(iVar7 * 0x30)) & 0x600000;
      if (bVar5) break;
      iVar7 = 0x1c;
      bVar5 = true;
    } while (uVar8 != 0x600000);
    if (uVar8 != 0x600000) {
      bVar6 = 0;
    }
    lVar3 = FUN_144735dd8(param_2,param_1,0);
    local_50[0] = (uint3)bVar6;
    local_48 = (undefined4)lVar3;
    uStack_44 = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_58 = &local_39;
    local_39 = 1;
    uVar4 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,lVar3 + 8);
    lVar3 = param_3[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_3;
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar1 + 4 + lVar9);
        local_50[0]._0_4_ = 0xffffffff;
        local_50[1]._0_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_48 = (undefined4)uVar2;
        thunk_FUN_14323c24f(param_2,uVar4,local_50);
        lVar9 = lVar9 + 0xc;
      } while ((longlong)(int)lVar3 * 0xc != lVar9);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d0eb4 FUN_1401d0eb4 body=258 status=ok
// SIG undefined FUN_1401d0eb4(void)

void FUN_1401d0eb4(void)

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
              0x110) < DAT_14c9d3940) {
    FUN_144b3d300(&DAT_14c9d3940);
    if (DAT_14c9d3940 == -1) {
      FUN_1456da914(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x8c9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d38c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46da1);
      _Init_thread_footer(&DAT_14c9d3940);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d0fb8 FUN_1401d0fb8 body=865 status=ok
// SIG undefined FUN_1401d0fb8(void)

void FUN_1401d0fb8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x318) == 0) {
    FUN_14046096c(param_1,&local_70,param_2);
    lVar6 = local_70;
    lVar7 = local_60;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x318);
    lVar7 = *(longlong *)(param_1 + 0x328);
    local_68 = *(longlong *)(param_1 + 800);
  }
  *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_3 + 4) =
       *(undefined4 *)(param_1 + 0x234 + (ulonglong)*(byte *)(param_1 + 0x300) * 4);
  *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)(param_1 + 0x378);
  if ((*(byte *)(local_68 + 0x68) & 0x80) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1c;
  }
  plVar4 = (longlong *)(param_2 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
    FUN_140023dd8(plVar4,0x48);
    puVar5 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 8;
  }
  lVar1 = param_2 + 0x198;
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  puVar5[1] = *(undefined8 *)(local_68 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 2;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar5 + 5) = 1;
  *puVar5 = &PTR_FUN_14a1fb3e8;
  *(undefined1 *)(puVar5 + 6) = uVar8;
  *(undefined2 *)((longlong)puVar5 + 0x31) = 0;
  puVar5[7] = local_68;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    local_78 = plVar4;
    FUN_1447568fc(lVar1,iVar2);
    plVar4 = local_78;
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_3 = puVar5;
  if ((*(byte *)(lVar7 + 0x68) & 0x80) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1c;
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
    FUN_140023dd8(plVar4,0x48);
    puVar5 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  puVar5[1] = *(undefined8 *)(lVar7 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 2;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar5 + 5) = 1;
  *puVar5 = &PTR_FUN_14a1fb3e8;
  *(undefined1 *)(puVar5 + 6) = uVar8;
  *(undefined2 *)((longlong)puVar5 + 0x31) = 0;
  puVar5[7] = lVar7;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(lVar1,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_3[1] = puVar5;
  if ((*(byte *)(lVar6 + 0x68) & 0x80) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1c;
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
    FUN_140023dd8(plVar4,0x48);
    puVar5 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  puVar5[1] = *(undefined8 *)(lVar6 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 2;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar5 + 5) = 1;
  *puVar5 = &PTR_FUN_14a1fb3e8;
  *(undefined1 *)(puVar5 + 6) = uVar8;
  *(undefined2 *)((longlong)puVar5 + 0x31) = 0;
  puVar5[7] = lVar6;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(lVar1,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_3[2] = puVar5;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d131a FUN_1401d131a body=5800 status=ok
// SIG undefined FUN_1401d131a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401d131a(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 uVar21;
  ulonglong uVar22;
  ushort *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  wchar_t *local_250;
  undefined8 uStack_248;
  char *local_240;
  code *local_238;
  code *local_230;
  undefined **local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  undefined *local_200;
  undefined8 *local_1f8;
  ulonglong *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  longlong local_190;
  longlong *local_188;
  undefined8 *local_180;
  int local_178;
  uint local_174;
  int local_170;
  uint local_16c;
  ulonglong *local_168;
  longlong local_160;
  ulonglong local_158;
  ulonglong *local_150;
  undefined8 *local_148;
  undefined1 local_13d;
  uint local_13c;
  undefined1 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 *local_120;
  longlong local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  undefined6 uVar17;
  
  uVar5 = DAT_14ca84e30;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  uVar10 = *(uint *)(param_3 + 0x18);
  local_16c = uVar10 >> ((uVar10 & 0xf) == 0) * '\x02' + 2;
  local_170 = *(int *)(param_3 + 0x10 + (ulonglong)(*(byte *)(param_3 + 0x40) ^ 1) * 4);
  uVar13 = local_16c * local_170 + 0x3f >> 6;
  local_158 = (ulonglong)uVar13;
  local_174 = (uVar13 + DAT_14ca84e30) - 1;
  local_188 = (longlong *)CONCAT44(local_188._4_4_,local_174);
  local_174 = local_174 / DAT_14ca84e30;
  local_190 = param_3;
  lVar11 = FUN_144735dd8(param_2,param_1,0);
  cVar2 = *(char *)(lVar11 + 0x68);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar28 + 9;
  local_1f0 = puVar1;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(puVar1,0x50);
    puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar28 + 9;
  }
  local_1f8 = (undefined8 *)(param_2 + 0x198);
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  puVar28[1] = *(undefined8 *)(lVar11 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = lVar11;
  iVar18 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
    FUN_1447568fc(local_1f8,iVar18);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  local_180 = puVar28;
  lVar11 = FUN_144735dd8(param_2,param_1 + 8,0);
  puVar1 = local_1f0;
  cVar2 = *(char *)(lVar11 + 0x68);
  puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar28 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8();
    puVar28 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar28 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  puVar28[1] = *(undefined8 *)(lVar11 + 8);
  puVar28[2] = 0;
  *(undefined1 *)(puVar28 + 3) = 3;
  *(undefined8 *)((longlong)puVar28 + 0x1c) = 0xffffffffffffffff;
  *puVar28 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar28 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar28 + 0x2c) = 0xffffffff00000000;
  puVar28[7] = 0;
  puVar28[8] = lVar11;
  iVar18 = *(int *)(param_2 + 0x1a0);
  uVar13 = iVar18 + 1;
  *(uint *)(param_2 + 0x1a0) = uVar13;
  if (*(uint *)(param_2 + 0x1a4) < uVar13) {
    FUN_1447568fc();
  }
  puVar1 = local_1f0;
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = puVar28;
  *(int *)((longlong)puVar28 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  lVar11 = *(longlong *)(local_190 + 0x20);
  local_1d8 = puVar28;
  if (*(char *)(lVar11 + 0x18) == '\0') {
    uVar21 = *(undefined1 *)(lVar11 + 0x94);
    local_1a0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = local_1a0 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(local_1f0,0x50);
      local_1a0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = local_1a0 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar12;
    local_1a0[1] = *(undefined8 *)(lVar11 + 8);
    local_1a0[2] = 0;
    *(undefined1 *)(local_1a0 + 3) = 0;
    *(undefined8 *)((longlong)local_1a0 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_1a0 + 5) = 1;
    *local_1a0 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(local_1a0 + 6) = uVar21;
    *(undefined1 *)(local_1a0 + 7) = 0;
    *(undefined4 *)((longlong)local_1a0 + 0x31) = 0;
    *(undefined2 *)((longlong)local_1a0 + 0x35) = 0;
    local_1a0[8] = lVar11;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_1f8,iVar18);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_1a0;
    *(int *)((longlong)local_1a0 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    uVar10 = DAT_14ca84e40;
    if (0xfffe < (int)DAT_14ca84e40) {
      uVar10 = 0xffff;
    }
    local_178 = (uVar10 & 0xfffe) -
                ((uVar10 & 0xfffe) + ((uVar10 & 0xffff) / 0x2e) * -0x2e & 0xffff);
    iVar27 = 4;
    iVar18 = 2;
LAB_1401d1805:
    local_198 = (undefined8 *)0x0;
    local_1a8 = (undefined8 *)0x0;
    local_1b0 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *)0x0;
    local_1c0 = (undefined8 *)0x0;
    local_1c8 = (undefined8 *)0x0;
    local_1d0 = (undefined8 *)0x0;
    local_148 = (undefined8 *)0x0;
    local_1e0 = (undefined8 *)0x0;
    local_1f8 = (undefined8 *)0x0;
    local_1e8 = (undefined8 *)0x0;
    iVar19 = iVar18;
    goto LAB_1401d1c18;
  }
  if (*(char *)(lVar11 + 0x18) != '\x01') {
    uVar13 = *(uint *)(lVar11 + 0x68);
LAB_1401d1831:
    uVar21 = 0x1c;
    if (-1 < (char)uVar13) {
      uVar21 = 0;
    }
    local_198 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = local_198 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(local_1f0,0x48);
      local_198 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = local_198 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar12;
    local_198[1] = *(undefined8 *)(lVar11 + 8);
    local_198[2] = 0;
    *(undefined1 *)(local_198 + 3) = 2;
    *(undefined8 *)((longlong)local_198 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_198 + 5) = 1;
    *local_198 = &PTR_FUN_14a1fb3e8;
    *(undefined1 *)(local_198 + 6) = uVar21;
    *(undefined2 *)((longlong)local_198 + 0x31) = 0;
    local_198[7] = lVar11;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_1f8,iVar18);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_198;
    *(int *)((longlong)local_198 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    local_1a8 = (undefined8 *)0x0;
    iVar19 = 2;
    local_1b8 = (undefined8 *)0x0;
    local_1c0 = (undefined8 *)0x0;
    local_148 = (undefined8 *)0x0;
    local_1b0 = (undefined8 *)0x0;
    local_1a0 = (undefined8 *)0x0;
    local_1c8 = (undefined8 *)0x0;
    local_1d0 = (undefined8 *)0x0;
    local_1e0 = (undefined8 *)0x0;
    local_1f8 = (undefined8 *)0x0;
    local_1e8 = (undefined8 *)0x0;
    iVar27 = 0;
    goto LAB_1401d1c18;
  }
  uVar13 = *(uint *)(lVar11 + 0x68);
  if ((uVar13 & 0x10) != 0) {
    iVar27 = ((uVar10 & 0xf) == 0) + 2;
    uVar21 = 0x1c;
    if (-1 < (char)uVar13) {
      uVar21 = 0;
    }
    local_1b0 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = local_1b0 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
      FUN_140023dd8(local_1f0,0x48);
      local_1b0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = local_1b0 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar12;
    local_1b0[1] = *(undefined8 *)(lVar11 + 8);
    local_1b0[2] = 0;
    *(undefined1 *)(local_1b0 + 3) = 2;
    *(undefined8 *)((longlong)local_1b0 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(local_1b0 + 5) = 1;
    *local_1b0 = &PTR_FUN_14a1fb3e8;
    *(undefined1 *)(local_1b0 + 6) = uVar21;
    *(undefined2 *)((longlong)local_1b0 + 0x31) = 0;
    local_1b0[7] = lVar11;
    iVar18 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar18 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar18 + 1U) {
      FUN_1447568fc(local_1f8,iVar18);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_1b0;
    *(int *)((longlong)local_1b0 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    iVar19 = 2;
    local_1a8 = (undefined8 *)0x0;
    local_198 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *)0x0;
    local_1c0 = (undefined8 *)0x0;
    local_148 = (undefined8 *)0x0;
    local_1a0 = (undefined8 *)0x0;
    local_1d0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    local_1e0 = (undefined8 *)0x0;
    local_1f8 = (undefined8 *)0x0;
    local_1e8 = local_180;
    local_180 = (undefined8 *)0x0;
    local_1c8 = puVar28;
    goto LAB_1401d1c18;
  }
  if ((uVar13 >> 0x10 & 1) == 0) goto LAB_1401d1831;
  uVar21 = 0x1c;
  if (-1 < (char)uVar13) {
    uVar21 = 0;
  }
  local_148 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = local_148 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
    FUN_140023dd8(local_1f0);
    local_148 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar12 = local_148 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar12;
  local_148[1] = *(undefined8 *)(lVar11 + 8);
  local_148[2] = 0;
  *(undefined1 *)(local_148 + 3) = 2;
  *(undefined8 *)((longlong)local_148 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(local_148 + 5) = 1;
  *local_148 = &PTR_FUN_14a1fb3e8;
  *(undefined1 *)(local_148 + 6) = uVar21;
  *(undefined2 *)((longlong)local_148 + 0x31) = 0;
  local_148[7] = lVar11;
  iVar18 = *(int *)(param_2 + 0x1a0);
  uVar10 = iVar18 + 1;
  *(uint *)(param_2 + 0x1a0) = uVar10;
  if (*(uint *)(param_2 + 0x1a4) < uVar10) {
    FUN_1447568fc(local_1f8);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar18 * 8) = local_148;
  *(int *)((longlong)local_148 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  uVar10 = *(uint *)(local_148[7] + 0x60);
  uVar13 = uVar10;
  if ((int)uVar10 < 0) {
    uVar13 = uVar10 + 3;
  }
  iVar18 = 0x1f;
  if ((int)uVar13 >> 2 != 0) {
    for (; (uint)((int)uVar13 >> 2) >> iVar18 == 0; iVar18 = iVar18 + -1) {
    }
  }
  iVar19 = iVar18;
  if (uVar10 + 3 < 7) {
    iVar19 = 0;
  }
  iVar27 = 1;
  switch(iVar19) {
  case 0:
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *)0x0;
    local_1c0 = (undefined8 *)0x0;
    local_1d0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    local_1e0 = (undefined8 *)0x0;
    local_1f8 = puVar28;
    goto LAB_1401d1c0a;
  case 1:
    local_1a8 = (undefined8 *)0x0;
    local_1b8 = (undefined8 *)0x0;
    local_1d0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    local_1e0 = puVar28;
    local_1c0 = local_148;
    goto LAB_1401d1bfe;
  case 2:
    local_1a8 = (undefined8 *)0x0;
    local_1d0 = (undefined8 *)0x0;
    local_1b8 = local_148;
    break;
  case 3:
    local_1b8 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    local_1d0 = puVar28;
    local_1a8 = local_148;
    break;
  default:
    local_1a0 = (undefined8 *)0x0;
    local_1d8 = (undefined8 *)0x0;
    goto LAB_1401d1805;
  }
  local_1c0 = (undefined8 *)0x0;
  local_1e0 = (undefined8 *)0x0;
LAB_1401d1bfe:
  local_148 = (undefined8 *)0x0;
  local_1f8 = (undefined8 *)0x0;
LAB_1401d1c0a:
  local_198 = (undefined8 *)0x0;
  local_1a0 = (undefined8 *)0x0;
  local_1b0 = (undefined8 *)0x0;
  local_1c8 = (undefined8 *)0x0;
  local_1e8 = (undefined8 *)0x0;
LAB_1401d1c18:
  uVar7 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa07b8) && (FUN_144b3d300(&DAT_14caa07b8), DAT_14caa07b8 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caa0e90) && (FUN_144b3d300(&DAT_14caa0e90), DAT_14caa0e90 == -1)) {
      FUN_146163b06(&local_c8);
      local_210 = (undefined1 *)((ulonglong)local_210 & 0xffffffffffffff00);
      local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
      local_240 = "Unknown";
      local_250 = (wchar_t *)0x0;
      uStack_248 = 0;
      local_258 = L"FParameters";
      local_218 = (undefined1 *)0x0;
      local_230 = (code *)CONCAT44(local_230._4_4_,0x90);
      local_238 = (code *)CONCAT44(local_238._4_4_,0x115);
      local_228 = &local_c8;
      FUN_140b49562(&DAT_14caa0e10,0,1);
      if (local_c8 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323df23);
      _Init_thread_footer(&DAT_14caa0e90);
    }
    FUN_14607043a();
    local_200 = &DAT_14caa0e10;
    local_210 = &LAB_14712ac08;
    local_218 = &LAB_14712ac0c;
    local_220 = &LAB_14323c1e8;
    local_228 = (undefined **)&LAB_14323c1ec;
    local_230 = FUN_14744280a;
    local_238 = FUN_14744286a;
    local_250 = L"ScatterCopyCS";
    local_258 = L"/Engine/Private/ByteBuffer.usf";
    local_208 = 0xe0;
    local_240 = (char *)CONCAT44(local_240._4_4_,0x14);
    uStack_248 = CONCAT44(uStack_248._4_4_,5);
    FUN_140db5666(&DAT_14caa0710,0,&DAT_14caa06a8,L"FRDGScatterCopyCS");
    _DAT_14caa0710 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_14323c243);
    _Init_thread_footer(&DAT_14caa07b8);
  }
  FUN_1448e935e(uVar7,&local_108,&DAT_14caa0710,iVar19 * 5 + iVar27);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa07b8) && (FUN_144b3d300(&DAT_14caa07b8), DAT_14caa07b8 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caa0e90) && (FUN_144b3d300(&DAT_14caa0e90), DAT_14caa0e90 == -1)) {
      FUN_146163b06(&local_c8);
      local_210 = (undefined1 *)((ulonglong)local_210 & 0xffffffffffffff00);
      local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
      local_240 = "Unknown";
      local_250 = (wchar_t *)0x0;
      uStack_248 = 0;
      local_258 = L"FParameters";
      local_218 = (undefined1 *)0x0;
      local_230 = (code *)CONCAT44(local_230._4_4_,0x90);
      local_238 = (code *)CONCAT44(local_238._4_4_,0x115);
      local_228 = &local_c8;
      FUN_140b49562(&DAT_14caa0e10,0,1);
      if (local_c8 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323df23);
      _Init_thread_footer(&DAT_14caa0e90);
    }
    FUN_14607043a();
    local_200 = &DAT_14caa0e10;
    local_210 = &LAB_14712ac08;
    local_218 = &LAB_14712ac0c;
    local_220 = &LAB_14323c1e8;
    local_228 = (undefined **)&LAB_14323c1ec;
    local_230 = FUN_14744280a;
    local_238 = FUN_14744286a;
    local_250 = L"ScatterCopyCS";
    local_258 = L"/Engine/Private/ByteBuffer.usf";
    local_208 = 0xe0;
    local_240 = (char *)CONCAT44(local_240._4_4_,0x14);
    uStack_248 = CONCAT44(uStack_248._4_4_,5);
    FUN_140db5666(&DAT_14caa0710,0,&DAT_14caa06a8,L"FRDGScatterCopyCS");
    _DAT_14caa0710 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_14323c243);
    _Init_thread_footer(&DAT_14caa07b8);
  }
  local_130 = (undefined4)local_108;
  uStack_12c = local_108._4_4_;
  uStack_128 = uStack_100;
  uStack_124 = uStack_fc;
  if (uVar5 <= (uint)local_188) {
    local_188 = (longlong *)(param_2 + 0x98);
    local_160 = param_2 + 0x168;
    uVar10 = 0;
    lVar11 = local_190;
    do {
      puVar1 = local_1f0;
      iVar18 = DAT_14ca84e30 * uVar10;
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar12 = puVar28 + 0x14;
      if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
        FUN_140023dd8(local_1f0,0xb0);
        puVar28 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar12 = puVar28 + 0x14;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar12;
      *puVar28 = &PTR_FUN_14a399db8;
      puVar28[5] = 0;
      puVar28[6] = 0;
      puVar28[7] = 0;
      puVar28[8] = 0;
      puVar28[9] = 0;
      puVar28[10] = 0;
      puVar28[0xb] = 0;
      puVar28[0xd] = 0;
      puVar28[0xe] = 0;
      puVar28[0xf] = 0;
      puVar28[0x10] = 0;
      puVar28[0x11] = 0;
      puVar28[0x12] = 0;
      puVar28[0x13] = 0;
      iVar27 = *(int *)(param_2 + 0xa0);
      uVar16 = (ulonglong)iVar27;
      *(uint *)(param_2 + 0xa0) = iVar27 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar27 + 1U) {
        FUN_1448cfae8(local_188,iVar27);
      }
      *(undefined8 **)(*local_188 + uVar16 * 8) = puVar28;
      *(uint *)((longlong)puVar28 + 0x14) = local_16c;
      *(int *)(puVar28 + 3) = iVar18 * 0x40;
      *(int *)(puVar28 + 4) = local_178;
      puVar28[5] = local_198;
      puVar28[6] = local_1a8;
      puVar28[7] = local_1b8;
      puVar28[8] = local_1c0;
      puVar28[9] = local_148;
      puVar28[10] = local_1b0;
      puVar28[0xb] = local_1a0;
      *(int *)(puVar28 + 0xc) = local_170;
      puVar28[0xd] = local_1c8;
      puVar28[0xe] = local_1d0;
      puVar28[0xf] = local_1d8;
      puVar28[0x10] = local_1e0;
      puVar28[0x11] = local_1f8;
      puVar28[0x12] = local_1e8;
      puVar28[0x13] = local_180;
      puVar12 = puVar28 + 2;
      if (*(char *)(lVar11 + 0x40) == '\x01') {
        local_13c = (int)local_158 - DAT_14ca84e30 * uVar10;
        if (DAT_14ca84e30 <= local_13c) {
          local_13c = DAT_14ca84e30;
        }
        local_138 = &DAT_100000001;
        local_258 = (wchar_t *)&local_13c;
        FUN_144a95ddb(param_2,&local_c8,&local_130,puVar12);
      }
      else {
        uStack_d4 = *(undefined4 *)(lVar11 + 0x18);
        local_f8 = (longlong *)0x0;
        local_e8 = &PTR_LAB_14a399e00;
        local_108 = FUN_14323f088;
        uStack_e0 = puVar12;
        local_d8 = uVar10;
        uStack_d0 = lVar11;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caa0e90) &&
           (FUN_144b3d300(&DAT_14caa0e90), DAT_14caa0e90 == -1)) {
          FUN_146163b06(&local_c8);
          local_210 = (undefined1 *)((ulonglong)local_210 & 0xffffffffffffff00);
          local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
          local_240 = "Unknown";
          local_250 = (wchar_t *)0x0;
          uStack_248 = 0;
          local_258 = L"FParameters";
          local_218 = (undefined1 *)0x0;
          local_230 = (code *)CONCAT44(local_230._4_4_,0x90);
          local_238 = (code *)CONCAT44(local_238._4_4_,0x115);
          local_228 = &local_c8;
          FUN_140b49562(&DAT_14caa0e10,0,1);
          if (local_c8 != (undefined *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_14323df23);
          _Init_thread_footer(&DAT_14caa0e90);
        }
        lVar11 = DAT_14caa0e58;
        iVar18 = *(int *)(DAT_14caa0e58 + 0x38);
        if (0 < (longlong)iVar18) {
          lVar9 = CONCAT44(uStack_12c,local_130);
          local_150 = (ulonglong *)(lVar9 + 0x30);
          local_168 = (ulonglong *)(lVar9 + 0x20);
          lVar25 = 0;
          uVar16 = 0;
          iVar27 = 0;
          iVar19 = 0;
          do {
            bVar3 = *(byte *)(*(longlong *)(lVar11 + 0x30) + 2 + lVar25 * 4);
            if (bVar3 < 0x14) {
              uVar4 = *(ushort *)(*(longlong *)(lVar11 + 0x30) + lVar25 * 4);
              uVar24 = (ulonglong)uVar4;
              iVar26 = iVar27;
              if ((0x67200U >> (bVar3 & 0x1f) & 1) == 0) {
                if (bVar3 == 0x13) {
                  if (iVar19 < *(int *)(lVar9 + 0x38)) {
                    uVar8 = *local_150;
                    uVar22 = ((longlong)uVar8 >> 0x18) + (longlong)local_150;
                    if ((uVar8 & 1) == 0) {
                      uVar22 = uVar8;
                    }
                    if (uVar4 == *(ushort *)(uVar22 + 2 + (longlong)iVar19 * 4)) {
                      iVar19 = iVar19 + 1;
                      goto LAB_1401d2045;
                    }
                  }
                  if ((*(longlong *)((longlong)puVar12 + uVar24) != 0) &&
                     ((*(byte *)((longlong)puVar28 + uVar24 + 0x18) & 2) == 0)) goto LAB_1401d203c;
                }
              }
              else {
                uVar5 = *(uint *)(lVar9 + 0x18);
                if ((int)uVar16 < (int)uVar5) {
                  uVar8 = *(ulonglong *)(lVar9 + 0x10);
                  uVar22 = ((longlong)uVar8 >> 0x18) + lVar9 + 0x10;
                  if ((uVar8 & 1) == 0) {
                    uVar22 = uVar8;
                  }
                  puVar23 = (ushort *)(uVar22 + (longlong)(int)uVar16 * 4);
                  do {
                    if (uVar4 <= *puVar23) {
                      if (*puVar23 == uVar4) goto LAB_1401d2045;
                      goto LAB_1401d2034;
                    }
                    uVar13 = (int)uVar16 + 1;
                    uVar16 = (ulonglong)uVar13;
                    puVar23 = puVar23 + 2;
                  } while (uVar5 != uVar13);
                  uVar16 = (ulonglong)uVar5;
                }
LAB_1401d2034:
                iVar6 = *(int *)(lVar9 + 0x28);
                if (iVar27 < iVar6) {
                  uVar8 = *local_168;
                  uVar22 = ((longlong)uVar8 >> 0x18) + (longlong)local_168;
                  if ((uVar8 & 1) == 0) {
                    uVar22 = uVar8;
                  }
                  puVar23 = (ushort *)(uVar22 + (longlong)iVar27 * 6);
                  do {
                    if (uVar4 <= *puVar23) {
                      iVar26 = iVar27;
                      if (*puVar23 == uVar4) goto LAB_1401d2045;
                      break;
                    }
                    iVar27 = iVar27 + 1;
                    puVar23 = puVar23 + 3;
                    iVar26 = iVar6;
                  } while (iVar6 != iVar27);
                }
LAB_1401d203c:
                *(undefined8 *)((longlong)puVar12 + uVar24) = 0;
                iVar27 = iVar26;
              }
            }
LAB_1401d2045:
            lVar25 = lVar25 + 1;
          } while (lVar25 != iVar18);
        }
        local_c8 = &DAT_14caa0e10;
        local_b8 = CONCAT44(uStack_12c,local_130);
        uStack_b0 = CONCAT44(uStack_124,uStack_128);
        local_a8 = local_108;
        local_98 = local_f8;
        local_f8 = (longlong *)0x0;
        local_78 = local_d8;
        uStack_74 = uStack_d4;
        uStack_70 = (undefined4)uStack_d0;
        uStack_6c = uStack_d0._4_4_;
        local_88 = (undefined4)local_e8;
        uStack_84 = local_e8._4_4_;
        uStack_80 = (undefined4)uStack_e0;
        uStack_7c = uStack_e0._4_4_;
        if (local_108 != (code *)0x0) {
          local_108 = (code *)0x0;
        }
        puStack_c0 = puVar12;
        FUN_140069376(param_2);
        lVar11 = local_190;
        puVar1 = local_1f0;
        uVar17 = (undefined6)(uVar16 >> 0x10);
        uVar15 = (undefined4)CONCAT62(uVar17,2);
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar15 = (undefined4)CONCAT62(uVar17,4);
        }
        puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar28 = puVar20 + 0x44;
        if (*(undefined8 **)(param_2 + 0x78) < puVar28) {
          FUN_140023dd8(local_1f0,0x230);
          puVar20 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar28 = puVar20 + 0x44;
        }
        *local_1f0 = (ulonglong)puVar28;
        local_118 = DAT_14caa0e58;
        if (DAT_14caa0e58 != 0) {
          LOCK();
          *(int *)(DAT_14caa0e58 + 8) = *(int *)(DAT_14caa0e58 + 8) + 1;
          UNLOCK();
        }
        local_110 = &DAT_14caa0e10;
        local_258 = (wchar_t *)CONCAT71(local_258._1_7_,2);
        local_120 = puVar12;
        FUN_140068f1a(puVar20,&local_13d,&local_120,uVar15);
        *puVar20 = &PTR_FUN_14a399de0;
        puVar20[0x38] = local_c8;
        puVar20[0x39] = puStack_c0;
        puVar20[0x3a] = local_b8;
        puVar20[0x3b] = uStack_b0;
        puVar20[0x3c] = local_a8;
        puVar20[0x3e] = local_98;
        local_98 = (longlong *)0x0;
        *(uint *)(puVar20 + 0x42) = local_78;
        *(undefined4 *)((longlong)puVar20 + 0x214) = uStack_74;
        *(undefined4 *)(puVar20 + 0x43) = uStack_70;
        *(undefined4 *)((longlong)puVar20 + 0x21c) = uStack_6c;
        *(undefined4 *)(puVar20 + 0x40) = local_88;
        *(undefined4 *)((longlong)puVar20 + 0x204) = uStack_84;
        *(undefined4 *)(puVar20 + 0x41) = uStack_80;
        *(undefined4 *)((longlong)puVar20 + 0x20c) = uStack_7c;
        if (local_a8 != (code *)0x0) {
          local_a8 = (code *)0x0;
        }
        iVar18 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar18 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar18 + 1U) {
          FUN_14470e57a(local_160,iVar18);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar18 * 8) = puVar20;
        *(int *)((longlong)puVar20 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar20);
        if (local_a8 != (code *)0x0) {
          plVar14 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar14 = (longlong *)&local_88;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if (local_108 != (code *)0x0) {
          plVar14 = local_f8;
          if (local_f8 == (longlong *)0x0) {
            plVar14 = &local_e8;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_174);
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d29c4 FUN_1401d29c4 body=345 status=ok
// SIG undefined FUN_1401d29c4(void)

void FUN_1401d29c4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401d2a47;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1401d2a47:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1401d2b1e FUN_1401d2b1e body=17 status=ok
// SIG undefined FUN_1401d2b1e(void)

ulonglong FUN_1401d2b1e(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  return uVar1 ^ 1;
}



// FUNCTION 1401d2b30 FUN_1401d2b30 body=54 status=ok
// SIG undefined FUN_1401d2b30(void)

undefined8 FUN_1401d2b30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x58))();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[0x143];
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != param_2 && lVar1 != 0);
  }
  return uVar3;
}



// FUNCTION 1401d2b72 FUN_1401d2b72 body=232 status=ok
// SIG undefined FUN_1401d2b72(void)

void FUN_1401d2b72(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_2 + 5);
  if ((((bVar1 & 1) != 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) &&
     ((*(ushort *)((longlong)param_2 + 0x35) & 0x4010) == 0)) {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1401d2c5c(DAT_14caa8580,param_1);
    bVar1 = *(byte *)(param_2 + 5);
  }
  if (((bVar1 & 4) != 0) && (*param_1 != 0)) {
    if (DAT_14caa7e28 == 0) {
      uVar2 = FUN_140608922();
      DAT_14caa7e28 = FUN_140002ddd(FUN_1417948e9,uVar2,L"GameplayTag");
    }
    local_20 = DAT_14caa7e28;
    if ((DAT_14caa7e28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(DAT_14caa7e28);
    }
    (**(code **)(*param_2 + 0x210))(param_2,&local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d2c5c FUN_1401d2c5c body=286 status=ok
// SIG undefined FUN_1401d2c5c(void)

void FUN_1401d2c5c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  lVar3 = *param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa8238) && (FUN_144b3d300(&DAT_14caa8238), DAT_14caa8238 == -1)) {
    FUN_1432721ec(&DAT_14caa81e8);
    atexit(FUN_143272a51);
    _Init_thread_footer(&DAT_14caa8238);
  }
  if (DAT_14caa81f0 != DAT_14caa821c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    puVar6 = &DAT_14caa8220;
    if (DAT_14caa8228 != (undefined *)0x0) {
      puVar6 = DAT_14caa8228;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14caa8230 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14caa81e8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if ((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) {
          *param_2 = plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  FUN_1401d2d7a(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 1401d2d7a FUN_1401d2d7a body=189 status=ok
// SIG undefined FUN_1401d2d7a(void)

void FUN_1401d2d7a(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while (((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
              (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
              plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2), cVar5 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_1401d2e28;
          goto LAB_1401d2da6;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1401d2e28:
    FUN_14109be94(param_1,0);
  }
LAB_1401d2da6:
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401d2db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1401d2e38 FUN_1401d2e38 body=2596 status=ok
// SIG undefined FUN_1401d2e38(void)

void FUN_1401d2e38(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  undefined8 *puVar14;
  double *pdVar15;
  void *pvVar16;
  int iVar17;
  double dVar18;
  double *_Dst;
  void *pvVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_2a8 [32];
  byte *local_288;
  uint local_280;
  undefined1 local_269;
  void *local_268;
  double local_260;
  uint local_254;
  undefined8 *local_250;
  double *local_248;
  double local_240;
  double local_238;
  undefined4 local_22c;
  ulonglong local_228;
  longlong local_220;
  ulonglong local_218;
  undefined8 *local_210;
  longlong local_208;
  byte local_1fa;
  byte local_1f9;
  undefined8 *local_1f8;
  int local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  void *local_188;
  double *local_180;
  double local_178;
  undefined8 *local_170;
  double *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_1401d3dbe();
  lVar10 = param_1[0x16];
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_1);
    local_254 = DAT_14c760db4;
    if (lVar10 == 0) goto LAB_1401d2ee4;
    lVar10 = param_1[0x16];
    if (lVar10 == 0) {
      lVar10 = FUN_1448abda6(param_1);
    }
  }
  local_254 = (uint)*(byte *)(lVar10 + 0x150);
LAB_1401d2ee4:
  local_22c = FUN_1448d11dc(param_1);
  if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
    local_269 = (**(code **)(*param_1 + 0xac8))(param_1);
  }
  else {
    local_269 = 1;
  }
  cVar6 = (**(code **)(*param_1 + 0xbf0))(param_1);
  if (cVar6 != '\0') {
    uVar9 = *param_2;
    (**(code **)(*param_1 + 0x7a8))(param_1,&local_1e8);
    local_260 = local_1e0;
    local_250 = local_170;
    local_248 = local_180;
    local_240 = local_1c8;
    local_238 = local_1a8;
    local_268 = local_188;
    FUN_14008fc84(param_1,&local_1f8);
    if ((longlong)local_1f0 != 0) {
      dVar23 = local_1d8 * local_1b0 - local_1b8 * local_1d0;
      dVar22 = local_1b8 * local_190 - local_198 * local_1b0;
      dVar21 = local_1d8 * local_190 - local_198 * local_1d0;
      local_268 = (void *)((double)local_268 *
                          (local_1a0 * dVar23 + (local_260 * dVar22 - dVar21 * local_1c0)));
      dVar20 = local_1b8 * (double)local_250 - local_1b0 * local_178;
      dVar4 = local_1d8 * (double)local_250 - local_1d0 * local_178;
      dVar18 = local_198 * (double)local_250 - local_178 * local_190;
      local_210 = local_1f8 + local_1f0;
      iVar17 = 0;
      puVar14 = local_1f8;
      dVar18 = (double)(uVar9 & 0xfffffffffffeffff |
                       (ulonglong)
                       (((local_1e8 *
                          (dVar22 * (double)local_248 + (local_1c0 * dVar18 - dVar20 * local_1a0)) -
                         (dVar21 * (double)local_248 + (dVar18 * local_260 - dVar4 * local_1a0)) *
                         local_240) +
                        local_238 *
                        (dVar23 * (double)local_248 + (local_260 * dVar20 - dVar4 * local_1c0))) -
                        (double)local_268 < 0.0 | (byte)(uVar9 >> 0x10) & 1) << 0x10);
      local_220 = param_3;
      do {
        plVar3 = (longlong *)*puVar14;
        local_250 = puVar14;
        local_208 = (**(code **)(*plVar3 + 0x3b8))(plVar3);
        uVar5 = local_22c;
        local_280 = local_254;
        local_288 = (byte *)CONCAT71(local_288._1_7_,local_269);
        FUN_1448d1550(plVar3,&local_1e8,param_1,local_22c);
        uVar8 = (**(code **)(*plVar3 + 0x388))(plVar3);
        bVar7 = FUN_1401d385e(uVar8,uVar5);
        uVar9 = (ulonglong)((byte)((ulonglong)dVar18 >> 0xc) & bVar7) << 0xc;
        local_228 = (ulonglong)dVar18 & 0xffffffffffffefff;
        dVar20 = (double)(uVar9 | local_228);
        pdVar15 = local_108;
        if (local_108 == (double *)0x0) {
          pdVar15 = &local_1e8;
        }
        if ((longlong)local_100 != 0) {
          local_240 = (double)((longlong)local_100 * 0x38);
          local_248 = pdVar15 + 1;
          local_218 = uVar9 | (ulonglong)dVar18 & 0xffff9fffffffefff;
          dVar18 = 0.0;
          local_238 = (double)CONCAT44(local_238._4_4_,iVar17);
          local_260 = dVar20;
          do {
            lVar10 = (**(code **)(*param_1 + 0x610))
                               (param_1,*(short *)((longlong)pdVar15 + (longlong)dVar18) + iVar17);
            if (lVar10 == 0) {
              FUN_14003fbd6();
              lVar10 = DAT_14caea080;
            }
            iVar17 = *(int *)(param_3 + 0x128);
            *(uint *)(param_3 + 0x128) = iVar17 + 1U;
            if (*(uint *)(param_3 + 300) < iVar17 + 1U) {
              FUN_1401acddc(param_3,iVar17);
            }
            lVar11 = *(longlong *)(param_3 + 0x120);
            if (*(longlong *)(param_3 + 0x120) == 0) {
              lVar11 = param_3;
            }
            lVar12 = (longlong)iVar17 * 0x48;
            FUN_1447244c4(lVar11 + lVar12,1);
            lVar11 = *(longlong *)(param_3 + 0x120);
            if (*(longlong *)(param_3 + 0x120) == 0) {
              lVar11 = param_3;
            }
            lVar1 = lVar11 + lVar12;
            pvVar19 = (void *)(lVar11 + 0x18 + lVar12);
            *(longlong *)((longlong)pvVar19 + -0x10) = lVar10;
            local_268 = (void *)((longlong)local_248 + (longlong)dVar18);
            if (local_268 != pvVar19) {
              pvVar16 = *(void **)((longlong)pdVar15 + (longlong)dVar18 + 0x28);
              if (pvVar16 == (void *)0x0) {
                pvVar16 = local_268;
              }
              iVar17 = *(int *)((longlong)pdVar15 + (longlong)dVar18 + 0x30);
              *(int *)(lVar1 + 0x40) = iVar17;
              if (iVar17 == 0 && *(int *)(lVar1 + 0x44) == 0) {
                *(undefined4 *)(lVar1 + 0x44) = 2;
              }
              else {
                FUN_1447376de(pvVar19,iVar17);
                if (iVar17 != 0) {
                  if (*(void **)(lVar1 + 0x38) != (void *)0x0) {
                    pvVar19 = *(void **)(lVar1 + 0x38);
                  }
                  memcpy(pvVar19,pvVar16,(longlong)iVar17 << 4);
                }
              }
            }
            dVar20 = local_260;
            *(double *)(lVar1 + 0x10) = local_260;
            local_1f9 = 0;
            local_1fa = 0;
            local_288 = &local_1fa;
            FUN_1448d0e40(param_1,lVar10,lVar1,&local_1f9);
            lVar11 = (**(code **)(*param_1 + 0x648))(param_1);
            lVar10 = local_220;
            iVar17 = local_238._0_4_;
            if (lVar11 != 0) {
              iVar2 = *(int *)(local_220 + 0x128);
              *(uint *)(local_220 + 0x128) = iVar2 + 1U;
              if (*(uint *)(local_220 + 300) < iVar2 + 1U) {
                FUN_1401acddc(local_220,iVar2);
              }
              lVar12 = *(longlong *)(lVar10 + 0x120);
              if (*(longlong *)(lVar10 + 0x120) == 0) {
                lVar12 = lVar10;
              }
              lVar1 = (longlong)iVar2 * 0x48;
              FUN_1447244c4(lVar12 + lVar1,1);
              lVar12 = *(longlong *)(lVar10 + 0x120);
              if (*(longlong *)(lVar10 + 0x120) == 0) {
                lVar12 = lVar10;
              }
              lVar10 = lVar12 + lVar1;
              pvVar19 = (void *)(lVar1 + lVar12 + 0x18);
              *(longlong *)(lVar1 + lVar12 + 8) = lVar11;
              if (local_268 != pvVar19) {
                pvVar16 = *(void **)((longlong)pdVar15 + (longlong)dVar18 + 0x28);
                if (pvVar16 == (void *)0x0) {
                  pvVar16 = local_268;
                }
                iVar2 = *(int *)((longlong)pdVar15 + (longlong)dVar18 + 0x30);
                *(int *)(lVar10 + 0x40) = iVar2;
                if (iVar2 == 0 && *(int *)(lVar10 + 0x44) == 0) {
                  *(undefined4 *)(lVar10 + 0x44) = 2;
                }
                else {
                  FUN_1447376de(pvVar19,iVar2);
                  if (iVar2 != 0) {
                    if (*(void **)(lVar10 + 0x38) != (void *)0x0) {
                      pvVar19 = *(void **)(lVar10 + 0x38);
                    }
                    memcpy(pvVar19,pvVar16,(longlong)iVar2 << 4);
                  }
                }
              }
              *(ulonglong *)(lVar10 + 0x10) =
                   (ulonglong)local_1fa << 0x2e | ((ulonglong)local_1f9 << 0x2d) + local_218;
              dVar20 = local_260;
            }
            lVar10 = (**(code **)(*param_1 + 0x658))(param_1);
            param_3 = local_220;
            if ((lVar10 != 0) && (local_1fa == 0)) {
              iVar2 = *(int *)(local_220 + 0x128);
              *(uint *)(local_220 + 0x128) = iVar2 + 1U;
              if (*(uint *)(local_220 + 300) < iVar2 + 1U) {
                FUN_1401acddc(local_220,iVar2);
              }
              lVar11 = *(longlong *)(param_3 + 0x120);
              if (*(longlong *)(param_3 + 0x120) == 0) {
                lVar11 = param_3;
              }
              lVar12 = (longlong)iVar2 * 0x48;
              FUN_1447244c4(lVar11 + lVar12,1);
              lVar11 = *(longlong *)(param_3 + 0x120);
              if (*(longlong *)(param_3 + 0x120) == 0) {
                lVar11 = param_3;
              }
              lVar1 = lVar11 + lVar12;
              pvVar19 = (void *)(lVar12 + lVar11 + 0x18);
              *(longlong *)(lVar12 + lVar11 + 8) = lVar10;
              if (local_268 != pvVar19) {
                pvVar16 = *(void **)((longlong)pdVar15 + (longlong)dVar18 + 0x28);
                if (pvVar16 != (void *)0x0) {
                  local_268 = pvVar16;
                }
                iVar2 = *(int *)((longlong)pdVar15 + (longlong)dVar18 + 0x30);
                *(int *)(lVar1 + 0x40) = iVar2;
                if (iVar2 == 0 && *(int *)(lVar1 + 0x44) == 0) {
                  *(undefined4 *)(lVar1 + 0x44) = 2;
                }
                else {
                  FUN_1447376de(pvVar19,iVar2);
                  if (iVar2 != 0) {
                    if (*(void **)(lVar1 + 0x38) != (void *)0x0) {
                      pvVar19 = *(void **)(lVar1 + 0x38);
                    }
                    memcpy(pvVar19,local_268,(longlong)iVar2 << 4);
                  }
                }
              }
              *(ulonglong *)(lVar1 + 0x10) = local_228;
              dVar20 = local_260;
            }
            dVar18 = (double)((longlong)dVar18 + 0x38);
          } while (local_240 != dVar18);
        }
        lVar10 = param_1[0xc6];
        if (lVar10 == 0) {
          if (*(code **)(*param_1 + 0xa68) != (code *)&LAB_14470a070) {
            lVar10 = (**(code **)(*param_1 + 0xa68))(param_1);
            goto LAB_1401d3673;
          }
        }
        else {
LAB_1401d3673:
          if ((lVar10 != 0) && (local_100 != 0)) {
            iVar2 = *(int *)(param_3 + 0x128);
            *(uint *)(param_3 + 0x128) = iVar2 + 1U;
            if (*(uint *)(param_3 + 300) < iVar2 + 1U) {
              FUN_1401acddc(param_3,iVar2);
            }
            lVar11 = *(longlong *)(param_3 + 0x120);
            if (*(longlong *)(param_3 + 0x120) == 0) {
              lVar11 = param_3;
            }
            lVar12 = (longlong)iVar2 * 0x48;
            FUN_1447244c4(lVar11 + lVar12,1);
            lVar11 = *(longlong *)(param_3 + 0x120);
            if (*(longlong *)(param_3 + 0x120) == 0) {
              lVar11 = param_3;
            }
            lVar1 = lVar11 + lVar12;
            _Dst = (double *)(lVar11 + lVar12 + 0x18);
            *(longlong *)(lVar11 + lVar12 + 8) = lVar10;
            pdVar15 = local_108;
            if (local_108 == (double *)0x0) {
              pdVar15 = &local_1e8;
            }
            if (_Dst != pdVar15 + 1) {
              pdVar13 = local_108;
              if (local_108 == (double *)0x0) {
                pdVar13 = &local_1e8;
              }
              pdVar15 = pdVar15 + 1;
              if ((double *)pdVar13[5] != (double *)0x0) {
                pdVar15 = (double *)pdVar13[5];
              }
              iVar2 = *(int *)(pdVar13 + 6);
              *(int *)(lVar1 + 0x40) = iVar2;
              if (iVar2 == 0 && *(int *)(lVar1 + 0x44) == 0) {
                *(undefined4 *)(lVar1 + 0x44) = 2;
              }
              else {
                FUN_1447376de(_Dst,iVar2);
                if (iVar2 != 0) {
                  if (*(double **)(lVar1 + 0x38) != (double *)0x0) {
                    _Dst = *(double **)(lVar1 + 0x38);
                  }
                  memcpy(_Dst,pdVar15,(longlong)iVar2 << 4);
                }
              }
            }
            *(ulonglong *)(lVar1 + 0x10) = local_228;
          }
        }
        iVar17 = iVar17 + *(int *)(local_208 + 8);
        pdVar15 = local_108;
        if (local_108 == (double *)0x0) {
          pdVar15 = &local_1e8;
        }
        FUN_14472bf49(pdVar15,local_100);
        if (local_108 != (double *)0x0) {
          FUN_1400020a8();
        }
        puVar14 = local_250 + 1;
        dVar18 = dVar20;
      } while (puVar14 != local_210);
    }
    if (local_1f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d385e FUN_1401d385e body=87 status=ok
// SIG undefined FUN_1401d385e(void)

bool FUN_1401d385e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar4 = (longlong)param_2;
    bVar3 = true;
    do {
      lVar2 = *(longlong *)(*param_1 + lVar4 * 8);
      lVar5 = (longlong)*(int *)(lVar2 + 0x18);
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0xd + lVar6) != '\0') {
            return bVar3;
          }
          lVar6 = lVar6 + 0xf8;
        } while (lVar5 * 0xf8 - lVar6 != 0);
      }
      lVar4 = lVar4 + 1;
      bVar3 = lVar4 < iVar1;
    } while (iVar1 != (int)lVar4);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 1401d38b5 FUN_1401d38b5 body=54 status=ok
// SIG undefined FUN_1401d38b5(void)

void FUN_1401d38b5(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1401d38ec FUN_1401d38ec body=343 status=ok
// SIG undefined FUN_1401d38ec(void)

void FUN_1401d38ec(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x48) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x30) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001401d3a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 1401d3a44 FUN_1401d3a44 body=21 status=ok
// SIG undefined FUN_1401d3a44(void)

undefined4 FUN_1401d3a44(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x3b0))();
  return *(undefined4 *)(lVar1 + 8);
}



// FUNCTION 1401d3a5a FUN_1401d3a5a body=304 status=ok
// SIG undefined FUN_1401d3a5a(void)

void FUN_1401d3a5a(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b4 [4];
  undefined1 local_b0 [128];
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = local_b0;
  local_30 = 0;
  local_28 = 0x800000000;
  local_c0 = local_b4;
  FUN_1448d2f52(param_1);
  bVar2 = DAT_14ca96500;
  if (DAT_14c760db4 != 1) {
    if (((DAT_14c760db4 < 3) ||
        (lVar3 = (ulonglong)DAT_14ca85550 * 0x3c,
        *(longlong *)(&DAT_14ca814b0 + lVar3) == DAT_14ca81490)) || (DAT_14ca85550 == 0xc))
    goto LAB_1401d3b3a;
    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) == 0) {
      bVar2 = 1;
    }
    else {
      bVar2 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar3 + 3) & 0x20) >> 5;
    }
  }
  if ((1 < param_1) && (bVar2 != 0)) {
    uVar4 = local_28 & 0xff;
    iVar1 = *(int *)(param_4 + 0x88);
    *(uint *)(param_4 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x8c) < iVar1 + 1U) {
      FUN_14738ac8a(param_4,iVar1);
    }
    *(ulonglong *)(param_4 + (longlong)iVar1 * 8) = uVar4 | 0x1000010140000;
  }
LAB_1401d3b3a:
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d3b8c FUN_1401d3b8c body=35 status=ok
// SIG undefined FUN_1401d3b8c(void)

bool FUN_1401d3b8c(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x3b0))();
  return param_2 < *(int *)(lVar1 + 8) && -1 < param_2;
}



// FUNCTION 1401d3bb0 FUN_1401d3bb0 body=526 status=ok
// SIG undefined FUN_1401d3bb0(void)

ulonglong FUN_1401d3bb0(longlong param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  bool bVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cad2b40) && (FUN_144b3d300(&DAT_14cad2b40), DAT_14cad2b40 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cad2b38 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SkinCache.DefaultBehavior",1);
    _Init_thread_footer(&DAT_14cad2b40);
  }
  if (DAT_14cad2b38 == (longlong *)0x0) {
    bVar7 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = (**(code **)(*DAT_14cad2b38 + 0xb0))();
    bVar7 = cVar2 == '\x01';
    uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  }
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x6b8))) &&
      (lVar3 = (longlong)*(char *)(*(longlong *)(param_1 + 0x6b0) + (ulonglong)param_2), lVar3 != -1
      )) && (*(longlong *)(*(longlong *)(param_1 + 0x6a0) + lVar3 * 8) != 0)) {
    return 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_1401d3d05;
    if (plVar5 == (longlong *)0x0) goto LAB_1401d3c99;
LAB_1401d3d2a:
    bVar1 = DAT_14c950c29 & plVar5 != (longlong *)0x0;
joined_r0x0001401d3dab:
    if (bVar1 != 0) {
      FUN_1456cec3c(plVar5);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_1401d3d05:
    FUN_1456cec3c(plVar5);
    plVar5 = *(longlong **)(param_1 + 0x658);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x660);
      goto LAB_1401d3d2a;
    }
    bVar1 = DAT_14c950c29 & 1;
    goto joined_r0x0001401d3dab;
  }
  lVar3 = (**(code **)(*plVar5 + 800))(plVar5,param_2);
  if (lVar3 != 0) {
    bVar4 = *(char *)(lVar3 + 200) == '\x01';
    if (*(char *)(lVar3 + 200) == '\0') {
      bVar4 = bVar7;
    }
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x678))) {
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x670) + (ulonglong)param_2);
      if (cVar2 != '\0') {
        bVar4 = cVar2 == '\x01';
      }
      return (ulonglong)(byte)(DAT_14c761560 != 0 & bVar4);
    }
    return (ulonglong)(byte)(bVar4 & DAT_14c761560 != 0);
  }
LAB_1401d3c99:
  return CONCAT71(uVar6,bVar7 & DAT_14c761560 != 0) & 0xffffffff;
}



// FUNCTION 1401d3dbe FUN_1401d3dbe body=2572 status=ok
// SIG undefined FUN_1401d3dbe(void)

void FUN_1401d3dbe(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_2e8 [32];
  byte *local_2c8;
  uint local_2c0;
  undefined1 *local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  longlong local_298;
  undefined1 *local_290;
  ulonglong local_288;
  undefined1 *local_280;
  longlong local_278;
  byte local_269;
  byte local_268;
  undefined7 uStack_267;
  double local_260;
  double local_258;
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
  double local_1f0;
  undefined1 local_1e0 [224];
  undefined1 *local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  plVar16 = (longlong *)param_1[0xcb];
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) goto LAB_1401d4758;
    if (plVar16 == (longlong *)0x0) goto LAB_1401d42f1;
LAB_1401d4779:
    if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) {
LAB_1401d47be:
      FUN_1456cec3c(plVar16);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_1401d4758:
    FUN_1456cec3c(plVar16);
    plVar16 = (longlong *)param_1[0xcb];
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)param_1[0xcc];
      goto LAB_1401d4779;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_1401d3e6b;
    goto LAB_1401d47be;
  }
LAB_1401d3e6b:
  lVar10 = (**(code **)(*plVar16 + 0x388))(plVar16);
  if (lVar10 == 0) goto LAB_1401d42f1;
  lVar10 = param_1[0x16];
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6(param_1);
    uVar18 = DAT_14c760db4;
    if (lVar10 != 0) {
      lVar10 = param_1[0x16];
      if (lVar10 == 0) {
        lVar10 = FUN_1448abda6(param_1);
      }
      goto LAB_1401d3e90;
    }
  }
  else {
LAB_1401d3e90:
    uVar18 = (uint)*(byte *)(lVar10 + 0x150);
  }
  uVar9 = FUN_1448d11dc(param_1);
  if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
    uVar7 = (**(code **)(*param_1 + 0xac8))(param_1);
  }
  else {
    uVar7 = 1;
  }
  lVar10 = param_1[0xcb];
  if (lVar10 == 0) {
    lVar10 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar10 != 0) != 0) goto LAB_1401d46cf;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1401d46cf:
    FUN_1456cec3c(lVar10);
  }
  local_2c8 = (byte *)CONCAT71(local_2c8._1_7_,uVar7);
  local_2c0 = uVar18;
  FUN_1448d1550(lVar10,local_1e0,param_1,uVar9);
  plVar16 = (longlong *)param_1[0xcb];
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) goto LAB_1401d46f5;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1401d46f5:
    FUN_1456cec3c(plVar16);
  }
  uVar11 = (**(code **)(*plVar16 + 0x388))(plVar16);
  bVar8 = FUN_1401d385e(uVar11,uVar9);
  uVar20 = *param_2;
  local_2a0 = uVar20 & 0xfffffffffffeefff;
  (**(code **)(*param_1 + 0x7a8))(param_1,&local_268);
  dVar4 = local_218 * local_1f0 - local_1f8 * local_210;
  dVar2 = local_238 * local_1f0 - local_1f8 * local_230;
  dVar22 = local_1f0 * local_258 - local_1f8 * local_250;
  dVar5 = local_238 * local_210 - local_218 * local_230;
  dVar21 = local_210 * local_258 - local_218 * local_250;
  dVar3 = local_258 * local_230 - local_238 * local_250;
  local_2a8 = (ulonglong)
              ((byte)(uVar20 >> 0x10) & 1 |
              ((local_200 * dVar3 + (dVar2 * local_260 - dVar22 * local_240)) * local_228 +
              ((local_200 * dVar5 + (local_240 * dVar4 - dVar2 * local_220)) *
               (double)CONCAT71(uStack_267,local_268) -
              (local_200 * dVar21 + (dVar4 * local_260 - dVar22 * local_220)) * local_248)) -
              (dVar3 * local_220 + (dVar5 * local_260 - dVar21 * local_240)) * local_208 < 0.0) *
              0x10000;
  puVar17 = local_100;
  if (local_100 == (undefined1 *)0x0) {
    puVar17 = local_1e0;
  }
  if ((longlong)local_f8 != 0) {
    uVar20 = (ulonglong)(bVar8 & (byte)((uint)uVar20 >> 0xc) & 1) * 0x1000 + local_2a0 + local_2a8;
    local_278 = (longlong)local_f8 * 0x38;
    local_280 = puVar17 + 8;
    local_288 = uVar20 & 0xffff9fffffffffff;
    lVar10 = 0;
    local_2b0 = puVar17;
    local_298 = param_3;
    do {
      lVar14 = local_298;
      lVar12 = (**(code **)(*param_1 + 0x610))(param_1,(int)*(short *)(local_2b0 + lVar10));
      if (lVar12 == 0) {
        FUN_14003fbd6();
        lVar12 = DAT_14caea080;
      }
      iVar1 = *(int *)(lVar14 + 0x128);
      *(uint *)(lVar14 + 0x128) = iVar1 + 1U;
      if (*(uint *)(lVar14 + 300) < iVar1 + 1U) {
        FUN_1401acddc(lVar14,iVar1);
      }
      lVar13 = *(longlong *)(lVar14 + 0x120);
      if (*(longlong *)(lVar14 + 0x120) == 0) {
        lVar13 = lVar14;
      }
      lVar6 = (longlong)iVar1 * 0x48;
      FUN_1447244c4(lVar13 + lVar6,1);
      lVar13 = *(longlong *)(lVar14 + 0x120);
      if (*(longlong *)(lVar14 + 0x120) == 0) {
        lVar13 = lVar14;
      }
      lVar14 = lVar13 + lVar6;
      puVar17 = (undefined1 *)(lVar13 + lVar6 + 0x18);
      *(longlong *)(lVar13 + lVar6 + 8) = lVar12;
      local_290 = local_280 + lVar10;
      if (local_290 != puVar17) {
        puVar19 = *(undefined1 **)(local_2b0 + lVar10 + 0x28);
        if (*(undefined1 **)(local_2b0 + lVar10 + 0x28) == (undefined1 *)0x0) {
          puVar19 = local_290;
        }
        iVar1 = *(int *)(local_2b0 + lVar10 + 0x30);
        *(int *)(lVar14 + 0x40) = iVar1;
        if (iVar1 == 0 && *(int *)(lVar14 + 0x44) == 0) {
          *(undefined4 *)(lVar14 + 0x44) = 2;
        }
        else {
          FUN_1447376de(puVar17,iVar1);
          if (iVar1 != 0) {
            if (*(undefined1 **)(lVar14 + 0x38) != (undefined1 *)0x0) {
              puVar17 = *(undefined1 **)(lVar14 + 0x38);
            }
            memcpy(puVar17,puVar19,(longlong)iVar1 << 4);
          }
        }
      }
      *(ulonglong *)(lVar14 + 0x10) = uVar20;
      local_268 = 0;
      local_269 = 0;
      local_2c8 = &local_269;
      FUN_1448d0e40(param_1,lVar12,lVar14,&local_268);
      lVar12 = (**(code **)(*param_1 + 0x648))(param_1);
      lVar14 = local_298;
      if (lVar12 != 0) {
        iVar1 = *(int *)(local_298 + 0x128);
        *(uint *)(local_298 + 0x128) = iVar1 + 1U;
        if (*(uint *)(local_298 + 300) < iVar1 + 1U) {
          FUN_1401acddc(local_298,iVar1);
        }
        lVar13 = *(longlong *)(lVar14 + 0x120);
        if (*(longlong *)(lVar14 + 0x120) == 0) {
          lVar13 = lVar14;
        }
        lVar6 = (longlong)iVar1 * 0x48;
        FUN_1447244c4(lVar13 + lVar6,1);
        lVar13 = *(longlong *)(lVar14 + 0x120);
        if (*(longlong *)(lVar14 + 0x120) == 0) {
          lVar13 = lVar14;
        }
        lVar14 = lVar13 + lVar6;
        puVar17 = (undefined1 *)(lVar13 + lVar6 + 0x18);
        *(longlong *)(lVar13 + lVar6 + 8) = lVar12;
        if (local_290 != puVar17) {
          puVar19 = *(undefined1 **)(local_2b0 + lVar10 + 0x28);
          if (*(undefined1 **)(local_2b0 + lVar10 + 0x28) == (undefined1 *)0x0) {
            puVar19 = local_290;
          }
          iVar1 = *(int *)(local_2b0 + lVar10 + 0x30);
          *(int *)(lVar14 + 0x40) = iVar1;
          if (iVar1 == 0 && *(int *)(lVar14 + 0x44) == 0) {
            *(undefined4 *)(lVar14 + 0x44) = 2;
          }
          else {
            FUN_1447376de(puVar17,iVar1);
            if (iVar1 != 0) {
              if (*(undefined1 **)(lVar14 + 0x38) != (undefined1 *)0x0) {
                puVar17 = *(undefined1 **)(lVar14 + 0x38);
              }
              memcpy(puVar17,puVar19,(longlong)iVar1 << 4);
            }
          }
        }
        *(ulonglong *)(lVar14 + 0x10) =
             (ulonglong)local_269 << 0x2e | ((ulonglong)local_268 << 0x2d) + local_288;
      }
      lVar12 = (**(code **)(*param_1 + 0x658))(param_1);
      lVar14 = local_298;
      if ((lVar12 != 0) && (local_269 == 0)) {
        iVar1 = *(int *)(local_298 + 0x128);
        *(uint *)(local_298 + 0x128) = iVar1 + 1U;
        if (*(uint *)(local_298 + 300) < iVar1 + 1U) {
          FUN_1401acddc(local_298,iVar1);
        }
        lVar13 = *(longlong *)(lVar14 + 0x120);
        if (*(longlong *)(lVar14 + 0x120) == 0) {
          lVar13 = lVar14;
        }
        lVar6 = (longlong)iVar1 * 0x48;
        FUN_1447244c4(lVar13 + lVar6,1);
        lVar13 = *(longlong *)(lVar14 + 0x120);
        if (*(longlong *)(lVar14 + 0x120) == 0) {
          lVar13 = lVar14;
        }
        lVar14 = lVar13 + lVar6;
        puVar17 = (undefined1 *)(lVar13 + lVar6 + 0x18);
        *(longlong *)(lVar13 + lVar6 + 8) = lVar12;
        if (local_290 != puVar17) {
          puVar19 = local_290;
          if (*(undefined1 **)(local_2b0 + lVar10 + 0x28) != (undefined1 *)0x0) {
            puVar19 = *(undefined1 **)(local_2b0 + lVar10 + 0x28);
          }
          iVar1 = *(int *)(local_2b0 + lVar10 + 0x30);
          *(int *)(lVar14 + 0x40) = iVar1;
          if (iVar1 == 0 && *(int *)(lVar14 + 0x44) == 0) {
            *(undefined4 *)(lVar14 + 0x44) = 2;
          }
          else {
            FUN_1447376de(puVar17,iVar1);
            if (iVar1 != 0) {
              if (*(undefined1 **)(lVar14 + 0x38) != (undefined1 *)0x0) {
                puVar17 = *(undefined1 **)(lVar14 + 0x38);
              }
              memcpy(puVar17,puVar19,(longlong)iVar1 << 4);
            }
          }
        }
        *(ulonglong *)(lVar14 + 0x10) = local_2a8 | local_2a0;
      }
      lVar10 = lVar10 + 0x38;
      param_3 = local_298;
    } while (local_278 != lVar10);
  }
  lVar10 = param_1[0xc6];
  if (lVar10 == 0) {
    if (*(code **)(*param_1 + 0xa68) != (code *)&LAB_14470a070) {
      lVar10 = (**(code **)(*param_1 + 0xa68))(param_1);
      goto LAB_1401d4490;
    }
  }
  else {
LAB_1401d4490:
    if (local_f8 != 0 && lVar10 != 0) {
      iVar1 = *(int *)(param_3 + 0x128);
      *(uint *)(param_3 + 0x128) = iVar1 + 1U;
      if (*(uint *)(param_3 + 300) < iVar1 + 1U) {
        FUN_1401acddc(param_3,iVar1);
      }
      lVar14 = *(longlong *)(param_3 + 0x120);
      if (*(longlong *)(param_3 + 0x120) == 0) {
        lVar14 = param_3;
      }
      lVar12 = (longlong)iVar1 * 0x48;
      FUN_1447244c4(lVar14 + lVar12,1);
      lVar14 = *(longlong *)(param_3 + 0x120);
      if (*(longlong *)(param_3 + 0x120) == 0) {
        lVar14 = param_3;
      }
      lVar13 = lVar14 + lVar12;
      puVar17 = (undefined1 *)(lVar12 + lVar14 + 0x18);
      *(longlong *)(lVar12 + lVar14 + 8) = lVar10;
      puVar19 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar19 = local_1e0;
      }
      if (puVar17 != puVar19 + 8) {
        puVar15 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar15 = local_1e0;
        }
        puVar19 = puVar19 + 8;
        if (*(undefined1 **)(puVar15 + 0x28) != (undefined1 *)0x0) {
          puVar19 = *(undefined1 **)(puVar15 + 0x28);
        }
        iVar1 = *(int *)(puVar15 + 0x30);
        *(int *)(lVar13 + 0x40) = iVar1;
        if (iVar1 == 0 && *(int *)(lVar13 + 0x44) == 0) {
          *(undefined4 *)(lVar13 + 0x44) = 2;
        }
        else {
          FUN_1447376de(puVar17,iVar1);
          if (iVar1 != 0) {
            if (*(undefined1 **)(lVar13 + 0x38) != (undefined1 *)0x0) {
              puVar17 = *(undefined1 **)(lVar13 + 0x38);
            }
            memcpy(puVar17,puVar19,(longlong)iVar1 << 4);
          }
        }
      }
      *(ulonglong *)(lVar13 + 0x10) = local_2a8 | local_2a0;
    }
  }
  puVar17 = local_1e0;
  if (local_100 != (undefined1 *)0x0) {
    puVar17 = local_100;
  }
  FUN_14472bf49(puVar17,local_f8);
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1401d42f1:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d47e8 FUN_1401d47e8 body=458 status=ok
// SIG undefined FUN_1401d47e8(void)

undefined8 * FUN_1401d47e8(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  memset(param_1 + 5,0,0xe9);
  *(undefined4 *)((longlong)param_1 + 0x284) = 2;
  puVar5 = param_1 + 0x24;
  memset(param_1 + 0x53,0,0xf0);
  if (*(char *)(*param_2 + 0x23e9) == '\x01') {
    FUN_1401d49b2(puVar5,1);
    FUN_1401d4a64(puVar5);
    *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  }
  else if (*(int *)(*param_2 + 0x1dd0) == 0) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar6 = 2;
    if ((int)uVar1 < 2) {
      uVar6 = uVar1;
    }
    FUN_1401d49b2(puVar5);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        FUN_1401d4a64(puVar5);
        lVar9 = lVar9 + 0x13c10;
        puVar5 = puVar5 + 0x16;
      } while ((ulonglong)uVar6 * 0x13c10 - lVar9 != 0);
    }
  }
  else {
    FUN_1401d49b2(puVar5,1);
    FUN_1401d4a64(puVar5);
  }
  param_1[0x52] = 0;
  lVar9 = param_2[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar3 = *param_2;
    lVar4 = 0;
    iVar7 = 0;
    iVar8 = 0;
    do {
      iVar2 = *(int *)(lVar3 + 0x3100 + lVar4);
      if (iVar8 < iVar2) {
        iVar8 = iVar2;
      }
      *(int *)(param_1 + 0x52) = iVar8;
      iVar2 = *(int *)(lVar3 + 0x3104 + lVar4);
      if (iVar7 < iVar2) {
        iVar7 = iVar2;
      }
      *(int *)((longlong)param_1 + 0x294) = iVar7;
      lVar4 = lVar4 + 0x13c10;
    } while ((longlong)(int)lVar9 * 0x13c10 - lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 1401d49b2 FUN_1401d49b2 body=177 status=ok
// SIG undefined FUN_1401d49b2(void)

void FUN_1401d49b2(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x160) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x164) - iVar1) < uVar3) {
      FUN_14721d484(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined8 *)(param_1 + (longlong)iVar1 * 0xb0 + 0x30);
      do {
        puVar2[-2] = 0;
        puVar2[-1] = 0x3f80000000000000;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2 = puVar2 + 0x16;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x160) = param_2, param_3 == '\x01')) {
      FUN_14721d4aa(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1401d4a64 FUN_1401d4a64 body=901 status=ok
// SIG undefined FUN_1401d4a64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401d4a64(undefined8 *param_1,longlong param_2)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = *(undefined8 *)(param_2 + 8);
  iVar16 = FUN_1401d4f3c(param_2);
  FUN_1401d4fca(&local_d8,param_2,iVar16 + -1);
  param_1[3] = local_c8;
  param_1[1] = local_d8;
  param_1[2] = uStack_d0;
  dVar1 = *(double *)(param_2 + 0x1058);
  dVar2 = *(double *)(param_2 + 0x1050);
  *(float *)(param_1 + 4) = (float)*(double *)(param_2 + 0x1048);
  *(float *)((longlong)param_1 + 0x24) = (float)dVar2;
  *(float *)(param_1 + 5) = (float)dVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  dVar1 = *(double *)(param_2 + 0x1030);
  dVar2 = *(double *)(param_2 + 0x1038);
  fVar18 = (float)dVar1;
  fVar19 = (float)dVar2;
  dVar3 = *(double *)(param_2 + 0x1040);
  fVar20 = (float)dVar3;
  *(float *)(param_1 + 6) = fVar18;
  *(float *)((longlong)param_1 + 0x34) = fVar19;
  *(float *)(param_1 + 7) = fVar20;
  *(float *)((longlong)param_1 + 0x3c) = (float)(dVar1 - (double)fVar18);
  *(float *)(param_1 + 8) = (float)(dVar2 - (double)fVar19);
  *(float *)((longlong)param_1 + 0x44) = (float)(dVar3 - (double)fVar20);
  dVar1 = *(double *)(param_2 + 0xe38);
  dVar2 = *(double *)(param_2 + 0xe40);
  dVar3 = *(double *)(param_2 + 0xe48);
  dVar4 = *(double *)(param_2 + 0xe50);
  dVar5 = *(double *)(param_2 + 0xe58);
  dVar6 = *(double *)(param_2 + 0xe60);
  dVar7 = *(double *)(param_2 + 0xe68);
  dVar8 = *(double *)(param_2 + 0xe70);
  dVar9 = *(double *)(param_2 + 0xe78);
  dVar10 = *(double *)(param_2 + 0xe80);
  dVar11 = *(double *)(param_2 + 0xe88);
  dVar12 = *(double *)(param_2 + 0xe90);
  dVar13 = *(double *)(param_2 + 0xe98);
  dVar14 = *(double *)(param_2 + 0xea0);
  dVar15 = *(double *)(param_2 + 0xea8);
  *(float *)(param_1 + 10) = (float)*(double *)(param_2 + 0xe30);
  *(float *)((longlong)param_1 + 0x54) = (float)dVar1;
  *(float *)(param_1 + 0xb) = (float)dVar2;
  *(float *)((longlong)param_1 + 0x5c) = (float)dVar3;
  *(float *)(param_1 + 0xc) = (float)dVar4;
  *(float *)((longlong)param_1 + 100) = (float)dVar5;
  *(float *)(param_1 + 0xd) = (float)dVar6;
  *(float *)((longlong)param_1 + 0x6c) = (float)dVar7;
  *(float *)(param_1 + 0xe) = (float)dVar8;
  *(float *)((longlong)param_1 + 0x74) = (float)dVar9;
  *(float *)(param_1 + 0xf) = (float)dVar10;
  *(float *)((longlong)param_1 + 0x7c) = (float)dVar11;
  *(float *)(param_1 + 0x10) = (float)dVar12;
  *(float *)((longlong)param_1 + 0x84) = (float)dVar13;
  *(float *)(param_1 + 0x11) = (float)dVar14;
  *(float *)((longlong)param_1 + 0x8c) = (float)dVar15;
  fVar19 = DAT_14c84635c._4_4_;
  fVar18 = (float)DAT_14c84635c;
  if (1.0 < *(double *)(param_2 + 0x8a8) || *(double *)(param_2 + 0x8a8) == 1.0) {
    fVar19 = (float)*(double *)(param_2 + 0x958) + (float)*(double *)(param_2 + 0x958);
    fVar18 = (float)*(double *)(param_2 + 0x930) + (float)*(double *)(param_2 + 0x930);
  }
  if (fVar18 <= fVar19) {
    fVar18 = fVar19;
  }
  *(float *)(param_1 + 0x12) = fVar18;
  if (*(longlong **)(param_2 + 0x30d8) == (longlong *)0x0) {
    uVar17 = 0;
  }
  else {
    uVar17 = (**(code **)(**(longlong **)(param_2 + 0x30d8) + 0x88))();
  }
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar17;
  fVar18 = *(float *)(param_2 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= fVar18) {
    fVar18 = 1048576.0;
  }
  if (fVar18 <= 0.01) {
    fVar18 = 0.01;
  }
  *(float *)(param_1 + 0x13) = fVar18;
  uVar17 = FUN_1401d4dea(param_2);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar17;
  fVar18 = *(float *)(param_2 + 0x2904);
  if (8.0 <= fVar18) {
    fVar18 = 8.0;
  }
  if (fVar18 <= 0.125) {
    fVar18 = 0.125;
  }
  *(float *)(param_1 + 0x14) = fVar18;
  param_1[0x15] = param_2;
  if ((local_c0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d4dea FUN_1401d4dea body=338 status=ok
// SIG undefined FUN_1401d4dea(void)

float FUN_1401d4dea(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  
  iVar5 = FUN_1401d4f3c();
  fVar1 = DAT_14c760670;
  fVar9 = (float)exp2f((float)(iVar5 + -1));
  lVar8 = *(longlong *)(param_1 + 8);
  piVar6 = &DAT_14c760db4;
  if (*(longlong *)(lVar8 + 0x40) != 0) {
    piVar6 = (int *)(*(longlong *)(lVar8 + 0x40) + 8);
  }
  fVar9 = fVar9 * fVar1;
  cVar3 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar6 * 2));
  lVar2 = DAT_14c9ed2f0;
  if ((cVar3 != '\0') &&
     ((DAT_14ca84efa != '\0' || ((DAT_14ca84ef5 == '\x01' && ((DAT_14ca84ef7 & 1) != 0)))))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(int *)(lVar2 + uVar7 * 4) != 0) {
      if (*(int *)(lVar8 + 0x10) == 2) {
        lVar8 = **(longlong **)(lVar8 + 8);
        if (*(int *)(lVar8 + 0x1dd0) == 0) goto LAB_1401d4e52;
      }
      else {
        if (*(int *)(lVar8 + 0x10) != 1) goto LAB_1401d4e52;
        lVar8 = **(longlong **)(lVar8 + 8);
      }
      if ((*(char *)(lVar8 + 0x3098) == '\x01') &&
         (((*(char *)(lVar8 + 0x23e8) != '\x01' || (*(char *)(lVar8 + 0x23ea) == '\x01')) &&
          (cVar3 = FUN_1472b564a(*(longlong *)(param_1 + 8) + 0x48), cVar3 != '\0')))) {
        fVar9 = (float)FUN_1472b566d();
      }
    }
  }
LAB_1401d4e52:
  return fVar9 + *(float *)(DAT_14c9fa858 + 4);
}



// FUNCTION 1401d4f3c FUN_1401d4f3c body=142 status=ok
// SIG undefined FUN_1401d4f3c(void)

int FUN_1401d4f3c(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_14c760670;
  iVar4 = DAT_14c760288;
  fVar1 = *(float *)(param_1 + 0x2908);
  iVar3 = DAT_14c760288 + 1;
  fVar5 = (float)exp2f((float)iVar3);
  fVar2 = DAT_14c760670;
  if (fVar5 * fVar6 <= fVar1) {
    iVar4 = iVar4 + 2;
  }
  else {
    fVar6 = (float)exp2f((float)iVar4);
    if (fVar6 * fVar2 <= fVar1) {
      iVar4 = iVar3;
    }
  }
  iVar4 = (iVar4 + 1) - (uint)(DAT_14c9cbec8 == 0);
  iVar3 = 6;
  if (iVar4 < 6) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  return iVar4;
}



// FUNCTION 1401d4fca FUN_1401d4fca body=431 status=ok
// SIG undefined FUN_1401d4fca(void)

double * FUN_1401d4fca(double *param_1,longlong param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  param_1[2] = *(double *)(param_2 + 0x1058);
  dVar1 = *(double *)(param_2 + 0x1050);
  *param_1 = *(double *)(param_2 + 0x1048);
  param_1[1] = dVar1;
  fVar9 = DAT_14c760670;
  lVar6 = *(longlong *)(param_2 + 0x3108);
  if (lVar6 != 0) {
    lVar4 = *(longlong *)(lVar6 + 0x1e18);
    dVar1 = *(double *)(lVar4 + 0x300);
    dVar2 = *(double *)(lVar4 + 0x308);
    dVar3 = *(double *)(lVar4 + 0x310);
    if (0 < param_3) {
      fVar7 = (float)exp2f((float)param_3);
      fVar8 = fVar7 * fVar9 * 0.75;
      fVar7 = fVar7 * fVar9 * -0.75;
      fVar9 = (float)dVar1;
      if (fVar8 <= (float)dVar1) {
        fVar9 = fVar8;
      }
      if (fVar9 <= fVar7) {
        fVar9 = fVar7;
      }
      dVar1 = (double)fVar9;
      fVar9 = (float)dVar2;
      if (fVar8 <= (float)dVar2) {
        fVar9 = fVar8;
      }
      if (fVar9 <= fVar7) {
        fVar9 = fVar7;
      }
      dVar2 = (double)fVar9;
      fVar9 = (float)dVar3;
      if (fVar8 <= (float)dVar3) {
        fVar9 = fVar8;
      }
      if (fVar9 <= fVar7) {
        fVar9 = fVar7;
      }
      dVar3 = (double)fVar9;
      lVar6 = *(longlong *)(param_2 + 0x3108);
    }
    *param_1 = dVar1 + *param_1;
    param_1[1] = dVar2 + param_1[1];
    param_1[2] = dVar3 + param_1[2];
    if (lVar6 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x1e18);
      if (*(int *)(DAT_14c9f5cd0 + 4) == 0) {
        if (*(char *)(lVar6 + 0x318) == '\x01') {
          *(undefined8 *)(lVar6 + 0x330) = *(undefined8 *)(param_2 + 0x1058);
          uVar5 = *(undefined8 *)(param_2 + 0x1050);
          *(undefined8 *)(lVar6 + 800) = *(undefined8 *)(param_2 + 0x1048);
          *(undefined8 *)(lVar6 + 0x328) = uVar5;
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x3108) + 0x1e18) + 0x318) = 0;
        }
      }
      else {
        *(undefined1 *)(lVar6 + 0x318) = 1;
      }
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x3108) + 0x1e18);
      if (*(char *)(lVar6 + 0x318) == '\0') {
        param_1[2] = *(double *)(lVar6 + 0x330);
        dVar1 = *(double *)(lVar6 + 0x328);
        *param_1 = *(double *)(lVar6 + 800);
        param_1[1] = dVar1;
      }
    }
  }
  return param_1;
}



// FUNCTION 1401d517a FUN_1401d517a body=67 status=ok
// SIG undefined FUN_1401d517a(void)

void FUN_1401d517a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_1 + 0x1b0);
  if (0 < *(int *)(lVar1 + 0x528)) {
    lVar2 = 0;
    do {
      FUN_1401d51be(*(undefined8 *)(*(longlong *)(lVar1 + 0x520) + lVar2 * 8),0);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(lVar1 + 0x528));
  }
  return;
}



// FUNCTION 1401d51be FUN_1401d51be body=183 status=ok
// SIG undefined FUN_1401d51be(void)

void FUN_1401d51be(longlong param_1,char param_2)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  HWND pHVar3;
  
  if (*(char *)(param_1 + 0x2b) == '\0') {
    if (*(char *)(param_1 + 0x2a) == '\x01') {
      FUN_14080c2b4();
      *(undefined1 *)(param_1 + 0x2a) = 0;
      FUN_14317e0b4(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),0,
                    *(undefined1 *)(param_1 + 0x28));
    }
    else {
      pHVar3 = GetFocus();
      hWnd = *(HWND *)(param_1 + 0x18);
      BVar1 = IsIconic(hWnd);
      if ((param_2 != '\0') || ((pHVar3 == hWnd && (BVar1 == 0)))) {
        FUN_14080c2b4();
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                          (*(longlong **)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x29),0);
        if (iVar2 < 0) {
          if ((iVar2 != -0x7785ffde) && (*(char *)(param_1 + 0x29) == '\x01')) {
            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                              (*(longlong **)(param_1 + 0x30),0,0);
            if (-1 < iVar2) {
              *(undefined1 *)(param_1 + 0x2b) = 1;
              *(undefined1 *)(param_1 + 0x29) = 0;
            }
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x2b) = 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 1401d5276 FUN_1401d5276 body=38 status=ok
// SIG undefined FUN_1401d5276(void)

undefined8 FUN_1401d5276(undefined8 param_1,int param_2)

{
  FUN_1401d529c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401d529c FUN_1401d529c body=115 status=ok
// SIG undefined FUN_1401d529c(void)

void FUN_1401d529c(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a38cf40;
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
  return;
}



// FUNCTION 1401d5310 FUN_1401d5310 body=83 status=ok
// SIG undefined FUN_1401d5310(void)

void FUN_1401d5310(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if ((longlong)(int)param_2[1] != 0) {
    puVar3 = (undefined8 *)*param_2;
    puVar1 = puVar3 + (longlong)(int)param_2[1] * 3;
    do {
      cVar2 = FUN_1448d4484(param_1 + 0x58,*puVar3,puVar3 + 1);
      if (cVar2 != '\0') {
        *(undefined2 *)(param_1 + 0x30) = 0x101;
      }
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar1);
  }
  return;
}



// FUNCTION 1401d5364 FUN_1401d5364 body=269 status=ok
// SIG undefined FUN_1401d5364(void)

void FUN_1401d5364(longlong param_1,int param_2)

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



// FUNCTION 1401d5472 FUN_1401d5472 body=672 status=ok
// SIG undefined FUN_1401d5472(void)

longlong * FUN_1401d5472(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  local_4c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_4c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
    }
    else {
      FUN_14572512c(param_1,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_4c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1401d5770(param_2,0);
    }
  }
  else if ((((int)local_4c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xccccc < local_4c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_4c;
    lVar10 = 0;
    lVar12 = 0;
    do {
      FUN_144aa0c38(param_1,*param_2 + lVar10);
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 0x14;
    } while (lVar12 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_4c) ||
       (FUN_1401d5770(param_2), 0 < (int)local_4c)) {
      iVar9 = 0;
      do {
        puVar7 = (undefined4 *)FUN_1401d5714(param_2);
        pcVar11 = *(code **)(*param_1 + 0x170);
        if (pcVar11 == FUN_14473a572) {
          plVar8 = (longlong *)param_1[0x12];
          pcVar11 = *(code **)(*plVar8 + 0x170);
          if (pcVar11 == FUN_14004e24c) {
            FUN_14004e24c(plVar8,puVar7,0x14);
          }
          else if (pcVar11 == FUN_1447395b8) {
            lVar10 = plVar8[0x12];
            lVar12 = plVar8[0x13];
            puVar7[4] = *(undefined4 *)(lVar10 + 0x10 + lVar12);
            puVar3 = (undefined4 *)(lVar10 + lVar12);
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[3];
            *puVar7 = *puVar3;
            puVar7[1] = uVar4;
            puVar7[2] = uVar5;
            puVar7[3] = uVar6;
            plVar8[0x13] = plVar8[0x13] + 0x14;
          }
          else {
            if (pcVar11 != FUN_144a6950e) goto LAB_1401d5660;
            if ((*(byte *)((longlong)plVar8 + 0x29) & 2) == 0) {
              puVar3 = *(undefined4 **)plVar8[1];
              puVar7[4] = puVar3[4];
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              *puVar7 = *puVar3;
              puVar7[1] = uVar4;
              puVar7[2] = uVar5;
              puVar7[3] = uVar6;
              plVar8 = (longlong *)plVar8[1];
              goto LAB_1401d5651;
            }
          }
        }
        else if (pcVar11 == FUN_140090aac) {
          FUN_140090aac(param_1,puVar7,0x14);
        }
        else {
          plVar8 = param_1;
          if (pcVar11 == FUN_144a6950e) {
            if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
              puVar3 = *(undefined4 **)param_1[1];
              puVar7[4] = puVar3[4];
              uVar4 = puVar3[1];
              uVar5 = puVar3[2];
              uVar6 = puVar3[3];
              *puVar7 = *puVar3;
              puVar7[1] = uVar4;
              puVar7[2] = uVar5;
              puVar7[3] = uVar6;
              plVar8 = (longlong *)param_1[1];
LAB_1401d5651:
              *plVar8 = *plVar8 + 0x14;
            }
          }
          else {
LAB_1401d5660:
            (*pcVar11)(plVar8,puVar7,0x14);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_4c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1401d5714 FUN_1401d5714 body=70 status=ok
// SIG undefined FUN_1401d5714(void)

longlong FUN_1401d5714(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14170552e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_1401d575a(lVar2,1);
  return lVar2;
}



// FUNCTION 1401d575a FUN_1401d575a body=22 status=ok
// SIG undefined FUN_1401d575a(void)

void FUN_1401d575a(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x14);
    return;
  }
  return;
}



// FUNCTION 1401d5770 FUN_1401d5770 body=332 status=ok
// SIG undefined FUN_1401d5770(void)

void FUN_1401d5770(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x14;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401d57de;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1401d57de:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x14)) {
      uVar5 = uVar3 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x14,4);
  }
  return;
}



// FUNCTION 1401d58bc FUN_1401d58bc body=421 status=ok
// SIG undefined FUN_1401d58bc(void)

longlong * FUN_1401d58bc(longlong *param_1,longlong *param_2)

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
      FUN_1456dae70(param_2,0);
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
      FUN_1401d5a6a(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1456dae70(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14743bec8(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 8 + *param_2;
        FUN_1401d5a62(lVar4);
        FUN_1401d5a6a(param_1,lVar4);
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



// FUNCTION 1401d5a62 FUN_1401d5a62 body=8 status=ok
// SIG undefined FUN_1401d5a62(void)

void FUN_1401d5a62(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1401d5a6a FUN_1401d5a6a body=168 status=ok
// SIG undefined FUN_1401d5a6a(void)

longlong * FUN_1401d5a6a(longlong *param_1,undefined4 *param_2)

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



// FUNCTION 1401d5b12 FUN_1401d5b12 body=421 status=ok
// SIG undefined FUN_1401d5b12(void)

longlong * FUN_1401d5b12(longlong *param_1,longlong *param_2)

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
      FUN_1456daed0(param_2,0);
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
      FUN_1401d5cc0(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1456daed0(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14743bf4e(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 8 + *param_2;
        FUN_1401d5cb8(lVar4);
        FUN_1401d5cc0(param_1,lVar4);
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



// FUNCTION 1401d5cb8 FUN_1401d5cb8 body=8 status=ok
// SIG undefined FUN_1401d5cb8(void)

void FUN_1401d5cb8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1401d5cc0 FUN_1401d5cc0 body=84 status=ok
// SIG undefined FUN_1401d5cc0(void)

longlong * FUN_1401d5cc0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      FUN_146821949(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1401d5d14 FUN_1401d5d14 body=421 status=ok
// SIG undefined FUN_1401d5d14(void)

longlong * FUN_1401d5d14(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
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
      FUN_1456daf30(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1401d5ec1(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1456daf30(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14743964a(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0x10 + *param_2;
        FUN_1401d5eba(lVar4);
        FUN_1401d5ec1(param_1,lVar4);
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



// FUNCTION 1401d5eba FUN_1401d5eba body=7 status=ok
// SIG undefined FUN_1401d5eba(void)

void FUN_1401d5eba(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1401d5ec1 FUN_1401d5ec1 body=345 status=ok
// SIG undefined FUN_1401d5ec1(void)

longlong * FUN_1401d5ec1(longlong *param_1,undefined4 *param_2)

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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
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



// FUNCTION 1401d601a FUN_1401d601a body=442 status=ok
// SIG undefined FUN_1401d601a(void)

longlong * FUN_1401d601a(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
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
      FUN_141249aa2(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x170))(param_1,*param_2 + lVar4,0xc);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_141249aa2(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_147439756(param_2,iVar2);
        }
        (**(code **)(*param_1 + 0x170))(param_1,(longlong)iVar2 * 0xc + *param_2,0xc);
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



// FUNCTION 1401d61d6 FUN_1401d61d6 body=251 status=ok
// SIG undefined FUN_1401d61d6(void)

longlong * FUN_1401d61d6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1f0) != 0)) {
    lVar1 = FUN_1401d62d2();
    if (lVar1 != 0) {
      *param_1 = *(longlong *)(lVar1 + 0x30);
      puVar2 = *(undefined8 **)(lVar1 + 0x38);
      goto LAB_1401d6206;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd58c0) {
    FUN_144b3d300(&DAT_14cbd58c0);
    if (DAT_14cbd58c0 == -1) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar2[1] = &DAT_100000001;
      *puVar2 = &PTR_FUN_14b9a6800;
      lVar1 = FUN_1461138ae();
      puVar2[2] = lVar1 + 0x10;
      puVar2[3] = lVar1;
      DAT_14cbd58b0 = puVar2 + 2;
      DAT_14cbd58b8 = puVar2;
      atexit(FUN_1442469fe);
      _Init_thread_footer(&DAT_14cbd58c0);
    }
  }
  *param_1 = (longlong)DAT_14cbd58b0;
  puVar2 = DAT_14cbd58b8;
LAB_1401d6206:
  param_1[1] = (longlong)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1401d62d2 FUN_1401d62d2 body=105 status=ok
// SIG undefined FUN_1401d62d2(void)

void FUN_1401d62d2(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1401d6388();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1401d633c(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d633c FUN_1401d633c body=76 status=ok
// SIG undefined FUN_1401d633c(void)

void FUN_1401d633c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1401d6388();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1401d6379;
    }
  }
  lVar2 = 0;
LAB_1401d6379:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1401d6388 FUN_1401d6388 body=228 status=ok
// SIG undefined FUN_1401d6388(void)

longlong FUN_1401d6388(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb3c08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148c60f71;
    local_40 = FUN_1465f9fbb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIGlobalBlackboardRepo",&DAT_14cbb3c08,&DAT_148c60f70);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3c08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d646e FUN_1401d646e body=234 status=ok
// SIG undefined FUN_1401d646e(void)

void FUN_1401d646e(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
    if ((*(char *)(param_1 + 0x245) == '\x01') &&
       ((*(float *)(param_1 + 0x340) != 0.0 || (NAN(*(float *)(param_1 + 0x340)))))) {
      FUN_1447210f0(*(undefined8 *)(param_1 + 0x238));
    }
  }
  else {
    cVar1 = FUN_1403ae288(param_1 + 0x308);
    if (cVar1 != '\0') {
      FUN_140280ec4(param_1 + 0x308);
    }
  }
  return;
}



// FUNCTION 1401d6558 FUN_1401d6558 body=302 status=ok
// SIG undefined FUN_1401d6558(void)

void FUN_1401d6558(longlong param_1)

{
  longlong lVar1;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1449ce79a(lVar1);
    }
  }
  FUN_144287890(param_1);
  FUN_1410bb0cc(param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1412ca5c6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d669e FUN_1401d669e body=78 status=ok
// SIG undefined FUN_1401d669e(void)

void FUN_1401d669e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1401d66ec(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1401d66ec(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401d66e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 1401d66ec FUN_1401d66ec body=90 status=ok
// SIG undefined FUN_1401d66ec(void)

undefined1 FUN_1401d66ec(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = 1;
  UNLOCK();
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    return uVar1;
  }
  if (DAT_14c75f288 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = 0x10;
  }
  else {
    uVar3 = 0;
    FUN_1429ca048(param_1,*(undefined8 *)(param_1 + 0x10),0);
    lVar2 = 0x18;
  }
  uVar1 = FUN_1429ca048(param_1,*(undefined8 *)(param_1 + lVar2),uVar3);
  return uVar1;
}



// FUNCTION 1401d674c FUN_1401d674c body=1300 status=ok
// SIG undefined FUN_1401d674c(void)

void FUN_1401d674c(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 *local_140;
  code **local_138;
  longlong local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  ulonglong local_f8;
  undefined4 local_ec;
  code **local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = (wchar_t *)param_1[9];
  local_130 = param_1[1];
  local_140 = (undefined8 *)param_1[8];
  uVar1 = *(ushort *)param_1[7];
  local_88 = (code *)*local_140;
  uStack_80 = local_140[1];
  local_78._0_3_ = (uint3)(ushort)((uVar1 & 0x1c) + (uVar1 & 0x20) * 2);
  local_148 = CONCAT22(local_148._2_2_,uVar1);
  local_138 = &local_88;
  FUN_140a0aac7(param_1[5],param_1[6],param_1[2],*param_1);
  lVar2 = *param_1;
  if (0 < *(int *)(lVar2 + 0x1c50)) {
    lVar7 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x1c48) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x1c48);
    }
    uVar4 = FUN_1402d488d(*(int *)(lVar2 + 0x1c50),lVar7,param_1[8],param_1[0xb]);
    *(undefined1 *)param_1[10] = uVar4;
    plVar8 = (longlong *)param_1[0xb];
    if (((int)plVar8[1] != 0) &&
       (puVar3 = (undefined8 *)param_1[4], *(char *)((longlong)puVar3 + 0x17) == '\x01')) {
      lVar2 = param_1[6];
      lVar7 = param_1[0xd];
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      if (0 < (int)plVar8[1]) {
        lVar12 = 0x24;
        lVar13 = 0;
        local_ec = *(undefined4 *)param_1[3];
        local_e8 = (code **)param_1[0xc];
        local_e0 = (undefined8 *)param_1[2];
        do {
          local_d8 = 0;
          uStack_d0 = 0;
          iVar6 = *(int *)(*plVar8 + lVar12);
          if (((((iVar6 != 0) && (uVar5 = *(uint *)(*plVar8 + -4 + lVar12), -1 < (int)uVar5)) &&
               ((int)uVar5 < DAT_14c9647dc)) &&
              ((plVar8 = (longlong *)
                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar6)))) &&
             (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
              (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
            if (DAT_14caf6930 == 0) {
              local_88 = FUN_1463f2e14;
              local_100 = FUN_14081d0ea;
              local_108 = FUN_142b4ce0c;
              local_118 = &LAB_147c4f169;
              local_120 = &LAB_145fef46b;
              local_128 = L"Engine";
              local_130 = 0;
              local_138 = (code **)CONCAT44(local_138._4_4_,0x10000004);
              local_140 = (undefined8 *)CONCAT44(local_140._4_4_,0x10);
              local_148 = 0x870;
              local_110 = &local_88;
              FUN_14081cfa3(L"/Script/Engine",L"ClusterUnionComponent",&DAT_14caf6930,FUN_1463f2dec)
              ;
            }
            if ((*(int *)(DAT_14caf6930 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14caf6930 + 0x38) * 8) ==
                DAT_14caf6930 + 0x30)) {
              local_88 = (code *)*local_e0;
              uStack_80 = local_e0[1];
              local_78 = local_e0[2];
              uStack_70 = local_e0[3];
              local_a8 = local_e0[4];
              uStack_a0 = local_e0[5];
              local_98 = local_e0[6];
              local_128 = (wchar_t *)&local_d8;
              local_138 = local_e8;
              local_148 = local_ec;
              local_140 = puVar3;
              local_130 = lVar7;
              (**(code **)(*plVar8 + 0x9a8))(plVar8,&local_a8,&local_88,lVar2);
              uVar9 = uStack_c0;
              local_f8 = uStack_d0 & 0xffffffff;
              if (((int)uStack_d0 == 0 | *(byte *)(param_1[4] + 0x18)) == 1) {
                lVar11 = (longlong)(int)uStack_c0;
                uVar5 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar5);
                if (uStack_c0._4_4_ < uVar5) {
                  FUN_1446f48e2(&local_c8,uVar9 & 0xffffffff);
                }
                bVar14 = (int)local_f8 == 0;
                *(int *)(local_c8 + lVar11 * 4) = (int)lVar13;
                local_f8 = uStack_d0 & 0xffffffff;
                if ((int)uStack_d0 == 0 || bVar14) goto LAB_1401d6909;
              }
              uVar9 = uStack_b0;
              iVar6 = (uint)uStack_b0;
              lVar11 = (longlong)(int)(uint)uStack_b0;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 + (uint)local_f8);
              if ((uint)(uStack_b0._4_4_ - iVar6) < (uint)local_f8) {
                FUN_1414fa4c8(&local_b8,uVar9 & 0xffffffff);
              }
              FUN_144a80303(lVar11 * 0x48 + local_b8,local_d8,local_f8);
            }
          }
LAB_1401d6909:
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          lVar13 = lVar13 + 1;
          plVar8 = (longlong *)param_1[0xb];
          lVar12 = lVar12 + 0x48;
        } while (lVar13 < (int)plVar8[1]);
        if (0 < (longlong)(int)uStack_c0) {
          uVar9 = (longlong)(int)uStack_c0 + 1;
          do {
            plVar8 = (longlong *)param_1[0xb];
            uVar5 = *(uint *)(local_c8 + -8 + uVar9 * 4);
            iVar6 = (int)plVar8[1];
            iVar10 = ~uVar5 + iVar6;
            if (iVar10 != 0) {
              if (0 < iVar10) {
                iVar10 = 1;
              }
              memmove((void *)(*plVar8 + (longlong)(int)uVar5 * 0x48),
                      (void *)(*plVar8 + (longlong)(iVar6 - iVar10) * 0x48),(longlong)iVar10 * 0x48)
              ;
              iVar6 = (int)plVar8[1];
            }
            *(int *)(plVar8 + 1) = iVar6 + -1;
            uVar9 = uVar9 - 1;
          } while (1 < uVar9);
          plVar8 = (longlong *)param_1[0xb];
        }
      }
      uVar9 = uStack_b0;
      if ((*(char *)(param_1[4] + 0x18) != '\0') && ((uint)uStack_b0 != 0)) {
        iVar6 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar6 + (uint)uStack_b0;
        if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar6) < (uint)uStack_b0) {
          FUN_1414fa4c8(plVar8,iVar6);
        }
        FUN_144a80303((longlong)iVar6 * 0x48 + *plVar8,local_b8,uVar9 & 0xffffffff);
        plVar8 = (longlong *)param_1[0xb];
      }
      *(byte *)param_1[10] = *(byte *)param_1[10] & (int)plVar8[1] != 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d6c61 thunk_FUN_1401d6c66 body=5 status=ok
// SIG undefined thunk_FUN_1401d6c66(void)

undefined * thunk_FUN_1401d6c66(void)

{
  undefined1 auStack_98 [32];
  wchar_t *pwStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  longlong *plStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  longlong alStack_20 [2];
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0918) {
    FUN_144b3d300(&DAT_14c9c0918);
    if (DAT_14c9c0918 == -1) {
      FUN_1456daf90(alStack_20);
      uStack_30 = 0;
      uStack_40 = 0;
      pcStack_60 = "Unknown";
      uStack_70 = 0;
      uStack_68 = 0;
      pwStack_78 = L"FDistanceFieldAtlasParameters";
      uStack_38 = 0;
      uStack_50 = 0xc0;
      uStack_58 = 0x49;
      plStack_48 = alStack_20;
      FUN_140b49562(&DAT_14c9c0898,0,1);
      if (alStack_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f6aa);
      _Init_thread_footer(&DAT_14c9c0918);
    }
  }
  if ((uStack_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d6c66 FUN_1401d6c66 body=265 status=ok
// SIG undefined FUN_1401d6c66(void)

undefined * FUN_1401d6c66(void)

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
              0x110) < DAT_14c9c0918) {
    FUN_144b3d300(&DAT_14c9c0918);
    if (DAT_14c9c0918 == -1) {
      FUN_1456daf90(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDistanceFieldAtlasParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x49;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0898,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f6aa);
      _Init_thread_footer(&DAT_14c9c0918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d6d70 FUN_1401d6d70 body=129 status=ok
// SIG undefined FUN_1401d6d70(void)

void FUN_1401d6d70(longlong *param_1,undefined1 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  *param_3 = 0;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if (lVar2 != 0) {
        lVar4 = FUN_1401d6df2();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          *param_3 = *(undefined4 *)(lVar2 + 0x5c);
          *param_2 = 1;
          return;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1401d6df2 FUN_1401d6df2 body=228 status=ok
// SIG undefined FUN_1401d6df2(void)

longlong FUN_1401d6df2(void)

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
  if (DAT_14cb27520 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f199e;
    local_38 = &LAB_147f9f9d5;
    local_40 = FUN_1438bfd8b;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputTriggerHold",&DAT_14cb27520,&DAT_147f9f9d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27520;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d6ed8 FUN_1401d6ed8 body=627 status=ok
// SIG undefined FUN_1401d6ed8(void)

undefined8 FUN_1401d6ed8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  longlong local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x428) != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    if (DAT_14cad00c8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1479b7a0c;
      local_60 = &LAB_1463b464e;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 8;
      local_88 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1401d6f8f;
    }
    if (((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
         == DAT_14cad00c8 + 0x30)) && (lVar1 = *param_2, lVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x428);
      if ((DAT_14c950c29 == 1) && (FUN_1456cec3c(), DAT_14cad00c8 == 0)) {
        local_50 = &local_30;
        local_30 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1479b7a0c;
        local_60 = &LAB_1463b464e;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000005;
        local_80 = 8;
        local_88 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        if (DAT_14cad00c8 != 0) goto LAB_1401d6f55;
LAB_1401d713b:
        lVar4 = 0;
      }
      else {
LAB_1401d6f55:
        if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1401d713b;
        lVar4 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
            DAT_14cad00c8 + 0x30) {
          lVar4 = lVar1;
        }
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        uVar3 = *(undefined8 *)(param_1 + 0x428);
        goto LAB_1401d6fb8;
      }
    }
  }
LAB_1401d6f8f:
  local_38 = *param_2;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = FUN_1448d517c(param_1,&local_38);
LAB_1401d6fb8:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1401d714c FUN_1401d714c body=167 status=ok
// SIG undefined FUN_1401d714c(void)

undefined4 * FUN_1401d714c(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = *param_3;
  bVar1 = *(byte *)(param_3 + 2);
  bVar2 = *(byte *)(param_3 + 3);
  bVar3 = *(byte *)(param_3 + 4);
  iVar5 = param_3[1];
  iVar6 = param_3[5];
  FUN_1401d71f4();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca19e68,
                (uint)(iVar4 == 0) +
                iVar5 * 2 + ((uint)bVar3 * 4 + iVar6 * 8 + (uint)bVar2 * 2 | (uint)bVar1) * 4 +
                -0x20);
  FUN_1401d71f4();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d71f4 FUN_1401d71f4 body=281 status=ok
// SIG undefined FUN_1401d71f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1401d71f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca19f10) {
    FUN_144b3d300(&DAT_14ca19f10);
    if (DAT_14ca19f10 == -1) {
      FUN_1456db20c();
      FUN_140db5666(&DAT_14ca19e68,0,&DAT_14ca19e00,L"FShadingBinBuildCS",
                    L"/Engine/Private/Nanite/NaniteShadeBinning.usf",L"ShadingBinBuildCS",5,0x100,
                    FUN_14726306c,FUN_147263044,&LAB_142e4d3dc,&LAB_142e4d3d8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14ca19e68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e4d456);
      _Init_thread_footer(&DAT_14ca19f10);
    }
  }
  return &DAT_14ca19e68;
}



// FUNCTION 1401d730e FUN_1401d730e body=894 status=ok
// SIG undefined FUN_1401d730e(void)

void FUN_1401d730e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *param_1;
  FUN_1401d825c(lVar3);
  iVar2 = *(int *)(*(longlong *)
                    (*(longlong *)(lVar3 + 0x78) +
                    (*(longlong *)(lVar3 + 0x80) - 1U & *(ulonglong *)(lVar3 + 0x88)) * 8) + 4);
  if (iVar2 == 4) {
    lVar3 = *param_1;
    FUN_1401d825c(lVar3);
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      FUN_1401d76f6(lVar3 + 0x70);
    }
    local_a8 = CONCAT44(local_a8._4_4_,1);
    FUN_1401d77be(param_1[2]);
    lVar3 = *param_1;
    FUN_1401d825c(lVar3);
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      do {
        lVar3 = *param_1;
        FUN_1401d825c(lVar3);
        puVar4 = *(undefined8 **)
                  (*(longlong *)(lVar3 + 0x78) +
                  (*(longlong *)(lVar3 + 0x80) - 1U & *(ulonglong *)(lVar3 + 0x88)) * 8);
        local_98 = *(undefined4 *)(puVar4 + 2);
        local_a8 = *puVar4;
        uStack_a0 = *(undefined4 *)(puVar4 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        if ((ulonglong)puVar4[6] < 0x10) {
          puVar5 = puVar4 + 3;
        }
        else {
          puVar5 = (undefined8 *)puVar4[3];
        }
        FUN_1401d9f72(&local_90,puVar5,puVar4[5]);
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        FUN_1401da014(&local_70,(longlong)(puVar4[8] - puVar4[7]) >> 5,puVar4 + 7,puVar4 + 8);
        local_58 = *(undefined4 *)(puVar4 + 10);
        if (local_a8._4_4_ == 0xe) {
          lVar3 = *param_1;
          FUN_1401d825c(lVar3);
          if (*(longlong *)(lVar3 + 0x90) != 0) {
            FUN_1401d76f6(lVar3 + 0x70);
          }
          FUN_1401d7864(param_1,param_2);
        }
        else {
          if (local_a8._4_4_ == 6) {
            lVar3 = *param_1;
            FUN_1401d825c(lVar3);
            if (*(longlong *)(lVar3 + 0x90) != 0) {
              FUN_1401d76f6(lVar3 + 0x70);
            }
            FUN_1401d7744(&local_70);
            FUN_1401d9a90(&local_90);
            lVar3 = param_1[2];
            plVar1 = (longlong *)(lVar3 + 0x20);
            *plVar1 = *plVar1 + -1;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar3 + 0x18) = 0;
            }
            goto LAB_1401d758d;
          }
          if (local_a8._4_4_ != 0xf) {
            local_b0 = local_98;
            local_b8 = CONCAT44(uStack_9c,uStack_a0);
            FUN_1470a7678(*param_1,&local_b8,"end of map not found");
            FUN_1401d7744(&local_70);
            FUN_1401d9a90(&local_90);
            goto LAB_1401d758d;
          }
          (**(code **)(*param_2 + 0x18))(param_2,&uStack_a0);
        }
        lVar3 = *param_1;
        FUN_1401d825c(lVar3);
        if (*(longlong *)(lVar3 + 0x90) == 0) {
LAB_1401d75ca:
          (**(code **)(*param_2 + 0x18))(param_2,&uStack_a0);
        }
        else {
          lVar3 = *param_1;
          FUN_1401d825c(lVar3);
          if (*(int *)(*(longlong *)
                        (*(longlong *)(lVar3 + 0x78) +
                        (*(longlong *)(lVar3 + 0x80) - 1U & *(ulonglong *)(lVar3 + 0x88)) * 8) + 4)
              != 0xf) goto LAB_1401d75ca;
          lVar3 = *param_1;
          FUN_1401d825c(lVar3);
          if (*(longlong *)(lVar3 + 0x90) != 0) {
            FUN_1401d76f6(lVar3 + 0x70);
          }
          FUN_1401d7864(param_1,param_2);
        }
        FUN_1401d7744(&local_70);
        FUN_1401d9a90(&local_90);
        lVar3 = *param_1;
        FUN_1401d825c(lVar3);
      } while (*(longlong *)(lVar3 + 0x90) != 0);
    }
    lVar3 = *param_1;
    uStack_a0 = *(undefined4 *)(lVar3 + 0x28);
    local_a8 = *(undefined8 *)(lVar3 + 0x20);
    FUN_1470a7678(lVar3,&local_a8,"end of map not found");
  }
  else {
    if (iVar2 == 9) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
    }
    if (iVar2 == 0xe) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
    }
    if (iVar2 == 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
    }
  }
LAB_1401d758d:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d76f6 FUN_1401d76f6 body=77 status=ok
// SIG undefined FUN_1401d76f6(void)

void FUN_1401d76f6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 8) +
           (*(longlong *)(param_1 + 0x10) - 1U & *(ulonglong *)(param_1 + 0x18)) * 8);
  FUN_1401d7744(lVar2 + 0x38);
  FUN_1401d9a90(lVar2 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18) + 1;
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  return;
}



// FUNCTION 1401d7744 FUN_1401d7744 body=120 status=ok
// SIG undefined FUN_1401d7744(void)

void FUN_1401d7744(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_1401d9a90(lVar1);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1401d77be FUN_1401d77be body=166 status=ok
// SIG undefined FUN_1401d77be(void)

void FUN_1401d77be(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((int)lVar1 + (int)uVar3 & 3U) == 0) && (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 4U >> 2))
  {
    FUN_1401dd542(param_1);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 4 - 1U & uVar3;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  uVar3 = uVar3 + lVar1;
  uVar4 = *(longlong *)(param_1 + 0x10) - 1U & uVar3 >> 2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  if (lVar1 == 0) {
    uVar2 = FUN_14001cc68(0x10,0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  }
  *(undefined4 *)(lVar1 + (ulonglong)((uint)uVar3 & 3) * 4) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 1401d7864 FUN_1401d7864 body=1088 status=ok
// SIG undefined FUN_1401d7864(void)

void FUN_1401d7864(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *****pppppcVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  char ****local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *param_1;
  FUN_1401d825c(lVar4);
  if (*(longlong *)(lVar4 + 0x90) == 0) {
    uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(*param_1 + 0x28));
    local_48 = *(char *****)(*param_1 + 0x20);
    (**(code **)(*param_2 + 0x18))(param_2);
    goto LAB_1401d7a79;
  }
  lVar4 = *param_1;
  FUN_1401d825c(lVar4);
  lVar4 = *(longlong *)
           (*(longlong *)(lVar4 + 0x78) +
           (*(longlong *)(lVar4 + 0x80) - 1U & *(ulonglong *)(lVar4 + 0x88)) * 8);
  local_70 = *(undefined4 *)(lVar4 + 0x10);
  local_78 = *(undefined8 *)(lVar4 + 8);
  lVar4 = *param_1;
  FUN_1401d825c(lVar4);
  if (*(int *)(*(longlong *)
                (*(longlong *)(lVar4 + 0x78) +
                (*(longlong *)(lVar4 + 0x80) - 1U & *(ulonglong *)(lVar4 + 0x88)) * 8) + 4) == 0xf)
  {
    uStack_40 = 0;
    local_38 = 1;
    local_30 = 0xf;
    local_48 = (char ****)&DAT_0000003f;
    (**(code **)(*param_2 + 0x38))(param_2,&local_78,&local_48,0);
    FUN_1401d9a90(&local_48);
    FUN_1401d730e(param_1,param_2);
    (**(code **)(*param_2 + 0x40))(param_2);
    goto LAB_1401d7a79;
  }
  local_48 = (char ****)0x0;
  uStack_40 = 0;
  local_30 = 0xf;
  local_38 = 0;
  while (lVar4 = *param_1, FUN_1401d825c(lVar4), *(longlong *)(lVar4 + 0x90) != 0) {
    lVar4 = *param_1;
    FUN_1401d825c(lVar4);
    if (*(int *)(*(longlong *)
                  (*(longlong *)(lVar4 + 0x78) +
                  (*(longlong *)(lVar4 + 0x80) - 1U & *(ulonglong *)(lVar4 + 0x88)) * 8) + 4) !=
        0x10) break;
    FUN_1456db5d4(param_1,&local_48);
  }
  lVar4 = *param_1;
  FUN_1401d825c(lVar4);
  lVar4 = *(longlong *)
           (*(longlong *)(lVar4 + 0x78) +
           (*(longlong *)(lVar4 + 0x80) - 1U & *(ulonglong *)(lVar4 + 0x88)) * 8);
  iVar3 = *(int *)(lVar4 + 4);
  if (iVar3 == 0x11) {
    if (*(longlong *)(lVar4 + 0x28) != 0) {
      lVar1 = lVar4 + 0x18;
      cVar2 = FUN_1401d7ca6(lVar1,&DAT_14a179946);
      if ((((cVar2 == '\0') && (cVar2 = FUN_1401d7ca6(lVar1,&DAT_149dfc116), cVar2 == '\0')) &&
          (cVar2 = FUN_1401d7ca6(lVar1,&DAT_14a1798fe), cVar2 == '\0')) &&
         (cVar2 = FUN_1401d7ca6(lVar1,&DAT_14a179998), cVar2 == '\0')) {
        iVar3 = *(int *)(lVar4 + 4);
        goto LAB_1401d79fa;
      }
    }
    (**(code **)(*param_2 + 0x18))(param_2,&local_78);
LAB_1401d7a4e:
    lVar4 = *param_1;
    FUN_1401d825c(lVar4);
    if (*(longlong *)(lVar4 + 0x90) != 0) {
      FUN_1401d76f6(lVar4 + 0x70);
    }
    goto LAB_1401d7a6f;
  }
LAB_1401d79fa:
  if (local_38 == 0) {
    pwVar7 = L"?㸭";
    if (iVar3 == 0x12) {
      pwVar7 = L"!../../../Engine/";
    }
    FUN_1401d7cf8(&local_48,pwVar7);
    iVar3 = *(int *)(lVar4 + 4);
  }
  if (iVar3 - 0x11U < 2) {
    local_88 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_78,&local_48,lVar4 + 0x18);
    goto LAB_1401d7a4e;
  }
  switch(iVar3) {
  case 3:
    lVar4 = *param_2;
    uVar8 = 1;
    break;
  case 4:
    lVar4 = *param_2;
    uVar8 = 1;
    goto LAB_1401d7ad2;
  default:
    goto switchD_1401d7aba_caseD_5;
  case 8:
    lVar4 = *param_2;
    uVar8 = 2;
    break;
  case 9:
switchD_1401d7aba_caseD_9:
    lVar4 = *param_2;
    uVar8 = 2;
LAB_1401d7ad2:
    (**(code **)(lVar4 + 0x38))(param_2,&local_78,&local_48,uVar8);
    FUN_1401d730e(param_1,param_2);
    (**(code **)(*param_2 + 0x40))(param_2);
    goto LAB_1401d7a6f;
  case 0xe:
    lVar4 = param_1[2];
    if ((*(longlong *)(lVar4 + 0x20) != 0) &&
       (uVar6 = (*(longlong *)(lVar4 + 0x20) + *(longlong *)(lVar4 + 0x18)) - 1,
       *(int *)(*(longlong *)
                 (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar6 >> 2) * 8) +
               (ulonglong)((uint)uVar6 & 3) * 4) == 4)) goto switchD_1401d7aba_caseD_9;
switchD_1401d7aba_caseD_5:
    if (local_38 == 1) {
      pppppcVar5 = (char *****)local_48;
      if (local_30 < 0x10) {
        pppppcVar5 = &local_48;
      }
      if (*(char *)pppppcVar5 != '?') goto LAB_1401d7ba0;
      (**(code **)(*param_2 + 0x18))(param_2,&local_78);
    }
    else {
LAB_1401d7ba0:
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      local_88 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_78,&local_48,&local_68);
      FUN_1401d9a90(&local_68);
    }
    goto LAB_1401d7a6f;
  }
  (**(code **)(lVar4 + 0x28))(param_2,&local_78,&local_48,uVar8);
  FUN_1401dc8c2(param_1,param_2);
  (**(code **)(*param_2 + 0x30))(param_2);
LAB_1401d7a6f:
  FUN_1401d9a90(&local_48);
LAB_1401d7a79:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401d7ca6 FUN_1401d7ca6 body=71 status=ok
// SIG undefined FUN_1401d7ca6(void)

undefined8 FUN_1401d7ca6(undefined8 *param_1,char *param_2)

{
  size_t *psVar1;
  int iVar2;
  size_t _Size;
  undefined4 extraout_var;
  undefined8 uVar3;
  
  _Size = strlen(param_2);
  psVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*psVar1 == _Size) {
    iVar2 = memcmp(param_1,param_2,_Size);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1401d7cf8 FUN_1401d7cf8 body=108 status=ok
// SIG undefined FUN_1401d7cf8(void)

undefined8 * FUN_1401d7cf8(undefined8 *param_1,char *param_2)

{
  size_t _Size;
  undefined8 *puVar1;
  
  _Size = strlen(param_2);
  if (_Size <= (ulonglong)param_1[3]) {
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[2] = _Size;
    memmove(puVar1,param_2,_Size);
    *(undefined1 *)((longlong)puVar1 + _Size) = 0;
    return param_1;
  }
  puVar1 = (undefined8 *)FUN_1401d7f46(param_1,_Size);
  return puVar1;
}



// FUNCTION 1401d7d64 FUN_1401d7d64 body=176 status=ok
// SIG undefined FUN_1401d7d64(void)

void FUN_1401d7d64(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1401da48a(**(undefined8 **)(param_1 + 8));
  lVar1 = *(longlong *)*puVar3;
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar1 + 4) = *param_2;
  FUN_1401d803a(param_1,puVar3);
  FUN_1401d7e7a(puVar3);
  puVar2 = *(undefined1 **)*puVar3;
  *puVar2 = 1;
  *(undefined4 *)(puVar2 + 0x10) = 2;
  FUN_1401d7e14(puVar2 + 0x40,param_4);
  FUN_1401d7e7a(puVar3);
  FUN_1401d7e14(*(longlong *)*puVar3 + 0x18,param_3);
  FUN_1401d7e7a(puVar3);
  *(undefined4 *)(*(longlong *)*puVar3 + 0x38) = param_5;
  FUN_1401dab58(param_1);
  return;
}



// FUNCTION 1401d7e14 FUN_1401d7e14 body=101 status=ok
// SIG undefined FUN_1401d7e14(void)

undefined8 * FUN_1401d7e14(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong _Size;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    _Size = param_2[2];
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    if ((ulonglong)param_1[3] < _Size) {
      FUN_1401d7f46(param_1,_Size);
    }
    else {
      _Dst = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        _Dst = (undefined8 *)*param_1;
      }
      param_1[2] = _Size;
      memmove(_Dst,param_2,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1401d7e7a FUN_1401d7e7a body=150 status=ok
// SIG undefined FUN_1401d7e7a(void)

void FUN_1401d7e7a(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  pcVar1 = *(char **)*param_1;
  if (*pcVar1 == '\0') {
    if (*(int *)(pcVar1 + 0x10) == 0) {
      pcVar1[0x10] = '\x01';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
    }
    *pcVar1 = '\x01';
    puVar3 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)*puVar3;
    while (puVar4 != puVar3) {
      FUN_1401d7e7a(puVar4[4]);
      puVar3 = puVar4;
      puVar2 = (undefined8 *)puVar4[2];
      if (*(char *)((longlong)puVar4[2] + 0x19) == '\0') {
        do {
          puVar4 = puVar2;
          puVar2 = (undefined8 *)*puVar4;
        } while (*(char *)((longlong)*puVar4 + 0x19) == '\0');
      }
      else {
        do {
          puVar4 = (undefined8 *)puVar3[1];
          if (*(char *)((longlong)puVar4 + 0x19) != '\0') break;
          bVar5 = puVar3 == (undefined8 *)puVar4[2];
          puVar3 = puVar4;
        } while (bVar5);
      }
      puVar3 = (undefined8 *)param_1[2];
    }
    FUN_1401d7f10(puVar3[1]);
    puVar3[1] = puVar3;
    *puVar3 = puVar3;
    puVar3[2] = puVar3;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 1401d7f10 FUN_1401d7f10 body=53 status=ok
// SIG undefined FUN_1401d7f10(void)

void FUN_1401d7f10(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x19);
  while (cVar1 == '\0') {
    FUN_1401d7f10(param_1[2]);
    plVar2 = (longlong *)*param_1;
    FUN_1400020a8(param_1);
    param_1 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 1401d7f46 FUN_1401d7f46 body=237 status=ok
// SIG undefined FUN_1401d7f46(void)

longlong * FUN_1401d7f46(longlong *param_1,ulonglong param_2,undefined8 param_3,void *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  uVar2 = param_1[3];
  uVar5 = (uVar2 >> 1) + uVar2;
  if (uVar5 < (param_2 | 0xf)) {
    uVar5 = param_2 | 0xf;
  }
  if ((uVar2 >> 1 ^ 0x7fffffffffffffff) < uVar2) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar1 = uVar5 + 1;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14001cc68(uVar1,0x10);
    }
  }
  else {
    _Dst = (void *)FUN_140c1ca1d();
  }
  param_1[2] = param_2;
  param_1[3] = uVar5;
  memcpy(_Dst,param_4,param_2);
  *(undefined1 *)((longlong)_Dst + param_2) = 0;
  if (0xf < uVar2) {
    lVar3 = *param_1;
    lVar4 = lVar3;
    if ((uVar2 - 0xfff < 0xfffffffffffff000) &&
       (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (ulonglong)((lVar3 + -8) - lVar4))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar4);
  }
  *param_1 = (longlong)_Dst;
  return param_1;
}



// FUNCTION 1401d803a FUN_1401d803a body=543 status=ok
// SIG undefined FUN_1401d803a(void)

void FUN_1401d803a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  void *_Dst;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  local_48 = param_2;
  if (((*(undefined8 **)(param_1 + 0x20) == puVar1) ||
      (*(char *)**(undefined8 **)puVar1[-1] != '\x01')) ||
     (*(int *)((char *)**(undefined8 **)puVar1[-1] + 0x10) != 4)) {
    if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
      FUN_1401dc674(param_1 + 0x20,puVar1,&local_48);
    }
    else {
      *puVar1 = param_2;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x40);
    uVar2 = *(ulonglong *)(param_1 + 0x50);
    lVar8 = *(longlong *)(param_1 + 0x38);
    if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
      FUN_1401dc674(param_1 + 0x20,puVar1,&local_48);
    }
    else {
      *puVar1 = param_2;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    }
    if ((ulonglong)(lVar9 - lVar8 >> 4) < uVar2) {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      if (puVar1 == *(undefined8 **)(param_1 + 0x48)) {
        lVar9 = (longlong)puVar1 - *(longlong *)(param_1 + 0x38);
        uVar6 = lVar9 >> 4;
        uVar2 = uVar6 + 1;
        uVar5 = (uVar6 >> 1) + uVar6;
        if (uVar5 <= uVar2) {
          uVar5 = uVar2;
        }
        if (0xfffffffffffffff - (uVar6 >> 1) < uVar6) {
          uVar5 = 0xfffffffffffffff;
        }
        if (uVar5 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14694ac37();
        }
        lVar8 = uVar5 * 0x10;
        if (uVar5 < 0x100) {
          if (uVar5 == 0) {
            _Dst = (void *)0x0;
          }
          else {
            _Dst = (void *)FUN_14001cc68(lVar8,0x10);
          }
        }
        else {
          _Dst = (void *)FUN_140c1ca1d(lVar8);
        }
        *(undefined8 *)((longlong)_Dst + lVar9) = param_2;
        *(undefined1 *)((longlong)_Dst + lVar9 + 8) = 0;
        uVar4 = (undefined4)local_48;
        *(undefined4 *)((longlong)_Dst + lVar9 + 9) = uVar4;
        *(undefined4 *)((longlong)_Dst + lVar9 + 0xc) = local_48._3_4_;
        puVar3 = *(undefined8 **)(param_1 + 0x40);
        memmove(_Dst,*(void **)(param_1 + 0x38),
                (longlong)puVar1 - (longlong)*(void **)(param_1 + 0x38));
        if (puVar3 != puVar1) {
          memmove((void *)((longlong)_Dst + lVar9 + 0x10),puVar1,
                  *(longlong *)(param_1 + 0x40) - (longlong)puVar1);
        }
        lVar9 = *(longlong *)(param_1 + 0x38);
        if (lVar9 != 0) {
          lVar7 = lVar9;
          if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x48) - lVar9)) &&
             (lVar7 = *(longlong *)(lVar9 + -8), 0x1f < (ulonglong)((lVar9 + -8) - lVar7))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_1400020a8(lVar7);
        }
        *(void **)(param_1 + 0x38) = _Dst;
        *(void **)(param_1 + 0x40) = (void *)(uVar2 * 0x10 + (longlong)_Dst);
        *(void **)(param_1 + 0x48) = (void *)(lVar8 + (longlong)_Dst);
      }
      else {
        *puVar1 = param_2;
        *(undefined1 *)(puVar1 + 1) = 0;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x10;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401d825c FUN_1401d825c body=6194 status=ok
// SIG undefined FUN_1401d825c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401d825c(longlong param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  char *pcVar9;
  char **ppcVar10;
  ulonglong uVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 auStack_228 [40];
  longlong local_200;
  char *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [24];
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined1 uStack_155;
  undefined4 uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined2 local_138;
  undefined1 local_136;
  undefined5 local_135;
  undefined3 uStack_130;
  undefined5 uStack_12d;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 uStack_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *pcStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_228;
  pcVar1 = (char *)(param_1 + 0x18);
LAB_1401d82d6:
  do {
    while( true ) {
      if (*(longlong *)(param_1 + 0x90) == 0) break;
      iVar6 = **(int **)(*(longlong *)(param_1 + 0x78) +
                        (*(longlong *)(param_1 + 0x80) - 1U & *(ulonglong *)(param_1 + 0x88)) * 8);
      if (iVar6 == 0) goto LAB_1401d875e;
      if (iVar6 != 1) break;
      FUN_1401d76f6(param_1 + 0x70,&DAT_14c9a2808,&local_168,&DAT_14c9a2828);
    }
    if (*(char *)(param_1 + 0x99) != '\0') {
LAB_1401d875e:
      if ((local_70 ^ (ulonglong)auStack_228) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (*(char *)(param_1 + 0x98) == '\x01') {
LAB_1401d830c:
      while( true ) {
        cVar5 = FUN_1401dc1d0(pcVar1);
        if (((cVar5 == '\0') || (*(longlong *)(param_1 + 0x50) == 0)) ||
           ((cVar5 = *(char *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x38) +
                                (*(longlong *)(param_1 + 0x40) + 0xfffffffffffffffU &
                                *(ulonglong *)(param_1 + 0x48) >> 4) * 8) +
                              (ulonglong)((uint)*(ulonglong *)(param_1 + 0x48) & 0xf)), cVar5 != ' '
            && (cVar5 != '\t')))) break;
        if (*(longlong *)(param_1 + 0x128) == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c9a27f8) {
            FUN_144b3d300(&DAT_14c9a27f8);
            if (DAT_14c9a27f8 == -1) {
              _DAT_14c9a27d8 = 1;
              DAT_14c9a27dc = 9;
              _DAT_14c9a27e0 = 0;
              uRam000000014c9a27e8 = 0;
              _DAT_14c9a27f0 = 0;
              atexit((_func_5014 *)&LAB_142b2b13c);
              _Init_thread_footer(&DAT_14c9a27f8);
            }
          }
          local_118 = (char *)0x0;
          pcStack_110 = pcVar1;
          if (*(longlong *)(param_1 + 0x50) == 0) {
            cVar5 = FUN_1448d56de(pcVar1,0);
            if (cVar5 == '\0') goto LAB_1401d83c0;
          }
          iVar6 = FUN_1448d545a(&DAT_14c9a27d8,&local_118);
          if (-1 < iVar6) {
            *(undefined1 *)(param_1 + 0x9a) = 0;
          }
        }
LAB_1401d83c0:
        FUN_1401dc22e(pcVar1);
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9a2820) {
        FUN_144b3d300(&DAT_14c9a2820);
        if (DAT_14c9a2820 == -1) {
          DAT_14c9a2800 = 1;
          DAT_14c9a2804 = CONCAT11(DAT_14c9a2804._1_1_,0x23);
          _DAT_14c9a2808 = 0;
          DAT_14c9a2810 = 0;
          _DAT_14c9a2818 = 0;
          atexit((_func_5014 *)&LAB_142b2b148);
          _Init_thread_footer(&DAT_14c9a2820);
        }
      }
      local_118 = (char *)CONCAT44(CONCAT22(local_118._6_2_,DAT_14c9a2804),DAT_14c9a2800);
      pcStack_100 = (char *)0x0;
      pcStack_110 = (char *)0x0;
      uStack_108 = 0;
      FUN_1401d9af0(&pcStack_110,DAT_14c9a2810 - _DAT_14c9a2808 >> 5,&DAT_14c9a2808,&DAT_14c9a2810);
      local_168 = (char *)0x0;
      local_160 = pcVar1;
      if (*(longlong *)(param_1 + 0x50) == 0) {
        cVar5 = FUN_1448d56de(pcVar1,0);
        if (cVar5 != '\0') goto LAB_1401d845b;
        FUN_1401d9b52(&pcStack_110);
      }
      else {
LAB_1401d845b:
        iVar6 = FUN_1448d545a(&local_118,&local_168);
        FUN_1401d9b52(&pcStack_110);
        if (-1 < iVar6) {
          cVar5 = FUN_1401dc1d0(pcVar1);
          while (cVar5 != '\0') {
            FUN_1401dc3e8();
            iVar6 = FUN_1456dbef2(&DAT_14c9a2828,pcVar1);
            if (-1 < iVar6) break;
            FUN_1401dc22e(pcVar1);
            cVar5 = FUN_1401dc1d0(pcVar1);
          }
        }
      }
      FUN_1401dc3e8();
      local_118 = (char *)0x0;
      pcStack_110 = pcVar1;
      if (*(longlong *)(param_1 + 0x50) == 0) {
        cVar5 = FUN_1448d56de(pcVar1,0);
        if (cVar5 == '\0') break;
      }
      iVar6 = FUN_1448d545a(&DAT_14c9a2828,&local_118);
      if (iVar6 < 0) break;
      FUN_1401dc3e8();
      local_118 = (char *)0x0;
      pcStack_110 = pcVar1;
      if (*(longlong *)(param_1 + 0x50) == 0) {
        cVar5 = FUN_1448d56de(pcVar1,0);
        if (cVar5 != '\0') goto LAB_1401d8b8e;
      }
      else {
LAB_1401d8b8e:
        iVar6 = FUN_1448d545a(&DAT_14c9a2828,&local_118);
        if (0 < iVar6) {
          do {
            FUN_1401dc22e(pcVar1);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      FUN_1401da1b2(param_1);
      if (*(longlong *)(param_1 + 0x128) == 0) {
        *(undefined1 *)(param_1 + 0x9a) = 1;
      }
      goto LAB_1401d830c;
    }
    FUN_1456db432(param_1);
  } while( true );
  if (*(longlong *)(param_1 + 0x128) == 0) {
    lVar8 = *(longlong *)(param_1 + 0xe8);
    while (lVar8 != 0) {
      uVar11 = (*(longlong *)(param_1 + 0xe0) + lVar8) - 1;
      piVar4 = *(int **)(*(longlong *)
                          (*(longlong *)(param_1 + 0xd0) +
                          (*(longlong *)(param_1 + 0xd8) - 1U & uVar11 >> 1) * 8) +
                        (ulonglong)((uint)uVar11 & 1) * 8);
      iVar6 = *piVar4;
      if (iVar6 < *(int *)(param_1 + 0x28)) goto LAB_1401d84c9;
      if (iVar6 == *(int *)(param_1 + 0x28)) {
        if (piVar4[1] != 1) goto LAB_1401d84c9;
        FUN_1401d9cad();
        local_118 = (char *)0x0;
        pcStack_110 = pcVar1;
        if (*(longlong *)(param_1 + 0x50) == 0) {
          cVar5 = FUN_1448d56de(pcVar1,0);
          if (cVar5 == '\0') goto LAB_1401d9a04;
        }
        iVar6 = FUN_1448d545a(&DAT_14c9a2710,&local_118);
        if (-1 < iVar6) goto LAB_1401d94ce;
      }
LAB_1401d9a04:
      FUN_1401db2aa(param_1);
      lVar8 = *(longlong *)(param_1 + 0xe8);
    }
  }
LAB_1401d8505:
  cVar5 = FUN_1401dc1d0(pcVar1);
  if (cVar5 == '\0') {
    if (0 < *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    FUN_1401dd0a6(param_1);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    *(undefined2 *)(param_1 + 0x99) = 1;
    goto LAB_1401d82d6;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_1401dcbbb();
    local_118 = (char *)0x0;
    pcStack_110 = pcVar1;
    if (*(longlong *)(param_1 + 0x50) == 0) {
      cVar5 = FUN_1448d56de(pcVar1,0);
      if (cVar5 != '\0') goto LAB_1401d8cf8;
    }
    else {
LAB_1401d8cf8:
      iVar6 = FUN_1448d545a(&DAT_14c9a26c0,&local_118);
      if (-1 < iVar6) {
        FUN_1470a6770(param_1);
        goto LAB_1401d82d6;
      }
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      FUN_1401dcd4c();
      local_118 = (char *)0x0;
      pcStack_110 = pcVar1;
      if (*(longlong *)(param_1 + 0x50) == 0) {
        cVar5 = FUN_1448d56de(pcVar1,0);
        if (cVar5 == '\0') goto LAB_1401d8520;
      }
      iVar6 = FUN_1448d545a(&DAT_14c9a26e8,&local_118);
      if (-1 < iVar6) {
        FUN_1470a6862(param_1);
        goto LAB_1401d82d6;
      }
    }
  }
LAB_1401d8520:
  if (*(longlong *)(param_1 + 0x50) != 0) {
    bVar3 = *(byte *)(*(longlong *)
                       (*(longlong *)(param_1 + 0x38) +
                       (*(longlong *)(param_1 + 0x40) + 0xfffffffffffffffU &
                       *(ulonglong *)(param_1 + 0x48) >> 4) * 8) +
                     (ulonglong)((uint)*(ulonglong *)(param_1 + 0x48) & 0xf));
    if (bVar3 < 0x5d) {
      if (bVar3 == 0x2c) {
        FUN_1470a6cb6(param_1);
        goto LAB_1401d82d6;
      }
      if (bVar3 == 0x5b) {
LAB_1401d8725:
        FUN_1470a6954(param_1);
        goto LAB_1401d82d6;
      }
    }
    else {
      if ((bVar3 == 0x5d) || (bVar3 == 0x7d)) {
        FUN_1470a6a3e(param_1);
        goto LAB_1401d82d6;
      }
      if (bVar3 == 0x7b) goto LAB_1401d8725;
    }
  }
  lVar8 = param_1 + 0x70;
  puVar2 = (undefined8 *)(param_1 + 0x20);
  FUN_1401d9cad();
  local_118 = (char *)0x0;
  pcStack_110 = pcVar1;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    cVar5 = FUN_1448d56de(pcVar1,0);
    if (cVar5 != '\0') goto LAB_1401d859c;
  }
  else {
LAB_1401d859c:
    iVar6 = FUN_1448d545a(&DAT_14c9a2710,&local_118);
    if (-1 < iVar6) {
      if (*(longlong *)(param_1 + 0x128) == 0) {
        if (*(char *)(param_1 + 0x9a) != '\0') {
          ppcVar10 = &pcStack_100;
          FUN_1401da89e(param_1,*(undefined4 *)(param_1 + 0x28),1);
          *(undefined2 *)(param_1 + 0x9a) = 1;
          uStack_108 = CONCAT44(uStack_108._4_4_,*(undefined4 *)(param_1 + 0x28));
          pcStack_110 = (char *)*puVar2;
          FUN_1401dc22e(pcVar1);
          local_118 = (char *)0x700000000;
          pcStack_100 = (char *)0x0;
          uStack_f8 = 0;
          local_f0 = 0;
          local_e8 = 0xf;
          local_e0 = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          FUN_1401d9bce(lVar8,&local_118);
          FUN_1401d7744(&local_e0);
          goto LAB_1401d8c86;
        }
        uVar7 = *(undefined4 *)(param_1 + 0x28);
        ppcVar10 = &local_98;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x28);
        ppcVar10 = &local_168;
      }
      *(undefined4 *)(ppcVar10 + 1) = uVar7;
      *ppcVar10 = (char *)*puVar2;
      pcVar9 = "illegal block entry";
      goto LAB_1401d98de;
    }
  }
  puVar12 = &DAT_14c9a2738;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9a2758) {
      FUN_144b3d300(&DAT_14c9a2758);
      puVar12 = &DAT_14c9a2738;
      if (DAT_14c9a2758 == -1) {
        FUN_1456db528();
        local_118 = (char *)CONCAT35(local_118._5_3_,0x3f00000001);
        pcStack_110 = (char *)0x0;
        uStack_108 = 0;
        pcStack_100 = (char *)0x0;
        _DAT_14c9a2738 = 6;
        _DAT_14c9a2740 = 0;
        uRam000000014c9a2748 = 0;
        _DAT_14c9a2750 = 0;
        FUN_1401db408(&DAT_14c9a2740,&local_118);
        FUN_1401db408(&DAT_14c9a2740,&DAT_14c9a2a08);
        FUN_1401d9b52(&pcStack_110);
        atexit((_func_5014 *)&LAB_142b2b10c);
        _Init_thread_footer(&DAT_14c9a2758);
        puVar12 = &DAT_14c9a2738;
      }
    }
  }
  else {
    FUN_1470a6e86();
    puVar12 = &DAT_14c9a2760;
  }
  local_118 = (char *)0x0;
  pcStack_110 = pcVar1;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    cVar5 = FUN_1448d56de(pcVar1,0);
    if (cVar5 != '\0') goto LAB_1401d8611;
  }
  else {
LAB_1401d8611:
    iVar6 = FUN_1448d545a(puVar12,&local_118);
    if (-1 < iVar6) {
      FUN_1470a6f82(param_1);
      goto LAB_1401d82d6;
    }
  }
  puVar12 = &DAT_14c9a2850;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9a2870) {
      FUN_144b3d300(&DAT_14c9a2870);
      puVar12 = &DAT_14c9a2850;
      if (DAT_14c9a2870 == -1) {
        FUN_1456db528();
        local_168 = (char *)((ulonglong)local_168 & 0xffffffff00000000);
        local_160._0_4_ = 0;
        local_160._4_4_ = 0;
        uStack_158 = 0;
        uStack_157 = 0;
        uStack_156 = 0;
        uStack_155 = 0;
        uStack_154 = 0;
        local_150 = 0;
        uStack_14c = 0;
        local_118 = (char *)CONCAT44(local_118._4_4_,3);
        pcStack_110 = (char *)0x0;
        uStack_108 = 0;
        pcStack_100 = (char *)0x0;
        FUN_1401db408(&pcStack_110,&DAT_14c9a2a08);
        FUN_1401db408(&pcStack_110,&local_168);
        local_98 = (char *)CONCAT35(local_98._5_3_,0x3a00000001);
        pcStack_90 = (char *)0x0;
        local_88 = 0;
        pcStack_80 = (char *)0x0;
        _DAT_14c9a2850 = 6;
        _DAT_14c9a2858 = 0;
        uRam000000014c9a2860 = 0;
        _DAT_14c9a2868 = 0;
        FUN_1401db408(&DAT_14c9a2858,&local_98);
        FUN_1401db408(&DAT_14c9a2858,&local_118);
        FUN_1401d9b52(&pcStack_90);
        FUN_1401d9b52(&pcStack_110);
        FUN_1401d9b52(&local_160);
        atexit((_func_5014 *)&LAB_142b2b160);
        _Init_thread_footer(&DAT_14c9a2870);
        puVar12 = &DAT_14c9a2850;
      }
    }
  }
  else {
    local_200 = lVar8;
    if (*(char *)(param_1 + 0x9b) == '\x01') {
      FUN_1470a76cc();
      puVar12 = &DAT_14c9a2878;
      lVar8 = local_200;
    }
    else {
      FUN_1470a774d();
      puVar12 = &DAT_14c9a28a0;
      lVar8 = local_200;
    }
  }
  local_118 = (char *)0x0;
  pcStack_110 = pcVar1;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    cVar5 = FUN_1448d56de(pcVar1,0);
    if (cVar5 != '\0') goto LAB_1401d8682;
  }
  else {
LAB_1401d8682:
    iVar6 = FUN_1448d545a(puVar12,&local_118);
    if (-1 < iVar6) {
      cVar5 = FUN_1401da0e8(param_1);
      *(undefined1 *)(param_1 + 0x9b) = 0;
      if (cVar5 == '\0') {
        if (*(longlong *)(param_1 + 0x128) == 0) {
          if (*(char *)(param_1 + 0x9a) == '\0') {
            local_160._0_4_ = *(undefined4 *)(param_1 + 0x28);
            local_168 = (char *)*puVar2;
            FUN_1470a7678(param_1,&local_168,"illegal map value");
            goto LAB_1401d82d6;
          }
          FUN_1401da89e(param_1,*(undefined4 *)(param_1 + 0x28),0);
          bVar13 = *(longlong *)(param_1 + 0x128) == 0;
        }
        else {
          bVar13 = false;
        }
      }
      else {
        bVar13 = false;
      }
      *(bool *)(param_1 + 0x9a) = bVar13;
      uStack_108 = CONCAT44(uStack_108._4_4_,*(undefined4 *)(param_1 + 0x28));
      pcStack_110 = (char *)*puVar2;
      FUN_1401dc22e(pcVar1);
      local_118 = (char *)0xf00000000;
      pcStack_100 = (char *)0x0;
      uStack_f8 = 0;
      local_f0 = 0;
      local_e8 = 0xf;
      local_e0 = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      FUN_1401d9bce(lVar8,&local_118);
      FUN_1401d7744(&local_e0);
      FUN_1401d9a90(&pcStack_100);
      goto LAB_1401d82d6;
    }
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if (*(longlong *)(param_1 + 0x128) == 0) goto LAB_1401d8887;
LAB_1401d959a:
    FUN_1470a7432();
    puVar12 = &DAT_14c9a27b0;
  }
  else {
    bVar3 = *(byte *)(*(longlong *)
                       (*(longlong *)(param_1 + 0x38) +
                       (*(longlong *)(param_1 + 0x40) + 0xfffffffffffffffU &
                       *(ulonglong *)(param_1 + 0x48) >> 4) * 8) +
                     (ulonglong)((uint)*(ulonglong *)(param_1 + 0x48) & 0xf));
    if (bVar3 == 0x21) {
      FUN_1456dbce4(param_1);
      goto LAB_1401d82d6;
    }
    if (*(longlong *)(param_1 + 0x128) != 0) {
      if ((bVar3 == 0x27) || (bVar3 == 0x22)) {
LAB_1401d95ab:
        local_98 = (char *)0x0;
        pcStack_90 = (char *)0x0;
        local_88 = 0;
        pcStack_80 = (char *)0xf;
        local_168 = (char *)0x0;
        local_160._0_4_ = (uint)local_160 & 0xffffff00;
        uStack_154 = 0;
        local_150 = local_150 & 0xffffff00;
        local_160._4_4_ = 0;
        uStack_158 = 0;
        uStack_157 = 0;
        uStack_156 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        if (bVar3 == 0x27) {
          local_188 = (char *)CONCAT35(local_188._5_3_,0x2700000001);
          local_180 = 0;
          uStack_178 = 0;
          local_170 = 0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9a2aa0) && (FUN_144b3d300(&DAT_14c9a2aa0), DAT_14c9a2aa0 == -1)) {
            pcStack_110 = (char *)0x0;
            uStack_108 = 2;
            pcStack_100 = (char *)0xf;
            local_118 = (char *)0x2727;
            FUN_1401ddb30(&DAT_14c9a2a80,&local_118,6);
            FUN_1401d9a90(&local_118);
            atexit((_func_5014 *)&LAB_142b2b208);
            _Init_thread_footer(&DAT_14c9a2aa0);
          }
          local_118 = (char *)CONCAT44(local_118._4_4_,5);
          pcStack_110 = (char *)0x0;
          uStack_108 = 0;
          pcStack_100 = (char *)0x0;
          FUN_1401db408(&pcStack_110,&DAT_14c9a2a80);
          local_b8 = (char *)CONCAT44(local_b8._4_4_,4);
          pcStack_a0 = (char *)0x0;
          pcStack_b0 = (char *)0x0;
          uStack_a8 = 0;
          FUN_1401db408(&pcStack_b0,&local_188);
          FUN_1401db408(&pcStack_b0,&local_118);
          FUN_1401d9b52(&pcStack_110);
          FUN_1401d9b52(&local_180);
          uStack_156 = 0x27;
        }
        else {
          local_b8._0_5_ = CONCAT14(bVar3,1);
          pcStack_b0 = (char *)0x0;
          uStack_a8 = 0;
          pcStack_a0 = (char *)0x0;
          uStack_156 = 0x5c;
        }
        local_160._0_4_ = CONCAT31(local_160._1_3_,1);
        local_160._4_4_ = 0;
        uStack_154 = 2;
        uStack_157 = 1;
        local_150 = local_150 & 0xffffff00;
        uStack_14c = 0;
        uStack_148 = 2;
        local_168 = (char *)&local_b8;
        FUN_1401da236(param_1);
        local_180 = CONCAT44(local_180._4_4_,*(undefined4 *)(param_1 + 0x28));
        local_188 = (char *)*puVar2;
        FUN_1401dc22e(pcVar1);
        FUN_1401db600(&local_118,pcVar1,&local_168);
        FUN_1401d9a90(&local_98);
        local_88 = uStack_108;
        pcStack_80 = pcStack_100;
        local_98 = local_118;
        pcStack_90 = pcStack_110;
        uStack_108 = 0;
        pcStack_100 = (char *)0xf;
        local_118 = (char *)((ulonglong)local_118 & 0xffffffffffffff00);
        FUN_1401d9a90(&local_118);
        *(undefined2 *)(param_1 + 0x9a) = 0x100;
        local_118 = (char *)0x1200000000;
        pcStack_110 = local_188;
        uStack_108 = CONCAT44(uStack_108._4_4_,(undefined4)local_180);
        pcStack_100 = (char *)0x0;
        uStack_f8 = 0;
        local_f0 = 0;
        local_e8 = 0xf;
        local_e0 = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        ppcVar10 = &local_98;
        FUN_1401d7e14(&pcStack_100,ppcVar10);
        FUN_1401d9e78(lVar8,&local_118);
        FUN_1401d7744(&local_e0);
        FUN_1401d9a90(&pcStack_100);
        FUN_1401d9b52(&pcStack_b0);
LAB_1401d8c86:
        FUN_1401d9a90(ppcVar10);
        goto LAB_1401d82d6;
      }
      goto LAB_1401d959a;
    }
    if (bVar3 < 0x3e) {
      if ((bVar3 == 0x27) || (bVar3 == 0x22)) goto LAB_1401d95ab;
    }
    else if ((bVar3 == 0x7c) || (bVar3 == 0x3e)) {
      FUN_1470a7094(param_1);
      goto LAB_1401d82d6;
    }
LAB_1401d8887:
    puVar12 = &DAT_14c9a2788;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9a27a8) {
      FUN_144b3d300(&DAT_14c9a27a8);
      puVar12 = &DAT_14c9a2788;
      if (DAT_14c9a27a8 == -1) {
        FUN_1456db528();
        pcStack_b0 = (char *)0x0;
        local_b8 = (char *)FUN_14001cc68(0x20,0x10);
        uStack_a8 = 0x10;
        pcStack_a0 = (char *)0x1f;
        builtin_strncpy(local_b8,",[]{}#&*!|>\'\"%@`",0x11);
        FUN_1401ddb30(&local_98,&local_b8,3);
        local_168 = (char *)CONCAT44(local_168._4_4_,3);
        local_160._0_4_ = 0;
        local_160._4_4_ = 0;
        uStack_158 = 0;
        uStack_157 = 0;
        uStack_156 = 0;
        uStack_155 = 0;
        uStack_154 = 0;
        local_150 = 0;
        uStack_14c = 0;
        FUN_1401db408(&local_160,&DAT_14c9a2a08);
        FUN_1401db408(&local_160);
        FUN_1456db528();
        local_1c8[0] = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1b0 = 0;
        local_1a8[0] = 3;
        local_1a0 = 0;
        uStack_198 = 0;
        local_190 = 0;
        FUN_1401db408(&local_1a0,&DAT_14c9a2a08);
        FUN_1401db408(&local_1a0,local_1c8);
        local_128 = 3;
        local_120 = 0xf;
        local_135 = 0;
        uStack_130 = 0;
        uStack_12d = 0;
        local_138 = 0x3f2d;
        local_136 = 0x3a;
        FUN_1401ddb30(local_1e8,&local_138,3);
        local_188 = (char *)CONCAT44(local_188._4_4_,6);
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0;
        FUN_1401db408(&local_180,local_1e8);
        FUN_1401db408(&local_180,local_1a8);
        local_118 = (char *)CONCAT44(local_118._4_4_,3);
        pcStack_110 = (char *)0x0;
        uStack_108 = 0;
        pcStack_100 = (char *)0x0;
        FUN_1401db408(&pcStack_110,&local_168);
        FUN_1401db408(&pcStack_110,&local_188);
        _DAT_14c9a2788 = 5;
        _DAT_14c9a2790 = 0;
        uRam000000014c9a2798 = 0;
        _DAT_14c9a27a0 = 0;
        FUN_1401db408(&DAT_14c9a2790,&local_118);
        FUN_1401d9b52(&pcStack_110);
        FUN_1401d9b52(&local_180);
        FUN_1401d9b52(local_1e0);
        FUN_1401d9a90(&local_138);
        FUN_1401d9b52(&local_1a0);
        FUN_1401d9b52(&local_1c0);
        FUN_1401d9b52(&local_160);
        FUN_1401d9b52(&pcStack_90);
        FUN_1401d9a90(&local_b8);
        atexit((_func_5014 *)&LAB_142b2b124);
        _Init_thread_footer(&DAT_14c9a27a8);
        puVar12 = &DAT_14c9a2788;
      }
    }
  }
  local_118 = (char *)0x0;
  pcStack_110 = pcVar1;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    cVar5 = FUN_1448d56de(pcVar1,0);
    if (cVar5 != '\0') goto LAB_1401d88d2;
  }
  else {
LAB_1401d88d2:
    iVar6 = FUN_1448d545a(puVar12,&local_118);
    if (-1 < iVar6) {
      local_b8 = (char *)0x0;
      pcStack_b0 = (char *)0x0;
      uStack_a8 = 0;
      pcStack_a0 = (char *)0xf;
      uStack_156 = 0;
      uStack_158 = 0;
      uStack_157 = 0;
      uStack_140 = 0;
      if (*(longlong *)(param_1 + 0x128) == 0) {
        pcVar9 = &DAT_14c9a2a58;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c9a2a78) {
          FUN_144b3d300(&DAT_14c9a2a78);
          pcVar9 = &DAT_14c9a2a58;
          if (DAT_14c9a2a78 == -1) {
            FUN_1456dc8f7();
            FUN_1456dc608(&local_98);
            FUN_1456db528();
            local_118 = (char *)CONCAT44(local_118._4_4_,6);
            pcStack_110 = (char *)0x0;
            uStack_108 = 0;
            pcStack_100 = (char *)0x0;
            FUN_1401db408(&pcStack_110,&DAT_14c9a2a08);
            FUN_1401db408(&pcStack_110,&local_98);
            _DAT_14c9a2a58 = 3;
            _DAT_14c9a2a60 = 0;
            uRam000000014c9a2a68 = 0;
            _DAT_14c9a2a70 = 0;
            FUN_1401db408(&DAT_14c9a2a60,&DAT_14c9a2620);
            FUN_1401db408(&DAT_14c9a2a60,&local_118);
            FUN_1401d9b52(&pcStack_110);
            FUN_1401d9b52(&pcStack_90);
            atexit((_func_5014 *)&LAB_142b2b1fc);
            _Init_thread_footer(&DAT_14c9a2a78);
            pcVar9 = &DAT_14c9a2a58;
          }
        }
      }
      else {
        FUN_1470a7c84();
        pcVar9 = &DAT_14c9a2a30;
      }
      local_160._0_4_ = (uint)local_160 & 0xffffff00;
      if (*(longlong *)(param_1 + 0x128) == 0) {
        if (*(longlong *)(param_1 + 0xe8) == 0) {
          local_160._4_4_ = 1;
        }
        else {
          uVar11 = (*(longlong *)(param_1 + 0xe8) + *(longlong *)(param_1 + 0xe0)) - 1;
          local_160._4_4_ =
               **(int **)(*(longlong *)
                           (*(longlong *)(param_1 + 0xd0) +
                           (*(longlong *)(param_1 + 0xd8) - 1U & uVar11 >> 1) * 8) +
                         (ulonglong)((uint)uVar11 & 1) * 8) + 1;
        }
      }
      else {
        local_160._4_4_ = 0;
      }
      uStack_154 = 2;
      uStack_157 = 1;
      local_150 = CONCAT31(local_150._1_3_,1);
      uStack_14c = 0xffffffff;
      uStack_148 = 1;
      uStack_144 = 2;
      local_200 = lVar8;
      local_168 = pcVar9;
      FUN_1401da236(param_1);
      pcStack_90 = (char *)CONCAT44(pcStack_90._4_4_,*(undefined4 *)(param_1 + 0x28));
      local_98 = (char *)*puVar2;
      FUN_1401db600(&local_118,pcVar1,&local_168);
      FUN_1401d9a90(&local_b8);
      uStack_a8 = uStack_108;
      pcStack_a0 = pcStack_100;
      local_b8 = local_118;
      pcStack_b0 = pcStack_110;
      uStack_108 = 0;
      pcStack_100 = (char *)0xf;
      local_118 = (char *)((ulonglong)local_118 & 0xffffffffffffff00);
      FUN_1401d9a90(&local_118);
      *(undefined1 *)(param_1 + 0x9a) = uStack_140;
      *(undefined1 *)(param_1 + 0x9b) = 0;
      local_118 = (char *)0x1100000000;
      pcStack_110 = local_98;
      uStack_108 = CONCAT44(uStack_108._4_4_,pcStack_90._0_4_);
      pcStack_100 = (char *)0x0;
      uStack_f8 = 0;
      local_f0 = 0;
      local_e8 = 0xf;
      local_e0 = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      FUN_1401d7e14(&pcStack_100,&local_b8);
      FUN_1401d9e78(local_200,&local_118);
      FUN_1401d7744(&local_e0);
      FUN_1401d9a90(&pcStack_100);
      FUN_1401d9a90(&local_b8);
      goto LAB_1401d82d6;
    }
  }
  local_1f0 = *(undefined4 *)(param_1 + 0x28);
  ppcVar10 = &local_1f8;
  local_1f8 = (char *)*puVar2;
  pcVar9 = "unknown token";
LAB_1401d98de:
  FUN_1470a7678(param_1,ppcVar10,pcVar9);
  goto LAB_1401d82d6;
LAB_1401d94ce:
  lVar8 = *(longlong *)(param_1 + 0xe8);
  if (lVar8 == 0) goto LAB_1401d8505;
LAB_1401d84c9:
  uVar11 = (lVar8 + *(longlong *)(param_1 + 0xe0)) - 1;
  if (*(int *)(*(longlong *)
                (*(longlong *)
                  (*(longlong *)(param_1 + 0xd0) +
                  (*(longlong *)(param_1 + 0xd8) - 1U & uVar11 >> 1) * 8) +
                (ulonglong)((uint)uVar11 & 1) * 8) + 8) != 1) goto LAB_1401d8505;
  FUN_1401db2aa(param_1);
  goto LAB_1401d94ce;
}



// FUNCTION 1401d9a90 FUN_1401d9a90 body=95 status=ok
// SIG undefined FUN_1401d9a90(void)

void FUN_1401d9a90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0xf < (ulonglong)param_1[3]) {
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((param_1[3] - 0xfffU < 0xfffffffffffff000) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}


